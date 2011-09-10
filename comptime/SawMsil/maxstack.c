/*===========================================================================*/
/*   (SawMsil/maxstack.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/maxstack.scm)*/
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

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

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_stackedz00_bgl
	{
		char dummy;
	}                 *BgL_stackedz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static int BGl_extrazd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_stackzd2exprzd2zzmsil_maxstackz00(obj_t, long, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ne4040z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl__stackedzd2nilzd2zzmsil_maxstackz00(obj_t);
	BGL_EXPORTED_DECL int BGl_maxstackz00zzmsil_maxstackz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern int BGl_typeSiza7eza7zzmsil_typez00(BgL_typez00_bglt);
	static obj_t BGl__extrazd2argszd2default4018z00zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ca4048z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_no4034z75zzmsil_maxstackz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	static obj_t BGl_extrazd2argszd2rtl_funca4021z00zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2stack4054ze3zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl__siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzmsil_maxstackz00();
	static obj_t BGl__z52allocatezd2stackedz80zzmsil_maxstackz00(obj_t);
	static obj_t BGl__maxstackz00zzmsil_maxstackz00(obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_li4044z75zzmsil_maxstackz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4056z83zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_typezd2destzd2funzd2rtl_ca4052zd2zzmsil_maxstackz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static long BGl_popzd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__typezd2destzd2funz00zzmsil_maxstackz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmsil_maxstackz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t BGl_pushzd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl__typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_typezd2destzd2funz00zzmsil_maxstackz00(BgL_rtl_funz00_bglt);
	static obj_t BGl__extrazd2argszd2zzmsil_maxstackz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	static obj_t BGl__siza7ezd2destzd2funza7zzmsil_maxstackz00(obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ap4042z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static bool_t BGl_dfsz00zzmsil_maxstackz00(obj_t, obj_t, long);
	BGL_EXPORTED_DECL int
		BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00(BgL_rtl_funz00_bglt);
	static obj_t BGl_methodzd2initzd2zzmsil_maxstackz00();
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static obj_t BGl_extrazd2argszd2rtl_call4028z00zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl_setmaxz12z12zzmsil_maxstackz00(obj_t, obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_la4032z75zzmsil_maxstackz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_maxstackz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmsil_maxstackz00();
	static obj_t BGl_pushzd2argzd2zzmsil_maxstackz00(obj_t, long, obj_t);
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_fu4046z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl__stackedzf3zf3zzmsil_maxstackz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_maxstackz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_rtl_notseqz00zzsaw_defsz00;
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ef4036z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl_extrazd2argszd2rtl_globa4023z00zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	static long BGl_popzd2argzd2zzmsil_maxstackz00(obj_t, obj_t);
	static BgL_stackedz00_bglt BGl_wideningzd2stackedzd2zzmsil_maxstackz00();
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static int
		BGl_siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00
		(BgL_rtl_funz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_rtl_effectz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_extrazd2argszd2rtl_switc4026z00zzmsil_maxstackz00(obj_t,
		obj_t, obj_t);
	static long BGl_popzd2destzd2zzmsil_maxstackz00(obj_t, BgL_rtl_funz00_bglt,
		obj_t);
	static BgL_stackedz00_bglt BGl_stackedzd2nilzd2zzmsil_maxstackz00();
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_rtl_purez00zzsaw_defsz00;
	static obj_t BGl_objectzd2initzd2zzmsil_maxstackz00();
	static obj_t BGl_stackedz00zzmsil_maxstackz00 = BUNSPEC;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_pu4038z75zzmsil_maxstackz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_maxstackz00();
	static BgL_typez00_bglt
		BGl_typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00
		(BgL_rtl_funz00_bglt);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxstackzd2envzd2zzmsil_maxstackz00,
		BgL_bgl__maxstackza700za7za7ms4305za7, BGl__maxstackz00zzmsil_maxstackz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4277z00zzmsil_maxstackz00,
		BgL_bgl_extraza7d2argsza7d2r4306z00,
		BGl_extrazd2argszd2rtl_funca4021z00zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4280z00zzmsil_maxstackz00,
		BgL_bgl_extraza7d2argsza7d2r4307z00,
		BGl_extrazd2argszd2rtl_switc4026z00zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4279z00zzmsil_maxstackz00,
		BgL_bgl_extraza7d2argsza7d2r4308z00,
		BGl_extrazd2argszd2rtl_globa4023z00zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4281z00zzmsil_maxstackz00,
		BgL_bgl_extraza7d2argsza7d2r4309z00,
		BGl_extrazd2argszd2rtl_call4028z00zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4282z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24310za7,
		BGl_siza7ezd2destzd2funzd2rtl_la4032z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4284z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24311za7,
		BGl_siza7ezd2destzd2funzd2rtl_no4034z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4285z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24312za7,
		BGl_siza7ezd2destzd2funzd2rtl_ef4036z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4286z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24313za7,
		BGl_siza7ezd2destzd2funzd2rtl_pu4038z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4287z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24314za7,
		BGl_siza7ezd2destzd2funzd2rtl_ne4040z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4290z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24315za7,
		BGl_siza7ezd2destzd2funzd2rtl_li4044z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4289z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24316za7,
		BGl_siza7ezd2destzd2funzd2rtl_ap4042z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4291z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24317za7,
		BGl_siza7ezd2destzd2funzd2rtl_fu4046z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4292z00zzmsil_maxstackz00,
		BgL_bgl_siza7a7eza7d2destza7d24318za7,
		BGl_siza7ezd2destzd2funzd2rtl_ca4048z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4293z00zzmsil_maxstackz00,
		BgL_bgl_typeza7d2destza7d2fu4319z00,
		BGl_typezd2destzd2funzd2rtl_ca4052zd2zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4295z00zzmsil_maxstackz00,
		BgL_bgl_objectza7d2za7e3stru4320z00,
		BGl_objectzd2ze3structzd2stack4054ze3zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4297z00zzmsil_maxstackz00,
		BgL_bgl_structza7b2objectza74321z00,
		BGl_structzb2objectzd2ze3objec4056z83zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4273z00zzmsil_maxstackz00,
		BgL_bgl_string4273za700za7za7m4322za7, "extra-args", 10);
	      DEFINE_STRING(BGl_string4274z00zzmsil_maxstackz00,
		BgL_bgl_string4274za700za7za7m4323za7, "size-dest-fun", 13);
	      DEFINE_STRING(BGl_string4275z00zzmsil_maxstackz00,
		BgL_bgl_string4275za700za7za7m4324za7, "type-dest-fun", 13);
	      DEFINE_STRING(BGl_string4276z00zzmsil_maxstackz00,
		BgL_bgl_string4276za700za7za7m4325za7, "no method for", 13);
	      DEFINE_STRING(BGl_string4278z00zzmsil_maxstackz00,
		BgL_bgl_string4278za700za7za7m4326za7, "extra-args::int", 15);
	      DEFINE_STRING(BGl_string4283z00zzmsil_maxstackz00,
		BgL_bgl_string4283za700za7za7m4327za7, "size-dest-fun::int", 18);
	      DEFINE_STRING(BGl_string4288z00zzmsil_maxstackz00,
		BgL_bgl_string4288za700za7za7m4328za7, "size-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string4300z00zzmsil_maxstackz00,
		BgL_bgl_string4300za700za7za7m4329za7,
		"c-null? $obj->bool make-l-procedure cnst-table-set! cnst-table-ref size-dest-fun stacked ",
		89);
	      DEFINE_STRING(BGl_string4294z00zzmsil_maxstackz00,
		BgL_bgl_string4294za700za7za7m4330za7, "type-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string4296z00zzmsil_maxstackz00,
		BgL_bgl_string4296za700za7za7m4331za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4298z00zzmsil_maxstackz00,
		BgL_bgl_string4298za700za7za7m4332za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4299z00zzmsil_maxstackz00,
		BgL_bgl_string4299za700za7za7m4333za7, "msil_maxstack", 13);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_stackedzd2nilzd2envz00zzmsil_maxstackz00,
		BgL_bgl__stackedza7d2nilza7d4334z00,
		BGl__stackedzd2nilzd2zzmsil_maxstackz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_extrazd2argszd2default4018zd2envzd2zzmsil_maxstackz00,
		BgL_bgl__extraza7d2argsza7d24335z00,
		BGl__extrazd2argszd2default4018z00zzmsil_maxstackz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_stackedzf3zd2envz21zzmsil_maxstackz00,
		BgL_bgl__stackedza7f3za7f3za7za74336z00,
		BGl__stackedzf3zf3zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7ezd2destzd2funzd2defaul4029zd2envza7zzmsil_maxstackz00,
		BgL_bgl__siza7a7eza7d2destza7d4337za7,
		BGl__siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
		BgL_bgl__siza7a7eza7d2destza7d4338za7,
		BGl__siza7ezd2destzd2funza7zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
		BgL_bgl__extraza7d2argsza7d24339z00, BGl__extrazd2argszd2zzmsil_maxstackz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2destzd2funzd2defaul4049zd2envz00zzmsil_maxstackz00,
		BgL_bgl__typeza7d2destza7d2f4340z00,
		BGl__typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_typezd2destzd2funzd2envzd2zzmsil_maxstackz00,
		BgL_bgl__typeza7d2destza7d2f4341z00,
		BGl__typezd2destzd2funz00zzmsil_maxstackz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2stackedzd2envz52zzmsil_maxstackz00,
		BgL_bgl__za752allocateza7d2s4342z00,
		BGl__z52allocatezd2stackedz80zzmsil_maxstackz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(long
		BgL_checksumz00_2391, char *BgL_fromz00_2392)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_maxstackz00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_maxstackz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_maxstackz00();
					BGl_cnstzd2initzd2zzmsil_maxstackz00();
					BGl_importedzd2moduleszd2initz00zzmsil_maxstackz00();
					BGl_objectzd2initzd2zzmsil_maxstackz00();
					BGl_genericzd2initzd2zzmsil_maxstackz00();
					BGl_methodzd2initzd2zzmsil_maxstackz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"msil_maxstack");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"msil_maxstack");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "msil_maxstack");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_maxstack");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			{	/* SawMsil/maxstack.scm 1 */
				obj_t BgL_cportz00_2362;

				BgL_cportz00_2362 =
					bgl_open_input_string(BGl_string4300z00zzmsil_maxstackz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2363;

					BgL_iz00_2363 = ((long) 6);
				BgL_loopz00_2364:
					if ((BgL_iz00_2363 == ((long) -1)))
						{	/* SawMsil/maxstack.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/maxstack.scm 1 */
							{	/* SawMsil/maxstack.scm 1 */
								obj_t BgL_arg4303z00_2366;

								{	/* SawMsil/maxstack.scm 1 */

									{	/* SawMsil/maxstack.scm 1 */
										obj_t BgL_locationz00_2368;

										BgL_locationz00_2368 = BBOOL(((bool_t) 0));
										{	/* SawMsil/maxstack.scm 1 */

											BgL_arg4303z00_2366 =
												BGl_readz00zz__readerz00(BgL_cportz00_2362,
												BgL_locationz00_2368);
										}
									}
								}
								{	/* SawMsil/maxstack.scm 1 */
									int BgL_auxz00_2412;

									BgL_auxz00_2412 = (int) (BgL_iz00_2363);
									CNST_TABLE_SET(BgL_auxz00_2412, BgL_arg4303z00_2366);
							}}
							{	/* SawMsil/maxstack.scm 1 */
								int BgL_auxz00_2369;

								BgL_auxz00_2369 = (int) ((BgL_iz00_2363 - ((long) 1)));
								{
									long BgL_iz00_2417;

									BgL_iz00_2417 = (long) (BgL_auxz00_2369);
									BgL_iz00_2363 = BgL_iz00_2417;
									goto BgL_loopz00_2364;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			return BUNSPEC;
		}
	}



/* maxstack */
	BGL_EXPORTED_DEF int BGl_maxstackz00zzmsil_maxstackz00(obj_t BgL_lz00_1)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 11 */
			{	/* SawMsil/maxstack.scm 12 */
				obj_t BgL_maxz00_1150;

				{	/* SawMsil/maxstack.scm 12 */
					obj_t BgL_cellvalz00_2419;

					BgL_cellvalz00_2419 = BINT(((long) 0));
					BgL_maxz00_1150 = MAKE_CELL(BgL_cellvalz00_2419);
				}
				{	/* SawMsil/maxstack.scm 13 */
					obj_t BgL_setmaxz12z12_2278;

					{
						int BgL_auxz00_2421;

						BgL_auxz00_2421 = (int) (((long) 1));
						BgL_setmaxz12z12_2278 = MAKE_EL_PROCEDURE_1(BgL_auxz00_2421);
					}
					PROCEDURE_1_EL_SET(BgL_setmaxz12z12_2278,
						(int) (((long) 0)), BgL_maxz00_1150);
					BGl_dfsz00zzmsil_maxstackz00(BgL_setmaxz12z12_2278,
						CAR(BgL_lz00_1), ((long) 0));
					return CINT(CELL_REF(BgL_maxz00_1150));
				}
			}
		}
	}



/* dfs */
	bool_t BGl_dfsz00zzmsil_maxstackz00(obj_t BgL_setmaxz12z12_2361,
		obj_t BgL_bz00_1155, long BgL_stkz00_1156)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 14 */
			{	/* SawMsil/maxstack.scm 15 */
				BgL_blockz00_bglt BgL_obj4002z00_1158;

				BgL_obj4002z00_1158 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1155));
				{	/* SawMsil/maxstack.scm 15 */
					BgL_stackedz00_bglt BgL_arg4058z00_1159;

					BgL_arg4058z00_1159 = BGl_wideningzd2stackedzd2zzmsil_maxstackz00();
					{	/* SawMsil/maxstack.scm 15 */
						obj_t BgL_auxz00_2434;

						BgL_objectz00_bglt BgL_auxz00_2432;

						BgL_auxz00_2434 = (obj_t) (BgL_arg4058z00_1159);
						BgL_auxz00_2432 = (BgL_objectz00_bglt) (BgL_obj4002z00_1158);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2432, BgL_auxz00_2434);
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4002z00_1158),
					BGl_classzd2numzd2zz__objectz00(BGl_stackedz00zzmsil_maxstackz00));
				BgL_obj4002z00_1158;
			}
			{	/* SawMsil/maxstack.scm 16 */
				obj_t BgL_g4009z00_1161;

				{
					BgL_blockz00_bglt BgL_auxz00_2440;

					BgL_auxz00_2440 = (BgL_blockz00_bglt) (BgL_bz00_1155);
					BgL_g4009z00_1161 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2440))->BgL_firstz00);
				}
				{
					obj_t BgL_l4007z00_1163;

					BgL_l4007z00_1163 = BgL_g4009z00_1161;
				BgL_zc3anonymousza34060ze3z83_1164:
					if (PAIRP(BgL_l4007z00_1163))
						{	/* SawMsil/maxstack.scm 17 */
							{	/* SawMsil/maxstack.scm 16 */
								obj_t BgL_insz00_1166;

								BgL_insz00_1166 = CAR(BgL_l4007z00_1163);
								{	/* SawMsil/maxstack.scm 16 */
									long BgL_stkz00_1918;

									BgL_stkz00_1918 = BgL_stkz00_1156;
									{	/* SawMsil/maxstack.scm 16 */
										obj_t BgL_arg4069z00_1920;

										BgL_rtl_funz00_bglt BgL_arg4070z00_1921;

										obj_t BgL_arg4071z00_1922;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_2446;

											BgL_auxz00_2446 = (BgL_rtl_insz00_bglt) (BgL_insz00_1166);
											BgL_arg4069z00_1920 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2446))->
												BgL_destz00);
										}
										{
											BgL_rtl_insz00_bglt BgL_auxz00_2449;

											BgL_auxz00_2449 = (BgL_rtl_insz00_bglt) (BgL_insz00_1166);
											BgL_arg4070z00_1921 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2449))->
												BgL_funz00);
										}
										BgL_arg4071z00_1922 =
											BGl_stackzd2exprzd2zzmsil_maxstackz00(BgL_insz00_1166,
											BgL_stkz00_1918, BgL_setmaxz12z12_2361);
										BgL_stkz00_1156 =
											BGl_popzd2destzd2zzmsil_maxstackz00(BgL_arg4069z00_1920,
											BgL_arg4070z00_1921, BgL_arg4071z00_1922);
							}}}
							{
								obj_t BgL_l4007z00_2454;

								BgL_l4007z00_2454 = CDR(BgL_l4007z00_1163);
								BgL_l4007z00_1163 = BgL_l4007z00_2454;
								goto BgL_zc3anonymousza34060ze3z83_1164;
							}
						}
					else
						{	/* SawMsil/maxstack.scm 17 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMsil/maxstack.scm 18 */
				obj_t BgL_g4012z00_1169;

				{
					BgL_blockz00_bglt BgL_auxz00_2456;

					BgL_auxz00_2456 = (BgL_blockz00_bglt) (BgL_bz00_1155);
					BgL_g4012z00_1169 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2456))->BgL_succsz00);
				}
				{
					obj_t BgL_l4010z00_1171;

					BgL_l4010z00_1171 = BgL_g4012z00_1169;
				BgL_zc3anonymousza34063ze3z83_1172:
					if (PAIRP(BgL_l4010z00_1171))
						{	/* SawMsil/maxstack.scm 19 */
							{	/* SawMsil/maxstack.scm 18 */
								obj_t BgL_sz00_1174;

								BgL_sz00_1174 = CAR(BgL_l4010z00_1171);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1174,
										BGl_stackedz00zzmsil_maxstackz00))
									{	/* SawMsil/maxstack.scm 18 */
										((bool_t) 0);
									}
								else
									{	/* SawMsil/maxstack.scm 18 */
										BGl_dfsz00zzmsil_maxstackz00(BgL_setmaxz12z12_2361,
											BgL_sz00_1174, BgL_stkz00_1156);
									}
							}
							{
								obj_t BgL_l4010z00_2465;

								BgL_l4010z00_2465 = CDR(BgL_l4010z00_1171);
								BgL_l4010z00_1171 = BgL_l4010z00_2465;
								goto BgL_zc3anonymousza34063ze3z83_1172;
							}
						}
					else
						{	/* SawMsil/maxstack.scm 19 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _maxstack */
	obj_t BGl__maxstackz00zzmsil_maxstackz00(obj_t BgL_envz00_2279,
		obj_t BgL_lz00_2280)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 11 */
			return BINT(BGl_maxstackz00zzmsil_maxstackz00(BgL_lz00_2280));
		}
	}



