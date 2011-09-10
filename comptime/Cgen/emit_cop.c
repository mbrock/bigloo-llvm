/*===========================================================================*/
/*   (Cgen/emit_cop.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/emit_cop.scm)*/
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

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;


	extern obj_t BGl_capplyz00zzcgen_copz00;
	BGL_IMPORT obj_t bgl_display_fixnum(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	extern obj_t BGl_cvoidz00zzcgen_copz00;
	extern obj_t BGl_stopz00zzcgen_copz00;
	extern obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2stdcza2z00zzengine_paramz00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_emitzd2copzd2cpragma3863z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_emitzd2copzd2cswitch3889z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cboxzd2refzd2zzcgen_copz00;
	extern obj_t BGl_csequencez00zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2cfail3887z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcgen_emitzd2copzd2();
	static obj_t BGl__emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t
		BGl_emitzd2copzd2cjumpzd2exzd2it3899z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_emitzd2copzd2varc3861z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl__emitzd2copzd2zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_cswitchz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
	extern obj_t BGl_csetzd2exzd2itz00zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2cfuncall3881z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_emitzd2copzd2cgoto3851z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_emitzd2copzd2capply3883z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_blockz00zzcgen_copz00;
	extern obj_t BGl_bdbzd2blockzd2zzcgen_copz00;
	extern obj_t BGl_clabelz00zzcgen_copz00;
	static obj_t BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2(obj_t);
	static obj_t BGl_emitzd2copzd2nop3869z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_emitzd2copzd2clabel3849z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_emitzd2copzd2cvoid3859z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	static obj_t BGl__emitzd2copzd2default3846z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_varcz00zzcgen_copz00;
	static bool_t
		BGl_emitzd2regularzd2cfuncallzf2eoazf2zzcgen_emitzd2copzd2
		(BgL_cfuncallz00_bglt);
	static obj_t BGl_emitzd2copzd2stop3871z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_cifz00zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2cboxzd2ref3893zd2zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_copz00zzcgen_copz00;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2();
	static obj_t BGl_methodzd2initzd2zzcgen_emitzd2copzd2();
	static obj_t BGl_emitzd2copzd2localzd2var3877zd2zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cboxzd2setz12zc0zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2catom3857z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
	static obj_t BGl_emitzd2copzd2block3853z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2 = BUNSPEC;
	extern obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
	static obj_t BGl_emitzd2copzd2bdbzd2block3879zd2zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_thezd2stringzd2zzcgen_emitzd2copzd2(obj_t);
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcgen_emitzd2copzd2();
	static obj_t BGl_emitzd2copzd2csequence3867z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_emitzd2copzd2creturn3855z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
	static obj_t BGl_emitzd2copzd2csetzd2exzd2it3897z00zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cappz00zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2cboxzd2setz123895zc0zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cfuncallz00zzcgen_copz00;
	static obj_t BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 = BUNSPEC;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_csetqz00zzcgen_copz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2();
	extern obj_t BGl_creturnz00zzcgen_copz00;
	BGL_EXPORTED_DECL obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static bool_t
		BGl_emitzd2prefixzd2cappz00zzcgen_emitzd2copzd2(BgL_cappz00_bglt);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_cgotoz00zzcgen_copz00;
	extern obj_t BGl_cjumpzd2exzd2itz00zzcgen_copz00;
	static obj_t BGl_emitzd2copzd2ccast3865z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_ccastz00zzcgen_copz00;
	extern obj_t BGl_localzd2varzd2zzcgen_copz00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_catomz00zzcgen_copz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_cfailz00zzcgen_copz00;
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_emitzd2copzd2default3846z00zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_emitzd2copzd2cif3875z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_nopz00zzcgen_copz00;
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_emitzd2copzd2cmakezd2box3891zd2zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl__resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2(obj_t);
	static obj_t BGl_emitzd2copzd2capp3885z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC;
	static obj_t BGl_emitzd2copzd2csetq3873z00zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_cmakezd2boxzd2zzcgen_copz00;
	static obj_t BGl__getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2();
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4536z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cla4612z00,
		BGl_emitzd2copzd2clabel3849z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4537z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cgo4613z00,
		BGl_emitzd2copzd2cgoto3851z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4538z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2blo4614z00,
		BGl_emitzd2copzd2block3853z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4540z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cat4615z00,
		BGl_emitzd2copzd2catom3857z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4539z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cre4616z00,
		BGl_emitzd2copzd2creturn3855z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4541z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cvo4617z00,
		BGl_emitzd2copzd2cvoid3859z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4542z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2var4618z00,
		BGl_emitzd2copzd2varc3861z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4543z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cpr4619z00,
		BGl_emitzd2copzd2cpragma3863z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4544z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cca4620z00,
		BGl_emitzd2copzd2ccast3865z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4545z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cse4621z00,
		BGl_emitzd2copzd2csequence3867z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4546z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2nop4622z00,
		BGl_emitzd2copzd2nop3869z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4547z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2sto4623z00,
		BGl_emitzd2copzd2stop3871z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4548z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cse4624z00,
		BGl_emitzd2copzd2csetq3873z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4550z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2loc4625z00,
		BGl_emitzd2copzd2localzd2var3877zd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4549z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cif4626z00,
		BGl_emitzd2copzd2cif3875z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4551z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2bdb4627z00,
		BGl_emitzd2copzd2bdbzd2block3879zd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4552z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cfu4628z00,
		BGl_emitzd2copzd2cfuncall3881z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4553z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cap4629z00,
		BGl_emitzd2copzd2capply3883z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4554z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cap4630z00,
		BGl_emitzd2copzd2capp3885z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4555z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cfa4631z00,
		BGl_emitzd2copzd2cfail3887z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4556z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2csw4632z00,
		BGl_emitzd2copzd2cswitch3889z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4557z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cma4633z00,
		BGl_emitzd2copzd2cmakezd2box3891zd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4558z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cbo4634z00,
		BGl_emitzd2copzd2cboxzd2ref3893zd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4560z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cse4635z00,
		BGl_emitzd2copzd2csetzd2exzd2it3897z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4559z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cbo4636z00,
		BGl_emitzd2copzd2cboxzd2setz123895zc0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4561z00zzcgen_emitzd2copzd2,
		BgL_bgl_emitza7d2copza7d2cju4637z00,
		BGl_emitzd2copzd2cjumpzd2exzd2it3899z00zzcgen_emitzd2copzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string4530z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4530za700za7za7c4638za7, " \"", 2);
	      DEFINE_STRING(BGl_string4529z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4529za700za7za7c4639za7, "\n#line ", 7);
	      DEFINE_STRING(BGl_string4531z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4531za700za7za7c4640za7, "/* ", 3);
	      DEFINE_STRING(BGl_string4532z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4532za700za7za7c4641za7, " ", 1);
	      DEFINE_STRING(BGl_string4533z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4533za700za7za7c4642za7, " */", 3);
	      DEFINE_STRING(BGl_string4534z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4534za700za7za7c4643za7, "emit-cop", 8);
	      DEFINE_STRING(BGl_string4535z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4535za700za7za7c4644za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4562z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4562za700za7za7c4645za7, "JUMP_EXIT( ", 11);
	      DEFINE_STRING(BGl_string4563z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4563za700za7za7c4646za7, "if( SET_EXIT(", 13);
	      DEFINE_STRING(BGl_string4564z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4564za700za7za7c4647za7, ") ) { ", 6);
	      DEFINE_STRING(BGl_string4565z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4565za700za7za7c4648za7, "} else {", 8);
	      DEFINE_STRING(BGl_string4566z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4566za700za7za7c4649za7, "} ", 2);
	      DEFINE_STRING(BGl_string4567z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4567za700za7za7c4650za7, "CELL_SET(", 9);
	      DEFINE_STRING(BGl_string4568z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4568za700za7za7c4651za7, ", ", 2);
	      DEFINE_STRING(BGl_string4570z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4570za700za7za7c4652za7, "MAKE_CELL(", 10);
	      DEFINE_STRING(BGl_string4569z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4569za700za7za7c4653za7, "CELL_REF(", 9);
	      DEFINE_STRING(BGl_string4571z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4571za700za7za7c4654za7, "switch( ", 8);
	      DEFINE_STRING(BGl_string4572z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4572za700za7za7c4655za7, ") { ", 4);
	      DEFINE_STRING(BGl_string4573z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4573za700za7za7c4656za7, "default: ", 9);
	      DEFINE_STRING(BGl_string4574z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4574za700za7za7c4657za7, "; ", 2);
	      DEFINE_STRING(BGl_string4575z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4575za700za7za7c4658za7, "case ", 5);
	      DEFINE_STRING(BGl_string4576z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4576za700za7za7c4659za7, " : ", 3);
	      DEFINE_STRING(BGl_string4577z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4577za700za7za7c4660za7, "break;", 6);
	      DEFINE_STRING(BGl_string4578z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4578za700za7za7c4661za7, "exit( -1 );", 11);
	      DEFINE_STRING(BGl_string4580z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4580za700za7za7c4662za7, ");", 2);
	      DEFINE_STRING(BGl_string4579z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4579za700za7za7c4663za7, "FAILURE(", 8);
	      DEFINE_STRING(BGl_string4581z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4581za700za7za7c4664za7, "the_failure(", 12);
	      DEFINE_STRING(BGl_string4582z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4582za700za7za7c4665za7, "), exit( -1 );", 14);
	      DEFINE_STRING(BGl_string4583z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4583za700za7za7c4666za7, "Illegal infix macro", 19);
	      DEFINE_STRING(BGl_string4584z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4584za700za7za7c4667za7, "apply(", 6);
	      DEFINE_STRING(BGl_string4585z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4585za700za7za7c4668za7, "PROCEDURE_L_ENTRY(", 18);
	      DEFINE_STRING(BGl_string4586z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4586za700za7za7c4669za7, ")(", 2);
	      DEFINE_STRING(BGl_string4587z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4587za700za7za7c4670za7, ")", 1);
	      DEFINE_STRING(BGl_string4588z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4588za700za7za7c4671za7, "PROCEDURE_ENTRY(", 16);
	      DEFINE_STRING(BGl_string4600z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4600za700za7za7c4672za7, ") ", 2);
	      DEFINE_STRING(BGl_string4590z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4590za700za7za7c4673za7, " ) ? ", 5);
	      DEFINE_STRING(BGl_string4589z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4589za700za7za7c4674za7, "(VA_PROCEDUREP( ", 16);
	      DEFINE_STRING(BGl_string4601z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4601za700za7za7c4675za7, "((", 2);
	      DEFINE_STRING(BGl_string4591z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4591za700za7za7c4676za7, " )", 2);
	      DEFINE_STRING(BGl_string4602z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4602za700za7za7c4677za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string4592z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4592za700za7za7c4678za7,
		"int bigloo_dummy_bdb; bigloo_dummy_bdb = 0; { ", 46);
	      DEFINE_STRING(BGl_string4603z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4603za700za7za7c4679za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string4593z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4593za700za7za7c4680za7, "", 0);
	      DEFINE_STRING(BGl_string4604z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4604za700za7za7c4681za7, "$", 1);
	      DEFINE_STRING(BGl_string4594z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4594za700za7za7c4682za7, " = ((", 5);
	      DEFINE_STRING(BGl_string4605z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4605za700za7za7c4683za7, "return ", 7);
	      DEFINE_STRING(BGl_string4595z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4595za700za7za7c4684za7, ")BUNSPEC)", 9);
	      DEFINE_STRING(BGl_string4606z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4606za700za7za7c4685za7, "{ ", 2);
	      DEFINE_STRING(BGl_string4596z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4596za700za7za7c4686za7, "if(", 3);
	      DEFINE_STRING(BGl_string4607z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4607za700za7za7c4687za7, "goto ", 5);
	      DEFINE_STRING(BGl_string4597z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4597za700za7za7c4688za7, " else ", 6);
	      DEFINE_STRING(BGl_string4608z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4608za700za7za7c4689za7, "cgen_emit-cop", 13);
	      DEFINE_STRING(BGl_string4598z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4598za700za7za7c4690za7, " = ", 3);
	      DEFINE_STRING(BGl_string4609z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4609za700za7za7c4691za7,
		"bigloo light elight emit-cop foreign bfalse else emit-cop-default3846 location ",
		79);
	      DEFINE_STRING(BGl_string4599z00zzcgen_emitzd2copzd2,
		BgL_bgl_string4599za700za7za7c4692za7, "( ", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2bdbzd2locz12zd2envzc0zzcgen_emitzd2copzd2,
		BgL_bgl__resetza7d2bdbza7d2l4693z00,
		BGl__resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2bdbzd2loczd2envzd2zzcgen_emitzd2copzd2,
		BgL_bgl__emitza7d2bdbza7d2lo4694z00,
		BGl__emitzd2bdbzd2locz00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2currentzd2bdbzd2loczd2envz00zzcgen_emitzd2copzd2,
		BgL_bgl__getza7d2currentza7d4695z00,
		BGl__getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_emitzd2copzd2default3846zd2envzd2zzcgen_emitzd2copzd2,
		BgL_bgl__emitza7d2copza7d2de4696z00,
		BGl__emitzd2copzd2default3846z00zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
		BgL_bgl__emitza7d2copza7d2za7za74697z00,
		BGl__emitzd2copzd2zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long
		BgL_checksumz00_4422, char *BgL_fromz00_4423)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2))
				{
					BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2();
					BGl_cnstzd2initzd2zzcgen_emitzd2copzd2();
					BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2();
					BGl_genericzd2initzd2zzcgen_emitzd2copzd2();
					BGl_methodzd2initzd2zzcgen_emitzd2copzd2();
					BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cgen_emit-cop");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			{	/* Cgen/emit_cop.scm 15 */
				obj_t BgL_cportz00_4414;

				BgL_cportz00_4414 =
					bgl_open_input_string(BGl_string4609z00zzcgen_emitzd2copzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_4415;

					BgL_iz00_4415 = ((long) 8);
				BgL_loopz00_4416:
					if ((BgL_iz00_4415 == ((long) -1)))
						{	/* Cgen/emit_cop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/emit_cop.scm 15 */
							{	/* Cgen/emit_cop.scm 15 */
								obj_t BgL_arg4611z00_4418;

								{	/* Cgen/emit_cop.scm 15 */

									{	/* Cgen/emit_cop.scm 15 */
										obj_t BgL_locationz00_4420;

										BgL_locationz00_4420 = BBOOL(((bool_t) 0));
										{	/* Cgen/emit_cop.scm 15 */

											BgL_arg4611z00_4418 =
												BGl_readz00zz__readerz00(BgL_cportz00_4414,
												BgL_locationz00_4420);
										}
									}
								}
								{	/* Cgen/emit_cop.scm 15 */
									int BgL_auxz00_4447;

									BgL_auxz00_4447 = (int) (BgL_iz00_4415);
									CNST_TABLE_SET(BgL_auxz00_4447, BgL_arg4611z00_4418);
							}}
							{	/* Cgen/emit_cop.scm 15 */
								int BgL_auxz00_4421;

								BgL_auxz00_4421 = (int) ((BgL_iz00_4415 - ((long) 1)));
								{
									long BgL_iz00_4452;

									BgL_iz00_4452 = (long) (BgL_auxz00_4421);
									BgL_iz00_4415 = BgL_iz00_4452;
									goto BgL_loopz00_4416;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 = BFALSE;
			return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC, BUNSPEC);
		}
	}



/* reset-bdb-loc! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 606 */
			return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC, BUNSPEC);
		}
	}



/* _reset-bdb-loc! */
	obj_t BGl__resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2(obj_t BgL_envz00_4325)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 606 */
			return BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
		}
	}



/* get-current-bdb-loc */
	BGL_EXPORTED_DEF obj_t BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 612 */
			return BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
		}
	}



/* _get-current-bdb-loc */
	obj_t BGl__getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4326)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 612 */
			return BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
		}
	}



/* emit-bdb-loc */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t
		BgL_curzd2loczd2_43)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 623 */
		BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2:
			{	/* Cgen/emit_cop.scm 625 */
				bool_t BgL_testz00_4455;

				if (CBOOL(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00))
					{	/* Cgen/emit_cop.scm 625 */
						BgL_testz00_4455 =
							CBOOL
							(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00);
					}
				else
					{	/* Cgen/emit_cop.scm 625 */
						BgL_testz00_4455 = ((bool_t) 1);
					}
				if (BgL_testz00_4455)
					{	/* Cgen/emit_cop.scm 625 */
						return
							bgl_display_char(((unsigned char) '\n'),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 627 */
						bool_t BgL_testz00_4460;

						if (STRUCTP(BgL_curzd2loczd2_43))
							{	/* Cgen/emit_cop.scm 627 */
								BgL_testz00_4460 =
									(STRUCT_KEY(BgL_curzd2loczd2_43) ==
									CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Cgen/emit_cop.scm 627 */
								BgL_testz00_4460 = ((bool_t) 0);
							}
						if (BgL_testz00_4460)
							{	/* Cgen/emit_cop.scm 640 */
								obj_t BgL_curzd2fnamezd2_1013;

								obj_t BgL_curzd2linezd2_1014;

								BgL_curzd2fnamezd2_1013 =
									STRUCT_REF(BgL_curzd2loczd2_43, (int) (((long) 0)));
								BgL_curzd2linezd2_1014 =
									STRUCT_REF(BgL_curzd2loczd2_43, (int) (((long) 2)));
								{	/* Cgen/emit_cop.scm 642 */
									bool_t BgL_testz00_4470;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BgL_curzd2linezd2_1014))
										{	/* Cgen/emit_cop.scm 642 */
											BgL_testz00_4470 = STRINGP(BgL_curzd2fnamezd2_1013);
										}
									else
										{	/* Cgen/emit_cop.scm 642 */
											BgL_testz00_4470 = ((bool_t) 0);
										}
									if (BgL_testz00_4470)
										{	/* Cgen/emit_cop.scm 643 */
											obj_t BgL_port3845z00_1016;

											BgL_port3845z00_1016 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											bgl_display_string(BGl_string4529z00zzcgen_emitzd2copzd2,
												BgL_port3845z00_1016);
											bgl_display_obj(BgL_curzd2linezd2_1014,
												BgL_port3845z00_1016);
											bgl_display_string(BGl_string4530z00zzcgen_emitzd2copzd2,
												BgL_port3845z00_1016);
											bgl_display_obj(BgL_curzd2fnamezd2_1013,
												BgL_port3845z00_1016);
											bgl_display_char(((unsigned char) '"'),
												BgL_port3845z00_1016);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port3845z00_1016);
										}
									else
										{	/* Cgen/emit_cop.scm 642 */
											BFALSE;
										}
								}
								return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 =
									BgL_curzd2loczd2_43, BUNSPEC);
							}
						else
							{	/* Cgen/emit_cop.scm 629 */
								bool_t BgL_testz00_4480;

								{	/* Cgen/emit_cop.scm 629 */
									obj_t BgL_oz00_2203;

									BgL_oz00_2203 = BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
									if (STRUCTP(BgL_oz00_2203))
										{	/* Cgen/emit_cop.scm 629 */
											BgL_testz00_4480 =
												(STRUCT_KEY(BgL_oz00_2203) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Cgen/emit_cop.scm 629 */
											BgL_testz00_4480 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_4480)
									{
										obj_t BgL_curzd2loczd2_4486;

										BgL_curzd2loczd2_4486 =
											BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
										BgL_curzd2loczd2_43 = BgL_curzd2loczd2_4486;
										goto BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2;
									}
								else
									{	/* Cgen/emit_cop.scm 631 */
										bool_t BgL_testz00_4487;

										{	/* Cgen/emit_cop.scm 631 */
											obj_t BgL_oz00_2210;

											BgL_oz00_2210 =
												BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
											if (STRUCTP(BgL_oz00_2210))
												{	/* Cgen/emit_cop.scm 631 */
													BgL_testz00_4487 =
														(STRUCT_KEY(BgL_oz00_2210) ==
														CNST_TABLE_REF(((long) 0)));
												}
											else
												{	/* Cgen/emit_cop.scm 631 */
													BgL_testz00_4487 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_4487)
											{
												obj_t BgL_curzd2loczd2_4493;

												BgL_curzd2loczd2_4493 =
													BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
												BgL_curzd2loczd2_43 = BgL_curzd2loczd2_4493;
												goto BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2;
											}
										else
											{	/* Cgen/emit_cop.scm 631 */
												if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
													{	/* Cgen/emit_cop.scm 638 */
														obj_t BgL_port3844z00_1021;

														BgL_port3844z00_1021 =
															BGl_za2czd2portza2zd2zzbackend_c_emitz00;
														bgl_display_string
															(BGl_string4529z00zzcgen_emitzd2copzd2,
															BgL_port3844z00_1021);
														bgl_display_fixnum(BINT(((long) 1)),
															BgL_port3844z00_1021);
														bgl_display_string
															(BGl_string4530z00zzcgen_emitzd2copzd2,
															BgL_port3844z00_1021);
														bgl_display_obj(CAR
															(BGl_za2srczd2filesza2zd2zzengine_paramz00),
															BgL_port3844z00_1021);
														bgl_display_char(((unsigned char) '"'),
															BgL_port3844z00_1021);
														return bgl_display_char(((unsigned char) '\n'),
															BgL_port3844z00_1021);
													}
												else
													{	/* Cgen/emit_cop.scm 635 */
														return BFALSE;
													}
											}
									}
							}
					}
			}
		}
	}



/* _emit-bdb-loc */
	obj_t BGl__emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4327,
		obj_t BgL_curzd2loczd2_4328)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 623 */
			return BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_curzd2loczd2_4328);
		}
	}



/* emit-bdb-loc-comment */
	obj_t BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2(obj_t
		BgL_curzd2loczd2_44)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 652 */
			{	/* Cgen/emit_cop.scm 653 */
				bool_t BgL_testz00_4505;

				if (STRUCTP(BgL_curzd2loczd2_44))
					{	/* Cgen/emit_cop.scm 653 */
						BgL_testz00_4505 =
							(STRUCT_KEY(BgL_curzd2loczd2_44) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Cgen/emit_cop.scm 653 */
						BgL_testz00_4505 = ((bool_t) 0);
					}
				if (BgL_testz00_4505)
					{	/* Cgen/emit_cop.scm 653 */
						bgl_display_string(BGl_string4531z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* Cgen/emit_cop.scm 656 */
							obj_t BgL_arg3919z00_1024;

							BgL_arg3919z00_1024 =
								STRUCT_REF(BgL_curzd2loczd2_44, (int) (((long) 0)));
							bgl_display_obj(BgL_arg3919z00_1024,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						bgl_display_string(BGl_string4532z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* Cgen/emit_cop.scm 658 */
							obj_t BgL_arg3920z00_1025;

							BgL_arg3920z00_1025 =
								STRUCT_REF(BgL_curzd2loczd2_44, (int) (((long) 2)));
							bgl_display_obj(BgL_arg3920z00_1025,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						return
							bgl_display_string(BGl_string4533z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 653 */
						return BFALSE;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_emitzd2copzd2default3846zd2envzd2zzcgen_emitzd2copzd2,
				BGl_copz00zzcgen_copz00, BGl_string4534z00zzcgen_emitzd2copzd2);
		}
	}



/* emit-cop */
	BGL_EXPORTED_DEF bool_t BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt
		BgL_copz00_15)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 44 */
			{	/* Cgen/emit_cop.scm 44 */
				obj_t BgL_method3847z00_2247;

				{	/* Cgen/emit_cop.scm 44 */
					BgL_objectz00_bglt BgL_objz00_2248;

					BgL_objz00_2248 = (BgL_objectz00_bglt) (BgL_copz00_15);
					{	/* Cgen/emit_cop.scm 44 */
						long BgL_objzd2classzd2numz00_2249;

						BgL_objzd2classzd2numz00_2249 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2248);
						{	/* Cgen/emit_cop.scm 44 */
							obj_t BgL_arg2643z00_2250;

							BgL_arg2643z00_2250 =
								PROCEDURE_REF(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
								(int) (((long) 1)));
							{	/* Cgen/emit_cop.scm 44 */
								obj_t BgL_arrayz00_2252;

								int BgL_offsetz00_2253;

								BgL_arrayz00_2252 = BgL_arg2643z00_2250;
								BgL_offsetz00_2253 = (int) (BgL_objzd2classzd2numz00_2249);
								{	/* Cgen/emit_cop.scm 44 */
									long BgL_offsetz00_2254;

									BgL_offsetz00_2254 =
										((long) (BgL_offsetz00_2253) - OBJECT_TYPE);
									{	/* Cgen/emit_cop.scm 44 */
										long BgL_modz00_2255;

										{	/* Cgen/emit_cop.scm 44 */
											int BgL_arg2645z00_2256;

											BgL_arg2645z00_2256 = (int) (((long) 16));
											{	/* Cgen/emit_cop.scm 44 */
												long BgL_auxz00_4529;

												BgL_auxz00_4529 = (long) (BgL_arg2645z00_2256);
												BgL_modz00_2255 =
													(BgL_offsetz00_2254 / BgL_auxz00_4529);
										}}
										{	/* Cgen/emit_cop.scm 44 */
											long BgL_restz00_2257;

											{	/* Cgen/emit_cop.scm 44 */
												int BgL_arg2644z00_2258;

												BgL_arg2644z00_2258 = (int) (((long) 16));
												{	/* Cgen/emit_cop.scm 44 */
													long BgL_auxz00_4533;

													BgL_auxz00_4533 = (long) (BgL_arg2644z00_2258);
													BgL_restz00_2257 =
														(BgL_offsetz00_2254 % BgL_auxz00_4533);
											}}
											{	/* Cgen/emit_cop.scm 44 */

												BgL_method3847z00_2247 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2252,
														(int) (BgL_modz00_2255)), (int) (BgL_restz00_2257));
				}}}}}}}}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2247) (BgL_method3847z00_2247,
						(obj_t) (BgL_copz00_15), BEOA));
			}
		}
	}



/* _emit-cop */
	obj_t BGl__emitzd2copzd2zzcgen_emitzd2copzd2(obj_t BgL_envz00_4329,
		obj_t BgL_copz00_4330)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 44 */
			return
				BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
					(BgL_copz00_bglt) (BgL_copz00_4330)));
		}
	}



/* emit-cop-default3846 */
	bool_t BGl_emitzd2copzd2default3846z00zzcgen_emitzd2copzd2(BgL_copz00_bglt
		BgL_copz00_16)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			return
				CBOOL(BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string4535z00zzcgen_emitzd2copzd2, (obj_t) (BgL_copz00_16)));
		}
	}



/* _emit-cop-default3846 */
	obj_t BGl__emitzd2copzd2default3846z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4331, obj_t BgL_copz00_4332)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			return
				BBOOL(BGl_emitzd2copzd2default3846z00zzcgen_emitzd2copzd2(
					(BgL_copz00_bglt) (BgL_copz00_4332)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_clabelz00zzcgen_copz00, BGl_proc4536z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cgotoz00zzcgen_copz00,
				BGl_proc4537z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_blockz00zzcgen_copz00,
				BGl_proc4538z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_creturnz00zzcgen_copz00, BGl_proc4539z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_catomz00zzcgen_copz00,
				BGl_proc4540z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cvoidz00zzcgen_copz00,
				BGl_proc4541z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_varcz00zzcgen_copz00,
				BGl_proc4542z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cpragmaz00zzcgen_copz00, BGl_proc4543z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_ccastz00zzcgen_copz00,
				BGl_proc4544z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_csequencez00zzcgen_copz00, BGl_proc4545z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_nopz00zzcgen_copz00,
				BGl_proc4546z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_stopz00zzcgen_copz00,
				BGl_proc4547z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_csetqz00zzcgen_copz00,
				BGl_proc4548z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cifz00zzcgen_copz00,
				BGl_proc4549z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_localzd2varzd2zzcgen_copz00, BGl_proc4550z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_bdbzd2blockzd2zzcgen_copz00, BGl_proc4551z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cfuncallz00zzcgen_copz00, BGl_proc4552z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_capplyz00zzcgen_copz00, BGl_proc4553z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cappz00zzcgen_copz00,
				BGl_proc4554z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cfailz00zzcgen_copz00,
				BGl_proc4555z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cswitchz00zzcgen_copz00, BGl_proc4556z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cmakezd2boxzd2zzcgen_copz00, BGl_proc4557z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cboxzd2refzd2zzcgen_copz00, BGl_proc4558z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cboxzd2setz12zc0zzcgen_copz00, BGl_proc4559z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_csetzd2exzd2itz00zzcgen_copz00, BGl_proc4560z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00,
				BGl_proc4561z00zzcgen_emitzd2copzd2,
				BGl_string4534z00zzcgen_emitzd2copzd2);
		}
	}



/* emit-cop-cjump-ex-it3899 */
	obj_t BGl_emitzd2copzd2cjumpzd2exzd2it3899z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4359, obj_t BgL_copz00_4360)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 586 */
			{
				BgL_cjumpzd2exzd2itz00_bglt BgL_copz00_2161;

				{	/* Cgen/emit_cop.scm 587 */
					bool_t BgL_auxz00_4580;

					BgL_copz00_2161 = (BgL_cjumpzd2exzd2itz00_bglt) (BgL_copz00_4360);
					{	/* Cgen/emit_cop.scm 588 */
						obj_t BgL_arg4336z00_2165;

						{
							BgL_copz00_bglt BgL_auxz00_4581;

							BgL_auxz00_4581 = (BgL_copz00_bglt) (BgL_copz00_2161);
							BgL_arg4336z00_2165 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4581))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4336z00_2165);
					}
					bgl_display_string(BGl_string4562z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 590 */
						BgL_copz00_bglt BgL_arg4337z00_2166;

						BgL_arg4337z00_2166 =
							(((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_copz00_2161))->
							BgL_exitz00);
						{	/* Cgen/emit_cop.scm 590 */
							bool_t BgL_res4525z00_4292;

							{	/* Cgen/emit_cop.scm 590 */
								obj_t BgL_method3847z00_4267;

								{	/* Cgen/emit_cop.scm 590 */
									BgL_objectz00_bglt BgL_objz00_4268;

									BgL_objz00_4268 = (BgL_objectz00_bglt) (BgL_arg4337z00_2166);
									{	/* Cgen/emit_cop.scm 590 */
										long BgL_objzd2classzd2numz00_4269;

										BgL_objzd2classzd2numz00_4269 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4268);
										{	/* Cgen/emit_cop.scm 590 */
											obj_t BgL_arg2643z00_4270;

											BgL_arg2643z00_4270 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 590 */
												obj_t BgL_arrayz00_4272;

												int BgL_offsetz00_4273;

												BgL_arrayz00_4272 = BgL_arg2643z00_4270;
												BgL_offsetz00_4273 =
													(int) (BgL_objzd2classzd2numz00_4269);
												{	/* Cgen/emit_cop.scm 590 */
													long BgL_offsetz00_4274;

													BgL_offsetz00_4274 =
														((long) (BgL_offsetz00_4273) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 590 */
														long BgL_modz00_4275;

														{	/* Cgen/emit_cop.scm 590 */
															int BgL_arg2645z00_4276;

															BgL_arg2645z00_4276 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 590 */
																long BgL_auxz00_4595;

																BgL_auxz00_4595 = (long) (BgL_arg2645z00_4276);
																BgL_modz00_4275 =
																	(BgL_offsetz00_4274 / BgL_auxz00_4595);
														}}
														{	/* Cgen/emit_cop.scm 590 */
															long BgL_restz00_4277;

															{	/* Cgen/emit_cop.scm 590 */
																int BgL_arg2644z00_4278;

																BgL_arg2644z00_4278 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 590 */
																	long BgL_auxz00_4599;

																	BgL_auxz00_4599 =
																		(long) (BgL_arg2644z00_4278);
																	BgL_restz00_4277 =
																		(BgL_offsetz00_4274 % BgL_auxz00_4599);
															}}
															{	/* Cgen/emit_cop.scm 590 */

																BgL_method3847z00_4267 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4272,
																		(int) (BgL_modz00_4275)),
																	(int) (BgL_restz00_4277));
								}}}}}}}}
								BgL_res4525z00_4292 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4267)
									(BgL_method3847z00_4267, (obj_t) (BgL_arg4337z00_2166),
										BEOA));
							} BgL_res4525z00_4292;
					}}
					bgl_display_char(((unsigned char) ','),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 592 */
						BgL_copz00_bglt BgL_arg4338z00_2167;

						BgL_arg4338z00_2167 =
							(((BgL_cjumpzd2exzd2itz00_bglt) CREF(BgL_copz00_2161))->
							BgL_valuez00);
						{	/* Cgen/emit_cop.scm 592 */
							bool_t BgL_res4528z00_4322;

							{	/* Cgen/emit_cop.scm 592 */
								obj_t BgL_method3847z00_4297;

								{	/* Cgen/emit_cop.scm 592 */
									BgL_objectz00_bglt BgL_objz00_4298;

									BgL_objz00_4298 = (BgL_objectz00_bglt) (BgL_arg4338z00_2167);
									{	/* Cgen/emit_cop.scm 592 */
										long BgL_objzd2classzd2numz00_4299;

										BgL_objzd2classzd2numz00_4299 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4298);
										{	/* Cgen/emit_cop.scm 592 */
											obj_t BgL_arg2643z00_4300;

											BgL_arg2643z00_4300 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 592 */
												obj_t BgL_arrayz00_4302;

												int BgL_offsetz00_4303;

												BgL_arrayz00_4302 = BgL_arg2643z00_4300;
												BgL_offsetz00_4303 =
													(int) (BgL_objzd2classzd2numz00_4299);
												{	/* Cgen/emit_cop.scm 592 */
													long BgL_offsetz00_4304;

													BgL_offsetz00_4304 =
														((long) (BgL_offsetz00_4303) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 592 */
														long BgL_modz00_4305;

														{	/* Cgen/emit_cop.scm 592 */
															int BgL_arg2645z00_4306;

															BgL_arg2645z00_4306 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 592 */
																long BgL_auxz00_4620;

																BgL_auxz00_4620 = (long) (BgL_arg2645z00_4306);
																BgL_modz00_4305 =
																	(BgL_offsetz00_4304 / BgL_auxz00_4620);
														}}
														{	/* Cgen/emit_cop.scm 592 */
															long BgL_restz00_4307;

															{	/* Cgen/emit_cop.scm 592 */
																int BgL_arg2644z00_4308;

																BgL_arg2644z00_4308 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 592 */
																	long BgL_auxz00_4624;

																	BgL_auxz00_4624 =
																		(long) (BgL_arg2644z00_4308);
																	BgL_restz00_4307 =
																		(BgL_offsetz00_4304 % BgL_auxz00_4624);
															}}
															{	/* Cgen/emit_cop.scm 592 */

																BgL_method3847z00_4297 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4302,
																		(int) (BgL_modz00_4305)),
																	(int) (BgL_restz00_4307));
								}}}}}}}}
								BgL_res4528z00_4322 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4297)
									(BgL_method3847z00_4297, (obj_t) (BgL_arg4338z00_2167),
										BEOA));
							} BgL_res4528z00_4322;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_4580 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_4580);
				}
			}
		}
	}



