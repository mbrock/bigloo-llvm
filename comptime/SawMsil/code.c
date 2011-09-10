/*===========================================================================*/
/*   (SawMsil/code.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/code.scm)*/
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

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;

	typedef struct BgL_lregz00_bgl
	{
		obj_t BgL_indexz00;
		obj_t BgL_paramzf3zf3;
	}              *BgL_lregz00_bglt;

	typedef struct BgL_tail_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_tail_callz00_bglt;

	typedef struct BgL_tail_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                           *BgL_tail_lightfuncallz00_bglt;

	typedef struct BgL_tail_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                      *BgL_tail_funcallz00_bglt;

	typedef struct BgL_tail_applyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_tail_applyz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2funzd2defaultz00zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_openzd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_genzd2argszd2genzd2funzd2zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_rtl_jumpexitz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static BgL_tail_lightfuncallz00_bglt
		BGl_tail_lightfuncallzd2nilzd2zzmsil_codez00();
	static obj_t BGl_genzd2funzd2rtl_loadfun5030z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00;
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_jumpexit5042z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_tail_applyz00zzmsil_codez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2withzd2argszd2zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_flatz00zzmsil_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static obj_t BGl_genzd2funzd2rtl_mov4994z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funcallzd2zzmsil_codez00(obj_t, obj_t, bool_t);
	static BgL_tail_funcallz00_bglt BGl_tail_funcallzd2nilzd2zzmsil_codez00();
	static obj_t BGl_zc3anonymousza35078ze3z83zzmsil_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2funzd2zzmsil_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	extern obj_t BGl_printzd2infozd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_castclassz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_subz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_pushzd2numzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_loadzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_genzd2funzd2rtl_switch5040z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_isinstz00zzmsil_outz00(BgL_dotnetz00_bglt, BgL_typez00_bglt);
	static obj_t BGl__tail_funcallzf3zf3zzmsil_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_isa5016z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2rt4980z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2rt4984z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__lregzd2nilzd2zzmsil_codez00(obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2withzd2argszd2rt4988z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	static obj_t BGl__lregzf3zf3zzmsil_codez00(obj_t, obj_t);
	static obj_t BGl__genzd2argszd2genzd2predica5049zd2zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2tail_5056ze3zzmsil_codez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2tail_5060ze3zzmsil_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_objectzd2ze3structzd2tail_5064ze3zzmsil_codez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2tail_5068ze3zzmsil_codez00(obj_t,
		obj_t);
	extern obj_t BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzmsil_codez00();
	extern obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_brtruez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl__genzd2funzd2withzd2argszd2zzmsil_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_cast5018z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_libcallz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2tail_callz80zzmsil_codez00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_inlinezd2predicatezf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static BgL_tail_applyz00_bglt BGl_tail_applyzd2nilzd2zzmsil_codez00();
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_declarezd2tailzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_rtl_makeboxz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_exprz00zzmsil_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2argszd2genzd2funzd2zzmsil_codez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_rtl_isaz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_codez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_genzd2funzd2rtl_boxset5026z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_genzd2predicatezd2defaul5051z00zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmsil_codez00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl__tail_callzf3zf3zzmsil_codez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_vref5004z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_check_funz00zzmsil_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	extern obj_t BGl_callzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl__tail_funcallzd2nilzd2zzmsil_codez00(obj_t);
	extern obj_t BGl_brfalsez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_inlinezd2callzf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2lreg5072ze3zzmsil_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_nop4992z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_tail_funcallz00zzmsil_codez00 = BUNSPEC;
	extern obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_beqz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_callvirtz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t,
		obj_t);
	static obj_t BGl__genzd2funzd2default4989z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_vlength5008z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_globalre5002z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	extern obj_t BGl_bnez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_declarezd2localszd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t
		BGl_genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00 = BUNSPEC;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_switchz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_patchzd2callzd2zzmsil_codez00(obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	static obj_t BGl_lregz00zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_getzd2exprzd2zzmsil_codez00(obj_t);
	static obj_t BGl_genzd2funzd2rtl_cast_nul5020z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genzd2exprzd2zzmsil_codez00(BgL_dotnetz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2codezd2zzmsil_codez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_storeg5000z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2switchregza2z00zzmsil_codez00 = BUNSPEC;
	extern int BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00(BgL_rtl_funz00_bglt);
	extern obj_t BGl_brz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_protecte5048z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzmsil_codez00();
	static obj_t BGl_regzd2ze3lregz31zzmsil_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_loadzd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_storezd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_genzd2predicatezd2rtl_ca5054z00zzmsil_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static bool_t BGl_za2commentza2z00zzmsil_codez00;
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_fail5044z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_getfield5012z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_protectedz00zzsaw_defsz00;
	static BgL_rtl_regz00_bglt BGl_nrz00zzmsil_codez00(obj_t, obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_genzd2funzd2rtl_loadg4998z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static obj_t BGl_za2protectresultza2z00zzmsil_codez00 = BUNSPEC;
	extern obj_t BGl_rtl_failz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec5058z83zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5062z83zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5066z83zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5070z83zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5074z83zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_tclassz00_bglt);
	extern BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00();
	static obj_t BGl_zc3anonymousza35506ze3z83zzmsil_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmsil_codez00();
	extern obj_t BGl_ldnullz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__genzd2predicatezd2defaul5051z00zzmsil_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2exprzd2zzmsil_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__tail_applyzf3zf3zzmsil_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_return5036z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_loadzd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	static obj_t BGl_za2bugmonoregza2z00zzmsil_codez00 = BUNSPEC;
	static obj_t BGl__modulezd2codezd2zzmsil_codez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__tail_applyzd2nilzd2zzmsil_codez00(obj_t);
	static obj_t BGl_genzd2funzd2tail_apply5034z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_vset5006z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	static obj_t BGl__lookupz00zzmsil_codez00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__tablez00zzmsil_codez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00 = BUNSPEC;
	extern obj_t BGl_openzd2catchzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_storez00zzmsil_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_za2bexitregza2z00zzmsil_codez00 = BUNSPEC;
	static obj_t BGl__loadz00zzmsil_codez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2lregz80zzmsil_codez00(obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_tail_lightfuncallz00zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_genzd2funzd2rtl_protect5046z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__genzd2argszd2genzd2funzd2def4966z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_setfield5014z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_loadzd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_codez00();
	static obj_t BGl_genzd2funzd2rtl_apply5032z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_throwz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__tail_callzd2nilzd2zzmsil_codez00(obj_t);
	extern obj_t BGl_commentz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_storezd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	static obj_t BGl_genzd2funzd2rtl_call5028z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2localszd2zzmsil_codez00(obj_t, obj_t);
	static BgL_tail_callz00_bglt BGl_tail_callzd2nilzd2zzmsil_codez00();
	static obj_t BGl_genzd2funzd2rtl_makebox5022z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_za2dotnetzd2tailzd2acrosszd2modulesza2zd2zzengine_paramz00;
	static obj_t BGl__tail_lightfuncallzd2nilzd2zzmsil_codez00(obj_t);
	static obj_t BGl_genzd2funzd2rtl_go5038z00zzmsil_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	extern obj_t BGl_closezd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2predica5049zd2zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2predicatezd2zzmsil_codez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2constantzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2zzmsil_codez00(BgL_rtl_funz00_bglt, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	extern obj_t BGl_loadzd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	static obj_t BGl_z52thezd2lregzd2nilz52zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_tail_callz00zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_genzd2predicatezd2zzmsil_codez00(BgL_rtl_funz00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funzd2default4989z00zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t BGl_pushzd2intzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_labelz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_newarrayz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl__genzd2argszd2genzd2predicatezd2zzmsil_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_boxref5024z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2predicatezd2zzmsil_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2ta4982z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_storezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2ta4986z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2tail_lightfuncallz80zzmsil_codez00(obj_t);
	extern obj_t BGl_storezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzmsil_codez00();
	static obj_t BGl_genzd2inszd2zzmsil_codez00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_pushzd2stringzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static bool_t BGl_za2hasprotectza2z00zzmsil_codez00;
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	extern obj_t BGl_rethrowz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_returnz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_za2dotnetzd2tailza2zd2zzengine_paramz00;
	static obj_t BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00 = BUNSPEC;
	static obj_t BGl_genzd2funzd2rtl_loadi4996z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_storezd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	static obj_t BGl__z52allocatezd2tail_applyz80zzmsil_codez00(obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl4970z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl4972z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl4974z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl4976z00zzmsil_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_valloc5010z00zzmsil_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_codez00();
	static obj_t BGl__tail_lightfuncallzf3zf3zzmsil_codez00(obj_t, obj_t);
	static BgL_lregz00_bglt BGl_lregzd2nilzd2zzmsil_codez00();
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	static obj_t BGl__z52allocatezd2tail_funcallz80zzmsil_codez00(obj_t);
	static obj_t __cnst[33];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_genzd2funzd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2funza7d2za7za7m5743z00, BGl__genzd2funzd2zzmsil_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_callzd2nilzd2envz00zzmsil_codez00,
		BgL_bgl__tail_callza7d2nil5744za7, BGl__tail_callzd2nilzd2zzmsil_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_funcallzf3zd2envz21zzmsil_codez00,
		BgL_bgl__tail_funcallza7f35745za7, BGl__tail_funcallzf3zf3zzmsil_codez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2tail_lightfuncallzd2envz52zzmsil_codez00,
		BgL_bgl__za752allocateza7d2t5746z00,
		BGl__z52allocatezd2tail_lightfuncallz80zzmsil_codez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2predicatezd2defaul5051zd2envzd2zzmsil_codez00,
		BgL_bgl__genza7d2predicate5747za7,
		BGl__genzd2predicatezd2defaul5051z00zzmsil_codez00, 0L, BUNSPEC, 4);
	      DEFINE_REAL(BGl_real5720z00zzmsil_codez00,
		BgL_bgl_real5720za700za7za7msi5748za7, 0.75);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tail_lightfuncallzd2nilzd2envz00zzmsil_codez00,
		BgL_bgl__tail_lightfunca5749z00,
		BGl__tail_lightfuncallzd2nilzd2zzmsil_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_lregzf3zd2envz21zzmsil_codez00,
		BgL_bgl__lregza7f3za7f3za7za7msi5750z00, BGl__lregzf3zf3zzmsil_codez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2tail_callzd2envz52zzmsil_codez00,
		BgL_bgl__za752allocateza7d2t5751z00,
		BGl__z52allocatezd2tail_callz80zzmsil_codez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2codezd2envz00zzmsil_codez00,
		BgL_bgl__moduleza7d2codeza7d5752z00, BGl__modulezd2codezd2zzmsil_codez00,
		0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2funzd2withzd2argszd2de4977zd2envzd2zzmsil_codez00,
		BgL_bgl__genza7d2funza7d2wit5753z00,
		BGl__genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_callzf3zd2envz21zzmsil_codez00,
		BgL_bgl__tail_callza7f3za7f35754z00, BGl__tail_callzf3zf3zzmsil_codez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_lregzd2nilzd2envz00zzmsil_codez00,
		BgL_bgl__lregza7d2nilza7d2za7za75755z00, BGl__lregzd2nilzd2zzmsil_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_applyzf3zd2envz21zzmsil_codez00,
		BgL_bgl__tail_applyza7f3za7f5756z00, BGl__tail_applyzf3zf3zzmsil_codez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2tail_funcallzd2envz52zzmsil_codez00,
		BgL_bgl__za752allocateza7d2t5757z00,
		BGl__z52allocatezd2tail_funcallz80zzmsil_codez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2funza7d2wit5758z00,
		BGl__genzd2funzd2withzd2argszd2zzmsil_codez00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_lightfuncallzf3zd2envz21zzmsil_codez00,
		BgL_bgl__tail_lightfunca5759z00, BGl__tail_lightfuncallzf3zf3zzmsil_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5645z00zzmsil_codez00,
		BgL_bgl_za7c3anonymousza7a355760z00,
		BGl_zc3anonymousza35078ze3z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5668z00zzmsil_codez00,
		BgL_bgl_genza7d2argsza7d2gen5761z00,
		BGl_genzd2argszd2genzd2funzd2rtl4970z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5670z00zzmsil_codez00,
		BgL_bgl_genza7d2argsza7d2gen5762z00,
		BGl_genzd2argszd2genzd2funzd2rtl4974z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5669z00zzmsil_codez00,
		BgL_bgl_genza7d2argsza7d2gen5763z00,
		BGl_genzd2argszd2genzd2funzd2rtl4972z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5671z00zzmsil_codez00,
		BgL_bgl_genza7d2argsza7d2gen5764z00,
		BGl_genzd2argszd2genzd2funzd2rtl4976z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5672z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2with5765z00,
		BGl_genzd2funzd2withzd2argszd2rt4980z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5673z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2with5766z00,
		BGl_genzd2funzd2withzd2argszd2ta4982z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5674z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2with5767z00,
		BGl_genzd2funzd2withzd2argszd2rt4984z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5675z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2with5768z00,
		BGl_genzd2funzd2withzd2argszd2ta4986z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5676z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2with5769z00,
		BGl_genzd2funzd2withzd2argszd2rt4988z00zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5677z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5770z00,
		BGl_genzd2funzd2rtl_nop4992z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5678z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5771z00,
		BGl_genzd2funzd2rtl_mov4994z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5680z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5772z00,
		BGl_genzd2funzd2rtl_loadg4998z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5679z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5773z00,
		BGl_genzd2funzd2rtl_loadi4996z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5681z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5774z00,
		BGl_genzd2funzd2rtl_storeg5000z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5682z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5775z00,
		BGl_genzd2funzd2rtl_globalre5002z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5683z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5776z00,
		BGl_genzd2funzd2rtl_vref5004z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5684z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5777z00,
		BGl_genzd2funzd2rtl_vset5006z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5685z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5778z00,
		BGl_genzd2funzd2rtl_vlength5008z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5686z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5779z00,
		BGl_genzd2funzd2rtl_valloc5010z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5687z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5780z00,
		BGl_genzd2funzd2rtl_getfield5012z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5688z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5781z00,
		BGl_genzd2funzd2rtl_setfield5014z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5700z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5782z00,
		BGl_genzd2funzd2rtl_go5038z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5690z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5783z00,
		BGl_genzd2funzd2rtl_cast5018z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5689z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5784z00,
		BGl_genzd2funzd2rtl_isa5016z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5701z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5785z00,
		BGl_genzd2funzd2rtl_switch5040z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5691z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5786z00,
		BGl_genzd2funzd2rtl_cast_nul5020z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5702z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5787z00,
		BGl_genzd2funzd2rtl_jumpexit5042z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5692z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5788z00,
		BGl_genzd2funzd2rtl_makebox5022z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5703z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5789z00,
		BGl_genzd2funzd2rtl_fail5044z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5693z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5790z00,
		BGl_genzd2funzd2rtl_boxref5024z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5704z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5791z00,
		BGl_genzd2funzd2rtl_protect5046z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5694z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5792z00,
		BGl_genzd2funzd2rtl_boxset5026z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5705z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5793z00,
		BGl_genzd2funzd2rtl_protecte5048z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5695z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5794z00,
		BGl_genzd2funzd2rtl_call5028z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5706z00zzmsil_codez00,
		BgL_bgl_genza7d2predicateza75795z00,
		BGl_genzd2predicatezd2rtl_ca5054z00zzmsil_codez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5696z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5796z00,
		BGl_genzd2funzd2rtl_loadfun5030z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5707z00zzmsil_codez00,
		BgL_bgl_objectza7d2za7e3stru5797z00,
		BGl_objectzd2ze3structzd2tail_5056ze3zzmsil_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5697z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5798z00,
		BGl_genzd2funzd2rtl_apply5032z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5698z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2tail5799z00,
		BGl_genzd2funzd2tail_apply5034z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5709z00zzmsil_codez00,
		BgL_bgl_structza7b2objectza75800z00,
		BGl_structzb2objectzd2ze3objec5058z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5699z00zzmsil_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5801z00,
		BGl_genzd2funzd2rtl_return5036z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5711z00zzmsil_codez00,
		BgL_bgl_objectza7d2za7e3stru5802z00,
		BGl_objectzd2ze3structzd2tail_5060ze3zzmsil_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5712z00zzmsil_codez00,
		BgL_bgl_structza7b2objectza75803z00,
		BGl_structzb2objectzd2ze3objec5062z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5713z00zzmsil_codez00,
		BgL_bgl_objectza7d2za7e3stru5804z00,
		BGl_objectzd2ze3structzd2tail_5064ze3zzmsil_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5714z00zzmsil_codez00,
		BgL_bgl_structza7b2objectza75805z00,
		BGl_structzb2objectzd2ze3objec5066z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5715z00zzmsil_codez00,
		BgL_bgl_objectza7d2za7e3stru5806z00,
		BGl_objectzd2ze3structzd2tail_5068ze3zzmsil_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5716z00zzmsil_codez00,
		BgL_bgl_structza7b2objectza75807z00,
		BGl_structzb2objectzd2ze3objec5070z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5717z00zzmsil_codez00,
		BgL_bgl_objectza7d2za7e3stru5808z00,
		BGl_objectzd2ze3structzd2lreg5072ze3zzmsil_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5718z00zzmsil_codez00,
		BgL_bgl_structza7b2objectza75809z00,
		BGl_structzb2objectzd2ze3objec5074z83zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5719z00zzmsil_codez00,
		BgL_bgl_za7c3anonymousza7a355810z00,
		BGl_zc3anonymousza35506ze3z83zzmsil_codez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2lregzd2envz52zzmsil_codez00,
		BgL_bgl__za752allocateza7d2l5811z00,
		BGl__z52allocatezd2lregz80zzmsil_codez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2argsza7d2ge5812z00,
		BGl__genzd2argszd2genzd2funzd2zzmsil_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string5646z00zzmsil_codez00,
		BgL_bgl_string5646za700za7za7m5813za7, " -> ", 4);
	      DEFINE_STRING(BGl_string5647z00zzmsil_codez00,
		BgL_bgl_string5647za700za7za7m5814za7, "L", 1);
	      DEFINE_STRING(BGl_string5648z00zzmsil_codez00,
		BgL_bgl_string5648za700za7za7m5815za7, "", 0);
	      DEFINE_STRING(BGl_string5650z00zzmsil_codez00,
		BgL_bgl_string5650za700za7za7m5816za7, "bigloo.bexception", 17);
	      DEFINE_STRING(BGl_string5649z00zzmsil_codez00,
		BgL_bgl_string5649za700za7za7m5817za7, "endprotect", 10);
	      DEFINE_STRING(BGl_string5651z00zzmsil_codez00,
		BgL_bgl_string5651za700za7za7m5818za7, "fin", 3);
	      DEFINE_STRING(BGl_string5652z00zzmsil_codez00,
		BgL_bgl_string5652za700za7za7m5819za7, "bug_mono", 8);
	      DEFINE_STRING(BGl_string5653z00zzmsil_codez00,
		BgL_bgl_string5653za700za7za7m5820za7, "System.Exception", 16);
	      DEFINE_STRING(BGl_string5654z00zzmsil_codez00,
		BgL_bgl_string5654za700za7za7m5821za7, "DUMP", 4);
	      DEFINE_STRING(BGl_string5655z00zzmsil_codez00,
		BgL_bgl_string5655za700za7za7m5822za7, "unspecified", 11);
	      DEFINE_STRING(BGl_string5656z00zzmsil_codez00,
		BgL_bgl_string5656za700za7za7m5823za7, "P", 1);
	      DEFINE_STRING(BGl_string5657z00zzmsil_codez00,
		BgL_bgl_string5657za700za7za7m5824za7, "V", 1);
	      DEFINE_STRING(BGl_string5658z00zzmsil_codez00,
		BgL_bgl_string5658za700za7za7m5825za7, "bigloo.procedure::funcall", 25);
	      DEFINE_STRING(BGl_string5660z00zzmsil_codez00,
		BgL_bgl_string5660za700za7za7m5826za7, "bigloo.pair", 11);
	      DEFINE_STRING(BGl_string5659z00zzmsil_codez00,
		BgL_bgl_string5659za700za7za7m5827za7, "nil", 3);
	      DEFINE_STRING(BGl_string5661z00zzmsil_codez00,
		BgL_bgl_string5661za700za7za7m5828za7, "bigloo.procedure::apply", 23);
	      DEFINE_STRING(BGl_string5662z00zzmsil_codez00,
		BgL_bgl_string5662za700za7za7m5829za7, "gen-args-gen-fun", 16);
	      DEFINE_STRING(BGl_string5663z00zzmsil_codez00,
		BgL_bgl_string5663za700za7za7m5830za7, "gen-fun-with-args", 17);
	      DEFINE_STRING(BGl_string5664z00zzmsil_codez00,
		BgL_bgl_string5664za700za7za7m5831za7, "gen-fun", 7);
	      DEFINE_STRING(BGl_string5665z00zzmsil_codez00,
		BgL_bgl_string5665za700za7za7m5832za7, "gen-args-gen-predicate", 22);
	      DEFINE_STRING(BGl_string5666z00zzmsil_codez00,
		BgL_bgl_string5666za700za7za7m5833za7, "gen-predicate", 13);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2predicatezd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2predicate5834za7, BGl__genzd2predicatezd2zzmsil_codez00,
		0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2funzd2default4989zd2envzd2zzmsil_codez00,
		BgL_bgl__genza7d2funza7d2def5835z00,
		BGl__genzd2funzd2default4989z00zzmsil_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5667z00zzmsil_codez00,
		BgL_bgl_string5667za700za7za7m5836za7, "No method for this object", 25);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2tail_applyzd2envz52zzmsil_codez00,
		BgL_bgl__za752allocateza7d2t5837z00,
		BGl__z52allocatezd2tail_applyz80zzmsil_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string5708z00zzmsil_codez00,
		BgL_bgl_string5708za700za7za7m5838za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5710z00zzmsil_codez00,
		BgL_bgl_string5710za700za7za7m5839za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5721z00zzmsil_codez00,
		BgL_bgl_string5721za700za7za7m5840za7, "bigloo.cell", 11);
	      DEFINE_STRING(BGl_string5722z00zzmsil_codez00,
		BgL_bgl_string5722za700za7za7m5841za7, "class System.Object", 19);
	      DEFINE_STRING(BGl_string5723z00zzmsil_codez00,
		BgL_bgl_string5723za700za7za7m5842za7, "I", 1);
	      DEFINE_STRING(BGl_string5724z00zzmsil_codez00,
		BgL_bgl_string5724za700za7za7m5843za7, "eof", 3);
	      DEFINE_STRING(BGl_string5725z00zzmsil_codez00,
		BgL_bgl_string5725za700za7za7m5844za7, "optional", 8);
	      DEFINE_STRING(BGl_string5726z00zzmsil_codez00,
		BgL_bgl_string5726za700za7za7m5845za7, "rest", 4);
	      DEFINE_STRING(BGl_string5727z00zzmsil_codez00,
		BgL_bgl_string5727za700za7za7m5846za7, "key", 3);
	      DEFINE_STRING(BGl_string5728z00zzmsil_codez00,
		BgL_bgl_string5728za700za7za7m5847za7, "bigloo.bucs2", 12);
	      DEFINE_STRING(BGl_string5730z00zzmsil_codez00,
		BgL_bgl_string5730za700za7za7m5848za7, "bad atom value", 14);
	      DEFINE_STRING(BGl_string5729z00zzmsil_codez00,
		BgL_bgl_string5729za700za7za7m5849za7, "loadi", 5);
	      DEFINE_STRING(BGl_string5731z00zzmsil_codez00,
		BgL_bgl_string5731za700za7za7m5850za7, "msil_code", 9);
	      DEFINE_STRING(BGl_string5732z00zzmsil_codez00,
		BgL_bgl_string5732za700za7za7m5851za7,
		"(ucs2) (fstring) getbytes bstring (int int) float car else jumpexit (obj obj obj) fail exception setexit ok not-inlined gen-fun-default4989 tail_apply tail_funcall tail_lightfuncall tail_call lreg (obj) (obj obj) no-value int bool (exception exit) debug_dot_handler (bexception exit) debug_handler bigloo.foreign obj exit ",
		322);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_funcallzd2nilzd2envz00zzmsil_codez00,
		BgL_bgl__tail_funcallza7d25852za7, BGl__tail_funcallzd2nilzd2zzmsil_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genzd2exprzd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2exprza7d2za7za75853z00, BGl__genzd2exprzd2zzmsil_codez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2argszd2genzd2funzd2def4966zd2envzd2zzmsil_codez00,
		BgL_bgl__genza7d2argsza7d2ge5854z00,
		BGl__genzd2argszd2genzd2funzd2def4966z00zzmsil_codez00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2argszd2genzd2predica5049zd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2argsza7d2ge5855z00,
		BGl__genzd2argszd2genzd2predica5049zd2zzmsil_codez00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tail_applyzd2nilzd2envz00zzmsil_codez00,
		BgL_bgl__tail_applyza7d2ni5856za7, BGl__tail_applyzd2nilzd2zzmsil_codez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2argszd2genzd2predicatezd2envz00zzmsil_codez00,
		BgL_bgl__genza7d2argsza7d2ge5857z00,
		BGl__genzd2argszd2genzd2predicatezd2zzmsil_codez00, 0L, BUNSPEC, 5);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_codez00(long
		BgL_checksumz00_4408, char *BgL_fromz00_4409)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_codez00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_codez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_codez00();
					BGl_cnstzd2initzd2zzmsil_codez00();
					BGl_importedzd2moduleszd2initz00zzmsil_codez00();
					BGl_objectzd2initzd2zzmsil_codez00();
					BGl_genericzd2initzd2zzmsil_codez00();
					BGl_methodzd2initzd2zzmsil_codez00();
					BGl_toplevelzd2initzd2zzmsil_codez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_code");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_code");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_code");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "msil_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"msil_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"msil_code");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"msil_code");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"msil_code");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			{	/* SawMsil/code.scm 1 */
				obj_t BgL_cportz00_4343;

				BgL_cportz00_4343 =
					bgl_open_input_string(BGl_string5732z00zzmsil_codez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4344;

					BgL_iz00_4344 = ((long) 32);
				BgL_loopz00_4345:
					if ((BgL_iz00_4344 == ((long) -1)))
						{	/* SawMsil/code.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/code.scm 1 */
							{	/* SawMsil/code.scm 1 */
								obj_t BgL_arg5734z00_4347;

								{	/* SawMsil/code.scm 1 */

									{	/* SawMsil/code.scm 1 */
										obj_t BgL_locationz00_4349;

										BgL_locationz00_4349 = BBOOL(((bool_t) 0));
										{	/* SawMsil/code.scm 1 */

											BgL_arg5734z00_4347 =
												BGl_readz00zz__readerz00(BgL_cportz00_4343,
												BgL_locationz00_4349);
										}
									}
								}
								{	/* SawMsil/code.scm 1 */
									int BgL_auxz00_4434;

									BgL_auxz00_4434 = (int) (BgL_iz00_4344);
									CNST_TABLE_SET(BgL_auxz00_4434, BgL_arg5734z00_4347);
							}}
							{	/* SawMsil/code.scm 1 */
								int BgL_auxz00_4350;

								BgL_auxz00_4350 = (int) ((BgL_iz00_4344 - ((long) 1)));
								{
									long BgL_iz00_4439;

									BgL_iz00_4439 = (long) (BgL_auxz00_4350);
									BgL_iz00_4344 = BgL_iz00_4439;
									goto BgL_loopz00_4345;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_za2commentza2z00zzmsil_codez00 = ((bool_t) 0);
			BGl_za2hasprotectza2z00zzmsil_codez00 = ((bool_t) 0);
			BGl_za2protectresultza2z00zzmsil_codez00 = BFALSE;
			BGl_za2bexitregza2z00zzmsil_codez00 = BFALSE;
			BGl_za2bugmonoregza2z00zzmsil_codez00 = BFALSE;
			BGl_za2switchregza2z00zzmsil_codez00 = BFALSE;
			return BUNSPEC;
		}
	}



/* module-code */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2codezd2zzmsil_codez00(BgL_dotnetz00_bglt
		BgL_mez00_1, BgL_globalz00_bglt BgL_vz00_2, obj_t BgL_paramsz00_3,
		obj_t BgL_lz00_4)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 43 */
			BGl_declarezd2localszd2zzmsil_outz00(BgL_mez00_1,
				BGl_sortz00zz__r4_vectors_6_8z00(BGl_getzd2localszd2zzmsil_codez00
					(BgL_paramsz00_3, BgL_lz00_4), BGl_proc5645z00zzmsil_codez00));
			{	/* SawMsil/code.scm 47 */
				obj_t BgL_arg5081z00_1534;

				{	/* SawMsil/code.scm 47 */
					obj_t BgL_arg5083z00_1536;

					{
						BgL_variablez00_bglt BgL_auxz00_4444;

						BgL_auxz00_4444 = (BgL_variablez00_bglt) (BgL_vz00_2);
						BgL_arg5083z00_1536 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_4444))->BgL_namez00);
					}
					BgL_arg5081z00_1534 =
						string_append(BGl_string5646z00zzmsil_codez00, BgL_arg5083z00_1536);
				}
				BGl_printzd2infozd2zzmsil_outz00(BgL_mez00_1, BgL_arg5081z00_1534);
			}
			{
				obj_t BgL_l4909z00_1538;

				BgL_l4909z00_1538 = BgL_lz00_4;
			BgL_zc3anonymousza35084ze3z83_1539:
				if (PAIRP(BgL_l4909z00_1538))
					{	/* SawMsil/code.scm 48 */
						{	/* SawMsil/code.scm 50 */
							obj_t BgL_bz00_1541;

							BgL_bz00_1541 = CAR(BgL_l4909z00_1538);
							{	/* SawMsil/code.scm 49 */
								int BgL_arg5087z00_1543;

								{
									BgL_blockz00_bglt BgL_auxz00_4452;

									BgL_auxz00_4452 = (BgL_blockz00_bglt) (BgL_bz00_1541);
									BgL_arg5087z00_1543 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_4452))->BgL_labelz00);
								}
								BGl_labelz00zzmsil_outz00(BgL_mez00_1,
									BGl_string5647z00zzmsil_codez00, BINT(BgL_arg5087z00_1543));
							}
							{	/* SawMsil/code.scm 50 */
								obj_t BgL_g4908z00_1544;

								{
									BgL_blockz00_bglt BgL_auxz00_4457;

									BgL_auxz00_4457 = (BgL_blockz00_bglt) (BgL_bz00_1541);
									BgL_g4908z00_1544 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_4457))->BgL_firstz00);
								}
								{
									obj_t BgL_l4906z00_1546;

									BgL_l4906z00_1546 = BgL_g4908z00_1544;
								BgL_zc3anonymousza35088ze3z83_1547:
									if (PAIRP(BgL_l4906z00_1546))
										{	/* SawMsil/code.scm 50 */
											BGl_genzd2inszd2zzmsil_codez00(BgL_mez00_1,
												CAR(BgL_l4906z00_1546));
											{
												obj_t BgL_l4906z00_4464;

												BgL_l4906z00_4464 = CDR(BgL_l4906z00_1546);
												BgL_l4906z00_1546 = BgL_l4906z00_4464;
												goto BgL_zc3anonymousza35088ze3z83_1547;
											}
										}
									else
										{	/* SawMsil/code.scm 50 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l4909z00_4466;

							BgL_l4909z00_4466 = CDR(BgL_l4909z00_1538);
							BgL_l4909z00_1538 = BgL_l4909z00_4466;
							goto BgL_zc3anonymousza35084ze3z83_1539;
						}
					}
				else
					{	/* SawMsil/code.scm 48 */
						((bool_t) 1);
					}
			}
			if (BGl_za2hasprotectza2z00zzmsil_codez00)
				{	/* SawMsil/code.scm 53 */
					BGl_labelz00zzmsil_outz00(BgL_mez00_1,
						BGl_string5648z00zzmsil_codez00, BGl_string5649z00zzmsil_codez00);
					BGl_openzd2catchzd2zzmsil_outz00(BgL_mez00_1,
						BGl_string5650z00zzmsil_codez00, BGl_string5651z00zzmsil_codez00);
					{	/* SawMsil/code.scm 56 */
						obj_t BgL_arg5092z00_1554;

						{	/* SawMsil/code.scm 56 */
							BgL_lregz00_bglt BgL_obj4781z00_3039;

							BgL_obj4781z00_3039 =
								(BgL_lregz00_bglt) (BGl_za2bugmonoregza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4472;

								{	/* SawMsil/code.scm 56 */
									BgL_objectz00_bglt BgL_auxz00_4473;

									BgL_auxz00_4473 = (BgL_objectz00_bglt) (BgL_obj4781z00_3039);
									BgL_auxz00_4472 = BGL_OBJECT_WIDENING(BgL_auxz00_4473);
								}
								BgL_arg5092z00_1554 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4472))->BgL_indexz00);
							}
						}
						BGl_loadzd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5092z00_1554));
					}
					BGl_brfalsez00zzmsil_outz00(BgL_mez00_1,
						BGl_string5648z00zzmsil_codez00, BGl_string5652z00zzmsil_codez00);
					BGl_rethrowz00zzmsil_outz00(BgL_mez00_1);
					BGl_labelz00zzmsil_outz00(BgL_mez00_1,
						BGl_string5648z00zzmsil_codez00, BGl_string5652z00zzmsil_codez00);
					BGl_pushzd2intzd2zzmsil_outz00(BgL_mez00_1, BINT(((long) 1)));
					{	/* SawMsil/code.scm 61 */
						obj_t BgL_arg5093z00_1555;

						{	/* SawMsil/code.scm 61 */
							BgL_lregz00_bglt BgL_obj4781z00_3040;

							BgL_obj4781z00_3040 =
								(BgL_lregz00_bglt) (BGl_za2bugmonoregza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4485;

								{	/* SawMsil/code.scm 61 */
									BgL_objectz00_bglt BgL_auxz00_4486;

									BgL_auxz00_4486 = (BgL_objectz00_bglt) (BgL_obj4781z00_3040);
									BgL_auxz00_4485 = BGL_OBJECT_WIDENING(BgL_auxz00_4486);
								}
								BgL_arg5093z00_1555 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4485))->BgL_indexz00);
						}}
						BGl_storezd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5093z00_1555));
					}
					{	/* SawMsil/code.scm 62 */
						obj_t BgL_arg5094z00_1556;

						{	/* SawMsil/code.scm 62 */
							BgL_lregz00_bglt BgL_obj4781z00_3041;

							BgL_obj4781z00_3041 =
								(BgL_lregz00_bglt) (BGl_za2bexitregza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4493;

								{	/* SawMsil/code.scm 62 */
									BgL_objectz00_bglt BgL_auxz00_4494;

									BgL_auxz00_4494 = (BgL_objectz00_bglt) (BgL_obj4781z00_3041);
									BgL_auxz00_4493 = BGL_OBJECT_WIDENING(BgL_auxz00_4494);
								}
								BgL_arg5094z00_1556 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4493))->BgL_indexz00);
						}}
						BGl_loadzd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5094z00_1556));
					}
					BGl_castclassz00zzmsil_outz00(BgL_mez00_1,
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0))));
					BGl_libcallz00zzmsil_outz00(BgL_mez00_1,
						CNST_TABLE_REF(((long) 1)),
						CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3)), CNST_TABLE_REF(((long) 4)));
					{	/* SawMsil/code.scm 65 */
						obj_t BgL_arg5096z00_1558;

						{	/* SawMsil/code.scm 65 */
							BgL_lregz00_bglt BgL_obj4781z00_3042;

							BgL_obj4781z00_3042 =
								(BgL_lregz00_bglt) (BGl_za2protectresultza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4509;

								{	/* SawMsil/code.scm 65 */
									BgL_objectz00_bglt BgL_auxz00_4510;

									BgL_auxz00_4510 = (BgL_objectz00_bglt) (BgL_obj4781z00_3042);
									BgL_auxz00_4509 = BGL_OBJECT_WIDENING(BgL_auxz00_4510);
								}
								BgL_arg5096z00_1558 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4509))->BgL_indexz00);
						}}
						BGl_storezd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5096z00_1558));
					}
					BGl_openzd2catchzd2zzmsil_outz00(BgL_mez00_1,
						BGl_string5653z00zzmsil_codez00, BGl_string5651z00zzmsil_codez00);
					{	/* SawMsil/code.scm 67 */
						obj_t BgL_arg5097z00_1559;

						{	/* SawMsil/code.scm 67 */
							BgL_lregz00_bglt BgL_obj4781z00_3043;

							BgL_obj4781z00_3043 =
								(BgL_lregz00_bglt) (BGl_za2bexitregza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4518;

								{	/* SawMsil/code.scm 67 */
									BgL_objectz00_bglt BgL_auxz00_4519;

									BgL_auxz00_4519 = (BgL_objectz00_bglt) (BgL_obj4781z00_3043);
									BgL_auxz00_4518 = BGL_OBJECT_WIDENING(BgL_auxz00_4519);
								}
								BgL_arg5097z00_1559 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4518))->BgL_indexz00);
						}}
						BGl_loadzd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5097z00_1559));
					}
					BGl_castclassz00zzmsil_outz00(BgL_mez00_1,
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0))));
					BGl_libcallz00zzmsil_outz00(BgL_mez00_1,
						CNST_TABLE_REF(((long) 1)),
						CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 5)), CNST_TABLE_REF(((long) 6)));
					{	/* SawMsil/code.scm 70 */
						obj_t BgL_arg5099z00_1561;

						{	/* SawMsil/code.scm 70 */
							BgL_lregz00_bglt BgL_obj4781z00_3044;

							BgL_obj4781z00_3044 =
								(BgL_lregz00_bglt) (BGl_za2protectresultza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4534;

								{	/* SawMsil/code.scm 70 */
									BgL_objectz00_bglt BgL_auxz00_4535;

									BgL_auxz00_4535 = (BgL_objectz00_bglt) (BgL_obj4781z00_3044);
									BgL_auxz00_4534 = BGL_OBJECT_WIDENING(BgL_auxz00_4535);
								}
								BgL_arg5099z00_1561 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4534))->BgL_indexz00);
						}}
						BGl_storezd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5099z00_1561));
					}
					BGl_closezd2tryzd2zzmsil_outz00(BgL_mez00_1,
						BGl_string5651z00zzmsil_codez00);
					{	/* SawMsil/code.scm 72 */
						obj_t BgL_arg5100z00_1562;

						{	/* SawMsil/code.scm 72 */
							BgL_lregz00_bglt BgL_obj4781z00_3045;

							BgL_obj4781z00_3045 =
								(BgL_lregz00_bglt) (BGl_za2protectresultza2z00zzmsil_codez00);
							{
								obj_t BgL_auxz00_4543;

								{	/* SawMsil/code.scm 72 */
									BgL_objectz00_bglt BgL_auxz00_4544;

									BgL_auxz00_4544 = (BgL_objectz00_bglt) (BgL_obj4781z00_3045);
									BgL_auxz00_4543 = BGL_OBJECT_WIDENING(BgL_auxz00_4544);
								}
								BgL_arg5100z00_1562 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4543))->BgL_indexz00);
						}}
						BGl_loadzd2varzd2zzmsil_outz00(BgL_mez00_1,
							CINT(BgL_arg5100z00_1562));
					}
					return BGl_returnz00zzmsil_outz00(BgL_mez00_1);
				}
			else
				{	/* SawMsil/code.scm 53 */
					return BFALSE;
				}
		}
	}



