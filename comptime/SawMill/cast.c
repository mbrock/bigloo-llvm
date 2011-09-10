/*===========================================================================*/
/*   (SawMill/cast.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/cast.scm)*/
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

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


	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl_typezd2destzd2rtl_vref4374z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t BGl_typezd2argszd2rtl_vlengt4396z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	static obj_t BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backendz00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_typezd2destzd2rtl_mov4359z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2destzd2rtl_loadfu4363z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_castz00();
	static obj_t BGl__addzd2castszd2zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t BGl__typezd2argszd2default4385z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_typezd2destzd2rtl_loadi4361z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2destzd2rtl_isa4378z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_isaz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_castz00();
	static obj_t BGl_typezd2argszd2rtl_boxref4410z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static BgL_typez00_bglt BGl_typezd2destzd2zzsaw_castz00(BgL_rtl_funz00_bglt,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_typezd2destzd2rtl_vlengt4376z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2argszd2rtl_vset4394z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_typezd2argszd2rtl_setfie4390z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_typezd2destzd2rtl_nop4357z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2argszd2rtl_call4400z00zzsaw_castz00(obj_t, obj_t);
	extern BgL_rtl_castz00_bglt BGl_makezd2rtl_castzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_addzd2castzd2zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	static obj_t BGl_typezd2destzd2rtl_call4382z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2destzd2rtl_cast_n4380z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2argszd2rtl_getfie4388z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_castz00();
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static obj_t BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backendz00_bglt,
		BgL_rtl_funz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_typezd2argszd2rtl_funcal4404z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_typezd2destzd2rtl_new4370z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl__typezd2destzd2zzsaw_castz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_castz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_castz00();
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_typezd2destzd2rtl_valloc4372z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2argszd2rtl_boxset4412z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_typezd2argszd2rtl_lightf4406z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_typezd2argszd2rtl_apply4408z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_typezd2argszd2zzsaw_castz00(BgL_rtl_funz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_castz00();
	static obj_t BGl__typezd2destzd2default4354z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2destzd2rtl_getfie4368z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_typezd2destzd2rtl_loadg4365z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2argszd2rtl_storeg4398z00zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	static obj_t BGl_typezd2destzd2rtl_cast4384z00zzsaw_castz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_addzd2castszd2insz00zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl__typezd2argszd2zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static obj_t BGl_typezd2argszd2rtl_return4402z00zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_castz00();
	static obj_t BGl_typezd2argszd2rtl_vref4392z00zzsaw_castz00(obj_t, obj_t);
	static obj_t __cnst[8];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_typezd2argszd2envz00zzsaw_castz00,
		BgL_bgl__typeza7d2argsza7d2za74661za7, BGl__typezd2argszd2zzsaw_castz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4629z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4662z00,
		BGl_typezd2destzd2rtl_nop4357z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4631z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4663z00,
		BGl_typezd2destzd2rtl_mov4359z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4632z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4664z00,
		BGl_typezd2destzd2rtl_loadi4361z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4633z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4665z00,
		BGl_typezd2destzd2rtl_loadfu4363z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4634z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4666z00,
		BGl_typezd2destzd2rtl_loadg4365z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4635z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4667z00,
		BGl_typezd2destzd2rtl_getfie4368z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4636z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4668z00,
		BGl_typezd2destzd2rtl_new4370z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4637z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4669z00,
		BGl_typezd2destzd2rtl_valloc4372z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4638z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4670z00,
		BGl_typezd2destzd2rtl_vref4374z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4640z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4671z00,
		BGl_typezd2destzd2rtl_isa4378z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4639z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4672z00,
		BGl_typezd2destzd2rtl_vlengt4376z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4641z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4673z00,
		BGl_typezd2destzd2rtl_cast_n4380z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4642z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4674z00,
		BGl_typezd2destzd2rtl_call4382z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4643z00zzsaw_castz00,
		BgL_bgl_typeza7d2destza7d2rt4675z00,
		BGl_typezd2destzd2rtl_cast4384z00zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4644z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4676z00,
		BGl_typezd2argszd2rtl_getfie4388z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4645z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4677z00,
		BGl_typezd2argszd2rtl_setfie4390z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4646z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4678z00,
		BGl_typezd2argszd2rtl_vref4392z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4647z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4679z00,
		BGl_typezd2argszd2rtl_vset4394z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4648z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4680z00,
		BGl_typezd2argszd2rtl_vlengt4396z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4650z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4681z00,
		BGl_typezd2argszd2rtl_call4400z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4649z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4682z00,
		BGl_typezd2argszd2rtl_storeg4398z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4651z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4683z00,
		BGl_typezd2argszd2rtl_return4402z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4652z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4684z00,
		BGl_typezd2argszd2rtl_funcal4404z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4653z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4685z00,
		BGl_typezd2argszd2rtl_lightf4406z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4654z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4686z00,
		BGl_typezd2argszd2rtl_apply4408z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4655z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4687z00,
		BGl_typezd2argszd2rtl_boxref4410z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4656z00zzsaw_castz00,
		BgL_bgl_typeza7d2argsza7d2rt4688z00,
		BGl_typezd2argszd2rtl_boxset4412z00zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2destzd2envz00zzsaw_castz00,
		BgL_bgl__typeza7d2destza7d2za74689za7, BGl__typezd2destzd2zzsaw_castz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4627z00zzsaw_castz00,
		BgL_bgl_string4627za700za7za7s4690za7, "type-dest", 9);
	      DEFINE_STRING(BGl_string4628z00zzsaw_castz00,
		BgL_bgl_string4628za700za7za7s4691za7, "type-args", 9);
	      DEFINE_STRING(BGl_string4630z00zzsaw_castz00,
		BgL_bgl_string4630za700za7za7s4692za7, "type-dest::type", 15);
	      DEFINE_STRING(BGl_string4657z00zzsaw_castz00,
		BgL_bgl_string4657za700za7za7s4693za7, "saw_cast", 8);
	      DEFINE_STRING(BGl_string4658z00zzsaw_castz00,
		BgL_bgl_string4658za700za7za7s4694za7,
		"unspecified int procedure cell obj object (bool byte ubyte short ushort char uchar ucs2 void int long ulong elong llong uelong ullong float double) hook ",
		153);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2castszd2envz00zzsaw_castz00,
		BgL_bgl__addza7d2castsza7d2za74695za7, BGl__addzd2castszd2zzsaw_castz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2destzd2default4354zd2envzd2zzsaw_castz00,
		BgL_bgl__typeza7d2destza7d2d4696z00,
		BGl__typezd2destzd2default4354z00zzsaw_castz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2argszd2default4385zd2envzd2zzsaw_castz00,
		BgL_bgl__typeza7d2argsza7d2d4697z00,
		BGl__typezd2argszd2default4385z00zzsaw_castz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long
		BgL_checksumz00_2499, char *BgL_fromz00_2500)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_castz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_castz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_castz00();
					BGl_cnstzd2initzd2zzsaw_castz00();
					BGl_importedzd2moduleszd2initz00zzsaw_castz00();
					BGl_genericzd2initzd2zzsaw_castz00();
					BGl_methodzd2initzd2zzsaw_castz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_cast");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_cast");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			{	/* SawMill/cast.scm 1 */
				obj_t BgL_cportz00_2468;

				BgL_cportz00_2468 =
					bgl_open_input_string(BGl_string4658z00zzsaw_castz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2469;

					BgL_iz00_2469 = ((long) 7);
				BgL_loopz00_2470:
					if ((BgL_iz00_2469 == ((long) -1)))
						{	/* SawMill/cast.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/cast.scm 1 */
							{	/* SawMill/cast.scm 1 */
								obj_t BgL_arg4660z00_2472;

								{	/* SawMill/cast.scm 1 */

									{	/* SawMill/cast.scm 1 */
										obj_t BgL_locationz00_2474;

										BgL_locationz00_2474 = BBOOL(((bool_t) 0));
										{	/* SawMill/cast.scm 1 */

											BgL_arg4660z00_2472 =
												BGl_readz00zz__readerz00(BgL_cportz00_2468,
												BgL_locationz00_2474);
										}
									}
								}
								{	/* SawMill/cast.scm 1 */
									int BgL_auxz00_2519;

									BgL_auxz00_2519 = (int) (BgL_iz00_2469);
									CNST_TABLE_SET(BgL_auxz00_2519, BgL_arg4660z00_2472);
							}}
							{	/* SawMill/cast.scm 1 */
								int BgL_auxz00_2475;

								BgL_auxz00_2475 = (int) ((BgL_iz00_2469 - ((long) 1)));
								{
									long BgL_iz00_2524;

									BgL_iz00_2524 = (long) (BgL_auxz00_2475);
									BgL_iz00_2469 = BgL_iz00_2524;
									goto BgL_loopz00_2470;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			return BUNSPEC;
		}
	}



/* add-casts */
	BGL_EXPORTED_DEF obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt
		BgL_backz00_1, obj_t BgL_lz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 11 */
			{
				obj_t BgL_l4345z00_1289;

				{	/* SawMill/cast.scm 12 */
					bool_t BgL_auxz00_2526;

					BgL_l4345z00_1289 = BgL_lz00_2;
				BgL_zc3anonymousza34413ze3z83_1290:
					if (PAIRP(BgL_l4345z00_1289))
						{	/* SawMill/cast.scm 12 */
							{	/* SawMill/cast.scm 13 */
								obj_t BgL_bz00_1292;

								BgL_bz00_1292 = CAR(BgL_l4345z00_1289);
								{	/* SawMill/cast.scm 13 */
									obj_t BgL_hookz00_1293;

									BgL_hookz00_1293 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
									{	/* SawMill/cast.scm 14 */
										obj_t BgL_g4328z00_1294;

										{
											BgL_blockz00_bglt BgL_auxz00_2532;

											BgL_auxz00_2532 = (BgL_blockz00_bglt) (BgL_bz00_1292);
											BgL_g4328z00_1294 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_2532))->
												BgL_firstz00);
										}
										{
											obj_t BgL_lz00_1296;

											obj_t BgL_lastz00_1297;

											BgL_lz00_1296 = BgL_g4328z00_1294;
											BgL_lastz00_1297 = BgL_hookz00_1293;
										BgL_zc3anonymousza34415ze3z83_1298:
											if (NULLP(BgL_lz00_1296))
												{
													obj_t BgL_auxz00_2539;

													BgL_blockz00_bglt BgL_auxz00_2537;

													BgL_auxz00_2539 = CDR(BgL_hookz00_1293);
													BgL_auxz00_2537 = (BgL_blockz00_bglt) (BgL_bz00_1292);
													((((BgL_blockz00_bglt) CREF(BgL_auxz00_2537))->
															BgL_firstz00) =
														((obj_t) BgL_auxz00_2539), BUNSPEC);
												}
											else
												{	/* SawMill/cast.scm 17 */
													obj_t BgL_insz00_1301;

													BgL_insz00_1301 = CAR(BgL_lz00_1296);
													{	/* SawMill/cast.scm 18 */
														obj_t BgL_cinsz00_1303;

														BgL_cinsz00_1303 =
															BGl_addzd2castszd2insz00zzsaw_castz00
															(BgL_backz00_1, BgL_insz00_1301);
														SET_CDR(BgL_lastz00_1297, BgL_cinsz00_1303);
														{
															obj_t BgL_lastz00_2547;

															obj_t BgL_lz00_2545;

															BgL_lz00_2545 = CDR(BgL_lz00_1296);
															BgL_lastz00_2547 =
																BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																(BgL_cinsz00_1303);
															BgL_lastz00_1297 = BgL_lastz00_2547;
															BgL_lz00_1296 = BgL_lz00_2545;
															goto BgL_zc3anonymousza34415ze3z83_1298;
														}
													}
												}
										}
									}
								}
							}
							{
								obj_t BgL_l4345z00_2549;

								BgL_l4345z00_2549 = CDR(BgL_l4345z00_1289);
								BgL_l4345z00_1289 = BgL_l4345z00_2549;
								goto BgL_zc3anonymousza34413ze3z83_1290;
							}
						}
					else
						{	/* SawMill/cast.scm 12 */
							BgL_auxz00_2526 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_2526);
				}
			}
		}
	}



