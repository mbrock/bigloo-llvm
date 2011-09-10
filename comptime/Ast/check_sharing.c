/*===========================================================================*/
/*   (Ast/check_sharing.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/check_sharing.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
	}                  *BgL_sequencez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

	typedef struct BgL_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_selectz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl__checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(BgL_nodez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2a3588zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2a3590zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t
		BGl_checkzd2nodezd2sharingzd2f3592zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2f3602zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t
		BGl__checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_checkzd2sharingzd2();
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2b3618zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t
		BGl_checkzd2nodezd2sharingzd2l3606zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2l3608zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static bool_t BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2(obj_t,
		obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2c3600zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2c3596zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_checkzd2sharingzd2();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_checkzd2nodezd2sharingzd2m3615zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2 =
		BUNSPEC;
	extern obj_t BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzast_checkzd2sharingzd2();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	BGL_IMPORT obj_t bgl_find_runtime_type(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2();
	static obj_t
		BGl_checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2
		(BgL_nodez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_checkzd2nodezd2sharingzd2s3586zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2s3604zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2s3598zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_checkzd2nodezd2sharingzd2s3611zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2e3594zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2sharingzd2j3613zd2zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2();
	static obj_t BGl__checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3861z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3861za700za7za7a3895za7, "Check sharing (", 15);
	      DEFINE_STRING(BGl_string3862z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3862za700za7za7a3896za7, ")", 1);
	      DEFINE_STRING(BGl_string3863z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3863za700za7za7a3897za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3864z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3864za700za7za7a3898za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3865z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3865za700za7za7a3899za7, " error", 6);
	      DEFINE_STRING(BGl_string3866z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3866za700za7za7a3900za7, "s", 1);
	      DEFINE_STRING(BGl_string3867z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3867za700za7za7a3901za7, "", 0);
	      DEFINE_STRING(BGl_string3868z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3868za700za7za7a3902za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3870z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3870za700za7za7a3903za7, "check-node-sharing", 18);
	      DEFINE_STRING(BGl_string3869z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3869za700za7za7a3904za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3871z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3871za700za7za7a3905za7, "shared node", 11);
	      DEFINE_STRING(BGl_string3872z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3872za700za7za7a3906za7, "node    : ", 10);
	      DEFINE_STRING(BGl_string3873z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3873za700za7za7a3907za7, "context : ", 10);
	      DEFINE_STRING(BGl_string3874z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3874za700za7za7a3908za7, "================================",
		32);
	      DEFINE_STRING(BGl_string3891z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3891za700za7za7a3909za7, "ast_check-sharing", 17);
	      DEFINE_STRING(BGl_string3892z00zzast_checkzd2sharingzd2,
		BgL_bgl_string3892za700za7za7a3910za7, "done pass-started ", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2sharingzd2envz00zzast_checkzd2sharingzd2,
		BgL_bgl__checkza7d2sharing3911za7,
		BGl__checkzd2sharingzd2zzast_checkzd2sharingzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2nodezd2sharingzd2resetz12zd2envz12zzast_checkzd2sharingzd2,
		BgL_bgl__checkza7d2nodeza7d23912z00,
		BGl__checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_checkzd2nodezd2sharingzd2d3583zd2envz00zzast_checkzd2sharingzd2,
		BgL_bgl__checkza7d2nodeza7d23913z00,
		BGl__checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
		BgL_bgl__checkza7d2nodeza7d23914z00,
		BGl__checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3875z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3915z00,
		BGl_checkzd2nodezd2sharingzd2s3586zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3876z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3916z00,
		BGl_checkzd2nodezd2sharingzd2a3588zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3877z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3917z00,
		BGl_checkzd2nodezd2sharingzd2a3590zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3878z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3918z00,
		BGl_checkzd2nodezd2sharingzd2f3592zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3880z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3919z00,
		BGl_checkzd2nodezd2sharingzd2c3596zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3879z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3920z00,
		BGl_checkzd2nodezd2sharingzd2e3594zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3881z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3921z00,
		BGl_checkzd2nodezd2sharingzd2s3598zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3882z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3922z00,
		BGl_checkzd2nodezd2sharingzd2c3600zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3883z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3923z00,
		BGl_checkzd2nodezd2sharingzd2f3602zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3884z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3924z00,
		BGl_checkzd2nodezd2sharingzd2s3604zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3885z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3925z00,
		BGl_checkzd2nodezd2sharingzd2l3606zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3886z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3926z00,
		BGl_checkzd2nodezd2sharingzd2l3608zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3887z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3927z00,
		BGl_checkzd2nodezd2sharingzd2s3611zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3888z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3928z00,
		BGl_checkzd2nodezd2sharingzd2j3613zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3890z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3929z00,
		BGl_checkzd2nodezd2sharingzd2b3618zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3889z00zzast_checkzd2sharingzd2,
		BgL_bgl_checkza7d2nodeza7d2s3930z00,
		BGl_checkzd2nodezd2sharingzd2m3615zd2zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long
		BgL_checksumz00_2807, char *BgL_fromz00_2808)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2();
					BGl_cnstzd2initzd2zzast_checkzd2sharingzd2();
					BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2();
					BGl_genericzd2initzd2zzast_checkzd2sharingzd2();
					BGl_methodzd2initzd2zzast_checkzd2sharingzd2();
					BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_check-sharing");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			{	/* Ast/check_sharing.scm 17 */
				obj_t BgL_cportz00_2799;

				BgL_cportz00_2799 =
					bgl_open_input_string(BGl_string3892z00zzast_checkzd2sharingzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2800;

					BgL_iz00_2800 = ((long) 1);
				BgL_loopz00_2801:
					if ((BgL_iz00_2800 == ((long) -1)))
						{	/* Ast/check_sharing.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/check_sharing.scm 17 */
							{	/* Ast/check_sharing.scm 17 */
								obj_t BgL_arg3894z00_2803;

								{	/* Ast/check_sharing.scm 17 */

									{	/* Ast/check_sharing.scm 17 */
										obj_t BgL_locationz00_2805;

										BgL_locationz00_2805 = BBOOL(((bool_t) 0));
										{	/* Ast/check_sharing.scm 17 */

											BgL_arg3894z00_2803 =
												BGl_readz00zz__readerz00(BgL_cportz00_2799,
												BgL_locationz00_2805);
										}
									}
								}
								{	/* Ast/check_sharing.scm 17 */
									int BgL_auxz00_2831;

									BgL_auxz00_2831 = (int) (BgL_iz00_2800);
									CNST_TABLE_SET(BgL_auxz00_2831, BgL_arg3894z00_2803);
							}}
							{	/* Ast/check_sharing.scm 17 */
								int BgL_auxz00_2806;

								BgL_auxz00_2806 = (int) ((BgL_iz00_2800 - ((long) 1)));
								{
									long BgL_iz00_2836;

									BgL_iz00_2836 = (long) (BgL_auxz00_2806);
									BgL_iz00_2800 = BgL_iz00_2836;
									goto BgL_loopz00_2801;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL;
			return BUNSPEC;
		}
	}



/* check-sharing */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t
		BgL_whenz00_23, obj_t BgL_globalsz00_24)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 38 */
			if (CBOOL(BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00))
				{	/* Ast/check_sharing.scm 39 */
					{	/* Ast/check_sharing.scm 41 */
						obj_t BgL_arg3630z00_909;

						BgL_arg3630z00_909 =
							string_append_3(BGl_string3861z00zzast_checkzd2sharingzd2,
							BgL_whenz00_23, BGl_string3862z00zzast_checkzd2sharingzd2);
						{	/* Ast/check_sharing.scm 41 */
							obj_t BgL_list3631z00_910;

							{	/* Ast/check_sharing.scm 41 */
								obj_t BgL_arg3632z00_911;

								{	/* Ast/check_sharing.scm 41 */
									obj_t BgL_arg3633z00_912;

									BgL_arg3633z00_912 =
										MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
									BgL_arg3632z00_911 =
										MAKE_PAIR(BgL_arg3630z00_909, BgL_arg3633z00_912);
								}
								BgL_list3631z00_910 =
									MAKE_PAIR(BGl_string3863z00zzast_checkzd2sharingzd2,
									BgL_arg3632z00_911);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
								BgL_list3631z00_910);
					}}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						string_append_3(BGl_string3861z00zzast_checkzd2sharingzd2,
						BgL_whenz00_23, BGl_string3862z00zzast_checkzd2sharingzd2);
					{
						obj_t BgL_hooksz00_916;

						obj_t BgL_hnamesz00_917;

						BgL_hooksz00_916 = BNIL;
						BgL_hnamesz00_917 = BNIL;
					BgL_zc3anonymousza33634ze3z83_918:
						if (NULLP(BgL_hooksz00_916))
							{	/* Ast/check_sharing.scm 41 */
								CNST_TABLE_REF(((long) 0));
							}
						else
							{	/* Ast/check_sharing.scm 41 */
								bool_t BgL_testz00_2852;

								{	/* Ast/check_sharing.scm 41 */
									obj_t BgL_fun3642z00_926;

									BgL_fun3642z00_926 = CAR(BgL_hooksz00_916);
									BgL_testz00_2852 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3642z00_926)
										(BgL_fun3642z00_926, BEOA));
								}
								if (BgL_testz00_2852)
									{
										obj_t BgL_hnamesz00_2859;

										obj_t BgL_hooksz00_2857;

										BgL_hooksz00_2857 = CDR(BgL_hooksz00_916);
										BgL_hnamesz00_2859 = CDR(BgL_hnamesz00_917);
										BgL_hnamesz00_917 = BgL_hnamesz00_2859;
										BgL_hooksz00_916 = BgL_hooksz00_2857;
										goto BgL_zc3anonymousza33634ze3z83_918;
									}
								else
									{	/* Ast/check_sharing.scm 41 */
										BGl_internalzd2errorzd2zztools_errorz00(string_append_3
											(BGl_string3861z00zzast_checkzd2sharingzd2,
												BgL_whenz00_23,
												BGl_string3862z00zzast_checkzd2sharingzd2),
											BGl_string3864z00zzast_checkzd2sharingzd2,
											CAR(BgL_hnamesz00_917));
									}
							}
					}
					{
						obj_t BgL_l3566z00_930;

						BgL_l3566z00_930 = BgL_globalsz00_24;
					BgL_zc3anonymousza33644ze3z83_931:
						if (PAIRP(BgL_l3566z00_930))
							{	/* Ast/check_sharing.scm 42 */
								{	/* Ast/check_sharing.scm 43 */
									obj_t BgL_globalz00_933;

									BgL_globalz00_933 = CAR(BgL_l3566z00_930);
									{	/* Ast/check_sharing.scm 43 */
										BgL_valuez00_bglt BgL_funz00_1544;

										{
											BgL_variablez00_bglt BgL_auxz00_2867;

											BgL_auxz00_2867 =
												(BgL_variablez00_bglt) (BgL_globalz00_933);
											BgL_funz00_1544 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2867))->
												BgL_valuez00);
										}
										{	/* Ast/check_sharing.scm 43 */
											obj_t BgL_bodyz00_1545;

											{
												BgL_sfunz00_bglt BgL_auxz00_2870;

												BgL_auxz00_2870 = (BgL_sfunz00_bglt) (BgL_funz00_1544);
												BgL_bodyz00_1545 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2870))->
													BgL_bodyz00);
											}
											{	/* Ast/check_sharing.scm 43 */

												BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
													(BgL_nodez00_bglt) (BgL_bodyz00_1545), BUNSPEC);
											}
										}
									}
								}
								{
									obj_t BgL_l3566z00_2875;

									BgL_l3566z00_2875 = CDR(BgL_l3566z00_930);
									BgL_l3566z00_930 = BgL_l3566z00_2875;
									goto BgL_zc3anonymousza33644ze3z83_931;
								}
							}
						else
							{	/* Ast/check_sharing.scm 42 */
								((bool_t) 1);
							}
					}
					BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL;
					if (
						((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
							((long) 0)))
						{	/* Ast/check_sharing.scm 46 */
							{	/* Ast/check_sharing.scm 46 */
								obj_t BgL_port3568z00_938;

								{	/* Ast/check_sharing.scm 46 */
									obj_t BgL_res3776z00_1552;

									{	/* Ast/check_sharing.scm 46 */
										obj_t BgL_auxz00_2880;

										BgL_auxz00_2880 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3776z00_1552 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2880);
									}
									BgL_port3568z00_938 = BgL_res3776z00_1552;
								}
								bgl_display_obj
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
									BgL_port3568z00_938);
								bgl_display_string(BGl_string3865z00zzast_checkzd2sharingzd2,
									BgL_port3568z00_938);
								{	/* Ast/check_sharing.scm 46 */
									obj_t BgL_arg3648z00_939;

									{	/* Ast/check_sharing.scm 46 */
										bool_t BgL_testz00_2885;

										if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Ast/check_sharing.scm 46 */
												BgL_testz00_2885 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
											}
										else
											{	/* Ast/check_sharing.scm 46 */
												BgL_testz00_2885 = ((bool_t) 0);
											}
										if (BgL_testz00_2885)
											{	/* Ast/check_sharing.scm 46 */
												BgL_arg3648z00_939 =
													BGl_string3866z00zzast_checkzd2sharingzd2;
											}
										else
											{	/* Ast/check_sharing.scm 46 */
												BgL_arg3648z00_939 =
													BGl_string3867z00zzast_checkzd2sharingzd2;
											}
									}
									bgl_display_obj(BgL_arg3648z00_939, BgL_port3568z00_938);
								}
								bgl_display_string(BGl_string3868z00zzast_checkzd2sharingzd2,
									BgL_port3568z00_938);
								bgl_display_char(((unsigned char) '\n'), BgL_port3568z00_938);
							}
							{	/* Ast/check_sharing.scm 46 */
								obj_t BgL_list3651z00_942;

								BgL_list3651z00_942 = MAKE_PAIR(BINT(((long) -1)), BNIL);
								return BGl_exitz00zz__errorz00(BgL_list3651z00_942);
							}
						}
					else
						{
							obj_t BgL_hooksz00_946;

							obj_t BgL_hnamesz00_947;

							BgL_hooksz00_946 = BNIL;
							BgL_hnamesz00_947 = BNIL;
						BgL_zc3anonymousza33652ze3z83_948:
							if (NULLP(BgL_hooksz00_946))
								{	/* Ast/check_sharing.scm 46 */
									return BgL_globalsz00_24;
								}
							else
								{	/* Ast/check_sharing.scm 46 */
									bool_t BgL_testz00_2898;

									{	/* Ast/check_sharing.scm 46 */
										obj_t BgL_fun3659z00_955;

										BgL_fun3659z00_955 = CAR(BgL_hooksz00_946);
										BgL_testz00_2898 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun3659z00_955)
											(BgL_fun3659z00_955, BEOA));
									}
									if (BgL_testz00_2898)
										{
											obj_t BgL_hnamesz00_2905;

											obj_t BgL_hooksz00_2903;

											BgL_hooksz00_2903 = CDR(BgL_hooksz00_946);
											BgL_hnamesz00_2905 = CDR(BgL_hnamesz00_947);
											BgL_hnamesz00_947 = BgL_hnamesz00_2905;
											BgL_hooksz00_946 = BgL_hooksz00_2903;
											goto BgL_zc3anonymousza33652ze3z83_948;
										}
									else
										{	/* Ast/check_sharing.scm 46 */
											obj_t BgL_arg3658z00_954;

											BgL_arg3658z00_954 = CAR(BgL_hnamesz00_947);
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string3869z00zzast_checkzd2sharingzd2,
												BgL_arg3658z00_954);
										}
								}
						}
				}
			else
				{	/* Ast/check_sharing.scm 39 */
					return BFALSE;
				}
		}
	}



/* _check-sharing */
	obj_t BGl__checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t BgL_envz00_2724,
		obj_t BgL_whenz00_2725, obj_t BgL_globalsz00_2726)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 38 */
			return
				BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(BgL_whenz00_2725,
				BgL_globalsz00_2726);
		}
	}



/* check-node-sharing-reset! */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 64 */
			return (BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL, BUNSPEC);
		}
	}



/* _check-node-sharing-reset! */
	obj_t BGl__checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2727)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 64 */
			return BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2();
		}
	}