/* _module-code */
	obj_t BGl__modulezd2codezd2zzmsil_codez00(obj_t BgL_envz00_4047,
		obj_t BgL_mez00_4048, obj_t BgL_vz00_4049, obj_t BgL_paramsz00_4050,
		obj_t BgL_lz00_4051)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 43 */
			return
				BGl_modulezd2codezd2zzmsil_codez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_4048),
				(BgL_globalz00_bglt) (BgL_vz00_4049), BgL_paramsz00_4050,
				BgL_lz00_4051);
		}
	}



/* <anonymous:5078> */
	obj_t BGl_zc3anonymousza35078ze3z83zzmsil_codez00(obj_t BgL_envz00_4052,
		obj_t BgL_r1z00_4053, obj_t BgL_r2z00_4054)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 45 */
			{
				obj_t BgL_r1z00_1528;

				obj_t BgL_r2z00_1529;

				{	/* SawMsil/code.scm 45 */
					bool_t BgL_auxz00_4554;

					BgL_r1z00_1528 = BgL_r1z00_4053;
					BgL_r2z00_1529 = BgL_r2z00_4054;
					{	/* SawMsil/code.scm 45 */
						long BgL_auxz00_4564;

						long BgL_auxz00_4555;

						{	/* SawMsil/code.scm 46 */
							BgL_lregz00_bglt BgL_obj4781z00_3027;

							BgL_obj4781z00_3027 = (BgL_lregz00_bglt) (BgL_r2z00_1529);
							{	/* SawMsil/code.scm 46 */
								obj_t BgL_auxz00_4566;

								{
									obj_t BgL_auxz00_4567;

									{	/* SawMsil/code.scm 46 */
										BgL_objectz00_bglt BgL_auxz00_4568;

										BgL_auxz00_4568 =
											(BgL_objectz00_bglt) (BgL_obj4781z00_3027);
										BgL_auxz00_4567 = BGL_OBJECT_WIDENING(BgL_auxz00_4568);
									}
									BgL_auxz00_4566 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_4567))->BgL_indexz00);
								}
								BgL_auxz00_4564 = (long) CINT(BgL_auxz00_4566);
						}}
						{	/* SawMsil/code.scm 45 */
							BgL_lregz00_bglt BgL_obj4781z00_3026;

							BgL_obj4781z00_3026 = (BgL_lregz00_bglt) (BgL_r1z00_1528);
							{	/* SawMsil/code.scm 45 */
								obj_t BgL_auxz00_4557;

								{
									obj_t BgL_auxz00_4558;

									{	/* SawMsil/code.scm 45 */
										BgL_objectz00_bglt BgL_auxz00_4559;

										BgL_auxz00_4559 =
											(BgL_objectz00_bglt) (BgL_obj4781z00_3026);
										BgL_auxz00_4558 = BGL_OBJECT_WIDENING(BgL_auxz00_4559);
									}
									BgL_auxz00_4557 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_4558))->BgL_indexz00);
								}
								BgL_auxz00_4555 = (long) CINT(BgL_auxz00_4557);
						}}
						BgL_auxz00_4554 = (BgL_auxz00_4555 < BgL_auxz00_4564);
					}
					return BBOOL(BgL_auxz00_4554);
				}
			}
		}
	}



/* get-locals */
	obj_t BGl_getzd2localszd2zzmsil_codez00(obj_t BgL_paramsz00_5,
		obj_t BgL_lz00_6)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 79 */
			BGl_za2hasprotectza2z00zzmsil_codez00 = ((bool_t) 0);
			BGl_za2protectresultza2z00zzmsil_codez00 = BFALSE;
			{	/* SawMsil/code.scm 82 */
				obj_t BgL_nz00_1563;

				obj_t BgL_regsz00_1564;

				{	/* SawMsil/code.scm 82 */
					obj_t BgL_cellvalz00_4575;

					BgL_cellvalz00_4575 = BINT(((long) 0));
					BgL_nz00_1563 = MAKE_CELL(BgL_cellvalz00_4575);
				}
				BgL_regsz00_1564 = MAKE_CELL(BNIL);
				{
					obj_t BgL_ez00_1628;

					{
						obj_t BgL_lz00_1571;

						long BgL_nz00_1572;

						BgL_lz00_1571 = BgL_paramsz00_5;
						BgL_nz00_1572 = ((long) 0);
					BgL_zc3anonymousza35101ze3z83_1573:
						if (NULLP(BgL_lz00_1571))
							{	/* SawMsil/code.scm 119 */
								((bool_t) 0);
							}
						else
							{	/* SawMsil/code.scm 119 */
								{	/* SawMsil/code.scm 120 */
									BgL_rtl_regz00_bglt BgL_obj4884z00_1575;

									BgL_obj4884z00_1575 =
										((BgL_rtl_regz00_bglt)
										(BgL_rtl_regz00_bglt) (CAR(BgL_lz00_1571)));
									{	/* SawMsil/code.scm 120 */
										BgL_lregz00_bglt BgL_arg5103z00_1576;

										{	/* SawMsil/code.scm 120 */
											BgL_lregz00_bglt BgL_res5577z00_3057;

											{	/* SawMsil/code.scm 120 */
												obj_t BgL_index4752z00_3048;

												BgL_index4752z00_3048 = BINT(BgL_nz00_1572);
												{	/* SawMsil/code.scm 120 */
													BgL_lregz00_bglt BgL_new4754z00_3050;

													BgL_new4754z00_3050 =
														((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_lregz00_bgl))));
													{	/* SawMsil/code.scm 120 */
														BgL_lregz00_bglt BgL_res5576z00_3056;

														{	/* SawMsil/code.scm 120 */
															BgL_lregz00_bglt BgL_new4768z00_3051;

															BgL_new4768z00_3051 = BgL_new4754z00_3050;
															{	/* SawMsil/code.scm 120 */
																obj_t BgL_index4766z00_3054;

																obj_t BgL_paramzf34767zf3_3055;

																BgL_index4766z00_3054 = BgL_index4752z00_3048;
																BgL_paramzf34767zf3_3055 = BTRUE;
																((((BgL_lregz00_bglt)
																			CREF(BgL_new4768z00_3051))->
																		BgL_indexz00) =
																	((obj_t) BgL_index4766z00_3054), BUNSPEC);
																((((BgL_lregz00_bglt)
																			CREF(BgL_new4768z00_3051))->
																		BgL_paramzf3zf3) =
																	((obj_t) BgL_paramzf34767zf3_3055), BUNSPEC);
																BgL_res5576z00_3056 = BgL_new4768z00_3051;
														}} BgL_res5576z00_3056;
													}
													BgL_res5577z00_3057 = BgL_new4754z00_3050;
											}}
											BgL_arg5103z00_1576 = BgL_res5577z00_3057;
										}
										{	/* SawMsil/code.scm 120 */
											obj_t BgL_auxz00_4588;

											BgL_objectz00_bglt BgL_auxz00_4586;

											BgL_auxz00_4588 = (obj_t) (BgL_arg5103z00_1576);
											BgL_auxz00_4586 =
												(BgL_objectz00_bglt) (BgL_obj4884z00_1575);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_4586, BgL_auxz00_4588);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4884z00_1575),
										BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzmsil_codez00));
									BgL_obj4884z00_1575;
								}
								{
									long BgL_nz00_4596;

									obj_t BgL_lz00_4594;

									BgL_lz00_4594 = CDR(BgL_lz00_1571);
									BgL_nz00_4596 = (BgL_nz00_1572 + ((long) 1));
									BgL_nz00_1572 = BgL_nz00_4596;
									BgL_lz00_1571 = BgL_lz00_4594;
									goto BgL_zc3anonymousza35101ze3z83_1573;
								}
							}
					}
					{
						obj_t BgL_l4920z00_1582;

						BgL_l4920z00_1582 = BgL_lz00_6;
					BgL_zc3anonymousza35107ze3z83_1583:
						if (PAIRP(BgL_l4920z00_1582))
							{	/* SawMsil/code.scm 122 */
								{	/* SawMsil/code.scm 122 */
									obj_t BgL_bz00_1585;

									BgL_bz00_1585 = CAR(BgL_l4920z00_1582);
									{	/* SawMsil/code.scm 122 */
										obj_t BgL_g4919z00_1586;

										{
											BgL_blockz00_bglt BgL_auxz00_4601;

											BgL_auxz00_4601 = (BgL_blockz00_bglt) (BgL_bz00_1585);
											BgL_g4919z00_1586 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_4601))->
												BgL_firstz00);
										}
										{
											obj_t BgL_l4917z00_1588;

											BgL_l4917z00_1588 = BgL_g4919z00_1586;
										BgL_zc3anonymousza35109ze3z83_1589:
											if (PAIRP(BgL_l4917z00_1588))
												{	/* SawMsil/code.scm 122 */
													BgL_ez00_1628 = CAR(BgL_l4917z00_1588);
													{	/* SawMsil/code.scm 114 */
														obj_t BgL_destz00_1630;

														{
															BgL_rtl_insz00_bglt BgL_auxz00_4606;

															BgL_auxz00_4606 =
																(BgL_rtl_insz00_bglt) (BgL_ez00_1628);
															BgL_destz00_1630 =
																(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4606))->
																BgL_destz00);
														}
														if (CBOOL(BgL_destz00_1630))
															{	/* SawMsil/code.scm 115 */
																BGl_regzd2ze3lregz31zzmsil_codez00
																	(BgL_regsz00_1564, BgL_nz00_1563,
																	BgL_destz00_1630);
															}
														else
															{	/* SawMsil/code.scm 115 */
																BFALSE;
															}
														BGl_check_funz00zzmsil_codez00(BgL_regsz00_1564,
															BgL_nz00_1563, BgL_ez00_1628);
														{	/* SawMsil/code.scm 117 */
															obj_t BgL_g4916z00_1631;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_4613;

																BgL_auxz00_4613 =
																	(BgL_rtl_insz00_bglt) (BgL_ez00_1628);
																BgL_g4916z00_1631 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_4613))->BgL_argsz00);
															}
															{
																obj_t BgL_l4914z00_1633;

																BgL_l4914z00_1633 = BgL_g4916z00_1631;
															BgL_zc3anonymousza35134ze3z83_1634:
																if (PAIRP(BgL_l4914z00_1633))
																	{	/* SawMsil/code.scm 117 */
																		BGl_exprz00zzmsil_codez00(BgL_regsz00_1564,
																			BgL_nz00_1563, CAR(BgL_l4914z00_1633));
																		{
																			obj_t BgL_l4914z00_4620;

																			BgL_l4914z00_4620 =
																				CDR(BgL_l4914z00_1633);
																			BgL_l4914z00_1633 = BgL_l4914z00_4620;
																			goto BgL_zc3anonymousza35134ze3z83_1634;
																		}
																	}
																else
																	{	/* SawMsil/code.scm 117 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l4917z00_4623;

														BgL_l4917z00_4623 = CDR(BgL_l4917z00_1588);
														BgL_l4917z00_1588 = BgL_l4917z00_4623;
														goto BgL_zc3anonymousza35109ze3z83_1589;
													}
												}
											else
												{	/* SawMsil/code.scm 122 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4920z00_4625;

									BgL_l4920z00_4625 = CDR(BgL_l4920z00_1582);
									BgL_l4920z00_1582 = BgL_l4920z00_4625;
									goto BgL_zc3anonymousza35107ze3z83_1583;
								}
							}
						else
							{	/* SawMsil/code.scm 122 */
								((bool_t) 1);
							}
					}
					return CELL_REF(BgL_regsz00_1564);
				}
			}
		}
	}



/* nr */
	BgL_rtl_regz00_bglt BGl_nrz00zzmsil_codez00(obj_t BgL_regsz00_4334,
		obj_t BgL_nz00_4333, BgL_typez00_bglt BgL_tz00_1602)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 96 */
			{	/* SawMsil/code.scm 91 */
				BgL_rtl_regz00_bglt BgL_rz00_1604;

				{	/* SawMsil/code.scm 94 */
					obj_t BgL_arg5119z00_1605;

					obj_t BgL_arg5120z00_1606;

					{	/* SawMsil/code.scm 94 */

						{	/* SawMsil/code.scm 94 */

							BgL_arg5119z00_1605 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					{	/* SawMill/defs.scm 16 */

						{	/* SawMill/defs.scm 16 */

							BgL_arg5120z00_1606 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					BgL_rz00_1604 =
						BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_tz00_1602, BFALSE, BFALSE,
						BgL_arg5119z00_1605, BgL_arg5120z00_1606, BFALSE);
				}
				BGl_regzd2ze3lregz31zzmsil_codez00(BgL_regsz00_4334, BgL_nz00_4333,
					(obj_t) (BgL_rz00_1604));
				return BgL_rz00_1604;
			}
		}
	}



/* reg->lreg */
	obj_t BGl_regzd2ze3lregz31zzmsil_codez00(obj_t BgL_regsz00_4336,
		obj_t BgL_nz00_4335, obj_t BgL_rz00_1596)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 88 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_rz00_1596,
					BGl_lregz00zzmsil_codez00))
				{	/* SawMsil/code.scm 85 */
					return BFALSE;
				}
			else
				{	/* SawMsil/code.scm 85 */
					{	/* SawMsil/code.scm 86 */
						BgL_rtl_regz00_bglt BgL_obj4882z00_1599;

						BgL_obj4882z00_1599 =
							((BgL_rtl_regz00_bglt) (BgL_rtl_regz00_bglt) (BgL_rz00_1596));
						{	/* SawMsil/code.scm 86 */
							BgL_lregz00_bglt BgL_arg5116z00_1600;

							{	/* SawMsil/code.scm 86 */
								BgL_lregz00_bglt BgL_res5579z00_3080;

								{	/* SawMsil/code.scm 86 */
									obj_t BgL_index4752z00_3071;

									BgL_index4752z00_3071 = CELL_REF(BgL_nz00_4335);
									{	/* SawMsil/code.scm 86 */
										BgL_lregz00_bglt BgL_new4754z00_3073;

										BgL_new4754z00_3073 =
											((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_lregz00_bgl))));
										{	/* SawMsil/code.scm 86 */
											BgL_lregz00_bglt BgL_res5578z00_3079;

											{	/* SawMsil/code.scm 86 */
												BgL_lregz00_bglt BgL_new4768z00_3074;

												BgL_new4768z00_3074 = BgL_new4754z00_3073;
												{	/* SawMsil/code.scm 86 */
													obj_t BgL_index4766z00_3077;

													obj_t BgL_paramzf34767zf3_3078;

													BgL_index4766z00_3077 = BgL_index4752z00_3071;
													BgL_paramzf34767zf3_3078 = BFALSE;
													((((BgL_lregz00_bglt) CREF(BgL_new4768z00_3074))->
															BgL_indexz00) =
														((obj_t) BgL_index4766z00_3077), BUNSPEC);
													((((BgL_lregz00_bglt) CREF(BgL_new4768z00_3074))->
															BgL_paramzf3zf3) =
														((obj_t) BgL_paramzf34767zf3_3078), BUNSPEC);
													BgL_res5578z00_3079 = BgL_new4768z00_3074;
											}} BgL_res5578z00_3079;
										}
										BgL_res5579z00_3080 = BgL_new4754z00_3073;
								}}
								BgL_arg5116z00_1600 = BgL_res5579z00_3080;
							}
							{	/* SawMsil/code.scm 86 */
								obj_t BgL_auxz00_4641;

								BgL_objectz00_bglt BgL_auxz00_4639;

								BgL_auxz00_4641 = (obj_t) (BgL_arg5116z00_1600);
								BgL_auxz00_4639 = (BgL_objectz00_bglt) (BgL_obj4882z00_1599);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4639, BgL_auxz00_4641);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4882z00_1599),
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzmsil_codez00));
						BgL_obj4882z00_1599;
					}
					{	/* SawMsil/code.scm 87 */
						obj_t BgL_auxz00_4337;

						{	/* SawMsil/code.scm 87 */
							long BgL_za71za7_3083;

							BgL_za71za7_3083 = (long) CINT(CELL_REF(BgL_nz00_4335));
							BgL_auxz00_4337 = BINT((BgL_za71za7_3083 + ((long) 1)));
						}
						CELL_SET(BgL_nz00_4335, BgL_auxz00_4337);
					}
					{	/* SawMsil/code.scm 88 */
						obj_t BgL_auxz00_4338;

						BgL_auxz00_4338 =
							MAKE_PAIR(BgL_rz00_1596, CELL_REF(BgL_regsz00_4336));
						return CELL_SET(BgL_regsz00_4336, BgL_auxz00_4338);
					}
				}
		}
	}



/* check_fun */
	obj_t BGl_check_funz00zzmsil_codez00(obj_t BgL_regsz00_4340,
		obj_t BgL_nz00_4339, obj_t BgL_ez00_1609)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 107 */
			{	/* SawMsil/code.scm 99 */
				BgL_rtl_funz00_bglt BgL_funz00_1611;

				{
					BgL_rtl_insz00_bglt BgL_auxz00_4651;

					BgL_auxz00_4651 = (BgL_rtl_insz00_bglt) (BgL_ez00_1609);
					BgL_funz00_1611 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4651))->BgL_funz00);
				}
				{	/* SawMsil/code.scm 101 */
					bool_t BgL_testz00_4654;

					{	/* SawMsil/code.scm 101 */
						obj_t BgL_obj4607z00_3086;

						BgL_obj4607z00_3086 = (obj_t) (BgL_funz00_1611);
						BgL_testz00_4654 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj4607z00_3086,
							BGl_rtl_protectz00zzsaw_defsz00);
					}
					if (BgL_testz00_4654)
						{	/* SawMsil/code.scm 101 */
							BGl_za2hasprotectza2z00zzmsil_codez00 = ((bool_t) 1);
							{	/* SawMsil/code.scm 103 */
								BgL_typez00_bglt BgL_arg5123z00_1613;

								BgL_arg5123z00_1613 =
									BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 7)));
								BGl_za2bugmonoregza2z00zzmsil_codez00 =
									(obj_t) (BGl_nrz00zzmsil_codez00(BgL_regsz00_4340,
										BgL_nz00_4339, BgL_arg5123z00_1613));
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_4661;

								BgL_auxz00_4661 = (BgL_rtl_insz00_bglt) (BgL_ez00_1609);
								BGl_za2bexitregza2z00zzmsil_codez00 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4661))->BgL_destz00);
							}
							{	/* SawMsil/code.scm 105 */
								BgL_typez00_bglt BgL_arg5124z00_1614;

								BgL_arg5124z00_1614 =
									BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 1)));
								return (BGl_za2protectresultza2z00zzmsil_codez00 =
									(obj_t) (BGl_nrz00zzmsil_codez00(BgL_regsz00_4340,
											BgL_nz00_4339, BgL_arg5124z00_1614)), BUNSPEC);
							}
						}
					else
						{	/* SawMsil/code.scm 106 */
							bool_t BgL_testz00_4668;

							{	/* SawMsil/code.scm 106 */
								obj_t BgL_obj4109z00_3088;

								BgL_obj4109z00_3088 = (obj_t) (BgL_funz00_1611);
								BgL_testz00_4668 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj4109z00_3088,
									BGl_rtl_switchz00zzsaw_defsz00);
							}
							if (BgL_testz00_4668)
								{	/* SawMsil/code.scm 107 */
									BgL_typez00_bglt BgL_arg5126z00_1616;

									BgL_arg5126z00_1616 =
										BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 8)));
									return (BGl_za2switchregza2z00zzmsil_codez00 =
										(obj_t) (BGl_nrz00zzmsil_codez00(BgL_regsz00_4340,
												BgL_nz00_4339, BgL_arg5126z00_1616)), BUNSPEC);
								}
							else
								{	/* SawMsil/code.scm 106 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* expr */
	obj_t BGl_exprz00zzmsil_codez00(obj_t BgL_regsz00_4342, obj_t BgL_nz00_4341,
		obj_t BgL_ez00_1617)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 112 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1617,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMsil/code.scm 109 */
					return
						BGl_regzd2ze3lregz31zzmsil_codez00(BgL_regsz00_4342, BgL_nz00_4341,
						BgL_ez00_1617);
				}
			else
				{	/* SawMsil/code.scm 109 */
					BGl_check_funz00zzmsil_codez00(BgL_regsz00_4342, BgL_nz00_4341,
						BgL_ez00_1617);
					{	/* SawMsil/code.scm 112 */
						obj_t BgL_g4913z00_1620;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4679;

							BgL_auxz00_4679 = (BgL_rtl_insz00_bglt) (BgL_ez00_1617);
							BgL_g4913z00_1620 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4679))->BgL_argsz00);
						}
						{
							obj_t BgL_l4911z00_1622;

							{	/* SawMsil/code.scm 112 */
								bool_t BgL_auxz00_4682;

								BgL_l4911z00_1622 = BgL_g4913z00_1620;
							BgL_zc3anonymousza35129ze3z83_1623:
								if (PAIRP(BgL_l4911z00_1622))
									{	/* SawMsil/code.scm 112 */
										{	/* SawMsil/code.scm 112 */
											obj_t BgL_arg5131z00_1625;

											BgL_arg5131z00_1625 = CAR(BgL_l4911z00_1622);
											BGl_exprz00zzmsil_codez00(BgL_regsz00_4342, BgL_nz00_4341,
												BgL_arg5131z00_1625);
										}
										{
											obj_t BgL_l4911z00_4687;

											BgL_l4911z00_4687 = CDR(BgL_l4911z00_1622);
											BgL_l4911z00_1622 = BgL_l4911z00_4687;
											goto BgL_zc3anonymousza35129ze3z83_1623;
										}
									}
								else
									{	/* SawMsil/code.scm 112 */
										BgL_auxz00_4682 = ((bool_t) 1);
									}
								return BBOOL(BgL_auxz00_4682);
							}
						}
					}
				}
		}
	}



/* gen-ins */
	obj_t BGl_genzd2inszd2zzmsil_codez00(BgL_dotnetz00_bglt BgL_mez00_7,
		obj_t BgL_insz00_8)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 128 */
			if (BGl_za2commentza2z00zzmsil_codez00)
				{	/* SawMsil/code.scm 129 */
					BGl_commentz00zzmsil_outz00(BgL_mez00_7,
						BGl_string5654z00zzmsil_codez00,
						BGl_getzd2exprzd2zzmsil_codez00(BgL_insz00_8));
				}
			else
				{	/* SawMsil/code.scm 129 */
					BFALSE;
				}
			{	/* SawMsil/code.scm 132 */
				bool_t BgL_testz00_4693;

				{	/* SawMsil/code.scm 132 */
					obj_t BgL_arg5145z00_1653;

					obj_t BgL_arg5146z00_1654;

					{	/* SawMsil/code.scm 132 */
						BgL_rtl_funz00_bglt BgL_arg5147z00_1655;

						obj_t BgL_arg5148z00_1656;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4694;

							BgL_auxz00_4694 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
							BgL_arg5147z00_1655 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4694))->BgL_funz00);
						}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_4697;

							BgL_auxz00_4697 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
							BgL_arg5148z00_1656 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4697))->BgL_argsz00);
						}
						{	/* SawMsil/code.scm 132 */
							obj_t BgL_method4967z00_3108;

							{	/* SawMsil/code.scm 132 */
								BgL_objectz00_bglt BgL_objz00_3109;

								BgL_objz00_3109 = (BgL_objectz00_bglt) (BgL_arg5147z00_1655);
								{	/* SawMsil/code.scm 132 */
									long BgL_objzd2classzd2numz00_3110;

									BgL_objzd2classzd2numz00_3110 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3109);
									{	/* SawMsil/code.scm 132 */
										obj_t BgL_arg2643z00_3111;

										BgL_arg2643z00_3111 =
											PROCEDURE_REF
											(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
											(int) (((long) 1)));
										{	/* SawMsil/code.scm 132 */
											obj_t BgL_arrayz00_3113;

											int BgL_offsetz00_3114;

											BgL_arrayz00_3113 = BgL_arg2643z00_3111;
											BgL_offsetz00_3114 =
												(int) (BgL_objzd2classzd2numz00_3110);
											{	/* SawMsil/code.scm 132 */
												long BgL_offsetz00_3115;

												BgL_offsetz00_3115 =
													((long) (BgL_offsetz00_3114) - OBJECT_TYPE);
												{	/* SawMsil/code.scm 132 */
													long BgL_modz00_3116;

													{	/* SawMsil/code.scm 132 */
														int BgL_arg2645z00_3117;

														BgL_arg2645z00_3117 = (int) (((long) 16));
														{	/* SawMsil/code.scm 132 */
															long BgL_auxz00_4708;

															BgL_auxz00_4708 = (long) (BgL_arg2645z00_3117);
															BgL_modz00_3116 =
																(BgL_offsetz00_3115 / BgL_auxz00_4708);
													}}
													{	/* SawMsil/code.scm 132 */
														long BgL_restz00_3118;

														{	/* SawMsil/code.scm 132 */
															int BgL_arg2644z00_3119;

															BgL_arg2644z00_3119 = (int) (((long) 16));
															{	/* SawMsil/code.scm 132 */
																long BgL_auxz00_4712;

																BgL_auxz00_4712 = (long) (BgL_arg2644z00_3119);
																BgL_restz00_3118 =
																	(BgL_offsetz00_3115 % BgL_auxz00_4712);
														}}
														{	/* SawMsil/code.scm 132 */

															BgL_method4967z00_3108 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3113,
																	(int) (BgL_modz00_3116)),
																(int) (BgL_restz00_3118));
							}}}}}}}}
							BgL_arg5145z00_1653 =
								PROCEDURE_ENTRY(BgL_method4967z00_3108) (BgL_method4967z00_3108,
								(obj_t) (BgL_arg5147z00_1655),
								(obj_t) (BgL_mez00_7), BgL_arg5148z00_1656, BEOA);
					}}
					BgL_arg5146z00_1654 = CNST_TABLE_REF(((long) 9));
					BgL_testz00_4693 = (BgL_arg5145z00_1653 == BgL_arg5146z00_1654);
				}
				if (BgL_testz00_4693)
					{	/* SawMsil/code.scm 133 */
						bool_t BgL_testz00_4725;

						{	/* SawMsil/code.scm 133 */
							BgL_rtl_insz00_bglt BgL_obj4624z00_3133;

							BgL_obj4624z00_3133 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
							BgL_testz00_4725 =
								CBOOL(
								(((BgL_rtl_insz00_bglt) CREF(BgL_obj4624z00_3133))->
									BgL_destz00));
						}
						if (BgL_testz00_4725)
							{	/* SawMsil/code.scm 133 */
								BGl_pushzd2constantzd2zzmsil_outz00(BgL_mez00_7,
									BGl_string5655z00zzmsil_codez00);
								{	/* SawMsil/code.scm 135 */
									obj_t BgL_arg5140z00_1647;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4730;

										BgL_auxz00_4730 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
										BgL_arg5140z00_1647 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4730))->
											BgL_destz00);
									}
									return
										BGl_storez00zzmsil_codez00(
										(obj_t) (BgL_mez00_7), BgL_arg5140z00_1647);
								}
							}
						else
							{	/* SawMsil/code.scm 133 */
								return BFALSE;
							}
					}
				else
					{	/* SawMsil/code.scm 136 */
						bool_t BgL_testz00_4735;

						{	/* SawMsil/code.scm 136 */
							BgL_rtl_insz00_bglt BgL_obj4624z00_3135;

							BgL_obj4624z00_3135 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
							BgL_testz00_4735 =
								CBOOL(
								(((BgL_rtl_insz00_bglt) CREF(BgL_obj4624z00_3135))->
									BgL_destz00));
						}
						if (BgL_testz00_4735)
							{	/* SawMsil/code.scm 137 */
								obj_t BgL_arg5142z00_1649;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_4739;

									BgL_auxz00_4739 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
									BgL_arg5142z00_1649 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4739))->
										BgL_destz00);
								}
								return
									BGl_storez00zzmsil_codez00(
									(obj_t) (BgL_mez00_7), BgL_arg5142z00_1649);
							}
						else
							{	/* SawMsil/code.scm 138 */
								int BgL_nz00_1650;

								{	/* SawMsil/code.scm 138 */
									BgL_rtl_funz00_bglt BgL_arg5144z00_1652;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4744;

										BgL_auxz00_4744 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
										BgL_arg5144z00_1652 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4744))->
											BgL_funz00);
									}
									BgL_nz00_1650 =
										BGl_siza7ezd2destzd2funza7zzmsil_maxstackz00
										(BgL_arg5144z00_1652);
								}
								if (((long) (BgL_nz00_1650) > ((long) 0)))
									{	/* SawMsil/code.scm 139 */
										return BGl_popz00zzmsil_outz00(BgL_mez00_7);
									}
								else
									{	/* SawMsil/code.scm 139 */
										return BFALSE;
									}
							}
					}
			}
		}
	}