/* _add-casts */
	obj_t BGl__addzd2castszd2zzsaw_castz00(obj_t BgL_envz00_2360,
		obj_t BgL_backz00_2361, obj_t BgL_lz00_2362)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 11 */
			return
				BGl_addzd2castszd2zzsaw_castz00(
				(BgL_backendz00_bglt) (BgL_backz00_2361), BgL_lz00_2362);
		}
	}



/* add-cast */
	BgL_rtl_insz00_bglt BGl_addzd2castzd2zzsaw_castz00(obj_t BgL_fromz00_3,
		obj_t BgL_toz00_4)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 23 */
			{	/* SawMill/cast.scm 24 */
				BgL_typez00_bglt BgL_typez00_1309;

				{
					BgL_rtl_regz00_bglt BgL_auxz00_2554;

					BgL_auxz00_2554 = (BgL_rtl_regz00_bglt) (BgL_toz00_4);
					BgL_typez00_1309 =
						(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2554))->BgL_typez00);
				}
				{	/* SawMill/defs.scm 69 */
					BgL_rtl_castz00_bglt BgL_arg4422z00_1311;

					obj_t BgL_arg4423z00_1312;

					BgL_arg4422z00_1311 =
						BGl_makezd2rtl_castzd2zzsaw_defsz00(BFALSE, BgL_typez00_1309);
					BgL_arg4423z00_1312 = MAKE_PAIR(BgL_fromz00_3, BNIL);
					return
						BGl_makezd2rtl_inszd2zzsaw_defsz00(BFALSE, BNIL, BgL_toz00_4,
						(BgL_rtl_funz00_bglt) (BgL_arg4422z00_1311), BgL_arg4423z00_1312);
				}
			}
		}
	}



/* add-casts-ins */
	obj_t BGl_addzd2castszd2insz00zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_5,
		obj_t BgL_insz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 29 */
			{	/* SawMill/cast.scm 31 */
				obj_t BgL_castsz00_1314;

				BgL_castsz00_1314 =
					BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backz00_5, BgL_insz00_6);
				{	/* SawMill/cast.scm 32 */
					BgL_rtl_funz00_bglt BgL_arg4424z00_1315;

					obj_t BgL_arg4425z00_1316;

					obj_t BgL_arg4426z00_1317;

					obj_t BgL_arg4427z00_1318;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_2562;

						BgL_auxz00_2562 = (BgL_rtl_insz00_bglt) (BgL_insz00_6);
						BgL_arg4424z00_1315 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2562))->BgL_funz00);
					}
					{
						BgL_rtl_insz00_bglt BgL_auxz00_2565;

						BgL_auxz00_2565 = (BgL_rtl_insz00_bglt) (BgL_insz00_6);
						BgL_arg4425z00_1316 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2565))->BgL_argsz00);
					}
					{	/* SawMill/cast.scm 32 */
						BgL_rtl_funz00_bglt BgL_arg4428z00_1319;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_2568;

							BgL_auxz00_2568 = (BgL_rtl_insz00_bglt) (BgL_insz00_6);
							BgL_arg4428z00_1319 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2568))->BgL_funz00);
						}
						{	/* SawMill/cast.scm 32 */
							obj_t BgL_method4386z00_2158;

							{	/* SawMill/cast.scm 32 */
								BgL_objectz00_bglt BgL_objz00_2159;

								BgL_objz00_2159 = (BgL_objectz00_bglt) (BgL_arg4428z00_1319);
								{	/* SawMill/cast.scm 32 */
									long BgL_objzd2classzd2numz00_2160;

									BgL_objzd2classzd2numz00_2160 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2159);
									{	/* SawMill/cast.scm 32 */
										obj_t BgL_arg2643z00_2161;

										BgL_arg2643z00_2161 =
											PROCEDURE_REF(BGl_typezd2argszd2envz00zzsaw_castz00,
											(int) (((long) 1)));
										{	/* SawMill/cast.scm 32 */
											obj_t BgL_arrayz00_2163;

											int BgL_offsetz00_2164;

											BgL_arrayz00_2163 = BgL_arg2643z00_2161;
											BgL_offsetz00_2164 =
												(int) (BgL_objzd2classzd2numz00_2160);
											{	/* SawMill/cast.scm 32 */
												long BgL_offsetz00_2165;

												BgL_offsetz00_2165 =
													((long) (BgL_offsetz00_2164) - OBJECT_TYPE);
												{	/* SawMill/cast.scm 32 */
													long BgL_modz00_2166;

													{	/* SawMill/cast.scm 32 */
														int BgL_arg2645z00_2167;

														BgL_arg2645z00_2167 = (int) (((long) 16));
														{	/* SawMill/cast.scm 32 */
															long BgL_auxz00_2579;

															BgL_auxz00_2579 = (long) (BgL_arg2645z00_2167);
															BgL_modz00_2166 =
																(BgL_offsetz00_2165 / BgL_auxz00_2579);
													}}
													{	/* SawMill/cast.scm 32 */
														long BgL_restz00_2168;

														{	/* SawMill/cast.scm 32 */
															int BgL_arg2644z00_2169;

															BgL_arg2644z00_2169 = (int) (((long) 16));
															{	/* SawMill/cast.scm 32 */
																long BgL_auxz00_2583;

																BgL_auxz00_2583 = (long) (BgL_arg2644z00_2169);
																BgL_restz00_2168 =
																	(BgL_offsetz00_2165 % BgL_auxz00_2583);
														}}
														{	/* SawMill/cast.scm 32 */

															BgL_method4386z00_2158 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2163,
																	(int) (BgL_modz00_2166)),
																(int) (BgL_restz00_2168));
							}}}}}}}}
							BgL_arg4426z00_1317 =
								PROCEDURE_ENTRY(BgL_method4386z00_2158) (BgL_method4386z00_2158,
								(obj_t) (BgL_arg4428z00_1319), BEOA);
					}}
					BgL_arg4427z00_1318 = MAKE_PAIR(BgL_insz00_6, BgL_castsz00_1314);
					return
						BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backz00_5,
						BgL_arg4424z00_1315, BgL_arg4425z00_1316, BgL_arg4426z00_1317,
						BgL_arg4427z00_1318);
				}
			}
		}
	}



