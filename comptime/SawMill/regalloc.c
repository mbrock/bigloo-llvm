/*===========================================================================*/
/*   (SawMill/regalloc.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/regalloc.scm)*/
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

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

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

	typedef struct BgL_regsetz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_lengthz00;
		int BgL_msiza7eza7;
		obj_t BgL_regvz00;
		obj_t BgL_reglz00;
		obj_t BgL_stringz00;
	}                *BgL_regsetz00_bglt;

	typedef struct BgL_blockzf2razf2_bgl
	{
		obj_t BgL_trsifz00;
	}                    *BgL_blockzf2razf2_bglt;

	typedef struct BgL_rtl_inszf2razf2_bgl
	{
		obj_t BgL_defz00;
		obj_t BgL_outz00;
		obj_t BgL_inz00;
		obj_t BgL_spillz00;
	}                      *BgL_rtl_inszf2razf2_bglt;

	typedef struct BgL_rtl_regzf2razf2_bgl
	{
		int BgL_numz00;
		obj_t BgL_colorz00;
		obj_t BgL_coalescez00;
		int BgL_occurrencesz00;
		obj_t BgL_interferez00;
		obj_t BgL_interfere2z00;
	}                      *BgL_rtl_regzf2razf2_bglt;


	static obj_t
		BGl_zc3anonymousza35058ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static obj_t
		BGl_zc3anonymousza34963ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	static obj_t
		BGl_blockzd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern BgL_regsetz00_bglt BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t
		BGl_zc3anonymousza35078ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	extern obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t, BgL_regsetz00_bglt);
	static BgL_blockzf2razf2_bglt
		BGl_blockzf2razd2nilz20zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	static bool_t
		BGl_protectzd2interference4567zd2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static BgL_rtl_regzf2razf2_bglt
		BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_z52allocatezd2rtl_regzf2raz72zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	static obj_t
		BGl_rtlzd2siza7ezd2rtl_ins4576za7zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_zc3anonymousza34990ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2rtl_i4589ze3zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_rtlzd2siza7ezd2block4574za7zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_livenessz12z12zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl__protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	extern BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	static bool_t BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt);
	static obj_t BGl__rtl_inszf2razf3z01zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_collectzd2registerz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regz00_bglt);
	static obj_t BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl_interferencez12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t
		BGl__z52allocatezd2rtl_inszf2raz72zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl__makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_regsetz00_bglt BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t
		BGl_shapezd2rtl_regzf2ra4580z20zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	static bool_t
		BGl_typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	extern bool_t BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_regsetz00_bglt);
	static obj_t
		BGl__collectzd2registerz12zc0zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regzf2razf2_bglt
		BGl_fillzd2rtl_regzf2raz12z32zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2 = BUNSPEC;
	static obj_t
		BGl_rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl_zc3anonymousza34774ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static bool_t
		BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
		(obj_t);
	static obj_t
		BGl_collectzd2registersz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	static BgL_rtl_inszf2razf2_bglt
		BGl_rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_argszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2block4594ze3zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	extern bool_t BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regzf2razf2_bglt);
	BGL_IMPORT obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static bool_t BGl_argszd2widenzd2raz12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t
		BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t
		BGl_structzb2objectzd2ze3objec4587z83zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec4592z83zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec4597z83zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__protectzd2interference4567zd2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static long BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2;
	static obj_t
		BGl__wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static bool_t
		BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regzf2razf2_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2();
	BGL_EXPORTED_DECL obj_t
		BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	extern obj_t
		BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t BGl__blockzf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl__rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t
		BGl_zc3anonymousza34829ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_regzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static obj_t
		BGl_zc3anonymousza34834ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2 =
		BUNSPEC;
	extern BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00();
	static obj_t
		BGl__fillzd2rtl_regzf2raz12z32zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_inszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_zc3anonymousza35222ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t BGl__blockzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t
		BGl__z52allocatezd2rtl_regzf2raz72zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl__typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_inszf2razf2_bglt);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DECL BgL_rtl_regzf2razf2_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	extern bool_t
		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regzf2razf2_bglt,
		BgL_regsetz00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static long BGl_removezd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__rtl_regzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl__typezd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static bool_t
		BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	static obj_t
		BGl__registerzd2allocationzd2zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2 =
		BUNSPEC;
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2blockzf2raz72zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl__rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t);
	extern obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza34901ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	extern obj_t
		BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00;
	static obj_t
		BGl_zc3anonymousza34904ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	extern bool_t BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regzf2razf2_bglt);
	static obj_t
		BGl_zc3anonymousza34907ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static bool_t
		BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl_zc3anonymousza34898ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t
		BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2(obj_t);
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_blockzf2razf2zzsaw_registerzd2allocationzd2 = BUNSPEC;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_dumpzd2rtl_inszf2ra4578z20zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_inszd2hardwarezd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_rtl_inszf2razf2_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t);
	extern obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	static obj_t BGl__interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2
		= BUNSPEC;
	static obj_t BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00;
	static obj_t
		BGl__rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t
		BGl_dumpzd2rtl_regzf2ra4583z20zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza35037ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regzf2razf2_bglt
		BGl_wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(int, obj_t,
		obj_t, int, obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza34940ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2 =
		BUNSPEC;
	extern bool_t BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt,
		obj_t);
	static bool_t
		BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2rtl_r4585ze3zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static bool_t
		BGl_inszd2funcallzd2spillz12z12zzsaw_registerzd2allocationzd2
		(BgL_rtl_inszf2razf2_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_zc3anonymousza35054ze3z83zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t __cnst[3];


	extern obj_t BGl_dumpzd2envzd2zzsaw_defsz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_blockzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
		BgL_bgl__blockza7f2raza7f3za705645za7,
		BGl__blockzf2razf3z01zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_protectzd2interference4567zd2envz00zzsaw_registerzd2allocationzd2,
		BgL_bgl__protectza7d2inter5646za7,
		BGl__protectzd2interference4567zd2zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_interferezd2regz12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl__interfereza7d2reg5647za7,
		BGl__interferezd2regz12zc0zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl__protectza7d2inter5648za7,
		BGl__protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_registerzd2allocationzd2,
		BgL_bgl__makeza7d2rtl_regza75649z00,
		BGl__makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtl_regza7f2raza7f35650z00,
		BGl__rtl_regzf2razf3z01zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2blockzf2razd2envza0zzsaw_registerzd2allocationzd2,
		BgL_bgl__za752allocateza7d2b5651z00,
		BGl__z52allocatezd2blockzf2raz72zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2interferencez12zd2d4569zd2envzc0zzsaw_registerzd2allocationzd2,
		BgL_bgl__typeza7d2interfer5652za7,
		BGl__typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtl_regza7f2raza7d25653z00,
		BGl__rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 0);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5603z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za7c3anonymousza7a345654z00,
		BGl_zc3anonymousza34940ze3z83zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5604z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za7c3anonymousza7a345655z00,
		BGl_zc3anonymousza34963ze3z83zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5596z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_argsza7d2collectza7d5656z00,
		BGl_argszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtlza7d2siza7a7eza7755657za7,
		BGl__rtlzd2siza7ez75zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5620z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_rtlza7d2siza7a7eza7d2r5658za7,
		BGl_rtlzd2siza7ezd2rtl_ins4576za7zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5619z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_rtlza7d2siza7a7eza7d2b5659za7,
		BGl_rtlzd2siza7ezd2block4574za7zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5621z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_dumpza7d2rtl_insza7f5660z00,
		BGl_dumpzd2rtl_inszf2ra4578z20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5623z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_shapeza7d2rtl_regza75661z00,
		BGl_shapezd2rtl_regzf2ra4580z20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5625z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_dumpza7d2rtl_regza7f5662z00,
		BGl_dumpzd2rtl_regzf2ra4583z20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5626z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_objectza7d2za7e3stru5663z00,
		BGl_objectzd2ze3structzd2rtl_r4585ze3zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5628z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_structza7b2objectza75664z00,
		BGl_structzb2objectzd2ze3objec4587z83zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5630z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_objectza7d2za7e3stru5665z00,
		BGl_objectzd2ze3structzd2rtl_i4589ze3zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5631z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_structza7b2objectza75666z00,
		BGl_structzb2objectzd2ze3objec4592z83zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5632z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_objectza7d2za7e3stru5667z00,
		BGl_objectzd2ze3structzd2block4594ze3zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5633z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_structza7b2objectza75668z00,
		BGl_structzb2objectzd2ze3objec4597z83zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5587z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5587za700za7za7s5669za7, " instrs]: too large\n", 20);
	      DEFINE_STRING(BGl_string5588z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5588za700za7za7s5670za7, " [size=", 7);
	      DEFINE_STRING(BGl_string5600z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5600za700za7za7s5671za7, "          graph interference... ",
		32);
	      DEFINE_STRING(BGl_string5590z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5590za700za7za7s5672za7, " instrs]:\n", 10);
	      DEFINE_STRING(BGl_string5589z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5589za700za7za7s5673za7, "        NOT reg. alloc. ", 24);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_rtl_inszf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtl_insza7f2raza7f35674z00,
		BGl__rtl_inszf2razf3z01zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5601z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5601za700za7za7s5675za7, "done\n", 5);
	      DEFINE_STRING(BGl_string5591z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5591za700za7za7s5676za7, "        reg. alloc. ", 20);
	      DEFINE_STRING(BGl_string5602z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5602za700za7za7s5677za7,
		"          removed useless dest. registers... ", 45);
	      DEFINE_STRING(BGl_string5592z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5592za700za7za7s5678za7, "\n", 1);
	      DEFINE_STRING(BGl_string5593z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5593za700za7za7s5679za7, "          number of registers... ",
		33);
	      DEFINE_STRING(BGl_string5594z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5594za700za7za7s5680za7, "          number of parameters... ",
		34);
	      DEFINE_STRING(BGl_string5605z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5605za700za7za7s5681za7, " registers\n", 11);
	      DEFINE_STRING(BGl_string5595z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5595za700za7za7s5682za7,
		"          number of temporaries... ", 35);
	      DEFINE_STRING(BGl_string5606z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5606za700za7za7s5683za7, ")", 1);
	      DEFINE_STRING(BGl_string5607z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5607za700za7za7s5684za7, " (of ", 5);
	      DEFINE_STRING(BGl_string5597z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5597za700za7za7s5685za7, "          liveness..", 20);
	      DEFINE_STRING(BGl_string5608z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5608za700za7za7s5686za7, "          stack coloring... ", 28);
	      DEFINE_STRING(BGl_string5598z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5598za700za7za7s5687za7, ".", 1);
	      DEFINE_STRING(BGl_string5610z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5610za700za7za7s5688za7, " regs, ", 7);
	      DEFINE_STRING(BGl_string5609z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5609za700za7za7s5689za7, " spills", 7);
	      DEFINE_STRING(BGl_string5599z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5599za700za7za7s5690za7, " done\n", 6);
	      DEFINE_STRING(BGl_string5611z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5611za700za7za7s5691za7, " temps -> ", 10);
	      DEFINE_STRING(BGl_string5612z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5612za700za7za7s5692za7, " h-regs, ", 9);
	      DEFINE_STRING(BGl_string5613z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5613za700za7za7s5693za7, "          register coloring... ",
		31);
	      DEFINE_STRING(BGl_string5614z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5614za700za7za7s5694za7, " removed\n", 9);
	      DEFINE_STRING(BGl_string5615z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5615za700za7za7s5695za7, "          move... ", 18);
	      DEFINE_STRING(BGl_string5616z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5616za700za7za7s5696za7, "protect-interference!", 21);
	      DEFINE_STRING(BGl_string5617z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5617za700za7za7s5697za7, "type-interference!", 18);
	      DEFINE_STRING(BGl_string5618z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5618za700za7za7s5698za7, "rtl-size", 8);
	      DEFINE_STRING(BGl_string5622z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5622za700za7za7s5699za7, "dump", 4);
	      DEFINE_STRING(BGl_string5624z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5624za700za7za7s5700za7, "shape", 5);
	      DEFINE_STRING(BGl_string5627z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5627za700za7za7s5701za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5629z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5629za700za7za7s5702za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5634z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5634za700za7za7s5703za7, "=", 1);
	      DEFINE_STRING(BGl_string5635z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5635za700za7za7s5704za7, ":=", 2);
	      DEFINE_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5636za700za7za7s5705za7, "saw_register-allocation", 23);
	      DEFINE_STRING(BGl_string5637z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string5637za700za7za7s5706za7, "rtl_reg/ra rtl_ins/ra block/ra ",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2allocationzd2envz00zzsaw_registerzd2allocationzd2,
		BgL_bgl__registerza7d2allo5707za7,
		BGl__registerzd2allocationzd2zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_blockzf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
		BgL_bgl__blockza7f2raza7d2ni5708z00,
		BGl__blockzf2razd2nilz20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_rtl_inszf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtl_insza7f2raza7d25709z00,
		BGl__rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_inszf2razd2envza0zzsaw_registerzd2allocationzd2,
		BgL_bgl__za752allocateza7d2r5710z00,
		BGl__z52allocatezd2rtl_inszf2raz72zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2rtl_regzf2razd2envza0zzsaw_registerzd2allocationzd2,
		BgL_bgl__za752allocateza7d2r5711z00,
		BGl__z52allocatezd2rtl_regzf2raz72zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_rtlzd2siza7ezd2default4571zd2envz75zzsaw_registerzd2allocationzd2,
		BgL_bgl__rtlza7d2siza7a7eza7d25712za7,
		BGl__rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2rtl_regzf2razd2envzf2zzsaw_registerzd2allocationzd2,
		BgL_bgl__wideningza7d2rtl_5713za7,
		BGl__wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		6);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl__typeza7d2interfer5714za7,
		BGl__typezd2interferencez12zc0zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2rtl_regzf2raz12zd2envze0zzsaw_registerzd2allocationzd2,
		BgL_bgl__fillza7d2rtl_regza75715z00,
		BGl__fillzd2rtl_regzf2raz12z32zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		7);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_collectzd2registerz12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl__collectza7d2regis5716za7,
		BGl__collectzd2registerz12zc0zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long
		BgL_checksumz00_4943, char *BgL_fromz00_4944)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2))
				{
					BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
					BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
					BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_register-allocation");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			{	/* SawMill/regalloc.scm 15 */
				obj_t BgL_cportz00_4895;

				BgL_cportz00_4895 =
					bgl_open_input_string(BGl_string5637z00zzsaw_registerzd2allocationzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_4896;

					BgL_iz00_4896 = ((long) 2);
				BgL_loopz00_4897:
					if ((BgL_iz00_4896 == ((long) -1)))
						{	/* SawMill/regalloc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/regalloc.scm 15 */
							{	/* SawMill/regalloc.scm 15 */
								obj_t BgL_arg5640z00_4899;

								{	/* SawMill/regalloc.scm 15 */

									{	/* SawMill/regalloc.scm 15 */
										obj_t BgL_locationz00_4901;

										BgL_locationz00_4901 = BBOOL(((bool_t) 0));
										{	/* SawMill/regalloc.scm 15 */

											BgL_arg5640z00_4899 =
												BGl_readz00zz__readerz00(BgL_cportz00_4895,
												BgL_locationz00_4901);
										}
									}
								}
								{	/* SawMill/regalloc.scm 15 */
									int BgL_auxz00_4970;

									BgL_auxz00_4970 = (int) (BgL_iz00_4896);
									CNST_TABLE_SET(BgL_auxz00_4970, BgL_arg5640z00_4899);
							}}
							{	/* SawMill/regalloc.scm 15 */
								int BgL_auxz00_4902;

								BgL_auxz00_4902 = (int) ((BgL_iz00_4896 - ((long) 1)));
								{
									long BgL_iz00_4975;

									BgL_iz00_4975 = (long) (BgL_auxz00_4902);
									BgL_iz00_4896 = BgL_iz00_4975;
									goto BgL_loopz00_4897;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2 = ((long) -1);
			return BUNSPEC;
		}
	}



/* register-allocation */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_1, BgL_globalz00_bglt BgL_globalz00_2,
		obj_t BgL_paramsz00_3, obj_t BgL_blocksz00_4)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 59 */
			{	/* SawMill/regalloc.scm 60 */
				obj_t BgL_idz00_1347;

				{
					BgL_variablez00_bglt BgL_auxz00_4977;

					BgL_auxz00_4977 = (BgL_variablez00_bglt) (BgL_globalz00_2);
					BgL_idz00_1347 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_4977))->BgL_idz00);
				}
				{	/* SawMill/regalloc.scm 60 */
					obj_t BgL_pz00_1348;

					{	/* SawMill/regalloc.scm 61 */
						obj_t BgL__andtest_4280z00_1360;

						BgL__andtest_4280z00_1360 =
							BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00;
						if (CBOOL(BgL__andtest_4280z00_1360))
							{	/* SawMill/regalloc.scm 62 */
								bool_t BgL_testz00_4982;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_idz00_1347,
											BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00)))
									{	/* SawMill/regalloc.scm 62 */
										BgL_testz00_4982 = ((bool_t) 0);
									}
								else
									{	/* SawMill/regalloc.scm 62 */
										BgL_testz00_4982 = ((bool_t) 1);
									}
								if (BgL_testz00_4982)
									{	/* SawMill/regalloc.scm 62 */
										if (PAIRP
											(BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00))
											{	/* SawMill/regalloc.scm 63 */
												BgL_pz00_1348 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_idz00_1347,
													BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00);
											}
										else
											{	/* SawMill/regalloc.scm 65 */
												bool_t BgL__ortest_4282z00_1363;

												BgL__ortest_4282z00_1363 =
													(
													(long)
													CINT
													(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00)
													< ((long) 0));
												if (BgL__ortest_4282z00_1363)
													{	/* SawMill/regalloc.scm 65 */
														BgL_pz00_1348 = BBOOL(BgL__ortest_4282z00_1363);
													}
												else
													{	/* SawMill/regalloc.scm 66 */
														obj_t BgL_arg4611z00_1364;

														BgL_arg4611z00_1364 =
															BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
															(BgL_blocksz00_4);
														{	/* SawMill/regalloc.scm 66 */
															long BgL_n1z00_3383;

															long BgL_n2z00_3384;

															BgL_n1z00_3383 = (long) CINT(BgL_arg4611z00_1364);
															BgL_n2z00_3384 =
																(long)
																CINT
																(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00);
															BgL_pz00_1348 =
																BBOOL((BgL_n1z00_3383 < BgL_n2z00_3384));
									}}}}
								else
									{	/* SawMill/regalloc.scm 62 */
										BgL_pz00_1348 = BFALSE;
									}
							}
						else
							{	/* SawMill/regalloc.scm 61 */
								BgL_pz00_1348 = BFALSE;
							}
					}
					{	/* SawMill/regalloc.scm 61 */

						if (CBOOL(BgL_pz00_1348))
							{	/* SawMill/regalloc.scm 68 */
								BBOOL
									(BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
									(BgL_backz00_1, BgL_globalz00_2, BgL_paramsz00_3,
										BgL_blocksz00_4));
							}
						else
							{	/* SawMill/regalloc.scm 70 */
								obj_t BgL_arg4601z00_1351;

								obj_t BgL_arg4603z00_1353;

								BgL_arg4601z00_1351 =
									BGl_shapez00zztools_shapez00((obj_t) (BgL_globalz00_2));
								BgL_arg4603z00_1353 =
									BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
									(BgL_blocksz00_4);
								{	/* SawMill/regalloc.scm 70 */
									obj_t BgL_list4605z00_1355;

									{	/* SawMill/regalloc.scm 70 */
										obj_t BgL_arg4606z00_1356;

										{	/* SawMill/regalloc.scm 70 */
											obj_t BgL_arg4607z00_1357;

											{	/* SawMill/regalloc.scm 70 */
												obj_t BgL_arg4608z00_1358;

												{	/* SawMill/regalloc.scm 70 */
													obj_t BgL_arg4609z00_1359;

													BgL_arg4609z00_1359 =
														MAKE_PAIR
														(BGl_string5587z00zzsaw_registerzd2allocationzd2,
														BNIL);
													BgL_arg4608z00_1358 =
														MAKE_PAIR(BgL_arg4603z00_1353, BgL_arg4609z00_1359);
												}
												BgL_arg4607z00_1357 =
													MAKE_PAIR
													(BGl_string5588z00zzsaw_registerzd2allocationzd2,
													BgL_arg4608z00_1358);
											}
											BgL_arg4606z00_1356 =
												MAKE_PAIR(BgL_arg4601z00_1351, BgL_arg4607z00_1357);
										}
										BgL_list4605z00_1355 =
											MAKE_PAIR(BGl_string5589z00zzsaw_registerzd2allocationzd2,
											BgL_arg4606z00_1356);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list4605z00_1355);
							}}
						return BgL_blocksz00_4;
					}
				}
			}
		}
	}



/* _register-allocation */
	obj_t BGl__registerzd2allocationzd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4697, obj_t BgL_backz00_4698, obj_t BgL_globalz00_4699,
		obj_t BgL_paramsz00_4700, obj_t BgL_blocksz00_4701)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 59 */
			return
				BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2(
				(BgL_backendz00_bglt) (BgL_backz00_4698),
				(BgL_globalz00_bglt) (BgL_globalz00_4699), BgL_paramsz00_4700,
				BgL_blocksz00_4701);
		}
	}



/* %register-allocation */
	bool_t
		BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_5, BgL_globalz00_bglt BgL_globalz00_6,
		obj_t BgL_paramsz00_7, obj_t BgL_blocksz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 78 */
			{	/* SawMill/regalloc.scm 79 */
				obj_t BgL_arg4615z00_1368;

				obj_t BgL_arg4617z00_1370;

				BgL_arg4615z00_1368 =
					BGl_shapez00zztools_shapez00((obj_t) (BgL_globalz00_6));
				BgL_arg4617z00_1370 =
					BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(BgL_blocksz00_8);
				{	/* SawMill/regalloc.scm 79 */
					obj_t BgL_list4619z00_1372;

					{	/* SawMill/regalloc.scm 79 */
						obj_t BgL_arg4620z00_1373;

						{	/* SawMill/regalloc.scm 79 */
							obj_t BgL_arg4621z00_1374;

							{	/* SawMill/regalloc.scm 79 */
								obj_t BgL_arg4622z00_1375;

								{	/* SawMill/regalloc.scm 79 */
									obj_t BgL_arg4623z00_1376;

									BgL_arg4623z00_1376 =
										MAKE_PAIR(BGl_string5590z00zzsaw_registerzd2allocationzd2,
										BNIL);
									BgL_arg4622z00_1375 =
										MAKE_PAIR(BgL_arg4617z00_1370, BgL_arg4623z00_1376);
								}
								BgL_arg4621z00_1374 =
									MAKE_PAIR(BGl_string5588z00zzsaw_registerzd2allocationzd2,
									BgL_arg4622z00_1375);
							}
							BgL_arg4620z00_1373 =
								MAKE_PAIR(BgL_arg4615z00_1368, BgL_arg4621z00_1374);
						}
						BgL_list4619z00_1372 =
							MAKE_PAIR(BGl_string5591z00zzsaw_registerzd2allocationzd2,
							BgL_arg4620z00_1373);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list4619z00_1372);
			}}
			BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2
				(BgL_blocksz00_8);
			BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2 = ((long) -1);
			{	/* SawMill/regalloc.scm 85 */
				obj_t BgL_cregsz00_1377;

				BgL_cregsz00_1377 =
					BGl_collectzd2registersz12zc0zzsaw_registerzd2allocationzd2
					(BgL_blocksz00_8);
				{	/* SawMill/regalloc.scm 85 */
					obj_t BgL_hregsz00_1378;

					{	/* SawMill/regalloc.scm 86 */
						obj_t BgL_arg4657z00_1424;

						BgL_arg4657z00_1424 =
							(((BgL_backendz00_bglt) CREF(BgL_backz00_5))->BgL_registersz00);
						{	/* SawMill/regalloc.scm 86 */
							obj_t BgL_list4658z00_1425;

							BgL_list4658z00_1425 = MAKE_PAIR(BgL_arg4657z00_1424, BNIL);
							BgL_hregsz00_1378 =
								BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
								(BGl_collectzd2registerz12zd2envz12zzsaw_registerzd2allocationzd2,
								BgL_list4658z00_1425);
					}}
					{	/* SawMill/regalloc.scm 86 */
						obj_t BgL_pregsz00_1379;

						BgL_pregsz00_1379 =
							BGl_filterz00zz__r4_control_features_6_9z00
							(BGl_rtl_regzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
							BgL_paramsz00_7);
						{	/* SawMill/regalloc.scm 87 */
							obj_t BgL_regsz00_1380;

							BgL_regsz00_1380 =
								bgl_append2(BgL_hregsz00_1378, BgL_cregsz00_1377);
							{	/* SawMill/regalloc.scm 88 */

								if (PAIRP(BgL_cregsz00_1377))
									{	/* SawMill/regalloc.scm 89 */
										{
											obj_t BgL_l4385z00_1383;

											BgL_l4385z00_1383 = BgL_regsz00_1380;
										BgL_zc3anonymousza34625ze3z83_1384:
											if (PAIRP(BgL_l4385z00_1383))
												{	/* SawMill/regalloc.scm 91 */
													{	/* SawMill/regalloc.scm 92 */
														obj_t BgL_rz00_1386;

														BgL_rz00_1386 = CAR(BgL_l4385z00_1383);
														{	/* SawMill/regalloc.scm 93 */
															BgL_regsetz00_bglt BgL_arg4627z00_1388;

															BgL_arg4627z00_1388 =
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_1380);
															{	/* SawMill/regalloc.scm 93 */
																BgL_rtl_regzf2razf2_bglt BgL_obj4259z00_3389;

																obj_t BgL_val4258z00_3390;

																BgL_obj4259z00_3389 =
																	(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1386);
																BgL_val4258z00_3390 =
																	(obj_t) (BgL_arg4627z00_1388);
																{
																	obj_t BgL_auxz00_5040;

																	{	/* SawMill/regalloc.scm 93 */
																		BgL_objectz00_bglt BgL_auxz00_5041;

																		BgL_auxz00_5041 =
																			(BgL_objectz00_bglt)
																			(BgL_obj4259z00_3389);
																		BgL_auxz00_5040 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_5041);
																	}
																	((((BgL_rtl_regzf2razf2_bglt)
																				CREF(BgL_auxz00_5040))->
																			BgL_interferez00) =
																		((obj_t) BgL_val4258z00_3390), BUNSPEC);
																}
															}
														}
													}
													{
														obj_t BgL_l4385z00_5045;

														BgL_l4385z00_5045 = CDR(BgL_l4385z00_1383);
														BgL_l4385z00_1383 = BgL_l4385z00_5045;
														goto BgL_zc3anonymousza34625ze3z83_1384;
													}
												}
											else
												{	/* SawMill/regalloc.scm 91 */
													((bool_t) 1);
												}
										}
										{	/* SawMill/regalloc.scm 95 */
											long BgL_arg4631z00_1393;

											BgL_arg4631z00_1393 = bgl_list_length(BgL_hregsz00_1378);
											{	/* SawMill/regalloc.scm 95 */
												obj_t BgL_list4633z00_1395;

												{	/* SawMill/regalloc.scm 95 */
													obj_t BgL_arg4634z00_1396;

													{	/* SawMill/regalloc.scm 95 */
														obj_t BgL_arg4635z00_1397;

														BgL_arg4635z00_1397 =
															MAKE_PAIR
															(BGl_string5592z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg4634z00_1396 =
															MAKE_PAIR(BINT(BgL_arg4631z00_1393),
															BgL_arg4635z00_1397);
													}
													BgL_list4633z00_1395 =
														MAKE_PAIR
														(BGl_string5593z00zzsaw_registerzd2allocationzd2,
														BgL_arg4634z00_1396);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list4633z00_1395);
										}}
										{	/* SawMill/regalloc.scm 96 */
											long BgL_arg4638z00_1400;

											BgL_arg4638z00_1400 = bgl_list_length(BgL_pregsz00_1379);
											{	/* SawMill/regalloc.scm 96 */
												obj_t BgL_list4640z00_1402;

												{	/* SawMill/regalloc.scm 96 */
													obj_t BgL_arg4641z00_1403;

													{	/* SawMill/regalloc.scm 96 */
														obj_t BgL_arg4642z00_1404;

														BgL_arg4642z00_1404 =
															MAKE_PAIR
															(BGl_string5592z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg4641z00_1403 =
															MAKE_PAIR(BINT(BgL_arg4638z00_1400),
															BgL_arg4642z00_1404);
													}
													BgL_list4640z00_1402 =
														MAKE_PAIR
														(BGl_string5594z00zzsaw_registerzd2allocationzd2,
														BgL_arg4641z00_1403);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list4640z00_1402);
										}}
										{	/* SawMill/regalloc.scm 97 */
											long BgL_arg4645z00_1407;

											BgL_arg4645z00_1407 = bgl_list_length(BgL_cregsz00_1377);
											{	/* SawMill/regalloc.scm 97 */
												obj_t BgL_list4647z00_1409;

												{	/* SawMill/regalloc.scm 97 */
													obj_t BgL_arg4648z00_1410;

													{	/* SawMill/regalloc.scm 97 */
														obj_t BgL_arg4649z00_1411;

														BgL_arg4649z00_1411 =
															MAKE_PAIR
															(BGl_string5592z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg4648z00_1410 =
															MAKE_PAIR(BINT(BgL_arg4645z00_1407),
															BgL_arg4649z00_1411);
													}
													BgL_list4647z00_1409 =
														MAKE_PAIR
														(BGl_string5595z00zzsaw_registerzd2allocationzd2,
														BgL_arg4648z00_1410);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list4647z00_1409);
										}}
										BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_8, BgL_regsz00_1380);
										BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_8, BgL_regsz00_1380);
										BGl_livenessz12z12zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_8, BgL_pregsz00_1379);
										BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_hregsz00_1378);
										BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_backz00_5, BgL_pregsz00_1379);
										BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
											(BgL_backz00_5, BgL_blocksz00_8);
										{	/* SawMill/regalloc.scm 111 */
											obj_t BgL_regsz00_3393;

											BgL_regsz00_3393 = BgL_regsz00_1380;
											{	/* SawMill/regalloc.scm 111 */
												obj_t BgL_method4570z00_3394;

												{	/* SawMill/regalloc.scm 111 */
													BgL_objectz00_bglt BgL_objz00_3395;

													BgL_objz00_3395 =
														(BgL_objectz00_bglt) (BgL_backz00_5);
													{	/* SawMill/regalloc.scm 111 */
														long BgL_objzd2classzd2numz00_3396;

														BgL_objzd2classzd2numz00_3396 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3395);
														{	/* SawMill/regalloc.scm 111 */
															obj_t BgL_arg2643z00_3397;

															BgL_arg2643z00_3397 =
																PROCEDURE_REF
																(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
																(int) (((long) 1)));
															{	/* SawMill/regalloc.scm 111 */
																obj_t BgL_arrayz00_3399;

																int BgL_offsetz00_3400;

																BgL_arrayz00_3399 = BgL_arg2643z00_3397;
																BgL_offsetz00_3400 =
																	(int) (BgL_objzd2classzd2numz00_3396);
																{	/* SawMill/regalloc.scm 111 */
																	long BgL_offsetz00_3401;

																	BgL_offsetz00_3401 =
																		((long) (BgL_offsetz00_3400) - OBJECT_TYPE);
																	{	/* SawMill/regalloc.scm 111 */
																		long BgL_modz00_3402;

																		{	/* SawMill/regalloc.scm 111 */
																			int BgL_arg2645z00_3403;

																			BgL_arg2645z00_3403 = (int) (((long) 16));
																			{	/* SawMill/regalloc.scm 111 */
																				long BgL_auxz00_5082;

																				BgL_auxz00_5082 =
																					(long) (BgL_arg2645z00_3403);
																				BgL_modz00_3402 =
																					(BgL_offsetz00_3401 /
																					BgL_auxz00_5082);
																		}}
																		{	/* SawMill/regalloc.scm 111 */
																			long BgL_restz00_3404;

																			{	/* SawMill/regalloc.scm 111 */
																				int BgL_arg2644z00_3405;

																				BgL_arg2644z00_3405 =
																					(int) (((long) 16));
																				{	/* SawMill/regalloc.scm 111 */
																					long BgL_auxz00_5086;

																					BgL_auxz00_5086 =
																						(long) (BgL_arg2644z00_3405);
																					BgL_restz00_3404 =
																						(BgL_offsetz00_3401 %
																						BgL_auxz00_5086);
																			}}
																			{	/* SawMill/regalloc.scm 111 */

																				BgL_method4570z00_3394 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3399,
																						(int) (BgL_modz00_3402)),
																					(int) (BgL_restz00_3404));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method4570z00_3394)
													(BgL_method4570z00_3394, (obj_t) (BgL_backz00_5),
													BgL_regsz00_3393, BEOA);
										}}
										BGl_interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_8, BgL_regsz00_1380);
										BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_8);
										BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2
											(BgL_pregsz00_1379, BgL_hregsz00_1378, BgL_cregsz00_1377);
										BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2
											(BgL_hregsz00_1378, BgL_blocksz00_8);
										BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2
											(BgL_pregsz00_1379, BgL_cregsz00_1377, BgL_blocksz00_8);
										if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >
												((long) 1)))
											{	/* SawMill/regalloc.scm 125 */
												BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2
													(BgL_blocksz00_8);
											}
										else
											{	/* SawMill/regalloc.scm 125 */
												BFALSE;
											}
									}
								else
									{	/* SawMill/regalloc.scm 89 */
										BFALSE;
									}
								{
									obj_t BgL_l4387z00_1414;

									BgL_l4387z00_1414 = BgL_hregsz00_1378;
								BgL_zc3anonymousza34651ze3z83_1415:
									if (PAIRP(BgL_l4387z00_1414))
										{	/* SawMill/regalloc.scm 130 */
											{	/* SawMill/regalloc.scm 130 */
												obj_t BgL_rz00_1417;

												BgL_rz00_1417 = CAR(BgL_l4387z00_1414);
												{	/* SawMill/regalloc.scm 130 */
													long BgL_arg4653z00_1419;

													{	/* SawMill/regalloc.scm 130 */
														obj_t BgL_arg4654z00_1420;

														{	/* SawMill/regalloc.scm 130 */
															obj_t BgL_arg4655z00_1421;

															{	/* SawMill/regalloc.scm 130 */
																BgL_objectz00_bglt BgL_objectz00_3423;

																BgL_objectz00_3423 =
																	(BgL_objectz00_bglt) (BgL_rz00_1417);
																{	/* SawMill/regalloc.scm 130 */
																	long BgL_arg2646z00_3424;

																	{	/* SawMill/regalloc.scm 130 */
																		long BgL_arg2647z00_3425;

																		BgL_arg2647z00_3425 =
																			BGL_OBJECT_CLASS_NUM(BgL_objectz00_3423);
																		BgL_arg2646z00_3424 =
																			(BgL_arg2647z00_3425 - OBJECT_TYPE);
																	}
																	BgL_arg4655z00_1421 =
																		VECTOR_REF
																		(BGl_za2classesza2z00zz__objectz00,
																		(int) (BgL_arg2646z00_3424));
															}}
															BgL_arg4654z00_1420 =
																BGl_classzd2superzd2zz__objectz00
																(BgL_arg4655z00_1421);
														}
														BgL_arg4653z00_1419 =
															BGl_classzd2numzd2zz__objectz00
															(BgL_arg4654z00_1420);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_rz00_1417),
														BgL_arg4653z00_1419);
												}
												{	/* SawMill/regalloc.scm 130 */
													BgL_objectz00_bglt BgL_auxz00_5117;

													BgL_auxz00_5117 =
														(BgL_objectz00_bglt) (BgL_rz00_1417);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_5117, BFALSE);
												} BgL_rz00_1417;
											}
											{
												obj_t BgL_l4387z00_5120;

												BgL_l4387z00_5120 = CDR(BgL_l4387z00_1414);
												BgL_l4387z00_1414 = BgL_l4387z00_5120;
												goto BgL_zc3anonymousza34651ze3z83_1415;
											}
										}
									else
										{	/* SawMill/regalloc.scm 130 */
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



/* collect-register! */
	obj_t
		BGl_collectzd2registerz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regz00_bglt BgL_oz00_9)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 135 */
			{	/* SawMill/regalloc.scm 136 */
				bool_t BgL_testz00_5122;

				{	/* SawMill/regalloc.scm 136 */
					bool_t BgL_testz00_5123;

					{	/* SawMill/regalloc.scm 136 */
						obj_t BgL_obj4246z00_3434;

						BgL_obj4246z00_3434 = (obj_t) (BgL_oz00_9);
						BgL_testz00_5123 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_3434,
							BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
					}
					if (BgL_testz00_5123)
						{	/* SawMill/regalloc.scm 136 */
							BgL_testz00_5122 = ((bool_t) 1);
						}
					else
						{	/* SawMill/regalloc.scm 136 */
							BgL_testz00_5122 =
								CBOOL(
								(((BgL_rtl_regz00_bglt) CREF(BgL_oz00_9))->BgL_onexprzf3zf3));
						}
				}
				if (BgL_testz00_5122)
					{	/* SawMill/regalloc.scm 136 */
						return BNIL;
					}
				else
					{	/* SawMill/regalloc.scm 136 */
						BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2 =
							(((long) 1) +
							BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2);
						{	/* SawMill/regalloc.scm 140 */
							BgL_rtl_regz00_bglt BgL_arg4660z00_1427;

							{	/* SawMill/regalloc.scm 140 */
								BgL_rtl_regz00_bglt BgL_obj4286z00_1429;

								BgL_obj4286z00_1429 = ((BgL_rtl_regz00_bglt) BgL_oz00_9);
								{	/* SawMill/regalloc.scm 140 */
									BgL_rtl_regzf2razf2_bglt BgL_arg4662z00_1430;

									{	/* SawMill/regalloc.scm 140 */
										BgL_rtl_regzf2razf2_bglt BgL_res5523z00_3459;

										{	/* SawMill/regalloc.scm 140 */
											int BgL_num4201z00_3438;

											int BgL_occurrences4204z00_3441;

											BgL_num4201z00_3438 =
												(int)
												(BGl_za2registerzd2countza2zd2zzsaw_registerzd2allocationzd2);
											BgL_occurrences4204z00_3441 = (int) (((long) 0));
											{	/* SawMill/regalloc.scm 140 */
												BgL_rtl_regzf2razf2_bglt BgL_new4207z00_3444;

												BgL_new4207z00_3444 =
													((BgL_rtl_regzf2razf2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_rtl_regzf2razf2_bgl))));
												{	/* SawMill/regalloc.scm 140 */
													BgL_rtl_regzf2razf2_bglt BgL_res5522z00_3458;

													{	/* SawMill/regalloc.scm 140 */
														BgL_rtl_regzf2razf2_bglt BgL_new4229z00_3445;

														BgL_new4229z00_3445 = BgL_new4207z00_3444;
														{	/* SawMill/regalloc.scm 140 */
															int BgL_num4223z00_3452;

															obj_t BgL_color4224z00_3453;

															obj_t BgL_coalesce4225z00_3454;

															int BgL_occurrences4226z00_3455;

															obj_t BgL_interfere4227z00_3456;

															obj_t BgL_interfere24228z00_3457;

															BgL_num4223z00_3452 = BgL_num4201z00_3438;
															BgL_color4224z00_3453 = BFALSE;
															BgL_coalesce4225z00_3454 = BFALSE;
															BgL_occurrences4226z00_3455 =
																BgL_occurrences4204z00_3441;
															BgL_interfere4227z00_3456 = BUNSPEC;
															BgL_interfere24228z00_3457 = BUNSPEC;
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->BgL_numz00) =
																((int) BgL_num4223z00_3452), BUNSPEC);
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->BgL_colorz00) =
																((obj_t) BgL_color4224z00_3453), BUNSPEC);
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->
																	BgL_coalescez00) =
																((obj_t) BgL_coalesce4225z00_3454), BUNSPEC);
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->
																	BgL_occurrencesz00) =
																((int) BgL_occurrences4226z00_3455), BUNSPEC);
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->
																	BgL_interferez00) =
																((obj_t) BgL_interfere4227z00_3456), BUNSPEC);
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_new4229z00_3445))->
																	BgL_interfere2z00) =
																((obj_t) BgL_interfere24228z00_3457), BUNSPEC);
															BgL_res5522z00_3458 = BgL_new4229z00_3445;
													}} BgL_res5522z00_3458;
												}
												BgL_res5523z00_3459 = BgL_new4207z00_3444;
										}}
										BgL_arg4662z00_1430 = BgL_res5523z00_3459;
									}
									{	/* SawMill/regalloc.scm 140 */
										obj_t BgL_auxz00_5141;

										BgL_objectz00_bglt BgL_auxz00_5139;

										BgL_auxz00_5141 = (obj_t) (BgL_arg4662z00_1430);
										BgL_auxz00_5139 =
											(BgL_objectz00_bglt) (BgL_obj4286z00_1429);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5139, BgL_auxz00_5141);
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj4286z00_1429),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
								BgL_arg4660z00_1427 = BgL_obj4286z00_1429;
							}
							{	/* SawMill/regalloc.scm 140 */
								obj_t BgL_list4661z00_1428;

								BgL_list4661z00_1428 =
									MAKE_PAIR((obj_t) (BgL_arg4660z00_1427), BNIL);
								return BgL_list4661z00_1428;
							}
						}
					}
			}
		}
	}



/* _collect-register! */
	obj_t BGl__collectzd2registerz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4702, obj_t BgL_oz00_4703)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 135 */
			return
				BGl_collectzd2registerz12zc0zzsaw_registerzd2allocationzd2(
				(BgL_rtl_regz00_bglt) (BgL_oz00_4703));
		}
	}



/* collect-registers! */
	obj_t BGl_collectzd2registersz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_oz00_10)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 152 */
			{	/* SawMill/regalloc.scm 155 */
				obj_t BgL_blockzd2collectzd2registersz12z12_4711;

				obj_t BgL_inszd2collectzd2registersz12z12_4710;

				BgL_blockzd2collectzd2registersz12z12_4711 =
					make_fx_procedure
					(BGl_blockzd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2,
					(int) (((long) 1)), (int) (((long) 2)));
				BgL_inszd2collectzd2registersz12z12_4710 =
					make_fx_procedure
					(BGl_inszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_blockzd2collectzd2registersz12z12_4711,
					(int) (((long) 0)), BGl_proc5596z00zzsaw_registerzd2allocationzd2);
				PROCEDURE_SET(BgL_blockzd2collectzd2registersz12z12_4711,
					(int) (((long) 1)), BgL_inszd2collectzd2registersz12z12_4710);
				PROCEDURE_SET(BgL_inszd2collectzd2registersz12z12_4710,
					(int) (((long) 0)), BGl_proc5596z00zzsaw_registerzd2allocationzd2);
				{	/* SawMill/regalloc.scm 168 */
					obj_t BgL_list4665z00_1436;

					BgL_list4665z00_1436 = MAKE_PAIR(BgL_oz00_10, BNIL);
					return
						BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
						(BgL_blockzd2collectzd2registersz12z12_4711, BgL_list4665z00_1436);
				}
			}
		}
	}



/* block-collect-registers! */
	obj_t
		BGl_blockzd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4712, obj_t BgL_oz00_4715)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 167 */
			{	/* SawMill/regalloc.scm 167 */
				obj_t BgL_inszd2collectzd2registersz12z12_4714;

				BgL_inszd2collectzd2registersz12z12_4714 =
					PROCEDURE_REF(BgL_envz00_4712, (int) (((long) 1)));
				{
					obj_t BgL_oz00_1452;

					BgL_oz00_1452 = BgL_oz00_4715;
					{	/* SawMill/regalloc.scm 167 */
						obj_t BgL_arg4678z00_1454;

						{
							BgL_blockz00_bglt BgL_auxz00_5167;

							BgL_auxz00_5167 = (BgL_blockz00_bglt) (BgL_oz00_1452);
							BgL_arg4678z00_1454 =
								(((BgL_blockz00_bglt) CREF(BgL_auxz00_5167))->BgL_firstz00);
						}
						{	/* SawMill/regalloc.scm 167 */
							obj_t BgL_list4679z00_1455;

							BgL_list4679z00_1455 = MAKE_PAIR(BgL_arg4678z00_1454, BNIL);
							return
								BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
								(BgL_inszd2collectzd2registersz12z12_4714,
								BgL_list4679z00_1455);
						}
					}
				}
			}
		}
	}



/* ins-collect-registers! */
	obj_t BGl_inszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4716, obj_t BgL_oz00_4718)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 165 */
			{	/* SawMill/regalloc.scm 163 */
				obj_t BgL_argszd2collectzd2registersz12z12_4717;

				BgL_argszd2collectzd2registersz12z12_4717 =
					PROCEDURE_REF(BgL_envz00_4716, (int) (((long) 0)));
				{
					obj_t BgL_oz00_1444;

					BgL_oz00_1444 = BgL_oz00_4718;
					{	/* SawMill/regalloc.scm 164 */
						obj_t BgL_arg4672z00_1447;

						obj_t BgL_arg4673z00_1448;

						{	/* SawMill/regalloc.scm 164 */
							obj_t BgL_arg4674z00_1449;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_5174;

								BgL_auxz00_5174 = (BgL_rtl_insz00_bglt) (BgL_oz00_1444);
								BgL_arg4674z00_1449 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5174))->BgL_destz00);
							}
							BgL_arg4672z00_1447 =
								BGl_argszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2
								(BgL_argszd2collectzd2registersz12z12_4717,
								BgL_arg4674z00_1449);
						}
						{	/* SawMill/regalloc.scm 165 */
							obj_t BgL_arg4675z00_1450;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_5178;

								BgL_auxz00_5178 = (BgL_rtl_insz00_bglt) (BgL_oz00_1444);
								BgL_arg4675z00_1450 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5178))->BgL_argsz00);
							}
							{	/* SawMill/regalloc.scm 165 */
								obj_t BgL_list4676z00_1451;

								BgL_list4676z00_1451 = MAKE_PAIR(BgL_arg4675z00_1450, BNIL);
								BgL_arg4673z00_1448 =
									BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
									(BgL_argszd2collectzd2registersz12z12_4717,
									BgL_list4676z00_1451);
						}}
						return
							BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
							(BgL_arg4672z00_1447, BgL_arg4673z00_1448);
					}
				}
			}
		}
	}



/* args-collect-registers! */
	obj_t BGl_argszd2collectzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4719, obj_t BgL_oz00_4720)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 161 */
			{
				obj_t BgL_oz00_1437;

				BgL_oz00_1437 = BgL_oz00_4720;
				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_1437,
						BGl_rtl_regz00zzsaw_defsz00))
					{	/* SawMill/regalloc.scm 155 */
						return
							BGl_collectzd2registerz12zc0zzsaw_registerzd2allocationzd2(
							(BgL_rtl_regz00_bglt) (BgL_oz00_1437));
					}
				else
					{	/* SawMill/regalloc.scm 155 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_1437,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/regalloc.scm 158 */
								BgL_rtl_insz00_bglt BgL_instance4287z00_1441;

								BgL_instance4287z00_1441 =
									(BgL_rtl_insz00_bglt) (BgL_oz00_1437);
								{	/* SawMill/regalloc.scm 159 */
									obj_t BgL_arg4669z00_1442;

									BgL_arg4669z00_1442 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_instance4287z00_1441))->
										BgL_argsz00);
									{	/* SawMill/regalloc.scm 159 */
										obj_t BgL_list4670z00_1443;

										BgL_list4670z00_1443 = MAKE_PAIR(BgL_arg4669z00_1442, BNIL);
										return
											BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
											(BgL_envz00_4719, BgL_list4670z00_1443);
									}
								}
							}
						else
							{	/* SawMill/regalloc.scm 157 */
								return BNIL;
							}
					}
			}
		}
	}



/* widen-ra! */
	bool_t BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2(obj_t BgL_oz00_11,
		obj_t BgL_regsz00_12)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 176 */
			{
				obj_t BgL_oz00_1511;

				obj_t BgL_oz00_1555;

				{
					obj_t BgL_l4410z00_1464;

					BgL_l4410z00_1464 = BgL_oz00_11;
				BgL_zc3anonymousza34680ze3z83_1465:
					if (PAIRP(BgL_l4410z00_1464))
						{	/* SawMill/regalloc.scm 204 */
							BgL_oz00_1555 = CAR(BgL_l4410z00_1464);
							{	/* SawMill/regalloc.scm 200 */
								obj_t BgL_trsifz00_1558;

								{	/* SawMill/regalloc.scm 200 */
									obj_t BgL_auxz00_5196;

									{
										BgL_blockz00_bglt BgL_auxz00_5197;

										BgL_auxz00_5197 = (BgL_blockz00_bglt) (BgL_oz00_1555);
										BgL_auxz00_5196 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_5197))->
											BgL_firstz00);
									}
									BgL_trsifz00_1558 = bgl_reverse(BgL_auxz00_5196);
								}
								{	/* SawMill/regalloc.scm 201 */
									obj_t BgL_g4409z00_1559;

									{
										BgL_blockz00_bglt BgL_auxz00_5201;

										BgL_auxz00_5201 = (BgL_blockz00_bglt) (BgL_oz00_1555);
										BgL_g4409z00_1559 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_5201))->
											BgL_firstz00);
									}
									{
										obj_t BgL_l4407z00_1561;

										BgL_l4407z00_1561 = BgL_g4409z00_1559;
									BgL_zc3anonymousza34742ze3z83_1562:
										if (PAIRP(BgL_l4407z00_1561))
											{	/* SawMill/regalloc.scm 201 */
												BgL_oz00_1511 = CAR(BgL_l4407z00_1561);
												{	/* SawMill/regalloc.scm 190 */
													BgL_rtl_insz00_bglt BgL_obj4296z00_1514;

													BgL_obj4296z00_1514 =
														((BgL_rtl_insz00_bglt)
														(BgL_rtl_insz00_bglt) (BgL_oz00_1511));
													{	/* SawMill/regalloc.scm 191 */
														BgL_rtl_inszf2razf2_bglt BgL_arg4712z00_1515;

														{	/* SawMill/regalloc.scm 191 */
															BgL_regsetz00_bglt BgL_arg4713z00_1516;

															BgL_regsetz00_bglt BgL_arg4714z00_1517;

															BgL_regsetz00_bglt BgL_arg4715z00_1518;

															BgL_regsetz00_bglt BgL_arg4716z00_1519;

															{	/* SawMill/regalloc.scm 191 */
																bool_t BgL_testz00_5208;

																{	/* SawMill/regalloc.scm 191 */
																	bool_t BgL_testz00_5209;

																	{	/* SawMill/regalloc.scm 191 */
																		BgL_rtl_insz00_bglt BgL_obj4012z00_3511;

																		BgL_obj4012z00_3511 =
																			(BgL_rtl_insz00_bglt) (BgL_oz00_1511);
																		BgL_testz00_5209 =
																			CBOOL(
																			(((BgL_rtl_insz00_bglt)
																					CREF(BgL_obj4012z00_3511))->
																				BgL_destz00));
																	}
																	if (BgL_testz00_5209)
																		{	/* SawMill/regalloc.scm 191 */
																			BgL_rtl_regz00_bglt BgL_obj3352z00_3513;

																			{	/* SawMill/regalloc.scm 191 */
																				BgL_rtl_insz00_bglt BgL_obj4012z00_3512;

																				BgL_obj4012z00_3512 =
																					(BgL_rtl_insz00_bglt) (BgL_oz00_1511);
																				BgL_obj3352z00_3513 =
																					(BgL_rtl_regz00_bglt) (
																					(((BgL_rtl_insz00_bglt)
																							CREF(BgL_obj4012z00_3512))->
																						BgL_destz00));
																			}
																			BgL_testz00_5208 =
																				CBOOL(
																				(((BgL_rtl_regz00_bglt)
																						CREF(BgL_obj3352z00_3513))->
																					BgL_onexprzf3zf3));
																		}
																	else
																		{	/* SawMill/regalloc.scm 191 */
																			BgL_testz00_5208 = ((bool_t) 1);
																		}
																}
																if (BgL_testz00_5208)
																	{	/* SawMill/regalloc.scm 191 */
																		BgL_arg4713z00_1516 =
																			BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																			(BgL_regsz00_12);
																	}
																else
																	{	/* SawMill/regalloc.scm 193 */
																		obj_t BgL_arg4718z00_1521;

																		{	/* SawMill/regalloc.scm 193 */
																			BgL_rtl_regzf2razf2_bglt
																				BgL_arg4719z00_1522;
																			{	/* SawMill/regalloc.scm 193 */
																				obj_t BgL_arg4721z00_1524;

																				{
																					BgL_rtl_insz00_bglt BgL_auxz00_5219;

																					BgL_auxz00_5219 =
																						(BgL_rtl_insz00_bglt)
																						(BgL_oz00_1511);
																					BgL_arg4721z00_1524 =
																						(((BgL_rtl_insz00_bglt)
																							CREF(BgL_auxz00_5219))->
																						BgL_destz00);
																				}
																				BgL_arg4719z00_1522 =
																					BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																					((BgL_rtl_regzf2razf2_bglt)
																					(BgL_arg4721z00_1524));
																			}
																			{	/* SawMill/regalloc.scm 193 */
																				obj_t BgL_list4720z00_1523;

																				BgL_list4720z00_1523 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4719z00_1522), BNIL);
																				BgL_arg4718z00_1521 =
																					BgL_list4720z00_1523;
																			}
																		}
																		BgL_arg4713z00_1516 =
																			BGl_listzd2ze3regsetz31zzsaw_regsetz00
																			(BgL_arg4718z00_1521, BgL_regsz00_12);
																	}
															}
															BgL_arg4714z00_1517 =
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_12);
															{	/* SawMill/regalloc.scm 194 */
																obj_t BgL_arg4724z00_1527;

																{	/* SawMill/regalloc.scm 194 */
																	obj_t BgL_l4398z00_1528;

																	BgL_l4398z00_1528 =
																		BGl_filterz00zz__r4_control_features_6_9z00
																		(BGl_rtl_regzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
																		BGl_inszd2argsza2z70zzsaw_defsz00(
																			(BgL_rtl_insz00_bglt) (BgL_oz00_1511)));
																	if (NULLP(BgL_l4398z00_1528))
																		{	/* SawMill/regalloc.scm 194 */
																			BgL_arg4724z00_1527 = BNIL;
																		}
																	else
																		{	/* SawMill/regalloc.scm 194 */
																			obj_t BgL_head4400z00_1530;

																			{	/* SawMill/regalloc.scm 194 */
																				BgL_rtl_regzf2razf2_bglt
																					BgL_arg4732z00_1543;
																				{	/* SawMill/regalloc.scm 194 */
																					obj_t BgL_arg4734z00_1545;

																					BgL_arg4734z00_1545 =
																						CAR(BgL_l4398z00_1528);
																					BgL_arg4732z00_1543 =
																						BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																						((BgL_rtl_regzf2razf2_bglt)
																						(BgL_arg4734z00_1545));
																				}
																				BgL_head4400z00_1530 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4732z00_1543), BNIL);
																			}
																			{	/* SawMill/regalloc.scm 194 */
																				obj_t BgL_g4403z00_1531;

																				BgL_g4403z00_1531 =
																					CDR(BgL_l4398z00_1528);
																				{
																					obj_t BgL_l4398z00_1533;

																					obj_t BgL_tail4401z00_1534;

																					BgL_l4398z00_1533 = BgL_g4403z00_1531;
																					BgL_tail4401z00_1534 =
																						BgL_head4400z00_1530;
																				BgL_zc3anonymousza34726ze3z83_1535:
																					if (NULLP(BgL_l4398z00_1533))
																						{	/* SawMill/regalloc.scm 194 */
																							BgL_arg4724z00_1527 =
																								BgL_head4400z00_1530;
																						}
																					else
																						{	/* SawMill/regalloc.scm 194 */
																							obj_t BgL_newtail4402z00_1537;

																							{	/* SawMill/regalloc.scm 194 */
																								BgL_rtl_regzf2razf2_bglt
																									BgL_arg4729z00_1539;
																								{	/* SawMill/regalloc.scm 194 */
																									obj_t BgL_arg4731z00_1541;

																									BgL_arg4731z00_1541 =
																										CAR(BgL_l4398z00_1533);
																									BgL_arg4729z00_1539 =
																										BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																										((BgL_rtl_regzf2razf2_bglt)
																										(BgL_arg4731z00_1541));
																								}
																								BgL_newtail4402z00_1537 =
																									MAKE_PAIR(
																									(obj_t) (BgL_arg4729z00_1539),
																									BNIL);
																							}
																							SET_CDR(BgL_tail4401z00_1534,
																								BgL_newtail4402z00_1537);
																							{
																								obj_t BgL_tail4401z00_5249;

																								obj_t BgL_l4398z00_5247;

																								BgL_l4398z00_5247 =
																									CDR(BgL_l4398z00_1533);
																								BgL_tail4401z00_5249 =
																									BgL_newtail4402z00_1537;
																								BgL_tail4401z00_1534 =
																									BgL_tail4401z00_5249;
																								BgL_l4398z00_1533 =
																									BgL_l4398z00_5247;
																								goto
																									BgL_zc3anonymousza34726ze3z83_1535;
																							}
																						}
																				}
																			}
																		}
																}
																BgL_arg4715z00_1518 =
																	BGl_listzd2ze3regsetz31zzsaw_regsetz00
																	(BgL_arg4724z00_1527, BgL_regsz00_12);
															}
															BgL_arg4716z00_1519 =
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_12);
															{	/* SawMill/regalloc.scm 190 */
																BgL_rtl_inszf2razf2_bglt BgL_res5529z00_3546;

																{	/* SawMill/regalloc.scm 190 */
																	obj_t BgL_def4136z00_3531;

																	obj_t BgL_out4137z00_3532;

																	obj_t BgL_in4138z00_3533;

																	obj_t BgL_spill4139z00_3534;

																	BgL_def4136z00_3531 =
																		(obj_t) (BgL_arg4713z00_1516);
																	BgL_out4137z00_3532 =
																		(obj_t) (BgL_arg4714z00_1517);
																	BgL_in4138z00_3533 =
																		(obj_t) (BgL_arg4715z00_1518);
																	BgL_spill4139z00_3534 =
																		(obj_t) (BgL_arg4716z00_1519);
																	{	/* SawMill/regalloc.scm 190 */
																		BgL_rtl_inszf2razf2_bglt
																			BgL_new4140z00_3535;
																		BgL_new4140z00_3535 =
																			((BgL_rtl_inszf2razf2_bglt)
																			BREF(GC_MALLOC(sizeof(struct
																						BgL_rtl_inszf2razf2_bgl))));
																		{	/* SawMill/regalloc.scm 190 */
																			BgL_rtl_inszf2razf2_bglt
																				BgL_res5528z00_3545;
																			{	/* SawMill/regalloc.scm 190 */
																				BgL_rtl_inszf2razf2_bglt
																					BgL_new4157z00_3536;
																				BgL_new4157z00_3536 =
																					BgL_new4140z00_3535;
																				{	/* SawMill/regalloc.scm 190 */
																					obj_t BgL_def4153z00_3541;

																					obj_t BgL_out4154z00_3542;

																					obj_t BgL_in4155z00_3543;

																					obj_t BgL_spill4156z00_3544;

																					BgL_def4153z00_3541 =
																						BgL_def4136z00_3531;
																					BgL_out4154z00_3542 =
																						BgL_out4137z00_3532;
																					BgL_in4155z00_3543 =
																						BgL_in4138z00_3533;
																					BgL_spill4156z00_3544 =
																						BgL_spill4139z00_3534;
																					((((BgL_rtl_inszf2razf2_bglt)
																								CREF(BgL_new4157z00_3536))->
																							BgL_defz00) =
																						((obj_t) BgL_def4153z00_3541),
																						BUNSPEC);
																					((((BgL_rtl_inszf2razf2_bglt)
																								CREF(BgL_new4157z00_3536))->
																							BgL_outz00) =
																						((obj_t) BgL_out4154z00_3542),
																						BUNSPEC);
																					((((BgL_rtl_inszf2razf2_bglt)
																								CREF(BgL_new4157z00_3536))->
																							BgL_inz00) =
																						((obj_t) BgL_in4155z00_3543),
																						BUNSPEC);
																					((((BgL_rtl_inszf2razf2_bglt)
																								CREF(BgL_new4157z00_3536))->
																							BgL_spillz00) =
																						((obj_t) BgL_spill4156z00_3544),
																						BUNSPEC);
																					BgL_res5528z00_3545 =
																						BgL_new4157z00_3536;
																			}} BgL_res5528z00_3545;
																		}
																		BgL_res5529z00_3546 = BgL_new4140z00_3535;
																}}
																BgL_arg4712z00_1515 = BgL_res5529z00_3546;
														}}
														{	/* SawMill/regalloc.scm 190 */
															obj_t BgL_auxz00_5263;

															BgL_objectz00_bglt BgL_auxz00_5261;

															BgL_auxz00_5263 = (obj_t) (BgL_arg4712z00_1515);
															BgL_auxz00_5261 =
																(BgL_objectz00_bglt) (BgL_obj4296z00_1514);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_5261,
																BgL_auxz00_5263);
													}}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj4296z00_1514),
														BGl_classzd2numzd2zz__objectz00
														(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
													BgL_obj4296z00_1514;
												}
												{	/* SawMill/regalloc.scm 197 */
													obj_t BgL_g4406z00_1547;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_5269;

														BgL_auxz00_5269 =
															(BgL_rtl_insz00_bglt) (BgL_oz00_1511);
														BgL_g4406z00_1547 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5269))->
															BgL_argsz00);
													}
													{
														obj_t BgL_l4404z00_1549;

														BgL_l4404z00_1549 = BgL_g4406z00_1547;
													BgL_zc3anonymousza34736ze3z83_1550:
														if (PAIRP(BgL_l4404z00_1549))
															{	/* SawMill/regalloc.scm 197 */
																BGl_argszd2widenzd2raz12z12zzsaw_registerzd2allocationzd2
																	(BgL_regsz00_12, CAR(BgL_l4404z00_1549));
																{
																	obj_t BgL_l4404z00_5276;

																	BgL_l4404z00_5276 = CDR(BgL_l4404z00_1549);
																	BgL_l4404z00_1549 = BgL_l4404z00_5276;
																	goto BgL_zc3anonymousza34736ze3z83_1550;
																}
															}
														else
															{	/* SawMill/regalloc.scm 197 */
																((bool_t) 1);
															}
													}
												}
												{
													obj_t BgL_l4407z00_5279;

													BgL_l4407z00_5279 = CDR(BgL_l4407z00_1561);
													BgL_l4407z00_1561 = BgL_l4407z00_5279;
													goto BgL_zc3anonymousza34742ze3z83_1562;
												}
											}
										else
											{	/* SawMill/regalloc.scm 201 */
												((bool_t) 1);
											}
									}
								}
								{	/* SawMill/regalloc.scm 202 */
									BgL_blockz00_bglt BgL_obj4299z00_1567;

									BgL_obj4299z00_1567 =
										((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_oz00_1555));
									{	/* SawMill/regalloc.scm 202 */
										BgL_blockzf2razf2_bglt BgL_arg4746z00_1568;

										{	/* SawMill/regalloc.scm 202 */
											BgL_blockzf2razf2_bglt BgL_res5531z00_3564;

											{	/* SawMill/regalloc.scm 202 */
												BgL_blockzf2razf2_bglt BgL_new4100z00_3559;

												BgL_new4100z00_3559 =
													((BgL_blockzf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_blockzf2razf2_bgl))));
												{	/* SawMill/regalloc.scm 202 */
													BgL_blockzf2razf2_bglt BgL_res5530z00_3563;

													{	/* SawMill/regalloc.scm 202 */
														BgL_blockzf2razf2_bglt BgL_new4110z00_3560;

														BgL_new4110z00_3560 = BgL_new4100z00_3559;
														{	/* SawMill/regalloc.scm 202 */
															obj_t BgL_trsif4109z00_3562;

															BgL_trsif4109z00_3562 = BgL_trsifz00_1558;
															((((BgL_blockzf2razf2_bglt)
																		CREF(BgL_new4110z00_3560))->BgL_trsifz00) =
																((obj_t) BgL_trsif4109z00_3562), BUNSPEC);
															BgL_res5530z00_3563 = BgL_new4110z00_3560;
													}} BgL_res5530z00_3563;
												}
												BgL_res5531z00_3564 = BgL_new4100z00_3559;
											}
											BgL_arg4746z00_1568 = BgL_res5531z00_3564;
										}
										{	/* SawMill/regalloc.scm 202 */
											obj_t BgL_auxz00_5287;

											BgL_objectz00_bglt BgL_auxz00_5285;

											BgL_auxz00_5287 = (obj_t) (BgL_arg4746z00_1568);
											BgL_auxz00_5285 =
												(BgL_objectz00_bglt) (BgL_obj4299z00_1567);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5285, BgL_auxz00_5287);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4299z00_1567),
										BGl_classzd2numzd2zz__objectz00
										(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2));
									BgL_obj4299z00_1567;
							}}
							{
								obj_t BgL_l4410z00_5294;

								BgL_l4410z00_5294 = CDR(BgL_l4410z00_1464);
								BgL_l4410z00_1464 = BgL_l4410z00_5294;
								goto BgL_zc3anonymousza34680ze3z83_1465;
							}
						}
					else
						{	/* SawMill/regalloc.scm 204 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* args-widen-ra! */
	bool_t BGl_argszd2widenzd2raz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_regsz00_4893, obj_t BgL_oz00_1473)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 187 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_1473,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMill/regalloc.scm 181 */
					BgL_rtl_insz00_bglt BgL_instance4291z00_1476;

					BgL_instance4291z00_1476 = (BgL_rtl_insz00_bglt) (BgL_oz00_1473);
					{	/* SawMill/regalloc.scm 182 */
						BgL_rtl_insz00_bglt BgL_obj4293z00_1477;

						BgL_obj4293z00_1477 =
							((BgL_rtl_insz00_bglt) (BgL_rtl_insz00_bglt) (BgL_oz00_1473));
						{	/* SawMill/regalloc.scm 183 */
							BgL_rtl_inszf2razf2_bglt BgL_arg4688z00_1478;

							{	/* SawMill/regalloc.scm 183 */
								BgL_regsetz00_bglt BgL_arg4689z00_1479;

								BgL_regsetz00_bglt BgL_arg4690z00_1480;

								BgL_regsetz00_bglt BgL_arg4691z00_1481;

								BgL_regsetz00_bglt BgL_arg4692z00_1482;

								BgL_arg4689z00_1479 =
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_regsz00_4893);
								BgL_arg4690z00_1480 =
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_regsz00_4893);
								{	/* SawMill/regalloc.scm 184 */
									obj_t BgL_arg4693z00_1483;

									{	/* SawMill/regalloc.scm 184 */
										obj_t BgL_l4389z00_1484;

										BgL_l4389z00_1484 =
											BGl_filterz00zz__r4_control_features_6_9z00
											(BGl_rtl_regzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
											BGl_inszd2argsza2z70zzsaw_defsz00
											(BgL_instance4291z00_1476));
										if (NULLP(BgL_l4389z00_1484))
											{	/* SawMill/regalloc.scm 184 */
												BgL_arg4693z00_1483 = BNIL;
											}
										else
											{	/* SawMill/regalloc.scm 184 */
												obj_t BgL_head4391z00_1486;

												{	/* SawMill/regalloc.scm 184 */
													BgL_rtl_regzf2razf2_bglt BgL_arg4702z00_1499;

													{	/* SawMill/regalloc.scm 184 */
														obj_t BgL_arg4704z00_1501;

														BgL_arg4704z00_1501 = CAR(BgL_l4389z00_1484);
														BgL_arg4702z00_1499 =
															BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
															((BgL_rtl_regzf2razf2_bglt)
															(BgL_arg4704z00_1501));
													}
													BgL_head4391z00_1486 =
														MAKE_PAIR((obj_t) (BgL_arg4702z00_1499), BNIL);
												}
												{	/* SawMill/regalloc.scm 184 */
													obj_t BgL_g4394z00_1487;

													BgL_g4394z00_1487 = CDR(BgL_l4389z00_1484);
													{
														obj_t BgL_l4389z00_1489;

														obj_t BgL_tail4392z00_1490;

														BgL_l4389z00_1489 = BgL_g4394z00_1487;
														BgL_tail4392z00_1490 = BgL_head4391z00_1486;
													BgL_zc3anonymousza34695ze3z83_1491:
														if (NULLP(BgL_l4389z00_1489))
															{	/* SawMill/regalloc.scm 184 */
																BgL_arg4693z00_1483 = BgL_head4391z00_1486;
															}
														else
															{	/* SawMill/regalloc.scm 184 */
																obj_t BgL_newtail4393z00_1493;

																{	/* SawMill/regalloc.scm 184 */
																	BgL_rtl_regzf2razf2_bglt BgL_arg4698z00_1495;

																	{	/* SawMill/regalloc.scm 184 */
																		obj_t BgL_arg4701z00_1497;

																		BgL_arg4701z00_1497 =
																			CAR(BgL_l4389z00_1489);
																		BgL_arg4698z00_1495 =
																			BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																			((BgL_rtl_regzf2razf2_bglt)
																			(BgL_arg4701z00_1497));
																	}
																	BgL_newtail4393z00_1493 =
																		MAKE_PAIR(
																		(obj_t) (BgL_arg4698z00_1495), BNIL);
																}
																SET_CDR(BgL_tail4392z00_1490,
																	BgL_newtail4393z00_1493);
																{
																	obj_t BgL_tail4392z00_5323;

																	obj_t BgL_l4389z00_5321;

																	BgL_l4389z00_5321 = CDR(BgL_l4389z00_1489);
																	BgL_tail4392z00_5323 =
																		BgL_newtail4393z00_1493;
																	BgL_tail4392z00_1490 = BgL_tail4392z00_5323;
																	BgL_l4389z00_1489 = BgL_l4389z00_5321;
																	goto BgL_zc3anonymousza34695ze3z83_1491;
																}
															}
													}
												}
											}
									}
									BgL_arg4691z00_1481 =
										BGl_listzd2ze3regsetz31zzsaw_regsetz00(BgL_arg4693z00_1483,
										BgL_regsz00_4893);
								}
								BgL_arg4692z00_1482 =
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_regsz00_4893);
								{	/* SawMill/regalloc.scm 182 */
									BgL_rtl_inszf2razf2_bglt BgL_res5526z00_3504;

									{	/* SawMill/regalloc.scm 182 */
										obj_t BgL_def4136z00_3489;

										obj_t BgL_out4137z00_3490;

										obj_t BgL_in4138z00_3491;

										obj_t BgL_spill4139z00_3492;

										BgL_def4136z00_3489 = (obj_t) (BgL_arg4689z00_1479);
										BgL_out4137z00_3490 = (obj_t) (BgL_arg4690z00_1480);
										BgL_in4138z00_3491 = (obj_t) (BgL_arg4691z00_1481);
										BgL_spill4139z00_3492 = (obj_t) (BgL_arg4692z00_1482);
										{	/* SawMill/regalloc.scm 182 */
											BgL_rtl_inszf2razf2_bglt BgL_new4140z00_3493;

											BgL_new4140z00_3493 =
												((BgL_rtl_inszf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
															BgL_rtl_inszf2razf2_bgl))));
											{	/* SawMill/regalloc.scm 182 */
												BgL_rtl_inszf2razf2_bglt BgL_res5525z00_3503;

												{	/* SawMill/regalloc.scm 182 */
													BgL_rtl_inszf2razf2_bglt BgL_new4157z00_3494;

													BgL_new4157z00_3494 = BgL_new4140z00_3493;
													{	/* SawMill/regalloc.scm 182 */
														obj_t BgL_def4153z00_3499;

														obj_t BgL_out4154z00_3500;

														obj_t BgL_in4155z00_3501;

														obj_t BgL_spill4156z00_3502;

														BgL_def4153z00_3499 = BgL_def4136z00_3489;
														BgL_out4154z00_3500 = BgL_out4137z00_3490;
														BgL_in4155z00_3501 = BgL_in4138z00_3491;
														BgL_spill4156z00_3502 = BgL_spill4139z00_3492;
														((((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_new4157z00_3494))->BgL_defz00) =
															((obj_t) BgL_def4153z00_3499), BUNSPEC);
														((((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_new4157z00_3494))->BgL_outz00) =
															((obj_t) BgL_out4154z00_3500), BUNSPEC);
														((((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_new4157z00_3494))->BgL_inz00) =
															((obj_t) BgL_in4155z00_3501), BUNSPEC);
														((((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_new4157z00_3494))->BgL_spillz00) =
															((obj_t) BgL_spill4156z00_3502), BUNSPEC);
														BgL_res5525z00_3503 = BgL_new4157z00_3494;
												}} BgL_res5525z00_3503;
											}
											BgL_res5526z00_3504 = BgL_new4140z00_3493;
									}}
									BgL_arg4688z00_1478 = BgL_res5526z00_3504;
							}}
							{	/* SawMill/regalloc.scm 182 */
								obj_t BgL_auxz00_5337;

								BgL_objectz00_bglt BgL_auxz00_5335;

								BgL_auxz00_5337 = (obj_t) (BgL_arg4688z00_1478);
								BgL_auxz00_5335 = (BgL_objectz00_bglt) (BgL_obj4293z00_1477);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5335, BgL_auxz00_5337);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4293z00_1477),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
						BgL_obj4293z00_1477;
					}
					{	/* SawMill/regalloc.scm 187 */
						obj_t BgL_g4397z00_1503;

						BgL_g4397z00_1503 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_instance4291z00_1476))->
							BgL_argsz00);
						{
							obj_t BgL_l4395z00_1505;

							BgL_l4395z00_1505 = BgL_g4397z00_1503;
						BgL_zc3anonymousza34706ze3z83_1506:
							if (PAIRP(BgL_l4395z00_1505))
								{	/* SawMill/regalloc.scm 187 */
									BGl_argszd2widenzd2raz12z12zzsaw_registerzd2allocationzd2
										(BgL_regsz00_4893, CAR(BgL_l4395z00_1505));
									{
										obj_t BgL_l4395z00_5348;

										BgL_l4395z00_5348 = CDR(BgL_l4395z00_1505);
										BgL_l4395z00_1505 = BgL_l4395z00_5348;
										goto BgL_zc3anonymousza34706ze3z83_1506;
									}
								}
							else
								{	/* SawMill/regalloc.scm 187 */
									return ((bool_t) 1);
								}
						}
					}
				}
			else
				{	/* SawMill/regalloc.scm 180 */
					return ((bool_t) 0);
				}
		}
	}



/* liveness! */
	obj_t BGl_livenessz12z12zzsaw_registerzd2allocationzd2(obj_t BgL_blocksz00_13,
		obj_t BgL_argsz00_14)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 212 */
			{	/* SawMill/regalloc.scm 213 */
				obj_t BgL_list4749z00_1575;

				BgL_list4749z00_1575 =
					MAKE_PAIR(BGl_string5597z00zzsaw_registerzd2allocationzd2, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list4749z00_1575);
			}
			if (PAIRP(BgL_blocksz00_13))
				{	/* SawMill/regalloc.scm 217 */
					obj_t BgL_inssz00_1577;

					{
						BgL_blockz00_bglt BgL_auxz00_5355;

						BgL_auxz00_5355 = (BgL_blockz00_bglt) (CAR(BgL_blocksz00_13));
						BgL_inssz00_1577 =
							(((BgL_blockz00_bglt) CREF(BgL_auxz00_5355))->BgL_firstz00);
					}
					{	/* SawMill/regalloc.scm 219 */
						obj_t BgL_insz00_1579;

						BgL_insz00_1579 = CAR(BgL_inssz00_1577);
						{
							obj_t BgL_l4412z00_1582;

							BgL_l4412z00_1582 = BgL_argsz00_14;
						BgL_zc3anonymousza34752ze3z83_1583:
							if (PAIRP(BgL_l4412z00_1582))
								{	/* SawMill/regalloc.scm 221 */
									{	/* SawMill/regalloc.scm 221 */
										obj_t BgL_az00_1585;

										BgL_az00_1585 = CAR(BgL_l4412z00_1582);
										{	/* SawMill/regalloc.scm 221 */
											obj_t BgL_arg4754z00_1586;

											{	/* SawMill/regalloc.scm 221 */
												BgL_rtl_inszf2razf2_bglt BgL_obj4177z00_3574;

												BgL_obj4177z00_3574 =
													(BgL_rtl_inszf2razf2_bglt) (BgL_insz00_1579);
												{
													obj_t BgL_auxz00_5364;

													{	/* SawMill/regalloc.scm 221 */
														BgL_objectz00_bglt BgL_auxz00_5365;

														BgL_auxz00_5365 =
															(BgL_objectz00_bglt) (BgL_obj4177z00_3574);
														BgL_auxz00_5364 =
															BGL_OBJECT_WIDENING(BgL_auxz00_5365);
													}
													BgL_arg4754z00_1586 =
														(((BgL_rtl_inszf2razf2_bglt)
															CREF(BgL_auxz00_5364))->BgL_inz00);
												}
											}
											BGl_regsetzd2addz12zc0zzsaw_regsetz00(
												(BgL_regsetz00_bglt) (BgL_arg4754z00_1586),
												(BgL_rtl_regzf2razf2_bglt) (BgL_az00_1585));
										}
									}
									{
										obj_t BgL_l4412z00_5372;

										BgL_l4412z00_5372 = CDR(BgL_l4412z00_1582);
										BgL_l4412z00_1582 = BgL_l4412z00_5372;
										goto BgL_zc3anonymousza34752ze3z83_1583;
									}
								}
							else
								{	/* SawMill/regalloc.scm 221 */
									((bool_t) 1);
								}
						}
					}
				}
			else
				{	/* SawMill/regalloc.scm 216 */
					((bool_t) 0);
				}
			{
				long BgL_iz00_1591;

				BgL_iz00_1591 = ((long) 0);
			BgL_zc3anonymousza34757ze3z83_1592:
				{	/* SawMill/regalloc.scm 224 */
					obj_t BgL_list4758z00_1593;

					{	/* SawMill/regalloc.scm 224 */
						obj_t BgL_arg4761z00_1595;

						BgL_arg4761z00_1595 = MAKE_PAIR(BINT(BgL_iz00_1591), BNIL);
						BgL_list4758z00_1593 =
							MAKE_PAIR(BGl_string5598z00zzsaw_registerzd2allocationzd2,
							BgL_arg4761z00_1595);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list4758z00_1593);
				}
				{
					obj_t BgL_bsz00_1597;

					obj_t BgL_tz00_1598;

					BgL_bsz00_1597 = BgL_blocksz00_13;
					BgL_tz00_1598 = BFALSE;
				BgL_zc3anonymousza34762ze3z83_1599:
					if (NULLP(BgL_bsz00_1597))
						{	/* SawMill/regalloc.scm 227 */
							if (CBOOL(BgL_tz00_1598))
								{
									long BgL_iz00_5383;

									BgL_iz00_5383 = (BgL_iz00_1591 + ((long) 1));
									BgL_iz00_1591 = BgL_iz00_5383;
									goto BgL_zc3anonymousza34757ze3z83_1592;
								}
							else
								{	/* SawMill/regalloc.scm 228 */
									((bool_t) 0);
								}
						}
					else
						{	/* SawMill/regalloc.scm 231 */
							obj_t BgL_arg4765z00_1602;

							obj_t BgL_arg4766z00_1603;

							BgL_arg4765z00_1602 = CDR(BgL_bsz00_1597);
							{	/* SawMill/regalloc.scm 231 */
								obj_t BgL__ortest_4302z00_1604;

								BgL__ortest_4302z00_1604 =
									BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2(CAR
									(BgL_bsz00_1597));
								if (CBOOL(BgL__ortest_4302z00_1604))
									{	/* SawMill/regalloc.scm 231 */
										BgL_arg4766z00_1603 = BgL__ortest_4302z00_1604;
									}
								else
									{	/* SawMill/regalloc.scm 231 */
										BgL_arg4766z00_1603 = BgL_tz00_1598;
									}
							}
							{
								obj_t BgL_tz00_5391;

								obj_t BgL_bsz00_5390;

								BgL_bsz00_5390 = BgL_arg4765z00_1602;
								BgL_tz00_5391 = BgL_arg4766z00_1603;
								BgL_tz00_1598 = BgL_tz00_5391;
								BgL_bsz00_1597 = BgL_bsz00_5390;
								goto BgL_zc3anonymousza34762ze3z83_1599;
							}
						}
				}
			}
			{	/* SawMill/regalloc.scm 232 */
				obj_t BgL_list4768z00_1608;

				BgL_list4768z00_1608 =
					MAKE_PAIR(BGl_string5599z00zzsaw_registerzd2allocationzd2, BNIL);
				return
					BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
					BgL_list4768z00_1608);
		}}
	}



/* liveness-block! */
	obj_t BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_blockz00_15)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 235 */
			{	/* SawMill/regalloc.scm 237 */
				obj_t BgL_g4305z00_1610;

				{	/* SawMill/regalloc.scm 238 */
					obj_t BgL_l4414z00_1658;

					{
						BgL_blockz00_bglt BgL_auxz00_5395;

						BgL_auxz00_5395 = (BgL_blockz00_bglt) (BgL_blockz00_15);
						BgL_l4414z00_1658 =
							(((BgL_blockz00_bglt) CREF(BgL_auxz00_5395))->BgL_succsz00);
					}
					if (NULLP(BgL_l4414z00_1658))
						{	/* SawMill/regalloc.scm 238 */
							BgL_g4305z00_1610 = BNIL;
						}
					else
						{	/* SawMill/regalloc.scm 238 */
							obj_t BgL_head4416z00_1660;

							BgL_head4416z00_1660 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l4414z00_1662;

								obj_t BgL_tail4417z00_1663;

								BgL_l4414z00_1662 = BgL_l4414z00_1658;
								BgL_tail4417z00_1663 = BgL_head4416z00_1660;
							BgL_zc3anonymousza34800ze3z83_1664:
								if (NULLP(BgL_l4414z00_1662))
									{	/* SawMill/regalloc.scm 238 */
										BgL_g4305z00_1610 = CDR(BgL_head4416z00_1660);
									}
								else
									{	/* SawMill/regalloc.scm 238 */
										obj_t BgL_newtail4418z00_1666;

										{	/* SawMill/regalloc.scm 238 */
											obj_t BgL_arg4804z00_1668;

											{	/* SawMill/regalloc.scm 238 */
												obj_t BgL_auxz00_5404;

												{
													BgL_blockz00_bglt BgL_auxz00_5405;

													BgL_auxz00_5405 =
														(BgL_blockz00_bglt) (CAR(BgL_l4414z00_1662));
													BgL_auxz00_5404 =
														(((BgL_blockz00_bglt) CREF(BgL_auxz00_5405))->
														BgL_firstz00);
												}
												BgL_arg4804z00_1668 = CAR(BgL_auxz00_5404);
											}
											BgL_newtail4418z00_1666 =
												MAKE_PAIR(BgL_arg4804z00_1668, BNIL);
										}
										SET_CDR(BgL_tail4417z00_1663, BgL_newtail4418z00_1666);
										{
											obj_t BgL_tail4417z00_5414;

											obj_t BgL_l4414z00_5412;

											BgL_l4414z00_5412 = CDR(BgL_l4414z00_1662);
											BgL_tail4417z00_5414 = BgL_newtail4418z00_1666;
											BgL_tail4417z00_1663 = BgL_tail4417z00_5414;
											BgL_l4414z00_1662 = BgL_l4414z00_5412;
											goto BgL_zc3anonymousza34800ze3z83_1664;
										}
									}
							}
						}
				}
				{
					obj_t BgL_inssz00_1613;

					obj_t BgL_succz00_1614;

					obj_t BgL_tz00_1615;

					{	/* SawMill/regalloc.scm 237 */
						obj_t BgL_arg4769z00_1612;

						{	/* SawMill/regalloc.scm 237 */
							BgL_blockzf2razf2_bglt BgL_obj4121z00_3595;

							BgL_obj4121z00_3595 = (BgL_blockzf2razf2_bglt) (BgL_blockz00_15);
							{
								obj_t BgL_auxz00_5416;

								{	/* SawMill/regalloc.scm 237 */
									BgL_objectz00_bglt BgL_auxz00_5417;

									BgL_auxz00_5417 = (BgL_objectz00_bglt) (BgL_obj4121z00_3595);
									BgL_auxz00_5416 = BGL_OBJECT_WIDENING(BgL_auxz00_5417);
								}
								BgL_arg4769z00_1612 =
									(((BgL_blockzf2razf2_bglt) CREF(BgL_auxz00_5416))->
									BgL_trsifz00);
							}
						}
						BgL_inssz00_1613 = BgL_arg4769z00_1612;
						BgL_succz00_1614 = BgL_g4305z00_1610;
						BgL_tz00_1615 = BFALSE;
					BgL_zc3anonymousza34770ze3z83_1616:
						if (PAIRP(BgL_inssz00_1613))
							{	/* SawMill/regalloc.scm 241 */
								obj_t BgL_instance4306z00_1618;

								BgL_instance4306z00_1618 = CAR(BgL_inssz00_1613);
								{	/* SawMill/regalloc.scm 242 */
									obj_t BgL_uz00_1619;

									{	/* SawMill/regalloc.scm 243 */
										obj_t BgL_cellvalz00_5424;

										if (BGl_iszd2azf3z21zz__objectz00(BgL_succz00_1614,
												BGl_rtl_insz00zzsaw_defsz00))
											{	/* SawMill/regalloc.scm 244 */
												obj_t BgL_arg4784z00_1634;

												obj_t BgL_arg4785z00_1635;

												{	/* SawMill/regalloc.scm 244 */
													BgL_rtl_inszf2razf2_bglt BgL_obj4174z00_3599;

													BgL_obj4174z00_3599 =
														(BgL_rtl_inszf2razf2_bglt)
														(BgL_instance4306z00_1618);
													{
														obj_t BgL_auxz00_5428;

														{	/* SawMill/regalloc.scm 244 */
															BgL_objectz00_bglt BgL_auxz00_5429;

															BgL_auxz00_5429 =
																(BgL_objectz00_bglt) (BgL_obj4174z00_3599);
															BgL_auxz00_5428 =
																BGL_OBJECT_WIDENING(BgL_auxz00_5429);
														}
														BgL_arg4784z00_1634 =
															(((BgL_rtl_inszf2razf2_bglt)
																CREF(BgL_auxz00_5428))->BgL_outz00);
													}
												}
												{	/* SawMill/regalloc.scm 244 */
													BgL_rtl_inszf2razf2_bglt BgL_obj4177z00_3600;

													BgL_obj4177z00_3600 =
														(BgL_rtl_inszf2razf2_bglt) (
														(BgL_rtl_insz00_bglt) (BgL_succz00_1614));
													{
														obj_t BgL_auxz00_5435;

														{	/* SawMill/regalloc.scm 244 */
															BgL_objectz00_bglt BgL_auxz00_5436;

															BgL_auxz00_5436 =
																(BgL_objectz00_bglt) (BgL_obj4177z00_3600);
															BgL_auxz00_5435 =
																BGL_OBJECT_WIDENING(BgL_auxz00_5436);
														}
														BgL_arg4785z00_1635 =
															(((BgL_rtl_inszf2razf2_bglt)
																CREF(BgL_auxz00_5435))->BgL_inz00);
													}
												}
												BgL_cellvalz00_5424 =
													BBOOL(BGl_regsetzd2unionz12zc0zzsaw_regsetz00(
														(BgL_regsetz00_bglt) (BgL_arg4784z00_1634),
														(BgL_regsetz00_bglt) (BgL_arg4785z00_1635)));
											}
										else
											{	/* SawMill/regalloc.scm 243 */
												if (PAIRP(BgL_succz00_1614))
													{	/* SawMill/regalloc.scm 246 */
														obj_t BgL_arg4787z00_1637;

														obj_t BgL_arg4788z00_1638;

														{	/* SawMill/regalloc.scm 246 */
															BgL_rtl_inszf2razf2_bglt BgL_obj4174z00_3602;

															BgL_obj4174z00_3602 =
																(BgL_rtl_inszf2razf2_bglt)
																(BgL_instance4306z00_1618);
															{
																obj_t BgL_auxz00_5447;

																{	/* SawMill/regalloc.scm 246 */
																	BgL_objectz00_bglt BgL_auxz00_5448;

																	BgL_auxz00_5448 =
																		(BgL_objectz00_bglt) (BgL_obj4174z00_3602);
																	BgL_auxz00_5447 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_5448);
																}
																BgL_arg4787z00_1637 =
																	(((BgL_rtl_inszf2razf2_bglt)
																		CREF(BgL_auxz00_5447))->BgL_outz00);
															}
														}
														{	/* SawMill/regalloc.scm 246 */
															obj_t BgL_l4419z00_1639;

															BgL_l4419z00_1639 = BgL_succz00_1614;
															{	/* SawMill/regalloc.scm 246 */
																obj_t BgL_head4421z00_1641;

																{	/* SawMill/regalloc.scm 246 */
																	obj_t BgL_arg4796z00_1654;

																	{	/* SawMill/regalloc.scm 246 */
																		BgL_rtl_inszf2razf2_bglt
																			BgL_obj4177z00_3605;
																		BgL_obj4177z00_3605 =
																			(BgL_rtl_inszf2razf2_bglt) (CAR
																			(BgL_l4419z00_1639));
																		{
																			obj_t BgL_auxz00_5454;

																			{	/* SawMill/regalloc.scm 246 */
																				BgL_objectz00_bglt BgL_auxz00_5455;

																				BgL_auxz00_5455 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4177z00_3605);
																				BgL_auxz00_5454 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_5455);
																			}
																			BgL_arg4796z00_1654 =
																				(((BgL_rtl_inszf2razf2_bglt)
																					CREF(BgL_auxz00_5454))->BgL_inz00);
																		}
																	}
																	BgL_head4421z00_1641 =
																		MAKE_PAIR(BgL_arg4796z00_1654, BNIL);
																}
																{	/* SawMill/regalloc.scm 246 */
																	obj_t BgL_g4424z00_1642;

																	BgL_g4424z00_1642 = CDR(BgL_l4419z00_1639);
																	{
																		obj_t BgL_l4419z00_1644;

																		obj_t BgL_tail4422z00_1645;

																		BgL_l4419z00_1644 = BgL_g4424z00_1642;
																		BgL_tail4422z00_1645 = BgL_head4421z00_1641;
																	BgL_zc3anonymousza34790ze3z83_1646:
																		if (NULLP(BgL_l4419z00_1644))
																			{	/* SawMill/regalloc.scm 246 */
																				BgL_arg4788z00_1638 =
																					BgL_head4421z00_1641;
																			}
																		else
																			{	/* SawMill/regalloc.scm 246 */
																				obj_t BgL_newtail4423z00_1648;

																				{	/* SawMill/regalloc.scm 246 */
																					obj_t BgL_arg4793z00_1650;

																					{	/* SawMill/regalloc.scm 246 */
																						BgL_rtl_inszf2razf2_bglt
																							BgL_obj4177z00_3611;
																						{	/* SawMill/regalloc.scm 246 */
																							obj_t BgL_pairz00_3610;

																							BgL_pairz00_3610 =
																								BgL_l4419z00_1644;
																							BgL_obj4177z00_3611 =
																								(BgL_rtl_inszf2razf2_bglt) (CAR
																								(BgL_pairz00_3610));
																						}
																						{
																							obj_t BgL_auxz00_5465;

																							{	/* SawMill/regalloc.scm 246 */
																								BgL_objectz00_bglt
																									BgL_auxz00_5466;
																								BgL_auxz00_5466 =
																									(BgL_objectz00_bglt)
																									(BgL_obj4177z00_3611);
																								BgL_auxz00_5465 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_5466);
																							}
																							BgL_arg4793z00_1650 =
																								(((BgL_rtl_inszf2razf2_bglt)
																									CREF(BgL_auxz00_5465))->
																								BgL_inz00);
																						}
																					}
																					BgL_newtail4423z00_1648 =
																						MAKE_PAIR(BgL_arg4793z00_1650,
																						BNIL);
																				}
																				SET_CDR(BgL_tail4422z00_1645,
																					BgL_newtail4423z00_1648);
																				{
																					obj_t BgL_tail4422z00_5474;

																					obj_t BgL_l4419z00_5472;

																					BgL_l4419z00_5472 =
																						CDR(BgL_l4419z00_1644);
																					BgL_tail4422z00_5474 =
																						BgL_newtail4423z00_1648;
																					BgL_tail4422z00_1645 =
																						BgL_tail4422z00_5474;
																					BgL_l4419z00_1644 = BgL_l4419z00_5472;
																					goto
																						BgL_zc3anonymousza34790ze3z83_1646;
																				}
																			}
																	}
																}
															}
														}
														BgL_cellvalz00_5424 =
															BBOOL(BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(
																(BgL_regsetz00_bglt) (BgL_arg4787z00_1637),
																BgL_arg4788z00_1638));
													}
												else
													{	/* SawMill/regalloc.scm 245 */
														BgL_cellvalz00_5424 = BFALSE;
													}
											}
										BgL_uz00_1619 = MAKE_CELL(BgL_cellvalz00_5424);
									}
									{	/* SawMill/regalloc.scm 249 */
										obj_t BgL_arg4773z00_1621;

										{	/* SawMill/regalloc.scm 249 */
											BgL_rtl_inszf2razf2_bglt BgL_obj4174z00_3617;

											BgL_obj4174z00_3617 =
												(BgL_rtl_inszf2razf2_bglt) (BgL_instance4306z00_1618);
											{
												obj_t BgL_auxz00_5479;

												{	/* SawMill/regalloc.scm 249 */
													BgL_objectz00_bglt BgL_auxz00_5480;

													BgL_auxz00_5480 =
														(BgL_objectz00_bglt) (BgL_obj4174z00_3617);
													BgL_auxz00_5479 =
														BGL_OBJECT_WIDENING(BgL_auxz00_5480);
												}
												BgL_arg4773z00_1621 =
													(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5479))->
													BgL_outz00);
											}
										}
										{	/* SawMill/regalloc.scm 250 */
											obj_t BgL_zc3anonymousza34774ze3z83_4721;

											BgL_zc3anonymousza34774ze3z83_4721 =
												make_fx_procedure
												(BGl_zc3anonymousza34774ze3z83zzsaw_registerzd2allocationzd2,
												(int) (((long) 1)), (int) (((long) 2)));
											PROCEDURE_SET(BgL_zc3anonymousza34774ze3z83_4721,
												(int) (((long) 0)), BgL_instance4306z00_1618);
											PROCEDURE_SET(BgL_zc3anonymousza34774ze3z83_4721,
												(int) (((long) 1)), BgL_uz00_1619);
											BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
												(BgL_zc3anonymousza34774ze3z83_4721,
												(BgL_regsetz00_bglt) (BgL_arg4773z00_1621));
									}}
									{	/* SawMill/regalloc.scm 253 */
										obj_t BgL_arg4778z00_1629;

										obj_t BgL_arg4780z00_1630;

										obj_t BgL_arg4782z00_1631;

										BgL_arg4778z00_1629 = CDR(BgL_inssz00_1613);
										BgL_arg4780z00_1630 = CAR(BgL_inssz00_1613);
										if (CBOOL(BgL_tz00_1615))
											{	/* SawMill/regalloc.scm 253 */
												BgL_arg4782z00_1631 = BgL_tz00_1615;
											}
										else
											{	/* SawMill/regalloc.scm 253 */
												BgL_arg4782z00_1631 = CELL_REF(BgL_uz00_1619);
											}
										{
											obj_t BgL_tz00_5499;

											obj_t BgL_succz00_5498;

											obj_t BgL_inssz00_5497;

											BgL_inssz00_5497 = BgL_arg4778z00_1629;
											BgL_succz00_5498 = BgL_arg4780z00_1630;
											BgL_tz00_5499 = BgL_arg4782z00_1631;
											BgL_tz00_1615 = BgL_tz00_5499;
											BgL_succz00_1614 = BgL_succz00_5498;
											BgL_inssz00_1613 = BgL_inssz00_5497;
											goto BgL_zc3anonymousza34770ze3z83_1616;
										}
									}
								}
							}
						else
							{	/* SawMill/regalloc.scm 240 */
								return BgL_tz00_1615;
							}
					}
				}
			}
		}
	}



/* <anonymous:4774> */
	obj_t BGl_zc3anonymousza34774ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4722, obj_t BgL_rz00_4725)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 249 */
			{	/* SawMill/regalloc.scm 250 */
				obj_t BgL_instance4306z00_4723;

				obj_t BgL_uz00_4724;

				BgL_instance4306z00_4723 =
					PROCEDURE_REF(BgL_envz00_4722, (int) (((long) 0)));
				BgL_uz00_4724 = PROCEDURE_REF(BgL_envz00_4722, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1622;

					BgL_rz00_1622 = BgL_rz00_4725;
					{	/* SawMill/regalloc.scm 250 */
						bool_t BgL_testz00_5504;

						{	/* SawMill/regalloc.scm 250 */
							obj_t BgL_arg4777z00_1627;

							{	/* SawMill/regalloc.scm 250 */
								BgL_rtl_inszf2razf2_bglt BgL_obj4171z00_3618;

								BgL_obj4171z00_3618 =
									(BgL_rtl_inszf2razf2_bglt) (BgL_instance4306z00_4723);
								{
									obj_t BgL_auxz00_5506;

									{	/* SawMill/regalloc.scm 250 */
										BgL_objectz00_bglt BgL_auxz00_5507;

										BgL_auxz00_5507 =
											(BgL_objectz00_bglt) (BgL_obj4171z00_3618);
										BgL_auxz00_5506 = BGL_OBJECT_WIDENING(BgL_auxz00_5507);
									}
									BgL_arg4777z00_1627 =
										(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5506))->
										BgL_defz00);
							}}
							BgL_testz00_5504 =
								BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
								(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1622),
								(BgL_regsetz00_bglt) (BgL_arg4777z00_1627));
						}
						if (BgL_testz00_5504)
							{	/* SawMill/regalloc.scm 250 */
								return BFALSE;
							}
						else
							{	/* SawMill/regalloc.scm 251 */
								obj_t BgL_auxz00_4726;

								{	/* SawMill/regalloc.scm 251 */
									bool_t BgL__ortest_4308z00_1625;

									{	/* SawMill/regalloc.scm 251 */
										obj_t BgL_arg4776z00_1626;

										{	/* SawMill/regalloc.scm 251 */
											BgL_rtl_inszf2razf2_bglt BgL_obj4177z00_3619;

											BgL_obj4177z00_3619 =
												(BgL_rtl_inszf2razf2_bglt) (BgL_instance4306z00_4723);
											{
												obj_t BgL_auxz00_5515;

												{	/* SawMill/regalloc.scm 251 */
													BgL_objectz00_bglt BgL_auxz00_5516;

													BgL_auxz00_5516 =
														(BgL_objectz00_bglt) (BgL_obj4177z00_3619);
													BgL_auxz00_5515 =
														BGL_OBJECT_WIDENING(BgL_auxz00_5516);
												}
												BgL_arg4776z00_1626 =
													(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5515))->
													BgL_inz00);
											}
										}
										BgL__ortest_4308z00_1625 =
											BGl_regsetzd2addz12zc0zzsaw_regsetz00(
											(BgL_regsetz00_bglt) (BgL_arg4776z00_1626),
											(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1622));
									}
									if (BgL__ortest_4308z00_1625)
										{	/* SawMill/regalloc.scm 251 */
											BgL_auxz00_4726 = BBOOL(BgL__ortest_4308z00_1625);
										}
									else
										{	/* SawMill/regalloc.scm 251 */
											BgL_auxz00_4726 = CELL_REF(BgL_uz00_4724);
										}
								}
								return CELL_SET(BgL_uz00_4724, BgL_auxz00_4726);
							}
					}
				}
			}
		}
	}



/* hardware-mutual-interference! */
	bool_t
		BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
		(obj_t BgL_regsz00_20)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 276 */
			{
				obj_t BgL_rz00_1674;

				BgL_rz00_1674 = BgL_regsz00_20;
			BgL_zc3anonymousza34807ze3z83_1675:
				if (PAIRP(BgL_rz00_1674))
					{	/* SawMill/regalloc.scm 279 */
						obj_t BgL_r1z00_1677;

						BgL_r1z00_1677 = CAR(BgL_rz00_1674);
						{	/* SawMill/regalloc.scm 280 */
							obj_t BgL_g4434z00_1678;

							BgL_g4434z00_1678 = CDR(BgL_rz00_1674);
							{
								obj_t BgL_l4432z00_1680;

								BgL_l4432z00_1680 = BgL_g4434z00_1678;
							BgL_zc3anonymousza34809ze3z83_1681:
								if (PAIRP(BgL_l4432z00_1680))
									{	/* SawMill/regalloc.scm 280 */
										BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
											(BgL_r1z00_1677, CAR(BgL_l4432z00_1680));
										{
											obj_t BgL_l4432z00_5533;

											BgL_l4432z00_5533 = CDR(BgL_l4432z00_1680);
											BgL_l4432z00_1680 = BgL_l4432z00_5533;
											goto BgL_zc3anonymousza34809ze3z83_1681;
										}
									}
								else
									{	/* SawMill/regalloc.scm 280 */
										((bool_t) 1);
									}
							}
						}
						{
							obj_t BgL_rz00_5535;

							BgL_rz00_5535 = CDR(BgL_rz00_1674);
							BgL_rz00_1674 = BgL_rz00_5535;
							goto BgL_zc3anonymousza34807ze3z83_1675;
						}
					}
				else
					{	/* SawMill/regalloc.scm 278 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* hardware-parameters-interference! */
	bool_t
		BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_21, obj_t BgL_pregsz00_22)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 293 */
			{	/* SawMill/regalloc.scm 295 */
				obj_t BgL_g4439z00_1689;

				BgL_g4439z00_1689 =
					(((BgL_backendz00_bglt) CREF(BgL_backz00_21))->BgL_registersz00);
				{
					obj_t BgL_l4437z00_1691;

					BgL_l4437z00_1691 = BgL_g4439z00_1689;
				BgL_zc3anonymousza34813ze3z83_1692:
					if (PAIRP(BgL_l4437z00_1691))
						{	/* SawMill/regalloc.scm 295 */
							{	/* SawMill/regalloc.scm 296 */
								obj_t BgL_rz00_1694;

								BgL_rz00_1694 = CAR(BgL_l4437z00_1691);
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_rz00_1694,
											(((BgL_backendz00_bglt) CREF(BgL_backz00_21))->
												BgL_pregistersz00))))
									{	/* SawMill/regalloc.scm 296 */
										((bool_t) 0);
									}
								else
									{
										obj_t BgL_l4435z00_1697;

										BgL_l4435z00_1697 = BgL_pregsz00_22;
									BgL_zc3anonymousza34816ze3z83_1698:
										if (PAIRP(BgL_l4435z00_1697))
											{	/* SawMill/regalloc.scm 297 */
												BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
													(CAR(BgL_l4435z00_1697), BgL_rz00_1694);
												{
													obj_t BgL_l4435z00_5549;

													BgL_l4435z00_5549 = CDR(BgL_l4435z00_1697);
													BgL_l4435z00_1697 = BgL_l4435z00_5549;
													goto BgL_zc3anonymousza34816ze3z83_1698;
												}
											}
										else
											{	/* SawMill/regalloc.scm 297 */
												((bool_t) 1);
											}
									}
							}
							{
								obj_t BgL_l4437z00_5551;

								BgL_l4437z00_5551 = CDR(BgL_l4437z00_1691);
								BgL_l4437z00_1691 = BgL_l4437z00_5551;
								goto BgL_zc3anonymousza34813ze3z83_1692;
							}
						}
					else
						{	/* SawMill/regalloc.scm 295 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* hardware-interference! */
	bool_t
		BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_23, obj_t BgL_oz00_24)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 308 */
			{
				obj_t BgL_oz00_1816;

				{
					obj_t BgL_l4461z00_1709;

					BgL_l4461z00_1709 = BgL_oz00_24;
				BgL_zc3anonymousza34822ze3z83_1710:
					if (PAIRP(BgL_l4461z00_1709))
						{	/* SawMill/regalloc.scm 356 */
							BgL_oz00_1816 = CAR(BgL_l4461z00_1709);
							{	/* SawMill/regalloc.scm 352 */
								obj_t BgL_g4460z00_1818;

								{
									BgL_blockz00_bglt BgL_auxz00_5555;

									BgL_auxz00_5555 = (BgL_blockz00_bglt) (BgL_oz00_1816);
									BgL_g4460z00_1818 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_5555))->BgL_firstz00);
								}
								{
									obj_t BgL_l4458z00_1820;

									BgL_l4458z00_1820 = BgL_g4460z00_1818;
								BgL_zc3anonymousza34883ze3z83_1821:
									if (PAIRP(BgL_l4458z00_1820))
										{	/* SawMill/regalloc.scm 355 */
											{	/* SawMill/regalloc.scm 353 */
												obj_t BgL_oz00_1823;

												BgL_oz00_1823 = CAR(BgL_l4458z00_1820);
												{	/* SawMill/regalloc.scm 354 */
													obj_t BgL_arg4885z00_1825;

													obj_t BgL_arg4886z00_1826;

													{	/* SawMill/regalloc.scm 354 */
														BgL_rtl_inszf2razf2_bglt BgL_obj4177z00_3704;

														BgL_obj4177z00_3704 =
															(BgL_rtl_inszf2razf2_bglt) (BgL_oz00_1823);
														{
															obj_t BgL_auxz00_5562;

															{	/* SawMill/regalloc.scm 354 */
																BgL_objectz00_bglt BgL_auxz00_5563;

																BgL_auxz00_5563 =
																	(BgL_objectz00_bglt) (BgL_obj4177z00_3704);
																BgL_auxz00_5562 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_5563);
															}
															BgL_arg4885z00_1825 =
																(((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_auxz00_5562))->BgL_inz00);
														}
													}
													{	/* SawMill/regalloc.scm 354 */
														BgL_rtl_inszf2razf2_bglt BgL_obj4174z00_3705;

														BgL_obj4174z00_3705 =
															(BgL_rtl_inszf2razf2_bglt) (BgL_oz00_1823);
														{
															obj_t BgL_auxz00_5568;

															{	/* SawMill/regalloc.scm 354 */
																BgL_objectz00_bglt BgL_auxz00_5569;

																BgL_auxz00_5569 =
																	(BgL_objectz00_bglt) (BgL_obj4174z00_3705);
																BgL_auxz00_5568 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_5569);
															}
															BgL_arg4886z00_1826 =
																(((BgL_rtl_inszf2razf2_bglt)
																	CREF(BgL_auxz00_5568))->BgL_outz00);
														}
													}
													BGl_inszd2hardwarezd2interferencez12z12zzsaw_registerzd2allocationzd2
														(BgL_backz00_23,
														(BgL_rtl_inszf2razf2_bglt) (BgL_oz00_1823),
														BgL_arg4885z00_1825, BgL_arg4886z00_1826);
												}
											}
											{
												obj_t BgL_l4458z00_5575;

												BgL_l4458z00_5575 = CDR(BgL_l4458z00_1820);
												BgL_l4458z00_1820 = BgL_l4458z00_5575;
												goto BgL_zc3anonymousza34883ze3z83_1821;
											}
										}
									else
										{	/* SawMill/regalloc.scm 355 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l4461z00_5578;

								BgL_l4461z00_5578 = CDR(BgL_l4461z00_1709);
								BgL_l4461z00_1709 = BgL_l4461z00_5578;
								goto BgL_zc3anonymousza34822ze3z83_1710;
							}
						}
					else
						{	/* SawMill/regalloc.scm 356 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* ins-hardware-interference! */
	bool_t
		BGl_inszd2hardwarezd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_4892,
		BgL_rtl_inszf2razf2_bglt BgL_oz00_1715, obj_t BgL_inz00_1716,
		obj_t BgL_outz00_1717)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 350 */
			{	/* SawMill/regalloc.scm 310 */
				obj_t BgL_resetz00_1719;

				BgL_resetz00_1719 =
					BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
					(BgL_backz00_4892, (obj_t) (BgL_oz00_1715));
				{	/* SawMill/regalloc.scm 350 */
					obj_t BgL_spillz00_1720;

					obj_t BgL_rdestz00_1721;

					obj_t BgL_a0z00_1722;

					obj_t BgL_a1z00_1723;

					{	/* SawMill/regalloc.scm 350 */
						int BgL_auxz00_5582;

						BgL_auxz00_5582 = (int) (((long) 1));
						BgL_spillz00_1720 = BGL_MVALUES_VAL(BgL_auxz00_5582);
					}
					{	/* SawMill/regalloc.scm 350 */
						int BgL_auxz00_5585;

						BgL_auxz00_5585 = (int) (((long) 2));
						BgL_rdestz00_1721 = BGL_MVALUES_VAL(BgL_auxz00_5585);
					}
					{	/* SawMill/regalloc.scm 350 */
						int BgL_auxz00_5588;

						BgL_auxz00_5588 = (int) (((long) 3));
						BgL_a0z00_1722 = BGL_MVALUES_VAL(BgL_auxz00_5588);
					}
					{	/* SawMill/regalloc.scm 350 */
						int BgL_auxz00_5591;

						BgL_auxz00_5591 = (int) (((long) 4));
						BgL_a1z00_1723 = BGL_MVALUES_VAL(BgL_auxz00_5591);
					}
					if (PAIRP(BgL_resetz00_1719))
						{	/* SawMill/regalloc.scm 312 */
							{	/* SawMill/regalloc.scm 314 */
								obj_t BgL_zc3anonymousza34829ze3z83_4728;

								BgL_zc3anonymousza34829ze3z83_4728 =
									make_fx_procedure
									(BGl_zc3anonymousza34829ze3z83zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza34829ze3z83_4728,
									(int) (((long) 0)), BgL_resetz00_1719);
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
									(BgL_zc3anonymousza34829ze3z83_4728,
									(BgL_regsetz00_bglt) (BgL_inz00_1716));
							}
							{	/* SawMill/regalloc.scm 318 */
								obj_t BgL_zc3anonymousza34834ze3z83_4727;

								BgL_zc3anonymousza34834ze3z83_4727 =
									make_fx_procedure
									(BGl_zc3anonymousza34834ze3z83zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza34834ze3z83_4727,
									(int) (((long) 0)), BgL_resetz00_1719);
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
									(BgL_zc3anonymousza34834ze3z83_4727,
									(BgL_regsetz00_bglt) (BgL_outz00_1717));
						}}
					else
						{	/* SawMill/regalloc.scm 312 */
							BFALSE;
						}
					{	/* SawMill/regalloc.scm 324 */
						bool_t BgL_testz00_5610;

						if (PAIRP(BgL_rdestz00_1721))
							{	/* SawMill/regalloc.scm 324 */
								obj_t BgL_arg4846z00_1761;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_5613;

									BgL_auxz00_5613 = (BgL_rtl_insz00_bglt) (BgL_oz00_1715);
									BgL_arg4846z00_1761 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5613))->
										BgL_destz00);
								}
								BgL_testz00_5610 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg4846z00_1761,
									BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
							}
						else
							{	/* SawMill/regalloc.scm 324 */
								BgL_testz00_5610 = ((bool_t) 0);
							}
						if (BgL_testz00_5610)
							{	/* SawMill/regalloc.scm 325 */
								obj_t BgL_g4446z00_1750;

								BgL_g4446z00_1750 =
									(((BgL_backendz00_bglt) CREF(BgL_backz00_4892))->
									BgL_registersz00);
								{
									obj_t BgL_l4444z00_1752;

									BgL_l4444z00_1752 = BgL_g4446z00_1750;
								BgL_zc3anonymousza34839ze3z83_1753:
									if (PAIRP(BgL_l4444z00_1752))
										{	/* SawMill/regalloc.scm 325 */
											{	/* SawMill/regalloc.scm 326 */
												obj_t BgL_rz00_1755;

												BgL_rz00_1755 = CAR(BgL_l4444z00_1752);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_1755, BgL_rdestz00_1721)))
													{	/* SawMill/regalloc.scm 326 */
														BFALSE;
													}
												else
													{	/* SawMill/regalloc.scm 327 */
														obj_t BgL_arg4842z00_1757;

														{
															BgL_rtl_insz00_bglt BgL_auxz00_5624;

															BgL_auxz00_5624 =
																(BgL_rtl_insz00_bglt) (BgL_oz00_1715);
															BgL_arg4842z00_1757 =
																(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5624))->
																BgL_destz00);
														}
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_arg4842z00_1757, BgL_rz00_1755);
													}
											}
											{
												obj_t BgL_l4444z00_5628;

												BgL_l4444z00_5628 = CDR(BgL_l4444z00_1752);
												BgL_l4444z00_1752 = BgL_l4444z00_5628;
												goto BgL_zc3anonymousza34839ze3z83_1753;
											}
										}
									else
										{	/* SawMill/regalloc.scm 325 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 324 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 330 */
						bool_t BgL_testz00_5630;

						if (PAIRP(BgL_a0z00_1722))
							{	/* SawMill/regalloc.scm 330 */
								bool_t BgL_testz00_5633;

								{	/* SawMill/regalloc.scm 330 */
									obj_t BgL_auxz00_5634;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_5635;

										BgL_auxz00_5635 = (BgL_rtl_insz00_bglt) (BgL_oz00_1715);
										BgL_auxz00_5634 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5635))->
											BgL_argsz00);
									}
									BgL_testz00_5633 = PAIRP(BgL_auxz00_5634);
								}
								if (BgL_testz00_5633)
									{	/* SawMill/regalloc.scm 330 */
										obj_t BgL_arg4856z00_1776;

										{	/* SawMill/regalloc.scm 330 */
											obj_t BgL_pairz00_3663;

											{
												BgL_rtl_insz00_bglt BgL_auxz00_5639;

												BgL_auxz00_5639 = (BgL_rtl_insz00_bglt) (BgL_oz00_1715);
												BgL_pairz00_3663 =
													(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5639))->
													BgL_argsz00);
											}
											BgL_arg4856z00_1776 = CAR(BgL_pairz00_3663);
										}
										BgL_testz00_5630 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg4856z00_1776,
											BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
									}
								else
									{	/* SawMill/regalloc.scm 330 */
										BgL_testz00_5630 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/regalloc.scm 330 */
								BgL_testz00_5630 = ((bool_t) 0);
							}
						if (BgL_testz00_5630)
							{	/* SawMill/regalloc.scm 331 */
								obj_t BgL_g4449z00_1763;

								BgL_g4449z00_1763 =
									(((BgL_backendz00_bglt) CREF(BgL_backz00_4892))->
									BgL_registersz00);
								{
									obj_t BgL_l4447z00_1765;

									BgL_l4447z00_1765 = BgL_g4449z00_1763;
								BgL_zc3anonymousza34848ze3z83_1766:
									if (PAIRP(BgL_l4447z00_1765))
										{	/* SawMill/regalloc.scm 331 */
											{	/* SawMill/regalloc.scm 332 */
												obj_t BgL_rz00_1768;

												BgL_rz00_1768 = CAR(BgL_l4447z00_1765);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_1768, BgL_a0z00_1722)))
													{	/* SawMill/regalloc.scm 332 */
														BFALSE;
													}
												else
													{	/* SawMill/regalloc.scm 333 */
														obj_t BgL_arg4851z00_1770;

														{	/* SawMill/regalloc.scm 333 */
															obj_t BgL_pairz00_3669;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_5651;

																BgL_auxz00_5651 =
																	(BgL_rtl_insz00_bglt) (BgL_oz00_1715);
																BgL_pairz00_3669 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_5651))->BgL_argsz00);
															}
															BgL_arg4851z00_1770 = CAR(BgL_pairz00_3669);
														}
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_rz00_1768, BgL_arg4851z00_1770);
													}
											}
											{
												obj_t BgL_l4447z00_5656;

												BgL_l4447z00_5656 = CDR(BgL_l4447z00_1765);
												BgL_l4447z00_1765 = BgL_l4447z00_5656;
												goto BgL_zc3anonymousza34848ze3z83_1766;
											}
										}
									else
										{	/* SawMill/regalloc.scm 331 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 330 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 336 */
						bool_t BgL_testz00_5658;

						if (PAIRP(BgL_a1z00_1723))
							{	/* SawMill/regalloc.scm 337 */
								bool_t BgL_testz00_5661;

								{	/* SawMill/regalloc.scm 337 */
									obj_t BgL_auxz00_5662;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_5663;

										BgL_auxz00_5663 = (BgL_rtl_insz00_bglt) (BgL_oz00_1715);
										BgL_auxz00_5662 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5663))->
											BgL_argsz00);
									}
									BgL_testz00_5661 = PAIRP(BgL_auxz00_5662);
								}
								if (BgL_testz00_5661)
									{	/* SawMill/regalloc.scm 337 */
										bool_t BgL_testz00_5667;

										{	/* SawMill/regalloc.scm 337 */
											obj_t BgL_auxz00_5668;

											{	/* SawMill/regalloc.scm 337 */
												obj_t BgL_pairz00_3675;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_5669;

													BgL_auxz00_5669 =
														(BgL_rtl_insz00_bglt) (BgL_oz00_1715);
													BgL_pairz00_3675 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5669))->
														BgL_argsz00);
												}
												BgL_auxz00_5668 = CDR(BgL_pairz00_3675);
											}
											BgL_testz00_5667 = PAIRP(BgL_auxz00_5668);
										}
										if (BgL_testz00_5667)
											{	/* SawMill/regalloc.scm 338 */
												obj_t BgL_arg4869z00_1794;

												{	/* SawMill/regalloc.scm 338 */
													obj_t BgL_pairz00_3678;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_5674;

														BgL_auxz00_5674 =
															(BgL_rtl_insz00_bglt) (BgL_oz00_1715);
														BgL_pairz00_3678 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5674))->
															BgL_argsz00);
													}
													BgL_arg4869z00_1794 = CAR(CDR(BgL_pairz00_3678));
												}
												BgL_testz00_5658 =
													BGl_iszd2azf3z21zz__objectz00(BgL_arg4869z00_1794,
													BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
											}
										else
											{	/* SawMill/regalloc.scm 337 */
												BgL_testz00_5658 = ((bool_t) 0);
											}
									}
								else
									{	/* SawMill/regalloc.scm 337 */
										BgL_testz00_5658 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/regalloc.scm 336 */
								BgL_testz00_5658 = ((bool_t) 0);
							}
						if (BgL_testz00_5658)
							{	/* SawMill/regalloc.scm 339 */
								obj_t BgL_g4452z00_1780;

								BgL_g4452z00_1780 =
									(((BgL_backendz00_bglt) CREF(BgL_backz00_4892))->
									BgL_registersz00);
								{
									obj_t BgL_l4450z00_1782;

									BgL_l4450z00_1782 = BgL_g4452z00_1780;
								BgL_zc3anonymousza34860ze3z83_1783:
									if (PAIRP(BgL_l4450z00_1782))
										{	/* SawMill/regalloc.scm 339 */
											{	/* SawMill/regalloc.scm 340 */
												obj_t BgL_rz00_1785;

												BgL_rz00_1785 = CAR(BgL_l4450z00_1782);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_1785, BgL_a1z00_1723)))
													{	/* SawMill/regalloc.scm 340 */
														BFALSE;
													}
												else
													{	/* SawMill/regalloc.scm 341 */
														obj_t BgL_arg4863z00_1787;

														{	/* SawMill/regalloc.scm 341 */
															obj_t BgL_pairz00_3687;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_5687;

																BgL_auxz00_5687 =
																	(BgL_rtl_insz00_bglt) (BgL_oz00_1715);
																BgL_pairz00_3687 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_5687))->BgL_argsz00);
															}
															BgL_arg4863z00_1787 = CAR(CDR(BgL_pairz00_3687));
														}
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_rz00_1785, BgL_arg4863z00_1787);
													}
											}
											{
												obj_t BgL_l4450z00_5693;

												BgL_l4450z00_5693 = CDR(BgL_l4450z00_1782);
												BgL_l4450z00_1782 = BgL_l4450z00_5693;
												goto BgL_zc3anonymousza34860ze3z83_1783;
											}
										}
									else
										{	/* SawMill/regalloc.scm 339 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 336 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 344 */
						obj_t BgL_g4455z00_1799;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_5695;

							BgL_auxz00_5695 = (BgL_rtl_insz00_bglt) (BgL_oz00_1715);
							BgL_g4455z00_1799 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_5695))->BgL_argsz00);
						}
						{
							obj_t BgL_l4453z00_1801;

							BgL_l4453z00_1801 = BgL_g4455z00_1799;
						BgL_zc3anonymousza34874ze3z83_1802:
							if (PAIRP(BgL_l4453z00_1801))
								{	/* SawMill/regalloc.scm 344 */
									{	/* SawMill/regalloc.scm 345 */
										obj_t BgL_az00_1804;

										BgL_az00_1804 = CAR(BgL_l4453z00_1801);
										if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1804,
												BGl_rtl_insz00zzsaw_defsz00))
											{	/* SawMill/regalloc.scm 345 */
												BGl_inszd2hardwarezd2interferencez12z12zzsaw_registerzd2allocationzd2
													(BgL_backz00_4892,
													(BgL_rtl_inszf2razf2_bglt) ((BgL_rtl_insz00_bglt)
														(BgL_az00_1804)), BgL_inz00_1716, BgL_outz00_1717);
											}
										else
											{	/* SawMill/regalloc.scm 345 */
												((bool_t) 0);
											}
									}
									{
										obj_t BgL_l4453z00_5706;

										BgL_l4453z00_5706 = CDR(BgL_l4453z00_1801);
										BgL_l4453z00_1801 = BgL_l4453z00_5706;
										goto BgL_zc3anonymousza34874ze3z83_1802;
									}
								}
							else
								{	/* SawMill/regalloc.scm 344 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_l4456z00_1809;

						BgL_l4456z00_1809 = BgL_spillz00_1720;
					BgL_zc3anonymousza34878ze3z83_1810:
						if (PAIRP(BgL_l4456z00_1809))
							{	/* SawMill/regalloc.scm 348 */
								{	/* SawMill/regalloc.scm 349 */
									obj_t BgL_rz00_1812;

									BgL_rz00_1812 = CAR(BgL_l4456z00_1809);
									{	/* SawMill/regalloc.scm 349 */
										obj_t BgL_arg4880z00_1813;

										{
											obj_t BgL_auxz00_5711;

											{	/* SawMill/regalloc.scm 349 */
												BgL_objectz00_bglt BgL_auxz00_5712;

												BgL_auxz00_5712 = (BgL_objectz00_bglt) (BgL_oz00_1715);
												BgL_auxz00_5711 = BGL_OBJECT_WIDENING(BgL_auxz00_5712);
											}
											BgL_arg4880z00_1813 =
												(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5711))->
												BgL_spillz00);
										}
										BGl_regsetzd2addz12zc0zzsaw_regsetz00(
											(BgL_regsetz00_bglt) (BgL_arg4880z00_1813),
											(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1812));
									}
								}
								{
									obj_t BgL_l4456z00_5719;

									BgL_l4456z00_5719 = CDR(BgL_l4456z00_1809);
									BgL_l4456z00_1809 = BgL_l4456z00_5719;
									goto BgL_zc3anonymousza34878ze3z83_1810;
								}
							}
						else
							{	/* SawMill/regalloc.scm 348 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}
	}



/* <anonymous:4834> */
	obj_t BGl_zc3anonymousza34834ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4729, obj_t BgL_r1z00_4731)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 317 */
			{	/* SawMill/regalloc.scm 318 */
				obj_t BgL_resetz00_4730;

				BgL_resetz00_4730 = PROCEDURE_REF(BgL_envz00_4729, (int) (((long) 0)));
				{
					obj_t BgL_r1z00_1737;

					{	/* SawMill/regalloc.scm 318 */
						bool_t BgL_auxz00_5723;

						BgL_r1z00_1737 = BgL_r1z00_4731;
						{
							obj_t BgL_l4442z00_1740;

							BgL_l4442z00_1740 = BgL_resetz00_4730;
						BgL_zc3anonymousza34835ze3z83_1741:
							if (PAIRP(BgL_l4442z00_1740))
								{	/* SawMill/regalloc.scm 318 */
									BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
										(BgL_r1z00_1737, CAR(BgL_l4442z00_1740));
									{
										obj_t BgL_l4442z00_5728;

										BgL_l4442z00_5728 = CDR(BgL_l4442z00_1740);
										BgL_l4442z00_1740 = BgL_l4442z00_5728;
										goto BgL_zc3anonymousza34835ze3z83_1741;
									}
								}
							else
								{	/* SawMill/regalloc.scm 318 */
									BgL_auxz00_5723 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_5723);
					}
				}
			}
		}
	}



/* <anonymous:4829> */
	obj_t BGl_zc3anonymousza34829ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4732, obj_t BgL_r1z00_4734)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 313 */
			{	/* SawMill/regalloc.scm 314 */
				obj_t BgL_resetz00_4733;

				BgL_resetz00_4733 = PROCEDURE_REF(BgL_envz00_4732, (int) (((long) 0)));
				{
					obj_t BgL_r1z00_1726;

					{	/* SawMill/regalloc.scm 314 */
						bool_t BgL_auxz00_5733;

						BgL_r1z00_1726 = BgL_r1z00_4734;
						{
							obj_t BgL_l4440z00_1729;

							BgL_l4440z00_1729 = BgL_resetz00_4733;
						BgL_zc3anonymousza34830ze3z83_1730:
							if (PAIRP(BgL_l4440z00_1729))
								{	/* SawMill/regalloc.scm 314 */
									BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
										(BgL_r1z00_1726, CAR(BgL_l4440z00_1729));
									{
										obj_t BgL_l4440z00_5738;

										BgL_l4440z00_5738 = CDR(BgL_l4440z00_1729);
										BgL_l4440z00_1729 = BgL_l4440z00_5738;
										goto BgL_zc3anonymousza34830ze3z83_1730;
									}
								}
							else
								{	/* SawMill/regalloc.scm 314 */
									BgL_auxz00_5733 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_5733);
					}
				}
			}
		}
	}



/* interference! */
	obj_t BGl_interferencez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_29, obj_t BgL_regsz00_30)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 385 */
			{	/* SawMill/regalloc.scm 386 */
				obj_t BgL_list4888z00_1831;

				BgL_list4888z00_1831 =
					MAKE_PAIR(BGl_string5600z00zzsaw_registerzd2allocationzd2, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list4888z00_1831);
			}
			{
				obj_t BgL_l4469z00_1833;

				BgL_l4469z00_1833 = BgL_blocksz00_29;
			BgL_zc3anonymousza34889ze3z83_1834:
				if (PAIRP(BgL_l4469z00_1833))
					{	/* SawMill/regalloc.scm 388 */
						{	/* SawMill/regalloc.scm 389 */
							obj_t BgL_bz00_1836;

							BgL_bz00_1836 = CAR(BgL_l4469z00_1833);
							{	/* SawMill/regalloc.scm 389 */
								obj_t BgL_g4468z00_1837;

								{
									BgL_blockz00_bglt BgL_auxz00_5747;

									BgL_auxz00_5747 = (BgL_blockz00_bglt) (BgL_bz00_1836);
									BgL_g4468z00_1837 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_5747))->BgL_firstz00);
								}
								{
									obj_t BgL_l4466z00_1839;

									BgL_l4466z00_1839 = BgL_g4468z00_1837;
								BgL_zc3anonymousza34891ze3z83_1840:
									if (PAIRP(BgL_l4466z00_1839))
										{	/* SawMill/regalloc.scm 389 */
											{	/* SawMill/regalloc.scm 389 */
												obj_t BgL_iz00_1842;

												BgL_iz00_1842 = CAR(BgL_l4466z00_1839);
												BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2(
													(BgL_rtl_inszf2razf2_bglt) (BgL_iz00_1842));
											}
											{
												obj_t BgL_l4466z00_5755;

												BgL_l4466z00_5755 = CDR(BgL_l4466z00_1839);
												BgL_l4466z00_1839 = BgL_l4466z00_5755;
												goto BgL_zc3anonymousza34891ze3z83_1840;
											}
										}
									else
										{	/* SawMill/regalloc.scm 389 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l4469z00_5757;

							BgL_l4469z00_5757 = CDR(BgL_l4469z00_1833);
							BgL_l4469z00_1833 = BgL_l4469z00_5757;
							goto BgL_zc3anonymousza34889ze3z83_1834;
						}
					}
				else
					{	/* SawMill/regalloc.scm 388 */
						((bool_t) 1);
					}
			}
			{	/* SawMill/regalloc.scm 391 */
				obj_t BgL_list4895z00_1847;

				BgL_list4895z00_1847 =
					MAKE_PAIR(BGl_string5601z00zzsaw_registerzd2allocationzd2, BNIL);
				return
					BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
					BgL_list4895z00_1847);
		}}
	}



/* interfere-ins! */
	obj_t
		BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_inszf2razf2_bglt BgL_iz00_31)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 394 */
			{	/* SawMill/regalloc.scm 396 */
				obj_t BgL_arg4897z00_1850;

				{
					obj_t BgL_auxz00_5762;

					{	/* SawMill/regalloc.scm 396 */
						BgL_objectz00_bglt BgL_auxz00_5763;

						BgL_auxz00_5763 = (BgL_objectz00_bglt) (BgL_iz00_31);
						BgL_auxz00_5762 = BGL_OBJECT_WIDENING(BgL_auxz00_5763);
					}
					BgL_arg4897z00_1850 =
						(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5762))->BgL_inz00);
				}
				{	/* SawMill/regalloc.scm 397 */
					obj_t BgL_zc3anonymousza34898ze3z83_4738;

					BgL_zc3anonymousza34898ze3z83_4738 =
						make_fx_procedure
						(BGl_zc3anonymousza34898ze3z83zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34898ze3z83_4738, (int) (((long) 0)),
						(obj_t) (BgL_iz00_31));
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3anonymousza34898ze3z83_4738,
						(BgL_regsetz00_bglt) (BgL_arg4897z00_1850));
			}}
			{	/* SawMill/regalloc.scm 400 */
				obj_t BgL_arg4903z00_1860;

				{
					obj_t BgL_auxz00_5775;

					{	/* SawMill/regalloc.scm 400 */
						BgL_objectz00_bglt BgL_auxz00_5776;

						BgL_auxz00_5776 = (BgL_objectz00_bglt) (BgL_iz00_31);
						BgL_auxz00_5775 = BGL_OBJECT_WIDENING(BgL_auxz00_5776);
					}
					BgL_arg4903z00_1860 =
						(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5775))->BgL_outz00);
				}
				{	/* SawMill/regalloc.scm 401 */
					obj_t BgL_zc3anonymousza34904ze3z83_4736;

					BgL_zc3anonymousza34904ze3z83_4736 =
						make_fx_procedure
						(BGl_zc3anonymousza34904ze3z83zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34904ze3z83_4736, (int) (((long) 0)),
						(obj_t) (BgL_iz00_31));
					return
						BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3anonymousza34904ze3z83_4736,
						(BgL_regsetz00_bglt) (BgL_arg4903z00_1860));
				}
			}
		}
	}



/* <anonymous:4904> */
	obj_t BGl_zc3anonymousza34904ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4739, obj_t BgL_r1z00_4741)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 400 */
			{	/* SawMill/regalloc.scm 401 */
				obj_t BgL_instance4320z00_4740;

				BgL_instance4320z00_4740 =
					PROCEDURE_REF(BgL_envz00_4739, (int) (((long) 0)));
				{
					obj_t BgL_r1z00_1861;

					BgL_r1z00_1861 = BgL_r1z00_4741;
					{	/* SawMill/regalloc.scm 401 */
						obj_t BgL_arg4906z00_1864;

						{	/* SawMill/regalloc.scm 401 */
							BgL_rtl_inszf2razf2_bglt BgL_obj4174z00_3717;

							BgL_obj4174z00_3717 =
								(BgL_rtl_inszf2razf2_bglt) (BgL_instance4320z00_4740);
							{
								obj_t BgL_auxz00_5791;

								{	/* SawMill/regalloc.scm 401 */
									BgL_objectz00_bglt BgL_auxz00_5792;

									BgL_auxz00_5792 = (BgL_objectz00_bglt) (BgL_obj4174z00_3717);
									BgL_auxz00_5791 = BGL_OBJECT_WIDENING(BgL_auxz00_5792);
								}
								BgL_arg4906z00_1864 =
									(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5791))->
									BgL_outz00);
						}}
						{	/* SawMill/regalloc.scm 401 */
							obj_t BgL_zc3anonymousza34907ze3z83_4735;

							BgL_zc3anonymousza34907ze3z83_4735 =
								make_fx_procedure
								(BGl_zc3anonymousza34907ze3z83zzsaw_registerzd2allocationzd2,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza34907ze3z83_4735,
								(int) (((long) 0)), BgL_r1z00_1861);
							return
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
								(BgL_zc3anonymousza34907ze3z83_4735,
								(BgL_regsetz00_bglt) (BgL_arg4906z00_1864));
						}
					}
				}
			}
		}
	}



/* <anonymous:4907> */
	obj_t BGl_zc3anonymousza34907ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4742, obj_t BgL_r2z00_4744)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 401 */
			{	/* SawMill/regalloc.scm 401 */
				obj_t BgL_r1z00_4743;

				BgL_r1z00_4743 = PROCEDURE_REF(BgL_envz00_4742, (int) (((long) 0)));
				{
					obj_t BgL_r2z00_1865;

					BgL_r2z00_1865 = BgL_r2z00_4744;
					return
						BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
						(BgL_r1z00_4743, BgL_r2z00_1865);
				}
			}
		}
	}



/* <anonymous:4898> */
	obj_t BGl_zc3anonymousza34898ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4745, obj_t BgL_r1z00_4747)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 396 */
			{	/* SawMill/regalloc.scm 397 */
				obj_t BgL_instance4320z00_4746;

				BgL_instance4320z00_4746 =
					PROCEDURE_REF(BgL_envz00_4745, (int) (((long) 0)));
				{
					obj_t BgL_r1z00_1851;

					BgL_r1z00_1851 = BgL_r1z00_4747;
					{	/* SawMill/regalloc.scm 397 */
						obj_t BgL_arg4900z00_1854;

						{	/* SawMill/regalloc.scm 397 */
							BgL_rtl_inszf2razf2_bglt BgL_obj4177z00_3715;

							BgL_obj4177z00_3715 =
								(BgL_rtl_inszf2razf2_bglt) (BgL_instance4320z00_4746);
							{
								obj_t BgL_auxz00_5809;

								{	/* SawMill/regalloc.scm 397 */
									BgL_objectz00_bglt BgL_auxz00_5810;

									BgL_auxz00_5810 = (BgL_objectz00_bglt) (BgL_obj4177z00_3715);
									BgL_auxz00_5809 = BGL_OBJECT_WIDENING(BgL_auxz00_5810);
								}
								BgL_arg4900z00_1854 =
									(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_5809))->
									BgL_inz00);
						}}
						{	/* SawMill/regalloc.scm 397 */
							obj_t BgL_zc3anonymousza34901ze3z83_4737;

							BgL_zc3anonymousza34901ze3z83_4737 =
								make_fx_procedure
								(BGl_zc3anonymousza34901ze3z83zzsaw_registerzd2allocationzd2,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza34901ze3z83_4737,
								(int) (((long) 0)), BgL_r1z00_1851);
							return
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
								(BgL_zc3anonymousza34901ze3z83_4737,
								(BgL_regsetz00_bglt) (BgL_arg4900z00_1854));
						}
					}
				}
			}
		}
	}



/* <anonymous:4901> */
	obj_t BGl_zc3anonymousza34901ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4748, obj_t BgL_r2z00_4750)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 397 */
			{	/* SawMill/regalloc.scm 397 */
				obj_t BgL_r1z00_4749;

				BgL_r1z00_4749 = PROCEDURE_REF(BgL_envz00_4748, (int) (((long) 0)));
				{
					obj_t BgL_r2z00_1855;

					BgL_r2z00_1855 = BgL_r2z00_4750;
					return
						BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
						(BgL_r1z00_4749, BgL_r2z00_1855);
				}
			}
		}
	}



/* interfere-reg! */
	BGL_EXPORTED_DEF obj_t
		BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t BgL_r1z00_32,
		obj_t BgL_r2z00_33)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 406 */
			{	/* SawMill/regalloc.scm 407 */
				bool_t BgL_testz00_5824;

				if ((BgL_r1z00_32 == BgL_r2z00_33))
					{	/* SawMill/regalloc.scm 407 */
						BgL_testz00_5824 = ((bool_t) 1);
					}
				else
					{	/* SawMill/regalloc.scm 407 */
						obj_t BgL_arg4912z00_1873;

						{	/* SawMill/regalloc.scm 407 */
							BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3718;

							BgL_obj4257z00_3718 = (BgL_rtl_regzf2razf2_bglt) (BgL_r1z00_32);
							{
								obj_t BgL_auxz00_5828;

								{	/* SawMill/regalloc.scm 407 */
									BgL_objectz00_bglt BgL_auxz00_5829;

									BgL_auxz00_5829 = (BgL_objectz00_bglt) (BgL_obj4257z00_3718);
									BgL_auxz00_5828 = BGL_OBJECT_WIDENING(BgL_auxz00_5829);
								}
								BgL_arg4912z00_1873 =
									(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5828))->
									BgL_interferez00);
							}
						}
						BgL_testz00_5824 =
							BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
							(BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_33),
							(BgL_regsetz00_bglt) (BgL_arg4912z00_1873));
					}
				if (BgL_testz00_5824)
					{	/* SawMill/regalloc.scm 407 */
						return BFALSE;
					}
				else
					{	/* SawMill/regalloc.scm 407 */
						{	/* SawMill/regalloc.scm 408 */
							obj_t BgL_arg4909z00_1870;

							{	/* SawMill/regalloc.scm 408 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3719;

								BgL_obj4257z00_3719 = (BgL_rtl_regzf2razf2_bglt) (BgL_r1z00_32);
								{
									obj_t BgL_auxz00_5837;

									{	/* SawMill/regalloc.scm 408 */
										BgL_objectz00_bglt BgL_auxz00_5838;

										BgL_auxz00_5838 =
											(BgL_objectz00_bglt) (BgL_obj4257z00_3719);
										BgL_auxz00_5837 = BGL_OBJECT_WIDENING(BgL_auxz00_5838);
									}
									BgL_arg4909z00_1870 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5837))->
										BgL_interferez00);
								}
							}
							BGl_regsetzd2addz12zc0zzsaw_regsetz00(
								(BgL_regsetz00_bglt) (BgL_arg4909z00_1870),
								(BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_33));
						}
						{	/* SawMill/regalloc.scm 409 */
							obj_t BgL_arg4910z00_1871;

							{	/* SawMill/regalloc.scm 409 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3720;

								BgL_obj4257z00_3720 = (BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_33);
								{
									obj_t BgL_auxz00_5846;

									{	/* SawMill/regalloc.scm 409 */
										BgL_objectz00_bglt BgL_auxz00_5847;

										BgL_auxz00_5847 =
											(BgL_objectz00_bglt) (BgL_obj4257z00_3720);
										BgL_auxz00_5846 = BGL_OBJECT_WIDENING(BgL_auxz00_5847);
									}
									BgL_arg4910z00_1871 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5846))->
										BgL_interferez00);
								}
							}
							return
								BBOOL(BGl_regsetzd2addz12zc0zzsaw_regsetz00(
									(BgL_regsetz00_bglt) (BgL_arg4910z00_1871),
									(BgL_rtl_regzf2razf2_bglt) (BgL_r1z00_32)));
						}
					}
			}
		}
	}



/* _interfere-reg! */
	obj_t BGl__interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4751, obj_t BgL_r1z00_4752, obj_t BgL_r2z00_4753)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 406 */
			return
				BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2(BgL_r1z00_4752,
				BgL_r2z00_4753);
		}
	}



/* cleanup-dest! */
	obj_t BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_34)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 414 */
			{	/* SawMill/regalloc.scm 415 */
				obj_t BgL_list4913z00_1874;

				BgL_list4913z00_1874 =
					MAKE_PAIR(BGl_string5602z00zzsaw_registerzd2allocationzd2, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list4913z00_1874);
			}
			{	/* SawMill/regalloc.scm 416 */
				long BgL_nz00_1875;

				BgL_nz00_1875 = ((long) 0);
				{
					obj_t BgL_l4474z00_1877;

					BgL_l4474z00_1877 = BgL_blocksz00_34;
				BgL_zc3anonymousza34914ze3z83_1878:
					if (PAIRP(BgL_l4474z00_1877))
						{	/* SawMill/regalloc.scm 417 */
							{	/* SawMill/regalloc.scm 418 */
								obj_t BgL_bz00_1880;

								BgL_bz00_1880 = CAR(BgL_l4474z00_1877);
								{	/* SawMill/regalloc.scm 418 */
									obj_t BgL_g4473z00_1881;

									{
										BgL_blockz00_bglt BgL_auxz00_5862;

										BgL_auxz00_5862 = (BgL_blockz00_bglt) (BgL_bz00_1880);
										BgL_g4473z00_1881 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_5862))->
											BgL_firstz00);
									}
									{
										obj_t BgL_l4471z00_1883;

										BgL_l4471z00_1883 = BgL_g4473z00_1881;
									BgL_zc3anonymousza34916ze3z83_1884:
										if (PAIRP(BgL_l4471z00_1883))
											{	/* SawMill/regalloc.scm 424 */
												{	/* SawMill/regalloc.scm 419 */
													obj_t BgL_iz00_1886;

													BgL_iz00_1886 = CAR(BgL_l4471z00_1883);
													{	/* SawMill/regalloc.scm 420 */
														bool_t BgL_testz00_5868;

														{	/* SawMill/regalloc.scm 420 */
															obj_t BgL_arg4922z00_1892;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_5869;

																BgL_auxz00_5869 =
																	(BgL_rtl_insz00_bglt) (BgL_iz00_1886);
																BgL_arg4922z00_1892 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_5869))->BgL_destz00);
															}
															BgL_testz00_5868 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_arg4922z00_1892,
																BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
														}
														if (BgL_testz00_5868)
															{	/* SawMill/regalloc.scm 421 */
																bool_t BgL_testz00_5873;

																{	/* SawMill/regalloc.scm 421 */
																	obj_t BgL_arg4920z00_1890;

																	obj_t BgL_arg4921z00_1891;

																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_5874;

																		BgL_auxz00_5874 =
																			(BgL_rtl_insz00_bglt) (BgL_iz00_1886);
																		BgL_arg4920z00_1890 =
																			(((BgL_rtl_insz00_bglt)
																				CREF(BgL_auxz00_5874))->BgL_destz00);
																	}
																	{	/* SawMill/regalloc.scm 421 */
																		BgL_rtl_inszf2razf2_bglt
																			BgL_obj4174z00_3729;
																		BgL_obj4174z00_3729 =
																			(BgL_rtl_inszf2razf2_bglt)
																			(BgL_iz00_1886);
																		{
																			obj_t BgL_auxz00_5878;

																			{	/* SawMill/regalloc.scm 421 */
																				BgL_objectz00_bglt BgL_auxz00_5879;

																				BgL_auxz00_5879 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4174z00_3729);
																				BgL_auxz00_5878 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_5879);
																			}
																			BgL_arg4921z00_1891 =
																				(((BgL_rtl_inszf2razf2_bglt)
																					CREF(BgL_auxz00_5878))->BgL_outz00);
																		}
																	}
																	BgL_testz00_5873 =
																		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
																		(BgL_rtl_regzf2razf2_bglt)
																		(BgL_arg4920z00_1890),
																		(BgL_regsetz00_bglt) (BgL_arg4921z00_1891));
																}
																if (BgL_testz00_5873)
																	{	/* SawMill/regalloc.scm 421 */
																		BFALSE;
																	}
																else
																	{	/* SawMill/regalloc.scm 421 */
																		BgL_nz00_1875 =
																			(BgL_nz00_1875 + ((long) 1));
																		{
																			BgL_rtl_insz00_bglt BgL_auxz00_5887;

																			BgL_auxz00_5887 =
																				(BgL_rtl_insz00_bglt) (BgL_iz00_1886);
																			((((BgL_rtl_insz00_bglt)
																						CREF(BgL_auxz00_5887))->
																					BgL_destz00) =
																				((obj_t) BFALSE), BUNSPEC);
															}}}
														else
															{	/* SawMill/regalloc.scm 420 */
																BFALSE;
															}
													}
												}
												{
													obj_t BgL_l4471z00_5890;

													BgL_l4471z00_5890 = CDR(BgL_l4471z00_1883);
													BgL_l4471z00_1883 = BgL_l4471z00_5890;
													goto BgL_zc3anonymousza34916ze3z83_1884;
												}
											}
										else
											{	/* SawMill/regalloc.scm 424 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l4474z00_5892;

								BgL_l4474z00_5892 = CDR(BgL_l4474z00_1877);
								BgL_l4474z00_1877 = BgL_l4474z00_5892;
								goto BgL_zc3anonymousza34914ze3z83_1878;
							}
						}
					else
						{	/* SawMill/regalloc.scm 417 */
							((bool_t) 1);
						}
				}
				{	/* SawMill/regalloc.scm 426 */
					obj_t BgL_list4925z00_1897;

					{	/* SawMill/regalloc.scm 426 */
						obj_t BgL_arg4926z00_1898;

						BgL_arg4926z00_1898 =
							MAKE_PAIR(BGl_string5592z00zzsaw_registerzd2allocationzd2, BNIL);
						BgL_list4925z00_1897 =
							MAKE_PAIR(BINT(BgL_nz00_1875), BgL_arg4926z00_1898);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list4925z00_1897);
		}}}
	}



/* register-coloring */
	obj_t BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_35, obj_t BgL_hregsz00_36, obj_t BgL_cregsz00_37)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 431 */
			{	/* SawMill/regalloc.scm 433 */
				obj_t BgL_g4478z00_1899;

				{	/* SawMill/regalloc.scm 436 */
					obj_t BgL_list4932z00_1910;

					{	/* SawMill/regalloc.scm 436 */
						obj_t BgL_arg4933z00_1911;

						{	/* SawMill/regalloc.scm 436 */
							obj_t BgL_arg4934z00_1912;

							BgL_arg4934z00_1912 = MAKE_PAIR(BgL_cregsz00_37, BNIL);
							BgL_arg4933z00_1911 =
								MAKE_PAIR(BgL_hregsz00_36, BgL_arg4934z00_1912);
						}
						BgL_list4932z00_1910 =
							MAKE_PAIR(BgL_pregsz00_35, BgL_arg4933z00_1911);
					}
					BgL_g4478z00_1899 =
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list4932z00_1910);
				}
				{
					obj_t BgL_l4476z00_1901;

					BgL_l4476z00_1901 = BgL_g4478z00_1899;
				BgL_zc3anonymousza34927ze3z83_1902:
					if (PAIRP(BgL_l4476z00_1901))
						{	/* SawMill/regalloc.scm 436 */
							{	/* SawMill/regalloc.scm 434 */
								obj_t BgL_rz00_1904;

								BgL_rz00_1904 = CAR(BgL_l4476z00_1901);
								{	/* SawMill/regalloc.scm 435 */
									BgL_regsetz00_bglt BgL_arg4929z00_1906;

									{	/* SawMill/regalloc.scm 435 */
										obj_t BgL_arg4930z00_1907;

										{	/* SawMill/regalloc.scm 435 */
											BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3738;

											BgL_obj4257z00_3738 =
												(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1904);
											{
												obj_t BgL_auxz00_5907;

												{	/* SawMill/regalloc.scm 435 */
													BgL_objectz00_bglt BgL_auxz00_5908;

													BgL_auxz00_5908 =
														(BgL_objectz00_bglt) (BgL_obj4257z00_3738);
													BgL_auxz00_5907 =
														BGL_OBJECT_WIDENING(BgL_auxz00_5908);
												}
												BgL_arg4930z00_1907 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5907))->
													BgL_interferez00);
											}
										}
										BgL_arg4929z00_1906 =
											BGl_duplicatezd2regsetzd2zzsaw_regsetz00(
											(BgL_regsetz00_bglt) (BgL_arg4930z00_1907));
									}
									{	/* SawMill/regalloc.scm 435 */
										BgL_rtl_regzf2razf2_bglt BgL_obj4262z00_3739;

										obj_t BgL_val4261z00_3740;

										BgL_obj4262z00_3739 =
											(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1904);
										BgL_val4261z00_3740 = (obj_t) (BgL_arg4929z00_1906);
										{
											obj_t BgL_auxz00_5916;

											{	/* SawMill/regalloc.scm 435 */
												BgL_objectz00_bglt BgL_auxz00_5917;

												BgL_auxz00_5917 =
													(BgL_objectz00_bglt) (BgL_obj4262z00_3739);
												BgL_auxz00_5916 = BGL_OBJECT_WIDENING(BgL_auxz00_5917);
											}
											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5916))->
													BgL_interfere2z00) =
												((obj_t) BgL_val4261z00_3740), BUNSPEC);
										}
									}
								}
							}
							{
								obj_t BgL_l4476z00_5921;

								BgL_l4476z00_5921 = CDR(BgL_l4476z00_1901);
								BgL_l4476z00_1901 = BgL_l4476z00_5921;
								goto BgL_zc3anonymousza34927ze3z83_1902;
							}
						}
					else
						{	/* SawMill/regalloc.scm 436 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/regalloc.scm 438 */
				obj_t BgL_cregsz00_1913;

				BgL_cregsz00_1913 =
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc5603z00zzsaw_registerzd2allocationzd2, BgL_cregsz00_37);
				if (PAIRP(BgL_cregsz00_1913))
					{	/* SawMill/regalloc.scm 439 */
						if (NULLP(BgL_hregsz00_36))
							{	/* SawMill/regalloc.scm 441 */
								return
									BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2
									(BgL_pregsz00_35, BgL_cregsz00_1913);
							}
						else
							{	/* SawMill/regalloc.scm 441 */
								return
									BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2
									(BgL_pregsz00_35, BgL_hregsz00_36, BgL_cregsz00_1913);
							}
					}
				else
					{	/* SawMill/regalloc.scm 439 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:4940> */
	obj_t BGl_zc3anonymousza34940ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4755, obj_t BgL_rz00_4756)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 438 */
			{
				obj_t BgL_rz00_1918;

				{	/* SawMill/regalloc.scm 438 */
					bool_t BgL_auxz00_5930;

					BgL_rz00_1918 = BgL_rz00_4756;
					{	/* SawMill/regalloc.scm 438 */
						obj_t BgL_auxz00_5931;

						{	/* SawMill/regalloc.scm 438 */
							BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3743;

							BgL_obj4248z00_3743 = (BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1918);
							{
								obj_t BgL_auxz00_5933;

								{	/* SawMill/regalloc.scm 438 */
									BgL_objectz00_bglt BgL_auxz00_5934;

									BgL_auxz00_5934 = (BgL_objectz00_bglt) (BgL_obj4248z00_3743);
									BgL_auxz00_5933 = BGL_OBJECT_WIDENING(BgL_auxz00_5934);
								}
								BgL_auxz00_5931 =
									(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5933))->
									BgL_colorz00);
							}
						}
						BgL_auxz00_5930 = (BgL_auxz00_5931 == BFALSE);
					}
					return BBOOL(BgL_auxz00_5930);
				}
			}
		}
	}



/* register-stack-coloring */
	obj_t BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_38, obj_t BgL_cregsz00_39)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 449 */
			{	/* SawMill/regalloc.scm 475 */
				obj_t BgL_colorsz00_1923;

				{	/* SawMill/regalloc.scm 476 */
					long BgL_arg4986z00_2009;

					BgL_arg4986z00_2009 =
						bgl_list_length(bgl_append2(BgL_pregsz00_38, BgL_cregsz00_39));
					BgL_colorsz00_1923 = make_vector((int) (BgL_arg4986z00_2009), BFALSE);
				}
				{
					long BgL_minz00_2030;

					obj_t BgL_stackz00_2031;

					obj_t BgL_interferez00_2011;

					long BgL_maxz00_2012;

					obj_t BgL_registersz00_1970;

					obj_t BgL_siza7eza7_1971;

					{	/* SawMill/regalloc.scm 499 */
						long BgL_nz00_1926;

						BgL_nz00_1926 = ((long) 0);
						{
							obj_t BgL_l4488z00_1928;

							BgL_l4488z00_1928 = BgL_pregsz00_38;
						BgL_zc3anonymousza34942ze3z83_1929:
							if (PAIRP(BgL_l4488z00_1928))
								{	/* SawMill/regalloc.scm 500 */
									{	/* SawMill/regalloc.scm 503 */
										obj_t BgL_rz00_1931;

										BgL_rz00_1931 = CAR(BgL_l4488z00_1928);
										BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
											(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1931));
										{	/* SawMill/regalloc.scm 502 */
											BgL_rtl_regzf2razf2_bglt BgL_obj4250z00_3749;

											obj_t BgL_val4249z00_3750;

											BgL_obj4250z00_3749 =
												(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1931);
											BgL_val4249z00_3750 = BINT(BgL_nz00_1926);
											{
												obj_t BgL_auxz00_5951;

												{	/* SawMill/regalloc.scm 502 */
													BgL_objectz00_bglt BgL_auxz00_5952;

													BgL_auxz00_5952 =
														(BgL_objectz00_bglt) (BgL_obj4250z00_3749);
													BgL_auxz00_5951 =
														BGL_OBJECT_WIDENING(BgL_auxz00_5952);
												}
												((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_5951))->
														BgL_colorz00) =
													((obj_t) BgL_val4249z00_3750), BUNSPEC);
											}
										}
										BgL_nz00_1926 = (BgL_nz00_1926 + ((long) 1));
									}
									{
										obj_t BgL_l4488z00_5957;

										BgL_l4488z00_5957 = CDR(BgL_l4488z00_1928);
										BgL_l4488z00_1928 = BgL_l4488z00_5957;
										goto BgL_zc3anonymousza34942ze3z83_1929;
									}
								}
							else
								{	/* SawMill/regalloc.scm 500 */
									((bool_t) 1);
								}
						}
					}
					{	/* SawMill/regalloc.scm 506 */
						long BgL_minz00_1934;

						obj_t BgL_sregsz00_1935;

						BgL_minz00_1934 = bgl_list_length(BgL_pregsz00_38);
						BgL_sregsz00_1935 =
							BGl_sortz00zz__r4_vectors_6_8z00(BgL_cregsz00_39,
							BGl_proc5604z00zzsaw_registerzd2allocationzd2);
						{
							obj_t BgL_regsz00_1938;

							obj_t BgL_stackz00_1939;

							obj_t BgL_siza7eza7_1940;

							BgL_regsz00_1938 = BgL_sregsz00_1935;
							BgL_stackz00_1939 = BNIL;
							BgL_siza7eza7_1940 = BINT(((long) 0));
						BgL_zc3anonymousza34945ze3z83_1941:
							if (NULLP(BgL_regsz00_1938))
								{	/* SawMill/regalloc.scm 515 */
									long BgL_nz00_1943;

									BgL_minz00_2030 = BgL_minz00_1934;
									BgL_stackz00_2031 = BgL_stackz00_1939;
									{
										obj_t BgL_stackz00_2034;

										long BgL_maxz00_2035;

										BgL_stackz00_2034 = BgL_stackz00_2031;
										BgL_maxz00_2035 = BgL_minz00_2030;
									BgL_zc3anonymousza35001ze3z83_2036:
										if (PAIRP(BgL_stackz00_2034))
											{	/* SawMill/regalloc.scm 494 */
												obj_t BgL_instance4329z00_2038;

												BgL_instance4329z00_2038 = CAR(BgL_stackz00_2034);
												{	/* SawMill/regalloc.scm 495 */
													long BgL_arg5003z00_2039;

													{	/* SawMill/regalloc.scm 495 */
														obj_t BgL_arg5004z00_2040;

														{	/* SawMill/regalloc.scm 495 */
															BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3851;

															BgL_obj4257z00_3851 =
																(BgL_rtl_regzf2razf2_bglt)
																(BgL_instance4329z00_2038);
															{
																obj_t BgL_auxz00_5967;

																{	/* SawMill/regalloc.scm 495 */
																	BgL_objectz00_bglt BgL_auxz00_5968;

																	BgL_auxz00_5968 =
																		(BgL_objectz00_bglt) (BgL_obj4257z00_3851);
																	BgL_auxz00_5967 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_5968);
																}
																BgL_arg5004z00_2040 =
																	(((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_auxz00_5967))->BgL_interferez00);
														}}
														BgL_interferez00_2011 = BgL_arg5004z00_2040;
														BgL_maxz00_2012 = BgL_maxz00_2035;
														BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
															(BgL_colorsz00_1923, BFALSE);
														{	/* SawMill/regalloc.scm 480 */
															obj_t BgL_zc3anonymousza34990ze3z83_4758;

															BgL_zc3anonymousza34990ze3z83_4758 =
																make_fx_procedure
																(BGl_zc3anonymousza34990ze3z83zzsaw_registerzd2allocationzd2,
																(int) (((long) 1)), (int) (((long) 1)));
															PROCEDURE_SET(BgL_zc3anonymousza34990ze3z83_4758,
																(int) (((long) 0)), BgL_colorsz00_1923);
															BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
																(BgL_zc3anonymousza34990ze3z83_4758,
																(BgL_regsetz00_bglt) (BgL_interferez00_2011));
														}
														{	/* SawMill/regalloc.scm 484 */
															bool_t BgL_testz00_5980;

															{	/* SawMill/regalloc.scm 484 */
																int BgL_arg4999z00_2029;

																BgL_arg4999z00_2029 =
																	VECTOR_LENGTH(BgL_colorsz00_1923);
																BgL_testz00_5980 =
																	(
																	(long) (BgL_arg4999z00_2029) ==
																	BgL_maxz00_2012);
															}
															if (BgL_testz00_5980)
																{	/* SawMill/regalloc.scm 484 */
																	BgL_arg5003z00_2039 = BgL_maxz00_2012;
																}
															else
																{
																	long BgL_iz00_2024;

																	BgL_iz00_2024 = ((long) 0);
																BgL_zc3anonymousza34996ze3z83_2025:
																	{	/* SawMill/regalloc.scm 487 */
																		bool_t BgL_testz00_5984;

																		{	/* SawMill/regalloc.scm 487 */
																			int BgL_kz00_3846;

																			BgL_kz00_3846 = (int) (BgL_iz00_2024);
																			BgL_testz00_5984 =
																				CBOOL(VECTOR_REF(BgL_colorsz00_1923,
																					BgL_kz00_3846));
																		}
																		if (BgL_testz00_5984)
																			{
																				long BgL_iz00_5988;

																				BgL_iz00_5988 =
																					(BgL_iz00_2024 + ((long) 1));
																				BgL_iz00_2024 = BgL_iz00_5988;
																				goto BgL_zc3anonymousza34996ze3z83_2025;
																			}
																		else
																			{	/* SawMill/regalloc.scm 487 */
																				BgL_arg5003z00_2039 = BgL_iz00_2024;
																			}
																	}
																}
														}
													}
													{	/* SawMill/regalloc.scm 495 */
														BgL_rtl_regzf2razf2_bglt BgL_obj4250z00_3852;

														obj_t BgL_val4249z00_3853;

														BgL_obj4250z00_3852 =
															(BgL_rtl_regzf2razf2_bglt)
															(BgL_instance4329z00_2038);
														BgL_val4249z00_3853 = BINT(BgL_arg5003z00_2039);
														{
															obj_t BgL_auxz00_5992;

															{	/* SawMill/regalloc.scm 495 */
																BgL_objectz00_bglt BgL_auxz00_5993;

																BgL_auxz00_5993 =
																	(BgL_objectz00_bglt) (BgL_obj4250z00_3852);
																BgL_auxz00_5992 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_5993);
															}
															((((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_auxz00_5992))->BgL_colorz00) =
																((obj_t) BgL_val4249z00_3853), BUNSPEC);
														}
													}
												}
												{	/* SawMill/regalloc.scm 496 */
													obj_t BgL_arg5005z00_2041;

													long BgL_arg5006z00_2042;

													BgL_arg5005z00_2041 = CDR(BgL_stackz00_2034);
													{	/* SawMill/regalloc.scm 496 */
														bool_t BgL_testz00_5998;

														{	/* SawMill/regalloc.scm 496 */
															long BgL_auxz00_5999;

															{	/* SawMill/regalloc.scm 496 */
																BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3855;

																BgL_obj4248z00_3855 =
																	(BgL_rtl_regzf2razf2_bglt)
																	(BgL_instance4329z00_2038);
																{	/* SawMill/regalloc.scm 496 */
																	obj_t BgL_auxz00_6001;

																	{
																		obj_t BgL_auxz00_6002;

																		{	/* SawMill/regalloc.scm 496 */
																			BgL_objectz00_bglt BgL_auxz00_6003;

																			BgL_auxz00_6003 =
																				(BgL_objectz00_bglt)
																				(BgL_obj4248z00_3855);
																			BgL_auxz00_6002 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_6003);
																		}
																		BgL_auxz00_6001 =
																			(((BgL_rtl_regzf2razf2_bglt)
																				CREF(BgL_auxz00_6002))->BgL_colorz00);
																	}
																	BgL_auxz00_5999 =
																		(long) CINT(BgL_auxz00_6001);
															}}
															BgL_testz00_5998 =
																(BgL_auxz00_5999 == BgL_maxz00_2035);
														}
														if (BgL_testz00_5998)
															{	/* SawMill/regalloc.scm 496 */
																BgL_arg5006z00_2042 =
																	(BgL_maxz00_2035 + ((long) 1));
															}
														else
															{	/* SawMill/regalloc.scm 496 */
																BgL_arg5006z00_2042 = BgL_maxz00_2035;
															}
													}
													{
														long BgL_maxz00_6011;

														obj_t BgL_stackz00_6010;

														BgL_stackz00_6010 = BgL_arg5005z00_2041;
														BgL_maxz00_6011 = BgL_arg5006z00_2042;
														BgL_maxz00_2035 = BgL_maxz00_6011;
														BgL_stackz00_2034 = BgL_stackz00_6010;
														goto BgL_zc3anonymousza35001ze3z83_2036;
													}
												}
											}
										else
											{	/* SawMill/regalloc.scm 493 */
												BgL_nz00_1943 = BgL_maxz00_2035;
											}
									}
									{	/* SawMill/regalloc.scm 516 */
										obj_t BgL_arg4950z00_1947;

										BgL_arg4950z00_1947 =
											BINT(
											(bgl_list_length(BgL_pregsz00_38) +
												bgl_list_length(BgL_cregsz00_39)));
										{	/* SawMill/regalloc.scm 516 */
											obj_t BgL_list4953z00_1950;

											{	/* SawMill/regalloc.scm 516 */
												obj_t BgL_arg4954z00_1951;

												{	/* SawMill/regalloc.scm 516 */
													obj_t BgL_arg4955z00_1952;

													{	/* SawMill/regalloc.scm 516 */
														obj_t BgL_arg4956z00_1953;

														{	/* SawMill/regalloc.scm 516 */
															obj_t BgL_arg4957z00_1954;

															{	/* SawMill/regalloc.scm 516 */
																obj_t BgL_arg4958z00_1955;

																BgL_arg4958z00_1955 =
																	MAKE_PAIR
																	(BGl_string5605z00zzsaw_registerzd2allocationzd2,
																	BNIL);
																BgL_arg4957z00_1954 =
																	MAKE_PAIR
																	(BGl_string5606z00zzsaw_registerzd2allocationzd2,
																	BgL_arg4958z00_1955);
															}
															BgL_arg4956z00_1953 =
																MAKE_PAIR(BgL_arg4950z00_1947,
																BgL_arg4957z00_1954);
														}
														BgL_arg4955z00_1952 =
															MAKE_PAIR
															(BGl_string5607z00zzsaw_registerzd2allocationzd2,
															BgL_arg4956z00_1953);
													}
													BgL_arg4954z00_1951 =
														MAKE_PAIR(BINT(BgL_nz00_1943), BgL_arg4955z00_1952);
												}
												BgL_list4953z00_1950 =
													MAKE_PAIR
													(BGl_string5608z00zzsaw_registerzd2allocationzd2,
													BgL_arg4954z00_1951);
											}
											return
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
												BgL_list4953z00_1950);
								}}}
							else
								{	/* SawMill/regalloc.scm 519 */
									obj_t BgL_regz00_1958;

									BgL_registersz00_1970 = BgL_regsz00_1938;
									BgL_siza7eza7_1971 = BgL_siza7eza7_1940;
									{	/* SawMill/regalloc.scm 451 */
										long BgL_g4326z00_1973;

										{	/* SawMill/regalloc.scm 453 */
											long BgL_auxz00_6025;

											{	/* SawMill/regalloc.scm 453 */
												int BgL_auxz00_6026;

												{	/* SawMill/regalloc.scm 453 */
													BgL_rtl_regzf2razf2_bglt BgL_regz00_3772;

													{	/* SawMill/regalloc.scm 453 */
														obj_t BgL_pairz00_3771;

														BgL_pairz00_3771 = BgL_registersz00_1970;
														BgL_regz00_3772 =
															(BgL_rtl_regzf2razf2_bglt) (CAR
															(BgL_pairz00_3771));
													}
													{	/* SawMill/regalloc.scm 453 */
														BgL_regsetz00_bglt BgL_obj4070z00_3775;

														{	/* SawMill/regalloc.scm 453 */
															obj_t BgL_auxz00_6029;

															{
																obj_t BgL_auxz00_6030;

																{	/* SawMill/regalloc.scm 453 */
																	BgL_objectz00_bglt BgL_auxz00_6031;

																	BgL_auxz00_6031 =
																		(BgL_objectz00_bglt) (BgL_regz00_3772);
																	BgL_auxz00_6030 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_6031);
																}
																BgL_auxz00_6029 =
																	(((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_auxz00_6030))->BgL_interfere2z00);
															}
															BgL_obj4070z00_3775 =
																(BgL_regsetz00_bglt) (BgL_auxz00_6029);
														}
														BgL_auxz00_6026 =
															(((BgL_regsetz00_bglt)
																CREF(BgL_obj4070z00_3775))->BgL_lengthz00);
												}}
												BgL_auxz00_6025 = (long) (BgL_auxz00_6026);
											}
											BgL_g4326z00_1973 = (BgL_auxz00_6025 + ((long) 1));
										}
										{
											obj_t BgL_regsz00_1975;

											obj_t BgL_minz00_1976;

											long BgL_mvalz00_1977;

											obj_t BgL_prevz00_1978;

											BgL_regsz00_1975 = BgL_registersz00_1970;
											BgL_minz00_1976 = BFALSE;
											BgL_mvalz00_1977 = BgL_g4326z00_1973;
											BgL_prevz00_1978 = BFALSE;
										BgL_zc3anonymousza34967ze3z83_1979:
											if (NULLP(BgL_regsz00_1975))
												{	/* SawMill/regalloc.scm 457 */
													int BgL_val1_4480z00_1982;

													obj_t BgL_val2_4481z00_1983;

													{	/* SawMill/regalloc.scm 457 */
														BgL_rtl_regzf2razf2_bglt BgL_regz00_3780;

														BgL_regz00_3780 =
															(BgL_rtl_regzf2razf2_bglt) (BgL_minz00_1976);
														{	/* SawMill/regalloc.scm 457 */
															BgL_regsetz00_bglt BgL_obj4070z00_3783;

															{	/* SawMill/regalloc.scm 457 */
																obj_t BgL_auxz00_6042;

																{
																	obj_t BgL_auxz00_6043;

																	{	/* SawMill/regalloc.scm 457 */
																		BgL_objectz00_bglt BgL_auxz00_6044;

																		BgL_auxz00_6044 =
																			(BgL_objectz00_bglt) (BgL_regz00_3780);
																		BgL_auxz00_6043 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_6044);
																	}
																	BgL_auxz00_6042 =
																		(((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_auxz00_6043))->
																		BgL_interfere2z00);
																}
																BgL_obj4070z00_3783 =
																	(BgL_regsetz00_bglt) (BgL_auxz00_6042);
															}
															BgL_val1_4480z00_1982 =
																(((BgL_regsetz00_bglt)
																	CREF(BgL_obj4070z00_3783))->BgL_lengthz00);
													}}
													BgL_val2_4481z00_1983 =
														bgl_remq_bang(BgL_minz00_1976,
														BgL_registersz00_1970);
													{	/* SawMill/regalloc.scm 457 */
														int BgL_auxz00_6051;

														BgL_auxz00_6051 = (int) (((long) 3));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_6051);
													}
													{	/* SawMill/regalloc.scm 457 */
														obj_t BgL_auxz00_6056;

														int BgL_auxz00_6054;

														BgL_auxz00_6056 = BINT(BgL_val1_4480z00_1982);
														BgL_auxz00_6054 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_6054,
															BgL_auxz00_6056);
													}
													{	/* SawMill/regalloc.scm 457 */
														int BgL_auxz00_6059;

														BgL_auxz00_6059 = (int) (((long) 2));
														BGL_MVALUES_VAL_SET(BgL_auxz00_6059,
															BgL_val2_4481z00_1983);
													}
													BgL_regz00_1958 = BgL_minz00_1976;
												}
											else
												{	/* SawMill/regalloc.scm 458 */
													bool_t BgL_testz00_6062;

													{	/* SawMill/regalloc.scm 458 */
														long BgL_auxz00_6063;

														{	/* SawMill/regalloc.scm 458 */
															int BgL_auxz00_6064;

															{	/* SawMill/regalloc.scm 458 */
																BgL_rtl_regzf2razf2_bglt BgL_regz00_3791;

																{	/* SawMill/regalloc.scm 458 */
																	obj_t BgL_pairz00_3790;

																	BgL_pairz00_3790 = BgL_regsz00_1975;
																	BgL_regz00_3791 =
																		(BgL_rtl_regzf2razf2_bglt) (CAR
																		(BgL_pairz00_3790));
																}
																{	/* SawMill/regalloc.scm 458 */
																	BgL_regsetz00_bglt BgL_obj4070z00_3794;

																	{	/* SawMill/regalloc.scm 458 */
																		obj_t BgL_auxz00_6067;

																		{
																			obj_t BgL_auxz00_6068;

																			{	/* SawMill/regalloc.scm 458 */
																				BgL_objectz00_bglt BgL_auxz00_6069;

																				BgL_auxz00_6069 =
																					(BgL_objectz00_bglt)
																					(BgL_regz00_3791);
																				BgL_auxz00_6068 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_6069);
																			}
																			BgL_auxz00_6067 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					CREF(BgL_auxz00_6068))->
																				BgL_interfere2z00);
																		}
																		BgL_obj4070z00_3794 =
																			(BgL_regsetz00_bglt) (BgL_auxz00_6067);
																	}
																	BgL_auxz00_6064 =
																		(((BgL_regsetz00_bglt)
																			CREF(BgL_obj4070z00_3794))->
																		BgL_lengthz00);
															}}
															BgL_auxz00_6063 = (long) (BgL_auxz00_6064);
														}
														BgL_testz00_6062 =
															(BgL_auxz00_6063 <
															(long) CINT(BgL_siza7eza7_1971));
													}
													if (BgL_testz00_6062)
														{	/* SawMill/regalloc.scm 459 */
															obj_t BgL_regz00_1985;

															BgL_regz00_1985 = CAR(BgL_regsz00_1975);
															{	/* SawMill/regalloc.scm 459 */
																int BgL_sza7za7_1986;

																{	/* SawMill/regalloc.scm 460 */
																	BgL_rtl_regzf2razf2_bglt BgL_regz00_3799;

																	BgL_regz00_3799 =
																		(BgL_rtl_regzf2razf2_bglt)
																		(BgL_regz00_1985);
																	{	/* SawMill/regalloc.scm 460 */
																		BgL_regsetz00_bglt BgL_obj4070z00_3802;

																		{	/* SawMill/regalloc.scm 460 */
																			obj_t BgL_auxz00_6080;

																			{
																				obj_t BgL_auxz00_6081;

																				{	/* SawMill/regalloc.scm 460 */
																					BgL_objectz00_bglt BgL_auxz00_6082;

																					BgL_auxz00_6082 =
																						(BgL_objectz00_bglt)
																						(BgL_regz00_3799);
																					BgL_auxz00_6081 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6082);
																				}
																				BgL_auxz00_6080 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6081))->
																					BgL_interfere2z00);
																			}
																			BgL_obj4070z00_3802 =
																				(BgL_regsetz00_bglt) (BgL_auxz00_6080);
																		}
																		BgL_sza7za7_1986 =
																			(((BgL_regsetz00_bglt)
																				CREF(BgL_obj4070z00_3802))->
																			BgL_lengthz00);
																}}
																{	/* SawMill/regalloc.scm 460 */

																	if (PAIRP(BgL_prevz00_1978))
																		{	/* SawMill/regalloc.scm 461 */
																			{	/* SawMill/regalloc.scm 463 */
																				obj_t BgL_auxz00_6090;

																				BgL_auxz00_6090 = CDR(BgL_regsz00_1975);
																				SET_CDR(BgL_prevz00_1978,
																					BgL_auxz00_6090);
																			}
																			{	/* SawMill/regalloc.scm 464 */
																				int BgL_auxz00_6093;

																				BgL_auxz00_6093 = (int) (((long) 3));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_6093);
																			}
																			{	/* SawMill/regalloc.scm 464 */
																				obj_t BgL_auxz00_6098;

																				int BgL_auxz00_6096;

																				BgL_auxz00_6098 =
																					BINT(BgL_sza7za7_1986);
																				BgL_auxz00_6096 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_6096,
																					BgL_auxz00_6098);
																			}
																			{	/* SawMill/regalloc.scm 464 */
																				int BgL_auxz00_6101;

																				BgL_auxz00_6101 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_6101,
																					BgL_registersz00_1970);
																			}
																			BgL_regz00_1958 = BgL_regz00_1985;
																		}
																	else
																		{	/* SawMill/regalloc.scm 465 */
																			obj_t BgL_val2_4487z00_1994;

																			BgL_val2_4487z00_1994 =
																				CDR(BgL_regsz00_1975);
																			{	/* SawMill/regalloc.scm 465 */
																				int BgL_auxz00_6105;

																				BgL_auxz00_6105 = (int) (((long) 3));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_6105);
																			}
																			{	/* SawMill/regalloc.scm 465 */
																				obj_t BgL_auxz00_6110;

																				int BgL_auxz00_6108;

																				BgL_auxz00_6110 =
																					BINT(BgL_sza7za7_1986);
																				BgL_auxz00_6108 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_6108,
																					BgL_auxz00_6110);
																			}
																			{	/* SawMill/regalloc.scm 465 */
																				int BgL_auxz00_6113;

																				BgL_auxz00_6113 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_6113,
																					BgL_val2_4487z00_1994);
																			}
																			BgL_regz00_1958 = BgL_regz00_1985;
														}}}}
													else
														{	/* SawMill/regalloc.scm 466 */
															bool_t BgL_testz00_6116;

															{	/* SawMill/regalloc.scm 466 */
																long BgL_auxz00_6117;

																{	/* SawMill/regalloc.scm 466 */
																	int BgL_auxz00_6118;

																	{	/* SawMill/regalloc.scm 466 */
																		BgL_rtl_regzf2razf2_bglt BgL_regz00_3820;

																		{	/* SawMill/regalloc.scm 466 */
																			obj_t BgL_pairz00_3819;

																			BgL_pairz00_3819 = BgL_regsz00_1975;
																			BgL_regz00_3820 =
																				(BgL_rtl_regzf2razf2_bglt) (CAR
																				(BgL_pairz00_3819));
																		}
																		{	/* SawMill/regalloc.scm 466 */
																			BgL_regsetz00_bglt BgL_obj4070z00_3823;

																			{	/* SawMill/regalloc.scm 466 */
																				obj_t BgL_auxz00_6121;

																				{
																					obj_t BgL_auxz00_6122;

																					{	/* SawMill/regalloc.scm 466 */
																						BgL_objectz00_bglt BgL_auxz00_6123;

																						BgL_auxz00_6123 =
																							(BgL_objectz00_bglt)
																							(BgL_regz00_3820);
																						BgL_auxz00_6122 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_6123);
																					}
																					BgL_auxz00_6121 =
																						(((BgL_rtl_regzf2razf2_bglt)
																							CREF(BgL_auxz00_6122))->
																						BgL_interfere2z00);
																				}
																				BgL_obj4070z00_3823 =
																					(BgL_regsetz00_bglt)
																					(BgL_auxz00_6121);
																			}
																			BgL_auxz00_6118 =
																				(((BgL_regsetz00_bglt)
																					CREF(BgL_obj4070z00_3823))->
																				BgL_lengthz00);
																	}}
																	BgL_auxz00_6117 = (long) (BgL_auxz00_6118);
																}
																BgL_testz00_6116 =
																	(BgL_auxz00_6117 < BgL_mvalz00_1977);
															}
															if (BgL_testz00_6116)
																{	/* SawMill/regalloc.scm 467 */
																	obj_t BgL_arg4973z00_1996;

																	obj_t BgL_arg4974z00_1997;

																	int BgL_arg4975z00_1998;

																	BgL_arg4973z00_1996 = CDR(BgL_regsz00_1975);
																	BgL_arg4974z00_1997 = CAR(BgL_regsz00_1975);
																	{	/* SawMill/regalloc.scm 469 */
																		BgL_rtl_regzf2razf2_bglt BgL_regz00_3830;

																		{	/* SawMill/regalloc.scm 469 */
																			obj_t BgL_pairz00_3829;

																			BgL_pairz00_3829 = BgL_regsz00_1975;
																			BgL_regz00_3830 =
																				(BgL_rtl_regzf2razf2_bglt) (CAR
																				(BgL_pairz00_3829));
																		}
																		{	/* SawMill/regalloc.scm 469 */
																			BgL_regsetz00_bglt BgL_obj4070z00_3833;

																			{	/* SawMill/regalloc.scm 469 */
																				obj_t BgL_auxz00_6135;

																				{
																					obj_t BgL_auxz00_6136;

																					{	/* SawMill/regalloc.scm 469 */
																						BgL_objectz00_bglt BgL_auxz00_6137;

																						BgL_auxz00_6137 =
																							(BgL_objectz00_bglt)
																							(BgL_regz00_3830);
																						BgL_auxz00_6136 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_6137);
																					}
																					BgL_auxz00_6135 =
																						(((BgL_rtl_regzf2razf2_bglt)
																							CREF(BgL_auxz00_6136))->
																						BgL_interfere2z00);
																				}
																				BgL_obj4070z00_3833 =
																					(BgL_regsetz00_bglt)
																					(BgL_auxz00_6135);
																			}
																			BgL_arg4975z00_1998 =
																				(((BgL_regsetz00_bglt)
																					CREF(BgL_obj4070z00_3833))->
																				BgL_lengthz00);
																	}}
																	{
																		obj_t BgL_prevz00_6147;

																		long BgL_mvalz00_6145;

																		obj_t BgL_minz00_6144;

																		obj_t BgL_regsz00_6143;

																		BgL_regsz00_6143 = BgL_arg4973z00_1996;
																		BgL_minz00_6144 = BgL_arg4974z00_1997;
																		BgL_mvalz00_6145 =
																			(long) (BgL_arg4975z00_1998);
																		BgL_prevz00_6147 = BgL_regsz00_1975;
																		BgL_prevz00_1978 = BgL_prevz00_6147;
																		BgL_mvalz00_1977 = BgL_mvalz00_6145;
																		BgL_minz00_1976 = BgL_minz00_6144;
																		BgL_regsz00_1975 = BgL_regsz00_6143;
																		goto BgL_zc3anonymousza34967ze3z83_1979;
																	}
																}
															else
																{
																	obj_t BgL_prevz00_6150;

																	obj_t BgL_regsz00_6148;

																	BgL_regsz00_6148 = CDR(BgL_regsz00_1975);
																	BgL_prevz00_6150 = BgL_regsz00_1975;
																	BgL_prevz00_1978 = BgL_prevz00_6150;
																	BgL_regsz00_1975 = BgL_regsz00_6148;
																	goto BgL_zc3anonymousza34967ze3z83_1979;
																}
														}
												}
										}
									}
									{	/* SawMill/regalloc.scm 522 */
										obj_t BgL_nsiza7eza7_1959;

										obj_t BgL_regsz00_1960;

										{	/* SawMill/regalloc.scm 522 */
											int BgL_auxz00_6151;

											BgL_auxz00_6151 = (int) (((long) 1));
											BgL_nsiza7eza7_1959 = BGL_MVALUES_VAL(BgL_auxz00_6151);
										}
										{	/* SawMill/regalloc.scm 522 */
											int BgL_auxz00_6154;

											BgL_auxz00_6154 = (int) (((long) 2));
											BgL_regsz00_1960 = BGL_MVALUES_VAL(BgL_auxz00_6154);
										}
										BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
											(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_1958));
										{	/* SawMill/regalloc.scm 522 */
											obj_t BgL_arg4961z00_1961;

											BgL_arg4961z00_1961 =
												MAKE_PAIR(BgL_regz00_1958, BgL_stackz00_1939);
											{
												obj_t BgL_siza7eza7_6162;

												obj_t BgL_stackz00_6161;

												obj_t BgL_regsz00_6160;

												BgL_regsz00_6160 = BgL_regsz00_1960;
												BgL_stackz00_6161 = BgL_arg4961z00_1961;
												BgL_siza7eza7_6162 = BgL_nsiza7eza7_1959;
												BgL_siza7eza7_1940 = BgL_siza7eza7_6162;
												BgL_stackz00_1939 = BgL_stackz00_6161;
												BgL_regsz00_1938 = BgL_regsz00_6160;
												goto BgL_zc3anonymousza34945ze3z83_1941;
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



/* <anonymous:4963> */
	obj_t BGl_zc3anonymousza34963ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4759, obj_t BgL_r1z00_4760, obj_t BgL_r2z00_4761)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 508 */
			{
				obj_t BgL_r1z00_1964;

				obj_t BgL_r2z00_1965;

				{	/* SawMill/regalloc.scm 509 */
					bool_t BgL_auxz00_6164;

					BgL_r1z00_1964 = BgL_r1z00_4760;
					BgL_r2z00_1965 = BgL_r2z00_4761;
					{	/* SawMill/regalloc.scm 509 */
						long BgL_auxz00_6176;

						long BgL_auxz00_6165;

						{	/* SawMill/regalloc.scm 510 */
							BgL_rtl_regzf2razf2_bglt BgL_regz00_3761;

							BgL_regz00_3761 = (BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_1965);
							{	/* SawMill/regalloc.scm 510 */
								BgL_regsetz00_bglt BgL_obj4070z00_3764;

								{	/* SawMill/regalloc.scm 510 */
									obj_t BgL_auxz00_6178;

									{
										obj_t BgL_auxz00_6179;

										{	/* SawMill/regalloc.scm 510 */
											BgL_objectz00_bglt BgL_auxz00_6180;

											BgL_auxz00_6180 = (BgL_objectz00_bglt) (BgL_regz00_3761);
											BgL_auxz00_6179 = BGL_OBJECT_WIDENING(BgL_auxz00_6180);
										}
										BgL_auxz00_6178 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6179))->
											BgL_interfere2z00);
									}
									BgL_obj4070z00_3764 = (BgL_regsetz00_bglt) (BgL_auxz00_6178);
								}
								BgL_auxz00_6176 =
									(long) (
									(((BgL_regsetz00_bglt) CREF(BgL_obj4070z00_3764))->
										BgL_lengthz00));
						}}
						{	/* SawMill/regalloc.scm 509 */
							BgL_rtl_regzf2razf2_bglt BgL_regz00_3756;

							BgL_regz00_3756 = (BgL_rtl_regzf2razf2_bglt) (BgL_r1z00_1964);
							{	/* SawMill/regalloc.scm 509 */
								BgL_regsetz00_bglt BgL_obj4070z00_3759;

								{	/* SawMill/regalloc.scm 509 */
									obj_t BgL_auxz00_6167;

									{
										obj_t BgL_auxz00_6168;

										{	/* SawMill/regalloc.scm 509 */
											BgL_objectz00_bglt BgL_auxz00_6169;

											BgL_auxz00_6169 = (BgL_objectz00_bglt) (BgL_regz00_3756);
											BgL_auxz00_6168 = BGL_OBJECT_WIDENING(BgL_auxz00_6169);
										}
										BgL_auxz00_6167 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6168))->
											BgL_interfere2z00);
									}
									BgL_obj4070z00_3759 = (BgL_regsetz00_bglt) (BgL_auxz00_6167);
								}
								BgL_auxz00_6165 =
									(long) (
									(((BgL_regsetz00_bglt) CREF(BgL_obj4070z00_3759))->
										BgL_lengthz00));
						}}
						BgL_auxz00_6164 = (BgL_auxz00_6165 < BgL_auxz00_6176);
					}
					return BBOOL(BgL_auxz00_6164);
				}
			}
		}
	}



/* <anonymous:4990> */
	obj_t BGl_zc3anonymousza34990ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4762, obj_t BgL_rz00_4764)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 479 */
			{	/* SawMill/regalloc.scm 480 */
				obj_t BgL_colorsz00_4763;

				BgL_colorsz00_4763 = PROCEDURE_REF(BgL_envz00_4762, (int) (((long) 0)));
				{
					obj_t BgL_rz00_2015;

					BgL_rz00_2015 = BgL_rz00_4764;
					{	/* SawMill/regalloc.scm 481 */
						bool_t BgL_testz00_6191;

						{	/* SawMill/regalloc.scm 481 */
							obj_t BgL_auxz00_6192;

							{	/* SawMill/regalloc.scm 481 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3836;

								BgL_obj4248z00_3836 =
									(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2015);
								{
									obj_t BgL_auxz00_6194;

									{	/* SawMill/regalloc.scm 481 */
										BgL_objectz00_bglt BgL_auxz00_6195;

										BgL_auxz00_6195 =
											(BgL_objectz00_bglt) (BgL_obj4248z00_3836);
										BgL_auxz00_6194 = BGL_OBJECT_WIDENING(BgL_auxz00_6195);
									}
									BgL_auxz00_6192 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6194))->
										BgL_colorz00);
							}}
							BgL_testz00_6191 = INTEGERP(BgL_auxz00_6192);
						}
						if (BgL_testz00_6191)
							{	/* SawMill/regalloc.scm 482 */
								obj_t BgL_arg4993z00_2019;

								{	/* SawMill/regalloc.scm 482 */
									BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3838;

									BgL_obj4248z00_3838 =
										(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2015);
									{
										obj_t BgL_auxz00_6201;

										{	/* SawMill/regalloc.scm 482 */
											BgL_objectz00_bglt BgL_auxz00_6202;

											BgL_auxz00_6202 =
												(BgL_objectz00_bglt) (BgL_obj4248z00_3838);
											BgL_auxz00_6201 = BGL_OBJECT_WIDENING(BgL_auxz00_6202);
										}
										BgL_arg4993z00_2019 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6201))->
											BgL_colorz00);
									}
								}
								return
									VECTOR_SET(BgL_colorsz00_4763,
									CINT(BgL_arg4993z00_2019), BTRUE);
							}
						else
							{	/* SawMill/regalloc.scm 481 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* register-hardware-coloring */
	obj_t
		BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_40, obj_t BgL_hregsz00_41, obj_t BgL_cregsz00_42)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 527 */
			{
				obj_t BgL_stackz00_2157;

				obj_t BgL_rz00_2123;

				obj_t BgL_regsz00_2101;

				obj_t BgL_regsz00_2089;

				int BgL_kz00_2090;

				{	/* SawMill/regalloc.scm 567 */
					long BgL_kz00_2053;

					BgL_kz00_2053 = bgl_list_length(BgL_hregsz00_41);
					{
						obj_t BgL_regsz00_2056;

						obj_t BgL_stackz00_2057;

						long BgL_sz00_2058;

						long BgL_nz00_2059;

						BgL_regsz00_2056 = BgL_cregsz00_42;
						BgL_stackz00_2057 = BNIL;
						BgL_sz00_2058 = ((long) 0);
						BgL_nz00_2059 = ((long) 0);
					BgL_zc3anonymousza35009ze3z83_2060:
						if (NULLP(BgL_regsz00_2056))
							{	/* SawMill/regalloc.scm 590 */
								BgL_stackz00_2157 = BgL_stackz00_2057;
								{
									obj_t BgL_l4493z00_2160;

									BgL_l4493z00_2160 = BgL_stackz00_2157;
								BgL_zc3anonymousza35071ze3z83_2161:
									if (PAIRP(BgL_l4493z00_2160))
										{	/* SawMill/regalloc.scm 566 */
											BgL_rz00_2123 = CAR(BgL_l4493z00_2160);
											{	/* SawMill/regalloc.scm 551 */
												obj_t BgL_nrz00_2126;

												{	/* SawMill/regalloc.scm 552 */
													obj_t BgL_zc3anonymousza35058ze3z83_4766;

													BgL_zc3anonymousza35058ze3z83_4766 =
														make_fx_procedure
														(BGl_zc3anonymousza35058ze3z83zzsaw_registerzd2allocationzd2,
														(int) (((long) 1)), (int) (((long) 2)));
													PROCEDURE_SET(BgL_zc3anonymousza35058ze3z83_4766,
														(int) (((long) 0)), BgL_rz00_2123);
													PROCEDURE_SET(BgL_zc3anonymousza35058ze3z83_4766,
														(int) (((long) 1)), BgL_rz00_2123);
													{	/* SawMill/regalloc.scm 551 */
														obj_t BgL_list5057z00_2134;

														BgL_list5057z00_2134 =
															MAKE_PAIR(BgL_hregsz00_41, BNIL);
														BgL_nrz00_2126 =
															BGl_anyz00zz__r4_pairs_and_lists_6_3z00
															(BgL_zc3anonymousza35058ze3z83_4766,
															BgL_list5057z00_2134);
												}}
												{	/* SawMill/regalloc.scm 561 */
													obj_t BgL_arg5053z00_2128;

													{	/* SawMill/regalloc.scm 563 */
														BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3898;

														BgL_obj4257z00_3898 =
															(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2123);
														{
															obj_t BgL_auxz00_6223;

															{	/* SawMill/regalloc.scm 563 */
																BgL_objectz00_bglt BgL_auxz00_6224;

																BgL_auxz00_6224 =
																	(BgL_objectz00_bglt) (BgL_obj4257z00_3898);
																BgL_auxz00_6223 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_6224);
															}
															BgL_arg5053z00_2128 =
																(((BgL_rtl_regzf2razf2_bglt)
																	CREF(BgL_auxz00_6223))->BgL_interferez00);
													}}
													{	/* SawMill/regalloc.scm 562 */
														obj_t BgL_zc3anonymousza35054ze3z83_4765;

														BgL_zc3anonymousza35054ze3z83_4765 =
															make_fx_procedure
															(BGl_zc3anonymousza35054ze3z83zzsaw_registerzd2allocationzd2,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3anonymousza35054ze3z83_4765,
															(int) (((long) 0)), BgL_nrz00_2126);
														BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
															(BgL_zc3anonymousza35054ze3z83_4765,
															(BgL_regsetz00_bglt) (BgL_arg5053z00_2128));
												}}
												{	/* SawMill/regalloc.scm 564 */
													BgL_rtl_regzf2razf2_bglt BgL_obj4250z00_3901;

													obj_t BgL_val4249z00_3902;

													BgL_obj4250z00_3901 =
														(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2123);
													BgL_val4249z00_3902 = BgL_nrz00_2126;
													{
														obj_t BgL_auxz00_6236;

														{	/* SawMill/regalloc.scm 564 */
															BgL_objectz00_bglt BgL_auxz00_6237;

															BgL_auxz00_6237 =
																(BgL_objectz00_bglt) (BgL_obj4250z00_3901);
															BgL_auxz00_6236 =
																BGL_OBJECT_WIDENING(BgL_auxz00_6237);
														}
														((((BgL_rtl_regzf2razf2_bglt)
																	CREF(BgL_auxz00_6236))->BgL_colorz00) =
															((obj_t) BgL_val4249z00_3902), BUNSPEC);
											}}}
											{
												obj_t BgL_l4493z00_6242;

												BgL_l4493z00_6242 = CDR(BgL_l4493z00_2160);
												BgL_l4493z00_2160 = BgL_l4493z00_6242;
												goto BgL_zc3anonymousza35071ze3z83_2161;
											}
										}
									else
										{	/* SawMill/regalloc.scm 566 */
											((bool_t) 1);
										}
								}
								{	/* SawMill/regalloc.scm 593 */
									long BgL_arg5014z00_2065;

									BgL_arg5014z00_2065 = bgl_list_length(BgL_cregsz00_42);
									{	/* SawMill/regalloc.scm 593 */
										obj_t BgL_list5019z00_2070;

										{	/* SawMill/regalloc.scm 593 */
											obj_t BgL_arg5020z00_2071;

											{	/* SawMill/regalloc.scm 593 */
												obj_t BgL_arg5021z00_2072;

												{	/* SawMill/regalloc.scm 593 */
													obj_t BgL_arg5022z00_2073;

													{	/* SawMill/regalloc.scm 593 */
														obj_t BgL_arg5023z00_2074;

														{	/* SawMill/regalloc.scm 593 */
															obj_t BgL_arg5024z00_2075;

															{	/* SawMill/regalloc.scm 593 */
																obj_t BgL_arg5025z00_2076;

																{	/* SawMill/regalloc.scm 593 */
																	obj_t BgL_arg5026z00_2077;

																	{	/* SawMill/regalloc.scm 593 */
																		obj_t BgL_arg5027z00_2078;

																		{	/* SawMill/regalloc.scm 593 */
																			obj_t BgL_arg5028z00_2079;

																			BgL_arg5028z00_2079 =
																				MAKE_PAIR
																				(BGl_string5592z00zzsaw_registerzd2allocationzd2,
																				BNIL);
																			BgL_arg5027z00_2078 =
																				MAKE_PAIR
																				(BGl_string5609z00zzsaw_registerzd2allocationzd2,
																				BgL_arg5028z00_2079);
																		}
																		BgL_arg5026z00_2077 =
																			MAKE_PAIR(BINT(BgL_sz00_2058),
																			BgL_arg5027z00_2078);
																	}
																	BgL_arg5025z00_2076 =
																		MAKE_PAIR
																		(BGl_string5610z00zzsaw_registerzd2allocationzd2,
																		BgL_arg5026z00_2077);
																}
																BgL_arg5024z00_2075 =
																	MAKE_PAIR(BINT(BgL_nz00_2059),
																	BgL_arg5025z00_2076);
															}
															BgL_arg5023z00_2074 =
																MAKE_PAIR
																(BGl_string5611z00zzsaw_registerzd2allocationzd2,
																BgL_arg5024z00_2075);
														}
														BgL_arg5022z00_2073 =
															MAKE_PAIR(BINT(BgL_arg5014z00_2065),
															BgL_arg5023z00_2074);
													}
													BgL_arg5021z00_2072 =
														MAKE_PAIR
														(BGl_string5612z00zzsaw_registerzd2allocationzd2,
														BgL_arg5022z00_2073);
												}
												BgL_arg5020z00_2071 =
													MAKE_PAIR(BINT(BgL_kz00_2053), BgL_arg5021z00_2072);
											}
											BgL_list5019z00_2070 =
												MAKE_PAIR
												(BGl_string5613z00zzsaw_registerzd2allocationzd2,
												BgL_arg5020z00_2071);
										}
										return
											BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
											BgL_list5019z00_2070);
							}}}
						else
							{	/* SawMill/regalloc.scm 598 */
								obj_t BgL_srz00_2080;

								BgL_regsz00_2089 = BgL_regsz00_2056;
								BgL_kz00_2090 = (int) (BgL_kz00_2053);
								{	/* SawMill/regalloc.scm 530 */
									obj_t BgL_zc3anonymousza35037ze3z83_4767;

									BgL_zc3anonymousza35037ze3z83_4767 =
										make_fx_procedure
										(BGl_zc3anonymousza35037ze3z83zzsaw_registerzd2allocationzd2,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza35037ze3z83_4767,
										(int) (((long) 0)), BINT(BgL_kz00_2090));
									{	/* SawMill/regalloc.scm 529 */
										obj_t BgL_list5036z00_2093;

										BgL_list5036z00_2093 = MAKE_PAIR(BgL_regsz00_2089, BNIL);
										BgL_srz00_2080 =
											BGl_anyz00zz__r4_pairs_and_lists_6_3z00
											(BgL_zc3anonymousza35037ze3z83_4767,
											BgL_list5036z00_2093);
								}}
								if (CBOOL(BgL_srz00_2080))
									{	/* SawMill/regalloc.scm 599 */
										BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
											(BgL_rtl_regzf2razf2_bglt) (BgL_srz00_2080));
										{	/* SawMill/regalloc.scm 603 */
											obj_t BgL_arg5029z00_2081;

											obj_t BgL_arg5030z00_2082;

											long BgL_arg5031z00_2083;

											BgL_arg5029z00_2081 =
												bgl_remq(BgL_srz00_2080, BgL_regsz00_2056);
											BgL_arg5030z00_2082 =
												MAKE_PAIR(BgL_srz00_2080, BgL_stackz00_2057);
											BgL_arg5031z00_2083 = (((long) 1) + BgL_nz00_2059);
											{
												long BgL_nz00_6279;

												obj_t BgL_stackz00_6278;

												obj_t BgL_regsz00_6277;

												BgL_regsz00_6277 = BgL_arg5029z00_2081;
												BgL_stackz00_6278 = BgL_arg5030z00_2082;
												BgL_nz00_6279 = BgL_arg5031z00_2083;
												BgL_nz00_2059 = BgL_nz00_6279;
												BgL_stackz00_2057 = BgL_stackz00_6278;
												BgL_regsz00_2056 = BgL_regsz00_6277;
												goto BgL_zc3anonymousza35009ze3z83_2060;
											}
										}
									}
								else
									{	/* SawMill/regalloc.scm 605 */
										BgL_rtl_regzf2razf2_bglt BgL_rz00_2084;

										BgL_regsz00_2101 = BgL_regsz00_2056;
										{
											obj_t BgL_regz00_2116;

											{
												obj_t BgL_regsz00_2105;

												obj_t BgL_regz00_2106;

												double BgL_msz00_2107;

												{	/* SawMill/regalloc.scm 539 */
													obj_t BgL_auxz00_6280;

													BgL_regsz00_2105 = BgL_regsz00_2101;
													BgL_regz00_2106 = BUNSPEC;
													BgL_msz00_2107 = ((double) 0.0);
												BgL_zc3anonymousza35041ze3z83_2108:
													if (NULLP(BgL_regsz00_2105))
														{	/* SawMill/regalloc.scm 542 */
															BgL_auxz00_6280 = BgL_regz00_2106;
														}
													else
														{	/* SawMill/regalloc.scm 544 */
															obj_t BgL_rz00_2110;

															BgL_rz00_2110 = CAR(BgL_regsz00_2105);
															{	/* SawMill/regalloc.scm 544 */
																double BgL_sz00_2111;

																BgL_regz00_2116 = BgL_rz00_2110;
																{	/* SawMill/regalloc.scm 537 */
																	double BgL_auxz00_6295;

																	double BgL_auxz00_6284;

																	{	/* SawMill/regalloc.scm 538 */
																		long BgL_auxz00_6296;

																		{	/* SawMill/regalloc.scm 538 */
																			BgL_rtl_regzf2razf2_bglt BgL_regz00_3883;

																			BgL_regz00_3883 =
																				(BgL_rtl_regzf2razf2_bglt)
																				(BgL_regz00_2116);
																			{	/* SawMill/regalloc.scm 538 */
																				BgL_regsetz00_bglt BgL_obj4070z00_3886;

																				{	/* SawMill/regalloc.scm 538 */
																					obj_t BgL_auxz00_6298;

																					{
																						obj_t BgL_auxz00_6299;

																						{	/* SawMill/regalloc.scm 538 */
																							BgL_objectz00_bglt
																								BgL_auxz00_6300;
																							BgL_auxz00_6300 =
																								(BgL_objectz00_bglt)
																								(BgL_regz00_3883);
																							BgL_auxz00_6299 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_6300);
																						}
																						BgL_auxz00_6298 =
																							(((BgL_rtl_regzf2razf2_bglt)
																								CREF(BgL_auxz00_6299))->
																							BgL_interfere2z00);
																					}
																					BgL_obj4070z00_3886 =
																						(BgL_regsetz00_bglt)
																						(BgL_auxz00_6298);
																				}
																				BgL_auxz00_6296 =
																					(long) (
																					(((BgL_regsetz00_bglt)
																							CREF(BgL_obj4070z00_3886))->
																						BgL_lengthz00));
																		}}
																		BgL_auxz00_6295 =
																			(double) (BgL_auxz00_6296);
																	}
																	{	/* SawMill/regalloc.scm 537 */
																		long BgL_auxz00_6285;

																		{	/* SawMill/regalloc.scm 537 */
																			BgL_rtl_regzf2razf2_bglt
																				BgL_obj4254z00_3881;
																			BgL_obj4254z00_3881 =
																				(BgL_rtl_regzf2razf2_bglt)
																				(BgL_regz00_2116);
																			{	/* SawMill/regalloc.scm 537 */
																				int BgL_auxz00_6287;

																				{
																					obj_t BgL_auxz00_6288;

																					{	/* SawMill/regalloc.scm 537 */
																						BgL_objectz00_bglt BgL_auxz00_6289;

																						BgL_auxz00_6289 =
																							(BgL_objectz00_bglt)
																							(BgL_obj4254z00_3881);
																						BgL_auxz00_6288 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_6289);
																					}
																					BgL_auxz00_6287 =
																						(((BgL_rtl_regzf2razf2_bglt)
																							CREF(BgL_auxz00_6288))->
																						BgL_occurrencesz00);
																				}
																				BgL_auxz00_6285 =
																					(long) (BgL_auxz00_6287);
																		}}
																		BgL_auxz00_6284 =
																			(double) (BgL_auxz00_6285);
																	}
																	BgL_sz00_2111 =
																		(BgL_auxz00_6284 / BgL_auxz00_6295);
																}
																{	/* SawMill/regalloc.scm 545 */

																	if ((BgL_sz00_2111 > BgL_msz00_2107))
																		{
																			double BgL_msz00_6314;

																			obj_t BgL_regz00_6313;

																			obj_t BgL_regsz00_6311;

																			BgL_regsz00_6311 = CDR(BgL_regsz00_2105);
																			BgL_regz00_6313 = BgL_rz00_2110;
																			BgL_msz00_6314 = BgL_sz00_2111;
																			BgL_msz00_2107 = BgL_msz00_6314;
																			BgL_regz00_2106 = BgL_regz00_6313;
																			BgL_regsz00_2105 = BgL_regsz00_6311;
																			goto BgL_zc3anonymousza35041ze3z83_2108;
																		}
																	else
																		{
																			obj_t BgL_regsz00_6315;

																			BgL_regsz00_6315 = CDR(BgL_regsz00_2105);
																			BgL_regsz00_2105 = BgL_regsz00_6315;
																			goto BgL_zc3anonymousza35041ze3z83_2108;
																		}
																}
															}
														}
													BgL_rz00_2084 =
														(BgL_rtl_regzf2razf2_bglt) (BgL_auxz00_6280);
												}
											}
										}
										{
											obj_t BgL_auxz00_6318;

											{	/* SawMill/regalloc.scm 607 */
												BgL_objectz00_bglt BgL_auxz00_6319;

												BgL_auxz00_6319 = (BgL_objectz00_bglt) (BgL_rz00_2084);
												BgL_auxz00_6318 = BGL_OBJECT_WIDENING(BgL_auxz00_6319);
											}
											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6318))->
													BgL_colorz00) = ((obj_t) BUNSPEC), BUNSPEC);
										}
										{
											long BgL_sz00_6326;

											obj_t BgL_regsz00_6323;

											BgL_regsz00_6323 =
												bgl_remq((obj_t) (BgL_rz00_2084), BgL_regsz00_2056);
											BgL_sz00_6326 = (((long) 1) + BgL_sz00_2058);
											BgL_sz00_2058 = BgL_sz00_6326;
											BgL_regsz00_2056 = BgL_regsz00_6323;
											goto BgL_zc3anonymousza35009ze3z83_2060;
										}
									}
							}
					}
				}
			}
		}
	}



/* <anonymous:5054> */
	obj_t BGl_zc3anonymousza35054ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4768, obj_t BgL_riz00_4770)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 561 */
			{	/* SawMill/regalloc.scm 562 */
				obj_t BgL_nrz00_4769;

				BgL_nrz00_4769 = PROCEDURE_REF(BgL_envz00_4768, (int) (((long) 0)));
				{
					obj_t BgL_riz00_2129;

					{	/* SawMill/regalloc.scm 562 */
						bool_t BgL_auxz00_6330;

						BgL_riz00_2129 = BgL_riz00_4770;
						{	/* SawMill/regalloc.scm 562 */
							obj_t BgL_arg5055z00_3899;

							{	/* SawMill/regalloc.scm 562 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4260z00_3900;

								BgL_obj4260z00_3900 =
									(BgL_rtl_regzf2razf2_bglt) (BgL_nrz00_4769);
								{
									obj_t BgL_auxz00_6332;

									{	/* SawMill/regalloc.scm 562 */
										BgL_objectz00_bglt BgL_auxz00_6333;

										BgL_auxz00_6333 =
											(BgL_objectz00_bglt) (BgL_obj4260z00_3900);
										BgL_auxz00_6332 = BGL_OBJECT_WIDENING(BgL_auxz00_6333);
									}
									BgL_arg5055z00_3899 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6332))->
										BgL_interfere2z00);
							}}
							BgL_auxz00_6330 =
								BGl_regsetzd2addz12zc0zzsaw_regsetz00(
								(BgL_regsetz00_bglt) (BgL_arg5055z00_3899),
								(BgL_rtl_regzf2razf2_bglt) (BgL_riz00_2129));
						}
						return BBOOL(BgL_auxz00_6330);
					}
				}
			}
		}
	}



/* <anonymous:5058> */
	obj_t BGl_zc3anonymousza35058ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4771, obj_t BgL_regz00_4774)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 551 */
			{	/* SawMill/regalloc.scm 552 */
				obj_t BgL_instance4334z00_4772;

				obj_t BgL_rz00_4773;

				BgL_instance4334z00_4772 =
					PROCEDURE_REF(BgL_envz00_4771, (int) (((long) 0)));
				BgL_rz00_4773 = PROCEDURE_REF(BgL_envz00_4771, (int) (((long) 1)));
				{
					obj_t BgL_regz00_2135;

					BgL_regz00_2135 = BgL_regz00_4774;
					{	/* SawMill/regalloc.scm 552 */
						bool_t BgL_testz00_6345;

						{	/* SawMill/regalloc.scm 552 */
							bool_t BgL_testz00_6346;

							{	/* SawMill/regalloc.scm 552 */
								obj_t BgL_arg5069z00_2155;

								{	/* SawMill/regalloc.scm 552 */
									BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3891;

									BgL_obj4257z00_3891 =
										(BgL_rtl_regzf2razf2_bglt) (BgL_instance4334z00_4772);
									{
										obj_t BgL_auxz00_6348;

										{	/* SawMill/regalloc.scm 552 */
											BgL_objectz00_bglt BgL_auxz00_6349;

											BgL_auxz00_6349 =
												(BgL_objectz00_bglt) (BgL_obj4257z00_3891);
											BgL_auxz00_6348 = BGL_OBJECT_WIDENING(BgL_auxz00_6349);
										}
										BgL_arg5069z00_2155 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6348))->
											BgL_interferez00);
								}}
								BgL_testz00_6346 =
									BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
									(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_2135),
									(BgL_regsetz00_bglt) (BgL_arg5069z00_2155));
							}
							if (BgL_testz00_6346)
								{	/* SawMill/regalloc.scm 552 */
									BgL_testz00_6345 = ((bool_t) 0);
								}
							else
								{	/* SawMill/regalloc.scm 552 */
									BgL_testz00_6345 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_6345)
							{	/* SawMill/regalloc.scm 553 */
								bool_t BgL_testz00_6356;

								{	/* SawMill/regalloc.scm 553 */
									bool_t BgL_testz00_6357;

									{	/* SawMill/regalloc.scm 553 */
										obj_t BgL_g4492z00_2143;

										{	/* SawMill/regalloc.scm 555 */
											obj_t BgL_arg5067z00_2153;

											{	/* SawMill/regalloc.scm 555 */
												BgL_rtl_regzf2razf2_bglt BgL_obj4257z00_3892;

												BgL_obj4257z00_3892 =
													(BgL_rtl_regzf2razf2_bglt) (BgL_instance4334z00_4772);
												{
													obj_t BgL_auxz00_6359;

													{	/* SawMill/regalloc.scm 555 */
														BgL_objectz00_bglt BgL_auxz00_6360;

														BgL_auxz00_6360 =
															(BgL_objectz00_bglt) (BgL_obj4257z00_3892);
														BgL_auxz00_6359 =
															BGL_OBJECT_WIDENING(BgL_auxz00_6360);
													}
													BgL_arg5067z00_2153 =
														(((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_auxz00_6359))->BgL_interferez00);
												}
											}
											BgL_g4492z00_2143 =
												BGl_regsetzd2ze3listz31zzsaw_regsetz00(
												(BgL_regsetz00_bglt) (BgL_arg5067z00_2153));
										}
										{
											obj_t BgL_l4490z00_2145;

											BgL_l4490z00_2145 = BgL_g4492z00_2143;
										BgL_zc3anonymousza35062ze3z83_2146:
											if (NULLP(BgL_l4490z00_2145))
												{	/* SawMill/regalloc.scm 555 */
													BgL_testz00_6357 = ((bool_t) 0);
												}
											else
												{	/* SawMill/regalloc.scm 555 */
													bool_t BgL_testz00_6368;

													{	/* SawMill/regalloc.scm 554 */
														obj_t BgL_auxz00_6369;

														{	/* SawMill/regalloc.scm 554 */
															BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3895;

															BgL_obj4248z00_3895 =
																(BgL_rtl_regzf2razf2_bglt) (CAR
																(BgL_l4490z00_2145));
															{
																obj_t BgL_auxz00_6372;

																{	/* SawMill/regalloc.scm 554 */
																	BgL_objectz00_bglt BgL_auxz00_6373;

																	BgL_auxz00_6373 =
																		(BgL_objectz00_bglt) (BgL_obj4248z00_3895);
																	BgL_auxz00_6372 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_6373);
																}
																BgL_auxz00_6369 =
																	(((BgL_rtl_regzf2razf2_bglt)
																		CREF(BgL_auxz00_6372))->BgL_colorz00);
															}
														}
														BgL_testz00_6368 =
															(BgL_auxz00_6369 == BgL_regz00_2135);
													}
													if (BgL_testz00_6368)
														{	/* SawMill/regalloc.scm 555 */
															BgL_testz00_6357 = ((bool_t) 1);
														}
													else
														{
															obj_t BgL_l4490z00_6378;

															BgL_l4490z00_6378 = CDR(BgL_l4490z00_2145);
															BgL_l4490z00_2145 = BgL_l4490z00_6378;
															goto BgL_zc3anonymousza35062ze3z83_2146;
														}
												}
										}
									}
									if (BgL_testz00_6357)
										{	/* SawMill/regalloc.scm 553 */
											BgL_testz00_6356 = ((bool_t) 0);
										}
									else
										{	/* SawMill/regalloc.scm 553 */
											BgL_testz00_6356 = ((bool_t) 1);
										}
								}
								if (BgL_testz00_6356)
									{	/* SawMill/regalloc.scm 556 */
										bool_t BgL_testz00_6380;

										{	/* SawMill/regalloc.scm 556 */
											bool_t BgL_testz00_6381;

											{	/* SawMill/regalloc.scm 558 */
												obj_t BgL_arg5060z00_2141;

												{	/* SawMill/regalloc.scm 558 */
													BgL_rtl_regzf2razf2_bglt BgL_obj4260z00_3897;

													BgL_obj4260z00_3897 =
														(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_2135);
													{
														obj_t BgL_auxz00_6383;

														{	/* SawMill/regalloc.scm 558 */
															BgL_objectz00_bglt BgL_auxz00_6384;

															BgL_auxz00_6384 =
																(BgL_objectz00_bglt) (BgL_obj4260z00_3897);
															BgL_auxz00_6383 =
																BGL_OBJECT_WIDENING(BgL_auxz00_6384);
														}
														BgL_arg5060z00_2141 =
															(((BgL_rtl_regzf2razf2_bglt)
																CREF(BgL_auxz00_6383))->BgL_interfere2z00);
													}
												}
												BgL_testz00_6381 =
													BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
													(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_4773),
													(BgL_regsetz00_bglt) (BgL_arg5060z00_2141));
											}
											if (BgL_testz00_6381)
												{	/* SawMill/regalloc.scm 556 */
													BgL_testz00_6380 = ((bool_t) 0);
												}
											else
												{	/* SawMill/regalloc.scm 556 */
													BgL_testz00_6380 = ((bool_t) 1);
												}
										}
										if (BgL_testz00_6380)
											{	/* SawMill/regalloc.scm 556 */
												return BgL_regz00_2135;
											}
										else
											{	/* SawMill/regalloc.scm 556 */
												return BFALSE;
											}
									}
								else
									{	/* SawMill/regalloc.scm 553 */
										return BFALSE;
									}
							}
						else
							{	/* SawMill/regalloc.scm 552 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* <anonymous:5037> */
	obj_t BGl_zc3anonymousza35037ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4775, obj_t BgL_rz00_4777)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 529 */
			{	/* SawMill/regalloc.scm 530 */
				obj_t BgL_kz00_4776;

				BgL_kz00_4776 = PROCEDURE_REF(BgL_envz00_4775, (int) (((long) 0)));
				{
					obj_t BgL_rz00_2094;

					BgL_rz00_2094 = BgL_rz00_4777;
					{	/* SawMill/regalloc.scm 530 */
						bool_t BgL_testz00_6393;

						{	/* SawMill/regalloc.scm 530 */
							bool_t BgL_testz00_6394;

							{	/* SawMill/regalloc.scm 530 */
								BgL_rtl_regz00_bglt BgL_obj3358z00_3867;

								BgL_obj3358z00_3867 = (BgL_rtl_regz00_bglt) (BgL_rz00_2094);
								BgL_testz00_6394 =
									CBOOL(
									(((BgL_rtl_regz00_bglt) CREF(BgL_obj3358z00_3867))->
										BgL_hardwarez00));
							}
							if (BgL_testz00_6394)
								{	/* SawMill/regalloc.scm 530 */
									BgL_testz00_6393 = ((bool_t) 0);
								}
							else
								{	/* SawMill/regalloc.scm 530 */
									BgL_testz00_6393 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_6393)
							{	/* SawMill/regalloc.scm 531 */
								bool_t BgL_testz00_6398;

								{	/* SawMill/regalloc.scm 531 */
									long BgL_auxz00_6399;

									{	/* SawMill/regalloc.scm 531 */
										BgL_rtl_regzf2razf2_bglt BgL_regz00_3868;

										BgL_regz00_3868 =
											(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2094);
										{	/* SawMill/regalloc.scm 531 */
											BgL_regsetz00_bglt BgL_obj4070z00_3871;

											{	/* SawMill/regalloc.scm 531 */
												obj_t BgL_auxz00_6401;

												{
													obj_t BgL_auxz00_6402;

													{	/* SawMill/regalloc.scm 531 */
														BgL_objectz00_bglt BgL_auxz00_6403;

														BgL_auxz00_6403 =
															(BgL_objectz00_bglt) (BgL_regz00_3868);
														BgL_auxz00_6402 =
															BGL_OBJECT_WIDENING(BgL_auxz00_6403);
													}
													BgL_auxz00_6401 =
														(((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_auxz00_6402))->BgL_interfere2z00);
												}
												BgL_obj4070z00_3871 =
													(BgL_regsetz00_bglt) (BgL_auxz00_6401);
											}
											BgL_auxz00_6399 =
												(long) (
												(((BgL_regsetz00_bglt) CREF(BgL_obj4070z00_3871))->
													BgL_lengthz00));
									}}
									BgL_testz00_6398 =
										(BgL_auxz00_6399 < (long) CINT(BgL_kz00_4776));
								}
								if (BgL_testz00_6398)
									{	/* SawMill/regalloc.scm 531 */
										return BgL_rz00_2094;
									}
								else
									{	/* SawMill/regalloc.scm 531 */
										return BFALSE;
									}
							}
						else
							{	/* SawMill/regalloc.scm 530 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* simplify-reg! */
	obj_t
		BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt BgL_rz00_44)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 624 */
			{	/* SawMill/regalloc.scm 626 */
				obj_t BgL_arg5077z00_2173;

				{
					obj_t BgL_auxz00_6412;

					{	/* SawMill/regalloc.scm 626 */
						BgL_objectz00_bglt BgL_auxz00_6413;

						BgL_auxz00_6413 = (BgL_objectz00_bglt) (BgL_rz00_44);
						BgL_auxz00_6412 = BGL_OBJECT_WIDENING(BgL_auxz00_6413);
					}
					BgL_arg5077z00_2173 =
						(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6412))->
						BgL_interfere2z00);
				}
				{	/* SawMill/regalloc.scm 627 */
					obj_t BgL_zc3anonymousza35078ze3z83_4778;

					BgL_zc3anonymousza35078ze3z83_4778 =
						make_fx_procedure
						(BGl_zc3anonymousza35078ze3z83zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza35078ze3z83_4778, (int) (((long) 0)),
						(obj_t) (BgL_rz00_44));
					PROCEDURE_SET(BgL_zc3anonymousza35078ze3z83_4778, (int) (((long) 1)),
						(obj_t) (BgL_rz00_44));
					return
						BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3anonymousza35078ze3z83_4778,
						(BgL_regsetz00_bglt) (BgL_arg5077z00_2173));
				}
			}
		}
	}



/* <anonymous:5078> */
	obj_t BGl_zc3anonymousza35078ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4779, obj_t BgL_r2z00_4782)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 626 */
			{	/* SawMill/regalloc.scm 627 */
				obj_t BgL_rz00_4780;

				obj_t BgL_instance4342z00_4781;

				BgL_rz00_4780 = PROCEDURE_REF(BgL_envz00_4779, (int) (((long) 0)));
				BgL_instance4342z00_4781 =
					PROCEDURE_REF(BgL_envz00_4779, (int) (((long) 1)));
				{
					obj_t BgL_r2z00_2174;

					{	/* SawMill/regalloc.scm 627 */
						bool_t BgL_auxz00_6432;

						BgL_r2z00_2174 = BgL_r2z00_4782;
						{	/* SawMill/regalloc.scm 627 */
							obj_t BgL_arg5079z00_2176;

							{	/* SawMill/regalloc.scm 627 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4260z00_3910;

								BgL_obj4260z00_3910 =
									(BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_2174);
								{
									obj_t BgL_auxz00_6434;

									{	/* SawMill/regalloc.scm 627 */
										BgL_objectz00_bglt BgL_auxz00_6435;

										BgL_auxz00_6435 =
											(BgL_objectz00_bglt) (BgL_obj4260z00_3910);
										BgL_auxz00_6434 = BGL_OBJECT_WIDENING(BgL_auxz00_6435);
									}
									BgL_arg5079z00_2176 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6434))->
										BgL_interfere2z00);
							}}
							BGl_regsetzd2removez12zc0zzsaw_regsetz00(
								(BgL_regsetz00_bglt) (BgL_arg5079z00_2176),
								(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_4780));
						}
						{	/* SawMill/regalloc.scm 628 */
							obj_t BgL_arg5080z00_2177;

							{	/* SawMill/regalloc.scm 628 */
								BgL_rtl_regzf2razf2_bglt BgL_obj4260z00_3911;

								BgL_obj4260z00_3911 =
									(BgL_rtl_regzf2razf2_bglt) (BgL_instance4342z00_4781);
								{
									obj_t BgL_auxz00_6443;

									{	/* SawMill/regalloc.scm 628 */
										BgL_objectz00_bglt BgL_auxz00_6444;

										BgL_auxz00_6444 =
											(BgL_objectz00_bglt) (BgL_obj4260z00_3911);
										BgL_auxz00_6443 = BGL_OBJECT_WIDENING(BgL_auxz00_6444);
									}
									BgL_arg5080z00_2177 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6443))->
										BgL_interfere2z00);
							}}
							BgL_auxz00_6432 =
								BGl_regsetzd2removez12zc0zzsaw_regsetz00(
								(BgL_regsetz00_bglt) (BgL_arg5080z00_2177),
								(BgL_rtl_regzf2razf2_bglt) (BgL_r2z00_2174));
						}
						return BBOOL(BgL_auxz00_6432);
					}
				}
			}
		}
	}



/* rtl-map-registers! */
	obj_t BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_45, obj_t BgL_cregsz00_46, obj_t BgL_blocksz00_47)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 639 */
			{	/* SawMill/regalloc.scm 640 */
				obj_t BgL_colorsz00_2179;

				{	/* SawMill/regalloc.scm 640 */
					long BgL_arg5168z00_2331;

					BgL_arg5168z00_2331 =
						(bgl_list_length(BgL_pregsz00_45) +
						bgl_list_length(BgL_cregsz00_46));
					BgL_colorsz00_2179 =
						make_vector((int) (BgL_arg5168z00_2331), BUNSPEC);
				}
				{	/* SawMill/regalloc.scm 646 */
					obj_t BgL_mappingz00_2180;

					BgL_mappingz00_2180 = MAKE_CELL(BNIL);
					{	/* SawMill/regalloc.scm 641 */
						obj_t BgL_g4509z00_2183;

						BgL_g4509z00_2183 = bgl_append2(BgL_cregsz00_46, BgL_pregsz00_45);
						{
							obj_t BgL_l4507z00_2185;

							BgL_l4507z00_2185 = BgL_g4509z00_2183;
						BgL_zc3anonymousza35081ze3z83_2186:
							if (PAIRP(BgL_l4507z00_2185))
								{	/* SawMill/regalloc.scm 645 */
									{	/* SawMill/regalloc.scm 642 */
										obj_t BgL_rz00_2188;

										BgL_rz00_2188 = CAR(BgL_l4507z00_2185);
										{	/* SawMill/regalloc.scm 643 */
											bool_t BgL_testz00_6461;

											{	/* SawMill/regalloc.scm 643 */
												obj_t BgL_auxz00_6462;

												{	/* SawMill/regalloc.scm 643 */
													BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3917;

													BgL_obj4248z00_3917 =
														(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2188);
													{
														obj_t BgL_auxz00_6464;

														{	/* SawMill/regalloc.scm 643 */
															BgL_objectz00_bglt BgL_auxz00_6465;

															BgL_auxz00_6465 =
																(BgL_objectz00_bglt) (BgL_obj4248z00_3917);
															BgL_auxz00_6464 =
																BGL_OBJECT_WIDENING(BgL_auxz00_6465);
														}
														BgL_auxz00_6462 =
															(((BgL_rtl_regzf2razf2_bglt)
																CREF(BgL_auxz00_6464))->BgL_colorz00);
													}
												}
												BgL_testz00_6461 = INTEGERP(BgL_auxz00_6462);
											}
											if (BgL_testz00_6461)
												{	/* SawMill/regalloc.scm 644 */
													obj_t BgL_arg5084z00_2191;

													{	/* SawMill/regalloc.scm 644 */
														BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_3919;

														BgL_obj4248z00_3919 =
															(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2188);
														{
															obj_t BgL_auxz00_6471;

															{	/* SawMill/regalloc.scm 644 */
																BgL_objectz00_bglt BgL_auxz00_6472;

																BgL_auxz00_6472 =
																	(BgL_objectz00_bglt) (BgL_obj4248z00_3919);
																BgL_auxz00_6471 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_6472);
															}
															BgL_arg5084z00_2191 =
																(((BgL_rtl_regzf2razf2_bglt)
																	CREF(BgL_auxz00_6471))->BgL_colorz00);
														}
													}
													VECTOR_SET(BgL_colorsz00_2179,
														CINT(BgL_arg5084z00_2191), BgL_rz00_2188);
												}
											else
												{	/* SawMill/regalloc.scm 643 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l4507z00_6478;

										BgL_l4507z00_6478 = CDR(BgL_l4507z00_2185);
										BgL_l4507z00_2185 = BgL_l4507z00_6478;
										goto BgL_zc3anonymousza35081ze3z83_2186;
									}
								}
							else
								{	/* SawMill/regalloc.scm 645 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_l4525z00_2196;

						BgL_l4525z00_2196 = BgL_blocksz00_47;
					BgL_zc3anonymousza35087ze3z83_2197:
						if (PAIRP(BgL_l4525z00_2196))
							{	/* SawMill/regalloc.scm 685 */
								{	/* SawMill/regalloc.scm 686 */
									obj_t BgL_bz00_2199;

									BgL_bz00_2199 = CAR(BgL_l4525z00_2196);
									{	/* SawMill/regalloc.scm 686 */
										obj_t BgL_g4524z00_2200;

										{
											BgL_blockz00_bglt BgL_auxz00_6483;

											BgL_auxz00_6483 = (BgL_blockz00_bglt) (BgL_bz00_2199);
											BgL_g4524z00_2200 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_6483))->
												BgL_firstz00);
										}
										{
											obj_t BgL_l4522z00_2202;

											BgL_l4522z00_2202 = BgL_g4524z00_2200;
										BgL_zc3anonymousza35089ze3z83_2203:
											if (PAIRP(BgL_l4522z00_2202))
												{	/* SawMill/regalloc.scm 692 */
													{	/* SawMill/regalloc.scm 687 */
														obj_t BgL_iz00_2205;

														BgL_iz00_2205 = CAR(BgL_l4522z00_2202);
														{	/* SawMill/regalloc.scm 688 */
															bool_t BgL_testz00_6489;

															{	/* SawMill/regalloc.scm 688 */
																obj_t BgL_arg5094z00_2210;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6490;

																	BgL_auxz00_6490 =
																		(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																	BgL_arg5094z00_2210 =
																		(((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6490))->BgL_destz00);
																}
																BgL_testz00_6489 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_arg5094z00_2210,
																	BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
															}
															if (BgL_testz00_6489)
																{	/* SawMill/regalloc.scm 689 */
																	obj_t BgL_arg5092z00_2208;

																	{	/* SawMill/regalloc.scm 689 */
																		obj_t BgL_arg5093z00_2209;

																		{
																			BgL_rtl_insz00_bglt BgL_auxz00_6494;

																			BgL_auxz00_6494 =
																				(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																			BgL_arg5093z00_2209 =
																				(((BgL_rtl_insz00_bglt)
																					CREF(BgL_auxz00_6494))->BgL_destz00);
																		}
																		BgL_arg5092z00_2208 =
																			BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_2179, BgL_mappingz00_2180,
																			BgL_arg5093z00_2209);
																	}
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_6498;

																		BgL_auxz00_6498 =
																			(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																		((((BgL_rtl_insz00_bglt)
																					CREF(BgL_auxz00_6498))->BgL_destz00) =
																			((obj_t) BgL_arg5092z00_2208), BUNSPEC);
																	}
																}
															else
																{	/* SawMill/regalloc.scm 688 */
																	BFALSE;
																}
														}
														{	/* SawMill/regalloc.scm 690 */
															obj_t BgL_arg5095z00_2211;

															{	/* SawMill/regalloc.scm 690 */
																obj_t BgL_l4510z00_2212;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6501;

																	BgL_auxz00_6501 =
																		(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																	BgL_l4510z00_2212 =
																		(((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6501))->BgL_z52spillz52);
																}
																if (NULLP(BgL_l4510z00_2212))
																	{	/* SawMill/regalloc.scm 690 */
																		BgL_arg5095z00_2211 = BNIL;
																	}
																else
																	{	/* SawMill/regalloc.scm 690 */
																		obj_t BgL_head4512z00_2214;

																		BgL_head4512z00_2214 =
																			MAKE_PAIR
																			(BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_2179, BgL_mappingz00_2180,
																				CAR(BgL_l4510z00_2212)), BNIL);
																		{	/* SawMill/regalloc.scm 690 */
																			obj_t BgL_g4515z00_2215;

																			BgL_g4515z00_2215 =
																				CDR(BgL_l4510z00_2212);
																			{
																				obj_t BgL_l4510z00_2217;

																				obj_t BgL_tail4513z00_2218;

																				BgL_l4510z00_2217 = BgL_g4515z00_2215;
																				BgL_tail4513z00_2218 =
																					BgL_head4512z00_2214;
																			BgL_zc3anonymousza35097ze3z83_2219:
																				if (NULLP(BgL_l4510z00_2217))
																					{	/* SawMill/regalloc.scm 690 */
																						BgL_arg5095z00_2211 =
																							BgL_head4512z00_2214;
																					}
																				else
																					{	/* SawMill/regalloc.scm 690 */
																						obj_t BgL_newtail4514z00_2221;

																						BgL_newtail4514z00_2221 =
																							MAKE_PAIR
																							(BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																							(BgL_colorsz00_2179,
																								BgL_mappingz00_2180,
																								CAR(BgL_l4510z00_2217)), BNIL);
																						SET_CDR(BgL_tail4513z00_2218,
																							BgL_newtail4514z00_2221);
																						{
																							obj_t BgL_tail4513z00_6518;

																							obj_t BgL_l4510z00_6516;

																							BgL_l4510z00_6516 =
																								CDR(BgL_l4510z00_2217);
																							BgL_tail4513z00_6518 =
																								BgL_newtail4514z00_2221;
																							BgL_tail4513z00_2218 =
																								BgL_tail4513z00_6518;
																							BgL_l4510z00_2217 =
																								BgL_l4510z00_6516;
																							goto
																								BgL_zc3anonymousza35097ze3z83_2219;
																						}
																					}
																			}
																		}
																	}
															}
															{
																BgL_rtl_insz00_bglt BgL_auxz00_6519;

																BgL_auxz00_6519 =
																	(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																((((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6519))->BgL_z52spillz52) =
																	((obj_t) BgL_arg5095z00_2211), BUNSPEC);
															}
														}
														{	/* SawMill/regalloc.scm 691 */
															obj_t BgL_arg5106z00_2230;

															{	/* SawMill/regalloc.scm 691 */
																obj_t BgL_l4516z00_2231;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6522;

																	BgL_auxz00_6522 =
																		(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																	BgL_l4516z00_2231 =
																		(((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6522))->BgL_argsz00);
																}
																if (NULLP(BgL_l4516z00_2231))
																	{	/* SawMill/regalloc.scm 691 */
																		BgL_arg5106z00_2230 = BNIL;
																	}
																else
																	{	/* SawMill/regalloc.scm 691 */
																		obj_t BgL_head4518z00_2233;

																		BgL_head4518z00_2233 =
																			MAKE_PAIR
																			(BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_2179, BgL_mappingz00_2180,
																				CAR(BgL_l4516z00_2231)), BNIL);
																		{	/* SawMill/regalloc.scm 691 */
																			obj_t BgL_g4521z00_2234;

																			BgL_g4521z00_2234 =
																				CDR(BgL_l4516z00_2231);
																			{
																				obj_t BgL_l4516z00_2236;

																				obj_t BgL_tail4519z00_2237;

																				BgL_l4516z00_2236 = BgL_g4521z00_2234;
																				BgL_tail4519z00_2237 =
																					BgL_head4518z00_2233;
																			BgL_zc3anonymousza35108ze3z83_2238:
																				if (NULLP(BgL_l4516z00_2236))
																					{	/* SawMill/regalloc.scm 691 */
																						BgL_arg5106z00_2230 =
																							BgL_head4518z00_2233;
																					}
																				else
																					{	/* SawMill/regalloc.scm 691 */
																						obj_t BgL_newtail4520z00_2240;

																						BgL_newtail4520z00_2240 =
																							MAKE_PAIR
																							(BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																							(BgL_colorsz00_2179,
																								BgL_mappingz00_2180,
																								CAR(BgL_l4516z00_2236)), BNIL);
																						SET_CDR(BgL_tail4519z00_2237,
																							BgL_newtail4520z00_2240);
																						{
																							obj_t BgL_tail4519z00_6539;

																							obj_t BgL_l4516z00_6537;

																							BgL_l4516z00_6537 =
																								CDR(BgL_l4516z00_2236);
																							BgL_tail4519z00_6539 =
																								BgL_newtail4520z00_2240;
																							BgL_tail4519z00_2237 =
																								BgL_tail4519z00_6539;
																							BgL_l4516z00_2236 =
																								BgL_l4516z00_6537;
																							goto
																								BgL_zc3anonymousza35108ze3z83_2238;
																						}
																					}
																			}
																		}
																	}
															}
															{
																BgL_rtl_insz00_bglt BgL_auxz00_6540;

																BgL_auxz00_6540 =
																	(BgL_rtl_insz00_bglt) (BgL_iz00_2205);
																((((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6540))->BgL_argsz00) =
																	((obj_t) BgL_arg5106z00_2230), BUNSPEC);
															}
														}
													}
													{
														obj_t BgL_l4522z00_6543;

														BgL_l4522z00_6543 = CDR(BgL_l4522z00_2202);
														BgL_l4522z00_2202 = BgL_l4522z00_6543;
														goto BgL_zc3anonymousza35089ze3z83_2203;
													}
												}
											else
												{	/* SawMill/regalloc.scm 692 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4525z00_6545;

									BgL_l4525z00_6545 = CDR(BgL_l4525z00_2196);
									BgL_l4525z00_2196 = BgL_l4525z00_6545;
									goto BgL_zc3anonymousza35087ze3z83_2197;
								}
							}
						else
							{	/* SawMill/regalloc.scm 685 */
								((bool_t) 1);
							}
					}
					return BgL_blocksz00_47;
				}
			}
		}
	}



/* map-register */
	obj_t BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_colorsz00_4890, obj_t BgL_mappingz00_4889, obj_t BgL_oz00_2278)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 684 */
			{
				BgL_typez00_bglt BgL_tyz00_2253;

				BgL_rtl_regz00_bglt BgL_rz00_2254;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2278,
						BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2))
					{	/* SawMill/regalloc.scm 669 */
						BgL_typez00_bglt BgL_arg5138z00_2281;

						obj_t BgL_arg5139z00_2282;

						{
							BgL_rtl_regz00_bglt BgL_auxz00_6549;

							BgL_auxz00_6549 =
								(BgL_rtl_regz00_bglt) (
								(BgL_rtl_regzf2razf2_bglt) (BgL_oz00_2278));
							BgL_arg5138z00_2281 =
								(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_6549))->BgL_typez00);
						}
						{	/* SawMill/regalloc.scm 670 */
							BgL_rtl_regzf2razf2_bglt BgL_instance4348z00_2283;

							BgL_instance4348z00_2283 =
								(BgL_rtl_regzf2razf2_bglt) (BgL_oz00_2278);
							{	/* SawMill/regalloc.scm 672 */
								bool_t BgL_testz00_6554;

								{	/* SawMill/regalloc.scm 672 */
									obj_t BgL_auxz00_6555;

									{
										obj_t BgL_auxz00_6556;

										{	/* SawMill/regalloc.scm 672 */
											BgL_objectz00_bglt BgL_auxz00_6557;

											BgL_auxz00_6557 =
												(BgL_objectz00_bglt) (BgL_instance4348z00_2283);
											BgL_auxz00_6556 = BGL_OBJECT_WIDENING(BgL_auxz00_6557);
										}
										BgL_auxz00_6555 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6556))->
											BgL_colorz00);
									}
									BgL_testz00_6554 = INTEGERP(BgL_auxz00_6555);
								}
								if (BgL_testz00_6554)
									{	/* SawMill/regalloc.scm 673 */
										obj_t BgL_arg5141z00_2285;

										{
											obj_t BgL_auxz00_6562;

											{	/* SawMill/regalloc.scm 673 */
												BgL_objectz00_bglt BgL_auxz00_6563;

												BgL_auxz00_6563 =
													(BgL_objectz00_bglt) (BgL_instance4348z00_2283);
												BgL_auxz00_6562 = BGL_OBJECT_WIDENING(BgL_auxz00_6563);
											}
											BgL_arg5141z00_2285 =
												(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6562))->
												BgL_colorz00);
										}
										BgL_arg5139z00_2282 =
											VECTOR_REF(BgL_colorsz00_4890, CINT(BgL_arg5141z00_2285));
									}
								else
									{	/* SawMill/regalloc.scm 674 */
										bool_t BgL_testz00_6569;

										{	/* SawMill/regalloc.scm 674 */
											obj_t BgL_arg5143z00_2287;

											{
												obj_t BgL_auxz00_6570;

												{	/* SawMill/regalloc.scm 674 */
													BgL_objectz00_bglt BgL_auxz00_6571;

													BgL_auxz00_6571 =
														(BgL_objectz00_bglt) (BgL_instance4348z00_2283);
													BgL_auxz00_6570 =
														BGL_OBJECT_WIDENING(BgL_auxz00_6571);
												}
												BgL_arg5143z00_2287 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6570))->
													BgL_colorz00);
											}
											BgL_testz00_6569 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg5143z00_2287,
												BGl_rtl_regz00zzsaw_defsz00);
										}
										if (BgL_testz00_6569)
											{
												obj_t BgL_auxz00_6576;

												{	/* SawMill/regalloc.scm 674 */
													BgL_objectz00_bglt BgL_auxz00_6577;

													BgL_auxz00_6577 =
														(BgL_objectz00_bglt) (BgL_instance4348z00_2283);
													BgL_auxz00_6576 =
														BGL_OBJECT_WIDENING(BgL_auxz00_6577);
												}
												BgL_arg5139z00_2282 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6576))->
													BgL_colorz00);
											}
										else
											{	/* SawMill/regalloc.scm 674 */
												BgL_arg5139z00_2282 = BgL_oz00_2278;
											}
									}
							}
						}
						BgL_tyz00_2253 = BgL_arg5138z00_2281;
						BgL_rz00_2254 = (BgL_rtl_regz00_bglt) (BgL_arg5139z00_2282);
						{	/* SawMill/regalloc.scm 649 */
							bool_t BgL_testz00_6581;

							{	/* SawMill/regalloc.scm 649 */
								obj_t BgL_obj4246z00_3966;

								BgL_obj4246z00_3966 = (obj_t) (BgL_rz00_2254);
								BgL_testz00_6581 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_3966,
									BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
							}
							if (BgL_testz00_6581)
								{	/* SawMill/regalloc.scm 649 */
									if (CBOOL(
											(((BgL_rtl_regz00_bglt) CREF(BgL_rz00_2254))->
												BgL_hardwarez00)))
										{	/* SawMill/regalloc.scm 651 */
											if (
												((obj_t) (BgL_tyz00_2253) ==
													BGl_za2objza2z00zztype_cachez00))
												{	/* SawMill/regalloc.scm 653 */
													return
														(obj_t) (
														(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2254));
												}
											else
												{	/* SawMill/regalloc.scm 656 */
													obj_t BgL_kz00_2259;

													BgL_kz00_2259 =
														MAKE_PAIR(
														(obj_t) (
															(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2254)),
														(obj_t) (BgL_tyz00_2253));
													{	/* SawMill/regalloc.scm 657 */
														obj_t BgL_cz00_2260;

														BgL_cz00_2260 =
															BGl_assocz00zz__r4_pairs_and_lists_6_3z00
															(BgL_kz00_2259, CELL_REF(BgL_mappingz00_4889));
														if (PAIRP(BgL_cz00_2260))
															{	/* SawMill/regalloc.scm 658 */
																return CDR(BgL_cz00_2260);
															}
														else
															{	/* SawMill/regalloc.scm 660 */
																BgL_rtl_regzf2razf2_bglt BgL_newrz00_2262;

																{	/* SawMill/regalloc.scm 660 */
																	BgL_rtl_regzf2razf2_bglt
																		BgL_duplicated4346z00_2264;
																	BgL_duplicated4346z00_2264 =
																		(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2254);
																	{	/* SawMill/regalloc.scm 660 */
																		BgL_rtl_regzf2razf2_bglt
																			BgL_new4347z00_2265;
																		{	/* SawMill/regalloc.scm 660 */
																			obj_t BgL_arg5125z00_2266;

																			obj_t BgL_arg5126z00_2267;

																			obj_t BgL_arg5127z00_2268;

																			obj_t BgL_arg5128z00_2269;

																			obj_t BgL_arg5129z00_2270;

																			int BgL_arg5130z00_2271;

																			obj_t BgL_arg5131z00_2272;

																			obj_t BgL_arg5132z00_2273;

																			int BgL_arg5133z00_2274;

																			obj_t BgL_arg5134z00_2275;

																			obj_t BgL_arg5135z00_2276;

																			{
																				BgL_rtl_regz00_bglt BgL_auxz00_6601;

																				BgL_auxz00_6601 =
																					(BgL_rtl_regz00_bglt)
																					(BgL_duplicated4346z00_2264);
																				BgL_arg5125z00_2266 =
																					(((BgL_rtl_regz00_bglt)
																						CREF(BgL_auxz00_6601))->BgL_varz00);
																			}
																			{
																				BgL_rtl_regz00_bglt BgL_auxz00_6604;

																				BgL_auxz00_6604 =
																					(BgL_rtl_regz00_bglt)
																					(BgL_duplicated4346z00_2264);
																				BgL_arg5126z00_2267 =
																					(((BgL_rtl_regz00_bglt)
																						CREF(BgL_auxz00_6604))->
																					BgL_onexprzf3zf3);
																			}
																			{
																				BgL_rtl_regz00_bglt BgL_auxz00_6607;

																				BgL_auxz00_6607 =
																					(BgL_rtl_regz00_bglt)
																					(BgL_duplicated4346z00_2264);
																				BgL_arg5127z00_2268 =
																					(((BgL_rtl_regz00_bglt)
																						CREF(BgL_auxz00_6607))->
																					BgL_namez00);
																			}
																			{	/* SawMill/regalloc.scm 661 */

																				{	/* SawMill/regalloc.scm 661 */

																					BgL_arg5128z00_2269 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																			}}
																			{
																				BgL_rtl_regz00_bglt BgL_auxz00_6611;

																				BgL_auxz00_6611 =
																					(BgL_rtl_regz00_bglt)
																					(BgL_duplicated4346z00_2264);
																				BgL_arg5129z00_2270 =
																					(((BgL_rtl_regz00_bglt)
																						CREF(BgL_auxz00_6611))->
																					BgL_hardwarez00);
																			}
																			{
																				obj_t BgL_auxz00_6614;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6615;

																					BgL_auxz00_6615 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6614 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6615);
																				}
																				BgL_arg5130z00_2271 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6614))->BgL_numz00);
																			}
																			{
																				obj_t BgL_auxz00_6619;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6620;

																					BgL_auxz00_6620 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6619 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6620);
																				}
																				BgL_arg5131z00_2272 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6619))->
																					BgL_colorz00);
																			}
																			{
																				obj_t BgL_auxz00_6624;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6625;

																					BgL_auxz00_6625 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6624 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6625);
																				}
																				BgL_arg5132z00_2273 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6624))->
																					BgL_coalescez00);
																			}
																			{
																				obj_t BgL_auxz00_6629;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6630;

																					BgL_auxz00_6630 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6629 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6630);
																				}
																				BgL_arg5133z00_2274 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6629))->
																					BgL_occurrencesz00);
																			}
																			{
																				obj_t BgL_auxz00_6634;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6635;

																					BgL_auxz00_6635 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6634 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6635);
																				}
																				BgL_arg5134z00_2275 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6634))->
																					BgL_interferez00);
																			}
																			{
																				obj_t BgL_auxz00_6639;

																				{	/* SawMill/regalloc.scm 660 */
																					BgL_objectz00_bglt BgL_auxz00_6640;

																					BgL_auxz00_6640 =
																						(BgL_objectz00_bglt)
																						(BgL_duplicated4346z00_2264);
																					BgL_auxz00_6639 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_6640);
																				}
																				BgL_arg5135z00_2276 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						CREF(BgL_auxz00_6639))->
																					BgL_interfere2z00);
																			}
																			{	/* SawMill/regalloc.scm 660 */
																				BgL_rtl_regzf2razf2_bglt
																					BgL_res5545z00_4020;
																				{	/* SawMill/regalloc.scm 660 */
																					BgL_rtl_regz00_bglt
																						BgL_aux4221z00_3992;
																					BgL_aux4221z00_3992 =
																						BGl_makezd2rtl_regzd2zzsaw_defsz00
																						(BgL_tyz00_2253,
																						BgL_arg5125z00_2266,
																						BgL_arg5126z00_2267,
																						BgL_arg5127z00_2268,
																						BgL_arg5128z00_2269,
																						BgL_arg5129z00_2270);
																					BGL_OBJECT_CLASS_NUM_SET(
																						(BgL_objectz00_bglt)
																						(BgL_aux4221z00_3992),
																						BGl_classzd2numzd2zz__objectz00
																						(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
																					{	/* SawMill/regalloc.scm 660 */
																						BgL_rtl_regzf2razf2_bglt
																							BgL_arg5292z00_3994;
																						{	/* SawMill/regalloc.scm 660 */
																							BgL_rtl_regzf2razf2_bglt
																								BgL_res5544z00_4019;
																							{	/* SawMill/regalloc.scm 660 */
																								BgL_rtl_regzf2razf2_bglt
																									BgL_new4207z00_4004;
																								BgL_new4207z00_4004 =
																									((BgL_rtl_regzf2razf2_bglt)
																									BREF(GC_MALLOC(sizeof(struct
																												BgL_rtl_regzf2razf2_bgl))));
																								{	/* SawMill/regalloc.scm 660 */
																									BgL_rtl_regzf2razf2_bglt
																										BgL_res5543z00_4018;
																									{	/* SawMill/regalloc.scm 660 */
																										BgL_rtl_regzf2razf2_bglt
																											BgL_new4229z00_4005;
																										BgL_new4229z00_4005 =
																											BgL_new4207z00_4004;
																										{	/* SawMill/regalloc.scm 660 */
																											int BgL_num4223z00_4012;

																											obj_t
																												BgL_color4224z00_4013;
																											obj_t
																												BgL_coalesce4225z00_4014;
																											int
																												BgL_occurrences4226z00_4015;
																											obj_t
																												BgL_interfere4227z00_4016;
																											obj_t
																												BgL_interfere24228z00_4017;
																											BgL_num4223z00_4012 =
																												BgL_arg5130z00_2271;
																											BgL_color4224z00_4013 =
																												BgL_arg5131z00_2272;
																											BgL_coalesce4225z00_4014 =
																												BgL_arg5132z00_2273;
																											BgL_occurrences4226z00_4015
																												= BgL_arg5133z00_2274;
																											BgL_interfere4227z00_4016
																												= BgL_arg5134z00_2275;
																											BgL_interfere24228z00_4017
																												= BgL_arg5135z00_2276;
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_numz00) = ((int) BgL_num4223z00_4012), BUNSPEC);
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_colorz00) = ((obj_t) BgL_color4224z00_4013), BUNSPEC);
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_coalescez00) = ((obj_t) BgL_coalesce4225z00_4014), BUNSPEC);
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_occurrencesz00) = ((int) BgL_occurrences4226z00_4015), BUNSPEC);
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_interferez00) = ((obj_t) BgL_interfere4227z00_4016), BUNSPEC);
																											((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4005))->BgL_interfere2z00) = ((obj_t) BgL_interfere24228z00_4017), BUNSPEC);
																											BgL_res5543z00_4018 =
																												BgL_new4229z00_4005;
																									}} BgL_res5543z00_4018;
																								}
																								BgL_res5544z00_4019 =
																									BgL_new4207z00_4004;
																							}
																							BgL_arg5292z00_3994 =
																								BgL_res5544z00_4019;
																						}
																						{	/* SawMill/regalloc.scm 660 */
																							obj_t BgL_auxz00_6657;

																							BgL_objectz00_bglt
																								BgL_auxz00_6655;
																							BgL_auxz00_6657 =
																								(obj_t) (BgL_arg5292z00_3994);
																							BgL_auxz00_6655 =
																								(BgL_objectz00_bglt)
																								(BgL_aux4221z00_3992);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_auxz00_6655,
																								BgL_auxz00_6657);
																					}}
																					BgL_res5545z00_4020 =
																						((BgL_rtl_regzf2razf2_bglt)
																						(BgL_rtl_regzf2razf2_bglt)
																						(BgL_aux4221z00_3992));
																				}
																				BgL_new4347z00_2265 =
																					BgL_res5545z00_4020;
																		}}
																		{	/* SawMill/regalloc.scm 660 */

																			BgL_newrz00_2262 = BgL_new4347z00_2265;
																}}}
																{	/* SawMill/regalloc.scm 663 */
																	obj_t BgL_auxz00_4891;

																	{	/* SawMill/regalloc.scm 663 */
																		obj_t BgL_arg5124z00_2263;

																		BgL_arg5124z00_2263 =
																			MAKE_PAIR(BgL_kz00_2259,
																			(obj_t) (BgL_newrz00_2262));
																		BgL_auxz00_4891 =
																			MAKE_PAIR(BgL_arg5124z00_2263,
																			CELL_REF(BgL_mappingz00_4889));
																	}
																	CELL_SET(BgL_mappingz00_4889,
																		BgL_auxz00_4891);
																}
																return (obj_t) (BgL_newrz00_2262);
															}
													}
												}
										}
									else
										{	/* SawMill/regalloc.scm 651 */
											return
												(obj_t) ((BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2254));
										}
								}
							else
								{	/* SawMill/regalloc.scm 649 */
									return (obj_t) (BgL_rz00_2254);
								}
						}
					}
				else
					{	/* SawMill/regalloc.scm 667 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2278,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/regalloc.scm 678 */
								{	/* SawMill/regalloc.scm 679 */
									BgL_rtl_insz00_bglt BgL_instance4350z00_2290;

									BgL_instance4350z00_2290 =
										(BgL_rtl_insz00_bglt) (BgL_oz00_2278);
									{	/* SawMill/regalloc.scm 680 */
										obj_t BgL_arg5146z00_2291;

										{	/* SawMill/regalloc.scm 680 */
											obj_t BgL_l4495z00_2292;

											BgL_l4495z00_2292 =
												(((BgL_rtl_insz00_bglt)
													CREF(BgL_instance4350z00_2290))->BgL_z52spillz52);
											if (NULLP(BgL_l4495z00_2292))
												{	/* SawMill/regalloc.scm 680 */
													BgL_arg5146z00_2291 = BNIL;
												}
											else
												{	/* SawMill/regalloc.scm 680 */
													obj_t BgL_head4497z00_2294;

													{	/* SawMill/regalloc.scm 680 */
														obj_t BgL_arg5154z00_2307;

														{	/* SawMill/regalloc.scm 680 */
															obj_t BgL_arg5156z00_2309;

															BgL_arg5156z00_2309 = CAR(BgL_l4495z00_2292);
															BgL_arg5154z00_2307 =
																BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																(BgL_colorsz00_4890, BgL_mappingz00_4889,
																BgL_arg5156z00_2309);
														}
														BgL_head4497z00_2294 =
															MAKE_PAIR(BgL_arg5154z00_2307, BNIL);
													}
													{	/* SawMill/regalloc.scm 680 */
														obj_t BgL_g4500z00_2295;

														BgL_g4500z00_2295 = CDR(BgL_l4495z00_2292);
														{
															obj_t BgL_l4495z00_2297;

															obj_t BgL_tail4498z00_2298;

															BgL_l4495z00_2297 = BgL_g4500z00_2295;
															BgL_tail4498z00_2298 = BgL_head4497z00_2294;
														BgL_zc3anonymousza35148ze3z83_2299:
															if (NULLP(BgL_l4495z00_2297))
																{	/* SawMill/regalloc.scm 680 */
																	BgL_arg5146z00_2291 = BgL_head4497z00_2294;
																}
															else
																{	/* SawMill/regalloc.scm 680 */
																	obj_t BgL_newtail4499z00_2301;

																	{	/* SawMill/regalloc.scm 680 */
																		obj_t BgL_arg5151z00_2303;

																		{	/* SawMill/regalloc.scm 680 */
																			obj_t BgL_arg5153z00_2305;

																			BgL_arg5153z00_2305 =
																				CAR(BgL_l4495z00_2297);
																			BgL_arg5151z00_2303 =
																				BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																				(BgL_colorsz00_4890,
																				BgL_mappingz00_4889,
																				BgL_arg5153z00_2305);
																		}
																		BgL_newtail4499z00_2301 =
																			MAKE_PAIR(BgL_arg5151z00_2303, BNIL);
																	}
																	SET_CDR(BgL_tail4498z00_2298,
																		BgL_newtail4499z00_2301);
																	{
																		obj_t BgL_tail4498z00_6688;

																		obj_t BgL_l4495z00_6686;

																		BgL_l4495z00_6686 = CDR(BgL_l4495z00_2297);
																		BgL_tail4498z00_6688 =
																			BgL_newtail4499z00_2301;
																		BgL_tail4498z00_2298 = BgL_tail4498z00_6688;
																		BgL_l4495z00_2297 = BgL_l4495z00_6686;
																		goto BgL_zc3anonymousza35148ze3z83_2299;
																	}
																}
														}
													}
												}
										}
										((((BgL_rtl_insz00_bglt) CREF(BgL_instance4350z00_2290))->
												BgL_z52spillz52) =
											((obj_t) BgL_arg5146z00_2291), BUNSPEC);
									}
									{	/* SawMill/regalloc.scm 681 */
										obj_t BgL_arg5157z00_2310;

										{	/* SawMill/regalloc.scm 681 */
											obj_t BgL_l4501z00_2311;

											BgL_l4501z00_2311 =
												(((BgL_rtl_insz00_bglt)
													CREF(BgL_instance4350z00_2290))->BgL_argsz00);
											if (NULLP(BgL_l4501z00_2311))
												{	/* SawMill/regalloc.scm 681 */
													BgL_arg5157z00_2310 = BNIL;
												}
											else
												{	/* SawMill/regalloc.scm 681 */
													obj_t BgL_head4503z00_2313;

													{	/* SawMill/regalloc.scm 681 */
														obj_t BgL_arg5165z00_2326;

														{	/* SawMill/regalloc.scm 681 */
															obj_t BgL_arg5167z00_2328;

															BgL_arg5167z00_2328 = CAR(BgL_l4501z00_2311);
															BgL_arg5165z00_2326 =
																BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																(BgL_colorsz00_4890, BgL_mappingz00_4889,
																BgL_arg5167z00_2328);
														}
														BgL_head4503z00_2313 =
															MAKE_PAIR(BgL_arg5165z00_2326, BNIL);
													}
													{	/* SawMill/regalloc.scm 681 */
														obj_t BgL_g4506z00_2314;

														BgL_g4506z00_2314 = CDR(BgL_l4501z00_2311);
														{
															obj_t BgL_l4501z00_2316;

															obj_t BgL_tail4504z00_2317;

															BgL_l4501z00_2316 = BgL_g4506z00_2314;
															BgL_tail4504z00_2317 = BgL_head4503z00_2313;
														BgL_zc3anonymousza35159ze3z83_2318:
															if (NULLP(BgL_l4501z00_2316))
																{	/* SawMill/regalloc.scm 681 */
																	BgL_arg5157z00_2310 = BgL_head4503z00_2313;
																}
															else
																{	/* SawMill/regalloc.scm 681 */
																	obj_t BgL_newtail4505z00_2320;

																	{	/* SawMill/regalloc.scm 681 */
																		obj_t BgL_arg5162z00_2322;

																		{	/* SawMill/regalloc.scm 681 */
																			obj_t BgL_arg5164z00_2324;

																			BgL_arg5164z00_2324 =
																				CAR(BgL_l4501z00_2316);
																			BgL_arg5162z00_2322 =
																				BGl_mapzd2registerzd2zzsaw_registerzd2allocationzd2
																				(BgL_colorsz00_4890,
																				BgL_mappingz00_4889,
																				BgL_arg5164z00_2324);
																		}
																		BgL_newtail4505z00_2320 =
																			MAKE_PAIR(BgL_arg5162z00_2322, BNIL);
																	}
																	SET_CDR(BgL_tail4504z00_2317,
																		BgL_newtail4505z00_2320);
																	{
																		obj_t BgL_tail4504z00_6705;

																		obj_t BgL_l4501z00_6703;

																		BgL_l4501z00_6703 = CDR(BgL_l4501z00_2316);
																		BgL_tail4504z00_6705 =
																			BgL_newtail4505z00_2320;
																		BgL_tail4504z00_2317 = BgL_tail4504z00_6705;
																		BgL_l4501z00_2316 = BgL_l4501z00_6703;
																		goto BgL_zc3anonymousza35159ze3z83_2318;
																	}
																}
														}
													}
												}
										}
										((((BgL_rtl_insz00_bglt) CREF(BgL_instance4350z00_2290))->
												BgL_argsz00) = ((obj_t) BgL_arg5157z00_2310), BUNSPEC);
									}
								}
								return BgL_oz00_2278;
							}
						else
							{	/* SawMill/regalloc.scm 678 */
								return BgL_oz00_2278;
							}
					}
			}
		}
	}



/* remove-nop-move! */
	obj_t BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_48)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 701 */
			{	/* SawMill/regalloc.scm 729 */
				obj_t BgL_nz00_2337;

				{	/* SawMill/regalloc.scm 729 */
					obj_t BgL_runner5186z00_2360;

					if (NULLP(BgL_blocksz00_48))
						{	/* SawMill/regalloc.scm 729 */
							BgL_runner5186z00_2360 = BNIL;
						}
					else
						{	/* SawMill/regalloc.scm 729 */
							obj_t BgL_head4529z00_2344;

							{	/* SawMill/regalloc.scm 729 */
								long BgL_arg5183z00_2357;

								BgL_arg5183z00_2357 =
									BGl_removezd2blockz12zc0zzsaw_registerzd2allocationzd2(CAR
									(BgL_blocksz00_48));
								BgL_head4529z00_2344 =
									MAKE_PAIR(BINT(BgL_arg5183z00_2357), BNIL);
							}
							{	/* SawMill/regalloc.scm 729 */
								obj_t BgL_g4532z00_2345;

								BgL_g4532z00_2345 = CDR(BgL_blocksz00_48);
								{
									obj_t BgL_l4527z00_2347;

									obj_t BgL_tail4530z00_2348;

									BgL_l4527z00_2347 = BgL_g4532z00_2345;
									BgL_tail4530z00_2348 = BgL_head4529z00_2344;
								BgL_zc3anonymousza35177ze3z83_2349:
									if (NULLP(BgL_l4527z00_2347))
										{	/* SawMill/regalloc.scm 729 */
											BgL_runner5186z00_2360 = BgL_head4529z00_2344;
										}
									else
										{	/* SawMill/regalloc.scm 729 */
											obj_t BgL_newtail4531z00_2351;

											{	/* SawMill/regalloc.scm 729 */
												long BgL_arg5180z00_2353;

												BgL_arg5180z00_2353 =
													BGl_removezd2blockz12zc0zzsaw_registerzd2allocationzd2
													(CAR(BgL_l4527z00_2347));
												BgL_newtail4531z00_2351 =
													MAKE_PAIR(BINT(BgL_arg5180z00_2353), BNIL);
											}
											SET_CDR(BgL_tail4530z00_2348, BgL_newtail4531z00_2351);
											{
												obj_t BgL_tail4530z00_6723;

												obj_t BgL_l4527z00_6721;

												BgL_l4527z00_6721 = CDR(BgL_l4527z00_2347);
												BgL_tail4530z00_6723 = BgL_newtail4531z00_2351;
												BgL_tail4530z00_2348 = BgL_tail4530z00_6723;
												BgL_l4527z00_2347 = BgL_l4527z00_6721;
												goto BgL_zc3anonymousza35177ze3z83_2349;
											}
										}
								}
							}
						}
					BgL_nz00_2337 =
						BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner5186z00_2360);
				}
				{	/* SawMill/regalloc.scm 730 */
					obj_t BgL_list5172z00_2338;

					{	/* SawMill/regalloc.scm 730 */
						obj_t BgL_arg5174z00_2340;

						{	/* SawMill/regalloc.scm 730 */
							obj_t BgL_arg5175z00_2341;

							BgL_arg5175z00_2341 =
								MAKE_PAIR(BGl_string5614z00zzsaw_registerzd2allocationzd2,
								BNIL);
							BgL_arg5174z00_2340 =
								MAKE_PAIR(BgL_nz00_2337, BgL_arg5175z00_2341);
						}
						BgL_list5172z00_2338 =
							MAKE_PAIR(BGl_string5615z00zzsaw_registerzd2allocationzd2,
							BgL_arg5174z00_2340);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list5172z00_2338);
		}}}
	}



/* remove-block! */
	long BGl_removezd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_bz00_2374)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 728 */
			{
				obj_t BgL_iz00_2361;

				{	/* SawMill/regalloc.scm 709 */
					obj_t BgL_g4359z00_2376;

					{
						BgL_blockz00_bglt BgL_auxz00_6730;

						BgL_auxz00_6730 = (BgL_blockz00_bglt) (BgL_bz00_2374);
						BgL_g4359z00_2376 =
							(((BgL_blockz00_bglt) CREF(BgL_auxz00_6730))->BgL_firstz00);
					}
					{
						obj_t BgL_insz00_2378;

						obj_t BgL_prevz00_2379;

						long BgL_nz00_2380;

						BgL_insz00_2378 = BgL_g4359z00_2376;
						BgL_prevz00_2379 = BFALSE;
						BgL_nz00_2380 = ((long) 0);
					BgL_zc3anonymousza35196ze3z83_2381:
						if (PAIRP(BgL_insz00_2378))
							{	/* SawMill/regalloc.scm 713 */
								bool_t BgL_testz00_6735;

								BgL_iz00_2361 = CAR(BgL_insz00_2378);
								{	/* SawMill/regalloc.scm 704 */
									bool_t BgL_testz00_6736;

									{	/* SawMill/regalloc.scm 704 */
										BgL_rtl_funz00_bglt BgL_arg5194z00_2373;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_6737;

											BgL_auxz00_6737 = (BgL_rtl_insz00_bglt) (BgL_iz00_2361);
											BgL_arg5194z00_2373 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6737))->
												BgL_funz00);
										}
										{	/* SawMill/regalloc.scm 704 */
											obj_t BgL_obj3588z00_4075;

											BgL_obj3588z00_4075 = (obj_t) (BgL_arg5194z00_2373);
											BgL_testz00_6736 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3588z00_4075,
												BGl_rtl_movz00zzsaw_defsz00);
										}
									}
									if (BgL_testz00_6736)
										{	/* SawMill/regalloc.scm 705 */
											bool_t BgL_testz00_6742;

											{	/* SawMill/regalloc.scm 705 */
												obj_t BgL_auxz00_6743;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_6744;

													BgL_auxz00_6744 =
														(BgL_rtl_insz00_bglt) (BgL_iz00_2361);
													BgL_auxz00_6743 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6744))->
														BgL_argsz00);
												}
												BgL_testz00_6742 = PAIRP(BgL_auxz00_6743);
											}
											if (BgL_testz00_6742)
												{	/* SawMill/regalloc.scm 706 */
													bool_t BgL_testz00_6748;

													{	/* SawMill/regalloc.scm 706 */
														obj_t BgL_auxz00_6749;

														{	/* SawMill/regalloc.scm 706 */
															obj_t BgL_pairz00_4079;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_6750;

																BgL_auxz00_6750 =
																	(BgL_rtl_insz00_bglt) (BgL_iz00_2361);
																BgL_pairz00_4079 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_6750))->BgL_argsz00);
															}
															BgL_auxz00_6749 = CDR(BgL_pairz00_4079);
														}
														BgL_testz00_6748 = NULLP(BgL_auxz00_6749);
													}
													if (BgL_testz00_6748)
														{	/* SawMill/regalloc.scm 707 */
															obj_t BgL_auxz00_6759;

															obj_t BgL_auxz00_6755;

															{	/* SawMill/regalloc.scm 707 */
																obj_t BgL_pairz00_4083;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6760;

																	BgL_auxz00_6760 =
																		(BgL_rtl_insz00_bglt) (BgL_iz00_2361);
																	BgL_pairz00_4083 =
																		(((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6760))->BgL_argsz00);
																}
																BgL_auxz00_6759 = CAR(BgL_pairz00_4083);
															}
															{
																BgL_rtl_insz00_bglt BgL_auxz00_6756;

																BgL_auxz00_6756 =
																	(BgL_rtl_insz00_bglt) (BgL_iz00_2361);
																BgL_auxz00_6755 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_6756))->BgL_destz00);
															}
															BgL_testz00_6735 =
																(BgL_auxz00_6755 == BgL_auxz00_6759);
														}
													else
														{	/* SawMill/regalloc.scm 706 */
															BgL_testz00_6735 = ((bool_t) 0);
														}
												}
											else
												{	/* SawMill/regalloc.scm 705 */
													BgL_testz00_6735 = ((bool_t) 0);
												}
										}
									else
										{	/* SawMill/regalloc.scm 704 */
											BgL_testz00_6735 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_6735)
									{	/* SawMill/regalloc.scm 714 */
										obj_t BgL_instance4360z00_2384;

										BgL_instance4360z00_2384 = CAR(BgL_insz00_2378);
										if (PAIRP(BgL_prevz00_2379))
											{	/* SawMill/regalloc.scm 716 */
												{	/* SawMill/regalloc.scm 717 */
													obj_t BgL_auxz00_6769;

													BgL_auxz00_6769 = CDR(BgL_insz00_2378);
													SET_CDR(BgL_prevz00_2379, BgL_auxz00_6769);
												}
												{
													long BgL_nz00_6774;

													obj_t BgL_insz00_6772;

													BgL_insz00_6772 = CDR(BgL_insz00_2378);
													BgL_nz00_6774 = (((long) 1) + BgL_nz00_2380);
													BgL_nz00_2380 = BgL_nz00_6774;
													BgL_insz00_2378 = BgL_insz00_6772;
													goto BgL_zc3anonymousza35196ze3z83_2381;
												}
											}
										else
											{	/* SawMill/regalloc.scm 716 */
												if (NULLP(CDR(BgL_insz00_2378)))
													{	/* SawMill/regalloc.scm 719 */
														{	/* SawMill/regalloc.scm 720 */
															BgL_rtl_nopz00_bglt BgL_arg5204z00_2390;

															BgL_arg5204z00_2390 =
																BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
															{
																BgL_rtl_funz00_bglt BgL_auxz00_6782;

																BgL_rtl_insz00_bglt BgL_auxz00_6780;

																BgL_auxz00_6782 =
																	(BgL_rtl_funz00_bglt) (BgL_arg5204z00_2390);
																BgL_auxz00_6780 =
																	(BgL_rtl_insz00_bglt)
																	(BgL_instance4360z00_2384);
																((((BgL_rtl_insz00_bglt)
																			CREF(BgL_auxz00_6780))->BgL_funz00) =
																	((BgL_rtl_funz00_bglt) BgL_auxz00_6782),
																	BUNSPEC);
															}
														}
														{
															BgL_rtl_insz00_bglt BgL_auxz00_6785;

															BgL_auxz00_6785 =
																(BgL_rtl_insz00_bglt)
																(BgL_instance4360z00_2384);
															((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6785))->
																	BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
														}
														{
															BgL_rtl_insz00_bglt BgL_auxz00_6788;

															BgL_auxz00_6788 =
																(BgL_rtl_insz00_bglt)
																(BgL_instance4360z00_2384);
															((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6788))->
																	BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
														}
														return (((long) 1) + BgL_nz00_2380);
													}
												else
													{	/* SawMill/regalloc.scm 719 */
														{
															obj_t BgL_auxz00_6794;

															BgL_blockz00_bglt BgL_auxz00_6792;

															BgL_auxz00_6794 = CDR(BgL_insz00_2378);
															BgL_auxz00_6792 =
																(BgL_blockz00_bglt) (BgL_bz00_2374);
															((((BgL_blockz00_bglt) CREF(BgL_auxz00_6792))->
																	BgL_firstz00) =
																((obj_t) BgL_auxz00_6794), BUNSPEC);
														}
														{
															long BgL_nz00_6799;

															obj_t BgL_insz00_6797;

															BgL_insz00_6797 = CDR(BgL_insz00_2378);
															BgL_nz00_6799 = (((long) 1) + BgL_nz00_2380);
															BgL_nz00_2380 = BgL_nz00_6799;
															BgL_insz00_2378 = BgL_insz00_6797;
															goto BgL_zc3anonymousza35196ze3z83_2381;
														}
													}
											}
									}
								else
									{
										obj_t BgL_prevz00_6803;

										obj_t BgL_insz00_6801;

										BgL_insz00_6801 = CDR(BgL_insz00_2378);
										BgL_prevz00_6803 = BgL_insz00_2378;
										BgL_prevz00_2379 = BgL_prevz00_6803;
										BgL_insz00_2378 = BgL_insz00_6801;
										goto BgL_zc3anonymousza35196ze3z83_2381;
									}
							}
						else
							{	/* SawMill/regalloc.scm 712 */
								return BgL_nz00_2380;
							}
					}
				}
			}
		}
	}



/* funcall-spill! */
	obj_t BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_hregsz00_49, obj_t BgL_blocksz00_50)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 740 */
			{
				obj_t BgL_bz00_2440;

				if (NULLP(BgL_hregsz00_49))
					{	/* SawMill/regalloc.scm 759 */
						return BgL_blocksz00_50;
					}
				else
					{
						obj_t BgL_l4539z00_2405;

						{	/* SawMill/regalloc.scm 761 */
							bool_t BgL_auxz00_6806;

							BgL_l4539z00_2405 = BgL_blocksz00_50;
						BgL_zc3anonymousza35212ze3z83_2406:
							if (PAIRP(BgL_l4539z00_2405))
								{	/* SawMill/regalloc.scm 761 */
									BgL_bz00_2440 = CAR(BgL_l4539z00_2405);
									{	/* SawMill/regalloc.scm 758 */
										obj_t BgL_g4538z00_2443;

										{
											BgL_blockz00_bglt BgL_auxz00_6809;

											BgL_auxz00_6809 = (BgL_blockz00_bglt) (BgL_bz00_2440);
											BgL_g4538z00_2443 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_6809))->
												BgL_firstz00);
										}
										{
											obj_t BgL_l4536z00_2445;

											BgL_l4536z00_2445 = BgL_g4538z00_2443;
										BgL_zc3anonymousza35233ze3z83_2446:
											if (PAIRP(BgL_l4536z00_2445))
												{	/* SawMill/regalloc.scm 758 */
													{	/* SawMill/regalloc.scm 758 */
														obj_t BgL_arg5235z00_2448;

														BgL_arg5235z00_2448 = CAR(BgL_l4536z00_2445);
														BGl_inszd2funcallzd2spillz12z12zzsaw_registerzd2allocationzd2
															((BgL_rtl_inszf2razf2_bglt)
															(BgL_arg5235z00_2448));
													}
													{
														obj_t BgL_l4536z00_6817;

														BgL_l4536z00_6817 = CDR(BgL_l4536z00_2445);
														BgL_l4536z00_2445 = BgL_l4536z00_6817;
														goto BgL_zc3anonymousza35233ze3z83_2446;
													}
												}
											else
												{	/* SawMill/regalloc.scm 758 */
													((bool_t) 1);
												}
										}
									}
									{
										obj_t BgL_l4539z00_6820;

										BgL_l4539z00_6820 = CDR(BgL_l4539z00_2405);
										BgL_l4539z00_2405 = BgL_l4539z00_6820;
										goto BgL_zc3anonymousza35212ze3z83_2406;
									}
								}
							else
								{	/* SawMill/regalloc.scm 761 */
									BgL_auxz00_6806 = ((bool_t) 1);
								}
							return BBOOL(BgL_auxz00_6806);
						}
					}
			}
		}
	}



/* ins-funcall-spill! */
	bool_t
		BGl_inszd2funcallzd2spillz12z12zzsaw_registerzd2allocationzd2
		(BgL_rtl_inszf2razf2_bglt BgL_iz00_2414)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 755 */
			{	/* SawMill/regalloc.scm 746 */
				obj_t BgL_aspillz00_2417;

				{	/* SawMill/regalloc.scm 747 */
					obj_t BgL_arg5221z00_2420;

					{
						obj_t BgL_auxz00_6823;

						{	/* SawMill/regalloc.scm 746 */
							BgL_objectz00_bglt BgL_auxz00_6824;

							BgL_auxz00_6824 = (BgL_objectz00_bglt) (BgL_iz00_2414);
							BgL_auxz00_6823 = BGL_OBJECT_WIDENING(BgL_auxz00_6824);
						}
						BgL_arg5221z00_2420 =
							(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_6823))->BgL_outz00);
					}
					{	/* SawMill/regalloc.scm 748 */
						obj_t BgL_zc3anonymousza35222ze3z83_4783;

						BgL_zc3anonymousza35222ze3z83_4783 =
							make_fx_procedure
							(BGl_zc3anonymousza35222ze3z83zzsaw_registerzd2allocationzd2,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza35222ze3z83_4783,
							(int) (((long) 0)), (obj_t) (BgL_iz00_2414));
						BgL_aspillz00_2417 =
							BGl_regsetzd2filterzd2zzsaw_regsetz00
							(BgL_zc3anonymousza35222ze3z83_4783,
							(BgL_regsetz00_bglt) (BgL_arg5221z00_2420));
				}}
				if (PAIRP(BgL_aspillz00_2417))
					{
						BgL_rtl_insz00_bglt BgL_auxz00_6838;

						BgL_auxz00_6838 = (BgL_rtl_insz00_bglt) (BgL_iz00_2414);
						((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6838))->BgL_z52spillz52) =
							((obj_t) BgL_aspillz00_2417), BUNSPEC);
					}
				else
					{	/* SawMill/regalloc.scm 753 */
						BFALSE;
					}
			}
			{	/* SawMill/regalloc.scm 755 */
				obj_t BgL_g4535z00_2432;

				{
					BgL_rtl_insz00_bglt BgL_auxz00_6841;

					BgL_auxz00_6841 = (BgL_rtl_insz00_bglt) (BgL_iz00_2414);
					BgL_g4535z00_2432 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6841))->BgL_argsz00);
				}
				{
					obj_t BgL_l4533z00_2434;

					BgL_l4533z00_2434 = BgL_g4535z00_2432;
				BgL_zc3anonymousza35228ze3z83_2435:
					if (PAIRP(BgL_l4533z00_2434))
						{	/* SawMill/regalloc.scm 755 */
							{	/* SawMill/regalloc.scm 755 */
								obj_t BgL_arg5230z00_2437;

								BgL_arg5230z00_2437 = CAR(BgL_l4533z00_2434);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_arg5230z00_2437,
										BGl_rtl_insz00zzsaw_defsz00))
									{	/* SawMill/regalloc.scm 755 */
										BGl_inszd2funcallzd2spillz12z12zzsaw_registerzd2allocationzd2
											((BgL_rtl_inszf2razf2_bglt) ((BgL_rtl_insz00_bglt)
												(BgL_arg5230z00_2437)));
									}
								else
									{	/* SawMill/regalloc.scm 755 */
										((bool_t) 0);
									}
							}
							{
								obj_t BgL_l4533z00_6852;

								BgL_l4533z00_6852 = CDR(BgL_l4533z00_2434);
								BgL_l4533z00_2434 = BgL_l4533z00_6852;
								goto BgL_zc3anonymousza35228ze3z83_2435;
							}
						}
					else
						{	/* SawMill/regalloc.scm 755 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* <anonymous:5222> */
	obj_t BGl_zc3anonymousza35222ze3z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4784, obj_t BgL_rz00_4786)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 747 */
			{	/* SawMill/regalloc.scm 748 */
				obj_t BgL_instance4363z00_4785;

				BgL_instance4363z00_4785 =
					PROCEDURE_REF(BgL_envz00_4784, (int) (((long) 0)));
				{
					obj_t BgL_rz00_2421;

					{	/* SawMill/regalloc.scm 748 */
						bool_t BgL_auxz00_6856;

						BgL_rz00_2421 = BgL_rz00_4786;
						{	/* SawMill/regalloc.scm 748 */
							bool_t BgL_testz00_6857;

							{	/* SawMill/regalloc.scm 748 */
								bool_t BgL_testz00_6858;

								{	/* SawMill/regalloc.scm 748 */
									obj_t BgL_arg5227z00_2430;

									{	/* SawMill/regalloc.scm 748 */
										BgL_rtl_inszf2razf2_bglt BgL_obj4171z00_4119;

										BgL_obj4171z00_4119 =
											(BgL_rtl_inszf2razf2_bglt) (BgL_instance4363z00_4785);
										{
											obj_t BgL_auxz00_6860;

											{	/* SawMill/regalloc.scm 748 */
												BgL_objectz00_bglt BgL_auxz00_6861;

												BgL_auxz00_6861 =
													(BgL_objectz00_bglt) (BgL_obj4171z00_4119);
												BgL_auxz00_6860 = BGL_OBJECT_WIDENING(BgL_auxz00_6861);
											}
											BgL_arg5227z00_2430 =
												(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_6860))->
												BgL_defz00);
									}}
									BgL_testz00_6858 =
										BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
										(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2421),
										(BgL_regsetz00_bglt) (BgL_arg5227z00_2430));
								}
								if (BgL_testz00_6858)
									{	/* SawMill/regalloc.scm 748 */
										BgL_testz00_6857 = ((bool_t) 0);
									}
								else
									{	/* SawMill/regalloc.scm 748 */
										BgL_testz00_6857 = ((bool_t) 1);
									}
							}
							if (BgL_testz00_6857)
								{	/* SawMill/regalloc.scm 750 */
									bool_t BgL_testz00_6868;

									{	/* SawMill/regalloc.scm 750 */
										obj_t BgL_arg5225z00_2428;

										{	/* SawMill/regalloc.scm 750 */
											BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_4120;

											BgL_obj4248z00_4120 =
												(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2421);
											{
												obj_t BgL_auxz00_6870;

												{	/* SawMill/regalloc.scm 750 */
													BgL_objectz00_bglt BgL_auxz00_6871;

													BgL_auxz00_6871 =
														(BgL_objectz00_bglt) (BgL_obj4248z00_4120);
													BgL_auxz00_6870 =
														BGL_OBJECT_WIDENING(BgL_auxz00_6871);
												}
												BgL_arg5225z00_2428 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6870))->
													BgL_colorz00);
											}
										}
										BgL_testz00_6868 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg5225z00_2428,
											BGl_rtl_regz00zzsaw_defsz00);
									}
									if (BgL_testz00_6868)
										{	/* SawMill/regalloc.scm 751 */
											obj_t BgL_arg5223z00_2426;

											obj_t BgL_arg5224z00_2427;

											{	/* SawMill/regalloc.scm 751 */
												BgL_rtl_regzf2razf2_bglt BgL_obj4248z00_4122;

												BgL_obj4248z00_4122 =
													(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_2421);
												{
													obj_t BgL_auxz00_6877;

													{	/* SawMill/regalloc.scm 751 */
														BgL_objectz00_bglt BgL_auxz00_6878;

														BgL_auxz00_6878 =
															(BgL_objectz00_bglt) (BgL_obj4248z00_4122);
														BgL_auxz00_6877 =
															BGL_OBJECT_WIDENING(BgL_auxz00_6878);
													}
													BgL_arg5223z00_2426 =
														(((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_auxz00_6877))->BgL_colorz00);
												}
											}
											{	/* SawMill/regalloc.scm 751 */
												BgL_rtl_inszf2razf2_bglt BgL_obj4182z00_4123;

												BgL_obj4182z00_4123 =
													(BgL_rtl_inszf2razf2_bglt) (BgL_instance4363z00_4785);
												{
													obj_t BgL_auxz00_6883;

													{	/* SawMill/regalloc.scm 751 */
														BgL_objectz00_bglt BgL_auxz00_6884;

														BgL_auxz00_6884 =
															(BgL_objectz00_bglt) (BgL_obj4182z00_4123);
														BgL_auxz00_6883 =
															BGL_OBJECT_WIDENING(BgL_auxz00_6884);
													}
													BgL_arg5224z00_2427 =
														(((BgL_rtl_inszf2razf2_bglt)
															CREF(BgL_auxz00_6883))->BgL_spillz00);
												}
											}
											BgL_auxz00_6856 =
												BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
												(BgL_rtl_regzf2razf2_bglt) (BgL_arg5223z00_2426),
												(BgL_regsetz00_bglt) (BgL_arg5224z00_2427));
										}
									else
										{	/* SawMill/regalloc.scm 750 */
											BgL_auxz00_6856 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/regalloc.scm 748 */
									BgL_auxz00_6856 = ((bool_t) 0);
								}
						}
						return BBOOL(BgL_auxz00_6856);
					}
				}
			}
		}
	}



/* cleanup-move-tree! */
	bool_t BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_51)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 768 */
			{
				obj_t BgL_iz00_2490;

				obj_t BgL_bz00_2512;

				{
					obj_t BgL_l4556z00_2458;

					BgL_l4556z00_2458 = BgL_blocksz00_51;
				BgL_zc3anonymousza35237ze3z83_2459:
					if (PAIRP(BgL_l4556z00_2458))
						{	/* SawMill/regalloc.scm 783 */
							BgL_bz00_2512 = CAR(BgL_l4556z00_2458);
							{	/* SawMill/regalloc.scm 782 */
								obj_t BgL_g4555z00_2515;

								{
									BgL_blockz00_bglt BgL_auxz00_6894;

									BgL_auxz00_6894 = (BgL_blockz00_bglt) (BgL_bz00_2512);
									BgL_g4555z00_2515 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_6894))->BgL_firstz00);
								}
								{
									obj_t BgL_l4553z00_2517;

									BgL_l4553z00_2517 = BgL_g4555z00_2515;
								BgL_zc3anonymousza35270ze3z83_2518:
									if (PAIRP(BgL_l4553z00_2517))
										{	/* SawMill/regalloc.scm 782 */
											BgL_iz00_2490 = CAR(BgL_l4553z00_2517);
											{	/* SawMill/regalloc.scm 779 */
												obj_t BgL_arg5258z00_2493;

												{	/* SawMill/regalloc.scm 779 */
													obj_t BgL_l4547z00_2494;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_6899;

														BgL_auxz00_6899 =
															(BgL_rtl_insz00_bglt) (BgL_iz00_2490);
														BgL_l4547z00_2494 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6899))->
															BgL_argsz00);
													}
													if (NULLP(BgL_l4547z00_2494))
														{	/* SawMill/regalloc.scm 779 */
															BgL_arg5258z00_2493 = BNIL;
														}
													else
														{	/* SawMill/regalloc.scm 779 */
															obj_t BgL_head4549z00_2496;

															BgL_head4549z00_2496 =
																MAKE_PAIR
																(BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2
																(CAR(BgL_l4547z00_2494)), BNIL);
															{	/* SawMill/regalloc.scm 779 */
																obj_t BgL_g4552z00_2497;

																BgL_g4552z00_2497 = CDR(BgL_l4547z00_2494);
																{
																	obj_t BgL_l4547z00_2499;

																	obj_t BgL_tail4550z00_2500;

																	BgL_l4547z00_2499 = BgL_g4552z00_2497;
																	BgL_tail4550z00_2500 = BgL_head4549z00_2496;
																BgL_zc3anonymousza35260ze3z83_2501:
																	if (NULLP(BgL_l4547z00_2499))
																		{	/* SawMill/regalloc.scm 779 */
																			BgL_arg5258z00_2493 =
																				BgL_head4549z00_2496;
																		}
																	else
																		{	/* SawMill/regalloc.scm 779 */
																			obj_t BgL_newtail4551z00_2503;

																			BgL_newtail4551z00_2503 =
																				MAKE_PAIR
																				(BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2
																				(CAR(BgL_l4547z00_2499)), BNIL);
																			SET_CDR(BgL_tail4550z00_2500,
																				BgL_newtail4551z00_2503);
																			{
																				obj_t BgL_tail4550z00_6916;

																				obj_t BgL_l4547z00_6914;

																				BgL_l4547z00_6914 =
																					CDR(BgL_l4547z00_2499);
																				BgL_tail4550z00_6916 =
																					BgL_newtail4551z00_2503;
																				BgL_tail4550z00_2500 =
																					BgL_tail4550z00_6916;
																				BgL_l4547z00_2499 = BgL_l4547z00_6914;
																				goto BgL_zc3anonymousza35260ze3z83_2501;
																			}
																		}
																}
															}
														}
												}
												{
													BgL_rtl_insz00_bglt BgL_auxz00_6917;

													BgL_auxz00_6917 =
														(BgL_rtl_insz00_bglt) (BgL_iz00_2490);
													((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_6917))->
															BgL_argsz00) =
														((obj_t) BgL_arg5258z00_2493), BUNSPEC);
												}
											}
											{
												obj_t BgL_l4553z00_6921;

												BgL_l4553z00_6921 = CDR(BgL_l4553z00_2517);
												BgL_l4553z00_2517 = BgL_l4553z00_6921;
												goto BgL_zc3anonymousza35270ze3z83_2518;
											}
										}
									else
										{	/* SawMill/regalloc.scm 782 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l4556z00_6924;

								BgL_l4556z00_6924 = CDR(BgL_l4556z00_2458);
								BgL_l4556z00_2458 = BgL_l4556z00_6924;
								goto BgL_zc3anonymousza35237ze3z83_2459;
							}
						}
					else
						{	/* SawMill/regalloc.scm 783 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* args-cleanup-move-tree! */
	obj_t
		BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_az00_2464)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 776 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_2464,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMill/regalloc.scm 771 */
					BgL_rtl_insz00_bglt BgL_instance4371z00_2467;

					BgL_instance4371z00_2467 = (BgL_rtl_insz00_bglt) (BgL_az00_2464);
					{	/* SawMill/regalloc.scm 772 */
						obj_t BgL_arg5243z00_2468;

						{	/* SawMill/regalloc.scm 772 */
							obj_t BgL_l4541z00_2469;

							BgL_l4541z00_2469 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_instance4371z00_2467))->
								BgL_argsz00);
							if (NULLP(BgL_l4541z00_2469))
								{	/* SawMill/regalloc.scm 772 */
									BgL_arg5243z00_2468 = BNIL;
								}
							else
								{	/* SawMill/regalloc.scm 772 */
									obj_t BgL_head4543z00_2471;

									BgL_head4543z00_2471 =
										MAKE_PAIR
										(BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2
										(CAR(BgL_l4541z00_2469)), BNIL);
									{	/* SawMill/regalloc.scm 772 */
										obj_t BgL_g4546z00_2472;

										BgL_g4546z00_2472 = CDR(BgL_l4541z00_2469);
										{
											obj_t BgL_l4541z00_2474;

											obj_t BgL_tail4544z00_2475;

											BgL_l4541z00_2474 = BgL_g4546z00_2472;
											BgL_tail4544z00_2475 = BgL_head4543z00_2471;
										BgL_zc3anonymousza35245ze3z83_2476:
											if (NULLP(BgL_l4541z00_2474))
												{	/* SawMill/regalloc.scm 772 */
													BgL_arg5243z00_2468 = BgL_head4543z00_2471;
												}
											else
												{	/* SawMill/regalloc.scm 772 */
													obj_t BgL_newtail4545z00_2478;

													BgL_newtail4545z00_2478 =
														MAKE_PAIR
														(BGl_argszd2cleanupzd2movezd2treez12zc0zzsaw_registerzd2allocationzd2
														(CAR(BgL_l4541z00_2474)), BNIL);
													SET_CDR(BgL_tail4544z00_2475,
														BgL_newtail4545z00_2478);
													{
														obj_t BgL_tail4544z00_6944;

														obj_t BgL_l4541z00_6942;

														BgL_l4541z00_6942 = CDR(BgL_l4541z00_2474);
														BgL_tail4544z00_6944 = BgL_newtail4545z00_2478;
														BgL_tail4544z00_2475 = BgL_tail4544z00_6944;
														BgL_l4541z00_2474 = BgL_l4541z00_6942;
														goto BgL_zc3anonymousza35245ze3z83_2476;
													}
												}
										}
									}
								}
						}
						((((BgL_rtl_insz00_bglt) CREF(BgL_instance4371z00_2467))->
								BgL_argsz00) = ((obj_t) BgL_arg5243z00_2468), BUNSPEC);
					}
					{	/* SawMill/regalloc.scm 773 */
						bool_t BgL_testz00_6946;

						{	/* SawMill/regalloc.scm 773 */
							BgL_rtl_funz00_bglt BgL_arg5256z00_2489;

							BgL_arg5256z00_2489 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_instance4371z00_2467))->
								BgL_funz00);
							{	/* SawMill/regalloc.scm 773 */
								obj_t BgL_obj3588z00_4158;

								BgL_obj3588z00_4158 = (obj_t) (BgL_arg5256z00_2489);
								BgL_testz00_6946 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3588z00_4158,
									BGl_rtl_movz00zzsaw_defsz00);
							}
						}
						if (BgL_testz00_6946)
							{	/* SawMill/regalloc.scm 774 */
								obj_t BgL_pairz00_4160;

								BgL_pairz00_4160 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_instance4371z00_2467))->
									BgL_argsz00);
								return CAR(BgL_pairz00_4160);
							}
						else
							{	/* SawMill/regalloc.scm 773 */
								return BgL_az00_2464;
							}
					}
				}
			else
				{	/* SawMill/regalloc.scm 770 */
					return BgL_az00_2464;
				}
		}
	}



/* use-register! */
	BgL_rtl_regzf2razf2_bglt
		BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt BgL_regz00_52)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 792 */
			{	/* SawMill/regalloc.scm 794 */
				long BgL_arg5273z00_2527;

				{	/* SawMill/regalloc.scm 794 */
					long BgL_auxz00_6952;

					{	/* SawMill/regalloc.scm 794 */
						int BgL_auxz00_6953;

						{
							obj_t BgL_auxz00_6954;

							{	/* SawMill/regalloc.scm 794 */
								BgL_objectz00_bglt BgL_auxz00_6955;

								BgL_auxz00_6955 = (BgL_objectz00_bglt) (BgL_regz00_52);
								BgL_auxz00_6954 = BGL_OBJECT_WIDENING(BgL_auxz00_6955);
							}
							BgL_auxz00_6953 =
								(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6954))->
								BgL_occurrencesz00);
						}
						BgL_auxz00_6952 = (long) (BgL_auxz00_6953);
					}
					BgL_arg5273z00_2527 = (((long) 1) + BgL_auxz00_6952);
				}
				{
					int BgL_auxz00_6965;

					obj_t BgL_auxz00_6961;

					BgL_auxz00_6965 = (int) (BgL_arg5273z00_2527);
					{	/* SawMill/regalloc.scm 794 */
						BgL_objectz00_bglt BgL_auxz00_6962;

						BgL_auxz00_6962 = (BgL_objectz00_bglt) (BgL_regz00_52);
						BgL_auxz00_6961 = BGL_OBJECT_WIDENING(BgL_auxz00_6962);
					}
					((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_6961))->
							BgL_occurrencesz00) = ((int) BgL_auxz00_6965), BUNSPEC);
			}}
			return BgL_regz00_52;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			{	/* SawMill/regalloc.scm 32 */
				obj_t BgL_arg5276z00_2530;

				obj_t BgL_arg5277z00_2531;

				obj_t BgL_arg5280z00_2534;

				BgL_arg5276z00_2530 = CNST_TABLE_REF(((long) 0));
				BgL_arg5277z00_2531 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/regalloc.scm 32 */
					obj_t BgL_v4564z00_2535;

					BgL_v4564z00_2535 = create_vector((int) (((long) 0)));
					BgL_arg5280z00_2534 = BgL_v4564z00_2535;
				}
				BGl_blockzf2razf2zzsaw_registerzd2allocationzd2 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5276z00_2530,
					BgL_arg5277z00_2531, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2blockzf2razd2envza0zzsaw_registerzd2allocationzd2,
					BGl_blockzf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
					BGl_blockzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
					((long) 529426391), BFALSE, BFALSE, BgL_arg5280z00_2534);
			}
			{	/* SawMill/regalloc.scm 35 */
				obj_t BgL_arg5281z00_2536;

				obj_t BgL_arg5282z00_2537;

				obj_t BgL_arg5285z00_2540;

				BgL_arg5281z00_2536 = CNST_TABLE_REF(((long) 1));
				BgL_arg5282z00_2537 = BGl_rtl_insz00zzsaw_defsz00;
				{	/* SawMill/regalloc.scm 35 */
					obj_t BgL_v4565z00_2541;

					BgL_v4565z00_2541 = create_vector((int) (((long) 0)));
					BgL_arg5285z00_2540 = BgL_v4565z00_2541;
				}
				BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5281z00_2536,
					BgL_arg5282z00_2537, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_inszf2razd2envza0zzsaw_registerzd2allocationzd2,
					BGl_rtl_inszf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
					BGl_rtl_inszf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
					((long) 341527826), BFALSE, BFALSE, BgL_arg5285z00_2540);
			}
			{	/* SawMill/regalloc.scm 41 */
				obj_t BgL_arg5286z00_2542;

				obj_t BgL_arg5287z00_2543;

				obj_t BgL_arg5290z00_2546;

				BgL_arg5286z00_2542 = CNST_TABLE_REF(((long) 2));
				BgL_arg5287z00_2543 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMill/regalloc.scm 41 */
					obj_t BgL_v4566z00_2547;

					BgL_v4566z00_2547 = create_vector((int) (((long) 0)));
					BgL_arg5290z00_2546 = BgL_v4566z00_2547;
				}
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5286z00_2542,
					BgL_arg5287z00_2543, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rtl_regzf2razd2envza0zzsaw_registerzd2allocationzd2,
					BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_registerzd2allocationzd2,
					BGl_rtl_regzf2razf3zd2envzd3zzsaw_registerzd2allocationzd2,
					((long) 46789460), BFALSE, BFALSE, BgL_arg5290z00_2546);
			}
			BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2 =
				BUNSPEC;
			BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2 =
				BUNSPEC;
			return (BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2 =
				BUNSPEC, BUNSPEC);
		}
	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_regzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t
		BgL_obj4246z00_64)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_64,
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
		}
	}



/* _rtl_reg/ra? */
	obj_t BGl__rtl_regzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4704, obj_t BgL_obj4246z00_4705)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_4705,
					BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
		}
	}



/* widening-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regzf2razf2_bglt
		BGl_wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(int
		BgL_num4201z00_68, obj_t BgL_color4202z00_69, obj_t BgL_coalesce4203z00_70,
		int BgL_occurrences4204z00_71, obj_t BgL_interfere4205z00_72,
		obj_t BgL_interfere24206z00_73)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				BgL_rtl_regzf2razf2_bglt BgL_new4207z00_4185;

				BgL_new4207z00_4185 =
					((BgL_rtl_regzf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_regzf2razf2_bgl))));
				{	/* SawMill/regalloc.scm 41 */
					BgL_rtl_regzf2razf2_bglt BgL_res5546z00_4199;

					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regzf2razf2_bglt BgL_new4229z00_4186;

						BgL_new4229z00_4186 = BgL_new4207z00_4185;
						{	/* SawMill/regalloc.scm 41 */
							int BgL_num4223z00_4193;

							obj_t BgL_color4224z00_4194;

							obj_t BgL_coalesce4225z00_4195;

							int BgL_occurrences4226z00_4196;

							obj_t BgL_interfere4227z00_4197;

							obj_t BgL_interfere24228z00_4198;

							BgL_num4223z00_4193 = BgL_num4201z00_68;
							BgL_color4224z00_4194 = BgL_color4202z00_69;
							BgL_coalesce4225z00_4195 = BgL_coalesce4203z00_70;
							BgL_occurrences4226z00_4196 = BgL_occurrences4204z00_71;
							BgL_interfere4227z00_4197 = BgL_interfere4205z00_72;
							BgL_interfere24228z00_4198 = BgL_interfere24206z00_73;
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_numz00) = ((int) BgL_num4223z00_4193), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_colorz00) = ((obj_t) BgL_color4224z00_4194), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_coalescez00) =
								((obj_t) BgL_coalesce4225z00_4195), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_occurrencesz00) =
								((int) BgL_occurrences4226z00_4196), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_interferez00) =
								((obj_t) BgL_interfere4227z00_4197), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4186))->
									BgL_interfere2z00) =
								((obj_t) BgL_interfere24228z00_4198), BUNSPEC);
							BgL_res5546z00_4199 = BgL_new4229z00_4186;
					}} BgL_res5546z00_4199;
				}
				return BgL_new4207z00_4185;
			}
		}
	}



/* _widening-rtl_reg/ra */
	obj_t BGl__wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4797, obj_t BgL_num4201z00_4798, obj_t BgL_color4202z00_4799,
		obj_t BgL_coalesce4203z00_4800, obj_t BgL_occurrences4204z00_4801,
		obj_t BgL_interfere4205z00_4802, obj_t BgL_interfere24206z00_4803)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			return
				(obj_t) (BGl_wideningzd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2
				(CINT(BgL_num4201z00_4798), BgL_color4202z00_4799,
					BgL_coalesce4203z00_4800, CINT(BgL_occurrences4204z00_4801),
					BgL_interfere4205z00_4802, BgL_interfere24206z00_4803));
		}
	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regzf2razf2_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(BgL_typez00_bglt
		BgL_type4215z00_74, obj_t BgL_var4216z00_75, obj_t BgL_onexprzf34217zf3_76,
		obj_t BgL_name4218z00_77, obj_t BgL_key4219z00_78,
		obj_t BgL_hardware4220z00_79, int BgL_num4209z00_80,
		obj_t BgL_color4210z00_81, obj_t BgL_coalesce4211z00_82,
		int BgL_occurrences4212z00_83, obj_t BgL_interfere4213z00_84,
		obj_t BgL_interfere24214z00_85)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				BgL_rtl_regz00_bglt BgL_aux4221z00_4200;

				BgL_aux4221z00_4200 =
					BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_type4215z00_74,
					BgL_var4216z00_75, BgL_onexprzf34217zf3_76, BgL_name4218z00_77,
					BgL_key4219z00_78, BgL_hardware4220z00_79);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4221z00_4200),
					BGl_classzd2numzd2zz__objectz00
					(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
				{	/* SawMill/regalloc.scm 41 */
					BgL_rtl_regzf2razf2_bglt BgL_arg5292z00_4202;

					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regzf2razf2_bglt BgL_res5548z00_4227;

						{	/* SawMill/regalloc.scm 41 */
							BgL_rtl_regzf2razf2_bglt BgL_new4207z00_4212;

							BgL_new4207z00_4212 =
								((BgL_rtl_regzf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regzf2razf2_bgl))));
							{	/* SawMill/regalloc.scm 41 */
								BgL_rtl_regzf2razf2_bglt BgL_res5547z00_4226;

								{	/* SawMill/regalloc.scm 41 */
									BgL_rtl_regzf2razf2_bglt BgL_new4229z00_4213;

									BgL_new4229z00_4213 = BgL_new4207z00_4212;
									{	/* SawMill/regalloc.scm 41 */
										int BgL_num4223z00_4220;

										obj_t BgL_color4224z00_4221;

										obj_t BgL_coalesce4225z00_4222;

										int BgL_occurrences4226z00_4223;

										obj_t BgL_interfere4227z00_4224;

										obj_t BgL_interfere24228z00_4225;

										BgL_num4223z00_4220 = BgL_num4209z00_80;
										BgL_color4224z00_4221 = BgL_color4210z00_81;
										BgL_coalesce4225z00_4222 = BgL_coalesce4211z00_82;
										BgL_occurrences4226z00_4223 = BgL_occurrences4212z00_83;
										BgL_interfere4227z00_4224 = BgL_interfere4213z00_84;
										BgL_interfere24228z00_4225 = BgL_interfere24214z00_85;
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_numz00) = ((int) BgL_num4223z00_4220), BUNSPEC);
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_colorz00) =
											((obj_t) BgL_color4224z00_4221), BUNSPEC);
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_coalescez00) =
											((obj_t) BgL_coalesce4225z00_4222), BUNSPEC);
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_occurrencesz00) =
											((int) BgL_occurrences4226z00_4223), BUNSPEC);
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_interferez00) =
											((obj_t) BgL_interfere4227z00_4224), BUNSPEC);
										((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4213))->
												BgL_interfere2z00) =
											((obj_t) BgL_interfere24228z00_4225), BUNSPEC);
										BgL_res5547z00_4226 = BgL_new4229z00_4213;
								}} BgL_res5547z00_4226;
							}
							BgL_res5548z00_4227 = BgL_new4207z00_4212;
						}
						BgL_arg5292z00_4202 = BgL_res5548z00_4227;
					}
					{	/* SawMill/regalloc.scm 41 */
						obj_t BgL_auxz00_7007;

						BgL_objectz00_bglt BgL_auxz00_7005;

						BgL_auxz00_7007 = (obj_t) (BgL_arg5292z00_4202);
						BgL_auxz00_7005 = (BgL_objectz00_bglt) (BgL_aux4221z00_4200);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7005, BgL_auxz00_7007);
				}}
				return
					((BgL_rtl_regzf2razf2_bglt)
					(BgL_rtl_regzf2razf2_bglt) (BgL_aux4221z00_4200));
			}
		}
	}



/* _make-rtl_reg/ra */
	obj_t BGl__makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4804, obj_t BgL_type4215z00_4805, obj_t BgL_var4216z00_4806,
		obj_t BgL_onexprzf34217zf3_4807, obj_t BgL_name4218z00_4808,
		obj_t BgL_key4219z00_4809, obj_t BgL_hardware4220z00_4810,
		obj_t BgL_num4209z00_4811, obj_t BgL_color4210z00_4812,
		obj_t BgL_coalesce4211z00_4813, obj_t BgL_occurrences4212z00_4814,
		obj_t BgL_interfere4213z00_4815, obj_t BgL_interfere24214z00_4816)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			return
				(obj_t) (BGl_makezd2rtl_regzf2raz20zzsaw_registerzd2allocationzd2(
					(BgL_typez00_bglt) (BgL_type4215z00_4805), BgL_var4216z00_4806,
					BgL_onexprzf34217zf3_4807, BgL_name4218z00_4808, BgL_key4219z00_4809,
					BgL_hardware4220z00_4810, CINT(BgL_num4209z00_4811),
					BgL_color4210z00_4812, BgL_coalesce4211z00_4813,
					CINT(BgL_occurrences4212z00_4814), BgL_interfere4213z00_4815,
					BgL_interfere24214z00_4816));
		}
	}



/* fill-rtl_reg/ra! */
	BGL_EXPORTED_DEF BgL_rtl_regzf2razf2_bglt
		BGl_fillzd2rtl_regzf2raz12z32zzsaw_registerzd2allocationzd2
		(BgL_rtl_regzf2razf2_bglt BgL_new4229z00_86, int BgL_num4223z00_87,
		obj_t BgL_color4224z00_88, obj_t BgL_coalesce4225z00_89,
		int BgL_occurrences4226z00_90, obj_t BgL_interfere4227z00_91,
		obj_t BgL_interfere24228z00_92)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				int BgL_num4223z00_4906;

				obj_t BgL_color4224z00_4907;

				obj_t BgL_coalesce4225z00_4908;

				int BgL_occurrences4226z00_4909;

				obj_t BgL_interfere4227z00_4910;

				obj_t BgL_interfere24228z00_4911;

				BgL_num4223z00_4906 = BgL_num4223z00_87;
				BgL_color4224z00_4907 = BgL_color4224z00_88;
				BgL_coalesce4225z00_4908 = BgL_coalesce4225z00_89;
				BgL_occurrences4226z00_4909 = BgL_occurrences4226z00_90;
				BgL_interfere4227z00_4910 = BgL_interfere4227z00_91;
				BgL_interfere24228z00_4911 = BgL_interfere24228z00_92;
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->BgL_numz00) =
					((int) BgL_num4223z00_4906), BUNSPEC);
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->BgL_colorz00) =
					((obj_t) BgL_color4224z00_4907), BUNSPEC);
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->
						BgL_coalescez00) = ((obj_t) BgL_coalesce4225z00_4908), BUNSPEC);
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->
						BgL_occurrencesz00) = ((int) BgL_occurrences4226z00_4909), BUNSPEC);
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->
						BgL_interferez00) = ((obj_t) BgL_interfere4227z00_4910), BUNSPEC);
				((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_86))->
						BgL_interfere2z00) = ((obj_t) BgL_interfere24228z00_4911), BUNSPEC);
				return BgL_new4229z00_86;
			}
		}
	}



/* _fill-rtl_reg/ra! */
	obj_t BGl__fillzd2rtl_regzf2raz12z32zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4817, obj_t BgL_new4229z00_4818, obj_t BgL_num4223z00_4819,
		obj_t BgL_color4224z00_4820, obj_t BgL_coalesce4225z00_4821,
		obj_t BgL_occurrences4226z00_4822, obj_t BgL_interfere4227z00_4823,
		obj_t BgL_interfere24228z00_4824)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_7023;

				{	/* SawMill/regalloc.scm 41 */
					BgL_rtl_regzf2razf2_bglt BgL_res5641z00_4925;

					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regzf2razf2_bglt BgL_new4229z00_4912;

						int BgL_num4223z00_4913;

						int BgL_occurrences4226z00_4916;

						BgL_new4229z00_4912 =
							(BgL_rtl_regzf2razf2_bglt) (BgL_new4229z00_4818);
						BgL_num4223z00_4913 = CINT(BgL_num4223z00_4819);
						BgL_occurrences4226z00_4916 = CINT(BgL_occurrences4226z00_4822);
						{	/* SawMill/regalloc.scm 41 */
							int BgL_num4223z00_4919;

							obj_t BgL_color4224z00_4920;

							obj_t BgL_coalesce4225z00_4921;

							int BgL_occurrences4226z00_4922;

							obj_t BgL_interfere4227z00_4923;

							obj_t BgL_interfere24228z00_4924;

							BgL_num4223z00_4919 = BgL_num4223z00_4913;
							BgL_color4224z00_4920 = BgL_color4224z00_4820;
							BgL_coalesce4225z00_4921 = BgL_coalesce4225z00_4821;
							BgL_occurrences4226z00_4922 = BgL_occurrences4226z00_4916;
							BgL_interfere4227z00_4923 = BgL_interfere4227z00_4823;
							BgL_interfere24228z00_4924 = BgL_interfere24228z00_4824;
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_numz00) = ((int) BgL_num4223z00_4919), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_colorz00) = ((obj_t) BgL_color4224z00_4920), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_coalescez00) =
								((obj_t) BgL_coalesce4225z00_4921), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_occurrencesz00) =
								((int) BgL_occurrences4226z00_4922), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_interferez00) =
								((obj_t) BgL_interfere4227z00_4923), BUNSPEC);
							((((BgL_rtl_regzf2razf2_bglt) CREF(BgL_new4229z00_4912))->
									BgL_interfere2z00) =
								((obj_t) BgL_interfere24228z00_4924), BUNSPEC);
							BgL_res5641z00_4925 = BgL_new4229z00_4912;
					}}
					BgL_auxz00_7023 = BgL_res5641z00_4925;
				}
				return (obj_t) (BgL_auxz00_7023);
			}
		}
	}



/* %allocate-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_z52allocatezd2rtl_regzf2raz72zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				BgL_rtl_regz00_bglt BgL_new4237z00_4926;

				BgL_new4237z00_4926 =
					((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rtl_regz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4237z00_4926),
					BGl_classzd2numzd2zz__objectz00
					(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
				{	/* SawMill/regalloc.scm 41 */
					BgL_objectz00_bglt BgL_auxz00_7038;

					BgL_auxz00_7038 = (BgL_objectz00_bglt) (BgL_new4237z00_4926);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7038, BFALSE);
				}
				return BgL_new4237z00_4926;
			}
		}
	}



/* _%allocate-rtl_reg/ra */
	obj_t BGl__z52allocatezd2rtl_regzf2raz72zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4795)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{	/* SawMill/regalloc.scm 41 */
				BgL_rtl_regz00_bglt BgL_auxz00_7041;

				{	/* SawMill/regalloc.scm 41 */
					BgL_rtl_regz00_bglt BgL_res5642z00_4930;

					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regz00_bglt BgL_new4237z00_4928;

						BgL_new4237z00_4928 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4237z00_4928),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
						{	/* SawMill/regalloc.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_7046;

							BgL_auxz00_7046 = (BgL_objectz00_bglt) (BgL_new4237z00_4928);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7046, BFALSE);
						}
						BgL_res5642z00_4930 = BgL_new4237z00_4928;
					}
					BgL_auxz00_7041 = BgL_res5642z00_4930;
				}
				return (obj_t) (BgL_auxz00_7041);
			}
		}
	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regzf2razf2_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			if (
				(BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2 ==
					BUNSPEC))
				{	/* SawMill/regalloc.scm 41 */
					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regz00_bglt BgL_res5549z00_4242;

						{	/* SawMill/regalloc.scm 41 */
							BgL_rtl_regz00_bglt BgL_new3379z00_4238;

							BgL_new3379z00_4238 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3379z00_4238),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMill/regalloc.scm 41 */
								BgL_objectz00_bglt BgL_auxz00_7056;

								BgL_auxz00_7056 = (BgL_objectz00_bglt) (BgL_new3379z00_4238);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7056, BFALSE);
							}
							BgL_res5549z00_4242 = BgL_new3379z00_4238;
						}
						BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2 =
							(obj_t) (BgL_res5549z00_4242);
					}
					{	/* SawMill/regalloc.scm 41 */
						BgL_typez00_bglt BgL_arg5295z00_2562;

						BgL_arg5295z00_2562 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/regalloc.scm 41 */
							BgL_rtl_regz00_bglt BgL_res5550z00_4256;

							{	/* SawMill/regalloc.scm 41 */
								BgL_rtl_regz00_bglt BgL_new3371z00_4243;

								BgL_new3371z00_4243 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2);
								{	/* SawMill/regalloc.scm 41 */
									BgL_typez00_bglt BgL_type3365z00_4250;

									obj_t BgL_var3366z00_4251;

									obj_t BgL_onexprzf33367zf3_4252;

									obj_t BgL_name3368z00_4253;

									obj_t BgL_key3369z00_4254;

									obj_t BgL_hardware3370z00_4255;

									BgL_type3365z00_4250 = BgL_arg5295z00_2562;
									BgL_var3366z00_4251 = BUNSPEC;
									BgL_onexprzf33367zf3_4252 = BUNSPEC;
									BgL_name3368z00_4253 = BUNSPEC;
									BgL_key3369z00_4254 = BUNSPEC;
									BgL_hardware3370z00_4255 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3365z00_4250), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_varz00) = ((obj_t) BgL_var3366z00_4251), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33367zf3_4252), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_namez00) = ((obj_t) BgL_name3368z00_4253), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_keyz00) = ((obj_t) BgL_key3369z00_4254), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3371z00_4243))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3370z00_4255), BUNSPEC);
									BgL_res5550z00_4256 = BgL_new3371z00_4243;
							}} BgL_res5550z00_4256;
					}}
					{	/* SawMill/regalloc.scm 41 */
						long BgL_arg5296z00_2563;

						BgL_arg5296z00_2563 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2),
							BgL_arg5296z00_2563);
					}
					{	/* SawMill/regalloc.scm 41 */
						BgL_rtl_regzf2razf2_bglt BgL_arg5297z00_2564;

						{	/* SawMill/regalloc.scm 41 */
							BgL_rtl_regzf2razf2_bglt BgL_res5552z00_4280;

							{	/* SawMill/regalloc.scm 41 */
								int BgL_num4201z00_4259;

								int BgL_occurrences4204z00_4262;

								BgL_num4201z00_4259 = (int) (((long) 0));
								BgL_occurrences4204z00_4262 = (int) (((long) 0));
								{	/* SawMill/regalloc.scm 41 */
									BgL_rtl_regzf2razf2_bglt BgL_new4207z00_4265;

									BgL_new4207z00_4265 =
										((BgL_rtl_regzf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_rtl_regzf2razf2_bgl))));
									{	/* SawMill/regalloc.scm 41 */
										BgL_rtl_regzf2razf2_bglt BgL_res5551z00_4279;

										{	/* SawMill/regalloc.scm 41 */
											BgL_rtl_regzf2razf2_bglt BgL_new4229z00_4266;

											BgL_new4229z00_4266 = BgL_new4207z00_4265;
											{	/* SawMill/regalloc.scm 41 */
												int BgL_num4223z00_4273;

												obj_t BgL_color4224z00_4274;

												obj_t BgL_coalesce4225z00_4275;

												int BgL_occurrences4226z00_4276;

												obj_t BgL_interfere4227z00_4277;

												obj_t BgL_interfere24228z00_4278;

												BgL_num4223z00_4273 = BgL_num4201z00_4259;
												BgL_color4224z00_4274 = BUNSPEC;
												BgL_coalesce4225z00_4275 = BUNSPEC;
												BgL_occurrences4226z00_4276 =
													BgL_occurrences4204z00_4262;
												BgL_interfere4227z00_4277 = BUNSPEC;
												BgL_interfere24228z00_4278 = BUNSPEC;
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_numz00) =
													((int) BgL_num4223z00_4273), BUNSPEC);
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_colorz00) =
													((obj_t) BgL_color4224z00_4274), BUNSPEC);
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_coalescez00) =
													((obj_t) BgL_coalesce4225z00_4275), BUNSPEC);
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_occurrencesz00) =
													((int) BgL_occurrences4226z00_4276), BUNSPEC);
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_interferez00) =
													((obj_t) BgL_interfere4227z00_4277), BUNSPEC);
												((((BgL_rtl_regzf2razf2_bglt)
															CREF(BgL_new4229z00_4266))->BgL_interfere2z00) =
													((obj_t) BgL_interfere24228z00_4278), BUNSPEC);
												BgL_res5551z00_4279 = BgL_new4229z00_4266;
										}} BgL_res5551z00_4279;
									}
									BgL_res5552z00_4280 = BgL_new4207z00_4265;
							}}
							BgL_arg5297z00_2564 = BgL_res5552z00_4280;
						}
						{	/* SawMill/regalloc.scm 41 */
							obj_t BgL_auxz00_7082;

							BgL_objectz00_bglt BgL_auxz00_7080;

							BgL_auxz00_7082 = (obj_t) (BgL_arg5297z00_2564);
							BgL_auxz00_7080 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7080, BgL_auxz00_7082);
				}}}
			else
				{	/* SawMill/regalloc.scm 41 */
					BFALSE;
				}
			return
				(BgL_rtl_regzf2razf2_bglt)
				(BGl_z52thezd2rtl_regzf2razd2nilza0zzsaw_registerzd2allocationzd2);
		}
	}



/* _rtl_reg/ra-nil */
	obj_t BGl__rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4796)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			return
				(obj_t) (BGl_rtl_regzf2razd2nilz20zzsaw_registerzd2allocationzd2());
		}
	}



/* _rtl_ins/ra? */
	obj_t BGl__rtl_inszf2razf3z01zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4793, obj_t BgL_obj4170z00_4794)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4170z00_4794,
					BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
		}
	}



/* _%allocate-rtl_ins/ra */
	obj_t BGl__z52allocatezd2rtl_inszf2raz72zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4791)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			{	/* SawMill/regalloc.scm 35 */
				BgL_rtl_insz00_bglt BgL_auxz00_7090;

				{	/* SawMill/regalloc.scm 35 */
					BgL_rtl_insz00_bglt BgL_res5643z00_4936;

					{	/* SawMill/regalloc.scm 35 */
						BgL_rtl_insz00_bglt BgL_new4163z00_4934;

						BgL_new4163z00_4934 =
							((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4163z00_4934),
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
						{	/* SawMill/regalloc.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_7095;

							BgL_auxz00_7095 = (BgL_objectz00_bglt) (BgL_new4163z00_4934);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7095, BFALSE);
						}
						BgL_res5643z00_4936 = BgL_new4163z00_4934;
					}
					BgL_auxz00_7090 = BgL_res5643z00_4936;
				}
				return (obj_t) (BgL_auxz00_7090);
			}
		}
	}



/* rtl_ins/ra-nil */
	BgL_rtl_inszf2razf2_bglt
		BGl_rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			if (
				(BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2 ==
					BUNSPEC))
				{	/* SawMill/regalloc.scm 35 */
					{	/* SawMill/regalloc.scm 35 */
						BgL_rtl_insz00_bglt BgL_res5554z00_4304;

						{	/* SawMill/regalloc.scm 35 */
							BgL_rtl_insz00_bglt BgL_new4038z00_4300;

							BgL_new4038z00_4300 =
								((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4038z00_4300),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
							{	/* SawMill/regalloc.scm 35 */
								BgL_objectz00_bglt BgL_auxz00_7105;

								BgL_auxz00_7105 = (BgL_objectz00_bglt) (BgL_new4038z00_4300);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7105, BFALSE);
							}
							BgL_res5554z00_4304 = BgL_new4038z00_4300;
						}
						BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2 =
							(obj_t) (BgL_res5554z00_4304);
					}
					{	/* SawMill/regalloc.scm 35 */
						BgL_rtl_funz00_bglt BgL_arg5303z00_2578;

						BgL_arg5303z00_2578 = BGl_rtl_funzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/regalloc.scm 35 */
							BgL_rtl_insz00_bglt BgL_res5555z00_4316;

							{	/* SawMill/regalloc.scm 35 */
								BgL_rtl_insz00_bglt BgL_new4031z00_4305;

								BgL_new4031z00_4305 =
									(BgL_rtl_insz00_bglt)
									(BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2);
								{	/* SawMill/regalloc.scm 35 */
									obj_t BgL_loc4026z00_4311;

									obj_t BgL_z52spill4027z52_4312;

									obj_t BgL_dest4028z00_4313;

									BgL_rtl_funz00_bglt BgL_fun4029z00_4314;

									obj_t BgL_args4030z00_4315;

									BgL_loc4026z00_4311 = BUNSPEC;
									BgL_z52spill4027z52_4312 = BNIL;
									BgL_dest4028z00_4313 = BUNSPEC;
									BgL_fun4029z00_4314 = BgL_arg5303z00_2578;
									BgL_args4030z00_4315 = BNIL;
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4031z00_4305))->
											BgL_locz00) = ((obj_t) BgL_loc4026z00_4311), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4031z00_4305))->
											BgL_z52spillz52) =
										((obj_t) BgL_z52spill4027z52_4312), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4031z00_4305))->
											BgL_destz00) = ((obj_t) BgL_dest4028z00_4313), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4031z00_4305))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_fun4029z00_4314), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4031z00_4305))->
											BgL_argsz00) = ((obj_t) BgL_args4030z00_4315), BUNSPEC);
									BgL_res5555z00_4316 = BgL_new4031z00_4305;
							}} BgL_res5555z00_4316;
					}}
					{	/* SawMill/regalloc.scm 35 */
						long BgL_arg5305z00_2580;

						BgL_arg5305z00_2580 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2),
							BgL_arg5305z00_2580);
					}
					{	/* SawMill/regalloc.scm 35 */
						BgL_rtl_inszf2razf2_bglt BgL_arg5306z00_2581;

						{	/* SawMill/regalloc.scm 35 */
							BgL_rtl_inszf2razf2_bglt BgL_res5557z00_4334;

							{	/* SawMill/regalloc.scm 35 */
								BgL_rtl_inszf2razf2_bglt BgL_new4140z00_4323;

								BgL_new4140z00_4323 =
									((BgL_rtl_inszf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_rtl_inszf2razf2_bgl))));
								{	/* SawMill/regalloc.scm 35 */
									BgL_rtl_inszf2razf2_bglt BgL_res5556z00_4333;

									{	/* SawMill/regalloc.scm 35 */
										BgL_rtl_inszf2razf2_bglt BgL_new4157z00_4324;

										BgL_new4157z00_4324 = BgL_new4140z00_4323;
										{	/* SawMill/regalloc.scm 35 */
											obj_t BgL_def4153z00_4329;

											obj_t BgL_out4154z00_4330;

											obj_t BgL_in4155z00_4331;

											obj_t BgL_spill4156z00_4332;

											BgL_def4153z00_4329 = BUNSPEC;
											BgL_out4154z00_4330 = BUNSPEC;
											BgL_in4155z00_4331 = BUNSPEC;
											BgL_spill4156z00_4332 = BUNSPEC;
											((((BgL_rtl_inszf2razf2_bglt) CREF(BgL_new4157z00_4324))->
													BgL_defz00) = ((obj_t) BgL_def4153z00_4329), BUNSPEC);
											((((BgL_rtl_inszf2razf2_bglt) CREF(BgL_new4157z00_4324))->
													BgL_outz00) = ((obj_t) BgL_out4154z00_4330), BUNSPEC);
											((((BgL_rtl_inszf2razf2_bglt) CREF(BgL_new4157z00_4324))->
													BgL_inz00) = ((obj_t) BgL_in4155z00_4331), BUNSPEC);
											((((BgL_rtl_inszf2razf2_bglt) CREF(BgL_new4157z00_4324))->
													BgL_spillz00) =
												((obj_t) BgL_spill4156z00_4332), BUNSPEC);
											BgL_res5556z00_4333 = BgL_new4157z00_4324;
									}} BgL_res5556z00_4333;
								}
								BgL_res5557z00_4334 = BgL_new4140z00_4323;
							}
							BgL_arg5306z00_2581 = BgL_res5557z00_4334;
						}
						{	/* SawMill/regalloc.scm 35 */
							obj_t BgL_auxz00_7126;

							BgL_objectz00_bglt BgL_auxz00_7124;

							BgL_auxz00_7126 = (obj_t) (BgL_arg5306z00_2581);
							BgL_auxz00_7124 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7124, BgL_auxz00_7126);
				}}}
			else
				{	/* SawMill/regalloc.scm 35 */
					BFALSE;
				}
			return
				(BgL_rtl_inszf2razf2_bglt)
				(BGl_z52thezd2rtl_inszf2razd2nilza0zzsaw_registerzd2allocationzd2);
		}
	}



/* _rtl_ins/ra-nil */
	obj_t BGl__rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4792)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			return
				(obj_t) (BGl_rtl_inszf2razd2nilz20zzsaw_registerzd2allocationzd2());
		}
	}



/* _block/ra? */
	obj_t BGl__blockzf2razf3z01zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4789, obj_t BgL_obj4120z00_4790)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4120z00_4790,
					BGl_blockzf2razf2zzsaw_registerzd2allocationzd2));
		}
	}



/* _%allocate-block/ra */
	obj_t BGl__z52allocatezd2blockzf2raz72zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4787)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			{	/* SawMill/regalloc.scm 32 */
				BgL_blockz00_bglt BgL_auxz00_7134;

				{	/* SawMill/regalloc.scm 32 */
					BgL_blockz00_bglt BgL_res5644z00_4942;

					{	/* SawMill/regalloc.scm 32 */
						BgL_blockz00_bglt BgL_new4113z00_4940;

						BgL_new4113z00_4940 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4113z00_4940),
							BGl_classzd2numzd2zz__objectz00
							(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2));
						{	/* SawMill/regalloc.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_7139;

							BgL_auxz00_7139 = (BgL_objectz00_bglt) (BgL_new4113z00_4940);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7139, BFALSE);
						}
						BgL_res5644z00_4942 = BgL_new4113z00_4940;
					}
					BgL_auxz00_7134 = BgL_res5644z00_4942;
				}
				return (obj_t) (BgL_auxz00_7134);
			}
		}
	}



/* block/ra-nil */
	BgL_blockzf2razf2_bglt BGl_blockzf2razd2nilz20zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			if (
				(BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2 ==
					BUNSPEC))
				{	/* SawMill/regalloc.scm 32 */
					{	/* SawMill/regalloc.scm 32 */
						BgL_blockz00_bglt BgL_res5559z00_4349;

						{	/* SawMill/regalloc.scm 32 */
							BgL_blockz00_bglt BgL_new4068z00_4345;

							BgL_new4068z00_4345 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4068z00_4345),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/regalloc.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_7149;

								BgL_auxz00_7149 = (BgL_objectz00_bglt) (BgL_new4068z00_4345);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7149, BFALSE);
							}
							BgL_res5559z00_4349 = BgL_new4068z00_4345;
						}
						BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2 =
							(obj_t) (BgL_res5559z00_4349);
					}
					{	/* SawMill/regalloc.scm 32 */
						obj_t BgL_arg5314z00_2594;

						BgL_arg5314z00_2594 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/regalloc.scm 32 */
							BgL_blockz00_bglt BgL_res5560z00_4359;

							{	/* SawMill/regalloc.scm 32 */
								BgL_blockz00_bglt BgL_new4062z00_4350;

								int BgL_label4058z00_4351;

								BgL_new4062z00_4350 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2);
								BgL_label4058z00_4351 = (int) (((long) 0));
								{	/* SawMill/regalloc.scm 32 */
									int BgL_label4058z00_4355;

									obj_t BgL_preds4059z00_4356;

									obj_t BgL_succs4060z00_4357;

									obj_t BgL_first4061z00_4358;

									BgL_label4058z00_4355 = BgL_label4058z00_4351;
									BgL_preds4059z00_4356 = BNIL;
									BgL_succs4060z00_4357 = BNIL;
									BgL_first4061z00_4358 = BgL_arg5314z00_2594;
									((((BgL_blockz00_bglt) CREF(BgL_new4062z00_4350))->
											BgL_labelz00) = ((int) BgL_label4058z00_4355), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4062z00_4350))->
											BgL_predsz00) = ((obj_t) BgL_preds4059z00_4356), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4062z00_4350))->
											BgL_succsz00) = ((obj_t) BgL_succs4060z00_4357), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new4062z00_4350))->
											BgL_firstz00) = ((obj_t) BgL_first4061z00_4358), BUNSPEC);
									BgL_res5560z00_4359 = BgL_new4062z00_4350;
							}} BgL_res5560z00_4359;
					}}
					{	/* SawMill/regalloc.scm 32 */
						long BgL_arg5315z00_2595;

						BgL_arg5315z00_2595 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2),
							BgL_arg5315z00_2595);
					}
					{	/* SawMill/regalloc.scm 32 */
						BgL_blockzf2razf2_bglt BgL_arg5316z00_2596;

						{	/* SawMill/regalloc.scm 32 */
							BgL_blockzf2razf2_bglt BgL_res5562z00_4368;

							{	/* SawMill/regalloc.scm 32 */
								BgL_blockzf2razf2_bglt BgL_new4100z00_4363;

								BgL_new4100z00_4363 =
									((BgL_blockzf2razf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_blockzf2razf2_bgl))));
								{	/* SawMill/regalloc.scm 32 */
									BgL_blockzf2razf2_bglt BgL_res5561z00_4367;

									{	/* SawMill/regalloc.scm 32 */
										BgL_blockzf2razf2_bglt BgL_new4110z00_4364;

										BgL_new4110z00_4364 = BgL_new4100z00_4363;
										{	/* SawMill/regalloc.scm 32 */
											obj_t BgL_trsif4109z00_4366;

											BgL_trsif4109z00_4366 = BNIL;
											((((BgL_blockzf2razf2_bglt) CREF(BgL_new4110z00_4364))->
													BgL_trsifz00) =
												((obj_t) BgL_trsif4109z00_4366), BUNSPEC);
											BgL_res5561z00_4367 = BgL_new4110z00_4364;
									}} BgL_res5561z00_4367;
								}
								BgL_res5562z00_4368 = BgL_new4100z00_4363;
							}
							BgL_arg5316z00_2596 = BgL_res5562z00_4368;
						}
						{	/* SawMill/regalloc.scm 32 */
							obj_t BgL_auxz00_7167;

							BgL_objectz00_bglt BgL_auxz00_7165;

							BgL_auxz00_7167 = (obj_t) (BgL_arg5316z00_2596);
							BgL_auxz00_7165 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7165, BgL_auxz00_7167);
				}}}
			else
				{	/* SawMill/regalloc.scm 32 */
					BFALSE;
				}
			return
				(BgL_blockzf2razf2_bglt)
				(BGl_z52thezd2blockzf2razd2nilza0zzsaw_registerzd2allocationzd2);
		}
	}



/* _block/ra-nil */
	obj_t BGl__blockzf2razd2nilz20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4788)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			return (obj_t) (BGl_blockzf2razd2nilz20zzsaw_registerzd2allocationzd2());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
				BGl_protectzd2interference4567zd2envz00zzsaw_registerzd2allocationzd2,
				BFALSE, BGl_string5616z00zzsaw_registerzd2allocationzd2);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
				BGl_typezd2interferencez12zd2d4569zd2envzc0zzsaw_registerzd2allocationzd2,
				BGl_backendz00zzbackend_backendz00,
				BGl_string5617z00zzsaw_registerzd2allocationzd2);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_rtlzd2siza7ezd2default4571zd2envz75zzsaw_registerzd2allocationzd2,
				BFALSE, BGl_string5618z00zzsaw_registerzd2allocationzd2);
		}
	}



/* protect-interference! */
	obj_t BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_oz00_16, obj_t BgL_regsz00_17)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 261 */
			{

				if (BGL_OBJECTP(BgL_oz00_16))
					{	/* SawMill/regalloc.scm 261 */
						obj_t BgL_method4568z00_3158;

						{	/* SawMill/regalloc.scm 261 */
							BgL_objectz00_bglt BgL_objz00_4397;

							BgL_objz00_4397 = (BgL_objectz00_bglt) (BgL_oz00_16);
							{	/* SawMill/regalloc.scm 261 */
								long BgL_objzd2classzd2numz00_4398;

								BgL_objzd2classzd2numz00_4398 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4397);
								{	/* SawMill/regalloc.scm 261 */
									obj_t BgL_arg2643z00_4399;

									BgL_arg2643z00_4399 =
										PROCEDURE_REF
										(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
										(int) (((long) 1)));
									{	/* SawMill/regalloc.scm 261 */
										obj_t BgL_arrayz00_4401;

										int BgL_offsetz00_4402;

										BgL_arrayz00_4401 = BgL_arg2643z00_4399;
										BgL_offsetz00_4402 = (int) (BgL_objzd2classzd2numz00_4398);
										{	/* SawMill/regalloc.scm 261 */
											long BgL_offsetz00_4403;

											BgL_offsetz00_4403 =
												((long) (BgL_offsetz00_4402) - OBJECT_TYPE);
											{	/* SawMill/regalloc.scm 261 */
												long BgL_modz00_4404;

												{	/* SawMill/regalloc.scm 261 */
													int BgL_arg2645z00_4405;

													BgL_arg2645z00_4405 = (int) (((long) 16));
													{	/* SawMill/regalloc.scm 261 */
														long BgL_auxz00_7186;

														BgL_auxz00_7186 = (long) (BgL_arg2645z00_4405);
														BgL_modz00_4404 =
															(BgL_offsetz00_4403 / BgL_auxz00_7186);
												}}
												{	/* SawMill/regalloc.scm 261 */
													long BgL_restz00_4406;

													{	/* SawMill/regalloc.scm 261 */
														int BgL_arg2644z00_4407;

														BgL_arg2644z00_4407 = (int) (((long) 16));
														{	/* SawMill/regalloc.scm 261 */
															long BgL_auxz00_7190;

															BgL_auxz00_7190 = (long) (BgL_arg2644z00_4407);
															BgL_restz00_4406 =
																(BgL_offsetz00_4403 % BgL_auxz00_7190);
													}}
													{	/* SawMill/regalloc.scm 261 */

														BgL_method4568z00_3158 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4401,
																(int) (BgL_modz00_4404)),
															(int) (BgL_restz00_4406));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method4568z00_3158) (BgL_method4568z00_3158,
							BgL_oz00_16, BgL_regsz00_17, BEOA);
					}
				else
					{	/* SawMill/regalloc.scm 261 */
						{	/* SawMill/regalloc.scm 261 */
							obj_t BgL_fun5412z00_3160;

							BgL_fun5412z00_3160 =
								PROCEDURE_REF
								(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
								(int) (((long) 0)));
							return PROCEDURE_ENTRY(BgL_fun5412z00_3160) (BgL_fun5412z00_3160,
								BgL_oz00_16, BgL_regsz00_17, BEOA);
						}
					}
			}
		}
	}



/* _protect-interference! */
	obj_t BGl__protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4825, obj_t BgL_oz00_4826, obj_t BgL_regsz00_4827)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 261 */
			return
				BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2
				(BgL_oz00_4826, BgL_regsz00_4827);
		}
	}



/* protect-interference4567 */
	bool_t BGl_protectzd2interference4567zd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_oz00_18, obj_t BgL_regsz00_19)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			{
				obj_t BgL_oz00_3183;

				obj_t BgL_oz00_3170;

				{
					obj_t BgL_l4430z00_3164;

					BgL_l4430z00_3164 = BgL_oz00_18;
				BgL_zc3anonymousza35413ze3z83_3165:
					if (PAIRP(BgL_l4430z00_3164))
						{	/* SawMill/regalloc.scm 269 */
							BgL_oz00_3183 = CAR(BgL_l4430z00_3164);
							{	/* SawMill/regalloc.scm 268 */
								obj_t BgL_g4429z00_3185;

								{
									BgL_blockz00_bglt BgL_auxz00_7206;

									BgL_auxz00_7206 = (BgL_blockz00_bglt) (BgL_oz00_3183);
									BgL_g4429z00_3185 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_7206))->BgL_firstz00);
								}
								{
									obj_t BgL_l4427z00_3187;

									BgL_l4427z00_3187 = BgL_g4429z00_3185;
								BgL_zc3anonymousza35425ze3z83_3188:
									if (PAIRP(BgL_l4427z00_3187))
										{	/* SawMill/regalloc.scm 268 */
											BgL_oz00_3170 = CAR(BgL_l4427z00_3187);
											{	/* SawMill/regalloc.scm 264 */
												bool_t BgL_testz00_7211;

												{	/* SawMill/regalloc.scm 264 */
													BgL_rtl_funz00_bglt BgL_arg5423z00_3182;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_7212;

														BgL_auxz00_7212 =
															(BgL_rtl_insz00_bglt) (BgL_oz00_3170);
														BgL_arg5423z00_3182 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_7212))->
															BgL_funz00);
													}
													{	/* SawMill/regalloc.scm 264 */
														obj_t BgL_obj3993z00_4427;

														BgL_obj3993z00_4427 = (obj_t) (BgL_arg5423z00_3182);
														BgL_testz00_7211 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj3993z00_4427,
															BGl_rtl_protectz00zzsaw_defsz00);
													}
												}
												if (BgL_testz00_7211)
													{
														obj_t BgL_l4425z00_3175;

														BgL_l4425z00_3175 = BgL_regsz00_19;
													BgL_zc3anonymousza35419ze3z83_3176:
														if (PAIRP(BgL_l4425z00_3175))
															{	/* SawMill/regalloc.scm 266 */
																{	/* SawMill/regalloc.scm 266 */
																	obj_t BgL_rz00_3178;

																	BgL_rz00_3178 = CAR(BgL_l4425z00_3175);
																	{	/* SawMill/regalloc.scm 266 */
																		obj_t BgL_arg5421z00_3179;

																		{
																			BgL_rtl_insz00_bglt BgL_auxz00_7220;

																			BgL_auxz00_7220 =
																				(BgL_rtl_insz00_bglt) (BgL_oz00_3170);
																			BgL_arg5421z00_3179 =
																				(((BgL_rtl_insz00_bglt)
																					CREF(BgL_auxz00_7220))->BgL_destz00);
																		}
																		BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
																			(BgL_arg5421z00_3179, BgL_rz00_3178);
																	}
																}
																{
																	obj_t BgL_l4425z00_7224;

																	BgL_l4425z00_7224 = CDR(BgL_l4425z00_3175);
																	BgL_l4425z00_3175 = BgL_l4425z00_7224;
																	goto BgL_zc3anonymousza35419ze3z83_3176;
																}
															}
														else
															{	/* SawMill/regalloc.scm 266 */
																((bool_t) 1);
															}
													}
												else
													{	/* SawMill/regalloc.scm 264 */
														((bool_t) 0);
													}
											}
											{
												obj_t BgL_l4427z00_7227;

												BgL_l4427z00_7227 = CDR(BgL_l4427z00_3187);
												BgL_l4427z00_3187 = BgL_l4427z00_7227;
												goto BgL_zc3anonymousza35425ze3z83_3188;
											}
										}
									else
										{	/* SawMill/regalloc.scm 268 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l4430z00_7230;

								BgL_l4430z00_7230 = CDR(BgL_l4430z00_3164);
								BgL_l4430z00_3164 = BgL_l4430z00_7230;
								goto BgL_zc3anonymousza35413ze3z83_3165;
							}
						}
					else
						{	/* SawMill/regalloc.scm 269 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _protect-interference4567 */
	obj_t BGl__protectzd2interference4567zd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4828, obj_t BgL_oz00_4829, obj_t BgL_regsz00_4830)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			return
				BBOOL(BGl_protectzd2interference4567zd2zzsaw_registerzd2allocationzd2
				(BgL_oz00_4829, BgL_regsz00_4830));
		}
	}



/* type-interference! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_25, obj_t BgL_regsz00_26)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 365 */
			{	/* SawMill/regalloc.scm 365 */
				obj_t BgL_method4570z00_4436;

				{	/* SawMill/regalloc.scm 365 */
					BgL_objectz00_bglt BgL_objz00_4437;

					BgL_objz00_4437 = (BgL_objectz00_bglt) (BgL_backz00_25);
					{	/* SawMill/regalloc.scm 365 */
						long BgL_objzd2classzd2numz00_4438;

						BgL_objzd2classzd2numz00_4438 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_4437);
						{	/* SawMill/regalloc.scm 365 */
							obj_t BgL_arg2643z00_4439;

							BgL_arg2643z00_4439 =
								PROCEDURE_REF
								(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
								(int) (((long) 1)));
							{	/* SawMill/regalloc.scm 365 */
								obj_t BgL_arrayz00_4441;

								int BgL_offsetz00_4442;

								BgL_arrayz00_4441 = BgL_arg2643z00_4439;
								BgL_offsetz00_4442 = (int) (BgL_objzd2classzd2numz00_4438);
								{	/* SawMill/regalloc.scm 365 */
									long BgL_offsetz00_4443;

									BgL_offsetz00_4443 =
										((long) (BgL_offsetz00_4442) - OBJECT_TYPE);
									{	/* SawMill/regalloc.scm 365 */
										long BgL_modz00_4444;

										{	/* SawMill/regalloc.scm 365 */
											int BgL_arg2645z00_4445;

											BgL_arg2645z00_4445 = (int) (((long) 16));
											{	/* SawMill/regalloc.scm 365 */
												long BgL_auxz00_7242;

												BgL_auxz00_7242 = (long) (BgL_arg2645z00_4445);
												BgL_modz00_4444 =
													(BgL_offsetz00_4443 / BgL_auxz00_7242);
										}}
										{	/* SawMill/regalloc.scm 365 */
											long BgL_restz00_4446;

											{	/* SawMill/regalloc.scm 365 */
												int BgL_arg2644z00_4447;

												BgL_arg2644z00_4447 = (int) (((long) 16));
												{	/* SawMill/regalloc.scm 365 */
													long BgL_auxz00_7246;

													BgL_auxz00_7246 = (long) (BgL_arg2644z00_4447);
													BgL_restz00_4446 =
														(BgL_offsetz00_4443 % BgL_auxz00_7246);
											}}
											{	/* SawMill/regalloc.scm 365 */

												BgL_method4570z00_4436 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_4441,
														(int) (BgL_modz00_4444)), (int) (BgL_restz00_4446));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4570z00_4436) (BgL_method4570z00_4436,
					(obj_t) (BgL_backz00_25), BgL_regsz00_26, BEOA);
			}
		}
	}



/* _type-interference! */
	obj_t BGl__typezd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4706, obj_t BgL_backz00_4707, obj_t BgL_regsz00_4708)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 365 */
			return
				BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2(
				(BgL_backendz00_bglt) (BgL_backz00_4707), BgL_regsz00_4708);
		}
	}



/* type-interference!-d4569 */
	bool_t
		BGl_typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_27, obj_t BgL_regsz00_28)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			if (PAIRP(BgL_regsz00_28))
				{
					obj_t BgL_regsz00_3198;

					BgL_regsz00_3198 = BgL_regsz00_28;
				BgL_zc3anonymousza35430ze3z83_3199:
					{	/* SawMill/regalloc.scm 368 */
						bool_t BgL_testz00_7260;

						{	/* SawMill/regalloc.scm 368 */
							obj_t BgL_auxz00_7261;

							BgL_auxz00_7261 = CDR(BgL_regsz00_3198);
							BgL_testz00_7260 = PAIRP(BgL_auxz00_7261);
						}
						if (BgL_testz00_7260)
							{	/* SawMill/regalloc.scm 369 */
								obj_t BgL_r1z00_3201;

								BgL_r1z00_3201 = CAR(BgL_regsz00_3198);
								{	/* SawMill/regalloc.scm 369 */
									BgL_typez00_bglt BgL_t1z00_3202;

									{
										BgL_rtl_regz00_bglt BgL_auxz00_7265;

										BgL_auxz00_7265 = (BgL_rtl_regz00_bglt) (BgL_r1z00_3201);
										BgL_t1z00_3202 =
											(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_7265))->
											BgL_typez00);
									}
									{	/* SawMill/regalloc.scm 370 */

										{	/* SawMill/regalloc.scm 371 */
											bool_t BgL_testz00_7268;

											{	/* SawMill/regalloc.scm 371 */
												obj_t BgL_obj3254z00_4466;

												BgL_obj3254z00_4466 = (obj_t) (BgL_t1z00_3202);
												BgL_testz00_7268 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3254z00_4466,
													BGl_typez00zztype_typez00);
											}
											if (BgL_testz00_7268)
												{	/* SawMill/regalloc.scm 372 */
													obj_t BgL_g4465z00_3204;

													BgL_g4465z00_3204 = CDR(BgL_regsz00_3198);
													{
														obj_t BgL_l4463z00_3206;

														BgL_l4463z00_3206 = BgL_g4465z00_3204;
													BgL_zc3anonymousza35433ze3z83_3207:
														if (PAIRP(BgL_l4463z00_3206))
															{	/* SawMill/regalloc.scm 376 */
																{	/* SawMill/regalloc.scm 373 */
																	obj_t BgL_r2z00_3209;

																	BgL_r2z00_3209 = CAR(BgL_l4463z00_3206);
																	{	/* SawMill/regalloc.scm 373 */
																		BgL_typez00_bglt BgL_t2z00_3210;

																		{
																			BgL_rtl_regz00_bglt BgL_auxz00_7275;

																			BgL_auxz00_7275 =
																				(BgL_rtl_regz00_bglt) (BgL_r2z00_3209);
																			BgL_t2z00_3210 =
																				(((BgL_rtl_regz00_bglt)
																					CREF(BgL_auxz00_7275))->BgL_typez00);
																		}
																		if (
																			((obj_t) (BgL_t1z00_3202) ==
																				(obj_t) (BgL_t2z00_3210)))
																			{	/* SawMill/regalloc.scm 374 */
																				BFALSE;
																			}
																		else
																			{	/* SawMill/regalloc.scm 374 */
																				BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
																					(BgL_r1z00_3201, BgL_r2z00_3209);
																			}
																	}
																}
																{
																	obj_t BgL_l4463z00_7283;

																	BgL_l4463z00_7283 = CDR(BgL_l4463z00_3206);
																	BgL_l4463z00_3206 = BgL_l4463z00_7283;
																	goto BgL_zc3anonymousza35433ze3z83_3207;
																}
															}
														else
															{	/* SawMill/regalloc.scm 376 */
																((bool_t) 1);
															}
													}
												}
											else
												{	/* SawMill/regalloc.scm 371 */
													((bool_t) 0);
												}
										}
										{
											obj_t BgL_regsz00_7285;

											BgL_regsz00_7285 = CDR(BgL_regsz00_3198);
											BgL_regsz00_3198 = BgL_regsz00_7285;
											goto BgL_zc3anonymousza35430ze3z83_3199;
										}
									}
								}
							}
						else
							{	/* SawMill/regalloc.scm 368 */
								return ((bool_t) 0);
							}
					}
				}
			else
				{	/* SawMill/regalloc.scm 366 */
					return ((bool_t) 0);
				}
		}
	}



/* _type-interference!-d4569 */
	obj_t
		BGl__typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4831, obj_t BgL_backz00_4832, obj_t BgL_regsz00_4833)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			return
				BBOOL
				(BGl_typezd2interferencez12zd2d4569z12zzsaw_registerzd2allocationzd2(
					(BgL_backendz00_bglt) (BgL_backz00_4832), BgL_regsz00_4833));
		}
	}



/* rtl-size */
	obj_t BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t BgL_oz00_53)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 800 */
			{

				if (BGL_OBJECTP(BgL_oz00_53))
					{	/* SawMill/regalloc.scm 800 */
						obj_t BgL_method4572z00_3219;

						{	/* SawMill/regalloc.scm 800 */
							BgL_objectz00_bglt BgL_objz00_4474;

							BgL_objz00_4474 = (BgL_objectz00_bglt) (BgL_oz00_53);
							{	/* SawMill/regalloc.scm 800 */
								long BgL_objzd2classzd2numz00_4475;

								BgL_objzd2classzd2numz00_4475 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4474);
								{	/* SawMill/regalloc.scm 800 */
									obj_t BgL_arg2643z00_4476;

									BgL_arg2643z00_4476 =
										PROCEDURE_REF
										(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
										(int) (((long) 1)));
									{	/* SawMill/regalloc.scm 800 */
										obj_t BgL_arrayz00_4478;

										int BgL_offsetz00_4479;

										BgL_arrayz00_4478 = BgL_arg2643z00_4476;
										BgL_offsetz00_4479 = (int) (BgL_objzd2classzd2numz00_4475);
										{	/* SawMill/regalloc.scm 800 */
											long BgL_offsetz00_4480;

											BgL_offsetz00_4480 =
												((long) (BgL_offsetz00_4479) - OBJECT_TYPE);
											{	/* SawMill/regalloc.scm 800 */
												long BgL_modz00_4481;

												{	/* SawMill/regalloc.scm 800 */
													int BgL_arg2645z00_4482;

													BgL_arg2645z00_4482 = (int) (((long) 16));
													{	/* SawMill/regalloc.scm 800 */
														long BgL_auxz00_7300;

														BgL_auxz00_7300 = (long) (BgL_arg2645z00_4482);
														BgL_modz00_4481 =
															(BgL_offsetz00_4480 / BgL_auxz00_7300);
												}}
												{	/* SawMill/regalloc.scm 800 */
													long BgL_restz00_4483;

													{	/* SawMill/regalloc.scm 800 */
														int BgL_arg2644z00_4484;

														BgL_arg2644z00_4484 = (int) (((long) 16));
														{	/* SawMill/regalloc.scm 800 */
															long BgL_auxz00_7304;

															BgL_auxz00_7304 = (long) (BgL_arg2644z00_4484);
															BgL_restz00_4483 =
																(BgL_offsetz00_4480 % BgL_auxz00_7304);
													}}
													{	/* SawMill/regalloc.scm 800 */

														BgL_method4572z00_3219 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4478,
																(int) (BgL_modz00_4481)),
															(int) (BgL_restz00_4483));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method4572z00_3219) (BgL_method4572z00_3219,
							BgL_oz00_53, BEOA);
					}
				else
					{	/* SawMill/regalloc.scm 800 */
						{	/* SawMill/regalloc.scm 800 */
							obj_t BgL_fun5442z00_3221;

							BgL_fun5442z00_3221 =
								PROCEDURE_REF
								(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
								(int) (((long) 0)));
							return PROCEDURE_ENTRY(BgL_fun5442z00_3221) (BgL_fun5442z00_3221,
								BgL_oz00_53, BEOA);
						}
					}
			}
		}
	}



/* _rtl-size */
	obj_t BGl__rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4834, obj_t BgL_oz00_4835)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 800 */
			return BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(BgL_oz00_4835);
		}
	}



/* rtl-size-default4571 */
	obj_t BGl_rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2(obj_t
		BgL_oz00_54)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			if (PAIRP(BgL_oz00_54))
				{	/* SawMill/regalloc.scm 802 */
					obj_t BgL_runner5454z00_3241;

					{	/* SawMill/regalloc.scm 802 */
						obj_t BgL_l4558z00_3223;

						BgL_l4558z00_3223 = BgL_oz00_54;
						{	/* SawMill/regalloc.scm 802 */
							obj_t BgL_head4560z00_3225;

							BgL_head4560z00_3225 =
								MAKE_PAIR(BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(CAR
									(BgL_l4558z00_3223)), BNIL);
							{	/* SawMill/regalloc.scm 802 */
								obj_t BgL_g4563z00_3226;

								BgL_g4563z00_3226 = CDR(BgL_l4558z00_3223);
								{
									obj_t BgL_l4558z00_3228;

									obj_t BgL_tail4561z00_3229;

									BgL_l4558z00_3228 = BgL_g4563z00_3226;
									BgL_tail4561z00_3229 = BgL_head4560z00_3225;
								BgL_zc3anonymousza35445ze3z83_3230:
									if (NULLP(BgL_l4558z00_3228))
										{	/* SawMill/regalloc.scm 802 */
											BgL_runner5454z00_3241 = BgL_head4560z00_3225;
										}
									else
										{	/* SawMill/regalloc.scm 802 */
											obj_t BgL_newtail4562z00_3232;

											BgL_newtail4562z00_3232 =
												MAKE_PAIR
												(BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(CAR
													(BgL_l4558z00_3228)), BNIL);
											SET_CDR(BgL_tail4561z00_3229, BgL_newtail4562z00_3232);
											{
												obj_t BgL_tail4561z00_7332;

												obj_t BgL_l4558z00_7330;

												BgL_l4558z00_7330 = CDR(BgL_l4558z00_3228);
												BgL_tail4561z00_7332 = BgL_newtail4562z00_3232;
												BgL_tail4561z00_3229 = BgL_tail4561z00_7332;
												BgL_l4558z00_3228 = BgL_l4558z00_7330;
												goto BgL_zc3anonymousza35445ze3z83_3230;
											}
										}
								}
							}
						}
					}
					return BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner5454z00_3241);
				}
			else
				{	/* SawMill/regalloc.scm 801 */
					return BINT(((long) 1));
		}}
	}



/* _rtl-size-default4571 */
	obj_t BGl__rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4836, obj_t BgL_oz00_4837)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			return
				BGl_rtlzd2siza7ezd2default4571za7zzsaw_registerzd2allocationzd2
				(BgL_oz00_4837);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_blockz00zzsaw_defsz00,
				BGl_proc5619z00zzsaw_registerzd2allocationzd2,
				BGl_string5618z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_rtl_insz00zzsaw_defsz00,
				BGl_proc5620z00zzsaw_registerzd2allocationzd2,
				BGl_string5618z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5621z00zzsaw_registerzd2allocationzd2,
				BGl_string5622z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5623z00zzsaw_registerzd2allocationzd2,
				BGl_string5624z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5625z00zzsaw_registerzd2allocationzd2,
				BGl_string5622z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5626z00zzsaw_registerzd2allocationzd2,
				BGl_string5627z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5628z00zzsaw_registerzd2allocationzd2,
				BGl_string5629z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5630z00zzsaw_registerzd2allocationzd2,
				BGl_string5627z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5631z00zzsaw_registerzd2allocationzd2,
				BGl_string5629z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_blockzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5632z00zzsaw_registerzd2allocationzd2,
				BGl_string5627z00zzsaw_registerzd2allocationzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_blockzf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc5633z00zzsaw_registerzd2allocationzd2,
				BGl_string5629z00zzsaw_registerzd2allocationzd2);
		}
	}



/* struct+object->objec4597 */
	obj_t
		BGl_structzb2objectzd2ze3objec4597z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4860, obj_t BgL_oz00_4861, obj_t BgL_sz00_4862)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			{
				BgL_blockzf2razf2_bglt BgL_oz00_3367;

				obj_t BgL_sz00_3368;

				{	/* SawMill/regalloc.scm 32 */
					BgL_blockzf2razf2_bglt BgL_auxz00_7347;

					BgL_oz00_3367 = (BgL_blockzf2razf2_bglt) (BgL_oz00_4861);
					BgL_sz00_3368 = BgL_sz00_4862;
					{

						{	/* SawMill/regalloc.scm 32 */
							obj_t BgL_old4117z00_3371;

							obj_t BgL_aux4118z00_3372;

							{	/* SawMill/regalloc.scm 32 */
								obj_t BgL_nextzd2method4596zd2_3377;

								BgL_nextzd2method4596zd2_3377 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3367),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
								if (PROCEDUREP(BgL_nextzd2method4596zd2_3377))
									{	/* SawMill/regalloc.scm 32 */
										BgL_old4117z00_3371 =
											PROCEDURE_ENTRY(BgL_nextzd2method4596zd2_3377)
											(BgL_nextzd2method4596zd2_3377, (obj_t) (BgL_oz00_3367),
											BgL_sz00_3368, BEOA);
									}
								else
									{	/* SawMill/regalloc.scm 32 */
										BgL_old4117z00_3371 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3367), BgL_sz00_3368));
									}
							}
							BgL_aux4118z00_3372 =
								STRUCT_REF(BgL_sz00_3368, (int) (((long) 0)));
							{	/* SawMill/regalloc.scm 32 */
								BgL_blockzf2razf2_bglt BgL_new4119z00_3373;

								BgL_new4119z00_3373 =
									((BgL_blockzf2razf2_bglt) (BgL_old4117z00_3371));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4119z00_3373),
									BGl_classzd2numzd2zz__objectz00
									(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2));
								{	/* SawMill/regalloc.scm 32 */
									BgL_blockzf2razf2_bglt BgL_arg5517z00_3375;

									{	/* SawMill/regalloc.scm 32 */
										obj_t BgL_arg5518z00_3376;

										BgL_arg5518z00_3376 =
											STRUCT_REF(BgL_aux4118z00_3372, (int) (((long) 0)));
										{	/* SawMill/regalloc.scm 32 */
											BgL_blockzf2razf2_bglt BgL_res5579z00_4695;

											{	/* SawMill/regalloc.scm 32 */
												obj_t BgL_trsif4099z00_4689;

												BgL_trsif4099z00_4689 = BgL_arg5518z00_3376;
												{	/* SawMill/regalloc.scm 32 */
													BgL_blockzf2razf2_bglt BgL_new4100z00_4690;

													BgL_new4100z00_4690 =
														((BgL_blockzf2razf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_blockzf2razf2_bgl))));
													{	/* SawMill/regalloc.scm 32 */
														BgL_blockzf2razf2_bglt BgL_res5578z00_4694;

														{	/* SawMill/regalloc.scm 32 */
															BgL_blockzf2razf2_bglt BgL_new4110z00_4691;

															BgL_new4110z00_4691 = BgL_new4100z00_4690;
															{	/* SawMill/regalloc.scm 32 */
																obj_t BgL_trsif4109z00_4693;

																BgL_trsif4109z00_4693 = BgL_trsif4099z00_4689;
																((((BgL_blockzf2razf2_bglt)
																			CREF(BgL_new4110z00_4691))->
																		BgL_trsifz00) =
																	((obj_t) BgL_trsif4109z00_4693), BUNSPEC);
																BgL_res5578z00_4694 = BgL_new4110z00_4691;
														}} BgL_res5578z00_4694;
													}
													BgL_res5579z00_4695 = BgL_new4100z00_4690;
											}}
											BgL_arg5517z00_3375 = BgL_res5579z00_4695;
									}}
									{	/* SawMill/regalloc.scm 32 */
										obj_t BgL_auxz00_7370;

										BgL_objectz00_bglt BgL_auxz00_7368;

										BgL_auxz00_7370 = (obj_t) (BgL_arg5517z00_3375);
										BgL_auxz00_7368 =
											(BgL_objectz00_bglt) (BgL_new4119z00_3373);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7368, BgL_auxz00_7370);
								}}
								BgL_auxz00_7347 = BgL_new4119z00_3373;
					}}}
					return (obj_t) (BgL_auxz00_7347);
				}
			}
		}
	}



/* object->struct-block4594 */
	obj_t
		BGl_objectzd2ze3structzd2block4594ze3zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4863, obj_t BgL_obj4114z00_4864)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 32 */
			{
				BgL_blockzf2razf2_bglt BgL_obj4114z00_3357;

				BgL_obj4114z00_3357 = (BgL_blockzf2razf2_bglt) (BgL_obj4114z00_4864);
				{

					{	/* SawMill/regalloc.scm 32 */
						obj_t BgL_res4115z00_3360;

						{	/* SawMill/regalloc.scm 32 */
							obj_t BgL_nextzd2method4593zd2_3365;

							BgL_nextzd2method4593zd2_3365 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4114z00_3357),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
							if (PROCEDUREP(BgL_nextzd2method4593zd2_3365))
								{	/* SawMill/regalloc.scm 32 */
									BgL_res4115z00_3360 =
										PROCEDURE_ENTRY(BgL_nextzd2method4593zd2_3365)
										(BgL_nextzd2method4593zd2_3365,
										(obj_t) (BgL_obj4114z00_3357), BEOA);
								}
							else
								{	/* SawMill/regalloc.scm 32 */
									BgL_res4115z00_3360 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4114z00_3357));
								}
						}
						{	/* SawMill/regalloc.scm 32 */
							obj_t BgL_aux4116z00_3361;

							{	/* SawMill/regalloc.scm 32 */
								obj_t BgL_keyz00_4666;

								BgL_keyz00_4666 = CNST_TABLE_REF(((long) 0));
								BgL_aux4116z00_3361 =
									make_struct(BgL_keyz00_4666, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawMill/regalloc.scm 32 */
								obj_t BgL_arg5513z00_3363;

								{
									obj_t BgL_auxz00_7387;

									{	/* SawMill/regalloc.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_7388;

										BgL_auxz00_7388 =
											(BgL_objectz00_bglt) (BgL_obj4114z00_3357);
										BgL_auxz00_7387 = BGL_OBJECT_WIDENING(BgL_auxz00_7388);
									}
									BgL_arg5513z00_3363 =
										(((BgL_blockzf2razf2_bglt) CREF(BgL_auxz00_7387))->
										BgL_trsifz00);
								}
								{	/* SawMill/regalloc.scm 32 */
									int BgL_auxz00_7392;

									BgL_auxz00_7392 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4116z00_3361, BgL_auxz00_7392,
										BgL_arg5513z00_3363);
							}}
							{	/* SawMill/regalloc.scm 32 */
								int BgL_auxz00_7395;

								BgL_auxz00_7395 = (int) (((long) 0));
								STRUCT_SET(BgL_res4115z00_3360, BgL_auxz00_7395,
									BgL_aux4116z00_3361);
							}
							{	/* SawMill/regalloc.scm 32 */
								obj_t BgL_auxz00_7398;

								BgL_auxz00_7398 = STRUCT_KEY(BgL_res4115z00_3360);
								STRUCT_KEY_SET(BgL_aux4116z00_3361, BgL_auxz00_7398);
							}
							{	/* SawMill/regalloc.scm 32 */
								obj_t BgL_kz00_4681;

								BgL_kz00_4681 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res4115z00_3360, BgL_kz00_4681);
							}
							return BgL_res4115z00_3360;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4592 */
	obj_t
		BGl_structzb2objectzd2ze3objec4592z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4865, obj_t BgL_oz00_4866, obj_t BgL_sz00_4867)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_oz00_3342;

				obj_t BgL_sz00_3343;

				{	/* SawMill/regalloc.scm 35 */
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7404;

					BgL_oz00_3342 = (BgL_rtl_inszf2razf2_bglt) (BgL_oz00_4866);
					BgL_sz00_3343 = BgL_sz00_4867;
					{

						{	/* SawMill/regalloc.scm 35 */
							obj_t BgL_old4167z00_3346;

							obj_t BgL_aux4168z00_3347;

							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_nextzd2method4591zd2_3355;

								BgL_nextzd2method4591zd2_3355 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3342),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
								if (PROCEDUREP(BgL_nextzd2method4591zd2_3355))
									{	/* SawMill/regalloc.scm 35 */
										BgL_old4167z00_3346 =
											PROCEDURE_ENTRY(BgL_nextzd2method4591zd2_3355)
											(BgL_nextzd2method4591zd2_3355, (obj_t) (BgL_oz00_3342),
											BgL_sz00_3343, BEOA);
									}
								else
									{	/* SawMill/regalloc.scm 35 */
										BgL_old4167z00_3346 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3342), BgL_sz00_3343));
									}
							}
							BgL_aux4168z00_3347 =
								STRUCT_REF(BgL_sz00_3343, (int) (((long) 0)));
							{	/* SawMill/regalloc.scm 35 */
								BgL_rtl_inszf2razf2_bglt BgL_new4169z00_3348;

								BgL_new4169z00_3348 =
									((BgL_rtl_inszf2razf2_bglt) (BgL_old4167z00_3346));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4169z00_3348),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
								{	/* SawMill/regalloc.scm 35 */
									BgL_rtl_inszf2razf2_bglt BgL_arg5506z00_3350;

									{	/* SawMill/regalloc.scm 35 */
										obj_t BgL_arg5507z00_3351;

										obj_t BgL_arg5508z00_3352;

										obj_t BgL_arg5509z00_3353;

										obj_t BgL_arg5510z00_3354;

										BgL_arg5507z00_3351 =
											STRUCT_REF(BgL_aux4168z00_3347, (int) (((long) 0)));
										BgL_arg5508z00_3352 =
											STRUCT_REF(BgL_aux4168z00_3347, (int) (((long) 1)));
										BgL_arg5509z00_3353 =
											STRUCT_REF(BgL_aux4168z00_3347, (int) (((long) 2)));
										BgL_arg5510z00_3354 =
											STRUCT_REF(BgL_aux4168z00_3347, (int) (((long) 3)));
										{	/* SawMill/regalloc.scm 35 */
											BgL_rtl_inszf2razf2_bglt BgL_res5576z00_4664;

											{	/* SawMill/regalloc.scm 35 */
												BgL_rtl_inszf2razf2_bglt BgL_new4140z00_4653;

												BgL_new4140z00_4653 =
													((BgL_rtl_inszf2razf2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_rtl_inszf2razf2_bgl))));
												{	/* SawMill/regalloc.scm 35 */
													BgL_rtl_inszf2razf2_bglt BgL_res5575z00_4663;

													{	/* SawMill/regalloc.scm 35 */
														BgL_rtl_inszf2razf2_bglt BgL_new4157z00_4654;

														BgL_new4157z00_4654 = BgL_new4140z00_4653;
														{	/* SawMill/regalloc.scm 35 */
															obj_t BgL_def4153z00_4659;

															obj_t BgL_out4154z00_4660;

															obj_t BgL_in4155z00_4661;

															obj_t BgL_spill4156z00_4662;

															BgL_def4153z00_4659 = BgL_arg5507z00_3351;
															BgL_out4154z00_4660 = BgL_arg5508z00_3352;
															BgL_in4155z00_4661 = BgL_arg5509z00_3353;
															BgL_spill4156z00_4662 = BgL_arg5510z00_3354;
															((((BgL_rtl_inszf2razf2_bglt)
																		CREF(BgL_new4157z00_4654))->BgL_defz00) =
																((obj_t) BgL_def4153z00_4659), BUNSPEC);
															((((BgL_rtl_inszf2razf2_bglt)
																		CREF(BgL_new4157z00_4654))->BgL_outz00) =
																((obj_t) BgL_out4154z00_4660), BUNSPEC);
															((((BgL_rtl_inszf2razf2_bglt)
																		CREF(BgL_new4157z00_4654))->BgL_inz00) =
																((obj_t) BgL_in4155z00_4661), BUNSPEC);
															((((BgL_rtl_inszf2razf2_bglt)
																		CREF(BgL_new4157z00_4654))->BgL_spillz00) =
																((obj_t) BgL_spill4156z00_4662), BUNSPEC);
															BgL_res5575z00_4663 = BgL_new4157z00_4654;
													}} BgL_res5575z00_4663;
												}
												BgL_res5576z00_4664 = BgL_new4140z00_4653;
											}
											BgL_arg5506z00_3350 = BgL_res5576z00_4664;
									}}
									{	/* SawMill/regalloc.scm 35 */
										obj_t BgL_auxz00_7436;

										BgL_objectz00_bglt BgL_auxz00_7434;

										BgL_auxz00_7436 = (obj_t) (BgL_arg5506z00_3350);
										BgL_auxz00_7434 =
											(BgL_objectz00_bglt) (BgL_new4169z00_3348);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7434, BgL_auxz00_7436);
								}}
								BgL_auxz00_7404 = BgL_new4169z00_3348;
					}}}
					return (obj_t) (BgL_auxz00_7404);
				}
			}
		}
	}



/* object->struct-rtl_i4589 */
	obj_t
		BGl_objectzd2ze3structzd2rtl_i4589ze3zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4868, obj_t BgL_obj4164z00_4869)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 35 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_obj4164z00_3326;

				BgL_obj4164z00_3326 = (BgL_rtl_inszf2razf2_bglt) (BgL_obj4164z00_4869);
				{

					{	/* SawMill/regalloc.scm 35 */
						obj_t BgL_res4165z00_3329;

						{	/* SawMill/regalloc.scm 35 */
							obj_t BgL_nextzd2method4588zd2_3340;

							BgL_nextzd2method4588zd2_3340 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4164z00_3326),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
							if (PROCEDUREP(BgL_nextzd2method4588zd2_3340))
								{	/* SawMill/regalloc.scm 35 */
									BgL_res4165z00_3329 =
										PROCEDURE_ENTRY(BgL_nextzd2method4588zd2_3340)
										(BgL_nextzd2method4588zd2_3340,
										(obj_t) (BgL_obj4164z00_3326), BEOA);
								}
							else
								{	/* SawMill/regalloc.scm 35 */
									BgL_res4165z00_3329 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4164z00_3326));
								}
						}
						{	/* SawMill/regalloc.scm 35 */
							obj_t BgL_aux4166z00_3330;

							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_keyz00_4608;

								BgL_keyz00_4608 = CNST_TABLE_REF(((long) 1));
								BgL_aux4166z00_3330 =
									make_struct(BgL_keyz00_4608, (int) (((long) 4)), BUNSPEC);
							}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_arg5496z00_3332;

								{
									obj_t BgL_auxz00_7453;

									{	/* SawMill/regalloc.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_7454;

										BgL_auxz00_7454 =
											(BgL_objectz00_bglt) (BgL_obj4164z00_3326);
										BgL_auxz00_7453 = BGL_OBJECT_WIDENING(BgL_auxz00_7454);
									}
									BgL_arg5496z00_3332 =
										(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_7453))->
										BgL_defz00);
								}
								{	/* SawMill/regalloc.scm 35 */
									int BgL_auxz00_7458;

									BgL_auxz00_7458 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4166z00_3330, BgL_auxz00_7458,
										BgL_arg5496z00_3332);
							}}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_arg5498z00_3334;

								{
									obj_t BgL_auxz00_7461;

									{	/* SawMill/regalloc.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_7462;

										BgL_auxz00_7462 =
											(BgL_objectz00_bglt) (BgL_obj4164z00_3326);
										BgL_auxz00_7461 = BGL_OBJECT_WIDENING(BgL_auxz00_7462);
									}
									BgL_arg5498z00_3334 =
										(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_7461))->
										BgL_outz00);
								}
								{	/* SawMill/regalloc.scm 35 */
									int BgL_auxz00_7466;

									BgL_auxz00_7466 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4166z00_3330, BgL_auxz00_7466,
										BgL_arg5498z00_3334);
							}}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_arg5500z00_3336;

								{
									obj_t BgL_auxz00_7469;

									{	/* SawMill/regalloc.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_7470;

										BgL_auxz00_7470 =
											(BgL_objectz00_bglt) (BgL_obj4164z00_3326);
										BgL_auxz00_7469 = BGL_OBJECT_WIDENING(BgL_auxz00_7470);
									}
									BgL_arg5500z00_3336 =
										(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_7469))->
										BgL_inz00);
								}
								{	/* SawMill/regalloc.scm 35 */
									int BgL_auxz00_7474;

									BgL_auxz00_7474 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4166z00_3330, BgL_auxz00_7474,
										BgL_arg5500z00_3336);
							}}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_arg5502z00_3338;

								{
									obj_t BgL_auxz00_7477;

									{	/* SawMill/regalloc.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_7478;

										BgL_auxz00_7478 =
											(BgL_objectz00_bglt) (BgL_obj4164z00_3326);
										BgL_auxz00_7477 = BGL_OBJECT_WIDENING(BgL_auxz00_7478);
									}
									BgL_arg5502z00_3338 =
										(((BgL_rtl_inszf2razf2_bglt) CREF(BgL_auxz00_7477))->
										BgL_spillz00);
								}
								{	/* SawMill/regalloc.scm 35 */
									int BgL_auxz00_7482;

									BgL_auxz00_7482 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4166z00_3330, BgL_auxz00_7482,
										BgL_arg5502z00_3338);
							}}
							{	/* SawMill/regalloc.scm 35 */
								int BgL_auxz00_7485;

								BgL_auxz00_7485 = (int) (((long) 0));
								STRUCT_SET(BgL_res4165z00_3329, BgL_auxz00_7485,
									BgL_aux4166z00_3330);
							}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_auxz00_7488;

								BgL_auxz00_7488 = STRUCT_KEY(BgL_res4165z00_3329);
								STRUCT_KEY_SET(BgL_aux4166z00_3330, BgL_auxz00_7488);
							}
							{	/* SawMill/regalloc.scm 35 */
								obj_t BgL_kz00_4635;

								BgL_kz00_4635 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res4165z00_3329, BgL_kz00_4635);
							}
							return BgL_res4165z00_3329;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4587 */
	obj_t
		BGl_structzb2objectzd2ze3objec4587z83zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4870, obj_t BgL_oz00_4871, obj_t BgL_sz00_4872)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_oz00_3309;

				obj_t BgL_sz00_3310;

				{	/* SawMill/regalloc.scm 41 */
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_7494;

					BgL_oz00_3309 = (BgL_rtl_regzf2razf2_bglt) (BgL_oz00_4871);
					BgL_sz00_3310 = BgL_sz00_4872;
					{

						{	/* SawMill/regalloc.scm 41 */
							obj_t BgL_old4241z00_3313;

							obj_t BgL_aux4242z00_3314;

							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_nextzd2method4586zd2_3324;

								BgL_nextzd2method4586zd2_3324 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_3309),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
								if (PROCEDUREP(BgL_nextzd2method4586zd2_3324))
									{	/* SawMill/regalloc.scm 41 */
										BgL_old4241z00_3313 =
											PROCEDURE_ENTRY(BgL_nextzd2method4586zd2_3324)
											(BgL_nextzd2method4586zd2_3324, (obj_t) (BgL_oz00_3309),
											BgL_sz00_3310, BEOA);
									}
								else
									{	/* SawMill/regalloc.scm 41 */
										BgL_old4241z00_3313 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_3309), BgL_sz00_3310));
									}
							}
							BgL_aux4242z00_3314 =
								STRUCT_REF(BgL_sz00_3310, (int) (((long) 0)));
							{	/* SawMill/regalloc.scm 41 */
								BgL_rtl_regzf2razf2_bglt BgL_new4243z00_3315;

								BgL_new4243z00_3315 =
									((BgL_rtl_regzf2razf2_bglt) (BgL_old4241z00_3313));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4243z00_3315),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2));
								{	/* SawMill/regalloc.scm 41 */
									BgL_rtl_regzf2razf2_bglt BgL_arg5487z00_3317;

									{	/* SawMill/regalloc.scm 41 */
										obj_t BgL_arg5488z00_3318;

										obj_t BgL_arg5489z00_3319;

										obj_t BgL_arg5490z00_3320;

										obj_t BgL_arg5491z00_3321;

										obj_t BgL_arg5492z00_3322;

										obj_t BgL_arg5493z00_3323;

										BgL_arg5488z00_3318 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 0)));
										BgL_arg5489z00_3319 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 1)));
										BgL_arg5490z00_3320 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 2)));
										BgL_arg5491z00_3321 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 3)));
										BgL_arg5492z00_3322 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 4)));
										BgL_arg5493z00_3323 =
											STRUCT_REF(BgL_aux4242z00_3314, (int) (((long) 5)));
										{	/* SawMill/regalloc.scm 41 */
											BgL_rtl_regzf2razf2_bglt BgL_res5573z00_4606;

											{	/* SawMill/regalloc.scm 41 */
												int BgL_num4201z00_4585;

												int BgL_occurrences4204z00_4588;

												BgL_num4201z00_4585 = CINT(BgL_arg5488z00_3318);
												BgL_occurrences4204z00_4588 = CINT(BgL_arg5491z00_3321);
												{	/* SawMill/regalloc.scm 41 */
													BgL_rtl_regzf2razf2_bglt BgL_new4207z00_4591;

													BgL_new4207z00_4591 =
														((BgL_rtl_regzf2razf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_rtl_regzf2razf2_bgl))));
													{	/* SawMill/regalloc.scm 41 */
														BgL_rtl_regzf2razf2_bglt BgL_res5572z00_4605;

														{	/* SawMill/regalloc.scm 41 */
															BgL_rtl_regzf2razf2_bglt BgL_new4229z00_4592;

															BgL_new4229z00_4592 = BgL_new4207z00_4591;
															{	/* SawMill/regalloc.scm 41 */
																int BgL_num4223z00_4599;

																obj_t BgL_color4224z00_4600;

																obj_t BgL_coalesce4225z00_4601;

																int BgL_occurrences4226z00_4602;

																obj_t BgL_interfere4227z00_4603;

																obj_t BgL_interfere24228z00_4604;

																BgL_num4223z00_4599 = BgL_num4201z00_4585;
																BgL_color4224z00_4600 = BgL_arg5489z00_3319;
																BgL_coalesce4225z00_4601 = BgL_arg5490z00_3320;
																BgL_occurrences4226z00_4602 =
																	BgL_occurrences4204z00_4588;
																BgL_interfere4227z00_4603 = BgL_arg5492z00_3322;
																BgL_interfere24228z00_4604 =
																	BgL_arg5493z00_3323;
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->BgL_numz00) =
																	((int) BgL_num4223z00_4599), BUNSPEC);
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->
																		BgL_colorz00) =
																	((obj_t) BgL_color4224z00_4600), BUNSPEC);
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->
																		BgL_coalescez00) =
																	((obj_t) BgL_coalesce4225z00_4601), BUNSPEC);
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->
																		BgL_occurrencesz00) =
																	((int) BgL_occurrences4226z00_4602), BUNSPEC);
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->
																		BgL_interferez00) =
																	((obj_t) BgL_interfere4227z00_4603), BUNSPEC);
																((((BgL_rtl_regzf2razf2_bglt)
																			CREF(BgL_new4229z00_4592))->
																		BgL_interfere2z00) =
																	((obj_t) BgL_interfere24228z00_4604),
																	BUNSPEC);
																BgL_res5572z00_4605 = BgL_new4229z00_4592;
														}} BgL_res5572z00_4605;
													}
													BgL_res5573z00_4606 = BgL_new4207z00_4591;
											}}
											BgL_arg5487z00_3317 = BgL_res5573z00_4606;
									}}
									{	/* SawMill/regalloc.scm 41 */
										obj_t BgL_auxz00_7534;

										BgL_objectz00_bglt BgL_auxz00_7532;

										BgL_auxz00_7534 = (obj_t) (BgL_arg5487z00_3317);
										BgL_auxz00_7532 =
											(BgL_objectz00_bglt) (BgL_new4243z00_3315);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7532, BgL_auxz00_7534);
								}}
								BgL_auxz00_7494 = BgL_new4243z00_3315;
					}}}
					return (obj_t) (BgL_auxz00_7494);
				}
			}
		}
	}



/* object->struct-rtl_r4585 */
	obj_t
		BGl_objectzd2ze3structzd2rtl_r4585ze3zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4873, obj_t BgL_obj4238z00_4874)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 41 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_obj4238z00_3289;

				BgL_obj4238z00_3289 = (BgL_rtl_regzf2razf2_bglt) (BgL_obj4238z00_4874);
				{

					{	/* SawMill/regalloc.scm 41 */
						obj_t BgL_res4239z00_3292;

						{	/* SawMill/regalloc.scm 41 */
							obj_t BgL_nextzd2method4584zd2_3307;

							BgL_nextzd2method4584zd2_3307 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4238z00_3289),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
							if (PROCEDUREP(BgL_nextzd2method4584zd2_3307))
								{	/* SawMill/regalloc.scm 41 */
									BgL_res4239z00_3292 =
										PROCEDURE_ENTRY(BgL_nextzd2method4584zd2_3307)
										(BgL_nextzd2method4584zd2_3307,
										(obj_t) (BgL_obj4238z00_3289), BEOA);
								}
							else
								{	/* SawMill/regalloc.scm 41 */
									BgL_res4239z00_3292 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4238z00_3289));
								}
						}
						{	/* SawMill/regalloc.scm 41 */
							obj_t BgL_aux4240z00_3293;

							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_keyz00_4532;

								BgL_keyz00_4532 = CNST_TABLE_REF(((long) 2));
								BgL_aux4240z00_3293 =
									make_struct(BgL_keyz00_4532, (int) (((long) 6)), BUNSPEC);
							}
							{	/* SawMill/regalloc.scm 41 */
								int BgL_arg5473z00_3295;

								{
									obj_t BgL_auxz00_7551;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7552;

										BgL_auxz00_7552 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7551 = BGL_OBJECT_WIDENING(BgL_auxz00_7552);
									}
									BgL_arg5473z00_3295 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7551))->
										BgL_numz00);
								}
								{	/* SawMill/regalloc.scm 41 */
									obj_t BgL_auxz00_7558;

									int BgL_auxz00_7556;

									BgL_auxz00_7558 = BINT(BgL_arg5473z00_3295);
									BgL_auxz00_7556 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7556,
										BgL_auxz00_7558);
							}}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_arg5475z00_3297;

								{
									obj_t BgL_auxz00_7561;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7562;

										BgL_auxz00_7562 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7561 = BGL_OBJECT_WIDENING(BgL_auxz00_7562);
									}
									BgL_arg5475z00_3297 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7561))->
										BgL_colorz00);
								}
								{	/* SawMill/regalloc.scm 41 */
									int BgL_auxz00_7566;

									BgL_auxz00_7566 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7566,
										BgL_arg5475z00_3297);
							}}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_arg5477z00_3299;

								{
									obj_t BgL_auxz00_7569;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7570;

										BgL_auxz00_7570 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7569 = BGL_OBJECT_WIDENING(BgL_auxz00_7570);
									}
									BgL_arg5477z00_3299 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7569))->
										BgL_coalescez00);
								}
								{	/* SawMill/regalloc.scm 41 */
									int BgL_auxz00_7574;

									BgL_auxz00_7574 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7574,
										BgL_arg5477z00_3299);
							}}
							{	/* SawMill/regalloc.scm 41 */
								int BgL_arg5479z00_3301;

								{
									obj_t BgL_auxz00_7577;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7578;

										BgL_auxz00_7578 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7577 = BGL_OBJECT_WIDENING(BgL_auxz00_7578);
									}
									BgL_arg5479z00_3301 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7577))->
										BgL_occurrencesz00);
								}
								{	/* SawMill/regalloc.scm 41 */
									obj_t BgL_auxz00_7584;

									int BgL_auxz00_7582;

									BgL_auxz00_7584 = BINT(BgL_arg5479z00_3301);
									BgL_auxz00_7582 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7582,
										BgL_auxz00_7584);
							}}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_arg5481z00_3303;

								{
									obj_t BgL_auxz00_7587;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7588;

										BgL_auxz00_7588 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7587 = BGL_OBJECT_WIDENING(BgL_auxz00_7588);
									}
									BgL_arg5481z00_3303 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7587))->
										BgL_interferez00);
								}
								{	/* SawMill/regalloc.scm 41 */
									int BgL_auxz00_7592;

									BgL_auxz00_7592 = (int) (((long) 4));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7592,
										BgL_arg5481z00_3303);
							}}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_arg5483z00_3305;

								{
									obj_t BgL_auxz00_7595;

									{	/* SawMill/regalloc.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_7596;

										BgL_auxz00_7596 =
											(BgL_objectz00_bglt) (BgL_obj4238z00_3289);
										BgL_auxz00_7595 = BGL_OBJECT_WIDENING(BgL_auxz00_7596);
									}
									BgL_arg5483z00_3305 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7595))->
										BgL_interfere2z00);
								}
								{	/* SawMill/regalloc.scm 41 */
									int BgL_auxz00_7600;

									BgL_auxz00_7600 = (int) (((long) 5));
									STRUCT_SET(BgL_aux4240z00_3293, BgL_auxz00_7600,
										BgL_arg5483z00_3305);
							}}
							{	/* SawMill/regalloc.scm 41 */
								int BgL_auxz00_7603;

								BgL_auxz00_7603 = (int) (((long) 0));
								STRUCT_SET(BgL_res4239z00_3292, BgL_auxz00_7603,
									BgL_aux4240z00_3293);
							}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_auxz00_7606;

								BgL_auxz00_7606 = STRUCT_KEY(BgL_res4239z00_3292);
								STRUCT_KEY_SET(BgL_aux4240z00_3293, BgL_auxz00_7606);
							}
							{	/* SawMill/regalloc.scm 41 */
								obj_t BgL_kz00_4567;

								BgL_kz00_4567 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res4239z00_3292, BgL_kz00_4567);
							}
							return BgL_res4239z00_3292;
						}
					}
				}
			}
		}
	}



/* dump-rtl_reg/ra4583 */
	obj_t BGl_dumpzd2rtl_regzf2ra4583z20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4875, obj_t BgL_oz00_4876, obj_t BgL_pz00_4877,
		obj_t BgL_mz00_4878)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 866 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_oz00_3281;

				obj_t BgL_pz00_3282;

				obj_t BgL_mz00_3283;

				BgL_oz00_3281 = (BgL_rtl_regzf2razf2_bglt) (BgL_oz00_4876);
				BgL_pz00_3282 = BgL_pz00_4877;
				BgL_mz00_3283 = BgL_mz00_4878;
				return
					bgl_display_obj(BGl_shapez00zztools_shapez00(
						(obj_t) (BgL_oz00_3281)), BgL_pz00_3282);
			}
		}
	}



/* shape-rtl_reg/ra4580 */
	obj_t BGl_shapezd2rtl_regzf2ra4580z20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4879, obj_t BgL_oz00_4880)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 846 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_oz00_3265;

				BgL_oz00_3265 = (BgL_rtl_regzf2razf2_bglt) (BgL_oz00_4880);
				{

					{	/* SawMill/regalloc.scm 848 */
						obj_t BgL_sz00_3269;

						{	/* SawMill/regalloc.scm 846 */
							obj_t BgL_nextzd2method4579zd2_3279;

							BgL_nextzd2method4579zd2_3279 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_oz00_3265),
								BGl_shapezd2envzd2zztools_shapez00,
								BGl_rtl_regzf2razf2zzsaw_registerzd2allocationzd2);
							if (PROCEDUREP(BgL_nextzd2method4579zd2_3279))
								{	/* SawMill/regalloc.scm 846 */
									BgL_sz00_3269 =
										PROCEDURE_ENTRY(BgL_nextzd2method4579zd2_3279)
										(BgL_nextzd2method4579zd2_3279, (obj_t) (BgL_oz00_3265),
										BEOA);
								}
							else
								{	/* SawMill/regalloc.scm 846 */
									BgL_sz00_3269 =
										BGl_shapez00zztools_shapez00((obj_t) (BgL_oz00_3265));
								}
						}
						{	/* SawMill/regalloc.scm 849 */
							obj_t BgL_pz00_3270;

							{	/* SawMill/regalloc.scm 849 */

								{	/* SawMill/regalloc.scm 849 */

									BgL_pz00_3270 =
										BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
								}
							}
							{	/* SawMill/regalloc.scm 851 */
								bool_t BgL_testz00_7626;

								{	/* SawMill/regalloc.scm 851 */
									obj_t BgL_auxz00_7627;

									{
										obj_t BgL_auxz00_7628;

										{	/* SawMill/regalloc.scm 851 */
											BgL_objectz00_bglt BgL_auxz00_7629;

											BgL_auxz00_7629 = (BgL_objectz00_bglt) (BgL_oz00_3265);
											BgL_auxz00_7628 = BGL_OBJECT_WIDENING(BgL_auxz00_7629);
										}
										BgL_auxz00_7627 =
											(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7628))->
											BgL_colorz00);
									}
									BgL_testz00_7626 = INTEGERP(BgL_auxz00_7627);
								}
								if (BgL_testz00_7626)
									{	/* SawMill/regalloc.scm 851 */
										bgl_display_obj(BgL_sz00_3269, BgL_pz00_3270);
										bgl_display_string
											(BGl_string5634z00zzsaw_registerzd2allocationzd2,
											BgL_pz00_3270);
										{	/* SawMill/regalloc.scm 854 */
											obj_t BgL_arg5463z00_3272;

											{
												obj_t BgL_auxz00_7636;

												{	/* SawMill/regalloc.scm 854 */
													BgL_objectz00_bglt BgL_auxz00_7637;

													BgL_auxz00_7637 =
														(BgL_objectz00_bglt) (BgL_oz00_3265);
													BgL_auxz00_7636 =
														BGL_OBJECT_WIDENING(BgL_auxz00_7637);
												}
												BgL_arg5463z00_3272 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7636))->
													BgL_colorz00);
											}
											bgl_display_obj(BgL_arg5463z00_3272, BgL_pz00_3270);
										}
									}
								else
									{	/* SawMill/regalloc.scm 855 */
										bool_t BgL_testz00_7642;

										{	/* SawMill/regalloc.scm 855 */
											obj_t BgL_arg5467z00_3276;

											{
												obj_t BgL_auxz00_7643;

												{	/* SawMill/regalloc.scm 855 */
													BgL_objectz00_bglt BgL_auxz00_7644;

													BgL_auxz00_7644 =
														(BgL_objectz00_bglt) (BgL_oz00_3265);
													BgL_auxz00_7643 =
														BGL_OBJECT_WIDENING(BgL_auxz00_7644);
												}
												BgL_arg5467z00_3276 =
													(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_7643))->
													BgL_colorz00);
											}
											BgL_testz00_7642 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg5467z00_3276,
												BGl_rtl_regz00zzsaw_defsz00);
										}
										if (BgL_testz00_7642)
											{	/* SawMill/regalloc.scm 855 */
												bgl_display_obj(BgL_sz00_3269, BgL_pz00_3270);
												bgl_display_string
													(BGl_string5635z00zzsaw_registerzd2allocationzd2,
													BgL_pz00_3270);
												{	/* SawMill/regalloc.scm 858 */
													obj_t BgL_arg5465z00_3274;

													{	/* SawMill/regalloc.scm 858 */
														obj_t BgL_arg5466z00_3275;

														{
															obj_t BgL_auxz00_7651;

															{	/* SawMill/regalloc.scm 858 */
																BgL_objectz00_bglt BgL_auxz00_7652;

																BgL_auxz00_7652 =
																	(BgL_objectz00_bglt) (BgL_oz00_3265);
																BgL_auxz00_7651 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_7652);
															}
															BgL_arg5466z00_3275 =
																(((BgL_rtl_regzf2razf2_bglt)
																	CREF(BgL_auxz00_7651))->BgL_colorz00);
														}
														BgL_arg5465z00_3274 =
															BGl_shapez00zztools_shapez00(BgL_arg5466z00_3275);
													}
													bgl_display_obj(BgL_arg5465z00_3274, BgL_pz00_3270);
												}
											}
										else
											{	/* SawMill/regalloc.scm 855 */
												bgl_display_obj(BgL_sz00_3269, BgL_pz00_3270);
											}
									}
							}
							return bgl_close_output_port(BgL_pz00_3270);
						}
					}
				}
			}
		}
	}



/* dump-rtl_ins/ra4578 */
	obj_t BGl_dumpzd2rtl_inszf2ra4578z20zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4881, obj_t BgL_oz00_4882, obj_t BgL_pz00_4883,
		obj_t BgL_mz00_4884)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 817 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_oz00_3257;

				obj_t BgL_pz00_3258;

				obj_t BgL_mz00_3259;

				BgL_oz00_3257 = (BgL_rtl_inszf2razf2_bglt) (BgL_oz00_4882);
				BgL_pz00_3258 = BgL_pz00_4883;
				BgL_mz00_3259 = BgL_mz00_4884;
				{

					{	/* SawMill/regalloc.scm 817 */
						obj_t BgL_nextzd2method4577zd2_3263;

						BgL_nextzd2method4577zd2_3263 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_oz00_3257),
							BGl_dumpzd2envzd2zzsaw_defsz00,
							BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
						if (PROCEDUREP(BgL_nextzd2method4577zd2_3263))
							{	/* SawMill/regalloc.scm 817 */
								PROCEDURE_ENTRY(BgL_nextzd2method4577zd2_3263)
									(BgL_nextzd2method4577zd2_3263, (obj_t) (BgL_oz00_3257),
									BgL_pz00_3258, BgL_mz00_3259, BEOA);
							}
						else
							{	/* SawMill/regalloc.scm 817 */
								BGl_dumpz00zzsaw_defsz00(
									(obj_t) (BgL_oz00_3257), BgL_pz00_3258, CINT(BgL_mz00_3259));
							}
					}
					return BNIL;
				}
			}
		}
	}



/* rtl-size-rtl_ins4576 */
	obj_t BGl_rtlzd2siza7ezd2rtl_ins4576za7zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4885, obj_t BgL_oz00_4886)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 810 */
			{
				BgL_rtl_insz00_bglt BgL_oz00_3248;

				{	/* SawMill/regalloc.scm 811 */
					long BgL_auxz00_7672;

					BgL_oz00_3248 = (BgL_rtl_insz00_bglt) (BgL_oz00_4886);
					{	/* SawMill/regalloc.scm 812 */
						obj_t BgL_arg5458z00_3253;

						{	/* SawMill/regalloc.scm 812 */
							obj_t BgL_arg5459z00_3254;

							BgL_arg5459z00_3254 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_oz00_3248))->BgL_argsz00);
							BgL_arg5458z00_3253 =
								BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
								(BgL_arg5459z00_3254);
						}
						BgL_auxz00_7672 = (((long) 1) + (long) CINT(BgL_arg5458z00_3253));
					}
					return BINT(BgL_auxz00_7672);
				}
			}
		}
	}



/* rtl-size-block4574 */
	obj_t BGl_rtlzd2siza7ezd2block4574za7zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4887, obj_t BgL_oz00_4888)
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 806 */
			{
				BgL_blockz00_bglt BgL_oz00_3242;

				BgL_oz00_3242 = (BgL_blockz00_bglt) (BgL_oz00_4888);
				{	/* SawMill/regalloc.scm 807 */
					obj_t BgL_arg5455z00_4513;

					BgL_arg5455z00_4513 =
						(((BgL_blockz00_bglt) CREF(BgL_oz00_3242))->BgL_firstz00);
					return
						BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
						(BgL_arg5455z00_4513);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2()
	{
		AN_OBJECT;
		{	/* SawMill/regalloc.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
			return
				BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 459173489),
				BSTRING_TO_STRING(BGl_string5636z00zzsaw_registerzd2allocationzd2));
		}
	}

#ifdef __cplusplus
}
#endif