/* gen-expr */
	BGL_EXPORTED_DEF obj_t BGl_genzd2exprzd2zzmsil_codez00(BgL_dotnetz00_bglt
		BgL_mez00_9, obj_t BgL_insz00_10)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 142 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_10,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMsil/code.scm 143 */
					return
						BGl__loadz00zzmsil_codez00((obj_t) (BgL_mez00_9), BgL_insz00_10);
				}
			else
				{	/* SawMsil/code.scm 146 */
					bool_t BgL_testz00_4756;

					{	/* SawMsil/code.scm 146 */
						obj_t BgL_arg5151z00_1660;

						obj_t BgL_arg5152z00_1661;

						{	/* SawMsil/code.scm 146 */
							BgL_rtl_funz00_bglt BgL_arg5153z00_1662;

							obj_t BgL_arg5154z00_1663;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_4757;

								BgL_auxz00_4757 = (BgL_rtl_insz00_bglt) (BgL_insz00_10);
								BgL_arg5153z00_1662 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4757))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_4760;

								BgL_auxz00_4760 = (BgL_rtl_insz00_bglt) (BgL_insz00_10);
								BgL_arg5154z00_1663 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4760))->BgL_argsz00);
							}
							{	/* SawMsil/code.scm 146 */
								obj_t BgL_method4967z00_3146;

								{	/* SawMsil/code.scm 146 */
									BgL_objectz00_bglt BgL_objz00_3147;

									BgL_objz00_3147 = (BgL_objectz00_bglt) (BgL_arg5153z00_1662);
									{	/* SawMsil/code.scm 146 */
										long BgL_objzd2classzd2numz00_3148;

										BgL_objzd2classzd2numz00_3148 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3147);
										{	/* SawMsil/code.scm 146 */
											obj_t BgL_arg2643z00_3149;

											BgL_arg2643z00_3149 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
												(int) (((long) 1)));
											{	/* SawMsil/code.scm 146 */
												obj_t BgL_arrayz00_3151;

												int BgL_offsetz00_3152;

												BgL_arrayz00_3151 = BgL_arg2643z00_3149;
												BgL_offsetz00_3152 =
													(int) (BgL_objzd2classzd2numz00_3148);
												{	/* SawMsil/code.scm 146 */
													long BgL_offsetz00_3153;

													BgL_offsetz00_3153 =
														((long) (BgL_offsetz00_3152) - OBJECT_TYPE);
													{	/* SawMsil/code.scm 146 */
														long BgL_modz00_3154;

														{	/* SawMsil/code.scm 146 */
															int BgL_arg2645z00_3155;

															BgL_arg2645z00_3155 = (int) (((long) 16));
															{	/* SawMsil/code.scm 146 */
																long BgL_auxz00_4771;

																BgL_auxz00_4771 = (long) (BgL_arg2645z00_3155);
																BgL_modz00_3154 =
																	(BgL_offsetz00_3153 / BgL_auxz00_4771);
														}}
														{	/* SawMsil/code.scm 146 */
															long BgL_restz00_3156;

															{	/* SawMsil/code.scm 146 */
																int BgL_arg2644z00_3157;

																BgL_arg2644z00_3157 = (int) (((long) 16));
																{	/* SawMsil/code.scm 146 */
																	long BgL_auxz00_4775;

																	BgL_auxz00_4775 =
																		(long) (BgL_arg2644z00_3157);
																	BgL_restz00_3156 =
																		(BgL_offsetz00_3153 % BgL_auxz00_4775);
															}}
															{	/* SawMsil/code.scm 146 */

																BgL_method4967z00_3146 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3151,
																		(int) (BgL_modz00_3154)),
																	(int) (BgL_restz00_3156));
								}}}}}}}}
								BgL_arg5151z00_1660 =
									PROCEDURE_ENTRY(BgL_method4967z00_3146)
									(BgL_method4967z00_3146, (obj_t) (BgL_arg5153z00_1662),
									(obj_t) (BgL_mez00_9), BgL_arg5154z00_1663, BEOA);
						}}
						BgL_arg5152z00_1661 = CNST_TABLE_REF(((long) 9));
						BgL_testz00_4756 = (BgL_arg5151z00_1660 == BgL_arg5152z00_1661);
					}
					if (BgL_testz00_4756)
						{	/* SawMsil/code.scm 146 */
							return
								BGl_pushzd2constantzd2zzmsil_outz00(BgL_mez00_9,
								BGl_string5655z00zzmsil_codez00);
						}
					else
						{	/* SawMsil/code.scm 146 */
							return BFALSE;
						}
				}
		}
	}



/* _gen-expr */
	obj_t BGl__genzd2exprzd2zzmsil_codez00(obj_t BgL_envz00_4059,
		obj_t BgL_mez00_4060, obj_t BgL_insz00_4061)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 142 */
			return
				BGl_genzd2exprzd2zzmsil_codez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_4060), BgL_insz00_4061);
		}
	}



/* _load */
	obj_t BGl__loadz00zzmsil_codez00(obj_t BgL_mez00_11, obj_t BgL_rz00_12)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 149 */
			{	/* SawMsil/code.scm 150 */
				obj_t BgL_indexz00_1664;

				{	/* SawMsil/code.scm 150 */
					BgL_lregz00_bglt BgL_obj4781z00_3171;

					BgL_obj4781z00_3171 = (BgL_lregz00_bglt) (BgL_rz00_12);
					{
						obj_t BgL_auxz00_4792;

						{	/* SawMsil/code.scm 150 */
							BgL_objectz00_bglt BgL_auxz00_4793;

							BgL_auxz00_4793 = (BgL_objectz00_bglt) (BgL_obj4781z00_3171);
							BgL_auxz00_4792 = BGL_OBJECT_WIDENING(BgL_auxz00_4793);
						}
						BgL_indexz00_1664 =
							(((BgL_lregz00_bglt) CREF(BgL_auxz00_4792))->BgL_indexz00);
					}
				}
				{	/* SawMsil/code.scm 151 */
					bool_t BgL_testz00_4797;

					{	/* SawMsil/code.scm 151 */
						BgL_lregz00_bglt BgL_obj4784z00_3172;

						BgL_obj4784z00_3172 = (BgL_lregz00_bglt) (BgL_rz00_12);
						{	/* SawMsil/code.scm 151 */
							obj_t BgL_auxz00_4799;

							{
								obj_t BgL_auxz00_4800;

								{	/* SawMsil/code.scm 151 */
									BgL_objectz00_bglt BgL_auxz00_4801;

									BgL_auxz00_4801 = (BgL_objectz00_bglt) (BgL_obj4784z00_3172);
									BgL_auxz00_4800 = BGL_OBJECT_WIDENING(BgL_auxz00_4801);
								}
								BgL_auxz00_4799 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4800))->BgL_paramzf3zf3);
							}
							BgL_testz00_4797 = CBOOL(BgL_auxz00_4799);
						}
					}
					if (BgL_testz00_4797)
						{	/* SawMsil/code.scm 151 */
							return
								BGl_loadzd2parzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_11), CINT(BgL_indexz00_1664));
						}
					else
						{	/* SawMsil/code.scm 151 */
							return
								BGl_loadzd2varzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_11), CINT(BgL_indexz00_1664));
						}
				}
			}
		}
	}



/* store */
	obj_t BGl_storez00zzmsil_codez00(obj_t BgL_mez00_13, obj_t BgL_rz00_14)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 153 */
			{	/* SawMsil/code.scm 154 */
				obj_t BgL_indexz00_1666;

				{	/* SawMsil/code.scm 154 */
					BgL_lregz00_bglt BgL_obj4781z00_3173;

					BgL_obj4781z00_3173 = (BgL_lregz00_bglt) (BgL_rz00_14);
					{
						obj_t BgL_auxz00_4813;

						{	/* SawMsil/code.scm 154 */
							BgL_objectz00_bglt BgL_auxz00_4814;

							BgL_auxz00_4814 = (BgL_objectz00_bglt) (BgL_obj4781z00_3173);
							BgL_auxz00_4813 = BGL_OBJECT_WIDENING(BgL_auxz00_4814);
						}
						BgL_indexz00_1666 =
							(((BgL_lregz00_bglt) CREF(BgL_auxz00_4813))->BgL_indexz00);
					}
				}
				{	/* SawMsil/code.scm 155 */
					bool_t BgL_testz00_4818;

					{	/* SawMsil/code.scm 155 */
						BgL_lregz00_bglt BgL_obj4784z00_3174;

						BgL_obj4784z00_3174 = (BgL_lregz00_bglt) (BgL_rz00_14);
						{	/* SawMsil/code.scm 155 */
							obj_t BgL_auxz00_4820;

							{
								obj_t BgL_auxz00_4821;

								{	/* SawMsil/code.scm 155 */
									BgL_objectz00_bglt BgL_auxz00_4822;

									BgL_auxz00_4822 = (BgL_objectz00_bglt) (BgL_obj4784z00_3174);
									BgL_auxz00_4821 = BGL_OBJECT_WIDENING(BgL_auxz00_4822);
								}
								BgL_auxz00_4820 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_4821))->BgL_paramzf3zf3);
							}
							BgL_testz00_4818 = CBOOL(BgL_auxz00_4820);
						}
					}
					if (BgL_testz00_4818)
						{	/* SawMsil/code.scm 155 */
							return
								BGl_storezd2parzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_13), CINT(BgL_indexz00_1666));
						}
					else
						{	/* SawMsil/code.scm 155 */
							return
								BGl_storezd2varzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_13), CINT(BgL_indexz00_1666));
						}
				}
			}
		}
	}



/* get-expr */
	obj_t BGl_getzd2exprzd2zzmsil_codez00(obj_t BgL_insz00_17)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 160 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_17,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMsil/code.scm 165 */
					obj_t BgL_indexz00_1671;

					{	/* SawMsil/code.scm 165 */
						BgL_lregz00_bglt BgL_obj4781z00_3178;

						BgL_obj4781z00_3178 =
							(BgL_lregz00_bglt) ((BgL_rtl_regz00_bglt) (BgL_insz00_17));
						{
							obj_t BgL_auxz00_4837;

							{	/* SawMsil/code.scm 165 */
								BgL_objectz00_bglt BgL_auxz00_4838;

								BgL_auxz00_4838 = (BgL_objectz00_bglt) (BgL_obj4781z00_3178);
								BgL_auxz00_4837 = BGL_OBJECT_WIDENING(BgL_auxz00_4838);
							}
							BgL_indexz00_1671 =
								(((BgL_lregz00_bglt) CREF(BgL_auxz00_4837))->BgL_indexz00);
						}
					}
					{	/* SawMsil/code.scm 166 */
						obj_t BgL_arg5160z00_1672;

						obj_t BgL_arg5161z00_1673;

						{	/* SawMsil/code.scm 166 */
							bool_t BgL_testz00_4842;

							{	/* SawMsil/code.scm 166 */
								BgL_lregz00_bglt BgL_obj4784z00_3179;

								BgL_obj4784z00_3179 =
									(BgL_lregz00_bglt) ((BgL_rtl_regz00_bglt) (BgL_insz00_17));
								{	/* SawMsil/code.scm 166 */
									obj_t BgL_auxz00_4845;

									{
										obj_t BgL_auxz00_4846;

										{	/* SawMsil/code.scm 166 */
											BgL_objectz00_bglt BgL_auxz00_4847;

											BgL_auxz00_4847 =
												(BgL_objectz00_bglt) (BgL_obj4784z00_3179);
											BgL_auxz00_4846 = BGL_OBJECT_WIDENING(BgL_auxz00_4847);
										}
										BgL_auxz00_4845 =
											(((BgL_lregz00_bglt) CREF(BgL_auxz00_4846))->
											BgL_paramzf3zf3);
									}
									BgL_testz00_4842 = CBOOL(BgL_auxz00_4845);
								}
							}
							if (BgL_testz00_4842)
								{	/* SawMsil/code.scm 166 */
									BgL_arg5160z00_1672 = BGl_string5656z00zzmsil_codez00;
								}
							else
								{	/* SawMsil/code.scm 166 */
									BgL_arg5160z00_1672 = BGl_string5657z00zzmsil_codez00;
								}
						}
						{	/* SawMsil/code.scm 167 */

							BgL_arg5161z00_1673 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
								(long) CINT(BgL_indexz00_1671), ((long) 10));
						}
						return string_append(BgL_arg5160z00_1672, BgL_arg5161z00_1673);
					}
				}
			else
				{	/* SawMsil/code.scm 163 */
					obj_t BgL_arg5163z00_1678;

					obj_t BgL_arg5164z00_1679;

					{	/* SawMsil/code.scm 163 */
						obj_t BgL_arg5165z00_1680;

						{	/* SawMsil/code.scm 163 */
							BgL_rtl_funz00_bglt BgL_arg5166z00_1681;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_4855;

								BgL_auxz00_4855 = (BgL_rtl_insz00_bglt) (BgL_insz00_17);
								BgL_arg5166z00_1681 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4855))->BgL_funz00);
							}
							{	/* SawMsil/code.scm 163 */
								BgL_objectz00_bglt BgL_objectz00_3181;

								BgL_objectz00_3181 = (BgL_objectz00_bglt) (BgL_arg5166z00_1681);
								{	/* SawMsil/code.scm 163 */
									long BgL_arg2646z00_3182;

									{	/* SawMsil/code.scm 163 */
										long BgL_arg2647z00_3183;

										BgL_arg2647z00_3183 =
											BGL_OBJECT_CLASS_NUM(BgL_objectz00_3181);
										BgL_arg2646z00_3182 = (BgL_arg2647z00_3183 - OBJECT_TYPE);
									}
									BgL_arg5165z00_1680 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										(int) (BgL_arg2646z00_3182));
						}}}
						BgL_arg5163z00_1678 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg5165z00_1680);
					}
					{	/* SawMsil/code.scm 164 */
						obj_t BgL_l4922z00_1682;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4864;

							BgL_auxz00_4864 = (BgL_rtl_insz00_bglt) (BgL_insz00_17);
							BgL_l4922z00_1682 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4864))->BgL_argsz00);
						}
						if (NULLP(BgL_l4922z00_1682))
							{	/* SawMsil/code.scm 164 */
								BgL_arg5164z00_1679 = BNIL;
							}
						else
							{	/* SawMsil/code.scm 164 */
								obj_t BgL_head4924z00_1684;

								BgL_head4924z00_1684 =
									MAKE_PAIR(BGl_getzd2exprzd2zzmsil_codez00(CAR
										(BgL_l4922z00_1682)), BNIL);
								{	/* SawMsil/code.scm 164 */
									obj_t BgL_g4927z00_1685;

									BgL_g4927z00_1685 = CDR(BgL_l4922z00_1682);
									{
										obj_t BgL_l4922z00_1687;

										obj_t BgL_tail4925z00_1688;

										BgL_l4922z00_1687 = BgL_g4927z00_1685;
										BgL_tail4925z00_1688 = BgL_head4924z00_1684;
									BgL_zc3anonymousza35168ze3z83_1689:
										if (NULLP(BgL_l4922z00_1687))
											{	/* SawMsil/code.scm 164 */
												BgL_arg5164z00_1679 = BgL_head4924z00_1684;
											}
										else
											{	/* SawMsil/code.scm 164 */
												obj_t BgL_newtail4926z00_1691;

												BgL_newtail4926z00_1691 =
													MAKE_PAIR(BGl_getzd2exprzd2zzmsil_codez00(CAR
														(BgL_l4922z00_1687)), BNIL);
												SET_CDR(BgL_tail4925z00_1688, BgL_newtail4926z00_1691);
												{
													obj_t BgL_tail4925z00_4881;

													obj_t BgL_l4922z00_4879;

													BgL_l4922z00_4879 = CDR(BgL_l4922z00_1687);
													BgL_tail4925z00_4881 = BgL_newtail4926z00_1691;
													BgL_tail4925z00_1688 = BgL_tail4925z00_4881;
													BgL_l4922z00_1687 = BgL_l4922z00_4879;
													goto BgL_zc3anonymousza35168ze3z83_1689;
												}
											}
									}
								}
							}
					}
					return MAKE_PAIR(BgL_arg5163z00_1678, BgL_arg5164z00_1679);
				}
		}
	}



/* gen-args-gen-fun-default */
	obj_t
		BGl_genzd2argszd2genzd2funzd2defaultz00zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_18, obj_t BgL_mez00_19, obj_t BgL_argsz00_20)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 173 */
			{
				obj_t BgL_l4928z00_1701;

				BgL_l4928z00_1701 = BgL_argsz00_20;
			BgL_zc3anonymousza35177ze3z83_1702:
				if (PAIRP(BgL_l4928z00_1701))
					{	/* SawMsil/code.scm 175 */
						BGl_genzd2exprzd2zzmsil_codez00(
							(BgL_dotnetz00_bglt) (BgL_mez00_19), CAR(BgL_l4928z00_1701));
						{
							obj_t BgL_l4928z00_4888;

							BgL_l4928z00_4888 = CDR(BgL_l4928z00_1701);
							BgL_l4928z00_1701 = BgL_l4928z00_4888;
							goto BgL_zc3anonymousza35177ze3z83_1702;
						}
					}
				else
					{	/* SawMsil/code.scm 175 */
						((bool_t) 1);
					}
			}
			{	/* SawMsil/code.scm 176 */
				obj_t BgL_method4978z00_3208;

				{	/* SawMsil/code.scm 176 */
					BgL_objectz00_bglt BgL_objz00_3209;

					BgL_objz00_3209 = (BgL_objectz00_bglt) (BgL_funz00_18);
					{	/* SawMsil/code.scm 176 */
						long BgL_objzd2classzd2numz00_3210;

						BgL_objzd2classzd2numz00_3210 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3209);
						{	/* SawMsil/code.scm 176 */
							obj_t BgL_arg2643z00_3211;

							BgL_arg2643z00_3211 =
								PROCEDURE_REF
								(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 176 */
								obj_t BgL_arrayz00_3213;

								int BgL_offsetz00_3214;

								BgL_arrayz00_3213 = BgL_arg2643z00_3211;
								BgL_offsetz00_3214 = (int) (BgL_objzd2classzd2numz00_3210);
								{	/* SawMsil/code.scm 176 */
									long BgL_offsetz00_3215;

									BgL_offsetz00_3215 =
										((long) (BgL_offsetz00_3214) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 176 */
										long BgL_modz00_3216;

										{	/* SawMsil/code.scm 176 */
											int BgL_arg2645z00_3217;

											BgL_arg2645z00_3217 = (int) (((long) 16));
											{	/* SawMsil/code.scm 176 */
												long BgL_auxz00_4898;

												BgL_auxz00_4898 = (long) (BgL_arg2645z00_3217);
												BgL_modz00_3216 =
													(BgL_offsetz00_3215 / BgL_auxz00_4898);
										}}
										{	/* SawMsil/code.scm 176 */
											long BgL_restz00_3218;

											{	/* SawMsil/code.scm 176 */
												int BgL_arg2644z00_3219;

												BgL_arg2644z00_3219 = (int) (((long) 16));
												{	/* SawMsil/code.scm 176 */
													long BgL_auxz00_4902;

													BgL_auxz00_4902 = (long) (BgL_arg2644z00_3219);
													BgL_restz00_3218 =
														(BgL_offsetz00_3215 % BgL_auxz00_4902);
											}}
											{	/* SawMsil/code.scm 176 */

												BgL_method4978z00_3208 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3213,
														(int) (BgL_modz00_3216)), (int) (BgL_restz00_3218));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4978z00_3208) (BgL_method4978z00_3208,
					(obj_t) (BgL_funz00_18), BgL_mez00_19, BgL_argsz00_20, BEOA);
			}
		}
	}



/* patch-call */
	obj_t BGl_patchzd2callzd2zzmsil_codez00(obj_t BgL_insz00_30)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 203 */
		BGl_patchzd2callzd2zzmsil_codez00:
			if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_30,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMsil/code.scm 204 */
					return BFALSE;
				}
			else
				{	/* SawMsil/code.scm 205 */
					BgL_rtl_funz00_bglt BgL_funz00_1708;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4914;

						BgL_auxz00_4914 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
						BgL_funz00_1708 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4914))->BgL_funz00);
					}
					{	/* SawMsil/code.scm 207 */
						bool_t BgL_testz00_4917;

						{	/* SawMsil/code.scm 207 */
							obj_t BgL_obj4193z00_3235;

							BgL_obj4193z00_3235 = (obj_t) (BgL_funz00_1708);
							BgL_testz00_4917 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj4193z00_3235,
								BGl_rtl_movz00zzsaw_defsz00);
						}
						if (BgL_testz00_4917)
							{	/* SawMsil/code.scm 207 */
								obj_t BgL_arg5182z00_1710;

								{	/* SawMsil/code.scm 207 */
									obj_t BgL_pairz00_3237;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4920;

										BgL_auxz00_4920 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
										BgL_pairz00_3237 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4920))->
											BgL_argsz00);
									}
									BgL_arg5182z00_1710 = CAR(BgL_pairz00_3237);
								}
								{
									obj_t BgL_insz00_4924;

									BgL_insz00_4924 = BgL_arg5182z00_1710;
									BgL_insz00_30 = BgL_insz00_4924;
									goto BGl_patchzd2callzd2zzmsil_codez00;
								}
							}
						else
							{	/* SawMsil/code.scm 208 */
								bool_t BgL_testz00_4925;

								{	/* SawMsil/code.scm 208 */
									obj_t BgL_obj4517z00_3238;

									BgL_obj4517z00_3238 = (obj_t) (BgL_funz00_1708);
									BgL_testz00_4925 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj4517z00_3238,
										BGl_rtl_callz00zzsaw_defsz00);
								}
								if (BgL_testz00_4925)
									{	/* SawMsil/code.scm 209 */
										BgL_globalz00_bglt BgL_fz00_1713;

										{
											BgL_rtl_callz00_bglt BgL_auxz00_4928;

											BgL_auxz00_4928 =
												(BgL_rtl_callz00_bglt) (BgL_funz00_1708);
											BgL_fz00_1713 =
												(((BgL_rtl_callz00_bglt) CREF(BgL_auxz00_4928))->
												BgL_varz00);
										}
										{	/* SawMsil/code.scm 210 */
											BgL_tail_callz00_bglt BgL_arg5185z00_1714;

											{	/* SawMsil/code.scm 210 */
												BgL_tail_callz00_bglt BgL_res5588z00_3254;

												{	/* SawMsil/code.scm 210 */
													BgL_tail_callz00_bglt BgL_new4807z00_3242;

													{	/* SawMsil/code.scm 210 */
														BgL_tail_callz00_bglt BgL_res5586z00_3247;

														{	/* SawMsil/code.scm 210 */
															BgL_tail_callz00_bglt BgL_new4815z00_3243;

															BgL_new4815z00_3243 =
																((BgL_tail_callz00_bglt)
																BREF(GC_MALLOC(sizeof(struct
																			BgL_tail_callz00_bgl))));
															BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
																(BgL_new4815z00_3243),
																BGl_classzd2numzd2zz__objectz00
																(BGl_tail_callz00zzmsil_codez00));
															{	/* SawMsil/code.scm 210 */
																BgL_objectz00_bglt BgL_auxz00_4935;

																BgL_auxz00_4935 =
																	(BgL_objectz00_bglt) (BgL_new4815z00_3243);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_4935,
																	BFALSE);
															}
															BgL_res5586z00_3247 = BgL_new4815z00_3243;
														}
														BgL_new4807z00_3242 = BgL_res5586z00_3247;
													}
													{	/* SawMsil/code.scm 210 */
														BgL_tail_callz00_bglt BgL_res5587z00_3253;

														{	/* SawMsil/code.scm 210 */
															BgL_tail_callz00_bglt BgL_new4811z00_3248;

															BgL_new4811z00_3248 = BgL_new4807z00_3242;
															{	/* SawMsil/code.scm 210 */
																obj_t BgL_loc4809z00_3251;

																BgL_globalz00_bglt BgL_var4810z00_3252;

																BgL_loc4809z00_3251 = BFALSE;
																BgL_var4810z00_3252 = BgL_fz00_1713;
																((((BgL_tail_callz00_bglt)
																			CREF(BgL_new4811z00_3248))->BgL_locz00) =
																	((obj_t) BgL_loc4809z00_3251), BUNSPEC);
																((((BgL_tail_callz00_bglt)
																			CREF(BgL_new4811z00_3248))->BgL_varz00) =
																	((BgL_globalz00_bglt) BgL_var4810z00_3252),
																	BUNSPEC);
																BgL_res5587z00_3253 = BgL_new4811z00_3248;
														}} BgL_res5587z00_3253;
													}
													BgL_res5588z00_3254 = BgL_new4807z00_3242;
												}
												BgL_arg5185z00_1714 = BgL_res5588z00_3254;
											}
											{
												BgL_rtl_funz00_bglt BgL_auxz00_4942;

												BgL_rtl_insz00_bglt BgL_auxz00_4940;

												BgL_auxz00_4942 =
													(BgL_rtl_funz00_bglt) (BgL_arg5185z00_1714);
												BgL_auxz00_4940 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
												return
													((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4940))->
														BgL_funz00) =
													((BgL_rtl_funz00_bglt) BgL_auxz00_4942), BUNSPEC);
											}
										}
									}
								else
									{	/* SawMsil/code.scm 211 */
										bool_t BgL_testz00_4945;

										{	/* SawMsil/code.scm 211 */
											obj_t BgL_obj4537z00_3257;

											BgL_obj4537z00_3257 = (obj_t) (BgL_funz00_1708);
											BgL_testz00_4945 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj4537z00_3257,
												BGl_rtl_lightfuncallz00zzsaw_defsz00);
										}
										if (BgL_testz00_4945)
											{	/* SawMsil/code.scm 212 */
												BgL_tail_lightfuncallz00_bglt BgL_arg5187z00_1716;

												{	/* SawMsil/code.scm 212 */
													BgL_tail_lightfuncallz00_bglt BgL_res5591z00_3269;

													{	/* SawMsil/code.scm 212 */
														BgL_tail_lightfuncallz00_bglt BgL_new4831z00_3259;

														{	/* SawMsil/code.scm 212 */
															BgL_tail_lightfuncallz00_bglt BgL_res5589z00_3264;

															{	/* SawMsil/code.scm 212 */
																BgL_tail_lightfuncallz00_bglt
																	BgL_new4837z00_3260;
																BgL_new4837z00_3260 =
																	((BgL_tail_lightfuncallz00_bglt)
																	BREF(GC_MALLOC(sizeof(struct
																				BgL_tail_lightfuncallz00_bgl))));
																BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
																	(BgL_new4837z00_3260),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_tail_lightfuncallz00zzmsil_codez00));
																{	/* SawMsil/code.scm 212 */
																	BgL_objectz00_bglt BgL_auxz00_4952;

																	BgL_auxz00_4952 =
																		(BgL_objectz00_bglt) (BgL_new4837z00_3260);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_4952,
																		BFALSE);
																}
																BgL_res5589z00_3264 = BgL_new4837z00_3260;
															}
															BgL_new4831z00_3259 = BgL_res5589z00_3264;
														}
														{	/* SawMsil/code.scm 212 */
															BgL_tail_lightfuncallz00_bglt BgL_res5590z00_3268;

															{	/* SawMsil/code.scm 212 */
																BgL_tail_lightfuncallz00_bglt
																	BgL_new4834z00_3265;
																BgL_new4834z00_3265 = BgL_new4831z00_3259;
																{	/* SawMsil/code.scm 212 */
																	obj_t BgL_loc4833z00_3267;

																	BgL_loc4833z00_3267 = BFALSE;
																	((((BgL_tail_lightfuncallz00_bglt)
																				CREF(BgL_new4834z00_3265))->
																			BgL_locz00) =
																		((obj_t) BgL_loc4833z00_3267), BUNSPEC);
																	BgL_res5590z00_3268 = BgL_new4834z00_3265;
															}} BgL_res5590z00_3268;
														}
														BgL_res5591z00_3269 = BgL_new4831z00_3259;
													}
													BgL_arg5187z00_1716 = BgL_res5591z00_3269;
												}
												{
													BgL_rtl_funz00_bglt BgL_auxz00_4958;

													BgL_rtl_insz00_bglt BgL_auxz00_4956;

													BgL_auxz00_4958 =
														(BgL_rtl_funz00_bglt) (BgL_arg5187z00_1716);
													BgL_auxz00_4956 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_30);
													return
														((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4956))->
															BgL_funz00) =
														((BgL_rtl_funz00_bglt) BgL_auxz00_4958), BUNSPEC);
												}
											}
										else
											{	/* SawMsil/code.scm 213 */
												bool_t BgL_testz00_4961;

												{	/* SawMsil/code.scm 213 */
													obj_t BgL_obj4548z00_3272;

													BgL_obj4548z00_3272 = (obj_t) (BgL_funz00_1708);
													BgL_testz00_4961 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj4548z00_3272,
														BGl_rtl_funcallz00zzsaw_defsz00);
												}
												if (BgL_testz00_4961)
													{	/* SawMsil/code.scm 214 */
														BgL_tail_funcallz00_bglt BgL_arg5189z00_1718;

														{	/* SawMsil/code.scm 214 */
															BgL_tail_funcallz00_bglt BgL_res5594z00_3284;

															{	/* SawMsil/code.scm 214 */
																BgL_tail_funcallz00_bglt BgL_new4849z00_3274;

																{	/* SawMsil/code.scm 214 */
																	BgL_tail_funcallz00_bglt BgL_res5592z00_3279;

																	{	/* SawMsil/code.scm 214 */
																		BgL_tail_funcallz00_bglt
																			BgL_new4855z00_3275;
																		BgL_new4855z00_3275 =
																			((BgL_tail_funcallz00_bglt)
																			BREF(GC_MALLOC(sizeof(struct
																						BgL_tail_funcallz00_bgl))));
																		BGL_OBJECT_CLASS_NUM_SET(
																			(BgL_objectz00_bglt)
																			(BgL_new4855z00_3275),
																			BGl_classzd2numzd2zz__objectz00
																			(BGl_tail_funcallz00zzmsil_codez00));
																		{	/* SawMsil/code.scm 214 */
																			BgL_objectz00_bglt BgL_auxz00_4968;

																			BgL_auxz00_4968 =
																				(BgL_objectz00_bglt)
																				(BgL_new4855z00_3275);
																			BGL_OBJECT_WIDENING_SET(BgL_auxz00_4968,
																				BFALSE);
																		}
																		BgL_res5592z00_3279 = BgL_new4855z00_3275;
																	}
																	BgL_new4849z00_3274 = BgL_res5592z00_3279;
																}
																{	/* SawMsil/code.scm 214 */
																	BgL_tail_funcallz00_bglt BgL_res5593z00_3283;

																	{	/* SawMsil/code.scm 214 */
																		BgL_tail_funcallz00_bglt
																			BgL_new4852z00_3280;
																		BgL_new4852z00_3280 = BgL_new4849z00_3274;
																		{	/* SawMsil/code.scm 214 */
																			obj_t BgL_loc4851z00_3282;

																			BgL_loc4851z00_3282 = BFALSE;
																			((((BgL_tail_funcallz00_bglt)
																						CREF(BgL_new4852z00_3280))->
																					BgL_locz00) =
																				((obj_t) BgL_loc4851z00_3282), BUNSPEC);
																			BgL_res5593z00_3283 = BgL_new4852z00_3280;
																	}} BgL_res5593z00_3283;
																}
																BgL_res5594z00_3284 = BgL_new4849z00_3274;
															}
															BgL_arg5189z00_1718 = BgL_res5594z00_3284;
														}
														{
															BgL_rtl_funz00_bglt BgL_auxz00_4974;

															BgL_rtl_insz00_bglt BgL_auxz00_4972;

															BgL_auxz00_4974 =
																(BgL_rtl_funz00_bglt) (BgL_arg5189z00_1718);
															BgL_auxz00_4972 =
																(BgL_rtl_insz00_bglt) (BgL_insz00_30);
															return
																((((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_4972))->BgL_funz00) =
																((BgL_rtl_funz00_bglt) BgL_auxz00_4974),
																BUNSPEC);
														}
													}
												else
													{	/* SawMsil/code.scm 215 */
														bool_t BgL_testz00_4977;

														{	/* SawMsil/code.scm 215 */
															obj_t BgL_obj4527z00_3287;

															BgL_obj4527z00_3287 = (obj_t) (BgL_funz00_1708);
															BgL_testz00_4977 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj4527z00_3287,
																BGl_rtl_applyz00zzsaw_defsz00);
														}
														if (BgL_testz00_4977)
															{	/* SawMsil/code.scm 216 */
																BgL_tail_applyz00_bglt BgL_arg5191z00_1720;

																{	/* SawMsil/code.scm 216 */
																	BgL_tail_applyz00_bglt BgL_res5597z00_3299;

																	{	/* SawMsil/code.scm 216 */
																		BgL_tail_applyz00_bglt BgL_new4868z00_3289;

																		{	/* SawMsil/code.scm 216 */
																			BgL_tail_applyz00_bglt
																				BgL_res5595z00_3294;
																			{	/* SawMsil/code.scm 216 */
																				BgL_tail_applyz00_bglt
																					BgL_new4874z00_3290;
																				BgL_new4874z00_3290 =
																					((BgL_tail_applyz00_bglt)
																					BREF(GC_MALLOC(sizeof(struct
																								BgL_tail_applyz00_bgl))));
																				BGL_OBJECT_CLASS_NUM_SET(
																					(BgL_objectz00_bglt)
																					(BgL_new4874z00_3290),
																					BGl_classzd2numzd2zz__objectz00
																					(BGl_tail_applyz00zzmsil_codez00));
																				{	/* SawMsil/code.scm 216 */
																					BgL_objectz00_bglt BgL_auxz00_4984;

																					BgL_auxz00_4984 =
																						(BgL_objectz00_bglt)
																						(BgL_new4874z00_3290);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_auxz00_4984, BFALSE);
																				}
																				BgL_res5595z00_3294 =
																					BgL_new4874z00_3290;
																			}
																			BgL_new4868z00_3289 = BgL_res5595z00_3294;
																		}
																		{	/* SawMsil/code.scm 216 */
																			BgL_tail_applyz00_bglt
																				BgL_res5596z00_3298;
																			{	/* SawMsil/code.scm 216 */
																				BgL_tail_applyz00_bglt
																					BgL_new4871z00_3295;
																				BgL_new4871z00_3295 =
																					BgL_new4868z00_3289;
																				{	/* SawMsil/code.scm 216 */
																					obj_t BgL_loc4870z00_3297;

																					BgL_loc4870z00_3297 = BFALSE;
																					((((BgL_tail_applyz00_bglt)
																								CREF(BgL_new4871z00_3295))->
																							BgL_locz00) =
																						((obj_t) BgL_loc4870z00_3297),
																						BUNSPEC);
																					BgL_res5596z00_3298 =
																						BgL_new4871z00_3295;
																			}} BgL_res5596z00_3298;
																		}
																		BgL_res5597z00_3299 = BgL_new4868z00_3289;
																	}
																	BgL_arg5191z00_1720 = BgL_res5597z00_3299;
																}
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_4990;

																	BgL_rtl_insz00_bglt BgL_auxz00_4988;

																	BgL_auxz00_4990 =
																		(BgL_rtl_funz00_bglt) (BgL_arg5191z00_1720);
																	BgL_auxz00_4988 =
																		(BgL_rtl_insz00_bglt) (BgL_insz00_30);
																	return
																		((((BgL_rtl_insz00_bglt)
																				CREF(BgL_auxz00_4988))->BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_4990),
																		BUNSPEC);
																}
															}
														else
															{	/* SawMsil/code.scm 215 */
																return BUNSPEC;
															}
													}
											}
									}
							}
					}
				}
		}
	}