/* add-cast-dest */
	obj_t BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_7,
		obj_t BgL_insz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 34 */
			{	/* SawMill/cast.scm 36 */
				bool_t BgL_testz00_2595;

				{	/* SawMill/cast.scm 36 */
					BgL_rtl_insz00_bglt BgL_obj4270z00_2183;

					BgL_obj4270z00_2183 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
					BgL_testz00_2595 =
						CBOOL(
						(((BgL_rtl_insz00_bglt) CREF(BgL_obj4270z00_2183))->BgL_destz00));
				}
				if (BgL_testz00_2595)
					{	/* SawMill/cast.scm 37 */
						BgL_typez00_bglt BgL_realz00_1322;

						BgL_typez00_bglt BgL_declaredz00_1323;

						{	/* SawMill/cast.scm 37 */
							BgL_rtl_funz00_bglt BgL_arg4435z00_1333;

							obj_t BgL_arg4437z00_1334;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_2599;

								BgL_auxz00_2599 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
								BgL_arg4435z00_1333 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2599))->BgL_funz00);
							}
							{
								BgL_rtl_insz00_bglt BgL_auxz00_2602;

								BgL_auxz00_2602 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
								BgL_arg4437z00_1334 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2602))->BgL_argsz00);
							}
							{	/* SawMill/cast.scm 37 */
								BgL_typez00_bglt BgL_res4622z00_2213;

								{	/* SawMill/cast.scm 37 */
									obj_t BgL_method4355z00_2188;

									{	/* SawMill/cast.scm 37 */
										BgL_objectz00_bglt BgL_objz00_2189;

										BgL_objz00_2189 =
											(BgL_objectz00_bglt) (BgL_arg4435z00_1333);
										{	/* SawMill/cast.scm 37 */
											long BgL_objzd2classzd2numz00_2190;

											BgL_objzd2classzd2numz00_2190 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2189);
											{	/* SawMill/cast.scm 37 */
												obj_t BgL_arg2643z00_2191;

												BgL_arg2643z00_2191 =
													PROCEDURE_REF(BGl_typezd2destzd2envz00zzsaw_castz00,
													(int) (((long) 1)));
												{	/* SawMill/cast.scm 37 */
													obj_t BgL_arrayz00_2193;

													int BgL_offsetz00_2194;

													BgL_arrayz00_2193 = BgL_arg2643z00_2191;
													BgL_offsetz00_2194 =
														(int) (BgL_objzd2classzd2numz00_2190);
													{	/* SawMill/cast.scm 37 */
														long BgL_offsetz00_2195;

														BgL_offsetz00_2195 =
															((long) (BgL_offsetz00_2194) - OBJECT_TYPE);
														{	/* SawMill/cast.scm 37 */
															long BgL_modz00_2196;

															{	/* SawMill/cast.scm 37 */
																int BgL_arg2645z00_2197;

																BgL_arg2645z00_2197 = (int) (((long) 16));
																{	/* SawMill/cast.scm 37 */
																	long BgL_auxz00_2613;

																	BgL_auxz00_2613 =
																		(long) (BgL_arg2645z00_2197);
																	BgL_modz00_2196 =
																		(BgL_offsetz00_2195 / BgL_auxz00_2613);
															}}
															{	/* SawMill/cast.scm 37 */
																long BgL_restz00_2198;

																{	/* SawMill/cast.scm 37 */
																	int BgL_arg2644z00_2199;

																	BgL_arg2644z00_2199 = (int) (((long) 16));
																	{	/* SawMill/cast.scm 37 */
																		long BgL_auxz00_2617;

																		BgL_auxz00_2617 =
																			(long) (BgL_arg2644z00_2199);
																		BgL_restz00_2198 =
																			(BgL_offsetz00_2195 % BgL_auxz00_2617);
																}}
																{	/* SawMill/cast.scm 37 */

																	BgL_method4355z00_2188 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2193,
																			(int) (BgL_modz00_2196)),
																		(int) (BgL_restz00_2198));
									}}}}}}}}
									BgL_res4622z00_2213 =
										(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4355z00_2188)
										(BgL_method4355z00_2188, (obj_t) (BgL_arg4435z00_1333),
											BgL_arg4437z00_1334, BEOA));
								}
								BgL_realz00_1322 = BgL_res4622z00_2213;
						}}
						{	/* SawMill/cast.scm 37 */
							BgL_rtl_regz00_bglt BgL_obj3597z00_2215;

							{	/* SawMill/cast.scm 37 */
								BgL_rtl_insz00_bglt BgL_obj4270z00_2214;

								BgL_obj4270z00_2214 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
								BgL_obj3597z00_2215 =
									(BgL_rtl_regz00_bglt) (
									(((BgL_rtl_insz00_bglt) CREF(BgL_obj4270z00_2214))->
										BgL_destz00));
							}
							BgL_declaredz00_1323 =
								(((BgL_rtl_regz00_bglt) CREF(BgL_obj3597z00_2215))->
								BgL_typez00);
						}
						if (CBOOL(BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backz00_7,
									BgL_realz00_1322, (obj_t) (BgL_declaredz00_1323))))
							{	/* SawMill/cast.scm 38 */
								return BNIL;
							}
						else
							{	/* SawMill/cast.scm 40 */
								BgL_rtl_regz00_bglt BgL_rrz00_1325;

								{	/* SawMill/cast.scm 43 */
									obj_t BgL_arg4433z00_1329;

									obj_t BgL_arg4434z00_1330;

									{	/* SawMill/cast.scm 43 */

										{	/* SawMill/cast.scm 43 */

											BgL_arg4433z00_1329 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
										}
									}
									{	/* SawMill/defs.scm 16 */

										{	/* SawMill/defs.scm 16 */

											BgL_arg4434z00_1330 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
										}
									}
									BgL_rrz00_1325 =
										BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_realz00_1322, BFALSE,
										BFALSE, BgL_arg4433z00_1329, BgL_arg4434z00_1330, BFALSE);
								}
								{	/* SawMill/cast.scm 44 */
									obj_t BgL_xz00_1326;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_2639;

										BgL_auxz00_2639 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
										BgL_xz00_1326 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2639))->
											BgL_destz00);
									}
									{
										obj_t BgL_auxz00_2644;

										BgL_rtl_insz00_bglt BgL_auxz00_2642;

										BgL_auxz00_2644 = (obj_t) (BgL_rrz00_1325);
										BgL_auxz00_2642 = (BgL_rtl_insz00_bglt) (BgL_insz00_8);
										((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_2642))->
												BgL_destz00) = ((obj_t) BgL_auxz00_2644), BUNSPEC);
									}
									{	/* SawMill/cast.scm 46 */
										BgL_rtl_insz00_bglt BgL_arg4431z00_1327;

										BgL_arg4431z00_1327 =
											BGl_addzd2castzd2zzsaw_castz00(
											(obj_t) (BgL_rrz00_1325), BgL_xz00_1326);
										return MAKE_PAIR((obj_t) (BgL_arg4431z00_1327), BNIL);
									}
								}
							}
					}
				else
					{	/* SawMill/cast.scm 36 */
						return BNIL;
					}
			}
		}
	}



