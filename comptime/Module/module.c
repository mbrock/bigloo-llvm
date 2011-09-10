/*===========================================================================*/
/*   (Module/module.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/module.scm)*/
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


	extern obj_t BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00();
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 =
		BUNSPEC;
	static obj_t BGl__producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t,
		obj_t);
	static bool_t
		BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00();
	extern obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00();
	extern obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
	static obj_t BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_modulez00 = BUNSPEC;
	extern obj_t BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
	static obj_t BGl_genericzd2initzd2zzmodule_modulez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_producezd2libraryzd2clausesz00zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2moduleza2z00zzmodule_modulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL BgL_ccompz00_bglt
		BGl_z52allocatezd2ccompz80zzmodule_modulez00();
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2locationza2zd2zzmodule_modulez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
	static obj_t BGl_dozd2modulezd2zzmodule_modulez00(obj_t, obj_t, obj_t);
	static obj_t BGl__ccompzd2nilzd2zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2ze3structzd2ccomp1577ze3zzmodule_modulez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
	static obj_t BGl_findzd2clausezd2consumerz00zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_findzd2clausezd2producerz00zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
	static obj_t BGl_cnstzd2initzd2zzmodule_modulez00();
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 =
		BUNSPEC;
	extern obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl__z52allocatezd2ccompz80zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_modulez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
	extern obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
	static obj_t BGl_dozd2consumezd2modulez00zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL BgL_ccompz00_bglt
		BGl_fillzd2ccompz12zc0zzmodule_modulez00(BgL_ccompz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__ccompzf3zf3zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
	extern obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
	static obj_t BGl__dumpzd2modulezd2zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31777ze3z83zzmodule_modulez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_optionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_modulez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00();
	static obj_t BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 = BUNSPEC;
	static obj_t BGl__makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_EXPORTED_DEF obj_t BGl_ccompz00zzmodule_modulez00 = BUNSPEC;
	static obj_t BGl__consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec1579z83zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2mainza2z00zzmodule_modulez00 = BUNSPEC;
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	BGL_EXPORTED_DECL BgL_ccompz00_bglt BGl_ccompzd2nilzd2zzmodule_modulez00();
	BGL_EXPORTED_DECL obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00();
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2ccompz12zc0zzmodule_modulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t
		BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00();
	BGL_EXPORTED_DECL bool_t BGl_ccompzf3zf3zzmodule_modulez00(obj_t);
	static obj_t BGl__producezd2modulez12zc0zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl__modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_modulez00();
	static obj_t BGl__consumezd2modulez12zc0zzmodule_modulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00();
	BGL_EXPORTED_DECL BgL_ccompz00_bglt
		BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_unknownzd2clausezd2consumerz00zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_unknownzd2clausezd2producerz00zzmodule_modulez00(obj_t,
		obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_checksumzd2modulezd2zzmodule_modulez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_modulez00();
	extern long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t);
	static obj_t BGl__modulezd2checksumzd2objectz00zzmodule_modulez00(obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_modulez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
	static obj_t BGl_zc3exitza31837ze3z83zzmodule_modulez00(obj_t, obj_t);
	static obj_t __cnst[15];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ccompzd2envz00zzmodule_modulez00,
		BgL_bgl__makeza7d2ccompza7d21980z00, BGl__makezd2ccompzd2zzmodule_modulez00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00,
		BgL_bgl__moduleza7d2initia1981za7,
		BGl__modulezd2initializa7ationzd2idza7zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consumezd2modulezd2clausez12zd2envzc0zzmodule_modulez00,
		BgL_bgl__consumeza7d2modul1982za7,
		BGl__consumezd2modulezd2clausez12z12zzmodule_modulez00, 0L, BUNSPEC, 2);
	extern obj_t BGl_readzd2directiveszd2envz00zzread_includez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzf3zd2envz21zzmodule_modulez00,
		BgL_bgl__ccompza7f3za7f3za7za7mo1983z00, BGl__ccompzf3zf3zzmodule_modulez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2checksumzd2objectzd2envzd2zzmodule_modulez00,
		BgL_bgl__moduleza7d2checks1984za7,
		BGl__modulezd2checksumzd2objectz00zzmodule_modulez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2modulezd2envz00zzmodule_modulez00,
		BgL_bgl__dumpza7d2moduleza7d1985z00,
		BGl__dumpzd2modulezd2zzmodule_modulez00, 0L, BUNSPEC, 1);
	extern obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00;
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzmodule_modulez00,
		BgL_bgl_objectza7d2za7e3stru1986z00,
		BGl_objectzd2ze3structzd2ccomp1577ze3zzmodule_modulez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzmodule_modulez00,
		BgL_bgl_structza7b2objectza71987z00,
		BGl_structzb2objectzd2ze3objec1579z83zzmodule_modulez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzd2nilzd2envz00zzmodule_modulez00,
		BgL_bgl__ccompza7d2nilza7d2za71988za7,
		BGl__ccompzd2nilzd2zzmodule_modulez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2ccompz12zd2envz12zzmodule_modulez00,
		BgL_bgl__fillza7d2ccompza7121989z00,
		BGl__fillzd2ccompz12zc0zzmodule_modulez00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2ccompzd2envz52zzmodule_modulez00,
		BgL_bgl__za752allocateza7d2c1990z00,
		BGl__z52allocatezd2ccompz80zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1940z00zzmodule_modulez00,
		BgL_bgl_string1940za700za7za7m1991za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1939z00zzmodule_modulez00,
		BgL_bgl_string1939za700za7za7m1992za7, "Module", 6);
	      DEFINE_STRING(BGl_string1941z00zzmodule_modulez00,
		BgL_bgl_string1941za700za7za7m1993za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1942z00zzmodule_modulez00,
		BgL_bgl_string1942za700za7za7m1994za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1943z00zzmodule_modulez00,
		BgL_bgl_string1943za700za7za7m1995za7, "Illegal module form", 19);
	      DEFINE_STRING(BGl_string1944z00zzmodule_modulez00,
		BgL_bgl_string1944za700za7za7m1996za7, " error", 6);
	      DEFINE_STRING(BGl_string1945z00zzmodule_modulez00,
		BgL_bgl_string1945za700za7za7m1997za7, "s", 1);
	      DEFINE_STRING(BGl_string1946z00zzmodule_modulez00,
		BgL_bgl_string1946za700za7za7m1998za7, "", 0);
	      DEFINE_STRING(BGl_string1947z00zzmodule_modulez00,
		BgL_bgl_string1947za700za7za7m1999za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1948z00zzmodule_modulez00,
		BgL_bgl_string1948za700za7za7m2000za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1950z00zzmodule_modulez00,
		BgL_bgl_string1950za700za7za7m2001za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string1949z00zzmodule_modulez00,
		BgL_bgl_string1949za700za7za7m2002za7, "Illegal module name", 19);
	      DEFINE_STRING(BGl_string1951z00zzmodule_modulez00,
		BgL_bgl_string1951za700za7za7m2003za7, "Unknown module clause", 21);
	      DEFINE_STRING(BGl_string1952z00zzmodule_modulez00,
		BgL_bgl_string1952za700za7za7m2004za7, " vs ", 4);
	      DEFINE_STRING(BGl_string1953z00zzmodule_modulez00,
		BgL_bgl_string1953za700za7za7m2005za7, "conflict in module's name: ", 27);
	      DEFINE_STRING(BGl_string1954z00zzmodule_modulez00,
		BgL_bgl_string1954za700za7za7m2006za7, "Module declaration", 18);
	      DEFINE_STRING(BGl_string1955z00zzmodule_modulez00,
		BgL_bgl_string1955za700za7za7m2007za7, "Illegal module declaration", 26);
	      DEFINE_STRING(BGl_string1956z00zzmodule_modulez00,
		BgL_bgl_string1956za700za7za7m2008za7, ".ebgl", 5);
	      DEFINE_STRING(BGl_string1957z00zzmodule_modulez00,
		BgL_bgl_string1957za700za7za7m2009za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1958z00zzmodule_modulez00,
		BgL_bgl_string1958za700za7za7m2010za7, "Module checksum object", 22);
	      DEFINE_STRING(BGl_string1960z00zzmodule_modulez00,
		BgL_bgl_string1960za700za7za7m2011za7, "module checksum", 15);
	      DEFINE_STRING(BGl_string1959z00zzmodule_modulez00,
		BgL_bgl_string1959za700za7za7m2012za7, ".mco", 4);
	      DEFINE_STRING(BGl_string1961z00zzmodule_modulez00,
		BgL_bgl_string1961za700za7za7m2013za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string1962z00zzmodule_modulez00,
		BgL_bgl_string1962za700za7za7m2014za7, "Can't open file for input", 25);
	      DEFINE_STRING(BGl_string1964z00zzmodule_modulez00,
		BgL_bgl_string1964za700za7za7m2015za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string1966z00zzmodule_modulez00,
		BgL_bgl_string1966za700za7za7m2016za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string1967z00zzmodule_modulez00,
		BgL_bgl_string1967za700za7za7m2017za7, "module_module", 13);
	      DEFINE_STRING(BGl_string1968z00zzmodule_modulez00,
		BgL_bgl_string1968za700za7za7m2018za7,
		"_ ccomp mco dump-module --to-stdout module-initialization include cond-expand (library _) library (additional-heap-restore-globals!) (eval foreign t) main module pass-started ",
		175);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consumezd2modulez12zd2envz12zzmodule_modulez00,
		BgL_bgl__consumeza7d2modul2019za7,
		BGl__consumezd2modulez12zc0zzmodule_modulez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_producezd2modulezd2clausez12zd2envzc0zzmodule_modulez00,
		BgL_bgl__produceza7d2modul2020za7,
		BGl__producezd2modulezd2clausez12z12zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_producezd2modulez12zd2envz12zzmodule_modulez00,
		BgL_bgl__produceza7d2modul2021za7,
		BGl__producezd2modulez12zc0zzmodule_modulez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long
		BgL_checksumz00_954, char *BgL_fromz00_955)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_modulez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_modulez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_modulez00();
					BGl_cnstzd2initzd2zzmodule_modulez00();
					BGl_importedzd2moduleszd2initz00zzmodule_modulez00();
					BGl_objectzd2initzd2zzmodule_modulez00();
					BGl_methodzd2initzd2zzmodule_modulez00();
					BGl_toplevelzd2initzd2zzmodule_modulez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_module");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			{	/* Module/module.scm 15 */
				obj_t BgL_cportz00_924;

				BgL_cportz00_924 =
					bgl_open_input_string(BGl_string1968z00zzmodule_modulez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_925;

					BgL_iz00_925 = ((long) 14);
				BgL_loopz00_926:
					if ((BgL_iz00_925 == ((long) -1)))
						{	/* Module/module.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/module.scm 15 */
							{	/* Module/module.scm 15 */
								obj_t BgL_arg1976z00_928;

								{	/* Module/module.scm 15 */

									{	/* Module/module.scm 15 */
										obj_t BgL_locationz00_930;

										BgL_locationz00_930 = BBOOL(((bool_t) 0));
										{	/* Module/module.scm 15 */

											BgL_arg1976z00_928 =
												BGl_readz00zz__readerz00(BgL_cportz00_924,
												BgL_locationz00_930);
										}
									}
								}
								{	/* Module/module.scm 15 */
									int BgL_auxz00_983;

									BgL_auxz00_983 = (int) (BgL_iz00_925);
									CNST_TABLE_SET(BgL_auxz00_983, BgL_arg1976z00_928);
							}}
							{	/* Module/module.scm 15 */
								int BgL_auxz00_931;

								BgL_auxz00_931 = (int) ((BgL_iz00_925 - ((long) 1)));
								{
									long BgL_iz00_988;

									BgL_iz00_988 = (long) (BgL_auxz00_931);
									BgL_iz00_925 = BgL_iz00_988;
									goto BgL_loopz00_926;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			BGl_za2moduleza2z00zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 = BFALSE;
			BGl_za2mainza2z00zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2locationza2zd2zzmodule_modulez00 = BFALSE;
			return (BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 =
				BNIL, BUNSPEC);
		}
	}



/* produce-module! */
	BGL_EXPORTED_DEF obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t
		BgL_mclausez00_23)
	{
		AN_OBJECT;
		{	/* Module/module.scm 92 */
			{	/* Module/module.scm 93 */
				obj_t BgL_list1589z00_159;

				{	/* Module/module.scm 93 */
					obj_t BgL_arg1591z00_161;

					{	/* Module/module.scm 93 */
						obj_t BgL_arg1596z00_163;

						BgL_arg1596z00_163 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg1591z00_161 =
							MAKE_PAIR(BGl_string1939z00zzmodule_modulez00,
							BgL_arg1596z00_163);
					}
					BgL_list1589z00_159 =
						MAKE_PAIR(BGl_string1940z00zzmodule_modulez00, BgL_arg1591z00_161);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1589z00_159);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1939z00zzmodule_modulez00;
			{
				obj_t BgL_hooksz00_167;

				obj_t BgL_hnamesz00_168;

				BgL_hooksz00_167 = BNIL;
				BgL_hnamesz00_168 = BNIL;
			BgL_zc3anonymousza31597ze3z83_169:
				if (NULLP(BgL_hooksz00_167))
					{	/* Module/module.scm 93 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Module/module.scm 93 */
						bool_t BgL_testz00_1000;

						{	/* Module/module.scm 93 */
							obj_t BgL_fun1605z00_177;

							BgL_fun1605z00_177 = CAR(BgL_hooksz00_167);
							BgL_testz00_1000 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun1605z00_177) (BgL_fun1605z00_177,
									BEOA));
						}
						if (BgL_testz00_1000)
							{
								obj_t BgL_hnamesz00_1007;

								obj_t BgL_hooksz00_1005;

								BgL_hooksz00_1005 = CDR(BgL_hooksz00_167);
								BgL_hnamesz00_1007 = CDR(BgL_hnamesz00_168);
								BgL_hnamesz00_168 = BgL_hnamesz00_1007;
								BgL_hooksz00_167 = BgL_hooksz00_1005;
								goto BgL_zc3anonymousza31597ze3z83_169;
							}
						else
							{	/* Module/module.scm 93 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string1939z00zzmodule_modulez00,
									BGl_string1941z00zzmodule_modulez00, CAR(BgL_hnamesz00_168));
							}
					}
			}
			{

				if (PAIRP(BgL_mclausez00_23))
					{	/* Module/module.scm 94 */
						obj_t BgL_cdrzd21431zd2_186;

						BgL_cdrzd21431zd2_186 = CDR(BgL_mclausez00_23);
						if ((CAR(BgL_mclausez00_23) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/module.scm 94 */
								if (PAIRP(BgL_cdrzd21431zd2_186))
									{	/* Module/module.scm 94 */
										obj_t BgL_carzd21434zd2_189;

										BgL_carzd21434zd2_189 = CAR(BgL_cdrzd21431zd2_186);
										if (SYMBOLP(BgL_carzd21434zd2_189))
											{	/* Module/module.scm 94 */
												return
													BGl_dozd2modulezd2zzmodule_modulez00
													(BgL_mclausez00_23, BgL_carzd21434zd2_189,
													CDR(BgL_cdrzd21431zd2_186));
											}
										else
											{	/* Module/module.scm 94 */
											BgL_tagzd21424zd2_183:
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1942z00zzmodule_modulez00,
													BGl_string1943z00zzmodule_modulez00,
													BgL_mclausez00_23, BNIL);
											}
									}
								else
									{	/* Module/module.scm 94 */
										goto BgL_tagzd21424zd2_183;
									}
							}
						else
							{	/* Module/module.scm 94 */
								goto BgL_tagzd21424zd2_183;
							}
					}
				else
					{	/* Module/module.scm 94 */
						goto BgL_tagzd21424zd2_183;
					}
			}
		}
	}



/* _produce-module! */
	obj_t BGl__producezd2modulez12zc0zzmodule_modulez00(obj_t BgL_envz00_860,
		obj_t BgL_mclausez00_861)
	{
		AN_OBJECT;
		{	/* Module/module.scm 92 */
			return BGl_producezd2modulez12zc0zzmodule_modulez00(BgL_mclausez00_861);
		}
	}



/* do-module */
	obj_t BGl_dozd2modulezd2zzmodule_modulez00(obj_t BgL_mclausez00_24,
		obj_t BgL_namez00_25, obj_t BgL_clausesz00_26)
	{
		AN_OBJECT;
		{	/* Module/module.scm 103 */
			{	/* Module/module.scm 104 */
				obj_t BgL_clausesz00_195;

				{	/* Module/module.scm 104 */
					obj_t BgL_arg1639z00_229;

					obj_t BgL_arg1640z00_230;

					BgL_arg1639z00_229 = BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
					if (SYMBOLP(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* Module/module.scm 106 */
							obj_t BgL_arg1643z00_232;

							{	/* Module/module.scm 106 */
								obj_t BgL_arg1644z00_233;

								obj_t BgL_arg1645z00_234;

								BgL_arg1644z00_233 = CNST_TABLE_REF(((long) 2));
								{	/* Module/module.scm 106 */
									obj_t BgL_list1646z00_235;

									BgL_list1646z00_235 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1645z00_234 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_za2mainza2z00zzmodule_modulez00, BgL_list1646z00_235);
								}
								BgL_arg1643z00_232 =
									MAKE_PAIR(BgL_arg1644z00_233, BgL_arg1645z00_234);
							}
							BgL_arg1640z00_230 =
								MAKE_PAIR(BgL_arg1643z00_232, BgL_clausesz00_26);
						}
					else
						{	/* Module/module.scm 105 */
							BgL_arg1640z00_230 = BgL_clausesz00_26;
						}
					BgL_clausesz00_195 =
						MAKE_PAIR(BgL_arg1639z00_229, BgL_arg1640z00_230);
				}
				{	/* Module/module.scm 108 */
					bool_t BgL_testz00_1036;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_25,
								CNST_TABLE_REF(((long) 3)))))
						{	/* Module/module.scm 108 */
							BgL_testz00_1036 = ((bool_t) 0);
						}
					else
						{	/* Module/module.scm 108 */
							BgL_testz00_1036 = ((bool_t) 1);
						}
					if (BgL_testz00_1036)
						{	/* Module/module.scm 108 */
							BGl_za2moduleza2z00zzmodule_modulez00 = BgL_namez00_25;
							BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 =
								BgL_mclausez00_24;
							if (EXTENDED_PAIRP(BgL_mclausez00_24))
								{	/* Module/module.scm 113 */
									BGl_za2modulezd2locationza2zd2zzmodule_modulez00 =
										CER(BgL_mclausez00_24);
								}
							else
								{	/* Module/module.scm 113 */
									BGl_za2modulezd2locationza2zd2zzmodule_modulez00 = BFALSE;
								}
							BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00
								();
							{	/* Module/module.scm 117 */
								obj_t BgL_clausesz00_198;

								BgL_clausesz00_198 =
									BGl_producezd2libraryzd2clausesz00zzmodule_modulez00
									(BgL_clausesz00_195);
								BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
								{
									obj_t BgL_l1566z00_200;

									BgL_l1566z00_200 = BgL_clausesz00_198;
								BgL_zc3anonymousza31618ze3z83_201:
									if (PAIRP(BgL_l1566z00_200))
										{	/* Module/module.scm 122 */
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(CAR
												(BgL_l1566z00_200));
											{
												obj_t BgL_l1566z00_1051;

												BgL_l1566z00_1051 = CDR(BgL_l1566z00_200);
												BgL_l1566z00_200 = BgL_l1566z00_1051;
												goto BgL_zc3anonymousza31618ze3z83_201;
											}
										}
									else
										{	/* Module/module.scm 122 */
											((bool_t) 1);
										}
								}
								BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 =
									BGl_checksumzd2modulezd2zzmodule_modulez00(BgL_mclausez00_24);
								{	/* Module/module.scm 124 */
									obj_t BgL_valuez00_206;

									BgL_valuez00_206 =
										BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00
										();
									if (((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Module/module.scm 124 */
											{	/* Module/module.scm 124 */
												obj_t BgL_port1568z00_208;

												{	/* Module/module.scm 124 */
													obj_t BgL_res1920z00_640;

													{	/* Module/module.scm 124 */
														obj_t BgL_auxz00_1058;

														BgL_auxz00_1058 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1920z00_640 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1058);
													}
													BgL_port1568z00_208 = BgL_res1920z00_640;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port1568z00_208);
												bgl_display_string(BGl_string1944z00zzmodule_modulez00,
													BgL_port1568z00_208);
												{	/* Module/module.scm 124 */
													obj_t BgL_arg1624z00_209;

													{	/* Module/module.scm 124 */
														bool_t BgL_testz00_1063;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Module/module.scm 124 */
																BgL_testz00_1063 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
															}
														else
															{	/* Module/module.scm 124 */
																BgL_testz00_1063 = ((bool_t) 0);
															}
														if (BgL_testz00_1063)
															{	/* Module/module.scm 124 */
																BgL_arg1624z00_209 =
																	BGl_string1945z00zzmodule_modulez00;
															}
														else
															{	/* Module/module.scm 124 */
																BgL_arg1624z00_209 =
																	BGl_string1946z00zzmodule_modulez00;
															}
													}
													bgl_display_obj(BgL_arg1624z00_209,
														BgL_port1568z00_208);
												}
												bgl_display_string(BGl_string1947z00zzmodule_modulez00,
													BgL_port1568z00_208);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port1568z00_208);
											}
											{	/* Module/module.scm 124 */
												obj_t BgL_list1627z00_212;

												BgL_list1627z00_212 =
													MAKE_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list1627z00_212);
											}
										}
									else
										{	/* Module/module.scm 124 */
											obj_t BgL_g1554z00_213;

											obj_t BgL_g1555z00_214;

											{	/* Module/module.scm 124 */
												obj_t BgL_list1637z00_227;

												BgL_list1637z00_227 =
													MAKE_PAIR
													(BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00,
													BNIL);
												BgL_g1554z00_213 = BgL_list1637z00_227;
											}
											BgL_g1555z00_214 = CNST_TABLE_REF(((long) 4));
											{
												obj_t BgL_hooksz00_216;

												obj_t BgL_hnamesz00_217;

												BgL_hooksz00_216 = BgL_g1554z00_213;
												BgL_hnamesz00_217 = BgL_g1555z00_214;
											BgL_zc3anonymousza31628ze3z83_218:
												if (NULLP(BgL_hooksz00_216))
													{	/* Module/module.scm 124 */
														return BgL_valuez00_206;
													}
												else
													{	/* Module/module.scm 124 */
														bool_t BgL_testz00_1078;

														{	/* Module/module.scm 124 */
															obj_t BgL_fun1636z00_225;

															BgL_fun1636z00_225 = CAR(BgL_hooksz00_216);
															BgL_testz00_1078 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1636z00_225)
																(BgL_fun1636z00_225, BEOA));
														}
														if (BgL_testz00_1078)
															{
																obj_t BgL_hnamesz00_1085;

																obj_t BgL_hooksz00_1083;

																BgL_hooksz00_1083 = CDR(BgL_hooksz00_216);
																BgL_hnamesz00_1085 = CDR(BgL_hnamesz00_217);
																BgL_hnamesz00_217 = BgL_hnamesz00_1085;
																BgL_hooksz00_216 = BgL_hooksz00_1083;
																goto BgL_zc3anonymousza31628ze3z83_218;
															}
														else
															{	/* Module/module.scm 124 */
																obj_t BgL_arg1635z00_224;

																BgL_arg1635z00_224 = CAR(BgL_hnamesz00_217);
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_za2currentzd2passza2zd2zzengine_passz00,
																	BGl_string1948z00zzmodule_modulez00,
																	BgL_arg1635z00_224);
															}
													}
											}
										}
								}
							}
						}
					else
						{	/* Module/module.scm 108 */
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1942z00zzmodule_modulez00,
								BGl_string1949z00zzmodule_modulez00, BgL_mclausez00_24, BNIL);
						}
				}
			}
		}
	}



