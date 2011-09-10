/*===========================================================================*/
/*   (SawJvm/type.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/type.scm)*/
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

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

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


	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_typez00_bglt);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_pu4456z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_typez00();
	static BgL_typez00_bglt
		BGl_typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00(BgL_rtl_funz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__typeSiza7eza7zzsaw_jvm_typez00(obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ne4468z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_no4452z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ca4476z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__typezd2destzd2funz00zzsaw_jvm_typez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t BGl__siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_typezd2destzd2funz00zzsaw_jvm_typez00(BgL_rtl_funz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_li4472z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ge4464z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_mo4458z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__siza7ezd2destzd2funza7zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2destzd2funzd2rtl_ca4480zd2zzsaw_jvm_typez00(obj_t,
		obj_t);
	static int BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(BgL_rtl_funz00_bglt,
		BgL_rtl_insz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static obj_t BGl__typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00(obj_t,
		obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_vr4466z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00 = BUNSPEC;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_lo4460z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_lo4462z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ap4470z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__siza7ezd2destz75zzsaw_jvm_typez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_notseqz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_la4450z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_fu4474z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_rtl_effectz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	static obj_t BGl_siza7ezd2destzd2funzd2rtl_ef4454z75zzsaw_jvm_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_purez00zzsaw_defsz00;
	static obj_t BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00();
	static int
		BGl_siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00
		(BgL_rtl_funz00_bglt, BgL_rtl_insz00_bglt);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4624z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24646za7,
		BGl_siza7ezd2destzd2funzd2rtl_la4450z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4626z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24647za7,
		BGl_siza7ezd2destzd2funzd2rtl_no4452z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4627z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24648za7,
		BGl_siza7ezd2destzd2funzd2rtl_ef4454z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4628z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24649za7,
		BGl_siza7ezd2destzd2funzd2rtl_pu4456z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4630z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24650za7,
		BGl_siza7ezd2destzd2funzd2rtl_lo4460z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4629z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24651za7,
		BGl_siza7ezd2destzd2funzd2rtl_mo4458z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4631z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24652za7,
		BGl_siza7ezd2destzd2funzd2rtl_lo4462z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4632z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24653za7,
		BGl_siza7ezd2destzd2funzd2rtl_ge4464z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4633z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24654za7,
		BGl_siza7ezd2destzd2funzd2rtl_vr4466z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4634z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24655za7,
		BGl_siza7ezd2destzd2funzd2rtl_ne4468z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4636z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24656za7,
		BGl_siza7ezd2destzd2funzd2rtl_ap4470z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4637z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24657za7,
		BGl_siza7ezd2destzd2funzd2rtl_li4472z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4638z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24658za7,
		BGl_siza7ezd2destzd2funzd2rtl_fu4474z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4640z00zzsaw_jvm_typez00,
		BgL_bgl_typeza7d2destza7d2fu4659z00,
		BGl_typezd2destzd2funzd2rtl_ca4480zd2zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4639z00zzsaw_jvm_typez00,
		BgL_bgl_siza7a7eza7d2destza7d24660za7,
		BGl_siza7ezd2destzd2funzd2rtl_ca4476z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4621z00zzsaw_jvm_typez00,
		BgL_bgl_string4621za700za7za7s4661za7, "size-dest-fun", 13);
	      DEFINE_STRING(BGl_string4622z00zzsaw_jvm_typez00,
		BgL_bgl_string4622za700za7za7s4662za7, "type-dest-fun", 13);
	      DEFINE_STRING(BGl_string4623z00zzsaw_jvm_typez00,
		BgL_bgl_string4623za700za7za7s4663za7, "no method for", 13);
	      DEFINE_STRING(BGl_string4625z00zzsaw_jvm_typez00,
		BgL_bgl_string4625za700za7za7s4664za7, "size-dest-fun::int", 18);
	      DEFINE_STRING(BGl_string4635z00zzsaw_jvm_typez00,
		BgL_bgl_string4635za700za7za7s4665za7, "size-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string4641z00zzsaw_jvm_typez00,
		BgL_bgl_string4641za700za7za7s4666za7, "type-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string4642z00zzsaw_jvm_typez00,
		BgL_bgl_string4642za700za7za7s4667za7, "saw_jvm_type", 12);
	      DEFINE_STRING(BGl_string4643z00zzsaw_jvm_typez00,
		BgL_bgl_string4643za700za7za7s4668za7,
		"size-dest-fun void (elong llong uelong ullong double) ", 54);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typeSiza7ezd2envz75zzsaw_jvm_typez00,
		BgL_bgl__typesiza7a7eza7a7za7za74669z00,
		BGl__typeSiza7eza7zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_siza7ezd2destzd2envza7zzsaw_jvm_typez00,
		BgL_bgl__siza7a7eza7d2destza774670za7,
		BGl__siza7ezd2destz75zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
		BgL_bgl__siza7a7eza7d2destza7d4671za7,
		BGl__siza7ezd2destzd2funza7zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7ezd2destzd2funzd2defaul4447zd2envza7zzsaw_jvm_typez00,
		BgL_bgl__siza7a7eza7d2destza7d4672za7,
		BGl__siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
		BgL_bgl__typeza7d2destza7d2f4673z00,
		BGl__typezd2destzd2funz00zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2destzd2funzd2defaul4477zd2envz00zzsaw_jvm_typez00,
		BgL_bgl__typeza7d2destza7d2f4674z00,
		BGl__typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long
		BgL_checksumz00_2232, char *BgL_fromz00_2233)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00();
					BGl_cnstzd2initzd2zzsaw_jvm_typez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00();
					BGl_genericzd2initzd2zzsaw_jvm_typez00();
					BGl_methodzd2initzd2zzsaw_jvm_typez00();
					BGl_toplevelzd2initzd2zzsaw_jvm_typez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_type");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			{	/* SawJvm/type.scm 1 */
				obj_t BgL_cportz00_2202;

				BgL_cportz00_2202 =
					bgl_open_input_string(BGl_string4643z00zzsaw_jvm_typez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2203;

					BgL_iz00_2203 = ((long) 2);
				BgL_loopz00_2204:
					if ((BgL_iz00_2203 == ((long) -1)))
						{	/* SawJvm/type.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/type.scm 1 */
							{	/* SawJvm/type.scm 1 */
								obj_t BgL_arg4645z00_2206;

								{	/* SawJvm/type.scm 1 */

									{	/* SawJvm/type.scm 1 */
										obj_t BgL_locationz00_2208;

										BgL_locationz00_2208 = BBOOL(((bool_t) 0));
										{	/* SawJvm/type.scm 1 */

											BgL_arg4645z00_2206 =
												BGl_readz00zz__readerz00(BgL_cportz00_2202,
												BgL_locationz00_2208);
										}
									}
								}
								{	/* SawJvm/type.scm 1 */
									int BgL_auxz00_2254;

									BgL_auxz00_2254 = (int) (BgL_iz00_2203);
									CNST_TABLE_SET(BgL_auxz00_2254, BgL_arg4645z00_2206);
							}}
							{	/* SawJvm/type.scm 1 */
								int BgL_auxz00_2209;

								BgL_auxz00_2209 = (int) ((BgL_iz00_2203 - ((long) 1)));
								{
									long BgL_iz00_2259;

									BgL_iz00_2259 = (long) (BgL_auxz00_2209);
									BgL_iz00_2203 = BgL_iz00_2259;
									goto BgL_loopz00_2204;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00 =
				CNST_TABLE_REF(((long) 0));
			return BUNSPEC;
		}
	}



/* typeSize */
	BGL_EXPORTED_DEF int BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_typez00_bglt
		BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 18 */
			{	/* SawJvm/type.scm 19 */
				obj_t BgL_idz00_1280;

				BgL_idz00_1280 = (((BgL_typez00_bglt) CREF(BgL_typez00_1))->BgL_idz00);
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_1280,
							BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00)))
					{	/* SawJvm/type.scm 20 */
						return (int) (((long) 2));
					}
				else
					{	/* SawJvm/type.scm 20 */
						if ((BgL_idz00_1280 == CNST_TABLE_REF(((long) 1))))
							{	/* SawJvm/type.scm 21 */
								return (int) (((long) 0));
							}
						else
							{	/* SawJvm/type.scm 21 */
								return (int) (((long) 1));
		}}}}
	}