/* add-cast-args */
	obj_t BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_9,
		BgL_rtl_funz00_bglt BgL_funz00_10, obj_t BgL_argsz00_11,
		obj_t BgL_typesz00_12, obj_t BgL_castsz00_13)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 49 */
			if (NULLP(BgL_typesz00_12))
				{	/* SawMill/cast.scm 50 */
					return BgL_castsz00_13;
				}
			else
				{	/* SawMill/cast.scm 52 */
					obj_t BgL_castsz00_1337;

					BgL_castsz00_1337 =
						BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backz00_9, BgL_funz00_10,
						CDR(BgL_argsz00_11), CDR(BgL_typesz00_12), BgL_castsz00_13);
					{	/* SawMill/cast.scm 53 */
						obj_t BgL_rz00_1338;

						obj_t BgL_tz00_1339;

						BgL_rz00_1338 = CAR(BgL_argsz00_11);
						BgL_tz00_1339 = CAR(BgL_typesz00_12);
						{	/* SawMill/cast.scm 54 */
							bool_t BgL_testz00_2658;

							{	/* SawMill/cast.scm 54 */
								BgL_typez00_bglt BgL_arg4444z00_1347;

								{
									BgL_rtl_regz00_bglt BgL_auxz00_2659;

									BgL_auxz00_2659 = (BgL_rtl_regz00_bglt) (BgL_rz00_1338);
									BgL_arg4444z00_1347 =
										(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_2659))->
										BgL_typez00);
								}
								BgL_testz00_2658 =
									CBOOL(BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backz00_9,
										BgL_arg4444z00_1347, BgL_tz00_1339));
							}
							if (BgL_testz00_2658)
								{	/* SawMill/cast.scm 54 */
									return BgL_castsz00_1337;
								}
							else
								{	/* SawMill/cast.scm 56 */
									BgL_rtl_regz00_bglt BgL_rrz00_1341;

									{	/* SawMill/cast.scm 59 */
										obj_t BgL_arg4442z00_1343;

										obj_t BgL_arg4443z00_1344;

										{	/* SawMill/cast.scm 59 */

											{	/* SawMill/cast.scm 59 */

												BgL_arg4442z00_1343 =
													BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}
										}
										{	/* SawMill/defs.scm 16 */

											{	/* SawMill/defs.scm 16 */

												BgL_arg4443z00_1344 =
													BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}
										}
										BgL_rrz00_1341 =
											BGl_makezd2rtl_regzd2zzsaw_defsz00(
											(BgL_typez00_bglt) (BgL_tz00_1339), BFALSE, BFALSE,
											BgL_arg4442z00_1343, BgL_arg4443z00_1344, BFALSE);
									}
									{	/* SawMill/cast.scm 60 */
										obj_t BgL_auxz00_2668;

										BgL_auxz00_2668 = (obj_t) (BgL_rrz00_1341);
										SET_CAR(BgL_argsz00_11, BgL_auxz00_2668);
									}
									{	/* SawMill/cast.scm 61 */
										BgL_rtl_insz00_bglt BgL_arg4441z00_1342;

										BgL_arg4441z00_1342 =
											BGl_addzd2castzd2zzsaw_castz00(BgL_rz00_1338,
											(obj_t) (BgL_rrz00_1341));
										return
											MAKE_PAIR(
											(obj_t) (BgL_arg4441z00_1342), BgL_castsz00_1337);
									}
								}
						}
					}
				}
		}
	}



/* assign-type? */
	obj_t BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_14,
		BgL_typez00_bglt BgL_t1z00_15, obj_t BgL_t2z00_16)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 63 */
			{	/* SawMill/cast.scm 64 */
				bool_t BgL__ortest_4337z00_1350;

				BgL__ortest_4337z00_1350 = ((obj_t) (BgL_t1z00_15) == BgL_t2z00_16);
				if (BgL__ortest_4337z00_1350)
					{	/* SawMill/cast.scm 64 */
						return BBOOL(BgL__ortest_4337z00_1350);
					}
				else
					{	/* SawMill/cast.scm 65 */
						obj_t BgL__ortest_4338z00_1351;

						BgL__ortest_4338z00_1351 =
							BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_typez00_bglt) CREF(BgL_t1z00_15))->BgL_idz00),
							CNST_TABLE_REF(((long) 1)));
						if (CBOOL(BgL__ortest_4338z00_1351))
							{	/* SawMill/cast.scm 65 */
								return BgL__ortest_4338z00_1351;
							}
						else
							{	/* SawMill/cast.scm 66 */
								obj_t BgL__ortest_4339z00_1352;

								{	/* SawMill/cast.scm 66 */
									obj_t BgL_auxz00_2684;

									{
										BgL_typez00_bglt BgL_auxz00_2685;

										BgL_auxz00_2685 = (BgL_typez00_bglt) (BgL_t2z00_16);
										BgL_auxz00_2684 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2685))->BgL_idz00);
									}
									BgL__ortest_4339z00_1352 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2684,
										CNST_TABLE_REF(((long) 1)));
								}
								if (CBOOL(BgL__ortest_4339z00_1352))
									{	/* SawMill/cast.scm 66 */
										return BgL__ortest_4339z00_1352;
									}
								else
									{	/* SawMill/cast.scm 67 */
										bool_t BgL__ortest_4340z00_1353;

										{	/* SawMill/cast.scm 67 */
											bool_t BgL_testz00_2692;

											{	/* SawMill/cast.scm 67 */
												obj_t BgL_obj3290z00_2235;

												BgL_obj3290z00_2235 = (obj_t) (BgL_t1z00_15);
												BgL_testz00_2692 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3290z00_2235,
													BGl_tclassz00zzobject_classz00);
											}
											if (BgL_testz00_2692)
												{	/* SawMill/cast.scm 67 */
													obj_t BgL_auxz00_2695;

													{
														BgL_typez00_bglt BgL_auxz00_2696;

														BgL_auxz00_2696 = (BgL_typez00_bglt) (BgL_t2z00_16);
														BgL_auxz00_2695 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_2696))->
															BgL_idz00);
													}
													BgL__ortest_4340z00_1353 =
														(BgL_auxz00_2695 == CNST_TABLE_REF(((long) 2)));
												}
											else
												{	/* SawMill/cast.scm 67 */
													BgL__ortest_4340z00_1353 = ((bool_t) 0);
												}
										}
										if (BgL__ortest_4340z00_1353)
											{	/* SawMill/cast.scm 67 */
												return BBOOL(BgL__ortest_4340z00_1353);
											}
										else
											{	/* SawMill/cast.scm 68 */
												bool_t BgL__ortest_4341z00_1354;

												BgL__ortest_4341z00_1354 =
													BGl_subzd2typezf3z21zztype_envz00(BgL_t1z00_15,
													(BgL_typez00_bglt) (BgL_t2z00_16));
												if (BgL__ortest_4341z00_1354)
													{	/* SawMill/cast.scm 68 */
														return BBOOL(BgL__ortest_4341z00_1354);
													}
												else
													{	/* SawMill/cast.scm 68 */
														return
															BGl_backendzd2subtypezf3z21zzbackend_backendz00
															(BgL_backz00_14, (obj_t) (BgL_t1z00_15),
															BgL_t2z00_16);
													}
											}
									}
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_typezd2destzd2default4354zd2envzd2zzsaw_castz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4627z00zzsaw_castz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_typezd2argszd2default4385zd2envzd2zzsaw_castz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4628z00zzsaw_castz00);
		}
	}



