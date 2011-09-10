/*===========================================================================*/
/*   (Expand/eps.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/eps.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_zc3anonymousza31714ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_applicationzd2expanderzd2zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_idzd2ofzd2idz00zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_z62errorzf3z91zz__objectz00(obj_t);
	static obj_t BGl_zc3anonymousza31855ze3z83zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__applicationzd2expanderzd2zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3exitza31711ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl__comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_epsz00 = BUNSPEC;
	static obj_t BGl__compilezd2expanderzd2zzexpand_epsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_epsz00();
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t);
	BGL_IMPORT obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_epsz00();
	extern obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl__withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_initialzd2expanderzd2zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_epsz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza31770ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2500z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2501z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2502z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2503z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2504z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2505z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2506z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2507z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2508z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2498z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31771ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2510z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2509z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2499z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31863ze3_2511z83zzexpand_epsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_expandz00zzexpand_epsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31778ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_handlerz00zzexpand_epsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzexpand_epsz00();
	static obj_t BGl_zc3anonymousza31779ze3z83zzexpand_epsz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__expandzd2unitszd2zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31790ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl__compilezd2expandzd2zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31792ze3z83zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_compilezd2expanderzd2zzexpand_epsz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31807ze3z83zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza31786ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl_zc3anonymousza31809ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl__addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t);
	static obj_t BGl__comptimezd2expandzd2zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza31804ze3z83zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_loopz00zzexpand_epsz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_protozd2ze3framez31zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl__addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	static obj_t BGl__initialzd2expanderzd2zzexpand_epsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31831ze3z83zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_zc3anonymousza31835ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl_za2macroza2z00zzexpand_epsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_zc3exitza31828ze3z83zzexpand_epsz00(obj_t);
	static obj_t BGl__lexicalzd2stackzd2zzexpand_epsz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_epsz00();
	static obj_t BGl_methodzd2initzd2zzexpand_epsz00();
	static obj_t BGl_identifierzd2expanderzd2zzexpand_epsz00(obj_t, obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl__identifierzd2expanderzd2zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[33];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilezd2expandzd2envz00zzexpand_epsz00,
		BgL_bgl__compileza7d2expan2532za7, BGl__compilezd2expandzd2zzexpand_epsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2512z00zzexpand_epsz00,
		BgL_bgl_string2512za700za7za7e2533za7, "Expand", 6);
	      DEFINE_STRING(BGl_string2513z00zzexpand_epsz00,
		BgL_bgl_string2513za700za7za7e2534za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2514z00zzexpand_epsz00,
		BgL_bgl_string2514za700za7za7e2535za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2517z00zzexpand_epsz00,
		BgL_bgl_string2517za700za7za7e2536za7, " error", 6);
	      DEFINE_STRING(BGl_string2518z00zzexpand_epsz00,
		BgL_bgl_string2518za700za7za7e2537za7, "s", 1);
	      DEFINE_STRING(BGl_string2520z00zzexpand_epsz00,
		BgL_bgl_string2520za700za7za7e2538za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2519z00zzexpand_epsz00,
		BgL_bgl_string2519za700za7za7e2539za7, "", 0);
	      DEFINE_STRING(BGl_string2521z00zzexpand_epsz00,
		BgL_bgl_string2521za700za7za7e2540za7, "failure during postlude hook", 28);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_comptimezd2expandzd2envz00zzexpand_epsz00,
		BgL_bgl__comptimeza7d2expa2541za7, BGl__comptimezd2expandzd2zzexpand_epsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2522z00zzexpand_epsz00,
		BgL_bgl_string2522za700za7za7e2542za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string2523z00zzexpand_epsz00,
		BgL_bgl_string2523za700za7za7e2543za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2526z00zzexpand_epsz00,
		BgL_bgl_string2526za700za7za7e2544za7, "Illegal application form", 24);
	      DEFINE_STRING(BGl_string2527z00zzexpand_epsz00,
		BgL_bgl_string2527za700za7za7e2545za7, "expand_eps", 10);
	      DEFINE_STRING(BGl_string2528z00zzexpand_epsz00,
		BgL_bgl_string2528za700za7za7e2546za7,
		"apply case free-pragma/effect free-pragma pragma/effect pragma letrec* letrec let* define-method define-generic define-inline define jump-exit set-exit failure set! if begin quote @ lambda labels let module (quote ()) (check-to-be-macros) define-expander define-macro nothing pass-started expand macro-alias-key ",
		312);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2macrozd2aliasz12zd2envzc0zzexpand_epsz00,
		BgL_bgl__addza7d2macroza7d2a2547z00,
		BGl__addzd2macrozd2aliasz12z12zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_withzd2lexicalzd2envz00zzexpand_epsz00,
		BgL_bgl__withza7d2lexicalza72548z00, BGl__withzd2lexicalzd2zzexpand_epsz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2unitszd2envz00zzexpand_epsz00,
		BgL_bgl__expandza7d2unitsza72549z00, BGl__expandzd2unitszd2zzexpand_epsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl__applicationza7d2e2550za7,
		BGl__applicationzd2expanderzd2zzexpand_epsz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_identifierzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl__identifierza7d2ex2551za7,
		BGl__identifierzd2expanderzd2zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lexicalzd2stackzd2envz00zzexpand_epsz00,
		BgL_bgl__lexicalza7d2stack2552za7, BGl__lexicalzd2stackzd2zzexpand_epsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_compilezd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl__compileza7d2expan2553za7,
		BGl__compilezd2expanderzd2zzexpand_epsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2macrozd2definitionz12zd2envzc0zzexpand_epsz00,
		BgL_bgl__addza7d2macroza7d2d2554z00,
		BGl__addzd2macrozd2definitionz12z12zzexpand_epsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_comptimezd2expandzf2errorzd2envzf2zzexpand_epsz00,
		BgL_bgl__comptimeza7d2expa2555za7,
		BGl__comptimezd2expandzf2errorz20zzexpand_epsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl__initialza7d2expan2556za7,
		BGl__initialzd2expanderzd2zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2515z00zzexpand_epsz00,
		BgL_bgl_za7c3anonymousza7a312557z00,
		BGl_zc3anonymousza31778ze3z83zzexpand_epsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2516z00zzexpand_epsz00,
		BgL_bgl_za7c3anonymousza7a312558z00,
		BGl_zc3anonymousza31770ze3z83zzexpand_epsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2524z00zzexpand_epsz00,
		BgL_bgl_za7c3anonymousza7a312559z00,
		BGl_zc3anonymousza31855ze3z83zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2525z00zzexpand_epsz00,
		BgL_bgl_idza7d2ofza7d2idza700za72560z00, BGl_idzd2ofzd2idz00zzexpand_epsz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long
		BgL_checksumz00_1496, char *BgL_fromz00_1497)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_epsz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_epsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_epsz00();
					BGl_cnstzd2initzd2zzexpand_epsz00();
					BGl_importedzd2moduleszd2initz00zzexpand_epsz00();
					BGl_toplevelzd2initzd2zzexpand_epsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_eps");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			{	/* Expand/eps.scm 17 */
				obj_t BgL_cportz00_1485;

				BgL_cportz00_1485 =
					bgl_open_input_string(BGl_string2528z00zzexpand_epsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1486;

					BgL_iz00_1486 = ((long) 32);
				BgL_loopz00_1487:
					if ((BgL_iz00_1486 == ((long) -1)))
						{	/* Expand/eps.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Expand/eps.scm 17 */
							{	/* Expand/eps.scm 17 */
								obj_t BgL_arg2531z00_1489;

								{	/* Expand/eps.scm 17 */

									{	/* Expand/eps.scm 17 */
										obj_t BgL_locationz00_1491;

										BgL_locationz00_1491 = BBOOL(((bool_t) 0));
										{	/* Expand/eps.scm 17 */

											BgL_arg2531z00_1489 =
												BGl_readz00zz__readerz00(BgL_cportz00_1485,
												BgL_locationz00_1491);
										}
									}
								}
								{	/* Expand/eps.scm 17 */
									int BgL_auxz00_1523;

									BgL_auxz00_1523 = (int) (BgL_iz00_1486);
									CNST_TABLE_SET(BgL_auxz00_1523, BgL_arg2531z00_1489);
							}}
							{	/* Expand/eps.scm 17 */
								int BgL_auxz00_1492;

								BgL_auxz00_1492 = (int) ((BgL_iz00_1486 - ((long) 1)));
								{
									long BgL_iz00_1528;

									BgL_iz00_1528 = (long) (BgL_auxz00_1492);
									BgL_iz00_1486 = BgL_iz00_1528;
									goto BgL_loopz00_1487;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			BGl_za2macroza2z00zzexpand_epsz00 = BNIL;
			return (BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 = BNIL, BUNSPEC);
		}
	}



/* add-macro-definition! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t
		BgL_formz00_33)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 50 */
			return (BGl_za2macroza2z00zzexpand_epsz00 =
				MAKE_PAIR(BgL_formz00_33, BGl_za2macroza2z00zzexpand_epsz00), BUNSPEC);
		}
	}



/* _add-macro-definition! */
	obj_t BGl__addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t
		BgL_envz00_1319, obj_t BgL_formz00_1320)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 50 */
			return
				BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(BgL_formz00_1320);
		}
	}



/* add-macro-alias! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t
		BgL_sym1z00_34, obj_t BgL_sym2z00_35)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 56 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_sym1z00_34,
				CNST_TABLE_REF(((long) 0)), BgL_sym2z00_35);
		}
	}



/* _add-macro-alias! */
	obj_t BGl__addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t BgL_envz00_1321,
		obj_t BgL_sym1z00_1322, obj_t BgL_sym2z00_1323)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 56 */
			return
				BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(BgL_sym1z00_1322,
				BgL_sym2z00_1323);
		}
	}



/* lexical-stack */
	BGL_EXPORTED_DEF obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 72 */
			return BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00;
		}
	}



/* _lexical-stack */
	obj_t BGl__lexicalzd2stackzd2zzexpand_epsz00(obj_t BgL_envz00_1324)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 72 */
			return BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00;
		}
	}



/* with-lexical */
	BGL_EXPORTED_DEF obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t
		BgL_newz00_36, obj_t BgL_markz00_37, obj_t BgL_locz00_38,
		obj_t BgL_thunkz00_39)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 78 */
			{	/* Expand/eps.scm 79 */
				obj_t BgL_newzd2idzd2_218;

				obj_t BgL_oldzd2lexicalzd2stackz00_219;

				if (NULLP(BgL_newz00_36))
					{	/* Expand/eps.scm 79 */
						BgL_newzd2idzd2_218 = BNIL;
					}
				else
					{	/* Expand/eps.scm 79 */
						obj_t BgL_head1640z00_249;

						BgL_head1640z00_249 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l1638z00_251;

							obj_t BgL_tail1641z00_252;

							BgL_l1638z00_251 = BgL_newz00_36;
							BgL_tail1641z00_252 = BgL_head1640z00_249;
						BgL_zc3anonymousza31717ze3z83_253:
							if (NULLP(BgL_l1638z00_251))
								{	/* Expand/eps.scm 79 */
									BgL_newzd2idzd2_218 = CDR(BgL_head1640z00_249);
								}
							else
								{	/* Expand/eps.scm 79 */
									obj_t BgL_newtail1642z00_255;

									BgL_newtail1642z00_255 =
										MAKE_PAIR(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR
											(BgL_l1638z00_251), BgL_locz00_38), BNIL);
									SET_CDR(BgL_tail1641z00_252, BgL_newtail1642z00_255);
									{
										obj_t BgL_tail1641z00_1547;

										obj_t BgL_l1638z00_1545;

										BgL_l1638z00_1545 = CDR(BgL_l1638z00_251);
										BgL_tail1641z00_1547 = BgL_newtail1642z00_255;
										BgL_tail1641z00_252 = BgL_tail1641z00_1547;
										BgL_l1638z00_251 = BgL_l1638z00_1545;
										goto BgL_zc3anonymousza31717ze3z83_253;
									}
								}
						}
					}
				BgL_oldzd2lexicalzd2stackz00_219 =
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00;
				{	/* Expand/eps.scm 82 */
					obj_t BgL_arg1704z00_220;

					if (NULLP(BgL_newzd2idzd2_218))
						{	/* Expand/eps.scm 82 */
							BgL_arg1704z00_220 = BNIL;
						}
					else
						{	/* Expand/eps.scm 82 */
							obj_t BgL_head1645z00_223;

							BgL_head1645z00_223 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l1643z00_225;

								obj_t BgL_tail1646z00_226;

								BgL_l1643z00_225 = BgL_newzd2idzd2_218;
								BgL_tail1646z00_226 = BgL_head1645z00_223;
							BgL_zc3anonymousza31706ze3z83_227:
								if (NULLP(BgL_l1643z00_225))
									{	/* Expand/eps.scm 82 */
										BgL_arg1704z00_220 = CDR(BgL_head1645z00_223);
									}
								else
									{	/* Expand/eps.scm 82 */
										obj_t BgL_newtail1647z00_229;

										{	/* Expand/eps.scm 82 */
											obj_t BgL_arg1709z00_231;

											BgL_arg1709z00_231 =
												MAKE_PAIR(CAR(BgL_l1643z00_225), BgL_markz00_37);
											BgL_newtail1647z00_229 =
												MAKE_PAIR(BgL_arg1709z00_231, BNIL);
										}
										SET_CDR(BgL_tail1646z00_226, BgL_newtail1647z00_229);
										{
											obj_t BgL_tail1646z00_1560;

											obj_t BgL_l1643z00_1558;

											BgL_l1643z00_1558 = CDR(BgL_l1643z00_225);
											BgL_tail1646z00_1560 = BgL_newtail1647z00_229;
											BgL_tail1646z00_226 = BgL_tail1646z00_1560;
											BgL_l1643z00_225 = BgL_l1643z00_1558;
											goto BgL_zc3anonymousza31706ze3z83_227;
										}
									}
							}
						}
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 =
						bgl_append2(BgL_arg1704z00_220,
						BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
				}
				{	/* Expand/eps.scm 83 */
					obj_t BgL_resz00_235;

					BgL_resz00_235 =
						BGl_zc3exitza31711ze3z83zzexpand_epsz00(BgL_thunkz00_39);
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 =
						BgL_oldzd2lexicalzd2stackz00_219;
					return BgL_resz00_235;
				}
			}
		}
	}



/* <exit:1711> */
	obj_t BGl_zc3exitza31711ze3z83zzexpand_epsz00(obj_t BgL_thunkz00_1480)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 83 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1608z00_237;

			if (SET_EXIT(BgL_an_exit1608z00_237))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1608z00_237 = (void *) jmpbuf;
					{	/* Expand/eps.scm 83 */

						PUSH_EXIT(BgL_an_exit1608z00_237, ((long) 1));
						{	/* Expand/eps.scm 83 */
							obj_t BgL_an_exitd1609z00_238;

							BgL_an_exitd1609z00_238 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Expand/eps.scm 86 */
								obj_t BgL_res1611z00_241;

								{	/* Expand/eps.scm 86 */
									obj_t BgL_zc3anonymousza31714ze3z83_1325;

									BgL_zc3anonymousza31714ze3z83_1325 =
										make_fx_procedure
										(BGl_zc3anonymousza31714ze3z83zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza31714ze3z83_1325,
										(int) (((long) 0)), BgL_an_exitd1609z00_238);
									BgL_res1611z00_241 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza31714ze3z83_1325, BgL_thunkz00_1480);
								}
								POP_EXIT();
								return BgL_res1611z00_241;
							}
						}
					}
				}
		}
	}



/* _with-lexical */
	obj_t BGl__withzd2lexicalzd2zzexpand_epsz00(obj_t BgL_envz00_1326,
		obj_t BgL_newz00_1327, obj_t BgL_markz00_1328, obj_t BgL_locz00_1329,
		obj_t BgL_thunkz00_1330)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 78 */
			return
				BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_newz00_1327, BgL_markz00_1328,
				BgL_locz00_1329, BgL_thunkz00_1330);
		}
	}



/* <anonymous:1714> */
	obj_t BGl_zc3anonymousza31714ze3z83zzexpand_epsz00(obj_t BgL_envz00_1331,
		obj_t BgL_ez00_1333)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 85 */
			{	/* Expand/eps.scm 86 */
				obj_t BgL_an_exitd1609z00_1332;

				BgL_an_exitd1609z00_1332 =
					PROCEDURE_REF(BgL_envz00_1331, (int) (((long) 0)));
				{
					obj_t BgL_ez00_243;

					BgL_ez00_243 = BgL_ez00_1333;
					if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_243))
						{	/* Expand/eps.scm 86 */
							BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_243,
								CNST_TABLE_REF(((long) 1)));
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1609z00_1332,
								BUNSPEC);
						}
					else
						{	/* Expand/eps.scm 86 */
							return BGl_raisez00zz__errorz00(BgL_ez00_243);
						}
				}
			}
		}
	}