/* _typeSize */
	obj_t BGl__typeSiza7eza7zzsaw_jvm_typez00(obj_t BgL_envz00_2129,
		obj_t BgL_typez00_2130)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 18 */
			return
				BINT(BGl_typeSiza7eza7zzsaw_jvm_typez00(
					(BgL_typez00_bglt) (BgL_typez00_2130)));
		}
	}



/* size-dest */
	BGL_EXPORTED_DEF int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t BgL_insz00_2)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 24 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_2,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/type.scm 26 */
					BgL_typez00_bglt BgL_auxz00_2277;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_2278;

						BgL_auxz00_2278 = (BgL_rtl_regz00_bglt) (BgL_insz00_2);
						BgL_auxz00_2277 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2278))->BgL_typez00);
					}
					return BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_auxz00_2277);
				}
			else
				{	/* SawJvm/type.scm 28 */
					bool_t BgL_testz00_2282;

					{	/* SawJvm/type.scm 28 */
						BgL_rtl_insz00_bglt BgL_obj4324z00_1993;

						BgL_obj4324z00_1993 = (BgL_rtl_insz00_bglt) (BgL_insz00_2);
						BgL_testz00_2282 =
							CBOOL(
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4324z00_1993))->BgL_destz00));
					}
					if (BgL_testz00_2282)
						{	/* SawJvm/type.scm 29 */
							BgL_typez00_bglt BgL_auxz00_2286;

							{	/* SawJvm/type.scm 29 */
								BgL_rtl_regz00_bglt BgL_obj3652z00_1995;

								{	/* SawJvm/type.scm 29 */
									BgL_rtl_insz00_bglt BgL_obj4324z00_1994;

									BgL_obj4324z00_1994 = (BgL_rtl_insz00_bglt) (BgL_insz00_2);
									BgL_obj3652z00_1995 =
										(BgL_rtl_regz00_bglt) (
										(((BgL_rtl_insz00_bglt) CREF(BgL_obj4324z00_1994))->
											BgL_destz00));
								}
								BgL_auxz00_2286 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_obj3652z00_1995))->
									BgL_typez00);
							}
							return BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_auxz00_2286);
						}
					else
						{	/* SawJvm/type.scm 30 */
							BgL_rtl_funz00_bglt BgL_arg4488z00_1289;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_2292;

								BgL_auxz00_2292 = (BgL_rtl_insz00_bglt) (BgL_insz00_2);
								BgL_arg4488z00_1289 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2292))->BgL_funz00);
							}
							{	/* SawJvm/type.scm 30 */
								int BgL_res4613z00_2024;

								{	/* SawJvm/type.scm 30 */
									BgL_rtl_insz00_bglt BgL_insz00_1998;

									BgL_insz00_1998 = (BgL_rtl_insz00_bglt) (BgL_insz00_2);
									{	/* SawJvm/type.scm 30 */
										obj_t BgL_method4448z00_1999;

										{	/* SawJvm/type.scm 30 */
											BgL_objectz00_bglt BgL_objz00_2000;

											BgL_objz00_2000 =
												(BgL_objectz00_bglt) (BgL_arg4488z00_1289);
											{	/* SawJvm/type.scm 30 */
												long BgL_objzd2classzd2numz00_2001;

												BgL_objzd2classzd2numz00_2001 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2000);
												{	/* SawJvm/type.scm 30 */
													obj_t BgL_arg2643z00_2002;

													BgL_arg2643z00_2002 =
														PROCEDURE_REF
														(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
														(int) (((long) 1)));
													{	/* SawJvm/type.scm 30 */
														obj_t BgL_arrayz00_2004;

														int BgL_offsetz00_2005;

														BgL_arrayz00_2004 = BgL_arg2643z00_2002;
														BgL_offsetz00_2005 =
															(int) (BgL_objzd2classzd2numz00_2001);
														{	/* SawJvm/type.scm 30 */
															long BgL_offsetz00_2006;

															BgL_offsetz00_2006 =
																((long) (BgL_offsetz00_2005) - OBJECT_TYPE);
															{	/* SawJvm/type.scm 30 */
																long BgL_modz00_2007;

																{	/* SawJvm/type.scm 30 */
																	int BgL_arg2645z00_2008;

																	BgL_arg2645z00_2008 = (int) (((long) 16));
																	{	/* SawJvm/type.scm 30 */
																		long BgL_auxz00_2304;

																		BgL_auxz00_2304 =
																			(long) (BgL_arg2645z00_2008);
																		BgL_modz00_2007 =
																			(BgL_offsetz00_2006 / BgL_auxz00_2304);
																}}
																{	/* SawJvm/type.scm 30 */
																	long BgL_restz00_2009;

																	{	/* SawJvm/type.scm 30 */
																		int BgL_arg2644z00_2010;

																		BgL_arg2644z00_2010 = (int) (((long) 16));
																		{	/* SawJvm/type.scm 30 */
																			long BgL_auxz00_2308;

																			BgL_auxz00_2308 =
																				(long) (BgL_arg2644z00_2010);
																			BgL_restz00_2009 =
																				(BgL_offsetz00_2006 % BgL_auxz00_2308);
																	}}
																	{	/* SawJvm/type.scm 30 */

																		BgL_method4448z00_1999 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2004,
																				(int) (BgL_modz00_2007)),
																			(int) (BgL_restz00_2009));
										}}}}}}}}
										BgL_res4613z00_2024 =
											CINT(PROCEDURE_ENTRY(BgL_method4448z00_1999)
											(BgL_method4448z00_1999, (obj_t) (BgL_arg4488z00_1289),
												(obj_t) (BgL_insz00_1998), BEOA));
								}}
								return BgL_res4613z00_2024;
							}
						}
				}
		}
	}



