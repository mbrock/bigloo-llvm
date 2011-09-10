/*===========================================================================*/
/*   (SawJvm/code.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/code.scm)*/
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
		obj_t BgL_idz00;
	}              *BgL_lregz00_bglt;

	typedef struct BgL_liveblockz00_bgl
	{
		obj_t BgL_inz00;
		obj_t BgL_outz00;
	}                   *BgL_liveblockz00_bglt;


	static obj_t BGl_liveblockz00zzsaw_jvm_codez00 = BUNSPEC;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_valloc5110z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_rtl_jumpexitz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static bool_t BGl_includez00zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_Lz00zzsaw_jvm_codez00(obj_t);
	static obj_t BGl_genzd2funzd2rtl_loadfun5100z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t
		BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_mov5071z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_flatz00zzsaw_jvm_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_genzd2funcallzd2zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_jumpexit5130z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl__genzd2funzd2zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	extern obj_t BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl__lregzd2nilzd2zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2withzd2argszd2rt5093z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2rt5095z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2withzd2argszd2rt5098z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	static BgL_blockz00_bglt BGl_livezd2initzd2zzsaw_jvm_codez00(obj_t);
	static obj_t BGl__lregzf3zf3zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_switch5087z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_genzd2funzd2rtl_isa5118z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_branchz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl__genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00 = BUNSPEC;
	static obj_t BGl_genzd2funzd2rtl_cast5120z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35683ze3z83zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_makeboxz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_exprz00zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_rtl_isaz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_codez00();
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t
		BGl_genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_boxset5128z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_check_funz00zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_genzd2funzd2rtl_vref5104z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2liveblockz80zzsaw_jvm_codez00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_localvarz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_nop5069z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t
		BGl_genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00
		(BgL_rtl_funz00_bglt, obj_t, obj_t);
	extern int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2lreg5148ze3zzsaw_jvm_codez00(obj_t,
		obj_t);
	extern obj_t BGl_newobjz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, BgL_typez00_bglt,
		obj_t, obj_t);
	static obj_t BGl__genzd2funzd2default5066z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__liveblockzf3zf3zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t
		BGl_genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00
		(BgL_rtl_funz00_bglt, obj_t, obj_t);
	extern obj_t BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	static obj_t BGl__liveblockzd2nilzd2zzsaw_jvm_codez00(obj_t);
	static obj_t BGl_genzd2funzd2rtl_globalre5079z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_vlength5108z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_livezd2argszd2zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	static obj_t BGl_lregz00zzsaw_jvm_codez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_regzd2ze3lregz31zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_cast_nul5122z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static BgL_liveblockz00_bglt BGl_liveblockzd2nilzd2zzsaw_jvm_codez00();
	static obj_t BGl_genzd2funzd2rtl_storeg5077z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_loadzd2fieldzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_protecte5136z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	extern obj_t BGl_rtl_protectedz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_loadg5075z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2predicatezd2rtl_ca5142z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static bool_t BGl_za2protectresultza2z00zzsaw_jvm_codez00;
	extern obj_t BGl_rtl_failz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00 = BUNSPEC;
	extern obj_t BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_tclassz00_bglt);
	static obj_t BGl_genzd2funzd2rtl_fail5132z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_getfield5114z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_objectzd2ze3structzd2liveb5144ze3zzsaw_jvm_codez00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5146z83zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec5150z83zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__genzd2exprzd2zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__modulezd2codezd2zzsaw_jvm_codez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_za2bexitregza2z00zzsaw_jvm_codez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2lregz80zzsaw_jvm_codez00(obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_genzd2funzd2rtl_vset5106z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00();
	static obj_t BGl_outzd2linezd2zzsaw_jvm_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_rtl_notseqz00zzsaw_defsz00;
	static bool_t BGl_zc3anonymousza35256ze3z83zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_loadzd2regzd2zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2rtl_protect5134z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_apply5102z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2rtl_setfield5116z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t BGl__genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 = BUNSPEC;
	static obj_t BGl_genzd2funzd2rtl_call5091z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2localszd2zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	static obj_t BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__genzd2predicatezd2zzsaw_jvm_codez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_genzd2funzd2rtl_go5085z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_livezd2argzd2zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_effectz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	static obj_t
		BGl_genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00 = BUNSPEC;
	static obj_t
		BGl_genzd2funzd2default5066z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza35584ze3z83zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_labelz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_doublez00zzsaw_jvm_codez00(obj_t);
	static obj_t BGl__genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_livezd2instrszd2zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static bool_t BGl_fixpointz00zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_storezd2fieldzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00;
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t, obj_t);
	extern obj_t BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_genzd2funzd2rtl_loadi5073z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_za2hasprotectza2z00zzsaw_jvm_codez00;
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static obj_t BGl_genzd2funzd2rtl_boxref5126z00zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl5081z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl5083z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl5089z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl5112z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00();
	static obj_t BGl_genzd2argszd2genzd2funzd2rtl5124z00zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_lregz00_bglt BGl_lregzd2nilzd2zzsaw_jvm_codez00();
	static bool_t BGl_livezd2fixzd2zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	static obj_t __cnst[108];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2argszd2genzd2predica5137zd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2argsza7d2ge5879z00,
		BGl__genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2funza7d2za7za7s5880z00, BGl__genzd2funzd2zzsaw_jvm_codez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2liveblockzd2envz52zzsaw_jvm_codez00,
		BgL_bgl__za752allocateza7d2l5881z00,
		BGl__z52allocatezd2liveblockz80zzsaw_jvm_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_lregzf3zd2envz21zzsaw_jvm_codez00,
		BgL_bgl__lregza7f3za7f3za7za7saw5882z00, BGl__lregzf3zf3zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_REAL(BGl_real5866z00zzsaw_jvm_codez00,
		BgL_bgl_real5866za700za7za7saw5883za7, 0.75);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2codezd2envz00zzsaw_jvm_codez00,
		BgL_bgl__moduleza7d2codeza7d5884z00, BGl__modulezd2codezd2zzsaw_jvm_codez00,
		0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_liveblockzd2nilzd2envz00zzsaw_jvm_codez00,
		BgL_bgl__liveblockza7d2nil5885za7, BGl__liveblockzd2nilzd2zzsaw_jvm_codez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2funzd2default5066zd2envzd2zzsaw_jvm_codez00,
		BgL_bgl__genza7d2funza7d2def5886z00,
		BGl__genzd2funzd2default5066z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_lregzd2nilzd2envz00zzsaw_jvm_codez00,
		BgL_bgl__lregza7d2nilza7d2za7za75887z00,
		BGl__lregzd2nilzd2zzsaw_jvm_codez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2funza7d2wit5888z00,
		BGl__genzd2funzd2withzd2argszd2zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2lregzd2envz52zzsaw_jvm_codez00,
		BgL_bgl__za752allocateza7d2l5889z00,
		BGl__z52allocatezd2lregz80zzsaw_jvm_codez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2argsza7d2ge5890z00,
		BGl__genzd2argszd2genzd2funzd2zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5823z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5891z00,
		BGl_genzd2funzd2rtl_nop5069z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5824z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5892z00,
		BGl_genzd2funzd2rtl_mov5071z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5825z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5893z00,
		BGl_genzd2funzd2rtl_loadi5073z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5826z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5894z00,
		BGl_genzd2funzd2rtl_loadg5075z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5827z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5895z00,
		BGl_genzd2funzd2rtl_storeg5077z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5828z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5896z00,
		BGl_genzd2funzd2rtl_globalre5079z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5830z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2argsza7d2gen5897z00,
		BGl_genzd2argszd2genzd2funzd2rtl5083z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5829z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2argsza7d2gen5898z00,
		BGl_genzd2argszd2genzd2funzd2rtl5081z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5831z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5899z00,
		BGl_genzd2funzd2rtl_go5085z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5832z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5900z00,
		BGl_genzd2funzd2rtl_switch5087z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5833z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2argsza7d2gen5901z00,
		BGl_genzd2argszd2genzd2funzd2rtl5089z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5834z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5902z00,
		BGl_genzd2funzd2rtl_call5091z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5835z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2with5903z00,
		BGl_genzd2funzd2withzd2argszd2rt5093z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5836z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2with5904z00,
		BGl_genzd2funzd2withzd2argszd2rt5095z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5837z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2with5905z00,
		BGl_genzd2funzd2withzd2argszd2rt5098z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5838z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5906z00,
		BGl_genzd2funzd2rtl_loadfun5100z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5840z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5907z00,
		BGl_genzd2funzd2rtl_vref5104z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5839z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5908z00,
		BGl_genzd2funzd2rtl_apply5102z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5841z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5909z00,
		BGl_genzd2funzd2rtl_vset5106z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5842z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5910z00,
		BGl_genzd2funzd2rtl_vlength5108z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5843z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5911z00,
		BGl_genzd2funzd2rtl_valloc5110z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5844z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2argsza7d2gen5912z00,
		BGl_genzd2argszd2genzd2funzd2rtl5112z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5845z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5913z00,
		BGl_genzd2funzd2rtl_getfield5114z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5846z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5914z00,
		BGl_genzd2funzd2rtl_setfield5116z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5847z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5915z00,
		BGl_genzd2funzd2rtl_isa5118z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5848z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5916z00,
		BGl_genzd2funzd2rtl_cast5120z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5850z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2argsza7d2gen5917z00,
		BGl_genzd2argszd2genzd2funzd2rtl5124z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5849z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5918z00,
		BGl_genzd2funzd2rtl_cast_nul5122z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2predicatezd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2predicate5919za7, BGl__genzd2predicatezd2zzsaw_jvm_codez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5851z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5920z00,
		BGl_genzd2funzd2rtl_boxref5126z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5852z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5921z00,
		BGl_genzd2funzd2rtl_boxset5128z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5853z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5922z00,
		BGl_genzd2funzd2rtl_jumpexit5130z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5854z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5923z00,
		BGl_genzd2funzd2rtl_fail5132z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5855z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5924z00,
		BGl_genzd2funzd2rtl_protect5134z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5856z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2funza7d2rtl_5925z00,
		BGl_genzd2funzd2rtl_protecte5136z00zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5857z00zzsaw_jvm_codez00,
		BgL_bgl_genza7d2predicateza75926z00,
		BGl_genzd2predicatezd2rtl_ca5142z00zzsaw_jvm_codez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5858z00zzsaw_jvm_codez00,
		BgL_bgl_objectza7d2za7e3stru5927z00,
		BGl_objectzd2ze3structzd2liveb5144ze3zzsaw_jvm_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5860z00zzsaw_jvm_codez00,
		BgL_bgl_structza7b2objectza75928z00,
		BGl_structzb2objectzd2ze3objec5146z83zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5862z00zzsaw_jvm_codez00,
		BgL_bgl_objectza7d2za7e3stru5929z00,
		BGl_objectzd2ze3structzd2lreg5148ze3zzsaw_jvm_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5863z00zzsaw_jvm_codez00,
		BgL_bgl_structza7b2objectza75930z00,
		BGl_structzb2objectzd2ze3objec5150z83zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5865z00zzsaw_jvm_codez00,
		BgL_bgl_za7c3anonymousza7a355931z00,
		BGl_zc3anonymousza35584ze3z83zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2predicatezd2defaul5139zd2envzd2zzsaw_jvm_codez00,
		BgL_bgl__genza7d2predicate5932za7,
		BGl__genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genzd2exprzd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2exprza7d2za7za75933z00,
		BGl__genzd2exprzd2zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5815z00zzsaw_jvm_codez00,
		BgL_bgl_string5815za700za7za7s5934za7, "P", 1);
	      DEFINE_STRING(BGl_string5816z00zzsaw_jvm_codez00,
		BgL_bgl_string5816za700za7za7s5935za7, "V", 1);
	      DEFINE_STRING(BGl_string5817z00zzsaw_jvm_codez00,
		BgL_bgl_string5817za700za7za7s5936za7, "gen-args-gen-fun", 16);
	      DEFINE_STRING(BGl_string5818z00zzsaw_jvm_codez00,
		BgL_bgl_string5818za700za7za7s5937za7, "gen-fun-with-args", 17);
	      DEFINE_STRING(BGl_string5820z00zzsaw_jvm_codez00,
		BgL_bgl_string5820za700za7za7s5938za7, "gen-args-gen-predicate", 22);
	      DEFINE_STRING(BGl_string5819z00zzsaw_jvm_codez00,
		BgL_bgl_string5819za700za7za7s5939za7, "gen-fun", 7);
	      DEFINE_STRING(BGl_string5821z00zzsaw_jvm_codez00,
		BgL_bgl_string5821za700za7za7s5940za7, "gen-predicate", 13);
	      DEFINE_STRING(BGl_string5822z00zzsaw_jvm_codez00,
		BgL_bgl_string5822za700za7za7s5941za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5859z00zzsaw_jvm_codez00,
		BgL_bgl_string5859za700za7za7s5942za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5861z00zzsaw_jvm_codez00,
		BgL_bgl_string5861za700za7za7s5943za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5864z00zzsaw_jvm_codez00,
		BgL_bgl_string5864za700za7za7s5944za7, "I", 1);
	      DEFINE_STRING(BGl_string5867z00zzsaw_jvm_codez00,
		BgL_bgl_string5867za700za7za7s5945za7, "L", 1);
	      DEFINE_STRING(BGl_string5868z00zzsaw_jvm_codez00,
		BgL_bgl_string5868za700za7za7s5946za7, "loadi", 5);
	      DEFINE_STRING(BGl_string5870z00zzsaw_jvm_codez00,
		BgL_bgl_string5870za700za7za7s5947za7, "saw_jvm_code", 12);
	      DEFINE_STRING(BGl_string5869z00zzsaw_jvm_codez00,
		BgL_bgl_string5869za700za7za7s5948za7, "bad atom value", 14);
	      DEFINE_STRING(BGl_string5871z00zzsaw_jvm_codez00,
		BgL_bgl_string5871za700za7za7s5949za7,
		"(invokespecial init_bucs2) (new bucs2) (getstatic *key*) (getstatic *rest*) (getstatic *optional*) (getstatic *eof*) (invokestatic getbytes) getstatic putstatic (putfield procindex) (invokespecial init) (new me) tableswitch lookupswitch if_icmpne else (dreturn) (freturn) (lreturn) (ireturn) (return) void (aaload) (daload) (faload) (laload) (iaload) (saload) (caload) (baload) (aastore) (dastore) (fastore) (lastore) (iastore) (sastore) (castore) (bastore) (arraylength) anewarray newarray goto instanceof checkcast obj aconst_null fconst_0 (invokespecial init_cell) (dup) (new cell) (getfield ccar) (putfield ccar) (checkcast throwable) (invokestatic jumpexit) (athrow) (invokestatic fail) (invokestatic setexit) ok not-inlined ifeq ifne gen-fun-default5066 liveblock lreg (invokevirtual pfuncall4) (invokevirtual pfuncall3) (invokevirtual pfuncall2) (invokevirtual pfuncall1) (invokevirtual pfuncall0) (invokevirtual papply) (invokestatic cons) (getstatic *nil*) line location astore dstore fstore lstore istore aload dlo"
		"ad fload float lload iload int short char byte boolean from (pop) (pop2) (getstatic *unspecified*) no-value _ long double (invokestatic java_exception_handler) catch2 (areturn) (invokestatic debug_handler) (checkcast exit) catch end begin (handler from catch catch2 throwable) (handler from catch catch bexception) ",
		1339);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_liveblockzf3zd2envz21zzsaw_jvm_codez00,
		BgL_bgl__liveblockza7f3za7f35950z00, BGl__liveblockzf3zf3zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
		BgL_bgl__genza7d2argsza7d2ge5951z00,
		BGl__genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2argszd2genzd2funzd2def5062zd2envzd2zzsaw_jvm_codez00,
		BgL_bgl__genza7d2argsza7d2ge5952z00,
		BGl__genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2funzd2withzd2argszd2de5064zd2envzd2zzsaw_jvm_codez00,
		BgL_bgl__genza7d2funza7d2wit5953z00,
		BGl__genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long
		BgL_checksumz00_4487, char *BgL_fromz00_4488)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00();
					BGl_cnstzd2initzd2zzsaw_jvm_codez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00();
					BGl_objectzd2initzd2zzsaw_jvm_codez00();
					BGl_genericzd2initzd2zzsaw_jvm_codez00();
					BGl_methodzd2initzd2zzsaw_jvm_codez00();
					BGl_toplevelzd2initzd2zzsaw_jvm_codez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_jvm_code");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			{	/* SawJvm/code.scm 1 */
				obj_t BgL_cportz00_4451;

				BgL_cportz00_4451 =
					bgl_open_input_string(BGl_string5871z00zzsaw_jvm_codez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4452;

					BgL_iz00_4452 = ((long) 107);
				BgL_loopz00_4453:
					if ((BgL_iz00_4452 == ((long) -1)))
						{	/* SawJvm/code.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/code.scm 1 */
							{	/* SawJvm/code.scm 1 */
								obj_t BgL_arg5873z00_4455;

								{	/* SawJvm/code.scm 1 */

									{	/* SawJvm/code.scm 1 */
										obj_t BgL_locationz00_4457;

										BgL_locationz00_4457 = BBOOL(((bool_t) 0));
										{	/* SawJvm/code.scm 1 */

											BgL_arg5873z00_4455 =
												BGl_readz00zz__readerz00(BgL_cportz00_4451,
												BgL_locationz00_4457);
										}
									}
								}
								{	/* SawJvm/code.scm 1 */
									int BgL_auxz00_4514;

									BgL_auxz00_4514 = (int) (BgL_iz00_4452);
									CNST_TABLE_SET(BgL_auxz00_4514, BgL_arg5873z00_4455);
							}}
							{	/* SawJvm/code.scm 1 */
								int BgL_auxz00_4458;

								BgL_auxz00_4458 = (int) ((BgL_iz00_4452 - ((long) 1)));
								{
									long BgL_iz00_4519;

									BgL_iz00_4519 = (long) (BgL_auxz00_4458);
									BgL_iz00_4452 = BgL_iz00_4519;
									goto BgL_loopz00_4453;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			BGl_za2protectresultza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			BGl_za2bexitregza2z00zzsaw_jvm_codez00 = BFALSE;
			BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 = BINT(((long) -1));
			return BUNSPEC;
		}
	}



/* module-code */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt
		BgL_mez00_15, obj_t BgL_paramsz00_16, obj_t BgL_lz00_17)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 44 */
			{	/* SawJvm/code.scm 45 */
				obj_t BgL_locsz00_1550;

				BgL_locsz00_1550 =
					BGl_getzd2localszd2zzsaw_jvm_codez00(BgL_paramsz00_16, BgL_lz00_17);
				BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_15,
					BGl_doublez00zzsaw_jvm_codez00(BgL_paramsz00_16),
					BGl_doublez00zzsaw_jvm_codez00(BgL_locsz00_1550));
			}
			if (BGl_za2hasprotectza2z00zzsaw_jvm_codez00)
				{	/* SawJvm/code.scm 55 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 0)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* SawJvm/code.scm 55 */
					BFALSE;
				}
			{	/* SawJvm/code.scm 60 */
				obj_t BgL_pendingz00_1568;

				BgL_pendingz00_1568 = BUNSPEC;
				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 61 */
						BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_15,
							CNST_TABLE_REF(((long) 2)));
						{
							obj_t BgL_l4993z00_1570;

							BgL_l4993z00_1570 = BgL_lz00_17;
						BgL_zc3anonymousza35171ze3z83_1571:
							if (PAIRP(BgL_l4993z00_1570))
								{	/* SawJvm/code.scm 63 */
									BGl_livezd2initzd2zzsaw_jvm_codez00(CAR(BgL_l4993z00_1570));
									{
										obj_t BgL_l4993z00_4539;

										BgL_l4993z00_4539 = CDR(BgL_l4993z00_1570);
										BgL_l4993z00_1570 = BgL_l4993z00_4539;
										goto BgL_zc3anonymousza35171ze3z83_1571;
									}
								}
							else
								{	/* SawJvm/code.scm 63 */
									((bool_t) 1);
								}
						}
						{
							obj_t BgL_l4995z00_1577;

							BgL_l4995z00_1577 = BgL_lz00_17;
						BgL_zc3anonymousza35175ze3z83_1578:
							if (PAIRP(BgL_l4995z00_1577))
								{	/* SawJvm/code.scm 64 */
									BGl_livezd2fixzd2zzsaw_jvm_codez00(CAR(BgL_l4995z00_1577));
									{
										obj_t BgL_l4995z00_4545;

										BgL_l4995z00_4545 = CDR(BgL_l4995z00_1577);
										BgL_l4995z00_1577 = BgL_l4995z00_4545;
										goto BgL_zc3anonymousza35175ze3z83_1578;
									}
								}
							else
								{	/* SawJvm/code.scm 64 */
									((bool_t) 1);
								}
						}
						if (NULLP(BgL_paramsz00_16))
							{	/* SawJvm/code.scm 65 */
								BgL_pendingz00_1568 = BNIL;
							}
						else
							{	/* SawJvm/code.scm 65 */
								obj_t BgL_head4999z00_1585;

								BgL_head4999z00_1585 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l4997z00_1587;

									obj_t BgL_tail5000z00_1588;

									BgL_l4997z00_1587 = BgL_paramsz00_16;
									BgL_tail5000z00_1588 = BgL_head4999z00_1585;
								BgL_zc3anonymousza35180ze3z83_1589:
									if (NULLP(BgL_l4997z00_1587))
										{	/* SawJvm/code.scm 65 */
											BgL_pendingz00_1568 = CDR(BgL_head4999z00_1585);
										}
									else
										{	/* SawJvm/code.scm 65 */
											obj_t BgL_newtail5001z00_1591;

											{	/* SawJvm/code.scm 65 */
												obj_t BgL_arg5183z00_1593;

												{	/* SawJvm/code.scm 65 */
													obj_t BgL_pz00_1595;

													BgL_pz00_1595 = CAR(BgL_l4997z00_1587);
													BgL_arg5183z00_1593 =
														MAKE_PAIR(BgL_pz00_1595,
														CNST_TABLE_REF(((long) 2)));
												}
												BgL_newtail5001z00_1591 =
													MAKE_PAIR(BgL_arg5183z00_1593, BNIL);
											}
											SET_CDR(BgL_tail5000z00_1588, BgL_newtail5001z00_1591);
											{
												obj_t BgL_tail5000z00_4560;

												obj_t BgL_l4997z00_4558;

												BgL_l4997z00_4558 = CDR(BgL_l4997z00_1587);
												BgL_tail5000z00_4560 = BgL_newtail5001z00_1591;
												BgL_tail5000z00_1588 = BgL_tail5000z00_4560;
												BgL_l4997z00_1587 = BgL_l4997z00_4558;
												goto BgL_zc3anonymousza35180ze3z83_1589;
											}
										}
								}
							}
					}
				else
					{	/* SawJvm/code.scm 61 */
						BFALSE;
					}
				{
					obj_t BgL_l5005z00_1598;

					BgL_l5005z00_1598 = BgL_lz00_17;
				BgL_zc3anonymousza35185ze3z83_1599:
					if (PAIRP(BgL_l5005z00_1598))
						{	/* SawJvm/code.scm 66 */
							{	/* SawJvm/code.scm 70 */
								obj_t BgL_bz00_1601;

								BgL_bz00_1601 = CAR(BgL_l5005z00_1598);
								{	/* SawJvm/code.scm 67 */
									int BgL_arg5187z00_1602;

									{
										BgL_blockz00_bglt BgL_auxz00_4564;

										BgL_auxz00_4564 = (BgL_blockz00_bglt) (BgL_bz00_1601);
										BgL_arg5187z00_1602 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_4564))->
											BgL_labelz00);
									}
									BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_15,
										BINT(BgL_arg5187z00_1602));
								}
								if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
									{	/* SawJvm/code.scm 68 */
										BgL_pendingz00_1568 =
											BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_mez00_15,
											BgL_bz00_1601, BgL_pendingz00_1568);
									}
								else
									{	/* SawJvm/code.scm 68 */
										BFALSE;
									}
								{	/* SawJvm/code.scm 69 */
									obj_t BgL_g5004z00_1603;

									{
										BgL_blockz00_bglt BgL_auxz00_4572;

										BgL_auxz00_4572 = (BgL_blockz00_bglt) (BgL_bz00_1601);
										BgL_g5004z00_1603 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_4572))->
											BgL_firstz00);
									}
									{
										obj_t BgL_l5002z00_1605;

										BgL_l5002z00_1605 = BgL_g5004z00_1603;
									BgL_zc3anonymousza35188ze3z83_1606:
										if (PAIRP(BgL_l5002z00_1605))
											{	/* SawJvm/code.scm 70 */
												{	/* SawJvm/code.scm 69 */
													obj_t BgL_iz00_1608;

													BgL_iz00_1608 = CAR(BgL_l5002z00_1605);
													BgL_pendingz00_1568 =
														BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_mez00_15,
														BgL_iz00_1608, BgL_pendingz00_1568);
												}
												{
													obj_t BgL_l5002z00_4579;

													BgL_l5002z00_4579 = CDR(BgL_l5002z00_1605);
													BgL_l5002z00_1605 = BgL_l5002z00_4579;
													goto BgL_zc3anonymousza35188ze3z83_1606;
												}
											}
										else
											{	/* SawJvm/code.scm 70 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l5005z00_4581;

								BgL_l5005z00_4581 = CDR(BgL_l5005z00_1598);
								BgL_l5005z00_1598 = BgL_l5005z00_4581;
								goto BgL_zc3anonymousza35185ze3z83_1599;
							}
						}
					else
						{	/* SawJvm/code.scm 66 */
							((bool_t) 1);
						}
				}
				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 72 */
						BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_15,
							CNST_TABLE_REF(((long) 3)));
						{
							obj_t BgL_l5007z00_1614;

							BgL_l5007z00_1614 = BgL_pendingz00_1568;
						BgL_zc3anonymousza35192ze3z83_1615:
							if (PAIRP(BgL_l5007z00_1614))
								{	/* SawJvm/code.scm 74 */
									{	/* SawJvm/code.scm 74 */
										obj_t BgL_pz00_1617;

										BgL_pz00_1617 = CAR(BgL_l5007z00_1614);
										{	/* SawJvm/code.scm 74 */
											obj_t BgL_arg5194z00_1618;

											obj_t BgL_arg5195z00_1619;

											obj_t BgL_arg5196z00_1620;

											BgL_arg5194z00_1618 = CAR(BgL_pz00_1617);
											BgL_arg5195z00_1619 = CDR(BgL_pz00_1617);
											BgL_arg5196z00_1620 = CNST_TABLE_REF(((long) 3));
											{	/* SawJvm/code.scm 74 */
												obj_t BgL_arg5291z00_3247;

												{	/* SawJvm/code.scm 74 */
													BgL_lregz00_bglt BgL_obj4881z00_3248;

													BgL_obj4881z00_3248 =
														(BgL_lregz00_bglt) (BgL_arg5194z00_1618);
													{
														obj_t BgL_auxz00_4594;

														{	/* SawJvm/code.scm 74 */
															BgL_objectz00_bglt BgL_auxz00_4595;

															BgL_auxz00_4595 =
																(BgL_objectz00_bglt) (BgL_obj4881z00_3248);
															BgL_auxz00_4594 =
																BGL_OBJECT_WIDENING(BgL_auxz00_4595);
														}
														BgL_arg5291z00_3247 =
															(((BgL_lregz00_bglt) CREF(BgL_auxz00_4594))->
															BgL_idz00);
												}}
												BGl_localvarz00zzsaw_jvm_outz00(BgL_mez00_15,
													BgL_arg5194z00_1618, BgL_arg5195z00_1619,
													BgL_arg5196z00_1620, BgL_arg5291z00_3247);
									}}}
									{
										obj_t BgL_l5007z00_4600;

										BgL_l5007z00_4600 = CDR(BgL_l5007z00_1614);
										BgL_l5007z00_1614 = BgL_l5007z00_4600;
										goto BgL_zc3anonymousza35192ze3z83_1615;
									}
								}
							else
								{	/* SawJvm/code.scm 74 */
									((bool_t) 1);
								}
						}
					}
				else
					{	/* SawJvm/code.scm 72 */
						((bool_t) 0);
					}
			}
			if (BGl_za2hasprotectza2z00zzsaw_jvm_codez00)
				{	/* SawJvm/code.scm 77 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 4)));
					BGl_loadzd2regzd2zzsaw_jvm_codez00(
						(obj_t) (BgL_mez00_15), BGl_za2bexitregza2z00zzsaw_jvm_codez00);
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 5)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 6)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 7)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 8)));
					BGl_loadzd2regzd2zzsaw_jvm_codez00(
						(obj_t) (BgL_mez00_15), BGl_za2bexitregza2z00zzsaw_jvm_codez00);
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 5)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 9)));
					return
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 7)));
				}
			else
				{	/* SawJvm/code.scm 77 */
					return BFALSE;
				}
		}
	}



/* double */
	obj_t BGl_doublez00zzsaw_jvm_codez00(obj_t BgL_lz00_1554)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 53 */
			if (NULLP(BgL_lz00_1554))
				{	/* SawJvm/code.scm 47 */
					return BgL_lz00_1554;
				}
			else
				{	/* SawJvm/code.scm 49 */
					obj_t BgL_regz00_1557;

					obj_t BgL_rz00_1558;

					BgL_regz00_1557 = CAR(BgL_lz00_1554);
					BgL_rz00_1558 = BGl_doublez00zzsaw_jvm_codez00(CDR(BgL_lz00_1554));
					{	/* SawJvm/code.scm 50 */
						obj_t BgL_typez00_1559;

						{	/* SawJvm/code.scm 50 */
							BgL_typez00_bglt BgL_obj1509z00_3210;

							{
								BgL_rtl_regz00_bglt BgL_auxz00_4628;

								BgL_auxz00_4628 = (BgL_rtl_regz00_bglt) (BgL_regz00_1557);
								BgL_obj1509z00_3210 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_4628))->BgL_typez00);
							}
							BgL_typez00_1559 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_3210))->BgL_namez00);
						}
						{	/* SawJvm/code.scm 51 */
							bool_t BgL_testz00_4632;

							if ((BgL_typez00_1559 == CNST_TABLE_REF(((long) 10))))
								{	/* SawJvm/code.scm 51 */
									BgL_testz00_4632 = ((bool_t) 1);
								}
							else
								{	/* SawJvm/code.scm 51 */
									BgL_testz00_4632 =
										(BgL_typez00_1559 == CNST_TABLE_REF(((long) 11)));
								}
							if (BgL_testz00_4632)
								{	/* SawJvm/code.scm 52 */
									obj_t BgL_arg5165z00_1561;

									obj_t BgL_arg5166z00_1562;

									{	/* SawJvm/code.scm 52 */
										BgL_lregz00_bglt BgL_obj4881z00_3211;

										BgL_obj4881z00_3211 = (BgL_lregz00_bglt) (BgL_regz00_1557);
										{
											obj_t BgL_auxz00_4639;

											{	/* SawJvm/code.scm 52 */
												BgL_objectz00_bglt BgL_auxz00_4640;

												BgL_auxz00_4640 =
													(BgL_objectz00_bglt) (BgL_obj4881z00_3211);
												BgL_auxz00_4639 = BGL_OBJECT_WIDENING(BgL_auxz00_4640);
											}
											BgL_arg5165z00_1561 =
												(((BgL_lregz00_bglt) CREF(BgL_auxz00_4639))->BgL_idz00);
										}
									}
									BgL_arg5166z00_1562 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 12)), BgL_rz00_1558);
									return MAKE_PAIR(BgL_arg5165z00_1561, BgL_arg5166z00_1562);
								}
							else
								{	/* SawJvm/code.scm 53 */
									obj_t BgL_arg5167z00_1563;

									{	/* SawJvm/code.scm 53 */
										BgL_lregz00_bglt BgL_obj4881z00_3212;

										BgL_obj4881z00_3212 = (BgL_lregz00_bglt) (BgL_regz00_1557);
										{
											obj_t BgL_auxz00_4648;

											{	/* SawJvm/code.scm 53 */
												BgL_objectz00_bglt BgL_auxz00_4649;

												BgL_auxz00_4649 =
													(BgL_objectz00_bglt) (BgL_obj4881z00_3212);
												BgL_auxz00_4648 = BGL_OBJECT_WIDENING(BgL_auxz00_4649);
											}
											BgL_arg5167z00_1563 =
												(((BgL_lregz00_bglt) CREF(BgL_auxz00_4648))->BgL_idz00);
										}
									}
									return MAKE_PAIR(BgL_arg5167z00_1563, BgL_rz00_1558);
								}
						}
					}
				}
		}
	}



/* _module-code */
	obj_t BGl__modulezd2codezd2zzsaw_jvm_codez00(obj_t BgL_envz00_4204,
		obj_t BgL_mez00_4205, obj_t BgL_paramsz00_4206, obj_t BgL_lz00_4207)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 44 */
			return
				BGl_modulezd2codezd2zzsaw_jvm_codez00(
				(BgL_jvmz00_bglt) (BgL_mez00_4205), BgL_paramsz00_4206, BgL_lz00_4207);
		}
	}