/* expand-units */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t
		BgL_unitsz00_40)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 100 */
			{	/* Expand/eps.scm 101 */
				obj_t BgL_list1726z00_262;

				{	/* Expand/eps.scm 101 */
					obj_t BgL_arg1730z00_264;

					{	/* Expand/eps.scm 101 */
						obj_t BgL_arg1732z00_266;

						BgL_arg1732z00_266 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg1730z00_264 =
							MAKE_PAIR(BGl_string2512z00zzexpand_epsz00, BgL_arg1732z00_266);
					}
					BgL_list1726z00_262 =
						MAKE_PAIR(BGl_string2513z00zzexpand_epsz00, BgL_arg1730z00_264);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1726z00_262);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2512z00zzexpand_epsz00;
			{
				obj_t BgL_hooksz00_270;

				obj_t BgL_hnamesz00_271;

				BgL_hooksz00_270 = BNIL;
				BgL_hnamesz00_271 = BNIL;
			BgL_zc3anonymousza31733ze3z83_272:
				if (NULLP(BgL_hooksz00_270))
					{	/* Expand/eps.scm 101 */
						CNST_TABLE_REF(((long) 2));
					}
				else
					{	/* Expand/eps.scm 101 */
						bool_t BgL_testz00_1593;

						{	/* Expand/eps.scm 101 */
							obj_t BgL_fun1742z00_280;

							BgL_fun1742z00_280 = CAR(BgL_hooksz00_270);
							BgL_testz00_1593 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun1742z00_280) (BgL_fun1742z00_280,
									BEOA));
						}
						if (BgL_testz00_1593)
							{
								obj_t BgL_hnamesz00_1600;

								obj_t BgL_hooksz00_1598;

								BgL_hooksz00_1598 = CDR(BgL_hooksz00_270);
								BgL_hnamesz00_1600 = CDR(BgL_hnamesz00_271);
								BgL_hnamesz00_271 = BgL_hnamesz00_1600;
								BgL_hooksz00_270 = BgL_hooksz00_1598;
								goto BgL_zc3anonymousza31733ze3z83_272;
							}
						else
							{	/* Expand/eps.scm 101 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string2512z00zzexpand_epsz00,
									BGl_string2514z00zzexpand_epsz00, CAR(BgL_hnamesz00_271));
							}
					}
			}
			{	/* Expand/eps.scm 103 */
				obj_t BgL_g1650z00_283;

				BgL_g1650z00_283 = bgl_reverse_bang(BGl_za2macroza2z00zzexpand_epsz00);
				{
					obj_t BgL_l1648z00_285;

					BgL_l1648z00_285 = BgL_g1650z00_283;
				BgL_zc3anonymousza31744ze3z83_286:
					if (PAIRP(BgL_l1648z00_285))
						{	/* Expand/eps.scm 105 */
							{	/* Expand/eps.scm 104 */
								obj_t BgL_xz00_288;

								BgL_xz00_288 = CAR(BgL_l1648z00_285);
								BGl_compilezd2expandzd2zzexpand_epsz00
									(BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_288,
										BGl_initialzd2expanderzd2envz00zzexpand_epsz00));
							}
							{
								obj_t BgL_l1648z00_1610;

								BgL_l1648z00_1610 = CDR(BgL_l1648z00_285);
								BgL_l1648z00_285 = BgL_l1648z00_1610;
								goto BgL_zc3anonymousza31744ze3z83_286;
							}
						}
					else
						{	/* Expand/eps.scm 105 */
							((bool_t) 1);
						}
				}
			}
			{
				obj_t BgL_l1651z00_293;

				BgL_l1651z00_293 = BgL_unitsz00_40;
			BgL_zc3anonymousza31748ze3z83_294:
				if (PAIRP(BgL_l1651z00_293))
					{	/* Expand/eps.scm 114 */
						{	/* Expand/eps.scm 115 */
							obj_t BgL_unitz00_296;

							BgL_unitz00_296 = CAR(BgL_l1651z00_293);
							{	/* Expand/eps.scm 115 */
								bool_t BgL_testz00_1615;

								{	/* Expand/eps.scm 115 */
									obj_t BgL_auxz00_1616;

									BgL_auxz00_1616 =
										STRUCT_REF(BgL_unitz00_296, (int) (((long) 2)));
									BgL_testz00_1615 = PROCEDUREP(BgL_auxz00_1616);
								}
								if (BgL_testz00_1615)
									{	/* Expand/eps.scm 115 */
										CNST_TABLE_REF(((long) 3));
									}
								else
									{	/* Expand/eps.scm 119 */
										obj_t BgL_g1614z00_298;

										BgL_g1614z00_298 =
											STRUCT_REF(BgL_unitz00_296, (int) (((long) 2)));
										{
											obj_t BgL_srcz00_301;

											obj_t BgL_resz00_302;

											BgL_srcz00_301 = BgL_g1614z00_298;
											BgL_resz00_302 = BNIL;
										BgL_zc3anonymousza31751ze3z83_303:
											if (NULLP(BgL_srcz00_301))
												{	/* Expand/eps.scm 122 */
													obj_t BgL_arg1753z00_305;

													BgL_arg1753z00_305 = bgl_reverse_bang(BgL_resz00_302);
													{	/* Expand/eps.scm 122 */
														obj_t BgL_sz00_930;

														BgL_sz00_930 = BgL_unitz00_296;
														{	/* Expand/eps.scm 122 */
															obj_t BgL_xz00_1483;

															{	/* Expand/eps.scm 122 */
																int BgL_auxz00_1626;

																BgL_auxz00_1626 = (int) (((long) 2));
																BgL_xz00_1483 =
																	STRUCT_SET(BgL_sz00_930, BgL_auxz00_1626,
																	BgL_arg1753z00_305);
															} BUNSPEC;
												}}}
											else
												{

													{	/* Expand/eps.scm 123 */
														obj_t BgL_ezd21684zd2_309;

														BgL_ezd21684zd2_309 = CAR(BgL_srcz00_301);
														if (PAIRP(BgL_ezd21684zd2_309))
															{	/* Expand/eps.scm 123 */
																if (
																	(CAR(BgL_ezd21684zd2_309) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Expand/eps.scm 123 */
																		{	/* Expand/eps.scm 127 */
																			obj_t BgL_zc3anonymousza31771ze3z83_1344;

																			BgL_zc3anonymousza31771ze3z83_1344 =
																				make_fx_procedure
																				(BGl_zc3anonymousza31771ze3z83zzexpand_epsz00,
																				(int) (((long) 0)), (int) (((long) 1)));
																			PROCEDURE_SET
																				(BgL_zc3anonymousza31771ze3z83_1344,
																				(int) (((long) 0)), BgL_srcz00_301);
																			BGl_withzd2exceptionzd2handlerz00zz__errorz00
																				(BGl_proc2516z00zzexpand_epsz00,
																				BgL_zc3anonymousza31771ze3z83_1344);
																		}
																		{
																			obj_t BgL_srcz00_1642;

																			BgL_srcz00_1642 = CDR(BgL_srcz00_301);
																			BgL_srcz00_301 = BgL_srcz00_1642;
																			goto BgL_zc3anonymousza31751ze3z83_303;
																		}
																	}
																else
																	{	/* Expand/eps.scm 123 */
																		if (
																			(CAR(BgL_ezd21684zd2_309) ==
																				CNST_TABLE_REF(((long) 5))))
																			{	/* Expand/eps.scm 123 */
																				{	/* Expand/eps.scm 135 */
																					obj_t
																						BgL_zc3anonymousza31779ze3z83_1342;
																					BgL_zc3anonymousza31779ze3z83_1342 =
																						make_fx_procedure
																						(BGl_zc3anonymousza31779ze3z83zzexpand_epsz00,
																						(int) (((long) 0)),
																						(int) (((long) 1)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31779ze3z83_1342,
																						(int) (((long) 0)), BgL_srcz00_301);
																					BGl_withzd2exceptionzd2handlerz00zz__errorz00
																						(BGl_proc2515z00zzexpand_epsz00,
																						BgL_zc3anonymousza31779ze3z83_1342);
																				}
																				{
																					obj_t BgL_srcz00_1654;

																					BgL_srcz00_1654 = CDR(BgL_srcz00_301);
																					BgL_srcz00_301 = BgL_srcz00_1654;
																					goto
																						BgL_zc3anonymousza31751ze3z83_303;
																				}
																			}
																		else
																			{	/* Expand/eps.scm 123 */
																			BgL_tagzd21683zd2_308:
																				{	/* Expand/eps.scm 141 */
																					obj_t BgL_obodyz00_335;

																					BgL_obodyz00_335 =
																						CAR(BgL_srcz00_301);
																					{	/* Expand/eps.scm 141 */
																						obj_t BgL_nbodyz00_336;

																						BgL_nbodyz00_336 =
																							BGl_zc3exitza31786ze3z83zzexpand_epsz00
																							(BgL_obodyz00_335);
																						{	/* Expand/eps.scm 142 */

																							{	/* Expand/eps.scm 150 */
																								obj_t BgL_arg1784z00_337;

																								obj_t BgL_arg1785z00_338;

																								BgL_arg1784z00_337 =
																									CDR(BgL_srcz00_301);
																								BgL_arg1785z00_338 =
																									MAKE_PAIR(BgL_nbodyz00_336,
																									BgL_resz00_302);
																								{
																									obj_t BgL_resz00_1661;

																									obj_t BgL_srcz00_1660;

																									BgL_srcz00_1660 =
																										BgL_arg1784z00_337;
																									BgL_resz00_1661 =
																										BgL_arg1785z00_338;
																									BgL_resz00_302 =
																										BgL_resz00_1661;
																									BgL_srcz00_301 =
																										BgL_srcz00_1660;
																									goto
																										BgL_zc3anonymousza31751ze3z83_303;
																								}
																							}
																						}
																					}
																				}
																			}
																	}
															}
														else
															{	/* Expand/eps.scm 123 */
																goto BgL_tagzd21683zd2_308;
															}
													}
												}
										}
									}
							}
						}
						{
							obj_t BgL_l1651z00_1662;

							BgL_l1651z00_1662 = CDR(BgL_l1651z00_293);
							BgL_l1651z00_293 = BgL_l1651z00_1662;
							goto BgL_zc3anonymousza31748ze3z83_294;
						}
					}
				else
					{	/* Expand/eps.scm 114 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1653z00_358;

				BgL_l1653z00_358 = BgL_unitsz00_40;
			BgL_zc3anonymousza31795ze3z83_359:
				if (PAIRP(BgL_l1653z00_358))
					{	/* Expand/eps.scm 153 */
						{	/* Expand/eps.scm 154 */
							obj_t BgL_unitz00_361;

							BgL_unitz00_361 = CAR(BgL_l1653z00_358);
							{	/* Expand/eps.scm 154 */
								bool_t BgL_testz00_1667;

								{	/* Expand/eps.scm 154 */
									obj_t BgL_auxz00_1668;

									BgL_auxz00_1668 =
										STRUCT_REF(BgL_unitz00_361, (int) (((long) 2)));
									BgL_testz00_1667 = PROCEDUREP(BgL_auxz00_1668);
								}
								if (BgL_testz00_1667)
									{	/* Expand/eps.scm 154 */
										CNST_TABLE_REF(((long) 3));
									}
								else
									{	/* Expand/eps.scm 158 */
										obj_t BgL_g1620z00_363;

										BgL_g1620z00_363 =
											STRUCT_REF(BgL_unitz00_361, (int) (((long) 2)));
										{
											obj_t BgL_srcz00_366;

											obj_t BgL_resz00_367;

											BgL_srcz00_366 = BgL_g1620z00_363;
											BgL_resz00_367 = BNIL;
										BgL_zc3anonymousza31798ze3z83_368:
											if (NULLP(BgL_srcz00_366))
												{	/* Expand/eps.scm 161 */
													obj_t BgL_arg1800z00_370;

													BgL_arg1800z00_370 = bgl_reverse_bang(BgL_resz00_367);
													{	/* Expand/eps.scm 161 */
														obj_t BgL_sz00_960;

														BgL_sz00_960 = BgL_unitz00_361;
														{	/* Expand/eps.scm 161 */
															obj_t BgL_xz00_1484;

															{	/* Expand/eps.scm 161 */
																int BgL_auxz00_1678;

																BgL_auxz00_1678 = (int) (((long) 2));
																BgL_xz00_1484 =
																	STRUCT_SET(BgL_sz00_960, BgL_auxz00_1678,
																	BgL_arg1800z00_370);
															} BUNSPEC;
												}}}
											else
												{	/* Expand/eps.scm 162 */
													obj_t BgL_obodyz00_371;

													BgL_obodyz00_371 = CAR(BgL_srcz00_366);
													{	/* Expand/eps.scm 162 */
														obj_t BgL_nbodyz00_372;

														BgL_nbodyz00_372 =
															BGl_zc3exitza31804ze3z83zzexpand_epsz00
															(BgL_obodyz00_371);
														{	/* Expand/eps.scm 163 */

															{	/* Expand/eps.scm 171 */
																obj_t BgL_arg1801z00_373;

																obj_t BgL_arg1803z00_374;

																BgL_arg1801z00_373 = CDR(BgL_srcz00_366);
																BgL_arg1803z00_374 =
																	MAKE_PAIR(BgL_nbodyz00_372, BgL_resz00_367);
																{
																	obj_t BgL_resz00_1686;

																	obj_t BgL_srcz00_1685;

																	BgL_srcz00_1685 = BgL_arg1801z00_373;
																	BgL_resz00_1686 = BgL_arg1803z00_374;
																	BgL_resz00_367 = BgL_resz00_1686;
																	BgL_srcz00_366 = BgL_srcz00_1685;
																	goto BgL_zc3anonymousza31798ze3z83_368;
																}
															}
														}
													}
												}
										}
									}
							}
						}
						{
							obj_t BgL_l1653z00_1687;

							BgL_l1653z00_1687 = CDR(BgL_l1653z00_358);
							BgL_l1653z00_358 = BgL_l1653z00_1687;
							goto BgL_zc3anonymousza31795ze3z83_359;
						}
					}
				else
					{	/* Expand/eps.scm 153 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Expand/eps.scm 174 */
					{	/* Expand/eps.scm 174 */
						obj_t BgL_port1655z00_395;

						{	/* Expand/eps.scm 174 */
							obj_t BgL_res2495z00_970;

							{	/* Expand/eps.scm 174 */
								obj_t BgL_auxz00_1692;

								BgL_auxz00_1692 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2495z00_970 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1692);
							}
							BgL_port1655z00_395 = BgL_res2495z00_970;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1655z00_395);
						bgl_display_string(BGl_string2517z00zzexpand_epsz00,
							BgL_port1655z00_395);
						{	/* Expand/eps.scm 174 */
							obj_t BgL_arg1813z00_396;

							{	/* Expand/eps.scm 174 */
								bool_t BgL_testz00_1697;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Expand/eps.scm 174 */
										BgL_testz00_1697 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Expand/eps.scm 174 */
										BgL_testz00_1697 = ((bool_t) 0);
									}
								if (BgL_testz00_1697)
									{	/* Expand/eps.scm 174 */
										BgL_arg1813z00_396 = BGl_string2518z00zzexpand_epsz00;
									}
								else
									{	/* Expand/eps.scm 174 */
										BgL_arg1813z00_396 = BGl_string2519z00zzexpand_epsz00;
									}
							}
							bgl_display_obj(BgL_arg1813z00_396, BgL_port1655z00_395);
						}
						bgl_display_string(BGl_string2520z00zzexpand_epsz00,
							BgL_port1655z00_395);
						bgl_display_char(((unsigned char) '\n'), BgL_port1655z00_395);
					}
					{	/* Expand/eps.scm 174 */
						obj_t BgL_list1816z00_399;

						BgL_list1816z00_399 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1816z00_399);
					}
				}
			else
				{	/* Expand/eps.scm 174 */
					obj_t BgL_g1626z00_400;

					obj_t BgL_g1627z00_401;

					{	/* Expand/eps.scm 174 */
						obj_t BgL_list1825z00_414;

						BgL_list1825z00_414 =
							MAKE_PAIR
							(BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00, BNIL);
						BgL_g1626z00_400 = BgL_list1825z00_414;
					}
					BgL_g1627z00_401 = CNST_TABLE_REF(((long) 6));
					{
						obj_t BgL_hooksz00_403;

						obj_t BgL_hnamesz00_404;

						BgL_hooksz00_403 = BgL_g1626z00_400;
						BgL_hnamesz00_404 = BgL_g1627z00_401;
					BgL_zc3anonymousza31817ze3z83_405:
						if (NULLP(BgL_hooksz00_403))
							{	/* Expand/eps.scm 174 */
								return BgL_unitsz00_40;
							}
						else
							{	/* Expand/eps.scm 174 */
								bool_t BgL_testz00_1712;

								{	/* Expand/eps.scm 174 */
									obj_t BgL_fun1824z00_412;

									BgL_fun1824z00_412 = CAR(BgL_hooksz00_403);
									BgL_testz00_1712 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1824z00_412)
										(BgL_fun1824z00_412, BEOA));
								}
								if (BgL_testz00_1712)
									{
										obj_t BgL_hnamesz00_1719;

										obj_t BgL_hooksz00_1717;

										BgL_hooksz00_1717 = CDR(BgL_hooksz00_403);
										BgL_hnamesz00_1719 = CDR(BgL_hnamesz00_404);
										BgL_hnamesz00_404 = BgL_hnamesz00_1719;
										BgL_hooksz00_403 = BgL_hooksz00_1717;
										goto BgL_zc3anonymousza31817ze3z83_405;
									}
								else
									{	/* Expand/eps.scm 174 */
										obj_t BgL_arg1823z00_411;

										BgL_arg1823z00_411 = CAR(BgL_hnamesz00_404);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2521z00zzexpand_epsz00, BgL_arg1823z00_411);
									}
							}
					}
				}
		}
	}



/* <exit:1786> */
	obj_t BGl_zc3exitza31786ze3z83zzexpand_epsz00(obj_t BgL_obodyz00_1478)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 142 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1616z00_340;

			if (SET_EXIT(BgL_an_exit1616z00_340))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1616z00_340 = (void *) jmpbuf;
					{	/* Expand/eps.scm 142 */

						PUSH_EXIT(BgL_an_exit1616z00_340, ((long) 1));
						{	/* Expand/eps.scm 142 */
							obj_t BgL_an_exitd1617z00_341;

							BgL_an_exitd1617z00_341 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Expand/eps.scm 145 */
								obj_t BgL_res1619z00_344;

								{	/* Expand/eps.scm 145 */
									obj_t BgL_zc3anonymousza31792ze3z83_1337;

									obj_t BgL_zc3anonymousza31790ze3z83_1341;

									BgL_zc3anonymousza31792ze3z83_1337 =
										make_fx_procedure
										(BGl_zc3anonymousza31792ze3z83zzexpand_epsz00,
										(int) (((long) 0)), (int) (((long) 1)));
									BgL_zc3anonymousza31790ze3z83_1341 =
										make_fx_procedure
										(BGl_zc3anonymousza31790ze3z83zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza31792ze3z83_1337,
										(int) (((long) 0)), BgL_obodyz00_1478);
									PROCEDURE_SET(BgL_zc3anonymousza31790ze3z83_1341,
										(int) (((long) 0)), BgL_an_exitd1617z00_341);
									BgL_res1619z00_344 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza31790ze3z83_1341,
										BgL_zc3anonymousza31792ze3z83_1337);
								}
								POP_EXIT();
								return BgL_res1619z00_344;
							}
						}
					}
				}
		}
	}



/* <exit:1804> */
	obj_t BGl_zc3exitza31804ze3z83zzexpand_epsz00(obj_t BgL_obodyz00_1479)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 163 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1622z00_376;

			if (SET_EXIT(BgL_an_exit1622z00_376))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1622z00_376 = (void *) jmpbuf;
					{	/* Expand/eps.scm 163 */

						PUSH_EXIT(BgL_an_exit1622z00_376, ((long) 1));
						{	/* Expand/eps.scm 163 */
							obj_t BgL_an_exitd1623z00_377;

							BgL_an_exitd1623z00_377 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Expand/eps.scm 166 */
								obj_t BgL_res1625z00_380;

								{	/* Expand/eps.scm 166 */
									obj_t BgL_zc3anonymousza31809ze3z83_1335;

									obj_t BgL_zc3anonymousza31807ze3z83_1336;

									BgL_zc3anonymousza31809ze3z83_1335 =
										make_fx_procedure
										(BGl_zc3anonymousza31809ze3z83zzexpand_epsz00,
										(int) (((long) 0)), (int) (((long) 1)));
									BgL_zc3anonymousza31807ze3z83_1336 =
										make_fx_procedure
										(BGl_zc3anonymousza31807ze3z83zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza31809ze3z83_1335,
										(int) (((long) 0)), BgL_obodyz00_1479);
									PROCEDURE_SET(BgL_zc3anonymousza31807ze3z83_1336,
										(int) (((long) 0)), BgL_an_exitd1623z00_377);
									BgL_res1625z00_380 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza31807ze3z83_1336,
										BgL_zc3anonymousza31809ze3z83_1335);
								}
								POP_EXIT();
								return BgL_res1625z00_380;
							}
						}
					}
				}
		}
	}



/* _expand-units */
	obj_t BGl__expandzd2unitszd2zzexpand_epsz00(obj_t BgL_envz00_1346,
		obj_t BgL_unitsz00_1347)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 100 */
			return BGl_expandzd2unitszd2zzexpand_epsz00(BgL_unitsz00_1347);
		}
	}