/* emit-cop-cset-ex-it3897 */
	obj_t BGl_emitzd2copzd2csetzd2exzd2it3897z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4361, obj_t BgL_copz00_4362)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 567 */
			{
				BgL_csetzd2exzd2itz00_bglt BgL_copz00_2149;

				{	/* Cgen/emit_cop.scm 568 */
					bool_t BgL_auxz00_4638;

					BgL_copz00_2149 = (BgL_csetzd2exzd2itz00_bglt) (BgL_copz00_4362);
					{	/* Cgen/emit_cop.scm 569 */
						obj_t BgL_arg4329z00_2153;

						{
							BgL_copz00_bglt BgL_auxz00_4639;

							BgL_auxz00_4639 = (BgL_copz00_bglt) (BgL_copz00_2149);
							BgL_arg4329z00_2153 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4639))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4329z00_2153);
					}
					bgl_display_string(BGl_string4563z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 571 */
						BgL_copz00_bglt BgL_arg4330z00_2154;

						BgL_arg4330z00_2154 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_copz00_2149))->
							BgL_exitz00);
						{	/* Cgen/emit_cop.scm 571 */
							bool_t BgL_res4516z00_4197;

							{	/* Cgen/emit_cop.scm 571 */
								obj_t BgL_method3847z00_4172;

								{	/* Cgen/emit_cop.scm 571 */
									BgL_objectz00_bglt BgL_objz00_4173;

									BgL_objz00_4173 = (BgL_objectz00_bglt) (BgL_arg4330z00_2154);
									{	/* Cgen/emit_cop.scm 571 */
										long BgL_objzd2classzd2numz00_4174;

										BgL_objzd2classzd2numz00_4174 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4173);
										{	/* Cgen/emit_cop.scm 571 */
											obj_t BgL_arg2643z00_4175;

											BgL_arg2643z00_4175 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 571 */
												obj_t BgL_arrayz00_4177;

												int BgL_offsetz00_4178;

												BgL_arrayz00_4177 = BgL_arg2643z00_4175;
												BgL_offsetz00_4178 =
													(int) (BgL_objzd2classzd2numz00_4174);
												{	/* Cgen/emit_cop.scm 571 */
													long BgL_offsetz00_4179;

													BgL_offsetz00_4179 =
														((long) (BgL_offsetz00_4178) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 571 */
														long BgL_modz00_4180;

														{	/* Cgen/emit_cop.scm 571 */
															int BgL_arg2645z00_4181;

															BgL_arg2645z00_4181 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 571 */
																long BgL_auxz00_4653;

																BgL_auxz00_4653 = (long) (BgL_arg2645z00_4181);
																BgL_modz00_4180 =
																	(BgL_offsetz00_4179 / BgL_auxz00_4653);
														}}
														{	/* Cgen/emit_cop.scm 571 */
															long BgL_restz00_4182;

															{	/* Cgen/emit_cop.scm 571 */
																int BgL_arg2644z00_4183;

																BgL_arg2644z00_4183 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 571 */
																	long BgL_auxz00_4657;

																	BgL_auxz00_4657 =
																		(long) (BgL_arg2644z00_4183);
																	BgL_restz00_4182 =
																		(BgL_offsetz00_4179 % BgL_auxz00_4657);
															}}
															{	/* Cgen/emit_cop.scm 571 */

																BgL_method3847z00_4172 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4177,
																		(int) (BgL_modz00_4180)),
																	(int) (BgL_restz00_4182));
								}}}}}}}}
								BgL_res4516z00_4197 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4172)
									(BgL_method3847z00_4172, (obj_t) (BgL_arg4330z00_2154),
										BEOA));
							} BgL_res4516z00_4197;
					}}
					bgl_display_string(BGl_string4564z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 574 */
						BgL_copz00_bglt BgL_arg4331z00_2155;

						BgL_arg4331z00_2155 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_copz00_2149))->
							BgL_jumpzd2valuezd2);
						{	/* Cgen/emit_cop.scm 574 */
							bool_t BgL_res4519z00_4227;

							{	/* Cgen/emit_cop.scm 574 */
								obj_t BgL_method3847z00_4202;

								{	/* Cgen/emit_cop.scm 574 */
									BgL_objectz00_bglt BgL_objz00_4203;

									BgL_objz00_4203 = (BgL_objectz00_bglt) (BgL_arg4331z00_2155);
									{	/* Cgen/emit_cop.scm 574 */
										long BgL_objzd2classzd2numz00_4204;

										BgL_objzd2classzd2numz00_4204 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4203);
										{	/* Cgen/emit_cop.scm 574 */
											obj_t BgL_arg2643z00_4205;

											BgL_arg2643z00_4205 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 574 */
												obj_t BgL_arrayz00_4207;

												int BgL_offsetz00_4208;

												BgL_arrayz00_4207 = BgL_arg2643z00_4205;
												BgL_offsetz00_4208 =
													(int) (BgL_objzd2classzd2numz00_4204);
												{	/* Cgen/emit_cop.scm 574 */
													long BgL_offsetz00_4209;

													BgL_offsetz00_4209 =
														((long) (BgL_offsetz00_4208) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 574 */
														long BgL_modz00_4210;

														{	/* Cgen/emit_cop.scm 574 */
															int BgL_arg2645z00_4211;

															BgL_arg2645z00_4211 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 574 */
																long BgL_auxz00_4678;

																BgL_auxz00_4678 = (long) (BgL_arg2645z00_4211);
																BgL_modz00_4210 =
																	(BgL_offsetz00_4209 / BgL_auxz00_4678);
														}}
														{	/* Cgen/emit_cop.scm 574 */
															long BgL_restz00_4212;

															{	/* Cgen/emit_cop.scm 574 */
																int BgL_arg2644z00_4213;

																BgL_arg2644z00_4213 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 574 */
																	long BgL_auxz00_4682;

																	BgL_auxz00_4682 =
																		(long) (BgL_arg2644z00_4213);
																	BgL_restz00_4212 =
																		(BgL_offsetz00_4209 % BgL_auxz00_4682);
															}}
															{	/* Cgen/emit_cop.scm 574 */

																BgL_method3847z00_4202 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4207,
																		(int) (BgL_modz00_4210)),
																	(int) (BgL_restz00_4212));
								}}}}}}}}
								BgL_res4519z00_4227 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4202)
									(BgL_method3847z00_4202, (obj_t) (BgL_arg4331z00_2155),
										BEOA));
							} BgL_res4519z00_4227;
					}}
					{	/* Cgen/emit_cop.scm 575 */
						obj_t BgL_arg4332z00_2156;

						{
							BgL_copz00_bglt BgL_auxz00_4693;

							BgL_auxz00_4693 = (BgL_copz00_bglt) (BgL_copz00_2149);
							BgL_arg4332z00_2156 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4693))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4332z00_2156);
					}
					bgl_display_string(BGl_string4565z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 577 */
						BgL_copz00_bglt BgL_arg4333z00_2157;

						BgL_arg4333z00_2157 =
							(((BgL_csetzd2exzd2itz00_bglt) CREF(BgL_copz00_2149))->
							BgL_bodyz00);
						{	/* Cgen/emit_cop.scm 577 */
							bool_t BgL_res4522z00_4258;

							{	/* Cgen/emit_cop.scm 577 */
								obj_t BgL_method3847z00_4233;

								{	/* Cgen/emit_cop.scm 577 */
									BgL_objectz00_bglt BgL_objz00_4234;

									BgL_objz00_4234 = (BgL_objectz00_bglt) (BgL_arg4333z00_2157);
									{	/* Cgen/emit_cop.scm 577 */
										long BgL_objzd2classzd2numz00_4235;

										BgL_objzd2classzd2numz00_4235 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4234);
										{	/* Cgen/emit_cop.scm 577 */
											obj_t BgL_arg2643z00_4236;

											BgL_arg2643z00_4236 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 577 */
												obj_t BgL_arrayz00_4238;

												int BgL_offsetz00_4239;

												BgL_arrayz00_4238 = BgL_arg2643z00_4236;
												BgL_offsetz00_4239 =
													(int) (BgL_objzd2classzd2numz00_4235);
												{	/* Cgen/emit_cop.scm 577 */
													long BgL_offsetz00_4240;

													BgL_offsetz00_4240 =
														((long) (BgL_offsetz00_4239) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 577 */
														long BgL_modz00_4241;

														{	/* Cgen/emit_cop.scm 577 */
															int BgL_arg2645z00_4242;

															BgL_arg2645z00_4242 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 577 */
																long BgL_auxz00_4707;

																BgL_auxz00_4707 = (long) (BgL_arg2645z00_4242);
																BgL_modz00_4241 =
																	(BgL_offsetz00_4240 / BgL_auxz00_4707);
														}}
														{	/* Cgen/emit_cop.scm 577 */
															long BgL_restz00_4243;

															{	/* Cgen/emit_cop.scm 577 */
																int BgL_arg2644z00_4244;

																BgL_arg2644z00_4244 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 577 */
																	long BgL_auxz00_4711;

																	BgL_auxz00_4711 =
																		(long) (BgL_arg2644z00_4244);
																	BgL_restz00_4243 =
																		(BgL_offsetz00_4240 % BgL_auxz00_4711);
															}}
															{	/* Cgen/emit_cop.scm 577 */

																BgL_method3847z00_4233 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4238,
																		(int) (BgL_modz00_4241)),
																	(int) (BgL_restz00_4243));
								}}}}}}}}
								BgL_res4522z00_4258 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4233)
									(BgL_method3847z00_4233, (obj_t) (BgL_arg4333z00_2157),
										BEOA));
							} BgL_res4522z00_4258;
					}}
					{	/* Cgen/emit_cop.scm 578 */
						obj_t BgL_arg4334z00_2158;

						{
							BgL_copz00_bglt BgL_auxz00_4722;

							BgL_auxz00_4722 = (BgL_copz00_bglt) (BgL_copz00_2149);
							BgL_arg4334z00_2158 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4722))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4334z00_2158);
					}
					bgl_display_string(BGl_string4566z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_4638 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_4638);
				}
			}
		}
	}



/* emit-cop-cbox-set!3895 */
	obj_t BGl_emitzd2copzd2cboxzd2setz123895zc0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4363, obj_t BgL_copz00_4364)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 554 */
			{
				BgL_cboxzd2setz12zc0_bglt BgL_copz00_2140;

				{	/* Cgen/emit_cop.scm 555 */
					bool_t BgL_auxz00_4729;

					BgL_copz00_2140 = (BgL_cboxzd2setz12zc0_bglt) (BgL_copz00_4364);
					{	/* Cgen/emit_cop.scm 556 */
						obj_t BgL_arg4325z00_2144;

						{
							BgL_copz00_bglt BgL_auxz00_4730;

							BgL_auxz00_4730 = (BgL_copz00_bglt) (BgL_copz00_2140);
							BgL_arg4325z00_2144 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4730))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4325z00_2144);
					}
					bgl_display_string(BGl_string4567z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 558 */
						BgL_copz00_bglt BgL_arg4326z00_2145;

						BgL_arg4326z00_2145 =
							(((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_copz00_2140))->BgL_varz00);
						{	/* Cgen/emit_cop.scm 558 */
							bool_t BgL_res4510z00_4134;

							{	/* Cgen/emit_cop.scm 558 */
								obj_t BgL_method3847z00_4109;

								{	/* Cgen/emit_cop.scm 558 */
									BgL_objectz00_bglt BgL_objz00_4110;

									BgL_objz00_4110 = (BgL_objectz00_bglt) (BgL_arg4326z00_2145);
									{	/* Cgen/emit_cop.scm 558 */
										long BgL_objzd2classzd2numz00_4111;

										BgL_objzd2classzd2numz00_4111 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4110);
										{	/* Cgen/emit_cop.scm 558 */
											obj_t BgL_arg2643z00_4112;

											BgL_arg2643z00_4112 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 558 */
												obj_t BgL_arrayz00_4114;

												int BgL_offsetz00_4115;

												BgL_arrayz00_4114 = BgL_arg2643z00_4112;
												BgL_offsetz00_4115 =
													(int) (BgL_objzd2classzd2numz00_4111);
												{	/* Cgen/emit_cop.scm 558 */
													long BgL_offsetz00_4116;

													BgL_offsetz00_4116 =
														((long) (BgL_offsetz00_4115) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 558 */
														long BgL_modz00_4117;

														{	/* Cgen/emit_cop.scm 558 */
															int BgL_arg2645z00_4118;

															BgL_arg2645z00_4118 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 558 */
																long BgL_auxz00_4744;

																BgL_auxz00_4744 = (long) (BgL_arg2645z00_4118);
																BgL_modz00_4117 =
																	(BgL_offsetz00_4116 / BgL_auxz00_4744);
														}}
														{	/* Cgen/emit_cop.scm 558 */
															long BgL_restz00_4119;

															{	/* Cgen/emit_cop.scm 558 */
																int BgL_arg2644z00_4120;

																BgL_arg2644z00_4120 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 558 */
																	long BgL_auxz00_4748;

																	BgL_auxz00_4748 =
																		(long) (BgL_arg2644z00_4120);
																	BgL_restz00_4119 =
																		(BgL_offsetz00_4116 % BgL_auxz00_4748);
															}}
															{	/* Cgen/emit_cop.scm 558 */

																BgL_method3847z00_4109 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4114,
																		(int) (BgL_modz00_4117)),
																	(int) (BgL_restz00_4119));
								}}}}}}}}
								BgL_res4510z00_4134 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4109)
									(BgL_method3847z00_4109, (obj_t) (BgL_arg4326z00_2145),
										BEOA));
							} BgL_res4510z00_4134;
					}}
					bgl_display_string(BGl_string4568z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 560 */
						BgL_copz00_bglt BgL_arg4327z00_2146;

						BgL_arg4327z00_2146 =
							(((BgL_cboxzd2setz12zc0_bglt) CREF(BgL_copz00_2140))->
							BgL_valuez00);
						{	/* Cgen/emit_cop.scm 560 */
							bool_t BgL_res4513z00_4164;

							{	/* Cgen/emit_cop.scm 560 */
								obj_t BgL_method3847z00_4139;

								{	/* Cgen/emit_cop.scm 560 */
									BgL_objectz00_bglt BgL_objz00_4140;

									BgL_objz00_4140 = (BgL_objectz00_bglt) (BgL_arg4327z00_2146);
									{	/* Cgen/emit_cop.scm 560 */
										long BgL_objzd2classzd2numz00_4141;

										BgL_objzd2classzd2numz00_4141 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4140);
										{	/* Cgen/emit_cop.scm 560 */
											obj_t BgL_arg2643z00_4142;

											BgL_arg2643z00_4142 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 560 */
												obj_t BgL_arrayz00_4144;

												int BgL_offsetz00_4145;

												BgL_arrayz00_4144 = BgL_arg2643z00_4142;
												BgL_offsetz00_4145 =
													(int) (BgL_objzd2classzd2numz00_4141);
												{	/* Cgen/emit_cop.scm 560 */
													long BgL_offsetz00_4146;

													BgL_offsetz00_4146 =
														((long) (BgL_offsetz00_4145) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 560 */
														long BgL_modz00_4147;

														{	/* Cgen/emit_cop.scm 560 */
															int BgL_arg2645z00_4148;

															BgL_arg2645z00_4148 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 560 */
																long BgL_auxz00_4769;

																BgL_auxz00_4769 = (long) (BgL_arg2645z00_4148);
																BgL_modz00_4147 =
																	(BgL_offsetz00_4146 / BgL_auxz00_4769);
														}}
														{	/* Cgen/emit_cop.scm 560 */
															long BgL_restz00_4149;

															{	/* Cgen/emit_cop.scm 560 */
																int BgL_arg2644z00_4150;

																BgL_arg2644z00_4150 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 560 */
																	long BgL_auxz00_4773;

																	BgL_auxz00_4773 =
																		(long) (BgL_arg2644z00_4150);
																	BgL_restz00_4149 =
																		(BgL_offsetz00_4146 % BgL_auxz00_4773);
															}}
															{	/* Cgen/emit_cop.scm 560 */

																BgL_method3847z00_4139 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4144,
																		(int) (BgL_modz00_4147)),
																	(int) (BgL_restz00_4149));
								}}}}}}}}
								BgL_res4513z00_4164 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4139)
									(BgL_method3847z00_4139, (obj_t) (BgL_arg4327z00_2146),
										BEOA));
							} BgL_res4513z00_4164;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_4729 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_4729);
				}
			}
		}
	}



/* emit-cop-cbox-ref3893 */
	obj_t BGl_emitzd2copzd2cboxzd2ref3893zd2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4365, obj_t BgL_copz00_4366)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 543 */
			{
				BgL_cboxzd2refzd2_bglt BgL_copz00_2132;

				{	/* Cgen/emit_cop.scm 544 */
					bool_t BgL_auxz00_4787;

					BgL_copz00_2132 = (BgL_cboxzd2refzd2_bglt) (BgL_copz00_4366);
					{	/* Cgen/emit_cop.scm 545 */
						obj_t BgL_arg4322z00_2136;

						{
							BgL_copz00_bglt BgL_auxz00_4788;

							BgL_auxz00_4788 = (BgL_copz00_bglt) (BgL_copz00_2132);
							BgL_arg4322z00_2136 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4788))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4322z00_2136);
					}
					bgl_display_string(BGl_string4569z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 547 */
						BgL_copz00_bglt BgL_arg4323z00_2137;

						BgL_arg4323z00_2137 =
							(((BgL_cboxzd2refzd2_bglt) CREF(BgL_copz00_2132))->BgL_varz00);
						{	/* Cgen/emit_cop.scm 547 */
							bool_t BgL_res4507z00_4101;

							{	/* Cgen/emit_cop.scm 547 */
								obj_t BgL_method3847z00_4076;

								{	/* Cgen/emit_cop.scm 547 */
									BgL_objectz00_bglt BgL_objz00_4077;

									BgL_objz00_4077 = (BgL_objectz00_bglt) (BgL_arg4323z00_2137);
									{	/* Cgen/emit_cop.scm 547 */
										long BgL_objzd2classzd2numz00_4078;

										BgL_objzd2classzd2numz00_4078 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4077);
										{	/* Cgen/emit_cop.scm 547 */
											obj_t BgL_arg2643z00_4079;

											BgL_arg2643z00_4079 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 547 */
												obj_t BgL_arrayz00_4081;

												int BgL_offsetz00_4082;

												BgL_arrayz00_4081 = BgL_arg2643z00_4079;
												BgL_offsetz00_4082 =
													(int) (BgL_objzd2classzd2numz00_4078);
												{	/* Cgen/emit_cop.scm 547 */
													long BgL_offsetz00_4083;

													BgL_offsetz00_4083 =
														((long) (BgL_offsetz00_4082) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 547 */
														long BgL_modz00_4084;

														{	/* Cgen/emit_cop.scm 547 */
															int BgL_arg2645z00_4085;

															BgL_arg2645z00_4085 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 547 */
																long BgL_auxz00_4802;

																BgL_auxz00_4802 = (long) (BgL_arg2645z00_4085);
																BgL_modz00_4084 =
																	(BgL_offsetz00_4083 / BgL_auxz00_4802);
														}}
														{	/* Cgen/emit_cop.scm 547 */
															long BgL_restz00_4086;

															{	/* Cgen/emit_cop.scm 547 */
																int BgL_arg2644z00_4087;

																BgL_arg2644z00_4087 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 547 */
																	long BgL_auxz00_4806;

																	BgL_auxz00_4806 =
																		(long) (BgL_arg2644z00_4087);
																	BgL_restz00_4086 =
																		(BgL_offsetz00_4083 % BgL_auxz00_4806);
															}}
															{	/* Cgen/emit_cop.scm 547 */

																BgL_method3847z00_4076 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4081,
																		(int) (BgL_modz00_4084)),
																	(int) (BgL_restz00_4086));
								}}}}}}}}
								BgL_res4507z00_4101 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4076)
									(BgL_method3847z00_4076, (obj_t) (BgL_arg4323z00_2137),
										BEOA));
							} BgL_res4507z00_4101;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_4787 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_4787);
				}
			}
		}
	}



/* emit-cop-cmake-box3891 */
	obj_t BGl_emitzd2copzd2cmakezd2box3891zd2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4367, obj_t BgL_copz00_4368)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 532 */
			{
				BgL_cmakezd2boxzd2_bglt BgL_copz00_2124;

				{	/* Cgen/emit_cop.scm 533 */
					bool_t BgL_auxz00_4820;

					BgL_copz00_2124 = (BgL_cmakezd2boxzd2_bglt) (BgL_copz00_4368);
					{	/* Cgen/emit_cop.scm 534 */
						obj_t BgL_arg4319z00_2128;

						{
							BgL_copz00_bglt BgL_auxz00_4821;

							BgL_auxz00_4821 = (BgL_copz00_bglt) (BgL_copz00_2124);
							BgL_arg4319z00_2128 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4821))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4319z00_2128);
					}
					bgl_display_string(BGl_string4570z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 536 */
						BgL_copz00_bglt BgL_arg4320z00_2129;

						BgL_arg4320z00_2129 =
							(((BgL_cmakezd2boxzd2_bglt) CREF(BgL_copz00_2124))->BgL_valuez00);
						{	/* Cgen/emit_cop.scm 536 */
							bool_t BgL_res4504z00_4068;

							{	/* Cgen/emit_cop.scm 536 */
								obj_t BgL_method3847z00_4043;

								{	/* Cgen/emit_cop.scm 536 */
									BgL_objectz00_bglt BgL_objz00_4044;

									BgL_objz00_4044 = (BgL_objectz00_bglt) (BgL_arg4320z00_2129);
									{	/* Cgen/emit_cop.scm 536 */
										long BgL_objzd2classzd2numz00_4045;

										BgL_objzd2classzd2numz00_4045 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4044);
										{	/* Cgen/emit_cop.scm 536 */
											obj_t BgL_arg2643z00_4046;

											BgL_arg2643z00_4046 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 536 */
												obj_t BgL_arrayz00_4048;

												int BgL_offsetz00_4049;

												BgL_arrayz00_4048 = BgL_arg2643z00_4046;
												BgL_offsetz00_4049 =
													(int) (BgL_objzd2classzd2numz00_4045);
												{	/* Cgen/emit_cop.scm 536 */
													long BgL_offsetz00_4050;

													BgL_offsetz00_4050 =
														((long) (BgL_offsetz00_4049) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 536 */
														long BgL_modz00_4051;

														{	/* Cgen/emit_cop.scm 536 */
															int BgL_arg2645z00_4052;

															BgL_arg2645z00_4052 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 536 */
																long BgL_auxz00_4835;

																BgL_auxz00_4835 = (long) (BgL_arg2645z00_4052);
																BgL_modz00_4051 =
																	(BgL_offsetz00_4050 / BgL_auxz00_4835);
														}}
														{	/* Cgen/emit_cop.scm 536 */
															long BgL_restz00_4053;

															{	/* Cgen/emit_cop.scm 536 */
																int BgL_arg2644z00_4054;

																BgL_arg2644z00_4054 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 536 */
																	long BgL_auxz00_4839;

																	BgL_auxz00_4839 =
																		(long) (BgL_arg2644z00_4054);
																	BgL_restz00_4053 =
																		(BgL_offsetz00_4050 % BgL_auxz00_4839);
															}}
															{	/* Cgen/emit_cop.scm 536 */

																BgL_method3847z00_4043 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4048,
																		(int) (BgL_modz00_4051)),
																	(int) (BgL_restz00_4053));
								}}}}}}}}
								BgL_res4504z00_4068 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4043)
									(BgL_method3847z00_4043, (obj_t) (BgL_arg4320z00_2129),
										BEOA));
							} BgL_res4504z00_4068;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_4820 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_4820);
				}
			}
		}
	}



/* emit-cop-cswitch3889 */
	obj_t BGl_emitzd2copzd2cswitch3889z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4369, obj_t BgL_copz00_4370)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 493 */
			{
				BgL_cswitchz00_bglt BgL_copz00_2092;

				{	/* Cgen/emit_cop.scm 494 */
					bool_t BgL_auxz00_4853;

					BgL_copz00_2092 = (BgL_cswitchz00_bglt) (BgL_copz00_4370);
					{	/* Cgen/emit_cop.scm 495 */
						obj_t BgL_arg4301z00_2096;

						{
							BgL_copz00_bglt BgL_auxz00_4854;

							BgL_auxz00_4854 = (BgL_copz00_bglt) (BgL_copz00_2092);
							BgL_arg4301z00_2096 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4854))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4301z00_2096);
					}
					bgl_display_string(BGl_string4571z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 497 */
						BgL_copz00_bglt BgL_arg4303z00_2097;

						BgL_arg4303z00_2097 =
							(((BgL_cswitchz00_bglt) CREF(BgL_copz00_2092))->BgL_testz00);
						{	/* Cgen/emit_cop.scm 497 */
							bool_t BgL_res4495z00_3954;

							{	/* Cgen/emit_cop.scm 497 */
								obj_t BgL_method3847z00_3929;

								{	/* Cgen/emit_cop.scm 497 */
									BgL_objectz00_bglt BgL_objz00_3930;

									BgL_objz00_3930 = (BgL_objectz00_bglt) (BgL_arg4303z00_2097);
									{	/* Cgen/emit_cop.scm 497 */
										long BgL_objzd2classzd2numz00_3931;

										BgL_objzd2classzd2numz00_3931 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3930);
										{	/* Cgen/emit_cop.scm 497 */
											obj_t BgL_arg2643z00_3932;

											BgL_arg2643z00_3932 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 497 */
												obj_t BgL_arrayz00_3934;

												int BgL_offsetz00_3935;

												BgL_arrayz00_3934 = BgL_arg2643z00_3932;
												BgL_offsetz00_3935 =
													(int) (BgL_objzd2classzd2numz00_3931);
												{	/* Cgen/emit_cop.scm 497 */
													long BgL_offsetz00_3936;

													BgL_offsetz00_3936 =
														((long) (BgL_offsetz00_3935) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 497 */
														long BgL_modz00_3937;

														{	/* Cgen/emit_cop.scm 497 */
															int BgL_arg2645z00_3938;

															BgL_arg2645z00_3938 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 497 */
																long BgL_auxz00_4868;

																BgL_auxz00_4868 = (long) (BgL_arg2645z00_3938);
																BgL_modz00_3937 =
																	(BgL_offsetz00_3936 / BgL_auxz00_4868);
														}}
														{	/* Cgen/emit_cop.scm 497 */
															long BgL_restz00_3939;

															{	/* Cgen/emit_cop.scm 497 */
																int BgL_arg2644z00_3940;

																BgL_arg2644z00_3940 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 497 */
																	long BgL_auxz00_4872;

																	BgL_auxz00_4872 =
																		(long) (BgL_arg2644z00_3940);
																	BgL_restz00_3939 =
																		(BgL_offsetz00_3936 % BgL_auxz00_4872);
															}}
															{	/* Cgen/emit_cop.scm 497 */

																BgL_method3847z00_3929 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3934,
																		(int) (BgL_modz00_3937)),
																	(int) (BgL_restz00_3939));
								}}}}}}}}
								BgL_res4495z00_3954 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3929)
									(BgL_method3847z00_3929, (obj_t) (BgL_arg4303z00_2097),
										BEOA));
							} BgL_res4495z00_3954;
					}}
					bgl_display_string(BGl_string4572z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{
						obj_t BgL_clausesz00_2100;

						{	/* Cgen/emit_cop.scm 500 */
							obj_t BgL_arg4304z00_2099;

							BgL_arg4304z00_2099 =
								(((BgL_cswitchz00_bglt) CREF(BgL_copz00_2092))->BgL_clausesz00);
							BgL_clausesz00_2100 = BgL_arg4304z00_2099;
						BgL_zc3anonymousza34305ze3z83_2101:
							{	/* Cgen/emit_cop.scm 501 */
								obj_t BgL_clausez00_2102;

								BgL_clausez00_2102 = CAR(BgL_clausesz00_2100);
								if ((CAR(BgL_clausez00_2102) == CNST_TABLE_REF(((long) 2))))
									{	/* Cgen/emit_cop.scm 503 */
										obj_t BgL_locz00_2104;

										{	/* Cgen/emit_cop.scm 503 */
											BgL_copz00_bglt BgL_obj3242z00_3961;

											{	/* Cgen/emit_cop.scm 503 */
												obj_t BgL_pairz00_3960;

												BgL_pairz00_3960 = BgL_clausez00_2102;
												BgL_obj3242z00_3961 =
													(BgL_copz00_bglt) (CDR(BgL_pairz00_3960));
											}
											BgL_locz00_2104 =
												(((BgL_copz00_bglt) CREF(BgL_obj3242z00_3961))->
												BgL_locz00);
										}
										BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
											(BgL_locz00_2104);
										bgl_display_string(BGl_string4573z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 506 */
											bool_t BgL_testz00_4895;

											{	/* Cgen/emit_cop.scm 506 */
												obj_t BgL_arg4308z00_2106;

												BgL_arg4308z00_2106 = CDR(BgL_clausez00_2102);
												{	/* Cgen/emit_cop.scm 506 */
													bool_t BgL_res4498z00_3991;

													{	/* Cgen/emit_cop.scm 506 */
														BgL_copz00_bglt BgL_copz00_3965;

														BgL_copz00_3965 =
															(BgL_copz00_bglt) (BgL_arg4308z00_2106);
														{	/* Cgen/emit_cop.scm 506 */
															obj_t BgL_method3847z00_3966;

															{	/* Cgen/emit_cop.scm 506 */
																BgL_objectz00_bglt BgL_objz00_3967;

																BgL_objz00_3967 =
																	(BgL_objectz00_bglt) (BgL_copz00_3965);
																{	/* Cgen/emit_cop.scm 506 */
																	long BgL_objzd2classzd2numz00_3968;

																	BgL_objzd2classzd2numz00_3968 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3967);
																	{	/* Cgen/emit_cop.scm 506 */
																		obj_t BgL_arg2643z00_3969;

																		BgL_arg2643z00_3969 =
																			PROCEDURE_REF
																			(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																			(int) (((long) 1)));
																		{	/* Cgen/emit_cop.scm 506 */
																			obj_t BgL_arrayz00_3971;

																			int BgL_offsetz00_3972;

																			BgL_arrayz00_3971 = BgL_arg2643z00_3969;
																			BgL_offsetz00_3972 =
																				(int) (BgL_objzd2classzd2numz00_3968);
																			{	/* Cgen/emit_cop.scm 506 */
																				long BgL_offsetz00_3973;

																				BgL_offsetz00_3973 =
																					(
																					(long) (BgL_offsetz00_3972) -
																					OBJECT_TYPE);
																				{	/* Cgen/emit_cop.scm 506 */
																					long BgL_modz00_3974;

																					{	/* Cgen/emit_cop.scm 506 */
																						int BgL_arg2645z00_3975;

																						BgL_arg2645z00_3975 =
																							(int) (((long) 16));
																						{	/* Cgen/emit_cop.scm 506 */
																							long BgL_auxz00_4906;

																							BgL_auxz00_4906 =
																								(long) (BgL_arg2645z00_3975);
																							BgL_modz00_3974 =
																								(BgL_offsetz00_3973 /
																								BgL_auxz00_4906);
																					}}
																					{	/* Cgen/emit_cop.scm 506 */
																						long BgL_restz00_3976;

																						{	/* Cgen/emit_cop.scm 506 */
																							int BgL_arg2644z00_3977;

																							BgL_arg2644z00_3977 =
																								(int) (((long) 16));
																							{	/* Cgen/emit_cop.scm 506 */
																								long BgL_auxz00_4910;

																								BgL_auxz00_4910 =
																									(long) (BgL_arg2644z00_3977);
																								BgL_restz00_3976 =
																									(BgL_offsetz00_3973 %
																									BgL_auxz00_4910);
																						}}
																						{	/* Cgen/emit_cop.scm 506 */

																							BgL_method3847z00_3966 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3971,
																									(int) (BgL_modz00_3974)),
																								(int) (BgL_restz00_3976));
															}}}}}}}}
															BgL_res4498z00_3991 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3966)
																(BgL_method3847z00_3966,
																	(obj_t) (BgL_copz00_3965), BEOA));
													}}
													BgL_testz00_4895 = BgL_res4498z00_3991;
											}}
											if (BgL_testz00_4895)
												{	/* Cgen/emit_cop.scm 506 */
													bgl_display_string
														(BGl_string4574z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BNIL;
												}
											else
												{	/* Cgen/emit_cop.scm 506 */
													BFALSE;
												}
										}
										bgl_display_string(BGl_string4566z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										BgL_auxz00_4853 = ((bool_t) 0);
									}
								else
									{	/* Cgen/emit_cop.scm 502 */
										{	/* Cgen/emit_cop.scm 515 */
											obj_t BgL_g3843z00_2108;

											BgL_g3843z00_2108 = CAR(BgL_clausez00_2102);
											{
												obj_t BgL_l3841z00_2110;

												BgL_l3841z00_2110 = BgL_g3843z00_2108;
											BgL_zc3anonymousza34310ze3z83_2111:
												if (PAIRP(BgL_l3841z00_2110))
													{	/* Cgen/emit_cop.scm 520 */
														{	/* Cgen/emit_cop.scm 519 */
															obj_t BgL_tz00_2113;

															BgL_tz00_2113 = CAR(BgL_l3841z00_2110);
															bgl_display_string
																(BGl_string4575z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00
																(BgL_tz00_2113);
															bgl_display_string
																(BGl_string4576z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															bgl_display_char(((unsigned char) '\n'),
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}
														{
															obj_t BgL_l3841z00_4931;

															BgL_l3841z00_4931 = CDR(BgL_l3841z00_2110);
															BgL_l3841z00_2110 = BgL_l3841z00_4931;
															goto BgL_zc3anonymousza34310ze3z83_2111;
														}
													}
												else
													{	/* Cgen/emit_cop.scm 520 */
														((bool_t) 1);
													}
											}
										}
										{	/* Cgen/emit_cop.scm 521 */
											bool_t BgL_testz00_4933;

											{	/* Cgen/emit_cop.scm 521 */
												obj_t BgL_arg4314z00_2117;

												BgL_arg4314z00_2117 = CDR(BgL_clausez00_2102);
												{	/* Cgen/emit_cop.scm 521 */
													bool_t BgL_res4501z00_4032;

													{	/* Cgen/emit_cop.scm 521 */
														BgL_copz00_bglt BgL_copz00_4006;

														BgL_copz00_4006 =
															(BgL_copz00_bglt) (BgL_arg4314z00_2117);
														{	/* Cgen/emit_cop.scm 521 */
															obj_t BgL_method3847z00_4007;

															{	/* Cgen/emit_cop.scm 521 */
																BgL_objectz00_bglt BgL_objz00_4008;

																BgL_objz00_4008 =
																	(BgL_objectz00_bglt) (BgL_copz00_4006);
																{	/* Cgen/emit_cop.scm 521 */
																	long BgL_objzd2classzd2numz00_4009;

																	BgL_objzd2classzd2numz00_4009 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_4008);
																	{	/* Cgen/emit_cop.scm 521 */
																		obj_t BgL_arg2643z00_4010;

																		BgL_arg2643z00_4010 =
																			PROCEDURE_REF
																			(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																			(int) (((long) 1)));
																		{	/* Cgen/emit_cop.scm 521 */
																			obj_t BgL_arrayz00_4012;

																			int BgL_offsetz00_4013;

																			BgL_arrayz00_4012 = BgL_arg2643z00_4010;
																			BgL_offsetz00_4013 =
																				(int) (BgL_objzd2classzd2numz00_4009);
																			{	/* Cgen/emit_cop.scm 521 */
																				long BgL_offsetz00_4014;

																				BgL_offsetz00_4014 =
																					(
																					(long) (BgL_offsetz00_4013) -
																					OBJECT_TYPE);
																				{	/* Cgen/emit_cop.scm 521 */
																					long BgL_modz00_4015;

																					{	/* Cgen/emit_cop.scm 521 */
																						int BgL_arg2645z00_4016;

																						BgL_arg2645z00_4016 =
																							(int) (((long) 16));
																						{	/* Cgen/emit_cop.scm 521 */
																							long BgL_auxz00_4944;

																							BgL_auxz00_4944 =
																								(long) (BgL_arg2645z00_4016);
																							BgL_modz00_4015 =
																								(BgL_offsetz00_4014 /
																								BgL_auxz00_4944);
																					}}
																					{	/* Cgen/emit_cop.scm 521 */
																						long BgL_restz00_4017;

																						{	/* Cgen/emit_cop.scm 521 */
																							int BgL_arg2644z00_4018;

																							BgL_arg2644z00_4018 =
																								(int) (((long) 16));
																							{	/* Cgen/emit_cop.scm 521 */
																								long BgL_auxz00_4948;

																								BgL_auxz00_4948 =
																									(long) (BgL_arg2644z00_4018);
																								BgL_restz00_4017 =
																									(BgL_offsetz00_4014 %
																									BgL_auxz00_4948);
																						}}
																						{	/* Cgen/emit_cop.scm 521 */

																							BgL_method3847z00_4007 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_4012,
																									(int) (BgL_modz00_4015)),
																								(int) (BgL_restz00_4017));
															}}}}}}}}
															BgL_res4501z00_4032 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_4007)
																(BgL_method3847z00_4007,
																	(obj_t) (BgL_copz00_4006), BEOA));
													}}
													BgL_testz00_4933 = BgL_res4501z00_4032;
											}}
											if (BgL_testz00_4933)
												{	/* Cgen/emit_cop.scm 521 */
													bgl_display_string
														(BGl_string4574z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BNIL;
												}
											else
												{	/* Cgen/emit_cop.scm 521 */
													BFALSE;
												}
										}
										bgl_display_string(BGl_string4577z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{
											obj_t BgL_clausesz00_4961;

											BgL_clausesz00_4961 = CDR(BgL_clausesz00_2100);
											BgL_clausesz00_2100 = BgL_clausesz00_4961;
											goto BgL_zc3anonymousza34305ze3z83_2101;
										}
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_4853);
				}
			}
		}
	}