/* produce-library-clauses */
	obj_t BGl_producezd2libraryzd2clausesz00zzmodule_modulez00(obj_t
		BgL_clausesz00_27)
	{
		AN_OBJECT;
		{	/* Module/module.scm 130 */
			{	/* Module/module.scm 131 */
				obj_t BgL_producerz00_236;

				BgL_producerz00_236 =
					BGl_findzd2clausezd2producerz00zzmodule_modulez00(CNST_TABLE_REF((
							(long) 5)), CNST_TABLE_REF(((long) 6)));
				{
					obj_t BgL_clausesz00_239;

					obj_t BgL_resz00_240;

					BgL_clausesz00_239 = BgL_clausesz00_27;
					BgL_resz00_240 = BNIL;
				BgL_zc3anonymousza31647ze3z83_241:
					if (NULLP(BgL_clausesz00_239))
						{	/* Module/module.scm 135 */
							return bgl_reverse_bang(BgL_resz00_240);
						}
					else
						{	/* Module/module.scm 138 */
							obj_t BgL_g1557z00_243;

							BgL_g1557z00_243 = CAR(BgL_clausesz00_239);
							{
								obj_t BgL_cz00_245;

								BgL_cz00_245 = BgL_g1557z00_243;
							BgL_zc3anonymousza31649ze3z83_246:
								{
									obj_t BgL_filesz00_249;

									if (PAIRP(BgL_cz00_245))
										{	/* Module/module.scm 138 */
											if ((CAR(BgL_cz00_245) == CNST_TABLE_REF(((long) 7))))
												{	/* Module/module.scm 138 */
													{	/* Module/module.scm 141 */
														obj_t BgL_ncz00_264;

														BgL_ncz00_264 =
															BGl_prognzd2firstzd2expressionz00zztools_prognz00
															(BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
															(BgL_cz00_245));
														{	/* Module/module.scm 142 */
															bool_t BgL_testz00_1105;

															if ((BgL_ncz00_264 == BUNSPEC))
																{	/* Module/module.scm 142 */
																	BgL_testz00_1105 = ((bool_t) 1);
																}
															else
																{	/* Module/module.scm 142 */
																	BgL_testz00_1105 = (BgL_ncz00_264 == BFALSE);
																}
															if (BgL_testz00_1105)
																{
																	obj_t BgL_clausesz00_1109;

																	BgL_clausesz00_1109 = CDR(BgL_clausesz00_239);
																	BgL_clausesz00_239 = BgL_clausesz00_1109;
																	goto BgL_zc3anonymousza31647ze3z83_241;
																}
															else
																{
																	obj_t BgL_cz00_1111;

																	BgL_cz00_1111 = BgL_ncz00_264;
																	BgL_cz00_245 = BgL_cz00_1111;
																	goto BgL_zc3anonymousza31649ze3z83_246;
																}
														}
													}
												}
											else
												{	/* Module/module.scm 138 */
													if ((CAR(BgL_cz00_245) == CNST_TABLE_REF(((long) 5))))
														{	/* Module/module.scm 138 */
															PROCEDURE_ENTRY(BgL_producerz00_236)
																(BgL_producerz00_236, BgL_cz00_245, BEOA);
															{
																obj_t BgL_clausesz00_1118;

																BgL_clausesz00_1118 = CDR(BgL_clausesz00_239);
																BgL_clausesz00_239 = BgL_clausesz00_1118;
																goto BgL_zc3anonymousza31647ze3z83_241;
															}
														}
													else
														{	/* Module/module.scm 138 */
															if (
																(CAR(BgL_cz00_245) ==
																	CNST_TABLE_REF(((long) 8))))
																{	/* Module/module.scm 138 */
																	BgL_filesz00_249 = CDR(BgL_cz00_245);
																	BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00
																		(BgL_producerz00_236, BgL_filesz00_249);
																	{	/* Module/module.scm 150 */
																		obj_t BgL_arg1670z00_270;

																		obj_t BgL_arg1672z00_271;

																		BgL_arg1670z00_270 =
																			CDR(BgL_clausesz00_239);
																		BgL_arg1672z00_271 =
																			MAKE_PAIR(BgL_cz00_245, BgL_resz00_240);
																		{
																			obj_t BgL_resz00_1128;

																			obj_t BgL_clausesz00_1127;

																			BgL_clausesz00_1127 = BgL_arg1670z00_270;
																			BgL_resz00_1128 = BgL_arg1672z00_271;
																			BgL_resz00_240 = BgL_resz00_1128;
																			BgL_clausesz00_239 = BgL_clausesz00_1127;
																			goto BgL_zc3anonymousza31647ze3z83_241;
																		}
																	}
																}
															else
																{	/* Module/module.scm 138 */
																BgL_tagzd21443zd2_251:
																	{	/* Module/module.scm 152 */
																		obj_t BgL_arg1673z00_272;

																		obj_t BgL_arg1674z00_273;

																		BgL_arg1673z00_272 =
																			CDR(BgL_clausesz00_239);
																		BgL_arg1674z00_273 =
																			MAKE_PAIR(BgL_cz00_245, BgL_resz00_240);
																		{
																			obj_t BgL_resz00_1133;

																			obj_t BgL_clausesz00_1132;

																			BgL_clausesz00_1132 = BgL_arg1673z00_272;
																			BgL_resz00_1133 = BgL_arg1674z00_273;
																			BgL_resz00_240 = BgL_resz00_1133;
																			BgL_clausesz00_239 = BgL_clausesz00_1132;
																			goto BgL_zc3anonymousza31647ze3z83_241;
																		}
																	}
																}
														}
												}
										}
									else
										{	/* Module/module.scm 138 */
											goto BgL_tagzd21443zd2_251;
										}
								}
							}
						}
				}
			}
		}
	}