/* handler */
	obj_t BGl_handlerz00zzexpand_epsz00(obj_t BgL_ez00_415)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 112 */
			if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_415))
				{	/* Expand/eps.scm 110 */
					return
						BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_415,
						CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* Expand/eps.scm 110 */
					return BGl_raisez00zz__errorz00(BgL_ez00_415);
				}
		}
	}



/* <anonymous:1809> */
	obj_t BGl_zc3anonymousza31809ze3z83zzexpand_epsz00(obj_t BgL_envz00_1348)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 169 */
			{	/* Expand/eps.scm 170 */
				obj_t BgL_obodyz00_1349;

				BgL_obodyz00_1349 = PROCEDURE_REF(BgL_envz00_1348, (int) (((long) 0)));
				{

					return BGl_compilezd2expandzd2zzexpand_epsz00(BgL_obodyz00_1349);
				}
			}
		}
	}



/* <anonymous:1807> */
	obj_t BGl_zc3anonymousza31807ze3z83zzexpand_epsz00(obj_t BgL_envz00_1350,
		obj_t BgL_ez00_1352)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 165 */
			{	/* Expand/eps.scm 166 */
				obj_t BgL_an_exitd1623z00_1351;

				BgL_an_exitd1623z00_1351 =
					PROCEDURE_REF(BgL_envz00_1350, (int) (((long) 0)));
				{
					obj_t BgL_ez00_383;

					BgL_ez00_383 = BgL_ez00_1352;
					BGl_handlerz00zzexpand_epsz00(BgL_ez00_383);
					if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_383))
						{	/* Expand/eps.scm 168 */
							obj_t BgL_val1624z00_964;

							BgL_val1624z00_964 = CNST_TABLE_REF(((long) 7));
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1623z00_1351,
								BgL_val1624z00_964);
						}
					else
						{	/* Expand/eps.scm 167 */
							return BFALSE;
						}
				}
			}
		}
	}



/* <anonymous:1792> */
	obj_t BGl_zc3anonymousza31792ze3z83zzexpand_epsz00(obj_t BgL_envz00_1353)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 148 */
			{	/* Expand/eps.scm 149 */
				obj_t BgL_obodyz00_1354;

				BgL_obodyz00_1354 = PROCEDURE_REF(BgL_envz00_1353, (int) (((long) 0)));
				{

					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_obodyz00_1354,
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}
	}



/* <anonymous:1790> */
	obj_t BGl_zc3anonymousza31790ze3z83zzexpand_epsz00(obj_t BgL_envz00_1355,
		obj_t BgL_ez00_1357)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 144 */
			{	/* Expand/eps.scm 145 */
				obj_t BgL_an_exitd1617z00_1356;

				BgL_an_exitd1617z00_1356 =
					PROCEDURE_REF(BgL_envz00_1355, (int) (((long) 0)));
				{
					obj_t BgL_ez00_347;

					BgL_ez00_347 = BgL_ez00_1357;
					BGl_handlerz00zzexpand_epsz00(BgL_ez00_347);
					if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_347))
						{	/* Expand/eps.scm 147 */
							obj_t BgL_val1618z00_944;

							BgL_val1618z00_944 = CNST_TABLE_REF(((long) 7));
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1617z00_1356,
								BgL_val1618z00_944);
						}
					else
						{	/* Expand/eps.scm 146 */
							return BFALSE;
						}
				}
			}
		}
	}



/* <anonymous:1779> */
	obj_t BGl_zc3anonymousza31779ze3z83zzexpand_epsz00(obj_t BgL_envz00_1358)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 137 */
			{	/* Expand/eps.scm 138 */
				obj_t BgL_srcz00_1359;

				BgL_srcz00_1359 = PROCEDURE_REF(BgL_envz00_1358, (int) (((long) 0)));
				{

					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(CAR(BgL_srcz00_1359),
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}
	}



/* <anonymous:1778> */
	obj_t BGl_zc3anonymousza31778ze3z83zzexpand_epsz00(obj_t BgL_envz00_1360,
		obj_t BgL_ez00_1361)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 134 */
			{
				obj_t BgL_ez00_328;

				BgL_ez00_328 = BgL_ez00_1361;
				BGl_handlerz00zzexpand_epsz00(BgL_ez00_328);
				return CNST_TABLE_REF(((long) 7));
		}}
	}



/* <anonymous:1771> */
	obj_t BGl_zc3anonymousza31771ze3z83zzexpand_epsz00(obj_t BgL_envz00_1362)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 129 */
			{	/* Expand/eps.scm 130 */
				obj_t BgL_srcz00_1363;

				BgL_srcz00_1363 = PROCEDURE_REF(BgL_envz00_1362, (int) (((long) 0)));
				{

					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(CAR(BgL_srcz00_1363),
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}
	}



/* <anonymous:1770> */
	obj_t BGl_zc3anonymousza31770ze3z83zzexpand_epsz00(obj_t BgL_envz00_1364,
		obj_t BgL_ez00_1365)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 126 */
			{
				obj_t BgL_ez00_319;

				BgL_ez00_319 = BgL_ez00_1365;
				BGl_handlerz00zzexpand_epsz00(BgL_ez00_319);
				return CNST_TABLE_REF(((long) 7));
		}}
	}



/* comptime-expand */
	BGL_EXPORTED_DEF obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t
		BgL_xz00_41)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 179 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_41,
				BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
		}
	}



/* _comptime-expand */
	obj_t BGl__comptimezd2expandzd2zzexpand_epsz00(obj_t BgL_envz00_1367,
		obj_t BgL_xz00_1368)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 179 */
			return BGl_comptimezd2expandzd2zzexpand_epsz00(BgL_xz00_1368);
		}
	}



/* comptime-expand/error */
	BGL_EXPORTED_DEF obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t
		BgL_xz00_42)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 185 */
			return BGl_zc3exitza31828ze3z83zzexpand_epsz00(BgL_xz00_42);
		}
	}



/* <exit:1828> */
	obj_t BGl_zc3exitza31828ze3z83zzexpand_epsz00(obj_t BgL_xz00_1477)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 186 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1628z00_420;

			if (SET_EXIT(BgL_an_exit1628z00_420))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1628z00_420 = (void *) jmpbuf;
					{	/* Expand/eps.scm 186 */

						PUSH_EXIT(BgL_an_exit1628z00_420, ((long) 1));
						{	/* Expand/eps.scm 186 */
							obj_t BgL_an_exitd1629z00_421;

							BgL_an_exitd1629z00_421 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Expand/eps.scm 189 */
								obj_t BgL_res1631z00_424;

								{	/* Expand/eps.scm 189 */
									obj_t BgL_zc3anonymousza31835ze3z83_1369;

									obj_t BgL_zc3anonymousza31831ze3z83_1370;

									BgL_zc3anonymousza31835ze3z83_1369 =
										make_fx_procedure
										(BGl_zc3anonymousza31835ze3z83zzexpand_epsz00,
										(int) (((long) 0)), (int) (((long) 1)));
									BgL_zc3anonymousza31831ze3z83_1370 =
										make_fx_procedure
										(BGl_zc3anonymousza31831ze3z83zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza31835ze3z83_1369,
										(int) (((long) 0)), BgL_xz00_1477);
									PROCEDURE_SET(BgL_zc3anonymousza31831ze3z83_1370,
										(int) (((long) 0)), BgL_xz00_1477);
									BgL_res1631z00_424 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza31831ze3z83_1370,
										BgL_zc3anonymousza31835ze3z83_1369);
								}
								POP_EXIT();
								return BgL_res1631z00_424;
							}
						}
					}
				}
		}
	}



/* _comptime-expand/error */
	obj_t BGl__comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t BgL_envz00_1371,
		obj_t BgL_xz00_1372)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 185 */
			return BGl_zc3exitza31828ze3z83zzexpand_epsz00(BgL_xz00_1372);
		}
	}



/* <anonymous:1835> */
	obj_t BGl_zc3anonymousza31835ze3z83zzexpand_epsz00(obj_t BgL_envz00_1373)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 193 */
			{	/* Expand/eps.scm 194 */
				obj_t BgL_xz00_1374;

				BgL_xz00_1374 = PROCEDURE_REF(BgL_envz00_1373, (int) (((long) 0)));
				{

					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1374,
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}
	}



/* <anonymous:1831> */
	obj_t BGl_zc3anonymousza31831ze3z83zzexpand_epsz00(obj_t BgL_envz00_1375,
		obj_t BgL_ez00_1377)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 188 */
			{	/* Expand/eps.scm 189 */
				obj_t BgL_xz00_1376;

				BgL_xz00_1376 = PROCEDURE_REF(BgL_envz00_1375, (int) (((long) 0)));
				{
					obj_t BgL_ez00_427;

					BgL_ez00_427 = BgL_ez00_1377;
					if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_427))
						{	/* Expand/eps.scm 189 */
							BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_427,
								CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* Expand/eps.scm 189 */
							BFALSE;
						}
					{	/* Expand/eps.scm 191 */
						obj_t BgL_list1833z00_430;

						BgL_list1833z00_430 = MAKE_PAIR(BFALSE, BNIL);
						BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 8)),
							BGl_string2522z00zzexpand_epsz00, BgL_xz00_1376,
							BgL_list1833z00_430);
					}
					{	/* Expand/eps.scm 192 */
						obj_t BgL_list1834z00_431;

						BgL_list1834z00_431 = MAKE_PAIR(BINT(((long) 1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1834z00_431);
					}
				}
			}
		}
	}



/* compile-expand */
	BGL_EXPORTED_DEF obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t
		BgL_xz00_43)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 199 */
			{	/* Expand/eps.scm 200 */
				bool_t BgL_testz00_1828;

				if (CBOOL(BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00))
					{	/* Expand/eps.scm 200 */
						BgL_testz00_1828 = ((bool_t) 1);
					}
				else
					{	/* Expand/eps.scm 200 */
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
							(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
							{	/* Expand/eps.scm 201 */
								BgL_testz00_1828 =
									BGl_2ze3zd3z30zz__r4_numbers_6_5z00
									(BGl_za2compilerzd2debugza2zd2zzengine_paramz00,
									BINT(((long) 1)));
							}
						else
							{	/* Expand/eps.scm 201 */
								BgL_testz00_1828 = ((bool_t) 0);
							}
					}
				if (BgL_testz00_1828)
					{	/* Expand/eps.scm 200 */
						return
							BGl_compilezd2expanderzd2zzexpand_epsz00(BgL_xz00_43,
							BGl_compilezd2expanderzd2envz00zzexpand_epsz00, BNIL);
					}
				else
					{	/* Expand/eps.scm 200 */
						return BgL_xz00_43;
					}
			}
		}
	}



/* _compile-expand */
	obj_t BGl__compilezd2expandzd2zzexpand_epsz00(obj_t BgL_envz00_1378,
		obj_t BgL_xz00_1379)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 199 */
			return BGl_compilezd2expandzd2zzexpand_epsz00(BgL_xz00_1379);
		}
	}



/* initial-expander */
	obj_t BGl_initialzd2expanderzd2zzexpand_epsz00(obj_t BgL_xz00_44,
		obj_t BgL_ez00_45)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 208 */
			{	/* Expand/eps.scm 210 */
				obj_t BgL_e1z00_437;

				if (SYMBOLP(BgL_xz00_44))
					{	/* Expand/eps.scm 211 */
						BgL_e1z00_437 = BGl_identifierzd2expanderzd2envz00zzexpand_epsz00;
					}
				else
					{	/* Expand/eps.scm 211 */
						if (NULLP(BgL_xz00_44))
							{	/* Expand/eps.scm 213 */
								BgL_e1z00_437 =
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2523z00zzexpand_epsz00, BNIL);
							}
						else
							{	/* Expand/eps.scm 213 */
								if (PAIRP(BgL_xz00_44))
									{	/* Expand/eps.scm 217 */
										bool_t BgL_testz00_1844;

										{	/* Expand/eps.scm 217 */
											obj_t BgL_auxz00_1845;

											BgL_auxz00_1845 = CAR(BgL_xz00_44);
											BgL_testz00_1844 = SYMBOLP(BgL_auxz00_1845);
										}
										if (BgL_testz00_1844)
											{	/* Expand/eps.scm 218 */
												obj_t BgL_idz00_449;

												BgL_idz00_449 =
													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR
													(BgL_xz00_44),
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_xz00_44));
												{	/* Expand/eps.scm 220 */
													bool_t BgL_testz00_1851;

													{	/* Expand/eps.scm 220 */
														obj_t BgL_auxz00_1852;

														BgL_auxz00_1852 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_idz00_449,
															BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
														BgL_testz00_1851 = PAIRP(BgL_auxz00_1852);
													}
													if (BgL_testz00_1851)
														{	/* Expand/eps.scm 220 */
															BgL_e1z00_437 =
																BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
														}
													else
														{	/* Expand/eps.scm 222 */
															obj_t BgL_g1633z00_451;

															BgL_g1633z00_451 =
																BGl_getzd2compilerzd2expanderz00zz__macroz00
																(BgL_idz00_449);
															if (CBOOL(BgL_g1633z00_451))
																{	/* Expand/eps.scm 222 */
																	BgL_e1z00_437 = BgL_g1633z00_451;
																}
															else
																{	/* Expand/eps.scm 225 */
																	obj_t BgL_g1635z00_454;

																	BgL_g1635z00_454 =
																		BGl_getzd2evalzd2expanderz00zz__macroz00
																		(BgL_idz00_449);
																	if (CBOOL(BgL_g1635z00_454))
																		{	/* Expand/eps.scm 225 */
																			BgL_e1z00_437 = BgL_g1635z00_454;
																		}
																	else
																		{	/* Expand/eps.scm 225 */
																			BgL_e1z00_437 =
																				BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
																		}
																}
														}
												}
											}
										else
											{	/* Expand/eps.scm 217 */
												BgL_e1z00_437 =
													BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
											}
									}
								else
									{	/* Expand/eps.scm 215 */
										BgL_e1z00_437 = BGl_proc2524z00zzexpand_epsz00;
									}
							}
					}
				{	/* Expand/eps.scm 232 */
					obj_t BgL_newz00_438;

					BgL_newz00_438 =
						PROCEDURE_ENTRY(BgL_e1z00_437) (BgL_e1z00_437, BgL_xz00_44,
						BgL_ez00_45, BEOA);
					{	/* Expand/eps.scm 233 */
						bool_t BgL_testz00_1863;

						if (PAIRP(BgL_newz00_438))
							{	/* Expand/eps.scm 233 */
								if (EXTENDED_PAIRP(BgL_newz00_438))
									{	/* Expand/eps.scm 233 */
										BgL_testz00_1863 = ((bool_t) 0);
									}
								else
									{	/* Expand/eps.scm 233 */
										BgL_testz00_1863 = EXTENDED_PAIRP(BgL_xz00_44);
									}
							}
						else
							{	/* Expand/eps.scm 233 */
								BgL_testz00_1863 = ((bool_t) 0);
							}
						if (BgL_testz00_1863)
							{	/* Expand/eps.scm 234 */
								obj_t BgL_arg1839z00_440;

								obj_t BgL_arg1840z00_441;

								obj_t BgL_arg1841z00_442;

								BgL_arg1839z00_440 = CAR(BgL_newz00_438);
								BgL_arg1840z00_441 = CDR(BgL_newz00_438);
								BgL_arg1841z00_442 = CER(BgL_xz00_44);
								{	/* Expand/eps.scm 234 */
									obj_t BgL_res2497z00_1000;

									BgL_res2497z00_1000 =
										MAKE_EXTENDED_PAIR(BgL_arg1839z00_440, BgL_arg1840z00_441,
										BgL_arg1841z00_442);
									return BgL_res2497z00_1000;
								}
							}
						else
							{	/* Expand/eps.scm 233 */
								return BgL_newz00_438;
							}
					}
				}
			}
		}
	}



/* _initial-expander */
	obj_t BGl__initialzd2expanderzd2zzexpand_epsz00(obj_t BgL_envz00_1338,
		obj_t BgL_xz00_1339, obj_t BgL_ez00_1340)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 208 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1339, BgL_ez00_1340);
		}
	}



/* <anonymous:1855> */
	obj_t BGl_zc3anonymousza31855ze3z83zzexpand_epsz00(obj_t BgL_envz00_1385,
		obj_t BgL_xz00_1386, obj_t BgL_ez00_1387)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 216 */
			return BgL_xz00_1386;
		}
	}



/* compile-expander */
	obj_t BGl_compilezd2expanderzd2zzexpand_epsz00(obj_t BgL_xz00_46,
		obj_t BgL_ez00_47, obj_t BgL_sz00_48)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 240 */
			return
				BGl_expandz00zzexpand_epsz00(BGl_proc2525z00zzexpand_epsz00,
				BgL_xz00_46, BgL_sz00_48);
		}
	}



/* _compile-expander */
	obj_t BGl__compilezd2expanderzd2zzexpand_epsz00(obj_t BgL_envz00_1380,
		obj_t BgL_xz00_1381, obj_t BgL_ez00_1382, obj_t BgL_sz00_1383)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 240 */
			return
				BGl_compilezd2expanderzd2zzexpand_epsz00(BgL_xz00_1381, BgL_ez00_1382,
				BgL_sz00_1383);
		}
	}