/* type-dest */
	BgL_typez00_bglt BGl_typezd2destzd2zzsaw_castz00(BgL_rtl_funz00_bglt
		BgL_funz00_18, obj_t BgL_argsz00_19)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 79 */
			{	/* SawMill/cast.scm 79 */
				obj_t BgL_method4355z00_2240;

				{	/* SawMill/cast.scm 79 */
					BgL_objectz00_bglt BgL_objz00_2241;

					BgL_objz00_2241 = (BgL_objectz00_bglt) (BgL_funz00_18);
					{	/* SawMill/cast.scm 79 */
						long BgL_objzd2classzd2numz00_2242;

						BgL_objzd2classzd2numz00_2242 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2241);
						{	/* SawMill/cast.scm 79 */
							obj_t BgL_arg2643z00_2243;

							BgL_arg2643z00_2243 =
								PROCEDURE_REF(BGl_typezd2destzd2envz00zzsaw_castz00,
								(int) (((long) 1)));
							{	/* SawMill/cast.scm 79 */
								obj_t BgL_arrayz00_2245;

								int BgL_offsetz00_2246;

								BgL_arrayz00_2245 = BgL_arg2643z00_2243;
								BgL_offsetz00_2246 = (int) (BgL_objzd2classzd2numz00_2242);
								{	/* SawMill/cast.scm 79 */
									long BgL_offsetz00_2247;

									BgL_offsetz00_2247 =
										((long) (BgL_offsetz00_2246) - OBJECT_TYPE);
									{	/* SawMill/cast.scm 79 */
										long BgL_modz00_2248;

										{	/* SawMill/cast.scm 79 */
											int BgL_arg2645z00_2249;

											BgL_arg2645z00_2249 = (int) (((long) 16));
											{	/* SawMill/cast.scm 79 */
												long BgL_auxz00_2719;

												BgL_auxz00_2719 = (long) (BgL_arg2645z00_2249);
												BgL_modz00_2248 =
													(BgL_offsetz00_2247 / BgL_auxz00_2719);
										}}
										{	/* SawMill/cast.scm 79 */
											long BgL_restz00_2250;

											{	/* SawMill/cast.scm 79 */
												int BgL_arg2644z00_2251;

												BgL_arg2644z00_2251 = (int) (((long) 16));
												{	/* SawMill/cast.scm 79 */
													long BgL_auxz00_2723;

													BgL_auxz00_2723 = (long) (BgL_arg2644z00_2251);
													BgL_restz00_2250 =
														(BgL_offsetz00_2247 % BgL_auxz00_2723);
											}}
											{	/* SawMill/cast.scm 79 */

												BgL_method4355z00_2240 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2245,
														(int) (BgL_modz00_2248)), (int) (BgL_restz00_2250));
				}}}}}}}}
				return
					(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method4355z00_2240)
					(BgL_method4355z00_2240, (obj_t) (BgL_funz00_18), BgL_argsz00_19,
						BEOA));
			}
		}
	}



/* _type-dest */
	obj_t BGl__typezd2destzd2zzsaw_castz00(obj_t BgL_envz00_2365,
		obj_t BgL_funz00_2366, obj_t BgL_argsz00_2367)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 79 */
			return
				(obj_t) (BGl_typezd2destzd2zzsaw_castz00(
					(BgL_rtl_funz00_bglt) (BgL_funz00_2366), BgL_argsz00_2367));
		}
	}



/* _type-dest-default4354 */
	obj_t BGl__typezd2destzd2default4354z00zzsaw_castz00(obj_t BgL_envz00_2368,
		obj_t BgL_funz00_2369, obj_t BgL_argsz00_2370)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			return
				(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 3))));
		}
	}



/* type-args */
	obj_t BGl_typezd2argszd2zzsaw_castz00(BgL_rtl_funz00_bglt BgL_funz00_50)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 128 */
			{	/* SawMill/cast.scm 128 */
				obj_t BgL_method4386z00_2265;

				{	/* SawMill/cast.scm 128 */
					BgL_objectz00_bglt BgL_objz00_2266;

					BgL_objz00_2266 = (BgL_objectz00_bglt) (BgL_funz00_50);
					{	/* SawMill/cast.scm 128 */
						long BgL_objzd2classzd2numz00_2267;

						BgL_objzd2classzd2numz00_2267 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2266);
						{	/* SawMill/cast.scm 128 */
							obj_t BgL_arg2643z00_2268;

							BgL_arg2643z00_2268 =
								PROCEDURE_REF(BGl_typezd2argszd2envz00zzsaw_castz00,
								(int) (((long) 1)));
							{	/* SawMill/cast.scm 128 */
								obj_t BgL_arrayz00_2270;

								int BgL_offsetz00_2271;

								BgL_arrayz00_2270 = BgL_arg2643z00_2268;
								BgL_offsetz00_2271 = (int) (BgL_objzd2classzd2numz00_2267);
								{	/* SawMill/cast.scm 128 */
									long BgL_offsetz00_2272;

									BgL_offsetz00_2272 =
										((long) (BgL_offsetz00_2271) - OBJECT_TYPE);
									{	/* SawMill/cast.scm 128 */
										long BgL_modz00_2273;

										{	/* SawMill/cast.scm 128 */
											int BgL_arg2645z00_2274;

											BgL_arg2645z00_2274 = (int) (((long) 16));
											{	/* SawMill/cast.scm 128 */
												long BgL_auxz00_2748;

												BgL_auxz00_2748 = (long) (BgL_arg2645z00_2274);
												BgL_modz00_2273 =
													(BgL_offsetz00_2272 / BgL_auxz00_2748);
										}}
										{	/* SawMill/cast.scm 128 */
											long BgL_restz00_2275;

											{	/* SawMill/cast.scm 128 */
												int BgL_arg2644z00_2276;

												BgL_arg2644z00_2276 = (int) (((long) 16));
												{	/* SawMill/cast.scm 128 */
													long BgL_auxz00_2752;

													BgL_auxz00_2752 = (long) (BgL_arg2644z00_2276);
													BgL_restz00_2275 =
														(BgL_offsetz00_2272 % BgL_auxz00_2752);
											}}
											{	/* SawMill/cast.scm 128 */

												BgL_method4386z00_2265 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2270,
														(int) (BgL_modz00_2273)), (int) (BgL_restz00_2275));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4386z00_2265) (BgL_method4386z00_2265,
					(obj_t) (BgL_funz00_50), BEOA);
			}
		}
	}



/* _type-args */
	obj_t BGl__typezd2argszd2zzsaw_castz00(obj_t BgL_envz00_2363,
		obj_t BgL_funz00_2364)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 128 */
			return
				BGl_typezd2argszd2zzsaw_castz00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_2364));
		}
	}



/* _type-args-default4385 */
	obj_t BGl__typezd2argszd2default4385z00zzsaw_castz00(obj_t BgL_envz00_2371,
		obj_t BgL_funz00_2372)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			return BNIL;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_nopz00zzsaw_defsz00,
				BGl_proc4629z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc4631z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc4632z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadfunz00zzsaw_defsz00,
				BGl_proc4633z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc4634z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc4635z00zzsaw_castz00,
				BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_newz00zzsaw_defsz00,
				BGl_proc4636z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vallocz00zzsaw_defsz00,
				BGl_proc4637z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc4638z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vlengthz00zzsaw_defsz00,
				BGl_proc4639z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_isaz00zzsaw_defsz00,
				BGl_proc4640z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc4641z00zzsaw_castz00,
				BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc4642z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc4643z00zzsaw_castz00, BGl_string4630z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc4644z00zzsaw_castz00,
				BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc4645z00zzsaw_castz00,
				BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc4646z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc4647z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vlengthz00zzsaw_defsz00,
				BGl_proc4648z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_storegz00zzsaw_defsz00,
				BGl_proc4649z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc4650z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_returnz00zzsaw_defsz00,
				BGl_proc4651z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_funcallz00zzsaw_defsz00,
				BGl_proc4652z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc4653z00zzsaw_castz00,
				BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc4654z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_boxrefz00zzsaw_defsz00,
				BGl_proc4655z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_boxsetz00zzsaw_defsz00,
				BGl_proc4656z00zzsaw_castz00, BGl_string4628z00zzsaw_castz00);
		}
	}



/* type-args-rtl_boxset4412 */
	obj_t BGl_typezd2argszd2rtl_boxset4412z00zzsaw_castz00(obj_t BgL_envz00_2400,
		obj_t BgL_funz00_2401)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 173 */
			{
				BgL_rtl_boxsetz00_bglt BgL_funz00_2133;

				BgL_funz00_2133 = (BgL_rtl_boxsetz00_bglt) (BgL_funz00_2401);
				{	/* SawMill/cast.scm 174 */
					BgL_typez00_bglt BgL_arg4615z00_2358;

					BgL_arg4615z00_2358 =
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
					return MAKE_PAIR((obj_t) (BgL_arg4615z00_2358), BNIL);
				}
			}
		}
	}