/* check-node-sharing* */
	bool_t BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2(obj_t
		BgL_nodeza2za2_63, obj_t BgL_contextz00_64)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 225 */
			{
				obj_t BgL_l3581z00_961;

				BgL_l3581z00_961 = BgL_nodeza2za2_63;
			BgL_zc3anonymousza33661ze3z83_962:
				if (PAIRP(BgL_l3581z00_961))
					{	/* Ast/check_sharing.scm 226 */
						{	/* Ast/check_sharing.scm 226 */
							obj_t BgL_nodez00_964;

							BgL_nodez00_964 = CAR(BgL_l3581z00_961);
							{	/* Ast/check_sharing.scm 226 */
								BgL_nodez00_bglt BgL_nodez00_1598;

								BgL_nodez00_1598 = (BgL_nodez00_bglt) (BgL_nodez00_964);
								{	/* Ast/check_sharing.scm 226 */
									obj_t BgL_method3584z00_1600;

									{	/* Ast/check_sharing.scm 226 */
										BgL_objectz00_bglt BgL_objz00_1601;

										BgL_objz00_1601 = (BgL_objectz00_bglt) (BgL_nodez00_1598);
										{	/* Ast/check_sharing.scm 226 */
											long BgL_objzd2classzd2numz00_1602;

											BgL_objzd2classzd2numz00_1602 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1601);
											{	/* Ast/check_sharing.scm 226 */
												obj_t BgL_arg2643z00_1603;

												BgL_arg2643z00_1603 =
													PROCEDURE_REF
													(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
													(int) (((long) 1)));
												{	/* Ast/check_sharing.scm 226 */
													obj_t BgL_arrayz00_1605;

													int BgL_offsetz00_1606;

													BgL_arrayz00_1605 = BgL_arg2643z00_1603;
													BgL_offsetz00_1606 =
														(int) (BgL_objzd2classzd2numz00_1602);
													{	/* Ast/check_sharing.scm 226 */
														long BgL_offsetz00_1607;

														BgL_offsetz00_1607 =
															((long) (BgL_offsetz00_1606) - OBJECT_TYPE);
														{	/* Ast/check_sharing.scm 226 */
															long BgL_modz00_1608;

															{	/* Ast/check_sharing.scm 226 */
																int BgL_arg2645z00_1609;

																BgL_arg2645z00_1609 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 226 */
																	long BgL_auxz00_2923;

																	BgL_auxz00_2923 =
																		(long) (BgL_arg2645z00_1609);
																	BgL_modz00_1608 =
																		(BgL_offsetz00_1607 / BgL_auxz00_2923);
															}}
															{	/* Ast/check_sharing.scm 226 */
																long BgL_restz00_1610;

																{	/* Ast/check_sharing.scm 226 */
																	int BgL_arg2644z00_1611;

																	BgL_arg2644z00_1611 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 226 */
																		long BgL_auxz00_2927;

																		BgL_auxz00_2927 =
																			(long) (BgL_arg2644z00_1611);
																		BgL_restz00_1610 =
																			(BgL_offsetz00_1607 % BgL_auxz00_2927);
																}}
																{	/* Ast/check_sharing.scm 226 */

																	BgL_method3584z00_1600 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1605,
																			(int) (BgL_modz00_1608)),
																		(int) (BgL_restz00_1610));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3584z00_1600)
										(BgL_method3584z00_1600, (obj_t) (BgL_nodez00_1598),
										BgL_contextz00_64, BEOA);
						}}}
						{
							obj_t BgL_l3581z00_2937;

							BgL_l3581z00_2937 = CDR(BgL_l3581z00_961);
							BgL_l3581z00_961 = BgL_l3581z00_2937;
							goto BgL_zc3anonymousza33661ze3z83_962;
						}
					}
				else
					{	/* Ast/check_sharing.scm 226 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_checkzd2nodezd2sharingzd2d3583zd2envz00zzast_checkzd2sharingzd2,
				BGl_nodez00zzast_nodez00, BGl_string3870z00zzast_checkzd2sharingzd2);
		}
	}



/* check-node-sharing */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(BgL_nodez00_bglt
		BgL_nodez00_27, obj_t BgL_contextz00_28)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 70 */
			{	/* Ast/check_sharing.scm 70 */
				obj_t BgL_method3584z00_1626;

				{	/* Ast/check_sharing.scm 70 */
					BgL_objectz00_bglt BgL_objz00_1627;

					BgL_objz00_1627 = (BgL_objectz00_bglt) (BgL_nodez00_27);
					{	/* Ast/check_sharing.scm 70 */
						long BgL_objzd2classzd2numz00_1628;

						BgL_objzd2classzd2numz00_1628 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1627);
						{	/* Ast/check_sharing.scm 70 */
							obj_t BgL_arg2643z00_1629;

							BgL_arg2643z00_1629 =
								PROCEDURE_REF
								(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								(int) (((long) 1)));
							{	/* Ast/check_sharing.scm 70 */
								obj_t BgL_arrayz00_1631;

								int BgL_offsetz00_1632;

								BgL_arrayz00_1631 = BgL_arg2643z00_1629;
								BgL_offsetz00_1632 = (int) (BgL_objzd2classzd2numz00_1628);
								{	/* Ast/check_sharing.scm 70 */
									long BgL_offsetz00_1633;

									BgL_offsetz00_1633 =
										((long) (BgL_offsetz00_1632) - OBJECT_TYPE);
									{	/* Ast/check_sharing.scm 70 */
										long BgL_modz00_1634;

										{	/* Ast/check_sharing.scm 70 */
											int BgL_arg2645z00_1635;

											BgL_arg2645z00_1635 = (int) (((long) 16));
											{	/* Ast/check_sharing.scm 70 */
												long BgL_auxz00_2948;

												BgL_auxz00_2948 = (long) (BgL_arg2645z00_1635);
												BgL_modz00_1634 =
													(BgL_offsetz00_1633 / BgL_auxz00_2948);
										}}
										{	/* Ast/check_sharing.scm 70 */
											long BgL_restz00_1636;

											{	/* Ast/check_sharing.scm 70 */
												int BgL_arg2644z00_1637;

												BgL_arg2644z00_1637 = (int) (((long) 16));
												{	/* Ast/check_sharing.scm 70 */
													long BgL_auxz00_2952;

													BgL_auxz00_2952 = (long) (BgL_arg2644z00_1637);
													BgL_restz00_1636 =
														(BgL_offsetz00_1633 % BgL_auxz00_2952);
											}}
											{	/* Ast/check_sharing.scm 70 */

												BgL_method3584z00_1626 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1631,
														(int) (BgL_modz00_1634)), (int) (BgL_restz00_1636));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3584z00_1626) (BgL_method3584z00_1626,
					(obj_t) (BgL_nodez00_27), BgL_contextz00_28, BEOA);
			}
		}
	}



/* _check-node-sharing */
	obj_t BGl__checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2728, obj_t BgL_nodez00_2729, obj_t BgL_contextz00_2730)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 70 */
			return
				BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2729), BgL_contextz00_2730);
		}
	}



/* check-node-sharing-d3583 */
	obj_t
		BGl_checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2
		(BgL_nodez00_bglt BgL_nodez00_29, obj_t BgL_contextz00_30)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (BgL_nodez00_29),
						BGl_za2previousza2z00zzast_checkzd2sharingzd2)))
				{	/* Ast/check_sharing.scm 71 */
					{	/* Ast/check_sharing.scm 73 */
						obj_t BgL_arg3717z00_1369;

						obj_t BgL_arg3720z00_1372;

						BgL_arg3717z00_1369 =
							(((BgL_nodez00_bglt) CREF(BgL_nodez00_29))->BgL_locz00);
						BgL_arg3720z00_1372 =
							bgl_find_runtime_type((obj_t) (BgL_nodez00_29));
						BGl_userzd2warningzf2locationz20zztools_errorz00
							(BgL_arg3717z00_1369, BGl_string3870z00zzast_checkzd2sharingzd2,
							BGl_string3871z00zzast_checkzd2sharingzd2, BgL_arg3720z00_1372);
					}
					{	/* Ast/check_sharing.scm 77 */
						obj_t BgL_port3569z00_1373;

						{	/* Ast/check_sharing.scm 77 */
							obj_t BgL_res3784z00_1653;

							{	/* Ast/check_sharing.scm 77 */
								obj_t BgL_auxz00_2972;

								BgL_auxz00_2972 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3784z00_1653 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2972);
							}
							BgL_port3569z00_1373 = BgL_res3784z00_1653;
						}
						bgl_display_string(BGl_string3872z00zzast_checkzd2sharingzd2,
							BgL_port3569z00_1373);
						bgl_display_obj(BGl_shapez00zztools_shapez00((obj_t)
								(BgL_nodez00_29)), BgL_port3569z00_1373);
						bgl_display_char(((unsigned char) '\n'), BgL_port3569z00_1373);
					}
					{	/* Ast/check_sharing.scm 78 */
						obj_t BgL_port3570z00_1375;

						{	/* Ast/check_sharing.scm 78 */
							obj_t BgL_res3785z00_1658;

							{	/* Ast/check_sharing.scm 78 */
								obj_t BgL_auxz00_2980;

								BgL_auxz00_2980 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3785z00_1658 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2980);
							}
							BgL_port3570z00_1375 = BgL_res3785z00_1658;
						}
						bgl_display_string(BGl_string3873z00zzast_checkzd2sharingzd2,
							BgL_port3570z00_1375);
						bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_contextz00_30),
							BgL_port3570z00_1375);
						bgl_display_char(((unsigned char) '\n'), BgL_port3570z00_1375);
					}
					{	/* Ast/check_sharing.scm 79 */
						obj_t BgL_port3571z00_1377;

						{	/* Ast/check_sharing.scm 79 */
							obj_t BgL_res3786z00_1663;

							{	/* Ast/check_sharing.scm 79 */
								obj_t BgL_auxz00_2987;

								BgL_auxz00_2987 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3786z00_1663 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2987);
							}
							BgL_port3571z00_1377 = BgL_res3786z00_1663;
						}
						bgl_display_string(BGl_string3874z00zzast_checkzd2sharingzd2,
							BgL_port3571z00_1377);
						bgl_display_char(((unsigned char) '\n'), BgL_port3571z00_1377);
				}}
			else
				{	/* Ast/check_sharing.scm 71 */
					BGl_za2previousza2z00zzast_checkzd2sharingzd2 =
						MAKE_PAIR(
						(obj_t) (BgL_nodez00_29),
						BGl_za2previousza2z00zzast_checkzd2sharingzd2);
				}
			return CNST_TABLE_REF(((long) 1));
		}
	}



/* _check-node-sharing-d3583 */
	obj_t BGl__checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2731, obj_t BgL_nodez00_2732, obj_t BgL_contextz00_2733)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			return
				BGl_checkzd2nodezd2sharingzd2d3583zd2zzast_checkzd2sharingzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2732), BgL_contextz00_2733);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc3875z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_appz00zzast_nodez00, BGl_proc3876z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3877z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc3878z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_externz00zzast_nodez00, BGl_proc3879z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_castz00zzast_nodez00, BGl_proc3880z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_setqz00zzast_nodez00, BGl_proc3881z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc3882z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_failz00zzast_nodez00, BGl_proc3883z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_selectz00zzast_nodez00, BGl_proc3884z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3885z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3886z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3887z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3888z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3889z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3890z00zzast_checkzd2sharingzd2,
				BGl_string3870z00zzast_checkzd2sharingzd2);
		}
	}



