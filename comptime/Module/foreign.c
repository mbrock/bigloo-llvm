/*===========================================================================*/
/*   (Module/foreign.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/foreign.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_foreignzd2finaliza7erz75zzmodule_foreignz00();
	static obj_t BGl_foreignzd2producerzd2zzmodule_foreignz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_foreignz00();
	static bool_t
		BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(obj_t);
	static obj_t BGl__foreignzd2finaliza7erz75zzmodule_foreignz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
	static obj_t BGl__makezd2externzd2compilerz00zzmodule_foreignz00(obj_t);
	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_foreignz00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_foreignzd2parserzd2zzmodule_foreignz00(obj_t);
	static obj_t
		BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_externzd2producerzd2zzmodule_foreignz00(obj_t);
	static obj_t BGl__foreignzd2producerzd2zzmodule_foreignz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_externzd2parserzd2zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_foreignz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_foreignz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_foreignz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_foreignz00();
	extern obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00;
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00(obj_t);
	static bool_t BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t,
		obj_t);
	extern obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	static obj_t BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00(obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 = BUNSPEC;
	static obj_t BGl_defaultzd2czd2typez00zzmodule_foreignz00(obj_t, obj_t);
	static obj_t BGl__externzd2producerzd2zzmodule_foreignz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32777ze3z83zzmodule_foreignz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32781ze3z83zzmodule_foreignz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32782ze3z83zzmodule_foreignz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00();
	static obj_t BGl__makezd2foreignzd2compilerz00zzmodule_foreignz00(obj_t);
	extern obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	static obj_t __cnst[22];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2foreignzd2compilerzd2envzd2zzmodule_foreignz00,
		BgL_bgl__makeza7d2foreignza73464z00,
		BGl__makezd2foreignzd2compilerz00zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_foreignzd2accesseszd2addz12zd2envzc0zzmodule_foreignz00,
		BgL_bgl__foreignza7d2acces3465za7,
		BGl__foreignzd2accesseszd2addz12z12zzmodule_foreignz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2externzd2compilerzd2envzd2zzmodule_foreignz00,
		BgL_bgl__makeza7d2externza7d3466z00,
		BGl__makezd2externzd2compilerz00zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_foreignzd2finaliza7erzd2envza7zzmodule_foreignz00,
		BgL_bgl__foreignza7d2final3467za7,
		BGl__foreignzd2finaliza7erz75zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_externzd2producerzd2envz00zzmodule_foreignz00,
		BgL_bgl__externza7d2produc3468za7,
		BGl__externzd2producerzd2zzmodule_foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3442z00zzmodule_foreignz00,
		BgL_bgl_za7c3anonymousza7a323469z00,
		BGl_zc3anonymousza32777ze3z83zzmodule_foreignz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3443z00zzmodule_foreignz00,
		BgL_bgl_za7c3anonymousza7a323470z00,
		BGl_zc3anonymousza32782ze3z83zzmodule_foreignz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3444z00zzmodule_foreignz00,
		BgL_bgl_za7c3anonymousza7a323471z00,
		BGl_zc3anonymousza32781ze3z83zzmodule_foreignz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3445z00zzmodule_foreignz00,
		BgL_bgl_string3445za700za7za7m3472za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3446z00zzmodule_foreignz00,
		BgL_bgl_string3446za700za7za7m3473za7, "Illegal `foreign' clause", 24);
	      DEFINE_STRING(BGl_string3447z00zzmodule_foreignz00,
		BgL_bgl_string3447za700za7za7m3474za7, "Illegal `extern' clause", 23);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_foreignzd2producerzd2envz00zzmodule_foreignz00,
		BgL_bgl__foreignza7d2produ3475za7,
		BGl__foreignzd2producerzd2zzmodule_foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3448z00zzmodule_foreignz00,
		BgL_bgl_string3448za700za7za7m3476za7, "Illegal `include' clause", 24);
	      DEFINE_STRING(BGl_string3450z00zzmodule_foreignz00,
		BgL_bgl_string3450za700za7za7m3477za7, "Illegal `macro' form", 20);
	      DEFINE_STRING(BGl_string3449z00zzmodule_foreignz00,
		BgL_bgl_string3449za700za7za7m3478za7, "Illegal foreign form", 20);
	      DEFINE_STRING(BGl_string3451z00zzmodule_foreignz00,
		BgL_bgl_string3451za700za7za7m3479za7, "Illegal `function' form", 23);
	      DEFINE_STRING(BGl_string3452z00zzmodule_foreignz00,
		BgL_bgl_string3452za700za7za7m3480za7, "Illegal `variable' form", 23);
	      DEFINE_STRING(BGl_string3453z00zzmodule_foreignz00,
		BgL_bgl_string3453za700za7za7m3481za7, "Illegal extern form", 19);
	      DEFINE_STRING(BGl_string3454z00zzmodule_foreignz00,
		BgL_bgl_string3454za700za7za7m3482za7, "Illegal `C foreign type'", 24);
	      DEFINE_STRING(BGl_string3455z00zzmodule_foreignz00,
		BgL_bgl_string3455za700za7za7m3483za7, "Illegal `C extern type'", 23);
	      DEFINE_STRING(BGl_string3456z00zzmodule_foreignz00,
		BgL_bgl_string3456za700za7za7m3484za7, "Foreign", 7);
	      DEFINE_STRING(BGl_string3457z00zzmodule_foreignz00,
		BgL_bgl_string3457za700za7za7m3485za7,
		"Re-exportation of global variable (ignored)", 43);
	      DEFINE_STRING(BGl_string3458z00zzmodule_foreignz00,
		BgL_bgl_string3458za700za7za7m3486za7, "Unbound global variable", 23);
	      DEFINE_STRING(BGl_string3460z00zzmodule_foreignz00,
		BgL_bgl_string3460za700za7za7m3487za7, "module_foreign", 14);
	      DEFINE_STRING(BGl_string3459z00zzmodule_foreignz00,
		BgL_bgl_string3459za700za7za7m3488za7, "Unspecified C type, using type",
		30);
	      DEFINE_STRING(BGl_string3461z00zzmodule_foreignz00,
		BgL_bgl_string3461za700za7za7m3489za7,
		"unit make-heap make-add-heap union* struct* array enum function pointer opaque struct union C * macro export type include infix void extern foreign ",
		148);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long
		BgL_checksumz00_2441, char *BgL_fromz00_2442)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_foreignz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_foreignz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00();
					BGl_cnstzd2initzd2zzmodule_foreignz00();
					BGl_importedzd2moduleszd2initz00zzmodule_foreignz00();
					BGl_toplevelzd2initzd2zzmodule_foreignz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_foreign");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			{	/* Module/foreign.scm 18 */
				obj_t BgL_cportz00_2429;

				BgL_cportz00_2429 =
					bgl_open_input_string(BGl_string3461z00zzmodule_foreignz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2430;

					BgL_iz00_2430 = ((long) 21);
				BgL_loopz00_2431:
					if ((BgL_iz00_2430 == ((long) -1)))
						{	/* Module/foreign.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Module/foreign.scm 18 */
							{	/* Module/foreign.scm 18 */
								obj_t BgL_arg3463z00_2433;

								{	/* Module/foreign.scm 18 */

									{	/* Module/foreign.scm 18 */
										obj_t BgL_locationz00_2435;

										BgL_locationz00_2435 = BBOOL(((bool_t) 0));
										{	/* Module/foreign.scm 18 */

											BgL_arg3463z00_2433 =
												BGl_readz00zz__readerz00(BgL_cportz00_2429,
												BgL_locationz00_2435);
										}
									}
								}
								{	/* Module/foreign.scm 18 */
									int BgL_auxz00_2460;

									BgL_auxz00_2460 = (int) (BgL_iz00_2430);
									CNST_TABLE_SET(BgL_auxz00_2460, BgL_arg3463z00_2433);
							}}
							{	/* Module/foreign.scm 18 */
								int BgL_auxz00_2436;

								BgL_auxz00_2436 = (int) ((BgL_iz00_2430 - ((long) 1)));
								{
									long BgL_iz00_2465;

									BgL_iz00_2465 = (long) (BgL_auxz00_2436);
									BgL_iz00_2430 = BgL_iz00_2465;
									goto BgL_loopz00_2431;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BNIL;
			return (BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 =
				BNIL, BUNSPEC);
		}
	}



/* make-foreign-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 45 */
			{	/* Module/foreign.scm 46 */
				obj_t BgL_arg2775z00_561;

				BgL_arg2775z00_561 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2775z00_561,
						BGl_foreignzd2producerzd2envz00zzmodule_foreignz00,
						BGl_proc3442z00zzmodule_foreignz00,
						BGl_foreignzd2finaliza7erzd2envza7zzmodule_foreignz00));
			}
		}
	}



/* _make-foreign-compiler */
	obj_t BGl__makezd2foreignzd2compilerz00zzmodule_foreignz00(obj_t
		BgL_envz00_2405)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 45 */
			return BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
		}
	}



/* <anonymous:2777> */
	obj_t BGl_zc3anonymousza32777ze3z83zzmodule_foreignz00(obj_t BgL_envz00_2406,
		obj_t BgL_mz00_2407, obj_t BgL_cz00_2408)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 48 */
			return BGl_foreignzd2producerzd2zzmodule_foreignz00(BgL_cz00_2408);
		}
	}



/* make-extern-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 54 */
			{	/* Module/foreign.scm 55 */
				obj_t BgL_arg2778z00_567;

				BgL_arg2778z00_567 = CNST_TABLE_REF(((long) 1));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2778z00_567,
						BGl_externzd2producerzd2envz00zzmodule_foreignz00,
						BGl_proc3444z00zzmodule_foreignz00,
						BGl_proc3443z00zzmodule_foreignz00));
			}
		}
	}



/* _make-extern-compiler */
	obj_t BGl__makezd2externzd2compilerz00zzmodule_foreignz00(obj_t
		BgL_envz00_2414)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 54 */
			return BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
		}
	}



/* <anonymous:2782> */
	obj_t BGl_zc3anonymousza32782ze3z83zzmodule_foreignz00(obj_t BgL_envz00_2415)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 2));
		}}
	}



/* <anonymous:2781> */
	obj_t BGl_zc3anonymousza32781ze3z83zzmodule_foreignz00(obj_t BgL_envz00_2416,
		obj_t BgL_mz00_2417, obj_t BgL_cz00_2418)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 57 */
			return BGl_externzd2producerzd2zzmodule_foreignz00(BgL_cz00_2418);
		}
	}



/* foreign-producer */
	obj_t BGl_foreignzd2producerzd2zzmodule_foreignz00(obj_t BgL_clausez00_23)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 62 */
			{	/* Module/foreign.scm 63 */
				bool_t BgL_testz00_2478;

				{	/* Module/foreign.scm 63 */
					obj_t BgL_arg2792z00_591;

					obj_t BgL_arg2793z00_592;

					BgL_arg2792z00_591 = CNST_TABLE_REF(((long) 0));
					{	/* Module/foreign.scm 63 */
						obj_t BgL_arg2794z00_593;

						BgL_arg2794z00_593 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2481;

							BgL_auxz00_2481 = (BgL_backendz00_bglt) (BgL_arg2794z00_593);
							BgL_arg2793z00_592 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2481))->
								BgL_foreignzd2clausezd2supportz00);
					}}
					BgL_testz00_2478 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2792z00_591,
							BgL_arg2793z00_592));
				}
				if (BgL_testz00_2478)
					{
						obj_t BgL_protosz00_577;

						if (PAIRP(BgL_clausez00_23))
							{	/* Module/foreign.scm 64 */
								BgL_protosz00_577 = CDR(BgL_clausez00_23);
								{
									obj_t BgL_l2759z00_584;

									BgL_l2759z00_584 = BgL_protosz00_577;
								BgL_zc3anonymousza32786ze3z83_585:
									if (PAIRP(BgL_l2759z00_584))
										{	/* Module/foreign.scm 66 */
											BGl_foreignzd2parserzd2zzmodule_foreignz00(CAR
												(BgL_l2759z00_584));
											{
												obj_t BgL_l2759z00_2492;

												BgL_l2759z00_2492 = CDR(BgL_l2759z00_584);
												BgL_l2759z00_584 = BgL_l2759z00_2492;
												goto BgL_zc3anonymousza32786ze3z83_585;
											}
										}
									else
										{	/* Module/foreign.scm 66 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/foreign.scm 64 */
								{	/* Module/foreign.scm 69 */
									obj_t BgL_list2791z00_590;

									BgL_list2791z00_590 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string3445z00zzmodule_foreignz00,
										BGl_string3446z00zzmodule_foreignz00, BgL_clausez00_23,
										BgL_list2791z00_590);
								}
							}
					}
				else
					{	/* Module/foreign.scm 63 */
						return BNIL;
					}
			}
		}
	}



/* _foreign-producer */
	obj_t BGl__foreignzd2producerzd2zzmodule_foreignz00(obj_t BgL_envz00_2409,
		obj_t BgL_clausez00_2410)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 62 */
			return BGl_foreignzd2producerzd2zzmodule_foreignz00(BgL_clausez00_2410);
		}
	}



/* extern-producer */
	obj_t BGl_externzd2producerzd2zzmodule_foreignz00(obj_t BgL_clausez00_24)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 78 */
			{	/* Module/foreign.scm 79 */
				bool_t BgL_testz00_2498;

				{	/* Module/foreign.scm 79 */
					obj_t BgL_arg2803z00_609;

					obj_t BgL_arg2804z00_610;

					BgL_arg2803z00_609 = CNST_TABLE_REF(((long) 1));
					{	/* Module/foreign.scm 79 */
						obj_t BgL_arg2805z00_611;

						BgL_arg2805z00_611 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2501;

							BgL_auxz00_2501 = (BgL_backendz00_bglt) (BgL_arg2805z00_611);
							BgL_arg2804z00_610 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2501))->
								BgL_foreignzd2clausezd2supportz00);
					}}
					BgL_testz00_2498 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2803z00_609,
							BgL_arg2804z00_610));
				}
				if (BgL_testz00_2498)
					{
						obj_t BgL_protosz00_595;

						if (PAIRP(BgL_clausez00_24))
							{	/* Module/foreign.scm 80 */
								BgL_protosz00_595 = CDR(BgL_clausez00_24);
								{
									obj_t BgL_l2761z00_602;

									BgL_l2761z00_602 = BgL_protosz00_595;
								BgL_zc3anonymousza32798ze3z83_603:
									if (PAIRP(BgL_l2761z00_602))
										{	/* Module/foreign.scm 82 */
											BGl_externzd2parserzd2zzmodule_foreignz00(CAR
												(BgL_l2761z00_602));
											{
												obj_t BgL_l2761z00_2512;

												BgL_l2761z00_2512 = CDR(BgL_l2761z00_602);
												BgL_l2761z00_602 = BgL_l2761z00_2512;
												goto BgL_zc3anonymousza32798ze3z83_603;
											}
										}
									else
										{	/* Module/foreign.scm 82 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/foreign.scm 80 */
								{	/* Module/foreign.scm 85 */
									obj_t BgL_list2802z00_608;

									BgL_list2802z00_608 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string3445z00zzmodule_foreignz00,
										BGl_string3447z00zzmodule_foreignz00, BgL_clausez00_24,
										BgL_list2802z00_608);
								}
							}
					}
				else
					{	/* Module/foreign.scm 79 */
						return BNIL;
					}
			}
		}
	}



/* _extern-producer */
	obj_t BGl__externzd2producerzd2zzmodule_foreignz00(obj_t BgL_envz00_2419,
		obj_t BgL_clausez00_2420)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 78 */
			return BGl_externzd2producerzd2zzmodule_foreignz00(BgL_clausez00_2420);
		}
	}