/* _size-dest */
	obj_t BGl__siza7ezd2destz75zzsaw_jvm_typez00(obj_t BgL_envz00_2131,
		obj_t BgL_insz00_2132)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 24 */
			return BINT(BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_insz00_2132));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_siza7ezd2destzd2funzd2defaul4447zd2envza7zzsaw_jvm_typez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4621z00zzsaw_jvm_typez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
				BGl_typezd2destzd2funzd2defaul4477zd2envz00zzsaw_jvm_typez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4622z00zzsaw_jvm_typez00);
		}
	}



/* size-dest-fun */
	int BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_3, BgL_rtl_insz00_bglt BgL_insz00_4)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 35 */
			{	/* SawJvm/type.scm 35 */
				obj_t BgL_method4448z00_2025;

				{	/* SawJvm/type.scm 35 */
					BgL_objectz00_bglt BgL_objz00_2026;

					BgL_objz00_2026 = (BgL_objectz00_bglt) (BgL_funz00_3);
					{	/* SawJvm/type.scm 35 */
						long BgL_objzd2classzd2numz00_2027;

						BgL_objzd2classzd2numz00_2027 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2026);
						{	/* SawJvm/type.scm 35 */
							obj_t BgL_arg2643z00_2028;

							BgL_arg2643z00_2028 =
								PROCEDURE_REF(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
								(int) (((long) 1)));
							{	/* SawJvm/type.scm 35 */
								obj_t BgL_arrayz00_2030;

								int BgL_offsetz00_2031;

								BgL_arrayz00_2030 = BgL_arg2643z00_2028;
								BgL_offsetz00_2031 = (int) (BgL_objzd2classzd2numz00_2027);
								{	/* SawJvm/type.scm 35 */
									long BgL_offsetz00_2032;

									BgL_offsetz00_2032 =
										((long) (BgL_offsetz00_2031) - OBJECT_TYPE);
									{	/* SawJvm/type.scm 35 */
										long BgL_modz00_2033;

										{	/* SawJvm/type.scm 35 */
											int BgL_arg2645z00_2034;

											BgL_arg2645z00_2034 = (int) (((long) 16));
											{	/* SawJvm/type.scm 35 */
												long BgL_auxz00_2332;

												BgL_auxz00_2332 = (long) (BgL_arg2645z00_2034);
												BgL_modz00_2033 =
													(BgL_offsetz00_2032 / BgL_auxz00_2332);
										}}
										{	/* SawJvm/type.scm 35 */
											long BgL_restz00_2035;

											{	/* SawJvm/type.scm 35 */
												int BgL_arg2644z00_2036;

												BgL_arg2644z00_2036 = (int) (((long) 16));
												{	/* SawJvm/type.scm 35 */
													long BgL_auxz00_2336;

													BgL_auxz00_2336 = (long) (BgL_arg2644z00_2036);
													BgL_restz00_2035 =
														(BgL_offsetz00_2032 % BgL_auxz00_2336);
											}}
											{	/* SawJvm/type.scm 35 */

												BgL_method4448z00_2025 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2030,
														(int) (BgL_modz00_2033)), (int) (BgL_restz00_2035));
				}}}}}}}}
				return
					CINT(PROCEDURE_ENTRY(BgL_method4448z00_2025) (BgL_method4448z00_2025,
						(obj_t) (BgL_funz00_3), (obj_t) (BgL_insz00_4), BEOA));
			}
		}
	}