/* check-node-sharing-b3618 */
	obj_t BGl_checkzd2nodezd2sharingzd2b3618zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2750, obj_t BgL_nodez00_2751, obj_t BgL_contextz00_2752)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 217 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1524;

				obj_t BgL_contextz00_1525;

				BgL_nodez00_1524 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2751);
				BgL_contextz00_1525 = BgL_contextz00_2752;
				{

					{	/* Ast/check_sharing.scm 217 */
						obj_t BgL_nextzd2method3617zd2_1530;

						BgL_nextzd2method3617zd2_1530 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1524),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_boxzd2setz12zc0zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3617zd2_1530))
							{	/* Ast/check_sharing.scm 217 */
								PROCEDURE_ENTRY(BgL_nextzd2method3617zd2_1530)
									(BgL_nextzd2method3617zd2_1530, (obj_t) (BgL_nodez00_1524),
									BgL_contextz00_1525, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 217 */
								{	/* Ast/check_sharing.scm 217 */
									BgL_nodez00_bglt BgL_nodez00_2697;

									BgL_nodez00_2697 = (BgL_nodez00_bglt) (BgL_nodez00_1524);
									{	/* Ast/check_sharing.scm 217 */
										obj_t BgL_method3584z00_2699;

										{	/* Ast/check_sharing.scm 217 */
											BgL_objectz00_bglt BgL_objz00_2700;

											BgL_objz00_2700 = (BgL_objectz00_bglt) (BgL_nodez00_2697);
											{	/* Ast/check_sharing.scm 217 */
												long BgL_objzd2classzd2numz00_2701;

												BgL_objzd2classzd2numz00_2701 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2700);
												{	/* Ast/check_sharing.scm 217 */
													obj_t BgL_arg2643z00_2702;

													BgL_arg2643z00_2702 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 217 */
														obj_t BgL_arrayz00_2704;

														int BgL_offsetz00_2705;

														BgL_arrayz00_2704 = BgL_arg2643z00_2702;
														BgL_offsetz00_2705 =
															(int) (BgL_objzd2classzd2numz00_2701);
														{	/* Ast/check_sharing.scm 217 */
															long BgL_offsetz00_2706;

															BgL_offsetz00_2706 =
																((long) (BgL_offsetz00_2705) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 217 */
																long BgL_modz00_2707;

																{	/* Ast/check_sharing.scm 217 */
																	int BgL_arg2645z00_2708;

																	BgL_arg2645z00_2708 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 217 */
																		long BgL_auxz00_3029;

																		BgL_auxz00_3029 =
																			(long) (BgL_arg2645z00_2708);
																		BgL_modz00_2707 =
																			(BgL_offsetz00_2706 / BgL_auxz00_3029);
																}}
																{	/* Ast/check_sharing.scm 217 */
																	long BgL_restz00_2709;

																	{	/* Ast/check_sharing.scm 217 */
																		int BgL_arg2644z00_2710;

																		BgL_arg2644z00_2710 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 217 */
																			long BgL_auxz00_3033;

																			BgL_auxz00_3033 =
																				(long) (BgL_arg2644z00_2710);
																			BgL_restz00_2709 =
																				(BgL_offsetz00_2706 % BgL_auxz00_3033);
																	}}
																	{	/* Ast/check_sharing.scm 217 */

																		BgL_method3584z00_2699 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2704,
																				(int) (BgL_modz00_2707)),
																			(int) (BgL_restz00_2709));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2699)
											(BgL_method3584z00_2699, (obj_t) (BgL_nodez00_2697),
											BgL_contextz00_1525, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 220 */
						BgL_nodez00_bglt BgL_arg3772z00_1529;

						BgL_arg3772z00_1529 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1524))->
							BgL_valuez00);
						{	/* Ast/check_sharing.scm 220 */
							obj_t BgL_contextz00_2670;

							BgL_contextz00_2670 = (obj_t) (BgL_nodez00_1524);
							{	/* Ast/check_sharing.scm 220 */
								obj_t BgL_method3584z00_2671;

								{	/* Ast/check_sharing.scm 220 */
									BgL_objectz00_bglt BgL_objz00_2672;

									BgL_objz00_2672 = (BgL_objectz00_bglt) (BgL_arg3772z00_1529);
									{	/* Ast/check_sharing.scm 220 */
										long BgL_objzd2classzd2numz00_2673;

										BgL_objzd2classzd2numz00_2673 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2672);
										{	/* Ast/check_sharing.scm 220 */
											obj_t BgL_arg2643z00_2674;

											BgL_arg2643z00_2674 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 220 */
												obj_t BgL_arrayz00_2676;

												int BgL_offsetz00_2677;

												BgL_arrayz00_2676 = BgL_arg2643z00_2674;
												BgL_offsetz00_2677 =
													(int) (BgL_objzd2classzd2numz00_2673);
												{	/* Ast/check_sharing.scm 220 */
													long BgL_offsetz00_2678;

													BgL_offsetz00_2678 =
														((long) (BgL_offsetz00_2677) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 220 */
														long BgL_modz00_2679;

														{	/* Ast/check_sharing.scm 220 */
															int BgL_arg2645z00_2680;

															BgL_arg2645z00_2680 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 220 */
																long BgL_auxz00_3053;

																BgL_auxz00_3053 = (long) (BgL_arg2645z00_2680);
																BgL_modz00_2679 =
																	(BgL_offsetz00_2678 / BgL_auxz00_3053);
														}}
														{	/* Ast/check_sharing.scm 220 */
															long BgL_restz00_2681;

															{	/* Ast/check_sharing.scm 220 */
																int BgL_arg2644z00_2682;

																BgL_arg2644z00_2682 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 220 */
																	long BgL_auxz00_3057;

																	BgL_auxz00_3057 =
																		(long) (BgL_arg2644z00_2682);
																	BgL_restz00_2681 =
																		(BgL_offsetz00_2678 % BgL_auxz00_3057);
															}}
															{	/* Ast/check_sharing.scm 220 */

																BgL_method3584z00_2671 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2676,
																		(int) (BgL_modz00_2679)),
																	(int) (BgL_restz00_2681));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2671)
									(BgL_method3584z00_2671, (obj_t) (BgL_arg3772z00_1529),
									BgL_contextz00_2670, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-m3615 */
	obj_t BGl_checkzd2nodezd2sharingzd2m3615zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2753, obj_t BgL_nodez00_2754, obj_t BgL_contextz00_2755)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 210 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1517;

				obj_t BgL_contextz00_1518;

				BgL_nodez00_1517 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2754);
				BgL_contextz00_1518 = BgL_contextz00_2755;
				{

					{	/* Ast/check_sharing.scm 210 */
						obj_t BgL_nextzd2method3614zd2_1522;

						BgL_nextzd2method3614zd2_1522 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1517),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_makezd2boxzd2zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3614zd2_1522))
							{	/* Ast/check_sharing.scm 210 */
								PROCEDURE_ENTRY(BgL_nextzd2method3614zd2_1522)
									(BgL_nextzd2method3614zd2_1522, (obj_t) (BgL_nodez00_1517),
									BgL_contextz00_1518, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 210 */
								{	/* Ast/check_sharing.scm 210 */
									BgL_nodez00_bglt BgL_nodez00_2641;

									BgL_nodez00_2641 = (BgL_nodez00_bglt) (BgL_nodez00_1517);
									{	/* Ast/check_sharing.scm 210 */
										obj_t BgL_method3584z00_2643;

										{	/* Ast/check_sharing.scm 210 */
											BgL_objectz00_bglt BgL_objz00_2644;

											BgL_objz00_2644 = (BgL_objectz00_bglt) (BgL_nodez00_2641);
											{	/* Ast/check_sharing.scm 210 */
												long BgL_objzd2classzd2numz00_2645;

												BgL_objzd2classzd2numz00_2645 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2644);
												{	/* Ast/check_sharing.scm 210 */
													obj_t BgL_arg2643z00_2646;

													BgL_arg2643z00_2646 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 210 */
														obj_t BgL_arrayz00_2648;

														int BgL_offsetz00_2649;

														BgL_arrayz00_2648 = BgL_arg2643z00_2646;
														BgL_offsetz00_2649 =
															(int) (BgL_objzd2classzd2numz00_2645);
														{	/* Ast/check_sharing.scm 210 */
															long BgL_offsetz00_2650;

															BgL_offsetz00_2650 =
																((long) (BgL_offsetz00_2649) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 210 */
																long BgL_modz00_2651;

																{	/* Ast/check_sharing.scm 210 */
																	int BgL_arg2645z00_2652;

																	BgL_arg2645z00_2652 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 210 */
																		long BgL_auxz00_3084;

																		BgL_auxz00_3084 =
																			(long) (BgL_arg2645z00_2652);
																		BgL_modz00_2651 =
																			(BgL_offsetz00_2650 / BgL_auxz00_3084);
																}}
																{	/* Ast/check_sharing.scm 210 */
																	long BgL_restz00_2653;

																	{	/* Ast/check_sharing.scm 210 */
																		int BgL_arg2644z00_2654;

																		BgL_arg2644z00_2654 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 210 */
																			long BgL_auxz00_3088;

																			BgL_auxz00_3088 =
																				(long) (BgL_arg2644z00_2654);
																			BgL_restz00_2653 =
																				(BgL_offsetz00_2650 % BgL_auxz00_3088);
																	}}
																	{	/* Ast/check_sharing.scm 210 */

																		BgL_method3584z00_2643 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2648,
																				(int) (BgL_modz00_2651)),
																			(int) (BgL_restz00_2653));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2643)
											(BgL_method3584z00_2643, (obj_t) (BgL_nodez00_2641),
											BgL_contextz00_1518, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 212 */
						BgL_nodez00_bglt BgL_arg3770z00_1521;

						BgL_arg3770z00_1521 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1517))->BgL_valuez00);
						{	/* Ast/check_sharing.scm 212 */
							obj_t BgL_contextz00_2614;

							BgL_contextz00_2614 = (obj_t) (BgL_nodez00_1517);
							{	/* Ast/check_sharing.scm 212 */
								obj_t BgL_method3584z00_2615;

								{	/* Ast/check_sharing.scm 212 */
									BgL_objectz00_bglt BgL_objz00_2616;

									BgL_objz00_2616 = (BgL_objectz00_bglt) (BgL_arg3770z00_1521);
									{	/* Ast/check_sharing.scm 212 */
										long BgL_objzd2classzd2numz00_2617;

										BgL_objzd2classzd2numz00_2617 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2616);
										{	/* Ast/check_sharing.scm 212 */
											obj_t BgL_arg2643z00_2618;

											BgL_arg2643z00_2618 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 212 */
												obj_t BgL_arrayz00_2620;

												int BgL_offsetz00_2621;

												BgL_arrayz00_2620 = BgL_arg2643z00_2618;
												BgL_offsetz00_2621 =
													(int) (BgL_objzd2classzd2numz00_2617);
												{	/* Ast/check_sharing.scm 212 */
													long BgL_offsetz00_2622;

													BgL_offsetz00_2622 =
														((long) (BgL_offsetz00_2621) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 212 */
														long BgL_modz00_2623;

														{	/* Ast/check_sharing.scm 212 */
															int BgL_arg2645z00_2624;

															BgL_arg2645z00_2624 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 212 */
																long BgL_auxz00_3108;

																BgL_auxz00_3108 = (long) (BgL_arg2645z00_2624);
																BgL_modz00_2623 =
																	(BgL_offsetz00_2622 / BgL_auxz00_3108);
														}}
														{	/* Ast/check_sharing.scm 212 */
															long BgL_restz00_2625;

															{	/* Ast/check_sharing.scm 212 */
																int BgL_arg2644z00_2626;

																BgL_arg2644z00_2626 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 212 */
																	long BgL_auxz00_3112;

																	BgL_auxz00_3112 =
																		(long) (BgL_arg2644z00_2626);
																	BgL_restz00_2625 =
																		(BgL_offsetz00_2622 % BgL_auxz00_3112);
															}}
															{	/* Ast/check_sharing.scm 212 */

																BgL_method3584z00_2615 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2620,
																		(int) (BgL_modz00_2623)),
																	(int) (BgL_restz00_2625));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2615)
									(BgL_method3584z00_2615, (obj_t) (BgL_arg3770z00_1521),
									BgL_contextz00_2614, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-j3613 */
	obj_t BGl_checkzd2nodezd2sharingzd2j3613zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2756, obj_t BgL_nodez00_2757, obj_t BgL_contextz00_2758)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 201 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1509;

				obj_t BgL_contextz00_1510;

				BgL_nodez00_1509 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2757);
				BgL_contextz00_1510 = BgL_contextz00_2758;
				{

					{	/* Ast/check_sharing.scm 201 */
						obj_t BgL_nextzd2method3612zd2_1515;

						BgL_nextzd2method3612zd2_1515 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1509),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_jumpzd2exzd2itz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3612zd2_1515))
							{	/* Ast/check_sharing.scm 201 */
								PROCEDURE_ENTRY(BgL_nextzd2method3612zd2_1515)
									(BgL_nextzd2method3612zd2_1515, (obj_t) (BgL_nodez00_1509),
									BgL_contextz00_1510, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 201 */
								{	/* Ast/check_sharing.scm 201 */
									BgL_nodez00_bglt BgL_nodez00_2585;

									BgL_nodez00_2585 = (BgL_nodez00_bglt) (BgL_nodez00_1509);
									{	/* Ast/check_sharing.scm 201 */
										obj_t BgL_method3584z00_2587;

										{	/* Ast/check_sharing.scm 201 */
											BgL_objectz00_bglt BgL_objz00_2588;

											BgL_objz00_2588 = (BgL_objectz00_bglt) (BgL_nodez00_2585);
											{	/* Ast/check_sharing.scm 201 */
												long BgL_objzd2classzd2numz00_2589;

												BgL_objzd2classzd2numz00_2589 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2588);
												{	/* Ast/check_sharing.scm 201 */
													obj_t BgL_arg2643z00_2590;

													BgL_arg2643z00_2590 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 201 */
														obj_t BgL_arrayz00_2592;

														int BgL_offsetz00_2593;

														BgL_arrayz00_2592 = BgL_arg2643z00_2590;
														BgL_offsetz00_2593 =
															(int) (BgL_objzd2classzd2numz00_2589);
														{	/* Ast/check_sharing.scm 201 */
															long BgL_offsetz00_2594;

															BgL_offsetz00_2594 =
																((long) (BgL_offsetz00_2593) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 201 */
																long BgL_modz00_2595;

																{	/* Ast/check_sharing.scm 201 */
																	int BgL_arg2645z00_2596;

																	BgL_arg2645z00_2596 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 201 */
																		long BgL_auxz00_3139;

																		BgL_auxz00_3139 =
																			(long) (BgL_arg2645z00_2596);
																		BgL_modz00_2595 =
																			(BgL_offsetz00_2594 / BgL_auxz00_3139);
																}}
																{	/* Ast/check_sharing.scm 201 */
																	long BgL_restz00_2597;

																	{	/* Ast/check_sharing.scm 201 */
																		int BgL_arg2644z00_2598;

																		BgL_arg2644z00_2598 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 201 */
																			long BgL_auxz00_3143;

																			BgL_auxz00_3143 =
																				(long) (BgL_arg2644z00_2598);
																			BgL_restz00_2597 =
																				(BgL_offsetz00_2594 % BgL_auxz00_3143);
																	}}
																	{	/* Ast/check_sharing.scm 201 */

																		BgL_method3584z00_2587 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2592,
																				(int) (BgL_modz00_2595)),
																			(int) (BgL_restz00_2597));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2587)
											(BgL_method3584z00_2587, (obj_t) (BgL_nodez00_2585),
											BgL_contextz00_1510, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 204 */
						BgL_nodez00_bglt BgL_arg3768z00_1514;

						BgL_arg3768z00_1514 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1509))->
							BgL_exitz00);
						{	/* Ast/check_sharing.scm 204 */
							obj_t BgL_contextz00_2531;

							BgL_contextz00_2531 = (obj_t) (BgL_nodez00_1509);
							{	/* Ast/check_sharing.scm 204 */
								obj_t BgL_method3584z00_2532;

								{	/* Ast/check_sharing.scm 204 */
									BgL_objectz00_bglt BgL_objz00_2533;

									BgL_objz00_2533 = (BgL_objectz00_bglt) (BgL_arg3768z00_1514);
									{	/* Ast/check_sharing.scm 204 */
										long BgL_objzd2classzd2numz00_2534;

										BgL_objzd2classzd2numz00_2534 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2533);
										{	/* Ast/check_sharing.scm 204 */
											obj_t BgL_arg2643z00_2535;

											BgL_arg2643z00_2535 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 204 */
												obj_t BgL_arrayz00_2537;

												int BgL_offsetz00_2538;

												BgL_arrayz00_2537 = BgL_arg2643z00_2535;
												BgL_offsetz00_2538 =
													(int) (BgL_objzd2classzd2numz00_2534);
												{	/* Ast/check_sharing.scm 204 */
													long BgL_offsetz00_2539;

													BgL_offsetz00_2539 =
														((long) (BgL_offsetz00_2538) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 204 */
														long BgL_modz00_2540;

														{	/* Ast/check_sharing.scm 204 */
															int BgL_arg2645z00_2541;

															BgL_arg2645z00_2541 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 204 */
																long BgL_auxz00_3163;

																BgL_auxz00_3163 = (long) (BgL_arg2645z00_2541);
																BgL_modz00_2540 =
																	(BgL_offsetz00_2539 / BgL_auxz00_3163);
														}}
														{	/* Ast/check_sharing.scm 204 */
															long BgL_restz00_2542;

															{	/* Ast/check_sharing.scm 204 */
																int BgL_arg2644z00_2543;

																BgL_arg2644z00_2543 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 204 */
																	long BgL_auxz00_3167;

																	BgL_auxz00_3167 =
																		(long) (BgL_arg2644z00_2543);
																	BgL_restz00_2542 =
																		(BgL_offsetz00_2539 % BgL_auxz00_3167);
															}}
															{	/* Ast/check_sharing.scm 204 */

																BgL_method3584z00_2532 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2537,
																		(int) (BgL_modz00_2540)),
																	(int) (BgL_restz00_2542));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_2532) (BgL_method3584z00_2532,
									(obj_t) (BgL_arg3768z00_1514), BgL_contextz00_2531, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 205 */
						BgL_nodez00_bglt BgL_nodez00_2557;

						obj_t BgL_contextz00_2558;

						BgL_nodez00_2557 = (BgL_nodez00_bglt) (BGl_valuez00zzast_varz00);
						BgL_contextz00_2558 = (obj_t) (BgL_nodez00_1509);
						{	/* Ast/check_sharing.scm 205 */
							obj_t BgL_method3584z00_2559;

							{	/* Ast/check_sharing.scm 205 */
								BgL_objectz00_bglt BgL_objz00_2560;

								BgL_objz00_2560 = (BgL_objectz00_bglt) (BgL_nodez00_2557);
								{	/* Ast/check_sharing.scm 205 */
									long BgL_objzd2classzd2numz00_2561;

									BgL_objzd2classzd2numz00_2561 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2560);
									{	/* Ast/check_sharing.scm 205 */
										obj_t BgL_arg2643z00_2562;

										BgL_arg2643z00_2562 =
											PROCEDURE_REF
											(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
											(int) (((long) 1)));
										{	/* Ast/check_sharing.scm 205 */
											obj_t BgL_arrayz00_2564;

											int BgL_offsetz00_2565;

											BgL_arrayz00_2564 = BgL_arg2643z00_2562;
											BgL_offsetz00_2565 =
												(int) (BgL_objzd2classzd2numz00_2561);
											{	/* Ast/check_sharing.scm 205 */
												long BgL_offsetz00_2566;

												BgL_offsetz00_2566 =
													((long) (BgL_offsetz00_2565) - OBJECT_TYPE);
												{	/* Ast/check_sharing.scm 205 */
													long BgL_modz00_2567;

													{	/* Ast/check_sharing.scm 205 */
														int BgL_arg2645z00_2568;

														BgL_arg2645z00_2568 = (int) (((long) 16));
														{	/* Ast/check_sharing.scm 205 */
															long BgL_auxz00_3187;

															BgL_auxz00_3187 = (long) (BgL_arg2645z00_2568);
															BgL_modz00_2567 =
																(BgL_offsetz00_2566 / BgL_auxz00_3187);
													}}
													{	/* Ast/check_sharing.scm 205 */
														long BgL_restz00_2569;

														{	/* Ast/check_sharing.scm 205 */
															int BgL_arg2644z00_2570;

															BgL_arg2644z00_2570 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 205 */
																long BgL_auxz00_3191;

																BgL_auxz00_3191 = (long) (BgL_arg2644z00_2570);
																BgL_restz00_2569 =
																	(BgL_offsetz00_2566 % BgL_auxz00_3191);
														}}
														{	/* Ast/check_sharing.scm 205 */

															BgL_method3584z00_2559 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2564,
																	(int) (BgL_modz00_2567)),
																(int) (BgL_restz00_2569));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3584z00_2559) (BgL_method3584z00_2559,
								(obj_t) (BgL_nodez00_2557), BgL_contextz00_2558, BEOA);
						}
					}
				}
			}
		}
	}



/* check-node-sharing-s3611 */
	obj_t BGl_checkzd2nodezd2sharingzd2s3611zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2759, obj_t BgL_nodez00_2760, obj_t BgL_contextz00_2761)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 194 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1502;

				obj_t BgL_contextz00_1503;

				BgL_nodez00_1502 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2760);
				BgL_contextz00_1503 = BgL_contextz00_2761;
				{

					{	/* Ast/check_sharing.scm 194 */
						obj_t BgL_nextzd2method3610zd2_1507;

						BgL_nextzd2method3610zd2_1507 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1502),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_setzd2exzd2itz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3610zd2_1507))
							{	/* Ast/check_sharing.scm 194 */
								PROCEDURE_ENTRY(BgL_nextzd2method3610zd2_1507)
									(BgL_nextzd2method3610zd2_1507, (obj_t) (BgL_nodez00_1502),
									BgL_contextz00_1503, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 194 */
								{	/* Ast/check_sharing.scm 194 */
									BgL_nodez00_bglt BgL_nodez00_2502;

									BgL_nodez00_2502 = (BgL_nodez00_bglt) (BgL_nodez00_1502);
									{	/* Ast/check_sharing.scm 194 */
										obj_t BgL_method3584z00_2504;

										{	/* Ast/check_sharing.scm 194 */
											BgL_objectz00_bglt BgL_objz00_2505;

											BgL_objz00_2505 = (BgL_objectz00_bglt) (BgL_nodez00_2502);
											{	/* Ast/check_sharing.scm 194 */
												long BgL_objzd2classzd2numz00_2506;

												BgL_objzd2classzd2numz00_2506 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2505);
												{	/* Ast/check_sharing.scm 194 */
													obj_t BgL_arg2643z00_2507;

													BgL_arg2643z00_2507 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 194 */
														obj_t BgL_arrayz00_2509;

														int BgL_offsetz00_2510;

														BgL_arrayz00_2509 = BgL_arg2643z00_2507;
														BgL_offsetz00_2510 =
															(int) (BgL_objzd2classzd2numz00_2506);
														{	/* Ast/check_sharing.scm 194 */
															long BgL_offsetz00_2511;

															BgL_offsetz00_2511 =
																((long) (BgL_offsetz00_2510) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 194 */
																long BgL_modz00_2512;

																{	/* Ast/check_sharing.scm 194 */
																	int BgL_arg2645z00_2513;

																	BgL_arg2645z00_2513 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 194 */
																		long BgL_auxz00_3218;

																		BgL_auxz00_3218 =
																			(long) (BgL_arg2645z00_2513);
																		BgL_modz00_2512 =
																			(BgL_offsetz00_2511 / BgL_auxz00_3218);
																}}
																{	/* Ast/check_sharing.scm 194 */
																	long BgL_restz00_2514;

																	{	/* Ast/check_sharing.scm 194 */
																		int BgL_arg2644z00_2515;

																		BgL_arg2644z00_2515 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 194 */
																			long BgL_auxz00_3222;

																			BgL_auxz00_3222 =
																				(long) (BgL_arg2644z00_2515);
																			BgL_restz00_2514 =
																				(BgL_offsetz00_2511 % BgL_auxz00_3222);
																	}}
																	{	/* Ast/check_sharing.scm 194 */

																		BgL_method3584z00_2504 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2509,
																				(int) (BgL_modz00_2512)),
																			(int) (BgL_restz00_2514));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2504)
											(BgL_method3584z00_2504, (obj_t) (BgL_nodez00_2502),
											BgL_contextz00_1503, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 196 */
						BgL_nodez00_bglt BgL_arg3766z00_1506;

						BgL_arg3766z00_1506 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1502))->
							BgL_bodyz00);
						{	/* Ast/check_sharing.scm 196 */
							obj_t BgL_contextz00_2475;

							BgL_contextz00_2475 = (obj_t) (BgL_nodez00_1502);
							{	/* Ast/check_sharing.scm 196 */
								obj_t BgL_method3584z00_2476;

								{	/* Ast/check_sharing.scm 196 */
									BgL_objectz00_bglt BgL_objz00_2477;

									BgL_objz00_2477 = (BgL_objectz00_bglt) (BgL_arg3766z00_1506);
									{	/* Ast/check_sharing.scm 196 */
										long BgL_objzd2classzd2numz00_2478;

										BgL_objzd2classzd2numz00_2478 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2477);
										{	/* Ast/check_sharing.scm 196 */
											obj_t BgL_arg2643z00_2479;

											BgL_arg2643z00_2479 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 196 */
												obj_t BgL_arrayz00_2481;

												int BgL_offsetz00_2482;

												BgL_arrayz00_2481 = BgL_arg2643z00_2479;
												BgL_offsetz00_2482 =
													(int) (BgL_objzd2classzd2numz00_2478);
												{	/* Ast/check_sharing.scm 196 */
													long BgL_offsetz00_2483;

													BgL_offsetz00_2483 =
														((long) (BgL_offsetz00_2482) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 196 */
														long BgL_modz00_2484;

														{	/* Ast/check_sharing.scm 196 */
															int BgL_arg2645z00_2485;

															BgL_arg2645z00_2485 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 196 */
																long BgL_auxz00_3242;

																BgL_auxz00_3242 = (long) (BgL_arg2645z00_2485);
																BgL_modz00_2484 =
																	(BgL_offsetz00_2483 / BgL_auxz00_3242);
														}}
														{	/* Ast/check_sharing.scm 196 */
															long BgL_restz00_2486;

															{	/* Ast/check_sharing.scm 196 */
																int BgL_arg2644z00_2487;

																BgL_arg2644z00_2487 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 196 */
																	long BgL_auxz00_3246;

																	BgL_auxz00_3246 =
																		(long) (BgL_arg2644z00_2487);
																	BgL_restz00_2486 =
																		(BgL_offsetz00_2483 % BgL_auxz00_3246);
															}}
															{	/* Ast/check_sharing.scm 196 */

																BgL_method3584z00_2476 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2481,
																		(int) (BgL_modz00_2484)),
																	(int) (BgL_restz00_2486));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2476)
									(BgL_method3584z00_2476, (obj_t) (BgL_arg3766z00_1506),
									BgL_contextz00_2475, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-l3608 */
	obj_t BGl_checkzd2nodezd2sharingzd2l3608zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2762, obj_t BgL_nodez00_2763, obj_t BgL_contextz00_2764)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 183 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1485;

				obj_t BgL_contextz00_1486;

				{	/* Ast/check_sharing.scm 183 */
					bool_t BgL_auxz00_3257;

					BgL_nodez00_1485 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2763);
					BgL_contextz00_1486 = BgL_contextz00_2764;
					{

						{	/* Ast/check_sharing.scm 183 */
							obj_t BgL_nextzd2method3607zd2_1500;

							BgL_nextzd2method3607zd2_1500 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1485),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_letzd2varzd2zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3607zd2_1500))
								{	/* Ast/check_sharing.scm 183 */
									PROCEDURE_ENTRY(BgL_nextzd2method3607zd2_1500)
										(BgL_nextzd2method3607zd2_1500, (obj_t) (BgL_nodez00_1485),
										BgL_contextz00_1486, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 183 */
									{	/* Ast/check_sharing.scm 183 */
										BgL_nodez00_bglt BgL_nodez00_2446;

										BgL_nodez00_2446 = (BgL_nodez00_bglt) (BgL_nodez00_1485);
										{	/* Ast/check_sharing.scm 183 */
											obj_t BgL_method3584z00_2448;

											{	/* Ast/check_sharing.scm 183 */
												BgL_objectz00_bglt BgL_objz00_2449;

												BgL_objz00_2449 =
													(BgL_objectz00_bglt) (BgL_nodez00_2446);
												{	/* Ast/check_sharing.scm 183 */
													long BgL_objzd2classzd2numz00_2450;

													BgL_objzd2classzd2numz00_2450 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2449);
													{	/* Ast/check_sharing.scm 183 */
														obj_t BgL_arg2643z00_2451;

														BgL_arg2643z00_2451 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 183 */
															obj_t BgL_arrayz00_2453;

															int BgL_offsetz00_2454;

															BgL_arrayz00_2453 = BgL_arg2643z00_2451;
															BgL_offsetz00_2454 =
																(int) (BgL_objzd2classzd2numz00_2450);
															{	/* Ast/check_sharing.scm 183 */
																long BgL_offsetz00_2455;

																BgL_offsetz00_2455 =
																	((long) (BgL_offsetz00_2454) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 183 */
																	long BgL_modz00_2456;

																	{	/* Ast/check_sharing.scm 183 */
																		int BgL_arg2645z00_2457;

																		BgL_arg2645z00_2457 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 183 */
																			long BgL_auxz00_3274;

																			BgL_auxz00_3274 =
																				(long) (BgL_arg2645z00_2457);
																			BgL_modz00_2456 =
																				(BgL_offsetz00_2455 / BgL_auxz00_3274);
																	}}
																	{	/* Ast/check_sharing.scm 183 */
																		long BgL_restz00_2458;

																		{	/* Ast/check_sharing.scm 183 */
																			int BgL_arg2644z00_2459;

																			BgL_arg2644z00_2459 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 183 */
																				long BgL_auxz00_3278;

																				BgL_auxz00_3278 =
																					(long) (BgL_arg2644z00_2459);
																				BgL_restz00_2458 =
																					(BgL_offsetz00_2455 %
																					BgL_auxz00_3278);
																		}}
																		{	/* Ast/check_sharing.scm 183 */

																			BgL_method3584z00_2448 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2453,
																					(int) (BgL_modz00_2456)),
																				(int) (BgL_restz00_2458));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_2448)
												(BgL_method3584z00_2448, (obj_t) (BgL_nodez00_2446),
												BgL_contextz00_1486, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 186 */
							BgL_nodez00_bglt BgL_arg3760z00_1490;

							BgL_arg3760z00_1490 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1485))->BgL_bodyz00);
							{	/* Ast/check_sharing.scm 186 */
								obj_t BgL_contextz00_2387;

								BgL_contextz00_2387 = (obj_t) (BgL_nodez00_1485);
								{	/* Ast/check_sharing.scm 186 */
									obj_t BgL_method3584z00_2388;

									{	/* Ast/check_sharing.scm 186 */
										BgL_objectz00_bglt BgL_objz00_2389;

										BgL_objz00_2389 =
											(BgL_objectz00_bglt) (BgL_arg3760z00_1490);
										{	/* Ast/check_sharing.scm 186 */
											long BgL_objzd2classzd2numz00_2390;

											BgL_objzd2classzd2numz00_2390 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2389);
											{	/* Ast/check_sharing.scm 186 */
												obj_t BgL_arg2643z00_2391;

												BgL_arg2643z00_2391 =
													PROCEDURE_REF
													(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
													(int) (((long) 1)));
												{	/* Ast/check_sharing.scm 186 */
													obj_t BgL_arrayz00_2393;

													int BgL_offsetz00_2394;

													BgL_arrayz00_2393 = BgL_arg2643z00_2391;
													BgL_offsetz00_2394 =
														(int) (BgL_objzd2classzd2numz00_2390);
													{	/* Ast/check_sharing.scm 186 */
														long BgL_offsetz00_2395;

														BgL_offsetz00_2395 =
															((long) (BgL_offsetz00_2394) - OBJECT_TYPE);
														{	/* Ast/check_sharing.scm 186 */
															long BgL_modz00_2396;

															{	/* Ast/check_sharing.scm 186 */
																int BgL_arg2645z00_2397;

																BgL_arg2645z00_2397 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 186 */
																	long BgL_auxz00_3298;

																	BgL_auxz00_3298 =
																		(long) (BgL_arg2645z00_2397);
																	BgL_modz00_2396 =
																		(BgL_offsetz00_2395 / BgL_auxz00_3298);
															}}
															{	/* Ast/check_sharing.scm 186 */
																long BgL_restz00_2398;

																{	/* Ast/check_sharing.scm 186 */
																	int BgL_arg2644z00_2399;

																	BgL_arg2644z00_2399 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 186 */
																		long BgL_auxz00_3302;

																		BgL_auxz00_3302 =
																			(long) (BgL_arg2644z00_2399);
																		BgL_restz00_2398 =
																			(BgL_offsetz00_2395 % BgL_auxz00_3302);
																}}
																{	/* Ast/check_sharing.scm 186 */

																	BgL_method3584z00_2388 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2393,
																			(int) (BgL_modz00_2396)),
																		(int) (BgL_restz00_2398));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3584z00_2388)
										(BgL_method3584z00_2388, (obj_t) (BgL_arg3760z00_1490),
										BgL_contextz00_2387, BEOA);
						}}}
						{	/* Ast/check_sharing.scm 187 */
							obj_t BgL_g3580z00_1491;

							BgL_g3580z00_1491 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1485))->
								BgL_bindingsz00);
							{
								obj_t BgL_l3578z00_1493;

								BgL_l3578z00_1493 = BgL_g3580z00_1491;
							BgL_zc3anonymousza33761ze3z83_1494:
								if (PAIRP(BgL_l3578z00_1493))
									{	/* Ast/check_sharing.scm 187 */
										{	/* Ast/check_sharing.scm 188 */
											obj_t BgL_bindingz00_1496;

											BgL_bindingz00_1496 = CAR(BgL_l3578z00_1493);
											{	/* Ast/check_sharing.scm 188 */
												obj_t BgL_arg3763z00_1497;

												BgL_arg3763z00_1497 = CDR(BgL_bindingz00_1496);
												{	/* Ast/check_sharing.scm 188 */
													BgL_nodez00_bglt BgL_nodez00_2417;

													obj_t BgL_contextz00_2418;

													BgL_nodez00_2417 =
														(BgL_nodez00_bglt) (BgL_arg3763z00_1497);
													BgL_contextz00_2418 = (obj_t) (BgL_nodez00_1485);
													{	/* Ast/check_sharing.scm 188 */
														obj_t BgL_method3584z00_2419;

														{	/* Ast/check_sharing.scm 188 */
															BgL_objectz00_bglt BgL_objz00_2420;

															BgL_objz00_2420 =
																(BgL_objectz00_bglt) (BgL_nodez00_2417);
															{	/* Ast/check_sharing.scm 188 */
																long BgL_objzd2classzd2numz00_2421;

																BgL_objzd2classzd2numz00_2421 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2420);
																{	/* Ast/check_sharing.scm 188 */
																	obj_t BgL_arg2643z00_2422;

																	BgL_arg2643z00_2422 =
																		PROCEDURE_REF
																		(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
																		(int) (((long) 1)));
																	{	/* Ast/check_sharing.scm 188 */
																		obj_t BgL_arrayz00_2424;

																		int BgL_offsetz00_2425;

																		BgL_arrayz00_2424 = BgL_arg2643z00_2422;
																		BgL_offsetz00_2425 =
																			(int) (BgL_objzd2classzd2numz00_2421);
																		{	/* Ast/check_sharing.scm 188 */
																			long BgL_offsetz00_2426;

																			BgL_offsetz00_2426 =
																				(
																				(long) (BgL_offsetz00_2425) -
																				OBJECT_TYPE);
																			{	/* Ast/check_sharing.scm 188 */
																				long BgL_modz00_2427;

																				{	/* Ast/check_sharing.scm 188 */
																					int BgL_arg2645z00_2428;

																					BgL_arg2645z00_2428 =
																						(int) (((long) 16));
																					{	/* Ast/check_sharing.scm 188 */
																						long BgL_auxz00_3327;

																						BgL_auxz00_3327 =
																							(long) (BgL_arg2645z00_2428);
																						BgL_modz00_2427 =
																							(BgL_offsetz00_2426 /
																							BgL_auxz00_3327);
																				}}
																				{	/* Ast/check_sharing.scm 188 */
																					long BgL_restz00_2429;

																					{	/* Ast/check_sharing.scm 188 */
																						int BgL_arg2644z00_2430;

																						BgL_arg2644z00_2430 =
																							(int) (((long) 16));
																						{	/* Ast/check_sharing.scm 188 */
																							long BgL_auxz00_3331;

																							BgL_auxz00_3331 =
																								(long) (BgL_arg2644z00_2430);
																							BgL_restz00_2429 =
																								(BgL_offsetz00_2426 %
																								BgL_auxz00_3331);
																					}}
																					{	/* Ast/check_sharing.scm 188 */

																						BgL_method3584z00_2419 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2424,
																								(int) (BgL_modz00_2427)),
																							(int) (BgL_restz00_2429));
														}}}}}}}}
														PROCEDURE_ENTRY(BgL_method3584z00_2419)
															(BgL_method3584z00_2419,
															(obj_t) (BgL_nodez00_2417), BgL_contextz00_2418,
															BEOA);
										}}}}
										{
											obj_t BgL_l3578z00_3341;

											BgL_l3578z00_3341 = CDR(BgL_l3578z00_1493);
											BgL_l3578z00_1493 = BgL_l3578z00_3341;
											goto BgL_zc3anonymousza33761ze3z83_1494;
										}
									}
								else
									{	/* Ast/check_sharing.scm 187 */
										BgL_auxz00_3257 = ((bool_t) 1);
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_3257);
				}
			}
		}
	}



/* check-node-sharing-l3606 */
	obj_t BGl_checkzd2nodezd2sharingzd2l3606zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2765, obj_t BgL_nodez00_2766, obj_t BgL_contextz00_2767)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 174 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1469;

				obj_t BgL_contextz00_1470;

				BgL_nodez00_1469 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2766);
				BgL_contextz00_1470 = BgL_contextz00_2767;
				{

					{	/* Ast/check_sharing.scm 174 */
						obj_t BgL_nextzd2method3605zd2_1483;

						BgL_nextzd2method3605zd2_1483 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1469),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_letzd2funzd2zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3605zd2_1483))
							{	/* Ast/check_sharing.scm 174 */
								PROCEDURE_ENTRY(BgL_nextzd2method3605zd2_1483)
									(BgL_nextzd2method3605zd2_1483, (obj_t) (BgL_nodez00_1469),
									BgL_contextz00_1470, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 174 */
								{	/* Ast/check_sharing.scm 174 */
									BgL_nodez00_bglt BgL_nodez00_2358;

									BgL_nodez00_2358 = (BgL_nodez00_bglt) (BgL_nodez00_1469);
									{	/* Ast/check_sharing.scm 174 */
										obj_t BgL_method3584z00_2360;

										{	/* Ast/check_sharing.scm 174 */
											BgL_objectz00_bglt BgL_objz00_2361;

											BgL_objz00_2361 = (BgL_objectz00_bglt) (BgL_nodez00_2358);
											{	/* Ast/check_sharing.scm 174 */
												long BgL_objzd2classzd2numz00_2362;

												BgL_objzd2classzd2numz00_2362 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2361);
												{	/* Ast/check_sharing.scm 174 */
													obj_t BgL_arg2643z00_2363;

													BgL_arg2643z00_2363 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 174 */
														obj_t BgL_arrayz00_2365;

														int BgL_offsetz00_2366;

														BgL_arrayz00_2365 = BgL_arg2643z00_2363;
														BgL_offsetz00_2366 =
															(int) (BgL_objzd2classzd2numz00_2362);
														{	/* Ast/check_sharing.scm 174 */
															long BgL_offsetz00_2367;

															BgL_offsetz00_2367 =
																((long) (BgL_offsetz00_2366) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 174 */
																long BgL_modz00_2368;

																{	/* Ast/check_sharing.scm 174 */
																	int BgL_arg2645z00_2369;

																	BgL_arg2645z00_2369 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 174 */
																		long BgL_auxz00_3361;

																		BgL_auxz00_3361 =
																			(long) (BgL_arg2645z00_2369);
																		BgL_modz00_2368 =
																			(BgL_offsetz00_2367 / BgL_auxz00_3361);
																}}
																{	/* Ast/check_sharing.scm 174 */
																	long BgL_restz00_2370;

																	{	/* Ast/check_sharing.scm 174 */
																		int BgL_arg2644z00_2371;

																		BgL_arg2644z00_2371 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 174 */
																			long BgL_auxz00_3365;

																			BgL_auxz00_3365 =
																				(long) (BgL_arg2644z00_2371);
																			BgL_restz00_2370 =
																				(BgL_offsetz00_2367 % BgL_auxz00_3365);
																	}}
																	{	/* Ast/check_sharing.scm 174 */

																		BgL_method3584z00_2360 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2365,
																				(int) (BgL_modz00_2368)),
																			(int) (BgL_restz00_2370));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2360)
											(BgL_method3584z00_2360, (obj_t) (BgL_nodez00_2358),
											BgL_contextz00_1470, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 177 */
						obj_t BgL_g3577z00_1474;

						BgL_g3577z00_1474 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1469))->BgL_localsz00);
						{
							obj_t BgL_l3575z00_1476;

							BgL_l3575z00_1476 = BgL_g3577z00_1474;
						BgL_zc3anonymousza33755ze3z83_1477:
							if (PAIRP(BgL_l3575z00_1476))
								{	/* Ast/check_sharing.scm 177 */
									{	/* Ast/check_sharing.scm 177 */
										obj_t BgL_fz00_1479;

										BgL_fz00_1479 = CAR(BgL_l3575z00_1476);
										{	/* Ast/check_sharing.scm 177 */
											BgL_valuez00_bglt BgL_funz00_2324;

											{
												BgL_variablez00_bglt BgL_auxz00_3379;

												BgL_auxz00_3379 =
													(BgL_variablez00_bglt) (BgL_fz00_1479);
												BgL_funz00_2324 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3379))->
													BgL_valuez00);
											}
											{	/* Ast/check_sharing.scm 177 */
												obj_t BgL_bodyz00_2325;

												{
													BgL_sfunz00_bglt BgL_auxz00_3382;

													BgL_auxz00_3382 =
														(BgL_sfunz00_bglt) (BgL_funz00_2324);
													BgL_bodyz00_2325 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3382))->
														BgL_bodyz00);
												}
												{	/* Ast/check_sharing.scm 177 */

													BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
														(BgL_nodez00_bglt) (BgL_bodyz00_2325),
														(obj_t) (BgL_nodez00_1469));
												}
											}
										}
									}
									{
										obj_t BgL_l3575z00_3388;

										BgL_l3575z00_3388 = CDR(BgL_l3575z00_1476);
										BgL_l3575z00_1476 = BgL_l3575z00_3388;
										goto BgL_zc3anonymousza33755ze3z83_1477;
									}
								}
							else
								{	/* Ast/check_sharing.scm 177 */
									((bool_t) 1);
								}
						}
					}
					{	/* Ast/check_sharing.scm 178 */
						BgL_nodez00_bglt BgL_arg3758z00_1482;

						BgL_arg3758z00_1482 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1469))->BgL_bodyz00);
						{	/* Ast/check_sharing.scm 178 */
							obj_t BgL_contextz00_2331;

							BgL_contextz00_2331 = (obj_t) (BgL_nodez00_1469);
							{	/* Ast/check_sharing.scm 178 */
								obj_t BgL_method3584z00_2332;

								{	/* Ast/check_sharing.scm 178 */
									BgL_objectz00_bglt BgL_objz00_2333;

									BgL_objz00_2333 = (BgL_objectz00_bglt) (BgL_arg3758z00_1482);
									{	/* Ast/check_sharing.scm 178 */
										long BgL_objzd2classzd2numz00_2334;

										BgL_objzd2classzd2numz00_2334 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2333);
										{	/* Ast/check_sharing.scm 178 */
											obj_t BgL_arg2643z00_2335;

											BgL_arg2643z00_2335 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 178 */
												obj_t BgL_arrayz00_2337;

												int BgL_offsetz00_2338;

												BgL_arrayz00_2337 = BgL_arg2643z00_2335;
												BgL_offsetz00_2338 =
													(int) (BgL_objzd2classzd2numz00_2334);
												{	/* Ast/check_sharing.scm 178 */
													long BgL_offsetz00_2339;

													BgL_offsetz00_2339 =
														((long) (BgL_offsetz00_2338) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 178 */
														long BgL_modz00_2340;

														{	/* Ast/check_sharing.scm 178 */
															int BgL_arg2645z00_2341;

															BgL_arg2645z00_2341 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 178 */
																long BgL_auxz00_3400;

																BgL_auxz00_3400 = (long) (BgL_arg2645z00_2341);
																BgL_modz00_2340 =
																	(BgL_offsetz00_2339 / BgL_auxz00_3400);
														}}
														{	/* Ast/check_sharing.scm 178 */
															long BgL_restz00_2342;

															{	/* Ast/check_sharing.scm 178 */
																int BgL_arg2644z00_2343;

																BgL_arg2644z00_2343 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 178 */
																	long BgL_auxz00_3404;

																	BgL_auxz00_3404 =
																		(long) (BgL_arg2644z00_2343);
																	BgL_restz00_2342 =
																		(BgL_offsetz00_2339 % BgL_auxz00_3404);
															}}
															{	/* Ast/check_sharing.scm 178 */

																BgL_method3584z00_2332 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2337,
																		(int) (BgL_modz00_2340)),
																	(int) (BgL_restz00_2342));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2332)
									(BgL_method3584z00_2332, (obj_t) (BgL_arg3758z00_1482),
									BgL_contextz00_2331, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-s3604 */
	obj_t BGl_checkzd2nodezd2sharingzd2s3604zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2768, obj_t BgL_nodez00_2769, obj_t BgL_contextz00_2770)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 160 */
			{
				BgL_selectz00_bglt BgL_nodez00_1452;

				obj_t BgL_contextz00_1453;

				{	/* Ast/check_sharing.scm 160 */
					bool_t BgL_auxz00_3415;

					BgL_nodez00_1452 = (BgL_selectz00_bglt) (BgL_nodez00_2769);
					BgL_contextz00_1453 = BgL_contextz00_2770;
					{

						{	/* Ast/check_sharing.scm 160 */
							obj_t BgL_nextzd2method3603zd2_1467;

							BgL_nextzd2method3603zd2_1467 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1452),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_selectz00zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3603zd2_1467))
								{	/* Ast/check_sharing.scm 160 */
									PROCEDURE_ENTRY(BgL_nextzd2method3603zd2_1467)
										(BgL_nextzd2method3603zd2_1467, (obj_t) (BgL_nodez00_1452),
										BgL_contextz00_1453, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 160 */
									{	/* Ast/check_sharing.scm 160 */
										BgL_nodez00_bglt BgL_nodez00_2292;

										BgL_nodez00_2292 = (BgL_nodez00_bglt) (BgL_nodez00_1452);
										{	/* Ast/check_sharing.scm 160 */
											obj_t BgL_method3584z00_2294;

											{	/* Ast/check_sharing.scm 160 */
												BgL_objectz00_bglt BgL_objz00_2295;

												BgL_objz00_2295 =
													(BgL_objectz00_bglt) (BgL_nodez00_2292);
												{	/* Ast/check_sharing.scm 160 */
													long BgL_objzd2classzd2numz00_2296;

													BgL_objzd2classzd2numz00_2296 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2295);
													{	/* Ast/check_sharing.scm 160 */
														obj_t BgL_arg2643z00_2297;

														BgL_arg2643z00_2297 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 160 */
															obj_t BgL_arrayz00_2299;

															int BgL_offsetz00_2300;

															BgL_arrayz00_2299 = BgL_arg2643z00_2297;
															BgL_offsetz00_2300 =
																(int) (BgL_objzd2classzd2numz00_2296);
															{	/* Ast/check_sharing.scm 160 */
																long BgL_offsetz00_2301;

																BgL_offsetz00_2301 =
																	((long) (BgL_offsetz00_2300) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 160 */
																	long BgL_modz00_2302;

																	{	/* Ast/check_sharing.scm 160 */
																		int BgL_arg2645z00_2303;

																		BgL_arg2645z00_2303 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 160 */
																			long BgL_auxz00_3432;

																			BgL_auxz00_3432 =
																				(long) (BgL_arg2645z00_2303);
																			BgL_modz00_2302 =
																				(BgL_offsetz00_2301 / BgL_auxz00_3432);
																	}}
																	{	/* Ast/check_sharing.scm 160 */
																		long BgL_restz00_2304;

																		{	/* Ast/check_sharing.scm 160 */
																			int BgL_arg2644z00_2305;

																			BgL_arg2644z00_2305 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 160 */
																				long BgL_auxz00_3436;

																				BgL_auxz00_3436 =
																					(long) (BgL_arg2644z00_2305);
																				BgL_restz00_2304 =
																					(BgL_offsetz00_2301 %
																					BgL_auxz00_3436);
																		}}
																		{	/* Ast/check_sharing.scm 160 */

																			BgL_method3584z00_2294 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2299,
																					(int) (BgL_modz00_2302)),
																				(int) (BgL_restz00_2304));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_2294)
												(BgL_method3584z00_2294, (obj_t) (BgL_nodez00_2292),
												BgL_contextz00_1453, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 163 */
							BgL_nodez00_bglt BgL_arg3749z00_1457;

							BgL_arg3749z00_1457 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1452))->BgL_testz00);
							{	/* Ast/check_sharing.scm 163 */
								obj_t BgL_contextz00_2233;

								BgL_contextz00_2233 = (obj_t) (BgL_nodez00_1452);
								{	/* Ast/check_sharing.scm 163 */
									obj_t BgL_method3584z00_2234;

									{	/* Ast/check_sharing.scm 163 */
										BgL_objectz00_bglt BgL_objz00_2235;

										BgL_objz00_2235 =
											(BgL_objectz00_bglt) (BgL_arg3749z00_1457);
										{	/* Ast/check_sharing.scm 163 */
											long BgL_objzd2classzd2numz00_2236;

											BgL_objzd2classzd2numz00_2236 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2235);
											{	/* Ast/check_sharing.scm 163 */
												obj_t BgL_arg2643z00_2237;

												BgL_arg2643z00_2237 =
													PROCEDURE_REF
													(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
													(int) (((long) 1)));
												{	/* Ast/check_sharing.scm 163 */
													obj_t BgL_arrayz00_2239;

													int BgL_offsetz00_2240;

													BgL_arrayz00_2239 = BgL_arg2643z00_2237;
													BgL_offsetz00_2240 =
														(int) (BgL_objzd2classzd2numz00_2236);
													{	/* Ast/check_sharing.scm 163 */
														long BgL_offsetz00_2241;

														BgL_offsetz00_2241 =
															((long) (BgL_offsetz00_2240) - OBJECT_TYPE);
														{	/* Ast/check_sharing.scm 163 */
															long BgL_modz00_2242;

															{	/* Ast/check_sharing.scm 163 */
																int BgL_arg2645z00_2243;

																BgL_arg2645z00_2243 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 163 */
																	long BgL_auxz00_3456;

																	BgL_auxz00_3456 =
																		(long) (BgL_arg2645z00_2243);
																	BgL_modz00_2242 =
																		(BgL_offsetz00_2241 / BgL_auxz00_3456);
															}}
															{	/* Ast/check_sharing.scm 163 */
																long BgL_restz00_2244;

																{	/* Ast/check_sharing.scm 163 */
																	int BgL_arg2644z00_2245;

																	BgL_arg2644z00_2245 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 163 */
																		long BgL_auxz00_3460;

																		BgL_auxz00_3460 =
																			(long) (BgL_arg2644z00_2245);
																		BgL_restz00_2244 =
																			(BgL_offsetz00_2241 % BgL_auxz00_3460);
																}}
																{	/* Ast/check_sharing.scm 163 */

																	BgL_method3584z00_2234 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2239,
																			(int) (BgL_modz00_2242)),
																		(int) (BgL_restz00_2244));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3584z00_2234)
										(BgL_method3584z00_2234, (obj_t) (BgL_arg3749z00_1457),
										BgL_contextz00_2233, BEOA);
						}}}
						{	/* Ast/check_sharing.scm 164 */
							obj_t BgL_g3574z00_1458;

							BgL_g3574z00_1458 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1452))->BgL_clausesz00);
							{
								obj_t BgL_l3572z00_1460;

								BgL_l3572z00_1460 = BgL_g3574z00_1458;
							BgL_zc3anonymousza33750ze3z83_1461:
								if (PAIRP(BgL_l3572z00_1460))
									{	/* Ast/check_sharing.scm 164 */
										{	/* Ast/check_sharing.scm 165 */
											obj_t BgL_clausez00_1463;

											BgL_clausez00_1463 = CAR(BgL_l3572z00_1460);
											{	/* Ast/check_sharing.scm 165 */
												obj_t BgL_arg3752z00_1464;

												BgL_arg3752z00_1464 = CDR(BgL_clausez00_1463);
												{	/* Ast/check_sharing.scm 165 */
													BgL_nodez00_bglt BgL_nodez00_2263;

													obj_t BgL_contextz00_2264;

													BgL_nodez00_2263 =
														(BgL_nodez00_bglt) (BgL_arg3752z00_1464);
													BgL_contextz00_2264 = (obj_t) (BgL_nodez00_1452);
													{	/* Ast/check_sharing.scm 165 */
														obj_t BgL_method3584z00_2265;

														{	/* Ast/check_sharing.scm 165 */
															BgL_objectz00_bglt BgL_objz00_2266;

															BgL_objz00_2266 =
																(BgL_objectz00_bglt) (BgL_nodez00_2263);
															{	/* Ast/check_sharing.scm 165 */
																long BgL_objzd2classzd2numz00_2267;

																BgL_objzd2classzd2numz00_2267 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2266);
																{	/* Ast/check_sharing.scm 165 */
																	obj_t BgL_arg2643z00_2268;

																	BgL_arg2643z00_2268 =
																		PROCEDURE_REF
																		(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
																		(int) (((long) 1)));
																	{	/* Ast/check_sharing.scm 165 */
																		obj_t BgL_arrayz00_2270;

																		int BgL_offsetz00_2271;

																		BgL_arrayz00_2270 = BgL_arg2643z00_2268;
																		BgL_offsetz00_2271 =
																			(int) (BgL_objzd2classzd2numz00_2267);
																		{	/* Ast/check_sharing.scm 165 */
																			long BgL_offsetz00_2272;

																			BgL_offsetz00_2272 =
																				(
																				(long) (BgL_offsetz00_2271) -
																				OBJECT_TYPE);
																			{	/* Ast/check_sharing.scm 165 */
																				long BgL_modz00_2273;

																				{	/* Ast/check_sharing.scm 165 */
																					int BgL_arg2645z00_2274;

																					BgL_arg2645z00_2274 =
																						(int) (((long) 16));
																					{	/* Ast/check_sharing.scm 165 */
																						long BgL_auxz00_3485;

																						BgL_auxz00_3485 =
																							(long) (BgL_arg2645z00_2274);
																						BgL_modz00_2273 =
																							(BgL_offsetz00_2272 /
																							BgL_auxz00_3485);
																				}}
																				{	/* Ast/check_sharing.scm 165 */
																					long BgL_restz00_2275;

																					{	/* Ast/check_sharing.scm 165 */
																						int BgL_arg2644z00_2276;

																						BgL_arg2644z00_2276 =
																							(int) (((long) 16));
																						{	/* Ast/check_sharing.scm 165 */
																							long BgL_auxz00_3489;

																							BgL_auxz00_3489 =
																								(long) (BgL_arg2644z00_2276);
																							BgL_restz00_2275 =
																								(BgL_offsetz00_2272 %
																								BgL_auxz00_3489);
																					}}
																					{	/* Ast/check_sharing.scm 165 */

																						BgL_method3584z00_2265 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2270,
																								(int) (BgL_modz00_2273)),
																							(int) (BgL_restz00_2275));
														}}}}}}}}
														PROCEDURE_ENTRY(BgL_method3584z00_2265)
															(BgL_method3584z00_2265,
															(obj_t) (BgL_nodez00_2263), BgL_contextz00_2264,
															BEOA);
										}}}}
										{
											obj_t BgL_l3572z00_3499;

											BgL_l3572z00_3499 = CDR(BgL_l3572z00_1460);
											BgL_l3572z00_1460 = BgL_l3572z00_3499;
											goto BgL_zc3anonymousza33750ze3z83_1461;
										}
									}
								else
									{	/* Ast/check_sharing.scm 164 */
										BgL_auxz00_3415 = ((bool_t) 1);
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_3415);
				}
			}
		}
	}



/* check-node-sharing-f3602 */
	obj_t BGl_checkzd2nodezd2sharingzd2f3602zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2771, obj_t BgL_nodez00_2772, obj_t BgL_contextz00_2773)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 150 */
			{
				BgL_failz00_bglt BgL_nodez00_1442;

				obj_t BgL_contextz00_1443;

				BgL_nodez00_1442 = (BgL_failz00_bglt) (BgL_nodez00_2772);
				BgL_contextz00_1443 = BgL_contextz00_2773;
				{

					{	/* Ast/check_sharing.scm 150 */
						obj_t BgL_nextzd2method3601zd2_1450;

						BgL_nextzd2method3601zd2_1450 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1442),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_failz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3601zd2_1450))
							{	/* Ast/check_sharing.scm 150 */
								PROCEDURE_ENTRY(BgL_nextzd2method3601zd2_1450)
									(BgL_nextzd2method3601zd2_1450, (obj_t) (BgL_nodez00_1442),
									BgL_contextz00_1443, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 150 */
								{	/* Ast/check_sharing.scm 150 */
									BgL_nodez00_bglt BgL_nodez00_2204;

									BgL_nodez00_2204 = (BgL_nodez00_bglt) (BgL_nodez00_1442);
									{	/* Ast/check_sharing.scm 150 */
										obj_t BgL_method3584z00_2206;

										{	/* Ast/check_sharing.scm 150 */
											BgL_objectz00_bglt BgL_objz00_2207;

											BgL_objz00_2207 = (BgL_objectz00_bglt) (BgL_nodez00_2204);
											{	/* Ast/check_sharing.scm 150 */
												long BgL_objzd2classzd2numz00_2208;

												BgL_objzd2classzd2numz00_2208 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2207);
												{	/* Ast/check_sharing.scm 150 */
													obj_t BgL_arg2643z00_2209;

													BgL_arg2643z00_2209 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 150 */
														obj_t BgL_arrayz00_2211;

														int BgL_offsetz00_2212;

														BgL_arrayz00_2211 = BgL_arg2643z00_2209;
														BgL_offsetz00_2212 =
															(int) (BgL_objzd2classzd2numz00_2208);
														{	/* Ast/check_sharing.scm 150 */
															long BgL_offsetz00_2213;

															BgL_offsetz00_2213 =
																((long) (BgL_offsetz00_2212) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 150 */
																long BgL_modz00_2214;

																{	/* Ast/check_sharing.scm 150 */
																	int BgL_arg2645z00_2215;

																	BgL_arg2645z00_2215 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 150 */
																		long BgL_auxz00_3519;

																		BgL_auxz00_3519 =
																			(long) (BgL_arg2645z00_2215);
																		BgL_modz00_2214 =
																			(BgL_offsetz00_2213 / BgL_auxz00_3519);
																}}
																{	/* Ast/check_sharing.scm 150 */
																	long BgL_restz00_2216;

																	{	/* Ast/check_sharing.scm 150 */
																		int BgL_arg2644z00_2217;

																		BgL_arg2644z00_2217 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 150 */
																			long BgL_auxz00_3523;

																			BgL_auxz00_3523 =
																				(long) (BgL_arg2644z00_2217);
																			BgL_restz00_2216 =
																				(BgL_offsetz00_2213 % BgL_auxz00_3523);
																	}}
																	{	/* Ast/check_sharing.scm 150 */

																		BgL_method3584z00_2206 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2211,
																				(int) (BgL_modz00_2214)),
																			(int) (BgL_restz00_2216));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2206)
											(BgL_method3584z00_2206, (obj_t) (BgL_nodez00_2204),
											BgL_contextz00_1443, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 153 */
						BgL_nodez00_bglt BgL_arg3745z00_1447;

						BgL_arg3745z00_1447 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_procz00);
						{	/* Ast/check_sharing.scm 153 */
							obj_t BgL_contextz00_2121;

							BgL_contextz00_2121 = (obj_t) (BgL_nodez00_1442);
							{	/* Ast/check_sharing.scm 153 */
								obj_t BgL_method3584z00_2122;

								{	/* Ast/check_sharing.scm 153 */
									BgL_objectz00_bglt BgL_objz00_2123;

									BgL_objz00_2123 = (BgL_objectz00_bglt) (BgL_arg3745z00_1447);
									{	/* Ast/check_sharing.scm 153 */
										long BgL_objzd2classzd2numz00_2124;

										BgL_objzd2classzd2numz00_2124 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2123);
										{	/* Ast/check_sharing.scm 153 */
											obj_t BgL_arg2643z00_2125;

											BgL_arg2643z00_2125 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 153 */
												obj_t BgL_arrayz00_2127;

												int BgL_offsetz00_2128;

												BgL_arrayz00_2127 = BgL_arg2643z00_2125;
												BgL_offsetz00_2128 =
													(int) (BgL_objzd2classzd2numz00_2124);
												{	/* Ast/check_sharing.scm 153 */
													long BgL_offsetz00_2129;

													BgL_offsetz00_2129 =
														((long) (BgL_offsetz00_2128) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 153 */
														long BgL_modz00_2130;

														{	/* Ast/check_sharing.scm 153 */
															int BgL_arg2645z00_2131;

															BgL_arg2645z00_2131 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 153 */
																long BgL_auxz00_3543;

																BgL_auxz00_3543 = (long) (BgL_arg2645z00_2131);
																BgL_modz00_2130 =
																	(BgL_offsetz00_2129 / BgL_auxz00_3543);
														}}
														{	/* Ast/check_sharing.scm 153 */
															long BgL_restz00_2132;

															{	/* Ast/check_sharing.scm 153 */
																int BgL_arg2644z00_2133;

																BgL_arg2644z00_2133 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 153 */
																	long BgL_auxz00_3547;

																	BgL_auxz00_3547 =
																		(long) (BgL_arg2644z00_2133);
																	BgL_restz00_2132 =
																		(BgL_offsetz00_2129 % BgL_auxz00_3547);
															}}
															{	/* Ast/check_sharing.scm 153 */

																BgL_method3584z00_2122 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2127,
																		(int) (BgL_modz00_2130)),
																	(int) (BgL_restz00_2132));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_2122) (BgL_method3584z00_2122,
									(obj_t) (BgL_arg3745z00_1447), BgL_contextz00_2121, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 154 */
						BgL_nodez00_bglt BgL_arg3746z00_1448;

						BgL_arg3746z00_1448 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_msgz00);
						{	/* Ast/check_sharing.scm 154 */
							obj_t BgL_contextz00_2149;

							BgL_contextz00_2149 = (obj_t) (BgL_nodez00_1442);
							{	/* Ast/check_sharing.scm 154 */
								obj_t BgL_method3584z00_2150;

								{	/* Ast/check_sharing.scm 154 */
									BgL_objectz00_bglt BgL_objz00_2151;

									BgL_objz00_2151 = (BgL_objectz00_bglt) (BgL_arg3746z00_1448);
									{	/* Ast/check_sharing.scm 154 */
										long BgL_objzd2classzd2numz00_2152;

										BgL_objzd2classzd2numz00_2152 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2151);
										{	/* Ast/check_sharing.scm 154 */
											obj_t BgL_arg2643z00_2153;

											BgL_arg2643z00_2153 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 154 */
												obj_t BgL_arrayz00_2155;

												int BgL_offsetz00_2156;

												BgL_arrayz00_2155 = BgL_arg2643z00_2153;
												BgL_offsetz00_2156 =
													(int) (BgL_objzd2classzd2numz00_2152);
												{	/* Ast/check_sharing.scm 154 */
													long BgL_offsetz00_2157;

													BgL_offsetz00_2157 =
														((long) (BgL_offsetz00_2156) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 154 */
														long BgL_modz00_2158;

														{	/* Ast/check_sharing.scm 154 */
															int BgL_arg2645z00_2159;

															BgL_arg2645z00_2159 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 154 */
																long BgL_auxz00_3567;

																BgL_auxz00_3567 = (long) (BgL_arg2645z00_2159);
																BgL_modz00_2158 =
																	(BgL_offsetz00_2157 / BgL_auxz00_3567);
														}}
														{	/* Ast/check_sharing.scm 154 */
															long BgL_restz00_2160;

															{	/* Ast/check_sharing.scm 154 */
																int BgL_arg2644z00_2161;

																BgL_arg2644z00_2161 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 154 */
																	long BgL_auxz00_3571;

																	BgL_auxz00_3571 =
																		(long) (BgL_arg2644z00_2161);
																	BgL_restz00_2160 =
																		(BgL_offsetz00_2157 % BgL_auxz00_3571);
															}}
															{	/* Ast/check_sharing.scm 154 */

																BgL_method3584z00_2150 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2155,
																		(int) (BgL_modz00_2158)),
																	(int) (BgL_restz00_2160));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_2150) (BgL_method3584z00_2150,
									(obj_t) (BgL_arg3746z00_1448), BgL_contextz00_2149, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 155 */
						BgL_nodez00_bglt BgL_arg3747z00_1449;

						BgL_arg3747z00_1449 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_objz00);
						{	/* Ast/check_sharing.scm 155 */
							obj_t BgL_contextz00_2177;

							BgL_contextz00_2177 = (obj_t) (BgL_nodez00_1442);
							{	/* Ast/check_sharing.scm 155 */
								obj_t BgL_method3584z00_2178;

								{	/* Ast/check_sharing.scm 155 */
									BgL_objectz00_bglt BgL_objz00_2179;

									BgL_objz00_2179 = (BgL_objectz00_bglt) (BgL_arg3747z00_1449);
									{	/* Ast/check_sharing.scm 155 */
										long BgL_objzd2classzd2numz00_2180;

										BgL_objzd2classzd2numz00_2180 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2179);
										{	/* Ast/check_sharing.scm 155 */
											obj_t BgL_arg2643z00_2181;

											BgL_arg2643z00_2181 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 155 */
												obj_t BgL_arrayz00_2183;

												int BgL_offsetz00_2184;

												BgL_arrayz00_2183 = BgL_arg2643z00_2181;
												BgL_offsetz00_2184 =
													(int) (BgL_objzd2classzd2numz00_2180);
												{	/* Ast/check_sharing.scm 155 */
													long BgL_offsetz00_2185;

													BgL_offsetz00_2185 =
														((long) (BgL_offsetz00_2184) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 155 */
														long BgL_modz00_2186;

														{	/* Ast/check_sharing.scm 155 */
															int BgL_arg2645z00_2187;

															BgL_arg2645z00_2187 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 155 */
																long BgL_auxz00_3591;

																BgL_auxz00_3591 = (long) (BgL_arg2645z00_2187);
																BgL_modz00_2186 =
																	(BgL_offsetz00_2185 / BgL_auxz00_3591);
														}}
														{	/* Ast/check_sharing.scm 155 */
															long BgL_restz00_2188;

															{	/* Ast/check_sharing.scm 155 */
																int BgL_arg2644z00_2189;

																BgL_arg2644z00_2189 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 155 */
																	long BgL_auxz00_3595;

																	BgL_auxz00_3595 =
																		(long) (BgL_arg2644z00_2189);
																	BgL_restz00_2188 =
																		(BgL_offsetz00_2185 % BgL_auxz00_3595);
															}}
															{	/* Ast/check_sharing.scm 155 */

																BgL_method3584z00_2178 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2183,
																		(int) (BgL_modz00_2186)),
																	(int) (BgL_restz00_2188));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2178)
									(BgL_method3584z00_2178, (obj_t) (BgL_arg3747z00_1449),
									BgL_contextz00_2177, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-c3600 */
	obj_t BGl_checkzd2nodezd2sharingzd2c3600zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2774, obj_t BgL_nodez00_2775, obj_t BgL_contextz00_2776)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 140 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1432;

				obj_t BgL_contextz00_1433;

				BgL_nodez00_1432 = (BgL_conditionalz00_bglt) (BgL_nodez00_2775);
				BgL_contextz00_1433 = BgL_contextz00_2776;
				{

					{	/* Ast/check_sharing.scm 140 */
						obj_t BgL_nextzd2method3599zd2_1440;

						BgL_nextzd2method3599zd2_1440 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1432),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_conditionalz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3599zd2_1440))
							{	/* Ast/check_sharing.scm 140 */
								PROCEDURE_ENTRY(BgL_nextzd2method3599zd2_1440)
									(BgL_nextzd2method3599zd2_1440, (obj_t) (BgL_nodez00_1432),
									BgL_contextz00_1433, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 140 */
								{	/* Ast/check_sharing.scm 140 */
									BgL_nodez00_bglt BgL_nodez00_2092;

									BgL_nodez00_2092 = (BgL_nodez00_bglt) (BgL_nodez00_1432);
									{	/* Ast/check_sharing.scm 140 */
										obj_t BgL_method3584z00_2094;

										{	/* Ast/check_sharing.scm 140 */
											BgL_objectz00_bglt BgL_objz00_2095;

											BgL_objz00_2095 = (BgL_objectz00_bglt) (BgL_nodez00_2092);
											{	/* Ast/check_sharing.scm 140 */
												long BgL_objzd2classzd2numz00_2096;

												BgL_objzd2classzd2numz00_2096 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2095);
												{	/* Ast/check_sharing.scm 140 */
													obj_t BgL_arg2643z00_2097;

													BgL_arg2643z00_2097 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 140 */
														obj_t BgL_arrayz00_2099;

														int BgL_offsetz00_2100;

														BgL_arrayz00_2099 = BgL_arg2643z00_2097;
														BgL_offsetz00_2100 =
															(int) (BgL_objzd2classzd2numz00_2096);
														{	/* Ast/check_sharing.scm 140 */
															long BgL_offsetz00_2101;

															BgL_offsetz00_2101 =
																((long) (BgL_offsetz00_2100) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 140 */
																long BgL_modz00_2102;

																{	/* Ast/check_sharing.scm 140 */
																	int BgL_arg2645z00_2103;

																	BgL_arg2645z00_2103 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 140 */
																		long BgL_auxz00_3622;

																		BgL_auxz00_3622 =
																			(long) (BgL_arg2645z00_2103);
																		BgL_modz00_2102 =
																			(BgL_offsetz00_2101 / BgL_auxz00_3622);
																}}
																{	/* Ast/check_sharing.scm 140 */
																	long BgL_restz00_2104;

																	{	/* Ast/check_sharing.scm 140 */
																		int BgL_arg2644z00_2105;

																		BgL_arg2644z00_2105 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 140 */
																			long BgL_auxz00_3626;

																			BgL_auxz00_3626 =
																				(long) (BgL_arg2644z00_2105);
																			BgL_restz00_2104 =
																				(BgL_offsetz00_2101 % BgL_auxz00_3626);
																	}}
																	{	/* Ast/check_sharing.scm 140 */

																		BgL_method3584z00_2094 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2099,
																				(int) (BgL_modz00_2102)),
																			(int) (BgL_restz00_2104));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_2094)
											(BgL_method3584z00_2094, (obj_t) (BgL_nodez00_2092),
											BgL_contextz00_1433, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 143 */
						BgL_nodez00_bglt BgL_arg3739z00_1437;

						BgL_arg3739z00_1437 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1432))->BgL_testz00);
						{	/* Ast/check_sharing.scm 143 */
							obj_t BgL_contextz00_2009;

							BgL_contextz00_2009 = (obj_t) (BgL_nodez00_1432);
							{	/* Ast/check_sharing.scm 143 */
								obj_t BgL_method3584z00_2010;

								{	/* Ast/check_sharing.scm 143 */
									BgL_objectz00_bglt BgL_objz00_2011;

									BgL_objz00_2011 = (BgL_objectz00_bglt) (BgL_arg3739z00_1437);
									{	/* Ast/check_sharing.scm 143 */
										long BgL_objzd2classzd2numz00_2012;

										BgL_objzd2classzd2numz00_2012 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2011);
										{	/* Ast/check_sharing.scm 143 */
											obj_t BgL_arg2643z00_2013;

											BgL_arg2643z00_2013 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 143 */
												obj_t BgL_arrayz00_2015;

												int BgL_offsetz00_2016;

												BgL_arrayz00_2015 = BgL_arg2643z00_2013;
												BgL_offsetz00_2016 =
													(int) (BgL_objzd2classzd2numz00_2012);
												{	/* Ast/check_sharing.scm 143 */
													long BgL_offsetz00_2017;

													BgL_offsetz00_2017 =
														((long) (BgL_offsetz00_2016) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 143 */
														long BgL_modz00_2018;

														{	/* Ast/check_sharing.scm 143 */
															int BgL_arg2645z00_2019;

															BgL_arg2645z00_2019 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 143 */
																long BgL_auxz00_3646;

																BgL_auxz00_3646 = (long) (BgL_arg2645z00_2019);
																BgL_modz00_2018 =
																	(BgL_offsetz00_2017 / BgL_auxz00_3646);
														}}
														{	/* Ast/check_sharing.scm 143 */
															long BgL_restz00_2020;

															{	/* Ast/check_sharing.scm 143 */
																int BgL_arg2644z00_2021;

																BgL_arg2644z00_2021 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 143 */
																	long BgL_auxz00_3650;

																	BgL_auxz00_3650 =
																		(long) (BgL_arg2644z00_2021);
																	BgL_restz00_2020 =
																		(BgL_offsetz00_2017 % BgL_auxz00_3650);
															}}
															{	/* Ast/check_sharing.scm 143 */

																BgL_method3584z00_2010 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2015,
																		(int) (BgL_modz00_2018)),
																	(int) (BgL_restz00_2020));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_2010) (BgL_method3584z00_2010,
									(obj_t) (BgL_arg3739z00_1437), BgL_contextz00_2009, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 144 */
						BgL_nodez00_bglt BgL_arg3740z00_1438;

						BgL_arg3740z00_1438 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1432))->BgL_truez00);
						{	/* Ast/check_sharing.scm 144 */
							obj_t BgL_contextz00_2037;

							BgL_contextz00_2037 = (obj_t) (BgL_nodez00_1432);
							{	/* Ast/check_sharing.scm 144 */
								obj_t BgL_method3584z00_2038;

								{	/* Ast/check_sharing.scm 144 */
									BgL_objectz00_bglt BgL_objz00_2039;

									BgL_objz00_2039 = (BgL_objectz00_bglt) (BgL_arg3740z00_1438);
									{	/* Ast/check_sharing.scm 144 */
										long BgL_objzd2classzd2numz00_2040;

										BgL_objzd2classzd2numz00_2040 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2039);
										{	/* Ast/check_sharing.scm 144 */
											obj_t BgL_arg2643z00_2041;

											BgL_arg2643z00_2041 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 144 */
												obj_t BgL_arrayz00_2043;

												int BgL_offsetz00_2044;

												BgL_arrayz00_2043 = BgL_arg2643z00_2041;
												BgL_offsetz00_2044 =
													(int) (BgL_objzd2classzd2numz00_2040);
												{	/* Ast/check_sharing.scm 144 */
													long BgL_offsetz00_2045;

													BgL_offsetz00_2045 =
														((long) (BgL_offsetz00_2044) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 144 */
														long BgL_modz00_2046;

														{	/* Ast/check_sharing.scm 144 */
															int BgL_arg2645z00_2047;

															BgL_arg2645z00_2047 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 144 */
																long BgL_auxz00_3670;

																BgL_auxz00_3670 = (long) (BgL_arg2645z00_2047);
																BgL_modz00_2046 =
																	(BgL_offsetz00_2045 / BgL_auxz00_3670);
														}}
														{	/* Ast/check_sharing.scm 144 */
															long BgL_restz00_2048;

															{	/* Ast/check_sharing.scm 144 */
																int BgL_arg2644z00_2049;

																BgL_arg2644z00_2049 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 144 */
																	long BgL_auxz00_3674;

																	BgL_auxz00_3674 =
																		(long) (BgL_arg2644z00_2049);
																	BgL_restz00_2048 =
																		(BgL_offsetz00_2045 % BgL_auxz00_3674);
															}}
															{	/* Ast/check_sharing.scm 144 */

																BgL_method3584z00_2038 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2043,
																		(int) (BgL_modz00_2046)),
																	(int) (BgL_restz00_2048));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_2038) (BgL_method3584z00_2038,
									(obj_t) (BgL_arg3740z00_1438), BgL_contextz00_2037, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 145 */
						BgL_nodez00_bglt BgL_arg3741z00_1439;

						BgL_arg3741z00_1439 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1432))->
							BgL_falsez00);
						{	/* Ast/check_sharing.scm 145 */
							obj_t BgL_contextz00_2065;

							BgL_contextz00_2065 = (obj_t) (BgL_nodez00_1432);
							{	/* Ast/check_sharing.scm 145 */
								obj_t BgL_method3584z00_2066;

								{	/* Ast/check_sharing.scm 145 */
									BgL_objectz00_bglt BgL_objz00_2067;

									BgL_objz00_2067 = (BgL_objectz00_bglt) (BgL_arg3741z00_1439);
									{	/* Ast/check_sharing.scm 145 */
										long BgL_objzd2classzd2numz00_2068;

										BgL_objzd2classzd2numz00_2068 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2067);
										{	/* Ast/check_sharing.scm 145 */
											obj_t BgL_arg2643z00_2069;

											BgL_arg2643z00_2069 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 145 */
												obj_t BgL_arrayz00_2071;

												int BgL_offsetz00_2072;

												BgL_arrayz00_2071 = BgL_arg2643z00_2069;
												BgL_offsetz00_2072 =
													(int) (BgL_objzd2classzd2numz00_2068);
												{	/* Ast/check_sharing.scm 145 */
													long BgL_offsetz00_2073;

													BgL_offsetz00_2073 =
														((long) (BgL_offsetz00_2072) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 145 */
														long BgL_modz00_2074;

														{	/* Ast/check_sharing.scm 145 */
															int BgL_arg2645z00_2075;

															BgL_arg2645z00_2075 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 145 */
																long BgL_auxz00_3694;

																BgL_auxz00_3694 = (long) (BgL_arg2645z00_2075);
																BgL_modz00_2074 =
																	(BgL_offsetz00_2073 / BgL_auxz00_3694);
														}}
														{	/* Ast/check_sharing.scm 145 */
															long BgL_restz00_2076;

															{	/* Ast/check_sharing.scm 145 */
																int BgL_arg2644z00_2077;

																BgL_arg2644z00_2077 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 145 */
																	long BgL_auxz00_3698;

																	BgL_auxz00_3698 =
																		(long) (BgL_arg2644z00_2077);
																	BgL_restz00_2076 =
																		(BgL_offsetz00_2073 % BgL_auxz00_3698);
															}}
															{	/* Ast/check_sharing.scm 145 */

																BgL_method3584z00_2066 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2071,
																		(int) (BgL_modz00_2074)),
																	(int) (BgL_restz00_2076));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_2066)
									(BgL_method3584z00_2066, (obj_t) (BgL_arg3741z00_1439),
									BgL_contextz00_2065, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-s3598 */
	obj_t BGl_checkzd2nodezd2sharingzd2s3598zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2777, obj_t BgL_nodez00_2778, obj_t BgL_contextz00_2779)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 133 */
			{
				BgL_setqz00_bglt BgL_nodez00_1425;

				obj_t BgL_contextz00_1426;

				BgL_nodez00_1425 = (BgL_setqz00_bglt) (BgL_nodez00_2778);
				BgL_contextz00_1426 = BgL_contextz00_2779;
				{

					{	/* Ast/check_sharing.scm 133 */
						obj_t BgL_nextzd2method3597zd2_1430;

						BgL_nextzd2method3597zd2_1430 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1425),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_setqz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3597zd2_1430))
							{	/* Ast/check_sharing.scm 133 */
								PROCEDURE_ENTRY(BgL_nextzd2method3597zd2_1430)
									(BgL_nextzd2method3597zd2_1430, (obj_t) (BgL_nodez00_1425),
									BgL_contextz00_1426, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 133 */
								{	/* Ast/check_sharing.scm 133 */
									BgL_nodez00_bglt BgL_nodez00_1980;

									BgL_nodez00_1980 = (BgL_nodez00_bglt) (BgL_nodez00_1425);
									{	/* Ast/check_sharing.scm 133 */
										obj_t BgL_method3584z00_1982;

										{	/* Ast/check_sharing.scm 133 */
											BgL_objectz00_bglt BgL_objz00_1983;

											BgL_objz00_1983 = (BgL_objectz00_bglt) (BgL_nodez00_1980);
											{	/* Ast/check_sharing.scm 133 */
												long BgL_objzd2classzd2numz00_1984;

												BgL_objzd2classzd2numz00_1984 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1983);
												{	/* Ast/check_sharing.scm 133 */
													obj_t BgL_arg2643z00_1985;

													BgL_arg2643z00_1985 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 133 */
														obj_t BgL_arrayz00_1987;

														int BgL_offsetz00_1988;

														BgL_arrayz00_1987 = BgL_arg2643z00_1985;
														BgL_offsetz00_1988 =
															(int) (BgL_objzd2classzd2numz00_1984);
														{	/* Ast/check_sharing.scm 133 */
															long BgL_offsetz00_1989;

															BgL_offsetz00_1989 =
																((long) (BgL_offsetz00_1988) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 133 */
																long BgL_modz00_1990;

																{	/* Ast/check_sharing.scm 133 */
																	int BgL_arg2645z00_1991;

																	BgL_arg2645z00_1991 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 133 */
																		long BgL_auxz00_3725;

																		BgL_auxz00_3725 =
																			(long) (BgL_arg2645z00_1991);
																		BgL_modz00_1990 =
																			(BgL_offsetz00_1989 / BgL_auxz00_3725);
																}}
																{	/* Ast/check_sharing.scm 133 */
																	long BgL_restz00_1992;

																	{	/* Ast/check_sharing.scm 133 */
																		int BgL_arg2644z00_1993;

																		BgL_arg2644z00_1993 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 133 */
																			long BgL_auxz00_3729;

																			BgL_auxz00_3729 =
																				(long) (BgL_arg2644z00_1993);
																			BgL_restz00_1992 =
																				(BgL_offsetz00_1989 % BgL_auxz00_3729);
																	}}
																	{	/* Ast/check_sharing.scm 133 */

																		BgL_method3584z00_1982 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1987,
																				(int) (BgL_modz00_1990)),
																			(int) (BgL_restz00_1992));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_1982)
											(BgL_method3584z00_1982, (obj_t) (BgL_nodez00_1980),
											BgL_contextz00_1426, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 135 */
						BgL_nodez00_bglt BgL_arg3737z00_1429;

						BgL_arg3737z00_1429 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1425))->BgL_valuez00);
						{	/* Ast/check_sharing.scm 135 */
							obj_t BgL_contextz00_1953;

							BgL_contextz00_1953 = (obj_t) (BgL_nodez00_1425);
							{	/* Ast/check_sharing.scm 135 */
								obj_t BgL_method3584z00_1954;

								{	/* Ast/check_sharing.scm 135 */
									BgL_objectz00_bglt BgL_objz00_1955;

									BgL_objz00_1955 = (BgL_objectz00_bglt) (BgL_arg3737z00_1429);
									{	/* Ast/check_sharing.scm 135 */
										long BgL_objzd2classzd2numz00_1956;

										BgL_objzd2classzd2numz00_1956 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1955);
										{	/* Ast/check_sharing.scm 135 */
											obj_t BgL_arg2643z00_1957;

											BgL_arg2643z00_1957 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 135 */
												obj_t BgL_arrayz00_1959;

												int BgL_offsetz00_1960;

												BgL_arrayz00_1959 = BgL_arg2643z00_1957;
												BgL_offsetz00_1960 =
													(int) (BgL_objzd2classzd2numz00_1956);
												{	/* Ast/check_sharing.scm 135 */
													long BgL_offsetz00_1961;

													BgL_offsetz00_1961 =
														((long) (BgL_offsetz00_1960) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 135 */
														long BgL_modz00_1962;

														{	/* Ast/check_sharing.scm 135 */
															int BgL_arg2645z00_1963;

															BgL_arg2645z00_1963 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 135 */
																long BgL_auxz00_3749;

																BgL_auxz00_3749 = (long) (BgL_arg2645z00_1963);
																BgL_modz00_1962 =
																	(BgL_offsetz00_1961 / BgL_auxz00_3749);
														}}
														{	/* Ast/check_sharing.scm 135 */
															long BgL_restz00_1964;

															{	/* Ast/check_sharing.scm 135 */
																int BgL_arg2644z00_1965;

																BgL_arg2644z00_1965 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 135 */
																	long BgL_auxz00_3753;

																	BgL_auxz00_3753 =
																		(long) (BgL_arg2644z00_1965);
																	BgL_restz00_1964 =
																		(BgL_offsetz00_1961 % BgL_auxz00_3753);
															}}
															{	/* Ast/check_sharing.scm 135 */

																BgL_method3584z00_1954 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1959,
																		(int) (BgL_modz00_1962)),
																	(int) (BgL_restz00_1964));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_1954)
									(BgL_method3584z00_1954, (obj_t) (BgL_arg3737z00_1429),
									BgL_contextz00_1953, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-c3596 */
	obj_t BGl_checkzd2nodezd2sharingzd2c3596zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2780, obj_t BgL_nodez00_2781, obj_t BgL_contextz00_2782)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 126 */
			{
				BgL_castz00_bglt BgL_nodez00_1418;

				obj_t BgL_contextz00_1419;

				BgL_nodez00_1418 = (BgL_castz00_bglt) (BgL_nodez00_2781);
				BgL_contextz00_1419 = BgL_contextz00_2782;
				{

					{	/* Ast/check_sharing.scm 126 */
						obj_t BgL_nextzd2method3595zd2_1423;

						BgL_nextzd2method3595zd2_1423 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1418),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_castz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3595zd2_1423))
							{	/* Ast/check_sharing.scm 126 */
								PROCEDURE_ENTRY(BgL_nextzd2method3595zd2_1423)
									(BgL_nextzd2method3595zd2_1423, (obj_t) (BgL_nodez00_1418),
									BgL_contextz00_1419, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 126 */
								{	/* Ast/check_sharing.scm 126 */
									BgL_nodez00_bglt BgL_nodez00_1924;

									BgL_nodez00_1924 = (BgL_nodez00_bglt) (BgL_nodez00_1418);
									{	/* Ast/check_sharing.scm 126 */
										obj_t BgL_method3584z00_1926;

										{	/* Ast/check_sharing.scm 126 */
											BgL_objectz00_bglt BgL_objz00_1927;

											BgL_objz00_1927 = (BgL_objectz00_bglt) (BgL_nodez00_1924);
											{	/* Ast/check_sharing.scm 126 */
												long BgL_objzd2classzd2numz00_1928;

												BgL_objzd2classzd2numz00_1928 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1927);
												{	/* Ast/check_sharing.scm 126 */
													obj_t BgL_arg2643z00_1929;

													BgL_arg2643z00_1929 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 126 */
														obj_t BgL_arrayz00_1931;

														int BgL_offsetz00_1932;

														BgL_arrayz00_1931 = BgL_arg2643z00_1929;
														BgL_offsetz00_1932 =
															(int) (BgL_objzd2classzd2numz00_1928);
														{	/* Ast/check_sharing.scm 126 */
															long BgL_offsetz00_1933;

															BgL_offsetz00_1933 =
																((long) (BgL_offsetz00_1932) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 126 */
																long BgL_modz00_1934;

																{	/* Ast/check_sharing.scm 126 */
																	int BgL_arg2645z00_1935;

																	BgL_arg2645z00_1935 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 126 */
																		long BgL_auxz00_3780;

																		BgL_auxz00_3780 =
																			(long) (BgL_arg2645z00_1935);
																		BgL_modz00_1934 =
																			(BgL_offsetz00_1933 / BgL_auxz00_3780);
																}}
																{	/* Ast/check_sharing.scm 126 */
																	long BgL_restz00_1936;

																	{	/* Ast/check_sharing.scm 126 */
																		int BgL_arg2644z00_1937;

																		BgL_arg2644z00_1937 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 126 */
																			long BgL_auxz00_3784;

																			BgL_auxz00_3784 =
																				(long) (BgL_arg2644z00_1937);
																			BgL_restz00_1936 =
																				(BgL_offsetz00_1933 % BgL_auxz00_3784);
																	}}
																	{	/* Ast/check_sharing.scm 126 */

																		BgL_method3584z00_1926 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1931,
																				(int) (BgL_modz00_1934)),
																			(int) (BgL_restz00_1936));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_1926)
											(BgL_method3584z00_1926, (obj_t) (BgL_nodez00_1924),
											BgL_contextz00_1419, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 128 */
						BgL_nodez00_bglt BgL_arg3735z00_1422;

						BgL_arg3735z00_1422 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1418))->BgL_argz00);
						{	/* Ast/check_sharing.scm 128 */
							obj_t BgL_contextz00_1897;

							BgL_contextz00_1897 = (obj_t) (BgL_nodez00_1418);
							{	/* Ast/check_sharing.scm 128 */
								obj_t BgL_method3584z00_1898;

								{	/* Ast/check_sharing.scm 128 */
									BgL_objectz00_bglt BgL_objz00_1899;

									BgL_objz00_1899 = (BgL_objectz00_bglt) (BgL_arg3735z00_1422);
									{	/* Ast/check_sharing.scm 128 */
										long BgL_objzd2classzd2numz00_1900;

										BgL_objzd2classzd2numz00_1900 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1899);
										{	/* Ast/check_sharing.scm 128 */
											obj_t BgL_arg2643z00_1901;

											BgL_arg2643z00_1901 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 128 */
												obj_t BgL_arrayz00_1903;

												int BgL_offsetz00_1904;

												BgL_arrayz00_1903 = BgL_arg2643z00_1901;
												BgL_offsetz00_1904 =
													(int) (BgL_objzd2classzd2numz00_1900);
												{	/* Ast/check_sharing.scm 128 */
													long BgL_offsetz00_1905;

													BgL_offsetz00_1905 =
														((long) (BgL_offsetz00_1904) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 128 */
														long BgL_modz00_1906;

														{	/* Ast/check_sharing.scm 128 */
															int BgL_arg2645z00_1907;

															BgL_arg2645z00_1907 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 128 */
																long BgL_auxz00_3804;

																BgL_auxz00_3804 = (long) (BgL_arg2645z00_1907);
																BgL_modz00_1906 =
																	(BgL_offsetz00_1905 / BgL_auxz00_3804);
														}}
														{	/* Ast/check_sharing.scm 128 */
															long BgL_restz00_1908;

															{	/* Ast/check_sharing.scm 128 */
																int BgL_arg2644z00_1909;

																BgL_arg2644z00_1909 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 128 */
																	long BgL_auxz00_3808;

																	BgL_auxz00_3808 =
																		(long) (BgL_arg2644z00_1909);
																	BgL_restz00_1908 =
																		(BgL_offsetz00_1905 % BgL_auxz00_3808);
															}}
															{	/* Ast/check_sharing.scm 128 */

																BgL_method3584z00_1898 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1903,
																		(int) (BgL_modz00_1906)),
																	(int) (BgL_restz00_1908));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_1898)
									(BgL_method3584z00_1898, (obj_t) (BgL_arg3735z00_1422),
									BgL_contextz00_1897, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-e3594 */
	obj_t BGl_checkzd2nodezd2sharingzd2e3594zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2783, obj_t BgL_nodez00_2784, obj_t BgL_contextz00_2785)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 119 */
			{
				BgL_externz00_bglt BgL_nodez00_1411;

				obj_t BgL_contextz00_1412;

				{	/* Ast/check_sharing.scm 119 */
					bool_t BgL_auxz00_3819;

					BgL_nodez00_1411 = (BgL_externz00_bglt) (BgL_nodez00_2784);
					BgL_contextz00_1412 = BgL_contextz00_2785;
					{

						{	/* Ast/check_sharing.scm 119 */
							obj_t BgL_nextzd2method3593zd2_1416;

							BgL_nextzd2method3593zd2_1416 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1411),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_externz00zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3593zd2_1416))
								{	/* Ast/check_sharing.scm 119 */
									PROCEDURE_ENTRY(BgL_nextzd2method3593zd2_1416)
										(BgL_nextzd2method3593zd2_1416, (obj_t) (BgL_nodez00_1411),
										BgL_contextz00_1412, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 119 */
									{	/* Ast/check_sharing.scm 119 */
										BgL_nodez00_bglt BgL_nodez00_1868;

										BgL_nodez00_1868 = (BgL_nodez00_bglt) (BgL_nodez00_1411);
										{	/* Ast/check_sharing.scm 119 */
											obj_t BgL_method3584z00_1870;

											{	/* Ast/check_sharing.scm 119 */
												BgL_objectz00_bglt BgL_objz00_1871;

												BgL_objz00_1871 =
													(BgL_objectz00_bglt) (BgL_nodez00_1868);
												{	/* Ast/check_sharing.scm 119 */
													long BgL_objzd2classzd2numz00_1872;

													BgL_objzd2classzd2numz00_1872 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1871);
													{	/* Ast/check_sharing.scm 119 */
														obj_t BgL_arg2643z00_1873;

														BgL_arg2643z00_1873 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 119 */
															obj_t BgL_arrayz00_1875;

															int BgL_offsetz00_1876;

															BgL_arrayz00_1875 = BgL_arg2643z00_1873;
															BgL_offsetz00_1876 =
																(int) (BgL_objzd2classzd2numz00_1872);
															{	/* Ast/check_sharing.scm 119 */
																long BgL_offsetz00_1877;

																BgL_offsetz00_1877 =
																	((long) (BgL_offsetz00_1876) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 119 */
																	long BgL_modz00_1878;

																	{	/* Ast/check_sharing.scm 119 */
																		int BgL_arg2645z00_1879;

																		BgL_arg2645z00_1879 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 119 */
																			long BgL_auxz00_3836;

																			BgL_auxz00_3836 =
																				(long) (BgL_arg2645z00_1879);
																			BgL_modz00_1878 =
																				(BgL_offsetz00_1877 / BgL_auxz00_3836);
																	}}
																	{	/* Ast/check_sharing.scm 119 */
																		long BgL_restz00_1880;

																		{	/* Ast/check_sharing.scm 119 */
																			int BgL_arg2644z00_1881;

																			BgL_arg2644z00_1881 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 119 */
																				long BgL_auxz00_3840;

																				BgL_auxz00_3840 =
																					(long) (BgL_arg2644z00_1881);
																				BgL_restz00_1880 =
																					(BgL_offsetz00_1877 %
																					BgL_auxz00_3840);
																		}}
																		{	/* Ast/check_sharing.scm 119 */

																			BgL_method3584z00_1870 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1875,
																					(int) (BgL_modz00_1878)),
																				(int) (BgL_restz00_1880));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_1870)
												(BgL_method3584z00_1870, (obj_t) (BgL_nodez00_1868),
												BgL_contextz00_1412, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 121 */
							obj_t BgL_arg3733z00_1415;

							BgL_arg3733z00_1415 =
								(((BgL_externz00_bglt) CREF(BgL_nodez00_1411))->BgL_exprza2za2);
							BgL_auxz00_3819 =
								BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
								(BgL_arg3733z00_1415, (obj_t) (BgL_nodez00_1411));
					}}
					return BBOOL(BgL_auxz00_3819);
				}
			}
		}
	}



/* check-node-sharing-f3592 */
	obj_t BGl_checkzd2nodezd2sharingzd2f3592zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2786, obj_t BgL_nodez00_2787, obj_t BgL_contextz00_2788)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 110 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1402;

				obj_t BgL_contextz00_1403;

				{	/* Ast/check_sharing.scm 110 */
					bool_t BgL_auxz00_3855;

					BgL_nodez00_1402 = (BgL_funcallz00_bglt) (BgL_nodez00_2787);
					BgL_contextz00_1403 = BgL_contextz00_2788;
					{

						{	/* Ast/check_sharing.scm 110 */
							obj_t BgL_nextzd2method3591zd2_1409;

							BgL_nextzd2method3591zd2_1409 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1402),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_funcallz00zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3591zd2_1409))
								{	/* Ast/check_sharing.scm 110 */
									PROCEDURE_ENTRY(BgL_nextzd2method3591zd2_1409)
										(BgL_nextzd2method3591zd2_1409, (obj_t) (BgL_nodez00_1402),
										BgL_contextz00_1403, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 110 */
									{	/* Ast/check_sharing.scm 110 */
										BgL_nodez00_bglt BgL_nodez00_1839;

										BgL_nodez00_1839 = (BgL_nodez00_bglt) (BgL_nodez00_1402);
										{	/* Ast/check_sharing.scm 110 */
											obj_t BgL_method3584z00_1841;

											{	/* Ast/check_sharing.scm 110 */
												BgL_objectz00_bglt BgL_objz00_1842;

												BgL_objz00_1842 =
													(BgL_objectz00_bglt) (BgL_nodez00_1839);
												{	/* Ast/check_sharing.scm 110 */
													long BgL_objzd2classzd2numz00_1843;

													BgL_objzd2classzd2numz00_1843 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1842);
													{	/* Ast/check_sharing.scm 110 */
														obj_t BgL_arg2643z00_1844;

														BgL_arg2643z00_1844 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 110 */
															obj_t BgL_arrayz00_1846;

															int BgL_offsetz00_1847;

															BgL_arrayz00_1846 = BgL_arg2643z00_1844;
															BgL_offsetz00_1847 =
																(int) (BgL_objzd2classzd2numz00_1843);
															{	/* Ast/check_sharing.scm 110 */
																long BgL_offsetz00_1848;

																BgL_offsetz00_1848 =
																	((long) (BgL_offsetz00_1847) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 110 */
																	long BgL_modz00_1849;

																	{	/* Ast/check_sharing.scm 110 */
																		int BgL_arg2645z00_1850;

																		BgL_arg2645z00_1850 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 110 */
																			long BgL_auxz00_3872;

																			BgL_auxz00_3872 =
																				(long) (BgL_arg2645z00_1850);
																			BgL_modz00_1849 =
																				(BgL_offsetz00_1848 / BgL_auxz00_3872);
																	}}
																	{	/* Ast/check_sharing.scm 110 */
																		long BgL_restz00_1851;

																		{	/* Ast/check_sharing.scm 110 */
																			int BgL_arg2644z00_1852;

																			BgL_arg2644z00_1852 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 110 */
																				long BgL_auxz00_3876;

																				BgL_auxz00_3876 =
																					(long) (BgL_arg2644z00_1852);
																				BgL_restz00_1851 =
																					(BgL_offsetz00_1848 %
																					BgL_auxz00_3876);
																		}}
																		{	/* Ast/check_sharing.scm 110 */

																			BgL_method3584z00_1841 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1846,
																					(int) (BgL_modz00_1849)),
																				(int) (BgL_restz00_1851));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_1841)
												(BgL_method3584z00_1841, (obj_t) (BgL_nodez00_1839),
												BgL_contextz00_1403, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 113 */
							BgL_nodez00_bglt BgL_arg3730z00_1407;

							BgL_arg3730z00_1407 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1402))->BgL_funz00);
							{	/* Ast/check_sharing.scm 113 */
								obj_t BgL_contextz00_1811;

								BgL_contextz00_1811 = (obj_t) (BgL_nodez00_1402);
								{	/* Ast/check_sharing.scm 113 */
									obj_t BgL_method3584z00_1812;

									{	/* Ast/check_sharing.scm 113 */
										BgL_objectz00_bglt BgL_objz00_1813;

										BgL_objz00_1813 =
											(BgL_objectz00_bglt) (BgL_arg3730z00_1407);
										{	/* Ast/check_sharing.scm 113 */
											long BgL_objzd2classzd2numz00_1814;

											BgL_objzd2classzd2numz00_1814 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1813);
											{	/* Ast/check_sharing.scm 113 */
												obj_t BgL_arg2643z00_1815;

												BgL_arg2643z00_1815 =
													PROCEDURE_REF
													(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
													(int) (((long) 1)));
												{	/* Ast/check_sharing.scm 113 */
													obj_t BgL_arrayz00_1817;

													int BgL_offsetz00_1818;

													BgL_arrayz00_1817 = BgL_arg2643z00_1815;
													BgL_offsetz00_1818 =
														(int) (BgL_objzd2classzd2numz00_1814);
													{	/* Ast/check_sharing.scm 113 */
														long BgL_offsetz00_1819;

														BgL_offsetz00_1819 =
															((long) (BgL_offsetz00_1818) - OBJECT_TYPE);
														{	/* Ast/check_sharing.scm 113 */
															long BgL_modz00_1820;

															{	/* Ast/check_sharing.scm 113 */
																int BgL_arg2645z00_1821;

																BgL_arg2645z00_1821 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 113 */
																	long BgL_auxz00_3896;

																	BgL_auxz00_3896 =
																		(long) (BgL_arg2645z00_1821);
																	BgL_modz00_1820 =
																		(BgL_offsetz00_1819 / BgL_auxz00_3896);
															}}
															{	/* Ast/check_sharing.scm 113 */
																long BgL_restz00_1822;

																{	/* Ast/check_sharing.scm 113 */
																	int BgL_arg2644z00_1823;

																	BgL_arg2644z00_1823 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 113 */
																		long BgL_auxz00_3900;

																		BgL_auxz00_3900 =
																			(long) (BgL_arg2644z00_1823);
																		BgL_restz00_1822 =
																			(BgL_offsetz00_1819 % BgL_auxz00_3900);
																}}
																{	/* Ast/check_sharing.scm 113 */

																	BgL_method3584z00_1812 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1817,
																			(int) (BgL_modz00_1820)),
																		(int) (BgL_restz00_1822));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3584z00_1812)
										(BgL_method3584z00_1812, (obj_t) (BgL_arg3730z00_1407),
										BgL_contextz00_1811, BEOA);
						}}}
						{	/* Ast/check_sharing.scm 114 */
							obj_t BgL_arg3731z00_1408;

							BgL_arg3731z00_1408 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1402))->BgL_argsz00);
							BgL_auxz00_3855 =
								BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
								(BgL_arg3731z00_1408, (obj_t) (BgL_nodez00_1402));
					}}
					return BBOOL(BgL_auxz00_3855);
				}
			}
		}
	}



/* check-node-sharing-a3590 */
	obj_t BGl_checkzd2nodezd2sharingzd2a3590zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2789, obj_t BgL_nodez00_2790, obj_t BgL_contextz00_2791)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 101 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1393;

				obj_t BgL_contextz00_1394;

				BgL_nodez00_1393 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2790);
				BgL_contextz00_1394 = BgL_contextz00_2791;
				{

					{	/* Ast/check_sharing.scm 101 */
						obj_t BgL_nextzd2method3589zd2_1400;

						BgL_nextzd2method3589zd2_1400 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1393),
							BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
							BGl_appzd2lyzd2zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3589zd2_1400))
							{	/* Ast/check_sharing.scm 101 */
								PROCEDURE_ENTRY(BgL_nextzd2method3589zd2_1400)
									(BgL_nextzd2method3589zd2_1400, (obj_t) (BgL_nodez00_1393),
									BgL_contextz00_1394, BEOA);
							}
						else
							{	/* Ast/check_sharing.scm 101 */
								{	/* Ast/check_sharing.scm 101 */
									BgL_nodez00_bglt BgL_nodez00_1782;

									BgL_nodez00_1782 = (BgL_nodez00_bglt) (BgL_nodez00_1393);
									{	/* Ast/check_sharing.scm 101 */
										obj_t BgL_method3584z00_1784;

										{	/* Ast/check_sharing.scm 101 */
											BgL_objectz00_bglt BgL_objz00_1785;

											BgL_objz00_1785 = (BgL_objectz00_bglt) (BgL_nodez00_1782);
											{	/* Ast/check_sharing.scm 101 */
												long BgL_objzd2classzd2numz00_1786;

												BgL_objzd2classzd2numz00_1786 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1785);
												{	/* Ast/check_sharing.scm 101 */
													obj_t BgL_arg2643z00_1787;

													BgL_arg2643z00_1787 =
														PROCEDURE_REF
														(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
														(int) (((long) 1)));
													{	/* Ast/check_sharing.scm 101 */
														obj_t BgL_arrayz00_1789;

														int BgL_offsetz00_1790;

														BgL_arrayz00_1789 = BgL_arg2643z00_1787;
														BgL_offsetz00_1790 =
															(int) (BgL_objzd2classzd2numz00_1786);
														{	/* Ast/check_sharing.scm 101 */
															long BgL_offsetz00_1791;

															BgL_offsetz00_1791 =
																((long) (BgL_offsetz00_1790) - OBJECT_TYPE);
															{	/* Ast/check_sharing.scm 101 */
																long BgL_modz00_1792;

																{	/* Ast/check_sharing.scm 101 */
																	int BgL_arg2645z00_1793;

																	BgL_arg2645z00_1793 = (int) (((long) 16));
																	{	/* Ast/check_sharing.scm 101 */
																		long BgL_auxz00_3931;

																		BgL_auxz00_3931 =
																			(long) (BgL_arg2645z00_1793);
																		BgL_modz00_1792 =
																			(BgL_offsetz00_1791 / BgL_auxz00_3931);
																}}
																{	/* Ast/check_sharing.scm 101 */
																	long BgL_restz00_1794;

																	{	/* Ast/check_sharing.scm 101 */
																		int BgL_arg2644z00_1795;

																		BgL_arg2644z00_1795 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 101 */
																			long BgL_auxz00_3935;

																			BgL_auxz00_3935 =
																				(long) (BgL_arg2644z00_1795);
																			BgL_restz00_1794 =
																				(BgL_offsetz00_1791 % BgL_auxz00_3935);
																	}}
																	{	/* Ast/check_sharing.scm 101 */

																		BgL_method3584z00_1784 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1789,
																				(int) (BgL_modz00_1792)),
																			(int) (BgL_restz00_1794));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3584z00_1784)
											(BgL_method3584z00_1784, (obj_t) (BgL_nodez00_1782),
											BgL_contextz00_1394, BEOA);
					}}}}
					{	/* Ast/check_sharing.scm 104 */
						BgL_nodez00_bglt BgL_arg3727z00_1398;

						BgL_arg3727z00_1398 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1393))->BgL_funz00);
						{	/* Ast/check_sharing.scm 104 */
							obj_t BgL_contextz00_1727;

							BgL_contextz00_1727 = (obj_t) (BgL_nodez00_1393);
							{	/* Ast/check_sharing.scm 104 */
								obj_t BgL_method3584z00_1728;

								{	/* Ast/check_sharing.scm 104 */
									BgL_objectz00_bglt BgL_objz00_1729;

									BgL_objz00_1729 = (BgL_objectz00_bglt) (BgL_arg3727z00_1398);
									{	/* Ast/check_sharing.scm 104 */
										long BgL_objzd2classzd2numz00_1730;

										BgL_objzd2classzd2numz00_1730 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1729);
										{	/* Ast/check_sharing.scm 104 */
											obj_t BgL_arg2643z00_1731;

											BgL_arg2643z00_1731 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 104 */
												obj_t BgL_arrayz00_1733;

												int BgL_offsetz00_1734;

												BgL_arrayz00_1733 = BgL_arg2643z00_1731;
												BgL_offsetz00_1734 =
													(int) (BgL_objzd2classzd2numz00_1730);
												{	/* Ast/check_sharing.scm 104 */
													long BgL_offsetz00_1735;

													BgL_offsetz00_1735 =
														((long) (BgL_offsetz00_1734) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 104 */
														long BgL_modz00_1736;

														{	/* Ast/check_sharing.scm 104 */
															int BgL_arg2645z00_1737;

															BgL_arg2645z00_1737 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 104 */
																long BgL_auxz00_3955;

																BgL_auxz00_3955 = (long) (BgL_arg2645z00_1737);
																BgL_modz00_1736 =
																	(BgL_offsetz00_1735 / BgL_auxz00_3955);
														}}
														{	/* Ast/check_sharing.scm 104 */
															long BgL_restz00_1738;

															{	/* Ast/check_sharing.scm 104 */
																int BgL_arg2644z00_1739;

																BgL_arg2644z00_1739 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 104 */
																	long BgL_auxz00_3959;

																	BgL_auxz00_3959 =
																		(long) (BgL_arg2644z00_1739);
																	BgL_restz00_1738 =
																		(BgL_offsetz00_1735 % BgL_auxz00_3959);
															}}
															{	/* Ast/check_sharing.scm 104 */

																BgL_method3584z00_1728 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1733,
																		(int) (BgL_modz00_1736)),
																	(int) (BgL_restz00_1738));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3584z00_1728) (BgL_method3584z00_1728,
									(obj_t) (BgL_arg3727z00_1398), BgL_contextz00_1727, BEOA);
					}}}
					{	/* Ast/check_sharing.scm 105 */
						BgL_nodez00_bglt BgL_arg3728z00_1399;

						BgL_arg3728z00_1399 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1393))->BgL_argz00);
						{	/* Ast/check_sharing.scm 105 */
							obj_t BgL_contextz00_1755;

							BgL_contextz00_1755 = (obj_t) (BgL_nodez00_1393);
							{	/* Ast/check_sharing.scm 105 */
								obj_t BgL_method3584z00_1756;

								{	/* Ast/check_sharing.scm 105 */
									BgL_objectz00_bglt BgL_objz00_1757;

									BgL_objz00_1757 = (BgL_objectz00_bglt) (BgL_arg3728z00_1399);
									{	/* Ast/check_sharing.scm 105 */
										long BgL_objzd2classzd2numz00_1758;

										BgL_objzd2classzd2numz00_1758 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1757);
										{	/* Ast/check_sharing.scm 105 */
											obj_t BgL_arg2643z00_1759;

											BgL_arg2643z00_1759 =
												PROCEDURE_REF
												(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
												(int) (((long) 1)));
											{	/* Ast/check_sharing.scm 105 */
												obj_t BgL_arrayz00_1761;

												int BgL_offsetz00_1762;

												BgL_arrayz00_1761 = BgL_arg2643z00_1759;
												BgL_offsetz00_1762 =
													(int) (BgL_objzd2classzd2numz00_1758);
												{	/* Ast/check_sharing.scm 105 */
													long BgL_offsetz00_1763;

													BgL_offsetz00_1763 =
														((long) (BgL_offsetz00_1762) - OBJECT_TYPE);
													{	/* Ast/check_sharing.scm 105 */
														long BgL_modz00_1764;

														{	/* Ast/check_sharing.scm 105 */
															int BgL_arg2645z00_1765;

															BgL_arg2645z00_1765 = (int) (((long) 16));
															{	/* Ast/check_sharing.scm 105 */
																long BgL_auxz00_3979;

																BgL_auxz00_3979 = (long) (BgL_arg2645z00_1765);
																BgL_modz00_1764 =
																	(BgL_offsetz00_1763 / BgL_auxz00_3979);
														}}
														{	/* Ast/check_sharing.scm 105 */
															long BgL_restz00_1766;

															{	/* Ast/check_sharing.scm 105 */
																int BgL_arg2644z00_1767;

																BgL_arg2644z00_1767 = (int) (((long) 16));
																{	/* Ast/check_sharing.scm 105 */
																	long BgL_auxz00_3983;

																	BgL_auxz00_3983 =
																		(long) (BgL_arg2644z00_1767);
																	BgL_restz00_1766 =
																		(BgL_offsetz00_1763 % BgL_auxz00_3983);
															}}
															{	/* Ast/check_sharing.scm 105 */

																BgL_method3584z00_1756 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1761,
																		(int) (BgL_modz00_1764)),
																	(int) (BgL_restz00_1766));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3584z00_1756)
									(BgL_method3584z00_1756, (obj_t) (BgL_arg3728z00_1399),
									BgL_contextz00_1755, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-node-sharing-a3588 */
	obj_t BGl_checkzd2nodezd2sharingzd2a3588zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2792, obj_t BgL_nodez00_2793, obj_t BgL_contextz00_2794)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 93 */
			{
				BgL_appz00_bglt BgL_nodez00_1385;

				obj_t BgL_contextz00_1386;

				{	/* Ast/check_sharing.scm 93 */
					bool_t BgL_auxz00_3994;

					BgL_nodez00_1385 = (BgL_appz00_bglt) (BgL_nodez00_2793);
					BgL_contextz00_1386 = BgL_contextz00_2794;
					{

						{	/* Ast/check_sharing.scm 93 */
							obj_t BgL_nextzd2method3587zd2_1391;

							BgL_nextzd2method3587zd2_1391 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1385),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_appz00zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3587zd2_1391))
								{	/* Ast/check_sharing.scm 93 */
									PROCEDURE_ENTRY(BgL_nextzd2method3587zd2_1391)
										(BgL_nextzd2method3587zd2_1391, (obj_t) (BgL_nodez00_1385),
										BgL_contextz00_1386, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 93 */
									{	/* Ast/check_sharing.scm 93 */
										BgL_nodez00_bglt BgL_nodez00_1698;

										BgL_nodez00_1698 = (BgL_nodez00_bglt) (BgL_nodez00_1385);
										{	/* Ast/check_sharing.scm 93 */
											obj_t BgL_method3584z00_1700;

											{	/* Ast/check_sharing.scm 93 */
												BgL_objectz00_bglt BgL_objz00_1701;

												BgL_objz00_1701 =
													(BgL_objectz00_bglt) (BgL_nodez00_1698);
												{	/* Ast/check_sharing.scm 93 */
													long BgL_objzd2classzd2numz00_1702;

													BgL_objzd2classzd2numz00_1702 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1701);
													{	/* Ast/check_sharing.scm 93 */
														obj_t BgL_arg2643z00_1703;

														BgL_arg2643z00_1703 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 93 */
															obj_t BgL_arrayz00_1705;

															int BgL_offsetz00_1706;

															BgL_arrayz00_1705 = BgL_arg2643z00_1703;
															BgL_offsetz00_1706 =
																(int) (BgL_objzd2classzd2numz00_1702);
															{	/* Ast/check_sharing.scm 93 */
																long BgL_offsetz00_1707;

																BgL_offsetz00_1707 =
																	((long) (BgL_offsetz00_1706) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 93 */
																	long BgL_modz00_1708;

																	{	/* Ast/check_sharing.scm 93 */
																		int BgL_arg2645z00_1709;

																		BgL_arg2645z00_1709 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 93 */
																			long BgL_auxz00_4011;

																			BgL_auxz00_4011 =
																				(long) (BgL_arg2645z00_1709);
																			BgL_modz00_1708 =
																				(BgL_offsetz00_1707 / BgL_auxz00_4011);
																	}}
																	{	/* Ast/check_sharing.scm 93 */
																		long BgL_restz00_1710;

																		{	/* Ast/check_sharing.scm 93 */
																			int BgL_arg2644z00_1711;

																			BgL_arg2644z00_1711 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 93 */
																				long BgL_auxz00_4015;

																				BgL_auxz00_4015 =
																					(long) (BgL_arg2644z00_1711);
																				BgL_restz00_1710 =
																					(BgL_offsetz00_1707 %
																					BgL_auxz00_4015);
																		}}
																		{	/* Ast/check_sharing.scm 93 */

																			BgL_method3584z00_1700 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1705,
																					(int) (BgL_modz00_1708)),
																				(int) (BgL_restz00_1710));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_1700)
												(BgL_method3584z00_1700, (obj_t) (BgL_nodez00_1698),
												BgL_contextz00_1386, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 96 */
							obj_t BgL_arg3725z00_1390;

							BgL_arg3725z00_1390 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1385))->BgL_argsz00);
							BgL_auxz00_3994 =
								BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
								(BgL_arg3725z00_1390, (obj_t) (BgL_nodez00_1385));
					}}
					return BBOOL(BgL_auxz00_3994);
				}
			}
		}
	}



/* check-node-sharing-s3586 */
	obj_t BGl_checkzd2nodezd2sharingzd2s3586zd2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2795, obj_t BgL_nodez00_2796, obj_t BgL_contextz00_2797)
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 86 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1378;

				obj_t BgL_contextz00_1379;

				{	/* Ast/check_sharing.scm 86 */
					bool_t BgL_auxz00_4030;

					BgL_nodez00_1378 = (BgL_sequencez00_bglt) (BgL_nodez00_2796);
					BgL_contextz00_1379 = BgL_contextz00_2797;
					{

						{	/* Ast/check_sharing.scm 86 */
							obj_t BgL_nextzd2method3585zd2_1383;

							BgL_nextzd2method3585zd2_1383 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_nodez00_1378),
								BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								BGl_sequencez00zzast_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3585zd2_1383))
								{	/* Ast/check_sharing.scm 86 */
									PROCEDURE_ENTRY(BgL_nextzd2method3585zd2_1383)
										(BgL_nextzd2method3585zd2_1383, (obj_t) (BgL_nodez00_1378),
										BgL_contextz00_1379, BEOA);
								}
							else
								{	/* Ast/check_sharing.scm 86 */
									{	/* Ast/check_sharing.scm 86 */
										BgL_nodez00_bglt BgL_nodez00_1669;

										BgL_nodez00_1669 = (BgL_nodez00_bglt) (BgL_nodez00_1378);
										{	/* Ast/check_sharing.scm 86 */
											obj_t BgL_method3584z00_1671;

											{	/* Ast/check_sharing.scm 86 */
												BgL_objectz00_bglt BgL_objz00_1672;

												BgL_objz00_1672 =
													(BgL_objectz00_bglt) (BgL_nodez00_1669);
												{	/* Ast/check_sharing.scm 86 */
													long BgL_objzd2classzd2numz00_1673;

													BgL_objzd2classzd2numz00_1673 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1672);
													{	/* Ast/check_sharing.scm 86 */
														obj_t BgL_arg2643z00_1674;

														BgL_arg2643z00_1674 =
															PROCEDURE_REF
															(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
															(int) (((long) 1)));
														{	/* Ast/check_sharing.scm 86 */
															obj_t BgL_arrayz00_1676;

															int BgL_offsetz00_1677;

															BgL_arrayz00_1676 = BgL_arg2643z00_1674;
															BgL_offsetz00_1677 =
																(int) (BgL_objzd2classzd2numz00_1673);
															{	/* Ast/check_sharing.scm 86 */
																long BgL_offsetz00_1678;

																BgL_offsetz00_1678 =
																	((long) (BgL_offsetz00_1677) - OBJECT_TYPE);
																{	/* Ast/check_sharing.scm 86 */
																	long BgL_modz00_1679;

																	{	/* Ast/check_sharing.scm 86 */
																		int BgL_arg2645z00_1680;

																		BgL_arg2645z00_1680 = (int) (((long) 16));
																		{	/* Ast/check_sharing.scm 86 */
																			long BgL_auxz00_4047;

																			BgL_auxz00_4047 =
																				(long) (BgL_arg2645z00_1680);
																			BgL_modz00_1679 =
																				(BgL_offsetz00_1678 / BgL_auxz00_4047);
																	}}
																	{	/* Ast/check_sharing.scm 86 */
																		long BgL_restz00_1681;

																		{	/* Ast/check_sharing.scm 86 */
																			int BgL_arg2644z00_1682;

																			BgL_arg2644z00_1682 = (int) (((long) 16));
																			{	/* Ast/check_sharing.scm 86 */
																				long BgL_auxz00_4051;

																				BgL_auxz00_4051 =
																					(long) (BgL_arg2644z00_1682);
																				BgL_restz00_1681 =
																					(BgL_offsetz00_1678 %
																					BgL_auxz00_4051);
																		}}
																		{	/* Ast/check_sharing.scm 86 */

																			BgL_method3584z00_1671 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1676,
																					(int) (BgL_modz00_1679)),
																				(int) (BgL_restz00_1681));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3584z00_1671)
												(BgL_method3584z00_1671, (obj_t) (BgL_nodez00_1669),
												BgL_contextz00_1379, BEOA);
						}}}}
						{	/* Ast/check_sharing.scm 88 */
							obj_t BgL_arg3723z00_1382;

							BgL_arg3723z00_1382 =
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1378))->BgL_nodesz00);
							BgL_auxz00_4030 =
								BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
								(BgL_arg3723z00_1382, (obj_t) (BgL_nodez00_1378));
					}}
					return BBOOL(BgL_auxz00_4030);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2()
	{
		AN_OBJECT;
		{	/* Ast/check_sharing.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3891z00zzast_checkzd2sharingzd2));
		}
	}

#ifdef __cplusplus
}
#endif