/* produce-include-library-clauses */
	bool_t BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00(obj_t
		BgL_producerz00_28, obj_t BgL_filesz00_29)
	{
		AN_OBJECT;
		{	/* Module/module.scm 157 */
			{	/* Module/module.scm 158 */
				obj_t BgL_g1571z00_276;

				{	/* Module/module.scm 166 */
					obj_t BgL_list1691z00_297;

					BgL_list1691z00_297 = MAKE_PAIR(BgL_filesz00_29, BNIL);
					BgL_g1571z00_276 =
						BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
						(BGl_readzd2directiveszd2envz00zzread_includez00,
						BgL_list1691z00_297);
				}
				{
					obj_t BgL_l1569z00_278;

					BgL_l1569z00_278 = BgL_g1571z00_276;
				BgL_zc3anonymousza31675ze3z83_279:
					if (PAIRP(BgL_l1569z00_278))
						{	/* Module/module.scm 166 */
							{	/* Module/module.scm 159 */
								obj_t BgL_clausez00_281;

								BgL_clausez00_281 = CAR(BgL_l1569z00_278);
								if (PAIRP(BgL_clausez00_281))
									{	/* Module/module.scm 159 */
										if ((CAR(BgL_clausez00_281) == CNST_TABLE_REF(((long) 5))))
											{	/* Module/module.scm 159 */
												PROCEDURE_ENTRY(BgL_producerz00_28) (BgL_producerz00_28,
													BgL_clausez00_281, BEOA);
											}
										else
											{	/* Module/module.scm 159 */
												if (
													(CAR(BgL_clausez00_281) ==
														CNST_TABLE_REF(((long) 8))))
													{	/* Module/module.scm 159 */
														obj_t BgL_arg1680z00_290;

														BgL_arg1680z00_290 = CDR(BgL_clausez00_281);
														BBOOL
															(BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00
															(BgL_producerz00_28, BgL_arg1680z00_290));
													}
												else
													{	/* Module/module.scm 159 */
														BUNSPEC;
													}
											}
									}
								else
									{	/* Module/module.scm 159 */
										BUNSPEC;
									}
							}
							{
								obj_t BgL_l1569z00_1154;

								BgL_l1569z00_1154 = CDR(BgL_l1569z00_278);
								BgL_l1569z00_278 = BgL_l1569z00_1154;
								goto BgL_zc3anonymousza31675ze3z83_279;
							}
						}
					else
						{	/* Module/module.scm 166 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* finalize-clause-compilations */
	obj_t BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 171 */
			{
				obj_t BgL_ccz00_300;

				obj_t BgL_unitsz00_301;

				BgL_ccz00_300 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_unitsz00_301 = BNIL;
			BgL_zc3anonymousza31692ze3z83_302:
				if (NULLP(BgL_ccz00_300))
					{	/* Module/module.scm 174 */
						return
							bgl_append2(BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00(),
							BgL_unitsz00_301);
					}
				else
					{	/* Module/module.scm 176 */
						obj_t BgL_finaliza7erza7_305;

						{	/* Module/module.scm 176 */
							BgL_ccompz00_bglt BgL_obj1511z00_674;

							{	/* Module/module.scm 176 */
								obj_t BgL_pairz00_673;

								BgL_pairz00_673 = BgL_ccz00_300;
								BgL_obj1511z00_674 = (BgL_ccompz00_bglt) (CAR(BgL_pairz00_673));
							}
							BgL_finaliza7erza7_305 =
								(((BgL_ccompz00_bglt) CREF(BgL_obj1511z00_674))->
								BgL_finaliza7erza7);
						}
						{	/* Module/module.scm 176 */
							obj_t BgL_finalresz00_306;

							BgL_finalresz00_306 =
								PROCEDURE_ENTRY(BgL_finaliza7erza7_305) (BgL_finaliza7erza7_305,
								BEOA);
							{	/* Module/module.scm 177 */

								{	/* Module/module.scm 178 */
									obj_t BgL_arg1695z00_307;

									obj_t BgL_arg1696z00_308;

									BgL_arg1695z00_307 = CDR(BgL_ccz00_300);
									if (PAIRP(BgL_finalresz00_306))
										{	/* Module/module.scm 179 */
											BgL_arg1696z00_308 =
												bgl_append2(BgL_finalresz00_306, BgL_unitsz00_301);
										}
									else
										{	/* Module/module.scm 179 */
											BgL_arg1696z00_308 = BgL_unitsz00_301;
										}
									{
										obj_t BgL_unitsz00_1170;

										obj_t BgL_ccz00_1169;

										BgL_ccz00_1169 = BgL_arg1695z00_307;
										BgL_unitsz00_1170 = BgL_arg1696z00_308;
										BgL_unitsz00_301 = BgL_unitsz00_1170;
										BgL_ccz00_300 = BgL_ccz00_1169;
										goto BgL_zc3anonymousza31692ze3z83_302;
									}
								}
							}
						}
					}
			}
		}
	}



/* produce-module-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_clausez00_30)
	{
		AN_OBJECT;
		{	/* Module/module.scm 186 */
			{
				obj_t BgL_cz00_313;

				BgL_cz00_313 = BgL_clausez00_30;
			BgL_zc3anonymousza31701ze3z83_314:
				{

					if (PAIRP(BgL_cz00_313))
						{	/* Module/module.scm 187 */
							if ((CAR(BgL_cz00_313) == CNST_TABLE_REF(((long) 7))))
								{	/* Module/module.scm 187 */
									{	/* Module/module.scm 190 */
										obj_t BgL_ncz00_326;

										BgL_ncz00_326 =
											BGl_prognzd2firstzd2expressionz00zztools_prognz00
											(BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
											(BgL_cz00_313));
										{	/* Module/module.scm 191 */
											bool_t BgL_testz00_1179;

											if ((BgL_ncz00_326 == BFALSE))
												{	/* Module/module.scm 191 */
													BgL_testz00_1179 = ((bool_t) 1);
												}
											else
												{	/* Module/module.scm 191 */
													BgL_testz00_1179 = (BgL_ncz00_326 == BUNSPEC);
												}
											if (BgL_testz00_1179)
												{	/* Module/module.scm 191 */
													return BFALSE;
												}
											else
												{
													obj_t BgL_cz00_1183;

													BgL_cz00_1183 = BgL_ncz00_326;
													BgL_cz00_313 = BgL_cz00_1183;
													goto BgL_zc3anonymousza31701ze3z83_314;
												}
										}
									}
								}
							else
								{	/* Module/module.scm 187 */
									obj_t BgL_carzd21482zd2_322;

									BgL_carzd21482zd2_322 = CAR(BgL_cz00_313);
									if (SYMBOLP(BgL_carzd21482zd2_322))
										{	/* Module/module.scm 187 */
											obj_t BgL_idz00_681;

											BgL_idz00_681 = BgL_carzd21482zd2_322;
											{	/* Module/module.scm 187 */
												obj_t BgL_fun1710z00_682;

												BgL_fun1710z00_682 =
													BGl_findzd2clausezd2producerz00zzmodule_modulez00
													(BgL_idz00_681, BgL_clausez00_30);
												return
													PROCEDURE_ENTRY(BgL_fun1710z00_682)
													(BgL_fun1710z00_682, BgL_cz00_313, BEOA);
											}
										}
									else
										{	/* Module/module.scm 187 */
										BgL_tagzd21475zd2_318:
											{	/* Module/module.scm 196 */
												obj_t BgL_list1711z00_331;

												BgL_list1711z00_331 = MAKE_PAIR(BNIL, BNIL);
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1942z00zzmodule_modulez00,
													BGl_string1950z00zzmodule_modulez00, BgL_clausez00_30,
													BgL_list1711z00_331);
											}
										}
								}
						}
					else
						{	/* Module/module.scm 187 */
							goto BgL_tagzd21475zd2_318;
						}
				}
			}
		}
	}