/* setmax! */
	obj_t BGl_setmaxz12z12zzmsil_maxstackz00(obj_t BgL_envz00_2281,
		obj_t BgL_nz00_2283)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 13 */
			{	/* SawMsil/maxstack.scm 13 */
				obj_t BgL_maxz00_2282;

				BgL_maxz00_2282 =
					PROCEDURE_1_EL_REF(BgL_envz00_2281, (int) (((long) 0)));
				{
					obj_t BgL_nz00_1179;

					BgL_nz00_1179 = BgL_nz00_2283;
					if (
						((long) CINT(BgL_nz00_1179) >
							(long) CINT(CELL_REF(BgL_maxz00_2282))))
						{	/* SawMsil/maxstack.scm 13 */
							CELL_SET(BgL_maxz00_2282, BgL_nz00_1179);
						}
					else
						{	/* SawMsil/maxstack.scm 13 */
							BFALSE;
						}
					return BgL_nz00_1179;
				}
			}
		}
	}



/* stack-expr */
	obj_t BGl_stackzd2exprzd2zzmsil_maxstackz00(obj_t BgL_insz00_5,
		long BgL_stkz00_6, obj_t BgL_maxz00_7)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 26 */
			{	/* SawMsil/maxstack.scm 28 */
				obj_t BgL_stkz00_1188;

				{	/* SawMsil/maxstack.scm 28 */
					obj_t BgL_arg4078z00_1195;

					{	/* SawMsil/maxstack.scm 28 */
						BgL_rtl_funz00_bglt BgL_arg4079z00_1196;

						obj_t BgL_arg4080z00_1197;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_2475;

							BgL_auxz00_2475 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
							BgL_arg4079z00_1196 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2475))->BgL_funz00);
						}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_2478;

							BgL_auxz00_2478 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
							BgL_arg4080z00_1197 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2478))->BgL_argsz00);
						}
						BgL_arg4078z00_1195 =
							BGl_pushzd2argszd2zzmsil_maxstackz00(BgL_arg4079z00_1196,
							BgL_arg4080z00_1197, BINT(BgL_stkz00_6), BgL_maxz00_7);
					}
					BgL_stkz00_1188 =
						BGl_setmaxz12z12zzmsil_maxstackz00(BgL_maxz00_7,
						BgL_arg4078z00_1195);
				}
				{	/* SawMsil/maxstack.scm 29 */
					long BgL_arg4072z00_1189;

					{	/* SawMsil/maxstack.scm 29 */
						obj_t BgL_arg4073z00_1190;

						BgL_rtl_funz00_bglt BgL_arg4074z00_1191;

						long BgL_arg4075z00_1192;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_2485;

							BgL_auxz00_2485 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
							BgL_arg4073z00_1190 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2485))->BgL_destz00);
						}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_2488;

							BgL_auxz00_2488 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
							BgL_arg4074z00_1191 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2488))->BgL_funz00);
						}
						{	/* SawMsil/maxstack.scm 29 */
							BgL_rtl_funz00_bglt BgL_arg4076z00_1193;

							obj_t BgL_arg4077z00_1194;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_2491;

								BgL_auxz00_2491 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
								BgL_arg4076z00_1193 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2491))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_2494;

								BgL_auxz00_2494 = (BgL_rtl_insz00_bglt) (BgL_insz00_5);
								BgL_arg4077z00_1194 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2494))->BgL_argsz00);
							}
							BgL_arg4075z00_1192 =
								BGl_popzd2argszd2zzmsil_maxstackz00(BgL_arg4076z00_1193,
								BgL_arg4077z00_1194, BgL_stkz00_1188);
						}
						{	/* SawMsil/maxstack.scm 29 */
							int BgL_arg4098z00_1956;

							if (CBOOL(BgL_arg4073z00_1190))
								{	/* SawMsil/maxstack.scm 29 */
									BgL_typez00_bglt BgL_arg4099z00_1957;

									{
										BgL_rtl_regz00_bglt BgL_auxz00_2500;

										BgL_auxz00_2500 =
											(BgL_rtl_regz00_bglt) (BgL_arg4073z00_1190);
										BgL_arg4099z00_1957 =
											(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2500))->
											BgL_typez00);
									}
									BgL_arg4098z00_1956 =
										BGl_typeSiza7eza7zzmsil_typez00(BgL_arg4099z00_1957);
								}
							else
								{	/* SawMsil/maxstack.scm 29 */
									BgL_arg4098z00_1956 =
										BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00
										(BgL_arg4074z00_1191);
								}
							BgL_arg4072z00_1189 =
								(BgL_arg4075z00_1192 + (long) (BgL_arg4098z00_1956));
					}}
					return
						BGl_setmaxz12z12zzmsil_maxstackz00(BgL_maxz00_7,
						BINT(BgL_arg4072z00_1189));
				}
			}
		}
	}