/* get-locals */
	obj_t BGl_getzd2localszd2zzsaw_jvm_codez00(obj_t BgL_paramsz00_18,
		obj_t BgL_lz00_19)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 94 */
			BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			{	/* SawJvm/code.scm 96 */
				obj_t BgL_nz00_1623;

				obj_t BgL_regsz00_1624;

				{	/* SawJvm/code.scm 96 */
					obj_t BgL_cellvalz00_4656;

					BgL_cellvalz00_4656 = BINT(((long) 0));
					BgL_nz00_1623 = MAKE_CELL(BgL_cellvalz00_4656);
				}
				BgL_regsz00_1624 = MAKE_CELL(BNIL);
				{
					obj_t BgL_ez00_1693;

					{
						obj_t BgL_lz00_1632;

						BgL_lz00_1632 = BgL_paramsz00_18;
					BgL_zc3anonymousza35198ze3z83_1633:
						if (NULLP(BgL_lz00_1632))
							{	/* SawJvm/code.scm 132 */
								((bool_t) 0);
							}
						else
							{	/* SawJvm/code.scm 132 */
								{	/* SawJvm/code.scm 133 */
									BgL_rtl_regz00_bglt BgL_obj4944z00_1635;

									BgL_obj4944z00_1635 =
										((BgL_rtl_regz00_bglt)
										(BgL_rtl_regz00_bglt) (CAR(BgL_lz00_1632)));
									{	/* SawJvm/code.scm 133 */
										BgL_lregz00_bglt BgL_arg5200z00_1636;

										{	/* SawJvm/code.scm 133 */
											obj_t BgL_arg5201z00_1637;

											{	/* SawJvm/code.scm 133 */
												long BgL_nz00_3253;

												BgL_nz00_3253 = (long) CINT(CELL_REF(BgL_nz00_1623));
												{	/* SawJvm/code.scm 133 */
													obj_t BgL_arg5212z00_3254;

													{	/* SawJvm/code.scm 133 */
														obj_t BgL_arg5213z00_3255;

														{	/* SawJvm/code.scm 133 */

															BgL_arg5213z00_3255 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(BgL_nz00_3253, ((long) 10));
														}
														BgL_arg5212z00_3254 =
															string_append(BGl_string5815z00zzsaw_jvm_codez00,
															BgL_arg5213z00_3255);
													}
													BgL_arg5201z00_1637 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg5212z00_3254));
											}}
											{	/* SawJvm/code.scm 133 */
												BgL_lregz00_bglt BgL_res5762z00_3265;

												{	/* SawJvm/code.scm 133 */
													BgL_lregz00_bglt BgL_new4858z00_3260;

													BgL_new4858z00_3260 =
														((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_lregz00_bgl))));
													{	/* SawJvm/code.scm 133 */
														BgL_lregz00_bglt BgL_res5761z00_3264;

														{	/* SawJvm/code.scm 133 */
															BgL_lregz00_bglt BgL_new4870z00_3261;

															BgL_new4870z00_3261 = BgL_new4858z00_3260;
															{	/* SawJvm/code.scm 133 */
																obj_t BgL_id4869z00_3263;

																BgL_id4869z00_3263 = BgL_arg5201z00_1637;
																((((BgL_lregz00_bglt)
																			CREF(BgL_new4870z00_3261))->BgL_idz00) =
																	((obj_t) BgL_id4869z00_3263), BUNSPEC);
																BgL_res5761z00_3264 = BgL_new4870z00_3261;
														}} BgL_res5761z00_3264;
													}
													BgL_res5762z00_3265 = BgL_new4858z00_3260;
												}
												BgL_arg5200z00_1636 = BgL_res5762z00_3265;
										}}
										{	/* SawJvm/code.scm 133 */
											obj_t BgL_auxz00_4672;

											BgL_objectz00_bglt BgL_auxz00_4670;

											BgL_auxz00_4672 = (obj_t) (BgL_arg5200z00_1636);
											BgL_auxz00_4670 =
												(BgL_objectz00_bglt) (BgL_obj4944z00_1635);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_4670, BgL_auxz00_4672);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4944z00_1635),
										BGl_classzd2numzd2zz__objectz00
										(BGl_lregz00zzsaw_jvm_codez00));
									BgL_obj4944z00_1635;
								}
								{	/* SawJvm/code.scm 134 */
									obj_t BgL_auxz00_4449;

									BgL_auxz00_4449 =
										BINT(((long) CINT(CELL_REF(BgL_nz00_1623)) + ((long) 1)));
									CELL_SET(BgL_nz00_1623, BgL_auxz00_4449);
								}
								{
									obj_t BgL_lz00_4681;

									BgL_lz00_4681 = CDR(BgL_lz00_1632);
									BgL_lz00_1632 = BgL_lz00_4681;
									goto BgL_zc3anonymousza35198ze3z83_1633;
								}
							}
					}
					{
						obj_t BgL_l5018z00_1642;

						BgL_l5018z00_1642 = BgL_lz00_19;
					BgL_zc3anonymousza35204ze3z83_1643:
						if (PAIRP(BgL_l5018z00_1642))
							{	/* SawJvm/code.scm 136 */
								{	/* SawJvm/code.scm 136 */
									obj_t BgL_bz00_1645;

									BgL_bz00_1645 = CAR(BgL_l5018z00_1642);
									{	/* SawJvm/code.scm 136 */
										obj_t BgL_g5017z00_1646;

										{
											BgL_blockz00_bglt BgL_auxz00_4686;

											BgL_auxz00_4686 = (BgL_blockz00_bglt) (BgL_bz00_1645);
											BgL_g5017z00_1646 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_4686))->
												BgL_firstz00);
										}
										{
											obj_t BgL_l5015z00_1648;

											BgL_l5015z00_1648 = BgL_g5017z00_1646;
										BgL_zc3anonymousza35206ze3z83_1649:
											if (PAIRP(BgL_l5015z00_1648))
												{	/* SawJvm/code.scm 136 */
													BgL_ez00_1693 = CAR(BgL_l5015z00_1648);
													{	/* SawJvm/code.scm 127 */
														obj_t BgL_destz00_1695;

														{
															BgL_rtl_insz00_bglt BgL_auxz00_4691;

															BgL_auxz00_4691 =
																(BgL_rtl_insz00_bglt) (BgL_ez00_1693);
															BgL_destz00_1695 =
																(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4691))->
																BgL_destz00);
														}
														if (CBOOL(BgL_destz00_1695))
															{	/* SawJvm/code.scm 128 */
																BGl_regzd2ze3lregz31zzsaw_jvm_codez00
																	(BgL_regsz00_1624, BgL_nz00_1623,
																	BgL_destz00_1695);
															}
														else
															{	/* SawJvm/code.scm 128 */
																BFALSE;
															}
														BGl_check_funz00zzsaw_jvm_codez00(BgL_ez00_1693);
														{	/* SawJvm/code.scm 130 */
															obj_t BgL_g5014z00_1696;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_4698;

																BgL_auxz00_4698 =
																	(BgL_rtl_insz00_bglt) (BgL_ez00_1693);
																BgL_g5014z00_1696 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_4698))->BgL_argsz00);
															}
															{
																obj_t BgL_l5012z00_1698;

																BgL_l5012z00_1698 = BgL_g5014z00_1696;
															BgL_zc3anonymousza35231ze3z83_1699:
																if (PAIRP(BgL_l5012z00_1698))
																	{	/* SawJvm/code.scm 130 */
																		BGl_exprz00zzsaw_jvm_codez00
																			(BgL_regsz00_1624, BgL_nz00_1623,
																			CAR(BgL_l5012z00_1698));
																		{
																			obj_t BgL_l5012z00_4705;

																			BgL_l5012z00_4705 =
																				CDR(BgL_l5012z00_1698);
																			BgL_l5012z00_1698 = BgL_l5012z00_4705;
																			goto BgL_zc3anonymousza35231ze3z83_1699;
																		}
																	}
																else
																	{	/* SawJvm/code.scm 130 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l5015z00_4708;

														BgL_l5015z00_4708 = CDR(BgL_l5015z00_1648);
														BgL_l5015z00_1648 = BgL_l5015z00_4708;
														goto BgL_zc3anonymousza35206ze3z83_1649;
													}
												}
											else
												{	/* SawJvm/code.scm 136 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l5018z00_4710;

									BgL_l5018z00_4710 = CDR(BgL_l5018z00_1642);
									BgL_l5018z00_1642 = BgL_l5018z00_4710;
									goto BgL_zc3anonymousza35204ze3z83_1643;
								}
							}
						else
							{	/* SawJvm/code.scm 136 */
								((bool_t) 1);
							}
					}
					return bgl_reverse_bang(CELL_REF(BgL_regsz00_1624));
				}
			}
		}
	}



/* reg->lreg */
	obj_t BGl_regzd2ze3lregz31zzsaw_jvm_codez00(obj_t BgL_regsz00_4444,
		obj_t BgL_nz00_4443, obj_t BgL_rz00_1663)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 104 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_rz00_1663,
					BGl_lregz00zzsaw_jvm_codez00))
				{	/* SawJvm/code.scm 101 */
					return BFALSE;
				}
			else
				{	/* SawJvm/code.scm 101 */
					{	/* SawJvm/code.scm 102 */
						BgL_rtl_regz00_bglt BgL_obj4941z00_1666;

						BgL_obj4941z00_1666 =
							((BgL_rtl_regz00_bglt) (BgL_rtl_regz00_bglt) (BgL_rz00_1663));
						{	/* SawJvm/code.scm 102 */
							BgL_lregz00_bglt BgL_arg5216z00_1667;

							{	/* SawJvm/code.scm 102 */
								obj_t BgL_arg5217z00_1668;

								{	/* SawJvm/code.scm 102 */
									long BgL_nz00_3285;

									BgL_nz00_3285 = (long) CINT(CELL_REF(BgL_nz00_4443));
									{	/* SawJvm/code.scm 102 */
										obj_t BgL_arg5212z00_3286;

										{	/* SawJvm/code.scm 102 */
											obj_t BgL_arg5213z00_3287;

											{	/* SawJvm/code.scm 102 */

												BgL_arg5213z00_3287 =
													BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
													(BgL_nz00_3285, ((long) 10));
											}
											BgL_arg5212z00_3286 =
												string_append(BGl_string5816z00zzsaw_jvm_codez00,
												BgL_arg5213z00_3287);
										}
										BgL_arg5217z00_1668 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg5212z00_3286));
								}}
								{	/* SawJvm/code.scm 102 */
									BgL_lregz00_bglt BgL_res5764z00_3297;

									{	/* SawJvm/code.scm 102 */
										BgL_lregz00_bglt BgL_new4858z00_3292;

										BgL_new4858z00_3292 =
											((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_lregz00_bgl))));
										{	/* SawJvm/code.scm 102 */
											BgL_lregz00_bglt BgL_res5763z00_3296;

											{	/* SawJvm/code.scm 102 */
												BgL_lregz00_bglt BgL_new4870z00_3293;

												BgL_new4870z00_3293 = BgL_new4858z00_3292;
												{	/* SawJvm/code.scm 102 */
													obj_t BgL_id4869z00_3295;

													BgL_id4869z00_3295 = BgL_arg5217z00_1668;
													((((BgL_lregz00_bglt) CREF(BgL_new4870z00_3293))->
															BgL_idz00) =
														((obj_t) BgL_id4869z00_3295), BUNSPEC);
													BgL_res5763z00_3296 = BgL_new4870z00_3293;
											}} BgL_res5763z00_3296;
										}
										BgL_res5764z00_3297 = BgL_new4858z00_3292;
									}
									BgL_arg5216z00_1667 = BgL_res5764z00_3297;
							}}
							{	/* SawJvm/code.scm 102 */
								obj_t BgL_auxz00_4726;

								BgL_objectz00_bglt BgL_auxz00_4724;

								BgL_auxz00_4726 = (obj_t) (BgL_arg5216z00_1667);
								BgL_auxz00_4724 = (BgL_objectz00_bglt) (BgL_obj4941z00_1666);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4724, BgL_auxz00_4726);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4941z00_1666),
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzsaw_jvm_codez00));
						BgL_obj4941z00_1666;
					}
					{	/* SawJvm/code.scm 103 */
						obj_t BgL_auxz00_4445;

						{	/* SawJvm/code.scm 103 */
							long BgL_za71za7_3300;

							BgL_za71za7_3300 = (long) CINT(CELL_REF(BgL_nz00_4443));
							BgL_auxz00_4445 = BINT((BgL_za71za7_3300 + ((long) 1)));
						}
						CELL_SET(BgL_nz00_4443, BgL_auxz00_4445);
					}
					{	/* SawJvm/code.scm 104 */
						obj_t BgL_auxz00_4446;

						BgL_auxz00_4446 =
							MAKE_PAIR(BgL_rz00_1663, CELL_REF(BgL_regsz00_4444));
						return CELL_SET(BgL_regsz00_4444, BgL_auxz00_4446);
					}
				}
		}
	}



/* check_fun */
	obj_t BGl_check_funz00zzsaw_jvm_codez00(obj_t BgL_ez00_1677)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 120 */
			{	/* SawJvm/code.scm 115 */
				BgL_rtl_funz00_bglt BgL_funz00_1679;

				{
					BgL_rtl_insz00_bglt BgL_auxz00_4736;

					BgL_auxz00_4736 = (BgL_rtl_insz00_bglt) (BgL_ez00_1677);
					BgL_funz00_1679 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4736))->BgL_funz00);
				}
				{	/* SawJvm/code.scm 117 */
					bool_t BgL_testz00_4739;

					{	/* SawJvm/code.scm 117 */
						obj_t BgL_obj4649z00_3303;

						BgL_obj4649z00_3303 = (obj_t) (BgL_funz00_1679);
						BgL_testz00_4739 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj4649z00_3303,
							BGl_rtl_protectz00zzsaw_defsz00);
					}
					if (BgL_testz00_4739)
						{	/* SawJvm/code.scm 117 */
							BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 1);
							{
								BgL_rtl_insz00_bglt BgL_auxz00_4742;

								BgL_auxz00_4742 = (BgL_rtl_insz00_bglt) (BgL_ez00_1677);
								return (BGl_za2bexitregza2z00zzsaw_jvm_codez00 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4742))->BgL_destz00),
									BUNSPEC);
							}
						}
					else
						{	/* SawJvm/code.scm 120 */
							bool_t BgL__ortest_4943z00_1681;

							{	/* SawJvm/code.scm 120 */
								obj_t BgL_obj4158z00_3305;

								BgL_obj4158z00_3305 = (obj_t) (BgL_funz00_1679);
								BgL__ortest_4943z00_1681 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj4158z00_3305,
									BGl_rtl_switchz00zzsaw_defsz00);
							}
							if (BgL__ortest_4943z00_1681)
								{	/* SawJvm/code.scm 120 */
									return BBOOL(BgL__ortest_4943z00_1681);
								}
							else
								{	/* SawJvm/code.scm 120 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* expr */
	obj_t BGl_exprz00zzsaw_jvm_codez00(obj_t BgL_regsz00_4448,
		obj_t BgL_nz00_4447, obj_t BgL_ez00_1682)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 125 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1682,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 122 */
					return
						BGl_regzd2ze3lregz31zzsaw_jvm_codez00(BgL_regsz00_4448,
						BgL_nz00_4447, BgL_ez00_1682);
				}
			else
				{	/* SawJvm/code.scm 122 */
					BGl_check_funz00zzsaw_jvm_codez00(BgL_ez00_1682);
					{	/* SawJvm/code.scm 125 */
						obj_t BgL_g5011z00_1685;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4753;

							BgL_auxz00_4753 = (BgL_rtl_insz00_bglt) (BgL_ez00_1682);
							BgL_g5011z00_1685 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4753))->BgL_argsz00);
						}
						{
							obj_t BgL_l5009z00_1687;

							{	/* SawJvm/code.scm 125 */
								bool_t BgL_auxz00_4756;

								BgL_l5009z00_1687 = BgL_g5011z00_1685;
							BgL_zc3anonymousza35226ze3z83_1688:
								if (PAIRP(BgL_l5009z00_1687))
									{	/* SawJvm/code.scm 125 */
										{	/* SawJvm/code.scm 125 */
											obj_t BgL_arg5228z00_1690;

											BgL_arg5228z00_1690 = CAR(BgL_l5009z00_1687);
											BGl_exprz00zzsaw_jvm_codez00(BgL_regsz00_4448,
												BgL_nz00_4447, BgL_arg5228z00_1690);
										}
										{
											obj_t BgL_l5009z00_4761;

											BgL_l5009z00_4761 = CDR(BgL_l5009z00_1687);
											BgL_l5009z00_1687 = BgL_l5009z00_4761;
											goto BgL_zc3anonymousza35226ze3z83_1688;
										}
									}
								else
									{	/* SawJvm/code.scm 125 */
										BgL_auxz00_4756 = ((bool_t) 1);
									}
								return BBOOL(BgL_auxz00_4756);
							}
						}
					}
				}
		}
	}



/* live-init */
	BgL_blockz00_bglt BGl_livezd2initzd2zzsaw_jvm_codez00(obj_t BgL_bz00_20)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 143 */
			{	/* SawJvm/code.scm 144 */
				BgL_blockz00_bglt BgL_obj4945z00_1710;

				BgL_obj4945z00_1710 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_20));
				{	/* SawJvm/code.scm 144 */
					BgL_liveblockz00_bglt BgL_arg5235z00_1711;

					{	/* SawJvm/code.scm 144 */
						BgL_liveblockz00_bglt BgL_res5766z00_3325;

						{	/* SawJvm/code.scm 144 */
							BgL_liveblockz00_bglt BgL_new4899z00_3318;

							BgL_new4899z00_3318 =
								((BgL_liveblockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_liveblockz00_bgl))));
							{	/* SawJvm/code.scm 144 */
								BgL_liveblockz00_bglt BgL_res5765z00_3324;

								{	/* SawJvm/code.scm 144 */
									BgL_liveblockz00_bglt BgL_new4911z00_3319;

									BgL_new4911z00_3319 = BgL_new4899z00_3318;
									{	/* SawJvm/code.scm 144 */
										obj_t BgL_in4909z00_3322;

										obj_t BgL_out4910z00_3323;

										BgL_in4909z00_3322 = BNIL;
										BgL_out4910z00_3323 = BNIL;
										((((BgL_liveblockz00_bglt) CREF(BgL_new4911z00_3319))->
												BgL_inz00) = ((obj_t) BgL_in4909z00_3322), BUNSPEC);
										((((BgL_liveblockz00_bglt) CREF(BgL_new4911z00_3319))->
												BgL_outz00) = ((obj_t) BgL_out4910z00_3323), BUNSPEC);
										BgL_res5765z00_3324 = BgL_new4911z00_3319;
								}} BgL_res5765z00_3324;
							}
							BgL_res5766z00_3325 = BgL_new4899z00_3318;
						}
						BgL_arg5235z00_1711 = BgL_res5766z00_3325;
					}
					{	/* SawJvm/code.scm 144 */
						obj_t BgL_auxz00_4771;

						BgL_objectz00_bglt BgL_auxz00_4769;

						BgL_auxz00_4771 = (obj_t) (BgL_arg5235z00_1711);
						BgL_auxz00_4769 = (BgL_objectz00_bglt) (BgL_obj4945z00_1710);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4769, BgL_auxz00_4771);
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4945z00_1710),
					BGl_classzd2numzd2zz__objectz00(BGl_liveblockz00zzsaw_jvm_codez00));
				return BgL_obj4945z00_1710;
			}
		}
	}



/* live-fix */
	bool_t BGl_livezd2fixzd2zzsaw_jvm_codez00(obj_t BgL_bz00_21)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 146 */
			{	/* SawJvm/code.scm 183 */
				obj_t BgL_arg5237z00_1720;

				{	/* SawJvm/code.scm 183 */
					BgL_liveblockz00_bglt BgL_obj4926z00_3328;

					BgL_obj4926z00_3328 = (BgL_liveblockz00_bglt) (BgL_bz00_21);
					{
						obj_t BgL_auxz00_4778;

						{	/* SawJvm/code.scm 183 */
							BgL_objectz00_bglt BgL_auxz00_4779;

							BgL_auxz00_4779 = (BgL_objectz00_bglt) (BgL_obj4926z00_3328);
							BgL_auxz00_4778 = BGL_OBJECT_WIDENING(BgL_auxz00_4779);
						}
						BgL_arg5237z00_1720 =
							(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4778))->BgL_outz00);
					}
				}
				return
					BGl_fixpointz00zzsaw_jvm_codez00(BgL_bz00_21, BgL_arg5237z00_1720);
			}
		}
	}



/* <anonymous:5256> */
	bool_t BGl_zc3anonymousza35256ze3z83zzsaw_jvm_codez00(obj_t BgL_regsz00_4440,
		obj_t BgL_l5020z00_1748)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 163 */
		BGl_zc3anonymousza35256ze3z83zzsaw_jvm_codez00:
			if (PAIRP(BgL_l5020z00_1748))
				{	/* SawJvm/code.scm 163 */
					{	/* SawJvm/code.scm 163 */
						obj_t BgL_az00_1751;

						BgL_az00_1751 = CAR(BgL_l5020z00_1748);
						{	/* SawJvm/code.scm 163 */
							obj_t BgL_auxz00_4441;

							BgL_auxz00_4441 =
								BGl_livezd2argzd2zzsaw_jvm_codez00(BgL_az00_1751,
								CELL_REF(BgL_regsz00_4440));
							CELL_SET(BgL_regsz00_4440, BgL_auxz00_4441);
						}
					}
					{	/* SawJvm/code.scm 163 */
						obj_t BgL_arg5258z00_1752;

						BgL_arg5258z00_1752 = CDR(BgL_l5020z00_1748);
						{
							obj_t BgL_l5020z00_4789;

							BgL_l5020z00_4789 = BgL_arg5258z00_1752;
							BgL_l5020z00_1748 = BgL_l5020z00_4789;
							goto BGl_zc3anonymousza35256ze3z83zzsaw_jvm_codez00;
						}
					}
				}
			else
				{	/* SawJvm/code.scm 163 */
					return ((bool_t) 1);
				}
		}
	}



/* live-args */
	obj_t BGl_livezd2argszd2zzsaw_jvm_codez00(obj_t BgL_argsz00_1744,
		obj_t BgL_regsz00_1745)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 163 */
			{	/* SawJvm/code.scm 163 */
				obj_t BgL_regsz00_4442;

				BgL_regsz00_4442 = MAKE_CELL(BgL_regsz00_1745);
				BGl_zc3anonymousza35256ze3z83zzsaw_jvm_codez00(BgL_regsz00_4442,
					BgL_argsz00_1744);
				return CELL_REF(BgL_regsz00_4442);
			}
		}
	}



/* live-arg */
	obj_t BGl_livezd2argzd2zzsaw_jvm_codez00(obj_t BgL_az00_1738,
		obj_t BgL_regsz00_1739)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 161 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1738,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 157 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_az00_1738,
								BgL_regsz00_1739)))
						{	/* SawJvm/code.scm 159 */
							return BgL_regsz00_1739;
						}
					else
						{	/* SawJvm/code.scm 159 */
							return MAKE_PAIR(BgL_az00_1738, BgL_regsz00_1739);
						}
				}
			else
				{	/* SawJvm/code.scm 158 */
					obj_t BgL_arg5254z00_1743;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4797;

						BgL_auxz00_4797 = (BgL_rtl_insz00_bglt) (BgL_az00_1738);
						BgL_arg5254z00_1743 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4797))->BgL_argsz00);
					}
					return
						BGl_livezd2argszd2zzsaw_jvm_codez00(BgL_arg5254z00_1743,
						BgL_regsz00_1739);
				}
		}
	}



/* live-instrs */
	obj_t BGl_livezd2instrszd2zzsaw_jvm_codez00(obj_t BgL_lz00_1762,
		obj_t BgL_regsz00_1763)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 171 */
			{
				obj_t BgL_insz00_1754;

				obj_t BgL_regsz00_1755;

				if (NULLP(BgL_lz00_1762))
					{	/* SawJvm/code.scm 169 */
						return BgL_regsz00_1763;
					}
				else
					{	/* SawJvm/code.scm 169 */
						BgL_insz00_1754 = CAR(BgL_lz00_1762);
						BgL_regsz00_1755 =
							BGl_livezd2instrszd2zzsaw_jvm_codez00(CDR(BgL_lz00_1762),
							BgL_regsz00_1763);
						{	/* SawJvm/code.scm 167 */
							obj_t BgL_arg5260z00_1758;

							obj_t BgL_arg5261z00_1759;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_4803;

								BgL_auxz00_4803 = (BgL_rtl_insz00_bglt) (BgL_insz00_1754);
								BgL_arg5260z00_1758 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4803))->BgL_argsz00);
							}
							{	/* SawJvm/code.scm 167 */
								bool_t BgL_testz00_4806;

								{	/* SawJvm/code.scm 167 */
									BgL_rtl_insz00_bglt BgL_obj4666z00_3343;

									BgL_obj4666z00_3343 = (BgL_rtl_insz00_bglt) (BgL_insz00_1754);
									BgL_testz00_4806 =
										CBOOL(
										(((BgL_rtl_insz00_bglt) CREF(BgL_obj4666z00_3343))->
											BgL_destz00));
								}
								if (BgL_testz00_4806)
									{	/* SawJvm/code.scm 167 */
										obj_t BgL_auxz00_4810;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_4811;

											BgL_auxz00_4811 = (BgL_rtl_insz00_bglt) (BgL_insz00_1754);
											BgL_auxz00_4810 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4811))->
												BgL_destz00);
										}
										BgL_arg5261z00_1759 =
											bgl_remq(BgL_auxz00_4810, BgL_regsz00_1755);
									}
								else
									{	/* SawJvm/code.scm 167 */
										BgL_arg5261z00_1759 = BgL_regsz00_1755;
									}
							}
							return
								BGl_livezd2argszd2zzsaw_jvm_codez00(BgL_arg5260z00_1758,
								BgL_arg5261z00_1759);
						}
					}
			}
		}
	}



/* include */
	bool_t BGl_includez00zzsaw_jvm_codez00(obj_t BgL_l1z00_1721,
		obj_t BgL_l2z00_1722)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 150 */
		BGl_includez00zzsaw_jvm_codez00:
			if (NULLP(BgL_l1z00_1721))
				{	/* SawJvm/code.scm 148 */
					return ((bool_t) 1);
				}
			else
				{	/* SawJvm/code.scm 148 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
								(BgL_l1z00_1721), BgL_l2z00_1722)))
						{
							obj_t BgL_l1z00_4825;

							BgL_l1z00_4825 = CDR(BgL_l1z00_1721);
							BgL_l1z00_1721 = BgL_l1z00_4825;
							goto BGl_includez00zzsaw_jvm_codez00;
						}
					else
						{	/* SawJvm/code.scm 149 */
							return ((bool_t) 0);
						}
				}
		}
	}



/* fixpoint */
	bool_t BGl_fixpointz00zzsaw_jvm_codez00(obj_t BgL_bz00_1769,
		obj_t BgL_livez00_1770)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 182 */
			{
				obj_t BgL_l1z00_1728;

				obj_t BgL_l2z00_1729;

				{	/* SawJvm/code.scm 174 */
					BgL_liveblockz00_bglt BgL_obj4928z00_3348;

					obj_t BgL_val4927z00_3349;

					BgL_obj4928z00_3348 = (BgL_liveblockz00_bglt) (BgL_bz00_1769);
					BgL_val4927z00_3349 = BgL_livez00_1770;
					{
						obj_t BgL_auxz00_4828;

						{	/* SawJvm/code.scm 174 */
							BgL_objectz00_bglt BgL_auxz00_4829;

							BgL_auxz00_4829 = (BgL_objectz00_bglt) (BgL_obj4928z00_3348);
							BgL_auxz00_4828 = BGL_OBJECT_WIDENING(BgL_auxz00_4829);
						}
						((((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4828))->BgL_outz00) =
							((obj_t) BgL_val4927z00_3349), BUNSPEC);
					}
				}
				{	/* SawJvm/code.scm 175 */
					obj_t BgL_nlivez00_1773;

					{	/* SawJvm/code.scm 175 */
						obj_t BgL_arg5277z00_1787;

						{
							BgL_blockz00_bglt BgL_auxz00_4833;

							BgL_auxz00_4833 = (BgL_blockz00_bglt) (BgL_bz00_1769);
							BgL_arg5277z00_1787 =
								(((BgL_blockz00_bglt) CREF(BgL_auxz00_4833))->BgL_firstz00);
						}
						BgL_nlivez00_1773 =
							BGl_livezd2instrszd2zzsaw_jvm_codez00(BgL_arg5277z00_1787,
							BgL_livez00_1770);
					}
					{	/* SawJvm/code.scm 176 */
						bool_t BgL_testz00_4837;

						{	/* SawJvm/code.scm 176 */
							obj_t BgL_auxz00_4838;

							{	/* SawJvm/code.scm 176 */
								BgL_liveblockz00_bglt BgL_obj4923z00_3351;

								BgL_obj4923z00_3351 = (BgL_liveblockz00_bglt) (BgL_bz00_1769);
								{
									obj_t BgL_auxz00_4840;

									{	/* SawJvm/code.scm 176 */
										BgL_objectz00_bglt BgL_auxz00_4841;

										BgL_auxz00_4841 =
											(BgL_objectz00_bglt) (BgL_obj4923z00_3351);
										BgL_auxz00_4840 = BGL_OBJECT_WIDENING(BgL_auxz00_4841);
									}
									BgL_auxz00_4838 =
										(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4840))->
										BgL_inz00);
								}
							}
							BgL_testz00_4837 =
								BGl_includez00zzsaw_jvm_codez00(BgL_nlivez00_1773,
								BgL_auxz00_4838);
						}
						if (BgL_testz00_4837)
							{	/* SawJvm/code.scm 176 */
								return ((bool_t) 0);
							}
						else
							{	/* SawJvm/code.scm 176 */
								{	/* SawJvm/code.scm 177 */
									BgL_liveblockz00_bglt BgL_obj4925z00_3352;

									obj_t BgL_val4924z00_3353;

									BgL_obj4925z00_3352 = (BgL_liveblockz00_bglt) (BgL_bz00_1769);
									BgL_val4924z00_3353 = BgL_nlivez00_1773;
									{
										obj_t BgL_auxz00_4847;

										{	/* SawJvm/code.scm 177 */
											BgL_objectz00_bglt BgL_auxz00_4848;

											BgL_auxz00_4848 =
												(BgL_objectz00_bglt) (BgL_obj4925z00_3352);
											BgL_auxz00_4847 = BGL_OBJECT_WIDENING(BgL_auxz00_4848);
										}
										((((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4847))->
												BgL_inz00) = ((obj_t) BgL_val4924z00_3353), BUNSPEC);
									}
								}
								{	/* SawJvm/code.scm 178 */
									obj_t BgL_g5024z00_1775;

									{
										BgL_blockz00_bglt BgL_auxz00_4852;

										BgL_auxz00_4852 = (BgL_blockz00_bglt) (BgL_bz00_1769);
										BgL_g5024z00_1775 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_4852))->
											BgL_predsz00);
									}
									{
										obj_t BgL_l5022z00_1777;

										BgL_l5022z00_1777 = BgL_g5024z00_1775;
									BgL_zc3anonymousza35271ze3z83_1778:
										if (PAIRP(BgL_l5022z00_1777))
											{	/* SawJvm/code.scm 178 */
												{	/* SawJvm/code.scm 179 */
													obj_t BgL_pz00_1780;

													BgL_pz00_1780 = CAR(BgL_l5022z00_1777);
													{	/* SawJvm/code.scm 179 */
														obj_t BgL_oz00_1781;

														{	/* SawJvm/code.scm 179 */
															BgL_liveblockz00_bglt BgL_obj4926z00_3357;

															BgL_obj4926z00_3357 =
																(BgL_liveblockz00_bglt) (BgL_pz00_1780);
															{
																obj_t BgL_auxz00_4859;

																{	/* SawJvm/code.scm 179 */
																	BgL_objectz00_bglt BgL_auxz00_4860;

																	BgL_auxz00_4860 =
																		(BgL_objectz00_bglt) (BgL_obj4926z00_3357);
																	BgL_auxz00_4859 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_4860);
																}
																BgL_oz00_1781 =
																	(((BgL_liveblockz00_bglt)
																		CREF(BgL_auxz00_4859))->BgL_outz00);
															}
														}
														if (BGl_includez00zzsaw_jvm_codez00
															(BgL_nlivez00_1773, BgL_oz00_1781))
															{	/* SawJvm/code.scm 180 */
																((bool_t) 0);
															}
														else
															{	/* SawJvm/code.scm 181 */
																obj_t BgL_auxz00_4866;

																BgL_l1z00_1728 = BgL_nlivez00_1773;
																BgL_l2z00_1729 = BgL_oz00_1781;
															BgL_zc3anonymousza35243ze3z83_1730:
																if (NULLP(BgL_l1z00_1728))
																	{	/* SawJvm/code.scm 152 */
																		BgL_auxz00_4866 = BgL_l2z00_1729;
																	}
																else
																	{	/* SawJvm/code.scm 152 */
																		if (CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(BgL_l1z00_1728), BgL_l2z00_1729)))
																			{
																				obj_t BgL_l1z00_4873;

																				BgL_l1z00_4873 = CDR(BgL_l1z00_1728);
																				BgL_l1z00_1728 = BgL_l1z00_4873;
																				goto BgL_zc3anonymousza35243ze3z83_1730;
																			}
																		else
																			{	/* SawJvm/code.scm 154 */
																				obj_t BgL_arg5247z00_1734;

																				obj_t BgL_arg5248z00_1735;

																				BgL_arg5247z00_1734 =
																					CDR(BgL_l1z00_1728);
																				BgL_arg5248z00_1735 =
																					MAKE_PAIR(CAR(BgL_l1z00_1728),
																					BgL_l2z00_1729);
																				{
																					obj_t BgL_l2z00_4879;

																					obj_t BgL_l1z00_4878;

																					BgL_l1z00_4878 = BgL_arg5247z00_1734;
																					BgL_l2z00_4879 = BgL_arg5248z00_1735;
																					BgL_l2z00_1729 = BgL_l2z00_4879;
																					BgL_l1z00_1728 = BgL_l1z00_4878;
																					goto
																						BgL_zc3anonymousza35243ze3z83_1730;
																				}
																			}
																	}
																BGl_fixpointz00zzsaw_jvm_codez00(BgL_pz00_1780,
																	BgL_auxz00_4866);
															}
													}
												}
												{
													obj_t BgL_l5022z00_4881;

													BgL_l5022z00_4881 = CDR(BgL_l5022z00_1777);
													BgL_l5022z00_1777 = BgL_l5022z00_4881;
													goto BgL_zc3anonymousza35271ze3z83_1778;
												}
											}
										else
											{	/* SawJvm/code.scm 178 */
												return ((bool_t) 1);
											}
									}
								}
							}
					}
				}
			}
		}
	}