/* _size-dest-fun */
	obj_t BGl__siza7ezd2destzd2funza7zzsaw_jvm_typez00(obj_t BgL_envz00_2133,
		obj_t BgL_funz00_2134, obj_t BgL_insz00_2135)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 35 */
			return
				BINT(BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2134),
					(BgL_rtl_insz00_bglt) (BgL_insz00_2135)));
		}
	}



/* size-dest-fun-defaul4447 */
	int
		BGl_siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_5, BgL_rtl_insz00_bglt BgL_insz00_6)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			{	/* SawJvm/type.scm 37 */
				BgL_typez00_bglt BgL_arg4582z00_2050;

				{	/* SawJvm/type.scm 37 */
					BgL_typez00_bglt BgL_res4618z00_2077;

					{	/* SawJvm/type.scm 37 */
						obj_t BgL_method4478z00_2052;

						{	/* SawJvm/type.scm 37 */
							BgL_objectz00_bglt BgL_objz00_2053;

							BgL_objz00_2053 = (BgL_objectz00_bglt) (BgL_funz00_5);
							{	/* SawJvm/type.scm 37 */
								long BgL_objzd2classzd2numz00_2054;

								BgL_objzd2classzd2numz00_2054 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2053);
								{	/* SawJvm/type.scm 37 */
									obj_t BgL_arg2643z00_2055;

									BgL_arg2643z00_2055 =
										PROCEDURE_REF
										(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
										(int) (((long) 1)));
									{	/* SawJvm/type.scm 37 */
										obj_t BgL_arrayz00_2057;

										int BgL_offsetz00_2058;

										BgL_arrayz00_2057 = BgL_arg2643z00_2055;
										BgL_offsetz00_2058 = (int) (BgL_objzd2classzd2numz00_2054);
										{	/* SawJvm/type.scm 37 */
											long BgL_offsetz00_2059;

											BgL_offsetz00_2059 =
												((long) (BgL_offsetz00_2058) - OBJECT_TYPE);
											{	/* SawJvm/type.scm 37 */
												long BgL_modz00_2060;

												{	/* SawJvm/type.scm 37 */
													int BgL_arg2645z00_2061;

													BgL_arg2645z00_2061 = (int) (((long) 16));
													{	/* SawJvm/type.scm 37 */
														long BgL_auxz00_2360;

														BgL_auxz00_2360 = (long) (BgL_arg2645z00_2061);
														BgL_modz00_2060 =
															(BgL_offsetz00_2059 / BgL_auxz00_2360);
												}}
												{	/* SawJvm/type.scm 37 */
													long BgL_restz00_2062;

													{	/* SawJvm/type.scm 37 */
														int BgL_arg2644z00_2063;

														BgL_arg2644z00_2063 = (int) (((long) 16));
														{	/* SawJvm/type.scm 37 */
															long BgL_auxz00_2364;

															BgL_auxz00_2364 = (long) (BgL_arg2644z00_2063);
															BgL_restz00_2062 =
																(BgL_offsetz00_2059 % BgL_auxz00_2364);
													}}
													{	/* SawJvm/type.scm 37 */

														BgL_method4478z00_2052 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2057,
																(int) (BgL_modz00_2060)),
															(int) (BgL_restz00_2062));
						}}}}}}}}
						BgL_res4618z00_2077 =
							(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4478z00_2052)
							(BgL_method4478z00_2052, (obj_t) (BgL_funz00_5), BEOA));
					}
					BgL_arg4582z00_2050 = BgL_res4618z00_2077;
				}
				return BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_arg4582z00_2050);
			}
		}
	}