/* check-c-args? */
	bool_t BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(obj_t BgL_protoz00_25)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 94 */
			{
				obj_t BgL_protoz00_613;

				BgL_protoz00_613 = BgL_protoz00_25;
			BgL_zc3anonymousza32806ze3z83_614:
				if (NULLP(BgL_protoz00_613))
					{	/* Module/foreign.scm 97 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/foreign.scm 97 */
						if (SYMBOLP(BgL_protoz00_613))
							{	/* Module/foreign.scm 99 */
								return ((bool_t) 1);
							}
						else
							{	/* Module/foreign.scm 99 */
								if (PAIRP(BgL_protoz00_613))
									{	/* Module/foreign.scm 103 */
										bool_t BgL_testz00_2524;

										{	/* Module/foreign.scm 103 */
											obj_t BgL_auxz00_2525;

											BgL_auxz00_2525 = CAR(BgL_protoz00_613);
											BgL_testz00_2524 = SYMBOLP(BgL_auxz00_2525);
										}
										if (BgL_testz00_2524)
											{
												obj_t BgL_protoz00_2528;

												BgL_protoz00_2528 = CDR(BgL_protoz00_613);
												BgL_protoz00_613 = BgL_protoz00_2528;
												goto BgL_zc3anonymousza32806ze3z83_614;
											}
										else
											{	/* Module/foreign.scm 103 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Module/foreign.scm 101 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* foreign-parser */
	obj_t BGl_foreignzd2parserzd2zzmodule_foreignz00(obj_t BgL_foreignz00_26)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 111 */
			{
				obj_t BgL_typez00_644;

				obj_t BgL_lzd2namezd2_645;

				obj_t BgL_czd2namezd2_646;

				obj_t BgL_typez00_639;

				obj_t BgL_lzd2namezd2_640;

				obj_t BgL_protoz00_641;

				obj_t BgL_czd2namezd2_642;

				obj_t BgL_typez00_634;

				obj_t BgL_lzd2namezd2_635;

				obj_t BgL_czd2namezd2_636;

				obj_t BgL_typez00_629;

				obj_t BgL_lzd2namezd2_630;

				obj_t BgL_protoz00_631;

				obj_t BgL_czd2namezd2_632;

				obj_t BgL_stringz00_622;

				if (PAIRP(BgL_foreignz00_26))
					{	/* Module/foreign.scm 113 */
						obj_t BgL_cdrzd21683zd2_651;

						BgL_cdrzd21683zd2_651 = CDR(BgL_foreignz00_26);
						if ((CAR(BgL_foreignz00_26) == CNST_TABLE_REF(((long) 4))))
							{	/* Module/foreign.scm 113 */
								if (PAIRP(BgL_cdrzd21683zd2_651))
									{	/* Module/foreign.scm 113 */
										if (NULLP(CDR(BgL_cdrzd21683zd2_651)))
											{	/* Module/foreign.scm 113 */
												BgL_stringz00_622 = CAR(BgL_cdrzd21683zd2_651);
												if (STRINGP(BgL_stringz00_622))
													{	/* Module/foreign.scm 115 */
														if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
																(BgL_stringz00_622,
																	BGl_za2includezd2foreignza2zd2zzengine_paramz00)))
															{	/* Module/foreign.scm 117 */
																return BFALSE;
															}
														else
															{	/* Module/foreign.scm 117 */
																return
																	(BGl_za2includezd2foreignza2zd2zzengine_paramz00
																	=
																	MAKE_PAIR(BgL_stringz00_622,
																		BGl_za2includezd2foreignza2zd2zzengine_paramz00),
																	BUNSPEC);
															}
													}
												else
													{	/* Module/foreign.scm 116 */
														obj_t BgL_list2912z00_777;

														BgL_list2912z00_777 = MAKE_PAIR(BNIL, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string3445z00zzmodule_foreignz00,
															BGl_string3448z00zzmodule_foreignz00,
															BgL_foreignz00_26, BgL_list2912z00_777);
													}
											}
										else
											{	/* Module/foreign.scm 113 */
											BgL_tagzd21666zd2_628:
												{	/* Module/foreign.scm 125 */
													obj_t BgL_list2913z00_778;

													BgL_list2913z00_778 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string3445z00zzmodule_foreignz00,
														BGl_string3449z00zzmodule_foreignz00,
														BgL_foreignz00_26, BgL_list2913z00_778);
												}
											}
									}
								else
									{	/* Module/foreign.scm 113 */
										goto BgL_tagzd21666zd2_628;
									}
							}
						else
							{	/* Module/foreign.scm 113 */
								if ((CAR(BgL_foreignz00_26) == CNST_TABLE_REF(((long) 5))))
									{	/* Module/foreign.scm 113 */
										return
											BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
											(BgL_foreignz00_26);
									}
								else
									{	/* Module/foreign.scm 113 */
										if ((CAR(BgL_foreignz00_26) == CNST_TABLE_REF(((long) 6))))
											{	/* Module/foreign.scm 113 */
												if (PAIRP(BgL_cdrzd21683zd2_651))
													{	/* Module/foreign.scm 113 */
														obj_t BgL_carzd21744zd2_661;

														obj_t BgL_cdrzd21745zd2_662;

														BgL_carzd21744zd2_661 = CAR(BgL_cdrzd21683zd2_651);
														BgL_cdrzd21745zd2_662 = CDR(BgL_cdrzd21683zd2_651);
														if (SYMBOLP(BgL_carzd21744zd2_661))
															{	/* Module/foreign.scm 113 */
																if (PAIRP(BgL_cdrzd21745zd2_662))
																	{	/* Module/foreign.scm 113 */
																		obj_t BgL_carzd21750zd2_665;

																		BgL_carzd21750zd2_665 =
																			CAR(BgL_cdrzd21745zd2_662);
																		if (STRINGP(BgL_carzd21750zd2_665))
																			{	/* Module/foreign.scm 113 */
																				if (NULLP(CDR(BgL_cdrzd21745zd2_662)))
																					{	/* Module/foreign.scm 113 */
																						return
																							(BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00
																							=
																							MAKE_PAIR(BgL_foreignz00_26,
																								BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/foreign.scm 113 */
																						goto BgL_tagzd21666zd2_628;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 113 */
																				goto BgL_tagzd21666zd2_628;
																			}
																	}
																else
																	{	/* Module/foreign.scm 113 */
																		goto BgL_tagzd21666zd2_628;
																	}
															}
														else
															{	/* Module/foreign.scm 113 */
																goto BgL_tagzd21666zd2_628;
															}
													}
												else
													{	/* Module/foreign.scm 113 */
														goto BgL_tagzd21666zd2_628;
													}
											}
										else
											{	/* Module/foreign.scm 113 */
												obj_t BgL_cdrzd21797zd2_669;

												BgL_cdrzd21797zd2_669 = CDR(BgL_foreignz00_26);
												if (
													(CAR(BgL_foreignz00_26) ==
														CNST_TABLE_REF(((long) 7))))
													{	/* Module/foreign.scm 113 */
														if (PAIRP(BgL_cdrzd21797zd2_669))
															{	/* Module/foreign.scm 113 */
																obj_t BgL_cdrzd21803zd2_672;

																BgL_cdrzd21803zd2_672 =
																	CDR(BgL_cdrzd21797zd2_669);
																if (PAIRP(BgL_cdrzd21803zd2_672))
																	{	/* Module/foreign.scm 113 */
																		obj_t BgL_cdrzd21809zd2_674;

																		BgL_cdrzd21809zd2_674 =
																			CDR(BgL_cdrzd21803zd2_672);
																		if (PAIRP(BgL_cdrzd21809zd2_674))
																			{	/* Module/foreign.scm 113 */
																				obj_t BgL_cdrzd21814zd2_676;

																				BgL_cdrzd21814zd2_676 =
																					CDR(BgL_cdrzd21809zd2_674);
																				if (PAIRP(BgL_cdrzd21814zd2_676))
																					{	/* Module/foreign.scm 113 */
																						if (NULLP(CDR
																								(BgL_cdrzd21814zd2_676)))
																							{	/* Module/foreign.scm 113 */
																								BgL_typez00_629 =
																									CAR(BgL_cdrzd21797zd2_669);
																								BgL_lzd2namezd2_630 =
																									CAR(BgL_cdrzd21803zd2_672);
																								BgL_protoz00_631 =
																									CAR(BgL_cdrzd21809zd2_674);
																								BgL_czd2namezd2_632 =
																									CAR(BgL_cdrzd21814zd2_676);
																							BgL_tagzd21667zd2_633:
																								{	/* Module/foreign.scm 128 */
																									bool_t BgL_testz00_2596;

																									if (STRINGP
																										(BgL_czd2namezd2_632))
																										{	/* Module/foreign.scm 128 */
																											if (SYMBOLP
																												(BgL_typez00_629))
																												{	/* Module/foreign.scm 129 */
																													if (SYMBOLP
																														(BgL_lzd2namezd2_630))
																														{	/* Module/foreign.scm 130 */
																															BgL_testz00_2596 =
																																BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																(BgL_protoz00_631);
																														}
																													else
																														{	/* Module/foreign.scm 130 */
																															BgL_testz00_2596 =
																																((bool_t) 0);
																														}
																												}
																											else
																												{	/* Module/foreign.scm 129 */
																													BgL_testz00_2596 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Module/foreign.scm 128 */
																											BgL_testz00_2596 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_2596)
																										{	/* Module/foreign.scm 134 */
																											obj_t BgL_arg2915z00_780;

																											bool_t BgL_arg2916z00_781;

																											BgL_arg2915z00_780 =
																												CNST_TABLE_REF(((long)
																													0));
																											BgL_arg2916z00_781 =
																												(CAR(BgL_foreignz00_26)
																												==
																												CNST_TABLE_REF(((long)
																														3)));
																											return (obj_t)
																												(BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																												(BgL_lzd2namezd2_630,
																													BgL_arg2915z00_780,
																													BgL_czd2namezd2_632,
																													BgL_typez00_629,
																													BgL_protoz00_631,
																													BgL_arg2916z00_781,
																													((bool_t) 1),
																													BgL_foreignz00_26,
																													BgL_foreignz00_26));
																										}
																									else
																										{	/* Module/foreign.scm 132 */
																											obj_t BgL_list2919z00_784;

																											BgL_list2919z00_784 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string3445z00zzmodule_foreignz00,
																												BGl_string3450z00zzmodule_foreignz00,
																												BgL_foreignz00_26,
																												BgL_list2919z00_784);
																										}
																								}
																							}
																						else
																							{	/* Module/foreign.scm 113 */
																							BgL_tagzd21669zd2_638:
																								{	/* Module/foreign.scm 149 */
																									obj_t BgL_list2927z00_792;

																									BgL_list2927z00_792 =
																										MAKE_PAIR(BNIL, BNIL);
																									return
																										BGl_userzd2errorzd2zztools_errorz00
																										(BGl_string3445z00zzmodule_foreignz00,
																										BGl_string3449z00zzmodule_foreignz00,
																										BgL_foreignz00_26,
																										BgL_list2927z00_792);
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 113 */
																						obj_t BgL_cdrzd21861zd2_685;

																						BgL_cdrzd21861zd2_685 =
																							CDR(BgL_cdrzd21797zd2_669);
																						{	/* Module/foreign.scm 113 */
																							obj_t BgL_cdrzd21869zd2_686;

																							BgL_cdrzd21869zd2_686 =
																								CDR(BgL_cdrzd21861zd2_685);
																							if (NULLP(CDR
																									(BgL_cdrzd21869zd2_686)))
																								{	/* Module/foreign.scm 113 */
																									BgL_typez00_634 =
																										CAR(BgL_cdrzd21797zd2_669);
																									BgL_lzd2namezd2_635 =
																										CAR(BgL_cdrzd21861zd2_685);
																									BgL_czd2namezd2_636 =
																										CAR(BgL_cdrzd21869zd2_686);
																									{	/* Module/foreign.scm 143 */
																										bool_t BgL_testz00_2623;

																										if (STRINGP
																											(BgL_czd2namezd2_636))
																											{	/* Module/foreign.scm 143 */
																												if (SYMBOLP
																													(BgL_typez00_634))
																													{	/* Module/foreign.scm 144 */
																														BgL_testz00_2623 =
																															SYMBOLP
																															(BgL_lzd2namezd2_635);
																													}
																												else
																													{	/* Module/foreign.scm 144 */
																														BgL_testz00_2623 =
																															((bool_t) 0);
																													}
																											}
																										else
																											{	/* Module/foreign.scm 143 */
																												BgL_testz00_2623 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_2623)
																											{	/* Module/foreign.scm 143 */
																												return
																													(obj_t)
																													(BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																													(BgL_lzd2namezd2_635,
																														BgL_czd2namezd2_636,
																														BgL_typez00_634,
																														((bool_t) 1),
																														BgL_foreignz00_26,
																														BgL_foreignz00_26));
																											}
																										else
																											{	/* Module/foreign.scm 146 */
																												obj_t
																													BgL_list2924z00_789;
																												BgL_list2924z00_789 =
																													MAKE_PAIR(BNIL, BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string3445z00zzmodule_foreignz00,
																													BGl_string3450z00zzmodule_foreignz00,
																													BgL_foreignz00_26,
																													BgL_list2924z00_789);
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 113 */
																									goto BgL_tagzd21669zd2_638;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 113 */
																				goto BgL_tagzd21669zd2_638;
																			}
																	}
																else
																	{	/* Module/foreign.scm 113 */
																		goto BgL_tagzd21669zd2_638;
																	}
															}
														else
															{	/* Module/foreign.scm 113 */
																goto BgL_tagzd21669zd2_638;
															}
													}
												else
													{	/* Module/foreign.scm 113 */
														if (
															(CAR(BgL_foreignz00_26) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Module/foreign.scm 113 */
																if (PAIRP(BgL_cdrzd21797zd2_669))
																	{	/* Module/foreign.scm 113 */
																		obj_t BgL_cdrzd21941zd2_695;

																		BgL_cdrzd21941zd2_695 =
																			CDR(BgL_cdrzd21797zd2_669);
																		if (
																			(CAR(BgL_cdrzd21797zd2_669) ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Module/foreign.scm 113 */
																				if (PAIRP(BgL_cdrzd21941zd2_695))
																					{	/* Module/foreign.scm 113 */
																						obj_t BgL_cdrzd21947zd2_698;

																						BgL_cdrzd21947zd2_698 =
																							CDR(BgL_cdrzd21941zd2_695);
																						if (PAIRP(BgL_cdrzd21947zd2_698))
																							{	/* Module/foreign.scm 113 */
																								obj_t BgL_cdrzd21953zd2_700;

																								BgL_cdrzd21953zd2_700 =
																									CDR(BgL_cdrzd21947zd2_698);
																								if (PAIRP
																									(BgL_cdrzd21953zd2_700))
																									{	/* Module/foreign.scm 113 */
																										obj_t BgL_cdrzd21958zd2_702;

																										BgL_cdrzd21958zd2_702 =
																											CDR
																											(BgL_cdrzd21953zd2_700);
																										if (PAIRP
																											(BgL_cdrzd21958zd2_702))
																											{	/* Module/foreign.scm 113 */
																												if (NULLP(CDR
																														(BgL_cdrzd21958zd2_702)))
																													{
																														obj_t
																															BgL_czd2namezd2_2667;
																														obj_t
																															BgL_protoz00_2665;
																														obj_t
																															BgL_lzd2namezd2_2663;
																														obj_t
																															BgL_typez00_2661;
																														BgL_typez00_2661 =
																															CAR
																															(BgL_cdrzd21941zd2_695);
																														BgL_lzd2namezd2_2663
																															=
																															CAR
																															(BgL_cdrzd21947zd2_698);
																														BgL_protoz00_2665 =
																															CAR
																															(BgL_cdrzd21953zd2_700);
																														BgL_czd2namezd2_2667
																															=
																															CAR
																															(BgL_cdrzd21958zd2_702);
																														BgL_czd2namezd2_632
																															=
																															BgL_czd2namezd2_2667;
																														BgL_protoz00_631 =
																															BgL_protoz00_2665;
																														BgL_lzd2namezd2_630
																															=
																															BgL_lzd2namezd2_2663;
																														BgL_typez00_629 =
																															BgL_typez00_2661;
																														goto
																															BgL_tagzd21667zd2_633;
																													}
																												else
																													{	/* Module/foreign.scm 113 */
																													BgL_tagzd21672zd2_648:
																														{	/* Module/foreign.scm 172 */
																															obj_t
																																BgL_list2937z00_802;
																															BgL_list2937z00_802
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															return
																																BGl_userzd2errorzd2zztools_errorz00
																																(BGl_string3445z00zzmodule_foreignz00,
																																BGl_string3449z00zzmodule_foreignz00,
																																BgL_foreignz00_26,
																																BgL_list2937z00_802);
																														}
																													}
																											}
																										else
																											{	/* Module/foreign.scm 113 */
																												goto
																													BgL_tagzd21672zd2_648;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 113 */
																										obj_t BgL_cdrzd22042zd2_710;

																										BgL_cdrzd22042zd2_710 =
																											CDR(BgL_foreignz00_26);
																										{	/* Module/foreign.scm 113 */
																											obj_t
																												BgL_cdrzd22050zd2_711;
																											BgL_cdrzd22050zd2_711 =
																												CDR
																												(BgL_cdrzd22042zd2_710);
																											{	/* Module/foreign.scm 113 */
																												obj_t
																													BgL_cdrzd22057zd2_712;
																												BgL_cdrzd22057zd2_712 =
																													CDR
																													(BgL_cdrzd22050zd2_711);
																												if (NULLP(CDR
																														(BgL_cdrzd22057zd2_712)))
																													{	/* Module/foreign.scm 113 */
																														BgL_typez00_639 =
																															CAR
																															(BgL_foreignz00_26);
																														BgL_lzd2namezd2_640
																															=
																															CAR
																															(BgL_cdrzd22042zd2_710);
																														BgL_protoz00_641 =
																															CAR
																															(BgL_cdrzd22050zd2_711);
																														BgL_czd2namezd2_642
																															=
																															CAR
																															(BgL_cdrzd22057zd2_712);
																													BgL_tagzd21670zd2_643:
																														{	/* Module/foreign.scm 151 */
																															bool_t
																																BgL_testz00_2677;
																															if (STRINGP
																																(BgL_czd2namezd2_642))
																																{	/* Module/foreign.scm 151 */
																																	if (SYMBOLP
																																		(BgL_typez00_639))
																																		{	/* Module/foreign.scm 152 */
																																			if (SYMBOLP(BgL_lzd2namezd2_640))
																																				{	/* Module/foreign.scm 153 */
																																					BgL_testz00_2677
																																						=
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_protoz00_641);
																																				}
																																			else
																																				{	/* Module/foreign.scm 153 */
																																					BgL_testz00_2677
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 152 */
																																			BgL_testz00_2677
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 151 */
																																	BgL_testz00_2677
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_testz00_2677)
																																{	/* Module/foreign.scm 151 */
																																	return
																																		(obj_t)
																																		(BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																		(BgL_lzd2namezd2_640,
																																			CNST_TABLE_REF
																																			(((long)
																																					0)),
																																			BgL_czd2namezd2_642,
																																			BgL_typez00_639,
																																			BgL_protoz00_641,
																																			((bool_t)
																																				0),
																																			((bool_t)
																																				0),
																																			BgL_foreignz00_26,
																																			BgL_foreignz00_26));
																																}
																															else
																																{	/* Module/foreign.scm 155 */
																																	obj_t
																																		BgL_list2929z00_794;
																																	BgL_list2929z00_794
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string3445z00zzmodule_foreignz00,
																																		BGl_string3451z00zzmodule_foreignz00,
																																		BgL_foreignz00_26,
																																		BgL_list2929z00_794);
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 113 */
																														goto
																															BgL_tagzd21672zd2_648;
																													}
																											}
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 113 */
																								obj_t BgL_cdrzd22100zd2_719;

																								BgL_cdrzd22100zd2_719 =
																									CDR(BgL_foreignz00_26);
																								{	/* Module/foreign.scm 113 */
																									obj_t BgL_cdrzd22106zd2_720;

																									BgL_cdrzd22106zd2_720 =
																										CDR(BgL_cdrzd22100zd2_719);
																									if (NULLP(CDR
																											(BgL_cdrzd22106zd2_720)))
																										{	/* Module/foreign.scm 113 */
																											BgL_typez00_644 =
																												CAR(BgL_foreignz00_26);
																											BgL_lzd2namezd2_645 =
																												CAR
																												(BgL_cdrzd22100zd2_719);
																											BgL_czd2namezd2_646 =
																												CAR
																												(BgL_cdrzd22106zd2_720);
																										BgL_tagzd21671zd2_647:
																											{	/* Module/foreign.scm 166 */
																												bool_t BgL_testz00_2699;

																												if (STRINGP
																													(BgL_czd2namezd2_646))
																													{	/* Module/foreign.scm 166 */
																														if (SYMBOLP
																															(BgL_typez00_644))
																															{	/* Module/foreign.scm 167 */
																																BgL_testz00_2699
																																	=
																																	SYMBOLP
																																	(BgL_lzd2namezd2_645);
																															}
																														else
																															{	/* Module/foreign.scm 167 */
																																BgL_testz00_2699
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 166 */
																														BgL_testz00_2699 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_2699)
																													{	/* Module/foreign.scm 166 */
																														return
																															(obj_t)
																															(BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																															(BgL_lzd2namezd2_645,
																																BgL_czd2namezd2_646,
																																BgL_typez00_644,
																																((bool_t) 0),
																																BgL_foreignz00_26,
																																BFALSE));
																													}
																												else
																													{	/* Module/foreign.scm 169 */
																														obj_t
																															BgL_list2934z00_799;
																														BgL_list2934z00_799
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														return
																															BGl_userzd2errorzd2zztools_errorz00
																															(BGl_string3445z00zzmodule_foreignz00,
																															BGl_string3452z00zzmodule_foreignz00,
																															BgL_foreignz00_26,
																															BgL_list2934z00_799);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 113 */
																											goto
																												BgL_tagzd21672zd2_648;
																										}
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 113 */
																						goto BgL_tagzd21672zd2_648;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 113 */
																				obj_t BgL_cdrzd22159zd2_726;

																				BgL_cdrzd22159zd2_726 =
																					CDR(BgL_foreignz00_26);
																				{	/* Module/foreign.scm 113 */
																					obj_t BgL_cdrzd22165zd2_727;

																					BgL_cdrzd22165zd2_727 =
																						CDR(BgL_cdrzd22159zd2_726);
																					if (PAIRP(BgL_cdrzd22165zd2_727))
																						{	/* Module/foreign.scm 113 */
																							obj_t BgL_cdrzd22170zd2_729;

																							BgL_cdrzd22170zd2_729 =
																								CDR(BgL_cdrzd22165zd2_727);
																							if (PAIRP(BgL_cdrzd22170zd2_729))
																								{	/* Module/foreign.scm 113 */
																									if (NULLP(CDR
																											(BgL_cdrzd22170zd2_729)))
																										{
																											obj_t
																												BgL_czd2namezd2_2728;
																											obj_t BgL_protoz00_2726;

																											obj_t
																												BgL_lzd2namezd2_2724;
																											obj_t BgL_typez00_2722;

																											BgL_typez00_2722 =
																												CAR(BgL_foreignz00_26);
																											BgL_lzd2namezd2_2724 =
																												CAR
																												(BgL_cdrzd22159zd2_726);
																											BgL_protoz00_2726 =
																												CAR
																												(BgL_cdrzd22165zd2_727);
																											BgL_czd2namezd2_2728 =
																												CAR
																												(BgL_cdrzd22170zd2_729);
																											BgL_czd2namezd2_642 =
																												BgL_czd2namezd2_2728;
																											BgL_protoz00_641 =
																												BgL_protoz00_2726;
																											BgL_lzd2namezd2_640 =
																												BgL_lzd2namezd2_2724;
																											BgL_typez00_639 =
																												BgL_typez00_2722;
																											goto
																												BgL_tagzd21670zd2_643;
																										}
																									else
																										{	/* Module/foreign.scm 113 */
																											goto
																												BgL_tagzd21672zd2_648;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 113 */
																									if (NULLP(CDR
																											(BgL_cdrzd22165zd2_727)))
																										{
																											obj_t
																												BgL_czd2namezd2_2737;
																											obj_t
																												BgL_lzd2namezd2_2735;
																											obj_t BgL_typez00_2733;

																											BgL_typez00_2733 =
																												CAR(BgL_foreignz00_26);
																											BgL_lzd2namezd2_2735 =
																												CAR
																												(BgL_cdrzd22159zd2_726);
																											BgL_czd2namezd2_2737 =
																												CAR
																												(BgL_cdrzd22165zd2_727);
																											BgL_czd2namezd2_646 =
																												BgL_czd2namezd2_2737;
																											BgL_lzd2namezd2_645 =
																												BgL_lzd2namezd2_2735;
																											BgL_typez00_644 =
																												BgL_typez00_2733;
																											goto
																												BgL_tagzd21671zd2_647;
																										}
																									else
																										{	/* Module/foreign.scm 113 */
																											goto
																												BgL_tagzd21672zd2_648;
																										}
																								}
																						}
																					else
																						{	/* Module/foreign.scm 113 */
																							goto BgL_tagzd21672zd2_648;
																						}
																				}
																			}
																	}
																else
																	{	/* Module/foreign.scm 113 */
																		goto BgL_tagzd21672zd2_648;
																	}
															}
														else
															{	/* Module/foreign.scm 113 */
																obj_t BgL_cdrzd22261zd2_746;

																BgL_cdrzd22261zd2_746 = CDR(BgL_foreignz00_26);
																if (PAIRP(BgL_cdrzd22261zd2_746))
																	{	/* Module/foreign.scm 113 */
																		obj_t BgL_cdrzd22267zd2_748;

																		BgL_cdrzd22267zd2_748 =
																			CDR(BgL_cdrzd22261zd2_746);
																		if (PAIRP(BgL_cdrzd22267zd2_748))
																			{	/* Module/foreign.scm 113 */
																				obj_t BgL_cdrzd22272zd2_750;

																				BgL_cdrzd22272zd2_750 =
																					CDR(BgL_cdrzd22267zd2_748);
																				if (PAIRP(BgL_cdrzd22272zd2_750))
																					{	/* Module/foreign.scm 113 */
																						if (NULLP(CDR
																								(BgL_cdrzd22272zd2_750)))
																							{
																								obj_t BgL_czd2namezd2_2757;

																								obj_t BgL_protoz00_2755;

																								obj_t BgL_lzd2namezd2_2753;

																								obj_t BgL_typez00_2751;

																								BgL_typez00_2751 =
																									CAR(BgL_foreignz00_26);
																								BgL_lzd2namezd2_2753 =
																									CAR(BgL_cdrzd22261zd2_746);
																								BgL_protoz00_2755 =
																									CAR(BgL_cdrzd22267zd2_748);
																								BgL_czd2namezd2_2757 =
																									CAR(BgL_cdrzd22272zd2_750);
																								BgL_czd2namezd2_642 =
																									BgL_czd2namezd2_2757;
																								BgL_protoz00_641 =
																									BgL_protoz00_2755;
																								BgL_lzd2namezd2_640 =
																									BgL_lzd2namezd2_2753;
																								BgL_typez00_639 =
																									BgL_typez00_2751;
																								goto BgL_tagzd21670zd2_643;
																							}
																						else
																							{	/* Module/foreign.scm 113 */
																								goto BgL_tagzd21672zd2_648;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 113 */
																						obj_t BgL_cdrzd22305zd2_759;

																						BgL_cdrzd22305zd2_759 =
																							CDR(BgL_cdrzd22261zd2_746);
																						if (NULLP(CDR
																								(BgL_cdrzd22305zd2_759)))
																							{
																								obj_t BgL_czd2namezd2_2767;

																								obj_t BgL_lzd2namezd2_2765;

																								obj_t BgL_typez00_2763;

																								BgL_typez00_2763 =
																									CAR(BgL_foreignz00_26);
																								BgL_lzd2namezd2_2765 =
																									CAR(BgL_cdrzd22261zd2_746);
																								BgL_czd2namezd2_2767 =
																									CAR(BgL_cdrzd22305zd2_759);
																								BgL_czd2namezd2_646 =
																									BgL_czd2namezd2_2767;
																								BgL_lzd2namezd2_645 =
																									BgL_lzd2namezd2_2765;
																								BgL_typez00_644 =
																									BgL_typez00_2763;
																								goto BgL_tagzd21671zd2_647;
																							}
																						else
																							{	/* Module/foreign.scm 113 */
																								goto BgL_tagzd21672zd2_648;
																							}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 113 */
																				goto BgL_tagzd21672zd2_648;
																			}
																	}
																else
																	{	/* Module/foreign.scm 113 */
																		goto BgL_tagzd21672zd2_648;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/foreign.scm 113 */
						goto BgL_tagzd21672zd2_648;
					}
			}
		}
	}



/* extern-parser */
	obj_t BGl_externzd2parserzd2zzmodule_foreignz00(obj_t BgL_externz00_27)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 177 */
			{
				obj_t BgL_idz00_817;

				obj_t BgL_czd2namezd2_818;

				obj_t BgL_idz00_813;

				obj_t BgL_protoz00_814;

				obj_t BgL_cnz00_815;

				obj_t BgL_idz00_809;

				obj_t BgL_czd2namezd2_810;

				obj_t BgL_idz00_805;

				obj_t BgL_protoz00_806;

				obj_t BgL_cnz00_807;

				if (PAIRP(BgL_externz00_27))
					{	/* Module/foreign.scm 179 */
						if ((CAR(BgL_externz00_27) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 179 */
								return
									BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00
									(BgL_externz00_27);
							}
						else
							{	/* Module/foreign.scm 179 */
								obj_t BgL_carzd22408zd2_824;

								BgL_carzd22408zd2_824 = CAR(BgL_externz00_27);
								if ((BgL_carzd22408zd2_824 == CNST_TABLE_REF(((long) 6))))
									{	/* Module/foreign.scm 179 */
										return
											BGl_foreignzd2parserzd2zzmodule_foreignz00
											(BgL_externz00_27);
									}
								else
									{	/* Module/foreign.scm 179 */
										if ((BgL_carzd22408zd2_824 == CNST_TABLE_REF(((long) 4))))
											{	/* Module/foreign.scm 179 */
												return
													BGl_foreignzd2parserzd2zzmodule_foreignz00
													(BgL_externz00_27);
											}
										else
											{	/* Module/foreign.scm 179 */
												obj_t BgL_cdrzd22423zd2_827;

												BgL_cdrzd22423zd2_827 = CDR(BgL_externz00_27);
												if (
													(BgL_carzd22408zd2_824 == CNST_TABLE_REF(((long) 7))))
													{	/* Module/foreign.scm 179 */
														if (PAIRP(BgL_cdrzd22423zd2_827))
															{	/* Module/foreign.scm 179 */
																obj_t BgL_carzd22427zd2_830;

																obj_t BgL_cdrzd22428zd2_831;

																BgL_carzd22427zd2_830 =
																	CAR(BgL_cdrzd22423zd2_827);
																BgL_cdrzd22428zd2_831 =
																	CDR(BgL_cdrzd22423zd2_827);
																if (SYMBOLP(BgL_carzd22427zd2_830))
																	{	/* Module/foreign.scm 179 */
																		if (PAIRP(BgL_cdrzd22428zd2_831))
																			{	/* Module/foreign.scm 179 */
																				obj_t BgL_cdrzd22435zd2_834;

																				BgL_cdrzd22435zd2_834 =
																					CDR(BgL_cdrzd22428zd2_831);
																				if (PAIRP(BgL_cdrzd22435zd2_834))
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_carzd22438zd2_836;

																						BgL_carzd22438zd2_836 =
																							CAR(BgL_cdrzd22435zd2_834);
																						if (STRINGP(BgL_carzd22438zd2_836))
																							{	/* Module/foreign.scm 179 */
																								if (NULLP(CDR
																										(BgL_cdrzd22435zd2_834)))
																									{	/* Module/foreign.scm 179 */
																										BgL_idz00_805 =
																											BgL_carzd22427zd2_830;
																										BgL_protoz00_806 =
																											CAR
																											(BgL_cdrzd22428zd2_831);
																										BgL_cnz00_807 =
																											BgL_carzd22438zd2_836;
																									BgL_tagzd22391zd2_808:
																										{	/* Module/foreign.scm 188 */
																											obj_t BgL_pidz00_958;

																											BgL_pidz00_958 =
																												BGl_parsezd2idzd2zzast_identz00
																												(BgL_idz00_805,
																												BGl_findzd2locationzd2zztools_locationz00
																												(BgL_externz00_27));
																											{	/* Module/foreign.scm 188 */
																												obj_t BgL_lnz00_959;

																												BgL_lnz00_959 =
																													CAR(BgL_pidz00_958);
																												{	/* Module/foreign.scm 189 */
																													obj_t BgL_typez00_960;

																													{	/* Module/foreign.scm 190 */
																														obj_t
																															BgL_arg3030z00_968;
																														BgL_arg3030z00_968 =
																															BGl_defaultzd2czd2typez00zzmodule_foreignz00
																															(CDR
																															(BgL_pidz00_958),
																															BgL_externz00_27);
																														{
																															BgL_typez00_bglt
																																BgL_auxz00_2811;
																															BgL_auxz00_2811 =
																																(BgL_typez00_bglt)
																																(BgL_arg3030z00_968);
																															BgL_typez00_960 =
																																(((BgL_typez00_bglt) CREF(BgL_auxz00_2811))->BgL_idz00);
																														}
																													}
																													{	/* Module/foreign.scm 190 */

																														{	/* Module/foreign.scm 191 */
																															bool_t
																																BgL_testz00_2814;
																															{	/* Module/foreign.scm 191 */
																																bool_t
																																	BgL_testz00_2815;
																																{	/* Module/foreign.scm 191 */
																																	obj_t
																																		BgL_xz00_2424;
																																	BgL_xz00_2424
																																		=
																																		BGl_checkzd2idzd2zzast_identz00
																																		(BgL_pidz00_958,
																																		BgL_externz00_27);
																																	BgL_testz00_2815
																																		=
																																		((bool_t)
																																		1);
																																}
																																if (BgL_testz00_2815)
																																	{	/* Module/foreign.scm 191 */
																																		if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_protoz00_806))
																																			{	/* Module/foreign.scm 192 */
																																				BgL_testz00_2814
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		else
																																			{	/* Module/foreign.scm 192 */
																																				BgL_testz00_2814
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																	}
																																else
																																	{	/* Module/foreign.scm 191 */
																																		BgL_testz00_2814
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																															if (BgL_testz00_2814)
																																{	/* Module/foreign.scm 193 */
																																	obj_t
																																		BgL_list3025z00_962;
																																	BgL_list3025z00_962
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string3445z00zzmodule_foreignz00,
																																		BGl_string3453z00zzmodule_foreignz00,
																																		BgL_externz00_27,
																																		BgL_list3025z00_962);
																																}
																															else
																																{	/* Module/foreign.scm 194 */
																																	bool_t
																																		BgL_infixzf3zf3_963;
																																	BgL_infixzf3zf3_963
																																		=
																																		(CAR
																																		(BgL_externz00_27)
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				3)));
																																	return (obj_t)
																																		(BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																		(BgL_lnz00_959,
																																			CNST_TABLE_REF
																																			(((long)
																																					0)),
																																			BgL_cnz00_807,
																																			BgL_typez00_960,
																																			BgL_protoz00_806,
																																			BgL_infixzf3zf3_963,
																																			((bool_t)
																																				1),
																																			BgL_externz00_27,
																																			BFALSE));
																									}}}}}}}
																								else
																									{	/* Module/foreign.scm 179 */
																									BgL_tagzd22393zd2_812:
																										{	/* Module/foreign.scm 205 */
																											obj_t BgL_list3038z00_979;

																											BgL_list3038z00_979 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string3445z00zzmodule_foreignz00,
																												BGl_string3453z00zzmodule_foreignz00,
																												BgL_externz00_27,
																												BgL_list3038z00_979);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 179 */
																								goto BgL_tagzd22393zd2_812;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_cdrzd22485zd2_841;

																						BgL_cdrzd22485zd2_841 =
																							CDR(BgL_externz00_27);
																						{	/* Module/foreign.scm 179 */
																							obj_t BgL_carzd22490zd2_842;

																							obj_t BgL_cdrzd22491zd2_843;

																							BgL_carzd22490zd2_842 =
																								CAR(BgL_cdrzd22485zd2_841);
																							BgL_cdrzd22491zd2_843 =
																								CDR(BgL_cdrzd22485zd2_841);
																							if (SYMBOLP
																								(BgL_carzd22490zd2_842))
																								{	/* Module/foreign.scm 179 */
																									obj_t BgL_carzd22499zd2_845;

																									BgL_carzd22499zd2_845 =
																										CAR(BgL_cdrzd22491zd2_843);
																									if (STRINGP
																										(BgL_carzd22499zd2_845))
																										{	/* Module/foreign.scm 179 */
																											if (NULLP(CDR
																													(BgL_cdrzd22491zd2_843)))
																												{	/* Module/foreign.scm 179 */
																													BgL_idz00_809 =
																														BgL_carzd22490zd2_842;
																													BgL_czd2namezd2_810 =
																														BgL_carzd22499zd2_845;
																												BgL_tagzd22392zd2_811:
																													{	/* Module/foreign.scm 198 */
																														obj_t
																															BgL_pidz00_971;
																														BgL_pidz00_971 =
																															BGl_parsezd2idzd2zzast_identz00
																															(BgL_idz00_809,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_externz00_27));
																														{	/* Module/foreign.scm 198 */
																															obj_t
																																BgL_lzd2namezd2_972;
																															BgL_lzd2namezd2_972
																																=
																																CAR
																																(BgL_pidz00_971);
																															{	/* Module/foreign.scm 199 */
																																obj_t
																																	BgL_typez00_973;
																																{	/* Module/foreign.scm 200 */
																																	obj_t
																																		BgL_arg3035z00_976;
																																	BgL_arg3035z00_976
																																		=
																																		BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																		(CDR
																																		(BgL_pidz00_971),
																																		BgL_externz00_27);
																																	{
																																		BgL_typez00_bglt
																																			BgL_auxz00_2846;
																																		BgL_auxz00_2846
																																			=
																																			(BgL_typez00_bglt)
																																			(BgL_arg3035z00_976);
																																		BgL_typez00_973
																																			=
																																			(((BgL_typez00_bglt) CREF(BgL_auxz00_2846))->BgL_idz00);
																																	}
																																}
																																{	/* Module/foreign.scm 200 */

																																	{	/* Module/foreign.scm 201 */
																																		bool_t
																																			BgL_testz00_2849;
																																		{	/* Module/foreign.scm 201 */
																																			obj_t
																																				BgL_xz00_2425;
																																			BgL_xz00_2425
																																				=
																																				BGl_checkzd2idzd2zzast_identz00
																																				(BgL_pidz00_971,
																																				BgL_externz00_27);
																																			BgL_testz00_2849
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																		if (BgL_testz00_2849)
																																			{	/* Module/foreign.scm 201 */
																																				return
																																					(obj_t)
																																					(BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																																					(BgL_lzd2namezd2_972,
																																						BgL_czd2namezd2_810,
																																						BgL_typez00_973,
																																						((bool_t) 1), BgL_externz00_27, BFALSE));
																																			}
																																		else
																																			{	/* Module/foreign.scm 202 */
																																				obj_t
																																					BgL_list3034z00_975;
																																				BgL_list3034z00_975
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				return
																																					BGl_userzd2errorzd2zztools_errorz00
																																					(BGl_string3445z00zzmodule_foreignz00,
																																					BGl_string3453z00zzmodule_foreignz00,
																																					BgL_externz00_27,
																																					BgL_list3034z00_975);
																																			}
																																	}
																																}
																															}
																														}
																													}
																												}
																											else
																												{	/* Module/foreign.scm 179 */
																													goto
																														BgL_tagzd22393zd2_812;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 179 */
																											goto
																												BgL_tagzd22393zd2_812;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 179 */
																									goto BgL_tagzd22393zd2_812;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 179 */
																				goto BgL_tagzd22393zd2_812;
																			}
																	}
																else
																	{	/* Module/foreign.scm 179 */
																		obj_t BgL_cdrzd22542zd2_849;

																		BgL_cdrzd22542zd2_849 =
																			CDR(BgL_externz00_27);
																		{	/* Module/foreign.scm 179 */
																			obj_t BgL_carzd22545zd2_850;

																			obj_t BgL_cdrzd22546zd2_851;

																			BgL_carzd22545zd2_850 =
																				CAR(BgL_cdrzd22542zd2_849);
																			BgL_cdrzd22546zd2_851 =
																				CDR(BgL_cdrzd22542zd2_849);
																			if (SYMBOLP(BgL_carzd22545zd2_850))
																				{	/* Module/foreign.scm 179 */
																					if (PAIRP(BgL_cdrzd22546zd2_851))
																						{	/* Module/foreign.scm 179 */
																							obj_t BgL_carzd22551zd2_854;

																							BgL_carzd22551zd2_854 =
																								CAR(BgL_cdrzd22546zd2_851);
																							if (STRINGP
																								(BgL_carzd22551zd2_854))
																								{	/* Module/foreign.scm 179 */
																									if (NULLP(CDR
																											(BgL_cdrzd22546zd2_851)))
																										{
																											obj_t
																												BgL_czd2namezd2_2869;
																											obj_t BgL_idz00_2868;

																											BgL_idz00_2868 =
																												BgL_carzd22545zd2_850;
																											BgL_czd2namezd2_2869 =
																												BgL_carzd22551zd2_854;
																											BgL_czd2namezd2_810 =
																												BgL_czd2namezd2_2869;
																											BgL_idz00_809 =
																												BgL_idz00_2868;
																											goto
																												BgL_tagzd22392zd2_811;
																										}
																									else
																										{	/* Module/foreign.scm 179 */
																											goto
																												BgL_tagzd22393zd2_812;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 179 */
																									goto BgL_tagzd22393zd2_812;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 179 */
																							goto BgL_tagzd22393zd2_812;
																						}
																				}
																			else
																				{	/* Module/foreign.scm 179 */
																					goto BgL_tagzd22393zd2_812;
																				}
																		}
																	}
															}
														else
															{	/* Module/foreign.scm 179 */
																goto BgL_tagzd22393zd2_812;
															}
													}
												else
													{	/* Module/foreign.scm 179 */
														obj_t BgL_cdrzd22589zd2_858;

														BgL_cdrzd22589zd2_858 = CDR(BgL_externz00_27);
														if (
															(CAR(BgL_externz00_27) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Module/foreign.scm 179 */
																if (PAIRP(BgL_cdrzd22589zd2_858))
																	{	/* Module/foreign.scm 179 */
																		obj_t BgL_cdrzd22594zd2_861;

																		BgL_cdrzd22594zd2_861 =
																			CDR(BgL_cdrzd22589zd2_858);
																		if (
																			(CAR(BgL_cdrzd22589zd2_858) ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Module/foreign.scm 179 */
																				if (PAIRP(BgL_cdrzd22594zd2_861))
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_carzd22598zd2_864;

																						obj_t BgL_cdrzd22599zd2_865;

																						BgL_carzd22598zd2_864 =
																							CAR(BgL_cdrzd22594zd2_861);
																						BgL_cdrzd22599zd2_865 =
																							CDR(BgL_cdrzd22594zd2_861);
																						if (SYMBOLP(BgL_carzd22598zd2_864))
																							{	/* Module/foreign.scm 179 */
																								if (PAIRP
																									(BgL_cdrzd22599zd2_865))
																									{	/* Module/foreign.scm 179 */
																										obj_t BgL_cdrzd22606zd2_868;

																										BgL_cdrzd22606zd2_868 =
																											CDR
																											(BgL_cdrzd22599zd2_865);
																										if (PAIRP
																											(BgL_cdrzd22606zd2_868))
																											{	/* Module/foreign.scm 179 */
																												obj_t
																													BgL_carzd22609zd2_870;
																												BgL_carzd22609zd2_870 =
																													CAR
																													(BgL_cdrzd22606zd2_868);
																												if (STRINGP
																													(BgL_carzd22609zd2_870))
																													{	/* Module/foreign.scm 179 */
																														if (NULLP(CDR
																																(BgL_cdrzd22606zd2_868)))
																															{
																																obj_t
																																	BgL_cnz00_2902;
																																obj_t
																																	BgL_protoz00_2900;
																																obj_t
																																	BgL_idz00_2899;
																																BgL_idz00_2899 =
																																	BgL_carzd22598zd2_864;
																																BgL_protoz00_2900
																																	=
																																	CAR
																																	(BgL_cdrzd22599zd2_865);
																																BgL_cnz00_2902 =
																																	BgL_carzd22609zd2_870;
																																BgL_cnz00_807 =
																																	BgL_cnz00_2902;
																																BgL_protoz00_806
																																	=
																																	BgL_protoz00_2900;
																																BgL_idz00_805 =
																																	BgL_idz00_2899;
																																goto
																																	BgL_tagzd22391zd2_808;
																															}
																														else
																															{	/* Module/foreign.scm 179 */
																															BgL_tagzd22396zd2_820:
																																{	/* Module/foreign.scm 224 */
																																	obj_t
																																		BgL_list3051z00_998;
																																	BgL_list3051z00_998
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string3445z00zzmodule_foreignz00,
																																		BGl_string3453z00zzmodule_foreignz00,
																																		BgL_externz00_27,
																																		BgL_list3051z00_998);
																																}
																															}
																													}
																												else
																													{	/* Module/foreign.scm 179 */
																														goto
																															BgL_tagzd22396zd2_820;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 179 */
																												goto
																													BgL_tagzd22396zd2_820;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 179 */
																										obj_t BgL_carzd22698zd2_875;

																										BgL_carzd22698zd2_875 =
																											CAR(BgL_externz00_27);
																										if (SYMBOLP
																											(BgL_carzd22698zd2_875))
																											{	/* Module/foreign.scm 179 */
																												obj_t
																													BgL_cdrzd22707zd2_878;
																												BgL_cdrzd22707zd2_878 =
																													CDR
																													(BgL_cdrzd22589zd2_858);
																												{	/* Module/foreign.scm 179 */
																													obj_t
																														BgL_carzd22711zd2_879;
																													BgL_carzd22711zd2_879
																														=
																														CAR
																														(BgL_cdrzd22707zd2_878);
																													if (STRINGP
																														(BgL_carzd22711zd2_879))
																														{	/* Module/foreign.scm 179 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22707zd2_878)))
																																{	/* Module/foreign.scm 179 */
																																	BgL_idz00_813
																																		=
																																		BgL_carzd22698zd2_875;
																																	BgL_protoz00_814
																																		=
																																		CAR
																																		(BgL_cdrzd22589zd2_858);
																																	BgL_cnz00_815
																																		=
																																		BgL_carzd22711zd2_879;
																																BgL_tagzd22394zd2_816:
																																	{	/* Module/foreign.scm 208 */
																																		obj_t
																																			BgL_pidz00_980;
																																		BgL_pidz00_980
																																			=
																																			BGl_parsezd2idzd2zzast_identz00
																																			(BgL_idz00_813,
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_externz00_27));
																																		{	/* Module/foreign.scm 208 */
																																			obj_t
																																				BgL_lnz00_981;
																																			BgL_lnz00_981
																																				=
																																				CAR
																																				(BgL_pidz00_980);
																																			{	/* Module/foreign.scm 209 */
																																				obj_t
																																					BgL_typez00_982;
																																				{	/* Module/foreign.scm 210 */
																																					obj_t
																																						BgL_arg3043z00_987;
																																					BgL_arg3043z00_987
																																						=
																																						BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																						(CDR
																																						(BgL_pidz00_980),
																																						BgL_externz00_27);
																																					{
																																						BgL_typez00_bglt
																																							BgL_auxz00_2920;
																																						BgL_auxz00_2920
																																							=
																																							(BgL_typez00_bglt)
																																							(BgL_arg3043z00_987);
																																						BgL_typez00_982
																																							=
																																							(((BgL_typez00_bglt) CREF(BgL_auxz00_2920))->BgL_idz00);
																																					}
																																				}
																																				{	/* Module/foreign.scm 210 */

																																					{	/* Module/foreign.scm 211 */
																																						bool_t
																																							BgL_testz00_2923;
																																						{	/* Module/foreign.scm 211 */
																																							bool_t
																																								BgL_testz00_2924;
																																							{	/* Module/foreign.scm 211 */
																																								obj_t
																																									BgL_xz00_2426;
																																								BgL_xz00_2426
																																									=
																																									BGl_checkzd2idzd2zzast_identz00
																																									(BgL_pidz00_980,
																																									BgL_externz00_27);
																																								BgL_testz00_2924
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																							if (BgL_testz00_2924)
																																								{	/* Module/foreign.scm 211 */
																																									if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_protoz00_814))
																																										{	/* Module/foreign.scm 212 */
																																											BgL_testz00_2923
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									else
																																										{	/* Module/foreign.scm 212 */
																																											BgL_testz00_2923
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																								}
																																							else
																																								{	/* Module/foreign.scm 211 */
																																									BgL_testz00_2923
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																						}
																																						if (BgL_testz00_2923)
																																							{	/* Module/foreign.scm 213 */
																																								obj_t
																																									BgL_list3040z00_984;
																																								BgL_list3040z00_984
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								return
																																									BGl_userzd2errorzd2zztools_errorz00
																																									(BGl_string3445z00zzmodule_foreignz00,
																																									BGl_string3453z00zzmodule_foreignz00,
																																									BgL_externz00_27,
																																									BgL_list3040z00_984);
																																							}
																																						else
																																							{	/* Module/foreign.scm 211 */
																																								return
																																									(obj_t)
																																									(BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																									(BgL_lnz00_981,
																																										CNST_TABLE_REF
																																										(((long) 0)), BgL_cnz00_815, BgL_typez00_982, BgL_protoz00_814, ((bool_t) 0), ((bool_t) 0), BgL_externz00_27, BFALSE));
																																}}}}}}}
																															else
																																{	/* Module/foreign.scm 179 */
																																	goto
																																		BgL_tagzd22396zd2_820;
																																}
																														}
																													else
																														{	/* Module/foreign.scm 179 */
																															goto
																																BgL_tagzd22396zd2_820;
																														}
																												}
																											}
																										else
																											{	/* Module/foreign.scm 179 */
																												goto
																													BgL_tagzd22396zd2_820;
																											}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 179 */
																								obj_t BgL_carzd22747zd2_884;

																								BgL_carzd22747zd2_884 =
																									CAR(BgL_externz00_27);
																								if (SYMBOLP
																									(BgL_carzd22747zd2_884))
																									{	/* Module/foreign.scm 179 */
																										obj_t BgL_cdrzd22755zd2_887;

																										BgL_cdrzd22755zd2_887 =
																											CDR
																											(BgL_cdrzd22589zd2_858);
																										{	/* Module/foreign.scm 179 */
																											obj_t
																												BgL_carzd22758zd2_888;
																											BgL_carzd22758zd2_888 =
																												CAR
																												(BgL_cdrzd22755zd2_887);
																											if (STRINGP
																												(BgL_carzd22758zd2_888))
																												{	/* Module/foreign.scm 179 */
																													if (NULLP(CDR
																															(BgL_cdrzd22755zd2_887)))
																														{
																															obj_t
																																BgL_cnz00_2947;
																															obj_t
																																BgL_protoz00_2945;
																															obj_t
																																BgL_idz00_2944;
																															BgL_idz00_2944 =
																																BgL_carzd22747zd2_884;
																															BgL_protoz00_2945
																																=
																																CAR
																																(BgL_cdrzd22589zd2_858);
																															BgL_cnz00_2947 =
																																BgL_carzd22758zd2_888;
																															BgL_cnz00_815 =
																																BgL_cnz00_2947;
																															BgL_protoz00_814 =
																																BgL_protoz00_2945;
																															BgL_idz00_813 =
																																BgL_idz00_2944;
																															goto
																																BgL_tagzd22394zd2_816;
																														}
																													else
																														{	/* Module/foreign.scm 179 */
																															goto
																																BgL_tagzd22396zd2_820;
																														}
																												}
																											else
																												{	/* Module/foreign.scm 179 */
																													goto
																														BgL_tagzd22396zd2_820;
																												}
																										}
																									}
																								else
																									{	/* Module/foreign.scm 179 */
																										goto BgL_tagzd22396zd2_820;
																									}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_carzd22796zd2_893;

																						BgL_carzd22796zd2_893 =
																							CAR(BgL_externz00_27);
																						if (SYMBOLP(BgL_carzd22796zd2_893))
																							{	/* Module/foreign.scm 179 */
																								obj_t BgL_carzd22802zd2_896;

																								BgL_carzd22802zd2_896 =
																									CAR(BgL_cdrzd22589zd2_858);
																								if (STRINGP
																									(BgL_carzd22802zd2_896))
																									{	/* Module/foreign.scm 179 */
																										if (NULLP(CDR
																												(BgL_cdrzd22589zd2_858)))
																											{	/* Module/foreign.scm 179 */
																												BgL_idz00_817 =
																													BgL_carzd22796zd2_893;
																												BgL_czd2namezd2_818 =
																													BgL_carzd22802zd2_896;
																											BgL_tagzd22395zd2_819:
																												{	/* Module/foreign.scm 217 */
																													obj_t BgL_pidz00_990;

																													BgL_pidz00_990 =
																														BGl_parsezd2idzd2zzast_identz00
																														(BgL_idz00_817,
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_externz00_27));
																													{	/* Module/foreign.scm 217 */
																														obj_t
																															BgL_lzd2namezd2_991;
																														BgL_lzd2namezd2_991
																															=
																															CAR
																															(BgL_pidz00_990);
																														{	/* Module/foreign.scm 218 */
																															obj_t
																																BgL_typez00_992;
																															{	/* Module/foreign.scm 219 */
																																obj_t
																																	BgL_arg3048z00_995;
																																BgL_arg3048z00_995
																																	=
																																	BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																	(CDR
																																	(BgL_pidz00_990),
																																	BgL_externz00_27);
																																{
																																	BgL_typez00_bglt
																																		BgL_auxz00_2962;
																																	BgL_auxz00_2962
																																		=
																																		(BgL_typez00_bglt)
																																		(BgL_arg3048z00_995);
																																	BgL_typez00_992
																																		=
																																		(((BgL_typez00_bglt) CREF(BgL_auxz00_2962))->BgL_idz00);
																																}
																															}
																															{	/* Module/foreign.scm 219 */

																																{	/* Module/foreign.scm 220 */
																																	bool_t
																																		BgL_testz00_2965;
																																	{	/* Module/foreign.scm 220 */
																																		obj_t
																																			BgL_xz00_2427;
																																		BgL_xz00_2427
																																			=
																																			BGl_checkzd2idzd2zzast_identz00
																																			(BgL_pidz00_990,
																																			BgL_externz00_27);
																																		BgL_testz00_2965
																																			=
																																			((bool_t)
																																			1);
																																	}
																																	if (BgL_testz00_2965)
																																		{	/* Module/foreign.scm 220 */
																																			return
																																				(obj_t)
																																				(BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																																				(BgL_lzd2namezd2_991,
																																					BgL_czd2namezd2_818,
																																					BgL_typez00_992,
																																					((bool_t) 0), BgL_externz00_27, BFALSE));
																																		}
																																	else
																																		{	/* Module/foreign.scm 221 */
																																			obj_t
																																				BgL_list3047z00_994;
																																			BgL_list3047z00_994
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			return
																																				BGl_userzd2errorzd2zztools_errorz00
																																				(BGl_string3445z00zzmodule_foreignz00,
																																				BGl_string3453z00zzmodule_foreignz00,
																																				BgL_externz00_27,
																																				BgL_list3047z00_994);
																																		}
																																}
																															}
																														}
																													}
																												}
																											}
																										else
																											{	/* Module/foreign.scm 179 */
																												goto
																													BgL_tagzd22396zd2_820;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 179 */
																										goto BgL_tagzd22396zd2_820;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 179 */
																								goto BgL_tagzd22396zd2_820;
																							}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 179 */
																				obj_t BgL_carzd22824zd2_900;

																				BgL_carzd22824zd2_900 =
																					CAR(BgL_externz00_27);
																				if (SYMBOLP(BgL_carzd22824zd2_900))
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_cdrzd22832zd2_903;

																						BgL_cdrzd22832zd2_903 =
																							CDR(BgL_cdrzd22589zd2_858);
																						if (PAIRP(BgL_cdrzd22832zd2_903))
																							{	/* Module/foreign.scm 179 */
																								obj_t BgL_carzd22835zd2_905;

																								BgL_carzd22835zd2_905 =
																									CAR(BgL_cdrzd22832zd2_903);
																								if (STRINGP
																									(BgL_carzd22835zd2_905))
																									{	/* Module/foreign.scm 179 */
																										if (NULLP(CDR
																												(BgL_cdrzd22832zd2_903)))
																											{
																												obj_t BgL_cnz00_2986;

																												obj_t BgL_protoz00_2984;

																												obj_t BgL_idz00_2983;

																												BgL_idz00_2983 =
																													BgL_carzd22824zd2_900;
																												BgL_protoz00_2984 =
																													CAR
																													(BgL_cdrzd22589zd2_858);
																												BgL_cnz00_2986 =
																													BgL_carzd22835zd2_905;
																												BgL_cnz00_815 =
																													BgL_cnz00_2986;
																												BgL_protoz00_814 =
																													BgL_protoz00_2984;
																												BgL_idz00_813 =
																													BgL_idz00_2983;
																												goto
																													BgL_tagzd22394zd2_816;
																											}
																										else
																											{	/* Module/foreign.scm 179 */
																												goto
																													BgL_tagzd22396zd2_820;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 179 */
																										goto BgL_tagzd22396zd2_820;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 179 */
																								obj_t BgL_cdrzd22856zd2_911;

																								BgL_cdrzd22856zd2_911 =
																									CDR(BgL_externz00_27);
																								{	/* Module/foreign.scm 179 */
																									obj_t BgL_carzd22862zd2_913;

																									BgL_carzd22862zd2_913 =
																										CAR(BgL_cdrzd22856zd2_911);
																									if (STRINGP
																										(BgL_carzd22862zd2_913))
																										{	/* Module/foreign.scm 179 */
																											if (NULLP(CDR
																													(BgL_cdrzd22856zd2_911)))
																												{
																													obj_t
																														BgL_czd2namezd2_2995;
																													obj_t BgL_idz00_2994;

																													BgL_idz00_2994 =
																														BgL_carzd22824zd2_900;
																													BgL_czd2namezd2_2995 =
																														BgL_carzd22862zd2_913;
																													BgL_czd2namezd2_818 =
																														BgL_czd2namezd2_2995;
																													BgL_idz00_817 =
																														BgL_idz00_2994;
																													goto
																														BgL_tagzd22395zd2_819;
																												}
																											else
																												{	/* Module/foreign.scm 179 */
																													goto
																														BgL_tagzd22396zd2_820;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 179 */
																											goto
																												BgL_tagzd22396zd2_820;
																										}
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 179 */
																						goto BgL_tagzd22396zd2_820;
																					}
																			}
																	}
																else
																	{	/* Module/foreign.scm 179 */
																		goto BgL_tagzd22396zd2_820;
																	}
															}
														else
															{	/* Module/foreign.scm 179 */
																obj_t BgL_carzd22922zd2_926;

																BgL_carzd22922zd2_926 = CAR(BgL_externz00_27);
																if (SYMBOLP(BgL_carzd22922zd2_926))
																	{	/* Module/foreign.scm 179 */
																		if (PAIRP(BgL_cdrzd22589zd2_858))
																			{	/* Module/foreign.scm 179 */
																				obj_t BgL_cdrzd22930zd2_930;

																				BgL_cdrzd22930zd2_930 =
																					CDR(BgL_cdrzd22589zd2_858);
																				if (PAIRP(BgL_cdrzd22930zd2_930))
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_carzd22933zd2_932;

																						BgL_carzd22933zd2_932 =
																							CAR(BgL_cdrzd22930zd2_930);
																						if (STRINGP(BgL_carzd22933zd2_932))
																							{	/* Module/foreign.scm 179 */
																								if (NULLP(CDR
																										(BgL_cdrzd22930zd2_930)))
																									{
																										obj_t BgL_cnz00_3013;

																										obj_t BgL_protoz00_3011;

																										obj_t BgL_idz00_3010;

																										BgL_idz00_3010 =
																											BgL_carzd22922zd2_926;
																										BgL_protoz00_3011 =
																											CAR
																											(BgL_cdrzd22589zd2_858);
																										BgL_cnz00_3013 =
																											BgL_carzd22933zd2_932;
																										BgL_cnz00_815 =
																											BgL_cnz00_3013;
																										BgL_protoz00_814 =
																											BgL_protoz00_3011;
																										BgL_idz00_813 =
																											BgL_idz00_3010;
																										goto BgL_tagzd22394zd2_816;
																									}
																								else
																									{	/* Module/foreign.scm 179 */
																										goto BgL_tagzd22396zd2_820;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 179 */
																								goto BgL_tagzd22396zd2_820;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 179 */
																						obj_t BgL_cdrzd22957zd2_938;

																						BgL_cdrzd22957zd2_938 =
																							CDR(BgL_externz00_27);
																						{	/* Module/foreign.scm 179 */
																							obj_t BgL_carzd22965zd2_940;

																							BgL_carzd22965zd2_940 =
																								CAR(BgL_cdrzd22957zd2_938);
																							if (STRINGP
																								(BgL_carzd22965zd2_940))
																								{	/* Module/foreign.scm 179 */
																									if (NULLP(CDR
																											(BgL_cdrzd22957zd2_938)))
																										{
																											obj_t
																												BgL_czd2namezd2_3022;
																											obj_t BgL_idz00_3021;

																											BgL_idz00_3021 =
																												BgL_carzd22922zd2_926;
																											BgL_czd2namezd2_3022 =
																												BgL_carzd22965zd2_940;
																											BgL_czd2namezd2_818 =
																												BgL_czd2namezd2_3022;
																											BgL_idz00_817 =
																												BgL_idz00_3021;
																											goto
																												BgL_tagzd22395zd2_819;
																										}
																									else
																										{	/* Module/foreign.scm 179 */
																											goto
																												BgL_tagzd22396zd2_820;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 179 */
																									goto BgL_tagzd22396zd2_820;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 179 */
																				goto BgL_tagzd22396zd2_820;
																			}
																	}
																else
																	{	/* Module/foreign.scm 179 */
																		goto BgL_tagzd22396zd2_820;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/foreign.scm 179 */
						goto BgL_tagzd22396zd2_820;
					}
			}
		}
	}



/* parse-c-foreign-type */
	obj_t BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00(obj_t
		BgL_typez00_28)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 229 */
			{
				obj_t BgL_idz00_1002;

				obj_t BgL_tzd2expzd2_1003;

				obj_t BgL_namez00_1004;

				if (PAIRP(BgL_typez00_28))
					{	/* Module/foreign.scm 230 */
						obj_t BgL_cdrzd23041zd2_1009;

						BgL_cdrzd23041zd2_1009 = CDR(BgL_typez00_28);
						if ((CAR(BgL_typez00_28) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 230 */
								if (PAIRP(BgL_cdrzd23041zd2_1009))
									{	/* Module/foreign.scm 230 */
										obj_t BgL_carzd23044zd2_1012;

										obj_t BgL_cdrzd23045zd2_1013;

										BgL_carzd23044zd2_1012 = CAR(BgL_cdrzd23041zd2_1009);
										BgL_cdrzd23045zd2_1013 = CDR(BgL_cdrzd23041zd2_1009);
										if (SYMBOLP(BgL_carzd23044zd2_1012))
											{	/* Module/foreign.scm 230 */
												if (PAIRP(BgL_cdrzd23045zd2_1013))
													{	/* Module/foreign.scm 230 */
														obj_t BgL_carzd23050zd2_1016;

														BgL_carzd23050zd2_1016 =
															CAR(BgL_cdrzd23045zd2_1013);
														if (STRINGP(BgL_carzd23050zd2_1016))
															{	/* Module/foreign.scm 230 */
																if (NULLP(CDR(BgL_cdrzd23045zd2_1013)))
																	{	/* Module/foreign.scm 230 */
																		obj_t BgL_idz00_2019;

																		obj_t BgL_namez00_2020;

																		BgL_idz00_2019 = BgL_carzd23044zd2_1012;
																		BgL_namez00_2020 = BgL_carzd23050zd2_1016;
																		return
																			(obj_t)
																			(BGl_declarezd2typez12zc0zztype_envz00
																			(BgL_idz00_2019, BgL_namez00_2020,
																				CNST_TABLE_REF(((long) 9))));
																	}
																else
																	{	/* Module/foreign.scm 230 */
																		obj_t BgL_carzd23070zd2_1020;

																		obj_t BgL_cdrzd23071zd2_1021;

																		BgL_carzd23070zd2_1020 =
																			CAR(BgL_cdrzd23041zd2_1009);
																		BgL_cdrzd23071zd2_1021 =
																			CDR(BgL_cdrzd23041zd2_1009);
																		if (SYMBOLP(BgL_carzd23070zd2_1020))
																			{	/* Module/foreign.scm 230 */
																				obj_t BgL_cdrzd23081zd2_1023;

																				BgL_cdrzd23081zd2_1023 =
																					CDR(BgL_cdrzd23071zd2_1021);
																				if (PAIRP(BgL_cdrzd23081zd2_1023))
																					{	/* Module/foreign.scm 230 */
																						obj_t BgL_carzd23085zd2_1025;

																						BgL_carzd23085zd2_1025 =
																							CAR(BgL_cdrzd23081zd2_1023);
																						if (STRINGP(BgL_carzd23085zd2_1025))
																							{	/* Module/foreign.scm 230 */
																								if (NULLP(CDR
																										(BgL_cdrzd23081zd2_1023)))
																									{	/* Module/foreign.scm 230 */
																										BgL_idz00_1002 =
																											BgL_carzd23070zd2_1020;
																										BgL_tzd2expzd2_1003 =
																											CAR
																											(BgL_cdrzd23071zd2_1021);
																										BgL_namez00_1004 =
																											BgL_carzd23085zd2_1025;
																									BgL_tagzd23032zd2_1005:
																										if (BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(BgL_tzd2expzd2_1003))
																											{	/* Module/foreign.scm 235 */
																												obj_t BgL_ctypez00_1057;

																												obj_t BgL_locz00_1058;

																												BgL_ctypez00_1057 =
																													BGl_declarezd2czd2typez12z12zzforeign_ctypez00
																													(BgL_typez00_28,
																													BgL_idz00_1002,
																													BgL_tzd2expzd2_1003,
																													BgL_namez00_1004);
																												BgL_locz00_1058 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_typez00_28);
																												if (BGl_iszd2azf3z21zz__objectz00(BgL_ctypez00_1057, BGl_typez00zztype_typez00))
																													{	/* Module/foreign.scm 240 */
																														obj_t
																															BgL_accessesz00_1060;
																														BgL_accessesz00_1060
																															=
																															BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00
																															(
																															(BgL_typez00_bglt)
																															(BgL_ctypez00_1057),
																															(BgL_typez00_bglt)
																															(BgL_ctypez00_1057),
																															BgL_locz00_1058);
																														{	/* Module/foreign.scm 241 */
																															obj_t
																																BgL_accessesz00_2056;
																															BgL_accessesz00_2056
																																=
																																BgL_accessesz00_1060;
																															BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00
																																=
																																bgl_append2
																																(BgL_accessesz00_2056,
																																BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00);
																														}
																														{	/* Module/foreign.scm 245 */
																															bool_t
																																BgL_testz00_3070;
																															if (BGl_iszd2azf3z21zz__objectz00(BgL_ctypez00_1057, BGl_caliasz00zzforeign_ctypez00))
																																{	/* Module/foreign.scm 245 */
																																	obj_t
																																		BgL_arg3106z00_1083;
																																	{
																																		BgL_typez00_bglt
																																			BgL_auxz00_3073;
																																		BgL_auxz00_3073
																																			=
																																			(BgL_typez00_bglt)
																																			(
																																			(BgL_caliasz00_bglt)
																																			(BgL_ctypez00_1057));
																																		BgL_arg3106z00_1083
																																			=
																																			(((BgL_typez00_bglt) CREF(BgL_auxz00_3073))->BgL_aliasz00);
																																	}
																																	BgL_testz00_3070
																																		=
																																		BGl_iszd2azf3z21zz__objectz00
																																		(BgL_arg3106z00_1083,
																																		BGl_cstructz00zzforeign_ctypez00);
																																}
																															else
																																{	/* Module/foreign.scm 245 */
																																	BgL_testz00_3070
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_testz00_3070)
																																{	/* Module/foreign.scm 247 */
																																	obj_t
																																		BgL_arg3085z00_1062;
																																	{	/* Module/foreign.scm 247 */
																																		obj_t
																																			BgL_arg3086z00_1063;
																																		obj_t
																																			BgL_arg3087z00_1064;
																																		BgL_arg3086z00_1063
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				5));
																																		{	/* Module/foreign.scm 247 */
																																			obj_t
																																				BgL_arg3088z00_1065;
																																			obj_t
																																				BgL_arg3089z00_1066;
																																			obj_t
																																				BgL_arg3090z00_1067;
																																			{	/* Module/foreign.scm 247 */
																																				obj_t
																																					BgL_arg3095z00_1072;
																																				{	/* Module/foreign.scm 247 */
																																					obj_t
																																						BgL_arg3096z00_1073;
																																					obj_t
																																						BgL_arg3097z00_1074;
																																					{	/* Module/foreign.scm 247 */
																																						obj_t
																																							BgL_res3437z00_2062;
																																						{	/* Module/foreign.scm 247 */
																																							obj_t
																																								BgL_arg2063z00_2061;
																																							BgL_arg2063z00_2061
																																								=
																																								SYMBOL_TO_STRING
																																								(BgL_idz00_1002);
																																							BgL_res3437z00_2062
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg2063z00_2061);
																																						}
																																						BgL_arg3096z00_1073
																																							=
																																							BgL_res3437z00_2062;
																																					}
																																					{	/* Module/foreign.scm 247 */
																																						obj_t
																																							BgL_res3438z00_2065;
																																						{	/* Module/foreign.scm 247 */
																																							obj_t
																																								BgL_symbolz00_2063;
																																							BgL_symbolz00_2063
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 8));
																																							{	/* Module/foreign.scm 247 */
																																								obj_t
																																									BgL_arg2063z00_2064;
																																								BgL_arg2063z00_2064
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_2063);
																																								BgL_res3438z00_2065
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_2064);
																																						}}
																																						BgL_arg3097z00_1074
																																							=
																																							BgL_res3438z00_2065;
																																					}
																																					{	/* Module/foreign.scm 247 */
																																						obj_t
																																							BgL_list3098z00_1075;
																																						{	/* Module/foreign.scm 247 */
																																							obj_t
																																								BgL_arg3099z00_1076;
																																							BgL_arg3099z00_1076
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3097z00_1074,
																																								BNIL);
																																							BgL_list3098z00_1075
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3096z00_1073,
																																								BgL_arg3099z00_1076);
																																						}
																																						BgL_arg3095z00_1072
																																							=
																																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																							(BgL_list3098z00_1075);
																																				}}
																																				BgL_arg3088z00_1065
																																					=
																																					string_to_symbol
																																					(BSTRING_TO_STRING
																																					(BgL_arg3095z00_1072));
																																			}
																																			{	/* Module/foreign.scm 248 */
																																				obj_t
																																					BgL_arg3100z00_1077;
																																				{	/* Module/foreign.scm 248 */
																																					obj_t
																																						BgL_arg3101z00_1078;
																																					obj_t
																																						BgL_arg3102z00_1079;
																																					{	/* Module/foreign.scm 248 */
																																						obj_t
																																							BgL_res3439z00_2069;
																																						{	/* Module/foreign.scm 248 */
																																							obj_t
																																								BgL_symbolz00_2067;
																																							BgL_symbolz00_2067
																																								=
																																								BgL_tzd2expzd2_1003;
																																							{	/* Module/foreign.scm 248 */
																																								obj_t
																																									BgL_arg2063z00_2068;
																																								BgL_arg2063z00_2068
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_2067);
																																								BgL_res3439z00_2069
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_2068);
																																						}}
																																						BgL_arg3101z00_1078
																																							=
																																							BgL_res3439z00_2069;
																																					}
																																					{	/* Module/foreign.scm 248 */
																																						obj_t
																																							BgL_res3440z00_2072;
																																						{	/* Module/foreign.scm 248 */
																																							obj_t
																																								BgL_symbolz00_2070;
																																							BgL_symbolz00_2070
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 8));
																																							{	/* Module/foreign.scm 248 */
																																								obj_t
																																									BgL_arg2063z00_2071;
																																								BgL_arg2063z00_2071
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_2070);
																																								BgL_res3440z00_2072
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_2071);
																																						}}
																																						BgL_arg3102z00_1079
																																							=
																																							BgL_res3440z00_2072;
																																					}
																																					{	/* Module/foreign.scm 248 */
																																						obj_t
																																							BgL_list3103z00_1080;
																																						{	/* Module/foreign.scm 248 */
																																							obj_t
																																								BgL_arg3104z00_1081;
																																							BgL_arg3104z00_1081
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3102z00_1079,
																																								BNIL);
																																							BgL_list3103z00_1080
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3101z00_1078,
																																								BgL_arg3104z00_1081);
																																						}
																																						BgL_arg3100z00_1077
																																							=
																																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																							(BgL_list3103z00_1080);
																																				}}
																																				BgL_arg3089z00_1066
																																					=
																																					string_to_symbol
																																					(BSTRING_TO_STRING
																																					(BgL_arg3100z00_1077));
																																			}
																																			BgL_arg3090z00_1067
																																				=
																																				BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
																																				(
																																				(BgL_typez00_bglt)
																																				((BgL_caliasz00_bglt) (BgL_ctypez00_1057)));
																																			{	/* Module/foreign.scm 247 */
																																				obj_t
																																					BgL_list3092z00_1069;
																																				{	/* Module/foreign.scm 247 */
																																					obj_t
																																						BgL_arg3093z00_1070;
																																					{	/* Module/foreign.scm 247 */
																																						obj_t
																																							BgL_arg3094z00_1071;
																																						BgL_arg3094z00_1071
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_arg3093z00_1070
																																							=
																																							MAKE_PAIR
																																							(BgL_arg3090z00_1067,
																																							BgL_arg3094z00_1071);
																																					}
																																					BgL_list3092z00_1069
																																						=
																																						MAKE_PAIR
																																						(BgL_arg3089z00_1066,
																																						BgL_arg3093z00_1070);
																																				}
																																				BgL_arg3087z00_1064
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg3088z00_1065,
																																					BgL_list3092z00_1069);
																																		}}
																																		BgL_arg3085z00_1062
																																			=
																																			MAKE_PAIR
																																			(BgL_arg3086z00_1063,
																																			BgL_arg3087z00_1064);
																																	}
																																	BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																																		(BgL_arg3085z00_1062);
																																}
																															else
																																{	/* Module/foreign.scm 245 */
																																	BFALSE;
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 239 */
																														BFALSE;
																													}
																												return BUNSPEC;
																											}
																										else
																											{	/* Module/foreign.scm 251 */
																												obj_t
																													BgL_list3107z00_1084;
																												BgL_list3107z00_1084 =
																													MAKE_PAIR(BNIL, BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string3445z00zzmodule_foreignz00,
																													BGl_string3454z00zzmodule_foreignz00,
																													BgL_typez00_28,
																													BgL_list3107z00_1084);
																											}
																									}
																								else
																									{	/* Module/foreign.scm 230 */
																									BgL_tagzd23033zd2_1006:
																										{	/* Module/foreign.scm 253 */
																											obj_t
																												BgL_list3108z00_1085;
																											BgL_list3108z00_1085 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string3445z00zzmodule_foreignz00,
																												BGl_string3454z00zzmodule_foreignz00,
																												BgL_typez00_28,
																												BgL_list3108z00_1085);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 230 */
																								goto BgL_tagzd23033zd2_1006;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 230 */
																						goto BgL_tagzd23033zd2_1006;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 230 */
																				goto BgL_tagzd23033zd2_1006;
																			}
																	}
															}
														else
															{	/* Module/foreign.scm 230 */
																obj_t BgL_carzd23103zd2_1032;

																obj_t BgL_cdrzd23104zd2_1033;

																BgL_carzd23103zd2_1032 =
																	CAR(BgL_cdrzd23041zd2_1009);
																BgL_cdrzd23104zd2_1033 =
																	CDR(BgL_cdrzd23041zd2_1009);
																if (SYMBOLP(BgL_carzd23103zd2_1032))
																	{	/* Module/foreign.scm 230 */
																		obj_t BgL_cdrzd23113zd2_1035;

																		BgL_cdrzd23113zd2_1035 =
																			CDR(BgL_cdrzd23104zd2_1033);
																		if (PAIRP(BgL_cdrzd23113zd2_1035))
																			{	/* Module/foreign.scm 230 */
																				obj_t BgL_carzd23116zd2_1037;

																				BgL_carzd23116zd2_1037 =
																					CAR(BgL_cdrzd23113zd2_1035);
																				if (STRINGP(BgL_carzd23116zd2_1037))
																					{	/* Module/foreign.scm 230 */
																						if (NULLP(CDR
																								(BgL_cdrzd23113zd2_1035)))
																							{
																								obj_t BgL_namez00_3129;

																								obj_t BgL_tzd2expzd2_3127;

																								obj_t BgL_idz00_3126;

																								BgL_idz00_3126 =
																									BgL_carzd23103zd2_1032;
																								BgL_tzd2expzd2_3127 =
																									CAR(BgL_cdrzd23104zd2_1033);
																								BgL_namez00_3129 =
																									BgL_carzd23116zd2_1037;
																								BgL_namez00_1004 =
																									BgL_namez00_3129;
																								BgL_tzd2expzd2_1003 =
																									BgL_tzd2expzd2_3127;
																								BgL_idz00_1002 = BgL_idz00_3126;
																								goto BgL_tagzd23032zd2_1005;
																							}
																						else
																							{	/* Module/foreign.scm 230 */
																								goto BgL_tagzd23033zd2_1006;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 230 */
																						goto BgL_tagzd23033zd2_1006;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 230 */
																				goto BgL_tagzd23033zd2_1006;
																			}
																	}
																else
																	{	/* Module/foreign.scm 230 */
																		goto BgL_tagzd23033zd2_1006;
																	}
															}
													}
												else
													{	/* Module/foreign.scm 230 */
														goto BgL_tagzd23033zd2_1006;
													}
											}
										else
											{	/* Module/foreign.scm 230 */
												obj_t BgL_carzd23139zd2_1043;

												obj_t BgL_cdrzd23140zd2_1044;

												BgL_carzd23139zd2_1043 = CAR(BgL_cdrzd23041zd2_1009);
												BgL_cdrzd23140zd2_1044 = CDR(BgL_cdrzd23041zd2_1009);
												if (SYMBOLP(BgL_carzd23139zd2_1043))
													{	/* Module/foreign.scm 230 */
														if (PAIRP(BgL_cdrzd23140zd2_1044))
															{	/* Module/foreign.scm 230 */
																obj_t BgL_cdrzd23147zd2_1047;

																BgL_cdrzd23147zd2_1047 =
																	CDR(BgL_cdrzd23140zd2_1044);
																if (PAIRP(BgL_cdrzd23147zd2_1047))
																	{	/* Module/foreign.scm 230 */
																		obj_t BgL_carzd23150zd2_1049;

																		BgL_carzd23150zd2_1049 =
																			CAR(BgL_cdrzd23147zd2_1047);
																		if (STRINGP(BgL_carzd23150zd2_1049))
																			{	/* Module/foreign.scm 230 */
																				if (NULLP(CDR(BgL_cdrzd23147zd2_1047)))
																					{
																						obj_t BgL_namez00_3148;

																						obj_t BgL_tzd2expzd2_3146;

																						obj_t BgL_idz00_3145;

																						BgL_idz00_3145 =
																							BgL_carzd23139zd2_1043;
																						BgL_tzd2expzd2_3146 =
																							CAR(BgL_cdrzd23140zd2_1044);
																						BgL_namez00_3148 =
																							BgL_carzd23150zd2_1049;
																						BgL_namez00_1004 = BgL_namez00_3148;
																						BgL_tzd2expzd2_1003 =
																							BgL_tzd2expzd2_3146;
																						BgL_idz00_1002 = BgL_idz00_3145;
																						goto BgL_tagzd23032zd2_1005;
																					}
																				else
																					{	/* Module/foreign.scm 230 */
																						goto BgL_tagzd23033zd2_1006;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 230 */
																				goto BgL_tagzd23033zd2_1006;
																			}
																	}
																else
																	{	/* Module/foreign.scm 230 */
																		goto BgL_tagzd23033zd2_1006;
																	}
															}
														else
															{	/* Module/foreign.scm 230 */
																goto BgL_tagzd23033zd2_1006;
															}
													}
												else
													{	/* Module/foreign.scm 230 */
														goto BgL_tagzd23033zd2_1006;
													}
											}
									}
								else
									{	/* Module/foreign.scm 230 */
										goto BgL_tagzd23033zd2_1006;
									}
							}
						else
							{	/* Module/foreign.scm 230 */
								goto BgL_tagzd23033zd2_1006;
							}
					}
				else
					{	/* Module/foreign.scm 230 */
						goto BgL_tagzd23033zd2_1006;
					}
			}
		}
	}



/* check-c-foreign-type-exp? */
	bool_t BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(obj_t
		BgL_tzd2expzd2_29)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 258 */
			{
				obj_t BgL_slotsz00_1095;

				obj_t BgL_slotsz00_1087;

				if (SYMBOLP(BgL_tzd2expzd2_29))
					{	/* Module/foreign.scm 259 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/foreign.scm 259 */
						if (PAIRP(BgL_tzd2expzd2_29))
							{	/* Module/foreign.scm 259 */
								obj_t BgL_carzd23188zd2_1101;

								obj_t BgL_cdrzd23189zd2_1102;

								BgL_carzd23188zd2_1101 = CAR(BgL_tzd2expzd2_29);
								BgL_cdrzd23189zd2_1102 = CDR(BgL_tzd2expzd2_29);
								if ((BgL_carzd23188zd2_1101 == CNST_TABLE_REF(((long) 10))))
									{	/* Module/foreign.scm 259 */
										BgL_slotsz00_1087 = BgL_cdrzd23189zd2_1102;
									BgL_tagzd23174zd2_1088:
										{
											obj_t BgL_slotsz00_1219;

											BgL_slotsz00_1219 = BgL_slotsz00_1087;
										BgL_zc3anonymousza33205ze3z83_1220:
											if (NULLP(BgL_slotsz00_1219))
												{	/* Module/foreign.scm 264 */
													return ((bool_t) 1);
												}
											else
												{

													{	/* Module/foreign.scm 266 */
														obj_t BgL_ezd23442zd2_1224;

														BgL_ezd23442zd2_1224 = CAR(BgL_slotsz00_1219);
														if (PAIRP(BgL_ezd23442zd2_1224))
															{	/* Module/foreign.scm 266 */
																obj_t BgL_cdrzd23444zd2_1226;

																BgL_cdrzd23444zd2_1226 =
																	CDR(BgL_ezd23442zd2_1224);
																{	/* Module/foreign.scm 266 */
																	bool_t BgL_testz00_3164;

																	{	/* Module/foreign.scm 266 */
																		obj_t BgL_auxz00_3165;

																		BgL_auxz00_3165 = CAR(BgL_ezd23442zd2_1224);
																		BgL_testz00_3164 = SYMBOLP(BgL_auxz00_3165);
																	}
																	if (BgL_testz00_3164)
																		{	/* Module/foreign.scm 266 */
																			if (PAIRP(BgL_cdrzd23444zd2_1226))
																				{	/* Module/foreign.scm 266 */
																					obj_t BgL_cdrzd23446zd2_1229;

																					BgL_cdrzd23446zd2_1229 =
																						CDR(BgL_cdrzd23444zd2_1226);
																					{	/* Module/foreign.scm 266 */
																						bool_t BgL_testz00_3171;

																						{	/* Module/foreign.scm 266 */
																							obj_t BgL_auxz00_3172;

																							BgL_auxz00_3172 =
																								CAR(BgL_cdrzd23444zd2_1226);
																							BgL_testz00_3171 =
																								SYMBOLP(BgL_auxz00_3172);
																						}
																						if (BgL_testz00_3171)
																							{	/* Module/foreign.scm 266 */
																								if (PAIRP
																									(BgL_cdrzd23446zd2_1229))
																									{	/* Module/foreign.scm 266 */
																										bool_t BgL_testz00_3177;

																										{	/* Module/foreign.scm 266 */
																											obj_t BgL_auxz00_3178;

																											BgL_auxz00_3178 =
																												CAR
																												(BgL_cdrzd23446zd2_1229);
																											BgL_testz00_3177 =
																												STRINGP
																												(BgL_auxz00_3178);
																										}
																										if (BgL_testz00_3177)
																											{	/* Module/foreign.scm 266 */
																												if (NULLP(CDR
																														(BgL_cdrzd23446zd2_1229)))
																													{	/* Module/foreign.scm 266 */
																														{
																															obj_t
																																BgL_slotsz00_3184;
																															BgL_slotsz00_3184
																																=
																																CDR
																																(BgL_slotsz00_1219);
																															BgL_slotsz00_1219
																																=
																																BgL_slotsz00_3184;
																															goto
																																BgL_zc3anonymousza33205ze3z83_1220;
																														}
																													}
																												else
																													{	/* Module/foreign.scm 266 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Module/foreign.scm 266 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Module/foreign.scm 266 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Module/foreign.scm 266 */
																								return ((bool_t) 0);
																							}
																					}
																				}
																			else
																				{	/* Module/foreign.scm 266 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/foreign.scm 266 */
																			return ((bool_t) 0);
																		}
																}
															}
														else
															{	/* Module/foreign.scm 266 */
																return ((bool_t) 0);
															}
													}
												}
										}
									}
								else
									{	/* Module/foreign.scm 259 */
										if ((BgL_carzd23188zd2_1101 == CNST_TABLE_REF(((long) 11))))
											{
												obj_t BgL_slotsz00_3189;

												BgL_slotsz00_3189 = BgL_cdrzd23189zd2_1102;
												BgL_slotsz00_1087 = BgL_slotsz00_3189;
												goto BgL_tagzd23174zd2_1088;
											}
										else
											{	/* Module/foreign.scm 259 */
												if (
													(BgL_carzd23188zd2_1101 ==
														CNST_TABLE_REF(((long) 12))))
													{	/* Module/foreign.scm 259 */
														if (NULLP(CDR(BgL_tzd2expzd2_29)))
															{	/* Module/foreign.scm 259 */
																return ((bool_t) 1);
															}
														else
															{	/* Module/foreign.scm 259 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Module/foreign.scm 259 */
														obj_t BgL_cdrzd23236zd2_1115;

														BgL_cdrzd23236zd2_1115 = CDR(BgL_tzd2expzd2_29);
														if (
															(CAR(BgL_tzd2expzd2_29) ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Module/foreign.scm 259 */
																if (PAIRP(BgL_cdrzd23236zd2_1115))
																	{	/* Module/foreign.scm 259 */
																		bool_t BgL_testz00_3203;

																		{	/* Module/foreign.scm 259 */
																			obj_t BgL_auxz00_3204;

																			BgL_auxz00_3204 =
																				CAR(BgL_cdrzd23236zd2_1115);
																			BgL_testz00_3203 =
																				SYMBOLP(BgL_auxz00_3204);
																		}
																		if (BgL_testz00_3203)
																			{	/* Module/foreign.scm 259 */
																				if (NULLP(CDR(BgL_cdrzd23236zd2_1115)))
																					{	/* Module/foreign.scm 259 */
																						return ((bool_t) 1);
																					}
																				else
																					{	/* Module/foreign.scm 259 */
																						return ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Module/foreign.scm 259 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Module/foreign.scm 259 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Module/foreign.scm 259 */
																obj_t BgL_carzd23287zd2_1128;

																BgL_carzd23287zd2_1128 = CAR(BgL_tzd2expzd2_29);
																{

																	if (
																		(BgL_carzd23287zd2_1128 ==
																			CNST_TABLE_REF(((long) 17))))
																		{	/* Module/foreign.scm 259 */
																		BgL_kapzd23289zd2_1130:
																			if (PAIRP(BgL_cdrzd23236zd2_1115))
																				{	/* Module/foreign.scm 259 */
																					bool_t BgL_testz00_3216;

																					{	/* Module/foreign.scm 259 */
																						obj_t BgL_auxz00_3217;

																						BgL_auxz00_3217 =
																							CAR(BgL_cdrzd23236zd2_1115);
																						BgL_testz00_3216 =
																							SYMBOLP(BgL_auxz00_3217);
																					}
																					if (BgL_testz00_3216)
																						{	/* Module/foreign.scm 259 */
																							if (NULLP(CDR
																									(BgL_cdrzd23236zd2_1115)))
																								{	/* Module/foreign.scm 259 */
																									return ((bool_t) 1);
																								}
																							else
																								{	/* Module/foreign.scm 259 */
																									obj_t BgL_cdrzd23298zd2_1164;

																									BgL_cdrzd23298zd2_1164 =
																										CDR(BgL_tzd2expzd2_29);
																									if (
																										(CAR(BgL_tzd2expzd2_29) ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/foreign.scm 259 */
																											obj_t
																												BgL_cdrzd23301zd2_1166;
																											BgL_cdrzd23301zd2_1166 =
																												CDR
																												(BgL_cdrzd23298zd2_1164);
																											{	/* Module/foreign.scm 259 */
																												bool_t BgL_testz00_3229;

																												{	/* Module/foreign.scm 259 */
																													obj_t BgL_auxz00_3230;

																													BgL_auxz00_3230 =
																														CAR
																														(BgL_cdrzd23298zd2_1164);
																													BgL_testz00_3229 =
																														SYMBOLP
																														(BgL_auxz00_3230);
																												}
																												if (BgL_testz00_3229)
																													{	/* Module/foreign.scm 259 */
																														if (PAIRP
																															(BgL_cdrzd23301zd2_1166))
																															{	/* Module/foreign.scm 259 */
																																obj_t
																																	BgL_carzd23303zd2_1169;
																																BgL_carzd23303zd2_1169
																																	=
																																	CAR
																																	(BgL_cdrzd23301zd2_1166);
																																{

																																	if (NULLP
																																		(BgL_carzd23303zd2_1169))
																																		{	/* Module/foreign.scm 259 */
																																		BgL_kapzd23307zd2_1170:
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd23301zd2_1166)))
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd23303zd2_1169);
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 259 */
																																			if (PAIRP
																																				(BgL_carzd23303zd2_1169))
																																				{	/* Module/foreign.scm 259 */
																																					goto
																																						BgL_kapzd23307zd2_1170;
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 259 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 259 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											if (
																												(CAR(BgL_tzd2expzd2_29)
																													==
																													CNST_TABLE_REF(((long)
																															15))))
																												{	/* Module/foreign.scm 259 */
																													BgL_slotsz00_1095 =
																														BgL_cdrzd23298zd2_1164;
																												BgL_tagzd23180zd2_1096:
																													{
																														obj_t
																															BgL_slotsz00_1241;
																														BgL_slotsz00_1241 =
																															BgL_slotsz00_1095;
																													BgL_zc3anonymousza33219ze3z83_1242:
																														if (NULLP
																															(BgL_slotsz00_1241))
																															{	/* Module/foreign.scm 283 */
																																return ((bool_t)
																																	1);
																															}
																														else
																															{

																																{	/* Module/foreign.scm 285 */
																																	obj_t
																																		BgL_ezd23451zd2_1246;
																																	BgL_ezd23451zd2_1246
																																		=
																																		CAR
																																		(BgL_slotsz00_1241);
																																	if (PAIRP
																																		(BgL_ezd23451zd2_1246))
																																		{	/* Module/foreign.scm 285 */
																																			obj_t
																																				BgL_cdrzd23453zd2_1248;
																																			BgL_cdrzd23453zd2_1248
																																				=
																																				CDR
																																				(BgL_ezd23451zd2_1246);
																																			{	/* Module/foreign.scm 285 */
																																				bool_t
																																					BgL_testz00_3254;
																																				{	/* Module/foreign.scm 285 */
																																					obj_t
																																						BgL_auxz00_3255;
																																					BgL_auxz00_3255
																																						=
																																						CAR
																																						(BgL_ezd23451zd2_1246);
																																					BgL_testz00_3254
																																						=
																																						SYMBOLP
																																						(BgL_auxz00_3255);
																																				}
																																				if (BgL_testz00_3254)
																																					{	/* Module/foreign.scm 285 */
																																						if (PAIRP(BgL_cdrzd23453zd2_1248))
																																							{	/* Module/foreign.scm 285 */
																																								bool_t
																																									BgL_testz00_3260;
																																								{	/* Module/foreign.scm 285 */
																																									obj_t
																																										BgL_auxz00_3261;
																																									BgL_auxz00_3261
																																										=
																																										CAR
																																										(BgL_cdrzd23453zd2_1248);
																																									BgL_testz00_3260
																																										=
																																										STRINGP
																																										(BgL_auxz00_3261);
																																								}
																																								if (BgL_testz00_3260)
																																									{	/* Module/foreign.scm 285 */
																																										if (NULLP(CDR(BgL_cdrzd23453zd2_1248)))
																																											{	/* Module/foreign.scm 285 */
																																												{
																																													obj_t
																																														BgL_slotsz00_3267;
																																													BgL_slotsz00_3267
																																														=
																																														CDR
																																														(BgL_slotsz00_1241);
																																													BgL_slotsz00_1241
																																														=
																																														BgL_slotsz00_3267;
																																													goto
																																														BgL_zc3anonymousza33219ze3z83_1242;
																																												}
																																											}
																																										else
																																											{	/* Module/foreign.scm 285 */
																																												return
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																								else
																																									{	/* Module/foreign.scm 285 */
																																										return
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																						else
																																							{	/* Module/foreign.scm 285 */
																																								return
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																				else
																																					{	/* Module/foreign.scm 285 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		}
																																	else
																																		{	/* Module/foreign.scm 285 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																															}
																													}
																												}
																											else
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 0);
																												}
																										}
																								}
																						}
																					else
																						{	/* Module/foreign.scm 259 */
																							obj_t BgL_cdrzd23325zd2_1183;

																							BgL_cdrzd23325zd2_1183 =
																								CDR(BgL_tzd2expzd2_29);
																							if (
																								(CAR(BgL_tzd2expzd2_29) ==
																									CNST_TABLE_REF(((long) 16))))
																								{	/* Module/foreign.scm 259 */
																									bool_t BgL_testz00_3274;

																									{	/* Module/foreign.scm 259 */
																										obj_t BgL_auxz00_3275;

																										BgL_auxz00_3275 =
																											CAR
																											(BgL_cdrzd23325zd2_1183);
																										BgL_testz00_3274 =
																											SYMBOLP(BgL_auxz00_3275);
																									}
																									if (BgL_testz00_3274)
																										{	/* Module/foreign.scm 259 */
																											if (NULLP(CDR
																													(BgL_cdrzd23325zd2_1183)))
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 1);
																												}
																											else
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 0);
																												}
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 259 */
																									if (
																										(CAR(BgL_tzd2expzd2_29) ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/foreign.scm 259 */
																											obj_t
																												BgL_cdrzd23345zd2_1191;
																											BgL_cdrzd23345zd2_1191 =
																												CDR
																												(BgL_cdrzd23325zd2_1183);
																											{	/* Module/foreign.scm 259 */
																												bool_t BgL_testz00_3286;

																												{	/* Module/foreign.scm 259 */
																													obj_t BgL_auxz00_3287;

																													BgL_auxz00_3287 =
																														CAR
																														(BgL_cdrzd23325zd2_1183);
																													BgL_testz00_3286 =
																														SYMBOLP
																														(BgL_auxz00_3287);
																												}
																												if (BgL_testz00_3286)
																													{	/* Module/foreign.scm 259 */
																														if (PAIRP
																															(BgL_cdrzd23345zd2_1191))
																															{	/* Module/foreign.scm 259 */
																																obj_t
																																	BgL_carzd23347zd2_1194;
																																BgL_carzd23347zd2_1194
																																	=
																																	CAR
																																	(BgL_cdrzd23345zd2_1191);
																																{

																																	if (NULLP
																																		(BgL_carzd23347zd2_1194))
																																		{	/* Module/foreign.scm 259 */
																																		BgL_kapzd23351zd2_1195:
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd23345zd2_1191)))
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd23347zd2_1194);
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 259 */
																																			if (PAIRP
																																				(BgL_carzd23347zd2_1194))
																																				{	/* Module/foreign.scm 259 */
																																					goto
																																						BgL_kapzd23351zd2_1195;
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 259 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 259 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											if (
																												(CAR(BgL_tzd2expzd2_29)
																													==
																													CNST_TABLE_REF(((long)
																															15))))
																												{
																													obj_t
																														BgL_slotsz00_3305;
																													BgL_slotsz00_3305 =
																														CDR
																														(BgL_tzd2expzd2_29);
																													BgL_slotsz00_1095 =
																														BgL_slotsz00_3305;
																													goto
																														BgL_tagzd23180zd2_1096;
																												}
																											else
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 0);
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Module/foreign.scm 259 */
																					if (
																						(CAR(BgL_tzd2expzd2_29) ==
																							CNST_TABLE_REF(((long) 15))))
																						{
																							obj_t BgL_slotsz00_3311;

																							BgL_slotsz00_3311 =
																								CDR(BgL_tzd2expzd2_29);
																							BgL_slotsz00_1095 =
																								BgL_slotsz00_3311;
																							goto BgL_tagzd23180zd2_1096;
																						}
																					else
																						{	/* Module/foreign.scm 259 */
																							return ((bool_t) 0);
																						}
																				}
																		}
																	else
																		{	/* Module/foreign.scm 259 */
																			if (
																				(BgL_carzd23287zd2_1128 ==
																					CNST_TABLE_REF(((long) 18))))
																				{	/* Module/foreign.scm 259 */
																					goto BgL_kapzd23289zd2_1130;
																				}
																			else
																				{	/* Module/foreign.scm 259 */
																					obj_t BgL_cdrzd23379zd2_1133;

																					BgL_cdrzd23379zd2_1133 =
																						CDR(BgL_tzd2expzd2_29);
																					if (
																						(CAR(BgL_tzd2expzd2_29) ==
																							CNST_TABLE_REF(((long) 16))))
																						{	/* Module/foreign.scm 259 */
																							if (PAIRP(BgL_cdrzd23379zd2_1133))
																								{	/* Module/foreign.scm 259 */
																									bool_t BgL_testz00_3323;

																									{	/* Module/foreign.scm 259 */
																										obj_t BgL_auxz00_3324;

																										BgL_auxz00_3324 =
																											CAR
																											(BgL_cdrzd23379zd2_1133);
																										BgL_testz00_3323 =
																											SYMBOLP(BgL_auxz00_3324);
																									}
																									if (BgL_testz00_3323)
																										{	/* Module/foreign.scm 259 */
																											if (NULLP(CDR
																													(BgL_cdrzd23379zd2_1133)))
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 1);
																												}
																											else
																												{	/* Module/foreign.scm 259 */
																													return ((bool_t) 0);
																												}
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 259 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Module/foreign.scm 259 */
																							if (
																								(CAR(BgL_tzd2expzd2_29) ==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 259 */
																									if (PAIRP
																										(BgL_cdrzd23379zd2_1133))
																										{	/* Module/foreign.scm 259 */
																											obj_t
																												BgL_cdrzd23404zd2_1143;
																											BgL_cdrzd23404zd2_1143 =
																												CDR
																												(BgL_cdrzd23379zd2_1133);
																											{	/* Module/foreign.scm 259 */
																												bool_t BgL_testz00_3337;

																												{	/* Module/foreign.scm 259 */
																													obj_t BgL_auxz00_3338;

																													BgL_auxz00_3338 =
																														CAR
																														(BgL_cdrzd23379zd2_1133);
																													BgL_testz00_3337 =
																														SYMBOLP
																														(BgL_auxz00_3338);
																												}
																												if (BgL_testz00_3337)
																													{	/* Module/foreign.scm 259 */
																														if (PAIRP
																															(BgL_cdrzd23404zd2_1143))
																															{	/* Module/foreign.scm 259 */
																																obj_t
																																	BgL_carzd23406zd2_1146;
																																BgL_carzd23406zd2_1146
																																	=
																																	CAR
																																	(BgL_cdrzd23404zd2_1143);
																																{

																																	if (NULLP
																																		(BgL_carzd23406zd2_1146))
																																		{	/* Module/foreign.scm 259 */
																																		BgL_kapzd23410zd2_1147:
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd23404zd2_1143)))
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd23406zd2_1146);
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 259 */
																																			if (PAIRP
																																				(BgL_carzd23406zd2_1146))
																																				{	/* Module/foreign.scm 259 */
																																					goto
																																						BgL_kapzd23410zd2_1147;
																																				}
																																			else
																																				{	/* Module/foreign.scm 259 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 259 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 259 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 259 */
																									if (
																										(CAR(BgL_tzd2expzd2_29) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{
																											obj_t BgL_slotsz00_3356;

																											BgL_slotsz00_3356 =
																												CDR(BgL_tzd2expzd2_29);
																											BgL_slotsz00_1095 =
																												BgL_slotsz00_3356;
																											goto
																												BgL_tagzd23180zd2_1096;
																										}
																									else
																										{	/* Module/foreign.scm 259 */
																											return ((bool_t) 0);
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
						else
							{	/* Module/foreign.scm 259 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* parse-c-extern-type */
	obj_t BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00(obj_t
		BgL_typez00_30)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 296 */
			{
				obj_t BgL_idz00_1261;

				obj_t BgL_tzd2expzd2_1262;

				if (PAIRP(BgL_typez00_30))
					{	/* Module/foreign.scm 297 */
						obj_t BgL_cdrzd23466zd2_1267;

						BgL_cdrzd23466zd2_1267 = CDR(BgL_typez00_30);
						if ((CAR(BgL_typez00_30) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 297 */
								if (PAIRP(BgL_cdrzd23466zd2_1267))
									{	/* Module/foreign.scm 297 */
										obj_t BgL_carzd23469zd2_1270;

										obj_t BgL_cdrzd23470zd2_1271;

										BgL_carzd23469zd2_1270 = CAR(BgL_cdrzd23466zd2_1267);
										BgL_cdrzd23470zd2_1271 = CDR(BgL_cdrzd23466zd2_1267);
										if (SYMBOLP(BgL_carzd23469zd2_1270))
											{	/* Module/foreign.scm 297 */
												if (PAIRP(BgL_cdrzd23470zd2_1271))
													{	/* Module/foreign.scm 297 */
														obj_t BgL_carzd23475zd2_1274;

														BgL_carzd23475zd2_1274 =
															CAR(BgL_cdrzd23470zd2_1271);
														if (STRINGP(BgL_carzd23475zd2_1274))
															{	/* Module/foreign.scm 297 */
																if (NULLP(CDR(BgL_cdrzd23470zd2_1271)))
																	{	/* Module/foreign.scm 297 */
																		return
																			BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																			(BgL_typez00_30);
																	}
																else
																	{	/* Module/foreign.scm 297 */
																		obj_t BgL_carzd23492zd2_1278;

																		obj_t BgL_cdrzd23493zd2_1279;

																		BgL_carzd23492zd2_1278 =
																			CAR(BgL_cdrzd23466zd2_1267);
																		BgL_cdrzd23493zd2_1279 =
																			CDR(BgL_cdrzd23466zd2_1267);
																		if (SYMBOLP(BgL_carzd23492zd2_1278))
																			{	/* Module/foreign.scm 297 */
																				obj_t BgL_cdrzd23502zd2_1281;

																				BgL_cdrzd23502zd2_1281 =
																					CDR(BgL_cdrzd23493zd2_1279);
																				if (PAIRP(BgL_cdrzd23502zd2_1281))
																					{	/* Module/foreign.scm 297 */
																						bool_t BgL_testz00_3387;

																						{	/* Module/foreign.scm 297 */
																							obj_t BgL_auxz00_3388;

																							BgL_auxz00_3388 =
																								CAR(BgL_cdrzd23502zd2_1281);
																							BgL_testz00_3387 =
																								STRINGP(BgL_auxz00_3388);
																						}
																						if (BgL_testz00_3387)
																							{	/* Module/foreign.scm 297 */
																								if (NULLP(CDR
																										(BgL_cdrzd23502zd2_1281)))
																									{	/* Module/foreign.scm 297 */
																										BgL_idz00_1261 =
																											BgL_carzd23492zd2_1278;
																										BgL_tzd2expzd2_1262 =
																											CAR
																											(BgL_cdrzd23493zd2_1279);
																									BgL_tagzd23457zd2_1263:
																										{	/* Module/foreign.scm 301 */
																											obj_t
																												BgL_foreignzd2typezd2_1314;
																											BgL_foreignzd2typezd2_1314
																												=
																												BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00
																												(BgL_tzd2expzd2_1262);
																											if (CBOOL
																												(BgL_foreignzd2typezd2_1314))
																												{	/* Module/foreign.scm 302 */
																													return
																														BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																														(BgL_typez00_30);
																												}
																											else
																												{	/* Module/foreign.scm 304 */
																													obj_t
																														BgL_list3263z00_1315;
																													BgL_list3263z00_1315 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													return
																														BGl_userzd2errorzd2zztools_errorz00
																														(BGl_string3445z00zzmodule_foreignz00,
																														BGl_string3455z00zzmodule_foreignz00,
																														BgL_typez00_30,
																														BgL_list3263z00_1315);
																												}
																										}
																									}
																								else
																									{	/* Module/foreign.scm 297 */
																									BgL_tagzd23458zd2_1264:
																										{	/* Module/foreign.scm 306 */
																											obj_t
																												BgL_list3264z00_1316;
																											BgL_list3264z00_1316 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string3445z00zzmodule_foreignz00,
																												BGl_string3455z00zzmodule_foreignz00,
																												BgL_typez00_30,
																												BgL_list3264z00_1316);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 297 */
																								goto BgL_tagzd23458zd2_1264;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 297 */
																						goto BgL_tagzd23458zd2_1264;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 297 */
																				goto BgL_tagzd23458zd2_1264;
																			}
																	}
															}
														else
															{	/* Module/foreign.scm 297 */
																obj_t BgL_carzd23517zd2_1290;

																obj_t BgL_cdrzd23518zd2_1291;

																BgL_carzd23517zd2_1290 =
																	CAR(BgL_cdrzd23466zd2_1267);
																BgL_cdrzd23518zd2_1291 =
																	CDR(BgL_cdrzd23466zd2_1267);
																if (SYMBOLP(BgL_carzd23517zd2_1290))
																	{	/* Module/foreign.scm 297 */
																		obj_t BgL_cdrzd23526zd2_1293;

																		BgL_cdrzd23526zd2_1293 =
																			CDR(BgL_cdrzd23518zd2_1291);
																		if (PAIRP(BgL_cdrzd23526zd2_1293))
																			{	/* Module/foreign.scm 297 */
																				bool_t BgL_testz00_3410;

																				{	/* Module/foreign.scm 297 */
																					obj_t BgL_auxz00_3411;

																					BgL_auxz00_3411 =
																						CAR(BgL_cdrzd23526zd2_1293);
																					BgL_testz00_3410 =
																						STRINGP(BgL_auxz00_3411);
																				}
																				if (BgL_testz00_3410)
																					{	/* Module/foreign.scm 297 */
																						if (NULLP(CDR
																								(BgL_cdrzd23526zd2_1293)))
																							{
																								obj_t BgL_tzd2expzd2_3418;

																								obj_t BgL_idz00_3417;

																								BgL_idz00_3417 =
																									BgL_carzd23517zd2_1290;
																								BgL_tzd2expzd2_3418 =
																									CAR(BgL_cdrzd23518zd2_1291);
																								BgL_tzd2expzd2_1262 =
																									BgL_tzd2expzd2_3418;
																								BgL_idz00_1261 = BgL_idz00_3417;
																								goto BgL_tagzd23457zd2_1263;
																							}
																						else
																							{	/* Module/foreign.scm 297 */
																								goto BgL_tagzd23458zd2_1264;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 297 */
																						goto BgL_tagzd23458zd2_1264;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 297 */
																				goto BgL_tagzd23458zd2_1264;
																			}
																	}
																else
																	{	/* Module/foreign.scm 297 */
																		goto BgL_tagzd23458zd2_1264;
																	}
															}
													}
												else
													{	/* Module/foreign.scm 297 */
														goto BgL_tagzd23458zd2_1264;
													}
											}
										else
											{	/* Module/foreign.scm 297 */
												obj_t BgL_carzd23543zd2_1301;

												obj_t BgL_cdrzd23544zd2_1302;

												BgL_carzd23543zd2_1301 = CAR(BgL_cdrzd23466zd2_1267);
												BgL_cdrzd23544zd2_1302 = CDR(BgL_cdrzd23466zd2_1267);
												if (SYMBOLP(BgL_carzd23543zd2_1301))
													{	/* Module/foreign.scm 297 */
														if (PAIRP(BgL_cdrzd23544zd2_1302))
															{	/* Module/foreign.scm 297 */
																obj_t BgL_cdrzd23550zd2_1305;

																BgL_cdrzd23550zd2_1305 =
																	CDR(BgL_cdrzd23544zd2_1302);
																if (PAIRP(BgL_cdrzd23550zd2_1305))
																	{	/* Module/foreign.scm 297 */
																		bool_t BgL_testz00_3429;

																		{	/* Module/foreign.scm 297 */
																			obj_t BgL_auxz00_3430;

																			BgL_auxz00_3430 =
																				CAR(BgL_cdrzd23550zd2_1305);
																			BgL_testz00_3429 =
																				STRINGP(BgL_auxz00_3430);
																		}
																		if (BgL_testz00_3429)
																			{	/* Module/foreign.scm 297 */
																				if (NULLP(CDR(BgL_cdrzd23550zd2_1305)))
																					{
																						obj_t BgL_tzd2expzd2_3437;

																						obj_t BgL_idz00_3436;

																						BgL_idz00_3436 =
																							BgL_carzd23543zd2_1301;
																						BgL_tzd2expzd2_3437 =
																							CAR(BgL_cdrzd23544zd2_1302);
																						BgL_tzd2expzd2_1262 =
																							BgL_tzd2expzd2_3437;
																						BgL_idz00_1261 = BgL_idz00_3436;
																						goto BgL_tagzd23457zd2_1263;
																					}
																				else
																					{	/* Module/foreign.scm 297 */
																						goto BgL_tagzd23458zd2_1264;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 297 */
																				goto BgL_tagzd23458zd2_1264;
																			}
																	}
																else
																	{	/* Module/foreign.scm 297 */
																		goto BgL_tagzd23458zd2_1264;
																	}
															}
														else
															{	/* Module/foreign.scm 297 */
																goto BgL_tagzd23458zd2_1264;
															}
													}
												else
													{	/* Module/foreign.scm 297 */
														goto BgL_tagzd23458zd2_1264;
													}
											}
									}
								else
									{	/* Module/foreign.scm 297 */
										goto BgL_tagzd23458zd2_1264;
									}
							}
						else
							{	/* Module/foreign.scm 297 */
								goto BgL_tagzd23458zd2_1264;
							}
					}
				else
					{	/* Module/foreign.scm 297 */
						goto BgL_tagzd23458zd2_1264;
					}
			}
		}
	}



/* c-extern-type->c-foreign-type */
	obj_t
		BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00(obj_t
		BgL_tzd2expzd2_31)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 311 */
			{
				obj_t BgL_slotsz00_1325;

				obj_t BgL_slotsz00_1318;

				if (SYMBOLP(BgL_tzd2expzd2_31))
					{	/* Module/foreign.scm 312 */
						return BgL_tzd2expzd2_31;
					}
				else
					{	/* Module/foreign.scm 312 */
						if (PAIRP(BgL_tzd2expzd2_31))
							{	/* Module/foreign.scm 312 */
								obj_t BgL_carzd23581zd2_1332;

								obj_t BgL_cdrzd23582zd2_1333;

								BgL_carzd23581zd2_1332 = CAR(BgL_tzd2expzd2_31);
								BgL_cdrzd23582zd2_1333 = CDR(BgL_tzd2expzd2_31);
								if ((BgL_carzd23581zd2_1332 == CNST_TABLE_REF(((long) 10))))
									{	/* Module/foreign.scm 312 */
										BgL_slotsz00_1318 = BgL_cdrzd23582zd2_1333;
									BgL_tagzd23567zd2_1319:
										{
											obj_t BgL_slotsz00_1448;

											BgL_slotsz00_1448 = BgL_slotsz00_1318;
										BgL_zc3anonymousza33363ze3z83_1449:
											if (NULLP(BgL_slotsz00_1448))
												{	/* Module/foreign.scm 317 */
													return BgL_tzd2expzd2_31;
												}
											else
												{
													obj_t BgL_idz00_1451;

													obj_t BgL_namez00_1452;

													{	/* Module/foreign.scm 319 */
														obj_t BgL_ezd23796zd2_1455;

														BgL_ezd23796zd2_1455 = CAR(BgL_slotsz00_1448);
														if (PAIRP(BgL_ezd23796zd2_1455))
															{	/* Module/foreign.scm 319 */
																obj_t BgL_carzd23801zd2_1457;

																obj_t BgL_cdrzd23802zd2_1458;

																BgL_carzd23801zd2_1457 =
																	CAR(BgL_ezd23796zd2_1455);
																BgL_cdrzd23802zd2_1458 =
																	CDR(BgL_ezd23796zd2_1455);
																if (SYMBOLP(BgL_carzd23801zd2_1457))
																	{	/* Module/foreign.scm 319 */
																		if (PAIRP(BgL_cdrzd23802zd2_1458))
																			{	/* Module/foreign.scm 319 */
																				obj_t BgL_carzd23806zd2_1461;

																				BgL_carzd23806zd2_1461 =
																					CAR(BgL_cdrzd23802zd2_1458);
																				if (STRINGP(BgL_carzd23806zd2_1461))
																					{	/* Module/foreign.scm 319 */
																						if (NULLP(CDR
																								(BgL_cdrzd23802zd2_1458)))
																							{	/* Module/foreign.scm 319 */
																								BgL_idz00_1451 =
																									BgL_carzd23801zd2_1457;
																								BgL_namez00_1452 =
																									BgL_carzd23806zd2_1461;
																								{	/* Module/foreign.scm 321 */
																									obj_t BgL_pidz00_1465;

																									BgL_pidz00_1465 =
																										BGl_parsezd2idzd2zzast_identz00
																										(BgL_idz00_1451,
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_tzd2expzd2_31));
																									{	/* Module/foreign.scm 321 */
																										obj_t BgL_sidz00_1466;

																										BgL_sidz00_1466 =
																											CAR(BgL_pidz00_1465);
																										{	/* Module/foreign.scm 322 */
																											obj_t BgL_typez00_1467;

																											{
																												BgL_typez00_bglt
																													BgL_auxz00_3468;
																												BgL_auxz00_3468 =
																													(BgL_typez00_bglt)
																													(CDR
																													(BgL_pidz00_1465));
																												BgL_typez00_1467 =
																													(((BgL_typez00_bglt)
																														CREF
																														(BgL_auxz00_3468))->
																													BgL_idz00);
																											}
																											{	/* Module/foreign.scm 323 */

																												{	/* Module/foreign.scm 324 */
																													bool_t
																														BgL_testz00_3472;
																													{	/* Module/foreign.scm 324 */
																														obj_t BgL_xz00_2428;

																														BgL_xz00_2428 =
																															BGl_checkzd2idzd2zzast_identz00
																															(BgL_pidz00_1465,
																															BgL_tzd2expzd2_31);
																														BgL_testz00_3472 =
																															((bool_t) 1);
																													}
																													if (BgL_testz00_3472)
																														{	/* Module/foreign.scm 324 */
																															{	/* Module/foreign.scm 327 */
																																obj_t
																																	BgL_arg3373z00_1469;
																																obj_t
																																	BgL_arg3374z00_1470;
																																BgL_arg3373z00_1469
																																	=
																																	CAR
																																	(BgL_slotsz00_1448);
																																{	/* Module/foreign.scm 327 */
																																	obj_t
																																		BgL_arg3375z00_1471;
																																	BgL_arg3375z00_1471
																																		=
																																		MAKE_PAIR
																																		(BgL_namez00_1452,
																																		BNIL);
																																	BgL_arg3374z00_1470
																																		=
																																		MAKE_PAIR
																																		(BgL_sidz00_1466,
																																		BgL_arg3375z00_1471);
																																}
																																SET_CDR
																																	(BgL_arg3373z00_1469,
																																	BgL_arg3374z00_1470);
																															}
																															{	/* Module/foreign.scm 328 */
																																obj_t
																																	BgL_auxz00_3478;
																																BgL_auxz00_3478
																																	=
																																	CAR
																																	(BgL_slotsz00_1448);
																																SET_CAR
																																	(BgL_auxz00_3478,
																																	BgL_typez00_1467);
																															}
																															{
																																obj_t
																																	BgL_slotsz00_3481;
																																BgL_slotsz00_3481
																																	=
																																	CDR
																																	(BgL_slotsz00_1448);
																																BgL_slotsz00_1448
																																	=
																																	BgL_slotsz00_3481;
																																goto
																																	BgL_zc3anonymousza33363ze3z83_1449;
																															}
																														}
																													else
																														{	/* Module/foreign.scm 324 */
																															return BFALSE;
																														}
																												}
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Module/foreign.scm 319 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 319 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 319 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Module/foreign.scm 319 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/foreign.scm 319 */
																return BFALSE;
															}
													}
												}
										}
									}
								else
									{	/* Module/foreign.scm 312 */
										if ((BgL_carzd23581zd2_1332 == CNST_TABLE_REF(((long) 11))))
											{
												obj_t BgL_slotsz00_3486;

												BgL_slotsz00_3486 = BgL_cdrzd23582zd2_1333;
												BgL_slotsz00_1318 = BgL_slotsz00_3486;
												goto BgL_tagzd23567zd2_1319;
											}
										else
											{	/* Module/foreign.scm 312 */
												if (
													(CAR(BgL_tzd2expzd2_31) ==
														CNST_TABLE_REF(((long) 13))))
													{	/* Module/foreign.scm 312 */
														if (PAIRP(BgL_cdrzd23582zd2_1333))
															{	/* Module/foreign.scm 312 */
																bool_t BgL_testz00_3493;

																{	/* Module/foreign.scm 312 */
																	obj_t BgL_auxz00_3494;

																	BgL_auxz00_3494 = CAR(BgL_cdrzd23582zd2_1333);
																	BgL_testz00_3493 = SYMBOLP(BgL_auxz00_3494);
																}
																if (BgL_testz00_3493)
																	{	/* Module/foreign.scm 312 */
																		if (NULLP(CDR(BgL_cdrzd23582zd2_1333)))
																			{	/* Module/foreign.scm 312 */
																				return BgL_tzd2expzd2_31;
																			}
																		else
																			{	/* Module/foreign.scm 312 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Module/foreign.scm 312 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/foreign.scm 312 */
																return BFALSE;
															}
													}
												else
													{	/* Module/foreign.scm 312 */
														obj_t BgL_carzd23639zd2_1349;

														obj_t BgL_cdrzd23640zd2_1350;

														BgL_carzd23639zd2_1349 = CAR(BgL_tzd2expzd2_31);
														BgL_cdrzd23640zd2_1350 = CDR(BgL_tzd2expzd2_31);
														{

															if (
																(BgL_carzd23639zd2_1349 ==
																	CNST_TABLE_REF(((long) 17))))
																{	/* Module/foreign.scm 312 */
																BgL_kapzd23641zd2_1351:
																	if (PAIRP(BgL_cdrzd23640zd2_1350))
																		{	/* Module/foreign.scm 312 */
																			bool_t BgL_testz00_3507;

																			{	/* Module/foreign.scm 312 */
																				obj_t BgL_auxz00_3508;

																				BgL_auxz00_3508 =
																					CAR(BgL_cdrzd23640zd2_1350);
																				BgL_testz00_3507 =
																					SYMBOLP(BgL_auxz00_3508);
																			}
																			if (BgL_testz00_3507)
																				{	/* Module/foreign.scm 312 */
																					if (NULLP(CDR
																							(BgL_cdrzd23640zd2_1350)))
																						{	/* Module/foreign.scm 312 */
																							return BgL_tzd2expzd2_31;
																						}
																					else
																						{	/* Module/foreign.scm 312 */
																							obj_t BgL_cdrzd23650zd2_1390;

																							BgL_cdrzd23650zd2_1390 =
																								CDR(BgL_tzd2expzd2_31);
																							if (
																								(CAR(BgL_tzd2expzd2_31) ==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 312 */
																									obj_t BgL_cdrzd23653zd2_1392;

																									BgL_cdrzd23653zd2_1392 =
																										CDR(BgL_cdrzd23650zd2_1390);
																									{	/* Module/foreign.scm 312 */
																										bool_t BgL_testz00_3520;

																										{	/* Module/foreign.scm 312 */
																											obj_t BgL_auxz00_3521;

																											BgL_auxz00_3521 =
																												CAR
																												(BgL_cdrzd23650zd2_1390);
																											BgL_testz00_3520 =
																												SYMBOLP
																												(BgL_auxz00_3521);
																										}
																										if (BgL_testz00_3520)
																											{	/* Module/foreign.scm 312 */
																												if (PAIRP
																													(BgL_cdrzd23653zd2_1392))
																													{	/* Module/foreign.scm 312 */
																														obj_t
																															BgL_carzd23655zd2_1395;
																														BgL_carzd23655zd2_1395
																															=
																															CAR
																															(BgL_cdrzd23653zd2_1392);
																														{

																															if (NULLP
																																(BgL_carzd23655zd2_1395))
																																{	/* Module/foreign.scm 312 */
																																BgL_kapzd23659zd2_1396:
																																	if (NULLP(CDR
																																			(BgL_cdrzd23653zd2_1392)))
																																		{	/* Module/foreign.scm 312 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd23655zd2_1395))
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BgL_tzd2expzd2_31;
																																				}
																																			else
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 312 */
																																	if (PAIRP
																																		(BgL_carzd23655zd2_1395))
																																		{	/* Module/foreign.scm 312 */
																																			goto
																																				BgL_kapzd23659zd2_1396;
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 312 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 312 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									if (
																										(CAR(BgL_tzd2expzd2_31) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{	/* Module/foreign.scm 312 */
																											BgL_slotsz00_1325 =
																												BgL_cdrzd23650zd2_1390;
																										BgL_tagzd23572zd2_1326:
																											{
																												obj_t BgL_slotsz00_1479;

																												BgL_slotsz00_1479 =
																													BgL_slotsz00_1325;
																											BgL_zc3anonymousza33381ze3z83_1480:
																												if (NULLP
																													(BgL_slotsz00_1479))
																													{	/* Module/foreign.scm 344 */
																														return
																															BgL_tzd2expzd2_31;
																													}
																												else
																													{

																														{	/* Module/foreign.scm 346 */
																															obj_t
																																BgL_ezd23812zd2_1484;
																															BgL_ezd23812zd2_1484
																																=
																																CAR
																																(BgL_slotsz00_1479);
																															if (PAIRP
																																(BgL_ezd23812zd2_1484))
																																{	/* Module/foreign.scm 346 */
																																	obj_t
																																		BgL_cdrzd23814zd2_1486;
																																	BgL_cdrzd23814zd2_1486
																																		=
																																		CDR
																																		(BgL_ezd23812zd2_1484);
																																	{	/* Module/foreign.scm 346 */
																																		bool_t
																																			BgL_testz00_3546;
																																		{	/* Module/foreign.scm 346 */
																																			obj_t
																																				BgL_auxz00_3547;
																																			BgL_auxz00_3547
																																				=
																																				CAR
																																				(BgL_ezd23812zd2_1484);
																																			BgL_testz00_3546
																																				=
																																				SYMBOLP
																																				(BgL_auxz00_3547);
																																		}
																																		if (BgL_testz00_3546)
																																			{	/* Module/foreign.scm 346 */
																																				if (PAIRP(BgL_cdrzd23814zd2_1486))
																																					{	/* Module/foreign.scm 346 */
																																						bool_t
																																							BgL_testz00_3552;
																																						{	/* Module/foreign.scm 346 */
																																							obj_t
																																								BgL_auxz00_3553;
																																							BgL_auxz00_3553
																																								=
																																								CAR
																																								(BgL_cdrzd23814zd2_1486);
																																							BgL_testz00_3552
																																								=
																																								STRINGP
																																								(BgL_auxz00_3553);
																																						}
																																						if (BgL_testz00_3552)
																																							{	/* Module/foreign.scm 346 */
																																								if (NULLP(CDR(BgL_cdrzd23814zd2_1486)))
																																									{	/* Module/foreign.scm 346 */
																																										{
																																											obj_t
																																												BgL_slotsz00_3559;
																																											BgL_slotsz00_3559
																																												=
																																												CDR
																																												(BgL_slotsz00_1479);
																																											BgL_slotsz00_1479
																																												=
																																												BgL_slotsz00_3559;
																																											goto
																																												BgL_zc3anonymousza33381ze3z83_1480;
																																										}
																																									}
																																								else
																																									{	/* Module/foreign.scm 346 */
																																										return
																																											BFALSE;
																																									}
																																							}
																																						else
																																							{	/* Module/foreign.scm 346 */
																																								return
																																									BFALSE;
																																							}
																																					}
																																				else
																																					{	/* Module/foreign.scm 346 */
																																						return
																																							BFALSE;
																																					}
																																			}
																																		else
																																			{	/* Module/foreign.scm 346 */
																																				return
																																					BFALSE;
																																			}
																																	}
																																}
																															else
																																{	/* Module/foreign.scm 346 */
																																	return BFALSE;
																																}
																														}
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 312 */
																											return BFALSE;
																										}
																								}
																						}
																				}
																			else
																				{	/* Module/foreign.scm 312 */
																					obj_t BgL_cdrzd23677zd2_1409;

																					BgL_cdrzd23677zd2_1409 =
																						CDR(BgL_tzd2expzd2_31);
																					if (
																						(CAR(BgL_tzd2expzd2_31) ==
																							CNST_TABLE_REF(((long) 16))))
																						{	/* Module/foreign.scm 312 */
																							bool_t BgL_testz00_3566;

																							{	/* Module/foreign.scm 312 */
																								obj_t BgL_auxz00_3567;

																								BgL_auxz00_3567 =
																									CAR(BgL_cdrzd23677zd2_1409);
																								BgL_testz00_3566 =
																									SYMBOLP(BgL_auxz00_3567);
																							}
																							if (BgL_testz00_3566)
																								{	/* Module/foreign.scm 312 */
																									if (NULLP(CDR
																											(BgL_cdrzd23677zd2_1409)))
																										{	/* Module/foreign.scm 312 */
																											return BgL_tzd2expzd2_31;
																										}
																									else
																										{	/* Module/foreign.scm 312 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 312 */
																							if (
																								(CAR(BgL_tzd2expzd2_31) ==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 312 */
																									obj_t BgL_cdrzd23697zd2_1417;

																									BgL_cdrzd23697zd2_1417 =
																										CDR(BgL_cdrzd23677zd2_1409);
																									{	/* Module/foreign.scm 312 */
																										bool_t BgL_testz00_3578;

																										{	/* Module/foreign.scm 312 */
																											obj_t BgL_auxz00_3579;

																											BgL_auxz00_3579 =
																												CAR
																												(BgL_cdrzd23677zd2_1409);
																											BgL_testz00_3578 =
																												SYMBOLP
																												(BgL_auxz00_3579);
																										}
																										if (BgL_testz00_3578)
																											{	/* Module/foreign.scm 312 */
																												if (PAIRP
																													(BgL_cdrzd23697zd2_1417))
																													{	/* Module/foreign.scm 312 */
																														obj_t
																															BgL_carzd23699zd2_1420;
																														BgL_carzd23699zd2_1420
																															=
																															CAR
																															(BgL_cdrzd23697zd2_1417);
																														{

																															if (NULLP
																																(BgL_carzd23699zd2_1420))
																																{	/* Module/foreign.scm 312 */
																																BgL_kapzd23703zd2_1421:
																																	if (NULLP(CDR
																																			(BgL_cdrzd23697zd2_1417)))
																																		{	/* Module/foreign.scm 312 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd23699zd2_1420))
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BgL_tzd2expzd2_31;
																																				}
																																			else
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 312 */
																																	if (PAIRP
																																		(BgL_carzd23699zd2_1420))
																																		{	/* Module/foreign.scm 312 */
																																			goto
																																				BgL_kapzd23703zd2_1421;
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 312 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 312 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									if (
																										(CAR(BgL_tzd2expzd2_31) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{
																											obj_t BgL_slotsz00_3598;

																											BgL_slotsz00_3598 =
																												CDR(BgL_tzd2expzd2_31);
																											BgL_slotsz00_1325 =
																												BgL_slotsz00_3598;
																											goto
																												BgL_tagzd23572zd2_1326;
																										}
																									else
																										{	/* Module/foreign.scm 312 */
																											return BFALSE;
																										}
																								}
																						}
																				}
																		}
																	else
																		{	/* Module/foreign.scm 312 */
																			if (
																				(CAR(BgL_tzd2expzd2_31) ==
																					CNST_TABLE_REF(((long) 15))))
																				{
																					obj_t BgL_slotsz00_3604;

																					BgL_slotsz00_3604 =
																						CDR(BgL_tzd2expzd2_31);
																					BgL_slotsz00_1325 = BgL_slotsz00_3604;
																					goto BgL_tagzd23572zd2_1326;
																				}
																			else
																				{	/* Module/foreign.scm 312 */
																					if (
																						(CAR(BgL_tzd2expzd2_31) ==
																							CNST_TABLE_REF(((long) 12))))
																						{	/* Module/foreign.scm 312 */
																							if (NULLP(CDR(BgL_tzd2expzd2_31)))
																								{	/* Module/foreign.scm 312 */
																									return BgL_tzd2expzd2_31;
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 312 */
																							return BFALSE;
																						}
																				}
																		}
																}
															else
																{	/* Module/foreign.scm 312 */
																	if (
																		(BgL_carzd23639zd2_1349 ==
																			CNST_TABLE_REF(((long) 18))))
																		{	/* Module/foreign.scm 312 */
																			goto BgL_kapzd23641zd2_1351;
																		}
																	else
																		{	/* Module/foreign.scm 312 */
																			if (
																				(CAR(BgL_tzd2expzd2_31) ==
																					CNST_TABLE_REF(((long) 16))))
																				{	/* Module/foreign.scm 312 */
																					if (PAIRP(BgL_cdrzd23640zd2_1350))
																						{	/* Module/foreign.scm 312 */
																							bool_t BgL_testz00_3622;

																							{	/* Module/foreign.scm 312 */
																								obj_t BgL_auxz00_3623;

																								BgL_auxz00_3623 =
																									CAR(BgL_cdrzd23640zd2_1350);
																								BgL_testz00_3622 =
																									SYMBOLP(BgL_auxz00_3623);
																							}
																							if (BgL_testz00_3622)
																								{	/* Module/foreign.scm 312 */
																									if (NULLP(CDR
																											(BgL_cdrzd23640zd2_1350)))
																										{	/* Module/foreign.scm 312 */
																											return BgL_tzd2expzd2_31;
																										}
																									else
																										{	/* Module/foreign.scm 312 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 312 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Module/foreign.scm 312 */
																					obj_t BgL_cdrzd23755zd2_1361;

																					BgL_cdrzd23755zd2_1361 =
																						CDR(BgL_tzd2expzd2_31);
																					if (
																						(CAR(BgL_tzd2expzd2_31) ==
																							CNST_TABLE_REF(((long) 14))))
																						{	/* Module/foreign.scm 312 */
																							if (PAIRP(BgL_cdrzd23755zd2_1361))
																								{	/* Module/foreign.scm 312 */
																									obj_t BgL_cdrzd23758zd2_1364;

																									BgL_cdrzd23758zd2_1364 =
																										CDR(BgL_cdrzd23755zd2_1361);
																									{	/* Module/foreign.scm 312 */
																										bool_t BgL_testz00_3637;

																										{	/* Module/foreign.scm 312 */
																											obj_t BgL_auxz00_3638;

																											BgL_auxz00_3638 =
																												CAR
																												(BgL_cdrzd23755zd2_1361);
																											BgL_testz00_3637 =
																												SYMBOLP
																												(BgL_auxz00_3638);
																										}
																										if (BgL_testz00_3637)
																											{	/* Module/foreign.scm 312 */
																												if (PAIRP
																													(BgL_cdrzd23758zd2_1364))
																													{	/* Module/foreign.scm 312 */
																														obj_t
																															BgL_carzd23760zd2_1367;
																														BgL_carzd23760zd2_1367
																															=
																															CAR
																															(BgL_cdrzd23758zd2_1364);
																														{

																															if (NULLP
																																(BgL_carzd23760zd2_1367))
																																{	/* Module/foreign.scm 312 */
																																BgL_kapzd23764zd2_1368:
																																	if (NULLP(CDR
																																			(BgL_cdrzd23758zd2_1364)))
																																		{	/* Module/foreign.scm 312 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd23760zd2_1367))
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BgL_tzd2expzd2_31;
																																				}
																																			else
																																				{	/* Module/foreign.scm 312 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 312 */
																																	if (PAIRP
																																		(BgL_carzd23760zd2_1367))
																																		{	/* Module/foreign.scm 312 */
																																			goto
																																				BgL_kapzd23764zd2_1368;
																																		}
																																	else
																																		{	/* Module/foreign.scm 312 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 312 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 312 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 312 */
																							if (
																								(CAR(BgL_tzd2expzd2_31) ==
																									CNST_TABLE_REF(((long) 15))))
																								{
																									obj_t BgL_slotsz00_3657;

																									BgL_slotsz00_3657 =
																										BgL_cdrzd23755zd2_1361;
																									BgL_slotsz00_1325 =
																										BgL_slotsz00_3657;
																									goto BgL_tagzd23572zd2_1326;
																								}
																							else
																								{	/* Module/foreign.scm 312 */
																									if (
																										(CAR(BgL_tzd2expzd2_31) ==
																											CNST_TABLE_REF(((long)
																													12))))
																										{	/* Module/foreign.scm 312 */
																											if (NULLP
																												(BgL_cdrzd23755zd2_1361))
																												{	/* Module/foreign.scm 312 */
																													return
																														BgL_tzd2expzd2_31;
																												}
																											else
																												{	/* Module/foreign.scm 312 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 312 */
																											return BFALSE;
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
						else
							{	/* Module/foreign.scm 312 */
								return BFALSE;
							}
					}
			}
		}
	}



/* foreign-accesses-add! */
	BGL_EXPORTED_DEF obj_t
		BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t
		BgL_accessesz00_32)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 369 */
			return (BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 =
				bgl_append2(BgL_accessesz00_32,
					BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00), BUNSPEC);
		}
	}



/* _foreign-accesses-add! */
	obj_t BGl__foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t
		BgL_envz00_2421, obj_t BgL_accessesz00_2422)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 369 */
			return
				BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
				(BgL_accessesz00_2422);
		}
	}



/* foreign-finalizer */
	obj_t BGl_foreignzd2finaliza7erz75zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 375 */
			{
				obj_t BgL_l2763z00_1497;

				BgL_l2763z00_1497 = BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00;
			BgL_zc3anonymousza33392ze3z83_1498:
				if (PAIRP(BgL_l2763z00_1497))
					{	/* Module/foreign.scm 377 */
						{	/* Module/foreign.scm 378 */
							obj_t BgL_foreignz00_1500;

							BgL_foreignz00_1500 = CAR(BgL_l2763z00_1497);
							{	/* Module/foreign.scm 378 */
								obj_t BgL_globalz00_1501;

								obj_t BgL_namez00_1502;

								{	/* Module/foreign.scm 378 */
									obj_t BgL_arg3400z00_1509;

									{	/* Module/foreign.scm 378 */
										obj_t BgL_pairz00_2353;

										BgL_pairz00_2353 = BgL_foreignz00_1500;
										BgL_arg3400z00_1509 = CAR(CDR(BgL_pairz00_2353));
									}
									BgL_globalz00_1501 =
										BGl_findzd2globalzd2zzast_envz00(BgL_arg3400z00_1509, BNIL);
								}
								{	/* Module/foreign.scm 379 */
									obj_t BgL_pairz00_2357;

									BgL_pairz00_2357 = BgL_foreignz00_1500;
									BgL_namez00_1502 = CAR(CDR(CDR(BgL_pairz00_2357)));
								}
								if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_1501,
										BGl_globalz00zzast_varz00))
									{	/* Module/foreign.scm 388 */
										bool_t BgL_testz00_3677;

										{	/* Module/foreign.scm 388 */
											obj_t BgL_auxz00_3678;

											{
												BgL_variablez00_bglt BgL_auxz00_3679;

												BgL_auxz00_3679 =
													(BgL_variablez00_bglt) (
													(BgL_globalz00_bglt) (BgL_globalz00_1501));
												BgL_auxz00_3678 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3679))->
													BgL_namez00);
											}
											BgL_testz00_3677 = STRINGP(BgL_auxz00_3678);
										}
										if (BgL_testz00_3677)
											{	/* Module/foreign.scm 388 */
												BGl_userzd2warningzd2zztools_errorz00
													(BGl_string3456z00zzmodule_foreignz00,
													BGl_string3457z00zzmodule_foreignz00,
													BgL_foreignz00_1500);
											}
										else
											{
												BgL_variablez00_bglt BgL_auxz00_3685;

												BgL_auxz00_3685 =
													(BgL_variablez00_bglt) (
													(BgL_globalz00_bglt) (BgL_globalz00_1501));
												((((BgL_variablez00_bglt) CREF(BgL_auxz00_3685))->
														BgL_namez00) = ((obj_t) BgL_namez00_1502), BUNSPEC);
											}
									}
								else
									{	/* Module/foreign.scm 382 */
										bool_t BgL_testz00_3689;

										if (
											(BGl_za2passza2z00zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 19))))
											{	/* Module/foreign.scm 382 */
												BgL_testz00_3689 = ((bool_t) 1);
											}
										else
											{	/* Module/foreign.scm 382 */
												BgL_testz00_3689 =
													(BGl_za2passza2z00zzengine_paramz00 ==
													CNST_TABLE_REF(((long) 20)));
											}
										if (BgL_testz00_3689)
											{	/* Module/foreign.scm 382 */
												BFALSE;
											}
										else
											{	/* Module/foreign.scm 384 */
												obj_t BgL_list3398z00_1507;

												BgL_list3398z00_1507 = MAKE_PAIR(BNIL, BNIL);
												BGl_userzd2errorzd2zztools_errorz00
													(BGl_string3456z00zzmodule_foreignz00,
													BGl_string3458z00zzmodule_foreignz00,
													BgL_foreignz00_1500, BgL_list3398z00_1507);
											}
									}
							}
						}
						{
							obj_t BgL_l2763z00_3697;

							BgL_l2763z00_3697 = CDR(BgL_l2763z00_1497);
							BgL_l2763z00_1497 = BgL_l2763z00_3697;
							goto BgL_zc3anonymousza33392ze3z83_1498;
						}
					}
				else
					{	/* Module/foreign.scm 377 */
						((bool_t) 1);
					}
			}
			BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 = BNIL;
			if (NULLP(BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00))
				{	/* Module/foreign.scm 398 */
					return CNST_TABLE_REF(((long) 2));
				}
			else
				{	/* Module/foreign.scm 400 */
					obj_t BgL_accessesz00_1514;

					BgL_accessesz00_1514 =
						bgl_reverse_bang
						(BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00);
					BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BNIL;
					{	/* Module/foreign.scm 402 */
						obj_t BgL_arg3404z00_1515;

						{	/* Module/foreign.scm 402 */
							obj_t BgL_idz00_2370;

							BgL_idz00_2370 = CNST_TABLE_REF(((long) 0));
							{	/* Module/foreign.scm 402 */
								obj_t BgL_newz00_2375;

								BgL_newz00_2375 =
									create_struct(CNST_TABLE_REF(((long) 21)),
									(int) (((long) 5)));
								{	/* Module/foreign.scm 402 */
									int BgL_auxz00_3707;

									BgL_auxz00_3707 = (int) (((long) 4));
									STRUCT_SET(BgL_newz00_2375, BgL_auxz00_3707, BFALSE);
								}
								{	/* Module/foreign.scm 402 */
									int BgL_auxz00_3710;

									BgL_auxz00_3710 = (int) (((long) 3));
									STRUCT_SET(BgL_newz00_2375, BgL_auxz00_3710, BTRUE);
								}
								{	/* Module/foreign.scm 402 */
									int BgL_auxz00_3713;

									BgL_auxz00_3713 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2375, BgL_auxz00_3713,
										BgL_accessesz00_1514);
								}
								{	/* Module/foreign.scm 402 */
									obj_t BgL_auxz00_3718;

									int BgL_auxz00_3716;

									BgL_auxz00_3718 = BINT(((long) 48));
									BgL_auxz00_3716 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2375, BgL_auxz00_3716, BgL_auxz00_3718);
								}
								{	/* Module/foreign.scm 402 */
									int BgL_auxz00_3721;

									BgL_auxz00_3721 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2375, BgL_auxz00_3721, BgL_idz00_2370);
								}
								BgL_arg3404z00_1515 = BgL_newz00_2375;
						}}
						{	/* Module/foreign.scm 402 */
							obj_t BgL_list3405z00_1516;

							BgL_list3405z00_1516 = MAKE_PAIR(BgL_arg3404z00_1515, BNIL);
							return BgL_list3405z00_1516;
						}
					}
				}
		}
	}



/* _foreign-finalizer */
	obj_t BGl__foreignzd2finaliza7erz75zzmodule_foreignz00(obj_t BgL_envz00_2411)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 375 */
			return BGl_foreignzd2finaliza7erz75zzmodule_foreignz00();
		}
	}



/* default-c-type */
	obj_t BGl_defaultzd2czd2typez00zzmodule_foreignz00(obj_t BgL_typez00_33,
		obj_t BgL_srcz00_34)
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 407 */
			{	/* Module/foreign.scm 408 */
				bool_t BgL_testz00_3726;

				{	/* Module/foreign.scm 408 */
					BgL_typez00_bglt BgL_arg3411z00_1523;

					BgL_arg3411z00_1523 = BGl_getzd2defaultzd2typez00zztype_cachez00();
					BgL_testz00_3726 = (BgL_typez00_33 == (obj_t) (BgL_arg3411z00_1523));
				}
				if (BgL_testz00_3726)
					{	/* Module/foreign.scm 409 */
						BgL_typez00_bglt BgL_defaultz00_1518;

						BgL_defaultz00_1518 =
							BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
						{	/* Module/foreign.scm 410 */
							obj_t BgL_arg3407z00_1519;

							obj_t BgL_arg3410z00_1522;

							BgL_arg3407z00_1519 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_34);
							BgL_arg3410z00_1522 =
								(((BgL_typez00_bglt) CREF(BgL_defaultz00_1518))->BgL_idz00);
							BGl_userzd2warningzf2locationz20zztools_errorz00
								(BgL_arg3407z00_1519, BGl_string3456z00zzmodule_foreignz00,
								BGl_string3459z00zzmodule_foreignz00, BgL_arg3410z00_1522);
						}
						return (obj_t) (BgL_defaultz00_1518);
					}
				else
					{	/* Module/foreign.scm 408 */
						return BgL_typez00_33;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_foreignz00()
	{
		AN_OBJECT;
		{	/* Module/foreign.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 27432102),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3460z00zzmodule_foreignz00));
		}
	}

#ifdef __cplusplus
}
#endif