/* live-reset */
	obj_t BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_22,
		obj_t BgL_bz00_23, obj_t BgL_pendingz00_24)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 185 */
			{	/* SawJvm/code.scm 186 */
				obj_t BgL_labz00_1795;

				obj_t BgL_npendingz00_1796;

				{	/* SawJvm/code.scm 186 */

					{	/* SawJvm/code.scm 186 */

						BgL_labz00_1795 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				BgL_npendingz00_1796 = BNIL;
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_22, BgL_labz00_1795);
				{
					obj_t BgL_l5025z00_1799;

					BgL_l5025z00_1799 = BgL_pendingz00_24;
				BgL_zc3anonymousza35278ze3z83_1800:
					if (PAIRP(BgL_l5025z00_1799))
						{	/* SawJvm/code.scm 189 */
							{	/* SawJvm/code.scm 190 */
								obj_t BgL_pz00_1802;

								BgL_pz00_1802 = CAR(BgL_l5025z00_1799);
								{	/* SawJvm/code.scm 190 */
									bool_t BgL_testz00_4888;

									{	/* SawJvm/code.scm 190 */
										obj_t BgL_auxz00_4889;

										{	/* SawJvm/code.scm 190 */
											obj_t BgL_auxz00_4890;

											{	/* SawJvm/code.scm 190 */
												BgL_liveblockz00_bglt BgL_obj4923z00_3362;

												BgL_obj4923z00_3362 =
													(BgL_liveblockz00_bglt) (BgL_bz00_23);
												{
													obj_t BgL_auxz00_4893;

													{	/* SawJvm/code.scm 190 */
														BgL_objectz00_bglt BgL_auxz00_4894;

														BgL_auxz00_4894 =
															(BgL_objectz00_bglt) (BgL_obj4923z00_3362);
														BgL_auxz00_4893 =
															BGL_OBJECT_WIDENING(BgL_auxz00_4894);
													}
													BgL_auxz00_4890 =
														(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4893))->
														BgL_inz00);
												}
											}
											BgL_auxz00_4889 =
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_pz00_1802), BgL_auxz00_4890);
										}
										BgL_testz00_4888 = CBOOL(BgL_auxz00_4889);
									}
									if (BgL_testz00_4888)
										{	/* SawJvm/code.scm 190 */
											BgL_npendingz00_1796 =
												MAKE_PAIR(BgL_pz00_1802, BgL_npendingz00_1796);
										}
									else
										{	/* SawJvm/code.scm 192 */
											obj_t BgL_arg5281z00_1804;

											obj_t BgL_arg5282z00_1805;

											BgL_arg5281z00_1804 = CAR(BgL_pz00_1802);
											BgL_arg5282z00_1805 = CDR(BgL_pz00_1802);
											{	/* SawJvm/code.scm 192 */
												obj_t BgL_arg5291z00_3370;

												{	/* SawJvm/code.scm 192 */
													BgL_lregz00_bglt BgL_obj4881z00_3371;

													BgL_obj4881z00_3371 =
														(BgL_lregz00_bglt) (BgL_arg5281z00_1804);
													{
														obj_t BgL_auxz00_4904;

														{	/* SawJvm/code.scm 192 */
															BgL_objectz00_bglt BgL_auxz00_4905;

															BgL_auxz00_4905 =
																(BgL_objectz00_bglt) (BgL_obj4881z00_3371);
															BgL_auxz00_4904 =
																BGL_OBJECT_WIDENING(BgL_auxz00_4905);
														}
														BgL_arg5291z00_3370 =
															(((BgL_lregz00_bglt) CREF(BgL_auxz00_4904))->
															BgL_idz00);
													}
												}
												BGl_localvarz00zzsaw_jvm_outz00(BgL_mez00_22,
													BgL_arg5281z00_1804, BgL_arg5282z00_1805,
													BgL_labz00_1795, BgL_arg5291z00_3370);
											}
										}
								}
							}
							{
								obj_t BgL_l5025z00_4910;

								BgL_l5025z00_4910 = CDR(BgL_l5025z00_1799);
								BgL_l5025z00_1799 = BgL_l5025z00_4910;
								goto BgL_zc3anonymousza35278ze3z83_1800;
							}
						}
					else
						{	/* SawJvm/code.scm 189 */
							((bool_t) 1);
						}
				}
				{	/* SawJvm/code.scm 194 */
					obj_t BgL_g5029z00_1810;

					{	/* SawJvm/code.scm 194 */
						BgL_liveblockz00_bglt BgL_obj4923z00_3373;

						BgL_obj4923z00_3373 = (BgL_liveblockz00_bglt) (BgL_bz00_23);
						{
							obj_t BgL_auxz00_4913;

							{	/* SawJvm/code.scm 194 */
								BgL_objectz00_bglt BgL_auxz00_4914;

								BgL_auxz00_4914 = (BgL_objectz00_bglt) (BgL_obj4923z00_3373);
								BgL_auxz00_4913 = BGL_OBJECT_WIDENING(BgL_auxz00_4914);
							}
							BgL_g5029z00_1810 =
								(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_4913))->BgL_inz00);
						}
					}
					{
						obj_t BgL_l5027z00_1812;

						BgL_l5027z00_1812 = BgL_g5029z00_1810;
					BgL_zc3anonymousza35286ze3z83_1813:
						if (PAIRP(BgL_l5027z00_1812))
							{	/* SawJvm/code.scm 194 */
								{	/* SawJvm/code.scm 195 */
									obj_t BgL_iz00_1815;

									BgL_iz00_1815 = CAR(BgL_l5027z00_1812);
									if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_iz00_1815, BgL_npendingz00_1796)))
										{	/* SawJvm/code.scm 195 */
											BFALSE;
										}
									else
										{	/* SawJvm/code.scm 196 */
											obj_t BgL_arg5289z00_1817;

											BgL_arg5289z00_1817 =
												MAKE_PAIR(BgL_iz00_1815, BgL_labz00_1795);
											BgL_npendingz00_1796 =
												MAKE_PAIR(BgL_arg5289z00_1817, BgL_npendingz00_1796);
										}
								}
								{
									obj_t BgL_l5027z00_4926;

									BgL_l5027z00_4926 = CDR(BgL_l5027z00_1812);
									BgL_l5027z00_1812 = BgL_l5027z00_4926;
									goto BgL_zc3anonymousza35286ze3z83_1813;
								}
							}
						else
							{	/* SawJvm/code.scm 194 */
								((bool_t) 1);
							}
					}
				}
				return BgL_npendingz00_1796;
			}
		}
	}



/* gen-ins */
	obj_t BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_29,
		obj_t BgL_insz00_30, obj_t BgL_pz00_31)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 208 */
			{	/* SawJvm/code.scm 211 */
				bool_t BgL_testz00_4928;

				{	/* SawJvm/code.scm 211 */
					obj_t BgL_arg5305z00_1838;

					obj_t BgL_arg5306z00_1839;

					{	/* SawJvm/code.scm 211 */
						BgL_rtl_funz00_bglt BgL_arg5307z00_1840;

						obj_t BgL_arg5308z00_1841;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4929;

							BgL_auxz00_4929 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
							BgL_arg5307z00_1840 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4929))->BgL_funz00);
						}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_4932;

							BgL_auxz00_4932 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
							BgL_arg5308z00_1841 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4932))->BgL_argsz00);
						}
						{	/* SawJvm/code.scm 211 */
							obj_t BgL_method5063z00_3385;

							{	/* SawJvm/code.scm 211 */
								BgL_objectz00_bglt BgL_objz00_3386;

								BgL_objz00_3386 = (BgL_objectz00_bglt) (BgL_arg5307z00_1840);
								{	/* SawJvm/code.scm 211 */
									long BgL_objzd2classzd2numz00_3387;

									BgL_objzd2classzd2numz00_3387 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3386);
									{	/* SawJvm/code.scm 211 */
										obj_t BgL_arg2643z00_3388;

										BgL_arg2643z00_3388 =
											PROCEDURE_REF
											(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
											(int) (((long) 1)));
										{	/* SawJvm/code.scm 211 */
											obj_t BgL_arrayz00_3390;

											int BgL_offsetz00_3391;

											BgL_arrayz00_3390 = BgL_arg2643z00_3388;
											BgL_offsetz00_3391 =
												(int) (BgL_objzd2classzd2numz00_3387);
											{	/* SawJvm/code.scm 211 */
												long BgL_offsetz00_3392;

												BgL_offsetz00_3392 =
													((long) (BgL_offsetz00_3391) - OBJECT_TYPE);
												{	/* SawJvm/code.scm 211 */
													long BgL_modz00_3393;

													{	/* SawJvm/code.scm 211 */
														int BgL_arg2645z00_3394;

														BgL_arg2645z00_3394 = (int) (((long) 16));
														{	/* SawJvm/code.scm 211 */
															long BgL_auxz00_4943;

															BgL_auxz00_4943 = (long) (BgL_arg2645z00_3394);
															BgL_modz00_3393 =
																(BgL_offsetz00_3392 / BgL_auxz00_4943);
													}}
													{	/* SawJvm/code.scm 211 */
														long BgL_restz00_3395;

														{	/* SawJvm/code.scm 211 */
															int BgL_arg2644z00_3396;

															BgL_arg2644z00_3396 = (int) (((long) 16));
															{	/* SawJvm/code.scm 211 */
																long BgL_auxz00_4947;

																BgL_auxz00_4947 = (long) (BgL_arg2644z00_3396);
																BgL_restz00_3395 =
																	(BgL_offsetz00_3392 % BgL_auxz00_4947);
														}}
														{	/* SawJvm/code.scm 211 */

															BgL_method5063z00_3385 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3390,
																	(int) (BgL_modz00_3393)),
																(int) (BgL_restz00_3395));
							}}}}}}}}
							BgL_arg5305z00_1838 =
								PROCEDURE_ENTRY(BgL_method5063z00_3385) (BgL_method5063z00_3385,
								(obj_t) (BgL_arg5307z00_1840),
								(obj_t) (BgL_mez00_29), BgL_arg5308z00_1841, BEOA);
					}}
					BgL_arg5306z00_1839 = CNST_TABLE_REF(((long) 13));
					BgL_testz00_4928 = (BgL_arg5305z00_1838 == BgL_arg5306z00_1839);
				}
				if (BgL_testz00_4928)
					{	/* SawJvm/code.scm 212 */
						bool_t BgL_testz00_4960;

						{	/* SawJvm/code.scm 212 */
							BgL_rtl_insz00_bglt BgL_obj4666z00_3410;

							BgL_obj4666z00_3410 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
							BgL_testz00_4960 =
								CBOOL(
								(((BgL_rtl_insz00_bglt) CREF(BgL_obj4666z00_3410))->
									BgL_destz00));
						}
						if (BgL_testz00_4960)
							{	/* SawJvm/code.scm 212 */
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_29,
									CNST_TABLE_REF(((long) 14)));
								{	/* SawJvm/code.scm 214 */
									obj_t BgL_arg5294z00_1826;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4966;

										BgL_auxz00_4966 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
										BgL_arg5294z00_1826 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4966))->
											BgL_destz00);
									}
									BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_mez00_29,
										BgL_arg5294z00_1826);
							}}
						else
							{	/* SawJvm/code.scm 212 */
								BFALSE;
							}
					}
				else
					{	/* SawJvm/code.scm 215 */
						bool_t BgL_testz00_4970;

						{	/* SawJvm/code.scm 215 */
							BgL_rtl_insz00_bglt BgL_obj4666z00_3412;

							BgL_obj4666z00_3412 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
							BgL_testz00_4970 =
								CBOOL(
								(((BgL_rtl_insz00_bglt) CREF(BgL_obj4666z00_3412))->
									BgL_destz00));
						}
						if (BgL_testz00_4970)
							{	/* SawJvm/code.scm 216 */
								obj_t BgL_arg5296z00_1828;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_4974;

									BgL_auxz00_4974 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
									BgL_arg5296z00_1828 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4974))->
										BgL_destz00);
								}
								BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_mez00_29,
									BgL_arg5296z00_1828);
							}
						else
							{	/* SawJvm/code.scm 218 */
								bool_t BgL_testz00_4978;

								{	/* SawJvm/code.scm 218 */
									bool_t BgL_testz00_4979;

									{	/* SawJvm/code.scm 218 */
										BgL_rtl_funz00_bglt BgL_arg5304z00_1837;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_4980;

											BgL_auxz00_4980 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
											BgL_arg5304z00_1837 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4980))->
												BgL_funz00);
										}
										{	/* SawJvm/code.scm 218 */
											obj_t BgL_obj4044z00_3415;

											BgL_obj4044z00_3415 = (obj_t) (BgL_arg5304z00_1837);
											BgL_testz00_4979 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj4044z00_3415,
												BGl_rtl_lastz00zzsaw_defsz00);
										}
									}
									if (BgL_testz00_4979)
										{	/* SawJvm/code.scm 218 */
											BgL_testz00_4978 = ((bool_t) 1);
										}
									else
										{	/* SawJvm/code.scm 219 */
											bool_t BgL_testz00_4985;

											{	/* SawJvm/code.scm 219 */
												BgL_rtl_funz00_bglt BgL_arg5303z00_1836;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_4986;

													BgL_auxz00_4986 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_30);
													BgL_arg5303z00_1836 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4986))->
														BgL_funz00);
												}
												{	/* SawJvm/code.scm 219 */
													obj_t BgL_obj4091z00_3417;

													BgL_obj4091z00_3417 = (obj_t) (BgL_arg5303z00_1836);
													BgL_testz00_4985 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj4091z00_3417,
														BGl_rtl_notseqz00zzsaw_defsz00);
												}
											}
											if (BgL_testz00_4985)
												{	/* SawJvm/code.scm 219 */
													BgL_testz00_4978 = ((bool_t) 1);
												}
											else
												{	/* SawJvm/code.scm 220 */
													BgL_rtl_funz00_bglt BgL_arg5302z00_1835;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_4991;

														BgL_auxz00_4991 =
															(BgL_rtl_insz00_bglt) (BgL_insz00_30);
														BgL_arg5302z00_1835 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4991))->
															BgL_funz00);
													}
													{	/* SawJvm/code.scm 220 */
														obj_t BgL_obj4444z00_3419;

														BgL_obj4444z00_3419 = (obj_t) (BgL_arg5302z00_1835);
														BgL_testz00_4978 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj4444z00_3419,
															BGl_rtl_effectz00zzsaw_defsz00);
													}
												}
										}
								}
								if (BgL_testz00_4978)
									{	/* SawJvm/code.scm 218 */
										BFALSE;
									}
								else
									{	/* SawJvm/code.scm 221 */
										int BgL_nz00_1830;

										BgL_nz00_1830 =
											BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_insz00_30);
										if (((long) (BgL_nz00_1830) > ((long) 0)))
											{	/* SawJvm/code.scm 222 */
												if (((long) (BgL_nz00_1830) > ((long) 1)))
													{	/* SawJvm/code.scm 223 */
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_29,
															CNST_TABLE_REF(((long) 15)));
													}
												else
													{	/* SawJvm/code.scm 223 */
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_29,
															CNST_TABLE_REF(((long) 16)));
											}}
										else
											{	/* SawJvm/code.scm 222 */
												BFALSE;
											}
									}
							}
					}
			}
			{	/* SawJvm/code.scm 226 */
				bool_t BgL_testz00_5007;

				{	/* SawJvm/code.scm 226 */
					BgL_rtl_funz00_bglt BgL_arg5310z00_1843;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_5008;

						BgL_auxz00_5008 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
						BgL_arg5310z00_1843 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5008))->BgL_funz00);
					}
					{	/* SawJvm/code.scm 226 */
						obj_t BgL_obj4649z00_3425;

						BgL_obj4649z00_3425 = (obj_t) (BgL_arg5310z00_1843);
						BgL_testz00_5007 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj4649z00_3425,
							BGl_rtl_protectz00zzsaw_defsz00);
					}
				}
				if (BgL_testz00_5007)
					{	/* SawJvm/code.scm 226 */
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_29,
							CNST_TABLE_REF(((long) 17)));
					}
				else
					{	/* SawJvm/code.scm 226 */
						BFALSE;
					}
			}
			{	/* SawJvm/code.scm 227 */
				bool_t BgL_testz00_5015;

				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 227 */
						BgL_rtl_insz00_bglt BgL_obj4666z00_3426;

						BgL_obj4666z00_3426 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
						BgL_testz00_5015 =
							CBOOL(
							(((BgL_rtl_insz00_bglt) CREF(BgL_obj4666z00_3426))->BgL_destz00));
					}
				else
					{	/* SawJvm/code.scm 227 */
						BgL_testz00_5015 = ((bool_t) 0);
					}
				if (BgL_testz00_5015)
					{	/* SawJvm/code.scm 228 */
						bool_t BgL_testz00_5021;

						{	/* SawJvm/code.scm 228 */
							obj_t BgL_arg5315z00_1850;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_5022;

								BgL_auxz00_5022 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
								BgL_arg5315z00_1850 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5022))->BgL_destz00);
							}
							BgL_testz00_5021 =
								CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
								(BgL_arg5315z00_1850, BgL_pz00_31));
						}
						if (BgL_testz00_5021)
							{	/* SawJvm/code.scm 228 */
								BFALSE;
							}
						else
							{	/* SawJvm/code.scm 229 */
								obj_t BgL_labz00_1846;

								{	/* SawJvm/code.scm 229 */

									{	/* SawJvm/code.scm 229 */

										BgL_labz00_1846 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_29, BgL_labz00_1846);
								{	/* SawJvm/code.scm 231 */
									obj_t BgL_arg5313z00_1847;

									{	/* SawJvm/code.scm 231 */
										obj_t BgL_arg5314z00_1848;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_5029;

											BgL_auxz00_5029 = (BgL_rtl_insz00_bglt) (BgL_insz00_30);
											BgL_arg5314z00_1848 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5029))->
												BgL_destz00);
										}
										BgL_arg5313z00_1847 =
											MAKE_PAIR(BgL_arg5314z00_1848, BgL_labz00_1846);
									}
									BgL_pz00_31 = MAKE_PAIR(BgL_arg5313z00_1847, BgL_pz00_31);
								}
							}
					}
				else
					{	/* SawJvm/code.scm 227 */
						BFALSE;
					}
			}
			return BgL_pz00_31;
		}
	}



/* gen-expr */
	BGL_EXPORTED_DEF obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt
		BgL_mez00_32, obj_t BgL_insz00_33)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 234 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_33,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 235 */
					return
						BGl_loadzd2regzd2zzsaw_jvm_codez00(
						(obj_t) (BgL_mez00_32), BgL_insz00_33);
				}
			else
				{	/* SawJvm/code.scm 238 */
					bool_t BgL_testz00_5038;

					{	/* SawJvm/code.scm 238 */
						obj_t BgL_arg5318z00_1854;

						obj_t BgL_arg5319z00_1855;

						{	/* SawJvm/code.scm 238 */
							BgL_rtl_funz00_bglt BgL_arg5320z00_1856;

							obj_t BgL_arg5321z00_1857;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_5039;

								BgL_auxz00_5039 = (BgL_rtl_insz00_bglt) (BgL_insz00_33);
								BgL_arg5320z00_1856 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5039))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_5042;

								BgL_auxz00_5042 = (BgL_rtl_insz00_bglt) (BgL_insz00_33);
								BgL_arg5321z00_1857 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5042))->BgL_argsz00);
							}
							{	/* SawJvm/code.scm 238 */
								obj_t BgL_method5063z00_3435;

								{	/* SawJvm/code.scm 238 */
									BgL_objectz00_bglt BgL_objz00_3436;

									BgL_objz00_3436 = (BgL_objectz00_bglt) (BgL_arg5320z00_1856);
									{	/* SawJvm/code.scm 238 */
										long BgL_objzd2classzd2numz00_3437;

										BgL_objzd2classzd2numz00_3437 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3436);
										{	/* SawJvm/code.scm 238 */
											obj_t BgL_arg2643z00_3438;

											BgL_arg2643z00_3438 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
												(int) (((long) 1)));
											{	/* SawJvm/code.scm 238 */
												obj_t BgL_arrayz00_3440;

												int BgL_offsetz00_3441;

												BgL_arrayz00_3440 = BgL_arg2643z00_3438;
												BgL_offsetz00_3441 =
													(int) (BgL_objzd2classzd2numz00_3437);
												{	/* SawJvm/code.scm 238 */
													long BgL_offsetz00_3442;

													BgL_offsetz00_3442 =
														((long) (BgL_offsetz00_3441) - OBJECT_TYPE);
													{	/* SawJvm/code.scm 238 */
														long BgL_modz00_3443;

														{	/* SawJvm/code.scm 238 */
															int BgL_arg2645z00_3444;

															BgL_arg2645z00_3444 = (int) (((long) 16));
															{	/* SawJvm/code.scm 238 */
																long BgL_auxz00_5053;

																BgL_auxz00_5053 = (long) (BgL_arg2645z00_3444);
																BgL_modz00_3443 =
																	(BgL_offsetz00_3442 / BgL_auxz00_5053);
														}}
														{	/* SawJvm/code.scm 238 */
															long BgL_restz00_3445;

															{	/* SawJvm/code.scm 238 */
																int BgL_arg2644z00_3446;

																BgL_arg2644z00_3446 = (int) (((long) 16));
																{	/* SawJvm/code.scm 238 */
																	long BgL_auxz00_5057;

																	BgL_auxz00_5057 =
																		(long) (BgL_arg2644z00_3446);
																	BgL_restz00_3445 =
																		(BgL_offsetz00_3442 % BgL_auxz00_5057);
															}}
															{	/* SawJvm/code.scm 238 */

																BgL_method5063z00_3435 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3440,
																		(int) (BgL_modz00_3443)),
																	(int) (BgL_restz00_3445));
								}}}}}}}}
								BgL_arg5318z00_1854 =
									PROCEDURE_ENTRY(BgL_method5063z00_3435)
									(BgL_method5063z00_3435, (obj_t) (BgL_arg5320z00_1856),
									(obj_t) (BgL_mez00_32), BgL_arg5321z00_1857, BEOA);
						}}
						BgL_arg5319z00_1855 = CNST_TABLE_REF(((long) 13));
						BgL_testz00_5038 = (BgL_arg5318z00_1854 == BgL_arg5319z00_1855);
					}
					if (BgL_testz00_5038)
						{	/* SawJvm/code.scm 238 */
							return
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_32,
								CNST_TABLE_REF(((long) 14)));
						}
					else
						{	/* SawJvm/code.scm 238 */
							return BFALSE;
						}
				}
		}
	}



/* _gen-expr */
	obj_t BGl__genzd2exprzd2zzsaw_jvm_codez00(obj_t BgL_envz00_4212,
		obj_t BgL_mez00_4213, obj_t BgL_insz00_4214)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 234 */
			return
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
				(BgL_jvmz00_bglt) (BgL_mez00_4213), BgL_insz00_4214);
		}
	}



/* load-reg */
	obj_t BGl_loadzd2regzd2zzsaw_jvm_codez00(obj_t BgL_mez00_34,
		obj_t BgL_rz00_35)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 241 */
			{	/* SawJvm/code.scm 243 */
				obj_t BgL_arg5322z00_1858;

				{	/* SawJvm/code.scm 243 */
					obj_t BgL_arg5323z00_1859;

					obj_t BgL_arg5324z00_1860;

					{	/* SawJvm/code.scm 243 */
						obj_t BgL_casezd2valuezd2_1861;

						{	/* SawJvm/code.scm 243 */
							BgL_typez00_bglt BgL_obj1509z00_3461;

							{
								BgL_rtl_regz00_bglt BgL_auxz00_5074;

								BgL_auxz00_5074 = (BgL_rtl_regz00_bglt) (BgL_rz00_35);
								BgL_obj1509z00_3461 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_5074))->BgL_typez00);
							}
							BgL_casezd2valuezd2_1861 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_3461))->BgL_namez00);
						}
						{	/* SawJvm/code.scm 243 */
							bool_t BgL_testz00_5078;

							{	/* SawJvm/code.scm 243 */
								bool_t BgL__ortest_4958z00_1867;

								BgL__ortest_4958z00_1867 =
									(BgL_casezd2valuezd2_1861 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_4958z00_1867)
									{	/* SawJvm/code.scm 243 */
										BgL_testz00_5078 = BgL__ortest_4958z00_1867;
									}
								else
									{	/* SawJvm/code.scm 243 */
										bool_t BgL__ortest_4959z00_1868;

										BgL__ortest_4959z00_1868 =
											(BgL_casezd2valuezd2_1861 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_4959z00_1868)
											{	/* SawJvm/code.scm 243 */
												BgL_testz00_5078 = BgL__ortest_4959z00_1868;
											}
										else
											{	/* SawJvm/code.scm 243 */
												bool_t BgL__ortest_4960z00_1869;

												BgL__ortest_4960z00_1869 =
													(BgL_casezd2valuezd2_1861 ==
													CNST_TABLE_REF(((long) 20)));
												if (BgL__ortest_4960z00_1869)
													{	/* SawJvm/code.scm 243 */
														BgL_testz00_5078 = BgL__ortest_4960z00_1869;
													}
												else
													{	/* SawJvm/code.scm 243 */
														bool_t BgL__ortest_4961z00_1870;

														BgL__ortest_4961z00_1870 =
															(BgL_casezd2valuezd2_1861 ==
															CNST_TABLE_REF(((long) 21)));
														if (BgL__ortest_4961z00_1870)
															{	/* SawJvm/code.scm 243 */
																BgL_testz00_5078 = BgL__ortest_4961z00_1870;
															}
														else
															{	/* SawJvm/code.scm 243 */
																BgL_testz00_5078 =
																	(BgL_casezd2valuezd2_1861 ==
																	CNST_TABLE_REF(((long) 22)));
							}}}}}
							if (BgL_testz00_5078)
								{	/* SawJvm/code.scm 243 */
									BgL_arg5323z00_1859 = CNST_TABLE_REF(((long) 23));
								}
							else
								{	/* SawJvm/code.scm 243 */
									if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
										(BgL_casezd2valuezd2_1861, CNST_TABLE_REF(((long) 11))))
										{	/* SawJvm/code.scm 243 */
											BgL_arg5323z00_1859 = CNST_TABLE_REF(((long) 24));
										}
									else
										{	/* SawJvm/code.scm 243 */
											if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
												(BgL_casezd2valuezd2_1861, CNST_TABLE_REF(((long) 25))))
												{	/* SawJvm/code.scm 243 */
													BgL_arg5323z00_1859 = CNST_TABLE_REF(((long) 26));
												}
											else
												{	/* SawJvm/code.scm 243 */
													if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
														(BgL_casezd2valuezd2_1861,
															CNST_TABLE_REF(((long) 10))))
														{	/* SawJvm/code.scm 243 */
															BgL_arg5323z00_1859 = CNST_TABLE_REF(((long) 27));
														}
													else
														{	/* SawJvm/code.scm 243 */
															BgL_arg5323z00_1859 = CNST_TABLE_REF(((long) 28));
					}}}}}}
					{	/* SawJvm/code.scm 249 */
						obj_t BgL_arg5330z00_1872;

						{	/* SawJvm/code.scm 249 */
							BgL_lregz00_bglt BgL_obj4881z00_3462;

							BgL_obj4881z00_3462 = (BgL_lregz00_bglt) (BgL_rz00_35);
							{
								obj_t BgL_auxz00_5108;

								{	/* SawJvm/code.scm 249 */
									BgL_objectz00_bglt BgL_auxz00_5109;

									BgL_auxz00_5109 = (BgL_objectz00_bglt) (BgL_obj4881z00_3462);
									BgL_auxz00_5108 = BGL_OBJECT_WIDENING(BgL_auxz00_5109);
								}
								BgL_arg5330z00_1872 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_5108))->BgL_idz00);
						}}
						{	/* SawJvm/code.scm 243 */
							obj_t BgL_list5332z00_1874;

							BgL_list5332z00_1874 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5324z00_1860 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5330z00_1872,
								BgL_list5332z00_1874);
					}}
					BgL_arg5322z00_1858 =
						MAKE_PAIR(BgL_arg5323z00_1859, BgL_arg5324z00_1860);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_34), BgL_arg5322z00_1858);
			}
		}
	}



/* store-reg */
	obj_t BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_36,
		obj_t BgL_rz00_37)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 251 */
			{	/* SawJvm/code.scm 253 */
				obj_t BgL_arg5333z00_1875;

				{	/* SawJvm/code.scm 253 */
					obj_t BgL_arg5334z00_1876;

					obj_t BgL_arg5335z00_1877;

					{	/* SawJvm/code.scm 253 */
						obj_t BgL_casezd2valuezd2_1878;

						{	/* SawJvm/code.scm 253 */
							BgL_typez00_bglt BgL_obj1509z00_3464;

							{
								BgL_rtl_regz00_bglt BgL_auxz00_5118;

								BgL_auxz00_5118 = (BgL_rtl_regz00_bglt) (BgL_rz00_37);
								BgL_obj1509z00_3464 =
									(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_5118))->BgL_typez00);
							}
							BgL_casezd2valuezd2_1878 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_3464))->BgL_namez00);
						}
						{	/* SawJvm/code.scm 253 */
							bool_t BgL_testz00_5122;

							{	/* SawJvm/code.scm 253 */
								bool_t BgL__ortest_4962z00_1884;

								BgL__ortest_4962z00_1884 =
									(BgL_casezd2valuezd2_1878 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_4962z00_1884)
									{	/* SawJvm/code.scm 253 */
										BgL_testz00_5122 = BgL__ortest_4962z00_1884;
									}
								else
									{	/* SawJvm/code.scm 253 */
										bool_t BgL__ortest_4963z00_1885;

										BgL__ortest_4963z00_1885 =
											(BgL_casezd2valuezd2_1878 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_4963z00_1885)
											{	/* SawJvm/code.scm 253 */
												BgL_testz00_5122 = BgL__ortest_4963z00_1885;
											}
										else
											{	/* SawJvm/code.scm 253 */
												bool_t BgL__ortest_4964z00_1886;

												BgL__ortest_4964z00_1886 =
													(BgL_casezd2valuezd2_1878 ==
													CNST_TABLE_REF(((long) 20)));
												if (BgL__ortest_4964z00_1886)
													{	/* SawJvm/code.scm 253 */
														BgL_testz00_5122 = BgL__ortest_4964z00_1886;
													}
												else
													{	/* SawJvm/code.scm 253 */
														bool_t BgL__ortest_4965z00_1887;

														BgL__ortest_4965z00_1887 =
															(BgL_casezd2valuezd2_1878 ==
															CNST_TABLE_REF(((long) 21)));
														if (BgL__ortest_4965z00_1887)
															{	/* SawJvm/code.scm 253 */
																BgL_testz00_5122 = BgL__ortest_4965z00_1887;
															}
														else
															{	/* SawJvm/code.scm 253 */
																BgL_testz00_5122 =
																	(BgL_casezd2valuezd2_1878 ==
																	CNST_TABLE_REF(((long) 22)));
							}}}}}
							if (BgL_testz00_5122)
								{	/* SawJvm/code.scm 253 */
									BgL_arg5334z00_1876 = CNST_TABLE_REF(((long) 29));
								}
							else
								{	/* SawJvm/code.scm 253 */
									if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
										(BgL_casezd2valuezd2_1878, CNST_TABLE_REF(((long) 11))))
										{	/* SawJvm/code.scm 253 */
											BgL_arg5334z00_1876 = CNST_TABLE_REF(((long) 30));
										}
									else
										{	/* SawJvm/code.scm 253 */
											if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
												(BgL_casezd2valuezd2_1878, CNST_TABLE_REF(((long) 25))))
												{	/* SawJvm/code.scm 253 */
													BgL_arg5334z00_1876 = CNST_TABLE_REF(((long) 31));
												}
											else
												{	/* SawJvm/code.scm 253 */
													if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
														(BgL_casezd2valuezd2_1878,
															CNST_TABLE_REF(((long) 10))))
														{	/* SawJvm/code.scm 253 */
															BgL_arg5334z00_1876 = CNST_TABLE_REF(((long) 32));
														}
													else
														{	/* SawJvm/code.scm 253 */
															BgL_arg5334z00_1876 = CNST_TABLE_REF(((long) 33));
					}}}}}}
					{	/* SawJvm/code.scm 259 */
						obj_t BgL_arg5341z00_1889;

						{	/* SawJvm/code.scm 259 */
							BgL_lregz00_bglt BgL_obj4881z00_3465;

							BgL_obj4881z00_3465 = (BgL_lregz00_bglt) (BgL_rz00_37);
							{
								obj_t BgL_auxz00_5152;

								{	/* SawJvm/code.scm 259 */
									BgL_objectz00_bglt BgL_auxz00_5153;

									BgL_auxz00_5153 = (BgL_objectz00_bglt) (BgL_obj4881z00_3465);
									BgL_auxz00_5152 = BGL_OBJECT_WIDENING(BgL_auxz00_5153);
								}
								BgL_arg5341z00_1889 =
									(((BgL_lregz00_bglt) CREF(BgL_auxz00_5152))->BgL_idz00);
						}}
						{	/* SawJvm/code.scm 253 */
							obj_t BgL_list5343z00_1891;

							BgL_list5343z00_1891 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5335z00_1877 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5341z00_1889,
								BgL_list5343z00_1891);
					}}
					BgL_arg5333z00_1875 =
						MAKE_PAIR(BgL_arg5334z00_1876, BgL_arg5335z00_1877);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_36, BgL_arg5333z00_1875);
			}
		}
	}