/* emit-cop-cfail3887 */
	obj_t BGl_emitzd2copzd2cfail3887z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4371,
		obj_t BgL_copz00_4372)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 462 */
			{
				BgL_cfailz00_bglt BgL_copz00_2063;

				{	/* Cgen/emit_cop.scm 463 */
					bool_t BgL_auxz00_4965;

					BgL_copz00_2063 = (BgL_cfailz00_bglt) (BgL_copz00_4372);
					{	/* Cgen/emit_cop.scm 464 */
						obj_t BgL_arg4275z00_2067;

						{
							BgL_copz00_bglt BgL_auxz00_4966;

							BgL_auxz00_4966 = (BgL_copz00_bglt) (BgL_copz00_2063);
							BgL_arg4275z00_2067 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_4966))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4275z00_2067);
					}
					if (CBOOL(BGl_za2bfalseza2z00zzcgen_emitzd2copzd2))
						{	/* Cgen/emit_cop.scm 465 */
							BFALSE;
						}
					else
						{	/* Cgen/emit_cop.scm 465 */
							BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 =
								BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
										3)), CNST_TABLE_REF(((long) 4)));
						}
					{	/* Cgen/emit_cop.scm 468 */
						bool_t BgL_testz00_4975;

						{	/* Cgen/emit_cop.scm 468 */
							bool_t BgL_testz00_4976;

							{	/* Cgen/emit_cop.scm 468 */
								BgL_copz00_bglt BgL_arg4299z00_2089;

								BgL_arg4299z00_2089 =
									(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->BgL_procz00);
								{	/* Cgen/emit_cop.scm 468 */
									obj_t BgL_obj3364z00_3725;

									BgL_obj3364z00_3725 = (obj_t) (BgL_arg4299z00_2089);
									BgL_testz00_4976 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj3364z00_3725,
										BGl_varcz00zzcgen_copz00);
							}}
							if (BgL_testz00_4976)
								{	/* Cgen/emit_cop.scm 468 */
									bool_t BgL_testz00_4980;

									{	/* Cgen/emit_cop.scm 468 */
										BgL_variablez00_bglt BgL_arg4297z00_2087;

										{	/* Cgen/emit_cop.scm 468 */
											BgL_varcz00_bglt BgL_obj3354z00_3727;

											BgL_obj3354z00_3727 =
												(BgL_varcz00_bglt) (
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
													BgL_procz00));
											BgL_arg4297z00_2087 =
												(((BgL_varcz00_bglt) CREF(BgL_obj3354z00_3727))->
												BgL_variablez00);
										}
										BgL_testz00_4980 =
											(
											(obj_t) (BgL_arg4297z00_2087) ==
											BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
									}
									if (BgL_testz00_4980)
										{	/* Cgen/emit_cop.scm 469 */
											bool_t BgL_testz00_4986;

											{	/* Cgen/emit_cop.scm 469 */
												BgL_copz00_bglt BgL_arg4296z00_2086;

												BgL_arg4296z00_2086 =
													(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
													BgL_msgz00);
												{	/* Cgen/emit_cop.scm 469 */
													obj_t BgL_obj3364z00_3729;

													BgL_obj3364z00_3729 = (obj_t) (BgL_arg4296z00_2086);
													BgL_testz00_4986 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3364z00_3729,
														BGl_varcz00zzcgen_copz00);
												}
											}
											if (BgL_testz00_4986)
												{	/* Cgen/emit_cop.scm 469 */
													bool_t BgL_testz00_4990;

													{	/* Cgen/emit_cop.scm 469 */
														BgL_variablez00_bglt BgL_arg4294z00_2084;

														{	/* Cgen/emit_cop.scm 469 */
															BgL_varcz00_bglt BgL_obj3354z00_3731;

															BgL_obj3354z00_3731 =
																(BgL_varcz00_bglt) (
																(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
																	BgL_msgz00));
															BgL_arg4294z00_2084 =
																(((BgL_varcz00_bglt)
																	CREF(BgL_obj3354z00_3731))->BgL_variablez00);
														}
														BgL_testz00_4990 =
															(
															(obj_t) (BgL_arg4294z00_2084) ==
															BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
													}
													if (BgL_testz00_4990)
														{	/* Cgen/emit_cop.scm 470 */
															bool_t BgL_testz00_4996;

															{	/* Cgen/emit_cop.scm 470 */
																BgL_copz00_bglt BgL_arg4293z00_2083;

																BgL_arg4293z00_2083 =
																	(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
																	BgL_objz00);
																{	/* Cgen/emit_cop.scm 470 */
																	obj_t BgL_obj3364z00_3733;

																	BgL_obj3364z00_3733 =
																		(obj_t) (BgL_arg4293z00_2083);
																	BgL_testz00_4996 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj3364z00_3733,
																		BGl_varcz00zzcgen_copz00);
																}
															}
															if (BgL_testz00_4996)
																{	/* Cgen/emit_cop.scm 470 */
																	BgL_variablez00_bglt BgL_arg4291z00_2081;

																	{	/* Cgen/emit_cop.scm 470 */
																		BgL_varcz00_bglt BgL_obj3354z00_3735;

																		BgL_obj3354z00_3735 =
																			(BgL_varcz00_bglt) (
																			(((BgL_cfailz00_bglt)
																					CREF(BgL_copz00_2063))->BgL_objz00));
																		BgL_arg4291z00_2081 =
																			(((BgL_varcz00_bglt)
																				CREF(BgL_obj3354z00_3735))->
																			BgL_variablez00);
																	}
																	BgL_testz00_4975 =
																		(
																		(obj_t) (BgL_arg4291z00_2081) ==
																		BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
																}
															else
																{	/* Cgen/emit_cop.scm 470 */
																	BgL_testz00_4975 = ((bool_t) 0);
																}
														}
													else
														{	/* Cgen/emit_cop.scm 469 */
															BgL_testz00_4975 = ((bool_t) 0);
														}
												}
											else
												{	/* Cgen/emit_cop.scm 469 */
													BgL_testz00_4975 = ((bool_t) 0);
												}
										}
									else
										{	/* Cgen/emit_cop.scm 468 */
											BgL_testz00_4975 = ((bool_t) 0);
										}
								}
							else
								{	/* Cgen/emit_cop.scm 468 */
									BgL_testz00_4975 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_4975)
							{	/* Cgen/emit_cop.scm 468 */
								bgl_display_string(BGl_string4578z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
						else
							{	/* Cgen/emit_cop.scm 468 */
								if (
									((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) <=
										((long) 0)))
									{	/* Cgen/emit_cop.scm 472 */
										bgl_display_string(BGl_string4579z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 474 */
											BgL_copz00_bglt BgL_arg4278z00_2070;

											BgL_arg4278z00_2070 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_procz00);
											{	/* Cgen/emit_cop.scm 474 */
												bool_t BgL_res4477z00_3769;

												{	/* Cgen/emit_cop.scm 474 */
													obj_t BgL_method3847z00_3744;

													{	/* Cgen/emit_cop.scm 474 */
														BgL_objectz00_bglt BgL_objz00_3745;

														BgL_objz00_3745 =
															(BgL_objectz00_bglt) (BgL_arg4278z00_2070);
														{	/* Cgen/emit_cop.scm 474 */
															long BgL_objzd2classzd2numz00_3746;

															BgL_objzd2classzd2numz00_3746 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3745);
															{	/* Cgen/emit_cop.scm 474 */
																obj_t BgL_arg2643z00_3747;

																BgL_arg2643z00_3747 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 474 */
																	obj_t BgL_arrayz00_3749;

																	int BgL_offsetz00_3750;

																	BgL_arrayz00_3749 = BgL_arg2643z00_3747;
																	BgL_offsetz00_3750 =
																		(int) (BgL_objzd2classzd2numz00_3746);
																	{	/* Cgen/emit_cop.scm 474 */
																		long BgL_offsetz00_3751;

																		BgL_offsetz00_3751 =
																			(
																			(long) (BgL_offsetz00_3750) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 474 */
																			long BgL_modz00_3752;

																			{	/* Cgen/emit_cop.scm 474 */
																				int BgL_arg2645z00_3753;

																				BgL_arg2645z00_3753 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 474 */
																					long BgL_auxz00_5019;

																					BgL_auxz00_5019 =
																						(long) (BgL_arg2645z00_3753);
																					BgL_modz00_3752 =
																						(BgL_offsetz00_3751 /
																						BgL_auxz00_5019);
																			}}
																			{	/* Cgen/emit_cop.scm 474 */
																				long BgL_restz00_3754;

																				{	/* Cgen/emit_cop.scm 474 */
																					int BgL_arg2644z00_3755;

																					BgL_arg2644z00_3755 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 474 */
																						long BgL_auxz00_5023;

																						BgL_auxz00_5023 =
																							(long) (BgL_arg2644z00_3755);
																						BgL_restz00_3754 =
																							(BgL_offsetz00_3751 %
																							BgL_auxz00_5023);
																				}}
																				{	/* Cgen/emit_cop.scm 474 */

																					BgL_method3847z00_3744 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3749,
																							(int) (BgL_modz00_3752)),
																						(int) (BgL_restz00_3754));
													}}}}}}}}
													BgL_res4477z00_3769 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3744)
														(BgL_method3847z00_3744,
															(obj_t) (BgL_arg4278z00_2070), BEOA));
												} BgL_res4477z00_3769;
										}}
										bgl_display_char(((unsigned char) ','),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 476 */
											BgL_copz00_bglt BgL_arg4279z00_2071;

											BgL_arg4279z00_2071 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_msgz00);
											{	/* Cgen/emit_cop.scm 476 */
												bool_t BgL_res4480z00_3799;

												{	/* Cgen/emit_cop.scm 476 */
													obj_t BgL_method3847z00_3774;

													{	/* Cgen/emit_cop.scm 476 */
														BgL_objectz00_bglt BgL_objz00_3775;

														BgL_objz00_3775 =
															(BgL_objectz00_bglt) (BgL_arg4279z00_2071);
														{	/* Cgen/emit_cop.scm 476 */
															long BgL_objzd2classzd2numz00_3776;

															BgL_objzd2classzd2numz00_3776 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3775);
															{	/* Cgen/emit_cop.scm 476 */
																obj_t BgL_arg2643z00_3777;

																BgL_arg2643z00_3777 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 476 */
																	obj_t BgL_arrayz00_3779;

																	int BgL_offsetz00_3780;

																	BgL_arrayz00_3779 = BgL_arg2643z00_3777;
																	BgL_offsetz00_3780 =
																		(int) (BgL_objzd2classzd2numz00_3776);
																	{	/* Cgen/emit_cop.scm 476 */
																		long BgL_offsetz00_3781;

																		BgL_offsetz00_3781 =
																			(
																			(long) (BgL_offsetz00_3780) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 476 */
																			long BgL_modz00_3782;

																			{	/* Cgen/emit_cop.scm 476 */
																				int BgL_arg2645z00_3783;

																				BgL_arg2645z00_3783 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 476 */
																					long BgL_auxz00_5044;

																					BgL_auxz00_5044 =
																						(long) (BgL_arg2645z00_3783);
																					BgL_modz00_3782 =
																						(BgL_offsetz00_3781 /
																						BgL_auxz00_5044);
																			}}
																			{	/* Cgen/emit_cop.scm 476 */
																				long BgL_restz00_3784;

																				{	/* Cgen/emit_cop.scm 476 */
																					int BgL_arg2644z00_3785;

																					BgL_arg2644z00_3785 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 476 */
																						long BgL_auxz00_5048;

																						BgL_auxz00_5048 =
																							(long) (BgL_arg2644z00_3785);
																						BgL_restz00_3784 =
																							(BgL_offsetz00_3781 %
																							BgL_auxz00_5048);
																				}}
																				{	/* Cgen/emit_cop.scm 476 */

																					BgL_method3847z00_3774 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3779,
																							(int) (BgL_modz00_3782)),
																						(int) (BgL_restz00_3784));
													}}}}}}}}
													BgL_res4480z00_3799 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3774)
														(BgL_method3847z00_3774,
															(obj_t) (BgL_arg4279z00_2071), BEOA));
												} BgL_res4480z00_3799;
										}}
										bgl_display_char(((unsigned char) ','),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 478 */
											BgL_copz00_bglt BgL_arg4280z00_2072;

											BgL_arg4280z00_2072 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_objz00);
											{	/* Cgen/emit_cop.scm 478 */
												bool_t BgL_res4483z00_3829;

												{	/* Cgen/emit_cop.scm 478 */
													obj_t BgL_method3847z00_3804;

													{	/* Cgen/emit_cop.scm 478 */
														BgL_objectz00_bglt BgL_objz00_3805;

														BgL_objz00_3805 =
															(BgL_objectz00_bglt) (BgL_arg4280z00_2072);
														{	/* Cgen/emit_cop.scm 478 */
															long BgL_objzd2classzd2numz00_3806;

															BgL_objzd2classzd2numz00_3806 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3805);
															{	/* Cgen/emit_cop.scm 478 */
																obj_t BgL_arg2643z00_3807;

																BgL_arg2643z00_3807 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 478 */
																	obj_t BgL_arrayz00_3809;

																	int BgL_offsetz00_3810;

																	BgL_arrayz00_3809 = BgL_arg2643z00_3807;
																	BgL_offsetz00_3810 =
																		(int) (BgL_objzd2classzd2numz00_3806);
																	{	/* Cgen/emit_cop.scm 478 */
																		long BgL_offsetz00_3811;

																		BgL_offsetz00_3811 =
																			(
																			(long) (BgL_offsetz00_3810) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 478 */
																			long BgL_modz00_3812;

																			{	/* Cgen/emit_cop.scm 478 */
																				int BgL_arg2645z00_3813;

																				BgL_arg2645z00_3813 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 478 */
																					long BgL_auxz00_5069;

																					BgL_auxz00_5069 =
																						(long) (BgL_arg2645z00_3813);
																					BgL_modz00_3812 =
																						(BgL_offsetz00_3811 /
																						BgL_auxz00_5069);
																			}}
																			{	/* Cgen/emit_cop.scm 478 */
																				long BgL_restz00_3814;

																				{	/* Cgen/emit_cop.scm 478 */
																					int BgL_arg2644z00_3815;

																					BgL_arg2644z00_3815 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 478 */
																						long BgL_auxz00_5073;

																						BgL_auxz00_5073 =
																							(long) (BgL_arg2644z00_3815);
																						BgL_restz00_3814 =
																							(BgL_offsetz00_3811 %
																							BgL_auxz00_5073);
																				}}
																				{	/* Cgen/emit_cop.scm 478 */

																					BgL_method3847z00_3804 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3809,
																							(int) (BgL_modz00_3812)),
																						(int) (BgL_restz00_3814));
													}}}}}}}}
													BgL_res4483z00_3829 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3804)
														(BgL_method3847z00_3804,
															(obj_t) (BgL_arg4280z00_2072), BEOA));
												} BgL_res4483z00_3829;
										}}
										bgl_display_string(BGl_string4580z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									}
								else
									{	/* Cgen/emit_cop.scm 472 */
										bgl_display_string(BGl_string4581z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 482 */
											BgL_copz00_bglt BgL_arg4282z00_2073;

											BgL_arg4282z00_2073 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_procz00);
											{	/* Cgen/emit_cop.scm 482 */
												bool_t BgL_res4486z00_3861;

												{	/* Cgen/emit_cop.scm 482 */
													obj_t BgL_method3847z00_3836;

													{	/* Cgen/emit_cop.scm 482 */
														BgL_objectz00_bglt BgL_objz00_3837;

														BgL_objz00_3837 =
															(BgL_objectz00_bglt) (BgL_arg4282z00_2073);
														{	/* Cgen/emit_cop.scm 482 */
															long BgL_objzd2classzd2numz00_3838;

															BgL_objzd2classzd2numz00_3838 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3837);
															{	/* Cgen/emit_cop.scm 482 */
																obj_t BgL_arg2643z00_3839;

																BgL_arg2643z00_3839 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 482 */
																	obj_t BgL_arrayz00_3841;

																	int BgL_offsetz00_3842;

																	BgL_arrayz00_3841 = BgL_arg2643z00_3839;
																	BgL_offsetz00_3842 =
																		(int) (BgL_objzd2classzd2numz00_3838);
																	{	/* Cgen/emit_cop.scm 482 */
																		long BgL_offsetz00_3843;

																		BgL_offsetz00_3843 =
																			(
																			(long) (BgL_offsetz00_3842) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 482 */
																			long BgL_modz00_3844;

																			{	/* Cgen/emit_cop.scm 482 */
																				int BgL_arg2645z00_3845;

																				BgL_arg2645z00_3845 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 482 */
																					long BgL_auxz00_5095;

																					BgL_auxz00_5095 =
																						(long) (BgL_arg2645z00_3845);
																					BgL_modz00_3844 =
																						(BgL_offsetz00_3843 /
																						BgL_auxz00_5095);
																			}}
																			{	/* Cgen/emit_cop.scm 482 */
																				long BgL_restz00_3846;

																				{	/* Cgen/emit_cop.scm 482 */
																					int BgL_arg2644z00_3847;

																					BgL_arg2644z00_3847 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 482 */
																						long BgL_auxz00_5099;

																						BgL_auxz00_5099 =
																							(long) (BgL_arg2644z00_3847);
																						BgL_restz00_3846 =
																							(BgL_offsetz00_3843 %
																							BgL_auxz00_5099);
																				}}
																				{	/* Cgen/emit_cop.scm 482 */

																					BgL_method3847z00_3836 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3841,
																							(int) (BgL_modz00_3844)),
																						(int) (BgL_restz00_3846));
													}}}}}}}}
													BgL_res4486z00_3861 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3836)
														(BgL_method3847z00_3836,
															(obj_t) (BgL_arg4282z00_2073), BEOA));
												} BgL_res4486z00_3861;
										}}
										bgl_display_char(((unsigned char) ','),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 484 */
											BgL_copz00_bglt BgL_arg4283z00_2074;

											BgL_arg4283z00_2074 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_msgz00);
											{	/* Cgen/emit_cop.scm 484 */
												bool_t BgL_res4489z00_3891;

												{	/* Cgen/emit_cop.scm 484 */
													obj_t BgL_method3847z00_3866;

													{	/* Cgen/emit_cop.scm 484 */
														BgL_objectz00_bglt BgL_objz00_3867;

														BgL_objz00_3867 =
															(BgL_objectz00_bglt) (BgL_arg4283z00_2074);
														{	/* Cgen/emit_cop.scm 484 */
															long BgL_objzd2classzd2numz00_3868;

															BgL_objzd2classzd2numz00_3868 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3867);
															{	/* Cgen/emit_cop.scm 484 */
																obj_t BgL_arg2643z00_3869;

																BgL_arg2643z00_3869 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 484 */
																	obj_t BgL_arrayz00_3871;

																	int BgL_offsetz00_3872;

																	BgL_arrayz00_3871 = BgL_arg2643z00_3869;
																	BgL_offsetz00_3872 =
																		(int) (BgL_objzd2classzd2numz00_3868);
																	{	/* Cgen/emit_cop.scm 484 */
																		long BgL_offsetz00_3873;

																		BgL_offsetz00_3873 =
																			(
																			(long) (BgL_offsetz00_3872) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 484 */
																			long BgL_modz00_3874;

																			{	/* Cgen/emit_cop.scm 484 */
																				int BgL_arg2645z00_3875;

																				BgL_arg2645z00_3875 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 484 */
																					long BgL_auxz00_5120;

																					BgL_auxz00_5120 =
																						(long) (BgL_arg2645z00_3875);
																					BgL_modz00_3874 =
																						(BgL_offsetz00_3873 /
																						BgL_auxz00_5120);
																			}}
																			{	/* Cgen/emit_cop.scm 484 */
																				long BgL_restz00_3876;

																				{	/* Cgen/emit_cop.scm 484 */
																					int BgL_arg2644z00_3877;

																					BgL_arg2644z00_3877 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 484 */
																						long BgL_auxz00_5124;

																						BgL_auxz00_5124 =
																							(long) (BgL_arg2644z00_3877);
																						BgL_restz00_3876 =
																							(BgL_offsetz00_3873 %
																							BgL_auxz00_5124);
																				}}
																				{	/* Cgen/emit_cop.scm 484 */

																					BgL_method3847z00_3866 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3871,
																							(int) (BgL_modz00_3874)),
																						(int) (BgL_restz00_3876));
													}}}}}}}}
													BgL_res4489z00_3891 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3866)
														(BgL_method3847z00_3866,
															(obj_t) (BgL_arg4283z00_2074), BEOA));
												} BgL_res4489z00_3891;
										}}
										bgl_display_char(((unsigned char) ','),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 486 */
											BgL_copz00_bglt BgL_arg4285z00_2075;

											BgL_arg4285z00_2075 =
												(((BgL_cfailz00_bglt) CREF(BgL_copz00_2063))->
												BgL_objz00);
											{	/* Cgen/emit_cop.scm 486 */
												bool_t BgL_res4492z00_3921;

												{	/* Cgen/emit_cop.scm 486 */
													obj_t BgL_method3847z00_3896;

													{	/* Cgen/emit_cop.scm 486 */
														BgL_objectz00_bglt BgL_objz00_3897;

														BgL_objz00_3897 =
															(BgL_objectz00_bglt) (BgL_arg4285z00_2075);
														{	/* Cgen/emit_cop.scm 486 */
															long BgL_objzd2classzd2numz00_3898;

															BgL_objzd2classzd2numz00_3898 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3897);
															{	/* Cgen/emit_cop.scm 486 */
																obj_t BgL_arg2643z00_3899;

																BgL_arg2643z00_3899 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 486 */
																	obj_t BgL_arrayz00_3901;

																	int BgL_offsetz00_3902;

																	BgL_arrayz00_3901 = BgL_arg2643z00_3899;
																	BgL_offsetz00_3902 =
																		(int) (BgL_objzd2classzd2numz00_3898);
																	{	/* Cgen/emit_cop.scm 486 */
																		long BgL_offsetz00_3903;

																		BgL_offsetz00_3903 =
																			(
																			(long) (BgL_offsetz00_3902) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 486 */
																			long BgL_modz00_3904;

																			{	/* Cgen/emit_cop.scm 486 */
																				int BgL_arg2645z00_3905;

																				BgL_arg2645z00_3905 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 486 */
																					long BgL_auxz00_5145;

																					BgL_auxz00_5145 =
																						(long) (BgL_arg2645z00_3905);
																					BgL_modz00_3904 =
																						(BgL_offsetz00_3903 /
																						BgL_auxz00_5145);
																			}}
																			{	/* Cgen/emit_cop.scm 486 */
																				long BgL_restz00_3906;

																				{	/* Cgen/emit_cop.scm 486 */
																					int BgL_arg2644z00_3907;

																					BgL_arg2644z00_3907 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 486 */
																						long BgL_auxz00_5149;

																						BgL_auxz00_5149 =
																							(long) (BgL_arg2644z00_3907);
																						BgL_restz00_3906 =
																							(BgL_offsetz00_3903 %
																							BgL_auxz00_5149);
																				}}
																				{	/* Cgen/emit_cop.scm 486 */

																					BgL_method3847z00_3896 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3901,
																							(int) (BgL_modz00_3904)),
																						(int) (BgL_restz00_3906));
													}}}}}}}}
													BgL_res4492z00_3921 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3896)
														(BgL_method3847z00_3896,
															(obj_t) (BgL_arg4285z00_2075), BEOA));
												} BgL_res4492z00_3921;
										}}
										bgl_display_string(BGl_string4582z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}}}
					BgL_auxz00_4965 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_4965);
				}
			}
		}
	}