/* push-args */
	obj_t BGl_pushzd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt BgL_funz00_8,
		obj_t BgL_argsz00_9, obj_t BgL_stkz00_10, obj_t BgL_maxz00_11)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 31 */
			{	/* SawMsil/maxstack.scm 32 */
				int BgL_arg4081z00_1198;

				{	/* SawMsil/maxstack.scm 32 */
					int BgL_res4248z00_1988;

					{	/* SawMsil/maxstack.scm 32 */
						obj_t BgL_method4019z00_1963;

						{	/* SawMsil/maxstack.scm 32 */
							BgL_objectz00_bglt BgL_objz00_1964;

							BgL_objz00_1964 = (BgL_objectz00_bglt) (BgL_funz00_8);
							{	/* SawMsil/maxstack.scm 32 */
								long BgL_objzd2classzd2numz00_1965;

								BgL_objzd2classzd2numz00_1965 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1964);
								{	/* SawMsil/maxstack.scm 32 */
									obj_t BgL_arg2643z00_1966;

									BgL_arg2643z00_1966 =
										PROCEDURE_REF(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
										(int) (((long) 1)));
									{	/* SawMsil/maxstack.scm 32 */
										obj_t BgL_arrayz00_1968;

										int BgL_offsetz00_1969;

										BgL_arrayz00_1968 = BgL_arg2643z00_1966;
										BgL_offsetz00_1969 = (int) (BgL_objzd2classzd2numz00_1965);
										{	/* SawMsil/maxstack.scm 32 */
											long BgL_offsetz00_1970;

											BgL_offsetz00_1970 =
												((long) (BgL_offsetz00_1969) - OBJECT_TYPE);
											{	/* SawMsil/maxstack.scm 32 */
												long BgL_modz00_1971;

												{	/* SawMsil/maxstack.scm 32 */
													int BgL_arg2645z00_1972;

													BgL_arg2645z00_1972 = (int) (((long) 16));
													{	/* SawMsil/maxstack.scm 32 */
														long BgL_auxz00_2518;

														BgL_auxz00_2518 = (long) (BgL_arg2645z00_1972);
														BgL_modz00_1971 =
															(BgL_offsetz00_1970 / BgL_auxz00_2518);
												}}
												{	/* SawMsil/maxstack.scm 32 */
													long BgL_restz00_1973;

													{	/* SawMsil/maxstack.scm 32 */
														int BgL_arg2644z00_1974;

														BgL_arg2644z00_1974 = (int) (((long) 16));
														{	/* SawMsil/maxstack.scm 32 */
															long BgL_auxz00_2522;

															BgL_auxz00_2522 = (long) (BgL_arg2644z00_1974);
															BgL_restz00_1973 =
																(BgL_offsetz00_1970 % BgL_auxz00_2522);
													}}
													{	/* SawMsil/maxstack.scm 32 */

														BgL_method4019z00_1963 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1968,
																(int) (BgL_modz00_1971)),
															(int) (BgL_restz00_1973));
						}}}}}}}}
						BgL_res4248z00_1988 =
							CINT(PROCEDURE_ENTRY(BgL_method4019z00_1963)
							(BgL_method4019z00_1963, (obj_t) (BgL_funz00_8), BgL_argsz00_9,
								BEOA));
					}
					BgL_arg4081z00_1198 = BgL_res4248z00_1988;
				}
				{	/* SawMsil/maxstack.scm 32 */
					long BgL_za71za7_1989;

					long BgL_za72za7_1990;

					BgL_za71za7_1989 = (long) (BgL_arg4081z00_1198);
					BgL_za72za7_1990 = (long) CINT(BgL_stkz00_10);
					BgL_stkz00_10 = BINT((BgL_za71za7_1989 + BgL_za72za7_1990));
			}}
			{
				obj_t BgL_l4013z00_1200;

				BgL_l4013z00_1200 = BgL_argsz00_9;
			BgL_zc3anonymousza34082ze3z83_1201:
				if (PAIRP(BgL_l4013z00_1200))
					{	/* SawMsil/maxstack.scm 33 */
						{	/* SawMsil/maxstack.scm 33 */
							obj_t BgL_az00_1203;

							BgL_az00_1203 = CAR(BgL_l4013z00_1200);
							BgL_stkz00_10 =
								BGl_pushzd2argzd2zzmsil_maxstackz00(BgL_az00_1203,
								(long) CINT(BgL_stkz00_10), BgL_maxz00_11);
						}
						{
							obj_t BgL_l4013z00_2542;

							BgL_l4013z00_2542 = CDR(BgL_l4013z00_1200);
							BgL_l4013z00_1200 = BgL_l4013z00_2542;
							goto BgL_zc3anonymousza34082ze3z83_1201;
						}
					}
				else
					{	/* SawMsil/maxstack.scm 33 */
						((bool_t) 1);
					}
			}
			return BgL_stkz00_10;
		}
	}