/* out-line */
	obj_t BGl_outzd2linezd2zzsaw_jvm_codez00(obj_t BgL_mez00_38,
		obj_t BgL_funz00_39)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 265 */
			{	/* SawJvm/code.scm 266 */
				obj_t BgL_locz00_1892;

				{
					BgL_rtl_funz00_bglt BgL_auxz00_5161;

					BgL_auxz00_5161 = (BgL_rtl_funz00_bglt) (BgL_funz00_39);
					BgL_locz00_1892 =
						(((BgL_rtl_funz00_bglt) CREF(BgL_auxz00_5161))->BgL_locz00);
				}
				{	/* SawJvm/code.scm 267 */
					bool_t BgL_testz00_5164;

					if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
						{	/* SawJvm/code.scm 267 */
							if (STRUCTP(BgL_locz00_1892))
								{	/* SawJvm/code.scm 267 */
									BgL_testz00_5164 =
										(STRUCT_KEY(BgL_locz00_1892) ==
										CNST_TABLE_REF(((long) 34)));
								}
							else
								{	/* SawJvm/code.scm 267 */
									BgL_testz00_5164 = ((bool_t) 0);
								}
						}
					else
						{	/* SawJvm/code.scm 267 */
							BgL_testz00_5164 = ((bool_t) 0);
						}
					if (BgL_testz00_5164)
						{	/* SawJvm/code.scm 268 */
							obj_t BgL_nz00_1894;

							BgL_nz00_1894 = STRUCT_REF(BgL_locz00_1892, (int) (((long) 2)));
							{	/* SawJvm/code.scm 268 */
								long BgL_pz00_1895;

								BgL_pz00_1895 =
									(
									(long) CINT(STRUCT_REF(BgL_locz00_1892,
											(int) (((long) 1)))) + ((long) 1));
								{	/* SawJvm/code.scm 269 */
									obj_t BgL_lastz00_1896;

									if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
										{	/* SawJvm/code.scm 270 */
											BgL_lastz00_1896 = BINT(BgL_pz00_1895);
										}
									else
										{	/* SawJvm/code.scm 270 */
											BgL_lastz00_1896 = BgL_nz00_1894;
										}
									{	/* SawJvm/code.scm 270 */

										if (
											((long) CINT(BgL_lastz00_1896) ==
												(long) CINT(BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00)))
											{	/* SawJvm/code.scm 273 */
												return BFALSE;
											}
										else
											{	/* SawJvm/code.scm 273 */
												BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 =
													BgL_lastz00_1896;
												{	/* SawJvm/code.scm 275 */
													obj_t BgL_arg5346z00_1898;

													{	/* SawJvm/code.scm 275 */
														obj_t BgL_arg5347z00_1899;

														obj_t BgL_arg5348z00_1900;

														BgL_arg5347z00_1899 = CNST_TABLE_REF(((long) 35));
														{	/* SawJvm/code.scm 275 */
															obj_t BgL_list5349z00_1901;

															{	/* SawJvm/code.scm 275 */
																obj_t BgL_arg5350z00_1902;

																BgL_arg5350z00_1902 = MAKE_PAIR(BNIL, BNIL);
																BgL_list5349z00_1901 =
																	MAKE_PAIR(BINT(BgL_pz00_1895),
																	BgL_arg5350z00_1902);
															}
															BgL_arg5348z00_1900 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_nz00_1894, BgL_list5349z00_1901);
														}
														BgL_arg5346z00_1898 =
															MAKE_PAIR(BgL_arg5347z00_1899,
															BgL_arg5348z00_1900);
													}
													return
														BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_38),
														BgL_arg5346z00_1898);
												}
											}
									}
								}
							}
						}
					else
						{	/* SawJvm/code.scm 267 */
							return BFALSE;
						}
				}
			}
		}
	}



/* flat */
	obj_t BGl_flatz00zzsaw_jvm_codez00(obj_t BgL_alz00_78, obj_t BgL_ldefz00_79)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 421 */
			{
				obj_t BgL_alz00_1908;

				obj_t BgL_iz00_1909;

				obj_t BgL_rz00_1910;

				{	/* SawJvm/code.scm 428 */
					obj_t BgL_arg5353z00_1906;

					{	/* SawJvm/code.scm 428 */
						obj_t BgL_pairz00_3484;

						BgL_pairz00_3484 = BgL_alz00_78;
						BgL_arg5353z00_1906 = CAR(CAR(BgL_pairz00_3484));
					}
					BgL_alz00_1908 = BgL_alz00_78;
					BgL_iz00_1909 = BgL_arg5353z00_1906;
					BgL_rz00_1910 = BNIL;
				BgL_zc3anonymousza35355ze3z83_1911:
					if (NULLP(BgL_alz00_1908))
						{	/* SawJvm/code.scm 424 */
							return bgl_reverse_bang(BgL_rz00_1910);
						}
					else
						{	/* SawJvm/code.scm 425 */
							bool_t BgL_testz00_5198;

							{	/* SawJvm/code.scm 425 */
								long BgL_auxz00_5199;

								{	/* SawJvm/code.scm 425 */
									obj_t BgL_pairz00_3489;

									BgL_pairz00_3489 = BgL_alz00_1908;
									{	/* SawJvm/code.scm 425 */
										obj_t BgL_pairz00_3492;

										BgL_pairz00_3492 = CAR(BgL_pairz00_3489);
										BgL_auxz00_5199 = (long) CINT(CAR(BgL_pairz00_3492));
								}}
								BgL_testz00_5198 =
									((long) CINT(BgL_iz00_1909) == BgL_auxz00_5199);
							}
							if (BgL_testz00_5198)
								{	/* SawJvm/code.scm 425 */
									obj_t BgL_arg5358z00_1914;

									long BgL_arg5359z00_1915;

									obj_t BgL_arg5360z00_1916;

									BgL_arg5358z00_1914 = CDR(BgL_alz00_1908);
									BgL_arg5359z00_1915 =
										((long) CINT(BgL_iz00_1909) + ((long) 1));
									{	/* SawJvm/code.scm 425 */
										obj_t BgL_arg5361z00_1917;

										{	/* SawJvm/code.scm 425 */
											obj_t BgL_pairz00_3498;

											BgL_pairz00_3498 = BgL_alz00_1908;
											BgL_arg5361z00_1917 = CDR(CAR(BgL_pairz00_3498));
										}
										BgL_arg5360z00_1916 =
											MAKE_PAIR(BgL_arg5361z00_1917, BgL_rz00_1910);
									}
									{
										obj_t BgL_rz00_5214;

										obj_t BgL_iz00_5212;

										obj_t BgL_alz00_5211;

										BgL_alz00_5211 = BgL_arg5358z00_1914;
										BgL_iz00_5212 = BINT(BgL_arg5359z00_1915);
										BgL_rz00_5214 = BgL_arg5360z00_1916;
										BgL_rz00_1910 = BgL_rz00_5214;
										BgL_iz00_1909 = BgL_iz00_5212;
										BgL_alz00_1908 = BgL_alz00_5211;
										goto BgL_zc3anonymousza35355ze3z83_1911;
									}
								}
							else
								{	/* SawJvm/code.scm 426 */
									bool_t BgL_testz00_5215;

									{	/* SawJvm/code.scm 426 */
										long BgL_auxz00_5216;

										{	/* SawJvm/code.scm 426 */
											obj_t BgL_pairz00_3502;

											BgL_pairz00_3502 = BgL_alz00_1908;
											{	/* SawJvm/code.scm 426 */
												obj_t BgL_pairz00_3505;

												BgL_pairz00_3505 = CAR(BgL_pairz00_3502);
												BgL_auxz00_5216 = (long) CINT(CAR(BgL_pairz00_3505));
										}}
										BgL_testz00_5215 =
											((long) CINT(BgL_iz00_1909) > BgL_auxz00_5216);
									}
									if (BgL_testz00_5215)
										{
											obj_t BgL_alz00_5222;

											BgL_alz00_5222 = CDR(BgL_alz00_1908);
											BgL_alz00_1908 = BgL_alz00_5222;
											goto BgL_zc3anonymousza35355ze3z83_1911;
										}
									else
										{	/* SawJvm/code.scm 427 */
											long BgL_arg5364z00_1920;

											obj_t BgL_arg5365z00_1921;

											BgL_arg5364z00_1920 =
												((long) CINT(BgL_iz00_1909) + ((long) 1));
											BgL_arg5365z00_1921 =
												MAKE_PAIR(BgL_ldefz00_79, BgL_rz00_1910);
											{
												obj_t BgL_rz00_5229;

												obj_t BgL_iz00_5227;

												BgL_iz00_5227 = BINT(BgL_arg5364z00_1920);
												BgL_rz00_5229 = BgL_arg5365z00_1921;
												BgL_rz00_1910 = BgL_rz00_5229;
												BgL_iz00_1909 = BgL_iz00_5227;
												goto BgL_zc3anonymousza35355ze3z83_1911;
											}
										}
								}
						}
				}
			}
		}
	}



/* gen-funcall */
	obj_t BGl_genzd2funcallzd2zzsaw_jvm_codez00(obj_t BgL_mez00_91,
		obj_t BgL_argsz00_92)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 457 */
			{	/* SawJvm/code.scm 458 */
				long BgL_nz00_1925;

				BgL_nz00_1925 = (bgl_list_length(BgL_argsz00_92) - ((long) 1));
				{

					switch (BgL_nz00_1925)
						{
						case ((long) 0):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 39)));
							break;
						case ((long) 1):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 40)));
							break;
						case ((long) 2):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 41)));
							break;
						case ((long) 3):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 42)));
							break;
						case ((long) 4):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 43)));
							break;
						default:
							BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 36)));
							{	/* SawJvm/code.scm 467 */
								obj_t BgL_g5055z00_1929;

								BgL_g5055z00_1929 = CDR(BgL_argsz00_92);
								{
									obj_t BgL_l5053z00_1931;

									BgL_l5053z00_1931 = BgL_g5055z00_1929;
								BgL_zc3anonymousza35369ze3z83_1932:
									if (PAIRP(BgL_l5053z00_1931))
										{	/* SawJvm/code.scm 467 */
											BGl_codez12z12zzsaw_jvm_outz00(
												(BgL_jvmz00_bglt) (BgL_mez00_91),
												CNST_TABLE_REF(((long) 37)));
											{
												obj_t BgL_l5053z00_5256;

												BgL_l5053z00_5256 = CDR(BgL_l5053z00_1931);
												BgL_l5053z00_1931 = BgL_l5053z00_5256;
												goto BgL_zc3anonymousza35369ze3z83_1932;
											}
										}
									else
										{	/* SawJvm/code.scm 467 */
											((bool_t) 1);
										}
								}
							}
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_91), CNST_TABLE_REF(((long) 38)));
		}}}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			{	/* SawJvm/code.scm 25 */
				obj_t BgL_arg5375z00_1940;

				obj_t BgL_arg5376z00_1941;

				obj_t BgL_arg5379z00_1944;

				BgL_arg5375z00_1940 = CNST_TABLE_REF(((long) 44));
				BgL_arg5376z00_1941 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawJvm/code.scm 25 */
					obj_t BgL_v5060z00_1945;

					BgL_v5060z00_1945 = create_vector((int) (((long) 0)));
					BgL_arg5379z00_1944 = BgL_v5060z00_1945;
				}
				BGl_lregz00zzsaw_jvm_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5375z00_1940,
					BgL_arg5376z00_1941, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2lregzd2envz52zzsaw_jvm_codez00,
					BGl_lregzd2nilzd2envz00zzsaw_jvm_codez00,
					BGl_lregzf3zd2envz21zzsaw_jvm_codez00, ((long) 89989), BFALSE, BFALSE,
					BgL_arg5379z00_1944);
			}
			{	/* SawJvm/code.scm 26 */
				obj_t BgL_arg5381z00_1946;

				obj_t BgL_arg5382z00_1947;

				obj_t BgL_arg5385z00_1950;

				BgL_arg5381z00_1946 = CNST_TABLE_REF(((long) 45));
				BgL_arg5382z00_1947 = BGl_blockz00zzsaw_defsz00;
				{	/* SawJvm/code.scm 26 */
					obj_t BgL_v5061z00_1951;

					BgL_v5061z00_1951 = create_vector((int) (((long) 0)));
					BgL_arg5385z00_1950 = BgL_v5061z00_1951;
				}
				BGl_liveblockz00zzsaw_jvm_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5381z00_1946,
					BgL_arg5382z00_1947, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2liveblockzd2envz52zzsaw_jvm_codez00,
					BGl_liveblockzd2nilzd2envz00zzsaw_jvm_codez00,
					BGl_liveblockzf3zd2envz21zzsaw_jvm_codez00, ((long) 388834197),
					BFALSE, BFALSE, BgL_arg5385z00_1950);
			}
			BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00 = BUNSPEC;
			return (BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00 = BUNSPEC, BUNSPEC);
		}
	}



/* _liveblock? */
	obj_t BGl__liveblockzf3zf3zzsaw_jvm_codez00(obj_t BgL_envz00_4221,
		obj_t BgL_obj4922z00_4222)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4922z00_4222,
					BGl_liveblockz00zzsaw_jvm_codez00));
		}
	}



/* _%allocate-liveblock */
	obj_t BGl__z52allocatezd2liveblockz80zzsaw_jvm_codez00(obj_t BgL_envz00_4219)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			{	/* SawJvm/code.scm 26 */
				BgL_blockz00_bglt BgL_auxz00_5272;

				{	/* SawJvm/code.scm 26 */
					BgL_blockz00_bglt BgL_res5874z00_4465;

					{	/* SawJvm/code.scm 26 */
						BgL_blockz00_bglt BgL_new4915z00_4463;

						BgL_new4915z00_4463 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4915z00_4463),
							BGl_classzd2numzd2zz__objectz00
							(BGl_liveblockz00zzsaw_jvm_codez00));
						{	/* SawJvm/code.scm 26 */
							BgL_objectz00_bglt BgL_auxz00_5277;

							BgL_auxz00_5277 = (BgL_objectz00_bglt) (BgL_new4915z00_4463);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5277, BFALSE);
						}
						BgL_res5874z00_4465 = BgL_new4915z00_4463;
					}
					BgL_auxz00_5272 = BgL_res5874z00_4465;
				}
				return (obj_t) (BgL_auxz00_5272);
			}
		}
	}



/* liveblock-nil */
	BgL_liveblockz00_bglt BGl_liveblockzd2nilzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			if ((BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00 == BUNSPEC))
				{	/* SawJvm/code.scm 26 */
					{	/* SawJvm/code.scm 26 */
						BgL_blockz00_bglt BgL_res5775z00_3562;

						{	/* SawJvm/code.scm 26 */
							BgL_blockz00_bglt BgL_new4720z00_3558;

							BgL_new4720z00_3558 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4720z00_3558),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawJvm/code.scm 26 */
								BgL_objectz00_bglt BgL_auxz00_5287;

								BgL_auxz00_5287 = (BgL_objectz00_bglt) (BgL_new4720z00_3558);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5287, BFALSE);
							}
							BgL_res5775z00_3562 = BgL_new4720z00_3558;
						}
						BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00 =
							(obj_t) (BgL_res5775z00_3562);
					}
					{	/* SawJvm/code.scm 26 */
						obj_t BgL_arg5393z00_1965;

						BgL_arg5393z00_1965 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawJvm/code.scm 26 */
							BgL_blockz00_bglt BgL_res5776z00_3572;

							{	/* SawJvm/code.scm 26 */
								BgL_blockz00_bglt BgL_new4714z00_3563;

								int BgL_label4710z00_3564;

								BgL_new4714z00_3563 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00);
								BgL_label4710z00_3564 = (int) (((long) 0));
								{	/* SawJvm/code.scm 26 */
									int BgL_label4710z00_3568;

									obj_t BgL_preds4711z00_3569;

									obj_t BgL_succs4712z00_3570;

									obj_t BgL_first4713z00_3571;

									BgL_label4710z00_3568 = BgL_label4710z00_3564;
									BgL_preds4711z00_3569 = BNIL;
									BgL_succs4712z00_3570 = BNIL;
									BgL_first4713z00_3571 = BgL_arg5393z00_1965;
									((((BgL_blockz00_bglt) CREF(BgL_new4714z00_3563))->
											BgL_labelz00) = ((int) BgL_label4710z00_3568), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4714z00_3563))->
											BgL_predsz00) = ((obj_t) BgL_preds4711z00_3569), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4714z00_3563))->
											BgL_succsz00) = ((obj_t) BgL_succs4712z00_3570), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4714z00_3563))->
											BgL_firstz00) = ((obj_t) BgL_first4713z00_3571), BUNSPEC);
									BgL_res5776z00_3572 = BgL_new4714z00_3563;
							}} BgL_res5776z00_3572;
					}}
					{	/* SawJvm/code.scm 26 */
						long BgL_arg5394z00_1966;

						BgL_arg5394z00_1966 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_liveblockz00zzsaw_jvm_codez00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00),
							BgL_arg5394z00_1966);
					}
					{	/* SawJvm/code.scm 26 */
						BgL_liveblockz00_bglt BgL_arg5396z00_1967;

						{	/* SawJvm/code.scm 26 */
							BgL_liveblockz00_bglt BgL_res5778z00_3584;

							{	/* SawJvm/code.scm 26 */
								BgL_liveblockz00_bglt BgL_new4899z00_3577;

								BgL_new4899z00_3577 =
									((BgL_liveblockz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_liveblockz00_bgl))));
								{	/* SawJvm/code.scm 26 */
									BgL_liveblockz00_bglt BgL_res5777z00_3583;

									{	/* SawJvm/code.scm 26 */
										BgL_liveblockz00_bglt BgL_new4911z00_3578;

										BgL_new4911z00_3578 = BgL_new4899z00_3577;
										{	/* SawJvm/code.scm 26 */
											obj_t BgL_in4909z00_3581;

											obj_t BgL_out4910z00_3582;

											BgL_in4909z00_3581 = BUNSPEC;
											BgL_out4910z00_3582 = BUNSPEC;
											((((BgL_liveblockz00_bglt) CREF(BgL_new4911z00_3578))->
													BgL_inz00) = ((obj_t) BgL_in4909z00_3581), BUNSPEC);
											((((BgL_liveblockz00_bglt) CREF(BgL_new4911z00_3578))->
													BgL_outz00) = ((obj_t) BgL_out4910z00_3582), BUNSPEC);
											BgL_res5777z00_3583 = BgL_new4911z00_3578;
									}} BgL_res5777z00_3583;
								}
								BgL_res5778z00_3584 = BgL_new4899z00_3577;
							}
							BgL_arg5396z00_1967 = BgL_res5778z00_3584;
						}
						{	/* SawJvm/code.scm 26 */
							obj_t BgL_auxz00_5306;

							BgL_objectz00_bglt BgL_auxz00_5304;

							BgL_auxz00_5306 = (obj_t) (BgL_arg5396z00_1967);
							BgL_auxz00_5304 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5304, BgL_auxz00_5306);
				}}}
			else
				{	/* SawJvm/code.scm 26 */
					BFALSE;
				}
			return
				(BgL_liveblockz00_bglt)
				(BGl_z52thezd2liveblockzd2nilz52zzsaw_jvm_codez00);
		}
	}



/* _liveblock-nil */
	obj_t BGl__liveblockzd2nilzd2zzsaw_jvm_codez00(obj_t BgL_envz00_4220)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			return (obj_t) (BGl_liveblockzd2nilzd2zzsaw_jvm_codez00());
		}
	}



/* _lreg? */
	obj_t BGl__lregzf3zf3zzsaw_jvm_codez00(obj_t BgL_envz00_4217,
		obj_t BgL_obj4880z00_4218)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4880z00_4218,
					BGl_lregz00zzsaw_jvm_codez00));
		}
	}



/* _%allocate-lreg */
	obj_t BGl__z52allocatezd2lregz80zzsaw_jvm_codez00(obj_t BgL_envz00_4215)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			{	/* SawJvm/code.scm 25 */
				BgL_rtl_regz00_bglt BgL_auxz00_5314;

				{	/* SawJvm/code.scm 25 */
					BgL_rtl_regz00_bglt BgL_res5875z00_4471;

					{	/* SawJvm/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_new4873z00_4469;

						BgL_new4873z00_4469 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4873z00_4469),
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzsaw_jvm_codez00));
						{	/* SawJvm/code.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_5319;

							BgL_auxz00_5319 = (BgL_objectz00_bglt) (BgL_new4873z00_4469);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5319, BFALSE);
						}
						BgL_res5875z00_4471 = BgL_new4873z00_4469;
					}
					BgL_auxz00_5314 = BgL_res5875z00_4471;
				}
				return (obj_t) (BgL_auxz00_5314);
			}
		}
	}



/* lreg-nil */
	BgL_lregz00_bglt BGl_lregzd2nilzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			if ((BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00 == BUNSPEC))
				{	/* SawJvm/code.scm 25 */
					{	/* SawJvm/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_res5780z00_3599;

						{	/* SawJvm/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_new4022z00_3595;

							BgL_new4022z00_3595 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4022z00_3595),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawJvm/code.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_5329;

								BgL_auxz00_5329 = (BgL_objectz00_bglt) (BgL_new4022z00_3595);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5329, BFALSE);
							}
							BgL_res5780z00_3599 = BgL_new4022z00_3595;
						}
						BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00 =
							(obj_t) (BgL_res5780z00_3599);
					}
					{	/* SawJvm/code.scm 25 */
						BgL_typez00_bglt BgL_arg5401z00_1977;

						BgL_arg5401z00_1977 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawJvm/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_res5781z00_3613;

							{	/* SawJvm/code.scm 25 */
								BgL_rtl_regz00_bglt BgL_new4014z00_3600;

								BgL_new4014z00_3600 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00);
								{	/* SawJvm/code.scm 25 */
									BgL_typez00_bglt BgL_type4008z00_3607;

									obj_t BgL_var4009z00_3608;

									obj_t BgL_onexprzf34010zf3_3609;

									obj_t BgL_name4011z00_3610;

									obj_t BgL_key4012z00_3611;

									obj_t BgL_hardware4013z00_3612;

									BgL_type4008z00_3607 = BgL_arg5401z00_1977;
									BgL_var4009z00_3608 = BUNSPEC;
									BgL_onexprzf34010zf3_3609 = BUNSPEC;
									BgL_name4011z00_3610 = BUNSPEC;
									BgL_key4012z00_3611 = BUNSPEC;
									BgL_hardware4013z00_3612 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4008z00_3607), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_varz00) = ((obj_t) BgL_var4009z00_3608), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf34010zf3_3609), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_namez00) = ((obj_t) BgL_name4011z00_3610), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_keyz00) = ((obj_t) BgL_key4012z00_3611), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new4014z00_3600))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware4013z00_3612), BUNSPEC);
									BgL_res5781z00_3613 = BgL_new4014z00_3600;
							}} BgL_res5781z00_3613;
					}}
					{	/* SawJvm/code.scm 25 */
						long BgL_arg5402z00_1978;

						BgL_arg5402z00_1978 =
							BGl_classzd2numzd2zz__objectz00(BGl_lregz00zzsaw_jvm_codez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00),
							BgL_arg5402z00_1978);
					}
					{	/* SawJvm/code.scm 25 */
						BgL_lregz00_bglt BgL_arg5403z00_1979;

						{	/* SawJvm/code.scm 25 */
							BgL_lregz00_bglt BgL_res5783z00_3622;

							{	/* SawJvm/code.scm 25 */
								BgL_lregz00_bglt BgL_new4858z00_3617;

								BgL_new4858z00_3617 =
									((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_lregz00_bgl))));
								{	/* SawJvm/code.scm 25 */
									BgL_lregz00_bglt BgL_res5782z00_3621;

									{	/* SawJvm/code.scm 25 */
										BgL_lregz00_bglt BgL_new4870z00_3618;

										BgL_new4870z00_3618 = BgL_new4858z00_3617;
										{	/* SawJvm/code.scm 25 */
											obj_t BgL_id4869z00_3620;

											BgL_id4869z00_3620 = BUNSPEC;
											((((BgL_lregz00_bglt) CREF(BgL_new4870z00_3618))->
													BgL_idz00) = ((obj_t) BgL_id4869z00_3620), BUNSPEC);
											BgL_res5782z00_3621 = BgL_new4870z00_3618;
									}} BgL_res5782z00_3621;
								}
								BgL_res5783z00_3622 = BgL_new4858z00_3617;
							}
							BgL_arg5403z00_1979 = BgL_res5783z00_3622;
						}
						{	/* SawJvm/code.scm 25 */
							obj_t BgL_auxz00_5348;

							BgL_objectz00_bglt BgL_auxz00_5346;

							BgL_auxz00_5348 = (obj_t) (BgL_arg5403z00_1979);
							BgL_auxz00_5346 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5346, BgL_auxz00_5348);
				}}}
			else
				{	/* SawJvm/code.scm 25 */
					BFALSE;
				}
			return (BgL_lregz00_bglt) (BGl_z52thezd2lregzd2nilz52zzsaw_jvm_codez00);
		}
	}



/* _lreg-nil */
	obj_t BGl__lregzd2nilzd2zzsaw_jvm_codez00(obj_t BgL_envz00_4216)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			return (obj_t) (BGl_lregzd2nilzd2zzsaw_jvm_codez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_genzd2argszd2genzd2funzd2def5062zd2envzd2zzsaw_jvm_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5817z00zzsaw_jvm_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_genzd2funzd2withzd2argszd2de5064zd2envzd2zzsaw_jvm_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5818z00zzsaw_jvm_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_genzd2funzd2default5066zd2envzd2zzsaw_jvm_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
				BGl_genzd2argszd2genzd2predica5137zd2envz00zzsaw_jvm_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5820z00zzsaw_jvm_codez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2predicatezd2envz00zzsaw_jvm_codez00,
				BGl_genzd2predicatezd2defaul5139zd2envzd2zzsaw_jvm_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5821z00zzsaw_jvm_codez00);
		}
	}



/* gen-args-gen-fun */
	obj_t BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_40, obj_t BgL_mez00_41, obj_t BgL_argsz00_42)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 282 */
			{	/* SawJvm/code.scm 282 */
				obj_t BgL_method5063z00_3641;

				{	/* SawJvm/code.scm 282 */
					BgL_objectz00_bglt BgL_objz00_3642;

					BgL_objz00_3642 = (BgL_objectz00_bglt) (BgL_funz00_40);
					{	/* SawJvm/code.scm 282 */
						long BgL_objzd2classzd2numz00_3643;

						BgL_objzd2classzd2numz00_3643 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3642);
						{	/* SawJvm/code.scm 282 */
							obj_t BgL_arg2643z00_3644;

							BgL_arg2643z00_3644 =
								PROCEDURE_REF
								(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 282 */
								obj_t BgL_arrayz00_3646;

								int BgL_offsetz00_3647;

								BgL_arrayz00_3646 = BgL_arg2643z00_3644;
								BgL_offsetz00_3647 = (int) (BgL_objzd2classzd2numz00_3643);
								{	/* SawJvm/code.scm 282 */
									long BgL_offsetz00_3648;

									BgL_offsetz00_3648 =
										((long) (BgL_offsetz00_3647) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 282 */
										long BgL_modz00_3649;

										{	/* SawJvm/code.scm 282 */
											int BgL_arg2645z00_3650;

											BgL_arg2645z00_3650 = (int) (((long) 16));
											{	/* SawJvm/code.scm 282 */
												long BgL_auxz00_5367;

												BgL_auxz00_5367 = (long) (BgL_arg2645z00_3650);
												BgL_modz00_3649 =
													(BgL_offsetz00_3648 / BgL_auxz00_5367);
										}}
										{	/* SawJvm/code.scm 282 */
											long BgL_restz00_3651;

											{	/* SawJvm/code.scm 282 */
												int BgL_arg2644z00_3652;

												BgL_arg2644z00_3652 = (int) (((long) 16));
												{	/* SawJvm/code.scm 282 */
													long BgL_auxz00_5371;

													BgL_auxz00_5371 = (long) (BgL_arg2644z00_3652);
													BgL_restz00_3651 =
														(BgL_offsetz00_3648 % BgL_auxz00_5371);
											}}
											{	/* SawJvm/code.scm 282 */

												BgL_method5063z00_3641 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3646,
														(int) (BgL_modz00_3649)), (int) (BgL_restz00_3651));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5063z00_3641) (BgL_method5063z00_3641,
					(obj_t) (BgL_funz00_40), BgL_mez00_41, BgL_argsz00_42, BEOA);
			}
		}
	}



/* _gen-args-gen-fun */
	obj_t BGl__genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(obj_t BgL_envz00_4208,
		obj_t BgL_funz00_4209, obj_t BgL_mez00_4210, obj_t BgL_argsz00_4211)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 282 */
			return
				BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4209), BgL_mez00_4210,
				BgL_argsz00_4211);
		}
	}



/* gen-args-gen-fun-def5062 */
	obj_t
		BGl_genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_43, obj_t BgL_mez00_44, obj_t BgL_argsz00_45)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			{
				obj_t BgL_l5030z00_2618;

				BgL_l5030z00_2618 = BgL_argsz00_45;
			BgL_zc3anonymousza35504ze3z83_2619:
				if (PAIRP(BgL_l5030z00_2618))
					{	/* SawJvm/code.scm 284 */
						BGl_genzd2exprzd2zzsaw_jvm_codez00(
							(BgL_jvmz00_bglt) (BgL_mez00_44), CAR(BgL_l5030z00_2618));
						{
							obj_t BgL_l5030z00_5388;

							BgL_l5030z00_5388 = CDR(BgL_l5030z00_2618);
							BgL_l5030z00_2618 = BgL_l5030z00_5388;
							goto BgL_zc3anonymousza35504ze3z83_2619;
						}
					}
				else
					{	/* SawJvm/code.scm 284 */
						((bool_t) 1);
					}
			}
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_44, (obj_t) (BgL_funz00_43));
			{	/* SawJvm/code.scm 286 */
				obj_t BgL_method5065z00_3672;

				{	/* SawJvm/code.scm 286 */
					BgL_objectz00_bglt BgL_objz00_3673;

					BgL_objz00_3673 = (BgL_objectz00_bglt) (BgL_funz00_43);
					{	/* SawJvm/code.scm 286 */
						long BgL_objzd2classzd2numz00_3674;

						BgL_objzd2classzd2numz00_3674 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3673);
						{	/* SawJvm/code.scm 286 */
							obj_t BgL_arg2643z00_3675;

							BgL_arg2643z00_3675 =
								PROCEDURE_REF
								(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 286 */
								obj_t BgL_arrayz00_3677;

								int BgL_offsetz00_3678;

								BgL_arrayz00_3677 = BgL_arg2643z00_3675;
								BgL_offsetz00_3678 = (int) (BgL_objzd2classzd2numz00_3674);
								{	/* SawJvm/code.scm 286 */
									long BgL_offsetz00_3679;

									BgL_offsetz00_3679 =
										((long) (BgL_offsetz00_3678) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 286 */
										long BgL_modz00_3680;

										{	/* SawJvm/code.scm 286 */
											int BgL_arg2645z00_3681;

											BgL_arg2645z00_3681 = (int) (((long) 16));
											{	/* SawJvm/code.scm 286 */
												long BgL_auxz00_5400;

												BgL_auxz00_5400 = (long) (BgL_arg2645z00_3681);
												BgL_modz00_3680 =
													(BgL_offsetz00_3679 / BgL_auxz00_5400);
										}}
										{	/* SawJvm/code.scm 286 */
											long BgL_restz00_3682;

											{	/* SawJvm/code.scm 286 */
												int BgL_arg2644z00_3683;

												BgL_arg2644z00_3683 = (int) (((long) 16));
												{	/* SawJvm/code.scm 286 */
													long BgL_auxz00_5404;

													BgL_auxz00_5404 = (long) (BgL_arg2644z00_3683);
													BgL_restz00_3682 =
														(BgL_offsetz00_3679 % BgL_auxz00_5404);
											}}
											{	/* SawJvm/code.scm 286 */

												BgL_method5065z00_3672 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3677,
														(int) (BgL_modz00_3680)), (int) (BgL_restz00_3682));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5065z00_3672) (BgL_method5065z00_3672,
					(obj_t) (BgL_funz00_43), BgL_mez00_44, BgL_argsz00_45, BEOA);
			}
		}
	}



/* _gen-args-gen-fun-def5062 */
	obj_t BGl__genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4223, obj_t BgL_funz00_4224, obj_t BgL_mez00_4225,
		obj_t BgL_argsz00_4226)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_genzd2argszd2genzd2funzd2def5062z00zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4224), BgL_mez00_4225,
				BgL_argsz00_4226);
		}
	}