/* emit-cop-capp3885 */
	obj_t BGl_emitzd2copzd2capp3885z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4373,
		obj_t BgL_copz00_4374)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 399 */
			{
				BgL_cappz00_bglt BgL_copz00_2008;

				BgL_copz00_2008 = (BgL_cappz00_bglt) (BgL_copz00_4374);
				{

					{	/* Cgen/emit_cop.scm 441 */
						BgL_variablez00_bglt BgL_funz00_2014;

						obj_t BgL_locz00_2015;

						{	/* Cgen/emit_cop.scm 441 */
							BgL_varcz00_bglt BgL_obj3354z00_3430;

							BgL_obj3354z00_3430 =
								(BgL_varcz00_bglt) (
								(((BgL_cappz00_bglt) CREF(BgL_copz00_2008))->BgL_funz00));
							BgL_funz00_2014 =
								(((BgL_varcz00_bglt) CREF(BgL_obj3354z00_3430))->
								BgL_variablez00);
						}
						{
							BgL_copz00_bglt BgL_auxz00_5166;

							BgL_auxz00_5166 = (BgL_copz00_bglt) (BgL_copz00_2008);
							BgL_locz00_2015 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_5166))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_locz00_2015);
						{	/* Cgen/emit_cop.scm 445 */
							bool_t BgL_testz00_5170;

							{	/* Cgen/emit_cop.scm 445 */
								bool_t BgL_testz00_5171;

								{	/* Cgen/emit_cop.scm 445 */
									BgL_valuez00_bglt BgL_arg4243z00_2023;

									BgL_arg4243z00_2023 =
										(((BgL_variablez00_bglt) CREF(BgL_funz00_2014))->
										BgL_valuez00);
									{	/* Cgen/emit_cop.scm 445 */
										obj_t BgL_obj2019z00_3433;

										BgL_obj2019z00_3433 = (obj_t) (BgL_arg4243z00_2023);
										BgL_testz00_5171 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_3433,
											BGl_cfunz00zzast_varz00);
									}
								}
								if (BgL_testz00_5171)
									{	/* Cgen/emit_cop.scm 445 */
										BgL_cfunz00_bglt BgL_obj1977z00_3435;

										BgL_obj1977z00_3435 =
											(BgL_cfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_funz00_2014))->
												BgL_valuez00));
										BgL_testz00_5170 =
											(((BgL_cfunz00_bglt) CREF(BgL_obj1977z00_3435))->
											BgL_infixzf3zf3);
									}
								else
									{	/* Cgen/emit_cop.scm 445 */
										BgL_testz00_5170 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_5170)
								{	/* Cgen/emit_cop.scm 446 */
									bool_t BgL_auxz00_5178;

									{	/* Cgen/emit_cop.scm 401 */
										obj_t BgL_actualsz00_2026;

										BgL_actualsz00_2026 =
											(((BgL_cappz00_bglt) CREF(BgL_copz00_2008))->BgL_argsz00);
										bgl_display_char(((unsigned char) '('),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										if (NULLP(BgL_actualsz00_2026))
											{	/* Cgen/emit_cop.scm 405 */
												BgL_copz00_bglt BgL_arg4247z00_2028;

												BgL_arg4247z00_2028 =
													(((BgL_cappz00_bglt) CREF(BgL_copz00_2008))->
													BgL_funz00);
												{	/* Cgen/emit_cop.scm 405 */
													bool_t BgL_res4450z00_3471;

													{	/* Cgen/emit_cop.scm 405 */
														obj_t BgL_method3847z00_3446;

														{	/* Cgen/emit_cop.scm 405 */
															BgL_objectz00_bglt BgL_objz00_3447;

															BgL_objz00_3447 =
																(BgL_objectz00_bglt) (BgL_arg4247z00_2028);
															{	/* Cgen/emit_cop.scm 405 */
																long BgL_objzd2classzd2numz00_3448;

																BgL_objzd2classzd2numz00_3448 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3447);
																{	/* Cgen/emit_cop.scm 405 */
																	obj_t BgL_arg2643z00_3449;

																	BgL_arg2643z00_3449 =
																		PROCEDURE_REF
																		(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																		(int) (((long) 1)));
																	{	/* Cgen/emit_cop.scm 405 */
																		obj_t BgL_arrayz00_3451;

																		int BgL_offsetz00_3452;

																		BgL_arrayz00_3451 = BgL_arg2643z00_3449;
																		BgL_offsetz00_3452 =
																			(int) (BgL_objzd2classzd2numz00_3448);
																		{	/* Cgen/emit_cop.scm 405 */
																			long BgL_offsetz00_3453;

																			BgL_offsetz00_3453 =
																				(
																				(long) (BgL_offsetz00_3452) -
																				OBJECT_TYPE);
																			{	/* Cgen/emit_cop.scm 405 */
																				long BgL_modz00_3454;

																				{	/* Cgen/emit_cop.scm 405 */
																					int BgL_arg2645z00_3455;

																					BgL_arg2645z00_3455 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 405 */
																						long BgL_auxz00_5192;

																						BgL_auxz00_5192 =
																							(long) (BgL_arg2645z00_3455);
																						BgL_modz00_3454 =
																							(BgL_offsetz00_3453 /
																							BgL_auxz00_5192);
																				}}
																				{	/* Cgen/emit_cop.scm 405 */
																					long BgL_restz00_3456;

																					{	/* Cgen/emit_cop.scm 405 */
																						int BgL_arg2644z00_3457;

																						BgL_arg2644z00_3457 =
																							(int) (((long) 16));
																						{	/* Cgen/emit_cop.scm 405 */
																							long BgL_auxz00_5196;

																							BgL_auxz00_5196 =
																								(long) (BgL_arg2644z00_3457);
																							BgL_restz00_3456 =
																								(BgL_offsetz00_3453 %
																								BgL_auxz00_5196);
																					}}
																					{	/* Cgen/emit_cop.scm 405 */

																						BgL_method3847z00_3446 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3451,
																								(int) (BgL_modz00_3454)),
																							(int) (BgL_restz00_3456));
														}}}}}}}}
														BgL_res4450z00_3471 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3446)
															(BgL_method3847z00_3446,
																(obj_t) (BgL_arg4247z00_2028), BEOA));
													}
													BBOOL(BgL_res4450z00_3471);
											}}
										else
											{	/* Cgen/emit_cop.scm 404 */
												if (NULLP(CDR(BgL_actualsz00_2026)))
													{	/* Cgen/emit_cop.scm 406 */
														{	/* Cgen/emit_cop.scm 407 */
															obj_t BgL_arg4249z00_2030;

															BgL_arg4249z00_2030 = CAR(BgL_actualsz00_2026);
															{	/* Cgen/emit_cop.scm 407 */
																bool_t BgL_res4453z00_3501;

																{	/* Cgen/emit_cop.scm 407 */
																	BgL_copz00_bglt BgL_copz00_3475;

																	BgL_copz00_3475 =
																		(BgL_copz00_bglt) (BgL_arg4249z00_2030);
																	{	/* Cgen/emit_cop.scm 407 */
																		obj_t BgL_method3847z00_3476;

																		{	/* Cgen/emit_cop.scm 407 */
																			BgL_objectz00_bglt BgL_objz00_3477;

																			BgL_objz00_3477 =
																				(BgL_objectz00_bglt) (BgL_copz00_3475);
																			{	/* Cgen/emit_cop.scm 407 */
																				long BgL_objzd2classzd2numz00_3478;

																				BgL_objzd2classzd2numz00_3478 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3477);
																				{	/* Cgen/emit_cop.scm 407 */
																					obj_t BgL_arg2643z00_3479;

																					BgL_arg2643z00_3479 =
																						PROCEDURE_REF
																						(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																						(int) (((long) 1)));
																					{	/* Cgen/emit_cop.scm 407 */
																						obj_t BgL_arrayz00_3481;

																						int BgL_offsetz00_3482;

																						BgL_arrayz00_3481 =
																							BgL_arg2643z00_3479;
																						BgL_offsetz00_3482 =
																							(int)
																							(BgL_objzd2classzd2numz00_3478);
																						{	/* Cgen/emit_cop.scm 407 */
																							long BgL_offsetz00_3483;

																							BgL_offsetz00_3483 =
																								(
																								(long) (BgL_offsetz00_3482) -
																								OBJECT_TYPE);
																							{	/* Cgen/emit_cop.scm 407 */
																								long BgL_modz00_3484;

																								{	/* Cgen/emit_cop.scm 407 */
																									int BgL_arg2645z00_3485;

																									BgL_arg2645z00_3485 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 407 */
																										long BgL_auxz00_5221;

																										BgL_auxz00_5221 =
																											(long)
																											(BgL_arg2645z00_3485);
																										BgL_modz00_3484 =
																											(BgL_offsetz00_3483 /
																											BgL_auxz00_5221);
																								}}
																								{	/* Cgen/emit_cop.scm 407 */
																									long BgL_restz00_3486;

																									{	/* Cgen/emit_cop.scm 407 */
																										int BgL_arg2644z00_3487;

																										BgL_arg2644z00_3487 =
																											(int) (((long) 16));
																										{	/* Cgen/emit_cop.scm 407 */
																											long BgL_auxz00_5225;

																											BgL_auxz00_5225 =
																												(long)
																												(BgL_arg2644z00_3487);
																											BgL_restz00_3486 =
																												(BgL_offsetz00_3483 %
																												BgL_auxz00_5225);
																									}}
																									{	/* Cgen/emit_cop.scm 407 */

																										BgL_method3847z00_3476 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3481,
																												(int)
																												(BgL_modz00_3484)),
																											(int) (BgL_restz00_3486));
																		}}}}}}}}
																		BgL_res4453z00_3501 =
																			CBOOL(PROCEDURE_ENTRY
																			(BgL_method3847z00_3476)
																			(BgL_method3847z00_3476,
																				(obj_t) (BgL_copz00_3475), BEOA));
																}} BgL_res4453z00_3501;
														}}
														{	/* Cgen/emit_cop.scm 408 */
															BgL_copz00_bglt BgL_arg4251z00_2031;

															BgL_arg4251z00_2031 =
																(((BgL_cappz00_bglt) CREF(BgL_copz00_2008))->
																BgL_funz00);
															{	/* Cgen/emit_cop.scm 408 */
																bool_t BgL_res4456z00_3529;

																{	/* Cgen/emit_cop.scm 408 */
																	obj_t BgL_method3847z00_3504;

																	{	/* Cgen/emit_cop.scm 408 */
																		BgL_objectz00_bglt BgL_objz00_3505;

																		BgL_objz00_3505 =
																			(BgL_objectz00_bglt)
																			(BgL_arg4251z00_2031);
																		{	/* Cgen/emit_cop.scm 408 */
																			long BgL_objzd2classzd2numz00_3506;

																			BgL_objzd2classzd2numz00_3506 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_3505);
																			{	/* Cgen/emit_cop.scm 408 */
																				obj_t BgL_arg2643z00_3507;

																				BgL_arg2643z00_3507 =
																					PROCEDURE_REF
																					(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																					(int) (((long) 1)));
																				{	/* Cgen/emit_cop.scm 408 */
																					obj_t BgL_arrayz00_3509;

																					int BgL_offsetz00_3510;

																					BgL_arrayz00_3509 =
																						BgL_arg2643z00_3507;
																					BgL_offsetz00_3510 =
																						(int)
																						(BgL_objzd2classzd2numz00_3506);
																					{	/* Cgen/emit_cop.scm 408 */
																						long BgL_offsetz00_3511;

																						BgL_offsetz00_3511 =
																							(
																							(long) (BgL_offsetz00_3510) -
																							OBJECT_TYPE);
																						{	/* Cgen/emit_cop.scm 408 */
																							long BgL_modz00_3512;

																							{	/* Cgen/emit_cop.scm 408 */
																								int BgL_arg2645z00_3513;

																								BgL_arg2645z00_3513 =
																									(int) (((long) 16));
																								{	/* Cgen/emit_cop.scm 408 */
																									long BgL_auxz00_5245;

																									BgL_auxz00_5245 =
																										(long)
																										(BgL_arg2645z00_3513);
																									BgL_modz00_3512 =
																										(BgL_offsetz00_3511 /
																										BgL_auxz00_5245);
																							}}
																							{	/* Cgen/emit_cop.scm 408 */
																								long BgL_restz00_3514;

																								{	/* Cgen/emit_cop.scm 408 */
																									int BgL_arg2644z00_3515;

																									BgL_arg2644z00_3515 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 408 */
																										long BgL_auxz00_5249;

																										BgL_auxz00_5249 =
																											(long)
																											(BgL_arg2644z00_3515);
																										BgL_restz00_3514 =
																											(BgL_offsetz00_3511 %
																											BgL_auxz00_5249);
																								}}
																								{	/* Cgen/emit_cop.scm 408 */

																									BgL_method3847z00_3504 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_3509,
																											(int) (BgL_modz00_3512)),
																										(int) (BgL_restz00_3514));
																	}}}}}}}}
																	BgL_res4456z00_3529 =
																		CBOOL(PROCEDURE_ENTRY
																		(BgL_method3847z00_3504)
																		(BgL_method3847z00_3504,
																			(obj_t) (BgL_arg4251z00_2031), BEOA));
																}
																BBOOL(BgL_res4456z00_3529);
													}}}
												else
													{	/* Cgen/emit_cop.scm 409 */
														bool_t BgL_testz00_5261;

														{	/* Cgen/emit_cop.scm 409 */
															obj_t BgL_auxz00_5262;

															{	/* Cgen/emit_cop.scm 409 */
																obj_t BgL_pairz00_3530;

																BgL_pairz00_3530 = BgL_actualsz00_2026;
																BgL_auxz00_5262 = CDR(CDR(BgL_pairz00_3530));
															}
															BgL_testz00_5261 = NULLP(BgL_auxz00_5262);
														}
														if (BgL_testz00_5261)
															{	/* Cgen/emit_cop.scm 409 */
																{	/* Cgen/emit_cop.scm 410 */
																	obj_t BgL_arg4253z00_2033;

																	BgL_arg4253z00_2033 =
																		CAR(BgL_actualsz00_2026);
																	{	/* Cgen/emit_cop.scm 410 */
																		bool_t BgL_res4459z00_3562;

																		{	/* Cgen/emit_cop.scm 410 */
																			BgL_copz00_bglt BgL_copz00_3536;

																			BgL_copz00_3536 =
																				(BgL_copz00_bglt) (BgL_arg4253z00_2033);
																			{	/* Cgen/emit_cop.scm 410 */
																				obj_t BgL_method3847z00_3537;

																				{	/* Cgen/emit_cop.scm 410 */
																					BgL_objectz00_bglt BgL_objz00_3538;

																					BgL_objz00_3538 =
																						(BgL_objectz00_bglt)
																						(BgL_copz00_3536);
																					{	/* Cgen/emit_cop.scm 410 */
																						long BgL_objzd2classzd2numz00_3539;

																						BgL_objzd2classzd2numz00_3539 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3538);
																						{	/* Cgen/emit_cop.scm 410 */
																							obj_t BgL_arg2643z00_3540;

																							BgL_arg2643z00_3540 =
																								PROCEDURE_REF
																								(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																								(int) (((long) 1)));
																							{	/* Cgen/emit_cop.scm 410 */
																								obj_t BgL_arrayz00_3542;

																								int BgL_offsetz00_3543;

																								BgL_arrayz00_3542 =
																									BgL_arg2643z00_3540;
																								BgL_offsetz00_3543 =
																									(int)
																									(BgL_objzd2classzd2numz00_3539);
																								{	/* Cgen/emit_cop.scm 410 */
																									long BgL_offsetz00_3544;

																									BgL_offsetz00_3544 =
																										(
																										(long) (BgL_offsetz00_3543)
																										- OBJECT_TYPE);
																									{	/* Cgen/emit_cop.scm 410 */
																										long BgL_modz00_3545;

																										{	/* Cgen/emit_cop.scm 410 */
																											int BgL_arg2645z00_3546;

																											BgL_arg2645z00_3546 =
																												(int) (((long) 16));
																											{	/* Cgen/emit_cop.scm 410 */
																												long BgL_auxz00_5276;

																												BgL_auxz00_5276 =
																													(long)
																													(BgL_arg2645z00_3546);
																												BgL_modz00_3545 =
																													(BgL_offsetz00_3544 /
																													BgL_auxz00_5276);
																										}}
																										{	/* Cgen/emit_cop.scm 410 */
																											long BgL_restz00_3547;

																											{	/* Cgen/emit_cop.scm 410 */
																												int BgL_arg2644z00_3548;

																												BgL_arg2644z00_3548 =
																													(int) (((long) 16));
																												{	/* Cgen/emit_cop.scm 410 */
																													long BgL_auxz00_5280;

																													BgL_auxz00_5280 =
																														(long)
																														(BgL_arg2644z00_3548);
																													BgL_restz00_3547 =
																														(BgL_offsetz00_3544
																														% BgL_auxz00_5280);
																											}}
																											{	/* Cgen/emit_cop.scm 410 */

																												BgL_method3847z00_3537 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3542,
																														(int)
																														(BgL_modz00_3545)),
																													(int)
																													(BgL_restz00_3547));
																				}}}}}}}}
																				BgL_res4459z00_3562 =
																					CBOOL(PROCEDURE_ENTRY
																					(BgL_method3847z00_3537)
																					(BgL_method3847z00_3537,
																						(obj_t) (BgL_copz00_3536), BEOA));
																		}} BgL_res4459z00_3562;
																}}
																{	/* Cgen/emit_cop.scm 411 */
																	BgL_copz00_bglt BgL_arg4254z00_2034;

																	BgL_arg4254z00_2034 =
																		(((BgL_cappz00_bglt)
																			CREF(BgL_copz00_2008))->BgL_funz00);
																	{	/* Cgen/emit_cop.scm 411 */
																		bool_t BgL_res4462z00_3590;

																		{	/* Cgen/emit_cop.scm 411 */
																			obj_t BgL_method3847z00_3565;

																			{	/* Cgen/emit_cop.scm 411 */
																				BgL_objectz00_bglt BgL_objz00_3566;

																				BgL_objz00_3566 =
																					(BgL_objectz00_bglt)
																					(BgL_arg4254z00_2034);
																				{	/* Cgen/emit_cop.scm 411 */
																					long BgL_objzd2classzd2numz00_3567;

																					BgL_objzd2classzd2numz00_3567 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_3566);
																					{	/* Cgen/emit_cop.scm 411 */
																						obj_t BgL_arg2643z00_3568;

																						BgL_arg2643z00_3568 =
																							PROCEDURE_REF
																							(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																							(int) (((long) 1)));
																						{	/* Cgen/emit_cop.scm 411 */
																							obj_t BgL_arrayz00_3570;

																							int BgL_offsetz00_3571;

																							BgL_arrayz00_3570 =
																								BgL_arg2643z00_3568;
																							BgL_offsetz00_3571 =
																								(int)
																								(BgL_objzd2classzd2numz00_3567);
																							{	/* Cgen/emit_cop.scm 411 */
																								long BgL_offsetz00_3572;

																								BgL_offsetz00_3572 =
																									(
																									(long) (BgL_offsetz00_3571) -
																									OBJECT_TYPE);
																								{	/* Cgen/emit_cop.scm 411 */
																									long BgL_modz00_3573;

																									{	/* Cgen/emit_cop.scm 411 */
																										int BgL_arg2645z00_3574;

																										BgL_arg2645z00_3574 =
																											(int) (((long) 16));
																										{	/* Cgen/emit_cop.scm 411 */
																											long BgL_auxz00_5300;

																											BgL_auxz00_5300 =
																												(long)
																												(BgL_arg2645z00_3574);
																											BgL_modz00_3573 =
																												(BgL_offsetz00_3572 /
																												BgL_auxz00_5300);
																									}}
																									{	/* Cgen/emit_cop.scm 411 */
																										long BgL_restz00_3575;

																										{	/* Cgen/emit_cop.scm 411 */
																											int BgL_arg2644z00_3576;

																											BgL_arg2644z00_3576 =
																												(int) (((long) 16));
																											{	/* Cgen/emit_cop.scm 411 */
																												long BgL_auxz00_5304;

																												BgL_auxz00_5304 =
																													(long)
																													(BgL_arg2644z00_3576);
																												BgL_restz00_3575 =
																													(BgL_offsetz00_3572 %
																													BgL_auxz00_5304);
																										}}
																										{	/* Cgen/emit_cop.scm 411 */

																											BgL_method3847z00_3565 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_3570,
																													(int)
																													(BgL_modz00_3573)),
																												(int)
																												(BgL_restz00_3575));
																			}}}}}}}}
																			BgL_res4462z00_3590 =
																				CBOOL(PROCEDURE_ENTRY
																				(BgL_method3847z00_3565)
																				(BgL_method3847z00_3565,
																					(obj_t) (BgL_arg4254z00_2034), BEOA));
																		} BgL_res4462z00_3590;
																}}
																{	/* Cgen/emit_cop.scm 412 */
																	obj_t BgL_arg4255z00_2035;

																	{	/* Cgen/emit_cop.scm 412 */
																		obj_t BgL_pairz00_3591;

																		BgL_pairz00_3591 = BgL_actualsz00_2026;
																		BgL_arg4255z00_2035 =
																			CAR(CDR(BgL_pairz00_3591));
																	}
																	{	/* Cgen/emit_cop.scm 412 */
																		bool_t BgL_res4465z00_3621;

																		{	/* Cgen/emit_cop.scm 412 */
																			BgL_copz00_bglt BgL_copz00_3595;

																			BgL_copz00_3595 =
																				(BgL_copz00_bglt) (BgL_arg4255z00_2035);
																			{	/* Cgen/emit_cop.scm 412 */
																				obj_t BgL_method3847z00_3596;

																				{	/* Cgen/emit_cop.scm 412 */
																					BgL_objectz00_bglt BgL_objz00_3597;

																					BgL_objz00_3597 =
																						(BgL_objectz00_bglt)
																						(BgL_copz00_3595);
																					{	/* Cgen/emit_cop.scm 412 */
																						long BgL_objzd2classzd2numz00_3598;

																						BgL_objzd2classzd2numz00_3598 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3597);
																						{	/* Cgen/emit_cop.scm 412 */
																							obj_t BgL_arg2643z00_3599;

																							BgL_arg2643z00_3599 =
																								PROCEDURE_REF
																								(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																								(int) (((long) 1)));
																							{	/* Cgen/emit_cop.scm 412 */
																								obj_t BgL_arrayz00_3601;

																								int BgL_offsetz00_3602;

																								BgL_arrayz00_3601 =
																									BgL_arg2643z00_3599;
																								BgL_offsetz00_3602 =
																									(int)
																									(BgL_objzd2classzd2numz00_3598);
																								{	/* Cgen/emit_cop.scm 412 */
																									long BgL_offsetz00_3603;

																									BgL_offsetz00_3603 =
																										(
																										(long) (BgL_offsetz00_3602)
																										- OBJECT_TYPE);
																									{	/* Cgen/emit_cop.scm 412 */
																										long BgL_modz00_3604;

																										{	/* Cgen/emit_cop.scm 412 */
																											int BgL_arg2645z00_3605;

																											BgL_arg2645z00_3605 =
																												(int) (((long) 16));
																											{	/* Cgen/emit_cop.scm 412 */
																												long BgL_auxz00_5326;

																												BgL_auxz00_5326 =
																													(long)
																													(BgL_arg2645z00_3605);
																												BgL_modz00_3604 =
																													(BgL_offsetz00_3603 /
																													BgL_auxz00_5326);
																										}}
																										{	/* Cgen/emit_cop.scm 412 */
																											long BgL_restz00_3606;

																											{	/* Cgen/emit_cop.scm 412 */
																												int BgL_arg2644z00_3607;

																												BgL_arg2644z00_3607 =
																													(int) (((long) 16));
																												{	/* Cgen/emit_cop.scm 412 */
																													long BgL_auxz00_5330;

																													BgL_auxz00_5330 =
																														(long)
																														(BgL_arg2644z00_3607);
																													BgL_restz00_3606 =
																														(BgL_offsetz00_3603
																														% BgL_auxz00_5330);
																											}}
																											{	/* Cgen/emit_cop.scm 412 */

																												BgL_method3847z00_3596 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3601,
																														(int)
																														(BgL_modz00_3604)),
																													(int)
																													(BgL_restz00_3606));
																				}}}}}}}}
																				BgL_res4465z00_3621 =
																					CBOOL(PROCEDURE_ENTRY
																					(BgL_method3847z00_3596)
																					(BgL_method3847z00_3596,
																						(obj_t) (BgL_copz00_3595), BEOA));
																		}}
																		BBOOL(BgL_res4465z00_3621);
															}}}
														else
															{	/* Cgen/emit_cop.scm 414 */
																obj_t BgL_arg4257z00_2036;

																obj_t BgL_arg4259z00_2038;

																BgL_arg4257z00_2036 =
																	CNST_TABLE_REF(((long) 5));
																{	/* Cgen/emit_cop.scm 415 */
																	BgL_variablez00_bglt BgL_arg4260z00_2039;

																	{	/* Cgen/emit_cop.scm 415 */
																		BgL_varcz00_bglt BgL_obj3354z00_3623;

																		BgL_obj3354z00_3623 =
																			(BgL_varcz00_bglt) (
																			(((BgL_cappz00_bglt)
																					CREF(BgL_copz00_2008))->BgL_funz00));
																		BgL_arg4260z00_2039 =
																			(((BgL_varcz00_bglt)
																				CREF(BgL_obj3354z00_3623))->
																			BgL_variablez00);
																	}
																	BgL_arg4259z00_2038 =
																		BGl_shapez00zztools_shapez00(
																		(obj_t) (BgL_arg4260z00_2039));
																}
																BGl_errorz00zz__errorz00(BgL_arg4257z00_2036,
																	BGl_string4583z00zzcgen_emitzd2copzd2,
																	BgL_arg4259z00_2038);
											}}}
										bgl_display_char(((unsigned char) ')'),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										BgL_auxz00_5178 = ((bool_t) 1);
									}
									return BBOOL(BgL_auxz00_5178);
								}
							else
								{	/* Cgen/emit_cop.scm 447 */
									bool_t BgL_testz00_5351;

									{	/* Cgen/emit_cop.scm 447 */
										bool_t BgL_testz00_5352;

										{	/* Cgen/emit_cop.scm 447 */
											BgL_valuez00_bglt BgL_arg4240z00_2020;

											BgL_arg4240z00_2020 =
												(((BgL_variablez00_bglt) CREF(BgL_funz00_2014))->
												BgL_valuez00);
											{	/* Cgen/emit_cop.scm 447 */
												obj_t BgL_obj2019z00_3437;

												BgL_obj2019z00_3437 = (obj_t) (BgL_arg4240z00_2020);
												BgL_testz00_5352 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_3437,
													BGl_cfunz00zzast_varz00);
											}
										}
										if (BgL_testz00_5352)
											{	/* Cgen/emit_cop.scm 447 */
												BgL_cfunz00_bglt BgL_obj1976z00_3439;

												BgL_obj1976z00_3439 =
													(BgL_cfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_funz00_2014))->
														BgL_valuez00));
												BgL_testz00_5351 =
													(((BgL_cfunz00_bglt) CREF(BgL_obj1976z00_3439))->
													BgL_macrozf3zf3);
											}
										else
											{	/* Cgen/emit_cop.scm 447 */
												BgL_testz00_5351 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_5351)
										{	/* Cgen/emit_cop.scm 447 */
											{	/* Cgen/emit_cop.scm 437 */
												obj_t BgL_oz00_2057;

												BgL_oz00_2057 =
													BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
												BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00
													= BTRUE;
												BGl_emitzd2prefixzd2cappz00zzcgen_emitzd2copzd2
													(BgL_copz00_2008);
												return
													(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00
													= BgL_oz00_2057, BUNSPEC);
											}
										}
									else
										{	/* Cgen/emit_cop.scm 447 */
											return
												BBOOL(BGl_emitzd2prefixzd2cappz00zzcgen_emitzd2copzd2
												(BgL_copz00_2008));
										}
								}
						}
					}
				}
			}
		}
	}



/* emit-prefix-capp */
	bool_t BGl_emitzd2prefixzd2cappz00zzcgen_emitzd2copzd2(BgL_cappz00_bglt
		BgL_copz00_4412)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 435 */
			{	/* Cgen/emit_cop.scm 419 */
				obj_t BgL_actualsz00_2044;

				BgL_actualsz00_2044 =
					(((BgL_cappz00_bglt) CREF(BgL_copz00_4412))->BgL_argsz00);
				{	/* Cgen/emit_cop.scm 420 */
					BgL_copz00_bglt BgL_arg4265z00_2045;

					BgL_arg4265z00_2045 =
						(((BgL_cappz00_bglt) CREF(BgL_copz00_4412))->BgL_funz00);
					{	/* Cgen/emit_cop.scm 420 */
						bool_t BgL_res4468z00_3654;

						{	/* Cgen/emit_cop.scm 420 */
							obj_t BgL_method3847z00_3629;

							{	/* Cgen/emit_cop.scm 420 */
								BgL_objectz00_bglt BgL_objz00_3630;

								BgL_objz00_3630 = (BgL_objectz00_bglt) (BgL_arg4265z00_2045);
								{	/* Cgen/emit_cop.scm 420 */
									long BgL_objzd2classzd2numz00_3631;

									BgL_objzd2classzd2numz00_3631 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3630);
									{	/* Cgen/emit_cop.scm 420 */
										obj_t BgL_arg2643z00_3632;

										BgL_arg2643z00_3632 =
											PROCEDURE_REF(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
											(int) (((long) 1)));
										{	/* Cgen/emit_cop.scm 420 */
											obj_t BgL_arrayz00_3634;

											int BgL_offsetz00_3635;

											BgL_arrayz00_3634 = BgL_arg2643z00_3632;
											BgL_offsetz00_3635 =
												(int) (BgL_objzd2classzd2numz00_3631);
											{	/* Cgen/emit_cop.scm 420 */
												long BgL_offsetz00_3636;

												BgL_offsetz00_3636 =
													((long) (BgL_offsetz00_3635) - OBJECT_TYPE);
												{	/* Cgen/emit_cop.scm 420 */
													long BgL_modz00_3637;

													{	/* Cgen/emit_cop.scm 420 */
														int BgL_arg2645z00_3638;

														BgL_arg2645z00_3638 = (int) (((long) 16));
														{	/* Cgen/emit_cop.scm 420 */
															long BgL_auxz00_5373;

															BgL_auxz00_5373 = (long) (BgL_arg2645z00_3638);
															BgL_modz00_3637 =
																(BgL_offsetz00_3636 / BgL_auxz00_5373);
													}}
													{	/* Cgen/emit_cop.scm 420 */
														long BgL_restz00_3639;

														{	/* Cgen/emit_cop.scm 420 */
															int BgL_arg2644z00_3640;

															BgL_arg2644z00_3640 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 420 */
																long BgL_auxz00_5377;

																BgL_auxz00_5377 = (long) (BgL_arg2644z00_3640);
																BgL_restz00_3639 =
																	(BgL_offsetz00_3636 % BgL_auxz00_5377);
														}}
														{	/* Cgen/emit_cop.scm 420 */

															BgL_method3847z00_3629 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3634,
																	(int) (BgL_modz00_3637)),
																(int) (BgL_restz00_3639));
							}}}}}}}}
							BgL_res4468z00_3654 =
								CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3629)
								(BgL_method3847z00_3629, (obj_t) (BgL_arg4265z00_2045), BEOA));
						} BgL_res4468z00_3654;
				}}
				bgl_display_char(((unsigned char) '('),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				if (NULLP(BgL_actualsz00_2044))
					{	/* Cgen/emit_cop.scm 422 */
						bgl_display_char(((unsigned char) ')'),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						return ((bool_t) 1);
					}
				else
					{
						obj_t BgL_actualsz00_2048;

						BgL_actualsz00_2048 = BgL_actualsz00_2044;
					BgL_zc3anonymousza34267ze3z83_2049:
						if (NULLP(CDR(BgL_actualsz00_2048)))
							{	/* Cgen/emit_cop.scm 427 */
								{	/* Cgen/emit_cop.scm 429 */
									obj_t BgL_arg4269z00_2051;

									BgL_arg4269z00_2051 = CAR(BgL_actualsz00_2048);
									{	/* Cgen/emit_cop.scm 429 */
										bool_t BgL_res4471z00_3689;

										{	/* Cgen/emit_cop.scm 429 */
											BgL_copz00_bglt BgL_copz00_3663;

											BgL_copz00_3663 = (BgL_copz00_bglt) (BgL_arg4269z00_2051);
											{	/* Cgen/emit_cop.scm 429 */
												obj_t BgL_method3847z00_3664;

												{	/* Cgen/emit_cop.scm 429 */
													BgL_objectz00_bglt BgL_objz00_3665;

													BgL_objz00_3665 =
														(BgL_objectz00_bglt) (BgL_copz00_3663);
													{	/* Cgen/emit_cop.scm 429 */
														long BgL_objzd2classzd2numz00_3666;

														BgL_objzd2classzd2numz00_3666 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3665);
														{	/* Cgen/emit_cop.scm 429 */
															obj_t BgL_arg2643z00_3667;

															BgL_arg2643z00_3667 =
																PROCEDURE_REF
																(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																(int) (((long) 1)));
															{	/* Cgen/emit_cop.scm 429 */
																obj_t BgL_arrayz00_3669;

																int BgL_offsetz00_3670;

																BgL_arrayz00_3669 = BgL_arg2643z00_3667;
																BgL_offsetz00_3670 =
																	(int) (BgL_objzd2classzd2numz00_3666);
																{	/* Cgen/emit_cop.scm 429 */
																	long BgL_offsetz00_3671;

																	BgL_offsetz00_3671 =
																		((long) (BgL_offsetz00_3670) - OBJECT_TYPE);
																	{	/* Cgen/emit_cop.scm 429 */
																		long BgL_modz00_3672;

																		{	/* Cgen/emit_cop.scm 429 */
																			int BgL_arg2645z00_3673;

																			BgL_arg2645z00_3673 = (int) (((long) 16));
																			{	/* Cgen/emit_cop.scm 429 */
																				long BgL_auxz00_5405;

																				BgL_auxz00_5405 =
																					(long) (BgL_arg2645z00_3673);
																				BgL_modz00_3672 =
																					(BgL_offsetz00_3671 /
																					BgL_auxz00_5405);
																		}}
																		{	/* Cgen/emit_cop.scm 429 */
																			long BgL_restz00_3674;

																			{	/* Cgen/emit_cop.scm 429 */
																				int BgL_arg2644z00_3675;

																				BgL_arg2644z00_3675 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 429 */
																					long BgL_auxz00_5409;

																					BgL_auxz00_5409 =
																						(long) (BgL_arg2644z00_3675);
																					BgL_restz00_3674 =
																						(BgL_offsetz00_3671 %
																						BgL_auxz00_5409);
																			}}
																			{	/* Cgen/emit_cop.scm 429 */

																				BgL_method3847z00_3664 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3669,
																						(int) (BgL_modz00_3672)),
																					(int) (BgL_restz00_3674));
												}}}}}}}}
												BgL_res4471z00_3689 =
													CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3664)
													(BgL_method3847z00_3664, (obj_t) (BgL_copz00_3663),
														BEOA));
										}} BgL_res4471z00_3689;
								}}
								bgl_display_char(((unsigned char) ')'),
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								return ((bool_t) 1);
							}
						else
							{	/* Cgen/emit_cop.scm 427 */
								{	/* Cgen/emit_cop.scm 433 */
									obj_t BgL_arg4270z00_2052;

									BgL_arg4270z00_2052 = CAR(BgL_actualsz00_2048);
									{	/* Cgen/emit_cop.scm 433 */
										bool_t BgL_res4474z00_3719;

										{	/* Cgen/emit_cop.scm 433 */
											BgL_copz00_bglt BgL_copz00_3693;

											BgL_copz00_3693 = (BgL_copz00_bglt) (BgL_arg4270z00_2052);
											{	/* Cgen/emit_cop.scm 433 */
												obj_t BgL_method3847z00_3694;

												{	/* Cgen/emit_cop.scm 433 */
													BgL_objectz00_bglt BgL_objz00_3695;

													BgL_objz00_3695 =
														(BgL_objectz00_bglt) (BgL_copz00_3693);
													{	/* Cgen/emit_cop.scm 433 */
														long BgL_objzd2classzd2numz00_3696;

														BgL_objzd2classzd2numz00_3696 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3695);
														{	/* Cgen/emit_cop.scm 433 */
															obj_t BgL_arg2643z00_3697;

															BgL_arg2643z00_3697 =
																PROCEDURE_REF
																(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																(int) (((long) 1)));
															{	/* Cgen/emit_cop.scm 433 */
																obj_t BgL_arrayz00_3699;

																int BgL_offsetz00_3700;

																BgL_arrayz00_3699 = BgL_arg2643z00_3697;
																BgL_offsetz00_3700 =
																	(int) (BgL_objzd2classzd2numz00_3696);
																{	/* Cgen/emit_cop.scm 433 */
																	long BgL_offsetz00_3701;

																	BgL_offsetz00_3701 =
																		((long) (BgL_offsetz00_3700) - OBJECT_TYPE);
																	{	/* Cgen/emit_cop.scm 433 */
																		long BgL_modz00_3702;

																		{	/* Cgen/emit_cop.scm 433 */
																			int BgL_arg2645z00_3703;

																			BgL_arg2645z00_3703 = (int) (((long) 16));
																			{	/* Cgen/emit_cop.scm 433 */
																				long BgL_auxz00_5431;

																				BgL_auxz00_5431 =
																					(long) (BgL_arg2645z00_3703);
																				BgL_modz00_3702 =
																					(BgL_offsetz00_3701 /
																					BgL_auxz00_5431);
																		}}
																		{	/* Cgen/emit_cop.scm 433 */
																			long BgL_restz00_3704;

																			{	/* Cgen/emit_cop.scm 433 */
																				int BgL_arg2644z00_3705;

																				BgL_arg2644z00_3705 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 433 */
																					long BgL_auxz00_5435;

																					BgL_auxz00_5435 =
																						(long) (BgL_arg2644z00_3705);
																					BgL_restz00_3704 =
																						(BgL_offsetz00_3701 %
																						BgL_auxz00_5435);
																			}}
																			{	/* Cgen/emit_cop.scm 433 */

																				BgL_method3847z00_3694 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3699,
																						(int) (BgL_modz00_3702)),
																					(int) (BgL_restz00_3704));
												}}}}}}}}
												BgL_res4474z00_3719 =
													CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3694)
													(BgL_method3847z00_3694, (obj_t) (BgL_copz00_3693),
														BEOA));
										}} BgL_res4474z00_3719;
								}}
								bgl_display_string(BGl_string4568z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								{
									obj_t BgL_actualsz00_5447;

									BgL_actualsz00_5447 = CDR(BgL_actualsz00_2048);
									BgL_actualsz00_2048 = BgL_actualsz00_5447;
									goto BgL_zc3anonymousza34267ze3z83_2049;
								}
							}
					}
			}
		}
	}



/* emit-cop-capply3883 */
	obj_t BGl_emitzd2copzd2capply3883z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4375, obj_t BgL_copz00_4376)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 386 */
			{
				BgL_capplyz00_bglt BgL_copz00_1999;

				{	/* Cgen/emit_cop.scm 387 */
					bool_t BgL_auxz00_5449;

					BgL_copz00_1999 = (BgL_capplyz00_bglt) (BgL_copz00_4376);
					{	/* Cgen/emit_cop.scm 388 */
						obj_t BgL_arg4232z00_2003;

						{
							BgL_copz00_bglt BgL_auxz00_5450;

							BgL_auxz00_5450 = (BgL_copz00_bglt) (BgL_copz00_1999);
							BgL_arg4232z00_2003 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_5450))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4232z00_2003);
					}
					bgl_display_string(BGl_string4584z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 390 */
						BgL_copz00_bglt BgL_arg4233z00_2004;

						BgL_arg4233z00_2004 =
							(((BgL_capplyz00_bglt) CREF(BgL_copz00_1999))->BgL_funz00);
						{	/* Cgen/emit_cop.scm 390 */
							bool_t BgL_res4444z00_3396;

							{	/* Cgen/emit_cop.scm 390 */
								obj_t BgL_method3847z00_3371;

								{	/* Cgen/emit_cop.scm 390 */
									BgL_objectz00_bglt BgL_objz00_3372;

									BgL_objz00_3372 = (BgL_objectz00_bglt) (BgL_arg4233z00_2004);
									{	/* Cgen/emit_cop.scm 390 */
										long BgL_objzd2classzd2numz00_3373;

										BgL_objzd2classzd2numz00_3373 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3372);
										{	/* Cgen/emit_cop.scm 390 */
											obj_t BgL_arg2643z00_3374;

											BgL_arg2643z00_3374 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 390 */
												obj_t BgL_arrayz00_3376;

												int BgL_offsetz00_3377;

												BgL_arrayz00_3376 = BgL_arg2643z00_3374;
												BgL_offsetz00_3377 =
													(int) (BgL_objzd2classzd2numz00_3373);
												{	/* Cgen/emit_cop.scm 390 */
													long BgL_offsetz00_3378;

													BgL_offsetz00_3378 =
														((long) (BgL_offsetz00_3377) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 390 */
														long BgL_modz00_3379;

														{	/* Cgen/emit_cop.scm 390 */
															int BgL_arg2645z00_3380;

															BgL_arg2645z00_3380 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 390 */
																long BgL_auxz00_5464;

																BgL_auxz00_5464 = (long) (BgL_arg2645z00_3380);
																BgL_modz00_3379 =
																	(BgL_offsetz00_3378 / BgL_auxz00_5464);
														}}
														{	/* Cgen/emit_cop.scm 390 */
															long BgL_restz00_3381;

															{	/* Cgen/emit_cop.scm 390 */
																int BgL_arg2644z00_3382;

																BgL_arg2644z00_3382 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 390 */
																	long BgL_auxz00_5468;

																	BgL_auxz00_5468 =
																		(long) (BgL_arg2644z00_3382);
																	BgL_restz00_3381 =
																		(BgL_offsetz00_3378 % BgL_auxz00_5468);
															}}
															{	/* Cgen/emit_cop.scm 390 */

																BgL_method3847z00_3371 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3376,
																		(int) (BgL_modz00_3379)),
																	(int) (BgL_restz00_3381));
								}}}}}}}}
								BgL_res4444z00_3396 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3371)
									(BgL_method3847z00_3371, (obj_t) (BgL_arg4233z00_2004),
										BEOA));
							} BgL_res4444z00_3396;
					}}
					bgl_display_string(BGl_string4568z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 392 */
						BgL_copz00_bglt BgL_arg4234z00_2005;

						BgL_arg4234z00_2005 =
							(((BgL_capplyz00_bglt) CREF(BgL_copz00_1999))->BgL_argz00);
						{	/* Cgen/emit_cop.scm 392 */
							bool_t BgL_res4447z00_3426;

							{	/* Cgen/emit_cop.scm 392 */
								obj_t BgL_method3847z00_3401;

								{	/* Cgen/emit_cop.scm 392 */
									BgL_objectz00_bglt BgL_objz00_3402;

									BgL_objz00_3402 = (BgL_objectz00_bglt) (BgL_arg4234z00_2005);
									{	/* Cgen/emit_cop.scm 392 */
										long BgL_objzd2classzd2numz00_3403;

										BgL_objzd2classzd2numz00_3403 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3402);
										{	/* Cgen/emit_cop.scm 392 */
											obj_t BgL_arg2643z00_3404;

											BgL_arg2643z00_3404 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 392 */
												obj_t BgL_arrayz00_3406;

												int BgL_offsetz00_3407;

												BgL_arrayz00_3406 = BgL_arg2643z00_3404;
												BgL_offsetz00_3407 =
													(int) (BgL_objzd2classzd2numz00_3403);
												{	/* Cgen/emit_cop.scm 392 */
													long BgL_offsetz00_3408;

													BgL_offsetz00_3408 =
														((long) (BgL_offsetz00_3407) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 392 */
														long BgL_modz00_3409;

														{	/* Cgen/emit_cop.scm 392 */
															int BgL_arg2645z00_3410;

															BgL_arg2645z00_3410 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 392 */
																long BgL_auxz00_5489;

																BgL_auxz00_5489 = (long) (BgL_arg2645z00_3410);
																BgL_modz00_3409 =
																	(BgL_offsetz00_3408 / BgL_auxz00_5489);
														}}
														{	/* Cgen/emit_cop.scm 392 */
															long BgL_restz00_3411;

															{	/* Cgen/emit_cop.scm 392 */
																int BgL_arg2644z00_3412;

																BgL_arg2644z00_3412 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 392 */
																	long BgL_auxz00_5493;

																	BgL_auxz00_5493 =
																		(long) (BgL_arg2644z00_3412);
																	BgL_restz00_3411 =
																		(BgL_offsetz00_3408 % BgL_auxz00_5493);
															}}
															{	/* Cgen/emit_cop.scm 392 */

																BgL_method3847z00_3401 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3406,
																		(int) (BgL_modz00_3409)),
																	(int) (BgL_restz00_3411));
								}}}}}}}}
								BgL_res4447z00_3426 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3401)
									(BgL_method3847z00_3401, (obj_t) (BgL_arg4234z00_2005),
										BEOA));
							} BgL_res4447z00_3426;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_5449 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_5449);
				}
			}
		}
	}