/* push-arg */
	obj_t BGl_pushzd2argzd2zzmsil_maxstackz00(obj_t BgL_argz00_12,
		long BgL_stkz00_13, obj_t BgL_maxz00_14)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 36 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_12,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMsil/maxstack.scm 41 */
					int BgL_arg4087z00_1208;

					{	/* SawMsil/maxstack.scm 41 */
						BgL_typez00_bglt BgL_arg4089z00_1209;

						{
							BgL_rtl_regz00_bglt BgL_auxz00_2546;

							BgL_auxz00_2546 = (BgL_rtl_regz00_bglt) (BgL_argz00_12);
							BgL_arg4089z00_1209 =
								(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2546))->BgL_typez00);
						}
						BgL_arg4087z00_1208 =
							BGl_typeSiza7eza7zzmsil_typez00(BgL_arg4089z00_1209);
					}
					return BINT((BgL_stkz00_13 + (long) (BgL_arg4087z00_1208)));
				}
			else
				{	/* SawMsil/maxstack.scm 37 */
					return
						BGl_stackzd2exprzd2zzmsil_maxstackz00(BgL_argz00_12, BgL_stkz00_13,
						BgL_maxz00_14);
				}
		}
	}



/* pop-args */
	long BGl_popzd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt BgL_funz00_16,
		obj_t BgL_argsz00_17, obj_t BgL_stkz00_18)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 46 */
			{
				obj_t BgL_l4015z00_1211;

				BgL_l4015z00_1211 = BgL_argsz00_17;
			BgL_zc3anonymousza34090ze3z83_1212:
				if (PAIRP(BgL_l4015z00_1211))
					{	/* SawMsil/maxstack.scm 47 */
						{	/* SawMsil/maxstack.scm 47 */
							obj_t BgL_az00_1214;

							BgL_az00_1214 = CAR(BgL_l4015z00_1211);
							BgL_stkz00_18 =
								BINT(BGl_popzd2argzd2zzmsil_maxstackz00(BgL_az00_1214,
									BgL_stkz00_18));
						}
						{
							obj_t BgL_l4015z00_2559;

							BgL_l4015z00_2559 = CDR(BgL_l4015z00_1211);
							BgL_l4015z00_1211 = BgL_l4015z00_2559;
							goto BgL_zc3anonymousza34090ze3z83_1212;
						}
					}
				else
					{	/* SawMsil/maxstack.scm 47 */
						((bool_t) 1);
					}
			}
			{	/* SawMsil/maxstack.scm 48 */
				int BgL_arg4093z00_1217;

				{	/* SawMsil/maxstack.scm 48 */
					int BgL_res4251z00_2029;

					{	/* SawMsil/maxstack.scm 48 */
						obj_t BgL_method4019z00_2004;

						{	/* SawMsil/maxstack.scm 48 */
							BgL_objectz00_bglt BgL_objz00_2005;

							BgL_objz00_2005 = (BgL_objectz00_bglt) (BgL_funz00_16);
							{	/* SawMsil/maxstack.scm 48 */
								long BgL_objzd2classzd2numz00_2006;

								BgL_objzd2classzd2numz00_2006 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2005);
								{	/* SawMsil/maxstack.scm 48 */
									obj_t BgL_arg2643z00_2007;

									BgL_arg2643z00_2007 =
										PROCEDURE_REF(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
										(int) (((long) 1)));
									{	/* SawMsil/maxstack.scm 48 */
										obj_t BgL_arrayz00_2009;

										int BgL_offsetz00_2010;

										BgL_arrayz00_2009 = BgL_arg2643z00_2007;
										BgL_offsetz00_2010 = (int) (BgL_objzd2classzd2numz00_2006);
										{	/* SawMsil/maxstack.scm 48 */
											long BgL_offsetz00_2011;

											BgL_offsetz00_2011 =
												((long) (BgL_offsetz00_2010) - OBJECT_TYPE);
											{	/* SawMsil/maxstack.scm 48 */
												long BgL_modz00_2012;

												{	/* SawMsil/maxstack.scm 48 */
													int BgL_arg2645z00_2013;

													BgL_arg2645z00_2013 = (int) (((long) 16));
													{	/* SawMsil/maxstack.scm 48 */
														long BgL_auxz00_2569;

														BgL_auxz00_2569 = (long) (BgL_arg2645z00_2013);
														BgL_modz00_2012 =
															(BgL_offsetz00_2011 / BgL_auxz00_2569);
												}}
												{	/* SawMsil/maxstack.scm 48 */
													long BgL_restz00_2014;

													{	/* SawMsil/maxstack.scm 48 */
														int BgL_arg2644z00_2015;

														BgL_arg2644z00_2015 = (int) (((long) 16));
														{	/* SawMsil/maxstack.scm 48 */
															long BgL_auxz00_2573;

															BgL_auxz00_2573 = (long) (BgL_arg2644z00_2015);
															BgL_restz00_2014 =
																(BgL_offsetz00_2011 % BgL_auxz00_2573);
													}}
													{	/* SawMsil/maxstack.scm 48 */

														BgL_method4019z00_2004 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2009,
																(int) (BgL_modz00_2012)),
															(int) (BgL_restz00_2014));
						}}}}}}}}
						BgL_res4251z00_2029 =
							CINT(PROCEDURE_ENTRY(BgL_method4019z00_2004)
							(BgL_method4019z00_2004, (obj_t) (BgL_funz00_16), BgL_argsz00_17,
								BEOA));
					}
					BgL_arg4093z00_1217 = BgL_res4251z00_2029;
				}
				return ((long) CINT(BgL_stkz00_18) - (long) (BgL_arg4093z00_1217));
		}}
	}



/* pop-arg */
	long BGl_popzd2argzd2zzmsil_maxstackz00(obj_t BgL_argz00_19,
		obj_t BgL_stkz00_20)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 50 */
			{	/* SawMsil/maxstack.scm 51 */
				obj_t BgL_regz00_1218;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_19,
						BGl_rtl_regz00zzsaw_defsz00))
					{	/* SawMsil/maxstack.scm 51 */
						BgL_regz00_1218 = BgL_argz00_19;
					}
				else
					{
						BgL_rtl_insz00_bglt BgL_auxz00_2589;

						BgL_auxz00_2589 = (BgL_rtl_insz00_bglt) (BgL_argz00_19);
						BgL_regz00_1218 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2589))->BgL_destz00);
					}
				{	/* SawMsil/maxstack.scm 52 */
					int BgL_arg4094z00_1219;

					{	/* SawMsil/maxstack.scm 52 */
						BgL_typez00_bglt BgL_arg4096z00_1220;

						{
							BgL_rtl_regz00_bglt BgL_auxz00_2592;

							BgL_auxz00_2592 = (BgL_rtl_regz00_bglt) (BgL_regz00_1218);
							BgL_arg4096z00_1220 =
								(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2592))->BgL_typez00);
						}
						BgL_arg4094z00_1219 =
							BGl_typeSiza7eza7zzmsil_typez00(BgL_arg4096z00_1220);
					}
					return ((long) CINT(BgL_stkz00_20) - (long) (BgL_arg4094z00_1219));
		}}}
	}



/* pop-dest */
	long BGl_popzd2destzd2zzmsil_maxstackz00(obj_t BgL_destz00_24,
		BgL_rtl_funz00_bglt BgL_funz00_25, obj_t BgL_stkz00_26)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 57 */
			{	/* SawMsil/maxstack.scm 58 */
				int BgL_arg4100z00_2069;

				if (CBOOL(BgL_destz00_24))
					{	/* SawMsil/maxstack.scm 58 */
						BgL_typez00_bglt BgL_arg4101z00_2070;

						{
							BgL_rtl_regz00_bglt BgL_auxz00_2601;

							BgL_auxz00_2601 = (BgL_rtl_regz00_bglt) (BgL_destz00_24);
							BgL_arg4101z00_2070 =
								(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2601))->BgL_typez00);
						}
						BgL_arg4100z00_2069 =
							BGl_typeSiza7eza7zzmsil_typez00(BgL_arg4101z00_2070);
					}
				else
					{	/* SawMsil/maxstack.scm 58 */
						int BgL_res4257z00_2098;

						{	/* SawMsil/maxstack.scm 58 */
							obj_t BgL_method4030z00_2073;

							{	/* SawMsil/maxstack.scm 58 */
								BgL_objectz00_bglt BgL_objz00_2074;

								BgL_objz00_2074 = (BgL_objectz00_bglt) (BgL_funz00_25);
								{	/* SawMsil/maxstack.scm 58 */
									long BgL_objzd2classzd2numz00_2075;

									BgL_objzd2classzd2numz00_2075 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2074);
									{	/* SawMsil/maxstack.scm 58 */
										obj_t BgL_arg2643z00_2076;

										BgL_arg2643z00_2076 =
											PROCEDURE_REF
											(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
											(int) (((long) 1)));
										{	/* SawMsil/maxstack.scm 58 */
											obj_t BgL_arrayz00_2078;

											int BgL_offsetz00_2079;

											BgL_arrayz00_2078 = BgL_arg2643z00_2076;
											BgL_offsetz00_2079 =
												(int) (BgL_objzd2classzd2numz00_2075);
											{	/* SawMsil/maxstack.scm 58 */
												long BgL_offsetz00_2080;

												BgL_offsetz00_2080 =
													((long) (BgL_offsetz00_2079) - OBJECT_TYPE);
												{	/* SawMsil/maxstack.scm 58 */
													long BgL_modz00_2081;

													{	/* SawMsil/maxstack.scm 58 */
														int BgL_arg2645z00_2082;

														BgL_arg2645z00_2082 = (int) (((long) 16));
														{	/* SawMsil/maxstack.scm 58 */
															long BgL_auxz00_2613;

															BgL_auxz00_2613 = (long) (BgL_arg2645z00_2082);
															BgL_modz00_2081 =
																(BgL_offsetz00_2080 / BgL_auxz00_2613);
													}}
													{	/* SawMsil/maxstack.scm 58 */
														long BgL_restz00_2083;

														{	/* SawMsil/maxstack.scm 58 */
															int BgL_arg2644z00_2084;

															BgL_arg2644z00_2084 = (int) (((long) 16));
															{	/* SawMsil/maxstack.scm 58 */
																long BgL_auxz00_2617;

																BgL_auxz00_2617 = (long) (BgL_arg2644z00_2084);
																BgL_restz00_2083 =
																	(BgL_offsetz00_2080 % BgL_auxz00_2617);
														}}
														{	/* SawMsil/maxstack.scm 58 */

															BgL_method4030z00_2073 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2078,
																	(int) (BgL_modz00_2081)),
																(int) (BgL_restz00_2083));
							}}}}}}}}
							BgL_res4257z00_2098 =
								CINT(PROCEDURE_ENTRY(BgL_method4030z00_2073)
								(BgL_method4030z00_2073, (obj_t) (BgL_funz00_25), BEOA));
						}
						BgL_arg4100z00_2069 = BgL_res4257z00_2098;
					}
				return ((long) CINT(BgL_stkz00_26) - (long) (BgL_arg4100z00_2069));
		}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			{	/* SawMsil/maxstack.scm 9 */
				obj_t BgL_arg4102z00_1226;

				obj_t BgL_arg4103z00_1227;

				obj_t BgL_arg4106z00_1230;

				BgL_arg4102z00_1226 = CNST_TABLE_REF(((long) 0));
				BgL_arg4103z00_1227 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMsil/maxstack.scm 9 */
					obj_t BgL_v4017z00_1231;

					BgL_v4017z00_1231 = create_vector((int) (((long) 0)));
					BgL_arg4106z00_1230 = BgL_v4017z00_1231;
				}
				BGl_stackedz00zzmsil_maxstackz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4102z00_1226,
					BgL_arg4103z00_1227, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2stackedzd2envz52zzmsil_maxstackz00,
					BGl_stackedzd2nilzd2envz00zzmsil_maxstackz00,
					BGl_stackedzf3zd2envz21zzmsil_maxstackz00, ((long) 68683664), BFALSE,
					BFALSE, BgL_arg4106z00_1230);
			}
			return (BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _stacked? */
	obj_t BGl__stackedzf3zf3zzmsil_maxstackz00(obj_t BgL_envz00_2292,
		obj_t BgL_obj3986z00_2293)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3986z00_2293,
					BGl_stackedz00zzmsil_maxstackz00));
		}
	}