/* _produce-module-clause! */
	obj_t BGl__producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_envz00_865, obj_t BgL_clausez00_866)
	{
		AN_OBJECT;
		{	/* Module/module.scm 186 */
			return
				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
				(BgL_clausez00_866);
		}
	}



/* install-module-clauses-compiler! */
	obj_t BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 209 */
			if (PAIRP(BGl_za2clausezd2compilersza2zd2zzmodule_modulez00))
				{	/* Module/module.scm 211 */
					return BFALSE;
				}
			else
				{	/* Module/module.scm 213 */
					obj_t BgL_arg1713z00_334;

					obj_t BgL_arg1714z00_335;

					obj_t BgL_arg1715z00_336;

					obj_t BgL_arg1718z00_337;

					obj_t BgL_arg1719z00_338;

					obj_t BgL_arg1724z00_339;

					obj_t BgL_arg1725z00_340;

					obj_t BgL_arg1729z00_341;

					obj_t BgL_arg1730z00_342;

					obj_t BgL_arg1731z00_343;

					obj_t BgL_arg1732z00_344;

					obj_t BgL_arg1733z00_345;

					obj_t BgL_arg1734z00_346;

					obj_t BgL_arg1735z00_347;

					obj_t BgL_arg1736z00_348;

					obj_t BgL_arg1738z00_349;

					obj_t BgL_arg1739z00_350;

					BgL_arg1713z00_334 = BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
					BgL_arg1714z00_335 = BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
					BgL_arg1715z00_336 = BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
					BgL_arg1718z00_337 = BGl_makezd2usezd2compilerz00zzmodule_impusez00();
					BgL_arg1719z00_338 =
						BGl_makezd2importzd2compilerz00zzmodule_impusez00();
					BgL_arg1724z00_339 =
						BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
					BgL_arg1725z00_340 = BGl_makezd2javazd2compilerz00zzmodule_javaz00();
					BgL_arg1729z00_341 =
						BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
					BgL_arg1730z00_342 =
						BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
					BgL_arg1731z00_343 =
						BGl_makezd2includezd2compilerz00zzmodule_includez00();
					BgL_arg1732z00_344 = BGl_makezd2withzd2compilerz00zzmodule_withz00();
					BgL_arg1733z00_345 =
						BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
					BgL_arg1734z00_346 =
						BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
					BgL_arg1735z00_347 = BGl_makezd2typezd2compilerz00zzmodule_typez00();
					BgL_arg1736z00_348 =
						BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
					BgL_arg1738z00_349 =
						BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
					BgL_arg1739z00_350 =
						BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
					{	/* Module/module.scm 213 */
						obj_t BgL_list1740z00_351;

						{	/* Module/module.scm 213 */
							obj_t BgL_arg1741z00_352;

							{	/* Module/module.scm 213 */
								obj_t BgL_arg1742z00_353;

								{	/* Module/module.scm 213 */
									obj_t BgL_arg1743z00_354;

									{	/* Module/module.scm 213 */
										obj_t BgL_arg1744z00_355;

										{	/* Module/module.scm 213 */
											obj_t BgL_arg1745z00_356;

											{	/* Module/module.scm 213 */
												obj_t BgL_arg1746z00_357;

												{	/* Module/module.scm 213 */
													obj_t BgL_arg1747z00_358;

													{	/* Module/module.scm 213 */
														obj_t BgL_arg1748z00_359;

														{	/* Module/module.scm 213 */
															obj_t BgL_arg1749z00_360;

															{	/* Module/module.scm 213 */
																obj_t BgL_arg1750z00_361;

																{	/* Module/module.scm 213 */
																	obj_t BgL_arg1751z00_362;

																	{	/* Module/module.scm 213 */
																		obj_t BgL_arg1753z00_363;

																		{	/* Module/module.scm 213 */
																			obj_t BgL_arg1754z00_364;

																			{	/* Module/module.scm 213 */
																				obj_t BgL_arg1755z00_365;

																				{	/* Module/module.scm 213 */
																					obj_t BgL_arg1756z00_366;

																					{	/* Module/module.scm 213 */
																						obj_t BgL_arg1757z00_367;

																						BgL_arg1757z00_367 =
																							MAKE_PAIR(BgL_arg1739z00_350,
																							BNIL);
																						BgL_arg1756z00_366 =
																							MAKE_PAIR(BgL_arg1738z00_349,
																							BgL_arg1757z00_367);
																					}
																					BgL_arg1755z00_365 =
																						MAKE_PAIR(BgL_arg1736z00_348,
																						BgL_arg1756z00_366);
																				}
																				BgL_arg1754z00_364 =
																					MAKE_PAIR(BgL_arg1735z00_347,
																					BgL_arg1755z00_365);
																			}
																			BgL_arg1753z00_363 =
																				MAKE_PAIR(BgL_arg1734z00_346,
																				BgL_arg1754z00_364);
																		}
																		BgL_arg1751z00_362 =
																			MAKE_PAIR(BgL_arg1733z00_345,
																			BgL_arg1753z00_363);
																	}
																	BgL_arg1750z00_361 =
																		MAKE_PAIR(BgL_arg1732z00_344,
																		BgL_arg1751z00_362);
																}
																BgL_arg1749z00_360 =
																	MAKE_PAIR(BgL_arg1731z00_343,
																	BgL_arg1750z00_361);
															}
															BgL_arg1748z00_359 =
																MAKE_PAIR(BgL_arg1730z00_342,
																BgL_arg1749z00_360);
														}
														BgL_arg1747z00_358 =
															MAKE_PAIR(BgL_arg1729z00_341, BgL_arg1748z00_359);
													}
													BgL_arg1746z00_357 =
														MAKE_PAIR(BgL_arg1725z00_340, BgL_arg1747z00_358);
												}
												BgL_arg1745z00_356 =
													MAKE_PAIR(BgL_arg1724z00_339, BgL_arg1746z00_357);
											}
											BgL_arg1744z00_355 =
												MAKE_PAIR(BgL_arg1719z00_338, BgL_arg1745z00_356);
										}
										BgL_arg1743z00_354 =
											MAKE_PAIR(BgL_arg1718z00_337, BgL_arg1744z00_355);
									}
									BgL_arg1742z00_353 =
										MAKE_PAIR(BgL_arg1715z00_336, BgL_arg1743z00_354);
								}
								BgL_arg1741z00_352 =
									MAKE_PAIR(BgL_arg1714z00_335, BgL_arg1742z00_353);
							}
							BgL_list1740z00_351 =
								MAKE_PAIR(BgL_arg1713z00_334, BgL_arg1741z00_352);
						}
						return (BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 =
							BgL_list1740z00_351, BUNSPEC);
					}
				}
		}
	}



/* find-clause-producer */
	obj_t BGl_findzd2clausezd2producerz00zzmodule_modulez00(obj_t
		BgL_keywordz00_31, obj_t BgL_clausez00_32)
	{
		AN_OBJECT;
		{	/* Module/module.scm 234 */
			{	/* Module/module.scm 236 */
				obj_t BgL_unknownzd2clausezd2producerz00_867;

				BgL_unknownzd2clausezd2producerz00_867 =
					make_fx_procedure
					(BGl_unknownzd2clausezd2producerz00zzmodule_modulez00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_unknownzd2clausezd2producerz00_867,
					(int) (((long) 0)), BgL_clausez00_32);
				{
					obj_t BgL_ccz00_370;

					BgL_ccz00_370 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_zc3anonymousza31758ze3z83_371:
					if (NULLP(BgL_ccz00_370))
						{	/* Module/module.scm 242 */
							return BgL_unknownzd2clausezd2producerz00_867;
						}
					else
						{	/* Module/module.scm 244 */
							bool_t BgL_testz00_1236;

							{	/* Module/module.scm 244 */
								obj_t BgL_auxz00_1237;

								{	/* Module/module.scm 244 */
									BgL_ccompz00_bglt BgL_obj1508z00_689;

									{	/* Module/module.scm 244 */
										obj_t BgL_pairz00_688;

										BgL_pairz00_688 = BgL_ccz00_370;
										BgL_obj1508z00_689 =
											(BgL_ccompz00_bglt) (CAR(BgL_pairz00_688));
									}
									BgL_auxz00_1237 =
										(((BgL_ccompz00_bglt) CREF(BgL_obj1508z00_689))->BgL_idz00);
								}
								BgL_testz00_1236 = (BgL_auxz00_1237 == BgL_keywordz00_31);
							}
							if (BgL_testz00_1236)
								{	/* Module/module.scm 245 */
									BgL_ccompz00_bglt BgL_obj1509z00_691;

									{	/* Module/module.scm 245 */
										obj_t BgL_pairz00_690;

										BgL_pairz00_690 = BgL_ccz00_370;
										BgL_obj1509z00_691 =
											(BgL_ccompz00_bglt) (CAR(BgL_pairz00_690));
									}
									return
										(((BgL_ccompz00_bglt) CREF(BgL_obj1509z00_691))->
										BgL_producerz00);
								}
							else
								{
									obj_t BgL_ccz00_1245;

									BgL_ccz00_1245 = CDR(BgL_ccz00_370);
									BgL_ccz00_370 = BgL_ccz00_1245;
									goto BgL_zc3anonymousza31758ze3z83_371;
								}
						}
				}
			}
		}
	}



/* unknown-clause-producer */
	obj_t BGl_unknownzd2clausezd2producerz00zzmodule_modulez00(obj_t
		BgL_envz00_868, obj_t BgL_valuesz00_870)
	{
		AN_OBJECT;
		{	/* Module/module.scm 239 */
			{	/* Module/module.scm 236 */
				obj_t BgL_clausez00_869;

				BgL_clausez00_869 = PROCEDURE_REF(BgL_envz00_868, (int) (((long) 0)));
				{
					obj_t BgL_valuesz00_379;

					BgL_valuesz00_379 = BgL_valuesz00_870;
					{	/* Module/module.scm 236 */
						obj_t BgL_list1771z00_381;

						BgL_list1771z00_381 = MAKE_PAIR(BNIL, BNIL);
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1942z00zzmodule_modulez00,
							BGl_string1951z00zzmodule_modulez00, BgL_clausez00_869,
							BgL_list1771z00_381);
					}
				}
			}
		}
	}



/* module-initialization-id */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t BgL_idz00_33)
	{
		AN_OBJECT;
		{	/* Module/module.scm 252 */
			return CNST_TABLE_REF(((long) 9));
		}
	}



/* _module-initialization-id */
	obj_t BGl__modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t
		BgL_envz00_871, obj_t BgL_idz00_872)
	{
		AN_OBJECT;
		{	/* Module/module.scm 252 */
			{	/* Module/module.scm 253 */
				obj_t BgL_res1977z00_933;

				BgL_res1977z00_933 = CNST_TABLE_REF(((long) 9));
				return BgL_res1977z00_933;
			}
		}
	}