/* emit-cop-cfuncall3881 */
	obj_t BGl_emitzd2copzd2cfuncall3881z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4377, obj_t BgL_copz00_4378)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 294 */
			{
				BgL_cfuncallz00_bglt BgL_copz00_1935;

				{	/* Cgen/emit_cop.scm 295 */
					bool_t BgL_auxz00_5507;

					BgL_copz00_1935 = (BgL_cfuncallz00_bglt) (BgL_copz00_4378);
					{
						BgL_cfuncallz00_bglt BgL_copz00_1946;

						BgL_cfuncallz00_bglt BgL_copz00_1944;

						BgL_cfuncallz00_bglt BgL_copz00_1940;

						BgL_cfuncallz00_bglt BgL_copz00_1938;

						{	/* Cgen/emit_cop.scm 372 */
							obj_t BgL_arg4198z00_1948;

							{
								BgL_copz00_bglt BgL_auxz00_5508;

								BgL_auxz00_5508 = (BgL_copz00_bglt) (BgL_copz00_1935);
								BgL_arg4198z00_1948 =
									(((BgL_copz00_bglt) CREF(BgL_auxz00_5508))->BgL_locz00);
							}
							BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4198z00_1948);
						}
						{	/* Cgen/emit_cop.scm 373 */
							obj_t BgL_casezd2valuezd2_1949;

							BgL_casezd2valuezd2_1949 =
								(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1935))->
								BgL_strengthz00);
							if ((BgL_casezd2valuezd2_1949 == CNST_TABLE_REF(((long) 6))))
								{	/* Cgen/emit_cop.scm 373 */
									BgL_copz00_1938 = BgL_copz00_1935;
									{	/* Cgen/emit_cop.scm 296 */
										obj_t BgL_actualsz00_1952;

										BgL_actualsz00_1952 =
											(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1938))->
											BgL_argsz00);
										{	/* Cgen/emit_cop.scm 297 */
											BgL_copz00_bglt BgL_arg4201z00_1953;

											BgL_arg4201z00_1953 =
												(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1938))->
												BgL_funz00);
											{	/* Cgen/emit_cop.scm 297 */
												bool_t BgL_res4405z00_2967;

												{	/* Cgen/emit_cop.scm 297 */
													obj_t BgL_method3847z00_2942;

													{	/* Cgen/emit_cop.scm 297 */
														BgL_objectz00_bglt BgL_objz00_2943;

														BgL_objz00_2943 =
															(BgL_objectz00_bglt) (BgL_arg4201z00_1953);
														{	/* Cgen/emit_cop.scm 297 */
															long BgL_objzd2classzd2numz00_2944;

															BgL_objzd2classzd2numz00_2944 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2943);
															{	/* Cgen/emit_cop.scm 297 */
																obj_t BgL_arg2643z00_2945;

																BgL_arg2643z00_2945 =
																	PROCEDURE_REF
																	(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																	(int) (((long) 1)));
																{	/* Cgen/emit_cop.scm 297 */
																	obj_t BgL_arrayz00_2947;

																	int BgL_offsetz00_2948;

																	BgL_arrayz00_2947 = BgL_arg2643z00_2945;
																	BgL_offsetz00_2948 =
																		(int) (BgL_objzd2classzd2numz00_2944);
																	{	/* Cgen/emit_cop.scm 297 */
																		long BgL_offsetz00_2949;

																		BgL_offsetz00_2949 =
																			(
																			(long) (BgL_offsetz00_2948) -
																			OBJECT_TYPE);
																		{	/* Cgen/emit_cop.scm 297 */
																			long BgL_modz00_2950;

																			{	/* Cgen/emit_cop.scm 297 */
																				int BgL_arg2645z00_2951;

																				BgL_arg2645z00_2951 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 297 */
																					long BgL_auxz00_5526;

																					BgL_auxz00_5526 =
																						(long) (BgL_arg2645z00_2951);
																					BgL_modz00_2950 =
																						(BgL_offsetz00_2949 /
																						BgL_auxz00_5526);
																			}}
																			{	/* Cgen/emit_cop.scm 297 */
																				long BgL_restz00_2952;

																				{	/* Cgen/emit_cop.scm 297 */
																					int BgL_arg2644z00_2953;

																					BgL_arg2644z00_2953 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 297 */
																						long BgL_auxz00_5530;

																						BgL_auxz00_5530 =
																							(long) (BgL_arg2644z00_2953);
																						BgL_restz00_2952 =
																							(BgL_offsetz00_2949 %
																							BgL_auxz00_5530);
																				}}
																				{	/* Cgen/emit_cop.scm 297 */

																					BgL_method3847z00_2942 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2947,
																							(int) (BgL_modz00_2950)),
																						(int) (BgL_restz00_2952));
													}}}}}}}}
													BgL_res4405z00_2967 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2942)
														(BgL_method3847z00_2942,
															(obj_t) (BgL_arg4201z00_1953), BEOA));
												} BgL_res4405z00_2967;
										}}
										bgl_display_char(((unsigned char) '('),
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{
											obj_t BgL_actualsz00_1955;

											BgL_actualsz00_1955 = BgL_actualsz00_1952;
										BgL_zc3anonymousza34202ze3z83_1956:
											{	/* Cgen/emit_cop.scm 302 */
												bool_t BgL_testz00_5542;

												{	/* Cgen/emit_cop.scm 302 */
													obj_t BgL_auxz00_5543;

													{	/* Cgen/emit_cop.scm 302 */
														obj_t BgL_pairz00_2970;

														BgL_pairz00_2970 = BgL_actualsz00_1955;
														BgL_auxz00_5543 = CDR(CDR(BgL_pairz00_2970));
													}
													BgL_testz00_5542 = NULLP(BgL_auxz00_5543);
												}
												if (BgL_testz00_5542)
													{	/* Cgen/emit_cop.scm 302 */
														{	/* Cgen/emit_cop.scm 304 */
															obj_t BgL_arg4204z00_1958;

															BgL_arg4204z00_1958 = CAR(BgL_actualsz00_1955);
															{	/* Cgen/emit_cop.scm 304 */
																bool_t BgL_res4408z00_3002;

																{	/* Cgen/emit_cop.scm 304 */
																	BgL_copz00_bglt BgL_copz00_2976;

																	BgL_copz00_2976 =
																		(BgL_copz00_bglt) (BgL_arg4204z00_1958);
																	{	/* Cgen/emit_cop.scm 304 */
																		obj_t BgL_method3847z00_2977;

																		{	/* Cgen/emit_cop.scm 304 */
																			BgL_objectz00_bglt BgL_objz00_2978;

																			BgL_objz00_2978 =
																				(BgL_objectz00_bglt) (BgL_copz00_2976);
																			{	/* Cgen/emit_cop.scm 304 */
																				long BgL_objzd2classzd2numz00_2979;

																				BgL_objzd2classzd2numz00_2979 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2978);
																				{	/* Cgen/emit_cop.scm 304 */
																					obj_t BgL_arg2643z00_2980;

																					BgL_arg2643z00_2980 =
																						PROCEDURE_REF
																						(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																						(int) (((long) 1)));
																					{	/* Cgen/emit_cop.scm 304 */
																						obj_t BgL_arrayz00_2982;

																						int BgL_offsetz00_2983;

																						BgL_arrayz00_2982 =
																							BgL_arg2643z00_2980;
																						BgL_offsetz00_2983 =
																							(int)
																							(BgL_objzd2classzd2numz00_2979);
																						{	/* Cgen/emit_cop.scm 304 */
																							long BgL_offsetz00_2984;

																							BgL_offsetz00_2984 =
																								(
																								(long) (BgL_offsetz00_2983) -
																								OBJECT_TYPE);
																							{	/* Cgen/emit_cop.scm 304 */
																								long BgL_modz00_2985;

																								{	/* Cgen/emit_cop.scm 304 */
																									int BgL_arg2645z00_2986;

																									BgL_arg2645z00_2986 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 304 */
																										long BgL_auxz00_5557;

																										BgL_auxz00_5557 =
																											(long)
																											(BgL_arg2645z00_2986);
																										BgL_modz00_2985 =
																											(BgL_offsetz00_2984 /
																											BgL_auxz00_5557);
																								}}
																								{	/* Cgen/emit_cop.scm 304 */
																									long BgL_restz00_2987;

																									{	/* Cgen/emit_cop.scm 304 */
																										int BgL_arg2644z00_2988;

																										BgL_arg2644z00_2988 =
																											(int) (((long) 16));
																										{	/* Cgen/emit_cop.scm 304 */
																											long BgL_auxz00_5561;

																											BgL_auxz00_5561 =
																												(long)
																												(BgL_arg2644z00_2988);
																											BgL_restz00_2987 =
																												(BgL_offsetz00_2984 %
																												BgL_auxz00_5561);
																									}}
																									{	/* Cgen/emit_cop.scm 304 */

																										BgL_method3847z00_2977 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2982,
																												(int)
																												(BgL_modz00_2985)),
																											(int) (BgL_restz00_2987));
																		}}}}}}}}
																		BgL_res4408z00_3002 =
																			CBOOL(PROCEDURE_ENTRY
																			(BgL_method3847z00_2977)
																			(BgL_method3847z00_2977,
																				(obj_t) (BgL_copz00_2976), BEOA));
																}} BgL_res4408z00_3002;
														}}
														bgl_display_char(((unsigned char) ')'),
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														BgL_auxz00_5507 = ((bool_t) 1);
													}
												else
													{	/* Cgen/emit_cop.scm 302 */
														{	/* Cgen/emit_cop.scm 308 */
															obj_t BgL_arg4205z00_1959;

															BgL_arg4205z00_1959 = CAR(BgL_actualsz00_1955);
															{	/* Cgen/emit_cop.scm 308 */
																bool_t BgL_res4411z00_3032;

																{	/* Cgen/emit_cop.scm 308 */
																	BgL_copz00_bglt BgL_copz00_3006;

																	BgL_copz00_3006 =
																		(BgL_copz00_bglt) (BgL_arg4205z00_1959);
																	{	/* Cgen/emit_cop.scm 308 */
																		obj_t BgL_method3847z00_3007;

																		{	/* Cgen/emit_cop.scm 308 */
																			BgL_objectz00_bglt BgL_objz00_3008;

																			BgL_objz00_3008 =
																				(BgL_objectz00_bglt) (BgL_copz00_3006);
																			{	/* Cgen/emit_cop.scm 308 */
																				long BgL_objzd2classzd2numz00_3009;

																				BgL_objzd2classzd2numz00_3009 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3008);
																				{	/* Cgen/emit_cop.scm 308 */
																					obj_t BgL_arg2643z00_3010;

																					BgL_arg2643z00_3010 =
																						PROCEDURE_REF
																						(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																						(int) (((long) 1)));
																					{	/* Cgen/emit_cop.scm 308 */
																						obj_t BgL_arrayz00_3012;

																						int BgL_offsetz00_3013;

																						BgL_arrayz00_3012 =
																							BgL_arg2643z00_3010;
																						BgL_offsetz00_3013 =
																							(int)
																							(BgL_objzd2classzd2numz00_3009);
																						{	/* Cgen/emit_cop.scm 308 */
																							long BgL_offsetz00_3014;

																							BgL_offsetz00_3014 =
																								(
																								(long) (BgL_offsetz00_3013) -
																								OBJECT_TYPE);
																							{	/* Cgen/emit_cop.scm 308 */
																								long BgL_modz00_3015;

																								{	/* Cgen/emit_cop.scm 308 */
																									int BgL_arg2645z00_3016;

																									BgL_arg2645z00_3016 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 308 */
																										long BgL_auxz00_5583;

																										BgL_auxz00_5583 =
																											(long)
																											(BgL_arg2645z00_3016);
																										BgL_modz00_3015 =
																											(BgL_offsetz00_3014 /
																											BgL_auxz00_5583);
																								}}
																								{	/* Cgen/emit_cop.scm 308 */
																									long BgL_restz00_3017;

																									{	/* Cgen/emit_cop.scm 308 */
																										int BgL_arg2644z00_3018;

																										BgL_arg2644z00_3018 =
																											(int) (((long) 16));
																										{	/* Cgen/emit_cop.scm 308 */
																											long BgL_auxz00_5587;

																											BgL_auxz00_5587 =
																												(long)
																												(BgL_arg2644z00_3018);
																											BgL_restz00_3017 =
																												(BgL_offsetz00_3014 %
																												BgL_auxz00_5587);
																									}}
																									{	/* Cgen/emit_cop.scm 308 */

																										BgL_method3847z00_3007 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3012,
																												(int)
																												(BgL_modz00_3015)),
																											(int) (BgL_restz00_3017));
																		}}}}}}}}
																		BgL_res4411z00_3032 =
																			CBOOL(PROCEDURE_ENTRY
																			(BgL_method3847z00_3007)
																			(BgL_method3847z00_3007,
																				(obj_t) (BgL_copz00_3006), BEOA));
																}} BgL_res4411z00_3032;
														}}
														bgl_display_string
															(BGl_string4568z00zzcgen_emitzd2copzd2,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														{
															obj_t BgL_actualsz00_5599;

															BgL_actualsz00_5599 = CDR(BgL_actualsz00_1955);
															BgL_actualsz00_1955 = BgL_actualsz00_5599;
															goto BgL_zc3anonymousza34202ze3z83_1956;
														}
													}
											}
										}
									}
								}
							else
								{	/* Cgen/emit_cop.scm 373 */
									if ((BgL_casezd2valuezd2_1949 == CNST_TABLE_REF(((long) 7))))
										{	/* Cgen/emit_cop.scm 373 */
											BgL_copz00_1940 = BgL_copz00_1935;
											{	/* Cgen/emit_cop.scm 312 */
												obj_t BgL_actualsz00_1963;

												BgL_actualsz00_1963 =
													(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1940))->
													BgL_argsz00);
												bgl_display_string
													(BGl_string4585z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												{	/* Cgen/emit_cop.scm 314 */
													BgL_copz00_bglt BgL_arg4208z00_1964;

													BgL_arg4208z00_1964 =
														(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1940))->
														BgL_funz00);
													{	/* Cgen/emit_cop.scm 314 */
														bool_t BgL_res4414z00_3066;

														{	/* Cgen/emit_cop.scm 314 */
															obj_t BgL_method3847z00_3041;

															{	/* Cgen/emit_cop.scm 314 */
																BgL_objectz00_bglt BgL_objz00_3042;

																BgL_objz00_3042 =
																	(BgL_objectz00_bglt) (BgL_arg4208z00_1964);
																{	/* Cgen/emit_cop.scm 314 */
																	long BgL_objzd2classzd2numz00_3043;

																	BgL_objzd2classzd2numz00_3043 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3042);
																	{	/* Cgen/emit_cop.scm 314 */
																		obj_t BgL_arg2643z00_3044;

																		BgL_arg2643z00_3044 =
																			PROCEDURE_REF
																			(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																			(int) (((long) 1)));
																		{	/* Cgen/emit_cop.scm 314 */
																			obj_t BgL_arrayz00_3046;

																			int BgL_offsetz00_3047;

																			BgL_arrayz00_3046 = BgL_arg2643z00_3044;
																			BgL_offsetz00_3047 =
																				(int) (BgL_objzd2classzd2numz00_3043);
																			{	/* Cgen/emit_cop.scm 314 */
																				long BgL_offsetz00_3048;

																				BgL_offsetz00_3048 =
																					(
																					(long) (BgL_offsetz00_3047) -
																					OBJECT_TYPE);
																				{	/* Cgen/emit_cop.scm 314 */
																					long BgL_modz00_3049;

																					{	/* Cgen/emit_cop.scm 314 */
																						int BgL_arg2645z00_3050;

																						BgL_arg2645z00_3050 =
																							(int) (((long) 16));
																						{	/* Cgen/emit_cop.scm 314 */
																							long BgL_auxz00_5615;

																							BgL_auxz00_5615 =
																								(long) (BgL_arg2645z00_3050);
																							BgL_modz00_3049 =
																								(BgL_offsetz00_3048 /
																								BgL_auxz00_5615);
																					}}
																					{	/* Cgen/emit_cop.scm 314 */
																						long BgL_restz00_3051;

																						{	/* Cgen/emit_cop.scm 314 */
																							int BgL_arg2644z00_3052;

																							BgL_arg2644z00_3052 =
																								(int) (((long) 16));
																							{	/* Cgen/emit_cop.scm 314 */
																								long BgL_auxz00_5619;

																								BgL_auxz00_5619 =
																									(long) (BgL_arg2644z00_3052);
																								BgL_restz00_3051 =
																									(BgL_offsetz00_3048 %
																									BgL_auxz00_5619);
																						}}
																						{	/* Cgen/emit_cop.scm 314 */

																							BgL_method3847z00_3041 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3046,
																									(int) (BgL_modz00_3049)),
																								(int) (BgL_restz00_3051));
															}}}}}}}}
															BgL_res4414z00_3066 =
																CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3041)
																(BgL_method3847z00_3041,
																	(obj_t) (BgL_arg4208z00_1964), BEOA));
														} BgL_res4414z00_3066;
												}}
												bgl_display_string
													(BGl_string4586z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												{
													obj_t BgL_actualsz00_1966;

													BgL_actualsz00_1966 = BgL_actualsz00_1963;
												BgL_zc3anonymousza34209ze3z83_1967:
													{	/* Cgen/emit_cop.scm 319 */
														bool_t BgL_testz00_5631;

														{	/* Cgen/emit_cop.scm 319 */
															obj_t BgL_auxz00_5632;

															{	/* Cgen/emit_cop.scm 319 */
																obj_t BgL_pairz00_3069;

																BgL_pairz00_3069 = BgL_actualsz00_1966;
																BgL_auxz00_5632 = CDR(CDR(BgL_pairz00_3069));
															}
															BgL_testz00_5631 = NULLP(BgL_auxz00_5632);
														}
														if (BgL_testz00_5631)
															{	/* Cgen/emit_cop.scm 319 */
																{	/* Cgen/emit_cop.scm 321 */
																	obj_t BgL_arg4211z00_1969;

																	BgL_arg4211z00_1969 =
																		CAR(BgL_actualsz00_1966);
																	{	/* Cgen/emit_cop.scm 321 */
																		bool_t BgL_res4417z00_3101;

																		{	/* Cgen/emit_cop.scm 321 */
																			BgL_copz00_bglt BgL_copz00_3075;

																			BgL_copz00_3075 =
																				(BgL_copz00_bglt) (BgL_arg4211z00_1969);
																			{	/* Cgen/emit_cop.scm 321 */
																				obj_t BgL_method3847z00_3076;

																				{	/* Cgen/emit_cop.scm 321 */
																					BgL_objectz00_bglt BgL_objz00_3077;

																					BgL_objz00_3077 =
																						(BgL_objectz00_bglt)
																						(BgL_copz00_3075);
																					{	/* Cgen/emit_cop.scm 321 */
																						long BgL_objzd2classzd2numz00_3078;

																						BgL_objzd2classzd2numz00_3078 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3077);
																						{	/* Cgen/emit_cop.scm 321 */
																							obj_t BgL_arg2643z00_3079;

																							BgL_arg2643z00_3079 =
																								PROCEDURE_REF
																								(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																								(int) (((long) 1)));
																							{	/* Cgen/emit_cop.scm 321 */
																								obj_t BgL_arrayz00_3081;

																								int BgL_offsetz00_3082;

																								BgL_arrayz00_3081 =
																									BgL_arg2643z00_3079;
																								BgL_offsetz00_3082 =
																									(int)
																									(BgL_objzd2classzd2numz00_3078);
																								{	/* Cgen/emit_cop.scm 321 */
																									long BgL_offsetz00_3083;

																									BgL_offsetz00_3083 =
																										(
																										(long) (BgL_offsetz00_3082)
																										- OBJECT_TYPE);
																									{	/* Cgen/emit_cop.scm 321 */
																										long BgL_modz00_3084;

																										{	/* Cgen/emit_cop.scm 321 */
																											int BgL_arg2645z00_3085;

																											BgL_arg2645z00_3085 =
																												(int) (((long) 16));
																											{	/* Cgen/emit_cop.scm 321 */
																												long BgL_auxz00_5646;

																												BgL_auxz00_5646 =
																													(long)
																													(BgL_arg2645z00_3085);
																												BgL_modz00_3084 =
																													(BgL_offsetz00_3083 /
																													BgL_auxz00_5646);
																										}}
																										{	/* Cgen/emit_cop.scm 321 */
																											long BgL_restz00_3086;

																											{	/* Cgen/emit_cop.scm 321 */
																												int BgL_arg2644z00_3087;

																												BgL_arg2644z00_3087 =
																													(int) (((long) 16));
																												{	/* Cgen/emit_cop.scm 321 */
																													long BgL_auxz00_5650;

																													BgL_auxz00_5650 =
																														(long)
																														(BgL_arg2644z00_3087);
																													BgL_restz00_3086 =
																														(BgL_offsetz00_3083
																														% BgL_auxz00_5650);
																											}}
																											{	/* Cgen/emit_cop.scm 321 */

																												BgL_method3847z00_3076 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3081,
																														(int)
																														(BgL_modz00_3084)),
																													(int)
																													(BgL_restz00_3086));
																				}}}}}}}}
																				BgL_res4417z00_3101 =
																					CBOOL(PROCEDURE_ENTRY
																					(BgL_method3847z00_3076)
																					(BgL_method3847z00_3076,
																						(obj_t) (BgL_copz00_3075), BEOA));
																		}} BgL_res4417z00_3101;
																}}
																bgl_display_string
																	(BGl_string4587z00zzcgen_emitzd2copzd2,
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																BgL_auxz00_5507 = ((bool_t) 1);
															}
														else
															{	/* Cgen/emit_cop.scm 319 */
																{	/* Cgen/emit_cop.scm 325 */
																	obj_t BgL_arg4212z00_1970;

																	BgL_arg4212z00_1970 =
																		CAR(BgL_actualsz00_1966);
																	{	/* Cgen/emit_cop.scm 325 */
																		bool_t BgL_res4420z00_3131;

																		{	/* Cgen/emit_cop.scm 325 */
																			BgL_copz00_bglt BgL_copz00_3105;

																			BgL_copz00_3105 =
																				(BgL_copz00_bglt) (BgL_arg4212z00_1970);
																			{	/* Cgen/emit_cop.scm 325 */
																				obj_t BgL_method3847z00_3106;

																				{	/* Cgen/emit_cop.scm 325 */
																					BgL_objectz00_bglt BgL_objz00_3107;

																					BgL_objz00_3107 =
																						(BgL_objectz00_bglt)
																						(BgL_copz00_3105);
																					{	/* Cgen/emit_cop.scm 325 */
																						long BgL_objzd2classzd2numz00_3108;

																						BgL_objzd2classzd2numz00_3108 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3107);
																						{	/* Cgen/emit_cop.scm 325 */
																							obj_t BgL_arg2643z00_3109;

																							BgL_arg2643z00_3109 =
																								PROCEDURE_REF
																								(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																								(int) (((long) 1)));
																							{	/* Cgen/emit_cop.scm 325 */
																								obj_t BgL_arrayz00_3111;

																								int BgL_offsetz00_3112;

																								BgL_arrayz00_3111 =
																									BgL_arg2643z00_3109;
																								BgL_offsetz00_3112 =
																									(int)
																									(BgL_objzd2classzd2numz00_3108);
																								{	/* Cgen/emit_cop.scm 325 */
																									long BgL_offsetz00_3113;

																									BgL_offsetz00_3113 =
																										(
																										(long) (BgL_offsetz00_3112)
																										- OBJECT_TYPE);
																									{	/* Cgen/emit_cop.scm 325 */
																										long BgL_modz00_3114;

																										{	/* Cgen/emit_cop.scm 325 */
																											int BgL_arg2645z00_3115;

																											BgL_arg2645z00_3115 =
																												(int) (((long) 16));
																											{	/* Cgen/emit_cop.scm 325 */
																												long BgL_auxz00_5672;

																												BgL_auxz00_5672 =
																													(long)
																													(BgL_arg2645z00_3115);
																												BgL_modz00_3114 =
																													(BgL_offsetz00_3113 /
																													BgL_auxz00_5672);
																										}}
																										{	/* Cgen/emit_cop.scm 325 */
																											long BgL_restz00_3116;

																											{	/* Cgen/emit_cop.scm 325 */
																												int BgL_arg2644z00_3117;

																												BgL_arg2644z00_3117 =
																													(int) (((long) 16));
																												{	/* Cgen/emit_cop.scm 325 */
																													long BgL_auxz00_5676;

																													BgL_auxz00_5676 =
																														(long)
																														(BgL_arg2644z00_3117);
																													BgL_restz00_3116 =
																														(BgL_offsetz00_3113
																														% BgL_auxz00_5676);
																											}}
																											{	/* Cgen/emit_cop.scm 325 */

																												BgL_method3847z00_3106 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3111,
																														(int)
																														(BgL_modz00_3114)),
																													(int)
																													(BgL_restz00_3116));
																				}}}}}}}}
																				BgL_res4420z00_3131 =
																					CBOOL(PROCEDURE_ENTRY
																					(BgL_method3847z00_3106)
																					(BgL_method3847z00_3106,
																						(obj_t) (BgL_copz00_3105), BEOA));
																		}} BgL_res4420z00_3131;
																}}
																bgl_display_string
																	(BGl_string4568z00zzcgen_emitzd2copzd2,
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																{
																	obj_t BgL_actualsz00_5688;

																	BgL_actualsz00_5688 =
																		CDR(BgL_actualsz00_1966);
																	BgL_actualsz00_1966 = BgL_actualsz00_5688;
																	goto BgL_zc3anonymousza34209ze3z83_1967;
																}
															}
													}
												}
											}
										}
									else
										{	/* Cgen/emit_cop.scm 373 */
											if (CBOOL(BGl_za2stdcza2z00zzengine_paramz00))
												{	/* Cgen/emit_cop.scm 379 */
													BgL_copz00_1946 = BgL_copz00_1935;
													bgl_display_string
														(BGl_string4589z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													{	/* Cgen/emit_cop.scm 365 */
														BgL_copz00_bglt BgL_arg4230z00_1996;

														BgL_arg4230z00_1996 =
															(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1946))->
															BgL_funz00);
														{	/* Cgen/emit_cop.scm 365 */
															bool_t BgL_res4441z00_3359;

															{	/* Cgen/emit_cop.scm 365 */
																obj_t BgL_method3847z00_3334;

																{	/* Cgen/emit_cop.scm 365 */
																	BgL_objectz00_bglt BgL_objz00_3335;

																	BgL_objz00_3335 =
																		(BgL_objectz00_bglt) (BgL_arg4230z00_1996);
																	{	/* Cgen/emit_cop.scm 365 */
																		long BgL_objzd2classzd2numz00_3336;

																		BgL_objzd2classzd2numz00_3336 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_3335);
																		{	/* Cgen/emit_cop.scm 365 */
																			obj_t BgL_arg2643z00_3337;

																			BgL_arg2643z00_3337 =
																				PROCEDURE_REF
																				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																				(int) (((long) 1)));
																			{	/* Cgen/emit_cop.scm 365 */
																				obj_t BgL_arrayz00_3339;

																				int BgL_offsetz00_3340;

																				BgL_arrayz00_3339 = BgL_arg2643z00_3337;
																				BgL_offsetz00_3340 =
																					(int) (BgL_objzd2classzd2numz00_3336);
																				{	/* Cgen/emit_cop.scm 365 */
																					long BgL_offsetz00_3341;

																					BgL_offsetz00_3341 =
																						(
																						(long) (BgL_offsetz00_3340) -
																						OBJECT_TYPE);
																					{	/* Cgen/emit_cop.scm 365 */
																						long BgL_modz00_3342;

																						{	/* Cgen/emit_cop.scm 365 */
																							int BgL_arg2645z00_3343;

																							BgL_arg2645z00_3343 =
																								(int) (((long) 16));
																							{	/* Cgen/emit_cop.scm 365 */
																								long BgL_auxz00_5702;

																								BgL_auxz00_5702 =
																									(long) (BgL_arg2645z00_3343);
																								BgL_modz00_3342 =
																									(BgL_offsetz00_3341 /
																									BgL_auxz00_5702);
																						}}
																						{	/* Cgen/emit_cop.scm 365 */
																							long BgL_restz00_3344;

																							{	/* Cgen/emit_cop.scm 365 */
																								int BgL_arg2644z00_3345;

																								BgL_arg2644z00_3345 =
																									(int) (((long) 16));
																								{	/* Cgen/emit_cop.scm 365 */
																									long BgL_auxz00_5706;

																									BgL_auxz00_5706 =
																										(long)
																										(BgL_arg2644z00_3345);
																									BgL_restz00_3344 =
																										(BgL_offsetz00_3341 %
																										BgL_auxz00_5706);
																							}}
																							{	/* Cgen/emit_cop.scm 365 */

																								BgL_method3847z00_3334 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_3339,
																										(int) (BgL_modz00_3342)),
																									(int) (BgL_restz00_3344));
																}}}}}}}}
																BgL_res4441z00_3359 =
																	CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3334)
																	(BgL_method3847z00_3334,
																		(obj_t) (BgL_arg4230z00_1996), BEOA));
															} BgL_res4441z00_3359;
													}}
													bgl_display_string
														(BGl_string4590z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BGl_emitzd2regularzd2cfuncallzf2eoazf2zzcgen_emitzd2copzd2
														(BgL_copz00_1946);
													bgl_display_string
														(BGl_string4576z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BgL_copz00_1944 = BgL_copz00_1946;
													{	/* Cgen/emit_cop.scm 346 */
														obj_t BgL_actualsz00_1985;

														BgL_actualsz00_1985 =
															(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1944))->
															BgL_argsz00);
														bgl_display_string
															(BGl_string4588z00zzcgen_emitzd2copzd2,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														{	/* Cgen/emit_cop.scm 348 */
															BgL_copz00_bglt BgL_arg4222z00_1986;

															BgL_arg4222z00_1986 =
																(((BgL_cfuncallz00_bglt)
																	CREF(BgL_copz00_1944))->BgL_funz00);
															{	/* Cgen/emit_cop.scm 348 */
																bool_t BgL_res4432z00_3261;

																{	/* Cgen/emit_cop.scm 348 */
																	obj_t BgL_method3847z00_3236;

																	{	/* Cgen/emit_cop.scm 348 */
																		BgL_objectz00_bglt BgL_objz00_3237;

																		BgL_objz00_3237 =
																			(BgL_objectz00_bglt)
																			(BgL_arg4222z00_1986);
																		{	/* Cgen/emit_cop.scm 348 */
																			long BgL_objzd2classzd2numz00_3238;

																			BgL_objzd2classzd2numz00_3238 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_3237);
																			{	/* Cgen/emit_cop.scm 348 */
																				obj_t BgL_arg2643z00_3239;

																				BgL_arg2643z00_3239 =
																					PROCEDURE_REF
																					(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																					(int) (((long) 1)));
																				{	/* Cgen/emit_cop.scm 348 */
																					obj_t BgL_arrayz00_3241;

																					int BgL_offsetz00_3242;

																					BgL_arrayz00_3241 =
																						BgL_arg2643z00_3239;
																					BgL_offsetz00_3242 =
																						(int)
																						(BgL_objzd2classzd2numz00_3238);
																					{	/* Cgen/emit_cop.scm 348 */
																						long BgL_offsetz00_3243;

																						BgL_offsetz00_3243 =
																							(
																							(long) (BgL_offsetz00_3242) -
																							OBJECT_TYPE);
																						{	/* Cgen/emit_cop.scm 348 */
																							long BgL_modz00_3244;

																							{	/* Cgen/emit_cop.scm 348 */
																								int BgL_arg2645z00_3245;

																								BgL_arg2645z00_3245 =
																									(int) (((long) 16));
																								{	/* Cgen/emit_cop.scm 348 */
																									long BgL_auxz00_5731;

																									BgL_auxz00_5731 =
																										(long)
																										(BgL_arg2645z00_3245);
																									BgL_modz00_3244 =
																										(BgL_offsetz00_3243 /
																										BgL_auxz00_5731);
																							}}
																							{	/* Cgen/emit_cop.scm 348 */
																								long BgL_restz00_3246;

																								{	/* Cgen/emit_cop.scm 348 */
																									int BgL_arg2644z00_3247;

																									BgL_arg2644z00_3247 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 348 */
																										long BgL_auxz00_5735;

																										BgL_auxz00_5735 =
																											(long)
																											(BgL_arg2644z00_3247);
																										BgL_restz00_3246 =
																											(BgL_offsetz00_3243 %
																											BgL_auxz00_5735);
																								}}
																								{	/* Cgen/emit_cop.scm 348 */

																									BgL_method3847z00_3236 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_3241,
																											(int) (BgL_modz00_3244)),
																										(int) (BgL_restz00_3246));
																	}}}}}}}}
																	BgL_res4432z00_3261 =
																		CBOOL(PROCEDURE_ENTRY
																		(BgL_method3847z00_3236)
																		(BgL_method3847z00_3236,
																			(obj_t) (BgL_arg4222z00_1986), BEOA));
																} BgL_res4432z00_3261;
														}}
														bgl_display_string
															(BGl_string4586z00zzcgen_emitzd2copzd2,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														{
															obj_t BgL_actualsz00_1988;

															BgL_actualsz00_1988 = BgL_actualsz00_1985;
														BgL_zc3anonymousza34223ze3z83_1989:
															{	/* Cgen/emit_cop.scm 353 */
																bool_t BgL_testz00_5747;

																{	/* Cgen/emit_cop.scm 353 */
																	obj_t BgL_auxz00_5748;

																	{	/* Cgen/emit_cop.scm 353 */
																		obj_t BgL_pairz00_3264;

																		BgL_pairz00_3264 = BgL_actualsz00_1988;
																		BgL_auxz00_5748 =
																			CDR(CDR(BgL_pairz00_3264));
																	}
																	BgL_testz00_5747 = NULLP(BgL_auxz00_5748);
																}
																if (BgL_testz00_5747)
																	{	/* Cgen/emit_cop.scm 353 */
																		{	/* Cgen/emit_cop.scm 355 */
																			obj_t BgL_arg4225z00_1991;

																			BgL_arg4225z00_1991 =
																				CAR(BgL_actualsz00_1988);
																			{	/* Cgen/emit_cop.scm 355 */
																				bool_t BgL_res4435z00_3296;

																				{	/* Cgen/emit_cop.scm 355 */
																					BgL_copz00_bglt BgL_copz00_3270;

																					BgL_copz00_3270 =
																						(BgL_copz00_bglt)
																						(BgL_arg4225z00_1991);
																					{	/* Cgen/emit_cop.scm 355 */
																						obj_t BgL_method3847z00_3271;

																						{	/* Cgen/emit_cop.scm 355 */
																							BgL_objectz00_bglt
																								BgL_objz00_3272;
																							BgL_objz00_3272 =
																								(BgL_objectz00_bglt)
																								(BgL_copz00_3270);
																							{	/* Cgen/emit_cop.scm 355 */
																								long
																									BgL_objzd2classzd2numz00_3273;
																								BgL_objzd2classzd2numz00_3273 =
																									BGL_OBJECT_CLASS_NUM
																									(BgL_objz00_3272);
																								{	/* Cgen/emit_cop.scm 355 */
																									obj_t BgL_arg2643z00_3274;

																									BgL_arg2643z00_3274 =
																										PROCEDURE_REF
																										(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																										(int) (((long) 1)));
																									{	/* Cgen/emit_cop.scm 355 */
																										obj_t BgL_arrayz00_3276;

																										int BgL_offsetz00_3277;

																										BgL_arrayz00_3276 =
																											BgL_arg2643z00_3274;
																										BgL_offsetz00_3277 =
																											(int)
																											(BgL_objzd2classzd2numz00_3273);
																										{	/* Cgen/emit_cop.scm 355 */
																											long BgL_offsetz00_3278;

																											BgL_offsetz00_3278 =
																												(
																												(long)
																												(BgL_offsetz00_3277) -
																												OBJECT_TYPE);
																											{	/* Cgen/emit_cop.scm 355 */
																												long BgL_modz00_3279;

																												{	/* Cgen/emit_cop.scm 355 */
																													int
																														BgL_arg2645z00_3280;
																													BgL_arg2645z00_3280 =
																														(int) (((long) 16));
																													{	/* Cgen/emit_cop.scm 355 */
																														long
																															BgL_auxz00_5762;
																														BgL_auxz00_5762 =
																															(long)
																															(BgL_arg2645z00_3280);
																														BgL_modz00_3279 =
																															(BgL_offsetz00_3278
																															/
																															BgL_auxz00_5762);
																												}}
																												{	/* Cgen/emit_cop.scm 355 */
																													long BgL_restz00_3281;

																													{	/* Cgen/emit_cop.scm 355 */
																														int
																															BgL_arg2644z00_3282;
																														BgL_arg2644z00_3282
																															=
																															(int) (((long)
																																16));
																														{	/* Cgen/emit_cop.scm 355 */
																															long
																																BgL_auxz00_5766;
																															BgL_auxz00_5766 =
																																(long)
																																(BgL_arg2644z00_3282);
																															BgL_restz00_3281 =
																																(BgL_offsetz00_3278
																																%
																																BgL_auxz00_5766);
																													}}
																													{	/* Cgen/emit_cop.scm 355 */

																														BgL_method3847z00_3271
																															=
																															VECTOR_REF
																															(VECTOR_REF
																															(BgL_arrayz00_3276,
																																(int)
																																(BgL_modz00_3279)),
																															(int)
																															(BgL_restz00_3281));
																						}}}}}}}}
																						BgL_res4435z00_3296 =
																							CBOOL(PROCEDURE_ENTRY
																							(BgL_method3847z00_3271)
																							(BgL_method3847z00_3271,
																								(obj_t) (BgL_copz00_3270),
																								BEOA));
																				}} BgL_res4435z00_3296;
																		}}
																		bgl_display_string
																			(BGl_string4587z00zzcgen_emitzd2copzd2,
																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																		((bool_t) 1);
																	}
																else
																	{	/* Cgen/emit_cop.scm 353 */
																		{	/* Cgen/emit_cop.scm 359 */
																			obj_t BgL_arg4226z00_1992;

																			BgL_arg4226z00_1992 =
																				CAR(BgL_actualsz00_1988);
																			{	/* Cgen/emit_cop.scm 359 */
																				bool_t BgL_res4438z00_3326;

																				{	/* Cgen/emit_cop.scm 359 */
																					BgL_copz00_bglt BgL_copz00_3300;

																					BgL_copz00_3300 =
																						(BgL_copz00_bglt)
																						(BgL_arg4226z00_1992);
																					{	/* Cgen/emit_cop.scm 359 */
																						obj_t BgL_method3847z00_3301;

																						{	/* Cgen/emit_cop.scm 359 */
																							BgL_objectz00_bglt
																								BgL_objz00_3302;
																							BgL_objz00_3302 =
																								(BgL_objectz00_bglt)
																								(BgL_copz00_3300);
																							{	/* Cgen/emit_cop.scm 359 */
																								long
																									BgL_objzd2classzd2numz00_3303;
																								BgL_objzd2classzd2numz00_3303 =
																									BGL_OBJECT_CLASS_NUM
																									(BgL_objz00_3302);
																								{	/* Cgen/emit_cop.scm 359 */
																									obj_t BgL_arg2643z00_3304;

																									BgL_arg2643z00_3304 =
																										PROCEDURE_REF
																										(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																										(int) (((long) 1)));
																									{	/* Cgen/emit_cop.scm 359 */
																										obj_t BgL_arrayz00_3306;

																										int BgL_offsetz00_3307;

																										BgL_arrayz00_3306 =
																											BgL_arg2643z00_3304;
																										BgL_offsetz00_3307 =
																											(int)
																											(BgL_objzd2classzd2numz00_3303);
																										{	/* Cgen/emit_cop.scm 359 */
																											long BgL_offsetz00_3308;

																											BgL_offsetz00_3308 =
																												(
																												(long)
																												(BgL_offsetz00_3307) -
																												OBJECT_TYPE);
																											{	/* Cgen/emit_cop.scm 359 */
																												long BgL_modz00_3309;

																												{	/* Cgen/emit_cop.scm 359 */
																													int
																														BgL_arg2645z00_3310;
																													BgL_arg2645z00_3310 =
																														(int) (((long) 16));
																													{	/* Cgen/emit_cop.scm 359 */
																														long
																															BgL_auxz00_5788;
																														BgL_auxz00_5788 =
																															(long)
																															(BgL_arg2645z00_3310);
																														BgL_modz00_3309 =
																															(BgL_offsetz00_3308
																															/
																															BgL_auxz00_5788);
																												}}
																												{	/* Cgen/emit_cop.scm 359 */
																													long BgL_restz00_3311;

																													{	/* Cgen/emit_cop.scm 359 */
																														int
																															BgL_arg2644z00_3312;
																														BgL_arg2644z00_3312
																															=
																															(int) (((long)
																																16));
																														{	/* Cgen/emit_cop.scm 359 */
																															long
																																BgL_auxz00_5792;
																															BgL_auxz00_5792 =
																																(long)
																																(BgL_arg2644z00_3312);
																															BgL_restz00_3311 =
																																(BgL_offsetz00_3308
																																%
																																BgL_auxz00_5792);
																													}}
																													{	/* Cgen/emit_cop.scm 359 */

																														BgL_method3847z00_3301
																															=
																															VECTOR_REF
																															(VECTOR_REF
																															(BgL_arrayz00_3306,
																																(int)
																																(BgL_modz00_3309)),
																															(int)
																															(BgL_restz00_3311));
																						}}}}}}}}
																						BgL_res4438z00_3326 =
																							CBOOL(PROCEDURE_ENTRY
																							(BgL_method3847z00_3301)
																							(BgL_method3847z00_3301,
																								(obj_t) (BgL_copz00_3300),
																								BEOA));
																				}} BgL_res4438z00_3326;
																		}}
																		bgl_display_string
																			(BGl_string4568z00zzcgen_emitzd2copzd2,
																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																		{
																			obj_t BgL_actualsz00_5804;

																			BgL_actualsz00_5804 =
																				CDR(BgL_actualsz00_1988);
																			BgL_actualsz00_1988 = BgL_actualsz00_5804;
																			goto BgL_zc3anonymousza34223ze3z83_1989;
																		}
																	}
															}
														}
													}
													bgl_display_string
														(BGl_string4591z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BgL_auxz00_5507 = ((bool_t) 1);
												}
											else
												{	/* Cgen/emit_cop.scm 379 */
													BgL_auxz00_5507 =
														BGl_emitzd2regularzd2cfuncallzf2eoazf2zzcgen_emitzd2copzd2
														(BgL_copz00_1935);
												}
										}
								}
						}
					}
					return BBOOL(BgL_auxz00_5507);
				}
			}
		}
	}