/* widening-stacked */
	BgL_stackedz00_bglt BGl_wideningzd2stackedzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			{	/* SawMsil/maxstack.scm 9 */
				BgL_stackedz00_bglt BgL_new3969z00_1232;

				BgL_new3969z00_1232 =
					((BgL_stackedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_stackedz00_bgl))));
				return BgL_new3969z00_1232;
			}
		}
	}



/* _%allocate-stacked */
	obj_t BGl__z52allocatezd2stackedz80zzmsil_maxstackz00(obj_t BgL_envz00_2290)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			{	/* SawMsil/maxstack.scm 9 */
				BgL_blockz00_bglt BgL_auxz00_2638;

				{	/* SawMsil/maxstack.scm 9 */
					BgL_blockz00_bglt BgL_res4304z00_2375;

					{	/* SawMsil/maxstack.scm 9 */
						BgL_blockz00_bglt BgL_new3979z00_2373;

						BgL_new3979z00_2373 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3979z00_2373),
							BGl_classzd2numzd2zz__objectz00
							(BGl_stackedz00zzmsil_maxstackz00));
						{	/* SawMsil/maxstack.scm 9 */
							BgL_objectz00_bglt BgL_auxz00_2643;

							BgL_auxz00_2643 = (BgL_objectz00_bglt) (BgL_new3979z00_2373);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2643, BFALSE);
						}
						BgL_res4304z00_2375 = BgL_new3979z00_2373;
					}
					BgL_auxz00_2638 = BgL_res4304z00_2375;
				}
				return (obj_t) (BgL_auxz00_2638);
			}
		}
	}



/* stacked-nil */
	BgL_stackedz00_bglt BGl_stackedzd2nilzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			if ((BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00 == BUNSPEC))
				{	/* SawMsil/maxstack.scm 9 */
					{	/* SawMsil/maxstack.scm 9 */
						BgL_blockz00_bglt BgL_res4258z00_2110;

						{	/* SawMsil/maxstack.scm 9 */
							BgL_blockz00_bglt BgL_new3967z00_2106;

							BgL_new3967z00_2106 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3967z00_2106),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMsil/maxstack.scm 9 */
								BgL_objectz00_bglt BgL_auxz00_2653;

								BgL_auxz00_2653 = (BgL_objectz00_bglt) (BgL_new3967z00_2106);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2653, BFALSE);
							}
							BgL_res4258z00_2110 = BgL_new3967z00_2106;
						}
						BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00 =
							(obj_t) (BgL_res4258z00_2110);
					}
					{	/* SawMsil/maxstack.scm 9 */
						obj_t BgL_arg4114z00_1243;

						BgL_arg4114z00_1243 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMsil/maxstack.scm 9 */
							BgL_blockz00_bglt BgL_res4259z00_2120;

							{	/* SawMsil/maxstack.scm 9 */
								BgL_blockz00_bglt BgL_new3961z00_2111;

								int BgL_label3957z00_2112;

								BgL_new3961z00_2111 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00);
								BgL_label3957z00_2112 = (int) (((long) 0));
								{	/* SawMsil/maxstack.scm 9 */
									int BgL_label3957z00_2116;

									obj_t BgL_preds3958z00_2117;

									obj_t BgL_succs3959z00_2118;

									obj_t BgL_first3960z00_2119;

									BgL_label3957z00_2116 = BgL_label3957z00_2112;
									BgL_preds3958z00_2117 = BNIL;
									BgL_succs3959z00_2118 = BNIL;
									BgL_first3960z00_2119 = BgL_arg4114z00_1243;
									((((BgL_blockz00_bglt) CREF(BgL_new3961z00_2111))->
											BgL_labelz00) = ((int) BgL_label3957z00_2116), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3961z00_2111))->
											BgL_predsz00) = ((obj_t) BgL_preds3958z00_2117), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3961z00_2111))->
											BgL_succsz00) = ((obj_t) BgL_succs3959z00_2118), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3961z00_2111))->
											BgL_firstz00) = ((obj_t) BgL_first3960z00_2119), BUNSPEC);
									BgL_res4259z00_2120 = BgL_new3961z00_2111;
							}} BgL_res4259z00_2120;
					}}
					{	/* SawMsil/maxstack.scm 9 */
						long BgL_arg4115z00_1244;

						BgL_arg4115z00_1244 =
							BGl_classzd2numzd2zz__objectz00(BGl_stackedz00zzmsil_maxstackz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00),
							BgL_arg4115z00_1244);
					}
					{	/* SawMsil/maxstack.scm 9 */
						BgL_stackedz00_bglt BgL_arg4116z00_1245;

						BgL_arg4116z00_1245 = BGl_wideningzd2stackedzd2zzmsil_maxstackz00();
						{	/* SawMsil/maxstack.scm 9 */
							obj_t BgL_auxz00_2670;

							BgL_objectz00_bglt BgL_auxz00_2668;

							BgL_auxz00_2670 = (obj_t) (BgL_arg4116z00_1245);
							BgL_auxz00_2668 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2668, BgL_auxz00_2670);
				}}}
			else
				{	/* SawMsil/maxstack.scm 9 */
					BFALSE;
				}
			return
				(BgL_stackedz00_bglt) (BGl_z52thezd2stackedzd2nilz52zzmsil_maxstackz00);
		}
	}



/* _stacked-nil */
	obj_t BGl__stackedzd2nilzd2zzmsil_maxstackz00(obj_t BgL_envz00_2291)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			return (obj_t) (BGl_stackedzd2nilzd2zzmsil_maxstackz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
				BGl_extrazd2argszd2default4018zd2envzd2zzmsil_maxstackz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4273z00zzmsil_maxstackz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_siza7ezd2destzd2funzd2defaul4029zd2envza7zzmsil_maxstackz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4274z00zzmsil_maxstackz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzmsil_maxstackz00,
				BGl_typezd2destzd2funzd2defaul4049zd2envz00zzmsil_maxstackz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4275z00zzmsil_maxstackz00);
		}
	}