/* do-consume-module */
	obj_t BGl_dozd2consumezd2modulez00zzmodule_modulez00(obj_t BgL_pnamez00_34,
		obj_t BgL_mclausez00_35, obj_t BgL_namez00_36, obj_t BgL_clausesz00_37)
	{
		AN_OBJECT;
		{	/* Module/module.scm 258 */
			{	/* Module/module.scm 260 */
				bool_t BgL_testz00_1253;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_36,
							CNST_TABLE_REF(((long) 3)))))
					{	/* Module/module.scm 260 */
						BgL_testz00_1253 = ((bool_t) 0);
					}
				else
					{	/* Module/module.scm 260 */
						BgL_testz00_1253 = ((bool_t) 1);
					}
				if (BgL_testz00_1253)
					{	/* Module/module.scm 260 */
						if ((BgL_pnamez00_34 == BgL_namez00_36))
							{	/* Module/module.scm 270 */
								obj_t BgL_zc3anonymousza31777ze3z83_873;

								BgL_zc3anonymousza31777ze3z83_873 =
									make_fx_procedure
									(BGl_zc3anonymousza31777ze3z83zzmodule_modulez00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza31777ze3z83_873,
									(int) (((long) 0)), BgL_namez00_36);
								{	/* Module/module.scm 270 */
									obj_t BgL_list1776z00_386;

									BgL_list1776z00_386 = MAKE_PAIR(BgL_clausesz00_37, BNIL);
									return
										BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
										(BgL_zc3anonymousza31777ze3z83_873, BgL_list1776z00_386);
								}
							}
						else
							{	/* Module/module.scm 263 */
								obj_t BgL_arg1779z00_391;

								{	/* Module/module.scm 264 */
									obj_t BgL_arg1785z00_395;

									obj_t BgL_arg1787z00_397;

									{	/* Module/module.scm 265 */
										obj_t BgL_res1923z00_697;

										{	/* Module/module.scm 265 */
											obj_t BgL_arg2063z00_696;

											BgL_arg2063z00_696 = SYMBOL_TO_STRING(BgL_namez00_36);
											BgL_res1923z00_697 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_696);
										}
										BgL_arg1785z00_395 = BgL_res1923z00_697;
									}
									{	/* Module/module.scm 266 */
										obj_t BgL_res1924z00_700;

										{	/* Module/module.scm 266 */
											obj_t BgL_arg2063z00_699;

											BgL_arg2063z00_699 = SYMBOL_TO_STRING(BgL_pnamez00_34);
											BgL_res1924z00_700 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_699);
										}
										BgL_arg1787z00_397 = BgL_res1924z00_700;
									}
									{	/* Module/module.scm 264 */
										obj_t BgL_list1788z00_398;

										{	/* Module/module.scm 264 */
											obj_t BgL_arg1789z00_399;

											{	/* Module/module.scm 264 */
												obj_t BgL_arg1790z00_400;

												{	/* Module/module.scm 264 */
													obj_t BgL_arg1791z00_401;

													BgL_arg1791z00_401 =
														MAKE_PAIR(BgL_arg1787z00_397, BNIL);
													BgL_arg1790z00_400 =
														MAKE_PAIR(BGl_string1952z00zzmodule_modulez00,
														BgL_arg1791z00_401);
												}
												BgL_arg1789z00_399 =
													MAKE_PAIR(BgL_arg1785z00_395, BgL_arg1790z00_400);
											}
											BgL_list1788z00_398 =
												MAKE_PAIR(BGl_string1953z00zzmodule_modulez00,
												BgL_arg1789z00_399);
										}
										BgL_arg1779z00_391 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1788z00_398);
									}
								}
								{	/* Module/module.scm 263 */
									obj_t BgL_list1783z00_393;

									BgL_list1783z00_393 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string1954z00zzmodule_modulez00, BgL_arg1779z00_391,
										BgL_mclausez00_35, BgL_list1783z00_393);
								}
							}
					}
				else
					{	/* Module/module.scm 261 */
						obj_t BgL_list1792z00_402;

						BgL_list1792z00_402 = MAKE_PAIR(BNIL, BNIL);
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1942z00zzmodule_modulez00,
							BGl_string1949z00zzmodule_modulez00, BgL_mclausez00_35,
							BgL_list1792z00_402);
					}
			}
		}
	}



/* <anonymous:1777> */
	obj_t BGl_zc3anonymousza31777ze3z83zzmodule_modulez00(obj_t BgL_envz00_874,
		obj_t BgL_cz00_876)
	{
		AN_OBJECT;
		{	/* Module/module.scm 270 */
			{	/* Module/module.scm 270 */
				obj_t BgL_namez00_875;

				BgL_namez00_875 = PROCEDURE_REF(BgL_envz00_874, (int) (((long) 0)));
				{
					obj_t BgL_cz00_387;

					BgL_cz00_387 = BgL_cz00_876;
					return
						BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00
						(BgL_namez00_875, BgL_cz00_387);
				}
			}
		}
	}



/* consume-module! */
	BGL_EXPORTED_DEF obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t
		BgL_pnamez00_38, obj_t BgL_mclausez00_39)
	{
		AN_OBJECT;
		{	/* Module/module.scm 275 */
			{

				if (PAIRP(BgL_mclausez00_39))
					{	/* Module/module.scm 276 */
						obj_t BgL_cdrzd21497zd2_409;

						BgL_cdrzd21497zd2_409 = CDR(BgL_mclausez00_39);
						if ((CAR(BgL_mclausez00_39) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/module.scm 276 */
								if (PAIRP(BgL_cdrzd21497zd2_409))
									{	/* Module/module.scm 276 */
										obj_t BgL_carzd21500zd2_412;

										BgL_carzd21500zd2_412 = CAR(BgL_cdrzd21497zd2_409);
										if (SYMBOLP(BgL_carzd21500zd2_412))
											{	/* Module/module.scm 276 */
												return
													BGl_dozd2consumezd2modulez00zzmodule_modulez00
													(BgL_pnamez00_38, BgL_mclausez00_39,
													BgL_carzd21500zd2_412, CDR(BgL_cdrzd21497zd2_409));
											}
										else
											{	/* Module/module.scm 276 */
											BgL_tagzd21490zd2_406:
												{	/* Module/module.scm 280 */
													obj_t BgL_list1800z00_417;

													BgL_list1800z00_417 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1942z00zzmodule_modulez00,
														BGl_string1955z00zzmodule_modulez00,
														BgL_mclausez00_39, BgL_list1800z00_417);
												}
											}
									}
								else
									{	/* Module/module.scm 276 */
										goto BgL_tagzd21490zd2_406;
									}
							}
						else
							{	/* Module/module.scm 276 */
								goto BgL_tagzd21490zd2_406;
							}
					}
				else
					{	/* Module/module.scm 276 */
						goto BgL_tagzd21490zd2_406;
					}
			}
		}
	}



/* _consume-module! */
	obj_t BGl__consumezd2modulez12zc0zzmodule_modulez00(obj_t BgL_envz00_877,
		obj_t BgL_pnamez00_878, obj_t BgL_mclausez00_879)
	{
		AN_OBJECT;
		{	/* Module/module.scm 275 */
			return
				BGl_consumezd2modulez12zc0zzmodule_modulez00(BgL_pnamez00_878,
				BgL_mclausez00_879);
		}
	}



/* consume-module-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_modulez00_40, obj_t BgL_clausez00_41)
	{
		AN_OBJECT;
		{	/* Module/module.scm 285 */
			{
				obj_t BgL_cz00_419;

				BgL_cz00_419 = BgL_clausez00_41;
			BgL_zc3anonymousza31801ze3z83_420:
				{

					if (PAIRP(BgL_cz00_419))
						{	/* Module/module.scm 286 */
							if ((CAR(BgL_cz00_419) == CNST_TABLE_REF(((long) 7))))
								{	/* Module/module.scm 286 */
									{	/* Module/module.scm 289 */
										obj_t BgL_ncz00_434;

										BgL_ncz00_434 =
											BGl_prognzd2firstzd2expressionz00zztools_prognz00
											(BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
											(BgL_clausez00_41));
										{	/* Module/module.scm 290 */
											bool_t BgL_testz00_1308;

											if ((BgL_ncz00_434 == BUNSPEC))
												{	/* Module/module.scm 290 */
													BgL_testz00_1308 = ((bool_t) 1);
												}
											else
												{	/* Module/module.scm 290 */
													BgL_testz00_1308 = (BgL_ncz00_434 == BFALSE);
												}
											if (BgL_testz00_1308)
												{	/* Module/module.scm 290 */
													return BNIL;
												}
											else
												{
													obj_t BgL_cz00_1312;

													BgL_cz00_1312 = BgL_ncz00_434;
													BgL_cz00_419 = BgL_cz00_1312;
													goto BgL_zc3anonymousza31801ze3z83_420;
												}
										}
									}
								}
							else
								{	/* Module/module.scm 286 */
									obj_t BgL_carzd21518zd2_429;

									BgL_carzd21518zd2_429 = CAR(BgL_cz00_419);
									if (SYMBOLP(BgL_carzd21518zd2_429))
										{	/* Module/module.scm 286 */
											obj_t BgL_idz00_715;

											BgL_idz00_715 = BgL_carzd21518zd2_429;
											{	/* Module/module.scm 286 */
												obj_t BgL_fun1811z00_717;

												BgL_fun1811z00_717 =
													BGl_findzd2clausezd2consumerz00zzmodule_modulez00
													(BgL_idz00_715, BgL_clausez00_41);
												return
													PROCEDURE_ENTRY(BgL_fun1811z00_717)
													(BgL_fun1811z00_717, BgL_modulez00_40, BgL_cz00_419,
													BEOA);
											}
										}
									else
										{	/* Module/module.scm 286 */
										BgL_tagzd21508zd2_425:
											{	/* Module/module.scm 296 */
												obj_t BgL_list1812z00_439;

												BgL_list1812z00_439 = MAKE_PAIR(BNIL, BNIL);
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1942z00zzmodule_modulez00,
													BGl_string1950z00zzmodule_modulez00, BgL_clausez00_41,
													BgL_list1812z00_439);
											}
										}
								}
						}
					else
						{	/* Module/module.scm 286 */
							goto BgL_tagzd21508zd2_425;
						}
				}
			}
		}
	}



/* _consume-module-clause! */
	obj_t BGl__consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_envz00_880, obj_t BgL_modulez00_881, obj_t BgL_clausez00_882)
	{
		AN_OBJECT;
		{	/* Module/module.scm 285 */
			return
				BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(BgL_modulez00_881,
				BgL_clausez00_882);
		}
	}



/* find-clause-consumer */
	obj_t BGl_findzd2clausezd2consumerz00zzmodule_modulez00(obj_t
		BgL_keywordz00_42, obj_t BgL_clausez00_43)
	{
		AN_OBJECT;
		{	/* Module/module.scm 304 */
			{	/* Module/module.scm 306 */
				obj_t BgL_unknownzd2clausezd2consumerz00_883;

				BgL_unknownzd2clausezd2consumerz00_883 =
					make_fx_procedure
					(BGl_unknownzd2clausezd2consumerz00zzmodule_modulez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_unknownzd2clausezd2consumerz00_883,
					(int) (((long) 0)), BgL_clausez00_43);
				{
					obj_t BgL_ccz00_443;

					BgL_ccz00_443 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_zc3anonymousza31813ze3z83_444:
					if (NULLP(BgL_ccz00_443))
						{	/* Module/module.scm 312 */
							return BgL_unknownzd2clausezd2consumerz00_883;
						}
					else
						{	/* Module/module.scm 314 */
							bool_t BgL_testz00_1329;

							{	/* Module/module.scm 314 */
								obj_t BgL_auxz00_1330;

								{	/* Module/module.scm 314 */
									BgL_ccompz00_bglt BgL_obj1508z00_721;

									{	/* Module/module.scm 314 */
										obj_t BgL_pairz00_720;

										BgL_pairz00_720 = BgL_ccz00_443;
										BgL_obj1508z00_721 =
											(BgL_ccompz00_bglt) (CAR(BgL_pairz00_720));
									}
									BgL_auxz00_1330 =
										(((BgL_ccompz00_bglt) CREF(BgL_obj1508z00_721))->BgL_idz00);
								}
								BgL_testz00_1329 = (BgL_auxz00_1330 == BgL_keywordz00_42);
							}
							if (BgL_testz00_1329)
								{	/* Module/module.scm 315 */
									BgL_ccompz00_bglt BgL_obj1510z00_723;

									{	/* Module/module.scm 315 */
										obj_t BgL_pairz00_722;

										BgL_pairz00_722 = BgL_ccz00_443;
										BgL_obj1510z00_723 =
											(BgL_ccompz00_bglt) (CAR(BgL_pairz00_722));
									}
									return
										(((BgL_ccompz00_bglt) CREF(BgL_obj1510z00_723))->
										BgL_consumerz00);
								}
							else
								{
									obj_t BgL_ccz00_1338;

									BgL_ccz00_1338 = CDR(BgL_ccz00_443);
									BgL_ccz00_443 = BgL_ccz00_1338;
									goto BgL_zc3anonymousza31813ze3z83_444;
								}
						}
				}
			}
		}
	}



/* unknown-clause-consumer */
	obj_t BGl_unknownzd2clausezd2consumerz00zzmodule_modulez00(obj_t
		BgL_envz00_884, obj_t BgL_modulez00_886, obj_t BgL_valuesz00_887)
	{
		AN_OBJECT;
		{	/* Module/module.scm 309 */
			{	/* Module/module.scm 306 */
				obj_t BgL_clausez00_885;

				BgL_clausez00_885 = PROCEDURE_REF(BgL_envz00_884, (int) (((long) 0)));
				{
					obj_t BgL_modulez00_452;

					obj_t BgL_valuesz00_453;

					BgL_modulez00_452 = BgL_modulez00_886;
					BgL_valuesz00_453 = BgL_valuesz00_887;
					{	/* Module/module.scm 306 */
						obj_t BgL_list1821z00_725;

						BgL_list1821z00_725 = MAKE_PAIR(BNIL, BNIL);
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1942z00zzmodule_modulez00,
							BGl_string1951z00zzmodule_modulez00, BgL_clausez00_885,
							BgL_list1821z00_725);
					}
				}
			}
		}
	}