/* gen-funcall */
	obj_t BGl_genzd2funcallzd2zzmsil_codez00(obj_t BgL_mez00_58,
		obj_t BgL_argsz00_59, bool_t BgL_tailzf3zf3_60)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 262 */
			{	/* SawMsil/code.scm 263 */
				long BgL_nz00_1721;

				BgL_nz00_1721 = (bgl_list_length(BgL_argsz00_59) - ((long) 1));
				if ((BgL_nz00_1721 < ((long) 5)))
					{	/* SawMsil/code.scm 264 */
						{	/* SawMsil/code.scm 266 */
							bool_t BgL_testz00_4997;

							if (BgL_tailzf3zf3_60)
								{	/* SawMsil/code.scm 266 */
									BgL_testz00_4997 =
										CBOOL
										(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00);
								}
							else
								{	/* SawMsil/code.scm 266 */
									BgL_testz00_4997 = ((bool_t) 0);
								}
							if (BgL_testz00_4997)
								{	/* SawMsil/code.scm 266 */
									BGl_declarezd2tailzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_58));
								}
							else
								{	/* SawMsil/code.scm 266 */
									BFALSE;
								}
						}
						{	/* SawMsil/code.scm 267 */
							obj_t BgL_arg5194z00_1725;

							obj_t BgL_arg5195z00_1726;

							obj_t BgL_arg5196z00_1727;

							BgL_arg5194z00_1725 = CNST_TABLE_REF(((long) 1));
							{	/* SawMsil/code.scm 267 */
								obj_t BgL_arg5197z00_1728;

								{	/* SawMsil/code.scm 267 */

									BgL_arg5197z00_1728 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_nz00_1721, ((long) 10));
								}
								BgL_arg5195z00_1726 =
									string_append(BGl_string5658z00zzmsil_codez00,
									BgL_arg5197z00_1728);
							}
							{	/* SawMsil/code.scm 268 */
								obj_t BgL_list5198z00_1731;

								BgL_list5198z00_1731 =
									MAKE_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
								BgL_arg5196z00_1727 =
									BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
									(int) (BgL_nz00_1721), BgL_list5198z00_1731);
							}
							return
								BGl_callvirtz00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_58), BgL_arg5194z00_1725,
								BgL_arg5195z00_1726, BgL_arg5196z00_1727);
						}
					}
				else
					{	/* SawMsil/code.scm 264 */
						BGl_pushzd2constantzd2zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_58),
							BGl_string5659z00zzmsil_codez00);
						{	/* SawMsil/code.scm 270 */
							obj_t BgL_g4932z00_1732;

							BgL_g4932z00_1732 = CDR(BgL_argsz00_59);
							{
								obj_t BgL_l4930z00_1734;

								BgL_l4930z00_1734 = BgL_g4932z00_1732;
							BgL_zc3anonymousza35199ze3z83_1735:
								if (PAIRP(BgL_l4930z00_1734))
									{	/* SawMsil/code.scm 271 */
										BGl_newobjz00zzmsil_outz00(
											(BgL_dotnetz00_bglt) (BgL_mez00_58),
											BGl_string5660z00zzmsil_codez00,
											CNST_TABLE_REF(((long) 10)));
										{
											obj_t BgL_l4930z00_5019;

											BgL_l4930z00_5019 = CDR(BgL_l4930z00_1734);
											BgL_l4930z00_1734 = BgL_l4930z00_5019;
											goto BgL_zc3anonymousza35199ze3z83_1735;
										}
									}
								else
									{	/* SawMsil/code.scm 271 */
										((bool_t) 1);
									}
							}
						}
						{	/* SawMsil/code.scm 272 */
							bool_t BgL_testz00_5021;

							if (BgL_tailzf3zf3_60)
								{	/* SawMsil/code.scm 272 */
									BgL_testz00_5021 =
										CBOOL
										(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00);
								}
							else
								{	/* SawMsil/code.scm 272 */
									BgL_testz00_5021 = ((bool_t) 0);
								}
							if (BgL_testz00_5021)
								{	/* SawMsil/code.scm 272 */
									BGl_declarezd2tailzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_58));
								}
							else
								{	/* SawMsil/code.scm 272 */
									BFALSE;
								}
						}
						return
							BGl_callvirtz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_58),
							CNST_TABLE_REF(((long) 1)), BGl_string5661z00zzmsil_codez00,
							CNST_TABLE_REF(((long) 11)));
		}}}
	}



/* flat */
	obj_t BGl_flatz00zzmsil_codez00(obj_t BgL_alz00_118, obj_t BgL_ldefz00_119)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 456 */
			{
				obj_t BgL_alz00_1746;

				obj_t BgL_iz00_1747;

				obj_t BgL_rz00_1748;

				{	/* SawMsil/code.scm 463 */
					obj_t BgL_arg5205z00_1744;

					{	/* SawMsil/code.scm 463 */
						obj_t BgL_pairz00_3310;

						BgL_pairz00_3310 = BgL_alz00_118;
						BgL_arg5205z00_1744 = CAR(CAR(BgL_pairz00_3310));
					}
					BgL_alz00_1746 = BgL_alz00_118;
					BgL_iz00_1747 = BgL_arg5205z00_1744;
					BgL_rz00_1748 = BNIL;
				BgL_zc3anonymousza35207ze3z83_1749:
					if (NULLP(BgL_alz00_1746))
						{	/* SawMsil/code.scm 459 */
							return bgl_reverse_bang(BgL_rz00_1748);
						}
					else
						{	/* SawMsil/code.scm 460 */
							bool_t BgL_testz00_5035;

							{	/* SawMsil/code.scm 460 */
								long BgL_auxz00_5036;

								{	/* SawMsil/code.scm 460 */
									obj_t BgL_pairz00_3315;

									BgL_pairz00_3315 = BgL_alz00_1746;
									{	/* SawMsil/code.scm 460 */
										obj_t BgL_pairz00_3318;

										BgL_pairz00_3318 = CAR(BgL_pairz00_3315);
										BgL_auxz00_5036 = (long) CINT(CAR(BgL_pairz00_3318));
								}}
								BgL_testz00_5035 =
									((long) CINT(BgL_iz00_1747) == BgL_auxz00_5036);
							}
							if (BgL_testz00_5035)
								{	/* SawMsil/code.scm 460 */
									obj_t BgL_arg5210z00_1752;

									long BgL_arg5211z00_1753;

									obj_t BgL_arg5212z00_1754;

									BgL_arg5210z00_1752 = CDR(BgL_alz00_1746);
									BgL_arg5211z00_1753 =
										((long) CINT(BgL_iz00_1747) + ((long) 1));
									{	/* SawMsil/code.scm 460 */
										obj_t BgL_arg5213z00_1755;

										{	/* SawMsil/code.scm 460 */
											obj_t BgL_pairz00_3324;

											BgL_pairz00_3324 = BgL_alz00_1746;
											BgL_arg5213z00_1755 = CDR(CAR(BgL_pairz00_3324));
										}
										BgL_arg5212z00_1754 =
											MAKE_PAIR(BgL_arg5213z00_1755, BgL_rz00_1748);
									}
									{
										obj_t BgL_rz00_5051;

										obj_t BgL_iz00_5049;

										obj_t BgL_alz00_5048;

										BgL_alz00_5048 = BgL_arg5210z00_1752;
										BgL_iz00_5049 = BINT(BgL_arg5211z00_1753);
										BgL_rz00_5051 = BgL_arg5212z00_1754;
										BgL_rz00_1748 = BgL_rz00_5051;
										BgL_iz00_1747 = BgL_iz00_5049;
										BgL_alz00_1746 = BgL_alz00_5048;
										goto BgL_zc3anonymousza35207ze3z83_1749;
									}
								}
							else
								{	/* SawMsil/code.scm 461 */
									bool_t BgL_testz00_5052;

									{	/* SawMsil/code.scm 461 */
										long BgL_auxz00_5053;

										{	/* SawMsil/code.scm 461 */
											obj_t BgL_pairz00_3328;

											BgL_pairz00_3328 = BgL_alz00_1746;
											{	/* SawMsil/code.scm 461 */
												obj_t BgL_pairz00_3331;

												BgL_pairz00_3331 = CAR(BgL_pairz00_3328);
												BgL_auxz00_5053 = (long) CINT(CAR(BgL_pairz00_3331));
										}}
										BgL_testz00_5052 =
											((long) CINT(BgL_iz00_1747) > BgL_auxz00_5053);
									}
									if (BgL_testz00_5052)
										{
											obj_t BgL_alz00_5059;

											BgL_alz00_5059 = CDR(BgL_alz00_1746);
											BgL_alz00_1746 = BgL_alz00_5059;
											goto BgL_zc3anonymousza35207ze3z83_1749;
										}
									else
										{	/* SawMsil/code.scm 462 */
											long BgL_arg5216z00_1758;

											obj_t BgL_arg5217z00_1759;

											BgL_arg5216z00_1758 =
												((long) CINT(BgL_iz00_1747) + ((long) 1));
											BgL_arg5217z00_1759 =
												MAKE_PAIR(BgL_ldefz00_119, BgL_rz00_1748);
											{
												obj_t BgL_rz00_5066;

												obj_t BgL_iz00_5064;

												BgL_iz00_5064 = BINT(BgL_arg5216z00_1758);
												BgL_rz00_5066 = BgL_arg5217z00_1759;
												BgL_rz00_1748 = BgL_rz00_5066;
												BgL_iz00_1747 = BgL_iz00_5064;
												goto BgL_zc3anonymousza35207ze3z83_1749;
											}
										}
								}
						}
				}
			}
		}
	}



/* _lookup */
	obj_t BGl__lookupz00zzmsil_codez00(obj_t BgL_mez00_120, obj_t BgL_ldefz00_121,
		obj_t BgL_num2labz00_122, obj_t BgL_regz00_123)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 465 */
			BGl_storez00zzmsil_codez00(BgL_mez00_120, BgL_regz00_123);
			{
				obj_t BgL_l4952z00_1764;

				BgL_l4952z00_1764 = BgL_num2labz00_122;
			BgL_zc3anonymousza35220ze3z83_1765:
				if (PAIRP(BgL_l4952z00_1764))
					{	/* SawMsil/code.scm 467 */
						{	/* SawMsil/code.scm 470 */
							obj_t BgL_sz00_1767;

							BgL_sz00_1767 = CAR(BgL_l4952z00_1764);
							BGl__loadz00zzmsil_codez00(BgL_mez00_120, BgL_regz00_123);
							BGl_pushzd2intzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_120), CAR(BgL_sz00_1767));
							BGl_beqz00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_120),
								BGl_string5647z00zzmsil_codez00, CDR(BgL_sz00_1767));
						}
						{
							obj_t BgL_l4952z00_5078;

							BgL_l4952z00_5078 = CDR(BgL_l4952z00_1764);
							BgL_l4952z00_1764 = BgL_l4952z00_5078;
							goto BgL_zc3anonymousza35220ze3z83_1765;
						}
					}
				else
					{	/* SawMsil/code.scm 467 */
						((bool_t) 1);
					}
			}
			return
				BGl_brz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_120), BGl_string5647z00zzmsil_codez00,
				BgL_ldefz00_121);
		}
	}



/* _table */
	obj_t BGl__tablez00zzmsil_codez00(obj_t BgL_mez00_124, obj_t BgL_defz00_125,
		obj_t BgL_begz00_126, obj_t BgL_tablez00_127)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 474 */
			{	/* SawMsil/code.scm 475 */
				bool_t BgL_testz00_5082;

				if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_begz00_126,
						BINT(((long) 0))))
					{	/* SawMsil/code.scm 475 */
						BgL_testz00_5082 = ((long) CINT(BgL_begz00_126) < ((long) 5));
					}
				else
					{	/* SawMsil/code.scm 475 */
						BgL_testz00_5082 = ((bool_t) 0);
					}
				if (BgL_testz00_5082)
					{

					BgL_zc3anonymousza35227ze3z83_1775:
						if (((long) CINT(BgL_begz00_126) == ((long) 0)))
							{	/* SawMsil/code.scm 477 */
								((bool_t) 0);
							}
						else
							{	/* SawMsil/code.scm 477 */
								{	/* SawMsil/code.scm 478 */
									long BgL_za71za7_3346;

									BgL_za71za7_3346 = (long) CINT(BgL_begz00_126);
									BgL_begz00_126 = BINT((BgL_za71za7_3346 - ((long) 1)));
								}
								BgL_tablez00_127 = MAKE_PAIR(BgL_defz00_125, BgL_tablez00_127);
								goto BgL_zc3anonymousza35227ze3z83_1775;
							}
					}
				else
					{	/* SawMsil/code.scm 475 */
						((bool_t) 0);
					}
			}
			if (((long) CINT(BgL_begz00_126) == ((long) 0)))
				{	/* SawMsil/code.scm 481 */
					BFALSE;
				}
			else
				{	/* SawMsil/code.scm 481 */
					BGl_pushzd2intzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_124), BgL_begz00_126);
					BGl_subz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_124));
				}
			{	/* SawMsil/code.scm 484 */
				obj_t BgL_arg5231z00_1780;

				{	/* SawMsil/code.scm 484 */
					obj_t BgL_l4954z00_1781;

					BgL_l4954z00_1781 = BgL_tablez00_127;
					if (NULLP(BgL_l4954z00_1781))
						{	/* SawMsil/code.scm 484 */
							BgL_arg5231z00_1780 = BNIL;
						}
					else
						{	/* SawMsil/code.scm 484 */
							obj_t BgL_head4956z00_1783;

							BgL_head4956z00_1783 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l4954z00_1785;

								obj_t BgL_tail4957z00_1786;

								BgL_l4954z00_1785 = BgL_l4954z00_1781;
								BgL_tail4957z00_1786 = BgL_head4956z00_1783;
							BgL_zc3anonymousza35233ze3z83_1787:
								if (NULLP(BgL_l4954z00_1785))
									{	/* SawMsil/code.scm 484 */
										BgL_arg5231z00_1780 = CDR(BgL_head4956z00_1783);
									}
								else
									{	/* SawMsil/code.scm 484 */
										obj_t BgL_newtail4958z00_1789;

										{	/* SawMsil/code.scm 484 */
											obj_t BgL_arg5236z00_1791;

											{	/* SawMsil/code.scm 484 */
												obj_t BgL_nz00_1793;

												BgL_nz00_1793 = CAR(BgL_l4954z00_1785);
												{	/* SawMsil/code.scm 484 */
													obj_t BgL_arg5239z00_1795;

													{	/* SawMsil/code.scm 484 */

														BgL_arg5239z00_1795 =
															BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
															((long) CINT(BgL_nz00_1793), ((long) 10));
													}
													BgL_arg5236z00_1791 =
														string_append(BGl_string5647z00zzmsil_codez00,
														BgL_arg5239z00_1795);
											}}
											BgL_newtail4958z00_1789 =
												MAKE_PAIR(BgL_arg5236z00_1791, BNIL);
										}
										SET_CDR(BgL_tail4957z00_1786, BgL_newtail4958z00_1789);
										{
											obj_t BgL_tail4957z00_5116;

											obj_t BgL_l4954z00_5114;

											BgL_l4954z00_5114 = CDR(BgL_l4954z00_1785);
											BgL_tail4957z00_5116 = BgL_newtail4958z00_1789;
											BgL_tail4957z00_1786 = BgL_tail4957z00_5116;
											BgL_l4954z00_1785 = BgL_l4954z00_5114;
											goto BgL_zc3anonymousza35233ze3z83_1787;
										}
									}
							}
						}
				}
				BGl_switchz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_124), BgL_arg5231z00_1780);
			}
			return
				BGl_brz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_124), BGl_string5647z00zzmsil_codez00,
				BgL_defz00_125);
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			{	/* SawMsil/code.scm 25 */
				obj_t BgL_arg5240z00_1799;

				obj_t BgL_arg5241z00_1800;

				obj_t BgL_arg5244z00_1803;

				BgL_arg5240z00_1799 = CNST_TABLE_REF(((long) 12));
				BgL_arg5241z00_1800 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMsil/code.scm 25 */
					obj_t BgL_v4961z00_1804;

					BgL_v4961z00_1804 = create_vector((int) (((long) 0)));
					BgL_arg5244z00_1803 = BgL_v4961z00_1804;
				}
				BGl_lregz00zzmsil_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5240z00_1799,
					BgL_arg5241z00_1800, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2lregzd2envz52zzmsil_codez00,
					BGl_lregzd2nilzd2envz00zzmsil_codez00,
					BGl_lregzf3zd2envz21zzmsil_codez00, ((long) 8028987), BFALSE, BFALSE,
					BgL_arg5244z00_1803);
			}
			{	/* SawMsil/code.scm 27 */
				obj_t BgL_arg5245z00_1805;

				obj_t BgL_arg5246z00_1806;

				obj_t BgL_arg5249z00_1809;

				BgL_arg5245z00_1805 = CNST_TABLE_REF(((long) 13));
				BgL_arg5246z00_1806 = BGl_rtl_callz00zzsaw_defsz00;
				{	/* SawMsil/code.scm 27 */
					obj_t BgL_v4962z00_1810;

					BgL_v4962z00_1810 = create_vector((int) (((long) 0)));
					BgL_arg5249z00_1809 = BgL_v4962z00_1810;
				}
				BGl_tail_callz00zzmsil_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5245z00_1805,
					BgL_arg5246z00_1806, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tail_callzd2envz52zzmsil_codez00,
					BGl_tail_callzd2nilzd2envz00zzmsil_codez00,
					BGl_tail_callzf3zd2envz21zzmsil_codez00, ((long) 151541510), BFALSE,
					BFALSE, BgL_arg5249z00_1809);
			}
			{	/* SawMsil/code.scm 28 */
				obj_t BgL_arg5250z00_1811;

				obj_t BgL_arg5251z00_1812;

				obj_t BgL_arg5254z00_1815;

				BgL_arg5250z00_1811 = CNST_TABLE_REF(((long) 14));
				BgL_arg5251z00_1812 = BGl_rtl_lightfuncallz00zzsaw_defsz00;
				{	/* SawMsil/code.scm 28 */
					obj_t BgL_v4963z00_1816;

					BgL_v4963z00_1816 = create_vector((int) (((long) 0)));
					BgL_arg5254z00_1815 = BgL_v4963z00_1816;
				}
				BGl_tail_lightfuncallz00zzmsil_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5250z00_1811,
					BgL_arg5251z00_1812, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tail_lightfuncallzd2envz52zzmsil_codez00,
					BGl_tail_lightfuncallzd2nilzd2envz00zzmsil_codez00,
					BGl_tail_lightfuncallzf3zd2envz21zzmsil_codez00, ((long) 281701719),
					BFALSE, BFALSE, BgL_arg5254z00_1815);
			}
			{	/* SawMsil/code.scm 29 */
				obj_t BgL_arg5255z00_1817;

				obj_t BgL_arg5256z00_1818;

				obj_t BgL_arg5259z00_1821;

				BgL_arg5255z00_1817 = CNST_TABLE_REF(((long) 15));
				BgL_arg5256z00_1818 = BGl_rtl_funcallz00zzsaw_defsz00;
				{	/* SawMsil/code.scm 29 */
					obj_t BgL_v4964z00_1822;

					BgL_v4964z00_1822 = create_vector((int) (((long) 0)));
					BgL_arg5259z00_1821 = BgL_v4964z00_1822;
				}
				BGl_tail_funcallz00zzmsil_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5255z00_1817,
					BgL_arg5256z00_1818, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tail_funcallzd2envz52zzmsil_codez00,
					BGl_tail_funcallzd2nilzd2envz00zzmsil_codez00,
					BGl_tail_funcallzf3zd2envz21zzmsil_codez00, ((long) 418013903),
					BFALSE, BFALSE, BgL_arg5259z00_1821);
			}
			{	/* SawMsil/code.scm 30 */
				obj_t BgL_arg5260z00_1823;

				obj_t BgL_arg5261z00_1824;

				obj_t BgL_arg5264z00_1827;

				BgL_arg5260z00_1823 = CNST_TABLE_REF(((long) 16));
				BgL_arg5261z00_1824 = BGl_rtl_applyz00zzsaw_defsz00;
				{	/* SawMsil/code.scm 30 */
					obj_t BgL_v4965z00_1828;

					BgL_v4965z00_1828 = create_vector((int) (((long) 0)));
					BgL_arg5264z00_1827 = BgL_v4965z00_1828;
				}
				BGl_tail_applyz00zzmsil_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5260z00_1823,
					BgL_arg5261z00_1824, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tail_applyzd2envz52zzmsil_codez00,
					BGl_tail_applyzd2nilzd2envz00zzmsil_codez00,
					BGl_tail_applyzf3zd2envz21zzmsil_codez00, ((long) 290130016), BFALSE,
					BFALSE, BgL_arg5264z00_1827);
			}
			BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00 = BUNSPEC;
			BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00 = BUNSPEC;
			BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00 = BUNSPEC;
			BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00 = BUNSPEC;
			return (BGl_z52thezd2lregzd2nilz52zzmsil_codez00 = BUNSPEC, BUNSPEC);
		}
	}



/* _tail_apply? */
	obj_t BGl__tail_applyzf3zf3zzmsil_codez00(obj_t BgL_envz00_4084,
		obj_t BgL_obj4881z00_4085)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4881z00_4085,
					BGl_tail_applyz00zzmsil_codez00));
		}
	}



/* _%allocate-tail_apply */
	obj_t BGl__z52allocatezd2tail_applyz80zzmsil_codez00(obj_t BgL_envz00_4082)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			{	/* SawMsil/code.scm 30 */
				BgL_tail_applyz00_bglt BgL_auxz00_5143;

				{	/* SawMsil/code.scm 30 */
					BgL_tail_applyz00_bglt BgL_res5735z00_4357;

					{	/* SawMsil/code.scm 30 */
						BgL_tail_applyz00_bglt BgL_new4874z00_4355;

						BgL_new4874z00_4355 =
							((BgL_tail_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tail_applyz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4874z00_4355),
							BGl_classzd2numzd2zz__objectz00(BGl_tail_applyz00zzmsil_codez00));
						{	/* SawMsil/code.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_5148;

							BgL_auxz00_5148 = (BgL_objectz00_bglt) (BgL_new4874z00_4355);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5148, BFALSE);
						}
						BgL_res5735z00_4357 = BgL_new4874z00_4355;
					}
					BgL_auxz00_5143 = BgL_res5735z00_4357;
				}
				return (obj_t) (BgL_auxz00_5143);
			}
		}
	}



/* tail_apply-nil */
	BgL_tail_applyz00_bglt BGl_tail_applyzd2nilzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			if ((BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00 == BUNSPEC))
				{	/* SawMsil/code.scm 30 */
					{	/* SawMsil/code.scm 30 */
						BgL_tail_applyz00_bglt BgL_res5602z00_3407;

						{	/* SawMsil/code.scm 30 */
							BgL_tail_applyz00_bglt BgL_new4874z00_3403;

							BgL_new4874z00_3403 =
								((BgL_tail_applyz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tail_applyz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4874z00_3403),
								BGl_classzd2numzd2zz__objectz00
								(BGl_tail_applyz00zzmsil_codez00));
							{	/* SawMsil/code.scm 30 */
								BgL_objectz00_bglt BgL_auxz00_5158;

								BgL_auxz00_5158 = (BgL_objectz00_bglt) (BgL_new4874z00_3403);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5158, BFALSE);
							}
							BgL_res5602z00_3407 = BgL_new4874z00_3403;
						}
						BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00 =
							(obj_t) (BgL_res5602z00_3407);
					}
					{	/* SawMsil/code.scm 30 */
						BgL_tail_applyz00_bglt BgL_res5603z00_3411;

						{	/* SawMsil/code.scm 30 */
							BgL_tail_applyz00_bglt BgL_new4871z00_3408;

							BgL_new4871z00_3408 =
								(BgL_tail_applyz00_bglt)
								(BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00);
							{	/* SawMsil/code.scm 30 */
								obj_t BgL_loc4870z00_3410;

								BgL_loc4870z00_3410 = BUNSPEC;
								((((BgL_tail_applyz00_bglt) CREF(BgL_new4871z00_3408))->
										BgL_locz00) = ((obj_t) BgL_loc4870z00_3410), BUNSPEC);
								BgL_res5603z00_3411 = BgL_new4871z00_3408;
						}}
						(obj_t) (BgL_res5603z00_3411);
				}}
			else
				{	/* SawMsil/code.scm 30 */
					BFALSE;
				}
			return
				(BgL_tail_applyz00_bglt)
				(BGl_z52thezd2tail_applyzd2nilz52zzmsil_codez00);
		}
	}



/* _tail_apply-nil */
	obj_t BGl__tail_applyzd2nilzd2zzmsil_codez00(obj_t BgL_envz00_4083)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			return (obj_t) (BGl_tail_applyzd2nilzd2zzmsil_codez00());
		}
	}



/* _tail_funcall? */
	obj_t BGl__tail_funcallzf3zf3zzmsil_codez00(obj_t BgL_envz00_4080,
		obj_t BgL_obj4862z00_4081)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4862z00_4081,
					BGl_tail_funcallz00zzmsil_codez00));
		}
	}



/* _%allocate-tail_funcall */
	obj_t BGl__z52allocatezd2tail_funcallz80zzmsil_codez00(obj_t BgL_envz00_4078)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			{	/* SawMsil/code.scm 29 */
				BgL_tail_funcallz00_bglt BgL_auxz00_5170;

				{	/* SawMsil/code.scm 29 */
					BgL_tail_funcallz00_bglt BgL_res5736z00_4363;

					{	/* SawMsil/code.scm 29 */
						BgL_tail_funcallz00_bglt BgL_new4855z00_4361;

						BgL_new4855z00_4361 =
							((BgL_tail_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tail_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4855z00_4361),
							BGl_classzd2numzd2zz__objectz00
							(BGl_tail_funcallz00zzmsil_codez00));
						{	/* SawMsil/code.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_5175;

							BgL_auxz00_5175 = (BgL_objectz00_bglt) (BgL_new4855z00_4361);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5175, BFALSE);
						}
						BgL_res5736z00_4363 = BgL_new4855z00_4361;
					}
					BgL_auxz00_5170 = BgL_res5736z00_4363;
				}
				return (obj_t) (BgL_auxz00_5170);
			}
		}
	}



/* tail_funcall-nil */
	BgL_tail_funcallz00_bglt BGl_tail_funcallzd2nilzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			if ((BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00 == BUNSPEC))
				{	/* SawMsil/code.scm 29 */
					{	/* SawMsil/code.scm 29 */
						BgL_tail_funcallz00_bglt BgL_res5606z00_3431;

						{	/* SawMsil/code.scm 29 */
							BgL_tail_funcallz00_bglt BgL_new4855z00_3427;

							BgL_new4855z00_3427 =
								((BgL_tail_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tail_funcallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4855z00_3427),
								BGl_classzd2numzd2zz__objectz00
								(BGl_tail_funcallz00zzmsil_codez00));
							{	/* SawMsil/code.scm 29 */
								BgL_objectz00_bglt BgL_auxz00_5185;

								BgL_auxz00_5185 = (BgL_objectz00_bglt) (BgL_new4855z00_3427);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5185, BFALSE);
							}
							BgL_res5606z00_3431 = BgL_new4855z00_3427;
						}
						BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00 =
							(obj_t) (BgL_res5606z00_3431);
					}
					{	/* SawMsil/code.scm 29 */
						BgL_tail_funcallz00_bglt BgL_res5607z00_3435;

						{	/* SawMsil/code.scm 29 */
							BgL_tail_funcallz00_bglt BgL_new4852z00_3432;

							BgL_new4852z00_3432 =
								(BgL_tail_funcallz00_bglt)
								(BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00);
							{	/* SawMsil/code.scm 29 */
								obj_t BgL_loc4851z00_3434;

								BgL_loc4851z00_3434 = BUNSPEC;
								((((BgL_tail_funcallz00_bglt) CREF(BgL_new4852z00_3432))->
										BgL_locz00) = ((obj_t) BgL_loc4851z00_3434), BUNSPEC);
								BgL_res5607z00_3435 = BgL_new4852z00_3432;
						}}
						(obj_t) (BgL_res5607z00_3435);
				}}
			else
				{	/* SawMsil/code.scm 29 */
					BFALSE;
				}
			return
				(BgL_tail_funcallz00_bglt)
				(BGl_z52thezd2tail_funcallzd2nilz52zzmsil_codez00);
		}
	}



/* _tail_funcall-nil */
	obj_t BGl__tail_funcallzd2nilzd2zzmsil_codez00(obj_t BgL_envz00_4079)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			return (obj_t) (BGl_tail_funcallzd2nilzd2zzmsil_codez00());
		}
	}



/* _tail_lightfuncall? */
	obj_t BGl__tail_lightfuncallzf3zf3zzmsil_codez00(obj_t BgL_envz00_4076,
		obj_t BgL_obj4844z00_4077)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4844z00_4077,
					BGl_tail_lightfuncallz00zzmsil_codez00));
		}
	}



/* _%allocate-tail_lightfuncall */
	obj_t BGl__z52allocatezd2tail_lightfuncallz80zzmsil_codez00(obj_t
		BgL_envz00_4074)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			{	/* SawMsil/code.scm 28 */
				BgL_tail_lightfuncallz00_bglt BgL_auxz00_5197;

				{	/* SawMsil/code.scm 28 */
					BgL_tail_lightfuncallz00_bglt BgL_res5737z00_4369;

					{	/* SawMsil/code.scm 28 */
						BgL_tail_lightfuncallz00_bglt BgL_new4837z00_4367;

						BgL_new4837z00_4367 =
							((BgL_tail_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tail_lightfuncallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4837z00_4367),
							BGl_classzd2numzd2zz__objectz00
							(BGl_tail_lightfuncallz00zzmsil_codez00));
						{	/* SawMsil/code.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_5202;

							BgL_auxz00_5202 = (BgL_objectz00_bglt) (BgL_new4837z00_4367);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5202, BFALSE);
						}
						BgL_res5737z00_4369 = BgL_new4837z00_4367;
					}
					BgL_auxz00_5197 = BgL_res5737z00_4369;
				}
				return (obj_t) (BgL_auxz00_5197);
			}
		}
	}



/* tail_lightfuncall-nil */
	BgL_tail_lightfuncallz00_bglt BGl_tail_lightfuncallzd2nilzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			if ((BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00 == BUNSPEC))
				{	/* SawMsil/code.scm 28 */
					{	/* SawMsil/code.scm 28 */
						BgL_tail_lightfuncallz00_bglt BgL_res5610z00_3455;

						{	/* SawMsil/code.scm 28 */
							BgL_tail_lightfuncallz00_bglt BgL_new4837z00_3451;

							BgL_new4837z00_3451 =
								((BgL_tail_lightfuncallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tail_lightfuncallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4837z00_3451),
								BGl_classzd2numzd2zz__objectz00
								(BGl_tail_lightfuncallz00zzmsil_codez00));
							{	/* SawMsil/code.scm 28 */
								BgL_objectz00_bglt BgL_auxz00_5212;

								BgL_auxz00_5212 = (BgL_objectz00_bglt) (BgL_new4837z00_3451);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5212, BFALSE);
							}
							BgL_res5610z00_3455 = BgL_new4837z00_3451;
						}
						BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00 =
							(obj_t) (BgL_res5610z00_3455);
					}
					{	/* SawMsil/code.scm 28 */
						BgL_tail_lightfuncallz00_bglt BgL_res5611z00_3459;

						{	/* SawMsil/code.scm 28 */
							BgL_tail_lightfuncallz00_bglt BgL_new4834z00_3456;

							BgL_new4834z00_3456 =
								(BgL_tail_lightfuncallz00_bglt)
								(BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00);
							{	/* SawMsil/code.scm 28 */
								obj_t BgL_loc4833z00_3458;

								BgL_loc4833z00_3458 = BUNSPEC;
								((((BgL_tail_lightfuncallz00_bglt) CREF(BgL_new4834z00_3456))->
										BgL_locz00) = ((obj_t) BgL_loc4833z00_3458), BUNSPEC);
								BgL_res5611z00_3459 = BgL_new4834z00_3456;
						}}
						(obj_t) (BgL_res5611z00_3459);
				}}
			else
				{	/* SawMsil/code.scm 28 */
					BFALSE;
				}
			return
				(BgL_tail_lightfuncallz00_bglt)
				(BGl_z52thezd2tail_lightfuncallzd2nilz52zzmsil_codez00);
		}
	}



/* _tail_lightfuncall-nil */
	obj_t BGl__tail_lightfuncallzd2nilzd2zzmsil_codez00(obj_t BgL_envz00_4075)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			return (obj_t) (BGl_tail_lightfuncallzd2nilzd2zzmsil_codez00());
		}
	}



/* _tail_call? */
	obj_t BGl__tail_callzf3zf3zzmsil_codez00(obj_t BgL_envz00_4072,
		obj_t BgL_obj4826z00_4073)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4826z00_4073,
					BGl_tail_callz00zzmsil_codez00));
		}
	}