/* emit-regular-cfuncall/eoa */
	bool_t
		BGl_emitzd2regularzd2cfuncallzf2eoazf2zzcgen_emitzd2copzd2
		(BgL_cfuncallz00_bglt BgL_copz00_1942)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 328 */
			{	/* Cgen/emit_cop.scm 329 */
				obj_t BgL_actualsz00_1974;

				BgL_actualsz00_1974 =
					(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1942))->BgL_argsz00);
				bgl_display_string(BGl_string4588z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{	/* Cgen/emit_cop.scm 331 */
					BgL_copz00_bglt BgL_arg4215z00_1975;

					BgL_arg4215z00_1975 =
						(((BgL_cfuncallz00_bglt) CREF(BgL_copz00_1942))->BgL_funz00);
					{	/* Cgen/emit_cop.scm 331 */
						bool_t BgL_res4423z00_3165;

						{	/* Cgen/emit_cop.scm 331 */
							obj_t BgL_method3847z00_3140;

							{	/* Cgen/emit_cop.scm 331 */
								BgL_objectz00_bglt BgL_objz00_3141;

								BgL_objz00_3141 = (BgL_objectz00_bglt) (BgL_arg4215z00_1975);
								{	/* Cgen/emit_cop.scm 331 */
									long BgL_objzd2classzd2numz00_3142;

									BgL_objzd2classzd2numz00_3142 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3141);
									{	/* Cgen/emit_cop.scm 331 */
										obj_t BgL_arg2643z00_3143;

										BgL_arg2643z00_3143 =
											PROCEDURE_REF(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
											(int) (((long) 1)));
										{	/* Cgen/emit_cop.scm 331 */
											obj_t BgL_arrayz00_3145;

											int BgL_offsetz00_3146;

											BgL_arrayz00_3145 = BgL_arg2643z00_3143;
											BgL_offsetz00_3146 =
												(int) (BgL_objzd2classzd2numz00_3142);
											{	/* Cgen/emit_cop.scm 331 */
												long BgL_offsetz00_3147;

												BgL_offsetz00_3147 =
													((long) (BgL_offsetz00_3146) - OBJECT_TYPE);
												{	/* Cgen/emit_cop.scm 331 */
													long BgL_modz00_3148;

													{	/* Cgen/emit_cop.scm 331 */
														int BgL_arg2645z00_3149;

														BgL_arg2645z00_3149 = (int) (((long) 16));
														{	/* Cgen/emit_cop.scm 331 */
															long BgL_auxz00_5821;

															BgL_auxz00_5821 = (long) (BgL_arg2645z00_3149);
															BgL_modz00_3148 =
																(BgL_offsetz00_3147 / BgL_auxz00_5821);
													}}
													{	/* Cgen/emit_cop.scm 331 */
														long BgL_restz00_3150;

														{	/* Cgen/emit_cop.scm 331 */
															int BgL_arg2644z00_3151;

															BgL_arg2644z00_3151 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 331 */
																long BgL_auxz00_5825;

																BgL_auxz00_5825 = (long) (BgL_arg2644z00_3151);
																BgL_restz00_3150 =
																	(BgL_offsetz00_3147 % BgL_auxz00_5825);
														}}
														{	/* Cgen/emit_cop.scm 331 */

															BgL_method3847z00_3140 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3145,
																	(int) (BgL_modz00_3148)),
																(int) (BgL_restz00_3150));
							}}}}}}}}
							BgL_res4423z00_3165 =
								CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3140)
								(BgL_method3847z00_3140, (obj_t) (BgL_arg4215z00_1975), BEOA));
						} BgL_res4423z00_3165;
				}}
				bgl_display_string(BGl_string4586z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{
					obj_t BgL_actualsz00_1977;

					BgL_actualsz00_1977 = BgL_actualsz00_1974;
				BgL_zc3anonymousza34216ze3z83_1978:
					if (NULLP(CDR(BgL_actualsz00_1977)))
						{	/* Cgen/emit_cop.scm 336 */
							{	/* Cgen/emit_cop.scm 338 */
								obj_t BgL_arg4218z00_1980;

								BgL_arg4218z00_1980 = CAR(BgL_actualsz00_1977);
								{	/* Cgen/emit_cop.scm 338 */
									bool_t BgL_res4426z00_3197;

									{	/* Cgen/emit_cop.scm 338 */
										BgL_copz00_bglt BgL_copz00_3171;

										BgL_copz00_3171 = (BgL_copz00_bglt) (BgL_arg4218z00_1980);
										{	/* Cgen/emit_cop.scm 338 */
											obj_t BgL_method3847z00_3172;

											{	/* Cgen/emit_cop.scm 338 */
												BgL_objectz00_bglt BgL_objz00_3173;

												BgL_objz00_3173 =
													(BgL_objectz00_bglt) (BgL_copz00_3171);
												{	/* Cgen/emit_cop.scm 338 */
													long BgL_objzd2classzd2numz00_3174;

													BgL_objzd2classzd2numz00_3174 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3173);
													{	/* Cgen/emit_cop.scm 338 */
														obj_t BgL_arg2643z00_3175;

														BgL_arg2643z00_3175 =
															PROCEDURE_REF
															(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
															(int) (((long) 1)));
														{	/* Cgen/emit_cop.scm 338 */
															obj_t BgL_arrayz00_3177;

															int BgL_offsetz00_3178;

															BgL_arrayz00_3177 = BgL_arg2643z00_3175;
															BgL_offsetz00_3178 =
																(int) (BgL_objzd2classzd2numz00_3174);
															{	/* Cgen/emit_cop.scm 338 */
																long BgL_offsetz00_3179;

																BgL_offsetz00_3179 =
																	((long) (BgL_offsetz00_3178) - OBJECT_TYPE);
																{	/* Cgen/emit_cop.scm 338 */
																	long BgL_modz00_3180;

																	{	/* Cgen/emit_cop.scm 338 */
																		int BgL_arg2645z00_3181;

																		BgL_arg2645z00_3181 = (int) (((long) 16));
																		{	/* Cgen/emit_cop.scm 338 */
																			long BgL_auxz00_5850;

																			BgL_auxz00_5850 =
																				(long) (BgL_arg2645z00_3181);
																			BgL_modz00_3180 =
																				(BgL_offsetz00_3179 / BgL_auxz00_5850);
																	}}
																	{	/* Cgen/emit_cop.scm 338 */
																		long BgL_restz00_3182;

																		{	/* Cgen/emit_cop.scm 338 */
																			int BgL_arg2644z00_3183;

																			BgL_arg2644z00_3183 = (int) (((long) 16));
																			{	/* Cgen/emit_cop.scm 338 */
																				long BgL_auxz00_5854;

																				BgL_auxz00_5854 =
																					(long) (BgL_arg2644z00_3183);
																				BgL_restz00_3182 =
																					(BgL_offsetz00_3179 %
																					BgL_auxz00_5854);
																		}}
																		{	/* Cgen/emit_cop.scm 338 */

																			BgL_method3847z00_3172 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3177,
																					(int) (BgL_modz00_3180)),
																				(int) (BgL_restz00_3182));
											}}}}}}}}
											BgL_res4426z00_3197 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3172)
												(BgL_method3847z00_3172, (obj_t) (BgL_copz00_3171),
													BEOA));
									}} BgL_res4426z00_3197;
							}}
							bgl_display_string(BGl_string4587z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							return ((bool_t) 1);
						}
					else
						{	/* Cgen/emit_cop.scm 336 */
							{	/* Cgen/emit_cop.scm 342 */
								obj_t BgL_arg4219z00_1981;

								BgL_arg4219z00_1981 = CAR(BgL_actualsz00_1977);
								{	/* Cgen/emit_cop.scm 342 */
									bool_t BgL_res4429z00_3227;

									{	/* Cgen/emit_cop.scm 342 */
										BgL_copz00_bglt BgL_copz00_3201;

										BgL_copz00_3201 = (BgL_copz00_bglt) (BgL_arg4219z00_1981);
										{	/* Cgen/emit_cop.scm 342 */
											obj_t BgL_method3847z00_3202;

											{	/* Cgen/emit_cop.scm 342 */
												BgL_objectz00_bglt BgL_objz00_3203;

												BgL_objz00_3203 =
													(BgL_objectz00_bglt) (BgL_copz00_3201);
												{	/* Cgen/emit_cop.scm 342 */
													long BgL_objzd2classzd2numz00_3204;

													BgL_objzd2classzd2numz00_3204 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3203);
													{	/* Cgen/emit_cop.scm 342 */
														obj_t BgL_arg2643z00_3205;

														BgL_arg2643z00_3205 =
															PROCEDURE_REF
															(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
															(int) (((long) 1)));
														{	/* Cgen/emit_cop.scm 342 */
															obj_t BgL_arrayz00_3207;

															int BgL_offsetz00_3208;

															BgL_arrayz00_3207 = BgL_arg2643z00_3205;
															BgL_offsetz00_3208 =
																(int) (BgL_objzd2classzd2numz00_3204);
															{	/* Cgen/emit_cop.scm 342 */
																long BgL_offsetz00_3209;

																BgL_offsetz00_3209 =
																	((long) (BgL_offsetz00_3208) - OBJECT_TYPE);
																{	/* Cgen/emit_cop.scm 342 */
																	long BgL_modz00_3210;

																	{	/* Cgen/emit_cop.scm 342 */
																		int BgL_arg2645z00_3211;

																		BgL_arg2645z00_3211 = (int) (((long) 16));
																		{	/* Cgen/emit_cop.scm 342 */
																			long BgL_auxz00_5876;

																			BgL_auxz00_5876 =
																				(long) (BgL_arg2645z00_3211);
																			BgL_modz00_3210 =
																				(BgL_offsetz00_3209 / BgL_auxz00_5876);
																	}}
																	{	/* Cgen/emit_cop.scm 342 */
																		long BgL_restz00_3212;

																		{	/* Cgen/emit_cop.scm 342 */
																			int BgL_arg2644z00_3213;

																			BgL_arg2644z00_3213 = (int) (((long) 16));
																			{	/* Cgen/emit_cop.scm 342 */
																				long BgL_auxz00_5880;

																				BgL_auxz00_5880 =
																					(long) (BgL_arg2644z00_3213);
																				BgL_restz00_3212 =
																					(BgL_offsetz00_3209 %
																					BgL_auxz00_5880);
																		}}
																		{	/* Cgen/emit_cop.scm 342 */

																			BgL_method3847z00_3202 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3207,
																					(int) (BgL_modz00_3210)),
																				(int) (BgL_restz00_3212));
											}}}}}}}}
											BgL_res4429z00_3227 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_3202)
												(BgL_method3847z00_3202, (obj_t) (BgL_copz00_3201),
													BEOA));
									}} BgL_res4429z00_3227;
							}}
							bgl_display_string(BGl_string4568z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{
								obj_t BgL_actualsz00_5892;

								BgL_actualsz00_5892 = CDR(BgL_actualsz00_1977);
								BgL_actualsz00_1977 = BgL_actualsz00_5892;
								goto BgL_zc3anonymousza34216ze3z83_1978;
							}
						}
				}
			}
		}
	}



/* emit-cop-bdb-block3879 */
	obj_t BGl_emitzd2copzd2bdbzd2block3879zd2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4379, obj_t BgL_copz00_4380)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 283 */
			{
				BgL_bdbzd2blockzd2_bglt BgL_copz00_1926;

				BgL_copz00_1926 = (BgL_bdbzd2blockzd2_bglt) (BgL_copz00_4380);
				{	/* Cgen/emit_cop.scm 285 */
					obj_t BgL_arg4195z00_1930;

					{
						BgL_copz00_bglt BgL_auxz00_5894;

						BgL_auxz00_5894 = (BgL_copz00_bglt) (BgL_copz00_1926);
						BgL_arg4195z00_1930 =
							(((BgL_copz00_bglt) CREF(BgL_auxz00_5894))->BgL_locz00);
					}
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4195z00_1930);
				}
				bgl_display_string(BGl_string4592z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{	/* Cgen/emit_cop.scm 287 */
					BgL_copz00_bglt BgL_arg4196z00_1932;

					BgL_arg4196z00_1932 =
						(((BgL_bdbzd2blockzd2_bglt) CREF(BgL_copz00_1926))->BgL_bodyz00);
					{	/* Cgen/emit_cop.scm 287 */
						bool_t BgL_res4402z00_2930;

						{	/* Cgen/emit_cop.scm 287 */
							obj_t BgL_method3847z00_2905;

							{	/* Cgen/emit_cop.scm 287 */
								BgL_objectz00_bglt BgL_objz00_2906;

								BgL_objz00_2906 = (BgL_objectz00_bglt) (BgL_arg4196z00_1932);
								{	/* Cgen/emit_cop.scm 287 */
									long BgL_objzd2classzd2numz00_2907;

									BgL_objzd2classzd2numz00_2907 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2906);
									{	/* Cgen/emit_cop.scm 287 */
										obj_t BgL_arg2643z00_2908;

										BgL_arg2643z00_2908 =
											PROCEDURE_REF(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
											(int) (((long) 1)));
										{	/* Cgen/emit_cop.scm 287 */
											obj_t BgL_arrayz00_2910;

											int BgL_offsetz00_2911;

											BgL_arrayz00_2910 = BgL_arg2643z00_2908;
											BgL_offsetz00_2911 =
												(int) (BgL_objzd2classzd2numz00_2907);
											{	/* Cgen/emit_cop.scm 287 */
												long BgL_offsetz00_2912;

												BgL_offsetz00_2912 =
													((long) (BgL_offsetz00_2911) - OBJECT_TYPE);
												{	/* Cgen/emit_cop.scm 287 */
													long BgL_modz00_2913;

													{	/* Cgen/emit_cop.scm 287 */
														int BgL_arg2645z00_2914;

														BgL_arg2645z00_2914 = (int) (((long) 16));
														{	/* Cgen/emit_cop.scm 287 */
															long BgL_auxz00_5908;

															BgL_auxz00_5908 = (long) (BgL_arg2645z00_2914);
															BgL_modz00_2913 =
																(BgL_offsetz00_2912 / BgL_auxz00_5908);
													}}
													{	/* Cgen/emit_cop.scm 287 */
														long BgL_restz00_2915;

														{	/* Cgen/emit_cop.scm 287 */
															int BgL_arg2644z00_2916;

															BgL_arg2644z00_2916 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 287 */
																long BgL_auxz00_5912;

																BgL_auxz00_5912 = (long) (BgL_arg2644z00_2916);
																BgL_restz00_2915 =
																	(BgL_offsetz00_2912 % BgL_auxz00_5912);
														}}
														{	/* Cgen/emit_cop.scm 287 */

															BgL_method3847z00_2905 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2910,
																	(int) (BgL_modz00_2913)),
																(int) (BgL_restz00_2915));
							}}}}}}}}
							BgL_res4402z00_2930 =
								CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2905)
								(BgL_method3847z00_2905, (obj_t) (BgL_arg4196z00_1932), BEOA));
						} BgL_res4402z00_2930;
				}}
				bgl_display_string(BGl_string4566z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				return BNIL;
			}
		}
	}



/* emit-cop-local-var3877 */
	obj_t BGl_emitzd2copzd2localzd2var3877zd2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4381, obj_t BgL_copz00_4382)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 260 */
			{
				BgL_localzd2varzd2_bglt BgL_copz00_1896;

				{	/* Cgen/emit_cop.scm 261 */
					bool_t BgL_auxz00_5925;

					BgL_copz00_1896 = (BgL_localzd2varzd2_bglt) (BgL_copz00_4382);
					{	/* Cgen/emit_cop.scm 262 */
						obj_t BgL_arg4174z00_1900;

						{
							BgL_copz00_bglt BgL_auxz00_5926;

							BgL_auxz00_5926 = (BgL_copz00_bglt) (BgL_copz00_1896);
							BgL_arg4174z00_1900 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_5926))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4174z00_1900);
					}
					{	/* Cgen/emit_cop.scm 263 */
						obj_t BgL_g3840z00_1901;

						BgL_g3840z00_1901 =
							(((BgL_localzd2varzd2_bglt) CREF(BgL_copz00_1896))->BgL_varsz00);
						{
							obj_t BgL_l3838z00_1903;

							BgL_l3838z00_1903 = BgL_g3840z00_1901;
						BgL_zc3anonymousza34175ze3z83_1904:
							if (PAIRP(BgL_l3838z00_1903))
								{	/* Cgen/emit_cop.scm 263 */
									{	/* Cgen/emit_cop.scm 264 */
										obj_t BgL_localz00_1906;

										BgL_localz00_1906 = CAR(BgL_l3838z00_1903);
										{	/* Cgen/emit_cop.scm 264 */
											obj_t BgL_port3818z00_1907;

											BgL_port3818z00_1907 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											{	/* Cgen/emit_cop.scm 265 */
												obj_t BgL_arg4178z00_1908;

												{	/* Cgen/emit_cop.scm 265 */
													BgL_typez00_bglt BgL_arg4180z00_1909;

													obj_t BgL_arg4181z00_1910;

													{
														BgL_variablez00_bglt BgL_auxz00_5934;

														BgL_auxz00_5934 =
															(BgL_variablez00_bglt) (BgL_localz00_1906);
														BgL_arg4180z00_1909 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_5934))->
															BgL_typez00);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_5937;

														BgL_auxz00_5937 =
															(BgL_variablez00_bglt) (BgL_localz00_1906);
														BgL_arg4181z00_1910 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_5937))->
															BgL_namez00);
													}
													BgL_arg4178z00_1908 =
														BGl_makezd2typedzd2declarationz00zztype_toolsz00
														(BgL_arg4180z00_1909, BgL_arg4181z00_1910);
												}
												bgl_display_obj(BgL_arg4178z00_1908,
													BgL_port3818z00_1907);
											}
											{	/* Cgen/emit_cop.scm 267 */
												obj_t BgL_arg4182z00_1911;

												{	/* Cgen/emit_cop.scm 267 */
													bool_t BgL_testz00_5942;

													if (
														((long)
															CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
															((long) 0)))
														{	/* Cgen/emit_cop.scm 268 */
															obj_t BgL_auxz00_5946;

															{	/* Cgen/emit_cop.scm 268 */
																BgL_typez00_bglt BgL_obj1515z00_2895;

																{
																	BgL_variablez00_bglt BgL_auxz00_5947;

																	BgL_auxz00_5947 =
																		(BgL_variablez00_bglt) (BgL_localz00_1906);
																	BgL_obj1515z00_2895 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_5947))->BgL_typez00);
																}
																BgL_auxz00_5946 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_obj1515z00_2895))->BgL_classz00);
															}
															BgL_testz00_5942 =
																(BgL_auxz00_5946 == CNST_TABLE_REF(((long) 8)));
														}
													else
														{	/* Cgen/emit_cop.scm 267 */
															BgL_testz00_5942 = ((bool_t) 0);
														}
													if (BgL_testz00_5942)
														{	/* Cgen/emit_cop.scm 270 */
															obj_t BgL_arg4185z00_1914;

															{	/* Cgen/emit_cop.scm 272 */
																BgL_typez00_bglt BgL_arg4187z00_1916;

																{
																	BgL_variablez00_bglt BgL_auxz00_5953;

																	BgL_auxz00_5953 =
																		(BgL_variablez00_bglt) (BgL_localz00_1906);
																	BgL_arg4187z00_1916 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_5953))->BgL_typez00);
																}
																BgL_arg4185z00_1914 =
																	BGl_makezd2typedzd2declarationz00zztype_toolsz00
																	(BgL_arg4187z00_1916,
																	BGl_string4593z00zzcgen_emitzd2copzd2);
															}
															BgL_arg4182z00_1911 =
																string_append_3
																(BGl_string4594z00zzcgen_emitzd2copzd2,
																BgL_arg4185z00_1914,
																BGl_string4595z00zzcgen_emitzd2copzd2);
														}
													else
														{	/* Cgen/emit_cop.scm 267 */
															BgL_arg4182z00_1911 =
																BGl_string4593z00zzcgen_emitzd2copzd2;
														}
												}
												bgl_display_obj(BgL_arg4182z00_1911,
													BgL_port3818z00_1907);
											}
											bgl_display_char(((unsigned char) ';'),
												BgL_port3818z00_1907);
									}}
									{
										obj_t BgL_l3838z00_5960;

										BgL_l3838z00_5960 = CDR(BgL_l3838z00_1903);
										BgL_l3838z00_1903 = BgL_l3838z00_5960;
										goto BgL_zc3anonymousza34175ze3z83_1904;
									}
								}
							else
								{	/* Cgen/emit_cop.scm 263 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_5925 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_5925);
				}
			}
		}
	}



/* emit-cop-cif3875 */
	obj_t BGl_emitzd2copzd2cif3875z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4383,
		obj_t BgL_copz00_4384)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 247 */
			{
				BgL_cifz00_bglt BgL_copz00_1886;

				{	/* Cgen/emit_cop.scm 248 */
					bool_t BgL_auxz00_5964;

					BgL_copz00_1886 = (BgL_cifz00_bglt) (BgL_copz00_4384);
					{	/* Cgen/emit_cop.scm 249 */
						obj_t BgL_arg4169z00_1890;

						{
							BgL_copz00_bglt BgL_auxz00_5965;

							BgL_auxz00_5965 = (BgL_copz00_bglt) (BgL_copz00_1886);
							BgL_arg4169z00_1890 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_5965))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4169z00_1890);
					}
					bgl_display_string(BGl_string4596z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 251 */
						BgL_copz00_bglt BgL_arg4170z00_1891;

						BgL_arg4170z00_1891 =
							(((BgL_cifz00_bglt) CREF(BgL_copz00_1886))->BgL_testz00);
						{	/* Cgen/emit_cop.scm 251 */
							bool_t BgL_res4393z00_2825;

							{	/* Cgen/emit_cop.scm 251 */
								obj_t BgL_method3847z00_2800;

								{	/* Cgen/emit_cop.scm 251 */
									BgL_objectz00_bglt BgL_objz00_2801;

									BgL_objz00_2801 = (BgL_objectz00_bglt) (BgL_arg4170z00_1891);
									{	/* Cgen/emit_cop.scm 251 */
										long BgL_objzd2classzd2numz00_2802;

										BgL_objzd2classzd2numz00_2802 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2801);
										{	/* Cgen/emit_cop.scm 251 */
											obj_t BgL_arg2643z00_2803;

											BgL_arg2643z00_2803 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 251 */
												obj_t BgL_arrayz00_2805;

												int BgL_offsetz00_2806;

												BgL_arrayz00_2805 = BgL_arg2643z00_2803;
												BgL_offsetz00_2806 =
													(int) (BgL_objzd2classzd2numz00_2802);
												{	/* Cgen/emit_cop.scm 251 */
													long BgL_offsetz00_2807;

													BgL_offsetz00_2807 =
														((long) (BgL_offsetz00_2806) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 251 */
														long BgL_modz00_2808;

														{	/* Cgen/emit_cop.scm 251 */
															int BgL_arg2645z00_2809;

															BgL_arg2645z00_2809 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 251 */
																long BgL_auxz00_5979;

																BgL_auxz00_5979 = (long) (BgL_arg2645z00_2809);
																BgL_modz00_2808 =
																	(BgL_offsetz00_2807 / BgL_auxz00_5979);
														}}
														{	/* Cgen/emit_cop.scm 251 */
															long BgL_restz00_2810;

															{	/* Cgen/emit_cop.scm 251 */
																int BgL_arg2644z00_2811;

																BgL_arg2644z00_2811 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 251 */
																	long BgL_auxz00_5983;

																	BgL_auxz00_5983 =
																		(long) (BgL_arg2644z00_2811);
																	BgL_restz00_2810 =
																		(BgL_offsetz00_2807 % BgL_auxz00_5983);
															}}
															{	/* Cgen/emit_cop.scm 251 */

																BgL_method3847z00_2800 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2805,
																		(int) (BgL_modz00_2808)),
																	(int) (BgL_restz00_2810));
								}}}}}}}}
								BgL_res4393z00_2825 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2800)
									(BgL_method3847z00_2800, (obj_t) (BgL_arg4170z00_1891),
										BEOA));
							} BgL_res4393z00_2825;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 253 */
						BgL_copz00_bglt BgL_arg4171z00_1892;

						BgL_arg4171z00_1892 =
							(((BgL_cifz00_bglt) CREF(BgL_copz00_1886))->BgL_truez00);
						{	/* Cgen/emit_cop.scm 253 */
							bool_t BgL_res4396z00_2855;

							{	/* Cgen/emit_cop.scm 253 */
								obj_t BgL_method3847z00_2830;

								{	/* Cgen/emit_cop.scm 253 */
									BgL_objectz00_bglt BgL_objz00_2831;

									BgL_objz00_2831 = (BgL_objectz00_bglt) (BgL_arg4171z00_1892);
									{	/* Cgen/emit_cop.scm 253 */
										long BgL_objzd2classzd2numz00_2832;

										BgL_objzd2classzd2numz00_2832 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2831);
										{	/* Cgen/emit_cop.scm 253 */
											obj_t BgL_arg2643z00_2833;

											BgL_arg2643z00_2833 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 253 */
												obj_t BgL_arrayz00_2835;

												int BgL_offsetz00_2836;

												BgL_arrayz00_2835 = BgL_arg2643z00_2833;
												BgL_offsetz00_2836 =
													(int) (BgL_objzd2classzd2numz00_2832);
												{	/* Cgen/emit_cop.scm 253 */
													long BgL_offsetz00_2837;

													BgL_offsetz00_2837 =
														((long) (BgL_offsetz00_2836) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 253 */
														long BgL_modz00_2838;

														{	/* Cgen/emit_cop.scm 253 */
															int BgL_arg2645z00_2839;

															BgL_arg2645z00_2839 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 253 */
																long BgL_auxz00_6004;

																BgL_auxz00_6004 = (long) (BgL_arg2645z00_2839);
																BgL_modz00_2838 =
																	(BgL_offsetz00_2837 / BgL_auxz00_6004);
														}}
														{	/* Cgen/emit_cop.scm 253 */
															long BgL_restz00_2840;

															{	/* Cgen/emit_cop.scm 253 */
																int BgL_arg2644z00_2841;

																BgL_arg2644z00_2841 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 253 */
																	long BgL_auxz00_6008;

																	BgL_auxz00_6008 =
																		(long) (BgL_arg2644z00_2841);
																	BgL_restz00_2840 =
																		(BgL_offsetz00_2837 % BgL_auxz00_6008);
															}}
															{	/* Cgen/emit_cop.scm 253 */

																BgL_method3847z00_2830 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2835,
																		(int) (BgL_modz00_2838)),
																	(int) (BgL_restz00_2840));
								}}}}}}}}
								BgL_res4396z00_2855 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2830)
									(BgL_method3847z00_2830, (obj_t) (BgL_arg4171z00_1892),
										BEOA));
							} BgL_res4396z00_2855;
					}}
					bgl_display_string(BGl_string4597z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 255 */
						BgL_copz00_bglt BgL_arg4172z00_1893;

						BgL_arg4172z00_1893 =
							(((BgL_cifz00_bglt) CREF(BgL_copz00_1886))->BgL_falsez00);
						{	/* Cgen/emit_cop.scm 255 */
							bool_t BgL_res4399z00_2885;

							{	/* Cgen/emit_cop.scm 255 */
								obj_t BgL_method3847z00_2860;

								{	/* Cgen/emit_cop.scm 255 */
									BgL_objectz00_bglt BgL_objz00_2861;

									BgL_objz00_2861 = (BgL_objectz00_bglt) (BgL_arg4172z00_1893);
									{	/* Cgen/emit_cop.scm 255 */
										long BgL_objzd2classzd2numz00_2862;

										BgL_objzd2classzd2numz00_2862 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2861);
										{	/* Cgen/emit_cop.scm 255 */
											obj_t BgL_arg2643z00_2863;

											BgL_arg2643z00_2863 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 255 */
												obj_t BgL_arrayz00_2865;

												int BgL_offsetz00_2866;

												BgL_arrayz00_2865 = BgL_arg2643z00_2863;
												BgL_offsetz00_2866 =
													(int) (BgL_objzd2classzd2numz00_2862);
												{	/* Cgen/emit_cop.scm 255 */
													long BgL_offsetz00_2867;

													BgL_offsetz00_2867 =
														((long) (BgL_offsetz00_2866) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 255 */
														long BgL_modz00_2868;

														{	/* Cgen/emit_cop.scm 255 */
															int BgL_arg2645z00_2869;

															BgL_arg2645z00_2869 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 255 */
																long BgL_auxz00_6029;

																BgL_auxz00_6029 = (long) (BgL_arg2645z00_2869);
																BgL_modz00_2868 =
																	(BgL_offsetz00_2867 / BgL_auxz00_6029);
														}}
														{	/* Cgen/emit_cop.scm 255 */
															long BgL_restz00_2870;

															{	/* Cgen/emit_cop.scm 255 */
																int BgL_arg2644z00_2871;

																BgL_arg2644z00_2871 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 255 */
																	long BgL_auxz00_6033;

																	BgL_auxz00_6033 =
																		(long) (BgL_arg2644z00_2871);
																	BgL_restz00_2870 =
																		(BgL_offsetz00_2867 % BgL_auxz00_6033);
															}}
															{	/* Cgen/emit_cop.scm 255 */

																BgL_method3847z00_2860 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2865,
																		(int) (BgL_modz00_2868)),
																	(int) (BgL_restz00_2870));
								}}}}}}}}
								BgL_res4399z00_2885 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2860)
									(BgL_method3847z00_2860, (obj_t) (BgL_arg4172z00_1893),
										BEOA));
							}
							BgL_auxz00_5964 = BgL_res4399z00_2885;
					}}
					return BBOOL(BgL_auxz00_5964);
				}
			}
		}
	}



/* emit-cop-csetq3873 */
	obj_t BGl_emitzd2copzd2csetq3873z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4385,
		obj_t BgL_copz00_4386)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 233 */
			{
				BgL_csetqz00_bglt BgL_copz00_1877;

				{	/* Cgen/emit_cop.scm 234 */
					bool_t BgL_auxz00_6046;

					BgL_copz00_1877 = (BgL_csetqz00_bglt) (BgL_copz00_4386);
					{	/* Cgen/emit_cop.scm 236 */
						obj_t BgL_arg4165z00_1881;

						{
							BgL_copz00_bglt BgL_auxz00_6047;

							BgL_auxz00_6047 = (BgL_copz00_bglt) (BgL_copz00_1877);
							BgL_arg4165z00_1881 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_6047))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4165z00_1881);
					}
					{	/* Cgen/emit_cop.scm 237 */
						BgL_varcz00_bglt BgL_arg4166z00_1882;

						BgL_arg4166z00_1882 =
							(((BgL_csetqz00_bglt) CREF(BgL_copz00_1877))->BgL_varz00);
						{	/* Cgen/emit_cop.scm 237 */
							bool_t BgL_res4387z00_2764;

							{	/* Cgen/emit_cop.scm 237 */
								BgL_copz00_bglt BgL_copz00_2738;

								BgL_copz00_2738 = (BgL_copz00_bglt) (BgL_arg4166z00_1882);
								{	/* Cgen/emit_cop.scm 237 */
									obj_t BgL_method3847z00_2739;

									{	/* Cgen/emit_cop.scm 237 */
										BgL_objectz00_bglt BgL_objz00_2740;

										BgL_objz00_2740 = (BgL_objectz00_bglt) (BgL_copz00_2738);
										{	/* Cgen/emit_cop.scm 237 */
											long BgL_objzd2classzd2numz00_2741;

											BgL_objzd2classzd2numz00_2741 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2740);
											{	/* Cgen/emit_cop.scm 237 */
												obj_t BgL_arg2643z00_2742;

												BgL_arg2643z00_2742 =
													PROCEDURE_REF
													(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
													(int) (((long) 1)));
												{	/* Cgen/emit_cop.scm 237 */
													obj_t BgL_arrayz00_2744;

													int BgL_offsetz00_2745;

													BgL_arrayz00_2744 = BgL_arg2643z00_2742;
													BgL_offsetz00_2745 =
														(int) (BgL_objzd2classzd2numz00_2741);
													{	/* Cgen/emit_cop.scm 237 */
														long BgL_offsetz00_2746;

														BgL_offsetz00_2746 =
															((long) (BgL_offsetz00_2745) - OBJECT_TYPE);
														{	/* Cgen/emit_cop.scm 237 */
															long BgL_modz00_2747;

															{	/* Cgen/emit_cop.scm 237 */
																int BgL_arg2645z00_2748;

																BgL_arg2645z00_2748 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 237 */
																	long BgL_auxz00_6061;

																	BgL_auxz00_6061 =
																		(long) (BgL_arg2645z00_2748);
																	BgL_modz00_2747 =
																		(BgL_offsetz00_2746 / BgL_auxz00_6061);
															}}
															{	/* Cgen/emit_cop.scm 237 */
																long BgL_restz00_2749;

																{	/* Cgen/emit_cop.scm 237 */
																	int BgL_arg2644z00_2750;

																	BgL_arg2644z00_2750 = (int) (((long) 16));
																	{	/* Cgen/emit_cop.scm 237 */
																		long BgL_auxz00_6065;

																		BgL_auxz00_6065 =
																			(long) (BgL_arg2644z00_2750);
																		BgL_restz00_2749 =
																			(BgL_offsetz00_2746 % BgL_auxz00_6065);
																}}
																{	/* Cgen/emit_cop.scm 237 */

																	BgL_method3847z00_2739 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2744,
																			(int) (BgL_modz00_2747)),
																		(int) (BgL_restz00_2749));
									}}}}}}}}
									BgL_res4387z00_2764 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2739)
										(BgL_method3847z00_2739, (obj_t) (BgL_copz00_2738), BEOA));
							}} BgL_res4387z00_2764;
					}}
					bgl_display_string(BGl_string4598z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 241 */
						BgL_copz00_bglt BgL_arg4167z00_1883;

						BgL_arg4167z00_1883 =
							(((BgL_csetqz00_bglt) CREF(BgL_copz00_1877))->BgL_valuez00);
						{	/* Cgen/emit_cop.scm 241 */
							bool_t BgL_res4390z00_2794;

							{	/* Cgen/emit_cop.scm 241 */
								obj_t BgL_method3847z00_2769;

								{	/* Cgen/emit_cop.scm 241 */
									BgL_objectz00_bglt BgL_objz00_2770;

									BgL_objz00_2770 = (BgL_objectz00_bglt) (BgL_arg4167z00_1883);
									{	/* Cgen/emit_cop.scm 241 */
										long BgL_objzd2classzd2numz00_2771;

										BgL_objzd2classzd2numz00_2771 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2770);
										{	/* Cgen/emit_cop.scm 241 */
											obj_t BgL_arg2643z00_2772;

											BgL_arg2643z00_2772 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 241 */
												obj_t BgL_arrayz00_2774;

												int BgL_offsetz00_2775;

												BgL_arrayz00_2774 = BgL_arg2643z00_2772;
												BgL_offsetz00_2775 =
													(int) (BgL_objzd2classzd2numz00_2771);
												{	/* Cgen/emit_cop.scm 241 */
													long BgL_offsetz00_2776;

													BgL_offsetz00_2776 =
														((long) (BgL_offsetz00_2775) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 241 */
														long BgL_modz00_2777;

														{	/* Cgen/emit_cop.scm 241 */
															int BgL_arg2645z00_2778;

															BgL_arg2645z00_2778 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 241 */
																long BgL_auxz00_6086;

																BgL_auxz00_6086 = (long) (BgL_arg2645z00_2778);
																BgL_modz00_2777 =
																	(BgL_offsetz00_2776 / BgL_auxz00_6086);
														}}
														{	/* Cgen/emit_cop.scm 241 */
															long BgL_restz00_2779;

															{	/* Cgen/emit_cop.scm 241 */
																int BgL_arg2644z00_2780;

																BgL_arg2644z00_2780 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 241 */
																	long BgL_auxz00_6090;

																	BgL_auxz00_6090 =
																		(long) (BgL_arg2644z00_2780);
																	BgL_restz00_2779 =
																		(BgL_offsetz00_2776 % BgL_auxz00_6090);
															}}
															{	/* Cgen/emit_cop.scm 241 */

																BgL_method3847z00_2769 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2774,
																		(int) (BgL_modz00_2777)),
																	(int) (BgL_restz00_2779));
								}}}}}}}}
								BgL_res4390z00_2794 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2769)
									(BgL_method3847z00_2769, (obj_t) (BgL_arg4167z00_1883),
										BEOA));
							} BgL_res4390z00_2794;
					}}
					BgL_auxz00_6046 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_6046);
				}
			}
		}
	}