/* gen-fun-with-args */
	obj_t BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_46, obj_t BgL_mez00_47, obj_t BgL_argsz00_48)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 292 */
			{	/* SawJvm/code.scm 292 */
				obj_t BgL_method5065z00_3697;

				{	/* SawJvm/code.scm 292 */
					BgL_objectz00_bglt BgL_objz00_3698;

					BgL_objz00_3698 = (BgL_objectz00_bglt) (BgL_funz00_46);
					{	/* SawJvm/code.scm 292 */
						long BgL_objzd2classzd2numz00_3699;

						BgL_objzd2classzd2numz00_3699 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3698);
						{	/* SawJvm/code.scm 292 */
							obj_t BgL_arg2643z00_3700;

							BgL_arg2643z00_3700 =
								PROCEDURE_REF
								(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 292 */
								obj_t BgL_arrayz00_3702;

								int BgL_offsetz00_3703;

								BgL_arrayz00_3702 = BgL_arg2643z00_3700;
								BgL_offsetz00_3703 = (int) (BgL_objzd2classzd2numz00_3699);
								{	/* SawJvm/code.scm 292 */
									long BgL_offsetz00_3704;

									BgL_offsetz00_3704 =
										((long) (BgL_offsetz00_3703) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 292 */
										long BgL_modz00_3705;

										{	/* SawJvm/code.scm 292 */
											int BgL_arg2645z00_3706;

											BgL_arg2645z00_3706 = (int) (((long) 16));
											{	/* SawJvm/code.scm 292 */
												long BgL_auxz00_5424;

												BgL_auxz00_5424 = (long) (BgL_arg2645z00_3706);
												BgL_modz00_3705 =
													(BgL_offsetz00_3704 / BgL_auxz00_5424);
										}}
										{	/* SawJvm/code.scm 292 */
											long BgL_restz00_3707;

											{	/* SawJvm/code.scm 292 */
												int BgL_arg2644z00_3708;

												BgL_arg2644z00_3708 = (int) (((long) 16));
												{	/* SawJvm/code.scm 292 */
													long BgL_auxz00_5428;

													BgL_auxz00_5428 = (long) (BgL_arg2644z00_3708);
													BgL_restz00_3707 =
														(BgL_offsetz00_3704 % BgL_auxz00_5428);
											}}
											{	/* SawJvm/code.scm 292 */

												BgL_method5065z00_3697 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3702,
														(int) (BgL_modz00_3705)), (int) (BgL_restz00_3707));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5065z00_3697) (BgL_method5065z00_3697,
					(obj_t) (BgL_funz00_46), BgL_mez00_47, BgL_argsz00_48, BEOA);
			}
		}
	}



/* _gen-fun-with-args */
	obj_t BGl__genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(obj_t BgL_envz00_4227,
		obj_t BgL_funz00_4228, obj_t BgL_mez00_4229, obj_t BgL_argsz00_4230)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 292 */
			return
				BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4228), BgL_mez00_4229,
				BgL_argsz00_4230);
		}
	}



/* gen-fun-with-args-de5064 */
	obj_t
		BGl_genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_49, obj_t BgL_mez00_50, obj_t BgL_argsz00_51)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			{	/* SawJvm/code.scm 294 */
				obj_t BgL_method5067z00_3724;

				{	/* SawJvm/code.scm 294 */
					BgL_objectz00_bglt BgL_objz00_3725;

					BgL_objz00_3725 = (BgL_objectz00_bglt) (BgL_funz00_49);
					{	/* SawJvm/code.scm 294 */
						long BgL_objzd2classzd2numz00_3726;

						BgL_objzd2classzd2numz00_3726 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3725);
						{	/* SawJvm/code.scm 294 */
							obj_t BgL_arg2643z00_3727;

							BgL_arg2643z00_3727 =
								PROCEDURE_REF(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 294 */
								obj_t BgL_arrayz00_3729;

								int BgL_offsetz00_3730;

								BgL_arrayz00_3729 = BgL_arg2643z00_3727;
								BgL_offsetz00_3730 = (int) (BgL_objzd2classzd2numz00_3726);
								{	/* SawJvm/code.scm 294 */
									long BgL_offsetz00_3731;

									BgL_offsetz00_3731 =
										((long) (BgL_offsetz00_3730) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 294 */
										long BgL_modz00_3732;

										{	/* SawJvm/code.scm 294 */
											int BgL_arg2645z00_3733;

											BgL_arg2645z00_3733 = (int) (((long) 16));
											{	/* SawJvm/code.scm 294 */
												long BgL_auxz00_5448;

												BgL_auxz00_5448 = (long) (BgL_arg2645z00_3733);
												BgL_modz00_3732 =
													(BgL_offsetz00_3731 / BgL_auxz00_5448);
										}}
										{	/* SawJvm/code.scm 294 */
											long BgL_restz00_3734;

											{	/* SawJvm/code.scm 294 */
												int BgL_arg2644z00_3735;

												BgL_arg2644z00_3735 = (int) (((long) 16));
												{	/* SawJvm/code.scm 294 */
													long BgL_auxz00_5452;

													BgL_auxz00_5452 = (long) (BgL_arg2644z00_3735);
													BgL_restz00_3734 =
														(BgL_offsetz00_3731 % BgL_auxz00_5452);
											}}
											{	/* SawJvm/code.scm 294 */

												BgL_method5067z00_3724 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3729,
														(int) (BgL_modz00_3732)), (int) (BgL_restz00_3734));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5067z00_3724) (BgL_method5067z00_3724,
					(obj_t) (BgL_funz00_49), BgL_mez00_50, BEOA);
			}
		}
	}



/* _gen-fun-with-args-de5064 */
	obj_t BGl__genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4231, obj_t BgL_funz00_4232, obj_t BgL_mez00_4233,
		obj_t BgL_argsz00_4234)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_genzd2funzd2withzd2argszd2de5064z00zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4232), BgL_mez00_4233,
				BgL_argsz00_4234);
		}
	}



/* gen-fun */
	obj_t BGl_genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt BgL_funz00_52,
		obj_t BgL_mez00_53)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 299 */
			{	/* SawJvm/code.scm 299 */
				obj_t BgL_method5067z00_3749;

				{	/* SawJvm/code.scm 299 */
					BgL_objectz00_bglt BgL_objz00_3750;

					BgL_objz00_3750 = (BgL_objectz00_bglt) (BgL_funz00_52);
					{	/* SawJvm/code.scm 299 */
						long BgL_objzd2classzd2numz00_3751;

						BgL_objzd2classzd2numz00_3751 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3750);
						{	/* SawJvm/code.scm 299 */
							obj_t BgL_arg2643z00_3752;

							BgL_arg2643z00_3752 =
								PROCEDURE_REF(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 299 */
								obj_t BgL_arrayz00_3754;

								int BgL_offsetz00_3755;

								BgL_arrayz00_3754 = BgL_arg2643z00_3752;
								BgL_offsetz00_3755 = (int) (BgL_objzd2classzd2numz00_3751);
								{	/* SawJvm/code.scm 299 */
									long BgL_offsetz00_3756;

									BgL_offsetz00_3756 =
										((long) (BgL_offsetz00_3755) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 299 */
										long BgL_modz00_3757;

										{	/* SawJvm/code.scm 299 */
											int BgL_arg2645z00_3758;

											BgL_arg2645z00_3758 = (int) (((long) 16));
											{	/* SawJvm/code.scm 299 */
												long BgL_auxz00_5472;

												BgL_auxz00_5472 = (long) (BgL_arg2645z00_3758);
												BgL_modz00_3757 =
													(BgL_offsetz00_3756 / BgL_auxz00_5472);
										}}
										{	/* SawJvm/code.scm 299 */
											long BgL_restz00_3759;

											{	/* SawJvm/code.scm 299 */
												int BgL_arg2644z00_3760;

												BgL_arg2644z00_3760 = (int) (((long) 16));
												{	/* SawJvm/code.scm 299 */
													long BgL_auxz00_5476;

													BgL_auxz00_5476 = (long) (BgL_arg2644z00_3760);
													BgL_restz00_3759 =
														(BgL_offsetz00_3756 % BgL_auxz00_5476);
											}}
											{	/* SawJvm/code.scm 299 */

												BgL_method5067z00_3749 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3754,
														(int) (BgL_modz00_3757)), (int) (BgL_restz00_3759));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5067z00_3749) (BgL_method5067z00_3749,
					(obj_t) (BgL_funz00_52), BgL_mez00_53, BEOA);
			}
		}
	}



/* _gen-fun */
	obj_t BGl__genzd2funzd2zzsaw_jvm_codez00(obj_t BgL_envz00_4235,
		obj_t BgL_funz00_4236, obj_t BgL_mez00_4237)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 299 */
			return
				BGl_genzd2funzd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4236), BgL_mez00_4237);
		}
	}



/* gen-fun-default5066 */
	obj_t BGl_genzd2funzd2default5066z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_54, obj_t BgL_mez00_55)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 46)),
				BGl_string5822z00zzsaw_jvm_codez00, (obj_t) (BgL_funz00_54));
		}
	}



/* _gen-fun-default5066 */
	obj_t BGl__genzd2funzd2default5066z00zzsaw_jvm_codez00(obj_t BgL_envz00_4238,
		obj_t BgL_funz00_4239, obj_t BgL_mez00_4240)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_genzd2funzd2default5066z00zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4239), BgL_mez00_4240);
		}
	}



/* gen-args-gen-predicate */
	obj_t BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_136, obj_t BgL_mez00_137, obj_t BgL_argsz00_138,
		obj_t BgL_onzf3zf3_139, obj_t BgL_labz00_140)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 617 */
			{	/* SawJvm/code.scm 617 */
				obj_t BgL_method5138z00_3774;

				{	/* SawJvm/code.scm 617 */
					BgL_objectz00_bglt BgL_objz00_3775;

					BgL_objz00_3775 = (BgL_objectz00_bglt) (BgL_funz00_136);
					{	/* SawJvm/code.scm 617 */
						long BgL_objzd2classzd2numz00_3776;

						BgL_objzd2classzd2numz00_3776 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3775);
						{	/* SawJvm/code.scm 617 */
							obj_t BgL_arg2643z00_3777;

							BgL_arg2643z00_3777 =
								PROCEDURE_REF
								(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 617 */
								obj_t BgL_arrayz00_3779;

								int BgL_offsetz00_3780;

								BgL_arrayz00_3779 = BgL_arg2643z00_3777;
								BgL_offsetz00_3780 = (int) (BgL_objzd2classzd2numz00_3776);
								{	/* SawJvm/code.scm 617 */
									long BgL_offsetz00_3781;

									BgL_offsetz00_3781 =
										((long) (BgL_offsetz00_3780) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 617 */
										long BgL_modz00_3782;

										{	/* SawJvm/code.scm 617 */
											int BgL_arg2645z00_3783;

											BgL_arg2645z00_3783 = (int) (((long) 16));
											{	/* SawJvm/code.scm 617 */
												long BgL_auxz00_5501;

												BgL_auxz00_5501 = (long) (BgL_arg2645z00_3783);
												BgL_modz00_3782 =
													(BgL_offsetz00_3781 / BgL_auxz00_5501);
										}}
										{	/* SawJvm/code.scm 617 */
											long BgL_restz00_3784;

											{	/* SawJvm/code.scm 617 */
												int BgL_arg2644z00_3785;

												BgL_arg2644z00_3785 = (int) (((long) 16));
												{	/* SawJvm/code.scm 617 */
													long BgL_auxz00_5505;

													BgL_auxz00_5505 = (long) (BgL_arg2644z00_3785);
													BgL_restz00_3784 =
														(BgL_offsetz00_3781 % BgL_auxz00_5505);
											}}
											{	/* SawJvm/code.scm 617 */

												BgL_method5138z00_3774 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3779,
														(int) (BgL_modz00_3782)), (int) (BgL_restz00_3784));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5138z00_3774) (BgL_method5138z00_3774,
					(obj_t) (BgL_funz00_136), BgL_mez00_137, BgL_argsz00_138,
					BgL_onzf3zf3_139, BgL_labz00_140, BEOA);
			}
		}
	}



/* _gen-args-gen-predicate */
	obj_t BGl__genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(obj_t
		BgL_envz00_4241, obj_t BgL_funz00_4242, obj_t BgL_mez00_4243,
		obj_t BgL_argsz00_4244, obj_t BgL_onzf3zf3_4245, obj_t BgL_labz00_4246)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 617 */
			return
				BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4242), BgL_mez00_4243,
				BgL_argsz00_4244, BgL_onzf3zf3_4245, BgL_labz00_4246);
		}
	}



/* gen-args-gen-predica5137 */
	obj_t
		BGl_genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_141, obj_t BgL_mez00_142, obj_t BgL_argsz00_143,
		obj_t BgL_onzf3zf3_144, obj_t BgL_labz00_145)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			{
				obj_t BgL_l5058z00_2628;

				BgL_l5058z00_2628 = BgL_argsz00_143;
			BgL_zc3anonymousza35507ze3z83_2629:
				if (PAIRP(BgL_l5058z00_2628))
					{	/* SawJvm/code.scm 619 */
						BGl_genzd2exprzd2zzsaw_jvm_codez00(
							(BgL_jvmz00_bglt) (BgL_mez00_142), CAR(BgL_l5058z00_2628));
						{
							obj_t BgL_l5058z00_5522;

							BgL_l5058z00_5522 = CDR(BgL_l5058z00_2628);
							BgL_l5058z00_2628 = BgL_l5058z00_5522;
							goto BgL_zc3anonymousza35507ze3z83_2629;
						}
					}
				else
					{	/* SawJvm/code.scm 619 */
						((bool_t) 1);
					}
			}
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_142,
				(obj_t) (BgL_funz00_141));
			{	/* SawJvm/code.scm 621 */
				obj_t BgL_method5140z00_3806;

				{	/* SawJvm/code.scm 621 */
					BgL_objectz00_bglt BgL_objz00_3807;

					BgL_objz00_3807 = (BgL_objectz00_bglt) (BgL_funz00_141);
					{	/* SawJvm/code.scm 621 */
						long BgL_objzd2classzd2numz00_3808;

						BgL_objzd2classzd2numz00_3808 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3807);
						{	/* SawJvm/code.scm 621 */
							obj_t BgL_arg2643z00_3809;

							BgL_arg2643z00_3809 =
								PROCEDURE_REF(BGl_genzd2predicatezd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 621 */
								obj_t BgL_arrayz00_3811;

								int BgL_offsetz00_3812;

								BgL_arrayz00_3811 = BgL_arg2643z00_3809;
								BgL_offsetz00_3812 = (int) (BgL_objzd2classzd2numz00_3808);
								{	/* SawJvm/code.scm 621 */
									long BgL_offsetz00_3813;

									BgL_offsetz00_3813 =
										((long) (BgL_offsetz00_3812) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 621 */
										long BgL_modz00_3814;

										{	/* SawJvm/code.scm 621 */
											int BgL_arg2645z00_3815;

											BgL_arg2645z00_3815 = (int) (((long) 16));
											{	/* SawJvm/code.scm 621 */
												long BgL_auxz00_5534;

												BgL_auxz00_5534 = (long) (BgL_arg2645z00_3815);
												BgL_modz00_3814 =
													(BgL_offsetz00_3813 / BgL_auxz00_5534);
										}}
										{	/* SawJvm/code.scm 621 */
											long BgL_restz00_3816;

											{	/* SawJvm/code.scm 621 */
												int BgL_arg2644z00_3817;

												BgL_arg2644z00_3817 = (int) (((long) 16));
												{	/* SawJvm/code.scm 621 */
													long BgL_auxz00_5538;

													BgL_auxz00_5538 = (long) (BgL_arg2644z00_3817);
													BgL_restz00_3816 =
														(BgL_offsetz00_3813 % BgL_auxz00_5538);
											}}
											{	/* SawJvm/code.scm 621 */

												BgL_method5140z00_3806 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3811,
														(int) (BgL_modz00_3814)), (int) (BgL_restz00_3816));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5140z00_3806) (BgL_method5140z00_3806,
					(obj_t) (BgL_funz00_141), BgL_mez00_142, BgL_onzf3zf3_144,
					BgL_labz00_145, BEOA);
			}
		}
	}



/* _gen-args-gen-predica5137 */
	obj_t BGl__genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00(obj_t
		BgL_envz00_4247, obj_t BgL_funz00_4248, obj_t BgL_mez00_4249,
		obj_t BgL_argsz00_4250, obj_t BgL_onzf3zf3_4251, obj_t BgL_labz00_4252)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_genzd2argszd2genzd2predica5137zd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4248), BgL_mez00_4249,
				BgL_argsz00_4250, BgL_onzf3zf3_4251, BgL_labz00_4252);
		}
	}



/* gen-predicate */
	obj_t BGl_genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_146, obj_t BgL_mez00_147, obj_t BgL_onzf3zf3_148,
		obj_t BgL_labz00_149)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 626 */
			{	/* SawJvm/code.scm 626 */
				obj_t BgL_method5140z00_3831;

				{	/* SawJvm/code.scm 626 */
					BgL_objectz00_bglt BgL_objz00_3832;

					BgL_objz00_3832 = (BgL_objectz00_bglt) (BgL_funz00_146);
					{	/* SawJvm/code.scm 626 */
						long BgL_objzd2classzd2numz00_3833;

						BgL_objzd2classzd2numz00_3833 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3832);
						{	/* SawJvm/code.scm 626 */
							obj_t BgL_arg2643z00_3834;

							BgL_arg2643z00_3834 =
								PROCEDURE_REF(BGl_genzd2predicatezd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 626 */
								obj_t BgL_arrayz00_3836;

								int BgL_offsetz00_3837;

								BgL_arrayz00_3836 = BgL_arg2643z00_3834;
								BgL_offsetz00_3837 = (int) (BgL_objzd2classzd2numz00_3833);
								{	/* SawJvm/code.scm 626 */
									long BgL_offsetz00_3838;

									BgL_offsetz00_3838 =
										((long) (BgL_offsetz00_3837) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 626 */
										long BgL_modz00_3839;

										{	/* SawJvm/code.scm 626 */
											int BgL_arg2645z00_3840;

											BgL_arg2645z00_3840 = (int) (((long) 16));
											{	/* SawJvm/code.scm 626 */
												long BgL_auxz00_5558;

												BgL_auxz00_5558 = (long) (BgL_arg2645z00_3840);
												BgL_modz00_3839 =
													(BgL_offsetz00_3838 / BgL_auxz00_5558);
										}}
										{	/* SawJvm/code.scm 626 */
											long BgL_restz00_3841;

											{	/* SawJvm/code.scm 626 */
												int BgL_arg2644z00_3842;

												BgL_arg2644z00_3842 = (int) (((long) 16));
												{	/* SawJvm/code.scm 626 */
													long BgL_auxz00_5562;

													BgL_auxz00_5562 = (long) (BgL_arg2644z00_3842);
													BgL_restz00_3841 =
														(BgL_offsetz00_3838 % BgL_auxz00_5562);
											}}
											{	/* SawJvm/code.scm 626 */

												BgL_method5140z00_3831 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3836,
														(int) (BgL_modz00_3839)), (int) (BgL_restz00_3841));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5140z00_3831) (BgL_method5140z00_3831,
					(obj_t) (BgL_funz00_146), BgL_mez00_147, BgL_onzf3zf3_148,
					BgL_labz00_149, BEOA);
			}
		}
	}



/* _gen-predicate */
	obj_t BGl__genzd2predicatezd2zzsaw_jvm_codez00(obj_t BgL_envz00_4253,
		obj_t BgL_funz00_4254, obj_t BgL_mez00_4255, obj_t BgL_onzf3zf3_4256,
		obj_t BgL_labz00_4257)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 626 */
			return
				BGl_genzd2predicatezd2zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4254), BgL_mez00_4255,
				BgL_onzf3zf3_4256, BgL_labz00_4257);
		}
	}



/* gen-predicate-defaul5139 */
	obj_t BGl_genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_150, obj_t BgL_mez00_151, obj_t BgL_onzf3zf3_152,
		obj_t BgL_labz00_153)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_genzd2funzd2zzsaw_jvm_codez00(BgL_funz00_150, BgL_mez00_151);
			{	/* SawJvm/code.scm 627 */
				obj_t BgL_arg5374z00_3860;

				if (CBOOL(BgL_onzf3zf3_152))
					{	/* SawJvm/code.scm 627 */
						BgL_arg5374z00_3860 = CNST_TABLE_REF(((long) 47));
					}
				else
					{	/* SawJvm/code.scm 627 */
						BgL_arg5374z00_3860 = CNST_TABLE_REF(((long) 48));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_151), BgL_arg5374z00_3860,
					BgL_labz00_153);
			}
		}
	}



/* _gen-predicate-defaul5139 */
	obj_t BGl__genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4258, obj_t BgL_funz00_4259, obj_t BgL_mez00_4260,
		obj_t BgL_onzf3zf3_4261, obj_t BgL_labz00_4262)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			return
				BGl_genzd2predicatezd2defaul5139z00zzsaw_jvm_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_4259), BgL_mez00_4260,
				BgL_onzf3zf3_4261, BgL_labz00_4262);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_nopz00zzsaw_defsz00,
				BGl_proc5823z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc5824z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc5825z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc5826z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc5827z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5828z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_ifeqz00zzsaw_defsz00, BGl_proc5829z00zzsaw_jvm_codez00,
				BGl_string5817z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_ifnez00zzsaw_defsz00, BGl_proc5830z00zzsaw_jvm_codez00,
				BGl_string5817z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc5831z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc5832z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5833z00zzsaw_jvm_codez00,
				BGl_string5817z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc5834z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc5835z00zzsaw_jvm_codez00,
				BGl_string5818z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc5836z00zzsaw_jvm_codez00,
				BGl_string5818z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc5837z00zzsaw_jvm_codez00,
				BGl_string5818z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc5838z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc5839z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc5840z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc5841z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc5842z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc5843z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc5844z00zzsaw_jvm_codez00,
				BGl_string5817z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc5845z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc5846z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_isaz00zzsaw_defsz00,
				BGl_proc5847z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc5848z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc5849z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_makeboxz00zzsaw_defsz00, BGl_proc5850z00zzsaw_jvm_codez00,
				BGl_string5817z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_boxrefz00zzsaw_defsz00, BGl_proc5851z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_boxsetz00zzsaw_defsz00, BGl_proc5852z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_jumpexitz00zzsaw_defsz00, BGl_proc5853z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_failz00zzsaw_defsz00,
				BGl_proc5854z00zzsaw_jvm_codez00, BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc5855z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_protectedz00zzsaw_defsz00, BGl_proc5856z00zzsaw_jvm_codez00,
				BGl_string5819z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2predicatezd2envz00zzsaw_jvm_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc5857z00zzsaw_jvm_codez00,
				BGl_string5821z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_liveblockz00zzsaw_jvm_codez00, BGl_proc5858z00zzsaw_jvm_codez00,
				BGl_string5859z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_liveblockz00zzsaw_jvm_codez00, BGl_proc5860z00zzsaw_jvm_codez00,
				BGl_string5861z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_lregz00zzsaw_jvm_codez00, BGl_proc5862z00zzsaw_jvm_codez00,
				BGl_string5859z00zzsaw_jvm_codez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_lregz00zzsaw_jvm_codez00, BGl_proc5863z00zzsaw_jvm_codez00,
				BGl_string5861z00zzsaw_jvm_codez00);
		}
	}



/* struct+object->objec5150 */
	obj_t BGl_structzb2objectzd2ze3objec5150z83zzsaw_jvm_codez00(obj_t
		BgL_envz00_4309, obj_t BgL_oz00_4310, obj_t BgL_sz00_4311)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			{
				BgL_lregz00_bglt BgL_oz00_3183;

				obj_t BgL_sz00_3184;

				{	/* SawJvm/code.scm 25 */
					BgL_lregz00_bglt BgL_auxz00_5622;

					BgL_oz00_3183 = (BgL_lregz00_bglt) (BgL_oz00_4310);
					BgL_sz00_3184 = BgL_sz00_4311;
					{

						{	/* SawJvm/code.scm 25 */
							obj_t BgL_old4877z00_3187;

							obj_t BgL_aux4878z00_3188;

							{	/* SawJvm/code.scm 25 */
								obj_t BgL_nextzd2method5149zd2_3193;

								BgL_nextzd2method5149zd2_3193 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3183),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_lregz00zzsaw_jvm_codez00);
								if (PROCEDUREP(BgL_nextzd2method5149zd2_3193))
									{	/* SawJvm/code.scm 25 */
										BgL_old4877z00_3187 =
											PROCEDURE_ENTRY(BgL_nextzd2method5149zd2_3193)
											(BgL_nextzd2method5149zd2_3193, (obj_t) (BgL_oz00_3183),
											BgL_sz00_3184, BEOA);
									}
								else
									{	/* SawJvm/code.scm 25 */
										BgL_old4877z00_3187 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3183), BgL_sz00_3184));
									}
							}
							BgL_aux4878z00_3188 =
								STRUCT_REF(BgL_sz00_3184, (int) (((long) 0)));
							{	/* SawJvm/code.scm 25 */
								BgL_lregz00_bglt BgL_new4879z00_3189;

								BgL_new4879z00_3189 =
									((BgL_lregz00_bglt) (BgL_old4877z00_3187));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4879z00_3189),
									BGl_classzd2numzd2zz__objectz00
									(BGl_lregz00zzsaw_jvm_codez00));
								{	/* SawJvm/code.scm 25 */
									BgL_lregz00_bglt BgL_arg5756z00_3191;

									{	/* SawJvm/code.scm 25 */
										obj_t BgL_arg5757z00_3192;

										BgL_arg5757z00_3192 =
											STRUCT_REF(BgL_aux4878z00_3188, (int) (((long) 0)));
										{	/* SawJvm/code.scm 25 */
											BgL_lregz00_bglt BgL_res5811z00_4202;

											{	/* SawJvm/code.scm 25 */
												BgL_lregz00_bglt BgL_new4858z00_4197;

												BgL_new4858z00_4197 =
													((BgL_lregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_lregz00_bgl))));
												{	/* SawJvm/code.scm 25 */
													BgL_lregz00_bglt BgL_res5810z00_4201;

													{	/* SawJvm/code.scm 25 */
														BgL_lregz00_bglt BgL_new4870z00_4198;

														BgL_new4870z00_4198 = BgL_new4858z00_4197;
														{	/* SawJvm/code.scm 25 */
															obj_t BgL_id4869z00_4200;

															BgL_id4869z00_4200 = BgL_arg5757z00_3192;
															((((BgL_lregz00_bglt) CREF(BgL_new4870z00_4198))->
																	BgL_idz00) =
																((obj_t) BgL_id4869z00_4200), BUNSPEC);
															BgL_res5810z00_4201 = BgL_new4870z00_4198;
													}} BgL_res5810z00_4201;
												}
												BgL_res5811z00_4202 = BgL_new4858z00_4197;
											}
											BgL_arg5756z00_3191 = BgL_res5811z00_4202;
									}}
									{	/* SawJvm/code.scm 25 */
										obj_t BgL_auxz00_5645;

										BgL_objectz00_bglt BgL_auxz00_5643;

										BgL_auxz00_5645 = (obj_t) (BgL_arg5756z00_3191);
										BgL_auxz00_5643 =
											(BgL_objectz00_bglt) (BgL_new4879z00_3189);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5643, BgL_auxz00_5645);
								}}
								BgL_auxz00_5622 = BgL_new4879z00_3189;
					}}}
					return (obj_t) (BgL_auxz00_5622);
				}
			}
		}
	}



/* object->struct-lreg5148 */
	obj_t BGl_objectzd2ze3structzd2lreg5148ze3zzsaw_jvm_codez00(obj_t
		BgL_envz00_4312, obj_t BgL_obj4874z00_4313)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 25 */
			{
				BgL_lregz00_bglt BgL_obj4874z00_3173;

				BgL_obj4874z00_3173 = (BgL_lregz00_bglt) (BgL_obj4874z00_4313);
				{

					{	/* SawJvm/code.scm 25 */
						obj_t BgL_res4875z00_3176;

						{	/* SawJvm/code.scm 25 */
							obj_t BgL_nextzd2method5147zd2_3181;

							BgL_nextzd2method5147zd2_3181 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4874z00_3173),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_lregz00zzsaw_jvm_codez00);
							if (PROCEDUREP(BgL_nextzd2method5147zd2_3181))
								{	/* SawJvm/code.scm 25 */
									BgL_res4875z00_3176 =
										PROCEDURE_ENTRY(BgL_nextzd2method5147zd2_3181)
										(BgL_nextzd2method5147zd2_3181,
										(obj_t) (BgL_obj4874z00_3173), BEOA);
								}
							else
								{	/* SawJvm/code.scm 25 */
									BgL_res4875z00_3176 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4874z00_3173));
								}
						}
						{	/* SawJvm/code.scm 25 */
							obj_t BgL_aux4876z00_3177;

							{	/* SawJvm/code.scm 25 */
								obj_t BgL_keyz00_4173;

								BgL_keyz00_4173 = CNST_TABLE_REF(((long) 44));
								BgL_aux4876z00_3177 =
									make_struct(BgL_keyz00_4173, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawJvm/code.scm 25 */
								obj_t BgL_arg5752z00_3179;

								{
									obj_t BgL_auxz00_5662;

									{	/* SawJvm/code.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_5663;

										BgL_auxz00_5663 =
											(BgL_objectz00_bglt) (BgL_obj4874z00_3173);
										BgL_auxz00_5662 = BGL_OBJECT_WIDENING(BgL_auxz00_5663);
									}
									BgL_arg5752z00_3179 =
										(((BgL_lregz00_bglt) CREF(BgL_auxz00_5662))->BgL_idz00);
								}
								{	/* SawJvm/code.scm 25 */
									int BgL_auxz00_5667;

									BgL_auxz00_5667 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4876z00_3177, BgL_auxz00_5667,
										BgL_arg5752z00_3179);
							}}
							{	/* SawJvm/code.scm 25 */
								int BgL_auxz00_5670;

								BgL_auxz00_5670 = (int) (((long) 0));
								STRUCT_SET(BgL_res4875z00_3176, BgL_auxz00_5670,
									BgL_aux4876z00_3177);
							}
							{	/* SawJvm/code.scm 25 */
								obj_t BgL_auxz00_5673;

								BgL_auxz00_5673 = STRUCT_KEY(BgL_res4875z00_3176);
								STRUCT_KEY_SET(BgL_aux4876z00_3177, BgL_auxz00_5673);
							}
							{	/* SawJvm/code.scm 25 */
								obj_t BgL_kz00_4188;

								BgL_kz00_4188 = CNST_TABLE_REF(((long) 44));
								STRUCT_KEY_SET(BgL_res4875z00_3176, BgL_kz00_4188);
							}
							return BgL_res4875z00_3176;
						}
					}
				}
			}
		}
	}



/* struct+object->objec5146 */
	obj_t BGl_structzb2objectzd2ze3objec5146z83zzsaw_jvm_codez00(obj_t
		BgL_envz00_4314, obj_t BgL_oz00_4315, obj_t BgL_sz00_4316)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			{
				BgL_liveblockz00_bglt BgL_oz00_3160;

				obj_t BgL_sz00_3161;

				{	/* SawJvm/code.scm 26 */
					BgL_liveblockz00_bglt BgL_auxz00_5679;

					BgL_oz00_3160 = (BgL_liveblockz00_bglt) (BgL_oz00_4315);
					BgL_sz00_3161 = BgL_sz00_4316;
					{

						{	/* SawJvm/code.scm 26 */
							obj_t BgL_old4919z00_3164;

							obj_t BgL_aux4920z00_3165;

							{	/* SawJvm/code.scm 26 */
								obj_t BgL_nextzd2method5145zd2_3171;

								BgL_nextzd2method5145zd2_3171 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3160),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_liveblockz00zzsaw_jvm_codez00);
								if (PROCEDUREP(BgL_nextzd2method5145zd2_3171))
									{	/* SawJvm/code.scm 26 */
										BgL_old4919z00_3164 =
											PROCEDURE_ENTRY(BgL_nextzd2method5145zd2_3171)
											(BgL_nextzd2method5145zd2_3171, (obj_t) (BgL_oz00_3160),
											BgL_sz00_3161, BEOA);
									}
								else
									{	/* SawJvm/code.scm 26 */
										BgL_old4919z00_3164 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3160), BgL_sz00_3161));
									}
							}
							BgL_aux4920z00_3165 =
								STRUCT_REF(BgL_sz00_3161, (int) (((long) 0)));
							{	/* SawJvm/code.scm 26 */
								BgL_liveblockz00_bglt BgL_new4921z00_3166;

								BgL_new4921z00_3166 =
									((BgL_liveblockz00_bglt) (BgL_old4919z00_3164));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4921z00_3166),
									BGl_classzd2numzd2zz__objectz00
									(BGl_liveblockz00zzsaw_jvm_codez00));
								{	/* SawJvm/code.scm 26 */
									BgL_liveblockz00_bglt BgL_arg5747z00_3168;

									{	/* SawJvm/code.scm 26 */
										obj_t BgL_arg5748z00_3169;

										obj_t BgL_arg5749z00_3170;

										BgL_arg5748z00_3169 =
											STRUCT_REF(BgL_aux4920z00_3165, (int) (((long) 0)));
										BgL_arg5749z00_3170 =
											STRUCT_REF(BgL_aux4920z00_3165, (int) (((long) 1)));
										{	/* SawJvm/code.scm 26 */
											BgL_liveblockz00_bglt BgL_res5808z00_4171;

											{	/* SawJvm/code.scm 26 */
												BgL_liveblockz00_bglt BgL_new4899z00_4164;

												BgL_new4899z00_4164 =
													((BgL_liveblockz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_liveblockz00_bgl))));
												{	/* SawJvm/code.scm 26 */
													BgL_liveblockz00_bglt BgL_res5807z00_4170;

													{	/* SawJvm/code.scm 26 */
														BgL_liveblockz00_bglt BgL_new4911z00_4165;

														BgL_new4911z00_4165 = BgL_new4899z00_4164;
														{	/* SawJvm/code.scm 26 */
															obj_t BgL_in4909z00_4168;

															obj_t BgL_out4910z00_4169;

															BgL_in4909z00_4168 = BgL_arg5748z00_3169;
															BgL_out4910z00_4169 = BgL_arg5749z00_3170;
															((((BgL_liveblockz00_bglt)
																		CREF(BgL_new4911z00_4165))->BgL_inz00) =
																((obj_t) BgL_in4909z00_4168), BUNSPEC);
															((((BgL_liveblockz00_bglt)
																		CREF(BgL_new4911z00_4165))->BgL_outz00) =
																((obj_t) BgL_out4910z00_4169), BUNSPEC);
															BgL_res5807z00_4170 = BgL_new4911z00_4165;
													}} BgL_res5807z00_4170;
												}
												BgL_res5808z00_4171 = BgL_new4899z00_4164;
											}
											BgL_arg5747z00_3168 = BgL_res5808z00_4171;
									}}
									{	/* SawJvm/code.scm 26 */
										obj_t BgL_auxz00_5705;

										BgL_objectz00_bglt BgL_auxz00_5703;

										BgL_auxz00_5705 = (obj_t) (BgL_arg5747z00_3168);
										BgL_auxz00_5703 =
											(BgL_objectz00_bglt) (BgL_new4921z00_3166);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5703, BgL_auxz00_5705);
								}}
								BgL_auxz00_5679 = BgL_new4921z00_3166;
					}}}
					return (obj_t) (BgL_auxz00_5679);
				}
			}
		}
	}