/* expand */
	obj_t BGl_expandz00zzexpand_epsz00(obj_t BgL_idzd2ofzd2idz00_1411,
		obj_t BgL_xz00_493, obj_t BgL_sz00_494)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 357 */
			{
				obj_t BgL_xz00_476;

				obj_t BgL_sz00_477;

				obj_t BgL_xz00_484;

				obj_t BgL_sz00_485;

				{
					obj_t BgL_funz00_519;

					obj_t BgL_argz00_520;

					obj_t BgL_varz00_515;

					obj_t BgL_clausesz00_516;

					obj_t BgL_bodyz00_512;

					obj_t BgL_bindingsz00_508;

					obj_t BgL_bodyz00_509;

					obj_t BgL_bindingsz00_505;

					obj_t BgL_bodyz00_506;

					obj_t BgL_loopz00_501;

					obj_t BgL_bindingsz00_502;

					obj_t BgL_bodyz00_503;

					obj_t BgL_pz00_498;

					obj_t BgL_bodyz00_499;

					if (NULLP(BgL_xz00_493))
						{	/* Expand/eps.scm 357 */
							return BgL_xz00_493;
						}
					else
						{	/* Expand/eps.scm 357 */
							if (PAIRP(BgL_xz00_493))
								{	/* Expand/eps.scm 357 */
									if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 12))))
										{	/* Expand/eps.scm 357 */
											return BgL_xz00_493;
										}
									else
										{	/* Expand/eps.scm 357 */
											if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 13))))
												{	/* Expand/eps.scm 357 */
													return BgL_xz00_493;
												}
											else
												{	/* Expand/eps.scm 357 */
													if (
														(CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 14))))
														{	/* Expand/eps.scm 357 */
														BgL_tagzd21690zd2_497:
															{	/* Expand/eps.scm 262 */
																obj_t BgL_arg2145z00_692;

																{	/* Expand/eps.scm 262 */
																	obj_t BgL_arg2151z00_693;

																	BgL_arg2151z00_693 = CDR(BgL_xz00_493);
																	{	/* Expand/eps.scm 262 */
																		obj_t BgL_zc3anonymousza31863ze3z83_1395;

																		BgL_zc3anonymousza31863ze3z83_1395 =
																			make_fx_procedure
																			(BGl_zc3anonymousza31863ze3z83zzexpand_epsz00,
																			(int) (((long) 1)), (int) (((long) 2)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza31863ze3z83_1395,
																			(int) (((long) 0)),
																			BgL_idzd2ofzd2idz00_1411);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza31863ze3z83_1395,
																			(int) (((long) 1)), BgL_sz00_494);
																		{	/* Expand/eps.scm 262 */
																			obj_t BgL_list1862z00_1107;

																			BgL_list1862z00_1107 =
																				MAKE_PAIR(BgL_arg2151z00_693, BNIL);
																			BgL_arg2145z00_692 =
																				BGl_mapz12z12zz__r4_control_features_6_9z00
																				(BgL_zc3anonymousza31863ze3z83_1395,
																				BgL_list1862z00_1107);
																}}}
																SET_CDR(BgL_xz00_493, BgL_arg2145z00_692);
															}
															return BgL_xz00_493;
														}
													else
														{	/* Expand/eps.scm 357 */
															if (
																(CAR(BgL_xz00_493) ==
																	CNST_TABLE_REF(((long) 15))))
																{	/* Expand/eps.scm 357 */
																	goto BgL_tagzd21690zd2_497;
																}
															else
																{	/* Expand/eps.scm 357 */
																	if (
																		(CAR(BgL_xz00_493) ==
																			CNST_TABLE_REF(((long) 16))))
																		{	/* Expand/eps.scm 357 */
																			goto BgL_tagzd21690zd2_497;
																		}
																	else
																		{	/* Expand/eps.scm 357 */
																			obj_t BgL_carzd21748zd2_533;

																			obj_t BgL_cdrzd21749zd2_534;

																			BgL_carzd21748zd2_533 = CAR(BgL_xz00_493);
																			BgL_cdrzd21749zd2_534 = CDR(BgL_xz00_493);
																			{

																				if (
																					(BgL_carzd21748zd2_533 ==
																						CNST_TABLE_REF(((long) 20))))
																					{	/* Expand/eps.scm 357 */
																					BgL_kapzd21750zd2_535:
																						if (PAIRP(BgL_cdrzd21749zd2_534))
																							{	/* Expand/eps.scm 357 */
																								BgL_pz00_498 =
																									CAR(BgL_cdrzd21749zd2_534);
																								BgL_bodyz00_499 =
																									CDR(BgL_cdrzd21749zd2_534);
																								{	/* Expand/eps.scm 265 */
																									obj_t BgL_framez00_694;

																									BgL_framez00_694 =
																										BGl_protozd2ze3framez31zzexpand_epsz00
																										(BgL_idzd2ofzd2idz00_1411,
																										BgL_pz00_498);
																									{	/* Expand/eps.scm 266 */
																										obj_t BgL_arg2155z00_695;

																										obj_t BgL_arg2159z00_696;

																										BgL_arg2155z00_695 =
																											CDR(BgL_xz00_493);
																										{	/* Expand/eps.scm 266 */
																											obj_t BgL_arg2165z00_697;

																											BgL_arg2165z00_697 =
																												bgl_append2
																												(BgL_framez00_694,
																												BgL_sz00_494);
																											{	/* Expand/eps.scm 266 */
																												obj_t
																													BgL_zc3anonymousza31863ze3z83_1404;
																												BgL_zc3anonymousza31863ze3z83_1404
																													=
																													make_fx_procedure
																													(BGl_zc3anonymousza31863ze3_2498z83zzexpand_epsz00,
																													(int) (((long) 1)),
																													(int) (((long) 2)));
																												PROCEDURE_SET
																													(BgL_zc3anonymousza31863ze3z83_1404,
																													(int) (((long) 0)),
																													BgL_idzd2ofzd2idz00_1411);
																												PROCEDURE_SET
																													(BgL_zc3anonymousza31863ze3z83_1404,
																													(int) (((long) 1)),
																													BgL_arg2165z00_697);
																												{	/* Expand/eps.scm 266 */
																													obj_t
																														BgL_list1862z00_1115;
																													BgL_list1862z00_1115 =
																														MAKE_PAIR
																														(BgL_bodyz00_499,
																														BNIL);
																													BgL_arg2159z00_696 =
																														BGl_mapz12z12zz__r4_control_features_6_9z00
																														(BgL_zc3anonymousza31863ze3z83_1404,
																														BgL_list1862z00_1115);
																										}}}
																										SET_CDR(BgL_arg2155z00_695,
																											BgL_arg2159z00_696);
																									}
																									return BgL_xz00_493;
																								}
																							}
																						else
																							{	/* Expand/eps.scm 357 */
																								if (
																									(CAR(BgL_xz00_493) ==
																										CNST_TABLE_REF(((long)
																												11))))
																									{	/* Expand/eps.scm 357 */
																										BgL_xz00_484 = BgL_xz00_493;
																										BgL_sz00_485 = BgL_sz00_494;
																									BgL_zc3anonymousza31864ze3z83_486:
																										{	/* Expand/eps.scm 253 */
																											obj_t BgL_framez00_487;

																											{	/* Expand/eps.scm 253 */
																												obj_t
																													BgL_arg1869z00_492;
																												{	/* Expand/eps.scm 253 */
																													obj_t
																														BgL_pairz00_1004;
																													BgL_pairz00_1004 =
																														BgL_xz00_484;
																													BgL_arg1869z00_492 =
																														CAR(CDR
																														(BgL_pairz00_1004));
																												}
																												BgL_framez00_487 =
																													BGl_protozd2ze3framez31zzexpand_epsz00
																													(BgL_idzd2ofzd2idz00_1411,
																													BgL_arg1869z00_492);
																											}
																											{	/* Expand/eps.scm 254 */
																												obj_t
																													BgL_arg1865z00_488;
																												obj_t
																													BgL_arg1866z00_489;
																												BgL_arg1865z00_488 =
																													CDR(BgL_xz00_484);
																												{	/* Expand/eps.scm 254 */
																													obj_t
																														BgL_arg1867z00_490;
																													obj_t
																														BgL_arg1868z00_491;
																													{	/* Expand/eps.scm 254 */
																														obj_t
																															BgL_pairz00_1009;
																														BgL_pairz00_1009 =
																															BgL_xz00_484;
																														BgL_arg1867z00_490 =
																															CDR(CDR
																															(BgL_pairz00_1009));
																													}
																													BgL_arg1868z00_491 =
																														bgl_append2
																														(BgL_framez00_487,
																														BgL_sz00_485);
																													{	/* Expand/eps.scm 254 */
																														obj_t
																															BgL_zc3anonymousza31863ze3z83_1399;
																														BgL_zc3anonymousza31863ze3z83_1399
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza31863ze3_2510z83zzexpand_epsz00,
																															(int) (((long)
																																	1)),
																															(int) (((long)
																																	2)));
																														PROCEDURE_SET
																															(BgL_zc3anonymousza31863ze3z83_1399,
																															(int) (((long)
																																	0)),
																															BgL_idzd2ofzd2idz00_1411);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza31863ze3z83_1399,
																															(int) (((long)
																																	1)),
																															BgL_arg1868z00_491);
																														{	/* Expand/eps.scm 254 */
																															obj_t
																																BgL_list1862z00_1017;
																															BgL_list1862z00_1017
																																=
																																MAKE_PAIR
																																(BgL_arg1867z00_490,
																																BNIL);
																															BgL_arg1866z00_489
																																=
																																BGl_mapz12z12zz__r4_control_features_6_9z00
																																(BgL_zc3anonymousza31863ze3z83_1399,
																																BgL_list1862z00_1017);
																												}}}
																												SET_CDR
																													(BgL_arg1865z00_488,
																													BgL_arg1866z00_489);
																											}
																											return BgL_xz00_484;
																										}
																									}
																								else
																									{	/* Expand/eps.scm 357 */
																										if (
																											(CAR(BgL_xz00_493) ==
																												CNST_TABLE_REF(((long)
																														17))))
																											{	/* Expand/eps.scm 357 */
																											BgL_tagzd21697zd2_514:
																												{	/* Expand/eps.scm 323 */
																													obj_t
																														BgL_arg2364z00_803;
																													{	/* Expand/eps.scm 323 */
																														obj_t
																															BgL_arg2370z00_804;
																														BgL_arg2370z00_804 =
																															CDR(BgL_xz00_493);
																														{	/* Expand/eps.scm 323 */
																															obj_t
																																BgL_zc3anonymousza31863ze3z83_1400;
																															BgL_zc3anonymousza31863ze3z83_1400
																																=
																																make_fx_procedure
																																(BGl_zc3anonymousza31863ze3_2506z83zzexpand_epsz00,
																																(int) (((long)
																																		1)),
																																(int) (((long)
																																		2)));
																															PROCEDURE_SET
																																(BgL_zc3anonymousza31863ze3z83_1400,
																																(int) (((long)
																																		0)),
																																BgL_idzd2ofzd2idz00_1411);
																															PROCEDURE_SET
																																(BgL_zc3anonymousza31863ze3z83_1400,
																																(int) (((long)
																																		1)),
																																BgL_sz00_494);
																															{	/* Expand/eps.scm 323 */
																																obj_t
																																	BgL_list1862z00_1253;
																																BgL_list1862z00_1253
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2370z00_804,
																																	BNIL);
																																BgL_arg2364z00_803
																																	=
																																	BGl_mapz12z12zz__r4_control_features_6_9z00
																																	(BgL_zc3anonymousza31863ze3z83_1400,
																																	BgL_list1862z00_1253);
																													}}}
																													SET_CDR(BgL_xz00_493,
																														BgL_arg2364z00_803);
																												}
																												return BgL_xz00_493;
																											}
																										else
																											{	/* Expand/eps.scm 357 */
																												if (
																													(CAR(BgL_xz00_493) ==
																														CNST_TABLE_REF((
																																(long) 18))))
																													{	/* Expand/eps.scm 357 */
																													BgL_tagzd21699zd2_518:
																														{	/* Expand/eps.scm 333 */
																															obj_t
																																BgL_arg2409z00_817;
																															{	/* Expand/eps.scm 333 */
																																obj_t
																																	BgL_arg2416z00_818;
																																BgL_arg2416z00_818
																																	=
																																	CDR
																																	(BgL_xz00_493);
																																{	/* Expand/eps.scm 333 */
																																	obj_t
																																		BgL_zc3anonymousza31863ze3z83_1401;
																																	BgL_zc3anonymousza31863ze3z83_1401
																																		=
																																		make_fx_procedure
																																		(BGl_zc3anonymousza31863ze3_2508z83zzexpand_epsz00,
																																		(int) ((
																																				(long)
																																				1)),
																																		(int) ((
																																				(long)
																																				2)));
																																	PROCEDURE_SET
																																		(BgL_zc3anonymousza31863ze3z83_1401,
																																		(int) ((
																																				(long)
																																				0)),
																																		BgL_idzd2ofzd2idz00_1411);
																																	PROCEDURE_SET
																																		(BgL_zc3anonymousza31863ze3z83_1401,
																																		(int) ((
																																				(long)
																																				1)),
																																		BgL_sz00_494);
																																	{	/* Expand/eps.scm 333 */
																																		obj_t
																																			BgL_list1862z00_1276;
																																		BgL_list1862z00_1276
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2416z00_818,
																																			BNIL);
																																		BgL_arg2409z00_817
																																			=
																																			BGl_mapz12z12zz__r4_control_features_6_9z00
																																			(BgL_zc3anonymousza31863ze3z83_1401,
																																			BgL_list1862z00_1276);
																															}}}
																															SET_CDR
																																(BgL_xz00_493,
																																BgL_arg2409z00_817);
																														}
																														return BgL_xz00_493;
																													}
																												else
																													{	/* Expand/eps.scm 357 */
																														if (
																															(CAR(BgL_xz00_493)
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		19))))
																															{	/* Expand/eps.scm 357 */
																																goto
																																	BgL_tagzd21699zd2_518;
																															}
																														else
																															{	/* Expand/eps.scm 357 */
																																if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_xz00_493), BUNSPEC))
																																	{	/* Expand/eps.scm 357 */
																																		if (NULLP
																																			(CDR
																																				(BgL_xz00_493)))
																																			{	/* Expand/eps.scm 357 */
																																				return
																																					BgL_xz00_493;
																																			}
																																		else
																																			{	/* Expand/eps.scm 357 */
																																				if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																					{	/* Expand/eps.scm 357 */
																																						BgL_xz00_476
																																							=
																																							BgL_xz00_493;
																																						BgL_sz00_477
																																							=
																																							BgL_sz00_494;
																																					BgL_zc3anonymousza31860ze3z83_478:
																																						{	/* Expand/eps.scm 250 */
																																							obj_t
																																								BgL_zc3anonymousza31863ze3z83_1402;
																																							BgL_zc3anonymousza31863ze3z83_1402
																																								=
																																								make_fx_procedure
																																								(BGl_zc3anonymousza31863ze3_2511z83zzexpand_epsz00,
																																								(int)
																																								(((long) 1)), (int) (((long) 2)));
																																							PROCEDURE_SET
																																								(BgL_zc3anonymousza31863ze3z83_1402,
																																								(int)
																																								(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																							PROCEDURE_SET
																																								(BgL_zc3anonymousza31863ze3z83_1402,
																																								(int)
																																								(((long) 1)), BgL_sz00_477);
																																							{	/* Expand/eps.scm 250 */
																																								obj_t
																																									BgL_list1862z00_1003;
																																								BgL_list1862z00_1003
																																									=
																																									MAKE_PAIR
																																									(BgL_xz00_476,
																																									BNIL);
																																								return
																																									BGl_mapz12z12zz__r4_control_features_6_9z00
																																									(BgL_zc3anonymousza31863ze3z83_1402,
																																									BgL_list1862z00_1003);
																																							}
																																						}
																																					}
																																				else
																																					{	/* Expand/eps.scm 357 */
																																					BgL_tagzd21703zd2_524:
																																						{	/* Expand/eps.scm 344 */
																																							bool_t
																																								BgL_testz00_2005;
																																							{	/* Expand/eps.scm 344 */
																																								bool_t
																																									BgL_testz00_2006;
																																								{	/* Expand/eps.scm 344 */
																																									obj_t
																																										BgL_auxz00_2007;
																																									BgL_auxz00_2007
																																										=
																																										CAR
																																										(BgL_xz00_493);
																																									BgL_testz00_2006
																																										=
																																										SYMBOLP
																																										(BgL_auxz00_2007);
																																								}
																																								if (BgL_testz00_2006)
																																									{	/* Expand/eps.scm 344 */
																																										obj_t
																																											BgL_arg2448z00_835;
																																										obj_t
																																											BgL_arg2451z00_836;
																																										BgL_arg2448z00_835
																																											=
																																											BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																											(CAR
																																											(BgL_xz00_493),
																																											BFALSE);
																																										BgL_arg2451z00_836
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 11));
																																										BgL_testz00_2005
																																											=
																																											(BgL_arg2448z00_835
																																											==
																																											BgL_arg2451z00_836);
																																									}
																																								else
																																									{	/* Expand/eps.scm 344 */
																																										BgL_testz00_2005
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_testz00_2005)
																																								{
																																									obj_t
																																										BgL_sz00_2015;
																																									obj_t
																																										BgL_xz00_2014;
																																									BgL_xz00_2014
																																										=
																																										BgL_xz00_493;
																																									BgL_sz00_2015
																																										=
																																										BgL_sz00_494;
																																									BgL_sz00_485
																																										=
																																										BgL_sz00_2015;
																																									BgL_xz00_484
																																										=
																																										BgL_xz00_2014;
																																									goto
																																										BgL_zc3anonymousza31864ze3z83_486;
																																								}
																																							else
																																								{	/* Expand/eps.scm 346 */
																																									obj_t
																																										BgL_nxz00_824;
																																									{	/* Expand/eps.scm 346 */
																																										obj_t
																																											BgL_zc3anonymousza31863ze3z83_1403;
																																										BgL_zc3anonymousza31863ze3z83_1403
																																											=
																																											make_fx_procedure
																																											(BGl_zc3anonymousza31863ze3_2509z83zzexpand_epsz00,
																																											(int)
																																											(((long) 1)), (int) (((long) 2)));
																																										PROCEDURE_SET
																																											(BgL_zc3anonymousza31863ze3z83_1403,
																																											(int)
																																											(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																										PROCEDURE_SET
																																											(BgL_zc3anonymousza31863ze3z83_1403,
																																											(int)
																																											(((long) 1)), BgL_sz00_494);
																																										{	/* Expand/eps.scm 346 */
																																											obj_t
																																												BgL_list1862z00_1301;
																																											BgL_list1862z00_1301
																																												=
																																												MAKE_PAIR
																																												(BgL_xz00_493,
																																												BNIL);
																																											BgL_nxz00_824
																																												=
																																												BGl_mapz12z12zz__r4_control_features_6_9z00
																																												(BgL_zc3anonymousza31863ze3z83_1403,
																																												BgL_list1862z00_1301);
																																									}}
																																									{	/* Expand/eps.scm 347 */
																																										bool_t
																																											BgL_testz00_2025;
																																										{	/* Expand/eps.scm 347 */
																																											obj_t
																																												BgL_auxz00_2026;
																																											BgL_auxz00_2026
																																												=
																																												CAR
																																												(BgL_nxz00_824);
																																											BgL_testz00_2025
																																												=
																																												SYMBOLP
																																												(BgL_auxz00_2026);
																																										}
																																										if (BgL_testz00_2025)
																																											{	/* Expand/eps.scm 348 */
																																												obj_t
																																													BgL_idz00_826;
																																												BgL_idz00_826
																																													=
																																													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																													(CAR
																																													(BgL_nxz00_824),
																																													BFALSE);
																																												{	/* Expand/eps.scm 348 */

																																													{	/* Expand/eps.scm 349 */
																																														bool_t
																																															BgL_testz00_2031;
																																														{	/* Expand/eps.scm 349 */
																																															obj_t
																																																BgL_auxz00_2032;
																																															BgL_auxz00_2032
																																																=
																																																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																																(BgL_idz00_826,
																																																BgL_sz00_494);
																																															BgL_testz00_2031
																																																=
																																																PAIRP
																																																(BgL_auxz00_2032);
																																														}
																																														if (BgL_testz00_2031)
																																															{	/* Expand/eps.scm 349 */
																																																return
																																																	BgL_nxz00_824;
																																															}
																																														else
																																															{	/* Expand/eps.scm 351 */
																																																obj_t
																																																	BgL_bz00_828;
																																																{	/* Expand/eps.scm 351 */
																																																	obj_t
																																																		BgL__ortest_1637z00_830;
																																																	BgL__ortest_1637z00_830
																																																		=
																																																		BGl_findzd2Gzd2expanderz00zzexpand_expanderz00
																																																		(BgL_idz00_826);
																																																	if (CBOOL(BgL__ortest_1637z00_830))
																																																		{	/* Expand/eps.scm 351 */
																																																			BgL_bz00_828
																																																				=
																																																				BgL__ortest_1637z00_830;
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 351 */
																																																			BgL_bz00_828
																																																				=
																																																				BGl_findzd2Ozd2expanderz00zzexpand_expanderz00
																																																				(BgL_idz00_826);
																																																		}
																																																}
																																																if (CBOOL(BgL_bz00_828))
																																																	{	/* Expand/eps.scm 354 */
																																																		obj_t
																																																			BgL_ez00_829;
																																																		BgL_ez00_829
																																																			=
																																																			STRUCT_REF
																																																			(BgL_bz00_828,
																																																			(int)
																																																			(((long) 1)));
																																																		return
																																																			PROCEDURE_ENTRY
																																																			(BgL_ez00_829)
																																																			(BgL_ez00_829,
																																																			BgL_xz00_493,
																																																			BGl_initialzd2expanderzd2envz00zzexpand_epsz00,
																																																			BEOA);
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 353 */
																																																		return
																																																			BgL_nxz00_824;
																																																	}
																																															}
																																													}
																																												}
																																											}
																																										else
																																											{	/* Expand/eps.scm 347 */
																																												return
																																													BgL_nxz00_824;
																																											}
																																									}
																																								}
																																						}
																																					}
																																			}
																																	}
																																else
																																	{	/* Expand/eps.scm 357 */
																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																			{
																																				obj_t
																																					BgL_sz00_2048;
																																				obj_t
																																					BgL_xz00_2047;
																																				BgL_xz00_2047
																																					=
																																					BgL_xz00_493;
																																				BgL_sz00_2048
																																					=
																																					BgL_sz00_494;
																																				BgL_sz00_477
																																					=
																																					BgL_sz00_2048;
																																				BgL_xz00_476
																																					=
																																					BgL_xz00_2047;
																																				goto
																																					BgL_zc3anonymousza31860ze3z83_478;
																																			}
																																		else
																																			{	/* Expand/eps.scm 357 */
																																				goto
																																					BgL_tagzd21703zd2_524;
																																			}
																																	}
																															}
																													}
																											}
																									}
																							}
																					}
																				else
																					{	/* Expand/eps.scm 357 */
																						if (
																							(BgL_carzd21748zd2_533 ==
																								CNST_TABLE_REF(((long) 21))))
																							{	/* Expand/eps.scm 357 */
																								goto BgL_kapzd21750zd2_535;
																							}
																						else
																							{	/* Expand/eps.scm 357 */
																								if (
																									(BgL_carzd21748zd2_533 ==
																										CNST_TABLE_REF(((long)
																												22))))
																									{	/* Expand/eps.scm 357 */
																										goto BgL_kapzd21750zd2_535;
																									}
																								else
																									{	/* Expand/eps.scm 357 */
																										if (
																											(BgL_carzd21748zd2_533 ==
																												CNST_TABLE_REF(((long)
																														23))))
																											{	/* Expand/eps.scm 357 */
																												goto
																													BgL_kapzd21750zd2_535;
																											}
																										else
																											{	/* Expand/eps.scm 357 */
																												if (
																													(CAR(BgL_xz00_493) ==
																														CNST_TABLE_REF((
																																(long) 9))))
																													{	/* Expand/eps.scm 357 */
																														if (PAIRP
																															(BgL_cdrzd21749zd2_534))
																															{	/* Expand/eps.scm 357 */
																																obj_t
																																	BgL_carzd21838zd2_543;
																																obj_t
																																	BgL_cdrzd21839zd2_544;
																																BgL_carzd21838zd2_543
																																	=
																																	CAR
																																	(BgL_cdrzd21749zd2_534);
																																BgL_cdrzd21839zd2_544
																																	=
																																	CDR
																																	(BgL_cdrzd21749zd2_534);
																																if (SYMBOLP
																																	(BgL_carzd21838zd2_543))
																																	{	/* Expand/eps.scm 357 */
																																		if (PAIRP
																																			(BgL_cdrzd21839zd2_544))
																																			{	/* Expand/eps.scm 357 */
																																				BgL_loopz00_501
																																					=
																																					BgL_carzd21838zd2_543;
																																				BgL_bindingsz00_502
																																					=
																																					CAR
																																					(BgL_cdrzd21839zd2_544);
																																				BgL_bodyz00_503
																																					=
																																					CDR
																																					(BgL_cdrzd21839zd2_544);
																																				{	/* Expand/eps.scm 269 */
																																					obj_t
																																						BgL_idz00_698;
																																					BgL_idz00_698
																																						=
																																						BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																						(BgL_loopz00_501,
																																						BFALSE);
																																					{	/* Expand/eps.scm 269 */
																																						obj_t
																																							BgL_framez00_699;
																																						{	/* Expand/eps.scm 270 */
																																							obj_t
																																								BgL_arg2198z00_713;
																																							if (NULLP(BgL_bindingsz00_502))
																																								{	/* Expand/eps.scm 270 */
																																									BgL_arg2198z00_713
																																										=
																																										BNIL;
																																								}
																																							else
																																								{	/* Expand/eps.scm 270 */
																																									obj_t
																																										BgL_head1658z00_716;
																																									BgL_head1658z00_716
																																										=
																																										MAKE_PAIR
																																										(BNIL,
																																										BNIL);
																																									{
																																										obj_t
																																											BgL_l1656z00_718;
																																										obj_t
																																											BgL_tail1659z00_719;
																																										BgL_l1656z00_718
																																											=
																																											BgL_bindingsz00_502;
																																										BgL_tail1659z00_719
																																											=
																																											BgL_head1658z00_716;
																																									BgL_zc3anonymousza32200ze3z83_720:
																																										if (NULLP(BgL_l1656z00_718))
																																											{	/* Expand/eps.scm 270 */
																																												BgL_arg2198z00_713
																																													=
																																													CDR
																																													(BgL_head1658z00_716);
																																											}
																																										else
																																											{	/* Expand/eps.scm 270 */
																																												obj_t
																																													BgL_newtail1660z00_722;
																																												{	/* Expand/eps.scm 270 */
																																													obj_t
																																														BgL_arg2213z00_724;
																																													{	/* Expand/eps.scm 270 */
																																														obj_t
																																															BgL_bz00_726;
																																														BgL_bz00_726
																																															=
																																															CAR
																																															(BgL_l1656z00_718);
																																														{	/* Expand/eps.scm 272 */
																																															bool_t
																																																BgL_testz00_2078;
																																															if (PAIRP(BgL_bz00_726))
																																																{	/* Expand/eps.scm 272 */
																																																	obj_t
																																																		BgL_auxz00_2081;
																																																	BgL_auxz00_2081
																																																		=
																																																		CAR
																																																		(BgL_bz00_726);
																																																	BgL_testz00_2078
																																																		=
																																																		SYMBOLP
																																																		(BgL_auxz00_2081);
																																																}
																																															else
																																																{	/* Expand/eps.scm 272 */
																																																	BgL_testz00_2078
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																															if (BgL_testz00_2078)
																																																{	/* Expand/eps.scm 272 */
																																																	BgL_arg2213z00_724
																																																		=
																																																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																		(CAR
																																																		(BgL_bz00_726),
																																																		BFALSE);
																																																}
																																															else
																																																{	/* Expand/eps.scm 272 */
																																																	if (SYMBOLP(BgL_bz00_726))
																																																		{	/* Expand/eps.scm 274 */
																																																			BgL_arg2213z00_724
																																																				=
																																																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																				(BgL_bz00_726,
																																																				BFALSE);
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 274 */
																																																			BgL_arg2213z00_724
																																																				=
																																																				BGl_errorz00zz__errorz00
																																																				(CNST_TABLE_REF
																																																				(((long) 9)), BGl_string2523z00zzexpand_epsz00, BgL_xz00_493);
																																													}}}}
																																													BgL_newtail1660z00_722
																																														=
																																														MAKE_PAIR
																																														(BgL_arg2213z00_724,
																																														BNIL);
																																												}
																																												SET_CDR
																																													(BgL_tail1659z00_719,
																																													BgL_newtail1660z00_722);
																																												{
																																													obj_t
																																														BgL_tail1659z00_2095;
																																													obj_t
																																														BgL_l1656z00_2093;
																																													BgL_l1656z00_2093
																																														=
																																														CDR
																																														(BgL_l1656z00_718);
																																													BgL_tail1659z00_2095
																																														=
																																														BgL_newtail1660z00_722;
																																													BgL_tail1659z00_719
																																														=
																																														BgL_tail1659z00_2095;
																																													BgL_l1656z00_718
																																														=
																																														BgL_l1656z00_2093;
																																													goto
																																														BgL_zc3anonymousza32200ze3z83_720;
																																												}
																																											}
																																									}
																																								}
																																							BgL_framez00_699
																																								=
																																								MAKE_PAIR
																																								(BgL_idz00_698,
																																								BgL_arg2198z00_713);
																																						}
																																						{	/* Expand/eps.scm 270 */
																																							obj_t
																																								BgL_nsz00_700;
																																							BgL_nsz00_700
																																								=
																																								bgl_append2
																																								(BgL_framez00_699,
																																								BgL_sz00_494);
																																							{	/* Expand/eps.scm 279 */

																																								{
																																									obj_t
																																										BgL_l1661z00_702;
																																									BgL_l1661z00_702
																																										=
																																										BgL_bindingsz00_502;
																																								BgL_zc3anonymousza32166ze3z83_703:
																																									if (PAIRP(BgL_l1661z00_702))
																																										{	/* Expand/eps.scm 280 */
																																											{	/* Expand/eps.scm 281 */
																																												obj_t
																																													BgL_bz00_705;
																																												BgL_bz00_705
																																													=
																																													CAR
																																													(BgL_l1661z00_702);
																																												if (PAIRP(BgL_bz00_705))
																																													{	/* Expand/eps.scm 282 */
																																														obj_t
																																															BgL_arg2172z00_707;
																																														{	/* Expand/eps.scm 282 */
																																															obj_t
																																																BgL_arg2178z00_708;
																																															BgL_arg2178z00_708
																																																=
																																																CDR
																																																(BgL_bz00_705);
																																															{	/* Expand/eps.scm 282 */
																																																obj_t
																																																	BgL_zc3anonymousza31863ze3z83_1405;
																																																BgL_zc3anonymousza31863ze3z83_1405
																																																	=
																																																	make_fx_procedure
																																																	(BGl_zc3anonymousza31863ze3_2499z83zzexpand_epsz00,
																																																	(int)
																																																	(((long) 1)), (int) (((long) 2)));
																																																PROCEDURE_SET
																																																	(BgL_zc3anonymousza31863ze3z83_1405,
																																																	(int)
																																																	(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																																PROCEDURE_SET
																																																	(BgL_zc3anonymousza31863ze3z83_1405,
																																																	(int)
																																																	(((long) 1)), BgL_nsz00_700);
																																																{	/* Expand/eps.scm 282 */
																																																	obj_t
																																																		BgL_list1862z00_1145;
																																																	BgL_list1862z00_1145
																																																		=
																																																		MAKE_PAIR
																																																		(BgL_arg2178z00_708,
																																																		BNIL);
																																																	BgL_arg2172z00_707
																																																		=
																																																		BGl_mapz12z12zz__r4_control_features_6_9z00
																																																		(BgL_zc3anonymousza31863ze3z83_1405,
																																																		BgL_list1862z00_1145);
																																														}}}
																																														SET_CDR
																																															(BgL_bz00_705,
																																															BgL_arg2172z00_707);
																																													}
																																												else
																																													{	/* Expand/eps.scm 281 */
																																														BFALSE;
																																													}
																																											}
																																											{
																																												obj_t
																																													BgL_l1661z00_2114;
																																												BgL_l1661z00_2114
																																													=
																																													CDR
																																													(BgL_l1661z00_702);
																																												BgL_l1661z00_702
																																													=
																																													BgL_l1661z00_2114;
																																												goto
																																													BgL_zc3anonymousza32166ze3z83_703;
																																											}
																																										}
																																									else
																																										{	/* Expand/eps.scm 280 */
																																											((bool_t) 1);
																																										}
																																								}
																																								{	/* Expand/eps.scm 284 */
																																									obj_t
																																										BgL_arg2187z00_711;
																																									obj_t
																																										BgL_arg2192z00_712;
																																									{	/* Expand/eps.scm 284 */
																																										obj_t
																																											BgL_pairz00_1149;
																																										BgL_pairz00_1149
																																											=
																																											BgL_xz00_493;
																																										BgL_arg2187z00_711
																																											=
																																											CDR
																																											(CDR
																																											(BgL_pairz00_1149));
																																									}
																																									{	/* Expand/eps.scm 284 */
																																										obj_t
																																											BgL_zc3anonymousza31863ze3z83_1396;
																																										BgL_zc3anonymousza31863ze3z83_1396
																																											=
																																											make_fx_procedure
																																											(BGl_zc3anonymousza31863ze3_2500z83zzexpand_epsz00,
																																											(int)
																																											(((long) 1)), (int) (((long) 2)));
																																										PROCEDURE_SET
																																											(BgL_zc3anonymousza31863ze3z83_1396,
																																											(int)
																																											(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																										PROCEDURE_SET
																																											(BgL_zc3anonymousza31863ze3z83_1396,
																																											(int)
																																											(((long) 1)), BgL_nsz00_700);
																																										{	/* Expand/eps.scm 284 */
																																											obj_t
																																												BgL_list1862z00_1157;
																																											BgL_list1862z00_1157
																																												=
																																												MAKE_PAIR
																																												(BgL_bodyz00_503,
																																												BNIL);
																																											BgL_arg2192z00_712
																																												=
																																												BGl_mapz12z12zz__r4_control_features_6_9z00
																																												(BgL_zc3anonymousza31863ze3z83_1396,
																																												BgL_list1862z00_1157);
																																									}}
																																									SET_CDR
																																										(BgL_arg2187z00_711,
																																										BgL_arg2192z00_712);
																																								}
																																								return
																																									BgL_xz00_493;
																																							}
																																						}
																																					}
																																				}
																																			}
																																		else
																																			{	/* Expand/eps.scm 357 */
																																				obj_t
																																					BgL_cdrzd21858zd2_549;
																																				BgL_cdrzd21858zd2_549
																																					=
																																					CDR
																																					(BgL_xz00_493);
																																				BgL_bindingsz00_505
																																					=
																																					CAR
																																					(BgL_cdrzd21858zd2_549);
																																				BgL_bodyz00_506
																																					=
																																					CDR
																																					(BgL_cdrzd21858zd2_549);
																																			BgL_tagzd21693zd2_507:
																																				{	/* Expand/eps.scm 287 */
																																					obj_t
																																						BgL_framez00_733;
																																					if (NULLP(BgL_bindingsz00_505))
																																						{	/* Expand/eps.scm 287 */
																																							BgL_framez00_733
																																								=
																																								BNIL;
																																						}
																																					else
																																						{	/* Expand/eps.scm 287 */
																																							obj_t
																																								BgL_head1665z00_749;
																																							BgL_head1665z00_749
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							{
																																								obj_t
																																									BgL_l1663z00_751;
																																								obj_t
																																									BgL_tail1666z00_752;
																																								BgL_l1663z00_751
																																									=
																																									BgL_bindingsz00_505;
																																								BgL_tail1666z00_752
																																									=
																																									BgL_head1665z00_749;
																																							BgL_zc3anonymousza32244ze3z83_753:
																																								if (NULLP(BgL_l1663z00_751))
																																									{	/* Expand/eps.scm 287 */
																																										BgL_framez00_733
																																											=
																																											CDR
																																											(BgL_head1665z00_749);
																																									}
																																								else
																																									{	/* Expand/eps.scm 287 */
																																										obj_t
																																											BgL_newtail1667z00_755;
																																										{	/* Expand/eps.scm 287 */
																																											obj_t
																																												BgL_arg2255z00_757;
																																											{	/* Expand/eps.scm 287 */
																																												obj_t
																																													BgL_bz00_759;
																																												BgL_bz00_759
																																													=
																																													CAR
																																													(BgL_l1663z00_751);
																																												{	/* Expand/eps.scm 289 */
																																													bool_t
																																														BgL_testz00_2138;
																																													if (PAIRP(BgL_bz00_759))
																																														{	/* Expand/eps.scm 289 */
																																															obj_t
																																																BgL_auxz00_2141;
																																															BgL_auxz00_2141
																																																=
																																																CAR
																																																(BgL_bz00_759);
																																															BgL_testz00_2138
																																																=
																																																SYMBOLP
																																																(BgL_auxz00_2141);
																																														}
																																													else
																																														{	/* Expand/eps.scm 289 */
																																															BgL_testz00_2138
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																													if (BgL_testz00_2138)
																																														{	/* Expand/eps.scm 289 */
																																															BgL_arg2255z00_757
																																																=
																																																BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																(CAR
																																																(BgL_bz00_759),
																																																BFALSE);
																																														}
																																													else
																																														{	/* Expand/eps.scm 289 */
																																															if (SYMBOLP(BgL_bz00_759))
																																																{	/* Expand/eps.scm 291 */
																																																	BgL_arg2255z00_757
																																																		=
																																																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																		(BgL_bz00_759,
																																																		BFALSE);
																																																}
																																															else
																																																{	/* Expand/eps.scm 291 */
																																																	BgL_arg2255z00_757
																																																		=
																																																		BGl_errorz00zz__errorz00
																																																		(CAR
																																																		(BgL_xz00_493),
																																																		BGl_string2523z00zzexpand_epsz00,
																																																		BgL_xz00_493);
																																																}
																																														}
																																												}
																																											}
																																											BgL_newtail1667z00_755
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2255z00_757,
																																												BNIL);
																																										}
																																										SET_CDR
																																											(BgL_tail1666z00_752,
																																											BgL_newtail1667z00_755);
																																										{
																																											obj_t
																																												BgL_tail1666z00_2155;
																																											obj_t
																																												BgL_l1663z00_2153;
																																											BgL_l1663z00_2153
																																												=
																																												CDR
																																												(BgL_l1663z00_751);
																																											BgL_tail1666z00_2155
																																												=
																																												BgL_newtail1667z00_755;
																																											BgL_tail1666z00_752
																																												=
																																												BgL_tail1666z00_2155;
																																											BgL_l1663z00_751
																																												=
																																												BgL_l1663z00_2153;
																																											goto
																																												BgL_zc3anonymousza32244ze3z83_753;
																																										}
																																									}
																																							}
																																						}
																																					{	/* Expand/eps.scm 287 */
																																						obj_t
																																							BgL_nsz00_734;
																																						BgL_nsz00_734
																																							=
																																							bgl_append2
																																							(BgL_framez00_733,
																																							BgL_sz00_494);
																																						{	/* Expand/eps.scm 296 */

																																							{
																																								obj_t
																																									BgL_l1668z00_736;
																																								BgL_l1668z00_736
																																									=
																																									BgL_bindingsz00_505;
																																							BgL_zc3anonymousza32227ze3z83_737:
																																								if (PAIRP(BgL_l1668z00_736))
																																									{	/* Expand/eps.scm 297 */
																																										{	/* Expand/eps.scm 298 */
																																											obj_t
																																												BgL_bz00_739;
																																											BgL_bz00_739
																																												=
																																												CAR
																																												(BgL_l1668z00_736);
																																											if (PAIRP(BgL_bz00_739))
																																												{	/* Expand/eps.scm 299 */
																																													obj_t
																																														BgL_arg2233z00_741;
																																													{	/* Expand/eps.scm 299 */
																																														obj_t
																																															BgL_arg2237z00_742;
																																														BgL_arg2237z00_742
																																															=
																																															CDR
																																															(BgL_bz00_739);
																																														{	/* Expand/eps.scm 299 */
																																															obj_t
																																																BgL_zc3anonymousza31863ze3z83_1406;
																																															BgL_zc3anonymousza31863ze3z83_1406
																																																=
																																																make_fx_procedure
																																																(BGl_zc3anonymousza31863ze3_2501z83zzexpand_epsz00,
																																																(int)
																																																(((long) 1)), (int) (((long) 2)));
																																															PROCEDURE_SET
																																																(BgL_zc3anonymousza31863ze3z83_1406,
																																																(int)
																																																(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																															PROCEDURE_SET
																																																(BgL_zc3anonymousza31863ze3z83_1406,
																																																(int)
																																																(((long) 1)), BgL_nsz00_734);
																																															{	/* Expand/eps.scm 299 */
																																																obj_t
																																																	BgL_list1862z00_1187;
																																																BgL_list1862z00_1187
																																																	=
																																																	MAKE_PAIR
																																																	(BgL_arg2237z00_742,
																																																	BNIL);
																																																BgL_arg2233z00_741
																																																	=
																																																	BGl_mapz12z12zz__r4_control_features_6_9z00
																																																	(BgL_zc3anonymousza31863ze3z83_1406,
																																																	BgL_list1862z00_1187);
																																													}}}
																																													SET_CDR
																																														(BgL_bz00_739,
																																														BgL_arg2233z00_741);
																																												}
																																											else
																																												{	/* Expand/eps.scm 298 */
																																													BFALSE;
																																												}
																																										}
																																										{
																																											obj_t
																																												BgL_l1668z00_2173;
																																											BgL_l1668z00_2173
																																												=
																																												CDR
																																												(BgL_l1668z00_736);
																																											BgL_l1668z00_736
																																												=
																																												BgL_l1668z00_2173;
																																											goto
																																												BgL_zc3anonymousza32227ze3z83_737;
																																										}
																																									}
																																								else
																																									{	/* Expand/eps.scm 297 */
																																										((bool_t) 1);
																																									}
																																							}
																																							{	/* Expand/eps.scm 301 */
																																								obj_t
																																									BgL_arg2240z00_745;
																																								obj_t
																																									BgL_arg2242z00_746;
																																								BgL_arg2240z00_745
																																									=
																																									CDR
																																									(BgL_xz00_493);
																																								{	/* Expand/eps.scm 301 */
																																									obj_t
																																										BgL_zc3anonymousza31863ze3z83_1397;
																																									BgL_zc3anonymousza31863ze3z83_1397
																																										=
																																										make_fx_procedure
																																										(BGl_zc3anonymousza31863ze3_2502z83zzexpand_epsz00,
																																										(int)
																																										(((long) 1)), (int) (((long) 2)));
																																									PROCEDURE_SET
																																										(BgL_zc3anonymousza31863ze3z83_1397,
																																										(int)
																																										(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																									PROCEDURE_SET
																																										(BgL_zc3anonymousza31863ze3z83_1397,
																																										(int)
																																										(((long) 1)), BgL_nsz00_734);
																																									{	/* Expand/eps.scm 301 */
																																										obj_t
																																											BgL_list1862z00_1196;
																																										BgL_list1862z00_1196
																																											=
																																											MAKE_PAIR
																																											(BgL_bodyz00_506,
																																											BNIL);
																																										BgL_arg2242z00_746
																																											=
																																											BGl_mapz12z12zz__r4_control_features_6_9z00
																																											(BgL_zc3anonymousza31863ze3z83_1397,
																																											BgL_list1862z00_1196);
																																								}}
																																								SET_CDR
																																									(BgL_arg2240z00_745,
																																									BgL_arg2242z00_746);
																																							}
																																							return
																																								BgL_xz00_493;
																																						}
																																					}
																																				}
																																			}
																																	}
																																else
																																	{	/* Expand/eps.scm 357 */
																																		obj_t
																																			BgL_cdrzd21877zd2_552;
																																		BgL_cdrzd21877zd2_552
																																			=
																																			CDR
																																			(BgL_xz00_493);
																																		{
																																			obj_t
																																				BgL_bodyz00_2191;
																																			obj_t
																																				BgL_bindingsz00_2189;
																																			BgL_bindingsz00_2189
																																				=
																																				CAR
																																				(BgL_cdrzd21877zd2_552);
																																			BgL_bodyz00_2191
																																				=
																																				CDR
																																				(BgL_cdrzd21877zd2_552);
																																			BgL_bodyz00_506
																																				=
																																				BgL_bodyz00_2191;
																																			BgL_bindingsz00_505
																																				=
																																				BgL_bindingsz00_2189;
																																			goto
																																				BgL_tagzd21693zd2_507;
																																		}
																																	}
																															}
																														else
																															{	/* Expand/eps.scm 357 */
																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																	{
																																		obj_t
																																			BgL_sz00_2196;
																																		obj_t
																																			BgL_xz00_2195;
																																		BgL_xz00_2195
																																			=
																																			BgL_xz00_493;
																																		BgL_sz00_2196
																																			=
																																			BgL_sz00_494;
																																		BgL_sz00_477
																																			=
																																			BgL_sz00_2196;
																																		BgL_xz00_476
																																			=
																																			BgL_xz00_2195;
																																		goto
																																			BgL_zc3anonymousza31860ze3z83_478;
																																	}
																																else
																																	{	/* Expand/eps.scm 357 */
																																		goto
																																			BgL_tagzd21703zd2_524;
																																	}
																															}
																													}
																												else
																													{	/* Expand/eps.scm 357 */
																														obj_t
																															BgL_carzd21938zd2_556;
																														obj_t
																															BgL_cdrzd21939zd2_557;
																														BgL_carzd21938zd2_556
																															=
																															CAR(BgL_xz00_493);
																														BgL_cdrzd21939zd2_557
																															=
																															CDR(BgL_xz00_493);
																														{

																															if (
																																(BgL_carzd21938zd2_556
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			24))))
																																{	/* Expand/eps.scm 357 */
																																BgL_kapzd21940zd2_558:
																																	if (PAIRP
																																		(BgL_cdrzd21939zd2_557))
																																		{
																																			obj_t
																																				BgL_bodyz00_2206;
																																			obj_t
																																				BgL_bindingsz00_2204;
																																			BgL_bindingsz00_2204
																																				=
																																				CAR
																																				(BgL_cdrzd21939zd2_557);
																																			BgL_bodyz00_2206
																																				=
																																				CDR
																																				(BgL_cdrzd21939zd2_557);
																																			BgL_bodyz00_506
																																				=
																																				BgL_bodyz00_2206;
																																			BgL_bindingsz00_505
																																				=
																																				BgL_bindingsz00_2204;
																																			goto
																																				BgL_tagzd21693zd2_507;
																																		}
																																	else
																																		{	/* Expand/eps.scm 357 */
																																			if (
																																				(CAR
																																					(BgL_xz00_493)
																																					==
																																					CNST_TABLE_REF
																																					(((long) 11))))
																																				{
																																					obj_t
																																						BgL_sz00_2213;
																																					obj_t
																																						BgL_xz00_2212;
																																					BgL_xz00_2212
																																						=
																																						BgL_xz00_493;
																																					BgL_sz00_2213
																																						=
																																						BgL_sz00_494;
																																					BgL_sz00_485
																																						=
																																						BgL_sz00_2213;
																																					BgL_xz00_484
																																						=
																																						BgL_xz00_2212;
																																					goto
																																						BgL_zc3anonymousza31864ze3z83_486;
																																				}
																																			else
																																				{	/* Expand/eps.scm 357 */
																																					if (
																																						(CAR
																																							(BgL_xz00_493)
																																							==
																																							CNST_TABLE_REF
																																							(((long) 17))))
																																						{	/* Expand/eps.scm 357 */
																																							goto
																																								BgL_tagzd21697zd2_514;
																																						}
																																					else
																																						{	/* Expand/eps.scm 357 */
																																							if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 18))))
																																								{	/* Expand/eps.scm 357 */
																																									goto
																																										BgL_tagzd21699zd2_518;
																																								}
																																							else
																																								{	/* Expand/eps.scm 357 */
																																									if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 19))))
																																										{	/* Expand/eps.scm 357 */
																																											goto
																																												BgL_tagzd21699zd2_518;
																																										}
																																									else
																																										{	/* Expand/eps.scm 357 */
																																											if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_xz00_493), BUNSPEC))
																																												{	/* Expand/eps.scm 357 */
																																													if (NULLP(CDR(BgL_xz00_493)))
																																														{	/* Expand/eps.scm 357 */
																																															return
																																																BgL_xz00_493;
																																														}
																																													else
																																														{	/* Expand/eps.scm 357 */
																																															if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																{
																																																	obj_t
																																																		BgL_sz00_2235;
																																																	obj_t
																																																		BgL_xz00_2234;
																																																	BgL_xz00_2234
																																																		=
																																																		BgL_xz00_493;
																																																	BgL_sz00_2235
																																																		=
																																																		BgL_sz00_494;
																																																	BgL_sz00_477
																																																		=
																																																		BgL_sz00_2235;
																																																	BgL_xz00_476
																																																		=
																																																		BgL_xz00_2234;
																																																	goto
																																																		BgL_zc3anonymousza31860ze3z83_478;
																																																}
																																															else
																																																{	/* Expand/eps.scm 357 */
																																																	goto
																																																		BgL_tagzd21703zd2_524;
																																																}
																																														}
																																												}
																																											else
																																												{	/* Expand/eps.scm 357 */
																																													if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																														{
																																															obj_t
																																																BgL_sz00_2239;
																																															obj_t
																																																BgL_xz00_2238;
																																															BgL_xz00_2238
																																																=
																																																BgL_xz00_493;
																																															BgL_sz00_2239
																																																=
																																																BgL_sz00_494;
																																															BgL_sz00_477
																																																=
																																																BgL_sz00_2239;
																																															BgL_xz00_476
																																																=
																																																BgL_xz00_2238;
																																															goto
																																																BgL_zc3anonymousza31860ze3z83_478;
																																														}
																																													else
																																														{	/* Expand/eps.scm 357 */
																																															goto
																																																BgL_tagzd21703zd2_524;
																																														}
																																												}
																																										}
																																								}
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Expand/eps.scm 357 */
																																	if (
																																		(BgL_carzd21938zd2_556
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					25))))
																																		{	/* Expand/eps.scm 357 */
																																			goto
																																				BgL_kapzd21940zd2_558;
																																		}
																																	else
																																		{	/* Expand/eps.scm 357 */
																																			if (
																																				(BgL_carzd21938zd2_556
																																					==
																																					CNST_TABLE_REF
																																					(((long) 26))))
																																				{	/* Expand/eps.scm 357 */
																																					goto
																																						BgL_kapzd21940zd2_558;
																																				}
																																			else
																																				{	/* Expand/eps.scm 357 */
																																					if (
																																						(CAR
																																							(BgL_xz00_493)
																																							==
																																							CNST_TABLE_REF
																																							(((long) 10))))
																																						{	/* Expand/eps.scm 357 */
																																							if (PAIRP(BgL_cdrzd21939zd2_557))
																																								{	/* Expand/eps.scm 357 */
																																									BgL_bindingsz00_508
																																										=
																																										CAR
																																										(BgL_cdrzd21939zd2_557);
																																									BgL_bodyz00_509
																																										=
																																										CDR
																																										(BgL_cdrzd21939zd2_557);
																																									{	/* Expand/eps.scm 304 */
																																										obj_t
																																											BgL_framez00_768;
																																										if (NULLP(BgL_bindingsz00_508))
																																											{	/* Expand/eps.scm 304 */
																																												BgL_framez00_768
																																													=
																																													BNIL;
																																											}
																																										else
																																											{	/* Expand/eps.scm 304 */
																																												obj_t
																																													BgL_head1672z00_787;
																																												BgL_head1672z00_787
																																													=
																																													MAKE_PAIR
																																													(BNIL,
																																													BNIL);
																																												{
																																													obj_t
																																														BgL_l1670z00_789;
																																													obj_t
																																														BgL_tail1673z00_790;
																																													BgL_l1670z00_789
																																														=
																																														BgL_bindingsz00_508;
																																													BgL_tail1673z00_790
																																														=
																																														BgL_head1672z00_787;
																																												BgL_zc3anonymousza32320ze3z83_791:
																																													if (NULLP(BgL_l1670z00_789))
																																														{	/* Expand/eps.scm 304 */
																																															BgL_framez00_768
																																																=
																																																CDR
																																																(BgL_head1672z00_787);
																																														}
																																													else
																																														{	/* Expand/eps.scm 304 */
																																															obj_t
																																																BgL_newtail1674z00_793;
																																															{	/* Expand/eps.scm 304 */
																																																obj_t
																																																	BgL_arg2331z00_795;
																																																{	/* Expand/eps.scm 304 */
																																																	obj_t
																																																		BgL_bz00_797;
																																																	BgL_bz00_797
																																																		=
																																																		CAR
																																																		(BgL_l1670z00_789);
																																																	if (PAIRP(BgL_bz00_797))
																																																		{	/* Expand/eps.scm 305 */
																																																			BgL_arg2331z00_795
																																																				=
																																																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																				(CAR
																																																				(BgL_bz00_797),
																																																				BFALSE);
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 305 */
																																																			BgL_arg2331z00_795
																																																				=
																																																				BGl_errorz00zz__errorz00
																																																				(CNST_TABLE_REF
																																																				(((long) 10)), BGl_string2523z00zzexpand_epsz00, BgL_xz00_493);
																																																}}
																																																BgL_newtail1674z00_793
																																																	=
																																																	MAKE_PAIR
																																																	(BgL_arg2331z00_795,
																																																	BNIL);
																																															}
																																															SET_CDR
																																																(BgL_tail1673z00_790,
																																																BgL_newtail1674z00_793);
																																															{
																																																obj_t
																																																	BgL_tail1673z00_2269;
																																																obj_t
																																																	BgL_l1670z00_2267;
																																																BgL_l1670z00_2267
																																																	=
																																																	CDR
																																																	(BgL_l1670z00_789);
																																																BgL_tail1673z00_2269
																																																	=
																																																	BgL_newtail1674z00_793;
																																																BgL_tail1673z00_790
																																																	=
																																																	BgL_tail1673z00_2269;
																																																BgL_l1670z00_789
																																																	=
																																																	BgL_l1670z00_2267;
																																																goto
																																																	BgL_zc3anonymousza32320ze3z83_791;
																																															}
																																														}
																																												}
																																											}
																																										{	/* Expand/eps.scm 304 */
																																											obj_t
																																												BgL_nsz00_769;
																																											BgL_nsz00_769
																																												=
																																												bgl_append2
																																												(BgL_framez00_768,
																																												BgL_sz00_494);
																																											{	/* Expand/eps.scm 309 */

																																												{
																																													obj_t
																																														BgL_l1675z00_771;
																																													BgL_l1675z00_771
																																														=
																																														BgL_bindingsz00_508;
																																												BgL_zc3anonymousza32283ze3z83_772:
																																													if (PAIRP(BgL_l1675z00_771))
																																														{	/* Expand/eps.scm 310 */
																																															{	/* Expand/eps.scm 311 */
																																																obj_t
																																																	BgL_bz00_774;
																																																BgL_bz00_774
																																																	=
																																																	CAR
																																																	(BgL_l1675z00_771);
																																																{	/* Expand/eps.scm 311 */
																																																	obj_t
																																																		BgL_fz00_775;
																																																	{	/* Expand/eps.scm 311 */
																																																		obj_t
																																																			BgL_arg2297z00_780;
																																																		{	/* Expand/eps.scm 311 */
																																																			obj_t
																																																				BgL_pairz00_1215;
																																																			BgL_pairz00_1215
																																																				=
																																																				BgL_bz00_774;
																																																			BgL_arg2297z00_780
																																																				=
																																																				CAR
																																																				(CDR
																																																				(BgL_pairz00_1215));
																																																		}
																																																		BgL_fz00_775
																																																			=
																																																			BGl_protozd2ze3framez31zzexpand_epsz00
																																																			(BgL_idzd2ofzd2idz00_1411,
																																																			BgL_arg2297z00_780);
																																																	}
																																																	{	/* Expand/eps.scm 312 */
																																																		obj_t
																																																			BgL_arg2285z00_776;
																																																		obj_t
																																																			BgL_arg2286z00_777;
																																																		BgL_arg2285z00_776
																																																			=
																																																			CDR
																																																			(BgL_bz00_774);
																																																		{	/* Expand/eps.scm 313 */
																																																			obj_t
																																																				BgL_arg2290z00_778;
																																																			obj_t
																																																				BgL_arg2295z00_779;
																																																			{	/* Expand/eps.scm 313 */
																																																				obj_t
																																																					BgL_pairz00_1220;
																																																				BgL_pairz00_1220
																																																					=
																																																					BgL_bz00_774;
																																																				BgL_arg2290z00_778
																																																					=
																																																					CDR
																																																					(CDR
																																																					(BgL_pairz00_1220));
																																																			}
																																																			BgL_arg2295z00_779
																																																				=
																																																				bgl_append2
																																																				(BgL_fz00_775,
																																																				BgL_nsz00_769);
																																																			{	/* Expand/eps.scm 313 */
																																																				obj_t
																																																					BgL_zc3anonymousza31863ze3z83_1407;
																																																				BgL_zc3anonymousza31863ze3z83_1407
																																																					=
																																																					make_fx_procedure
																																																					(BGl_zc3anonymousza31863ze3_2503z83zzexpand_epsz00,
																																																					(int)
																																																					(((long) 1)), (int) (((long) 2)));
																																																				PROCEDURE_SET
																																																					(BgL_zc3anonymousza31863ze3z83_1407,
																																																					(int)
																																																					(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																																				PROCEDURE_SET
																																																					(BgL_zc3anonymousza31863ze3z83_1407,
																																																					(int)
																																																					(((long) 1)), BgL_arg2295z00_779);
																																																				{	/* Expand/eps.scm 313 */
																																																					obj_t
																																																						BgL_list1862z00_1228;
																																																					BgL_list1862z00_1228
																																																						=
																																																						MAKE_PAIR
																																																						(BgL_arg2290z00_778,
																																																						BNIL);
																																																					BgL_arg2286z00_777
																																																						=
																																																						BGl_mapz12z12zz__r4_control_features_6_9z00
																																																						(BgL_zc3anonymousza31863ze3z83_1407,
																																																						BgL_list1862z00_1228);
																																																		}}}
																																																		SET_CDR
																																																			(BgL_arg2285z00_776,
																																																			BgL_arg2286z00_777);
																																															}}}
																																															{
																																																obj_t
																																																	BgL_l1675z00_2291;
																																																BgL_l1675z00_2291
																																																	=
																																																	CDR
																																																	(BgL_l1675z00_771);
																																																BgL_l1675z00_771
																																																	=
																																																	BgL_l1675z00_2291;
																																																goto
																																																	BgL_zc3anonymousza32283ze3z83_772;
																																															}
																																														}
																																													else
																																														{	/* Expand/eps.scm 310 */
																																															((bool_t) 1);
																																														}
																																												}
																																												{	/* Expand/eps.scm 315 */
																																													obj_t
																																														BgL_arg2312z00_783;
																																													obj_t
																																														BgL_arg2318z00_784;
																																													BgL_arg2312z00_783
																																														=
																																														CDR
																																														(BgL_xz00_493);
																																													{	/* Expand/eps.scm 315 */
																																														obj_t
																																															BgL_zc3anonymousza31863ze3z83_1398;
																																														BgL_zc3anonymousza31863ze3z83_1398
																																															=
																																															make_fx_procedure
																																															(BGl_zc3anonymousza31863ze3_2504z83zzexpand_epsz00,
																																															(int)
																																															(((long) 1)), (int) (((long) 2)));
																																														PROCEDURE_SET
																																															(BgL_zc3anonymousza31863ze3z83_1398,
																																															(int)
																																															(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																														PROCEDURE_SET
																																															(BgL_zc3anonymousza31863ze3z83_1398,
																																															(int)
																																															(((long) 1)), BgL_nsz00_769);
																																														{	/* Expand/eps.scm 315 */
																																															obj_t
																																																BgL_list1862z00_1237;
																																															BgL_list1862z00_1237
																																																=
																																																MAKE_PAIR
																																																(BgL_bodyz00_509,
																																																BNIL);
																																															BgL_arg2318z00_784
																																																=
																																																BGl_mapz12z12zz__r4_control_features_6_9z00
																																																(BgL_zc3anonymousza31863ze3z83_1398,
																																																BgL_list1862z00_1237);
																																													}}
																																													SET_CDR
																																														(BgL_arg2312z00_783,
																																														BgL_arg2318z00_784);
																																												}
																																												return
																																													BgL_xz00_493;
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Expand/eps.scm 357 */
																																									if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																										{
																																											obj_t
																																												BgL_sz00_2309;
																																											obj_t
																																												BgL_xz00_2308;
																																											BgL_xz00_2308
																																												=
																																												BgL_xz00_493;
																																											BgL_sz00_2309
																																												=
																																												BgL_sz00_494;
																																											BgL_sz00_477
																																												=
																																												BgL_sz00_2309;
																																											BgL_xz00_476
																																												=
																																												BgL_xz00_2308;
																																											goto
																																												BgL_zc3anonymousza31860ze3z83_478;
																																										}
																																									else
																																										{	/* Expand/eps.scm 357 */
																																											goto
																																												BgL_tagzd21703zd2_524;
																																										}
																																								}
																																						}
																																					else
																																						{	/* Expand/eps.scm 357 */
																																							if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 11))))
																																								{
																																									obj_t
																																										BgL_sz00_2315;
																																									obj_t
																																										BgL_xz00_2314;
																																									BgL_xz00_2314
																																										=
																																										BgL_xz00_493;
																																									BgL_sz00_2315
																																										=
																																										BgL_sz00_494;
																																									BgL_sz00_485
																																										=
																																										BgL_sz00_2315;
																																									BgL_xz00_484
																																										=
																																										BgL_xz00_2314;
																																									goto
																																										BgL_zc3anonymousza31864ze3z83_486;
																																								}
																																							else
																																								{	/* Expand/eps.scm 357 */
																																									obj_t
																																										BgL_carzd22052zd2_569;
																																									obj_t
																																										BgL_cdrzd22053zd2_570;
																																									BgL_carzd22052zd2_569
																																										=
																																										CAR
																																										(BgL_xz00_493);
																																									BgL_cdrzd22053zd2_570
																																										=
																																										CDR
																																										(BgL_xz00_493);
																																									{

																																										if ((BgL_carzd22052zd2_569 == CNST_TABLE_REF(((long) 27))))
																																											{	/* Expand/eps.scm 357 */
																																											BgL_kapzd22054zd2_571:
																																												if (PAIRP(BgL_cdrzd22053zd2_570))
																																													{	/* Expand/eps.scm 357 */
																																														BgL_bodyz00_512
																																															=
																																															CDR
																																															(BgL_cdrzd22053zd2_570);
																																														{	/* Expand/eps.scm 320 */
																																															obj_t
																																																BgL_arg2351z00_801;
																																															obj_t
																																																BgL_arg2357z00_802;
																																															BgL_arg2351z00_801
																																																=
																																																CDR
																																																(BgL_xz00_493);
																																															{	/* Expand/eps.scm 320 */
																																																obj_t
																																																	BgL_zc3anonymousza31863ze3z83_1408;
																																																BgL_zc3anonymousza31863ze3z83_1408
																																																	=
																																																	make_fx_procedure
																																																	(BGl_zc3anonymousza31863ze3_2505z83zzexpand_epsz00,
																																																	(int)
																																																	(((long) 1)), (int) (((long) 2)));
																																																PROCEDURE_SET
																																																	(BgL_zc3anonymousza31863ze3z83_1408,
																																																	(int)
																																																	(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																																PROCEDURE_SET
																																																	(BgL_zc3anonymousza31863ze3z83_1408,
																																																	(int)
																																																	(((long) 1)), BgL_sz00_494);
																																																{	/* Expand/eps.scm 320 */
																																																	obj_t
																																																		BgL_list1862z00_1245;
																																																	BgL_list1862z00_1245
																																																		=
																																																		MAKE_PAIR
																																																		(BgL_bodyz00_512,
																																																		BNIL);
																																																	BgL_arg2357z00_802
																																																		=
																																																		BGl_mapz12z12zz__r4_control_features_6_9z00
																																																		(BgL_zc3anonymousza31863ze3z83_1408,
																																																		BgL_list1862z00_1245);
																																															}}
																																															SET_CDR
																																																(BgL_arg2351z00_801,
																																																BgL_arg2357z00_802);
																																														}
																																														return
																																															BgL_xz00_493;
																																													}
																																												else
																																													{	/* Expand/eps.scm 357 */
																																														if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 17))))
																																															{	/* Expand/eps.scm 357 */
																																																goto
																																																	BgL_tagzd21697zd2_514;
																																															}
																																														else
																																															{	/* Expand/eps.scm 357 */
																																																if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 18))))
																																																	{	/* Expand/eps.scm 357 */
																																																		goto
																																																			BgL_tagzd21699zd2_518;
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 357 */
																																																		if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 19))))
																																																			{	/* Expand/eps.scm 357 */
																																																				goto
																																																					BgL_tagzd21699zd2_518;
																																																			}
																																																		else
																																																			{	/* Expand/eps.scm 357 */
																																																				if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_xz00_493), BUNSPEC))
																																																					{	/* Expand/eps.scm 357 */
																																																						if (NULLP(CDR(BgL_xz00_493)))
																																																							{	/* Expand/eps.scm 357 */
																																																								return
																																																									BgL_xz00_493;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 357 */
																																																								if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																									{
																																																										obj_t
																																																											BgL_sz00_2356;
																																																										obj_t
																																																											BgL_xz00_2355;
																																																										BgL_xz00_2355
																																																											=
																																																											BgL_xz00_493;
																																																										BgL_sz00_2356
																																																											=
																																																											BgL_sz00_494;
																																																										BgL_sz00_477
																																																											=
																																																											BgL_sz00_2356;
																																																										BgL_xz00_476
																																																											=
																																																											BgL_xz00_2355;
																																																										goto
																																																											BgL_zc3anonymousza31860ze3z83_478;
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 357 */
																																																										goto
																																																											BgL_tagzd21703zd2_524;
																																																									}
																																																							}
																																																					}
																																																				else
																																																					{	/* Expand/eps.scm 357 */
																																																						if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																							{
																																																								obj_t
																																																									BgL_sz00_2360;
																																																								obj_t
																																																									BgL_xz00_2359;
																																																								BgL_xz00_2359
																																																									=
																																																									BgL_xz00_493;
																																																								BgL_sz00_2360
																																																									=
																																																									BgL_sz00_494;
																																																								BgL_sz00_477
																																																									=
																																																									BgL_sz00_2360;
																																																								BgL_xz00_476
																																																									=
																																																									BgL_xz00_2359;
																																																								goto
																																																									BgL_zc3anonymousza31860ze3z83_478;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 357 */
																																																								goto
																																																									BgL_tagzd21703zd2_524;
																																																							}
																																																					}
																																																			}
																																																	}
																																															}
																																													}
																																											}
																																										else
																																											{	/* Expand/eps.scm 357 */
																																												if ((BgL_carzd22052zd2_569 == CNST_TABLE_REF(((long) 28))))
																																													{	/* Expand/eps.scm 357 */
																																														goto
																																															BgL_kapzd22054zd2_571;
																																													}
																																												else
																																													{	/* Expand/eps.scm 357 */
																																														if ((BgL_carzd22052zd2_569 == CNST_TABLE_REF(((long) 29))))
																																															{	/* Expand/eps.scm 357 */
																																																goto
																																																	BgL_kapzd22054zd2_571;
																																															}
																																														else
																																															{	/* Expand/eps.scm 357 */
																																																if ((BgL_carzd22052zd2_569 == CNST_TABLE_REF(((long) 30))))
																																																	{	/* Expand/eps.scm 357 */
																																																		goto
																																																			BgL_kapzd22054zd2_571;
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 357 */
																																																		if ((BgL_carzd22052zd2_569 == CNST_TABLE_REF(((long) 17))))
																																																			{	/* Expand/eps.scm 357 */
																																																				goto
																																																					BgL_tagzd21697zd2_514;
																																																			}
																																																		else
																																																			{	/* Expand/eps.scm 357 */
																																																				obj_t
																																																					BgL_cdrzd22099zd2_577;
																																																				BgL_cdrzd22099zd2_577
																																																					=
																																																					CDR
																																																					(BgL_xz00_493);
																																																				if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 31))))
																																																					{	/* Expand/eps.scm 357 */
																																																						if (PAIRP(BgL_cdrzd22099zd2_577))
																																																							{	/* Expand/eps.scm 357 */
																																																								BgL_varz00_515
																																																									=
																																																									CAR
																																																									(BgL_cdrzd22099zd2_577);
																																																								BgL_clausesz00_516
																																																									=
																																																									CDR
																																																									(BgL_cdrzd22099zd2_577);
																																																								{	/* Expand/eps.scm 326 */
																																																									obj_t
																																																										BgL_auxz00_2382;
																																																									obj_t
																																																										BgL_auxz00_2380;
																																																									BgL_auxz00_2382
																																																										=
																																																										BGl_expandz00zzexpand_epsz00
																																																										(BgL_idzd2ofzd2idz00_1411,
																																																										BgL_varz00_515,
																																																										BgL_sz00_494);
																																																									BgL_auxz00_2380
																																																										=
																																																										CDR
																																																										(BgL_xz00_493);
																																																									SET_CAR
																																																										(BgL_auxz00_2380,
																																																										BgL_auxz00_2382);
																																																								}
																																																								{
																																																									obj_t
																																																										BgL_l1677z00_808;
																																																									BgL_l1677z00_808
																																																										=
																																																										BgL_clausesz00_516;
																																																								BgL_zc3anonymousza32384ze3z83_809:
																																																									if (PAIRP(BgL_l1677z00_808))
																																																										{	/* Expand/eps.scm 327 */
																																																											{	/* Expand/eps.scm 328 */
																																																												obj_t
																																																													BgL_clausez00_811;
																																																												BgL_clausez00_811
																																																													=
																																																													CAR
																																																													(BgL_l1677z00_808);
																																																												if (PAIRP(BgL_clausez00_811))
																																																													{	/* Expand/eps.scm 329 */
																																																														obj_t
																																																															BgL_arg2390z00_813;
																																																														{	/* Expand/eps.scm 329 */
																																																															obj_t
																																																																BgL_arg2396z00_814;
																																																															BgL_arg2396z00_814
																																																																=
																																																																CDR
																																																																(BgL_clausez00_811);
																																																															{	/* Expand/eps.scm 329 */
																																																																obj_t
																																																																	BgL_zc3anonymousza31863ze3z83_1409;
																																																																BgL_zc3anonymousza31863ze3z83_1409
																																																																	=
																																																																	make_fx_procedure
																																																																	(BGl_zc3anonymousza31863ze3_2507z83zzexpand_epsz00,
																																																																	(int)
																																																																	(((long) 1)), (int) (((long) 2)));
																																																																PROCEDURE_SET
																																																																	(BgL_zc3anonymousza31863ze3z83_1409,
																																																																	(int)
																																																																	(((long) 0)), BgL_idzd2ofzd2idz00_1411);
																																																																PROCEDURE_SET
																																																																	(BgL_zc3anonymousza31863ze3z83_1409,
																																																																	(int)
																																																																	(((long) 1)), BgL_sz00_494);
																																																																{	/* Expand/eps.scm 329 */
																																																																	obj_t
																																																																		BgL_list1862z00_1267;
																																																																	BgL_list1862z00_1267
																																																																		=
																																																																		MAKE_PAIR
																																																																		(BgL_arg2396z00_814,
																																																																		BNIL);
																																																																	BgL_arg2390z00_813
																																																																		=
																																																																		BGl_mapz12z12zz__r4_control_features_6_9z00
																																																																		(BgL_zc3anonymousza31863ze3z83_1409,
																																																																		BgL_list1862z00_1267);
																																																														}}}
																																																														SET_CDR
																																																															(BgL_clausez00_811,
																																																															BgL_arg2390z00_813);
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 328 */
																																																														BFALSE;
																																																													}
																																																											}
																																																											{
																																																												obj_t
																																																													BgL_l1677z00_2401;
																																																												BgL_l1677z00_2401
																																																													=
																																																													CDR
																																																													(BgL_l1677z00_808);
																																																												BgL_l1677z00_808
																																																													=
																																																													BgL_l1677z00_2401;
																																																												goto
																																																													BgL_zc3anonymousza32384ze3z83_809;
																																																											}
																																																										}
																																																									else
																																																										{	/* Expand/eps.scm 327 */
																																																											((bool_t) 1);
																																																										}
																																																								}
																																																								return
																																																									BgL_xz00_493;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 357 */
																																																								if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																									{
																																																										obj_t
																																																											BgL_sz00_2408;
																																																										obj_t
																																																											BgL_xz00_2407;
																																																										BgL_xz00_2407
																																																											=
																																																											BgL_xz00_493;
																																																										BgL_sz00_2408
																																																											=
																																																											BgL_sz00_494;
																																																										BgL_sz00_477
																																																											=
																																																											BgL_sz00_2408;
																																																										BgL_xz00_476
																																																											=
																																																											BgL_xz00_2407;
																																																										goto
																																																											BgL_zc3anonymousza31860ze3z83_478;
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 357 */
																																																										goto
																																																											BgL_tagzd21703zd2_524;
																																																									}
																																																							}
																																																					}
																																																				else
																																																					{	/* Expand/eps.scm 357 */
																																																						if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 18))))
																																																							{	/* Expand/eps.scm 357 */
																																																								goto
																																																									BgL_tagzd21699zd2_518;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 357 */
																																																								if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 19))))
																																																									{	/* Expand/eps.scm 357 */
																																																										goto
																																																											BgL_tagzd21699zd2_518;
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 357 */
																																																										if ((CAR(BgL_xz00_493) == CNST_TABLE_REF(((long) 32))))
																																																											{	/* Expand/eps.scm 357 */
																																																												if (PAIRP(BgL_cdrzd22099zd2_577))
																																																													{	/* Expand/eps.scm 357 */
																																																														obj_t
																																																															BgL_cdrzd22129zd2_588;
																																																														BgL_cdrzd22129zd2_588
																																																															=
																																																															CDR
																																																															(BgL_cdrzd22099zd2_577);
																																																														if (PAIRP(BgL_cdrzd22129zd2_588))
																																																															{	/* Expand/eps.scm 357 */
																																																																if (NULLP(CDR(BgL_cdrzd22129zd2_588)))
																																																																	{	/* Expand/eps.scm 357 */
																																																																		BgL_funz00_519
																																																																			=
																																																																			CAR
																																																																			(BgL_cdrzd22099zd2_577);
																																																																		BgL_argz00_520
																																																																			=
																																																																			CAR
																																																																			(BgL_cdrzd22129zd2_588);
																																																																		{	/* Expand/eps.scm 336 */
																																																																			obj_t
																																																																				BgL_auxz00_2431;
																																																																			obj_t
																																																																				BgL_auxz00_2429;
																																																																			BgL_auxz00_2431
																																																																				=
																																																																				BGl_expandz00zzexpand_epsz00
																																																																				(BgL_idzd2ofzd2idz00_1411,
																																																																				BgL_funz00_519,
																																																																				BgL_sz00_494);
																																																																			BgL_auxz00_2429
																																																																				=
																																																																				CDR
																																																																				(BgL_xz00_493);
																																																																			SET_CAR
																																																																				(BgL_auxz00_2429,
																																																																				BgL_auxz00_2431);
																																																																		}
																																																																		{	/* Expand/eps.scm 337 */
																																																																			obj_t
																																																																				BgL_arg2430z00_821;
																																																																			obj_t
																																																																				BgL_arg2431z00_822;
																																																																			{	/* Expand/eps.scm 337 */
																																																																				obj_t
																																																																					BgL_pairz00_1282;
																																																																				BgL_pairz00_1282
																																																																					=
																																																																					BgL_xz00_493;
																																																																				BgL_arg2430z00_821
																																																																					=
																																																																					CDR
																																																																					(CDR
																																																																					(BgL_pairz00_1282));
																																																																			}
																																																																			BgL_arg2431z00_822
																																																																				=
																																																																				BGl_expandz00zzexpand_epsz00
																																																																				(BgL_idzd2ofzd2idz00_1411,
																																																																				BgL_argz00_520,
																																																																				BgL_sz00_494);
																																																																			SET_CAR
																																																																				(BgL_arg2430z00_821,
																																																																				BgL_arg2431z00_822);
																																																																		}
																																																																		return
																																																																			BgL_xz00_493;
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 357 */
																																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																																			{
																																																																				obj_t
																																																																					BgL_sz00_2443;
																																																																				obj_t
																																																																					BgL_xz00_2442;
																																																																				BgL_xz00_2442
																																																																					=
																																																																					BgL_xz00_493;
																																																																				BgL_sz00_2443
																																																																					=
																																																																					BgL_sz00_494;
																																																																				BgL_sz00_477
																																																																					=
																																																																					BgL_sz00_2443;
																																																																				BgL_xz00_476
																																																																					=
																																																																					BgL_xz00_2442;
																																																																				goto
																																																																					BgL_zc3anonymousza31860ze3z83_478;
																																																																			}
																																																																		else
																																																																			{	/* Expand/eps.scm 357 */
																																																																				goto
																																																																					BgL_tagzd21703zd2_524;
																																																																			}
																																																																	}
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 357 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																																	{
																																																																		obj_t
																																																																			BgL_sz00_2447;
																																																																		obj_t
																																																																			BgL_xz00_2446;
																																																																		BgL_xz00_2446
																																																																			=
																																																																			BgL_xz00_493;
																																																																		BgL_sz00_2447
																																																																			=
																																																																			BgL_sz00_494;
																																																																		BgL_sz00_477
																																																																			=
																																																																			BgL_sz00_2447;
																																																																		BgL_xz00_476
																																																																			=
																																																																			BgL_xz00_2446;
																																																																		goto
																																																																			BgL_zc3anonymousza31860ze3z83_478;
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 357 */
																																																																		goto
																																																																			BgL_tagzd21703zd2_524;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 357 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																															{
																																																																obj_t
																																																																	BgL_sz00_2451;
																																																																obj_t
																																																																	BgL_xz00_2450;
																																																																BgL_xz00_2450
																																																																	=
																																																																	BgL_xz00_493;
																																																																BgL_sz00_2451
																																																																	=
																																																																	BgL_sz00_494;
																																																																BgL_sz00_477
																																																																	=
																																																																	BgL_sz00_2451;
																																																																BgL_xz00_476
																																																																	=
																																																																	BgL_xz00_2450;
																																																																goto
																																																																	BgL_zc3anonymousza31860ze3z83_478;
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 357 */
																																																																goto
																																																																	BgL_tagzd21703zd2_524;
																																																															}
																																																													}
																																																											}
																																																										else
																																																											{	/* Expand/eps.scm 357 */
																																																												if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_xz00_493), BUNSPEC))
																																																													{	/* Expand/eps.scm 357 */
																																																														if (NULLP(CDR(BgL_xz00_493)))
																																																															{	/* Expand/eps.scm 357 */
																																																																return
																																																																	BgL_xz00_493;
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 357 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																																	{
																																																																		obj_t
																																																																			BgL_sz00_2461;
																																																																		obj_t
																																																																			BgL_xz00_2460;
																																																																		BgL_xz00_2460
																																																																			=
																																																																			BgL_xz00_493;
																																																																		BgL_sz00_2461
																																																																			=
																																																																			BgL_sz00_494;
																																																																		BgL_sz00_477
																																																																			=
																																																																			BgL_sz00_2461;
																																																																		BgL_xz00_476
																																																																			=
																																																																			BgL_xz00_2460;
																																																																		goto
																																																																			BgL_zc3anonymousza31860ze3z83_478;
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 357 */
																																																																		goto
																																																																			BgL_tagzd21703zd2_524;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 357 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_493))
																																																															{
																																																																obj_t
																																																																	BgL_sz00_2465;
																																																																obj_t
																																																																	BgL_xz00_2464;
																																																																BgL_xz00_2464
																																																																	=
																																																																	BgL_xz00_493;
																																																																BgL_sz00_2465
																																																																	=
																																																																	BgL_sz00_494;
																																																																BgL_sz00_477
																																																																	=
																																																																	BgL_sz00_2465;
																																																																BgL_xz00_476
																																																																	=
																																																																	BgL_xz00_2464;
																																																																goto
																																																																	BgL_zc3anonymousza31860ze3z83_478;
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 357 */
																																																																goto
																																																																	BgL_tagzd21703zd2_524;
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
							else
								{	/* Expand/eps.scm 357 */
									return BgL_xz00_493;
								}
						}
				}
			}
		}
	}