/* emit-cop-stop3871 */
	obj_t BGl_emitzd2copzd2stop3871z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4387,
		obj_t BgL_copz00_4388)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 220 */
			{
				BgL_stopz00_bglt BgL_copz00_1869;

				{	/* Cgen/emit_cop.scm 221 */
					bool_t BgL_auxz00_6103;

					BgL_copz00_1869 = (BgL_stopz00_bglt) (BgL_copz00_4388);
					{	/* Cgen/emit_cop.scm 222 */
						bool_t BgL_testz00_6104;

						{	/* Cgen/emit_cop.scm 222 */
							BgL_copz00_bglt BgL_arg4163z00_1874;

							BgL_arg4163z00_1874 =
								(((BgL_stopz00_bglt) CREF(BgL_copz00_1869))->BgL_valuez00);
							{	/* Cgen/emit_cop.scm 222 */
								bool_t BgL_res4384z00_2733;

								{	/* Cgen/emit_cop.scm 222 */
									obj_t BgL_method3847z00_2708;

									{	/* Cgen/emit_cop.scm 222 */
										BgL_objectz00_bglt BgL_objz00_2709;

										BgL_objz00_2709 =
											(BgL_objectz00_bglt) (BgL_arg4163z00_1874);
										{	/* Cgen/emit_cop.scm 222 */
											long BgL_objzd2classzd2numz00_2710;

											BgL_objzd2classzd2numz00_2710 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2709);
											{	/* Cgen/emit_cop.scm 222 */
												obj_t BgL_arg2643z00_2711;

												BgL_arg2643z00_2711 =
													PROCEDURE_REF
													(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
													(int) (((long) 1)));
												{	/* Cgen/emit_cop.scm 222 */
													obj_t BgL_arrayz00_2713;

													int BgL_offsetz00_2714;

													BgL_arrayz00_2713 = BgL_arg2643z00_2711;
													BgL_offsetz00_2714 =
														(int) (BgL_objzd2classzd2numz00_2710);
													{	/* Cgen/emit_cop.scm 222 */
														long BgL_offsetz00_2715;

														BgL_offsetz00_2715 =
															((long) (BgL_offsetz00_2714) - OBJECT_TYPE);
														{	/* Cgen/emit_cop.scm 222 */
															long BgL_modz00_2716;

															{	/* Cgen/emit_cop.scm 222 */
																int BgL_arg2645z00_2717;

																BgL_arg2645z00_2717 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 222 */
																	long BgL_auxz00_6114;

																	BgL_auxz00_6114 =
																		(long) (BgL_arg2645z00_2717);
																	BgL_modz00_2716 =
																		(BgL_offsetz00_2715 / BgL_auxz00_6114);
															}}
															{	/* Cgen/emit_cop.scm 222 */
																long BgL_restz00_2718;

																{	/* Cgen/emit_cop.scm 222 */
																	int BgL_arg2644z00_2719;

																	BgL_arg2644z00_2719 = (int) (((long) 16));
																	{	/* Cgen/emit_cop.scm 222 */
																		long BgL_auxz00_6118;

																		BgL_auxz00_6118 =
																			(long) (BgL_arg2644z00_2719);
																		BgL_restz00_2718 =
																			(BgL_offsetz00_2715 % BgL_auxz00_6118);
																}}
																{	/* Cgen/emit_cop.scm 222 */

																	BgL_method3847z00_2708 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2713,
																			(int) (BgL_modz00_2716)),
																		(int) (BgL_restz00_2718));
									}}}}}}}}
									BgL_res4384z00_2733 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2708)
										(BgL_method3847z00_2708, (obj_t) (BgL_arg4163z00_1874),
											BEOA));
								}
								BgL_testz00_6104 = BgL_res4384z00_2733;
						}}
						if (BgL_testz00_6104)
							{	/* Cgen/emit_cop.scm 222 */
								bgl_display_string(BGl_string4574z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								BNIL;
							}
						else
							{	/* Cgen/emit_cop.scm 222 */
								BFALSE;
							}
					}
					BgL_auxz00_6103 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_6103);
				}
			}
		}
	}



/* emit-cop-nop3869 */
	obj_t BGl_emitzd2copzd2nop3869z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4389,
		obj_t BgL_copz00_4390)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 211 */
			{
				BgL_nopz00_bglt BgL_copz00_1863;

				{	/* Cgen/emit_cop.scm 215 */
					bool_t BgL_auxz00_6132;

					BgL_copz00_1863 = (BgL_nopz00_bglt) (BgL_copz00_4390);
					bgl_display_string(BGl_string4574z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_6132 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_6132);
				}
			}
		}
	}



/* emit-cop-csequence3867 */
	obj_t BGl_emitzd2copzd2csequence3867z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4391, obj_t BgL_copz00_4392)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 168 */
			{
				BgL_csequencez00_bglt BgL_copz00_1832;

				BgL_copz00_1832 = (BgL_csequencez00_bglt) (BgL_copz00_4392);
				if (
					(((BgL_csequencez00_bglt) CREF(BgL_copz00_1832))->BgL_czd2expzf3z21))
					{	/* Cgen/emit_cop.scm 170 */
						if (NULLP(
								(((BgL_csequencez00_bglt) CREF(BgL_copz00_1832))->BgL_copsz00)))
							{	/* Cgen/emit_cop.scm 172 */
								return BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BUNSPEC);
							}
						else
							{	/* Cgen/emit_cop.scm 172 */
								bgl_display_string(BGl_string4599z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								{
									obj_t BgL_expz00_1840;

									{	/* Cgen/emit_cop.scm 177 */
										obj_t BgL_arg4144z00_1839;

										BgL_arg4144z00_1839 =
											(((BgL_csequencez00_bglt) CREF(BgL_copz00_1832))->
											BgL_copsz00);
										{	/* Cgen/emit_cop.scm 177 */
											bool_t BgL_auxz00_6144;

											BgL_expz00_1840 = BgL_arg4144z00_1839;
										BgL_zc3anonymousza34145ze3z83_1841:
											if (NULLP(CDR(BgL_expz00_1840)))
												{	/* Cgen/emit_cop.scm 178 */
													{	/* Cgen/emit_cop.scm 180 */
														obj_t BgL_arg4147z00_1843;

														BgL_arg4147z00_1843 = CAR(BgL_expz00_1840);
														{	/* Cgen/emit_cop.scm 180 */
															bool_t BgL_res4375z00_2632;

															{	/* Cgen/emit_cop.scm 180 */
																BgL_copz00_bglt BgL_copz00_2606;

																BgL_copz00_2606 =
																	(BgL_copz00_bglt) (BgL_arg4147z00_1843);
																{	/* Cgen/emit_cop.scm 180 */
																	obj_t BgL_method3847z00_2607;

																	{	/* Cgen/emit_cop.scm 180 */
																		BgL_objectz00_bglt BgL_objz00_2608;

																		BgL_objz00_2608 =
																			(BgL_objectz00_bglt) (BgL_copz00_2606);
																		{	/* Cgen/emit_cop.scm 180 */
																			long BgL_objzd2classzd2numz00_2609;

																			BgL_objzd2classzd2numz00_2609 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2608);
																			{	/* Cgen/emit_cop.scm 180 */
																				obj_t BgL_arg2643z00_2610;

																				BgL_arg2643z00_2610 =
																					PROCEDURE_REF
																					(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																					(int) (((long) 1)));
																				{	/* Cgen/emit_cop.scm 180 */
																					obj_t BgL_arrayz00_2612;

																					int BgL_offsetz00_2613;

																					BgL_arrayz00_2612 =
																						BgL_arg2643z00_2610;
																					BgL_offsetz00_2613 =
																						(int)
																						(BgL_objzd2classzd2numz00_2609);
																					{	/* Cgen/emit_cop.scm 180 */
																						long BgL_offsetz00_2614;

																						BgL_offsetz00_2614 =
																							(
																							(long) (BgL_offsetz00_2613) -
																							OBJECT_TYPE);
																						{	/* Cgen/emit_cop.scm 180 */
																							long BgL_modz00_2615;

																							{	/* Cgen/emit_cop.scm 180 */
																								int BgL_arg2645z00_2616;

																								BgL_arg2645z00_2616 =
																									(int) (((long) 16));
																								{	/* Cgen/emit_cop.scm 180 */
																									long BgL_auxz00_6158;

																									BgL_auxz00_6158 =
																										(long)
																										(BgL_arg2645z00_2616);
																									BgL_modz00_2615 =
																										(BgL_offsetz00_2614 /
																										BgL_auxz00_6158);
																							}}
																							{	/* Cgen/emit_cop.scm 180 */
																								long BgL_restz00_2617;

																								{	/* Cgen/emit_cop.scm 180 */
																									int BgL_arg2644z00_2618;

																									BgL_arg2644z00_2618 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 180 */
																										long BgL_auxz00_6162;

																										BgL_auxz00_6162 =
																											(long)
																											(BgL_arg2644z00_2618);
																										BgL_restz00_2617 =
																											(BgL_offsetz00_2614 %
																											BgL_auxz00_6162);
																								}}
																								{	/* Cgen/emit_cop.scm 180 */

																									BgL_method3847z00_2607 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2612,
																											(int) (BgL_modz00_2615)),
																										(int) (BgL_restz00_2617));
																	}}}}}}}}
																	BgL_res4375z00_2632 =
																		CBOOL(PROCEDURE_ENTRY
																		(BgL_method3847z00_2607)
																		(BgL_method3847z00_2607,
																			(obj_t) (BgL_copz00_2606), BEOA));
															}} BgL_res4375z00_2632;
													}}
													bgl_display_string
														(BGl_string4600z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BgL_auxz00_6144 = ((bool_t) 1);
												}
											else
												{	/* Cgen/emit_cop.scm 178 */
													{	/* Cgen/emit_cop.scm 185 */
														obj_t BgL_arg4148z00_1844;

														BgL_arg4148z00_1844 = CAR(BgL_expz00_1840);
														{	/* Cgen/emit_cop.scm 185 */
															bool_t BgL_res4378z00_2662;

															{	/* Cgen/emit_cop.scm 185 */
																BgL_copz00_bglt BgL_copz00_2636;

																BgL_copz00_2636 =
																	(BgL_copz00_bglt) (BgL_arg4148z00_1844);
																{	/* Cgen/emit_cop.scm 185 */
																	obj_t BgL_method3847z00_2637;

																	{	/* Cgen/emit_cop.scm 185 */
																		BgL_objectz00_bglt BgL_objz00_2638;

																		BgL_objz00_2638 =
																			(BgL_objectz00_bglt) (BgL_copz00_2636);
																		{	/* Cgen/emit_cop.scm 185 */
																			long BgL_objzd2classzd2numz00_2639;

																			BgL_objzd2classzd2numz00_2639 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2638);
																			{	/* Cgen/emit_cop.scm 185 */
																				obj_t BgL_arg2643z00_2640;

																				BgL_arg2643z00_2640 =
																					PROCEDURE_REF
																					(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																					(int) (((long) 1)));
																				{	/* Cgen/emit_cop.scm 185 */
																					obj_t BgL_arrayz00_2642;

																					int BgL_offsetz00_2643;

																					BgL_arrayz00_2642 =
																						BgL_arg2643z00_2640;
																					BgL_offsetz00_2643 =
																						(int)
																						(BgL_objzd2classzd2numz00_2639);
																					{	/* Cgen/emit_cop.scm 185 */
																						long BgL_offsetz00_2644;

																						BgL_offsetz00_2644 =
																							(
																							(long) (BgL_offsetz00_2643) -
																							OBJECT_TYPE);
																						{	/* Cgen/emit_cop.scm 185 */
																							long BgL_modz00_2645;

																							{	/* Cgen/emit_cop.scm 185 */
																								int BgL_arg2645z00_2646;

																								BgL_arg2645z00_2646 =
																									(int) (((long) 16));
																								{	/* Cgen/emit_cop.scm 185 */
																									long BgL_auxz00_6184;

																									BgL_auxz00_6184 =
																										(long)
																										(BgL_arg2645z00_2646);
																									BgL_modz00_2645 =
																										(BgL_offsetz00_2644 /
																										BgL_auxz00_6184);
																							}}
																							{	/* Cgen/emit_cop.scm 185 */
																								long BgL_restz00_2647;

																								{	/* Cgen/emit_cop.scm 185 */
																									int BgL_arg2644z00_2648;

																									BgL_arg2644z00_2648 =
																										(int) (((long) 16));
																									{	/* Cgen/emit_cop.scm 185 */
																										long BgL_auxz00_6188;

																										BgL_auxz00_6188 =
																											(long)
																											(BgL_arg2644z00_2648);
																										BgL_restz00_2647 =
																											(BgL_offsetz00_2644 %
																											BgL_auxz00_6188);
																								}}
																								{	/* Cgen/emit_cop.scm 185 */

																									BgL_method3847z00_2637 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2642,
																											(int) (BgL_modz00_2645)),
																										(int) (BgL_restz00_2647));
																	}}}}}}}}
																	BgL_res4378z00_2662 =
																		CBOOL(PROCEDURE_ENTRY
																		(BgL_method3847z00_2637)
																		(BgL_method3847z00_2637,
																			(obj_t) (BgL_copz00_2636), BEOA));
															}} BgL_res4378z00_2662;
													}}
													{	/* Cgen/emit_cop.scm 186 */
														bool_t BgL_testz00_6199;

														{	/* Cgen/emit_cop.scm 186 */
															obj_t BgL_arg4151z00_1847;

															BgL_arg4151z00_1847 = CAR(BgL_expz00_1840);
															BgL_testz00_6199 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_arg4151z00_1847,
																BGl_cfailz00zzcgen_copz00);
														}
														if (BgL_testz00_6199)
															{	/* Cgen/emit_cop.scm 186 */
																bgl_display_string
																	(BGl_string4600z00zzcgen_emitzd2copzd2,
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																BgL_auxz00_6144 = ((bool_t) 1);
															}
														else
															{	/* Cgen/emit_cop.scm 186 */
																bgl_display_string
																	(BGl_string4568z00zzcgen_emitzd2copzd2,
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																{
																	obj_t BgL_expz00_6204;

																	BgL_expz00_6204 = CDR(BgL_expz00_1840);
																	BgL_expz00_1840 = BgL_expz00_6204;
																	goto BgL_zc3anonymousza34145ze3z83_1841;
																}
															}
													}
												}
											return BBOOL(BgL_auxz00_6144);
										}
									}
								}
							}
					}
				else
					{
						obj_t BgL_expz00_1853;

						{	/* Cgen/emit_cop.scm 195 */
							obj_t BgL_arg4154z00_1852;

							BgL_arg4154z00_1852 =
								(((BgL_csequencez00_bglt) CREF(BgL_copz00_1832))->BgL_copsz00);
							{	/* Cgen/emit_cop.scm 195 */
								bool_t BgL_auxz00_6208;

								BgL_expz00_1853 = BgL_arg4154z00_1852;
							BgL_zc3anonymousza34155ze3z83_1854:
								if (NULLP(BgL_expz00_1853))
									{	/* Cgen/emit_cop.scm 196 */
										BgL_auxz00_6208 = ((bool_t) 0);
									}
								else
									{	/* Cgen/emit_cop.scm 198 */
										obj_t BgL_ez00_1856;

										BgL_ez00_1856 = CAR(BgL_expz00_1853);
										{	/* Cgen/emit_cop.scm 199 */
											bool_t BgL_testz00_6212;

											{	/* Cgen/emit_cop.scm 199 */
												bool_t BgL_res4381z00_2699;

												{	/* Cgen/emit_cop.scm 199 */
													BgL_copz00_bglt BgL_copz00_2673;

													BgL_copz00_2673 = (BgL_copz00_bglt) (BgL_ez00_1856);
													{	/* Cgen/emit_cop.scm 199 */
														obj_t BgL_method3847z00_2674;

														{	/* Cgen/emit_cop.scm 199 */
															BgL_objectz00_bglt BgL_objz00_2675;

															BgL_objz00_2675 =
																(BgL_objectz00_bglt) (BgL_copz00_2673);
															{	/* Cgen/emit_cop.scm 199 */
																long BgL_objzd2classzd2numz00_2676;

																BgL_objzd2classzd2numz00_2676 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2675);
																{	/* Cgen/emit_cop.scm 199 */
																	obj_t BgL_arg2643z00_2677;

																	BgL_arg2643z00_2677 =
																		PROCEDURE_REF
																		(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																		(int) (((long) 1)));
																	{	/* Cgen/emit_cop.scm 199 */
																		obj_t BgL_arrayz00_2679;

																		int BgL_offsetz00_2680;

																		BgL_arrayz00_2679 = BgL_arg2643z00_2677;
																		BgL_offsetz00_2680 =
																			(int) (BgL_objzd2classzd2numz00_2676);
																		{	/* Cgen/emit_cop.scm 199 */
																			long BgL_offsetz00_2681;

																			BgL_offsetz00_2681 =
																				(
																				(long) (BgL_offsetz00_2680) -
																				OBJECT_TYPE);
																			{	/* Cgen/emit_cop.scm 199 */
																				long BgL_modz00_2682;

																				{	/* Cgen/emit_cop.scm 199 */
																					int BgL_arg2645z00_2683;

																					BgL_arg2645z00_2683 =
																						(int) (((long) 16));
																					{	/* Cgen/emit_cop.scm 199 */
																						long BgL_auxz00_6222;

																						BgL_auxz00_6222 =
																							(long) (BgL_arg2645z00_2683);
																						BgL_modz00_2682 =
																							(BgL_offsetz00_2681 /
																							BgL_auxz00_6222);
																				}}
																				{	/* Cgen/emit_cop.scm 199 */
																					long BgL_restz00_2684;

																					{	/* Cgen/emit_cop.scm 199 */
																						int BgL_arg2644z00_2685;

																						BgL_arg2644z00_2685 =
																							(int) (((long) 16));
																						{	/* Cgen/emit_cop.scm 199 */
																							long BgL_auxz00_6226;

																							BgL_auxz00_6226 =
																								(long) (BgL_arg2644z00_2685);
																							BgL_restz00_2684 =
																								(BgL_offsetz00_2681 %
																								BgL_auxz00_6226);
																					}}
																					{	/* Cgen/emit_cop.scm 199 */

																						BgL_method3847z00_2674 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2679,
																								(int) (BgL_modz00_2682)),
																							(int) (BgL_restz00_2684));
														}}}}}}}}
														BgL_res4381z00_2699 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2674)
															(BgL_method3847z00_2674,
																(obj_t) (BgL_copz00_2673), BEOA));
												}}
												BgL_testz00_6212 = BgL_res4381z00_2699;
											}
											if (BgL_testz00_6212)
												{	/* Cgen/emit_cop.scm 199 */
													bgl_display_string
														(BGl_string4574z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BNIL;
												}
											else
												{	/* Cgen/emit_cop.scm 199 */
													BFALSE;
												}
										}
										if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1856,
												BGl_cfailz00zzcgen_copz00))
											{
												obj_t BgL_expz00_6240;

												BgL_expz00_6240 = BNIL;
												BgL_expz00_1853 = BgL_expz00_6240;
												goto BgL_zc3anonymousza34155ze3z83_1854;
											}
										else
											{
												obj_t BgL_expz00_6241;

												BgL_expz00_6241 = CDR(BgL_expz00_1853);
												BgL_expz00_1853 = BgL_expz00_6241;
												goto BgL_zc3anonymousza34155ze3z83_1854;
											}
									}
								return BBOOL(BgL_auxz00_6208);
							}
						}
					}
			}
		}
	}



/* emit-cop-ccast3865 */
	obj_t BGl_emitzd2copzd2ccast3865z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4393,
		obj_t BgL_copz00_4394)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 155 */
			{
				BgL_ccastz00_bglt BgL_copz00_1822;

				{	/* Cgen/emit_cop.scm 156 */
					bool_t BgL_auxz00_6245;

					BgL_copz00_1822 = (BgL_ccastz00_bglt) (BgL_copz00_4394);
					{	/* Cgen/emit_cop.scm 157 */
						obj_t BgL_arg4137z00_1826;

						{
							BgL_copz00_bglt BgL_auxz00_6246;

							BgL_auxz00_6246 = (BgL_copz00_bglt) (BgL_copz00_1822);
							BgL_arg4137z00_1826 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_6246))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4137z00_1826);
					}
					bgl_display_string(BGl_string4601z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 159 */
						obj_t BgL_arg4138z00_1827;

						{	/* Cgen/emit_cop.scm 159 */
							BgL_typez00_bglt BgL_obj1509z00_2564;

							BgL_obj1509z00_2564 =
								(((BgL_ccastz00_bglt) CREF(BgL_copz00_1822))->BgL_typez00);
							BgL_arg4138z00_1827 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2564))->BgL_namez00);
						}
						bgl_display_obj(BgL_arg4138z00_1827,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 161 */
						BgL_copz00_bglt BgL_arg4140z00_1829;

						BgL_arg4140z00_1829 =
							(((BgL_ccastz00_bglt) CREF(BgL_copz00_1822))->BgL_argz00);
						{	/* Cgen/emit_cop.scm 161 */
							bool_t BgL_res4372z00_2594;

							{	/* Cgen/emit_cop.scm 161 */
								obj_t BgL_method3847z00_2569;

								{	/* Cgen/emit_cop.scm 161 */
									BgL_objectz00_bglt BgL_objz00_2570;

									BgL_objz00_2570 = (BgL_objectz00_bglt) (BgL_arg4140z00_1829);
									{	/* Cgen/emit_cop.scm 161 */
										long BgL_objzd2classzd2numz00_2571;

										BgL_objzd2classzd2numz00_2571 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2570);
										{	/* Cgen/emit_cop.scm 161 */
											obj_t BgL_arg2643z00_2572;

											BgL_arg2643z00_2572 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 161 */
												obj_t BgL_arrayz00_2574;

												int BgL_offsetz00_2575;

												BgL_arrayz00_2574 = BgL_arg2643z00_2572;
												BgL_offsetz00_2575 =
													(int) (BgL_objzd2classzd2numz00_2571);
												{	/* Cgen/emit_cop.scm 161 */
													long BgL_offsetz00_2576;

													BgL_offsetz00_2576 =
														((long) (BgL_offsetz00_2575) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 161 */
														long BgL_modz00_2577;

														{	/* Cgen/emit_cop.scm 161 */
															int BgL_arg2645z00_2578;

															BgL_arg2645z00_2578 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 161 */
																long BgL_auxz00_6264;

																BgL_auxz00_6264 = (long) (BgL_arg2645z00_2578);
																BgL_modz00_2577 =
																	(BgL_offsetz00_2576 / BgL_auxz00_6264);
														}}
														{	/* Cgen/emit_cop.scm 161 */
															long BgL_restz00_2579;

															{	/* Cgen/emit_cop.scm 161 */
																int BgL_arg2644z00_2580;

																BgL_arg2644z00_2580 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 161 */
																	long BgL_auxz00_6268;

																	BgL_auxz00_6268 =
																		(long) (BgL_arg2644z00_2580);
																	BgL_restz00_2579 =
																		(BgL_offsetz00_2576 % BgL_auxz00_6268);
															}}
															{	/* Cgen/emit_cop.scm 161 */

																BgL_method3847z00_2569 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2574,
																		(int) (BgL_modz00_2577)),
																	(int) (BgL_restz00_2579));
								}}}}}}}}
								BgL_res4372z00_2594 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2569)
									(BgL_method3847z00_2569, (obj_t) (BgL_arg4140z00_1829),
										BEOA));
							} BgL_res4372z00_2594;
					}}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					BgL_auxz00_6245 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_6245);
				}
			}
		}
	}



/* emit-cop-cpragma3863 */
	obj_t BGl_emitzd2copzd2cpragma3863z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4395, obj_t BgL_copz00_4396)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 125 */
			{
				BgL_cpragmaz00_bglt BgL_copz00_1595;

				BgL_copz00_1595 = (BgL_cpragmaz00_bglt) (BgL_copz00_4396);
				{	/* Cgen/emit_cop.scm 127 */
					obj_t BgL_arg4028z00_1599;

					{
						BgL_copz00_bglt BgL_auxz00_6282;

						BgL_auxz00_6282 = (BgL_copz00_bglt) (BgL_copz00_1595);
						BgL_arg4028z00_1599 =
							(((BgL_copz00_bglt) CREF(BgL_auxz00_6282))->BgL_locz00);
					}
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4028z00_1599);
				}
				if (NULLP((((BgL_cpragmaz00_bglt) CREF(BgL_copz00_1595))->BgL_argsz00)))
					{	/* Cgen/emit_cop.scm 129 */
						obj_t BgL_arg4030z00_1601;

						BgL_arg4030z00_1601 =
							(((BgL_cpragmaz00_bglt) CREF(BgL_copz00_1595))->BgL_formatz00);
						return
							bgl_display_obj(BgL_arg4030z00_1601,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 130 */
						obj_t BgL_sportz00_1602;

						{	/* Cgen/emit_cop.scm 130 */
							obj_t BgL_arg4134z00_1816;

							BgL_arg4134z00_1816 =
								(((BgL_cpragmaz00_bglt) CREF(BgL_copz00_1595))->BgL_formatz00);
							{	/* Cgen/emit_cop.scm 130 */

								BgL_sportz00_1602 =
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BgL_arg4134z00_1816, BINT(((long) 0)));
						}}
						{	/* Cgen/emit_cop.scm 130 */
							obj_t BgL_argsz00_1603;

							{	/* Cgen/emit_cop.scm 131 */
								obj_t BgL_arg4133z00_1815;

								BgL_arg4133z00_1815 =
									(((BgL_cpragmaz00_bglt) CREF(BgL_copz00_1595))->BgL_argsz00);
								BgL_argsz00_1603 =
									BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
									(BgL_arg4133z00_1815);
							}
							{
								obj_t BgL_inputzd2portzd2_1606;

								{	/* Cgen/emit_cop.scm 132 */

									BgL_inputzd2portzd2_1606 = BgL_sportz00_1602;
									{
										obj_t BgL_inputzd2portzd2_1639;

										long BgL_lastzd2matchzd2_1640;

										obj_t BgL_inputzd2portzd2_1648;

										long BgL_lastzd2matchzd2_1649;

										obj_t BgL_inputzd2portzd2_1657;

										long BgL_lastzd2matchzd2_1658;

										obj_t BgL_inputzd2portzd2_1669;

										long BgL_lastzd2matchzd2_1670;

										obj_t BgL_inputzd2portzd2_1679;

										long BgL_lastzd2matchzd2_1680;

									BgL_zc3anonymousza34127ze3z83_1769:
										RGC_START_MATCH(BgL_inputzd2portzd2_1606);
										{	/* Cgen/emit_cop.scm 132 */
											long BgL_matchz00_1770;

											BgL_inputzd2portzd2_1657 = BgL_inputzd2portzd2_1606;
											BgL_lastzd2matchzd2_1658 = ((long) 3);
										BgL_zc3anonymousza34042ze3z83_1659:
											{	/* Cgen/emit_cop.scm 132 */
												int BgL_currentzd2charzd2_1660;

												BgL_currentzd2charzd2_1660 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1657);
												if (((long) (BgL_currentzd2charzd2_1660) == ((long) 0)))
													{	/* Cgen/emit_cop.scm 132 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1657))
															{	/* Cgen/emit_cop.scm 132 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_1657))
																	{

																		goto BgL_zc3anonymousza34042ze3z83_1659;
																	}
																else
																	{	/* Cgen/emit_cop.scm 132 */
																		BgL_matchz00_1770 =
																			BgL_lastzd2matchzd2_1658;
																	}
															}
														else
															{	/* Cgen/emit_cop.scm 132 */
																BgL_inputzd2portzd2_1648 =
																	BgL_inputzd2portzd2_1657;
																BgL_lastzd2matchzd2_1649 =
																	BgL_lastzd2matchzd2_1658;
															BgL_zc3anonymousza34037ze3z83_1650:
																{	/* Cgen/emit_cop.scm 132 */
																	long BgL_newzd2matchzd2_1651;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1648);
																	BgL_newzd2matchzd2_1651 = ((long) 2);
																	{	/* Cgen/emit_cop.scm 132 */
																		int BgL_currentzd2charzd2_1652;

																		BgL_currentzd2charzd2_1652 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1648);
																		if (((long) (BgL_currentzd2charzd2_1652) ==
																				((long) 0)))
																			{	/* Cgen/emit_cop.scm 132 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_1648))
																					{	/* Cgen/emit_cop.scm 132 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_1648))
																							{

																								goto
																									BgL_zc3anonymousza34037ze3z83_1650;
																							}
																						else
																							{	/* Cgen/emit_cop.scm 132 */
																								BgL_matchz00_1770 =
																									BgL_newzd2matchzd2_1651;
																							}
																					}
																				else
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_inputzd2portzd2_1639 =
																							BgL_inputzd2portzd2_1648;
																						BgL_lastzd2matchzd2_1640 =
																							BgL_newzd2matchzd2_1651;
																					BgL_zc3anonymousza34032ze3z83_1641:
																						{	/* Cgen/emit_cop.scm 132 */
																							long BgL_newzd2matchzd2_1642;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1639);
																							BgL_newzd2matchzd2_1642 =
																								((long) 2);
																							{	/* Cgen/emit_cop.scm 132 */
																								int BgL_currentzd2charzd2_1643;

																								BgL_currentzd2charzd2_1643 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_1639);
																								if (((long)
																										(BgL_currentzd2charzd2_1643)
																										== ((long) 0)))
																									{	/* Cgen/emit_cop.scm 132 */
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_1639))
																											{	/* Cgen/emit_cop.scm 132 */
																												if (rgc_fill_buffer
																													(BgL_inputzd2portzd2_1639))
																													{

																														goto
																															BgL_zc3anonymousza34032ze3z83_1641;
																													}
																												else
																													{	/* Cgen/emit_cop.scm 132 */
																														BgL_matchz00_1770 =
																															BgL_newzd2matchzd2_1642;
																													}
																											}
																										else
																											{
																												long
																													BgL_lastzd2matchzd2_6323;
																												BgL_lastzd2matchzd2_6323
																													=
																													BgL_newzd2matchzd2_1642;
																												BgL_lastzd2matchzd2_1640
																													=
																													BgL_lastzd2matchzd2_6323;
																												goto
																													BgL_zc3anonymousza34032ze3z83_1641;
																											}
																									}
																								else
																									{	/* Cgen/emit_cop.scm 132 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1643)
																												== ((long) 36)))
																											{	/* Cgen/emit_cop.scm 132 */
																												BgL_matchz00_1770 =
																													BgL_newzd2matchzd2_1642;
																											}
																										else
																											{
																												long
																													BgL_lastzd2matchzd2_6327;
																												BgL_lastzd2matchzd2_6327
																													=
																													BgL_newzd2matchzd2_1642;
																												BgL_lastzd2matchzd2_1640
																													=
																													BgL_lastzd2matchzd2_6327;
																												goto
																													BgL_zc3anonymousza34032ze3z83_1641;
																											}
																									}
																							}
																						}
																					}
																			}
																		else
																			{	/* Cgen/emit_cop.scm 132 */
																				if (
																					((long) (BgL_currentzd2charzd2_1652)
																						== ((long) 36)))
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_matchz00_1770 =
																							BgL_newzd2matchzd2_1651;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_6332;

																						obj_t BgL_inputzd2portzd2_6331;

																						BgL_inputzd2portzd2_6331 =
																							BgL_inputzd2portzd2_1648;
																						BgL_lastzd2matchzd2_6332 =
																							BgL_newzd2matchzd2_1651;
																						BgL_lastzd2matchzd2_1640 =
																							BgL_lastzd2matchzd2_6332;
																						BgL_inputzd2portzd2_1639 =
																							BgL_inputzd2portzd2_6331;
																						goto
																							BgL_zc3anonymousza34032ze3z83_1641;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Cgen/emit_cop.scm 132 */
														if (
															((long) (BgL_currentzd2charzd2_1660) ==
																((long) 36)))
															{	/* Cgen/emit_cop.scm 132 */
																BgL_inputzd2portzd2_1669 =
																	BgL_inputzd2portzd2_1657;
																BgL_lastzd2matchzd2_1670 =
																	BgL_lastzd2matchzd2_1658;
															BgL_zc3anonymousza34048ze3z83_1671:
																{	/* Cgen/emit_cop.scm 132 */
																	long BgL_newzd2matchzd2_1672;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1669);
																	BgL_newzd2matchzd2_1672 = ((long) 3);
																	{	/* Cgen/emit_cop.scm 132 */
																		int BgL_currentzd2charzd2_1673;

																		BgL_currentzd2charzd2_1673 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1669);
																		if (((long) (BgL_currentzd2charzd2_1673) ==
																				((long) 0)))
																			{	/* Cgen/emit_cop.scm 132 */
																				bool_t BgL_testz00_6341;

																				{	/* Cgen/emit_cop.scm 132 */
																					bool_t BgL_res4363z00_2486;

																					{	/* Cgen/emit_cop.scm 132 */
																						obj_t BgL_inputzd2portzd2_2482;

																						BgL_inputzd2portzd2_2482 =
																							BgL_inputzd2portzd2_1669;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_2482))
																							{	/* Cgen/emit_cop.scm 132 */
																								BgL_res4363z00_2486 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_2482);
																							}
																						else
																							{	/* Cgen/emit_cop.scm 132 */
																								BgL_res4363z00_2486 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_6341 =
																						BgL_res4363z00_2486;
																				}
																				if (BgL_testz00_6341)
																					{

																						goto
																							BgL_zc3anonymousza34048ze3z83_1671;
																					}
																				else
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_matchz00_1770 =
																							BgL_newzd2matchzd2_1672;
																					}
																			}
																		else
																			{	/* Cgen/emit_cop.scm 132 */
																				bool_t BgL_testz00_6345;

																				if (
																					((long) (BgL_currentzd2charzd2_1673)
																						>= ((long) 48)))
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_testz00_6345 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1673) <
																							((long) 58));
																					}
																				else
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_testz00_6345 = ((bool_t) 0);
																					}
																				if (BgL_testz00_6345)
																					{	/* Cgen/emit_cop.scm 132 */
																						BgL_inputzd2portzd2_1679 =
																							BgL_inputzd2portzd2_1669;
																						BgL_lastzd2matchzd2_1680 =
																							BgL_newzd2matchzd2_1672;
																					BgL_zc3anonymousza34054ze3z83_1681:
																						{	/* Cgen/emit_cop.scm 132 */
																							long BgL_newzd2matchzd2_1682;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1679);
																							BgL_newzd2matchzd2_1682 =
																								((long) 0);
																							{	/* Cgen/emit_cop.scm 132 */
																								int BgL_currentzd2charzd2_1683;

																								BgL_currentzd2charzd2_1683 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_1679);
																								if (((long)
																										(BgL_currentzd2charzd2_1683)
																										== ((long) 0)))
																									{	/* Cgen/emit_cop.scm 132 */
																										bool_t BgL_testz00_6356;

																										{	/* Cgen/emit_cop.scm 132 */
																											bool_t
																												BgL_res4364z00_2505;
																											{	/* Cgen/emit_cop.scm 132 */
																												obj_t
																													BgL_inputzd2portzd2_2501;
																												BgL_inputzd2portzd2_2501
																													=
																													BgL_inputzd2portzd2_1679;
																												if (RGC_BUFFER_EMPTY
																													(BgL_inputzd2portzd2_2501))
																													{	/* Cgen/emit_cop.scm 132 */
																														BgL_res4364z00_2505
																															=
																															rgc_fill_buffer
																															(BgL_inputzd2portzd2_2501);
																													}
																												else
																													{	/* Cgen/emit_cop.scm 132 */
																														BgL_res4364z00_2505
																															= ((bool_t) 0);
																													}
																											}
																											BgL_testz00_6356 =
																												BgL_res4364z00_2505;
																										}
																										if (BgL_testz00_6356)
																											{

																												goto
																													BgL_zc3anonymousza34054ze3z83_1681;
																											}
																										else
																											{	/* Cgen/emit_cop.scm 132 */
																												BgL_matchz00_1770 =
																													BgL_newzd2matchzd2_1682;
																											}
																									}
																								else
																									{	/* Cgen/emit_cop.scm 132 */
																										bool_t BgL_testz00_6360;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1683)
																												>= ((long) 48)))
																											{	/* Cgen/emit_cop.scm 132 */
																												BgL_testz00_6360 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1683)
																													< ((long) 58));
																											}
																										else
																											{	/* Cgen/emit_cop.scm 132 */
																												BgL_testz00_6360 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_6360)
																											{
																												long
																													BgL_lastzd2matchzd2_6366;
																												BgL_lastzd2matchzd2_6366
																													=
																													BgL_newzd2matchzd2_1682;
																												BgL_lastzd2matchzd2_1680
																													=
																													BgL_lastzd2matchzd2_6366;
																												goto
																													BgL_zc3anonymousza34054ze3z83_1681;
																											}
																										else
																											{	/* Cgen/emit_cop.scm 132 */
																												BgL_matchz00_1770 =
																													BgL_newzd2matchzd2_1682;
																											}
																									}
																							}
																						}
																					}
																				else
																					{	/* Cgen/emit_cop.scm 132 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1673) ==
																								((long) 36)))
																							{	/* Cgen/emit_cop.scm 132 */
																								long BgL_newzd2matchzd2_2495;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1669);
																								BgL_newzd2matchzd2_2495 =
																									((long) 1);
																								BgL_matchz00_1770 =
																									BgL_newzd2matchzd2_2495;
																							}
																						else
																							{	/* Cgen/emit_cop.scm 132 */
																								BgL_matchz00_1770 =
																									BgL_newzd2matchzd2_1672;
																							}
																					}
																			}
																	}
																}
															}
														else
															{
																long BgL_lastzd2matchzd2_6372;

																obj_t BgL_inputzd2portzd2_6371;

																BgL_inputzd2portzd2_6371 =
																	BgL_inputzd2portzd2_1657;
																BgL_lastzd2matchzd2_6372 =
																	BgL_lastzd2matchzd2_1658;
																BgL_lastzd2matchzd2_1649 =
																	BgL_lastzd2matchzd2_6372;
																BgL_inputzd2portzd2_1648 =
																	BgL_inputzd2portzd2_6371;
																goto BgL_zc3anonymousza34037ze3z83_1650;
															}
													}
											}
											RGC_SET_FILEPOS(BgL_inputzd2portzd2_1606);
											{

												switch (BgL_matchz00_1770)
													{
													case ((long) 3):

														{	/* Cgen/emit_cop.scm 132 */
															bool_t BgL_testz00_6374;

															{	/* Cgen/emit_cop.scm 132 */
																long BgL_arg4120z00_1759;

																BgL_arg4120z00_1759 =
																	RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1606);
																BgL_testz00_6374 =
																	(BgL_arg4120z00_1759 == ((long) 0));
															}
															if (BgL_testz00_6374)
																{	/* Cgen/emit_cop.scm 132 */
																	BCNST(256);
																}
															else
																{	/* Cgen/emit_cop.scm 132 */
																	obj_t BgL_inputzd2portzd2_2519;

																	BgL_inputzd2portzd2_2519 =
																		BgL_inputzd2portzd2_1606;
																	BCHAR(RGC_BUFFER_CHARACTER
																		(BgL_inputzd2portzd2_2519));
																}
														}
														break;
													case ((long) 2):

														{	/* Cgen/emit_cop.scm 144 */
															obj_t BgL_arg4129z00_1774;

															BgL_arg4129z00_1774 =
																BGl_thezd2stringzd2zzcgen_emitzd2copzd2
																(BgL_inputzd2portzd2_1606);
															bgl_display_obj(BgL_arg4129z00_1774,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}
														goto BgL_zc3anonymousza34127ze3z83_1769;
														break;
													case ((long) 1):

														bgl_display_string
															(BGl_string4604z00zzcgen_emitzd2copzd2,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														goto BgL_zc3anonymousza34127ze3z83_1769;
														break;
													case ((long) 0):

														{	/* Cgen/emit_cop.scm 134 */
															obj_t BgL_strz00_1775;

															BgL_strz00_1775 =
																BGl_thezd2stringzd2zzcgen_emitzd2copzd2
																(BgL_inputzd2portzd2_1606);
															{	/* Cgen/emit_cop.scm 134 */
																int BgL_lenz00_1776;

																{	/* Cgen/emit_cop.scm 135 */
																	int BgL_res4366z00_2525;

																	{	/* Cgen/emit_cop.scm 135 */
																		obj_t BgL_inputzd2portzd2_2524;

																		BgL_inputzd2portzd2_2524 =
																			BgL_inputzd2portzd2_1606;
																		BgL_res4366z00_2525 =
																			(int) (RGC_BUFFER_LENGTH
																			(BgL_inputzd2portzd2_2524));
																	}
																	BgL_lenz00_1776 = BgL_res4366z00_2525;
																}
																{	/* Cgen/emit_cop.scm 135 */
																	obj_t BgL_indexz00_1777;

																	{	/* Cgen/emit_cop.scm 137 */
																		obj_t BgL_arg4132z00_1780;

																		BgL_arg4132z00_1780 =
																			c_substring(BgL_strz00_1775, ((long) 1),
																			(long) (BgL_lenz00_1776));
																		{	/* Cgen/emit_cop.scm 136 */

																			BgL_indexz00_1777 =
																				BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																				(BgL_arg4132z00_1780,
																				BINT(((long) 10)));
																	}}
																	{	/* Cgen/emit_cop.scm 136 */

																		{	/* Cgen/emit_cop.scm 138 */
																			obj_t BgL_arg4130z00_1778;

																			{	/* Cgen/emit_cop.scm 138 */
																				long BgL_arg4131z00_1779;

																				BgL_arg4131z00_1779 =
																					(
																					(long) CINT(BgL_indexz00_1777) -
																					((long) 1));
																				BgL_arg4130z00_1778 =
																					VECTOR_REF(BgL_argsz00_1603,
																					(int) (BgL_arg4131z00_1779));
																			}
																			{	/* Cgen/emit_cop.scm 138 */
																				bool_t BgL_res4369z00_2559;

																				{	/* Cgen/emit_cop.scm 138 */
																					BgL_copz00_bglt BgL_copz00_2533;

																					BgL_copz00_2533 =
																						(BgL_copz00_bglt)
																						(BgL_arg4130z00_1778);
																					{	/* Cgen/emit_cop.scm 138 */
																						obj_t BgL_method3847z00_2534;

																						{	/* Cgen/emit_cop.scm 138 */
																							BgL_objectz00_bglt
																								BgL_objz00_2535;
																							BgL_objz00_2535 =
																								(BgL_objectz00_bglt)
																								(BgL_copz00_2533);
																							{	/* Cgen/emit_cop.scm 138 */
																								long
																									BgL_objzd2classzd2numz00_2536;
																								BgL_objzd2classzd2numz00_2536 =
																									BGL_OBJECT_CLASS_NUM
																									(BgL_objz00_2535);
																								{	/* Cgen/emit_cop.scm 138 */
																									obj_t BgL_arg2643z00_2537;

																									BgL_arg2643z00_2537 =
																										PROCEDURE_REF
																										(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																										(int) (((long) 1)));
																									{	/* Cgen/emit_cop.scm 138 */
																										obj_t BgL_arrayz00_2539;

																										int BgL_offsetz00_2540;

																										BgL_arrayz00_2539 =
																											BgL_arg2643z00_2537;
																										BgL_offsetz00_2540 =
																											(int)
																											(BgL_objzd2classzd2numz00_2536);
																										{	/* Cgen/emit_cop.scm 138 */
																											long BgL_offsetz00_2541;

																											BgL_offsetz00_2541 =
																												(
																												(long)
																												(BgL_offsetz00_2540) -
																												OBJECT_TYPE);
																											{	/* Cgen/emit_cop.scm 138 */
																												long BgL_modz00_2542;

																												{	/* Cgen/emit_cop.scm 138 */
																													int
																														BgL_arg2645z00_2543;
																													BgL_arg2645z00_2543 =
																														(int) (((long) 16));
																													{	/* Cgen/emit_cop.scm 138 */
																														long
																															BgL_auxz00_6402;
																														BgL_auxz00_6402 =
																															(long)
																															(BgL_arg2645z00_2543);
																														BgL_modz00_2542 =
																															(BgL_offsetz00_2541
																															/
																															BgL_auxz00_6402);
																												}}
																												{	/* Cgen/emit_cop.scm 138 */
																													long BgL_restz00_2544;

																													{	/* Cgen/emit_cop.scm 138 */
																														int
																															BgL_arg2644z00_2545;
																														BgL_arg2644z00_2545
																															=
																															(int) (((long)
																																16));
																														{	/* Cgen/emit_cop.scm 138 */
																															long
																																BgL_auxz00_6406;
																															BgL_auxz00_6406 =
																																(long)
																																(BgL_arg2644z00_2545);
																															BgL_restz00_2544 =
																																(BgL_offsetz00_2541
																																%
																																BgL_auxz00_6406);
																													}}
																													{	/* Cgen/emit_cop.scm 138 */

																														BgL_method3847z00_2534
																															=
																															VECTOR_REF
																															(VECTOR_REF
																															(BgL_arrayz00_2539,
																																(int)
																																(BgL_modz00_2542)),
																															(int)
																															(BgL_restz00_2544));
																						}}}}}}}}
																						BgL_res4369z00_2559 =
																							CBOOL(PROCEDURE_ENTRY
																							(BgL_method3847z00_2534)
																							(BgL_method3847z00_2534,
																								(obj_t) (BgL_copz00_2533),
																								BEOA));
																				}} BgL_res4369z00_2559;
																		}}
																		goto BgL_zc3anonymousza34127ze3z83_1769;
																	}
																}
															}
														}
														break;
													default:
														BGl_errorz00zz__errorz00
															(BGl_string4602z00zzcgen_emitzd2copzd2,
															BGl_string4603z00zzcgen_emitzd2copzd2,
															BINT(BgL_matchz00_1770));
													}
											}
										}
									}
									bgl_close_input_port(BgL_sportz00_1602);
									return BTRUE;
								}
							}
						}
					}
			}
		}
	}