/* _size-dest-fun-defaul4447 */
	obj_t BGl__siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2136, obj_t BgL_funz00_2137, obj_t BgL_insz00_2138)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			return
				BINT(BGl_siza7ezd2destzd2funzd2defaul4447z75zzsaw_jvm_typez00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2137),
					(BgL_rtl_insz00_bglt) (BgL_insz00_2138)));
		}
	}



/* type-dest-fun */
	BgL_typez00_bglt BGl_typezd2destzd2funz00zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_35)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 74 */
			{	/* SawJvm/type.scm 74 */
				obj_t BgL_method4478z00_2078;

				{	/* SawJvm/type.scm 74 */
					BgL_objectz00_bglt BgL_objz00_2079;

					BgL_objz00_2079 = (BgL_objectz00_bglt) (BgL_funz00_35);
					{	/* SawJvm/type.scm 74 */
						long BgL_objzd2classzd2numz00_2080;

						BgL_objzd2classzd2numz00_2080 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2079);
						{	/* SawJvm/type.scm 74 */
							obj_t BgL_arg2643z00_2081;

							BgL_arg2643z00_2081 =
								PROCEDURE_REF(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
								(int) (((long) 1)));
							{	/* SawJvm/type.scm 74 */
								obj_t BgL_arrayz00_2083;

								int BgL_offsetz00_2084;

								BgL_arrayz00_2083 = BgL_arg2643z00_2081;
								BgL_offsetz00_2084 = (int) (BgL_objzd2classzd2numz00_2080);
								{	/* SawJvm/type.scm 74 */
									long BgL_offsetz00_2085;

									BgL_offsetz00_2085 =
										((long) (BgL_offsetz00_2084) - OBJECT_TYPE);
									{	/* SawJvm/type.scm 74 */
										long BgL_modz00_2086;

										{	/* SawJvm/type.scm 74 */
											int BgL_arg2645z00_2087;

											BgL_arg2645z00_2087 = (int) (((long) 16));
											{	/* SawJvm/type.scm 74 */
												long BgL_auxz00_2388;

												BgL_auxz00_2388 = (long) (BgL_arg2645z00_2087);
												BgL_modz00_2086 =
													(BgL_offsetz00_2085 / BgL_auxz00_2388);
										}}
										{	/* SawJvm/type.scm 74 */
											long BgL_restz00_2088;

											{	/* SawJvm/type.scm 74 */
												int BgL_arg2644z00_2089;

												BgL_arg2644z00_2089 = (int) (((long) 16));
												{	/* SawJvm/type.scm 74 */
													long BgL_auxz00_2392;

													BgL_auxz00_2392 = (long) (BgL_arg2644z00_2089);
													BgL_restz00_2088 =
														(BgL_offsetz00_2085 % BgL_auxz00_2392);
											}}
											{	/* SawJvm/type.scm 74 */

												BgL_method4478z00_2078 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2083,
														(int) (BgL_modz00_2086)), (int) (BgL_restz00_2088));
				}}}}}}}}
				return
					(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4478z00_2078)
					(BgL_method4478z00_2078, (obj_t) (BgL_funz00_35), BEOA));
			}
		}
	}