/* proto->frame */
	obj_t BGl_protozd2ze3framez31zzexpand_epsz00(obj_t BgL_idzd2ofzd2idz00_1476,
		obj_t BgL_pz00_472)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 247 */
			{	/* Expand/eps.scm 247 */
				obj_t BgL_arg1858z00_474;

				BgL_arg1858z00_474 =
					BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_pz00_472);
				{	/* Expand/eps.scm 247 */
					obj_t BgL_list1859z00_475;

					BgL_list1859z00_475 = MAKE_PAIR(BgL_arg1858z00_474, BNIL);
					return
						BGl_mapz12z12zz__r4_control_features_6_9z00
						(BgL_idzd2ofzd2idz00_1476, BgL_list1859z00_475);
				}
			}
		}
	}



/* <anonymous:1863>_2509 */
	obj_t BGl_zc3anonymousza31863ze3_2509z83zzexpand_epsz00(obj_t BgL_envz00_1412,
		obj_t BgL_xz00_1415)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 346 */
				obj_t BgL_idzd2ofzd2idz00_1413;

				obj_t BgL_sz00_1414;

				BgL_idzd2ofzd2idz00_1413 =
					PROCEDURE_REF(BgL_envz00_1412, (int) (((long) 0)));
				BgL_sz00_1414 = PROCEDURE_REF(BgL_envz00_1412, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1300;

					BgL_xz00_1300 = BgL_xz00_1415;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1413,
						BgL_xz00_1300, BgL_sz00_1414);
				}
			}
		}
	}



