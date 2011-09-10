/*===========================================================================*/
/*   (SawMill/defs.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/defs.scm)*/
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

	typedef struct BgL_rtl_lastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_lastz00_bglt;

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_jumpexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                      *BgL_rtl_jumpexitz00_bglt;

	typedef struct BgL_rtl_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_failz00_bglt;

	typedef struct BgL_rtl_notseqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_notseqz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_purez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_purez00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

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

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                     *BgL_rtl_vlengthz00_bglt;

	typedef struct BgL_rtl_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                 *BgL_rtl_isaz00_bglt;

	typedef struct BgL_rtl_makeboxz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_makeboxz00_bglt;

	typedef struct BgL_rtl_boxrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxrefz00_bglt;

	typedef struct BgL_rtl_effectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_effectz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_setfieldz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_boxsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxsetz00_bglt;

	typedef struct BgL_rtl_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_constrz00;
	}                 *BgL_rtl_newz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_applyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                   *BgL_rtl_applyz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

	typedef struct BgL_rtl_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                  *BgL_rtl_castz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_protectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_protectz00_bglt;

	typedef struct BgL_rtl_protectedz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                       *BgL_rtl_protectedz00_bglt;

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


	static obj_t BGl__fillzd2rtl_ifnez12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2rtl_funcallzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_fillzd2rtl_protectedz12zc0zzsaw_defsz00(BgL_rtl_protectedz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_fillzd2rtl_boxsetz12zc0zzsaw_defsz00(BgL_rtl_boxsetz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static obj_t BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_loadgzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt BGl_rtl_newzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_dumpzd2funzd2rtl_loadfun4611z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_jumpexitz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_dumpzd2funzd2rtl_call4621z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl__rtl_loadizf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_makezd2rtl_funzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_fillzd2rtl_protectz12zc0zzsaw_defsz00(BgL_rtl_protectz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vlengthz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_lightfuncallz12zc0zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_rtl_protectedzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt
		BGl_fillzd2rtl_ifz12zc0zzsaw_defsz00(BgL_rtl_ifz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_fillzd2rtl_lightfuncallz12zc0zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_r4785ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_returnz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_castzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_r4798ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_boxsetz80zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_loadfunz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt
		BGl_fillzd2rtl_failz12zc0zzsaw_defsz00(BgL_rtl_failz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_isaz00_bglt
		BGl_fillzd2rtl_isaz12zc0zzsaw_defsz00(BgL_rtl_isaz00_bglt, obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_za2tracezd2portza2zd2zztools_tracez00;
	static obj_t BGl__fillzd2rtl_funz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_fillzd2rtl_globalrefz12zc0zzsaw_defsz00(BgL_rtl_globalrefz00_bglt,
		obj_t, BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__rtl_pragmazf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_storegz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_castzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_loadfunzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt BGl_rtl_vsetzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_dumpzd2rtl_ins4597zd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_makezd2rtl_returnzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl__rtl_nopzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_z52allocatezd2rtl_notseqz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_rtl_storegzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__rtl_setfieldzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_boxrefz00zzsaw_defsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_protectz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_regzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_fillzd2rtl_notseqz12zc0zzsaw_defsz00(BgL_rtl_notseqz00_bglt, obj_t);
	static obj_t BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_globalrefz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_lastz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_vrefzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_nopzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__dumpz00zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_cast_nullz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t, obj_t, BgL_rtl_funz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_fillzd2rtl_funz12zc0zzsaw_defsz00(BgL_rtl_funz00_bglt, obj_t);
	static bool_t BGl_dumpzd2argszd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_switchzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_jumpexitz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_pragmazd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_switchzd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_isaz00_bglt
		BGl_makezd2rtl_isazd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_returnz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_rtl_protectzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_protectz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2blockz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_protectedzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_boxsetz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_gozf3zf3zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_i4627ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_z52allocatezd2rtl_pragmaz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt BGl_rtl_callzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_funz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2rtl_lightfuncallz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_selectzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_fillzd2rtl_cast_nullz12zc0zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt,
		obj_t, BgL_typez00_bglt);
	static obj_t BGl__z52allocatezd2rtl_setfieldz80zzsaw_defsz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_inszf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_vrefzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_z52allocatezd2rtl_setfieldz80zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_returnzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_loadfunzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_dumpzd2funzd2rtl_loadg4609z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt
		BGl_fillzd2rtl_vrefz12zc0zzsaw_defsz00(BgL_rtl_vrefz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2rtl_i4699ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_loadgz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_loadiz80zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_n4667ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_newzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_fillzd2rtl_jumpexitz12zc0zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_makeboxzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt
		BGl_fillzd2rtl_applyz12zc0zzsaw_defsz00(BgL_rtl_applyz00_bglt, obj_t);
	static obj_t BGl__fillzd2rtl_returnz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_i4752ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadfunz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_i4756ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__dumpzd2funzd2default4600z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_shapezd2rtl_reg4589zd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_i4768ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_objectzd2ze3structzd2rtl_s4679ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_s4683ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_n4739ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_effectzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_z52allocatezd2rtl_effectz80zzsaw_defsz00();
	static obj_t BGl__z52allocatezd2rtl_vlengthz80zzsaw_defsz00(obj_t);
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt BGl_rtl_purezd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_fillzd2rtl_switchz12zc0zzsaw_defsz00(BgL_rtl_switchz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_rtl_returnzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_objectzd2ze3structzd2rtl_n4773ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_boxsetzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_dumpzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2rtl_notseqzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_protectedzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_s4760ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt BGl_rtl_inszd2nilzd2zzsaw_defsz00();
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_objectzd2ze3structzd2rtl_s4764ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifeqzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_goz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_failzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_insz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_makeboxz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_loadgzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_boxsetz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rtl_loadizd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_vlengthzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt BGl_rtl_ifzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_isaz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_protectzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_z52allocatezd2rtl_funz80zzsaw_defsz00();
	static obj_t BGl__rtl_boxsetzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzsaw_defsz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl__fillzd2rtl_castz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_fillzd2rtl_effectz12zc0zzsaw_defsz00(BgL_rtl_effectz00_bglt, obj_t);
	static obj_t BGl__rtl_globalrefzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__inszd2argsza2z70zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_protectz80zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_isazf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt
		BGl_makezd2rtl_newzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_dumpzd2funzd2rtl_ifeq4615z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_blockz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt
		BGl_makezd2rtl_movzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_funcallz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_pragmazd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_loadgzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_dumpzd2default4590zd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_inszf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_fillzd2rtl_storegz12zc0zzsaw_defsz00(BgL_rtl_storegz00_bglt, obj_t,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt
		BGl_fillzd2rtl_ifeqz12zc0zzsaw_defsz00(BgL_rtl_ifeqz00_bglt, obj_t,
		BgL_blockz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_getfieldz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_newz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_notseqzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__blockzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt
		BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_callzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_returnzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_dumpzd2funzd2rtl_ifne4617z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_notseqz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_selectz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_protectedz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_vallocz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_movz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_funcallzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_funzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_z52allocatezd2rtl_insz80zzsaw_defsz00();
	static obj_t BGl_objectzd2ze3structzd2rtl_e4687ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__makezd2rtl_castzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rtl_effectzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt BGl_rtl_loadgzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_makezd2rtl_selectzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_isaz00_bglt
		BGl_z52allocatezd2rtl_isaz80zzsaw_defsz00();
	static obj_t BGl__z52allocatezd2rtl_funz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_vrefzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__dumpzd2funzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_makezd2rtl_valloczd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt
		BGl_fillzd2rtl_newz12zc0zzsaw_defsz00(BgL_rtl_newz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl__rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2block4623ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2blockzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_failzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_loadfunz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_gozf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_boxsetzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt
		BGl_makezd2rtl_callzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static obj_t BGl__rtl_failzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_fillzd2rtl_makeboxz12zc0zzsaw_defsz00(BgL_rtl_makeboxz00_bglt, obj_t);
	static obj_t BGl__rtl_inszd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_newz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_z52allocatezd2rtl_protectedz80zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_movz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt
		BGl_fillzd2rtl_loadgz12zc0zzsaw_defsz00(BgL_rtl_loadgz00_bglt, obj_t,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt
		BGl_fillzd2rtl_movz12zc0zzsaw_defsz00(BgL_rtl_movz00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_j4781ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_makezd2blockzd2zzsaw_defsz00(int,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt
		BGl_fillzd2rtl_loadiz12zc0zzsaw_defsz00(BgL_rtl_loadiz00_bglt, obj_t,
		BgL_atomz00_bglt);
	static obj_t BGl__rtl_isazf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_ifzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt BGl_rtl_gozd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_selectz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_lightfuncallzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_showzd2funzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt
		BGl_makezd2rtl_castzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vallocz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2rtl_callz80zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4625z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_makeboxz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt
		BGl_z52allocatezd2rtl_applyz80zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4629z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_switchzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_goz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4633z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4637z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4641z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_jumpexitzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4645z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_z52allocatezd2rtl_vlengthz80zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4649z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_z52allocatezd2rtl_storegz80zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4653z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4657z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4661z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_nopz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt
		BGl_makezd2rtl_failzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4665z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_rtl_notseqzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4669z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_applyzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_vlengthzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4673z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_failz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt BGl_makezd2rtl_gozd2zzsaw_defsz00(obj_t,
		BgL_blockz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4677z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_switchz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4681z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt BGl_makezd2rtl_ifzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4685z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4689z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4701z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_insz80zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4693z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt BGl_rtl_ifnezd2nilzd2zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4705z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4697z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4709z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_castz80zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4713z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_purezf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_fillzd2rtl_vlengthz12zc0zzsaw_defsz00(BgL_rtl_vlengthz00_bglt, obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4717z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4721z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2rtl_funzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4725z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_notseqzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4729z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_ifz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_funcallz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_isaz80zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4733z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_applyzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_z52allocatezd2rtl_boxrefz80zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4737z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rtlzd2dumpzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4742z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4746z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4750z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4754z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_failz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_storegzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt
		BGl_z52allocatezd2rtl_callz80zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4758z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_effectzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4762z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4766z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4771z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_funzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4775z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_callzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4779z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4783z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4788z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4800z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_defsz00();
	static obj_t BGl_structzb2objectzd2ze3objec4792z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_makeboxz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_ifeqzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4796z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_z52allocatezd2rtl_protectz80zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_callz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_effectz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_vsetzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_z52allocatezd2rtl_returnz80zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_blockzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt
		BGl_z52allocatezd2rtl_newz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt BGl_rtl_lastzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_protectedz12zc0zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_switchz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_setfieldz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt
		BGl_z52allocatezd2rtl_movz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt
		BGl_z52allocatezd2rtl_castz80zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_storegzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_z52allocatezd2rtl_boxsetz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_vsetzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_blockzd2nilzd2zzsaw_defsz00();
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_a4659ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__dumpzd2default4590zd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt
		BGl_fillzd2rtl_purez12zc0zzsaw_defsz00(BgL_rtl_purez00_bglt, obj_t);
	static obj_t BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt
		BGl_z52allocatezd2rtl_failz80zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_castz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt BGl_rtl_applyzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_storegz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifnezf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_protectedz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_f4651ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_setfieldzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_makezd2rtl_switchzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt
		BGl_z52allocatezd2rtl_nopz80zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_regz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_z52allocatezd2blockz80zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_failz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_fillzd2rtl_selectz12zc0zzsaw_defsz00(BgL_rtl_selectz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt
		BGl_fillzd2rtl_callz12zc0zzsaw_defsz00(BgL_rtl_callz00_bglt, obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl__fillzd2rtl_globalrefz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_funcallzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_lastzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_setfieldz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_vlengthz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_cast_nullzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_isazd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_p4631ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_dumpzd2rtl_reg4599zd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_p4635ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_vrefz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00();
	static obj_t BGl_dumpzd2funzd2rtl_loadi4605z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_p4647ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_makezd2rtl_protectzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_storegzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_callzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl__rtl_switchzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_rtl_valloczd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt
		BGl_fillzd2rtl_vsetz12zc0zzsaw_defsz00(BgL_rtl_vsetz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_objectzd2ze3structzd2rtl_f4777ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_fillzd2rtl_boxrefz12zc0zzsaw_defsz00(BgL_rtl_boxrefz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_fillzd2rtl_vallocz12zc0zzsaw_defsz00(BgL_rtl_vallocz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_z52allocatezd2rtl_loadfunz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt
		BGl_makezd2rtl_applyzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_newzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_f4794ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_ifzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_switchz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt BGl_rtl_castzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_applyz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt
		BGl_fillzd2rtl_ifnez12zc0zzsaw_defsz00(BgL_rtl_ifnez00_bglt, obj_t,
		BgL_blockz00_bglt);
	static obj_t BGl__makezd2rtl_gozd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_setfieldzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_notseqz80zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_ifzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtlzd2dumpzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_z52allocatezd2rtl_lightfuncallz80zzsaw_defsz00();
	static obj_t BGl_objectzd2ze3structzd2rtl_p4744ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_returnzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_newz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_makeboxzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_fillzd2rtl_setfieldz12zc0zzsaw_defsz00(BgL_rtl_setfieldz00_bglt, obj_t,
		obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl__z52allocatezd2rtl_movz80zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt
		BGl_makezd2rtl_lastzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_lastzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_movzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_effectzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_makezd2rtl_notseqzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt BGl_rtl_movzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_z52allocatezd2rtl_makeboxz80zzsaw_defsz00();
	static obj_t BGl__rtl_purezd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_returnzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_nopz80zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_cast_nullz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_regz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rtl_ifnezd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_z52allocatezd2rtl_regz80zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl__rtl_getfieldzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_lastz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_jumpexitz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadgzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_dumpzd2marginzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_nopz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_z52allocatezd2rtl_jumpexitz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt
		BGl_z52allocatezd2rtl_loadgz80zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadizf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt
		BGl_z52allocatezd2rtl_loadiz80zzsaw_defsz00();
	static obj_t BGl__rtl_storegzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_pragmaz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static obj_t BGl__fillzd2rtl_getfieldz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_fillzd2rtl_pragmaz12zc0zzsaw_defsz00(BgL_rtl_pragmaz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__rtl_vlengthzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_z52allocatezd2rtl_funcallz80zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt
		BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t, BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt
		BGl_z52allocatezd2rtl_goz80zzsaw_defsz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt
		BGl_z52allocatezd2rtl_ifz80zzsaw_defsz00();
	static obj_t BGl__rtl_loadizd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_ifeqz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt
		BGl_fillzd2rtl_lastz12zc0zzsaw_defsz00(BgL_rtl_lastz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_notseqz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_makezd2rtl_pragmazd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_protectzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__makezd2rtl_newzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt
		BGl_z52allocatezd2rtl_lastz80zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_movzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_purezf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_rtl_switchzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt BGl_rtl_vrefzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_vrefzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_funzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_fillzd2rtl_regz12zc0zzsaw_defsz00(BgL_rtl_regz00_bglt, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt
		BGl_makezd2rtl_ifnezd2zzsaw_defsz00(obj_t, BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_rtl_pragmazd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_ifeqz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_getfieldzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_isaz00_bglt BGl_rtl_isazd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt BGl_rtl_regzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadfunzf3zf3zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_b4671ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_fillzd2rtl_getfieldz12zc0zzsaw_defsz00(BgL_rtl_getfieldz00_bglt, obj_t,
		obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt
		BGl_fillzd2rtl_nopz12zc0zzsaw_defsz00(BgL_rtl_nopz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_lastz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_newzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_dumpzd2block4594zd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_effectz80zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_b4691ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t,
		obj_t);
	extern BgL_atomz00_bglt BGl_atomzd2nilzd2zzast_nodez00();
	static obj_t BGl__makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_callzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__makezd2rtl_nopzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_rtl_selectzd2nilzd2zzsaw_defsz00();
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_rtl_funcallzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t BGl__makezd2rtl_purezd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_ifnez80zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_l4655ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__makezd2blockzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_regz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_selectzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_pragmaz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt BGl_rtl_loadizd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_applyz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_fillzd2rtl_funcallz12zc0zzsaw_defsz00(BgL_rtl_funcallz00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_g4715ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__makezd2rtl_vsetzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_gozd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_dumpzd2funzd2rtl_fun4603z00zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_g4719ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_makezd2rtl_funcallzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_movzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_makezd2rtl_effectzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__rtl_vsetzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__blockzd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_g4748ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt
		BGl_z52allocatezd2rtl_ifeqz80zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_selectz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt
		BGl_makezd2rtl_vrefzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2rtl_l4723ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_l4727ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_l4731ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_applyzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_z52allocatezd2rtl_selectz80zzsaw_defsz00();
	static obj_t BGl__rtl_ifnezf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_castzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_z52allocatezd2rtl_vallocz80zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_boxrefzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifeqz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_valloczf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_movzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_rtl_effectzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2rtl_v4675ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__makezd2rtl_protectzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_fillzd2blockz12zc0zzsaw_defsz00(BgL_blockz00_bglt, int, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_v4703ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_protectzf3zf3zzsaw_defsz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt
		BGl_z52allocatezd2rtl_ifnez80zzsaw_defsz00();
	static obj_t BGl_objectzd2ze3structzd2rtl_v4707ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_l4790ze3zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_objectzd2ze3structzd2rtl_v4711ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2rtl_vrefz80zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__fillzd2rtl_boxrefz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_vallocz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt
		BGl_makezd2rtl_purezd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_protectedzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_effectz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_makeboxzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2rtl_protectedzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt
		BGl_makezd2rtl_vsetzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_dumpza2za2zzsaw_defsz00(obj_t, obj_t, long);
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifnez00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__rtl_notseqzd2nilzd2zzsaw_defsz00(obj_t);
	extern obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl__rtl_ifeqzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt
		BGl_makezd2rtl_loadgzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt
		BGl_makezd2rtl_loadizd2zzsaw_defsz00(obj_t, BgL_atomz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadgz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadiz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_dumpzd2funzd2rtl_mov4607z00zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__fillzd2rtl_insz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rtl_regzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__z52allocatezd2rtl_purez80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt
		BGl_fillzd2rtl_castz12zc0zzsaw_defsz00(BgL_rtl_castz00_bglt, obj_t,
		BgL_typez00_bglt);
	static obj_t BGl__z52allocatezd2rtl_vsetz80zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_funcallz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_globalrefzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt
		BGl_z52allocatezd2rtl_vrefz80zzsaw_defsz00();
	static obj_t BGl__rtl_globalrefzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__rtl_isazd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_globalrefz80zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_regzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_makezd2rtl_protectedzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00();
	static obj_t BGl__rtl_ifnezd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__rtl_lastzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_pragmazf3zf3zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl__z52allocatezd2rtl_cast_nullz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vrefz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_pragmaz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_boxrefzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt BGl_rtl_nopzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt
		BGl_z52allocatezd2rtl_purez80zzsaw_defsz00();
	static obj_t BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_c4639ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_selectzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_c4643ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_purez12zc0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt
		BGl_z52allocatezd2rtl_vsetz80zzsaw_defsz00();
	static obj_t BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2rtl_applyz80zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2rtl_goz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_fillzd2rtl_insz12zc0zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2rtl_ifz80zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_c4663ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_getfieldzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_purez00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_fillzd2rtl_loadfunz12zc0zzsaw_defsz00(BgL_rtl_loadfunz00_bglt, obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_selectzd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2rtl_getfieldz80zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vsetz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl__makezd2rtl_valloczd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_lastzd2nilzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt BGl_rtl_failzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_fillzd2rtl_returnz12zc0zzsaw_defsz00(BgL_rtl_returnz00_bglt, obj_t,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_callz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_z52allocatezd2rtl_getfieldz80zzsaw_defsz00();
	static obj_t BGl__makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__rtl_boxrefzf3zf3zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_nopzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_z52allocatezd2rtl_globalrefz80zzsaw_defsz00();
	static obj_t BGl__rtl_valloczf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_storegz80zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2blockz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_z52allocatezd2rtl_cast_nullz80zzsaw_defsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_failzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl__fillzd2rtl_isaz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_z52allocatezd2rtl_switchz80zzsaw_defsz00();
	static obj_t BGl__rtl_valloczd2nilzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_m4695ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_loadgz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2rtl_vsetz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt
		BGl_fillzd2rtl_goz12zc0zzsaw_defsz00(BgL_rtl_goz00_bglt, obj_t,
		BgL_blockz00_bglt);
	static obj_t BGl_dumpzd2funzd2rtl_globalr4613z00zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rtl_funcallzf3zf3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__fillzd2rtl_loadiz12zc0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2rtl_applyzd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rtl_m4735ze3zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2rtl_boxrefz80zzsaw_defsz00(obj_t);
	static obj_t BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_makezd2rtl_storegzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static obj_t BGl_dumpzd2funzd2rtl_go4619z00zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t __cnst[45];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_protectzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6034z00,
		BGl__z52allocatezd2rtl_protectz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2blockzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2b6035z00,
		BGl__z52allocatezd2blockz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2basiczd2blockszd2envzd2zzsaw_defsz00,
		BgL_bgl__dumpza7d2basicza7d26036z00,
		BGl__dumpzd2basiczd2blocksz00zzsaw_defsz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_goza7d2nilza7d26037z00, BGl__rtl_gozd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_notseqz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_nots6038za7,
		BGl__fillzd2rtl_notseqz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_funcallzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_func6039za7, BGl__makezd2rtl_funcallzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_gozd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_goza7d6040z00, BGl__makezd2rtl_gozd2zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_setfieldza7f36041za7, BGl__rtl_setfieldzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_vrefzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6042z00,
		BGl__z52allocatezd2rtl_vrefz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_jumpexitz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_jump6043za7,
		BGl__fillzd2rtl_jumpexitz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_ifeqza7f3za7f3za76044za7, BGl__rtl_ifeqzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_newza7d2nilza7d6045z00, BGl__rtl_newzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_lightfuncallzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6046z00,
		BGl__z52allocatezd2rtl_lightfuncallz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_valloczd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6047z00,
		BGl__z52allocatezd2rtl_vallocz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_returnzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_retu6048za7, BGl__makezd2rtl_returnzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_cast_nullz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_cast6049za7,
		BGl__fillzd2rtl_cast_nullz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_applyzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6050z00,
		BGl__z52allocatezd2rtl_applyz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_nopzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_nopza76051z00, BGl__makezd2rtl_nopzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_boxrefza7f3za7f6052z00, BGl__rtl_boxrefzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_isaz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_isaza76053z00, BGl__fillzd2rtl_isaz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_protectza7d2n6054za7, BGl__rtl_protectzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_regz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_regza76055z00, BGl__fillzd2rtl_regz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__blockza7f3za7f3za7za7sa6056z00, BGl__blockzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_newzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6057z00,
		BGl__z52allocatezd2rtl_newz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vsetzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_vset6058za7, BGl__makezd2rtl_vsetzd2zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_pragmaza7d2ni6059za7, BGl__rtl_pragmazd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_protectedzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6060z00,
		BGl__z52allocatezd2rtl_protectedz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_vlengthza7d2n6061za7, BGl__rtl_vlengthzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_makeboxzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6062z00,
		BGl__z52allocatezd2rtl_makeboxz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_isazd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_isaza7d2nilza7d6063z00, BGl__rtl_isazd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_protectz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_prot6064za7,
		BGl__fillzd2rtl_protectz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vlengthzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_vlen6065za7, BGl__makezd2rtl_vlengthzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_storegza7f3za7f6066z00, BGl__rtl_storegzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_dumpzd2envzd2zzsaw_defsz00,
		BgL_bgl__dumpza700za7za7saw_de6067za7, BGl__dumpz00zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funcallzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_funcallza7d2n6068za7, BGl__rtl_funcallzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_goza7f3za7f3za7za7s6069z00, BGl__rtl_gozf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxsetzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_boxsetza7f3za7f6070z00, BGl__rtl_boxsetzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_newzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_newza76071z00, BGl__makezd2rtl_newzd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_makeboxzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_makeboxza7d2n6072za7, BGl__rtl_makeboxzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_vlengthza7f3za76073z00, BGl__rtl_vlengthzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_ifza7d2nilza7d26074z00, BGl__rtl_ifzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__blockza7d2nilza7d2za76075za7, BGl__blockzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2blockzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2blockza7d26076z00, BGl__makezd2blockzd2zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_protectedz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_prot6077za7,
		BGl__fillzd2rtl_protectedz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_callzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_call6078za7, BGl__makezd2rtl_callzd2zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_switchzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6079z00,
		BGl__z52allocatezd2rtl_switchz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_jumpexitzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_jumpexitza7f36080za7, BGl__rtl_jumpexitzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_selectza7f3za7f6081z00, BGl__rtl_selectzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_getfieldzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6082z00,
		BGl__z52allocatezd2rtl_getfieldz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_pragmazd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6083z00,
		BGl__z52allocatezd2rtl_pragmaz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_lightfuncallz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_ligh6084za7,
		BGl__fillzd2rtl_lightfuncallz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_makeboxz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_make6085za7,
		BGl__fillzd2rtl_makeboxz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_callza7d2nilza76086z00, BGl__rtl_callzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_applyzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_applyza7f3za7f36087z00, BGl__rtl_applyzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_movzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_movza7f3za7f3za7za76088z00, BGl__rtl_movzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_selectzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6089z00,
		BGl__z52allocatezd2rtl_selectz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_jumpexitzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_jump6090za7, BGl__makezd2rtl_jumpexitzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_purez12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_pure6091za7, BGl__fillzd2rtl_purez12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funcallzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_funcallza7f3za76092z00, BGl__rtl_funcallzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_purezd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_pure6093za7, BGl__makezd2rtl_purezd2zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_switchza7d2ni6094za7, BGl__rtl_switchzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_failzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6095z00,
		BGl__z52allocatezd2rtl_failz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_effectzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6096z00,
		BGl__z52allocatezd2rtl_effectz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_notseqzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_nots6097za7, BGl__makezd2rtl_notseqzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_loadfunz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_load6098za7,
		BGl__fillzd2rtl_loadfunz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_ifzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6099z00,
		BGl__z52allocatezd2rtl_ifz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_applyz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_appl6100za7, BGl__fillzd2rtl_applyz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_loadiza7f3za7f36101z00, BGl__rtl_loadizf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_loadizd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6102z00,
		BGl__z52allocatezd2rtl_loadiz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_effectz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_effe6103za7,
		BGl__fillzd2rtl_effectz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_inszd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6104z00,
		BGl__z52allocatezd2rtl_insz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_movzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_movza7d2nilza7d6105z00, BGl__rtl_movzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_nopzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_nopza7d2nilza7d6106z00, BGl__rtl_nopzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_vallocz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_vall6107za7,
		BGl__fillzd2rtl_vallocz12zc0zzsaw_defsz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_purezf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_pureza7f3za7f3za76108za7, BGl__rtl_purezf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_regza7d2nilza7d6109z00, BGl__rtl_regzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_boxsetzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6110z00,
		BGl__z52allocatezd2rtl_boxsetz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_movz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_movza76111z00, BGl__fillzd2rtl_movz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_setfieldzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6112z00,
		BGl__z52allocatezd2rtl_setfieldz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_returnza7f3za7f6113z00, BGl__rtl_returnzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_cast_nullzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_cast6114za7,
		BGl__makezd2rtl_cast_nullzd2zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_ifz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_ifza716115z00, BGl__fillzd2rtl_ifz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_loadfunzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6116z00,
		BGl__z52allocatezd2rtl_loadfunz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_boxrefzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_boxr6117za7, BGl__makezd2rtl_boxrefzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_boxrefza7d2ni6118za7, BGl__rtl_boxrefzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadgzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_load6119za7, BGl__makezd2rtl_loadgzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_vsetzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6120z00,
		BGl__z52allocatezd2rtl_vsetz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_inszd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_insza76121z00, BGl__makezd2rtl_inszd2zzsaw_defsz00,
		0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_loadiz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_load6122za7, BGl__fillzd2rtl_loadiz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_notseqzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_notseqza7f3za7f6123z00, BGl__rtl_notseqzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_protectzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_prot6124za7, BGl__makezd2rtl_protectzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_globalrefza7f6125za7, BGl__rtl_globalrefzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_lightfuncallzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_ligh6126za7,
		BGl__makezd2rtl_lightfuncallzd2zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inszd2argsza2zd2envza2zzsaw_defsz00,
		BgL_bgl__insza7d2argsza7a2za776127za7, BGl__inszd2argsza2z70zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_ifnez12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_ifne6128za7, BGl__fillzd2rtl_ifnez12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lightfuncallzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_lightfuncal6129z00, BGl__rtl_lightfuncallzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtlzd2dumpzd2envz00zzsaw_defsz00,
		BgL_bgl__rtlza7d2dumpza7d2za7za76130z00, BGl__rtlzd2dumpzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_valloczd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_vall6131za7, BGl__makezd2rtl_valloczd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifeqzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_ifeq6132za7, BGl__makezd2rtl_ifeqzd2zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_vrefza7d2nilza76133z00, BGl__rtl_vrefzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_gozd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6134z00,
		BGl__z52allocatezd2rtl_goz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_callzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6135z00,
		BGl__z52allocatezd2rtl_callz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_funza7f3za7f3za7za76136z00, BGl__rtl_funzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_insza7f3za7f3za7za76137z00, BGl__rtl_inszf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_ifneza7d2nilza76138z00, BGl__rtl_ifnezd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_ifneza7f3za7f3za76139za7, BGl__rtl_ifnezf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifnezd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_ifne6140za7, BGl__makezd2rtl_ifnezd2zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_dumpzd2default4590zd2envz00zzsaw_defsz00,
		BgL_bgl__dumpza7d2default46141za7, BGl__dumpzd2default4590zd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxsetzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_boxsetza7d2ni6142za7, BGl__rtl_boxsetzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_selectza7d2ni6143za7, BGl__rtl_selectzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_makeboxzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_make6144za7, BGl__makezd2rtl_makeboxzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_switchz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_swit6145za7,
		BGl__fillzd2rtl_switchz12zc0zzsaw_defsz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_getfieldza7d26146za7, BGl__rtl_getfieldzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_storegza7d2ni6147za7, BGl__rtl_storegzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_purezd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6148z00,
		BGl__z52allocatezd2rtl_purez80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_cast_nullza7f6149za7, BGl__rtl_cast_nullzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_cast_nullzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6150z00,
		BGl__z52allocatezd2rtl_cast_nullz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_storegzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6151z00,
		BGl__z52allocatezd2rtl_storegz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_lastzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_last6152za7, BGl__makezd2rtl_lastzd2zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_applyzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_appl6153za7, BGl__makezd2rtl_applyzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_newza7f3za7f3za7za76154z00, BGl__rtl_newzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_switchzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_swit6155za7, BGl__makezd2rtl_switchzd2zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_getfieldz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_getf6156za7,
		BGl__fillzd2rtl_getfieldz12zc0zzsaw_defsz00, 0L, BUNSPEC, 5);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_protectza7f3za76157z00, BGl__rtl_protectzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_pragmazd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_prag6158za7, BGl__makezd2rtl_pragmazd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_pragmaz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_prag6159za7,
		BGl__fillzd2rtl_pragmaz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
		BgL_bgl__dumpza7d2funza7d2za7za76160z00, BGl__dumpzd2funzd2zzsaw_defsz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_funz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_funza76161z00, BGl__fillzd2rtl_funz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_castza7d2nilza76162z00, BGl__rtl_castzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_loadiza7d2nil6163za7, BGl__rtl_loadizd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_vsetza7d2nilza76164z00, BGl__rtl_vsetzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_selectzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_sele6165za7, BGl__makezd2rtl_selectzd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_setfieldza7d26166za7, BGl__rtl_setfieldzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_notseqzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_notseqza7d2ni6167za7, BGl__rtl_notseqzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_insz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_insza76168z00, BGl__fillzd2rtl_insz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_funcallzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6169z00,
		BGl__z52allocatezd2rtl_funcallz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_loadgza7f3za7f36170z00, BGl__rtl_loadgzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_funzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6171z00,
		BGl__z52allocatezd2rtl_funz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_callz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_call6172za7, BGl__fillzd2rtl_callz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_insza7d2nilza7d6173z00, BGl__rtl_inszd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_castzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_cast6174za7, BGl__makezd2rtl_castzd2zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_makeboxzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_makeboxza7f3za76175z00, BGl__rtl_makeboxzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_ifza7f3za7f3za7za7s6176z00, BGl__rtl_ifzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_effectzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_effe6177za7, BGl__makezd2rtl_effectzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_nopzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_nopza7f3za7f3za7za76178z00, BGl__rtl_nopzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_globalrefzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_glob6179za7,
		BGl__makezd2rtl_globalrefzd2zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectedzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_protectedza7f6180za7, BGl__rtl_protectedzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_vallocza7d2ni6181za7, BGl__rtl_valloczd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_effectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_effectza7f3za7f6182z00, BGl__rtl_effectzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_newz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_newza76183z00, BGl__fillzd2rtl_newz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5825z00zzsaw_defsz00,
		BgL_bgl_shapeza7d2rtl_reg46184za7, BGl_shapezd2rtl_reg4589zd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5827z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2block45946185za7, BGl_dumpzd2block4594zd2zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5828z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2rtl_ins456186za7, BGl_dumpzd2rtl_ins4597zd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5830z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6187z00,
		BGl_dumpzd2funzd2rtl_fun4603z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5829z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2rtl_reg456188za7, BGl_dumpzd2rtl_reg4599zd2zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5831z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6189z00,
		BGl_dumpzd2funzd2rtl_loadi4605z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5832z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6190z00,
		BGl_dumpzd2funzd2rtl_mov4607z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5833z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6191z00,
		BGl_dumpzd2funzd2rtl_loadg4609z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5834z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6192z00,
		BGl_dumpzd2funzd2rtl_loadfun4611z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5835z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6193z00,
		BGl_dumpzd2funzd2rtl_globalr4613z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5836z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6194z00,
		BGl_dumpzd2funzd2rtl_ifeq4615z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5837z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6195z00,
		BGl_dumpzd2funzd2rtl_ifne4617z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5838z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6196z00,
		BGl_dumpzd2funzd2rtl_go4619z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5840z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6197z00,
		BGl_objectzd2ze3structzd2block4623ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5839z00zzsaw_defsz00,
		BgL_bgl_dumpza7d2funza7d2rtl6198z00,
		BGl_dumpzd2funzd2rtl_call4621z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_returnzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6199z00,
		BGl__z52allocatezd2rtl_returnz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5842z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76200z00,
		BGl_structzb2objectzd2ze3objec4625z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_vallocza7f3za7f6201z00, BGl__rtl_valloczf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5844z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6202z00,
		BGl_objectzd2ze3structzd2rtl_i4627ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5845z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76203z00,
		BGl_structzb2objectzd2ze3objec4629z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5846z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6204z00,
		BGl_objectzd2ze3structzd2rtl_p4631ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5847z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76205z00,
		BGl_structzb2objectzd2ze3objec4633z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5848z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6206z00,
		BGl_objectzd2ze3structzd2rtl_p4635ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5850z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6207z00,
		BGl_objectzd2ze3structzd2rtl_c4639ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5849z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76208z00,
		BGl_structzb2objectzd2ze3objec4637z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5851z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76209z00,
		BGl_structzb2objectzd2ze3objec4641z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5852z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6210z00,
		BGl_objectzd2ze3structzd2rtl_c4643ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_loadfunza7d2n6211za7, BGl__rtl_loadfunzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5853z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76212z00,
		BGl_structzb2objectzd2ze3objec4645z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5854z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6213z00,
		BGl_objectzd2ze3structzd2rtl_p4647ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5855z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76214z00,
		BGl_structzb2objectzd2ze3objec4649z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5856z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6215z00,
		BGl_objectzd2ze3structzd2rtl_f4651ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_jumpexitzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6216z00,
		BGl__z52allocatezd2rtl_jumpexitz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5857z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76217z00,
		BGl_structzb2objectzd2ze3objec4653z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5858z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6218z00,
		BGl_objectzd2ze3structzd2rtl_l4655ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5860z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6219z00,
		BGl_objectzd2ze3structzd2rtl_a4659ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5859z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76220z00,
		BGl_structzb2objectzd2ze3objec4657z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5861z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76221z00,
		BGl_structzb2objectzd2ze3objec4661z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5862z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6222z00,
		BGl_objectzd2ze3structzd2rtl_c4663ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5863z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76223z00,
		BGl_structzb2objectzd2ze3objec4665z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5864z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6224z00,
		BGl_objectzd2ze3structzd2rtl_n4667ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5865z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76225z00,
		BGl_structzb2objectzd2ze3objec4669z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5866z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6226z00,
		BGl_objectzd2ze3structzd2rtl_b4671ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5867z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76227z00,
		BGl_structzb2objectzd2ze3objec4673z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5868z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6228z00,
		BGl_objectzd2ze3structzd2rtl_v4675ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5870z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6229z00,
		BGl_objectzd2ze3structzd2rtl_s4679ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5869z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76230z00,
		BGl_structzb2objectzd2ze3objec4677z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5871z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76231z00,
		BGl_structzb2objectzd2ze3objec4681z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5872z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6232z00,
		BGl_objectzd2ze3structzd2rtl_s4683ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5873z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76233z00,
		BGl_structzb2objectzd2ze3objec4685z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5874z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6234z00,
		BGl_objectzd2ze3structzd2rtl_e4687ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5875z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76235z00,
		BGl_structzb2objectzd2ze3objec4689z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5876z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6236z00,
		BGl_objectzd2ze3structzd2rtl_b4691ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5877z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76237z00,
		BGl_structzb2objectzd2ze3objec4693z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5878z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6238z00,
		BGl_objectzd2ze3structzd2rtl_m4695ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5880z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6239z00,
		BGl_objectzd2ze3structzd2rtl_i4699ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5879z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76240z00,
		BGl_structzb2objectzd2ze3objec4697z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5881z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76241z00,
		BGl_structzb2objectzd2ze3objec4701z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5882z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6242z00,
		BGl_objectzd2ze3structzd2rtl_v4703ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lastzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_lastza7d2nilza76243z00, BGl__rtl_lastzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5883z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76244z00,
		BGl_structzb2objectzd2ze3objec4705z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_effectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_effectza7d2ni6245za7, BGl__rtl_effectzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5884z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6246z00,
		BGl_objectzd2ze3structzd2rtl_v4707ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5885z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76247z00,
		BGl_structzb2objectzd2ze3objec4709z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5886z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6248z00,
		BGl_objectzd2ze3structzd2rtl_v4711ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5887z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76249z00,
		BGl_structzb2objectzd2ze3objec4713z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5888z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6250z00,
		BGl_objectzd2ze3structzd2rtl_g4715ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5900z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6251z00,
		BGl_objectzd2ze3structzd2rtl_n4739ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5890z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6252z00,
		BGl_objectzd2ze3structzd2rtl_g4719ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5889z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76253z00,
		BGl_structzb2objectzd2ze3objec4717z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_boxrefz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_boxr6254za7,
		BGl__fillzd2rtl_boxrefz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5901z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76255z00,
		BGl_structzb2objectzd2ze3objec4742z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5891z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76256z00,
		BGl_structzb2objectzd2ze3objec4721z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5902z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6257z00,
		BGl_objectzd2ze3structzd2rtl_p4744ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5892z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6258z00,
		BGl_objectzd2ze3structzd2rtl_l4723ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5903z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76259z00,
		BGl_structzb2objectzd2ze3objec4746z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5893z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76260z00,
		BGl_structzb2objectzd2ze3objec4725z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5904z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6261z00,
		BGl_objectzd2ze3structzd2rtl_g4748ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5894z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6262z00,
		BGl_objectzd2ze3structzd2rtl_l4727ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5905z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76263z00,
		BGl_structzb2objectzd2ze3objec4750z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5895z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76264z00,
		BGl_structzb2objectzd2ze3objec4729z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_boxsetzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_boxs6265za7, BGl__makezd2rtl_boxsetzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5906z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6266z00,
		BGl_objectzd2ze3structzd2rtl_i4752ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5896z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6267z00,
		BGl_objectzd2ze3structzd2rtl_l4731ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5907z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76268z00,
		BGl_structzb2objectzd2ze3objec4754z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5897z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76269z00,
		BGl_structzb2objectzd2ze3objec4733z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5908z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6270z00,
		BGl_objectzd2ze3structzd2rtl_i4756ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5898z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6271z00,
		BGl_objectzd2ze3structzd2rtl_m4735ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5910z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6272z00,
		BGl_objectzd2ze3structzd2rtl_s4760ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5909z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76273z00,
		BGl_structzb2objectzd2ze3objec4758z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5899z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76274z00,
		BGl_structzb2objectzd2ze3objec4737z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5911z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76275z00,
		BGl_structzb2objectzd2ze3objec4762z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5912z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6276z00,
		BGl_objectzd2ze3structzd2rtl_s4764ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5913z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76277z00,
		BGl_structzb2objectzd2ze3objec4766z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5914z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6278z00,
		BGl_objectzd2ze3structzd2rtl_i4768ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5915z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76279z00,
		BGl_structzb2objectzd2ze3objec4771z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5916z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6280z00,
		BGl_objectzd2ze3structzd2rtl_n4773ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5917z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76281z00,
		BGl_structzb2objectzd2ze3objec4775z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5918z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6282z00,
		BGl_objectzd2ze3structzd2rtl_f4777ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5920z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6283z00,
		BGl_objectzd2ze3structzd2rtl_j4781ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5919z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76284z00,
		BGl_structzb2objectzd2ze3objec4779z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5921z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76285z00,
		BGl_structzb2objectzd2ze3objec4783z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5922z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6286z00,
		BGl_objectzd2ze3structzd2rtl_r4785ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5923z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76287z00,
		BGl_structzb2objectzd2ze3objec4788z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5924z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6288z00,
		BGl_objectzd2ze3structzd2rtl_l4790ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5925z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76289z00,
		BGl_structzb2objectzd2ze3objec4792z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5926z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6290z00,
		BGl_objectzd2ze3structzd2rtl_f4794ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_getfieldza7f36291za7, BGl__rtl_getfieldzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5927z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76292z00,
		BGl_structzb2objectzd2ze3objec4796z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_funzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_funza76293z00, BGl__makezd2rtl_funzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5928z00zzsaw_defsz00,
		BgL_bgl_objectza7d2za7e3stru6294z00,
		BGl_objectzd2ze3structzd2rtl_r4798ze3zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5929z00zzsaw_defsz00,
		BgL_bgl_structza7b2objectza76295z00,
		BGl_structzb2objectzd2ze3objec4800z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_returnza7d2ni6296za7, BGl__rtl_returnzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_movzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6297z00,
		BGl__z52allocatezd2rtl_movz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_loadgz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_load6298za7, BGl__fillzd2rtl_loadgz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_callza7f3za7f3za76299za7, BGl__rtl_callzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_ifeqzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6300z00,
		BGl__z52allocatezd2rtl_ifeqz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_getfieldzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_getf6301za7, BGl__makezd2rtl_getfieldzd2zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_vlengthz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_vlen6302za7,
		BGl__fillzd2rtl_vlengthz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_cast_nullza7d6303za7, BGl__rtl_cast_nullzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_vlengthzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6304z00,
		BGl__z52allocatezd2rtl_vlengthz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_loadfunza7f3za76305z00, BGl__rtl_loadfunzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2blockz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2blockza7126306z00, BGl__fillzd2blockz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string5816z00zzsaw_defsz00,
		BgL_bgl_string5816za700za7za7s6307za7, "+-- ", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadfunzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_load6308za7, BGl__makezd2rtl_loadfunzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5817z00zzsaw_defsz00,
		BgL_bgl_string5817za700za7za7s6309za7, " ", 1);
	      DEFINE_STRING(BGl_string5818z00zzsaw_defsz00,
		BgL_bgl_string5818za700za7za7s6310za7, "| args:", 7);
	      DEFINE_STRING(BGl_string5820z00zzsaw_defsz00,
		BgL_bgl_string5820za700za7za7s6311za7, "(", 1);
	      DEFINE_STRING(BGl_string5819z00zzsaw_defsz00,
		BgL_bgl_string5819za700za7za7s6312za7, "| Basic blocks: ", 16);
	      DEFINE_STRING(BGl_string5821z00zzsaw_defsz00,
		BgL_bgl_string5821za700za7za7s6313za7, ")", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_castz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_cast6314za7, BGl__fillzd2rtl_castz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string5822z00zzsaw_defsz00,
		BgL_bgl_string5822za700za7za7s6315za7, "", 0);
	      DEFINE_STRING(BGl_string5823z00zzsaw_defsz00,
		BgL_bgl_string5823za700za7za7s6316za7, "dump", 4);
	      DEFINE_STRING(BGl_string5824z00zzsaw_defsz00,
		BgL_bgl_string5824za700za7za7s6317za7, "dump-fun", 8);
	      DEFINE_STRING(BGl_string5826z00zzsaw_defsz00,
		BgL_bgl_string5826za700za7za7s6318za7, "shape", 5);
	      DEFINE_STRING(BGl_string5841z00zzsaw_defsz00,
		BgL_bgl_string5841za700za7za7s6319za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5843z00zzsaw_defsz00,
		BgL_bgl_string5843za700za7za7s6320za7, "struct+object->object::object", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_storegz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_stor6321za7,
		BGl__fillzd2rtl_storegz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vrefzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_vref6322za7, BGl__makezd2rtl_vrefzd2zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_failzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_failza7d2nilza76323z00, BGl__rtl_failzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_nopz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_nopza76324z00, BGl__fillzd2rtl_nopz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_ifnezd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6325z00,
		BGl__z52allocatezd2rtl_ifnez80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_loadgza7d2nil6326za7, BGl__rtl_loadgzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadizd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_load6327za7, BGl__makezd2rtl_loadizd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5930z00zzsaw_defsz00,
		BgL_bgl_string5930za700za7za7s6328za7, " [", 2);
	      DEFINE_STRING(BGl_string5931z00zzsaw_defsz00,
		BgL_bgl_string5931za700za7za7s6329za7, "]", 1);
	      DEFINE_STRING(BGl_string5932z00zzsaw_defsz00,
		BgL_bgl_string5932za700za7za7s6330za7, "::", 2);
	      DEFINE_STRING(BGl_string5933z00zzsaw_defsz00,
		BgL_bgl_string5933za700za7za7s6331za7, " <- ", 4);
	      DEFINE_STRING(BGl_string5934z00zzsaw_defsz00,
		BgL_bgl_string5934za700za7za7s6332za7, " {", 2);
	      DEFINE_STRING(BGl_string5935z00zzsaw_defsz00,
		BgL_bgl_string5935za700za7za7s6333za7, "}", 1);
	      DEFINE_STRING(BGl_string5936z00zzsaw_defsz00,
		BgL_bgl_string5936za700za7za7s6334za7, "(block ", 7);
	      DEFINE_STRING(BGl_string5937z00zzsaw_defsz00,
		BgL_bgl_string5937za700za7za7s6335za7, "*", 1);
	      DEFINE_STRING(BGl_string5938z00zzsaw_defsz00,
		BgL_bgl_string5938za700za7za7s6336za7, "%", 1);
	      DEFINE_STRING(BGl_string5940z00zzsaw_defsz00,
		BgL_bgl_string5940za700za7za7s6337za7, "$", 1);
	      DEFINE_STRING(BGl_string5939z00zzsaw_defsz00,
		BgL_bgl_string5939za700za7za7s6338za7, "!", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_boxsetz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_boxs6339za7,
		BGl__fillzd2rtl_boxsetz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5941z00zzsaw_defsz00,
		BgL_bgl_string5941za700za7za7s6340za7, "@", 1);
	      DEFINE_STRING(BGl_string5942z00zzsaw_defsz00,
		BgL_bgl_string5942za700za7za7s6341za7, "saw_defs", 8);
	      DEFINE_STRING(BGl_string5943z00zzsaw_defsz00,
		BgL_bgl_string5943za700za7za7s6342za7,
		"block rtl_ins rtl_protected rtl_protect rtl_cast_null rtl_cast rtl_pragma rtl_funcall rtl_lightfuncall rtl_apply rtl_call rtl_new rtl_boxset rtl_vset rtl_setfield rtl_storeg rtl_effect rtl_boxref rtl_makebox rtl_isa rtl_vlength rtl_vref rtl_valloc rtl_getfield rtl_globalref rtl_loadfun rtl_loadg rtl_loadi rtl_mov rtl_nop rtl_pure rtl_go rtl_ifne rtl_ifeq rtl_switch rtl_select rtl_if rtl_notseq rtl_fail rtl_jumpexit rtl_return rtl_last rtl_fun rtl_reg #(\"\" \" \" \"  \" \"   \" \"    \" \"     \" \"      \" \"       \") ",
		510);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_jumpexitzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_jumpexitza7d26343za7, BGl__rtl_jumpexitzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_movzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_movza76344z00, BGl__makezd2rtl_movzd2zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_vrefz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_vref6345za7, BGl__fillzd2rtl_vrefz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_funcallz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_func6346za7,
		BGl__fillzd2rtl_funcallz12zc0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_isazd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6347z00,
		BGl__z52allocatezd2rtl_isaz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_regzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6348z00,
		BGl__z52allocatezd2rtl_regz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_selectz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_sele6349za7,
		BGl__fillzd2rtl_selectz12zc0zzsaw_defsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_lastzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6350z00,
		BGl__z52allocatezd2rtl_lastz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_castza7f3za7f3za76351za7, BGl__rtl_castzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dumpzd2funzd2default4600zd2envzd2zzsaw_defsz00,
		BgL_bgl__dumpza7d2funza7d2de6352z00,
		BGl__dumpzd2funzd2default4600z00zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_goz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_goza716353z00, BGl__fillzd2rtl_goz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_globalrefzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6354z00,
		BGl__z52allocatezd2rtl_globalrefz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_ifza7d6355z00, BGl__makezd2rtl_ifzd2zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_setfieldzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_setf6356za7, BGl__makezd2rtl_setfieldzd2zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_globalrefza7d6357za7, BGl__rtl_globalrefzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_failz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_fail6358za7, BGl__fillzd2rtl_failz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_applyzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_applyza7d2nil6359za7, BGl__rtl_applyzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_isazd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_isaza76360z00, BGl__makezd2rtl_isazd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_regzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_regza76361z00, BGl__makezd2rtl_regzd2zzsaw_defsz00,
		0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_switchza7f3za7f6362z00, BGl__rtl_switchzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_setfieldz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_setf6363za7,
		BGl__fillzd2rtl_setfieldz12zc0zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_vrefza7f3za7f3za76364za7, BGl__rtl_vrefzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_vsetz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_vset6365za7, BGl__fillzd2rtl_vsetz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_loadgzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6366z00,
		BGl__z52allocatezd2rtl_loadgz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_funza7d2nilza7d6367z00, BGl__rtl_funzd2nilzd2zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_purezd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_pureza7d2nilza76368z00, BGl__rtl_purezd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_lastz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_last6369za7, BGl__fillzd2rtl_lastz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_protectedzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_prot6370za7,
		BGl__makezd2rtl_protectedzd2zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_lightfuncal6371z00,
		BGl__rtl_lightfuncallzd2nilzd2zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_notseqzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6372z00,
		BGl__z52allocatezd2rtl_notseqz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_globalrefz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_glob6373za7,
		BGl__fillzd2rtl_globalrefz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_castzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6374z00,
		BGl__z52allocatezd2rtl_castz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_ifeqza7d2nilza76375z00, BGl__rtl_ifeqzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_storegzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_stor6376za7, BGl__makezd2rtl_storegzd2zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectedzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl__rtl_protectedza7d6377za7, BGl__rtl_protectedzd2nilzd2zzsaw_defsz00,
		0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_pragmaza7f3za7f6378z00, BGl__rtl_pragmazf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_ifeqz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_ifeq6379za7, BGl__fillzd2rtl_ifeqz12zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_failzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_failza7f3za7f3za76380za7, BGl__rtl_failzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_isazf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_isaza7f3za7f3za7za76381z00, BGl__rtl_isazf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2rtl_returnz12zd2envz12zzsaw_defsz00,
		BgL_bgl__fillza7d2rtl_retu6382za7,
		BGl__fillzd2rtl_returnz12zc0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_regza7f3za7f3za7za76383z00, BGl__rtl_regzf3zf3zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_vsetza7f3za7f3za76384za7, BGl__rtl_vsetzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_boxrefzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6385z00,
		BGl__z52allocatezd2rtl_boxrefz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2rtl_nopzd2envz52zzsaw_defsz00,
		BgL_bgl__za752allocateza7d2r6386z00,
		BGl__z52allocatezd2rtl_nopz80zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_failzd2envz00zzsaw_defsz00,
		BgL_bgl__makeza7d2rtl_fail6387za7, BGl__makezd2rtl_failzd2zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lastzf3zd2envz21zzsaw_defsz00,
		BgL_bgl__rtl_lastza7f3za7f3za76388za7, BGl__rtl_lastzf3zf3zzsaw_defsz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long
		BgL_checksumz00_7486, char *BgL_fromz00_7487)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_defsz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_defsz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_defsz00();
					BGl_cnstzd2initzd2zzsaw_defsz00();
					BGl_importedzd2moduleszd2initz00zzsaw_defsz00();
					BGl_objectzd2initzd2zzsaw_defsz00();
					BGl_genericzd2initzd2zzsaw_defsz00();
					BGl_methodzd2initzd2zzsaw_defsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_defs");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_defs");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			{	/* SawMill/defs.scm 1 */
				obj_t BgL_cportz00_6851;

				BgL_cportz00_6851 =
					bgl_open_input_string(BGl_string5943z00zzsaw_defsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_6852;

					BgL_iz00_6852 = ((long) 44);
				BgL_loopz00_6853:
					if ((BgL_iz00_6852 == ((long) -1)))
						{	/* SawMill/defs.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/defs.scm 1 */
							{	/* SawMill/defs.scm 1 */
								obj_t BgL_arg5945z00_6855;

								{	/* SawMill/defs.scm 1 */

									{	/* SawMill/defs.scm 1 */
										obj_t BgL_locationz00_6857;

										BgL_locationz00_6857 = BBOOL(((bool_t) 0));
										{	/* SawMill/defs.scm 1 */

											BgL_arg5945z00_6855 =
												BGl_readz00zz__readerz00(BgL_cportz00_6851,
												BgL_locationz00_6857);
										}
									}
								}
								{	/* SawMill/defs.scm 1 */
									int BgL_auxz00_7510;

									BgL_auxz00_7510 = (int) (BgL_iz00_6852);
									CNST_TABLE_SET(BgL_auxz00_7510, BgL_arg5945z00_6855);
							}}
							{	/* SawMill/defs.scm 1 */
								int BgL_auxz00_6858;

								BgL_auxz00_6858 = (int) ((BgL_iz00_6852 - ((long) 1)));
								{
									long BgL_iz00_7515;

									BgL_iz00_7515 = (long) (BgL_auxz00_6858);
									BgL_iz00_6852 = BgL_iz00_7515;
									goto BgL_loopz00_6853;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			return BUNSPEC;
		}
	}



/* ins-args* */
	BGL_EXPORTED_DEF obj_t BGl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_insz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 89 */
			{	/* SawMill/defs.scm 90 */
				obj_t BgL_g4511z00_1406;

				BgL_g4511z00_1406 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_1))->BgL_argsz00);
				{
					obj_t BgL_argsz00_1409;

					obj_t BgL_resz00_1410;

					BgL_argsz00_1409 = BgL_g4511z00_1406;
					BgL_resz00_1410 = BNIL;
				BgL_zc3anonymousza34801ze3z83_1411:
					if (NULLP(BgL_argsz00_1409))
						{	/* SawMill/defs.scm 93 */
							return BgL_resz00_1410;
						}
					else
						{	/* SawMill/defs.scm 95 */
							bool_t BgL_testz00_7520;

							{	/* SawMill/defs.scm 95 */
								obj_t BgL_arg4815z00_1424;

								BgL_arg4815z00_1424 = CAR(BgL_argsz00_1409);
								BgL_testz00_7520 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg4815z00_1424,
									BGl_rtl_regz00zzsaw_defsz00);
							}
							if (BgL_testz00_7520)
								{	/* SawMill/defs.scm 96 */
									obj_t BgL_arg4804z00_1414;

									obj_t BgL_arg4805z00_1415;

									BgL_arg4804z00_1414 = CDR(BgL_argsz00_1409);
									BgL_arg4805z00_1415 =
										MAKE_PAIR(CAR(BgL_argsz00_1409), BgL_resz00_1410);
									{
										obj_t BgL_resz00_7527;

										obj_t BgL_argsz00_7526;

										BgL_argsz00_7526 = BgL_arg4804z00_1414;
										BgL_resz00_7527 = BgL_arg4805z00_1415;
										BgL_resz00_1410 = BgL_resz00_7527;
										BgL_argsz00_1409 = BgL_argsz00_7526;
										goto BgL_zc3anonymousza34801ze3z83_1411;
									}
								}
							else
								{	/* SawMill/defs.scm 97 */
									bool_t BgL_testz00_7528;

									{	/* SawMill/defs.scm 97 */
										obj_t BgL_arg4814z00_1423;

										BgL_arg4814z00_1423 = CAR(BgL_argsz00_1409);
										BgL_testz00_7528 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg4814z00_1423,
											BGl_rtl_insz00zzsaw_defsz00);
									}
									if (BgL_testz00_7528)
										{	/* SawMill/defs.scm 98 */
											obj_t BgL_arg4808z00_1418;

											obj_t BgL_arg4810z00_1419;

											BgL_arg4808z00_1418 = CDR(BgL_argsz00_1409);
											{	/* SawMill/defs.scm 98 */
												obj_t BgL_arg4811z00_1420;

												{	/* SawMill/defs.scm 98 */
													obj_t BgL_arg4812z00_1421;

													BgL_arg4812z00_1421 = CAR(BgL_argsz00_1409);
													BgL_arg4811z00_1420 =
														BGl_inszd2argsza2z70zzsaw_defsz00(
														(BgL_rtl_insz00_bglt) (BgL_arg4812z00_1421));
												}
												BgL_arg4810z00_1419 =
													bgl_append2(BgL_arg4811z00_1420, BgL_resz00_1410);
											}
											{
												obj_t BgL_resz00_7537;

												obj_t BgL_argsz00_7536;

												BgL_argsz00_7536 = BgL_arg4808z00_1418;
												BgL_resz00_7537 = BgL_arg4810z00_1419;
												BgL_resz00_1410 = BgL_resz00_7537;
												BgL_argsz00_1409 = BgL_argsz00_7536;
												goto BgL_zc3anonymousza34801ze3z83_1411;
											}
										}
									else
										{
											obj_t BgL_argsz00_7538;

											BgL_argsz00_7538 = CDR(BgL_argsz00_1409);
											BgL_argsz00_1409 = BgL_argsz00_7538;
											goto BgL_zc3anonymousza34801ze3z83_1411;
										}
								}
						}
				}
			}
		}
	}



/* _ins-args* */
	obj_t BGl__inszd2argsza2z70zzsaw_defsz00(obj_t BgL_envz00_5930,
		obj_t BgL_insz00_5931)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 89 */
			return
				BGl_inszd2argsza2z70zzsaw_defsz00(
				(BgL_rtl_insz00_bglt) (BgL_insz00_5931));
		}
	}



/* dump-basic-blocks */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t
		BgL_idz00_3, obj_t BgL_vz00_4, obj_t BgL_paramsz00_5, obj_t BgL_lz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 132 */
			{	/* SawMill/defs.scm 133 */
				obj_t BgL_port4529z00_1426;

				BgL_port4529z00_1426 = BGl_za2tracezd2portza2zd2zztools_tracez00;
				bgl_display_string(BGl_string5816z00zzsaw_defsz00,
					BgL_port4529z00_1426);
				bgl_display_obj(BgL_idz00_3, BgL_port4529z00_1426);
				bgl_display_string(BGl_string5817z00zzsaw_defsz00,
					BgL_port4529z00_1426);
				bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_vz00_4),
					BgL_port4529z00_1426);
				bgl_display_char(((unsigned char) '\n'), BgL_port4529z00_1426);
			}
			bgl_display_string(BGl_string5818z00zzsaw_defsz00,
				BGl_za2tracezd2portza2zd2zztools_tracez00);
			if (NULLP(BgL_paramsz00_5))
				{	/* SawMill/defs.scm 135 */
					BNIL;
				}
			else
				{	/* SawMill/defs.scm 135 */
					obj_t BgL_head4532z00_1430;

					BgL_head4532z00_1430 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l4530z00_1432;

						obj_t BgL_tail4533z00_1433;

						BgL_l4530z00_1432 = BgL_paramsz00_5;
						BgL_tail4533z00_1433 = BgL_head4532z00_1430;
					BgL_zc3anonymousza34818ze3z83_1434:
						if (NULLP(BgL_l4530z00_1432))
							{	/* SawMill/defs.scm 135 */
								CDR(BgL_head4532z00_1430);
							}
						else
							{	/* SawMill/defs.scm 135 */
								obj_t BgL_newtail4534z00_1436;

								{	/* SawMill/defs.scm 135 */
									obj_t BgL_arg4821z00_1438;

									{	/* SawMill/defs.scm 135 */
										obj_t BgL_az00_1440;

										BgL_az00_1440 = CAR(BgL_l4530z00_1432);
										bgl_display_string(BGl_string5817z00zzsaw_defsz00,
											BGl_za2tracezd2portza2zd2zztools_tracez00);
										BgL_arg4821z00_1438 =
											BGl_dumpz00zzsaw_defsz00(BgL_az00_1440,
											BGl_za2tracezd2portza2zd2zztools_tracez00,
											(int) (((long) 0)));
									}
									BgL_newtail4534z00_1436 =
										MAKE_PAIR(BgL_arg4821z00_1438, BNIL);
								}
								SET_CDR(BgL_tail4533z00_1433, BgL_newtail4534z00_1436);
								{
									obj_t BgL_tail4533z00_7563;

									obj_t BgL_l4530z00_7561;

									BgL_l4530z00_7561 = CDR(BgL_l4530z00_1432);
									BgL_tail4533z00_7563 = BgL_newtail4534z00_1436;
									BgL_tail4533z00_1433 = BgL_tail4533z00_7563;
									BgL_l4530z00_1432 = BgL_l4530z00_7561;
									goto BgL_zc3anonymousza34818ze3z83_1434;
								}
							}
					}
				}
			bgl_display_char(((unsigned char) '\n'),
				BGl_za2tracezd2portza2zd2zztools_tracez00);
			{	/* SawMill/defs.scm 140 */
				obj_t BgL_port4535z00_1442;

				BgL_port4535z00_1442 = BGl_za2tracezd2portza2zd2zztools_tracez00;
				bgl_display_string(BGl_string5819z00zzsaw_defsz00,
					BgL_port4535z00_1442);
				bgl_display_char(((unsigned char) '\n'), BgL_port4535z00_1442);
			}
			{
				obj_t BgL_l4536z00_1444;

				{	/* SawMill/defs.scm 141 */
					bool_t BgL_auxz00_7567;

					BgL_l4536z00_1444 = BgL_lz00_6;
				BgL_zc3anonymousza34823ze3z83_1445:
					if (PAIRP(BgL_l4536z00_1444))
						{	/* SawMill/defs.scm 141 */
							{	/* SawMill/defs.scm 143 */
								obj_t BgL_bz00_1447;

								BgL_bz00_1447 = CAR(BgL_l4536z00_1444);
								{	/* SawMill/defs.scm 142 */
									obj_t BgL_portz00_3502;

									BgL_portz00_3502 = BGl_za2tracezd2portza2zd2zztools_tracez00;
									BGl_dumpz00zzsaw_defsz00(BgL_bz00_1447, BgL_portz00_3502,
										(int) (((long) 0)));
									bgl_display_char(((unsigned char) '\n'), BgL_portz00_3502);
								}
								bgl_display_char(((unsigned char) '\n'),
									BGl_za2tracezd2portza2zd2zztools_tracez00);
							}
							{
								obj_t BgL_l4536z00_7575;

								BgL_l4536z00_7575 = CDR(BgL_l4536z00_1444);
								BgL_l4536z00_1444 = BgL_l4536z00_7575;
								goto BgL_zc3anonymousza34823ze3z83_1445;
							}
						}
					else
						{	/* SawMill/defs.scm 141 */
							BgL_auxz00_7567 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_7567);
				}
			}
		}
	}



/* _dump-basic-blocks */
	obj_t BGl__dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t BgL_envz00_5932,
		obj_t BgL_idz00_5933, obj_t BgL_vz00_5934, obj_t BgL_paramsz00_5935,
		obj_t BgL_lz00_5936)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 132 */
			return
				BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(BgL_idz00_5933, BgL_vz00_5934,
				BgL_paramsz00_5935, BgL_lz00_5936);
		}
	}



/* rtl-dump */
	BGL_EXPORTED_DEF obj_t BGl_rtlzd2dumpzd2zzsaw_defsz00(obj_t BgL_objz00_7,
		obj_t BgL_portz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 149 */
			BGl_dumpz00zzsaw_defsz00(BgL_objz00_7, BgL_portz00_8, (int) (((long) 0)));
			return bgl_display_char(((unsigned char) '\n'), BgL_portz00_8);
		}
	}



/* _rtl-dump */
	obj_t BGl__rtlzd2dumpzd2zzsaw_defsz00(obj_t BgL_envz00_5937,
		obj_t BgL_objz00_5938, obj_t BgL_portz00_5939)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 149 */
			return BGl_rtlzd2dumpzd2zzsaw_defsz00(BgL_objz00_5938, BgL_portz00_5939);
		}
	}



/* dump-margin */
	obj_t BGl_dumpzd2marginzd2zzsaw_defsz00(obj_t BgL_mz00_9, obj_t BgL_pz00_10)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 156 */
			{	/* SawMill/defs.scm 157 */
				obj_t BgL_mgsz00_1450;

				BgL_mgsz00_1450 = CNST_TABLE_REF(((long) 0));
				{	/* SawMill/defs.scm 158 */
					bool_t BgL_testz00_7584;

					{	/* SawMill/defs.scm 158 */
						int BgL_arg4830z00_1455;

						BgL_arg4830z00_1455 = VECTOR_LENGTH(BgL_mgsz00_1450);
						BgL_testz00_7584 =
							((long) CINT(BgL_mz00_9) < (long) (BgL_arg4830z00_1455));
					}
					if (BgL_testz00_7584)
						{	/* SawMill/defs.scm 158 */
							return
								bgl_display_obj(VECTOR_REF(BgL_mgsz00_1450,
									CINT(BgL_mz00_9)), BgL_pz00_10);
						}
					else
						{	/* SawMill/defs.scm 160 */
							obj_t BgL_arg4828z00_1453;

							{	/* SawMill/defs.scm 160 */
								obj_t BgL_list4829z00_1454;

								BgL_list4829z00_1454 =
									MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
								{	/* SawMill/defs.scm 160 */
									obj_t BgL_res5627z00_3518;

									{	/* SawMill/defs.scm 160 */
										long BgL_kz00_3512;

										BgL_kz00_3512 = (long) CINT(BgL_mz00_9);
										{	/* SawMill/defs.scm 160 */
											obj_t BgL_arg2006z00_3515;

											BgL_arg2006z00_3515 = CAR(BgL_list4829z00_1454);
											BgL_res5627z00_3518 =
												make_string(BgL_kz00_3512, CCHAR(BgL_arg2006z00_3515));
									}}
									BgL_arg4828z00_1453 = BgL_res5627z00_3518;
							}}
							return bgl_display_obj(BgL_arg4828z00_1453, BgL_pz00_10);
						}
				}
			}
		}
	}



/* dump* */
	obj_t BGl_dumpza2za2zzsaw_defsz00(obj_t BgL_oz00_17, obj_t BgL_pz00_18,
		long BgL_mz00_19)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 183 */
			if (NULLP(CDR(BgL_oz00_17)))
				{	/* SawMill/defs.scm 187 */
					return
						BGl_dumpz00zzsaw_defsz00(CAR(BgL_oz00_17), BgL_pz00_18,
						(int) (BgL_mz00_19));
				}
			else
				{
					obj_t BgL_oz00_1460;

					{	/* SawMill/defs.scm 190 */
						bool_t BgL_auxz00_7605;

						BgL_oz00_1460 = BgL_oz00_17;
					BgL_zc3anonymousza34834ze3z83_1461:
						BGl_dumpz00zzsaw_defsz00(CAR(BgL_oz00_1460), BgL_pz00_18,
							(int) (BgL_mz00_19));
						{	/* SawMill/defs.scm 192 */
							bool_t BgL_testz00_7609;

							{	/* SawMill/defs.scm 192 */
								obj_t BgL_auxz00_7610;

								BgL_auxz00_7610 = CDR(BgL_oz00_1460);
								BgL_testz00_7609 = PAIRP(BgL_auxz00_7610);
							}
							if (BgL_testz00_7609)
								{	/* SawMill/defs.scm 192 */
									bgl_display_char(((unsigned char) '\n'), BgL_pz00_18);
									BGl_dumpzd2marginzd2zzsaw_defsz00(BINT(BgL_mz00_19),
										BgL_pz00_18);
									{
										obj_t BgL_oz00_7616;

										BgL_oz00_7616 = CDR(BgL_oz00_1460);
										BgL_oz00_1460 = BgL_oz00_7616;
										goto BgL_zc3anonymousza34834ze3z83_1461;
									}
								}
							else
								{	/* SawMill/defs.scm 192 */
									BgL_auxz00_7605 = ((bool_t) 0);
								}
						}
						return BBOOL(BgL_auxz00_7605);
					}
				}
		}
	}



/* dump-args */
	bool_t BGl_dumpzd2argszd2zzsaw_defsz00(obj_t BgL_argsz00_20,
		obj_t BgL_pz00_21)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 200 */
			{
				obj_t BgL_argsz00_1469;

				BgL_argsz00_1469 = BgL_argsz00_20;
			BgL_zc3anonymousza34840ze3z83_1470:
				if (PAIRP(BgL_argsz00_1469))
					{	/* SawMill/defs.scm 203 */
						obj_t BgL_az00_1472;

						BgL_az00_1472 = CAR(BgL_argsz00_1469);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1472,
								BGl_rtl_regz00zzsaw_defsz00))
							{	/* SawMill/defs.scm 205 */
								bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_21);
								BGl_dumpz00zzsaw_defsz00(BgL_az00_1472, BgL_pz00_21,
									(int) (((long) 0)));
							}
						else
							{	/* SawMill/defs.scm 205 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1472,
										BGl_rtl_insz00zzsaw_defsz00))
									{	/* SawMill/defs.scm 208 */
										bgl_display_string(BGl_string5817z00zzsaw_defsz00,
											BgL_pz00_21);
										BGl_dumpzd2inszd2rhsz00zzsaw_defsz00((BgL_rtl_insz00_bglt)
											(BgL_az00_1472), BgL_pz00_21, BINT(((long) 0)));
									}
								else
									{	/* SawMill/defs.scm 208 */
										bgl_display_string(BGl_string5817z00zzsaw_defsz00,
											BgL_pz00_21);
										bgl_display_obj(BgL_az00_1472, BgL_pz00_21);
									}
							}
						{
							obj_t BgL_argsz00_7635;

							BgL_argsz00_7635 = CDR(BgL_argsz00_1469);
							BgL_argsz00_1469 = BgL_argsz00_7635;
							goto BgL_zc3anonymousza34840ze3z83_1470;
						}
					}
				else
					{	/* SawMill/defs.scm 202 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* dump-ins-rhs */
	obj_t BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_28,
		obj_t BgL_pz00_29, obj_t BgL_mz00_30)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 246 */
			bgl_display_string(BGl_string5820z00zzsaw_defsz00, BgL_pz00_29);
			{	/* SawMill/defs.scm 249 */
				BgL_rtl_funz00_bglt BgL_arg4845z00_1478;

				obj_t BgL_arg4846z00_1479;

				obj_t BgL_arg4847z00_1480;

				BgL_arg4845z00_1478 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_28))->BgL_funz00);
				BgL_arg4846z00_1479 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_28))->BgL_destz00);
				BgL_arg4847z00_1480 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_28))->BgL_argsz00);
				{	/* SawMill/defs.scm 249 */
					obj_t BgL_method4601z00_3549;

					{	/* SawMill/defs.scm 249 */
						BgL_objectz00_bglt BgL_objz00_3550;

						BgL_objz00_3550 = (BgL_objectz00_bglt) (BgL_arg4845z00_1478);
						{	/* SawMill/defs.scm 249 */
							long BgL_objzd2classzd2numz00_3551;

							BgL_objzd2classzd2numz00_3551 =
								BGL_OBJECT_CLASS_NUM(BgL_objz00_3550);
							{	/* SawMill/defs.scm 249 */
								obj_t BgL_arg2643z00_3552;

								BgL_arg2643z00_3552 =
									PROCEDURE_REF(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
									(int) (((long) 1)));
								{	/* SawMill/defs.scm 249 */
									obj_t BgL_arrayz00_3554;

									int BgL_offsetz00_3555;

									BgL_arrayz00_3554 = BgL_arg2643z00_3552;
									BgL_offsetz00_3555 = (int) (BgL_objzd2classzd2numz00_3551);
									{	/* SawMill/defs.scm 249 */
										long BgL_offsetz00_3556;

										BgL_offsetz00_3556 =
											((long) (BgL_offsetz00_3555) - OBJECT_TYPE);
										{	/* SawMill/defs.scm 249 */
											long BgL_modz00_3557;

											{	/* SawMill/defs.scm 249 */
												int BgL_arg2645z00_3558;

												BgL_arg2645z00_3558 = (int) (((long) 16));
												{	/* SawMill/defs.scm 249 */
													long BgL_auxz00_7649;

													BgL_auxz00_7649 = (long) (BgL_arg2645z00_3558);
													BgL_modz00_3557 =
														(BgL_offsetz00_3556 / BgL_auxz00_7649);
											}}
											{	/* SawMill/defs.scm 249 */
												long BgL_restz00_3559;

												{	/* SawMill/defs.scm 249 */
													int BgL_arg2644z00_3560;

													BgL_arg2644z00_3560 = (int) (((long) 16));
													{	/* SawMill/defs.scm 249 */
														long BgL_auxz00_7653;

														BgL_auxz00_7653 = (long) (BgL_arg2644z00_3560);
														BgL_restz00_3559 =
															(BgL_offsetz00_3556 % BgL_auxz00_7653);
												}}
												{	/* SawMill/defs.scm 249 */

													BgL_method4601z00_3549 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_3554,
															(int) (BgL_modz00_3557)),
														(int) (BgL_restz00_3559));
					}}}}}}}}
					PROCEDURE_ENTRY(BgL_method4601z00_3549) (BgL_method4601z00_3549,
						(obj_t) (BgL_arg4845z00_1478), BgL_arg4846z00_1479,
						BgL_arg4847z00_1480, BgL_pz00_29, BgL_mz00_30, BEOA);
			}}
			return bgl_display_string(BGl_string5821z00zzsaw_defsz00, BgL_pz00_29);
		}
	}



/* show-fun */
	obj_t BGl_showzd2funzd2zzsaw_defsz00(obj_t BgL_oz00_34, obj_t BgL_pz00_35)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 264 */
			{	/* SawMill/defs.scm 265 */
				obj_t BgL_cz00_1481;

				{	/* SawMill/defs.scm 265 */
					obj_t BgL_arg4851z00_1485;

					{	/* SawMill/defs.scm 265 */
						obj_t BgL_arg4852z00_1486;

						{	/* SawMill/defs.scm 265 */
							BgL_objectz00_bglt BgL_objectz00_3576;

							BgL_objectz00_3576 = (BgL_objectz00_bglt) (BgL_oz00_34);
							{	/* SawMill/defs.scm 265 */
								long BgL_arg2646z00_3577;

								{	/* SawMill/defs.scm 265 */
									long BgL_arg2647z00_3578;

									BgL_arg2647z00_3578 =
										BGL_OBJECT_CLASS_NUM(BgL_objectz00_3576);
									BgL_arg2646z00_3577 = (BgL_arg2647z00_3578 - OBJECT_TYPE);
								}
								BgL_arg4852z00_1486 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									(int) (BgL_arg2646z00_3577));
						}}
						BgL_arg4851z00_1485 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg4852z00_1486);
					}
					{	/* SawMill/defs.scm 265 */
						obj_t BgL_res5630z00_3586;

						{	/* SawMill/defs.scm 265 */
							obj_t BgL_arg2063z00_3585;

							BgL_arg2063z00_3585 = SYMBOL_TO_STRING(BgL_arg4851z00_1485);
							BgL_res5630z00_3586 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_3585);
						}
						BgL_cz00_1481 = BgL_res5630z00_3586;
				}}
				return
					bgl_display_obj(c_substring(BgL_cz00_1481, ((long) 4),
						STRING_LENGTH(BgL_cz00_1481)), BgL_pz00_35);
		}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			{	/* SawMill/defs.scm 11 */
				obj_t BgL_arg4853z00_1487;

				obj_t BgL_arg4854z00_1488;

				obj_t BgL_arg4857z00_1491;

				BgL_arg4853z00_1487 = CNST_TABLE_REF(((long) 1));
				BgL_arg4854z00_1488 = BGl_objectz00zz__objectz00;
				{	/* SawMill/defs.scm 11 */
					obj_t BgL_v4544z00_1492;

					BgL_v4544z00_1492 = create_vector((int) (((long) 0)));
					BgL_arg4857z00_1491 = BgL_v4544z00_1492;
				}
				BGl_rtl_regz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4853z00_1487,
					BgL_arg4854z00_1488, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_regzd2envz52zzsaw_defsz00,
					BGl_rtl_regzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_regzf3zd2envz21zzsaw_defsz00, ((long) 373929096), BFALSE,
					BFALSE, BgL_arg4857z00_1491);
			}
			{	/* SawMill/defs.scm 19 */
				obj_t BgL_arg4858z00_1493;

				obj_t BgL_arg4859z00_1494;

				obj_t BgL_arg4862z00_1497;

				BgL_arg4858z00_1493 = CNST_TABLE_REF(((long) 2));
				BgL_arg4859z00_1494 = BGl_objectz00zz__objectz00;
				{	/* SawMill/defs.scm 19 */
					obj_t BgL_v4545z00_1498;

					BgL_v4545z00_1498 = create_vector((int) (((long) 0)));
					BgL_arg4862z00_1497 = BgL_v4545z00_1498;
				}
				BGl_rtl_funz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4858z00_1493,
					BgL_arg4859z00_1494, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_funzd2envz52zzsaw_defsz00,
					BGl_rtl_funzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_funzf3zd2envz21zzsaw_defsz00, ((long) 68214620), BFALSE,
					BFALSE, BgL_arg4862z00_1497);
			}
			{	/* SawMill/defs.scm 21 */
				obj_t BgL_arg4863z00_1499;

				obj_t BgL_arg4864z00_1500;

				obj_t BgL_arg4867z00_1503;

				BgL_arg4863z00_1499 = CNST_TABLE_REF(((long) 3));
				BgL_arg4864z00_1500 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 21 */
					obj_t BgL_v4546z00_1504;

					BgL_v4546z00_1504 = create_vector((int) (((long) 0)));
					BgL_arg4867z00_1503 = BgL_v4546z00_1504;
				}
				BGl_rtl_lastz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4863z00_1499,
					BgL_arg4864z00_1500, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_lastzd2envz52zzsaw_defsz00,
					BGl_rtl_lastzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_lastzf3zd2envz21zzsaw_defsz00, ((long) 77123038), BFALSE,
					BFALSE, BgL_arg4867z00_1503);
			}
			{	/* SawMill/defs.scm 22 */
				obj_t BgL_arg4868z00_1505;

				obj_t BgL_arg4869z00_1506;

				obj_t BgL_arg4872z00_1509;

				BgL_arg4868z00_1505 = CNST_TABLE_REF(((long) 4));
				BgL_arg4869z00_1506 = BGl_rtl_lastz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 22 */
					obj_t BgL_v4547z00_1510;

					BgL_v4547z00_1510 = create_vector((int) (((long) 0)));
					BgL_arg4872z00_1509 = BgL_v4547z00_1510;
				}
				BGl_rtl_returnz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4868z00_1505,
					BgL_arg4869z00_1506, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_returnzd2envz52zzsaw_defsz00,
					BGl_rtl_returnzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_returnzf3zd2envz21zzsaw_defsz00, ((long) 81713803), BFALSE,
					BFALSE, BgL_arg4872z00_1509);
			}
			{	/* SawMill/defs.scm 23 */
				obj_t BgL_arg4873z00_1511;

				obj_t BgL_arg4874z00_1512;

				obj_t BgL_arg4877z00_1515;

				BgL_arg4873z00_1511 = CNST_TABLE_REF(((long) 5));
				BgL_arg4874z00_1512 = BGl_rtl_lastz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 23 */
					obj_t BgL_v4548z00_1516;

					BgL_v4548z00_1516 = create_vector((int) (((long) 0)));
					BgL_arg4877z00_1515 = BgL_v4548z00_1516;
				}
				BGl_rtl_jumpexitz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4873z00_1511,
					BgL_arg4874z00_1512, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_jumpexitzd2envz52zzsaw_defsz00,
					BGl_rtl_jumpexitzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_jumpexitzf3zd2envz21zzsaw_defsz00, ((long) 272613408), BFALSE,
					BFALSE, BgL_arg4877z00_1515);
			}
			{	/* SawMill/defs.scm 24 */
				obj_t BgL_arg4878z00_1517;

				obj_t BgL_arg4879z00_1518;

				obj_t BgL_arg4882z00_1521;

				BgL_arg4878z00_1517 = CNST_TABLE_REF(((long) 6));
				BgL_arg4879z00_1518 = BGl_rtl_lastz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 24 */
					obj_t BgL_v4549z00_1522;

					BgL_v4549z00_1522 = create_vector((int) (((long) 0)));
					BgL_arg4882z00_1521 = BgL_v4549z00_1522;
				}
				BGl_rtl_failz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4878z00_1517,
					BgL_arg4879z00_1518, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_failzd2envz52zzsaw_defsz00,
					BGl_rtl_failzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_failzf3zd2envz21zzsaw_defsz00, ((long) 77118566), BFALSE,
					BFALSE, BgL_arg4882z00_1521);
			}
			{	/* SawMill/defs.scm 26 */
				obj_t BgL_arg4883z00_1523;

				obj_t BgL_arg4884z00_1524;

				obj_t BgL_arg4887z00_1527;

				BgL_arg4883z00_1523 = CNST_TABLE_REF(((long) 7));
				BgL_arg4884z00_1524 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 26 */
					obj_t BgL_v4550z00_1528;

					BgL_v4550z00_1528 = create_vector((int) (((long) 0)));
					BgL_arg4887z00_1527 = BgL_v4550z00_1528;
				}
				BGl_rtl_notseqz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4883z00_1523,
					BgL_arg4884z00_1524, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_notseqzd2envz52zzsaw_defsz00,
					BGl_rtl_notseqzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_notseqzf3zd2envz21zzsaw_defsz00, ((long) 341597588), BFALSE,
					BFALSE, BgL_arg4887z00_1527);
			}
			{	/* SawMill/defs.scm 27 */
				obj_t BgL_arg4888z00_1529;

				obj_t BgL_arg4889z00_1530;

				obj_t BgL_arg4892z00_1533;

				BgL_arg4888z00_1529 = CNST_TABLE_REF(((long) 8));
				BgL_arg4889z00_1530 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 27 */
					obj_t BgL_v4551z00_1534;

					BgL_v4551z00_1534 = create_vector((int) (((long) 0)));
					BgL_arg4892z00_1533 = BgL_v4551z00_1534;
				}
				BGl_rtl_ifz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4888z00_1529,
					BgL_arg4889z00_1530, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_ifzd2envz52zzsaw_defsz00,
					BGl_rtl_ifzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_ifzf3zd2envz21zzsaw_defsz00, ((long) 7580137), BFALSE, BFALSE,
					BgL_arg4892z00_1533);
			}
			{	/* SawMill/defs.scm 28 */
				obj_t BgL_arg4893z00_1535;

				obj_t BgL_arg4894z00_1536;

				obj_t BgL_arg4897z00_1539;

				BgL_arg4893z00_1535 = CNST_TABLE_REF(((long) 9));
				BgL_arg4894z00_1536 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 28 */
					obj_t BgL_v4552z00_1540;

					BgL_v4552z00_1540 = create_vector((int) (((long) 0)));
					BgL_arg4897z00_1539 = BgL_v4552z00_1540;
				}
				BGl_rtl_selectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4893z00_1535,
					BgL_arg4894z00_1536, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_selectzd2envz52zzsaw_defsz00,
					BGl_rtl_selectzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_selectzf3zd2envz21zzsaw_defsz00, ((long) 128574481), BFALSE,
					BFALSE, BgL_arg4897z00_1539);
			}
			{	/* SawMill/defs.scm 29 */
				obj_t BgL_arg4898z00_1541;

				obj_t BgL_arg4899z00_1542;

				obj_t BgL_arg4902z00_1545;

				BgL_arg4898z00_1541 = CNST_TABLE_REF(((long) 10));
				BgL_arg4899z00_1542 = BGl_rtl_selectz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 29 */
					obj_t BgL_v4553z00_1546;

					BgL_v4553z00_1546 = create_vector((int) (((long) 0)));
					BgL_arg4902z00_1545 = BgL_v4553z00_1546;
				}
				BGl_rtl_switchz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4898z00_1541,
					BgL_arg4899z00_1542, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_switchzd2envz52zzsaw_defsz00,
					BGl_rtl_switchzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_switchzf3zd2envz21zzsaw_defsz00, ((long) 336448600), BFALSE,
					BFALSE, BgL_arg4902z00_1545);
			}
			{	/* SawMill/defs.scm 30 */
				obj_t BgL_arg4903z00_1547;

				obj_t BgL_arg4904z00_1548;

				obj_t BgL_arg4907z00_1551;

				BgL_arg4903z00_1547 = CNST_TABLE_REF(((long) 11));
				BgL_arg4904z00_1548 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 30 */
					obj_t BgL_v4554z00_1552;

					BgL_v4554z00_1552 = create_vector((int) (((long) 0)));
					BgL_arg4907z00_1551 = BgL_v4554z00_1552;
				}
				BGl_rtl_ifeqz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4903z00_1547,
					BgL_arg4904z00_1548, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_ifeqzd2envz52zzsaw_defsz00,
					BGl_rtl_ifeqzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_ifeqzf3zd2envz21zzsaw_defsz00, ((long) 383711600), BFALSE,
					BFALSE, BgL_arg4907z00_1551);
			}
			{	/* SawMill/defs.scm 31 */
				obj_t BgL_arg4908z00_1553;

				obj_t BgL_arg4909z00_1554;

				obj_t BgL_arg4912z00_1557;

				BgL_arg4908z00_1553 = CNST_TABLE_REF(((long) 12));
				BgL_arg4909z00_1554 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 31 */
					obj_t BgL_v4555z00_1558;

					BgL_v4555z00_1558 = create_vector((int) (((long) 0)));
					BgL_arg4912z00_1557 = BgL_v4555z00_1558;
				}
				BGl_rtl_ifnez00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4908z00_1553,
					BgL_arg4909z00_1554, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_ifnezd2envz52zzsaw_defsz00,
					BGl_rtl_ifnezd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_ifnezf3zd2envz21zzsaw_defsz00, ((long) 383711675), BFALSE,
					BFALSE, BgL_arg4912z00_1557);
			}
			{	/* SawMill/defs.scm 32 */
				obj_t BgL_arg4913z00_1559;

				obj_t BgL_arg4914z00_1560;

				obj_t BgL_arg4917z00_1563;

				BgL_arg4913z00_1559 = CNST_TABLE_REF(((long) 13));
				BgL_arg4914z00_1560 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 32 */
					obj_t BgL_v4556z00_1564;

					BgL_v4556z00_1564 = create_vector((int) (((long) 0)));
					BgL_arg4917z00_1563 = BgL_v4556z00_1564;
				}
				BGl_rtl_goz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4913z00_1559,
					BgL_arg4914z00_1560, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_gozd2envz52zzsaw_defsz00,
					BGl_rtl_gozd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_gozf3zd2envz21zzsaw_defsz00, ((long) 187694563), BFALSE,
					BFALSE, BgL_arg4917z00_1563);
			}
			{	/* SawMill/defs.scm 34 */
				obj_t BgL_arg4918z00_1565;

				obj_t BgL_arg4919z00_1566;

				obj_t BgL_arg4922z00_1569;

				BgL_arg4918z00_1565 = CNST_TABLE_REF(((long) 14));
				BgL_arg4919z00_1566 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 34 */
					obj_t BgL_v4557z00_1570;

					BgL_v4557z00_1570 = create_vector((int) (((long) 0)));
					BgL_arg4922z00_1569 = BgL_v4557z00_1570;
				}
				BGl_rtl_purez00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4918z00_1565,
					BgL_arg4919z00_1566, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_purezd2envz52zzsaw_defsz00,
					BGl_rtl_purezd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_purezf3zd2envz21zzsaw_defsz00, ((long) 77127550), BFALSE,
					BFALSE, BgL_arg4922z00_1569);
			}
			{	/* SawMill/defs.scm 35 */
				obj_t BgL_arg4923z00_1571;

				obj_t BgL_arg4924z00_1572;

				obj_t BgL_arg4927z00_1575;

				BgL_arg4923z00_1571 = CNST_TABLE_REF(((long) 15));
				BgL_arg4924z00_1572 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 35 */
					obj_t BgL_v4558z00_1576;

					BgL_v4558z00_1576 = create_vector((int) (((long) 0)));
					BgL_arg4927z00_1575 = BgL_v4558z00_1576;
				}
				BGl_rtl_nopz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4923z00_1571,
					BgL_arg4924z00_1572, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_nopzd2envz52zzsaw_defsz00,
					BGl_rtl_nopzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_nopzf3zd2envz21zzsaw_defsz00, ((long) 68221823), BFALSE,
					BFALSE, BgL_arg4927z00_1575);
			}
			{	/* SawMill/defs.scm 36 */
				obj_t BgL_arg4928z00_1577;

				obj_t BgL_arg4929z00_1578;

				obj_t BgL_arg4932z00_1581;

				BgL_arg4928z00_1577 = CNST_TABLE_REF(((long) 16));
				BgL_arg4929z00_1578 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 36 */
					obj_t BgL_v4559z00_1582;

					BgL_v4559z00_1582 = create_vector((int) (((long) 0)));
					BgL_arg4932z00_1581 = BgL_v4559z00_1582;
				}
				BGl_rtl_movz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4928z00_1577,
					BgL_arg4929z00_1578, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_movzd2envz52zzsaw_defsz00,
					BGl_rtl_movzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_movzf3zd2envz21zzsaw_defsz00, ((long) 68221748), BFALSE,
					BFALSE, BgL_arg4932z00_1581);
			}
			{	/* SawMill/defs.scm 37 */
				obj_t BgL_arg4933z00_1583;

				obj_t BgL_arg4934z00_1584;

				obj_t BgL_arg4937z00_1587;

				BgL_arg4933z00_1583 = CNST_TABLE_REF(((long) 17));
				BgL_arg4934z00_1584 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 37 */
					obj_t BgL_v4560z00_1588;

					BgL_v4560z00_1588 = create_vector((int) (((long) 0)));
					BgL_arg4937z00_1587 = BgL_v4560z00_1588;
				}
				BGl_rtl_loadiz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4933z00_1583,
					BgL_arg4934z00_1584, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_loadizd2envz52zzsaw_defsz00,
					BGl_rtl_loadizd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_loadizf3zd2envz21zzsaw_defsz00, ((long) 9787827), BFALSE,
					BFALSE, BgL_arg4937z00_1587);
			}
			{	/* SawMill/defs.scm 38 */
				obj_t BgL_arg4938z00_1589;

				obj_t BgL_arg4939z00_1590;

				obj_t BgL_arg4942z00_1593;

				BgL_arg4938z00_1589 = CNST_TABLE_REF(((long) 18));
				BgL_arg4939z00_1590 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 38 */
					obj_t BgL_v4561z00_1594;

					BgL_v4561z00_1594 = create_vector((int) (((long) 0)));
					BgL_arg4942z00_1593 = BgL_v4561z00_1594;
				}
				BGl_rtl_loadgz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4938z00_1589,
					BgL_arg4939z00_1590, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_loadgzd2envz52zzsaw_defsz00,
					BGl_rtl_loadgzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_loadgzf3zd2envz21zzsaw_defsz00, ((long) 195410310), BFALSE,
					BFALSE, BgL_arg4942z00_1593);
			}
			{	/* SawMill/defs.scm 39 */
				obj_t BgL_arg4943z00_1595;

				obj_t BgL_arg4944z00_1596;

				obj_t BgL_arg4947z00_1599;

				BgL_arg4943z00_1595 = CNST_TABLE_REF(((long) 19));
				BgL_arg4944z00_1596 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 39 */
					obj_t BgL_v4562z00_1600;

					BgL_v4562z00_1600 = create_vector((int) (((long) 0)));
					BgL_arg4947z00_1599 = BgL_v4562z00_1600;
				}
				BGl_rtl_loadfunz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4943z00_1595,
					BgL_arg4944z00_1596, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_loadfunzd2envz52zzsaw_defsz00,
					BGl_rtl_loadfunzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_loadfunzf3zd2envz21zzsaw_defsz00, ((long) 366470860), BFALSE,
					BFALSE, BgL_arg4947z00_1599);
			}
			{	/* SawMill/defs.scm 40 */
				obj_t BgL_arg4948z00_1601;

				obj_t BgL_arg4949z00_1602;

				obj_t BgL_arg4952z00_1605;

				BgL_arg4948z00_1601 = CNST_TABLE_REF(((long) 20));
				BgL_arg4949z00_1602 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 40 */
					obj_t BgL_v4563z00_1606;

					BgL_v4563z00_1606 = create_vector((int) (((long) 0)));
					BgL_arg4952z00_1605 = BgL_v4563z00_1606;
				}
				BGl_rtl_globalrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4948z00_1601,
					BgL_arg4949z00_1602, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_globalrefzd2envz52zzsaw_defsz00,
					BGl_rtl_globalrefzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_globalrefzf3zd2envz21zzsaw_defsz00, ((long) 84385679), BFALSE,
					BFALSE, BgL_arg4952z00_1605);
			}
			{	/* SawMill/defs.scm 41 */
				obj_t BgL_arg4953z00_1607;

				obj_t BgL_arg4954z00_1608;

				obj_t BgL_arg4957z00_1611;

				BgL_arg4953z00_1607 = CNST_TABLE_REF(((long) 21));
				BgL_arg4954z00_1608 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 41 */
					obj_t BgL_v4564z00_1612;

					BgL_v4564z00_1612 = create_vector((int) (((long) 0)));
					BgL_arg4957z00_1611 = BgL_v4564z00_1612;
				}
				BGl_rtl_getfieldz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4953z00_1607,
					BgL_arg4954z00_1608, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_getfieldzd2envz52zzsaw_defsz00,
					BGl_rtl_getfieldzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_getfieldzf3zd2envz21zzsaw_defsz00, ((long) 180905804), BFALSE,
					BFALSE, BgL_arg4957z00_1611);
			}
			{	/* SawMill/defs.scm 42 */
				obj_t BgL_arg4958z00_1613;

				obj_t BgL_arg4959z00_1614;

				obj_t BgL_arg4962z00_1617;

				BgL_arg4958z00_1613 = CNST_TABLE_REF(((long) 22));
				BgL_arg4959z00_1614 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 42 */
					obj_t BgL_v4565z00_1618;

					BgL_v4565z00_1618 = create_vector((int) (((long) 0)));
					BgL_arg4962z00_1617 = BgL_v4565z00_1618;
				}
				BGl_rtl_vallocz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4958z00_1613,
					BgL_arg4959z00_1614, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_valloczd2envz52zzsaw_defsz00,
					BGl_rtl_valloczd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_valloczf3zd2envz21zzsaw_defsz00, ((long) 413591693), BFALSE,
					BFALSE, BgL_arg4962z00_1617);
			}
			{	/* SawMill/defs.scm 43 */
				obj_t BgL_arg4963z00_1619;

				obj_t BgL_arg4964z00_1620;

				obj_t BgL_arg4967z00_1623;

				BgL_arg4963z00_1619 = CNST_TABLE_REF(((long) 23));
				BgL_arg4964z00_1620 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 43 */
					obj_t BgL_v4566z00_1624;

					BgL_v4566z00_1624 = create_vector((int) (((long) 0)));
					BgL_arg4967z00_1623 = BgL_v4566z00_1624;
				}
				BGl_rtl_vrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4963z00_1619,
					BgL_arg4964z00_1620, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_vrefzd2envz52zzsaw_defsz00,
					BGl_rtl_vrefzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_vrefzf3zd2envz21zzsaw_defsz00, ((long) 140252411), BFALSE,
					BFALSE, BgL_arg4967z00_1623);
			}
			{	/* SawMill/defs.scm 44 */
				obj_t BgL_arg4968z00_1625;

				obj_t BgL_arg4969z00_1626;

				obj_t BgL_arg4972z00_1629;

				BgL_arg4968z00_1625 = CNST_TABLE_REF(((long) 24));
				BgL_arg4969z00_1626 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 44 */
					obj_t BgL_v4567z00_1630;

					BgL_v4567z00_1630 = create_vector((int) (((long) 0)));
					BgL_arg4972z00_1629 = BgL_v4567z00_1630;
				}
				BGl_rtl_vlengthz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4968z00_1625,
					BgL_arg4969z00_1626, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_vlengthzd2envz52zzsaw_defsz00,
					BGl_rtl_vlengthzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_vlengthzf3zd2envz21zzsaw_defsz00, ((long) 133942203), BFALSE,
					BFALSE, BgL_arg4972z00_1629);
			}
			{	/* SawMill/defs.scm 45 */
				obj_t BgL_arg4973z00_1631;

				obj_t BgL_arg4974z00_1632;

				obj_t BgL_arg4978z00_1635;

				BgL_arg4973z00_1631 = CNST_TABLE_REF(((long) 25));
				BgL_arg4974z00_1632 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 45 */
					obj_t BgL_v4568z00_1636;

					BgL_v4568z00_1636 = create_vector((int) (((long) 0)));
					BgL_arg4978z00_1635 = BgL_v4568z00_1636;
				}
				BGl_rtl_isaz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4973z00_1631,
					BgL_arg4974z00_1632, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_isazd2envz52zzsaw_defsz00,
					BGl_rtl_isazd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_isazf3zd2envz21zzsaw_defsz00, ((long) 345037430), BFALSE,
					BFALSE, BgL_arg4978z00_1635);
			}
			{	/* SawMill/defs.scm 46 */
				obj_t BgL_arg4979z00_1637;

				obj_t BgL_arg4980z00_1638;

				obj_t BgL_arg4983z00_1641;

				BgL_arg4979z00_1637 = CNST_TABLE_REF(((long) 26));
				BgL_arg4980z00_1638 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 46 */
					obj_t BgL_v4569z00_1642;

					BgL_v4569z00_1642 = create_vector((int) (((long) 0)));
					BgL_arg4983z00_1641 = BgL_v4569z00_1642;
				}
				BGl_rtl_makeboxz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4979z00_1637,
					BgL_arg4980z00_1638, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_makeboxzd2envz52zzsaw_defsz00,
					BGl_rtl_makeboxzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_makeboxzf3zd2envz21zzsaw_defsz00, ((long) 388596201), BFALSE,
					BFALSE, BgL_arg4983z00_1641);
			}
			{	/* SawMill/defs.scm 47 */
				obj_t BgL_arg4984z00_1643;

				obj_t BgL_arg4985z00_1644;

				obj_t BgL_arg4988z00_1647;

				BgL_arg4984z00_1643 = CNST_TABLE_REF(((long) 27));
				BgL_arg4985z00_1644 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.scm 47 */
					obj_t BgL_v4570z00_1648;

					BgL_v4570z00_1648 = create_vector((int) (((long) 0)));
					BgL_arg4988z00_1647 = BgL_v4570z00_1648;
				}
				BGl_rtl_boxrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4984z00_1643,
					BgL_arg4985z00_1644, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_boxrefzd2envz52zzsaw_defsz00,
					BGl_rtl_boxrefzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_boxrefzf3zd2envz21zzsaw_defsz00, ((long) 340891824), BFALSE,
					BFALSE, BgL_arg4988z00_1647);
			}
			{	/* SawMill/defs.scm 49 */
				obj_t BgL_arg4989z00_1649;

				obj_t BgL_arg4990z00_1650;

				obj_t BgL_arg4994z00_1653;

				BgL_arg4989z00_1649 = CNST_TABLE_REF(((long) 28));
				BgL_arg4990z00_1650 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 49 */
					obj_t BgL_v4571z00_1654;

					BgL_v4571z00_1654 = create_vector((int) (((long) 0)));
					BgL_arg4994z00_1653 = BgL_v4571z00_1654;
				}
				BGl_rtl_effectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4989z00_1649,
					BgL_arg4990z00_1650, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_effectzd2envz52zzsaw_defsz00,
					BGl_rtl_effectzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_effectzf3zd2envz21zzsaw_defsz00, ((long) 340995743), BFALSE,
					BFALSE, BgL_arg4994z00_1653);
			}
			{	/* SawMill/defs.scm 50 */
				obj_t BgL_arg4995z00_1655;

				obj_t BgL_arg4996z00_1656;

				obj_t BgL_arg4999z00_1659;

				BgL_arg4995z00_1655 = CNST_TABLE_REF(((long) 29));
				BgL_arg4996z00_1656 = BGl_rtl_effectz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 50 */
					obj_t BgL_v4572z00_1660;

					BgL_v4572z00_1660 = create_vector((int) (((long) 0)));
					BgL_arg4999z00_1659 = BgL_v4572z00_1660;
				}
				BGl_rtl_storegz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4995z00_1655,
					BgL_arg4996z00_1656, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_storegzd2envz52zzsaw_defsz00,
					BGl_rtl_storegzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_storegzf3zd2envz21zzsaw_defsz00, ((long) 379303713), BFALSE,
					BFALSE, BgL_arg4999z00_1659);
			}
			{	/* SawMill/defs.scm 51 */
				obj_t BgL_arg5000z00_1661;

				obj_t BgL_arg5001z00_1662;

				obj_t BgL_arg5004z00_1665;

				BgL_arg5000z00_1661 = CNST_TABLE_REF(((long) 30));
				BgL_arg5001z00_1662 = BGl_rtl_effectz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 51 */
					obj_t BgL_v4573z00_1666;

					BgL_v4573z00_1666 = create_vector((int) (((long) 0)));
					BgL_arg5004z00_1665 = BgL_v4573z00_1666;
				}
				BGl_rtl_setfieldz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5000z00_1661,
					BgL_arg5001z00_1662, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_setfieldzd2envz52zzsaw_defsz00,
					BGl_rtl_setfieldzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_setfieldzf3zd2envz21zzsaw_defsz00, ((long) 376711480), BFALSE,
					BFALSE, BgL_arg5004z00_1665);
			}
			{	/* SawMill/defs.scm 52 */
				obj_t BgL_arg5005z00_1667;

				obj_t BgL_arg5006z00_1668;

				obj_t BgL_arg5009z00_1671;

				BgL_arg5005z00_1667 = CNST_TABLE_REF(((long) 31));
				BgL_arg5006z00_1668 = BGl_rtl_effectz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 52 */
					obj_t BgL_v4574z00_1672;

					BgL_v4574z00_1672 = create_vector((int) (((long) 0)));
					BgL_arg5009z00_1671 = BgL_v4574z00_1672;
				}
				BGl_rtl_vsetz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5005z00_1667,
					BgL_arg5006z00_1668, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_vsetzd2envz52zzsaw_defsz00,
					BGl_rtl_vsetzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_vsetzf3zd2envz21zzsaw_defsz00, ((long) 140252250), BFALSE,
					BFALSE, BgL_arg5009z00_1671);
			}
			{	/* SawMill/defs.scm 53 */
				obj_t BgL_arg5010z00_1673;

				obj_t BgL_arg5011z00_1674;

				obj_t BgL_arg5014z00_1677;

				BgL_arg5010z00_1673 = CNST_TABLE_REF(((long) 32));
				BgL_arg5011z00_1674 = BGl_rtl_effectz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 53 */
					obj_t BgL_v4575z00_1678;

					BgL_v4575z00_1678 = create_vector((int) (((long) 0)));
					BgL_arg5014z00_1677 = BgL_v4575z00_1678;
				}
				BGl_rtl_boxsetz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5010z00_1673,
					BgL_arg5011z00_1674, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_boxsetzd2envz52zzsaw_defsz00,
					BGl_rtl_boxsetzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_boxsetzf3zd2envz21zzsaw_defsz00, ((long) 340891919), BFALSE,
					BFALSE, BgL_arg5014z00_1677);
			}
			{	/* SawMill/defs.scm 55 */
				obj_t BgL_arg5015z00_1679;

				obj_t BgL_arg5016z00_1680;

				obj_t BgL_arg5019z00_1683;

				BgL_arg5015z00_1679 = CNST_TABLE_REF(((long) 33));
				BgL_arg5016z00_1680 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 55 */
					obj_t BgL_v4576z00_1684;

					BgL_v4576z00_1684 = create_vector((int) (((long) 0)));
					BgL_arg5019z00_1683 = BgL_v4576z00_1684;
				}
				BGl_rtl_newz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5015z00_1679,
					BgL_arg5016z00_1680, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_newzd2envz52zzsaw_defsz00,
					BGl_rtl_newzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_newzf3zd2envz21zzsaw_defsz00, ((long) 94329311), BFALSE,
					BFALSE, BgL_arg5019z00_1683);
			}
			{	/* SawMill/defs.scm 56 */
				obj_t BgL_arg5020z00_1685;

				obj_t BgL_arg5021z00_1686;

				obj_t BgL_arg5024z00_1689;

				BgL_arg5020z00_1685 = CNST_TABLE_REF(((long) 34));
				BgL_arg5021z00_1686 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 56 */
					obj_t BgL_v4577z00_1690;

					BgL_v4577z00_1690 = create_vector((int) (((long) 0)));
					BgL_arg5024z00_1689 = BgL_v4577z00_1690;
				}
				BGl_rtl_callz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5020z00_1685,
					BgL_arg5021z00_1686, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_callzd2envz52zzsaw_defsz00,
					BGl_rtl_callzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_callzf3zd2envz21zzsaw_defsz00, ((long) 107107513), BFALSE,
					BFALSE, BgL_arg5024z00_1689);
			}
			{	/* SawMill/defs.scm 57 */
				obj_t BgL_arg5025z00_1691;

				obj_t BgL_arg5026z00_1692;

				obj_t BgL_arg5029z00_1695;

				BgL_arg5025z00_1691 = CNST_TABLE_REF(((long) 35));
				BgL_arg5026z00_1692 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 57 */
					obj_t BgL_v4578z00_1696;

					BgL_v4578z00_1696 = create_vector((int) (((long) 0)));
					BgL_arg5029z00_1695 = BgL_v4578z00_1696;
				}
				BGl_rtl_applyz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5025z00_1691,
					BgL_arg5026z00_1692, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_applyzd2envz52zzsaw_defsz00,
					BGl_rtl_applyzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_applyzf3zd2envz21zzsaw_defsz00, ((long) 157174992), BFALSE,
					BFALSE, BgL_arg5029z00_1695);
			}
			{	/* SawMill/defs.scm 58 */
				obj_t BgL_arg5030z00_1697;

				obj_t BgL_arg5031z00_1698;

				obj_t BgL_arg5034z00_1701;

				BgL_arg5030z00_1697 = CNST_TABLE_REF(((long) 36));
				BgL_arg5031z00_1698 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 58 */
					obj_t BgL_v4579z00_1702;

					BgL_v4579z00_1702 = create_vector((int) (((long) 0)));
					BgL_arg5034z00_1701 = BgL_v4579z00_1702;
				}
				BGl_rtl_lightfuncallz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5030z00_1697,
					BgL_arg5031z00_1698, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_lightfuncallzd2envz52zzsaw_defsz00,
					BGl_rtl_lightfuncallzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_lightfuncallzf3zd2envz21zzsaw_defsz00, ((long) 360683079),
					BFALSE, BFALSE, BgL_arg5034z00_1701);
			}
			{	/* SawMill/defs.scm 59 */
				obj_t BgL_arg5035z00_1703;

				obj_t BgL_arg5036z00_1704;

				obj_t BgL_arg5039z00_1707;

				BgL_arg5035z00_1703 = CNST_TABLE_REF(((long) 37));
				BgL_arg5036z00_1704 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 59 */
					obj_t BgL_v4580z00_1708;

					BgL_v4580z00_1708 = create_vector((int) (((long) 0)));
					BgL_arg5039z00_1707 = BgL_v4580z00_1708;
				}
				BGl_rtl_funcallz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5035z00_1703,
					BgL_arg5036z00_1704, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_funcallzd2envz52zzsaw_defsz00,
					BGl_rtl_funcallzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_funcallzf3zd2envz21zzsaw_defsz00, ((long) 386075199), BFALSE,
					BFALSE, BgL_arg5039z00_1707);
			}
			{	/* SawMill/defs.scm 60 */
				obj_t BgL_arg5040z00_1709;

				obj_t BgL_arg5041z00_1710;

				obj_t BgL_arg5044z00_1713;

				BgL_arg5040z00_1709 = CNST_TABLE_REF(((long) 38));
				BgL_arg5041z00_1710 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 60 */
					obj_t BgL_v4581z00_1714;

					BgL_v4581z00_1714 = create_vector((int) (((long) 0)));
					BgL_arg5044z00_1713 = BgL_v4581z00_1714;
				}
				BGl_rtl_pragmaz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5040z00_1709,
					BgL_arg5041z00_1710, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_pragmazd2envz52zzsaw_defsz00,
					BGl_rtl_pragmazd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_pragmazf3zd2envz21zzsaw_defsz00, ((long) 348604629), BFALSE,
					BFALSE, BgL_arg5044z00_1713);
			}
			{	/* SawMill/defs.scm 61 */
				obj_t BgL_arg5045z00_1715;

				obj_t BgL_arg5046z00_1716;

				obj_t BgL_arg5049z00_1719;

				BgL_arg5045z00_1715 = CNST_TABLE_REF(((long) 39));
				BgL_arg5046z00_1716 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 61 */
					obj_t BgL_v4582z00_1720;

					BgL_v4582z00_1720 = create_vector((int) (((long) 0)));
					BgL_arg5049z00_1719 = BgL_v4582z00_1720;
				}
				BGl_rtl_castz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5045z00_1715,
					BgL_arg5046z00_1716, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_castzd2envz52zzsaw_defsz00,
					BGl_rtl_castzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_castzf3zd2envz21zzsaw_defsz00, ((long) 337156020), BFALSE,
					BFALSE, BgL_arg5049z00_1719);
			}
			{	/* SawMill/defs.scm 62 */
				obj_t BgL_arg5050z00_1721;

				obj_t BgL_arg5051z00_1722;

				obj_t BgL_arg5054z00_1725;

				BgL_arg5050z00_1721 = CNST_TABLE_REF(((long) 40));
				BgL_arg5051z00_1722 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 62 */
					obj_t BgL_v4583z00_1726;

					BgL_v4583z00_1726 = create_vector((int) (((long) 0)));
					BgL_arg5054z00_1725 = BgL_v4583z00_1726;
				}
				BGl_rtl_cast_nullz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5050z00_1721,
					BgL_arg5051z00_1722, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_cast_nullzd2envz52zzsaw_defsz00,
					BGl_rtl_cast_nullzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_cast_nullzf3zd2envz21zzsaw_defsz00, ((long) 172485470),
					BFALSE, BFALSE, BgL_arg5054z00_1725);
			}
			{	/* SawMill/defs.scm 63 */
				obj_t BgL_arg5055z00_1727;

				obj_t BgL_arg5056z00_1728;

				obj_t BgL_arg5059z00_1731;

				BgL_arg5055z00_1727 = CNST_TABLE_REF(((long) 41));
				BgL_arg5056z00_1728 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 63 */
					obj_t BgL_v4584z00_1732;

					BgL_v4584z00_1732 = create_vector((int) (((long) 0)));
					BgL_arg5059z00_1731 = BgL_v4584z00_1732;
				}
				BGl_rtl_protectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5055z00_1727,
					BgL_arg5056z00_1728, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_protectzd2envz52zzsaw_defsz00,
					BGl_rtl_protectzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_protectzf3zd2envz21zzsaw_defsz00, ((long) 391231667), BFALSE,
					BFALSE, BgL_arg5059z00_1731);
			}
			{	/* SawMill/defs.scm 64 */
				obj_t BgL_arg5060z00_1733;

				obj_t BgL_arg5061z00_1734;

				obj_t BgL_arg5064z00_1737;

				BgL_arg5060z00_1733 = CNST_TABLE_REF(((long) 42));
				BgL_arg5061z00_1734 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.scm 64 */
					obj_t BgL_v4585z00_1738;

					BgL_v4585z00_1738 = create_vector((int) (((long) 0)));
					BgL_arg5064z00_1737 = BgL_v4585z00_1738;
				}
				BGl_rtl_protectedz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5060z00_1733,
					BgL_arg5061z00_1734, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_protectedzd2envz52zzsaw_defsz00,
					BGl_rtl_protectedzd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_protectedzf3zd2envz21zzsaw_defsz00, ((long) 14382148), BFALSE,
					BFALSE, BgL_arg5064z00_1737);
			}
			{	/* SawMill/defs.scm 67 */
				obj_t BgL_arg5065z00_1739;

				obj_t BgL_arg5066z00_1740;

				obj_t BgL_arg5069z00_1743;

				BgL_arg5065z00_1739 = CNST_TABLE_REF(((long) 43));
				BgL_arg5066z00_1740 = BGl_objectz00zz__objectz00;
				{	/* SawMill/defs.scm 67 */
					obj_t BgL_v4586z00_1744;

					BgL_v4586z00_1744 = create_vector((int) (((long) 0)));
					BgL_arg5069z00_1743 = BgL_v4586z00_1744;
				}
				BGl_rtl_insz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5065z00_1739,
					BgL_arg5066z00_1740, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_inszd2envz52zzsaw_defsz00,
					BGl_rtl_inszd2nilzd2envz00zzsaw_defsz00,
					BGl_rtl_inszf3zd2envz21zzsaw_defsz00, ((long) 347356384), BFALSE,
					BFALSE, BgL_arg5069z00_1743);
			}
			{	/* SawMill/defs.scm 75 */
				obj_t BgL_arg5070z00_1745;

				obj_t BgL_arg5071z00_1746;

				obj_t BgL_arg5074z00_1749;

				BgL_arg5070z00_1745 = CNST_TABLE_REF(((long) 44));
				BgL_arg5071z00_1746 = BGl_objectz00zz__objectz00;
				{	/* SawMill/defs.scm 75 */
					obj_t BgL_v4587z00_1750;

					BgL_v4587z00_1750 = create_vector((int) (((long) 0)));
					BgL_arg5074z00_1749 = BgL_v4587z00_1750;
				}
				BGl_blockz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5070z00_1745,
					BgL_arg5071z00_1746, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2blockzd2envz52zzsaw_defsz00,
					BGl_blockzd2nilzd2envz00zzsaw_defsz00,
					BGl_blockzf3zd2envz21zzsaw_defsz00, ((long) 514590776), BFALSE,
					BFALSE, BgL_arg5074z00_1749);
			}
			BGl_z52thezd2blockzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00 = BUNSPEC;
			BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00 = BUNSPEC;
			return (BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00 = BUNSPEC, BUNSPEC);
		}
	}



/* block? */
	BGL_EXPORTED_DEF bool_t BGl_blockzf3zf3zzsaw_defsz00(obj_t BgL_obj4510z00_96)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4510z00_96,
				BGl_blockz00zzsaw_defsz00);
		}
	}



/* _block? */
	obj_t BGl__blockzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6120,
		obj_t BgL_obj4510z00_6121)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4510z00_6121,
					BGl_blockz00zzsaw_defsz00));
		}
	}



/* make-block */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_makezd2blockzd2zzsaw_defsz00(int
		BgL_label4475z00_100, obj_t BgL_preds4476z00_101,
		obj_t BgL_succs4477z00_102, obj_t BgL_first4478z00_103)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{	/* SawMill/defs.scm 75 */
				BgL_blockz00_bglt BgL_new4479z00_3591;

				{	/* SawMill/defs.scm 75 */
					BgL_blockz00_bglt BgL_res5631z00_3596;

					{	/* SawMill/defs.scm 75 */
						BgL_blockz00_bglt BgL_new4491z00_3592;

						BgL_new4491z00_3592 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4491z00_3592),
							BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 75 */
							BgL_objectz00_bglt BgL_auxz00_7858;

							BgL_auxz00_7858 = (BgL_objectz00_bglt) (BgL_new4491z00_3592);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7858, BFALSE);
						}
						BgL_res5631z00_3596 = BgL_new4491z00_3592;
					}
					BgL_new4479z00_3591 = BgL_res5631z00_3596;
				}
				{	/* SawMill/defs.scm 75 */
					BgL_blockz00_bglt BgL_res5632z00_3606;

					{	/* SawMill/defs.scm 75 */
						BgL_blockz00_bglt BgL_new4485z00_3597;

						BgL_new4485z00_3597 = BgL_new4479z00_3591;
						{	/* SawMill/defs.scm 75 */
							int BgL_label4481z00_3602;

							obj_t BgL_preds4482z00_3603;

							obj_t BgL_succs4483z00_3604;

							obj_t BgL_first4484z00_3605;

							BgL_label4481z00_3602 = BgL_label4475z00_100;
							BgL_preds4482z00_3603 = BgL_preds4476z00_101;
							BgL_succs4483z00_3604 = BgL_succs4477z00_102;
							BgL_first4484z00_3605 = BgL_first4478z00_103;
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3597))->BgL_labelz00) =
								((int) BgL_label4481z00_3602), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3597))->BgL_predsz00) =
								((obj_t) BgL_preds4482z00_3603), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3597))->BgL_succsz00) =
								((obj_t) BgL_succs4483z00_3604), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3597))->BgL_firstz00) =
								((obj_t) BgL_first4484z00_3605), BUNSPEC);
							BgL_res5632z00_3606 = BgL_new4485z00_3597;
					}} BgL_res5632z00_3606;
				}
				return BgL_new4479z00_3591;
			}
		}
	}



/* _make-block */
	obj_t BGl__makezd2blockzd2zzsaw_defsz00(obj_t BgL_envz00_6122,
		obj_t BgL_label4475z00_6123, obj_t BgL_preds4476z00_6124,
		obj_t BgL_succs4477z00_6125, obj_t BgL_first4478z00_6126)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			return
				(obj_t) (BGl_makezd2blockzd2zzsaw_defsz00(CINT(BgL_label4475z00_6123),
					BgL_preds4476z00_6124, BgL_succs4477z00_6125, BgL_first4478z00_6126));
		}
	}



/* fill-block! */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_fillzd2blockz12zc0zzsaw_defsz00(BgL_blockz00_bglt BgL_new4485z00_104,
		int BgL_label4481z00_105, obj_t BgL_preds4482z00_106,
		obj_t BgL_succs4483z00_107, obj_t BgL_first4484z00_108)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{	/* SawMill/defs.scm 75 */
				int BgL_label4481z00_6860;

				obj_t BgL_preds4482z00_6861;

				obj_t BgL_succs4483z00_6862;

				obj_t BgL_first4484z00_6863;

				BgL_label4481z00_6860 = BgL_label4481z00_105;
				BgL_preds4482z00_6861 = BgL_preds4482z00_106;
				BgL_succs4483z00_6862 = BgL_succs4483z00_107;
				BgL_first4484z00_6863 = BgL_first4484z00_108;
				((((BgL_blockz00_bglt) CREF(BgL_new4485z00_104))->BgL_labelz00) =
					((int) BgL_label4481z00_6860), BUNSPEC);
				((((BgL_blockz00_bglt) CREF(BgL_new4485z00_104))->BgL_predsz00) =
					((obj_t) BgL_preds4482z00_6861), BUNSPEC);
				((((BgL_blockz00_bglt) CREF(BgL_new4485z00_104))->BgL_succsz00) =
					((obj_t) BgL_succs4483z00_6862), BUNSPEC);
				((((BgL_blockz00_bglt) CREF(BgL_new4485z00_104))->BgL_firstz00) =
					((obj_t) BgL_first4484z00_6863), BUNSPEC);
				return BgL_new4485z00_104;
			}
		}
	}



/* _fill-block! */
	obj_t BGl__fillzd2blockz12zc0zzsaw_defsz00(obj_t BgL_envz00_6127,
		obj_t BgL_new4485z00_6128, obj_t BgL_label4481z00_6129,
		obj_t BgL_preds4482z00_6130, obj_t BgL_succs4483z00_6131,
		obj_t BgL_first4484z00_6132)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{	/* SawMill/defs.scm 75 */
				BgL_blockz00_bglt BgL_auxz00_7872;

				{	/* SawMill/defs.scm 75 */
					BgL_blockz00_bglt BgL_res5946z00_6873;

					{	/* SawMill/defs.scm 75 */
						BgL_blockz00_bglt BgL_new4485z00_6864;

						int BgL_label4481z00_6865;

						obj_t BgL_preds4482z00_6866;

						obj_t BgL_succs4483z00_6867;

						obj_t BgL_first4484z00_6868;

						BgL_new4485z00_6864 = (BgL_blockz00_bglt) (BgL_new4485z00_6128);
						BgL_label4481z00_6865 = CINT(BgL_label4481z00_6129);
						BgL_preds4482z00_6866 = BgL_preds4482z00_6130;
						BgL_succs4483z00_6867 = BgL_succs4483z00_6131;
						BgL_first4484z00_6868 = BgL_first4484z00_6132;
						{	/* SawMill/defs.scm 75 */
							int BgL_label4481z00_6869;

							obj_t BgL_preds4482z00_6870;

							obj_t BgL_succs4483z00_6871;

							obj_t BgL_first4484z00_6872;

							BgL_label4481z00_6869 = BgL_label4481z00_6865;
							BgL_preds4482z00_6870 = BgL_preds4482z00_6866;
							BgL_succs4483z00_6871 = BgL_succs4483z00_6867;
							BgL_first4484z00_6872 = BgL_first4484z00_6868;
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_6864))->BgL_labelz00) =
								((int) BgL_label4481z00_6869), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_6864))->BgL_predsz00) =
								((obj_t) BgL_preds4482z00_6870), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_6864))->BgL_succsz00) =
								((obj_t) BgL_succs4483z00_6871), BUNSPEC);
							((((BgL_blockz00_bglt) CREF(BgL_new4485z00_6864))->BgL_firstz00) =
								((obj_t) BgL_first4484z00_6872), BUNSPEC);
							BgL_res5946z00_6873 = BgL_new4485z00_6864;
					}}
					BgL_auxz00_7872 = BgL_res5946z00_6873;
				}
				return (obj_t) (BgL_auxz00_7872);
			}
		}
	}



/* %allocate-block */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_z52allocatezd2blockz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{	/* SawMill/defs.scm 75 */
				BgL_blockz00_bglt BgL_new4491z00_6874;

				BgL_new4491z00_6874 =
					((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_blockz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4491z00_6874),
					BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 75 */
					BgL_objectz00_bglt BgL_auxz00_7884;

					BgL_auxz00_7884 = (BgL_objectz00_bglt) (BgL_new4491z00_6874);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7884, BFALSE);
				}
				return BgL_new4491z00_6874;
			}
		}
	}



/* _%allocate-block */
	obj_t BGl__z52allocatezd2blockz80zzsaw_defsz00(obj_t BgL_envz00_6118)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{	/* SawMill/defs.scm 75 */
				BgL_blockz00_bglt BgL_auxz00_7887;

				{	/* SawMill/defs.scm 75 */
					BgL_blockz00_bglt BgL_res5947z00_6878;

					{	/* SawMill/defs.scm 75 */
						BgL_blockz00_bglt BgL_new4491z00_6876;

						BgL_new4491z00_6876 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4491z00_6876),
							BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 75 */
							BgL_objectz00_bglt BgL_auxz00_7892;

							BgL_auxz00_7892 = (BgL_objectz00_bglt) (BgL_new4491z00_6876);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7892, BFALSE);
						}
						BgL_res5947z00_6878 = BgL_new4491z00_6876;
					}
					BgL_auxz00_7887 = BgL_res5947z00_6878;
				}
				return (obj_t) (BgL_auxz00_7887);
			}
		}
	}



/* block-nil */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_blockzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			if ((BGl_z52thezd2blockzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 75 */
					{	/* SawMill/defs.scm 75 */
						BgL_blockz00_bglt BgL_res5633z00_3619;

						{	/* SawMill/defs.scm 75 */
							BgL_blockz00_bglt BgL_new4491z00_3615;

							BgL_new4491z00_3615 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4491z00_3615),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 75 */
								BgL_objectz00_bglt BgL_auxz00_7902;

								BgL_auxz00_7902 = (BgL_objectz00_bglt) (BgL_new4491z00_3615);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7902, BFALSE);
							}
							BgL_res5633z00_3619 = BgL_new4491z00_3615;
						}
						BGl_z52thezd2blockzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5633z00_3619);
					}
					{	/* SawMill/defs.scm 75 */
						obj_t BgL_arg5080z00_1762;

						BgL_arg5080z00_1762 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/defs.scm 75 */
							BgL_blockz00_bglt BgL_res5634z00_3629;

							{	/* SawMill/defs.scm 75 */
								BgL_blockz00_bglt BgL_new4485z00_3620;

								int BgL_label4481z00_3621;

								BgL_new4485z00_3620 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2blockzd2nilz52zzsaw_defsz00);
								BgL_label4481z00_3621 = (int) (((long) 0));
								{	/* SawMill/defs.scm 75 */
									int BgL_label4481z00_3625;

									obj_t BgL_preds4482z00_3626;

									obj_t BgL_succs4483z00_3627;

									obj_t BgL_first4484z00_3628;

									BgL_label4481z00_3625 = BgL_label4481z00_3621;
									BgL_preds4482z00_3626 = BNIL;
									BgL_succs4483z00_3627 = BNIL;
									BgL_first4484z00_3628 = BgL_arg5080z00_1762;
									((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3620))->
											BgL_labelz00) = ((int) BgL_label4481z00_3625), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3620))->
											BgL_predsz00) = ((obj_t) BgL_preds4482z00_3626), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3620))->
											BgL_succsz00) = ((obj_t) BgL_succs4483z00_3627), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4485z00_3620))->
											BgL_firstz00) = ((obj_t) BgL_first4484z00_3628), BUNSPEC);
									BgL_res5634z00_3629 = BgL_new4485z00_3620;
							}}
							(obj_t) (BgL_res5634z00_3629);
				}}}
			else
				{	/* SawMill/defs.scm 75 */
					BFALSE;
				}
			return (BgL_blockz00_bglt) (BGl_z52thezd2blockzd2nilz52zzsaw_defsz00);
		}
	}



/* _block-nil */
	obj_t BGl__blockzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6119)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			return (obj_t) (BGl_blockzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_ins? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_inszf3zf3zzsaw_defsz00(obj_t
		BgL_obj4462z00_121)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4462z00_121,
				BGl_rtl_insz00zzsaw_defsz00);
		}
	}



/* _rtl_ins? */
	obj_t BGl__rtl_inszf3zf3zzsaw_defsz00(obj_t BgL_envz00_6116,
		obj_t BgL_obj4462z00_6117)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4462z00_6117,
					BGl_rtl_insz00zzsaw_defsz00));
		}
	}



/* make-rtl_ins */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t
		BgL_loc4420z00_125, obj_t BgL_z52spill4421z52_126,
		obj_t BgL_dest4422z00_127, BgL_rtl_funz00_bglt BgL_fun4423z00_128,
		obj_t BgL_args4424z00_129)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{	/* SawMill/defs.scm 67 */
				BgL_rtl_insz00_bglt BgL_new4425z00_3630;

				{	/* SawMill/defs.scm 67 */
					BgL_rtl_insz00_bglt BgL_res5635z00_3635;

					{	/* SawMill/defs.scm 67 */
						BgL_rtl_insz00_bglt BgL_new4439z00_3631;

						BgL_new4439z00_3631 =
							((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4439z00_3631),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_7924;

							BgL_auxz00_7924 = (BgL_objectz00_bglt) (BgL_new4439z00_3631);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7924, BFALSE);
						}
						BgL_res5635z00_3635 = BgL_new4439z00_3631;
					}
					BgL_new4425z00_3630 = BgL_res5635z00_3635;
				}
				{	/* SawMill/defs.scm 67 */
					BgL_rtl_insz00_bglt BgL_res5636z00_3647;

					{	/* SawMill/defs.scm 67 */
						BgL_rtl_insz00_bglt BgL_new4432z00_3636;

						BgL_new4432z00_3636 = BgL_new4425z00_3630;
						{	/* SawMill/defs.scm 67 */
							obj_t BgL_loc4427z00_3642;

							obj_t BgL_z52spill4428z52_3643;

							obj_t BgL_dest4429z00_3644;

							BgL_rtl_funz00_bglt BgL_fun4430z00_3645;

							obj_t BgL_args4431z00_3646;

							BgL_loc4427z00_3642 = BgL_loc4420z00_125;
							BgL_z52spill4428z52_3643 = BgL_z52spill4421z52_126;
							BgL_dest4429z00_3644 = BgL_dest4422z00_127;
							BgL_fun4430z00_3645 = BgL_fun4423z00_128;
							BgL_args4431z00_3646 = BgL_args4424z00_129;
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3636))->BgL_locz00) =
								((obj_t) BgL_loc4427z00_3642), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3636))->
									BgL_z52spillz52) =
								((obj_t) BgL_z52spill4428z52_3643), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3636))->
									BgL_destz00) = ((obj_t) BgL_dest4429z00_3644), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3636))->BgL_funz00) =
								((BgL_rtl_funz00_bglt) BgL_fun4430z00_3645), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3636))->
									BgL_argsz00) = ((obj_t) BgL_args4431z00_3646), BUNSPEC);
							BgL_res5636z00_3647 = BgL_new4432z00_3636;
					}} BgL_res5636z00_3647;
				}
				return BgL_new4425z00_3630;
			}
		}
	}



/* _make-rtl_ins */
	obj_t BGl__makezd2rtl_inszd2zzsaw_defsz00(obj_t BgL_envz00_6133,
		obj_t BgL_loc4420z00_6134, obj_t BgL_z52spill4421z52_6135,
		obj_t BgL_dest4422z00_6136, obj_t BgL_fun4423z00_6137,
		obj_t BgL_args4424z00_6138)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			return
				(obj_t) (BGl_makezd2rtl_inszd2zzsaw_defsz00(BgL_loc4420z00_6134,
					BgL_z52spill4421z52_6135, BgL_dest4422z00_6136,
					(BgL_rtl_funz00_bglt) (BgL_fun4423z00_6137), BgL_args4424z00_6138));
		}
	}



/* fill-rtl_ins! */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt
		BGl_fillzd2rtl_insz12zc0zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_new4432z00_130, obj_t BgL_loc4427z00_131, obj_t BgL_z52spill4428z52_132,
		obj_t BgL_dest4429z00_133, BgL_rtl_funz00_bglt BgL_fun4430z00_134,
		obj_t BgL_args4431z00_135)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{	/* SawMill/defs.scm 67 */
				obj_t BgL_loc4427z00_6880;

				obj_t BgL_z52spill4428z52_6881;

				obj_t BgL_dest4429z00_6882;

				BgL_rtl_funz00_bglt BgL_fun4430z00_6883;

				obj_t BgL_args4431z00_6884;

				BgL_loc4427z00_6880 = BgL_loc4427z00_131;
				BgL_z52spill4428z52_6881 = BgL_z52spill4428z52_132;
				BgL_dest4429z00_6882 = BgL_dest4429z00_133;
				BgL_fun4430z00_6883 = BgL_fun4430z00_134;
				BgL_args4431z00_6884 = BgL_args4431z00_135;
				((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_130))->BgL_locz00) =
					((obj_t) BgL_loc4427z00_6880), BUNSPEC);
				((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_130))->BgL_z52spillz52) =
					((obj_t) BgL_z52spill4428z52_6881), BUNSPEC);
				((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_130))->BgL_destz00) =
					((obj_t) BgL_dest4429z00_6882), BUNSPEC);
				((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_130))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) BgL_fun4430z00_6883), BUNSPEC);
				((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_130))->BgL_argsz00) =
					((obj_t) BgL_args4431z00_6884), BUNSPEC);
				return BgL_new4432z00_130;
			}
		}
	}



/* _fill-rtl_ins! */
	obj_t BGl__fillzd2rtl_insz12zc0zzsaw_defsz00(obj_t BgL_envz00_6139,
		obj_t BgL_new4432z00_6140, obj_t BgL_loc4427z00_6141,
		obj_t BgL_z52spill4428z52_6142, obj_t BgL_dest4429z00_6143,
		obj_t BgL_fun4430z00_6144, obj_t BgL_args4431z00_6145)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{	/* SawMill/defs.scm 67 */
				BgL_rtl_insz00_bglt BgL_auxz00_7940;

				{	/* SawMill/defs.scm 67 */
					BgL_rtl_insz00_bglt BgL_res5948z00_6896;

					{	/* SawMill/defs.scm 67 */
						BgL_rtl_insz00_bglt BgL_new4432z00_6885;

						obj_t BgL_z52spill4428z52_6887;

						BgL_rtl_funz00_bglt BgL_fun4430z00_6889;

						obj_t BgL_args4431z00_6890;

						BgL_new4432z00_6885 = (BgL_rtl_insz00_bglt) (BgL_new4432z00_6140);
						BgL_z52spill4428z52_6887 = BgL_z52spill4428z52_6142;
						BgL_fun4430z00_6889 = (BgL_rtl_funz00_bglt) (BgL_fun4430z00_6144);
						BgL_args4431z00_6890 = BgL_args4431z00_6145;
						{	/* SawMill/defs.scm 67 */
							obj_t BgL_loc4427z00_6891;

							obj_t BgL_z52spill4428z52_6892;

							obj_t BgL_dest4429z00_6893;

							BgL_rtl_funz00_bglt BgL_fun4430z00_6894;

							obj_t BgL_args4431z00_6895;

							BgL_loc4427z00_6891 = BgL_loc4427z00_6141;
							BgL_z52spill4428z52_6892 = BgL_z52spill4428z52_6887;
							BgL_dest4429z00_6893 = BgL_dest4429z00_6143;
							BgL_fun4430z00_6894 = BgL_fun4430z00_6889;
							BgL_args4431z00_6895 = BgL_args4431z00_6890;
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_6885))->BgL_locz00) =
								((obj_t) BgL_loc4427z00_6891), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_6885))->
									BgL_z52spillz52) =
								((obj_t) BgL_z52spill4428z52_6892), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_6885))->
									BgL_destz00) = ((obj_t) BgL_dest4429z00_6893), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_6885))->BgL_funz00) =
								((BgL_rtl_funz00_bglt) BgL_fun4430z00_6894), BUNSPEC);
							((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_6885))->
									BgL_argsz00) = ((obj_t) BgL_args4431z00_6895), BUNSPEC);
							BgL_res5948z00_6896 = BgL_new4432z00_6885;
						}
					}
					BgL_auxz00_7940 = BgL_res5948z00_6896;
				}
				return (obj_t) (BgL_auxz00_7940);
			}
		}
	}



/* %allocate-rtl_ins */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt
		BGl_z52allocatezd2rtl_insz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{	/* SawMill/defs.scm 67 */
				BgL_rtl_insz00_bglt BgL_new4439z00_6897;

				BgL_new4439z00_6897 =
					((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_insz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4439z00_6897),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 67 */
					BgL_objectz00_bglt BgL_auxz00_7953;

					BgL_auxz00_7953 = (BgL_objectz00_bglt) (BgL_new4439z00_6897);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7953, BFALSE);
				}
				return BgL_new4439z00_6897;
			}
		}
	}



/* _%allocate-rtl_ins */
	obj_t BGl__z52allocatezd2rtl_insz80zzsaw_defsz00(obj_t BgL_envz00_6114)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{	/* SawMill/defs.scm 67 */
				BgL_rtl_insz00_bglt BgL_auxz00_7956;

				{	/* SawMill/defs.scm 67 */
					BgL_rtl_insz00_bglt BgL_res5949z00_6901;

					{	/* SawMill/defs.scm 67 */
						BgL_rtl_insz00_bglt BgL_new4439z00_6899;

						BgL_new4439z00_6899 =
							((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4439z00_6899),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_7961;

							BgL_auxz00_7961 = (BgL_objectz00_bglt) (BgL_new4439z00_6899);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7961, BFALSE);
						}
						BgL_res5949z00_6901 = BgL_new4439z00_6899;
					}
					BgL_auxz00_7956 = BgL_res5949z00_6901;
				}
				return (obj_t) (BgL_auxz00_7956);
			}
		}
	}



/* rtl_ins-nil */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt BGl_rtl_inszd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			if ((BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 67 */
					{	/* SawMill/defs.scm 67 */
						BgL_rtl_insz00_bglt BgL_res5637z00_3661;

						{	/* SawMill/defs.scm 67 */
							BgL_rtl_insz00_bglt BgL_new4439z00_3657;

							BgL_new4439z00_3657 =
								((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4439z00_3657),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 67 */
								BgL_objectz00_bglt BgL_auxz00_7971;

								BgL_auxz00_7971 = (BgL_objectz00_bglt) (BgL_new4439z00_3657);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7971, BFALSE);
							}
							BgL_res5637z00_3661 = BgL_new4439z00_3657;
						}
						BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5637z00_3661);
					}
					{	/* SawMill/defs.scm 67 */
						BgL_rtl_funz00_bglt BgL_arg5084z00_1773;

						BgL_arg5084z00_1773 = BGl_rtl_funzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/defs.scm 67 */
							BgL_rtl_insz00_bglt BgL_res5638z00_3673;

							{	/* SawMill/defs.scm 67 */
								BgL_rtl_insz00_bglt BgL_new4432z00_3662;

								BgL_new4432z00_3662 =
									(BgL_rtl_insz00_bglt)
									(BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 67 */
									obj_t BgL_loc4427z00_3668;

									obj_t BgL_z52spill4428z52_3669;

									obj_t BgL_dest4429z00_3670;

									BgL_rtl_funz00_bglt BgL_fun4430z00_3671;

									obj_t BgL_args4431z00_3672;

									BgL_loc4427z00_3668 = BUNSPEC;
									BgL_z52spill4428z52_3669 = BNIL;
									BgL_dest4429z00_3670 = BUNSPEC;
									BgL_fun4430z00_3671 = BgL_arg5084z00_1773;
									BgL_args4431z00_3672 = BNIL;
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3662))->
											BgL_locz00) = ((obj_t) BgL_loc4427z00_3668), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3662))->
											BgL_z52spillz52) =
										((obj_t) BgL_z52spill4428z52_3669), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3662))->
											BgL_destz00) = ((obj_t) BgL_dest4429z00_3670), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3662))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_fun4430z00_3671), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4432z00_3662))->
											BgL_argsz00) = ((obj_t) BgL_args4431z00_3672), BUNSPEC);
									BgL_res5638z00_3673 = BgL_new4432z00_3662;
							}}
							(obj_t) (BgL_res5638z00_3673);
				}}}
			else
				{	/* SawMill/defs.scm 67 */
					BFALSE;
				}
			return (BgL_rtl_insz00_bglt) (BGl_z52thezd2rtl_inszd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_ins-nil */
	obj_t BGl__rtl_inszd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6115)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			return (obj_t) (BGl_rtl_inszd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_protected? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_protectedzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4404z00_151)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4404z00_151,
				BGl_rtl_protectedz00zzsaw_defsz00);
		}
	}



/* _rtl_protected? */
	obj_t BGl__rtl_protectedzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6112,
		obj_t BgL_obj4404z00_6113)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4404z00_6113,
					BGl_rtl_protectedz00zzsaw_defsz00));
		}
	}



/* make-rtl_protected */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_makezd2rtl_protectedzd2zzsaw_defsz00(obj_t BgL_loc4390z00_155)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectedz00_bglt BgL_new4391z00_3674;

				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectedz00_bglt BgL_res5639z00_3679;

					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_new4397z00_3675;

						BgL_new4397z00_3675 =
							((BgL_rtl_protectedz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_protectedz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4397z00_3675),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_protectedz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_7993;

							BgL_auxz00_7993 = (BgL_objectz00_bglt) (BgL_new4397z00_3675);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7993, BFALSE);
						}
						BgL_res5639z00_3679 = BgL_new4397z00_3675;
					}
					BgL_new4391z00_3674 = BgL_res5639z00_3679;
				}
				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectedz00_bglt BgL_res5640z00_3683;

					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_new4394z00_3680;

						BgL_new4394z00_3680 = BgL_new4391z00_3674;
						{	/* SawMill/defs.scm 64 */
							obj_t BgL_loc4393z00_3682;

							BgL_loc4393z00_3682 = BgL_loc4390z00_155;
							((((BgL_rtl_protectedz00_bglt) CREF(BgL_new4394z00_3680))->
									BgL_locz00) = ((obj_t) BgL_loc4393z00_3682), BUNSPEC);
							BgL_res5640z00_3683 = BgL_new4394z00_3680;
					}} BgL_res5640z00_3683;
				}
				return BgL_new4391z00_3674;
			}
		}
	}



/* _make-rtl_protected */
	obj_t BGl__makezd2rtl_protectedzd2zzsaw_defsz00(obj_t BgL_envz00_6146,
		obj_t BgL_loc4390z00_6147)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			return
				(obj_t) (BGl_makezd2rtl_protectedzd2zzsaw_defsz00(BgL_loc4390z00_6147));
		}
	}



/* fill-rtl_protected! */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_fillzd2rtl_protectedz12zc0zzsaw_defsz00(BgL_rtl_protectedz00_bglt
		BgL_new4394z00_156, obj_t BgL_loc4393z00_157)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				obj_t BgL_loc4393z00_6903;

				BgL_loc4393z00_6903 = BgL_loc4393z00_157;
				((((BgL_rtl_protectedz00_bglt) CREF(BgL_new4394z00_156))->BgL_locz00) =
					((obj_t) BgL_loc4393z00_6903), BUNSPEC);
				return BgL_new4394z00_156;
			}
		}
	}



/* _fill-rtl_protected! */
	obj_t BGl__fillzd2rtl_protectedz12zc0zzsaw_defsz00(obj_t BgL_envz00_6148,
		obj_t BgL_new4394z00_6149, obj_t BgL_loc4393z00_6150)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectedz00_bglt BgL_auxz00_8000;

				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectedz00_bglt BgL_res5950z00_6907;

					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_new4394z00_6904;

						BgL_new4394z00_6904 =
							(BgL_rtl_protectedz00_bglt) (BgL_new4394z00_6149);
						{	/* SawMill/defs.scm 64 */
							obj_t BgL_loc4393z00_6906;

							BgL_loc4393z00_6906 = BgL_loc4393z00_6150;
							((((BgL_rtl_protectedz00_bglt) CREF(BgL_new4394z00_6904))->
									BgL_locz00) = ((obj_t) BgL_loc4393z00_6906), BUNSPEC);
							BgL_res5950z00_6907 = BgL_new4394z00_6904;
						}
					}
					BgL_auxz00_8000 = BgL_res5950z00_6907;
				}
				return (obj_t) (BgL_auxz00_8000);
			}
		}
	}



/* %allocate-rtl_protected */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_z52allocatezd2rtl_protectedz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectedz00_bglt BgL_new4397z00_6908;

				BgL_new4397z00_6908 =
					((BgL_rtl_protectedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_protectedz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4397z00_6908),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_protectedz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 64 */
					BgL_objectz00_bglt BgL_auxz00_8008;

					BgL_auxz00_8008 = (BgL_objectz00_bglt) (BgL_new4397z00_6908);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8008, BFALSE);
				}
				return BgL_new4397z00_6908;
			}
		}
	}



/* _%allocate-rtl_protected */
	obj_t BGl__z52allocatezd2rtl_protectedz80zzsaw_defsz00(obj_t BgL_envz00_6110)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectedz00_bglt BgL_auxz00_8011;

				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectedz00_bglt BgL_res5951z00_6912;

					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_new4397z00_6910;

						BgL_new4397z00_6910 =
							((BgL_rtl_protectedz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_protectedz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4397z00_6910),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_protectedz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_8016;

							BgL_auxz00_8016 = (BgL_objectz00_bglt) (BgL_new4397z00_6910);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8016, BFALSE);
						}
						BgL_res5951z00_6912 = BgL_new4397z00_6910;
					}
					BgL_auxz00_8011 = BgL_res5951z00_6912;
				}
				return (obj_t) (BgL_auxz00_8011);
			}
		}
	}



/* rtl_protected-nil */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_rtl_protectedzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			if ((BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 64 */
					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_res5641z00_3693;

						{	/* SawMill/defs.scm 64 */
							BgL_rtl_protectedz00_bglt BgL_new4397z00_3689;

							BgL_new4397z00_3689 =
								((BgL_rtl_protectedz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_protectedz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4397z00_3689),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_protectedz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 64 */
								BgL_objectz00_bglt BgL_auxz00_8026;

								BgL_auxz00_8026 = (BgL_objectz00_bglt) (BgL_new4397z00_3689);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8026, BFALSE);
							}
							BgL_res5641z00_3693 = BgL_new4397z00_3689;
						}
						BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5641z00_3693);
					}
					{	/* SawMill/defs.scm 64 */
						BgL_rtl_protectedz00_bglt BgL_res5642z00_3697;

						{	/* SawMill/defs.scm 64 */
							BgL_rtl_protectedz00_bglt BgL_new4394z00_3694;

							BgL_new4394z00_3694 =
								(BgL_rtl_protectedz00_bglt)
								(BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 64 */
								obj_t BgL_loc4393z00_3696;

								BgL_loc4393z00_3696 = BUNSPEC;
								((((BgL_rtl_protectedz00_bglt) CREF(BgL_new4394z00_3694))->
										BgL_locz00) = ((obj_t) BgL_loc4393z00_3696), BUNSPEC);
								BgL_res5642z00_3697 = BgL_new4394z00_3694;
						}}
						(obj_t) (BgL_res5642z00_3697);
				}}
			else
				{	/* SawMill/defs.scm 64 */
					BFALSE;
				}
			return
				(BgL_rtl_protectedz00_bglt)
				(BGl_z52thezd2rtl_protectedzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_protected-nil */
	obj_t BGl__rtl_protectedzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6111)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			return (obj_t) (BGl_rtl_protectedzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_protect? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_protectzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4386z00_158)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4386z00_158,
				BGl_rtl_protectz00zzsaw_defsz00);
		}
	}



/* _rtl_protect? */
	obj_t BGl__rtl_protectzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6108,
		obj_t BgL_obj4386z00_6109)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4386z00_6109,
					BGl_rtl_protectz00zzsaw_defsz00));
		}
	}



/* make-rtl_protect */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_makezd2rtl_protectzd2zzsaw_defsz00(obj_t BgL_loc4370z00_162)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_protectz00_bglt BgL_new4371z00_3698;

				{	/* SawMill/defs.scm 63 */
					BgL_rtl_protectz00_bglt BgL_res5643z00_3703;

					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_new4377z00_3699;

						BgL_new4377z00_3699 =
							((BgL_rtl_protectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_protectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4377z00_3699),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_protectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 63 */
							BgL_objectz00_bglt BgL_auxz00_8043;

							BgL_auxz00_8043 = (BgL_objectz00_bglt) (BgL_new4377z00_3699);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8043, BFALSE);
						}
						BgL_res5643z00_3703 = BgL_new4377z00_3699;
					}
					BgL_new4371z00_3698 = BgL_res5643z00_3703;
				}
				{	/* SawMill/defs.scm 63 */
					BgL_rtl_protectz00_bglt BgL_res5644z00_3707;

					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_new4374z00_3704;

						BgL_new4374z00_3704 = BgL_new4371z00_3698;
						{	/* SawMill/defs.scm 63 */
							obj_t BgL_loc4373z00_3706;

							BgL_loc4373z00_3706 = BgL_loc4370z00_162;
							((((BgL_rtl_protectz00_bglt) CREF(BgL_new4374z00_3704))->
									BgL_locz00) = ((obj_t) BgL_loc4373z00_3706), BUNSPEC);
							BgL_res5644z00_3707 = BgL_new4374z00_3704;
					}} BgL_res5644z00_3707;
				}
				return BgL_new4371z00_3698;
			}
		}
	}



/* _make-rtl_protect */
	obj_t BGl__makezd2rtl_protectzd2zzsaw_defsz00(obj_t BgL_envz00_6151,
		obj_t BgL_loc4370z00_6152)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			return
				(obj_t) (BGl_makezd2rtl_protectzd2zzsaw_defsz00(BgL_loc4370z00_6152));
		}
	}



/* fill-rtl_protect! */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_fillzd2rtl_protectz12zc0zzsaw_defsz00(BgL_rtl_protectz00_bglt
		BgL_new4374z00_163, obj_t BgL_loc4373z00_164)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				obj_t BgL_loc4373z00_6914;

				BgL_loc4373z00_6914 = BgL_loc4373z00_164;
				((((BgL_rtl_protectz00_bglt) CREF(BgL_new4374z00_163))->BgL_locz00) =
					((obj_t) BgL_loc4373z00_6914), BUNSPEC);
				return BgL_new4374z00_163;
			}
		}
	}



/* _fill-rtl_protect! */
	obj_t BGl__fillzd2rtl_protectz12zc0zzsaw_defsz00(obj_t BgL_envz00_6153,
		obj_t BgL_new4374z00_6154, obj_t BgL_loc4373z00_6155)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_protectz00_bglt BgL_auxz00_8050;

				{	/* SawMill/defs.scm 63 */
					BgL_rtl_protectz00_bglt BgL_res5952z00_6918;

					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_new4374z00_6915;

						BgL_new4374z00_6915 =
							(BgL_rtl_protectz00_bglt) (BgL_new4374z00_6154);
						{	/* SawMill/defs.scm 63 */
							obj_t BgL_loc4373z00_6917;

							BgL_loc4373z00_6917 = BgL_loc4373z00_6155;
							((((BgL_rtl_protectz00_bglt) CREF(BgL_new4374z00_6915))->
									BgL_locz00) = ((obj_t) BgL_loc4373z00_6917), BUNSPEC);
							BgL_res5952z00_6918 = BgL_new4374z00_6915;
						}
					}
					BgL_auxz00_8050 = BgL_res5952z00_6918;
				}
				return (obj_t) (BgL_auxz00_8050);
			}
		}
	}



/* %allocate-rtl_protect */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_z52allocatezd2rtl_protectz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_protectz00_bglt BgL_new4377z00_6919;

				BgL_new4377z00_6919 =
					((BgL_rtl_protectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_protectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4377z00_6919),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_protectz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 63 */
					BgL_objectz00_bglt BgL_auxz00_8058;

					BgL_auxz00_8058 = (BgL_objectz00_bglt) (BgL_new4377z00_6919);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8058, BFALSE);
				}
				return BgL_new4377z00_6919;
			}
		}
	}



/* _%allocate-rtl_protect */
	obj_t BGl__z52allocatezd2rtl_protectz80zzsaw_defsz00(obj_t BgL_envz00_6106)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_protectz00_bglt BgL_auxz00_8061;

				{	/* SawMill/defs.scm 63 */
					BgL_rtl_protectz00_bglt BgL_res5953z00_6923;

					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_new4377z00_6921;

						BgL_new4377z00_6921 =
							((BgL_rtl_protectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_protectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4377z00_6921),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_protectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 63 */
							BgL_objectz00_bglt BgL_auxz00_8066;

							BgL_auxz00_8066 = (BgL_objectz00_bglt) (BgL_new4377z00_6921);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8066, BFALSE);
						}
						BgL_res5953z00_6923 = BgL_new4377z00_6921;
					}
					BgL_auxz00_8061 = BgL_res5953z00_6923;
				}
				return (obj_t) (BgL_auxz00_8061);
			}
		}
	}



/* rtl_protect-nil */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_rtl_protectzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			if ((BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 63 */
					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_res5645z00_3717;

						{	/* SawMill/defs.scm 63 */
							BgL_rtl_protectz00_bglt BgL_new4377z00_3713;

							BgL_new4377z00_3713 =
								((BgL_rtl_protectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_protectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4377z00_3713),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_protectz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 63 */
								BgL_objectz00_bglt BgL_auxz00_8076;

								BgL_auxz00_8076 = (BgL_objectz00_bglt) (BgL_new4377z00_3713);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8076, BFALSE);
							}
							BgL_res5645z00_3717 = BgL_new4377z00_3713;
						}
						BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5645z00_3717);
					}
					{	/* SawMill/defs.scm 63 */
						BgL_rtl_protectz00_bglt BgL_res5646z00_3721;

						{	/* SawMill/defs.scm 63 */
							BgL_rtl_protectz00_bglt BgL_new4374z00_3718;

							BgL_new4374z00_3718 =
								(BgL_rtl_protectz00_bglt)
								(BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 63 */
								obj_t BgL_loc4373z00_3720;

								BgL_loc4373z00_3720 = BUNSPEC;
								((((BgL_rtl_protectz00_bglt) CREF(BgL_new4374z00_3718))->
										BgL_locz00) = ((obj_t) BgL_loc4373z00_3720), BUNSPEC);
								BgL_res5646z00_3721 = BgL_new4374z00_3718;
						}}
						(obj_t) (BgL_res5646z00_3721);
				}}
			else
				{	/* SawMill/defs.scm 63 */
					BFALSE;
				}
			return
				(BgL_rtl_protectz00_bglt)
				(BGl_z52thezd2rtl_protectzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_protect-nil */
	obj_t BGl__rtl_protectzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6107)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			return (obj_t) (BGl_rtl_protectzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_cast_null? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4366z00_165)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4366z00_165,
				BGl_rtl_cast_nullz00zzsaw_defsz00);
		}
	}



/* _rtl_cast_null? */
	obj_t BGl__rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6104,
		obj_t BgL_obj4366z00_6105)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4366z00_6105,
					BGl_rtl_cast_nullz00zzsaw_defsz00));
		}
	}



/* make-rtl_cast_null */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t BgL_loc4345z00_169,
		BgL_typez00_bglt BgL_type4346z00_170)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_cast_nullz00_bglt BgL_new4347z00_3722;

				{	/* SawMill/defs.scm 62 */
					BgL_rtl_cast_nullz00_bglt BgL_res5647z00_3727;

					{	/* SawMill/defs.scm 62 */
						BgL_rtl_cast_nullz00_bglt BgL_new4355z00_3723;

						BgL_new4355z00_3723 =
							((BgL_rtl_cast_nullz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_cast_nullz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4355z00_3723),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_cast_nullz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_8093;

							BgL_auxz00_8093 = (BgL_objectz00_bglt) (BgL_new4355z00_3723);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8093, BFALSE);
						}
						BgL_res5647z00_3727 = BgL_new4355z00_3723;
					}
					BgL_new4347z00_3722 = BgL_res5647z00_3727;
				}
				{	/* SawMill/defs.scm 62 */
					BgL_rtl_cast_nullz00_bglt BgL_res5648z00_3733;

					{	/* SawMill/defs.scm 62 */
						BgL_rtl_cast_nullz00_bglt BgL_new4351z00_3728;

						BgL_new4351z00_3728 = BgL_new4347z00_3722;
						{	/* SawMill/defs.scm 62 */
							obj_t BgL_loc4349z00_3731;

							BgL_typez00_bglt BgL_type4350z00_3732;

							BgL_loc4349z00_3731 = BgL_loc4345z00_169;
							BgL_type4350z00_3732 = BgL_type4346z00_170;
							((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_3728))->
									BgL_locz00) = ((obj_t) BgL_loc4349z00_3731), BUNSPEC);
							((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_3728))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4350z00_3732), BUNSPEC);
							BgL_res5648z00_3733 = BgL_new4351z00_3728;
					}} BgL_res5648z00_3733;
				}
				return BgL_new4347z00_3722;
			}
		}
	}



/* _make-rtl_cast_null */
	obj_t BGl__makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t BgL_envz00_6156,
		obj_t BgL_loc4345z00_6157, obj_t BgL_type4346z00_6158)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			return
				(obj_t) (BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(BgL_loc4345z00_6157,
					(BgL_typez00_bglt) (BgL_type4346z00_6158)));
		}
	}



/* fill-rtl_cast_null! */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_fillzd2rtl_cast_nullz12zc0zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt
		BgL_new4351z00_171, obj_t BgL_loc4349z00_172,
		BgL_typez00_bglt BgL_type4350z00_173)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				obj_t BgL_loc4349z00_6925;

				BgL_typez00_bglt BgL_type4350z00_6926;

				BgL_loc4349z00_6925 = BgL_loc4349z00_172;
				BgL_type4350z00_6926 = BgL_type4350z00_173;
				((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_171))->BgL_locz00) =
					((obj_t) BgL_loc4349z00_6925), BUNSPEC);
				((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_171))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4350z00_6926), BUNSPEC);
				return BgL_new4351z00_171;
			}
		}
	}



/* _fill-rtl_cast_null! */
	obj_t BGl__fillzd2rtl_cast_nullz12zc0zzsaw_defsz00(obj_t BgL_envz00_6159,
		obj_t BgL_new4351z00_6160, obj_t BgL_loc4349z00_6161,
		obj_t BgL_type4350z00_6162)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_cast_nullz00_bglt BgL_auxz00_8103;

				{	/* SawMill/defs.scm 62 */
					BgL_rtl_cast_nullz00_bglt BgL_res5954z00_6932;

					{	/* SawMill/defs.scm 62 */
						BgL_rtl_cast_nullz00_bglt BgL_new4351z00_6927;

						BgL_typez00_bglt BgL_type4350z00_6929;

						BgL_new4351z00_6927 =
							(BgL_rtl_cast_nullz00_bglt) (BgL_new4351z00_6160);
						BgL_type4350z00_6929 = (BgL_typez00_bglt) (BgL_type4350z00_6162);
						{	/* SawMill/defs.scm 62 */
							obj_t BgL_loc4349z00_6930;

							BgL_typez00_bglt BgL_type4350z00_6931;

							BgL_loc4349z00_6930 = BgL_loc4349z00_6161;
							BgL_type4350z00_6931 = BgL_type4350z00_6929;
							((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_6927))->
									BgL_locz00) = ((obj_t) BgL_loc4349z00_6930), BUNSPEC);
							((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_6927))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4350z00_6931), BUNSPEC);
							BgL_res5954z00_6932 = BgL_new4351z00_6927;
						}
					}
					BgL_auxz00_8103 = BgL_res5954z00_6932;
				}
				return (obj_t) (BgL_auxz00_8103);
			}
		}
	}



/* %allocate-rtl_cast_null */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_z52allocatezd2rtl_cast_nullz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_cast_nullz00_bglt BgL_new4355z00_6933;

				BgL_new4355z00_6933 =
					((BgL_rtl_cast_nullz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_cast_nullz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4355z00_6933),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_cast_nullz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 62 */
					BgL_objectz00_bglt BgL_auxz00_8113;

					BgL_auxz00_8113 = (BgL_objectz00_bglt) (BgL_new4355z00_6933);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8113, BFALSE);
				}
				return BgL_new4355z00_6933;
			}
		}
	}



/* _%allocate-rtl_cast_null */
	obj_t BGl__z52allocatezd2rtl_cast_nullz80zzsaw_defsz00(obj_t BgL_envz00_6102)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_cast_nullz00_bglt BgL_auxz00_8116;

				{	/* SawMill/defs.scm 62 */
					BgL_rtl_cast_nullz00_bglt BgL_res5955z00_6937;

					{	/* SawMill/defs.scm 62 */
						BgL_rtl_cast_nullz00_bglt BgL_new4355z00_6935;

						BgL_new4355z00_6935 =
							((BgL_rtl_cast_nullz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_cast_nullz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4355z00_6935),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_cast_nullz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_8121;

							BgL_auxz00_8121 = (BgL_objectz00_bglt) (BgL_new4355z00_6935);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8121, BFALSE);
						}
						BgL_res5955z00_6937 = BgL_new4355z00_6935;
					}
					BgL_auxz00_8116 = BgL_res5955z00_6937;
				}
				return (obj_t) (BgL_auxz00_8116);
			}
		}
	}



/* rtl_cast_null-nil */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			if ((BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 62 */
					{	/* SawMill/defs.scm 62 */
						BgL_rtl_cast_nullz00_bglt BgL_res5649z00_3744;

						{	/* SawMill/defs.scm 62 */
							BgL_rtl_cast_nullz00_bglt BgL_new4355z00_3740;

							BgL_new4355z00_3740 =
								((BgL_rtl_cast_nullz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_cast_nullz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4355z00_3740),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_cast_nullz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 62 */
								BgL_objectz00_bglt BgL_auxz00_8131;

								BgL_auxz00_8131 = (BgL_objectz00_bglt) (BgL_new4355z00_3740);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8131, BFALSE);
							}
							BgL_res5649z00_3744 = BgL_new4355z00_3740;
						}
						BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5649z00_3744);
					}
					{	/* SawMill/defs.scm 62 */
						BgL_typez00_bglt BgL_arg5092z00_1791;

						BgL_arg5092z00_1791 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 62 */
							BgL_rtl_cast_nullz00_bglt BgL_res5650z00_3750;

							{	/* SawMill/defs.scm 62 */
								BgL_rtl_cast_nullz00_bglt BgL_new4351z00_3745;

								BgL_new4351z00_3745 =
									(BgL_rtl_cast_nullz00_bglt)
									(BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 62 */
									obj_t BgL_loc4349z00_3748;

									BgL_typez00_bglt BgL_type4350z00_3749;

									BgL_loc4349z00_3748 = BUNSPEC;
									BgL_type4350z00_3749 = BgL_arg5092z00_1791;
									((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_3745))->
											BgL_locz00) = ((obj_t) BgL_loc4349z00_3748), BUNSPEC);
									((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_new4351z00_3745))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4350z00_3749), BUNSPEC);
									BgL_res5650z00_3750 = BgL_new4351z00_3745;
							}}
							(obj_t) (BgL_res5650z00_3750);
				}}}
			else
				{	/* SawMill/defs.scm 62 */
					BFALSE;
				}
			return
				(BgL_rtl_cast_nullz00_bglt)
				(BGl_z52thezd2rtl_cast_nullzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_cast_null-nil */
	obj_t BGl__rtl_cast_nullzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6103)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			return (obj_t) (BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_cast? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_castzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4338z00_177)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4338z00_177,
				BGl_rtl_castz00zzsaw_defsz00);
		}
	}



/* _rtl_cast? */
	obj_t BGl__rtl_castzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6100,
		obj_t BgL_obj4338z00_6101)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4338z00_6101,
					BGl_rtl_castz00zzsaw_defsz00));
		}
	}



/* make-rtl_cast */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt
		BGl_makezd2rtl_castzd2zzsaw_defsz00(obj_t BgL_loc4317z00_181,
		BgL_typez00_bglt BgL_type4318z00_182)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_castz00_bglt BgL_new4319z00_3751;

				{	/* SawMill/defs.scm 61 */
					BgL_rtl_castz00_bglt BgL_res5651z00_3756;

					{	/* SawMill/defs.scm 61 */
						BgL_rtl_castz00_bglt BgL_new4327z00_3752;

						BgL_new4327z00_3752 =
							((BgL_rtl_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_castz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4327z00_3752),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_castz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 61 */
							BgL_objectz00_bglt BgL_auxz00_8150;

							BgL_auxz00_8150 = (BgL_objectz00_bglt) (BgL_new4327z00_3752);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8150, BFALSE);
						}
						BgL_res5651z00_3756 = BgL_new4327z00_3752;
					}
					BgL_new4319z00_3751 = BgL_res5651z00_3756;
				}
				{	/* SawMill/defs.scm 61 */
					BgL_rtl_castz00_bglt BgL_res5652z00_3762;

					{	/* SawMill/defs.scm 61 */
						BgL_rtl_castz00_bglt BgL_new4323z00_3757;

						BgL_new4323z00_3757 = BgL_new4319z00_3751;
						{	/* SawMill/defs.scm 61 */
							obj_t BgL_loc4321z00_3760;

							BgL_typez00_bglt BgL_type4322z00_3761;

							BgL_loc4321z00_3760 = BgL_loc4317z00_181;
							BgL_type4322z00_3761 = BgL_type4318z00_182;
							((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_3757))->
									BgL_locz00) = ((obj_t) BgL_loc4321z00_3760), BUNSPEC);
							((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_3757))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4322z00_3761), BUNSPEC);
							BgL_res5652z00_3762 = BgL_new4323z00_3757;
					}} BgL_res5652z00_3762;
				}
				return BgL_new4319z00_3751;
			}
		}
	}



/* _make-rtl_cast */
	obj_t BGl__makezd2rtl_castzd2zzsaw_defsz00(obj_t BgL_envz00_6163,
		obj_t BgL_loc4317z00_6164, obj_t BgL_type4318z00_6165)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			return
				(obj_t) (BGl_makezd2rtl_castzd2zzsaw_defsz00(BgL_loc4317z00_6164,
					(BgL_typez00_bglt) (BgL_type4318z00_6165)));
		}
	}



/* fill-rtl_cast! */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt
		BGl_fillzd2rtl_castz12zc0zzsaw_defsz00(BgL_rtl_castz00_bglt
		BgL_new4323z00_183, obj_t BgL_loc4321z00_184,
		BgL_typez00_bglt BgL_type4322z00_185)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				obj_t BgL_loc4321z00_6939;

				BgL_typez00_bglt BgL_type4322z00_6940;

				BgL_loc4321z00_6939 = BgL_loc4321z00_184;
				BgL_type4322z00_6940 = BgL_type4322z00_185;
				((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_183))->BgL_locz00) =
					((obj_t) BgL_loc4321z00_6939), BUNSPEC);
				((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_183))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4322z00_6940), BUNSPEC);
				return BgL_new4323z00_183;
			}
		}
	}



/* _fill-rtl_cast! */
	obj_t BGl__fillzd2rtl_castz12zc0zzsaw_defsz00(obj_t BgL_envz00_6166,
		obj_t BgL_new4323z00_6167, obj_t BgL_loc4321z00_6168,
		obj_t BgL_type4322z00_6169)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_castz00_bglt BgL_auxz00_8160;

				{	/* SawMill/defs.scm 61 */
					BgL_rtl_castz00_bglt BgL_res5956z00_6946;

					{	/* SawMill/defs.scm 61 */
						BgL_rtl_castz00_bglt BgL_new4323z00_6941;

						BgL_typez00_bglt BgL_type4322z00_6943;

						BgL_new4323z00_6941 = (BgL_rtl_castz00_bglt) (BgL_new4323z00_6167);
						BgL_type4322z00_6943 = (BgL_typez00_bglt) (BgL_type4322z00_6169);
						{	/* SawMill/defs.scm 61 */
							obj_t BgL_loc4321z00_6944;

							BgL_typez00_bglt BgL_type4322z00_6945;

							BgL_loc4321z00_6944 = BgL_loc4321z00_6168;
							BgL_type4322z00_6945 = BgL_type4322z00_6943;
							((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_6941))->
									BgL_locz00) = ((obj_t) BgL_loc4321z00_6944), BUNSPEC);
							((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_6941))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4322z00_6945), BUNSPEC);
							BgL_res5956z00_6946 = BgL_new4323z00_6941;
						}
					}
					BgL_auxz00_8160 = BgL_res5956z00_6946;
				}
				return (obj_t) (BgL_auxz00_8160);
			}
		}
	}



/* %allocate-rtl_cast */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt
		BGl_z52allocatezd2rtl_castz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_castz00_bglt BgL_new4327z00_6947;

				BgL_new4327z00_6947 =
					((BgL_rtl_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_castz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4327z00_6947),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_castz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 61 */
					BgL_objectz00_bglt BgL_auxz00_8170;

					BgL_auxz00_8170 = (BgL_objectz00_bglt) (BgL_new4327z00_6947);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8170, BFALSE);
				}
				return BgL_new4327z00_6947;
			}
		}
	}



/* _%allocate-rtl_cast */
	obj_t BGl__z52allocatezd2rtl_castz80zzsaw_defsz00(obj_t BgL_envz00_6098)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_castz00_bglt BgL_auxz00_8173;

				{	/* SawMill/defs.scm 61 */
					BgL_rtl_castz00_bglt BgL_res5957z00_6951;

					{	/* SawMill/defs.scm 61 */
						BgL_rtl_castz00_bglt BgL_new4327z00_6949;

						BgL_new4327z00_6949 =
							((BgL_rtl_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_castz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4327z00_6949),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_castz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 61 */
							BgL_objectz00_bglt BgL_auxz00_8178;

							BgL_auxz00_8178 = (BgL_objectz00_bglt) (BgL_new4327z00_6949);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8178, BFALSE);
						}
						BgL_res5957z00_6951 = BgL_new4327z00_6949;
					}
					BgL_auxz00_8173 = BgL_res5957z00_6951;
				}
				return (obj_t) (BgL_auxz00_8173);
			}
		}
	}



/* rtl_cast-nil */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt BGl_rtl_castzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			if ((BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 61 */
					{	/* SawMill/defs.scm 61 */
						BgL_rtl_castz00_bglt BgL_res5653z00_3773;

						{	/* SawMill/defs.scm 61 */
							BgL_rtl_castz00_bglt BgL_new4327z00_3769;

							BgL_new4327z00_3769 =
								((BgL_rtl_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_castz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4327z00_3769),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_castz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 61 */
								BgL_objectz00_bglt BgL_auxz00_8188;

								BgL_auxz00_8188 = (BgL_objectz00_bglt) (BgL_new4327z00_3769);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8188, BFALSE);
							}
							BgL_res5653z00_3773 = BgL_new4327z00_3769;
						}
						BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5653z00_3773);
					}
					{	/* SawMill/defs.scm 61 */
						BgL_typez00_bglt BgL_arg5095z00_1798;

						BgL_arg5095z00_1798 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 61 */
							BgL_rtl_castz00_bglt BgL_res5654z00_3779;

							{	/* SawMill/defs.scm 61 */
								BgL_rtl_castz00_bglt BgL_new4323z00_3774;

								BgL_new4323z00_3774 =
									(BgL_rtl_castz00_bglt)
									(BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 61 */
									obj_t BgL_loc4321z00_3777;

									BgL_typez00_bglt BgL_type4322z00_3778;

									BgL_loc4321z00_3777 = BUNSPEC;
									BgL_type4322z00_3778 = BgL_arg5095z00_1798;
									((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_3774))->
											BgL_locz00) = ((obj_t) BgL_loc4321z00_3777), BUNSPEC);
									((((BgL_rtl_castz00_bglt) CREF(BgL_new4323z00_3774))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4322z00_3778), BUNSPEC);
									BgL_res5654z00_3779 = BgL_new4323z00_3774;
							}}
							(obj_t) (BgL_res5654z00_3779);
				}}}
			else
				{	/* SawMill/defs.scm 61 */
					BFALSE;
				}
			return
				(BgL_rtl_castz00_bglt) (BGl_z52thezd2rtl_castzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_cast-nil */
	obj_t BGl__rtl_castzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6099)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			return (obj_t) (BGl_rtl_castzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_pragma? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_pragmazf3zf3zzsaw_defsz00(obj_t
		BgL_obj4309z00_189)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4309z00_189,
				BGl_rtl_pragmaz00zzsaw_defsz00);
		}
	}



/* _rtl_pragma? */
	obj_t BGl__rtl_pragmazf3zf3zzsaw_defsz00(obj_t BgL_envz00_6096,
		obj_t BgL_obj4309z00_6097)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4309z00_6097,
					BGl_rtl_pragmaz00zzsaw_defsz00));
		}
	}



/* make-rtl_pragma */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt
		BGl_makezd2rtl_pragmazd2zzsaw_defsz00(obj_t BgL_loc4288z00_193,
		obj_t BgL_format4289z00_194)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_pragmaz00_bglt BgL_new4290z00_3780;

				{	/* SawMill/defs.scm 60 */
					BgL_rtl_pragmaz00_bglt BgL_res5655z00_3785;

					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_new4298z00_3781;

						BgL_new4298z00_3781 =
							((BgL_rtl_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_pragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4298z00_3781),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_pragmaz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_8207;

							BgL_auxz00_8207 = (BgL_objectz00_bglt) (BgL_new4298z00_3781);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8207, BFALSE);
						}
						BgL_res5655z00_3785 = BgL_new4298z00_3781;
					}
					BgL_new4290z00_3780 = BgL_res5655z00_3785;
				}
				{	/* SawMill/defs.scm 60 */
					BgL_rtl_pragmaz00_bglt BgL_res5656z00_3791;

					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_new4294z00_3786;

						BgL_new4294z00_3786 = BgL_new4290z00_3780;
						{	/* SawMill/defs.scm 60 */
							obj_t BgL_loc4292z00_3789;

							obj_t BgL_format4293z00_3790;

							BgL_loc4292z00_3789 = BgL_loc4288z00_193;
							BgL_format4293z00_3790 = BgL_format4289z00_194;
							((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_3786))->
									BgL_locz00) = ((obj_t) BgL_loc4292z00_3789), BUNSPEC);
							((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_3786))->
									BgL_formatz00) = ((obj_t) BgL_format4293z00_3790), BUNSPEC);
							BgL_res5656z00_3791 = BgL_new4294z00_3786;
					}} BgL_res5656z00_3791;
				}
				return BgL_new4290z00_3780;
			}
		}
	}



/* _make-rtl_pragma */
	obj_t BGl__makezd2rtl_pragmazd2zzsaw_defsz00(obj_t BgL_envz00_6170,
		obj_t BgL_loc4288z00_6171, obj_t BgL_format4289z00_6172)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			return
				(obj_t) (BGl_makezd2rtl_pragmazd2zzsaw_defsz00(BgL_loc4288z00_6171,
					BgL_format4289z00_6172));
		}
	}



/* fill-rtl_pragma! */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt
		BGl_fillzd2rtl_pragmaz12zc0zzsaw_defsz00(BgL_rtl_pragmaz00_bglt
		BgL_new4294z00_195, obj_t BgL_loc4292z00_196, obj_t BgL_format4293z00_197)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				obj_t BgL_loc4292z00_6953;

				obj_t BgL_format4293z00_6954;

				BgL_loc4292z00_6953 = BgL_loc4292z00_196;
				BgL_format4293z00_6954 = BgL_format4293z00_197;
				((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_195))->BgL_locz00) =
					((obj_t) BgL_loc4292z00_6953), BUNSPEC);
				((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_195))->BgL_formatz00) =
					((obj_t) BgL_format4293z00_6954), BUNSPEC);
				return BgL_new4294z00_195;
			}
		}
	}



/* _fill-rtl_pragma! */
	obj_t BGl__fillzd2rtl_pragmaz12zc0zzsaw_defsz00(obj_t BgL_envz00_6173,
		obj_t BgL_new4294z00_6174, obj_t BgL_loc4292z00_6175,
		obj_t BgL_format4293z00_6176)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_pragmaz00_bglt BgL_auxz00_8216;

				{	/* SawMill/defs.scm 60 */
					BgL_rtl_pragmaz00_bglt BgL_res5958z00_6960;

					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_new4294z00_6955;

						obj_t BgL_format4293z00_6957;

						BgL_new4294z00_6955 =
							(BgL_rtl_pragmaz00_bglt) (BgL_new4294z00_6174);
						BgL_format4293z00_6957 = BgL_format4293z00_6176;
						{	/* SawMill/defs.scm 60 */
							obj_t BgL_loc4292z00_6958;

							obj_t BgL_format4293z00_6959;

							BgL_loc4292z00_6958 = BgL_loc4292z00_6175;
							BgL_format4293z00_6959 = BgL_format4293z00_6957;
							((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_6955))->
									BgL_locz00) = ((obj_t) BgL_loc4292z00_6958), BUNSPEC);
							((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_6955))->
									BgL_formatz00) = ((obj_t) BgL_format4293z00_6959), BUNSPEC);
							BgL_res5958z00_6960 = BgL_new4294z00_6955;
						}
					}
					BgL_auxz00_8216 = BgL_res5958z00_6960;
				}
				return (obj_t) (BgL_auxz00_8216);
			}
		}
	}



/* %allocate-rtl_pragma */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt
		BGl_z52allocatezd2rtl_pragmaz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_pragmaz00_bglt BgL_new4298z00_6961;

				BgL_new4298z00_6961 =
					((BgL_rtl_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_pragmaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4298z00_6961),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_pragmaz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 60 */
					BgL_objectz00_bglt BgL_auxz00_8225;

					BgL_auxz00_8225 = (BgL_objectz00_bglt) (BgL_new4298z00_6961);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8225, BFALSE);
				}
				return BgL_new4298z00_6961;
			}
		}
	}



/* _%allocate-rtl_pragma */
	obj_t BGl__z52allocatezd2rtl_pragmaz80zzsaw_defsz00(obj_t BgL_envz00_6094)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_pragmaz00_bglt BgL_auxz00_8228;

				{	/* SawMill/defs.scm 60 */
					BgL_rtl_pragmaz00_bglt BgL_res5959z00_6965;

					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_new4298z00_6963;

						BgL_new4298z00_6963 =
							((BgL_rtl_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_pragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4298z00_6963),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_pragmaz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_8233;

							BgL_auxz00_8233 = (BgL_objectz00_bglt) (BgL_new4298z00_6963);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8233, BFALSE);
						}
						BgL_res5959z00_6965 = BgL_new4298z00_6963;
					}
					BgL_auxz00_8228 = BgL_res5959z00_6965;
				}
				return (obj_t) (BgL_auxz00_8228);
			}
		}
	}



/* rtl_pragma-nil */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt BGl_rtl_pragmazd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			if ((BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 60 */
					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_res5657z00_3802;

						{	/* SawMill/defs.scm 60 */
							BgL_rtl_pragmaz00_bglt BgL_new4298z00_3798;

							BgL_new4298z00_3798 =
								((BgL_rtl_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_pragmaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4298z00_3798),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_pragmaz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 60 */
								BgL_objectz00_bglt BgL_auxz00_8243;

								BgL_auxz00_8243 = (BgL_objectz00_bglt) (BgL_new4298z00_3798);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8243, BFALSE);
							}
							BgL_res5657z00_3802 = BgL_new4298z00_3798;
						}
						BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5657z00_3802);
					}
					{	/* SawMill/defs.scm 60 */
						BgL_rtl_pragmaz00_bglt BgL_res5658z00_3808;

						{	/* SawMill/defs.scm 60 */
							BgL_rtl_pragmaz00_bglt BgL_new4294z00_3803;

							BgL_new4294z00_3803 =
								(BgL_rtl_pragmaz00_bglt)
								(BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 60 */
								obj_t BgL_loc4292z00_3806;

								obj_t BgL_format4293z00_3807;

								BgL_loc4292z00_3806 = BUNSPEC;
								BgL_format4293z00_3807 = BGl_string5822z00zzsaw_defsz00;
								((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_3803))->
										BgL_locz00) = ((obj_t) BgL_loc4292z00_3806), BUNSPEC);
								((((BgL_rtl_pragmaz00_bglt) CREF(BgL_new4294z00_3803))->
										BgL_formatz00) = ((obj_t) BgL_format4293z00_3807), BUNSPEC);
								BgL_res5658z00_3808 = BgL_new4294z00_3803;
						}}
						(obj_t) (BgL_res5658z00_3808);
				}}
			else
				{	/* SawMill/defs.scm 60 */
					BFALSE;
				}
			return
				(BgL_rtl_pragmaz00_bglt)
				(BGl_z52thezd2rtl_pragmazd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_pragma-nil */
	obj_t BGl__rtl_pragmazd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6095)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			return (obj_t) (BGl_rtl_pragmazd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_funcall? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_funcallzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4281z00_201)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4281z00_201,
				BGl_rtl_funcallz00zzsaw_defsz00);
		}
	}



/* _rtl_funcall? */
	obj_t BGl__rtl_funcallzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6092,
		obj_t BgL_obj4281z00_6093)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4281z00_6093,
					BGl_rtl_funcallz00zzsaw_defsz00));
		}
	}



/* make-rtl_funcall */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_makezd2rtl_funcallzd2zzsaw_defsz00(obj_t BgL_loc4265z00_205)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_funcallz00_bglt BgL_new4266z00_3809;

				{	/* SawMill/defs.scm 59 */
					BgL_rtl_funcallz00_bglt BgL_res5659z00_3814;

					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_new4272z00_3810;

						BgL_new4272z00_3810 =
							((BgL_rtl_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4272z00_3810),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_funcallz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 59 */
							BgL_objectz00_bglt BgL_auxz00_8261;

							BgL_auxz00_8261 = (BgL_objectz00_bglt) (BgL_new4272z00_3810);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8261, BFALSE);
						}
						BgL_res5659z00_3814 = BgL_new4272z00_3810;
					}
					BgL_new4266z00_3809 = BgL_res5659z00_3814;
				}
				{	/* SawMill/defs.scm 59 */
					BgL_rtl_funcallz00_bglt BgL_res5660z00_3818;

					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_new4269z00_3815;

						BgL_new4269z00_3815 = BgL_new4266z00_3809;
						{	/* SawMill/defs.scm 59 */
							obj_t BgL_loc4268z00_3817;

							BgL_loc4268z00_3817 = BgL_loc4265z00_205;
							((((BgL_rtl_funcallz00_bglt) CREF(BgL_new4269z00_3815))->
									BgL_locz00) = ((obj_t) BgL_loc4268z00_3817), BUNSPEC);
							BgL_res5660z00_3818 = BgL_new4269z00_3815;
					}} BgL_res5660z00_3818;
				}
				return BgL_new4266z00_3809;
			}
		}
	}



/* _make-rtl_funcall */
	obj_t BGl__makezd2rtl_funcallzd2zzsaw_defsz00(obj_t BgL_envz00_6177,
		obj_t BgL_loc4265z00_6178)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			return
				(obj_t) (BGl_makezd2rtl_funcallzd2zzsaw_defsz00(BgL_loc4265z00_6178));
		}
	}



/* fill-rtl_funcall! */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_fillzd2rtl_funcallz12zc0zzsaw_defsz00(BgL_rtl_funcallz00_bglt
		BgL_new4269z00_206, obj_t BgL_loc4268z00_207)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				obj_t BgL_loc4268z00_6967;

				BgL_loc4268z00_6967 = BgL_loc4268z00_207;
				((((BgL_rtl_funcallz00_bglt) CREF(BgL_new4269z00_206))->BgL_locz00) =
					((obj_t) BgL_loc4268z00_6967), BUNSPEC);
				return BgL_new4269z00_206;
			}
		}
	}



/* _fill-rtl_funcall! */
	obj_t BGl__fillzd2rtl_funcallz12zc0zzsaw_defsz00(obj_t BgL_envz00_6179,
		obj_t BgL_new4269z00_6180, obj_t BgL_loc4268z00_6181)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_funcallz00_bglt BgL_auxz00_8268;

				{	/* SawMill/defs.scm 59 */
					BgL_rtl_funcallz00_bglt BgL_res5960z00_6971;

					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_new4269z00_6968;

						BgL_new4269z00_6968 =
							(BgL_rtl_funcallz00_bglt) (BgL_new4269z00_6180);
						{	/* SawMill/defs.scm 59 */
							obj_t BgL_loc4268z00_6970;

							BgL_loc4268z00_6970 = BgL_loc4268z00_6181;
							((((BgL_rtl_funcallz00_bglt) CREF(BgL_new4269z00_6968))->
									BgL_locz00) = ((obj_t) BgL_loc4268z00_6970), BUNSPEC);
							BgL_res5960z00_6971 = BgL_new4269z00_6968;
						}
					}
					BgL_auxz00_8268 = BgL_res5960z00_6971;
				}
				return (obj_t) (BgL_auxz00_8268);
			}
		}
	}



/* %allocate-rtl_funcall */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_z52allocatezd2rtl_funcallz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_funcallz00_bglt BgL_new4272z00_6972;

				BgL_new4272z00_6972 =
					((BgL_rtl_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_funcallz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4272z00_6972),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_funcallz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 59 */
					BgL_objectz00_bglt BgL_auxz00_8276;

					BgL_auxz00_8276 = (BgL_objectz00_bglt) (BgL_new4272z00_6972);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8276, BFALSE);
				}
				return BgL_new4272z00_6972;
			}
		}
	}



/* _%allocate-rtl_funcall */
	obj_t BGl__z52allocatezd2rtl_funcallz80zzsaw_defsz00(obj_t BgL_envz00_6090)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_funcallz00_bglt BgL_auxz00_8279;

				{	/* SawMill/defs.scm 59 */
					BgL_rtl_funcallz00_bglt BgL_res5961z00_6976;

					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_new4272z00_6974;

						BgL_new4272z00_6974 =
							((BgL_rtl_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4272z00_6974),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_funcallz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 59 */
							BgL_objectz00_bglt BgL_auxz00_8284;

							BgL_auxz00_8284 = (BgL_objectz00_bglt) (BgL_new4272z00_6974);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8284, BFALSE);
						}
						BgL_res5961z00_6976 = BgL_new4272z00_6974;
					}
					BgL_auxz00_8279 = BgL_res5961z00_6976;
				}
				return (obj_t) (BgL_auxz00_8279);
			}
		}
	}



/* rtl_funcall-nil */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_rtl_funcallzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			if ((BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 59 */
					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_res5661z00_3828;

						{	/* SawMill/defs.scm 59 */
							BgL_rtl_funcallz00_bglt BgL_new4272z00_3824;

							BgL_new4272z00_3824 =
								((BgL_rtl_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_funcallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4272z00_3824),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_funcallz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 59 */
								BgL_objectz00_bglt BgL_auxz00_8294;

								BgL_auxz00_8294 = (BgL_objectz00_bglt) (BgL_new4272z00_3824);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8294, BFALSE);
							}
							BgL_res5661z00_3828 = BgL_new4272z00_3824;
						}
						BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5661z00_3828);
					}
					{	/* SawMill/defs.scm 59 */
						BgL_rtl_funcallz00_bglt BgL_res5662z00_3832;

						{	/* SawMill/defs.scm 59 */
							BgL_rtl_funcallz00_bglt BgL_new4269z00_3829;

							BgL_new4269z00_3829 =
								(BgL_rtl_funcallz00_bglt)
								(BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 59 */
								obj_t BgL_loc4268z00_3831;

								BgL_loc4268z00_3831 = BUNSPEC;
								((((BgL_rtl_funcallz00_bglt) CREF(BgL_new4269z00_3829))->
										BgL_locz00) = ((obj_t) BgL_loc4268z00_3831), BUNSPEC);
								BgL_res5662z00_3832 = BgL_new4269z00_3829;
						}}
						(obj_t) (BgL_res5662z00_3832);
				}}
			else
				{	/* SawMill/defs.scm 59 */
					BFALSE;
				}
			return
				(BgL_rtl_funcallz00_bglt)
				(BGl_z52thezd2rtl_funcallzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_funcall-nil */
	obj_t BGl__rtl_funcallzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6091)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			return (obj_t) (BGl_rtl_funcallzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_lightfuncall? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4261z00_208)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4261z00_208,
				BGl_rtl_lightfuncallz00zzsaw_defsz00);
		}
	}



/* _rtl_lightfuncall? */
	obj_t BGl__rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6088,
		obj_t BgL_obj4261z00_6089)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4261z00_6089,
					BGl_rtl_lightfuncallz00zzsaw_defsz00));
		}
	}



/* make-rtl_lightfuncall */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t BgL_loc4247z00_212)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_lightfuncallz00_bglt BgL_new4248z00_3833;

				{	/* SawMill/defs.scm 58 */
					BgL_rtl_lightfuncallz00_bglt BgL_res5663z00_3838;

					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_new4254z00_3834;

						BgL_new4254z00_3834 =
							((BgL_rtl_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_lightfuncallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4254z00_3834),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_lightfuncallz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_8311;

							BgL_auxz00_8311 = (BgL_objectz00_bglt) (BgL_new4254z00_3834);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8311, BFALSE);
						}
						BgL_res5663z00_3838 = BgL_new4254z00_3834;
					}
					BgL_new4248z00_3833 = BgL_res5663z00_3838;
				}
				{	/* SawMill/defs.scm 58 */
					BgL_rtl_lightfuncallz00_bglt BgL_res5664z00_3842;

					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_new4251z00_3839;

						BgL_new4251z00_3839 = BgL_new4248z00_3833;
						{	/* SawMill/defs.scm 58 */
							obj_t BgL_loc4250z00_3841;

							BgL_loc4250z00_3841 = BgL_loc4247z00_212;
							((((BgL_rtl_lightfuncallz00_bglt) CREF(BgL_new4251z00_3839))->
									BgL_locz00) = ((obj_t) BgL_loc4250z00_3841), BUNSPEC);
							BgL_res5664z00_3842 = BgL_new4251z00_3839;
					}} BgL_res5664z00_3842;
				}
				return BgL_new4248z00_3833;
			}
		}
	}



/* _make-rtl_lightfuncall */
	obj_t BGl__makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t BgL_envz00_6182,
		obj_t BgL_loc4247z00_6183)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			return
				(obj_t) (BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00
				(BgL_loc4247z00_6183));
		}
	}



/* fill-rtl_lightfuncall! */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_fillzd2rtl_lightfuncallz12zc0zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt
		BgL_new4251z00_213, obj_t BgL_loc4250z00_214)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				obj_t BgL_loc4250z00_6978;

				BgL_loc4250z00_6978 = BgL_loc4250z00_214;
				((((BgL_rtl_lightfuncallz00_bglt) CREF(BgL_new4251z00_213))->
						BgL_locz00) = ((obj_t) BgL_loc4250z00_6978), BUNSPEC);
				return BgL_new4251z00_213;
			}
		}
	}



/* _fill-rtl_lightfuncall! */
	obj_t BGl__fillzd2rtl_lightfuncallz12zc0zzsaw_defsz00(obj_t BgL_envz00_6184,
		obj_t BgL_new4251z00_6185, obj_t BgL_loc4250z00_6186)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_lightfuncallz00_bglt BgL_auxz00_8318;

				{	/* SawMill/defs.scm 58 */
					BgL_rtl_lightfuncallz00_bglt BgL_res5962z00_6982;

					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_new4251z00_6979;

						BgL_new4251z00_6979 =
							(BgL_rtl_lightfuncallz00_bglt) (BgL_new4251z00_6185);
						{	/* SawMill/defs.scm 58 */
							obj_t BgL_loc4250z00_6981;

							BgL_loc4250z00_6981 = BgL_loc4250z00_6186;
							((((BgL_rtl_lightfuncallz00_bglt) CREF(BgL_new4251z00_6979))->
									BgL_locz00) = ((obj_t) BgL_loc4250z00_6981), BUNSPEC);
							BgL_res5962z00_6982 = BgL_new4251z00_6979;
						}
					}
					BgL_auxz00_8318 = BgL_res5962z00_6982;
				}
				return (obj_t) (BgL_auxz00_8318);
			}
		}
	}



/* %allocate-rtl_lightfuncall */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_z52allocatezd2rtl_lightfuncallz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_lightfuncallz00_bglt BgL_new4254z00_6983;

				BgL_new4254z00_6983 =
					((BgL_rtl_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_lightfuncallz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4254z00_6983),
					BGl_classzd2numzd2zz__objectz00
					(BGl_rtl_lightfuncallz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 58 */
					BgL_objectz00_bglt BgL_auxz00_8326;

					BgL_auxz00_8326 = (BgL_objectz00_bglt) (BgL_new4254z00_6983);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8326, BFALSE);
				}
				return BgL_new4254z00_6983;
			}
		}
	}



/* _%allocate-rtl_lightfuncall */
	obj_t BGl__z52allocatezd2rtl_lightfuncallz80zzsaw_defsz00(obj_t
		BgL_envz00_6086)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_lightfuncallz00_bglt BgL_auxz00_8329;

				{	/* SawMill/defs.scm 58 */
					BgL_rtl_lightfuncallz00_bglt BgL_res5963z00_6987;

					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_new4254z00_6985;

						BgL_new4254z00_6985 =
							((BgL_rtl_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_lightfuncallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4254z00_6985),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_lightfuncallz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_8334;

							BgL_auxz00_8334 = (BgL_objectz00_bglt) (BgL_new4254z00_6985);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8334, BFALSE);
						}
						BgL_res5963z00_6987 = BgL_new4254z00_6985;
					}
					BgL_auxz00_8329 = BgL_res5963z00_6987;
				}
				return (obj_t) (BgL_auxz00_8329);
			}
		}
	}



/* rtl_lightfuncall-nil */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			if ((BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 58 */
					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_res5665z00_3852;

						{	/* SawMill/defs.scm 58 */
							BgL_rtl_lightfuncallz00_bglt BgL_new4254z00_3848;

							BgL_new4254z00_3848 =
								((BgL_rtl_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_lightfuncallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4254z00_3848),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_lightfuncallz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 58 */
								BgL_objectz00_bglt BgL_auxz00_8344;

								BgL_auxz00_8344 = (BgL_objectz00_bglt) (BgL_new4254z00_3848);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8344, BFALSE);
							}
							BgL_res5665z00_3852 = BgL_new4254z00_3848;
						}
						BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5665z00_3852);
					}
					{	/* SawMill/defs.scm 58 */
						BgL_rtl_lightfuncallz00_bglt BgL_res5666z00_3856;

						{	/* SawMill/defs.scm 58 */
							BgL_rtl_lightfuncallz00_bglt BgL_new4251z00_3853;

							BgL_new4251z00_3853 =
								(BgL_rtl_lightfuncallz00_bglt)
								(BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 58 */
								obj_t BgL_loc4250z00_3855;

								BgL_loc4250z00_3855 = BUNSPEC;
								((((BgL_rtl_lightfuncallz00_bglt) CREF(BgL_new4251z00_3853))->
										BgL_locz00) = ((obj_t) BgL_loc4250z00_3855), BUNSPEC);
								BgL_res5666z00_3856 = BgL_new4251z00_3853;
						}}
						(obj_t) (BgL_res5666z00_3856);
				}}
			else
				{	/* SawMill/defs.scm 58 */
					BFALSE;
				}
			return
				(BgL_rtl_lightfuncallz00_bglt)
				(BGl_z52thezd2rtl_lightfuncallzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_lightfuncall-nil */
	obj_t BGl__rtl_lightfuncallzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6087)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			return (obj_t) (BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_apply? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_applyzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4241z00_215)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4241z00_215,
				BGl_rtl_applyz00zzsaw_defsz00);
		}
	}



/* _rtl_apply? */
	obj_t BGl__rtl_applyzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6084,
		obj_t BgL_obj4241z00_6085)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4241z00_6085,
					BGl_rtl_applyz00zzsaw_defsz00));
		}
	}



/* make-rtl_apply */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt
		BGl_makezd2rtl_applyzd2zzsaw_defsz00(obj_t BgL_loc4226z00_219)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_applyz00_bglt BgL_new4227z00_3857;

				{	/* SawMill/defs.scm 57 */
					BgL_rtl_applyz00_bglt BgL_res5667z00_3862;

					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_new4233z00_3858;

						BgL_new4233z00_3858 =
							((BgL_rtl_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_applyz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4233z00_3858),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_applyz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_8361;

							BgL_auxz00_8361 = (BgL_objectz00_bglt) (BgL_new4233z00_3858);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8361, BFALSE);
						}
						BgL_res5667z00_3862 = BgL_new4233z00_3858;
					}
					BgL_new4227z00_3857 = BgL_res5667z00_3862;
				}
				{	/* SawMill/defs.scm 57 */
					BgL_rtl_applyz00_bglt BgL_res5668z00_3866;

					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_new4230z00_3863;

						BgL_new4230z00_3863 = BgL_new4227z00_3857;
						{	/* SawMill/defs.scm 57 */
							obj_t BgL_loc4229z00_3865;

							BgL_loc4229z00_3865 = BgL_loc4226z00_219;
							((((BgL_rtl_applyz00_bglt) CREF(BgL_new4230z00_3863))->
									BgL_locz00) = ((obj_t) BgL_loc4229z00_3865), BUNSPEC);
							BgL_res5668z00_3866 = BgL_new4230z00_3863;
					}} BgL_res5668z00_3866;
				}
				return BgL_new4227z00_3857;
			}
		}
	}



/* _make-rtl_apply */
	obj_t BGl__makezd2rtl_applyzd2zzsaw_defsz00(obj_t BgL_envz00_6187,
		obj_t BgL_loc4226z00_6188)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			return
				(obj_t) (BGl_makezd2rtl_applyzd2zzsaw_defsz00(BgL_loc4226z00_6188));
		}
	}



/* fill-rtl_apply! */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt
		BGl_fillzd2rtl_applyz12zc0zzsaw_defsz00(BgL_rtl_applyz00_bglt
		BgL_new4230z00_220, obj_t BgL_loc4229z00_221)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				obj_t BgL_loc4229z00_6989;

				BgL_loc4229z00_6989 = BgL_loc4229z00_221;
				((((BgL_rtl_applyz00_bglt) CREF(BgL_new4230z00_220))->BgL_locz00) =
					((obj_t) BgL_loc4229z00_6989), BUNSPEC);
				return BgL_new4230z00_220;
			}
		}
	}



/* _fill-rtl_apply! */
	obj_t BGl__fillzd2rtl_applyz12zc0zzsaw_defsz00(obj_t BgL_envz00_6189,
		obj_t BgL_new4230z00_6190, obj_t BgL_loc4229z00_6191)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_applyz00_bglt BgL_auxz00_8368;

				{	/* SawMill/defs.scm 57 */
					BgL_rtl_applyz00_bglt BgL_res5964z00_6993;

					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_new4230z00_6990;

						BgL_new4230z00_6990 = (BgL_rtl_applyz00_bglt) (BgL_new4230z00_6190);
						{	/* SawMill/defs.scm 57 */
							obj_t BgL_loc4229z00_6992;

							BgL_loc4229z00_6992 = BgL_loc4229z00_6191;
							((((BgL_rtl_applyz00_bglt) CREF(BgL_new4230z00_6990))->
									BgL_locz00) = ((obj_t) BgL_loc4229z00_6992), BUNSPEC);
							BgL_res5964z00_6993 = BgL_new4230z00_6990;
						}
					}
					BgL_auxz00_8368 = BgL_res5964z00_6993;
				}
				return (obj_t) (BgL_auxz00_8368);
			}
		}
	}



/* %allocate-rtl_apply */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt
		BGl_z52allocatezd2rtl_applyz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_applyz00_bglt BgL_new4233z00_6994;

				BgL_new4233z00_6994 =
					((BgL_rtl_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_applyz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4233z00_6994),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_applyz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 57 */
					BgL_objectz00_bglt BgL_auxz00_8376;

					BgL_auxz00_8376 = (BgL_objectz00_bglt) (BgL_new4233z00_6994);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8376, BFALSE);
				}
				return BgL_new4233z00_6994;
			}
		}
	}



/* _%allocate-rtl_apply */
	obj_t BGl__z52allocatezd2rtl_applyz80zzsaw_defsz00(obj_t BgL_envz00_6082)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_applyz00_bglt BgL_auxz00_8379;

				{	/* SawMill/defs.scm 57 */
					BgL_rtl_applyz00_bglt BgL_res5965z00_6998;

					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_new4233z00_6996;

						BgL_new4233z00_6996 =
							((BgL_rtl_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_applyz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4233z00_6996),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_applyz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_8384;

							BgL_auxz00_8384 = (BgL_objectz00_bglt) (BgL_new4233z00_6996);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8384, BFALSE);
						}
						BgL_res5965z00_6998 = BgL_new4233z00_6996;
					}
					BgL_auxz00_8379 = BgL_res5965z00_6998;
				}
				return (obj_t) (BgL_auxz00_8379);
			}
		}
	}



/* rtl_apply-nil */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt BGl_rtl_applyzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			if ((BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 57 */
					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_res5669z00_3876;

						{	/* SawMill/defs.scm 57 */
							BgL_rtl_applyz00_bglt BgL_new4233z00_3872;

							BgL_new4233z00_3872 =
								((BgL_rtl_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_applyz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4233z00_3872),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_applyz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 57 */
								BgL_objectz00_bglt BgL_auxz00_8394;

								BgL_auxz00_8394 = (BgL_objectz00_bglt) (BgL_new4233z00_3872);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8394, BFALSE);
							}
							BgL_res5669z00_3876 = BgL_new4233z00_3872;
						}
						BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5669z00_3876);
					}
					{	/* SawMill/defs.scm 57 */
						BgL_rtl_applyz00_bglt BgL_res5670z00_3880;

						{	/* SawMill/defs.scm 57 */
							BgL_rtl_applyz00_bglt BgL_new4230z00_3877;

							BgL_new4230z00_3877 =
								(BgL_rtl_applyz00_bglt)
								(BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 57 */
								obj_t BgL_loc4229z00_3879;

								BgL_loc4229z00_3879 = BUNSPEC;
								((((BgL_rtl_applyz00_bglt) CREF(BgL_new4230z00_3877))->
										BgL_locz00) = ((obj_t) BgL_loc4229z00_3879), BUNSPEC);
								BgL_res5670z00_3880 = BgL_new4230z00_3877;
						}}
						(obj_t) (BgL_res5670z00_3880);
				}}
			else
				{	/* SawMill/defs.scm 57 */
					BFALSE;
				}
			return
				(BgL_rtl_applyz00_bglt) (BGl_z52thezd2rtl_applyzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_apply-nil */
	obj_t BGl__rtl_applyzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6083)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			return (obj_t) (BGl_rtl_applyzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_call? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_callzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4222z00_222)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4222z00_222,
				BGl_rtl_callz00zzsaw_defsz00);
		}
	}



/* _rtl_call? */
	obj_t BGl__rtl_callzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6080,
		obj_t BgL_obj4222z00_6081)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4222z00_6081,
					BGl_rtl_callz00zzsaw_defsz00));
		}
	}



/* make-rtl_call */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt
		BGl_makezd2rtl_callzd2zzsaw_defsz00(obj_t BgL_loc4201z00_226,
		BgL_globalz00_bglt BgL_var4202z00_227)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_callz00_bglt BgL_new4203z00_3881;

				{	/* SawMill/defs.scm 56 */
					BgL_rtl_callz00_bglt BgL_res5671z00_3886;

					{	/* SawMill/defs.scm 56 */
						BgL_rtl_callz00_bglt BgL_new4211z00_3882;

						BgL_new4211z00_3882 =
							((BgL_rtl_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_callz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4211z00_3882),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_callz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_8411;

							BgL_auxz00_8411 = (BgL_objectz00_bglt) (BgL_new4211z00_3882);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8411, BFALSE);
						}
						BgL_res5671z00_3886 = BgL_new4211z00_3882;
					}
					BgL_new4203z00_3881 = BgL_res5671z00_3886;
				}
				{	/* SawMill/defs.scm 56 */
					BgL_rtl_callz00_bglt BgL_res5672z00_3892;

					{	/* SawMill/defs.scm 56 */
						BgL_rtl_callz00_bglt BgL_new4207z00_3887;

						BgL_new4207z00_3887 = BgL_new4203z00_3881;
						{	/* SawMill/defs.scm 56 */
							obj_t BgL_loc4205z00_3890;

							BgL_globalz00_bglt BgL_var4206z00_3891;

							BgL_loc4205z00_3890 = BgL_loc4201z00_226;
							BgL_var4206z00_3891 = BgL_var4202z00_227;
							((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_3887))->
									BgL_locz00) = ((obj_t) BgL_loc4205z00_3890), BUNSPEC);
							((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_3887))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var4206z00_3891), BUNSPEC);
							BgL_res5672z00_3892 = BgL_new4207z00_3887;
					}} BgL_res5672z00_3892;
				}
				return BgL_new4203z00_3881;
			}
		}
	}



/* _make-rtl_call */
	obj_t BGl__makezd2rtl_callzd2zzsaw_defsz00(obj_t BgL_envz00_6192,
		obj_t BgL_loc4201z00_6193, obj_t BgL_var4202z00_6194)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			return
				(obj_t) (BGl_makezd2rtl_callzd2zzsaw_defsz00(BgL_loc4201z00_6193,
					(BgL_globalz00_bglt) (BgL_var4202z00_6194)));
		}
	}



/* fill-rtl_call! */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt
		BGl_fillzd2rtl_callz12zc0zzsaw_defsz00(BgL_rtl_callz00_bglt
		BgL_new4207z00_228, obj_t BgL_loc4205z00_229,
		BgL_globalz00_bglt BgL_var4206z00_230)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				obj_t BgL_loc4205z00_7000;

				BgL_globalz00_bglt BgL_var4206z00_7001;

				BgL_loc4205z00_7000 = BgL_loc4205z00_229;
				BgL_var4206z00_7001 = BgL_var4206z00_230;
				((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_228))->BgL_locz00) =
					((obj_t) BgL_loc4205z00_7000), BUNSPEC);
				((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_228))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var4206z00_7001), BUNSPEC);
				return BgL_new4207z00_228;
			}
		}
	}



/* _fill-rtl_call! */
	obj_t BGl__fillzd2rtl_callz12zc0zzsaw_defsz00(obj_t BgL_envz00_6195,
		obj_t BgL_new4207z00_6196, obj_t BgL_loc4205z00_6197,
		obj_t BgL_var4206z00_6198)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_callz00_bglt BgL_auxz00_8421;

				{	/* SawMill/defs.scm 56 */
					BgL_rtl_callz00_bglt BgL_res5966z00_7007;

					{	/* SawMill/defs.scm 56 */
						BgL_rtl_callz00_bglt BgL_new4207z00_7002;

						BgL_globalz00_bglt BgL_var4206z00_7004;

						BgL_new4207z00_7002 = (BgL_rtl_callz00_bglt) (BgL_new4207z00_6196);
						BgL_var4206z00_7004 = (BgL_globalz00_bglt) (BgL_var4206z00_6198);
						{	/* SawMill/defs.scm 56 */
							obj_t BgL_loc4205z00_7005;

							BgL_globalz00_bglt BgL_var4206z00_7006;

							BgL_loc4205z00_7005 = BgL_loc4205z00_6197;
							BgL_var4206z00_7006 = BgL_var4206z00_7004;
							((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_7002))->
									BgL_locz00) = ((obj_t) BgL_loc4205z00_7005), BUNSPEC);
							((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_7002))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var4206z00_7006), BUNSPEC);
							BgL_res5966z00_7007 = BgL_new4207z00_7002;
						}
					}
					BgL_auxz00_8421 = BgL_res5966z00_7007;
				}
				return (obj_t) (BgL_auxz00_8421);
			}
		}
	}



/* %allocate-rtl_call */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt
		BGl_z52allocatezd2rtl_callz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_callz00_bglt BgL_new4211z00_7008;

				BgL_new4211z00_7008 =
					((BgL_rtl_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_callz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4211z00_7008),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_callz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 56 */
					BgL_objectz00_bglt BgL_auxz00_8431;

					BgL_auxz00_8431 = (BgL_objectz00_bglt) (BgL_new4211z00_7008);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8431, BFALSE);
				}
				return BgL_new4211z00_7008;
			}
		}
	}



/* _%allocate-rtl_call */
	obj_t BGl__z52allocatezd2rtl_callz80zzsaw_defsz00(obj_t BgL_envz00_6078)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_callz00_bglt BgL_auxz00_8434;

				{	/* SawMill/defs.scm 56 */
					BgL_rtl_callz00_bglt BgL_res5967z00_7012;

					{	/* SawMill/defs.scm 56 */
						BgL_rtl_callz00_bglt BgL_new4211z00_7010;

						BgL_new4211z00_7010 =
							((BgL_rtl_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_callz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4211z00_7010),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_callz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_8439;

							BgL_auxz00_8439 = (BgL_objectz00_bglt) (BgL_new4211z00_7010);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8439, BFALSE);
						}
						BgL_res5967z00_7012 = BgL_new4211z00_7010;
					}
					BgL_auxz00_8434 = BgL_res5967z00_7012;
				}
				return (obj_t) (BgL_auxz00_8434);
			}
		}
	}



/* rtl_call-nil */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt BGl_rtl_callzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			if ((BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 56 */
					{	/* SawMill/defs.scm 56 */
						BgL_rtl_callz00_bglt BgL_res5673z00_3903;

						{	/* SawMill/defs.scm 56 */
							BgL_rtl_callz00_bglt BgL_new4211z00_3899;

							BgL_new4211z00_3899 =
								((BgL_rtl_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_callz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4211z00_3899),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_callz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 56 */
								BgL_objectz00_bglt BgL_auxz00_8449;

								BgL_auxz00_8449 = (BgL_objectz00_bglt) (BgL_new4211z00_3899);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8449, BFALSE);
							}
							BgL_res5673z00_3903 = BgL_new4211z00_3899;
						}
						BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5673z00_3903);
					}
					{	/* SawMill/defs.scm 56 */
						BgL_globalz00_bglt BgL_arg5106z00_1826;

						BgL_arg5106z00_1826 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMill/defs.scm 56 */
							BgL_rtl_callz00_bglt BgL_res5674z00_3909;

							{	/* SawMill/defs.scm 56 */
								BgL_rtl_callz00_bglt BgL_new4207z00_3904;

								BgL_new4207z00_3904 =
									(BgL_rtl_callz00_bglt)
									(BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 56 */
									obj_t BgL_loc4205z00_3907;

									BgL_globalz00_bglt BgL_var4206z00_3908;

									BgL_loc4205z00_3907 = BUNSPEC;
									BgL_var4206z00_3908 = BgL_arg5106z00_1826;
									((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_3904))->
											BgL_locz00) = ((obj_t) BgL_loc4205z00_3907), BUNSPEC);
									((((BgL_rtl_callz00_bglt) CREF(BgL_new4207z00_3904))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var4206z00_3908), BUNSPEC);
									BgL_res5674z00_3909 = BgL_new4207z00_3904;
							}}
							(obj_t) (BgL_res5674z00_3909);
				}}}
			else
				{	/* SawMill/defs.scm 56 */
					BFALSE;
				}
			return
				(BgL_rtl_callz00_bglt) (BGl_z52thezd2rtl_callzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_call-nil */
	obj_t BGl__rtl_callzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6079)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			return (obj_t) (BGl_rtl_callzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_new? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_newzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4193z00_234)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4193z00_234,
				BGl_rtl_newz00zzsaw_defsz00);
		}
	}



/* _rtl_new? */
	obj_t BGl__rtl_newzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6076,
		obj_t BgL_obj4193z00_6077)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4193z00_6077,
					BGl_rtl_newz00zzsaw_defsz00));
		}
	}



/* make-rtl_new */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt BGl_makezd2rtl_newzd2zzsaw_defsz00(obj_t
		BgL_loc4165z00_238, BgL_typez00_bglt BgL_type4166z00_239,
		obj_t BgL_constr4167z00_240)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{	/* SawMill/defs.scm 55 */
				BgL_rtl_newz00_bglt BgL_new4168z00_3910;

				{	/* SawMill/defs.scm 55 */
					BgL_rtl_newz00_bglt BgL_res5675z00_3915;

					{	/* SawMill/defs.scm 55 */
						BgL_rtl_newz00_bglt BgL_new4178z00_3911;

						BgL_new4178z00_3911 =
							((BgL_rtl_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_newz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4178z00_3911),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_newz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_8468;

							BgL_auxz00_8468 = (BgL_objectz00_bglt) (BgL_new4178z00_3911);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8468, BFALSE);
						}
						BgL_res5675z00_3915 = BgL_new4178z00_3911;
					}
					BgL_new4168z00_3910 = BgL_res5675z00_3915;
				}
				{	/* SawMill/defs.scm 55 */
					BgL_rtl_newz00_bglt BgL_res5676z00_3923;

					{	/* SawMill/defs.scm 55 */
						BgL_rtl_newz00_bglt BgL_new4173z00_3916;

						BgL_new4173z00_3916 = BgL_new4168z00_3910;
						{	/* SawMill/defs.scm 55 */
							obj_t BgL_loc4170z00_3920;

							BgL_typez00_bglt BgL_type4171z00_3921;

							obj_t BgL_constr4172z00_3922;

							BgL_loc4170z00_3920 = BgL_loc4165z00_238;
							BgL_type4171z00_3921 = BgL_type4166z00_239;
							BgL_constr4172z00_3922 = BgL_constr4167z00_240;
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3916))->BgL_locz00) =
								((obj_t) BgL_loc4170z00_3920), BUNSPEC);
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3916))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4171z00_3921), BUNSPEC);
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3916))->
									BgL_constrz00) = ((obj_t) BgL_constr4172z00_3922), BUNSPEC);
							BgL_res5676z00_3923 = BgL_new4173z00_3916;
					}} BgL_res5676z00_3923;
				}
				return BgL_new4168z00_3910;
			}
		}
	}



/* _make-rtl_new */
	obj_t BGl__makezd2rtl_newzd2zzsaw_defsz00(obj_t BgL_envz00_6199,
		obj_t BgL_loc4165z00_6200, obj_t BgL_type4166z00_6201,
		obj_t BgL_constr4167z00_6202)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			return
				(obj_t) (BGl_makezd2rtl_newzd2zzsaw_defsz00(BgL_loc4165z00_6200,
					(BgL_typez00_bglt) (BgL_type4166z00_6201), BgL_constr4167z00_6202));
		}
	}



/* fill-rtl_new! */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt
		BGl_fillzd2rtl_newz12zc0zzsaw_defsz00(BgL_rtl_newz00_bglt
		BgL_new4173z00_241, obj_t BgL_loc4170z00_242,
		BgL_typez00_bglt BgL_type4171z00_243, obj_t BgL_constr4172z00_244)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{	/* SawMill/defs.scm 55 */
				obj_t BgL_loc4170z00_7014;

				BgL_typez00_bglt BgL_type4171z00_7015;

				obj_t BgL_constr4172z00_7016;

				BgL_loc4170z00_7014 = BgL_loc4170z00_242;
				BgL_type4171z00_7015 = BgL_type4171z00_243;
				BgL_constr4172z00_7016 = BgL_constr4172z00_244;
				((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_241))->BgL_locz00) =
					((obj_t) BgL_loc4170z00_7014), BUNSPEC);
				((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_241))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4171z00_7015), BUNSPEC);
				((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_241))->BgL_constrz00) =
					((obj_t) BgL_constr4172z00_7016), BUNSPEC);
				return BgL_new4173z00_241;
			}
		}
	}



/* _fill-rtl_new! */
	obj_t BGl__fillzd2rtl_newz12zc0zzsaw_defsz00(obj_t BgL_envz00_6203,
		obj_t BgL_new4173z00_6204, obj_t BgL_loc4170z00_6205,
		obj_t BgL_type4171z00_6206, obj_t BgL_constr4172z00_6207)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{	/* SawMill/defs.scm 55 */
				BgL_rtl_newz00_bglt BgL_auxz00_8480;

				{	/* SawMill/defs.scm 55 */
					BgL_rtl_newz00_bglt BgL_res5968z00_7024;

					{	/* SawMill/defs.scm 55 */
						BgL_rtl_newz00_bglt BgL_new4173z00_7017;

						BgL_typez00_bglt BgL_type4171z00_7019;

						obj_t BgL_constr4172z00_7020;

						BgL_new4173z00_7017 = (BgL_rtl_newz00_bglt) (BgL_new4173z00_6204);
						BgL_type4171z00_7019 = (BgL_typez00_bglt) (BgL_type4171z00_6206);
						BgL_constr4172z00_7020 = BgL_constr4172z00_6207;
						{	/* SawMill/defs.scm 55 */
							obj_t BgL_loc4170z00_7021;

							BgL_typez00_bglt BgL_type4171z00_7022;

							obj_t BgL_constr4172z00_7023;

							BgL_loc4170z00_7021 = BgL_loc4170z00_6205;
							BgL_type4171z00_7022 = BgL_type4171z00_7019;
							BgL_constr4172z00_7023 = BgL_constr4172z00_7020;
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_7017))->BgL_locz00) =
								((obj_t) BgL_loc4170z00_7021), BUNSPEC);
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_7017))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4171z00_7022), BUNSPEC);
							((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_7017))->
									BgL_constrz00) = ((obj_t) BgL_constr4172z00_7023), BUNSPEC);
							BgL_res5968z00_7024 = BgL_new4173z00_7017;
						}
					}
					BgL_auxz00_8480 = BgL_res5968z00_7024;
				}
				return (obj_t) (BgL_auxz00_8480);
			}
		}
	}



/* %allocate-rtl_new */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt
		BGl_z52allocatezd2rtl_newz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{	/* SawMill/defs.scm 55 */
				BgL_rtl_newz00_bglt BgL_new4178z00_7025;

				BgL_new4178z00_7025 =
					((BgL_rtl_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_newz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4178z00_7025),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_newz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 55 */
					BgL_objectz00_bglt BgL_auxz00_8491;

					BgL_auxz00_8491 = (BgL_objectz00_bglt) (BgL_new4178z00_7025);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8491, BFALSE);
				}
				return BgL_new4178z00_7025;
			}
		}
	}



/* _%allocate-rtl_new */
	obj_t BGl__z52allocatezd2rtl_newz80zzsaw_defsz00(obj_t BgL_envz00_6074)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{	/* SawMill/defs.scm 55 */
				BgL_rtl_newz00_bglt BgL_auxz00_8494;

				{	/* SawMill/defs.scm 55 */
					BgL_rtl_newz00_bglt BgL_res5969z00_7029;

					{	/* SawMill/defs.scm 55 */
						BgL_rtl_newz00_bglt BgL_new4178z00_7027;

						BgL_new4178z00_7027 =
							((BgL_rtl_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_newz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4178z00_7027),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_newz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_8499;

							BgL_auxz00_8499 = (BgL_objectz00_bglt) (BgL_new4178z00_7027);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8499, BFALSE);
						}
						BgL_res5969z00_7029 = BgL_new4178z00_7027;
					}
					BgL_auxz00_8494 = BgL_res5969z00_7029;
				}
				return (obj_t) (BgL_auxz00_8494);
			}
		}
	}



/* rtl_new-nil */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt BGl_rtl_newzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			if ((BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 55 */
					{	/* SawMill/defs.scm 55 */
						BgL_rtl_newz00_bglt BgL_res5677z00_3935;

						{	/* SawMill/defs.scm 55 */
							BgL_rtl_newz00_bglt BgL_new4178z00_3931;

							BgL_new4178z00_3931 =
								((BgL_rtl_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_newz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4178z00_3931),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_newz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 55 */
								BgL_objectz00_bglt BgL_auxz00_8509;

								BgL_auxz00_8509 = (BgL_objectz00_bglt) (BgL_new4178z00_3931);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8509, BFALSE);
							}
							BgL_res5677z00_3935 = BgL_new4178z00_3931;
						}
						BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5677z00_3935);
					}
					{	/* SawMill/defs.scm 55 */
						BgL_typez00_bglt BgL_arg5109z00_1834;

						BgL_arg5109z00_1834 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 55 */
							BgL_rtl_newz00_bglt BgL_res5678z00_3943;

							{	/* SawMill/defs.scm 55 */
								BgL_rtl_newz00_bglt BgL_new4173z00_3936;

								BgL_new4173z00_3936 =
									(BgL_rtl_newz00_bglt)
									(BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 55 */
									obj_t BgL_loc4170z00_3940;

									BgL_typez00_bglt BgL_type4171z00_3941;

									obj_t BgL_constr4172z00_3942;

									BgL_loc4170z00_3940 = BUNSPEC;
									BgL_type4171z00_3941 = BgL_arg5109z00_1834;
									BgL_constr4172z00_3942 = BNIL;
									((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3936))->
											BgL_locz00) = ((obj_t) BgL_loc4170z00_3940), BUNSPEC);
									((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3936))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4171z00_3941), BUNSPEC);
									((((BgL_rtl_newz00_bglt) CREF(BgL_new4173z00_3936))->
											BgL_constrz00) =
										((obj_t) BgL_constr4172z00_3942), BUNSPEC);
									BgL_res5678z00_3943 = BgL_new4173z00_3936;
							}}
							(obj_t) (BgL_res5678z00_3943);
				}}}
			else
				{	/* SawMill/defs.scm 55 */
					BFALSE;
				}
			return (BgL_rtl_newz00_bglt) (BGl_z52thezd2rtl_newzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_new-nil */
	obj_t BGl__rtl_newzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6075)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			return (obj_t) (BGl_rtl_newzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_boxset? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_boxsetzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4155z00_251)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4155z00_251,
				BGl_rtl_boxsetz00zzsaw_defsz00);
		}
	}



/* _rtl_boxset? */
	obj_t BGl__rtl_boxsetzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6072,
		obj_t BgL_obj4155z00_6073)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4155z00_6073,
					BGl_rtl_boxsetz00zzsaw_defsz00));
		}
	}



/* make-rtl_boxset */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt
		BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t BgL_loc4139z00_255)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_boxsetz00_bglt BgL_new4140z00_3944;

				{	/* SawMill/defs.scm 53 */
					BgL_rtl_boxsetz00_bglt BgL_res5679z00_3949;

					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_new4146z00_3945;

						BgL_new4146z00_3945 =
							((BgL_rtl_boxsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_boxsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4146z00_3945),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxsetz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 53 */
							BgL_objectz00_bglt BgL_auxz00_8529;

							BgL_auxz00_8529 = (BgL_objectz00_bglt) (BgL_new4146z00_3945);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8529, BFALSE);
						}
						BgL_res5679z00_3949 = BgL_new4146z00_3945;
					}
					BgL_new4140z00_3944 = BgL_res5679z00_3949;
				}
				{	/* SawMill/defs.scm 53 */
					BgL_rtl_boxsetz00_bglt BgL_res5680z00_3953;

					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_new4143z00_3950;

						BgL_new4143z00_3950 = BgL_new4140z00_3944;
						{	/* SawMill/defs.scm 53 */
							obj_t BgL_loc4142z00_3952;

							BgL_loc4142z00_3952 = BgL_loc4139z00_255;
							((((BgL_rtl_boxsetz00_bglt) CREF(BgL_new4143z00_3950))->
									BgL_locz00) = ((obj_t) BgL_loc4142z00_3952), BUNSPEC);
							BgL_res5680z00_3953 = BgL_new4143z00_3950;
					}} BgL_res5680z00_3953;
				}
				return BgL_new4140z00_3944;
			}
		}
	}



/* _make-rtl_boxset */
	obj_t BGl__makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t BgL_envz00_6208,
		obj_t BgL_loc4139z00_6209)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			return
				(obj_t) (BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(BgL_loc4139z00_6209));
		}
	}



/* fill-rtl_boxset! */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt
		BGl_fillzd2rtl_boxsetz12zc0zzsaw_defsz00(BgL_rtl_boxsetz00_bglt
		BgL_new4143z00_256, obj_t BgL_loc4142z00_257)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				obj_t BgL_loc4142z00_7031;

				BgL_loc4142z00_7031 = BgL_loc4142z00_257;
				((((BgL_rtl_boxsetz00_bglt) CREF(BgL_new4143z00_256))->BgL_locz00) =
					((obj_t) BgL_loc4142z00_7031), BUNSPEC);
				return BgL_new4143z00_256;
			}
		}
	}



/* _fill-rtl_boxset! */
	obj_t BGl__fillzd2rtl_boxsetz12zc0zzsaw_defsz00(obj_t BgL_envz00_6210,
		obj_t BgL_new4143z00_6211, obj_t BgL_loc4142z00_6212)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_boxsetz00_bglt BgL_auxz00_8536;

				{	/* SawMill/defs.scm 53 */
					BgL_rtl_boxsetz00_bglt BgL_res5970z00_7035;

					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_new4143z00_7032;

						BgL_new4143z00_7032 =
							(BgL_rtl_boxsetz00_bglt) (BgL_new4143z00_6211);
						{	/* SawMill/defs.scm 53 */
							obj_t BgL_loc4142z00_7034;

							BgL_loc4142z00_7034 = BgL_loc4142z00_6212;
							((((BgL_rtl_boxsetz00_bglt) CREF(BgL_new4143z00_7032))->
									BgL_locz00) = ((obj_t) BgL_loc4142z00_7034), BUNSPEC);
							BgL_res5970z00_7035 = BgL_new4143z00_7032;
						}
					}
					BgL_auxz00_8536 = BgL_res5970z00_7035;
				}
				return (obj_t) (BgL_auxz00_8536);
			}
		}
	}



/* %allocate-rtl_boxset */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt
		BGl_z52allocatezd2rtl_boxsetz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_boxsetz00_bglt BgL_new4146z00_7036;

				BgL_new4146z00_7036 =
					((BgL_rtl_boxsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_boxsetz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4146z00_7036),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxsetz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 53 */
					BgL_objectz00_bglt BgL_auxz00_8544;

					BgL_auxz00_8544 = (BgL_objectz00_bglt) (BgL_new4146z00_7036);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8544, BFALSE);
				}
				return BgL_new4146z00_7036;
			}
		}
	}



/* _%allocate-rtl_boxset */
	obj_t BGl__z52allocatezd2rtl_boxsetz80zzsaw_defsz00(obj_t BgL_envz00_6070)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_boxsetz00_bglt BgL_auxz00_8547;

				{	/* SawMill/defs.scm 53 */
					BgL_rtl_boxsetz00_bglt BgL_res5971z00_7040;

					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_new4146z00_7038;

						BgL_new4146z00_7038 =
							((BgL_rtl_boxsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_boxsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4146z00_7038),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxsetz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 53 */
							BgL_objectz00_bglt BgL_auxz00_8552;

							BgL_auxz00_8552 = (BgL_objectz00_bglt) (BgL_new4146z00_7038);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8552, BFALSE);
						}
						BgL_res5971z00_7040 = BgL_new4146z00_7038;
					}
					BgL_auxz00_8547 = BgL_res5971z00_7040;
				}
				return (obj_t) (BgL_auxz00_8547);
			}
		}
	}



/* rtl_boxset-nil */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			if ((BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 53 */
					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_res5681z00_3963;

						{	/* SawMill/defs.scm 53 */
							BgL_rtl_boxsetz00_bglt BgL_new4146z00_3959;

							BgL_new4146z00_3959 =
								((BgL_rtl_boxsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_boxsetz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4146z00_3959),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_boxsetz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 53 */
								BgL_objectz00_bglt BgL_auxz00_8562;

								BgL_auxz00_8562 = (BgL_objectz00_bglt) (BgL_new4146z00_3959);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8562, BFALSE);
							}
							BgL_res5681z00_3963 = BgL_new4146z00_3959;
						}
						BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5681z00_3963);
					}
					{	/* SawMill/defs.scm 53 */
						BgL_rtl_boxsetz00_bglt BgL_res5682z00_3967;

						{	/* SawMill/defs.scm 53 */
							BgL_rtl_boxsetz00_bglt BgL_new4143z00_3964;

							BgL_new4143z00_3964 =
								(BgL_rtl_boxsetz00_bglt)
								(BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 53 */
								obj_t BgL_loc4142z00_3966;

								BgL_loc4142z00_3966 = BUNSPEC;
								((((BgL_rtl_boxsetz00_bglt) CREF(BgL_new4143z00_3964))->
										BgL_locz00) = ((obj_t) BgL_loc4142z00_3966), BUNSPEC);
								BgL_res5682z00_3967 = BgL_new4143z00_3964;
						}}
						(obj_t) (BgL_res5682z00_3967);
				}}
			else
				{	/* SawMill/defs.scm 53 */
					BFALSE;
				}
			return
				(BgL_rtl_boxsetz00_bglt)
				(BGl_z52thezd2rtl_boxsetzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_boxset-nil */
	obj_t BGl__rtl_boxsetzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6071)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			return (obj_t) (BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_vset? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vsetzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4135z00_258)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4135z00_258,
				BGl_rtl_vsetz00zzsaw_defsz00);
		}
	}



/* _rtl_vset? */
	obj_t BGl__rtl_vsetzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6068,
		obj_t BgL_obj4135z00_6069)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4135z00_6069,
					BGl_rtl_vsetz00zzsaw_defsz00));
		}
	}



/* make-rtl_vset */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt
		BGl_makezd2rtl_vsetzd2zzsaw_defsz00(obj_t BgL_loc4106z00_262,
		BgL_typez00_bglt BgL_type4107z00_263, BgL_typez00_bglt BgL_vtype4108z00_264)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_vsetz00_bglt BgL_new4109z00_3968;

				{	/* SawMill/defs.scm 52 */
					BgL_rtl_vsetz00_bglt BgL_res5683z00_3973;

					{	/* SawMill/defs.scm 52 */
						BgL_rtl_vsetz00_bglt BgL_new4119z00_3969;

						BgL_new4119z00_3969 =
							((BgL_rtl_vsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4119z00_3969),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vsetz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_8579;

							BgL_auxz00_8579 = (BgL_objectz00_bglt) (BgL_new4119z00_3969);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8579, BFALSE);
						}
						BgL_res5683z00_3973 = BgL_new4119z00_3969;
					}
					BgL_new4109z00_3968 = BgL_res5683z00_3973;
				}
				{	/* SawMill/defs.scm 52 */
					BgL_rtl_vsetz00_bglt BgL_res5684z00_3981;

					{	/* SawMill/defs.scm 52 */
						BgL_rtl_vsetz00_bglt BgL_new4114z00_3974;

						BgL_new4114z00_3974 = BgL_new4109z00_3968;
						{	/* SawMill/defs.scm 52 */
							obj_t BgL_loc4111z00_3978;

							BgL_typez00_bglt BgL_type4112z00_3979;

							BgL_typez00_bglt BgL_vtype4113z00_3980;

							BgL_loc4111z00_3978 = BgL_loc4106z00_262;
							BgL_type4112z00_3979 = BgL_type4107z00_263;
							BgL_vtype4113z00_3980 = BgL_vtype4108z00_264;
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3974))->
									BgL_locz00) = ((obj_t) BgL_loc4111z00_3978), BUNSPEC);
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3974))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4112z00_3979), BUNSPEC);
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3974))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype4113z00_3980), BUNSPEC);
							BgL_res5684z00_3981 = BgL_new4114z00_3974;
					}} BgL_res5684z00_3981;
				}
				return BgL_new4109z00_3968;
			}
		}
	}



/* _make-rtl_vset */
	obj_t BGl__makezd2rtl_vsetzd2zzsaw_defsz00(obj_t BgL_envz00_6213,
		obj_t BgL_loc4106z00_6214, obj_t BgL_type4107z00_6215,
		obj_t BgL_vtype4108z00_6216)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			return
				(obj_t) (BGl_makezd2rtl_vsetzd2zzsaw_defsz00(BgL_loc4106z00_6214,
					(BgL_typez00_bglt) (BgL_type4107z00_6215),
					(BgL_typez00_bglt) (BgL_vtype4108z00_6216)));
		}
	}



/* fill-rtl_vset! */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt
		BGl_fillzd2rtl_vsetz12zc0zzsaw_defsz00(BgL_rtl_vsetz00_bglt
		BgL_new4114z00_265, obj_t BgL_loc4111z00_266,
		BgL_typez00_bglt BgL_type4112z00_267, BgL_typez00_bglt BgL_vtype4113z00_268)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				obj_t BgL_loc4111z00_7042;

				BgL_typez00_bglt BgL_type4112z00_7043;

				BgL_typez00_bglt BgL_vtype4113z00_7044;

				BgL_loc4111z00_7042 = BgL_loc4111z00_266;
				BgL_type4112z00_7043 = BgL_type4112z00_267;
				BgL_vtype4113z00_7044 = BgL_vtype4113z00_268;
				((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_265))->BgL_locz00) =
					((obj_t) BgL_loc4111z00_7042), BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_265))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4112z00_7043), BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_265))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype4113z00_7044), BUNSPEC);
				return BgL_new4114z00_265;
			}
		}
	}



/* _fill-rtl_vset! */
	obj_t BGl__fillzd2rtl_vsetz12zc0zzsaw_defsz00(obj_t BgL_envz00_6217,
		obj_t BgL_new4114z00_6218, obj_t BgL_loc4111z00_6219,
		obj_t BgL_type4112z00_6220, obj_t BgL_vtype4113z00_6221)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_vsetz00_bglt BgL_auxz00_8592;

				{	/* SawMill/defs.scm 52 */
					BgL_rtl_vsetz00_bglt BgL_res5972z00_7052;

					{	/* SawMill/defs.scm 52 */
						BgL_rtl_vsetz00_bglt BgL_new4114z00_7045;

						BgL_typez00_bglt BgL_type4112z00_7047;

						BgL_typez00_bglt BgL_vtype4113z00_7048;

						BgL_new4114z00_7045 = (BgL_rtl_vsetz00_bglt) (BgL_new4114z00_6218);
						BgL_type4112z00_7047 = (BgL_typez00_bglt) (BgL_type4112z00_6220);
						BgL_vtype4113z00_7048 = (BgL_typez00_bglt) (BgL_vtype4113z00_6221);
						{	/* SawMill/defs.scm 52 */
							obj_t BgL_loc4111z00_7049;

							BgL_typez00_bglt BgL_type4112z00_7050;

							BgL_typez00_bglt BgL_vtype4113z00_7051;

							BgL_loc4111z00_7049 = BgL_loc4111z00_6219;
							BgL_type4112z00_7050 = BgL_type4112z00_7047;
							BgL_vtype4113z00_7051 = BgL_vtype4113z00_7048;
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_7045))->
									BgL_locz00) = ((obj_t) BgL_loc4111z00_7049), BUNSPEC);
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_7045))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4112z00_7050), BUNSPEC);
							((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_7045))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype4113z00_7051), BUNSPEC);
							BgL_res5972z00_7052 = BgL_new4114z00_7045;
						}
					}
					BgL_auxz00_8592 = BgL_res5972z00_7052;
				}
				return (obj_t) (BgL_auxz00_8592);
			}
		}
	}



/* %allocate-rtl_vset */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt
		BGl_z52allocatezd2rtl_vsetz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_vsetz00_bglt BgL_new4119z00_7053;

				BgL_new4119z00_7053 =
					((BgL_rtl_vsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_vsetz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4119z00_7053),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_vsetz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 52 */
					BgL_objectz00_bglt BgL_auxz00_8604;

					BgL_auxz00_8604 = (BgL_objectz00_bglt) (BgL_new4119z00_7053);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8604, BFALSE);
				}
				return BgL_new4119z00_7053;
			}
		}
	}



/* _%allocate-rtl_vset */
	obj_t BGl__z52allocatezd2rtl_vsetz80zzsaw_defsz00(obj_t BgL_envz00_6066)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_vsetz00_bglt BgL_auxz00_8607;

				{	/* SawMill/defs.scm 52 */
					BgL_rtl_vsetz00_bglt BgL_res5973z00_7057;

					{	/* SawMill/defs.scm 52 */
						BgL_rtl_vsetz00_bglt BgL_new4119z00_7055;

						BgL_new4119z00_7055 =
							((BgL_rtl_vsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4119z00_7055),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vsetz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_8612;

							BgL_auxz00_8612 = (BgL_objectz00_bglt) (BgL_new4119z00_7055);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8612, BFALSE);
						}
						BgL_res5973z00_7057 = BgL_new4119z00_7055;
					}
					BgL_auxz00_8607 = BgL_res5973z00_7057;
				}
				return (obj_t) (BgL_auxz00_8607);
			}
		}
	}



/* rtl_vset-nil */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt BGl_rtl_vsetzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			if ((BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 52 */
					{	/* SawMill/defs.scm 52 */
						BgL_rtl_vsetz00_bglt BgL_res5685z00_3993;

						{	/* SawMill/defs.scm 52 */
							BgL_rtl_vsetz00_bglt BgL_new4119z00_3989;

							BgL_new4119z00_3989 =
								((BgL_rtl_vsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_vsetz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4119z00_3989),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_vsetz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_8622;

								BgL_auxz00_8622 = (BgL_objectz00_bglt) (BgL_new4119z00_3989);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8622, BFALSE);
							}
							BgL_res5685z00_3993 = BgL_new4119z00_3989;
						}
						BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5685z00_3993);
					}
					{	/* SawMill/defs.scm 52 */
						BgL_typez00_bglt BgL_arg5115z00_1848;

						BgL_typez00_bglt BgL_arg5116z00_1849;

						BgL_arg5115z00_1848 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5116z00_1849 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 52 */
							BgL_rtl_vsetz00_bglt BgL_res5686z00_4001;

							{	/* SawMill/defs.scm 52 */
								BgL_rtl_vsetz00_bglt BgL_new4114z00_3994;

								BgL_new4114z00_3994 =
									(BgL_rtl_vsetz00_bglt)
									(BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 52 */
									obj_t BgL_loc4111z00_3998;

									BgL_typez00_bglt BgL_type4112z00_3999;

									BgL_typez00_bglt BgL_vtype4113z00_4000;

									BgL_loc4111z00_3998 = BUNSPEC;
									BgL_type4112z00_3999 = BgL_arg5115z00_1848;
									BgL_vtype4113z00_4000 = BgL_arg5116z00_1849;
									((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3994))->
											BgL_locz00) = ((obj_t) BgL_loc4111z00_3998), BUNSPEC);
									((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3994))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4112z00_3999), BUNSPEC);
									((((BgL_rtl_vsetz00_bglt) CREF(BgL_new4114z00_3994))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype4113z00_4000), BUNSPEC);
									BgL_res5686z00_4001 = BgL_new4114z00_3994;
							}}
							(obj_t) (BgL_res5686z00_4001);
				}}}
			else
				{	/* SawMill/defs.scm 52 */
					BFALSE;
				}
			return
				(BgL_rtl_vsetz00_bglt) (BGl_z52thezd2rtl_vsetzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_vset-nil */
	obj_t BGl__rtl_vsetzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6067)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			return (obj_t) (BGl_rtl_vsetzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_setfield? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_setfieldzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4096z00_275)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4096z00_275,
				BGl_rtl_setfieldz00zzsaw_defsz00);
		}
	}



/* _rtl_setfield? */
	obj_t BGl__rtl_setfieldzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6064,
		obj_t BgL_obj4096z00_6065)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4096z00_6065,
					BGl_rtl_setfieldz00zzsaw_defsz00));
		}
	}



/* make-rtl_setfield */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t BgL_loc4060z00_279,
		obj_t BgL_name4061z00_280, BgL_typez00_bglt BgL_objtype4062z00_281,
		BgL_typez00_bglt BgL_type4063z00_282)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_setfieldz00_bglt BgL_new4064z00_4002;

				{	/* SawMill/defs.scm 51 */
					BgL_rtl_setfieldz00_bglt BgL_res5687z00_4007;

					{	/* SawMill/defs.scm 51 */
						BgL_rtl_setfieldz00_bglt BgL_new4076z00_4003;

						BgL_new4076z00_4003 =
							((BgL_rtl_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_setfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4076z00_4003),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_setfieldz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 51 */
							BgL_objectz00_bglt BgL_auxz00_8643;

							BgL_auxz00_8643 = (BgL_objectz00_bglt) (BgL_new4076z00_4003);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8643, BFALSE);
						}
						BgL_res5687z00_4007 = BgL_new4076z00_4003;
					}
					BgL_new4064z00_4002 = BgL_res5687z00_4007;
				}
				{	/* SawMill/defs.scm 51 */
					BgL_rtl_setfieldz00_bglt BgL_res5688z00_4017;

					{	/* SawMill/defs.scm 51 */
						BgL_rtl_setfieldz00_bglt BgL_new4070z00_4008;

						BgL_new4070z00_4008 = BgL_new4064z00_4002;
						{	/* SawMill/defs.scm 51 */
							obj_t BgL_loc4066z00_4013;

							obj_t BgL_name4067z00_4014;

							BgL_typez00_bglt BgL_objtype4068z00_4015;

							BgL_typez00_bglt BgL_type4069z00_4016;

							BgL_loc4066z00_4013 = BgL_loc4060z00_279;
							BgL_name4067z00_4014 = BgL_name4061z00_280;
							BgL_objtype4068z00_4015 = BgL_objtype4062z00_281;
							BgL_type4069z00_4016 = BgL_type4063z00_282;
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4008))->
									BgL_locz00) = ((obj_t) BgL_loc4066z00_4013), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4008))->
									BgL_namez00) = ((obj_t) BgL_name4067z00_4014), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4008))->
									BgL_objtypez00) =
								((BgL_typez00_bglt) BgL_objtype4068z00_4015), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4008))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4069z00_4016), BUNSPEC);
							BgL_res5688z00_4017 = BgL_new4070z00_4008;
					}} BgL_res5688z00_4017;
				}
				return BgL_new4064z00_4002;
			}
		}
	}



/* _make-rtl_setfield */
	obj_t BGl__makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t BgL_envz00_6222,
		obj_t BgL_loc4060z00_6223, obj_t BgL_name4061z00_6224,
		obj_t BgL_objtype4062z00_6225, obj_t BgL_type4063z00_6226)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			return
				(obj_t) (BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(BgL_loc4060z00_6223,
					BgL_name4061z00_6224, (BgL_typez00_bglt) (BgL_objtype4062z00_6225),
					(BgL_typez00_bglt) (BgL_type4063z00_6226)));
		}
	}



/* fill-rtl_setfield! */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_fillzd2rtl_setfieldz12zc0zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_new4070z00_283, obj_t BgL_loc4066z00_284, obj_t BgL_name4067z00_285,
		BgL_typez00_bglt BgL_objtype4068z00_286,
		BgL_typez00_bglt BgL_type4069z00_287)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				obj_t BgL_loc4066z00_7059;

				obj_t BgL_name4067z00_7060;

				BgL_typez00_bglt BgL_objtype4068z00_7061;

				BgL_typez00_bglt BgL_type4069z00_7062;

				BgL_loc4066z00_7059 = BgL_loc4066z00_284;
				BgL_name4067z00_7060 = BgL_name4067z00_285;
				BgL_objtype4068z00_7061 = BgL_objtype4068z00_286;
				BgL_type4069z00_7062 = BgL_type4069z00_287;
				((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_283))->BgL_locz00) =
					((obj_t) BgL_loc4066z00_7059), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_283))->BgL_namez00) =
					((obj_t) BgL_name4067z00_7060), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_283))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) BgL_objtype4068z00_7061), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_283))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4069z00_7062), BUNSPEC);
				return BgL_new4070z00_283;
			}
		}
	}



/* _fill-rtl_setfield! */
	obj_t BGl__fillzd2rtl_setfieldz12zc0zzsaw_defsz00(obj_t BgL_envz00_6227,
		obj_t BgL_new4070z00_6228, obj_t BgL_loc4066z00_6229,
		obj_t BgL_name4067z00_6230, obj_t BgL_objtype4068z00_6231,
		obj_t BgL_type4069z00_6232)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_setfieldz00_bglt BgL_auxz00_8658;

				{	/* SawMill/defs.scm 51 */
					BgL_rtl_setfieldz00_bglt BgL_res5974z00_7072;

					{	/* SawMill/defs.scm 51 */
						BgL_rtl_setfieldz00_bglt BgL_new4070z00_7063;

						obj_t BgL_name4067z00_7065;

						BgL_typez00_bglt BgL_objtype4068z00_7066;

						BgL_typez00_bglt BgL_type4069z00_7067;

						BgL_new4070z00_7063 =
							(BgL_rtl_setfieldz00_bglt) (BgL_new4070z00_6228);
						BgL_name4067z00_7065 = BgL_name4067z00_6230;
						BgL_objtype4068z00_7066 =
							(BgL_typez00_bglt) (BgL_objtype4068z00_6231);
						BgL_type4069z00_7067 = (BgL_typez00_bglt) (BgL_type4069z00_6232);
						{	/* SawMill/defs.scm 51 */
							obj_t BgL_loc4066z00_7068;

							obj_t BgL_name4067z00_7069;

							BgL_typez00_bglt BgL_objtype4068z00_7070;

							BgL_typez00_bglt BgL_type4069z00_7071;

							BgL_loc4066z00_7068 = BgL_loc4066z00_6229;
							BgL_name4067z00_7069 = BgL_name4067z00_7065;
							BgL_objtype4068z00_7070 = BgL_objtype4068z00_7066;
							BgL_type4069z00_7071 = BgL_type4069z00_7067;
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_7063))->
									BgL_locz00) = ((obj_t) BgL_loc4066z00_7068), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_7063))->
									BgL_namez00) = ((obj_t) BgL_name4067z00_7069), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_7063))->
									BgL_objtypez00) =
								((BgL_typez00_bglt) BgL_objtype4068z00_7070), BUNSPEC);
							((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_7063))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4069z00_7071), BUNSPEC);
							BgL_res5974z00_7072 = BgL_new4070z00_7063;
						}
					}
					BgL_auxz00_8658 = BgL_res5974z00_7072;
				}
				return (obj_t) (BgL_auxz00_8658);
			}
		}
	}



/* %allocate-rtl_setfield */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_z52allocatezd2rtl_setfieldz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_setfieldz00_bglt BgL_new4076z00_7073;

				BgL_new4076z00_7073 =
					((BgL_rtl_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_setfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4076z00_7073),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_setfieldz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 51 */
					BgL_objectz00_bglt BgL_auxz00_8671;

					BgL_auxz00_8671 = (BgL_objectz00_bglt) (BgL_new4076z00_7073);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8671, BFALSE);
				}
				return BgL_new4076z00_7073;
			}
		}
	}



/* _%allocate-rtl_setfield */
	obj_t BGl__z52allocatezd2rtl_setfieldz80zzsaw_defsz00(obj_t BgL_envz00_6062)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_setfieldz00_bglt BgL_auxz00_8674;

				{	/* SawMill/defs.scm 51 */
					BgL_rtl_setfieldz00_bglt BgL_res5975z00_7077;

					{	/* SawMill/defs.scm 51 */
						BgL_rtl_setfieldz00_bglt BgL_new4076z00_7075;

						BgL_new4076z00_7075 =
							((BgL_rtl_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_setfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4076z00_7075),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_setfieldz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 51 */
							BgL_objectz00_bglt BgL_auxz00_8679;

							BgL_auxz00_8679 = (BgL_objectz00_bglt) (BgL_new4076z00_7075);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8679, BFALSE);
						}
						BgL_res5975z00_7077 = BgL_new4076z00_7075;
					}
					BgL_auxz00_8674 = BgL_res5975z00_7077;
				}
				return (obj_t) (BgL_auxz00_8674);
			}
		}
	}



/* rtl_setfield-nil */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			if ((BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 51 */
					{	/* SawMill/defs.scm 51 */
						BgL_rtl_setfieldz00_bglt BgL_res5689z00_4030;

						{	/* SawMill/defs.scm 51 */
							BgL_rtl_setfieldz00_bglt BgL_new4076z00_4026;

							BgL_new4076z00_4026 =
								((BgL_rtl_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_setfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4076z00_4026),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_setfieldz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 51 */
								BgL_objectz00_bglt BgL_auxz00_8689;

								BgL_auxz00_8689 = (BgL_objectz00_bglt) (BgL_new4076z00_4026);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8689, BFALSE);
							}
							BgL_res5689z00_4030 = BgL_new4076z00_4026;
						}
						BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5689z00_4030);
					}
					{	/* SawMill/defs.scm 51 */
						BgL_typez00_bglt BgL_arg5120z00_1859;

						BgL_typez00_bglt BgL_arg5121z00_1860;

						BgL_arg5120z00_1859 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5121z00_1860 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 51 */
							BgL_rtl_setfieldz00_bglt BgL_res5690z00_4040;

							{	/* SawMill/defs.scm 51 */
								BgL_rtl_setfieldz00_bglt BgL_new4070z00_4031;

								BgL_new4070z00_4031 =
									(BgL_rtl_setfieldz00_bglt)
									(BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 51 */
									obj_t BgL_loc4066z00_4036;

									obj_t BgL_name4067z00_4037;

									BgL_typez00_bglt BgL_objtype4068z00_4038;

									BgL_typez00_bglt BgL_type4069z00_4039;

									BgL_loc4066z00_4036 = BUNSPEC;
									BgL_name4067z00_4037 = BGl_string5822z00zzsaw_defsz00;
									BgL_objtype4068z00_4038 = BgL_arg5120z00_1859;
									BgL_type4069z00_4039 = BgL_arg5121z00_1860;
									((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4031))->
											BgL_locz00) = ((obj_t) BgL_loc4066z00_4036), BUNSPEC);
									((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4031))->
											BgL_namez00) = ((obj_t) BgL_name4067z00_4037), BUNSPEC);
									((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4031))->
											BgL_objtypez00) =
										((BgL_typez00_bglt) BgL_objtype4068z00_4038), BUNSPEC);
									((((BgL_rtl_setfieldz00_bglt) CREF(BgL_new4070z00_4031))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4069z00_4039), BUNSPEC);
									BgL_res5690z00_4040 = BgL_new4070z00_4031;
							}}
							(obj_t) (BgL_res5690z00_4040);
				}}}
			else
				{	/* SawMill/defs.scm 51 */
					BFALSE;
				}
			return
				(BgL_rtl_setfieldz00_bglt)
				(BGl_z52thezd2rtl_setfieldzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_setfield-nil */
	obj_t BGl__rtl_setfieldzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6063)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			return (obj_t) (BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_storeg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_storegzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4044z00_297)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4044z00_297,
				BGl_rtl_storegz00zzsaw_defsz00);
		}
	}



/* _rtl_storeg? */
	obj_t BGl__rtl_storegzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6060,
		obj_t BgL_obj4044z00_6061)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4044z00_6061,
					BGl_rtl_storegz00zzsaw_defsz00));
		}
	}



/* make-rtl_storeg */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt
		BGl_makezd2rtl_storegzd2zzsaw_defsz00(obj_t BgL_loc4023z00_301,
		BgL_globalz00_bglt BgL_var4024z00_302)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_storegz00_bglt BgL_new4025z00_4041;

				{	/* SawMill/defs.scm 50 */
					BgL_rtl_storegz00_bglt BgL_res5691z00_4046;

					{	/* SawMill/defs.scm 50 */
						BgL_rtl_storegz00_bglt BgL_new4033z00_4042;

						BgL_new4033z00_4042 =
							((BgL_rtl_storegz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_storegz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4033z00_4042),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_storegz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_8711;

							BgL_auxz00_8711 = (BgL_objectz00_bglt) (BgL_new4033z00_4042);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8711, BFALSE);
						}
						BgL_res5691z00_4046 = BgL_new4033z00_4042;
					}
					BgL_new4025z00_4041 = BgL_res5691z00_4046;
				}
				{	/* SawMill/defs.scm 50 */
					BgL_rtl_storegz00_bglt BgL_res5692z00_4052;

					{	/* SawMill/defs.scm 50 */
						BgL_rtl_storegz00_bglt BgL_new4029z00_4047;

						BgL_new4029z00_4047 = BgL_new4025z00_4041;
						{	/* SawMill/defs.scm 50 */
							obj_t BgL_loc4027z00_4050;

							BgL_globalz00_bglt BgL_var4028z00_4051;

							BgL_loc4027z00_4050 = BgL_loc4023z00_301;
							BgL_var4028z00_4051 = BgL_var4024z00_302;
							((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_4047))->
									BgL_locz00) = ((obj_t) BgL_loc4027z00_4050), BUNSPEC);
							((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_4047))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var4028z00_4051), BUNSPEC);
							BgL_res5692z00_4052 = BgL_new4029z00_4047;
					}} BgL_res5692z00_4052;
				}
				return BgL_new4025z00_4041;
			}
		}
	}



/* _make-rtl_storeg */
	obj_t BGl__makezd2rtl_storegzd2zzsaw_defsz00(obj_t BgL_envz00_6233,
		obj_t BgL_loc4023z00_6234, obj_t BgL_var4024z00_6235)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			return
				(obj_t) (BGl_makezd2rtl_storegzd2zzsaw_defsz00(BgL_loc4023z00_6234,
					(BgL_globalz00_bglt) (BgL_var4024z00_6235)));
		}
	}



/* fill-rtl_storeg! */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt
		BGl_fillzd2rtl_storegz12zc0zzsaw_defsz00(BgL_rtl_storegz00_bglt
		BgL_new4029z00_303, obj_t BgL_loc4027z00_304,
		BgL_globalz00_bglt BgL_var4028z00_305)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				obj_t BgL_loc4027z00_7079;

				BgL_globalz00_bglt BgL_var4028z00_7080;

				BgL_loc4027z00_7079 = BgL_loc4027z00_304;
				BgL_var4028z00_7080 = BgL_var4028z00_305;
				((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_303))->BgL_locz00) =
					((obj_t) BgL_loc4027z00_7079), BUNSPEC);
				((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_303))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var4028z00_7080), BUNSPEC);
				return BgL_new4029z00_303;
			}
		}
	}



/* _fill-rtl_storeg! */
	obj_t BGl__fillzd2rtl_storegz12zc0zzsaw_defsz00(obj_t BgL_envz00_6236,
		obj_t BgL_new4029z00_6237, obj_t BgL_loc4027z00_6238,
		obj_t BgL_var4028z00_6239)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_storegz00_bglt BgL_auxz00_8721;

				{	/* SawMill/defs.scm 50 */
					BgL_rtl_storegz00_bglt BgL_res5976z00_7086;

					{	/* SawMill/defs.scm 50 */
						BgL_rtl_storegz00_bglt BgL_new4029z00_7081;

						BgL_globalz00_bglt BgL_var4028z00_7083;

						BgL_new4029z00_7081 =
							(BgL_rtl_storegz00_bglt) (BgL_new4029z00_6237);
						BgL_var4028z00_7083 = (BgL_globalz00_bglt) (BgL_var4028z00_6239);
						{	/* SawMill/defs.scm 50 */
							obj_t BgL_loc4027z00_7084;

							BgL_globalz00_bglt BgL_var4028z00_7085;

							BgL_loc4027z00_7084 = BgL_loc4027z00_6238;
							BgL_var4028z00_7085 = BgL_var4028z00_7083;
							((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_7081))->
									BgL_locz00) = ((obj_t) BgL_loc4027z00_7084), BUNSPEC);
							((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_7081))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var4028z00_7085), BUNSPEC);
							BgL_res5976z00_7086 = BgL_new4029z00_7081;
						}
					}
					BgL_auxz00_8721 = BgL_res5976z00_7086;
				}
				return (obj_t) (BgL_auxz00_8721);
			}
		}
	}



/* %allocate-rtl_storeg */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt
		BGl_z52allocatezd2rtl_storegz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_storegz00_bglt BgL_new4033z00_7087;

				BgL_new4033z00_7087 =
					((BgL_rtl_storegz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_storegz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4033z00_7087),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_storegz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 50 */
					BgL_objectz00_bglt BgL_auxz00_8731;

					BgL_auxz00_8731 = (BgL_objectz00_bglt) (BgL_new4033z00_7087);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8731, BFALSE);
				}
				return BgL_new4033z00_7087;
			}
		}
	}



/* _%allocate-rtl_storeg */
	obj_t BGl__z52allocatezd2rtl_storegz80zzsaw_defsz00(obj_t BgL_envz00_6058)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_storegz00_bglt BgL_auxz00_8734;

				{	/* SawMill/defs.scm 50 */
					BgL_rtl_storegz00_bglt BgL_res5977z00_7091;

					{	/* SawMill/defs.scm 50 */
						BgL_rtl_storegz00_bglt BgL_new4033z00_7089;

						BgL_new4033z00_7089 =
							((BgL_rtl_storegz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_storegz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4033z00_7089),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_storegz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_8739;

							BgL_auxz00_8739 = (BgL_objectz00_bglt) (BgL_new4033z00_7089);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8739, BFALSE);
						}
						BgL_res5977z00_7091 = BgL_new4033z00_7089;
					}
					BgL_auxz00_8734 = BgL_res5977z00_7091;
				}
				return (obj_t) (BgL_auxz00_8734);
			}
		}
	}



/* rtl_storeg-nil */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt BGl_rtl_storegzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			if ((BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 50 */
					{	/* SawMill/defs.scm 50 */
						BgL_rtl_storegz00_bglt BgL_res5693z00_4063;

						{	/* SawMill/defs.scm 50 */
							BgL_rtl_storegz00_bglt BgL_new4033z00_4059;

							BgL_new4033z00_4059 =
								((BgL_rtl_storegz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_storegz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4033z00_4059),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_storegz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 50 */
								BgL_objectz00_bglt BgL_auxz00_8749;

								BgL_auxz00_8749 = (BgL_objectz00_bglt) (BgL_new4033z00_4059);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8749, BFALSE);
							}
							BgL_res5693z00_4063 = BgL_new4033z00_4059;
						}
						BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5693z00_4063);
					}
					{	/* SawMill/defs.scm 50 */
						BgL_globalz00_bglt BgL_arg5124z00_1867;

						BgL_arg5124z00_1867 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMill/defs.scm 50 */
							BgL_rtl_storegz00_bglt BgL_res5694z00_4069;

							{	/* SawMill/defs.scm 50 */
								BgL_rtl_storegz00_bglt BgL_new4029z00_4064;

								BgL_new4029z00_4064 =
									(BgL_rtl_storegz00_bglt)
									(BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 50 */
									obj_t BgL_loc4027z00_4067;

									BgL_globalz00_bglt BgL_var4028z00_4068;

									BgL_loc4027z00_4067 = BUNSPEC;
									BgL_var4028z00_4068 = BgL_arg5124z00_1867;
									((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_4064))->
											BgL_locz00) = ((obj_t) BgL_loc4027z00_4067), BUNSPEC);
									((((BgL_rtl_storegz00_bglt) CREF(BgL_new4029z00_4064))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var4028z00_4068), BUNSPEC);
									BgL_res5694z00_4069 = BgL_new4029z00_4064;
							}}
							(obj_t) (BgL_res5694z00_4069);
				}}}
			else
				{	/* SawMill/defs.scm 50 */
					BFALSE;
				}
			return
				(BgL_rtl_storegz00_bglt)
				(BGl_z52thezd2rtl_storegzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_storeg-nil */
	obj_t BGl__rtl_storegzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6059)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			return (obj_t) (BGl_rtl_storegzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_effect? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_effectzf3zf3zzsaw_defsz00(obj_t
		BgL_obj4016z00_309)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4016z00_309,
				BGl_rtl_effectz00zzsaw_defsz00);
		}
	}



/* _rtl_effect? */
	obj_t BGl__rtl_effectzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6056,
		obj_t BgL_obj4016z00_6057)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4016z00_6057,
					BGl_rtl_effectz00zzsaw_defsz00));
		}
	}



/* make-rtl_effect */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt
		BGl_makezd2rtl_effectzd2zzsaw_defsz00(obj_t BgL_loc4001z00_313)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{	/* SawMill/defs.scm 49 */
				BgL_rtl_effectz00_bglt BgL_new4002z00_4070;

				{	/* SawMill/defs.scm 49 */
					BgL_rtl_effectz00_bglt BgL_res5695z00_4075;

					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_new4008z00_4071;

						BgL_new4008z00_4071 =
							((BgL_rtl_effectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_effectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_4071),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_effectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_8768;

							BgL_auxz00_8768 = (BgL_objectz00_bglt) (BgL_new4008z00_4071);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8768, BFALSE);
						}
						BgL_res5695z00_4075 = BgL_new4008z00_4071;
					}
					BgL_new4002z00_4070 = BgL_res5695z00_4075;
				}
				{	/* SawMill/defs.scm 49 */
					BgL_rtl_effectz00_bglt BgL_res5696z00_4079;

					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_new4005z00_4076;

						BgL_new4005z00_4076 = BgL_new4002z00_4070;
						{	/* SawMill/defs.scm 49 */
							obj_t BgL_loc4004z00_4078;

							BgL_loc4004z00_4078 = BgL_loc4001z00_313;
							((((BgL_rtl_effectz00_bglt) CREF(BgL_new4005z00_4076))->
									BgL_locz00) = ((obj_t) BgL_loc4004z00_4078), BUNSPEC);
							BgL_res5696z00_4079 = BgL_new4005z00_4076;
					}} BgL_res5696z00_4079;
				}
				return BgL_new4002z00_4070;
			}
		}
	}



/* _make-rtl_effect */
	obj_t BGl__makezd2rtl_effectzd2zzsaw_defsz00(obj_t BgL_envz00_6240,
		obj_t BgL_loc4001z00_6241)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			return
				(obj_t) (BGl_makezd2rtl_effectzd2zzsaw_defsz00(BgL_loc4001z00_6241));
		}
	}



/* fill-rtl_effect! */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt
		BGl_fillzd2rtl_effectz12zc0zzsaw_defsz00(BgL_rtl_effectz00_bglt
		BgL_new4005z00_314, obj_t BgL_loc4004z00_315)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{	/* SawMill/defs.scm 49 */
				obj_t BgL_loc4004z00_7093;

				BgL_loc4004z00_7093 = BgL_loc4004z00_315;
				((((BgL_rtl_effectz00_bglt) CREF(BgL_new4005z00_314))->BgL_locz00) =
					((obj_t) BgL_loc4004z00_7093), BUNSPEC);
				return BgL_new4005z00_314;
			}
		}
	}



/* _fill-rtl_effect! */
	obj_t BGl__fillzd2rtl_effectz12zc0zzsaw_defsz00(obj_t BgL_envz00_6242,
		obj_t BgL_new4005z00_6243, obj_t BgL_loc4004z00_6244)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{	/* SawMill/defs.scm 49 */
				BgL_rtl_effectz00_bglt BgL_auxz00_8775;

				{	/* SawMill/defs.scm 49 */
					BgL_rtl_effectz00_bglt BgL_res5978z00_7097;

					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_new4005z00_7094;

						BgL_new4005z00_7094 =
							(BgL_rtl_effectz00_bglt) (BgL_new4005z00_6243);
						{	/* SawMill/defs.scm 49 */
							obj_t BgL_loc4004z00_7096;

							BgL_loc4004z00_7096 = BgL_loc4004z00_6244;
							((((BgL_rtl_effectz00_bglt) CREF(BgL_new4005z00_7094))->
									BgL_locz00) = ((obj_t) BgL_loc4004z00_7096), BUNSPEC);
							BgL_res5978z00_7097 = BgL_new4005z00_7094;
						}
					}
					BgL_auxz00_8775 = BgL_res5978z00_7097;
				}
				return (obj_t) (BgL_auxz00_8775);
			}
		}
	}



/* %allocate-rtl_effect */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt
		BGl_z52allocatezd2rtl_effectz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{	/* SawMill/defs.scm 49 */
				BgL_rtl_effectz00_bglt BgL_new4008z00_7098;

				BgL_new4008z00_7098 =
					((BgL_rtl_effectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_effectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_7098),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_effectz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 49 */
					BgL_objectz00_bglt BgL_auxz00_8783;

					BgL_auxz00_8783 = (BgL_objectz00_bglt) (BgL_new4008z00_7098);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8783, BFALSE);
				}
				return BgL_new4008z00_7098;
			}
		}
	}



/* _%allocate-rtl_effect */
	obj_t BGl__z52allocatezd2rtl_effectz80zzsaw_defsz00(obj_t BgL_envz00_6054)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{	/* SawMill/defs.scm 49 */
				BgL_rtl_effectz00_bglt BgL_auxz00_8786;

				{	/* SawMill/defs.scm 49 */
					BgL_rtl_effectz00_bglt BgL_res5979z00_7102;

					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_new4008z00_7100;

						BgL_new4008z00_7100 =
							((BgL_rtl_effectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_effectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4008z00_7100),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_effectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_8791;

							BgL_auxz00_8791 = (BgL_objectz00_bglt) (BgL_new4008z00_7100);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8791, BFALSE);
						}
						BgL_res5979z00_7102 = BgL_new4008z00_7100;
					}
					BgL_auxz00_8786 = BgL_res5979z00_7102;
				}
				return (obj_t) (BgL_auxz00_8786);
			}
		}
	}



/* rtl_effect-nil */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt BGl_rtl_effectzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			if ((BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 49 */
					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_res5697z00_4089;

						{	/* SawMill/defs.scm 49 */
							BgL_rtl_effectz00_bglt BgL_new4008z00_4085;

							BgL_new4008z00_4085 =
								((BgL_rtl_effectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_effectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4008z00_4085),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_effectz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 49 */
								BgL_objectz00_bglt BgL_auxz00_8801;

								BgL_auxz00_8801 = (BgL_objectz00_bglt) (BgL_new4008z00_4085);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8801, BFALSE);
							}
							BgL_res5697z00_4089 = BgL_new4008z00_4085;
						}
						BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5697z00_4089);
					}
					{	/* SawMill/defs.scm 49 */
						BgL_rtl_effectz00_bglt BgL_res5698z00_4093;

						{	/* SawMill/defs.scm 49 */
							BgL_rtl_effectz00_bglt BgL_new4005z00_4090;

							BgL_new4005z00_4090 =
								(BgL_rtl_effectz00_bglt)
								(BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 49 */
								obj_t BgL_loc4004z00_4092;

								BgL_loc4004z00_4092 = BUNSPEC;
								((((BgL_rtl_effectz00_bglt) CREF(BgL_new4005z00_4090))->
										BgL_locz00) = ((obj_t) BgL_loc4004z00_4092), BUNSPEC);
								BgL_res5698z00_4093 = BgL_new4005z00_4090;
						}}
						(obj_t) (BgL_res5698z00_4093);
				}}
			else
				{	/* SawMill/defs.scm 49 */
					BFALSE;
				}
			return
				(BgL_rtl_effectz00_bglt)
				(BGl_z52thezd2rtl_effectzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_effect-nil */
	obj_t BGl__rtl_effectzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6055)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			return (obj_t) (BGl_rtl_effectzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_boxref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_boxrefzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3997z00_316)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3997z00_316,
				BGl_rtl_boxrefz00zzsaw_defsz00);
		}
	}



/* _rtl_boxref? */
	obj_t BGl__rtl_boxrefzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6052,
		obj_t BgL_obj3997z00_6053)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3997z00_6053,
					BGl_rtl_boxrefz00zzsaw_defsz00));
		}
	}



/* make-rtl_boxref */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt
		BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t BgL_loc3983z00_320)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_boxrefz00_bglt BgL_new3984z00_4094;

				{	/* SawMill/defs.scm 47 */
					BgL_rtl_boxrefz00_bglt BgL_res5699z00_4099;

					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_new3990z00_4095;

						BgL_new3990z00_4095 =
							((BgL_rtl_boxrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_boxrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3990z00_4095),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 47 */
							BgL_objectz00_bglt BgL_auxz00_8818;

							BgL_auxz00_8818 = (BgL_objectz00_bglt) (BgL_new3990z00_4095);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8818, BFALSE);
						}
						BgL_res5699z00_4099 = BgL_new3990z00_4095;
					}
					BgL_new3984z00_4094 = BgL_res5699z00_4099;
				}
				{	/* SawMill/defs.scm 47 */
					BgL_rtl_boxrefz00_bglt BgL_res5700z00_4103;

					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_new3987z00_4100;

						BgL_new3987z00_4100 = BgL_new3984z00_4094;
						{	/* SawMill/defs.scm 47 */
							obj_t BgL_loc3986z00_4102;

							BgL_loc3986z00_4102 = BgL_loc3983z00_320;
							((((BgL_rtl_boxrefz00_bglt) CREF(BgL_new3987z00_4100))->
									BgL_locz00) = ((obj_t) BgL_loc3986z00_4102), BUNSPEC);
							BgL_res5700z00_4103 = BgL_new3987z00_4100;
					}} BgL_res5700z00_4103;
				}
				return BgL_new3984z00_4094;
			}
		}
	}



/* _make-rtl_boxref */
	obj_t BGl__makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t BgL_envz00_6245,
		obj_t BgL_loc3983z00_6246)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			return
				(obj_t) (BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(BgL_loc3983z00_6246));
		}
	}



/* fill-rtl_boxref! */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt
		BGl_fillzd2rtl_boxrefz12zc0zzsaw_defsz00(BgL_rtl_boxrefz00_bglt
		BgL_new3987z00_321, obj_t BgL_loc3986z00_322)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				obj_t BgL_loc3986z00_7104;

				BgL_loc3986z00_7104 = BgL_loc3986z00_322;
				((((BgL_rtl_boxrefz00_bglt) CREF(BgL_new3987z00_321))->BgL_locz00) =
					((obj_t) BgL_loc3986z00_7104), BUNSPEC);
				return BgL_new3987z00_321;
			}
		}
	}



/* _fill-rtl_boxref! */
	obj_t BGl__fillzd2rtl_boxrefz12zc0zzsaw_defsz00(obj_t BgL_envz00_6247,
		obj_t BgL_new3987z00_6248, obj_t BgL_loc3986z00_6249)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_boxrefz00_bglt BgL_auxz00_8825;

				{	/* SawMill/defs.scm 47 */
					BgL_rtl_boxrefz00_bglt BgL_res5980z00_7108;

					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_new3987z00_7105;

						BgL_new3987z00_7105 =
							(BgL_rtl_boxrefz00_bglt) (BgL_new3987z00_6248);
						{	/* SawMill/defs.scm 47 */
							obj_t BgL_loc3986z00_7107;

							BgL_loc3986z00_7107 = BgL_loc3986z00_6249;
							((((BgL_rtl_boxrefz00_bglt) CREF(BgL_new3987z00_7105))->
									BgL_locz00) = ((obj_t) BgL_loc3986z00_7107), BUNSPEC);
							BgL_res5980z00_7108 = BgL_new3987z00_7105;
						}
					}
					BgL_auxz00_8825 = BgL_res5980z00_7108;
				}
				return (obj_t) (BgL_auxz00_8825);
			}
		}
	}



/* %allocate-rtl_boxref */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt
		BGl_z52allocatezd2rtl_boxrefz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_boxrefz00_bglt BgL_new3990z00_7109;

				BgL_new3990z00_7109 =
					((BgL_rtl_boxrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_boxrefz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3990z00_7109),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxrefz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 47 */
					BgL_objectz00_bglt BgL_auxz00_8833;

					BgL_auxz00_8833 = (BgL_objectz00_bglt) (BgL_new3990z00_7109);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8833, BFALSE);
				}
				return BgL_new3990z00_7109;
			}
		}
	}



/* _%allocate-rtl_boxref */
	obj_t BGl__z52allocatezd2rtl_boxrefz80zzsaw_defsz00(obj_t BgL_envz00_6050)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_boxrefz00_bglt BgL_auxz00_8836;

				{	/* SawMill/defs.scm 47 */
					BgL_rtl_boxrefz00_bglt BgL_res5981z00_7113;

					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_new3990z00_7111;

						BgL_new3990z00_7111 =
							((BgL_rtl_boxrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_boxrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3990z00_7111),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_boxrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 47 */
							BgL_objectz00_bglt BgL_auxz00_8841;

							BgL_auxz00_8841 = (BgL_objectz00_bglt) (BgL_new3990z00_7111);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8841, BFALSE);
						}
						BgL_res5981z00_7113 = BgL_new3990z00_7111;
					}
					BgL_auxz00_8836 = BgL_res5981z00_7113;
				}
				return (obj_t) (BgL_auxz00_8836);
			}
		}
	}



/* rtl_boxref-nil */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			if ((BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 47 */
					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_res5701z00_4113;

						{	/* SawMill/defs.scm 47 */
							BgL_rtl_boxrefz00_bglt BgL_new3990z00_4109;

							BgL_new3990z00_4109 =
								((BgL_rtl_boxrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_boxrefz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3990z00_4109),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_boxrefz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 47 */
								BgL_objectz00_bglt BgL_auxz00_8851;

								BgL_auxz00_8851 = (BgL_objectz00_bglt) (BgL_new3990z00_4109);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8851, BFALSE);
							}
							BgL_res5701z00_4113 = BgL_new3990z00_4109;
						}
						BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5701z00_4113);
					}
					{	/* SawMill/defs.scm 47 */
						BgL_rtl_boxrefz00_bglt BgL_res5702z00_4117;

						{	/* SawMill/defs.scm 47 */
							BgL_rtl_boxrefz00_bglt BgL_new3987z00_4114;

							BgL_new3987z00_4114 =
								(BgL_rtl_boxrefz00_bglt)
								(BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 47 */
								obj_t BgL_loc3986z00_4116;

								BgL_loc3986z00_4116 = BUNSPEC;
								((((BgL_rtl_boxrefz00_bglt) CREF(BgL_new3987z00_4114))->
										BgL_locz00) = ((obj_t) BgL_loc3986z00_4116), BUNSPEC);
								BgL_res5702z00_4117 = BgL_new3987z00_4114;
						}}
						(obj_t) (BgL_res5702z00_4117);
				}}
			else
				{	/* SawMill/defs.scm 47 */
					BFALSE;
				}
			return
				(BgL_rtl_boxrefz00_bglt)
				(BGl_z52thezd2rtl_boxrefzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_boxref-nil */
	obj_t BGl__rtl_boxrefzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6051)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			return (obj_t) (BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_makebox? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_makeboxzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3979z00_323)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3979z00_323,
				BGl_rtl_makeboxz00zzsaw_defsz00);
		}
	}



/* _rtl_makebox? */
	obj_t BGl__rtl_makeboxzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6048,
		obj_t BgL_obj3979z00_6049)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3979z00_6049,
					BGl_rtl_makeboxz00zzsaw_defsz00));
		}
	}



/* make-rtl_makebox */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t BgL_loc3965z00_327)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_makeboxz00_bglt BgL_new3966z00_4118;

				{	/* SawMill/defs.scm 46 */
					BgL_rtl_makeboxz00_bglt BgL_res5703z00_4123;

					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_new3972z00_4119;

						BgL_new3972z00_4119 =
							((BgL_rtl_makeboxz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_makeboxz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3972z00_4119),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_makeboxz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 46 */
							BgL_objectz00_bglt BgL_auxz00_8868;

							BgL_auxz00_8868 = (BgL_objectz00_bglt) (BgL_new3972z00_4119);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8868, BFALSE);
						}
						BgL_res5703z00_4123 = BgL_new3972z00_4119;
					}
					BgL_new3966z00_4118 = BgL_res5703z00_4123;
				}
				{	/* SawMill/defs.scm 46 */
					BgL_rtl_makeboxz00_bglt BgL_res5704z00_4127;

					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_new3969z00_4124;

						BgL_new3969z00_4124 = BgL_new3966z00_4118;
						{	/* SawMill/defs.scm 46 */
							obj_t BgL_loc3968z00_4126;

							BgL_loc3968z00_4126 = BgL_loc3965z00_327;
							((((BgL_rtl_makeboxz00_bglt) CREF(BgL_new3969z00_4124))->
									BgL_locz00) = ((obj_t) BgL_loc3968z00_4126), BUNSPEC);
							BgL_res5704z00_4127 = BgL_new3969z00_4124;
					}} BgL_res5704z00_4127;
				}
				return BgL_new3966z00_4118;
			}
		}
	}



/* _make-rtl_makebox */
	obj_t BGl__makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t BgL_envz00_6250,
		obj_t BgL_loc3965z00_6251)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			return
				(obj_t) (BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(BgL_loc3965z00_6251));
		}
	}



/* fill-rtl_makebox! */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_fillzd2rtl_makeboxz12zc0zzsaw_defsz00(BgL_rtl_makeboxz00_bglt
		BgL_new3969z00_328, obj_t BgL_loc3968z00_329)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				obj_t BgL_loc3968z00_7115;

				BgL_loc3968z00_7115 = BgL_loc3968z00_329;
				((((BgL_rtl_makeboxz00_bglt) CREF(BgL_new3969z00_328))->BgL_locz00) =
					((obj_t) BgL_loc3968z00_7115), BUNSPEC);
				return BgL_new3969z00_328;
			}
		}
	}



/* _fill-rtl_makebox! */
	obj_t BGl__fillzd2rtl_makeboxz12zc0zzsaw_defsz00(obj_t BgL_envz00_6252,
		obj_t BgL_new3969z00_6253, obj_t BgL_loc3968z00_6254)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_makeboxz00_bglt BgL_auxz00_8875;

				{	/* SawMill/defs.scm 46 */
					BgL_rtl_makeboxz00_bglt BgL_res5982z00_7119;

					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_new3969z00_7116;

						BgL_new3969z00_7116 =
							(BgL_rtl_makeboxz00_bglt) (BgL_new3969z00_6253);
						{	/* SawMill/defs.scm 46 */
							obj_t BgL_loc3968z00_7118;

							BgL_loc3968z00_7118 = BgL_loc3968z00_6254;
							((((BgL_rtl_makeboxz00_bglt) CREF(BgL_new3969z00_7116))->
									BgL_locz00) = ((obj_t) BgL_loc3968z00_7118), BUNSPEC);
							BgL_res5982z00_7119 = BgL_new3969z00_7116;
						}
					}
					BgL_auxz00_8875 = BgL_res5982z00_7119;
				}
				return (obj_t) (BgL_auxz00_8875);
			}
		}
	}



/* %allocate-rtl_makebox */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_z52allocatezd2rtl_makeboxz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_makeboxz00_bglt BgL_new3972z00_7120;

				BgL_new3972z00_7120 =
					((BgL_rtl_makeboxz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_makeboxz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3972z00_7120),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_makeboxz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 46 */
					BgL_objectz00_bglt BgL_auxz00_8883;

					BgL_auxz00_8883 = (BgL_objectz00_bglt) (BgL_new3972z00_7120);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8883, BFALSE);
				}
				return BgL_new3972z00_7120;
			}
		}
	}



/* _%allocate-rtl_makebox */
	obj_t BGl__z52allocatezd2rtl_makeboxz80zzsaw_defsz00(obj_t BgL_envz00_6046)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_makeboxz00_bglt BgL_auxz00_8886;

				{	/* SawMill/defs.scm 46 */
					BgL_rtl_makeboxz00_bglt BgL_res5983z00_7124;

					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_new3972z00_7122;

						BgL_new3972z00_7122 =
							((BgL_rtl_makeboxz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_makeboxz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3972z00_7122),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_makeboxz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 46 */
							BgL_objectz00_bglt BgL_auxz00_8891;

							BgL_auxz00_8891 = (BgL_objectz00_bglt) (BgL_new3972z00_7122);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8891, BFALSE);
						}
						BgL_res5983z00_7124 = BgL_new3972z00_7122;
					}
					BgL_auxz00_8886 = BgL_res5983z00_7124;
				}
				return (obj_t) (BgL_auxz00_8886);
			}
		}
	}



/* rtl_makebox-nil */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			if ((BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 46 */
					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_res5705z00_4137;

						{	/* SawMill/defs.scm 46 */
							BgL_rtl_makeboxz00_bglt BgL_new3972z00_4133;

							BgL_new3972z00_4133 =
								((BgL_rtl_makeboxz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_makeboxz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3972z00_4133),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_makeboxz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 46 */
								BgL_objectz00_bglt BgL_auxz00_8901;

								BgL_auxz00_8901 = (BgL_objectz00_bglt) (BgL_new3972z00_4133);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8901, BFALSE);
							}
							BgL_res5705z00_4137 = BgL_new3972z00_4133;
						}
						BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5705z00_4137);
					}
					{	/* SawMill/defs.scm 46 */
						BgL_rtl_makeboxz00_bglt BgL_res5706z00_4141;

						{	/* SawMill/defs.scm 46 */
							BgL_rtl_makeboxz00_bglt BgL_new3969z00_4138;

							BgL_new3969z00_4138 =
								(BgL_rtl_makeboxz00_bglt)
								(BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 46 */
								obj_t BgL_loc3968z00_4140;

								BgL_loc3968z00_4140 = BUNSPEC;
								((((BgL_rtl_makeboxz00_bglt) CREF(BgL_new3969z00_4138))->
										BgL_locz00) = ((obj_t) BgL_loc3968z00_4140), BUNSPEC);
								BgL_res5706z00_4141 = BgL_new3969z00_4138;
						}}
						(obj_t) (BgL_res5706z00_4141);
				}}
			else
				{	/* SawMill/defs.scm 46 */
					BFALSE;
				}
			return
				(BgL_rtl_makeboxz00_bglt)
				(BGl_z52thezd2rtl_makeboxzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_makebox-nil */
	obj_t BGl__rtl_makeboxzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6047)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			return (obj_t) (BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_isa? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_isazf3zf3zzsaw_defsz00(obj_t
		BgL_obj3961z00_330)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3961z00_330,
				BGl_rtl_isaz00zzsaw_defsz00);
		}
	}



/* _rtl_isa? */
	obj_t BGl__rtl_isazf3zf3zzsaw_defsz00(obj_t BgL_envz00_6044,
		obj_t BgL_obj3961z00_6045)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3961z00_6045,
					BGl_rtl_isaz00zzsaw_defsz00));
		}
	}



/* make-rtl_isa */
	BGL_EXPORTED_DEF BgL_rtl_isaz00_bglt BGl_makezd2rtl_isazd2zzsaw_defsz00(obj_t
		BgL_loc3940z00_334, BgL_typez00_bglt BgL_type3941z00_335)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_isaz00_bglt BgL_new3942z00_4142;

				{	/* SawMill/defs.scm 45 */
					BgL_rtl_isaz00_bglt BgL_res5707z00_4147;

					{	/* SawMill/defs.scm 45 */
						BgL_rtl_isaz00_bglt BgL_new3950z00_4143;

						BgL_new3950z00_4143 =
							((BgL_rtl_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_isaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3950z00_4143),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_isaz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_8918;

							BgL_auxz00_8918 = (BgL_objectz00_bglt) (BgL_new3950z00_4143);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8918, BFALSE);
						}
						BgL_res5707z00_4147 = BgL_new3950z00_4143;
					}
					BgL_new3942z00_4142 = BgL_res5707z00_4147;
				}
				{	/* SawMill/defs.scm 45 */
					BgL_rtl_isaz00_bglt BgL_res5708z00_4153;

					{	/* SawMill/defs.scm 45 */
						BgL_rtl_isaz00_bglt BgL_new3946z00_4148;

						BgL_new3946z00_4148 = BgL_new3942z00_4142;
						{	/* SawMill/defs.scm 45 */
							obj_t BgL_loc3944z00_4151;

							BgL_typez00_bglt BgL_type3945z00_4152;

							BgL_loc3944z00_4151 = BgL_loc3940z00_334;
							BgL_type3945z00_4152 = BgL_type3941z00_335;
							((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_4148))->BgL_locz00) =
								((obj_t) BgL_loc3944z00_4151), BUNSPEC);
							((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_4148))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3945z00_4152), BUNSPEC);
							BgL_res5708z00_4153 = BgL_new3946z00_4148;
					}} BgL_res5708z00_4153;
				}
				return BgL_new3942z00_4142;
			}
		}
	}



/* _make-rtl_isa */
	obj_t BGl__makezd2rtl_isazd2zzsaw_defsz00(obj_t BgL_envz00_6255,
		obj_t BgL_loc3940z00_6256, obj_t BgL_type3941z00_6257)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			return
				(obj_t) (BGl_makezd2rtl_isazd2zzsaw_defsz00(BgL_loc3940z00_6256,
					(BgL_typez00_bglt) (BgL_type3941z00_6257)));
		}
	}



/* fill-rtl_isa! */
	BGL_EXPORTED_DEF BgL_rtl_isaz00_bglt
		BGl_fillzd2rtl_isaz12zc0zzsaw_defsz00(BgL_rtl_isaz00_bglt
		BgL_new3946z00_336, obj_t BgL_loc3944z00_337,
		BgL_typez00_bglt BgL_type3945z00_338)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				obj_t BgL_loc3944z00_7126;

				BgL_typez00_bglt BgL_type3945z00_7127;

				BgL_loc3944z00_7126 = BgL_loc3944z00_337;
				BgL_type3945z00_7127 = BgL_type3945z00_338;
				((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_336))->BgL_locz00) =
					((obj_t) BgL_loc3944z00_7126), BUNSPEC);
				((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_336))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3945z00_7127), BUNSPEC);
				return BgL_new3946z00_336;
			}
		}
	}



/* _fill-rtl_isa! */
	obj_t BGl__fillzd2rtl_isaz12zc0zzsaw_defsz00(obj_t BgL_envz00_6258,
		obj_t BgL_new3946z00_6259, obj_t BgL_loc3944z00_6260,
		obj_t BgL_type3945z00_6261)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_isaz00_bglt BgL_auxz00_8928;

				{	/* SawMill/defs.scm 45 */
					BgL_rtl_isaz00_bglt BgL_res5984z00_7133;

					{	/* SawMill/defs.scm 45 */
						BgL_rtl_isaz00_bglt BgL_new3946z00_7128;

						BgL_typez00_bglt BgL_type3945z00_7130;

						BgL_new3946z00_7128 = (BgL_rtl_isaz00_bglt) (BgL_new3946z00_6259);
						BgL_type3945z00_7130 = (BgL_typez00_bglt) (BgL_type3945z00_6261);
						{	/* SawMill/defs.scm 45 */
							obj_t BgL_loc3944z00_7131;

							BgL_typez00_bglt BgL_type3945z00_7132;

							BgL_loc3944z00_7131 = BgL_loc3944z00_6260;
							BgL_type3945z00_7132 = BgL_type3945z00_7130;
							((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_7128))->BgL_locz00) =
								((obj_t) BgL_loc3944z00_7131), BUNSPEC);
							((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_7128))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3945z00_7132), BUNSPEC);
							BgL_res5984z00_7133 = BgL_new3946z00_7128;
						}
					}
					BgL_auxz00_8928 = BgL_res5984z00_7133;
				}
				return (obj_t) (BgL_auxz00_8928);
			}
		}
	}



/* %allocate-rtl_isa */
	BGL_EXPORTED_DEF BgL_rtl_isaz00_bglt
		BGl_z52allocatezd2rtl_isaz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_isaz00_bglt BgL_new3950z00_7134;

				BgL_new3950z00_7134 =
					((BgL_rtl_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_isaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3950z00_7134),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_isaz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 45 */
					BgL_objectz00_bglt BgL_auxz00_8938;

					BgL_auxz00_8938 = (BgL_objectz00_bglt) (BgL_new3950z00_7134);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8938, BFALSE);
				}
				return BgL_new3950z00_7134;
			}
		}
	}



/* _%allocate-rtl_isa */
	obj_t BGl__z52allocatezd2rtl_isaz80zzsaw_defsz00(obj_t BgL_envz00_6042)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_isaz00_bglt BgL_auxz00_8941;

				{	/* SawMill/defs.scm 45 */
					BgL_rtl_isaz00_bglt BgL_res5985z00_7138;

					{	/* SawMill/defs.scm 45 */
						BgL_rtl_isaz00_bglt BgL_new3950z00_7136;

						BgL_new3950z00_7136 =
							((BgL_rtl_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_isaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3950z00_7136),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_isaz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_8946;

							BgL_auxz00_8946 = (BgL_objectz00_bglt) (BgL_new3950z00_7136);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8946, BFALSE);
						}
						BgL_res5985z00_7138 = BgL_new3950z00_7136;
					}
					BgL_auxz00_8941 = BgL_res5985z00_7138;
				}
				return (obj_t) (BgL_auxz00_8941);
			}
		}
	}



/* rtl_isa-nil */
	BGL_EXPORTED_DEF BgL_rtl_isaz00_bglt BGl_rtl_isazd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			if ((BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 45 */
					{	/* SawMill/defs.scm 45 */
						BgL_rtl_isaz00_bglt BgL_res5709z00_4164;

						{	/* SawMill/defs.scm 45 */
							BgL_rtl_isaz00_bglt BgL_new3950z00_4160;

							BgL_new3950z00_4160 =
								((BgL_rtl_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_isaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3950z00_4160),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_isaz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 45 */
								BgL_objectz00_bglt BgL_auxz00_8956;

								BgL_auxz00_8956 = (BgL_objectz00_bglt) (BgL_new3950z00_4160);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8956, BFALSE);
							}
							BgL_res5709z00_4164 = BgL_new3950z00_4160;
						}
						BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5709z00_4164);
					}
					{	/* SawMill/defs.scm 45 */
						BgL_typez00_bglt BgL_arg5133z00_1889;

						BgL_arg5133z00_1889 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 45 */
							BgL_rtl_isaz00_bglt BgL_res5710z00_4170;

							{	/* SawMill/defs.scm 45 */
								BgL_rtl_isaz00_bglt BgL_new3946z00_4165;

								BgL_new3946z00_4165 =
									(BgL_rtl_isaz00_bglt)
									(BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 45 */
									obj_t BgL_loc3944z00_4168;

									BgL_typez00_bglt BgL_type3945z00_4169;

									BgL_loc3944z00_4168 = BUNSPEC;
									BgL_type3945z00_4169 = BgL_arg5133z00_1889;
									((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_4165))->
											BgL_locz00) = ((obj_t) BgL_loc3944z00_4168), BUNSPEC);
									((((BgL_rtl_isaz00_bglt) CREF(BgL_new3946z00_4165))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3945z00_4169), BUNSPEC);
									BgL_res5710z00_4170 = BgL_new3946z00_4165;
							}}
							(obj_t) (BgL_res5710z00_4170);
				}}}
			else
				{	/* SawMill/defs.scm 45 */
					BFALSE;
				}
			return (BgL_rtl_isaz00_bglt) (BGl_z52thezd2rtl_isazd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_isa-nil */
	obj_t BGl__rtl_isazd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6043)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			return (obj_t) (BGl_rtl_isazd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_vlength? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vlengthzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3933z00_342)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3933z00_342,
				BGl_rtl_vlengthz00zzsaw_defsz00);
		}
	}



/* _rtl_vlength? */
	obj_t BGl__rtl_vlengthzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6040,
		obj_t BgL_obj3933z00_6041)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3933z00_6041,
					BGl_rtl_vlengthz00zzsaw_defsz00));
		}
	}



/* make-rtl_vlength */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t BgL_loc3911z00_346,
		BgL_typez00_bglt BgL_type3912z00_347)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vlengthz00_bglt BgL_new3913z00_4171;

				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vlengthz00_bglt BgL_res5711z00_4176;

					{	/* SawMill/defs.scm 44 */
						BgL_rtl_vlengthz00_bglt BgL_new3921z00_4172;

						BgL_new3921z00_4172 =
							((BgL_rtl_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vlengthz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3921z00_4172),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vlengthz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_8975;

							BgL_auxz00_8975 = (BgL_objectz00_bglt) (BgL_new3921z00_4172);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8975, BFALSE);
						}
						BgL_res5711z00_4176 = BgL_new3921z00_4172;
					}
					BgL_new3913z00_4171 = BgL_res5711z00_4176;
				}
				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vlengthz00_bglt BgL_res5712z00_4182;

					{	/* SawMill/defs.scm 44 */
						BgL_rtl_vlengthz00_bglt BgL_new3917z00_4177;

						BgL_new3917z00_4177 = BgL_new3913z00_4171;
						{	/* SawMill/defs.scm 44 */
							obj_t BgL_loc3915z00_4180;

							BgL_typez00_bglt BgL_type3916z00_4181;

							BgL_loc3915z00_4180 = BgL_loc3911z00_346;
							BgL_type3916z00_4181 = BgL_type3912z00_347;
							((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_4177))->
									BgL_locz00) = ((obj_t) BgL_loc3915z00_4180), BUNSPEC);
							((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_4177))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3916z00_4181), BUNSPEC);
							BgL_res5712z00_4182 = BgL_new3917z00_4177;
					}} BgL_res5712z00_4182;
				}
				return BgL_new3913z00_4171;
			}
		}
	}



/* _make-rtl_vlength */
	obj_t BGl__makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t BgL_envz00_6262,
		obj_t BgL_loc3911z00_6263, obj_t BgL_type3912z00_6264)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			return
				(obj_t) (BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(BgL_loc3911z00_6263,
					(BgL_typez00_bglt) (BgL_type3912z00_6264)));
		}
	}



/* fill-rtl_vlength! */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_fillzd2rtl_vlengthz12zc0zzsaw_defsz00(BgL_rtl_vlengthz00_bglt
		BgL_new3917z00_348, obj_t BgL_loc3915z00_349,
		BgL_typez00_bglt BgL_type3916z00_350)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				obj_t BgL_loc3915z00_7140;

				BgL_typez00_bglt BgL_type3916z00_7141;

				BgL_loc3915z00_7140 = BgL_loc3915z00_349;
				BgL_type3916z00_7141 = BgL_type3916z00_350;
				((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_348))->BgL_locz00) =
					((obj_t) BgL_loc3915z00_7140), BUNSPEC);
				((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_348))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3916z00_7141), BUNSPEC);
				return BgL_new3917z00_348;
			}
		}
	}



/* _fill-rtl_vlength! */
	obj_t BGl__fillzd2rtl_vlengthz12zc0zzsaw_defsz00(obj_t BgL_envz00_6265,
		obj_t BgL_new3917z00_6266, obj_t BgL_loc3915z00_6267,
		obj_t BgL_type3916z00_6268)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vlengthz00_bglt BgL_auxz00_8985;

				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vlengthz00_bglt BgL_res5986z00_7147;

					{	/* SawMill/defs.scm 44 */
						BgL_rtl_vlengthz00_bglt BgL_new3917z00_7142;

						BgL_typez00_bglt BgL_type3916z00_7144;

						BgL_new3917z00_7142 =
							(BgL_rtl_vlengthz00_bglt) (BgL_new3917z00_6266);
						BgL_type3916z00_7144 = (BgL_typez00_bglt) (BgL_type3916z00_6268);
						{	/* SawMill/defs.scm 44 */
							obj_t BgL_loc3915z00_7145;

							BgL_typez00_bglt BgL_type3916z00_7146;

							BgL_loc3915z00_7145 = BgL_loc3915z00_6267;
							BgL_type3916z00_7146 = BgL_type3916z00_7144;
							((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_7142))->
									BgL_locz00) = ((obj_t) BgL_loc3915z00_7145), BUNSPEC);
							((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_7142))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3916z00_7146), BUNSPEC);
							BgL_res5986z00_7147 = BgL_new3917z00_7142;
						}
					}
					BgL_auxz00_8985 = BgL_res5986z00_7147;
				}
				return (obj_t) (BgL_auxz00_8985);
			}
		}
	}



/* %allocate-rtl_vlength */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_z52allocatezd2rtl_vlengthz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vlengthz00_bglt BgL_new3921z00_7148;

				BgL_new3921z00_7148 =
					((BgL_rtl_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_vlengthz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3921z00_7148),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_vlengthz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 44 */
					BgL_objectz00_bglt BgL_auxz00_8995;

					BgL_auxz00_8995 = (BgL_objectz00_bglt) (BgL_new3921z00_7148);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8995, BFALSE);
				}
				return BgL_new3921z00_7148;
			}
		}
	}



/* _%allocate-rtl_vlength */
	obj_t BGl__z52allocatezd2rtl_vlengthz80zzsaw_defsz00(obj_t BgL_envz00_6038)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vlengthz00_bglt BgL_auxz00_8998;

				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vlengthz00_bglt BgL_res5987z00_7152;

					{	/* SawMill/defs.scm 44 */
						BgL_rtl_vlengthz00_bglt BgL_new3921z00_7150;

						BgL_new3921z00_7150 =
							((BgL_rtl_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vlengthz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3921z00_7150),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vlengthz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_9003;

							BgL_auxz00_9003 = (BgL_objectz00_bglt) (BgL_new3921z00_7150);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9003, BFALSE);
						}
						BgL_res5987z00_7152 = BgL_new3921z00_7150;
					}
					BgL_auxz00_8998 = BgL_res5987z00_7152;
				}
				return (obj_t) (BgL_auxz00_8998);
			}
		}
	}



/* rtl_vlength-nil */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			if ((BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 44 */
					{	/* SawMill/defs.scm 44 */
						BgL_rtl_vlengthz00_bglt BgL_res5713z00_4193;

						{	/* SawMill/defs.scm 44 */
							BgL_rtl_vlengthz00_bglt BgL_new3921z00_4189;

							BgL_new3921z00_4189 =
								((BgL_rtl_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_vlengthz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3921z00_4189),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_vlengthz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 44 */
								BgL_objectz00_bglt BgL_auxz00_9013;

								BgL_auxz00_9013 = (BgL_objectz00_bglt) (BgL_new3921z00_4189);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9013, BFALSE);
							}
							BgL_res5713z00_4193 = BgL_new3921z00_4189;
						}
						BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5713z00_4193);
					}
					{	/* SawMill/defs.scm 44 */
						BgL_typez00_bglt BgL_arg5136z00_1896;

						BgL_arg5136z00_1896 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 44 */
							BgL_rtl_vlengthz00_bglt BgL_res5714z00_4199;

							{	/* SawMill/defs.scm 44 */
								BgL_rtl_vlengthz00_bglt BgL_new3917z00_4194;

								BgL_new3917z00_4194 =
									(BgL_rtl_vlengthz00_bglt)
									(BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 44 */
									obj_t BgL_loc3915z00_4197;

									BgL_typez00_bglt BgL_type3916z00_4198;

									BgL_loc3915z00_4197 = BUNSPEC;
									BgL_type3916z00_4198 = BgL_arg5136z00_1896;
									((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_4194))->
											BgL_locz00) = ((obj_t) BgL_loc3915z00_4197), BUNSPEC);
									((((BgL_rtl_vlengthz00_bglt) CREF(BgL_new3917z00_4194))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3916z00_4198), BUNSPEC);
									BgL_res5714z00_4199 = BgL_new3917z00_4194;
							}}
							(obj_t) (BgL_res5714z00_4199);
				}}}
			else
				{	/* SawMill/defs.scm 44 */
					BFALSE;
				}
			return
				(BgL_rtl_vlengthz00_bglt)
				(BGl_z52thezd2rtl_vlengthzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_vlength-nil */
	obj_t BGl__rtl_vlengthzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6039)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			return (obj_t) (BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_vref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vrefzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3904z00_354)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3904z00_354,
				BGl_rtl_vrefz00zzsaw_defsz00);
		}
	}



/* _rtl_vref? */
	obj_t BGl__rtl_vrefzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6036,
		obj_t BgL_obj3904z00_6037)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3904z00_6037,
					BGl_rtl_vrefz00zzsaw_defsz00));
		}
	}



/* make-rtl_vref */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt
		BGl_makezd2rtl_vrefzd2zzsaw_defsz00(obj_t BgL_loc3876z00_358,
		BgL_typez00_bglt BgL_type3877z00_359, BgL_typez00_bglt BgL_vtype3878z00_360)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vrefz00_bglt BgL_new3879z00_4200;

				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vrefz00_bglt BgL_res5715z00_4205;

					{	/* SawMill/defs.scm 43 */
						BgL_rtl_vrefz00_bglt BgL_new3889z00_4201;

						BgL_new3889z00_4201 =
							((BgL_rtl_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3889z00_4201),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_9032;

							BgL_auxz00_9032 = (BgL_objectz00_bglt) (BgL_new3889z00_4201);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9032, BFALSE);
						}
						BgL_res5715z00_4205 = BgL_new3889z00_4201;
					}
					BgL_new3879z00_4200 = BgL_res5715z00_4205;
				}
				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vrefz00_bglt BgL_res5716z00_4213;

					{	/* SawMill/defs.scm 43 */
						BgL_rtl_vrefz00_bglt BgL_new3884z00_4206;

						BgL_new3884z00_4206 = BgL_new3879z00_4200;
						{	/* SawMill/defs.scm 43 */
							obj_t BgL_loc3881z00_4210;

							BgL_typez00_bglt BgL_type3882z00_4211;

							BgL_typez00_bglt BgL_vtype3883z00_4212;

							BgL_loc3881z00_4210 = BgL_loc3876z00_358;
							BgL_type3882z00_4211 = BgL_type3877z00_359;
							BgL_vtype3883z00_4212 = BgL_vtype3878z00_360;
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4206))->
									BgL_locz00) = ((obj_t) BgL_loc3881z00_4210), BUNSPEC);
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4206))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3882z00_4211), BUNSPEC);
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4206))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3883z00_4212), BUNSPEC);
							BgL_res5716z00_4213 = BgL_new3884z00_4206;
					}} BgL_res5716z00_4213;
				}
				return BgL_new3879z00_4200;
			}
		}
	}



/* _make-rtl_vref */
	obj_t BGl__makezd2rtl_vrefzd2zzsaw_defsz00(obj_t BgL_envz00_6269,
		obj_t BgL_loc3876z00_6270, obj_t BgL_type3877z00_6271,
		obj_t BgL_vtype3878z00_6272)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			return
				(obj_t) (BGl_makezd2rtl_vrefzd2zzsaw_defsz00(BgL_loc3876z00_6270,
					(BgL_typez00_bglt) (BgL_type3877z00_6271),
					(BgL_typez00_bglt) (BgL_vtype3878z00_6272)));
		}
	}



/* fill-rtl_vref! */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt
		BGl_fillzd2rtl_vrefz12zc0zzsaw_defsz00(BgL_rtl_vrefz00_bglt
		BgL_new3884z00_361, obj_t BgL_loc3881z00_362,
		BgL_typez00_bglt BgL_type3882z00_363, BgL_typez00_bglt BgL_vtype3883z00_364)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				obj_t BgL_loc3881z00_7154;

				BgL_typez00_bglt BgL_type3882z00_7155;

				BgL_typez00_bglt BgL_vtype3883z00_7156;

				BgL_loc3881z00_7154 = BgL_loc3881z00_362;
				BgL_type3882z00_7155 = BgL_type3882z00_363;
				BgL_vtype3883z00_7156 = BgL_vtype3883z00_364;
				((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_361))->BgL_locz00) =
					((obj_t) BgL_loc3881z00_7154), BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_361))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3882z00_7155), BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_361))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype3883z00_7156), BUNSPEC);
				return BgL_new3884z00_361;
			}
		}
	}



/* _fill-rtl_vref! */
	obj_t BGl__fillzd2rtl_vrefz12zc0zzsaw_defsz00(obj_t BgL_envz00_6273,
		obj_t BgL_new3884z00_6274, obj_t BgL_loc3881z00_6275,
		obj_t BgL_type3882z00_6276, obj_t BgL_vtype3883z00_6277)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vrefz00_bglt BgL_auxz00_9045;

				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vrefz00_bglt BgL_res5988z00_7164;

					{	/* SawMill/defs.scm 43 */
						BgL_rtl_vrefz00_bglt BgL_new3884z00_7157;

						BgL_typez00_bglt BgL_type3882z00_7159;

						BgL_typez00_bglt BgL_vtype3883z00_7160;

						BgL_new3884z00_7157 = (BgL_rtl_vrefz00_bglt) (BgL_new3884z00_6274);
						BgL_type3882z00_7159 = (BgL_typez00_bglt) (BgL_type3882z00_6276);
						BgL_vtype3883z00_7160 = (BgL_typez00_bglt) (BgL_vtype3883z00_6277);
						{	/* SawMill/defs.scm 43 */
							obj_t BgL_loc3881z00_7161;

							BgL_typez00_bglt BgL_type3882z00_7162;

							BgL_typez00_bglt BgL_vtype3883z00_7163;

							BgL_loc3881z00_7161 = BgL_loc3881z00_6275;
							BgL_type3882z00_7162 = BgL_type3882z00_7159;
							BgL_vtype3883z00_7163 = BgL_vtype3883z00_7160;
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_7157))->
									BgL_locz00) = ((obj_t) BgL_loc3881z00_7161), BUNSPEC);
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_7157))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3882z00_7162), BUNSPEC);
							((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_7157))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3883z00_7163), BUNSPEC);
							BgL_res5988z00_7164 = BgL_new3884z00_7157;
						}
					}
					BgL_auxz00_9045 = BgL_res5988z00_7164;
				}
				return (obj_t) (BgL_auxz00_9045);
			}
		}
	}



/* %allocate-rtl_vref */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt
		BGl_z52allocatezd2rtl_vrefz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vrefz00_bglt BgL_new3889z00_7165;

				BgL_new3889z00_7165 =
					((BgL_rtl_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_vrefz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3889z00_7165),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_vrefz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 43 */
					BgL_objectz00_bglt BgL_auxz00_9057;

					BgL_auxz00_9057 = (BgL_objectz00_bglt) (BgL_new3889z00_7165);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9057, BFALSE);
				}
				return BgL_new3889z00_7165;
			}
		}
	}



/* _%allocate-rtl_vref */
	obj_t BGl__z52allocatezd2rtl_vrefz80zzsaw_defsz00(obj_t BgL_envz00_6034)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vrefz00_bglt BgL_auxz00_9060;

				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vrefz00_bglt BgL_res5989z00_7169;

					{	/* SawMill/defs.scm 43 */
						BgL_rtl_vrefz00_bglt BgL_new3889z00_7167;

						BgL_new3889z00_7167 =
							((BgL_rtl_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3889z00_7167),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_9065;

							BgL_auxz00_9065 = (BgL_objectz00_bglt) (BgL_new3889z00_7167);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9065, BFALSE);
						}
						BgL_res5989z00_7169 = BgL_new3889z00_7167;
					}
					BgL_auxz00_9060 = BgL_res5989z00_7169;
				}
				return (obj_t) (BgL_auxz00_9060);
			}
		}
	}



/* rtl_vref-nil */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt BGl_rtl_vrefzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			if ((BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 43 */
					{	/* SawMill/defs.scm 43 */
						BgL_rtl_vrefz00_bglt BgL_res5717z00_4225;

						{	/* SawMill/defs.scm 43 */
							BgL_rtl_vrefz00_bglt BgL_new3889z00_4221;

							BgL_new3889z00_4221 =
								((BgL_rtl_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_vrefz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3889z00_4221),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_vrefz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 43 */
								BgL_objectz00_bglt BgL_auxz00_9075;

								BgL_auxz00_9075 = (BgL_objectz00_bglt) (BgL_new3889z00_4221);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9075, BFALSE);
							}
							BgL_res5717z00_4225 = BgL_new3889z00_4221;
						}
						BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5717z00_4225);
					}
					{	/* SawMill/defs.scm 43 */
						BgL_typez00_bglt BgL_arg5139z00_1904;

						BgL_typez00_bglt BgL_arg5140z00_1905;

						BgL_arg5139z00_1904 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5140z00_1905 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 43 */
							BgL_rtl_vrefz00_bglt BgL_res5718z00_4233;

							{	/* SawMill/defs.scm 43 */
								BgL_rtl_vrefz00_bglt BgL_new3884z00_4226;

								BgL_new3884z00_4226 =
									(BgL_rtl_vrefz00_bglt)
									(BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 43 */
									obj_t BgL_loc3881z00_4230;

									BgL_typez00_bglt BgL_type3882z00_4231;

									BgL_typez00_bglt BgL_vtype3883z00_4232;

									BgL_loc3881z00_4230 = BUNSPEC;
									BgL_type3882z00_4231 = BgL_arg5139z00_1904;
									BgL_vtype3883z00_4232 = BgL_arg5140z00_1905;
									((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4226))->
											BgL_locz00) = ((obj_t) BgL_loc3881z00_4230), BUNSPEC);
									((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4226))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3882z00_4231), BUNSPEC);
									((((BgL_rtl_vrefz00_bglt) CREF(BgL_new3884z00_4226))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype3883z00_4232), BUNSPEC);
									BgL_res5718z00_4233 = BgL_new3884z00_4226;
							}}
							(obj_t) (BgL_res5718z00_4233);
				}}}
			else
				{	/* SawMill/defs.scm 43 */
					BFALSE;
				}
			return
				(BgL_rtl_vrefz00_bglt) (BGl_z52thezd2rtl_vrefzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_vref-nil */
	obj_t BGl__rtl_vrefzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6035)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			return (obj_t) (BGl_rtl_vrefzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_valloc? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_valloczf3zf3zzsaw_defsz00(obj_t
		BgL_obj3866z00_371)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3866z00_371,
				BGl_rtl_vallocz00zzsaw_defsz00);
		}
	}



/* _rtl_valloc? */
	obj_t BGl__rtl_valloczf3zf3zzsaw_defsz00(obj_t BgL_envz00_6032,
		obj_t BgL_obj3866z00_6033)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3866z00_6033,
					BGl_rtl_vallocz00zzsaw_defsz00));
		}
	}



/* make-rtl_valloc */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt
		BGl_makezd2rtl_valloczd2zzsaw_defsz00(obj_t BgL_loc3838z00_375,
		BgL_typez00_bglt BgL_type3839z00_376, BgL_typez00_bglt BgL_vtype3840z00_377)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_vallocz00_bglt BgL_new3841z00_4234;

				{	/* SawMill/defs.scm 42 */
					BgL_rtl_vallocz00_bglt BgL_res5719z00_4239;

					{	/* SawMill/defs.scm 42 */
						BgL_rtl_vallocz00_bglt BgL_new3851z00_4235;

						BgL_new3851z00_4235 =
							((BgL_rtl_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3851z00_4235),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vallocz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_9096;

							BgL_auxz00_9096 = (BgL_objectz00_bglt) (BgL_new3851z00_4235);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9096, BFALSE);
						}
						BgL_res5719z00_4239 = BgL_new3851z00_4235;
					}
					BgL_new3841z00_4234 = BgL_res5719z00_4239;
				}
				{	/* SawMill/defs.scm 42 */
					BgL_rtl_vallocz00_bglt BgL_res5720z00_4247;

					{	/* SawMill/defs.scm 42 */
						BgL_rtl_vallocz00_bglt BgL_new3846z00_4240;

						BgL_new3846z00_4240 = BgL_new3841z00_4234;
						{	/* SawMill/defs.scm 42 */
							obj_t BgL_loc3843z00_4244;

							BgL_typez00_bglt BgL_type3844z00_4245;

							BgL_typez00_bglt BgL_vtype3845z00_4246;

							BgL_loc3843z00_4244 = BgL_loc3838z00_375;
							BgL_type3844z00_4245 = BgL_type3839z00_376;
							BgL_vtype3845z00_4246 = BgL_vtype3840z00_377;
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4240))->
									BgL_locz00) = ((obj_t) BgL_loc3843z00_4244), BUNSPEC);
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4240))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3844z00_4245), BUNSPEC);
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4240))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3845z00_4246), BUNSPEC);
							BgL_res5720z00_4247 = BgL_new3846z00_4240;
					}} BgL_res5720z00_4247;
				}
				return BgL_new3841z00_4234;
			}
		}
	}



/* _make-rtl_valloc */
	obj_t BGl__makezd2rtl_valloczd2zzsaw_defsz00(obj_t BgL_envz00_6278,
		obj_t BgL_loc3838z00_6279, obj_t BgL_type3839z00_6280,
		obj_t BgL_vtype3840z00_6281)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			return
				(obj_t) (BGl_makezd2rtl_valloczd2zzsaw_defsz00(BgL_loc3838z00_6279,
					(BgL_typez00_bglt) (BgL_type3839z00_6280),
					(BgL_typez00_bglt) (BgL_vtype3840z00_6281)));
		}
	}



/* fill-rtl_valloc! */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt
		BGl_fillzd2rtl_vallocz12zc0zzsaw_defsz00(BgL_rtl_vallocz00_bglt
		BgL_new3846z00_378, obj_t BgL_loc3843z00_379,
		BgL_typez00_bglt BgL_type3844z00_380, BgL_typez00_bglt BgL_vtype3845z00_381)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				obj_t BgL_loc3843z00_7171;

				BgL_typez00_bglt BgL_type3844z00_7172;

				BgL_typez00_bglt BgL_vtype3845z00_7173;

				BgL_loc3843z00_7171 = BgL_loc3843z00_379;
				BgL_type3844z00_7172 = BgL_type3844z00_380;
				BgL_vtype3845z00_7173 = BgL_vtype3845z00_381;
				((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_378))->BgL_locz00) =
					((obj_t) BgL_loc3843z00_7171), BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_378))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3844z00_7172), BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_378))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype3845z00_7173), BUNSPEC);
				return BgL_new3846z00_378;
			}
		}
	}



/* _fill-rtl_valloc! */
	obj_t BGl__fillzd2rtl_vallocz12zc0zzsaw_defsz00(obj_t BgL_envz00_6282,
		obj_t BgL_new3846z00_6283, obj_t BgL_loc3843z00_6284,
		obj_t BgL_type3844z00_6285, obj_t BgL_vtype3845z00_6286)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_vallocz00_bglt BgL_auxz00_9109;

				{	/* SawMill/defs.scm 42 */
					BgL_rtl_vallocz00_bglt BgL_res5990z00_7181;

					{	/* SawMill/defs.scm 42 */
						BgL_rtl_vallocz00_bglt BgL_new3846z00_7174;

						BgL_typez00_bglt BgL_type3844z00_7176;

						BgL_typez00_bglt BgL_vtype3845z00_7177;

						BgL_new3846z00_7174 =
							(BgL_rtl_vallocz00_bglt) (BgL_new3846z00_6283);
						BgL_type3844z00_7176 = (BgL_typez00_bglt) (BgL_type3844z00_6285);
						BgL_vtype3845z00_7177 = (BgL_typez00_bglt) (BgL_vtype3845z00_6286);
						{	/* SawMill/defs.scm 42 */
							obj_t BgL_loc3843z00_7178;

							BgL_typez00_bglt BgL_type3844z00_7179;

							BgL_typez00_bglt BgL_vtype3845z00_7180;

							BgL_loc3843z00_7178 = BgL_loc3843z00_6284;
							BgL_type3844z00_7179 = BgL_type3844z00_7176;
							BgL_vtype3845z00_7180 = BgL_vtype3845z00_7177;
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_7174))->
									BgL_locz00) = ((obj_t) BgL_loc3843z00_7178), BUNSPEC);
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_7174))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3844z00_7179), BUNSPEC);
							((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_7174))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3845z00_7180), BUNSPEC);
							BgL_res5990z00_7181 = BgL_new3846z00_7174;
						}
					}
					BgL_auxz00_9109 = BgL_res5990z00_7181;
				}
				return (obj_t) (BgL_auxz00_9109);
			}
		}
	}



/* %allocate-rtl_valloc */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt
		BGl_z52allocatezd2rtl_vallocz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_vallocz00_bglt BgL_new3851z00_7182;

				BgL_new3851z00_7182 =
					((BgL_rtl_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_vallocz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3851z00_7182),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_vallocz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 42 */
					BgL_objectz00_bglt BgL_auxz00_9121;

					BgL_auxz00_9121 = (BgL_objectz00_bglt) (BgL_new3851z00_7182);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9121, BFALSE);
				}
				return BgL_new3851z00_7182;
			}
		}
	}



/* _%allocate-rtl_valloc */
	obj_t BGl__z52allocatezd2rtl_vallocz80zzsaw_defsz00(obj_t BgL_envz00_6030)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_vallocz00_bglt BgL_auxz00_9124;

				{	/* SawMill/defs.scm 42 */
					BgL_rtl_vallocz00_bglt BgL_res5991z00_7186;

					{	/* SawMill/defs.scm 42 */
						BgL_rtl_vallocz00_bglt BgL_new3851z00_7184;

						BgL_new3851z00_7184 =
							((BgL_rtl_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3851z00_7184),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_vallocz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_9129;

							BgL_auxz00_9129 = (BgL_objectz00_bglt) (BgL_new3851z00_7184);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9129, BFALSE);
						}
						BgL_res5991z00_7186 = BgL_new3851z00_7184;
					}
					BgL_auxz00_9124 = BgL_res5991z00_7186;
				}
				return (obj_t) (BgL_auxz00_9124);
			}
		}
	}



/* rtl_valloc-nil */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt BGl_rtl_valloczd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			if ((BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 42 */
					{	/* SawMill/defs.scm 42 */
						BgL_rtl_vallocz00_bglt BgL_res5721z00_4259;

						{	/* SawMill/defs.scm 42 */
							BgL_rtl_vallocz00_bglt BgL_new3851z00_4255;

							BgL_new3851z00_4255 =
								((BgL_rtl_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_vallocz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3851z00_4255),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_vallocz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 42 */
								BgL_objectz00_bglt BgL_auxz00_9139;

								BgL_auxz00_9139 = (BgL_objectz00_bglt) (BgL_new3851z00_4255);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9139, BFALSE);
							}
							BgL_res5721z00_4259 = BgL_new3851z00_4255;
						}
						BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5721z00_4259);
					}
					{	/* SawMill/defs.scm 42 */
						BgL_typez00_bglt BgL_arg5143z00_1913;

						BgL_typez00_bglt BgL_arg5144z00_1914;

						BgL_arg5143z00_1913 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5144z00_1914 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 42 */
							BgL_rtl_vallocz00_bglt BgL_res5722z00_4267;

							{	/* SawMill/defs.scm 42 */
								BgL_rtl_vallocz00_bglt BgL_new3846z00_4260;

								BgL_new3846z00_4260 =
									(BgL_rtl_vallocz00_bglt)
									(BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 42 */
									obj_t BgL_loc3843z00_4264;

									BgL_typez00_bglt BgL_type3844z00_4265;

									BgL_typez00_bglt BgL_vtype3845z00_4266;

									BgL_loc3843z00_4264 = BUNSPEC;
									BgL_type3844z00_4265 = BgL_arg5143z00_1913;
									BgL_vtype3845z00_4266 = BgL_arg5144z00_1914;
									((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4260))->
											BgL_locz00) = ((obj_t) BgL_loc3843z00_4264), BUNSPEC);
									((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4260))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3844z00_4265), BUNSPEC);
									((((BgL_rtl_vallocz00_bglt) CREF(BgL_new3846z00_4260))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype3845z00_4266), BUNSPEC);
									BgL_res5722z00_4267 = BgL_new3846z00_4260;
							}}
							(obj_t) (BgL_res5722z00_4267);
				}}}
			else
				{	/* SawMill/defs.scm 42 */
					BFALSE;
				}
			return
				(BgL_rtl_vallocz00_bglt)
				(BGl_z52thezd2rtl_valloczd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_valloc-nil */
	obj_t BGl__rtl_valloczd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6031)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			return (obj_t) (BGl_rtl_valloczd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_getfield? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_getfieldzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3827z00_388)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3827z00_388,
				BGl_rtl_getfieldz00zzsaw_defsz00);
		}
	}



/* _rtl_getfield? */
	obj_t BGl__rtl_getfieldzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6028,
		obj_t BgL_obj3827z00_6029)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3827z00_6029,
					BGl_rtl_getfieldz00zzsaw_defsz00));
		}
	}



/* make-rtl_getfield */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t BgL_loc3792z00_392,
		obj_t BgL_name3793z00_393, BgL_typez00_bglt BgL_objtype3794z00_394,
		BgL_typez00_bglt BgL_type3795z00_395)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_getfieldz00_bglt BgL_new3796z00_4268;

				{	/* SawMill/defs.scm 41 */
					BgL_rtl_getfieldz00_bglt BgL_res5723z00_4273;

					{	/* SawMill/defs.scm 41 */
						BgL_rtl_getfieldz00_bglt BgL_new3808z00_4269;

						BgL_new3808z00_4269 =
							((BgL_rtl_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_getfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3808z00_4269),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_getfieldz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_9160;

							BgL_auxz00_9160 = (BgL_objectz00_bglt) (BgL_new3808z00_4269);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9160, BFALSE);
						}
						BgL_res5723z00_4273 = BgL_new3808z00_4269;
					}
					BgL_new3796z00_4268 = BgL_res5723z00_4273;
				}
				{	/* SawMill/defs.scm 41 */
					BgL_rtl_getfieldz00_bglt BgL_res5724z00_4283;

					{	/* SawMill/defs.scm 41 */
						BgL_rtl_getfieldz00_bglt BgL_new3802z00_4274;

						BgL_new3802z00_4274 = BgL_new3796z00_4268;
						{	/* SawMill/defs.scm 41 */
							obj_t BgL_loc3798z00_4279;

							obj_t BgL_name3799z00_4280;

							BgL_typez00_bglt BgL_objtype3800z00_4281;

							BgL_typez00_bglt BgL_type3801z00_4282;

							BgL_loc3798z00_4279 = BgL_loc3792z00_392;
							BgL_name3799z00_4280 = BgL_name3793z00_393;
							BgL_objtype3800z00_4281 = BgL_objtype3794z00_394;
							BgL_type3801z00_4282 = BgL_type3795z00_395;
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4274))->
									BgL_locz00) = ((obj_t) BgL_loc3798z00_4279), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4274))->
									BgL_namez00) = ((obj_t) BgL_name3799z00_4280), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4274))->
									BgL_objtypez00) =
								((BgL_typez00_bglt) BgL_objtype3800z00_4281), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4274))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3801z00_4282), BUNSPEC);
							BgL_res5724z00_4283 = BgL_new3802z00_4274;
					}} BgL_res5724z00_4283;
				}
				return BgL_new3796z00_4268;
			}
		}
	}



/* _make-rtl_getfield */
	obj_t BGl__makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t BgL_envz00_6287,
		obj_t BgL_loc3792z00_6288, obj_t BgL_name3793z00_6289,
		obj_t BgL_objtype3794z00_6290, obj_t BgL_type3795z00_6291)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			return
				(obj_t) (BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(BgL_loc3792z00_6288,
					BgL_name3793z00_6289, (BgL_typez00_bglt) (BgL_objtype3794z00_6290),
					(BgL_typez00_bglt) (BgL_type3795z00_6291)));
		}
	}



/* fill-rtl_getfield! */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_fillzd2rtl_getfieldz12zc0zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_new3802z00_396, obj_t BgL_loc3798z00_397, obj_t BgL_name3799z00_398,
		BgL_typez00_bglt BgL_objtype3800z00_399,
		BgL_typez00_bglt BgL_type3801z00_400)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				obj_t BgL_loc3798z00_7188;

				obj_t BgL_name3799z00_7189;

				BgL_typez00_bglt BgL_objtype3800z00_7190;

				BgL_typez00_bglt BgL_type3801z00_7191;

				BgL_loc3798z00_7188 = BgL_loc3798z00_397;
				BgL_name3799z00_7189 = BgL_name3799z00_398;
				BgL_objtype3800z00_7190 = BgL_objtype3800z00_399;
				BgL_type3801z00_7191 = BgL_type3801z00_400;
				((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_396))->BgL_locz00) =
					((obj_t) BgL_loc3798z00_7188), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_396))->BgL_namez00) =
					((obj_t) BgL_name3799z00_7189), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_396))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) BgL_objtype3800z00_7190), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_396))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3801z00_7191), BUNSPEC);
				return BgL_new3802z00_396;
			}
		}
	}



/* _fill-rtl_getfield! */
	obj_t BGl__fillzd2rtl_getfieldz12zc0zzsaw_defsz00(obj_t BgL_envz00_6292,
		obj_t BgL_new3802z00_6293, obj_t BgL_loc3798z00_6294,
		obj_t BgL_name3799z00_6295, obj_t BgL_objtype3800z00_6296,
		obj_t BgL_type3801z00_6297)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_getfieldz00_bglt BgL_auxz00_9175;

				{	/* SawMill/defs.scm 41 */
					BgL_rtl_getfieldz00_bglt BgL_res5992z00_7201;

					{	/* SawMill/defs.scm 41 */
						BgL_rtl_getfieldz00_bglt BgL_new3802z00_7192;

						obj_t BgL_name3799z00_7194;

						BgL_typez00_bglt BgL_objtype3800z00_7195;

						BgL_typez00_bglt BgL_type3801z00_7196;

						BgL_new3802z00_7192 =
							(BgL_rtl_getfieldz00_bglt) (BgL_new3802z00_6293);
						BgL_name3799z00_7194 = BgL_name3799z00_6295;
						BgL_objtype3800z00_7195 =
							(BgL_typez00_bglt) (BgL_objtype3800z00_6296);
						BgL_type3801z00_7196 = (BgL_typez00_bglt) (BgL_type3801z00_6297);
						{	/* SawMill/defs.scm 41 */
							obj_t BgL_loc3798z00_7197;

							obj_t BgL_name3799z00_7198;

							BgL_typez00_bglt BgL_objtype3800z00_7199;

							BgL_typez00_bglt BgL_type3801z00_7200;

							BgL_loc3798z00_7197 = BgL_loc3798z00_6294;
							BgL_name3799z00_7198 = BgL_name3799z00_7194;
							BgL_objtype3800z00_7199 = BgL_objtype3800z00_7195;
							BgL_type3801z00_7200 = BgL_type3801z00_7196;
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_7192))->
									BgL_locz00) = ((obj_t) BgL_loc3798z00_7197), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_7192))->
									BgL_namez00) = ((obj_t) BgL_name3799z00_7198), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_7192))->
									BgL_objtypez00) =
								((BgL_typez00_bglt) BgL_objtype3800z00_7199), BUNSPEC);
							((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_7192))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3801z00_7200), BUNSPEC);
							BgL_res5992z00_7201 = BgL_new3802z00_7192;
						}
					}
					BgL_auxz00_9175 = BgL_res5992z00_7201;
				}
				return (obj_t) (BgL_auxz00_9175);
			}
		}
	}



/* %allocate-rtl_getfield */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_z52allocatezd2rtl_getfieldz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_getfieldz00_bglt BgL_new3808z00_7202;

				BgL_new3808z00_7202 =
					((BgL_rtl_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_getfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3808z00_7202),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_getfieldz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 41 */
					BgL_objectz00_bglt BgL_auxz00_9188;

					BgL_auxz00_9188 = (BgL_objectz00_bglt) (BgL_new3808z00_7202);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9188, BFALSE);
				}
				return BgL_new3808z00_7202;
			}
		}
	}



/* _%allocate-rtl_getfield */
	obj_t BGl__z52allocatezd2rtl_getfieldz80zzsaw_defsz00(obj_t BgL_envz00_6026)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_getfieldz00_bglt BgL_auxz00_9191;

				{	/* SawMill/defs.scm 41 */
					BgL_rtl_getfieldz00_bglt BgL_res5993z00_7206;

					{	/* SawMill/defs.scm 41 */
						BgL_rtl_getfieldz00_bglt BgL_new3808z00_7204;

						BgL_new3808z00_7204 =
							((BgL_rtl_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_getfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3808z00_7204),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_getfieldz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_9196;

							BgL_auxz00_9196 = (BgL_objectz00_bglt) (BgL_new3808z00_7204);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9196, BFALSE);
						}
						BgL_res5993z00_7206 = BgL_new3808z00_7204;
					}
					BgL_auxz00_9191 = BgL_res5993z00_7206;
				}
				return (obj_t) (BgL_auxz00_9191);
			}
		}
	}



/* rtl_getfield-nil */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			if ((BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 41 */
					{	/* SawMill/defs.scm 41 */
						BgL_rtl_getfieldz00_bglt BgL_res5725z00_4296;

						{	/* SawMill/defs.scm 41 */
							BgL_rtl_getfieldz00_bglt BgL_new3808z00_4292;

							BgL_new3808z00_4292 =
								((BgL_rtl_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_getfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3808z00_4292),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_getfieldz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 41 */
								BgL_objectz00_bglt BgL_auxz00_9206;

								BgL_auxz00_9206 = (BgL_objectz00_bglt) (BgL_new3808z00_4292);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9206, BFALSE);
							}
							BgL_res5725z00_4296 = BgL_new3808z00_4292;
						}
						BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5725z00_4296);
					}
					{	/* SawMill/defs.scm 41 */
						BgL_typez00_bglt BgL_arg5148z00_1924;

						BgL_typez00_bglt BgL_arg5149z00_1925;

						BgL_arg5148z00_1924 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5149z00_1925 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 41 */
							BgL_rtl_getfieldz00_bglt BgL_res5726z00_4306;

							{	/* SawMill/defs.scm 41 */
								BgL_rtl_getfieldz00_bglt BgL_new3802z00_4297;

								BgL_new3802z00_4297 =
									(BgL_rtl_getfieldz00_bglt)
									(BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 41 */
									obj_t BgL_loc3798z00_4302;

									obj_t BgL_name3799z00_4303;

									BgL_typez00_bglt BgL_objtype3800z00_4304;

									BgL_typez00_bglt BgL_type3801z00_4305;

									BgL_loc3798z00_4302 = BUNSPEC;
									BgL_name3799z00_4303 = BGl_string5822z00zzsaw_defsz00;
									BgL_objtype3800z00_4304 = BgL_arg5148z00_1924;
									BgL_type3801z00_4305 = BgL_arg5149z00_1925;
									((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4297))->
											BgL_locz00) = ((obj_t) BgL_loc3798z00_4302), BUNSPEC);
									((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4297))->
											BgL_namez00) = ((obj_t) BgL_name3799z00_4303), BUNSPEC);
									((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4297))->
											BgL_objtypez00) =
										((BgL_typez00_bglt) BgL_objtype3800z00_4304), BUNSPEC);
									((((BgL_rtl_getfieldz00_bglt) CREF(BgL_new3802z00_4297))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3801z00_4305), BUNSPEC);
									BgL_res5726z00_4306 = BgL_new3802z00_4297;
							}}
							(obj_t) (BgL_res5726z00_4306);
				}}}
			else
				{	/* SawMill/defs.scm 41 */
					BFALSE;
				}
			return
				(BgL_rtl_getfieldz00_bglt)
				(BGl_z52thezd2rtl_getfieldzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_getfield-nil */
	obj_t BGl__rtl_getfieldzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6027)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			return (obj_t) (BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_globalref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_globalrefzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3779z00_410)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3779z00_410,
				BGl_rtl_globalrefz00zzsaw_defsz00);
		}
	}



/* _rtl_globalref? */
	obj_t BGl__rtl_globalrefzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6024,
		obj_t BgL_obj3779z00_6025)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3779z00_6025,
					BGl_rtl_globalrefz00zzsaw_defsz00));
		}
	}



/* make-rtl_globalref */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t BgL_loc3758z00_414,
		BgL_globalz00_bglt BgL_var3759z00_415)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_globalrefz00_bglt BgL_new3760z00_4307;

				{	/* SawMill/defs.scm 40 */
					BgL_rtl_globalrefz00_bglt BgL_res5727z00_4312;

					{	/* SawMill/defs.scm 40 */
						BgL_rtl_globalrefz00_bglt BgL_new3768z00_4308;

						BgL_new3768z00_4308 =
							((BgL_rtl_globalrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_globalrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3768z00_4308),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_globalrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_9228;

							BgL_auxz00_9228 = (BgL_objectz00_bglt) (BgL_new3768z00_4308);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9228, BFALSE);
						}
						BgL_res5727z00_4312 = BgL_new3768z00_4308;
					}
					BgL_new3760z00_4307 = BgL_res5727z00_4312;
				}
				{	/* SawMill/defs.scm 40 */
					BgL_rtl_globalrefz00_bglt BgL_res5728z00_4318;

					{	/* SawMill/defs.scm 40 */
						BgL_rtl_globalrefz00_bglt BgL_new3764z00_4313;

						BgL_new3764z00_4313 = BgL_new3760z00_4307;
						{	/* SawMill/defs.scm 40 */
							obj_t BgL_loc3762z00_4316;

							BgL_globalz00_bglt BgL_var3763z00_4317;

							BgL_loc3762z00_4316 = BgL_loc3758z00_414;
							BgL_var3763z00_4317 = BgL_var3759z00_415;
							((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_4313))->
									BgL_locz00) = ((obj_t) BgL_loc3762z00_4316), BUNSPEC);
							((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_4313))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3763z00_4317), BUNSPEC);
							BgL_res5728z00_4318 = BgL_new3764z00_4313;
					}} BgL_res5728z00_4318;
				}
				return BgL_new3760z00_4307;
			}
		}
	}



/* _make-rtl_globalref */
	obj_t BGl__makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t BgL_envz00_6298,
		obj_t BgL_loc3758z00_6299, obj_t BgL_var3759z00_6300)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			return
				(obj_t) (BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(BgL_loc3758z00_6299,
					(BgL_globalz00_bglt) (BgL_var3759z00_6300)));
		}
	}



/* fill-rtl_globalref! */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_fillzd2rtl_globalrefz12zc0zzsaw_defsz00(BgL_rtl_globalrefz00_bglt
		BgL_new3764z00_416, obj_t BgL_loc3762z00_417,
		BgL_globalz00_bglt BgL_var3763z00_418)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				obj_t BgL_loc3762z00_7208;

				BgL_globalz00_bglt BgL_var3763z00_7209;

				BgL_loc3762z00_7208 = BgL_loc3762z00_417;
				BgL_var3763z00_7209 = BgL_var3763z00_418;
				((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_416))->BgL_locz00) =
					((obj_t) BgL_loc3762z00_7208), BUNSPEC);
				((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_416))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var3763z00_7209), BUNSPEC);
				return BgL_new3764z00_416;
			}
		}
	}



/* _fill-rtl_globalref! */
	obj_t BGl__fillzd2rtl_globalrefz12zc0zzsaw_defsz00(obj_t BgL_envz00_6301,
		obj_t BgL_new3764z00_6302, obj_t BgL_loc3762z00_6303,
		obj_t BgL_var3763z00_6304)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_globalrefz00_bglt BgL_auxz00_9238;

				{	/* SawMill/defs.scm 40 */
					BgL_rtl_globalrefz00_bglt BgL_res5994z00_7215;

					{	/* SawMill/defs.scm 40 */
						BgL_rtl_globalrefz00_bglt BgL_new3764z00_7210;

						BgL_globalz00_bglt BgL_var3763z00_7212;

						BgL_new3764z00_7210 =
							(BgL_rtl_globalrefz00_bglt) (BgL_new3764z00_6302);
						BgL_var3763z00_7212 = (BgL_globalz00_bglt) (BgL_var3763z00_6304);
						{	/* SawMill/defs.scm 40 */
							obj_t BgL_loc3762z00_7213;

							BgL_globalz00_bglt BgL_var3763z00_7214;

							BgL_loc3762z00_7213 = BgL_loc3762z00_6303;
							BgL_var3763z00_7214 = BgL_var3763z00_7212;
							((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_7210))->
									BgL_locz00) = ((obj_t) BgL_loc3762z00_7213), BUNSPEC);
							((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_7210))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3763z00_7214), BUNSPEC);
							BgL_res5994z00_7215 = BgL_new3764z00_7210;
						}
					}
					BgL_auxz00_9238 = BgL_res5994z00_7215;
				}
				return (obj_t) (BgL_auxz00_9238);
			}
		}
	}



/* %allocate-rtl_globalref */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_z52allocatezd2rtl_globalrefz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_globalrefz00_bglt BgL_new3768z00_7216;

				BgL_new3768z00_7216 =
					((BgL_rtl_globalrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_globalrefz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3768z00_7216),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_globalrefz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 40 */
					BgL_objectz00_bglt BgL_auxz00_9248;

					BgL_auxz00_9248 = (BgL_objectz00_bglt) (BgL_new3768z00_7216);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9248, BFALSE);
				}
				return BgL_new3768z00_7216;
			}
		}
	}



/* _%allocate-rtl_globalref */
	obj_t BGl__z52allocatezd2rtl_globalrefz80zzsaw_defsz00(obj_t BgL_envz00_6022)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_globalrefz00_bglt BgL_auxz00_9251;

				{	/* SawMill/defs.scm 40 */
					BgL_rtl_globalrefz00_bglt BgL_res5995z00_7220;

					{	/* SawMill/defs.scm 40 */
						BgL_rtl_globalrefz00_bglt BgL_new3768z00_7218;

						BgL_new3768z00_7218 =
							((BgL_rtl_globalrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_globalrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3768z00_7218),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_globalrefz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_9256;

							BgL_auxz00_9256 = (BgL_objectz00_bglt) (BgL_new3768z00_7218);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9256, BFALSE);
						}
						BgL_res5995z00_7220 = BgL_new3768z00_7218;
					}
					BgL_auxz00_9251 = BgL_res5995z00_7220;
				}
				return (obj_t) (BgL_auxz00_9251);
			}
		}
	}



/* rtl_globalref-nil */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			if ((BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 40 */
					{	/* SawMill/defs.scm 40 */
						BgL_rtl_globalrefz00_bglt BgL_res5729z00_4329;

						{	/* SawMill/defs.scm 40 */
							BgL_rtl_globalrefz00_bglt BgL_new3768z00_4325;

							BgL_new3768z00_4325 =
								((BgL_rtl_globalrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_globalrefz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3768z00_4325),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_globalrefz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 40 */
								BgL_objectz00_bglt BgL_auxz00_9266;

								BgL_auxz00_9266 = (BgL_objectz00_bglt) (BgL_new3768z00_4325);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9266, BFALSE);
							}
							BgL_res5729z00_4329 = BgL_new3768z00_4325;
						}
						BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5729z00_4329);
					}
					{	/* SawMill/defs.scm 40 */
						BgL_globalz00_bglt BgL_arg5152z00_1932;

						BgL_arg5152z00_1932 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMill/defs.scm 40 */
							BgL_rtl_globalrefz00_bglt BgL_res5730z00_4335;

							{	/* SawMill/defs.scm 40 */
								BgL_rtl_globalrefz00_bglt BgL_new3764z00_4330;

								BgL_new3764z00_4330 =
									(BgL_rtl_globalrefz00_bglt)
									(BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 40 */
									obj_t BgL_loc3762z00_4333;

									BgL_globalz00_bglt BgL_var3763z00_4334;

									BgL_loc3762z00_4333 = BUNSPEC;
									BgL_var3763z00_4334 = BgL_arg5152z00_1932;
									((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_4330))->
											BgL_locz00) = ((obj_t) BgL_loc3762z00_4333), BUNSPEC);
									((((BgL_rtl_globalrefz00_bglt) CREF(BgL_new3764z00_4330))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var3763z00_4334), BUNSPEC);
									BgL_res5730z00_4335 = BgL_new3764z00_4330;
							}}
							(obj_t) (BgL_res5730z00_4335);
				}}}
			else
				{	/* SawMill/defs.scm 40 */
					BFALSE;
				}
			return
				(BgL_rtl_globalrefz00_bglt)
				(BGl_z52thezd2rtl_globalrefzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_globalref-nil */
	obj_t BGl__rtl_globalrefzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6023)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			return (obj_t) (BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_loadfun? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadfunzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3751z00_422)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3751z00_422,
				BGl_rtl_loadfunz00zzsaw_defsz00);
		}
	}



/* _rtl_loadfun? */
	obj_t BGl__rtl_loadfunzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6020,
		obj_t BgL_obj3751z00_6021)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3751z00_6021,
					BGl_rtl_loadfunz00zzsaw_defsz00));
		}
	}



/* make-rtl_loadfun */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t BgL_loc3730z00_426,
		BgL_globalz00_bglt BgL_var3731z00_427)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadfunz00_bglt BgL_new3732z00_4336;

				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadfunz00_bglt BgL_res5731z00_4341;

					{	/* SawMill/defs.scm 39 */
						BgL_rtl_loadfunz00_bglt BgL_new3740z00_4337;

						BgL_new3740z00_4337 =
							((BgL_rtl_loadfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3740z00_4337),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadfunz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_9285;

							BgL_auxz00_9285 = (BgL_objectz00_bglt) (BgL_new3740z00_4337);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9285, BFALSE);
						}
						BgL_res5731z00_4341 = BgL_new3740z00_4337;
					}
					BgL_new3732z00_4336 = BgL_res5731z00_4341;
				}
				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadfunz00_bglt BgL_res5732z00_4347;

					{	/* SawMill/defs.scm 39 */
						BgL_rtl_loadfunz00_bglt BgL_new3736z00_4342;

						BgL_new3736z00_4342 = BgL_new3732z00_4336;
						{	/* SawMill/defs.scm 39 */
							obj_t BgL_loc3734z00_4345;

							BgL_globalz00_bglt BgL_var3735z00_4346;

							BgL_loc3734z00_4345 = BgL_loc3730z00_426;
							BgL_var3735z00_4346 = BgL_var3731z00_427;
							((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_4342))->
									BgL_locz00) = ((obj_t) BgL_loc3734z00_4345), BUNSPEC);
							((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_4342))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3735z00_4346), BUNSPEC);
							BgL_res5732z00_4347 = BgL_new3736z00_4342;
					}} BgL_res5732z00_4347;
				}
				return BgL_new3732z00_4336;
			}
		}
	}



/* _make-rtl_loadfun */
	obj_t BGl__makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t BgL_envz00_6305,
		obj_t BgL_loc3730z00_6306, obj_t BgL_var3731z00_6307)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			return
				(obj_t) (BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(BgL_loc3730z00_6306,
					(BgL_globalz00_bglt) (BgL_var3731z00_6307)));
		}
	}



/* fill-rtl_loadfun! */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_fillzd2rtl_loadfunz12zc0zzsaw_defsz00(BgL_rtl_loadfunz00_bglt
		BgL_new3736z00_428, obj_t BgL_loc3734z00_429,
		BgL_globalz00_bglt BgL_var3735z00_430)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				obj_t BgL_loc3734z00_7222;

				BgL_globalz00_bglt BgL_var3735z00_7223;

				BgL_loc3734z00_7222 = BgL_loc3734z00_429;
				BgL_var3735z00_7223 = BgL_var3735z00_430;
				((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_428))->BgL_locz00) =
					((obj_t) BgL_loc3734z00_7222), BUNSPEC);
				((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_428))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var3735z00_7223), BUNSPEC);
				return BgL_new3736z00_428;
			}
		}
	}



/* _fill-rtl_loadfun! */
	obj_t BGl__fillzd2rtl_loadfunz12zc0zzsaw_defsz00(obj_t BgL_envz00_6308,
		obj_t BgL_new3736z00_6309, obj_t BgL_loc3734z00_6310,
		obj_t BgL_var3735z00_6311)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadfunz00_bglt BgL_auxz00_9295;

				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadfunz00_bglt BgL_res5996z00_7229;

					{	/* SawMill/defs.scm 39 */
						BgL_rtl_loadfunz00_bglt BgL_new3736z00_7224;

						BgL_globalz00_bglt BgL_var3735z00_7226;

						BgL_new3736z00_7224 =
							(BgL_rtl_loadfunz00_bglt) (BgL_new3736z00_6309);
						BgL_var3735z00_7226 = (BgL_globalz00_bglt) (BgL_var3735z00_6311);
						{	/* SawMill/defs.scm 39 */
							obj_t BgL_loc3734z00_7227;

							BgL_globalz00_bglt BgL_var3735z00_7228;

							BgL_loc3734z00_7227 = BgL_loc3734z00_6310;
							BgL_var3735z00_7228 = BgL_var3735z00_7226;
							((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_7224))->
									BgL_locz00) = ((obj_t) BgL_loc3734z00_7227), BUNSPEC);
							((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_7224))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3735z00_7228), BUNSPEC);
							BgL_res5996z00_7229 = BgL_new3736z00_7224;
						}
					}
					BgL_auxz00_9295 = BgL_res5996z00_7229;
				}
				return (obj_t) (BgL_auxz00_9295);
			}
		}
	}



/* %allocate-rtl_loadfun */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_z52allocatezd2rtl_loadfunz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadfunz00_bglt BgL_new3740z00_7230;

				BgL_new3740z00_7230 =
					((BgL_rtl_loadfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_loadfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3740z00_7230),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadfunz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 39 */
					BgL_objectz00_bglt BgL_auxz00_9305;

					BgL_auxz00_9305 = (BgL_objectz00_bglt) (BgL_new3740z00_7230);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9305, BFALSE);
				}
				return BgL_new3740z00_7230;
			}
		}
	}



/* _%allocate-rtl_loadfun */
	obj_t BGl__z52allocatezd2rtl_loadfunz80zzsaw_defsz00(obj_t BgL_envz00_6018)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadfunz00_bglt BgL_auxz00_9308;

				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadfunz00_bglt BgL_res5997z00_7234;

					{	/* SawMill/defs.scm 39 */
						BgL_rtl_loadfunz00_bglt BgL_new3740z00_7232;

						BgL_new3740z00_7232 =
							((BgL_rtl_loadfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3740z00_7232),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadfunz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_9313;

							BgL_auxz00_9313 = (BgL_objectz00_bglt) (BgL_new3740z00_7232);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9313, BFALSE);
						}
						BgL_res5997z00_7234 = BgL_new3740z00_7232;
					}
					BgL_auxz00_9308 = BgL_res5997z00_7234;
				}
				return (obj_t) (BgL_auxz00_9308);
			}
		}
	}



/* rtl_loadfun-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			if ((BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 39 */
					{	/* SawMill/defs.scm 39 */
						BgL_rtl_loadfunz00_bglt BgL_res5733z00_4358;

						{	/* SawMill/defs.scm 39 */
							BgL_rtl_loadfunz00_bglt BgL_new3740z00_4354;

							BgL_new3740z00_4354 =
								((BgL_rtl_loadfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_loadfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3740z00_4354),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_loadfunz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 39 */
								BgL_objectz00_bglt BgL_auxz00_9323;

								BgL_auxz00_9323 = (BgL_objectz00_bglt) (BgL_new3740z00_4354);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9323, BFALSE);
							}
							BgL_res5733z00_4358 = BgL_new3740z00_4354;
						}
						BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5733z00_4358);
					}
					{	/* SawMill/defs.scm 39 */
						BgL_globalz00_bglt BgL_arg5155z00_1939;

						BgL_arg5155z00_1939 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMill/defs.scm 39 */
							BgL_rtl_loadfunz00_bglt BgL_res5734z00_4364;

							{	/* SawMill/defs.scm 39 */
								BgL_rtl_loadfunz00_bglt BgL_new3736z00_4359;

								BgL_new3736z00_4359 =
									(BgL_rtl_loadfunz00_bglt)
									(BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 39 */
									obj_t BgL_loc3734z00_4362;

									BgL_globalz00_bglt BgL_var3735z00_4363;

									BgL_loc3734z00_4362 = BUNSPEC;
									BgL_var3735z00_4363 = BgL_arg5155z00_1939;
									((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_4359))->
											BgL_locz00) = ((obj_t) BgL_loc3734z00_4362), BUNSPEC);
									((((BgL_rtl_loadfunz00_bglt) CREF(BgL_new3736z00_4359))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var3735z00_4363), BUNSPEC);
									BgL_res5734z00_4364 = BgL_new3736z00_4359;
							}}
							(obj_t) (BgL_res5734z00_4364);
				}}}
			else
				{	/* SawMill/defs.scm 39 */
					BFALSE;
				}
			return
				(BgL_rtl_loadfunz00_bglt)
				(BGl_z52thezd2rtl_loadfunzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_loadfun-nil */
	obj_t BGl__rtl_loadfunzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6019)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			return (obj_t) (BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_loadg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadgzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3723z00_434)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3723z00_434,
				BGl_rtl_loadgz00zzsaw_defsz00);
		}
	}



/* _rtl_loadg? */
	obj_t BGl__rtl_loadgzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6016,
		obj_t BgL_obj3723z00_6017)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3723z00_6017,
					BGl_rtl_loadgz00zzsaw_defsz00));
		}
	}



/* make-rtl_loadg */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt
		BGl_makezd2rtl_loadgzd2zzsaw_defsz00(obj_t BgL_loc3702z00_438,
		BgL_globalz00_bglt BgL_var3703z00_439)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadgz00_bglt BgL_new3704z00_4365;

				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadgz00_bglt BgL_res5735z00_4370;

					{	/* SawMill/defs.scm 38 */
						BgL_rtl_loadgz00_bglt BgL_new3712z00_4366;

						BgL_new3712z00_4366 =
							((BgL_rtl_loadgz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadgz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3712z00_4366),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadgz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 38 */
							BgL_objectz00_bglt BgL_auxz00_9342;

							BgL_auxz00_9342 = (BgL_objectz00_bglt) (BgL_new3712z00_4366);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9342, BFALSE);
						}
						BgL_res5735z00_4370 = BgL_new3712z00_4366;
					}
					BgL_new3704z00_4365 = BgL_res5735z00_4370;
				}
				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadgz00_bglt BgL_res5736z00_4376;

					{	/* SawMill/defs.scm 38 */
						BgL_rtl_loadgz00_bglt BgL_new3708z00_4371;

						BgL_new3708z00_4371 = BgL_new3704z00_4365;
						{	/* SawMill/defs.scm 38 */
							obj_t BgL_loc3706z00_4374;

							BgL_globalz00_bglt BgL_var3707z00_4375;

							BgL_loc3706z00_4374 = BgL_loc3702z00_438;
							BgL_var3707z00_4375 = BgL_var3703z00_439;
							((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_4371))->
									BgL_locz00) = ((obj_t) BgL_loc3706z00_4374), BUNSPEC);
							((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_4371))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3707z00_4375), BUNSPEC);
							BgL_res5736z00_4376 = BgL_new3708z00_4371;
					}} BgL_res5736z00_4376;
				}
				return BgL_new3704z00_4365;
			}
		}
	}



/* _make-rtl_loadg */
	obj_t BGl__makezd2rtl_loadgzd2zzsaw_defsz00(obj_t BgL_envz00_6312,
		obj_t BgL_loc3702z00_6313, obj_t BgL_var3703z00_6314)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			return
				(obj_t) (BGl_makezd2rtl_loadgzd2zzsaw_defsz00(BgL_loc3702z00_6313,
					(BgL_globalz00_bglt) (BgL_var3703z00_6314)));
		}
	}



/* fill-rtl_loadg! */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt
		BGl_fillzd2rtl_loadgz12zc0zzsaw_defsz00(BgL_rtl_loadgz00_bglt
		BgL_new3708z00_440, obj_t BgL_loc3706z00_441,
		BgL_globalz00_bglt BgL_var3707z00_442)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				obj_t BgL_loc3706z00_7236;

				BgL_globalz00_bglt BgL_var3707z00_7237;

				BgL_loc3706z00_7236 = BgL_loc3706z00_441;
				BgL_var3707z00_7237 = BgL_var3707z00_442;
				((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_440))->BgL_locz00) =
					((obj_t) BgL_loc3706z00_7236), BUNSPEC);
				((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_440))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var3707z00_7237), BUNSPEC);
				return BgL_new3708z00_440;
			}
		}
	}



/* _fill-rtl_loadg! */
	obj_t BGl__fillzd2rtl_loadgz12zc0zzsaw_defsz00(obj_t BgL_envz00_6315,
		obj_t BgL_new3708z00_6316, obj_t BgL_loc3706z00_6317,
		obj_t BgL_var3707z00_6318)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadgz00_bglt BgL_auxz00_9352;

				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadgz00_bglt BgL_res5998z00_7243;

					{	/* SawMill/defs.scm 38 */
						BgL_rtl_loadgz00_bglt BgL_new3708z00_7238;

						BgL_globalz00_bglt BgL_var3707z00_7240;

						BgL_new3708z00_7238 = (BgL_rtl_loadgz00_bglt) (BgL_new3708z00_6316);
						BgL_var3707z00_7240 = (BgL_globalz00_bglt) (BgL_var3707z00_6318);
						{	/* SawMill/defs.scm 38 */
							obj_t BgL_loc3706z00_7241;

							BgL_globalz00_bglt BgL_var3707z00_7242;

							BgL_loc3706z00_7241 = BgL_loc3706z00_6317;
							BgL_var3707z00_7242 = BgL_var3707z00_7240;
							((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_7238))->
									BgL_locz00) = ((obj_t) BgL_loc3706z00_7241), BUNSPEC);
							((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_7238))->
									BgL_varz00) =
								((BgL_globalz00_bglt) BgL_var3707z00_7242), BUNSPEC);
							BgL_res5998z00_7243 = BgL_new3708z00_7238;
						}
					}
					BgL_auxz00_9352 = BgL_res5998z00_7243;
				}
				return (obj_t) (BgL_auxz00_9352);
			}
		}
	}



/* %allocate-rtl_loadg */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt
		BGl_z52allocatezd2rtl_loadgz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadgz00_bglt BgL_new3712z00_7244;

				BgL_new3712z00_7244 =
					((BgL_rtl_loadgz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_loadgz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3712z00_7244),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadgz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 38 */
					BgL_objectz00_bglt BgL_auxz00_9362;

					BgL_auxz00_9362 = (BgL_objectz00_bglt) (BgL_new3712z00_7244);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9362, BFALSE);
				}
				return BgL_new3712z00_7244;
			}
		}
	}



/* _%allocate-rtl_loadg */
	obj_t BGl__z52allocatezd2rtl_loadgz80zzsaw_defsz00(obj_t BgL_envz00_6014)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadgz00_bglt BgL_auxz00_9365;

				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadgz00_bglt BgL_res5999z00_7248;

					{	/* SawMill/defs.scm 38 */
						BgL_rtl_loadgz00_bglt BgL_new3712z00_7246;

						BgL_new3712z00_7246 =
							((BgL_rtl_loadgz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadgz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3712z00_7246),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadgz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 38 */
							BgL_objectz00_bglt BgL_auxz00_9370;

							BgL_auxz00_9370 = (BgL_objectz00_bglt) (BgL_new3712z00_7246);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9370, BFALSE);
						}
						BgL_res5999z00_7248 = BgL_new3712z00_7246;
					}
					BgL_auxz00_9365 = BgL_res5999z00_7248;
				}
				return (obj_t) (BgL_auxz00_9365);
			}
		}
	}



/* rtl_loadg-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt BGl_rtl_loadgzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			if ((BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 38 */
					{	/* SawMill/defs.scm 38 */
						BgL_rtl_loadgz00_bglt BgL_res5737z00_4387;

						{	/* SawMill/defs.scm 38 */
							BgL_rtl_loadgz00_bglt BgL_new3712z00_4383;

							BgL_new3712z00_4383 =
								((BgL_rtl_loadgz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_loadgz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3712z00_4383),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadgz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 38 */
								BgL_objectz00_bglt BgL_auxz00_9380;

								BgL_auxz00_9380 = (BgL_objectz00_bglt) (BgL_new3712z00_4383);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9380, BFALSE);
							}
							BgL_res5737z00_4387 = BgL_new3712z00_4383;
						}
						BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5737z00_4387);
					}
					{	/* SawMill/defs.scm 38 */
						BgL_globalz00_bglt BgL_arg5158z00_1946;

						BgL_arg5158z00_1946 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMill/defs.scm 38 */
							BgL_rtl_loadgz00_bglt BgL_res5738z00_4393;

							{	/* SawMill/defs.scm 38 */
								BgL_rtl_loadgz00_bglt BgL_new3708z00_4388;

								BgL_new3708z00_4388 =
									(BgL_rtl_loadgz00_bglt)
									(BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 38 */
									obj_t BgL_loc3706z00_4391;

									BgL_globalz00_bglt BgL_var3707z00_4392;

									BgL_loc3706z00_4391 = BUNSPEC;
									BgL_var3707z00_4392 = BgL_arg5158z00_1946;
									((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_4388))->
											BgL_locz00) = ((obj_t) BgL_loc3706z00_4391), BUNSPEC);
									((((BgL_rtl_loadgz00_bglt) CREF(BgL_new3708z00_4388))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var3707z00_4392), BUNSPEC);
									BgL_res5738z00_4393 = BgL_new3708z00_4388;
							}}
							(obj_t) (BgL_res5738z00_4393);
				}}}
			else
				{	/* SawMill/defs.scm 38 */
					BFALSE;
				}
			return
				(BgL_rtl_loadgz00_bglt) (BGl_z52thezd2rtl_loadgzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_loadg-nil */
	obj_t BGl__rtl_loadgzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6015)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			return (obj_t) (BGl_rtl_loadgzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_loadi? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadizf3zf3zzsaw_defsz00(obj_t
		BgL_obj3695z00_446)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3695z00_446,
				BGl_rtl_loadiz00zzsaw_defsz00);
		}
	}



/* _rtl_loadi? */
	obj_t BGl__rtl_loadizf3zf3zzsaw_defsz00(obj_t BgL_envz00_6012,
		obj_t BgL_obj3695z00_6013)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3695z00_6013,
					BGl_rtl_loadiz00zzsaw_defsz00));
		}
	}



/* make-rtl_loadi */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt
		BGl_makezd2rtl_loadizd2zzsaw_defsz00(obj_t BgL_loc3674z00_450,
		BgL_atomz00_bglt BgL_constant3675z00_451)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_loadiz00_bglt BgL_new3676z00_4394;

				{	/* SawMill/defs.scm 37 */
					BgL_rtl_loadiz00_bglt BgL_res5739z00_4399;

					{	/* SawMill/defs.scm 37 */
						BgL_rtl_loadiz00_bglt BgL_new3684z00_4395;

						BgL_new3684z00_4395 =
							((BgL_rtl_loadiz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadiz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3684z00_4395),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadiz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 37 */
							BgL_objectz00_bglt BgL_auxz00_9399;

							BgL_auxz00_9399 = (BgL_objectz00_bglt) (BgL_new3684z00_4395);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9399, BFALSE);
						}
						BgL_res5739z00_4399 = BgL_new3684z00_4395;
					}
					BgL_new3676z00_4394 = BgL_res5739z00_4399;
				}
				{	/* SawMill/defs.scm 37 */
					BgL_rtl_loadiz00_bglt BgL_res5740z00_4405;

					{	/* SawMill/defs.scm 37 */
						BgL_rtl_loadiz00_bglt BgL_new3680z00_4400;

						BgL_new3680z00_4400 = BgL_new3676z00_4394;
						{	/* SawMill/defs.scm 37 */
							obj_t BgL_loc3678z00_4403;

							BgL_atomz00_bglt BgL_constant3679z00_4404;

							BgL_loc3678z00_4403 = BgL_loc3674z00_450;
							BgL_constant3679z00_4404 = BgL_constant3675z00_451;
							((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_4400))->
									BgL_locz00) = ((obj_t) BgL_loc3678z00_4403), BUNSPEC);
							((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_4400))->
									BgL_constantz00) =
								((BgL_atomz00_bglt) BgL_constant3679z00_4404), BUNSPEC);
							BgL_res5740z00_4405 = BgL_new3680z00_4400;
					}} BgL_res5740z00_4405;
				}
				return BgL_new3676z00_4394;
			}
		}
	}



/* _make-rtl_loadi */
	obj_t BGl__makezd2rtl_loadizd2zzsaw_defsz00(obj_t BgL_envz00_6319,
		obj_t BgL_loc3674z00_6320, obj_t BgL_constant3675z00_6321)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			return
				(obj_t) (BGl_makezd2rtl_loadizd2zzsaw_defsz00(BgL_loc3674z00_6320,
					(BgL_atomz00_bglt) (BgL_constant3675z00_6321)));
		}
	}



/* fill-rtl_loadi! */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt
		BGl_fillzd2rtl_loadiz12zc0zzsaw_defsz00(BgL_rtl_loadiz00_bglt
		BgL_new3680z00_452, obj_t BgL_loc3678z00_453,
		BgL_atomz00_bglt BgL_constant3679z00_454)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				obj_t BgL_loc3678z00_7250;

				BgL_atomz00_bglt BgL_constant3679z00_7251;

				BgL_loc3678z00_7250 = BgL_loc3678z00_453;
				BgL_constant3679z00_7251 = BgL_constant3679z00_454;
				((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_452))->BgL_locz00) =
					((obj_t) BgL_loc3678z00_7250), BUNSPEC);
				((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_452))->BgL_constantz00) =
					((BgL_atomz00_bglt) BgL_constant3679z00_7251), BUNSPEC);
				return BgL_new3680z00_452;
			}
		}
	}



/* _fill-rtl_loadi! */
	obj_t BGl__fillzd2rtl_loadiz12zc0zzsaw_defsz00(obj_t BgL_envz00_6322,
		obj_t BgL_new3680z00_6323, obj_t BgL_loc3678z00_6324,
		obj_t BgL_constant3679z00_6325)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_loadiz00_bglt BgL_auxz00_9409;

				{	/* SawMill/defs.scm 37 */
					BgL_rtl_loadiz00_bglt BgL_res6000z00_7257;

					{	/* SawMill/defs.scm 37 */
						BgL_rtl_loadiz00_bglt BgL_new3680z00_7252;

						BgL_atomz00_bglt BgL_constant3679z00_7254;

						BgL_new3680z00_7252 = (BgL_rtl_loadiz00_bglt) (BgL_new3680z00_6323);
						BgL_constant3679z00_7254 =
							(BgL_atomz00_bglt) (BgL_constant3679z00_6325);
						{	/* SawMill/defs.scm 37 */
							obj_t BgL_loc3678z00_7255;

							BgL_atomz00_bglt BgL_constant3679z00_7256;

							BgL_loc3678z00_7255 = BgL_loc3678z00_6324;
							BgL_constant3679z00_7256 = BgL_constant3679z00_7254;
							((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_7252))->
									BgL_locz00) = ((obj_t) BgL_loc3678z00_7255), BUNSPEC);
							((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_7252))->
									BgL_constantz00) =
								((BgL_atomz00_bglt) BgL_constant3679z00_7256), BUNSPEC);
							BgL_res6000z00_7257 = BgL_new3680z00_7252;
						}
					}
					BgL_auxz00_9409 = BgL_res6000z00_7257;
				}
				return (obj_t) (BgL_auxz00_9409);
			}
		}
	}



/* %allocate-rtl_loadi */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt
		BGl_z52allocatezd2rtl_loadiz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_loadiz00_bglt BgL_new3684z00_7258;

				BgL_new3684z00_7258 =
					((BgL_rtl_loadiz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_loadiz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3684z00_7258),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadiz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 37 */
					BgL_objectz00_bglt BgL_auxz00_9419;

					BgL_auxz00_9419 = (BgL_objectz00_bglt) (BgL_new3684z00_7258);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9419, BFALSE);
				}
				return BgL_new3684z00_7258;
			}
		}
	}



/* _%allocate-rtl_loadi */
	obj_t BGl__z52allocatezd2rtl_loadiz80zzsaw_defsz00(obj_t BgL_envz00_6010)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_loadiz00_bglt BgL_auxz00_9422;

				{	/* SawMill/defs.scm 37 */
					BgL_rtl_loadiz00_bglt BgL_res6001z00_7262;

					{	/* SawMill/defs.scm 37 */
						BgL_rtl_loadiz00_bglt BgL_new3684z00_7260;

						BgL_new3684z00_7260 =
							((BgL_rtl_loadiz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_loadiz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3684z00_7260),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadiz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 37 */
							BgL_objectz00_bglt BgL_auxz00_9427;

							BgL_auxz00_9427 = (BgL_objectz00_bglt) (BgL_new3684z00_7260);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9427, BFALSE);
						}
						BgL_res6001z00_7262 = BgL_new3684z00_7260;
					}
					BgL_auxz00_9422 = BgL_res6001z00_7262;
				}
				return (obj_t) (BgL_auxz00_9422);
			}
		}
	}



/* rtl_loadi-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt BGl_rtl_loadizd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			if ((BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 37 */
					{	/* SawMill/defs.scm 37 */
						BgL_rtl_loadiz00_bglt BgL_res5741z00_4416;

						{	/* SawMill/defs.scm 37 */
							BgL_rtl_loadiz00_bglt BgL_new3684z00_4412;

							BgL_new3684z00_4412 =
								((BgL_rtl_loadiz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_loadiz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3684z00_4412),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_loadiz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 37 */
								BgL_objectz00_bglt BgL_auxz00_9437;

								BgL_auxz00_9437 = (BgL_objectz00_bglt) (BgL_new3684z00_4412);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9437, BFALSE);
							}
							BgL_res5741z00_4416 = BgL_new3684z00_4412;
						}
						BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5741z00_4416);
					}
					{	/* SawMill/defs.scm 37 */
						BgL_atomz00_bglt BgL_arg5161z00_1953;

						BgL_arg5161z00_1953 = BGl_atomzd2nilzd2zzast_nodez00();
						{	/* SawMill/defs.scm 37 */
							BgL_rtl_loadiz00_bglt BgL_res5742z00_4422;

							{	/* SawMill/defs.scm 37 */
								BgL_rtl_loadiz00_bglt BgL_new3680z00_4417;

								BgL_new3680z00_4417 =
									(BgL_rtl_loadiz00_bglt)
									(BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 37 */
									obj_t BgL_loc3678z00_4420;

									BgL_atomz00_bglt BgL_constant3679z00_4421;

									BgL_loc3678z00_4420 = BUNSPEC;
									BgL_constant3679z00_4421 = BgL_arg5161z00_1953;
									((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_4417))->
											BgL_locz00) = ((obj_t) BgL_loc3678z00_4420), BUNSPEC);
									((((BgL_rtl_loadiz00_bglt) CREF(BgL_new3680z00_4417))->
											BgL_constantz00) =
										((BgL_atomz00_bglt) BgL_constant3679z00_4421), BUNSPEC);
									BgL_res5742z00_4422 = BgL_new3680z00_4417;
							}}
							(obj_t) (BgL_res5742z00_4422);
				}}}
			else
				{	/* SawMill/defs.scm 37 */
					BFALSE;
				}
			return
				(BgL_rtl_loadiz00_bglt) (BGl_z52thezd2rtl_loadizd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_loadi-nil */
	obj_t BGl__rtl_loadizd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6011)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			return (obj_t) (BGl_rtl_loadizd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_mov? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_movzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3667z00_458)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3667z00_458,
				BGl_rtl_movz00zzsaw_defsz00);
		}
	}



/* _rtl_mov? */
	obj_t BGl__rtl_movzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6008,
		obj_t BgL_obj3667z00_6009)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3667z00_6009,
					BGl_rtl_movz00zzsaw_defsz00));
		}
	}



/* make-rtl_mov */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt BGl_makezd2rtl_movzd2zzsaw_defsz00(obj_t
		BgL_loc3653z00_462)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_movz00_bglt BgL_new3654z00_4423;

				{	/* SawMill/defs.scm 36 */
					BgL_rtl_movz00_bglt BgL_res5743z00_4428;

					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_new3660z00_4424;

						BgL_new3660z00_4424 =
							((BgL_rtl_movz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_movz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3660z00_4424),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_movz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_9456;

							BgL_auxz00_9456 = (BgL_objectz00_bglt) (BgL_new3660z00_4424);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9456, BFALSE);
						}
						BgL_res5743z00_4428 = BgL_new3660z00_4424;
					}
					BgL_new3654z00_4423 = BgL_res5743z00_4428;
				}
				{	/* SawMill/defs.scm 36 */
					BgL_rtl_movz00_bglt BgL_res5744z00_4432;

					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_new3657z00_4429;

						BgL_new3657z00_4429 = BgL_new3654z00_4423;
						{	/* SawMill/defs.scm 36 */
							obj_t BgL_loc3656z00_4431;

							BgL_loc3656z00_4431 = BgL_loc3653z00_462;
							((((BgL_rtl_movz00_bglt) CREF(BgL_new3657z00_4429))->BgL_locz00) =
								((obj_t) BgL_loc3656z00_4431), BUNSPEC);
							BgL_res5744z00_4432 = BgL_new3657z00_4429;
					}} BgL_res5744z00_4432;
				}
				return BgL_new3654z00_4423;
			}
		}
	}



/* _make-rtl_mov */
	obj_t BGl__makezd2rtl_movzd2zzsaw_defsz00(obj_t BgL_envz00_6326,
		obj_t BgL_loc3653z00_6327)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			return (obj_t) (BGl_makezd2rtl_movzd2zzsaw_defsz00(BgL_loc3653z00_6327));
		}
	}



/* fill-rtl_mov! */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt
		BGl_fillzd2rtl_movz12zc0zzsaw_defsz00(BgL_rtl_movz00_bglt
		BgL_new3657z00_463, obj_t BgL_loc3656z00_464)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				obj_t BgL_loc3656z00_7264;

				BgL_loc3656z00_7264 = BgL_loc3656z00_464;
				((((BgL_rtl_movz00_bglt) CREF(BgL_new3657z00_463))->BgL_locz00) =
					((obj_t) BgL_loc3656z00_7264), BUNSPEC);
				return BgL_new3657z00_463;
			}
		}
	}



/* _fill-rtl_mov! */
	obj_t BGl__fillzd2rtl_movz12zc0zzsaw_defsz00(obj_t BgL_envz00_6328,
		obj_t BgL_new3657z00_6329, obj_t BgL_loc3656z00_6330)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_movz00_bglt BgL_auxz00_9463;

				{	/* SawMill/defs.scm 36 */
					BgL_rtl_movz00_bglt BgL_res6002z00_7268;

					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_new3657z00_7265;

						BgL_new3657z00_7265 = (BgL_rtl_movz00_bglt) (BgL_new3657z00_6329);
						{	/* SawMill/defs.scm 36 */
							obj_t BgL_loc3656z00_7267;

							BgL_loc3656z00_7267 = BgL_loc3656z00_6330;
							((((BgL_rtl_movz00_bglt) CREF(BgL_new3657z00_7265))->BgL_locz00) =
								((obj_t) BgL_loc3656z00_7267), BUNSPEC);
							BgL_res6002z00_7268 = BgL_new3657z00_7265;
						}
					}
					BgL_auxz00_9463 = BgL_res6002z00_7268;
				}
				return (obj_t) (BgL_auxz00_9463);
			}
		}
	}



/* %allocate-rtl_mov */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt
		BGl_z52allocatezd2rtl_movz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_movz00_bglt BgL_new3660z00_7269;

				BgL_new3660z00_7269 =
					((BgL_rtl_movz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_movz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3660z00_7269),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_movz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 36 */
					BgL_objectz00_bglt BgL_auxz00_9471;

					BgL_auxz00_9471 = (BgL_objectz00_bglt) (BgL_new3660z00_7269);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9471, BFALSE);
				}
				return BgL_new3660z00_7269;
			}
		}
	}



/* _%allocate-rtl_mov */
	obj_t BGl__z52allocatezd2rtl_movz80zzsaw_defsz00(obj_t BgL_envz00_6006)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_movz00_bglt BgL_auxz00_9474;

				{	/* SawMill/defs.scm 36 */
					BgL_rtl_movz00_bglt BgL_res6003z00_7273;

					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_new3660z00_7271;

						BgL_new3660z00_7271 =
							((BgL_rtl_movz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_movz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3660z00_7271),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_movz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_9479;

							BgL_auxz00_9479 = (BgL_objectz00_bglt) (BgL_new3660z00_7271);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9479, BFALSE);
						}
						BgL_res6003z00_7273 = BgL_new3660z00_7271;
					}
					BgL_auxz00_9474 = BgL_res6003z00_7273;
				}
				return (obj_t) (BgL_auxz00_9474);
			}
		}
	}



/* rtl_mov-nil */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt BGl_rtl_movzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			if ((BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 36 */
					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_res5745z00_4442;

						{	/* SawMill/defs.scm 36 */
							BgL_rtl_movz00_bglt BgL_new3660z00_4438;

							BgL_new3660z00_4438 =
								((BgL_rtl_movz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_movz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3660z00_4438),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_movz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 36 */
								BgL_objectz00_bglt BgL_auxz00_9489;

								BgL_auxz00_9489 = (BgL_objectz00_bglt) (BgL_new3660z00_4438);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9489, BFALSE);
							}
							BgL_res5745z00_4442 = BgL_new3660z00_4438;
						}
						BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5745z00_4442);
					}
					{	/* SawMill/defs.scm 36 */
						BgL_rtl_movz00_bglt BgL_res5746z00_4446;

						{	/* SawMill/defs.scm 36 */
							BgL_rtl_movz00_bglt BgL_new3657z00_4443;

							BgL_new3657z00_4443 =
								(BgL_rtl_movz00_bglt)
								(BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 36 */
								obj_t BgL_loc3656z00_4445;

								BgL_loc3656z00_4445 = BUNSPEC;
								((((BgL_rtl_movz00_bglt) CREF(BgL_new3657z00_4443))->
										BgL_locz00) = ((obj_t) BgL_loc3656z00_4445), BUNSPEC);
								BgL_res5746z00_4446 = BgL_new3657z00_4443;
						}}
						(obj_t) (BgL_res5746z00_4446);
				}}
			else
				{	/* SawMill/defs.scm 36 */
					BFALSE;
				}
			return (BgL_rtl_movz00_bglt) (BGl_z52thezd2rtl_movzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_mov-nil */
	obj_t BGl__rtl_movzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6007)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			return (obj_t) (BGl_rtl_movzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_nop? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_nopzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3649z00_465)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3649z00_465,
				BGl_rtl_nopz00zzsaw_defsz00);
		}
	}



/* _rtl_nop? */
	obj_t BGl__rtl_nopzf3zf3zzsaw_defsz00(obj_t BgL_envz00_6004,
		obj_t BgL_obj3649z00_6005)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3649z00_6005,
					BGl_rtl_nopz00zzsaw_defsz00));
		}
	}



/* make-rtl_nop */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t
		BgL_loc3635z00_469)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_nopz00_bglt BgL_new3636z00_4447;

				{	/* SawMill/defs.scm 35 */
					BgL_rtl_nopz00_bglt BgL_res5747z00_4452;

					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_new3642z00_4448;

						BgL_new3642z00_4448 =
							((BgL_rtl_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_nopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3642z00_4448),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_nopz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_9506;

							BgL_auxz00_9506 = (BgL_objectz00_bglt) (BgL_new3642z00_4448);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9506, BFALSE);
						}
						BgL_res5747z00_4452 = BgL_new3642z00_4448;
					}
					BgL_new3636z00_4447 = BgL_res5747z00_4452;
				}
				{	/* SawMill/defs.scm 35 */
					BgL_rtl_nopz00_bglt BgL_res5748z00_4456;

					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_new3639z00_4453;

						BgL_new3639z00_4453 = BgL_new3636z00_4447;
						{	/* SawMill/defs.scm 35 */
							obj_t BgL_loc3638z00_4455;

							BgL_loc3638z00_4455 = BgL_loc3635z00_469;
							((((BgL_rtl_nopz00_bglt) CREF(BgL_new3639z00_4453))->BgL_locz00) =
								((obj_t) BgL_loc3638z00_4455), BUNSPEC);
							BgL_res5748z00_4456 = BgL_new3639z00_4453;
					}} BgL_res5748z00_4456;
				}
				return BgL_new3636z00_4447;
			}
		}
	}



/* _make-rtl_nop */
	obj_t BGl__makezd2rtl_nopzd2zzsaw_defsz00(obj_t BgL_envz00_6331,
		obj_t BgL_loc3635z00_6332)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			return (obj_t) (BGl_makezd2rtl_nopzd2zzsaw_defsz00(BgL_loc3635z00_6332));
		}
	}



/* fill-rtl_nop! */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt
		BGl_fillzd2rtl_nopz12zc0zzsaw_defsz00(BgL_rtl_nopz00_bglt
		BgL_new3639z00_470, obj_t BgL_loc3638z00_471)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				obj_t BgL_loc3638z00_7275;

				BgL_loc3638z00_7275 = BgL_loc3638z00_471;
				((((BgL_rtl_nopz00_bglt) CREF(BgL_new3639z00_470))->BgL_locz00) =
					((obj_t) BgL_loc3638z00_7275), BUNSPEC);
				return BgL_new3639z00_470;
			}
		}
	}



/* _fill-rtl_nop! */
	obj_t BGl__fillzd2rtl_nopz12zc0zzsaw_defsz00(obj_t BgL_envz00_6333,
		obj_t BgL_new3639z00_6334, obj_t BgL_loc3638z00_6335)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_nopz00_bglt BgL_auxz00_9513;

				{	/* SawMill/defs.scm 35 */
					BgL_rtl_nopz00_bglt BgL_res6004z00_7279;

					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_new3639z00_7276;

						BgL_new3639z00_7276 = (BgL_rtl_nopz00_bglt) (BgL_new3639z00_6334);
						{	/* SawMill/defs.scm 35 */
							obj_t BgL_loc3638z00_7278;

							BgL_loc3638z00_7278 = BgL_loc3638z00_6335;
							((((BgL_rtl_nopz00_bglt) CREF(BgL_new3639z00_7276))->BgL_locz00) =
								((obj_t) BgL_loc3638z00_7278), BUNSPEC);
							BgL_res6004z00_7279 = BgL_new3639z00_7276;
						}
					}
					BgL_auxz00_9513 = BgL_res6004z00_7279;
				}
				return (obj_t) (BgL_auxz00_9513);
			}
		}
	}



/* %allocate-rtl_nop */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt
		BGl_z52allocatezd2rtl_nopz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_nopz00_bglt BgL_new3642z00_7280;

				BgL_new3642z00_7280 =
					((BgL_rtl_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_nopz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3642z00_7280),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_nopz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 35 */
					BgL_objectz00_bglt BgL_auxz00_9521;

					BgL_auxz00_9521 = (BgL_objectz00_bglt) (BgL_new3642z00_7280);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9521, BFALSE);
				}
				return BgL_new3642z00_7280;
			}
		}
	}



/* _%allocate-rtl_nop */
	obj_t BGl__z52allocatezd2rtl_nopz80zzsaw_defsz00(obj_t BgL_envz00_6002)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_nopz00_bglt BgL_auxz00_9524;

				{	/* SawMill/defs.scm 35 */
					BgL_rtl_nopz00_bglt BgL_res6005z00_7284;

					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_new3642z00_7282;

						BgL_new3642z00_7282 =
							((BgL_rtl_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_nopz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3642z00_7282),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_nopz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_9529;

							BgL_auxz00_9529 = (BgL_objectz00_bglt) (BgL_new3642z00_7282);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9529, BFALSE);
						}
						BgL_res6005z00_7284 = BgL_new3642z00_7282;
					}
					BgL_auxz00_9524 = BgL_res6005z00_7284;
				}
				return (obj_t) (BgL_auxz00_9524);
			}
		}
	}



/* rtl_nop-nil */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt BGl_rtl_nopzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			if ((BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 35 */
					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_res5749z00_4466;

						{	/* SawMill/defs.scm 35 */
							BgL_rtl_nopz00_bglt BgL_new3642z00_4462;

							BgL_new3642z00_4462 =
								((BgL_rtl_nopz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_nopz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3642z00_4462),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_nopz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 35 */
								BgL_objectz00_bglt BgL_auxz00_9539;

								BgL_auxz00_9539 = (BgL_objectz00_bglt) (BgL_new3642z00_4462);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9539, BFALSE);
							}
							BgL_res5749z00_4466 = BgL_new3642z00_4462;
						}
						BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5749z00_4466);
					}
					{	/* SawMill/defs.scm 35 */
						BgL_rtl_nopz00_bglt BgL_res5750z00_4470;

						{	/* SawMill/defs.scm 35 */
							BgL_rtl_nopz00_bglt BgL_new3639z00_4467;

							BgL_new3639z00_4467 =
								(BgL_rtl_nopz00_bglt)
								(BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 35 */
								obj_t BgL_loc3638z00_4469;

								BgL_loc3638z00_4469 = BUNSPEC;
								((((BgL_rtl_nopz00_bglt) CREF(BgL_new3639z00_4467))->
										BgL_locz00) = ((obj_t) BgL_loc3638z00_4469), BUNSPEC);
								BgL_res5750z00_4470 = BgL_new3639z00_4467;
						}}
						(obj_t) (BgL_res5750z00_4470);
				}}
			else
				{	/* SawMill/defs.scm 35 */
					BFALSE;
				}
			return (BgL_rtl_nopz00_bglt) (BGl_z52thezd2rtl_nopzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_nop-nil */
	obj_t BGl__rtl_nopzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_6003)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			return (obj_t) (BGl_rtl_nopzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_pure? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_purezf3zf3zzsaw_defsz00(obj_t
		BgL_obj3631z00_472)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3631z00_472,
				BGl_rtl_purez00zzsaw_defsz00);
		}
	}



/* _rtl_pure? */
	obj_t BGl__rtl_purezf3zf3zzsaw_defsz00(obj_t BgL_envz00_6000,
		obj_t BgL_obj3631z00_6001)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3631z00_6001,
					BGl_rtl_purez00zzsaw_defsz00));
		}
	}



/* make-rtl_pure */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt
		BGl_makezd2rtl_purezd2zzsaw_defsz00(obj_t BgL_loc3617z00_476)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{	/* SawMill/defs.scm 34 */
				BgL_rtl_purez00_bglt BgL_new3618z00_4471;

				{	/* SawMill/defs.scm 34 */
					BgL_rtl_purez00_bglt BgL_res5751z00_4476;

					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_new3624z00_4472;

						BgL_new3624z00_4472 =
							((BgL_rtl_purez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_purez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3624z00_4472),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_purez00zzsaw_defsz00));
						{	/* SawMill/defs.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_9556;

							BgL_auxz00_9556 = (BgL_objectz00_bglt) (BgL_new3624z00_4472);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9556, BFALSE);
						}
						BgL_res5751z00_4476 = BgL_new3624z00_4472;
					}
					BgL_new3618z00_4471 = BgL_res5751z00_4476;
				}
				{	/* SawMill/defs.scm 34 */
					BgL_rtl_purez00_bglt BgL_res5752z00_4480;

					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_new3621z00_4477;

						BgL_new3621z00_4477 = BgL_new3618z00_4471;
						{	/* SawMill/defs.scm 34 */
							obj_t BgL_loc3620z00_4479;

							BgL_loc3620z00_4479 = BgL_loc3617z00_476;
							((((BgL_rtl_purez00_bglt) CREF(BgL_new3621z00_4477))->
									BgL_locz00) = ((obj_t) BgL_loc3620z00_4479), BUNSPEC);
							BgL_res5752z00_4480 = BgL_new3621z00_4477;
					}} BgL_res5752z00_4480;
				}
				return BgL_new3618z00_4471;
			}
		}
	}



/* _make-rtl_pure */
	obj_t BGl__makezd2rtl_purezd2zzsaw_defsz00(obj_t BgL_envz00_6336,
		obj_t BgL_loc3617z00_6337)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			return (obj_t) (BGl_makezd2rtl_purezd2zzsaw_defsz00(BgL_loc3617z00_6337));
		}
	}



/* fill-rtl_pure! */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt
		BGl_fillzd2rtl_purez12zc0zzsaw_defsz00(BgL_rtl_purez00_bglt
		BgL_new3621z00_477, obj_t BgL_loc3620z00_478)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{	/* SawMill/defs.scm 34 */
				obj_t BgL_loc3620z00_7286;

				BgL_loc3620z00_7286 = BgL_loc3620z00_478;
				((((BgL_rtl_purez00_bglt) CREF(BgL_new3621z00_477))->BgL_locz00) =
					((obj_t) BgL_loc3620z00_7286), BUNSPEC);
				return BgL_new3621z00_477;
			}
		}
	}



/* _fill-rtl_pure! */
	obj_t BGl__fillzd2rtl_purez12zc0zzsaw_defsz00(obj_t BgL_envz00_6338,
		obj_t BgL_new3621z00_6339, obj_t BgL_loc3620z00_6340)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{	/* SawMill/defs.scm 34 */
				BgL_rtl_purez00_bglt BgL_auxz00_9563;

				{	/* SawMill/defs.scm 34 */
					BgL_rtl_purez00_bglt BgL_res6006z00_7290;

					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_new3621z00_7287;

						BgL_new3621z00_7287 = (BgL_rtl_purez00_bglt) (BgL_new3621z00_6339);
						{	/* SawMill/defs.scm 34 */
							obj_t BgL_loc3620z00_7289;

							BgL_loc3620z00_7289 = BgL_loc3620z00_6340;
							((((BgL_rtl_purez00_bglt) CREF(BgL_new3621z00_7287))->
									BgL_locz00) = ((obj_t) BgL_loc3620z00_7289), BUNSPEC);
							BgL_res6006z00_7290 = BgL_new3621z00_7287;
						}
					}
					BgL_auxz00_9563 = BgL_res6006z00_7290;
				}
				return (obj_t) (BgL_auxz00_9563);
			}
		}
	}



/* %allocate-rtl_pure */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt
		BGl_z52allocatezd2rtl_purez80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{	/* SawMill/defs.scm 34 */
				BgL_rtl_purez00_bglt BgL_new3624z00_7291;

				BgL_new3624z00_7291 =
					((BgL_rtl_purez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_purez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3624z00_7291),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_purez00zzsaw_defsz00));
				{	/* SawMill/defs.scm 34 */
					BgL_objectz00_bglt BgL_auxz00_9571;

					BgL_auxz00_9571 = (BgL_objectz00_bglt) (BgL_new3624z00_7291);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9571, BFALSE);
				}
				return BgL_new3624z00_7291;
			}
		}
	}



/* _%allocate-rtl_pure */
	obj_t BGl__z52allocatezd2rtl_purez80zzsaw_defsz00(obj_t BgL_envz00_5998)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{	/* SawMill/defs.scm 34 */
				BgL_rtl_purez00_bglt BgL_auxz00_9574;

				{	/* SawMill/defs.scm 34 */
					BgL_rtl_purez00_bglt BgL_res6007z00_7295;

					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_new3624z00_7293;

						BgL_new3624z00_7293 =
							((BgL_rtl_purez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_purez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3624z00_7293),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_purez00zzsaw_defsz00));
						{	/* SawMill/defs.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_9579;

							BgL_auxz00_9579 = (BgL_objectz00_bglt) (BgL_new3624z00_7293);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9579, BFALSE);
						}
						BgL_res6007z00_7295 = BgL_new3624z00_7293;
					}
					BgL_auxz00_9574 = BgL_res6007z00_7295;
				}
				return (obj_t) (BgL_auxz00_9574);
			}
		}
	}



/* rtl_pure-nil */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt BGl_rtl_purezd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			if ((BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 34 */
					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_res5753z00_4490;

						{	/* SawMill/defs.scm 34 */
							BgL_rtl_purez00_bglt BgL_new3624z00_4486;

							BgL_new3624z00_4486 =
								((BgL_rtl_purez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_purez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3624z00_4486),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_purez00zzsaw_defsz00));
							{	/* SawMill/defs.scm 34 */
								BgL_objectz00_bglt BgL_auxz00_9589;

								BgL_auxz00_9589 = (BgL_objectz00_bglt) (BgL_new3624z00_4486);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9589, BFALSE);
							}
							BgL_res5753z00_4490 = BgL_new3624z00_4486;
						}
						BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5753z00_4490);
					}
					{	/* SawMill/defs.scm 34 */
						BgL_rtl_purez00_bglt BgL_res5754z00_4494;

						{	/* SawMill/defs.scm 34 */
							BgL_rtl_purez00_bglt BgL_new3621z00_4491;

							BgL_new3621z00_4491 =
								(BgL_rtl_purez00_bglt)
								(BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 34 */
								obj_t BgL_loc3620z00_4493;

								BgL_loc3620z00_4493 = BUNSPEC;
								((((BgL_rtl_purez00_bglt) CREF(BgL_new3621z00_4491))->
										BgL_locz00) = ((obj_t) BgL_loc3620z00_4493), BUNSPEC);
								BgL_res5754z00_4494 = BgL_new3621z00_4491;
						}}
						(obj_t) (BgL_res5754z00_4494);
				}}
			else
				{	/* SawMill/defs.scm 34 */
					BFALSE;
				}
			return
				(BgL_rtl_purez00_bglt) (BGl_z52thezd2rtl_purezd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_pure-nil */
	obj_t BGl__rtl_purezd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5999)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			return (obj_t) (BGl_rtl_purezd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_go? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_gozf3zf3zzsaw_defsz00(obj_t
		BgL_obj3613z00_479)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3613z00_479,
				BGl_rtl_goz00zzsaw_defsz00);
		}
	}



/* _rtl_go? */
	obj_t BGl__rtl_gozf3zf3zzsaw_defsz00(obj_t BgL_envz00_5996,
		obj_t BgL_obj3613z00_5997)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3613z00_5997,
					BGl_rtl_goz00zzsaw_defsz00));
		}
	}



/* make-rtl_go */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt BGl_makezd2rtl_gozd2zzsaw_defsz00(obj_t
		BgL_loc3592z00_483, BgL_blockz00_bglt BgL_to3593z00_484)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_goz00_bglt BgL_new3594z00_4495;

				{	/* SawMill/defs.scm 32 */
					BgL_rtl_goz00_bglt BgL_res5755z00_4500;

					{	/* SawMill/defs.scm 32 */
						BgL_rtl_goz00_bglt BgL_new3602z00_4496;

						BgL_new3602z00_4496 =
							((BgL_rtl_goz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_goz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3602z00_4496),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_goz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_9606;

							BgL_auxz00_9606 = (BgL_objectz00_bglt) (BgL_new3602z00_4496);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9606, BFALSE);
						}
						BgL_res5755z00_4500 = BgL_new3602z00_4496;
					}
					BgL_new3594z00_4495 = BgL_res5755z00_4500;
				}
				{	/* SawMill/defs.scm 32 */
					BgL_rtl_goz00_bglt BgL_res5756z00_4506;

					{	/* SawMill/defs.scm 32 */
						BgL_rtl_goz00_bglt BgL_new3598z00_4501;

						BgL_new3598z00_4501 = BgL_new3594z00_4495;
						{	/* SawMill/defs.scm 32 */
							obj_t BgL_loc3596z00_4504;

							BgL_blockz00_bglt BgL_to3597z00_4505;

							BgL_loc3596z00_4504 = BgL_loc3592z00_483;
							BgL_to3597z00_4505 = BgL_to3593z00_484;
							((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_4501))->BgL_locz00) =
								((obj_t) BgL_loc3596z00_4504), BUNSPEC);
							((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_4501))->BgL_toz00) =
								((BgL_blockz00_bglt) BgL_to3597z00_4505), BUNSPEC);
							BgL_res5756z00_4506 = BgL_new3598z00_4501;
					}} BgL_res5756z00_4506;
				}
				return BgL_new3594z00_4495;
			}
		}
	}



/* _make-rtl_go */
	obj_t BGl__makezd2rtl_gozd2zzsaw_defsz00(obj_t BgL_envz00_6341,
		obj_t BgL_loc3592z00_6342, obj_t BgL_to3593z00_6343)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			return
				(obj_t) (BGl_makezd2rtl_gozd2zzsaw_defsz00(BgL_loc3592z00_6342,
					(BgL_blockz00_bglt) (BgL_to3593z00_6343)));
		}
	}



/* fill-rtl_go! */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt
		BGl_fillzd2rtl_goz12zc0zzsaw_defsz00(BgL_rtl_goz00_bglt BgL_new3598z00_485,
		obj_t BgL_loc3596z00_486, BgL_blockz00_bglt BgL_to3597z00_487)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				obj_t BgL_loc3596z00_7297;

				BgL_blockz00_bglt BgL_to3597z00_7298;

				BgL_loc3596z00_7297 = BgL_loc3596z00_486;
				BgL_to3597z00_7298 = BgL_to3597z00_487;
				((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_485))->BgL_locz00) =
					((obj_t) BgL_loc3596z00_7297), BUNSPEC);
				((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_485))->BgL_toz00) =
					((BgL_blockz00_bglt) BgL_to3597z00_7298), BUNSPEC);
				return BgL_new3598z00_485;
			}
		}
	}



/* _fill-rtl_go! */
	obj_t BGl__fillzd2rtl_goz12zc0zzsaw_defsz00(obj_t BgL_envz00_6344,
		obj_t BgL_new3598z00_6345, obj_t BgL_loc3596z00_6346,
		obj_t BgL_to3597z00_6347)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_goz00_bglt BgL_auxz00_9616;

				{	/* SawMill/defs.scm 32 */
					BgL_rtl_goz00_bglt BgL_res6008z00_7304;

					{	/* SawMill/defs.scm 32 */
						BgL_rtl_goz00_bglt BgL_new3598z00_7299;

						BgL_blockz00_bglt BgL_to3597z00_7301;

						BgL_new3598z00_7299 = (BgL_rtl_goz00_bglt) (BgL_new3598z00_6345);
						BgL_to3597z00_7301 = (BgL_blockz00_bglt) (BgL_to3597z00_6347);
						{	/* SawMill/defs.scm 32 */
							obj_t BgL_loc3596z00_7302;

							BgL_blockz00_bglt BgL_to3597z00_7303;

							BgL_loc3596z00_7302 = BgL_loc3596z00_6346;
							BgL_to3597z00_7303 = BgL_to3597z00_7301;
							((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_7299))->BgL_locz00) =
								((obj_t) BgL_loc3596z00_7302), BUNSPEC);
							((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_7299))->BgL_toz00) =
								((BgL_blockz00_bglt) BgL_to3597z00_7303), BUNSPEC);
							BgL_res6008z00_7304 = BgL_new3598z00_7299;
						}
					}
					BgL_auxz00_9616 = BgL_res6008z00_7304;
				}
				return (obj_t) (BgL_auxz00_9616);
			}
		}
	}



/* %allocate-rtl_go */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt BGl_z52allocatezd2rtl_goz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_goz00_bglt BgL_new3602z00_7305;

				BgL_new3602z00_7305 =
					((BgL_rtl_goz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_goz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3602z00_7305),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_goz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 32 */
					BgL_objectz00_bglt BgL_auxz00_9626;

					BgL_auxz00_9626 = (BgL_objectz00_bglt) (BgL_new3602z00_7305);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9626, BFALSE);
				}
				return BgL_new3602z00_7305;
			}
		}
	}



/* _%allocate-rtl_go */
	obj_t BGl__z52allocatezd2rtl_goz80zzsaw_defsz00(obj_t BgL_envz00_5994)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_goz00_bglt BgL_auxz00_9629;

				{	/* SawMill/defs.scm 32 */
					BgL_rtl_goz00_bglt BgL_res6009z00_7309;

					{	/* SawMill/defs.scm 32 */
						BgL_rtl_goz00_bglt BgL_new3602z00_7307;

						BgL_new3602z00_7307 =
							((BgL_rtl_goz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_goz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3602z00_7307),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_goz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_9634;

							BgL_auxz00_9634 = (BgL_objectz00_bglt) (BgL_new3602z00_7307);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9634, BFALSE);
						}
						BgL_res6009z00_7309 = BgL_new3602z00_7307;
					}
					BgL_auxz00_9629 = BgL_res6009z00_7309;
				}
				return (obj_t) (BgL_auxz00_9629);
			}
		}
	}



/* rtl_go-nil */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt BGl_rtl_gozd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			if ((BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 32 */
					{	/* SawMill/defs.scm 32 */
						BgL_rtl_goz00_bglt BgL_res5757z00_4517;

						{	/* SawMill/defs.scm 32 */
							BgL_rtl_goz00_bglt BgL_new3602z00_4513;

							BgL_new3602z00_4513 =
								((BgL_rtl_goz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_goz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3602z00_4513),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_goz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_9644;

								BgL_auxz00_9644 = (BgL_objectz00_bglt) (BgL_new3602z00_4513);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9644, BFALSE);
							}
							BgL_res5757z00_4517 = BgL_new3602z00_4513;
						}
						BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5757z00_4517);
					}
					{	/* SawMill/defs.scm 32 */
						BgL_blockz00_bglt BgL_arg5170z00_1975;

						BgL_arg5170z00_1975 = BGl_blockzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/defs.scm 32 */
							BgL_rtl_goz00_bglt BgL_res5758z00_4523;

							{	/* SawMill/defs.scm 32 */
								BgL_rtl_goz00_bglt BgL_new3598z00_4518;

								BgL_new3598z00_4518 =
									(BgL_rtl_goz00_bglt)
									(BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 32 */
									obj_t BgL_loc3596z00_4521;

									BgL_blockz00_bglt BgL_to3597z00_4522;

									BgL_loc3596z00_4521 = BUNSPEC;
									BgL_to3597z00_4522 = BgL_arg5170z00_1975;
									((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_4518))->
											BgL_locz00) = ((obj_t) BgL_loc3596z00_4521), BUNSPEC);
									((((BgL_rtl_goz00_bglt) CREF(BgL_new3598z00_4518))->
											BgL_toz00) =
										((BgL_blockz00_bglt) BgL_to3597z00_4522), BUNSPEC);
									BgL_res5758z00_4523 = BgL_new3598z00_4518;
							}}
							(obj_t) (BgL_res5758z00_4523);
				}}}
			else
				{	/* SawMill/defs.scm 32 */
					BFALSE;
				}
			return (BgL_rtl_goz00_bglt) (BGl_z52thezd2rtl_gozd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_go-nil */
	obj_t BGl__rtl_gozd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5995)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			return (obj_t) (BGl_rtl_gozd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_ifne? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifnezf3zf3zzsaw_defsz00(obj_t
		BgL_obj3584z00_491)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3584z00_491,
				BGl_rtl_ifnez00zzsaw_defsz00);
		}
	}



/* _rtl_ifne? */
	obj_t BGl__rtl_ifnezf3zf3zzsaw_defsz00(obj_t BgL_envz00_5992,
		obj_t BgL_obj3584z00_5993)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3584z00_5993,
					BGl_rtl_ifnez00zzsaw_defsz00));
		}
	}



/* make-rtl_ifne */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt
		BGl_makezd2rtl_ifnezd2zzsaw_defsz00(obj_t BgL_loc3563z00_495,
		BgL_blockz00_bglt BgL_then3564z00_496)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifnez00_bglt BgL_new3565z00_4524;

				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifnez00_bglt BgL_res5759z00_4529;

					{	/* SawMill/defs.scm 31 */
						BgL_rtl_ifnez00_bglt BgL_new3573z00_4525;

						BgL_new3573z00_4525 =
							((BgL_rtl_ifnez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifnez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3573z00_4525),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifnez00zzsaw_defsz00));
						{	/* SawMill/defs.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_9663;

							BgL_auxz00_9663 = (BgL_objectz00_bglt) (BgL_new3573z00_4525);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9663, BFALSE);
						}
						BgL_res5759z00_4529 = BgL_new3573z00_4525;
					}
					BgL_new3565z00_4524 = BgL_res5759z00_4529;
				}
				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifnez00_bglt BgL_res5760z00_4535;

					{	/* SawMill/defs.scm 31 */
						BgL_rtl_ifnez00_bglt BgL_new3569z00_4530;

						BgL_new3569z00_4530 = BgL_new3565z00_4524;
						{	/* SawMill/defs.scm 31 */
							obj_t BgL_loc3567z00_4533;

							BgL_blockz00_bglt BgL_then3568z00_4534;

							BgL_loc3567z00_4533 = BgL_loc3563z00_495;
							BgL_then3568z00_4534 = BgL_then3564z00_496;
							((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_4530))->
									BgL_locz00) = ((obj_t) BgL_loc3567z00_4533), BUNSPEC);
							((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_4530))->
									BgL_thenz00) =
								((BgL_blockz00_bglt) BgL_then3568z00_4534), BUNSPEC);
							BgL_res5760z00_4535 = BgL_new3569z00_4530;
					}} BgL_res5760z00_4535;
				}
				return BgL_new3565z00_4524;
			}
		}
	}



/* _make-rtl_ifne */
	obj_t BGl__makezd2rtl_ifnezd2zzsaw_defsz00(obj_t BgL_envz00_6348,
		obj_t BgL_loc3563z00_6349, obj_t BgL_then3564z00_6350)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			return
				(obj_t) (BGl_makezd2rtl_ifnezd2zzsaw_defsz00(BgL_loc3563z00_6349,
					(BgL_blockz00_bglt) (BgL_then3564z00_6350)));
		}
	}



/* fill-rtl_ifne! */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt
		BGl_fillzd2rtl_ifnez12zc0zzsaw_defsz00(BgL_rtl_ifnez00_bglt
		BgL_new3569z00_497, obj_t BgL_loc3567z00_498,
		BgL_blockz00_bglt BgL_then3568z00_499)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				obj_t BgL_loc3567z00_7311;

				BgL_blockz00_bglt BgL_then3568z00_7312;

				BgL_loc3567z00_7311 = BgL_loc3567z00_498;
				BgL_then3568z00_7312 = BgL_then3568z00_499;
				((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_497))->BgL_locz00) =
					((obj_t) BgL_loc3567z00_7311), BUNSPEC);
				((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_497))->BgL_thenz00) =
					((BgL_blockz00_bglt) BgL_then3568z00_7312), BUNSPEC);
				return BgL_new3569z00_497;
			}
		}
	}



/* _fill-rtl_ifne! */
	obj_t BGl__fillzd2rtl_ifnez12zc0zzsaw_defsz00(obj_t BgL_envz00_6351,
		obj_t BgL_new3569z00_6352, obj_t BgL_loc3567z00_6353,
		obj_t BgL_then3568z00_6354)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifnez00_bglt BgL_auxz00_9673;

				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifnez00_bglt BgL_res6010z00_7318;

					{	/* SawMill/defs.scm 31 */
						BgL_rtl_ifnez00_bglt BgL_new3569z00_7313;

						BgL_blockz00_bglt BgL_then3568z00_7315;

						BgL_new3569z00_7313 = (BgL_rtl_ifnez00_bglt) (BgL_new3569z00_6352);
						BgL_then3568z00_7315 = (BgL_blockz00_bglt) (BgL_then3568z00_6354);
						{	/* SawMill/defs.scm 31 */
							obj_t BgL_loc3567z00_7316;

							BgL_blockz00_bglt BgL_then3568z00_7317;

							BgL_loc3567z00_7316 = BgL_loc3567z00_6353;
							BgL_then3568z00_7317 = BgL_then3568z00_7315;
							((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_7313))->
									BgL_locz00) = ((obj_t) BgL_loc3567z00_7316), BUNSPEC);
							((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_7313))->
									BgL_thenz00) =
								((BgL_blockz00_bglt) BgL_then3568z00_7317), BUNSPEC);
							BgL_res6010z00_7318 = BgL_new3569z00_7313;
						}
					}
					BgL_auxz00_9673 = BgL_res6010z00_7318;
				}
				return (obj_t) (BgL_auxz00_9673);
			}
		}
	}



/* %allocate-rtl_ifne */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt
		BGl_z52allocatezd2rtl_ifnez80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifnez00_bglt BgL_new3573z00_7319;

				BgL_new3573z00_7319 =
					((BgL_rtl_ifnez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_ifnez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3573z00_7319),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifnez00zzsaw_defsz00));
				{	/* SawMill/defs.scm 31 */
					BgL_objectz00_bglt BgL_auxz00_9683;

					BgL_auxz00_9683 = (BgL_objectz00_bglt) (BgL_new3573z00_7319);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9683, BFALSE);
				}
				return BgL_new3573z00_7319;
			}
		}
	}



/* _%allocate-rtl_ifne */
	obj_t BGl__z52allocatezd2rtl_ifnez80zzsaw_defsz00(obj_t BgL_envz00_5990)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifnez00_bglt BgL_auxz00_9686;

				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifnez00_bglt BgL_res6011z00_7323;

					{	/* SawMill/defs.scm 31 */
						BgL_rtl_ifnez00_bglt BgL_new3573z00_7321;

						BgL_new3573z00_7321 =
							((BgL_rtl_ifnez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifnez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3573z00_7321),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifnez00zzsaw_defsz00));
						{	/* SawMill/defs.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_9691;

							BgL_auxz00_9691 = (BgL_objectz00_bglt) (BgL_new3573z00_7321);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9691, BFALSE);
						}
						BgL_res6011z00_7323 = BgL_new3573z00_7321;
					}
					BgL_auxz00_9686 = BgL_res6011z00_7323;
				}
				return (obj_t) (BgL_auxz00_9686);
			}
		}
	}



/* rtl_ifne-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt BGl_rtl_ifnezd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			if ((BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 31 */
					{	/* SawMill/defs.scm 31 */
						BgL_rtl_ifnez00_bglt BgL_res5761z00_4546;

						{	/* SawMill/defs.scm 31 */
							BgL_rtl_ifnez00_bglt BgL_new3573z00_4542;

							BgL_new3573z00_4542 =
								((BgL_rtl_ifnez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_ifnez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3573z00_4542),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifnez00zzsaw_defsz00));
							{	/* SawMill/defs.scm 31 */
								BgL_objectz00_bglt BgL_auxz00_9701;

								BgL_auxz00_9701 = (BgL_objectz00_bglt) (BgL_new3573z00_4542);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9701, BFALSE);
							}
							BgL_res5761z00_4546 = BgL_new3573z00_4542;
						}
						BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5761z00_4546);
					}
					{	/* SawMill/defs.scm 31 */
						BgL_blockz00_bglt BgL_arg5173z00_1982;

						BgL_arg5173z00_1982 = BGl_blockzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/defs.scm 31 */
							BgL_rtl_ifnez00_bglt BgL_res5762z00_4552;

							{	/* SawMill/defs.scm 31 */
								BgL_rtl_ifnez00_bglt BgL_new3569z00_4547;

								BgL_new3569z00_4547 =
									(BgL_rtl_ifnez00_bglt)
									(BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 31 */
									obj_t BgL_loc3567z00_4550;

									BgL_blockz00_bglt BgL_then3568z00_4551;

									BgL_loc3567z00_4550 = BUNSPEC;
									BgL_then3568z00_4551 = BgL_arg5173z00_1982;
									((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_4547))->
											BgL_locz00) = ((obj_t) BgL_loc3567z00_4550), BUNSPEC);
									((((BgL_rtl_ifnez00_bglt) CREF(BgL_new3569z00_4547))->
											BgL_thenz00) =
										((BgL_blockz00_bglt) BgL_then3568z00_4551), BUNSPEC);
									BgL_res5762z00_4552 = BgL_new3569z00_4547;
							}}
							(obj_t) (BgL_res5762z00_4552);
				}}}
			else
				{	/* SawMill/defs.scm 31 */
					BFALSE;
				}
			return
				(BgL_rtl_ifnez00_bglt) (BGl_z52thezd2rtl_ifnezd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_ifne-nil */
	obj_t BGl__rtl_ifnezd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5991)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			return (obj_t) (BGl_rtl_ifnezd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_ifeq? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifeqzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3556z00_503)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3556z00_503,
				BGl_rtl_ifeqz00zzsaw_defsz00);
		}
	}



/* _rtl_ifeq? */
	obj_t BGl__rtl_ifeqzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5988,
		obj_t BgL_obj3556z00_5989)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3556z00_5989,
					BGl_rtl_ifeqz00zzsaw_defsz00));
		}
	}



/* make-rtl_ifeq */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt
		BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t BgL_loc3535z00_507,
		BgL_blockz00_bglt BgL_then3536z00_508)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_ifeqz00_bglt BgL_new3537z00_4553;

				{	/* SawMill/defs.scm 30 */
					BgL_rtl_ifeqz00_bglt BgL_res5763z00_4558;

					{	/* SawMill/defs.scm 30 */
						BgL_rtl_ifeqz00_bglt BgL_new3545z00_4554;

						BgL_new3545z00_4554 =
							((BgL_rtl_ifeqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifeqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3545z00_4554),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifeqz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_9720;

							BgL_auxz00_9720 = (BgL_objectz00_bglt) (BgL_new3545z00_4554);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9720, BFALSE);
						}
						BgL_res5763z00_4558 = BgL_new3545z00_4554;
					}
					BgL_new3537z00_4553 = BgL_res5763z00_4558;
				}
				{	/* SawMill/defs.scm 30 */
					BgL_rtl_ifeqz00_bglt BgL_res5764z00_4564;

					{	/* SawMill/defs.scm 30 */
						BgL_rtl_ifeqz00_bglt BgL_new3541z00_4559;

						BgL_new3541z00_4559 = BgL_new3537z00_4553;
						{	/* SawMill/defs.scm 30 */
							obj_t BgL_loc3539z00_4562;

							BgL_blockz00_bglt BgL_then3540z00_4563;

							BgL_loc3539z00_4562 = BgL_loc3535z00_507;
							BgL_then3540z00_4563 = BgL_then3536z00_508;
							((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_4559))->
									BgL_locz00) = ((obj_t) BgL_loc3539z00_4562), BUNSPEC);
							((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_4559))->
									BgL_thenz00) =
								((BgL_blockz00_bglt) BgL_then3540z00_4563), BUNSPEC);
							BgL_res5764z00_4564 = BgL_new3541z00_4559;
					}} BgL_res5764z00_4564;
				}
				return BgL_new3537z00_4553;
			}
		}
	}



/* _make-rtl_ifeq */
	obj_t BGl__makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t BgL_envz00_6355,
		obj_t BgL_loc3535z00_6356, obj_t BgL_then3536z00_6357)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			return
				(obj_t) (BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(BgL_loc3535z00_6356,
					(BgL_blockz00_bglt) (BgL_then3536z00_6357)));
		}
	}



/* fill-rtl_ifeq! */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt
		BGl_fillzd2rtl_ifeqz12zc0zzsaw_defsz00(BgL_rtl_ifeqz00_bglt
		BgL_new3541z00_509, obj_t BgL_loc3539z00_510,
		BgL_blockz00_bglt BgL_then3540z00_511)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				obj_t BgL_loc3539z00_7325;

				BgL_blockz00_bglt BgL_then3540z00_7326;

				BgL_loc3539z00_7325 = BgL_loc3539z00_510;
				BgL_then3540z00_7326 = BgL_then3540z00_511;
				((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_509))->BgL_locz00) =
					((obj_t) BgL_loc3539z00_7325), BUNSPEC);
				((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_509))->BgL_thenz00) =
					((BgL_blockz00_bglt) BgL_then3540z00_7326), BUNSPEC);
				return BgL_new3541z00_509;
			}
		}
	}



/* _fill-rtl_ifeq! */
	obj_t BGl__fillzd2rtl_ifeqz12zc0zzsaw_defsz00(obj_t BgL_envz00_6358,
		obj_t BgL_new3541z00_6359, obj_t BgL_loc3539z00_6360,
		obj_t BgL_then3540z00_6361)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_ifeqz00_bglt BgL_auxz00_9730;

				{	/* SawMill/defs.scm 30 */
					BgL_rtl_ifeqz00_bglt BgL_res6012z00_7332;

					{	/* SawMill/defs.scm 30 */
						BgL_rtl_ifeqz00_bglt BgL_new3541z00_7327;

						BgL_blockz00_bglt BgL_then3540z00_7329;

						BgL_new3541z00_7327 = (BgL_rtl_ifeqz00_bglt) (BgL_new3541z00_6359);
						BgL_then3540z00_7329 = (BgL_blockz00_bglt) (BgL_then3540z00_6361);
						{	/* SawMill/defs.scm 30 */
							obj_t BgL_loc3539z00_7330;

							BgL_blockz00_bglt BgL_then3540z00_7331;

							BgL_loc3539z00_7330 = BgL_loc3539z00_6360;
							BgL_then3540z00_7331 = BgL_then3540z00_7329;
							((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_7327))->
									BgL_locz00) = ((obj_t) BgL_loc3539z00_7330), BUNSPEC);
							((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_7327))->
									BgL_thenz00) =
								((BgL_blockz00_bglt) BgL_then3540z00_7331), BUNSPEC);
							BgL_res6012z00_7332 = BgL_new3541z00_7327;
						}
					}
					BgL_auxz00_9730 = BgL_res6012z00_7332;
				}
				return (obj_t) (BgL_auxz00_9730);
			}
		}
	}



/* %allocate-rtl_ifeq */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt
		BGl_z52allocatezd2rtl_ifeqz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_ifeqz00_bglt BgL_new3545z00_7333;

				BgL_new3545z00_7333 =
					((BgL_rtl_ifeqz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_ifeqz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3545z00_7333),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifeqz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 30 */
					BgL_objectz00_bglt BgL_auxz00_9740;

					BgL_auxz00_9740 = (BgL_objectz00_bglt) (BgL_new3545z00_7333);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9740, BFALSE);
				}
				return BgL_new3545z00_7333;
			}
		}
	}



/* _%allocate-rtl_ifeq */
	obj_t BGl__z52allocatezd2rtl_ifeqz80zzsaw_defsz00(obj_t BgL_envz00_5986)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_ifeqz00_bglt BgL_auxz00_9743;

				{	/* SawMill/defs.scm 30 */
					BgL_rtl_ifeqz00_bglt BgL_res6013z00_7337;

					{	/* SawMill/defs.scm 30 */
						BgL_rtl_ifeqz00_bglt BgL_new3545z00_7335;

						BgL_new3545z00_7335 =
							((BgL_rtl_ifeqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifeqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3545z00_7335),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifeqz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_9748;

							BgL_auxz00_9748 = (BgL_objectz00_bglt) (BgL_new3545z00_7335);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9748, BFALSE);
						}
						BgL_res6013z00_7337 = BgL_new3545z00_7335;
					}
					BgL_auxz00_9743 = BgL_res6013z00_7337;
				}
				return (obj_t) (BgL_auxz00_9743);
			}
		}
	}



/* rtl_ifeq-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			if ((BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 30 */
					{	/* SawMill/defs.scm 30 */
						BgL_rtl_ifeqz00_bglt BgL_res5765z00_4575;

						{	/* SawMill/defs.scm 30 */
							BgL_rtl_ifeqz00_bglt BgL_new3545z00_4571;

							BgL_new3545z00_4571 =
								((BgL_rtl_ifeqz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_ifeqz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3545z00_4571),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifeqz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 30 */
								BgL_objectz00_bglt BgL_auxz00_9758;

								BgL_auxz00_9758 = (BgL_objectz00_bglt) (BgL_new3545z00_4571);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9758, BFALSE);
							}
							BgL_res5765z00_4575 = BgL_new3545z00_4571;
						}
						BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5765z00_4575);
					}
					{	/* SawMill/defs.scm 30 */
						BgL_blockz00_bglt BgL_arg5176z00_1989;

						BgL_arg5176z00_1989 = BGl_blockzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/defs.scm 30 */
							BgL_rtl_ifeqz00_bglt BgL_res5766z00_4581;

							{	/* SawMill/defs.scm 30 */
								BgL_rtl_ifeqz00_bglt BgL_new3541z00_4576;

								BgL_new3541z00_4576 =
									(BgL_rtl_ifeqz00_bglt)
									(BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 30 */
									obj_t BgL_loc3539z00_4579;

									BgL_blockz00_bglt BgL_then3540z00_4580;

									BgL_loc3539z00_4579 = BUNSPEC;
									BgL_then3540z00_4580 = BgL_arg5176z00_1989;
									((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_4576))->
											BgL_locz00) = ((obj_t) BgL_loc3539z00_4579), BUNSPEC);
									((((BgL_rtl_ifeqz00_bglt) CREF(BgL_new3541z00_4576))->
											BgL_thenz00) =
										((BgL_blockz00_bglt) BgL_then3540z00_4580), BUNSPEC);
									BgL_res5766z00_4581 = BgL_new3541z00_4576;
							}}
							(obj_t) (BgL_res5766z00_4581);
				}}}
			else
				{	/* SawMill/defs.scm 30 */
					BFALSE;
				}
			return
				(BgL_rtl_ifeqz00_bglt) (BGl_z52thezd2rtl_ifeqzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_ifeq-nil */
	obj_t BGl__rtl_ifeqzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5987)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			return (obj_t) (BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_switch? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_switchzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3528z00_515)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3528z00_515,
				BGl_rtl_switchz00zzsaw_defsz00);
		}
	}



/* _rtl_switch? */
	obj_t BGl__rtl_switchzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5984,
		obj_t BgL_obj3528z00_5985)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3528z00_5985,
					BGl_rtl_switchz00zzsaw_defsz00));
		}
	}



/* make-rtl_switch */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt
		BGl_makezd2rtl_switchzd2zzsaw_defsz00(obj_t BgL_loc3493z00_519,
		BgL_typez00_bglt BgL_type3494z00_520, obj_t BgL_patterns3495z00_521,
		obj_t BgL_labels3496z00_522)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_switchz00_bglt BgL_new3497z00_4582;

				{	/* SawMill/defs.scm 29 */
					BgL_rtl_switchz00_bglt BgL_res5767z00_4587;

					{	/* SawMill/defs.scm 29 */
						BgL_rtl_switchz00_bglt BgL_new3509z00_4583;

						BgL_new3509z00_4583 =
							((BgL_rtl_switchz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_switchz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3509z00_4583),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_switchz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_9777;

							BgL_auxz00_9777 = (BgL_objectz00_bglt) (BgL_new3509z00_4583);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9777, BFALSE);
						}
						BgL_res5767z00_4587 = BgL_new3509z00_4583;
					}
					BgL_new3497z00_4582 = BgL_res5767z00_4587;
				}
				{	/* SawMill/defs.scm 29 */
					BgL_rtl_switchz00_bglt BgL_res5768z00_4597;

					{	/* SawMill/defs.scm 29 */
						BgL_rtl_switchz00_bglt BgL_new3503z00_4588;

						BgL_new3503z00_4588 = BgL_new3497z00_4582;
						{	/* SawMill/defs.scm 29 */
							obj_t BgL_loc3499z00_4593;

							BgL_typez00_bglt BgL_type3500z00_4594;

							obj_t BgL_patterns3501z00_4595;

							obj_t BgL_labels3502z00_4596;

							BgL_loc3499z00_4593 = BgL_loc3493z00_519;
							BgL_type3500z00_4594 = BgL_type3494z00_520;
							BgL_patterns3501z00_4595 = BgL_patterns3495z00_521;
							BgL_labels3502z00_4596 = BgL_labels3496z00_522;
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4588))->
									BgL_locz00) = ((obj_t) BgL_loc3499z00_4593), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4588))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3500z00_4594), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4588))->
									BgL_patternsz00) =
								((obj_t) BgL_patterns3501z00_4595), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4588))->
									BgL_labelsz00) = ((obj_t) BgL_labels3502z00_4596), BUNSPEC);
							BgL_res5768z00_4597 = BgL_new3503z00_4588;
					}} BgL_res5768z00_4597;
				}
				return BgL_new3497z00_4582;
			}
		}
	}



/* _make-rtl_switch */
	obj_t BGl__makezd2rtl_switchzd2zzsaw_defsz00(obj_t BgL_envz00_6362,
		obj_t BgL_loc3493z00_6363, obj_t BgL_type3494z00_6364,
		obj_t BgL_patterns3495z00_6365, obj_t BgL_labels3496z00_6366)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			return
				(obj_t) (BGl_makezd2rtl_switchzd2zzsaw_defsz00(BgL_loc3493z00_6363,
					(BgL_typez00_bglt) (BgL_type3494z00_6364), BgL_patterns3495z00_6365,
					BgL_labels3496z00_6366));
		}
	}



/* fill-rtl_switch! */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt
		BGl_fillzd2rtl_switchz12zc0zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_new3503z00_523, obj_t BgL_loc3499z00_524,
		BgL_typez00_bglt BgL_type3500z00_525, obj_t BgL_patterns3501z00_526,
		obj_t BgL_labels3502z00_527)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				obj_t BgL_loc3499z00_7339;

				BgL_typez00_bglt BgL_type3500z00_7340;

				obj_t BgL_patterns3501z00_7341;

				obj_t BgL_labels3502z00_7342;

				BgL_loc3499z00_7339 = BgL_loc3499z00_524;
				BgL_type3500z00_7340 = BgL_type3500z00_525;
				BgL_patterns3501z00_7341 = BgL_patterns3501z00_526;
				BgL_labels3502z00_7342 = BgL_labels3502z00_527;
				((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_523))->BgL_locz00) =
					((obj_t) BgL_loc3499z00_7339), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_523))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3500z00_7340), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_523))->
						BgL_patternsz00) = ((obj_t) BgL_patterns3501z00_7341), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_523))->BgL_labelsz00) =
					((obj_t) BgL_labels3502z00_7342), BUNSPEC);
				return BgL_new3503z00_523;
			}
		}
	}



/* _fill-rtl_switch! */
	obj_t BGl__fillzd2rtl_switchz12zc0zzsaw_defsz00(obj_t BgL_envz00_6367,
		obj_t BgL_new3503z00_6368, obj_t BgL_loc3499z00_6369,
		obj_t BgL_type3500z00_6370, obj_t BgL_patterns3501z00_6371,
		obj_t BgL_labels3502z00_6372)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_switchz00_bglt BgL_auxz00_9791;

				{	/* SawMill/defs.scm 29 */
					BgL_rtl_switchz00_bglt BgL_res6014z00_7352;

					{	/* SawMill/defs.scm 29 */
						BgL_rtl_switchz00_bglt BgL_new3503z00_7343;

						BgL_typez00_bglt BgL_type3500z00_7345;

						BgL_new3503z00_7343 =
							(BgL_rtl_switchz00_bglt) (BgL_new3503z00_6368);
						BgL_type3500z00_7345 = (BgL_typez00_bglt) (BgL_type3500z00_6370);
						{	/* SawMill/defs.scm 29 */
							obj_t BgL_loc3499z00_7348;

							BgL_typez00_bglt BgL_type3500z00_7349;

							obj_t BgL_patterns3501z00_7350;

							obj_t BgL_labels3502z00_7351;

							BgL_loc3499z00_7348 = BgL_loc3499z00_6369;
							BgL_type3500z00_7349 = BgL_type3500z00_7345;
							BgL_patterns3501z00_7350 = BgL_patterns3501z00_6371;
							BgL_labels3502z00_7351 = BgL_labels3502z00_6372;
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_7343))->
									BgL_locz00) = ((obj_t) BgL_loc3499z00_7348), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_7343))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3500z00_7349), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_7343))->
									BgL_patternsz00) =
								((obj_t) BgL_patterns3501z00_7350), BUNSPEC);
							((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_7343))->
									BgL_labelsz00) = ((obj_t) BgL_labels3502z00_7351), BUNSPEC);
							BgL_res6014z00_7352 = BgL_new3503z00_7343;
						}
					}
					BgL_auxz00_9791 = BgL_res6014z00_7352;
				}
				return (obj_t) (BgL_auxz00_9791);
			}
		}
	}



/* %allocate-rtl_switch */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt
		BGl_z52allocatezd2rtl_switchz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_switchz00_bglt BgL_new3509z00_7353;

				BgL_new3509z00_7353 =
					((BgL_rtl_switchz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_switchz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3509z00_7353),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_switchz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 29 */
					BgL_objectz00_bglt BgL_auxz00_9803;

					BgL_auxz00_9803 = (BgL_objectz00_bglt) (BgL_new3509z00_7353);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9803, BFALSE);
				}
				return BgL_new3509z00_7353;
			}
		}
	}



/* _%allocate-rtl_switch */
	obj_t BGl__z52allocatezd2rtl_switchz80zzsaw_defsz00(obj_t BgL_envz00_5982)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_switchz00_bglt BgL_auxz00_9806;

				{	/* SawMill/defs.scm 29 */
					BgL_rtl_switchz00_bglt BgL_res6015z00_7357;

					{	/* SawMill/defs.scm 29 */
						BgL_rtl_switchz00_bglt BgL_new3509z00_7355;

						BgL_new3509z00_7355 =
							((BgL_rtl_switchz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_switchz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3509z00_7355),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_switchz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_9811;

							BgL_auxz00_9811 = (BgL_objectz00_bglt) (BgL_new3509z00_7355);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9811, BFALSE);
						}
						BgL_res6015z00_7357 = BgL_new3509z00_7355;
					}
					BgL_auxz00_9806 = BgL_res6015z00_7357;
				}
				return (obj_t) (BgL_auxz00_9806);
			}
		}
	}



/* rtl_switch-nil */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt BGl_rtl_switchzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			if ((BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 29 */
					{	/* SawMill/defs.scm 29 */
						BgL_rtl_switchz00_bglt BgL_res5769z00_4610;

						{	/* SawMill/defs.scm 29 */
							BgL_rtl_switchz00_bglt BgL_new3509z00_4606;

							BgL_new3509z00_4606 =
								((BgL_rtl_switchz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_switchz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3509z00_4606),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_switchz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 29 */
								BgL_objectz00_bglt BgL_auxz00_9821;

								BgL_auxz00_9821 = (BgL_objectz00_bglt) (BgL_new3509z00_4606);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9821, BFALSE);
							}
							BgL_res5769z00_4610 = BgL_new3509z00_4606;
						}
						BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5769z00_4610);
					}
					{	/* SawMill/defs.scm 29 */
						BgL_typez00_bglt BgL_arg5179z00_1998;

						BgL_arg5179z00_1998 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 29 */
							BgL_rtl_switchz00_bglt BgL_res5770z00_4620;

							{	/* SawMill/defs.scm 29 */
								BgL_rtl_switchz00_bglt BgL_new3503z00_4611;

								BgL_new3503z00_4611 =
									(BgL_rtl_switchz00_bglt)
									(BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 29 */
									obj_t BgL_loc3499z00_4616;

									BgL_typez00_bglt BgL_type3500z00_4617;

									obj_t BgL_patterns3501z00_4618;

									obj_t BgL_labels3502z00_4619;

									BgL_loc3499z00_4616 = BUNSPEC;
									BgL_type3500z00_4617 = BgL_arg5179z00_1998;
									BgL_patterns3501z00_4618 = BUNSPEC;
									BgL_labels3502z00_4619 = BUNSPEC;
									((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4611))->
											BgL_locz00) = ((obj_t) BgL_loc3499z00_4616), BUNSPEC);
									((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4611))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3500z00_4617), BUNSPEC);
									((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4611))->
											BgL_patternsz00) =
										((obj_t) BgL_patterns3501z00_4618), BUNSPEC);
									((((BgL_rtl_switchz00_bglt) CREF(BgL_new3503z00_4611))->
											BgL_labelsz00) =
										((obj_t) BgL_labels3502z00_4619), BUNSPEC);
									BgL_res5770z00_4620 = BgL_new3503z00_4611;
							}}
							(obj_t) (BgL_res5770z00_4620);
				}}}
			else
				{	/* SawMill/defs.scm 29 */
					BFALSE;
				}
			return
				(BgL_rtl_switchz00_bglt)
				(BGl_z52thezd2rtl_switchzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_switch-nil */
	obj_t BGl__rtl_switchzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5983)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			return (obj_t) (BGl_rtl_switchzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_select? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_selectzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3480z00_531)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3480z00_531,
				BGl_rtl_selectz00zzsaw_defsz00);
		}
	}



/* _rtl_select? */
	obj_t BGl__rtl_selectzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5980,
		obj_t BgL_obj3480z00_5981)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3480z00_5981,
					BGl_rtl_selectz00zzsaw_defsz00));
		}
	}



/* make-rtl_select */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt
		BGl_makezd2rtl_selectzd2zzsaw_defsz00(obj_t BgL_loc3452z00_535,
		BgL_typez00_bglt BgL_type3453z00_536, obj_t BgL_patterns3454z00_537)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_selectz00_bglt BgL_new3455z00_4621;

				{	/* SawMill/defs.scm 28 */
					BgL_rtl_selectz00_bglt BgL_res5771z00_4626;

					{	/* SawMill/defs.scm 28 */
						BgL_rtl_selectz00_bglt BgL_new3465z00_4622;

						BgL_new3465z00_4622 =
							((BgL_rtl_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3465z00_4622),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_selectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_9842;

							BgL_auxz00_9842 = (BgL_objectz00_bglt) (BgL_new3465z00_4622);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9842, BFALSE);
						}
						BgL_res5771z00_4626 = BgL_new3465z00_4622;
					}
					BgL_new3455z00_4621 = BgL_res5771z00_4626;
				}
				{	/* SawMill/defs.scm 28 */
					BgL_rtl_selectz00_bglt BgL_res5772z00_4634;

					{	/* SawMill/defs.scm 28 */
						BgL_rtl_selectz00_bglt BgL_new3460z00_4627;

						BgL_new3460z00_4627 = BgL_new3455z00_4621;
						{	/* SawMill/defs.scm 28 */
							obj_t BgL_loc3457z00_4631;

							BgL_typez00_bglt BgL_type3458z00_4632;

							obj_t BgL_patterns3459z00_4633;

							BgL_loc3457z00_4631 = BgL_loc3452z00_535;
							BgL_type3458z00_4632 = BgL_type3453z00_536;
							BgL_patterns3459z00_4633 = BgL_patterns3454z00_537;
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4627))->
									BgL_locz00) = ((obj_t) BgL_loc3457z00_4631), BUNSPEC);
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4627))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3458z00_4632), BUNSPEC);
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4627))->
									BgL_patternsz00) =
								((obj_t) BgL_patterns3459z00_4633), BUNSPEC);
							BgL_res5772z00_4634 = BgL_new3460z00_4627;
					}} BgL_res5772z00_4634;
				}
				return BgL_new3455z00_4621;
			}
		}
	}



/* _make-rtl_select */
	obj_t BGl__makezd2rtl_selectzd2zzsaw_defsz00(obj_t BgL_envz00_6373,
		obj_t BgL_loc3452z00_6374, obj_t BgL_type3453z00_6375,
		obj_t BgL_patterns3454z00_6376)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			return
				(obj_t) (BGl_makezd2rtl_selectzd2zzsaw_defsz00(BgL_loc3452z00_6374,
					(BgL_typez00_bglt) (BgL_type3453z00_6375), BgL_patterns3454z00_6376));
		}
	}



/* fill-rtl_select! */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt
		BGl_fillzd2rtl_selectz12zc0zzsaw_defsz00(BgL_rtl_selectz00_bglt
		BgL_new3460z00_538, obj_t BgL_loc3457z00_539,
		BgL_typez00_bglt BgL_type3458z00_540, obj_t BgL_patterns3459z00_541)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				obj_t BgL_loc3457z00_7359;

				BgL_typez00_bglt BgL_type3458z00_7360;

				obj_t BgL_patterns3459z00_7361;

				BgL_loc3457z00_7359 = BgL_loc3457z00_539;
				BgL_type3458z00_7360 = BgL_type3458z00_540;
				BgL_patterns3459z00_7361 = BgL_patterns3459z00_541;
				((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_538))->BgL_locz00) =
					((obj_t) BgL_loc3457z00_7359), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_538))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3458z00_7360), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_538))->
						BgL_patternsz00) = ((obj_t) BgL_patterns3459z00_7361), BUNSPEC);
				return BgL_new3460z00_538;
			}
		}
	}



/* _fill-rtl_select! */
	obj_t BGl__fillzd2rtl_selectz12zc0zzsaw_defsz00(obj_t BgL_envz00_6377,
		obj_t BgL_new3460z00_6378, obj_t BgL_loc3457z00_6379,
		obj_t BgL_type3458z00_6380, obj_t BgL_patterns3459z00_6381)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_selectz00_bglt BgL_auxz00_9854;

				{	/* SawMill/defs.scm 28 */
					BgL_rtl_selectz00_bglt BgL_res6016z00_7369;

					{	/* SawMill/defs.scm 28 */
						BgL_rtl_selectz00_bglt BgL_new3460z00_7362;

						BgL_typez00_bglt BgL_type3458z00_7364;

						BgL_new3460z00_7362 =
							(BgL_rtl_selectz00_bglt) (BgL_new3460z00_6378);
						BgL_type3458z00_7364 = (BgL_typez00_bglt) (BgL_type3458z00_6380);
						{	/* SawMill/defs.scm 28 */
							obj_t BgL_loc3457z00_7366;

							BgL_typez00_bglt BgL_type3458z00_7367;

							obj_t BgL_patterns3459z00_7368;

							BgL_loc3457z00_7366 = BgL_loc3457z00_6379;
							BgL_type3458z00_7367 = BgL_type3458z00_7364;
							BgL_patterns3459z00_7368 = BgL_patterns3459z00_6381;
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_7362))->
									BgL_locz00) = ((obj_t) BgL_loc3457z00_7366), BUNSPEC);
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_7362))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3458z00_7367), BUNSPEC);
							((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_7362))->
									BgL_patternsz00) =
								((obj_t) BgL_patterns3459z00_7368), BUNSPEC);
							BgL_res6016z00_7369 = BgL_new3460z00_7362;
						}
					}
					BgL_auxz00_9854 = BgL_res6016z00_7369;
				}
				return (obj_t) (BgL_auxz00_9854);
			}
		}
	}



/* %allocate-rtl_select */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt
		BGl_z52allocatezd2rtl_selectz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_selectz00_bglt BgL_new3465z00_7370;

				BgL_new3465z00_7370 =
					((BgL_rtl_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_selectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3465z00_7370),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_selectz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 28 */
					BgL_objectz00_bglt BgL_auxz00_9865;

					BgL_auxz00_9865 = (BgL_objectz00_bglt) (BgL_new3465z00_7370);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9865, BFALSE);
				}
				return BgL_new3465z00_7370;
			}
		}
	}



/* _%allocate-rtl_select */
	obj_t BGl__z52allocatezd2rtl_selectz80zzsaw_defsz00(obj_t BgL_envz00_5978)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_selectz00_bglt BgL_auxz00_9868;

				{	/* SawMill/defs.scm 28 */
					BgL_rtl_selectz00_bglt BgL_res6017z00_7374;

					{	/* SawMill/defs.scm 28 */
						BgL_rtl_selectz00_bglt BgL_new3465z00_7372;

						BgL_new3465z00_7372 =
							((BgL_rtl_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3465z00_7372),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_selectz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_9873;

							BgL_auxz00_9873 = (BgL_objectz00_bglt) (BgL_new3465z00_7372);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9873, BFALSE);
						}
						BgL_res6017z00_7374 = BgL_new3465z00_7372;
					}
					BgL_auxz00_9868 = BgL_res6017z00_7374;
				}
				return (obj_t) (BgL_auxz00_9868);
			}
		}
	}



/* rtl_select-nil */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt BGl_rtl_selectzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			if ((BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 28 */
					{	/* SawMill/defs.scm 28 */
						BgL_rtl_selectz00_bglt BgL_res5773z00_4646;

						{	/* SawMill/defs.scm 28 */
							BgL_rtl_selectz00_bglt BgL_new3465z00_4642;

							BgL_new3465z00_4642 =
								((BgL_rtl_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_selectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3465z00_4642),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_selectz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 28 */
								BgL_objectz00_bglt BgL_auxz00_9883;

								BgL_auxz00_9883 = (BgL_objectz00_bglt) (BgL_new3465z00_4642);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9883, BFALSE);
							}
							BgL_res5773z00_4646 = BgL_new3465z00_4642;
						}
						BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5773z00_4646);
					}
					{	/* SawMill/defs.scm 28 */
						BgL_typez00_bglt BgL_arg5182z00_2006;

						BgL_arg5182z00_2006 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 28 */
							BgL_rtl_selectz00_bglt BgL_res5774z00_4654;

							{	/* SawMill/defs.scm 28 */
								BgL_rtl_selectz00_bglt BgL_new3460z00_4647;

								BgL_new3460z00_4647 =
									(BgL_rtl_selectz00_bglt)
									(BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 28 */
									obj_t BgL_loc3457z00_4651;

									BgL_typez00_bglt BgL_type3458z00_4652;

									obj_t BgL_patterns3459z00_4653;

									BgL_loc3457z00_4651 = BUNSPEC;
									BgL_type3458z00_4652 = BgL_arg5182z00_2006;
									BgL_patterns3459z00_4653 = BUNSPEC;
									((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4647))->
											BgL_locz00) = ((obj_t) BgL_loc3457z00_4651), BUNSPEC);
									((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4647))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3458z00_4652), BUNSPEC);
									((((BgL_rtl_selectz00_bglt) CREF(BgL_new3460z00_4647))->
											BgL_patternsz00) =
										((obj_t) BgL_patterns3459z00_4653), BUNSPEC);
									BgL_res5774z00_4654 = BgL_new3460z00_4647;
							}}
							(obj_t) (BgL_res5774z00_4654);
				}}}
			else
				{	/* SawMill/defs.scm 28 */
					BFALSE;
				}
			return
				(BgL_rtl_selectz00_bglt)
				(BGl_z52thezd2rtl_selectzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_select-nil */
	obj_t BGl__rtl_selectzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5979)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			return (obj_t) (BGl_rtl_selectzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_if? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3440z00_548)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3440z00_548,
				BGl_rtl_ifz00zzsaw_defsz00);
		}
	}



/* _rtl_if? */
	obj_t BGl__rtl_ifzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5976,
		obj_t BgL_obj3440z00_5977)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3440z00_5977,
					BGl_rtl_ifz00zzsaw_defsz00));
		}
	}



/* make-rtl_if */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt BGl_makezd2rtl_ifzd2zzsaw_defsz00(obj_t
		BgL_loc3426z00_552)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_ifz00_bglt BgL_new3427z00_4655;

				{	/* SawMill/defs.scm 27 */
					BgL_rtl_ifz00_bglt BgL_res5775z00_4660;

					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_new3433z00_4656;

						BgL_new3433z00_4656 =
							((BgL_rtl_ifz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3433z00_4656),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_9903;

							BgL_auxz00_9903 = (BgL_objectz00_bglt) (BgL_new3433z00_4656);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9903, BFALSE);
						}
						BgL_res5775z00_4660 = BgL_new3433z00_4656;
					}
					BgL_new3427z00_4655 = BgL_res5775z00_4660;
				}
				{	/* SawMill/defs.scm 27 */
					BgL_rtl_ifz00_bglt BgL_res5776z00_4664;

					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_new3430z00_4661;

						BgL_new3430z00_4661 = BgL_new3427z00_4655;
						{	/* SawMill/defs.scm 27 */
							obj_t BgL_loc3429z00_4663;

							BgL_loc3429z00_4663 = BgL_loc3426z00_552;
							((((BgL_rtl_ifz00_bglt) CREF(BgL_new3430z00_4661))->BgL_locz00) =
								((obj_t) BgL_loc3429z00_4663), BUNSPEC);
							BgL_res5776z00_4664 = BgL_new3430z00_4661;
					}} BgL_res5776z00_4664;
				}
				return BgL_new3427z00_4655;
			}
		}
	}



/* _make-rtl_if */
	obj_t BGl__makezd2rtl_ifzd2zzsaw_defsz00(obj_t BgL_envz00_6382,
		obj_t BgL_loc3426z00_6383)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			return (obj_t) (BGl_makezd2rtl_ifzd2zzsaw_defsz00(BgL_loc3426z00_6383));
		}
	}



/* fill-rtl_if! */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt
		BGl_fillzd2rtl_ifz12zc0zzsaw_defsz00(BgL_rtl_ifz00_bglt BgL_new3430z00_553,
		obj_t BgL_loc3429z00_554)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				obj_t BgL_loc3429z00_7376;

				BgL_loc3429z00_7376 = BgL_loc3429z00_554;
				((((BgL_rtl_ifz00_bglt) CREF(BgL_new3430z00_553))->BgL_locz00) =
					((obj_t) BgL_loc3429z00_7376), BUNSPEC);
				return BgL_new3430z00_553;
			}
		}
	}



/* _fill-rtl_if! */
	obj_t BGl__fillzd2rtl_ifz12zc0zzsaw_defsz00(obj_t BgL_envz00_6384,
		obj_t BgL_new3430z00_6385, obj_t BgL_loc3429z00_6386)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_ifz00_bglt BgL_auxz00_9910;

				{	/* SawMill/defs.scm 27 */
					BgL_rtl_ifz00_bglt BgL_res6018z00_7380;

					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_new3430z00_7377;

						BgL_new3430z00_7377 = (BgL_rtl_ifz00_bglt) (BgL_new3430z00_6385);
						{	/* SawMill/defs.scm 27 */
							obj_t BgL_loc3429z00_7379;

							BgL_loc3429z00_7379 = BgL_loc3429z00_6386;
							((((BgL_rtl_ifz00_bglt) CREF(BgL_new3430z00_7377))->BgL_locz00) =
								((obj_t) BgL_loc3429z00_7379), BUNSPEC);
							BgL_res6018z00_7380 = BgL_new3430z00_7377;
						}
					}
					BgL_auxz00_9910 = BgL_res6018z00_7380;
				}
				return (obj_t) (BgL_auxz00_9910);
			}
		}
	}



/* %allocate-rtl_if */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt BGl_z52allocatezd2rtl_ifz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_ifz00_bglt BgL_new3433z00_7381;

				BgL_new3433z00_7381 =
					((BgL_rtl_ifz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_ifz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3433z00_7381),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 27 */
					BgL_objectz00_bglt BgL_auxz00_9918;

					BgL_auxz00_9918 = (BgL_objectz00_bglt) (BgL_new3433z00_7381);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9918, BFALSE);
				}
				return BgL_new3433z00_7381;
			}
		}
	}



/* _%allocate-rtl_if */
	obj_t BGl__z52allocatezd2rtl_ifz80zzsaw_defsz00(obj_t BgL_envz00_5974)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_ifz00_bglt BgL_auxz00_9921;

				{	/* SawMill/defs.scm 27 */
					BgL_rtl_ifz00_bglt BgL_res6019z00_7385;

					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_new3433z00_7383;

						BgL_new3433z00_7383 =
							((BgL_rtl_ifz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_ifz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3433z00_7383),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_9926;

							BgL_auxz00_9926 = (BgL_objectz00_bglt) (BgL_new3433z00_7383);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9926, BFALSE);
						}
						BgL_res6019z00_7385 = BgL_new3433z00_7383;
					}
					BgL_auxz00_9921 = BgL_res6019z00_7385;
				}
				return (obj_t) (BgL_auxz00_9921);
			}
		}
	}



/* rtl_if-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt BGl_rtl_ifzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			if ((BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 27 */
					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_res5777z00_4674;

						{	/* SawMill/defs.scm 27 */
							BgL_rtl_ifz00_bglt BgL_new3433z00_4670;

							BgL_new3433z00_4670 =
								((BgL_rtl_ifz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_ifz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3433z00_4670),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_ifz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 27 */
								BgL_objectz00_bglt BgL_auxz00_9936;

								BgL_auxz00_9936 = (BgL_objectz00_bglt) (BgL_new3433z00_4670);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9936, BFALSE);
							}
							BgL_res5777z00_4674 = BgL_new3433z00_4670;
						}
						BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5777z00_4674);
					}
					{	/* SawMill/defs.scm 27 */
						BgL_rtl_ifz00_bglt BgL_res5778z00_4678;

						{	/* SawMill/defs.scm 27 */
							BgL_rtl_ifz00_bglt BgL_new3430z00_4675;

							BgL_new3430z00_4675 =
								(BgL_rtl_ifz00_bglt)
								(BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 27 */
								obj_t BgL_loc3429z00_4677;

								BgL_loc3429z00_4677 = BUNSPEC;
								((((BgL_rtl_ifz00_bglt) CREF(BgL_new3430z00_4675))->
										BgL_locz00) = ((obj_t) BgL_loc3429z00_4677), BUNSPEC);
								BgL_res5778z00_4678 = BgL_new3430z00_4675;
						}}
						(obj_t) (BgL_res5778z00_4678);
				}}
			else
				{	/* SawMill/defs.scm 27 */
					BFALSE;
				}
			return (BgL_rtl_ifz00_bglt) (BGl_z52thezd2rtl_ifzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_if-nil */
	obj_t BGl__rtl_ifzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5975)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			return (obj_t) (BGl_rtl_ifzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_notseq? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_notseqzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3422z00_555)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3422z00_555,
				BGl_rtl_notseqz00zzsaw_defsz00);
		}
	}



/* _rtl_notseq? */
	obj_t BGl__rtl_notseqzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5972,
		obj_t BgL_obj3422z00_5973)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3422z00_5973,
					BGl_rtl_notseqz00zzsaw_defsz00));
		}
	}



/* make-rtl_notseq */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt
		BGl_makezd2rtl_notseqzd2zzsaw_defsz00(obj_t BgL_loc3408z00_559)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{	/* SawMill/defs.scm 26 */
				BgL_rtl_notseqz00_bglt BgL_new3409z00_4679;

				{	/* SawMill/defs.scm 26 */
					BgL_rtl_notseqz00_bglt BgL_res5779z00_4684;

					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_new3415z00_4680;

						BgL_new3415z00_4680 =
							((BgL_rtl_notseqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_notseqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3415z00_4680),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_notseqz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 26 */
							BgL_objectz00_bglt BgL_auxz00_9953;

							BgL_auxz00_9953 = (BgL_objectz00_bglt) (BgL_new3415z00_4680);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9953, BFALSE);
						}
						BgL_res5779z00_4684 = BgL_new3415z00_4680;
					}
					BgL_new3409z00_4679 = BgL_res5779z00_4684;
				}
				{	/* SawMill/defs.scm 26 */
					BgL_rtl_notseqz00_bglt BgL_res5780z00_4688;

					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_new3412z00_4685;

						BgL_new3412z00_4685 = BgL_new3409z00_4679;
						{	/* SawMill/defs.scm 26 */
							obj_t BgL_loc3411z00_4687;

							BgL_loc3411z00_4687 = BgL_loc3408z00_559;
							((((BgL_rtl_notseqz00_bglt) CREF(BgL_new3412z00_4685))->
									BgL_locz00) = ((obj_t) BgL_loc3411z00_4687), BUNSPEC);
							BgL_res5780z00_4688 = BgL_new3412z00_4685;
					}} BgL_res5780z00_4688;
				}
				return BgL_new3409z00_4679;
			}
		}
	}



/* _make-rtl_notseq */
	obj_t BGl__makezd2rtl_notseqzd2zzsaw_defsz00(obj_t BgL_envz00_6387,
		obj_t BgL_loc3408z00_6388)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			return
				(obj_t) (BGl_makezd2rtl_notseqzd2zzsaw_defsz00(BgL_loc3408z00_6388));
		}
	}



/* fill-rtl_notseq! */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt
		BGl_fillzd2rtl_notseqz12zc0zzsaw_defsz00(BgL_rtl_notseqz00_bglt
		BgL_new3412z00_560, obj_t BgL_loc3411z00_561)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{	/* SawMill/defs.scm 26 */
				obj_t BgL_loc3411z00_7387;

				BgL_loc3411z00_7387 = BgL_loc3411z00_561;
				((((BgL_rtl_notseqz00_bglt) CREF(BgL_new3412z00_560))->BgL_locz00) =
					((obj_t) BgL_loc3411z00_7387), BUNSPEC);
				return BgL_new3412z00_560;
			}
		}
	}



/* _fill-rtl_notseq! */
	obj_t BGl__fillzd2rtl_notseqz12zc0zzsaw_defsz00(obj_t BgL_envz00_6389,
		obj_t BgL_new3412z00_6390, obj_t BgL_loc3411z00_6391)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{	/* SawMill/defs.scm 26 */
				BgL_rtl_notseqz00_bglt BgL_auxz00_9960;

				{	/* SawMill/defs.scm 26 */
					BgL_rtl_notseqz00_bglt BgL_res6020z00_7391;

					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_new3412z00_7388;

						BgL_new3412z00_7388 =
							(BgL_rtl_notseqz00_bglt) (BgL_new3412z00_6390);
						{	/* SawMill/defs.scm 26 */
							obj_t BgL_loc3411z00_7390;

							BgL_loc3411z00_7390 = BgL_loc3411z00_6391;
							((((BgL_rtl_notseqz00_bglt) CREF(BgL_new3412z00_7388))->
									BgL_locz00) = ((obj_t) BgL_loc3411z00_7390), BUNSPEC);
							BgL_res6020z00_7391 = BgL_new3412z00_7388;
						}
					}
					BgL_auxz00_9960 = BgL_res6020z00_7391;
				}
				return (obj_t) (BgL_auxz00_9960);
			}
		}
	}



/* %allocate-rtl_notseq */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt
		BGl_z52allocatezd2rtl_notseqz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{	/* SawMill/defs.scm 26 */
				BgL_rtl_notseqz00_bglt BgL_new3415z00_7392;

				BgL_new3415z00_7392 =
					((BgL_rtl_notseqz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_notseqz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3415z00_7392),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_notseqz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 26 */
					BgL_objectz00_bglt BgL_auxz00_9968;

					BgL_auxz00_9968 = (BgL_objectz00_bglt) (BgL_new3415z00_7392);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9968, BFALSE);
				}
				return BgL_new3415z00_7392;
			}
		}
	}



/* _%allocate-rtl_notseq */
	obj_t BGl__z52allocatezd2rtl_notseqz80zzsaw_defsz00(obj_t BgL_envz00_5970)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{	/* SawMill/defs.scm 26 */
				BgL_rtl_notseqz00_bglt BgL_auxz00_9971;

				{	/* SawMill/defs.scm 26 */
					BgL_rtl_notseqz00_bglt BgL_res6021z00_7396;

					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_new3415z00_7394;

						BgL_new3415z00_7394 =
							((BgL_rtl_notseqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_notseqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3415z00_7394),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_notseqz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 26 */
							BgL_objectz00_bglt BgL_auxz00_9976;

							BgL_auxz00_9976 = (BgL_objectz00_bglt) (BgL_new3415z00_7394);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9976, BFALSE);
						}
						BgL_res6021z00_7396 = BgL_new3415z00_7394;
					}
					BgL_auxz00_9971 = BgL_res6021z00_7396;
				}
				return (obj_t) (BgL_auxz00_9971);
			}
		}
	}



/* rtl_notseq-nil */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt BGl_rtl_notseqzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			if ((BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 26 */
					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_res5781z00_4698;

						{	/* SawMill/defs.scm 26 */
							BgL_rtl_notseqz00_bglt BgL_new3415z00_4694;

							BgL_new3415z00_4694 =
								((BgL_rtl_notseqz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_notseqz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3415z00_4694),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_notseqz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 26 */
								BgL_objectz00_bglt BgL_auxz00_9986;

								BgL_auxz00_9986 = (BgL_objectz00_bglt) (BgL_new3415z00_4694);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9986, BFALSE);
							}
							BgL_res5781z00_4698 = BgL_new3415z00_4694;
						}
						BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5781z00_4698);
					}
					{	/* SawMill/defs.scm 26 */
						BgL_rtl_notseqz00_bglt BgL_res5782z00_4702;

						{	/* SawMill/defs.scm 26 */
							BgL_rtl_notseqz00_bglt BgL_new3412z00_4699;

							BgL_new3412z00_4699 =
								(BgL_rtl_notseqz00_bglt)
								(BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 26 */
								obj_t BgL_loc3411z00_4701;

								BgL_loc3411z00_4701 = BUNSPEC;
								((((BgL_rtl_notseqz00_bglt) CREF(BgL_new3412z00_4699))->
										BgL_locz00) = ((obj_t) BgL_loc3411z00_4701), BUNSPEC);
								BgL_res5782z00_4702 = BgL_new3412z00_4699;
						}}
						(obj_t) (BgL_res5782z00_4702);
				}}
			else
				{	/* SawMill/defs.scm 26 */
					BFALSE;
				}
			return
				(BgL_rtl_notseqz00_bglt)
				(BGl_z52thezd2rtl_notseqzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_notseq-nil */
	obj_t BGl__rtl_notseqzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5971)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			return (obj_t) (BGl_rtl_notseqzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_fail? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_failzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3404z00_562)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3404z00_562,
				BGl_rtl_failz00zzsaw_defsz00);
		}
	}



/* _rtl_fail? */
	obj_t BGl__rtl_failzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5968,
		obj_t BgL_obj3404z00_5969)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3404z00_5969,
					BGl_rtl_failz00zzsaw_defsz00));
		}
	}



/* make-rtl_fail */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt
		BGl_makezd2rtl_failzd2zzsaw_defsz00(obj_t BgL_loc3390z00_566)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_failz00_bglt BgL_new3391z00_4703;

				{	/* SawMill/defs.scm 24 */
					BgL_rtl_failz00_bglt BgL_res5783z00_4708;

					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_new3397z00_4704;

						BgL_new3397z00_4704 =
							((BgL_rtl_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_failz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3397z00_4704),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_failz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 24 */
							BgL_objectz00_bglt BgL_auxz00_10003;

							BgL_auxz00_10003 = (BgL_objectz00_bglt) (BgL_new3397z00_4704);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10003, BFALSE);
						}
						BgL_res5783z00_4708 = BgL_new3397z00_4704;
					}
					BgL_new3391z00_4703 = BgL_res5783z00_4708;
				}
				{	/* SawMill/defs.scm 24 */
					BgL_rtl_failz00_bglt BgL_res5784z00_4712;

					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_new3394z00_4709;

						BgL_new3394z00_4709 = BgL_new3391z00_4703;
						{	/* SawMill/defs.scm 24 */
							obj_t BgL_loc3393z00_4711;

							BgL_loc3393z00_4711 = BgL_loc3390z00_566;
							((((BgL_rtl_failz00_bglt) CREF(BgL_new3394z00_4709))->
									BgL_locz00) = ((obj_t) BgL_loc3393z00_4711), BUNSPEC);
							BgL_res5784z00_4712 = BgL_new3394z00_4709;
					}} BgL_res5784z00_4712;
				}
				return BgL_new3391z00_4703;
			}
		}
	}



/* _make-rtl_fail */
	obj_t BGl__makezd2rtl_failzd2zzsaw_defsz00(obj_t BgL_envz00_6392,
		obj_t BgL_loc3390z00_6393)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			return (obj_t) (BGl_makezd2rtl_failzd2zzsaw_defsz00(BgL_loc3390z00_6393));
		}
	}



/* fill-rtl_fail! */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt
		BGl_fillzd2rtl_failz12zc0zzsaw_defsz00(BgL_rtl_failz00_bglt
		BgL_new3394z00_567, obj_t BgL_loc3393z00_568)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				obj_t BgL_loc3393z00_7398;

				BgL_loc3393z00_7398 = BgL_loc3393z00_568;
				((((BgL_rtl_failz00_bglt) CREF(BgL_new3394z00_567))->BgL_locz00) =
					((obj_t) BgL_loc3393z00_7398), BUNSPEC);
				return BgL_new3394z00_567;
			}
		}
	}



/* _fill-rtl_fail! */
	obj_t BGl__fillzd2rtl_failz12zc0zzsaw_defsz00(obj_t BgL_envz00_6394,
		obj_t BgL_new3394z00_6395, obj_t BgL_loc3393z00_6396)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_failz00_bglt BgL_auxz00_10010;

				{	/* SawMill/defs.scm 24 */
					BgL_rtl_failz00_bglt BgL_res6022z00_7402;

					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_new3394z00_7399;

						BgL_new3394z00_7399 = (BgL_rtl_failz00_bglt) (BgL_new3394z00_6395);
						{	/* SawMill/defs.scm 24 */
							obj_t BgL_loc3393z00_7401;

							BgL_loc3393z00_7401 = BgL_loc3393z00_6396;
							((((BgL_rtl_failz00_bglt) CREF(BgL_new3394z00_7399))->
									BgL_locz00) = ((obj_t) BgL_loc3393z00_7401), BUNSPEC);
							BgL_res6022z00_7402 = BgL_new3394z00_7399;
						}
					}
					BgL_auxz00_10010 = BgL_res6022z00_7402;
				}
				return (obj_t) (BgL_auxz00_10010);
			}
		}
	}



/* %allocate-rtl_fail */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt
		BGl_z52allocatezd2rtl_failz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_failz00_bglt BgL_new3397z00_7403;

				BgL_new3397z00_7403 =
					((BgL_rtl_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_failz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3397z00_7403),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_failz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 24 */
					BgL_objectz00_bglt BgL_auxz00_10018;

					BgL_auxz00_10018 = (BgL_objectz00_bglt) (BgL_new3397z00_7403);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10018, BFALSE);
				}
				return BgL_new3397z00_7403;
			}
		}
	}



/* _%allocate-rtl_fail */
	obj_t BGl__z52allocatezd2rtl_failz80zzsaw_defsz00(obj_t BgL_envz00_5966)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_failz00_bglt BgL_auxz00_10021;

				{	/* SawMill/defs.scm 24 */
					BgL_rtl_failz00_bglt BgL_res6023z00_7407;

					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_new3397z00_7405;

						BgL_new3397z00_7405 =
							((BgL_rtl_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_failz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3397z00_7405),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_failz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 24 */
							BgL_objectz00_bglt BgL_auxz00_10026;

							BgL_auxz00_10026 = (BgL_objectz00_bglt) (BgL_new3397z00_7405);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10026, BFALSE);
						}
						BgL_res6023z00_7407 = BgL_new3397z00_7405;
					}
					BgL_auxz00_10021 = BgL_res6023z00_7407;
				}
				return (obj_t) (BgL_auxz00_10021);
			}
		}
	}



/* rtl_fail-nil */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt BGl_rtl_failzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			if ((BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 24 */
					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_res5785z00_4722;

						{	/* SawMill/defs.scm 24 */
							BgL_rtl_failz00_bglt BgL_new3397z00_4718;

							BgL_new3397z00_4718 =
								((BgL_rtl_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_failz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3397z00_4718),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_failz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 24 */
								BgL_objectz00_bglt BgL_auxz00_10036;

								BgL_auxz00_10036 = (BgL_objectz00_bglt) (BgL_new3397z00_4718);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10036, BFALSE);
							}
							BgL_res5785z00_4722 = BgL_new3397z00_4718;
						}
						BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5785z00_4722);
					}
					{	/* SawMill/defs.scm 24 */
						BgL_rtl_failz00_bglt BgL_res5786z00_4726;

						{	/* SawMill/defs.scm 24 */
							BgL_rtl_failz00_bglt BgL_new3394z00_4723;

							BgL_new3394z00_4723 =
								(BgL_rtl_failz00_bglt)
								(BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 24 */
								obj_t BgL_loc3393z00_4725;

								BgL_loc3393z00_4725 = BUNSPEC;
								((((BgL_rtl_failz00_bglt) CREF(BgL_new3394z00_4723))->
										BgL_locz00) = ((obj_t) BgL_loc3393z00_4725), BUNSPEC);
								BgL_res5786z00_4726 = BgL_new3394z00_4723;
						}}
						(obj_t) (BgL_res5786z00_4726);
				}}
			else
				{	/* SawMill/defs.scm 24 */
					BFALSE;
				}
			return
				(BgL_rtl_failz00_bglt) (BGl_z52thezd2rtl_failzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_fail-nil */
	obj_t BGl__rtl_failzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5967)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			return (obj_t) (BGl_rtl_failzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_jumpexit? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3386z00_569)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3386z00_569,
				BGl_rtl_jumpexitz00zzsaw_defsz00);
		}
	}



/* _rtl_jumpexit? */
	obj_t BGl__rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5964,
		obj_t BgL_obj3386z00_5965)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3386z00_5965,
					BGl_rtl_jumpexitz00zzsaw_defsz00));
		}
	}



/* make-rtl_jumpexit */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t BgL_loc3372z00_573)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_jumpexitz00_bglt BgL_new3373z00_4727;

				{	/* SawMill/defs.scm 23 */
					BgL_rtl_jumpexitz00_bglt BgL_res5787z00_4732;

					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_new3379z00_4728;

						BgL_new3379z00_4728 =
							((BgL_rtl_jumpexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_jumpexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3379z00_4728),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_jumpexitz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_10053;

							BgL_auxz00_10053 = (BgL_objectz00_bglt) (BgL_new3379z00_4728);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10053, BFALSE);
						}
						BgL_res5787z00_4732 = BgL_new3379z00_4728;
					}
					BgL_new3373z00_4727 = BgL_res5787z00_4732;
				}
				{	/* SawMill/defs.scm 23 */
					BgL_rtl_jumpexitz00_bglt BgL_res5788z00_4736;

					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_new3376z00_4733;

						BgL_new3376z00_4733 = BgL_new3373z00_4727;
						{	/* SawMill/defs.scm 23 */
							obj_t BgL_loc3375z00_4735;

							BgL_loc3375z00_4735 = BgL_loc3372z00_573;
							((((BgL_rtl_jumpexitz00_bglt) CREF(BgL_new3376z00_4733))->
									BgL_locz00) = ((obj_t) BgL_loc3375z00_4735), BUNSPEC);
							BgL_res5788z00_4736 = BgL_new3376z00_4733;
					}} BgL_res5788z00_4736;
				}
				return BgL_new3373z00_4727;
			}
		}
	}



/* _make-rtl_jumpexit */
	obj_t BGl__makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t BgL_envz00_6397,
		obj_t BgL_loc3372z00_6398)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			return
				(obj_t) (BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(BgL_loc3372z00_6398));
		}
	}



/* fill-rtl_jumpexit! */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_fillzd2rtl_jumpexitz12zc0zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt
		BgL_new3376z00_574, obj_t BgL_loc3375z00_575)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				obj_t BgL_loc3375z00_7409;

				BgL_loc3375z00_7409 = BgL_loc3375z00_575;
				((((BgL_rtl_jumpexitz00_bglt) CREF(BgL_new3376z00_574))->BgL_locz00) =
					((obj_t) BgL_loc3375z00_7409), BUNSPEC);
				return BgL_new3376z00_574;
			}
		}
	}



/* _fill-rtl_jumpexit! */
	obj_t BGl__fillzd2rtl_jumpexitz12zc0zzsaw_defsz00(obj_t BgL_envz00_6399,
		obj_t BgL_new3376z00_6400, obj_t BgL_loc3375z00_6401)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_jumpexitz00_bglt BgL_auxz00_10060;

				{	/* SawMill/defs.scm 23 */
					BgL_rtl_jumpexitz00_bglt BgL_res6024z00_7413;

					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_new3376z00_7410;

						BgL_new3376z00_7410 =
							(BgL_rtl_jumpexitz00_bglt) (BgL_new3376z00_6400);
						{	/* SawMill/defs.scm 23 */
							obj_t BgL_loc3375z00_7412;

							BgL_loc3375z00_7412 = BgL_loc3375z00_6401;
							((((BgL_rtl_jumpexitz00_bglt) CREF(BgL_new3376z00_7410))->
									BgL_locz00) = ((obj_t) BgL_loc3375z00_7412), BUNSPEC);
							BgL_res6024z00_7413 = BgL_new3376z00_7410;
						}
					}
					BgL_auxz00_10060 = BgL_res6024z00_7413;
				}
				return (obj_t) (BgL_auxz00_10060);
			}
		}
	}



/* %allocate-rtl_jumpexit */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_z52allocatezd2rtl_jumpexitz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_jumpexitz00_bglt BgL_new3379z00_7414;

				BgL_new3379z00_7414 =
					((BgL_rtl_jumpexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_jumpexitz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3379z00_7414),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_jumpexitz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 23 */
					BgL_objectz00_bglt BgL_auxz00_10068;

					BgL_auxz00_10068 = (BgL_objectz00_bglt) (BgL_new3379z00_7414);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10068, BFALSE);
				}
				return BgL_new3379z00_7414;
			}
		}
	}



/* _%allocate-rtl_jumpexit */
	obj_t BGl__z52allocatezd2rtl_jumpexitz80zzsaw_defsz00(obj_t BgL_envz00_5962)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_jumpexitz00_bglt BgL_auxz00_10071;

				{	/* SawMill/defs.scm 23 */
					BgL_rtl_jumpexitz00_bglt BgL_res6025z00_7418;

					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_new3379z00_7416;

						BgL_new3379z00_7416 =
							((BgL_rtl_jumpexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_jumpexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3379z00_7416),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_jumpexitz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_10076;

							BgL_auxz00_10076 = (BgL_objectz00_bglt) (BgL_new3379z00_7416);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10076, BFALSE);
						}
						BgL_res6025z00_7418 = BgL_new3379z00_7416;
					}
					BgL_auxz00_10071 = BgL_res6025z00_7418;
				}
				return (obj_t) (BgL_auxz00_10071);
			}
		}
	}



/* rtl_jumpexit-nil */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			if ((BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 23 */
					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_res5789z00_4746;

						{	/* SawMill/defs.scm 23 */
							BgL_rtl_jumpexitz00_bglt BgL_new3379z00_4742;

							BgL_new3379z00_4742 =
								((BgL_rtl_jumpexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_jumpexitz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3379z00_4742),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_jumpexitz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 23 */
								BgL_objectz00_bglt BgL_auxz00_10086;

								BgL_auxz00_10086 = (BgL_objectz00_bglt) (BgL_new3379z00_4742);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10086, BFALSE);
							}
							BgL_res5789z00_4746 = BgL_new3379z00_4742;
						}
						BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5789z00_4746);
					}
					{	/* SawMill/defs.scm 23 */
						BgL_rtl_jumpexitz00_bglt BgL_res5790z00_4750;

						{	/* SawMill/defs.scm 23 */
							BgL_rtl_jumpexitz00_bglt BgL_new3376z00_4747;

							BgL_new3376z00_4747 =
								(BgL_rtl_jumpexitz00_bglt)
								(BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 23 */
								obj_t BgL_loc3375z00_4749;

								BgL_loc3375z00_4749 = BUNSPEC;
								((((BgL_rtl_jumpexitz00_bglt) CREF(BgL_new3376z00_4747))->
										BgL_locz00) = ((obj_t) BgL_loc3375z00_4749), BUNSPEC);
								BgL_res5790z00_4750 = BgL_new3376z00_4747;
						}}
						(obj_t) (BgL_res5790z00_4750);
				}}
			else
				{	/* SawMill/defs.scm 23 */
					BFALSE;
				}
			return
				(BgL_rtl_jumpexitz00_bglt)
				(BGl_z52thezd2rtl_jumpexitzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_jumpexit-nil */
	obj_t BGl__rtl_jumpexitzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5963)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			return (obj_t) (BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_return? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_returnzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3368z00_576)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3368z00_576,
				BGl_rtl_returnz00zzsaw_defsz00);
		}
	}



/* _rtl_return? */
	obj_t BGl__rtl_returnzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5960,
		obj_t BgL_obj3368z00_5961)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3368z00_5961,
					BGl_rtl_returnz00zzsaw_defsz00));
		}
	}



/* make-rtl_return */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt
		BGl_makezd2rtl_returnzd2zzsaw_defsz00(obj_t BgL_loc3347z00_580,
		BgL_typez00_bglt BgL_type3348z00_581)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_returnz00_bglt BgL_new3349z00_4751;

				{	/* SawMill/defs.scm 22 */
					BgL_rtl_returnz00_bglt BgL_res5791z00_4756;

					{	/* SawMill/defs.scm 22 */
						BgL_rtl_returnz00_bglt BgL_new3357z00_4752;

						BgL_new3357z00_4752 =
							((BgL_rtl_returnz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_returnz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3357z00_4752),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_returnz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 22 */
							BgL_objectz00_bglt BgL_auxz00_10103;

							BgL_auxz00_10103 = (BgL_objectz00_bglt) (BgL_new3357z00_4752);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10103, BFALSE);
						}
						BgL_res5791z00_4756 = BgL_new3357z00_4752;
					}
					BgL_new3349z00_4751 = BgL_res5791z00_4756;
				}
				{	/* SawMill/defs.scm 22 */
					BgL_rtl_returnz00_bglt BgL_res5792z00_4762;

					{	/* SawMill/defs.scm 22 */
						BgL_rtl_returnz00_bglt BgL_new3353z00_4757;

						BgL_new3353z00_4757 = BgL_new3349z00_4751;
						{	/* SawMill/defs.scm 22 */
							obj_t BgL_loc3351z00_4760;

							BgL_typez00_bglt BgL_type3352z00_4761;

							BgL_loc3351z00_4760 = BgL_loc3347z00_580;
							BgL_type3352z00_4761 = BgL_type3348z00_581;
							((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_4757))->
									BgL_locz00) = ((obj_t) BgL_loc3351z00_4760), BUNSPEC);
							((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_4757))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3352z00_4761), BUNSPEC);
							BgL_res5792z00_4762 = BgL_new3353z00_4757;
					}} BgL_res5792z00_4762;
				}
				return BgL_new3349z00_4751;
			}
		}
	}



/* _make-rtl_return */
	obj_t BGl__makezd2rtl_returnzd2zzsaw_defsz00(obj_t BgL_envz00_6402,
		obj_t BgL_loc3347z00_6403, obj_t BgL_type3348z00_6404)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			return
				(obj_t) (BGl_makezd2rtl_returnzd2zzsaw_defsz00(BgL_loc3347z00_6403,
					(BgL_typez00_bglt) (BgL_type3348z00_6404)));
		}
	}



/* fill-rtl_return! */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt
		BGl_fillzd2rtl_returnz12zc0zzsaw_defsz00(BgL_rtl_returnz00_bglt
		BgL_new3353z00_582, obj_t BgL_loc3351z00_583,
		BgL_typez00_bglt BgL_type3352z00_584)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				obj_t BgL_loc3351z00_7420;

				BgL_typez00_bglt BgL_type3352z00_7421;

				BgL_loc3351z00_7420 = BgL_loc3351z00_583;
				BgL_type3352z00_7421 = BgL_type3352z00_584;
				((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_582))->BgL_locz00) =
					((obj_t) BgL_loc3351z00_7420), BUNSPEC);
				((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_582))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3352z00_7421), BUNSPEC);
				return BgL_new3353z00_582;
			}
		}
	}



/* _fill-rtl_return! */
	obj_t BGl__fillzd2rtl_returnz12zc0zzsaw_defsz00(obj_t BgL_envz00_6405,
		obj_t BgL_new3353z00_6406, obj_t BgL_loc3351z00_6407,
		obj_t BgL_type3352z00_6408)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_returnz00_bglt BgL_auxz00_10113;

				{	/* SawMill/defs.scm 22 */
					BgL_rtl_returnz00_bglt BgL_res6026z00_7427;

					{	/* SawMill/defs.scm 22 */
						BgL_rtl_returnz00_bglt BgL_new3353z00_7422;

						BgL_typez00_bglt BgL_type3352z00_7424;

						BgL_new3353z00_7422 =
							(BgL_rtl_returnz00_bglt) (BgL_new3353z00_6406);
						BgL_type3352z00_7424 = (BgL_typez00_bglt) (BgL_type3352z00_6408);
						{	/* SawMill/defs.scm 22 */
							obj_t BgL_loc3351z00_7425;

							BgL_typez00_bglt BgL_type3352z00_7426;

							BgL_loc3351z00_7425 = BgL_loc3351z00_6407;
							BgL_type3352z00_7426 = BgL_type3352z00_7424;
							((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_7422))->
									BgL_locz00) = ((obj_t) BgL_loc3351z00_7425), BUNSPEC);
							((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_7422))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3352z00_7426), BUNSPEC);
							BgL_res6026z00_7427 = BgL_new3353z00_7422;
						}
					}
					BgL_auxz00_10113 = BgL_res6026z00_7427;
				}
				return (obj_t) (BgL_auxz00_10113);
			}
		}
	}



/* %allocate-rtl_return */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt
		BGl_z52allocatezd2rtl_returnz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_returnz00_bglt BgL_new3357z00_7428;

				BgL_new3357z00_7428 =
					((BgL_rtl_returnz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_returnz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3357z00_7428),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_returnz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 22 */
					BgL_objectz00_bglt BgL_auxz00_10123;

					BgL_auxz00_10123 = (BgL_objectz00_bglt) (BgL_new3357z00_7428);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10123, BFALSE);
				}
				return BgL_new3357z00_7428;
			}
		}
	}



/* _%allocate-rtl_return */
	obj_t BGl__z52allocatezd2rtl_returnz80zzsaw_defsz00(obj_t BgL_envz00_5958)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_returnz00_bglt BgL_auxz00_10126;

				{	/* SawMill/defs.scm 22 */
					BgL_rtl_returnz00_bglt BgL_res6027z00_7432;

					{	/* SawMill/defs.scm 22 */
						BgL_rtl_returnz00_bglt BgL_new3357z00_7430;

						BgL_new3357z00_7430 =
							((BgL_rtl_returnz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_returnz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3357z00_7430),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_returnz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 22 */
							BgL_objectz00_bglt BgL_auxz00_10131;

							BgL_auxz00_10131 = (BgL_objectz00_bglt) (BgL_new3357z00_7430);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10131, BFALSE);
						}
						BgL_res6027z00_7432 = BgL_new3357z00_7430;
					}
					BgL_auxz00_10126 = BgL_res6027z00_7432;
				}
				return (obj_t) (BgL_auxz00_10126);
			}
		}
	}



/* rtl_return-nil */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt BGl_rtl_returnzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			if ((BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 22 */
					{	/* SawMill/defs.scm 22 */
						BgL_rtl_returnz00_bglt BgL_res5793z00_4773;

						{	/* SawMill/defs.scm 22 */
							BgL_rtl_returnz00_bglt BgL_new3357z00_4769;

							BgL_new3357z00_4769 =
								((BgL_rtl_returnz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_returnz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3357z00_4769),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rtl_returnz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 22 */
								BgL_objectz00_bglt BgL_auxz00_10141;

								BgL_auxz00_10141 = (BgL_objectz00_bglt) (BgL_new3357z00_4769);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10141, BFALSE);
							}
							BgL_res5793z00_4773 = BgL_new3357z00_4769;
						}
						BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5793z00_4773);
					}
					{	/* SawMill/defs.scm 22 */
						BgL_typez00_bglt BgL_arg5193z00_2033;

						BgL_arg5193z00_2033 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 22 */
							BgL_rtl_returnz00_bglt BgL_res5794z00_4779;

							{	/* SawMill/defs.scm 22 */
								BgL_rtl_returnz00_bglt BgL_new3353z00_4774;

								BgL_new3353z00_4774 =
									(BgL_rtl_returnz00_bglt)
									(BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 22 */
									obj_t BgL_loc3351z00_4777;

									BgL_typez00_bglt BgL_type3352z00_4778;

									BgL_loc3351z00_4777 = BUNSPEC;
									BgL_type3352z00_4778 = BgL_arg5193z00_2033;
									((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_4774))->
											BgL_locz00) = ((obj_t) BgL_loc3351z00_4777), BUNSPEC);
									((((BgL_rtl_returnz00_bglt) CREF(BgL_new3353z00_4774))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3352z00_4778), BUNSPEC);
									BgL_res5794z00_4779 = BgL_new3353z00_4774;
							}}
							(obj_t) (BgL_res5794z00_4779);
				}}}
			else
				{	/* SawMill/defs.scm 22 */
					BFALSE;
				}
			return
				(BgL_rtl_returnz00_bglt)
				(BGl_z52thezd2rtl_returnzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_return-nil */
	obj_t BGl__rtl_returnzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5959)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			return (obj_t) (BGl_rtl_returnzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_last? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_lastzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3340z00_588)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3340z00_588,
				BGl_rtl_lastz00zzsaw_defsz00);
		}
	}



/* _rtl_last? */
	obj_t BGl__rtl_lastzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5956,
		obj_t BgL_obj3340z00_5957)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3340z00_5957,
					BGl_rtl_lastz00zzsaw_defsz00));
		}
	}



/* make-rtl_last */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt
		BGl_makezd2rtl_lastzd2zzsaw_defsz00(obj_t BgL_loc3326z00_592)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{	/* SawMill/defs.scm 21 */
				BgL_rtl_lastz00_bglt BgL_new3327z00_4780;

				{	/* SawMill/defs.scm 21 */
					BgL_rtl_lastz00_bglt BgL_res5795z00_4785;

					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_new3333z00_4781;

						BgL_new3333z00_4781 =
							((BgL_rtl_lastz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_lastz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3333z00_4781),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_lastz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_10160;

							BgL_auxz00_10160 = (BgL_objectz00_bglt) (BgL_new3333z00_4781);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10160, BFALSE);
						}
						BgL_res5795z00_4785 = BgL_new3333z00_4781;
					}
					BgL_new3327z00_4780 = BgL_res5795z00_4785;
				}
				{	/* SawMill/defs.scm 21 */
					BgL_rtl_lastz00_bglt BgL_res5796z00_4789;

					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_new3330z00_4786;

						BgL_new3330z00_4786 = BgL_new3327z00_4780;
						{	/* SawMill/defs.scm 21 */
							obj_t BgL_loc3329z00_4788;

							BgL_loc3329z00_4788 = BgL_loc3326z00_592;
							((((BgL_rtl_lastz00_bglt) CREF(BgL_new3330z00_4786))->
									BgL_locz00) = ((obj_t) BgL_loc3329z00_4788), BUNSPEC);
							BgL_res5796z00_4789 = BgL_new3330z00_4786;
					}} BgL_res5796z00_4789;
				}
				return BgL_new3327z00_4780;
			}
		}
	}



/* _make-rtl_last */
	obj_t BGl__makezd2rtl_lastzd2zzsaw_defsz00(obj_t BgL_envz00_6409,
		obj_t BgL_loc3326z00_6410)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			return (obj_t) (BGl_makezd2rtl_lastzd2zzsaw_defsz00(BgL_loc3326z00_6410));
		}
	}



/* fill-rtl_last! */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt
		BGl_fillzd2rtl_lastz12zc0zzsaw_defsz00(BgL_rtl_lastz00_bglt
		BgL_new3330z00_593, obj_t BgL_loc3329z00_594)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{	/* SawMill/defs.scm 21 */
				obj_t BgL_loc3329z00_7434;

				BgL_loc3329z00_7434 = BgL_loc3329z00_594;
				((((BgL_rtl_lastz00_bglt) CREF(BgL_new3330z00_593))->BgL_locz00) =
					((obj_t) BgL_loc3329z00_7434), BUNSPEC);
				return BgL_new3330z00_593;
			}
		}
	}



/* _fill-rtl_last! */
	obj_t BGl__fillzd2rtl_lastz12zc0zzsaw_defsz00(obj_t BgL_envz00_6411,
		obj_t BgL_new3330z00_6412, obj_t BgL_loc3329z00_6413)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{	/* SawMill/defs.scm 21 */
				BgL_rtl_lastz00_bglt BgL_auxz00_10167;

				{	/* SawMill/defs.scm 21 */
					BgL_rtl_lastz00_bglt BgL_res6028z00_7438;

					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_new3330z00_7435;

						BgL_new3330z00_7435 = (BgL_rtl_lastz00_bglt) (BgL_new3330z00_6412);
						{	/* SawMill/defs.scm 21 */
							obj_t BgL_loc3329z00_7437;

							BgL_loc3329z00_7437 = BgL_loc3329z00_6413;
							((((BgL_rtl_lastz00_bglt) CREF(BgL_new3330z00_7435))->
									BgL_locz00) = ((obj_t) BgL_loc3329z00_7437), BUNSPEC);
							BgL_res6028z00_7438 = BgL_new3330z00_7435;
						}
					}
					BgL_auxz00_10167 = BgL_res6028z00_7438;
				}
				return (obj_t) (BgL_auxz00_10167);
			}
		}
	}



/* %allocate-rtl_last */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt
		BGl_z52allocatezd2rtl_lastz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{	/* SawMill/defs.scm 21 */
				BgL_rtl_lastz00_bglt BgL_new3333z00_7439;

				BgL_new3333z00_7439 =
					((BgL_rtl_lastz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_lastz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3333z00_7439),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_lastz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_10175;

					BgL_auxz00_10175 = (BgL_objectz00_bglt) (BgL_new3333z00_7439);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10175, BFALSE);
				}
				return BgL_new3333z00_7439;
			}
		}
	}



/* _%allocate-rtl_last */
	obj_t BGl__z52allocatezd2rtl_lastz80zzsaw_defsz00(obj_t BgL_envz00_5954)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{	/* SawMill/defs.scm 21 */
				BgL_rtl_lastz00_bglt BgL_auxz00_10178;

				{	/* SawMill/defs.scm 21 */
					BgL_rtl_lastz00_bglt BgL_res6029z00_7443;

					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_new3333z00_7441;

						BgL_new3333z00_7441 =
							((BgL_rtl_lastz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_lastz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3333z00_7441),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_lastz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_10183;

							BgL_auxz00_10183 = (BgL_objectz00_bglt) (BgL_new3333z00_7441);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10183, BFALSE);
						}
						BgL_res6029z00_7443 = BgL_new3333z00_7441;
					}
					BgL_auxz00_10178 = BgL_res6029z00_7443;
				}
				return (obj_t) (BgL_auxz00_10178);
			}
		}
	}



/* rtl_last-nil */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt BGl_rtl_lastzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			if ((BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 21 */
					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_res5797z00_4799;

						{	/* SawMill/defs.scm 21 */
							BgL_rtl_lastz00_bglt BgL_new3333z00_4795;

							BgL_new3333z00_4795 =
								((BgL_rtl_lastz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_lastz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3333z00_4795),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_lastz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_10193;

								BgL_auxz00_10193 = (BgL_objectz00_bglt) (BgL_new3333z00_4795);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10193, BFALSE);
							}
							BgL_res5797z00_4799 = BgL_new3333z00_4795;
						}
						BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5797z00_4799);
					}
					{	/* SawMill/defs.scm 21 */
						BgL_rtl_lastz00_bglt BgL_res5798z00_4803;

						{	/* SawMill/defs.scm 21 */
							BgL_rtl_lastz00_bglt BgL_new3330z00_4800;

							BgL_new3330z00_4800 =
								(BgL_rtl_lastz00_bglt)
								(BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 21 */
								obj_t BgL_loc3329z00_4802;

								BgL_loc3329z00_4802 = BUNSPEC;
								((((BgL_rtl_lastz00_bglt) CREF(BgL_new3330z00_4800))->
										BgL_locz00) = ((obj_t) BgL_loc3329z00_4802), BUNSPEC);
								BgL_res5798z00_4803 = BgL_new3330z00_4800;
						}}
						(obj_t) (BgL_res5798z00_4803);
				}}
			else
				{	/* SawMill/defs.scm 21 */
					BFALSE;
				}
			return
				(BgL_rtl_lastz00_bglt) (BGl_z52thezd2rtl_lastzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_last-nil */
	obj_t BGl__rtl_lastzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5955)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			return (obj_t) (BGl_rtl_lastzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_fun? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_funzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3321z00_595)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3321z00_595,
				BGl_rtl_funz00zzsaw_defsz00);
		}
	}



/* _rtl_fun? */
	obj_t BGl__rtl_funzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5952,
		obj_t BgL_obj3321z00_5953)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3321z00_5953,
					BGl_rtl_funz00zzsaw_defsz00));
		}
	}



/* make-rtl_fun */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt BGl_makezd2rtl_funzd2zzsaw_defsz00(obj_t
		BgL_loc3307z00_599)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{	/* SawMill/defs.scm 19 */
				BgL_rtl_funz00_bglt BgL_new3308z00_4804;

				{	/* SawMill/defs.scm 19 */
					BgL_rtl_funz00_bglt BgL_res5799z00_4809;

					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_new3314z00_4805;

						BgL_new3314z00_4805 =
							((BgL_rtl_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3314z00_4805),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_funz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_10210;

							BgL_auxz00_10210 = (BgL_objectz00_bglt) (BgL_new3314z00_4805);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10210, BFALSE);
						}
						BgL_res5799z00_4809 = BgL_new3314z00_4805;
					}
					BgL_new3308z00_4804 = BgL_res5799z00_4809;
				}
				{	/* SawMill/defs.scm 19 */
					BgL_rtl_funz00_bglt BgL_res5800z00_4813;

					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_new3311z00_4810;

						BgL_new3311z00_4810 = BgL_new3308z00_4804;
						{	/* SawMill/defs.scm 19 */
							obj_t BgL_loc3310z00_4812;

							BgL_loc3310z00_4812 = BgL_loc3307z00_599;
							((((BgL_rtl_funz00_bglt) CREF(BgL_new3311z00_4810))->BgL_locz00) =
								((obj_t) BgL_loc3310z00_4812), BUNSPEC);
							BgL_res5800z00_4813 = BgL_new3311z00_4810;
					}} BgL_res5800z00_4813;
				}
				return BgL_new3308z00_4804;
			}
		}
	}



/* _make-rtl_fun */
	obj_t BGl__makezd2rtl_funzd2zzsaw_defsz00(obj_t BgL_envz00_6414,
		obj_t BgL_loc3307z00_6415)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			return (obj_t) (BGl_makezd2rtl_funzd2zzsaw_defsz00(BgL_loc3307z00_6415));
		}
	}



/* fill-rtl_fun! */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt
		BGl_fillzd2rtl_funz12zc0zzsaw_defsz00(BgL_rtl_funz00_bglt
		BgL_new3311z00_600, obj_t BgL_loc3310z00_601)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{	/* SawMill/defs.scm 19 */
				obj_t BgL_loc3310z00_7445;

				BgL_loc3310z00_7445 = BgL_loc3310z00_601;
				((((BgL_rtl_funz00_bglt) CREF(BgL_new3311z00_600))->BgL_locz00) =
					((obj_t) BgL_loc3310z00_7445), BUNSPEC);
				return BgL_new3311z00_600;
			}
		}
	}



/* _fill-rtl_fun! */
	obj_t BGl__fillzd2rtl_funz12zc0zzsaw_defsz00(obj_t BgL_envz00_6416,
		obj_t BgL_new3311z00_6417, obj_t BgL_loc3310z00_6418)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{	/* SawMill/defs.scm 19 */
				BgL_rtl_funz00_bglt BgL_auxz00_10217;

				{	/* SawMill/defs.scm 19 */
					BgL_rtl_funz00_bglt BgL_res6030z00_7449;

					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_new3311z00_7446;

						BgL_new3311z00_7446 = (BgL_rtl_funz00_bglt) (BgL_new3311z00_6417);
						{	/* SawMill/defs.scm 19 */
							obj_t BgL_loc3310z00_7448;

							BgL_loc3310z00_7448 = BgL_loc3310z00_6418;
							((((BgL_rtl_funz00_bglt) CREF(BgL_new3311z00_7446))->BgL_locz00) =
								((obj_t) BgL_loc3310z00_7448), BUNSPEC);
							BgL_res6030z00_7449 = BgL_new3311z00_7446;
						}
					}
					BgL_auxz00_10217 = BgL_res6030z00_7449;
				}
				return (obj_t) (BgL_auxz00_10217);
			}
		}
	}



/* %allocate-rtl_fun */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt
		BGl_z52allocatezd2rtl_funz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{	/* SawMill/defs.scm 19 */
				BgL_rtl_funz00_bglt BgL_new3314z00_7450;

				BgL_new3314z00_7450 =
					((BgL_rtl_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_funz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3314z00_7450),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_funz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_10225;

					BgL_auxz00_10225 = (BgL_objectz00_bglt) (BgL_new3314z00_7450);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10225, BFALSE);
				}
				return BgL_new3314z00_7450;
			}
		}
	}



/* _%allocate-rtl_fun */
	obj_t BGl__z52allocatezd2rtl_funz80zzsaw_defsz00(obj_t BgL_envz00_5950)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{	/* SawMill/defs.scm 19 */
				BgL_rtl_funz00_bglt BgL_auxz00_10228;

				{	/* SawMill/defs.scm 19 */
					BgL_rtl_funz00_bglt BgL_res6031z00_7454;

					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_new3314z00_7452;

						BgL_new3314z00_7452 =
							((BgL_rtl_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3314z00_7452),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_funz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_10233;

							BgL_auxz00_10233 = (BgL_objectz00_bglt) (BgL_new3314z00_7452);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10233, BFALSE);
						}
						BgL_res6031z00_7454 = BgL_new3314z00_7452;
					}
					BgL_auxz00_10228 = BgL_res6031z00_7454;
				}
				return (obj_t) (BgL_auxz00_10228);
			}
		}
	}



/* rtl_fun-nil */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			if ((BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 19 */
					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_res5801z00_4823;

						{	/* SawMill/defs.scm 19 */
							BgL_rtl_funz00_bglt BgL_new3314z00_4819;

							BgL_new3314z00_4819 =
								((BgL_rtl_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_funz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3314z00_4819),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_funz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_10243;

								BgL_auxz00_10243 = (BgL_objectz00_bglt) (BgL_new3314z00_4819);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10243, BFALSE);
							}
							BgL_res5801z00_4823 = BgL_new3314z00_4819;
						}
						BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5801z00_4823);
					}
					{	/* SawMill/defs.scm 19 */
						BgL_rtl_funz00_bglt BgL_res5802z00_4827;

						{	/* SawMill/defs.scm 19 */
							BgL_rtl_funz00_bglt BgL_new3311z00_4824;

							BgL_new3311z00_4824 =
								(BgL_rtl_funz00_bglt)
								(BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00);
							{	/* SawMill/defs.scm 19 */
								obj_t BgL_loc3310z00_4826;

								BgL_loc3310z00_4826 = BUNSPEC;
								((((BgL_rtl_funz00_bglt) CREF(BgL_new3311z00_4824))->
										BgL_locz00) = ((obj_t) BgL_loc3310z00_4826), BUNSPEC);
								BgL_res5802z00_4827 = BgL_new3311z00_4824;
						}}
						(obj_t) (BgL_res5802z00_4827);
				}}
			else
				{	/* SawMill/defs.scm 19 */
					BFALSE;
				}
			return (BgL_rtl_funz00_bglt) (BGl_z52thezd2rtl_funzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_fun-nil */
	obj_t BGl__rtl_funzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5951)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			return (obj_t) (BGl_rtl_funzd2nilzd2zzsaw_defsz00());
		}
	}



/* rtl_reg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf3zf3zzsaw_defsz00(obj_t
		BgL_obj3303z00_605)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3303z00_605,
				BGl_rtl_regz00zzsaw_defsz00);
		}
	}



/* _rtl_reg? */
	obj_t BGl__rtl_regzf3zf3zzsaw_defsz00(obj_t BgL_envz00_5948,
		obj_t BgL_obj3303z00_5949)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3303z00_5949,
					BGl_rtl_regz00zzsaw_defsz00));
		}
	}



/* make-rtl_reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt BgL_type3254z00_609,
		obj_t BgL_var3255z00_610, obj_t BgL_onexprzf33256zf3_611,
		obj_t BgL_name3257z00_612, obj_t BgL_key3258z00_613,
		obj_t BgL_hardware3259z00_614)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{	/* SawMill/defs.scm 11 */
				BgL_rtl_regz00_bglt BgL_new3260z00_4828;

				{	/* SawMill/defs.scm 11 */
					BgL_rtl_regz00_bglt BgL_res5803z00_4833;

					{	/* SawMill/defs.scm 11 */
						BgL_rtl_regz00_bglt BgL_new3276z00_4829;

						BgL_new3276z00_4829 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3276z00_4829),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 11 */
							BgL_objectz00_bglt BgL_auxz00_10260;

							BgL_auxz00_10260 = (BgL_objectz00_bglt) (BgL_new3276z00_4829);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10260, BFALSE);
						}
						BgL_res5803z00_4833 = BgL_new3276z00_4829;
					}
					BgL_new3260z00_4828 = BgL_res5803z00_4833;
				}
				{	/* SawMill/defs.scm 11 */
					BgL_rtl_regz00_bglt BgL_res5804z00_4847;

					{	/* SawMill/defs.scm 11 */
						BgL_rtl_regz00_bglt BgL_new3268z00_4834;

						BgL_new3268z00_4834 = BgL_new3260z00_4828;
						{	/* SawMill/defs.scm 11 */
							BgL_typez00_bglt BgL_type3262z00_4841;

							obj_t BgL_var3263z00_4842;

							obj_t BgL_onexprzf33264zf3_4843;

							obj_t BgL_name3265z00_4844;

							obj_t BgL_key3266z00_4845;

							obj_t BgL_hardware3267z00_4846;

							BgL_type3262z00_4841 = BgL_type3254z00_609;
							BgL_var3263z00_4842 = BgL_var3255z00_610;
							BgL_onexprzf33264zf3_4843 = BgL_onexprzf33256zf3_611;
							BgL_name3265z00_4844 = BgL_name3257z00_612;
							BgL_key3266z00_4845 = BgL_key3258z00_613;
							BgL_hardware3267z00_4846 = BgL_hardware3259z00_614;
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3262z00_4841), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->BgL_varz00) =
								((obj_t) BgL_var3263z00_4842), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->
									BgL_onexprzf3zf3) =
								((obj_t) BgL_onexprzf33264zf3_4843), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->
									BgL_namez00) = ((obj_t) BgL_name3265z00_4844), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->BgL_keyz00) =
								((obj_t) BgL_key3266z00_4845), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4834))->
									BgL_hardwarez00) =
								((obj_t) BgL_hardware3267z00_4846), BUNSPEC);
							BgL_res5804z00_4847 = BgL_new3268z00_4834;
					}} BgL_res5804z00_4847;
				}
				return BgL_new3260z00_4828;
			}
		}
	}



/* _make-rtl_reg */
	obj_t BGl__makezd2rtl_regzd2zzsaw_defsz00(obj_t BgL_envz00_6419,
		obj_t BgL_type3254z00_6420, obj_t BgL_var3255z00_6421,
		obj_t BgL_onexprzf33256zf3_6422, obj_t BgL_name3257z00_6423,
		obj_t BgL_key3258z00_6424, obj_t BgL_hardware3259z00_6425)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			return
				(obj_t) (BGl_makezd2rtl_regzd2zzsaw_defsz00(
					(BgL_typez00_bglt) (BgL_type3254z00_6420), BgL_var3255z00_6421,
					BgL_onexprzf33256zf3_6422, BgL_name3257z00_6423, BgL_key3258z00_6424,
					BgL_hardware3259z00_6425));
		}
	}



/* fill-rtl_reg! */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_fillzd2rtl_regz12zc0zzsaw_defsz00(BgL_rtl_regz00_bglt
		BgL_new3268z00_615, BgL_typez00_bglt BgL_type3262z00_616,
		obj_t BgL_var3263z00_617, obj_t BgL_onexprzf33264zf3_618,
		obj_t BgL_name3265z00_619, obj_t BgL_key3266z00_620,
		obj_t BgL_hardware3267z00_621)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{	/* SawMill/defs.scm 11 */
				BgL_typez00_bglt BgL_type3262z00_7456;

				obj_t BgL_var3263z00_7457;

				obj_t BgL_onexprzf33264zf3_7458;

				obj_t BgL_name3265z00_7459;

				obj_t BgL_key3266z00_7460;

				obj_t BgL_hardware3267z00_7461;

				BgL_type3262z00_7456 = BgL_type3262z00_616;
				BgL_var3263z00_7457 = BgL_var3263z00_617;
				BgL_onexprzf33264zf3_7458 = BgL_onexprzf33264zf3_618;
				BgL_name3265z00_7459 = BgL_name3265z00_619;
				BgL_key3266z00_7460 = BgL_key3266z00_620;
				BgL_hardware3267z00_7461 = BgL_hardware3267z00_621;
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3262z00_7456), BUNSPEC);
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_varz00) =
					((obj_t) BgL_var3263z00_7457), BUNSPEC);
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf33264zf3_7458), BUNSPEC);
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_namez00) =
					((obj_t) BgL_name3265z00_7459), BUNSPEC);
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_keyz00) =
					((obj_t) BgL_key3266z00_7460), BUNSPEC);
				((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_615))->BgL_hardwarez00) =
					((obj_t) BgL_hardware3267z00_7461), BUNSPEC);
				return BgL_new3268z00_615;
			}
		}
	}



/* _fill-rtl_reg! */
	obj_t BGl__fillzd2rtl_regz12zc0zzsaw_defsz00(obj_t BgL_envz00_6426,
		obj_t BgL_new3268z00_6427, obj_t BgL_type3262z00_6428,
		obj_t BgL_var3263z00_6429, obj_t BgL_onexprzf33264zf3_6430,
		obj_t BgL_name3265z00_6431, obj_t BgL_key3266z00_6432,
		obj_t BgL_hardware3267z00_6433)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{	/* SawMill/defs.scm 11 */
				BgL_rtl_regz00_bglt BgL_auxz00_10278;

				{	/* SawMill/defs.scm 11 */
					BgL_rtl_regz00_bglt BgL_res6032z00_7475;

					{	/* SawMill/defs.scm 11 */
						BgL_rtl_regz00_bglt BgL_new3268z00_7462;

						BgL_typez00_bglt BgL_type3262z00_7463;

						BgL_new3268z00_7462 = (BgL_rtl_regz00_bglt) (BgL_new3268z00_6427);
						BgL_type3262z00_7463 = (BgL_typez00_bglt) (BgL_type3262z00_6428);
						{	/* SawMill/defs.scm 11 */
							BgL_typez00_bglt BgL_type3262z00_7469;

							obj_t BgL_var3263z00_7470;

							obj_t BgL_onexprzf33264zf3_7471;

							obj_t BgL_name3265z00_7472;

							obj_t BgL_key3266z00_7473;

							obj_t BgL_hardware3267z00_7474;

							BgL_type3262z00_7469 = BgL_type3262z00_7463;
							BgL_var3263z00_7470 = BgL_var3263z00_6429;
							BgL_onexprzf33264zf3_7471 = BgL_onexprzf33264zf3_6430;
							BgL_name3265z00_7472 = BgL_name3265z00_6431;
							BgL_key3266z00_7473 = BgL_key3266z00_6432;
							BgL_hardware3267z00_7474 = BgL_hardware3267z00_6433;
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3262z00_7469), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->BgL_varz00) =
								((obj_t) BgL_var3263z00_7470), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->
									BgL_onexprzf3zf3) =
								((obj_t) BgL_onexprzf33264zf3_7471), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->
									BgL_namez00) = ((obj_t) BgL_name3265z00_7472), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->BgL_keyz00) =
								((obj_t) BgL_key3266z00_7473), BUNSPEC);
							((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_7462))->
									BgL_hardwarez00) =
								((obj_t) BgL_hardware3267z00_7474), BUNSPEC);
							BgL_res6032z00_7475 = BgL_new3268z00_7462;
						}
					}
					BgL_auxz00_10278 = BgL_res6032z00_7475;
				}
				return (obj_t) (BgL_auxz00_10278);
			}
		}
	}



/* %allocate-rtl_reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_z52allocatezd2rtl_regz80zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{	/* SawMill/defs.scm 11 */
				BgL_rtl_regz00_bglt BgL_new3276z00_7476;

				BgL_new3276z00_7476 =
					((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_regz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3276z00_7476),
					BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
				{	/* SawMill/defs.scm 11 */
					BgL_objectz00_bglt BgL_auxz00_10292;

					BgL_auxz00_10292 = (BgL_objectz00_bglt) (BgL_new3276z00_7476);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10292, BFALSE);
				}
				return BgL_new3276z00_7476;
			}
		}
	}



/* _%allocate-rtl_reg */
	obj_t BGl__z52allocatezd2rtl_regz80zzsaw_defsz00(obj_t BgL_envz00_5946)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{	/* SawMill/defs.scm 11 */
				BgL_rtl_regz00_bglt BgL_auxz00_10295;

				{	/* SawMill/defs.scm 11 */
					BgL_rtl_regz00_bglt BgL_res6033z00_7480;

					{	/* SawMill/defs.scm 11 */
						BgL_rtl_regz00_bglt BgL_new3276z00_7478;

						BgL_new3276z00_7478 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3276z00_7478),
							BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
						{	/* SawMill/defs.scm 11 */
							BgL_objectz00_bglt BgL_auxz00_10300;

							BgL_auxz00_10300 = (BgL_objectz00_bglt) (BgL_new3276z00_7478);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10300, BFALSE);
						}
						BgL_res6033z00_7480 = BgL_new3276z00_7478;
					}
					BgL_auxz00_10295 = BgL_res6033z00_7480;
				}
				return (obj_t) (BgL_auxz00_10295);
			}
		}
	}



/* rtl_reg-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt BGl_rtl_regzd2nilzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			if ((BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00 == BUNSPEC))
				{	/* SawMill/defs.scm 11 */
					{	/* SawMill/defs.scm 11 */
						BgL_rtl_regz00_bglt BgL_res5805z00_4862;

						{	/* SawMill/defs.scm 11 */
							BgL_rtl_regz00_bglt BgL_new3276z00_4858;

							BgL_new3276z00_4858 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3276z00_4858),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMill/defs.scm 11 */
								BgL_objectz00_bglt BgL_auxz00_10310;

								BgL_auxz00_10310 = (BgL_objectz00_bglt) (BgL_new3276z00_4858);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10310, BFALSE);
							}
							BgL_res5805z00_4862 = BgL_new3276z00_4858;
						}
						BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00 =
							(obj_t) (BgL_res5805z00_4862);
					}
					{	/* SawMill/defs.scm 11 */
						BgL_typez00_bglt BgL_arg5200z00_2054;

						BgL_arg5200z00_2054 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/defs.scm 11 */
							BgL_rtl_regz00_bglt BgL_res5806z00_4876;

							{	/* SawMill/defs.scm 11 */
								BgL_rtl_regz00_bglt BgL_new3268z00_4863;

								BgL_new3268z00_4863 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00);
								{	/* SawMill/defs.scm 11 */
									BgL_typez00_bglt BgL_type3262z00_4870;

									obj_t BgL_var3263z00_4871;

									obj_t BgL_onexprzf33264zf3_4872;

									obj_t BgL_name3265z00_4873;

									obj_t BgL_key3266z00_4874;

									obj_t BgL_hardware3267z00_4875;

									BgL_type3262z00_4870 = BgL_arg5200z00_2054;
									BgL_var3263z00_4871 = BUNSPEC;
									BgL_onexprzf33264zf3_4872 = BUNSPEC;
									BgL_name3265z00_4873 = BUNSPEC;
									BgL_key3266z00_4874 = BUNSPEC;
									BgL_hardware3267z00_4875 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3262z00_4870), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_varz00) = ((obj_t) BgL_var3263z00_4871), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33264zf3_4872), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_namez00) = ((obj_t) BgL_name3265z00_4873), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_keyz00) = ((obj_t) BgL_key3266z00_4874), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3268z00_4863))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3267z00_4875), BUNSPEC);
									BgL_res5806z00_4876 = BgL_new3268z00_4863;
							}}
							(obj_t) (BgL_res5806z00_4876);
				}}}
			else
				{	/* SawMill/defs.scm 11 */
					BFALSE;
				}
			return (BgL_rtl_regz00_bglt) (BGl_z52thezd2rtl_regzd2nilz52zzsaw_defsz00);
		}
	}



/* _rtl_reg-nil */
	obj_t BGl__rtl_regzd2nilzd2zzsaw_defsz00(obj_t BgL_envz00_5947)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			return (obj_t) (BGl_rtl_regzd2nilzd2zzsaw_defsz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_dumpzd2default4590zd2envz00zzsaw_defsz00, BFALSE,
				BGl_string5823z00zzsaw_defsz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
				BGl_dumpzd2funzd2default4600zd2envzd2zzsaw_defsz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
		}
	}



/* dump */
	BGL_EXPORTED_DEF obj_t BGl_dumpz00zzsaw_defsz00(obj_t BgL_oz00_11,
		obj_t BgL_pz00_12, int BgL_mz00_13)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 165 */
			{

				if (BGL_OBJECTP(BgL_oz00_11))
					{	/* SawMill/defs.scm 165 */
						obj_t BgL_method4592z00_2431;

						{	/* SawMill/defs.scm 165 */
							BgL_objectz00_bglt BgL_objz00_4878;

							BgL_objz00_4878 = (BgL_objectz00_bglt) (BgL_oz00_11);
							{	/* SawMill/defs.scm 165 */
								long BgL_objzd2classzd2numz00_4879;

								BgL_objzd2classzd2numz00_4879 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4878);
								{	/* SawMill/defs.scm 165 */
									obj_t BgL_arg2643z00_4880;

									BgL_arg2643z00_4880 =
										PROCEDURE_REF(BGl_dumpzd2envzd2zzsaw_defsz00,
										(int) (((long) 1)));
									{	/* SawMill/defs.scm 165 */
										obj_t BgL_arrayz00_4882;

										int BgL_offsetz00_4883;

										BgL_arrayz00_4882 = BgL_arg2643z00_4880;
										BgL_offsetz00_4883 = (int) (BgL_objzd2classzd2numz00_4879);
										{	/* SawMill/defs.scm 165 */
											long BgL_offsetz00_4884;

											BgL_offsetz00_4884 =
												((long) (BgL_offsetz00_4883) - OBJECT_TYPE);
											{	/* SawMill/defs.scm 165 */
												long BgL_modz00_4885;

												{	/* SawMill/defs.scm 165 */
													int BgL_arg2645z00_4886;

													BgL_arg2645z00_4886 = (int) (((long) 16));
													{	/* SawMill/defs.scm 165 */
														long BgL_auxz00_10338;

														BgL_auxz00_10338 = (long) (BgL_arg2645z00_4886);
														BgL_modz00_4885 =
															(BgL_offsetz00_4884 / BgL_auxz00_10338);
												}}
												{	/* SawMill/defs.scm 165 */
													long BgL_restz00_4887;

													{	/* SawMill/defs.scm 165 */
														int BgL_arg2644z00_4888;

														BgL_arg2644z00_4888 = (int) (((long) 16));
														{	/* SawMill/defs.scm 165 */
															long BgL_auxz00_10342;

															BgL_auxz00_10342 = (long) (BgL_arg2644z00_4888);
															BgL_restz00_4887 =
																(BgL_offsetz00_4884 % BgL_auxz00_10342);
													}}
													{	/* SawMill/defs.scm 165 */

														BgL_method4592z00_2431 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4882,
																(int) (BgL_modz00_4885)),
															(int) (BgL_restz00_4887));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method4592z00_2431) (BgL_method4592z00_2431,
							BgL_oz00_11, BgL_pz00_12, BINT(BgL_mz00_13), BEOA);
					}
				else
					{	/* SawMill/defs.scm 165 */
						{	/* SawMill/defs.scm 165 */
							obj_t BgL_fun5249z00_2433;

							BgL_fun5249z00_2433 =
								PROCEDURE_REF(BGl_dumpzd2envzd2zzsaw_defsz00,
								(int) (((long) 0)));
							return
								PROCEDURE_ENTRY(BgL_fun5249z00_2433) (BgL_fun5249z00_2433,
								BgL_oz00_11, BgL_pz00_12, BINT(BgL_mz00_13), BEOA);
						}
					}
			}
		}
	}



/* _dump */
	obj_t BGl__dumpz00zzsaw_defsz00(obj_t BgL_envz00_6434, obj_t BgL_oz00_6435,
		obj_t BgL_pz00_6436, obj_t BgL_mz00_6437)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 165 */
			return
				BGl_dumpz00zzsaw_defsz00(BgL_oz00_6435, BgL_pz00_6436,
				CINT(BgL_mz00_6437));
		}
	}



/* dump-default4590 */
	obj_t BGl_dumpzd2default4590zd2zzsaw_defsz00(obj_t BgL_oz00_14,
		obj_t BgL_pz00_15, obj_t BgL_mz00_16)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			{	/* SawMill/defs.scm 167 */
				bool_t BgL_testz00_10359;

				if (STRINGP(BgL_oz00_14))
					{	/* SawMill/defs.scm 167 */
						BgL_testz00_10359 = ((bool_t) 1);
					}
				else
					{	/* SawMill/defs.scm 167 */
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_oz00_14))
							{	/* SawMill/defs.scm 167 */
								BgL_testz00_10359 = ((bool_t) 1);
							}
						else
							{	/* SawMill/defs.scm 167 */
								BgL_testz00_10359 = SYMBOLP(BgL_oz00_14);
							}
					}
				if (BgL_testz00_10359)
					{	/* SawMill/defs.scm 167 */
						return bgl_display_obj(BgL_oz00_14, BgL_pz00_15);
					}
				else
					{	/* SawMill/defs.scm 167 */
						if (PAIRP(BgL_oz00_14))
							{
								obj_t BgL_l4538z00_2437;

								{	/* SawMill/defs.scm 170 */
									bool_t BgL_auxz00_10368;

									BgL_l4538z00_2437 = BgL_oz00_14;
								BgL_zc3anonymousza35252ze3z83_2438:
									if (PAIRP(BgL_l4538z00_2437))
										{	/* SawMill/defs.scm 170 */
											{	/* SawMill/defs.scm 175 */
												obj_t BgL_oz00_2440;

												BgL_oz00_2440 = CAR(BgL_l4538z00_2437);
												BGl_dumpz00zzsaw_defsz00(BgL_oz00_2440, BgL_pz00_15,
													CINT(BgL_mz00_16));
												bgl_display_char(((unsigned char) '\n'), BgL_pz00_15);
												if (((long) CINT(BgL_mz00_16) > ((long) 0)))
													{	/* SawMill/defs.scm 173 */
														BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_mz00_16,
															BgL_pz00_15);
													}
												else
													{	/* SawMill/defs.scm 173 */
														bgl_display_char(((unsigned char) '\n'),
															BgL_pz00_15);
											}}
											{
												obj_t BgL_l4538z00_10380;

												BgL_l4538z00_10380 = CDR(BgL_l4538z00_2437);
												BgL_l4538z00_2437 = BgL_l4538z00_10380;
												goto BgL_zc3anonymousza35252ze3z83_2438;
											}
										}
									else
										{	/* SawMill/defs.scm 170 */
											BgL_auxz00_10368 = ((bool_t) 1);
										}
									return BBOOL(BgL_auxz00_10368);
								}
							}
						else
							{	/* SawMill/defs.scm 178 */
								obj_t BgL_list5256z00_2444;

								BgL_list5256z00_2444 = MAKE_PAIR(BgL_pz00_15, BNIL);
								return
									BGl_writez00zz__r4_output_6_10_3z00(BgL_oz00_14,
									BgL_list5256z00_2444);
							}
					}
			}
		}
	}



/* _dump-default4590 */
	obj_t BGl__dumpzd2default4590zd2zzsaw_defsz00(obj_t BgL_envz00_6438,
		obj_t BgL_oz00_6439, obj_t BgL_pz00_6440, obj_t BgL_mz00_6441)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			return
				BGl_dumpzd2default4590zd2zzsaw_defsz00(BgL_oz00_6439, BgL_pz00_6440,
				BgL_mz00_6441);
		}
	}



/* dump-fun */
	obj_t BGl_dumpzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt BgL_oz00_36,
		obj_t BgL_destz00_37, obj_t BgL_argsz00_38, obj_t BgL_pz00_39,
		obj_t BgL_mz00_40)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 271 */
			{	/* SawMill/defs.scm 271 */
				obj_t BgL_method4601z00_4914;

				{	/* SawMill/defs.scm 271 */
					BgL_objectz00_bglt BgL_objz00_4915;

					BgL_objz00_4915 = (BgL_objectz00_bglt) (BgL_oz00_36);
					{	/* SawMill/defs.scm 271 */
						long BgL_objzd2classzd2numz00_4916;

						BgL_objzd2classzd2numz00_4916 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_4915);
						{	/* SawMill/defs.scm 271 */
							obj_t BgL_arg2643z00_4917;

							BgL_arg2643z00_4917 =
								PROCEDURE_REF(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
								(int) (((long) 1)));
							{	/* SawMill/defs.scm 271 */
								obj_t BgL_arrayz00_4919;

								int BgL_offsetz00_4920;

								BgL_arrayz00_4919 = BgL_arg2643z00_4917;
								BgL_offsetz00_4920 = (int) (BgL_objzd2classzd2numz00_4916);
								{	/* SawMill/defs.scm 271 */
									long BgL_offsetz00_4921;

									BgL_offsetz00_4921 =
										((long) (BgL_offsetz00_4920) - OBJECT_TYPE);
									{	/* SawMill/defs.scm 271 */
										long BgL_modz00_4922;

										{	/* SawMill/defs.scm 271 */
											int BgL_arg2645z00_4923;

											BgL_arg2645z00_4923 = (int) (((long) 16));
											{	/* SawMill/defs.scm 271 */
												long BgL_auxz00_10394;

												BgL_auxz00_10394 = (long) (BgL_arg2645z00_4923);
												BgL_modz00_4922 =
													(BgL_offsetz00_4921 / BgL_auxz00_10394);
										}}
										{	/* SawMill/defs.scm 271 */
											long BgL_restz00_4924;

											{	/* SawMill/defs.scm 271 */
												int BgL_arg2644z00_4925;

												BgL_arg2644z00_4925 = (int) (((long) 16));
												{	/* SawMill/defs.scm 271 */
													long BgL_auxz00_10398;

													BgL_auxz00_10398 = (long) (BgL_arg2644z00_4925);
													BgL_restz00_4924 =
														(BgL_offsetz00_4921 % BgL_auxz00_10398);
											}}
											{	/* SawMill/defs.scm 271 */

												BgL_method4601z00_4914 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_4919,
														(int) (BgL_modz00_4922)), (int) (BgL_restz00_4924));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4601z00_4914) (BgL_method4601z00_4914,
					(obj_t) (BgL_oz00_36), BgL_destz00_37, BgL_argsz00_38, BgL_pz00_39,
					BgL_mz00_40, BEOA);
			}
		}
	}



/* _dump-fun */
	obj_t BGl__dumpzd2funzd2zzsaw_defsz00(obj_t BgL_envz00_5940,
		obj_t BgL_oz00_5941, obj_t BgL_destz00_5942, obj_t BgL_argsz00_5943,
		obj_t BgL_pz00_5944, obj_t BgL_mz00_5945)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 271 */
			return
				BGl_dumpzd2funzd2zzsaw_defsz00(
				(BgL_rtl_funz00_bglt) (BgL_oz00_5941), BgL_destz00_5942,
				BgL_argsz00_5943, BgL_pz00_5944, BgL_mz00_5945);
		}
	}



/* _dump-fun-default4600 */
	obj_t BGl__dumpzd2funzd2default4600z00zzsaw_defsz00(obj_t BgL_envz00_6442,
		obj_t BgL_oz00_6443, obj_t BgL_destz00_6444, obj_t BgL_argsz00_6445,
		obj_t BgL_pz00_6446, obj_t BgL_mz00_6447)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_rtl_regz00zzsaw_defsz00,
				BGl_proc5825z00zzsaw_defsz00, BGl_string5826z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_blockz00zzsaw_defsz00,
				BGl_proc5827z00zzsaw_defsz00, BGl_string5823z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_rtl_insz00zzsaw_defsz00,
				BGl_proc5828z00zzsaw_defsz00, BGl_string5823z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_rtl_regz00zzsaw_defsz00,
				BGl_proc5829z00zzsaw_defsz00, BGl_string5823z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_proc5830z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc5831z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc5832z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc5833z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadfunz00zzsaw_defsz00,
				BGl_proc5834z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5835z00zzsaw_defsz00,
				BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_ifeqz00zzsaw_defsz00,
				BGl_proc5836z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_ifnez00zzsaw_defsz00,
				BGl_proc5837z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc5838z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc5839z00zzsaw_defsz00, BGl_string5824z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_blockz00zzsaw_defsz00, BGl_proc5840z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_blockz00zzsaw_defsz00, BGl_proc5842z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_insz00zzsaw_defsz00, BGl_proc5844z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_insz00zzsaw_defsz00, BGl_proc5845z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_protectedz00zzsaw_defsz00, BGl_proc5846z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_protectedz00zzsaw_defsz00, BGl_proc5847z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc5848z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc5849z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc5850z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc5851z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc5852z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc5853z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_pragmaz00zzsaw_defsz00, BGl_proc5854z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_pragmaz00zzsaw_defsz00, BGl_proc5855z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc5856z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc5857z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc5858z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc5859z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_applyz00zzsaw_defsz00, BGl_proc5860z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_applyz00zzsaw_defsz00, BGl_proc5861z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5862z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5863z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc5864z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc5865z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_boxsetz00zzsaw_defsz00, BGl_proc5866z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_boxsetz00zzsaw_defsz00, BGl_proc5867z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc5868z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc5869z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc5870z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc5871z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc5872z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc5873z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_effectz00zzsaw_defsz00, BGl_proc5874z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_effectz00zzsaw_defsz00, BGl_proc5875z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_boxrefz00zzsaw_defsz00, BGl_proc5876z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_boxrefz00zzsaw_defsz00, BGl_proc5877z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_makeboxz00zzsaw_defsz00, BGl_proc5878z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_makeboxz00zzsaw_defsz00, BGl_proc5879z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_isaz00zzsaw_defsz00, BGl_proc5880z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_isaz00zzsaw_defsz00, BGl_proc5881z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc5882z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc5883z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc5884z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc5885z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc5886z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc5887z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc5888z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc5889z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5890z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5891z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc5892z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc5893z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc5894z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc5895z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc5896z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc5897z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc5898z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc5899z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_nopz00zzsaw_defsz00, BGl_proc5900z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_nopz00zzsaw_defsz00, BGl_proc5901z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_purez00zzsaw_defsz00, BGl_proc5902z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_purez00zzsaw_defsz00, BGl_proc5903z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_goz00zzsaw_defsz00, BGl_proc5904z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_goz00zzsaw_defsz00, BGl_proc5905z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_ifnez00zzsaw_defsz00, BGl_proc5906z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_ifnez00zzsaw_defsz00, BGl_proc5907z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_ifeqz00zzsaw_defsz00, BGl_proc5908z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_ifeqz00zzsaw_defsz00, BGl_proc5909z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc5910z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc5911z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_selectz00zzsaw_defsz00, BGl_proc5912z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_selectz00zzsaw_defsz00, BGl_proc5913z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_ifz00zzsaw_defsz00, BGl_proc5914z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_ifz00zzsaw_defsz00, BGl_proc5915z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_notseqz00zzsaw_defsz00, BGl_proc5916z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_notseqz00zzsaw_defsz00, BGl_proc5917z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_failz00zzsaw_defsz00, BGl_proc5918z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_failz00zzsaw_defsz00, BGl_proc5919z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_jumpexitz00zzsaw_defsz00, BGl_proc5920z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_jumpexitz00zzsaw_defsz00, BGl_proc5921z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc5922z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc5923z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_lastz00zzsaw_defsz00, BGl_proc5924z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_lastz00zzsaw_defsz00, BGl_proc5925z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_proc5926z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_proc5927z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_regz00zzsaw_defsz00, BGl_proc5928z00zzsaw_defsz00,
				BGl_string5841z00zzsaw_defsz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_regz00zzsaw_defsz00, BGl_proc5929z00zzsaw_defsz00,
				BGl_string5843z00zzsaw_defsz00);
		}
	}



/* struct+object->objec4800 */
	obj_t BGl_structzb2objectzd2ze3objec4800z83zzsaw_defsz00(obj_t
		BgL_envz00_6550, obj_t BgL_oz00_6551, obj_t BgL_sz00_6552)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{
				BgL_rtl_regz00_bglt BgL_oz00_3451;

				obj_t BgL_sz00_3452;

				{	/* SawMill/defs.scm 11 */
					BgL_rtl_regz00_bglt BgL_auxz00_10512;

					BgL_oz00_3451 = (BgL_rtl_regz00_bglt) (BgL_oz00_6551);
					BgL_sz00_3452 = BgL_sz00_6552;
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5625z00_3455;

						BgL_arg5625z00_3455 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 0)));
						{	/* SawMill/defs.scm 11 */
							BgL_objectz00_bglt BgL_auxz00_10515;

							BgL_auxz00_10515 = (BgL_objectz00_bglt) (BgL_oz00_3451);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10515, BgL_arg5625z00_3455);
					}}
					{
						BgL_typez00_bglt BgL_auxz00_10518;

						BgL_auxz00_10518 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3452,
								(int) (((long) 1))));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_10518), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10523;

						BgL_auxz00_10523 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 2)));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_varz00) =
							((obj_t) BgL_auxz00_10523), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10527;

						BgL_auxz00_10527 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 3)));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_onexprzf3zf3) =
							((obj_t) BgL_auxz00_10527), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10531;

						BgL_auxz00_10531 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 4)));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_namez00) =
							((obj_t) BgL_auxz00_10531), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10535;

						BgL_auxz00_10535 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 5)));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_keyz00) =
							((obj_t) BgL_auxz00_10535), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10539;

						BgL_auxz00_10539 = STRUCT_REF(BgL_sz00_3452, (int) (((long) 6)));
						((((BgL_rtl_regz00_bglt) CREF(BgL_oz00_3451))->BgL_hardwarez00) =
							((obj_t) BgL_auxz00_10539), BUNSPEC);
					}
					BgL_auxz00_10512 = BgL_oz00_3451;
					return (obj_t) (BgL_auxz00_10512);
				}
			}
		}
	}



/* object->struct-rtl_r4798 */
	obj_t BGl_objectzd2ze3structzd2rtl_r4798ze3zzsaw_defsz00(obj_t
		BgL_envz00_6553, obj_t BgL_obj3277z00_6554)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 11 */
			{
				BgL_rtl_regz00_bglt BgL_obj3277z00_3433;

				BgL_obj3277z00_3433 = (BgL_rtl_regz00_bglt) (BgL_obj3277z00_6554);
				{	/* SawMill/defs.scm 11 */
					obj_t BgL_res3278z00_3436;

					{	/* SawMill/defs.scm 11 */
						obj_t BgL_keyz00_5886;

						BgL_keyz00_5886 = CNST_TABLE_REF(((long) 1));
						BgL_res3278z00_3436 =
							make_struct(BgL_keyz00_5886, (int) (((long) 7)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 11 */
						int BgL_auxz00_10548;

						BgL_auxz00_10548 = (int) (((long) 0));
						STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10548, BFALSE);
					}
					{	/* SawMill/defs.scm 11 */
						BgL_typez00_bglt BgL_arg5613z00_3438;

						BgL_arg5613z00_3438 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->BgL_typez00);
						{	/* SawMill/defs.scm 11 */
							obj_t BgL_auxz00_10554;

							int BgL_auxz00_10552;

							BgL_auxz00_10554 = (obj_t) (BgL_arg5613z00_3438);
							BgL_auxz00_10552 = (int) (((long) 1));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10552,
								BgL_auxz00_10554);
					}}
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5615z00_3440;

						BgL_arg5615z00_3440 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->BgL_varz00);
						{	/* SawMill/defs.scm 11 */
							int BgL_auxz00_10558;

							BgL_auxz00_10558 = (int) (((long) 2));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10558,
								BgL_arg5615z00_3440);
					}}
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5617z00_3442;

						BgL_arg5617z00_3442 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->
							BgL_onexprzf3zf3);
						{	/* SawMill/defs.scm 11 */
							int BgL_auxz00_10562;

							BgL_auxz00_10562 = (int) (((long) 3));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10562,
								BgL_arg5617z00_3442);
					}}
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5619z00_3444;

						BgL_arg5619z00_3444 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->BgL_namez00);
						{	/* SawMill/defs.scm 11 */
							int BgL_auxz00_10566;

							BgL_auxz00_10566 = (int) (((long) 4));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10566,
								BgL_arg5619z00_3444);
					}}
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5621z00_3446;

						BgL_arg5621z00_3446 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->BgL_keyz00);
						{	/* SawMill/defs.scm 11 */
							int BgL_auxz00_10570;

							BgL_auxz00_10570 = (int) (((long) 5));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10570,
								BgL_arg5621z00_3446);
					}}
					{	/* SawMill/defs.scm 11 */
						obj_t BgL_arg5623z00_3448;

						BgL_arg5623z00_3448 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3277z00_3433))->
							BgL_hardwarez00);
						{	/* SawMill/defs.scm 11 */
							int BgL_auxz00_10574;

							BgL_auxz00_10574 = (int) (((long) 6));
							STRUCT_SET(BgL_res3278z00_3436, BgL_auxz00_10574,
								BgL_arg5623z00_3448);
					}}
					return BgL_res3278z00_3436;
				}
			}
		}
	}



/* struct+object->objec4796 */
	obj_t BGl_structzb2objectzd2ze3objec4796z83zzsaw_defsz00(obj_t
		BgL_envz00_6555, obj_t BgL_oz00_6556, obj_t BgL_sz00_6557)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{
				BgL_rtl_funz00_bglt BgL_oz00_3425;

				obj_t BgL_sz00_3426;

				{	/* SawMill/defs.scm 19 */
					BgL_rtl_funz00_bglt BgL_auxz00_10578;

					BgL_oz00_3425 = (BgL_rtl_funz00_bglt) (BgL_oz00_6556);
					BgL_sz00_3426 = BgL_sz00_6557;
					{	/* SawMill/defs.scm 19 */
						obj_t BgL_arg5610z00_3429;

						BgL_arg5610z00_3429 = STRUCT_REF(BgL_sz00_3426, (int) (((long) 0)));
						{	/* SawMill/defs.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_10581;

							BgL_auxz00_10581 = (BgL_objectz00_bglt) (BgL_oz00_3425);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10581, BgL_arg5610z00_3429);
					}}
					{
						obj_t BgL_auxz00_10584;

						BgL_auxz00_10584 = STRUCT_REF(BgL_sz00_3426, (int) (((long) 1)));
						((((BgL_rtl_funz00_bglt) CREF(BgL_oz00_3425))->BgL_locz00) =
							((obj_t) BgL_auxz00_10584), BUNSPEC);
					}
					BgL_auxz00_10578 = BgL_oz00_3425;
					return (obj_t) (BgL_auxz00_10578);
				}
			}
		}
	}



/* object->struct-rtl_f4794 */
	obj_t BGl_objectzd2ze3structzd2rtl_f4794ze3zzsaw_defsz00(obj_t
		BgL_envz00_6558, obj_t BgL_obj3315z00_6559)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 19 */
			{
				BgL_rtl_funz00_bglt BgL_obj3315z00_3417;

				BgL_obj3315z00_3417 = (BgL_rtl_funz00_bglt) (BgL_obj3315z00_6559);
				{	/* SawMill/defs.scm 19 */
					obj_t BgL_res3316z00_3420;

					{	/* SawMill/defs.scm 19 */
						obj_t BgL_keyz00_5872;

						BgL_keyz00_5872 = CNST_TABLE_REF(((long) 2));
						BgL_res3316z00_3420 =
							make_struct(BgL_keyz00_5872, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 19 */
						int BgL_auxz00_10593;

						BgL_auxz00_10593 = (int) (((long) 0));
						STRUCT_SET(BgL_res3316z00_3420, BgL_auxz00_10593, BFALSE);
					}
					{	/* SawMill/defs.scm 19 */
						obj_t BgL_arg5608z00_3422;

						BgL_arg5608z00_3422 =
							(((BgL_rtl_funz00_bglt) CREF(BgL_obj3315z00_3417))->BgL_locz00);
						{	/* SawMill/defs.scm 19 */
							int BgL_auxz00_10597;

							BgL_auxz00_10597 = (int) (((long) 1));
							STRUCT_SET(BgL_res3316z00_3420, BgL_auxz00_10597,
								BgL_arg5608z00_3422);
					}}
					return BgL_res3316z00_3420;
				}
			}
		}
	}



/* struct+object->objec4792 */
	obj_t BGl_structzb2objectzd2ze3objec4792z83zzsaw_defsz00(obj_t
		BgL_envz00_6560, obj_t BgL_oz00_6561, obj_t BgL_sz00_6562)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{
				BgL_rtl_lastz00_bglt BgL_oz00_3409;

				obj_t BgL_sz00_3410;

				{	/* SawMill/defs.scm 21 */
					BgL_rtl_lastz00_bglt BgL_auxz00_10601;

					BgL_oz00_3409 = (BgL_rtl_lastz00_bglt) (BgL_oz00_6561);
					BgL_sz00_3410 = BgL_sz00_6562;
					{	/* SawMill/defs.scm 21 */
						obj_t BgL_arg5605z00_3413;

						BgL_arg5605z00_3413 = STRUCT_REF(BgL_sz00_3410, (int) (((long) 0)));
						{	/* SawMill/defs.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_10604;

							BgL_auxz00_10604 = (BgL_objectz00_bglt) (BgL_oz00_3409);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10604, BgL_arg5605z00_3413);
					}}
					{
						obj_t BgL_auxz00_10607;

						BgL_auxz00_10607 = STRUCT_REF(BgL_sz00_3410, (int) (((long) 1)));
						((((BgL_rtl_lastz00_bglt) CREF(BgL_oz00_3409))->BgL_locz00) =
							((obj_t) BgL_auxz00_10607), BUNSPEC);
					}
					BgL_auxz00_10601 = BgL_oz00_3409;
					return (obj_t) (BgL_auxz00_10601);
				}
			}
		}
	}



/* object->struct-rtl_l4790 */
	obj_t BGl_objectzd2ze3structzd2rtl_l4790ze3zzsaw_defsz00(obj_t
		BgL_envz00_6563, obj_t BgL_obj3334z00_6564)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 21 */
			{
				BgL_rtl_lastz00_bglt BgL_obj3334z00_3401;

				BgL_obj3334z00_3401 = (BgL_rtl_lastz00_bglt) (BgL_obj3334z00_6564);
				{	/* SawMill/defs.scm 21 */
					obj_t BgL_res3335z00_3404;

					{	/* SawMill/defs.scm 21 */
						obj_t BgL_keyz00_5858;

						BgL_keyz00_5858 = CNST_TABLE_REF(((long) 3));
						BgL_res3335z00_3404 =
							make_struct(BgL_keyz00_5858, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 21 */
						int BgL_auxz00_10616;

						BgL_auxz00_10616 = (int) (((long) 0));
						STRUCT_SET(BgL_res3335z00_3404, BgL_auxz00_10616, BFALSE);
					}
					{	/* SawMill/defs.scm 21 */
						obj_t BgL_arg5603z00_3406;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10619;

							BgL_auxz00_10619 = (BgL_rtl_funz00_bglt) (BgL_obj3334z00_3401);
							BgL_arg5603z00_3406 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10619))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 21 */
							int BgL_auxz00_10622;

							BgL_auxz00_10622 = (int) (((long) 1));
							STRUCT_SET(BgL_res3335z00_3404, BgL_auxz00_10622,
								BgL_arg5603z00_3406);
					}}
					return BgL_res3335z00_3404;
				}
			}
		}
	}



/* struct+object->objec4788 */
	obj_t BGl_structzb2objectzd2ze3objec4788z83zzsaw_defsz00(obj_t
		BgL_envz00_6565, obj_t BgL_oz00_6566, obj_t BgL_sz00_6567)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{
				BgL_rtl_returnz00_bglt BgL_oz00_3392;

				obj_t BgL_sz00_3393;

				{	/* SawMill/defs.scm 22 */
					BgL_rtl_returnz00_bglt BgL_auxz00_10626;

					BgL_oz00_3392 = (BgL_rtl_returnz00_bglt) (BgL_oz00_6566);
					BgL_sz00_3393 = BgL_sz00_6567;
					{	/* SawMill/defs.scm 22 */
						obj_t BgL_arg5600z00_3396;

						BgL_arg5600z00_3396 = STRUCT_REF(BgL_sz00_3393, (int) (((long) 0)));
						{	/* SawMill/defs.scm 22 */
							BgL_objectz00_bglt BgL_auxz00_10629;

							BgL_auxz00_10629 = (BgL_objectz00_bglt) (BgL_oz00_3392);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10629, BgL_arg5600z00_3396);
					}}
					{
						obj_t BgL_auxz00_10632;

						BgL_auxz00_10632 = STRUCT_REF(BgL_sz00_3393, (int) (((long) 1)));
						((((BgL_rtl_returnz00_bglt) CREF(BgL_oz00_3392))->BgL_locz00) =
							((obj_t) BgL_auxz00_10632), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_10636;

						BgL_auxz00_10636 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3393,
								(int) (((long) 2))));
						((((BgL_rtl_returnz00_bglt) CREF(BgL_oz00_3392))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_10636), BUNSPEC);
					}
					BgL_auxz00_10626 = BgL_oz00_3392;
					return (obj_t) (BgL_auxz00_10626);
				}
			}
		}
	}



/* object->struct-rtl_r4785 */
	obj_t BGl_objectzd2ze3structzd2rtl_r4785ze3zzsaw_defsz00(obj_t
		BgL_envz00_6568, obj_t BgL_obj3358z00_6569)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 22 */
			{
				BgL_rtl_returnz00_bglt BgL_obj3358z00_3382;

				BgL_obj3358z00_3382 = (BgL_rtl_returnz00_bglt) (BgL_obj3358z00_6569);
				{	/* SawMill/defs.scm 22 */
					obj_t BgL_res3359z00_3385;

					{	/* SawMill/defs.scm 22 */
						obj_t BgL_keyz00_5838;

						BgL_keyz00_5838 = CNST_TABLE_REF(((long) 4));
						BgL_res3359z00_3385 =
							make_struct(BgL_keyz00_5838, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 22 */
						int BgL_auxz00_10646;

						BgL_auxz00_10646 = (int) (((long) 0));
						STRUCT_SET(BgL_res3359z00_3385, BgL_auxz00_10646, BFALSE);
					}
					{	/* SawMill/defs.scm 22 */
						obj_t BgL_arg5596z00_3387;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10649;

							BgL_auxz00_10649 = (BgL_rtl_funz00_bglt) (BgL_obj3358z00_3382);
							BgL_arg5596z00_3387 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10649))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 22 */
							int BgL_auxz00_10652;

							BgL_auxz00_10652 = (int) (((long) 1));
							STRUCT_SET(BgL_res3359z00_3385, BgL_auxz00_10652,
								BgL_arg5596z00_3387);
					}}
					{	/* SawMill/defs.scm 22 */
						BgL_typez00_bglt BgL_arg5598z00_3389;

						BgL_arg5598z00_3389 =
							(((BgL_rtl_returnz00_bglt) CREF(BgL_obj3358z00_3382))->
							BgL_typez00);
						{	/* SawMill/defs.scm 22 */
							obj_t BgL_auxz00_10658;

							int BgL_auxz00_10656;

							BgL_auxz00_10658 = (obj_t) (BgL_arg5598z00_3389);
							BgL_auxz00_10656 = (int) (((long) 2));
							STRUCT_SET(BgL_res3359z00_3385, BgL_auxz00_10656,
								BgL_auxz00_10658);
					}}
					return BgL_res3359z00_3385;
				}
			}
		}
	}



/* struct+object->objec4783 */
	obj_t BGl_structzb2objectzd2ze3objec4783z83zzsaw_defsz00(obj_t
		BgL_envz00_6570, obj_t BgL_oz00_6571, obj_t BgL_sz00_6572)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{
				BgL_rtl_jumpexitz00_bglt BgL_oz00_3374;

				obj_t BgL_sz00_3375;

				{	/* SawMill/defs.scm 23 */
					BgL_rtl_jumpexitz00_bglt BgL_auxz00_10662;

					BgL_oz00_3374 = (BgL_rtl_jumpexitz00_bglt) (BgL_oz00_6571);
					BgL_sz00_3375 = BgL_sz00_6572;
					{	/* SawMill/defs.scm 23 */
						obj_t BgL_arg5593z00_3378;

						BgL_arg5593z00_3378 = STRUCT_REF(BgL_sz00_3375, (int) (((long) 0)));
						{	/* SawMill/defs.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_10665;

							BgL_auxz00_10665 = (BgL_objectz00_bglt) (BgL_oz00_3374);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10665, BgL_arg5593z00_3378);
					}}
					{
						obj_t BgL_auxz00_10668;

						BgL_auxz00_10668 = STRUCT_REF(BgL_sz00_3375, (int) (((long) 1)));
						((((BgL_rtl_jumpexitz00_bglt) CREF(BgL_oz00_3374))->BgL_locz00) =
							((obj_t) BgL_auxz00_10668), BUNSPEC);
					}
					BgL_auxz00_10662 = BgL_oz00_3374;
					return (obj_t) (BgL_auxz00_10662);
				}
			}
		}
	}



/* object->struct-rtl_j4781 */
	obj_t BGl_objectzd2ze3structzd2rtl_j4781ze3zzsaw_defsz00(obj_t
		BgL_envz00_6573, obj_t BgL_obj3380z00_6574)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 23 */
			{
				BgL_rtl_jumpexitz00_bglt BgL_obj3380z00_3366;

				BgL_obj3380z00_3366 = (BgL_rtl_jumpexitz00_bglt) (BgL_obj3380z00_6574);
				{	/* SawMill/defs.scm 23 */
					obj_t BgL_res3381z00_3369;

					{	/* SawMill/defs.scm 23 */
						obj_t BgL_keyz00_5824;

						BgL_keyz00_5824 = CNST_TABLE_REF(((long) 5));
						BgL_res3381z00_3369 =
							make_struct(BgL_keyz00_5824, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 23 */
						int BgL_auxz00_10677;

						BgL_auxz00_10677 = (int) (((long) 0));
						STRUCT_SET(BgL_res3381z00_3369, BgL_auxz00_10677, BFALSE);
					}
					{	/* SawMill/defs.scm 23 */
						obj_t BgL_arg5591z00_3371;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10680;

							BgL_auxz00_10680 = (BgL_rtl_funz00_bglt) (BgL_obj3380z00_3366);
							BgL_arg5591z00_3371 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10680))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 23 */
							int BgL_auxz00_10683;

							BgL_auxz00_10683 = (int) (((long) 1));
							STRUCT_SET(BgL_res3381z00_3369, BgL_auxz00_10683,
								BgL_arg5591z00_3371);
					}}
					return BgL_res3381z00_3369;
				}
			}
		}
	}



/* struct+object->objec4779 */
	obj_t BGl_structzb2objectzd2ze3objec4779z83zzsaw_defsz00(obj_t
		BgL_envz00_6575, obj_t BgL_oz00_6576, obj_t BgL_sz00_6577)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{
				BgL_rtl_failz00_bglt BgL_oz00_3358;

				obj_t BgL_sz00_3359;

				{	/* SawMill/defs.scm 24 */
					BgL_rtl_failz00_bglt BgL_auxz00_10687;

					BgL_oz00_3358 = (BgL_rtl_failz00_bglt) (BgL_oz00_6576);
					BgL_sz00_3359 = BgL_sz00_6577;
					{	/* SawMill/defs.scm 24 */
						obj_t BgL_arg5588z00_3362;

						BgL_arg5588z00_3362 = STRUCT_REF(BgL_sz00_3359, (int) (((long) 0)));
						{	/* SawMill/defs.scm 24 */
							BgL_objectz00_bglt BgL_auxz00_10690;

							BgL_auxz00_10690 = (BgL_objectz00_bglt) (BgL_oz00_3358);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10690, BgL_arg5588z00_3362);
					}}
					{
						obj_t BgL_auxz00_10693;

						BgL_auxz00_10693 = STRUCT_REF(BgL_sz00_3359, (int) (((long) 1)));
						((((BgL_rtl_failz00_bglt) CREF(BgL_oz00_3358))->BgL_locz00) =
							((obj_t) BgL_auxz00_10693), BUNSPEC);
					}
					BgL_auxz00_10687 = BgL_oz00_3358;
					return (obj_t) (BgL_auxz00_10687);
				}
			}
		}
	}



/* object->struct-rtl_f4777 */
	obj_t BGl_objectzd2ze3structzd2rtl_f4777ze3zzsaw_defsz00(obj_t
		BgL_envz00_6578, obj_t BgL_obj3398z00_6579)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 24 */
			{
				BgL_rtl_failz00_bglt BgL_obj3398z00_3350;

				BgL_obj3398z00_3350 = (BgL_rtl_failz00_bglt) (BgL_obj3398z00_6579);
				{	/* SawMill/defs.scm 24 */
					obj_t BgL_res3399z00_3353;

					{	/* SawMill/defs.scm 24 */
						obj_t BgL_keyz00_5810;

						BgL_keyz00_5810 = CNST_TABLE_REF(((long) 6));
						BgL_res3399z00_3353 =
							make_struct(BgL_keyz00_5810, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 24 */
						int BgL_auxz00_10702;

						BgL_auxz00_10702 = (int) (((long) 0));
						STRUCT_SET(BgL_res3399z00_3353, BgL_auxz00_10702, BFALSE);
					}
					{	/* SawMill/defs.scm 24 */
						obj_t BgL_arg5586z00_3355;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10705;

							BgL_auxz00_10705 = (BgL_rtl_funz00_bglt) (BgL_obj3398z00_3350);
							BgL_arg5586z00_3355 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10705))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 24 */
							int BgL_auxz00_10708;

							BgL_auxz00_10708 = (int) (((long) 1));
							STRUCT_SET(BgL_res3399z00_3353, BgL_auxz00_10708,
								BgL_arg5586z00_3355);
					}}
					return BgL_res3399z00_3353;
				}
			}
		}
	}



/* struct+object->objec4775 */
	obj_t BGl_structzb2objectzd2ze3objec4775z83zzsaw_defsz00(obj_t
		BgL_envz00_6580, obj_t BgL_oz00_6581, obj_t BgL_sz00_6582)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{
				BgL_rtl_notseqz00_bglt BgL_oz00_3342;

				obj_t BgL_sz00_3343;

				{	/* SawMill/defs.scm 26 */
					BgL_rtl_notseqz00_bglt BgL_auxz00_10712;

					BgL_oz00_3342 = (BgL_rtl_notseqz00_bglt) (BgL_oz00_6581);
					BgL_sz00_3343 = BgL_sz00_6582;
					{	/* SawMill/defs.scm 26 */
						obj_t BgL_arg5583z00_3346;

						BgL_arg5583z00_3346 = STRUCT_REF(BgL_sz00_3343, (int) (((long) 0)));
						{	/* SawMill/defs.scm 26 */
							BgL_objectz00_bglt BgL_auxz00_10715;

							BgL_auxz00_10715 = (BgL_objectz00_bglt) (BgL_oz00_3342);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10715, BgL_arg5583z00_3346);
					}}
					{
						obj_t BgL_auxz00_10718;

						BgL_auxz00_10718 = STRUCT_REF(BgL_sz00_3343, (int) (((long) 1)));
						((((BgL_rtl_notseqz00_bglt) CREF(BgL_oz00_3342))->BgL_locz00) =
							((obj_t) BgL_auxz00_10718), BUNSPEC);
					}
					BgL_auxz00_10712 = BgL_oz00_3342;
					return (obj_t) (BgL_auxz00_10712);
				}
			}
		}
	}



/* object->struct-rtl_n4773 */
	obj_t BGl_objectzd2ze3structzd2rtl_n4773ze3zzsaw_defsz00(obj_t
		BgL_envz00_6583, obj_t BgL_obj3416z00_6584)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 26 */
			{
				BgL_rtl_notseqz00_bglt BgL_obj3416z00_3334;

				BgL_obj3416z00_3334 = (BgL_rtl_notseqz00_bglt) (BgL_obj3416z00_6584);
				{	/* SawMill/defs.scm 26 */
					obj_t BgL_res3417z00_3337;

					{	/* SawMill/defs.scm 26 */
						obj_t BgL_keyz00_5796;

						BgL_keyz00_5796 = CNST_TABLE_REF(((long) 7));
						BgL_res3417z00_3337 =
							make_struct(BgL_keyz00_5796, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 26 */
						int BgL_auxz00_10727;

						BgL_auxz00_10727 = (int) (((long) 0));
						STRUCT_SET(BgL_res3417z00_3337, BgL_auxz00_10727, BFALSE);
					}
					{	/* SawMill/defs.scm 26 */
						obj_t BgL_arg5581z00_3339;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10730;

							BgL_auxz00_10730 = (BgL_rtl_funz00_bglt) (BgL_obj3416z00_3334);
							BgL_arg5581z00_3339 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10730))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 26 */
							int BgL_auxz00_10733;

							BgL_auxz00_10733 = (int) (((long) 1));
							STRUCT_SET(BgL_res3417z00_3337, BgL_auxz00_10733,
								BgL_arg5581z00_3339);
					}}
					return BgL_res3417z00_3337;
				}
			}
		}
	}



/* struct+object->objec4771 */
	obj_t BGl_structzb2objectzd2ze3objec4771z83zzsaw_defsz00(obj_t
		BgL_envz00_6585, obj_t BgL_oz00_6586, obj_t BgL_sz00_6587)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{
				BgL_rtl_ifz00_bglt BgL_oz00_3326;

				obj_t BgL_sz00_3327;

				{	/* SawMill/defs.scm 27 */
					BgL_rtl_ifz00_bglt BgL_auxz00_10737;

					BgL_oz00_3326 = (BgL_rtl_ifz00_bglt) (BgL_oz00_6586);
					BgL_sz00_3327 = BgL_sz00_6587;
					{	/* SawMill/defs.scm 27 */
						obj_t BgL_arg5578z00_3330;

						BgL_arg5578z00_3330 = STRUCT_REF(BgL_sz00_3327, (int) (((long) 0)));
						{	/* SawMill/defs.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_10740;

							BgL_auxz00_10740 = (BgL_objectz00_bglt) (BgL_oz00_3326);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10740, BgL_arg5578z00_3330);
					}}
					{
						obj_t BgL_auxz00_10743;

						BgL_auxz00_10743 = STRUCT_REF(BgL_sz00_3327, (int) (((long) 1)));
						((((BgL_rtl_ifz00_bglt) CREF(BgL_oz00_3326))->BgL_locz00) =
							((obj_t) BgL_auxz00_10743), BUNSPEC);
					}
					BgL_auxz00_10737 = BgL_oz00_3326;
					return (obj_t) (BgL_auxz00_10737);
				}
			}
		}
	}



/* object->struct-rtl_i4768 */
	obj_t BGl_objectzd2ze3structzd2rtl_i4768ze3zzsaw_defsz00(obj_t
		BgL_envz00_6588, obj_t BgL_obj3434z00_6589)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 27 */
			{
				BgL_rtl_ifz00_bglt BgL_obj3434z00_3318;

				BgL_obj3434z00_3318 = (BgL_rtl_ifz00_bglt) (BgL_obj3434z00_6589);
				{	/* SawMill/defs.scm 27 */
					obj_t BgL_res3435z00_3321;

					{	/* SawMill/defs.scm 27 */
						obj_t BgL_keyz00_5782;

						BgL_keyz00_5782 = CNST_TABLE_REF(((long) 8));
						BgL_res3435z00_3321 =
							make_struct(BgL_keyz00_5782, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 27 */
						int BgL_auxz00_10752;

						BgL_auxz00_10752 = (int) (((long) 0));
						STRUCT_SET(BgL_res3435z00_3321, BgL_auxz00_10752, BFALSE);
					}
					{	/* SawMill/defs.scm 27 */
						obj_t BgL_arg5576z00_3323;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10755;

							BgL_auxz00_10755 = (BgL_rtl_funz00_bglt) (BgL_obj3434z00_3318);
							BgL_arg5576z00_3323 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10755))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 27 */
							int BgL_auxz00_10758;

							BgL_auxz00_10758 = (int) (((long) 1));
							STRUCT_SET(BgL_res3435z00_3321, BgL_auxz00_10758,
								BgL_arg5576z00_3323);
					}}
					return BgL_res3435z00_3321;
				}
			}
		}
	}



/* struct+object->objec4766 */
	obj_t BGl_structzb2objectzd2ze3objec4766z83zzsaw_defsz00(obj_t
		BgL_envz00_6590, obj_t BgL_oz00_6591, obj_t BgL_sz00_6592)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{
				BgL_rtl_selectz00_bglt BgL_oz00_3308;

				obj_t BgL_sz00_3309;

				{	/* SawMill/defs.scm 28 */
					BgL_rtl_selectz00_bglt BgL_auxz00_10762;

					BgL_oz00_3308 = (BgL_rtl_selectz00_bglt) (BgL_oz00_6591);
					BgL_sz00_3309 = BgL_sz00_6592;
					{	/* SawMill/defs.scm 28 */
						obj_t BgL_arg5573z00_3312;

						BgL_arg5573z00_3312 = STRUCT_REF(BgL_sz00_3309, (int) (((long) 0)));
						{	/* SawMill/defs.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_10765;

							BgL_auxz00_10765 = (BgL_objectz00_bglt) (BgL_oz00_3308);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10765, BgL_arg5573z00_3312);
					}}
					{
						obj_t BgL_auxz00_10768;

						BgL_auxz00_10768 = STRUCT_REF(BgL_sz00_3309, (int) (((long) 1)));
						((((BgL_rtl_selectz00_bglt) CREF(BgL_oz00_3308))->BgL_locz00) =
							((obj_t) BgL_auxz00_10768), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_10772;

						BgL_auxz00_10772 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3309,
								(int) (((long) 2))));
						((((BgL_rtl_selectz00_bglt) CREF(BgL_oz00_3308))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_10772), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10777;

						BgL_auxz00_10777 = STRUCT_REF(BgL_sz00_3309, (int) (((long) 3)));
						((((BgL_rtl_selectz00_bglt) CREF(BgL_oz00_3308))->BgL_patternsz00) =
							((obj_t) BgL_auxz00_10777), BUNSPEC);
					}
					BgL_auxz00_10762 = BgL_oz00_3308;
					return (obj_t) (BgL_auxz00_10762);
				}
			}
		}
	}



/* object->struct-rtl_s4764 */
	obj_t BGl_objectzd2ze3structzd2rtl_s4764ze3zzsaw_defsz00(obj_t
		BgL_envz00_6593, obj_t BgL_obj3466z00_6594)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 28 */
			{
				BgL_rtl_selectz00_bglt BgL_obj3466z00_3296;

				BgL_obj3466z00_3296 = (BgL_rtl_selectz00_bglt) (BgL_obj3466z00_6594);
				{	/* SawMill/defs.scm 28 */
					obj_t BgL_res3467z00_3299;

					{	/* SawMill/defs.scm 28 */
						obj_t BgL_keyz00_5756;

						BgL_keyz00_5756 = CNST_TABLE_REF(((long) 9));
						BgL_res3467z00_3299 =
							make_struct(BgL_keyz00_5756, (int) (((long) 4)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 28 */
						int BgL_auxz00_10786;

						BgL_auxz00_10786 = (int) (((long) 0));
						STRUCT_SET(BgL_res3467z00_3299, BgL_auxz00_10786, BFALSE);
					}
					{	/* SawMill/defs.scm 28 */
						obj_t BgL_arg5567z00_3301;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10789;

							BgL_auxz00_10789 = (BgL_rtl_funz00_bglt) (BgL_obj3466z00_3296);
							BgL_arg5567z00_3301 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10789))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 28 */
							int BgL_auxz00_10792;

							BgL_auxz00_10792 = (int) (((long) 1));
							STRUCT_SET(BgL_res3467z00_3299, BgL_auxz00_10792,
								BgL_arg5567z00_3301);
					}}
					{	/* SawMill/defs.scm 28 */
						BgL_typez00_bglt BgL_arg5569z00_3303;

						BgL_arg5569z00_3303 =
							(((BgL_rtl_selectz00_bglt) CREF(BgL_obj3466z00_3296))->
							BgL_typez00);
						{	/* SawMill/defs.scm 28 */
							obj_t BgL_auxz00_10798;

							int BgL_auxz00_10796;

							BgL_auxz00_10798 = (obj_t) (BgL_arg5569z00_3303);
							BgL_auxz00_10796 = (int) (((long) 2));
							STRUCT_SET(BgL_res3467z00_3299, BgL_auxz00_10796,
								BgL_auxz00_10798);
					}}
					{	/* SawMill/defs.scm 28 */
						obj_t BgL_arg5571z00_3305;

						BgL_arg5571z00_3305 =
							(((BgL_rtl_selectz00_bglt) CREF(BgL_obj3466z00_3296))->
							BgL_patternsz00);
						{	/* SawMill/defs.scm 28 */
							int BgL_auxz00_10802;

							BgL_auxz00_10802 = (int) (((long) 3));
							STRUCT_SET(BgL_res3467z00_3299, BgL_auxz00_10802,
								BgL_arg5571z00_3305);
					}}
					return BgL_res3467z00_3299;
				}
			}
		}
	}



/* struct+object->objec4762 */
	obj_t BGl_structzb2objectzd2ze3objec4762z83zzsaw_defsz00(obj_t
		BgL_envz00_6595, obj_t BgL_oz00_6596, obj_t BgL_sz00_6597)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{
				BgL_rtl_switchz00_bglt BgL_oz00_3285;

				obj_t BgL_sz00_3286;

				{	/* SawMill/defs.scm 29 */
					BgL_rtl_switchz00_bglt BgL_auxz00_10806;

					BgL_oz00_3285 = (BgL_rtl_switchz00_bglt) (BgL_oz00_6596);
					BgL_sz00_3286 = BgL_sz00_6597;
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg5564z00_3289;

						BgL_arg5564z00_3289 = STRUCT_REF(BgL_sz00_3286, (int) (((long) 0)));
						{	/* SawMill/defs.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_10809;

							BgL_auxz00_10809 = (BgL_objectz00_bglt) (BgL_oz00_3285);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10809, BgL_arg5564z00_3289);
					}}
					{
						obj_t BgL_auxz00_10812;

						BgL_auxz00_10812 = STRUCT_REF(BgL_sz00_3286, (int) (((long) 1)));
						((((BgL_rtl_switchz00_bglt) CREF(BgL_oz00_3285))->BgL_locz00) =
							((obj_t) BgL_auxz00_10812), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_10816;

						BgL_auxz00_10816 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3286,
								(int) (((long) 2))));
						((((BgL_rtl_switchz00_bglt) CREF(BgL_oz00_3285))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_10816), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10821;

						BgL_auxz00_10821 = STRUCT_REF(BgL_sz00_3286, (int) (((long) 3)));
						((((BgL_rtl_switchz00_bglt) CREF(BgL_oz00_3285))->BgL_patternsz00) =
							((obj_t) BgL_auxz00_10821), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_10825;

						BgL_auxz00_10825 = STRUCT_REF(BgL_sz00_3286, (int) (((long) 4)));
						((((BgL_rtl_switchz00_bglt) CREF(BgL_oz00_3285))->BgL_labelsz00) =
							((obj_t) BgL_auxz00_10825), BUNSPEC);
					}
					BgL_auxz00_10806 = BgL_oz00_3285;
					return (obj_t) (BgL_auxz00_10806);
				}
			}
		}
	}



/* object->struct-rtl_s4760 */
	obj_t BGl_objectzd2ze3structzd2rtl_s4760ze3zzsaw_defsz00(obj_t
		BgL_envz00_6598, obj_t BgL_obj3510z00_6599)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 29 */
			{
				BgL_rtl_switchz00_bglt BgL_obj3510z00_3271;

				BgL_obj3510z00_3271 = (BgL_rtl_switchz00_bglt) (BgL_obj3510z00_6599);
				{	/* SawMill/defs.scm 29 */
					obj_t BgL_res3511z00_3274;

					{	/* SawMill/defs.scm 29 */
						obj_t BgL_keyz00_5724;

						BgL_keyz00_5724 = CNST_TABLE_REF(((long) 10));
						BgL_res3511z00_3274 =
							make_struct(BgL_keyz00_5724, (int) (((long) 5)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 29 */
						int BgL_auxz00_10834;

						BgL_auxz00_10834 = (int) (((long) 0));
						STRUCT_SET(BgL_res3511z00_3274, BgL_auxz00_10834, BFALSE);
					}
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg5556z00_3276;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10837;

							BgL_auxz00_10837 = (BgL_rtl_funz00_bglt) (BgL_obj3510z00_3271);
							BgL_arg5556z00_3276 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10837))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 29 */
							int BgL_auxz00_10840;

							BgL_auxz00_10840 = (int) (((long) 1));
							STRUCT_SET(BgL_res3511z00_3274, BgL_auxz00_10840,
								BgL_arg5556z00_3276);
					}}
					{	/* SawMill/defs.scm 29 */
						BgL_typez00_bglt BgL_arg5558z00_3278;

						{
							BgL_rtl_selectz00_bglt BgL_auxz00_10843;

							BgL_auxz00_10843 = (BgL_rtl_selectz00_bglt) (BgL_obj3510z00_3271);
							BgL_arg5558z00_3278 =
								(((BgL_rtl_selectz00_bglt) CREF(BgL_auxz00_10843))->
								BgL_typez00);
						}
						{	/* SawMill/defs.scm 29 */
							obj_t BgL_auxz00_10848;

							int BgL_auxz00_10846;

							BgL_auxz00_10848 = (obj_t) (BgL_arg5558z00_3278);
							BgL_auxz00_10846 = (int) (((long) 2));
							STRUCT_SET(BgL_res3511z00_3274, BgL_auxz00_10846,
								BgL_auxz00_10848);
					}}
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg5560z00_3280;

						{
							BgL_rtl_selectz00_bglt BgL_auxz00_10851;

							BgL_auxz00_10851 = (BgL_rtl_selectz00_bglt) (BgL_obj3510z00_3271);
							BgL_arg5560z00_3280 =
								(((BgL_rtl_selectz00_bglt) CREF(BgL_auxz00_10851))->
								BgL_patternsz00);
						}
						{	/* SawMill/defs.scm 29 */
							int BgL_auxz00_10854;

							BgL_auxz00_10854 = (int) (((long) 3));
							STRUCT_SET(BgL_res3511z00_3274, BgL_auxz00_10854,
								BgL_arg5560z00_3280);
					}}
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg5562z00_3282;

						BgL_arg5562z00_3282 =
							(((BgL_rtl_switchz00_bglt) CREF(BgL_obj3510z00_3271))->
							BgL_labelsz00);
						{	/* SawMill/defs.scm 29 */
							int BgL_auxz00_10858;

							BgL_auxz00_10858 = (int) (((long) 4));
							STRUCT_SET(BgL_res3511z00_3274, BgL_auxz00_10858,
								BgL_arg5562z00_3282);
					}}
					return BgL_res3511z00_3274;
				}
			}
		}
	}



/* struct+object->objec4758 */
	obj_t BGl_structzb2objectzd2ze3objec4758z83zzsaw_defsz00(obj_t
		BgL_envz00_6600, obj_t BgL_oz00_6601, obj_t BgL_sz00_6602)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{
				BgL_rtl_ifeqz00_bglt BgL_oz00_3262;

				obj_t BgL_sz00_3263;

				{	/* SawMill/defs.scm 30 */
					BgL_rtl_ifeqz00_bglt BgL_auxz00_10862;

					BgL_oz00_3262 = (BgL_rtl_ifeqz00_bglt) (BgL_oz00_6601);
					BgL_sz00_3263 = BgL_sz00_6602;
					{	/* SawMill/defs.scm 30 */
						obj_t BgL_arg5553z00_3266;

						BgL_arg5553z00_3266 = STRUCT_REF(BgL_sz00_3263, (int) (((long) 0)));
						{	/* SawMill/defs.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_10865;

							BgL_auxz00_10865 = (BgL_objectz00_bglt) (BgL_oz00_3262);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10865, BgL_arg5553z00_3266);
					}}
					{
						obj_t BgL_auxz00_10868;

						BgL_auxz00_10868 = STRUCT_REF(BgL_sz00_3263, (int) (((long) 1)));
						((((BgL_rtl_ifeqz00_bglt) CREF(BgL_oz00_3262))->BgL_locz00) =
							((obj_t) BgL_auxz00_10868), BUNSPEC);
					}
					{
						BgL_blockz00_bglt BgL_auxz00_10872;

						BgL_auxz00_10872 =
							(BgL_blockz00_bglt) (STRUCT_REF(BgL_sz00_3263,
								(int) (((long) 2))));
						((((BgL_rtl_ifeqz00_bglt) CREF(BgL_oz00_3262))->BgL_thenz00) =
							((BgL_blockz00_bglt) BgL_auxz00_10872), BUNSPEC);
					}
					BgL_auxz00_10862 = BgL_oz00_3262;
					return (obj_t) (BgL_auxz00_10862);
				}
			}
		}
	}



/* object->struct-rtl_i4756 */
	obj_t BGl_objectzd2ze3structzd2rtl_i4756ze3zzsaw_defsz00(obj_t
		BgL_envz00_6603, obj_t BgL_obj3546z00_6604)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 30 */
			{
				BgL_rtl_ifeqz00_bglt BgL_obj3546z00_3252;

				BgL_obj3546z00_3252 = (BgL_rtl_ifeqz00_bglt) (BgL_obj3546z00_6604);
				{	/* SawMill/defs.scm 30 */
					obj_t BgL_res3547z00_3255;

					{	/* SawMill/defs.scm 30 */
						obj_t BgL_keyz00_5704;

						BgL_keyz00_5704 = CNST_TABLE_REF(((long) 11));
						BgL_res3547z00_3255 =
							make_struct(BgL_keyz00_5704, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 30 */
						int BgL_auxz00_10882;

						BgL_auxz00_10882 = (int) (((long) 0));
						STRUCT_SET(BgL_res3547z00_3255, BgL_auxz00_10882, BFALSE);
					}
					{	/* SawMill/defs.scm 30 */
						obj_t BgL_arg5549z00_3257;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10885;

							BgL_auxz00_10885 = (BgL_rtl_funz00_bglt) (BgL_obj3546z00_3252);
							BgL_arg5549z00_3257 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10885))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 30 */
							int BgL_auxz00_10888;

							BgL_auxz00_10888 = (int) (((long) 1));
							STRUCT_SET(BgL_res3547z00_3255, BgL_auxz00_10888,
								BgL_arg5549z00_3257);
					}}
					{	/* SawMill/defs.scm 30 */
						BgL_blockz00_bglt BgL_arg5551z00_3259;

						BgL_arg5551z00_3259 =
							(((BgL_rtl_ifeqz00_bglt) CREF(BgL_obj3546z00_3252))->BgL_thenz00);
						{	/* SawMill/defs.scm 30 */
							obj_t BgL_auxz00_10894;

							int BgL_auxz00_10892;

							BgL_auxz00_10894 = (obj_t) (BgL_arg5551z00_3259);
							BgL_auxz00_10892 = (int) (((long) 2));
							STRUCT_SET(BgL_res3547z00_3255, BgL_auxz00_10892,
								BgL_auxz00_10894);
					}}
					return BgL_res3547z00_3255;
				}
			}
		}
	}



/* struct+object->objec4754 */
	obj_t BGl_structzb2objectzd2ze3objec4754z83zzsaw_defsz00(obj_t
		BgL_envz00_6605, obj_t BgL_oz00_6606, obj_t BgL_sz00_6607)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{
				BgL_rtl_ifnez00_bglt BgL_oz00_3243;

				obj_t BgL_sz00_3244;

				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifnez00_bglt BgL_auxz00_10898;

					BgL_oz00_3243 = (BgL_rtl_ifnez00_bglt) (BgL_oz00_6606);
					BgL_sz00_3244 = BgL_sz00_6607;
					{	/* SawMill/defs.scm 31 */
						obj_t BgL_arg5546z00_3247;

						BgL_arg5546z00_3247 = STRUCT_REF(BgL_sz00_3244, (int) (((long) 0)));
						{	/* SawMill/defs.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_10901;

							BgL_auxz00_10901 = (BgL_objectz00_bglt) (BgL_oz00_3243);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10901, BgL_arg5546z00_3247);
					}}
					{
						obj_t BgL_auxz00_10904;

						BgL_auxz00_10904 = STRUCT_REF(BgL_sz00_3244, (int) (((long) 1)));
						((((BgL_rtl_ifnez00_bglt) CREF(BgL_oz00_3243))->BgL_locz00) =
							((obj_t) BgL_auxz00_10904), BUNSPEC);
					}
					{
						BgL_blockz00_bglt BgL_auxz00_10908;

						BgL_auxz00_10908 =
							(BgL_blockz00_bglt) (STRUCT_REF(BgL_sz00_3244,
								(int) (((long) 2))));
						((((BgL_rtl_ifnez00_bglt) CREF(BgL_oz00_3243))->BgL_thenz00) =
							((BgL_blockz00_bglt) BgL_auxz00_10908), BUNSPEC);
					}
					BgL_auxz00_10898 = BgL_oz00_3243;
					return (obj_t) (BgL_auxz00_10898);
				}
			}
		}
	}



/* object->struct-rtl_i4752 */
	obj_t BGl_objectzd2ze3structzd2rtl_i4752ze3zzsaw_defsz00(obj_t
		BgL_envz00_6608, obj_t BgL_obj3574z00_6609)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 31 */
			{
				BgL_rtl_ifnez00_bglt BgL_obj3574z00_3233;

				BgL_obj3574z00_3233 = (BgL_rtl_ifnez00_bglt) (BgL_obj3574z00_6609);
				{	/* SawMill/defs.scm 31 */
					obj_t BgL_res3575z00_3236;

					{	/* SawMill/defs.scm 31 */
						obj_t BgL_keyz00_5684;

						BgL_keyz00_5684 = CNST_TABLE_REF(((long) 12));
						BgL_res3575z00_3236 =
							make_struct(BgL_keyz00_5684, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 31 */
						int BgL_auxz00_10918;

						BgL_auxz00_10918 = (int) (((long) 0));
						STRUCT_SET(BgL_res3575z00_3236, BgL_auxz00_10918, BFALSE);
					}
					{	/* SawMill/defs.scm 31 */
						obj_t BgL_arg5542z00_3238;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10921;

							BgL_auxz00_10921 = (BgL_rtl_funz00_bglt) (BgL_obj3574z00_3233);
							BgL_arg5542z00_3238 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10921))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 31 */
							int BgL_auxz00_10924;

							BgL_auxz00_10924 = (int) (((long) 1));
							STRUCT_SET(BgL_res3575z00_3236, BgL_auxz00_10924,
								BgL_arg5542z00_3238);
					}}
					{	/* SawMill/defs.scm 31 */
						BgL_blockz00_bglt BgL_arg5544z00_3240;

						BgL_arg5544z00_3240 =
							(((BgL_rtl_ifnez00_bglt) CREF(BgL_obj3574z00_3233))->BgL_thenz00);
						{	/* SawMill/defs.scm 31 */
							obj_t BgL_auxz00_10930;

							int BgL_auxz00_10928;

							BgL_auxz00_10930 = (obj_t) (BgL_arg5544z00_3240);
							BgL_auxz00_10928 = (int) (((long) 2));
							STRUCT_SET(BgL_res3575z00_3236, BgL_auxz00_10928,
								BgL_auxz00_10930);
					}}
					return BgL_res3575z00_3236;
				}
			}
		}
	}



/* struct+object->objec4750 */
	obj_t BGl_structzb2objectzd2ze3objec4750z83zzsaw_defsz00(obj_t
		BgL_envz00_6610, obj_t BgL_oz00_6611, obj_t BgL_sz00_6612)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{
				BgL_rtl_goz00_bglt BgL_oz00_3224;

				obj_t BgL_sz00_3225;

				{	/* SawMill/defs.scm 32 */
					BgL_rtl_goz00_bglt BgL_auxz00_10934;

					BgL_oz00_3224 = (BgL_rtl_goz00_bglt) (BgL_oz00_6611);
					BgL_sz00_3225 = BgL_sz00_6612;
					{	/* SawMill/defs.scm 32 */
						obj_t BgL_arg5539z00_3228;

						BgL_arg5539z00_3228 = STRUCT_REF(BgL_sz00_3225, (int) (((long) 0)));
						{	/* SawMill/defs.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_10937;

							BgL_auxz00_10937 = (BgL_objectz00_bglt) (BgL_oz00_3224);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10937, BgL_arg5539z00_3228);
					}}
					{
						obj_t BgL_auxz00_10940;

						BgL_auxz00_10940 = STRUCT_REF(BgL_sz00_3225, (int) (((long) 1)));
						((((BgL_rtl_goz00_bglt) CREF(BgL_oz00_3224))->BgL_locz00) =
							((obj_t) BgL_auxz00_10940), BUNSPEC);
					}
					{
						BgL_blockz00_bglt BgL_auxz00_10944;

						BgL_auxz00_10944 =
							(BgL_blockz00_bglt) (STRUCT_REF(BgL_sz00_3225,
								(int) (((long) 2))));
						((((BgL_rtl_goz00_bglt) CREF(BgL_oz00_3224))->BgL_toz00) =
							((BgL_blockz00_bglt) BgL_auxz00_10944), BUNSPEC);
					}
					BgL_auxz00_10934 = BgL_oz00_3224;
					return (obj_t) (BgL_auxz00_10934);
				}
			}
		}
	}



/* object->struct-rtl_g4748 */
	obj_t BGl_objectzd2ze3structzd2rtl_g4748ze3zzsaw_defsz00(obj_t
		BgL_envz00_6613, obj_t BgL_obj3603z00_6614)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 32 */
			{
				BgL_rtl_goz00_bglt BgL_obj3603z00_3214;

				BgL_obj3603z00_3214 = (BgL_rtl_goz00_bglt) (BgL_obj3603z00_6614);
				{	/* SawMill/defs.scm 32 */
					obj_t BgL_res3604z00_3217;

					{	/* SawMill/defs.scm 32 */
						obj_t BgL_keyz00_5664;

						BgL_keyz00_5664 = CNST_TABLE_REF(((long) 13));
						BgL_res3604z00_3217 =
							make_struct(BgL_keyz00_5664, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 32 */
						int BgL_auxz00_10954;

						BgL_auxz00_10954 = (int) (((long) 0));
						STRUCT_SET(BgL_res3604z00_3217, BgL_auxz00_10954, BFALSE);
					}
					{	/* SawMill/defs.scm 32 */
						obj_t BgL_arg5535z00_3219;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10957;

							BgL_auxz00_10957 = (BgL_rtl_funz00_bglt) (BgL_obj3603z00_3214);
							BgL_arg5535z00_3219 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10957))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 32 */
							int BgL_auxz00_10960;

							BgL_auxz00_10960 = (int) (((long) 1));
							STRUCT_SET(BgL_res3604z00_3217, BgL_auxz00_10960,
								BgL_arg5535z00_3219);
					}}
					{	/* SawMill/defs.scm 32 */
						BgL_blockz00_bglt BgL_arg5537z00_3221;

						BgL_arg5537z00_3221 =
							(((BgL_rtl_goz00_bglt) CREF(BgL_obj3603z00_3214))->BgL_toz00);
						{	/* SawMill/defs.scm 32 */
							obj_t BgL_auxz00_10966;

							int BgL_auxz00_10964;

							BgL_auxz00_10966 = (obj_t) (BgL_arg5537z00_3221);
							BgL_auxz00_10964 = (int) (((long) 2));
							STRUCT_SET(BgL_res3604z00_3217, BgL_auxz00_10964,
								BgL_auxz00_10966);
					}}
					return BgL_res3604z00_3217;
				}
			}
		}
	}



/* struct+object->objec4746 */
	obj_t BGl_structzb2objectzd2ze3objec4746z83zzsaw_defsz00(obj_t
		BgL_envz00_6615, obj_t BgL_oz00_6616, obj_t BgL_sz00_6617)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{
				BgL_rtl_purez00_bglt BgL_oz00_3206;

				obj_t BgL_sz00_3207;

				{	/* SawMill/defs.scm 34 */
					BgL_rtl_purez00_bglt BgL_auxz00_10970;

					BgL_oz00_3206 = (BgL_rtl_purez00_bglt) (BgL_oz00_6616);
					BgL_sz00_3207 = BgL_sz00_6617;
					{	/* SawMill/defs.scm 34 */
						obj_t BgL_arg5532z00_3210;

						BgL_arg5532z00_3210 = STRUCT_REF(BgL_sz00_3207, (int) (((long) 0)));
						{	/* SawMill/defs.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_10973;

							BgL_auxz00_10973 = (BgL_objectz00_bglt) (BgL_oz00_3206);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10973, BgL_arg5532z00_3210);
					}}
					{
						obj_t BgL_auxz00_10976;

						BgL_auxz00_10976 = STRUCT_REF(BgL_sz00_3207, (int) (((long) 1)));
						((((BgL_rtl_purez00_bglt) CREF(BgL_oz00_3206))->BgL_locz00) =
							((obj_t) BgL_auxz00_10976), BUNSPEC);
					}
					BgL_auxz00_10970 = BgL_oz00_3206;
					return (obj_t) (BgL_auxz00_10970);
				}
			}
		}
	}



/* object->struct-rtl_p4744 */
	obj_t BGl_objectzd2ze3structzd2rtl_p4744ze3zzsaw_defsz00(obj_t
		BgL_envz00_6618, obj_t BgL_obj3625z00_6619)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 34 */
			{
				BgL_rtl_purez00_bglt BgL_obj3625z00_3198;

				BgL_obj3625z00_3198 = (BgL_rtl_purez00_bglt) (BgL_obj3625z00_6619);
				{	/* SawMill/defs.scm 34 */
					obj_t BgL_res3626z00_3201;

					{	/* SawMill/defs.scm 34 */
						obj_t BgL_keyz00_5650;

						BgL_keyz00_5650 = CNST_TABLE_REF(((long) 14));
						BgL_res3626z00_3201 =
							make_struct(BgL_keyz00_5650, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 34 */
						int BgL_auxz00_10985;

						BgL_auxz00_10985 = (int) (((long) 0));
						STRUCT_SET(BgL_res3626z00_3201, BgL_auxz00_10985, BFALSE);
					}
					{	/* SawMill/defs.scm 34 */
						obj_t BgL_arg5530z00_3203;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_10988;

							BgL_auxz00_10988 = (BgL_rtl_funz00_bglt) (BgL_obj3625z00_3198);
							BgL_arg5530z00_3203 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_10988))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 34 */
							int BgL_auxz00_10991;

							BgL_auxz00_10991 = (int) (((long) 1));
							STRUCT_SET(BgL_res3626z00_3201, BgL_auxz00_10991,
								BgL_arg5530z00_3203);
					}}
					return BgL_res3626z00_3201;
				}
			}
		}
	}



/* struct+object->objec4742 */
	obj_t BGl_structzb2objectzd2ze3objec4742z83zzsaw_defsz00(obj_t
		BgL_envz00_6620, obj_t BgL_oz00_6621, obj_t BgL_sz00_6622)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{
				BgL_rtl_nopz00_bglt BgL_oz00_3190;

				obj_t BgL_sz00_3191;

				{	/* SawMill/defs.scm 35 */
					BgL_rtl_nopz00_bglt BgL_auxz00_10995;

					BgL_oz00_3190 = (BgL_rtl_nopz00_bglt) (BgL_oz00_6621);
					BgL_sz00_3191 = BgL_sz00_6622;
					{	/* SawMill/defs.scm 35 */
						obj_t BgL_arg5527z00_3194;

						BgL_arg5527z00_3194 = STRUCT_REF(BgL_sz00_3191, (int) (((long) 0)));
						{	/* SawMill/defs.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_10998;

							BgL_auxz00_10998 = (BgL_objectz00_bglt) (BgL_oz00_3190);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10998, BgL_arg5527z00_3194);
					}}
					{
						obj_t BgL_auxz00_11001;

						BgL_auxz00_11001 = STRUCT_REF(BgL_sz00_3191, (int) (((long) 1)));
						((((BgL_rtl_nopz00_bglt) CREF(BgL_oz00_3190))->BgL_locz00) =
							((obj_t) BgL_auxz00_11001), BUNSPEC);
					}
					BgL_auxz00_10995 = BgL_oz00_3190;
					return (obj_t) (BgL_auxz00_10995);
				}
			}
		}
	}



/* object->struct-rtl_n4739 */
	obj_t BGl_objectzd2ze3structzd2rtl_n4739ze3zzsaw_defsz00(obj_t
		BgL_envz00_6623, obj_t BgL_obj3643z00_6624)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 35 */
			{
				BgL_rtl_nopz00_bglt BgL_obj3643z00_3182;

				BgL_obj3643z00_3182 = (BgL_rtl_nopz00_bglt) (BgL_obj3643z00_6624);
				{	/* SawMill/defs.scm 35 */
					obj_t BgL_res3644z00_3185;

					{	/* SawMill/defs.scm 35 */
						obj_t BgL_keyz00_5636;

						BgL_keyz00_5636 = CNST_TABLE_REF(((long) 15));
						BgL_res3644z00_3185 =
							make_struct(BgL_keyz00_5636, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 35 */
						int BgL_auxz00_11010;

						BgL_auxz00_11010 = (int) (((long) 0));
						STRUCT_SET(BgL_res3644z00_3185, BgL_auxz00_11010, BFALSE);
					}
					{	/* SawMill/defs.scm 35 */
						obj_t BgL_arg5525z00_3187;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11013;

							BgL_auxz00_11013 = (BgL_rtl_funz00_bglt) (BgL_obj3643z00_3182);
							BgL_arg5525z00_3187 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11013))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 35 */
							int BgL_auxz00_11016;

							BgL_auxz00_11016 = (int) (((long) 1));
							STRUCT_SET(BgL_res3644z00_3185, BgL_auxz00_11016,
								BgL_arg5525z00_3187);
					}}
					return BgL_res3644z00_3185;
				}
			}
		}
	}



/* struct+object->objec4737 */
	obj_t BGl_structzb2objectzd2ze3objec4737z83zzsaw_defsz00(obj_t
		BgL_envz00_6625, obj_t BgL_oz00_6626, obj_t BgL_sz00_6627)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{
				BgL_rtl_movz00_bglt BgL_oz00_3174;

				obj_t BgL_sz00_3175;

				{	/* SawMill/defs.scm 36 */
					BgL_rtl_movz00_bglt BgL_auxz00_11020;

					BgL_oz00_3174 = (BgL_rtl_movz00_bglt) (BgL_oz00_6626);
					BgL_sz00_3175 = BgL_sz00_6627;
					{	/* SawMill/defs.scm 36 */
						obj_t BgL_arg5522z00_3178;

						BgL_arg5522z00_3178 = STRUCT_REF(BgL_sz00_3175, (int) (((long) 0)));
						{	/* SawMill/defs.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_11023;

							BgL_auxz00_11023 = (BgL_objectz00_bglt) (BgL_oz00_3174);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11023, BgL_arg5522z00_3178);
					}}
					{
						obj_t BgL_auxz00_11026;

						BgL_auxz00_11026 = STRUCT_REF(BgL_sz00_3175, (int) (((long) 1)));
						((((BgL_rtl_movz00_bglt) CREF(BgL_oz00_3174))->BgL_locz00) =
							((obj_t) BgL_auxz00_11026), BUNSPEC);
					}
					BgL_auxz00_11020 = BgL_oz00_3174;
					return (obj_t) (BgL_auxz00_11020);
				}
			}
		}
	}



/* object->struct-rtl_m4735 */
	obj_t BGl_objectzd2ze3structzd2rtl_m4735ze3zzsaw_defsz00(obj_t
		BgL_envz00_6628, obj_t BgL_obj3661z00_6629)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 36 */
			{
				BgL_rtl_movz00_bglt BgL_obj3661z00_3166;

				BgL_obj3661z00_3166 = (BgL_rtl_movz00_bglt) (BgL_obj3661z00_6629);
				{	/* SawMill/defs.scm 36 */
					obj_t BgL_res3662z00_3169;

					{	/* SawMill/defs.scm 36 */
						obj_t BgL_keyz00_5622;

						BgL_keyz00_5622 = CNST_TABLE_REF(((long) 16));
						BgL_res3662z00_3169 =
							make_struct(BgL_keyz00_5622, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 36 */
						int BgL_auxz00_11035;

						BgL_auxz00_11035 = (int) (((long) 0));
						STRUCT_SET(BgL_res3662z00_3169, BgL_auxz00_11035, BFALSE);
					}
					{	/* SawMill/defs.scm 36 */
						obj_t BgL_arg5520z00_3171;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11038;

							BgL_auxz00_11038 = (BgL_rtl_funz00_bglt) (BgL_obj3661z00_3166);
							BgL_arg5520z00_3171 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11038))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 36 */
							int BgL_auxz00_11041;

							BgL_auxz00_11041 = (int) (((long) 1));
							STRUCT_SET(BgL_res3662z00_3169, BgL_auxz00_11041,
								BgL_arg5520z00_3171);
					}}
					return BgL_res3662z00_3169;
				}
			}
		}
	}



/* struct+object->objec4733 */
	obj_t BGl_structzb2objectzd2ze3objec4733z83zzsaw_defsz00(obj_t
		BgL_envz00_6630, obj_t BgL_oz00_6631, obj_t BgL_sz00_6632)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{
				BgL_rtl_loadiz00_bglt BgL_oz00_3157;

				obj_t BgL_sz00_3158;

				{	/* SawMill/defs.scm 37 */
					BgL_rtl_loadiz00_bglt BgL_auxz00_11045;

					BgL_oz00_3157 = (BgL_rtl_loadiz00_bglt) (BgL_oz00_6631);
					BgL_sz00_3158 = BgL_sz00_6632;
					{	/* SawMill/defs.scm 37 */
						obj_t BgL_arg5517z00_3161;

						BgL_arg5517z00_3161 = STRUCT_REF(BgL_sz00_3158, (int) (((long) 0)));
						{	/* SawMill/defs.scm 37 */
							BgL_objectz00_bglt BgL_auxz00_11048;

							BgL_auxz00_11048 = (BgL_objectz00_bglt) (BgL_oz00_3157);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11048, BgL_arg5517z00_3161);
					}}
					{
						obj_t BgL_auxz00_11051;

						BgL_auxz00_11051 = STRUCT_REF(BgL_sz00_3158, (int) (((long) 1)));
						((((BgL_rtl_loadiz00_bglt) CREF(BgL_oz00_3157))->BgL_locz00) =
							((obj_t) BgL_auxz00_11051), BUNSPEC);
					}
					{
						BgL_atomz00_bglt BgL_auxz00_11055;

						BgL_auxz00_11055 =
							(BgL_atomz00_bglt) (STRUCT_REF(BgL_sz00_3158,
								(int) (((long) 2))));
						((((BgL_rtl_loadiz00_bglt) CREF(BgL_oz00_3157))->BgL_constantz00) =
							((BgL_atomz00_bglt) BgL_auxz00_11055), BUNSPEC);
					}
					BgL_auxz00_11045 = BgL_oz00_3157;
					return (obj_t) (BgL_auxz00_11045);
				}
			}
		}
	}



/* object->struct-rtl_l4731 */
	obj_t BGl_objectzd2ze3structzd2rtl_l4731ze3zzsaw_defsz00(obj_t
		BgL_envz00_6633, obj_t BgL_obj3685z00_6634)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 37 */
			{
				BgL_rtl_loadiz00_bglt BgL_obj3685z00_3147;

				BgL_obj3685z00_3147 = (BgL_rtl_loadiz00_bglt) (BgL_obj3685z00_6634);
				{	/* SawMill/defs.scm 37 */
					obj_t BgL_res3686z00_3150;

					{	/* SawMill/defs.scm 37 */
						obj_t BgL_keyz00_5602;

						BgL_keyz00_5602 = CNST_TABLE_REF(((long) 17));
						BgL_res3686z00_3150 =
							make_struct(BgL_keyz00_5602, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 37 */
						int BgL_auxz00_11065;

						BgL_auxz00_11065 = (int) (((long) 0));
						STRUCT_SET(BgL_res3686z00_3150, BgL_auxz00_11065, BFALSE);
					}
					{	/* SawMill/defs.scm 37 */
						obj_t BgL_arg5513z00_3152;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11068;

							BgL_auxz00_11068 = (BgL_rtl_funz00_bglt) (BgL_obj3685z00_3147);
							BgL_arg5513z00_3152 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11068))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 37 */
							int BgL_auxz00_11071;

							BgL_auxz00_11071 = (int) (((long) 1));
							STRUCT_SET(BgL_res3686z00_3150, BgL_auxz00_11071,
								BgL_arg5513z00_3152);
					}}
					{	/* SawMill/defs.scm 37 */
						BgL_atomz00_bglt BgL_arg5515z00_3154;

						BgL_arg5515z00_3154 =
							(((BgL_rtl_loadiz00_bglt) CREF(BgL_obj3685z00_3147))->
							BgL_constantz00);
						{	/* SawMill/defs.scm 37 */
							obj_t BgL_auxz00_11077;

							int BgL_auxz00_11075;

							BgL_auxz00_11077 = (obj_t) (BgL_arg5515z00_3154);
							BgL_auxz00_11075 = (int) (((long) 2));
							STRUCT_SET(BgL_res3686z00_3150, BgL_auxz00_11075,
								BgL_auxz00_11077);
					}}
					return BgL_res3686z00_3150;
				}
			}
		}
	}



/* struct+object->objec4729 */
	obj_t BGl_structzb2objectzd2ze3objec4729z83zzsaw_defsz00(obj_t
		BgL_envz00_6635, obj_t BgL_oz00_6636, obj_t BgL_sz00_6637)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{
				BgL_rtl_loadgz00_bglt BgL_oz00_3138;

				obj_t BgL_sz00_3139;

				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadgz00_bglt BgL_auxz00_11081;

					BgL_oz00_3138 = (BgL_rtl_loadgz00_bglt) (BgL_oz00_6636);
					BgL_sz00_3139 = BgL_sz00_6637;
					{	/* SawMill/defs.scm 38 */
						obj_t BgL_arg5510z00_3142;

						BgL_arg5510z00_3142 = STRUCT_REF(BgL_sz00_3139, (int) (((long) 0)));
						{	/* SawMill/defs.scm 38 */
							BgL_objectz00_bglt BgL_auxz00_11084;

							BgL_auxz00_11084 = (BgL_objectz00_bglt) (BgL_oz00_3138);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11084, BgL_arg5510z00_3142);
					}}
					{
						obj_t BgL_auxz00_11087;

						BgL_auxz00_11087 = STRUCT_REF(BgL_sz00_3139, (int) (((long) 1)));
						((((BgL_rtl_loadgz00_bglt) CREF(BgL_oz00_3138))->BgL_locz00) =
							((obj_t) BgL_auxz00_11087), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_11091;

						BgL_auxz00_11091 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_3139,
								(int) (((long) 2))));
						((((BgL_rtl_loadgz00_bglt) CREF(BgL_oz00_3138))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_11091), BUNSPEC);
					}
					BgL_auxz00_11081 = BgL_oz00_3138;
					return (obj_t) (BgL_auxz00_11081);
				}
			}
		}
	}



/* object->struct-rtl_l4727 */
	obj_t BGl_objectzd2ze3structzd2rtl_l4727ze3zzsaw_defsz00(obj_t
		BgL_envz00_6638, obj_t BgL_obj3713z00_6639)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 38 */
			{
				BgL_rtl_loadgz00_bglt BgL_obj3713z00_3128;

				BgL_obj3713z00_3128 = (BgL_rtl_loadgz00_bglt) (BgL_obj3713z00_6639);
				{	/* SawMill/defs.scm 38 */
					obj_t BgL_res3714z00_3131;

					{	/* SawMill/defs.scm 38 */
						obj_t BgL_keyz00_5582;

						BgL_keyz00_5582 = CNST_TABLE_REF(((long) 18));
						BgL_res3714z00_3131 =
							make_struct(BgL_keyz00_5582, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 38 */
						int BgL_auxz00_11101;

						BgL_auxz00_11101 = (int) (((long) 0));
						STRUCT_SET(BgL_res3714z00_3131, BgL_auxz00_11101, BFALSE);
					}
					{	/* SawMill/defs.scm 38 */
						obj_t BgL_arg5506z00_3133;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11104;

							BgL_auxz00_11104 = (BgL_rtl_funz00_bglt) (BgL_obj3713z00_3128);
							BgL_arg5506z00_3133 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11104))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 38 */
							int BgL_auxz00_11107;

							BgL_auxz00_11107 = (int) (((long) 1));
							STRUCT_SET(BgL_res3714z00_3131, BgL_auxz00_11107,
								BgL_arg5506z00_3133);
					}}
					{	/* SawMill/defs.scm 38 */
						BgL_globalz00_bglt BgL_arg5508z00_3135;

						BgL_arg5508z00_3135 =
							(((BgL_rtl_loadgz00_bglt) CREF(BgL_obj3713z00_3128))->BgL_varz00);
						{	/* SawMill/defs.scm 38 */
							obj_t BgL_auxz00_11113;

							int BgL_auxz00_11111;

							BgL_auxz00_11113 = (obj_t) (BgL_arg5508z00_3135);
							BgL_auxz00_11111 = (int) (((long) 2));
							STRUCT_SET(BgL_res3714z00_3131, BgL_auxz00_11111,
								BgL_auxz00_11113);
					}}
					return BgL_res3714z00_3131;
				}
			}
		}
	}



/* struct+object->objec4725 */
	obj_t BGl_structzb2objectzd2ze3objec4725z83zzsaw_defsz00(obj_t
		BgL_envz00_6640, obj_t BgL_oz00_6641, obj_t BgL_sz00_6642)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{
				BgL_rtl_loadfunz00_bglt BgL_oz00_3119;

				obj_t BgL_sz00_3120;

				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadfunz00_bglt BgL_auxz00_11117;

					BgL_oz00_3119 = (BgL_rtl_loadfunz00_bglt) (BgL_oz00_6641);
					BgL_sz00_3120 = BgL_sz00_6642;
					{	/* SawMill/defs.scm 39 */
						obj_t BgL_arg5503z00_3123;

						BgL_arg5503z00_3123 = STRUCT_REF(BgL_sz00_3120, (int) (((long) 0)));
						{	/* SawMill/defs.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_11120;

							BgL_auxz00_11120 = (BgL_objectz00_bglt) (BgL_oz00_3119);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11120, BgL_arg5503z00_3123);
					}}
					{
						obj_t BgL_auxz00_11123;

						BgL_auxz00_11123 = STRUCT_REF(BgL_sz00_3120, (int) (((long) 1)));
						((((BgL_rtl_loadfunz00_bglt) CREF(BgL_oz00_3119))->BgL_locz00) =
							((obj_t) BgL_auxz00_11123), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_11127;

						BgL_auxz00_11127 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_3120,
								(int) (((long) 2))));
						((((BgL_rtl_loadfunz00_bglt) CREF(BgL_oz00_3119))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_11127), BUNSPEC);
					}
					BgL_auxz00_11117 = BgL_oz00_3119;
					return (obj_t) (BgL_auxz00_11117);
				}
			}
		}
	}



/* object->struct-rtl_l4723 */
	obj_t BGl_objectzd2ze3structzd2rtl_l4723ze3zzsaw_defsz00(obj_t
		BgL_envz00_6643, obj_t BgL_obj3741z00_6644)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 39 */
			{
				BgL_rtl_loadfunz00_bglt BgL_obj3741z00_3109;

				BgL_obj3741z00_3109 = (BgL_rtl_loadfunz00_bglt) (BgL_obj3741z00_6644);
				{	/* SawMill/defs.scm 39 */
					obj_t BgL_res3742z00_3112;

					{	/* SawMill/defs.scm 39 */
						obj_t BgL_keyz00_5562;

						BgL_keyz00_5562 = CNST_TABLE_REF(((long) 19));
						BgL_res3742z00_3112 =
							make_struct(BgL_keyz00_5562, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 39 */
						int BgL_auxz00_11137;

						BgL_auxz00_11137 = (int) (((long) 0));
						STRUCT_SET(BgL_res3742z00_3112, BgL_auxz00_11137, BFALSE);
					}
					{	/* SawMill/defs.scm 39 */
						obj_t BgL_arg5499z00_3114;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11140;

							BgL_auxz00_11140 = (BgL_rtl_funz00_bglt) (BgL_obj3741z00_3109);
							BgL_arg5499z00_3114 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11140))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 39 */
							int BgL_auxz00_11143;

							BgL_auxz00_11143 = (int) (((long) 1));
							STRUCT_SET(BgL_res3742z00_3112, BgL_auxz00_11143,
								BgL_arg5499z00_3114);
					}}
					{	/* SawMill/defs.scm 39 */
						BgL_globalz00_bglt BgL_arg5501z00_3116;

						BgL_arg5501z00_3116 =
							(((BgL_rtl_loadfunz00_bglt) CREF(BgL_obj3741z00_3109))->
							BgL_varz00);
						{	/* SawMill/defs.scm 39 */
							obj_t BgL_auxz00_11149;

							int BgL_auxz00_11147;

							BgL_auxz00_11149 = (obj_t) (BgL_arg5501z00_3116);
							BgL_auxz00_11147 = (int) (((long) 2));
							STRUCT_SET(BgL_res3742z00_3112, BgL_auxz00_11147,
								BgL_auxz00_11149);
					}}
					return BgL_res3742z00_3112;
				}
			}
		}
	}



/* struct+object->objec4721 */
	obj_t BGl_structzb2objectzd2ze3objec4721z83zzsaw_defsz00(obj_t
		BgL_envz00_6645, obj_t BgL_oz00_6646, obj_t BgL_sz00_6647)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{
				BgL_rtl_globalrefz00_bglt BgL_oz00_3100;

				obj_t BgL_sz00_3101;

				{	/* SawMill/defs.scm 40 */
					BgL_rtl_globalrefz00_bglt BgL_auxz00_11153;

					BgL_oz00_3100 = (BgL_rtl_globalrefz00_bglt) (BgL_oz00_6646);
					BgL_sz00_3101 = BgL_sz00_6647;
					{	/* SawMill/defs.scm 40 */
						obj_t BgL_arg5496z00_3104;

						BgL_arg5496z00_3104 = STRUCT_REF(BgL_sz00_3101, (int) (((long) 0)));
						{	/* SawMill/defs.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_11156;

							BgL_auxz00_11156 = (BgL_objectz00_bglt) (BgL_oz00_3100);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11156, BgL_arg5496z00_3104);
					}}
					{
						obj_t BgL_auxz00_11159;

						BgL_auxz00_11159 = STRUCT_REF(BgL_sz00_3101, (int) (((long) 1)));
						((((BgL_rtl_globalrefz00_bglt) CREF(BgL_oz00_3100))->BgL_locz00) =
							((obj_t) BgL_auxz00_11159), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_11163;

						BgL_auxz00_11163 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_3101,
								(int) (((long) 2))));
						((((BgL_rtl_globalrefz00_bglt) CREF(BgL_oz00_3100))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_11163), BUNSPEC);
					}
					BgL_auxz00_11153 = BgL_oz00_3100;
					return (obj_t) (BgL_auxz00_11153);
				}
			}
		}
	}



/* object->struct-rtl_g4719 */
	obj_t BGl_objectzd2ze3structzd2rtl_g4719ze3zzsaw_defsz00(obj_t
		BgL_envz00_6648, obj_t BgL_obj3769z00_6649)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 40 */
			{
				BgL_rtl_globalrefz00_bglt BgL_obj3769z00_3090;

				BgL_obj3769z00_3090 = (BgL_rtl_globalrefz00_bglt) (BgL_obj3769z00_6649);
				{	/* SawMill/defs.scm 40 */
					obj_t BgL_res3770z00_3093;

					{	/* SawMill/defs.scm 40 */
						obj_t BgL_keyz00_5542;

						BgL_keyz00_5542 = CNST_TABLE_REF(((long) 20));
						BgL_res3770z00_3093 =
							make_struct(BgL_keyz00_5542, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 40 */
						int BgL_auxz00_11173;

						BgL_auxz00_11173 = (int) (((long) 0));
						STRUCT_SET(BgL_res3770z00_3093, BgL_auxz00_11173, BFALSE);
					}
					{	/* SawMill/defs.scm 40 */
						obj_t BgL_arg5492z00_3095;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11176;

							BgL_auxz00_11176 = (BgL_rtl_funz00_bglt) (BgL_obj3769z00_3090);
							BgL_arg5492z00_3095 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11176))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 40 */
							int BgL_auxz00_11179;

							BgL_auxz00_11179 = (int) (((long) 1));
							STRUCT_SET(BgL_res3770z00_3093, BgL_auxz00_11179,
								BgL_arg5492z00_3095);
					}}
					{	/* SawMill/defs.scm 40 */
						BgL_globalz00_bglt BgL_arg5494z00_3097;

						BgL_arg5494z00_3097 =
							(((BgL_rtl_globalrefz00_bglt) CREF(BgL_obj3769z00_3090))->
							BgL_varz00);
						{	/* SawMill/defs.scm 40 */
							obj_t BgL_auxz00_11185;

							int BgL_auxz00_11183;

							BgL_auxz00_11185 = (obj_t) (BgL_arg5494z00_3097);
							BgL_auxz00_11183 = (int) (((long) 2));
							STRUCT_SET(BgL_res3770z00_3093, BgL_auxz00_11183,
								BgL_auxz00_11185);
					}}
					return BgL_res3770z00_3093;
				}
			}
		}
	}



/* struct+object->objec4717 */
	obj_t BGl_structzb2objectzd2ze3objec4717z83zzsaw_defsz00(obj_t
		BgL_envz00_6650, obj_t BgL_oz00_6651, obj_t BgL_sz00_6652)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{
				BgL_rtl_getfieldz00_bglt BgL_oz00_3079;

				obj_t BgL_sz00_3080;

				{	/* SawMill/defs.scm 41 */
					BgL_rtl_getfieldz00_bglt BgL_auxz00_11189;

					BgL_oz00_3079 = (BgL_rtl_getfieldz00_bglt) (BgL_oz00_6651);
					BgL_sz00_3080 = BgL_sz00_6652;
					{	/* SawMill/defs.scm 41 */
						obj_t BgL_arg5489z00_3083;

						BgL_arg5489z00_3083 = STRUCT_REF(BgL_sz00_3080, (int) (((long) 0)));
						{	/* SawMill/defs.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_11192;

							BgL_auxz00_11192 = (BgL_objectz00_bglt) (BgL_oz00_3079);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11192, BgL_arg5489z00_3083);
					}}
					{
						obj_t BgL_auxz00_11195;

						BgL_auxz00_11195 = STRUCT_REF(BgL_sz00_3080, (int) (((long) 1)));
						((((BgL_rtl_getfieldz00_bglt) CREF(BgL_oz00_3079))->BgL_locz00) =
							((obj_t) BgL_auxz00_11195), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11199;

						BgL_auxz00_11199 = STRUCT_REF(BgL_sz00_3080, (int) (((long) 2)));
						((((BgL_rtl_getfieldz00_bglt) CREF(BgL_oz00_3079))->BgL_namez00) =
							((obj_t) BgL_auxz00_11199), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11203;

						BgL_auxz00_11203 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3080,
								(int) (((long) 3))));
						((((BgL_rtl_getfieldz00_bglt) CREF(BgL_oz00_3079))->
								BgL_objtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_11203), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11208;

						BgL_auxz00_11208 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3080,
								(int) (((long) 4))));
						((((BgL_rtl_getfieldz00_bglt) CREF(BgL_oz00_3079))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11208), BUNSPEC);
					}
					BgL_auxz00_11189 = BgL_oz00_3079;
					return (obj_t) (BgL_auxz00_11189);
				}
			}
		}
	}



/* object->struct-rtl_g4715 */
	obj_t BGl_objectzd2ze3structzd2rtl_g4715ze3zzsaw_defsz00(obj_t
		BgL_envz00_6653, obj_t BgL_obj3809z00_6654)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 41 */
			{
				BgL_rtl_getfieldz00_bglt BgL_obj3809z00_3065;

				BgL_obj3809z00_3065 = (BgL_rtl_getfieldz00_bglt) (BgL_obj3809z00_6654);
				{	/* SawMill/defs.scm 41 */
					obj_t BgL_res3810z00_3068;

					{	/* SawMill/defs.scm 41 */
						obj_t BgL_keyz00_5510;

						BgL_keyz00_5510 = CNST_TABLE_REF(((long) 21));
						BgL_res3810z00_3068 =
							make_struct(BgL_keyz00_5510, (int) (((long) 5)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 41 */
						int BgL_auxz00_11218;

						BgL_auxz00_11218 = (int) (((long) 0));
						STRUCT_SET(BgL_res3810z00_3068, BgL_auxz00_11218, BFALSE);
					}
					{	/* SawMill/defs.scm 41 */
						obj_t BgL_arg5481z00_3070;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11221;

							BgL_auxz00_11221 = (BgL_rtl_funz00_bglt) (BgL_obj3809z00_3065);
							BgL_arg5481z00_3070 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11221))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 41 */
							int BgL_auxz00_11224;

							BgL_auxz00_11224 = (int) (((long) 1));
							STRUCT_SET(BgL_res3810z00_3068, BgL_auxz00_11224,
								BgL_arg5481z00_3070);
					}}
					{	/* SawMill/defs.scm 41 */
						obj_t BgL_arg5483z00_3072;

						BgL_arg5483z00_3072 =
							(((BgL_rtl_getfieldz00_bglt) CREF(BgL_obj3809z00_3065))->
							BgL_namez00);
						{	/* SawMill/defs.scm 41 */
							int BgL_auxz00_11228;

							BgL_auxz00_11228 = (int) (((long) 2));
							STRUCT_SET(BgL_res3810z00_3068, BgL_auxz00_11228,
								BgL_arg5483z00_3072);
					}}
					{	/* SawMill/defs.scm 41 */
						BgL_typez00_bglt BgL_arg5485z00_3074;

						BgL_arg5485z00_3074 =
							(((BgL_rtl_getfieldz00_bglt) CREF(BgL_obj3809z00_3065))->
							BgL_objtypez00);
						{	/* SawMill/defs.scm 41 */
							obj_t BgL_auxz00_11234;

							int BgL_auxz00_11232;

							BgL_auxz00_11234 = (obj_t) (BgL_arg5485z00_3074);
							BgL_auxz00_11232 = (int) (((long) 3));
							STRUCT_SET(BgL_res3810z00_3068, BgL_auxz00_11232,
								BgL_auxz00_11234);
					}}
					{	/* SawMill/defs.scm 41 */
						BgL_typez00_bglt BgL_arg5487z00_3076;

						BgL_arg5487z00_3076 =
							(((BgL_rtl_getfieldz00_bglt) CREF(BgL_obj3809z00_3065))->
							BgL_typez00);
						{	/* SawMill/defs.scm 41 */
							obj_t BgL_auxz00_11240;

							int BgL_auxz00_11238;

							BgL_auxz00_11240 = (obj_t) (BgL_arg5487z00_3076);
							BgL_auxz00_11238 = (int) (((long) 4));
							STRUCT_SET(BgL_res3810z00_3068, BgL_auxz00_11238,
								BgL_auxz00_11240);
					}}
					return BgL_res3810z00_3068;
				}
			}
		}
	}



/* struct+object->objec4713 */
	obj_t BGl_structzb2objectzd2ze3objec4713z83zzsaw_defsz00(obj_t
		BgL_envz00_6655, obj_t BgL_oz00_6656, obj_t BgL_sz00_6657)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{
				BgL_rtl_vallocz00_bglt BgL_oz00_3055;

				obj_t BgL_sz00_3056;

				{	/* SawMill/defs.scm 42 */
					BgL_rtl_vallocz00_bglt BgL_auxz00_11244;

					BgL_oz00_3055 = (BgL_rtl_vallocz00_bglt) (BgL_oz00_6656);
					BgL_sz00_3056 = BgL_sz00_6657;
					{	/* SawMill/defs.scm 42 */
						obj_t BgL_arg5478z00_3059;

						BgL_arg5478z00_3059 = STRUCT_REF(BgL_sz00_3056, (int) (((long) 0)));
						{	/* SawMill/defs.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_11247;

							BgL_auxz00_11247 = (BgL_objectz00_bglt) (BgL_oz00_3055);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11247, BgL_arg5478z00_3059);
					}}
					{
						obj_t BgL_auxz00_11250;

						BgL_auxz00_11250 = STRUCT_REF(BgL_sz00_3056, (int) (((long) 1)));
						((((BgL_rtl_vallocz00_bglt) CREF(BgL_oz00_3055))->BgL_locz00) =
							((obj_t) BgL_auxz00_11250), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11254;

						BgL_auxz00_11254 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3056,
								(int) (((long) 2))));
						((((BgL_rtl_vallocz00_bglt) CREF(BgL_oz00_3055))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11254), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11259;

						BgL_auxz00_11259 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3056,
								(int) (((long) 3))));
						((((BgL_rtl_vallocz00_bglt) CREF(BgL_oz00_3055))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_11259), BUNSPEC);
					}
					BgL_auxz00_11244 = BgL_oz00_3055;
					return (obj_t) (BgL_auxz00_11244);
				}
			}
		}
	}



/* object->struct-rtl_v4711 */
	obj_t BGl_objectzd2ze3structzd2rtl_v4711ze3zzsaw_defsz00(obj_t
		BgL_envz00_6658, obj_t BgL_obj3852z00_6659)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 42 */
			{
				BgL_rtl_vallocz00_bglt BgL_obj3852z00_3043;

				BgL_obj3852z00_3043 = (BgL_rtl_vallocz00_bglt) (BgL_obj3852z00_6659);
				{	/* SawMill/defs.scm 42 */
					obj_t BgL_res3853z00_3046;

					{	/* SawMill/defs.scm 42 */
						obj_t BgL_keyz00_5484;

						BgL_keyz00_5484 = CNST_TABLE_REF(((long) 22));
						BgL_res3853z00_3046 =
							make_struct(BgL_keyz00_5484, (int) (((long) 4)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 42 */
						int BgL_auxz00_11269;

						BgL_auxz00_11269 = (int) (((long) 0));
						STRUCT_SET(BgL_res3853z00_3046, BgL_auxz00_11269, BFALSE);
					}
					{	/* SawMill/defs.scm 42 */
						obj_t BgL_arg5472z00_3048;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11272;

							BgL_auxz00_11272 = (BgL_rtl_funz00_bglt) (BgL_obj3852z00_3043);
							BgL_arg5472z00_3048 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11272))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 42 */
							int BgL_auxz00_11275;

							BgL_auxz00_11275 = (int) (((long) 1));
							STRUCT_SET(BgL_res3853z00_3046, BgL_auxz00_11275,
								BgL_arg5472z00_3048);
					}}
					{	/* SawMill/defs.scm 42 */
						BgL_typez00_bglt BgL_arg5474z00_3050;

						BgL_arg5474z00_3050 =
							(((BgL_rtl_vallocz00_bglt) CREF(BgL_obj3852z00_3043))->
							BgL_typez00);
						{	/* SawMill/defs.scm 42 */
							obj_t BgL_auxz00_11281;

							int BgL_auxz00_11279;

							BgL_auxz00_11281 = (obj_t) (BgL_arg5474z00_3050);
							BgL_auxz00_11279 = (int) (((long) 2));
							STRUCT_SET(BgL_res3853z00_3046, BgL_auxz00_11279,
								BgL_auxz00_11281);
					}}
					{	/* SawMill/defs.scm 42 */
						BgL_typez00_bglt BgL_arg5476z00_3052;

						BgL_arg5476z00_3052 =
							(((BgL_rtl_vallocz00_bglt) CREF(BgL_obj3852z00_3043))->
							BgL_vtypez00);
						{	/* SawMill/defs.scm 42 */
							obj_t BgL_auxz00_11287;

							int BgL_auxz00_11285;

							BgL_auxz00_11287 = (obj_t) (BgL_arg5476z00_3052);
							BgL_auxz00_11285 = (int) (((long) 3));
							STRUCT_SET(BgL_res3853z00_3046, BgL_auxz00_11285,
								BgL_auxz00_11287);
					}}
					return BgL_res3853z00_3046;
				}
			}
		}
	}



/* struct+object->objec4709 */
	obj_t BGl_structzb2objectzd2ze3objec4709z83zzsaw_defsz00(obj_t
		BgL_envz00_6660, obj_t BgL_oz00_6661, obj_t BgL_sz00_6662)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{
				BgL_rtl_vrefz00_bglt BgL_oz00_3033;

				obj_t BgL_sz00_3034;

				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vrefz00_bglt BgL_auxz00_11291;

					BgL_oz00_3033 = (BgL_rtl_vrefz00_bglt) (BgL_oz00_6661);
					BgL_sz00_3034 = BgL_sz00_6662;
					{	/* SawMill/defs.scm 43 */
						obj_t BgL_arg5469z00_3037;

						BgL_arg5469z00_3037 = STRUCT_REF(BgL_sz00_3034, (int) (((long) 0)));
						{	/* SawMill/defs.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_11294;

							BgL_auxz00_11294 = (BgL_objectz00_bglt) (BgL_oz00_3033);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11294, BgL_arg5469z00_3037);
					}}
					{
						obj_t BgL_auxz00_11297;

						BgL_auxz00_11297 = STRUCT_REF(BgL_sz00_3034, (int) (((long) 1)));
						((((BgL_rtl_vrefz00_bglt) CREF(BgL_oz00_3033))->BgL_locz00) =
							((obj_t) BgL_auxz00_11297), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11301;

						BgL_auxz00_11301 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3034,
								(int) (((long) 2))));
						((((BgL_rtl_vrefz00_bglt) CREF(BgL_oz00_3033))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11301), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11306;

						BgL_auxz00_11306 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3034,
								(int) (((long) 3))));
						((((BgL_rtl_vrefz00_bglt) CREF(BgL_oz00_3033))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_11306), BUNSPEC);
					}
					BgL_auxz00_11291 = BgL_oz00_3033;
					return (obj_t) (BgL_auxz00_11291);
				}
			}
		}
	}



/* object->struct-rtl_v4707 */
	obj_t BGl_objectzd2ze3structzd2rtl_v4707ze3zzsaw_defsz00(obj_t
		BgL_envz00_6663, obj_t BgL_obj3890z00_6664)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 43 */
			{
				BgL_rtl_vrefz00_bglt BgL_obj3890z00_3021;

				BgL_obj3890z00_3021 = (BgL_rtl_vrefz00_bglt) (BgL_obj3890z00_6664);
				{	/* SawMill/defs.scm 43 */
					obj_t BgL_res3891z00_3024;

					{	/* SawMill/defs.scm 43 */
						obj_t BgL_keyz00_5458;

						BgL_keyz00_5458 = CNST_TABLE_REF(((long) 23));
						BgL_res3891z00_3024 =
							make_struct(BgL_keyz00_5458, (int) (((long) 4)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 43 */
						int BgL_auxz00_11316;

						BgL_auxz00_11316 = (int) (((long) 0));
						STRUCT_SET(BgL_res3891z00_3024, BgL_auxz00_11316, BFALSE);
					}
					{	/* SawMill/defs.scm 43 */
						obj_t BgL_arg5463z00_3026;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11319;

							BgL_auxz00_11319 = (BgL_rtl_funz00_bglt) (BgL_obj3890z00_3021);
							BgL_arg5463z00_3026 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11319))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 43 */
							int BgL_auxz00_11322;

							BgL_auxz00_11322 = (int) (((long) 1));
							STRUCT_SET(BgL_res3891z00_3024, BgL_auxz00_11322,
								BgL_arg5463z00_3026);
					}}
					{	/* SawMill/defs.scm 43 */
						BgL_typez00_bglt BgL_arg5465z00_3028;

						BgL_arg5465z00_3028 =
							(((BgL_rtl_vrefz00_bglt) CREF(BgL_obj3890z00_3021))->BgL_typez00);
						{	/* SawMill/defs.scm 43 */
							obj_t BgL_auxz00_11328;

							int BgL_auxz00_11326;

							BgL_auxz00_11328 = (obj_t) (BgL_arg5465z00_3028);
							BgL_auxz00_11326 = (int) (((long) 2));
							STRUCT_SET(BgL_res3891z00_3024, BgL_auxz00_11326,
								BgL_auxz00_11328);
					}}
					{	/* SawMill/defs.scm 43 */
						BgL_typez00_bglt BgL_arg5467z00_3030;

						BgL_arg5467z00_3030 =
							(((BgL_rtl_vrefz00_bglt) CREF(BgL_obj3890z00_3021))->
							BgL_vtypez00);
						{	/* SawMill/defs.scm 43 */
							obj_t BgL_auxz00_11334;

							int BgL_auxz00_11332;

							BgL_auxz00_11334 = (obj_t) (BgL_arg5467z00_3030);
							BgL_auxz00_11332 = (int) (((long) 3));
							STRUCT_SET(BgL_res3891z00_3024, BgL_auxz00_11332,
								BgL_auxz00_11334);
					}}
					return BgL_res3891z00_3024;
				}
			}
		}
	}



/* struct+object->objec4705 */
	obj_t BGl_structzb2objectzd2ze3objec4705z83zzsaw_defsz00(obj_t
		BgL_envz00_6665, obj_t BgL_oz00_6666, obj_t BgL_sz00_6667)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{
				BgL_rtl_vlengthz00_bglt BgL_oz00_3012;

				obj_t BgL_sz00_3013;

				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vlengthz00_bglt BgL_auxz00_11338;

					BgL_oz00_3012 = (BgL_rtl_vlengthz00_bglt) (BgL_oz00_6666);
					BgL_sz00_3013 = BgL_sz00_6667;
					{	/* SawMill/defs.scm 44 */
						obj_t BgL_arg5460z00_3016;

						BgL_arg5460z00_3016 = STRUCT_REF(BgL_sz00_3013, (int) (((long) 0)));
						{	/* SawMill/defs.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_11341;

							BgL_auxz00_11341 = (BgL_objectz00_bglt) (BgL_oz00_3012);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11341, BgL_arg5460z00_3016);
					}}
					{
						obj_t BgL_auxz00_11344;

						BgL_auxz00_11344 = STRUCT_REF(BgL_sz00_3013, (int) (((long) 1)));
						((((BgL_rtl_vlengthz00_bglt) CREF(BgL_oz00_3012))->BgL_locz00) =
							((obj_t) BgL_auxz00_11344), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11348;

						BgL_auxz00_11348 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3013,
								(int) (((long) 2))));
						((((BgL_rtl_vlengthz00_bglt) CREF(BgL_oz00_3012))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11348), BUNSPEC);
					}
					BgL_auxz00_11338 = BgL_oz00_3012;
					return (obj_t) (BgL_auxz00_11338);
				}
			}
		}
	}



/* object->struct-rtl_v4703 */
	obj_t BGl_objectzd2ze3structzd2rtl_v4703ze3zzsaw_defsz00(obj_t
		BgL_envz00_6668, obj_t BgL_obj3922z00_6669)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 44 */
			{
				BgL_rtl_vlengthz00_bglt BgL_obj3922z00_3002;

				BgL_obj3922z00_3002 = (BgL_rtl_vlengthz00_bglt) (BgL_obj3922z00_6669);
				{	/* SawMill/defs.scm 44 */
					obj_t BgL_res3923z00_3005;

					{	/* SawMill/defs.scm 44 */
						obj_t BgL_keyz00_5438;

						BgL_keyz00_5438 = CNST_TABLE_REF(((long) 24));
						BgL_res3923z00_3005 =
							make_struct(BgL_keyz00_5438, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 44 */
						int BgL_auxz00_11358;

						BgL_auxz00_11358 = (int) (((long) 0));
						STRUCT_SET(BgL_res3923z00_3005, BgL_auxz00_11358, BFALSE);
					}
					{	/* SawMill/defs.scm 44 */
						obj_t BgL_arg5456z00_3007;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11361;

							BgL_auxz00_11361 = (BgL_rtl_funz00_bglt) (BgL_obj3922z00_3002);
							BgL_arg5456z00_3007 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11361))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 44 */
							int BgL_auxz00_11364;

							BgL_auxz00_11364 = (int) (((long) 1));
							STRUCT_SET(BgL_res3923z00_3005, BgL_auxz00_11364,
								BgL_arg5456z00_3007);
					}}
					{	/* SawMill/defs.scm 44 */
						BgL_typez00_bglt BgL_arg5458z00_3009;

						BgL_arg5458z00_3009 =
							(((BgL_rtl_vlengthz00_bglt) CREF(BgL_obj3922z00_3002))->
							BgL_typez00);
						{	/* SawMill/defs.scm 44 */
							obj_t BgL_auxz00_11370;

							int BgL_auxz00_11368;

							BgL_auxz00_11370 = (obj_t) (BgL_arg5458z00_3009);
							BgL_auxz00_11368 = (int) (((long) 2));
							STRUCT_SET(BgL_res3923z00_3005, BgL_auxz00_11368,
								BgL_auxz00_11370);
					}}
					return BgL_res3923z00_3005;
				}
			}
		}
	}



/* struct+object->objec4701 */
	obj_t BGl_structzb2objectzd2ze3objec4701z83zzsaw_defsz00(obj_t
		BgL_envz00_6670, obj_t BgL_oz00_6671, obj_t BgL_sz00_6672)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{
				BgL_rtl_isaz00_bglt BgL_oz00_2993;

				obj_t BgL_sz00_2994;

				{	/* SawMill/defs.scm 45 */
					BgL_rtl_isaz00_bglt BgL_auxz00_11374;

					BgL_oz00_2993 = (BgL_rtl_isaz00_bglt) (BgL_oz00_6671);
					BgL_sz00_2994 = BgL_sz00_6672;
					{	/* SawMill/defs.scm 45 */
						obj_t BgL_arg5453z00_2997;

						BgL_arg5453z00_2997 = STRUCT_REF(BgL_sz00_2994, (int) (((long) 0)));
						{	/* SawMill/defs.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_11377;

							BgL_auxz00_11377 = (BgL_objectz00_bglt) (BgL_oz00_2993);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11377, BgL_arg5453z00_2997);
					}}
					{
						obj_t BgL_auxz00_11380;

						BgL_auxz00_11380 = STRUCT_REF(BgL_sz00_2994, (int) (((long) 1)));
						((((BgL_rtl_isaz00_bglt) CREF(BgL_oz00_2993))->BgL_locz00) =
							((obj_t) BgL_auxz00_11380), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11384;

						BgL_auxz00_11384 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2994,
								(int) (((long) 2))));
						((((BgL_rtl_isaz00_bglt) CREF(BgL_oz00_2993))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11384), BUNSPEC);
					}
					BgL_auxz00_11374 = BgL_oz00_2993;
					return (obj_t) (BgL_auxz00_11374);
				}
			}
		}
	}



/* object->struct-rtl_i4699 */
	obj_t BGl_objectzd2ze3structzd2rtl_i4699ze3zzsaw_defsz00(obj_t
		BgL_envz00_6673, obj_t BgL_obj3951z00_6674)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 45 */
			{
				BgL_rtl_isaz00_bglt BgL_obj3951z00_2983;

				BgL_obj3951z00_2983 = (BgL_rtl_isaz00_bglt) (BgL_obj3951z00_6674);
				{	/* SawMill/defs.scm 45 */
					obj_t BgL_res3952z00_2986;

					{	/* SawMill/defs.scm 45 */
						obj_t BgL_keyz00_5418;

						BgL_keyz00_5418 = CNST_TABLE_REF(((long) 25));
						BgL_res3952z00_2986 =
							make_struct(BgL_keyz00_5418, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 45 */
						int BgL_auxz00_11394;

						BgL_auxz00_11394 = (int) (((long) 0));
						STRUCT_SET(BgL_res3952z00_2986, BgL_auxz00_11394, BFALSE);
					}
					{	/* SawMill/defs.scm 45 */
						obj_t BgL_arg5449z00_2988;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11397;

							BgL_auxz00_11397 = (BgL_rtl_funz00_bglt) (BgL_obj3951z00_2983);
							BgL_arg5449z00_2988 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11397))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 45 */
							int BgL_auxz00_11400;

							BgL_auxz00_11400 = (int) (((long) 1));
							STRUCT_SET(BgL_res3952z00_2986, BgL_auxz00_11400,
								BgL_arg5449z00_2988);
					}}
					{	/* SawMill/defs.scm 45 */
						BgL_typez00_bglt BgL_arg5451z00_2990;

						BgL_arg5451z00_2990 =
							(((BgL_rtl_isaz00_bglt) CREF(BgL_obj3951z00_2983))->BgL_typez00);
						{	/* SawMill/defs.scm 45 */
							obj_t BgL_auxz00_11406;

							int BgL_auxz00_11404;

							BgL_auxz00_11406 = (obj_t) (BgL_arg5451z00_2990);
							BgL_auxz00_11404 = (int) (((long) 2));
							STRUCT_SET(BgL_res3952z00_2986, BgL_auxz00_11404,
								BgL_auxz00_11406);
					}}
					return BgL_res3952z00_2986;
				}
			}
		}
	}



/* struct+object->objec4697 */
	obj_t BGl_structzb2objectzd2ze3objec4697z83zzsaw_defsz00(obj_t
		BgL_envz00_6675, obj_t BgL_oz00_6676, obj_t BgL_sz00_6677)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{
				BgL_rtl_makeboxz00_bglt BgL_oz00_2975;

				obj_t BgL_sz00_2976;

				{	/* SawMill/defs.scm 46 */
					BgL_rtl_makeboxz00_bglt BgL_auxz00_11410;

					BgL_oz00_2975 = (BgL_rtl_makeboxz00_bglt) (BgL_oz00_6676);
					BgL_sz00_2976 = BgL_sz00_6677;
					{	/* SawMill/defs.scm 46 */
						obj_t BgL_arg5446z00_2979;

						BgL_arg5446z00_2979 = STRUCT_REF(BgL_sz00_2976, (int) (((long) 0)));
						{	/* SawMill/defs.scm 46 */
							BgL_objectz00_bglt BgL_auxz00_11413;

							BgL_auxz00_11413 = (BgL_objectz00_bglt) (BgL_oz00_2975);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11413, BgL_arg5446z00_2979);
					}}
					{
						obj_t BgL_auxz00_11416;

						BgL_auxz00_11416 = STRUCT_REF(BgL_sz00_2976, (int) (((long) 1)));
						((((BgL_rtl_makeboxz00_bglt) CREF(BgL_oz00_2975))->BgL_locz00) =
							((obj_t) BgL_auxz00_11416), BUNSPEC);
					}
					BgL_auxz00_11410 = BgL_oz00_2975;
					return (obj_t) (BgL_auxz00_11410);
				}
			}
		}
	}



/* object->struct-rtl_m4695 */
	obj_t BGl_objectzd2ze3structzd2rtl_m4695ze3zzsaw_defsz00(obj_t
		BgL_envz00_6678, obj_t BgL_obj3973z00_6679)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 46 */
			{
				BgL_rtl_makeboxz00_bglt BgL_obj3973z00_2967;

				BgL_obj3973z00_2967 = (BgL_rtl_makeboxz00_bglt) (BgL_obj3973z00_6679);
				{	/* SawMill/defs.scm 46 */
					obj_t BgL_res3974z00_2970;

					{	/* SawMill/defs.scm 46 */
						obj_t BgL_keyz00_5404;

						BgL_keyz00_5404 = CNST_TABLE_REF(((long) 26));
						BgL_res3974z00_2970 =
							make_struct(BgL_keyz00_5404, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 46 */
						int BgL_auxz00_11425;

						BgL_auxz00_11425 = (int) (((long) 0));
						STRUCT_SET(BgL_res3974z00_2970, BgL_auxz00_11425, BFALSE);
					}
					{	/* SawMill/defs.scm 46 */
						obj_t BgL_arg5444z00_2972;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11428;

							BgL_auxz00_11428 = (BgL_rtl_funz00_bglt) (BgL_obj3973z00_2967);
							BgL_arg5444z00_2972 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11428))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 46 */
							int BgL_auxz00_11431;

							BgL_auxz00_11431 = (int) (((long) 1));
							STRUCT_SET(BgL_res3974z00_2970, BgL_auxz00_11431,
								BgL_arg5444z00_2972);
					}}
					return BgL_res3974z00_2970;
				}
			}
		}
	}



/* struct+object->objec4693 */
	obj_t BGl_structzb2objectzd2ze3objec4693z83zzsaw_defsz00(obj_t
		BgL_envz00_6680, obj_t BgL_oz00_6681, obj_t BgL_sz00_6682)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{
				BgL_rtl_boxrefz00_bglt BgL_oz00_2959;

				obj_t BgL_sz00_2960;

				{	/* SawMill/defs.scm 47 */
					BgL_rtl_boxrefz00_bglt BgL_auxz00_11435;

					BgL_oz00_2959 = (BgL_rtl_boxrefz00_bglt) (BgL_oz00_6681);
					BgL_sz00_2960 = BgL_sz00_6682;
					{	/* SawMill/defs.scm 47 */
						obj_t BgL_arg5441z00_2963;

						BgL_arg5441z00_2963 = STRUCT_REF(BgL_sz00_2960, (int) (((long) 0)));
						{	/* SawMill/defs.scm 47 */
							BgL_objectz00_bglt BgL_auxz00_11438;

							BgL_auxz00_11438 = (BgL_objectz00_bglt) (BgL_oz00_2959);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11438, BgL_arg5441z00_2963);
					}}
					{
						obj_t BgL_auxz00_11441;

						BgL_auxz00_11441 = STRUCT_REF(BgL_sz00_2960, (int) (((long) 1)));
						((((BgL_rtl_boxrefz00_bglt) CREF(BgL_oz00_2959))->BgL_locz00) =
							((obj_t) BgL_auxz00_11441), BUNSPEC);
					}
					BgL_auxz00_11435 = BgL_oz00_2959;
					return (obj_t) (BgL_auxz00_11435);
				}
			}
		}
	}



/* object->struct-rtl_b4691 */
	obj_t BGl_objectzd2ze3structzd2rtl_b4691ze3zzsaw_defsz00(obj_t
		BgL_envz00_6683, obj_t BgL_obj3991z00_6684)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 47 */
			{
				BgL_rtl_boxrefz00_bglt BgL_obj3991z00_2951;

				BgL_obj3991z00_2951 = (BgL_rtl_boxrefz00_bglt) (BgL_obj3991z00_6684);
				{	/* SawMill/defs.scm 47 */
					obj_t BgL_res3992z00_2954;

					{	/* SawMill/defs.scm 47 */
						obj_t BgL_keyz00_5390;

						BgL_keyz00_5390 = CNST_TABLE_REF(((long) 27));
						BgL_res3992z00_2954 =
							make_struct(BgL_keyz00_5390, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 47 */
						int BgL_auxz00_11450;

						BgL_auxz00_11450 = (int) (((long) 0));
						STRUCT_SET(BgL_res3992z00_2954, BgL_auxz00_11450, BFALSE);
					}
					{	/* SawMill/defs.scm 47 */
						obj_t BgL_arg5439z00_2956;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11453;

							BgL_auxz00_11453 = (BgL_rtl_funz00_bglt) (BgL_obj3991z00_2951);
							BgL_arg5439z00_2956 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11453))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 47 */
							int BgL_auxz00_11456;

							BgL_auxz00_11456 = (int) (((long) 1));
							STRUCT_SET(BgL_res3992z00_2954, BgL_auxz00_11456,
								BgL_arg5439z00_2956);
					}}
					return BgL_res3992z00_2954;
				}
			}
		}
	}



/* struct+object->objec4689 */
	obj_t BGl_structzb2objectzd2ze3objec4689z83zzsaw_defsz00(obj_t
		BgL_envz00_6685, obj_t BgL_oz00_6686, obj_t BgL_sz00_6687)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{
				BgL_rtl_effectz00_bglt BgL_oz00_2943;

				obj_t BgL_sz00_2944;

				{	/* SawMill/defs.scm 49 */
					BgL_rtl_effectz00_bglt BgL_auxz00_11460;

					BgL_oz00_2943 = (BgL_rtl_effectz00_bglt) (BgL_oz00_6686);
					BgL_sz00_2944 = BgL_sz00_6687;
					{	/* SawMill/defs.scm 49 */
						obj_t BgL_arg5436z00_2947;

						BgL_arg5436z00_2947 = STRUCT_REF(BgL_sz00_2944, (int) (((long) 0)));
						{	/* SawMill/defs.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_11463;

							BgL_auxz00_11463 = (BgL_objectz00_bglt) (BgL_oz00_2943);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11463, BgL_arg5436z00_2947);
					}}
					{
						obj_t BgL_auxz00_11466;

						BgL_auxz00_11466 = STRUCT_REF(BgL_sz00_2944, (int) (((long) 1)));
						((((BgL_rtl_effectz00_bglt) CREF(BgL_oz00_2943))->BgL_locz00) =
							((obj_t) BgL_auxz00_11466), BUNSPEC);
					}
					BgL_auxz00_11460 = BgL_oz00_2943;
					return (obj_t) (BgL_auxz00_11460);
				}
			}
		}
	}



/* object->struct-rtl_e4687 */
	obj_t BGl_objectzd2ze3structzd2rtl_e4687ze3zzsaw_defsz00(obj_t
		BgL_envz00_6688, obj_t BgL_obj4010z00_6689)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 49 */
			{
				BgL_rtl_effectz00_bglt BgL_obj4010z00_2935;

				BgL_obj4010z00_2935 = (BgL_rtl_effectz00_bglt) (BgL_obj4010z00_6689);
				{	/* SawMill/defs.scm 49 */
					obj_t BgL_res4011z00_2938;

					{	/* SawMill/defs.scm 49 */
						obj_t BgL_keyz00_5376;

						BgL_keyz00_5376 = CNST_TABLE_REF(((long) 28));
						BgL_res4011z00_2938 =
							make_struct(BgL_keyz00_5376, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 49 */
						int BgL_auxz00_11475;

						BgL_auxz00_11475 = (int) (((long) 0));
						STRUCT_SET(BgL_res4011z00_2938, BgL_auxz00_11475, BFALSE);
					}
					{	/* SawMill/defs.scm 49 */
						obj_t BgL_arg5434z00_2940;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11478;

							BgL_auxz00_11478 = (BgL_rtl_funz00_bglt) (BgL_obj4010z00_2935);
							BgL_arg5434z00_2940 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11478))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 49 */
							int BgL_auxz00_11481;

							BgL_auxz00_11481 = (int) (((long) 1));
							STRUCT_SET(BgL_res4011z00_2938, BgL_auxz00_11481,
								BgL_arg5434z00_2940);
					}}
					return BgL_res4011z00_2938;
				}
			}
		}
	}



/* struct+object->objec4685 */
	obj_t BGl_structzb2objectzd2ze3objec4685z83zzsaw_defsz00(obj_t
		BgL_envz00_6690, obj_t BgL_oz00_6691, obj_t BgL_sz00_6692)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{
				BgL_rtl_storegz00_bglt BgL_oz00_2926;

				obj_t BgL_sz00_2927;

				{	/* SawMill/defs.scm 50 */
					BgL_rtl_storegz00_bglt BgL_auxz00_11485;

					BgL_oz00_2926 = (BgL_rtl_storegz00_bglt) (BgL_oz00_6691);
					BgL_sz00_2927 = BgL_sz00_6692;
					{	/* SawMill/defs.scm 50 */
						obj_t BgL_arg5431z00_2930;

						BgL_arg5431z00_2930 = STRUCT_REF(BgL_sz00_2927, (int) (((long) 0)));
						{	/* SawMill/defs.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_11488;

							BgL_auxz00_11488 = (BgL_objectz00_bglt) (BgL_oz00_2926);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11488, BgL_arg5431z00_2930);
					}}
					{
						obj_t BgL_auxz00_11491;

						BgL_auxz00_11491 = STRUCT_REF(BgL_sz00_2927, (int) (((long) 1)));
						((((BgL_rtl_storegz00_bglt) CREF(BgL_oz00_2926))->BgL_locz00) =
							((obj_t) BgL_auxz00_11491), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_11495;

						BgL_auxz00_11495 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_2927,
								(int) (((long) 2))));
						((((BgL_rtl_storegz00_bglt) CREF(BgL_oz00_2926))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_11495), BUNSPEC);
					}
					BgL_auxz00_11485 = BgL_oz00_2926;
					return (obj_t) (BgL_auxz00_11485);
				}
			}
		}
	}



/* object->struct-rtl_s4683 */
	obj_t BGl_objectzd2ze3structzd2rtl_s4683ze3zzsaw_defsz00(obj_t
		BgL_envz00_6693, obj_t BgL_obj4034z00_6694)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 50 */
			{
				BgL_rtl_storegz00_bglt BgL_obj4034z00_2916;

				BgL_obj4034z00_2916 = (BgL_rtl_storegz00_bglt) (BgL_obj4034z00_6694);
				{	/* SawMill/defs.scm 50 */
					obj_t BgL_res4035z00_2919;

					{	/* SawMill/defs.scm 50 */
						obj_t BgL_keyz00_5356;

						BgL_keyz00_5356 = CNST_TABLE_REF(((long) 29));
						BgL_res4035z00_2919 =
							make_struct(BgL_keyz00_5356, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 50 */
						int BgL_auxz00_11505;

						BgL_auxz00_11505 = (int) (((long) 0));
						STRUCT_SET(BgL_res4035z00_2919, BgL_auxz00_11505, BFALSE);
					}
					{	/* SawMill/defs.scm 50 */
						obj_t BgL_arg5427z00_2921;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11508;

							BgL_auxz00_11508 = (BgL_rtl_funz00_bglt) (BgL_obj4034z00_2916);
							BgL_arg5427z00_2921 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11508))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 50 */
							int BgL_auxz00_11511;

							BgL_auxz00_11511 = (int) (((long) 1));
							STRUCT_SET(BgL_res4035z00_2919, BgL_auxz00_11511,
								BgL_arg5427z00_2921);
					}}
					{	/* SawMill/defs.scm 50 */
						BgL_globalz00_bglt BgL_arg5429z00_2923;

						BgL_arg5429z00_2923 =
							(((BgL_rtl_storegz00_bglt) CREF(BgL_obj4034z00_2916))->
							BgL_varz00);
						{	/* SawMill/defs.scm 50 */
							obj_t BgL_auxz00_11517;

							int BgL_auxz00_11515;

							BgL_auxz00_11517 = (obj_t) (BgL_arg5429z00_2923);
							BgL_auxz00_11515 = (int) (((long) 2));
							STRUCT_SET(BgL_res4035z00_2919, BgL_auxz00_11515,
								BgL_auxz00_11517);
					}}
					return BgL_res4035z00_2919;
				}
			}
		}
	}



/* struct+object->objec4681 */
	obj_t BGl_structzb2objectzd2ze3objec4681z83zzsaw_defsz00(obj_t
		BgL_envz00_6695, obj_t BgL_oz00_6696, obj_t BgL_sz00_6697)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{
				BgL_rtl_setfieldz00_bglt BgL_oz00_2905;

				obj_t BgL_sz00_2906;

				{	/* SawMill/defs.scm 51 */
					BgL_rtl_setfieldz00_bglt BgL_auxz00_11521;

					BgL_oz00_2905 = (BgL_rtl_setfieldz00_bglt) (BgL_oz00_6696);
					BgL_sz00_2906 = BgL_sz00_6697;
					{	/* SawMill/defs.scm 51 */
						obj_t BgL_arg5424z00_2909;

						BgL_arg5424z00_2909 = STRUCT_REF(BgL_sz00_2906, (int) (((long) 0)));
						{	/* SawMill/defs.scm 51 */
							BgL_objectz00_bglt BgL_auxz00_11524;

							BgL_auxz00_11524 = (BgL_objectz00_bglt) (BgL_oz00_2905);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11524, BgL_arg5424z00_2909);
					}}
					{
						obj_t BgL_auxz00_11527;

						BgL_auxz00_11527 = STRUCT_REF(BgL_sz00_2906, (int) (((long) 1)));
						((((BgL_rtl_setfieldz00_bglt) CREF(BgL_oz00_2905))->BgL_locz00) =
							((obj_t) BgL_auxz00_11527), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11531;

						BgL_auxz00_11531 = STRUCT_REF(BgL_sz00_2906, (int) (((long) 2)));
						((((BgL_rtl_setfieldz00_bglt) CREF(BgL_oz00_2905))->BgL_namez00) =
							((obj_t) BgL_auxz00_11531), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11535;

						BgL_auxz00_11535 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2906,
								(int) (((long) 3))));
						((((BgL_rtl_setfieldz00_bglt) CREF(BgL_oz00_2905))->
								BgL_objtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_11535), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11540;

						BgL_auxz00_11540 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2906,
								(int) (((long) 4))));
						((((BgL_rtl_setfieldz00_bglt) CREF(BgL_oz00_2905))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11540), BUNSPEC);
					}
					BgL_auxz00_11521 = BgL_oz00_2905;
					return (obj_t) (BgL_auxz00_11521);
				}
			}
		}
	}



/* object->struct-rtl_s4679 */
	obj_t BGl_objectzd2ze3structzd2rtl_s4679ze3zzsaw_defsz00(obj_t
		BgL_envz00_6698, obj_t BgL_obj4077z00_6699)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 51 */
			{
				BgL_rtl_setfieldz00_bglt BgL_obj4077z00_2891;

				BgL_obj4077z00_2891 = (BgL_rtl_setfieldz00_bglt) (BgL_obj4077z00_6699);
				{	/* SawMill/defs.scm 51 */
					obj_t BgL_res4078z00_2894;

					{	/* SawMill/defs.scm 51 */
						obj_t BgL_keyz00_5324;

						BgL_keyz00_5324 = CNST_TABLE_REF(((long) 30));
						BgL_res4078z00_2894 =
							make_struct(BgL_keyz00_5324, (int) (((long) 5)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 51 */
						int BgL_auxz00_11550;

						BgL_auxz00_11550 = (int) (((long) 0));
						STRUCT_SET(BgL_res4078z00_2894, BgL_auxz00_11550, BFALSE);
					}
					{	/* SawMill/defs.scm 51 */
						obj_t BgL_arg5415z00_2896;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11553;

							BgL_auxz00_11553 = (BgL_rtl_funz00_bglt) (BgL_obj4077z00_2891);
							BgL_arg5415z00_2896 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11553))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 51 */
							int BgL_auxz00_11556;

							BgL_auxz00_11556 = (int) (((long) 1));
							STRUCT_SET(BgL_res4078z00_2894, BgL_auxz00_11556,
								BgL_arg5415z00_2896);
					}}
					{	/* SawMill/defs.scm 51 */
						obj_t BgL_arg5417z00_2898;

						BgL_arg5417z00_2898 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_obj4077z00_2891))->
							BgL_namez00);
						{	/* SawMill/defs.scm 51 */
							int BgL_auxz00_11560;

							BgL_auxz00_11560 = (int) (((long) 2));
							STRUCT_SET(BgL_res4078z00_2894, BgL_auxz00_11560,
								BgL_arg5417z00_2898);
					}}
					{	/* SawMill/defs.scm 51 */
						BgL_typez00_bglt BgL_arg5420z00_2900;

						BgL_arg5420z00_2900 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_obj4077z00_2891))->
							BgL_objtypez00);
						{	/* SawMill/defs.scm 51 */
							obj_t BgL_auxz00_11566;

							int BgL_auxz00_11564;

							BgL_auxz00_11566 = (obj_t) (BgL_arg5420z00_2900);
							BgL_auxz00_11564 = (int) (((long) 3));
							STRUCT_SET(BgL_res4078z00_2894, BgL_auxz00_11564,
								BgL_auxz00_11566);
					}}
					{	/* SawMill/defs.scm 51 */
						BgL_typez00_bglt BgL_arg5422z00_2902;

						BgL_arg5422z00_2902 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_obj4077z00_2891))->
							BgL_typez00);
						{	/* SawMill/defs.scm 51 */
							obj_t BgL_auxz00_11572;

							int BgL_auxz00_11570;

							BgL_auxz00_11572 = (obj_t) (BgL_arg5422z00_2902);
							BgL_auxz00_11570 = (int) (((long) 4));
							STRUCT_SET(BgL_res4078z00_2894, BgL_auxz00_11570,
								BgL_auxz00_11572);
					}}
					return BgL_res4078z00_2894;
				}
			}
		}
	}



/* struct+object->objec4677 */
	obj_t BGl_structzb2objectzd2ze3objec4677z83zzsaw_defsz00(obj_t
		BgL_envz00_6700, obj_t BgL_oz00_6701, obj_t BgL_sz00_6702)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{
				BgL_rtl_vsetz00_bglt BgL_oz00_2881;

				obj_t BgL_sz00_2882;

				{	/* SawMill/defs.scm 52 */
					BgL_rtl_vsetz00_bglt BgL_auxz00_11576;

					BgL_oz00_2881 = (BgL_rtl_vsetz00_bglt) (BgL_oz00_6701);
					BgL_sz00_2882 = BgL_sz00_6702;
					{	/* SawMill/defs.scm 52 */
						obj_t BgL_arg5412z00_2885;

						BgL_arg5412z00_2885 = STRUCT_REF(BgL_sz00_2882, (int) (((long) 0)));
						{	/* SawMill/defs.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_11579;

							BgL_auxz00_11579 = (BgL_objectz00_bglt) (BgL_oz00_2881);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11579, BgL_arg5412z00_2885);
					}}
					{
						obj_t BgL_auxz00_11582;

						BgL_auxz00_11582 = STRUCT_REF(BgL_sz00_2882, (int) (((long) 1)));
						((((BgL_rtl_vsetz00_bglt) CREF(BgL_oz00_2881))->BgL_locz00) =
							((obj_t) BgL_auxz00_11582), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11586;

						BgL_auxz00_11586 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2882,
								(int) (((long) 2))));
						((((BgL_rtl_vsetz00_bglt) CREF(BgL_oz00_2881))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11586), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11591;

						BgL_auxz00_11591 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2882,
								(int) (((long) 3))));
						((((BgL_rtl_vsetz00_bglt) CREF(BgL_oz00_2881))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_11591), BUNSPEC);
					}
					BgL_auxz00_11576 = BgL_oz00_2881;
					return (obj_t) (BgL_auxz00_11576);
				}
			}
		}
	}



/* object->struct-rtl_v4675 */
	obj_t BGl_objectzd2ze3structzd2rtl_v4675ze3zzsaw_defsz00(obj_t
		BgL_envz00_6703, obj_t BgL_obj4120z00_6704)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 52 */
			{
				BgL_rtl_vsetz00_bglt BgL_obj4120z00_2869;

				BgL_obj4120z00_2869 = (BgL_rtl_vsetz00_bglt) (BgL_obj4120z00_6704);
				{	/* SawMill/defs.scm 52 */
					obj_t BgL_res4121z00_2872;

					{	/* SawMill/defs.scm 52 */
						obj_t BgL_keyz00_5298;

						BgL_keyz00_5298 = CNST_TABLE_REF(((long) 31));
						BgL_res4121z00_2872 =
							make_struct(BgL_keyz00_5298, (int) (((long) 4)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 52 */
						int BgL_auxz00_11601;

						BgL_auxz00_11601 = (int) (((long) 0));
						STRUCT_SET(BgL_res4121z00_2872, BgL_auxz00_11601, BFALSE);
					}
					{	/* SawMill/defs.scm 52 */
						obj_t BgL_arg5406z00_2874;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11604;

							BgL_auxz00_11604 = (BgL_rtl_funz00_bglt) (BgL_obj4120z00_2869);
							BgL_arg5406z00_2874 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11604))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 52 */
							int BgL_auxz00_11607;

							BgL_auxz00_11607 = (int) (((long) 1));
							STRUCT_SET(BgL_res4121z00_2872, BgL_auxz00_11607,
								BgL_arg5406z00_2874);
					}}
					{	/* SawMill/defs.scm 52 */
						BgL_typez00_bglt BgL_arg5408z00_2876;

						BgL_arg5408z00_2876 =
							(((BgL_rtl_vsetz00_bglt) CREF(BgL_obj4120z00_2869))->BgL_typez00);
						{	/* SawMill/defs.scm 52 */
							obj_t BgL_auxz00_11613;

							int BgL_auxz00_11611;

							BgL_auxz00_11613 = (obj_t) (BgL_arg5408z00_2876);
							BgL_auxz00_11611 = (int) (((long) 2));
							STRUCT_SET(BgL_res4121z00_2872, BgL_auxz00_11611,
								BgL_auxz00_11613);
					}}
					{	/* SawMill/defs.scm 52 */
						BgL_typez00_bglt BgL_arg5410z00_2878;

						BgL_arg5410z00_2878 =
							(((BgL_rtl_vsetz00_bglt) CREF(BgL_obj4120z00_2869))->
							BgL_vtypez00);
						{	/* SawMill/defs.scm 52 */
							obj_t BgL_auxz00_11619;

							int BgL_auxz00_11617;

							BgL_auxz00_11619 = (obj_t) (BgL_arg5410z00_2878);
							BgL_auxz00_11617 = (int) (((long) 3));
							STRUCT_SET(BgL_res4121z00_2872, BgL_auxz00_11617,
								BgL_auxz00_11619);
					}}
					return BgL_res4121z00_2872;
				}
			}
		}
	}



/* struct+object->objec4673 */
	obj_t BGl_structzb2objectzd2ze3objec4673z83zzsaw_defsz00(obj_t
		BgL_envz00_6705, obj_t BgL_oz00_6706, obj_t BgL_sz00_6707)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{
				BgL_rtl_boxsetz00_bglt BgL_oz00_2861;

				obj_t BgL_sz00_2862;

				{	/* SawMill/defs.scm 53 */
					BgL_rtl_boxsetz00_bglt BgL_auxz00_11623;

					BgL_oz00_2861 = (BgL_rtl_boxsetz00_bglt) (BgL_oz00_6706);
					BgL_sz00_2862 = BgL_sz00_6707;
					{	/* SawMill/defs.scm 53 */
						obj_t BgL_arg5403z00_2865;

						BgL_arg5403z00_2865 = STRUCT_REF(BgL_sz00_2862, (int) (((long) 0)));
						{	/* SawMill/defs.scm 53 */
							BgL_objectz00_bglt BgL_auxz00_11626;

							BgL_auxz00_11626 = (BgL_objectz00_bglt) (BgL_oz00_2861);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11626, BgL_arg5403z00_2865);
					}}
					{
						obj_t BgL_auxz00_11629;

						BgL_auxz00_11629 = STRUCT_REF(BgL_sz00_2862, (int) (((long) 1)));
						((((BgL_rtl_boxsetz00_bglt) CREF(BgL_oz00_2861))->BgL_locz00) =
							((obj_t) BgL_auxz00_11629), BUNSPEC);
					}
					BgL_auxz00_11623 = BgL_oz00_2861;
					return (obj_t) (BgL_auxz00_11623);
				}
			}
		}
	}



/* object->struct-rtl_b4671 */
	obj_t BGl_objectzd2ze3structzd2rtl_b4671ze3zzsaw_defsz00(obj_t
		BgL_envz00_6708, obj_t BgL_obj4149z00_6709)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 53 */
			{
				BgL_rtl_boxsetz00_bglt BgL_obj4149z00_2853;

				BgL_obj4149z00_2853 = (BgL_rtl_boxsetz00_bglt) (BgL_obj4149z00_6709);
				{	/* SawMill/defs.scm 53 */
					obj_t BgL_res4150z00_2856;

					{	/* SawMill/defs.scm 53 */
						obj_t BgL_keyz00_5284;

						BgL_keyz00_5284 = CNST_TABLE_REF(((long) 32));
						BgL_res4150z00_2856 =
							make_struct(BgL_keyz00_5284, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 53 */
						int BgL_auxz00_11638;

						BgL_auxz00_11638 = (int) (((long) 0));
						STRUCT_SET(BgL_res4150z00_2856, BgL_auxz00_11638, BFALSE);
					}
					{	/* SawMill/defs.scm 53 */
						obj_t BgL_arg5401z00_2858;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11641;

							BgL_auxz00_11641 = (BgL_rtl_funz00_bglt) (BgL_obj4149z00_2853);
							BgL_arg5401z00_2858 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11641))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 53 */
							int BgL_auxz00_11644;

							BgL_auxz00_11644 = (int) (((long) 1));
							STRUCT_SET(BgL_res4150z00_2856, BgL_auxz00_11644,
								BgL_arg5401z00_2858);
					}}
					return BgL_res4150z00_2856;
				}
			}
		}
	}



/* struct+object->objec4669 */
	obj_t BGl_structzb2objectzd2ze3objec4669z83zzsaw_defsz00(obj_t
		BgL_envz00_6710, obj_t BgL_oz00_6711, obj_t BgL_sz00_6712)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{
				BgL_rtl_newz00_bglt BgL_oz00_2843;

				obj_t BgL_sz00_2844;

				{	/* SawMill/defs.scm 55 */
					BgL_rtl_newz00_bglt BgL_auxz00_11648;

					BgL_oz00_2843 = (BgL_rtl_newz00_bglt) (BgL_oz00_6711);
					BgL_sz00_2844 = BgL_sz00_6712;
					{	/* SawMill/defs.scm 55 */
						obj_t BgL_arg5398z00_2847;

						BgL_arg5398z00_2847 = STRUCT_REF(BgL_sz00_2844, (int) (((long) 0)));
						{	/* SawMill/defs.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_11651;

							BgL_auxz00_11651 = (BgL_objectz00_bglt) (BgL_oz00_2843);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11651, BgL_arg5398z00_2847);
					}}
					{
						obj_t BgL_auxz00_11654;

						BgL_auxz00_11654 = STRUCT_REF(BgL_sz00_2844, (int) (((long) 1)));
						((((BgL_rtl_newz00_bglt) CREF(BgL_oz00_2843))->BgL_locz00) =
							((obj_t) BgL_auxz00_11654), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11658;

						BgL_auxz00_11658 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2844,
								(int) (((long) 2))));
						((((BgL_rtl_newz00_bglt) CREF(BgL_oz00_2843))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11658), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11663;

						BgL_auxz00_11663 = STRUCT_REF(BgL_sz00_2844, (int) (((long) 3)));
						((((BgL_rtl_newz00_bglt) CREF(BgL_oz00_2843))->BgL_constrz00) =
							((obj_t) BgL_auxz00_11663), BUNSPEC);
					}
					BgL_auxz00_11648 = BgL_oz00_2843;
					return (obj_t) (BgL_auxz00_11648);
				}
			}
		}
	}



/* object->struct-rtl_n4667 */
	obj_t BGl_objectzd2ze3structzd2rtl_n4667ze3zzsaw_defsz00(obj_t
		BgL_envz00_6713, obj_t BgL_obj4179z00_6714)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 55 */
			{
				BgL_rtl_newz00_bglt BgL_obj4179z00_2831;

				BgL_obj4179z00_2831 = (BgL_rtl_newz00_bglt) (BgL_obj4179z00_6714);
				{	/* SawMill/defs.scm 55 */
					obj_t BgL_res4180z00_2834;

					{	/* SawMill/defs.scm 55 */
						obj_t BgL_keyz00_5258;

						BgL_keyz00_5258 = CNST_TABLE_REF(((long) 33));
						BgL_res4180z00_2834 =
							make_struct(BgL_keyz00_5258, (int) (((long) 4)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 55 */
						int BgL_auxz00_11672;

						BgL_auxz00_11672 = (int) (((long) 0));
						STRUCT_SET(BgL_res4180z00_2834, BgL_auxz00_11672, BFALSE);
					}
					{	/* SawMill/defs.scm 55 */
						obj_t BgL_arg5391z00_2836;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11675;

							BgL_auxz00_11675 = (BgL_rtl_funz00_bglt) (BgL_obj4179z00_2831);
							BgL_arg5391z00_2836 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11675))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 55 */
							int BgL_auxz00_11678;

							BgL_auxz00_11678 = (int) (((long) 1));
							STRUCT_SET(BgL_res4180z00_2834, BgL_auxz00_11678,
								BgL_arg5391z00_2836);
					}}
					{	/* SawMill/defs.scm 55 */
						BgL_typez00_bglt BgL_arg5393z00_2838;

						BgL_arg5393z00_2838 =
							(((BgL_rtl_newz00_bglt) CREF(BgL_obj4179z00_2831))->BgL_typez00);
						{	/* SawMill/defs.scm 55 */
							obj_t BgL_auxz00_11684;

							int BgL_auxz00_11682;

							BgL_auxz00_11684 = (obj_t) (BgL_arg5393z00_2838);
							BgL_auxz00_11682 = (int) (((long) 2));
							STRUCT_SET(BgL_res4180z00_2834, BgL_auxz00_11682,
								BgL_auxz00_11684);
					}}
					{	/* SawMill/defs.scm 55 */
						obj_t BgL_arg5396z00_2840;

						BgL_arg5396z00_2840 =
							(((BgL_rtl_newz00_bglt) CREF(BgL_obj4179z00_2831))->
							BgL_constrz00);
						{	/* SawMill/defs.scm 55 */
							int BgL_auxz00_11688;

							BgL_auxz00_11688 = (int) (((long) 3));
							STRUCT_SET(BgL_res4180z00_2834, BgL_auxz00_11688,
								BgL_arg5396z00_2840);
					}}
					return BgL_res4180z00_2834;
				}
			}
		}
	}



/* struct+object->objec4665 */
	obj_t BGl_structzb2objectzd2ze3objec4665z83zzsaw_defsz00(obj_t
		BgL_envz00_6715, obj_t BgL_oz00_6716, obj_t BgL_sz00_6717)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{
				BgL_rtl_callz00_bglt BgL_oz00_2822;

				obj_t BgL_sz00_2823;

				{	/* SawMill/defs.scm 56 */
					BgL_rtl_callz00_bglt BgL_auxz00_11692;

					BgL_oz00_2822 = (BgL_rtl_callz00_bglt) (BgL_oz00_6716);
					BgL_sz00_2823 = BgL_sz00_6717;
					{	/* SawMill/defs.scm 56 */
						obj_t BgL_arg5388z00_2826;

						BgL_arg5388z00_2826 = STRUCT_REF(BgL_sz00_2823, (int) (((long) 0)));
						{	/* SawMill/defs.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_11695;

							BgL_auxz00_11695 = (BgL_objectz00_bglt) (BgL_oz00_2822);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11695, BgL_arg5388z00_2826);
					}}
					{
						obj_t BgL_auxz00_11698;

						BgL_auxz00_11698 = STRUCT_REF(BgL_sz00_2823, (int) (((long) 1)));
						((((BgL_rtl_callz00_bglt) CREF(BgL_oz00_2822))->BgL_locz00) =
							((obj_t) BgL_auxz00_11698), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_11702;

						BgL_auxz00_11702 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_2823,
								(int) (((long) 2))));
						((((BgL_rtl_callz00_bglt) CREF(BgL_oz00_2822))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_11702), BUNSPEC);
					}
					BgL_auxz00_11692 = BgL_oz00_2822;
					return (obj_t) (BgL_auxz00_11692);
				}
			}
		}
	}



/* object->struct-rtl_c4663 */
	obj_t BGl_objectzd2ze3structzd2rtl_c4663ze3zzsaw_defsz00(obj_t
		BgL_envz00_6718, obj_t BgL_obj4212z00_6719)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 56 */
			{
				BgL_rtl_callz00_bglt BgL_obj4212z00_2812;

				BgL_obj4212z00_2812 = (BgL_rtl_callz00_bglt) (BgL_obj4212z00_6719);
				{	/* SawMill/defs.scm 56 */
					obj_t BgL_res4213z00_2815;

					{	/* SawMill/defs.scm 56 */
						obj_t BgL_keyz00_5238;

						BgL_keyz00_5238 = CNST_TABLE_REF(((long) 34));
						BgL_res4213z00_2815 =
							make_struct(BgL_keyz00_5238, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 56 */
						int BgL_auxz00_11712;

						BgL_auxz00_11712 = (int) (((long) 0));
						STRUCT_SET(BgL_res4213z00_2815, BgL_auxz00_11712, BFALSE);
					}
					{	/* SawMill/defs.scm 56 */
						obj_t BgL_arg5384z00_2817;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11715;

							BgL_auxz00_11715 = (BgL_rtl_funz00_bglt) (BgL_obj4212z00_2812);
							BgL_arg5384z00_2817 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11715))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 56 */
							int BgL_auxz00_11718;

							BgL_auxz00_11718 = (int) (((long) 1));
							STRUCT_SET(BgL_res4213z00_2815, BgL_auxz00_11718,
								BgL_arg5384z00_2817);
					}}
					{	/* SawMill/defs.scm 56 */
						BgL_globalz00_bglt BgL_arg5386z00_2819;

						BgL_arg5386z00_2819 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_obj4212z00_2812))->BgL_varz00);
						{	/* SawMill/defs.scm 56 */
							obj_t BgL_auxz00_11724;

							int BgL_auxz00_11722;

							BgL_auxz00_11724 = (obj_t) (BgL_arg5386z00_2819);
							BgL_auxz00_11722 = (int) (((long) 2));
							STRUCT_SET(BgL_res4213z00_2815, BgL_auxz00_11722,
								BgL_auxz00_11724);
					}}
					return BgL_res4213z00_2815;
				}
			}
		}
	}



/* struct+object->objec4661 */
	obj_t BGl_structzb2objectzd2ze3objec4661z83zzsaw_defsz00(obj_t
		BgL_envz00_6720, obj_t BgL_oz00_6721, obj_t BgL_sz00_6722)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{
				BgL_rtl_applyz00_bglt BgL_oz00_2804;

				obj_t BgL_sz00_2805;

				{	/* SawMill/defs.scm 57 */
					BgL_rtl_applyz00_bglt BgL_auxz00_11728;

					BgL_oz00_2804 = (BgL_rtl_applyz00_bglt) (BgL_oz00_6721);
					BgL_sz00_2805 = BgL_sz00_6722;
					{	/* SawMill/defs.scm 57 */
						obj_t BgL_arg5381z00_2808;

						BgL_arg5381z00_2808 = STRUCT_REF(BgL_sz00_2805, (int) (((long) 0)));
						{	/* SawMill/defs.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_11731;

							BgL_auxz00_11731 = (BgL_objectz00_bglt) (BgL_oz00_2804);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11731, BgL_arg5381z00_2808);
					}}
					{
						obj_t BgL_auxz00_11734;

						BgL_auxz00_11734 = STRUCT_REF(BgL_sz00_2805, (int) (((long) 1)));
						((((BgL_rtl_applyz00_bglt) CREF(BgL_oz00_2804))->BgL_locz00) =
							((obj_t) BgL_auxz00_11734), BUNSPEC);
					}
					BgL_auxz00_11728 = BgL_oz00_2804;
					return (obj_t) (BgL_auxz00_11728);
				}
			}
		}
	}



/* object->struct-rtl_a4659 */
	obj_t BGl_objectzd2ze3structzd2rtl_a4659ze3zzsaw_defsz00(obj_t
		BgL_envz00_6723, obj_t BgL_obj4235z00_6724)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 57 */
			{
				BgL_rtl_applyz00_bglt BgL_obj4235z00_2796;

				BgL_obj4235z00_2796 = (BgL_rtl_applyz00_bglt) (BgL_obj4235z00_6724);
				{	/* SawMill/defs.scm 57 */
					obj_t BgL_res4236z00_2799;

					{	/* SawMill/defs.scm 57 */
						obj_t BgL_keyz00_5224;

						BgL_keyz00_5224 = CNST_TABLE_REF(((long) 35));
						BgL_res4236z00_2799 =
							make_struct(BgL_keyz00_5224, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 57 */
						int BgL_auxz00_11743;

						BgL_auxz00_11743 = (int) (((long) 0));
						STRUCT_SET(BgL_res4236z00_2799, BgL_auxz00_11743, BFALSE);
					}
					{	/* SawMill/defs.scm 57 */
						obj_t BgL_arg5379z00_2801;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11746;

							BgL_auxz00_11746 = (BgL_rtl_funz00_bglt) (BgL_obj4235z00_2796);
							BgL_arg5379z00_2801 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11746))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 57 */
							int BgL_auxz00_11749;

							BgL_auxz00_11749 = (int) (((long) 1));
							STRUCT_SET(BgL_res4236z00_2799, BgL_auxz00_11749,
								BgL_arg5379z00_2801);
					}}
					return BgL_res4236z00_2799;
				}
			}
		}
	}



/* struct+object->objec4657 */
	obj_t BGl_structzb2objectzd2ze3objec4657z83zzsaw_defsz00(obj_t
		BgL_envz00_6725, obj_t BgL_oz00_6726, obj_t BgL_sz00_6727)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{
				BgL_rtl_lightfuncallz00_bglt BgL_oz00_2788;

				obj_t BgL_sz00_2789;

				{	/* SawMill/defs.scm 58 */
					BgL_rtl_lightfuncallz00_bglt BgL_auxz00_11753;

					BgL_oz00_2788 = (BgL_rtl_lightfuncallz00_bglt) (BgL_oz00_6726);
					BgL_sz00_2789 = BgL_sz00_6727;
					{	/* SawMill/defs.scm 58 */
						obj_t BgL_arg5376z00_2792;

						BgL_arg5376z00_2792 = STRUCT_REF(BgL_sz00_2789, (int) (((long) 0)));
						{	/* SawMill/defs.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_11756;

							BgL_auxz00_11756 = (BgL_objectz00_bglt) (BgL_oz00_2788);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11756, BgL_arg5376z00_2792);
					}}
					{
						obj_t BgL_auxz00_11759;

						BgL_auxz00_11759 = STRUCT_REF(BgL_sz00_2789, (int) (((long) 1)));
						((((BgL_rtl_lightfuncallz00_bglt) CREF(BgL_oz00_2788))->
								BgL_locz00) = ((obj_t) BgL_auxz00_11759), BUNSPEC);
					}
					BgL_auxz00_11753 = BgL_oz00_2788;
					return (obj_t) (BgL_auxz00_11753);
				}
			}
		}
	}



/* object->struct-rtl_l4655 */
	obj_t BGl_objectzd2ze3structzd2rtl_l4655ze3zzsaw_defsz00(obj_t
		BgL_envz00_6728, obj_t BgL_obj4255z00_6729)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 58 */
			{
				BgL_rtl_lightfuncallz00_bglt BgL_obj4255z00_2780;

				BgL_obj4255z00_2780 =
					(BgL_rtl_lightfuncallz00_bglt) (BgL_obj4255z00_6729);
				{	/* SawMill/defs.scm 58 */
					obj_t BgL_res4256z00_2783;

					{	/* SawMill/defs.scm 58 */
						obj_t BgL_keyz00_5210;

						BgL_keyz00_5210 = CNST_TABLE_REF(((long) 36));
						BgL_res4256z00_2783 =
							make_struct(BgL_keyz00_5210, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 58 */
						int BgL_auxz00_11768;

						BgL_auxz00_11768 = (int) (((long) 0));
						STRUCT_SET(BgL_res4256z00_2783, BgL_auxz00_11768, BFALSE);
					}
					{	/* SawMill/defs.scm 58 */
						obj_t BgL_arg5374z00_2785;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11771;

							BgL_auxz00_11771 = (BgL_rtl_funz00_bglt) (BgL_obj4255z00_2780);
							BgL_arg5374z00_2785 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11771))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 58 */
							int BgL_auxz00_11774;

							BgL_auxz00_11774 = (int) (((long) 1));
							STRUCT_SET(BgL_res4256z00_2783, BgL_auxz00_11774,
								BgL_arg5374z00_2785);
					}}
					return BgL_res4256z00_2783;
				}
			}
		}
	}



/* struct+object->objec4653 */
	obj_t BGl_structzb2objectzd2ze3objec4653z83zzsaw_defsz00(obj_t
		BgL_envz00_6730, obj_t BgL_oz00_6731, obj_t BgL_sz00_6732)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{
				BgL_rtl_funcallz00_bglt BgL_oz00_2772;

				obj_t BgL_sz00_2773;

				{	/* SawMill/defs.scm 59 */
					BgL_rtl_funcallz00_bglt BgL_auxz00_11778;

					BgL_oz00_2772 = (BgL_rtl_funcallz00_bglt) (BgL_oz00_6731);
					BgL_sz00_2773 = BgL_sz00_6732;
					{	/* SawMill/defs.scm 59 */
						obj_t BgL_arg5371z00_2776;

						BgL_arg5371z00_2776 = STRUCT_REF(BgL_sz00_2773, (int) (((long) 0)));
						{	/* SawMill/defs.scm 59 */
							BgL_objectz00_bglt BgL_auxz00_11781;

							BgL_auxz00_11781 = (BgL_objectz00_bglt) (BgL_oz00_2772);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11781, BgL_arg5371z00_2776);
					}}
					{
						obj_t BgL_auxz00_11784;

						BgL_auxz00_11784 = STRUCT_REF(BgL_sz00_2773, (int) (((long) 1)));
						((((BgL_rtl_funcallz00_bglt) CREF(BgL_oz00_2772))->BgL_locz00) =
							((obj_t) BgL_auxz00_11784), BUNSPEC);
					}
					BgL_auxz00_11778 = BgL_oz00_2772;
					return (obj_t) (BgL_auxz00_11778);
				}
			}
		}
	}



/* object->struct-rtl_f4651 */
	obj_t BGl_objectzd2ze3structzd2rtl_f4651ze3zzsaw_defsz00(obj_t
		BgL_envz00_6733, obj_t BgL_obj4274z00_6734)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 59 */
			{
				BgL_rtl_funcallz00_bglt BgL_obj4274z00_2764;

				BgL_obj4274z00_2764 = (BgL_rtl_funcallz00_bglt) (BgL_obj4274z00_6734);
				{	/* SawMill/defs.scm 59 */
					obj_t BgL_res4275z00_2767;

					{	/* SawMill/defs.scm 59 */
						obj_t BgL_keyz00_5196;

						BgL_keyz00_5196 = CNST_TABLE_REF(((long) 37));
						BgL_res4275z00_2767 =
							make_struct(BgL_keyz00_5196, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 59 */
						int BgL_auxz00_11793;

						BgL_auxz00_11793 = (int) (((long) 0));
						STRUCT_SET(BgL_res4275z00_2767, BgL_auxz00_11793, BFALSE);
					}
					{	/* SawMill/defs.scm 59 */
						obj_t BgL_arg5369z00_2769;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11796;

							BgL_auxz00_11796 = (BgL_rtl_funz00_bglt) (BgL_obj4274z00_2764);
							BgL_arg5369z00_2769 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11796))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 59 */
							int BgL_auxz00_11799;

							BgL_auxz00_11799 = (int) (((long) 1));
							STRUCT_SET(BgL_res4275z00_2767, BgL_auxz00_11799,
								BgL_arg5369z00_2769);
					}}
					return BgL_res4275z00_2767;
				}
			}
		}
	}



/* struct+object->objec4649 */
	obj_t BGl_structzb2objectzd2ze3objec4649z83zzsaw_defsz00(obj_t
		BgL_envz00_6735, obj_t BgL_oz00_6736, obj_t BgL_sz00_6737)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{
				BgL_rtl_pragmaz00_bglt BgL_oz00_2755;

				obj_t BgL_sz00_2756;

				{	/* SawMill/defs.scm 60 */
					BgL_rtl_pragmaz00_bglt BgL_auxz00_11803;

					BgL_oz00_2755 = (BgL_rtl_pragmaz00_bglt) (BgL_oz00_6736);
					BgL_sz00_2756 = BgL_sz00_6737;
					{	/* SawMill/defs.scm 60 */
						obj_t BgL_arg5366z00_2759;

						BgL_arg5366z00_2759 = STRUCT_REF(BgL_sz00_2756, (int) (((long) 0)));
						{	/* SawMill/defs.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_11806;

							BgL_auxz00_11806 = (BgL_objectz00_bglt) (BgL_oz00_2755);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11806, BgL_arg5366z00_2759);
					}}
					{
						obj_t BgL_auxz00_11809;

						BgL_auxz00_11809 = STRUCT_REF(BgL_sz00_2756, (int) (((long) 1)));
						((((BgL_rtl_pragmaz00_bglt) CREF(BgL_oz00_2755))->BgL_locz00) =
							((obj_t) BgL_auxz00_11809), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11813;

						BgL_auxz00_11813 = STRUCT_REF(BgL_sz00_2756, (int) (((long) 2)));
						((((BgL_rtl_pragmaz00_bglt) CREF(BgL_oz00_2755))->BgL_formatz00) =
							((obj_t) BgL_auxz00_11813), BUNSPEC);
					}
					BgL_auxz00_11803 = BgL_oz00_2755;
					return (obj_t) (BgL_auxz00_11803);
				}
			}
		}
	}



/* object->struct-rtl_p4647 */
	obj_t BGl_objectzd2ze3structzd2rtl_p4647ze3zzsaw_defsz00(obj_t
		BgL_envz00_6738, obj_t BgL_obj4299z00_6739)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 60 */
			{
				BgL_rtl_pragmaz00_bglt BgL_obj4299z00_2745;

				BgL_obj4299z00_2745 = (BgL_rtl_pragmaz00_bglt) (BgL_obj4299z00_6739);
				{	/* SawMill/defs.scm 60 */
					obj_t BgL_res4300z00_2748;

					{	/* SawMill/defs.scm 60 */
						obj_t BgL_keyz00_5176;

						BgL_keyz00_5176 = CNST_TABLE_REF(((long) 38));
						BgL_res4300z00_2748 =
							make_struct(BgL_keyz00_5176, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 60 */
						int BgL_auxz00_11822;

						BgL_auxz00_11822 = (int) (((long) 0));
						STRUCT_SET(BgL_res4300z00_2748, BgL_auxz00_11822, BFALSE);
					}
					{	/* SawMill/defs.scm 60 */
						obj_t BgL_arg5362z00_2750;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11825;

							BgL_auxz00_11825 = (BgL_rtl_funz00_bglt) (BgL_obj4299z00_2745);
							BgL_arg5362z00_2750 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11825))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 60 */
							int BgL_auxz00_11828;

							BgL_auxz00_11828 = (int) (((long) 1));
							STRUCT_SET(BgL_res4300z00_2748, BgL_auxz00_11828,
								BgL_arg5362z00_2750);
					}}
					{	/* SawMill/defs.scm 60 */
						obj_t BgL_arg5364z00_2752;

						BgL_arg5364z00_2752 =
							(((BgL_rtl_pragmaz00_bglt) CREF(BgL_obj4299z00_2745))->
							BgL_formatz00);
						{	/* SawMill/defs.scm 60 */
							int BgL_auxz00_11832;

							BgL_auxz00_11832 = (int) (((long) 2));
							STRUCT_SET(BgL_res4300z00_2748, BgL_auxz00_11832,
								BgL_arg5364z00_2752);
					}}
					return BgL_res4300z00_2748;
				}
			}
		}
	}



/* struct+object->objec4645 */
	obj_t BGl_structzb2objectzd2ze3objec4645z83zzsaw_defsz00(obj_t
		BgL_envz00_6740, obj_t BgL_oz00_6741, obj_t BgL_sz00_6742)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{
				BgL_rtl_castz00_bglt BgL_oz00_2736;

				obj_t BgL_sz00_2737;

				{	/* SawMill/defs.scm 61 */
					BgL_rtl_castz00_bglt BgL_auxz00_11836;

					BgL_oz00_2736 = (BgL_rtl_castz00_bglt) (BgL_oz00_6741);
					BgL_sz00_2737 = BgL_sz00_6742;
					{	/* SawMill/defs.scm 61 */
						obj_t BgL_arg5359z00_2740;

						BgL_arg5359z00_2740 = STRUCT_REF(BgL_sz00_2737, (int) (((long) 0)));
						{	/* SawMill/defs.scm 61 */
							BgL_objectz00_bglt BgL_auxz00_11839;

							BgL_auxz00_11839 = (BgL_objectz00_bglt) (BgL_oz00_2736);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11839, BgL_arg5359z00_2740);
					}}
					{
						obj_t BgL_auxz00_11842;

						BgL_auxz00_11842 = STRUCT_REF(BgL_sz00_2737, (int) (((long) 1)));
						((((BgL_rtl_castz00_bglt) CREF(BgL_oz00_2736))->BgL_locz00) =
							((obj_t) BgL_auxz00_11842), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11846;

						BgL_auxz00_11846 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2737,
								(int) (((long) 2))));
						((((BgL_rtl_castz00_bglt) CREF(BgL_oz00_2736))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11846), BUNSPEC);
					}
					BgL_auxz00_11836 = BgL_oz00_2736;
					return (obj_t) (BgL_auxz00_11836);
				}
			}
		}
	}



/* object->struct-rtl_c4643 */
	obj_t BGl_objectzd2ze3structzd2rtl_c4643ze3zzsaw_defsz00(obj_t
		BgL_envz00_6743, obj_t BgL_obj4328z00_6744)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 61 */
			{
				BgL_rtl_castz00_bglt BgL_obj4328z00_2726;

				BgL_obj4328z00_2726 = (BgL_rtl_castz00_bglt) (BgL_obj4328z00_6744);
				{	/* SawMill/defs.scm 61 */
					obj_t BgL_res4329z00_2729;

					{	/* SawMill/defs.scm 61 */
						obj_t BgL_keyz00_5156;

						BgL_keyz00_5156 = CNST_TABLE_REF(((long) 39));
						BgL_res4329z00_2729 =
							make_struct(BgL_keyz00_5156, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 61 */
						int BgL_auxz00_11856;

						BgL_auxz00_11856 = (int) (((long) 0));
						STRUCT_SET(BgL_res4329z00_2729, BgL_auxz00_11856, BFALSE);
					}
					{	/* SawMill/defs.scm 61 */
						obj_t BgL_arg5355z00_2731;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11859;

							BgL_auxz00_11859 = (BgL_rtl_funz00_bglt) (BgL_obj4328z00_2726);
							BgL_arg5355z00_2731 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11859))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 61 */
							int BgL_auxz00_11862;

							BgL_auxz00_11862 = (int) (((long) 1));
							STRUCT_SET(BgL_res4329z00_2729, BgL_auxz00_11862,
								BgL_arg5355z00_2731);
					}}
					{	/* SawMill/defs.scm 61 */
						BgL_typez00_bglt BgL_arg5357z00_2733;

						BgL_arg5357z00_2733 =
							(((BgL_rtl_castz00_bglt) CREF(BgL_obj4328z00_2726))->BgL_typez00);
						{	/* SawMill/defs.scm 61 */
							obj_t BgL_auxz00_11868;

							int BgL_auxz00_11866;

							BgL_auxz00_11868 = (obj_t) (BgL_arg5357z00_2733);
							BgL_auxz00_11866 = (int) (((long) 2));
							STRUCT_SET(BgL_res4329z00_2729, BgL_auxz00_11866,
								BgL_auxz00_11868);
					}}
					return BgL_res4329z00_2729;
				}
			}
		}
	}



/* struct+object->objec4641 */
	obj_t BGl_structzb2objectzd2ze3objec4641z83zzsaw_defsz00(obj_t
		BgL_envz00_6745, obj_t BgL_oz00_6746, obj_t BgL_sz00_6747)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_oz00_2717;

				obj_t BgL_sz00_2718;

				{	/* SawMill/defs.scm 62 */
					BgL_rtl_cast_nullz00_bglt BgL_auxz00_11872;

					BgL_oz00_2717 = (BgL_rtl_cast_nullz00_bglt) (BgL_oz00_6746);
					BgL_sz00_2718 = BgL_sz00_6747;
					{	/* SawMill/defs.scm 62 */
						obj_t BgL_arg5352z00_2721;

						BgL_arg5352z00_2721 = STRUCT_REF(BgL_sz00_2718, (int) (((long) 0)));
						{	/* SawMill/defs.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_11875;

							BgL_auxz00_11875 = (BgL_objectz00_bglt) (BgL_oz00_2717);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11875, BgL_arg5352z00_2721);
					}}
					{
						obj_t BgL_auxz00_11878;

						BgL_auxz00_11878 = STRUCT_REF(BgL_sz00_2718, (int) (((long) 1)));
						((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_oz00_2717))->BgL_locz00) =
							((obj_t) BgL_auxz00_11878), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11882;

						BgL_auxz00_11882 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2718,
								(int) (((long) 2))));
						((((BgL_rtl_cast_nullz00_bglt) CREF(BgL_oz00_2717))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11882), BUNSPEC);
					}
					BgL_auxz00_11872 = BgL_oz00_2717;
					return (obj_t) (BgL_auxz00_11872);
				}
			}
		}
	}



/* object->struct-rtl_c4639 */
	obj_t BGl_objectzd2ze3structzd2rtl_c4639ze3zzsaw_defsz00(obj_t
		BgL_envz00_6748, obj_t BgL_obj4356z00_6749)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 62 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_obj4356z00_2707;

				BgL_obj4356z00_2707 = (BgL_rtl_cast_nullz00_bglt) (BgL_obj4356z00_6749);
				{	/* SawMill/defs.scm 62 */
					obj_t BgL_res4357z00_2710;

					{	/* SawMill/defs.scm 62 */
						obj_t BgL_keyz00_5136;

						BgL_keyz00_5136 = CNST_TABLE_REF(((long) 40));
						BgL_res4357z00_2710 =
							make_struct(BgL_keyz00_5136, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 62 */
						int BgL_auxz00_11892;

						BgL_auxz00_11892 = (int) (((long) 0));
						STRUCT_SET(BgL_res4357z00_2710, BgL_auxz00_11892, BFALSE);
					}
					{	/* SawMill/defs.scm 62 */
						obj_t BgL_arg5348z00_2712;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11895;

							BgL_auxz00_11895 = (BgL_rtl_funz00_bglt) (BgL_obj4356z00_2707);
							BgL_arg5348z00_2712 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11895))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 62 */
							int BgL_auxz00_11898;

							BgL_auxz00_11898 = (int) (((long) 1));
							STRUCT_SET(BgL_res4357z00_2710, BgL_auxz00_11898,
								BgL_arg5348z00_2712);
					}}
					{	/* SawMill/defs.scm 62 */
						BgL_typez00_bglt BgL_arg5350z00_2714;

						BgL_arg5350z00_2714 =
							(((BgL_rtl_cast_nullz00_bglt) CREF(BgL_obj4356z00_2707))->
							BgL_typez00);
						{	/* SawMill/defs.scm 62 */
							obj_t BgL_auxz00_11904;

							int BgL_auxz00_11902;

							BgL_auxz00_11904 = (obj_t) (BgL_arg5350z00_2714);
							BgL_auxz00_11902 = (int) (((long) 2));
							STRUCT_SET(BgL_res4357z00_2710, BgL_auxz00_11902,
								BgL_auxz00_11904);
					}}
					return BgL_res4357z00_2710;
				}
			}
		}
	}



/* struct+object->objec4637 */
	obj_t BGl_structzb2objectzd2ze3objec4637z83zzsaw_defsz00(obj_t
		BgL_envz00_6750, obj_t BgL_oz00_6751, obj_t BgL_sz00_6752)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{
				BgL_rtl_protectz00_bglt BgL_oz00_2699;

				obj_t BgL_sz00_2700;

				{	/* SawMill/defs.scm 63 */
					BgL_rtl_protectz00_bglt BgL_auxz00_11908;

					BgL_oz00_2699 = (BgL_rtl_protectz00_bglt) (BgL_oz00_6751);
					BgL_sz00_2700 = BgL_sz00_6752;
					{	/* SawMill/defs.scm 63 */
						obj_t BgL_arg5345z00_2703;

						BgL_arg5345z00_2703 = STRUCT_REF(BgL_sz00_2700, (int) (((long) 0)));
						{	/* SawMill/defs.scm 63 */
							BgL_objectz00_bglt BgL_auxz00_11911;

							BgL_auxz00_11911 = (BgL_objectz00_bglt) (BgL_oz00_2699);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11911, BgL_arg5345z00_2703);
					}}
					{
						obj_t BgL_auxz00_11914;

						BgL_auxz00_11914 = STRUCT_REF(BgL_sz00_2700, (int) (((long) 1)));
						((((BgL_rtl_protectz00_bglt) CREF(BgL_oz00_2699))->BgL_locz00) =
							((obj_t) BgL_auxz00_11914), BUNSPEC);
					}
					BgL_auxz00_11908 = BgL_oz00_2699;
					return (obj_t) (BgL_auxz00_11908);
				}
			}
		}
	}



/* object->struct-rtl_p4635 */
	obj_t BGl_objectzd2ze3structzd2rtl_p4635ze3zzsaw_defsz00(obj_t
		BgL_envz00_6753, obj_t BgL_obj4380z00_6754)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 63 */
			{
				BgL_rtl_protectz00_bglt BgL_obj4380z00_2691;

				BgL_obj4380z00_2691 = (BgL_rtl_protectz00_bglt) (BgL_obj4380z00_6754);
				{	/* SawMill/defs.scm 63 */
					obj_t BgL_res4381z00_2694;

					{	/* SawMill/defs.scm 63 */
						obj_t BgL_keyz00_5122;

						BgL_keyz00_5122 = CNST_TABLE_REF(((long) 41));
						BgL_res4381z00_2694 =
							make_struct(BgL_keyz00_5122, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 63 */
						int BgL_auxz00_11923;

						BgL_auxz00_11923 = (int) (((long) 0));
						STRUCT_SET(BgL_res4381z00_2694, BgL_auxz00_11923, BFALSE);
					}
					{	/* SawMill/defs.scm 63 */
						obj_t BgL_arg5343z00_2696;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11926;

							BgL_auxz00_11926 = (BgL_rtl_funz00_bglt) (BgL_obj4380z00_2691);
							BgL_arg5343z00_2696 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11926))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 63 */
							int BgL_auxz00_11929;

							BgL_auxz00_11929 = (int) (((long) 1));
							STRUCT_SET(BgL_res4381z00_2694, BgL_auxz00_11929,
								BgL_arg5343z00_2696);
					}}
					return BgL_res4381z00_2694;
				}
			}
		}
	}



/* struct+object->objec4633 */
	obj_t BGl_structzb2objectzd2ze3objec4633z83zzsaw_defsz00(obj_t
		BgL_envz00_6755, obj_t BgL_oz00_6756, obj_t BgL_sz00_6757)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{
				BgL_rtl_protectedz00_bglt BgL_oz00_2683;

				obj_t BgL_sz00_2684;

				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectedz00_bglt BgL_auxz00_11933;

					BgL_oz00_2683 = (BgL_rtl_protectedz00_bglt) (BgL_oz00_6756);
					BgL_sz00_2684 = BgL_sz00_6757;
					{	/* SawMill/defs.scm 64 */
						obj_t BgL_arg5340z00_2687;

						BgL_arg5340z00_2687 = STRUCT_REF(BgL_sz00_2684, (int) (((long) 0)));
						{	/* SawMill/defs.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_11936;

							BgL_auxz00_11936 = (BgL_objectz00_bglt) (BgL_oz00_2683);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11936, BgL_arg5340z00_2687);
					}}
					{
						obj_t BgL_auxz00_11939;

						BgL_auxz00_11939 = STRUCT_REF(BgL_sz00_2684, (int) (((long) 1)));
						((((BgL_rtl_protectedz00_bglt) CREF(BgL_oz00_2683))->BgL_locz00) =
							((obj_t) BgL_auxz00_11939), BUNSPEC);
					}
					BgL_auxz00_11933 = BgL_oz00_2683;
					return (obj_t) (BgL_auxz00_11933);
				}
			}
		}
	}



/* object->struct-rtl_p4631 */
	obj_t BGl_objectzd2ze3structzd2rtl_p4631ze3zzsaw_defsz00(obj_t
		BgL_envz00_6758, obj_t BgL_obj4398z00_6759)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 64 */
			{
				BgL_rtl_protectedz00_bglt BgL_obj4398z00_2675;

				BgL_obj4398z00_2675 = (BgL_rtl_protectedz00_bglt) (BgL_obj4398z00_6759);
				{	/* SawMill/defs.scm 64 */
					obj_t BgL_res4399z00_2678;

					{	/* SawMill/defs.scm 64 */
						obj_t BgL_keyz00_5108;

						BgL_keyz00_5108 = CNST_TABLE_REF(((long) 42));
						BgL_res4399z00_2678 =
							make_struct(BgL_keyz00_5108, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 64 */
						int BgL_auxz00_11948;

						BgL_auxz00_11948 = (int) (((long) 0));
						STRUCT_SET(BgL_res4399z00_2678, BgL_auxz00_11948, BFALSE);
					}
					{	/* SawMill/defs.scm 64 */
						obj_t BgL_arg5338z00_2680;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_11951;

							BgL_auxz00_11951 = (BgL_rtl_funz00_bglt) (BgL_obj4398z00_2675);
							BgL_arg5338z00_2680 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_11951))->BgL_locz00);
						}
						{	/* SawMill/defs.scm 64 */
							int BgL_auxz00_11954;

							BgL_auxz00_11954 = (int) (((long) 1));
							STRUCT_SET(BgL_res4399z00_2678, BgL_auxz00_11954,
								BgL_arg5338z00_2680);
					}}
					return BgL_res4399z00_2678;
				}
			}
		}
	}



/* struct+object->objec4629 */
	obj_t BGl_structzb2objectzd2ze3objec4629z83zzsaw_defsz00(obj_t
		BgL_envz00_6760, obj_t BgL_oz00_6761, obj_t BgL_sz00_6762)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{
				BgL_rtl_insz00_bglt BgL_oz00_2663;

				obj_t BgL_sz00_2664;

				{	/* SawMill/defs.scm 67 */
					BgL_rtl_insz00_bglt BgL_auxz00_11958;

					BgL_oz00_2663 = (BgL_rtl_insz00_bglt) (BgL_oz00_6761);
					BgL_sz00_2664 = BgL_sz00_6762;
					{	/* SawMill/defs.scm 67 */
						obj_t BgL_arg5335z00_2667;

						BgL_arg5335z00_2667 = STRUCT_REF(BgL_sz00_2664, (int) (((long) 0)));
						{	/* SawMill/defs.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_11961;

							BgL_auxz00_11961 = (BgL_objectz00_bglt) (BgL_oz00_2663);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11961, BgL_arg5335z00_2667);
					}}
					{
						obj_t BgL_auxz00_11964;

						BgL_auxz00_11964 = STRUCT_REF(BgL_sz00_2664, (int) (((long) 1)));
						((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2663))->BgL_locz00) =
							((obj_t) BgL_auxz00_11964), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11968;

						BgL_auxz00_11968 = STRUCT_REF(BgL_sz00_2664, (int) (((long) 2)));
						((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2663))->BgL_z52spillz52) =
							((obj_t) BgL_auxz00_11968), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11972;

						BgL_auxz00_11972 = STRUCT_REF(BgL_sz00_2664, (int) (((long) 3)));
						((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2663))->BgL_destz00) =
							((obj_t) BgL_auxz00_11972), BUNSPEC);
					}
					{
						BgL_rtl_funz00_bglt BgL_auxz00_11976;

						BgL_auxz00_11976 =
							(BgL_rtl_funz00_bglt) (STRUCT_REF(BgL_sz00_2664,
								(int) (((long) 4))));
						((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2663))->BgL_funz00) =
							((BgL_rtl_funz00_bglt) BgL_auxz00_11976), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11981;

						BgL_auxz00_11981 = STRUCT_REF(BgL_sz00_2664, (int) (((long) 5)));
						((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2663))->BgL_argsz00) =
							((obj_t) BgL_auxz00_11981), BUNSPEC);
					}
					BgL_auxz00_11958 = BgL_oz00_2663;
					return (obj_t) (BgL_auxz00_11958);
				}
			}
		}
	}



/* object->struct-rtl_i4627 */
	obj_t BGl_objectzd2ze3structzd2rtl_i4627ze3zzsaw_defsz00(obj_t
		BgL_envz00_6763, obj_t BgL_obj4440z00_6764)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			{
				BgL_rtl_insz00_bglt BgL_obj4440z00_2647;

				BgL_obj4440z00_2647 = (BgL_rtl_insz00_bglt) (BgL_obj4440z00_6764);
				{	/* SawMill/defs.scm 67 */
					obj_t BgL_res4441z00_2650;

					{	/* SawMill/defs.scm 67 */
						obj_t BgL_keyz00_5070;

						BgL_keyz00_5070 = CNST_TABLE_REF(((long) 43));
						BgL_res4441z00_2650 =
							make_struct(BgL_keyz00_5070, (int) (((long) 6)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 67 */
						int BgL_auxz00_11990;

						BgL_auxz00_11990 = (int) (((long) 0));
						STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_11990, BFALSE);
					}
					{	/* SawMill/defs.scm 67 */
						obj_t BgL_arg5325z00_2652;

						BgL_arg5325z00_2652 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4440z00_2647))->BgL_locz00);
						{	/* SawMill/defs.scm 67 */
							int BgL_auxz00_11994;

							BgL_auxz00_11994 = (int) (((long) 1));
							STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_11994,
								BgL_arg5325z00_2652);
					}}
					{	/* SawMill/defs.scm 67 */
						obj_t BgL_arg5327z00_2654;

						BgL_arg5327z00_2654 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4440z00_2647))->
							BgL_z52spillz52);
						{	/* SawMill/defs.scm 67 */
							int BgL_auxz00_11998;

							BgL_auxz00_11998 = (int) (((long) 2));
							STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_11998,
								BgL_arg5327z00_2654);
					}}
					{	/* SawMill/defs.scm 67 */
						obj_t BgL_arg5329z00_2656;

						BgL_arg5329z00_2656 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4440z00_2647))->BgL_destz00);
						{	/* SawMill/defs.scm 67 */
							int BgL_auxz00_12002;

							BgL_auxz00_12002 = (int) (((long) 3));
							STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_12002,
								BgL_arg5329z00_2656);
					}}
					{	/* SawMill/defs.scm 67 */
						BgL_rtl_funz00_bglt BgL_arg5331z00_2658;

						BgL_arg5331z00_2658 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4440z00_2647))->BgL_funz00);
						{	/* SawMill/defs.scm 67 */
							obj_t BgL_auxz00_12008;

							int BgL_auxz00_12006;

							BgL_auxz00_12008 = (obj_t) (BgL_arg5331z00_2658);
							BgL_auxz00_12006 = (int) (((long) 4));
							STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_12006,
								BgL_auxz00_12008);
					}}
					{	/* SawMill/defs.scm 67 */
						obj_t BgL_arg5333z00_2660;

						BgL_arg5333z00_2660 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4440z00_2647))->BgL_argsz00);
						{	/* SawMill/defs.scm 67 */
							int BgL_auxz00_12012;

							BgL_auxz00_12012 = (int) (((long) 5));
							STRUCT_SET(BgL_res4441z00_2650, BgL_auxz00_12012,
								BgL_arg5333z00_2660);
					}}
					return BgL_res4441z00_2650;
				}
			}
		}
	}



/* struct+object->objec4625 */
	obj_t BGl_structzb2objectzd2ze3objec4625z83zzsaw_defsz00(obj_t
		BgL_envz00_6765, obj_t BgL_oz00_6766, obj_t BgL_sz00_6767)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{
				BgL_blockz00_bglt BgL_oz00_2636;

				obj_t BgL_sz00_2637;

				{	/* SawMill/defs.scm 75 */
					BgL_blockz00_bglt BgL_auxz00_12016;

					BgL_oz00_2636 = (BgL_blockz00_bglt) (BgL_oz00_6766);
					BgL_sz00_2637 = BgL_sz00_6767;
					{	/* SawMill/defs.scm 75 */
						obj_t BgL_arg5322z00_2640;

						BgL_arg5322z00_2640 = STRUCT_REF(BgL_sz00_2637, (int) (((long) 0)));
						{	/* SawMill/defs.scm 75 */
							BgL_objectz00_bglt BgL_auxz00_12019;

							BgL_auxz00_12019 = (BgL_objectz00_bglt) (BgL_oz00_2636);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12019, BgL_arg5322z00_2640);
					}}
					{
						int BgL_auxz00_12022;

						BgL_auxz00_12022 =
							CINT(STRUCT_REF(BgL_sz00_2637, (int) (((long) 1))));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2636))->BgL_labelz00) =
							((int) BgL_auxz00_12022), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12027;

						BgL_auxz00_12027 = STRUCT_REF(BgL_sz00_2637, (int) (((long) 2)));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2636))->BgL_predsz00) =
							((obj_t) BgL_auxz00_12027), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12031;

						BgL_auxz00_12031 = STRUCT_REF(BgL_sz00_2637, (int) (((long) 3)));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2636))->BgL_succsz00) =
							((obj_t) BgL_auxz00_12031), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12035;

						BgL_auxz00_12035 = STRUCT_REF(BgL_sz00_2637, (int) (((long) 4)));
						((((BgL_blockz00_bglt) CREF(BgL_oz00_2636))->BgL_firstz00) =
							((obj_t) BgL_auxz00_12035), BUNSPEC);
					}
					BgL_auxz00_12016 = BgL_oz00_2636;
					return (obj_t) (BgL_auxz00_12016);
				}
			}
		}
	}



/* object->struct-block4623 */
	obj_t BGl_objectzd2ze3structzd2block4623ze3zzsaw_defsz00(obj_t
		BgL_envz00_6768, obj_t BgL_obj4492z00_6769)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 75 */
			{
				BgL_blockz00_bglt BgL_obj4492z00_2622;

				BgL_obj4492z00_2622 = (BgL_blockz00_bglt) (BgL_obj4492z00_6769);
				{	/* SawMill/defs.scm 75 */
					obj_t BgL_res4493z00_2625;

					{	/* SawMill/defs.scm 75 */
						obj_t BgL_keyz00_5038;

						BgL_keyz00_5038 = CNST_TABLE_REF(((long) 44));
						BgL_res4493z00_2625 =
							make_struct(BgL_keyz00_5038, (int) (((long) 5)), BUNSPEC);
					}
					{	/* SawMill/defs.scm 75 */
						int BgL_auxz00_12044;

						BgL_auxz00_12044 = (int) (((long) 0));
						STRUCT_SET(BgL_res4493z00_2625, BgL_auxz00_12044, BFALSE);
					}
					{	/* SawMill/defs.scm 75 */
						int BgL_arg5314z00_2627;

						BgL_arg5314z00_2627 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4492z00_2622))->BgL_labelz00);
						{	/* SawMill/defs.scm 75 */
							obj_t BgL_auxz00_12050;

							int BgL_auxz00_12048;

							BgL_auxz00_12050 = BINT(BgL_arg5314z00_2627);
							BgL_auxz00_12048 = (int) (((long) 1));
							STRUCT_SET(BgL_res4493z00_2625, BgL_auxz00_12048,
								BgL_auxz00_12050);
					}}
					{	/* SawMill/defs.scm 75 */
						obj_t BgL_arg5316z00_2629;

						BgL_arg5316z00_2629 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4492z00_2622))->BgL_predsz00);
						{	/* SawMill/defs.scm 75 */
							int BgL_auxz00_12054;

							BgL_auxz00_12054 = (int) (((long) 2));
							STRUCT_SET(BgL_res4493z00_2625, BgL_auxz00_12054,
								BgL_arg5316z00_2629);
					}}
					{	/* SawMill/defs.scm 75 */
						obj_t BgL_arg5318z00_2631;

						BgL_arg5318z00_2631 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4492z00_2622))->BgL_succsz00);
						{	/* SawMill/defs.scm 75 */
							int BgL_auxz00_12058;

							BgL_auxz00_12058 = (int) (((long) 3));
							STRUCT_SET(BgL_res4493z00_2625, BgL_auxz00_12058,
								BgL_arg5318z00_2631);
					}}
					{	/* SawMill/defs.scm 75 */
						obj_t BgL_arg5320z00_2633;

						BgL_arg5320z00_2633 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4492z00_2622))->BgL_firstz00);
						{	/* SawMill/defs.scm 75 */
							int BgL_auxz00_12062;

							BgL_auxz00_12062 = (int) (((long) 4));
							STRUCT_SET(BgL_res4493z00_2625, BgL_auxz00_12062,
								BgL_arg5320z00_2633);
					}}
					return BgL_res4493z00_2625;
				}
			}
		}
	}



/* dump-fun-rtl_call4621 */
	obj_t BGl_dumpzd2funzd2rtl_call4621z00zzsaw_defsz00(obj_t BgL_envz00_6770,
		obj_t BgL_oz00_6771, obj_t BgL_destz00_6772, obj_t BgL_argsz00_6773,
		obj_t BgL_pz00_6774, obj_t BgL_mz00_6775)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 361 */
			{
				BgL_rtl_callz00_bglt BgL_oz00_2607;

				obj_t BgL_destz00_2608;

				obj_t BgL_argsz00_2609;

				obj_t BgL_pz00_2610;

				obj_t BgL_mz00_2611;

				{	/* SawMill/defs.scm 362 */
					bool_t BgL_auxz00_12066;

					BgL_oz00_2607 = (BgL_rtl_callz00_bglt) (BgL_oz00_6771);
					BgL_destz00_2608 = BgL_destz00_6772;
					BgL_argsz00_2609 = BgL_argsz00_6773;
					BgL_pz00_2610 = BgL_pz00_6774;
					BgL_mz00_2611 = BgL_mz00_6775;
					{	/* SawMill/defs.scm 363 */
						obj_t BgL_arg5310z00_2615;

						{	/* SawMill/defs.scm 363 */
							obj_t BgL_ouz00_2616;

							obj_t BgL_oaz00_2617;

							BgL_ouz00_2616 = BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
							BgL_oaz00_2617 = BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
							BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
							BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 = BFALSE;
							{	/* SawMill/defs.scm 367 */
								obj_t BgL_rz00_2618;

								{	/* SawMill/defs.scm 367 */
									BgL_globalz00_bglt BgL_arg5311z00_2619;

									BgL_arg5311z00_2619 =
										(((BgL_rtl_callz00_bglt) CREF(BgL_oz00_2607))->BgL_varz00);
									BgL_rz00_2618 =
										BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5311z00_2619));
								}
								BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BgL_ouz00_2616;
								BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 =
									BgL_oaz00_2617;
								BgL_arg5310z00_2615 = BgL_rz00_2618;
							}
						}
						bgl_display_obj(BgL_arg5310z00_2615, BgL_pz00_2610);
					}
					BgL_auxz00_12066 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2609, BgL_pz00_2610);
					return BBOOL(BgL_auxz00_12066);
				}
			}
		}
	}



/* dump-fun-rtl_go4619 */
	obj_t BGl_dumpzd2funzd2rtl_go4619z00zzsaw_defsz00(obj_t BgL_envz00_6776,
		obj_t BgL_oz00_6777, obj_t BgL_destz00_6778, obj_t BgL_argsz00_6779,
		obj_t BgL_pz00_6780, obj_t BgL_mz00_6781)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 351 */
			{
				BgL_rtl_goz00_bglt BgL_oz00_2595;

				obj_t BgL_destz00_2596;

				obj_t BgL_argsz00_2597;

				obj_t BgL_pz00_2598;

				obj_t BgL_mz00_2599;

				{	/* SawMill/defs.scm 352 */
					bool_t BgL_auxz00_12074;

					BgL_oz00_2595 = (BgL_rtl_goz00_bglt) (BgL_oz00_6777);
					BgL_destz00_2596 = BgL_destz00_6778;
					BgL_argsz00_2597 = BgL_argsz00_6779;
					BgL_pz00_2598 = BgL_pz00_6780;
					BgL_mz00_2599 = BgL_mz00_6781;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2595), BgL_pz00_2598);
					bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2598);
					{	/* SawMill/defs.scm 352 */
						int BgL_arg5307z00_5031;

						{	/* SawMill/defs.scm 352 */
							BgL_blockz00_bglt BgL_obj4463z00_5036;

							BgL_obj4463z00_5036 =
								(((BgL_rtl_goz00_bglt) CREF(BgL_oz00_2595))->BgL_toz00);
							BgL_arg5307z00_5031 =
								(((BgL_blockz00_bglt) CREF(BgL_obj4463z00_5036))->BgL_labelz00);
						}
						bgl_display_obj(BINT(BgL_arg5307z00_5031), BgL_pz00_2598);
					}
					BgL_auxz00_12074 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2597, BgL_pz00_2598);
					return BBOOL(BgL_auxz00_12074);
				}
			}
		}
	}



/* dump-fun-rtl_ifne4617 */
	obj_t BGl_dumpzd2funzd2rtl_ifne4617z00zzsaw_defsz00(obj_t BgL_envz00_6782,
		obj_t BgL_oz00_6783, obj_t BgL_destz00_6784, obj_t BgL_argsz00_6785,
		obj_t BgL_pz00_6786, obj_t BgL_mz00_6787)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 341 */
			{
				BgL_rtl_ifnez00_bglt BgL_oz00_2583;

				obj_t BgL_destz00_2584;

				obj_t BgL_argsz00_2585;

				obj_t BgL_pz00_2586;

				obj_t BgL_mz00_2587;

				BgL_oz00_2583 = (BgL_rtl_ifnez00_bglt) (BgL_oz00_6783);
				BgL_destz00_2584 = BgL_destz00_6784;
				BgL_argsz00_2585 = BgL_argsz00_6785;
				BgL_pz00_2586 = BgL_pz00_6786;
				BgL_mz00_2587 = BgL_mz00_6787;
				BGl_showzd2funzd2zzsaw_defsz00((obj_t) (BgL_oz00_2583), BgL_pz00_2586);
				BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2585, BgL_pz00_2586);
				bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2586);
				{	/* SawMill/defs.scm 342 */
					int BgL_arg5304z00_5024;

					{	/* SawMill/defs.scm 342 */
						BgL_blockz00_bglt BgL_obj4463z00_5029;

						BgL_obj4463z00_5029 =
							(((BgL_rtl_ifnez00_bglt) CREF(BgL_oz00_2583))->BgL_thenz00);
						BgL_arg5304z00_5024 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4463z00_5029))->BgL_labelz00);
					}
					return bgl_display_obj(BINT(BgL_arg5304z00_5024), BgL_pz00_2586);
				}
			}
		}
	}



/* dump-fun-rtl_ifeq4615 */
	obj_t BGl_dumpzd2funzd2rtl_ifeq4615z00zzsaw_defsz00(obj_t BgL_envz00_6788,
		obj_t BgL_oz00_6789, obj_t BgL_destz00_6790, obj_t BgL_argsz00_6791,
		obj_t BgL_pz00_6792, obj_t BgL_mz00_6793)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 331 */
			{
				BgL_rtl_ifeqz00_bglt BgL_oz00_2571;

				obj_t BgL_destz00_2572;

				obj_t BgL_argsz00_2573;

				obj_t BgL_pz00_2574;

				obj_t BgL_mz00_2575;

				BgL_oz00_2571 = (BgL_rtl_ifeqz00_bglt) (BgL_oz00_6789);
				BgL_destz00_2572 = BgL_destz00_6790;
				BgL_argsz00_2573 = BgL_argsz00_6791;
				BgL_pz00_2574 = BgL_pz00_6792;
				BgL_mz00_2575 = BgL_mz00_6793;
				BGl_showzd2funzd2zzsaw_defsz00((obj_t) (BgL_oz00_2571), BgL_pz00_2574);
				BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2573, BgL_pz00_2574);
				bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2574);
				{	/* SawMill/defs.scm 332 */
					int BgL_arg5301z00_5017;

					{	/* SawMill/defs.scm 332 */
						BgL_blockz00_bglt BgL_obj4463z00_5022;

						BgL_obj4463z00_5022 =
							(((BgL_rtl_ifeqz00_bglt) CREF(BgL_oz00_2571))->BgL_thenz00);
						BgL_arg5301z00_5017 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4463z00_5022))->BgL_labelz00);
					}
					return bgl_display_obj(BINT(BgL_arg5301z00_5017), BgL_pz00_2574);
				}
			}
		}
	}



/* dump-fun-rtl_globalr4613 */
	obj_t BGl_dumpzd2funzd2rtl_globalr4613z00zzsaw_defsz00(obj_t BgL_envz00_6794,
		obj_t BgL_oz00_6795, obj_t BgL_destz00_6796, obj_t BgL_argsz00_6797,
		obj_t BgL_pz00_6798, obj_t BgL_mz00_6799)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 322 */
			{
				BgL_rtl_globalrefz00_bglt BgL_oz00_2560;

				obj_t BgL_destz00_2561;

				obj_t BgL_argsz00_2562;

				obj_t BgL_pz00_2563;

				obj_t BgL_mz00_2564;

				{	/* SawMill/defs.scm 323 */
					bool_t BgL_auxz00_12103;

					BgL_oz00_2560 = (BgL_rtl_globalrefz00_bglt) (BgL_oz00_6795);
					BgL_destz00_2561 = BgL_destz00_6796;
					BgL_argsz00_2562 = BgL_argsz00_6797;
					BgL_pz00_2563 = BgL_pz00_6798;
					BgL_mz00_2564 = BgL_mz00_6799;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2560), BgL_pz00_2563);
					bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2563);
					{	/* SawMill/defs.scm 325 */
						obj_t BgL_arg5298z00_5011;

						{	/* SawMill/defs.scm 325 */
							BgL_globalz00_bglt BgL_arg5299z00_5012;

							BgL_arg5299z00_5012 =
								(((BgL_rtl_globalrefz00_bglt) CREF(BgL_oz00_2560))->BgL_varz00);
							BgL_arg5298z00_5011 =
								BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5299z00_5012));
						}
						bgl_display_obj(BgL_arg5298z00_5011, BgL_pz00_2563);
					}
					BgL_auxz00_12103 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2562, BgL_pz00_2563);
					return BBOOL(BgL_auxz00_12103);
				}
			}
		}
	}



/* dump-fun-rtl_loadfun4611 */
	obj_t BGl_dumpzd2funzd2rtl_loadfun4611z00zzsaw_defsz00(obj_t BgL_envz00_6800,
		obj_t BgL_oz00_6801, obj_t BgL_destz00_6802, obj_t BgL_argsz00_6803,
		obj_t BgL_pz00_6804, obj_t BgL_mz00_6805)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 313 */
			{
				BgL_rtl_loadfunz00_bglt BgL_oz00_2549;

				obj_t BgL_destz00_2550;

				obj_t BgL_argsz00_2551;

				obj_t BgL_pz00_2552;

				obj_t BgL_mz00_2553;

				{	/* SawMill/defs.scm 314 */
					bool_t BgL_auxz00_12114;

					BgL_oz00_2549 = (BgL_rtl_loadfunz00_bglt) (BgL_oz00_6801);
					BgL_destz00_2550 = BgL_destz00_6802;
					BgL_argsz00_2551 = BgL_argsz00_6803;
					BgL_pz00_2552 = BgL_pz00_6804;
					BgL_mz00_2553 = BgL_mz00_6805;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2549), BgL_pz00_2552);
					bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2552);
					{	/* SawMill/defs.scm 316 */
						obj_t BgL_arg5295z00_5006;

						{	/* SawMill/defs.scm 316 */
							BgL_globalz00_bglt BgL_arg5296z00_5007;

							BgL_arg5296z00_5007 =
								(((BgL_rtl_loadfunz00_bglt) CREF(BgL_oz00_2549))->BgL_varz00);
							BgL_arg5295z00_5006 =
								BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5296z00_5007));
						}
						bgl_display_obj(BgL_arg5295z00_5006, BgL_pz00_2552);
					}
					BgL_auxz00_12114 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2551, BgL_pz00_2552);
					return BBOOL(BgL_auxz00_12114);
				}
			}
		}
	}



/* dump-fun-rtl_loadg4609 */
	obj_t BGl_dumpzd2funzd2rtl_loadg4609z00zzsaw_defsz00(obj_t BgL_envz00_6806,
		obj_t BgL_oz00_6807, obj_t BgL_destz00_6808, obj_t BgL_argsz00_6809,
		obj_t BgL_pz00_6810, obj_t BgL_mz00_6811)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 304 */
			{
				BgL_rtl_loadgz00_bglt BgL_oz00_2538;

				obj_t BgL_destz00_2539;

				obj_t BgL_argsz00_2540;

				obj_t BgL_pz00_2541;

				obj_t BgL_mz00_2542;

				{	/* SawMill/defs.scm 305 */
					bool_t BgL_auxz00_12125;

					BgL_oz00_2538 = (BgL_rtl_loadgz00_bglt) (BgL_oz00_6807);
					BgL_destz00_2539 = BgL_destz00_6808;
					BgL_argsz00_2540 = BgL_argsz00_6809;
					BgL_pz00_2541 = BgL_pz00_6810;
					BgL_mz00_2542 = BgL_mz00_6811;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2538), BgL_pz00_2541);
					bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2541);
					{	/* SawMill/defs.scm 307 */
						obj_t BgL_arg5292z00_5001;

						{	/* SawMill/defs.scm 307 */
							BgL_globalz00_bglt BgL_arg5293z00_5002;

							BgL_arg5293z00_5002 =
								(((BgL_rtl_loadgz00_bglt) CREF(BgL_oz00_2538))->BgL_varz00);
							BgL_arg5292z00_5001 =
								BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5293z00_5002));
						}
						bgl_display_obj(BgL_arg5292z00_5001, BgL_pz00_2541);
					}
					BgL_auxz00_12125 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2540, BgL_pz00_2541);
					return BBOOL(BgL_auxz00_12125);
				}
			}
		}
	}



/* dump-fun-rtl_mov4607 */
	obj_t BGl_dumpzd2funzd2rtl_mov4607z00zzsaw_defsz00(obj_t BgL_envz00_6812,
		obj_t BgL_oz00_6813, obj_t BgL_destz00_6814, obj_t BgL_argsz00_6815,
		obj_t BgL_pz00_6816, obj_t BgL_mz00_6817)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 293 */
			{
				BgL_rtl_movz00_bglt BgL_oz00_2529;

				obj_t BgL_destz00_2530;

				obj_t BgL_argsz00_2531;

				obj_t BgL_pz00_2532;

				obj_t BgL_mz00_2533;

				{	/* SawMill/defs.scm 294 */
					bool_t BgL_auxz00_12136;

					BgL_oz00_2529 = (BgL_rtl_movz00_bglt) (BgL_oz00_6813);
					BgL_destz00_2530 = BgL_destz00_6814;
					BgL_argsz00_2531 = BgL_argsz00_6815;
					BgL_pz00_2532 = BgL_pz00_6816;
					BgL_mz00_2533 = BgL_mz00_6817;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2529), BgL_pz00_2532);
					if (CBOOL(BgL_destz00_2530))
						{	/* SawMill/defs.scm 295 */
							bgl_display_string(BGl_string5930z00zzsaw_defsz00, BgL_pz00_2532);
							BGl_dumpz00zzsaw_defsz00(BgL_destz00_2530, BgL_pz00_2532,
								CINT(BgL_mz00_2533));
							bgl_display_string(BGl_string5931z00zzsaw_defsz00, BgL_pz00_2532);
						}
					else
						{	/* SawMill/defs.scm 295 */
							BFALSE;
						}
					BgL_auxz00_12136 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2531, BgL_pz00_2532);
					return BBOOL(BgL_auxz00_12136);
				}
			}
		}
	}



/* dump-fun-rtl_loadi4605 */
	obj_t BGl_dumpzd2funzd2rtl_loadi4605z00zzsaw_defsz00(obj_t BgL_envz00_6818,
		obj_t BgL_oz00_6819, obj_t BgL_destz00_6820, obj_t BgL_argsz00_6821,
		obj_t BgL_pz00_6822, obj_t BgL_mz00_6823)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 284 */
			{
				BgL_rtl_loadiz00_bglt BgL_oz00_2518;

				obj_t BgL_destz00_2519;

				obj_t BgL_argsz00_2520;

				obj_t BgL_pz00_2521;

				obj_t BgL_mz00_2522;

				{	/* SawMill/defs.scm 285 */
					bool_t BgL_auxz00_12148;

					BgL_oz00_2518 = (BgL_rtl_loadiz00_bglt) (BgL_oz00_6819);
					BgL_destz00_2519 = BgL_destz00_6820;
					BgL_argsz00_2520 = BgL_argsz00_6821;
					BgL_pz00_2521 = BgL_pz00_6822;
					BgL_mz00_2522 = BgL_mz00_6823;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2518), BgL_pz00_2521);
					bgl_display_string(BGl_string5817z00zzsaw_defsz00, BgL_pz00_2521);
					{	/* SawMill/defs.scm 287 */
						obj_t BgL_arg5288z00_4991;

						{	/* SawMill/defs.scm 287 */
							BgL_atomz00_bglt BgL_obj2135z00_4996;

							BgL_obj2135z00_4996 =
								(((BgL_rtl_loadiz00_bglt) CREF(BgL_oz00_2518))->
								BgL_constantz00);
							BgL_arg5288z00_4991 =
								(((BgL_atomz00_bglt) CREF(BgL_obj2135z00_4996))->BgL_valuez00);
						}
						bgl_display_obj(BgL_arg5288z00_4991, BgL_pz00_2521);
					}
					BgL_auxz00_12148 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2520, BgL_pz00_2521);
					return BBOOL(BgL_auxz00_12148);
				}
			}
		}
	}



/* dump-fun-rtl_fun4603 */
	obj_t BGl_dumpzd2funzd2rtl_fun4603z00zzsaw_defsz00(obj_t BgL_envz00_6824,
		obj_t BgL_oz00_6825, obj_t BgL_destz00_6826, obj_t BgL_argsz00_6827,
		obj_t BgL_pz00_6828, obj_t BgL_mz00_6829)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 277 */
			{
				BgL_rtl_funz00_bglt BgL_oz00_2509;

				obj_t BgL_destz00_2510;

				obj_t BgL_argsz00_2511;

				obj_t BgL_pz00_2512;

				obj_t BgL_mz00_2513;

				{	/* SawMill/defs.scm 278 */
					bool_t BgL_auxz00_12158;

					BgL_oz00_2509 = (BgL_rtl_funz00_bglt) (BgL_oz00_6825);
					BgL_destz00_2510 = BgL_destz00_6826;
					BgL_argsz00_2511 = BgL_argsz00_6827;
					BgL_pz00_2512 = BgL_pz00_6828;
					BgL_mz00_2513 = BgL_mz00_6829;
					BGl_showzd2funzd2zzsaw_defsz00(
						(obj_t) (BgL_oz00_2509), BgL_pz00_2512);
					BgL_auxz00_12158 =
						BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_2511, BgL_pz00_2512);
					return BBOOL(BgL_auxz00_12158);
				}
			}
		}
	}



/* dump-rtl_reg4599 */
	obj_t BGl_dumpzd2rtl_reg4599zd2zzsaw_defsz00(obj_t BgL_envz00_6830,
		obj_t BgL_oz00_6831, obj_t BgL_pz00_6832, obj_t BgL_mz00_6833)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 255 */
			{
				BgL_rtl_regz00_bglt BgL_oz00_2499;

				obj_t BgL_pz00_2500;

				obj_t BgL_mz00_2501;

				BgL_oz00_2499 = (BgL_rtl_regz00_bglt) (BgL_oz00_6831);
				BgL_pz00_2500 = BgL_pz00_6832;
				BgL_mz00_2501 = BgL_mz00_6833;
				bgl_display_obj(BGl_shapez00zztools_shapez00(
						(obj_t) (BgL_oz00_2499)), BgL_pz00_2500);
				if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
					{	/* SawMill/defs.scm 257 */
						bgl_display_string(BGl_string5932z00zzsaw_defsz00, BgL_pz00_2500);
						{	/* SawMill/defs.scm 259 */
							obj_t BgL_arg5284z00_2505;

							{	/* SawMill/defs.scm 259 */
								BgL_typez00_bglt BgL_arg5285z00_2506;

								BgL_arg5285z00_2506 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2499))->BgL_typez00);
								BgL_arg5284z00_2505 =
									BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5285z00_2506));
							}
							return bgl_display_obj(BgL_arg5284z00_2505, BgL_pz00_2500);
						}
					}
				else
					{	/* SawMill/defs.scm 257 */
						return BFALSE;
					}
			}
		}
	}



/* dump-rtl_ins4597 */
	obj_t BGl_dumpzd2rtl_ins4597zd2zzsaw_defsz00(obj_t BgL_envz00_6834,
		obj_t BgL_oz00_6835, obj_t BgL_pz00_6836, obj_t BgL_mz00_6837)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 229 */
			{
				BgL_rtl_insz00_bglt BgL_oz00_2480;

				obj_t BgL_pz00_2481;

				obj_t BgL_mz00_2482;

				BgL_oz00_2480 = (BgL_rtl_insz00_bglt) (BgL_oz00_6835);
				BgL_pz00_2481 = BgL_pz00_6836;
				BgL_mz00_2482 = BgL_mz00_6837;
				if (CBOOL((((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2480))->BgL_destz00)))
					{	/* SawMill/defs.scm 231 */
						{	/* SawMill/defs.scm 232 */
							obj_t BgL_arg5277z00_2487;

							BgL_arg5277z00_2487 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2480))->BgL_destz00);
							BGl_dumpz00zzsaw_defsz00(BgL_arg5277z00_2487, BgL_pz00_2481,
								CINT(BgL_mz00_2482));
						}
						bgl_display_string(BGl_string5933z00zzsaw_defsz00, BgL_pz00_2481);
					}
				else
					{	/* SawMill/defs.scm 231 */
						BFALSE;
					}
				BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_oz00_2480, BgL_pz00_2481,
					BgL_mz00_2482);
				bgl_display_string(BGl_string5934z00zzsaw_defsz00, BgL_pz00_2481);
				{	/* SawMill/defs.scm 236 */
					obj_t BgL_g4543z00_2488;

					BgL_g4543z00_2488 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_2480))->BgL_z52spillz52);
					{
						obj_t BgL_l4541z00_2490;

						BgL_l4541z00_2490 = BgL_g4543z00_2488;
					BgL_zc3anonymousza35278ze3z83_2491:
						if (PAIRP(BgL_l4541z00_2490))
							{	/* SawMill/defs.scm 236 */
								{	/* SawMill/defs.scm 238 */
									obj_t BgL_rz00_2493;

									BgL_rz00_2493 = CAR(BgL_l4541z00_2490);
									bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_rz00_2493),
										BgL_pz00_2481);
									bgl_display_string(BGl_string5817z00zzsaw_defsz00,
										BgL_pz00_2481);
								}
								{
									obj_t BgL_l4541z00_12191;

									BgL_l4541z00_12191 = CDR(BgL_l4541z00_2490);
									BgL_l4541z00_2490 = BgL_l4541z00_12191;
									goto BgL_zc3anonymousza35278ze3z83_2491;
								}
							}
						else
							{	/* SawMill/defs.scm 236 */
								((bool_t) 1);
							}
					}
				}
				return
					bgl_display_string(BGl_string5935z00zzsaw_defsz00, BgL_pz00_2481);
			}
		}
	}



/* dump-block4594 */
	obj_t BGl_dumpzd2block4594zd2zzsaw_defsz00(obj_t BgL_envz00_6838,
		obj_t BgL_oz00_6839, obj_t BgL_pz00_6840, obj_t BgL_mz00_6841)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 219 */
			{
				BgL_blockz00_bglt BgL_oz00_2467;

				obj_t BgL_pz00_2468;

				obj_t BgL_mz00_2469;

				BgL_oz00_2467 = (BgL_blockz00_bglt) (BgL_oz00_6839);
				BgL_pz00_2468 = BgL_pz00_6840;
				BgL_mz00_2469 = BgL_mz00_6841;
				bgl_display_string(BGl_string5936z00zzsaw_defsz00, BgL_pz00_2468);
				{	/* SawMill/defs.scm 221 */
					int BgL_arg5271z00_2474;

					BgL_arg5271z00_2474 =
						(((BgL_blockz00_bglt) CREF(BgL_oz00_2467))->BgL_labelz00);
					bgl_display_obj(BINT(BgL_arg5271z00_2474), BgL_pz00_2468);
				}
				bgl_display_char(((unsigned char) '\n'), BgL_pz00_2468);
				{	/* SawMill/defs.scm 222 */
					long BgL_arg5272z00_2475;

					BgL_arg5272z00_2475 = ((long) CINT(BgL_mz00_2469) + ((long) 1));
					BGl_dumpzd2marginzd2zzsaw_defsz00(BINT(BgL_arg5272z00_2475),
						BgL_pz00_2468);
				}
				{	/* SawMill/defs.scm 223 */
					obj_t BgL_arg5273z00_2476;

					long BgL_arg5274z00_2477;

					BgL_arg5273z00_2476 =
						(((BgL_blockz00_bglt) CREF(BgL_oz00_2467))->BgL_firstz00);
					BgL_arg5274z00_2477 = ((long) CINT(BgL_mz00_2469) + ((long) 1));
					BGl_dumpza2za2zzsaw_defsz00(BgL_arg5273z00_2476, BgL_pz00_2468,
						BgL_arg5274z00_2477);
				}
				return
					bgl_display_string(BGl_string5821z00zzsaw_defsz00, BgL_pz00_2468);
			}
		}
	}



/* shape-rtl_reg4589 */
	obj_t BGl_shapezd2rtl_reg4589zd2zzsaw_defsz00(obj_t BgL_envz00_6842,
		obj_t BgL_oz00_6843)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 105 */
			{
				BgL_rtl_regz00_bglt BgL_oz00_2448;

				BgL_oz00_2448 = (BgL_rtl_regz00_bglt) (BgL_oz00_6843);
				{	/* SawMill/defs.scm 106 */
					obj_t BgL_pz00_2451;

					{	/* SawMill/defs.scm 106 */

						{	/* SawMill/defs.scm 106 */

							BgL_pz00_2451 =
								BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
						}
					}
					if (CBOOL(
							(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->BgL_onexprzf3zf3)))
						{	/* SawMill/defs.scm 109 */
							bgl_display_string(BGl_string5937z00zzsaw_defsz00, BgL_pz00_2451);
							{	/* SawMill/defs.scm 111 */
								obj_t BgL_arg5260z00_2454;

								BgL_arg5260z00_2454 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->BgL_namez00);
								bgl_display_obj(BgL_arg5260z00_2454, BgL_pz00_2451);
							}
						}
					else
						{	/* SawMill/defs.scm 109 */
							if (CBOOL(
									(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->
										BgL_hardwarez00)))
								{	/* SawMill/defs.scm 112 */
									bgl_display_string(BGl_string5938z00zzsaw_defsz00,
										BgL_pz00_2451);
									{	/* SawMill/defs.scm 114 */
										obj_t BgL_arg5262z00_2456;

										BgL_arg5262z00_2456 =
											(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->
											BgL_hardwarez00);
										bgl_display_obj(BgL_arg5262z00_2456, BgL_pz00_2451);
									}
								}
							else
								{	/* SawMill/defs.scm 112 */
									if (CBOOL(
											(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->
												BgL_varz00)))
										{	/* SawMill/defs.scm 115 */
											bgl_display_string(BGl_string5939z00zzsaw_defsz00,
												BgL_pz00_2451);
											{	/* SawMill/defs.scm 117 */
												obj_t BgL_arg5264z00_2458;

												{	/* SawMill/defs.scm 117 */
													BgL_variablez00_bglt BgL_obj1604z00_4951;

													BgL_obj1604z00_4951 =
														(BgL_variablez00_bglt) (
														(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->
															BgL_varz00));
													BgL_arg5264z00_2458 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1604z00_4951))->BgL_idz00);
												}
												bgl_display_obj(BgL_arg5264z00_2458, BgL_pz00_2451);
											}
										}
									else
										{	/* SawMill/defs.scm 115 */
											bgl_display_string(BGl_string5940z00zzsaw_defsz00,
												BgL_pz00_2451);
											{	/* SawMill/defs.scm 120 */
												obj_t BgL_arg5266z00_2460;

												BgL_arg5266z00_2460 =
													(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->
													BgL_namez00);
												bgl_display_obj(BgL_arg5266z00_2460, BgL_pz00_2451);
											}
										}
								}
						}
					if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
						{	/* SawMill/defs.scm 121 */
							bgl_display_string(BGl_string5932z00zzsaw_defsz00, BgL_pz00_2451);
							{	/* SawMill/defs.scm 123 */
								obj_t BgL_arg5267z00_2461;

								{	/* SawMill/defs.scm 123 */
									BgL_typez00_bglt BgL_obj1508z00_4958;

									BgL_obj1508z00_4958 =
										(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->BgL_typez00);
									BgL_arg5267z00_2461 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_4958))->BgL_idz00);
								}
								bgl_display_obj(BgL_arg5267z00_2461, BgL_pz00_2451);
							}
						}
					else
						{	/* SawMill/defs.scm 121 */
							BFALSE;
						}
					if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
						{	/* SawMill/defs.scm 124 */
							bgl_display_string(BGl_string5941z00zzsaw_defsz00, BgL_pz00_2451);
							{	/* SawMill/defs.scm 126 */
								obj_t BgL_arg5269z00_2463;

								BgL_arg5269z00_2463 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_2448))->BgL_keyz00);
								bgl_display_obj(BgL_arg5269z00_2463, BgL_pz00_2451);
							}
						}
					else
						{	/* SawMill/defs.scm 124 */
							BFALSE;
						}
					return bgl_close_output_port(BgL_pz00_2451);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_defsz00()
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string5942z00zzsaw_defsz00));
		}
	}

#ifdef __cplusplus
}
#endif