/* extra-args */
	int BGl_extrazd2argszd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt BgL_funz00_27,
		obj_t BgL_argsz00_28)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 61 */
			{	/* SawMsil/maxstack.scm 61 */
				obj_t BgL_method4019z00_2131;

				{	/* SawMsil/maxstack.scm 61 */
					BgL_objectz00_bglt BgL_objz00_2132;

					BgL_objz00_2132 = (BgL_objectz00_bglt) (BgL_funz00_27);
					{	/* SawMsil/maxstack.scm 61 */
						long BgL_objzd2classzd2numz00_2133;

						BgL_objzd2classzd2numz00_2133 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2132);
						{	/* SawMsil/maxstack.scm 61 */
							obj_t BgL_arg2643z00_2134;

							BgL_arg2643z00_2134 =
								PROCEDURE_REF(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
								(int) (((long) 1)));
							{	/* SawMsil/maxstack.scm 61 */
								obj_t BgL_arrayz00_2136;

								int BgL_offsetz00_2137;

								BgL_arrayz00_2136 = BgL_arg2643z00_2134;
								BgL_offsetz00_2137 = (int) (BgL_objzd2classzd2numz00_2133);
								{	/* SawMsil/maxstack.scm 61 */
									long BgL_offsetz00_2138;

									BgL_offsetz00_2138 =
										((long) (BgL_offsetz00_2137) - OBJECT_TYPE);
									{	/* SawMsil/maxstack.scm 61 */
										long BgL_modz00_2139;

										{	/* SawMsil/maxstack.scm 61 */
											int BgL_arg2645z00_2140;

											BgL_arg2645z00_2140 = (int) (((long) 16));
											{	/* SawMsil/maxstack.scm 61 */
												long BgL_auxz00_2687;

												BgL_auxz00_2687 = (long) (BgL_arg2645z00_2140);
												BgL_modz00_2139 =
													(BgL_offsetz00_2138 / BgL_auxz00_2687);
										}}
										{	/* SawMsil/maxstack.scm 61 */
											long BgL_restz00_2141;

											{	/* SawMsil/maxstack.scm 61 */
												int BgL_arg2644z00_2142;

												BgL_arg2644z00_2142 = (int) (((long) 16));
												{	/* SawMsil/maxstack.scm 61 */
													long BgL_auxz00_2691;

													BgL_auxz00_2691 = (long) (BgL_arg2644z00_2142);
													BgL_restz00_2141 =
														(BgL_offsetz00_2138 % BgL_auxz00_2691);
											}}
											{	/* SawMsil/maxstack.scm 61 */

												BgL_method4019z00_2131 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2136,
														(int) (BgL_modz00_2139)), (int) (BgL_restz00_2141));
				}}}}}}}}
				return
					CINT(PROCEDURE_ENTRY(BgL_method4019z00_2131) (BgL_method4019z00_2131,
						(obj_t) (BgL_funz00_27), BgL_argsz00_28, BEOA));
			}
		}
	}



/* _extra-args */
	obj_t BGl__extrazd2argszd2zzmsil_maxstackz00(obj_t BgL_envz00_2285,
		obj_t BgL_funz00_2286, obj_t BgL_argsz00_2287)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 61 */
			return
				BINT(BGl_extrazd2argszd2zzmsil_maxstackz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2286), BgL_argsz00_2287));
		}
	}



/* _extra-args-default4018 */
	obj_t BGl__extrazd2argszd2default4018z00zzmsil_maxstackz00(obj_t
		BgL_envz00_2294, obj_t BgL_funz00_2295, obj_t BgL_argsz00_2296)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			return BINT((int) (((long) 0)));
		}
	}



/* size-dest-fun */
	BGL_EXPORTED_DEF int
		BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00(BgL_rtl_funz00_bglt
		BgL_funz00_39)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 86 */
			{	/* SawMsil/maxstack.scm 86 */
				obj_t BgL_method4030z00_2156;

				{	/* SawMsil/maxstack.scm 86 */
					BgL_objectz00_bglt BgL_objz00_2157;

					BgL_objz00_2157 = (BgL_objectz00_bglt) (BgL_funz00_39);
					{	/* SawMsil/maxstack.scm 86 */
						long BgL_objzd2classzd2numz00_2158;

						BgL_objzd2classzd2numz00_2158 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2157);
						{	/* SawMsil/maxstack.scm 86 */
							obj_t BgL_arg2643z00_2159;

							BgL_arg2643z00_2159 =
								PROCEDURE_REF
								(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
								(int) (((long) 1)));
							{	/* SawMsil/maxstack.scm 86 */
								obj_t BgL_arrayz00_2161;

								int BgL_offsetz00_2162;

								BgL_arrayz00_2161 = BgL_arg2643z00_2159;
								BgL_offsetz00_2162 = (int) (BgL_objzd2classzd2numz00_2158);
								{	/* SawMsil/maxstack.scm 86 */
									long BgL_offsetz00_2163;

									BgL_offsetz00_2163 =
										((long) (BgL_offsetz00_2162) - OBJECT_TYPE);
									{	/* SawMsil/maxstack.scm 86 */
										long BgL_modz00_2164;

										{	/* SawMsil/maxstack.scm 86 */
											int BgL_arg2645z00_2165;

											BgL_arg2645z00_2165 = (int) (((long) 16));
											{	/* SawMsil/maxstack.scm 86 */
												long BgL_auxz00_2715;

												BgL_auxz00_2715 = (long) (BgL_arg2645z00_2165);
												BgL_modz00_2164 =
													(BgL_offsetz00_2163 / BgL_auxz00_2715);
										}}
										{	/* SawMsil/maxstack.scm 86 */
											long BgL_restz00_2166;

											{	/* SawMsil/maxstack.scm 86 */
												int BgL_arg2644z00_2167;

												BgL_arg2644z00_2167 = (int) (((long) 16));
												{	/* SawMsil/maxstack.scm 86 */
													long BgL_auxz00_2719;

													BgL_auxz00_2719 = (long) (BgL_arg2644z00_2167);
													BgL_restz00_2166 =
														(BgL_offsetz00_2163 % BgL_auxz00_2719);
											}}
											{	/* SawMsil/maxstack.scm 86 */

												BgL_method4030z00_2156 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2161,
														(int) (BgL_modz00_2164)), (int) (BgL_restz00_2166));
				}}}}}}}}
				return
					CINT(PROCEDURE_ENTRY(BgL_method4030z00_2156) (BgL_method4030z00_2156,
						(obj_t) (BgL_funz00_39), BEOA));
			}
		}
	}



/* _size-dest-fun */
	obj_t BGl__siza7ezd2destzd2funza7zzmsil_maxstackz00(obj_t BgL_envz00_2288,
		obj_t BgL_funz00_2289)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 86 */
			return
				BINT(BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2289)));
		}
	}



/* size-dest-fun-defaul4029 */
	int
		BGl_siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00
		(BgL_rtl_funz00_bglt BgL_funz00_40)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			{	/* SawMsil/maxstack.scm 88 */
				BgL_typez00_bglt BgL_arg4211z00_2181;

				{	/* SawMsil/maxstack.scm 88 */
					BgL_typez00_bglt BgL_res4266z00_2208;

					{	/* SawMsil/maxstack.scm 88 */
						obj_t BgL_method4050z00_2183;

						{	/* SawMsil/maxstack.scm 88 */
							BgL_objectz00_bglt BgL_objz00_2184;

							BgL_objz00_2184 = (BgL_objectz00_bglt) (BgL_funz00_40);
							{	/* SawMsil/maxstack.scm 88 */
								long BgL_objzd2classzd2numz00_2185;

								BgL_objzd2classzd2numz00_2185 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2184);
								{	/* SawMsil/maxstack.scm 88 */
									obj_t BgL_arg2643z00_2186;

									BgL_arg2643z00_2186 =
										PROCEDURE_REF
										(BGl_typezd2destzd2funzd2envzd2zzmsil_maxstackz00,
										(int) (((long) 1)));
									{	/* SawMsil/maxstack.scm 88 */
										obj_t BgL_arrayz00_2188;

										int BgL_offsetz00_2189;

										BgL_arrayz00_2188 = BgL_arg2643z00_2186;
										BgL_offsetz00_2189 = (int) (BgL_objzd2classzd2numz00_2185);
										{	/* SawMsil/maxstack.scm 88 */
											long BgL_offsetz00_2190;

											BgL_offsetz00_2190 =
												((long) (BgL_offsetz00_2189) - OBJECT_TYPE);
											{	/* SawMsil/maxstack.scm 88 */
												long BgL_modz00_2191;

												{	/* SawMsil/maxstack.scm 88 */
													int BgL_arg2645z00_2192;

													BgL_arg2645z00_2192 = (int) (((long) 16));
													{	/* SawMsil/maxstack.scm 88 */
														long BgL_auxz00_2741;

														BgL_auxz00_2741 = (long) (BgL_arg2645z00_2192);
														BgL_modz00_2191 =
															(BgL_offsetz00_2190 / BgL_auxz00_2741);
												}}
												{	/* SawMsil/maxstack.scm 88 */
													long BgL_restz00_2193;

													{	/* SawMsil/maxstack.scm 88 */
														int BgL_arg2644z00_2194;

														BgL_arg2644z00_2194 = (int) (((long) 16));
														{	/* SawMsil/maxstack.scm 88 */
															long BgL_auxz00_2745;

															BgL_auxz00_2745 = (long) (BgL_arg2644z00_2194);
															BgL_restz00_2193 =
																(BgL_offsetz00_2190 % BgL_auxz00_2745);
													}}
													{	/* SawMsil/maxstack.scm 88 */

														BgL_method4050z00_2183 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2188,
																(int) (BgL_modz00_2191)),
															(int) (BgL_restz00_2193));
						}}}}}}}}
						BgL_res4266z00_2208 =
							(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4050z00_2183)
							(BgL_method4050z00_2183, (obj_t) (BgL_funz00_40), BEOA));
					}
					BgL_arg4211z00_2181 = BgL_res4266z00_2208;
				}
				return BGl_typeSiza7eza7zzmsil_typez00(BgL_arg4211z00_2181);
			}
		}
	}



/* _size-dest-fun-defaul4029 */
	obj_t BGl__siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2297, obj_t BgL_funz00_2298)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			return
				BINT(BGl_siza7ezd2destzd2funzd2defaul4029z75zzmsil_maxstackz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2298)));
		}
	}