/* object->struct-liveb5144 */
	obj_t BGl_objectzd2ze3structzd2liveb5144ze3zzsaw_jvm_codez00(obj_t
		BgL_envz00_4317, obj_t BgL_obj4916z00_4318)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 26 */
			{
				BgL_liveblockz00_bglt BgL_obj4916z00_3148;

				BgL_obj4916z00_3148 = (BgL_liveblockz00_bglt) (BgL_obj4916z00_4318);
				{

					{	/* SawJvm/code.scm 26 */
						obj_t BgL_res4917z00_3151;

						{	/* SawJvm/code.scm 26 */
							obj_t BgL_nextzd2method5143zd2_3158;

							BgL_nextzd2method5143zd2_3158 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4916z00_3148),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_liveblockz00zzsaw_jvm_codez00);
							if (PROCEDUREP(BgL_nextzd2method5143zd2_3158))
								{	/* SawJvm/code.scm 26 */
									BgL_res4917z00_3151 =
										PROCEDURE_ENTRY(BgL_nextzd2method5143zd2_3158)
										(BgL_nextzd2method5143zd2_3158,
										(obj_t) (BgL_obj4916z00_3148), BEOA);
								}
							else
								{	/* SawJvm/code.scm 26 */
									BgL_res4917z00_3151 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4916z00_3148));
								}
						}
						{	/* SawJvm/code.scm 26 */
							obj_t BgL_aux4918z00_3152;

							{	/* SawJvm/code.scm 26 */
								obj_t BgL_keyz00_4133;

								BgL_keyz00_4133 = CNST_TABLE_REF(((long) 45));
								BgL_aux4918z00_3152 =
									make_struct(BgL_keyz00_4133, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawJvm/code.scm 26 */
								obj_t BgL_arg5741z00_3154;

								{
									obj_t BgL_auxz00_5722;

									{	/* SawJvm/code.scm 26 */
										BgL_objectz00_bglt BgL_auxz00_5723;

										BgL_auxz00_5723 =
											(BgL_objectz00_bglt) (BgL_obj4916z00_3148);
										BgL_auxz00_5722 = BGL_OBJECT_WIDENING(BgL_auxz00_5723);
									}
									BgL_arg5741z00_3154 =
										(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_5722))->
										BgL_inz00);
								}
								{	/* SawJvm/code.scm 26 */
									int BgL_auxz00_5727;

									BgL_auxz00_5727 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4918z00_3152, BgL_auxz00_5727,
										BgL_arg5741z00_3154);
							}}
							{	/* SawJvm/code.scm 26 */
								obj_t BgL_arg5743z00_3156;

								{
									obj_t BgL_auxz00_5730;

									{	/* SawJvm/code.scm 26 */
										BgL_objectz00_bglt BgL_auxz00_5731;

										BgL_auxz00_5731 =
											(BgL_objectz00_bglt) (BgL_obj4916z00_3148);
										BgL_auxz00_5730 = BGL_OBJECT_WIDENING(BgL_auxz00_5731);
									}
									BgL_arg5743z00_3156 =
										(((BgL_liveblockz00_bglt) CREF(BgL_auxz00_5730))->
										BgL_outz00);
								}
								{	/* SawJvm/code.scm 26 */
									int BgL_auxz00_5735;

									BgL_auxz00_5735 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4918z00_3152, BgL_auxz00_5735,
										BgL_arg5743z00_3156);
							}}
							{	/* SawJvm/code.scm 26 */
								int BgL_auxz00_5738;

								BgL_auxz00_5738 = (int) (((long) 0));
								STRUCT_SET(BgL_res4917z00_3151, BgL_auxz00_5738,
									BgL_aux4918z00_3152);
							}
							{	/* SawJvm/code.scm 26 */
								obj_t BgL_auxz00_5741;

								BgL_auxz00_5741 = STRUCT_KEY(BgL_res4917z00_3151);
								STRUCT_KEY_SET(BgL_aux4918z00_3152, BgL_auxz00_5741);
							}
							{	/* SawJvm/code.scm 26 */
								obj_t BgL_kz00_4152;

								BgL_kz00_4152 = CNST_TABLE_REF(((long) 45));
								STRUCT_KEY_SET(BgL_res4917z00_3151, BgL_kz00_4152);
							}
							return BgL_res4917z00_3151;
						}
					}
				}
			}
		}
	}



/* gen-predicate-rtl_ca5142 */
	obj_t BGl_genzd2predicatezd2rtl_ca5142z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4319, obj_t BgL_funz00_4320, obj_t BgL_mez00_4321,
		obj_t BgL_onzf3zf3_4322, obj_t BgL_labz00_4323)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 635 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_3137;

				obj_t BgL_mez00_3138;

				obj_t BgL_onzf3zf3_3139;

				obj_t BgL_labz00_3140;

				BgL_funz00_3137 = (BgL_rtl_callz00_bglt) (BgL_funz00_4320);
				BgL_mez00_3138 = BgL_mez00_4321;
				BgL_onzf3zf3_3139 = BgL_onzf3zf3_4322;
				BgL_labz00_3140 = BgL_labz00_4323;
				{	/* SawJvm/code.scm 636 */
					obj_t BgL_rz00_4124;

					{	/* SawJvm/code.scm 636 */
						BgL_globalz00_bglt BgL_arg5738z00_4125;

						BgL_arg5738z00_4125 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_3137))->BgL_varz00);
						BgL_rz00_4124 =
							BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(
							(BgL_jvmz00_bglt) (BgL_mez00_3138), BgL_arg5738z00_4125,
							BgL_onzf3zf3_3139, BgL_labz00_3140);
					}
					if ((BgL_rz00_4124 == CNST_TABLE_REF(((long) 49))))
						{	/* SawJvm/code.scm 636 */
							BGl_genzd2funzd2zzsaw_jvm_codez00(
								(BgL_rtl_funz00_bglt) (BgL_funz00_3137), BgL_mez00_3138);
							{	/* SawJvm/code.scm 636 */
								obj_t BgL_arg5374z00_4132;

								if (CBOOL(BgL_onzf3zf3_3139))
									{	/* SawJvm/code.scm 636 */
										BgL_arg5374z00_4132 = CNST_TABLE_REF(((long) 47));
									}
								else
									{	/* SawJvm/code.scm 636 */
										BgL_arg5374z00_4132 = CNST_TABLE_REF(((long) 48));
									}
								return
									BGl_branchz00zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_3138), BgL_arg5374z00_4132,
									BgL_labz00_3140);
							}
						}
					else
						{	/* SawJvm/code.scm 636 */
							return BgL_rz00_4124;
						}
				}
			}
		}
	}



/* gen-fun-rtl_protecte5136 */
	obj_t BGl_genzd2funzd2rtl_protecte5136z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4324, obj_t BgL_funz00_4325, obj_t BgL_mez00_4326)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 608 */
			{	/* SawJvm/code.scm 610 */
				obj_t BgL_res5876z00_4474;

				BgL_res5876z00_4474 = CNST_TABLE_REF(((long) 50));
				return BgL_res5876z00_4474;
			}
		}
	}



/* gen-fun-rtl_protect5134 */
	obj_t BGl_genzd2funzd2rtl_protect5134z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4327, obj_t BgL_funz00_4328, obj_t BgL_mez00_4329)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 605 */
			{
				BgL_rtl_protectz00_bglt BgL_funz00_3125;

				obj_t BgL_mez00_3126;

				BgL_funz00_3125 = (BgL_rtl_protectz00_bglt) (BgL_funz00_4328);
				BgL_mez00_3126 = BgL_mez00_4329;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3126), CNST_TABLE_REF(((long) 51)));
		}}
	}



/* gen-fun-rtl_fail5132 */
	obj_t BGl_genzd2funzd2rtl_fail5132z00zzsaw_jvm_codez00(obj_t BgL_envz00_4330,
		obj_t BgL_funz00_4331, obj_t BgL_mez00_4332)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 600 */
			{
				BgL_rtl_failz00_bglt BgL_funz00_3119;

				obj_t BgL_mez00_3120;

				BgL_funz00_3119 = (BgL_rtl_failz00_bglt) (BgL_funz00_4331);
				BgL_mez00_3120 = BgL_mez00_4332;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3120), CNST_TABLE_REF(((long) 52)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3120), CNST_TABLE_REF(((long) 53)));
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-fun-rtl_jumpexit5130 */
	obj_t BGl_genzd2funzd2rtl_jumpexit5130z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4333, obj_t BgL_funz00_4334, obj_t BgL_mez00_4335)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 593 */
			{
				BgL_rtl_jumpexitz00_bglt BgL_funz00_3113;

				obj_t BgL_mez00_3114;

				BgL_funz00_3113 = (BgL_rtl_jumpexitz00_bglt) (BgL_funz00_4334);
				BgL_mez00_3114 = BgL_mez00_4335;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3114), CNST_TABLE_REF(((long) 54)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3114), CNST_TABLE_REF(((long) 55)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3114), CNST_TABLE_REF(((long) 53)));
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-fun-rtl_boxset5128 */
	obj_t BGl_genzd2funzd2rtl_boxset5128z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4336, obj_t BgL_funz00_4337, obj_t BgL_mez00_4338)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 586 */
			{
				BgL_rtl_boxsetz00_bglt BgL_funz00_3107;

				obj_t BgL_mez00_3108;

				BgL_funz00_3107 = (BgL_rtl_boxsetz00_bglt) (BgL_funz00_4337);
				BgL_mez00_3108 = BgL_mez00_4338;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3108), CNST_TABLE_REF(((long) 56)));
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-fun-rtl_boxref5126 */
	obj_t BGl_genzd2funzd2rtl_boxref5126z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4339, obj_t BgL_funz00_4340, obj_t BgL_mez00_4341)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 583 */
			{
				BgL_rtl_boxrefz00_bglt BgL_funz00_3101;

				obj_t BgL_mez00_3102;

				BgL_funz00_3101 = (BgL_rtl_boxrefz00_bglt) (BgL_funz00_4340);
				BgL_mez00_3102 = BgL_mez00_4341;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3102), CNST_TABLE_REF(((long) 57)));
		}}
	}



/* gen-args-gen-fun-rtl5124 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl5124z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4342, obj_t BgL_funz00_4343, obj_t BgL_mez00_4344,
		obj_t BgL_argsz00_4345)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 576 */
			{
				BgL_rtl_makeboxz00_bglt BgL_funz00_3093;

				obj_t BgL_mez00_3094;

				obj_t BgL_argsz00_3095;

				BgL_funz00_3093 = (BgL_rtl_makeboxz00_bglt) (BgL_funz00_4343);
				BgL_mez00_3094 = BgL_mez00_4344;
				BgL_argsz00_3095 = BgL_argsz00_4345;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3094), CNST_TABLE_REF(((long) 58)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3094), CNST_TABLE_REF(((long) 59)));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_3094), CAR(BgL_argsz00_3095));
				BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_3094,
					(obj_t) (BgL_funz00_3093));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_3094), CNST_TABLE_REF(((long) 60)));
		}}
	}



/* gen-fun-rtl_cast_nul5122 */
	obj_t BGl_genzd2funzd2rtl_cast_nul5122z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4346, obj_t BgL_funz00_4347, obj_t BgL_mez00_4348)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 567 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_funz00_3081;

				obj_t BgL_mez00_3082;

				BgL_funz00_3081 = (BgL_rtl_cast_nullz00_bglt) (BgL_funz00_4347);
				BgL_mez00_3082 = BgL_mez00_4348;
				{	/* SawJvm/code.scm 568 */
					BgL_typez00_bglt BgL_typez00_3085;

					BgL_typez00_3085 =
						(((BgL_rtl_cast_nullz00_bglt) CREF(BgL_funz00_3081))->BgL_typez00);
					if (
						((((BgL_typez00_bglt) CREF(BgL_typez00_3085))->BgL_namez00) ==
							CNST_TABLE_REF(((long) 25))))
						{	/* SawJvm/code.scm 570 */
							obj_t BgL_arg5724z00_3087;

							BgL_arg5724z00_3087 =
								MAKE_PAIR(CNST_TABLE_REF(((long) 61)), BNIL);
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_3082), BgL_arg5724z00_3087);
						}
					else
						{	/* SawJvm/code.scm 571 */
							obj_t BgL_arg5725z00_3088;

							BgL_arg5725z00_3088 =
								MAKE_PAIR(CNST_TABLE_REF(((long) 62)), BNIL);
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_3082), BgL_arg5725z00_3088);
						}
				}
			}
		}
	}



/* gen-fun-rtl_cast5120 */
	obj_t BGl_genzd2funzd2rtl_cast5120z00zzsaw_jvm_codez00(obj_t BgL_envz00_4349,
		obj_t BgL_funz00_4350, obj_t BgL_mez00_4351)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 561 */
			{
				BgL_rtl_castz00_bglt BgL_funz00_3065;

				obj_t BgL_mez00_3066;

				BgL_funz00_3065 = (BgL_rtl_castz00_bglt) (BgL_funz00_4350);
				BgL_mez00_3066 = BgL_mez00_4351;
				if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
					{	/* SawJvm/code.scm 563 */
						BgL_typez00_bglt BgL_typez00_3069;

						BgL_typez00_3069 =
							(((BgL_rtl_castz00_bglt) CREF(BgL_funz00_3065))->BgL_typez00);
						if (
							((((BgL_typez00_bglt) CREF(BgL_typez00_3069))->BgL_namez00) ==
								CNST_TABLE_REF(((long) 63))))
							{	/* SawJvm/code.scm 564 */
								return BFALSE;
							}
						else
							{	/* SawJvm/code.scm 565 */
								obj_t BgL_arg5713z00_3071;

								{	/* SawJvm/code.scm 565 */
									obj_t BgL_arg5714z00_3072;

									obj_t BgL_arg5715z00_3073;

									BgL_arg5714z00_3072 = CNST_TABLE_REF(((long) 64));
									{	/* SawJvm/code.scm 565 */
										obj_t BgL_arg5716z00_3074;

										BgL_arg5716z00_3074 =
											BGl_compilezd2typezd2zzsaw_jvm_outz00(
											(BgL_jvmz00_bglt) (BgL_mez00_3066), BgL_typez00_3069);
										{	/* SawJvm/code.scm 565 */
											obj_t BgL_list5718z00_3076;

											BgL_list5718z00_3076 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg5715z00_3073 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg5716z00_3074, BgL_list5718z00_3076);
									}}
									BgL_arg5713z00_3071 =
										MAKE_PAIR(BgL_arg5714z00_3072, BgL_arg5715z00_3073);
								}
								return
									BGl_codez12z12zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_3066), BgL_arg5713z00_3071);
							}
					}
				else
					{	/* SawJvm/code.scm 562 */
						return BFALSE;
					}
			}
		}
	}



/* gen-fun-rtl_isa5118 */
	obj_t BGl_genzd2funzd2rtl_isa5118z00zzsaw_jvm_codez00(obj_t BgL_envz00_4352,
		obj_t BgL_funz00_4353, obj_t BgL_mez00_4354)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 551 */
			{
				BgL_rtl_isaz00_bglt BgL_funz00_3050;

				obj_t BgL_mez00_3051;

				BgL_funz00_3050 = (BgL_rtl_isaz00_bglt) (BgL_funz00_4353);
				BgL_mez00_3051 = BgL_mez00_4354;
				{	/* SawJvm/code.scm 552 */
					obj_t BgL_arg5704z00_3054;

					{	/* SawJvm/code.scm 552 */
						obj_t BgL_arg5705z00_3055;

						obj_t BgL_arg5706z00_3056;

						BgL_arg5705z00_3055 = CNST_TABLE_REF(((long) 65));
						{	/* SawJvm/code.scm 552 */
							obj_t BgL_arg5707z00_3057;

							{	/* SawJvm/code.scm 552 */
								BgL_typez00_bglt BgL_arg5710z00_3060;

								BgL_arg5710z00_3060 =
									(((BgL_rtl_isaz00_bglt) CREF(BgL_funz00_3050))->BgL_typez00);
								BgL_arg5707z00_3057 =
									BGl_compilezd2typezd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_3051), BgL_arg5710z00_3060);
							}
							{	/* SawJvm/code.scm 552 */
								obj_t BgL_list5709z00_3059;

								BgL_list5709z00_3059 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg5706z00_3056 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg5707z00_3057, BgL_list5709z00_3059);
						}}
						BgL_arg5704z00_3054 =
							MAKE_PAIR(BgL_arg5705z00_3055, BgL_arg5706z00_3056);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_3051), BgL_arg5704z00_3054);
				}
				{	/* SawJvm/code.scm 553 */
					obj_t BgL_l1z00_3061;

					obj_t BgL_l2z00_3062;

					BgL_l1z00_3061 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_string5864z00zzsaw_jvm_codez00);
					BgL_l2z00_3062 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_string5864z00zzsaw_jvm_codez00);
					BGl_branchz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						CNST_TABLE_REF(((long) 48)), BgL_l1z00_3061);
					BGl_pushzd2intzd2zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						BINT(((long) 1)));
					BGl_branchz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						CNST_TABLE_REF(((long) 66)), BgL_l2z00_3062);
					BGl_labelz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						BgL_l1z00_3061);
					BGl_pushzd2intzd2zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						BINT(((long) 0)));
					return
						BGl_labelz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_3051),
						BgL_l2z00_3062);
				}
			}
		}
	}



/* gen-fun-rtl_setfield5116 */
	obj_t BGl_genzd2funzd2rtl_setfield5116z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4355, obj_t BgL_funz00_4356, obj_t BgL_mez00_4357)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 544 */
			{
				BgL_rtl_setfieldz00_bglt BgL_funz00_3036;

				obj_t BgL_mez00_3037;

				BgL_funz00_3036 = (BgL_rtl_setfieldz00_bglt) (BgL_funz00_4356);
				BgL_mez00_3037 = BgL_mez00_4357;
				{	/* SawJvm/code.scm 547 */
					bool_t BgL_testz00_5868;

					{	/* SawJvm/code.scm 547 */
						BgL_typez00_bglt BgL_arg5699z00_3044;

						BgL_arg5699z00_3044 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->
							BgL_objtypez00);
						BgL_testz00_5868 =
							BGl_widezd2classzf3z21zzobject_classz00((obj_t)
							(BgL_arg5699z00_3044));
					}
					if (BgL_testz00_5868)
						{	/* SawJvm/code.scm 547 */
							obj_t BgL_arg5697z00_3042;

							{	/* SawJvm/code.scm 547 */
								BgL_typez00_bglt BgL_arg5698z00_3043;

								BgL_arg5698z00_3043 =
									(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->
									BgL_objtypez00);
								BgL_arg5697z00_3042 =
									BGl_widezd2ze3chunkz31zzbackend_cplibz00((BgL_tclassz00_bglt)
									(BgL_arg5698z00_3043));
							}
							{
								BgL_typez00_bglt BgL_auxz00_5875;

								BgL_auxz00_5875 = (BgL_typez00_bglt) (BgL_arg5697z00_3042);
								((((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->
										BgL_objtypez00) =
									((BgL_typez00_bglt) BgL_auxz00_5875), BUNSPEC);
							}
						}
					else
						{	/* SawJvm/code.scm 547 */
							BFALSE;
						}
				}
				{	/* SawJvm/code.scm 548 */
					BgL_typez00_bglt BgL_arg5700z00_3045;

					BgL_typez00_bglt BgL_arg5701z00_3046;

					obj_t BgL_arg5702z00_3047;

					BgL_arg5700z00_3045 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->BgL_typez00);
					BgL_arg5701z00_3046 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->
						BgL_objtypez00);
					BgL_arg5702z00_3047 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_3036))->BgL_namez00);
					BGl_storezd2fieldzd2zzsaw_jvm_outz00((BgL_jvmz00_bglt)
						(BgL_mez00_3037), BgL_arg5700z00_3045, BgL_arg5701z00_3046,
						BgL_arg5702z00_3047);
				}
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-fun-rtl_getfield5114 */
	obj_t BGl_genzd2funzd2rtl_getfield5114z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4358, obj_t BgL_funz00_4359, obj_t BgL_mez00_4360)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 538 */
			{
				BgL_rtl_getfieldz00_bglt BgL_funz00_3022;

				obj_t BgL_mez00_3023;

				BgL_funz00_3022 = (BgL_rtl_getfieldz00_bglt) (BgL_funz00_4359);
				BgL_mez00_3023 = BgL_mez00_4360;
				{	/* SawJvm/code.scm 541 */
					bool_t BgL_testz00_5885;

					{	/* SawJvm/code.scm 541 */
						BgL_typez00_bglt BgL_arg5691z00_3030;

						BgL_arg5691z00_3030 =
							(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->
							BgL_objtypez00);
						BgL_testz00_5885 =
							BGl_widezd2classzf3z21zzobject_classz00((obj_t)
							(BgL_arg5691z00_3030));
					}
					if (BgL_testz00_5885)
						{	/* SawJvm/code.scm 541 */
							obj_t BgL_arg5689z00_3028;

							{	/* SawJvm/code.scm 541 */
								BgL_typez00_bglt BgL_arg5690z00_3029;

								BgL_arg5690z00_3029 =
									(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->
									BgL_objtypez00);
								BgL_arg5689z00_3028 =
									BGl_widezd2ze3chunkz31zzbackend_cplibz00((BgL_tclassz00_bglt)
									(BgL_arg5690z00_3029));
							}
							{
								BgL_typez00_bglt BgL_auxz00_5892;

								BgL_auxz00_5892 = (BgL_typez00_bglt) (BgL_arg5689z00_3028);
								((((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->
										BgL_objtypez00) =
									((BgL_typez00_bglt) BgL_auxz00_5892), BUNSPEC);
							}
						}
					else
						{	/* SawJvm/code.scm 541 */
							BFALSE;
						}
				}
				{	/* SawJvm/code.scm 542 */
					BgL_typez00_bglt BgL_arg5692z00_3031;

					BgL_typez00_bglt BgL_arg5693z00_3032;

					obj_t BgL_arg5694z00_3033;

					BgL_arg5692z00_3031 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->BgL_typez00);
					BgL_arg5693z00_3032 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->
						BgL_objtypez00);
					BgL_arg5694z00_3033 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_3022))->BgL_namez00);
					return
						BGl_loadzd2fieldzd2zzsaw_jvm_outz00((BgL_jvmz00_bglt)
						(BgL_mez00_3023), BgL_arg5692z00_3031, BgL_arg5693z00_3032,
						BgL_arg5694z00_3033);
				}
			}
		}
	}



/* gen-args-gen-fun-rtl5112 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl5112z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4361, obj_t BgL_funz00_4362, obj_t BgL_mez00_4363,
		obj_t BgL_argsz00_4364)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 532 */
			{
				BgL_rtl_newz00_bglt BgL_funz00_3003;

				obj_t BgL_mez00_3004;

				obj_t BgL_argsz00_3005;

				BgL_funz00_3003 = (BgL_rtl_newz00_bglt) (BgL_funz00_4362);
				BgL_mez00_3004 = BgL_mez00_4363;
				BgL_argsz00_3005 = BgL_argsz00_4364;
				BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_3004,
					(obj_t) (BgL_funz00_3003));
				{	/* SawJvm/code.scm 534 */
					BgL_typez00_bglt BgL_arg5680z00_3008;

					obj_t BgL_arg5682z00_3010;

					BgL_arg5680z00_3008 =
						(((BgL_rtl_newz00_bglt) CREF(BgL_funz00_3003))->BgL_typez00);
					BgL_arg5682z00_3010 =
						(((BgL_rtl_newz00_bglt) CREF(BgL_funz00_3003))->BgL_constrz00);
					{	/* SawJvm/code.scm 535 */
						obj_t BgL_zc3anonymousza35683ze3z83_4285;

						BgL_zc3anonymousza35683ze3z83_4285 =
							make_fx_procedure(BGl_zc3anonymousza35683ze3z83zzsaw_jvm_codez00,
							(int) (((long) 0)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3anonymousza35683ze3z83_4285,
							(int) (((long) 0)), BgL_mez00_3004);
						PROCEDURE_SET(BgL_zc3anonymousza35683ze3z83_4285,
							(int) (((long) 1)), BgL_argsz00_3005);
						return
							BGl_newobjz00zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_3004), BgL_arg5680z00_3008,
							BgL_zc3anonymousza35683ze3z83_4285, BgL_arg5682z00_3010);
					}
				}
			}
		}
	}



/* <anonymous:5683> */
	obj_t BGl_zc3anonymousza35683ze3z83zzsaw_jvm_codez00(obj_t BgL_envz00_4365)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 535 */
			{	/* SawJvm/code.scm 535 */
				obj_t BgL_mez00_4366;

				obj_t BgL_argsz00_4367;

				BgL_mez00_4366 = PROCEDURE_REF(BgL_envz00_4365, (int) (((long) 0)));
				BgL_argsz00_4367 = PROCEDURE_REF(BgL_envz00_4365, (int) (((long) 1)));
				{

					{	/* SawJvm/code.scm 535 */
						bool_t BgL_auxz00_5919;

						{
							obj_t BgL_l5056z00_3013;

							BgL_l5056z00_3013 = BgL_argsz00_4367;
						BgL_zc3anonymousza35684ze3z83_3014:
							if (PAIRP(BgL_l5056z00_3013))
								{	/* SawJvm/code.scm 535 */
									BGl_genzd2exprzd2zzsaw_jvm_codez00(
										(BgL_jvmz00_bglt) (BgL_mez00_4366), CAR(BgL_l5056z00_3013));
									{
										obj_t BgL_l5056z00_5925;

										BgL_l5056z00_5925 = CDR(BgL_l5056z00_3013);
										BgL_l5056z00_3013 = BgL_l5056z00_5925;
										goto BgL_zc3anonymousza35684ze3z83_3014;
									}
								}
							else
								{	/* SawJvm/code.scm 535 */
									BgL_auxz00_5919 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_5919);
					}
				}
			}
		}
	}



/* gen-fun-rtl_valloc5110 */
	obj_t BGl_genzd2funzd2rtl_valloc5110z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4368, obj_t BgL_funz00_4369, obj_t BgL_mez00_4370)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 521 */
			{
				BgL_rtl_vallocz00_bglt BgL_funz00_2982;

				obj_t BgL_mez00_2983;

				BgL_funz00_2982 = (BgL_rtl_vallocz00_bglt) (BgL_funz00_4369);
				BgL_mez00_2983 = BgL_mez00_4370;
				{	/* SawJvm/code.scm 522 */
					obj_t BgL_typez00_2986;

					{	/* SawJvm/code.scm 522 */
						BgL_typez00_bglt BgL_arg5678z00_3000;

						BgL_arg5678z00_3000 =
							(((BgL_rtl_vallocz00_bglt) CREF(BgL_funz00_2982))->BgL_typez00);
						BgL_typez00_2986 =
							BGl_compilezd2typezd2zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2983), BgL_arg5678z00_3000);
					}
					{	/* SawJvm/code.scm 523 */
						obj_t BgL_arg5673z00_2987;

						{	/* SawJvm/code.scm 523 */
							obj_t BgL_arg5674z00_2988;

							obj_t BgL_arg5675z00_2989;

							{	/* SawJvm/code.scm 523 */
								bool_t BgL_testz00_5931;

								{	/* SawJvm/code.scm 523 */
									bool_t BgL__ortest_4982z00_2992;

									BgL__ortest_4982z00_2992 =
										(BgL_typez00_2986 == CNST_TABLE_REF(((long) 18)));
									if (BgL__ortest_4982z00_2992)
										{	/* SawJvm/code.scm 523 */
											BgL_testz00_5931 = BgL__ortest_4982z00_2992;
										}
									else
										{	/* SawJvm/code.scm 523 */
											bool_t BgL__ortest_4983z00_2993;

											BgL__ortest_4983z00_2993 =
												(BgL_typez00_2986 == CNST_TABLE_REF(((long) 19)));
											if (BgL__ortest_4983z00_2993)
												{	/* SawJvm/code.scm 523 */
													BgL_testz00_5931 = BgL__ortest_4983z00_2993;
												}
											else
												{	/* SawJvm/code.scm 523 */
													bool_t BgL__ortest_4984z00_2994;

													BgL__ortest_4984z00_2994 =
														(BgL_typez00_2986 == CNST_TABLE_REF(((long) 20)));
													if (BgL__ortest_4984z00_2994)
														{	/* SawJvm/code.scm 523 */
															BgL_testz00_5931 = BgL__ortest_4984z00_2994;
														}
													else
														{	/* SawJvm/code.scm 523 */
															bool_t BgL__ortest_4985z00_2995;

															BgL__ortest_4985z00_2995 =
																(BgL_typez00_2986 ==
																CNST_TABLE_REF(((long) 21)));
															if (BgL__ortest_4985z00_2995)
																{	/* SawJvm/code.scm 523 */
																	BgL_testz00_5931 = BgL__ortest_4985z00_2995;
																}
															else
																{	/* SawJvm/code.scm 523 */
																	bool_t BgL__ortest_4986z00_2996;

																	BgL__ortest_4986z00_2996 =
																		(BgL_typez00_2986 ==
																		CNST_TABLE_REF(((long) 22)));
																	if (BgL__ortest_4986z00_2996)
																		{	/* SawJvm/code.scm 523 */
																			BgL_testz00_5931 =
																				BgL__ortest_4986z00_2996;
																		}
																	else
																		{	/* SawJvm/code.scm 523 */
																			bool_t BgL__ortest_4987z00_2997;

																			BgL__ortest_4987z00_2997 =
																				(BgL_typez00_2986 ==
																				CNST_TABLE_REF(((long) 11)));
																			if (BgL__ortest_4987z00_2997)
																				{	/* SawJvm/code.scm 523 */
																					BgL_testz00_5931 =
																						BgL__ortest_4987z00_2997;
																				}
																			else
																				{	/* SawJvm/code.scm 523 */
																					bool_t BgL__ortest_4988z00_2998;

																					BgL__ortest_4988z00_2998 =
																						(BgL_typez00_2986 ==
																						CNST_TABLE_REF(((long) 25)));
																					if (BgL__ortest_4988z00_2998)
																						{	/* SawJvm/code.scm 523 */
																							BgL_testz00_5931 =
																								BgL__ortest_4988z00_2998;
																						}
																					else
																						{	/* SawJvm/code.scm 523 */
																							BgL_testz00_5931 =
																								(BgL_typez00_2986 ==
																								CNST_TABLE_REF(((long) 10)));
								}}}}}}}}
								if (BgL_testz00_5931)
									{	/* SawJvm/code.scm 523 */
										BgL_arg5674z00_2988 = CNST_TABLE_REF(((long) 67));
									}
								else
									{	/* SawJvm/code.scm 523 */
										BgL_arg5674z00_2988 = CNST_TABLE_REF(((long) 68));
							}}
							{	/* SawJvm/code.scm 523 */
								obj_t BgL_list5677z00_2999;

								BgL_list5677z00_2999 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg5675z00_2989 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_typez00_2986,
									BgL_list5677z00_2999);
							}
							BgL_arg5673z00_2987 =
								MAKE_PAIR(BgL_arg5674z00_2988, BgL_arg5675z00_2989);
						}
						return
							BGl_codez12z12zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2983), BgL_arg5673z00_2987);
					}
				}
			}
		}
	}



/* gen-fun-rtl_vlength5108 */
	obj_t BGl_genzd2funzd2rtl_vlength5108z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4371, obj_t BgL_funz00_4372, obj_t BgL_mez00_4373)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 518 */
			{
				BgL_rtl_vlengthz00_bglt BgL_funz00_2976;

				obj_t BgL_mez00_2977;

				BgL_funz00_2976 = (BgL_rtl_vlengthz00_bglt) (BgL_funz00_4372);
				BgL_mez00_2977 = BgL_mez00_4373;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2977), CNST_TABLE_REF(((long) 69)));
		}}
	}