/* _%allocate-tail_call */
	obj_t BGl__z52allocatezd2tail_callz80zzmsil_codez00(obj_t BgL_envz00_4070)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			{	/* SawMsil/code.scm 27 */
				BgL_tail_callz00_bglt BgL_auxz00_5224;

				{	/* SawMsil/code.scm 27 */
					BgL_tail_callz00_bglt BgL_res5738z00_4375;

					{	/* SawMsil/code.scm 27 */
						BgL_tail_callz00_bglt BgL_new4815z00_4373;

						BgL_new4815z00_4373 =
							((BgL_tail_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tail_callz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4815z00_4373),
							BGl_classzd2numzd2zz__objectz00(BGl_tail_callz00zzmsil_codez00));
						{	/* SawMsil/code.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_5229;

							BgL_auxz00_5229 = (BgL_objectz00_bglt) (BgL_new4815z00_4373);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5229, BFALSE);
						}
						BgL_res5738z00_4375 = BgL_new4815z00_4373;
					}
					BgL_auxz00_5224 = BgL_res5738z00_4375;
				}
				return (obj_t) (BgL_auxz00_5224);
			}
		}
	}



/* tail_call-nil */
	BgL_tail_callz00_bglt BGl_tail_callzd2nilzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			if ((BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00 == BUNSPEC))
				{	/* SawMsil/code.scm 27 */
					{	/* SawMsil/code.scm 27 */
						BgL_tail_callz00_bglt BgL_res5614z00_3482;

						{	/* SawMsil/code.scm 27 */
							BgL_tail_callz00_bglt BgL_new4815z00_3478;

							BgL_new4815z00_3478 =
								((BgL_tail_callz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tail_callz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4815z00_3478),
								BGl_classzd2numzd2zz__objectz00
								(BGl_tail_callz00zzmsil_codez00));
							{	/* SawMsil/code.scm 27 */
								BgL_objectz00_bglt BgL_auxz00_5239;

								BgL_auxz00_5239 = (BgL_objectz00_bglt) (BgL_new4815z00_3478);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5239, BFALSE);
							}
							BgL_res5614z00_3482 = BgL_new4815z00_3478;
						}
						BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00 =
							(obj_t) (BgL_res5614z00_3482);
					}
					{	/* SawMsil/code.scm 27 */
						BgL_globalz00_bglt BgL_arg5273z00_1850;

						BgL_arg5273z00_1850 = BGl_globalzd2nilzd2zzast_varz00();
						{	/* SawMsil/code.scm 27 */
							BgL_tail_callz00_bglt BgL_res5615z00_3488;

							{	/* SawMsil/code.scm 27 */
								BgL_tail_callz00_bglt BgL_new4811z00_3483;

								BgL_new4811z00_3483 =
									(BgL_tail_callz00_bglt)
									(BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00);
								{	/* SawMsil/code.scm 27 */
									obj_t BgL_loc4809z00_3486;

									BgL_globalz00_bglt BgL_var4810z00_3487;

									BgL_loc4809z00_3486 = BUNSPEC;
									BgL_var4810z00_3487 = BgL_arg5273z00_1850;
									((((BgL_tail_callz00_bglt) CREF(BgL_new4811z00_3483))->
											BgL_locz00) = ((obj_t) BgL_loc4809z00_3486), BUNSPEC);
									((((BgL_tail_callz00_bglt) CREF(BgL_new4811z00_3483))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_var4810z00_3487), BUNSPEC);
									BgL_res5615z00_3488 = BgL_new4811z00_3483;
							}}
							(obj_t) (BgL_res5615z00_3488);
				}}}
			else
				{	/* SawMsil/code.scm 27 */
					BFALSE;
				}
			return
				(BgL_tail_callz00_bglt) (BGl_z52thezd2tail_callzd2nilz52zzmsil_codez00);
		}
	}



/* _tail_call-nil */
	obj_t BGl__tail_callzd2nilzd2zzmsil_codez00(obj_t BgL_envz00_4071)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			return (obj_t) (BGl_tail_callzd2nilzd2zzmsil_codez00());
		}
	}



/* _lreg? */
	obj_t BGl__lregzf3zf3zzmsil_codez00(obj_t BgL_envz00_4068,
		obj_t BgL_obj4779z00_4069)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4779z00_4069,
					BGl_lregz00zzmsil_codez00));
		}
	}



/* _%allocate-lreg */
	obj_t BGl__z52allocatezd2lregz80zzmsil_codez00(obj_t BgL_envz00_4066)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			{	/* SawMsil/code.scm 25 */
				BgL_rtl_regz00_bglt BgL_auxz00_5253;

				{	/* SawMsil/code.scm 25 */
					BgL_rtl_regz00_bglt BgL_res5739z00_4381;

					{	/* SawMsil/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_new4772z00_4379;

						BgL_new4772z00_4379 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4772z00_4379),
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzmsil_codez00));
						{	/* SawMsil/code.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_5258;

							BgL_auxz00_5258 = (BgL_objectz00_bglt) (BgL_new4772z00_4379);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5258, BFALSE);
						}
						BgL_res5739z00_4381 = BgL_new4772z00_4379;
					}
					BgL_auxz00_5253 = BgL_res5739z00_4381;
				}
				return (obj_t) (BgL_auxz00_5253);
			}
		}
	}



/* lreg-nil */
	BgL_lregz00_bglt BGl_lregzd2nilzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			if ((BGl_z52thezd2lregzd2nilz52zzmsil_codez00 == BUNSPEC))
				{	/* SawMsil/code.scm 25 */
					{	/* SawMsil/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_res5617z00_3506;

						{	/* SawMsil/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_new3979z00_3502;

							BgL_new3979z00_3502 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3979z00_3502),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMsil/code.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_5268;

								BgL_auxz00_5268 = (BgL_objectz00_bglt) (BgL_new3979z00_3502);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5268, BFALSE);
							}
							BgL_res5617z00_3506 = BgL_new3979z00_3502;
						}
						BGl_z52thezd2lregzd2nilz52zzmsil_codez00 =
							(obj_t) (BgL_res5617z00_3506);
					}
					{	/* SawMsil/code.scm 25 */
						BgL_typez00_bglt BgL_arg5278z00_1861;

						BgL_arg5278z00_1861 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMsil/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_res5618z00_3520;

							{	/* SawMsil/code.scm 25 */
								BgL_rtl_regz00_bglt BgL_new3971z00_3507;

								BgL_new3971z00_3507 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2lregzd2nilz52zzmsil_codez00);
								{	/* SawMsil/code.scm 25 */
									BgL_typez00_bglt BgL_type3965z00_3514;

									obj_t BgL_var3966z00_3515;

									obj_t BgL_onexprzf33967zf3_3516;

									obj_t BgL_name3968z00_3517;

									obj_t BgL_key3969z00_3518;

									obj_t BgL_hardware3970z00_3519;

									BgL_type3965z00_3514 = BgL_arg5278z00_1861;
									BgL_var3966z00_3515 = BUNSPEC;
									BgL_onexprzf33967zf3_3516 = BUNSPEC;
									BgL_name3968z00_3517 = BUNSPEC;
									BgL_key3969z00_3518 = BUNSPEC;
									BgL_hardware3970z00_3519 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3965z00_3514), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_varz00) = ((obj_t) BgL_var3966z00_3515), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33967zf3_3516), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_namez00) = ((obj_t) BgL_name3968z00_3517), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_keyz00) = ((obj_t) BgL_key3969z00_3518), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3971z00_3507))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3970z00_3519), BUNSPEC);
									BgL_res5618z00_3520 = BgL_new3971z00_3507;
							}} BgL_res5618z00_3520;
					}}
					{	/* SawMsil/code.scm 25 */
						long BgL_arg5279z00_1862;

						BgL_arg5279z00_1862 =
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzmsil_codez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2lregzd2nilz52zzmsil_codez00),
							BgL_arg5279z00_1862);
					}
					{	/* SawMsil/code.scm 25 */
						BgL_lregz00_bglt BgL_arg5280z00_1863;

						{	/* SawMsil/code.scm 25 */
							BgL_lregz00_bglt BgL_res5620z00_3532;

							{	/* SawMsil/code.scm 25 */
								BgL_lregz00_bglt BgL_new4754z00_3525;

								BgL_new4754z00_3525 =
									((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_lregz00_bgl))));
								{	/* SawMsil/code.scm 25 */
									BgL_lregz00_bglt BgL_res5619z00_3531;

									{	/* SawMsil/code.scm 25 */
										BgL_lregz00_bglt BgL_new4768z00_3526;

										BgL_new4768z00_3526 = BgL_new4754z00_3525;
										{	/* SawMsil/code.scm 25 */
											obj_t BgL_index4766z00_3529;

											obj_t BgL_paramzf34767zf3_3530;

											BgL_index4766z00_3529 = BUNSPEC;
											BgL_paramzf34767zf3_3530 = BUNSPEC;
											((((BgL_lregz00_bglt) CREF(BgL_new4768z00_3526))->
													BgL_indexz00) =
												((obj_t) BgL_index4766z00_3529), BUNSPEC);
											((((BgL_lregz00_bglt) CREF(BgL_new4768z00_3526))->
													BgL_paramzf3zf3) =
												((obj_t) BgL_paramzf34767zf3_3530), BUNSPEC);
											BgL_res5619z00_3531 = BgL_new4768z00_3526;
									}} BgL_res5619z00_3531;
								}
								BgL_res5620z00_3532 = BgL_new4754z00_3525;
							}
							BgL_arg5280z00_1863 = BgL_res5620z00_3532;
						}
						{	/* SawMsil/code.scm 25 */
							obj_t BgL_auxz00_5288;

							BgL_objectz00_bglt BgL_auxz00_5286;

							BgL_auxz00_5288 = (obj_t) (BgL_arg5280z00_1863);
							BgL_auxz00_5286 =
								(BgL_objectz00_bglt) (BGl_z52thezd2lregzd2nilz52zzmsil_codez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5286, BgL_auxz00_5288);
				}}}
			else
				{	/* SawMsil/code.scm 25 */
					BFALSE;
				}
			return (BgL_lregz00_bglt) (BGl_z52thezd2lregzd2nilz52zzmsil_codez00);
		}
	}



/* _lreg-nil */
	obj_t BGl__lregzd2nilzd2zzmsil_codez00(obj_t BgL_envz00_4067)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			return (obj_t) (BGl_lregzd2nilzd2zzmsil_codez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
				BGl_genzd2argszd2genzd2funzd2def4966zd2envzd2zzmsil_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5662z00zzmsil_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_genzd2funzd2withzd2argszd2de4977zd2envzd2zzmsil_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5663z00zzmsil_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00,
				BGl_genzd2funzd2default4989zd2envzd2zzmsil_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5664z00zzmsil_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2predicatezd2envz00zzmsil_codez00,
				BGl_genzd2argszd2genzd2predica5049zd2envz00zzmsil_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5665z00zzmsil_codez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2predicatezd2envz00zzmsil_codez00,
				BGl_genzd2predicatezd2defaul5051zd2envzd2zzmsil_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5666z00zzmsil_codez00);
		}
	}



/* gen-args-gen-fun */
	obj_t BGl_genzd2argszd2genzd2funzd2zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_21, obj_t BgL_mez00_22, obj_t BgL_argsz00_23)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 178 */
			{	/* SawMsil/code.scm 178 */
				obj_t BgL_method4967z00_3543;

				{	/* SawMsil/code.scm 178 */
					BgL_objectz00_bglt BgL_objz00_3544;

					BgL_objz00_3544 = (BgL_objectz00_bglt) (BgL_funz00_21);
					{	/* SawMsil/code.scm 178 */
						long BgL_objzd2classzd2numz00_3545;

						BgL_objzd2classzd2numz00_3545 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3544);
						{	/* SawMsil/code.scm 178 */
							obj_t BgL_arg2643z00_3546;

							BgL_arg2643z00_3546 =
								PROCEDURE_REF(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 178 */
								obj_t BgL_arrayz00_3548;

								int BgL_offsetz00_3549;

								BgL_arrayz00_3548 = BgL_arg2643z00_3546;
								BgL_offsetz00_3549 = (int) (BgL_objzd2classzd2numz00_3545);
								{	/* SawMsil/code.scm 178 */
									long BgL_offsetz00_3550;

									BgL_offsetz00_3550 =
										((long) (BgL_offsetz00_3549) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 178 */
										long BgL_modz00_3551;

										{	/* SawMsil/code.scm 178 */
											int BgL_arg2645z00_3552;

											BgL_arg2645z00_3552 = (int) (((long) 16));
											{	/* SawMsil/code.scm 178 */
												long BgL_auxz00_5307;

												BgL_auxz00_5307 = (long) (BgL_arg2645z00_3552);
												BgL_modz00_3551 =
													(BgL_offsetz00_3550 / BgL_auxz00_5307);
										}}
										{	/* SawMsil/code.scm 178 */
											long BgL_restz00_3553;

											{	/* SawMsil/code.scm 178 */
												int BgL_arg2644z00_3554;

												BgL_arg2644z00_3554 = (int) (((long) 16));
												{	/* SawMsil/code.scm 178 */
													long BgL_auxz00_5311;

													BgL_auxz00_5311 = (long) (BgL_arg2644z00_3554);
													BgL_restz00_3553 =
														(BgL_offsetz00_3550 % BgL_auxz00_5311);
											}}
											{	/* SawMsil/code.scm 178 */

												BgL_method4967z00_3543 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3548,
														(int) (BgL_modz00_3551)), (int) (BgL_restz00_3553));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4967z00_3543) (BgL_method4967z00_3543,
					(obj_t) (BgL_funz00_21), BgL_mez00_22, BgL_argsz00_23, BEOA);
			}
		}
	}



/* _gen-args-gen-fun */
	obj_t BGl__genzd2argszd2genzd2funzd2zzmsil_codez00(obj_t BgL_envz00_4055,
		obj_t BgL_funz00_4056, obj_t BgL_mez00_4057, obj_t BgL_argsz00_4058)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 178 */
			return
				BGl_genzd2argszd2genzd2funzd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4056), BgL_mez00_4057,
				BgL_argsz00_4058);
		}
	}



/* _gen-args-gen-fun-def4966 */
	obj_t BGl__genzd2argszd2genzd2funzd2def4966z00zzmsil_codez00(obj_t
		BgL_envz00_4086, obj_t BgL_funz00_4087, obj_t BgL_mez00_4088,
		obj_t BgL_argsz00_4089)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_genzd2argszd2genzd2funzd2defaultz00zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4087), BgL_mez00_4088,
				BgL_argsz00_4089);
		}
	}



/* gen-fun-with-args */
	obj_t BGl_genzd2funzd2withzd2argszd2zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_40, obj_t BgL_mez00_41, obj_t BgL_argsz00_42)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 246 */
			{	/* SawMsil/code.scm 246 */
				obj_t BgL_method4978z00_3568;

				{	/* SawMsil/code.scm 246 */
					BgL_objectz00_bglt BgL_objz00_3569;

					BgL_objz00_3569 = (BgL_objectz00_bglt) (BgL_funz00_40);
					{	/* SawMsil/code.scm 246 */
						long BgL_objzd2classzd2numz00_3570;

						BgL_objzd2classzd2numz00_3570 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3569);
						{	/* SawMsil/code.scm 246 */
							obj_t BgL_arg2643z00_3571;

							BgL_arg2643z00_3571 =
								PROCEDURE_REF
								(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 246 */
								obj_t BgL_arrayz00_3573;

								int BgL_offsetz00_3574;

								BgL_arrayz00_3573 = BgL_arg2643z00_3571;
								BgL_offsetz00_3574 = (int) (BgL_objzd2classzd2numz00_3570);
								{	/* SawMsil/code.scm 246 */
									long BgL_offsetz00_3575;

									BgL_offsetz00_3575 =
										((long) (BgL_offsetz00_3574) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 246 */
										long BgL_modz00_3576;

										{	/* SawMsil/code.scm 246 */
											int BgL_arg2645z00_3577;

											BgL_arg2645z00_3577 = (int) (((long) 16));
											{	/* SawMsil/code.scm 246 */
												long BgL_auxz00_5333;

												BgL_auxz00_5333 = (long) (BgL_arg2645z00_3577);
												BgL_modz00_3576 =
													(BgL_offsetz00_3575 / BgL_auxz00_5333);
										}}
										{	/* SawMsil/code.scm 246 */
											long BgL_restz00_3578;

											{	/* SawMsil/code.scm 246 */
												int BgL_arg2644z00_3579;

												BgL_arg2644z00_3579 = (int) (((long) 16));
												{	/* SawMsil/code.scm 246 */
													long BgL_auxz00_5337;

													BgL_auxz00_5337 = (long) (BgL_arg2644z00_3579);
													BgL_restz00_3578 =
														(BgL_offsetz00_3575 % BgL_auxz00_5337);
											}}
											{	/* SawMsil/code.scm 246 */

												BgL_method4978z00_3568 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3573,
														(int) (BgL_modz00_3576)), (int) (BgL_restz00_3578));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4978z00_3568) (BgL_method4978z00_3568,
					(obj_t) (BgL_funz00_40), BgL_mez00_41, BgL_argsz00_42, BEOA);
			}
		}
	}



/* _gen-fun-with-args */
	obj_t BGl__genzd2funzd2withzd2argszd2zzmsil_codez00(obj_t BgL_envz00_4062,
		obj_t BgL_funz00_4063, obj_t BgL_mez00_4064, obj_t BgL_argsz00_4065)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 246 */
			return
				BGl_genzd2funzd2withzd2argszd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4063), BgL_mez00_4064,
				BgL_argsz00_4065);
		}
	}



/* gen-fun-with-args-de4977 */
	obj_t
		BGl_genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_43, obj_t BgL_mez00_44, obj_t BgL_argsz00_45)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			{	/* SawMsil/code.scm 248 */
				obj_t BgL_method4990z00_3595;

				{	/* SawMsil/code.scm 248 */
					BgL_objectz00_bglt BgL_objz00_3596;

					BgL_objz00_3596 = (BgL_objectz00_bglt) (BgL_funz00_43);
					{	/* SawMsil/code.scm 248 */
						long BgL_objzd2classzd2numz00_3597;

						BgL_objzd2classzd2numz00_3597 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3596);
						{	/* SawMsil/code.scm 248 */
							obj_t BgL_arg2643z00_3598;

							BgL_arg2643z00_3598 =
								PROCEDURE_REF(BGl_genzd2funzd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 248 */
								obj_t BgL_arrayz00_3600;

								int BgL_offsetz00_3601;

								BgL_arrayz00_3600 = BgL_arg2643z00_3598;
								BgL_offsetz00_3601 = (int) (BgL_objzd2classzd2numz00_3597);
								{	/* SawMsil/code.scm 248 */
									long BgL_offsetz00_3602;

									BgL_offsetz00_3602 =
										((long) (BgL_offsetz00_3601) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 248 */
										long BgL_modz00_3603;

										{	/* SawMsil/code.scm 248 */
											int BgL_arg2645z00_3604;

											BgL_arg2645z00_3604 = (int) (((long) 16));
											{	/* SawMsil/code.scm 248 */
												long BgL_auxz00_5357;

												BgL_auxz00_5357 = (long) (BgL_arg2645z00_3604);
												BgL_modz00_3603 =
													(BgL_offsetz00_3602 / BgL_auxz00_5357);
										}}
										{	/* SawMsil/code.scm 248 */
											long BgL_restz00_3605;

											{	/* SawMsil/code.scm 248 */
												int BgL_arg2644z00_3606;

												BgL_arg2644z00_3606 = (int) (((long) 16));
												{	/* SawMsil/code.scm 248 */
													long BgL_auxz00_5361;

													BgL_auxz00_5361 = (long) (BgL_arg2644z00_3606);
													BgL_restz00_3605 =
														(BgL_offsetz00_3602 % BgL_auxz00_5361);
											}}
											{	/* SawMsil/code.scm 248 */

												BgL_method4990z00_3595 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3600,
														(int) (BgL_modz00_3603)), (int) (BgL_restz00_3605));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4990z00_3595) (BgL_method4990z00_3595,
					(obj_t) (BgL_funz00_43), BgL_mez00_44, BEOA);
			}
		}
	}



/* _gen-fun-with-args-de4977 */
	obj_t BGl__genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00(obj_t
		BgL_envz00_4090, obj_t BgL_funz00_4091, obj_t BgL_mez00_4092,
		obj_t BgL_argsz00_4093)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_genzd2funzd2withzd2argszd2de4977z00zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4091), BgL_mez00_4092,
				BgL_argsz00_4093);
		}
	}



/* gen-fun */
	obj_t BGl_genzd2funzd2zzmsil_codez00(BgL_rtl_funz00_bglt BgL_funz00_64,
		obj_t BgL_mez00_65)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 282 */
			{	/* SawMsil/code.scm 282 */
				obj_t BgL_method4990z00_3620;

				{	/* SawMsil/code.scm 282 */
					BgL_objectz00_bglt BgL_objz00_3621;

					BgL_objz00_3621 = (BgL_objectz00_bglt) (BgL_funz00_64);
					{	/* SawMsil/code.scm 282 */
						long BgL_objzd2classzd2numz00_3622;

						BgL_objzd2classzd2numz00_3622 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3621);
						{	/* SawMsil/code.scm 282 */
							obj_t BgL_arg2643z00_3623;

							BgL_arg2643z00_3623 =
								PROCEDURE_REF(BGl_genzd2funzd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 282 */
								obj_t BgL_arrayz00_3625;

								int BgL_offsetz00_3626;

								BgL_arrayz00_3625 = BgL_arg2643z00_3623;
								BgL_offsetz00_3626 = (int) (BgL_objzd2classzd2numz00_3622);
								{	/* SawMsil/code.scm 282 */
									long BgL_offsetz00_3627;

									BgL_offsetz00_3627 =
										((long) (BgL_offsetz00_3626) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 282 */
										long BgL_modz00_3628;

										{	/* SawMsil/code.scm 282 */
											int BgL_arg2645z00_3629;

											BgL_arg2645z00_3629 = (int) (((long) 16));
											{	/* SawMsil/code.scm 282 */
												long BgL_auxz00_5381;

												BgL_auxz00_5381 = (long) (BgL_arg2645z00_3629);
												BgL_modz00_3628 =
													(BgL_offsetz00_3627 / BgL_auxz00_5381);
										}}
										{	/* SawMsil/code.scm 282 */
											long BgL_restz00_3630;

											{	/* SawMsil/code.scm 282 */
												int BgL_arg2644z00_3631;

												BgL_arg2644z00_3631 = (int) (((long) 16));
												{	/* SawMsil/code.scm 282 */
													long BgL_auxz00_5385;

													BgL_auxz00_5385 = (long) (BgL_arg2644z00_3631);
													BgL_restz00_3630 =
														(BgL_offsetz00_3627 % BgL_auxz00_5385);
											}}
											{	/* SawMsil/code.scm 282 */

												BgL_method4990z00_3620 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3625,
														(int) (BgL_modz00_3628)), (int) (BgL_restz00_3630));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4990z00_3620) (BgL_method4990z00_3620,
					(obj_t) (BgL_funz00_64), BgL_mez00_65, BEOA);
			}
		}
	}



/* _gen-fun */
	obj_t BGl__genzd2funzd2zzmsil_codez00(obj_t BgL_envz00_4094,
		obj_t BgL_funz00_4095, obj_t BgL_mez00_4096)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 282 */
			return
				BGl_genzd2funzd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4095), BgL_mez00_4096);
		}
	}



/* gen-fun-default4989 */
	obj_t BGl_genzd2funzd2default4989z00zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_66, obj_t BgL_mez00_67)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 17)),
				BGl_string5667z00zzmsil_codez00, (obj_t) (BgL_funz00_66));
		}
	}



/* _gen-fun-default4989 */
	obj_t BGl__genzd2funzd2default4989z00zzmsil_codez00(obj_t BgL_envz00_4097,
		obj_t BgL_funz00_4098, obj_t BgL_mez00_4099)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_genzd2funzd2default4989z00zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4098), BgL_mez00_4099);
		}
	}



/* gen-args-gen-predicate */
	obj_t BGl_genzd2argszd2genzd2predicatezd2zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_136, obj_t BgL_mez00_137, obj_t BgL_argsz00_138,
		obj_t BgL_onzf3zf3_139, obj_t BgL_labz00_140)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 516 */
			{	/* SawMsil/code.scm 516 */
				obj_t BgL_method5050z00_3645;

				{	/* SawMsil/code.scm 516 */
					BgL_objectz00_bglt BgL_objz00_3646;

					BgL_objz00_3646 = (BgL_objectz00_bglt) (BgL_funz00_136);
					{	/* SawMsil/code.scm 516 */
						long BgL_objzd2classzd2numz00_3647;

						BgL_objzd2classzd2numz00_3647 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3646);
						{	/* SawMsil/code.scm 516 */
							obj_t BgL_arg2643z00_3648;

							BgL_arg2643z00_3648 =
								PROCEDURE_REF
								(BGl_genzd2argszd2genzd2predicatezd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 516 */
								obj_t BgL_arrayz00_3650;

								int BgL_offsetz00_3651;

								BgL_arrayz00_3650 = BgL_arg2643z00_3648;
								BgL_offsetz00_3651 = (int) (BgL_objzd2classzd2numz00_3647);
								{	/* SawMsil/code.scm 516 */
									long BgL_offsetz00_3652;

									BgL_offsetz00_3652 =
										((long) (BgL_offsetz00_3651) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 516 */
										long BgL_modz00_3653;

										{	/* SawMsil/code.scm 516 */
											int BgL_arg2645z00_3654;

											BgL_arg2645z00_3654 = (int) (((long) 16));
											{	/* SawMsil/code.scm 516 */
												long BgL_auxz00_5410;

												BgL_auxz00_5410 = (long) (BgL_arg2645z00_3654);
												BgL_modz00_3653 =
													(BgL_offsetz00_3652 / BgL_auxz00_5410);
										}}
										{	/* SawMsil/code.scm 516 */
											long BgL_restz00_3655;

											{	/* SawMsil/code.scm 516 */
												int BgL_arg2644z00_3656;

												BgL_arg2644z00_3656 = (int) (((long) 16));
												{	/* SawMsil/code.scm 516 */
													long BgL_auxz00_5414;

													BgL_auxz00_5414 = (long) (BgL_arg2644z00_3656);
													BgL_restz00_3655 =
														(BgL_offsetz00_3652 % BgL_auxz00_5414);
											}}
											{	/* SawMsil/code.scm 516 */

												BgL_method5050z00_3645 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3650,
														(int) (BgL_modz00_3653)), (int) (BgL_restz00_3655));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5050z00_3645) (BgL_method5050z00_3645,
					(obj_t) (BgL_funz00_136), BgL_mez00_137, BgL_argsz00_138,
					BgL_onzf3zf3_139, BgL_labz00_140, BEOA);
			}
		}
	}



/* _gen-args-gen-predicate */
	obj_t BGl__genzd2argszd2genzd2predicatezd2zzmsil_codez00(obj_t
		BgL_envz00_4100, obj_t BgL_funz00_4101, obj_t BgL_mez00_4102,
		obj_t BgL_argsz00_4103, obj_t BgL_onzf3zf3_4104, obj_t BgL_labz00_4105)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 516 */
			return
				BGl_genzd2argszd2genzd2predicatezd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4101), BgL_mez00_4102,
				BgL_argsz00_4103, BgL_onzf3zf3_4104, BgL_labz00_4105);
		}
	}



/* gen-args-gen-predica5049 */
	obj_t BGl_genzd2argszd2genzd2predica5049zd2zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_141, obj_t BgL_mez00_142, obj_t BgL_argsz00_143,
		obj_t BgL_onzf3zf3_144, obj_t BgL_labz00_145)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			{
				obj_t BgL_l4959z00_2496;

				BgL_l4959z00_2496 = BgL_argsz00_143;
			BgL_zc3anonymousza35378ze3z83_2497:
				if (PAIRP(BgL_l4959z00_2496))
					{	/* SawMsil/code.scm 518 */
						BGl_genzd2exprzd2zzmsil_codez00(
							(BgL_dotnetz00_bglt) (BgL_mez00_142), CAR(BgL_l4959z00_2496));
						{
							obj_t BgL_l4959z00_5431;

							BgL_l4959z00_5431 = CDR(BgL_l4959z00_2496);
							BgL_l4959z00_2496 = BgL_l4959z00_5431;
							goto BgL_zc3anonymousza35378ze3z83_2497;
						}
					}
				else
					{	/* SawMsil/code.scm 518 */
						((bool_t) 1);
					}
			}
			{	/* SawMsil/code.scm 519 */
				obj_t BgL_method5052z00_3677;

				{	/* SawMsil/code.scm 519 */
					BgL_objectz00_bglt BgL_objz00_3678;

					BgL_objz00_3678 = (BgL_objectz00_bglt) (BgL_funz00_141);
					{	/* SawMsil/code.scm 519 */
						long BgL_objzd2classzd2numz00_3679;

						BgL_objzd2classzd2numz00_3679 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3678);
						{	/* SawMsil/code.scm 519 */
							obj_t BgL_arg2643z00_3680;

							BgL_arg2643z00_3680 =
								PROCEDURE_REF(BGl_genzd2predicatezd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 519 */
								obj_t BgL_arrayz00_3682;

								int BgL_offsetz00_3683;

								BgL_arrayz00_3682 = BgL_arg2643z00_3680;
								BgL_offsetz00_3683 = (int) (BgL_objzd2classzd2numz00_3679);
								{	/* SawMsil/code.scm 519 */
									long BgL_offsetz00_3684;

									BgL_offsetz00_3684 =
										((long) (BgL_offsetz00_3683) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 519 */
										long BgL_modz00_3685;

										{	/* SawMsil/code.scm 519 */
											int BgL_arg2645z00_3686;

											BgL_arg2645z00_3686 = (int) (((long) 16));
											{	/* SawMsil/code.scm 519 */
												long BgL_auxz00_5441;

												BgL_auxz00_5441 = (long) (BgL_arg2645z00_3686);
												BgL_modz00_3685 =
													(BgL_offsetz00_3684 / BgL_auxz00_5441);
										}}
										{	/* SawMsil/code.scm 519 */
											long BgL_restz00_3687;

											{	/* SawMsil/code.scm 519 */
												int BgL_arg2644z00_3688;

												BgL_arg2644z00_3688 = (int) (((long) 16));
												{	/* SawMsil/code.scm 519 */
													long BgL_auxz00_5445;

													BgL_auxz00_5445 = (long) (BgL_arg2644z00_3688);
													BgL_restz00_3687 =
														(BgL_offsetz00_3684 % BgL_auxz00_5445);
											}}
											{	/* SawMsil/code.scm 519 */

												BgL_method5052z00_3677 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3682,
														(int) (BgL_modz00_3685)), (int) (BgL_restz00_3687));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5052z00_3677) (BgL_method5052z00_3677,
					(obj_t) (BgL_funz00_141), BgL_mez00_142, BgL_onzf3zf3_144,
					BgL_labz00_145, BEOA);
			}
		}
	}



/* _gen-args-gen-predica5049 */
	obj_t BGl__genzd2argszd2genzd2predica5049zd2zzmsil_codez00(obj_t
		BgL_envz00_4106, obj_t BgL_funz00_4107, obj_t BgL_mez00_4108,
		obj_t BgL_argsz00_4109, obj_t BgL_onzf3zf3_4110, obj_t BgL_labz00_4111)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_genzd2argszd2genzd2predica5049zd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4107), BgL_mez00_4108,
				BgL_argsz00_4109, BgL_onzf3zf3_4110, BgL_labz00_4111);
		}
	}



/* gen-predicate */
	obj_t BGl_genzd2predicatezd2zzmsil_codez00(BgL_rtl_funz00_bglt BgL_funz00_146,
		obj_t BgL_mez00_147, obj_t BgL_onzf3zf3_148, obj_t BgL_labz00_149)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 524 */
			{	/* SawMsil/code.scm 524 */
				obj_t BgL_method5052z00_3702;

				{	/* SawMsil/code.scm 524 */
					BgL_objectz00_bglt BgL_objz00_3703;

					BgL_objz00_3703 = (BgL_objectz00_bglt) (BgL_funz00_146);
					{	/* SawMsil/code.scm 524 */
						long BgL_objzd2classzd2numz00_3704;

						BgL_objzd2classzd2numz00_3704 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3703);
						{	/* SawMsil/code.scm 524 */
							obj_t BgL_arg2643z00_3705;

							BgL_arg2643z00_3705 =
								PROCEDURE_REF(BGl_genzd2predicatezd2envz00zzmsil_codez00,
								(int) (((long) 1)));
							{	/* SawMsil/code.scm 524 */
								obj_t BgL_arrayz00_3707;

								int BgL_offsetz00_3708;

								BgL_arrayz00_3707 = BgL_arg2643z00_3705;
								BgL_offsetz00_3708 = (int) (BgL_objzd2classzd2numz00_3704);
								{	/* SawMsil/code.scm 524 */
									long BgL_offsetz00_3709;

									BgL_offsetz00_3709 =
										((long) (BgL_offsetz00_3708) - OBJECT_TYPE);
									{	/* SawMsil/code.scm 524 */
										long BgL_modz00_3710;

										{	/* SawMsil/code.scm 524 */
											int BgL_arg2645z00_3711;

											BgL_arg2645z00_3711 = (int) (((long) 16));
											{	/* SawMsil/code.scm 524 */
												long BgL_auxz00_5465;

												BgL_auxz00_5465 = (long) (BgL_arg2645z00_3711);
												BgL_modz00_3710 =
													(BgL_offsetz00_3709 / BgL_auxz00_5465);
										}}
										{	/* SawMsil/code.scm 524 */
											long BgL_restz00_3712;

											{	/* SawMsil/code.scm 524 */
												int BgL_arg2644z00_3713;

												BgL_arg2644z00_3713 = (int) (((long) 16));
												{	/* SawMsil/code.scm 524 */
													long BgL_auxz00_5469;

													BgL_auxz00_5469 = (long) (BgL_arg2644z00_3713);
													BgL_restz00_3712 =
														(BgL_offsetz00_3709 % BgL_auxz00_5469);
											}}
											{	/* SawMsil/code.scm 524 */

												BgL_method5052z00_3702 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3707,
														(int) (BgL_modz00_3710)), (int) (BgL_restz00_3712));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5052z00_3702) (BgL_method5052z00_3702,
					(obj_t) (BgL_funz00_146), BgL_mez00_147, BgL_onzf3zf3_148,
					BgL_labz00_149, BEOA);
			}
		}
	}



/* _gen-predicate */
	obj_t BGl__genzd2predicatezd2zzmsil_codez00(obj_t BgL_envz00_4112,
		obj_t BgL_funz00_4113, obj_t BgL_mez00_4114, obj_t BgL_onzf3zf3_4115,
		obj_t BgL_labz00_4116)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 524 */
			return
				BGl_genzd2predicatezd2zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4113), BgL_mez00_4114,
				BgL_onzf3zf3_4115, BgL_labz00_4116);
		}
	}



/* gen-predicate-defaul5051 */
	obj_t BGl_genzd2predicatezd2defaul5051z00zzmsil_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_150, obj_t BgL_mez00_151, obj_t BgL_onzf3zf3_152,
		obj_t BgL_labz00_153)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_genzd2funzd2zzmsil_codez00(BgL_funz00_150, BgL_mez00_151);
			if (CBOOL(BgL_onzf3zf3_152))
				{	/* SawMsil/code.scm 525 */
					return
						BGl_brtruez00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_151),
						BGl_string5647z00zzmsil_codez00, BgL_labz00_153);
				}
			else
				{	/* SawMsil/code.scm 525 */
					return
						BGl_brfalsez00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_151),
						BGl_string5647z00zzmsil_codez00, BgL_labz00_153);
				}
		}
	}