/* <anonymous:1863>_2508 */
	obj_t BGl_zc3anonymousza31863ze3_2508z83zzexpand_epsz00(obj_t BgL_envz00_1416,
		obj_t BgL_xz00_1419)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 333 */
				obj_t BgL_idzd2ofzd2idz00_1417;

				obj_t BgL_sz00_1418;

				BgL_idzd2ofzd2idz00_1417 =
					PROCEDURE_REF(BgL_envz00_1416, (int) (((long) 0)));
				BgL_sz00_1418 = PROCEDURE_REF(BgL_envz00_1416, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1275;

					BgL_xz00_1275 = BgL_xz00_1419;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1417,
						BgL_xz00_1275, BgL_sz00_1418);
				}
			}
		}
	}



/* <anonymous:1863>_2507 */
	obj_t BGl_zc3anonymousza31863ze3_2507z83zzexpand_epsz00(obj_t BgL_envz00_1420,
		obj_t BgL_xz00_1423)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 329 */
				obj_t BgL_idzd2ofzd2idz00_1421;

				obj_t BgL_sz00_1422;

				BgL_idzd2ofzd2idz00_1421 =
					PROCEDURE_REF(BgL_envz00_1420, (int) (((long) 0)));
				BgL_sz00_1422 = PROCEDURE_REF(BgL_envz00_1420, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1266;

					BgL_xz00_1266 = BgL_xz00_1423;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1421,
						BgL_xz00_1266, BgL_sz00_1422);
				}
			}
		}
	}