/* gen-fun-rtl_vset5106 */
	obj_t BGl_genzd2funzd2rtl_vset5106z00zzsaw_jvm_codez00(obj_t BgL_envz00_4374,
		obj_t BgL_funz00_4375, obj_t BgL_mez00_4376)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 505 */
			{
				BgL_rtl_vsetz00_bglt BgL_funz00_2958;

				obj_t BgL_mez00_2959;

				BgL_funz00_2958 = (BgL_rtl_vsetz00_bglt) (BgL_funz00_4375);
				BgL_mez00_2959 = BgL_mez00_4376;
				{	/* SawJvm/code.scm 506 */
					obj_t BgL_typez00_2962;

					{	/* SawJvm/code.scm 506 */
						BgL_typez00_bglt BgL_arg5670z00_2973;

						BgL_arg5670z00_2973 =
							(((BgL_rtl_vsetz00_bglt) CREF(BgL_funz00_2958))->BgL_typez00);
						BgL_typez00_2962 =
							BGl_compilezd2typezd2zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2959), BgL_arg5670z00_2973);
					}
					{	/* SawJvm/code.scm 507 */
						obj_t BgL_arg5662z00_2963;

						{	/* SawJvm/code.scm 507 */
							bool_t BgL_testz00_5970;

							{	/* SawJvm/code.scm 507 */
								bool_t BgL__ortest_4981z00_2972;

								BgL__ortest_4981z00_2972 =
									(BgL_typez00_2962 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_4981z00_2972)
									{	/* SawJvm/code.scm 507 */
										BgL_testz00_5970 = BgL__ortest_4981z00_2972;
									}
								else
									{	/* SawJvm/code.scm 507 */
										BgL_testz00_5970 =
											(BgL_typez00_2962 == CNST_TABLE_REF(((long) 19)));
							}}
							if (BgL_testz00_5970)
								{	/* SawJvm/code.scm 507 */
									BgL_arg5662z00_2963 = CNST_TABLE_REF(((long) 70));
								}
							else
								{	/* SawJvm/code.scm 507 */
									if ((BgL_typez00_2962 == CNST_TABLE_REF(((long) 20))))
										{	/* SawJvm/code.scm 507 */
											BgL_arg5662z00_2963 = CNST_TABLE_REF(((long) 71));
										}
									else
										{	/* SawJvm/code.scm 507 */
											if ((BgL_typez00_2962 == CNST_TABLE_REF(((long) 21))))
												{	/* SawJvm/code.scm 507 */
													BgL_arg5662z00_2963 = CNST_TABLE_REF(((long) 72));
												}
											else
												{	/* SawJvm/code.scm 507 */
													if ((BgL_typez00_2962 == CNST_TABLE_REF(((long) 22))))
														{	/* SawJvm/code.scm 507 */
															BgL_arg5662z00_2963 = CNST_TABLE_REF(((long) 73));
														}
													else
														{	/* SawJvm/code.scm 507 */
															if (
																(BgL_typez00_2962 ==
																	CNST_TABLE_REF(((long) 11))))
																{	/* SawJvm/code.scm 507 */
																	BgL_arg5662z00_2963 =
																		CNST_TABLE_REF(((long) 74));
																}
															else
																{	/* SawJvm/code.scm 507 */
																	if (
																		(BgL_typez00_2962 ==
																			CNST_TABLE_REF(((long) 25))))
																		{	/* SawJvm/code.scm 507 */
																			BgL_arg5662z00_2963 =
																				CNST_TABLE_REF(((long) 75));
																		}
																	else
																		{	/* SawJvm/code.scm 507 */
																			if (
																				(BgL_typez00_2962 ==
																					CNST_TABLE_REF(((long) 10))))
																				{	/* SawJvm/code.scm 507 */
																					BgL_arg5662z00_2963 =
																						CNST_TABLE_REF(((long) 76));
																				}
																			else
																				{	/* SawJvm/code.scm 507 */
																					BgL_arg5662z00_2963 =
																						CNST_TABLE_REF(((long) 77));
						}}}}}}}}
						BGl_codez12z12zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2959), BgL_arg5662z00_2963);
					}
					return CNST_TABLE_REF(((long) 13));
		}}}
	}



/* gen-fun-rtl_vref5104 */
	obj_t BGl_genzd2funzd2rtl_vref5104z00zzsaw_jvm_codez00(obj_t BgL_envz00_4377,
		obj_t BgL_funz00_4378, obj_t BgL_mez00_4379)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 493 */
			{
				BgL_rtl_vrefz00_bglt BgL_funz00_2940;

				obj_t BgL_mez00_2941;

				BgL_funz00_2940 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_4378);
				BgL_mez00_2941 = BgL_mez00_4379;
				{	/* SawJvm/code.scm 494 */
					obj_t BgL_typez00_2944;

					{	/* SawJvm/code.scm 494 */
						BgL_typez00_bglt BgL_arg5660z00_2955;

						BgL_arg5660z00_2955 =
							(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2940))->BgL_typez00);
						BgL_typez00_2944 =
							BGl_compilezd2typezd2zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2941), BgL_arg5660z00_2955);
					}
					{	/* SawJvm/code.scm 495 */
						obj_t BgL_arg5652z00_2945;

						{	/* SawJvm/code.scm 495 */
							bool_t BgL_testz00_6009;

							{	/* SawJvm/code.scm 495 */
								bool_t BgL__ortest_4980z00_2954;

								BgL__ortest_4980z00_2954 =
									(BgL_typez00_2944 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_4980z00_2954)
									{	/* SawJvm/code.scm 495 */
										BgL_testz00_6009 = BgL__ortest_4980z00_2954;
									}
								else
									{	/* SawJvm/code.scm 495 */
										BgL_testz00_6009 =
											(BgL_typez00_2944 == CNST_TABLE_REF(((long) 19)));
							}}
							if (BgL_testz00_6009)
								{	/* SawJvm/code.scm 495 */
									BgL_arg5652z00_2945 = CNST_TABLE_REF(((long) 78));
								}
							else
								{	/* SawJvm/code.scm 495 */
									if ((BgL_typez00_2944 == CNST_TABLE_REF(((long) 20))))
										{	/* SawJvm/code.scm 495 */
											BgL_arg5652z00_2945 = CNST_TABLE_REF(((long) 79));
										}
									else
										{	/* SawJvm/code.scm 495 */
											if ((BgL_typez00_2944 == CNST_TABLE_REF(((long) 21))))
												{	/* SawJvm/code.scm 495 */
													BgL_arg5652z00_2945 = CNST_TABLE_REF(((long) 80));
												}
											else
												{	/* SawJvm/code.scm 495 */
													if ((BgL_typez00_2944 == CNST_TABLE_REF(((long) 22))))
														{	/* SawJvm/code.scm 495 */
															BgL_arg5652z00_2945 = CNST_TABLE_REF(((long) 81));
														}
													else
														{	/* SawJvm/code.scm 495 */
															if (
																(BgL_typez00_2944 ==
																	CNST_TABLE_REF(((long) 11))))
																{	/* SawJvm/code.scm 495 */
																	BgL_arg5652z00_2945 =
																		CNST_TABLE_REF(((long) 82));
																}
															else
																{	/* SawJvm/code.scm 495 */
																	if (
																		(BgL_typez00_2944 ==
																			CNST_TABLE_REF(((long) 25))))
																		{	/* SawJvm/code.scm 495 */
																			BgL_arg5652z00_2945 =
																				CNST_TABLE_REF(((long) 83));
																		}
																	else
																		{	/* SawJvm/code.scm 495 */
																			if (
																				(BgL_typez00_2944 ==
																					CNST_TABLE_REF(((long) 10))))
																				{	/* SawJvm/code.scm 495 */
																					BgL_arg5652z00_2945 =
																						CNST_TABLE_REF(((long) 84));
																				}
																			else
																				{	/* SawJvm/code.scm 495 */
																					BgL_arg5652z00_2945 =
																						CNST_TABLE_REF(((long) 85));
						}}}}}}}}
						return
							BGl_codez12z12zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2941), BgL_arg5652z00_2945);
					}
				}
			}
		}
	}



/* gen-fun-rtl_apply5102 */
	obj_t BGl_genzd2funzd2rtl_apply5102z00zzsaw_jvm_codez00(obj_t BgL_envz00_4380,
		obj_t BgL_funz00_4381, obj_t BgL_mez00_4382)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 487 */
			{
				BgL_rtl_applyz00_bglt BgL_funz00_2934;

				obj_t BgL_mez00_2935;

				BgL_funz00_2934 = (BgL_rtl_applyz00_bglt) (BgL_funz00_4381);
				BgL_mez00_2935 = BgL_mez00_4382;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2935), CNST_TABLE_REF(((long) 38)));
		}}
	}



/* gen-fun-rtl_loadfun5100 */
	obj_t BGl_genzd2funzd2rtl_loadfun5100z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4383, obj_t BgL_funz00_4384, obj_t BgL_mez00_4385)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 483 */
			{
				BgL_rtl_loadfunz00_bglt BgL_funz00_2926;

				obj_t BgL_mez00_2927;

				BgL_funz00_2926 = (BgL_rtl_loadfunz00_bglt) (BgL_funz00_4384);
				BgL_mez00_2927 = BgL_mez00_4385;
				{	/* SawJvm/code.scm 484 */
					BgL_globalz00_bglt BgL_varz00_4068;

					BgL_varz00_4068 =
						(((BgL_rtl_loadfunz00_bglt) CREF(BgL_funz00_2926))->BgL_varz00);
					{	/* SawJvm/code.scm 484 */
						int BgL_arg5649z00_4069;

						{	/* SawJvm/code.scm 484 */
							BgL_indexedz00_bglt BgL_obj4808z00_4071;

							BgL_obj4808z00_4071 = (BgL_indexedz00_bglt) (BgL_varz00_4068);
							{
								obj_t BgL_auxz00_6050;

								{	/* SawJvm/code.scm 484 */
									BgL_objectz00_bglt BgL_auxz00_6051;

									BgL_auxz00_6051 = (BgL_objectz00_bglt) (BgL_obj4808z00_4071);
									BgL_auxz00_6050 = BGL_OBJECT_WIDENING(BgL_auxz00_6051);
								}
								BgL_arg5649z00_4069 =
									(((BgL_indexedz00_bglt) CREF(BgL_auxz00_6050))->BgL_indexz00);
						}}
						return
							BGl_pushzd2intzd2zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2927), BINT(BgL_arg5649z00_4069));
					}
				}
			}
		}
	}



/* gen-fun-with-args-rt5098 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt5098z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4386, obj_t BgL_funz00_4387, obj_t BgL_mez00_4388,
		obj_t BgL_argsz00_4389)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 470 */
			{
				BgL_rtl_returnz00_bglt BgL_funz00_2904;

				obj_t BgL_mez00_2905;

				obj_t BgL_argsz00_2906;

				BgL_funz00_2904 = (BgL_rtl_returnz00_bglt) (BgL_funz00_4387);
				BgL_mez00_2905 = BgL_mez00_4388;
				BgL_argsz00_2906 = BgL_argsz00_4389;
				{	/* SawJvm/code.scm 471 */
					obj_t BgL_az00_2909;

					BgL_az00_2909 = CAR(BgL_argsz00_2906);
					{	/* SawJvm/code.scm 472 */
						obj_t BgL_regz00_2910;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_2909,
								BGl_rtl_regz00zzsaw_defsz00))
							{	/* SawJvm/code.scm 472 */
								BgL_regz00_2910 = BgL_az00_2909;
							}
						else
							{
								BgL_rtl_insz00_bglt BgL_auxz00_6062;

								BgL_auxz00_6062 = (BgL_rtl_insz00_bglt) (BgL_az00_2909);
								BgL_regz00_2910 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6062))->BgL_destz00);
							}
						{	/* SawJvm/code.scm 474 */
							obj_t BgL_arg5640z00_2911;

							{	/* SawJvm/code.scm 474 */
								obj_t BgL_casezd2valuezd2_2912;

								{	/* SawJvm/code.scm 474 */
									BgL_typez00_bglt BgL_obj1509z00_4059;

									{
										BgL_rtl_regz00_bglt BgL_auxz00_6065;

										BgL_auxz00_6065 = (BgL_rtl_regz00_bglt) (BgL_regz00_2910);
										BgL_obj1509z00_4059 =
											(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_6065))->
											BgL_typez00);
									}
									BgL_casezd2valuezd2_2912 =
										(((BgL_typez00_bglt) CREF(BgL_obj1509z00_4059))->
										BgL_namez00);
								}
								if ((BgL_casezd2valuezd2_2912 == CNST_TABLE_REF(((long) 86))))
									{	/* SawJvm/code.scm 474 */
										BgL_arg5640z00_2911 = CNST_TABLE_REF(((long) 87));
									}
								else
									{	/* SawJvm/code.scm 474 */
										bool_t BgL_testz00_6073;

										{	/* SawJvm/code.scm 474 */
											bool_t BgL__ortest_4976z00_2918;

											BgL__ortest_4976z00_2918 =
												(BgL_casezd2valuezd2_2912 ==
												CNST_TABLE_REF(((long) 18)));
											if (BgL__ortest_4976z00_2918)
												{	/* SawJvm/code.scm 474 */
													BgL_testz00_6073 = BgL__ortest_4976z00_2918;
												}
											else
												{	/* SawJvm/code.scm 474 */
													bool_t BgL__ortest_4977z00_2919;

													BgL__ortest_4977z00_2919 =
														(BgL_casezd2valuezd2_2912 ==
														CNST_TABLE_REF(((long) 19)));
													if (BgL__ortest_4977z00_2919)
														{	/* SawJvm/code.scm 474 */
															BgL_testz00_6073 = BgL__ortest_4977z00_2919;
														}
													else
														{	/* SawJvm/code.scm 474 */
															bool_t BgL__ortest_4978z00_2920;

															BgL__ortest_4978z00_2920 =
																(BgL_casezd2valuezd2_2912 ==
																CNST_TABLE_REF(((long) 20)));
															if (BgL__ortest_4978z00_2920)
																{	/* SawJvm/code.scm 474 */
																	BgL_testz00_6073 = BgL__ortest_4978z00_2920;
																}
															else
																{	/* SawJvm/code.scm 474 */
																	bool_t BgL__ortest_4979z00_2921;

																	BgL__ortest_4979z00_2921 =
																		(BgL_casezd2valuezd2_2912 ==
																		CNST_TABLE_REF(((long) 21)));
																	if (BgL__ortest_4979z00_2921)
																		{	/* SawJvm/code.scm 474 */
																			BgL_testz00_6073 =
																				BgL__ortest_4979z00_2921;
																		}
																	else
																		{	/* SawJvm/code.scm 474 */
																			BgL_testz00_6073 =
																				(BgL_casezd2valuezd2_2912 ==
																				CNST_TABLE_REF(((long) 22)));
										}}}}}
										if (BgL_testz00_6073)
											{	/* SawJvm/code.scm 474 */
												BgL_arg5640z00_2911 = CNST_TABLE_REF(((long) 88));
											}
										else
											{	/* SawJvm/code.scm 474 */
												if (
													(BgL_casezd2valuezd2_2912 ==
														CNST_TABLE_REF(((long) 11))))
													{	/* SawJvm/code.scm 474 */
														BgL_arg5640z00_2911 = CNST_TABLE_REF(((long) 89));
													}
												else
													{	/* SawJvm/code.scm 474 */
														if (
															(BgL_casezd2valuezd2_2912 ==
																CNST_TABLE_REF(((long) 25))))
															{	/* SawJvm/code.scm 474 */
																BgL_arg5640z00_2911 =
																	CNST_TABLE_REF(((long) 90));
															}
														else
															{	/* SawJvm/code.scm 474 */
																if (
																	(BgL_casezd2valuezd2_2912 ==
																		CNST_TABLE_REF(((long) 10))))
																	{	/* SawJvm/code.scm 474 */
																		BgL_arg5640z00_2911 =
																			CNST_TABLE_REF(((long) 91));
																	}
																else
																	{	/* SawJvm/code.scm 474 */
																		BgL_arg5640z00_2911 =
																			CNST_TABLE_REF(((long) 7));
							}}}}}}
							BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_2905), BgL_arg5640z00_2911);
						}
						return CNST_TABLE_REF(((long) 13));
		}}}}
	}



/* gen-fun-with-args-rt5095 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt5095z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4390, obj_t BgL_funz00_4391, obj_t BgL_mez00_4392,
		obj_t BgL_argsz00_4393)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 454 */
			return
				BGl_genzd2funcallzd2zzsaw_jvm_codez00(BgL_mez00_4392, BgL_argsz00_4393);
		}
	}



/* gen-fun-with-args-rt5093 */
	obj_t BGl_genzd2funzd2withzd2argszd2rt5093z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4394, obj_t BgL_funz00_4395, obj_t BgL_mez00_4396,
		obj_t BgL_argsz00_4397)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 451 */
			return
				BGl_genzd2funcallzd2zzsaw_jvm_codez00(BgL_mez00_4396, BgL_argsz00_4397);
		}
	}



/* gen-fun-rtl_call5091 */
	obj_t BGl_genzd2funzd2rtl_call5091z00zzsaw_jvm_codez00(obj_t BgL_envz00_4398,
		obj_t BgL_funz00_4399, obj_t BgL_mez00_4400)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 440 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2876;

				obj_t BgL_mez00_2877;

				BgL_funz00_2876 = (BgL_rtl_callz00_bglt) (BgL_funz00_4399);
				BgL_mez00_2877 = BgL_mez00_4400;
				{	/* SawJvm/code.scm 441 */
					BgL_globalz00_bglt BgL_varz00_2880;

					BgL_varz00_2880 =
						(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2876))->BgL_varz00);
					{	/* SawJvm/code.scm 442 */
						obj_t BgL_rz00_2881;

						BgL_rz00_2881 =
							BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(
							(BgL_jvmz00_bglt) (BgL_mez00_2877), BgL_varz00_2880);
						if ((BgL_rz00_2881 == CNST_TABLE_REF(((long) 49))))
							{	/* SawJvm/code.scm 443 */
								BGl_callzd2globalzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_2877), BgL_varz00_2880);
								{	/* SawJvm/code.scm 446 */
									bool_t BgL_testz00_6116;

									{	/* SawJvm/code.scm 446 */
										obj_t BgL_auxz00_6117;

										{	/* SawJvm/code.scm 446 */
											BgL_typez00_bglt BgL_obj1509z00_4054;

											{
												BgL_variablez00_bglt BgL_auxz00_6118;

												BgL_auxz00_6118 =
													(BgL_variablez00_bglt) (BgL_varz00_2880);
												BgL_obj1509z00_4054 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_6118))->
													BgL_typez00);
											}
											BgL_auxz00_6117 =
												(((BgL_typez00_bglt) CREF(BgL_obj1509z00_4054))->
												BgL_namez00);
										}
										BgL_testz00_6116 =
											(BgL_auxz00_6117 == CNST_TABLE_REF(((long) 86)));
									}
									if (BgL_testz00_6116)
										{	/* SawJvm/code.scm 446 */
											return CNST_TABLE_REF(((long) 13));
										}
									else
										{	/* SawJvm/code.scm 446 */
											return CNST_TABLE_REF(((long) 50));
							}}}
						else
							{	/* SawJvm/code.scm 443 */
								return BgL_rz00_2881;
							}
					}
				}
			}
		}
	}



/* gen-args-gen-fun-rtl5089 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl5089z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4401, obj_t BgL_funz00_4402, obj_t BgL_mez00_4403,
		obj_t BgL_argsz00_4404)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 433 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2859;

				obj_t BgL_mez00_2860;

				obj_t BgL_argsz00_2861;

				BgL_funz00_2859 = (BgL_rtl_callz00_bglt) (BgL_funz00_4402);
				BgL_mez00_2860 = BgL_mez00_4403;
				BgL_argsz00_2861 = BgL_argsz00_4404;
				{	/* SawJvm/code.scm 434 */
					obj_t BgL_rz00_2864;

					{	/* SawJvm/code.scm 434 */
						BgL_globalz00_bglt BgL_arg5630z00_2873;

						BgL_arg5630z00_2873 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2859))->BgL_varz00);
						BgL_rz00_2864 =
							BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(
							(BgL_jvmz00_bglt) (BgL_mez00_2860), BgL_arg5630z00_2873,
							BgL_argsz00_2861);
					}
					if ((BgL_rz00_2864 == CNST_TABLE_REF(((long) 49))))
						{	/* SawJvm/code.scm 435 */
							{
								obj_t BgL_l5051z00_2867;

								BgL_l5051z00_2867 = BgL_argsz00_2861;
							BgL_zc3anonymousza35627ze3z83_2868:
								if (PAIRP(BgL_l5051z00_2867))
									{	/* SawJvm/code.scm 436 */
										BGl_genzd2exprzd2zzsaw_jvm_codez00(
											(BgL_jvmz00_bglt) (BgL_mez00_2860),
											CAR(BgL_l5051z00_2867));
										{
											obj_t BgL_l5051z00_6138;

											BgL_l5051z00_6138 = CDR(BgL_l5051z00_2867);
											BgL_l5051z00_2867 = BgL_l5051z00_6138;
											goto BgL_zc3anonymousza35627ze3z83_2868;
										}
									}
								else
									{	/* SawJvm/code.scm 436 */
										((bool_t) 1);
									}
							}
							{	/* SawJvm/code.scm 437 */
								BgL_rtl_funz00_bglt BgL_funz00_4025;

								BgL_funz00_4025 = (BgL_rtl_funz00_bglt) (BgL_funz00_2859);
								{	/* SawJvm/code.scm 437 */
									obj_t BgL_method5067z00_4027;

									{	/* SawJvm/code.scm 437 */
										BgL_objectz00_bglt BgL_objz00_4028;

										BgL_objz00_4028 = (BgL_objectz00_bglt) (BgL_funz00_4025);
										{	/* SawJvm/code.scm 437 */
											long BgL_objzd2classzd2numz00_4029;

											BgL_objzd2classzd2numz00_4029 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_4028);
											{	/* SawJvm/code.scm 437 */
												obj_t BgL_arg2643z00_4030;

												BgL_arg2643z00_4030 =
													PROCEDURE_REF(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
													(int) (((long) 1)));
												{	/* SawJvm/code.scm 437 */
													obj_t BgL_arrayz00_4032;

													int BgL_offsetz00_4033;

													BgL_arrayz00_4032 = BgL_arg2643z00_4030;
													BgL_offsetz00_4033 =
														(int) (BgL_objzd2classzd2numz00_4029);
													{	/* SawJvm/code.scm 437 */
														long BgL_offsetz00_4034;

														BgL_offsetz00_4034 =
															((long) (BgL_offsetz00_4033) - OBJECT_TYPE);
														{	/* SawJvm/code.scm 437 */
															long BgL_modz00_4035;

															{	/* SawJvm/code.scm 437 */
																int BgL_arg2645z00_4036;

																BgL_arg2645z00_4036 = (int) (((long) 16));
																{	/* SawJvm/code.scm 437 */
																	long BgL_auxz00_6149;

																	BgL_auxz00_6149 =
																		(long) (BgL_arg2645z00_4036);
																	BgL_modz00_4035 =
																		(BgL_offsetz00_4034 / BgL_auxz00_6149);
															}}
															{	/* SawJvm/code.scm 437 */
																long BgL_restz00_4037;

																{	/* SawJvm/code.scm 437 */
																	int BgL_arg2644z00_4038;

																	BgL_arg2644z00_4038 = (int) (((long) 16));
																	{	/* SawJvm/code.scm 437 */
																		long BgL_auxz00_6153;

																		BgL_auxz00_6153 =
																			(long) (BgL_arg2644z00_4038);
																		BgL_restz00_4037 =
																			(BgL_offsetz00_4034 % BgL_auxz00_6153);
																}}
																{	/* SawJvm/code.scm 437 */

																	BgL_method5067z00_4027 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_4032,
																			(int) (BgL_modz00_4035)),
																		(int) (BgL_restz00_4037));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method5067z00_4027)
										(BgL_method5067z00_4027, (obj_t) (BgL_funz00_4025),
										BgL_mez00_2860, BEOA);
								}
							}
						}
					else
						{	/* SawJvm/code.scm 435 */
							return BgL_rz00_2864;
						}
				}
			}
		}
	}



/* gen-fun-rtl_switch5087 */
	obj_t BGl_genzd2funzd2rtl_switch5087z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4405, obj_t BgL_funz00_4406, obj_t BgL_mez00_4407)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 391 */
			{
				BgL_rtl_switchz00_bglt BgL_funz00_2742;

				obj_t BgL_mez00_2743;

				BgL_funz00_2742 = (BgL_rtl_switchz00_bglt) (BgL_funz00_4406);
				BgL_mez00_2743 = BgL_mez00_4407;
				{	/* SawJvm/code.scm 394 */
					obj_t BgL_ldefz00_2747;

					obj_t BgL_num2labz00_2748;

					BgL_ldefz00_2747 = BUNSPEC;
					BgL_num2labz00_2748 = BNIL;
					{	/* SawJvm/code.scm 398 */
						obj_t BgL_g5043z00_2751;

						obj_t BgL_g5044z00_2752;

						{
							BgL_rtl_selectz00_bglt BgL_auxz00_6164;

							BgL_auxz00_6164 = (BgL_rtl_selectz00_bglt) (BgL_funz00_2742);
							BgL_g5043z00_2751 =
								(((BgL_rtl_selectz00_bglt) CREF(BgL_auxz00_6164))->
								BgL_patternsz00);
						}
						{	/* SawJvm/code.scm 403 */
							obj_t BgL_l5034z00_2771;

							BgL_l5034z00_2771 =
								(((BgL_rtl_switchz00_bglt) CREF(BgL_funz00_2742))->
								BgL_labelsz00);
							if (NULLP(BgL_l5034z00_2771))
								{	/* SawJvm/code.scm 403 */
									BgL_g5044z00_2752 = BNIL;
								}
							else
								{	/* SawJvm/code.scm 403 */
									obj_t BgL_head5036z00_2773;

									{	/* SawJvm/code.scm 403 */
										int BgL_arg5576z00_2786;

										{	/* SawJvm/code.scm 403 */
											BgL_blockz00_bglt BgL_obj4694z00_3958;

											{	/* SawJvm/code.scm 403 */
												obj_t BgL_pairz00_3957;

												BgL_pairz00_3957 = BgL_l5034z00_2771;
												BgL_obj4694z00_3958 =
													(BgL_blockz00_bglt) (CAR(BgL_pairz00_3957));
											}
											BgL_arg5576z00_2786 =
												(((BgL_blockz00_bglt) CREF(BgL_obj4694z00_3958))->
												BgL_labelz00);
										}
										BgL_head5036z00_2773 =
											MAKE_PAIR(BINT(BgL_arg5576z00_2786), BNIL);
									}
									{	/* SawJvm/code.scm 403 */
										obj_t BgL_g5039z00_2774;

										BgL_g5039z00_2774 = CDR(BgL_l5034z00_2771);
										{
											obj_t BgL_l5034z00_2776;

											obj_t BgL_tail5037z00_2777;

											BgL_l5034z00_2776 = BgL_g5039z00_2774;
											BgL_tail5037z00_2777 = BgL_head5036z00_2773;
										BgL_zc3anonymousza35570ze3z83_2778:
											if (NULLP(BgL_l5034z00_2776))
												{	/* SawJvm/code.scm 403 */
													BgL_g5044z00_2752 = BgL_head5036z00_2773;
												}
											else
												{	/* SawJvm/code.scm 403 */
													obj_t BgL_newtail5038z00_2780;

													{	/* SawJvm/code.scm 403 */
														int BgL_arg5573z00_2782;

														{	/* SawJvm/code.scm 403 */
															BgL_blockz00_bglt BgL_obj4694z00_3964;

															{	/* SawJvm/code.scm 403 */
																obj_t BgL_pairz00_3963;

																BgL_pairz00_3963 = BgL_l5034z00_2776;
																BgL_obj4694z00_3964 =
																	(BgL_blockz00_bglt) (CAR(BgL_pairz00_3963));
															}
															BgL_arg5573z00_2782 =
																(((BgL_blockz00_bglt)
																	CREF(BgL_obj4694z00_3964))->BgL_labelz00);
														}
														BgL_newtail5038z00_2780 =
															MAKE_PAIR(BINT(BgL_arg5573z00_2782), BNIL);
													}
													SET_CDR(BgL_tail5037z00_2777,
														BgL_newtail5038z00_2780);
													{
														obj_t BgL_tail5037z00_6186;

														obj_t BgL_l5034z00_6184;

														BgL_l5034z00_6184 = CDR(BgL_l5034z00_2776);
														BgL_tail5037z00_6186 = BgL_newtail5038z00_2780;
														BgL_tail5037z00_2777 = BgL_tail5037z00_6186;
														BgL_l5034z00_2776 = BgL_l5034z00_6184;
														goto BgL_zc3anonymousza35570ze3z83_2778;
													}
												}
										}
									}
								}
						}
						{
							obj_t BgL_ll5040z00_2754;

							obj_t BgL_ll5041z00_2755;

							BgL_ll5040z00_2754 = BgL_g5043z00_2751;
							BgL_ll5041z00_2755 = BgL_g5044z00_2752;
						BgL_zc3anonymousza35561ze3z83_2756:
							if (NULLP(BgL_ll5040z00_2754))
								{	/* SawJvm/code.scm 398 */
									((bool_t) 1);
								}
							else
								{	/* SawJvm/code.scm 398 */
									{	/* SawJvm/code.scm 399 */
										obj_t BgL_patz00_2758;

										obj_t BgL_labz00_2759;

										BgL_patz00_2758 = CAR(BgL_ll5040z00_2754);
										BgL_labz00_2759 = CAR(BgL_ll5041z00_2755);
										if ((BgL_patz00_2758 == CNST_TABLE_REF(((long) 92))))
											{	/* SawJvm/code.scm 399 */
												BgL_ldefz00_2747 =
													BGl_Lz00zzsaw_jvm_codez00(BgL_labz00_2759);
											}
										else
											{
												obj_t BgL_l5032z00_2762;

												{	/* SawJvm/code.scm 401 */
													bool_t BgL_auxz00_6195;

													BgL_l5032z00_2762 = BgL_patz00_2758;
												BgL_zc3anonymousza35564ze3z83_2763:
													if (PAIRP(BgL_l5032z00_2762))
														{	/* SawJvm/code.scm 401 */
															{	/* SawJvm/code.scm 401 */
																obj_t BgL_nz00_2765;

																BgL_nz00_2765 = CAR(BgL_l5032z00_2762);
																{	/* SawJvm/code.scm 401 */
																	obj_t BgL_arg5623z00_3977;

																	BgL_arg5623z00_3977 =
																		MAKE_PAIR(BgL_nz00_2765,
																		BGl_Lz00zzsaw_jvm_codez00(BgL_labz00_2759));
																	BgL_num2labz00_2748 =
																		MAKE_PAIR(BgL_arg5623z00_3977,
																		BgL_num2labz00_2748);
																}
															}
															{
																obj_t BgL_l5032z00_6202;

																BgL_l5032z00_6202 = CDR(BgL_l5032z00_2762);
																BgL_l5032z00_2762 = BgL_l5032z00_6202;
																goto BgL_zc3anonymousza35564ze3z83_2763;
															}
														}
													else
														{	/* SawJvm/code.scm 401 */
															BgL_auxz00_6195 = ((bool_t) 1);
														}
													BBOOL(BgL_auxz00_6195);
												}
											}
									}
									{
										obj_t BgL_ll5041z00_6207;

										obj_t BgL_ll5040z00_6205;

										BgL_ll5040z00_6205 = CDR(BgL_ll5040z00_2754);
										BgL_ll5041z00_6207 = CDR(BgL_ll5041z00_2755);
										BgL_ll5041z00_2755 = BgL_ll5041z00_6207;
										BgL_ll5040z00_2754 = BgL_ll5040z00_6205;
										goto BgL_zc3anonymousza35561ze3z83_2756;
									}
								}
						}
					}
					if (NULLP(CDR(BgL_num2labz00_2748)))
						{	/* SawJvm/code.scm 405 */
							{	/* SawJvm/code.scm 406 */
								obj_t BgL_arg5580z00_2790;

								{	/* SawJvm/code.scm 406 */
									obj_t BgL_pairz00_3984;

									BgL_pairz00_3984 = BgL_num2labz00_2748;
									BgL_arg5580z00_2790 = CAR(CAR(BgL_pairz00_3984));
								}
								BGl_pushzd2intzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_2743), BgL_arg5580z00_2790);
							}
							BGl_branchz00zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_2743),
								CNST_TABLE_REF(((long) 93)), BgL_ldefz00_2747);
							{	/* SawJvm/code.scm 408 */
								obj_t BgL_arg5581z00_2791;

								obj_t BgL_arg5582z00_2792;

								BgL_arg5581z00_2791 = CNST_TABLE_REF(((long) 66));
								{	/* SawJvm/code.scm 408 */
									obj_t BgL_pairz00_3988;

									BgL_pairz00_3988 = BgL_num2labz00_2748;
									BgL_arg5582z00_2792 = CDR(CAR(BgL_pairz00_3988));
								}
								BGl_branchz00zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_2743), BgL_arg5581z00_2791,
									BgL_arg5582z00_2792);
						}}
					else
						{	/* SawJvm/code.scm 405 */
							BgL_num2labz00_2748 =
								BGl_sortz00zz__r4_vectors_6_8z00(BgL_num2labz00_2748,
								BGl_proc5865z00zzsaw_jvm_codez00);
							{	/* SawJvm/code.scm 411 */
								obj_t BgL_numsz00_2800;

								{	/* SawJvm/code.scm 411 */
									obj_t BgL_l5045z00_2824;

									BgL_l5045z00_2824 = BgL_num2labz00_2748;
									if (NULLP(BgL_l5045z00_2824))
										{	/* SawJvm/code.scm 411 */
											BgL_numsz00_2800 = BNIL;
										}
									else
										{	/* SawJvm/code.scm 411 */
											obj_t BgL_head5047z00_2826;

											BgL_head5047z00_2826 =
												MAKE_PAIR(CAR(CAR(BgL_l5045z00_2824)), BNIL);
											{	/* SawJvm/code.scm 411 */
												obj_t BgL_g5050z00_2827;

												BgL_g5050z00_2827 = CDR(BgL_l5045z00_2824);
												{
													obj_t BgL_l5045z00_2829;

													obj_t BgL_tail5048z00_2830;

													BgL_l5045z00_2829 = BgL_g5050z00_2827;
													BgL_tail5048z00_2830 = BgL_head5047z00_2826;
												BgL_zc3anonymousza35608ze3z83_2831:
													if (NULLP(BgL_l5045z00_2829))
														{	/* SawJvm/code.scm 411 */
															BgL_numsz00_2800 = BgL_head5047z00_2826;
														}
													else
														{	/* SawJvm/code.scm 411 */
															obj_t BgL_newtail5049z00_2833;

															BgL_newtail5049z00_2833 =
																MAKE_PAIR(CAR(CAR(BgL_l5045z00_2829)), BNIL);
															SET_CDR(BgL_tail5048z00_2830,
																BgL_newtail5049z00_2833);
															{
																obj_t BgL_tail5048z00_6239;

																obj_t BgL_l5045z00_6237;

																BgL_l5045z00_6237 = CDR(BgL_l5045z00_2829);
																BgL_tail5048z00_6239 = BgL_newtail5049z00_2833;
																BgL_tail5048z00_2830 = BgL_tail5048z00_6239;
																BgL_l5045z00_2829 = BgL_l5045z00_6237;
																goto BgL_zc3anonymousza35608ze3z83_2831;
															}
														}
												}
											}
										}
								}
								{	/* SawJvm/code.scm 411 */
									obj_t BgL_minz00_2801;

									BgL_minz00_2801 = CAR(BgL_numsz00_2800);
									{	/* SawJvm/code.scm 412 */
										obj_t BgL_maxz00_2802;

										BgL_maxz00_2802 =
											CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_numsz00_2800));
										{	/* SawJvm/code.scm 413 */
											long BgL_nz00_2803;

											BgL_nz00_2803 = bgl_list_length(BgL_numsz00_2800);
											{	/* SawJvm/code.scm 414 */

												if (BGl_2zc3zc3zz__r4_numbers_6_5z00
													(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_nz00_2803),
															BINT((((long) 1) + ((long) CINT(BgL_maxz00_2802) -
																		(long) CINT(BgL_minz00_2801))))),
														BGl_real5866z00zzsaw_jvm_codez00))
													{	/* SawJvm/code.scm 416 */
														obj_t BgL_arg5588z00_2805;

														{	/* SawJvm/code.scm 416 */
															obj_t BgL_arg5589z00_2806;

															obj_t BgL_arg5590z00_2807;

															BgL_arg5589z00_2806 = CNST_TABLE_REF(((long) 94));
															{	/* SawJvm/code.scm 416 */
																obj_t BgL_arg5591z00_2808;

																BgL_arg5591z00_2808 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_num2labz00_2748, BNIL);
																{	/* SawJvm/code.scm 416 */
																	obj_t BgL_list5592z00_2809;

																	BgL_list5592z00_2809 =
																		MAKE_PAIR(BgL_arg5591z00_2808, BNIL);
																	BgL_arg5590z00_2807 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_ldefz00_2747, BgL_list5592z00_2809);
															}}
															BgL_arg5588z00_2805 =
																MAKE_PAIR(BgL_arg5589z00_2806,
																BgL_arg5590z00_2807);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															(BgL_jvmz00_bglt) (BgL_mez00_2743),
															BgL_arg5588z00_2805);
													}
												else
													{	/* SawJvm/code.scm 417 */
														obj_t BgL_arg5593z00_2810;

														{	/* SawJvm/code.scm 417 */
															obj_t BgL_arg5594z00_2811;

															obj_t BgL_arg5595z00_2812;

															BgL_arg5594z00_2811 = CNST_TABLE_REF(((long) 95));
															{	/* SawJvm/code.scm 418 */
																obj_t BgL_arg5596z00_2813;

																BgL_arg5596z00_2813 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_flatz00zzsaw_jvm_codez00
																	(BgL_num2labz00_2748, BgL_ldefz00_2747),
																	BNIL);
																{	/* SawJvm/code.scm 417 */
																	obj_t BgL_list5597z00_2814;

																	{	/* SawJvm/code.scm 417 */
																		obj_t BgL_arg5598z00_2815;

																		BgL_arg5598z00_2815 =
																			MAKE_PAIR(BgL_arg5596z00_2813, BNIL);
																		BgL_list5597z00_2814 =
																			MAKE_PAIR(BgL_minz00_2801,
																			BgL_arg5598z00_2815);
																	}
																	BgL_arg5595z00_2812 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_ldefz00_2747, BgL_list5597z00_2814);
															}}
															BgL_arg5593z00_2810 =
																MAKE_PAIR(BgL_arg5594z00_2811,
																BgL_arg5595z00_2812);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															(BgL_jvmz00_bglt) (BgL_mez00_2743),
															BgL_arg5593z00_2810);
						}}}}}}}
					return CNST_TABLE_REF(((long) 13));
		}}}
	}