/* type-dest-fun */
	BgL_typez00_bglt
		BGl_typezd2destzd2funz00zzmsil_maxstackz00(BgL_rtl_funz00_bglt
		BgL_funz00_50)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 105 */
			{	/* SawMsil/maxstack.scm 105 */
				obj_t BgL_method4050z00_2209;

				{	/* SawMsil/maxstack.scm 105 */
					BgL_objectz00_bglt BgL_objz00_2210;

					BgL_objz00_2210 = (BgL_objectz00_bglt) (BgL_funz00_50);
					{	/* SawMsil/maxstack.scm 105 */
						long BgL_objzd2classzd2numz00_2211;

						BgL_objzd2classzd2numz00_2211 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2210);
						{	/* SawMsil/maxstack.scm 105 */
							obj_t BgL_arg2643z00_2212;

							BgL_arg2643z00_2212 =
								PROCEDURE_REF(BGl_typezd2destzd2funzd2envzd2zzmsil_maxstackz00,
								(int) (((long) 1)));
							{	/* SawMsil/maxstack.scm 105 */
								obj_t BgL_arrayz00_2214;

								int BgL_offsetz00_2215;

								BgL_arrayz00_2214 = BgL_arg2643z00_2212;
								BgL_offsetz00_2215 = (int) (BgL_objzd2classzd2numz00_2211);
								{	/* SawMsil/maxstack.scm 105 */
									long BgL_offsetz00_2216;

									BgL_offsetz00_2216 =
										((long) (BgL_offsetz00_2215) - OBJECT_TYPE);
									{	/* SawMsil/maxstack.scm 105 */
										long BgL_modz00_2217;

										{	/* SawMsil/maxstack.scm 105 */
											int BgL_arg2645z00_2218;

											BgL_arg2645z00_2218 = (int) (((long) 16));
											{	/* SawMsil/maxstack.scm 105 */
												long BgL_auxz00_2768;

												BgL_auxz00_2768 = (long) (BgL_arg2645z00_2218);
												BgL_modz00_2217 =
													(BgL_offsetz00_2216 / BgL_auxz00_2768);
										}}
										{	/* SawMsil/maxstack.scm 105 */
											long BgL_restz00_2219;

											{	/* SawMsil/maxstack.scm 105 */
												int BgL_arg2644z00_2220;

												BgL_arg2644z00_2220 = (int) (((long) 16));
												{	/* SawMsil/maxstack.scm 105 */
													long BgL_auxz00_2772;

													BgL_auxz00_2772 = (long) (BgL_arg2644z00_2220);
													BgL_restz00_2219 =
														(BgL_offsetz00_2216 % BgL_auxz00_2772);
											}}
											{	/* SawMsil/maxstack.scm 105 */

												BgL_method4050z00_2209 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2214,
														(int) (BgL_modz00_2217)), (int) (BgL_restz00_2219));
				}}}}}}}}
				return
					(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4050z00_2209)
					(BgL_method4050z00_2209, (obj_t) (BgL_funz00_50), BEOA));
			}
		}
	}



/* _type-dest-fun */
	obj_t BGl__typezd2destzd2funz00zzmsil_maxstackz00(obj_t BgL_envz00_2299,
		obj_t BgL_funz00_2300)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 105 */
			return
				(obj_t) (BGl_typezd2destzd2funz00zzmsil_maxstackz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2300)));
		}
	}



/* type-dest-fun-defaul4049 */
	BgL_typez00_bglt
		BGl_typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00(BgL_rtl_funz00_bglt
		BgL_funz00_51)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			{	/* SawMsil/maxstack.scm 107 */
				obj_t BgL_arg4212z00_1802;

				obj_t BgL_arg4214z00_1804;

				BgL_arg4212z00_1802 = CNST_TABLE_REF(((long) 1));
				{	/* SawMsil/maxstack.scm 107 */
					obj_t BgL_arg4215z00_1805;

					{	/* SawMsil/maxstack.scm 107 */
						BgL_objectz00_bglt BgL_objectz00_2234;

						BgL_objectz00_2234 = (BgL_objectz00_bglt) (BgL_funz00_51);
						{	/* SawMsil/maxstack.scm 107 */
							long BgL_arg2646z00_2235;

							{	/* SawMsil/maxstack.scm 107 */
								long BgL_arg2647z00_2236;

								BgL_arg2647z00_2236 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_2234);
								BgL_arg2646z00_2235 = (BgL_arg2647z00_2236 - OBJECT_TYPE);
							}
							BgL_arg4215z00_1805 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_arg2646z00_2235));
					}}
					BgL_arg4214z00_1804 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg4215z00_1805);
				}
				return
					(BgL_typez00_bglt) (BGl_errorz00zz__errorz00(BgL_arg4212z00_1802,
						BGl_string4276z00zzmsil_maxstackz00, BgL_arg4214z00_1804));
			}
		}
	}



/* _type-dest-fun-defaul4049 */
	obj_t BGl__typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00(obj_t
		BgL_envz00_2301, obj_t BgL_funz00_2302)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			return
				(obj_t) (BGl_typezd2destzd2funzd2defaul4049zd2zzmsil_maxstackz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2302)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc4277z00zzmsil_maxstackz00,
				BGl_string4278z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc4279z00zzmsil_maxstackz00,
				BGl_string4278z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc4280z00zzmsil_maxstackz00,
				BGl_string4278z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_extrazd2argszd2envz00zzmsil_maxstackz00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc4281z00zzmsil_maxstackz00,
				BGl_string4278z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_lastz00zzsaw_defsz00, BGl_proc4282z00zzmsil_maxstackz00,
				BGl_string4283z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_notseqz00zzsaw_defsz00, BGl_proc4284z00zzmsil_maxstackz00,
				BGl_string4283z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_effectz00zzsaw_defsz00, BGl_proc4285z00zzmsil_maxstackz00,
				BGl_string4283z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_purez00zzsaw_defsz00, BGl_proc4286z00zzmsil_maxstackz00,
				BGl_string4283z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc4287z00zzmsil_maxstackz00,
				BGl_string4288z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_applyz00zzsaw_defsz00, BGl_proc4289z00zzmsil_maxstackz00,
				BGl_string4288z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc4290z00zzmsil_maxstackz00,
				BGl_string4288z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc4291z00zzmsil_maxstackz00,
				BGl_string4288z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzmsil_maxstackz00,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc4292z00zzmsil_maxstackz00,
				BGl_string4288z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzmsil_maxstackz00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc4293z00zzmsil_maxstackz00,
				BGl_string4294z00zzmsil_maxstackz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_stackedz00zzmsil_maxstackz00, BGl_proc4295z00zzmsil_maxstackz00,
				BGl_string4296z00zzmsil_maxstackz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_stackedz00zzmsil_maxstackz00, BGl_proc4297z00zzmsil_maxstackz00,
				BGl_string4298z00zzmsil_maxstackz00);
		}
	}



/* struct+object->objec4056 */
	obj_t BGl_structzb2objectzd2ze3objec4056z83zzmsil_maxstackz00(obj_t
		BgL_envz00_2324, obj_t BgL_oz00_2325, obj_t BgL_sz00_2326)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			{
				BgL_stackedz00_bglt BgL_oz00_1900;

				obj_t BgL_sz00_1901;

				{	/* SawMsil/maxstack.scm 9 */
					BgL_stackedz00_bglt BgL_auxz00_2814;

					BgL_oz00_1900 = (BgL_stackedz00_bglt) (BgL_oz00_2325);
					BgL_sz00_1901 = BgL_sz00_2326;
					{

						{	/* SawMsil/maxstack.scm 9 */
							obj_t BgL_old3983z00_1904;

							{	/* SawMsil/maxstack.scm 9 */
								obj_t BgL_nextzd2method4055zd2_1909;

								BgL_nextzd2method4055zd2_1909 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1900),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_stackedz00zzmsil_maxstackz00);
								if (PROCEDUREP(BgL_nextzd2method4055zd2_1909))
									{	/* SawMsil/maxstack.scm 9 */
										BgL_old3983z00_1904 =
											PROCEDURE_ENTRY(BgL_nextzd2method4055zd2_1909)
											(BgL_nextzd2method4055zd2_1909, (obj_t) (BgL_oz00_1900),
											BgL_sz00_1901, BEOA);
									}
								else
									{	/* SawMsil/maxstack.scm 9 */
										BgL_old3983z00_1904 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1900), BgL_sz00_1901));
									}
							}
							{	/* SawMsil/maxstack.scm 9 */
								BgL_stackedz00_bglt BgL_new3985z00_1906;

								BgL_new3985z00_1906 =
									((BgL_stackedz00_bglt) (BgL_old3983z00_1904));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3985z00_1906),
									BGl_classzd2numzd2zz__objectz00
									(BGl_stackedz00zzmsil_maxstackz00));
								{	/* SawMsil/maxstack.scm 9 */
									BgL_stackedz00_bglt BgL_arg4244z00_1908;

									BgL_arg4244z00_1908 =
										BGl_wideningzd2stackedzd2zzmsil_maxstackz00();
									{	/* SawMsil/maxstack.scm 9 */
										obj_t BgL_auxz00_2832;

										BgL_objectz00_bglt BgL_auxz00_2830;

										BgL_auxz00_2832 = (obj_t) (BgL_arg4244z00_1908);
										BgL_auxz00_2830 =
											(BgL_objectz00_bglt) (BgL_new3985z00_1906);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2830, BgL_auxz00_2832);
									}
								}
								BgL_auxz00_2814 = BgL_new3985z00_1906;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2814);
				}
			}
		}
	}