/* <anonymous:1863>_2506 */
	obj_t BGl_zc3anonymousza31863ze3_2506z83zzexpand_epsz00(obj_t BgL_envz00_1424,
		obj_t BgL_xz00_1427)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 323 */
				obj_t BgL_idzd2ofzd2idz00_1425;

				obj_t BgL_sz00_1426;

				BgL_idzd2ofzd2idz00_1425 =
					PROCEDURE_REF(BgL_envz00_1424, (int) (((long) 0)));
				BgL_sz00_1426 = PROCEDURE_REF(BgL_envz00_1424, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1252;

					BgL_xz00_1252 = BgL_xz00_1427;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1425,
						BgL_xz00_1252, BgL_sz00_1426);
				}
			}
		}
	}



/* <anonymous:1863>_2505 */
	obj_t BGl_zc3anonymousza31863ze3_2505z83zzexpand_epsz00(obj_t BgL_envz00_1428,
		obj_t BgL_xz00_1431)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 320 */
				obj_t BgL_idzd2ofzd2idz00_1429;

				obj_t BgL_sz00_1430;

				BgL_idzd2ofzd2idz00_1429 =
					PROCEDURE_REF(BgL_envz00_1428, (int) (((long) 0)));
				BgL_sz00_1430 = PROCEDURE_REF(BgL_envz00_1428, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1244;

					BgL_xz00_1244 = BgL_xz00_1431;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1429,
						BgL_xz00_1244, BgL_sz00_1430);
				}
			}
		}
	}