/* checksum-module */
	obj_t BGl_checksumzd2modulezd2zzmodule_modulez00(obj_t BgL_mclausez00_45)
	{
		AN_OBJECT;
		{	/* Module/module.scm 328 */
			{
				obj_t BgL_namez00_458;

				obj_t BgL_clausesz00_459;

				if (PAIRP(BgL_mclausez00_45))
					{	/* Module/module.scm 329 */
						obj_t BgL_cdrzd21536zd2_464;

						BgL_cdrzd21536zd2_464 = CDR(BgL_mclausez00_45);
						if ((CAR(BgL_mclausez00_45) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/module.scm 329 */
								if (PAIRP(BgL_cdrzd21536zd2_464))
									{	/* Module/module.scm 329 */
										obj_t BgL_carzd21539zd2_467;

										BgL_carzd21539zd2_467 = CAR(BgL_cdrzd21536zd2_464);
										if (SYMBOLP(BgL_carzd21539zd2_467))
											{	/* Module/module.scm 329 */
												BgL_namez00_458 = BgL_carzd21539zd2_467;
												BgL_clausesz00_459 = CDR(BgL_cdrzd21536zd2_464);
												{	/* Module/module.scm 332 */
													bool_t BgL_testz00_1356;

													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_namez00_458, CNST_TABLE_REF(((long) 3)))))
														{	/* Module/module.scm 332 */
															BgL_testz00_1356 = ((bool_t) 0);
														}
													else
														{	/* Module/module.scm 332 */
															BgL_testz00_1356 = ((bool_t) 1);
														}
													if (BgL_testz00_1356)
														{	/* Module/module.scm 332 */
															return
																BINT
																(BGl_modulezd2checksumzd2zzmodule_checksumz00
																(BgL_mclausez00_45,
																	BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00));
														}
													else
														{	/* Module/module.scm 333 */
															obj_t BgL_list1831z00_473;

															BgL_list1831z00_473 = MAKE_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1942z00zzmodule_modulez00,
																BGl_string1949z00zzmodule_modulez00,
																BgL_mclausez00_45, BgL_list1831z00_473);
														}
												}
											}
										else
											{	/* Module/module.scm 329 */
											BgL_tagzd21529zd2_461:
												{	/* Module/module.scm 337 */
													obj_t BgL_list1832z00_474;

													BgL_list1832z00_474 = MAKE_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1942z00zzmodule_modulez00,
														BGl_string1955z00zzmodule_modulez00,
														BgL_mclausez00_45, BgL_list1832z00_474);
												}
											}
									}
								else
									{	/* Module/module.scm 329 */
										goto BgL_tagzd21529zd2_461;
									}
							}
						else
							{	/* Module/module.scm 329 */
								goto BgL_tagzd21529zd2_461;
							}
					}
				else
					{	/* Module/module.scm 329 */
						goto BgL_tagzd21529zd2_461;
					}
			}
		}
	}



/* dump-module */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t
		BgL_modulez00_46)
	{
		AN_OBJECT;
		{	/* Module/module.scm 345 */
			{	/* Module/module.scm 346 */
				obj_t BgL_outz00_475;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Module/module.scm 347 */
						BgL_outz00_475 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Module/module.scm 347 */
						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 10))))
							{	/* Module/module.scm 349 */
								BgL_outz00_475 = BFALSE;
							}
						else
							{	/* Module/module.scm 351 */
								bool_t BgL_testz00_1373;

								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* Module/module.scm 351 */
										obj_t BgL_auxz00_1376;

										BgL_auxz00_1376 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_testz00_1373 = STRINGP(BgL_auxz00_1376);
									}
								else
									{	/* Module/module.scm 351 */
										BgL_testz00_1373 = ((bool_t) 0);
									}
								if (BgL_testz00_1373)
									{	/* Module/module.scm 351 */
										BgL_outz00_475 =
											string_append(BGl_prefixz00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
											BGl_string1956z00zzmodule_modulez00);
									}
								else
									{	/* Module/module.scm 351 */
										BgL_outz00_475 = BFALSE;
									}
							}
					}
				{	/* Module/module.scm 346 */
					obj_t BgL_portz00_476;

					if (STRINGP(BgL_outz00_475))
						{	/* Module/module.scm 356 */
							obj_t BgL_g2679z00_487;

							BgL_g2679z00_487 = BgL_outz00_475;
							{	/* Module/module.scm 356 */

								BgL_portz00_476 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_g2679z00_487, BTRUE);
							}
						}
					else
						{	/* Module/module.scm 357 */
							obj_t BgL_res1925z00_743;

							{	/* Module/module.scm 357 */
								obj_t BgL_auxz00_1385;

								BgL_auxz00_1385 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1925z00_743 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1385);
							}
							BgL_portz00_476 = BgL_res1925z00_743;
						}
					{	/* Module/module.scm 355 */

						if (OUTPUT_PORTP(BgL_portz00_476))
							{	/* Module/module.scm 360 */
								obj_t BgL_val1559z00_478;

								BgL_val1559z00_478 =
									BGl_zc3exitza31837ze3z83zzmodule_modulez00(BgL_modulez00_46,
									BgL_portz00_476);
								bgl_close_output_port(BgL_portz00_476);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1559z00_478)))
									{	/* Module/module.scm 364 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1559z00_478), CDR(BgL_val1559z00_478));
									}
								else
									{	/* Module/module.scm 364 */
										return BgL_val1559z00_478;
									}
							}
						else
							{	/* Module/module.scm 358 */
								return
									BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 11)),
									BGl_string1957z00zzmodule_modulez00, BgL_outz00_475);
		}}}}}
	}



/* <exit:1837> */
	obj_t BGl_zc3exitza31837ze3z83zzmodule_modulez00(obj_t BgL_modulez00_922,
		obj_t BgL_portz00_921)
	{
		AN_OBJECT;
		{	/* Module/module.scm 364 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1560z00_483;

			if (SET_EXIT(BgL_an_exit1560z00_483))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1560z00_483 = (void *) jmpbuf;
					{	/* Module/module.scm 364 */

						PUSH_EXIT(BgL_an_exit1560z00_483, ((long) 0));
						{	/* Module/module.scm 362 */
							obj_t BgL_val1561z00_484;

							{	/* Module/module.scm 362 */
								obj_t BgL_list1838z00_485;

								BgL_list1838z00_485 = MAKE_PAIR(BgL_portz00_921, BNIL);
								BGl_writez00zz__r4_output_6_10_3z00(BgL_modulez00_922,
									BgL_list1838z00_485);
							}
							BgL_val1561z00_484 =
								bgl_display_char(((unsigned char) '\n'), BgL_portz00_921);
							POP_EXIT();
							return BgL_val1561z00_484;
						}
					}
				}
		}
	}



/* _dump-module */
	obj_t BGl__dumpzd2modulezd2zzmodule_modulez00(obj_t BgL_envz00_888,
		obj_t BgL_modulez00_889)
	{
		AN_OBJECT;
		{	/* Module/module.scm 345 */
			return BGl_dumpzd2modulezd2zzmodule_modulez00(BgL_modulez00_889);
		}
	}



/* module-checksum-object */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 369 */
			{	/* Module/module.scm 370 */
				obj_t BgL_list1850z00_497;

				{	/* Module/module.scm 370 */
					obj_t BgL_arg1852z00_499;

					{	/* Module/module.scm 370 */
						obj_t BgL_arg1854z00_501;

						BgL_arg1854z00_501 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg1852z00_499 =
							MAKE_PAIR(BGl_string1958z00zzmodule_modulez00,
							BgL_arg1854z00_501);
					}
					BgL_list1850z00_497 =
						MAKE_PAIR(BGl_string1940z00zzmodule_modulez00, BgL_arg1852z00_499);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1850z00_497);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1958z00zzmodule_modulez00;
			{
				obj_t BgL_hooksz00_505;

				obj_t BgL_hnamesz00_506;

				BgL_hooksz00_505 = BNIL;
				BgL_hnamesz00_506 = BNIL;
			BgL_zc3anonymousza31855ze3z83_507:
				if (NULLP(BgL_hooksz00_505))
					{	/* Module/module.scm 370 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Module/module.scm 370 */
						bool_t BgL_testz00_1418;

						{	/* Module/module.scm 370 */
							obj_t BgL_fun1864z00_515;

							BgL_fun1864z00_515 = CAR(BgL_hooksz00_505);
							BgL_testz00_1418 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun1864z00_515) (BgL_fun1864z00_515,
									BEOA));
						}
						if (BgL_testz00_1418)
							{
								obj_t BgL_hnamesz00_1425;

								obj_t BgL_hooksz00_1423;

								BgL_hooksz00_1423 = CDR(BgL_hooksz00_505);
								BgL_hnamesz00_1425 = CDR(BgL_hnamesz00_506);
								BgL_hnamesz00_506 = BgL_hnamesz00_1425;
								BgL_hooksz00_505 = BgL_hooksz00_1423;
								goto BgL_zc3anonymousza31855ze3z83_507;
							}
						else
							{	/* Module/module.scm 370 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string1958z00zzmodule_modulez00,
									BGl_string1941z00zzmodule_modulez00, CAR(BgL_hnamesz00_506));
							}
					}
			}
			{	/* Module/module.scm 371 */
				obj_t BgL_checksumz00_518;

				obj_t BgL_destz00_519;

				BgL_checksumz00_518 = BGl_za2modulezd2checksumza2zd2zzmodule_modulez00;
				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Module/module.scm 372 */
						if (
							(BGl_za2passza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 12))))
							{	/* Module/module.scm 377 */
								BgL_destz00_519 = BGl_za2destza2z00zzengine_paramz00;
							}
						else
							{	/* Module/module.scm 377 */
								BgL_destz00_519 =
									string_append(BGl_prefixz00zz__osz00
									(BGl_za2destza2z00zzengine_paramz00),
									BGl_string1959z00zzmodule_modulez00);
							}
					}
				else
					{	/* Module/module.scm 373 */
						bool_t BgL_testz00_1436;

						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* Module/module.scm 374 */
								obj_t BgL_auxz00_1439;

								BgL_auxz00_1439 =
									CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								BgL_testz00_1436 = STRINGP(BgL_auxz00_1439);
							}
						else
							{	/* Module/module.scm 373 */
								BgL_testz00_1436 = ((bool_t) 0);
							}
						if (BgL_testz00_1436)
							{	/* Module/module.scm 373 */
								BgL_destz00_519 =
									string_append(BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
									BGl_string1959z00zzmodule_modulez00);
							}
						else
							{	/* Module/module.scm 373 */
								BgL_destz00_519 = BFALSE;
							}
					}
				{

					{	/* Module/module.scm 392 */
						bool_t BgL_testz00_1445;

						if (STRINGP(BgL_destz00_519))
							{	/* Module/module.scm 392 */
								BgL_testz00_1445 = fexists(BSTRING_TO_STRING(BgL_destz00_519));
							}
						else
							{	/* Module/module.scm 392 */
								BgL_testz00_1445 = ((bool_t) 0);
							}
						if (BgL_testz00_1445)
							{	/* Module/module.scm 395 */
								obj_t BgL_iportz00_522;

								{	/* Module/module.scm 395 */
									obj_t BgL_g2673z00_529;

									BgL_g2673z00_529 = BgL_destz00_519;
									{	/* Module/module.scm 395 */

										BgL_iportz00_522 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_g2673z00_529, BTRUE);
									}
								}
								if (INPUT_PORTP(BgL_iportz00_522))
									{	/* Module/module.scm 400 */
										obj_t BgL_csz00_524;

										{	/* Module/module.scm 400 */

											{	/* Module/module.scm 400 */
												obj_t BgL_iportz00_526;

												BgL_iportz00_526 = BgL_iportz00_522;
												{	/* Module/module.scm 400 */

													BgL_csz00_524 =
														BGl_readz00zz__readerz00(BgL_iportz00_526, BFALSE);
												}
											}
										}
										bgl_close_input_port(BgL_iportz00_522);
										if (
											((long) CINT(BgL_csz00_524) ==
												(long) CINT(BgL_checksumz00_518)))
											{	/* Module/module.scm 402 */
												BFALSE;
											}
										else
											{	/* Module/module.scm 402 */
												{	/* Module/module.scm 404 */
													char *BgL_stringz00_767;

													BgL_stringz00_767 =
														BSTRING_TO_STRING(BgL_destz00_519);
													if (unlink(BgL_stringz00_767))
														{	/* Module/module.scm 404 */
															((bool_t) 0);
														}
													else
														{	/* Module/module.scm 404 */
															((bool_t) 1);
														}
												}
											BgL_zc3anonymousza31871ze3z83_532:
												if (STRINGP(BgL_destz00_519))
													{	/* Module/module.scm 382 */
														obj_t BgL_oportz00_534;

														{	/* Module/module.scm 382 */
															obj_t BgL_g2679z00_537;

															BgL_g2679z00_537 = BgL_destz00_519;
															{	/* Module/module.scm 382 */

																BgL_oportz00_534 =
																	BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
																	(BgL_g2679z00_537, BTRUE);
															}
														}
														if (OUTPUT_PORTP(BgL_oportz00_534))
															{	/* Module/module.scm 383 */
																{	/* Module/module.scm 385 */
																	obj_t BgL_port1572z00_536;

																	BgL_port1572z00_536 = BgL_oportz00_534;
																	bgl_display_obj(BgL_checksumz00_518,
																		BgL_port1572z00_536);
																	bgl_display_char(((unsigned char) '\n'),
																		BgL_port1572z00_536);
																}
																bgl_close_output_port(BgL_oportz00_534);
															}
														else
															{	/* Module/module.scm 383 */
																BGl_errorz00zz__errorz00
																	(BGl_string1960z00zzmodule_modulez00,
																	BGl_string1961z00zzmodule_modulez00,
																	BgL_destz00_519);
															}
													}
												else
													{	/* Module/module.scm 390 */
														obj_t BgL_port1573z00_539;

														{	/* Module/module.scm 390 */
															obj_t BgL_res1927z00_774;

															{	/* Module/module.scm 390 */
																obj_t BgL_auxz00_1471;

																BgL_auxz00_1471 = BGL_CURRENT_DYNAMIC_ENV();
																BgL_res1927z00_774 =
																	BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1471);
															}
															BgL_port1573z00_539 = BgL_res1927z00_774;
														}
														bgl_display_obj(BgL_checksumz00_518,
															BgL_port1573z00_539);
														bgl_display_char(((unsigned char) '\n'),
															BgL_port1573z00_539);
									}}}
								else
									{	/* Module/module.scm 396 */
										BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1960z00zzmodule_modulez00,
											BGl_string1962z00zzmodule_modulez00, BgL_destz00_519,
											BNIL);
									}
							}
						else
							{	/* Module/module.scm 392 */
								goto BgL_zc3anonymousza31871ze3z83_532;
							}
					}
				}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Module/module.scm 408 */
					{	/* Module/module.scm 408 */
						obj_t BgL_port1574z00_553;

						{	/* Module/module.scm 408 */
							obj_t BgL_res1928z00_779;

							{	/* Module/module.scm 408 */
								obj_t BgL_auxz00_1480;

								BgL_auxz00_1480 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1928z00_779 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1480);
							}
							BgL_port1574z00_553 = BgL_res1928z00_779;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1574z00_553);
						bgl_display_string(BGl_string1944z00zzmodule_modulez00,
							BgL_port1574z00_553);
						{	/* Module/module.scm 408 */
							obj_t BgL_arg1886z00_554;

							{	/* Module/module.scm 408 */
								bool_t BgL_testz00_1485;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Module/module.scm 408 */
										BgL_testz00_1485 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Module/module.scm 408 */
										BgL_testz00_1485 = ((bool_t) 0);
									}
								if (BgL_testz00_1485)
									{	/* Module/module.scm 408 */
										BgL_arg1886z00_554 = BGl_string1945z00zzmodule_modulez00;
									}
								else
									{	/* Module/module.scm 408 */
										BgL_arg1886z00_554 = BGl_string1946z00zzmodule_modulez00;
									}
							}
							bgl_display_obj(BgL_arg1886z00_554, BgL_port1574z00_553);
						}
						bgl_display_string(BGl_string1947z00zzmodule_modulez00,
							BgL_port1574z00_553);
						bgl_display_char(((unsigned char) '\n'), BgL_port1574z00_553);
					}
					{	/* Module/module.scm 408 */
						obj_t BgL_list1889z00_557;

						BgL_list1889z00_557 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1889z00_557);
					}
				}
			else
				{
					obj_t BgL_hooksz00_561;

					obj_t BgL_hnamesz00_562;

					BgL_hooksz00_561 = BNIL;
					BgL_hnamesz00_562 = BNIL;
				BgL_zc3anonymousza31890ze3z83_563:
					if (NULLP(BgL_hooksz00_561))
						{	/* Module/module.scm 408 */
							return BTRUE;
						}
					else
						{	/* Module/module.scm 408 */
							bool_t BgL_testz00_1498;

							{	/* Module/module.scm 408 */
								obj_t BgL_fun1897z00_570;

								BgL_fun1897z00_570 = CAR(BgL_hooksz00_561);
								BgL_testz00_1498 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1897z00_570) (BgL_fun1897z00_570,
										BEOA));
							}
							if (BgL_testz00_1498)
								{
									obj_t BgL_hnamesz00_1505;

									obj_t BgL_hooksz00_1503;

									BgL_hooksz00_1503 = CDR(BgL_hooksz00_561);
									BgL_hnamesz00_1505 = CDR(BgL_hnamesz00_562);
									BgL_hnamesz00_562 = BgL_hnamesz00_1505;
									BgL_hooksz00_561 = BgL_hooksz00_1503;
									goto BgL_zc3anonymousza31890ze3z83_563;
								}
							else
								{	/* Module/module.scm 408 */
									obj_t BgL_arg1896z00_569;

									BgL_arg1896z00_569 = CAR(BgL_hnamesz00_562);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string1948z00zzmodule_modulez00, BgL_arg1896z00_569);
								}
						}
				}
		}
	}



