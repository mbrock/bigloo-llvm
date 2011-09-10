/*===========================================================================*/
/*   (Cgen/cop.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/cop.scm)*/
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

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_creturnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                 *BgL_creturnz00_bglt;

	typedef struct BgL_cvoidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_cvoidz00_bglt;

	typedef struct BgL_catomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_valuez00;
	}               *BgL_catomz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_ccastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_copz00_bgl *BgL_argz00;
	}               *BgL_ccastz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_nopz00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_cifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		struct BgL_copz00_bgl *BgL_truez00;
		struct BgL_copz00_bgl *BgL_falsez00;
	}             *BgL_cifz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                  *BgL_cfuncallz00_bglt;

	typedef struct BgL_capplyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		struct BgL_copz00_bgl *BgL_argz00;
	}                *BgL_capplyz00_bglt;

	typedef struct BgL_cappz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}              *BgL_cappz00_bglt;

	typedef struct BgL_cfailz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_procz00;
		struct BgL_copz00_bgl *BgL_msgz00;
		struct BgL_copz00_bgl *BgL_objz00;
	}               *BgL_cfailz00_bglt;

	typedef struct BgL_cswitchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
	}                 *BgL_cswitchz00_bglt;

	typedef struct BgL_cmakezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                     *BgL_cmakezd2boxzd2_bglt;

	typedef struct BgL_cboxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
	}                    *BgL_cboxzd2refzd2_bglt;

	typedef struct BgL_cboxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                       *BgL_cboxzd2setz12zc0_bglt;

	typedef struct BgL_csetzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_jumpzd2valuezd2;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                        *BgL_csetzd2exzd2itz00_bglt;

	typedef struct BgL_cjumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                         *BgL_cjumpzd2exzd2itz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;


	static obj_t BGl__z52allocatezd2clabelz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_capplyz00zzcgen_copz00 = BUNSPEC;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_makezd2cboxzd2refz00zzcgen_copz00(obj_t, BgL_copz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cgotozf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2varcz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cfunc4256ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__cboxzd2setz12zf3z33zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt
		BGl_fillzd2cpragmaz12zc0zzcgen_copz00(BgL_cpragmaz00_bglt, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2cretu4307ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2sfunzf2Cz12z32zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2creturnzd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ccastzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_capplyzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z52thezd2stopzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__fillzd2cvoidz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2varc4294ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cboxzd2refz52zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt BGl_z52allocatezd2cgotoz80zzcgen_copz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__clabelzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cvoid4302ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cvoidz00zzcgen_copz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_stopz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_nopzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_ccastz00_bglt BGl_z52allocatezd2ccastz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt
		BGl_makezd2cswitchzd2zzcgen_copz00(obj_t, BgL_copz00_bglt, obj_t);
	static obj_t BGl_z52thezd2cgotozd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__cifzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_capplyz00_bglt BGl_capplyzd2nilzd2zzcgen_copz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_catomz00_bglt BGl_z52allocatezd2catomz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cfailz00_bglt BGl_z52allocatezd2cfailz80zzcgen_copz00();
	static obj_t BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__varczd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2cmake4236ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_z52allocatezd2cboxzd2refz52zzcgen_copz00();
	static obj_t BGl__csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2stopz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2clabelz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_z52allocatezd2bdbzd2blockz52zzcgen_copz00();
	static obj_t BGl__copzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cboxzd2refzf3z21zzcgen_copz00(obj_t);
	static obj_t BGl__makezd2sfunzf2Cz20zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cboxzd2refzd2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2localzd2varz52zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cfailz00_bglt BGl_cfailzd2nilzd2zzcgen_copz00();
	static obj_t BGl__fillzd2cappz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2csetzd2exzd2itz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csequencez00_bglt
		BGl_makezd2csequencezd2zzcgen_copz00(obj_t, bool_t, obj_t);
	static obj_t BGl__z52allocatezd2blockz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_csequencez00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2csetqzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2nopz80zzcgen_copz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_copzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl_z52thezd2csequencezd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__catomzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_stopz00_bglt BGl_stopzd2nilzd2zzcgen_copz00();
	static obj_t BGl__csetqzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_clabelz00_bglt BGl_clabelzd2nilzd2zzcgen_copz00();
	static obj_t BGl__cfailzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_fillzd2cboxzd2refz12z12zzcgen_copz00(BgL_cboxzd2refzd2_bglt, obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2localzd2varz00zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2cjumpzd2exzd2itz80zzcgen_copz00();
	static obj_t BGl__fillzd2cfuncallz12zc0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cifz00_bglt BGl_makezd2cifzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_ccastzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cswitchz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt BGl_makezd2cvoidzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_varcz00_bglt BGl_z52allocatezd2varcz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2sfunzf2Cz72zzcgen_copz00();
	static obj_t BGl__cfuncallzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nopz00_bglt BGl_z52allocatezd2nopz80zzcgen_copz00();
	static obj_t BGl_objectzd2ze3structzd2clabe4321ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt
		BGl_fillzd2csetqz12zc0zzcgen_copz00(BgL_csetqz00_bglt, obj_t,
		BgL_varcz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_cifz00_bglt
		BGl_fillzd2cifz12zc0zzcgen_copz00(BgL_cifz00_bglt, obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_localzd2varzf3z21zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_csequencezf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_capplyz00_bglt BGl_makezd2capplyzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_creturnz00_bglt BGl_creturnzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_csetzd2exzd2itz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__cifzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2creturnz12zc0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt BGl_cgotozd2nilzd2zzcgen_copz00();
	static obj_t BGl_objectzd2ze3structzd2local4260ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt BGl_makezd2copzd2zzcgen_copz00(obj_t);
	static obj_t BGl__makezd2stopzd2zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt
		BGl_makezd2cpragmazd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2catom4298ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2stop4272ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cpragmazf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2block4311ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_structzb2objectzd2ze3objec4214z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4218z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcgen_copz00();
	static obj_t BGl__makezd2cgotozd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4222z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4226z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4230z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4234z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4238z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4242z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2stopz80zzcgen_copz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4246z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	static obj_t BGl__capplyzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4250z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_blockz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4254z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4258z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2nopzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4262z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2cmakezd2boxz52zzcgen_copz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4266z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2ccastzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4270z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_makezd2bdbzd2blockz00zzcgen_copz00(obj_t, BgL_copz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4274z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2czf2_bglt
		BGl_wideningzd2sfunzf2Cz20zzcgen_copz00(BgL_clabelz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_creturnz00_bglt
		BGl_fillzd2creturnz12zc0zzcgen_copz00(BgL_creturnz00_bglt, obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4278z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4282z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2blockzd2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4286z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4300z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nopz00_bglt BGl_nopzd2nilzd2zzcgen_copz00();
	static obj_t BGl_structzb2objectzd2ze3objec4292z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4305z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4296z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4309z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4314z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4319z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2catomzd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4323z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2cfailzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt
		BGl_z52allocatezd2cswitchz80zzcgen_copz00();
	static obj_t BGl_structzb2objectzd2ze3objec4327z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stopzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl_z52thezd2creturnzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__blockzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_clabelz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt
		BGl_fillzd2cgotoz12zc0zzcgen_copz00(BgL_cgotoz00_bglt, obj_t,
		BgL_clabelz00_bglt);
	static obj_t BGl__localzd2varzd2nilz00zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_fillzd2cjumpzd2exzd2itz12zc0zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt,
		obj_t, BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl__fillzd2capplyz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2cifzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt BGl_z52allocatezd2cvoidz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_z52allocatezd2cboxzd2setz12z40zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt BGl_cvoidzd2nilzd2zzcgen_copz00();
	static obj_t BGl__makezd2cmakezd2boxz00zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bdbzd2blockzd2nilz00zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cpragmaz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_catomzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z52thezd2catomzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2copzd2zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2csetqz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2capplyzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2blockzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__creturnzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__cboxzd2refzf3z21zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_fillzd2bdbzd2blockz12z12zzcgen_copz00(BgL_bdbzd2blockzd2_bglt, obj_t,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cfailzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_fillzd2cmakezd2boxz12z12zzcgen_copz00(BgL_cmakezd2boxzd2_bglt, obj_t,
		BgL_copz00_bglt);
	static obj_t BGl__cfailzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__cpragmazf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_localzd2varzd2nilz00zzcgen_copz00();
	static obj_t BGl__csequencezd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__cvoidzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_varcz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2cif4264ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nopz00_bglt
		BGl_fillzd2nopz12zc0zzcgen_copz00(BgL_nopz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_fillzd2cboxzd2setz12z12z00zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt,
		obj_t, BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl__z52allocatezd2cswitchz80zzcgen_copz00(obj_t);
	static obj_t BGl__cboxzd2refzd2nilz00zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_makezd2blockzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static obj_t BGl__nopzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_bdbzd2blockzd2nilz00zzcgen_copz00();
	static obj_t BGl__cboxzd2setz12zd2nilz12zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2cjumpzd2exzd2itz12zc0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cifz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cappz00_bglt BGl_z52allocatezd2cappz80zzcgen_copz00();
	static obj_t BGl__z52allocatezd2sfunzf2Cz72zzcgen_copz00(obj_t);
	static obj_t BGl__capplyzd2nilzd2zzcgen_copz00(obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cop4325ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_csequencez00_bglt BGl_csequencezd2nilzd2zzcgen_copz00();
	static obj_t BGl__makezd2cfuncallzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2csequencez80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_capplyz00_bglt
		BGl_z52allocatezd2capplyz80zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_copz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt
		BGl_z52allocatezd2cpragmaz80zzcgen_copz00();
	static obj_t BGl__fillzd2cifz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2cgotoz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__fillzd2cswitchz12zc0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__cgotozd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__cjumpzd2exzd2itzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_fillzd2copz12zc0zzcgen_copz00(BgL_copz00_bglt, obj_t);
	static obj_t BGl_methodzd2initzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_cboxzd2setz12zd2nilz12zzcgen_copz00();
	static obj_t BGl_objectzd2ze3structzd2ccast4284ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__copzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_ccastz00_bglt
		BGl_fillzd2ccastz12zc0zzcgen_copz00(BgL_ccastz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_blockzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl__makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2csetqz80zzcgen_copz00(obj_t);
	static obj_t BGl__makezd2cswitchzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_makezd2cboxzd2setz12z12zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_catomz00_bglt BGl_catomzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_creturnzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cboxzd2setz12zc0zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_blockzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_clabelz00_bglt BGl_makezd2clabelzd2zzcgen_copz00(obj_t,
		obj_t, bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt
		BGl_makezd2cfuncallzd2zzcgen_copz00(obj_t, BgL_copz00_bglt, obj_t, obj_t);
	static obj_t BGl__makezd2csequencezd2zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cappz00_bglt BGl_makezd2cappzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, obj_t);
	static obj_t BGl__clabelzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_varczf3zf3zzcgen_copz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__nopzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2localzd2varz12z12zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2csequencez12zc0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_objectzd2ze3structzd2bdbzd2b4212z31zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2cvoidzd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl__cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt
		BGl_fillzd2cswitchz12zc0zzcgen_copz00(BgL_cswitchz00_bglt, obj_t,
		BgL_copz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_z52allocatezd2blockz80zzcgen_copz00();
	static obj_t BGl_objectzd2ze3structzd2cjump4220ze3zzcgen_copz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2varczd2zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cfuncallz80zzcgen_copz00(obj_t);
	static obj_t BGl__localzd2varzf3z21zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__csequencezf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2cappzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2cpragmaz80zzcgen_copz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcgen_copz00();
	static obj_t BGl__fillzd2cboxzd2refz12z12zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvoidzf3zf3zzcgen_copz00(obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL BgL_sfunzf2czf2_bglt
		BGl_fillzd2sfunzf2Cz12z32zzcgen_copz00(BgL_sfunzf2czf2_bglt,
		BgL_clabelz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_z52allocatezd2csetzd2exzd2itz80zzcgen_copz00();
	static obj_t BGl__z52allocatezd2varcz80zzcgen_copz00(obj_t);
	static obj_t BGl__cvoidzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2czf2_bglt BGl_sfunzf2Czd2nilz20zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_creturnz00_bglt
		BGl_makezd2creturnzd2zzcgen_copz00(obj_t, BgL_copz00_bglt);
	static obj_t BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2bdbzd2blockz52zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt
		BGl_z52allocatezd2cfuncallz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_z52allocatezd2localzd2varz52zzcgen_copz00();
	static obj_t BGl__varczf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stopzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_cappz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2csetq4268ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2ccastzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2cgotoz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_bdbzd2blockzf3z21zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfuncallz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_cappzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2cboxzd24228z31zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cmakezd2boxzf3z21zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2cboxzd24232z31zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2ccastz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_csetqz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__creturnzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2ccastz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DECL BgL_nopz00_bglt BGl_makezd2nopzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_varcz00_bglt
		BGl_fillzd2varcz12zc0zzcgen_copz00(BgL_varcz00_bglt, obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cboxzd2setz12zf3z33zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2nopz12zc0zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_catomz00_bglt
		BGl_fillzd2catomz12zc0zzcgen_copz00(BgL_catomz00_bglt, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2catomz80zzcgen_copz00(obj_t);
	static obj_t BGl__makezd2cpragmazd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cfailz80zzcgen_copz00(obj_t);
	static obj_t BGl__z52allocatezd2cifz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_clabelz00_bglt
		BGl_fillzd2clabelz12zc0zzcgen_copz00(BgL_clabelz00_bglt, obj_t, obj_t,
		bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfailz00_bglt
		BGl_fillzd2cfailz12zc0zzcgen_copz00(BgL_cfailz00_bglt, obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl__makezd2clabelzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2bdbzd2blockz00zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_copz00();
	static obj_t BGl__z52allocatezd2capplyz80zzcgen_copz00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_cappz00_bglt BGl_cappzd2nilzd2zzcgen_copz00();
	static obj_t BGl__cmakezd2boxzd2nilz00zzcgen_copz00(obj_t);
	static obj_t BGl__z52allocatezd2copz80zzcgen_copz00(obj_t);
	static obj_t BGl__csetqzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__stopzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt BGl_cswitchzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_creturnz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt BGl_cpragmazd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_cfuncallzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl__cappzf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_fillzd2csetzd2exzd2itz12zc0zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt,
		obj_t, BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl__makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Czf3z01zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cifz00_bglt BGl_z52allocatezd2cifz80zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czf2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__fillzd2copz12zc0zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_stopz00_bglt
		BGl_fillzd2stopz12zc0zzcgen_copz00(BgL_stopz00_bglt, obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2capp4248ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2csetzd24224z31zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2blockzd2zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_cmakezd2boxzd2nilz00zzcgen_copz00();
	static obj_t BGl_z52thezd2csetqzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2capplyzd2nilz52zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt BGl_cfuncallzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_clabelz00_bglt
		BGl_z52allocatezd2clabelz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cappz00_bglt
		BGl_fillzd2cappz12zc0zzcgen_copz00(BgL_cappz00_bglt, obj_t, BgL_copz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt BGl_z52allocatezd2copz80zzcgen_copz00();
	static obj_t BGl__catomzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_ccastz00_bglt BGl_ccastzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_cswitchzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cgotoz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_z52allocatezd2cmakezd2boxz52zzcgen_copz00();
	static obj_t BGl__blockzd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t,
		BgL_varcz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_cjumpzd2exzd2itz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2cappzd2zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_makezd2localzd2varz00zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt
		BGl_fillzd2cfuncallz12zc0zzcgen_copz00(BgL_cfuncallz00_bglt, obj_t,
		BgL_copz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ccastz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_localzd2varzd2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__makezd2nopzd2zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_fillzd2blockz12zc0zzcgen_copz00(BgL_blockz00_bglt, obj_t,
		BgL_copz00_bglt);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__cgotozf3zf3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_catomz00zzcgen_copz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DEF obj_t BGl_cfailz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_clabelzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2catomz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cfail4244ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2cifzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2cappz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_creturnz00_bglt
		BGl_z52allocatezd2creturnz80zzcgen_copz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2varczd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__cappzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl__fillzd2cfailz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cboxzd2setz12z40zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cifz00_bglt BGl_cifzd2nilzd2zzcgen_copz00();
	static obj_t BGl__csetzd2exzd2itzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2nop4276ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2clabelzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2copzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl__wideningzd2sfunzf2Cz20zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cifzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt BGl_copzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_stopz00_bglt BGl_z52allocatezd2stopz80zzcgen_copz00();
	static obj_t BGl_objectzd2ze3structzd2cappl4252ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__cswitchzd2nilzd2zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2cprag4289ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__cpragmazd2nilzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt
		BGl_fillzd2cvoidz12zc0zzcgen_copz00(BgL_cvoidz00_bglt, obj_t,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_capplyz00_bglt
		BGl_fillzd2capplyz12zc0zzcgen_copz00(BgL_capplyz00_bglt, obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_nopz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_csetqzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00();
	static obj_t BGl__makezd2cboxzd2setz12z12zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt BGl_makezd2cgotozd2zzcgen_copz00(obj_t,
		BgL_clabelz00_bglt);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt BGl_csetqzd2nilzd2zzcgen_copz00();
	static obj_t BGl__cswitchzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cvoidz80zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2sfunzf24216z11zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt BGl_z52allocatezd2csetqz80zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_ccastz00_bglt BGl_makezd2ccastzd2zzcgen_copz00(obj_t,
		BgL_typez00_bglt, BgL_copz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2cswit4240ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2creturnz80zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcgen_copz00();
	static obj_t BGl__makezd2cboxzd2refz00zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2csequ4280ze3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__sfunzf2Czd2nilz20zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_fillzd2localzd2varz12z12zzcgen_copz00(BgL_localzd2varzd2_bglt, obj_t,
		obj_t);
	static obj_t BGl__fillzd2cpragmaz12zc0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_catomz00_bglt BGl_makezd2catomzd2zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_csequencez00_bglt
		BGl_fillzd2csequencez12zc0zzcgen_copz00(BgL_csequencez00_bglt, obj_t,
		bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_makezd2cmakezd2boxz00zzcgen_copz00(obj_t, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_cfailz00_bglt BGl_makezd2cfailzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_csequencez00_bglt
		BGl_z52allocatezd2csequencez80zzcgen_copz00();
	extern BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	static obj_t BGl_objectzd2ze3structzd2cgoto4317ze3zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2czf2_bglt
		BGl_makezd2sfunzf2Cz20zzcgen_copz00(long, obj_t, obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, BgL_clabelz00_bglt, bool_t);
	static obj_t BGl__fillzd2bdbzd2blockz12z12zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cmakezd2boxzd2zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_varcz00_bglt BGl_varczd2nilzd2zzcgen_copz00();
	static obj_t BGl__fillzd2cmakezd2boxz12z12zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2csetzd2exzd2itz12zc0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2blockz12zc0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cjumpzd2exzd2itz80zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_cboxzd2refzd2nilz00zzcgen_copz00();
	static obj_t BGl_z52thezd2cfailzd2nilz52zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_copz00();
	static obj_t BGl__sfunzf2Czf3z01zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__bdbzd2blockzf3z21zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__fillzd2cboxzd2setz12z12z00zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__cfuncallzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__cmakezd2boxzf3z21zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl__ccastzf3zf3zzcgen_copz00(obj_t, obj_t);
	static obj_t __cnst[29];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2catomzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5097z00,
		BGl__z52allocatezd2catomz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cifza7f3za7f3za7za7cgen5098z00, BGl__cifzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cswitchz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cswitchza75099z00, BGl__fillzd2cswitchz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2blockzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2b5100z00,
		BGl__z52allocatezd2blockz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cboxzd2refzd2envzd2zzcgen_copz00,
		BgL_bgl__makeza7d2cboxza7d2r5101z00, BGl__makezd2cboxzd2refz00zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzf3zd2envz21zzcgen_copz00,
		BgL_bgl__catomza7f3za7f3za7za7cg5102z00, BGl__catomzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cboxzd2setz12zd2envz92zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5103z00,
		BGl__z52allocatezd2cboxzd2setz12z40zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cvoidza7d2nilza7d2za75104za7, BGl__cvoidzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzf3zd2envz21zzcgen_copz00,
		BgL_bgl__clabelza7f3za7f3za7za7c5105z00, BGl__clabelzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2ccastz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2ccastza7125106z00, BGl__fillzd2ccastz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2varcz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2varcza712za75107za7, BGl__fillzd2varcz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzf3zd2envz21zzcgen_copz00,
		BgL_bgl__nopza7f3za7f3za7za7cgen5108z00, BGl__nopzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczf3zd2envz21zzcgen_copz00,
		BgL_bgl__varcza7f3za7f3za7za7cge5109z00, BGl__varczf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cpragmaz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cpragmaza75110z00, BGl__fillzd2cpragmaz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cgotoz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cgotoza7125111z00, BGl__fillzd2cgotoz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2nopzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2n5112z00, BGl__z52allocatezd2nopz80zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cfuncallzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5113z00,
		BGl__z52allocatezd2cfuncallz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__csetqza7d2nilza7d2za75114za7, BGl__csetqzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzf3zd2envz21zzcgen_copz00,
		BgL_bgl__blockza7f3za7f3za7za7cg5115z00, BGl__blockzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cvoidz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cvoidza7125116z00, BGl__fillzd2cvoidz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cboxzd2refz12zd2envzc0zzcgen_copz00,
		BgL_bgl__fillza7d2cboxza7d2r5117z00,
		BGl__fillzd2cboxzd2refz12z12zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__nopza7d2nilza7d2za7za7c5118z00, BGl__nopzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__csetza7d2exza7d2itza75119za7,
		BGl__csetzd2exzd2itzd2nilzd2zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cjumpzd2exzd2itz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cjumpza7d25120z00,
		BGl__fillzd2cjumpzd2exzd2itz12zc0zzcgen_copz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__creturnza7d2nilza7d5121z00, BGl__creturnzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__catomza7d2nilza7d2za75122za7, BGl__catomzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2capplyzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5123z00,
		BGl__z52allocatezd2capplyz80zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2csetzd2exzd2itz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2csetza7d2e5124z00,
		BGl__fillzd2csetzd2exzd2itz12zc0zzcgen_copz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cfailz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cfailza7125125z00, BGl__fillzd2cfailz12zc0zzcgen_copz00,
		0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2cjumpzd2exzd2itzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cjumpza7d25126z00,
		BGl__makezd2cjumpzd2exzd2itzd2zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2catomzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2catomza7d25127z00, BGl__makezd2catomzd2zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cifza7d2nilza7d2za7za7c5128z00, BGl__cifzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__blockza7d2nilza7d2za75129za7, BGl__blockzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzf3zd2envzf3zzcgen_copz00,
		BgL_bgl__cboxza7d2refza7f3za725130za7, BGl__cboxzd2refzf3z21zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2blockzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2blockza7d25131z00, BGl__makezd2blockzd2zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__stopza7d2nilza7d2za7za75132z00, BGl__stopzd2nilzd2zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__copza7d2nilza7d2za7za7c5133z00, BGl__copzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sfunzf2Czd2envzf2zzcgen_copz00,
		BgL_bgl__makeza7d2sfunza7f2c5134z00, BGl__makezd2sfunzf2Cz20zzcgen_copz00,
		0L, BUNSPEC, 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzf3zd2envz21zzcgen_copz00,
		BgL_bgl__capplyza7f3za7f3za7za7c5135z00, BGl__capplyzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2clabelzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5136z00,
		BGl__z52allocatezd2clabelz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzf3zd2envzf3zzcgen_copz00,
		BgL_bgl__bdbza7d2blockza7f3za75137za7, BGl__bdbzd2blockzf3z21zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cfuncallz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cfuncall5138za7, BGl__fillzd2cfuncallz12zc0zzcgen_copz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cappzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cappza7d2za75139za7, BGl__makezd2cappzd2zzcgen_copz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2ccastzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5140z00,
		BGl__z52allocatezd2ccastz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2csetqz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2csetqza7125141z00, BGl__fillzd2csetqz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzf3zd2envz21zzcgen_copz00,
		BgL_bgl__copza7f3za7f3za7za7cgen5142z00, BGl__copzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzf3zd2envzf3zzcgen_copz00,
		BgL_bgl__cmakeza7d2boxza7f3za75143za7, BGl__cmakezd2boxzf3z21zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2creturnzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5144z00,
		BGl__z52allocatezd2creturnz80zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cboxzd2refzd2envz80zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5145z00,
		BGl__z52allocatezd2cboxzd2refz52zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cmakezd2boxzd2envz80zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5146z00,
		BGl__z52allocatezd2cmakezd2boxz52zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csetzd2exzd2itzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2csetza7d2e5147z00,
		BGl__makezd2csetzd2exzd2itzd2zzcgen_copz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2bdbzd2blockz12zd2envzc0zzcgen_copz00,
		BgL_bgl__fillza7d2bdbza7d2bl5148z00,
		BGl__fillzd2bdbzd2blockz12z12zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cfuncallza7f3za7f3za75149za7, BGl__cfuncallzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cappzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5150z00,
		BGl__z52allocatezd2cappz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzf3zd2envz21zzcgen_copz00,
		BgL_bgl__creturnza7f3za7f3za7za75151z00, BGl__creturnzf3zf3zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5000z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75152z00,
		BGl_structzb2objectzd2ze3objec4250z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5001z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5153z00,
		BGl_objectzd2ze3structzd2cappl4252ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5002z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75154z00,
		BGl_structzb2objectzd2ze3objec4254z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5003z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5155z00,
		BGl_objectzd2ze3structzd2cfunc4256ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5004z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75156z00,
		BGl_structzb2objectzd2ze3objec4258z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5005z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5157z00,
		BGl_objectzd2ze3structzd2local4260ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5006z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75158z00,
		BGl_structzb2objectzd2ze3objec4262z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5007z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5159z00,
		BGl_objectzd2ze3structzd2cif4264ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5008z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75160z00,
		BGl_structzb2objectzd2ze3objec4266z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5010z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75161z00,
		BGl_structzb2objectzd2ze3objec4270z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5009z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5162z00,
		BGl_objectzd2ze3structzd2csetq4268ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5011z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5163z00,
		BGl_objectzd2ze3structzd2stop4272ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5012z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75164z00,
		BGl_structzb2objectzd2ze3objec4274z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5013z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5165z00,
		BGl_objectzd2ze3structzd2nop4276ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5014z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75166z00,
		BGl_structzb2objectzd2ze3objec4278z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5015z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5167z00,
		BGl_objectzd2ze3structzd2csequ4280ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5016z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75168z00,
		BGl_structzb2objectzd2ze3objec4282z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5017z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5169z00,
		BGl_objectzd2ze3structzd2ccast4284ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5018z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75170z00,
		BGl_structzb2objectzd2ze3objec4286z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5020z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75171z00,
		BGl_structzb2objectzd2ze3objec4292z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5019z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5172z00,
		BGl_objectzd2ze3structzd2cprag4289ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5021z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5173z00,
		BGl_objectzd2ze3structzd2varc4294ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5022z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75174z00,
		BGl_structzb2objectzd2ze3objec4296z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5023z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5175z00,
		BGl_objectzd2ze3structzd2catom4298ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5024z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75176z00,
		BGl_structzb2objectzd2ze3objec4300z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5025z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5177z00,
		BGl_objectzd2ze3structzd2cvoid4302ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5026z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75178z00,
		BGl_structzb2objectzd2ze3objec4305z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5027z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5179z00,
		BGl_objectzd2ze3structzd2cretu4307ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5028z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75180z00,
		BGl_structzb2objectzd2ze3objec4309z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5030z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75181z00,
		BGl_structzb2objectzd2ze3objec4314z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5029z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5182z00,
		BGl_objectzd2ze3structzd2block4311ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5031z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5183z00,
		BGl_objectzd2ze3structzd2cgoto4317ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5032z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75184z00,
		BGl_structzb2objectzd2ze3objec4319z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5033z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5185z00,
		BGl_objectzd2ze3structzd2clabe4321ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5034z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75186z00,
		BGl_structzb2objectzd2ze3objec4323z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5035z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5187z00,
		BGl_objectzd2ze3structzd2cop4325ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5036z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75188z00,
		BGl_structzb2objectzd2ze3objec4327z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2creturnzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2creturnza75189z00, BGl__makezd2creturnzd2zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2nilzd2envzf2zzcgen_copz00,
		BgL_bgl__sfunza7f2cza7d2nilza75190za7, BGl__sfunzf2Czd2nilz20zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cmakezd2boxz12zd2envzc0zzcgen_copz00,
		BgL_bgl__fillza7d2cmakeza7d25191z00,
		BGl__fillzd2cmakezd2boxz12z12zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4979z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5192z00,
		BGl_objectzd2ze3structzd2bdbzd2b4212z31zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4981z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75193z00,
		BGl_structzb2objectzd2ze3objec4214z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4983z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5194z00,
		BGl_objectzd2ze3structzd2sfunzf24216z11zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4984z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75195z00,
		BGl_structzb2objectzd2ze3objec4218z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4985z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5196z00,
		BGl_objectzd2ze3structzd2cjump4220ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4986z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75197z00,
		BGl_structzb2objectzd2ze3objec4222z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4987z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5198z00,
		BGl_objectzd2ze3structzd2csetzd24224z31zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4988z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75199z00,
		BGl_structzb2objectzd2ze3objec4226z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4990z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75200z00,
		BGl_structzb2objectzd2ze3objec4230z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4989z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5201z00,
		BGl_objectzd2ze3structzd2cboxzd24228z31zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4991z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5202z00,
		BGl_objectzd2ze3structzd2cboxzd24232z31zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cifzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cifza7d2za7za75203z00, BGl__makezd2cifzd2zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzf3zd2envz21zzcgen_copz00,
		BgL_bgl__ccastza7f3za7f3za7za7cg5204z00, BGl__ccastzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4992z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75205z00,
		BGl_structzb2objectzd2ze3objec4234z83zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zd2nilzd2envzc0zzcgen_copz00,
		BgL_bgl__cboxza7d2setza712za7d5206za7,
		BGl__cboxzd2setz12zd2nilz12zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4993z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5207z00,
		BGl_objectzd2ze3structzd2cmake4236ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4994z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75208z00,
		BGl_structzb2objectzd2ze3objec4238z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4995z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5209z00,
		BGl_objectzd2ze3structzd2cswit4240ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl__localza7d2varza7d2n5210z00, BGl__localzd2varzd2nilz00zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4996z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75211z00,
		BGl_structzb2objectzd2ze3objec4242z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4997z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5212z00,
		BGl_objectzd2ze3structzd2cfail4244ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4998z00zzcgen_copz00,
		BgL_bgl_structza7b2objectza75213z00,
		BGl_structzb2objectzd2ze3objec4246z83zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4999z00zzcgen_copz00,
		BgL_bgl_objectza7d2za7e3stru5214z00,
		BGl_objectzd2ze3structzd2capp4248ze3zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2csetqzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5215z00,
		BGl__z52allocatezd2csetqz80zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2varzd2envzd2zzcgen_copz00,
		BgL_bgl__makeza7d2localza7d25216z00,
		BGl__makezd2localzd2varz00zzcgen_copz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2copzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2copza7d2za7za75217z00, BGl__makezd2copzd2zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozf3zd2envz21zzcgen_copz00,
		BgL_bgl__cgotoza7f3za7f3za7za7cg5218z00, BGl__cgotozf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5037z00zzcgen_copz00,
		BgL_bgl_string5037za700za7za7c5219za7, "cgen_cop", 8);
	      DEFINE_STRING(BGl_string5038z00zzcgen_copz00,
		BgL_bgl_string5038za700za7za7c5220za7,
		"_ bdb-block sfun/C cjump-ex-it cset-ex-it cbox-set! cbox-ref cmake-box cswitch cfail capp capply cfuncall local-var cif csetq stop nop csequence ccast cpragma varc catom cvoid creturn block cgoto clabel cop ",
		207);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ccastzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2ccastza7d25221z00, BGl__makezd2ccastzd2zzcgen_copz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cjumpzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cjumpza7d2exza7d2it5222z00,
		BGl__cjumpzd2exzd2itzd2nilzd2zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2bdbzd2blockzd2envzd2zzcgen_copz00,
		BgL_bgl__makeza7d2bdbza7d2bl5223z00,
		BGl__makezd2bdbzd2blockz00zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cvoidza7f3za7f3za7za7cg5224z00, BGl__cvoidzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__varcza7d2nilza7d2za7za75225z00, BGl__varczd2nilzd2zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4978z00zzcgen_copz00,
		BgL_bgl_string4978za700za7za7c5226za7, "", 0);
	      DEFINE_STRING(BGl_string4980z00zzcgen_copz00,
		BgL_bgl_string4980za700za7za7c5227za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4982z00zzcgen_copz00,
		BgL_bgl_string4982za700za7za7c5228za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2creturnz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2creturnza75229z00, BGl__fillzd2creturnz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2sfunzf2Czd2envzf2zzcgen_copz00,
		BgL_bgl__wideningza7d2sfun5230za7, BGl__wideningzd2sfunzf2Cz20zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__clabelza7d2nilza7d25231z00, BGl__clabelzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csequencezd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2csequenc5232za7, BGl__makezd2csequencezd2zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl__bdbza7d2blockza7d2n5233z00, BGl__bdbzd2blockzd2nilz00zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezf3zd2envz21zzcgen_copz00,
		BgL_bgl__csequenceza7f3za7f35234z00, BGl__csequencezf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2sfunzf2Cz12zd2envze0zzcgen_copz00,
		BgL_bgl__fillza7d2sfunza7f2c5235z00,
		BGl__fillzd2sfunzf2Cz12z32zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cpragmaza7d2nilza7d5236z00, BGl__cpragmazd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cboxzd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl__makeza7d2cboxza7d2s5237z00,
		BGl__makezd2cboxzd2setz12z12zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2varczd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2varcza7d2za75238za7, BGl__makezd2varczd2zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cfailza7f3za7f3za7za7cg5239z00, BGl__cfailzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzf3zd2envz21zzcgen_copz00,
		BgL_bgl__csetza7d2exza7d2itza75240za7,
		BGl__csetzd2exzd2itzf3zf3zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cjumpzd2exzd2itzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cjumpza7d2exza7d2it5241z00,
		BGl__cjumpzd2exzd2itzf3zf3zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csetqzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2csetqza7d25242z00, BGl__makezd2csetqzd2zzcgen_copz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2csequencez12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2csequenc5243za7, BGl__fillzd2csequencez12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cgotoza7d2nilza7d2za75244za7, BGl__cgotozd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__capplyza7d2nilza7d25245z00, BGl__capplyzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2varczd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2v5246z00,
		BGl__z52allocatezd2varcz80zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cfailzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5247z00,
		BGl__z52allocatezd2cfailz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cifzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5248z00, BGl__z52allocatezd2cifz80zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzf3zd2envz21zzcgen_copz00,
		BgL_bgl__csetqza7f3za7f3za7za7cg5249z00, BGl__csetqzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sfunzf2Czd2envza0zzcgen_copz00,
		BgL_bgl__za752allocateza7d2s5250z00,
		BGl__z52allocatezd2sfunzf2Cz72zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cappz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cappza712za75251za7, BGl__fillzd2cappz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2copzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5252z00, BGl__z52allocatezd2copz80zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cswitchza7d2nilza7d5253z00, BGl__cswitchzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__ccastza7d2nilza7d2za75254za7, BGl__ccastzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2catomz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2catomza7125255z00, BGl__fillzd2catomz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cappza7f3za7f3za7za7cge5256z00, BGl__cappzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cifz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2cifza712za7c5257za7, BGl__fillzd2cifz12zc0zzcgen_copz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cappza7d2nilza7d2za7za75258z00, BGl__cappzd2nilzd2zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__csequenceza7d2nil5259za7, BGl__csequencezd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2capplyzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2capplyza7d5260z00, BGl__makezd2capplyzd2zzcgen_copz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cgotozd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5261z00,
		BGl__z52allocatezd2cgotoz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2clabelz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2clabelza715262z00, BGl__fillzd2clabelz12zc0zzcgen_copz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2stopzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2stopza7d2za75263za7, BGl__makezd2stopzd2zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2blockz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2blockza7125264z00, BGl__fillzd2blockz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2nopz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2nopza712za7c5265za7, BGl__fillzd2nopz12zc0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl__cboxza7d2refza7d2ni5266z00, BGl__cboxzd2refzd2nilz00zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cjumpzd2exzd2itzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5267z00,
		BGl__z52allocatezd2cjumpzd2exzd2itz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfailzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cfailza7d25268z00, BGl__makezd2cfailzd2zzcgen_copz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cmakezd2boxzd2envzd2zzcgen_copz00,
		BgL_bgl__makeza7d2cmakeza7d25269z00,
		BGl__makezd2cmakezd2boxz00zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2clabelzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2clabelza7d5270z00, BGl__makezd2clabelzd2zzcgen_copz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cswitchzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5271z00,
		BGl__z52allocatezd2cswitchz80zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cpragmazd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5272z00,
		BGl__z52allocatezd2cpragmaz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czf3zd2envzd3zzcgen_copz00,
		BgL_bgl__sfunza7f2cza7f3za701za75273z00, BGl__sfunzf2Czf3z01zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfuncallzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cfuncall5274za7, BGl__makezd2cfuncallzd2zzcgen_copz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2stopzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2s5275z00,
		BGl__z52allocatezd2stopz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cfuncallza7d2nilza75276z00, BGl__cfuncallzd2nilzd2zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cvoidzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5277z00,
		BGl__z52allocatezd2cvoidz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nopzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2nopza7d2za7za75278z00, BGl__makezd2nopzd2zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl__cfailza7d2nilza7d2za75279za7, BGl__cfailzd2nilzd2zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zf3zd2envze1zzcgen_copz00,
		BgL_bgl__cboxza7d2setza712za7f5280za7,
		BGl__cboxzd2setz12zf3z33zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cswitchzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cswitchza75281z00, BGl__makezd2cswitchzd2zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cpragmazd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cpragmaza75282z00, BGl__makezd2cpragmazd2zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cgotozd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cgotoza7d25283z00, BGl__makezd2cgotozd2zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzf3zd2envzf3zzcgen_copz00,
		BgL_bgl__localza7d2varza7f3za75284za7, BGl__localzd2varzf3z21zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzf3zd2envz21zzcgen_copz00,
		BgL_bgl__cswitchza7f3za7f3za7za75285z00, BGl__cswitchzf3zf3zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2capplyz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2capplyza715286z00, BGl__fillzd2capplyz12zc0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2stopz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2stopza712za75287za7, BGl__fillzd2stopz12zc0zzcgen_copz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2localzd2varzd2envz80zzcgen_copz00,
		BgL_bgl__za752allocateza7d2l5288z00,
		BGl__z52allocatezd2localzd2varz52zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2csetzd2exzd2itzd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5289z00,
		BGl__z52allocatezd2csetzd2exzd2itz80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzf3zd2envz21zzcgen_copz00,
		BgL_bgl__stopza7f3za7f3za7za7cge5290z00, BGl__stopzf3zf3zzcgen_copz00, 0L,
		BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cboxzd2setz12z12zd2envzd2zzcgen_copz00,
		BgL_bgl__fillza7d2cboxza7d2s5291z00,
		BGl__fillzd2cboxzd2setz12z12z00zzcgen_copz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazf3zd2envz21zzcgen_copz00,
		BgL_bgl__cpragmaza7f3za7f3za7za75292z00, BGl__cpragmazf3zf3zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2bdbzd2blockzd2envz80zzcgen_copz00,
		BgL_bgl__za752allocateza7d2b5293z00,
		BGl__z52allocatezd2bdbzd2blockz52zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2copz12zd2envz12zzcgen_copz00,
		BgL_bgl__fillza7d2copza712za7c5294za7, BGl__fillzd2copz12zc0zzcgen_copz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2localzd2varz12zd2envzc0zzcgen_copz00,
		BgL_bgl__fillza7d2localza7d25295z00,
		BGl__fillzd2localzd2varz12z12zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl__cmakeza7d2boxza7d2n5296z00, BGl__cmakezd2boxzd2nilz00zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2csequencezd2envz52zzcgen_copz00,
		BgL_bgl__za752allocateza7d2c5297z00,
		BGl__z52allocatezd2csequencez80zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cvoidzd2envz00zzcgen_copz00,
		BgL_bgl__makeza7d2cvoidza7d25298z00, BGl__makezd2cvoidzd2zzcgen_copz00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long
		BgL_checksumz00_5155, char *BgL_fromz00_5156)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_copz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_copz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcgen_copz00();
					BGl_cnstzd2initzd2zzcgen_copz00();
					BGl_importedzd2moduleszd2initz00zzcgen_copz00();
					BGl_objectzd2initzd2zzcgen_copz00();
					BGl_methodzd2initzd2zzcgen_copz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_cop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_cop");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			{	/* Cgen/cop.scm 15 */
				obj_t BgL_cportz00_4704;

				BgL_cportz00_4704 =
					bgl_open_input_string(BGl_string5038z00zzcgen_copz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4705;

					BgL_iz00_4705 = ((long) 28);
				BgL_loopz00_4706:
					if ((BgL_iz00_4705 == ((long) -1)))
						{	/* Cgen/cop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/cop.scm 15 */
							{	/* Cgen/cop.scm 15 */
								obj_t BgL_arg5040z00_4708;

								{	/* Cgen/cop.scm 15 */

									{	/* Cgen/cop.scm 15 */
										obj_t BgL_locationz00_4710;

										BgL_locationz00_4710 = BBOOL(((bool_t) 0));
										{	/* Cgen/cop.scm 15 */

											BgL_arg5040z00_4708 =
												BGl_readz00zz__readerz00(BgL_cportz00_4704,
												BgL_locationz00_4710);
										}
									}
								}
								{	/* Cgen/cop.scm 15 */
									int BgL_auxz00_5173;

									BgL_auxz00_5173 = (int) (BgL_iz00_4705);
									CNST_TABLE_SET(BgL_auxz00_5173, BgL_arg5040z00_4708);
							}}
							{	/* Cgen/cop.scm 15 */
								int BgL_auxz00_4711;

								BgL_auxz00_4711 = (int) ((BgL_iz00_4705 - ((long) 1)));
								{
									long BgL_iz00_5178;

									BgL_iz00_5178 = (long) (BgL_auxz00_4711);
									BgL_iz00_4705 = BgL_iz00_5178;
									goto BgL_loopz00_4706;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			{	/* Cgen/cop.scm 21 */
				obj_t BgL_arg4328z00_1133;

				obj_t BgL_arg4329z00_1134;

				obj_t BgL_arg4332z00_1137;

				BgL_arg4328z00_1133 = CNST_TABLE_REF(((long) 0));
				BgL_arg4329z00_1134 = BGl_objectz00zz__objectz00;
				{	/* Cgen/cop.scm 21 */
					obj_t BgL_v4183z00_1138;

					BgL_v4183z00_1138 = create_vector((int) (((long) 0)));
					BgL_arg4332z00_1137 = BgL_v4183z00_1138;
				}
				BGl_copz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4328z00_1133,
					BgL_arg4329z00_1134, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2copzd2envz52zzcgen_copz00,
					BGl_copzd2nilzd2envz00zzcgen_copz00, BGl_copzf3zd2envz21zzcgen_copz00,
					((long) 44966189), BFALSE, BFALSE, BgL_arg4332z00_1137);
			}
			{	/* Cgen/cop.scm 25 */
				obj_t BgL_arg4333z00_1139;

				obj_t BgL_arg4334z00_1140;

				obj_t BgL_arg4337z00_1143;

				BgL_arg4333z00_1139 = CNST_TABLE_REF(((long) 1));
				BgL_arg4334z00_1140 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 25 */
					obj_t BgL_v4184z00_1144;

					BgL_v4184z00_1144 = create_vector((int) (((long) 0)));
					BgL_arg4337z00_1143 = BgL_v4184z00_1144;
				}
				BGl_clabelz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4333z00_1139,
					BgL_arg4334z00_1140, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2clabelzd2envz52zzcgen_copz00,
					BGl_clabelzd2nilzd2envz00zzcgen_copz00,
					BGl_clabelzf3zd2envz21zzcgen_copz00, ((long) 404924117), BFALSE,
					BFALSE, BgL_arg4337z00_1143);
			}
			{	/* Cgen/cop.scm 30 */
				obj_t BgL_arg4338z00_1145;

				obj_t BgL_arg4339z00_1146;

				obj_t BgL_arg4342z00_1149;

				BgL_arg4338z00_1145 = CNST_TABLE_REF(((long) 2));
				BgL_arg4339z00_1146 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 30 */
					obj_t BgL_v4185z00_1150;

					BgL_v4185z00_1150 = create_vector((int) (((long) 0)));
					BgL_arg4342z00_1149 = BgL_v4185z00_1150;
				}
				BGl_cgotoz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4338z00_1145,
					BgL_arg4339z00_1146, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cgotozd2envz52zzcgen_copz00,
					BGl_cgotozd2nilzd2envz00zzcgen_copz00,
					BGl_cgotozf3zd2envz21zzcgen_copz00, ((long) 298123669), BFALSE,
					BFALSE, BgL_arg4342z00_1149);
			}
			{	/* Cgen/cop.scm 33 */
				obj_t BgL_arg4343z00_1151;

				obj_t BgL_arg4344z00_1152;

				obj_t BgL_arg4347z00_1155;

				BgL_arg4343z00_1151 = CNST_TABLE_REF(((long) 3));
				BgL_arg4344z00_1152 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 33 */
					obj_t BgL_v4186z00_1156;

					BgL_v4186z00_1156 = create_vector((int) (((long) 0)));
					BgL_arg4347z00_1155 = BgL_v4186z00_1156;
				}
				BGl_blockz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4343z00_1151,
					BgL_arg4344z00_1152, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2blockzd2envz52zzcgen_copz00,
					BGl_blockzd2nilzd2envz00zzcgen_copz00,
					BGl_blockzf3zd2envz21zzcgen_copz00, ((long) 515825049), BFALSE,
					BFALSE, BgL_arg4347z00_1155);
			}
			{	/* Cgen/cop.scm 36 */
				obj_t BgL_arg4348z00_1157;

				obj_t BgL_arg4349z00_1158;

				obj_t BgL_arg4352z00_1161;

				BgL_arg4348z00_1157 = CNST_TABLE_REF(((long) 4));
				BgL_arg4349z00_1158 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 36 */
					obj_t BgL_v4187z00_1162;

					BgL_v4187z00_1162 = create_vector((int) (((long) 0)));
					BgL_arg4352z00_1161 = BgL_v4187z00_1162;
				}
				BGl_creturnz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4348z00_1157,
					BgL_arg4349z00_1158, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2creturnzd2envz52zzcgen_copz00,
					BGl_creturnzd2nilzd2envz00zzcgen_copz00,
					BGl_creturnzf3zd2envz21zzcgen_copz00, ((long) 51113648), BFALSE,
					BFALSE, BgL_arg4352z00_1161);
			}
			{	/* Cgen/cop.scm 39 */
				obj_t BgL_arg4353z00_1163;

				obj_t BgL_arg4354z00_1164;

				obj_t BgL_arg4357z00_1167;

				BgL_arg4353z00_1163 = CNST_TABLE_REF(((long) 5));
				BgL_arg4354z00_1164 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 39 */
					obj_t BgL_v4188z00_1168;

					BgL_v4188z00_1168 = create_vector((int) (((long) 0)));
					BgL_arg4357z00_1167 = BgL_v4188z00_1168;
				}
				BGl_cvoidz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4353z00_1163,
					BgL_arg4354z00_1164, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cvoidzd2envz52zzcgen_copz00,
					BGl_cvoidzd2nilzd2envz00zzcgen_copz00,
					BGl_cvoidzf3zd2envz21zzcgen_copz00, ((long) 9804554), BFALSE, BFALSE,
					BgL_arg4357z00_1167);
			}
			{	/* Cgen/cop.scm 42 */
				obj_t BgL_arg4358z00_1169;

				obj_t BgL_arg4359z00_1170;

				obj_t BgL_arg4362z00_1173;

				BgL_arg4358z00_1169 = CNST_TABLE_REF(((long) 6));
				BgL_arg4359z00_1170 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 42 */
					obj_t BgL_v4189z00_1174;

					BgL_v4189z00_1174 = create_vector((int) (((long) 0)));
					BgL_arg4362z00_1173 = BgL_v4189z00_1174;
				}
				BGl_catomz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4358z00_1169,
					BgL_arg4359z00_1170, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2catomzd2envz52zzcgen_copz00,
					BGl_catomzd2nilzd2envz00zzcgen_copz00,
					BGl_catomzf3zd2envz21zzcgen_copz00, ((long) 404891), BFALSE, BFALSE,
					BgL_arg4362z00_1173);
			}
			{	/* Cgen/cop.scm 45 */
				obj_t BgL_arg4363z00_1175;

				obj_t BgL_arg4364z00_1176;

				obj_t BgL_arg4367z00_1179;

				BgL_arg4363z00_1175 = CNST_TABLE_REF(((long) 7));
				BgL_arg4364z00_1176 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 45 */
					obj_t BgL_v4190z00_1180;

					BgL_v4190z00_1180 = create_vector((int) (((long) 0)));
					BgL_arg4367z00_1179 = BgL_v4190z00_1180;
				}
				BGl_varcz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4363z00_1175,
					BgL_arg4364z00_1176, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2varczd2envz52zzcgen_copz00,
					BGl_varczd2nilzd2envz00zzcgen_copz00,
					BGl_varczf3zd2envz21zzcgen_copz00, ((long) 60498908), BFALSE, BFALSE,
					BgL_arg4367z00_1179);
			}
			{	/* Cgen/cop.scm 48 */
				obj_t BgL_arg4368z00_1181;

				obj_t BgL_arg4369z00_1182;

				obj_t BgL_arg4372z00_1185;

				BgL_arg4368z00_1181 = CNST_TABLE_REF(((long) 8));
				BgL_arg4369z00_1182 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 48 */
					obj_t BgL_v4191z00_1186;

					BgL_v4191z00_1186 = create_vector((int) (((long) 0)));
					BgL_arg4372z00_1185 = BgL_v4191z00_1186;
				}
				BGl_cpragmaz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4368z00_1181,
					BgL_arg4369z00_1182, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cpragmazd2envz52zzcgen_copz00,
					BGl_cpragmazd2nilzd2envz00zzcgen_copz00,
					BGl_cpragmazf3zd2envz21zzcgen_copz00, ((long) 51122253), BFALSE,
					BFALSE, BgL_arg4372z00_1185);
			}
			{	/* Cgen/cop.scm 52 */
				obj_t BgL_arg4373z00_1187;

				obj_t BgL_arg4374z00_1188;

				obj_t BgL_arg4377z00_1191;

				BgL_arg4373z00_1187 = CNST_TABLE_REF(((long) 9));
				BgL_arg4374z00_1188 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 52 */
					obj_t BgL_v4192z00_1192;

					BgL_v4192z00_1192 = create_vector((int) (((long) 0)));
					BgL_arg4377z00_1191 = BgL_v4192z00_1192;
				}
				BGl_ccastz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4373z00_1187,
					BgL_arg4374z00_1188, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2ccastzd2envz52zzcgen_copz00,
					BGl_ccastzd2nilzd2envz00zzcgen_copz00,
					BGl_ccastzf3zd2envz21zzcgen_copz00, ((long) 254548655), BFALSE,
					BFALSE, BgL_arg4377z00_1191);
			}
			{	/* Cgen/cop.scm 56 */
				obj_t BgL_arg4378z00_1193;

				obj_t BgL_arg4379z00_1194;

				obj_t BgL_arg4382z00_1197;

				BgL_arg4378z00_1193 = CNST_TABLE_REF(((long) 10));
				BgL_arg4379z00_1194 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 56 */
					obj_t BgL_v4193z00_1198;

					BgL_v4193z00_1198 = create_vector((int) (((long) 0)));
					BgL_arg4382z00_1197 = BgL_v4193z00_1198;
				}
				BGl_csequencez00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4378z00_1193,
					BgL_arg4379z00_1194, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2csequencezd2envz52zzcgen_copz00,
					BGl_csequencezd2nilzd2envz00zzcgen_copz00,
					BGl_csequencezf3zd2envz21zzcgen_copz00, ((long) 330137238), BFALSE,
					BFALSE, BgL_arg4382z00_1197);
			}
			{	/* Cgen/cop.scm 60 */
				obj_t BgL_arg4383z00_1199;

				obj_t BgL_arg4384z00_1200;

				obj_t BgL_arg4387z00_1203;

				BgL_arg4383z00_1199 = CNST_TABLE_REF(((long) 11));
				BgL_arg4384z00_1200 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 60 */
					obj_t BgL_v4194z00_1204;

					BgL_v4194z00_1204 = create_vector((int) (((long) 0)));
					BgL_arg4387z00_1203 = BgL_v4194z00_1204;
				}
				BGl_nopz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4383z00_1199,
					BgL_arg4384z00_1200, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2nopzd2envz52zzcgen_copz00,
					BGl_nopzd2nilzd2envz00zzcgen_copz00, BGl_nopzf3zd2envz21zzcgen_copz00,
					((long) 10022), BFALSE, BFALSE, BgL_arg4387z00_1203);
			}
			{	/* Cgen/cop.scm 62 */
				obj_t BgL_arg4388z00_1205;

				obj_t BgL_arg4389z00_1206;

				obj_t BgL_arg4392z00_1209;

				BgL_arg4388z00_1205 = CNST_TABLE_REF(((long) 12));
				BgL_arg4389z00_1206 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 62 */
					obj_t BgL_v4195z00_1210;

					BgL_v4195z00_1210 = create_vector((int) (((long) 0)));
					BgL_arg4392z00_1209 = BgL_v4195z00_1210;
				}
				BGl_stopz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4388z00_1205,
					BgL_arg4389z00_1206, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2stopzd2envz52zzcgen_copz00,
					BGl_stopzd2nilzd2envz00zzcgen_copz00,
					BGl_stopzf3zd2envz21zzcgen_copz00, ((long) 10456051), BFALSE, BFALSE,
					BgL_arg4392z00_1209);
			}
			{	/* Cgen/cop.scm 65 */
				obj_t BgL_arg4393z00_1211;

				obj_t BgL_arg4394z00_1212;

				obj_t BgL_arg4398z00_1215;

				BgL_arg4393z00_1211 = CNST_TABLE_REF(((long) 13));
				BgL_arg4394z00_1212 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 65 */
					obj_t BgL_v4196z00_1216;

					BgL_v4196z00_1216 = create_vector((int) (((long) 0)));
					BgL_arg4398z00_1215 = BgL_v4196z00_1216;
				}
				BGl_csetqz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4393z00_1211,
					BgL_arg4394z00_1212, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2csetqzd2envz52zzcgen_copz00,
					BGl_csetqzd2nilzd2envz00zzcgen_copz00,
					BGl_csetqzf3zd2envz21zzcgen_copz00, ((long) 249026639), BFALSE,
					BFALSE, BgL_arg4398z00_1215);
			}
			{	/* Cgen/cop.scm 69 */
				obj_t BgL_arg4399z00_1217;

				obj_t BgL_arg4400z00_1218;

				obj_t BgL_arg4403z00_1221;

				BgL_arg4399z00_1217 = CNST_TABLE_REF(((long) 14));
				BgL_arg4400z00_1218 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 69 */
					obj_t BgL_v4197z00_1222;

					BgL_v4197z00_1222 = create_vector((int) (((long) 0)));
					BgL_arg4403z00_1221 = BgL_v4197z00_1222;
				}
				BGl_cifz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4399z00_1217,
					BgL_arg4400z00_1218, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cifzd2envz52zzcgen_copz00,
					BGl_cifzd2nilzd2envz00zzcgen_copz00, BGl_cifzf3zd2envz21zzcgen_copz00,
					((long) 195168073), BFALSE, BFALSE, BgL_arg4403z00_1221);
			}
			{	/* Cgen/cop.scm 74 */
				obj_t BgL_arg4404z00_1223;

				obj_t BgL_arg4405z00_1224;

				obj_t BgL_arg4408z00_1227;

				BgL_arg4404z00_1223 = CNST_TABLE_REF(((long) 15));
				BgL_arg4405z00_1224 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 74 */
					obj_t BgL_v4198z00_1228;

					BgL_v4198z00_1228 = create_vector((int) (((long) 0)));
					BgL_arg4408z00_1227 = BgL_v4198z00_1228;
				}
				BGl_localzd2varzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4404z00_1223,
					BgL_arg4405z00_1224, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzd2varzd2envz80zzcgen_copz00,
					BGl_localzd2varzd2nilzd2envzd2zzcgen_copz00,
					BGl_localzd2varzf3zd2envzf3zzcgen_copz00, ((long) 407172431), BFALSE,
					BFALSE, BgL_arg4408z00_1227);
			}
			{	/* Cgen/cop.scm 77 */
				obj_t BgL_arg4409z00_1229;

				obj_t BgL_arg4410z00_1230;

				obj_t BgL_arg4413z00_1233;

				BgL_arg4409z00_1229 = CNST_TABLE_REF(((long) 16));
				BgL_arg4410z00_1230 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 77 */
					obj_t BgL_v4199z00_1234;

					BgL_v4199z00_1234 = create_vector((int) (((long) 0)));
					BgL_arg4413z00_1233 = BgL_v4199z00_1234;
				}
				BGl_cfuncallz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4409z00_1229,
					BgL_arg4410z00_1230, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cfuncallzd2envz52zzcgen_copz00,
					BGl_cfuncallzd2nilzd2envz00zzcgen_copz00,
					BGl_cfuncallzf3zd2envz21zzcgen_copz00, ((long) 290634285), BFALSE,
					BFALSE, BgL_arg4413z00_1233);
			}
			{	/* Cgen/cop.scm 82 */
				obj_t BgL_arg4414z00_1235;

				obj_t BgL_arg4415z00_1236;

				obj_t BgL_arg4418z00_1239;

				BgL_arg4414z00_1235 = CNST_TABLE_REF(((long) 17));
				BgL_arg4415z00_1236 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 82 */
					obj_t BgL_v4200z00_1240;

					BgL_v4200z00_1240 = create_vector((int) (((long) 0)));
					BgL_arg4418z00_1239 = BgL_v4200z00_1240;
				}
				BGl_capplyz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4414z00_1235,
					BgL_arg4415z00_1236, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2capplyzd2envz52zzcgen_copz00,
					BGl_capplyzd2nilzd2envz00zzcgen_copz00,
					BGl_capplyzf3zd2envz21zzcgen_copz00, ((long) 519169075), BFALSE,
					BFALSE, BgL_arg4418z00_1239);
			}
			{	/* Cgen/cop.scm 86 */
				obj_t BgL_arg4419z00_1241;

				obj_t BgL_arg4420z00_1242;

				obj_t BgL_arg4423z00_1245;

				BgL_arg4419z00_1241 = CNST_TABLE_REF(((long) 18));
				BgL_arg4420z00_1242 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 86 */
					obj_t BgL_v4201z00_1246;

					BgL_v4201z00_1246 = create_vector((int) (((long) 0)));
					BgL_arg4423z00_1245 = BgL_v4201z00_1246;
				}
				BGl_cappz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4419z00_1241,
					BgL_arg4420z00_1242, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cappzd2envz52zzcgen_copz00,
					BGl_cappzd2nilzd2envz00zzcgen_copz00,
					BGl_cappzf3zd2envz21zzcgen_copz00, ((long) 20098027), BFALSE, BFALSE,
					BgL_arg4423z00_1245);
			}
			{	/* Cgen/cop.scm 90 */
				obj_t BgL_arg4424z00_1247;

				obj_t BgL_arg4425z00_1248;

				obj_t BgL_arg4428z00_1251;

				BgL_arg4424z00_1247 = CNST_TABLE_REF(((long) 19));
				BgL_arg4425z00_1248 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 90 */
					obj_t BgL_v4202z00_1252;

					BgL_v4202z00_1252 = create_vector((int) (((long) 0)));
					BgL_arg4428z00_1251 = BgL_v4202z00_1252;
				}
				BGl_cfailz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4424z00_1247,
					BgL_arg4425z00_1248, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cfailzd2envz52zzcgen_copz00,
					BGl_cfailzd2nilzd2envz00zzcgen_copz00,
					BGl_cfailzf3zd2envz21zzcgen_copz00, ((long) 66580199), BFALSE, BFALSE,
					BgL_arg4428z00_1251);
			}
			{	/* Cgen/cop.scm 95 */
				obj_t BgL_arg4429z00_1253;

				obj_t BgL_arg4430z00_1254;

				obj_t BgL_arg4433z00_1257;

				BgL_arg4429z00_1253 = CNST_TABLE_REF(((long) 20));
				BgL_arg4430z00_1254 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 95 */
					obj_t BgL_v4203z00_1258;

					BgL_v4203z00_1258 = create_vector((int) (((long) 0)));
					BgL_arg4433z00_1257 = BgL_v4203z00_1258;
				}
				BGl_cswitchz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4429z00_1253,
					BgL_arg4430z00_1254, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cswitchzd2envz52zzcgen_copz00,
					BGl_cswitchzd2nilzd2envz00zzcgen_copz00,
					BGl_cswitchzf3zd2envz21zzcgen_copz00, ((long) 177768904), BFALSE,
					BFALSE, BgL_arg4433z00_1257);
			}
			{	/* Cgen/cop.scm 99 */
				obj_t BgL_arg4434z00_1259;

				obj_t BgL_arg4435z00_1260;

				obj_t BgL_arg4439z00_1263;

				BgL_arg4434z00_1259 = CNST_TABLE_REF(((long) 21));
				BgL_arg4435z00_1260 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 99 */
					obj_t BgL_v4204z00_1264;

					BgL_v4204z00_1264 = create_vector((int) (((long) 0)));
					BgL_arg4439z00_1263 = BgL_v4204z00_1264;
				}
				BGl_cmakezd2boxzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4434z00_1259,
					BgL_arg4435z00_1260, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cmakezd2boxzd2envz80zzcgen_copz00,
					BGl_cmakezd2boxzd2nilzd2envzd2zzcgen_copz00,
					BGl_cmakezd2boxzf3zd2envzf3zzcgen_copz00, ((long) 718044), BFALSE,
					BFALSE, BgL_arg4439z00_1263);
			}
			{	/* Cgen/cop.scm 102 */
				obj_t BgL_arg4440z00_1265;

				obj_t BgL_arg4441z00_1266;

				obj_t BgL_arg4444z00_1269;

				BgL_arg4440z00_1265 = CNST_TABLE_REF(((long) 22));
				BgL_arg4441z00_1266 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 102 */
					obj_t BgL_v4205z00_1270;

					BgL_v4205z00_1270 = create_vector((int) (((long) 0)));
					BgL_arg4444z00_1269 = BgL_v4205z00_1270;
				}
				BGl_cboxzd2refzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4440z00_1265,
					BgL_arg4441z00_1266, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cboxzd2refzd2envz80zzcgen_copz00,
					BGl_cboxzd2refzd2nilzd2envzd2zzcgen_copz00,
					BGl_cboxzd2refzf3zd2envzf3zzcgen_copz00, ((long) 451374687), BFALSE,
					BFALSE, BgL_arg4444z00_1269);
			}
			{	/* Cgen/cop.scm 105 */
				obj_t BgL_arg4445z00_1271;

				obj_t BgL_arg4446z00_1272;

				obj_t BgL_arg4449z00_1275;

				BgL_arg4445z00_1271 = CNST_TABLE_REF(((long) 23));
				BgL_arg4446z00_1272 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 105 */
					obj_t BgL_v4206z00_1276;

					BgL_v4206z00_1276 = create_vector((int) (((long) 0)));
					BgL_arg4449z00_1275 = BgL_v4206z00_1276;
				}
				BGl_cboxzd2setz12zc0zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4445z00_1271,
					BgL_arg4446z00_1272, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cboxzd2setz12zd2envz92zzcgen_copz00,
					BGl_cboxzd2setz12zd2nilzd2envzc0zzcgen_copz00,
					BGl_cboxzd2setz12zf3zd2envze1zzcgen_copz00, ((long) 408197571),
					BFALSE, BFALSE, BgL_arg4449z00_1275);
			}
			{	/* Cgen/cop.scm 109 */
				obj_t BgL_arg4450z00_1277;

				obj_t BgL_arg4451z00_1278;

				obj_t BgL_arg4454z00_1281;

				BgL_arg4450z00_1277 = CNST_TABLE_REF(((long) 24));
				BgL_arg4451z00_1278 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 109 */
					obj_t BgL_v4207z00_1282;

					BgL_v4207z00_1282 = create_vector((int) (((long) 0)));
					BgL_arg4454z00_1281 = BgL_v4207z00_1282;
				}
				BGl_csetzd2exzd2itz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4450z00_1277,
					BgL_arg4451z00_1278, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2csetzd2exzd2itzd2envz52zzcgen_copz00,
					BGl_csetzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
					BGl_csetzd2exzd2itzf3zd2envz21zzcgen_copz00, ((long) 196431733),
					BFALSE, BFALSE, BgL_arg4454z00_1281);
			}
			{	/* Cgen/cop.scm 114 */
				obj_t BgL_arg4455z00_1283;

				obj_t BgL_arg4456z00_1284;

				obj_t BgL_arg4459z00_1287;

				BgL_arg4455z00_1283 = CNST_TABLE_REF(((long) 25));
				BgL_arg4456z00_1284 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 114 */
					obj_t BgL_v4208z00_1288;

					BgL_v4208z00_1288 = create_vector((int) (((long) 0)));
					BgL_arg4459z00_1287 = BgL_v4208z00_1288;
				}
				BGl_cjumpzd2exzd2itz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4455z00_1283,
					BgL_arg4456z00_1284, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cjumpzd2exzd2itzd2envz52zzcgen_copz00,
					BGl_cjumpzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
					BGl_cjumpzd2exzd2itzf3zd2envz21zzcgen_copz00, ((long) 340601377),
					BFALSE, BFALSE, BgL_arg4459z00_1287);
			}
			{	/* Cgen/cop.scm 118 */
				obj_t BgL_arg4460z00_1289;

				obj_t BgL_arg4461z00_1290;

				obj_t BgL_arg4464z00_1293;

				BgL_arg4460z00_1289 = CNST_TABLE_REF(((long) 26));
				BgL_arg4461z00_1290 = BGl_sfunz00zzast_varz00;
				{	/* Cgen/cop.scm 118 */
					obj_t BgL_v4209z00_1294;

					BgL_v4209z00_1294 = create_vector((int) (((long) 0)));
					BgL_arg4464z00_1293 = BgL_v4209z00_1294;
				}
				BGl_sfunzf2Czf2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4460z00_1289,
					BgL_arg4461z00_1290, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sfunzf2Czd2envza0zzcgen_copz00,
					BGl_sfunzf2Czd2nilzd2envzf2zzcgen_copz00,
					BGl_sfunzf2Czf3zd2envzd3zzcgen_copz00, ((long) 449790567), BFALSE,
					BFALSE, BgL_arg4464z00_1293);
			}
			{	/* Cgen/cop.scm 122 */
				obj_t BgL_arg4465z00_1295;

				obj_t BgL_arg4466z00_1296;

				obj_t BgL_arg4469z00_1299;

				BgL_arg4465z00_1295 = CNST_TABLE_REF(((long) 27));
				BgL_arg4466z00_1296 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.scm 122 */
					obj_t BgL_v4210z00_1300;

					BgL_v4210z00_1300 = create_vector((int) (((long) 0)));
					BgL_arg4469z00_1299 = BgL_v4210z00_1300;
				}
				BGl_bdbzd2blockzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4465z00_1295,
					BgL_arg4466z00_1296, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2bdbzd2blockzd2envz80zzcgen_copz00,
					BGl_bdbzd2blockzd2nilzd2envzd2zzcgen_copz00,
					BGl_bdbzd2blockzf3zd2envzf3zzcgen_copz00, ((long) 100072956), BFALSE,
					BFALSE, BgL_arg4469z00_1299);
			}
			BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cfailzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cappzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2capplyzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cifzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2csetqzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2stopzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2nopzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2csequencezd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2ccastzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2varczd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2catomzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2creturnzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2blockzd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2cgotozd2nilz52zzcgen_copz00 = BUNSPEC;
			BGl_z52thezd2clabelzd2nilz52zzcgen_copz00 = BUNSPEC;
			return (BGl_z52thezd2copzd2nilz52zzcgen_copz00 = BUNSPEC, BUNSPEC);
		}
	}



/* bdb-block? */
	BGL_EXPORTED_DEF bool_t BGl_bdbzd2blockzf3z21zzcgen_copz00(obj_t
		BgL_obj4182z00_1)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4182z00_1,
				BGl_bdbzd2blockzd2zzcgen_copz00);
		}
	}



/* _bdb-block? */
	obj_t BGl__bdbzd2blockzf3z21zzcgen_copz00(obj_t BgL_envz00_4251,
		obj_t BgL_obj4182z00_4252)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4182z00_4252,
					BGl_bdbzd2blockzd2zzcgen_copz00));
		}
	}



/* make-bdb-block */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_makezd2bdbzd2blockz00zzcgen_copz00(obj_t BgL_loc4161z00_5,
		BgL_copz00_bglt BgL_body4162z00_6)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				BgL_bdbzd2blockzd2_bglt BgL_new4163z00_2488;

				{	/* Cgen/cop.scm 122 */
					BgL_bdbzd2blockzd2_bglt BgL_res4857z00_2493;

					{	/* Cgen/cop.scm 122 */
						BgL_bdbzd2blockzd2_bglt BgL_new4171z00_2489;

						BgL_new4171z00_2489 =
							((BgL_bdbzd2blockzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_bdbzd2blockzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4171z00_2489),
							BGl_classzd2numzd2zz__objectz00(BGl_bdbzd2blockzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_5299;

							BgL_auxz00_5299 = (BgL_objectz00_bglt) (BgL_new4171z00_2489);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5299, BFALSE);
						}
						BgL_res4857z00_2493 = BgL_new4171z00_2489;
					}
					BgL_new4163z00_2488 = BgL_res4857z00_2493;
				}
				{	/* Cgen/cop.scm 122 */
					BgL_bdbzd2blockzd2_bglt BgL_res4858z00_2499;

					{	/* Cgen/cop.scm 122 */
						BgL_bdbzd2blockzd2_bglt BgL_new4167z00_2494;

						BgL_new4167z00_2494 = BgL_new4163z00_2488;
						{	/* Cgen/cop.scm 122 */
							obj_t BgL_loc4165z00_2497;

							BgL_copz00_bglt BgL_body4166z00_2498;

							BgL_loc4165z00_2497 = BgL_loc4161z00_5;
							BgL_body4166z00_2498 = BgL_body4162z00_6;
							((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_2494))->
									BgL_locz00) = ((obj_t) BgL_loc4165z00_2497), BUNSPEC);
							((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_2494))->
									BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body4166z00_2498), BUNSPEC);
							BgL_res4858z00_2499 = BgL_new4167z00_2494;
					}} BgL_res4858z00_2499;
				}
				return BgL_new4163z00_2488;
			}
		}
	}



/* _make-bdb-block */
	obj_t BGl__makezd2bdbzd2blockz00zzcgen_copz00(obj_t BgL_envz00_4253,
		obj_t BgL_loc4161z00_4254, obj_t BgL_body4162z00_4255)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			return
				(obj_t) (BGl_makezd2bdbzd2blockz00zzcgen_copz00(BgL_loc4161z00_4254,
					(BgL_copz00_bglt) (BgL_body4162z00_4255)));
		}
	}



/* fill-bdb-block! */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_fillzd2bdbzd2blockz12z12zzcgen_copz00(BgL_bdbzd2blockzd2_bglt
		BgL_new4167z00_7, obj_t BgL_loc4165z00_8, BgL_copz00_bglt BgL_body4166z00_9)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				obj_t BgL_loc4165z00_4713;

				BgL_copz00_bglt BgL_body4166z00_4714;

				BgL_loc4165z00_4713 = BgL_loc4165z00_8;
				BgL_body4166z00_4714 = BgL_body4166z00_9;
				((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_7))->BgL_locz00) =
					((obj_t) BgL_loc4165z00_4713), BUNSPEC);
				((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_7))->BgL_bodyz00) =
					((BgL_copz00_bglt) BgL_body4166z00_4714), BUNSPEC);
				return BgL_new4167z00_7;
			}
		}
	}



/* _fill-bdb-block! */
	obj_t BGl__fillzd2bdbzd2blockz12z12zzcgen_copz00(obj_t BgL_envz00_4256,
		obj_t BgL_new4167z00_4257, obj_t BgL_loc4165z00_4258,
		obj_t BgL_body4166z00_4259)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				BgL_bdbzd2blockzd2_bglt BgL_auxz00_5309;

				{	/* Cgen/cop.scm 122 */
					BgL_bdbzd2blockzd2_bglt BgL_res5041z00_4720;

					{	/* Cgen/cop.scm 122 */
						BgL_bdbzd2blockzd2_bglt BgL_new4167z00_4715;

						BgL_copz00_bglt BgL_body4166z00_4717;

						BgL_new4167z00_4715 =
							(BgL_bdbzd2blockzd2_bglt) (BgL_new4167z00_4257);
						BgL_body4166z00_4717 = (BgL_copz00_bglt) (BgL_body4166z00_4259);
						{	/* Cgen/cop.scm 122 */
							obj_t BgL_loc4165z00_4718;

							BgL_copz00_bglt BgL_body4166z00_4719;

							BgL_loc4165z00_4718 = BgL_loc4165z00_4258;
							BgL_body4166z00_4719 = BgL_body4166z00_4717;
							((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_4715))->
									BgL_locz00) = ((obj_t) BgL_loc4165z00_4718), BUNSPEC);
							((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_4715))->
									BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body4166z00_4719), BUNSPEC);
							BgL_res5041z00_4720 = BgL_new4167z00_4715;
						}
					}
					BgL_auxz00_5309 = BgL_res5041z00_4720;
				}
				return (obj_t) (BgL_auxz00_5309);
			}
		}
	}



/* %allocate-bdb-block */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_z52allocatezd2bdbzd2blockz52zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				BgL_bdbzd2blockzd2_bglt BgL_new4171z00_4721;

				BgL_new4171z00_4721 =
					((BgL_bdbzd2blockzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_bdbzd2blockzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4171z00_4721),
					BGl_classzd2numzd2zz__objectz00(BGl_bdbzd2blockzd2zzcgen_copz00));
				{	/* Cgen/cop.scm 122 */
					BgL_objectz00_bglt BgL_auxz00_5319;

					BgL_auxz00_5319 = (BgL_objectz00_bglt) (BgL_new4171z00_4721);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5319, BFALSE);
				}
				return BgL_new4171z00_4721;
			}
		}
	}



/* _%allocate-bdb-block */
	obj_t BGl__z52allocatezd2bdbzd2blockz52zzcgen_copz00(obj_t BgL_envz00_4249)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				BgL_bdbzd2blockzd2_bglt BgL_auxz00_5322;

				{	/* Cgen/cop.scm 122 */
					BgL_bdbzd2blockzd2_bglt BgL_res5042z00_4725;

					{	/* Cgen/cop.scm 122 */
						BgL_bdbzd2blockzd2_bglt BgL_new4171z00_4723;

						BgL_new4171z00_4723 =
							((BgL_bdbzd2blockzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_bdbzd2blockzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4171z00_4723),
							BGl_classzd2numzd2zz__objectz00(BGl_bdbzd2blockzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_5327;

							BgL_auxz00_5327 = (BgL_objectz00_bglt) (BgL_new4171z00_4723);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5327, BFALSE);
						}
						BgL_res5042z00_4725 = BgL_new4171z00_4723;
					}
					BgL_auxz00_5322 = BgL_res5042z00_4725;
				}
				return (obj_t) (BgL_auxz00_5322);
			}
		}
	}



/* bdb-block-nil */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_bdbzd2blockzd2nilz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			if ((BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 122 */
					{	/* Cgen/cop.scm 122 */
						BgL_bdbzd2blockzd2_bglt BgL_res4859z00_2510;

						{	/* Cgen/cop.scm 122 */
							BgL_bdbzd2blockzd2_bglt BgL_new4171z00_2506;

							BgL_new4171z00_2506 =
								((BgL_bdbzd2blockzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_bdbzd2blockzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4171z00_2506),
								BGl_classzd2numzd2zz__objectz00
								(BGl_bdbzd2blockzd2zzcgen_copz00));
							{	/* Cgen/cop.scm 122 */
								BgL_objectz00_bglt BgL_auxz00_5337;

								BgL_auxz00_5337 = (BgL_objectz00_bglt) (BgL_new4171z00_2506);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5337, BFALSE);
							}
							BgL_res4859z00_2510 = BgL_new4171z00_2506;
						}
						BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00 =
							(obj_t) (BgL_res4859z00_2510);
					}
					{	/* Cgen/cop.scm 122 */
						BgL_copz00_bglt BgL_arg4472z00_1307;

						BgL_arg4472z00_1307 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 122 */
							BgL_bdbzd2blockzd2_bglt BgL_res4860z00_2516;

							{	/* Cgen/cop.scm 122 */
								BgL_bdbzd2blockzd2_bglt BgL_new4167z00_2511;

								BgL_new4167z00_2511 =
									(BgL_bdbzd2blockzd2_bglt)
									(BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00);
								{	/* Cgen/cop.scm 122 */
									obj_t BgL_loc4165z00_2514;

									BgL_copz00_bglt BgL_body4166z00_2515;

									BgL_loc4165z00_2514 = BUNSPEC;
									BgL_body4166z00_2515 = BgL_arg4472z00_1307;
									((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_2511))->
											BgL_locz00) = ((obj_t) BgL_loc4165z00_2514), BUNSPEC);
									((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_new4167z00_2511))->
											BgL_bodyz00) =
										((BgL_copz00_bglt) BgL_body4166z00_2515), BUNSPEC);
									BgL_res4860z00_2516 = BgL_new4167z00_2511;
							}}
							(obj_t) (BgL_res4860z00_2516);
				}}}
			else
				{	/* Cgen/cop.scm 122 */
					BFALSE;
				}
			return
				(BgL_bdbzd2blockzd2_bglt)
				(BGl_z52thezd2bdbzd2blockzd2nilz80zzcgen_copz00);
		}
	}



/* _bdb-block-nil */
	obj_t BGl__bdbzd2blockzd2nilz00zzcgen_copz00(obj_t BgL_envz00_4250)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			return (obj_t) (BGl_bdbzd2blockzd2nilz00zzcgen_copz00());
		}
	}



/* sfun/C? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Czf3z01zzcgen_copz00(obj_t
		BgL_obj4102z00_11)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4102z00_11,
				BGl_sfunzf2Czf2zzcgen_copz00);
		}
	}



/* _sfun/C? */
	obj_t BGl__sfunzf2Czf3z01zzcgen_copz00(obj_t BgL_envz00_4247,
		obj_t BgL_obj4102z00_4248)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4102z00_4248,
					BGl_sfunzf2Czf2zzcgen_copz00));
		}
	}



/* widening-sfun/C */
	BGL_EXPORTED_DEF BgL_sfunzf2czf2_bglt
		BGl_wideningzd2sfunzf2Cz20zzcgen_copz00(BgL_clabelz00_bglt
		BgL_label4063z00_15, bool_t BgL_integrated4064z00_16)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_sfunzf2czf2_bglt BgL_new4065z00_2517;

				BgL_new4065z00_2517 =
					((BgL_sfunzf2czf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sfunzf2czf2_bgl))));
				{	/* Cgen/cop.scm 118 */
					BgL_sfunzf2czf2_bglt BgL_res4861z00_2523;

					{	/* Cgen/cop.scm 118 */
						BgL_sfunzf2czf2_bglt BgL_new4090z00_2518;

						BgL_new4090z00_2518 = BgL_new4065z00_2517;
						{	/* Cgen/cop.scm 118 */
							BgL_clabelz00_bglt BgL_label4088z00_2521;

							bool_t BgL_integrated4089z00_2522;

							BgL_label4088z00_2521 = BgL_label4063z00_15;
							BgL_integrated4089z00_2522 = BgL_integrated4064z00_16;
							((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2518))->
									BgL_labelz00) =
								((BgL_clabelz00_bglt) BgL_label4088z00_2521), BUNSPEC);
							((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2518))->
									BgL_integratedz00) =
								((bool_t) BgL_integrated4089z00_2522), BUNSPEC);
							BgL_res4861z00_2523 = BgL_new4090z00_2518;
					}} BgL_res4861z00_2523;
				}
				return BgL_new4065z00_2517;
			}
		}
	}



/* _widening-sfun/C */
	obj_t BGl__wideningzd2sfunzf2Cz20zzcgen_copz00(obj_t BgL_envz00_4260,
		obj_t BgL_label4063z00_4261, obj_t BgL_integrated4064z00_4262)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			return
				(obj_t) (BGl_wideningzd2sfunzf2Cz20zzcgen_copz00(
					(BgL_clabelz00_bglt) (BgL_label4063z00_4261),
					CBOOL(BgL_integrated4064z00_4262)));
		}
	}



/* make-sfun/C */
	BGL_EXPORTED_DEF BgL_sfunzf2czf2_bglt BGl_makezd2sfunzf2Cz20zzcgen_copz00(long
		BgL_arity4069z00_17, obj_t BgL_sidezd2effectzf34070z21_18,
		obj_t BgL_predicatezd2of4071zd2_19, obj_t BgL_stackzd2allocator4072zd2_20,
		bool_t BgL_topzf34073zf3_21, obj_t BgL_thezd2closure4074zd2_22,
		obj_t BgL_effect4075z00_23, obj_t BgL_property4076z00_24,
		obj_t BgL_args4077z00_25, obj_t BgL_argszd2name4078zd2_26,
		obj_t BgL_body4079z00_27, obj_t BgL_class4080z00_28,
		obj_t BgL_dssslzd2keywords4081zd2_29, obj_t BgL_loc4082z00_30,
		obj_t BgL_optionals4083z00_31, obj_t BgL_keys4084z00_32,
		obj_t BgL_thezd2closurezd2global4085z00_33,
		BgL_clabelz00_bglt BgL_label4067z00_34, bool_t BgL_integrated4068z00_35)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_sfunz00_bglt BgL_aux4086z00_2524;

				BgL_aux4086z00_2524 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity4069z00_17,
					BgL_sidezd2effectzf34070z21_18, BgL_predicatezd2of4071zd2_19,
					BgL_stackzd2allocator4072zd2_20, BgL_topzf34073zf3_21,
					BgL_thezd2closure4074zd2_22, BgL_effect4075z00_23,
					BgL_property4076z00_24, BgL_args4077z00_25, BgL_argszd2name4078zd2_26,
					BgL_body4079z00_27, BgL_class4080z00_28,
					BgL_dssslzd2keywords4081zd2_29, BgL_loc4082z00_30,
					BgL_optionals4083z00_31, BgL_keys4084z00_32,
					BgL_thezd2closurezd2global4085z00_33);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4086z00_2524),
					BGl_classzd2numzd2zz__objectz00(BGl_sfunzf2Czf2zzcgen_copz00));
				{	/* Cgen/cop.scm 118 */
					BgL_sfunzf2czf2_bglt BgL_arg4474z00_2526;

					{	/* Cgen/cop.scm 118 */
						BgL_sfunzf2czf2_bglt BgL_res4863z00_2539;

						{	/* Cgen/cop.scm 118 */
							BgL_sfunzf2czf2_bglt BgL_new4065z00_2532;

							BgL_new4065z00_2532 =
								((BgL_sfunzf2czf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunzf2czf2_bgl))));
							{	/* Cgen/cop.scm 118 */
								BgL_sfunzf2czf2_bglt BgL_res4862z00_2538;

								{	/* Cgen/cop.scm 118 */
									BgL_sfunzf2czf2_bglt BgL_new4090z00_2533;

									BgL_new4090z00_2533 = BgL_new4065z00_2532;
									{	/* Cgen/cop.scm 118 */
										BgL_clabelz00_bglt BgL_label4088z00_2536;

										bool_t BgL_integrated4089z00_2537;

										BgL_label4088z00_2536 = BgL_label4067z00_34;
										BgL_integrated4089z00_2537 = BgL_integrated4068z00_35;
										((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2533))->
												BgL_labelz00) =
											((BgL_clabelz00_bglt) BgL_label4088z00_2536), BUNSPEC);
										((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2533))->
												BgL_integratedz00) =
											((bool_t) BgL_integrated4089z00_2537), BUNSPEC);
										BgL_res4862z00_2538 = BgL_new4090z00_2533;
								}} BgL_res4862z00_2538;
							}
							BgL_res4863z00_2539 = BgL_new4065z00_2532;
						}
						BgL_arg4474z00_2526 = BgL_res4863z00_2539;
					}
					{	/* Cgen/cop.scm 118 */
						obj_t BgL_auxz00_5368;

						BgL_objectz00_bglt BgL_auxz00_5366;

						BgL_auxz00_5368 = (obj_t) (BgL_arg4474z00_2526);
						BgL_auxz00_5366 = (BgL_objectz00_bglt) (BgL_aux4086z00_2524);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5366, BgL_auxz00_5368);
				}}
				return
					((BgL_sfunzf2czf2_bglt) (BgL_sfunzf2czf2_bglt) (BgL_aux4086z00_2524));
			}
		}
	}



/* _make-sfun/C */
	obj_t BGl__makezd2sfunzf2Cz20zzcgen_copz00(obj_t BgL_envz00_4263,
		obj_t BgL_arity4069z00_4264, obj_t BgL_sidezd2effectzf34070z21_4265,
		obj_t BgL_predicatezd2of4071zd2_4266,
		obj_t BgL_stackzd2allocator4072zd2_4267, obj_t BgL_topzf34073zf3_4268,
		obj_t BgL_thezd2closure4074zd2_4269, obj_t BgL_effect4075z00_4270,
		obj_t BgL_property4076z00_4271, obj_t BgL_args4077z00_4272,
		obj_t BgL_argszd2name4078zd2_4273, obj_t BgL_body4079z00_4274,
		obj_t BgL_class4080z00_4275, obj_t BgL_dssslzd2keywords4081zd2_4276,
		obj_t BgL_loc4082z00_4277, obj_t BgL_optionals4083z00_4278,
		obj_t BgL_keys4084z00_4279, obj_t BgL_thezd2closurezd2global4085z00_4280,
		obj_t BgL_label4067z00_4281, obj_t BgL_integrated4068z00_4282)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			return
				(obj_t) (BGl_makezd2sfunzf2Cz20zzcgen_copz00(
					(long) CINT(BgL_arity4069z00_4264), BgL_sidezd2effectzf34070z21_4265,
					BgL_predicatezd2of4071zd2_4266, BgL_stackzd2allocator4072zd2_4267,
					CBOOL(BgL_topzf34073zf3_4268), BgL_thezd2closure4074zd2_4269,
					BgL_effect4075z00_4270, BgL_property4076z00_4271,
					BgL_args4077z00_4272, BgL_argszd2name4078zd2_4273,
					BgL_body4079z00_4274, BgL_class4080z00_4275,
					BgL_dssslzd2keywords4081zd2_4276, BgL_loc4082z00_4277,
					BgL_optionals4083z00_4278, BgL_keys4084z00_4279,
					BgL_thezd2closurezd2global4085z00_4280,
					(BgL_clabelz00_bglt) (BgL_label4067z00_4281),
					CBOOL(BgL_integrated4068z00_4282)));
		}
	}



/* fill-sfun/C! */
	BGL_EXPORTED_DEF BgL_sfunzf2czf2_bglt
		BGl_fillzd2sfunzf2Cz12z32zzcgen_copz00(BgL_sfunzf2czf2_bglt
		BgL_new4090z00_36, BgL_clabelz00_bglt BgL_label4088z00_37,
		bool_t BgL_integrated4089z00_38)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_clabelz00_bglt BgL_label4088z00_4727;

				bool_t BgL_integrated4089z00_4728;

				BgL_label4088z00_4727 = BgL_label4088z00_37;
				BgL_integrated4089z00_4728 = BgL_integrated4089z00_38;
				((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_36))->BgL_labelz00) =
					((BgL_clabelz00_bglt) BgL_label4088z00_4727), BUNSPEC);
				((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_36))->BgL_integratedz00) =
					((bool_t) BgL_integrated4089z00_4728), BUNSPEC);
				return BgL_new4090z00_36;
			}
		}
	}



/* _fill-sfun/C! */
	obj_t BGl__fillzd2sfunzf2Cz12z32zzcgen_copz00(obj_t BgL_envz00_4283,
		obj_t BgL_new4090z00_4284, obj_t BgL_label4088z00_4285,
		obj_t BgL_integrated4089z00_4286)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_sfunzf2czf2_bglt BgL_auxz00_5381;

				{	/* Cgen/cop.scm 118 */
					BgL_sfunzf2czf2_bglt BgL_res5043z00_4734;

					{	/* Cgen/cop.scm 118 */
						BgL_sfunzf2czf2_bglt BgL_new4090z00_4729;

						BgL_clabelz00_bglt BgL_label4088z00_4730;

						bool_t BgL_integrated4089z00_4731;

						BgL_new4090z00_4729 = (BgL_sfunzf2czf2_bglt) (BgL_new4090z00_4284);
						BgL_label4088z00_4730 =
							(BgL_clabelz00_bglt) (BgL_label4088z00_4285);
						BgL_integrated4089z00_4731 = CBOOL(BgL_integrated4089z00_4286);
						{	/* Cgen/cop.scm 118 */
							BgL_clabelz00_bglt BgL_label4088z00_4732;

							bool_t BgL_integrated4089z00_4733;

							BgL_label4088z00_4732 = BgL_label4088z00_4730;
							BgL_integrated4089z00_4733 = BgL_integrated4089z00_4731;
							((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_4729))->
									BgL_labelz00) =
								((BgL_clabelz00_bglt) BgL_label4088z00_4732), BUNSPEC);
							((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_4729))->
									BgL_integratedz00) =
								((bool_t) BgL_integrated4089z00_4733), BUNSPEC);
							BgL_res5043z00_4734 = BgL_new4090z00_4729;
						}
					}
					BgL_auxz00_5381 = BgL_res5043z00_4734;
				}
				return (obj_t) (BgL_auxz00_5381);
			}
		}
	}



/* %allocate-sfun/C */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_z52allocatezd2sfunzf2Cz72zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_sfunz00_bglt BgL_new4094z00_4735;

				BgL_new4094z00_4735 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4094z00_4735),
					BGl_classzd2numzd2zz__objectz00(BGl_sfunzf2Czf2zzcgen_copz00));
				{	/* Cgen/cop.scm 118 */
					BgL_objectz00_bglt BgL_auxz00_5392;

					BgL_auxz00_5392 = (BgL_objectz00_bglt) (BgL_new4094z00_4735);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5392, BFALSE);
				}
				return BgL_new4094z00_4735;
			}
		}
	}



/* _%allocate-sfun/C */
	obj_t BGl__z52allocatezd2sfunzf2Cz72zzcgen_copz00(obj_t BgL_envz00_4245)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_sfunz00_bglt BgL_auxz00_5395;

				{	/* Cgen/cop.scm 118 */
					BgL_sfunz00_bglt BgL_res5044z00_4739;

					{	/* Cgen/cop.scm 118 */
						BgL_sfunz00_bglt BgL_new4094z00_4737;

						BgL_new4094z00_4737 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4094z00_4737),
							BGl_classzd2numzd2zz__objectz00(BGl_sfunzf2Czf2zzcgen_copz00));
						{	/* Cgen/cop.scm 118 */
							BgL_objectz00_bglt BgL_auxz00_5400;

							BgL_auxz00_5400 = (BgL_objectz00_bglt) (BgL_new4094z00_4737);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5400, BFALSE);
						}
						BgL_res5044z00_4739 = BgL_new4094z00_4737;
					}
					BgL_auxz00_5395 = BgL_res5044z00_4739;
				}
				return (obj_t) (BgL_auxz00_5395);
			}
		}
	}



/* sfun/C-nil */
	BGL_EXPORTED_DEF BgL_sfunzf2czf2_bglt BGl_sfunzf2Czd2nilz20zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			if ((BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 118 */
					{	/* Cgen/cop.scm 118 */
						BgL_sfunz00_bglt BgL_res4864z00_2550;

						{	/* Cgen/cop.scm 118 */
							BgL_sfunz00_bglt BgL_new1954z00_2546;

							BgL_new1954z00_2546 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_2546),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Cgen/cop.scm 118 */
								BgL_objectz00_bglt BgL_auxz00_5410;

								BgL_auxz00_5410 = (BgL_objectz00_bglt) (BgL_new1954z00_2546);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5410, BFALSE);
							}
							BgL_res4864z00_2550 = BgL_new1954z00_2546;
						}
						BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00 =
							(obj_t) (BgL_res4864z00_2550);
					}
					{	/* Cgen/cop.scm 118 */
						BgL_sfunz00_bglt BgL_res4865z00_2586;

						{	/* Cgen/cop.scm 118 */
							BgL_sfunz00_bglt BgL_new1935z00_2551;

							BgL_new1935z00_2551 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00);
							{	/* Cgen/cop.scm 118 */
								long BgL_arity1918z00_2569;

								obj_t BgL_sidezd2effectzf31919z21_2570;

								obj_t BgL_predicatezd2of1920zd2_2571;

								obj_t BgL_stackzd2allocator1921zd2_2572;

								bool_t BgL_topzf31922zf3_2573;

								obj_t BgL_thezd2closure1923zd2_2574;

								obj_t BgL_effect1924z00_2575;

								obj_t BgL_property1925z00_2576;

								obj_t BgL_args1926z00_2577;

								obj_t BgL_argszd2name1927zd2_2578;

								obj_t BgL_body1928z00_2579;

								obj_t BgL_class1929z00_2580;

								obj_t BgL_dssslzd2keywords1930zd2_2581;

								obj_t BgL_loc1931z00_2582;

								obj_t BgL_optionals1932z00_2583;

								obj_t BgL_keys1933z00_2584;

								obj_t BgL_thezd2closurezd2global1934z00_2585;

								BgL_arity1918z00_2569 = ((long) 0);
								BgL_sidezd2effectzf31919z21_2570 = BUNSPEC;
								BgL_predicatezd2of1920zd2_2571 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_2572 = BUNSPEC;
								BgL_topzf31922zf3_2573 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_2574 = BUNSPEC;
								BgL_effect1924z00_2575 = BUNSPEC;
								BgL_property1925z00_2576 = BUNSPEC;
								BgL_args1926z00_2577 = BUNSPEC;
								BgL_argszd2name1927zd2_2578 = BUNSPEC;
								BgL_body1928z00_2579 = BUNSPEC;
								BgL_class1929z00_2580 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_2581 = BUNSPEC;
								BgL_loc1931z00_2582 = BUNSPEC;
								BgL_optionals1932z00_2583 = BUNSPEC;
								BgL_keys1933z00_2584 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_2585 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_arityz00) = ((long) BgL_arity1918z00_2569), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_2570), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_2571), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_2572), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_2573), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_2574), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_2575), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_2576), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_2577), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_2578), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_2579), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_2580), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_2581), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_2582), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_2583), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_2584), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2551))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_2585), BUNSPEC);
								BgL_res4865z00_2586 = BgL_new1935z00_2551;
						}} BgL_res4865z00_2586;
					}
					{	/* Cgen/cop.scm 118 */
						long BgL_arg4477z00_1318;

						BgL_arg4477z00_1318 =
							BGl_classzd2numzd2zz__objectz00(BGl_sfunzf2Czf2zzcgen_copz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00),
							BgL_arg4477z00_1318);
					}
					{	/* Cgen/cop.scm 118 */
						BgL_sfunzf2czf2_bglt BgL_arg4478z00_1319;

						{	/* Cgen/cop.scm 118 */
							BgL_clabelz00_bglt BgL_arg4479z00_1320;

							BgL_arg4479z00_1320 = BGl_clabelzd2nilzd2zzcgen_copz00();
							{	/* Cgen/cop.scm 118 */
								BgL_sfunzf2czf2_bglt BgL_res4867z00_2598;

								{	/* Cgen/cop.scm 118 */
									BgL_sfunzf2czf2_bglt BgL_new4065z00_2591;

									BgL_new4065z00_2591 =
										((BgL_sfunzf2czf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_sfunzf2czf2_bgl))));
									{	/* Cgen/cop.scm 118 */
										BgL_sfunzf2czf2_bglt BgL_res4866z00_2597;

										{	/* Cgen/cop.scm 118 */
											BgL_sfunzf2czf2_bglt BgL_new4090z00_2592;

											BgL_new4090z00_2592 = BgL_new4065z00_2591;
											{	/* Cgen/cop.scm 118 */
												BgL_clabelz00_bglt BgL_label4088z00_2595;

												bool_t BgL_integrated4089z00_2596;

												BgL_label4088z00_2595 = BgL_arg4479z00_1320;
												BgL_integrated4089z00_2596 = ((bool_t) 0);
												((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2592))->
														BgL_labelz00) =
													((BgL_clabelz00_bglt) BgL_label4088z00_2595),
													BUNSPEC);
												((((BgL_sfunzf2czf2_bglt) CREF(BgL_new4090z00_2592))->
														BgL_integratedz00) =
													((bool_t) BgL_integrated4089z00_2596), BUNSPEC);
												BgL_res4866z00_2597 = BgL_new4090z00_2592;
										}} BgL_res4866z00_2597;
									}
									BgL_res4867z00_2598 = BgL_new4065z00_2591;
								}
								BgL_arg4478z00_1319 = BgL_res4867z00_2598;
						}}
						{	/* Cgen/cop.scm 118 */
							obj_t BgL_auxz00_5441;

							BgL_objectz00_bglt BgL_auxz00_5439;

							BgL_auxz00_5441 = (obj_t) (BgL_arg4478z00_1319);
							BgL_auxz00_5439 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5439, BgL_auxz00_5441);
				}}}
			else
				{	/* Cgen/cop.scm 118 */
					BFALSE;
				}
			return
				(BgL_sfunzf2czf2_bglt) (BGl_z52thezd2sfunzf2Czd2nilza0zzcgen_copz00);
		}
	}



/* _sfun/C-nil */
	obj_t BGl__sfunzf2Czd2nilz20zzcgen_copz00(obj_t BgL_envz00_4246)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			return (obj_t) (BGl_sfunzf2Czd2nilz20zzcgen_copz00());
		}
	}



/* cjump-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t
		BgL_obj4062z00_43)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4062z00_43,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00);
		}
	}



/* _cjump-ex-it? */
	obj_t BGl__cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t BgL_envz00_4243,
		obj_t BgL_obj4062z00_4244)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4062z00_4244,
					BGl_cjumpzd2exzd2itz00zzcgen_copz00));
		}
	}



/* make-cjump-ex-it */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t BgL_loc4034z00_47,
		BgL_copz00_bglt BgL_exit4035z00_48, BgL_copz00_bglt BgL_value4036z00_49)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{	/* Cgen/cop.scm 114 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_new4037z00_2599;

				{	/* Cgen/cop.scm 114 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_res4868z00_2604;

					{	/* Cgen/cop.scm 114 */
						BgL_cjumpzd2exzd2itz00_bglt BgL_new4047z00_2600;

						BgL_new4047z00_2600 =
							((BgL_cjumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cjumpzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4047z00_2600),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cjumpzd2exzd2itz00zzcgen_copz00));
						{	/* Cgen/cop.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_5454;

							BgL_auxz00_5454 = (BgL_objectz00_bglt) (BgL_new4047z00_2600);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5454, BFALSE);
						}
						BgL_res4868z00_2604 = BgL_new4047z00_2600;
					}
					BgL_new4037z00_2599 = BgL_res4868z00_2604;
				}
				{	/* Cgen/cop.scm 114 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_res4869z00_2612;

					{	/* Cgen/cop.scm 114 */
						BgL_cjumpzd2exzd2itz00_bglt BgL_new4042z00_2605;

						BgL_new4042z00_2605 = BgL_new4037z00_2599;
						{	/* Cgen/cop.scm 114 */
							obj_t BgL_loc4039z00_2609;

							BgL_copz00_bglt BgL_exit4040z00_2610;

							BgL_copz00_bglt BgL_value4041z00_2611;

							BgL_loc4039z00_2609 = BgL_loc4034z00_47;
							BgL_exit4040z00_2610 = BgL_exit4035z00_48;
							BgL_value4041z00_2611 = BgL_value4036z00_49;
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2605))->
									BgL_locz00) = ((obj_t) BgL_loc4039z00_2609), BUNSPEC);
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2605))->
									BgL_exitz00) =
								((BgL_copz00_bglt) BgL_exit4040z00_2610), BUNSPEC);
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2605))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value4041z00_2611), BUNSPEC);
							BgL_res4869z00_2612 = BgL_new4042z00_2605;
					}} BgL_res4869z00_2612;
				}
				return BgL_new4037z00_2599;
			}
		}
	}



/* _make-cjump-ex-it */
	obj_t BGl__makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t BgL_envz00_4287,
		obj_t BgL_loc4034z00_4288, obj_t BgL_exit4035z00_4289,
		obj_t BgL_value4036z00_4290)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			return
				(obj_t) (BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(BgL_loc4034z00_4288,
					(BgL_copz00_bglt) (BgL_exit4035z00_4289),
					(BgL_copz00_bglt) (BgL_value4036z00_4290)));
		}
	}



/* fill-cjump-ex-it! */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_fillzd2cjumpzd2exzd2itz12zc0zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt
		BgL_new4042z00_50, obj_t BgL_loc4039z00_51,
		BgL_copz00_bglt BgL_exit4040z00_52, BgL_copz00_bglt BgL_value4041z00_53)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{	/* Cgen/cop.scm 114 */
				obj_t BgL_loc4039z00_4741;

				BgL_copz00_bglt BgL_exit4040z00_4742;

				BgL_copz00_bglt BgL_value4041z00_4743;

				BgL_loc4039z00_4741 = BgL_loc4039z00_51;
				BgL_exit4040z00_4742 = BgL_exit4040z00_52;
				BgL_value4041z00_4743 = BgL_value4041z00_53;
				((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_50))->BgL_locz00) =
					((obj_t) BgL_loc4039z00_4741), BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_50))->
						BgL_exitz00) = ((BgL_copz00_bglt) BgL_exit4040z00_4742), BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_50))->
						BgL_valuez00) = ((BgL_copz00_bglt) BgL_value4041z00_4743), BUNSPEC);
				return BgL_new4042z00_50;
			}
		}
	}



/* _fill-cjump-ex-it! */
	obj_t BGl__fillzd2cjumpzd2exzd2itz12zc0zzcgen_copz00(obj_t BgL_envz00_4291,
		obj_t BgL_new4042z00_4292, obj_t BgL_loc4039z00_4293,
		obj_t BgL_exit4040z00_4294, obj_t BgL_value4041z00_4295)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{	/* Cgen/cop.scm 114 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_auxz00_5467;

				{	/* Cgen/cop.scm 114 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_res5045z00_4751;

					{	/* Cgen/cop.scm 114 */
						BgL_cjumpzd2exzd2itz00_bglt BgL_new4042z00_4744;

						BgL_copz00_bglt BgL_exit4040z00_4746;

						BgL_copz00_bglt BgL_value4041z00_4747;

						BgL_new4042z00_4744 =
							(BgL_cjumpzd2exzd2itz00_bglt) (BgL_new4042z00_4292);
						BgL_exit4040z00_4746 = (BgL_copz00_bglt) (BgL_exit4040z00_4294);
						BgL_value4041z00_4747 = (BgL_copz00_bglt) (BgL_value4041z00_4295);
						{	/* Cgen/cop.scm 114 */
							obj_t BgL_loc4039z00_4748;

							BgL_copz00_bglt BgL_exit4040z00_4749;

							BgL_copz00_bglt BgL_value4041z00_4750;

							BgL_loc4039z00_4748 = BgL_loc4039z00_4293;
							BgL_exit4040z00_4749 = BgL_exit4040z00_4746;
							BgL_value4041z00_4750 = BgL_value4041z00_4747;
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_4744))->
									BgL_locz00) = ((obj_t) BgL_loc4039z00_4748), BUNSPEC);
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_4744))->
									BgL_exitz00) =
								((BgL_copz00_bglt) BgL_exit4040z00_4749), BUNSPEC);
							((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_4744))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value4041z00_4750), BUNSPEC);
							BgL_res5045z00_4751 = BgL_new4042z00_4744;
						}
					}
					BgL_auxz00_5467 = BgL_res5045z00_4751;
				}
				return (obj_t) (BgL_auxz00_5467);
			}
		}
	}



/* %allocate-cjump-ex-it */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2cjumpzd2exzd2itz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{	/* Cgen/cop.scm 114 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_new4047z00_4752;

				BgL_new4047z00_4752 =
					((BgL_cjumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cjumpzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4047z00_4752),
					BGl_classzd2numzd2zz__objectz00(BGl_cjumpzd2exzd2itz00zzcgen_copz00));
				{	/* Cgen/cop.scm 114 */
					BgL_objectz00_bglt BgL_auxz00_5479;

					BgL_auxz00_5479 = (BgL_objectz00_bglt) (BgL_new4047z00_4752);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5479, BFALSE);
				}
				return BgL_new4047z00_4752;
			}
		}
	}



/* _%allocate-cjump-ex-it */
	obj_t BGl__z52allocatezd2cjumpzd2exzd2itz80zzcgen_copz00(obj_t
		BgL_envz00_4241)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{	/* Cgen/cop.scm 114 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_auxz00_5482;

				{	/* Cgen/cop.scm 114 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_res5046z00_4756;

					{	/* Cgen/cop.scm 114 */
						BgL_cjumpzd2exzd2itz00_bglt BgL_new4047z00_4754;

						BgL_new4047z00_4754 =
							((BgL_cjumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cjumpzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4047z00_4754),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cjumpzd2exzd2itz00zzcgen_copz00));
						{	/* Cgen/cop.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_5487;

							BgL_auxz00_5487 = (BgL_objectz00_bglt) (BgL_new4047z00_4754);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5487, BFALSE);
						}
						BgL_res5046z00_4756 = BgL_new4047z00_4754;
					}
					BgL_auxz00_5482 = BgL_res5046z00_4756;
				}
				return (obj_t) (BgL_auxz00_5482);
			}
		}
	}



/* cjump-ex-it-nil */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			if ((BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 114 */
					{	/* Cgen/cop.scm 114 */
						BgL_cjumpzd2exzd2itz00_bglt BgL_res4870z00_2624;

						{	/* Cgen/cop.scm 114 */
							BgL_cjumpzd2exzd2itz00_bglt BgL_new4047z00_2620;

							BgL_new4047z00_2620 =
								((BgL_cjumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cjumpzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4047z00_2620),
								BGl_classzd2numzd2zz__objectz00
								(BGl_cjumpzd2exzd2itz00zzcgen_copz00));
							{	/* Cgen/cop.scm 114 */
								BgL_objectz00_bglt BgL_auxz00_5497;

								BgL_auxz00_5497 = (BgL_objectz00_bglt) (BgL_new4047z00_2620);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5497, BFALSE);
							}
							BgL_res4870z00_2624 = BgL_new4047z00_2620;
						}
						BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4870z00_2624);
					}
					{	/* Cgen/cop.scm 114 */
						BgL_copz00_bglt BgL_arg4482z00_1328;

						BgL_copz00_bglt BgL_arg4483z00_1329;

						BgL_arg4482z00_1328 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4483z00_1329 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 114 */
							BgL_cjumpzd2exzd2itz00_bglt BgL_res4871z00_2632;

							{	/* Cgen/cop.scm 114 */
								BgL_cjumpzd2exzd2itz00_bglt BgL_new4042z00_2625;

								BgL_new4042z00_2625 =
									(BgL_cjumpzd2exzd2itz00_bglt)
									(BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 114 */
									obj_t BgL_loc4039z00_2629;

									BgL_copz00_bglt BgL_exit4040z00_2630;

									BgL_copz00_bglt BgL_value4041z00_2631;

									BgL_loc4039z00_2629 = BUNSPEC;
									BgL_exit4040z00_2630 = BgL_arg4482z00_1328;
									BgL_value4041z00_2631 = BgL_arg4483z00_1329;
									((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2625))->
											BgL_locz00) = ((obj_t) BgL_loc4039z00_2629), BUNSPEC);
									((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2625))->
											BgL_exitz00) =
										((BgL_copz00_bglt) BgL_exit4040z00_2630), BUNSPEC);
									((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_new4042z00_2625))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value4041z00_2631), BUNSPEC);
									BgL_res4871z00_2632 = BgL_new4042z00_2625;
							}}
							(obj_t) (BgL_res4871z00_2632);
				}}}
			else
				{	/* Cgen/cop.scm 114 */
					BFALSE;
				}
			return
				(BgL_cjumpzd2exzd2itz00_bglt)
				(BGl_z52thezd2cjumpzd2exzd2itzd2nilz52zzcgen_copz00);
		}
	}



/* _cjump-ex-it-nil */
	obj_t BGl__cjumpzd2exzd2itzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4242)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			return (obj_t) (BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00());
		}
	}



/* cset-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t
		BgL_obj4028z00_56)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4028z00_56,
				BGl_csetzd2exzd2itz00zzcgen_copz00);
		}
	}



/* _cset-ex-it? */
	obj_t BGl__csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t BgL_envz00_4239,
		obj_t BgL_obj4028z00_4240)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4028z00_4240,
					BGl_csetzd2exzd2itz00zzcgen_copz00));
		}
	}



/* make-cset-ex-it */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t BgL_loc3992z00_60,
		BgL_copz00_bglt BgL_exit3993z00_61,
		BgL_copz00_bglt BgL_jumpzd2value3994zd2_62,
		BgL_copz00_bglt BgL_body3995z00_63)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_csetzd2exzd2itz00_bglt BgL_new3996z00_2633;

				{	/* Cgen/cop.scm 109 */
					BgL_csetzd2exzd2itz00_bglt BgL_res4872z00_2638;

					{	/* Cgen/cop.scm 109 */
						BgL_csetzd2exzd2itz00_bglt BgL_new4008z00_2634;

						BgL_new4008z00_2634 =
							((BgL_csetzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csetzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_2634),
							BGl_classzd2numzd2zz__objectz00
							(BGl_csetzd2exzd2itz00zzcgen_copz00));
						{	/* Cgen/cop.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_5518;

							BgL_auxz00_5518 = (BgL_objectz00_bglt) (BgL_new4008z00_2634);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5518, BFALSE);
						}
						BgL_res4872z00_2638 = BgL_new4008z00_2634;
					}
					BgL_new3996z00_2633 = BgL_res4872z00_2638;
				}
				{	/* Cgen/cop.scm 109 */
					BgL_csetzd2exzd2itz00_bglt BgL_res4873z00_2648;

					{	/* Cgen/cop.scm 109 */
						BgL_csetzd2exzd2itz00_bglt BgL_new4002z00_2639;

						BgL_new4002z00_2639 = BgL_new3996z00_2633;
						{	/* Cgen/cop.scm 109 */
							obj_t BgL_loc3998z00_2644;

							BgL_copz00_bglt BgL_exit3999z00_2645;

							BgL_copz00_bglt BgL_jumpzd2value4000zd2_2646;

							BgL_copz00_bglt BgL_body4001z00_2647;

							BgL_loc3998z00_2644 = BgL_loc3992z00_60;
							BgL_exit3999z00_2645 = BgL_exit3993z00_61;
							BgL_jumpzd2value4000zd2_2646 = BgL_jumpzd2value3994zd2_62;
							BgL_body4001z00_2647 = BgL_body3995z00_63;
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2639))->
									BgL_locz00) = ((obj_t) BgL_loc3998z00_2644), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2639))->
									BgL_exitz00) =
								((BgL_copz00_bglt) BgL_exit3999z00_2645), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2639))->
									BgL_jumpzd2valuezd2) =
								((BgL_copz00_bglt) BgL_jumpzd2value4000zd2_2646), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2639))->
									BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body4001z00_2647), BUNSPEC);
							BgL_res4873z00_2648 = BgL_new4002z00_2639;
					}} BgL_res4873z00_2648;
				}
				return BgL_new3996z00_2633;
			}
		}
	}



/* _make-cset-ex-it */
	obj_t BGl__makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t BgL_envz00_4296,
		obj_t BgL_loc3992z00_4297, obj_t BgL_exit3993z00_4298,
		obj_t BgL_jumpzd2value3994zd2_4299, obj_t BgL_body3995z00_4300)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			return
				(obj_t) (BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(BgL_loc3992z00_4297,
					(BgL_copz00_bglt) (BgL_exit3993z00_4298),
					(BgL_copz00_bglt) (BgL_jumpzd2value3994zd2_4299),
					(BgL_copz00_bglt) (BgL_body3995z00_4300)));
		}
	}



/* fill-cset-ex-it! */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_fillzd2csetzd2exzd2itz12zc0zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_new4002z00_64, obj_t BgL_loc3998z00_65,
		BgL_copz00_bglt BgL_exit3999z00_66,
		BgL_copz00_bglt BgL_jumpzd2value4000zd2_67,
		BgL_copz00_bglt BgL_body4001z00_68)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				obj_t BgL_loc3998z00_4758;

				BgL_copz00_bglt BgL_exit3999z00_4759;

				BgL_copz00_bglt BgL_jumpzd2value4000zd2_4760;

				BgL_copz00_bglt BgL_body4001z00_4761;

				BgL_loc3998z00_4758 = BgL_loc3998z00_65;
				BgL_exit3999z00_4759 = BgL_exit3999z00_66;
				BgL_jumpzd2value4000zd2_4760 = BgL_jumpzd2value4000zd2_67;
				BgL_body4001z00_4761 = BgL_body4001z00_68;
				((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_64))->BgL_locz00) =
					((obj_t) BgL_loc3998z00_4758), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_64))->BgL_exitz00) =
					((BgL_copz00_bglt) BgL_exit3999z00_4759), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_64))->
						BgL_jumpzd2valuezd2) =
					((BgL_copz00_bglt) BgL_jumpzd2value4000zd2_4760), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_64))->BgL_bodyz00) =
					((BgL_copz00_bglt) BgL_body4001z00_4761), BUNSPEC);
				return BgL_new4002z00_64;
			}
		}
	}



/* _fill-cset-ex-it! */
	obj_t BGl__fillzd2csetzd2exzd2itz12zc0zzcgen_copz00(obj_t BgL_envz00_4301,
		obj_t BgL_new4002z00_4302, obj_t BgL_loc3998z00_4303,
		obj_t BgL_exit3999z00_4304, obj_t BgL_jumpzd2value4000zd2_4305,
		obj_t BgL_body4001z00_4306)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_csetzd2exzd2itz00_bglt BgL_auxz00_5534;

				{	/* Cgen/cop.scm 109 */
					BgL_csetzd2exzd2itz00_bglt BgL_res5047z00_4771;

					{	/* Cgen/cop.scm 109 */
						BgL_csetzd2exzd2itz00_bglt BgL_new4002z00_4762;

						BgL_copz00_bglt BgL_exit3999z00_4764;

						BgL_copz00_bglt BgL_jumpzd2value4000zd2_4765;

						BgL_copz00_bglt BgL_body4001z00_4766;

						BgL_new4002z00_4762 =
							(BgL_csetzd2exzd2itz00_bglt) (BgL_new4002z00_4302);
						BgL_exit3999z00_4764 = (BgL_copz00_bglt) (BgL_exit3999z00_4304);
						BgL_jumpzd2value4000zd2_4765 =
							(BgL_copz00_bglt) (BgL_jumpzd2value4000zd2_4305);
						BgL_body4001z00_4766 = (BgL_copz00_bglt) (BgL_body4001z00_4306);
						{	/* Cgen/cop.scm 109 */
							obj_t BgL_loc3998z00_4767;

							BgL_copz00_bglt BgL_exit3999z00_4768;

							BgL_copz00_bglt BgL_jumpzd2value4000zd2_4769;

							BgL_copz00_bglt BgL_body4001z00_4770;

							BgL_loc3998z00_4767 = BgL_loc3998z00_4303;
							BgL_exit3999z00_4768 = BgL_exit3999z00_4764;
							BgL_jumpzd2value4000zd2_4769 = BgL_jumpzd2value4000zd2_4765;
							BgL_body4001z00_4770 = BgL_body4001z00_4766;
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_4762))->
									BgL_locz00) = ((obj_t) BgL_loc3998z00_4767), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_4762))->
									BgL_exitz00) =
								((BgL_copz00_bglt) BgL_exit3999z00_4768), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_4762))->
									BgL_jumpzd2valuezd2) =
								((BgL_copz00_bglt) BgL_jumpzd2value4000zd2_4769), BUNSPEC);
							((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_4762))->
									BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body4001z00_4770), BUNSPEC);
							BgL_res5047z00_4771 = BgL_new4002z00_4762;
						}
					}
					BgL_auxz00_5534 = BgL_res5047z00_4771;
				}
				return (obj_t) (BgL_auxz00_5534);
			}
		}
	}



/* %allocate-cset-ex-it */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_z52allocatezd2csetzd2exzd2itz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_csetzd2exzd2itz00_bglt BgL_new4008z00_4772;

				BgL_new4008z00_4772 =
					((BgL_csetzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_csetzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_4772),
					BGl_classzd2numzd2zz__objectz00(BGl_csetzd2exzd2itz00zzcgen_copz00));
				{	/* Cgen/cop.scm 109 */
					BgL_objectz00_bglt BgL_auxz00_5548;

					BgL_auxz00_5548 = (BgL_objectz00_bglt) (BgL_new4008z00_4772);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5548, BFALSE);
				}
				return BgL_new4008z00_4772;
			}
		}
	}



/* _%allocate-cset-ex-it */
	obj_t BGl__z52allocatezd2csetzd2exzd2itz80zzcgen_copz00(obj_t BgL_envz00_4237)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_csetzd2exzd2itz00_bglt BgL_auxz00_5551;

				{	/* Cgen/cop.scm 109 */
					BgL_csetzd2exzd2itz00_bglt BgL_res5048z00_4776;

					{	/* Cgen/cop.scm 109 */
						BgL_csetzd2exzd2itz00_bglt BgL_new4008z00_4774;

						BgL_new4008z00_4774 =
							((BgL_csetzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csetzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_4774),
							BGl_classzd2numzd2zz__objectz00
							(BGl_csetzd2exzd2itz00zzcgen_copz00));
						{	/* Cgen/cop.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_5556;

							BgL_auxz00_5556 = (BgL_objectz00_bglt) (BgL_new4008z00_4774);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5556, BFALSE);
						}
						BgL_res5048z00_4776 = BgL_new4008z00_4774;
					}
					BgL_auxz00_5551 = BgL_res5048z00_4776;
				}
				return (obj_t) (BgL_auxz00_5551);
			}
		}
	}



/* cset-ex-it-nil */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			if ((BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 109 */
					{	/* Cgen/cop.scm 109 */
						BgL_csetzd2exzd2itz00_bglt BgL_res4874z00_2661;

						{	/* Cgen/cop.scm 109 */
							BgL_csetzd2exzd2itz00_bglt BgL_new4008z00_2657;

							BgL_new4008z00_2657 =
								((BgL_csetzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_csetzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4008z00_2657),
								BGl_classzd2numzd2zz__objectz00
								(BGl_csetzd2exzd2itz00zzcgen_copz00));
							{	/* Cgen/cop.scm 109 */
								BgL_objectz00_bglt BgL_auxz00_5566;

								BgL_auxz00_5566 = (BgL_objectz00_bglt) (BgL_new4008z00_2657);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5566, BFALSE);
							}
							BgL_res4874z00_2661 = BgL_new4008z00_2657;
						}
						BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4874z00_2661);
					}
					{	/* Cgen/cop.scm 109 */
						BgL_copz00_bglt BgL_arg4486z00_1338;

						BgL_copz00_bglt BgL_arg4487z00_1339;

						BgL_copz00_bglt BgL_arg4488z00_1340;

						BgL_arg4486z00_1338 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4487z00_1339 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4488z00_1340 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 109 */
							BgL_csetzd2exzd2itz00_bglt BgL_res4875z00_2671;

							{	/* Cgen/cop.scm 109 */
								BgL_csetzd2exzd2itz00_bglt BgL_new4002z00_2662;

								BgL_new4002z00_2662 =
									(BgL_csetzd2exzd2itz00_bglt)
									(BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 109 */
									obj_t BgL_loc3998z00_2667;

									BgL_copz00_bglt BgL_exit3999z00_2668;

									BgL_copz00_bglt BgL_jumpzd2value4000zd2_2669;

									BgL_copz00_bglt BgL_body4001z00_2670;

									BgL_loc3998z00_2667 = BUNSPEC;
									BgL_exit3999z00_2668 = BgL_arg4486z00_1338;
									BgL_jumpzd2value4000zd2_2669 = BgL_arg4487z00_1339;
									BgL_body4001z00_2670 = BgL_arg4488z00_1340;
									((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2662))->
											BgL_locz00) = ((obj_t) BgL_loc3998z00_2667), BUNSPEC);
									((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2662))->
											BgL_exitz00) =
										((BgL_copz00_bglt) BgL_exit3999z00_2668), BUNSPEC);
									((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2662))->
											BgL_jumpzd2valuezd2) =
										((BgL_copz00_bglt) BgL_jumpzd2value4000zd2_2669), BUNSPEC);
									((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_new4002z00_2662))->
											BgL_bodyz00) =
										((BgL_copz00_bglt) BgL_body4001z00_2670), BUNSPEC);
									BgL_res4875z00_2671 = BgL_new4002z00_2662;
							}}
							(obj_t) (BgL_res4875z00_2671);
				}}}
			else
				{	/* Cgen/cop.scm 109 */
					BFALSE;
				}
			return
				(BgL_csetzd2exzd2itz00_bglt)
				(BGl_z52thezd2csetzd2exzd2itzd2nilz52zzcgen_copz00);
		}
	}



/* _cset-ex-it-nil */
	obj_t BGl__csetzd2exzd2itzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4238)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			return (obj_t) (BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00());
		}
	}



/* cbox-set!? */
	BGL_EXPORTED_DEF bool_t BGl_cboxzd2setz12zf3z33zzcgen_copz00(obj_t
		BgL_obj3984z00_72)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3984z00_72,
				BGl_cboxzd2setz12zc0zzcgen_copz00);
		}
	}



/* _cbox-set!? */
	obj_t BGl__cboxzd2setz12zf3z33zzcgen_copz00(obj_t BgL_envz00_4235,
		obj_t BgL_obj3984z00_4236)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3984z00_4236,
					BGl_cboxzd2setz12zc0zzcgen_copz00));
		}
	}



/* make-cbox-set! */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_makezd2cboxzd2setz12z12zzcgen_copz00(obj_t BgL_loc3956z00_76,
		BgL_copz00_bglt BgL_var3957z00_77, BgL_copz00_bglt BgL_value3958z00_78)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{	/* Cgen/cop.scm 105 */
				BgL_cboxzd2setz12zc0_bglt BgL_new3959z00_2672;

				{	/* Cgen/cop.scm 105 */
					BgL_cboxzd2setz12zc0_bglt BgL_res4876z00_2677;

					{	/* Cgen/cop.scm 105 */
						BgL_cboxzd2setz12zc0_bglt BgL_new3969z00_2673;

						BgL_new3969z00_2673 =
							((BgL_cboxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cboxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_2673),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cboxzd2setz12zc0zzcgen_copz00));
						{	/* Cgen/cop.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_5589;

							BgL_auxz00_5589 = (BgL_objectz00_bglt) (BgL_new3969z00_2673);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5589, BFALSE);
						}
						BgL_res4876z00_2677 = BgL_new3969z00_2673;
					}
					BgL_new3959z00_2672 = BgL_res4876z00_2677;
				}
				{	/* Cgen/cop.scm 105 */
					BgL_cboxzd2setz12zc0_bglt BgL_res4877z00_2685;

					{	/* Cgen/cop.scm 105 */
						BgL_cboxzd2setz12zc0_bglt BgL_new3964z00_2678;

						BgL_new3964z00_2678 = BgL_new3959z00_2672;
						{	/* Cgen/cop.scm 105 */
							obj_t BgL_loc3961z00_2682;

							BgL_copz00_bglt BgL_var3962z00_2683;

							BgL_copz00_bglt BgL_value3963z00_2684;

							BgL_loc3961z00_2682 = BgL_loc3956z00_76;
							BgL_var3962z00_2683 = BgL_var3957z00_77;
							BgL_value3963z00_2684 = BgL_value3958z00_78;
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2678))->
									BgL_locz00) = ((obj_t) BgL_loc3961z00_2682), BUNSPEC);
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2678))->
									BgL_varz00) =
								((BgL_copz00_bglt) BgL_var3962z00_2683), BUNSPEC);
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2678))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3963z00_2684), BUNSPEC);
							BgL_res4877z00_2685 = BgL_new3964z00_2678;
					}} BgL_res4877z00_2685;
				}
				return BgL_new3959z00_2672;
			}
		}
	}



/* _make-cbox-set! */
	obj_t BGl__makezd2cboxzd2setz12z12zzcgen_copz00(obj_t BgL_envz00_4307,
		obj_t BgL_loc3956z00_4308, obj_t BgL_var3957z00_4309,
		obj_t BgL_value3958z00_4310)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			return
				(obj_t) (BGl_makezd2cboxzd2setz12z12zzcgen_copz00(BgL_loc3956z00_4308,
					(BgL_copz00_bglt) (BgL_var3957z00_4309),
					(BgL_copz00_bglt) (BgL_value3958z00_4310)));
		}
	}



/* fill-cbox-set!! */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_fillzd2cboxzd2setz12z12z00zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt
		BgL_new3964z00_79, obj_t BgL_loc3961z00_80,
		BgL_copz00_bglt BgL_var3962z00_81, BgL_copz00_bglt BgL_value3963z00_82)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{	/* Cgen/cop.scm 105 */
				obj_t BgL_loc3961z00_4778;

				BgL_copz00_bglt BgL_var3962z00_4779;

				BgL_copz00_bglt BgL_value3963z00_4780;

				BgL_loc3961z00_4778 = BgL_loc3961z00_80;
				BgL_var3962z00_4779 = BgL_var3962z00_81;
				BgL_value3963z00_4780 = BgL_value3963z00_82;
				((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_79))->BgL_locz00) =
					((obj_t) BgL_loc3961z00_4778), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_79))->BgL_varz00) =
					((BgL_copz00_bglt) BgL_var3962z00_4779), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_79))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3963z00_4780), BUNSPEC);
				return BgL_new3964z00_79;
			}
		}
	}



/* _fill-cbox-set!! */
	obj_t BGl__fillzd2cboxzd2setz12z12z00zzcgen_copz00(obj_t BgL_envz00_4311,
		obj_t BgL_new3964z00_4312, obj_t BgL_loc3961z00_4313,
		obj_t BgL_var3962z00_4314, obj_t BgL_value3963z00_4315)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{	/* Cgen/cop.scm 105 */
				BgL_cboxzd2setz12zc0_bglt BgL_auxz00_5602;

				{	/* Cgen/cop.scm 105 */
					BgL_cboxzd2setz12zc0_bglt BgL_res5049z00_4788;

					{	/* Cgen/cop.scm 105 */
						BgL_cboxzd2setz12zc0_bglt BgL_new3964z00_4781;

						BgL_copz00_bglt BgL_var3962z00_4783;

						BgL_copz00_bglt BgL_value3963z00_4784;

						BgL_new3964z00_4781 =
							(BgL_cboxzd2setz12zc0_bglt) (BgL_new3964z00_4312);
						BgL_var3962z00_4783 = (BgL_copz00_bglt) (BgL_var3962z00_4314);
						BgL_value3963z00_4784 = (BgL_copz00_bglt) (BgL_value3963z00_4315);
						{	/* Cgen/cop.scm 105 */
							obj_t BgL_loc3961z00_4785;

							BgL_copz00_bglt BgL_var3962z00_4786;

							BgL_copz00_bglt BgL_value3963z00_4787;

							BgL_loc3961z00_4785 = BgL_loc3961z00_4313;
							BgL_var3962z00_4786 = BgL_var3962z00_4783;
							BgL_value3963z00_4787 = BgL_value3963z00_4784;
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_4781))->
									BgL_locz00) = ((obj_t) BgL_loc3961z00_4785), BUNSPEC);
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_4781))->
									BgL_varz00) =
								((BgL_copz00_bglt) BgL_var3962z00_4786), BUNSPEC);
							((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_4781))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3963z00_4787), BUNSPEC);
							BgL_res5049z00_4788 = BgL_new3964z00_4781;
						}
					}
					BgL_auxz00_5602 = BgL_res5049z00_4788;
				}
				return (obj_t) (BgL_auxz00_5602);
			}
		}
	}



/* %allocate-cbox-set! */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_z52allocatezd2cboxzd2setz12z40zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{	/* Cgen/cop.scm 105 */
				BgL_cboxzd2setz12zc0_bglt BgL_new3969z00_4789;

				BgL_new3969z00_4789 =
					((BgL_cboxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cboxzd2setz12zc0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_4789),
					BGl_classzd2numzd2zz__objectz00(BGl_cboxzd2setz12zc0zzcgen_copz00));
				{	/* Cgen/cop.scm 105 */
					BgL_objectz00_bglt BgL_auxz00_5614;

					BgL_auxz00_5614 = (BgL_objectz00_bglt) (BgL_new3969z00_4789);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5614, BFALSE);
				}
				return BgL_new3969z00_4789;
			}
		}
	}



/* _%allocate-cbox-set! */
	obj_t BGl__z52allocatezd2cboxzd2setz12z40zzcgen_copz00(obj_t BgL_envz00_4233)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{	/* Cgen/cop.scm 105 */
				BgL_cboxzd2setz12zc0_bglt BgL_auxz00_5617;

				{	/* Cgen/cop.scm 105 */
					BgL_cboxzd2setz12zc0_bglt BgL_res5050z00_4793;

					{	/* Cgen/cop.scm 105 */
						BgL_cboxzd2setz12zc0_bglt BgL_new3969z00_4791;

						BgL_new3969z00_4791 =
							((BgL_cboxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cboxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_4791),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cboxzd2setz12zc0zzcgen_copz00));
						{	/* Cgen/cop.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_5622;

							BgL_auxz00_5622 = (BgL_objectz00_bglt) (BgL_new3969z00_4791);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5622, BFALSE);
						}
						BgL_res5050z00_4793 = BgL_new3969z00_4791;
					}
					BgL_auxz00_5617 = BgL_res5050z00_4793;
				}
				return (obj_t) (BgL_auxz00_5617);
			}
		}
	}



/* cbox-set!-nil */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_cboxzd2setz12zd2nilz12zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			if ((BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 105 */
					{	/* Cgen/cop.scm 105 */
						BgL_cboxzd2setz12zc0_bglt BgL_res4878z00_2697;

						{	/* Cgen/cop.scm 105 */
							BgL_cboxzd2setz12zc0_bglt BgL_new3969z00_2693;

							BgL_new3969z00_2693 =
								((BgL_cboxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cboxzd2setz12zc0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3969z00_2693),
								BGl_classzd2numzd2zz__objectz00
								(BGl_cboxzd2setz12zc0zzcgen_copz00));
							{	/* Cgen/cop.scm 105 */
								BgL_objectz00_bglt BgL_auxz00_5632;

								BgL_auxz00_5632 = (BgL_objectz00_bglt) (BgL_new3969z00_2693);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5632, BFALSE);
							}
							BgL_res4878z00_2697 = BgL_new3969z00_2693;
						}
						BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00 =
							(obj_t) (BgL_res4878z00_2697);
					}
					{	/* Cgen/cop.scm 105 */
						BgL_copz00_bglt BgL_arg4491z00_1348;

						BgL_copz00_bglt BgL_arg4492z00_1349;

						BgL_arg4491z00_1348 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4492z00_1349 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 105 */
							BgL_cboxzd2setz12zc0_bglt BgL_res4879z00_2705;

							{	/* Cgen/cop.scm 105 */
								BgL_cboxzd2setz12zc0_bglt BgL_new3964z00_2698;

								BgL_new3964z00_2698 =
									(BgL_cboxzd2setz12zc0_bglt)
									(BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00);
								{	/* Cgen/cop.scm 105 */
									obj_t BgL_loc3961z00_2702;

									BgL_copz00_bglt BgL_var3962z00_2703;

									BgL_copz00_bglt BgL_value3963z00_2704;

									BgL_loc3961z00_2702 = BUNSPEC;
									BgL_var3962z00_2703 = BgL_arg4491z00_1348;
									BgL_value3963z00_2704 = BgL_arg4492z00_1349;
									((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2698))->
											BgL_locz00) = ((obj_t) BgL_loc3961z00_2702), BUNSPEC);
									((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2698))->
											BgL_varz00) =
										((BgL_copz00_bglt) BgL_var3962z00_2703), BUNSPEC);
									((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_new3964z00_2698))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3963z00_2704), BUNSPEC);
									BgL_res4879z00_2705 = BgL_new3964z00_2698;
							}}
							(obj_t) (BgL_res4879z00_2705);
				}}}
			else
				{	/* Cgen/cop.scm 105 */
					BFALSE;
				}
			return
				(BgL_cboxzd2setz12zc0_bglt)
				(BGl_z52thezd2cboxzd2setz12zd2nilz92zzcgen_copz00);
		}
	}



/* _cbox-set!-nil */
	obj_t BGl__cboxzd2setz12zd2nilz12zzcgen_copz00(obj_t BgL_envz00_4234)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			return (obj_t) (BGl_cboxzd2setz12zd2nilz12zzcgen_copz00());
		}
	}



/* cbox-ref? */
	BGL_EXPORTED_DEF bool_t BGl_cboxzd2refzf3z21zzcgen_copz00(obj_t
		BgL_obj3950z00_85)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3950z00_85,
				BGl_cboxzd2refzd2zzcgen_copz00);
		}
	}



/* _cbox-ref? */
	obj_t BGl__cboxzd2refzf3z21zzcgen_copz00(obj_t BgL_envz00_4231,
		obj_t BgL_obj3950z00_4232)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3950z00_4232,
					BGl_cboxzd2refzd2zzcgen_copz00));
		}
	}



/* make-cbox-ref */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt
		BGl_makezd2cboxzd2refz00zzcgen_copz00(obj_t BgL_loc3929z00_89,
		BgL_copz00_bglt BgL_var3930z00_90)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cboxzd2refzd2_bglt BgL_new3931z00_2706;

				{	/* Cgen/cop.scm 102 */
					BgL_cboxzd2refzd2_bglt BgL_res4880z00_2711;

					{	/* Cgen/cop.scm 102 */
						BgL_cboxzd2refzd2_bglt BgL_new3939z00_2707;

						BgL_new3939z00_2707 =
							((BgL_cboxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cboxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3939z00_2707),
							BGl_classzd2numzd2zz__objectz00(BGl_cboxzd2refzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_5653;

							BgL_auxz00_5653 = (BgL_objectz00_bglt) (BgL_new3939z00_2707);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5653, BFALSE);
						}
						BgL_res4880z00_2711 = BgL_new3939z00_2707;
					}
					BgL_new3931z00_2706 = BgL_res4880z00_2711;
				}
				{	/* Cgen/cop.scm 102 */
					BgL_cboxzd2refzd2_bglt BgL_res4881z00_2717;

					{	/* Cgen/cop.scm 102 */
						BgL_cboxzd2refzd2_bglt BgL_new3935z00_2712;

						BgL_new3935z00_2712 = BgL_new3931z00_2706;
						{	/* Cgen/cop.scm 102 */
							obj_t BgL_loc3933z00_2715;

							BgL_copz00_bglt BgL_var3934z00_2716;

							BgL_loc3933z00_2715 = BgL_loc3929z00_89;
							BgL_var3934z00_2716 = BgL_var3930z00_90;
							((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_2712))->
									BgL_locz00) = ((obj_t) BgL_loc3933z00_2715), BUNSPEC);
							((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_2712))->
									BgL_varz00) =
								((BgL_copz00_bglt) BgL_var3934z00_2716), BUNSPEC);
							BgL_res4881z00_2717 = BgL_new3935z00_2712;
					}} BgL_res4881z00_2717;
				}
				return BgL_new3931z00_2706;
			}
		}
	}



/* _make-cbox-ref */
	obj_t BGl__makezd2cboxzd2refz00zzcgen_copz00(obj_t BgL_envz00_4316,
		obj_t BgL_loc3929z00_4317, obj_t BgL_var3930z00_4318)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			return
				(obj_t) (BGl_makezd2cboxzd2refz00zzcgen_copz00(BgL_loc3929z00_4317,
					(BgL_copz00_bglt) (BgL_var3930z00_4318)));
		}
	}



/* fill-cbox-ref! */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt
		BGl_fillzd2cboxzd2refz12z12zzcgen_copz00(BgL_cboxzd2refzd2_bglt
		BgL_new3935z00_91, obj_t BgL_loc3933z00_92,
		BgL_copz00_bglt BgL_var3934z00_93)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				obj_t BgL_loc3933z00_4795;

				BgL_copz00_bglt BgL_var3934z00_4796;

				BgL_loc3933z00_4795 = BgL_loc3933z00_92;
				BgL_var3934z00_4796 = BgL_var3934z00_93;
				((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_91))->BgL_locz00) =
					((obj_t) BgL_loc3933z00_4795), BUNSPEC);
				((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_91))->BgL_varz00) =
					((BgL_copz00_bglt) BgL_var3934z00_4796), BUNSPEC);
				return BgL_new3935z00_91;
			}
		}
	}



/* _fill-cbox-ref! */
	obj_t BGl__fillzd2cboxzd2refz12z12zzcgen_copz00(obj_t BgL_envz00_4319,
		obj_t BgL_new3935z00_4320, obj_t BgL_loc3933z00_4321,
		obj_t BgL_var3934z00_4322)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cboxzd2refzd2_bglt BgL_auxz00_5663;

				{	/* Cgen/cop.scm 102 */
					BgL_cboxzd2refzd2_bglt BgL_res5051z00_4802;

					{	/* Cgen/cop.scm 102 */
						BgL_cboxzd2refzd2_bglt BgL_new3935z00_4797;

						BgL_copz00_bglt BgL_var3934z00_4799;

						BgL_new3935z00_4797 =
							(BgL_cboxzd2refzd2_bglt) (BgL_new3935z00_4320);
						BgL_var3934z00_4799 = (BgL_copz00_bglt) (BgL_var3934z00_4322);
						{	/* Cgen/cop.scm 102 */
							obj_t BgL_loc3933z00_4800;

							BgL_copz00_bglt BgL_var3934z00_4801;

							BgL_loc3933z00_4800 = BgL_loc3933z00_4321;
							BgL_var3934z00_4801 = BgL_var3934z00_4799;
							((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_4797))->
									BgL_locz00) = ((obj_t) BgL_loc3933z00_4800), BUNSPEC);
							((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_4797))->
									BgL_varz00) =
								((BgL_copz00_bglt) BgL_var3934z00_4801), BUNSPEC);
							BgL_res5051z00_4802 = BgL_new3935z00_4797;
						}
					}
					BgL_auxz00_5663 = BgL_res5051z00_4802;
				}
				return (obj_t) (BgL_auxz00_5663);
			}
		}
	}



/* %allocate-cbox-ref */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt
		BGl_z52allocatezd2cboxzd2refz52zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cboxzd2refzd2_bglt BgL_new3939z00_4803;

				BgL_new3939z00_4803 =
					((BgL_cboxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cboxzd2refzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3939z00_4803),
					BGl_classzd2numzd2zz__objectz00(BGl_cboxzd2refzd2zzcgen_copz00));
				{	/* Cgen/cop.scm 102 */
					BgL_objectz00_bglt BgL_auxz00_5673;

					BgL_auxz00_5673 = (BgL_objectz00_bglt) (BgL_new3939z00_4803);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5673, BFALSE);
				}
				return BgL_new3939z00_4803;
			}
		}
	}



/* _%allocate-cbox-ref */
	obj_t BGl__z52allocatezd2cboxzd2refz52zzcgen_copz00(obj_t BgL_envz00_4229)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cboxzd2refzd2_bglt BgL_auxz00_5676;

				{	/* Cgen/cop.scm 102 */
					BgL_cboxzd2refzd2_bglt BgL_res5052z00_4807;

					{	/* Cgen/cop.scm 102 */
						BgL_cboxzd2refzd2_bglt BgL_new3939z00_4805;

						BgL_new3939z00_4805 =
							((BgL_cboxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cboxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3939z00_4805),
							BGl_classzd2numzd2zz__objectz00(BGl_cboxzd2refzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_5681;

							BgL_auxz00_5681 = (BgL_objectz00_bglt) (BgL_new3939z00_4805);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5681, BFALSE);
						}
						BgL_res5052z00_4807 = BgL_new3939z00_4805;
					}
					BgL_auxz00_5676 = BgL_res5052z00_4807;
				}
				return (obj_t) (BgL_auxz00_5676);
			}
		}
	}



/* cbox-ref-nil */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt BGl_cboxzd2refzd2nilz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			if ((BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 102 */
					{	/* Cgen/cop.scm 102 */
						BgL_cboxzd2refzd2_bglt BgL_res4882z00_2728;

						{	/* Cgen/cop.scm 102 */
							BgL_cboxzd2refzd2_bglt BgL_new3939z00_2724;

							BgL_new3939z00_2724 =
								((BgL_cboxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cboxzd2refzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3939z00_2724),
								BGl_classzd2numzd2zz__objectz00
								(BGl_cboxzd2refzd2zzcgen_copz00));
							{	/* Cgen/cop.scm 102 */
								BgL_objectz00_bglt BgL_auxz00_5691;

								BgL_auxz00_5691 = (BgL_objectz00_bglt) (BgL_new3939z00_2724);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5691, BFALSE);
							}
							BgL_res4882z00_2728 = BgL_new3939z00_2724;
						}
						BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00 =
							(obj_t) (BgL_res4882z00_2728);
					}
					{	/* Cgen/cop.scm 102 */
						BgL_copz00_bglt BgL_arg4495z00_1356;

						BgL_arg4495z00_1356 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 102 */
							BgL_cboxzd2refzd2_bglt BgL_res4883z00_2734;

							{	/* Cgen/cop.scm 102 */
								BgL_cboxzd2refzd2_bglt BgL_new3935z00_2729;

								BgL_new3935z00_2729 =
									(BgL_cboxzd2refzd2_bglt)
									(BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00);
								{	/* Cgen/cop.scm 102 */
									obj_t BgL_loc3933z00_2732;

									BgL_copz00_bglt BgL_var3934z00_2733;

									BgL_loc3933z00_2732 = BUNSPEC;
									BgL_var3934z00_2733 = BgL_arg4495z00_1356;
									((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_2729))->
											BgL_locz00) = ((obj_t) BgL_loc3933z00_2732), BUNSPEC);
									((((BgL_cboxzd2refzd2_bglt) CREF(BgL_new3935z00_2729))->
											BgL_varz00) =
										((BgL_copz00_bglt) BgL_var3934z00_2733), BUNSPEC);
									BgL_res4883z00_2734 = BgL_new3935z00_2729;
							}}
							(obj_t) (BgL_res4883z00_2734);
				}}}
			else
				{	/* Cgen/cop.scm 102 */
					BFALSE;
				}
			return
				(BgL_cboxzd2refzd2_bglt)
				(BGl_z52thezd2cboxzd2refzd2nilz80zzcgen_copz00);
		}
	}



/* _cbox-ref-nil */
	obj_t BGl__cboxzd2refzd2nilz00zzcgen_copz00(obj_t BgL_envz00_4230)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			return (obj_t) (BGl_cboxzd2refzd2nilz00zzcgen_copz00());
		}
	}



/* cmake-box? */
	BGL_EXPORTED_DEF bool_t BGl_cmakezd2boxzf3z21zzcgen_copz00(obj_t
		BgL_obj3924z00_95)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3924z00_95,
				BGl_cmakezd2boxzd2zzcgen_copz00);
		}
	}



/* _cmake-box? */
	obj_t BGl__cmakezd2boxzf3z21zzcgen_copz00(obj_t BgL_envz00_4227,
		obj_t BgL_obj3924z00_4228)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3924z00_4228,
					BGl_cmakezd2boxzd2zzcgen_copz00));
		}
	}



/* make-cmake-box */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_makezd2cmakezd2boxz00zzcgen_copz00(obj_t BgL_loc3903z00_99,
		BgL_copz00_bglt BgL_value3904z00_100)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{	/* Cgen/cop.scm 99 */
				BgL_cmakezd2boxzd2_bglt BgL_new3905z00_2735;

				{	/* Cgen/cop.scm 99 */
					BgL_cmakezd2boxzd2_bglt BgL_res4884z00_2740;

					{	/* Cgen/cop.scm 99 */
						BgL_cmakezd2boxzd2_bglt BgL_new3913z00_2736;

						BgL_new3913z00_2736 =
							((BgL_cmakezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cmakezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3913z00_2736),
							BGl_classzd2numzd2zz__objectz00(BGl_cmakezd2boxzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 99 */
							BgL_objectz00_bglt BgL_auxz00_5710;

							BgL_auxz00_5710 = (BgL_objectz00_bglt) (BgL_new3913z00_2736);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5710, BFALSE);
						}
						BgL_res4884z00_2740 = BgL_new3913z00_2736;
					}
					BgL_new3905z00_2735 = BgL_res4884z00_2740;
				}
				{	/* Cgen/cop.scm 99 */
					BgL_cmakezd2boxzd2_bglt BgL_res4885z00_2746;

					{	/* Cgen/cop.scm 99 */
						BgL_cmakezd2boxzd2_bglt BgL_new3909z00_2741;

						BgL_new3909z00_2741 = BgL_new3905z00_2735;
						{	/* Cgen/cop.scm 99 */
							obj_t BgL_loc3907z00_2744;

							BgL_copz00_bglt BgL_value3908z00_2745;

							BgL_loc3907z00_2744 = BgL_loc3903z00_99;
							BgL_value3908z00_2745 = BgL_value3904z00_100;
							((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_2741))->
									BgL_locz00) = ((obj_t) BgL_loc3907z00_2744), BUNSPEC);
							((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_2741))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3908z00_2745), BUNSPEC);
							BgL_res4885z00_2746 = BgL_new3909z00_2741;
					}} BgL_res4885z00_2746;
				}
				return BgL_new3905z00_2735;
			}
		}
	}



/* _make-cmake-box */
	obj_t BGl__makezd2cmakezd2boxz00zzcgen_copz00(obj_t BgL_envz00_4323,
		obj_t BgL_loc3903z00_4324, obj_t BgL_value3904z00_4325)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			return
				(obj_t) (BGl_makezd2cmakezd2boxz00zzcgen_copz00(BgL_loc3903z00_4324,
					(BgL_copz00_bglt) (BgL_value3904z00_4325)));
		}
	}



/* fill-cmake-box! */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_fillzd2cmakezd2boxz12z12zzcgen_copz00(BgL_cmakezd2boxzd2_bglt
		BgL_new3909z00_101, obj_t BgL_loc3907z00_102,
		BgL_copz00_bglt BgL_value3908z00_103)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{	/* Cgen/cop.scm 99 */
				obj_t BgL_loc3907z00_4809;

				BgL_copz00_bglt BgL_value3908z00_4810;

				BgL_loc3907z00_4809 = BgL_loc3907z00_102;
				BgL_value3908z00_4810 = BgL_value3908z00_103;
				((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_101))->BgL_locz00) =
					((obj_t) BgL_loc3907z00_4809), BUNSPEC);
				((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_101))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3908z00_4810), BUNSPEC);
				return BgL_new3909z00_101;
			}
		}
	}



/* _fill-cmake-box! */
	obj_t BGl__fillzd2cmakezd2boxz12z12zzcgen_copz00(obj_t BgL_envz00_4326,
		obj_t BgL_new3909z00_4327, obj_t BgL_loc3907z00_4328,
		obj_t BgL_value3908z00_4329)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{	/* Cgen/cop.scm 99 */
				BgL_cmakezd2boxzd2_bglt BgL_auxz00_5720;

				{	/* Cgen/cop.scm 99 */
					BgL_cmakezd2boxzd2_bglt BgL_res5053z00_4816;

					{	/* Cgen/cop.scm 99 */
						BgL_cmakezd2boxzd2_bglt BgL_new3909z00_4811;

						BgL_copz00_bglt BgL_value3908z00_4813;

						BgL_new3909z00_4811 =
							(BgL_cmakezd2boxzd2_bglt) (BgL_new3909z00_4327);
						BgL_value3908z00_4813 = (BgL_copz00_bglt) (BgL_value3908z00_4329);
						{	/* Cgen/cop.scm 99 */
							obj_t BgL_loc3907z00_4814;

							BgL_copz00_bglt BgL_value3908z00_4815;

							BgL_loc3907z00_4814 = BgL_loc3907z00_4328;
							BgL_value3908z00_4815 = BgL_value3908z00_4813;
							((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_4811))->
									BgL_locz00) = ((obj_t) BgL_loc3907z00_4814), BUNSPEC);
							((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_4811))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3908z00_4815), BUNSPEC);
							BgL_res5053z00_4816 = BgL_new3909z00_4811;
						}
					}
					BgL_auxz00_5720 = BgL_res5053z00_4816;
				}
				return (obj_t) (BgL_auxz00_5720);
			}
		}
	}



/* %allocate-cmake-box */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_z52allocatezd2cmakezd2boxz52zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{	/* Cgen/cop.scm 99 */
				BgL_cmakezd2boxzd2_bglt BgL_new3913z00_4817;

				BgL_new3913z00_4817 =
					((BgL_cmakezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cmakezd2boxzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3913z00_4817),
					BGl_classzd2numzd2zz__objectz00(BGl_cmakezd2boxzd2zzcgen_copz00));
				{	/* Cgen/cop.scm 99 */
					BgL_objectz00_bglt BgL_auxz00_5730;

					BgL_auxz00_5730 = (BgL_objectz00_bglt) (BgL_new3913z00_4817);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5730, BFALSE);
				}
				return BgL_new3913z00_4817;
			}
		}
	}



/* _%allocate-cmake-box */
	obj_t BGl__z52allocatezd2cmakezd2boxz52zzcgen_copz00(obj_t BgL_envz00_4225)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{	/* Cgen/cop.scm 99 */
				BgL_cmakezd2boxzd2_bglt BgL_auxz00_5733;

				{	/* Cgen/cop.scm 99 */
					BgL_cmakezd2boxzd2_bglt BgL_res5054z00_4821;

					{	/* Cgen/cop.scm 99 */
						BgL_cmakezd2boxzd2_bglt BgL_new3913z00_4819;

						BgL_new3913z00_4819 =
							((BgL_cmakezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cmakezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3913z00_4819),
							BGl_classzd2numzd2zz__objectz00(BGl_cmakezd2boxzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 99 */
							BgL_objectz00_bglt BgL_auxz00_5738;

							BgL_auxz00_5738 = (BgL_objectz00_bglt) (BgL_new3913z00_4819);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5738, BFALSE);
						}
						BgL_res5054z00_4821 = BgL_new3913z00_4819;
					}
					BgL_auxz00_5733 = BgL_res5054z00_4821;
				}
				return (obj_t) (BgL_auxz00_5733);
			}
		}
	}



/* cmake-box-nil */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_cmakezd2boxzd2nilz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			if ((BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 99 */
					{	/* Cgen/cop.scm 99 */
						BgL_cmakezd2boxzd2_bglt BgL_res4886z00_2757;

						{	/* Cgen/cop.scm 99 */
							BgL_cmakezd2boxzd2_bglt BgL_new3913z00_2753;

							BgL_new3913z00_2753 =
								((BgL_cmakezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cmakezd2boxzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3913z00_2753),
								BGl_classzd2numzd2zz__objectz00
								(BGl_cmakezd2boxzd2zzcgen_copz00));
							{	/* Cgen/cop.scm 99 */
								BgL_objectz00_bglt BgL_auxz00_5748;

								BgL_auxz00_5748 = (BgL_objectz00_bglt) (BgL_new3913z00_2753);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5748, BFALSE);
							}
							BgL_res4886z00_2757 = BgL_new3913z00_2753;
						}
						BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00 =
							(obj_t) (BgL_res4886z00_2757);
					}
					{	/* Cgen/cop.scm 99 */
						BgL_copz00_bglt BgL_arg4498z00_1363;

						BgL_arg4498z00_1363 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 99 */
							BgL_cmakezd2boxzd2_bglt BgL_res4887z00_2763;

							{	/* Cgen/cop.scm 99 */
								BgL_cmakezd2boxzd2_bglt BgL_new3909z00_2758;

								BgL_new3909z00_2758 =
									(BgL_cmakezd2boxzd2_bglt)
									(BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00);
								{	/* Cgen/cop.scm 99 */
									obj_t BgL_loc3907z00_2761;

									BgL_copz00_bglt BgL_value3908z00_2762;

									BgL_loc3907z00_2761 = BUNSPEC;
									BgL_value3908z00_2762 = BgL_arg4498z00_1363;
									((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_2758))->
											BgL_locz00) = ((obj_t) BgL_loc3907z00_2761), BUNSPEC);
									((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_new3909z00_2758))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3908z00_2762), BUNSPEC);
									BgL_res4887z00_2763 = BgL_new3909z00_2758;
							}}
							(obj_t) (BgL_res4887z00_2763);
				}}}
			else
				{	/* Cgen/cop.scm 99 */
					BFALSE;
				}
			return
				(BgL_cmakezd2boxzd2_bglt)
				(BGl_z52thezd2cmakezd2boxzd2nilz80zzcgen_copz00);
		}
	}



/* _cmake-box-nil */
	obj_t BGl__cmakezd2boxzd2nilz00zzcgen_copz00(obj_t BgL_envz00_4226)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			return (obj_t) (BGl_cmakezd2boxzd2nilz00zzcgen_copz00());
		}
	}



/* cswitch? */
	BGL_EXPORTED_DEF bool_t BGl_cswitchzf3zf3zzcgen_copz00(obj_t
		BgL_obj3898z00_105)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3898z00_105,
				BGl_cswitchz00zzcgen_copz00);
		}
	}



/* _cswitch? */
	obj_t BGl__cswitchzf3zf3zzcgen_copz00(obj_t BgL_envz00_4223,
		obj_t BgL_obj3898z00_4224)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3898z00_4224,
					BGl_cswitchz00zzcgen_copz00));
		}
	}



/* make-cswitch */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt BGl_makezd2cswitchzd2zzcgen_copz00(obj_t
		BgL_loc3870z00_109, BgL_copz00_bglt BgL_test3871z00_110,
		obj_t BgL_clauses3872z00_111)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{	/* Cgen/cop.scm 95 */
				BgL_cswitchz00_bglt BgL_new3873z00_2764;

				{	/* Cgen/cop.scm 95 */
					BgL_cswitchz00_bglt BgL_res4888z00_2769;

					{	/* Cgen/cop.scm 95 */
						BgL_cswitchz00_bglt BgL_new3883z00_2765;

						BgL_new3883z00_2765 =
							((BgL_cswitchz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cswitchz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3883z00_2765),
							BGl_classzd2numzd2zz__objectz00(BGl_cswitchz00zzcgen_copz00));
						{	/* Cgen/cop.scm 95 */
							BgL_objectz00_bglt BgL_auxz00_5767;

							BgL_auxz00_5767 = (BgL_objectz00_bglt) (BgL_new3883z00_2765);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5767, BFALSE);
						}
						BgL_res4888z00_2769 = BgL_new3883z00_2765;
					}
					BgL_new3873z00_2764 = BgL_res4888z00_2769;
				}
				{	/* Cgen/cop.scm 95 */
					BgL_cswitchz00_bglt BgL_res4889z00_2777;

					{	/* Cgen/cop.scm 95 */
						BgL_cswitchz00_bglt BgL_new3878z00_2770;

						BgL_new3878z00_2770 = BgL_new3873z00_2764;
						{	/* Cgen/cop.scm 95 */
							obj_t BgL_loc3875z00_2774;

							BgL_copz00_bglt BgL_test3876z00_2775;

							obj_t BgL_clauses3877z00_2776;

							BgL_loc3875z00_2774 = BgL_loc3870z00_109;
							BgL_test3876z00_2775 = BgL_test3871z00_110;
							BgL_clauses3877z00_2776 = BgL_clauses3872z00_111;
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2770))->BgL_locz00) =
								((obj_t) BgL_loc3875z00_2774), BUNSPEC);
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2770))->
									BgL_testz00) =
								((BgL_copz00_bglt) BgL_test3876z00_2775), BUNSPEC);
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2770))->
									BgL_clausesz00) = ((obj_t) BgL_clauses3877z00_2776), BUNSPEC);
							BgL_res4889z00_2777 = BgL_new3878z00_2770;
					}} BgL_res4889z00_2777;
				}
				return BgL_new3873z00_2764;
			}
		}
	}



/* _make-cswitch */
	obj_t BGl__makezd2cswitchzd2zzcgen_copz00(obj_t BgL_envz00_4330,
		obj_t BgL_loc3870z00_4331, obj_t BgL_test3871z00_4332,
		obj_t BgL_clauses3872z00_4333)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			return
				(obj_t) (BGl_makezd2cswitchzd2zzcgen_copz00(BgL_loc3870z00_4331,
					(BgL_copz00_bglt) (BgL_test3871z00_4332), BgL_clauses3872z00_4333));
		}
	}



/* fill-cswitch! */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt
		BGl_fillzd2cswitchz12zc0zzcgen_copz00(BgL_cswitchz00_bglt
		BgL_new3878z00_112, obj_t BgL_loc3875z00_113,
		BgL_copz00_bglt BgL_test3876z00_114, obj_t BgL_clauses3877z00_115)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{	/* Cgen/cop.scm 95 */
				obj_t BgL_loc3875z00_4823;

				BgL_copz00_bglt BgL_test3876z00_4824;

				obj_t BgL_clauses3877z00_4825;

				BgL_loc3875z00_4823 = BgL_loc3875z00_113;
				BgL_test3876z00_4824 = BgL_test3876z00_114;
				BgL_clauses3877z00_4825 = BgL_clauses3877z00_115;
				((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_112))->BgL_locz00) =
					((obj_t) BgL_loc3875z00_4823), BUNSPEC);
				((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_112))->BgL_testz00) =
					((BgL_copz00_bglt) BgL_test3876z00_4824), BUNSPEC);
				((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_112))->BgL_clausesz00) =
					((obj_t) BgL_clauses3877z00_4825), BUNSPEC);
				return BgL_new3878z00_112;
			}
		}
	}



/* _fill-cswitch! */
	obj_t BGl__fillzd2cswitchz12zc0zzcgen_copz00(obj_t BgL_envz00_4334,
		obj_t BgL_new3878z00_4335, obj_t BgL_loc3875z00_4336,
		obj_t BgL_test3876z00_4337, obj_t BgL_clauses3877z00_4338)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{	/* Cgen/cop.scm 95 */
				BgL_cswitchz00_bglt BgL_auxz00_5779;

				{	/* Cgen/cop.scm 95 */
					BgL_cswitchz00_bglt BgL_res5055z00_4833;

					{	/* Cgen/cop.scm 95 */
						BgL_cswitchz00_bglt BgL_new3878z00_4826;

						BgL_copz00_bglt BgL_test3876z00_4828;

						BgL_new3878z00_4826 = (BgL_cswitchz00_bglt) (BgL_new3878z00_4335);
						BgL_test3876z00_4828 = (BgL_copz00_bglt) (BgL_test3876z00_4337);
						{	/* Cgen/cop.scm 95 */
							obj_t BgL_loc3875z00_4830;

							BgL_copz00_bglt BgL_test3876z00_4831;

							obj_t BgL_clauses3877z00_4832;

							BgL_loc3875z00_4830 = BgL_loc3875z00_4336;
							BgL_test3876z00_4831 = BgL_test3876z00_4828;
							BgL_clauses3877z00_4832 = BgL_clauses3877z00_4338;
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_4826))->BgL_locz00) =
								((obj_t) BgL_loc3875z00_4830), BUNSPEC);
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_4826))->
									BgL_testz00) =
								((BgL_copz00_bglt) BgL_test3876z00_4831), BUNSPEC);
							((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_4826))->
									BgL_clausesz00) = ((obj_t) BgL_clauses3877z00_4832), BUNSPEC);
							BgL_res5055z00_4833 = BgL_new3878z00_4826;
						}
					}
					BgL_auxz00_5779 = BgL_res5055z00_4833;
				}
				return (obj_t) (BgL_auxz00_5779);
			}
		}
	}



/* %allocate-cswitch */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt
		BGl_z52allocatezd2cswitchz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{	/* Cgen/cop.scm 95 */
				BgL_cswitchz00_bglt BgL_new3883z00_4834;

				BgL_new3883z00_4834 =
					((BgL_cswitchz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cswitchz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3883z00_4834),
					BGl_classzd2numzd2zz__objectz00(BGl_cswitchz00zzcgen_copz00));
				{	/* Cgen/cop.scm 95 */
					BgL_objectz00_bglt BgL_auxz00_5790;

					BgL_auxz00_5790 = (BgL_objectz00_bglt) (BgL_new3883z00_4834);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5790, BFALSE);
				}
				return BgL_new3883z00_4834;
			}
		}
	}



/* _%allocate-cswitch */
	obj_t BGl__z52allocatezd2cswitchz80zzcgen_copz00(obj_t BgL_envz00_4221)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{	/* Cgen/cop.scm 95 */
				BgL_cswitchz00_bglt BgL_auxz00_5793;

				{	/* Cgen/cop.scm 95 */
					BgL_cswitchz00_bglt BgL_res5056z00_4838;

					{	/* Cgen/cop.scm 95 */
						BgL_cswitchz00_bglt BgL_new3883z00_4836;

						BgL_new3883z00_4836 =
							((BgL_cswitchz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cswitchz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3883z00_4836),
							BGl_classzd2numzd2zz__objectz00(BGl_cswitchz00zzcgen_copz00));
						{	/* Cgen/cop.scm 95 */
							BgL_objectz00_bglt BgL_auxz00_5798;

							BgL_auxz00_5798 = (BgL_objectz00_bglt) (BgL_new3883z00_4836);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5798, BFALSE);
						}
						BgL_res5056z00_4838 = BgL_new3883z00_4836;
					}
					BgL_auxz00_5793 = BgL_res5056z00_4838;
				}
				return (obj_t) (BgL_auxz00_5793);
			}
		}
	}



/* cswitch-nil */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt BGl_cswitchzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			if ((BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 95 */
					{	/* Cgen/cop.scm 95 */
						BgL_cswitchz00_bglt BgL_res4890z00_2789;

						{	/* Cgen/cop.scm 95 */
							BgL_cswitchz00_bglt BgL_new3883z00_2785;

							BgL_new3883z00_2785 =
								((BgL_cswitchz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cswitchz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3883z00_2785),
								BGl_classzd2numzd2zz__objectz00(BGl_cswitchz00zzcgen_copz00));
							{	/* Cgen/cop.scm 95 */
								BgL_objectz00_bglt BgL_auxz00_5808;

								BgL_auxz00_5808 = (BgL_objectz00_bglt) (BgL_new3883z00_2785);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5808, BFALSE);
							}
							BgL_res4890z00_2789 = BgL_new3883z00_2785;
						}
						BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4890z00_2789);
					}
					{	/* Cgen/cop.scm 95 */
						BgL_copz00_bglt BgL_arg4501z00_1371;

						BgL_arg4501z00_1371 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 95 */
							BgL_cswitchz00_bglt BgL_res4891z00_2797;

							{	/* Cgen/cop.scm 95 */
								BgL_cswitchz00_bglt BgL_new3878z00_2790;

								BgL_new3878z00_2790 =
									(BgL_cswitchz00_bglt)
									(BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 95 */
									obj_t BgL_loc3875z00_2794;

									BgL_copz00_bglt BgL_test3876z00_2795;

									obj_t BgL_clauses3877z00_2796;

									BgL_loc3875z00_2794 = BUNSPEC;
									BgL_test3876z00_2795 = BgL_arg4501z00_1371;
									BgL_clauses3877z00_2796 = BUNSPEC;
									((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2790))->
											BgL_locz00) = ((obj_t) BgL_loc3875z00_2794), BUNSPEC);
									((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2790))->
											BgL_testz00) =
										((BgL_copz00_bglt) BgL_test3876z00_2795), BUNSPEC);
									((((BgL_cswitchz00_bglt) CREF(BgL_new3878z00_2790))->
											BgL_clausesz00) =
										((obj_t) BgL_clauses3877z00_2796), BUNSPEC);
									BgL_res4891z00_2797 = BgL_new3878z00_2790;
							}}
							(obj_t) (BgL_res4891z00_2797);
				}}}
			else
				{	/* Cgen/cop.scm 95 */
					BFALSE;
				}
			return (BgL_cswitchz00_bglt) (BGl_z52thezd2cswitchzd2nilz52zzcgen_copz00);
		}
	}



/* _cswitch-nil */
	obj_t BGl__cswitchzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4222)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			return (obj_t) (BGl_cswitchzd2nilzd2zzcgen_copz00());
		}
	}



/* cfail? */
	BGL_EXPORTED_DEF bool_t BGl_cfailzf3zf3zzcgen_copz00(obj_t BgL_obj3864z00_118)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3864z00_118,
				BGl_cfailz00zzcgen_copz00);
		}
	}



/* _cfail? */
	obj_t BGl__cfailzf3zf3zzcgen_copz00(obj_t BgL_envz00_4219,
		obj_t BgL_obj3864z00_4220)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3864z00_4220,
					BGl_cfailz00zzcgen_copz00));
		}
	}



/* make-cfail */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt BGl_makezd2cfailzd2zzcgen_copz00(obj_t
		BgL_loc3829z00_122, BgL_copz00_bglt BgL_proc3830z00_123,
		BgL_copz00_bglt BgL_msg3831z00_124, BgL_copz00_bglt BgL_obj3832z00_125)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{	/* Cgen/cop.scm 90 */
				BgL_cfailz00_bglt BgL_new3833z00_2798;

				{	/* Cgen/cop.scm 90 */
					BgL_cfailz00_bglt BgL_res4892z00_2803;

					{	/* Cgen/cop.scm 90 */
						BgL_cfailz00_bglt BgL_new3845z00_2799;

						BgL_new3845z00_2799 =
							((BgL_cfailz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfailz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3845z00_2799),
							BGl_classzd2numzd2zz__objectz00(BGl_cfailz00zzcgen_copz00));
						{	/* Cgen/cop.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_5828;

							BgL_auxz00_5828 = (BgL_objectz00_bglt) (BgL_new3845z00_2799);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5828, BFALSE);
						}
						BgL_res4892z00_2803 = BgL_new3845z00_2799;
					}
					BgL_new3833z00_2798 = BgL_res4892z00_2803;
				}
				{	/* Cgen/cop.scm 90 */
					BgL_cfailz00_bglt BgL_res4893z00_2813;

					{	/* Cgen/cop.scm 90 */
						BgL_cfailz00_bglt BgL_new3839z00_2804;

						BgL_new3839z00_2804 = BgL_new3833z00_2798;
						{	/* Cgen/cop.scm 90 */
							obj_t BgL_loc3835z00_2809;

							BgL_copz00_bglt BgL_proc3836z00_2810;

							BgL_copz00_bglt BgL_msg3837z00_2811;

							BgL_copz00_bglt BgL_obj3838z00_2812;

							BgL_loc3835z00_2809 = BgL_loc3829z00_122;
							BgL_proc3836z00_2810 = BgL_proc3830z00_123;
							BgL_msg3837z00_2811 = BgL_msg3831z00_124;
							BgL_obj3838z00_2812 = BgL_obj3832z00_125;
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2804))->BgL_locz00) =
								((obj_t) BgL_loc3835z00_2809), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2804))->BgL_procz00) =
								((BgL_copz00_bglt) BgL_proc3836z00_2810), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2804))->BgL_msgz00) =
								((BgL_copz00_bglt) BgL_msg3837z00_2811), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2804))->BgL_objz00) =
								((BgL_copz00_bglt) BgL_obj3838z00_2812), BUNSPEC);
							BgL_res4893z00_2813 = BgL_new3839z00_2804;
					}} BgL_res4893z00_2813;
				}
				return BgL_new3833z00_2798;
			}
		}
	}



/* _make-cfail */
	obj_t BGl__makezd2cfailzd2zzcgen_copz00(obj_t BgL_envz00_4339,
		obj_t BgL_loc3829z00_4340, obj_t BgL_proc3830z00_4341,
		obj_t BgL_msg3831z00_4342, obj_t BgL_obj3832z00_4343)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			return
				(obj_t) (BGl_makezd2cfailzd2zzcgen_copz00(BgL_loc3829z00_4340,
					(BgL_copz00_bglt) (BgL_proc3830z00_4341),
					(BgL_copz00_bglt) (BgL_msg3831z00_4342),
					(BgL_copz00_bglt) (BgL_obj3832z00_4343)));
		}
	}



/* fill-cfail! */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt
		BGl_fillzd2cfailz12zc0zzcgen_copz00(BgL_cfailz00_bglt BgL_new3839z00_126,
		obj_t BgL_loc3835z00_127, BgL_copz00_bglt BgL_proc3836z00_128,
		BgL_copz00_bglt BgL_msg3837z00_129, BgL_copz00_bglt BgL_obj3838z00_130)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{	/* Cgen/cop.scm 90 */
				obj_t BgL_loc3835z00_4840;

				BgL_copz00_bglt BgL_proc3836z00_4841;

				BgL_copz00_bglt BgL_msg3837z00_4842;

				BgL_copz00_bglt BgL_obj3838z00_4843;

				BgL_loc3835z00_4840 = BgL_loc3835z00_127;
				BgL_proc3836z00_4841 = BgL_proc3836z00_128;
				BgL_msg3837z00_4842 = BgL_msg3837z00_129;
				BgL_obj3838z00_4843 = BgL_obj3838z00_130;
				((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_126))->BgL_locz00) =
					((obj_t) BgL_loc3835z00_4840), BUNSPEC);
				((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_126))->BgL_procz00) =
					((BgL_copz00_bglt) BgL_proc3836z00_4841), BUNSPEC);
				((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_126))->BgL_msgz00) =
					((BgL_copz00_bglt) BgL_msg3837z00_4842), BUNSPEC);
				((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_126))->BgL_objz00) =
					((BgL_copz00_bglt) BgL_obj3838z00_4843), BUNSPEC);
				return BgL_new3839z00_126;
			}
		}
	}



/* _fill-cfail! */
	obj_t BGl__fillzd2cfailz12zc0zzcgen_copz00(obj_t BgL_envz00_4344,
		obj_t BgL_new3839z00_4345, obj_t BgL_loc3835z00_4346,
		obj_t BgL_proc3836z00_4347, obj_t BgL_msg3837z00_4348,
		obj_t BgL_obj3838z00_4349)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{	/* Cgen/cop.scm 90 */
				BgL_cfailz00_bglt BgL_auxz00_5844;

				{	/* Cgen/cop.scm 90 */
					BgL_cfailz00_bglt BgL_res5057z00_4853;

					{	/* Cgen/cop.scm 90 */
						BgL_cfailz00_bglt BgL_new3839z00_4844;

						BgL_copz00_bglt BgL_proc3836z00_4846;

						BgL_copz00_bglt BgL_msg3837z00_4847;

						BgL_copz00_bglt BgL_obj3838z00_4848;

						BgL_new3839z00_4844 = (BgL_cfailz00_bglt) (BgL_new3839z00_4345);
						BgL_proc3836z00_4846 = (BgL_copz00_bglt) (BgL_proc3836z00_4347);
						BgL_msg3837z00_4847 = (BgL_copz00_bglt) (BgL_msg3837z00_4348);
						BgL_obj3838z00_4848 = (BgL_copz00_bglt) (BgL_obj3838z00_4349);
						{	/* Cgen/cop.scm 90 */
							obj_t BgL_loc3835z00_4849;

							BgL_copz00_bglt BgL_proc3836z00_4850;

							BgL_copz00_bglt BgL_msg3837z00_4851;

							BgL_copz00_bglt BgL_obj3838z00_4852;

							BgL_loc3835z00_4849 = BgL_loc3835z00_4346;
							BgL_proc3836z00_4850 = BgL_proc3836z00_4846;
							BgL_msg3837z00_4851 = BgL_msg3837z00_4847;
							BgL_obj3838z00_4852 = BgL_obj3838z00_4848;
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_4844))->BgL_locz00) =
								((obj_t) BgL_loc3835z00_4849), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_4844))->BgL_procz00) =
								((BgL_copz00_bglt) BgL_proc3836z00_4850), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_4844))->BgL_msgz00) =
								((BgL_copz00_bglt) BgL_msg3837z00_4851), BUNSPEC);
							((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_4844))->BgL_objz00) =
								((BgL_copz00_bglt) BgL_obj3838z00_4852), BUNSPEC);
							BgL_res5057z00_4853 = BgL_new3839z00_4844;
						}
					}
					BgL_auxz00_5844 = BgL_res5057z00_4853;
				}
				return (obj_t) (BgL_auxz00_5844);
			}
		}
	}



/* %allocate-cfail */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt BGl_z52allocatezd2cfailz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{	/* Cgen/cop.scm 90 */
				BgL_cfailz00_bglt BgL_new3845z00_4854;

				BgL_new3845z00_4854 =
					((BgL_cfailz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cfailz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3845z00_4854),
					BGl_classzd2numzd2zz__objectz00(BGl_cfailz00zzcgen_copz00));
				{	/* Cgen/cop.scm 90 */
					BgL_objectz00_bglt BgL_auxz00_5858;

					BgL_auxz00_5858 = (BgL_objectz00_bglt) (BgL_new3845z00_4854);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5858, BFALSE);
				}
				return BgL_new3845z00_4854;
			}
		}
	}



/* _%allocate-cfail */
	obj_t BGl__z52allocatezd2cfailz80zzcgen_copz00(obj_t BgL_envz00_4217)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{	/* Cgen/cop.scm 90 */
				BgL_cfailz00_bglt BgL_auxz00_5861;

				{	/* Cgen/cop.scm 90 */
					BgL_cfailz00_bglt BgL_res5058z00_4858;

					{	/* Cgen/cop.scm 90 */
						BgL_cfailz00_bglt BgL_new3845z00_4856;

						BgL_new3845z00_4856 =
							((BgL_cfailz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfailz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3845z00_4856),
							BGl_classzd2numzd2zz__objectz00(BGl_cfailz00zzcgen_copz00));
						{	/* Cgen/cop.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_5866;

							BgL_auxz00_5866 = (BgL_objectz00_bglt) (BgL_new3845z00_4856);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5866, BFALSE);
						}
						BgL_res5058z00_4858 = BgL_new3845z00_4856;
					}
					BgL_auxz00_5861 = BgL_res5058z00_4858;
				}
				return (obj_t) (BgL_auxz00_5861);
			}
		}
	}



/* cfail-nil */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt BGl_cfailzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			if ((BGl_z52thezd2cfailzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 90 */
					{	/* Cgen/cop.scm 90 */
						BgL_cfailz00_bglt BgL_res4894z00_2826;

						{	/* Cgen/cop.scm 90 */
							BgL_cfailz00_bglt BgL_new3845z00_2822;

							BgL_new3845z00_2822 =
								((BgL_cfailz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfailz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3845z00_2822),
								BGl_classzd2numzd2zz__objectz00(BGl_cfailz00zzcgen_copz00));
							{	/* Cgen/cop.scm 90 */
								BgL_objectz00_bglt BgL_auxz00_5876;

								BgL_auxz00_5876 = (BgL_objectz00_bglt) (BgL_new3845z00_2822);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5876, BFALSE);
							}
							BgL_res4894z00_2826 = BgL_new3845z00_2822;
						}
						BGl_z52thezd2cfailzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4894z00_2826);
					}
					{	/* Cgen/cop.scm 90 */
						BgL_copz00_bglt BgL_arg4504z00_1380;

						BgL_copz00_bglt BgL_arg4505z00_1381;

						BgL_copz00_bglt BgL_arg4506z00_1382;

						BgL_arg4504z00_1380 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4505z00_1381 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4506z00_1382 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 90 */
							BgL_cfailz00_bglt BgL_res4895z00_2836;

							{	/* Cgen/cop.scm 90 */
								BgL_cfailz00_bglt BgL_new3839z00_2827;

								BgL_new3839z00_2827 =
									(BgL_cfailz00_bglt)
									(BGl_z52thezd2cfailzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 90 */
									obj_t BgL_loc3835z00_2832;

									BgL_copz00_bglt BgL_proc3836z00_2833;

									BgL_copz00_bglt BgL_msg3837z00_2834;

									BgL_copz00_bglt BgL_obj3838z00_2835;

									BgL_loc3835z00_2832 = BUNSPEC;
									BgL_proc3836z00_2833 = BgL_arg4504z00_1380;
									BgL_msg3837z00_2834 = BgL_arg4505z00_1381;
									BgL_obj3838z00_2835 = BgL_arg4506z00_1382;
									((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2827))->
											BgL_locz00) = ((obj_t) BgL_loc3835z00_2832), BUNSPEC);
									((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2827))->
											BgL_procz00) =
										((BgL_copz00_bglt) BgL_proc3836z00_2833), BUNSPEC);
									((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2827))->
											BgL_msgz00) =
										((BgL_copz00_bglt) BgL_msg3837z00_2834), BUNSPEC);
									((((BgL_cfailz00_bglt) CREF(BgL_new3839z00_2827))->
											BgL_objz00) =
										((BgL_copz00_bglt) BgL_obj3838z00_2835), BUNSPEC);
									BgL_res4895z00_2836 = BgL_new3839z00_2827;
							}}
							(obj_t) (BgL_res4895z00_2836);
				}}}
			else
				{	/* Cgen/cop.scm 90 */
					BFALSE;
				}
			return (BgL_cfailz00_bglt) (BGl_z52thezd2cfailzd2nilz52zzcgen_copz00);
		}
	}



/* _cfail-nil */
	obj_t BGl__cfailzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4218)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			return (obj_t) (BGl_cfailzd2nilzd2zzcgen_copz00());
		}
	}



/* capp? */
	BGL_EXPORTED_DEF bool_t BGl_cappzf3zf3zzcgen_copz00(obj_t BgL_obj3822z00_134)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3822z00_134,
				BGl_cappz00zzcgen_copz00);
		}
	}



/* _capp? */
	obj_t BGl__cappzf3zf3zzcgen_copz00(obj_t BgL_envz00_4215,
		obj_t BgL_obj3822z00_4216)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3822z00_4216,
					BGl_cappz00zzcgen_copz00));
		}
	}



/* make-capp */
	BGL_EXPORTED_DEF BgL_cappz00_bglt BGl_makezd2cappzd2zzcgen_copz00(obj_t
		BgL_loc3794z00_138, BgL_copz00_bglt BgL_fun3795z00_139,
		obj_t BgL_args3796z00_140)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{	/* Cgen/cop.scm 86 */
				BgL_cappz00_bglt BgL_new3797z00_2837;

				{	/* Cgen/cop.scm 86 */
					BgL_cappz00_bglt BgL_res4896z00_2842;

					{	/* Cgen/cop.scm 86 */
						BgL_cappz00_bglt BgL_new3807z00_2838;

						BgL_new3807z00_2838 =
							((BgL_cappz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cappz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3807z00_2838),
							BGl_classzd2numzd2zz__objectz00(BGl_cappz00zzcgen_copz00));
						{	/* Cgen/cop.scm 86 */
							BgL_objectz00_bglt BgL_auxz00_5899;

							BgL_auxz00_5899 = (BgL_objectz00_bglt) (BgL_new3807z00_2838);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5899, BFALSE);
						}
						BgL_res4896z00_2842 = BgL_new3807z00_2838;
					}
					BgL_new3797z00_2837 = BgL_res4896z00_2842;
				}
				{	/* Cgen/cop.scm 86 */
					BgL_cappz00_bglt BgL_res4897z00_2850;

					{	/* Cgen/cop.scm 86 */
						BgL_cappz00_bglt BgL_new3802z00_2843;

						BgL_new3802z00_2843 = BgL_new3797z00_2837;
						{	/* Cgen/cop.scm 86 */
							obj_t BgL_loc3799z00_2847;

							BgL_copz00_bglt BgL_fun3800z00_2848;

							obj_t BgL_args3801z00_2849;

							BgL_loc3799z00_2847 = BgL_loc3794z00_138;
							BgL_fun3800z00_2848 = BgL_fun3795z00_139;
							BgL_args3801z00_2849 = BgL_args3796z00_140;
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2843))->BgL_locz00) =
								((obj_t) BgL_loc3799z00_2847), BUNSPEC);
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2843))->BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3800z00_2848), BUNSPEC);
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2843))->BgL_argsz00) =
								((obj_t) BgL_args3801z00_2849), BUNSPEC);
							BgL_res4897z00_2850 = BgL_new3802z00_2843;
					}} BgL_res4897z00_2850;
				}
				return BgL_new3797z00_2837;
			}
		}
	}



/* _make-capp */
	obj_t BGl__makezd2cappzd2zzcgen_copz00(obj_t BgL_envz00_4350,
		obj_t BgL_loc3794z00_4351, obj_t BgL_fun3795z00_4352,
		obj_t BgL_args3796z00_4353)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			return
				(obj_t) (BGl_makezd2cappzd2zzcgen_copz00(BgL_loc3794z00_4351,
					(BgL_copz00_bglt) (BgL_fun3795z00_4352), BgL_args3796z00_4353));
		}
	}



/* fill-capp! */
	BGL_EXPORTED_DEF BgL_cappz00_bglt
		BGl_fillzd2cappz12zc0zzcgen_copz00(BgL_cappz00_bglt BgL_new3802z00_141,
		obj_t BgL_loc3799z00_142, BgL_copz00_bglt BgL_fun3800z00_143,
		obj_t BgL_args3801z00_144)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{	/* Cgen/cop.scm 86 */
				obj_t BgL_loc3799z00_4860;

				BgL_copz00_bglt BgL_fun3800z00_4861;

				obj_t BgL_args3801z00_4862;

				BgL_loc3799z00_4860 = BgL_loc3799z00_142;
				BgL_fun3800z00_4861 = BgL_fun3800z00_143;
				BgL_args3801z00_4862 = BgL_args3801z00_144;
				((((BgL_cappz00_bglt) CREF(BgL_new3802z00_141))->BgL_locz00) =
					((obj_t) BgL_loc3799z00_4860), BUNSPEC);
				((((BgL_cappz00_bglt) CREF(BgL_new3802z00_141))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun3800z00_4861), BUNSPEC);
				((((BgL_cappz00_bglt) CREF(BgL_new3802z00_141))->BgL_argsz00) =
					((obj_t) BgL_args3801z00_4862), BUNSPEC);
				return BgL_new3802z00_141;
			}
		}
	}



/* _fill-capp! */
	obj_t BGl__fillzd2cappz12zc0zzcgen_copz00(obj_t BgL_envz00_4354,
		obj_t BgL_new3802z00_4355, obj_t BgL_loc3799z00_4356,
		obj_t BgL_fun3800z00_4357, obj_t BgL_args3801z00_4358)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{	/* Cgen/cop.scm 86 */
				BgL_cappz00_bglt BgL_auxz00_5911;

				{	/* Cgen/cop.scm 86 */
					BgL_cappz00_bglt BgL_res5059z00_4870;

					{	/* Cgen/cop.scm 86 */
						BgL_cappz00_bglt BgL_new3802z00_4863;

						BgL_copz00_bglt BgL_fun3800z00_4865;

						BgL_new3802z00_4863 = (BgL_cappz00_bglt) (BgL_new3802z00_4355);
						BgL_fun3800z00_4865 = (BgL_copz00_bglt) (BgL_fun3800z00_4357);
						{	/* Cgen/cop.scm 86 */
							obj_t BgL_loc3799z00_4867;

							BgL_copz00_bglt BgL_fun3800z00_4868;

							obj_t BgL_args3801z00_4869;

							BgL_loc3799z00_4867 = BgL_loc3799z00_4356;
							BgL_fun3800z00_4868 = BgL_fun3800z00_4865;
							BgL_args3801z00_4869 = BgL_args3801z00_4358;
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_4863))->BgL_locz00) =
								((obj_t) BgL_loc3799z00_4867), BUNSPEC);
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_4863))->BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3800z00_4868), BUNSPEC);
							((((BgL_cappz00_bglt) CREF(BgL_new3802z00_4863))->BgL_argsz00) =
								((obj_t) BgL_args3801z00_4869), BUNSPEC);
							BgL_res5059z00_4870 = BgL_new3802z00_4863;
						}
					}
					BgL_auxz00_5911 = BgL_res5059z00_4870;
				}
				return (obj_t) (BgL_auxz00_5911);
			}
		}
	}



/* %allocate-capp */
	BGL_EXPORTED_DEF BgL_cappz00_bglt BGl_z52allocatezd2cappz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{	/* Cgen/cop.scm 86 */
				BgL_cappz00_bglt BgL_new3807z00_4871;

				BgL_new3807z00_4871 =
					((BgL_cappz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cappz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3807z00_4871),
					BGl_classzd2numzd2zz__objectz00(BGl_cappz00zzcgen_copz00));
				{	/* Cgen/cop.scm 86 */
					BgL_objectz00_bglt BgL_auxz00_5922;

					BgL_auxz00_5922 = (BgL_objectz00_bglt) (BgL_new3807z00_4871);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5922, BFALSE);
				}
				return BgL_new3807z00_4871;
			}
		}
	}



/* _%allocate-capp */
	obj_t BGl__z52allocatezd2cappz80zzcgen_copz00(obj_t BgL_envz00_4213)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{	/* Cgen/cop.scm 86 */
				BgL_cappz00_bglt BgL_auxz00_5925;

				{	/* Cgen/cop.scm 86 */
					BgL_cappz00_bglt BgL_res5060z00_4875;

					{	/* Cgen/cop.scm 86 */
						BgL_cappz00_bglt BgL_new3807z00_4873;

						BgL_new3807z00_4873 =
							((BgL_cappz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cappz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3807z00_4873),
							BGl_classzd2numzd2zz__objectz00(BGl_cappz00zzcgen_copz00));
						{	/* Cgen/cop.scm 86 */
							BgL_objectz00_bglt BgL_auxz00_5930;

							BgL_auxz00_5930 = (BgL_objectz00_bglt) (BgL_new3807z00_4873);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5930, BFALSE);
						}
						BgL_res5060z00_4875 = BgL_new3807z00_4873;
					}
					BgL_auxz00_5925 = BgL_res5060z00_4875;
				}
				return (obj_t) (BgL_auxz00_5925);
			}
		}
	}



/* capp-nil */
	BGL_EXPORTED_DEF BgL_cappz00_bglt BGl_cappzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			if ((BGl_z52thezd2cappzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 86 */
					{	/* Cgen/cop.scm 86 */
						BgL_cappz00_bglt BgL_res4898z00_2862;

						{	/* Cgen/cop.scm 86 */
							BgL_cappz00_bglt BgL_new3807z00_2858;

							BgL_new3807z00_2858 =
								((BgL_cappz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cappz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3807z00_2858),
								BGl_classzd2numzd2zz__objectz00(BGl_cappz00zzcgen_copz00));
							{	/* Cgen/cop.scm 86 */
								BgL_objectz00_bglt BgL_auxz00_5940;

								BgL_auxz00_5940 = (BgL_objectz00_bglt) (BgL_new3807z00_2858);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5940, BFALSE);
							}
							BgL_res4898z00_2862 = BgL_new3807z00_2858;
						}
						BGl_z52thezd2cappzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4898z00_2862);
					}
					{	/* Cgen/cop.scm 86 */
						BgL_copz00_bglt BgL_arg4509z00_1390;

						BgL_arg4509z00_1390 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 86 */
							BgL_cappz00_bglt BgL_res4899z00_2870;

							{	/* Cgen/cop.scm 86 */
								BgL_cappz00_bglt BgL_new3802z00_2863;

								BgL_new3802z00_2863 =
									(BgL_cappz00_bglt) (BGl_z52thezd2cappzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 86 */
									obj_t BgL_loc3799z00_2867;

									BgL_copz00_bglt BgL_fun3800z00_2868;

									obj_t BgL_args3801z00_2869;

									BgL_loc3799z00_2867 = BUNSPEC;
									BgL_fun3800z00_2868 = BgL_arg4509z00_1390;
									BgL_args3801z00_2869 = BUNSPEC;
									((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2863))->
											BgL_locz00) = ((obj_t) BgL_loc3799z00_2867), BUNSPEC);
									((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2863))->
											BgL_funz00) =
										((BgL_copz00_bglt) BgL_fun3800z00_2868), BUNSPEC);
									((((BgL_cappz00_bglt) CREF(BgL_new3802z00_2863))->
											BgL_argsz00) = ((obj_t) BgL_args3801z00_2869), BUNSPEC);
									BgL_res4899z00_2870 = BgL_new3802z00_2863;
							}}
							(obj_t) (BgL_res4899z00_2870);
				}}}
			else
				{	/* Cgen/cop.scm 86 */
					BFALSE;
				}
			return (BgL_cappz00_bglt) (BGl_z52thezd2cappzd2nilz52zzcgen_copz00);
		}
	}



/* _capp-nil */
	obj_t BGl__cappzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4214)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			return (obj_t) (BGl_cappzd2nilzd2zzcgen_copz00());
		}
	}



/* capply? */
	BGL_EXPORTED_DEF bool_t BGl_capplyzf3zf3zzcgen_copz00(obj_t
		BgL_obj3788z00_147)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3788z00_147,
				BGl_capplyz00zzcgen_copz00);
		}
	}



/* _capply? */
	obj_t BGl__capplyzf3zf3zzcgen_copz00(obj_t BgL_envz00_4211,
		obj_t BgL_obj3788z00_4212)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3788z00_4212,
					BGl_capplyz00zzcgen_copz00));
		}
	}



/* make-capply */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt BGl_makezd2capplyzd2zzcgen_copz00(obj_t
		BgL_loc3760z00_151, BgL_copz00_bglt BgL_fun3761z00_152,
		BgL_copz00_bglt BgL_arg3762z00_153)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{	/* Cgen/cop.scm 82 */
				BgL_capplyz00_bglt BgL_new3763z00_2871;

				{	/* Cgen/cop.scm 82 */
					BgL_capplyz00_bglt BgL_res4900z00_2876;

					{	/* Cgen/cop.scm 82 */
						BgL_capplyz00_bglt BgL_new3773z00_2872;

						BgL_new3773z00_2872 =
							((BgL_capplyz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_capplyz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3773z00_2872),
							BGl_classzd2numzd2zz__objectz00(BGl_capplyz00zzcgen_copz00));
						{	/* Cgen/cop.scm 82 */
							BgL_objectz00_bglt BgL_auxz00_5960;

							BgL_auxz00_5960 = (BgL_objectz00_bglt) (BgL_new3773z00_2872);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5960, BFALSE);
						}
						BgL_res4900z00_2876 = BgL_new3773z00_2872;
					}
					BgL_new3763z00_2871 = BgL_res4900z00_2876;
				}
				{	/* Cgen/cop.scm 82 */
					BgL_capplyz00_bglt BgL_res4901z00_2884;

					{	/* Cgen/cop.scm 82 */
						BgL_capplyz00_bglt BgL_new3768z00_2877;

						BgL_new3768z00_2877 = BgL_new3763z00_2871;
						{	/* Cgen/cop.scm 82 */
							obj_t BgL_loc3765z00_2881;

							BgL_copz00_bglt BgL_fun3766z00_2882;

							BgL_copz00_bglt BgL_arg3767z00_2883;

							BgL_loc3765z00_2881 = BgL_loc3760z00_151;
							BgL_fun3766z00_2882 = BgL_fun3761z00_152;
							BgL_arg3767z00_2883 = BgL_arg3762z00_153;
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2877))->BgL_locz00) =
								((obj_t) BgL_loc3765z00_2881), BUNSPEC);
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2877))->BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3766z00_2882), BUNSPEC);
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2877))->BgL_argz00) =
								((BgL_copz00_bglt) BgL_arg3767z00_2883), BUNSPEC);
							BgL_res4901z00_2884 = BgL_new3768z00_2877;
					}} BgL_res4901z00_2884;
				}
				return BgL_new3763z00_2871;
			}
		}
	}



/* _make-capply */
	obj_t BGl__makezd2capplyzd2zzcgen_copz00(obj_t BgL_envz00_4359,
		obj_t BgL_loc3760z00_4360, obj_t BgL_fun3761z00_4361,
		obj_t BgL_arg3762z00_4362)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			return
				(obj_t) (BGl_makezd2capplyzd2zzcgen_copz00(BgL_loc3760z00_4360,
					(BgL_copz00_bglt) (BgL_fun3761z00_4361),
					(BgL_copz00_bglt) (BgL_arg3762z00_4362)));
		}
	}



/* fill-capply! */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt
		BGl_fillzd2capplyz12zc0zzcgen_copz00(BgL_capplyz00_bglt BgL_new3768z00_154,
		obj_t BgL_loc3765z00_155, BgL_copz00_bglt BgL_fun3766z00_156,
		BgL_copz00_bglt BgL_arg3767z00_157)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{	/* Cgen/cop.scm 82 */
				obj_t BgL_loc3765z00_4877;

				BgL_copz00_bglt BgL_fun3766z00_4878;

				BgL_copz00_bglt BgL_arg3767z00_4879;

				BgL_loc3765z00_4877 = BgL_loc3765z00_155;
				BgL_fun3766z00_4878 = BgL_fun3766z00_156;
				BgL_arg3767z00_4879 = BgL_arg3767z00_157;
				((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_154))->BgL_locz00) =
					((obj_t) BgL_loc3765z00_4877), BUNSPEC);
				((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_154))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun3766z00_4878), BUNSPEC);
				((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_154))->BgL_argz00) =
					((BgL_copz00_bglt) BgL_arg3767z00_4879), BUNSPEC);
				return BgL_new3768z00_154;
			}
		}
	}



/* _fill-capply! */
	obj_t BGl__fillzd2capplyz12zc0zzcgen_copz00(obj_t BgL_envz00_4363,
		obj_t BgL_new3768z00_4364, obj_t BgL_loc3765z00_4365,
		obj_t BgL_fun3766z00_4366, obj_t BgL_arg3767z00_4367)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{	/* Cgen/cop.scm 82 */
				BgL_capplyz00_bglt BgL_auxz00_5973;

				{	/* Cgen/cop.scm 82 */
					BgL_capplyz00_bglt BgL_res5061z00_4887;

					{	/* Cgen/cop.scm 82 */
						BgL_capplyz00_bglt BgL_new3768z00_4880;

						BgL_copz00_bglt BgL_fun3766z00_4882;

						BgL_copz00_bglt BgL_arg3767z00_4883;

						BgL_new3768z00_4880 = (BgL_capplyz00_bglt) (BgL_new3768z00_4364);
						BgL_fun3766z00_4882 = (BgL_copz00_bglt) (BgL_fun3766z00_4366);
						BgL_arg3767z00_4883 = (BgL_copz00_bglt) (BgL_arg3767z00_4367);
						{	/* Cgen/cop.scm 82 */
							obj_t BgL_loc3765z00_4884;

							BgL_copz00_bglt BgL_fun3766z00_4885;

							BgL_copz00_bglt BgL_arg3767z00_4886;

							BgL_loc3765z00_4884 = BgL_loc3765z00_4365;
							BgL_fun3766z00_4885 = BgL_fun3766z00_4882;
							BgL_arg3767z00_4886 = BgL_arg3767z00_4883;
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_4880))->BgL_locz00) =
								((obj_t) BgL_loc3765z00_4884), BUNSPEC);
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_4880))->BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3766z00_4885), BUNSPEC);
							((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_4880))->BgL_argz00) =
								((BgL_copz00_bglt) BgL_arg3767z00_4886), BUNSPEC);
							BgL_res5061z00_4887 = BgL_new3768z00_4880;
						}
					}
					BgL_auxz00_5973 = BgL_res5061z00_4887;
				}
				return (obj_t) (BgL_auxz00_5973);
			}
		}
	}



/* %allocate-capply */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt BGl_z52allocatezd2capplyz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{	/* Cgen/cop.scm 82 */
				BgL_capplyz00_bglt BgL_new3773z00_4888;

				BgL_new3773z00_4888 =
					((BgL_capplyz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_capplyz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3773z00_4888),
					BGl_classzd2numzd2zz__objectz00(BGl_capplyz00zzcgen_copz00));
				{	/* Cgen/cop.scm 82 */
					BgL_objectz00_bglt BgL_auxz00_5985;

					BgL_auxz00_5985 = (BgL_objectz00_bglt) (BgL_new3773z00_4888);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5985, BFALSE);
				}
				return BgL_new3773z00_4888;
			}
		}
	}



/* _%allocate-capply */
	obj_t BGl__z52allocatezd2capplyz80zzcgen_copz00(obj_t BgL_envz00_4209)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{	/* Cgen/cop.scm 82 */
				BgL_capplyz00_bglt BgL_auxz00_5988;

				{	/* Cgen/cop.scm 82 */
					BgL_capplyz00_bglt BgL_res5062z00_4892;

					{	/* Cgen/cop.scm 82 */
						BgL_capplyz00_bglt BgL_new3773z00_4890;

						BgL_new3773z00_4890 =
							((BgL_capplyz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_capplyz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3773z00_4890),
							BGl_classzd2numzd2zz__objectz00(BGl_capplyz00zzcgen_copz00));
						{	/* Cgen/cop.scm 82 */
							BgL_objectz00_bglt BgL_auxz00_5993;

							BgL_auxz00_5993 = (BgL_objectz00_bglt) (BgL_new3773z00_4890);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5993, BFALSE);
						}
						BgL_res5062z00_4892 = BgL_new3773z00_4890;
					}
					BgL_auxz00_5988 = BgL_res5062z00_4892;
				}
				return (obj_t) (BgL_auxz00_5988);
			}
		}
	}



/* capply-nil */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt BGl_capplyzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			if ((BGl_z52thezd2capplyzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 82 */
					{	/* Cgen/cop.scm 82 */
						BgL_capplyz00_bglt BgL_res4902z00_2896;

						{	/* Cgen/cop.scm 82 */
							BgL_capplyz00_bglt BgL_new3773z00_2892;

							BgL_new3773z00_2892 =
								((BgL_capplyz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_capplyz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3773z00_2892),
								BGl_classzd2numzd2zz__objectz00(BGl_capplyz00zzcgen_copz00));
							{	/* Cgen/cop.scm 82 */
								BgL_objectz00_bglt BgL_auxz00_6003;

								BgL_auxz00_6003 = (BgL_objectz00_bglt) (BgL_new3773z00_2892);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6003, BFALSE);
							}
							BgL_res4902z00_2896 = BgL_new3773z00_2892;
						}
						BGl_z52thezd2capplyzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4902z00_2896);
					}
					{	/* Cgen/cop.scm 82 */
						BgL_copz00_bglt BgL_arg4512z00_1398;

						BgL_copz00_bglt BgL_arg4513z00_1399;

						BgL_arg4512z00_1398 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4513z00_1399 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 82 */
							BgL_capplyz00_bglt BgL_res4903z00_2904;

							{	/* Cgen/cop.scm 82 */
								BgL_capplyz00_bglt BgL_new3768z00_2897;

								BgL_new3768z00_2897 =
									(BgL_capplyz00_bglt)
									(BGl_z52thezd2capplyzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 82 */
									obj_t BgL_loc3765z00_2901;

									BgL_copz00_bglt BgL_fun3766z00_2902;

									BgL_copz00_bglt BgL_arg3767z00_2903;

									BgL_loc3765z00_2901 = BUNSPEC;
									BgL_fun3766z00_2902 = BgL_arg4512z00_1398;
									BgL_arg3767z00_2903 = BgL_arg4513z00_1399;
									((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2897))->
											BgL_locz00) = ((obj_t) BgL_loc3765z00_2901), BUNSPEC);
									((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2897))->
											BgL_funz00) =
										((BgL_copz00_bglt) BgL_fun3766z00_2902), BUNSPEC);
									((((BgL_capplyz00_bglt) CREF(BgL_new3768z00_2897))->
											BgL_argz00) =
										((BgL_copz00_bglt) BgL_arg3767z00_2903), BUNSPEC);
									BgL_res4903z00_2904 = BgL_new3768z00_2897;
							}}
							(obj_t) (BgL_res4903z00_2904);
				}}}
			else
				{	/* Cgen/cop.scm 82 */
					BFALSE;
				}
			return (BgL_capplyz00_bglt) (BGl_z52thezd2capplyzd2nilz52zzcgen_copz00);
		}
	}



/* _capply-nil */
	obj_t BGl__capplyzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4210)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			return (obj_t) (BGl_capplyzd2nilzd2zzcgen_copz00());
		}
	}



/* cfuncall? */
	BGL_EXPORTED_DEF bool_t BGl_cfuncallzf3zf3zzcgen_copz00(obj_t
		BgL_obj3754z00_160)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3754z00_160,
				BGl_cfuncallz00zzcgen_copz00);
		}
	}



/* _cfuncall? */
	obj_t BGl__cfuncallzf3zf3zzcgen_copz00(obj_t BgL_envz00_4207,
		obj_t BgL_obj3754z00_4208)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3754z00_4208,
					BGl_cfuncallz00zzcgen_copz00));
		}
	}



/* make-cfuncall */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt
		BGl_makezd2cfuncallzd2zzcgen_copz00(obj_t BgL_loc3718z00_164,
		BgL_copz00_bglt BgL_fun3719z00_165, obj_t BgL_args3720z00_166,
		obj_t BgL_strength3721z00_167)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{	/* Cgen/cop.scm 77 */
				BgL_cfuncallz00_bglt BgL_new3722z00_2905;

				{	/* Cgen/cop.scm 77 */
					BgL_cfuncallz00_bglt BgL_res4904z00_2910;

					{	/* Cgen/cop.scm 77 */
						BgL_cfuncallz00_bglt BgL_new3734z00_2906;

						BgL_new3734z00_2906 =
							((BgL_cfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfuncallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3734z00_2906),
							BGl_classzd2numzd2zz__objectz00(BGl_cfuncallz00zzcgen_copz00));
						{	/* Cgen/cop.scm 77 */
							BgL_objectz00_bglt BgL_auxz00_6024;

							BgL_auxz00_6024 = (BgL_objectz00_bglt) (BgL_new3734z00_2906);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6024, BFALSE);
						}
						BgL_res4904z00_2910 = BgL_new3734z00_2906;
					}
					BgL_new3722z00_2905 = BgL_res4904z00_2910;
				}
				{	/* Cgen/cop.scm 77 */
					BgL_cfuncallz00_bglt BgL_res4905z00_2920;

					{	/* Cgen/cop.scm 77 */
						BgL_cfuncallz00_bglt BgL_new3728z00_2911;

						BgL_new3728z00_2911 = BgL_new3722z00_2905;
						{	/* Cgen/cop.scm 77 */
							obj_t BgL_loc3724z00_2916;

							BgL_copz00_bglt BgL_fun3725z00_2917;

							obj_t BgL_args3726z00_2918;

							obj_t BgL_strength3727z00_2919;

							BgL_loc3724z00_2916 = BgL_loc3718z00_164;
							BgL_fun3725z00_2917 = BgL_fun3719z00_165;
							BgL_args3726z00_2918 = BgL_args3720z00_166;
							BgL_strength3727z00_2919 = BgL_strength3721z00_167;
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2911))->
									BgL_locz00) = ((obj_t) BgL_loc3724z00_2916), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2911))->
									BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3725z00_2917), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2911))->
									BgL_argsz00) = ((obj_t) BgL_args3726z00_2918), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2911))->
									BgL_strengthz00) =
								((obj_t) BgL_strength3727z00_2919), BUNSPEC);
							BgL_res4905z00_2920 = BgL_new3728z00_2911;
					}} BgL_res4905z00_2920;
				}
				return BgL_new3722z00_2905;
			}
		}
	}



/* _make-cfuncall */
	obj_t BGl__makezd2cfuncallzd2zzcgen_copz00(obj_t BgL_envz00_4368,
		obj_t BgL_loc3718z00_4369, obj_t BgL_fun3719z00_4370,
		obj_t BgL_args3720z00_4371, obj_t BgL_strength3721z00_4372)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			return
				(obj_t) (BGl_makezd2cfuncallzd2zzcgen_copz00(BgL_loc3718z00_4369,
					(BgL_copz00_bglt) (BgL_fun3719z00_4370), BgL_args3720z00_4371,
					BgL_strength3721z00_4372));
		}
	}



/* fill-cfuncall! */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt
		BGl_fillzd2cfuncallz12zc0zzcgen_copz00(BgL_cfuncallz00_bglt
		BgL_new3728z00_168, obj_t BgL_loc3724z00_169,
		BgL_copz00_bglt BgL_fun3725z00_170, obj_t BgL_args3726z00_171,
		obj_t BgL_strength3727z00_172)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{	/* Cgen/cop.scm 77 */
				obj_t BgL_loc3724z00_4894;

				BgL_copz00_bglt BgL_fun3725z00_4895;

				obj_t BgL_args3726z00_4896;

				obj_t BgL_strength3727z00_4897;

				BgL_loc3724z00_4894 = BgL_loc3724z00_169;
				BgL_fun3725z00_4895 = BgL_fun3725z00_170;
				BgL_args3726z00_4896 = BgL_args3726z00_171;
				BgL_strength3727z00_4897 = BgL_strength3727z00_172;
				((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_168))->BgL_locz00) =
					((obj_t) BgL_loc3724z00_4894), BUNSPEC);
				((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_168))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun3725z00_4895), BUNSPEC);
				((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_168))->BgL_argsz00) =
					((obj_t) BgL_args3726z00_4896), BUNSPEC);
				((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_168))->BgL_strengthz00) =
					((obj_t) BgL_strength3727z00_4897), BUNSPEC);
				return BgL_new3728z00_168;
			}
		}
	}



/* _fill-cfuncall! */
	obj_t BGl__fillzd2cfuncallz12zc0zzcgen_copz00(obj_t BgL_envz00_4373,
		obj_t BgL_new3728z00_4374, obj_t BgL_loc3724z00_4375,
		obj_t BgL_fun3725z00_4376, obj_t BgL_args3726z00_4377,
		obj_t BgL_strength3727z00_4378)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{	/* Cgen/cop.scm 77 */
				BgL_cfuncallz00_bglt BgL_auxz00_6038;

				{	/* Cgen/cop.scm 77 */
					BgL_cfuncallz00_bglt BgL_res5063z00_4907;

					{	/* Cgen/cop.scm 77 */
						BgL_cfuncallz00_bglt BgL_new3728z00_4898;

						BgL_copz00_bglt BgL_fun3725z00_4900;

						obj_t BgL_strength3727z00_4902;

						BgL_new3728z00_4898 = (BgL_cfuncallz00_bglt) (BgL_new3728z00_4374);
						BgL_fun3725z00_4900 = (BgL_copz00_bglt) (BgL_fun3725z00_4376);
						BgL_strength3727z00_4902 = BgL_strength3727z00_4378;
						{	/* Cgen/cop.scm 77 */
							obj_t BgL_loc3724z00_4903;

							BgL_copz00_bglt BgL_fun3725z00_4904;

							obj_t BgL_args3726z00_4905;

							obj_t BgL_strength3727z00_4906;

							BgL_loc3724z00_4903 = BgL_loc3724z00_4375;
							BgL_fun3725z00_4904 = BgL_fun3725z00_4900;
							BgL_args3726z00_4905 = BgL_args3726z00_4377;
							BgL_strength3727z00_4906 = BgL_strength3727z00_4902;
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_4898))->
									BgL_locz00) = ((obj_t) BgL_loc3724z00_4903), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_4898))->
									BgL_funz00) =
								((BgL_copz00_bglt) BgL_fun3725z00_4904), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_4898))->
									BgL_argsz00) = ((obj_t) BgL_args3726z00_4905), BUNSPEC);
							((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_4898))->
									BgL_strengthz00) =
								((obj_t) BgL_strength3727z00_4906), BUNSPEC);
							BgL_res5063z00_4907 = BgL_new3728z00_4898;
						}
					}
					BgL_auxz00_6038 = BgL_res5063z00_4907;
				}
				return (obj_t) (BgL_auxz00_6038);
			}
		}
	}



/* %allocate-cfuncall */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt
		BGl_z52allocatezd2cfuncallz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{	/* Cgen/cop.scm 77 */
				BgL_cfuncallz00_bglt BgL_new3734z00_4908;

				BgL_new3734z00_4908 =
					((BgL_cfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cfuncallz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3734z00_4908),
					BGl_classzd2numzd2zz__objectz00(BGl_cfuncallz00zzcgen_copz00));
				{	/* Cgen/cop.scm 77 */
					BgL_objectz00_bglt BgL_auxz00_6050;

					BgL_auxz00_6050 = (BgL_objectz00_bglt) (BgL_new3734z00_4908);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6050, BFALSE);
				}
				return BgL_new3734z00_4908;
			}
		}
	}



/* _%allocate-cfuncall */
	obj_t BGl__z52allocatezd2cfuncallz80zzcgen_copz00(obj_t BgL_envz00_4205)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{	/* Cgen/cop.scm 77 */
				BgL_cfuncallz00_bglt BgL_auxz00_6053;

				{	/* Cgen/cop.scm 77 */
					BgL_cfuncallz00_bglt BgL_res5064z00_4912;

					{	/* Cgen/cop.scm 77 */
						BgL_cfuncallz00_bglt BgL_new3734z00_4910;

						BgL_new3734z00_4910 =
							((BgL_cfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfuncallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3734z00_4910),
							BGl_classzd2numzd2zz__objectz00(BGl_cfuncallz00zzcgen_copz00));
						{	/* Cgen/cop.scm 77 */
							BgL_objectz00_bglt BgL_auxz00_6058;

							BgL_auxz00_6058 = (BgL_objectz00_bglt) (BgL_new3734z00_4910);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6058, BFALSE);
						}
						BgL_res5064z00_4912 = BgL_new3734z00_4910;
					}
					BgL_auxz00_6053 = BgL_res5064z00_4912;
				}
				return (obj_t) (BgL_auxz00_6053);
			}
		}
	}



/* cfuncall-nil */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt BGl_cfuncallzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			if ((BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 77 */
					{	/* Cgen/cop.scm 77 */
						BgL_cfuncallz00_bglt BgL_res4906z00_2933;

						{	/* Cgen/cop.scm 77 */
							BgL_cfuncallz00_bglt BgL_new3734z00_2929;

							BgL_new3734z00_2929 =
								((BgL_cfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfuncallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3734z00_2929),
								BGl_classzd2numzd2zz__objectz00(BGl_cfuncallz00zzcgen_copz00));
							{	/* Cgen/cop.scm 77 */
								BgL_objectz00_bglt BgL_auxz00_6068;

								BgL_auxz00_6068 = (BgL_objectz00_bglt) (BgL_new3734z00_2929);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6068, BFALSE);
							}
							BgL_res4906z00_2933 = BgL_new3734z00_2929;
						}
						BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4906z00_2933);
					}
					{	/* Cgen/cop.scm 77 */
						BgL_copz00_bglt BgL_arg4516z00_1408;

						obj_t BgL_arg4517z00_1409;

						BgL_arg4516z00_1408 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4517z00_1409 = CNST_TABLE_REF(((long) 28));
						{	/* Cgen/cop.scm 77 */
							BgL_cfuncallz00_bglt BgL_res4907z00_2943;

							{	/* Cgen/cop.scm 77 */
								BgL_cfuncallz00_bglt BgL_new3728z00_2934;

								BgL_new3728z00_2934 =
									(BgL_cfuncallz00_bglt)
									(BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 77 */
									obj_t BgL_loc3724z00_2939;

									BgL_copz00_bglt BgL_fun3725z00_2940;

									obj_t BgL_args3726z00_2941;

									obj_t BgL_strength3727z00_2942;

									BgL_loc3724z00_2939 = BUNSPEC;
									BgL_fun3725z00_2940 = BgL_arg4516z00_1408;
									BgL_args3726z00_2941 = BUNSPEC;
									BgL_strength3727z00_2942 = BgL_arg4517z00_1409;
									((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2934))->
											BgL_locz00) = ((obj_t) BgL_loc3724z00_2939), BUNSPEC);
									((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2934))->
											BgL_funz00) =
										((BgL_copz00_bglt) BgL_fun3725z00_2940), BUNSPEC);
									((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2934))->
											BgL_argsz00) = ((obj_t) BgL_args3726z00_2941), BUNSPEC);
									((((BgL_cfuncallz00_bglt) CREF(BgL_new3728z00_2934))->
											BgL_strengthz00) =
										((obj_t) BgL_strength3727z00_2942), BUNSPEC);
									BgL_res4907z00_2943 = BgL_new3728z00_2934;
							}}
							(obj_t) (BgL_res4907z00_2943);
				}}}
			else
				{	/* Cgen/cop.scm 77 */
					BFALSE;
				}
			return
				(BgL_cfuncallz00_bglt) (BGl_z52thezd2cfuncallzd2nilz52zzcgen_copz00);
		}
	}



/* _cfuncall-nil */
	obj_t BGl__cfuncallzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4206)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			return (obj_t) (BGl_cfuncallzd2nilzd2zzcgen_copz00());
		}
	}



/* local-var? */
	BGL_EXPORTED_DEF bool_t BGl_localzd2varzf3z21zzcgen_copz00(obj_t
		BgL_obj3711z00_176)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3711z00_176,
				BGl_localzd2varzd2zzcgen_copz00);
		}
	}



/* _local-var? */
	obj_t BGl__localzd2varzf3z21zzcgen_copz00(obj_t BgL_envz00_4203,
		obj_t BgL_obj3711z00_4204)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3711z00_4204,
					BGl_localzd2varzd2zzcgen_copz00));
		}
	}



/* make-local-var */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_makezd2localzd2varz00zzcgen_copz00(obj_t BgL_loc3690z00_180,
		obj_t BgL_vars3691z00_181)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{	/* Cgen/cop.scm 74 */
				BgL_localzd2varzd2_bglt BgL_new3692z00_2944;

				{	/* Cgen/cop.scm 74 */
					BgL_localzd2varzd2_bglt BgL_res4908z00_2949;

					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_new3700z00_2945;

						BgL_new3700z00_2945 =
							((BgL_localzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localzd2varzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3700z00_2945),
							BGl_classzd2numzd2zz__objectz00(BGl_localzd2varzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 74 */
							BgL_objectz00_bglt BgL_auxz00_6090;

							BgL_auxz00_6090 = (BgL_objectz00_bglt) (BgL_new3700z00_2945);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6090, BFALSE);
						}
						BgL_res4908z00_2949 = BgL_new3700z00_2945;
					}
					BgL_new3692z00_2944 = BgL_res4908z00_2949;
				}
				{	/* Cgen/cop.scm 74 */
					BgL_localzd2varzd2_bglt BgL_res4909z00_2955;

					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_new3696z00_2950;

						BgL_new3696z00_2950 = BgL_new3692z00_2944;
						{	/* Cgen/cop.scm 74 */
							obj_t BgL_loc3694z00_2953;

							obj_t BgL_vars3695z00_2954;

							BgL_loc3694z00_2953 = BgL_loc3690z00_180;
							BgL_vars3695z00_2954 = BgL_vars3691z00_181;
							((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_2950))->
									BgL_locz00) = ((obj_t) BgL_loc3694z00_2953), BUNSPEC);
							((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_2950))->
									BgL_varsz00) = ((obj_t) BgL_vars3695z00_2954), BUNSPEC);
							BgL_res4909z00_2955 = BgL_new3696z00_2950;
					}} BgL_res4909z00_2955;
				}
				return BgL_new3692z00_2944;
			}
		}
	}



/* _make-local-var */
	obj_t BGl__makezd2localzd2varz00zzcgen_copz00(obj_t BgL_envz00_4379,
		obj_t BgL_loc3690z00_4380, obj_t BgL_vars3691z00_4381)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			return
				(obj_t) (BGl_makezd2localzd2varz00zzcgen_copz00(BgL_loc3690z00_4380,
					BgL_vars3691z00_4381));
		}
	}



/* fill-local-var! */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_fillzd2localzd2varz12z12zzcgen_copz00(BgL_localzd2varzd2_bglt
		BgL_new3696z00_182, obj_t BgL_loc3694z00_183, obj_t BgL_vars3695z00_184)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{	/* Cgen/cop.scm 74 */
				obj_t BgL_loc3694z00_4914;

				obj_t BgL_vars3695z00_4915;

				BgL_loc3694z00_4914 = BgL_loc3694z00_183;
				BgL_vars3695z00_4915 = BgL_vars3695z00_184;
				((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_182))->BgL_locz00) =
					((obj_t) BgL_loc3694z00_4914), BUNSPEC);
				((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_182))->BgL_varsz00) =
					((obj_t) BgL_vars3695z00_4915), BUNSPEC);
				return BgL_new3696z00_182;
			}
		}
	}



/* _fill-local-var! */
	obj_t BGl__fillzd2localzd2varz12z12zzcgen_copz00(obj_t BgL_envz00_4382,
		obj_t BgL_new3696z00_4383, obj_t BgL_loc3694z00_4384,
		obj_t BgL_vars3695z00_4385)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{	/* Cgen/cop.scm 74 */
				BgL_localzd2varzd2_bglt BgL_auxz00_6099;

				{	/* Cgen/cop.scm 74 */
					BgL_localzd2varzd2_bglt BgL_res5065z00_4921;

					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_new3696z00_4916;

						BgL_new3696z00_4916 =
							(BgL_localzd2varzd2_bglt) (BgL_new3696z00_4383);
						{	/* Cgen/cop.scm 74 */
							obj_t BgL_loc3694z00_4919;

							obj_t BgL_vars3695z00_4920;

							BgL_loc3694z00_4919 = BgL_loc3694z00_4384;
							BgL_vars3695z00_4920 = BgL_vars3695z00_4385;
							((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_4916))->
									BgL_locz00) = ((obj_t) BgL_loc3694z00_4919), BUNSPEC);
							((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_4916))->
									BgL_varsz00) = ((obj_t) BgL_vars3695z00_4920), BUNSPEC);
							BgL_res5065z00_4921 = BgL_new3696z00_4916;
						}
					}
					BgL_auxz00_6099 = BgL_res5065z00_4921;
				}
				return (obj_t) (BgL_auxz00_6099);
			}
		}
	}



/* %allocate-local-var */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_z52allocatezd2localzd2varz52zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{	/* Cgen/cop.scm 74 */
				BgL_localzd2varzd2_bglt BgL_new3700z00_4922;

				BgL_new3700z00_4922 =
					((BgL_localzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzd2varzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3700z00_4922),
					BGl_classzd2numzd2zz__objectz00(BGl_localzd2varzd2zzcgen_copz00));
				{	/* Cgen/cop.scm 74 */
					BgL_objectz00_bglt BgL_auxz00_6108;

					BgL_auxz00_6108 = (BgL_objectz00_bglt) (BgL_new3700z00_4922);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6108, BFALSE);
				}
				return BgL_new3700z00_4922;
			}
		}
	}



/* _%allocate-local-var */
	obj_t BGl__z52allocatezd2localzd2varz52zzcgen_copz00(obj_t BgL_envz00_4201)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{	/* Cgen/cop.scm 74 */
				BgL_localzd2varzd2_bglt BgL_auxz00_6111;

				{	/* Cgen/cop.scm 74 */
					BgL_localzd2varzd2_bglt BgL_res5066z00_4926;

					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_new3700z00_4924;

						BgL_new3700z00_4924 =
							((BgL_localzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localzd2varzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3700z00_4924),
							BGl_classzd2numzd2zz__objectz00(BGl_localzd2varzd2zzcgen_copz00));
						{	/* Cgen/cop.scm 74 */
							BgL_objectz00_bglt BgL_auxz00_6116;

							BgL_auxz00_6116 = (BgL_objectz00_bglt) (BgL_new3700z00_4924);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6116, BFALSE);
						}
						BgL_res5066z00_4926 = BgL_new3700z00_4924;
					}
					BgL_auxz00_6111 = BgL_res5066z00_4926;
				}
				return (obj_t) (BgL_auxz00_6111);
			}
		}
	}



/* local-var-nil */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_localzd2varzd2nilz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			if ((BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 74 */
					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_res4910z00_2966;

						{	/* Cgen/cop.scm 74 */
							BgL_localzd2varzd2_bglt BgL_new3700z00_2962;

							BgL_new3700z00_2962 =
								((BgL_localzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localzd2varzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3700z00_2962),
								BGl_classzd2numzd2zz__objectz00
								(BGl_localzd2varzd2zzcgen_copz00));
							{	/* Cgen/cop.scm 74 */
								BgL_objectz00_bglt BgL_auxz00_6126;

								BgL_auxz00_6126 = (BgL_objectz00_bglt) (BgL_new3700z00_2962);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6126, BFALSE);
							}
							BgL_res4910z00_2966 = BgL_new3700z00_2962;
						}
						BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00 =
							(obj_t) (BgL_res4910z00_2966);
					}
					{	/* Cgen/cop.scm 74 */
						BgL_localzd2varzd2_bglt BgL_res4911z00_2972;

						{	/* Cgen/cop.scm 74 */
							BgL_localzd2varzd2_bglt BgL_new3696z00_2967;

							BgL_new3696z00_2967 =
								(BgL_localzd2varzd2_bglt)
								(BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00);
							{	/* Cgen/cop.scm 74 */
								obj_t BgL_loc3694z00_2970;

								obj_t BgL_vars3695z00_2971;

								BgL_loc3694z00_2970 = BUNSPEC;
								BgL_vars3695z00_2971 = BUNSPEC;
								((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_2967))->
										BgL_locz00) = ((obj_t) BgL_loc3694z00_2970), BUNSPEC);
								((((BgL_localzd2varzd2_bglt) CREF(BgL_new3696z00_2967))->
										BgL_varsz00) = ((obj_t) BgL_vars3695z00_2971), BUNSPEC);
								BgL_res4911z00_2972 = BgL_new3696z00_2967;
						}}
						(obj_t) (BgL_res4911z00_2972);
				}}
			else
				{	/* Cgen/cop.scm 74 */
					BFALSE;
				}
			return
				(BgL_localzd2varzd2_bglt)
				(BGl_z52thezd2localzd2varzd2nilz80zzcgen_copz00);
		}
	}



/* _local-var-nil */
	obj_t BGl__localzd2varzd2nilz00zzcgen_copz00(obj_t BgL_envz00_4202)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			return (obj_t) (BGl_localzd2varzd2nilz00zzcgen_copz00());
		}
	}



/* cif? */
	BGL_EXPORTED_DEF bool_t BGl_cifzf3zf3zzcgen_copz00(obj_t BgL_obj3685z00_186)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3685z00_186,
				BGl_cifz00zzcgen_copz00);
		}
	}



/* _cif? */
	obj_t BGl__cifzf3zf3zzcgen_copz00(obj_t BgL_envz00_4199,
		obj_t BgL_obj3685z00_4200)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3685z00_4200,
					BGl_cifz00zzcgen_copz00));
		}
	}



/* make-cif */
	BGL_EXPORTED_DEF BgL_cifz00_bglt BGl_makezd2cifzd2zzcgen_copz00(obj_t
		BgL_loc3650z00_190, BgL_copz00_bglt BgL_test3651z00_191,
		BgL_copz00_bglt BgL_true3652z00_192, BgL_copz00_bglt BgL_false3653z00_193)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{	/* Cgen/cop.scm 69 */
				BgL_cifz00_bglt BgL_new3654z00_2973;

				{	/* Cgen/cop.scm 69 */
					BgL_cifz00_bglt BgL_res4912z00_2978;

					{	/* Cgen/cop.scm 69 */
						BgL_cifz00_bglt BgL_new3666z00_2974;

						BgL_new3666z00_2974 =
							((BgL_cifz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cifz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3666z00_2974),
							BGl_classzd2numzd2zz__objectz00(BGl_cifz00zzcgen_copz00));
						{	/* Cgen/cop.scm 69 */
							BgL_objectz00_bglt BgL_auxz00_6144;

							BgL_auxz00_6144 = (BgL_objectz00_bglt) (BgL_new3666z00_2974);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6144, BFALSE);
						}
						BgL_res4912z00_2978 = BgL_new3666z00_2974;
					}
					BgL_new3654z00_2973 = BgL_res4912z00_2978;
				}
				{	/* Cgen/cop.scm 69 */
					BgL_cifz00_bglt BgL_res4913z00_2988;

					{	/* Cgen/cop.scm 69 */
						BgL_cifz00_bglt BgL_new3660z00_2979;

						BgL_new3660z00_2979 = BgL_new3654z00_2973;
						{	/* Cgen/cop.scm 69 */
							obj_t BgL_loc3656z00_2984;

							BgL_copz00_bglt BgL_test3657z00_2985;

							BgL_copz00_bglt BgL_true3658z00_2986;

							BgL_copz00_bglt BgL_false3659z00_2987;

							BgL_loc3656z00_2984 = BgL_loc3650z00_190;
							BgL_test3657z00_2985 = BgL_test3651z00_191;
							BgL_true3658z00_2986 = BgL_true3652z00_192;
							BgL_false3659z00_2987 = BgL_false3653z00_193;
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_2979))->BgL_locz00) =
								((obj_t) BgL_loc3656z00_2984), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_2979))->BgL_testz00) =
								((BgL_copz00_bglt) BgL_test3657z00_2985), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_2979))->BgL_truez00) =
								((BgL_copz00_bglt) BgL_true3658z00_2986), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_2979))->BgL_falsez00) =
								((BgL_copz00_bglt) BgL_false3659z00_2987), BUNSPEC);
							BgL_res4913z00_2988 = BgL_new3660z00_2979;
					}} BgL_res4913z00_2988;
				}
				return BgL_new3654z00_2973;
			}
		}
	}



/* _make-cif */
	obj_t BGl__makezd2cifzd2zzcgen_copz00(obj_t BgL_envz00_4386,
		obj_t BgL_loc3650z00_4387, obj_t BgL_test3651z00_4388,
		obj_t BgL_true3652z00_4389, obj_t BgL_false3653z00_4390)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			return
				(obj_t) (BGl_makezd2cifzd2zzcgen_copz00(BgL_loc3650z00_4387,
					(BgL_copz00_bglt) (BgL_test3651z00_4388),
					(BgL_copz00_bglt) (BgL_true3652z00_4389),
					(BgL_copz00_bglt) (BgL_false3653z00_4390)));
		}
	}



/* fill-cif! */
	BGL_EXPORTED_DEF BgL_cifz00_bglt
		BGl_fillzd2cifz12zc0zzcgen_copz00(BgL_cifz00_bglt BgL_new3660z00_194,
		obj_t BgL_loc3656z00_195, BgL_copz00_bglt BgL_test3657z00_196,
		BgL_copz00_bglt BgL_true3658z00_197, BgL_copz00_bglt BgL_false3659z00_198)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{	/* Cgen/cop.scm 69 */
				obj_t BgL_loc3656z00_4928;

				BgL_copz00_bglt BgL_test3657z00_4929;

				BgL_copz00_bglt BgL_true3658z00_4930;

				BgL_copz00_bglt BgL_false3659z00_4931;

				BgL_loc3656z00_4928 = BgL_loc3656z00_195;
				BgL_test3657z00_4929 = BgL_test3657z00_196;
				BgL_true3658z00_4930 = BgL_true3658z00_197;
				BgL_false3659z00_4931 = BgL_false3659z00_198;
				((((BgL_cifz00_bglt) CREF(BgL_new3660z00_194))->BgL_locz00) =
					((obj_t) BgL_loc3656z00_4928), BUNSPEC);
				((((BgL_cifz00_bglt) CREF(BgL_new3660z00_194))->BgL_testz00) =
					((BgL_copz00_bglt) BgL_test3657z00_4929), BUNSPEC);
				((((BgL_cifz00_bglt) CREF(BgL_new3660z00_194))->BgL_truez00) =
					((BgL_copz00_bglt) BgL_true3658z00_4930), BUNSPEC);
				((((BgL_cifz00_bglt) CREF(BgL_new3660z00_194))->BgL_falsez00) =
					((BgL_copz00_bglt) BgL_false3659z00_4931), BUNSPEC);
				return BgL_new3660z00_194;
			}
		}
	}



/* _fill-cif! */
	obj_t BGl__fillzd2cifz12zc0zzcgen_copz00(obj_t BgL_envz00_4391,
		obj_t BgL_new3660z00_4392, obj_t BgL_loc3656z00_4393,
		obj_t BgL_test3657z00_4394, obj_t BgL_true3658z00_4395,
		obj_t BgL_false3659z00_4396)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{	/* Cgen/cop.scm 69 */
				BgL_cifz00_bglt BgL_auxz00_6160;

				{	/* Cgen/cop.scm 69 */
					BgL_cifz00_bglt BgL_res5067z00_4941;

					{	/* Cgen/cop.scm 69 */
						BgL_cifz00_bglt BgL_new3660z00_4932;

						BgL_copz00_bglt BgL_test3657z00_4934;

						BgL_copz00_bglt BgL_true3658z00_4935;

						BgL_copz00_bglt BgL_false3659z00_4936;

						BgL_new3660z00_4932 = (BgL_cifz00_bglt) (BgL_new3660z00_4392);
						BgL_test3657z00_4934 = (BgL_copz00_bglt) (BgL_test3657z00_4394);
						BgL_true3658z00_4935 = (BgL_copz00_bglt) (BgL_true3658z00_4395);
						BgL_false3659z00_4936 = (BgL_copz00_bglt) (BgL_false3659z00_4396);
						{	/* Cgen/cop.scm 69 */
							obj_t BgL_loc3656z00_4937;

							BgL_copz00_bglt BgL_test3657z00_4938;

							BgL_copz00_bglt BgL_true3658z00_4939;

							BgL_copz00_bglt BgL_false3659z00_4940;

							BgL_loc3656z00_4937 = BgL_loc3656z00_4393;
							BgL_test3657z00_4938 = BgL_test3657z00_4934;
							BgL_true3658z00_4939 = BgL_true3658z00_4935;
							BgL_false3659z00_4940 = BgL_false3659z00_4936;
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_4932))->BgL_locz00) =
								((obj_t) BgL_loc3656z00_4937), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_4932))->BgL_testz00) =
								((BgL_copz00_bglt) BgL_test3657z00_4938), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_4932))->BgL_truez00) =
								((BgL_copz00_bglt) BgL_true3658z00_4939), BUNSPEC);
							((((BgL_cifz00_bglt) CREF(BgL_new3660z00_4932))->BgL_falsez00) =
								((BgL_copz00_bglt) BgL_false3659z00_4940), BUNSPEC);
							BgL_res5067z00_4941 = BgL_new3660z00_4932;
						}
					}
					BgL_auxz00_6160 = BgL_res5067z00_4941;
				}
				return (obj_t) (BgL_auxz00_6160);
			}
		}
	}



/* %allocate-cif */
	BGL_EXPORTED_DEF BgL_cifz00_bglt BGl_z52allocatezd2cifz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{	/* Cgen/cop.scm 69 */
				BgL_cifz00_bglt BgL_new3666z00_4942;

				BgL_new3666z00_4942 =
					((BgL_cifz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cifz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3666z00_4942),
					BGl_classzd2numzd2zz__objectz00(BGl_cifz00zzcgen_copz00));
				{	/* Cgen/cop.scm 69 */
					BgL_objectz00_bglt BgL_auxz00_6174;

					BgL_auxz00_6174 = (BgL_objectz00_bglt) (BgL_new3666z00_4942);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6174, BFALSE);
				}
				return BgL_new3666z00_4942;
			}
		}
	}



/* _%allocate-cif */
	obj_t BGl__z52allocatezd2cifz80zzcgen_copz00(obj_t BgL_envz00_4197)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{	/* Cgen/cop.scm 69 */
				BgL_cifz00_bglt BgL_auxz00_6177;

				{	/* Cgen/cop.scm 69 */
					BgL_cifz00_bglt BgL_res5068z00_4946;

					{	/* Cgen/cop.scm 69 */
						BgL_cifz00_bglt BgL_new3666z00_4944;

						BgL_new3666z00_4944 =
							((BgL_cifz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cifz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3666z00_4944),
							BGl_classzd2numzd2zz__objectz00(BGl_cifz00zzcgen_copz00));
						{	/* Cgen/cop.scm 69 */
							BgL_objectz00_bglt BgL_auxz00_6182;

							BgL_auxz00_6182 = (BgL_objectz00_bglt) (BgL_new3666z00_4944);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6182, BFALSE);
						}
						BgL_res5068z00_4946 = BgL_new3666z00_4944;
					}
					BgL_auxz00_6177 = BgL_res5068z00_4946;
				}
				return (obj_t) (BgL_auxz00_6177);
			}
		}
	}



/* cif-nil */
	BGL_EXPORTED_DEF BgL_cifz00_bglt BGl_cifzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			if ((BGl_z52thezd2cifzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 69 */
					{	/* Cgen/cop.scm 69 */
						BgL_cifz00_bglt BgL_res4914z00_3001;

						{	/* Cgen/cop.scm 69 */
							BgL_cifz00_bglt BgL_new3666z00_2997;

							BgL_new3666z00_2997 =
								((BgL_cifz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cifz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3666z00_2997),
								BGl_classzd2numzd2zz__objectz00(BGl_cifz00zzcgen_copz00));
							{	/* Cgen/cop.scm 69 */
								BgL_objectz00_bglt BgL_auxz00_6192;

								BgL_auxz00_6192 = (BgL_objectz00_bglt) (BgL_new3666z00_2997);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6192, BFALSE);
							}
							BgL_res4914z00_3001 = BgL_new3666z00_2997;
						}
						BGl_z52thezd2cifzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4914z00_3001);
					}
					{	/* Cgen/cop.scm 69 */
						BgL_copz00_bglt BgL_arg4522z00_1424;

						BgL_copz00_bglt BgL_arg4523z00_1425;

						BgL_copz00_bglt BgL_arg4524z00_1426;

						BgL_arg4522z00_1424 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4523z00_1425 = BGl_copzd2nilzd2zzcgen_copz00();
						BgL_arg4524z00_1426 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 69 */
							BgL_cifz00_bglt BgL_res4915z00_3011;

							{	/* Cgen/cop.scm 69 */
								BgL_cifz00_bglt BgL_new3660z00_3002;

								BgL_new3660z00_3002 =
									(BgL_cifz00_bglt) (BGl_z52thezd2cifzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 69 */
									obj_t BgL_loc3656z00_3007;

									BgL_copz00_bglt BgL_test3657z00_3008;

									BgL_copz00_bglt BgL_true3658z00_3009;

									BgL_copz00_bglt BgL_false3659z00_3010;

									BgL_loc3656z00_3007 = BUNSPEC;
									BgL_test3657z00_3008 = BgL_arg4522z00_1424;
									BgL_true3658z00_3009 = BgL_arg4523z00_1425;
									BgL_false3659z00_3010 = BgL_arg4524z00_1426;
									((((BgL_cifz00_bglt) CREF(BgL_new3660z00_3002))->BgL_locz00) =
										((obj_t) BgL_loc3656z00_3007), BUNSPEC);
									((((BgL_cifz00_bglt) CREF(BgL_new3660z00_3002))->
											BgL_testz00) =
										((BgL_copz00_bglt) BgL_test3657z00_3008), BUNSPEC);
									((((BgL_cifz00_bglt) CREF(BgL_new3660z00_3002))->
											BgL_truez00) =
										((BgL_copz00_bglt) BgL_true3658z00_3009), BUNSPEC);
									((((BgL_cifz00_bglt) CREF(BgL_new3660z00_3002))->
											BgL_falsez00) =
										((BgL_copz00_bglt) BgL_false3659z00_3010), BUNSPEC);
									BgL_res4915z00_3011 = BgL_new3660z00_3002;
							}}
							(obj_t) (BgL_res4915z00_3011);
				}}}
			else
				{	/* Cgen/cop.scm 69 */
					BFALSE;
				}
			return (BgL_cifz00_bglt) (BGl_z52thezd2cifzd2nilz52zzcgen_copz00);
		}
	}



/* _cif-nil */
	obj_t BGl__cifzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4198)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			return (obj_t) (BGl_cifzd2nilzd2zzcgen_copz00());
		}
	}



/* csetq? */
	BGL_EXPORTED_DEF bool_t BGl_csetqzf3zf3zzcgen_copz00(obj_t BgL_obj3643z00_202)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3643z00_202,
				BGl_csetqz00zzcgen_copz00);
		}
	}



/* _csetq? */
	obj_t BGl__csetqzf3zf3zzcgen_copz00(obj_t BgL_envz00_4195,
		obj_t BgL_obj3643z00_4196)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3643z00_4196,
					BGl_csetqz00zzcgen_copz00));
		}
	}



/* make-csetq */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t
		BgL_loc3615z00_206, BgL_varcz00_bglt BgL_var3616z00_207,
		BgL_copz00_bglt BgL_value3617z00_208)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{	/* Cgen/cop.scm 65 */
				BgL_csetqz00_bglt BgL_new3618z00_3012;

				{	/* Cgen/cop.scm 65 */
					BgL_csetqz00_bglt BgL_res4916z00_3017;

					{	/* Cgen/cop.scm 65 */
						BgL_csetqz00_bglt BgL_new3628z00_3013;

						BgL_new3628z00_3013 =
							((BgL_csetqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csetqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3628z00_3013),
							BGl_classzd2numzd2zz__objectz00(BGl_csetqz00zzcgen_copz00));
						{	/* Cgen/cop.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_6215;

							BgL_auxz00_6215 = (BgL_objectz00_bglt) (BgL_new3628z00_3013);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6215, BFALSE);
						}
						BgL_res4916z00_3017 = BgL_new3628z00_3013;
					}
					BgL_new3618z00_3012 = BgL_res4916z00_3017;
				}
				{	/* Cgen/cop.scm 65 */
					BgL_csetqz00_bglt BgL_res4917z00_3025;

					{	/* Cgen/cop.scm 65 */
						BgL_csetqz00_bglt BgL_new3623z00_3018;

						BgL_new3623z00_3018 = BgL_new3618z00_3012;
						{	/* Cgen/cop.scm 65 */
							obj_t BgL_loc3620z00_3022;

							BgL_varcz00_bglt BgL_var3621z00_3023;

							BgL_copz00_bglt BgL_value3622z00_3024;

							BgL_loc3620z00_3022 = BgL_loc3615z00_206;
							BgL_var3621z00_3023 = BgL_var3616z00_207;
							BgL_value3622z00_3024 = BgL_value3617z00_208;
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3018))->BgL_locz00) =
								((obj_t) BgL_loc3620z00_3022), BUNSPEC);
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3018))->BgL_varz00) =
								((BgL_varcz00_bglt) BgL_var3621z00_3023), BUNSPEC);
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3018))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3622z00_3024), BUNSPEC);
							BgL_res4917z00_3025 = BgL_new3623z00_3018;
					}} BgL_res4917z00_3025;
				}
				return BgL_new3618z00_3012;
			}
		}
	}



/* _make-csetq */
	obj_t BGl__makezd2csetqzd2zzcgen_copz00(obj_t BgL_envz00_4397,
		obj_t BgL_loc3615z00_4398, obj_t BgL_var3616z00_4399,
		obj_t BgL_value3617z00_4400)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			return
				(obj_t) (BGl_makezd2csetqzd2zzcgen_copz00(BgL_loc3615z00_4398,
					(BgL_varcz00_bglt) (BgL_var3616z00_4399),
					(BgL_copz00_bglt) (BgL_value3617z00_4400)));
		}
	}



/* fill-csetq! */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt
		BGl_fillzd2csetqz12zc0zzcgen_copz00(BgL_csetqz00_bglt BgL_new3623z00_209,
		obj_t BgL_loc3620z00_210, BgL_varcz00_bglt BgL_var3621z00_211,
		BgL_copz00_bglt BgL_value3622z00_212)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{	/* Cgen/cop.scm 65 */
				obj_t BgL_loc3620z00_4948;

				BgL_varcz00_bglt BgL_var3621z00_4949;

				BgL_copz00_bglt BgL_value3622z00_4950;

				BgL_loc3620z00_4948 = BgL_loc3620z00_210;
				BgL_var3621z00_4949 = BgL_var3621z00_211;
				BgL_value3622z00_4950 = BgL_value3622z00_212;
				((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_209))->BgL_locz00) =
					((obj_t) BgL_loc3620z00_4948), BUNSPEC);
				((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_209))->BgL_varz00) =
					((BgL_varcz00_bglt) BgL_var3621z00_4949), BUNSPEC);
				((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_209))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3622z00_4950), BUNSPEC);
				return BgL_new3623z00_209;
			}
		}
	}



/* _fill-csetq! */
	obj_t BGl__fillzd2csetqz12zc0zzcgen_copz00(obj_t BgL_envz00_4401,
		obj_t BgL_new3623z00_4402, obj_t BgL_loc3620z00_4403,
		obj_t BgL_var3621z00_4404, obj_t BgL_value3622z00_4405)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{	/* Cgen/cop.scm 65 */
				BgL_csetqz00_bglt BgL_auxz00_6228;

				{	/* Cgen/cop.scm 65 */
					BgL_csetqz00_bglt BgL_res5069z00_4958;

					{	/* Cgen/cop.scm 65 */
						BgL_csetqz00_bglt BgL_new3623z00_4951;

						BgL_varcz00_bglt BgL_var3621z00_4953;

						BgL_copz00_bglt BgL_value3622z00_4954;

						BgL_new3623z00_4951 = (BgL_csetqz00_bglt) (BgL_new3623z00_4402);
						BgL_var3621z00_4953 = (BgL_varcz00_bglt) (BgL_var3621z00_4404);
						BgL_value3622z00_4954 = (BgL_copz00_bglt) (BgL_value3622z00_4405);
						{	/* Cgen/cop.scm 65 */
							obj_t BgL_loc3620z00_4955;

							BgL_varcz00_bglt BgL_var3621z00_4956;

							BgL_copz00_bglt BgL_value3622z00_4957;

							BgL_loc3620z00_4955 = BgL_loc3620z00_4403;
							BgL_var3621z00_4956 = BgL_var3621z00_4953;
							BgL_value3622z00_4957 = BgL_value3622z00_4954;
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_4951))->BgL_locz00) =
								((obj_t) BgL_loc3620z00_4955), BUNSPEC);
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_4951))->BgL_varz00) =
								((BgL_varcz00_bglt) BgL_var3621z00_4956), BUNSPEC);
							((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_4951))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3622z00_4957), BUNSPEC);
							BgL_res5069z00_4958 = BgL_new3623z00_4951;
						}
					}
					BgL_auxz00_6228 = BgL_res5069z00_4958;
				}
				return (obj_t) (BgL_auxz00_6228);
			}
		}
	}



/* %allocate-csetq */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt BGl_z52allocatezd2csetqz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{	/* Cgen/cop.scm 65 */
				BgL_csetqz00_bglt BgL_new3628z00_4959;

				BgL_new3628z00_4959 =
					((BgL_csetqz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_csetqz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3628z00_4959),
					BGl_classzd2numzd2zz__objectz00(BGl_csetqz00zzcgen_copz00));
				{	/* Cgen/cop.scm 65 */
					BgL_objectz00_bglt BgL_auxz00_6240;

					BgL_auxz00_6240 = (BgL_objectz00_bglt) (BgL_new3628z00_4959);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6240, BFALSE);
				}
				return BgL_new3628z00_4959;
			}
		}
	}



/* _%allocate-csetq */
	obj_t BGl__z52allocatezd2csetqz80zzcgen_copz00(obj_t BgL_envz00_4193)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{	/* Cgen/cop.scm 65 */
				BgL_csetqz00_bglt BgL_auxz00_6243;

				{	/* Cgen/cop.scm 65 */
					BgL_csetqz00_bglt BgL_res5070z00_4963;

					{	/* Cgen/cop.scm 65 */
						BgL_csetqz00_bglt BgL_new3628z00_4961;

						BgL_new3628z00_4961 =
							((BgL_csetqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csetqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3628z00_4961),
							BGl_classzd2numzd2zz__objectz00(BGl_csetqz00zzcgen_copz00));
						{	/* Cgen/cop.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_6248;

							BgL_auxz00_6248 = (BgL_objectz00_bglt) (BgL_new3628z00_4961);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6248, BFALSE);
						}
						BgL_res5070z00_4963 = BgL_new3628z00_4961;
					}
					BgL_auxz00_6243 = BgL_res5070z00_4963;
				}
				return (obj_t) (BgL_auxz00_6243);
			}
		}
	}



/* csetq-nil */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt BGl_csetqzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			if ((BGl_z52thezd2csetqzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 65 */
					{	/* Cgen/cop.scm 65 */
						BgL_csetqz00_bglt BgL_res4918z00_3037;

						{	/* Cgen/cop.scm 65 */
							BgL_csetqz00_bglt BgL_new3628z00_3033;

							BgL_new3628z00_3033 =
								((BgL_csetqz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_csetqz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3628z00_3033),
								BGl_classzd2numzd2zz__objectz00(BGl_csetqz00zzcgen_copz00));
							{	/* Cgen/cop.scm 65 */
								BgL_objectz00_bglt BgL_auxz00_6258;

								BgL_auxz00_6258 = (BgL_objectz00_bglt) (BgL_new3628z00_3033);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6258, BFALSE);
							}
							BgL_res4918z00_3037 = BgL_new3628z00_3033;
						}
						BGl_z52thezd2csetqzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4918z00_3037);
					}
					{	/* Cgen/cop.scm 65 */
						BgL_varcz00_bglt BgL_arg4527z00_1434;

						BgL_copz00_bglt BgL_arg4528z00_1435;

						BgL_arg4527z00_1434 = BGl_varczd2nilzd2zzcgen_copz00();
						BgL_arg4528z00_1435 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 65 */
							BgL_csetqz00_bglt BgL_res4919z00_3045;

							{	/* Cgen/cop.scm 65 */
								BgL_csetqz00_bglt BgL_new3623z00_3038;

								BgL_new3623z00_3038 =
									(BgL_csetqz00_bglt)
									(BGl_z52thezd2csetqzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 65 */
									obj_t BgL_loc3620z00_3042;

									BgL_varcz00_bglt BgL_var3621z00_3043;

									BgL_copz00_bglt BgL_value3622z00_3044;

									BgL_loc3620z00_3042 = BUNSPEC;
									BgL_var3621z00_3043 = BgL_arg4527z00_1434;
									BgL_value3622z00_3044 = BgL_arg4528z00_1435;
									((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3038))->
											BgL_locz00) = ((obj_t) BgL_loc3620z00_3042), BUNSPEC);
									((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3038))->
											BgL_varz00) =
										((BgL_varcz00_bglt) BgL_var3621z00_3043), BUNSPEC);
									((((BgL_csetqz00_bglt) CREF(BgL_new3623z00_3038))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3622z00_3044), BUNSPEC);
									BgL_res4919z00_3045 = BgL_new3623z00_3038;
							}}
							(obj_t) (BgL_res4919z00_3045);
				}}}
			else
				{	/* Cgen/cop.scm 65 */
					BFALSE;
				}
			return (BgL_csetqz00_bglt) (BGl_z52thezd2csetqzd2nilz52zzcgen_copz00);
		}
	}



/* _csetq-nil */
	obj_t BGl__csetqzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4194)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			return (obj_t) (BGl_csetqzd2nilzd2zzcgen_copz00());
		}
	}



/* stop? */
	BGL_EXPORTED_DEF bool_t BGl_stopzf3zf3zzcgen_copz00(obj_t BgL_obj3609z00_215)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3609z00_215,
				BGl_stopz00zzcgen_copz00);
		}
	}



/* _stop? */
	obj_t BGl__stopzf3zf3zzcgen_copz00(obj_t BgL_envz00_4191,
		obj_t BgL_obj3609z00_4192)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3609z00_4192,
					BGl_stopz00zzcgen_copz00));
		}
	}



/* make-stop */
	BGL_EXPORTED_DEF BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t
		BgL_loc3588z00_219, BgL_copz00_bglt BgL_value3589z00_220)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_stopz00_bglt BgL_new3590z00_3046;

				{	/* Cgen/cop.scm 62 */
					BgL_stopz00_bglt BgL_res4920z00_3051;

					{	/* Cgen/cop.scm 62 */
						BgL_stopz00_bglt BgL_new3598z00_3047;

						BgL_new3598z00_3047 =
							((BgL_stopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_stopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3598z00_3047),
							BGl_classzd2numzd2zz__objectz00(BGl_stopz00zzcgen_copz00));
						{	/* Cgen/cop.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_6279;

							BgL_auxz00_6279 = (BgL_objectz00_bglt) (BgL_new3598z00_3047);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6279, BFALSE);
						}
						BgL_res4920z00_3051 = BgL_new3598z00_3047;
					}
					BgL_new3590z00_3046 = BgL_res4920z00_3051;
				}
				{	/* Cgen/cop.scm 62 */
					BgL_stopz00_bglt BgL_res4921z00_3057;

					{	/* Cgen/cop.scm 62 */
						BgL_stopz00_bglt BgL_new3594z00_3052;

						BgL_new3594z00_3052 = BgL_new3590z00_3046;
						{	/* Cgen/cop.scm 62 */
							obj_t BgL_loc3592z00_3055;

							BgL_copz00_bglt BgL_value3593z00_3056;

							BgL_loc3592z00_3055 = BgL_loc3588z00_219;
							BgL_value3593z00_3056 = BgL_value3589z00_220;
							((((BgL_stopz00_bglt) CREF(BgL_new3594z00_3052))->BgL_locz00) =
								((obj_t) BgL_loc3592z00_3055), BUNSPEC);
							((((BgL_stopz00_bglt) CREF(BgL_new3594z00_3052))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3593z00_3056), BUNSPEC);
							BgL_res4921z00_3057 = BgL_new3594z00_3052;
					}} BgL_res4921z00_3057;
				}
				return BgL_new3590z00_3046;
			}
		}
	}



/* _make-stop */
	obj_t BGl__makezd2stopzd2zzcgen_copz00(obj_t BgL_envz00_4406,
		obj_t BgL_loc3588z00_4407, obj_t BgL_value3589z00_4408)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			return
				(obj_t) (BGl_makezd2stopzd2zzcgen_copz00(BgL_loc3588z00_4407,
					(BgL_copz00_bglt) (BgL_value3589z00_4408)));
		}
	}



/* fill-stop! */
	BGL_EXPORTED_DEF BgL_stopz00_bglt
		BGl_fillzd2stopz12zc0zzcgen_copz00(BgL_stopz00_bglt BgL_new3594z00_221,
		obj_t BgL_loc3592z00_222, BgL_copz00_bglt BgL_value3593z00_223)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				obj_t BgL_loc3592z00_4965;

				BgL_copz00_bglt BgL_value3593z00_4966;

				BgL_loc3592z00_4965 = BgL_loc3592z00_222;
				BgL_value3593z00_4966 = BgL_value3593z00_223;
				((((BgL_stopz00_bglt) CREF(BgL_new3594z00_221))->BgL_locz00) =
					((obj_t) BgL_loc3592z00_4965), BUNSPEC);
				((((BgL_stopz00_bglt) CREF(BgL_new3594z00_221))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3593z00_4966), BUNSPEC);
				return BgL_new3594z00_221;
			}
		}
	}



/* _fill-stop! */
	obj_t BGl__fillzd2stopz12zc0zzcgen_copz00(obj_t BgL_envz00_4409,
		obj_t BgL_new3594z00_4410, obj_t BgL_loc3592z00_4411,
		obj_t BgL_value3593z00_4412)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_stopz00_bglt BgL_auxz00_6289;

				{	/* Cgen/cop.scm 62 */
					BgL_stopz00_bglt BgL_res5071z00_4972;

					{	/* Cgen/cop.scm 62 */
						BgL_stopz00_bglt BgL_new3594z00_4967;

						BgL_copz00_bglt BgL_value3593z00_4969;

						BgL_new3594z00_4967 = (BgL_stopz00_bglt) (BgL_new3594z00_4410);
						BgL_value3593z00_4969 = (BgL_copz00_bglt) (BgL_value3593z00_4412);
						{	/* Cgen/cop.scm 62 */
							obj_t BgL_loc3592z00_4970;

							BgL_copz00_bglt BgL_value3593z00_4971;

							BgL_loc3592z00_4970 = BgL_loc3592z00_4411;
							BgL_value3593z00_4971 = BgL_value3593z00_4969;
							((((BgL_stopz00_bglt) CREF(BgL_new3594z00_4967))->BgL_locz00) =
								((obj_t) BgL_loc3592z00_4970), BUNSPEC);
							((((BgL_stopz00_bglt) CREF(BgL_new3594z00_4967))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3593z00_4971), BUNSPEC);
							BgL_res5071z00_4972 = BgL_new3594z00_4967;
						}
					}
					BgL_auxz00_6289 = BgL_res5071z00_4972;
				}
				return (obj_t) (BgL_auxz00_6289);
			}
		}
	}



/* %allocate-stop */
	BGL_EXPORTED_DEF BgL_stopz00_bglt BGl_z52allocatezd2stopz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_stopz00_bglt BgL_new3598z00_4973;

				BgL_new3598z00_4973 =
					((BgL_stopz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_stopz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3598z00_4973),
					BGl_classzd2numzd2zz__objectz00(BGl_stopz00zzcgen_copz00));
				{	/* Cgen/cop.scm 62 */
					BgL_objectz00_bglt BgL_auxz00_6299;

					BgL_auxz00_6299 = (BgL_objectz00_bglt) (BgL_new3598z00_4973);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6299, BFALSE);
				}
				return BgL_new3598z00_4973;
			}
		}
	}



/* _%allocate-stop */
	obj_t BGl__z52allocatezd2stopz80zzcgen_copz00(obj_t BgL_envz00_4189)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_stopz00_bglt BgL_auxz00_6302;

				{	/* Cgen/cop.scm 62 */
					BgL_stopz00_bglt BgL_res5072z00_4977;

					{	/* Cgen/cop.scm 62 */
						BgL_stopz00_bglt BgL_new3598z00_4975;

						BgL_new3598z00_4975 =
							((BgL_stopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_stopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3598z00_4975),
							BGl_classzd2numzd2zz__objectz00(BGl_stopz00zzcgen_copz00));
						{	/* Cgen/cop.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_6307;

							BgL_auxz00_6307 = (BgL_objectz00_bglt) (BgL_new3598z00_4975);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6307, BFALSE);
						}
						BgL_res5072z00_4977 = BgL_new3598z00_4975;
					}
					BgL_auxz00_6302 = BgL_res5072z00_4977;
				}
				return (obj_t) (BgL_auxz00_6302);
			}
		}
	}



/* stop-nil */
	BGL_EXPORTED_DEF BgL_stopz00_bglt BGl_stopzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			if ((BGl_z52thezd2stopzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 62 */
					{	/* Cgen/cop.scm 62 */
						BgL_stopz00_bglt BgL_res4922z00_3068;

						{	/* Cgen/cop.scm 62 */
							BgL_stopz00_bglt BgL_new3598z00_3064;

							BgL_new3598z00_3064 =
								((BgL_stopz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_stopz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3598z00_3064),
								BGl_classzd2numzd2zz__objectz00(BGl_stopz00zzcgen_copz00));
							{	/* Cgen/cop.scm 62 */
								BgL_objectz00_bglt BgL_auxz00_6317;

								BgL_auxz00_6317 = (BgL_objectz00_bglt) (BgL_new3598z00_3064);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6317, BFALSE);
							}
							BgL_res4922z00_3068 = BgL_new3598z00_3064;
						}
						BGl_z52thezd2stopzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4922z00_3068);
					}
					{	/* Cgen/cop.scm 62 */
						BgL_copz00_bglt BgL_arg4531z00_1442;

						BgL_arg4531z00_1442 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 62 */
							BgL_stopz00_bglt BgL_res4923z00_3074;

							{	/* Cgen/cop.scm 62 */
								BgL_stopz00_bglt BgL_new3594z00_3069;

								BgL_new3594z00_3069 =
									(BgL_stopz00_bglt) (BGl_z52thezd2stopzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 62 */
									obj_t BgL_loc3592z00_3072;

									BgL_copz00_bglt BgL_value3593z00_3073;

									BgL_loc3592z00_3072 = BUNSPEC;
									BgL_value3593z00_3073 = BgL_arg4531z00_1442;
									((((BgL_stopz00_bglt) CREF(BgL_new3594z00_3069))->
											BgL_locz00) = ((obj_t) BgL_loc3592z00_3072), BUNSPEC);
									((((BgL_stopz00_bglt) CREF(BgL_new3594z00_3069))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3593z00_3073), BUNSPEC);
									BgL_res4923z00_3074 = BgL_new3594z00_3069;
							}}
							(obj_t) (BgL_res4923z00_3074);
				}}}
			else
				{	/* Cgen/cop.scm 62 */
					BFALSE;
				}
			return (BgL_stopz00_bglt) (BGl_z52thezd2stopzd2nilz52zzcgen_copz00);
		}
	}



/* _stop-nil */
	obj_t BGl__stopzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4190)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			return (obj_t) (BGl_stopzd2nilzd2zzcgen_copz00());
		}
	}



/* nop? */
	BGL_EXPORTED_DEF bool_t BGl_nopzf3zf3zzcgen_copz00(obj_t BgL_obj3583z00_225)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3583z00_225,
				BGl_nopz00zzcgen_copz00);
		}
	}



/* _nop? */
	obj_t BGl__nopzf3zf3zzcgen_copz00(obj_t BgL_envz00_4187,
		obj_t BgL_obj3583z00_4188)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3583z00_4188,
					BGl_nopz00zzcgen_copz00));
		}
	}



/* make-nop */
	BGL_EXPORTED_DEF BgL_nopz00_bglt BGl_makezd2nopzd2zzcgen_copz00(obj_t
		BgL_loc3569z00_229)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{	/* Cgen/cop.scm 60 */
				BgL_nopz00_bglt BgL_new3570z00_3075;

				{	/* Cgen/cop.scm 60 */
					BgL_nopz00_bglt BgL_res4924z00_3080;

					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_new3576z00_3076;

						BgL_new3576z00_3076 =
							((BgL_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3576z00_3076),
							BGl_classzd2numzd2zz__objectz00(BGl_nopz00zzcgen_copz00));
						{	/* Cgen/cop.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_6336;

							BgL_auxz00_6336 = (BgL_objectz00_bglt) (BgL_new3576z00_3076);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6336, BFALSE);
						}
						BgL_res4924z00_3080 = BgL_new3576z00_3076;
					}
					BgL_new3570z00_3075 = BgL_res4924z00_3080;
				}
				{	/* Cgen/cop.scm 60 */
					BgL_nopz00_bglt BgL_res4925z00_3084;

					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_new3573z00_3081;

						BgL_new3573z00_3081 = BgL_new3570z00_3075;
						{	/* Cgen/cop.scm 60 */
							obj_t BgL_loc3572z00_3083;

							BgL_loc3572z00_3083 = BgL_loc3569z00_229;
							((((BgL_nopz00_bglt) CREF(BgL_new3573z00_3081))->BgL_locz00) =
								((obj_t) BgL_loc3572z00_3083), BUNSPEC);
							BgL_res4925z00_3084 = BgL_new3573z00_3081;
					}} BgL_res4925z00_3084;
				}
				return BgL_new3570z00_3075;
			}
		}
	}



/* _make-nop */
	obj_t BGl__makezd2nopzd2zzcgen_copz00(obj_t BgL_envz00_4413,
		obj_t BgL_loc3569z00_4414)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			return (obj_t) (BGl_makezd2nopzd2zzcgen_copz00(BgL_loc3569z00_4414));
		}
	}



/* fill-nop! */
	BGL_EXPORTED_DEF BgL_nopz00_bglt
		BGl_fillzd2nopz12zc0zzcgen_copz00(BgL_nopz00_bglt BgL_new3573z00_230,
		obj_t BgL_loc3572z00_231)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{	/* Cgen/cop.scm 60 */
				obj_t BgL_loc3572z00_4979;

				BgL_loc3572z00_4979 = BgL_loc3572z00_231;
				((((BgL_nopz00_bglt) CREF(BgL_new3573z00_230))->BgL_locz00) =
					((obj_t) BgL_loc3572z00_4979), BUNSPEC);
				return BgL_new3573z00_230;
			}
		}
	}



/* _fill-nop! */
	obj_t BGl__fillzd2nopz12zc0zzcgen_copz00(obj_t BgL_envz00_4415,
		obj_t BgL_new3573z00_4416, obj_t BgL_loc3572z00_4417)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{	/* Cgen/cop.scm 60 */
				BgL_nopz00_bglt BgL_auxz00_6343;

				{	/* Cgen/cop.scm 60 */
					BgL_nopz00_bglt BgL_res5073z00_4983;

					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_new3573z00_4980;

						BgL_new3573z00_4980 = (BgL_nopz00_bglt) (BgL_new3573z00_4416);
						{	/* Cgen/cop.scm 60 */
							obj_t BgL_loc3572z00_4982;

							BgL_loc3572z00_4982 = BgL_loc3572z00_4417;
							((((BgL_nopz00_bglt) CREF(BgL_new3573z00_4980))->BgL_locz00) =
								((obj_t) BgL_loc3572z00_4982), BUNSPEC);
							BgL_res5073z00_4983 = BgL_new3573z00_4980;
						}
					}
					BgL_auxz00_6343 = BgL_res5073z00_4983;
				}
				return (obj_t) (BgL_auxz00_6343);
			}
		}
	}



/* %allocate-nop */
	BGL_EXPORTED_DEF BgL_nopz00_bglt BGl_z52allocatezd2nopz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{	/* Cgen/cop.scm 60 */
				BgL_nopz00_bglt BgL_new3576z00_4984;

				BgL_new3576z00_4984 =
					((BgL_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_nopz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3576z00_4984),
					BGl_classzd2numzd2zz__objectz00(BGl_nopz00zzcgen_copz00));
				{	/* Cgen/cop.scm 60 */
					BgL_objectz00_bglt BgL_auxz00_6351;

					BgL_auxz00_6351 = (BgL_objectz00_bglt) (BgL_new3576z00_4984);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6351, BFALSE);
				}
				return BgL_new3576z00_4984;
			}
		}
	}



/* _%allocate-nop */
	obj_t BGl__z52allocatezd2nopz80zzcgen_copz00(obj_t BgL_envz00_4185)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{	/* Cgen/cop.scm 60 */
				BgL_nopz00_bglt BgL_auxz00_6354;

				{	/* Cgen/cop.scm 60 */
					BgL_nopz00_bglt BgL_res5074z00_4988;

					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_new3576z00_4986;

						BgL_new3576z00_4986 =
							((BgL_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3576z00_4986),
							BGl_classzd2numzd2zz__objectz00(BGl_nopz00zzcgen_copz00));
						{	/* Cgen/cop.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_6359;

							BgL_auxz00_6359 = (BgL_objectz00_bglt) (BgL_new3576z00_4986);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6359, BFALSE);
						}
						BgL_res5074z00_4988 = BgL_new3576z00_4986;
					}
					BgL_auxz00_6354 = BgL_res5074z00_4988;
				}
				return (obj_t) (BgL_auxz00_6354);
			}
		}
	}



/* nop-nil */
	BGL_EXPORTED_DEF BgL_nopz00_bglt BGl_nopzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			if ((BGl_z52thezd2nopzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 60 */
					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_res4926z00_3094;

						{	/* Cgen/cop.scm 60 */
							BgL_nopz00_bglt BgL_new3576z00_3090;

							BgL_new3576z00_3090 =
								((BgL_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nopz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3576z00_3090),
								BGl_classzd2numzd2zz__objectz00(BGl_nopz00zzcgen_copz00));
							{	/* Cgen/cop.scm 60 */
								BgL_objectz00_bglt BgL_auxz00_6369;

								BgL_auxz00_6369 = (BgL_objectz00_bglt) (BgL_new3576z00_3090);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6369, BFALSE);
							}
							BgL_res4926z00_3094 = BgL_new3576z00_3090;
						}
						BGl_z52thezd2nopzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4926z00_3094);
					}
					{	/* Cgen/cop.scm 60 */
						BgL_nopz00_bglt BgL_res4927z00_3098;

						{	/* Cgen/cop.scm 60 */
							BgL_nopz00_bglt BgL_new3573z00_3095;

							BgL_new3573z00_3095 =
								(BgL_nopz00_bglt) (BGl_z52thezd2nopzd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 60 */
								obj_t BgL_loc3572z00_3097;

								BgL_loc3572z00_3097 = BUNSPEC;
								((((BgL_nopz00_bglt) CREF(BgL_new3573z00_3095))->BgL_locz00) =
									((obj_t) BgL_loc3572z00_3097), BUNSPEC);
								BgL_res4927z00_3098 = BgL_new3573z00_3095;
						}}
						(obj_t) (BgL_res4927z00_3098);
				}}
			else
				{	/* Cgen/cop.scm 60 */
					BFALSE;
				}
			return (BgL_nopz00_bglt) (BGl_z52thezd2nopzd2nilz52zzcgen_copz00);
		}
	}



/* _nop-nil */
	obj_t BGl__nopzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4186)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			return (obj_t) (BGl_nopzd2nilzd2zzcgen_copz00());
		}
	}



/* csequence? */
	BGL_EXPORTED_DEF bool_t BGl_csequencezf3zf3zzcgen_copz00(obj_t
		BgL_obj3564z00_232)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3564z00_232,
				BGl_csequencez00zzcgen_copz00);
		}
	}



/* _csequence? */
	obj_t BGl__csequencezf3zf3zzcgen_copz00(obj_t BgL_envz00_4183,
		obj_t BgL_obj3564z00_4184)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3564z00_4184,
					BGl_csequencez00zzcgen_copz00));
		}
	}



/* make-csequence */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt
		BGl_makezd2csequencezd2zzcgen_copz00(obj_t BgL_loc3536z00_236,
		bool_t BgL_czd2expzf33537z21_237, obj_t BgL_cops3538z00_238)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{	/* Cgen/cop.scm 56 */
				BgL_csequencez00_bglt BgL_new3539z00_3099;

				{	/* Cgen/cop.scm 56 */
					BgL_csequencez00_bglt BgL_res4928z00_3104;

					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_new3549z00_3100;

						BgL_new3549z00_3100 =
							((BgL_csequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csequencez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3549z00_3100),
							BGl_classzd2numzd2zz__objectz00(BGl_csequencez00zzcgen_copz00));
						{	/* Cgen/cop.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_6386;

							BgL_auxz00_6386 = (BgL_objectz00_bglt) (BgL_new3549z00_3100);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6386, BFALSE);
						}
						BgL_res4928z00_3104 = BgL_new3549z00_3100;
					}
					BgL_new3539z00_3099 = BgL_res4928z00_3104;
				}
				{	/* Cgen/cop.scm 56 */
					BgL_csequencez00_bglt BgL_res4929z00_3112;

					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_new3544z00_3105;

						BgL_new3544z00_3105 = BgL_new3539z00_3099;
						{	/* Cgen/cop.scm 56 */
							obj_t BgL_loc3541z00_3109;

							bool_t BgL_czd2expzf33542z21_3110;

							obj_t BgL_cops3543z00_3111;

							BgL_loc3541z00_3109 = BgL_loc3536z00_236;
							BgL_czd2expzf33542z21_3110 = BgL_czd2expzf33537z21_237;
							BgL_cops3543z00_3111 = BgL_cops3538z00_238;
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3105))->
									BgL_locz00) = ((obj_t) BgL_loc3541z00_3109), BUNSPEC);
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3105))->
									BgL_czd2expzf3z21) =
								((bool_t) BgL_czd2expzf33542z21_3110), BUNSPEC);
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3105))->
									BgL_copsz00) = ((obj_t) BgL_cops3543z00_3111), BUNSPEC);
							BgL_res4929z00_3112 = BgL_new3544z00_3105;
					}} BgL_res4929z00_3112;
				}
				return BgL_new3539z00_3099;
			}
		}
	}



/* _make-csequence */
	obj_t BGl__makezd2csequencezd2zzcgen_copz00(obj_t BgL_envz00_4418,
		obj_t BgL_loc3536z00_4419, obj_t BgL_czd2expzf33537z21_4420,
		obj_t BgL_cops3538z00_4421)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			return
				(obj_t) (BGl_makezd2csequencezd2zzcgen_copz00(BgL_loc3536z00_4419,
					CBOOL(BgL_czd2expzf33537z21_4420), BgL_cops3538z00_4421));
		}
	}



/* fill-csequence! */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt
		BGl_fillzd2csequencez12zc0zzcgen_copz00(BgL_csequencez00_bglt
		BgL_new3544z00_239, obj_t BgL_loc3541z00_240,
		bool_t BgL_czd2expzf33542z21_241, obj_t BgL_cops3543z00_242)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{	/* Cgen/cop.scm 56 */
				obj_t BgL_loc3541z00_4990;

				bool_t BgL_czd2expzf33542z21_4991;

				obj_t BgL_cops3543z00_4992;

				BgL_loc3541z00_4990 = BgL_loc3541z00_240;
				BgL_czd2expzf33542z21_4991 = BgL_czd2expzf33542z21_241;
				BgL_cops3543z00_4992 = BgL_cops3543z00_242;
				((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_239))->BgL_locz00) =
					((obj_t) BgL_loc3541z00_4990), BUNSPEC);
				((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_239))->
						BgL_czd2expzf3z21) =
					((bool_t) BgL_czd2expzf33542z21_4991), BUNSPEC);
				((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_239))->BgL_copsz00) =
					((obj_t) BgL_cops3543z00_4992), BUNSPEC);
				return BgL_new3544z00_239;
			}
		}
	}



/* _fill-csequence! */
	obj_t BGl__fillzd2csequencez12zc0zzcgen_copz00(obj_t BgL_envz00_4422,
		obj_t BgL_new3544z00_4423, obj_t BgL_loc3541z00_4424,
		obj_t BgL_czd2expzf33542z21_4425, obj_t BgL_cops3543z00_4426)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{	/* Cgen/cop.scm 56 */
				BgL_csequencez00_bglt BgL_auxz00_6398;

				{	/* Cgen/cop.scm 56 */
					BgL_csequencez00_bglt BgL_res5075z00_5000;

					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_new3544z00_4993;

						bool_t BgL_czd2expzf33542z21_4995;

						BgL_new3544z00_4993 = (BgL_csequencez00_bglt) (BgL_new3544z00_4423);
						BgL_czd2expzf33542z21_4995 = CBOOL(BgL_czd2expzf33542z21_4425);
						{	/* Cgen/cop.scm 56 */
							obj_t BgL_loc3541z00_4997;

							bool_t BgL_czd2expzf33542z21_4998;

							obj_t BgL_cops3543z00_4999;

							BgL_loc3541z00_4997 = BgL_loc3541z00_4424;
							BgL_czd2expzf33542z21_4998 = BgL_czd2expzf33542z21_4995;
							BgL_cops3543z00_4999 = BgL_cops3543z00_4426;
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_4993))->
									BgL_locz00) = ((obj_t) BgL_loc3541z00_4997), BUNSPEC);
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_4993))->
									BgL_czd2expzf3z21) =
								((bool_t) BgL_czd2expzf33542z21_4998), BUNSPEC);
							((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_4993))->
									BgL_copsz00) = ((obj_t) BgL_cops3543z00_4999), BUNSPEC);
							BgL_res5075z00_5000 = BgL_new3544z00_4993;
						}
					}
					BgL_auxz00_6398 = BgL_res5075z00_5000;
				}
				return (obj_t) (BgL_auxz00_6398);
			}
		}
	}



/* %allocate-csequence */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt
		BGl_z52allocatezd2csequencez80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{	/* Cgen/cop.scm 56 */
				BgL_csequencez00_bglt BgL_new3549z00_5001;

				BgL_new3549z00_5001 =
					((BgL_csequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_csequencez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3549z00_5001),
					BGl_classzd2numzd2zz__objectz00(BGl_csequencez00zzcgen_copz00));
				{	/* Cgen/cop.scm 56 */
					BgL_objectz00_bglt BgL_auxz00_6409;

					BgL_auxz00_6409 = (BgL_objectz00_bglt) (BgL_new3549z00_5001);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6409, BFALSE);
				}
				return BgL_new3549z00_5001;
			}
		}
	}



/* _%allocate-csequence */
	obj_t BGl__z52allocatezd2csequencez80zzcgen_copz00(obj_t BgL_envz00_4181)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{	/* Cgen/cop.scm 56 */
				BgL_csequencez00_bglt BgL_auxz00_6412;

				{	/* Cgen/cop.scm 56 */
					BgL_csequencez00_bglt BgL_res5076z00_5005;

					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_new3549z00_5003;

						BgL_new3549z00_5003 =
							((BgL_csequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_csequencez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3549z00_5003),
							BGl_classzd2numzd2zz__objectz00(BGl_csequencez00zzcgen_copz00));
						{	/* Cgen/cop.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_6417;

							BgL_auxz00_6417 = (BgL_objectz00_bglt) (BgL_new3549z00_5003);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6417, BFALSE);
						}
						BgL_res5076z00_5005 = BgL_new3549z00_5003;
					}
					BgL_auxz00_6412 = BgL_res5076z00_5005;
				}
				return (obj_t) (BgL_auxz00_6412);
			}
		}
	}



/* csequence-nil */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt BGl_csequencezd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			if ((BGl_z52thezd2csequencezd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 56 */
					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_res4930z00_3124;

						{	/* Cgen/cop.scm 56 */
							BgL_csequencez00_bglt BgL_new3549z00_3120;

							BgL_new3549z00_3120 =
								((BgL_csequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_csequencez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3549z00_3120),
								BGl_classzd2numzd2zz__objectz00(BGl_csequencez00zzcgen_copz00));
							{	/* Cgen/cop.scm 56 */
								BgL_objectz00_bglt BgL_auxz00_6427;

								BgL_auxz00_6427 = (BgL_objectz00_bglt) (BgL_new3549z00_3120);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6427, BFALSE);
							}
							BgL_res4930z00_3124 = BgL_new3549z00_3120;
						}
						BGl_z52thezd2csequencezd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4930z00_3124);
					}
					{	/* Cgen/cop.scm 56 */
						BgL_csequencez00_bglt BgL_res4931z00_3132;

						{	/* Cgen/cop.scm 56 */
							BgL_csequencez00_bglt BgL_new3544z00_3125;

							BgL_new3544z00_3125 =
								(BgL_csequencez00_bglt)
								(BGl_z52thezd2csequencezd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 56 */
								obj_t BgL_loc3541z00_3129;

								bool_t BgL_czd2expzf33542z21_3130;

								obj_t BgL_cops3543z00_3131;

								BgL_loc3541z00_3129 = BUNSPEC;
								BgL_czd2expzf33542z21_3130 = ((bool_t) 0);
								BgL_cops3543z00_3131 = BUNSPEC;
								((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3125))->
										BgL_locz00) = ((obj_t) BgL_loc3541z00_3129), BUNSPEC);
								((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3125))->
										BgL_czd2expzf3z21) =
									((bool_t) BgL_czd2expzf33542z21_3130), BUNSPEC);
								((((BgL_csequencez00_bglt) CREF(BgL_new3544z00_3125))->
										BgL_copsz00) = ((obj_t) BgL_cops3543z00_3131), BUNSPEC);
								BgL_res4931z00_3132 = BgL_new3544z00_3125;
						}}
						(obj_t) (BgL_res4931z00_3132);
				}}
			else
				{	/* Cgen/cop.scm 56 */
					BFALSE;
				}
			return
				(BgL_csequencez00_bglt) (BGl_z52thezd2csequencezd2nilz52zzcgen_copz00);
		}
	}



/* _csequence-nil */
	obj_t BGl__csequencezd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4182)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			return (obj_t) (BGl_csequencezd2nilzd2zzcgen_copz00());
		}
	}



/* ccast? */
	BGL_EXPORTED_DEF bool_t BGl_ccastzf3zf3zzcgen_copz00(obj_t BgL_obj3530z00_245)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3530z00_245,
				BGl_ccastz00zzcgen_copz00);
		}
	}



/* _ccast? */
	obj_t BGl__ccastzf3zf3zzcgen_copz00(obj_t BgL_envz00_4179,
		obj_t BgL_obj3530z00_4180)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3530z00_4180,
					BGl_ccastz00zzcgen_copz00));
		}
	}



/* make-ccast */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt BGl_makezd2ccastzd2zzcgen_copz00(obj_t
		BgL_loc3502z00_249, BgL_typez00_bglt BgL_type3503z00_250,
		BgL_copz00_bglt BgL_arg3504z00_251)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{	/* Cgen/cop.scm 52 */
				BgL_ccastz00_bglt BgL_new3505z00_3133;

				{	/* Cgen/cop.scm 52 */
					BgL_ccastz00_bglt BgL_res4932z00_3138;

					{	/* Cgen/cop.scm 52 */
						BgL_ccastz00_bglt BgL_new3515z00_3134;

						BgL_new3515z00_3134 =
							((BgL_ccastz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ccastz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3515z00_3134),
							BGl_classzd2numzd2zz__objectz00(BGl_ccastz00zzcgen_copz00));
						{	/* Cgen/cop.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_6446;

							BgL_auxz00_6446 = (BgL_objectz00_bglt) (BgL_new3515z00_3134);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6446, BFALSE);
						}
						BgL_res4932z00_3138 = BgL_new3515z00_3134;
					}
					BgL_new3505z00_3133 = BgL_res4932z00_3138;
				}
				{	/* Cgen/cop.scm 52 */
					BgL_ccastz00_bglt BgL_res4933z00_3146;

					{	/* Cgen/cop.scm 52 */
						BgL_ccastz00_bglt BgL_new3510z00_3139;

						BgL_new3510z00_3139 = BgL_new3505z00_3133;
						{	/* Cgen/cop.scm 52 */
							obj_t BgL_loc3507z00_3143;

							BgL_typez00_bglt BgL_type3508z00_3144;

							BgL_copz00_bglt BgL_arg3509z00_3145;

							BgL_loc3507z00_3143 = BgL_loc3502z00_249;
							BgL_type3508z00_3144 = BgL_type3503z00_250;
							BgL_arg3509z00_3145 = BgL_arg3504z00_251;
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3139))->BgL_locz00) =
								((obj_t) BgL_loc3507z00_3143), BUNSPEC);
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3139))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3508z00_3144), BUNSPEC);
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3139))->BgL_argz00) =
								((BgL_copz00_bglt) BgL_arg3509z00_3145), BUNSPEC);
							BgL_res4933z00_3146 = BgL_new3510z00_3139;
					}} BgL_res4933z00_3146;
				}
				return BgL_new3505z00_3133;
			}
		}
	}



/* _make-ccast */
	obj_t BGl__makezd2ccastzd2zzcgen_copz00(obj_t BgL_envz00_4427,
		obj_t BgL_loc3502z00_4428, obj_t BgL_type3503z00_4429,
		obj_t BgL_arg3504z00_4430)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			return
				(obj_t) (BGl_makezd2ccastzd2zzcgen_copz00(BgL_loc3502z00_4428,
					(BgL_typez00_bglt) (BgL_type3503z00_4429),
					(BgL_copz00_bglt) (BgL_arg3504z00_4430)));
		}
	}



/* fill-ccast! */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt
		BGl_fillzd2ccastz12zc0zzcgen_copz00(BgL_ccastz00_bglt BgL_new3510z00_252,
		obj_t BgL_loc3507z00_253, BgL_typez00_bglt BgL_type3508z00_254,
		BgL_copz00_bglt BgL_arg3509z00_255)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{	/* Cgen/cop.scm 52 */
				obj_t BgL_loc3507z00_5007;

				BgL_typez00_bglt BgL_type3508z00_5008;

				BgL_copz00_bglt BgL_arg3509z00_5009;

				BgL_loc3507z00_5007 = BgL_loc3507z00_253;
				BgL_type3508z00_5008 = BgL_type3508z00_254;
				BgL_arg3509z00_5009 = BgL_arg3509z00_255;
				((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_252))->BgL_locz00) =
					((obj_t) BgL_loc3507z00_5007), BUNSPEC);
				((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_252))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3508z00_5008), BUNSPEC);
				((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_252))->BgL_argz00) =
					((BgL_copz00_bglt) BgL_arg3509z00_5009), BUNSPEC);
				return BgL_new3510z00_252;
			}
		}
	}



/* _fill-ccast! */
	obj_t BGl__fillzd2ccastz12zc0zzcgen_copz00(obj_t BgL_envz00_4431,
		obj_t BgL_new3510z00_4432, obj_t BgL_loc3507z00_4433,
		obj_t BgL_type3508z00_4434, obj_t BgL_arg3509z00_4435)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{	/* Cgen/cop.scm 52 */
				BgL_ccastz00_bglt BgL_auxz00_6459;

				{	/* Cgen/cop.scm 52 */
					BgL_ccastz00_bglt BgL_res5077z00_5017;

					{	/* Cgen/cop.scm 52 */
						BgL_ccastz00_bglt BgL_new3510z00_5010;

						BgL_typez00_bglt BgL_type3508z00_5012;

						BgL_copz00_bglt BgL_arg3509z00_5013;

						BgL_new3510z00_5010 = (BgL_ccastz00_bglt) (BgL_new3510z00_4432);
						BgL_type3508z00_5012 = (BgL_typez00_bglt) (BgL_type3508z00_4434);
						BgL_arg3509z00_5013 = (BgL_copz00_bglt) (BgL_arg3509z00_4435);
						{	/* Cgen/cop.scm 52 */
							obj_t BgL_loc3507z00_5014;

							BgL_typez00_bglt BgL_type3508z00_5015;

							BgL_copz00_bglt BgL_arg3509z00_5016;

							BgL_loc3507z00_5014 = BgL_loc3507z00_4433;
							BgL_type3508z00_5015 = BgL_type3508z00_5012;
							BgL_arg3509z00_5016 = BgL_arg3509z00_5013;
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_5010))->BgL_locz00) =
								((obj_t) BgL_loc3507z00_5014), BUNSPEC);
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_5010))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3508z00_5015), BUNSPEC);
							((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_5010))->BgL_argz00) =
								((BgL_copz00_bglt) BgL_arg3509z00_5016), BUNSPEC);
							BgL_res5077z00_5017 = BgL_new3510z00_5010;
						}
					}
					BgL_auxz00_6459 = BgL_res5077z00_5017;
				}
				return (obj_t) (BgL_auxz00_6459);
			}
		}
	}



/* %allocate-ccast */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt BGl_z52allocatezd2ccastz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{	/* Cgen/cop.scm 52 */
				BgL_ccastz00_bglt BgL_new3515z00_5018;

				BgL_new3515z00_5018 =
					((BgL_ccastz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_ccastz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3515z00_5018),
					BGl_classzd2numzd2zz__objectz00(BGl_ccastz00zzcgen_copz00));
				{	/* Cgen/cop.scm 52 */
					BgL_objectz00_bglt BgL_auxz00_6471;

					BgL_auxz00_6471 = (BgL_objectz00_bglt) (BgL_new3515z00_5018);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6471, BFALSE);
				}
				return BgL_new3515z00_5018;
			}
		}
	}



/* _%allocate-ccast */
	obj_t BGl__z52allocatezd2ccastz80zzcgen_copz00(obj_t BgL_envz00_4177)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{	/* Cgen/cop.scm 52 */
				BgL_ccastz00_bglt BgL_auxz00_6474;

				{	/* Cgen/cop.scm 52 */
					BgL_ccastz00_bglt BgL_res5078z00_5022;

					{	/* Cgen/cop.scm 52 */
						BgL_ccastz00_bglt BgL_new3515z00_5020;

						BgL_new3515z00_5020 =
							((BgL_ccastz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ccastz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3515z00_5020),
							BGl_classzd2numzd2zz__objectz00(BGl_ccastz00zzcgen_copz00));
						{	/* Cgen/cop.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_6479;

							BgL_auxz00_6479 = (BgL_objectz00_bglt) (BgL_new3515z00_5020);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6479, BFALSE);
						}
						BgL_res5078z00_5022 = BgL_new3515z00_5020;
					}
					BgL_auxz00_6474 = BgL_res5078z00_5022;
				}
				return (obj_t) (BgL_auxz00_6474);
			}
		}
	}



/* ccast-nil */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt BGl_ccastzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			if ((BGl_z52thezd2ccastzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 52 */
					{	/* Cgen/cop.scm 52 */
						BgL_ccastz00_bglt BgL_res4934z00_3158;

						{	/* Cgen/cop.scm 52 */
							BgL_ccastz00_bglt BgL_new3515z00_3154;

							BgL_new3515z00_3154 =
								((BgL_ccastz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_ccastz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3515z00_3154),
								BGl_classzd2numzd2zz__objectz00(BGl_ccastz00zzcgen_copz00));
							{	/* Cgen/cop.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_6489;

								BgL_auxz00_6489 = (BgL_objectz00_bglt) (BgL_new3515z00_3154);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6489, BFALSE);
							}
							BgL_res4934z00_3158 = BgL_new3515z00_3154;
						}
						BGl_z52thezd2ccastzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4934z00_3158);
					}
					{	/* Cgen/cop.scm 52 */
						BgL_typez00_bglt BgL_arg4538z00_1462;

						BgL_copz00_bglt BgL_arg4539z00_1463;

						BgL_arg4538z00_1462 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4539z00_1463 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 52 */
							BgL_ccastz00_bglt BgL_res4935z00_3166;

							{	/* Cgen/cop.scm 52 */
								BgL_ccastz00_bglt BgL_new3510z00_3159;

								BgL_new3510z00_3159 =
									(BgL_ccastz00_bglt)
									(BGl_z52thezd2ccastzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 52 */
									obj_t BgL_loc3507z00_3163;

									BgL_typez00_bglt BgL_type3508z00_3164;

									BgL_copz00_bglt BgL_arg3509z00_3165;

									BgL_loc3507z00_3163 = BUNSPEC;
									BgL_type3508z00_3164 = BgL_arg4538z00_1462;
									BgL_arg3509z00_3165 = BgL_arg4539z00_1463;
									((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3159))->
											BgL_locz00) = ((obj_t) BgL_loc3507z00_3163), BUNSPEC);
									((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3159))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3508z00_3164), BUNSPEC);
									((((BgL_ccastz00_bglt) CREF(BgL_new3510z00_3159))->
											BgL_argz00) =
										((BgL_copz00_bglt) BgL_arg3509z00_3165), BUNSPEC);
									BgL_res4935z00_3166 = BgL_new3510z00_3159;
							}}
							(obj_t) (BgL_res4935z00_3166);
				}}}
			else
				{	/* Cgen/cop.scm 52 */
					BFALSE;
				}
			return (BgL_ccastz00_bglt) (BGl_z52thezd2ccastzd2nilz52zzcgen_copz00);
		}
	}



/* _ccast-nil */
	obj_t BGl__ccastzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4178)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			return (obj_t) (BGl_ccastzd2nilzd2zzcgen_copz00());
		}
	}



/* cpragma? */
	BGL_EXPORTED_DEF bool_t BGl_cpragmazf3zf3zzcgen_copz00(obj_t
		BgL_obj3496z00_258)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3496z00_258,
				BGl_cpragmaz00zzcgen_copz00);
		}
	}



/* _cpragma? */
	obj_t BGl__cpragmazf3zf3zzcgen_copz00(obj_t BgL_envz00_4175,
		obj_t BgL_obj3496z00_4176)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3496z00_4176,
					BGl_cpragmaz00zzcgen_copz00));
		}
	}



/* make-cpragma */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt BGl_makezd2cpragmazd2zzcgen_copz00(obj_t
		BgL_loc3468z00_262, obj_t BgL_format3469z00_263, obj_t BgL_args3470z00_264)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{	/* Cgen/cop.scm 48 */
				BgL_cpragmaz00_bglt BgL_new3471z00_3167;

				{	/* Cgen/cop.scm 48 */
					BgL_cpragmaz00_bglt BgL_res4936z00_3172;

					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_new3481z00_3168;

						BgL_new3481z00_3168 =
							((BgL_cpragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cpragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3481z00_3168),
							BGl_classzd2numzd2zz__objectz00(BGl_cpragmaz00zzcgen_copz00));
						{	/* Cgen/cop.scm 48 */
							BgL_objectz00_bglt BgL_auxz00_6510;

							BgL_auxz00_6510 = (BgL_objectz00_bglt) (BgL_new3481z00_3168);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6510, BFALSE);
						}
						BgL_res4936z00_3172 = BgL_new3481z00_3168;
					}
					BgL_new3471z00_3167 = BgL_res4936z00_3172;
				}
				{	/* Cgen/cop.scm 48 */
					BgL_cpragmaz00_bglt BgL_res4937z00_3180;

					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_new3476z00_3173;

						BgL_new3476z00_3173 = BgL_new3471z00_3167;
						{	/* Cgen/cop.scm 48 */
							obj_t BgL_loc3473z00_3177;

							obj_t BgL_format3474z00_3178;

							obj_t BgL_args3475z00_3179;

							BgL_loc3473z00_3177 = BgL_loc3468z00_262;
							BgL_format3474z00_3178 = BgL_format3469z00_263;
							BgL_args3475z00_3179 = BgL_args3470z00_264;
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3173))->BgL_locz00) =
								((obj_t) BgL_loc3473z00_3177), BUNSPEC);
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3173))->
									BgL_formatz00) = ((obj_t) BgL_format3474z00_3178), BUNSPEC);
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3173))->
									BgL_argsz00) = ((obj_t) BgL_args3475z00_3179), BUNSPEC);
							BgL_res4937z00_3180 = BgL_new3476z00_3173;
					}} BgL_res4937z00_3180;
				}
				return BgL_new3471z00_3167;
			}
		}
	}



/* _make-cpragma */
	obj_t BGl__makezd2cpragmazd2zzcgen_copz00(obj_t BgL_envz00_4436,
		obj_t BgL_loc3468z00_4437, obj_t BgL_format3469z00_4438,
		obj_t BgL_args3470z00_4439)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			return
				(obj_t) (BGl_makezd2cpragmazd2zzcgen_copz00(BgL_loc3468z00_4437,
					BgL_format3469z00_4438, BgL_args3470z00_4439));
		}
	}



/* fill-cpragma! */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt
		BGl_fillzd2cpragmaz12zc0zzcgen_copz00(BgL_cpragmaz00_bglt
		BgL_new3476z00_265, obj_t BgL_loc3473z00_266, obj_t BgL_format3474z00_267,
		obj_t BgL_args3475z00_268)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{	/* Cgen/cop.scm 48 */
				obj_t BgL_loc3473z00_5024;

				obj_t BgL_format3474z00_5025;

				obj_t BgL_args3475z00_5026;

				BgL_loc3473z00_5024 = BgL_loc3473z00_266;
				BgL_format3474z00_5025 = BgL_format3474z00_267;
				BgL_args3475z00_5026 = BgL_args3475z00_268;
				((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_265))->BgL_locz00) =
					((obj_t) BgL_loc3473z00_5024), BUNSPEC);
				((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_265))->BgL_formatz00) =
					((obj_t) BgL_format3474z00_5025), BUNSPEC);
				((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_265))->BgL_argsz00) =
					((obj_t) BgL_args3475z00_5026), BUNSPEC);
				return BgL_new3476z00_265;
			}
		}
	}



/* _fill-cpragma! */
	obj_t BGl__fillzd2cpragmaz12zc0zzcgen_copz00(obj_t BgL_envz00_4440,
		obj_t BgL_new3476z00_4441, obj_t BgL_loc3473z00_4442,
		obj_t BgL_format3474z00_4443, obj_t BgL_args3475z00_4444)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{	/* Cgen/cop.scm 48 */
				BgL_cpragmaz00_bglt BgL_auxz00_6521;

				{	/* Cgen/cop.scm 48 */
					BgL_cpragmaz00_bglt BgL_res5079z00_5034;

					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_new3476z00_5027;

						obj_t BgL_format3474z00_5029;

						BgL_new3476z00_5027 = (BgL_cpragmaz00_bglt) (BgL_new3476z00_4441);
						BgL_format3474z00_5029 = BgL_format3474z00_4443;
						{	/* Cgen/cop.scm 48 */
							obj_t BgL_loc3473z00_5031;

							obj_t BgL_format3474z00_5032;

							obj_t BgL_args3475z00_5033;

							BgL_loc3473z00_5031 = BgL_loc3473z00_4442;
							BgL_format3474z00_5032 = BgL_format3474z00_5029;
							BgL_args3475z00_5033 = BgL_args3475z00_4444;
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_5027))->BgL_locz00) =
								((obj_t) BgL_loc3473z00_5031), BUNSPEC);
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_5027))->
									BgL_formatz00) = ((obj_t) BgL_format3474z00_5032), BUNSPEC);
							((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_5027))->
									BgL_argsz00) = ((obj_t) BgL_args3475z00_5033), BUNSPEC);
							BgL_res5079z00_5034 = BgL_new3476z00_5027;
						}
					}
					BgL_auxz00_6521 = BgL_res5079z00_5034;
				}
				return (obj_t) (BgL_auxz00_6521);
			}
		}
	}



/* %allocate-cpragma */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt
		BGl_z52allocatezd2cpragmaz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{	/* Cgen/cop.scm 48 */
				BgL_cpragmaz00_bglt BgL_new3481z00_5035;

				BgL_new3481z00_5035 =
					((BgL_cpragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cpragmaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3481z00_5035),
					BGl_classzd2numzd2zz__objectz00(BGl_cpragmaz00zzcgen_copz00));
				{	/* Cgen/cop.scm 48 */
					BgL_objectz00_bglt BgL_auxz00_6531;

					BgL_auxz00_6531 = (BgL_objectz00_bglt) (BgL_new3481z00_5035);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6531, BFALSE);
				}
				return BgL_new3481z00_5035;
			}
		}
	}



/* _%allocate-cpragma */
	obj_t BGl__z52allocatezd2cpragmaz80zzcgen_copz00(obj_t BgL_envz00_4173)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{	/* Cgen/cop.scm 48 */
				BgL_cpragmaz00_bglt BgL_auxz00_6534;

				{	/* Cgen/cop.scm 48 */
					BgL_cpragmaz00_bglt BgL_res5080z00_5039;

					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_new3481z00_5037;

						BgL_new3481z00_5037 =
							((BgL_cpragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cpragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3481z00_5037),
							BGl_classzd2numzd2zz__objectz00(BGl_cpragmaz00zzcgen_copz00));
						{	/* Cgen/cop.scm 48 */
							BgL_objectz00_bglt BgL_auxz00_6539;

							BgL_auxz00_6539 = (BgL_objectz00_bglt) (BgL_new3481z00_5037);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6539, BFALSE);
						}
						BgL_res5080z00_5039 = BgL_new3481z00_5037;
					}
					BgL_auxz00_6534 = BgL_res5080z00_5039;
				}
				return (obj_t) (BgL_auxz00_6534);
			}
		}
	}



/* cpragma-nil */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt BGl_cpragmazd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			if ((BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 48 */
					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_res4938z00_3192;

						{	/* Cgen/cop.scm 48 */
							BgL_cpragmaz00_bglt BgL_new3481z00_3188;

							BgL_new3481z00_3188 =
								((BgL_cpragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cpragmaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3481z00_3188),
								BGl_classzd2numzd2zz__objectz00(BGl_cpragmaz00zzcgen_copz00));
							{	/* Cgen/cop.scm 48 */
								BgL_objectz00_bglt BgL_auxz00_6549;

								BgL_auxz00_6549 = (BgL_objectz00_bglt) (BgL_new3481z00_3188);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6549, BFALSE);
							}
							BgL_res4938z00_3192 = BgL_new3481z00_3188;
						}
						BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4938z00_3192);
					}
					{	/* Cgen/cop.scm 48 */
						BgL_cpragmaz00_bglt BgL_res4939z00_3200;

						{	/* Cgen/cop.scm 48 */
							BgL_cpragmaz00_bglt BgL_new3476z00_3193;

							BgL_new3476z00_3193 =
								(BgL_cpragmaz00_bglt)
								(BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 48 */
								obj_t BgL_loc3473z00_3197;

								obj_t BgL_format3474z00_3198;

								obj_t BgL_args3475z00_3199;

								BgL_loc3473z00_3197 = BUNSPEC;
								BgL_format3474z00_3198 = BGl_string4978z00zzcgen_copz00;
								BgL_args3475z00_3199 = BUNSPEC;
								((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3193))->
										BgL_locz00) = ((obj_t) BgL_loc3473z00_3197), BUNSPEC);
								((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3193))->
										BgL_formatz00) = ((obj_t) BgL_format3474z00_3198), BUNSPEC);
								((((BgL_cpragmaz00_bglt) CREF(BgL_new3476z00_3193))->
										BgL_argsz00) = ((obj_t) BgL_args3475z00_3199), BUNSPEC);
								BgL_res4939z00_3200 = BgL_new3476z00_3193;
						}}
						(obj_t) (BgL_res4939z00_3200);
				}}
			else
				{	/* Cgen/cop.scm 48 */
					BFALSE;
				}
			return (BgL_cpragmaz00_bglt) (BGl_z52thezd2cpragmazd2nilz52zzcgen_copz00);
		}
	}



/* _cpragma-nil */
	obj_t BGl__cpragmazd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4174)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			return (obj_t) (BGl_cpragmazd2nilzd2zzcgen_copz00());
		}
	}



/* varc? */
	BGL_EXPORTED_DEF bool_t BGl_varczf3zf3zzcgen_copz00(obj_t BgL_obj3462z00_271)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3462z00_271,
				BGl_varcz00zzcgen_copz00);
		}
	}



/* _varc? */
	obj_t BGl__varczf3zf3zzcgen_copz00(obj_t BgL_envz00_4171,
		obj_t BgL_obj3462z00_4172)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3462z00_4172,
					BGl_varcz00zzcgen_copz00));
		}
	}



/* make-varc */
	BGL_EXPORTED_DEF BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t
		BgL_loc3441z00_275, BgL_variablez00_bglt BgL_variable3442z00_276)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{	/* Cgen/cop.scm 45 */
				BgL_varcz00_bglt BgL_new3443z00_3201;

				{	/* Cgen/cop.scm 45 */
					BgL_varcz00_bglt BgL_res4940z00_3206;

					{	/* Cgen/cop.scm 45 */
						BgL_varcz00_bglt BgL_new3451z00_3202;

						BgL_new3451z00_3202 =
							((BgL_varcz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_varcz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3451z00_3202),
							BGl_classzd2numzd2zz__objectz00(BGl_varcz00zzcgen_copz00));
						{	/* Cgen/cop.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_6568;

							BgL_auxz00_6568 = (BgL_objectz00_bglt) (BgL_new3451z00_3202);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6568, BFALSE);
						}
						BgL_res4940z00_3206 = BgL_new3451z00_3202;
					}
					BgL_new3443z00_3201 = BgL_res4940z00_3206;
				}
				{	/* Cgen/cop.scm 45 */
					BgL_varcz00_bglt BgL_res4941z00_3212;

					{	/* Cgen/cop.scm 45 */
						BgL_varcz00_bglt BgL_new3447z00_3207;

						BgL_new3447z00_3207 = BgL_new3443z00_3201;
						{	/* Cgen/cop.scm 45 */
							obj_t BgL_loc3445z00_3210;

							BgL_variablez00_bglt BgL_variable3446z00_3211;

							BgL_loc3445z00_3210 = BgL_loc3441z00_275;
							BgL_variable3446z00_3211 = BgL_variable3442z00_276;
							((((BgL_varcz00_bglt) CREF(BgL_new3447z00_3207))->BgL_locz00) =
								((obj_t) BgL_loc3445z00_3210), BUNSPEC);
							((((BgL_varcz00_bglt) CREF(BgL_new3447z00_3207))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable3446z00_3211), BUNSPEC);
							BgL_res4941z00_3212 = BgL_new3447z00_3207;
					}} BgL_res4941z00_3212;
				}
				return BgL_new3443z00_3201;
			}
		}
	}



/* _make-varc */
	obj_t BGl__makezd2varczd2zzcgen_copz00(obj_t BgL_envz00_4445,
		obj_t BgL_loc3441z00_4446, obj_t BgL_variable3442z00_4447)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			return
				(obj_t) (BGl_makezd2varczd2zzcgen_copz00(BgL_loc3441z00_4446,
					(BgL_variablez00_bglt) (BgL_variable3442z00_4447)));
		}
	}



/* fill-varc! */
	BGL_EXPORTED_DEF BgL_varcz00_bglt
		BGl_fillzd2varcz12zc0zzcgen_copz00(BgL_varcz00_bglt BgL_new3447z00_277,
		obj_t BgL_loc3445z00_278, BgL_variablez00_bglt BgL_variable3446z00_279)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{	/* Cgen/cop.scm 45 */
				obj_t BgL_loc3445z00_5041;

				BgL_variablez00_bglt BgL_variable3446z00_5042;

				BgL_loc3445z00_5041 = BgL_loc3445z00_278;
				BgL_variable3446z00_5042 = BgL_variable3446z00_279;
				((((BgL_varcz00_bglt) CREF(BgL_new3447z00_277))->BgL_locz00) =
					((obj_t) BgL_loc3445z00_5041), BUNSPEC);
				((((BgL_varcz00_bglt) CREF(BgL_new3447z00_277))->BgL_variablez00) =
					((BgL_variablez00_bglt) BgL_variable3446z00_5042), BUNSPEC);
				return BgL_new3447z00_277;
			}
		}
	}



/* _fill-varc! */
	obj_t BGl__fillzd2varcz12zc0zzcgen_copz00(obj_t BgL_envz00_4448,
		obj_t BgL_new3447z00_4449, obj_t BgL_loc3445z00_4450,
		obj_t BgL_variable3446z00_4451)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{	/* Cgen/cop.scm 45 */
				BgL_varcz00_bglt BgL_auxz00_6578;

				{	/* Cgen/cop.scm 45 */
					BgL_varcz00_bglt BgL_res5081z00_5048;

					{	/* Cgen/cop.scm 45 */
						BgL_varcz00_bglt BgL_new3447z00_5043;

						BgL_variablez00_bglt BgL_variable3446z00_5045;

						BgL_new3447z00_5043 = (BgL_varcz00_bglt) (BgL_new3447z00_4449);
						BgL_variable3446z00_5045 =
							(BgL_variablez00_bglt) (BgL_variable3446z00_4451);
						{	/* Cgen/cop.scm 45 */
							obj_t BgL_loc3445z00_5046;

							BgL_variablez00_bglt BgL_variable3446z00_5047;

							BgL_loc3445z00_5046 = BgL_loc3445z00_4450;
							BgL_variable3446z00_5047 = BgL_variable3446z00_5045;
							((((BgL_varcz00_bglt) CREF(BgL_new3447z00_5043))->BgL_locz00) =
								((obj_t) BgL_loc3445z00_5046), BUNSPEC);
							((((BgL_varcz00_bglt) CREF(BgL_new3447z00_5043))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable3446z00_5047), BUNSPEC);
							BgL_res5081z00_5048 = BgL_new3447z00_5043;
						}
					}
					BgL_auxz00_6578 = BgL_res5081z00_5048;
				}
				return (obj_t) (BgL_auxz00_6578);
			}
		}
	}



/* %allocate-varc */
	BGL_EXPORTED_DEF BgL_varcz00_bglt BGl_z52allocatezd2varcz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{	/* Cgen/cop.scm 45 */
				BgL_varcz00_bglt BgL_new3451z00_5049;

				BgL_new3451z00_5049 =
					((BgL_varcz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_varcz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3451z00_5049),
					BGl_classzd2numzd2zz__objectz00(BGl_varcz00zzcgen_copz00));
				{	/* Cgen/cop.scm 45 */
					BgL_objectz00_bglt BgL_auxz00_6588;

					BgL_auxz00_6588 = (BgL_objectz00_bglt) (BgL_new3451z00_5049);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6588, BFALSE);
				}
				return BgL_new3451z00_5049;
			}
		}
	}



/* _%allocate-varc */
	obj_t BGl__z52allocatezd2varcz80zzcgen_copz00(obj_t BgL_envz00_4169)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{	/* Cgen/cop.scm 45 */
				BgL_varcz00_bglt BgL_auxz00_6591;

				{	/* Cgen/cop.scm 45 */
					BgL_varcz00_bglt BgL_res5082z00_5053;

					{	/* Cgen/cop.scm 45 */
						BgL_varcz00_bglt BgL_new3451z00_5051;

						BgL_new3451z00_5051 =
							((BgL_varcz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_varcz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3451z00_5051),
							BGl_classzd2numzd2zz__objectz00(BGl_varcz00zzcgen_copz00));
						{	/* Cgen/cop.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_6596;

							BgL_auxz00_6596 = (BgL_objectz00_bglt) (BgL_new3451z00_5051);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6596, BFALSE);
						}
						BgL_res5082z00_5053 = BgL_new3451z00_5051;
					}
					BgL_auxz00_6591 = BgL_res5082z00_5053;
				}
				return (obj_t) (BgL_auxz00_6591);
			}
		}
	}



/* varc-nil */
	BGL_EXPORTED_DEF BgL_varcz00_bglt BGl_varczd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			if ((BGl_z52thezd2varczd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 45 */
					{	/* Cgen/cop.scm 45 */
						BgL_varcz00_bglt BgL_res4942z00_3223;

						{	/* Cgen/cop.scm 45 */
							BgL_varcz00_bglt BgL_new3451z00_3219;

							BgL_new3451z00_3219 =
								((BgL_varcz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_varcz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3451z00_3219),
								BGl_classzd2numzd2zz__objectz00(BGl_varcz00zzcgen_copz00));
							{	/* Cgen/cop.scm 45 */
								BgL_objectz00_bglt BgL_auxz00_6606;

								BgL_auxz00_6606 = (BgL_objectz00_bglt) (BgL_new3451z00_3219);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6606, BFALSE);
							}
							BgL_res4942z00_3223 = BgL_new3451z00_3219;
						}
						BGl_z52thezd2varczd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4942z00_3223);
					}
					{	/* Cgen/cop.scm 45 */
						BgL_variablez00_bglt BgL_arg4544z00_1477;

						BgL_arg4544z00_1477 = BGl_variablezd2nilzd2zzast_varz00();
						{	/* Cgen/cop.scm 45 */
							BgL_varcz00_bglt BgL_res4943z00_3229;

							{	/* Cgen/cop.scm 45 */
								BgL_varcz00_bglt BgL_new3447z00_3224;

								BgL_new3447z00_3224 =
									(BgL_varcz00_bglt) (BGl_z52thezd2varczd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 45 */
									obj_t BgL_loc3445z00_3227;

									BgL_variablez00_bglt BgL_variable3446z00_3228;

									BgL_loc3445z00_3227 = BUNSPEC;
									BgL_variable3446z00_3228 = BgL_arg4544z00_1477;
									((((BgL_varcz00_bglt) CREF(BgL_new3447z00_3224))->
											BgL_locz00) = ((obj_t) BgL_loc3445z00_3227), BUNSPEC);
									((((BgL_varcz00_bglt) CREF(BgL_new3447z00_3224))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) BgL_variable3446z00_3228), BUNSPEC);
									BgL_res4943z00_3229 = BgL_new3447z00_3224;
							}}
							(obj_t) (BgL_res4943z00_3229);
				}}}
			else
				{	/* Cgen/cop.scm 45 */
					BFALSE;
				}
			return (BgL_varcz00_bglt) (BGl_z52thezd2varczd2nilz52zzcgen_copz00);
		}
	}



/* _varc-nil */
	obj_t BGl__varczd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4170)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			return (obj_t) (BGl_varczd2nilzd2zzcgen_copz00());
		}
	}



/* catom? */
	BGL_EXPORTED_DEF bool_t BGl_catomzf3zf3zzcgen_copz00(obj_t BgL_obj3436z00_281)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3436z00_281,
				BGl_catomz00zzcgen_copz00);
		}
	}



/* _catom? */
	obj_t BGl__catomzf3zf3zzcgen_copz00(obj_t BgL_envz00_4167,
		obj_t BgL_obj3436z00_4168)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3436z00_4168,
					BGl_catomz00zzcgen_copz00));
		}
	}



/* make-catom */
	BGL_EXPORTED_DEF BgL_catomz00_bglt BGl_makezd2catomzd2zzcgen_copz00(obj_t
		BgL_loc3415z00_285, obj_t BgL_value3416z00_286)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{	/* Cgen/cop.scm 42 */
				BgL_catomz00_bglt BgL_new3417z00_3230;

				{	/* Cgen/cop.scm 42 */
					BgL_catomz00_bglt BgL_res4944z00_3235;

					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_new3425z00_3231;

						BgL_new3425z00_3231 =
							((BgL_catomz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_catomz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3425z00_3231),
							BGl_classzd2numzd2zz__objectz00(BGl_catomz00zzcgen_copz00));
						{	/* Cgen/cop.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_6625;

							BgL_auxz00_6625 = (BgL_objectz00_bglt) (BgL_new3425z00_3231);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6625, BFALSE);
						}
						BgL_res4944z00_3235 = BgL_new3425z00_3231;
					}
					BgL_new3417z00_3230 = BgL_res4944z00_3235;
				}
				{	/* Cgen/cop.scm 42 */
					BgL_catomz00_bglt BgL_res4945z00_3241;

					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_new3421z00_3236;

						BgL_new3421z00_3236 = BgL_new3417z00_3230;
						{	/* Cgen/cop.scm 42 */
							obj_t BgL_loc3419z00_3239;

							obj_t BgL_value3420z00_3240;

							BgL_loc3419z00_3239 = BgL_loc3415z00_285;
							BgL_value3420z00_3240 = BgL_value3416z00_286;
							((((BgL_catomz00_bglt) CREF(BgL_new3421z00_3236))->BgL_locz00) =
								((obj_t) BgL_loc3419z00_3239), BUNSPEC);
							((((BgL_catomz00_bglt) CREF(BgL_new3421z00_3236))->BgL_valuez00) =
								((obj_t) BgL_value3420z00_3240), BUNSPEC);
							BgL_res4945z00_3241 = BgL_new3421z00_3236;
					}} BgL_res4945z00_3241;
				}
				return BgL_new3417z00_3230;
			}
		}
	}



/* _make-catom */
	obj_t BGl__makezd2catomzd2zzcgen_copz00(obj_t BgL_envz00_4452,
		obj_t BgL_loc3415z00_4453, obj_t BgL_value3416z00_4454)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			return
				(obj_t) (BGl_makezd2catomzd2zzcgen_copz00(BgL_loc3415z00_4453,
					BgL_value3416z00_4454));
		}
	}



/* fill-catom! */
	BGL_EXPORTED_DEF BgL_catomz00_bglt
		BGl_fillzd2catomz12zc0zzcgen_copz00(BgL_catomz00_bglt BgL_new3421z00_287,
		obj_t BgL_loc3419z00_288, obj_t BgL_value3420z00_289)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{	/* Cgen/cop.scm 42 */
				obj_t BgL_loc3419z00_5055;

				obj_t BgL_value3420z00_5056;

				BgL_loc3419z00_5055 = BgL_loc3419z00_288;
				BgL_value3420z00_5056 = BgL_value3420z00_289;
				((((BgL_catomz00_bglt) CREF(BgL_new3421z00_287))->BgL_locz00) =
					((obj_t) BgL_loc3419z00_5055), BUNSPEC);
				((((BgL_catomz00_bglt) CREF(BgL_new3421z00_287))->BgL_valuez00) =
					((obj_t) BgL_value3420z00_5056), BUNSPEC);
				return BgL_new3421z00_287;
			}
		}
	}



/* _fill-catom! */
	obj_t BGl__fillzd2catomz12zc0zzcgen_copz00(obj_t BgL_envz00_4455,
		obj_t BgL_new3421z00_4456, obj_t BgL_loc3419z00_4457,
		obj_t BgL_value3420z00_4458)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{	/* Cgen/cop.scm 42 */
				BgL_catomz00_bglt BgL_auxz00_6634;

				{	/* Cgen/cop.scm 42 */
					BgL_catomz00_bglt BgL_res5083z00_5062;

					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_new3421z00_5057;

						BgL_new3421z00_5057 = (BgL_catomz00_bglt) (BgL_new3421z00_4456);
						{	/* Cgen/cop.scm 42 */
							obj_t BgL_loc3419z00_5060;

							obj_t BgL_value3420z00_5061;

							BgL_loc3419z00_5060 = BgL_loc3419z00_4457;
							BgL_value3420z00_5061 = BgL_value3420z00_4458;
							((((BgL_catomz00_bglt) CREF(BgL_new3421z00_5057))->BgL_locz00) =
								((obj_t) BgL_loc3419z00_5060), BUNSPEC);
							((((BgL_catomz00_bglt) CREF(BgL_new3421z00_5057))->BgL_valuez00) =
								((obj_t) BgL_value3420z00_5061), BUNSPEC);
							BgL_res5083z00_5062 = BgL_new3421z00_5057;
						}
					}
					BgL_auxz00_6634 = BgL_res5083z00_5062;
				}
				return (obj_t) (BgL_auxz00_6634);
			}
		}
	}



/* %allocate-catom */
	BGL_EXPORTED_DEF BgL_catomz00_bglt BGl_z52allocatezd2catomz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{	/* Cgen/cop.scm 42 */
				BgL_catomz00_bglt BgL_new3425z00_5063;

				BgL_new3425z00_5063 =
					((BgL_catomz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_catomz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3425z00_5063),
					BGl_classzd2numzd2zz__objectz00(BGl_catomz00zzcgen_copz00));
				{	/* Cgen/cop.scm 42 */
					BgL_objectz00_bglt BgL_auxz00_6643;

					BgL_auxz00_6643 = (BgL_objectz00_bglt) (BgL_new3425z00_5063);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6643, BFALSE);
				}
				return BgL_new3425z00_5063;
			}
		}
	}



/* _%allocate-catom */
	obj_t BGl__z52allocatezd2catomz80zzcgen_copz00(obj_t BgL_envz00_4165)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{	/* Cgen/cop.scm 42 */
				BgL_catomz00_bglt BgL_auxz00_6646;

				{	/* Cgen/cop.scm 42 */
					BgL_catomz00_bglt BgL_res5084z00_5067;

					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_new3425z00_5065;

						BgL_new3425z00_5065 =
							((BgL_catomz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_catomz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3425z00_5065),
							BGl_classzd2numzd2zz__objectz00(BGl_catomz00zzcgen_copz00));
						{	/* Cgen/cop.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_6651;

							BgL_auxz00_6651 = (BgL_objectz00_bglt) (BgL_new3425z00_5065);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6651, BFALSE);
						}
						BgL_res5084z00_5067 = BgL_new3425z00_5065;
					}
					BgL_auxz00_6646 = BgL_res5084z00_5067;
				}
				return (obj_t) (BgL_auxz00_6646);
			}
		}
	}



/* catom-nil */
	BGL_EXPORTED_DEF BgL_catomz00_bglt BGl_catomzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			if ((BGl_z52thezd2catomzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 42 */
					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_res4946z00_3252;

						{	/* Cgen/cop.scm 42 */
							BgL_catomz00_bglt BgL_new3425z00_3248;

							BgL_new3425z00_3248 =
								((BgL_catomz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_catomz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3425z00_3248),
								BGl_classzd2numzd2zz__objectz00(BGl_catomz00zzcgen_copz00));
							{	/* Cgen/cop.scm 42 */
								BgL_objectz00_bglt BgL_auxz00_6661;

								BgL_auxz00_6661 = (BgL_objectz00_bglt) (BgL_new3425z00_3248);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6661, BFALSE);
							}
							BgL_res4946z00_3252 = BgL_new3425z00_3248;
						}
						BGl_z52thezd2catomzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4946z00_3252);
					}
					{	/* Cgen/cop.scm 42 */
						BgL_catomz00_bglt BgL_res4947z00_3258;

						{	/* Cgen/cop.scm 42 */
							BgL_catomz00_bglt BgL_new3421z00_3253;

							BgL_new3421z00_3253 =
								(BgL_catomz00_bglt) (BGl_z52thezd2catomzd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 42 */
								obj_t BgL_loc3419z00_3256;

								obj_t BgL_value3420z00_3257;

								BgL_loc3419z00_3256 = BUNSPEC;
								BgL_value3420z00_3257 = BUNSPEC;
								((((BgL_catomz00_bglt) CREF(BgL_new3421z00_3253))->BgL_locz00) =
									((obj_t) BgL_loc3419z00_3256), BUNSPEC);
								((((BgL_catomz00_bglt) CREF(BgL_new3421z00_3253))->
										BgL_valuez00) = ((obj_t) BgL_value3420z00_3257), BUNSPEC);
								BgL_res4947z00_3258 = BgL_new3421z00_3253;
						}}
						(obj_t) (BgL_res4947z00_3258);
				}}
			else
				{	/* Cgen/cop.scm 42 */
					BFALSE;
				}
			return (BgL_catomz00_bglt) (BGl_z52thezd2catomzd2nilz52zzcgen_copz00);
		}
	}



/* _catom-nil */
	obj_t BGl__catomzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4166)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			return (obj_t) (BGl_catomzd2nilzd2zzcgen_copz00());
		}
	}



/* cvoid? */
	BGL_EXPORTED_DEF bool_t BGl_cvoidzf3zf3zzcgen_copz00(obj_t BgL_obj3410z00_291)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3410z00_291,
				BGl_cvoidz00zzcgen_copz00);
		}
	}



/* _cvoid? */
	obj_t BGl__cvoidzf3zf3zzcgen_copz00(obj_t BgL_envz00_4163,
		obj_t BgL_obj3410z00_4164)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3410z00_4164,
					BGl_cvoidz00zzcgen_copz00));
		}
	}



/* make-cvoid */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt BGl_makezd2cvoidzd2zzcgen_copz00(obj_t
		BgL_loc3389z00_295, BgL_copz00_bglt BgL_value3390z00_296)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{	/* Cgen/cop.scm 39 */
				BgL_cvoidz00_bglt BgL_new3391z00_3259;

				{	/* Cgen/cop.scm 39 */
					BgL_cvoidz00_bglt BgL_res4948z00_3264;

					{	/* Cgen/cop.scm 39 */
						BgL_cvoidz00_bglt BgL_new3399z00_3260;

						BgL_new3399z00_3260 =
							((BgL_cvoidz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvoidz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3399z00_3260),
							BGl_classzd2numzd2zz__objectz00(BGl_cvoidz00zzcgen_copz00));
						{	/* Cgen/cop.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_6679;

							BgL_auxz00_6679 = (BgL_objectz00_bglt) (BgL_new3399z00_3260);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6679, BFALSE);
						}
						BgL_res4948z00_3264 = BgL_new3399z00_3260;
					}
					BgL_new3391z00_3259 = BgL_res4948z00_3264;
				}
				{	/* Cgen/cop.scm 39 */
					BgL_cvoidz00_bglt BgL_res4949z00_3270;

					{	/* Cgen/cop.scm 39 */
						BgL_cvoidz00_bglt BgL_new3395z00_3265;

						BgL_new3395z00_3265 = BgL_new3391z00_3259;
						{	/* Cgen/cop.scm 39 */
							obj_t BgL_loc3393z00_3268;

							BgL_copz00_bglt BgL_value3394z00_3269;

							BgL_loc3393z00_3268 = BgL_loc3389z00_295;
							BgL_value3394z00_3269 = BgL_value3390z00_296;
							((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_3265))->BgL_locz00) =
								((obj_t) BgL_loc3393z00_3268), BUNSPEC);
							((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_3265))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3394z00_3269), BUNSPEC);
							BgL_res4949z00_3270 = BgL_new3395z00_3265;
					}} BgL_res4949z00_3270;
				}
				return BgL_new3391z00_3259;
			}
		}
	}



/* _make-cvoid */
	obj_t BGl__makezd2cvoidzd2zzcgen_copz00(obj_t BgL_envz00_4459,
		obj_t BgL_loc3389z00_4460, obj_t BgL_value3390z00_4461)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			return
				(obj_t) (BGl_makezd2cvoidzd2zzcgen_copz00(BgL_loc3389z00_4460,
					(BgL_copz00_bglt) (BgL_value3390z00_4461)));
		}
	}



/* fill-cvoid! */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt
		BGl_fillzd2cvoidz12zc0zzcgen_copz00(BgL_cvoidz00_bglt BgL_new3395z00_297,
		obj_t BgL_loc3393z00_298, BgL_copz00_bglt BgL_value3394z00_299)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{	/* Cgen/cop.scm 39 */
				obj_t BgL_loc3393z00_5069;

				BgL_copz00_bglt BgL_value3394z00_5070;

				BgL_loc3393z00_5069 = BgL_loc3393z00_298;
				BgL_value3394z00_5070 = BgL_value3394z00_299;
				((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_297))->BgL_locz00) =
					((obj_t) BgL_loc3393z00_5069), BUNSPEC);
				((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_297))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3394z00_5070), BUNSPEC);
				return BgL_new3395z00_297;
			}
		}
	}



/* _fill-cvoid! */
	obj_t BGl__fillzd2cvoidz12zc0zzcgen_copz00(obj_t BgL_envz00_4462,
		obj_t BgL_new3395z00_4463, obj_t BgL_loc3393z00_4464,
		obj_t BgL_value3394z00_4465)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{	/* Cgen/cop.scm 39 */
				BgL_cvoidz00_bglt BgL_auxz00_6689;

				{	/* Cgen/cop.scm 39 */
					BgL_cvoidz00_bglt BgL_res5085z00_5076;

					{	/* Cgen/cop.scm 39 */
						BgL_cvoidz00_bglt BgL_new3395z00_5071;

						BgL_copz00_bglt BgL_value3394z00_5073;

						BgL_new3395z00_5071 = (BgL_cvoidz00_bglt) (BgL_new3395z00_4463);
						BgL_value3394z00_5073 = (BgL_copz00_bglt) (BgL_value3394z00_4465);
						{	/* Cgen/cop.scm 39 */
							obj_t BgL_loc3393z00_5074;

							BgL_copz00_bglt BgL_value3394z00_5075;

							BgL_loc3393z00_5074 = BgL_loc3393z00_4464;
							BgL_value3394z00_5075 = BgL_value3394z00_5073;
							((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_5071))->BgL_locz00) =
								((obj_t) BgL_loc3393z00_5074), BUNSPEC);
							((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_5071))->BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3394z00_5075), BUNSPEC);
							BgL_res5085z00_5076 = BgL_new3395z00_5071;
						}
					}
					BgL_auxz00_6689 = BgL_res5085z00_5076;
				}
				return (obj_t) (BgL_auxz00_6689);
			}
		}
	}



/* %allocate-cvoid */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt BGl_z52allocatezd2cvoidz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{	/* Cgen/cop.scm 39 */
				BgL_cvoidz00_bglt BgL_new3399z00_5077;

				BgL_new3399z00_5077 =
					((BgL_cvoidz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cvoidz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3399z00_5077),
					BGl_classzd2numzd2zz__objectz00(BGl_cvoidz00zzcgen_copz00));
				{	/* Cgen/cop.scm 39 */
					BgL_objectz00_bglt BgL_auxz00_6699;

					BgL_auxz00_6699 = (BgL_objectz00_bglt) (BgL_new3399z00_5077);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6699, BFALSE);
				}
				return BgL_new3399z00_5077;
			}
		}
	}



/* _%allocate-cvoid */
	obj_t BGl__z52allocatezd2cvoidz80zzcgen_copz00(obj_t BgL_envz00_4161)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{	/* Cgen/cop.scm 39 */
				BgL_cvoidz00_bglt BgL_auxz00_6702;

				{	/* Cgen/cop.scm 39 */
					BgL_cvoidz00_bglt BgL_res5086z00_5081;

					{	/* Cgen/cop.scm 39 */
						BgL_cvoidz00_bglt BgL_new3399z00_5079;

						BgL_new3399z00_5079 =
							((BgL_cvoidz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvoidz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3399z00_5079),
							BGl_classzd2numzd2zz__objectz00(BGl_cvoidz00zzcgen_copz00));
						{	/* Cgen/cop.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_6707;

							BgL_auxz00_6707 = (BgL_objectz00_bglt) (BgL_new3399z00_5079);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6707, BFALSE);
						}
						BgL_res5086z00_5081 = BgL_new3399z00_5079;
					}
					BgL_auxz00_6702 = BgL_res5086z00_5081;
				}
				return (obj_t) (BgL_auxz00_6702);
			}
		}
	}



/* cvoid-nil */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt BGl_cvoidzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			if ((BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 39 */
					{	/* Cgen/cop.scm 39 */
						BgL_cvoidz00_bglt BgL_res4950z00_3281;

						{	/* Cgen/cop.scm 39 */
							BgL_cvoidz00_bglt BgL_new3399z00_3277;

							BgL_new3399z00_3277 =
								((BgL_cvoidz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cvoidz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3399z00_3277),
								BGl_classzd2numzd2zz__objectz00(BGl_cvoidz00zzcgen_copz00));
							{	/* Cgen/cop.scm 39 */
								BgL_objectz00_bglt BgL_auxz00_6717;

								BgL_auxz00_6717 = (BgL_objectz00_bglt) (BgL_new3399z00_3277);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6717, BFALSE);
							}
							BgL_res4950z00_3281 = BgL_new3399z00_3277;
						}
						BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4950z00_3281);
					}
					{	/* Cgen/cop.scm 39 */
						BgL_copz00_bglt BgL_arg4549z00_1490;

						BgL_arg4549z00_1490 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 39 */
							BgL_cvoidz00_bglt BgL_res4951z00_3287;

							{	/* Cgen/cop.scm 39 */
								BgL_cvoidz00_bglt BgL_new3395z00_3282;

								BgL_new3395z00_3282 =
									(BgL_cvoidz00_bglt)
									(BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 39 */
									obj_t BgL_loc3393z00_3285;

									BgL_copz00_bglt BgL_value3394z00_3286;

									BgL_loc3393z00_3285 = BUNSPEC;
									BgL_value3394z00_3286 = BgL_arg4549z00_1490;
									((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_3282))->
											BgL_locz00) = ((obj_t) BgL_loc3393z00_3285), BUNSPEC);
									((((BgL_cvoidz00_bglt) CREF(BgL_new3395z00_3282))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3394z00_3286), BUNSPEC);
									BgL_res4951z00_3287 = BgL_new3395z00_3282;
							}}
							(obj_t) (BgL_res4951z00_3287);
				}}}
			else
				{	/* Cgen/cop.scm 39 */
					BFALSE;
				}
			return (BgL_cvoidz00_bglt) (BGl_z52thezd2cvoidzd2nilz52zzcgen_copz00);
		}
	}



/* _cvoid-nil */
	obj_t BGl__cvoidzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4162)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			return (obj_t) (BGl_cvoidzd2nilzd2zzcgen_copz00());
		}
	}



/* creturn? */
	BGL_EXPORTED_DEF bool_t BGl_creturnzf3zf3zzcgen_copz00(obj_t
		BgL_obj3384z00_301)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3384z00_301,
				BGl_creturnz00zzcgen_copz00);
		}
	}



/* _creturn? */
	obj_t BGl__creturnzf3zf3zzcgen_copz00(obj_t BgL_envz00_4159,
		obj_t BgL_obj3384z00_4160)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3384z00_4160,
					BGl_creturnz00zzcgen_copz00));
		}
	}



/* make-creturn */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt BGl_makezd2creturnzd2zzcgen_copz00(obj_t
		BgL_loc3363z00_305, BgL_copz00_bglt BgL_value3364z00_306)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{	/* Cgen/cop.scm 36 */
				BgL_creturnz00_bglt BgL_new3365z00_3288;

				{	/* Cgen/cop.scm 36 */
					BgL_creturnz00_bglt BgL_res4952z00_3293;

					{	/* Cgen/cop.scm 36 */
						BgL_creturnz00_bglt BgL_new3373z00_3289;

						BgL_new3373z00_3289 =
							((BgL_creturnz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_creturnz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3373z00_3289),
							BGl_classzd2numzd2zz__objectz00(BGl_creturnz00zzcgen_copz00));
						{	/* Cgen/cop.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_6736;

							BgL_auxz00_6736 = (BgL_objectz00_bglt) (BgL_new3373z00_3289);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6736, BFALSE);
						}
						BgL_res4952z00_3293 = BgL_new3373z00_3289;
					}
					BgL_new3365z00_3288 = BgL_res4952z00_3293;
				}
				{	/* Cgen/cop.scm 36 */
					BgL_creturnz00_bglt BgL_res4953z00_3299;

					{	/* Cgen/cop.scm 36 */
						BgL_creturnz00_bglt BgL_new3369z00_3294;

						BgL_new3369z00_3294 = BgL_new3365z00_3288;
						{	/* Cgen/cop.scm 36 */
							obj_t BgL_loc3367z00_3297;

							BgL_copz00_bglt BgL_value3368z00_3298;

							BgL_loc3367z00_3297 = BgL_loc3363z00_305;
							BgL_value3368z00_3298 = BgL_value3364z00_306;
							((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_3294))->BgL_locz00) =
								((obj_t) BgL_loc3367z00_3297), BUNSPEC);
							((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_3294))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3368z00_3298), BUNSPEC);
							BgL_res4953z00_3299 = BgL_new3369z00_3294;
					}} BgL_res4953z00_3299;
				}
				return BgL_new3365z00_3288;
			}
		}
	}



/* _make-creturn */
	obj_t BGl__makezd2creturnzd2zzcgen_copz00(obj_t BgL_envz00_4466,
		obj_t BgL_loc3363z00_4467, obj_t BgL_value3364z00_4468)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			return
				(obj_t) (BGl_makezd2creturnzd2zzcgen_copz00(BgL_loc3363z00_4467,
					(BgL_copz00_bglt) (BgL_value3364z00_4468)));
		}
	}



/* fill-creturn! */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt
		BGl_fillzd2creturnz12zc0zzcgen_copz00(BgL_creturnz00_bglt
		BgL_new3369z00_307, obj_t BgL_loc3367z00_308,
		BgL_copz00_bglt BgL_value3368z00_309)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{	/* Cgen/cop.scm 36 */
				obj_t BgL_loc3367z00_5083;

				BgL_copz00_bglt BgL_value3368z00_5084;

				BgL_loc3367z00_5083 = BgL_loc3367z00_308;
				BgL_value3368z00_5084 = BgL_value3368z00_309;
				((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_307))->BgL_locz00) =
					((obj_t) BgL_loc3367z00_5083), BUNSPEC);
				((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_307))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value3368z00_5084), BUNSPEC);
				return BgL_new3369z00_307;
			}
		}
	}



/* _fill-creturn! */
	obj_t BGl__fillzd2creturnz12zc0zzcgen_copz00(obj_t BgL_envz00_4469,
		obj_t BgL_new3369z00_4470, obj_t BgL_loc3367z00_4471,
		obj_t BgL_value3368z00_4472)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{	/* Cgen/cop.scm 36 */
				BgL_creturnz00_bglt BgL_auxz00_6746;

				{	/* Cgen/cop.scm 36 */
					BgL_creturnz00_bglt BgL_res5087z00_5090;

					{	/* Cgen/cop.scm 36 */
						BgL_creturnz00_bglt BgL_new3369z00_5085;

						BgL_copz00_bglt BgL_value3368z00_5087;

						BgL_new3369z00_5085 = (BgL_creturnz00_bglt) (BgL_new3369z00_4470);
						BgL_value3368z00_5087 = (BgL_copz00_bglt) (BgL_value3368z00_4472);
						{	/* Cgen/cop.scm 36 */
							obj_t BgL_loc3367z00_5088;

							BgL_copz00_bglt BgL_value3368z00_5089;

							BgL_loc3367z00_5088 = BgL_loc3367z00_4471;
							BgL_value3368z00_5089 = BgL_value3368z00_5087;
							((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_5085))->BgL_locz00) =
								((obj_t) BgL_loc3367z00_5088), BUNSPEC);
							((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_5085))->
									BgL_valuez00) =
								((BgL_copz00_bglt) BgL_value3368z00_5089), BUNSPEC);
							BgL_res5087z00_5090 = BgL_new3369z00_5085;
						}
					}
					BgL_auxz00_6746 = BgL_res5087z00_5090;
				}
				return (obj_t) (BgL_auxz00_6746);
			}
		}
	}



/* %allocate-creturn */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt
		BGl_z52allocatezd2creturnz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{	/* Cgen/cop.scm 36 */
				BgL_creturnz00_bglt BgL_new3373z00_5091;

				BgL_new3373z00_5091 =
					((BgL_creturnz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_creturnz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3373z00_5091),
					BGl_classzd2numzd2zz__objectz00(BGl_creturnz00zzcgen_copz00));
				{	/* Cgen/cop.scm 36 */
					BgL_objectz00_bglt BgL_auxz00_6756;

					BgL_auxz00_6756 = (BgL_objectz00_bglt) (BgL_new3373z00_5091);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6756, BFALSE);
				}
				return BgL_new3373z00_5091;
			}
		}
	}



/* _%allocate-creturn */
	obj_t BGl__z52allocatezd2creturnz80zzcgen_copz00(obj_t BgL_envz00_4157)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{	/* Cgen/cop.scm 36 */
				BgL_creturnz00_bglt BgL_auxz00_6759;

				{	/* Cgen/cop.scm 36 */
					BgL_creturnz00_bglt BgL_res5088z00_5095;

					{	/* Cgen/cop.scm 36 */
						BgL_creturnz00_bglt BgL_new3373z00_5093;

						BgL_new3373z00_5093 =
							((BgL_creturnz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_creturnz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3373z00_5093),
							BGl_classzd2numzd2zz__objectz00(BGl_creturnz00zzcgen_copz00));
						{	/* Cgen/cop.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_6764;

							BgL_auxz00_6764 = (BgL_objectz00_bglt) (BgL_new3373z00_5093);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6764, BFALSE);
						}
						BgL_res5088z00_5095 = BgL_new3373z00_5093;
					}
					BgL_auxz00_6759 = BgL_res5088z00_5095;
				}
				return (obj_t) (BgL_auxz00_6759);
			}
		}
	}



/* creturn-nil */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt BGl_creturnzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			if ((BGl_z52thezd2creturnzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 36 */
					{	/* Cgen/cop.scm 36 */
						BgL_creturnz00_bglt BgL_res4954z00_3310;

						{	/* Cgen/cop.scm 36 */
							BgL_creturnz00_bglt BgL_new3373z00_3306;

							BgL_new3373z00_3306 =
								((BgL_creturnz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_creturnz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3373z00_3306),
								BGl_classzd2numzd2zz__objectz00(BGl_creturnz00zzcgen_copz00));
							{	/* Cgen/cop.scm 36 */
								BgL_objectz00_bglt BgL_auxz00_6774;

								BgL_auxz00_6774 = (BgL_objectz00_bglt) (BgL_new3373z00_3306);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6774, BFALSE);
							}
							BgL_res4954z00_3310 = BgL_new3373z00_3306;
						}
						BGl_z52thezd2creturnzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4954z00_3310);
					}
					{	/* Cgen/cop.scm 36 */
						BgL_copz00_bglt BgL_arg4552z00_1497;

						BgL_arg4552z00_1497 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 36 */
							BgL_creturnz00_bglt BgL_res4955z00_3316;

							{	/* Cgen/cop.scm 36 */
								BgL_creturnz00_bglt BgL_new3369z00_3311;

								BgL_new3369z00_3311 =
									(BgL_creturnz00_bglt)
									(BGl_z52thezd2creturnzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 36 */
									obj_t BgL_loc3367z00_3314;

									BgL_copz00_bglt BgL_value3368z00_3315;

									BgL_loc3367z00_3314 = BUNSPEC;
									BgL_value3368z00_3315 = BgL_arg4552z00_1497;
									((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_3311))->
											BgL_locz00) = ((obj_t) BgL_loc3367z00_3314), BUNSPEC);
									((((BgL_creturnz00_bglt) CREF(BgL_new3369z00_3311))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_value3368z00_3315), BUNSPEC);
									BgL_res4955z00_3316 = BgL_new3369z00_3311;
							}}
							(obj_t) (BgL_res4955z00_3316);
				}}}
			else
				{	/* Cgen/cop.scm 36 */
					BFALSE;
				}
			return (BgL_creturnz00_bglt) (BGl_z52thezd2creturnzd2nilz52zzcgen_copz00);
		}
	}



/* _creturn-nil */
	obj_t BGl__creturnzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4158)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			return (obj_t) (BGl_creturnzd2nilzd2zzcgen_copz00());
		}
	}



/* block? */
	BGL_EXPORTED_DEF bool_t BGl_blockzf3zf3zzcgen_copz00(obj_t BgL_obj3358z00_311)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3358z00_311,
				BGl_blockz00zzcgen_copz00);
		}
	}



/* _block? */
	obj_t BGl__blockzf3zf3zzcgen_copz00(obj_t BgL_envz00_4155,
		obj_t BgL_obj3358z00_4156)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3358z00_4156,
					BGl_blockz00zzcgen_copz00));
		}
	}



/* make-block */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_makezd2blockzd2zzcgen_copz00(obj_t
		BgL_loc3337z00_315, BgL_copz00_bglt BgL_body3338z00_316)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{	/* Cgen/cop.scm 33 */
				BgL_blockz00_bglt BgL_new3339z00_3317;

				{	/* Cgen/cop.scm 33 */
					BgL_blockz00_bglt BgL_res4956z00_3322;

					{	/* Cgen/cop.scm 33 */
						BgL_blockz00_bglt BgL_new3347z00_3318;

						BgL_new3347z00_3318 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3347z00_3318),
							BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzcgen_copz00));
						{	/* Cgen/cop.scm 33 */
							BgL_objectz00_bglt BgL_auxz00_6793;

							BgL_auxz00_6793 = (BgL_objectz00_bglt) (BgL_new3347z00_3318);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6793, BFALSE);
						}
						BgL_res4956z00_3322 = BgL_new3347z00_3318;
					}
					BgL_new3339z00_3317 = BgL_res4956z00_3322;
				}
				{	/* Cgen/cop.scm 33 */
					BgL_blockz00_bglt BgL_res4957z00_3328;

					{	/* Cgen/cop.scm 33 */
						BgL_blockz00_bglt BgL_new3343z00_3323;

						BgL_new3343z00_3323 = BgL_new3339z00_3317;
						{	/* Cgen/cop.scm 33 */
							obj_t BgL_loc3341z00_3326;

							BgL_copz00_bglt BgL_body3342z00_3327;

							BgL_loc3341z00_3326 = BgL_loc3337z00_315;
							BgL_body3342z00_3327 = BgL_body3338z00_316;
							((((BgL_blockz00_bglt) CREF(BgL_new3343z00_3323))->BgL_locz00) =
								((obj_t) BgL_loc3341z00_3326), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new3343z00_3323))->BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body3342z00_3327), BUNSPEC);
							BgL_res4957z00_3328 = BgL_new3343z00_3323;
					}} BgL_res4957z00_3328;
				}
				return BgL_new3339z00_3317;
			}
		}
	}



/* _make-block */
	obj_t BGl__makezd2blockzd2zzcgen_copz00(obj_t BgL_envz00_4473,
		obj_t BgL_loc3337z00_4474, obj_t BgL_body3338z00_4475)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			return
				(obj_t) (BGl_makezd2blockzd2zzcgen_copz00(BgL_loc3337z00_4474,
					(BgL_copz00_bglt) (BgL_body3338z00_4475)));
		}
	}



/* fill-block! */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_fillzd2blockz12zc0zzcgen_copz00(BgL_blockz00_bglt BgL_new3343z00_317,
		obj_t BgL_loc3341z00_318, BgL_copz00_bglt BgL_body3342z00_319)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{	/* Cgen/cop.scm 33 */
				obj_t BgL_loc3341z00_5097;

				BgL_copz00_bglt BgL_body3342z00_5098;

				BgL_loc3341z00_5097 = BgL_loc3341z00_318;
				BgL_body3342z00_5098 = BgL_body3342z00_319;
				((((BgL_blockz00_bglt) CREF(BgL_new3343z00_317))->BgL_locz00) =
					((obj_t) BgL_loc3341z00_5097), BUNSPEC);
				((((BgL_blockz00_bglt) CREF(BgL_new3343z00_317))->BgL_bodyz00) =
					((BgL_copz00_bglt) BgL_body3342z00_5098), BUNSPEC);
				return BgL_new3343z00_317;
			}
		}
	}



/* _fill-block! */
	obj_t BGl__fillzd2blockz12zc0zzcgen_copz00(obj_t BgL_envz00_4476,
		obj_t BgL_new3343z00_4477, obj_t BgL_loc3341z00_4478,
		obj_t BgL_body3342z00_4479)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{	/* Cgen/cop.scm 33 */
				BgL_blockz00_bglt BgL_auxz00_6803;

				{	/* Cgen/cop.scm 33 */
					BgL_blockz00_bglt BgL_res5089z00_5104;

					{	/* Cgen/cop.scm 33 */
						BgL_blockz00_bglt BgL_new3343z00_5099;

						BgL_copz00_bglt BgL_body3342z00_5101;

						BgL_new3343z00_5099 = (BgL_blockz00_bglt) (BgL_new3343z00_4477);
						BgL_body3342z00_5101 = (BgL_copz00_bglt) (BgL_body3342z00_4479);
						{	/* Cgen/cop.scm 33 */
							obj_t BgL_loc3341z00_5102;

							BgL_copz00_bglt BgL_body3342z00_5103;

							BgL_loc3341z00_5102 = BgL_loc3341z00_4478;
							BgL_body3342z00_5103 = BgL_body3342z00_5101;
							((((BgL_blockz00_bglt) CREF(BgL_new3343z00_5099))->BgL_locz00) =
								((obj_t) BgL_loc3341z00_5102), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new3343z00_5099))->BgL_bodyz00) =
								((BgL_copz00_bglt) BgL_body3342z00_5103), BUNSPEC);
							BgL_res5089z00_5104 = BgL_new3343z00_5099;
						}
					}
					BgL_auxz00_6803 = BgL_res5089z00_5104;
				}
				return (obj_t) (BgL_auxz00_6803);
			}
		}
	}



/* %allocate-block */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_z52allocatezd2blockz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{	/* Cgen/cop.scm 33 */
				BgL_blockz00_bglt BgL_new3347z00_5105;

				BgL_new3347z00_5105 =
					((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_blockz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3347z00_5105),
					BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzcgen_copz00));
				{	/* Cgen/cop.scm 33 */
					BgL_objectz00_bglt BgL_auxz00_6813;

					BgL_auxz00_6813 = (BgL_objectz00_bglt) (BgL_new3347z00_5105);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6813, BFALSE);
				}
				return BgL_new3347z00_5105;
			}
		}
	}



/* _%allocate-block */
	obj_t BGl__z52allocatezd2blockz80zzcgen_copz00(obj_t BgL_envz00_4153)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{	/* Cgen/cop.scm 33 */
				BgL_blockz00_bglt BgL_auxz00_6816;

				{	/* Cgen/cop.scm 33 */
					BgL_blockz00_bglt BgL_res5090z00_5109;

					{	/* Cgen/cop.scm 33 */
						BgL_blockz00_bglt BgL_new3347z00_5107;

						BgL_new3347z00_5107 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3347z00_5107),
							BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzcgen_copz00));
						{	/* Cgen/cop.scm 33 */
							BgL_objectz00_bglt BgL_auxz00_6821;

							BgL_auxz00_6821 = (BgL_objectz00_bglt) (BgL_new3347z00_5107);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6821, BFALSE);
						}
						BgL_res5090z00_5109 = BgL_new3347z00_5107;
					}
					BgL_auxz00_6816 = BgL_res5090z00_5109;
				}
				return (obj_t) (BgL_auxz00_6816);
			}
		}
	}



/* block-nil */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_blockzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			if ((BGl_z52thezd2blockzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 33 */
					{	/* Cgen/cop.scm 33 */
						BgL_blockz00_bglt BgL_res4958z00_3339;

						{	/* Cgen/cop.scm 33 */
							BgL_blockz00_bglt BgL_new3347z00_3335;

							BgL_new3347z00_3335 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3347z00_3335),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzcgen_copz00));
							{	/* Cgen/cop.scm 33 */
								BgL_objectz00_bglt BgL_auxz00_6831;

								BgL_auxz00_6831 = (BgL_objectz00_bglt) (BgL_new3347z00_3335);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6831, BFALSE);
							}
							BgL_res4958z00_3339 = BgL_new3347z00_3335;
						}
						BGl_z52thezd2blockzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4958z00_3339);
					}
					{	/* Cgen/cop.scm 33 */
						BgL_copz00_bglt BgL_arg4555z00_1504;

						BgL_arg4555z00_1504 = BGl_copzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 33 */
							BgL_blockz00_bglt BgL_res4959z00_3345;

							{	/* Cgen/cop.scm 33 */
								BgL_blockz00_bglt BgL_new3343z00_3340;

								BgL_new3343z00_3340 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2blockzd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 33 */
									obj_t BgL_loc3341z00_3343;

									BgL_copz00_bglt BgL_body3342z00_3344;

									BgL_loc3341z00_3343 = BUNSPEC;
									BgL_body3342z00_3344 = BgL_arg4555z00_1504;
									((((BgL_blockz00_bglt) CREF(BgL_new3343z00_3340))->
											BgL_locz00) = ((obj_t) BgL_loc3341z00_3343), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3343z00_3340))->
											BgL_bodyz00) =
										((BgL_copz00_bglt) BgL_body3342z00_3344), BUNSPEC);
									BgL_res4959z00_3345 = BgL_new3343z00_3340;
							}}
							(obj_t) (BgL_res4959z00_3345);
				}}}
			else
				{	/* Cgen/cop.scm 33 */
					BFALSE;
				}
			return (BgL_blockz00_bglt) (BGl_z52thezd2blockzd2nilz52zzcgen_copz00);
		}
	}



/* _block-nil */
	obj_t BGl__blockzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4154)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			return (obj_t) (BGl_blockzd2nilzd2zzcgen_copz00());
		}
	}



/* cgoto? */
	BGL_EXPORTED_DEF bool_t BGl_cgotozf3zf3zzcgen_copz00(obj_t BgL_obj3332z00_321)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3332z00_321,
				BGl_cgotoz00zzcgen_copz00);
		}
	}



/* _cgoto? */
	obj_t BGl__cgotozf3zf3zzcgen_copz00(obj_t BgL_envz00_4151,
		obj_t BgL_obj3332z00_4152)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3332z00_4152,
					BGl_cgotoz00zzcgen_copz00));
		}
	}



/* make-cgoto */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt BGl_makezd2cgotozd2zzcgen_copz00(obj_t
		BgL_loc3311z00_325, BgL_clabelz00_bglt BgL_label3312z00_326)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{	/* Cgen/cop.scm 30 */
				BgL_cgotoz00_bglt BgL_new3313z00_3346;

				{	/* Cgen/cop.scm 30 */
					BgL_cgotoz00_bglt BgL_res4960z00_3351;

					{	/* Cgen/cop.scm 30 */
						BgL_cgotoz00_bglt BgL_new3321z00_3347;

						BgL_new3321z00_3347 =
							((BgL_cgotoz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cgotoz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3321z00_3347),
							BGl_classzd2numzd2zz__objectz00(BGl_cgotoz00zzcgen_copz00));
						{	/* Cgen/cop.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_6850;

							BgL_auxz00_6850 = (BgL_objectz00_bglt) (BgL_new3321z00_3347);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6850, BFALSE);
						}
						BgL_res4960z00_3351 = BgL_new3321z00_3347;
					}
					BgL_new3313z00_3346 = BgL_res4960z00_3351;
				}
				{	/* Cgen/cop.scm 30 */
					BgL_cgotoz00_bglt BgL_res4961z00_3357;

					{	/* Cgen/cop.scm 30 */
						BgL_cgotoz00_bglt BgL_new3317z00_3352;

						BgL_new3317z00_3352 = BgL_new3313z00_3346;
						{	/* Cgen/cop.scm 30 */
							obj_t BgL_loc3315z00_3355;

							BgL_clabelz00_bglt BgL_label3316z00_3356;

							BgL_loc3315z00_3355 = BgL_loc3311z00_325;
							BgL_label3316z00_3356 = BgL_label3312z00_326;
							((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_3352))->BgL_locz00) =
								((obj_t) BgL_loc3315z00_3355), BUNSPEC);
							((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_3352))->BgL_labelz00) =
								((BgL_clabelz00_bglt) BgL_label3316z00_3356), BUNSPEC);
							BgL_res4961z00_3357 = BgL_new3317z00_3352;
					}} BgL_res4961z00_3357;
				}
				return BgL_new3313z00_3346;
			}
		}
	}



/* _make-cgoto */
	obj_t BGl__makezd2cgotozd2zzcgen_copz00(obj_t BgL_envz00_4480,
		obj_t BgL_loc3311z00_4481, obj_t BgL_label3312z00_4482)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			return
				(obj_t) (BGl_makezd2cgotozd2zzcgen_copz00(BgL_loc3311z00_4481,
					(BgL_clabelz00_bglt) (BgL_label3312z00_4482)));
		}
	}



/* fill-cgoto! */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt
		BGl_fillzd2cgotoz12zc0zzcgen_copz00(BgL_cgotoz00_bglt BgL_new3317z00_327,
		obj_t BgL_loc3315z00_328, BgL_clabelz00_bglt BgL_label3316z00_329)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{	/* Cgen/cop.scm 30 */
				obj_t BgL_loc3315z00_5111;

				BgL_clabelz00_bglt BgL_label3316z00_5112;

				BgL_loc3315z00_5111 = BgL_loc3315z00_328;
				BgL_label3316z00_5112 = BgL_label3316z00_329;
				((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_327))->BgL_locz00) =
					((obj_t) BgL_loc3315z00_5111), BUNSPEC);
				((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_327))->BgL_labelz00) =
					((BgL_clabelz00_bglt) BgL_label3316z00_5112), BUNSPEC);
				return BgL_new3317z00_327;
			}
		}
	}



/* _fill-cgoto! */
	obj_t BGl__fillzd2cgotoz12zc0zzcgen_copz00(obj_t BgL_envz00_4483,
		obj_t BgL_new3317z00_4484, obj_t BgL_loc3315z00_4485,
		obj_t BgL_label3316z00_4486)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{	/* Cgen/cop.scm 30 */
				BgL_cgotoz00_bglt BgL_auxz00_6860;

				{	/* Cgen/cop.scm 30 */
					BgL_cgotoz00_bglt BgL_res5091z00_5118;

					{	/* Cgen/cop.scm 30 */
						BgL_cgotoz00_bglt BgL_new3317z00_5113;

						BgL_clabelz00_bglt BgL_label3316z00_5115;

						BgL_new3317z00_5113 = (BgL_cgotoz00_bglt) (BgL_new3317z00_4484);
						BgL_label3316z00_5115 =
							(BgL_clabelz00_bglt) (BgL_label3316z00_4486);
						{	/* Cgen/cop.scm 30 */
							obj_t BgL_loc3315z00_5116;

							BgL_clabelz00_bglt BgL_label3316z00_5117;

							BgL_loc3315z00_5116 = BgL_loc3315z00_4485;
							BgL_label3316z00_5117 = BgL_label3316z00_5115;
							((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_5113))->BgL_locz00) =
								((obj_t) BgL_loc3315z00_5116), BUNSPEC);
							((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_5113))->BgL_labelz00) =
								((BgL_clabelz00_bglt) BgL_label3316z00_5117), BUNSPEC);
							BgL_res5091z00_5118 = BgL_new3317z00_5113;
						}
					}
					BgL_auxz00_6860 = BgL_res5091z00_5118;
				}
				return (obj_t) (BgL_auxz00_6860);
			}
		}
	}



/* %allocate-cgoto */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt BGl_z52allocatezd2cgotoz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{	/* Cgen/cop.scm 30 */
				BgL_cgotoz00_bglt BgL_new3321z00_5119;

				BgL_new3321z00_5119 =
					((BgL_cgotoz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cgotoz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3321z00_5119),
					BGl_classzd2numzd2zz__objectz00(BGl_cgotoz00zzcgen_copz00));
				{	/* Cgen/cop.scm 30 */
					BgL_objectz00_bglt BgL_auxz00_6870;

					BgL_auxz00_6870 = (BgL_objectz00_bglt) (BgL_new3321z00_5119);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6870, BFALSE);
				}
				return BgL_new3321z00_5119;
			}
		}
	}



/* _%allocate-cgoto */
	obj_t BGl__z52allocatezd2cgotoz80zzcgen_copz00(obj_t BgL_envz00_4149)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{	/* Cgen/cop.scm 30 */
				BgL_cgotoz00_bglt BgL_auxz00_6873;

				{	/* Cgen/cop.scm 30 */
					BgL_cgotoz00_bglt BgL_res5092z00_5123;

					{	/* Cgen/cop.scm 30 */
						BgL_cgotoz00_bglt BgL_new3321z00_5121;

						BgL_new3321z00_5121 =
							((BgL_cgotoz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cgotoz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3321z00_5121),
							BGl_classzd2numzd2zz__objectz00(BGl_cgotoz00zzcgen_copz00));
						{	/* Cgen/cop.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_6878;

							BgL_auxz00_6878 = (BgL_objectz00_bglt) (BgL_new3321z00_5121);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6878, BFALSE);
						}
						BgL_res5092z00_5123 = BgL_new3321z00_5121;
					}
					BgL_auxz00_6873 = BgL_res5092z00_5123;
				}
				return (obj_t) (BgL_auxz00_6873);
			}
		}
	}



/* cgoto-nil */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt BGl_cgotozd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			if ((BGl_z52thezd2cgotozd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 30 */
					{	/* Cgen/cop.scm 30 */
						BgL_cgotoz00_bglt BgL_res4962z00_3368;

						{	/* Cgen/cop.scm 30 */
							BgL_cgotoz00_bglt BgL_new3321z00_3364;

							BgL_new3321z00_3364 =
								((BgL_cgotoz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cgotoz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3321z00_3364),
								BGl_classzd2numzd2zz__objectz00(BGl_cgotoz00zzcgen_copz00));
							{	/* Cgen/cop.scm 30 */
								BgL_objectz00_bglt BgL_auxz00_6888;

								BgL_auxz00_6888 = (BgL_objectz00_bglt) (BgL_new3321z00_3364);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6888, BFALSE);
							}
							BgL_res4962z00_3368 = BgL_new3321z00_3364;
						}
						BGl_z52thezd2cgotozd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4962z00_3368);
					}
					{	/* Cgen/cop.scm 30 */
						BgL_clabelz00_bglt BgL_arg4558z00_1511;

						BgL_arg4558z00_1511 = BGl_clabelzd2nilzd2zzcgen_copz00();
						{	/* Cgen/cop.scm 30 */
							BgL_cgotoz00_bglt BgL_res4963z00_3374;

							{	/* Cgen/cop.scm 30 */
								BgL_cgotoz00_bglt BgL_new3317z00_3369;

								BgL_new3317z00_3369 =
									(BgL_cgotoz00_bglt)
									(BGl_z52thezd2cgotozd2nilz52zzcgen_copz00);
								{	/* Cgen/cop.scm 30 */
									obj_t BgL_loc3315z00_3372;

									BgL_clabelz00_bglt BgL_label3316z00_3373;

									BgL_loc3315z00_3372 = BUNSPEC;
									BgL_label3316z00_3373 = BgL_arg4558z00_1511;
									((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_3369))->
											BgL_locz00) = ((obj_t) BgL_loc3315z00_3372), BUNSPEC);
									((((BgL_cgotoz00_bglt) CREF(BgL_new3317z00_3369))->
											BgL_labelz00) =
										((BgL_clabelz00_bglt) BgL_label3316z00_3373), BUNSPEC);
									BgL_res4963z00_3374 = BgL_new3317z00_3369;
							}}
							(obj_t) (BgL_res4963z00_3374);
				}}}
			else
				{	/* Cgen/cop.scm 30 */
					BFALSE;
				}
			return (BgL_cgotoz00_bglt) (BGl_z52thezd2cgotozd2nilz52zzcgen_copz00);
		}
	}



/* _cgoto-nil */
	obj_t BGl__cgotozd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4150)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			return (obj_t) (BGl_cgotozd2nilzd2zzcgen_copz00());
		}
	}



/* clabel? */
	BGL_EXPORTED_DEF bool_t BGl_clabelzf3zf3zzcgen_copz00(obj_t
		BgL_obj3305z00_331)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3305z00_331,
				BGl_clabelz00zzcgen_copz00);
		}
	}



/* _clabel? */
	obj_t BGl__clabelzf3zf3zzcgen_copz00(obj_t BgL_envz00_4147,
		obj_t BgL_obj3305z00_4148)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3305z00_4148,
					BGl_clabelz00zzcgen_copz00));
		}
	}



/* make-clabel */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt BGl_makezd2clabelzd2zzcgen_copz00(obj_t
		BgL_loc3270z00_335, obj_t BgL_name3271z00_336,
		bool_t BgL_usedzf33272zf3_337, obj_t BgL_body3273z00_338)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{	/* Cgen/cop.scm 25 */
				BgL_clabelz00_bglt BgL_new3274z00_3375;

				{	/* Cgen/cop.scm 25 */
					BgL_clabelz00_bglt BgL_res4964z00_3380;

					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_new3286z00_3376;

						BgL_new3286z00_3376 =
							((BgL_clabelz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_clabelz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3286z00_3376),
							BGl_classzd2numzd2zz__objectz00(BGl_clabelz00zzcgen_copz00));
						{	/* Cgen/cop.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_6907;

							BgL_auxz00_6907 = (BgL_objectz00_bglt) (BgL_new3286z00_3376);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6907, BFALSE);
						}
						BgL_res4964z00_3380 = BgL_new3286z00_3376;
					}
					BgL_new3274z00_3375 = BgL_res4964z00_3380;
				}
				{	/* Cgen/cop.scm 25 */
					BgL_clabelz00_bglt BgL_res4965z00_3390;

					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_new3280z00_3381;

						BgL_new3280z00_3381 = BgL_new3274z00_3375;
						{	/* Cgen/cop.scm 25 */
							obj_t BgL_loc3276z00_3386;

							obj_t BgL_name3277z00_3387;

							bool_t BgL_usedzf33278zf3_3388;

							obj_t BgL_body3279z00_3389;

							BgL_loc3276z00_3386 = BgL_loc3270z00_335;
							BgL_name3277z00_3387 = BgL_name3271z00_336;
							BgL_usedzf33278zf3_3388 = BgL_usedzf33272zf3_337;
							BgL_body3279z00_3389 = BgL_body3273z00_338;
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3381))->BgL_locz00) =
								((obj_t) BgL_loc3276z00_3386), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3381))->BgL_namez00) =
								((obj_t) BgL_name3277z00_3387), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3381))->
									BgL_usedzf3zf3) =
								((bool_t) BgL_usedzf33278zf3_3388), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3381))->BgL_bodyz00) =
								((obj_t) BgL_body3279z00_3389), BUNSPEC);
							BgL_res4965z00_3390 = BgL_new3280z00_3381;
					}} BgL_res4965z00_3390;
				}
				return BgL_new3274z00_3375;
			}
		}
	}



/* _make-clabel */
	obj_t BGl__makezd2clabelzd2zzcgen_copz00(obj_t BgL_envz00_4487,
		obj_t BgL_loc3270z00_4488, obj_t BgL_name3271z00_4489,
		obj_t BgL_usedzf33272zf3_4490, obj_t BgL_body3273z00_4491)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			return
				(obj_t) (BGl_makezd2clabelzd2zzcgen_copz00(BgL_loc3270z00_4488,
					BgL_name3271z00_4489, CBOOL(BgL_usedzf33272zf3_4490),
					BgL_body3273z00_4491));
		}
	}



/* fill-clabel! */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt
		BGl_fillzd2clabelz12zc0zzcgen_copz00(BgL_clabelz00_bglt BgL_new3280z00_339,
		obj_t BgL_loc3276z00_340, obj_t BgL_name3277z00_341,
		bool_t BgL_usedzf33278zf3_342, obj_t BgL_body3279z00_343)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{	/* Cgen/cop.scm 25 */
				obj_t BgL_loc3276z00_5125;

				obj_t BgL_name3277z00_5126;

				bool_t BgL_usedzf33278zf3_5127;

				obj_t BgL_body3279z00_5128;

				BgL_loc3276z00_5125 = BgL_loc3276z00_340;
				BgL_name3277z00_5126 = BgL_name3277z00_341;
				BgL_usedzf33278zf3_5127 = BgL_usedzf33278zf3_342;
				BgL_body3279z00_5128 = BgL_body3279z00_343;
				((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_339))->BgL_locz00) =
					((obj_t) BgL_loc3276z00_5125), BUNSPEC);
				((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_339))->BgL_namez00) =
					((obj_t) BgL_name3277z00_5126), BUNSPEC);
				((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_339))->BgL_usedzf3zf3) =
					((bool_t) BgL_usedzf33278zf3_5127), BUNSPEC);
				((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_339))->BgL_bodyz00) =
					((obj_t) BgL_body3279z00_5128), BUNSPEC);
				return BgL_new3280z00_339;
			}
		}
	}



/* _fill-clabel! */
	obj_t BGl__fillzd2clabelz12zc0zzcgen_copz00(obj_t BgL_envz00_4492,
		obj_t BgL_new3280z00_4493, obj_t BgL_loc3276z00_4494,
		obj_t BgL_name3277z00_4495, obj_t BgL_usedzf33278zf3_4496,
		obj_t BgL_body3279z00_4497)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{	/* Cgen/cop.scm 25 */
				BgL_clabelz00_bglt BgL_auxz00_6921;

				{	/* Cgen/cop.scm 25 */
					BgL_clabelz00_bglt BgL_res5093z00_5138;

					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_new3280z00_5129;

						obj_t BgL_name3277z00_5131;

						bool_t BgL_usedzf33278zf3_5132;

						BgL_new3280z00_5129 = (BgL_clabelz00_bglt) (BgL_new3280z00_4493);
						BgL_name3277z00_5131 = BgL_name3277z00_4495;
						BgL_usedzf33278zf3_5132 = CBOOL(BgL_usedzf33278zf3_4496);
						{	/* Cgen/cop.scm 25 */
							obj_t BgL_loc3276z00_5134;

							obj_t BgL_name3277z00_5135;

							bool_t BgL_usedzf33278zf3_5136;

							obj_t BgL_body3279z00_5137;

							BgL_loc3276z00_5134 = BgL_loc3276z00_4494;
							BgL_name3277z00_5135 = BgL_name3277z00_5131;
							BgL_usedzf33278zf3_5136 = BgL_usedzf33278zf3_5132;
							BgL_body3279z00_5137 = BgL_body3279z00_4497;
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_5129))->BgL_locz00) =
								((obj_t) BgL_loc3276z00_5134), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_5129))->BgL_namez00) =
								((obj_t) BgL_name3277z00_5135), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_5129))->
									BgL_usedzf3zf3) =
								((bool_t) BgL_usedzf33278zf3_5136), BUNSPEC);
							((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_5129))->BgL_bodyz00) =
								((obj_t) BgL_body3279z00_5137), BUNSPEC);
							BgL_res5093z00_5138 = BgL_new3280z00_5129;
						}
					}
					BgL_auxz00_6921 = BgL_res5093z00_5138;
				}
				return (obj_t) (BgL_auxz00_6921);
			}
		}
	}



/* %allocate-clabel */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt BGl_z52allocatezd2clabelz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{	/* Cgen/cop.scm 25 */
				BgL_clabelz00_bglt BgL_new3286z00_5139;

				BgL_new3286z00_5139 =
					((BgL_clabelz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_clabelz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3286z00_5139),
					BGl_classzd2numzd2zz__objectz00(BGl_clabelz00zzcgen_copz00));
				{	/* Cgen/cop.scm 25 */
					BgL_objectz00_bglt BgL_auxz00_6933;

					BgL_auxz00_6933 = (BgL_objectz00_bglt) (BgL_new3286z00_5139);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6933, BFALSE);
				}
				return BgL_new3286z00_5139;
			}
		}
	}



/* _%allocate-clabel */
	obj_t BGl__z52allocatezd2clabelz80zzcgen_copz00(obj_t BgL_envz00_4145)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{	/* Cgen/cop.scm 25 */
				BgL_clabelz00_bglt BgL_auxz00_6936;

				{	/* Cgen/cop.scm 25 */
					BgL_clabelz00_bglt BgL_res5094z00_5143;

					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_new3286z00_5141;

						BgL_new3286z00_5141 =
							((BgL_clabelz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_clabelz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3286z00_5141),
							BGl_classzd2numzd2zz__objectz00(BGl_clabelz00zzcgen_copz00));
						{	/* Cgen/cop.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_6941;

							BgL_auxz00_6941 = (BgL_objectz00_bglt) (BgL_new3286z00_5141);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6941, BFALSE);
						}
						BgL_res5094z00_5143 = BgL_new3286z00_5141;
					}
					BgL_auxz00_6936 = BgL_res5094z00_5143;
				}
				return (obj_t) (BgL_auxz00_6936);
			}
		}
	}



/* clabel-nil */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt BGl_clabelzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			if ((BGl_z52thezd2clabelzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 25 */
					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_res4966z00_3403;

						{	/* Cgen/cop.scm 25 */
							BgL_clabelz00_bglt BgL_new3286z00_3399;

							BgL_new3286z00_3399 =
								((BgL_clabelz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_clabelz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3286z00_3399),
								BGl_classzd2numzd2zz__objectz00(BGl_clabelz00zzcgen_copz00));
							{	/* Cgen/cop.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_6951;

								BgL_auxz00_6951 = (BgL_objectz00_bglt) (BgL_new3286z00_3399);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6951, BFALSE);
							}
							BgL_res4966z00_3403 = BgL_new3286z00_3399;
						}
						BGl_z52thezd2clabelzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4966z00_3403);
					}
					{	/* Cgen/cop.scm 25 */
						BgL_clabelz00_bglt BgL_res4967z00_3413;

						{	/* Cgen/cop.scm 25 */
							BgL_clabelz00_bglt BgL_new3280z00_3404;

							BgL_new3280z00_3404 =
								(BgL_clabelz00_bglt)
								(BGl_z52thezd2clabelzd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 25 */
								obj_t BgL_loc3276z00_3409;

								obj_t BgL_name3277z00_3410;

								bool_t BgL_usedzf33278zf3_3411;

								obj_t BgL_body3279z00_3412;

								BgL_loc3276z00_3409 = BUNSPEC;
								BgL_name3277z00_3410 = BGl_string4978z00zzcgen_copz00;
								BgL_usedzf33278zf3_3411 = ((bool_t) 0);
								BgL_body3279z00_3412 = BUNSPEC;
								((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3404))->
										BgL_locz00) = ((obj_t) BgL_loc3276z00_3409), BUNSPEC);
								((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3404))->
										BgL_namez00) = ((obj_t) BgL_name3277z00_3410), BUNSPEC);
								((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3404))->
										BgL_usedzf3zf3) =
									((bool_t) BgL_usedzf33278zf3_3411), BUNSPEC);
								((((BgL_clabelz00_bglt) CREF(BgL_new3280z00_3404))->
										BgL_bodyz00) = ((obj_t) BgL_body3279z00_3412), BUNSPEC);
								BgL_res4967z00_3413 = BgL_new3280z00_3404;
						}}
						(obj_t) (BgL_res4967z00_3413);
				}}
			else
				{	/* Cgen/cop.scm 25 */
					BFALSE;
				}
			return (BgL_clabelz00_bglt) (BGl_z52thezd2clabelzd2nilz52zzcgen_copz00);
		}
	}



/* _clabel-nil */
	obj_t BGl__clabelzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4146)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			return (obj_t) (BGl_clabelzd2nilzd2zzcgen_copz00());
		}
	}



/* cop? */
	BGL_EXPORTED_DEF bool_t BGl_copzf3zf3zzcgen_copz00(obj_t BgL_obj3259z00_351)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3259z00_351,
				BGl_copz00zzcgen_copz00);
		}
	}



/* _cop? */
	obj_t BGl__copzf3zf3zzcgen_copz00(obj_t BgL_envz00_4143,
		obj_t BgL_obj3259z00_4144)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3259z00_4144,
					BGl_copz00zzcgen_copz00));
		}
	}



/* make-cop */
	BGL_EXPORTED_DEF BgL_copz00_bglt BGl_makezd2copzd2zzcgen_copz00(obj_t
		BgL_loc3245z00_355)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{	/* Cgen/cop.scm 21 */
				BgL_copz00_bglt BgL_new3246z00_3414;

				{	/* Cgen/cop.scm 21 */
					BgL_copz00_bglt BgL_res4968z00_3419;

					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_new3252z00_3415;

						BgL_new3252z00_3415 =
							((BgL_copz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_copz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3252z00_3415),
							BGl_classzd2numzd2zz__objectz00(BGl_copz00zzcgen_copz00));
						{	/* Cgen/cop.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_6971;

							BgL_auxz00_6971 = (BgL_objectz00_bglt) (BgL_new3252z00_3415);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6971, BFALSE);
						}
						BgL_res4968z00_3419 = BgL_new3252z00_3415;
					}
					BgL_new3246z00_3414 = BgL_res4968z00_3419;
				}
				{	/* Cgen/cop.scm 21 */
					BgL_copz00_bglt BgL_res4969z00_3423;

					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_new3249z00_3420;

						BgL_new3249z00_3420 = BgL_new3246z00_3414;
						{	/* Cgen/cop.scm 21 */
							obj_t BgL_loc3248z00_3422;

							BgL_loc3248z00_3422 = BgL_loc3245z00_355;
							((((BgL_copz00_bglt) CREF(BgL_new3249z00_3420))->BgL_locz00) =
								((obj_t) BgL_loc3248z00_3422), BUNSPEC);
							BgL_res4969z00_3423 = BgL_new3249z00_3420;
					}} BgL_res4969z00_3423;
				}
				return BgL_new3246z00_3414;
			}
		}
	}



/* _make-cop */
	obj_t BGl__makezd2copzd2zzcgen_copz00(obj_t BgL_envz00_4498,
		obj_t BgL_loc3245z00_4499)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			return (obj_t) (BGl_makezd2copzd2zzcgen_copz00(BgL_loc3245z00_4499));
		}
	}



/* fill-cop! */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_fillzd2copz12zc0zzcgen_copz00(BgL_copz00_bglt BgL_new3249z00_356,
		obj_t BgL_loc3248z00_357)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{	/* Cgen/cop.scm 21 */
				obj_t BgL_loc3248z00_5145;

				BgL_loc3248z00_5145 = BgL_loc3248z00_357;
				((((BgL_copz00_bglt) CREF(BgL_new3249z00_356))->BgL_locz00) =
					((obj_t) BgL_loc3248z00_5145), BUNSPEC);
				return BgL_new3249z00_356;
			}
		}
	}



/* _fill-cop! */
	obj_t BGl__fillzd2copz12zc0zzcgen_copz00(obj_t BgL_envz00_4500,
		obj_t BgL_new3249z00_4501, obj_t BgL_loc3248z00_4502)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{	/* Cgen/cop.scm 21 */
				BgL_copz00_bglt BgL_auxz00_6978;

				{	/* Cgen/cop.scm 21 */
					BgL_copz00_bglt BgL_res5095z00_5149;

					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_new3249z00_5146;

						BgL_new3249z00_5146 = (BgL_copz00_bglt) (BgL_new3249z00_4501);
						{	/* Cgen/cop.scm 21 */
							obj_t BgL_loc3248z00_5148;

							BgL_loc3248z00_5148 = BgL_loc3248z00_4502;
							((((BgL_copz00_bglt) CREF(BgL_new3249z00_5146))->BgL_locz00) =
								((obj_t) BgL_loc3248z00_5148), BUNSPEC);
							BgL_res5095z00_5149 = BgL_new3249z00_5146;
						}
					}
					BgL_auxz00_6978 = BgL_res5095z00_5149;
				}
				return (obj_t) (BgL_auxz00_6978);
			}
		}
	}



/* %allocate-cop */
	BGL_EXPORTED_DEF BgL_copz00_bglt BGl_z52allocatezd2copz80zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{	/* Cgen/cop.scm 21 */
				BgL_copz00_bglt BgL_new3252z00_5150;

				BgL_new3252z00_5150 =
					((BgL_copz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_copz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3252z00_5150),
					BGl_classzd2numzd2zz__objectz00(BGl_copz00zzcgen_copz00));
				{	/* Cgen/cop.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_6986;

					BgL_auxz00_6986 = (BgL_objectz00_bglt) (BgL_new3252z00_5150);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6986, BFALSE);
				}
				return BgL_new3252z00_5150;
			}
		}
	}



/* _%allocate-cop */
	obj_t BGl__z52allocatezd2copz80zzcgen_copz00(obj_t BgL_envz00_4141)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{	/* Cgen/cop.scm 21 */
				BgL_copz00_bglt BgL_auxz00_6989;

				{	/* Cgen/cop.scm 21 */
					BgL_copz00_bglt BgL_res5096z00_5154;

					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_new3252z00_5152;

						BgL_new3252z00_5152 =
							((BgL_copz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_copz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3252z00_5152),
							BGl_classzd2numzd2zz__objectz00(BGl_copz00zzcgen_copz00));
						{	/* Cgen/cop.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_6994;

							BgL_auxz00_6994 = (BgL_objectz00_bglt) (BgL_new3252z00_5152);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6994, BFALSE);
						}
						BgL_res5096z00_5154 = BgL_new3252z00_5152;
					}
					BgL_auxz00_6989 = BgL_res5096z00_5154;
				}
				return (obj_t) (BgL_auxz00_6989);
			}
		}
	}



/* cop-nil */
	BGL_EXPORTED_DEF BgL_copz00_bglt BGl_copzd2nilzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			if ((BGl_z52thezd2copzd2nilz52zzcgen_copz00 == BUNSPEC))
				{	/* Cgen/cop.scm 21 */
					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_res4970z00_3433;

						{	/* Cgen/cop.scm 21 */
							BgL_copz00_bglt BgL_new3252z00_3429;

							BgL_new3252z00_3429 =
								((BgL_copz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_copz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3252z00_3429),
								BGl_classzd2numzd2zz__objectz00(BGl_copz00zzcgen_copz00));
							{	/* Cgen/cop.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_7004;

								BgL_auxz00_7004 = (BgL_objectz00_bglt) (BgL_new3252z00_3429);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7004, BFALSE);
							}
							BgL_res4970z00_3433 = BgL_new3252z00_3429;
						}
						BGl_z52thezd2copzd2nilz52zzcgen_copz00 =
							(obj_t) (BgL_res4970z00_3433);
					}
					{	/* Cgen/cop.scm 21 */
						BgL_copz00_bglt BgL_res4971z00_3437;

						{	/* Cgen/cop.scm 21 */
							BgL_copz00_bglt BgL_new3249z00_3434;

							BgL_new3249z00_3434 =
								(BgL_copz00_bglt) (BGl_z52thezd2copzd2nilz52zzcgen_copz00);
							{	/* Cgen/cop.scm 21 */
								obj_t BgL_loc3248z00_3436;

								BgL_loc3248z00_3436 = BUNSPEC;
								((((BgL_copz00_bglt) CREF(BgL_new3249z00_3434))->BgL_locz00) =
									((obj_t) BgL_loc3248z00_3436), BUNSPEC);
								BgL_res4971z00_3437 = BgL_new3249z00_3434;
						}}
						(obj_t) (BgL_res4971z00_3437);
				}}
			else
				{	/* Cgen/cop.scm 21 */
					BFALSE;
				}
			return (BgL_copz00_bglt) (BGl_z52thezd2copzd2nilz52zzcgen_copz00);
		}
	}



/* _cop-nil */
	obj_t BGl__copzd2nilzd2zzcgen_copz00(obj_t BgL_envz00_4142)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			return (obj_t) (BGl_copzd2nilzd2zzcgen_copz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_bdbzd2blockzd2zzcgen_copz00, BGl_proc4979z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_bdbzd2blockzd2zzcgen_copz00, BGl_proc4981z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sfunzf2Czf2zzcgen_copz00, BGl_proc4983z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sfunzf2Czf2zzcgen_copz00, BGl_proc4984z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00, BGl_proc4985z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00, BGl_proc4986z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_csetzd2exzd2itz00zzcgen_copz00, BGl_proc4987z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_csetzd2exzd2itz00zzcgen_copz00, BGl_proc4988z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cboxzd2setz12zc0zzcgen_copz00, BGl_proc4989z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cboxzd2setz12zc0zzcgen_copz00, BGl_proc4990z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cboxzd2refzd2zzcgen_copz00, BGl_proc4991z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cboxzd2refzd2zzcgen_copz00, BGl_proc4992z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cmakezd2boxzd2zzcgen_copz00, BGl_proc4993z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cmakezd2boxzd2zzcgen_copz00, BGl_proc4994z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cswitchz00zzcgen_copz00, BGl_proc4995z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cswitchz00zzcgen_copz00, BGl_proc4996z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cfailz00zzcgen_copz00, BGl_proc4997z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cfailz00zzcgen_copz00, BGl_proc4998z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_cappz00zzcgen_copz00,
				BGl_proc4999z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cappz00zzcgen_copz00, BGl_proc5000z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_capplyz00zzcgen_copz00, BGl_proc5001z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_capplyz00zzcgen_copz00, BGl_proc5002z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cfuncallz00zzcgen_copz00, BGl_proc5003z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cfuncallz00zzcgen_copz00, BGl_proc5004z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzd2varzd2zzcgen_copz00, BGl_proc5005z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzd2varzd2zzcgen_copz00, BGl_proc5006z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_cifz00zzcgen_copz00,
				BGl_proc5007z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cifz00zzcgen_copz00, BGl_proc5008z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_csetqz00zzcgen_copz00, BGl_proc5009z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_csetqz00zzcgen_copz00, BGl_proc5010z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_stopz00zzcgen_copz00,
				BGl_proc5011z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_stopz00zzcgen_copz00, BGl_proc5012z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_nopz00zzcgen_copz00,
				BGl_proc5013z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_nopz00zzcgen_copz00, BGl_proc5014z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_csequencez00zzcgen_copz00, BGl_proc5015z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_csequencez00zzcgen_copz00, BGl_proc5016z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_ccastz00zzcgen_copz00, BGl_proc5017z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_ccastz00zzcgen_copz00, BGl_proc5018z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cpragmaz00zzcgen_copz00, BGl_proc5019z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cpragmaz00zzcgen_copz00, BGl_proc5020z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_varcz00zzcgen_copz00,
				BGl_proc5021z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_varcz00zzcgen_copz00, BGl_proc5022z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_catomz00zzcgen_copz00, BGl_proc5023z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_catomz00zzcgen_copz00, BGl_proc5024z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cvoidz00zzcgen_copz00, BGl_proc5025z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cvoidz00zzcgen_copz00, BGl_proc5026z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_creturnz00zzcgen_copz00, BGl_proc5027z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_creturnz00zzcgen_copz00, BGl_proc5028z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_blockz00zzcgen_copz00, BGl_proc5029z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_blockz00zzcgen_copz00, BGl_proc5030z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cgotoz00zzcgen_copz00, BGl_proc5031z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cgotoz00zzcgen_copz00, BGl_proc5032z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_clabelz00zzcgen_copz00, BGl_proc5033z00zzcgen_copz00,
				BGl_string4980z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_clabelz00zzcgen_copz00, BGl_proc5034z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_copz00zzcgen_copz00,
				BGl_proc5035z00zzcgen_copz00, BGl_string4980z00zzcgen_copz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_copz00zzcgen_copz00, BGl_proc5036z00zzcgen_copz00,
				BGl_string4982z00zzcgen_copz00);
		}
	}



/* struct+object->objec4327 */
	obj_t BGl_structzb2objectzd2ze3objec4327z83zzcgen_copz00(obj_t
		BgL_envz00_4564, obj_t BgL_oz00_4565, obj_t BgL_sz00_4566)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{
				BgL_copz00_bglt BgL_oz00_2480;

				obj_t BgL_sz00_2481;

				{	/* Cgen/cop.scm 21 */
					BgL_copz00_bglt BgL_auxz00_7070;

					BgL_oz00_2480 = (BgL_copz00_bglt) (BgL_oz00_4565);
					BgL_sz00_2481 = BgL_sz00_4566;
					{	/* Cgen/cop.scm 21 */
						obj_t BgL_arg4855z00_2484;

						BgL_arg4855z00_2484 = STRUCT_REF(BgL_sz00_2481, (int) (((long) 0)));
						{	/* Cgen/cop.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_7073;

							BgL_auxz00_7073 = (BgL_objectz00_bglt) (BgL_oz00_2480);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7073, BgL_arg4855z00_2484);
					}}
					{
						obj_t BgL_auxz00_7076;

						BgL_auxz00_7076 = STRUCT_REF(BgL_sz00_2481, (int) (((long) 1)));
						((((BgL_copz00_bglt) CREF(BgL_oz00_2480))->BgL_locz00) =
							((obj_t) BgL_auxz00_7076), BUNSPEC);
					}
					BgL_auxz00_7070 = BgL_oz00_2480;
					return (obj_t) (BgL_auxz00_7070);
				}
			}
		}
	}



/* object->struct-cop4325 */
	obj_t BGl_objectzd2ze3structzd2cop4325ze3zzcgen_copz00(obj_t BgL_envz00_4567,
		obj_t BgL_obj3253z00_4568)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 21 */
			{
				BgL_copz00_bglt BgL_obj3253z00_2472;

				BgL_obj3253z00_2472 = (BgL_copz00_bglt) (BgL_obj3253z00_4568);
				{	/* Cgen/cop.scm 21 */
					obj_t BgL_res3254z00_2475;

					{	/* Cgen/cop.scm 21 */
						obj_t BgL_keyz00_4127;

						BgL_keyz00_4127 = CNST_TABLE_REF(((long) 0));
						BgL_res3254z00_2475 =
							make_struct(BgL_keyz00_4127, (int) (((long) 2)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 21 */
						int BgL_auxz00_7085;

						BgL_auxz00_7085 = (int) (((long) 0));
						STRUCT_SET(BgL_res3254z00_2475, BgL_auxz00_7085, BFALSE);
					}
					{	/* Cgen/cop.scm 21 */
						obj_t BgL_arg4853z00_2477;

						BgL_arg4853z00_2477 =
							(((BgL_copz00_bglt) CREF(BgL_obj3253z00_2472))->BgL_locz00);
						{	/* Cgen/cop.scm 21 */
							int BgL_auxz00_7089;

							BgL_auxz00_7089 = (int) (((long) 1));
							STRUCT_SET(BgL_res3254z00_2475, BgL_auxz00_7089,
								BgL_arg4853z00_2477);
					}}
					return BgL_res3254z00_2475;
				}
			}
		}
	}



/* struct+object->objec4323 */
	obj_t BGl_structzb2objectzd2ze3objec4323z83zzcgen_copz00(obj_t
		BgL_envz00_4569, obj_t BgL_oz00_4570, obj_t BgL_sz00_4571)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{
				BgL_clabelz00_bglt BgL_oz00_2461;

				obj_t BgL_sz00_2462;

				{	/* Cgen/cop.scm 25 */
					BgL_clabelz00_bglt BgL_auxz00_7093;

					BgL_oz00_2461 = (BgL_clabelz00_bglt) (BgL_oz00_4570);
					BgL_sz00_2462 = BgL_sz00_4571;
					{	/* Cgen/cop.scm 25 */
						obj_t BgL_arg4850z00_2465;

						BgL_arg4850z00_2465 = STRUCT_REF(BgL_sz00_2462, (int) (((long) 0)));
						{	/* Cgen/cop.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_7096;

							BgL_auxz00_7096 = (BgL_objectz00_bglt) (BgL_oz00_2461);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7096, BgL_arg4850z00_2465);
					}}
					{
						obj_t BgL_auxz00_7099;

						BgL_auxz00_7099 = STRUCT_REF(BgL_sz00_2462, (int) (((long) 1)));
						((((BgL_clabelz00_bglt) CREF(BgL_oz00_2461))->BgL_locz00) =
							((obj_t) BgL_auxz00_7099), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7103;

						BgL_auxz00_7103 = STRUCT_REF(BgL_sz00_2462, (int) (((long) 2)));
						((((BgL_clabelz00_bglt) CREF(BgL_oz00_2461))->BgL_namez00) =
							((obj_t) BgL_auxz00_7103), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_7107;

						BgL_auxz00_7107 =
							CBOOL(STRUCT_REF(BgL_sz00_2462, (int) (((long) 3))));
						((((BgL_clabelz00_bglt) CREF(BgL_oz00_2461))->BgL_usedzf3zf3) =
							((bool_t) BgL_auxz00_7107), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7112;

						BgL_auxz00_7112 = STRUCT_REF(BgL_sz00_2462, (int) (((long) 4)));
						((((BgL_clabelz00_bglt) CREF(BgL_oz00_2461))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_7112), BUNSPEC);
					}
					BgL_auxz00_7093 = BgL_oz00_2461;
					return (obj_t) (BgL_auxz00_7093);
				}
			}
		}
	}



/* object->struct-clabe4321 */
	obj_t BGl_objectzd2ze3structzd2clabe4321ze3zzcgen_copz00(obj_t
		BgL_envz00_4572, obj_t BgL_obj3287z00_4573)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 25 */
			{
				BgL_clabelz00_bglt BgL_obj3287z00_2447;

				BgL_obj3287z00_2447 = (BgL_clabelz00_bglt) (BgL_obj3287z00_4573);
				{	/* Cgen/cop.scm 25 */
					obj_t BgL_res3288z00_2450;

					{	/* Cgen/cop.scm 25 */
						obj_t BgL_keyz00_4095;

						BgL_keyz00_4095 = CNST_TABLE_REF(((long) 1));
						BgL_res3288z00_2450 =
							make_struct(BgL_keyz00_4095, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 25 */
						int BgL_auxz00_7121;

						BgL_auxz00_7121 = (int) (((long) 0));
						STRUCT_SET(BgL_res3288z00_2450, BgL_auxz00_7121, BFALSE);
					}
					{	/* Cgen/cop.scm 25 */
						obj_t BgL_arg4841z00_2452;

						{
							BgL_copz00_bglt BgL_auxz00_7124;

							BgL_auxz00_7124 = (BgL_copz00_bglt) (BgL_obj3287z00_2447);
							BgL_arg4841z00_2452 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7124))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 25 */
							int BgL_auxz00_7127;

							BgL_auxz00_7127 = (int) (((long) 1));
							STRUCT_SET(BgL_res3288z00_2450, BgL_auxz00_7127,
								BgL_arg4841z00_2452);
					}}
					{	/* Cgen/cop.scm 25 */
						obj_t BgL_arg4844z00_2454;

						BgL_arg4844z00_2454 =
							(((BgL_clabelz00_bglt) CREF(BgL_obj3287z00_2447))->BgL_namez00);
						{	/* Cgen/cop.scm 25 */
							int BgL_auxz00_7131;

							BgL_auxz00_7131 = (int) (((long) 2));
							STRUCT_SET(BgL_res3288z00_2450, BgL_auxz00_7131,
								BgL_arg4844z00_2454);
					}}
					{	/* Cgen/cop.scm 25 */
						bool_t BgL_arg4846z00_2456;

						BgL_arg4846z00_2456 =
							(((BgL_clabelz00_bglt) CREF(BgL_obj3287z00_2447))->
							BgL_usedzf3zf3);
						{	/* Cgen/cop.scm 25 */
							obj_t BgL_auxz00_7137;

							int BgL_auxz00_7135;

							BgL_auxz00_7137 = BBOOL(BgL_arg4846z00_2456);
							BgL_auxz00_7135 = (int) (((long) 3));
							STRUCT_SET(BgL_res3288z00_2450, BgL_auxz00_7135, BgL_auxz00_7137);
					}}
					{	/* Cgen/cop.scm 25 */
						obj_t BgL_arg4848z00_2458;

						BgL_arg4848z00_2458 =
							(((BgL_clabelz00_bglt) CREF(BgL_obj3287z00_2447))->BgL_bodyz00);
						{	/* Cgen/cop.scm 25 */
							int BgL_auxz00_7141;

							BgL_auxz00_7141 = (int) (((long) 4));
							STRUCT_SET(BgL_res3288z00_2450, BgL_auxz00_7141,
								BgL_arg4848z00_2458);
					}}
					return BgL_res3288z00_2450;
				}
			}
		}
	}



/* struct+object->objec4319 */
	obj_t BGl_structzb2objectzd2ze3objec4319z83zzcgen_copz00(obj_t
		BgL_envz00_4574, obj_t BgL_oz00_4575, obj_t BgL_sz00_4576)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{
				BgL_cgotoz00_bglt BgL_oz00_2438;

				obj_t BgL_sz00_2439;

				{	/* Cgen/cop.scm 30 */
					BgL_cgotoz00_bglt BgL_auxz00_7145;

					BgL_oz00_2438 = (BgL_cgotoz00_bglt) (BgL_oz00_4575);
					BgL_sz00_2439 = BgL_sz00_4576;
					{	/* Cgen/cop.scm 30 */
						obj_t BgL_arg4838z00_2442;

						BgL_arg4838z00_2442 = STRUCT_REF(BgL_sz00_2439, (int) (((long) 0)));
						{	/* Cgen/cop.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_7148;

							BgL_auxz00_7148 = (BgL_objectz00_bglt) (BgL_oz00_2438);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7148, BgL_arg4838z00_2442);
					}}
					{
						obj_t BgL_auxz00_7151;

						BgL_auxz00_7151 = STRUCT_REF(BgL_sz00_2439, (int) (((long) 1)));
						((((BgL_cgotoz00_bglt) CREF(BgL_oz00_2438))->BgL_locz00) =
							((obj_t) BgL_auxz00_7151), BUNSPEC);
					}
					{
						BgL_clabelz00_bglt BgL_auxz00_7155;

						BgL_auxz00_7155 =
							(BgL_clabelz00_bglt) (STRUCT_REF(BgL_sz00_2439,
								(int) (((long) 2))));
						((((BgL_cgotoz00_bglt) CREF(BgL_oz00_2438))->BgL_labelz00) =
							((BgL_clabelz00_bglt) BgL_auxz00_7155), BUNSPEC);
					}
					BgL_auxz00_7145 = BgL_oz00_2438;
					return (obj_t) (BgL_auxz00_7145);
				}
			}
		}
	}



/* object->struct-cgoto4317 */
	obj_t BGl_objectzd2ze3structzd2cgoto4317ze3zzcgen_copz00(obj_t
		BgL_envz00_4577, obj_t BgL_obj3322z00_4578)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 30 */
			{
				BgL_cgotoz00_bglt BgL_obj3322z00_2428;

				BgL_obj3322z00_2428 = (BgL_cgotoz00_bglt) (BgL_obj3322z00_4578);
				{	/* Cgen/cop.scm 30 */
					obj_t BgL_res3323z00_2431;

					{	/* Cgen/cop.scm 30 */
						obj_t BgL_keyz00_4075;

						BgL_keyz00_4075 = CNST_TABLE_REF(((long) 2));
						BgL_res3323z00_2431 =
							make_struct(BgL_keyz00_4075, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 30 */
						int BgL_auxz00_7165;

						BgL_auxz00_7165 = (int) (((long) 0));
						STRUCT_SET(BgL_res3323z00_2431, BgL_auxz00_7165, BFALSE);
					}
					{	/* Cgen/cop.scm 30 */
						obj_t BgL_arg4834z00_2433;

						{
							BgL_copz00_bglt BgL_auxz00_7168;

							BgL_auxz00_7168 = (BgL_copz00_bglt) (BgL_obj3322z00_2428);
							BgL_arg4834z00_2433 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7168))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 30 */
							int BgL_auxz00_7171;

							BgL_auxz00_7171 = (int) (((long) 1));
							STRUCT_SET(BgL_res3323z00_2431, BgL_auxz00_7171,
								BgL_arg4834z00_2433);
					}}
					{	/* Cgen/cop.scm 30 */
						BgL_clabelz00_bglt BgL_arg4836z00_2435;

						BgL_arg4836z00_2435 =
							(((BgL_cgotoz00_bglt) CREF(BgL_obj3322z00_2428))->BgL_labelz00);
						{	/* Cgen/cop.scm 30 */
							obj_t BgL_auxz00_7177;

							int BgL_auxz00_7175;

							BgL_auxz00_7177 = (obj_t) (BgL_arg4836z00_2435);
							BgL_auxz00_7175 = (int) (((long) 2));
							STRUCT_SET(BgL_res3323z00_2431, BgL_auxz00_7175, BgL_auxz00_7177);
					}}
					return BgL_res3323z00_2431;
				}
			}
		}
	}



/* struct+object->objec4314 */
	obj_t BGl_structzb2objectzd2ze3objec4314z83zzcgen_copz00(obj_t
		BgL_envz00_4579, obj_t BgL_oz00_4580, obj_t BgL_sz00_4581)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{
				BgL_blockz00_bglt BgL_oz00_2419;

				obj_t BgL_sz00_2420;

				{	/* Cgen/cop.scm 33 */
					BgL_blockz00_bglt BgL_auxz00_7181;

					BgL_oz00_2419 = (BgL_blockz00_bglt) (BgL_oz00_4580);
					BgL_sz00_2420 = BgL_sz00_4581;
					{	/* Cgen/cop.scm 33 */
						obj_t BgL_arg4831z00_2423;

						BgL_arg4831z00_2423 = STRUCT_REF(BgL_sz00_2420, (int) (((long) 0)));
						{	/* Cgen/cop.scm 33 */
							BgL_objectz00_bglt BgL_auxz00_7184;

							BgL_auxz00_7184 = (BgL_objectz00_bglt) (BgL_oz00_2419);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7184, BgL_arg4831z00_2423);
					}}
					{
						obj_t BgL_auxz00_7187;

						BgL_auxz00_7187 = STRUCT_REF(BgL_sz00_2420, (int) (((long) 1)));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2419))->BgL_locz00) =
							((obj_t) BgL_auxz00_7187), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7191;

						BgL_auxz00_7191 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2420, (int) (((long) 2))));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2419))->BgL_bodyz00) =
							((BgL_copz00_bglt) BgL_auxz00_7191), BUNSPEC);
					}
					BgL_auxz00_7181 = BgL_oz00_2419;
					return (obj_t) (BgL_auxz00_7181);
				}
			}
		}
	}



/* object->struct-block4311 */
	obj_t BGl_objectzd2ze3structzd2block4311ze3zzcgen_copz00(obj_t
		BgL_envz00_4582, obj_t BgL_obj3348z00_4583)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 33 */
			{
				BgL_blockz00_bglt BgL_obj3348z00_2409;

				BgL_obj3348z00_2409 = (BgL_blockz00_bglt) (BgL_obj3348z00_4583);
				{	/* Cgen/cop.scm 33 */
					obj_t BgL_res3349z00_2412;

					{	/* Cgen/cop.scm 33 */
						obj_t BgL_keyz00_4055;

						BgL_keyz00_4055 = CNST_TABLE_REF(((long) 3));
						BgL_res3349z00_2412 =
							make_struct(BgL_keyz00_4055, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 33 */
						int BgL_auxz00_7201;

						BgL_auxz00_7201 = (int) (((long) 0));
						STRUCT_SET(BgL_res3349z00_2412, BgL_auxz00_7201, BFALSE);
					}
					{	/* Cgen/cop.scm 33 */
						obj_t BgL_arg4827z00_2414;

						{
							BgL_copz00_bglt BgL_auxz00_7204;

							BgL_auxz00_7204 = (BgL_copz00_bglt) (BgL_obj3348z00_2409);
							BgL_arg4827z00_2414 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7204))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 33 */
							int BgL_auxz00_7207;

							BgL_auxz00_7207 = (int) (((long) 1));
							STRUCT_SET(BgL_res3349z00_2412, BgL_auxz00_7207,
								BgL_arg4827z00_2414);
					}}
					{	/* Cgen/cop.scm 33 */
						BgL_copz00_bglt BgL_arg4829z00_2416;

						BgL_arg4829z00_2416 =
							(((BgL_blockz00_bglt) CREF(BgL_obj3348z00_2409))->BgL_bodyz00);
						{	/* Cgen/cop.scm 33 */
							obj_t BgL_auxz00_7213;

							int BgL_auxz00_7211;

							BgL_auxz00_7213 = (obj_t) (BgL_arg4829z00_2416);
							BgL_auxz00_7211 = (int) (((long) 2));
							STRUCT_SET(BgL_res3349z00_2412, BgL_auxz00_7211, BgL_auxz00_7213);
					}}
					return BgL_res3349z00_2412;
				}
			}
		}
	}



/* struct+object->objec4309 */
	obj_t BGl_structzb2objectzd2ze3objec4309z83zzcgen_copz00(obj_t
		BgL_envz00_4584, obj_t BgL_oz00_4585, obj_t BgL_sz00_4586)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{
				BgL_creturnz00_bglt BgL_oz00_2400;

				obj_t BgL_sz00_2401;

				{	/* Cgen/cop.scm 36 */
					BgL_creturnz00_bglt BgL_auxz00_7217;

					BgL_oz00_2400 = (BgL_creturnz00_bglt) (BgL_oz00_4585);
					BgL_sz00_2401 = BgL_sz00_4586;
					{	/* Cgen/cop.scm 36 */
						obj_t BgL_arg4824z00_2404;

						BgL_arg4824z00_2404 = STRUCT_REF(BgL_sz00_2401, (int) (((long) 0)));
						{	/* Cgen/cop.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_7220;

							BgL_auxz00_7220 = (BgL_objectz00_bglt) (BgL_oz00_2400);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7220, BgL_arg4824z00_2404);
					}}
					{
						obj_t BgL_auxz00_7223;

						BgL_auxz00_7223 = STRUCT_REF(BgL_sz00_2401, (int) (((long) 1)));
						((((BgL_creturnz00_bglt) CREF(BgL_oz00_2400))->BgL_locz00) =
							((obj_t) BgL_auxz00_7223), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7227;

						BgL_auxz00_7227 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2401, (int) (((long) 2))));
						((((BgL_creturnz00_bglt) CREF(BgL_oz00_2400))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_7227), BUNSPEC);
					}
					BgL_auxz00_7217 = BgL_oz00_2400;
					return (obj_t) (BgL_auxz00_7217);
				}
			}
		}
	}



/* object->struct-cretu4307 */
	obj_t BGl_objectzd2ze3structzd2cretu4307ze3zzcgen_copz00(obj_t
		BgL_envz00_4587, obj_t BgL_obj3374z00_4588)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 36 */
			{
				BgL_creturnz00_bglt BgL_obj3374z00_2390;

				BgL_obj3374z00_2390 = (BgL_creturnz00_bglt) (BgL_obj3374z00_4588);
				{	/* Cgen/cop.scm 36 */
					obj_t BgL_res3375z00_2393;

					{	/* Cgen/cop.scm 36 */
						obj_t BgL_keyz00_4035;

						BgL_keyz00_4035 = CNST_TABLE_REF(((long) 4));
						BgL_res3375z00_2393 =
							make_struct(BgL_keyz00_4035, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 36 */
						int BgL_auxz00_7237;

						BgL_auxz00_7237 = (int) (((long) 0));
						STRUCT_SET(BgL_res3375z00_2393, BgL_auxz00_7237, BFALSE);
					}
					{	/* Cgen/cop.scm 36 */
						obj_t BgL_arg4820z00_2395;

						{
							BgL_copz00_bglt BgL_auxz00_7240;

							BgL_auxz00_7240 = (BgL_copz00_bglt) (BgL_obj3374z00_2390);
							BgL_arg4820z00_2395 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7240))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 36 */
							int BgL_auxz00_7243;

							BgL_auxz00_7243 = (int) (((long) 1));
							STRUCT_SET(BgL_res3375z00_2393, BgL_auxz00_7243,
								BgL_arg4820z00_2395);
					}}
					{	/* Cgen/cop.scm 36 */
						BgL_copz00_bglt BgL_arg4822z00_2397;

						BgL_arg4822z00_2397 =
							(((BgL_creturnz00_bglt) CREF(BgL_obj3374z00_2390))->BgL_valuez00);
						{	/* Cgen/cop.scm 36 */
							obj_t BgL_auxz00_7249;

							int BgL_auxz00_7247;

							BgL_auxz00_7249 = (obj_t) (BgL_arg4822z00_2397);
							BgL_auxz00_7247 = (int) (((long) 2));
							STRUCT_SET(BgL_res3375z00_2393, BgL_auxz00_7247, BgL_auxz00_7249);
					}}
					return BgL_res3375z00_2393;
				}
			}
		}
	}



/* struct+object->objec4305 */
	obj_t BGl_structzb2objectzd2ze3objec4305z83zzcgen_copz00(obj_t
		BgL_envz00_4589, obj_t BgL_oz00_4590, obj_t BgL_sz00_4591)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{
				BgL_cvoidz00_bglt BgL_oz00_2381;

				obj_t BgL_sz00_2382;

				{	/* Cgen/cop.scm 39 */
					BgL_cvoidz00_bglt BgL_auxz00_7253;

					BgL_oz00_2381 = (BgL_cvoidz00_bglt) (BgL_oz00_4590);
					BgL_sz00_2382 = BgL_sz00_4591;
					{	/* Cgen/cop.scm 39 */
						obj_t BgL_arg4817z00_2385;

						BgL_arg4817z00_2385 = STRUCT_REF(BgL_sz00_2382, (int) (((long) 0)));
						{	/* Cgen/cop.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_7256;

							BgL_auxz00_7256 = (BgL_objectz00_bglt) (BgL_oz00_2381);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7256, BgL_arg4817z00_2385);
					}}
					{
						obj_t BgL_auxz00_7259;

						BgL_auxz00_7259 = STRUCT_REF(BgL_sz00_2382, (int) (((long) 1)));
						((((BgL_cvoidz00_bglt) CREF(BgL_oz00_2381))->BgL_locz00) =
							((obj_t) BgL_auxz00_7259), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7263;

						BgL_auxz00_7263 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2382, (int) (((long) 2))));
						((((BgL_cvoidz00_bglt) CREF(BgL_oz00_2381))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_7263), BUNSPEC);
					}
					BgL_auxz00_7253 = BgL_oz00_2381;
					return (obj_t) (BgL_auxz00_7253);
				}
			}
		}
	}



/* object->struct-cvoid4302 */
	obj_t BGl_objectzd2ze3structzd2cvoid4302ze3zzcgen_copz00(obj_t
		BgL_envz00_4592, obj_t BgL_obj3400z00_4593)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 39 */
			{
				BgL_cvoidz00_bglt BgL_obj3400z00_2371;

				BgL_obj3400z00_2371 = (BgL_cvoidz00_bglt) (BgL_obj3400z00_4593);
				{	/* Cgen/cop.scm 39 */
					obj_t BgL_res3401z00_2374;

					{	/* Cgen/cop.scm 39 */
						obj_t BgL_keyz00_4015;

						BgL_keyz00_4015 = CNST_TABLE_REF(((long) 5));
						BgL_res3401z00_2374 =
							make_struct(BgL_keyz00_4015, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 39 */
						int BgL_auxz00_7273;

						BgL_auxz00_7273 = (int) (((long) 0));
						STRUCT_SET(BgL_res3401z00_2374, BgL_auxz00_7273, BFALSE);
					}
					{	/* Cgen/cop.scm 39 */
						obj_t BgL_arg4813z00_2376;

						{
							BgL_copz00_bglt BgL_auxz00_7276;

							BgL_auxz00_7276 = (BgL_copz00_bglt) (BgL_obj3400z00_2371);
							BgL_arg4813z00_2376 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7276))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 39 */
							int BgL_auxz00_7279;

							BgL_auxz00_7279 = (int) (((long) 1));
							STRUCT_SET(BgL_res3401z00_2374, BgL_auxz00_7279,
								BgL_arg4813z00_2376);
					}}
					{	/* Cgen/cop.scm 39 */
						BgL_copz00_bglt BgL_arg4815z00_2378;

						BgL_arg4815z00_2378 =
							(((BgL_cvoidz00_bglt) CREF(BgL_obj3400z00_2371))->BgL_valuez00);
						{	/* Cgen/cop.scm 39 */
							obj_t BgL_auxz00_7285;

							int BgL_auxz00_7283;

							BgL_auxz00_7285 = (obj_t) (BgL_arg4815z00_2378);
							BgL_auxz00_7283 = (int) (((long) 2));
							STRUCT_SET(BgL_res3401z00_2374, BgL_auxz00_7283, BgL_auxz00_7285);
					}}
					return BgL_res3401z00_2374;
				}
			}
		}
	}



/* struct+object->objec4300 */
	obj_t BGl_structzb2objectzd2ze3objec4300z83zzcgen_copz00(obj_t
		BgL_envz00_4594, obj_t BgL_oz00_4595, obj_t BgL_sz00_4596)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{
				BgL_catomz00_bglt BgL_oz00_2362;

				obj_t BgL_sz00_2363;

				{	/* Cgen/cop.scm 42 */
					BgL_catomz00_bglt BgL_auxz00_7289;

					BgL_oz00_2362 = (BgL_catomz00_bglt) (BgL_oz00_4595);
					BgL_sz00_2363 = BgL_sz00_4596;
					{	/* Cgen/cop.scm 42 */
						obj_t BgL_arg4810z00_2366;

						BgL_arg4810z00_2366 = STRUCT_REF(BgL_sz00_2363, (int) (((long) 0)));
						{	/* Cgen/cop.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_7292;

							BgL_auxz00_7292 = (BgL_objectz00_bglt) (BgL_oz00_2362);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7292, BgL_arg4810z00_2366);
					}}
					{
						obj_t BgL_auxz00_7295;

						BgL_auxz00_7295 = STRUCT_REF(BgL_sz00_2363, (int) (((long) 1)));
						((((BgL_catomz00_bglt) CREF(BgL_oz00_2362))->BgL_locz00) =
							((obj_t) BgL_auxz00_7295), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7299;

						BgL_auxz00_7299 = STRUCT_REF(BgL_sz00_2363, (int) (((long) 2)));
						((((BgL_catomz00_bglt) CREF(BgL_oz00_2362))->BgL_valuez00) =
							((obj_t) BgL_auxz00_7299), BUNSPEC);
					}
					BgL_auxz00_7289 = BgL_oz00_2362;
					return (obj_t) (BgL_auxz00_7289);
				}
			}
		}
	}



/* object->struct-catom4298 */
	obj_t BGl_objectzd2ze3structzd2catom4298ze3zzcgen_copz00(obj_t
		BgL_envz00_4597, obj_t BgL_obj3426z00_4598)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 42 */
			{
				BgL_catomz00_bglt BgL_obj3426z00_2352;

				BgL_obj3426z00_2352 = (BgL_catomz00_bglt) (BgL_obj3426z00_4598);
				{	/* Cgen/cop.scm 42 */
					obj_t BgL_res3427z00_2355;

					{	/* Cgen/cop.scm 42 */
						obj_t BgL_keyz00_3995;

						BgL_keyz00_3995 = CNST_TABLE_REF(((long) 6));
						BgL_res3427z00_2355 =
							make_struct(BgL_keyz00_3995, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 42 */
						int BgL_auxz00_7308;

						BgL_auxz00_7308 = (int) (((long) 0));
						STRUCT_SET(BgL_res3427z00_2355, BgL_auxz00_7308, BFALSE);
					}
					{	/* Cgen/cop.scm 42 */
						obj_t BgL_arg4805z00_2357;

						{
							BgL_copz00_bglt BgL_auxz00_7311;

							BgL_auxz00_7311 = (BgL_copz00_bglt) (BgL_obj3426z00_2352);
							BgL_arg4805z00_2357 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7311))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 42 */
							int BgL_auxz00_7314;

							BgL_auxz00_7314 = (int) (((long) 1));
							STRUCT_SET(BgL_res3427z00_2355, BgL_auxz00_7314,
								BgL_arg4805z00_2357);
					}}
					{	/* Cgen/cop.scm 42 */
						obj_t BgL_arg4807z00_2359;

						BgL_arg4807z00_2359 =
							(((BgL_catomz00_bglt) CREF(BgL_obj3426z00_2352))->BgL_valuez00);
						{	/* Cgen/cop.scm 42 */
							int BgL_auxz00_7318;

							BgL_auxz00_7318 = (int) (((long) 2));
							STRUCT_SET(BgL_res3427z00_2355, BgL_auxz00_7318,
								BgL_arg4807z00_2359);
					}}
					return BgL_res3427z00_2355;
				}
			}
		}
	}



/* struct+object->objec4296 */
	obj_t BGl_structzb2objectzd2ze3objec4296z83zzcgen_copz00(obj_t
		BgL_envz00_4599, obj_t BgL_oz00_4600, obj_t BgL_sz00_4601)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{
				BgL_varcz00_bglt BgL_oz00_2343;

				obj_t BgL_sz00_2344;

				{	/* Cgen/cop.scm 45 */
					BgL_varcz00_bglt BgL_auxz00_7322;

					BgL_oz00_2343 = (BgL_varcz00_bglt) (BgL_oz00_4600);
					BgL_sz00_2344 = BgL_sz00_4601;
					{	/* Cgen/cop.scm 45 */
						obj_t BgL_arg4801z00_2347;

						BgL_arg4801z00_2347 = STRUCT_REF(BgL_sz00_2344, (int) (((long) 0)));
						{	/* Cgen/cop.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_7325;

							BgL_auxz00_7325 = (BgL_objectz00_bglt) (BgL_oz00_2343);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7325, BgL_arg4801z00_2347);
					}}
					{
						obj_t BgL_auxz00_7328;

						BgL_auxz00_7328 = STRUCT_REF(BgL_sz00_2344, (int) (((long) 1)));
						((((BgL_varcz00_bglt) CREF(BgL_oz00_2343))->BgL_locz00) =
							((obj_t) BgL_auxz00_7328), BUNSPEC);
					}
					{
						BgL_variablez00_bglt BgL_auxz00_7332;

						BgL_auxz00_7332 =
							(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2344,
								(int) (((long) 2))));
						((((BgL_varcz00_bglt) CREF(BgL_oz00_2343))->BgL_variablez00) =
							((BgL_variablez00_bglt) BgL_auxz00_7332), BUNSPEC);
					}
					BgL_auxz00_7322 = BgL_oz00_2343;
					return (obj_t) (BgL_auxz00_7322);
				}
			}
		}
	}



/* object->struct-varc4294 */
	obj_t BGl_objectzd2ze3structzd2varc4294ze3zzcgen_copz00(obj_t BgL_envz00_4602,
		obj_t BgL_obj3452z00_4603)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 45 */
			{
				BgL_varcz00_bglt BgL_obj3452z00_2333;

				BgL_obj3452z00_2333 = (BgL_varcz00_bglt) (BgL_obj3452z00_4603);
				{	/* Cgen/cop.scm 45 */
					obj_t BgL_res3453z00_2336;

					{	/* Cgen/cop.scm 45 */
						obj_t BgL_keyz00_3975;

						BgL_keyz00_3975 = CNST_TABLE_REF(((long) 7));
						BgL_res3453z00_2336 =
							make_struct(BgL_keyz00_3975, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 45 */
						int BgL_auxz00_7342;

						BgL_auxz00_7342 = (int) (((long) 0));
						STRUCT_SET(BgL_res3453z00_2336, BgL_auxz00_7342, BFALSE);
					}
					{	/* Cgen/cop.scm 45 */
						obj_t BgL_arg4797z00_2338;

						{
							BgL_copz00_bglt BgL_auxz00_7345;

							BgL_auxz00_7345 = (BgL_copz00_bglt) (BgL_obj3452z00_2333);
							BgL_arg4797z00_2338 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7345))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 45 */
							int BgL_auxz00_7348;

							BgL_auxz00_7348 = (int) (((long) 1));
							STRUCT_SET(BgL_res3453z00_2336, BgL_auxz00_7348,
								BgL_arg4797z00_2338);
					}}
					{	/* Cgen/cop.scm 45 */
						BgL_variablez00_bglt BgL_arg4799z00_2340;

						BgL_arg4799z00_2340 =
							(((BgL_varcz00_bglt) CREF(BgL_obj3452z00_2333))->BgL_variablez00);
						{	/* Cgen/cop.scm 45 */
							obj_t BgL_auxz00_7354;

							int BgL_auxz00_7352;

							BgL_auxz00_7354 = (obj_t) (BgL_arg4799z00_2340);
							BgL_auxz00_7352 = (int) (((long) 2));
							STRUCT_SET(BgL_res3453z00_2336, BgL_auxz00_7352, BgL_auxz00_7354);
					}}
					return BgL_res3453z00_2336;
				}
			}
		}
	}



/* struct+object->objec4292 */
	obj_t BGl_structzb2objectzd2ze3objec4292z83zzcgen_copz00(obj_t
		BgL_envz00_4604, obj_t BgL_oz00_4605, obj_t BgL_sz00_4606)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{
				BgL_cpragmaz00_bglt BgL_oz00_2323;

				obj_t BgL_sz00_2324;

				{	/* Cgen/cop.scm 48 */
					BgL_cpragmaz00_bglt BgL_auxz00_7358;

					BgL_oz00_2323 = (BgL_cpragmaz00_bglt) (BgL_oz00_4605);
					BgL_sz00_2324 = BgL_sz00_4606;
					{	/* Cgen/cop.scm 48 */
						obj_t BgL_arg4794z00_2327;

						BgL_arg4794z00_2327 = STRUCT_REF(BgL_sz00_2324, (int) (((long) 0)));
						{	/* Cgen/cop.scm 48 */
							BgL_objectz00_bglt BgL_auxz00_7361;

							BgL_auxz00_7361 = (BgL_objectz00_bglt) (BgL_oz00_2323);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7361, BgL_arg4794z00_2327);
					}}
					{
						obj_t BgL_auxz00_7364;

						BgL_auxz00_7364 = STRUCT_REF(BgL_sz00_2324, (int) (((long) 1)));
						((((BgL_cpragmaz00_bglt) CREF(BgL_oz00_2323))->BgL_locz00) =
							((obj_t) BgL_auxz00_7364), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7368;

						BgL_auxz00_7368 = STRUCT_REF(BgL_sz00_2324, (int) (((long) 2)));
						((((BgL_cpragmaz00_bglt) CREF(BgL_oz00_2323))->BgL_formatz00) =
							((obj_t) BgL_auxz00_7368), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7372;

						BgL_auxz00_7372 = STRUCT_REF(BgL_sz00_2324, (int) (((long) 3)));
						((((BgL_cpragmaz00_bglt) CREF(BgL_oz00_2323))->BgL_argsz00) =
							((obj_t) BgL_auxz00_7372), BUNSPEC);
					}
					BgL_auxz00_7358 = BgL_oz00_2323;
					return (obj_t) (BgL_auxz00_7358);
				}
			}
		}
	}



/* object->struct-cprag4289 */
	obj_t BGl_objectzd2ze3structzd2cprag4289ze3zzcgen_copz00(obj_t
		BgL_envz00_4607, obj_t BgL_obj3482z00_4608)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 48 */
			{
				BgL_cpragmaz00_bglt BgL_obj3482z00_2311;

				BgL_obj3482z00_2311 = (BgL_cpragmaz00_bglt) (BgL_obj3482z00_4608);
				{	/* Cgen/cop.scm 48 */
					obj_t BgL_res3483z00_2314;

					{	/* Cgen/cop.scm 48 */
						obj_t BgL_keyz00_3949;

						BgL_keyz00_3949 = CNST_TABLE_REF(((long) 8));
						BgL_res3483z00_2314 =
							make_struct(BgL_keyz00_3949, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 48 */
						int BgL_auxz00_7381;

						BgL_auxz00_7381 = (int) (((long) 0));
						STRUCT_SET(BgL_res3483z00_2314, BgL_auxz00_7381, BFALSE);
					}
					{	/* Cgen/cop.scm 48 */
						obj_t BgL_arg4788z00_2316;

						{
							BgL_copz00_bglt BgL_auxz00_7384;

							BgL_auxz00_7384 = (BgL_copz00_bglt) (BgL_obj3482z00_2311);
							BgL_arg4788z00_2316 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7384))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 48 */
							int BgL_auxz00_7387;

							BgL_auxz00_7387 = (int) (((long) 1));
							STRUCT_SET(BgL_res3483z00_2314, BgL_auxz00_7387,
								BgL_arg4788z00_2316);
					}}
					{	/* Cgen/cop.scm 48 */
						obj_t BgL_arg4790z00_2318;

						BgL_arg4790z00_2318 =
							(((BgL_cpragmaz00_bglt) CREF(BgL_obj3482z00_2311))->
							BgL_formatz00);
						{	/* Cgen/cop.scm 48 */
							int BgL_auxz00_7391;

							BgL_auxz00_7391 = (int) (((long) 2));
							STRUCT_SET(BgL_res3483z00_2314, BgL_auxz00_7391,
								BgL_arg4790z00_2318);
					}}
					{	/* Cgen/cop.scm 48 */
						obj_t BgL_arg4792z00_2320;

						BgL_arg4792z00_2320 =
							(((BgL_cpragmaz00_bglt) CREF(BgL_obj3482z00_2311))->BgL_argsz00);
						{	/* Cgen/cop.scm 48 */
							int BgL_auxz00_7395;

							BgL_auxz00_7395 = (int) (((long) 3));
							STRUCT_SET(BgL_res3483z00_2314, BgL_auxz00_7395,
								BgL_arg4792z00_2320);
					}}
					return BgL_res3483z00_2314;
				}
			}
		}
	}



/* struct+object->objec4286 */
	obj_t BGl_structzb2objectzd2ze3objec4286z83zzcgen_copz00(obj_t
		BgL_envz00_4609, obj_t BgL_oz00_4610, obj_t BgL_sz00_4611)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{
				BgL_ccastz00_bglt BgL_oz00_2301;

				obj_t BgL_sz00_2302;

				{	/* Cgen/cop.scm 52 */
					BgL_ccastz00_bglt BgL_auxz00_7399;

					BgL_oz00_2301 = (BgL_ccastz00_bglt) (BgL_oz00_4610);
					BgL_sz00_2302 = BgL_sz00_4611;
					{	/* Cgen/cop.scm 52 */
						obj_t BgL_arg4785z00_2305;

						BgL_arg4785z00_2305 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 0)));
						{	/* Cgen/cop.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_7402;

							BgL_auxz00_7402 = (BgL_objectz00_bglt) (BgL_oz00_2301);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7402, BgL_arg4785z00_2305);
					}}
					{
						obj_t BgL_auxz00_7405;

						BgL_auxz00_7405 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 1)));
						((((BgL_ccastz00_bglt) CREF(BgL_oz00_2301))->BgL_locz00) =
							((obj_t) BgL_auxz00_7405), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_7409;

						BgL_auxz00_7409 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2302,
								(int) (((long) 2))));
						((((BgL_ccastz00_bglt) CREF(BgL_oz00_2301))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_7409), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7414;

						BgL_auxz00_7414 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2302, (int) (((long) 3))));
						((((BgL_ccastz00_bglt) CREF(BgL_oz00_2301))->BgL_argz00) =
							((BgL_copz00_bglt) BgL_auxz00_7414), BUNSPEC);
					}
					BgL_auxz00_7399 = BgL_oz00_2301;
					return (obj_t) (BgL_auxz00_7399);
				}
			}
		}
	}



/* object->struct-ccast4284 */
	obj_t BGl_objectzd2ze3structzd2ccast4284ze3zzcgen_copz00(obj_t
		BgL_envz00_4612, obj_t BgL_obj3516z00_4613)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 52 */
			{
				BgL_ccastz00_bglt BgL_obj3516z00_2289;

				BgL_obj3516z00_2289 = (BgL_ccastz00_bglt) (BgL_obj3516z00_4613);
				{	/* Cgen/cop.scm 52 */
					obj_t BgL_res3517z00_2292;

					{	/* Cgen/cop.scm 52 */
						obj_t BgL_keyz00_3923;

						BgL_keyz00_3923 = CNST_TABLE_REF(((long) 9));
						BgL_res3517z00_2292 =
							make_struct(BgL_keyz00_3923, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 52 */
						int BgL_auxz00_7424;

						BgL_auxz00_7424 = (int) (((long) 0));
						STRUCT_SET(BgL_res3517z00_2292, BgL_auxz00_7424, BFALSE);
					}
					{	/* Cgen/cop.scm 52 */
						obj_t BgL_arg4777z00_2294;

						{
							BgL_copz00_bglt BgL_auxz00_7427;

							BgL_auxz00_7427 = (BgL_copz00_bglt) (BgL_obj3516z00_2289);
							BgL_arg4777z00_2294 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7427))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 52 */
							int BgL_auxz00_7430;

							BgL_auxz00_7430 = (int) (((long) 1));
							STRUCT_SET(BgL_res3517z00_2292, BgL_auxz00_7430,
								BgL_arg4777z00_2294);
					}}
					{	/* Cgen/cop.scm 52 */
						BgL_typez00_bglt BgL_arg4780z00_2296;

						BgL_arg4780z00_2296 =
							(((BgL_ccastz00_bglt) CREF(BgL_obj3516z00_2289))->BgL_typez00);
						{	/* Cgen/cop.scm 52 */
							obj_t BgL_auxz00_7436;

							int BgL_auxz00_7434;

							BgL_auxz00_7436 = (obj_t) (BgL_arg4780z00_2296);
							BgL_auxz00_7434 = (int) (((long) 2));
							STRUCT_SET(BgL_res3517z00_2292, BgL_auxz00_7434, BgL_auxz00_7436);
					}}
					{	/* Cgen/cop.scm 52 */
						BgL_copz00_bglt BgL_arg4783z00_2298;

						BgL_arg4783z00_2298 =
							(((BgL_ccastz00_bglt) CREF(BgL_obj3516z00_2289))->BgL_argz00);
						{	/* Cgen/cop.scm 52 */
							obj_t BgL_auxz00_7442;

							int BgL_auxz00_7440;

							BgL_auxz00_7442 = (obj_t) (BgL_arg4783z00_2298);
							BgL_auxz00_7440 = (int) (((long) 3));
							STRUCT_SET(BgL_res3517z00_2292, BgL_auxz00_7440, BgL_auxz00_7442);
					}}
					return BgL_res3517z00_2292;
				}
			}
		}
	}



/* struct+object->objec4282 */
	obj_t BGl_structzb2objectzd2ze3objec4282z83zzcgen_copz00(obj_t
		BgL_envz00_4614, obj_t BgL_oz00_4615, obj_t BgL_sz00_4616)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{
				BgL_csequencez00_bglt BgL_oz00_2279;

				obj_t BgL_sz00_2280;

				{	/* Cgen/cop.scm 56 */
					BgL_csequencez00_bglt BgL_auxz00_7446;

					BgL_oz00_2279 = (BgL_csequencez00_bglt) (BgL_oz00_4615);
					BgL_sz00_2280 = BgL_sz00_4616;
					{	/* Cgen/cop.scm 56 */
						obj_t BgL_arg4774z00_2283;

						BgL_arg4774z00_2283 = STRUCT_REF(BgL_sz00_2280, (int) (((long) 0)));
						{	/* Cgen/cop.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_7449;

							BgL_auxz00_7449 = (BgL_objectz00_bglt) (BgL_oz00_2279);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7449, BgL_arg4774z00_2283);
					}}
					{
						obj_t BgL_auxz00_7452;

						BgL_auxz00_7452 = STRUCT_REF(BgL_sz00_2280, (int) (((long) 1)));
						((((BgL_csequencez00_bglt) CREF(BgL_oz00_2279))->BgL_locz00) =
							((obj_t) BgL_auxz00_7452), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_7456;

						BgL_auxz00_7456 =
							CBOOL(STRUCT_REF(BgL_sz00_2280, (int) (((long) 2))));
						((((BgL_csequencez00_bglt) CREF(BgL_oz00_2279))->
								BgL_czd2expzf3z21) = ((bool_t) BgL_auxz00_7456), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7461;

						BgL_auxz00_7461 = STRUCT_REF(BgL_sz00_2280, (int) (((long) 3)));
						((((BgL_csequencez00_bglt) CREF(BgL_oz00_2279))->BgL_copsz00) =
							((obj_t) BgL_auxz00_7461), BUNSPEC);
					}
					BgL_auxz00_7446 = BgL_oz00_2279;
					return (obj_t) (BgL_auxz00_7446);
				}
			}
		}
	}



/* object->struct-csequ4280 */
	obj_t BGl_objectzd2ze3structzd2csequ4280ze3zzcgen_copz00(obj_t
		BgL_envz00_4617, obj_t BgL_obj3550z00_4618)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 56 */
			{
				BgL_csequencez00_bglt BgL_obj3550z00_2267;

				BgL_obj3550z00_2267 = (BgL_csequencez00_bglt) (BgL_obj3550z00_4618);
				{	/* Cgen/cop.scm 56 */
					obj_t BgL_res3551z00_2270;

					{	/* Cgen/cop.scm 56 */
						obj_t BgL_keyz00_3897;

						BgL_keyz00_3897 = CNST_TABLE_REF(((long) 10));
						BgL_res3551z00_2270 =
							make_struct(BgL_keyz00_3897, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 56 */
						int BgL_auxz00_7470;

						BgL_auxz00_7470 = (int) (((long) 0));
						STRUCT_SET(BgL_res3551z00_2270, BgL_auxz00_7470, BFALSE);
					}
					{	/* Cgen/cop.scm 56 */
						obj_t BgL_arg4768z00_2272;

						{
							BgL_copz00_bglt BgL_auxz00_7473;

							BgL_auxz00_7473 = (BgL_copz00_bglt) (BgL_obj3550z00_2267);
							BgL_arg4768z00_2272 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7473))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 56 */
							int BgL_auxz00_7476;

							BgL_auxz00_7476 = (int) (((long) 1));
							STRUCT_SET(BgL_res3551z00_2270, BgL_auxz00_7476,
								BgL_arg4768z00_2272);
					}}
					{	/* Cgen/cop.scm 56 */
						bool_t BgL_arg4770z00_2274;

						BgL_arg4770z00_2274 =
							(((BgL_csequencez00_bglt) CREF(BgL_obj3550z00_2267))->
							BgL_czd2expzf3z21);
						{	/* Cgen/cop.scm 56 */
							obj_t BgL_auxz00_7482;

							int BgL_auxz00_7480;

							BgL_auxz00_7482 = BBOOL(BgL_arg4770z00_2274);
							BgL_auxz00_7480 = (int) (((long) 2));
							STRUCT_SET(BgL_res3551z00_2270, BgL_auxz00_7480, BgL_auxz00_7482);
					}}
					{	/* Cgen/cop.scm 56 */
						obj_t BgL_arg4772z00_2276;

						BgL_arg4772z00_2276 =
							(((BgL_csequencez00_bglt) CREF(BgL_obj3550z00_2267))->
							BgL_copsz00);
						{	/* Cgen/cop.scm 56 */
							int BgL_auxz00_7486;

							BgL_auxz00_7486 = (int) (((long) 3));
							STRUCT_SET(BgL_res3551z00_2270, BgL_auxz00_7486,
								BgL_arg4772z00_2276);
					}}
					return BgL_res3551z00_2270;
				}
			}
		}
	}



/* struct+object->objec4278 */
	obj_t BGl_structzb2objectzd2ze3objec4278z83zzcgen_copz00(obj_t
		BgL_envz00_4619, obj_t BgL_oz00_4620, obj_t BgL_sz00_4621)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{
				BgL_nopz00_bglt BgL_oz00_2259;

				obj_t BgL_sz00_2260;

				{	/* Cgen/cop.scm 60 */
					BgL_nopz00_bglt BgL_auxz00_7490;

					BgL_oz00_2259 = (BgL_nopz00_bglt) (BgL_oz00_4620);
					BgL_sz00_2260 = BgL_sz00_4621;
					{	/* Cgen/cop.scm 60 */
						obj_t BgL_arg4765z00_2263;

						BgL_arg4765z00_2263 = STRUCT_REF(BgL_sz00_2260, (int) (((long) 0)));
						{	/* Cgen/cop.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_7493;

							BgL_auxz00_7493 = (BgL_objectz00_bglt) (BgL_oz00_2259);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7493, BgL_arg4765z00_2263);
					}}
					{
						obj_t BgL_auxz00_7496;

						BgL_auxz00_7496 = STRUCT_REF(BgL_sz00_2260, (int) (((long) 1)));
						((((BgL_nopz00_bglt) CREF(BgL_oz00_2259))->BgL_locz00) =
							((obj_t) BgL_auxz00_7496), BUNSPEC);
					}
					BgL_auxz00_7490 = BgL_oz00_2259;
					return (obj_t) (BgL_auxz00_7490);
				}
			}
		}
	}



/* object->struct-nop4276 */
	obj_t BGl_objectzd2ze3structzd2nop4276ze3zzcgen_copz00(obj_t BgL_envz00_4622,
		obj_t BgL_obj3577z00_4623)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 60 */
			{
				BgL_nopz00_bglt BgL_obj3577z00_2251;

				BgL_obj3577z00_2251 = (BgL_nopz00_bglt) (BgL_obj3577z00_4623);
				{	/* Cgen/cop.scm 60 */
					obj_t BgL_res3578z00_2254;

					{	/* Cgen/cop.scm 60 */
						obj_t BgL_keyz00_3883;

						BgL_keyz00_3883 = CNST_TABLE_REF(((long) 11));
						BgL_res3578z00_2254 =
							make_struct(BgL_keyz00_3883, (int) (((long) 2)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 60 */
						int BgL_auxz00_7505;

						BgL_auxz00_7505 = (int) (((long) 0));
						STRUCT_SET(BgL_res3578z00_2254, BgL_auxz00_7505, BFALSE);
					}
					{	/* Cgen/cop.scm 60 */
						obj_t BgL_arg4763z00_2256;

						{
							BgL_copz00_bglt BgL_auxz00_7508;

							BgL_auxz00_7508 = (BgL_copz00_bglt) (BgL_obj3577z00_2251);
							BgL_arg4763z00_2256 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7508))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 60 */
							int BgL_auxz00_7511;

							BgL_auxz00_7511 = (int) (((long) 1));
							STRUCT_SET(BgL_res3578z00_2254, BgL_auxz00_7511,
								BgL_arg4763z00_2256);
					}}
					return BgL_res3578z00_2254;
				}
			}
		}
	}



/* struct+object->objec4274 */
	obj_t BGl_structzb2objectzd2ze3objec4274z83zzcgen_copz00(obj_t
		BgL_envz00_4624, obj_t BgL_oz00_4625, obj_t BgL_sz00_4626)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{
				BgL_stopz00_bglt BgL_oz00_2242;

				obj_t BgL_sz00_2243;

				{	/* Cgen/cop.scm 62 */
					BgL_stopz00_bglt BgL_auxz00_7515;

					BgL_oz00_2242 = (BgL_stopz00_bglt) (BgL_oz00_4625);
					BgL_sz00_2243 = BgL_sz00_4626;
					{	/* Cgen/cop.scm 62 */
						obj_t BgL_arg4760z00_2246;

						BgL_arg4760z00_2246 = STRUCT_REF(BgL_sz00_2243, (int) (((long) 0)));
						{	/* Cgen/cop.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_7518;

							BgL_auxz00_7518 = (BgL_objectz00_bglt) (BgL_oz00_2242);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7518, BgL_arg4760z00_2246);
					}}
					{
						obj_t BgL_auxz00_7521;

						BgL_auxz00_7521 = STRUCT_REF(BgL_sz00_2243, (int) (((long) 1)));
						((((BgL_stopz00_bglt) CREF(BgL_oz00_2242))->BgL_locz00) =
							((obj_t) BgL_auxz00_7521), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7525;

						BgL_auxz00_7525 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2243, (int) (((long) 2))));
						((((BgL_stopz00_bglt) CREF(BgL_oz00_2242))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_7525), BUNSPEC);
					}
					BgL_auxz00_7515 = BgL_oz00_2242;
					return (obj_t) (BgL_auxz00_7515);
				}
			}
		}
	}



/* object->struct-stop4272 */
	obj_t BGl_objectzd2ze3structzd2stop4272ze3zzcgen_copz00(obj_t BgL_envz00_4627,
		obj_t BgL_obj3599z00_4628)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 62 */
			{
				BgL_stopz00_bglt BgL_obj3599z00_2232;

				BgL_obj3599z00_2232 = (BgL_stopz00_bglt) (BgL_obj3599z00_4628);
				{	/* Cgen/cop.scm 62 */
					obj_t BgL_res3600z00_2235;

					{	/* Cgen/cop.scm 62 */
						obj_t BgL_keyz00_3863;

						BgL_keyz00_3863 = CNST_TABLE_REF(((long) 12));
						BgL_res3600z00_2235 =
							make_struct(BgL_keyz00_3863, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 62 */
						int BgL_auxz00_7535;

						BgL_auxz00_7535 = (int) (((long) 0));
						STRUCT_SET(BgL_res3600z00_2235, BgL_auxz00_7535, BFALSE);
					}
					{	/* Cgen/cop.scm 62 */
						obj_t BgL_arg4755z00_2237;

						{
							BgL_copz00_bglt BgL_auxz00_7538;

							BgL_auxz00_7538 = (BgL_copz00_bglt) (BgL_obj3599z00_2232);
							BgL_arg4755z00_2237 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7538))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 62 */
							int BgL_auxz00_7541;

							BgL_auxz00_7541 = (int) (((long) 1));
							STRUCT_SET(BgL_res3600z00_2235, BgL_auxz00_7541,
								BgL_arg4755z00_2237);
					}}
					{	/* Cgen/cop.scm 62 */
						BgL_copz00_bglt BgL_arg4757z00_2239;

						BgL_arg4757z00_2239 =
							(((BgL_stopz00_bglt) CREF(BgL_obj3599z00_2232))->BgL_valuez00);
						{	/* Cgen/cop.scm 62 */
							obj_t BgL_auxz00_7547;

							int BgL_auxz00_7545;

							BgL_auxz00_7547 = (obj_t) (BgL_arg4757z00_2239);
							BgL_auxz00_7545 = (int) (((long) 2));
							STRUCT_SET(BgL_res3600z00_2235, BgL_auxz00_7545, BgL_auxz00_7547);
					}}
					return BgL_res3600z00_2235;
				}
			}
		}
	}



/* struct+object->objec4270 */
	obj_t BGl_structzb2objectzd2ze3objec4270z83zzcgen_copz00(obj_t
		BgL_envz00_4629, obj_t BgL_oz00_4630, obj_t BgL_sz00_4631)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{
				BgL_csetqz00_bglt BgL_oz00_2222;

				obj_t BgL_sz00_2223;

				{	/* Cgen/cop.scm 65 */
					BgL_csetqz00_bglt BgL_auxz00_7551;

					BgL_oz00_2222 = (BgL_csetqz00_bglt) (BgL_oz00_4630);
					BgL_sz00_2223 = BgL_sz00_4631;
					{	/* Cgen/cop.scm 65 */
						obj_t BgL_arg4752z00_2226;

						BgL_arg4752z00_2226 = STRUCT_REF(BgL_sz00_2223, (int) (((long) 0)));
						{	/* Cgen/cop.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_7554;

							BgL_auxz00_7554 = (BgL_objectz00_bglt) (BgL_oz00_2222);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7554, BgL_arg4752z00_2226);
					}}
					{
						obj_t BgL_auxz00_7557;

						BgL_auxz00_7557 = STRUCT_REF(BgL_sz00_2223, (int) (((long) 1)));
						((((BgL_csetqz00_bglt) CREF(BgL_oz00_2222))->BgL_locz00) =
							((obj_t) BgL_auxz00_7557), BUNSPEC);
					}
					{
						BgL_varcz00_bglt BgL_auxz00_7561;

						BgL_auxz00_7561 =
							(BgL_varcz00_bglt) (STRUCT_REF(BgL_sz00_2223,
								(int) (((long) 2))));
						((((BgL_csetqz00_bglt) CREF(BgL_oz00_2222))->BgL_varz00) =
							((BgL_varcz00_bglt) BgL_auxz00_7561), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7566;

						BgL_auxz00_7566 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2223, (int) (((long) 3))));
						((((BgL_csetqz00_bglt) CREF(BgL_oz00_2222))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_7566), BUNSPEC);
					}
					BgL_auxz00_7551 = BgL_oz00_2222;
					return (obj_t) (BgL_auxz00_7551);
				}
			}
		}
	}



/* object->struct-csetq4268 */
	obj_t BGl_objectzd2ze3structzd2csetq4268ze3zzcgen_copz00(obj_t
		BgL_envz00_4632, obj_t BgL_obj3629z00_4633)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 65 */
			{
				BgL_csetqz00_bglt BgL_obj3629z00_2210;

				BgL_obj3629z00_2210 = (BgL_csetqz00_bglt) (BgL_obj3629z00_4633);
				{	/* Cgen/cop.scm 65 */
					obj_t BgL_res3630z00_2213;

					{	/* Cgen/cop.scm 65 */
						obj_t BgL_keyz00_3837;

						BgL_keyz00_3837 = CNST_TABLE_REF(((long) 13));
						BgL_res3630z00_2213 =
							make_struct(BgL_keyz00_3837, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 65 */
						int BgL_auxz00_7576;

						BgL_auxz00_7576 = (int) (((long) 0));
						STRUCT_SET(BgL_res3630z00_2213, BgL_auxz00_7576, BFALSE);
					}
					{	/* Cgen/cop.scm 65 */
						obj_t BgL_arg4746z00_2215;

						{
							BgL_copz00_bglt BgL_auxz00_7579;

							BgL_auxz00_7579 = (BgL_copz00_bglt) (BgL_obj3629z00_2210);
							BgL_arg4746z00_2215 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7579))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 65 */
							int BgL_auxz00_7582;

							BgL_auxz00_7582 = (int) (((long) 1));
							STRUCT_SET(BgL_res3630z00_2213, BgL_auxz00_7582,
								BgL_arg4746z00_2215);
					}}
					{	/* Cgen/cop.scm 65 */
						BgL_varcz00_bglt BgL_arg4748z00_2217;

						BgL_arg4748z00_2217 =
							(((BgL_csetqz00_bglt) CREF(BgL_obj3629z00_2210))->BgL_varz00);
						{	/* Cgen/cop.scm 65 */
							obj_t BgL_auxz00_7588;

							int BgL_auxz00_7586;

							BgL_auxz00_7588 = (obj_t) (BgL_arg4748z00_2217);
							BgL_auxz00_7586 = (int) (((long) 2));
							STRUCT_SET(BgL_res3630z00_2213, BgL_auxz00_7586, BgL_auxz00_7588);
					}}
					{	/* Cgen/cop.scm 65 */
						BgL_copz00_bglt BgL_arg4750z00_2219;

						BgL_arg4750z00_2219 =
							(((BgL_csetqz00_bglt) CREF(BgL_obj3629z00_2210))->BgL_valuez00);
						{	/* Cgen/cop.scm 65 */
							obj_t BgL_auxz00_7594;

							int BgL_auxz00_7592;

							BgL_auxz00_7594 = (obj_t) (BgL_arg4750z00_2219);
							BgL_auxz00_7592 = (int) (((long) 3));
							STRUCT_SET(BgL_res3630z00_2213, BgL_auxz00_7592, BgL_auxz00_7594);
					}}
					return BgL_res3630z00_2213;
				}
			}
		}
	}



/* struct+object->objec4266 */
	obj_t BGl_structzb2objectzd2ze3objec4266z83zzcgen_copz00(obj_t
		BgL_envz00_4634, obj_t BgL_oz00_4635, obj_t BgL_sz00_4636)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{
				BgL_cifz00_bglt BgL_oz00_2199;

				obj_t BgL_sz00_2200;

				{	/* Cgen/cop.scm 69 */
					BgL_cifz00_bglt BgL_auxz00_7598;

					BgL_oz00_2199 = (BgL_cifz00_bglt) (BgL_oz00_4635);
					BgL_sz00_2200 = BgL_sz00_4636;
					{	/* Cgen/cop.scm 69 */
						obj_t BgL_arg4743z00_2203;

						BgL_arg4743z00_2203 = STRUCT_REF(BgL_sz00_2200, (int) (((long) 0)));
						{	/* Cgen/cop.scm 69 */
							BgL_objectz00_bglt BgL_auxz00_7601;

							BgL_auxz00_7601 = (BgL_objectz00_bglt) (BgL_oz00_2199);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7601, BgL_arg4743z00_2203);
					}}
					{
						obj_t BgL_auxz00_7604;

						BgL_auxz00_7604 = STRUCT_REF(BgL_sz00_2200, (int) (((long) 1)));
						((((BgL_cifz00_bglt) CREF(BgL_oz00_2199))->BgL_locz00) =
							((obj_t) BgL_auxz00_7604), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7608;

						BgL_auxz00_7608 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2200, (int) (((long) 2))));
						((((BgL_cifz00_bglt) CREF(BgL_oz00_2199))->BgL_testz00) =
							((BgL_copz00_bglt) BgL_auxz00_7608), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7613;

						BgL_auxz00_7613 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2200, (int) (((long) 3))));
						((((BgL_cifz00_bglt) CREF(BgL_oz00_2199))->BgL_truez00) =
							((BgL_copz00_bglt) BgL_auxz00_7613), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7618;

						BgL_auxz00_7618 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2200, (int) (((long) 4))));
						((((BgL_cifz00_bglt) CREF(BgL_oz00_2199))->BgL_falsez00) =
							((BgL_copz00_bglt) BgL_auxz00_7618), BUNSPEC);
					}
					BgL_auxz00_7598 = BgL_oz00_2199;
					return (obj_t) (BgL_auxz00_7598);
				}
			}
		}
	}



/* object->struct-cif4264 */
	obj_t BGl_objectzd2ze3structzd2cif4264ze3zzcgen_copz00(obj_t BgL_envz00_4637,
		obj_t BgL_obj3667z00_4638)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 69 */
			{
				BgL_cifz00_bglt BgL_obj3667z00_2185;

				BgL_obj3667z00_2185 = (BgL_cifz00_bglt) (BgL_obj3667z00_4638);
				{	/* Cgen/cop.scm 69 */
					obj_t BgL_res3668z00_2188;

					{	/* Cgen/cop.scm 69 */
						obj_t BgL_keyz00_3805;

						BgL_keyz00_3805 = CNST_TABLE_REF(((long) 14));
						BgL_res3668z00_2188 =
							make_struct(BgL_keyz00_3805, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 69 */
						int BgL_auxz00_7628;

						BgL_auxz00_7628 = (int) (((long) 0));
						STRUCT_SET(BgL_res3668z00_2188, BgL_auxz00_7628, BFALSE);
					}
					{	/* Cgen/cop.scm 69 */
						obj_t BgL_arg4734z00_2190;

						{
							BgL_copz00_bglt BgL_auxz00_7631;

							BgL_auxz00_7631 = (BgL_copz00_bglt) (BgL_obj3667z00_2185);
							BgL_arg4734z00_2190 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7631))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 69 */
							int BgL_auxz00_7634;

							BgL_auxz00_7634 = (int) (((long) 1));
							STRUCT_SET(BgL_res3668z00_2188, BgL_auxz00_7634,
								BgL_arg4734z00_2190);
					}}
					{	/* Cgen/cop.scm 69 */
						BgL_copz00_bglt BgL_arg4736z00_2192;

						BgL_arg4736z00_2192 =
							(((BgL_cifz00_bglt) CREF(BgL_obj3667z00_2185))->BgL_testz00);
						{	/* Cgen/cop.scm 69 */
							obj_t BgL_auxz00_7640;

							int BgL_auxz00_7638;

							BgL_auxz00_7640 = (obj_t) (BgL_arg4736z00_2192);
							BgL_auxz00_7638 = (int) (((long) 2));
							STRUCT_SET(BgL_res3668z00_2188, BgL_auxz00_7638, BgL_auxz00_7640);
					}}
					{	/* Cgen/cop.scm 69 */
						BgL_copz00_bglt BgL_arg4739z00_2194;

						BgL_arg4739z00_2194 =
							(((BgL_cifz00_bglt) CREF(BgL_obj3667z00_2185))->BgL_truez00);
						{	/* Cgen/cop.scm 69 */
							obj_t BgL_auxz00_7646;

							int BgL_auxz00_7644;

							BgL_auxz00_7646 = (obj_t) (BgL_arg4739z00_2194);
							BgL_auxz00_7644 = (int) (((long) 3));
							STRUCT_SET(BgL_res3668z00_2188, BgL_auxz00_7644, BgL_auxz00_7646);
					}}
					{	/* Cgen/cop.scm 69 */
						BgL_copz00_bglt BgL_arg4741z00_2196;

						BgL_arg4741z00_2196 =
							(((BgL_cifz00_bglt) CREF(BgL_obj3667z00_2185))->BgL_falsez00);
						{	/* Cgen/cop.scm 69 */
							obj_t BgL_auxz00_7652;

							int BgL_auxz00_7650;

							BgL_auxz00_7652 = (obj_t) (BgL_arg4741z00_2196);
							BgL_auxz00_7650 = (int) (((long) 4));
							STRUCT_SET(BgL_res3668z00_2188, BgL_auxz00_7650, BgL_auxz00_7652);
					}}
					return BgL_res3668z00_2188;
				}
			}
		}
	}



/* struct+object->objec4262 */
	obj_t BGl_structzb2objectzd2ze3objec4262z83zzcgen_copz00(obj_t
		BgL_envz00_4639, obj_t BgL_oz00_4640, obj_t BgL_sz00_4641)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{
				BgL_localzd2varzd2_bglt BgL_oz00_2176;

				obj_t BgL_sz00_2177;

				{	/* Cgen/cop.scm 74 */
					BgL_localzd2varzd2_bglt BgL_auxz00_7656;

					BgL_oz00_2176 = (BgL_localzd2varzd2_bglt) (BgL_oz00_4640);
					BgL_sz00_2177 = BgL_sz00_4641;
					{	/* Cgen/cop.scm 74 */
						obj_t BgL_arg4731z00_2180;

						BgL_arg4731z00_2180 = STRUCT_REF(BgL_sz00_2177, (int) (((long) 0)));
						{	/* Cgen/cop.scm 74 */
							BgL_objectz00_bglt BgL_auxz00_7659;

							BgL_auxz00_7659 = (BgL_objectz00_bglt) (BgL_oz00_2176);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7659, BgL_arg4731z00_2180);
					}}
					{
						obj_t BgL_auxz00_7662;

						BgL_auxz00_7662 = STRUCT_REF(BgL_sz00_2177, (int) (((long) 1)));
						((((BgL_localzd2varzd2_bglt) CREF(BgL_oz00_2176))->BgL_locz00) =
							((obj_t) BgL_auxz00_7662), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7666;

						BgL_auxz00_7666 = STRUCT_REF(BgL_sz00_2177, (int) (((long) 2)));
						((((BgL_localzd2varzd2_bglt) CREF(BgL_oz00_2176))->BgL_varsz00) =
							((obj_t) BgL_auxz00_7666), BUNSPEC);
					}
					BgL_auxz00_7656 = BgL_oz00_2176;
					return (obj_t) (BgL_auxz00_7656);
				}
			}
		}
	}



/* object->struct-local4260 */
	obj_t BGl_objectzd2ze3structzd2local4260ze3zzcgen_copz00(obj_t
		BgL_envz00_4642, obj_t BgL_obj3701z00_4643)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 74 */
			{
				BgL_localzd2varzd2_bglt BgL_obj3701z00_2166;

				BgL_obj3701z00_2166 = (BgL_localzd2varzd2_bglt) (BgL_obj3701z00_4643);
				{	/* Cgen/cop.scm 74 */
					obj_t BgL_res3702z00_2169;

					{	/* Cgen/cop.scm 74 */
						obj_t BgL_keyz00_3785;

						BgL_keyz00_3785 = CNST_TABLE_REF(((long) 15));
						BgL_res3702z00_2169 =
							make_struct(BgL_keyz00_3785, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 74 */
						int BgL_auxz00_7675;

						BgL_auxz00_7675 = (int) (((long) 0));
						STRUCT_SET(BgL_res3702z00_2169, BgL_auxz00_7675, BFALSE);
					}
					{	/* Cgen/cop.scm 74 */
						obj_t BgL_arg4727z00_2171;

						{
							BgL_copz00_bglt BgL_auxz00_7678;

							BgL_auxz00_7678 = (BgL_copz00_bglt) (BgL_obj3701z00_2166);
							BgL_arg4727z00_2171 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7678))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 74 */
							int BgL_auxz00_7681;

							BgL_auxz00_7681 = (int) (((long) 1));
							STRUCT_SET(BgL_res3702z00_2169, BgL_auxz00_7681,
								BgL_arg4727z00_2171);
					}}
					{	/* Cgen/cop.scm 74 */
						obj_t BgL_arg4729z00_2173;

						BgL_arg4729z00_2173 =
							(((BgL_localzd2varzd2_bglt) CREF(BgL_obj3701z00_2166))->
							BgL_varsz00);
						{	/* Cgen/cop.scm 74 */
							int BgL_auxz00_7685;

							BgL_auxz00_7685 = (int) (((long) 2));
							STRUCT_SET(BgL_res3702z00_2169, BgL_auxz00_7685,
								BgL_arg4729z00_2173);
					}}
					return BgL_res3702z00_2169;
				}
			}
		}
	}



/* struct+object->objec4258 */
	obj_t BGl_structzb2objectzd2ze3objec4258z83zzcgen_copz00(obj_t
		BgL_envz00_4644, obj_t BgL_oz00_4645, obj_t BgL_sz00_4646)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{
				BgL_cfuncallz00_bglt BgL_oz00_2155;

				obj_t BgL_sz00_2156;

				{	/* Cgen/cop.scm 77 */
					BgL_cfuncallz00_bglt BgL_auxz00_7689;

					BgL_oz00_2155 = (BgL_cfuncallz00_bglt) (BgL_oz00_4645);
					BgL_sz00_2156 = BgL_sz00_4646;
					{	/* Cgen/cop.scm 77 */
						obj_t BgL_arg4724z00_2159;

						BgL_arg4724z00_2159 = STRUCT_REF(BgL_sz00_2156, (int) (((long) 0)));
						{	/* Cgen/cop.scm 77 */
							BgL_objectz00_bglt BgL_auxz00_7692;

							BgL_auxz00_7692 = (BgL_objectz00_bglt) (BgL_oz00_2155);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7692, BgL_arg4724z00_2159);
					}}
					{
						obj_t BgL_auxz00_7695;

						BgL_auxz00_7695 = STRUCT_REF(BgL_sz00_2156, (int) (((long) 1)));
						((((BgL_cfuncallz00_bglt) CREF(BgL_oz00_2155))->BgL_locz00) =
							((obj_t) BgL_auxz00_7695), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7699;

						BgL_auxz00_7699 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2156, (int) (((long) 2))));
						((((BgL_cfuncallz00_bglt) CREF(BgL_oz00_2155))->BgL_funz00) =
							((BgL_copz00_bglt) BgL_auxz00_7699), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7704;

						BgL_auxz00_7704 = STRUCT_REF(BgL_sz00_2156, (int) (((long) 3)));
						((((BgL_cfuncallz00_bglt) CREF(BgL_oz00_2155))->BgL_argsz00) =
							((obj_t) BgL_auxz00_7704), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7708;

						BgL_auxz00_7708 = STRUCT_REF(BgL_sz00_2156, (int) (((long) 4)));
						((((BgL_cfuncallz00_bglt) CREF(BgL_oz00_2155))->BgL_strengthz00) =
							((obj_t) BgL_auxz00_7708), BUNSPEC);
					}
					BgL_auxz00_7689 = BgL_oz00_2155;
					return (obj_t) (BgL_auxz00_7689);
				}
			}
		}
	}



/* object->struct-cfunc4256 */
	obj_t BGl_objectzd2ze3structzd2cfunc4256ze3zzcgen_copz00(obj_t
		BgL_envz00_4647, obj_t BgL_obj3736z00_4648)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 77 */
			{
				BgL_cfuncallz00_bglt BgL_obj3736z00_2141;

				BgL_obj3736z00_2141 = (BgL_cfuncallz00_bglt) (BgL_obj3736z00_4648);
				{	/* Cgen/cop.scm 77 */
					obj_t BgL_res3737z00_2144;

					{	/* Cgen/cop.scm 77 */
						obj_t BgL_keyz00_3753;

						BgL_keyz00_3753 = CNST_TABLE_REF(((long) 16));
						BgL_res3737z00_2144 =
							make_struct(BgL_keyz00_3753, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 77 */
						int BgL_auxz00_7717;

						BgL_auxz00_7717 = (int) (((long) 0));
						STRUCT_SET(BgL_res3737z00_2144, BgL_auxz00_7717, BFALSE);
					}
					{	/* Cgen/cop.scm 77 */
						obj_t BgL_arg4716z00_2146;

						{
							BgL_copz00_bglt BgL_auxz00_7720;

							BgL_auxz00_7720 = (BgL_copz00_bglt) (BgL_obj3736z00_2141);
							BgL_arg4716z00_2146 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7720))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 77 */
							int BgL_auxz00_7723;

							BgL_auxz00_7723 = (int) (((long) 1));
							STRUCT_SET(BgL_res3737z00_2144, BgL_auxz00_7723,
								BgL_arg4716z00_2146);
					}}
					{	/* Cgen/cop.scm 77 */
						BgL_copz00_bglt BgL_arg4718z00_2148;

						BgL_arg4718z00_2148 =
							(((BgL_cfuncallz00_bglt) CREF(BgL_obj3736z00_2141))->BgL_funz00);
						{	/* Cgen/cop.scm 77 */
							obj_t BgL_auxz00_7729;

							int BgL_auxz00_7727;

							BgL_auxz00_7729 = (obj_t) (BgL_arg4718z00_2148);
							BgL_auxz00_7727 = (int) (((long) 2));
							STRUCT_SET(BgL_res3737z00_2144, BgL_auxz00_7727, BgL_auxz00_7729);
					}}
					{	/* Cgen/cop.scm 77 */
						obj_t BgL_arg4720z00_2150;

						BgL_arg4720z00_2150 =
							(((BgL_cfuncallz00_bglt) CREF(BgL_obj3736z00_2141))->BgL_argsz00);
						{	/* Cgen/cop.scm 77 */
							int BgL_auxz00_7733;

							BgL_auxz00_7733 = (int) (((long) 3));
							STRUCT_SET(BgL_res3737z00_2144, BgL_auxz00_7733,
								BgL_arg4720z00_2150);
					}}
					{	/* Cgen/cop.scm 77 */
						obj_t BgL_arg4722z00_2152;

						BgL_arg4722z00_2152 =
							(((BgL_cfuncallz00_bglt) CREF(BgL_obj3736z00_2141))->
							BgL_strengthz00);
						{	/* Cgen/cop.scm 77 */
							int BgL_auxz00_7737;

							BgL_auxz00_7737 = (int) (((long) 4));
							STRUCT_SET(BgL_res3737z00_2144, BgL_auxz00_7737,
								BgL_arg4722z00_2152);
					}}
					return BgL_res3737z00_2144;
				}
			}
		}
	}



/* struct+object->objec4254 */
	obj_t BGl_structzb2objectzd2ze3objec4254z83zzcgen_copz00(obj_t
		BgL_envz00_4649, obj_t BgL_oz00_4650, obj_t BgL_sz00_4651)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{
				BgL_capplyz00_bglt BgL_oz00_2131;

				obj_t BgL_sz00_2132;

				{	/* Cgen/cop.scm 82 */
					BgL_capplyz00_bglt BgL_auxz00_7741;

					BgL_oz00_2131 = (BgL_capplyz00_bglt) (BgL_oz00_4650);
					BgL_sz00_2132 = BgL_sz00_4651;
					{	/* Cgen/cop.scm 82 */
						obj_t BgL_arg4713z00_2135;

						BgL_arg4713z00_2135 = STRUCT_REF(BgL_sz00_2132, (int) (((long) 0)));
						{	/* Cgen/cop.scm 82 */
							BgL_objectz00_bglt BgL_auxz00_7744;

							BgL_auxz00_7744 = (BgL_objectz00_bglt) (BgL_oz00_2131);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7744, BgL_arg4713z00_2135);
					}}
					{
						obj_t BgL_auxz00_7747;

						BgL_auxz00_7747 = STRUCT_REF(BgL_sz00_2132, (int) (((long) 1)));
						((((BgL_capplyz00_bglt) CREF(BgL_oz00_2131))->BgL_locz00) =
							((obj_t) BgL_auxz00_7747), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7751;

						BgL_auxz00_7751 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2132, (int) (((long) 2))));
						((((BgL_capplyz00_bglt) CREF(BgL_oz00_2131))->BgL_funz00) =
							((BgL_copz00_bglt) BgL_auxz00_7751), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7756;

						BgL_auxz00_7756 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2132, (int) (((long) 3))));
						((((BgL_capplyz00_bglt) CREF(BgL_oz00_2131))->BgL_argz00) =
							((BgL_copz00_bglt) BgL_auxz00_7756), BUNSPEC);
					}
					BgL_auxz00_7741 = BgL_oz00_2131;
					return (obj_t) (BgL_auxz00_7741);
				}
			}
		}
	}



/* object->struct-cappl4252 */
	obj_t BGl_objectzd2ze3structzd2cappl4252ze3zzcgen_copz00(obj_t
		BgL_envz00_4652, obj_t BgL_obj3774z00_4653)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 82 */
			{
				BgL_capplyz00_bglt BgL_obj3774z00_2119;

				BgL_obj3774z00_2119 = (BgL_capplyz00_bglt) (BgL_obj3774z00_4653);
				{	/* Cgen/cop.scm 82 */
					obj_t BgL_res3775z00_2122;

					{	/* Cgen/cop.scm 82 */
						obj_t BgL_keyz00_3727;

						BgL_keyz00_3727 = CNST_TABLE_REF(((long) 17));
						BgL_res3775z00_2122 =
							make_struct(BgL_keyz00_3727, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 82 */
						int BgL_auxz00_7766;

						BgL_auxz00_7766 = (int) (((long) 0));
						STRUCT_SET(BgL_res3775z00_2122, BgL_auxz00_7766, BFALSE);
					}
					{	/* Cgen/cop.scm 82 */
						obj_t BgL_arg4706z00_2124;

						{
							BgL_copz00_bglt BgL_auxz00_7769;

							BgL_auxz00_7769 = (BgL_copz00_bglt) (BgL_obj3774z00_2119);
							BgL_arg4706z00_2124 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7769))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 82 */
							int BgL_auxz00_7772;

							BgL_auxz00_7772 = (int) (((long) 1));
							STRUCT_SET(BgL_res3775z00_2122, BgL_auxz00_7772,
								BgL_arg4706z00_2124);
					}}
					{	/* Cgen/cop.scm 82 */
						BgL_copz00_bglt BgL_arg4708z00_2126;

						BgL_arg4708z00_2126 =
							(((BgL_capplyz00_bglt) CREF(BgL_obj3774z00_2119))->BgL_funz00);
						{	/* Cgen/cop.scm 82 */
							obj_t BgL_auxz00_7778;

							int BgL_auxz00_7776;

							BgL_auxz00_7778 = (obj_t) (BgL_arg4708z00_2126);
							BgL_auxz00_7776 = (int) (((long) 2));
							STRUCT_SET(BgL_res3775z00_2122, BgL_auxz00_7776, BgL_auxz00_7778);
					}}
					{	/* Cgen/cop.scm 82 */
						BgL_copz00_bglt BgL_arg4711z00_2128;

						BgL_arg4711z00_2128 =
							(((BgL_capplyz00_bglt) CREF(BgL_obj3774z00_2119))->BgL_argz00);
						{	/* Cgen/cop.scm 82 */
							obj_t BgL_auxz00_7784;

							int BgL_auxz00_7782;

							BgL_auxz00_7784 = (obj_t) (BgL_arg4711z00_2128);
							BgL_auxz00_7782 = (int) (((long) 3));
							STRUCT_SET(BgL_res3775z00_2122, BgL_auxz00_7782, BgL_auxz00_7784);
					}}
					return BgL_res3775z00_2122;
				}
			}
		}
	}



/* struct+object->objec4250 */
	obj_t BGl_structzb2objectzd2ze3objec4250z83zzcgen_copz00(obj_t
		BgL_envz00_4654, obj_t BgL_oz00_4655, obj_t BgL_sz00_4656)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{
				BgL_cappz00_bglt BgL_oz00_2109;

				obj_t BgL_sz00_2110;

				{	/* Cgen/cop.scm 86 */
					BgL_cappz00_bglt BgL_auxz00_7788;

					BgL_oz00_2109 = (BgL_cappz00_bglt) (BgL_oz00_4655);
					BgL_sz00_2110 = BgL_sz00_4656;
					{	/* Cgen/cop.scm 86 */
						obj_t BgL_arg4703z00_2113;

						BgL_arg4703z00_2113 = STRUCT_REF(BgL_sz00_2110, (int) (((long) 0)));
						{	/* Cgen/cop.scm 86 */
							BgL_objectz00_bglt BgL_auxz00_7791;

							BgL_auxz00_7791 = (BgL_objectz00_bglt) (BgL_oz00_2109);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7791, BgL_arg4703z00_2113);
					}}
					{
						obj_t BgL_auxz00_7794;

						BgL_auxz00_7794 = STRUCT_REF(BgL_sz00_2110, (int) (((long) 1)));
						((((BgL_cappz00_bglt) CREF(BgL_oz00_2109))->BgL_locz00) =
							((obj_t) BgL_auxz00_7794), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7798;

						BgL_auxz00_7798 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2110, (int) (((long) 2))));
						((((BgL_cappz00_bglt) CREF(BgL_oz00_2109))->BgL_funz00) =
							((BgL_copz00_bglt) BgL_auxz00_7798), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7803;

						BgL_auxz00_7803 = STRUCT_REF(BgL_sz00_2110, (int) (((long) 3)));
						((((BgL_cappz00_bglt) CREF(BgL_oz00_2109))->BgL_argsz00) =
							((obj_t) BgL_auxz00_7803), BUNSPEC);
					}
					BgL_auxz00_7788 = BgL_oz00_2109;
					return (obj_t) (BgL_auxz00_7788);
				}
			}
		}
	}



/* object->struct-capp4248 */
	obj_t BGl_objectzd2ze3structzd2capp4248ze3zzcgen_copz00(obj_t BgL_envz00_4657,
		obj_t BgL_obj3808z00_4658)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 86 */
			{
				BgL_cappz00_bglt BgL_obj3808z00_2097;

				BgL_obj3808z00_2097 = (BgL_cappz00_bglt) (BgL_obj3808z00_4658);
				{	/* Cgen/cop.scm 86 */
					obj_t BgL_res3809z00_2100;

					{	/* Cgen/cop.scm 86 */
						obj_t BgL_keyz00_3701;

						BgL_keyz00_3701 = CNST_TABLE_REF(((long) 18));
						BgL_res3809z00_2100 =
							make_struct(BgL_keyz00_3701, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 86 */
						int BgL_auxz00_7812;

						BgL_auxz00_7812 = (int) (((long) 0));
						STRUCT_SET(BgL_res3809z00_2100, BgL_auxz00_7812, BFALSE);
					}
					{	/* Cgen/cop.scm 86 */
						obj_t BgL_arg4696z00_2102;

						{
							BgL_copz00_bglt BgL_auxz00_7815;

							BgL_auxz00_7815 = (BgL_copz00_bglt) (BgL_obj3808z00_2097);
							BgL_arg4696z00_2102 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7815))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 86 */
							int BgL_auxz00_7818;

							BgL_auxz00_7818 = (int) (((long) 1));
							STRUCT_SET(BgL_res3809z00_2100, BgL_auxz00_7818,
								BgL_arg4696z00_2102);
					}}
					{	/* Cgen/cop.scm 86 */
						BgL_copz00_bglt BgL_arg4698z00_2104;

						BgL_arg4698z00_2104 =
							(((BgL_cappz00_bglt) CREF(BgL_obj3808z00_2097))->BgL_funz00);
						{	/* Cgen/cop.scm 86 */
							obj_t BgL_auxz00_7824;

							int BgL_auxz00_7822;

							BgL_auxz00_7824 = (obj_t) (BgL_arg4698z00_2104);
							BgL_auxz00_7822 = (int) (((long) 2));
							STRUCT_SET(BgL_res3809z00_2100, BgL_auxz00_7822, BgL_auxz00_7824);
					}}
					{	/* Cgen/cop.scm 86 */
						obj_t BgL_arg4701z00_2106;

						BgL_arg4701z00_2106 =
							(((BgL_cappz00_bglt) CREF(BgL_obj3808z00_2097))->BgL_argsz00);
						{	/* Cgen/cop.scm 86 */
							int BgL_auxz00_7828;

							BgL_auxz00_7828 = (int) (((long) 3));
							STRUCT_SET(BgL_res3809z00_2100, BgL_auxz00_7828,
								BgL_arg4701z00_2106);
					}}
					return BgL_res3809z00_2100;
				}
			}
		}
	}



/* struct+object->objec4246 */
	obj_t BGl_structzb2objectzd2ze3objec4246z83zzcgen_copz00(obj_t
		BgL_envz00_4659, obj_t BgL_oz00_4660, obj_t BgL_sz00_4661)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{
				BgL_cfailz00_bglt BgL_oz00_2086;

				obj_t BgL_sz00_2087;

				{	/* Cgen/cop.scm 90 */
					BgL_cfailz00_bglt BgL_auxz00_7832;

					BgL_oz00_2086 = (BgL_cfailz00_bglt) (BgL_oz00_4660);
					BgL_sz00_2087 = BgL_sz00_4661;
					{	/* Cgen/cop.scm 90 */
						obj_t BgL_arg4693z00_2090;

						BgL_arg4693z00_2090 = STRUCT_REF(BgL_sz00_2087, (int) (((long) 0)));
						{	/* Cgen/cop.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_7835;

							BgL_auxz00_7835 = (BgL_objectz00_bglt) (BgL_oz00_2086);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7835, BgL_arg4693z00_2090);
					}}
					{
						obj_t BgL_auxz00_7838;

						BgL_auxz00_7838 = STRUCT_REF(BgL_sz00_2087, (int) (((long) 1)));
						((((BgL_cfailz00_bglt) CREF(BgL_oz00_2086))->BgL_locz00) =
							((obj_t) BgL_auxz00_7838), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7842;

						BgL_auxz00_7842 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2087, (int) (((long) 2))));
						((((BgL_cfailz00_bglt) CREF(BgL_oz00_2086))->BgL_procz00) =
							((BgL_copz00_bglt) BgL_auxz00_7842), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7847;

						BgL_auxz00_7847 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2087, (int) (((long) 3))));
						((((BgL_cfailz00_bglt) CREF(BgL_oz00_2086))->BgL_msgz00) =
							((BgL_copz00_bglt) BgL_auxz00_7847), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7852;

						BgL_auxz00_7852 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2087, (int) (((long) 4))));
						((((BgL_cfailz00_bglt) CREF(BgL_oz00_2086))->BgL_objz00) =
							((BgL_copz00_bglt) BgL_auxz00_7852), BUNSPEC);
					}
					BgL_auxz00_7832 = BgL_oz00_2086;
					return (obj_t) (BgL_auxz00_7832);
				}
			}
		}
	}



/* object->struct-cfail4244 */
	obj_t BGl_objectzd2ze3structzd2cfail4244ze3zzcgen_copz00(obj_t
		BgL_envz00_4662, obj_t BgL_obj3846z00_4663)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 90 */
			{
				BgL_cfailz00_bglt BgL_obj3846z00_2072;

				BgL_obj3846z00_2072 = (BgL_cfailz00_bglt) (BgL_obj3846z00_4663);
				{	/* Cgen/cop.scm 90 */
					obj_t BgL_res3847z00_2075;

					{	/* Cgen/cop.scm 90 */
						obj_t BgL_keyz00_3669;

						BgL_keyz00_3669 = CNST_TABLE_REF(((long) 19));
						BgL_res3847z00_2075 =
							make_struct(BgL_keyz00_3669, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 90 */
						int BgL_auxz00_7862;

						BgL_auxz00_7862 = (int) (((long) 0));
						STRUCT_SET(BgL_res3847z00_2075, BgL_auxz00_7862, BFALSE);
					}
					{	/* Cgen/cop.scm 90 */
						obj_t BgL_arg4685z00_2077;

						{
							BgL_copz00_bglt BgL_auxz00_7865;

							BgL_auxz00_7865 = (BgL_copz00_bglt) (BgL_obj3846z00_2072);
							BgL_arg4685z00_2077 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7865))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 90 */
							int BgL_auxz00_7868;

							BgL_auxz00_7868 = (int) (((long) 1));
							STRUCT_SET(BgL_res3847z00_2075, BgL_auxz00_7868,
								BgL_arg4685z00_2077);
					}}
					{	/* Cgen/cop.scm 90 */
						BgL_copz00_bglt BgL_arg4687z00_2079;

						BgL_arg4687z00_2079 =
							(((BgL_cfailz00_bglt) CREF(BgL_obj3846z00_2072))->BgL_procz00);
						{	/* Cgen/cop.scm 90 */
							obj_t BgL_auxz00_7874;

							int BgL_auxz00_7872;

							BgL_auxz00_7874 = (obj_t) (BgL_arg4687z00_2079);
							BgL_auxz00_7872 = (int) (((long) 2));
							STRUCT_SET(BgL_res3847z00_2075, BgL_auxz00_7872, BgL_auxz00_7874);
					}}
					{	/* Cgen/cop.scm 90 */
						BgL_copz00_bglt BgL_arg4689z00_2081;

						BgL_arg4689z00_2081 =
							(((BgL_cfailz00_bglt) CREF(BgL_obj3846z00_2072))->BgL_msgz00);
						{	/* Cgen/cop.scm 90 */
							obj_t BgL_auxz00_7880;

							int BgL_auxz00_7878;

							BgL_auxz00_7880 = (obj_t) (BgL_arg4689z00_2081);
							BgL_auxz00_7878 = (int) (((long) 3));
							STRUCT_SET(BgL_res3847z00_2075, BgL_auxz00_7878, BgL_auxz00_7880);
					}}
					{	/* Cgen/cop.scm 90 */
						BgL_copz00_bglt BgL_arg4691z00_2083;

						BgL_arg4691z00_2083 =
							(((BgL_cfailz00_bglt) CREF(BgL_obj3846z00_2072))->BgL_objz00);
						{	/* Cgen/cop.scm 90 */
							obj_t BgL_auxz00_7886;

							int BgL_auxz00_7884;

							BgL_auxz00_7886 = (obj_t) (BgL_arg4691z00_2083);
							BgL_auxz00_7884 = (int) (((long) 4));
							STRUCT_SET(BgL_res3847z00_2075, BgL_auxz00_7884, BgL_auxz00_7886);
					}}
					return BgL_res3847z00_2075;
				}
			}
		}
	}



/* struct+object->objec4242 */
	obj_t BGl_structzb2objectzd2ze3objec4242z83zzcgen_copz00(obj_t
		BgL_envz00_4664, obj_t BgL_oz00_4665, obj_t BgL_sz00_4666)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{
				BgL_cswitchz00_bglt BgL_oz00_2062;

				obj_t BgL_sz00_2063;

				{	/* Cgen/cop.scm 95 */
					BgL_cswitchz00_bglt BgL_auxz00_7890;

					BgL_oz00_2062 = (BgL_cswitchz00_bglt) (BgL_oz00_4665);
					BgL_sz00_2063 = BgL_sz00_4666;
					{	/* Cgen/cop.scm 95 */
						obj_t BgL_arg4682z00_2066;

						BgL_arg4682z00_2066 = STRUCT_REF(BgL_sz00_2063, (int) (((long) 0)));
						{	/* Cgen/cop.scm 95 */
							BgL_objectz00_bglt BgL_auxz00_7893;

							BgL_auxz00_7893 = (BgL_objectz00_bglt) (BgL_oz00_2062);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7893, BgL_arg4682z00_2066);
					}}
					{
						obj_t BgL_auxz00_7896;

						BgL_auxz00_7896 = STRUCT_REF(BgL_sz00_2063, (int) (((long) 1)));
						((((BgL_cswitchz00_bglt) CREF(BgL_oz00_2062))->BgL_locz00) =
							((obj_t) BgL_auxz00_7896), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7900;

						BgL_auxz00_7900 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2063, (int) (((long) 2))));
						((((BgL_cswitchz00_bglt) CREF(BgL_oz00_2062))->BgL_testz00) =
							((BgL_copz00_bglt) BgL_auxz00_7900), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7905;

						BgL_auxz00_7905 = STRUCT_REF(BgL_sz00_2063, (int) (((long) 3)));
						((((BgL_cswitchz00_bglt) CREF(BgL_oz00_2062))->BgL_clausesz00) =
							((obj_t) BgL_auxz00_7905), BUNSPEC);
					}
					BgL_auxz00_7890 = BgL_oz00_2062;
					return (obj_t) (BgL_auxz00_7890);
				}
			}
		}
	}



/* object->struct-cswit4240 */
	obj_t BGl_objectzd2ze3structzd2cswit4240ze3zzcgen_copz00(obj_t
		BgL_envz00_4667, obj_t BgL_obj3884z00_4668)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 95 */
			{
				BgL_cswitchz00_bglt BgL_obj3884z00_2050;

				BgL_obj3884z00_2050 = (BgL_cswitchz00_bglt) (BgL_obj3884z00_4668);
				{	/* Cgen/cop.scm 95 */
					obj_t BgL_res3885z00_2053;

					{	/* Cgen/cop.scm 95 */
						obj_t BgL_keyz00_3643;

						BgL_keyz00_3643 = CNST_TABLE_REF(((long) 20));
						BgL_res3885z00_2053 =
							make_struct(BgL_keyz00_3643, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 95 */
						int BgL_auxz00_7914;

						BgL_auxz00_7914 = (int) (((long) 0));
						STRUCT_SET(BgL_res3885z00_2053, BgL_auxz00_7914, BFALSE);
					}
					{	/* Cgen/cop.scm 95 */
						obj_t BgL_arg4676z00_2055;

						{
							BgL_copz00_bglt BgL_auxz00_7917;

							BgL_auxz00_7917 = (BgL_copz00_bglt) (BgL_obj3884z00_2050);
							BgL_arg4676z00_2055 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7917))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 95 */
							int BgL_auxz00_7920;

							BgL_auxz00_7920 = (int) (((long) 1));
							STRUCT_SET(BgL_res3885z00_2053, BgL_auxz00_7920,
								BgL_arg4676z00_2055);
					}}
					{	/* Cgen/cop.scm 95 */
						BgL_copz00_bglt BgL_arg4678z00_2057;

						BgL_arg4678z00_2057 =
							(((BgL_cswitchz00_bglt) CREF(BgL_obj3884z00_2050))->BgL_testz00);
						{	/* Cgen/cop.scm 95 */
							obj_t BgL_auxz00_7926;

							int BgL_auxz00_7924;

							BgL_auxz00_7926 = (obj_t) (BgL_arg4678z00_2057);
							BgL_auxz00_7924 = (int) (((long) 2));
							STRUCT_SET(BgL_res3885z00_2053, BgL_auxz00_7924, BgL_auxz00_7926);
					}}
					{	/* Cgen/cop.scm 95 */
						obj_t BgL_arg4680z00_2059;

						BgL_arg4680z00_2059 =
							(((BgL_cswitchz00_bglt) CREF(BgL_obj3884z00_2050))->
							BgL_clausesz00);
						{	/* Cgen/cop.scm 95 */
							int BgL_auxz00_7930;

							BgL_auxz00_7930 = (int) (((long) 3));
							STRUCT_SET(BgL_res3885z00_2053, BgL_auxz00_7930,
								BgL_arg4680z00_2059);
					}}
					return BgL_res3885z00_2053;
				}
			}
		}
	}



/* struct+object->objec4238 */
	obj_t BGl_structzb2objectzd2ze3objec4238z83zzcgen_copz00(obj_t
		BgL_envz00_4669, obj_t BgL_oz00_4670, obj_t BgL_sz00_4671)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{
				BgL_cmakezd2boxzd2_bglt BgL_oz00_2041;

				obj_t BgL_sz00_2042;

				{	/* Cgen/cop.scm 99 */
					BgL_cmakezd2boxzd2_bglt BgL_auxz00_7934;

					BgL_oz00_2041 = (BgL_cmakezd2boxzd2_bglt) (BgL_oz00_4670);
					BgL_sz00_2042 = BgL_sz00_4671;
					{	/* Cgen/cop.scm 99 */
						obj_t BgL_arg4673z00_2045;

						BgL_arg4673z00_2045 = STRUCT_REF(BgL_sz00_2042, (int) (((long) 0)));
						{	/* Cgen/cop.scm 99 */
							BgL_objectz00_bglt BgL_auxz00_7937;

							BgL_auxz00_7937 = (BgL_objectz00_bglt) (BgL_oz00_2041);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7937, BgL_arg4673z00_2045);
					}}
					{
						obj_t BgL_auxz00_7940;

						BgL_auxz00_7940 = STRUCT_REF(BgL_sz00_2042, (int) (((long) 1)));
						((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_oz00_2041))->BgL_locz00) =
							((obj_t) BgL_auxz00_7940), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7944;

						BgL_auxz00_7944 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2042, (int) (((long) 2))));
						((((BgL_cmakezd2boxzd2_bglt) CREF(BgL_oz00_2041))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_7944), BUNSPEC);
					}
					BgL_auxz00_7934 = BgL_oz00_2041;
					return (obj_t) (BgL_auxz00_7934);
				}
			}
		}
	}



/* object->struct-cmake4236 */
	obj_t BGl_objectzd2ze3structzd2cmake4236ze3zzcgen_copz00(obj_t
		BgL_envz00_4672, obj_t BgL_obj3914z00_4673)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 99 */
			{
				BgL_cmakezd2boxzd2_bglt BgL_obj3914z00_2031;

				BgL_obj3914z00_2031 = (BgL_cmakezd2boxzd2_bglt) (BgL_obj3914z00_4673);
				{	/* Cgen/cop.scm 99 */
					obj_t BgL_res3915z00_2034;

					{	/* Cgen/cop.scm 99 */
						obj_t BgL_keyz00_3623;

						BgL_keyz00_3623 = CNST_TABLE_REF(((long) 21));
						BgL_res3915z00_2034 =
							make_struct(BgL_keyz00_3623, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 99 */
						int BgL_auxz00_7954;

						BgL_auxz00_7954 = (int) (((long) 0));
						STRUCT_SET(BgL_res3915z00_2034, BgL_auxz00_7954, BFALSE);
					}
					{	/* Cgen/cop.scm 99 */
						obj_t BgL_arg4669z00_2036;

						{
							BgL_copz00_bglt BgL_auxz00_7957;

							BgL_auxz00_7957 = (BgL_copz00_bglt) (BgL_obj3914z00_2031);
							BgL_arg4669z00_2036 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7957))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 99 */
							int BgL_auxz00_7960;

							BgL_auxz00_7960 = (int) (((long) 1));
							STRUCT_SET(BgL_res3915z00_2034, BgL_auxz00_7960,
								BgL_arg4669z00_2036);
					}}
					{	/* Cgen/cop.scm 99 */
						BgL_copz00_bglt BgL_arg4671z00_2038;

						BgL_arg4671z00_2038 =
							(((BgL_cmakezd2boxzd2_bglt) CREF(BgL_obj3914z00_2031))->
							BgL_valuez00);
						{	/* Cgen/cop.scm 99 */
							obj_t BgL_auxz00_7966;

							int BgL_auxz00_7964;

							BgL_auxz00_7966 = (obj_t) (BgL_arg4671z00_2038);
							BgL_auxz00_7964 = (int) (((long) 2));
							STRUCT_SET(BgL_res3915z00_2034, BgL_auxz00_7964, BgL_auxz00_7966);
					}}
					return BgL_res3915z00_2034;
				}
			}
		}
	}



/* struct+object->objec4234 */
	obj_t BGl_structzb2objectzd2ze3objec4234z83zzcgen_copz00(obj_t
		BgL_envz00_4674, obj_t BgL_oz00_4675, obj_t BgL_sz00_4676)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{
				BgL_cboxzd2refzd2_bglt BgL_oz00_2022;

				obj_t BgL_sz00_2023;

				{	/* Cgen/cop.scm 102 */
					BgL_cboxzd2refzd2_bglt BgL_auxz00_7970;

					BgL_oz00_2022 = (BgL_cboxzd2refzd2_bglt) (BgL_oz00_4675);
					BgL_sz00_2023 = BgL_sz00_4676;
					{	/* Cgen/cop.scm 102 */
						obj_t BgL_arg4666z00_2026;

						BgL_arg4666z00_2026 = STRUCT_REF(BgL_sz00_2023, (int) (((long) 0)));
						{	/* Cgen/cop.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_7973;

							BgL_auxz00_7973 = (BgL_objectz00_bglt) (BgL_oz00_2022);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7973, BgL_arg4666z00_2026);
					}}
					{
						obj_t BgL_auxz00_7976;

						BgL_auxz00_7976 = STRUCT_REF(BgL_sz00_2023, (int) (((long) 1)));
						((((BgL_cboxzd2refzd2_bglt) CREF(BgL_oz00_2022))->BgL_locz00) =
							((obj_t) BgL_auxz00_7976), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_7980;

						BgL_auxz00_7980 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2023, (int) (((long) 2))));
						((((BgL_cboxzd2refzd2_bglt) CREF(BgL_oz00_2022))->BgL_varz00) =
							((BgL_copz00_bglt) BgL_auxz00_7980), BUNSPEC);
					}
					BgL_auxz00_7970 = BgL_oz00_2022;
					return (obj_t) (BgL_auxz00_7970);
				}
			}
		}
	}



/* object->struct-cbox-4232 */
	obj_t BGl_objectzd2ze3structzd2cboxzd24232z31zzcgen_copz00(obj_t
		BgL_envz00_4677, obj_t BgL_obj3940z00_4678)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 102 */
			{
				BgL_cboxzd2refzd2_bglt BgL_obj3940z00_2012;

				BgL_obj3940z00_2012 = (BgL_cboxzd2refzd2_bglt) (BgL_obj3940z00_4678);
				{	/* Cgen/cop.scm 102 */
					obj_t BgL_res3941z00_2015;

					{	/* Cgen/cop.scm 102 */
						obj_t BgL_keyz00_3603;

						BgL_keyz00_3603 = CNST_TABLE_REF(((long) 22));
						BgL_res3941z00_2015 =
							make_struct(BgL_keyz00_3603, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 102 */
						int BgL_auxz00_7990;

						BgL_auxz00_7990 = (int) (((long) 0));
						STRUCT_SET(BgL_res3941z00_2015, BgL_auxz00_7990, BFALSE);
					}
					{	/* Cgen/cop.scm 102 */
						obj_t BgL_arg4662z00_2017;

						{
							BgL_copz00_bglt BgL_auxz00_7993;

							BgL_auxz00_7993 = (BgL_copz00_bglt) (BgL_obj3940z00_2012);
							BgL_arg4662z00_2017 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_7993))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 102 */
							int BgL_auxz00_7996;

							BgL_auxz00_7996 = (int) (((long) 1));
							STRUCT_SET(BgL_res3941z00_2015, BgL_auxz00_7996,
								BgL_arg4662z00_2017);
					}}
					{	/* Cgen/cop.scm 102 */
						BgL_copz00_bglt BgL_arg4664z00_2019;

						BgL_arg4664z00_2019 =
							(((BgL_cboxzd2refzd2_bglt) CREF(BgL_obj3940z00_2012))->
							BgL_varz00);
						{	/* Cgen/cop.scm 102 */
							obj_t BgL_auxz00_8002;

							int BgL_auxz00_8000;

							BgL_auxz00_8002 = (obj_t) (BgL_arg4664z00_2019);
							BgL_auxz00_8000 = (int) (((long) 2));
							STRUCT_SET(BgL_res3941z00_2015, BgL_auxz00_8000, BgL_auxz00_8002);
					}}
					return BgL_res3941z00_2015;
				}
			}
		}
	}



/* struct+object->objec4230 */
	obj_t BGl_structzb2objectzd2ze3objec4230z83zzcgen_copz00(obj_t
		BgL_envz00_4679, obj_t BgL_oz00_4680, obj_t BgL_sz00_4681)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{
				BgL_cboxzd2setz12zc0_bglt BgL_oz00_2002;

				obj_t BgL_sz00_2003;

				{	/* Cgen/cop.scm 105 */
					BgL_cboxzd2setz12zc0_bglt BgL_auxz00_8006;

					BgL_oz00_2002 = (BgL_cboxzd2setz12zc0_bglt) (BgL_oz00_4680);
					BgL_sz00_2003 = BgL_sz00_4681;
					{	/* Cgen/cop.scm 105 */
						obj_t BgL_arg4659z00_2006;

						BgL_arg4659z00_2006 = STRUCT_REF(BgL_sz00_2003, (int) (((long) 0)));
						{	/* Cgen/cop.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_8009;

							BgL_auxz00_8009 = (BgL_objectz00_bglt) (BgL_oz00_2002);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8009, BgL_arg4659z00_2006);
					}}
					{
						obj_t BgL_auxz00_8012;

						BgL_auxz00_8012 = STRUCT_REF(BgL_sz00_2003, (int) (((long) 1)));
						((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_oz00_2002))->BgL_locz00) =
							((obj_t) BgL_auxz00_8012), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8016;

						BgL_auxz00_8016 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2003, (int) (((long) 2))));
						((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_oz00_2002))->BgL_varz00) =
							((BgL_copz00_bglt) BgL_auxz00_8016), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8021;

						BgL_auxz00_8021 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_2003, (int) (((long) 3))));
						((((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_oz00_2002))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_auxz00_8021), BUNSPEC);
					}
					BgL_auxz00_8006 = BgL_oz00_2002;
					return (obj_t) (BgL_auxz00_8006);
				}
			}
		}
	}



/* object->struct-cbox-4228 */
	obj_t BGl_objectzd2ze3structzd2cboxzd24228z31zzcgen_copz00(obj_t
		BgL_envz00_4682, obj_t BgL_obj3970z00_4683)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 105 */
			{
				BgL_cboxzd2setz12zc0_bglt BgL_obj3970z00_1990;

				BgL_obj3970z00_1990 = (BgL_cboxzd2setz12zc0_bglt) (BgL_obj3970z00_4683);
				{	/* Cgen/cop.scm 105 */
					obj_t BgL_res3971z00_1993;

					{	/* Cgen/cop.scm 105 */
						obj_t BgL_keyz00_3577;

						BgL_keyz00_3577 = CNST_TABLE_REF(((long) 23));
						BgL_res3971z00_1993 =
							make_struct(BgL_keyz00_3577, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 105 */
						int BgL_auxz00_8031;

						BgL_auxz00_8031 = (int) (((long) 0));
						STRUCT_SET(BgL_res3971z00_1993, BgL_auxz00_8031, BFALSE);
					}
					{	/* Cgen/cop.scm 105 */
						obj_t BgL_arg4653z00_1995;

						{
							BgL_copz00_bglt BgL_auxz00_8034;

							BgL_auxz00_8034 = (BgL_copz00_bglt) (BgL_obj3970z00_1990);
							BgL_arg4653z00_1995 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_8034))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 105 */
							int BgL_auxz00_8037;

							BgL_auxz00_8037 = (int) (((long) 1));
							STRUCT_SET(BgL_res3971z00_1993, BgL_auxz00_8037,
								BgL_arg4653z00_1995);
					}}
					{	/* Cgen/cop.scm 105 */
						BgL_copz00_bglt BgL_arg4655z00_1997;

						BgL_arg4655z00_1997 =
							(((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_obj3970z00_1990))->
							BgL_varz00);
						{	/* Cgen/cop.scm 105 */
							obj_t BgL_auxz00_8043;

							int BgL_auxz00_8041;

							BgL_auxz00_8043 = (obj_t) (BgL_arg4655z00_1997);
							BgL_auxz00_8041 = (int) (((long) 2));
							STRUCT_SET(BgL_res3971z00_1993, BgL_auxz00_8041, BgL_auxz00_8043);
					}}
					{	/* Cgen/cop.scm 105 */
						BgL_copz00_bglt BgL_arg4657z00_1999;

						BgL_arg4657z00_1999 =
							(((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_obj3970z00_1990))->
							BgL_valuez00);
						{	/* Cgen/cop.scm 105 */
							obj_t BgL_auxz00_8049;

							int BgL_auxz00_8047;

							BgL_auxz00_8049 = (obj_t) (BgL_arg4657z00_1999);
							BgL_auxz00_8047 = (int) (((long) 3));
							STRUCT_SET(BgL_res3971z00_1993, BgL_auxz00_8047, BgL_auxz00_8049);
					}}
					return BgL_res3971z00_1993;
				}
			}
		}
	}



/* struct+object->objec4226 */
	obj_t BGl_structzb2objectzd2ze3objec4226z83zzcgen_copz00(obj_t
		BgL_envz00_4684, obj_t BgL_oz00_4685, obj_t BgL_sz00_4686)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{
				BgL_csetzd2exzd2itz00_bglt BgL_oz00_1979;

				obj_t BgL_sz00_1980;

				{	/* Cgen/cop.scm 109 */
					BgL_csetzd2exzd2itz00_bglt BgL_auxz00_8053;

					BgL_oz00_1979 = (BgL_csetzd2exzd2itz00_bglt) (BgL_oz00_4685);
					BgL_sz00_1980 = BgL_sz00_4686;
					{	/* Cgen/cop.scm 109 */
						obj_t BgL_arg4650z00_1983;

						BgL_arg4650z00_1983 = STRUCT_REF(BgL_sz00_1980, (int) (((long) 0)));
						{	/* Cgen/cop.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_8056;

							BgL_auxz00_8056 = (BgL_objectz00_bglt) (BgL_oz00_1979);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8056, BgL_arg4650z00_1983);
					}}
					{
						obj_t BgL_auxz00_8059;

						BgL_auxz00_8059 = STRUCT_REF(BgL_sz00_1980, (int) (((long) 1)));
						((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_oz00_1979))->BgL_locz00) =
							((obj_t) BgL_auxz00_8059), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8063;

						BgL_auxz00_8063 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1980, (int) (((long) 2))));
						((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_oz00_1979))->BgL_exitz00) =
							((BgL_copz00_bglt) BgL_auxz00_8063), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8068;

						BgL_auxz00_8068 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1980, (int) (((long) 3))));
						((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_oz00_1979))->
								BgL_jumpzd2valuezd2) =
							((BgL_copz00_bglt) BgL_auxz00_8068), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8073;

						BgL_auxz00_8073 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1980, (int) (((long) 4))));
						((((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_oz00_1979))->BgL_bodyz00) =
							((BgL_copz00_bglt) BgL_auxz00_8073), BUNSPEC);
					}
					BgL_auxz00_8053 = BgL_oz00_1979;
					return (obj_t) (BgL_auxz00_8053);
				}
			}
		}
	}



/* object->struct-cset-4224 */
	obj_t BGl_objectzd2ze3structzd2csetzd24224z31zzcgen_copz00(obj_t
		BgL_envz00_4687, obj_t BgL_obj4010z00_4688)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 109 */
			{
				BgL_csetzd2exzd2itz00_bglt BgL_obj4010z00_1965;

				BgL_obj4010z00_1965 =
					(BgL_csetzd2exzd2itz00_bglt) (BgL_obj4010z00_4688);
				{	/* Cgen/cop.scm 109 */
					obj_t BgL_res4011z00_1968;

					{	/* Cgen/cop.scm 109 */
						obj_t BgL_keyz00_3545;

						BgL_keyz00_3545 = CNST_TABLE_REF(((long) 24));
						BgL_res4011z00_1968 =
							make_struct(BgL_keyz00_3545, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 109 */
						int BgL_auxz00_8083;

						BgL_auxz00_8083 = (int) (((long) 0));
						STRUCT_SET(BgL_res4011z00_1968, BgL_auxz00_8083, BFALSE);
					}
					{	/* Cgen/cop.scm 109 */
						obj_t BgL_arg4641z00_1970;

						{
							BgL_copz00_bglt BgL_auxz00_8086;

							BgL_auxz00_8086 = (BgL_copz00_bglt) (BgL_obj4010z00_1965);
							BgL_arg4641z00_1970 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_8086))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 109 */
							int BgL_auxz00_8089;

							BgL_auxz00_8089 = (int) (((long) 1));
							STRUCT_SET(BgL_res4011z00_1968, BgL_auxz00_8089,
								BgL_arg4641z00_1970);
					}}
					{	/* Cgen/cop.scm 109 */
						BgL_copz00_bglt BgL_arg4643z00_1972;

						BgL_arg4643z00_1972 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_obj4010z00_1965))->
							BgL_exitz00);
						{	/* Cgen/cop.scm 109 */
							obj_t BgL_auxz00_8095;

							int BgL_auxz00_8093;

							BgL_auxz00_8095 = (obj_t) (BgL_arg4643z00_1972);
							BgL_auxz00_8093 = (int) (((long) 2));
							STRUCT_SET(BgL_res4011z00_1968, BgL_auxz00_8093, BgL_auxz00_8095);
					}}
					{	/* Cgen/cop.scm 109 */
						BgL_copz00_bglt BgL_arg4645z00_1974;

						BgL_arg4645z00_1974 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_obj4010z00_1965))->
							BgL_jumpzd2valuezd2);
						{	/* Cgen/cop.scm 109 */
							obj_t BgL_auxz00_8101;

							int BgL_auxz00_8099;

							BgL_auxz00_8101 = (obj_t) (BgL_arg4645z00_1974);
							BgL_auxz00_8099 = (int) (((long) 3));
							STRUCT_SET(BgL_res4011z00_1968, BgL_auxz00_8099, BgL_auxz00_8101);
					}}
					{	/* Cgen/cop.scm 109 */
						BgL_copz00_bglt BgL_arg4648z00_1976;

						BgL_arg4648z00_1976 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_obj4010z00_1965))->
							BgL_bodyz00);
						{	/* Cgen/cop.scm 109 */
							obj_t BgL_auxz00_8107;

							int BgL_auxz00_8105;

							BgL_auxz00_8107 = (obj_t) (BgL_arg4648z00_1976);
							BgL_auxz00_8105 = (int) (((long) 4));
							STRUCT_SET(BgL_res4011z00_1968, BgL_auxz00_8105, BgL_auxz00_8107);
					}}
					return BgL_res4011z00_1968;
				}
			}
		}
	}



/* struct+object->objec4222 */
	obj_t BGl_structzb2objectzd2ze3objec4222z83zzcgen_copz00(obj_t
		BgL_envz00_4689, obj_t BgL_oz00_4690, obj_t BgL_sz00_4691)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{
				BgL_cjumpzd2exzd2itz00_bglt BgL_oz00_1955;

				obj_t BgL_sz00_1956;

				{	/* Cgen/cop.scm 114 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_auxz00_8111;

					BgL_oz00_1955 = (BgL_cjumpzd2exzd2itz00_bglt) (BgL_oz00_4690);
					BgL_sz00_1956 = BgL_sz00_4691;
					{	/* Cgen/cop.scm 114 */
						obj_t BgL_arg4638z00_1959;

						BgL_arg4638z00_1959 = STRUCT_REF(BgL_sz00_1956, (int) (((long) 0)));
						{	/* Cgen/cop.scm 114 */
							BgL_objectz00_bglt BgL_auxz00_8114;

							BgL_auxz00_8114 = (BgL_objectz00_bglt) (BgL_oz00_1955);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8114, BgL_arg4638z00_1959);
					}}
					{
						obj_t BgL_auxz00_8117;

						BgL_auxz00_8117 = STRUCT_REF(BgL_sz00_1956, (int) (((long) 1)));
						((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_oz00_1955))->BgL_locz00) =
							((obj_t) BgL_auxz00_8117), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8121;

						BgL_auxz00_8121 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1956, (int) (((long) 2))));
						((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_oz00_1955))->
								BgL_exitz00) = ((BgL_copz00_bglt) BgL_auxz00_8121), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8126;

						BgL_auxz00_8126 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1956, (int) (((long) 3))));
						((((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_oz00_1955))->
								BgL_valuez00) = ((BgL_copz00_bglt) BgL_auxz00_8126), BUNSPEC);
					}
					BgL_auxz00_8111 = BgL_oz00_1955;
					return (obj_t) (BgL_auxz00_8111);
				}
			}
		}
	}



/* object->struct-cjump4220 */
	obj_t BGl_objectzd2ze3structzd2cjump4220ze3zzcgen_copz00(obj_t
		BgL_envz00_4692, obj_t BgL_obj4048z00_4693)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 114 */
			{
				BgL_cjumpzd2exzd2itz00_bglt BgL_obj4048z00_1943;

				BgL_obj4048z00_1943 =
					(BgL_cjumpzd2exzd2itz00_bglt) (BgL_obj4048z00_4693);
				{	/* Cgen/cop.scm 114 */
					obj_t BgL_res4049z00_1946;

					{	/* Cgen/cop.scm 114 */
						obj_t BgL_keyz00_3519;

						BgL_keyz00_3519 = CNST_TABLE_REF(((long) 25));
						BgL_res4049z00_1946 =
							make_struct(BgL_keyz00_3519, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 114 */
						int BgL_auxz00_8136;

						BgL_auxz00_8136 = (int) (((long) 0));
						STRUCT_SET(BgL_res4049z00_1946, BgL_auxz00_8136, BFALSE);
					}
					{	/* Cgen/cop.scm 114 */
						obj_t BgL_arg4630z00_1948;

						{
							BgL_copz00_bglt BgL_auxz00_8139;

							BgL_auxz00_8139 = (BgL_copz00_bglt) (BgL_obj4048z00_1943);
							BgL_arg4630z00_1948 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_8139))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 114 */
							int BgL_auxz00_8142;

							BgL_auxz00_8142 = (int) (((long) 1));
							STRUCT_SET(BgL_res4049z00_1946, BgL_auxz00_8142,
								BgL_arg4630z00_1948);
					}}
					{	/* Cgen/cop.scm 114 */
						BgL_copz00_bglt BgL_arg4632z00_1950;

						BgL_arg4632z00_1950 =
							(((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_obj4048z00_1943))->
							BgL_exitz00);
						{	/* Cgen/cop.scm 114 */
							obj_t BgL_auxz00_8148;

							int BgL_auxz00_8146;

							BgL_auxz00_8148 = (obj_t) (BgL_arg4632z00_1950);
							BgL_auxz00_8146 = (int) (((long) 2));
							STRUCT_SET(BgL_res4049z00_1946, BgL_auxz00_8146, BgL_auxz00_8148);
					}}
					{	/* Cgen/cop.scm 114 */
						BgL_copz00_bglt BgL_arg4634z00_1952;

						BgL_arg4634z00_1952 =
							(((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_obj4048z00_1943))->
							BgL_valuez00);
						{	/* Cgen/cop.scm 114 */
							obj_t BgL_auxz00_8154;

							int BgL_auxz00_8152;

							BgL_auxz00_8154 = (obj_t) (BgL_arg4634z00_1952);
							BgL_auxz00_8152 = (int) (((long) 3));
							STRUCT_SET(BgL_res4049z00_1946, BgL_auxz00_8152, BgL_auxz00_8154);
					}}
					return BgL_res4049z00_1946;
				}
			}
		}
	}



/* struct+object->objec4218 */
	obj_t BGl_structzb2objectzd2ze3objec4218z83zzcgen_copz00(obj_t
		BgL_envz00_4694, obj_t BgL_oz00_4695, obj_t BgL_sz00_4696)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{
				BgL_sfunzf2czf2_bglt BgL_oz00_1930;

				obj_t BgL_sz00_1931;

				{	/* Cgen/cop.scm 118 */
					BgL_sfunzf2czf2_bglt BgL_auxz00_8158;

					BgL_oz00_1930 = (BgL_sfunzf2czf2_bglt) (BgL_oz00_4695);
					BgL_sz00_1931 = BgL_sz00_4696;
					{

						{	/* Cgen/cop.scm 118 */
							obj_t BgL_old4099z00_1934;

							obj_t BgL_aux4100z00_1935;

							{	/* Cgen/cop.scm 118 */
								obj_t BgL_nextzd2method4217zd2_1941;

								BgL_nextzd2method4217zd2_1941 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1930),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sfunzf2Czf2zzcgen_copz00);
								if (PROCEDUREP(BgL_nextzd2method4217zd2_1941))
									{	/* Cgen/cop.scm 118 */
										BgL_old4099z00_1934 =
											PROCEDURE_ENTRY(BgL_nextzd2method4217zd2_1941)
											(BgL_nextzd2method4217zd2_1941, (obj_t) (BgL_oz00_1930),
											BgL_sz00_1931, BEOA);
									}
								else
									{	/* Cgen/cop.scm 118 */
										BgL_old4099z00_1934 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1930), BgL_sz00_1931));
									}
							}
							BgL_aux4100z00_1935 =
								STRUCT_REF(BgL_sz00_1931, (int) (((long) 0)));
							{	/* Cgen/cop.scm 118 */
								BgL_sfunzf2czf2_bglt BgL_new4101z00_1936;

								BgL_new4101z00_1936 =
									((BgL_sfunzf2czf2_bglt) (BgL_old4099z00_1934));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4101z00_1936),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sfunzf2Czf2zzcgen_copz00));
								{	/* Cgen/cop.scm 118 */
									BgL_sfunzf2czf2_bglt BgL_arg4625z00_1938;

									{	/* Cgen/cop.scm 118 */
										obj_t BgL_arg4626z00_1939;

										obj_t BgL_arg4627z00_1940;

										BgL_arg4626z00_1939 =
											STRUCT_REF(BgL_aux4100z00_1935, (int) (((long) 0)));
										BgL_arg4627z00_1940 =
											STRUCT_REF(BgL_aux4100z00_1935, (int) (((long) 1)));
										{	/* Cgen/cop.scm 118 */
											BgL_sfunzf2czf2_bglt BgL_res4974z00_3517;

											{	/* Cgen/cop.scm 118 */
												BgL_clabelz00_bglt BgL_label4063z00_3508;

												bool_t BgL_integrated4064z00_3509;

												BgL_label4063z00_3508 =
													(BgL_clabelz00_bglt) (BgL_arg4626z00_1939);
												BgL_integrated4064z00_3509 = CBOOL(BgL_arg4627z00_1940);
												{	/* Cgen/cop.scm 118 */
													BgL_sfunzf2czf2_bglt BgL_new4065z00_3510;

													BgL_new4065z00_3510 =
														((BgL_sfunzf2czf2_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_sfunzf2czf2_bgl))));
													{	/* Cgen/cop.scm 118 */
														BgL_sfunzf2czf2_bglt BgL_res4973z00_3516;

														{	/* Cgen/cop.scm 118 */
															BgL_sfunzf2czf2_bglt BgL_new4090z00_3511;

															BgL_new4090z00_3511 = BgL_new4065z00_3510;
															{	/* Cgen/cop.scm 118 */
																BgL_clabelz00_bglt BgL_label4088z00_3514;

																bool_t BgL_integrated4089z00_3515;

																BgL_label4088z00_3514 = BgL_label4063z00_3508;
																BgL_integrated4089z00_3515 =
																	BgL_integrated4064z00_3509;
																((((BgL_sfunzf2czf2_bglt)
																			CREF(BgL_new4090z00_3511))->
																		BgL_labelz00) =
																	((BgL_clabelz00_bglt) BgL_label4088z00_3514),
																	BUNSPEC);
																((((BgL_sfunzf2czf2_bglt)
																			CREF(BgL_new4090z00_3511))->
																		BgL_integratedz00) =
																	((bool_t) BgL_integrated4089z00_3515),
																	BUNSPEC);
																BgL_res4973z00_3516 = BgL_new4090z00_3511;
														}} BgL_res4973z00_3516;
													}
													BgL_res4974z00_3517 = BgL_new4065z00_3510;
											}}
											BgL_arg4625z00_1938 = BgL_res4974z00_3517;
									}}
									{	/* Cgen/cop.scm 118 */
										obj_t BgL_auxz00_8186;

										BgL_objectz00_bglt BgL_auxz00_8184;

										BgL_auxz00_8186 = (obj_t) (BgL_arg4625z00_1938);
										BgL_auxz00_8184 =
											(BgL_objectz00_bglt) (BgL_new4101z00_1936);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_8184, BgL_auxz00_8186);
								}}
								BgL_auxz00_8158 = BgL_new4101z00_1936;
					}}}
					return (obj_t) (BgL_auxz00_8158);
				}
			}
		}
	}



/* object->struct-sfun/4216 */
	obj_t BGl_objectzd2ze3structzd2sfunzf24216z11zzcgen_copz00(obj_t
		BgL_envz00_4697, obj_t BgL_obj4096z00_4698)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 118 */
			{
				BgL_sfunzf2czf2_bglt BgL_obj4096z00_1918;

				BgL_obj4096z00_1918 = (BgL_sfunzf2czf2_bglt) (BgL_obj4096z00_4698);
				{

					{	/* Cgen/cop.scm 118 */
						obj_t BgL_res4097z00_1921;

						{	/* Cgen/cop.scm 118 */
							obj_t BgL_nextzd2method4215zd2_1928;

							BgL_nextzd2method4215zd2_1928 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4096z00_1918),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sfunzf2Czf2zzcgen_copz00);
							if (PROCEDUREP(BgL_nextzd2method4215zd2_1928))
								{	/* Cgen/cop.scm 118 */
									BgL_res4097z00_1921 =
										PROCEDURE_ENTRY(BgL_nextzd2method4215zd2_1928)
										(BgL_nextzd2method4215zd2_1928,
										(obj_t) (BgL_obj4096z00_1918), BEOA);
								}
							else
								{	/* Cgen/cop.scm 118 */
									BgL_res4097z00_1921 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4096z00_1918));
								}
						}
						{	/* Cgen/cop.scm 118 */
							obj_t BgL_aux4098z00_1922;

							{	/* Cgen/cop.scm 118 */
								obj_t BgL_keyz00_3479;

								BgL_keyz00_3479 = CNST_TABLE_REF(((long) 26));
								BgL_aux4098z00_1922 =
									make_struct(BgL_keyz00_3479, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cgen/cop.scm 118 */
								BgL_clabelz00_bglt BgL_arg4619z00_1924;

								{
									obj_t BgL_auxz00_8203;

									{	/* Cgen/cop.scm 118 */
										BgL_objectz00_bglt BgL_auxz00_8204;

										BgL_auxz00_8204 =
											(BgL_objectz00_bglt) (BgL_obj4096z00_1918);
										BgL_auxz00_8203 = BGL_OBJECT_WIDENING(BgL_auxz00_8204);
									}
									BgL_arg4619z00_1924 =
										(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_8203))->
										BgL_labelz00);
								}
								{	/* Cgen/cop.scm 118 */
									obj_t BgL_auxz00_8210;

									int BgL_auxz00_8208;

									BgL_auxz00_8210 = (obj_t) (BgL_arg4619z00_1924);
									BgL_auxz00_8208 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4098z00_1922, BgL_auxz00_8208,
										BgL_auxz00_8210);
							}}
							{	/* Cgen/cop.scm 118 */
								bool_t BgL_arg4621z00_1926;

								{
									obj_t BgL_auxz00_8213;

									{	/* Cgen/cop.scm 118 */
										BgL_objectz00_bglt BgL_auxz00_8214;

										BgL_auxz00_8214 =
											(BgL_objectz00_bglt) (BgL_obj4096z00_1918);
										BgL_auxz00_8213 = BGL_OBJECT_WIDENING(BgL_auxz00_8214);
									}
									BgL_arg4621z00_1926 =
										(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_8213))->
										BgL_integratedz00);
								}
								{	/* Cgen/cop.scm 118 */
									obj_t BgL_auxz00_8220;

									int BgL_auxz00_8218;

									BgL_auxz00_8220 = BBOOL(BgL_arg4621z00_1926);
									BgL_auxz00_8218 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4098z00_1922, BgL_auxz00_8218,
										BgL_auxz00_8220);
							}}
							{	/* Cgen/cop.scm 118 */
								int BgL_auxz00_8223;

								BgL_auxz00_8223 = (int) (((long) 0));
								STRUCT_SET(BgL_res4097z00_1921, BgL_auxz00_8223,
									BgL_aux4098z00_1922);
							}
							{	/* Cgen/cop.scm 118 */
								obj_t BgL_auxz00_8226;

								BgL_auxz00_8226 = STRUCT_KEY(BgL_res4097z00_1921);
								STRUCT_KEY_SET(BgL_aux4098z00_1922, BgL_auxz00_8226);
							}
							{	/* Cgen/cop.scm 118 */
								obj_t BgL_kz00_3498;

								BgL_kz00_3498 = CNST_TABLE_REF(((long) 26));
								STRUCT_KEY_SET(BgL_res4097z00_1921, BgL_kz00_3498);
							}
							return BgL_res4097z00_1921;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4214 */
	obj_t BGl_structzb2objectzd2ze3objec4214z83zzcgen_copz00(obj_t
		BgL_envz00_4699, obj_t BgL_oz00_4700, obj_t BgL_sz00_4701)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{
				BgL_bdbzd2blockzd2_bglt BgL_oz00_1909;

				obj_t BgL_sz00_1910;

				{	/* Cgen/cop.scm 122 */
					BgL_bdbzd2blockzd2_bglt BgL_auxz00_8232;

					BgL_oz00_1909 = (BgL_bdbzd2blockzd2_bglt) (BgL_oz00_4700);
					BgL_sz00_1910 = BgL_sz00_4701;
					{	/* Cgen/cop.scm 122 */
						obj_t BgL_arg4616z00_1913;

						BgL_arg4616z00_1913 = STRUCT_REF(BgL_sz00_1910, (int) (((long) 0)));
						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_auxz00_8235;

							BgL_auxz00_8235 = (BgL_objectz00_bglt) (BgL_oz00_1909);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8235, BgL_arg4616z00_1913);
					}}
					{
						obj_t BgL_auxz00_8238;

						BgL_auxz00_8238 = STRUCT_REF(BgL_sz00_1910, (int) (((long) 1)));
						((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_oz00_1909))->BgL_locz00) =
							((obj_t) BgL_auxz00_8238), BUNSPEC);
					}
					{
						BgL_copz00_bglt BgL_auxz00_8242;

						BgL_auxz00_8242 =
							(BgL_copz00_bglt) (STRUCT_REF(BgL_sz00_1910, (int) (((long) 2))));
						((((BgL_bdbzd2blockzd2_bglt) CREF(BgL_oz00_1909))->BgL_bodyz00) =
							((BgL_copz00_bglt) BgL_auxz00_8242), BUNSPEC);
					}
					BgL_auxz00_8232 = BgL_oz00_1909;
					return (obj_t) (BgL_auxz00_8232);
				}
			}
		}
	}



/* object->struct-bdb-b4212 */
	obj_t BGl_objectzd2ze3structzd2bdbzd2b4212z31zzcgen_copz00(obj_t
		BgL_envz00_4702, obj_t BgL_obj4172z00_4703)
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 122 */
			{
				BgL_bdbzd2blockzd2_bglt BgL_obj4172z00_1899;

				BgL_obj4172z00_1899 = (BgL_bdbzd2blockzd2_bglt) (BgL_obj4172z00_4703);
				{	/* Cgen/cop.scm 122 */
					obj_t BgL_res4173z00_1902;

					{	/* Cgen/cop.scm 122 */
						obj_t BgL_keyz00_3459;

						BgL_keyz00_3459 = CNST_TABLE_REF(((long) 27));
						BgL_res4173z00_1902 =
							make_struct(BgL_keyz00_3459, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Cgen/cop.scm 122 */
						int BgL_auxz00_8252;

						BgL_auxz00_8252 = (int) (((long) 0));
						STRUCT_SET(BgL_res4173z00_1902, BgL_auxz00_8252, BFALSE);
					}
					{	/* Cgen/cop.scm 122 */
						obj_t BgL_arg4612z00_1904;

						{
							BgL_copz00_bglt BgL_auxz00_8255;

							BgL_auxz00_8255 = (BgL_copz00_bglt) (BgL_obj4172z00_1899);
							BgL_arg4612z00_1904 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_8255))->BgL_locz00);
						}
						{	/* Cgen/cop.scm 122 */
							int BgL_auxz00_8258;

							BgL_auxz00_8258 = (int) (((long) 1));
							STRUCT_SET(BgL_res4173z00_1902, BgL_auxz00_8258,
								BgL_arg4612z00_1904);
					}}
					{	/* Cgen/cop.scm 122 */
						BgL_copz00_bglt BgL_arg4614z00_1906;

						BgL_arg4614z00_1906 =
							(((BgL_bdbzd2blockzd2_bglt) CREF(BgL_obj4172z00_1899))->
							BgL_bodyz00);
						{	/* Cgen/cop.scm 122 */
							obj_t BgL_auxz00_8264;

							int BgL_auxz00_8262;

							BgL_auxz00_8264 = (obj_t) (BgL_arg4614z00_1906);
							BgL_auxz00_8262 = (int) (((long) 2));
							STRUCT_SET(BgL_res4173z00_1902, BgL_auxz00_8262, BgL_auxz00_8264);
					}}
					return BgL_res4173z00_1902;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_copz00()
	{
		AN_OBJECT;
		{	/* Cgen/cop.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5037z00zzcgen_copz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5037z00zzcgen_copz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5037z00zzcgen_copz00));
		}
	}

#ifdef __cplusplus
}
#endif