/* _gen-predicate-defaul5051 */
	obj_t BGl__genzd2predicatezd2defaul5051z00zzmsil_codez00(obj_t
		BgL_envz00_4117, obj_t BgL_funz00_4118, obj_t BgL_mez00_4119,
		obj_t BgL_onzf3zf3_4120, obj_t BgL_labz00_4121)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			return
				BGl_genzd2predicatezd2defaul5051z00zzmsil_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4118), BgL_mez00_4119,
				BgL_onzf3zf3_4120, BgL_labz00_4121);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc5668z00zzmsil_codez00,
				BGl_string5662z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5669z00zzmsil_codez00,
				BGl_string5662z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_ifeqz00zzsaw_defsz00, BGl_proc5670z00zzmsil_codez00,
				BGl_string5662z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_ifnez00zzsaw_defsz00, BGl_proc5671z00zzmsil_codez00,
				BGl_string5662z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc5672z00zzmsil_codez00,
				BGl_string5663z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_tail_lightfuncallz00zzmsil_codez00, BGl_proc5673z00zzmsil_codez00,
				BGl_string5663z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc5674z00zzmsil_codez00,
				BGl_string5663z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_tail_funcallz00zzmsil_codez00, BGl_proc5675z00zzmsil_codez00,
				BGl_string5663z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzmsil_codez00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc5676z00zzmsil_codez00,
				BGl_string5663z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_nopz00zzsaw_defsz00,
				BGl_proc5677z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc5678z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc5679z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc5680z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_storegz00zzsaw_defsz00,
				BGl_proc5681z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5682z00zzmsil_codez00,
				BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc5683z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc5684z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_vlengthz00zzsaw_defsz00,
				BGl_proc5685z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_vallocz00zzsaw_defsz00,
				BGl_proc5686z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_getfieldz00zzsaw_defsz00,
				BGl_proc5687z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_setfieldz00zzsaw_defsz00,
				BGl_proc5688z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_isaz00zzsaw_defsz00,
				BGl_proc5689z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc5690z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc5691z00zzmsil_codez00,
				BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_makeboxz00zzsaw_defsz00,
				BGl_proc5692z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_boxrefz00zzsaw_defsz00,
				BGl_proc5693z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_boxsetz00zzsaw_defsz00,
				BGl_proc5694z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc5695z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_loadfunz00zzsaw_defsz00,
				BGl_proc5696z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc5697z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_tail_applyz00zzmsil_codez00,
				BGl_proc5698z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_returnz00zzsaw_defsz00,
				BGl_proc5699z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc5700z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_switchz00zzsaw_defsz00,
				BGl_proc5701z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_jumpexitz00zzsaw_defsz00,
				BGl_proc5702z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_failz00zzsaw_defsz00,
				BGl_proc5703z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00, BGl_rtl_protectz00zzsaw_defsz00,
				BGl_proc5704z00zzmsil_codez00, BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzmsil_codez00,
				BGl_rtl_protectedz00zzsaw_defsz00, BGl_proc5705z00zzmsil_codez00,
				BGl_string5664z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2predicatezd2envz00zzmsil_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5706z00zzmsil_codez00,
				BGl_string5666z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tail_applyz00zzmsil_codez00, BGl_proc5707z00zzmsil_codez00,
				BGl_string5708z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tail_applyz00zzmsil_codez00, BGl_proc5709z00zzmsil_codez00,
				BGl_string5710z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tail_funcallz00zzmsil_codez00, BGl_proc5711z00zzmsil_codez00,
				BGl_string5708z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tail_funcallz00zzmsil_codez00, BGl_proc5712z00zzmsil_codez00,
				BGl_string5710z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tail_lightfuncallz00zzmsil_codez00, BGl_proc5713z00zzmsil_codez00,
				BGl_string5708z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tail_lightfuncallz00zzmsil_codez00, BGl_proc5714z00zzmsil_codez00,
				BGl_string5710z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tail_callz00zzmsil_codez00, BGl_proc5715z00zzmsil_codez00,
				BGl_string5708z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tail_callz00zzmsil_codez00, BGl_proc5716z00zzmsil_codez00,
				BGl_string5710z00zzmsil_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_lregz00zzmsil_codez00, BGl_proc5717z00zzmsil_codez00,
				BGl_string5708z00zzmsil_codez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_lregz00zzmsil_codez00, BGl_proc5718z00zzmsil_codez00,
				BGl_string5710z00zzmsil_codez00);
		}
	}



/* struct+object->objec5074 */
	obj_t BGl_structzb2objectzd2ze3objec5074z83zzmsil_codez00(obj_t
		BgL_envz00_4177, obj_t BgL_oz00_4178, obj_t BgL_sz00_4179)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			{
				BgL_lregz00_bglt BgL_oz00_3011;

				obj_t BgL_sz00_3012;

				{	/* SawMsil/code.scm 25 */
					BgL_lregz00_bglt BgL_auxz00_5539;

					BgL_oz00_3011 = (BgL_lregz00_bglt) (BgL_oz00_4178);
					BgL_sz00_3012 = BgL_sz00_4179;
					{

						{	/* SawMsil/code.scm 25 */
							obj_t BgL_old4776z00_3015;

							obj_t BgL_aux4777z00_3016;

							{	/* SawMsil/code.scm 25 */
								obj_t BgL_nextzd2method5073zd2_3022;

								BgL_nextzd2method5073zd2_3022 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3011),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_lregz00zzmsil_codez00);
								if (PROCEDUREP(BgL_nextzd2method5073zd2_3022))
									{	/* SawMsil/code.scm 25 */
										BgL_old4776z00_3015 =
											PROCEDURE_ENTRY(BgL_nextzd2method5073zd2_3022)
											(BgL_nextzd2method5073zd2_3022, (obj_t) (BgL_oz00_3011),
											BgL_sz00_3012, BEOA);
									}
								else
									{	/* SawMsil/code.scm 25 */
										BgL_old4776z00_3015 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3011), BgL_sz00_3012));
									}
							}
							BgL_aux4777z00_3016 =
								STRUCT_REF(BgL_sz00_3012, (int) (((long) 0)));
							{	/* SawMsil/code.scm 25 */
								BgL_lregz00_bglt BgL_new4778z00_3017;

								BgL_new4778z00_3017 =
									((BgL_lregz00_bglt) (BgL_old4776z00_3015));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4778z00_3017),
									BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzmsil_codez00));
								{	/* SawMsil/code.scm 25 */
									BgL_lregz00_bglt BgL_arg5572z00_3019;

									{	/* SawMsil/code.scm 25 */
										obj_t BgL_arg5573z00_3020;

										obj_t BgL_arg5574z00_3021;

										BgL_arg5573z00_3020 =
											STRUCT_REF(BgL_aux4777z00_3016, (int) (((long) 0)));
										BgL_arg5574z00_3021 =
											STRUCT_REF(BgL_aux4777z00_3016, (int) (((long) 1)));
										{	/* SawMsil/code.scm 25 */
											BgL_lregz00_bglt BgL_res5641z00_4044;

											{	/* SawMsil/code.scm 25 */
												BgL_lregz00_bglt BgL_new4754z00_4037;

												BgL_new4754z00_4037 =
													((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_lregz00_bgl))));
												{	/* SawMsil/code.scm 25 */
													BgL_lregz00_bglt BgL_res5640z00_4043;

													{	/* SawMsil/code.scm 25 */
														BgL_lregz00_bglt BgL_new4768z00_4038;

														BgL_new4768z00_4038 = BgL_new4754z00_4037;
														{	/* SawMsil/code.scm 25 */
															obj_t BgL_index4766z00_4041;

															obj_t BgL_paramzf34767zf3_4042;

															BgL_index4766z00_4041 = BgL_arg5573z00_3020;
															BgL_paramzf34767zf3_4042 = BgL_arg5574z00_3021;
															((((BgL_lregz00_bglt) CREF(BgL_new4768z00_4038))->
																	BgL_indexz00) =
																((obj_t) BgL_index4766z00_4041), BUNSPEC);
															((((BgL_lregz00_bglt) CREF(BgL_new4768z00_4038))->
																	BgL_paramzf3zf3) =
																((obj_t) BgL_paramzf34767zf3_4042), BUNSPEC);
															BgL_res5640z00_4043 = BgL_new4768z00_4038;
													}} BgL_res5640z00_4043;
												}
												BgL_res5641z00_4044 = BgL_new4754z00_4037;
											}
											BgL_arg5572z00_3019 = BgL_res5641z00_4044;
									}}
									{	/* SawMsil/code.scm 25 */
										obj_t BgL_auxz00_5565;

										BgL_objectz00_bglt BgL_auxz00_5563;

										BgL_auxz00_5565 = (obj_t) (BgL_arg5572z00_3019);
										BgL_auxz00_5563 =
											(BgL_objectz00_bglt) (BgL_new4778z00_3017);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5563, BgL_auxz00_5565);
								}}
								BgL_auxz00_5539 = BgL_new4778z00_3017;
					}}}
					return (obj_t) (BgL_auxz00_5539);
				}
			}
		}
	}



/* object->struct-lreg5072 */
	obj_t BGl_objectzd2ze3structzd2lreg5072ze3zzmsil_codez00(obj_t
		BgL_envz00_4180, obj_t BgL_obj4773z00_4181)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 25 */
			{
				BgL_lregz00_bglt BgL_obj4773z00_2999;

				BgL_obj4773z00_2999 = (BgL_lregz00_bglt) (BgL_obj4773z00_4181);
				{

					{	/* SawMsil/code.scm 25 */
						obj_t BgL_res4774z00_3002;

						{	/* SawMsil/code.scm 25 */
							obj_t BgL_nextzd2method5071zd2_3009;

							BgL_nextzd2method5071zd2_3009 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4773z00_2999),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_lregz00zzmsil_codez00);
							if (PROCEDUREP(BgL_nextzd2method5071zd2_3009))
								{	/* SawMsil/code.scm 25 */
									BgL_res4774z00_3002 =
										PROCEDURE_ENTRY(BgL_nextzd2method5071zd2_3009)
										(BgL_nextzd2method5071zd2_3009,
										(obj_t) (BgL_obj4773z00_2999), BEOA);
								}
							else
								{	/* SawMsil/code.scm 25 */
									BgL_res4774z00_3002 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4773z00_2999));
								}
						}
						{	/* SawMsil/code.scm 25 */
							obj_t BgL_aux4775z00_3003;

							{	/* SawMsil/code.scm 25 */
								obj_t BgL_keyz00_4006;

								BgL_keyz00_4006 = CNST_TABLE_REF(((long) 12));
								BgL_aux4775z00_3003 =
									make_struct(BgL_keyz00_4006, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawMsil/code.scm 25 */
								obj_t BgL_arg5566z00_3005;

								{
									obj_t BgL_auxz00_5582;

									{	/* SawMsil/code.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_5583;

										BgL_auxz00_5583 =
											(BgL_objectz00_bglt) (BgL_obj4773z00_2999);
										BgL_auxz00_5582 = BGL_OBJECT_WIDENING(BgL_auxz00_5583);
									}
									BgL_arg5566z00_3005 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_5582))->BgL_indexz00);
								}
								{	/* SawMsil/code.scm 25 */
									int BgL_auxz00_5587;

									BgL_auxz00_5587 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4775z00_3003, BgL_auxz00_5587,
										BgL_arg5566z00_3005);
							}}
							{	/* SawMsil/code.scm 25 */
								obj_t BgL_arg5568z00_3007;

								{
									obj_t BgL_auxz00_5590;

									{	/* SawMsil/code.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_5591;

										BgL_auxz00_5591 =
											(BgL_objectz00_bglt) (BgL_obj4773z00_2999);
										BgL_auxz00_5590 = BGL_OBJECT_WIDENING(BgL_auxz00_5591);
									}
									BgL_arg5568z00_3007 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_5590))->
										BgL_paramzf3zf3);
								}
								{	/* SawMsil/code.scm 25 */
									int BgL_auxz00_5595;

									BgL_auxz00_5595 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4775z00_3003, BgL_auxz00_5595,
										BgL_arg5568z00_3007);
							}}
							{	/* SawMsil/code.scm 25 */
								int BgL_auxz00_5598;

								BgL_auxz00_5598 = (int) (((long) 0));
								STRUCT_SET(BgL_res4774z00_3002, BgL_auxz00_5598,
									BgL_aux4775z00_3003);
							}
							{	/* SawMsil/code.scm 25 */
								obj_t BgL_auxz00_5601;

								BgL_auxz00_5601 = STRUCT_KEY(BgL_res4774z00_3002);
								STRUCT_KEY_SET(BgL_aux4775z00_3003, BgL_auxz00_5601);
							}
							{	/* SawMsil/code.scm 25 */
								obj_t BgL_kz00_4025;

								BgL_kz00_4025 = CNST_TABLE_REF(((long) 12));
								STRUCT_KEY_SET(BgL_res4774z00_3002, BgL_kz00_4025);
							}
							return BgL_res4774z00_3002;
						}
					}
				}
			}
		}
	}



/* struct+object->objec5070 */
	obj_t BGl_structzb2objectzd2ze3objec5070z83zzmsil_codez00(obj_t
		BgL_envz00_4182, obj_t BgL_oz00_4183, obj_t BgL_sz00_4184)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			{
				BgL_tail_callz00_bglt BgL_oz00_2990;

				obj_t BgL_sz00_2991;

				{	/* SawMsil/code.scm 27 */
					BgL_tail_callz00_bglt BgL_auxz00_5607;

					BgL_oz00_2990 = (BgL_tail_callz00_bglt) (BgL_oz00_4183);
					BgL_sz00_2991 = BgL_sz00_4184;
					{	/* SawMsil/code.scm 27 */
						obj_t BgL_arg5563z00_2994;

						BgL_arg5563z00_2994 = STRUCT_REF(BgL_sz00_2991, (int) (((long) 0)));
						{	/* SawMsil/code.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_5610;

							BgL_auxz00_5610 = (BgL_objectz00_bglt) (BgL_oz00_2990);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5610, BgL_arg5563z00_2994);
					}}
					{
						obj_t BgL_auxz00_5613;

						BgL_auxz00_5613 = STRUCT_REF(BgL_sz00_2991, (int) (((long) 1)));
						((((BgL_tail_callz00_bglt) CREF(BgL_oz00_2990))->BgL_locz00) =
							((obj_t) BgL_auxz00_5613), BUNSPEC);
					}
					{
						BgL_globalz00_bglt BgL_auxz00_5617;

						BgL_auxz00_5617 =
							(BgL_globalz00_bglt) (STRUCT_REF(BgL_sz00_2991,
								(int) (((long) 2))));
						((((BgL_tail_callz00_bglt) CREF(BgL_oz00_2990))->BgL_varz00) =
							((BgL_globalz00_bglt) BgL_auxz00_5617), BUNSPEC);
					}
					BgL_auxz00_5607 = BgL_oz00_2990;
					return (obj_t) (BgL_auxz00_5607);
				}
			}
		}
	}



/* object->struct-tail_5068 */
	obj_t BGl_objectzd2ze3structzd2tail_5068ze3zzmsil_codez00(obj_t
		BgL_envz00_4185, obj_t BgL_obj4816z00_4186)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 27 */
			{
				BgL_tail_callz00_bglt BgL_obj4816z00_2980;

				BgL_obj4816z00_2980 = (BgL_tail_callz00_bglt) (BgL_obj4816z00_4186);
				{	/* SawMsil/code.scm 27 */
					obj_t BgL_res4817z00_2983;

					{	/* SawMsil/code.scm 27 */
						obj_t BgL_keyz00_3986;

						BgL_keyz00_3986 = CNST_TABLE_REF(((long) 13));
						BgL_res4817z00_2983 =
							make_struct(BgL_keyz00_3986, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMsil/code.scm 27 */
						int BgL_auxz00_5627;

						BgL_auxz00_5627 = (int) (((long) 0));
						STRUCT_SET(BgL_res4817z00_2983, BgL_auxz00_5627, BFALSE);
					}
					{	/* SawMsil/code.scm 27 */
						obj_t BgL_arg5559z00_2985;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_5630;

							BgL_auxz00_5630 = (BgL_rtl_funz00_bglt) (BgL_obj4816z00_2980);
							BgL_arg5559z00_2985 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_5630))->BgL_locz00);
						}
						{	/* SawMsil/code.scm 27 */
							int BgL_auxz00_5633;

							BgL_auxz00_5633 = (int) (((long) 1));
							STRUCT_SET(BgL_res4817z00_2983, BgL_auxz00_5633,
								BgL_arg5559z00_2985);
					}}
					{	/* SawMsil/code.scm 27 */
						BgL_globalz00_bglt BgL_arg5561z00_2987;

						{
							BgL_rtl_callz00_bglt BgL_auxz00_5636;

							BgL_auxz00_5636 = (BgL_rtl_callz00_bglt) (BgL_obj4816z00_2980);
							BgL_arg5561z00_2987 =
								(((BgL_rtl_callz00_bglt) CREF(BgL_auxz00_5636))->BgL_varz00);
						}
						{	/* SawMsil/code.scm 27 */
							obj_t BgL_auxz00_5641;

							int BgL_auxz00_5639;

							BgL_auxz00_5641 = (obj_t) (BgL_arg5561z00_2987);
							BgL_auxz00_5639 = (int) (((long) 2));
							STRUCT_SET(BgL_res4817z00_2983, BgL_auxz00_5639, BgL_auxz00_5641);
					}}
					return BgL_res4817z00_2983;
				}
			}
		}
	}



/* struct+object->objec5066 */
	obj_t BGl_structzb2objectzd2ze3objec5066z83zzmsil_codez00(obj_t
		BgL_envz00_4187, obj_t BgL_oz00_4188, obj_t BgL_sz00_4189)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			{
				BgL_tail_lightfuncallz00_bglt BgL_oz00_2972;

				obj_t BgL_sz00_2973;

				{	/* SawMsil/code.scm 28 */
					BgL_tail_lightfuncallz00_bglt BgL_auxz00_5645;

					BgL_oz00_2972 = (BgL_tail_lightfuncallz00_bglt) (BgL_oz00_4188);
					BgL_sz00_2973 = BgL_sz00_4189;
					{	/* SawMsil/code.scm 28 */
						obj_t BgL_arg5556z00_2976;

						BgL_arg5556z00_2976 = STRUCT_REF(BgL_sz00_2973, (int) (((long) 0)));
						{	/* SawMsil/code.scm 28 */
							BgL_objectz00_bglt BgL_auxz00_5648;

							BgL_auxz00_5648 = (BgL_objectz00_bglt) (BgL_oz00_2972);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5648, BgL_arg5556z00_2976);
					}}
					{
						obj_t BgL_auxz00_5651;

						BgL_auxz00_5651 = STRUCT_REF(BgL_sz00_2973, (int) (((long) 1)));
						((((BgL_tail_lightfuncallz00_bglt) CREF(BgL_oz00_2972))->
								BgL_locz00) = ((obj_t) BgL_auxz00_5651), BUNSPEC);
					}
					BgL_auxz00_5645 = BgL_oz00_2972;
					return (obj_t) (BgL_auxz00_5645);
				}
			}
		}
	}



/* object->struct-tail_5064 */
	obj_t BGl_objectzd2ze3structzd2tail_5064ze3zzmsil_codez00(obj_t
		BgL_envz00_4190, obj_t BgL_obj4838z00_4191)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 28 */
			{
				BgL_tail_lightfuncallz00_bglt BgL_obj4838z00_2964;

				BgL_obj4838z00_2964 =
					(BgL_tail_lightfuncallz00_bglt) (BgL_obj4838z00_4191);
				{	/* SawMsil/code.scm 28 */
					obj_t BgL_res4839z00_2967;

					{	/* SawMsil/code.scm 28 */
						obj_t BgL_keyz00_3972;

						BgL_keyz00_3972 = CNST_TABLE_REF(((long) 14));
						BgL_res4839z00_2967 =
							make_struct(BgL_keyz00_3972, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMsil/code.scm 28 */
						int BgL_auxz00_5660;

						BgL_auxz00_5660 = (int) (((long) 0));
						STRUCT_SET(BgL_res4839z00_2967, BgL_auxz00_5660, BFALSE);
					}
					{	/* SawMsil/code.scm 28 */
						obj_t BgL_arg5554z00_2969;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_5663;

							BgL_auxz00_5663 = (BgL_rtl_funz00_bglt) (BgL_obj4838z00_2964);
							BgL_arg5554z00_2969 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_5663))->BgL_locz00);
						}
						{	/* SawMsil/code.scm 28 */
							int BgL_auxz00_5666;

							BgL_auxz00_5666 = (int) (((long) 1));
							STRUCT_SET(BgL_res4839z00_2967, BgL_auxz00_5666,
								BgL_arg5554z00_2969);
					}}
					return BgL_res4839z00_2967;
				}
			}
		}
	}



/* struct+object->objec5062 */
	obj_t BGl_structzb2objectzd2ze3objec5062z83zzmsil_codez00(obj_t
		BgL_envz00_4192, obj_t BgL_oz00_4193, obj_t BgL_sz00_4194)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			{
				BgL_tail_funcallz00_bglt BgL_oz00_2956;

				obj_t BgL_sz00_2957;

				{	/* SawMsil/code.scm 29 */
					BgL_tail_funcallz00_bglt BgL_auxz00_5670;

					BgL_oz00_2956 = (BgL_tail_funcallz00_bglt) (BgL_oz00_4193);
					BgL_sz00_2957 = BgL_sz00_4194;
					{	/* SawMsil/code.scm 29 */
						obj_t BgL_arg5551z00_2960;

						BgL_arg5551z00_2960 = STRUCT_REF(BgL_sz00_2957, (int) (((long) 0)));
						{	/* SawMsil/code.scm 29 */
							BgL_objectz00_bglt BgL_auxz00_5673;

							BgL_auxz00_5673 = (BgL_objectz00_bglt) (BgL_oz00_2956);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5673, BgL_arg5551z00_2960);
					}}
					{
						obj_t BgL_auxz00_5676;

						BgL_auxz00_5676 = STRUCT_REF(BgL_sz00_2957, (int) (((long) 1)));
						((((BgL_tail_funcallz00_bglt) CREF(BgL_oz00_2956))->BgL_locz00) =
							((obj_t) BgL_auxz00_5676), BUNSPEC);
					}
					BgL_auxz00_5670 = BgL_oz00_2956;
					return (obj_t) (BgL_auxz00_5670);
				}
			}
		}
	}



/* object->struct-tail_5060 */
	obj_t BGl_objectzd2ze3structzd2tail_5060ze3zzmsil_codez00(obj_t
		BgL_envz00_4195, obj_t BgL_obj4856z00_4196)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 29 */
			{
				BgL_tail_funcallz00_bglt BgL_obj4856z00_2948;

				BgL_obj4856z00_2948 = (BgL_tail_funcallz00_bglt) (BgL_obj4856z00_4196);
				{	/* SawMsil/code.scm 29 */
					obj_t BgL_res4857z00_2951;

					{	/* SawMsil/code.scm 29 */
						obj_t BgL_keyz00_3958;

						BgL_keyz00_3958 = CNST_TABLE_REF(((long) 15));
						BgL_res4857z00_2951 =
							make_struct(BgL_keyz00_3958, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMsil/code.scm 29 */
						int BgL_auxz00_5685;

						BgL_auxz00_5685 = (int) (((long) 0));
						STRUCT_SET(BgL_res4857z00_2951, BgL_auxz00_5685, BFALSE);
					}
					{	/* SawMsil/code.scm 29 */
						obj_t BgL_arg5549z00_2953;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_5688;

							BgL_auxz00_5688 = (BgL_rtl_funz00_bglt) (BgL_obj4856z00_2948);
							BgL_arg5549z00_2953 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_5688))->BgL_locz00);
						}
						{	/* SawMsil/code.scm 29 */
							int BgL_auxz00_5691;

							BgL_auxz00_5691 = (int) (((long) 1));
							STRUCT_SET(BgL_res4857z00_2951, BgL_auxz00_5691,
								BgL_arg5549z00_2953);
					}}
					return BgL_res4857z00_2951;
				}
			}
		}
	}



/* struct+object->objec5058 */
	obj_t BGl_structzb2objectzd2ze3objec5058z83zzmsil_codez00(obj_t
		BgL_envz00_4197, obj_t BgL_oz00_4198, obj_t BgL_sz00_4199)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			{
				BgL_tail_applyz00_bglt BgL_oz00_2940;

				obj_t BgL_sz00_2941;

				{	/* SawMsil/code.scm 30 */
					BgL_tail_applyz00_bglt BgL_auxz00_5695;

					BgL_oz00_2940 = (BgL_tail_applyz00_bglt) (BgL_oz00_4198);
					BgL_sz00_2941 = BgL_sz00_4199;
					{	/* SawMsil/code.scm 30 */
						obj_t BgL_arg5546z00_2944;

						BgL_arg5546z00_2944 = STRUCT_REF(BgL_sz00_2941, (int) (((long) 0)));
						{	/* SawMsil/code.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_5698;

							BgL_auxz00_5698 = (BgL_objectz00_bglt) (BgL_oz00_2940);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5698, BgL_arg5546z00_2944);
					}}
					{
						obj_t BgL_auxz00_5701;

						BgL_auxz00_5701 = STRUCT_REF(BgL_sz00_2941, (int) (((long) 1)));
						((((BgL_tail_applyz00_bglt) CREF(BgL_oz00_2940))->BgL_locz00) =
							((obj_t) BgL_auxz00_5701), BUNSPEC);
					}
					BgL_auxz00_5695 = BgL_oz00_2940;
					return (obj_t) (BgL_auxz00_5695);
				}
			}
		}
	}



/* object->struct-tail_5056 */
	obj_t BGl_objectzd2ze3structzd2tail_5056ze3zzmsil_codez00(obj_t
		BgL_envz00_4200, obj_t BgL_obj4875z00_4201)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 30 */
			{
				BgL_tail_applyz00_bglt BgL_obj4875z00_2932;

				BgL_obj4875z00_2932 = (BgL_tail_applyz00_bglt) (BgL_obj4875z00_4201);
				{	/* SawMsil/code.scm 30 */
					obj_t BgL_res4876z00_2935;

					{	/* SawMsil/code.scm 30 */
						obj_t BgL_keyz00_3944;

						BgL_keyz00_3944 = CNST_TABLE_REF(((long) 16));
						BgL_res4876z00_2935 =
							make_struct(BgL_keyz00_3944, (int) (((long) 2)), BUNSPEC);
					}
					{	/* SawMsil/code.scm 30 */
						int BgL_auxz00_5710;

						BgL_auxz00_5710 = (int) (((long) 0));
						STRUCT_SET(BgL_res4876z00_2935, BgL_auxz00_5710, BFALSE);
					}
					{	/* SawMsil/code.scm 30 */
						obj_t BgL_arg5544z00_2937;

						{
							BgL_rtl_funz00_bglt BgL_auxz00_5713;

							BgL_auxz00_5713 = (BgL_rtl_funz00_bglt) (BgL_obj4875z00_2932);
							BgL_arg5544z00_2937 =
								(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_5713))->BgL_locz00);
						}
						{	/* SawMsil/code.scm 30 */
							int BgL_auxz00_5716;

							BgL_auxz00_5716 = (int) (((long) 1));
							STRUCT_SET(BgL_res4876z00_2935, BgL_auxz00_5716,
								BgL_arg5544z00_2937);
					}}
					return BgL_res4876z00_2935;
				}
			}
		}
	}



/* gen-predicate-rtl_ca5054 */
	obj_t BGl_genzd2predicatezd2rtl_ca5054z00zzmsil_codez00(obj_t BgL_envz00_4202,
		obj_t BgL_funz00_4203, obj_t BgL_mez00_4204, obj_t BgL_onzf3zf3_4205,
		obj_t BgL_labz00_4206)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 535 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2921;

				obj_t BgL_mez00_2922;

				obj_t BgL_onzf3zf3_2923;

				obj_t BgL_labz00_2924;

				BgL_funz00_2921 = (BgL_rtl_callz00_bglt) (BgL_funz00_4203);
				BgL_mez00_2922 = BgL_mez00_4204;
				BgL_onzf3zf3_2923 = BgL_onzf3zf3_4205;
				BgL_labz00_2924 = BgL_labz00_4206;
				{	/* SawMsil/code.scm 536 */
					obj_t BgL_rz00_3936;

					{	/* SawMsil/code.scm 536 */
						BgL_globalz00_bglt BgL_arg5541z00_3937;

						BgL_arg5541z00_3937 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2921))->BgL_varz00);
						BgL_rz00_3936 =
							BGl_inlinezd2predicatezf3z21zzmsil_inlinez00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2922), BgL_arg5541z00_3937,
							BgL_onzf3zf3_2923, BgL_labz00_2924);
					}
					if ((BgL_rz00_3936 == CNST_TABLE_REF(((long) 18))))
						{	/* SawMsil/code.scm 536 */
							BGl_genzd2funzd2zzmsil_codez00(
								(BgL_rtl_funz00_bglt) (BgL_funz00_2921), BgL_mez00_2922);
							if (CBOOL(BgL_onzf3zf3_2923))
								{	/* SawMsil/code.scm 536 */
									return
										BGl_brtruez00zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_2922),
										BGl_string5647z00zzmsil_codez00, BgL_labz00_2924);
								}
							else
								{	/* SawMsil/code.scm 536 */
									return
										BGl_brfalsez00zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_2922),
										BGl_string5647z00zzmsil_codez00, BgL_labz00_2924);
								}
						}
					else
						{	/* SawMsil/code.scm 536 */
							return BgL_rz00_3936;
						}
				}
			}
		}
	}



/* gen-fun-rtl_protecte5048 */
	obj_t BGl_genzd2funzd2rtl_protecte5048z00zzmsil_codez00(obj_t BgL_envz00_4207,
		obj_t BgL_funz00_4208, obj_t BgL_mez00_4209)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 507 */
			{	/* SawMsil/code.scm 509 */
				obj_t BgL_res5740z00_4387;

				BgL_res5740z00_4387 = CNST_TABLE_REF(((long) 19));
				return BgL_res5740z00_4387;
			}
		}
	}



/* gen-fun-rtl_protect5046 */
	obj_t BGl_genzd2funzd2rtl_protect5046z00zzmsil_codez00(obj_t BgL_envz00_4210,
		obj_t BgL_funz00_4211, obj_t BgL_mez00_4212)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 498 */
			{
				BgL_rtl_protectz00_bglt BgL_funz00_2905;

				obj_t BgL_mez00_2906;

				BgL_funz00_2905 = (BgL_rtl_protectz00_bglt) (BgL_funz00_4211);
				BgL_mez00_2906 = BgL_mez00_4212;
				BGl_pushzd2intzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2906), BINT(((long) 0)));
				{	/* SawMsil/code.scm 500 */
					obj_t BgL_arg5534z00_2909;

					{	/* SawMsil/code.scm 500 */
						BgL_lregz00_bglt BgL_obj4781z00_3933;

						BgL_obj4781z00_3933 =
							(BgL_lregz00_bglt) (BGl_za2bugmonoregza2z00zzmsil_codez00);
						{
							obj_t BgL_auxz00_5740;

							{	/* SawMsil/code.scm 500 */
								BgL_objectz00_bglt BgL_auxz00_5741;

								BgL_auxz00_5741 = (BgL_objectz00_bglt) (BgL_obj4781z00_3933);
								BgL_auxz00_5740 = BGL_OBJECT_WIDENING(BgL_auxz00_5741);
							}
							BgL_arg5534z00_2909 =
								(((BgL_lregz00_bglt) CREF(BgL_auxz00_5740))->BgL_indexz00);
					}}
					BGl_storezd2varzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2906), CINT(BgL_arg5534z00_2909));
				}
				BGl_libcallz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2906),
					CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)), CNST_TABLE_REF(((long) 20)), BNIL);
				{	/* SawMsil/code.scm 502 */
					obj_t BgL_arg5535z00_2910;

					{	/* SawMsil/code.scm 502 */
						BgL_lregz00_bglt BgL_obj4781z00_3934;

						BgL_obj4781z00_3934 =
							(BgL_lregz00_bglt) (BGl_za2bexitregza2z00zzmsil_codez00);
						{
							obj_t BgL_auxz00_5754;

							{	/* SawMsil/code.scm 502 */
								BgL_objectz00_bglt BgL_auxz00_5755;

								BgL_auxz00_5755 = (BgL_objectz00_bglt) (BgL_obj4781z00_3934);
								BgL_auxz00_5754 = BGL_OBJECT_WIDENING(BgL_auxz00_5755);
							}
							BgL_arg5535z00_2910 =
								(((BgL_lregz00_bglt) CREF(BgL_auxz00_5754))->BgL_indexz00);
					}}
					BGl_storezd2varzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2906), CINT(BgL_arg5535z00_2910));
				}
				BGl_openzd2tryzd2zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2906));
				{	/* SawMsil/code.scm 504 */
					obj_t BgL_arg5536z00_2911;

					{	/* SawMsil/code.scm 504 */
						BgL_lregz00_bglt BgL_obj4781z00_3935;

						BgL_obj4781z00_3935 =
							(BgL_lregz00_bglt) (BGl_za2bexitregza2z00zzmsil_codez00);
						{
							obj_t BgL_auxz00_5765;

							{	/* SawMsil/code.scm 504 */
								BgL_objectz00_bglt BgL_auxz00_5766;

								BgL_auxz00_5766 = (BgL_objectz00_bglt) (BgL_obj4781z00_3935);
								BgL_auxz00_5765 = BGL_OBJECT_WIDENING(BgL_auxz00_5766);
							}
							BgL_arg5536z00_2911 =
								(((BgL_lregz00_bglt) CREF(BgL_auxz00_5765))->BgL_indexz00);
					}}
					BGl_loadzd2varzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2906), CINT(BgL_arg5536z00_2911));
				}
				return
					BGl_castclassz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2906),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0))));
		}}
	}



/* gen-fun-rtl_fail5044 */
	obj_t BGl_genzd2funzd2rtl_fail5044z00zzmsil_codez00(obj_t BgL_envz00_4213,
		obj_t BgL_funz00_4214, obj_t BgL_mez00_4215)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 494 */
			{
				BgL_rtl_failz00_bglt BgL_funz00_2899;

				obj_t BgL_mez00_2900;

				BgL_funz00_2899 = (BgL_rtl_failz00_bglt) (BgL_funz00_4214);
				BgL_mez00_2900 = BgL_mez00_4215;
				BGl_libcallz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2900),
					CNST_TABLE_REF(((long) 21)),
					CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 22)), CNST_TABLE_REF(((long) 23)));
				return BGl_throwz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2900));
			}
		}
	}