/* _module-checksum-object */
	obj_t BGl__modulezd2checksumzd2objectz00zzmodule_modulez00(obj_t
		BgL_envz00_890)
	{
		AN_OBJECT;
		{	/* Module/module.scm 369 */
			return BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			{	/* Module/module.scm 44 */
				obj_t BgL_arg1899z00_573;

				obj_t BgL_arg1900z00_574;

				obj_t BgL_arg1903z00_577;

				BgL_arg1899z00_573 = CNST_TABLE_REF(((long) 13));
				BgL_arg1900z00_574 = BGl_objectz00zz__objectz00;
				{	/* Module/module.scm 44 */
					obj_t BgL_v1575z00_578;

					BgL_v1575z00_578 = create_vector((int) (((long) 0)));
					BgL_arg1903z00_577 = BgL_v1575z00_578;
				}
				BGl_ccompz00zzmodule_modulez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg1899z00_573,
					BgL_arg1900z00_574, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2ccompzd2envz52zzmodule_modulez00,
					BGl_ccompzd2nilzd2envz00zzmodule_modulez00,
					BGl_ccompzf3zd2envz21zzmodule_modulez00, ((long) 37381145), BFALSE,
					BFALSE, BgL_arg1903z00_577);
			}
			return (BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00 = BUNSPEC, BUNSPEC);
		}
	}



/* ccomp? */
	BGL_EXPORTED_DEF bool_t BGl_ccompzf3zf3zzmodule_modulez00(obj_t
		BgL_obj1547z00_47)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1547z00_47,
				BGl_ccompz00zzmodule_modulez00);
		}
	}



/* _ccomp? */
	obj_t BGl__ccompzf3zf3zzmodule_modulez00(obj_t BgL_envz00_893,
		obj_t BgL_obj1547z00_894)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1547z00_894,
					BGl_ccompz00zzmodule_modulez00));
		}
	}



/* make-ccomp */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t
		BgL_id1512z00_51, obj_t BgL_producer1513z00_52,
		obj_t BgL_consumer1514z00_53, obj_t BgL_finaliza7er1515za7_54)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{	/* Module/module.scm 44 */
				BgL_ccompz00_bglt BgL_new1516z00_792;

				{	/* Module/module.scm 44 */
					BgL_ccompz00_bglt BgL_res1930z00_797;

					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_new1528z00_793;

						BgL_new1528z00_793 =
							((BgL_ccompz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ccompz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1528z00_793),
							BGl_classzd2numzd2zz__objectz00(BGl_ccompz00zzmodule_modulez00));
						{	/* Module/module.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_1521;

							BgL_auxz00_1521 = (BgL_objectz00_bglt) (BgL_new1528z00_793);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1521, BFALSE);
						}
						BgL_res1930z00_797 = BgL_new1528z00_793;
					}
					BgL_new1516z00_792 = BgL_res1930z00_797;
				}
				{	/* Module/module.scm 44 */
					BgL_ccompz00_bglt BgL_res1931z00_807;

					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_new1522z00_798;

						BgL_new1522z00_798 = BgL_new1516z00_792;
						{	/* Module/module.scm 44 */
							obj_t BgL_id1518z00_803;

							obj_t BgL_producer1519z00_804;

							obj_t BgL_consumer1520z00_805;

							obj_t BgL_finaliza7er1521za7_806;

							BgL_id1518z00_803 = BgL_id1512z00_51;
							BgL_producer1519z00_804 = BgL_producer1513z00_52;
							BgL_consumer1520z00_805 = BgL_consumer1514z00_53;
							BgL_finaliza7er1521za7_806 = BgL_finaliza7er1515za7_54;
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_798))->BgL_idz00) =
								((obj_t) BgL_id1518z00_803), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_798))->
									BgL_producerz00) =
								((obj_t) BgL_producer1519z00_804), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_798))->
									BgL_consumerz00) =
								((obj_t) BgL_consumer1520z00_805), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_798))->
									BgL_finaliza7erza7) =
								((obj_t) BgL_finaliza7er1521za7_806), BUNSPEC);
							BgL_res1931z00_807 = BgL_new1522z00_798;
					}} BgL_res1931z00_807;
				}
				return BgL_new1516z00_792;
			}
		}
	}



/* _make-ccomp */
	obj_t BGl__makezd2ccompzd2zzmodule_modulez00(obj_t BgL_envz00_895,
		obj_t BgL_id1512z00_896, obj_t BgL_producer1513z00_897,
		obj_t BgL_consumer1514z00_898, obj_t BgL_finaliza7er1515za7_899)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			return
				(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_id1512z00_896,
					BgL_producer1513z00_897, BgL_consumer1514z00_898,
					BgL_finaliza7er1515za7_899));
		}
	}



/* fill-ccomp! */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt
		BGl_fillzd2ccompz12zc0zzmodule_modulez00(BgL_ccompz00_bglt
		BgL_new1522z00_55, obj_t BgL_id1518z00_56, obj_t BgL_producer1519z00_57,
		obj_t BgL_consumer1520z00_58, obj_t BgL_finaliza7er1521za7_59)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{	/* Module/module.scm 44 */
				obj_t BgL_id1518z00_935;

				obj_t BgL_producer1519z00_936;

				obj_t BgL_consumer1520z00_937;

				obj_t BgL_finaliza7er1521za7_938;

				BgL_id1518z00_935 = BgL_id1518z00_56;
				BgL_producer1519z00_936 = BgL_producer1519z00_57;
				BgL_consumer1520z00_937 = BgL_consumer1520z00_58;
				BgL_finaliza7er1521za7_938 = BgL_finaliza7er1521za7_59;
				((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_55))->BgL_idz00) =
					((obj_t) BgL_id1518z00_935), BUNSPEC);
				((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_55))->BgL_producerz00) =
					((obj_t) BgL_producer1519z00_936), BUNSPEC);
				((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_55))->BgL_consumerz00) =
					((obj_t) BgL_consumer1520z00_937), BUNSPEC);
				((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_55))->BgL_finaliza7erza7) =
					((obj_t) BgL_finaliza7er1521za7_938), BUNSPEC);
				return BgL_new1522z00_55;
			}
		}
	}