/* _type-dest-fun */
	obj_t BGl__typezd2destzd2funz00zzsaw_jvm_typez00(obj_t BgL_envz00_2139,
		obj_t BgL_funz00_2140)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 74 */
			return
				(obj_t) (BGl_typezd2destzd2funz00zzsaw_jvm_typez00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2140)));
		}
	}



/* type-dest-fun-defaul4477 */
	BgL_typez00_bglt
		BGl_typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_36)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			{	/* SawJvm/type.scm 76 */
				obj_t BgL_arg4583z00_1886;

				obj_t BgL_arg4585z00_1888;

				BgL_arg4583z00_1886 = CNST_TABLE_REF(((long) 2));
				{	/* SawJvm/type.scm 76 */
					obj_t BgL_arg4586z00_1889;

					{	/* SawJvm/type.scm 76 */
						BgL_objectz00_bglt BgL_objectz00_2103;

						BgL_objectz00_2103 = (BgL_objectz00_bglt) (BgL_funz00_36);
						{	/* SawJvm/type.scm 76 */
							long BgL_arg2646z00_2104;

							{	/* SawJvm/type.scm 76 */
								long BgL_arg2647z00_2105;

								BgL_arg2647z00_2105 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_2103);
								BgL_arg2646z00_2104 = (BgL_arg2647z00_2105 - OBJECT_TYPE);
							}
							BgL_arg4586z00_1889 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_arg2646z00_2104));
					}}
					BgL_arg4585z00_1888 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg4586z00_1889);
				}
				return
					(BgL_typez00_bglt) (BGl_errorz00zz__errorz00(BgL_arg4583z00_1886,
						BGl_string4623z00zzsaw_jvm_typez00, BgL_arg4585z00_1888));
			}
		}
	}