/* type-args-rtl_boxref4410 */
	obj_t BGl_typezd2argszd2rtl_boxref4410z00zzsaw_castz00(obj_t BgL_envz00_2402,
		obj_t BgL_funz00_2403)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 170 */
			{
				BgL_rtl_boxrefz00_bglt BgL_funz00_2126;

				BgL_funz00_2126 = (BgL_rtl_boxrefz00_bglt) (BgL_funz00_2403);
				{	/* SawMill/cast.scm 171 */
					BgL_typez00_bglt BgL_arg4612z00_2356;

					BgL_arg4612z00_2356 =
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
					return MAKE_PAIR((obj_t) (BgL_arg4612z00_2356), BNIL);
				}
			}
		}
	}



/* type-args-rtl_apply4408 */
	obj_t BGl_typezd2argszd2rtl_apply4408z00zzsaw_castz00(obj_t BgL_envz00_2404,
		obj_t BgL_funz00_2405)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 167 */
			{
				BgL_rtl_applyz00_bglt BgL_funz00_2119;

				BgL_funz00_2119 = (BgL_rtl_applyz00_bglt) (BgL_funz00_2405);
				{	/* SawMill/cast.scm 168 */
					BgL_typez00_bglt BgL_arg4609z00_2354;

					BgL_arg4609z00_2354 =
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5)));
					return MAKE_PAIR((obj_t) (BgL_arg4609z00_2354), BNIL);
				}
			}
		}
	}



/* type-args-rtl_lightf4406 */
	obj_t BGl_typezd2argszd2rtl_lightf4406z00zzsaw_castz00(obj_t BgL_envz00_2406,
		obj_t BgL_funz00_2407)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 164 */
			{
				BgL_rtl_lightfuncallz00_bglt BgL_funz00_2112;

				BgL_funz00_2112 = (BgL_rtl_lightfuncallz00_bglt) (BgL_funz00_2407);
				{	/* SawMill/cast.scm 165 */
					BgL_typez00_bglt BgL_arg4606z00_2352;

					BgL_arg4606z00_2352 =
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5)));
					return MAKE_PAIR((obj_t) (BgL_arg4606z00_2352), BNIL);
				}
			}
		}
	}



/* type-args-rtl_funcal4404 */
	obj_t BGl_typezd2argszd2rtl_funcal4404z00zzsaw_castz00(obj_t BgL_envz00_2408,
		obj_t BgL_funz00_2409)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 161 */
			{
				BgL_rtl_funcallz00_bglt BgL_funz00_2105;

				BgL_funz00_2105 = (BgL_rtl_funcallz00_bglt) (BgL_funz00_2409);
				{	/* SawMill/cast.scm 162 */
					BgL_typez00_bglt BgL_arg4603z00_2350;

					BgL_arg4603z00_2350 =
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5)));
					return MAKE_PAIR((obj_t) (BgL_arg4603z00_2350), BNIL);
				}
			}
		}
	}



/* type-args-rtl_return4402 */
	obj_t BGl_typezd2argszd2rtl_return4402z00zzsaw_castz00(obj_t BgL_envz00_2410,
		obj_t BgL_funz00_2411)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 158 */
			{
				BgL_rtl_returnz00_bglt BgL_funz00_2098;

				BgL_funz00_2098 = (BgL_rtl_returnz00_bglt) (BgL_funz00_2411);
				{	/* SawMill/cast.scm 159 */
					BgL_typez00_bglt BgL_arg4600z00_2347;

					BgL_arg4600z00_2347 =
						(((BgL_rtl_returnz00_bglt) CREF(BgL_funz00_2098))->BgL_typez00);
					return MAKE_PAIR((obj_t) (BgL_arg4600z00_2347), BNIL);
				}
			}
		}
	}



/* type-args-rtl_call4400 */
	obj_t BGl_typezd2argszd2rtl_call4400z00zzsaw_castz00(obj_t BgL_envz00_2412,
		obj_t BgL_funz00_2413)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 149 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2068;

				BgL_funz00_2068 = (BgL_rtl_callz00_bglt) (BgL_funz00_2413);
				{	/* SawMill/cast.scm 150 */
					BgL_valuez00_bglt BgL_fz00_2071;

					{	/* SawMill/cast.scm 150 */
						BgL_variablez00_bglt BgL_obj1611z00_2326;

						BgL_obj1611z00_2326 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2068))->BgL_varz00));
						BgL_fz00_2071 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2326))->
							BgL_valuez00);
					}
					{	/* SawMill/cast.scm 151 */
						bool_t BgL_testz00_2823;

						{	/* SawMill/cast.scm 151 */
							obj_t BgL_obj2019z00_2327;

							BgL_obj2019z00_2327 = (obj_t) (BgL_fz00_2071);
							BgL_testz00_2823 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2327,
								BGl_cfunz00zzast_varz00);
						}
						if (BgL_testz00_2823)
							{
								BgL_cfunz00_bglt BgL_auxz00_2826;

								BgL_auxz00_2826 = (BgL_cfunz00_bglt) (BgL_fz00_2071);
								return
									(((BgL_cfunz00_bglt) CREF(BgL_auxz00_2826))->
									BgL_argszd2typezd2);
							}
						else
							{	/* SawMill/cast.scm 153 */
								obj_t BgL_rz00_2073;

								{
									BgL_sfunz00_bglt BgL_auxz00_2829;

									BgL_auxz00_2829 = (BgL_sfunz00_bglt) (BgL_fz00_2071);
									BgL_rz00_2073 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2829))->BgL_argsz00);
								}
								{	/* SawMill/cast.scm 154 */
									bool_t BgL_testz00_2832;

									if (NULLP(BgL_rz00_2073))
										{	/* SawMill/cast.scm 154 */
											BgL_testz00_2832 = ((bool_t) 1);
										}
									else
										{	/* SawMill/cast.scm 154 */
											obj_t BgL_arg4597z00_2094;

											BgL_arg4597z00_2094 = CAR(BgL_rz00_2073);
											BgL_testz00_2832 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg4597z00_2094,
												BGl_typez00zztype_typez00);
										}
									if (BgL_testz00_2832)
										{	/* SawMill/cast.scm 154 */
											return BgL_rz00_2073;
										}
									else
										{	/* SawMill/cast.scm 154 */
											if (NULLP(BgL_rz00_2073))
												{	/* SawMill/cast.scm 156 */
													return BNIL;
												}
											else
												{	/* SawMill/cast.scm 156 */
													obj_t BgL_head4349z00_2077;

													{	/* SawMill/cast.scm 156 */
														BgL_typez00_bglt BgL_arg4593z00_2090;

														{	/* SawMill/cast.scm 156 */
															BgL_variablez00_bglt BgL_obj1608z00_2335;

															{	/* SawMill/cast.scm 156 */
																obj_t BgL_pairz00_2334;

																BgL_pairz00_2334 = BgL_rz00_2073;
																BgL_obj1608z00_2335 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_2334));
															}
															BgL_arg4593z00_2090 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1608z00_2335))->BgL_typez00);
														}
														BgL_head4349z00_2077 =
															MAKE_PAIR((obj_t) (BgL_arg4593z00_2090), BNIL);
													}
													{	/* SawMill/cast.scm 156 */
														obj_t BgL_g4352z00_2078;

														BgL_g4352z00_2078 = CDR(BgL_rz00_2073);
														{
															obj_t BgL_l4347z00_2080;

															obj_t BgL_tail4350z00_2081;

															BgL_l4347z00_2080 = BgL_g4352z00_2078;
															BgL_tail4350z00_2081 = BgL_head4349z00_2077;
														BgL_zc3anonymousza34587ze3z83_2082:
															if (NULLP(BgL_l4347z00_2080))
																{	/* SawMill/cast.scm 156 */
																	return BgL_head4349z00_2077;
																}
															else
																{	/* SawMill/cast.scm 156 */
																	obj_t BgL_newtail4351z00_2084;

																	{	/* SawMill/cast.scm 156 */
																		BgL_typez00_bglt BgL_arg4590z00_2086;

																		{	/* SawMill/cast.scm 156 */
																			BgL_variablez00_bglt BgL_obj1608z00_2341;

																			{	/* SawMill/cast.scm 156 */
																				obj_t BgL_pairz00_2340;

																				BgL_pairz00_2340 = BgL_l4347z00_2080;
																				BgL_obj1608z00_2341 =
																					(BgL_variablez00_bglt) (CAR
																					(BgL_pairz00_2340));
																			}
																			BgL_arg4590z00_2086 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_obj1608z00_2341))->
																				BgL_typez00);
																		}
																		BgL_newtail4351z00_2084 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg4590z00_2086), BNIL);
																	}
																	SET_CDR(BgL_tail4350z00_2081,
																		BgL_newtail4351z00_2084);
																	{
																		obj_t BgL_tail4350z00_2855;

																		obj_t BgL_l4347z00_2853;

																		BgL_l4347z00_2853 = CDR(BgL_l4347z00_2080);
																		BgL_tail4350z00_2855 =
																			BgL_newtail4351z00_2084;
																		BgL_tail4350z00_2081 = BgL_tail4350z00_2855;
																		BgL_l4347z00_2080 = BgL_l4347z00_2853;
																		goto BgL_zc3anonymousza34587ze3z83_2082;
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



/* type-args-rtl_storeg4398 */
	obj_t BGl_typezd2argszd2rtl_storeg4398z00zzsaw_castz00(obj_t BgL_envz00_2414,
		obj_t BgL_funz00_2415)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 146 */
			{
				BgL_rtl_storegz00_bglt BgL_funz00_2060;

				BgL_funz00_2060 = (BgL_rtl_storegz00_bglt) (BgL_funz00_2415);
				{	/* SawMill/cast.scm 147 */
					BgL_typez00_bglt BgL_arg4580z00_2063;

					{	/* SawMill/cast.scm 147 */
						BgL_variablez00_bglt BgL_obj1608z00_2324;

						BgL_obj1608z00_2324 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_storegz00_bglt) CREF(BgL_funz00_2060))->BgL_varz00));
						BgL_arg4580z00_2063 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2324))->BgL_typez00);
					}
					return MAKE_PAIR((obj_t) (BgL_arg4580z00_2063), BNIL);
				}
			}
		}
	}