/* L */
	obj_t BGl_Lz00zzsaw_jvm_codez00(obj_t BgL_nz00_2843)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 396 */
			{	/* SawJvm/code.scm 396 */
				obj_t BgL_arg5619z00_2845;

				{	/* SawJvm/code.scm 396 */
					obj_t BgL_arg5621z00_2847;

					{	/* SawJvm/code.scm 396 */

						BgL_arg5621z00_2847 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) CINT(BgL_nz00_2843), ((long) 10));
					}
					BgL_arg5619z00_2845 =
						string_append(BGl_string5867z00zzsaw_jvm_codez00,
						BgL_arg5621z00_2847);
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg5619z00_2845));
			}
		}
	}



/* <anonymous:5584> */
	obj_t BGl_zc3anonymousza35584ze3z83zzsaw_jvm_codez00(obj_t BgL_envz00_4408,
		obj_t BgL_xz00_4409, obj_t BgL_yz00_4410)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 410 */
			{
				obj_t BgL_xz00_2794;

				obj_t BgL_yz00_2795;

				{	/* SawJvm/code.scm 410 */
					bool_t BgL_auxz00_6276;

					BgL_xz00_2794 = BgL_xz00_4409;
					BgL_yz00_2795 = BgL_yz00_4410;
					{	/* SawJvm/code.scm 410 */
						long BgL_auxz00_6280;

						long BgL_auxz00_6277;

						{	/* SawJvm/code.scm 410 */
							obj_t BgL_pairz00_3995;

							BgL_pairz00_3995 = BgL_yz00_2795;
							BgL_auxz00_6280 = (long) CINT(CAR(BgL_pairz00_3995));
						}
						{	/* SawJvm/code.scm 410 */
							obj_t BgL_pairz00_3994;

							BgL_pairz00_3994 = BgL_xz00_2794;
							BgL_auxz00_6277 = (long) CINT(CAR(BgL_pairz00_3994));
						}
						BgL_auxz00_6276 = (BgL_auxz00_6277 < BgL_auxz00_6280);
					}
					return BBOOL(BgL_auxz00_6276);
				}
			}
		}
	}



/* gen-fun-rtl_go5085 */
	obj_t BGl_genzd2funzd2rtl_go5085z00zzsaw_jvm_codez00(obj_t BgL_envz00_4411,
		obj_t BgL_funz00_4412, obj_t BgL_mez00_4413)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 387 */
			{
				BgL_rtl_goz00_bglt BgL_funz00_2733;

				obj_t BgL_mez00_2734;

				BgL_funz00_2733 = (BgL_rtl_goz00_bglt) (BgL_funz00_4412);
				BgL_mez00_2734 = BgL_mez00_4413;
				{	/* SawJvm/code.scm 388 */
					obj_t BgL_arg5557z00_3949;

					int BgL_arg5558z00_3950;

					BgL_arg5557z00_3949 = CNST_TABLE_REF(((long) 66));
					{	/* SawJvm/code.scm 388 */
						BgL_blockz00_bglt BgL_obj4694z00_3953;

						BgL_obj4694z00_3953 =
							(((BgL_rtl_goz00_bglt) CREF(BgL_funz00_2733))->BgL_toz00);
						BgL_arg5558z00_3950 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4694z00_3953))->BgL_labelz00);
					}
					BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2734), BgL_arg5557z00_3949,
						BINT(BgL_arg5558z00_3950));
				}
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-args-gen-fun-rtl5083 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl5083z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4414, obj_t BgL_funz00_4415, obj_t BgL_mez00_4416,
		obj_t BgL_argsz00_4417)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 378 */
			{
				BgL_rtl_ifnez00_bglt BgL_funz00_2719;

				obj_t BgL_mez00_2720;

				obj_t BgL_argsz00_2721;

				BgL_funz00_2719 = (BgL_rtl_ifnez00_bglt) (BgL_funz00_4415);
				BgL_mez00_2720 = BgL_mez00_4416;
				BgL_argsz00_2721 = BgL_argsz00_4417;
				{	/* SawJvm/code.scm 379 */
					obj_t BgL_argz00_2724;

					int BgL_labz00_2725;

					BgL_argz00_2724 = CAR(BgL_argsz00_2721);
					{	/* SawJvm/code.scm 379 */
						BgL_blockz00_bglt BgL_obj4694z00_3915;

						BgL_obj4694z00_3915 =
							(((BgL_rtl_ifnez00_bglt) CREF(BgL_funz00_2719))->BgL_thenz00);
						BgL_labz00_2725 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4694z00_3915))->BgL_labelz00);
					}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_2724,
							BGl_rtl_regz00zzsaw_defsz00))
						{	/* SawJvm/code.scm 380 */
							BGl_loadzd2regzd2zzsaw_jvm_codez00(BgL_mez00_2720,
								BgL_argz00_2724);
							BGl_branchz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_2720),
								CNST_TABLE_REF(((long) 47)), BINT(BgL_labz00_2725));
						}
					else
						{	/* SawJvm/code.scm 384 */
							BgL_rtl_funz00_bglt BgL_arg5553z00_2728;

							obj_t BgL_arg5554z00_2729;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_6303;

								BgL_auxz00_6303 = (BgL_rtl_insz00_bglt) (BgL_argz00_2724);
								BgL_arg5553z00_2728 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6303))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_6306;

								BgL_auxz00_6306 = (BgL_rtl_insz00_bglt) (BgL_argz00_2724);
								BgL_arg5554z00_2729 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6306))->BgL_argsz00);
							}
							{	/* SawJvm/code.scm 384 */
								obj_t BgL_method5138z00_3924;

								{	/* SawJvm/code.scm 384 */
									BgL_objectz00_bglt BgL_objz00_3925;

									BgL_objz00_3925 = (BgL_objectz00_bglt) (BgL_arg5553z00_2728);
									{	/* SawJvm/code.scm 384 */
										long BgL_objzd2classzd2numz00_3926;

										BgL_objzd2classzd2numz00_3926 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3925);
										{	/* SawJvm/code.scm 384 */
											obj_t BgL_arg2643z00_3927;

											BgL_arg2643z00_3927 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
												(int) (((long) 1)));
											{	/* SawJvm/code.scm 384 */
												obj_t BgL_arrayz00_3929;

												int BgL_offsetz00_3930;

												BgL_arrayz00_3929 = BgL_arg2643z00_3927;
												BgL_offsetz00_3930 =
													(int) (BgL_objzd2classzd2numz00_3926);
												{	/* SawJvm/code.scm 384 */
													long BgL_offsetz00_3931;

													BgL_offsetz00_3931 =
														((long) (BgL_offsetz00_3930) - OBJECT_TYPE);
													{	/* SawJvm/code.scm 384 */
														long BgL_modz00_3932;

														{	/* SawJvm/code.scm 384 */
															int BgL_arg2645z00_3933;

															BgL_arg2645z00_3933 = (int) (((long) 16));
															{	/* SawJvm/code.scm 384 */
																long BgL_auxz00_6317;

																BgL_auxz00_6317 = (long) (BgL_arg2645z00_3933);
																BgL_modz00_3932 =
																	(BgL_offsetz00_3931 / BgL_auxz00_6317);
														}}
														{	/* SawJvm/code.scm 384 */
															long BgL_restz00_3934;

															{	/* SawJvm/code.scm 384 */
																int BgL_arg2644z00_3935;

																BgL_arg2644z00_3935 = (int) (((long) 16));
																{	/* SawJvm/code.scm 384 */
																	long BgL_auxz00_6321;

																	BgL_auxz00_6321 =
																		(long) (BgL_arg2644z00_3935);
																	BgL_restz00_3934 =
																		(BgL_offsetz00_3931 % BgL_auxz00_6321);
															}}
															{	/* SawJvm/code.scm 384 */

																BgL_method5138z00_3924 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3929,
																		(int) (BgL_modz00_3932)),
																	(int) (BgL_restz00_3934));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5138z00_3924) (BgL_method5138z00_3924,
									(obj_t) (BgL_arg5553z00_2728), BgL_mez00_2720,
									BgL_arg5554z00_2729, BTRUE, BINT(BgL_labz00_2725), BEOA);
						}}
					return CNST_TABLE_REF(((long) 13));
		}}}
	}



/* gen-args-gen-fun-rtl5081 */
	obj_t BGl_genzd2argszd2genzd2funzd2rtl5081z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4418, obj_t BgL_funz00_4419, obj_t BgL_mez00_4420,
		obj_t BgL_argsz00_4421)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 369 */
			{
				BgL_rtl_ifeqz00_bglt BgL_funz00_2705;

				obj_t BgL_mez00_2706;

				obj_t BgL_argsz00_2707;

				BgL_funz00_2705 = (BgL_rtl_ifeqz00_bglt) (BgL_funz00_4419);
				BgL_mez00_2706 = BgL_mez00_4420;
				BgL_argsz00_2707 = BgL_argsz00_4421;
				{	/* SawJvm/code.scm 370 */
					obj_t BgL_argz00_2710;

					int BgL_labz00_2711;

					BgL_argz00_2710 = CAR(BgL_argsz00_2707);
					{	/* SawJvm/code.scm 370 */
						BgL_blockz00_bglt BgL_obj4694z00_3879;

						BgL_obj4694z00_3879 =
							(((BgL_rtl_ifeqz00_bglt) CREF(BgL_funz00_2705))->BgL_thenz00);
						BgL_labz00_2711 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4694z00_3879))->BgL_labelz00);
					}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_2710,
							BGl_rtl_regz00zzsaw_defsz00))
						{	/* SawJvm/code.scm 371 */
							BGl_loadzd2regzd2zzsaw_jvm_codez00(BgL_mez00_2706,
								BgL_argz00_2710);
							BGl_branchz00zzsaw_jvm_outz00((BgL_jvmz00_bglt) (BgL_mez00_2706),
								CNST_TABLE_REF(((long) 48)), BINT(BgL_labz00_2711));
						}
					else
						{	/* SawJvm/code.scm 375 */
							BgL_rtl_funz00_bglt BgL_arg5548z00_2714;

							obj_t BgL_arg5549z00_2715;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_6344;

								BgL_auxz00_6344 = (BgL_rtl_insz00_bglt) (BgL_argz00_2710);
								BgL_arg5548z00_2714 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6344))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_6347;

								BgL_auxz00_6347 = (BgL_rtl_insz00_bglt) (BgL_argz00_2710);
								BgL_arg5549z00_2715 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6347))->BgL_argsz00);
							}
							{	/* SawJvm/code.scm 375 */
								obj_t BgL_method5138z00_3888;

								{	/* SawJvm/code.scm 375 */
									BgL_objectz00_bglt BgL_objz00_3889;

									BgL_objz00_3889 = (BgL_objectz00_bglt) (BgL_arg5548z00_2714);
									{	/* SawJvm/code.scm 375 */
										long BgL_objzd2classzd2numz00_3890;

										BgL_objzd2classzd2numz00_3890 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3889);
										{	/* SawJvm/code.scm 375 */
											obj_t BgL_arg2643z00_3891;

											BgL_arg2643z00_3891 =
												PROCEDURE_REF
												(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
												(int) (((long) 1)));
											{	/* SawJvm/code.scm 375 */
												obj_t BgL_arrayz00_3893;

												int BgL_offsetz00_3894;

												BgL_arrayz00_3893 = BgL_arg2643z00_3891;
												BgL_offsetz00_3894 =
													(int) (BgL_objzd2classzd2numz00_3890);
												{	/* SawJvm/code.scm 375 */
													long BgL_offsetz00_3895;

													BgL_offsetz00_3895 =
														((long) (BgL_offsetz00_3894) - OBJECT_TYPE);
													{	/* SawJvm/code.scm 375 */
														long BgL_modz00_3896;

														{	/* SawJvm/code.scm 375 */
															int BgL_arg2645z00_3897;

															BgL_arg2645z00_3897 = (int) (((long) 16));
															{	/* SawJvm/code.scm 375 */
																long BgL_auxz00_6358;

																BgL_auxz00_6358 = (long) (BgL_arg2645z00_3897);
																BgL_modz00_3896 =
																	(BgL_offsetz00_3895 / BgL_auxz00_6358);
														}}
														{	/* SawJvm/code.scm 375 */
															long BgL_restz00_3898;

															{	/* SawJvm/code.scm 375 */
																int BgL_arg2644z00_3899;

																BgL_arg2644z00_3899 = (int) (((long) 16));
																{	/* SawJvm/code.scm 375 */
																	long BgL_auxz00_6362;

																	BgL_auxz00_6362 =
																		(long) (BgL_arg2644z00_3899);
																	BgL_restz00_3898 =
																		(BgL_offsetz00_3895 % BgL_auxz00_6362);
															}}
															{	/* SawJvm/code.scm 375 */

																BgL_method5138z00_3888 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3893,
																		(int) (BgL_modz00_3896)),
																	(int) (BgL_restz00_3898));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5138z00_3888) (BgL_method5138z00_3888,
									(obj_t) (BgL_arg5548z00_2714), BgL_mez00_2706,
									BgL_arg5549z00_2715, BFALSE, BINT(BgL_labz00_2711), BEOA);
						}}
					return CNST_TABLE_REF(((long) 13));
		}}}
	}



/* gen-fun-rtl_globalre5079 */
	obj_t BGl_genzd2funzd2rtl_globalre5079z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4422, obj_t BgL_funz00_4423, obj_t BgL_mez00_4424)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 357 */
			{
				BgL_rtl_globalrefz00_bglt BgL_funz00_2697;

				obj_t BgL_mez00_2698;

				BgL_funz00_2697 = (BgL_rtl_globalrefz00_bglt) (BgL_funz00_4423);
				BgL_mez00_2698 = BgL_mez00_4424;
				{	/* SawJvm/code.scm 358 */
					BgL_globalz00_bglt BgL_varz00_2701;

					BgL_varz00_2701 =
						(((BgL_rtl_globalrefz00_bglt) CREF(BgL_funz00_2697))->BgL_varz00);
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2698), CNST_TABLE_REF(((long) 96)));
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2698), CNST_TABLE_REF(((long) 59)));
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2698), CNST_TABLE_REF(((long) 97)));
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2698), CNST_TABLE_REF(((long) 59)));
					{	/* SawJvm/code.scm 363 */
						int BgL_arg5545z00_2702;

						{	/* SawJvm/code.scm 363 */
							BgL_indexedz00_bglt BgL_obj4808z00_3876;

							BgL_obj4808z00_3876 = (BgL_indexedz00_bglt) (BgL_varz00_2701);
							{
								obj_t BgL_auxz00_6389;

								{	/* SawJvm/code.scm 363 */
									BgL_objectz00_bglt BgL_auxz00_6390;

									BgL_auxz00_6390 = (BgL_objectz00_bglt) (BgL_obj4808z00_3876);
									BgL_auxz00_6389 = BGL_OBJECT_WIDENING(BgL_auxz00_6390);
								}
								BgL_arg5545z00_2702 =
									(((BgL_indexedz00_bglt) CREF(BgL_auxz00_6389))->BgL_indexz00);
						}}
						BGl_pushzd2intzd2zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_2698), BINT(BgL_arg5545z00_2702));
					}
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2698), CNST_TABLE_REF(((long) 98)));
		}}}
	}



/* gen-fun-rtl_storeg5077 */
	obj_t BGl_genzd2funzd2rtl_storeg5077z00zzsaw_jvm_codez00(obj_t
		BgL_envz00_4425, obj_t BgL_funz00_4426, obj_t BgL_mez00_4427)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 353 */
			{
				BgL_rtl_storegz00_bglt BgL_funz00_2684;

				obj_t BgL_mez00_2685;

				BgL_funz00_2684 = (BgL_rtl_storegz00_bglt) (BgL_funz00_4426);
				BgL_mez00_2685 = BgL_mez00_4427;
				{	/* SawJvm/code.scm 354 */
					obj_t BgL_arg5537z00_2688;

					{	/* SawJvm/code.scm 354 */
						obj_t BgL_arg5538z00_2689;

						obj_t BgL_arg5539z00_2690;

						BgL_arg5538z00_2689 = CNST_TABLE_REF(((long) 99));
						{	/* SawJvm/code.scm 354 */
							obj_t BgL_arg5540z00_2691;

							{	/* SawJvm/code.scm 354 */
								BgL_globalz00_bglt BgL_arg5543z00_2694;

								BgL_arg5543z00_2694 =
									(((BgL_rtl_storegz00_bglt) CREF(BgL_funz00_2684))->
									BgL_varz00);
								BgL_arg5540z00_2691 =
									BGl_declarezd2globalzd2zzsaw_jvm_outz00((BgL_jvmz00_bglt)
									(BgL_mez00_2685), BgL_arg5543z00_2694);
							}
							{	/* SawJvm/code.scm 354 */
								obj_t BgL_list5542z00_2693;

								BgL_list5542z00_2693 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg5539z00_2690 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg5540z00_2691, BgL_list5542z00_2693);
						}}
						BgL_arg5537z00_2688 =
							MAKE_PAIR(BgL_arg5538z00_2689, BgL_arg5539z00_2690);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2685), BgL_arg5537z00_2688);
				}
				return CNST_TABLE_REF(((long) 13));
		}}
	}



/* gen-fun-rtl_loadg5075 */
	obj_t BGl_genzd2funzd2rtl_loadg5075z00zzsaw_jvm_codez00(obj_t BgL_envz00_4428,
		obj_t BgL_funz00_4429, obj_t BgL_mez00_4430)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 350 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_2671;

				obj_t BgL_mez00_2672;

				BgL_funz00_2671 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_4429);
				BgL_mez00_2672 = BgL_mez00_4430;
				{	/* SawJvm/code.scm 351 */
					obj_t BgL_arg5529z00_2675;

					{	/* SawJvm/code.scm 351 */
						obj_t BgL_arg5530z00_2676;

						obj_t BgL_arg5531z00_2677;

						BgL_arg5530z00_2676 = CNST_TABLE_REF(((long) 100));
						{	/* SawJvm/code.scm 351 */
							obj_t BgL_arg5532z00_2678;

							{	/* SawJvm/code.scm 351 */
								BgL_globalz00_bglt BgL_arg5535z00_2681;

								BgL_arg5535z00_2681 =
									(((BgL_rtl_loadgz00_bglt) CREF(BgL_funz00_2671))->BgL_varz00);
								BgL_arg5532z00_2678 =
									BGl_declarezd2globalzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_2672), BgL_arg5535z00_2681);
							}
							{	/* SawJvm/code.scm 351 */
								obj_t BgL_list5534z00_2680;

								BgL_list5534z00_2680 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg5531z00_2677 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg5532z00_2678, BgL_list5534z00_2680);
						}}
						BgL_arg5529z00_2675 =
							MAKE_PAIR(BgL_arg5530z00_2676, BgL_arg5531z00_2677);
					}
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_2672), BgL_arg5529z00_2675);
				}
			}
		}
	}



/* gen-fun-rtl_loadi5073 */
	obj_t BGl_genzd2funzd2rtl_loadi5073z00zzsaw_jvm_codez00(obj_t BgL_envz00_4431,
		obj_t BgL_funz00_4432, obj_t BgL_mez00_4433)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 313 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_2647;

				obj_t BgL_mez00_2648;

				BgL_funz00_2647 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_4432);
				BgL_mez00_2648 = BgL_mez00_4433;
				{	/* SawJvm/code.scm 314 */
					BgL_atomz00_bglt BgL_constantz00_2651;

					BgL_constantz00_2651 =
						(((BgL_rtl_loadiz00_bglt) CREF(BgL_funz00_2647))->BgL_constantz00);
					{	/* SawJvm/code.scm 315 */
						obj_t BgL_valuez00_2652;

						BgL_valuez00_2652 =
							(((BgL_atomz00_bglt) CREF(BgL_constantz00_2651))->BgL_valuez00);
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_2652))
							{	/* SawJvm/code.scm 318 */
								obj_t BgL_arg5513z00_2654;

								{	/* SawJvm/code.scm 318 */
									BgL_typez00_bglt BgL_obj1509z00_3864;

									{
										BgL_nodez00_bglt BgL_auxz00_6426;

										BgL_auxz00_6426 = (BgL_nodez00_bglt) (BgL_constantz00_2651);
										BgL_obj1509z00_3864 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_6426))->BgL_typez00);
									}
									BgL_arg5513z00_2654 =
										(((BgL_typez00_bglt) CREF(BgL_obj1509z00_3864))->
										BgL_namez00);
								}
								return
									BGl_pushzd2numzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_2648), BgL_valuez00_2652,
									BgL_arg5513z00_2654);
							}
						else
							{	/* SawJvm/code.scm 317 */
								if (NULLP(BgL_valuez00_2652))
									{	/* SawJvm/code.scm 319 */
										return
											BGl_codez12z12zzsaw_jvm_outz00(
											(BgL_jvmz00_bglt) (BgL_mez00_2648),
											CNST_TABLE_REF(((long) 36)));
									}
								else
									{	/* SawJvm/code.scm 319 */
										if (BOOLEANP(BgL_valuez00_2652))
											{	/* SawJvm/code.scm 322 */
												long BgL_arg5517z00_2658;

												if (CBOOL(BgL_valuez00_2652))
													{	/* SawJvm/code.scm 322 */
														BgL_arg5517z00_2658 = ((long) 1);
													}
												else
													{	/* SawJvm/code.scm 322 */
														BgL_arg5517z00_2658 = ((long) 0);
													}
												return
													BGl_pushzd2intzd2zzsaw_jvm_outz00(
													(BgL_jvmz00_bglt) (BgL_mez00_2648),
													BINT(BgL_arg5517z00_2658));
											}
										else
											{	/* SawJvm/code.scm 321 */
												if (CHARP(BgL_valuez00_2652))
													{	/* SawJvm/code.scm 324 */
														long BgL_arg5519z00_2660;

														BgL_arg5519z00_2660 = (CCHAR(BgL_valuez00_2652));
														return
															BGl_pushzd2intzd2zzsaw_jvm_outz00(
															(BgL_jvmz00_bglt) (BgL_mez00_2648),
															BINT(BgL_arg5519z00_2660));
													}
												else
													{	/* SawJvm/code.scm 323 */
														if (STRINGP(BgL_valuez00_2652))
															{	/* SawJvm/code.scm 325 */
																BGl_pushzd2stringzd2zzsaw_jvm_outz00(
																	(BgL_jvmz00_bglt) (BgL_mez00_2648),
																	BgL_valuez00_2652);
																return
																	BGl_codez12z12zzsaw_jvm_outz00(
																	(BgL_jvmz00_bglt) (BgL_mez00_2648),
																	CNST_TABLE_REF(((long) 101)));
															}
														else
															{	/* SawJvm/code.scm 325 */
																if (EOF_OBJECTP(BgL_valuez00_2652))
																	{	/* SawJvm/code.scm 329 */
																		return
																			BGl_codez12z12zzsaw_jvm_outz00(
																			(BgL_jvmz00_bglt) (BgL_mez00_2648),
																			CNST_TABLE_REF(((long) 102)));
																	}
																else
																	{	/* SawJvm/code.scm 329 */
																		if ((BgL_valuez00_2652 == BCNST(258)))
																			{	/* SawJvm/code.scm 331 */
																				return
																					BGl_codez12z12zzsaw_jvm_outz00(
																					(BgL_jvmz00_bglt) (BgL_mez00_2648),
																					CNST_TABLE_REF(((long) 103)));
																			}
																		else
																			{	/* SawJvm/code.scm 331 */
																				if ((BgL_valuez00_2652 == BCNST(259)))
																					{	/* SawJvm/code.scm 333 */
																						return
																							BGl_codez12z12zzsaw_jvm_outz00(
																							(BgL_jvmz00_bglt)
																							(BgL_mez00_2648),
																							CNST_TABLE_REF(((long) 104)));
																					}
																				else
																					{	/* SawJvm/code.scm 333 */
																						if (
																							(BgL_valuez00_2652 == BCNST(262)))
																							{	/* SawJvm/code.scm 335 */
																								return
																									BGl_codez12z12zzsaw_jvm_outz00
																									((BgL_jvmz00_bglt)
																									(BgL_mez00_2648),
																									CNST_TABLE_REF(((long) 105)));
																							}
																						else
																							{	/* SawJvm/code.scm 335 */
																								if (
																									(BgL_valuez00_2652 ==
																										BUNSPEC))
																									{	/* SawJvm/code.scm 337 */
																										return
																											BGl_codez12z12zzsaw_jvm_outz00
																											((BgL_jvmz00_bglt)
																											(BgL_mez00_2648),
																											CNST_TABLE_REF(((long)
																													14)));
																									}
																								else
																									{	/* SawJvm/code.scm 337 */
																										if (UCS2P
																											(BgL_valuez00_2652))
																											{	/* SawJvm/code.scm 339 */
																												BGl_codez12z12zzsaw_jvm_outz00
																													((BgL_jvmz00_bglt)
																													(BgL_mez00_2648),
																													CNST_TABLE_REF(((long)
																															106)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													((BgL_jvmz00_bglt)
																													(BgL_mez00_2648),
																													CNST_TABLE_REF(((long)
																															59)));
																												{	/* SawJvm/code.scm 343 */
																													int
																														BgL_arg5527z00_2668;
																													{	/* SawJvm/code.scm 343 */
																														ucs2_t
																															BgL_ucs2z00_3872;
																														BgL_ucs2z00_3872 =
																															CUCS2
																															(BgL_valuez00_2652);
																														{	/* SawJvm/code.scm 343 */
																															obj_t
																																BgL_auxz00_6492;
																															BgL_auxz00_6492 =
																																BUCS2
																																(BgL_ucs2z00_3872);
																															BgL_arg5527z00_2668
																																=
																																CUCS2
																																(BgL_auxz00_6492);
																													}}
																													BGl_pushzd2intzd2zzsaw_jvm_outz00
																														((BgL_jvmz00_bglt)
																														(BgL_mez00_2648),
																														BINT
																														(BgL_arg5527z00_2668));
																												}
																												return
																													BGl_codez12z12zzsaw_jvm_outz00
																													((BgL_jvmz00_bglt)
																													(BgL_mez00_2648),
																													CNST_TABLE_REF(((long)
																															107)));
																											}
																										else
																											{	/* SawJvm/code.scm 339 */
																												return
																													BGl_errorz00zz__errorz00
																													(BGl_string5868z00zzsaw_jvm_codez00,
																													BGl_string5869z00zzsaw_jvm_codez00,
																													BgL_valuez00_2652);
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



/* gen-fun-rtl_mov5071 */
	obj_t BGl_genzd2funzd2rtl_mov5071z00zzsaw_jvm_codez00(obj_t BgL_envz00_4434,
		obj_t BgL_funz00_4435, obj_t BgL_mez00_4436)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 307 */
			{	/* SawJvm/code.scm 308 */
				obj_t BgL_res5877z00_4483;

				BgL_res5877z00_4483 = CNST_TABLE_REF(((long) 50));
				return BgL_res5877z00_4483;
			}
		}
	}



/* gen-fun-rtl_nop5069 */
	obj_t BGl_genzd2funzd2rtl_nop5069z00zzsaw_jvm_codez00(obj_t BgL_envz00_4437,
		obj_t BgL_funz00_4438, obj_t BgL_mez00_4439)
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 304 */
			{	/* SawJvm/code.scm 305 */
				obj_t BgL_res5878z00_4486;

				BgL_res5878z00_4486 = CNST_TABLE_REF(((long) 13));
				return BgL_res5878z00_4486;
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00()
	{
		AN_OBJECT;
		{	/* SawJvm/code.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 67756028),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(((long) 268512696),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 71277553),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(((long) 133573631),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(((long) 293010567),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_asz00(((long) 29862157),
				BSTRING_TO_STRING(BGl_string5870z00zzsaw_jvm_codez00));
		}
	}

#ifdef __cplusplus
}
#endif