/* object->struct-stack4054 */
	obj_t BGl_objectzd2ze3structzd2stack4054ze3zzmsil_maxstackz00(obj_t
		BgL_envz00_2327, obj_t BgL_obj3980z00_2328)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 9 */
			{
				BgL_stackedz00_bglt BgL_obj3980z00_1892;

				BgL_obj3980z00_1892 = (BgL_stackedz00_bglt) (BgL_obj3980z00_2328);
				{

					{	/* SawMsil/maxstack.scm 9 */
						obj_t BgL_res3981z00_1895;

						{	/* SawMsil/maxstack.scm 9 */
							obj_t BgL_nextzd2method4053zd2_1898;

							BgL_nextzd2method4053zd2_1898 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3980z00_1892),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_stackedz00zzmsil_maxstackz00);
							if (PROCEDUREP(BgL_nextzd2method4053zd2_1898))
								{	/* SawMsil/maxstack.scm 9 */
									BgL_res3981z00_1895 =
										PROCEDURE_ENTRY(BgL_nextzd2method4053zd2_1898)
										(BgL_nextzd2method4053zd2_1898,
										(obj_t) (BgL_obj3980z00_1892), BEOA);
								}
							else
								{	/* SawMsil/maxstack.scm 9 */
									BgL_res3981z00_1895 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3980z00_1892));
								}
						}
						{	/* SawMsil/maxstack.scm 9 */
							obj_t BgL_aux3982z00_1896;

							{	/* SawMsil/maxstack.scm 9 */
								obj_t BgL_keyz00_2260;

								BgL_keyz00_2260 = CNST_TABLE_REF(((long) 0));
								BgL_aux3982z00_1896 =
									make_struct(BgL_keyz00_2260, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMsil/maxstack.scm 9 */
								int BgL_auxz00_2849;

								BgL_auxz00_2849 = (int) (((long) 0));
								STRUCT_SET(BgL_res3981z00_1895, BgL_auxz00_2849,
									BgL_aux3982z00_1896);
							}
							{	/* SawMsil/maxstack.scm 9 */
								obj_t BgL_auxz00_2852;

								BgL_auxz00_2852 = STRUCT_KEY(BgL_res3981z00_1895);
								STRUCT_KEY_SET(BgL_aux3982z00_1896, BgL_auxz00_2852);
							}
							{	/* SawMsil/maxstack.scm 9 */
								obj_t BgL_kz00_2271;

								BgL_kz00_2271 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3981z00_1895, BgL_kz00_2271);
							}
							return BgL_res3981z00_1895;
						}
					}
				}
			}
		}
	}



/* type-dest-fun-rtl_ca4052 */
	obj_t BGl_typezd2destzd2funzd2rtl_ca4052zd2zzmsil_maxstackz00(obj_t
		BgL_envz00_2329, obj_t BgL_funz00_2330)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 109 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_1886;

				{	/* SawMsil/maxstack.scm 110 */
					BgL_typez00_bglt BgL_auxz00_2858;

					BgL_funz00_1886 = (BgL_rtl_callz00_bglt) (BgL_funz00_2330);
					{	/* SawMsil/maxstack.scm 110 */
						BgL_variablez00_bglt BgL_obj2765z00_2259;

						BgL_obj2765z00_2259 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_1886))->BgL_varz00));
						BgL_auxz00_2858 =
							(((BgL_variablez00_bglt) CREF(BgL_obj2765z00_2259))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2858);
				}
			}
		}
	}



/* size-dest-fun-rtl_ca4048 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ca4048z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2331, obj_t BgL_funz00_2332)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 101 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_fu4046 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_fu4046z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2333, obj_t BgL_funz00_2334)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 100 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_li4044 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_li4044z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2335, obj_t BgL_funz00_2336)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 99 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ap4042 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ap4042z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2337, obj_t BgL_funz00_2338)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 98 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ne4040 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ne4040z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2339, obj_t BgL_funz00_2340)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 97 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_pu4038 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_pu4038z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2341, obj_t BgL_funz00_2342)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 95 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ef4036 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ef4036z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2343, obj_t BgL_funz00_2344)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 92 */
			return BINT(((long) 0));
		}
	}



/* size-dest-fun-rtl_no4034 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_no4034z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2345, obj_t BgL_funz00_2346)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 91 */
			return BINT(((long) 0));
		}
	}



/* size-dest-fun-rtl_la4032 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_la4032z75zzmsil_maxstackz00(obj_t
		BgL_envz00_2347, obj_t BgL_funz00_2348)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 90 */
			return BINT(((long) 0));
		}
	}



/* extra-args-rtl_call4028 */
	obj_t BGl_extrazd2argszd2rtl_call4028z00zzmsil_maxstackz00(obj_t
		BgL_envz00_2349, obj_t BgL_funz00_2350, obj_t BgL_argsz00_2351)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 73 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_1827;

				obj_t BgL_argsz00_1828;

				{	/* SawMsil/maxstack.scm 74 */
					long BgL_auxz00_2873;

					BgL_funz00_1827 = (BgL_rtl_callz00_bglt) (BgL_funz00_2350);
					BgL_argsz00_1828 = BgL_argsz00_2351;
					{	/* SawMsil/maxstack.scm 74 */
						obj_t BgL_idz00_1831;

						{	/* SawMsil/maxstack.scm 74 */
							BgL_variablez00_bglt BgL_obj2761z00_2248;

							BgL_obj2761z00_2248 =
								(BgL_variablez00_bglt) (
								(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_1827))->BgL_varz00));
							BgL_idz00_1831 =
								(((BgL_variablez00_bglt) CREF(BgL_obj2761z00_2248))->BgL_idz00);
						}
						{	/* SawMsil/maxstack.scm 76 */
							bool_t BgL_testz00_2877;

							if ((BgL_idz00_1831 == CNST_TABLE_REF(((long) 2))))
								{	/* SawMsil/maxstack.scm 76 */
									BgL_testz00_2877 = ((bool_t) 1);
								}
							else
								{	/* SawMsil/maxstack.scm 76 */
									if ((BgL_idz00_1831 == CNST_TABLE_REF(((long) 3))))
										{	/* SawMsil/maxstack.scm 76 */
											BgL_testz00_2877 = ((bool_t) 1);
										}
									else
										{	/* SawMsil/maxstack.scm 76 */
											if ((BgL_idz00_1831 == CNST_TABLE_REF(((long) 4))))
												{	/* SawMsil/maxstack.scm 76 */
													BgL_testz00_2877 = ((bool_t) 1);
												}
											else
												{	/* SawMsil/maxstack.scm 76 */
													if ((BgL_idz00_1831 == CNST_TABLE_REF(((long) 5))))
														{	/* SawMsil/maxstack.scm 76 */
															BgL_testz00_2877 = ((bool_t) 1);
														}
													else
														{	/* SawMsil/maxstack.scm 76 */
															BgL_testz00_2877 =
																(BgL_idz00_1831 == CNST_TABLE_REF(((long) 6)));
								}}}}
							if (BgL_testz00_2877)
								{	/* SawMsil/maxstack.scm 76 */
									BgL_auxz00_2873 = ((long) 1);
								}
							else
								{	/* SawMsil/maxstack.scm 76 */
									BgL_auxz00_2873 = ((long) 0);
					}}}
					return BINT(BgL_auxz00_2873);
				}
			}
		}
	}



/* extra-args-rtl_switc4026 */
	obj_t BGl_extrazd2argszd2rtl_switc4026z00zzmsil_maxstackz00(obj_t
		BgL_envz00_2352, obj_t BgL_funz00_2353, obj_t BgL_argsz00_2354)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 70 */
			return BINT(((long) 1));
		}
	}



/* extra-args-rtl_globa4023 */
	obj_t BGl_extrazd2argszd2rtl_globa4023z00zzmsil_maxstackz00(obj_t
		BgL_envz00_2355, obj_t BgL_funz00_2356, obj_t BgL_argsz00_2357)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 67 */
			return BINT(((long) 2));
		}
	}



/* extra-args-rtl_funca4021 */
	obj_t BGl_extrazd2argszd2rtl_funca4021z00zzmsil_maxstackz00(obj_t
		BgL_envz00_2358, obj_t BgL_funz00_2359, obj_t BgL_argsz00_2360)
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 64 */
			{
				BgL_rtl_funcallz00_bglt BgL_funz00_1806;

				obj_t BgL_argsz00_1807;

				{	/* SawMsil/maxstack.scm 65 */
					long BgL_auxz00_2896;

					BgL_funz00_1806 = (BgL_rtl_funcallz00_bglt) (BgL_funz00_2359);
					BgL_argsz00_1807 = BgL_argsz00_2360;
					if ((bgl_list_length(BgL_argsz00_1807) > ((long) 4)))
						{	/* SawMsil/maxstack.scm 65 */
							BgL_auxz00_2896 = ((long) 1);
						}
					else
						{	/* SawMsil/maxstack.scm 65 */
							BgL_auxz00_2896 = ((long) 0);
						}
					return BINT(BgL_auxz00_2896);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_maxstackz00()
	{
		AN_OBJECT;
		{	/* SawMsil/maxstack.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4299z00zzmsil_maxstackz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4299z00zzmsil_maxstackz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4299z00zzmsil_maxstackz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4299z00zzmsil_maxstackz00));
			return
				BGl_modulezd2initializa7ationz75zzmsil_typez00(((long) 473237879),
				BSTRING_TO_STRING(BGl_string4299z00zzmsil_maxstackz00));
		}
	}

#ifdef __cplusplus
}
#endif