/* type-args-rtl_vlengt4396 */
	obj_t BGl_typezd2argszd2rtl_vlengt4396z00zzsaw_castz00(obj_t BgL_envz00_2416,
		obj_t BgL_funz00_2417)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 143 */
			{
				BgL_rtl_vlengthz00_bglt BgL_funz00_2053;

				BgL_funz00_2053 = (BgL_rtl_vlengthz00_bglt) (BgL_funz00_2417);
				{	/* SawMill/cast.scm 144 */
					BgL_typez00_bglt BgL_arg4577z00_2320;

					BgL_arg4577z00_2320 =
						(((BgL_rtl_vlengthz00_bglt) CREF(BgL_funz00_2053))->BgL_typez00);
					return MAKE_PAIR((obj_t) (BgL_arg4577z00_2320), BNIL);
				}
			}
		}
	}



/* type-args-rtl_vset4394 */
	obj_t BGl_typezd2argszd2rtl_vset4394z00zzsaw_castz00(obj_t BgL_envz00_2418,
		obj_t BgL_funz00_2419)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 140 */
			{
				BgL_rtl_vsetz00_bglt BgL_funz00_2046;

				BgL_funz00_2046 = (BgL_rtl_vsetz00_bglt) (BgL_funz00_2419);
				{	/* SawMill/cast.scm 141 */
					BgL_typez00_bglt BgL_arg4573z00_2317;

					BgL_arg4573z00_2317 =
						(((BgL_rtl_vsetz00_bglt) CREF(BgL_funz00_2046))->BgL_vtypez00);
					return MAKE_PAIR((obj_t) (BgL_arg4573z00_2317), BNIL);
				}
			}
		}
	}



/* type-args-rtl_vref4392 */
	obj_t BGl_typezd2argszd2rtl_vref4392z00zzsaw_castz00(obj_t BgL_envz00_2420,
		obj_t BgL_funz00_2421)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 137 */
			{
				BgL_rtl_vrefz00_bglt BgL_funz00_2039;

				BgL_funz00_2039 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_2421);
				{	/* SawMill/cast.scm 138 */
					BgL_typez00_bglt BgL_arg4570z00_2314;

					BgL_arg4570z00_2314 =
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2039))->BgL_vtypez00);
					return MAKE_PAIR((obj_t) (BgL_arg4570z00_2314), BNIL);
				}
			}
		}
	}



/* type-args-rtl_setfie4390 */
	obj_t BGl_typezd2argszd2rtl_setfie4390z00zzsaw_castz00(obj_t BgL_envz00_2422,
		obj_t BgL_funz00_2423)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 134 */
			{
				BgL_rtl_setfieldz00_bglt BgL_funz00_2030;

				BgL_funz00_2030 = (BgL_rtl_setfieldz00_bglt) (BgL_funz00_2423);
				{	/* SawMill/cast.scm 135 */
					BgL_typez00_bglt BgL_arg4565z00_2033;

					obj_t BgL_arg4566z00_2034;

					BgL_arg4565z00_2033 =
						(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2030))->
						BgL_objtypez00);
					{	/* SawMill/cast.scm 135 */
						BgL_typez00_bglt BgL_arg4567z00_2035;

						BgL_arg4567z00_2035 =
							(((BgL_rtl_setfieldz00_bglt) CREF(BgL_funz00_2030))->BgL_typez00);
						BgL_arg4566z00_2034 =
							MAKE_PAIR((obj_t) (BgL_arg4567z00_2035), BNIL);
					}
					return MAKE_PAIR((obj_t) (BgL_arg4565z00_2033), BgL_arg4566z00_2034);
				}
			}
		}
	}



/* type-args-rtl_getfie4388 */
	obj_t BGl_typezd2argszd2rtl_getfie4388z00zzsaw_castz00(obj_t BgL_envz00_2424,
		obj_t BgL_funz00_2425)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 131 */
			{
				BgL_rtl_getfieldz00_bglt BgL_funz00_2023;

				BgL_funz00_2023 = (BgL_rtl_getfieldz00_bglt) (BgL_funz00_2425);
				{	/* SawMill/cast.scm 132 */
					BgL_typez00_bglt BgL_arg4562z00_2309;

					BgL_arg4562z00_2309 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_funz00_2023))->
						BgL_objtypez00);
					return MAKE_PAIR((obj_t) (BgL_arg4562z00_2309), BNIL);
				}
			}
		}
	}



/* type-dest-rtl_cast4384 */
	obj_t BGl_typezd2destzd2rtl_cast4384z00zzsaw_castz00(obj_t BgL_envz00_2426,
		obj_t BgL_funz00_2427, obj_t BgL_argsz00_2428)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 124 */
			{	/* SawMill/cast.scm 125 */
				BgL_typez00_bglt BgL_auxz00_2886;

				{
					BgL_rtl_castz00_bglt BgL_auxz00_2887;

					BgL_auxz00_2887 = (BgL_rtl_castz00_bglt) (BgL_funz00_2427);
					BgL_auxz00_2886 =
						(((BgL_rtl_castz00_bglt) CREF(BgL_auxz00_2887))->BgL_typez00);
				}
				return (obj_t) (BgL_auxz00_2886);
			}
		}
	}



/* type-dest-rtl_call4382 */
	obj_t BGl_typezd2destzd2rtl_call4382z00zzsaw_castz00(obj_t BgL_envz00_2429,
		obj_t BgL_funz00_2430, obj_t BgL_argsz00_2431)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 121 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2010;

				obj_t BgL_argsz00_2011;

				{	/* SawMill/cast.scm 122 */
					BgL_typez00_bglt BgL_auxz00_2891;

					BgL_funz00_2010 = (BgL_rtl_callz00_bglt) (BgL_funz00_2430);
					BgL_argsz00_2011 = BgL_argsz00_2431;
					{	/* SawMill/cast.scm 122 */
						BgL_variablez00_bglt BgL_obj1608z00_2307;

						BgL_obj1608z00_2307 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2010))->BgL_varz00));
						BgL_auxz00_2891 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2307))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2891);
				}
			}
		}
	}