/* _fill-ccomp! */
	obj_t BGl__fillzd2ccompz12zc0zzmodule_modulez00(obj_t BgL_envz00_900,
		obj_t BgL_new1522z00_901, obj_t BgL_id1518z00_902,
		obj_t BgL_producer1519z00_903, obj_t BgL_consumer1520z00_904,
		obj_t BgL_finaliza7er1521za7_905)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{	/* Module/module.scm 44 */
				BgL_ccompz00_bglt BgL_auxz00_1534;

				{	/* Module/module.scm 44 */
					BgL_ccompz00_bglt BgL_res1978z00_948;

					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_new1522z00_939;

						obj_t BgL_id1518z00_940;

						obj_t BgL_producer1519z00_941;

						obj_t BgL_consumer1520z00_942;

						obj_t BgL_finaliza7er1521za7_943;

						BgL_new1522z00_939 = (BgL_ccompz00_bglt) (BgL_new1522z00_901);
						BgL_id1518z00_940 = BgL_id1518z00_902;
						BgL_producer1519z00_941 = BgL_producer1519z00_903;
						BgL_consumer1520z00_942 = BgL_consumer1520z00_904;
						BgL_finaliza7er1521za7_943 = BgL_finaliza7er1521za7_905;
						{	/* Module/module.scm 44 */
							obj_t BgL_id1518z00_944;

							obj_t BgL_producer1519z00_945;

							obj_t BgL_consumer1520z00_946;

							obj_t BgL_finaliza7er1521za7_947;

							BgL_id1518z00_944 = BgL_id1518z00_940;
							BgL_producer1519z00_945 = BgL_producer1519z00_941;
							BgL_consumer1520z00_946 = BgL_consumer1520z00_942;
							BgL_finaliza7er1521za7_947 = BgL_finaliza7er1521za7_943;
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_939))->BgL_idz00) =
								((obj_t) BgL_id1518z00_944), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_939))->
									BgL_producerz00) =
								((obj_t) BgL_producer1519z00_945), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_939))->
									BgL_consumerz00) =
								((obj_t) BgL_consumer1520z00_946), BUNSPEC);
							((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_939))->
									BgL_finaliza7erza7) =
								((obj_t) BgL_finaliza7er1521za7_947), BUNSPEC);
							BgL_res1978z00_948 = BgL_new1522z00_939;
						}
					}
					BgL_auxz00_1534 = BgL_res1978z00_948;
				}
				return (obj_t) (BgL_auxz00_1534);
			}
		}
	}



/* %allocate-ccomp */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt
		BGl_z52allocatezd2ccompz80zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{	/* Module/module.scm 44 */
				BgL_ccompz00_bglt BgL_new1528z00_949;

				BgL_new1528z00_949 =
					((BgL_ccompz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_ccompz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1528z00_949),
					BGl_classzd2numzd2zz__objectz00(BGl_ccompz00zzmodule_modulez00));
				{	/* Module/module.scm 44 */
					BgL_objectz00_bglt BgL_auxz00_1545;

					BgL_auxz00_1545 = (BgL_objectz00_bglt) (BgL_new1528z00_949);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_1545, BFALSE);
				}
				return BgL_new1528z00_949;
			}
		}
	}



/* _%allocate-ccomp */
	obj_t BGl__z52allocatezd2ccompz80zzmodule_modulez00(obj_t BgL_envz00_891)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{	/* Module/module.scm 44 */
				BgL_ccompz00_bglt BgL_auxz00_1548;

				{	/* Module/module.scm 44 */
					BgL_ccompz00_bglt BgL_res1979z00_953;

					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_new1528z00_951;

						BgL_new1528z00_951 =
							((BgL_ccompz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ccompz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1528z00_951),
							BGl_classzd2numzd2zz__objectz00(BGl_ccompz00zzmodule_modulez00));
						{	/* Module/module.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_1553;

							BgL_auxz00_1553 = (BgL_objectz00_bglt) (BgL_new1528z00_951);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1553, BFALSE);
						}
						BgL_res1979z00_953 = BgL_new1528z00_951;
					}
					BgL_auxz00_1548 = BgL_res1979z00_953;
				}
				return (obj_t) (BgL_auxz00_1548);
			}
		}
	}



/* ccomp-nil */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt BGl_ccompzd2nilzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			if ((BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00 == BUNSPEC))
				{	/* Module/module.scm 44 */
					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_res1932z00_820;

						{	/* Module/module.scm 44 */
							BgL_ccompz00_bglt BgL_new1528z00_816;

							BgL_new1528z00_816 =
								((BgL_ccompz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_ccompz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1528z00_816),
								BGl_classzd2numzd2zz__objectz00
								(BGl_ccompz00zzmodule_modulez00));
							{	/* Module/module.scm 44 */
								BgL_objectz00_bglt BgL_auxz00_1563;

								BgL_auxz00_1563 = (BgL_objectz00_bglt) (BgL_new1528z00_816);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1563, BFALSE);
							}
							BgL_res1932z00_820 = BgL_new1528z00_816;
						}
						BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00 =
							(obj_t) (BgL_res1932z00_820);
					}
					{	/* Module/module.scm 44 */
						BgL_ccompz00_bglt BgL_res1933z00_827;

						{	/* Module/module.scm 44 */
							BgL_ccompz00_bglt BgL_new1522z00_821;

							obj_t BgL_id1518z00_822;

							BgL_new1522z00_821 =
								(BgL_ccompz00_bglt)
								(BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00);
							BgL_id1518z00_822 = CNST_TABLE_REF(((long) 14));
							{	/* Module/module.scm 44 */
								obj_t BgL_id1518z00_823;

								obj_t BgL_producer1519z00_824;

								obj_t BgL_consumer1520z00_825;

								obj_t BgL_finaliza7er1521za7_826;

								BgL_id1518z00_823 = BgL_id1518z00_822;
								BgL_producer1519z00_824 =
									BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
								BgL_consumer1520z00_825 =
									BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
								BgL_finaliza7er1521za7_826 =
									BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
								((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_821))->BgL_idz00) =
									((obj_t) BgL_id1518z00_823), BUNSPEC);
								((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_821))->
										BgL_producerz00) =
									((obj_t) BgL_producer1519z00_824), BUNSPEC);
								((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_821))->
										BgL_consumerz00) =
									((obj_t) BgL_consumer1520z00_825), BUNSPEC);
								((((BgL_ccompz00_bglt) CREF(BgL_new1522z00_821))->
										BgL_finaliza7erza7) =
									((obj_t) BgL_finaliza7er1521za7_826), BUNSPEC);
								BgL_res1933z00_827 = BgL_new1522z00_821;
						}}
						(obj_t) (BgL_res1933z00_827);
				}}
			else
				{	/* Module/module.scm 44 */
					BFALSE;
				}
			return
				(BgL_ccompz00_bglt) (BGl_z52thezd2ccompzd2nilz52zzmodule_modulez00);
		}
	}



/* _ccomp-nil */
	obj_t BGl__ccompzd2nilzd2zzmodule_modulez00(obj_t BgL_envz00_892)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			return (obj_t) (BGl_ccompzd2nilzd2zzmodule_modulez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_ccompz00zzmodule_modulez00, BGl_proc1963z00zzmodule_modulez00,
				BGl_string1964z00zzmodule_modulez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_ccompz00zzmodule_modulez00, BGl_proc1965z00zzmodule_modulez00,
				BGl_string1966z00zzmodule_modulez00);
		}
	}



/* struct+object->objec1579 */
	obj_t BGl_structzb2objectzd2ze3objec1579z83zzmodule_modulez00(obj_t
		BgL_envz00_911, obj_t BgL_oz00_912, obj_t BgL_sz00_913)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{
				BgL_ccompz00_bglt BgL_oz00_601;

				obj_t BgL_sz00_602;

				{	/* Module/module.scm 44 */
					BgL_ccompz00_bglt BgL_auxz00_1579;

					BgL_oz00_601 = (BgL_ccompz00_bglt) (BgL_oz00_912);
					BgL_sz00_602 = BgL_sz00_913;
					{	/* Module/module.scm 44 */
						obj_t BgL_arg1916z00_605;

						BgL_arg1916z00_605 = STRUCT_REF(BgL_sz00_602, (int) (((long) 0)));
						{	/* Module/module.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_1582;

							BgL_auxz00_1582 = (BgL_objectz00_bglt) (BgL_oz00_601);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1582, BgL_arg1916z00_605);
					}}
					{
						obj_t BgL_auxz00_1585;

						BgL_auxz00_1585 = STRUCT_REF(BgL_sz00_602, (int) (((long) 1)));
						((((BgL_ccompz00_bglt) CREF(BgL_oz00_601))->BgL_idz00) =
							((obj_t) BgL_auxz00_1585), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1589;

						BgL_auxz00_1589 = STRUCT_REF(BgL_sz00_602, (int) (((long) 2)));
						((((BgL_ccompz00_bglt) CREF(BgL_oz00_601))->BgL_producerz00) =
							((obj_t) BgL_auxz00_1589), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1593;

						BgL_auxz00_1593 = STRUCT_REF(BgL_sz00_602, (int) (((long) 3)));
						((((BgL_ccompz00_bglt) CREF(BgL_oz00_601))->BgL_consumerz00) =
							((obj_t) BgL_auxz00_1593), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1597;

						BgL_auxz00_1597 = STRUCT_REF(BgL_sz00_602, (int) (((long) 4)));
						((((BgL_ccompz00_bglt) CREF(BgL_oz00_601))->BgL_finaliza7erza7) =
							((obj_t) BgL_auxz00_1597), BUNSPEC);
					}
					BgL_auxz00_1579 = BgL_oz00_601;
					return (obj_t) (BgL_auxz00_1579);
				}
			}
		}
	}



/* object->struct-ccomp1577 */
	obj_t BGl_objectzd2ze3structzd2ccomp1577ze3zzmodule_modulez00(obj_t
		BgL_envz00_914, obj_t BgL_obj1529z00_915)
	{
		AN_OBJECT;
		{	/* Module/module.scm 44 */
			{
				BgL_ccompz00_bglt BgL_obj1529z00_587;

				BgL_obj1529z00_587 = (BgL_ccompz00_bglt) (BgL_obj1529z00_915);
				{	/* Module/module.scm 44 */
					obj_t BgL_res1530z00_590;

					{	/* Module/module.scm 44 */
						obj_t BgL_keyz00_828;

						BgL_keyz00_828 = CNST_TABLE_REF(((long) 13));
						BgL_res1530z00_590 =
							make_struct(BgL_keyz00_828, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Module/module.scm 44 */
						int BgL_auxz00_1606;

						BgL_auxz00_1606 = (int) (((long) 0));
						STRUCT_SET(BgL_res1530z00_590, BgL_auxz00_1606, BFALSE);
					}
					{	/* Module/module.scm 44 */
						obj_t BgL_arg1907z00_592;

						BgL_arg1907z00_592 =
							(((BgL_ccompz00_bglt) CREF(BgL_obj1529z00_587))->BgL_idz00);
						{	/* Module/module.scm 44 */
							int BgL_auxz00_1610;

							BgL_auxz00_1610 = (int) (((long) 1));
							STRUCT_SET(BgL_res1530z00_590, BgL_auxz00_1610,
								BgL_arg1907z00_592);
					}}
					{	/* Module/module.scm 44 */
						obj_t BgL_arg1909z00_594;

						BgL_arg1909z00_594 =
							(((BgL_ccompz00_bglt) CREF(BgL_obj1529z00_587))->BgL_producerz00);
						{	/* Module/module.scm 44 */
							int BgL_auxz00_1614;

							BgL_auxz00_1614 = (int) (((long) 2));
							STRUCT_SET(BgL_res1530z00_590, BgL_auxz00_1614,
								BgL_arg1909z00_594);
					}}
					{	/* Module/module.scm 44 */
						obj_t BgL_arg1911z00_596;

						BgL_arg1911z00_596 =
							(((BgL_ccompz00_bglt) CREF(BgL_obj1529z00_587))->BgL_consumerz00);
						{	/* Module/module.scm 44 */
							int BgL_auxz00_1618;

							BgL_auxz00_1618 = (int) (((long) 3));
							STRUCT_SET(BgL_res1530z00_590, BgL_auxz00_1618,
								BgL_arg1911z00_596);
					}}
					{	/* Module/module.scm 44 */
						obj_t BgL_arg1914z00_598;

						BgL_arg1914z00_598 =
							(((BgL_ccompz00_bglt) CREF(BgL_obj1529z00_587))->
							BgL_finaliza7erza7);
						{	/* Module/module.scm 44 */
							int BgL_auxz00_1622;

							BgL_auxz00_1622 = (int) (((long) 4));
							STRUCT_SET(BgL_res1530z00_590, BgL_auxz00_1622,
								BgL_arg1914z00_598);
					}}
					return BgL_res1530z00_590;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_modulez00()
	{
		AN_OBJECT;
		{	/* Module/module.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 307873065),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_mainz00(((long) 282254508),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_statexpz00(((long) 122883188),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_withz00(((long) 280664077),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 450116231),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 117332816),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 198447312),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 168261208),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_loadz00(((long) 522153548),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 284127067),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 27432102),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_optionz00(((long) 324841364),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 69061048),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzread_includez00(((long) 273692333),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
			return
				BGl_modulezd2initializa7ationz75zzread_inlinez00(((long) 155491372),
				BSTRING_TO_STRING(BGl_string1967z00zzmodule_modulez00));
		}
	}

#ifdef __cplusplus
}
#endif