/* <anonymous:1863>_2504 */
	obj_t BGl_zc3anonymousza31863ze3_2504z83zzexpand_epsz00(obj_t BgL_envz00_1432,
		obj_t BgL_xz00_1435)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 315 */
				obj_t BgL_idzd2ofzd2idz00_1433;

				obj_t BgL_sz00_1434;

				BgL_idzd2ofzd2idz00_1433 =
					PROCEDURE_REF(BgL_envz00_1432, (int) (((long) 0)));
				BgL_sz00_1434 = PROCEDURE_REF(BgL_envz00_1432, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1236;

					BgL_xz00_1236 = BgL_xz00_1435;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1433,
						BgL_xz00_1236, BgL_sz00_1434);
				}
			}
		}
	}



/* <anonymous:1863>_2503 */
	obj_t BGl_zc3anonymousza31863ze3_2503z83zzexpand_epsz00(obj_t BgL_envz00_1436,
		obj_t BgL_xz00_1439)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 313 */
				obj_t BgL_idzd2ofzd2idz00_1437;

				obj_t BgL_sz00_1438;

				BgL_idzd2ofzd2idz00_1437 =
					PROCEDURE_REF(BgL_envz00_1436, (int) (((long) 0)));
				BgL_sz00_1438 = PROCEDURE_REF(BgL_envz00_1436, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1227;

					BgL_xz00_1227 = BgL_xz00_1439;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1437,
						BgL_xz00_1227, BgL_sz00_1438);
				}
			}
		}
	}



/* <anonymous:1863>_2502 */
	obj_t BGl_zc3anonymousza31863ze3_2502z83zzexpand_epsz00(obj_t BgL_envz00_1440,
		obj_t BgL_xz00_1443)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 301 */
				obj_t BgL_idzd2ofzd2idz00_1441;

				obj_t BgL_sz00_1442;

				BgL_idzd2ofzd2idz00_1441 =
					PROCEDURE_REF(BgL_envz00_1440, (int) (((long) 0)));
				BgL_sz00_1442 = PROCEDURE_REF(BgL_envz00_1440, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1195;

					BgL_xz00_1195 = BgL_xz00_1443;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1441,
						BgL_xz00_1195, BgL_sz00_1442);
				}
			}
		}
	}



/* <anonymous:1863>_2501 */
	obj_t BGl_zc3anonymousza31863ze3_2501z83zzexpand_epsz00(obj_t BgL_envz00_1444,
		obj_t BgL_xz00_1447)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 299 */
				obj_t BgL_idzd2ofzd2idz00_1445;

				obj_t BgL_sz00_1446;

				BgL_idzd2ofzd2idz00_1445 =
					PROCEDURE_REF(BgL_envz00_1444, (int) (((long) 0)));
				BgL_sz00_1446 = PROCEDURE_REF(BgL_envz00_1444, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1186;

					BgL_xz00_1186 = BgL_xz00_1447;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1445,
						BgL_xz00_1186, BgL_sz00_1446);
				}
			}
		}
	}



/* <anonymous:1863>_2500 */
	obj_t BGl_zc3anonymousza31863ze3_2500z83zzexpand_epsz00(obj_t BgL_envz00_1448,
		obj_t BgL_xz00_1451)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 284 */
				obj_t BgL_idzd2ofzd2idz00_1449;

				obj_t BgL_sz00_1450;

				BgL_idzd2ofzd2idz00_1449 =
					PROCEDURE_REF(BgL_envz00_1448, (int) (((long) 0)));
				BgL_sz00_1450 = PROCEDURE_REF(BgL_envz00_1448, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1156;

					BgL_xz00_1156 = BgL_xz00_1451;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1449,
						BgL_xz00_1156, BgL_sz00_1450);
				}
			}
		}
	}



/* <anonymous:1863>_2499 */
	obj_t BGl_zc3anonymousza31863ze3_2499z83zzexpand_epsz00(obj_t BgL_envz00_1452,
		obj_t BgL_xz00_1455)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 282 */
				obj_t BgL_idzd2ofzd2idz00_1453;

				obj_t BgL_sz00_1454;

				BgL_idzd2ofzd2idz00_1453 =
					PROCEDURE_REF(BgL_envz00_1452, (int) (((long) 0)));
				BgL_sz00_1454 = PROCEDURE_REF(BgL_envz00_1452, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1144;

					BgL_xz00_1144 = BgL_xz00_1455;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1453,
						BgL_xz00_1144, BgL_sz00_1454);
				}
			}
		}
	}



/* <anonymous:1863>_2498 */
	obj_t BGl_zc3anonymousza31863ze3_2498z83zzexpand_epsz00(obj_t BgL_envz00_1456,
		obj_t BgL_xz00_1459)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 266 */
				obj_t BgL_idzd2ofzd2idz00_1457;

				obj_t BgL_sz00_1458;

				BgL_idzd2ofzd2idz00_1457 =
					PROCEDURE_REF(BgL_envz00_1456, (int) (((long) 0)));
				BgL_sz00_1458 = PROCEDURE_REF(BgL_envz00_1456, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1114;

					BgL_xz00_1114 = BgL_xz00_1459;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1457,
						BgL_xz00_1114, BgL_sz00_1458);
				}
			}
		}
	}



/* <anonymous:1863> */
	obj_t BGl_zc3anonymousza31863ze3z83zzexpand_epsz00(obj_t BgL_envz00_1460,
		obj_t BgL_xz00_1463)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 262 */
				obj_t BgL_idzd2ofzd2idz00_1461;

				obj_t BgL_sz00_1462;

				BgL_idzd2ofzd2idz00_1461 =
					PROCEDURE_REF(BgL_envz00_1460, (int) (((long) 0)));
				BgL_sz00_1462 = PROCEDURE_REF(BgL_envz00_1460, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1106;

					BgL_xz00_1106 = BgL_xz00_1463;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1461,
						BgL_xz00_1106, BgL_sz00_1462);
				}
			}
		}
	}



/* <anonymous:1863>_2510 */
	obj_t BGl_zc3anonymousza31863ze3_2510z83zzexpand_epsz00(obj_t BgL_envz00_1464,
		obj_t BgL_xz00_1467)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 254 */
				obj_t BgL_idzd2ofzd2idz00_1465;

				obj_t BgL_sz00_1466;

				BgL_idzd2ofzd2idz00_1465 =
					PROCEDURE_REF(BgL_envz00_1464, (int) (((long) 0)));
				BgL_sz00_1466 = PROCEDURE_REF(BgL_envz00_1464, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1016;

					BgL_xz00_1016 = BgL_xz00_1467;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1465,
						BgL_xz00_1016, BgL_sz00_1466);
				}
			}
		}
	}



/* <anonymous:1863>_2511 */
	obj_t BGl_zc3anonymousza31863ze3_2511z83zzexpand_epsz00(obj_t BgL_envz00_1468,
		obj_t BgL_xz00_1471)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 250 */
			{	/* Expand/eps.scm 250 */
				obj_t BgL_idzd2ofzd2idz00_1469;

				obj_t BgL_sz00_1470;

				BgL_idzd2ofzd2idz00_1469 =
					PROCEDURE_REF(BgL_envz00_1468, (int) (((long) 0)));
				BgL_sz00_1470 = PROCEDURE_REF(BgL_envz00_1468, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1002;

					BgL_xz00_1002 = BgL_xz00_1471;
					return
						BGl_expandz00zzexpand_epsz00(BgL_idzd2ofzd2idz00_1469,
						BgL_xz00_1002, BgL_sz00_1470);
				}
			}
		}
	}



/* id-of-id */
	obj_t BGl_idzd2ofzd2idz00zzexpand_epsz00(obj_t BgL_envz00_1472,
		obj_t BgL_idz00_1473)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 244 */
			{
				obj_t BgL_idz00_470;

				BgL_idz00_470 = BgL_idz00_1473;
				return BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_470, BFALSE);
			}
		}
	}



/* identifier-expander */
	obj_t BGl_identifierzd2expanderzd2zzexpand_epsz00(obj_t BgL_idz00_49,
		obj_t BgL_ez00_50)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 364 */
			{	/* Expand/eps.scm 365 */
				bool_t BgL_testz00_2545;

				{	/* Expand/eps.scm 365 */
					obj_t BgL_auxz00_2546;

					BgL_auxz00_2546 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_49,
						BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
					BgL_testz00_2545 = PAIRP(BgL_auxz00_2546);
				}
				if (BgL_testz00_2545)
					{	/* Expand/eps.scm 365 */
						return BgL_idz00_49;
					}
				else
					{	/* Expand/eps.scm 367 */
						obj_t BgL_az00_845;

						BgL_az00_845 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_idz00_49,
							CNST_TABLE_REF(((long) 0)));
						if (CBOOL(BgL_az00_845))
							{	/* Expand/eps.scm 368 */
								return
									PROCEDURE_ENTRY(BgL_ez00_50) (BgL_ez00_50, BgL_az00_845,
									BgL_ez00_50, BEOA);
							}
						else
							{	/* Expand/eps.scm 368 */
								return BgL_idz00_49;
							}
					}
			}
		}
	}



/* _identifier-expander */
	obj_t BGl__identifierzd2expanderzd2zzexpand_epsz00(obj_t BgL_envz00_1388,
		obj_t BgL_idz00_1389, obj_t BgL_ez00_1390)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 364 */
			return
				BGl_identifierzd2expanderzd2zzexpand_epsz00(BgL_idz00_1389,
				BgL_ez00_1390);
		}
	}



/* application-expander */
	obj_t BGl_applicationzd2expanderzd2zzexpand_epsz00(obj_t BgL_xz00_51,
		obj_t BgL_ez00_52)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 375 */
			return BGl_loopz00zzexpand_epsz00(BgL_ez00_52, BgL_xz00_51, BgL_xz00_51);
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_epsz00(obj_t BgL_ez00_1475, obj_t BgL_xz00_1474,
		obj_t BgL_xza2za2_849)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 376 */
			if (PAIRP(BgL_xza2za2_849))
				{	/* Expand/eps.scm 378 */
					{	/* Expand/eps.scm 379 */
						obj_t BgL_arg2470z00_852;

						{	/* Expand/eps.scm 379 */
							obj_t BgL_arg2471z00_853;

							BgL_arg2471z00_853 = CAR(BgL_xza2za2_849);
							BgL_arg2470z00_852 =
								PROCEDURE_ENTRY(BgL_ez00_1475) (BgL_ez00_1475,
								BgL_arg2471z00_853, BgL_ez00_1475, BEOA);
						}
						SET_CAR(BgL_xza2za2_849, BgL_arg2470z00_852);
					}
					{	/* Expand/eps.scm 380 */
						obj_t BgL_auxz00_2563;

						BgL_auxz00_2563 =
							BGl_loopz00zzexpand_epsz00(BgL_ez00_1475, BgL_xz00_1474,
							CDR(BgL_xza2za2_849));
						SET_CDR(BgL_xza2za2_849, BgL_auxz00_2563);
					}
					return BgL_xza2za2_849;
				}
			else
				{	/* Expand/eps.scm 378 */
					if (NULLP(BgL_xza2za2_849))
						{	/* Expand/eps.scm 382 */
							return BNIL;
						}
					else
						{	/* Expand/eps.scm 382 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2526z00zzexpand_epsz00, BgL_xz00_1474);
						}
				}
		}
	}



/* _application-expander */
	obj_t BGl__applicationzd2expanderzd2zzexpand_epsz00(obj_t BgL_envz00_1391,
		obj_t BgL_xz00_1392, obj_t BgL_ez00_1393)
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 375 */
			return
				BGl_applicationzd2expanderzd2zzexpand_epsz00(BgL_xz00_1392,
				BgL_ez00_1393);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_epsz00()
	{
		AN_OBJECT;
		{	/* Expand/eps.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 112686943),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
			return
				BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2527z00zzexpand_epsz00));
		}
	}

#ifdef __cplusplus
}
#endif