/* type-dest-rtl_cast_n4380 */
	obj_t BGl_typezd2destzd2rtl_cast_n4380z00zzsaw_castz00(obj_t BgL_envz00_2432,
		obj_t BgL_funz00_2433, obj_t BgL_argsz00_2434)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 117 */
			{	/* SawMill/cast.scm 118 */
				BgL_typez00_bglt BgL_auxz00_2897;

				{
					BgL_rtl_cast_nullz00_bglt BgL_auxz00_2898;

					BgL_auxz00_2898 = (BgL_rtl_cast_nullz00_bglt) (BgL_funz00_2433);
					BgL_auxz00_2897 =
						(((BgL_rtl_cast_nullz00_bglt) CREF(BgL_auxz00_2898))->BgL_typez00);
				}
				return (obj_t) (BgL_auxz00_2897);
			}
		}
	}



/* type-dest-rtl_isa4378 */
	obj_t BGl_typezd2destzd2rtl_isa4378z00zzsaw_castz00(obj_t BgL_envz00_2435,
		obj_t BgL_funz00_2436, obj_t BgL_argsz00_2437)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 114 */
			return
				(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 6))));
		}
	}



/* type-dest-rtl_vlengt4376 */
	obj_t BGl_typezd2destzd2rtl_vlengt4376z00zzsaw_castz00(obj_t BgL_envz00_2438,
		obj_t BgL_funz00_2439, obj_t BgL_argsz00_2440)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 111 */
			return
				(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 6))));
		}
	}



/* type-dest-rtl_vref4374 */
	obj_t BGl_typezd2destzd2rtl_vref4374z00zzsaw_castz00(obj_t BgL_envz00_2441,
		obj_t BgL_funz00_2442, obj_t BgL_argsz00_2443)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 108 */
			{	/* SawMill/cast.scm 109 */
				BgL_typez00_bglt BgL_auxz00_2908;

				{
					BgL_rtl_vrefz00_bglt BgL_auxz00_2909;

					BgL_auxz00_2909 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_2442);
					BgL_auxz00_2908 =
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_auxz00_2909))->BgL_typez00);
				}
				return (obj_t) (BgL_auxz00_2908);
			}
		}
	}



/* type-dest-rtl_valloc4372 */
	obj_t BGl_typezd2destzd2rtl_valloc4372z00zzsaw_castz00(obj_t BgL_envz00_2444,
		obj_t BgL_funz00_2445, obj_t BgL_argsz00_2446)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 105 */
			{	/* SawMill/cast.scm 106 */
				BgL_typez00_bglt BgL_auxz00_2913;

				{
					BgL_rtl_vallocz00_bglt BgL_auxz00_2914;

					BgL_auxz00_2914 = (BgL_rtl_vallocz00_bglt) (BgL_funz00_2445);
					BgL_auxz00_2913 =
						(((BgL_rtl_vallocz00_bglt) CREF(BgL_auxz00_2914))->BgL_vtypez00);
				}
				return (obj_t) (BgL_auxz00_2913);
			}
		}
	}



/* type-dest-rtl_new4370 */
	obj_t BGl_typezd2destzd2rtl_new4370z00zzsaw_castz00(obj_t BgL_envz00_2447,
		obj_t BgL_funz00_2448, obj_t BgL_argsz00_2449)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 102 */
			{	/* SawMill/cast.scm 103 */
				BgL_typez00_bglt BgL_auxz00_2918;

				{
					BgL_rtl_newz00_bglt BgL_auxz00_2919;

					BgL_auxz00_2919 = (BgL_rtl_newz00_bglt) (BgL_funz00_2448);
					BgL_auxz00_2918 =
						(((BgL_rtl_newz00_bglt) CREF(BgL_auxz00_2919))->BgL_typez00);
				}
				return (obj_t) (BgL_auxz00_2918);
			}
		}
	}



/* type-dest-rtl_getfie4368 */
	obj_t BGl_typezd2destzd2rtl_getfie4368z00zzsaw_castz00(obj_t BgL_envz00_2450,
		obj_t BgL_funz00_2451, obj_t BgL_argsz00_2452)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 99 */
			{	/* SawMill/cast.scm 100 */
				BgL_typez00_bglt BgL_auxz00_2923;

				{
					BgL_rtl_getfieldz00_bglt BgL_auxz00_2924;

					BgL_auxz00_2924 = (BgL_rtl_getfieldz00_bglt) (BgL_funz00_2451);
					BgL_auxz00_2923 =
						(((BgL_rtl_getfieldz00_bglt) CREF(BgL_auxz00_2924))->BgL_typez00);
				}
				return (obj_t) (BgL_auxz00_2923);
			}
		}
	}



/* type-dest-rtl_loadg4365 */
	obj_t BGl_typezd2destzd2rtl_loadg4365z00zzsaw_castz00(obj_t BgL_envz00_2453,
		obj_t BgL_funz00_2454, obj_t BgL_argsz00_2455)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 96 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_1960;

				obj_t BgL_argsz00_1961;

				{	/* SawMill/cast.scm 97 */
					BgL_typez00_bglt BgL_auxz00_2928;

					BgL_funz00_1960 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_2454);
					BgL_argsz00_1961 = BgL_argsz00_2455;
					{	/* SawMill/cast.scm 97 */
						BgL_variablez00_bglt BgL_obj1608z00_2298;

						BgL_obj1608z00_2298 =
							(BgL_variablez00_bglt) (
							(((BgL_rtl_loadgz00_bglt) CREF(BgL_funz00_1960))->BgL_varz00));
						BgL_auxz00_2928 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2298))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2928);
				}
			}
		}
	}



/* type-dest-rtl_loadfu4363 */
	obj_t BGl_typezd2destzd2rtl_loadfu4363z00zzsaw_castz00(obj_t BgL_envz00_2456,
		obj_t BgL_funz00_2457, obj_t BgL_argsz00_2458)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 91 */
			return
				(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5))));
		}
	}



/* type-dest-rtl_loadi4361 */
	obj_t BGl_typezd2destzd2rtl_loadi4361z00zzsaw_castz00(obj_t BgL_envz00_2459,
		obj_t BgL_funz00_2460, obj_t BgL_argsz00_2461)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 88 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_1947;

				obj_t BgL_argsz00_1948;

				{	/* SawMill/cast.scm 89 */
					BgL_typez00_bglt BgL_auxz00_2937;

					BgL_funz00_1947 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_2460);
					BgL_argsz00_1948 = BgL_argsz00_2461;
					{	/* SawMill/cast.scm 89 */
						BgL_nodez00_bglt BgL_obj2092z00_2295;

						BgL_obj2092z00_2295 =
							(BgL_nodez00_bglt) (
							(((BgL_rtl_loadiz00_bglt) CREF(BgL_funz00_1947))->
								BgL_constantz00));
						BgL_auxz00_2937 =
							(((BgL_nodez00_bglt) CREF(BgL_obj2092z00_2295))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2937);
				}
			}
		}
	}



/* type-dest-rtl_mov4359 */
	obj_t BGl_typezd2destzd2rtl_mov4359z00zzsaw_castz00(obj_t BgL_envz00_2462,
		obj_t BgL_funz00_2463, obj_t BgL_argsz00_2464)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 85 */
			{
				BgL_rtl_movz00_bglt BgL_funz00_1940;

				obj_t BgL_argsz00_1941;

				{	/* SawMill/cast.scm 86 */
					BgL_typez00_bglt BgL_auxz00_2943;

					BgL_funz00_1940 = (BgL_rtl_movz00_bglt) (BgL_funz00_2463);
					BgL_argsz00_1941 = BgL_argsz00_2464;
					{	/* SawMill/cast.scm 86 */
						BgL_rtl_regz00_bglt BgL_obj3597z00_2292;

						{	/* SawMill/cast.scm 86 */
							obj_t BgL_pairz00_2291;

							BgL_pairz00_2291 = BgL_argsz00_1941;
							BgL_obj3597z00_2292 =
								(BgL_rtl_regz00_bglt) (CAR(BgL_pairz00_2291));
						}
						BgL_auxz00_2943 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3597z00_2292))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2943);
				}
			}
		}
	}



/* type-dest-rtl_nop4357 */
	obj_t BGl_typezd2destzd2rtl_nop4357z00zzsaw_castz00(obj_t BgL_envz00_2465,
		obj_t BgL_funz00_2466, obj_t BgL_argsz00_2467)
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 82 */
			return
				(obj_t) (BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 7))));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_castz00()
	{
		AN_OBJECT;
		{	/* SawMill/cast.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4657z00zzsaw_castz00));
		}
	}

#ifdef __cplusplus
}
#endif