/* gen-fun-rtl_jumpexit5042 */
	obj_t BGl_genzd2funzd2rtl_jumpexit5042z00zzmsil_codez00(obj_t BgL_envz00_4216,
		obj_t BgL_funz00_4217, obj_t BgL_mez00_4218)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 488 */
			{
				BgL_rtl_jumpexitz00_bglt BgL_funz00_2892;

				obj_t BgL_mez00_2893;

				BgL_funz00_2892 = (BgL_rtl_jumpexitz00_bglt) (BgL_funz00_4217);
				BgL_mez00_2893 = BgL_mez00_4218;
				BGl_libcallz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2893),
					CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 24)), CNST_TABLE_REF(((long) 10)));
				BGl_castclassz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2893),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0))));
				return BGl_throwz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2893));
			}
		}
	}



/* gen-fun-rtl_switch5040 */
	obj_t BGl_genzd2funzd2rtl_switch5040z00zzmsil_codez00(obj_t BgL_envz00_4219,
		obj_t BgL_funz00_4220, obj_t BgL_mez00_4221)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 430 */
			{
				BgL_rtl_switchz00_bglt BgL_funz00_2797;

				obj_t BgL_mez00_2798;

				BgL_funz00_2797 = (BgL_rtl_switchz00_bglt) (BgL_funz00_4220);
				BgL_mez00_2798 = BgL_mez00_4221;
				{	/* SawMsil/code.scm 433 */
					obj_t BgL_ldefz00_2802;

					obj_t BgL_num2labz00_2803;

					BgL_ldefz00_2802 = BUNSPEC;
					BgL_num2labz00_2803 = BNIL;
					{	/* SawMsil/code.scm 435 */
						obj_t BgL_g4944z00_2805;

						obj_t BgL_g4945z00_2806;

						{
							BgL_rtl_selectz00_bglt BgL_auxz00_5800;

							BgL_auxz00_5800 = (BgL_rtl_selectz00_bglt) (BgL_funz00_2797);
							BgL_g4944z00_2805 =
								(((BgL_rtl_selectz00_bglt) CREF(BgL_auxz00_5800))->
								BgL_patternsz00);
						}
						{	/* SawMsil/code.scm 440 */
							obj_t BgL_l4935z00_2825;

							BgL_l4935z00_2825 =
								(((BgL_rtl_switchz00_bglt) CREF(BgL_funz00_2797))->
								BgL_labelsz00);
							if (NULLP(BgL_l4935z00_2825))
								{	/* SawMsil/code.scm 440 */
									BgL_g4945z00_2806 = BNIL;
								}
							else
								{	/* SawMsil/code.scm 440 */
									obj_t BgL_head4937z00_2827;

									{	/* SawMsil/code.scm 440 */
										int BgL_arg5498z00_2840;

										{	/* SawMsil/code.scm 440 */
											BgL_blockz00_bglt BgL_obj4652z00_3873;

											{	/* SawMsil/code.scm 440 */
												obj_t BgL_pairz00_3872;

												BgL_pairz00_3872 = BgL_l4935z00_2825;
												BgL_obj4652z00_3873 =
													(BgL_blockz00_bglt) (CAR(BgL_pairz00_3872));
											}
											BgL_arg5498z00_2840 =
												(((BgL_blockz00_bglt) CREF(BgL_obj4652z00_3873))->
												BgL_labelz00);
										}
										BgL_head4937z00_2827 =
											MAKE_PAIR(BINT(BgL_arg5498z00_2840), BNIL);
									}
									{	/* SawMsil/code.scm 440 */
										obj_t BgL_g4940z00_2828;

										BgL_g4940z00_2828 = CDR(BgL_l4935z00_2825);
										{
											obj_t BgL_l4935z00_2830;

											obj_t BgL_tail4938z00_2831;

											BgL_l4935z00_2830 = BgL_g4940z00_2828;
											BgL_tail4938z00_2831 = BgL_head4937z00_2827;
										BgL_zc3anonymousza35492ze3z83_2832:
											if (NULLP(BgL_l4935z00_2830))
												{	/* SawMsil/code.scm 440 */
													BgL_g4945z00_2806 = BgL_head4937z00_2827;
												}
											else
												{	/* SawMsil/code.scm 440 */
													obj_t BgL_newtail4939z00_2834;

													{	/* SawMsil/code.scm 440 */
														int BgL_arg5495z00_2836;

														{	/* SawMsil/code.scm 440 */
															BgL_blockz00_bglt BgL_obj4652z00_3879;

															{	/* SawMsil/code.scm 440 */
																obj_t BgL_pairz00_3878;

																BgL_pairz00_3878 = BgL_l4935z00_2830;
																BgL_obj4652z00_3879 =
																	(BgL_blockz00_bglt) (CAR(BgL_pairz00_3878));
															}
															BgL_arg5495z00_2836 =
																(((BgL_blockz00_bglt)
																	CREF(BgL_obj4652z00_3879))->BgL_labelz00);
														}
														BgL_newtail4939z00_2834 =
															MAKE_PAIR(BINT(BgL_arg5495z00_2836), BNIL);
													}
													SET_CDR(BgL_tail4938z00_2831,
														BgL_newtail4939z00_2834);
													{
														obj_t BgL_tail4938z00_5822;

														obj_t BgL_l4935z00_5820;

														BgL_l4935z00_5820 = CDR(BgL_l4935z00_2830);
														BgL_tail4938z00_5822 = BgL_newtail4939z00_2834;
														BgL_tail4938z00_2831 = BgL_tail4938z00_5822;
														BgL_l4935z00_2830 = BgL_l4935z00_5820;
														goto BgL_zc3anonymousza35492ze3z83_2832;
													}
												}
										}
									}
								}
						}
						{
							obj_t BgL_ll4941z00_2808;

							obj_t BgL_ll4942z00_2809;

							BgL_ll4941z00_2808 = BgL_g4944z00_2805;
							BgL_ll4942z00_2809 = BgL_g4945z00_2806;
						BgL_zc3anonymousza35483ze3z83_2810:
							if (NULLP(BgL_ll4941z00_2808))
								{	/* SawMsil/code.scm 435 */
									((bool_t) 1);
								}
							else
								{	/* SawMsil/code.scm 435 */
									{	/* SawMsil/code.scm 436 */
										obj_t BgL_patz00_2812;

										obj_t BgL_labz00_2813;

										BgL_patz00_2812 = CAR(BgL_ll4941z00_2808);
										BgL_labz00_2813 = CAR(BgL_ll4942z00_2809);
										if ((BgL_patz00_2812 == CNST_TABLE_REF(((long) 25))))
											{	/* SawMsil/code.scm 436 */
												BgL_ldefz00_2802 = BgL_labz00_2813;
											}
										else
											{
												obj_t BgL_l4933z00_2816;

												{	/* SawMsil/code.scm 438 */
													bool_t BgL_auxz00_5830;

													BgL_l4933z00_2816 = BgL_patz00_2812;
												BgL_zc3anonymousza35486ze3z83_2817:
													if (PAIRP(BgL_l4933z00_2816))
														{	/* SawMsil/code.scm 438 */
															{	/* SawMsil/code.scm 438 */
																obj_t BgL_nz00_2819;

																BgL_nz00_2819 = CAR(BgL_l4933z00_2816);
																{	/* SawMsil/code.scm 438 */
																	obj_t BgL_arg5529z00_3892;

																	BgL_arg5529z00_3892 =
																		MAKE_PAIR(BgL_nz00_2819, BgL_labz00_2813);
																	BgL_num2labz00_2803 =
																		MAKE_PAIR(BgL_arg5529z00_3892,
																		BgL_num2labz00_2803);
																}
															}
															{
																obj_t BgL_l4933z00_5836;

																BgL_l4933z00_5836 = CDR(BgL_l4933z00_2816);
																BgL_l4933z00_2816 = BgL_l4933z00_5836;
																goto BgL_zc3anonymousza35486ze3z83_2817;
															}
														}
													else
														{	/* SawMsil/code.scm 438 */
															BgL_auxz00_5830 = ((bool_t) 1);
														}
													BBOOL(BgL_auxz00_5830);
												}
											}
									}
									{
										obj_t BgL_ll4942z00_5841;

										obj_t BgL_ll4941z00_5839;

										BgL_ll4941z00_5839 = CDR(BgL_ll4941z00_2808);
										BgL_ll4942z00_5841 = CDR(BgL_ll4942z00_2809);
										BgL_ll4942z00_2809 = BgL_ll4942z00_5841;
										BgL_ll4941z00_2808 = BgL_ll4941z00_5839;
										goto BgL_zc3anonymousza35483ze3z83_2810;
									}
								}
						}
					}
					if (NULLP(CDR(BgL_num2labz00_2803)))
						{	/* SawMsil/code.scm 442 */
							{	/* SawMsil/code.scm 443 */
								obj_t BgL_arg5502z00_2844;

								{	/* SawMsil/code.scm 443 */
									obj_t BgL_pairz00_3898;

									BgL_pairz00_3898 = BgL_num2labz00_2803;
									BgL_arg5502z00_2844 = CAR(CAR(BgL_pairz00_3898));
								}
								BGl_pushzd2intzd2zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_2798), BgL_arg5502z00_2844);
							}
							BGl_bnez00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2798),
								BGl_string5647z00zzmsil_codez00, BgL_ldefz00_2802);
							{	/* SawMsil/code.scm 445 */
								obj_t BgL_arg5504z00_2846;

								{	/* SawMsil/code.scm 445 */
									obj_t BgL_pairz00_3902;

									BgL_pairz00_3902 = BgL_num2labz00_2803;
									BgL_arg5504z00_2846 = CDR(CAR(BgL_pairz00_3902));
								}
								return
									BGl_brz00zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_2798),
									BGl_string5647z00zzmsil_codez00, BgL_arg5504z00_2846);
							}
						}
					else
						{	/* SawMsil/code.scm 442 */
							BgL_num2labz00_2803 =
								BGl_sortz00zz__r4_vectors_6_8z00(BgL_num2labz00_2803,
								BGl_proc5719z00zzmsil_codez00);
							{	/* SawMsil/code.scm 448 */
								obj_t BgL_numsz00_2854;

								{	/* SawMsil/code.scm 448 */
									obj_t BgL_l4946z00_2866;

									BgL_l4946z00_2866 = BgL_num2labz00_2803;
									if (NULLP(BgL_l4946z00_2866))
										{	/* SawMsil/code.scm 448 */
											BgL_numsz00_2854 = BNIL;
										}
									else
										{	/* SawMsil/code.scm 448 */
											obj_t BgL_head4948z00_2868;

											BgL_head4948z00_2868 =
												MAKE_PAIR(CAR(CAR(BgL_l4946z00_2866)), BNIL);
											{	/* SawMsil/code.scm 448 */
												obj_t BgL_g4951z00_2869;

												BgL_g4951z00_2869 = CDR(BgL_l4946z00_2866);
												{
													obj_t BgL_l4946z00_2871;

													obj_t BgL_tail4949z00_2872;

													BgL_l4946z00_2871 = BgL_g4951z00_2869;
													BgL_tail4949z00_2872 = BgL_head4948z00_2868;
												BgL_zc3anonymousza35518ze3z83_2873:
													if (NULLP(BgL_l4946z00_2871))
														{	/* SawMsil/code.scm 448 */
															BgL_numsz00_2854 = BgL_head4948z00_2868;
														}
													else
														{	/* SawMsil/code.scm 448 */
															obj_t BgL_newtail4950z00_2875;

															BgL_newtail4950z00_2875 =
																MAKE_PAIR(CAR(CAR(BgL_l4946z00_2871)), BNIL);
															SET_CDR(BgL_tail4949z00_2872,
																BgL_newtail4950z00_2875);
															{
																obj_t BgL_tail4949z00_5871;

																obj_t BgL_l4946z00_5869;

																BgL_l4946z00_5869 = CDR(BgL_l4946z00_2871);
																BgL_tail4949z00_5871 = BgL_newtail4950z00_2875;
																BgL_tail4949z00_2872 = BgL_tail4949z00_5871;
																BgL_l4946z00_2871 = BgL_l4946z00_5869;
																goto BgL_zc3anonymousza35518ze3z83_2873;
															}
														}
												}
											}
										}
								}
								{	/* SawMsil/code.scm 448 */
									obj_t BgL_minz00_2855;

									BgL_minz00_2855 = CAR(BgL_numsz00_2854);
									{	/* SawMsil/code.scm 449 */
										obj_t BgL_maxz00_2856;

										BgL_maxz00_2856 =
											CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_numsz00_2854));
										{	/* SawMsil/code.scm 450 */
											long BgL_nz00_2857;

											BgL_nz00_2857 = bgl_list_length(BgL_numsz00_2854);
											{	/* SawMsil/code.scm 451 */

												if (BGl_2zc3zc3zz__r4_numbers_6_5z00
													(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_nz00_2857),
															BINT((((long) 1) + ((long) CINT(BgL_maxz00_2856) -
																		(long) CINT(BgL_minz00_2855))))),
														BGl_real5720z00zzmsil_codez00))
													{	/* SawMsil/code.scm 452 */
														return
															BGl__lookupz00zzmsil_codez00(BgL_mez00_2798,
															BgL_ldefz00_2802, BgL_num2labz00_2803,
															BGl_za2switchregza2z00zzmsil_codez00);
													}
												else
													{	/* SawMsil/code.scm 454 */
														obj_t BgL_arg5510z00_2859;

														BgL_arg5510z00_2859 =
															BGl_flatz00zzmsil_codez00(BgL_num2labz00_2803,
															BgL_ldefz00_2802);
														return BGl__tablez00zzmsil_codez00(BgL_mez00_2798,
															BgL_ldefz00_2802, BgL_minz00_2855,
															BgL_arg5510z00_2859);
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



/* <anonymous:5506> */
	obj_t BGl_zc3anonymousza35506ze3z83zzmsil_codez00(obj_t BgL_envz00_4222,
		obj_t BgL_xz00_4223, obj_t BgL_yz00_4224)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 447 */
			{
				obj_t BgL_xz00_2848;

				obj_t BgL_yz00_2849;

				{	/* SawMsil/code.scm 447 */
					bool_t BgL_auxz00_5889;

					BgL_xz00_2848 = BgL_xz00_4223;
					BgL_yz00_2849 = BgL_yz00_4224;
					{	/* SawMsil/code.scm 447 */
						long BgL_auxz00_5893;

						long BgL_auxz00_5890;

						{	/* SawMsil/code.scm 447 */
							obj_t BgL_pairz00_3909;

							BgL_pairz00_3909 = BgL_yz00_2849;
							BgL_auxz00_5893 = (long) CINT(CAR(BgL_pairz00_3909));
						}
						{	/* SawMsil/code.scm 447 */
							obj_t BgL_pairz00_3908;

							BgL_pairz00_3908 = BgL_xz00_2848;
							BgL_auxz00_5890 = (long) CINT(CAR(BgL_pairz00_3908));
						}
						BgL_auxz00_5889 = (BgL_auxz00_5890 < BgL_auxz00_5893);
					}
					return BBOOL(BgL_auxz00_5889);
				}
			}
		}
	}



/* gen-fun-rtl_go5038 */
	obj_t BGl_genzd2funzd2rtl_go5038z00zzmsil_codez00(obj_t BgL_envz00_4225,
		obj_t BgL_funz00_4226, obj_t BgL_mez00_4227)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 427 */
			{
				BgL_rtl_goz00_bglt BgL_funz00_2788;

				obj_t BgL_mez00_2789;

				BgL_funz00_2788 = (BgL_rtl_goz00_bglt) (BgL_funz00_4226);
				BgL_mez00_2789 = BgL_mez00_4227;
				{	/* SawMsil/code.scm 428 */
					int BgL_arg5480z00_3865;

					{	/* SawMsil/code.scm 428 */
						BgL_blockz00_bglt BgL_obj4652z00_3868;

						BgL_obj4652z00_3868 =
							(((BgL_rtl_goz00_bglt) CREF(BgL_funz00_2788))->BgL_toz00);
						BgL_arg5480z00_3865 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4652z00_3868))->BgL_labelz00);
					}
					return
						BGl_brz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2789),
						BGl_string5647z00zzmsil_codez00, BINT(BgL_arg5480z00_3865));
				}
			}
		}
	}



/* gen-fun-rtl_return5036 */
	obj_t BGl_genzd2funzd2rtl_return5036z00zzmsil_codez00(obj_t BgL_envz00_4228,
		obj_t BgL_funz00_4229, obj_t BgL_mez00_4230)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 420 */
			{
				BgL_rtl_returnz00_bglt BgL_funz00_2781;

				obj_t BgL_mez00_2782;

				BgL_funz00_2781 = (BgL_rtl_returnz00_bglt) (BgL_funz00_4229);
				BgL_mez00_2782 = BgL_mez00_4230;
				if (BGl_za2hasprotectza2z00zzmsil_codez00)
					{	/* SawMsil/code.scm 421 */
						{	/* SawMsil/code.scm 422 */
							obj_t BgL_arg5477z00_2785;

							{	/* SawMsil/code.scm 422 */
								BgL_lregz00_bglt BgL_obj4781z00_3863;

								BgL_obj4781z00_3863 =
									(BgL_lregz00_bglt) (BGl_za2protectresultza2z00zzmsil_codez00);
								{
									obj_t BgL_auxz00_5906;

									{	/* SawMsil/code.scm 422 */
										BgL_objectz00_bglt BgL_auxz00_5907;

										BgL_auxz00_5907 =
											(BgL_objectz00_bglt) (BgL_obj4781z00_3863);
										BgL_auxz00_5906 = BGL_OBJECT_WIDENING(BgL_auxz00_5907);
									}
									BgL_arg5477z00_2785 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_5906))->BgL_indexz00);
								}
							}
							BGl_storezd2varzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2782),
								CINT(BgL_arg5477z00_2785));
						}
						return
							BGl_brz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2782),
							BGl_string5648z00zzmsil_codez00, BGl_string5649z00zzmsil_codez00);
					}
				else
					{	/* SawMsil/code.scm 421 */
						return
							BGl_returnz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2782));
					}
			}
		}
	}



/* gen-fun-tail_apply5034 */
	obj_t BGl_genzd2funzd2tail_apply5034z00zzmsil_codez00(obj_t BgL_envz00_4231,
		obj_t BgL_funz00_4232, obj_t BgL_mez00_4233)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 416 */
			{
				BgL_tail_applyz00_bglt BgL_funz00_2775;

				obj_t BgL_mez00_2776;

				BgL_funz00_2775 = (BgL_tail_applyz00_bglt) (BgL_funz00_4232);
				BgL_mez00_2776 = BgL_mez00_4233;
				if (CBOOL(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00))
					{	/* SawMsil/code.scm 417 */
						BGl_declarezd2tailzd2zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2776));
					}
				else
					{	/* SawMsil/code.scm 417 */
						BFALSE;
					}
				return
					BGl_callvirtz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2776),
					CNST_TABLE_REF(((long) 1)), BGl_string5661z00zzmsil_codez00,
					CNST_TABLE_REF(((long) 11)));
		}}
	}



/* gen-fun-rtl_apply5032 */
	obj_t BGl_genzd2funzd2rtl_apply5032z00zzmsil_codez00(obj_t BgL_envz00_4234,
		obj_t BgL_funz00_4235, obj_t BgL_mez00_4236)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 413 */
			{
				BgL_rtl_applyz00_bglt BgL_funz00_2769;

				obj_t BgL_mez00_2770;

				BgL_funz00_2769 = (BgL_rtl_applyz00_bglt) (BgL_funz00_4235);
				BgL_mez00_2770 = BgL_mez00_4236;
				return
					BGl_callvirtz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2770),
					CNST_TABLE_REF(((long) 1)), BGl_string5661z00zzmsil_codez00,
					CNST_TABLE_REF(((long) 11)));
		}}
	}



/* gen-fun-rtl_loadfun5030 */
	obj_t BGl_genzd2funzd2rtl_loadfun5030z00zzmsil_codez00(obj_t BgL_envz00_4237,
		obj_t BgL_funz00_4238, obj_t BgL_mez00_4239)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 409 */
			{
				BgL_rtl_loadfunz00_bglt BgL_funz00_2761;

				obj_t BgL_mez00_2762;

				BgL_funz00_2761 = (BgL_rtl_loadfunz00_bglt) (BgL_funz00_4238);
				BgL_mez00_2762 = BgL_mez00_4239;
				{	/* SawMsil/code.scm 410 */
					BgL_globalz00_bglt BgL_varz00_3859;

					BgL_varz00_3859 =
						(((BgL_rtl_loadfunz00_bglt) CREF(BgL_funz00_2761))->BgL_varz00);
					{	/* SawMsil/code.scm 410 */
						int BgL_arg5473z00_3860;

						{	/* SawMsil/code.scm 410 */
							BgL_indexedz00_bglt BgL_obj4703z00_3862;

							BgL_obj4703z00_3862 = (BgL_indexedz00_bglt) (BgL_varz00_3859);
							{
								obj_t BgL_auxz00_5935;

								{	/* SawMsil/code.scm 410 */
									BgL_objectz00_bglt BgL_auxz00_5936;

									BgL_auxz00_5936 = (BgL_objectz00_bglt) (BgL_obj4703z00_3862);
									BgL_auxz00_5935 = BGL_OBJECT_WIDENING(BgL_auxz00_5936);
								}
								BgL_arg5473z00_3860 =
									(((BgL_indexedz00_bglt) CREF(BgL_auxz00_5935))->BgL_indexz00);
						}}
						return
							BGl_pushzd2intzd2zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2762), BINT(BgL_arg5473z00_3860));
					}
				}
			}
		}
	}



/* gen-fun-rtl_call5028 */
	obj_t BGl_genzd2funzd2rtl_call5028z00zzmsil_codez00(obj_t BgL_envz00_4240,
		obj_t BgL_funz00_4241, obj_t BgL_mez00_4242)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 397 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2748;

				obj_t BgL_mez00_2749;

				BgL_funz00_2748 = (BgL_rtl_callz00_bglt) (BgL_funz00_4241);
				BgL_mez00_2749 = BgL_mez00_4242;
				{	/* SawMsil/code.scm 398 */
					BgL_globalz00_bglt BgL_varz00_2752;

					BgL_varz00_2752 =
						(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2748))->BgL_varz00);
					{	/* SawMsil/code.scm 399 */
						obj_t BgL_rz00_2753;

						BgL_rz00_2753 =
							BGl_inlinezd2callzf3z21zzmsil_inlinez00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2749), BgL_varz00_2752);
						if ((BgL_rz00_2753 == CNST_TABLE_REF(((long) 18))))
							{	/* SawMsil/code.scm 400 */
								{	/* SawMsil/code.scm 402 */
									bool_t BgL_testz00_5950;

									{	/* SawMsil/code.scm 402 */
										bool_t BgL_testz00_5951;

										{	/* SawMsil/code.scm 402 */
											obj_t BgL_obj4826z00_3857;

											BgL_obj4826z00_3857 = (obj_t) (BgL_funz00_2748);
											BgL_testz00_5951 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj4826z00_3857,
												BGl_tail_callz00zzmsil_codez00);
										}
										if (BgL_testz00_5951)
											{	/* SawMsil/code.scm 403 */
												bool_t BgL__ortest_4903z00_2757;

												{	/* SawMsil/code.scm 403 */
													obj_t BgL_arg5471z00_2758;

													BgL_arg5471z00_2758 =
														(((BgL_globalz00_bglt) CREF(BgL_varz00_2752))->
														BgL_modulez00);
													BgL__ortest_4903z00_2757 =
														(BgL_arg5471z00_2758 ==
														BGl_za2moduleza2z00zzmodule_modulez00);
												}
												if (BgL__ortest_4903z00_2757)
													{	/* SawMsil/code.scm 403 */
														BgL_testz00_5950 = BgL__ortest_4903z00_2757;
													}
												else
													{	/* SawMsil/code.scm 403 */
														BgL_testz00_5950 =
															CBOOL
															(BGl_za2dotnetzd2tailzd2acrosszd2modulesza2zd2zzengine_paramz00);
													}
											}
										else
											{	/* SawMsil/code.scm 402 */
												BgL_testz00_5950 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_5950)
										{	/* SawMsil/code.scm 402 */
											BGl_declarezd2tailzd2zzmsil_outz00(
												(BgL_dotnetz00_bglt) (BgL_mez00_2749));
										}
									else
										{	/* SawMsil/code.scm 402 */
											BFALSE;
										}
								}
								return
									BGl_callzd2globalzd2zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_2749), BgL_varz00_2752);
							}
						else
							{	/* SawMsil/code.scm 400 */
								return BgL_rz00_2753;
							}
					}
				}
			}
		}
	}



/* gen-fun-rtl_boxset5026 */
	obj_t BGl_genzd2funzd2rtl_boxset5026z00zzmsil_codez00(obj_t BgL_envz00_4243,
		obj_t BgL_funz00_4244, obj_t BgL_mez00_4245)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 392 */
			{
				BgL_rtl_boxsetz00_bglt BgL_funz00_2742;

				obj_t BgL_mez00_2743;

				BgL_funz00_2742 = (BgL_rtl_boxsetz00_bglt) (BgL_funz00_4244);
				BgL_mez00_2743 = BgL_mez00_4245;
				return
					BGl_storezd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2743),
					CNST_TABLE_REF(((long) 1)), BGl_string5721z00zzmsil_codez00,
					CNST_TABLE_REF(((long) 26)));
		}}
	}



/* gen-fun-rtl_boxref5024 */
	obj_t BGl_genzd2funzd2rtl_boxref5024z00zzmsil_codez00(obj_t BgL_envz00_4246,
		obj_t BgL_funz00_4247, obj_t BgL_mez00_4248)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 389 */
			{
				BgL_rtl_boxrefz00_bglt BgL_funz00_2736;

				obj_t BgL_mez00_2737;

				BgL_funz00_2736 = (BgL_rtl_boxrefz00_bglt) (BgL_funz00_4247);
				BgL_mez00_2737 = BgL_mez00_4248;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2737),
					CNST_TABLE_REF(((long) 1)), BGl_string5721z00zzmsil_codez00,
					CNST_TABLE_REF(((long) 26)));
		}}
	}



/* gen-fun-rtl_makebox5022 */
	obj_t BGl_genzd2funzd2rtl_makebox5022z00zzmsil_codez00(obj_t BgL_envz00_4249,
		obj_t BgL_funz00_4250, obj_t BgL_mez00_4251)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 386 */
			{
				BgL_rtl_makeboxz00_bglt BgL_funz00_2730;

				obj_t BgL_mez00_2731;

				BgL_funz00_2730 = (BgL_rtl_makeboxz00_bglt) (BgL_funz00_4250);
				BgL_mez00_2731 = BgL_mez00_4251;
				return
					BGl_newobjz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_2731),
					BGl_string5721z00zzmsil_codez00, CNST_TABLE_REF(((long) 11)));
		}}
	}



/* gen-fun-rtl_cast_nul5020 */
	obj_t BGl_genzd2funzd2rtl_cast_nul5020z00zzmsil_codez00(obj_t BgL_envz00_4252,
		obj_t BgL_funz00_4253, obj_t BgL_mez00_4254)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 379 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_funz00_2722;

				obj_t BgL_mez00_2723;

				BgL_funz00_2722 = (BgL_rtl_cast_nullz00_bglt) (BgL_funz00_4253);
				BgL_mez00_2723 = BgL_mez00_4254;
				{	/* SawMsil/code.scm 380 */
					BgL_typez00_bglt BgL_typez00_2726;

					BgL_typez00_2726 =
						(((BgL_rtl_cast_nullz00_bglt) CREF(BgL_funz00_2722))->BgL_typez00);
					if (((obj_t) (BgL_typez00_2726) == CNST_TABLE_REF(((long) 27))))
						{	/* SawMsil/code.scm 381 */
							return
								BGl_pushzd2numzd2zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2723),
								BINT(((long) 0)), CNST_TABLE_REF(((long) 27)));
						}
					else
						{	/* SawMsil/code.scm 381 */
							return
								BGl_ldnullz00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2723));
						}
				}
			}
		}
	}



/* gen-fun-rtl_cast5018 */
	obj_t BGl_genzd2funzd2rtl_cast5018z00zzmsil_codez00(obj_t BgL_envz00_4255,
		obj_t BgL_funz00_4256, obj_t BgL_mez00_4257)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 373 */
			{
				BgL_rtl_castz00_bglt BgL_funz00_2712;

				obj_t BgL_mez00_2713;

				BgL_funz00_2712 = (BgL_rtl_castz00_bglt) (BgL_funz00_4256);
				BgL_mez00_2713 = BgL_mez00_4257;
				if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
					{	/* SawMsil/code.scm 375 */
						BgL_typez00_bglt BgL_typez00_2716;

						BgL_typez00_2716 =
							(((BgL_rtl_castz00_bglt) CREF(BgL_funz00_2712))->BgL_typez00);
						{	/* SawMsil/code.scm 376 */
							bool_t BgL_testz00_5992;

							{	/* SawMsil/code.scm 376 */
								obj_t BgL_arg5460z00_2718;

								BgL_arg5460z00_2718 =
									(((BgL_typez00_bglt) CREF(BgL_typez00_2716))->BgL_namez00);
								BgL_testz00_5992 =
									bigloo_strcmp(BgL_arg5460z00_2718,
									BGl_string5722z00zzmsil_codez00);
							}
							if (BgL_testz00_5992)
								{	/* SawMsil/code.scm 376 */
									return BFALSE;
								}
							else
								{	/* SawMsil/code.scm 376 */
									return
										BGl_castclassz00zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_2713), BgL_typez00_2716);
								}
						}
					}
				else
					{	/* SawMsil/code.scm 374 */
						return BFALSE;
					}
			}
		}
	}



/* gen-fun-rtl_isa5016 */
	obj_t BGl_genzd2funzd2rtl_isa5016z00zzmsil_codez00(obj_t BgL_envz00_4258,
		obj_t BgL_funz00_4259, obj_t BgL_mez00_4260)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 363 */
			{
				BgL_rtl_isaz00_bglt BgL_funz00_2703;

				obj_t BgL_mez00_2704;

				BgL_funz00_2703 = (BgL_rtl_isaz00_bglt) (BgL_funz00_4259);
				BgL_mez00_2704 = BgL_mez00_4260;
				{	/* SawMsil/code.scm 364 */
					BgL_typez00_bglt BgL_arg5457z00_2707;

					BgL_arg5457z00_2707 =
						(((BgL_rtl_isaz00_bglt) CREF(BgL_funz00_2703))->BgL_typez00);
					BGl_isinstz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2704), BgL_arg5457z00_2707);
				}
				{	/* SawMsil/code.scm 365 */
					obj_t BgL_l1z00_2708;

					obj_t BgL_l2z00_2709;

					BgL_l1z00_2708 =
						BGl_gensymz00zz__r4_symbols_6_4z00(BGl_string5723z00zzmsil_codez00);
					BgL_l2z00_2709 =
						BGl_gensymz00zz__r4_symbols_6_4z00(BGl_string5723z00zzmsil_codez00);
					BGl_brfalsez00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BGl_string5648z00zzmsil_codez00, BgL_l1z00_2708);
					BGl_pushzd2intzd2zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BINT(((long) 1)));
					BGl_brz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BGl_string5648z00zzmsil_codez00, BgL_l2z00_2709);
					BGl_labelz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BGl_string5648z00zzmsil_codez00, BgL_l1z00_2708);
					BGl_pushzd2intzd2zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BINT(((long) 0)));
					return
						BGl_labelz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2704),
						BGl_string5648z00zzmsil_codez00, BgL_l2z00_2709);
				}
			}
		}
	}



/* gen-fun-rtl_setfield5014 */
	obj_t BGl_genzd2funzd2rtl_setfield5014z00zzmsil_codez00(obj_t BgL_envz00_4261,
		obj_t BgL_funz00_4262, obj_t BgL_mez00_4263)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 357 */
			{
				BgL_rtl_setfieldz00_bglt BgL_funz00_2689;

				obj_t BgL_mez00_2690;

				BgL_funz00_2689 = (BgL_rtl_setfieldz00_bglt) (BgL_funz00_4262);
				BgL_mez00_2690 = BgL_mez00_4263;
				{	/* SawMsil/code.scm 360 */
					bool_t BgL_testz00_6018;

					{	/* SawMsil/code.scm 360 */
						BgL_typez00_bglt BgL_arg5452z00_2697;

						BgL_arg5452z00_2697 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->
							BgL_objtypez00);
						BgL_testz00_6018 =
							BGl_widezd2classzf3z21zzobject_classz00((obj_t)
							(BgL_arg5452z00_2697));
					}
					if (BgL_testz00_6018)
						{	/* SawMsil/code.scm 360 */
							obj_t BgL_arg5450z00_2695;

							{	/* SawMsil/code.scm 360 */
								BgL_typez00_bglt BgL_arg5451z00_2696;

								BgL_arg5451z00_2696 =
									(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->
									BgL_objtypez00);
								BgL_arg5450z00_2695 =
									BGl_widezd2ze3chunkz31zzbackend_cplibz00((BgL_tclassz00_bglt)
									(BgL_arg5451z00_2696));
							}
							{
								BgL_typez00_bglt BgL_auxz00_6025;

								BgL_auxz00_6025 = (BgL_typez00_bglt) (BgL_arg5450z00_2695);
								((((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->
										BgL_objtypez00) =
									((BgL_typez00_bglt) BgL_auxz00_6025), BUNSPEC);
							}
						}
					else
						{	/* SawMsil/code.scm 360 */
							BFALSE;
						}
				}
				{	/* SawMsil/code.scm 361 */
					BgL_typez00_bglt BgL_arg5453z00_2698;

					BgL_typez00_bglt BgL_arg5454z00_2699;

					obj_t BgL_arg5455z00_2700;

					BgL_arg5453z00_2698 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->BgL_typez00);
					BgL_arg5454z00_2699 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->
						BgL_objtypez00);
					BgL_arg5455z00_2700 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2689))->BgL_namez00);
					return
						BGl_storezd2fieldzd2zzmsil_outz00((BgL_dotnetz00_bglt)
						(BgL_mez00_2690), (obj_t) (BgL_arg5453z00_2698),
						(obj_t) (BgL_arg5454z00_2699), BgL_arg5455z00_2700);
				}
			}
		}
	}