/* _type-dest-fun-defaul4477 */
	obj_t BGl__typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00(obj_t
		BgL_envz00_2141, obj_t BgL_funz00_2142)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			return
				(obj_t) (BGl_typezd2destzd2funzd2defaul4477zd2zzsaw_jvm_typez00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2142)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_lastz00zzsaw_defsz00, BGl_proc4624z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_notseqz00zzsaw_defsz00, BGl_proc4626z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_effectz00zzsaw_defsz00, BGl_proc4627z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_purez00zzsaw_defsz00, BGl_proc4628z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc4629z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc4630z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc4631z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc4632z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc4633z00zzsaw_jvm_typez00,
				BGl_string4625z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc4634z00zzsaw_jvm_typez00,
				BGl_string4635z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_applyz00zzsaw_defsz00, BGl_proc4636z00zzsaw_jvm_typez00,
				BGl_string4635z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc4637z00zzsaw_jvm_typez00,
				BGl_string4635z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc4638z00zzsaw_jvm_typez00,
				BGl_string4635z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc4639z00zzsaw_jvm_typez00,
				BGl_string4635z00zzsaw_jvm_typez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc4640z00zzsaw_jvm_typez00,
				BGl_string4641z00zzsaw_jvm_typez00);
		}
	}



/* type-dest-fun-rtl_ca4480 */
	obj_t BGl_typezd2destzd2funzd2rtl_ca4480zd2zzsaw_jvm_typez00(obj_t
		BgL_envz00_2158, obj_t BgL_funz00_2159)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 78 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_1984;

				{	/* SawJvm/type.scm 79 */
					BgL_typez00_bglt BgL_auxz00_2433;

					BgL_funz00_1984 = (BgL_rtl_callz00_bglt) (BgL_funz00_2159);
					{	/* SawJvm/type.scm 79 */
						BgL_variablez00_bglt BgL_obj1608z00_2128;

						BgL_obj1608z00_2128 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_1984))->BgL_varz00));
						BgL_auxz00_2433 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2128))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2433);
				}
			}
		}
	}



/* size-dest-fun-rtl_ca4476 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ca4476z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2160, obj_t BgL_funz00_2161, obj_t BgL_insz00_2162)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 70 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_fu4474 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_fu4474z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2163, obj_t BgL_funz00_2164, obj_t BgL_insz00_2165)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 69 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_li4472 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_li4472z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2166, obj_t BgL_funz00_2167, obj_t BgL_insz00_2168)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 68 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ap4470 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ap4470z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2169, obj_t BgL_funz00_2170, obj_t BgL_insz00_2171)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 67 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ne4468 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ne4468z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2172, obj_t BgL_funz00_2173, obj_t BgL_insz00_2174)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 66 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_vr4466 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_vr4466z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2175, obj_t BgL_funz00_2176, obj_t BgL_insz00_2177)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 62 */
			{	/* SawJvm/type.scm 63 */
				int BgL_auxz00_2444;

				{	/* SawJvm/type.scm 63 */
					BgL_rtl_vrefz00_bglt BgL_funz00_2220;

					BgL_funz00_2220 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_2176);
					BgL_auxz00_2444 =
						BGl_typeSiza7eza7zzsaw_jvm_typez00(
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2220))->BgL_typez00));
				}
				return BINT(BgL_auxz00_2444);
			}
		}
	}



/* size-dest-fun-rtl_ge4464 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ge4464z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2178, obj_t BgL_funz00_2179, obj_t BgL_insz00_2180)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 59 */
			{	/* SawJvm/type.scm 60 */
				int BgL_auxz00_2449;

				{	/* SawJvm/type.scm 60 */
					BgL_rtl_getfieldz00_bglt BgL_funz00_2222;

					BgL_funz00_2222 = (BgL_rtl_getfieldz00_bglt) (BgL_funz00_2179);
					BgL_auxz00_2449 =
						BGl_typeSiza7eza7zzsaw_jvm_typez00(
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2222))->BgL_typez00));
				}
				return BINT(BgL_auxz00_2449);
			}
		}
	}



/* size-dest-fun-rtl_lo4462 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_lo4462z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2181, obj_t BgL_funz00_2182, obj_t BgL_insz00_2183)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 56 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_1932;

				obj_t BgL_insz00_1933;

				{	/* SawJvm/type.scm 57 */
					int BgL_auxz00_2454;

					BgL_funz00_1932 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_2182);
					BgL_insz00_1933 = BgL_insz00_2183;
					{	/* SawJvm/type.scm 57 */
						BgL_typez00_bglt BgL_auxz00_2455;

						{	/* SawJvm/type.scm 57 */
							BgL_variablez00_bglt BgL_obj1608z00_2121;

							BgL_obj1608z00_2121 =
								(BgL_variablez00_bglt) (
								(((BgL_rtl_loadgz00_bglt) CREF(BgL_funz00_1932))->BgL_varz00));
							BgL_auxz00_2455 =
								(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2121))->
								BgL_typez00);
						}
						BgL_auxz00_2454 =
							BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_auxz00_2455);
					}
					return BINT(BgL_auxz00_2454);
				}
			}
		}
	}