/* the-string */
	obj_t BGl_thezd2stringzd2zzcgen_emitzd2copzd2(obj_t BgL_inputzd2portzd2_4411)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 132 */
			{	/* Cgen/emit_cop.scm 132 */
				int BgL_arg4066z00_1698;

				{	/* Cgen/emit_cop.scm 132 */
					int BgL_res4365z00_2511;

					{	/* Cgen/emit_cop.scm 132 */
						obj_t BgL_inputzd2portzd2_2510;

						BgL_inputzd2portzd2_2510 = BgL_inputzd2portzd2_4411;
						BgL_res4365z00_2511 =
							(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2510));
					}
					BgL_arg4066z00_1698 = BgL_res4365z00_2511;
				}
				return
					rgc_buffer_substring(BgL_inputzd2portzd2_4411, ((long) 0),
					(long) (BgL_arg4066z00_1698));
		}}
	}



/* emit-cop-varc3861 */
	obj_t BGl_emitzd2copzd2varc3861z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4397,
		obj_t BgL_copz00_4398)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 117 */
			{
				BgL_varcz00_bglt BgL_copz00_1587;

				{	/* Cgen/emit_cop.scm 118 */
					bool_t BgL_auxz00_6426;

					BgL_copz00_1587 = (BgL_varcz00_bglt) (BgL_copz00_4398);
					{	/* Cgen/emit_cop.scm 119 */
						obj_t BgL_arg4025z00_1591;

						{	/* Cgen/emit_cop.scm 119 */
							BgL_variablez00_bglt BgL_obj1605z00_2445;

							BgL_obj1605z00_2445 =
								(((BgL_varcz00_bglt) CREF(BgL_copz00_1587))->BgL_variablez00);
							BgL_arg4025z00_1591 =
								(((BgL_variablez00_bglt) CREF(BgL_obj1605z00_2445))->
								BgL_namez00);
						}
						bgl_display_obj(BgL_arg4025z00_1591,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					BgL_auxz00_6426 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_6426);
				}
			}
		}
	}



/* emit-cop-cvoid3859 */
	obj_t BGl_emitzd2copzd2cvoid3859z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4399,
		obj_t BgL_copz00_4400)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 110 */
			{
				BgL_cvoidz00_bglt BgL_copz00_1580;

				{	/* Cgen/emit_cop.scm 111 */
					bool_t BgL_auxz00_6432;

					BgL_copz00_1580 = (BgL_cvoidz00_bglt) (BgL_copz00_4400);
					{	/* Cgen/emit_cop.scm 111 */
						BgL_copz00_bglt BgL_arg4023z00_2415;

						BgL_arg4023z00_2415 =
							(((BgL_cvoidz00_bglt) CREF(BgL_copz00_1580))->BgL_valuez00);
						{	/* Cgen/emit_cop.scm 111 */
							bool_t BgL_res4362z00_2443;

							{	/* Cgen/emit_cop.scm 111 */
								obj_t BgL_method3847z00_2418;

								{	/* Cgen/emit_cop.scm 111 */
									BgL_objectz00_bglt BgL_objz00_2419;

									BgL_objz00_2419 = (BgL_objectz00_bglt) (BgL_arg4023z00_2415);
									{	/* Cgen/emit_cop.scm 111 */
										long BgL_objzd2classzd2numz00_2420;

										BgL_objzd2classzd2numz00_2420 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2419);
										{	/* Cgen/emit_cop.scm 111 */
											obj_t BgL_arg2643z00_2421;

											BgL_arg2643z00_2421 =
												PROCEDURE_REF
												(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
												(int) (((long) 1)));
											{	/* Cgen/emit_cop.scm 111 */
												obj_t BgL_arrayz00_2423;

												int BgL_offsetz00_2424;

												BgL_arrayz00_2423 = BgL_arg2643z00_2421;
												BgL_offsetz00_2424 =
													(int) (BgL_objzd2classzd2numz00_2420);
												{	/* Cgen/emit_cop.scm 111 */
													long BgL_offsetz00_2425;

													BgL_offsetz00_2425 =
														((long) (BgL_offsetz00_2424) - OBJECT_TYPE);
													{	/* Cgen/emit_cop.scm 111 */
														long BgL_modz00_2426;

														{	/* Cgen/emit_cop.scm 111 */
															int BgL_arg2645z00_2427;

															BgL_arg2645z00_2427 = (int) (((long) 16));
															{	/* Cgen/emit_cop.scm 111 */
																long BgL_auxz00_6442;

																BgL_auxz00_6442 = (long) (BgL_arg2645z00_2427);
																BgL_modz00_2426 =
																	(BgL_offsetz00_2425 / BgL_auxz00_6442);
														}}
														{	/* Cgen/emit_cop.scm 111 */
															long BgL_restz00_2428;

															{	/* Cgen/emit_cop.scm 111 */
																int BgL_arg2644z00_2429;

																BgL_arg2644z00_2429 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 111 */
																	long BgL_auxz00_6446;

																	BgL_auxz00_6446 =
																		(long) (BgL_arg2644z00_2429);
																	BgL_restz00_2428 =
																		(BgL_offsetz00_2425 % BgL_auxz00_6446);
															}}
															{	/* Cgen/emit_cop.scm 111 */

																BgL_method3847z00_2418 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2423,
																		(int) (BgL_modz00_2426)),
																	(int) (BgL_restz00_2428));
								}}}}}}}}
								BgL_res4362z00_2443 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2418)
									(BgL_method3847z00_2418, (obj_t) (BgL_arg4023z00_2415),
										BEOA));
							}
							BgL_auxz00_6432 = BgL_res4362z00_2443;
					}}
					return BBOOL(BgL_auxz00_6432);
				}
			}
		}
	}



/* emit-cop-catom3857 */
	obj_t BGl_emitzd2copzd2catom3857z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4401,
		obj_t BgL_copz00_4402)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 102 */
			{
				BgL_catomz00_bglt BgL_copz00_1573;

				{	/* Cgen/emit_cop.scm 103 */
					bool_t BgL_auxz00_6459;

					BgL_copz00_1573 = (BgL_catomz00_bglt) (BgL_copz00_4402);
					{	/* Cgen/emit_cop.scm 103 */
						obj_t BgL_arg4021z00_2412;

						BgL_arg4021z00_2412 =
							(((BgL_catomz00_bglt) CREF(BgL_copz00_1573))->BgL_valuez00);
						BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BgL_arg4021z00_2412);
					}
					BgL_auxz00_6459 = ((bool_t) 1);
					return BBOOL(BgL_auxz00_6459);
				}
			}
		}
	}



/* emit-cop-creturn3855 */
	obj_t BGl_emitzd2copzd2creturn3855z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4403, obj_t BgL_copz00_4404)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 91 */
			{
				BgL_creturnz00_bglt BgL_copz00_1564;

				{	/* Cgen/emit_cop.scm 92 */
					bool_t BgL_auxz00_6464;

					BgL_copz00_1564 = (BgL_creturnz00_bglt) (BgL_copz00_4404);
					{	/* Cgen/emit_cop.scm 93 */
						obj_t BgL_arg4017z00_1568;

						{
							BgL_copz00_bglt BgL_auxz00_6465;

							BgL_auxz00_6465 = (BgL_copz00_bglt) (BgL_copz00_1564);
							BgL_arg4017z00_1568 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_6465))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4017z00_1568);
					}
					bgl_display_string(BGl_string4605z00zzcgen_emitzd2copzd2,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* Cgen/emit_cop.scm 95 */
						bool_t BgL_testz00_6470;

						{	/* Cgen/emit_cop.scm 95 */
							BgL_copz00_bglt BgL_arg4019z00_1570;

							BgL_arg4019z00_1570 =
								(((BgL_creturnz00_bglt) CREF(BgL_copz00_1564))->BgL_valuez00);
							{	/* Cgen/emit_cop.scm 95 */
								bool_t BgL_res4359z00_2408;

								{	/* Cgen/emit_cop.scm 95 */
									obj_t BgL_method3847z00_2383;

									{	/* Cgen/emit_cop.scm 95 */
										BgL_objectz00_bglt BgL_objz00_2384;

										BgL_objz00_2384 =
											(BgL_objectz00_bglt) (BgL_arg4019z00_1570);
										{	/* Cgen/emit_cop.scm 95 */
											long BgL_objzd2classzd2numz00_2385;

											BgL_objzd2classzd2numz00_2385 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2384);
											{	/* Cgen/emit_cop.scm 95 */
												obj_t BgL_arg2643z00_2386;

												BgL_arg2643z00_2386 =
													PROCEDURE_REF
													(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
													(int) (((long) 1)));
												{	/* Cgen/emit_cop.scm 95 */
													obj_t BgL_arrayz00_2388;

													int BgL_offsetz00_2389;

													BgL_arrayz00_2388 = BgL_arg2643z00_2386;
													BgL_offsetz00_2389 =
														(int) (BgL_objzd2classzd2numz00_2385);
													{	/* Cgen/emit_cop.scm 95 */
														long BgL_offsetz00_2390;

														BgL_offsetz00_2390 =
															((long) (BgL_offsetz00_2389) - OBJECT_TYPE);
														{	/* Cgen/emit_cop.scm 95 */
															long BgL_modz00_2391;

															{	/* Cgen/emit_cop.scm 95 */
																int BgL_arg2645z00_2392;

																BgL_arg2645z00_2392 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 95 */
																	long BgL_auxz00_6480;

																	BgL_auxz00_6480 =
																		(long) (BgL_arg2645z00_2392);
																	BgL_modz00_2391 =
																		(BgL_offsetz00_2390 / BgL_auxz00_6480);
															}}
															{	/* Cgen/emit_cop.scm 95 */
																long BgL_restz00_2393;

																{	/* Cgen/emit_cop.scm 95 */
																	int BgL_arg2644z00_2394;

																	BgL_arg2644z00_2394 = (int) (((long) 16));
																	{	/* Cgen/emit_cop.scm 95 */
																		long BgL_auxz00_6484;

																		BgL_auxz00_6484 =
																			(long) (BgL_arg2644z00_2394);
																		BgL_restz00_2393 =
																			(BgL_offsetz00_2390 % BgL_auxz00_6484);
																}}
																{	/* Cgen/emit_cop.scm 95 */

																	BgL_method3847z00_2383 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2388,
																			(int) (BgL_modz00_2391)),
																		(int) (BgL_restz00_2393));
									}}}}}}}}
									BgL_res4359z00_2408 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2383)
										(BgL_method3847z00_2383, (obj_t) (BgL_arg4019z00_1570),
											BEOA));
								}
								BgL_testz00_6470 = BgL_res4359z00_2408;
						}}
						if (BgL_testz00_6470)
							{	/* Cgen/emit_cop.scm 95 */
								bgl_display_char(((unsigned char) ';'),
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
						else
							{	/* Cgen/emit_cop.scm 95 */
								BFALSE;
							}
					}
					BgL_auxz00_6464 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_6464);
				}
			}
		}
	}



/* emit-cop-block3853 */
	obj_t BGl_emitzd2copzd2block3853z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4405,
		obj_t BgL_copz00_4406)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 70 */
			{
				BgL_blockz00_bglt BgL_copz00_1550;

				{	/* Cgen/emit_cop.scm 71 */
					bool_t BgL_auxz00_6498;

					BgL_copz00_1550 = (BgL_blockz00_bglt) (BgL_copz00_4406);
					{	/* Cgen/emit_cop.scm 72 */
						obj_t BgL_arg4008z00_1554;

						{
							BgL_copz00_bglt BgL_auxz00_6499;

							BgL_auxz00_6499 = (BgL_copz00_bglt) (BgL_copz00_1550);
							BgL_arg4008z00_1554 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_6499))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4008z00_1554);
					}
					{	/* Cgen/emit_cop.scm 73 */
						bool_t BgL_testz00_6503;

						{	/* Cgen/emit_cop.scm 73 */
							BgL_copz00_bglt BgL_arg4015z00_1561;

							BgL_arg4015z00_1561 =
								(((BgL_blockz00_bglt) CREF(BgL_copz00_1550))->BgL_bodyz00);
							{	/* Cgen/emit_cop.scm 73 */
								obj_t BgL_obj3305z00_2314;

								BgL_obj3305z00_2314 = (obj_t) (BgL_arg4015z00_1561);
								BgL_testz00_6503 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3305z00_2314,
									BGl_blockz00zzcgen_copz00);
							}
						}
						if (BgL_testz00_6503)
							{	/* Cgen/emit_cop.scm 74 */
								BgL_copz00_bglt BgL_arg4010z00_1556;

								BgL_arg4010z00_1556 =
									(((BgL_blockz00_bglt) CREF(BgL_copz00_1550))->BgL_bodyz00);
								{	/* Cgen/emit_cop.scm 74 */
									bool_t BgL_res4353z00_2342;

									{	/* Cgen/emit_cop.scm 74 */
										obj_t BgL_method3847z00_2317;

										{	/* Cgen/emit_cop.scm 74 */
											BgL_objectz00_bglt BgL_objz00_2318;

											BgL_objz00_2318 =
												(BgL_objectz00_bglt) (BgL_arg4010z00_1556);
											{	/* Cgen/emit_cop.scm 74 */
												long BgL_objzd2classzd2numz00_2319;

												BgL_objzd2classzd2numz00_2319 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2318);
												{	/* Cgen/emit_cop.scm 74 */
													obj_t BgL_arg2643z00_2320;

													BgL_arg2643z00_2320 =
														PROCEDURE_REF
														(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
														(int) (((long) 1)));
													{	/* Cgen/emit_cop.scm 74 */
														obj_t BgL_arrayz00_2322;

														int BgL_offsetz00_2323;

														BgL_arrayz00_2322 = BgL_arg2643z00_2320;
														BgL_offsetz00_2323 =
															(int) (BgL_objzd2classzd2numz00_2319);
														{	/* Cgen/emit_cop.scm 74 */
															long BgL_offsetz00_2324;

															BgL_offsetz00_2324 =
																((long) (BgL_offsetz00_2323) - OBJECT_TYPE);
															{	/* Cgen/emit_cop.scm 74 */
																long BgL_modz00_2325;

																{	/* Cgen/emit_cop.scm 74 */
																	int BgL_arg2645z00_2326;

																	BgL_arg2645z00_2326 = (int) (((long) 16));
																	{	/* Cgen/emit_cop.scm 74 */
																		long BgL_auxz00_6516;

																		BgL_auxz00_6516 =
																			(long) (BgL_arg2645z00_2326);
																		BgL_modz00_2325 =
																			(BgL_offsetz00_2324 / BgL_auxz00_6516);
																}}
																{	/* Cgen/emit_cop.scm 74 */
																	long BgL_restz00_2327;

																	{	/* Cgen/emit_cop.scm 74 */
																		int BgL_arg2644z00_2328;

																		BgL_arg2644z00_2328 = (int) (((long) 16));
																		{	/* Cgen/emit_cop.scm 74 */
																			long BgL_auxz00_6520;

																			BgL_auxz00_6520 =
																				(long) (BgL_arg2644z00_2328);
																			BgL_restz00_2327 =
																				(BgL_offsetz00_2324 % BgL_auxz00_6520);
																	}}
																	{	/* Cgen/emit_cop.scm 74 */

																		BgL_method3847z00_2317 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2322,
																				(int) (BgL_modz00_2325)),
																			(int) (BgL_restz00_2327));
										}}}}}}}}
										BgL_res4353z00_2342 =
											CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2317)
											(BgL_method3847z00_2317, (obj_t) (BgL_arg4010z00_1556),
												BEOA));
									}
									BgL_auxz00_6498 = BgL_res4353z00_2342;
							}}
						else
							{	/* Cgen/emit_cop.scm 73 */
								bgl_display_string(BGl_string4606z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								{	/* Cgen/emit_cop.scm 78 */
									obj_t BgL_arg4011z00_1557;

									{
										BgL_copz00_bglt BgL_auxz00_6532;

										BgL_auxz00_6532 = (BgL_copz00_bglt) (BgL_copz00_1550);
										BgL_arg4011z00_1557 =
											(((BgL_copz00_bglt) CREF(BgL_auxz00_6532))->BgL_locz00);
									}
									BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2
										(BgL_arg4011z00_1557);
								}
								{	/* Cgen/emit_cop.scm 79 */
									bool_t BgL_testz00_6536;

									{	/* Cgen/emit_cop.scm 79 */
										BgL_copz00_bglt BgL_arg4014z00_1560;

										BgL_arg4014z00_1560 =
											(((BgL_blockz00_bglt) CREF(BgL_copz00_1550))->
											BgL_bodyz00);
										{	/* Cgen/emit_cop.scm 79 */
											bool_t BgL_res4356z00_2373;

											{	/* Cgen/emit_cop.scm 79 */
												obj_t BgL_method3847z00_2348;

												{	/* Cgen/emit_cop.scm 79 */
													BgL_objectz00_bglt BgL_objz00_2349;

													BgL_objz00_2349 =
														(BgL_objectz00_bglt) (BgL_arg4014z00_1560);
													{	/* Cgen/emit_cop.scm 79 */
														long BgL_objzd2classzd2numz00_2350;

														BgL_objzd2classzd2numz00_2350 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2349);
														{	/* Cgen/emit_cop.scm 79 */
															obj_t BgL_arg2643z00_2351;

															BgL_arg2643z00_2351 =
																PROCEDURE_REF
																(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
																(int) (((long) 1)));
															{	/* Cgen/emit_cop.scm 79 */
																obj_t BgL_arrayz00_2353;

																int BgL_offsetz00_2354;

																BgL_arrayz00_2353 = BgL_arg2643z00_2351;
																BgL_offsetz00_2354 =
																	(int) (BgL_objzd2classzd2numz00_2350);
																{	/* Cgen/emit_cop.scm 79 */
																	long BgL_offsetz00_2355;

																	BgL_offsetz00_2355 =
																		((long) (BgL_offsetz00_2354) - OBJECT_TYPE);
																	{	/* Cgen/emit_cop.scm 79 */
																		long BgL_modz00_2356;

																		{	/* Cgen/emit_cop.scm 79 */
																			int BgL_arg2645z00_2357;

																			BgL_arg2645z00_2357 = (int) (((long) 16));
																			{	/* Cgen/emit_cop.scm 79 */
																				long BgL_auxz00_6546;

																				BgL_auxz00_6546 =
																					(long) (BgL_arg2645z00_2357);
																				BgL_modz00_2356 =
																					(BgL_offsetz00_2355 /
																					BgL_auxz00_6546);
																		}}
																		{	/* Cgen/emit_cop.scm 79 */
																			long BgL_restz00_2358;

																			{	/* Cgen/emit_cop.scm 79 */
																				int BgL_arg2644z00_2359;

																				BgL_arg2644z00_2359 =
																					(int) (((long) 16));
																				{	/* Cgen/emit_cop.scm 79 */
																					long BgL_auxz00_6550;

																					BgL_auxz00_6550 =
																						(long) (BgL_arg2644z00_2359);
																					BgL_restz00_2358 =
																						(BgL_offsetz00_2355 %
																						BgL_auxz00_6550);
																			}}
																			{	/* Cgen/emit_cop.scm 79 */

																				BgL_method3847z00_2348 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2353,
																						(int) (BgL_modz00_2356)),
																					(int) (BgL_restz00_2358));
												}}}}}}}}
												BgL_res4356z00_2373 =
													CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2348)
													(BgL_method3847z00_2348,
														(obj_t) (BgL_arg4014z00_1560), BEOA));
											}
											BgL_testz00_6536 = BgL_res4356z00_2373;
									}}
									if (BgL_testz00_6536)
										{	/* Cgen/emit_cop.scm 79 */
											BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
												(BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2);
											bgl_display_string(BGl_string4574z00zzcgen_emitzd2copzd2,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											BNIL;
										}
									else
										{	/* Cgen/emit_cop.scm 79 */
											BFALSE;
										}
								}
								bgl_display_string(BGl_string4566z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								BgL_auxz00_6498 = ((bool_t) 0);
							}
					}
					return BBOOL(BgL_auxz00_6498);
				}
			}
		}
	}



/* emit-cop-cgoto3851 */
	obj_t BGl_emitzd2copzd2cgoto3851z00zzcgen_emitzd2copzd2(obj_t BgL_envz00_4407,
		obj_t BgL_copz00_4408)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 61 */
			{
				BgL_cgotoz00_bglt BgL_copz00_1540;

				{	/* Cgen/emit_cop.scm 62 */
					bool_t BgL_auxz00_6566;

					BgL_copz00_1540 = (BgL_cgotoz00_bglt) (BgL_copz00_4408);
					{	/* Cgen/emit_cop.scm 63 */
						obj_t BgL_arg4004z00_1544;

						{
							BgL_copz00_bglt BgL_auxz00_6567;

							BgL_auxz00_6567 = (BgL_copz00_bglt) (BgL_copz00_1540);
							BgL_arg4004z00_1544 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_6567))->BgL_locz00);
						}
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg4004z00_1544);
					}
					{	/* Cgen/emit_cop.scm 64 */
						obj_t BgL_port3782z00_1545;

						BgL_port3782z00_1545 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						bgl_display_string(BGl_string4607z00zzcgen_emitzd2copzd2,
							BgL_port3782z00_1545);
						{	/* Cgen/emit_cop.scm 64 */
							obj_t BgL_arg4005z00_1546;

							{	/* Cgen/emit_cop.scm 64 */
								BgL_clabelz00_bglt BgL_obj3255z00_2309;

								BgL_obj3255z00_2309 =
									(((BgL_cgotoz00_bglt) CREF(BgL_copz00_1540))->BgL_labelz00);
								BgL_arg4005z00_1546 =
									(((BgL_clabelz00_bglt) CREF(BgL_obj3255z00_2309))->
									BgL_namez00);
							}
							bgl_display_obj(BgL_arg4005z00_1546, BgL_port3782z00_1545);
						}
						bgl_display_char(((unsigned char) ';'), BgL_port3782z00_1545);
					}
					BgL_auxz00_6566 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_6566);
				}
			}
		}
	}



/* emit-cop-clabel3849 */
	obj_t BGl_emitzd2copzd2clabel3849z00zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_4409, obj_t BgL_copz00_4410)
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 49 */
			{
				BgL_clabelz00_bglt BgL_copz00_1530;

				{	/* Cgen/emit_cop.scm 50 */
					bool_t BgL_auxz00_6578;

					BgL_copz00_1530 = (BgL_clabelz00_bglt) (BgL_copz00_4410);
					if ((((BgL_clabelz00_bglt) CREF(BgL_copz00_1530))->BgL_usedzf3zf3))
						{	/* Cgen/emit_cop.scm 51 */
							{	/* Cgen/emit_cop.scm 53 */
								obj_t BgL_arg4000z00_1535;

								{
									BgL_copz00_bglt BgL_auxz00_6581;

									BgL_auxz00_6581 = (BgL_copz00_bglt) (BgL_copz00_1530);
									BgL_arg4000z00_1535 =
										(((BgL_copz00_bglt) CREF(BgL_auxz00_6581))->BgL_locz00);
								}
								BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
									(BgL_arg4000z00_1535);
							}
							{	/* Cgen/emit_cop.scm 54 */
								obj_t BgL_arg4001z00_1536;

								BgL_arg4001z00_1536 =
									(((BgL_clabelz00_bglt) CREF(BgL_copz00_1530))->BgL_namez00);
								bgl_display_obj(BgL_arg4001z00_1536,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
							bgl_display_char(((unsigned char) ':'),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* Cgen/emit_cop.scm 51 */
							BFALSE;
						}
					{	/* Cgen/emit_cop.scm 56 */
						obj_t BgL_arg4002z00_1537;

						BgL_arg4002z00_1537 =
							(((BgL_clabelz00_bglt) CREF(BgL_copz00_1530))->BgL_bodyz00);
						{	/* Cgen/emit_cop.scm 56 */
							bool_t BgL_res4350z00_2304;

							{	/* Cgen/emit_cop.scm 56 */
								BgL_copz00_bglt BgL_copz00_2278;

								BgL_copz00_2278 = (BgL_copz00_bglt) (BgL_arg4002z00_1537);
								{	/* Cgen/emit_cop.scm 56 */
									obj_t BgL_method3847z00_2279;

									{	/* Cgen/emit_cop.scm 56 */
										BgL_objectz00_bglt BgL_objz00_2280;

										BgL_objz00_2280 = (BgL_objectz00_bglt) (BgL_copz00_2278);
										{	/* Cgen/emit_cop.scm 56 */
											long BgL_objzd2classzd2numz00_2281;

											BgL_objzd2classzd2numz00_2281 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2280);
											{	/* Cgen/emit_cop.scm 56 */
												obj_t BgL_arg2643z00_2282;

												BgL_arg2643z00_2282 =
													PROCEDURE_REF
													(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
													(int) (((long) 1)));
												{	/* Cgen/emit_cop.scm 56 */
													obj_t BgL_arrayz00_2284;

													int BgL_offsetz00_2285;

													BgL_arrayz00_2284 = BgL_arg2643z00_2282;
													BgL_offsetz00_2285 =
														(int) (BgL_objzd2classzd2numz00_2281);
													{	/* Cgen/emit_cop.scm 56 */
														long BgL_offsetz00_2286;

														BgL_offsetz00_2286 =
															((long) (BgL_offsetz00_2285) - OBJECT_TYPE);
														{	/* Cgen/emit_cop.scm 56 */
															long BgL_modz00_2287;

															{	/* Cgen/emit_cop.scm 56 */
																int BgL_arg2645z00_2288;

																BgL_arg2645z00_2288 = (int) (((long) 16));
																{	/* Cgen/emit_cop.scm 56 */
																	long BgL_auxz00_6598;

																	BgL_auxz00_6598 =
																		(long) (BgL_arg2645z00_2288);
																	BgL_modz00_2287 =
																		(BgL_offsetz00_2286 / BgL_auxz00_6598);
															}}
															{	/* Cgen/emit_cop.scm 56 */
																long BgL_restz00_2289;

																{	/* Cgen/emit_cop.scm 56 */
																	int BgL_arg2644z00_2290;

																	BgL_arg2644z00_2290 = (int) (((long) 16));
																	{	/* Cgen/emit_cop.scm 56 */
																		long BgL_auxz00_6602;

																		BgL_auxz00_6602 =
																			(long) (BgL_arg2644z00_2290);
																		BgL_restz00_2289 =
																			(BgL_offsetz00_2286 % BgL_auxz00_6602);
																}}
																{	/* Cgen/emit_cop.scm 56 */

																	BgL_method3847z00_2279 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2284,
																			(int) (BgL_modz00_2287)),
																		(int) (BgL_restz00_2289));
									}}}}}}}}
									BgL_res4350z00_2304 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3847z00_2279)
										(BgL_method3847z00_2279, (obj_t) (BgL_copz00_2278), BEOA));
							}}
							BgL_auxz00_6578 = BgL_res4350z00_2304;
					}}
					return BBOOL(BgL_auxz00_6578);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2()
	{
		AN_OBJECT;
		{	/* Cgen/emit_cop.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4608z00zzcgen_emitzd2copzd2));
		}
	}

#ifdef __cplusplus
}
#endif