/* gen-fun-rtl_getfield5012 */
	obj_t BGl_genzd2funzd2rtl_getfield5012z00zzmsil_codez00(obj_t BgL_envz00_4264,
		obj_t BgL_funz00_4265, obj_t BgL_mez00_4266)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 351 */
			{
				BgL_rtl_getfieldz00_bglt BgL_funz00_2675;

				obj_t BgL_mez00_2676;

				BgL_funz00_2675 = (BgL_rtl_getfieldz00_bglt) (BgL_funz00_4265);
				BgL_mez00_2676 = BgL_mez00_4266;
				{	/* SawMsil/code.scm 354 */
					bool_t BgL_testz00_6036;

					{	/* SawMsil/code.scm 354 */
						BgL_typez00_bglt BgL_arg5444z00_2683;

						BgL_arg5444z00_2683 =
							(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->
							BgL_objtypez00);
						BgL_testz00_6036 =
							BGl_widezd2classzf3z21zzobject_classz00((obj_t)
							(BgL_arg5444z00_2683));
					}
					if (BgL_testz00_6036)
						{	/* SawMsil/code.scm 354 */
							obj_t BgL_arg5442z00_2681;

							{	/* SawMsil/code.scm 354 */
								BgL_typez00_bglt BgL_arg5443z00_2682;

								BgL_arg5443z00_2682 =
									(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->
									BgL_objtypez00);
								BgL_arg5442z00_2681 =
									BGl_widezd2ze3chunkz31zzbackend_cplibz00((BgL_tclassz00_bglt)
									(BgL_arg5443z00_2682));
							}
							{
								BgL_typez00_bglt BgL_auxz00_6043;

								BgL_auxz00_6043 = (BgL_typez00_bglt) (BgL_arg5442z00_2681);
								((((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->
										BgL_objtypez00) =
									((BgL_typez00_bglt) BgL_auxz00_6043), BUNSPEC);
							}
						}
					else
						{	/* SawMsil/code.scm 354 */
							BFALSE;
						}
				}
				{	/* SawMsil/code.scm 355 */
					BgL_typez00_bglt BgL_arg5445z00_2684;

					BgL_typez00_bglt BgL_arg5446z00_2685;

					obj_t BgL_arg5447z00_2686;

					BgL_arg5445z00_2684 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->BgL_typez00);
					BgL_arg5446z00_2685 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->
						BgL_objtypez00);
					BgL_arg5447z00_2686 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2675))->BgL_namez00);
					return
						BGl_loadzd2fieldzd2zzmsil_outz00((BgL_dotnetz00_bglt)
						(BgL_mez00_2676), (obj_t) (BgL_arg5445z00_2684),
						(obj_t) (BgL_arg5446z00_2685), BgL_arg5447z00_2686);
				}
			}
		}
	}



/* gen-fun-rtl_valloc5010 */
	obj_t BGl_genzd2funzd2rtl_valloc5010z00zzmsil_codez00(obj_t BgL_envz00_4267,
		obj_t BgL_funz00_4268, obj_t BgL_mez00_4269)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 347 */
			{
				BgL_rtl_vallocz00_bglt BgL_funz00_2668;

				obj_t BgL_mez00_2669;

				BgL_funz00_2668 = (BgL_rtl_vallocz00_bglt) (BgL_funz00_4268);
				BgL_mez00_2669 = BgL_mez00_4269;
				{	/* SawMsil/code.scm 348 */
					BgL_typez00_bglt BgL_arg5439z00_3834;

					BgL_arg5439z00_3834 =
						(((BgL_rtl_vallocz00_bglt) CREF(BgL_funz00_2668))->BgL_typez00);
					return
						BGl_newarrayz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2669),
						(obj_t) (BgL_arg5439z00_3834));
				}
			}
		}
	}



/* gen-fun-rtl_vlength5008 */
	obj_t BGl_genzd2funzd2rtl_vlength5008z00zzmsil_codez00(obj_t BgL_envz00_4270,
		obj_t BgL_funz00_4271, obj_t BgL_mez00_4272)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 344 */
			return
				BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_4272));
		}
	}



/* gen-fun-rtl_vset5006 */
	obj_t BGl_genzd2funzd2rtl_vset5006z00zzmsil_codez00(obj_t BgL_envz00_4273,
		obj_t BgL_funz00_4274, obj_t BgL_mez00_4275)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 341 */
			{
				BgL_rtl_vsetz00_bglt BgL_funz00_2655;

				obj_t BgL_mez00_2656;

				BgL_funz00_2655 = (BgL_rtl_vsetz00_bglt) (BgL_funz00_4274);
				BgL_mez00_2656 = BgL_mez00_4275;
				{	/* SawMsil/code.scm 342 */
					BgL_typez00_bglt BgL_arg5436z00_3832;

					BgL_arg5436z00_3832 =
						(((BgL_rtl_vsetz00_bglt) CREF(BgL_funz00_2655))->BgL_typez00);
					return
						BGl_storezd2vectorzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2656),
						(obj_t) (BgL_arg5436z00_3832));
				}
			}
		}
	}



/* gen-fun-rtl_vref5004 */
	obj_t BGl_genzd2funzd2rtl_vref5004z00zzmsil_codez00(obj_t BgL_envz00_4276,
		obj_t BgL_funz00_4277, obj_t BgL_mez00_4278)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 338 */
			{
				BgL_rtl_vrefz00_bglt BgL_funz00_2648;

				obj_t BgL_mez00_2649;

				BgL_funz00_2648 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_4277);
				BgL_mez00_2649 = BgL_mez00_4278;
				{	/* SawMsil/code.scm 339 */
					BgL_typez00_bglt BgL_arg5434z00_3830;

					BgL_arg5434z00_3830 =
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2648))->BgL_typez00);
					return
						BGl_loadzd2vectorzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2649),
						(obj_t) (BgL_arg5434z00_3830));
				}
			}
		}
	}



/* gen-fun-rtl_globalre5002 */
	obj_t BGl_genzd2funzd2rtl_globalre5002z00zzmsil_codez00(obj_t BgL_envz00_4279,
		obj_t BgL_funz00_4280, obj_t BgL_mez00_4281)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 331 */
			{
				BgL_rtl_globalrefz00_bglt BgL_funz00_2638;

				obj_t BgL_mez00_2639;

				BgL_funz00_2638 = (BgL_rtl_globalrefz00_bglt) (BgL_funz00_4280);
				BgL_mez00_2639 = BgL_mez00_4281;
				{	/* SawMsil/code.scm 332 */
					BgL_globalz00_bglt BgL_varz00_2642;

					BgL_varz00_2642 =
						(((BgL_rtl_globalrefz00_bglt) CREF(BgL_funz00_2638))->BgL_varz00);
					{	/* SawMsil/code.scm 333 */
						int BgL_arg5430z00_2643;

						{	/* SawMsil/code.scm 333 */
							BgL_indexedz00_bglt BgL_obj4703z00_3828;

							BgL_obj4703z00_3828 = (BgL_indexedz00_bglt) (BgL_varz00_2642);
							{
								obj_t BgL_auxz00_6073;

								{	/* SawMsil/code.scm 333 */
									BgL_objectz00_bglt BgL_auxz00_6074;

									BgL_auxz00_6074 = (BgL_objectz00_bglt) (BgL_obj4703z00_3828);
									BgL_auxz00_6073 = BGL_OBJECT_WIDENING(BgL_auxz00_6074);
								}
								BgL_arg5430z00_2643 =
									(((BgL_indexedz00_bglt) CREF(BgL_auxz00_6073))->BgL_indexz00);
						}}
						BGl_pushzd2intzd2zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2639), BINT(BgL_arg5430z00_2643));
					}
					BGl_pushzd2intzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2639), BINT(((long) 0)));
					{	/* SawMsil/code.scm 335 */
						obj_t BgL_arg5431z00_2644;

						obj_t BgL_arg5432z00_2645;

						{
							BgL_dotnetz00_bglt BgL_auxz00_6084;

							BgL_auxz00_6084 = (BgL_dotnetz00_bglt) (BgL_mez00_2639);
							BgL_arg5431z00_2644 =
								(((BgL_dotnetz00_bglt) CREF(BgL_auxz00_6084))->BgL_qnamez00);
						}
						BgL_arg5432z00_2645 = CNST_TABLE_REF(((long) 28));
						return
							BGl_newobjz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2639), BgL_arg5431z00_2644,
							BgL_arg5432z00_2645);
					}
				}
			}
		}
	}



/* gen-fun-rtl_storeg5000 */
	obj_t BGl_genzd2funzd2rtl_storeg5000z00zzmsil_codez00(obj_t BgL_envz00_4282,
		obj_t BgL_funz00_4283, obj_t BgL_mez00_4284)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 328 */
			{
				BgL_rtl_storegz00_bglt BgL_funz00_2631;

				obj_t BgL_mez00_2632;

				BgL_funz00_2631 = (BgL_rtl_storegz00_bglt) (BgL_funz00_4283);
				BgL_mez00_2632 = BgL_mez00_4284;
				{	/* SawMsil/code.scm 329 */
					BgL_globalz00_bglt BgL_arg5428z00_3825;

					BgL_arg5428z00_3825 =
						(((BgL_rtl_storegz00_bglt) CREF(BgL_funz00_2631))->BgL_varz00);
					return
						BGl_storezd2globalzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2632), BgL_arg5428z00_3825);
				}
			}
		}
	}



/* gen-fun-rtl_loadg4998 */
	obj_t BGl_genzd2funzd2rtl_loadg4998z00zzmsil_codez00(obj_t BgL_envz00_4285,
		obj_t BgL_funz00_4286, obj_t BgL_mez00_4287)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 325 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_2624;

				obj_t BgL_mez00_2625;

				BgL_funz00_2624 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_4286);
				BgL_mez00_2625 = BgL_mez00_4287;
				{	/* SawMsil/code.scm 326 */
					BgL_globalz00_bglt BgL_arg5426z00_3823;

					BgL_arg5426z00_3823 =
						(((BgL_rtl_loadgz00_bglt) CREF(BgL_funz00_2624))->BgL_varz00);
					return
						BGl_loadzd2globalzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2625), BgL_arg5426z00_3823);
				}
			}
		}
	}



/* gen-fun-rtl_loadi4996 */
	obj_t BGl_genzd2funzd2rtl_loadi4996z00zzmsil_codez00(obj_t BgL_envz00_4288,
		obj_t BgL_funz00_4289, obj_t BgL_mez00_4290)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 292 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_2600;

				obj_t BgL_mez00_2601;

				BgL_funz00_2600 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_4289);
				BgL_mez00_2601 = BgL_mez00_4290;
				{	/* SawMsil/code.scm 293 */
					BgL_atomz00_bglt BgL_constantz00_2604;

					BgL_constantz00_2604 =
						(((BgL_rtl_loadiz00_bglt) CREF(BgL_funz00_2600))->BgL_constantz00);
					{	/* SawMsil/code.scm 294 */
						obj_t BgL_valuez00_2605;

						BgL_valuez00_2605 =
							(((BgL_atomz00_bglt) CREF(BgL_constantz00_2604))->BgL_valuez00);
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_2605))
							{	/* SawMsil/code.scm 297 */
								obj_t BgL_arg5410z00_2607;

								{	/* SawMsil/code.scm 297 */
									BgL_typez00_bglt BgL_obj1508z00_3814;

									{
										BgL_nodez00_bglt BgL_auxz00_6103;

										BgL_auxz00_6103 = (BgL_nodez00_bglt) (BgL_constantz00_2604);
										BgL_obj1508z00_3814 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_6103))->BgL_typez00);
									}
									BgL_arg5410z00_2607 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_3814))->BgL_idz00);
								}
								return
									BGl_pushzd2numzd2zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_2601), BgL_valuez00_2605,
									BgL_arg5410z00_2607);
							}
						else
							{	/* SawMsil/code.scm 296 */
								if (NULLP(BgL_valuez00_2605))
									{	/* SawMsil/code.scm 298 */
										return
											BGl_pushzd2constantzd2zzmsil_outz00(
											(BgL_dotnetz00_bglt) (BgL_mez00_2601),
											BGl_string5659z00zzmsil_codez00);
									}
								else
									{	/* SawMsil/code.scm 298 */
										if (BOOLEANP(BgL_valuez00_2605))
											{	/* SawMsil/code.scm 301 */
												long BgL_arg5414z00_2611;

												if (CBOOL(BgL_valuez00_2605))
													{	/* SawMsil/code.scm 301 */
														BgL_arg5414z00_2611 = ((long) 1);
													}
												else
													{	/* SawMsil/code.scm 301 */
														BgL_arg5414z00_2611 = ((long) 0);
													}
												return
													BGl_pushzd2intzd2zzmsil_outz00(
													(BgL_dotnetz00_bglt) (BgL_mez00_2601),
													BINT(BgL_arg5414z00_2611));
											}
										else
											{	/* SawMsil/code.scm 300 */
												if (CHARP(BgL_valuez00_2605))
													{	/* SawMsil/code.scm 303 */
														long BgL_arg5416z00_2613;

														BgL_arg5416z00_2613 = (CCHAR(BgL_valuez00_2605));
														return
															BGl_pushzd2intzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_2601),
															BINT(BgL_arg5416z00_2613));
													}
												else
													{	/* SawMsil/code.scm 302 */
														if (STRINGP(BgL_valuez00_2605))
															{	/* SawMsil/code.scm 304 */
																BGl_pushzd2stringzd2zzmsil_outz00(
																	(BgL_dotnetz00_bglt) (BgL_mez00_2601),
																	BgL_valuez00_2605);
																return
																	BGl_libcallz00zzmsil_outz00(
																	(BgL_dotnetz00_bglt) (BgL_mez00_2601),
																	CNST_TABLE_REF(((long) 29)),
																	CNST_TABLE_REF(((long) 2)),
																	CNST_TABLE_REF(((long) 30)),
																	CNST_TABLE_REF(((long) 31)));
															}
														else
															{	/* SawMsil/code.scm 304 */
																if (EOF_OBJECTP(BgL_valuez00_2605))
																	{	/* SawMsil/code.scm 308 */
																		return
																			BGl_pushzd2constantzd2zzmsil_outz00(
																			(BgL_dotnetz00_bglt) (BgL_mez00_2601),
																			BGl_string5724z00zzmsil_codez00);
																	}
																else
																	{	/* SawMsil/code.scm 308 */
																		if ((BgL_valuez00_2605 == BCNST(258)))
																			{	/* SawMsil/code.scm 310 */
																				return
																					BGl_pushzd2constantzd2zzmsil_outz00(
																					(BgL_dotnetz00_bglt) (BgL_mez00_2601),
																					BGl_string5725z00zzmsil_codez00);
																			}
																		else
																			{	/* SawMsil/code.scm 310 */
																				if ((BgL_valuez00_2605 == BCNST(259)))
																					{	/* SawMsil/code.scm 312 */
																						return
																							BGl_pushzd2constantzd2zzmsil_outz00
																							((BgL_dotnetz00_bglt)
																							(BgL_mez00_2601),
																							BGl_string5726z00zzmsil_codez00);
																					}
																				else
																					{	/* SawMsil/code.scm 312 */
																						if (
																							(BgL_valuez00_2605 == BCNST(262)))
																							{	/* SawMsil/code.scm 314 */
																								return
																									BGl_pushzd2constantzd2zzmsil_outz00
																									((BgL_dotnetz00_bglt)
																									(BgL_mez00_2601),
																									BGl_string5727z00zzmsil_codez00);
																							}
																						else
																							{	/* SawMsil/code.scm 314 */
																								if (
																									(BgL_valuez00_2605 ==
																										BUNSPEC))
																									{	/* SawMsil/code.scm 316 */
																										return
																											BGl_pushzd2constantzd2zzmsil_outz00
																											((BgL_dotnetz00_bglt)
																											(BgL_mez00_2601),
																											BGl_string5655z00zzmsil_codez00);
																									}
																								else
																									{	/* SawMsil/code.scm 316 */
																										if (UCS2P
																											(BgL_valuez00_2605))
																											{	/* SawMsil/code.scm 318 */
																												{	/* SawMsil/code.scm 320 */
																													int
																														BgL_arg5424z00_2621;
																													{	/* SawMsil/code.scm 320 */
																														ucs2_t
																															BgL_ucs2z00_3822;
																														BgL_ucs2z00_3822 =
																															CUCS2
																															(BgL_valuez00_2605);
																														{	/* SawMsil/code.scm 320 */
																															obj_t
																																BgL_auxz00_6160;
																															BgL_auxz00_6160 =
																																BUCS2
																																(BgL_ucs2z00_3822);
																															BgL_arg5424z00_2621
																																=
																																CUCS2
																																(BgL_auxz00_6160);
																													}}
																													BGl_pushzd2intzd2zzmsil_outz00
																														(
																														(BgL_dotnetz00_bglt)
																														(BgL_mez00_2601),
																														BINT
																														(BgL_arg5424z00_2621));
																												}
																												return
																													BGl_newobjz00zzmsil_outz00
																													((BgL_dotnetz00_bglt)
																													(BgL_mez00_2601),
																													BGl_string5728z00zzmsil_codez00,
																													CNST_TABLE_REF(((long)
																															32)));
																											}
																										else
																											{	/* SawMsil/code.scm 318 */
																												return
																													BGl_errorz00zz__errorz00
																													(BGl_string5729z00zzmsil_codez00,
																													BGl_string5730z00zzmsil_codez00,
																													BgL_valuez00_2605);
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



/* gen-fun-rtl_mov4994 */
	obj_t BGl_genzd2funzd2rtl_mov4994z00zzmsil_codez00(obj_t BgL_envz00_4291,
		obj_t BgL_funz00_4292, obj_t BgL_mez00_4293)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 288 */
			{	/* SawMsil/code.scm 289 */
				obj_t BgL_res5741z00_4392;

				BgL_res5741z00_4392 = CNST_TABLE_REF(((long) 19));
				return BgL_res5741z00_4392;
			}
		}
	}



/* gen-fun-rtl_nop4992 */
	obj_t BGl_genzd2funzd2rtl_nop4992z00zzmsil_codez00(obj_t BgL_envz00_4294,
		obj_t BgL_funz00_4295, obj_t BgL_mez00_4296)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 285 */
			{	/* SawMsil/code.scm 286 */
				obj_t BgL_res5742z00_4395;

				BgL_res5742z00_4395 = CNST_TABLE_REF(((long) 9));
				return BgL_res5742z00_4395;
			}
		}
	}



/* gen-fun-with-args-rt4988 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt4988z00zzmsil_codez00(obj_t
		BgL_envz00_4297, obj_t BgL_funz00_4298, obj_t BgL_mez00_4299,
		obj_t BgL_argsz00_4300)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 276 */
			{
				BgL_rtl_newz00_bglt BgL_funz00_2578;

				obj_t BgL_mez00_2579;

				obj_t BgL_argsz00_2580;

				BgL_funz00_2578 = (BgL_rtl_newz00_bglt) (BgL_funz00_4298);
				BgL_mez00_2579 = BgL_mez00_4299;
				BgL_argsz00_2580 = BgL_argsz00_4300;
				{	/* SawMsil/code.scm 277 */
					obj_t BgL_arg5403z00_3805;

					obj_t BgL_arg5404z00_3806;

					{	/* SawMsil/code.scm 277 */
						BgL_typez00_bglt BgL_obj1509z00_3809;

						BgL_obj1509z00_3809 =
							(((BgL_rtl_newz00_bglt) CREF(BgL_funz00_2578))->BgL_typez00);
						BgL_arg5403z00_3805 =
							(((BgL_typez00_bglt) CREF(BgL_obj1509z00_3809))->BgL_namez00);
					}
					BgL_arg5404z00_3806 =
						(((BgL_rtl_newz00_bglt) CREF(BgL_funz00_2578))->BgL_constrz00);
					return
						BGl_newobjz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_2579), BgL_arg5403z00_3805,
						BgL_arg5404z00_3806);
				}
			}
		}
	}



/* gen-fun-with-args-ta4986 */
	obj_t BGl_genzd2funzd2withzd2argszd2ta4986z00zzmsil_codez00(obj_t
		BgL_envz00_4301, obj_t BgL_funz00_4302, obj_t BgL_mez00_4303,
		obj_t BgL_argsz00_4304)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 259 */
			return
				BGl_genzd2funcallzd2zzmsil_codez00(BgL_mez00_4303, BgL_argsz00_4304,
				((bool_t) 1));
		}
	}



/* gen-fun-with-args-rt4984 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt4984z00zzmsil_codez00(obj_t
		BgL_envz00_4305, obj_t BgL_funz00_4306, obj_t BgL_mez00_4307,
		obj_t BgL_argsz00_4308)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 256 */
			return
				BGl_genzd2funcallzd2zzmsil_codez00(BgL_mez00_4307, BgL_argsz00_4308,
				((bool_t) 0));
		}
	}



/* gen-fun-with-args-ta4982 */
	obj_t BGl_genzd2funzd2withzd2argszd2ta4982z00zzmsil_codez00(obj_t
		BgL_envz00_4309, obj_t BgL_funz00_4310, obj_t BgL_mez00_4311,
		obj_t BgL_argsz00_4312)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 253 */
			return
				BGl_genzd2funcallzd2zzmsil_codez00(BgL_mez00_4311, BgL_argsz00_4312,
				((bool_t) 1));
		}
	}



/* gen-fun-with-args-rt4980 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt4980z00zzmsil_codez00(obj_t
		BgL_envz00_4313, obj_t BgL_funz00_4314, obj_t BgL_mez00_4315,
		obj_t BgL_argsz00_4316)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 250 */
			return
				BGl_genzd2funcallzd2zzmsil_codez00(BgL_mez00_4315, BgL_argsz00_4316,
				((bool_t) 0));
		}
	}



/* gen-args-gen-fun-rtl4976 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl4976z00zzmsil_codez00(obj_t
		BgL_envz00_4317, obj_t BgL_funz00_4318, obj_t BgL_mez00_4319,
		obj_t BgL_argsz00_4320)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 234 */
			{
				BgL_rtl_ifnez00_bglt BgL_funz00_2536;

				obj_t BgL_mez00_2537;

				obj_t BgL_argsz00_2538;

				BgL_funz00_2536 = (BgL_rtl_ifnez00_bglt) (BgL_funz00_4318);
				BgL_mez00_2537 = BgL_mez00_4319;
				BgL_argsz00_2538 = BgL_argsz00_4320;
				{	/* SawMsil/code.scm 235 */
					obj_t BgL_argz00_2541;

					int BgL_labz00_2542;

					BgL_argz00_2541 = CAR(BgL_argsz00_2538);
					{	/* SawMsil/code.scm 235 */
						BgL_blockz00_bglt BgL_obj4652z00_3771;

						BgL_obj4652z00_3771 =
							(((BgL_rtl_ifnez00_bglt) CREF(BgL_funz00_2536))->BgL_thenz00);
						BgL_labz00_2542 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4652z00_3771))->BgL_labelz00);
					}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_2541,
							BGl_rtl_regz00zzsaw_defsz00))
						{	/* SawMsil/code.scm 236 */
							BGl_genzd2exprzd2zzmsil_codez00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2537), BgL_argz00_2541);
							return
								BGl_brtruez00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2537),
								BGl_string5647z00zzmsil_codez00, BINT(BgL_labz00_2542));
						}
					else
						{	/* SawMsil/code.scm 240 */
							BgL_rtl_funz00_bglt BgL_arg5394z00_2545;

							obj_t BgL_arg5396z00_2546;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_6193;

								BgL_auxz00_6193 = (BgL_rtl_insz00_bglt) (BgL_argz00_2541);
								BgL_arg5394z00_2545 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6193))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_6196;

								BgL_auxz00_6196 = (BgL_rtl_insz00_bglt) (BgL_argz00_2541);
								BgL_arg5396z00_2546 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6196))->BgL_argsz00);
							}
							{	/* SawMsil/code.scm 240 */
								obj_t BgL_method5050z00_3780;

								{	/* SawMsil/code.scm 240 */
									BgL_objectz00_bglt BgL_objz00_3781;

									BgL_objz00_3781 = (BgL_objectz00_bglt) (BgL_arg5394z00_2545);
									{	/* SawMsil/code.scm 240 */
										long BgL_objzd2classzd2numz00_3782;

										BgL_objzd2classzd2numz00_3782 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3781);
										{	/* SawMsil/code.scm 240 */
											obj_t BgL_arg2643z00_3783;

											BgL_arg2643z00_3783 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2predicatezd2envz00zzmsil_codez00,
												(int) (((long) 1)));
											{	/* SawMsil/code.scm 240 */
												obj_t BgL_arrayz00_3785;

												int BgL_offsetz00_3786;

												BgL_arrayz00_3785 = BgL_arg2643z00_3783;
												BgL_offsetz00_3786 =
													(int) (BgL_objzd2classzd2numz00_3782);
												{	/* SawMsil/code.scm 240 */
													long BgL_offsetz00_3787;

													BgL_offsetz00_3787 =
														((long) (BgL_offsetz00_3786) - OBJECT_TYPE);
													{	/* SawMsil/code.scm 240 */
														long BgL_modz00_3788;

														{	/* SawMsil/code.scm 240 */
															int BgL_arg2645z00_3789;

															BgL_arg2645z00_3789 = (int) (((long) 16));
															{	/* SawMsil/code.scm 240 */
																long BgL_auxz00_6207;

																BgL_auxz00_6207 = (long) (BgL_arg2645z00_3789);
																BgL_modz00_3788 =
																	(BgL_offsetz00_3787 / BgL_auxz00_6207);
														}}
														{	/* SawMsil/code.scm 240 */
															long BgL_restz00_3790;

															{	/* SawMsil/code.scm 240 */
																int BgL_arg2644z00_3791;

																BgL_arg2644z00_3791 = (int) (((long) 16));
																{	/* SawMsil/code.scm 240 */
																	long BgL_auxz00_6211;

																	BgL_auxz00_6211 =
																		(long) (BgL_arg2644z00_3791);
																	BgL_restz00_3790 =
																		(BgL_offsetz00_3787 % BgL_auxz00_6211);
															}}
															{	/* SawMsil/code.scm 240 */

																BgL_method5050z00_3780 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3785,
																		(int) (BgL_modz00_3788)),
																	(int) (BgL_restz00_3790));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method5050z00_3780)
									(BgL_method5050z00_3780, (obj_t) (BgL_arg5394z00_2545),
									BgL_mez00_2537, BgL_arg5396z00_2546, BTRUE,
									BINT(BgL_labz00_2542), BEOA);
							}
						}
				}
			}
		}
	}



/* gen-args-gen-fun-rtl4974 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl4974z00zzmsil_codez00(obj_t
		BgL_envz00_4321, obj_t BgL_funz00_4322, obj_t BgL_mez00_4323,
		obj_t BgL_argsz00_4324)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 226 */
			{
				BgL_rtl_ifeqz00_bglt BgL_funz00_2522;

				obj_t BgL_mez00_2523;

				obj_t BgL_argsz00_2524;

				BgL_funz00_2522 = (BgL_rtl_ifeqz00_bglt) (BgL_funz00_4322);
				BgL_mez00_2523 = BgL_mez00_4323;
				BgL_argsz00_2524 = BgL_argsz00_4324;
				{	/* SawMsil/code.scm 227 */
					obj_t BgL_argz00_2527;

					int BgL_labz00_2528;

					BgL_argz00_2527 = CAR(BgL_argsz00_2524);
					{	/* SawMsil/code.scm 227 */
						BgL_blockz00_bglt BgL_obj4652z00_3735;

						BgL_obj4652z00_3735 =
							(((BgL_rtl_ifeqz00_bglt) CREF(BgL_funz00_2522))->BgL_thenz00);
						BgL_labz00_2528 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4652z00_3735))->BgL_labelz00);
					}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_2527,
							BGl_rtl_regz00zzsaw_defsz00))
						{	/* SawMsil/code.scm 228 */
							BGl_genzd2exprzd2zzmsil_codez00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2523), BgL_argz00_2527);
							return
								BGl_brfalsez00zzmsil_outz00(
								(BgL_dotnetz00_bglt) (BgL_mez00_2523),
								BGl_string5647z00zzmsil_codez00, BINT(BgL_labz00_2528));
						}
					else
						{	/* SawMsil/code.scm 232 */
							BgL_rtl_funz00_bglt BgL_arg5389z00_2531;

							obj_t BgL_arg5390z00_2532;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_6233;

								BgL_auxz00_6233 = (BgL_rtl_insz00_bglt) (BgL_argz00_2527);
								BgL_arg5389z00_2531 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6233))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_6236;

								BgL_auxz00_6236 = (BgL_rtl_insz00_bglt) (BgL_argz00_2527);
								BgL_arg5390z00_2532 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6236))->BgL_argsz00);
							}
							{	/* SawMsil/code.scm 232 */
								obj_t BgL_method5050z00_3744;

								{	/* SawMsil/code.scm 232 */
									BgL_objectz00_bglt BgL_objz00_3745;

									BgL_objz00_3745 = (BgL_objectz00_bglt) (BgL_arg5389z00_2531);
									{	/* SawMsil/code.scm 232 */
										long BgL_objzd2classzd2numz00_3746;

										BgL_objzd2classzd2numz00_3746 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3745);
										{	/* SawMsil/code.scm 232 */
											obj_t BgL_arg2643z00_3747;

											BgL_arg2643z00_3747 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2predicatezd2envz00zzmsil_codez00,
												(int) (((long) 1)));
											{	/* SawMsil/code.scm 232 */
												obj_t BgL_arrayz00_3749;

												int BgL_offsetz00_3750;

												BgL_arrayz00_3749 = BgL_arg2643z00_3747;
												BgL_offsetz00_3750 =
													(int) (BgL_objzd2classzd2numz00_3746);
												{	/* SawMsil/code.scm 232 */
													long BgL_offsetz00_3751;

													BgL_offsetz00_3751 =
														((long) (BgL_offsetz00_3750) - OBJECT_TYPE);
													{	/* SawMsil/code.scm 232 */
														long BgL_modz00_3752;

														{	/* SawMsil/code.scm 232 */
															int BgL_arg2645z00_3753;

															BgL_arg2645z00_3753 = (int) (((long) 16));
															{	/* SawMsil/code.scm 232 */
																long BgL_auxz00_6247;

																BgL_auxz00_6247 = (long) (BgL_arg2645z00_3753);
																BgL_modz00_3752 =
																	(BgL_offsetz00_3751 / BgL_auxz00_6247);
														}}
														{	/* SawMsil/code.scm 232 */
															long BgL_restz00_3754;

															{	/* SawMsil/code.scm 232 */
																int BgL_arg2644z00_3755;

																BgL_arg2644z00_3755 = (int) (((long) 16));
																{	/* SawMsil/code.scm 232 */
																	long BgL_auxz00_6251;

																	BgL_auxz00_6251 =
																		(long) (BgL_arg2644z00_3755);
																	BgL_restz00_3754 =
																		(BgL_offsetz00_3751 % BgL_auxz00_6251);
															}}
															{	/* SawMsil/code.scm 232 */

																BgL_method5050z00_3744 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3749,
																		(int) (BgL_modz00_3752)),
																	(int) (BgL_restz00_3754));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method5050z00_3744)
									(BgL_method5050z00_3744, (obj_t) (BgL_arg5389z00_2531),
									BgL_mez00_2523, BgL_arg5390z00_2532, BFALSE,
									BINT(BgL_labz00_2528), BEOA);
							}
						}
				}
			}
		}
	}



/* gen-args-gen-fun-rtl4972 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl4972z00zzmsil_codez00(obj_t
		BgL_envz00_4325, obj_t BgL_funz00_4326, obj_t BgL_mez00_4327,
		obj_t BgL_argsz00_4328)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 220 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2512;

				obj_t BgL_mez00_2513;

				obj_t BgL_argsz00_2514;

				BgL_funz00_2512 = (BgL_rtl_callz00_bglt) (BgL_funz00_4326);
				BgL_mez00_2513 = BgL_mez00_4327;
				BgL_argsz00_2514 = BgL_argsz00_4328;
				{	/* SawMsil/code.scm 221 */
					obj_t BgL_rz00_2517;

					{	/* SawMsil/code.scm 221 */
						BgL_globalz00_bglt BgL_arg5386z00_2519;

						BgL_arg5386z00_2519 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2512))->BgL_varz00);
						BgL_rz00_2517 =
							BGl_inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(
							(BgL_dotnetz00_bglt) (BgL_mez00_2513), BgL_arg5386z00_2519,
							BgL_argsz00_2514);
					}
					if ((BgL_rz00_2517 == CNST_TABLE_REF(((long) 18))))
						{	/* SawMsil/code.scm 222 */
							return
								BGl_genzd2argszd2genzd2funzd2defaultz00zzmsil_codez00(
								(BgL_rtl_funz00_bglt) (BgL_funz00_2512), BgL_mez00_2513,
								BgL_argsz00_2514);
						}
					else
						{	/* SawMsil/code.scm 222 */
							return BgL_rz00_2517;
						}
				}
			}
		}
	}



/* gen-args-gen-fun-rtl4970 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl4970z00zzmsil_codez00(obj_t
		BgL_envz00_4329, obj_t BgL_funz00_4330, obj_t BgL_mez00_4331,
		obj_t BgL_argsz00_4332)
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 181 */
			{
				BgL_rtl_returnz00_bglt BgL_funz00_2503;

				obj_t BgL_mez00_2504;

				obj_t BgL_argsz00_2505;

				BgL_funz00_2503 = (BgL_rtl_returnz00_bglt) (BgL_funz00_4330);
				BgL_mez00_2504 = BgL_mez00_4331;
				BgL_argsz00_2505 = BgL_argsz00_4332;
				{	/* SawMsil/code.scm 182 */
					bool_t BgL_testz00_6272;

					if (CBOOL(BGl_za2dotnetzd2tailza2zd2zzengine_paramz00))
						{	/* SawMsil/code.scm 182 */
							if (BGl_za2hasprotectza2z00zzmsil_codez00)
								{	/* SawMsil/code.scm 182 */
									BgL_testz00_6272 = ((bool_t) 0);
								}
							else
								{	/* SawMsil/code.scm 182 */
									BgL_testz00_6272 = ((bool_t) 1);
								}
						}
					else
						{	/* SawMsil/code.scm 182 */
							BgL_testz00_6272 = ((bool_t) 0);
						}
					if (BgL_testz00_6272)
						{	/* SawMsil/code.scm 182 */
							BGl_patchzd2callzd2zzmsil_codez00(CAR(BgL_argsz00_2505));
						}
					else
						{	/* SawMsil/code.scm 182 */
							BFALSE;
						}
				}
				return
					BGl_genzd2argszd2genzd2funzd2defaultz00zzmsil_codez00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2503), BgL_mez00_2504,
					BgL_argsz00_2505);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_codez00()
	{
		AN_OBJECT;
		{	/* SawMsil/code.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzmsil_namesz00(((long) 484617828),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzmsil_outz00(((long) 112026228),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(((long) 279916369),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			BGl_modulezd2initializa7ationz75zzmsil_funcallz00(((long) 130083874),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
			return
				BGl_modulezd2initializa7ationz75zzmsil_inlinez00(((long) 124495278),
				BSTRING_TO_STRING(BGl_string5731z00zzmsil_codez00));
		}
	}

#ifdef __cplusplus
}
#endif