/* size-dest-fun-rtl_lo4460 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_lo4460z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2184, obj_t BgL_funz00_2185, obj_t BgL_insz00_2186)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 49 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_1922;

				obj_t BgL_insz00_1923;

				{	/* SawJvm/type.scm 50 */
					int BgL_auxz00_2462;

					BgL_funz00_1922 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_2185);
					BgL_insz00_1923 = BgL_insz00_2186;
					{	/* SawJvm/type.scm 50 */
						BgL_atomz00_bglt BgL_constantz00_1926;

						BgL_constantz00_1926 =
							(((BgL_rtl_loadiz00_bglt) CREF(BgL_funz00_1922))->
							BgL_constantz00);
						{	/* SawJvm/type.scm 51 */
							obj_t BgL_valuez00_1927;

							BgL_valuez00_1927 =
								(((BgL_atomz00_bglt) CREF(BgL_constantz00_1926))->BgL_valuez00);
							if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_1927))
								{	/* SawJvm/type.scm 53 */
									BgL_typez00_bglt BgL_auxz00_2467;

									{
										BgL_nodez00_bglt BgL_auxz00_2468;

										BgL_auxz00_2468 = (BgL_nodez00_bglt) (BgL_constantz00_1926);
										BgL_auxz00_2467 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_2468))->BgL_typez00);
									}
									BgL_auxz00_2462 =
										BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_auxz00_2467);
								}
							else
								{	/* SawJvm/type.scm 52 */
									BgL_auxz00_2462 = (int) (((long) 1));
					}}}
					return BINT(BgL_auxz00_2462);
				}
			}
		}
	}



/* size-dest-fun-rtl_mo4458 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_mo4458z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2187, obj_t BgL_funz00_2188, obj_t BgL_insz00_2189)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 46 */
			{
				BgL_rtl_movz00_bglt BgL_funz00_1914;

				obj_t BgL_insz00_1915;

				{	/* SawJvm/type.scm 47 */
					int BgL_auxz00_2475;

					BgL_funz00_1914 = (BgL_rtl_movz00_bglt) (BgL_funz00_2188);
					BgL_insz00_1915 = BgL_insz00_2189;
					{	/* SawJvm/type.scm 47 */
						obj_t BgL_arg4591z00_2111;

						{	/* SawJvm/type.scm 47 */
							obj_t BgL_pairz00_2114;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_2476;

								BgL_auxz00_2476 = (BgL_rtl_insz00_bglt) (BgL_insz00_1915);
								BgL_pairz00_2114 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2476))->BgL_argsz00);
							}
							BgL_arg4591z00_2111 = CAR(BgL_pairz00_2114);
						}
						BgL_auxz00_2475 =
							BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_arg4591z00_2111);
					}
					return BINT(BgL_auxz00_2475);
				}
			}
		}
	}



/* size-dest-fun-rtl_pu4456 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_pu4456z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2190, obj_t BgL_funz00_2191, obj_t BgL_insz00_2192)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 44 */
			return BINT(((long) 1));
		}
	}



/* size-dest-fun-rtl_ef4454 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_ef4454z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2193, obj_t BgL_funz00_2194, obj_t BgL_insz00_2195)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 41 */
			return BINT(((long) 0));
		}
	}



/* size-dest-fun-rtl_no4452 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_no4452z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2196, obj_t BgL_funz00_2197, obj_t BgL_insz00_2198)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 40 */
			return BINT(((long) 0));
		}
	}



/* size-dest-fun-rtl_la4450 */
	obj_t BGl_siza7ezd2destzd2funzd2rtl_la4450z75zzsaw_jvm_typez00(obj_t
		BgL_envz00_2199, obj_t BgL_funz00_2200, obj_t BgL_insz00_2201)
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 39 */
			return BINT(((long) 0));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00()
	{
		AN_OBJECT;
		{	/* SawJvm/type.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 67756028),
				BSTRING_TO_STRING(BGl_string4642z00zzsaw_jvm_typez00));
		}
	}

#ifdef __cplusplus
}
#endif
