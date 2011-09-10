/*===========================================================================*/
/*   (BackEnd/backend.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/backend.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	static obj_t BGl__thezd2backendzd2zzbackend_backendz00(obj_t);
	static obj_t
		BGl__backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl__backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__backendzd2linkzd2objectsz00zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__z52allocatezd2backendz80zzbackend_backendz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__backendzd2checkzd2inlinesz00zzbackend_backendz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_backendz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_backendz00_bglt
		BGl_backendzd2nilzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL BgL_backendz00_bglt
		BGl_fillzd2backendz12zc0zzbackend_backendz00(BgL_backendz00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl__backendzd2compilezd2zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl__setzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl__backendzd2instrzd2resetzd21675zd2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_backendzd2compilezd2func1664z00zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl__backendzd2compilezd2defa1662z00zzbackend_backendz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	static obj_t BGl_z52thezd2backendzd2nilz52zzbackend_backendz00 = BUNSPEC;
	static obj_t BGl__backendzd2initializa7ez12z67zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_backendz00();
	static obj_t
		BGl_backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl__backendzd2linkzd2objects1673z00zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2thezd2backendza2zd2zzbackend_backendz00 = BUNSPEC;
	static obj_t BGl__backendzd2nilzd2zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_backendz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_backendz00();
	static obj_t BGl_za2backendsza2z00zzbackend_backendz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl__backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_backendzd2instrzd2resetzd21675zd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t
		BGl_backendzd2compilezd2defa1662z00zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl__registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__backendzd2subtypezf3z21zzbackend_backendz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_backendzf3zf3zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_backendz00zzbackend_backendz00 = BUNSPEC;
	static obj_t BGl__backendzd2linkzd2default1666z00zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00
		(BgL_backendz00_bglt, int);
	static obj_t BGl__backendzd2compilezd2functionsz00zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_backendzd2linkzd2objects1673z00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl__backendzd2linkzd2zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t
		BGl__backendzd2initializa7ez12zd21660zb5zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL BgL_backendz00_bglt
		BGl_z52allocatezd2backendz80zzbackend_backendz00();
	static obj_t BGl_objectzd2initzd2zzbackend_backendz00();
	static obj_t BGl__backendzd2checkzd2inline1677z00zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl__backendzd2compilezd2func1664z00zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt, obj_t);
	static obj_t BGl__backendzf3zf3zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31693ze3z83zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31694ze3z83zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_backendz00();
	static obj_t
		BGl_backendzd2linkzd2default1666z00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_backendz00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
		BgL_bgl__backendza7d2subty1741za7,
		BGl__backendzd2subtypezf3z21zzbackend_backendz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2cnstza71742z00,
		BGl__backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2compi1743za7,
		BGl__backendzd2compilezd2functionsz00zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzf3zd2envz21zzbackend_backendz00,
		BgL_bgl__backendza7f3za7f3za7za71744z00,
		BGl__backendzf3zf3zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2cnstzd2tablezd2n1671zd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2cnstza71745z00,
		BGl__backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2linkza71746z00,
		BGl__backendzd2linkzd2objectsz00zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2backendzd2envz52zzbackend_backendz00,
		BgL_bgl__za752allocateza7d2b1747z00,
		BGl__z52allocatezd2backendz80zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2backendz12zd2envz12zzbackend_backendz00,
		BgL_bgl__fillza7d2backendza71748z00,
		BGl__fillzd2backendz12zc0zzbackend_backendz00, 0L, BUNSPEC, 29);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2initializa7ez12zd21660zd2envz67zzbackend_backendz00,
		BgL_bgl__backendza7d2initi1749za7,
		BGl__backendzd2initializa7ez12zd21660zb5zzbackend_backendz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2linkzd2objects1673zd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2linkza71750z00,
		BGl__backendzd2linkzd2objects1673z00zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2compi1751za7,
		BGl__backendzd2compilezd2zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2linkzd2default1666zd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2linkza71752z00,
		BGl__backendzd2linkzd2default1666z00zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1720z00zzbackend_backendz00,
		BgL_bgl_za7c3anonymousza7a311753z00,
		BGl_zc3anonymousza31694ze3z83zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1719z00zzbackend_backendz00,
		BgL_bgl_za7c3anonymousza7a311754z00,
		BGl_zc3anonymousza31693ze3z83zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2backendz12zd2envz12zzbackend_backendz00,
		BgL_bgl__registerza7d2back1755za7,
		BGl__registerzd2backendz12zc0zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzd2nilzd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2nilza7d1756z00,
		BGl__backendzd2nilzd2zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2backendz12zd2envz12zzbackend_backendz00,
		BgL_bgl__setza7d2backendza711757z00,
		BGl__setzd2backendz12zc0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2compilezd2defa1662zd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2compi1758za7,
		BGl__backendzd2compilezd2defa1662z00zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1717z00zzbackend_backendz00,
		BgL_bgl_string1717za700za7za7b1759za7, "backend", 7);
	      DEFINE_STRING(BGl_string1718z00zzbackend_backendz00,
		BgL_bgl_string1718za700za7za7b1760za7, "Unimplemented target language", 29);
	      DEFINE_STRING(BGl_string1721z00zzbackend_backendz00,
		BgL_bgl_string1721za700za7za7b1761za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string1722z00zzbackend_backendz00,
		BgL_bgl_string1722za700za7za7b1762za7,
		"Can't make instance of abstract classes", 39);
	      DEFINE_STRING(BGl_string1723z00zzbackend_backendz00,
		BgL_bgl_string1723za700za7za7b1763za7, "", 0);
	      DEFINE_STRING(BGl_string1724z00zzbackend_backendz00,
		BgL_bgl_string1724za700za7za7b1764za7, "backend-initialize!", 19);
	      DEFINE_STRING(BGl_string1725z00zzbackend_backendz00,
		BgL_bgl_string1725za700za7za7b1765za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string1726z00zzbackend_backendz00,
		BgL_bgl_string1726za700za7za7b1766za7, "backend-compile-functions", 25);
	      DEFINE_STRING(BGl_string1727z00zzbackend_backendz00,
		BgL_bgl_string1727za700za7za7b1767za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string1728z00zzbackend_backendz00,
		BgL_bgl_string1728za700za7za7b1768za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string1730z00zzbackend_backendz00,
		BgL_bgl_string1730za700za7za7b1769za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string1729z00zzbackend_backendz00,
		BgL_bgl_string1729za700za7za7b1770za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string1731z00zzbackend_backendz00,
		BgL_bgl_string1731za700za7za7b1771za7, "backend-instr-reset-registers", 29);
	      DEFINE_STRING(BGl_string1732z00zzbackend_backendz00,
		BgL_bgl_string1732za700za7za7b1772za7, "backend-check-inlines", 21);
	      DEFINE_STRING(BGl_string1733z00zzbackend_backendz00,
		BgL_bgl_string1733za700za7za7b1773za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1734z00zzbackend_backendz00,
		BgL_bgl_string1734za700za7za7b1774za7, "backend_backend", 15);
	      DEFINE_STRING(BGl_string1735z00zzbackend_backendz00,
		BgL_bgl_string1735za700za7za7b1775za7,
		"backend-link-objects1673 backend-cnst-table-n1671 backend-subtype?-def1668 backend-link-default1666 backend-compile-func1664 backend-compile-defa1662 _ %allocate-backend backend ",
		178);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2subtypezf3zd2def1668zd2envz21zzbackend_backendz00,
		BgL_bgl__backendza7d2subty1776za7,
		BGl__backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
		BgL_bgl__backendza7d2initi1777za7,
		BGl__backendzd2initializa7ez12z67zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2instr1778za7,
		BGl__backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2check1779za7,
		BGl__backendzd2checkzd2inlinesz00zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2linkza71780z00,
		BGl__backendzd2linkzd2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2compilezd2func1664zd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2compi1781za7,
		BGl__backendzd2compilezd2func1664z00zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2checkzd2inline1677zd2envzd2zzbackend_backendz00,
		BgL_bgl__backendza7d2check1782za7,
		BGl__backendzd2checkzd2inline1677z00zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_backendzd2instrzd2resetzd21675zd2envz00zzbackend_backendz00,
		BgL_bgl__backendza7d2instr1783za7,
		BGl__backendzd2instrzd2resetzd21675zd2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_thezd2backendzd2envz00zzbackend_backendz00,
		BgL_bgl__theza7d2backendza7d1784z00,
		BGl__thezd2backendzd2zzbackend_backendz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_backendz00(long
		BgL_checksumz00_824, char *BgL_fromz00_825)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_backendz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_backendz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_backendz00();
					BGl_cnstzd2initzd2zzbackend_backendz00();
					BGl_importedzd2moduleszd2initz00zzbackend_backendz00();
					BGl_objectzd2initzd2zzbackend_backendz00();
					BGl_genericzd2initzd2zzbackend_backendz00();
					BGl_toplevelzd2initzd2zzbackend_backendz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_backend");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			{	/* BackEnd/backend.scm 15 */
				obj_t BgL_cportz00_722;

				BgL_cportz00_722 =
					bgl_open_input_string(BGl_string1735z00zzbackend_backendz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_723;

					BgL_iz00_723 = ((long) 8);
				BgL_loopz00_724:
					if ((BgL_iz00_723 == ((long) -1)))
						{	/* BackEnd/backend.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/backend.scm 15 */
							{	/* BackEnd/backend.scm 15 */
								obj_t BgL_arg1738z00_726;

								{	/* BackEnd/backend.scm 15 */

									{	/* BackEnd/backend.scm 15 */
										obj_t BgL_locationz00_728;

										BgL_locationz00_728 = BBOOL(((bool_t) 0));
										{	/* BackEnd/backend.scm 15 */

											BgL_arg1738z00_726 =
												BGl_readz00zz__readerz00(BgL_cportz00_722,
												BgL_locationz00_728);
										}
									}
								}
								{	/* BackEnd/backend.scm 15 */
									int BgL_auxz00_845;

									BgL_auxz00_845 = (int) (BgL_iz00_723);
									CNST_TABLE_SET(BgL_auxz00_845, BgL_arg1738z00_726);
							}}
							{	/* BackEnd/backend.scm 15 */
								int BgL_auxz00_729;

								BgL_auxz00_729 = (int) ((BgL_iz00_723 - ((long) 1)));
								{
									long BgL_iz00_850;

									BgL_iz00_850 = (long) (BgL_auxz00_729);
									BgL_iz00_723 = BgL_iz00_850;
									goto BgL_loopz00_724;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			BGl_za2thezd2backendza2zd2zzbackend_backendz00 = BUNSPEC;
			BGl_za2backendsza2z00zzbackend_backendz00 = BNIL;
			return BUNSPEC;
		}
	}



/* set-backend! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t
		BgL_languagez00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 72 */
			{	/* BackEnd/backend.scm 73 */
				obj_t BgL_cz00_233;

				BgL_cz00_233 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_languagez00_1,
					BGl_za2backendsza2z00zzbackend_backendz00);
				if (PAIRP(BgL_cz00_233))
					{	/* BackEnd/backend.scm 76 */
						obj_t BgL_fun1680z00_235;

						BgL_fun1680z00_235 = CDR(BgL_cz00_233);
						return (BGl_za2thezd2backendza2zd2zzbackend_backendz00 =
							PROCEDURE_ENTRY(BgL_fun1680z00_235) (BgL_fun1680z00_235, BEOA),
							BUNSPEC);
					}
				else
					{	/* BackEnd/backend.scm 74 */
						return
							BGl_errorz00zz__errorz00(BGl_string1717z00zzbackend_backendz00,
							BGl_string1718z00zzbackend_backendz00, BgL_languagez00_1);
					}
			}
		}
	}



/* _set-backend! */
	obj_t BGl__setzd2backendz12zc0zzbackend_backendz00(obj_t BgL_envz00_628,
		obj_t BgL_languagez00_629)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 72 */
			return BGl_setzd2backendz12zc0zzbackend_backendz00(BgL_languagez00_629);
		}
	}



/* the-backend */
	BGL_EXPORTED_DEF obj_t BGl_thezd2backendzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 81 */
			return BGl_za2thezd2backendza2zd2zzbackend_backendz00;
		}
	}



/* _the-backend */
	obj_t BGl__thezd2backendzd2zzbackend_backendz00(obj_t BgL_envz00_630)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 81 */
			return BGl_za2thezd2backendza2zd2zzbackend_backendz00;
		}
	}



/* register-backend! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t
		BgL_idz00_2, obj_t BgL_builderz00_3)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 92 */
			{	/* BackEnd/backend.scm 93 */
				obj_t BgL_arg1684z00_297;

				BgL_arg1684z00_297 = MAKE_PAIR(BgL_idz00_2, BgL_builderz00_3);
				return (BGl_za2backendsza2z00zzbackend_backendz00 =
					MAKE_PAIR(BgL_arg1684z00_297,
						BGl_za2backendsza2z00zzbackend_backendz00), BUNSPEC);
			}
		}
	}



/* _register-backend! */
	obj_t BGl__registerzd2backendz12zc0zzbackend_backendz00(obj_t BgL_envz00_631,
		obj_t BgL_idz00_632, obj_t BgL_builderz00_633)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 92 */
			return
				BGl_registerzd2backendz12zc0zzbackend_backendz00(BgL_idz00_632,
				BgL_builderz00_633);
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			{	/* BackEnd/backend.scm 19 */
				obj_t BgL_arg1685z00_237;

				obj_t BgL_arg1688z00_238;

				obj_t BgL_arg1692z00_242;

				BgL_arg1685z00_237 = CNST_TABLE_REF(((long) 0));
				BgL_arg1688z00_238 = BGl_objectz00zz__objectz00;
				{	/* BackEnd/backend.scm 19 */
					obj_t BgL_v1659z00_247;

					BgL_v1659z00_247 = create_vector((int) (((long) 0)));
					BgL_arg1692z00_242 = BgL_v1659z00_247;
				}
				BGl_backendz00zzbackend_backendz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg1685z00_237,
					BgL_arg1688z00_238, ((bool_t) 1), BGl_proc1719z00zzbackend_backendz00,
					BGl_proc1720z00zzbackend_backendz00,
					BGl_backendzd2nilzd2envz00zzbackend_backendz00,
					BGl_backendzf3zd2envz21zzbackend_backendz00, ((long) 275797103),
					BFALSE, BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
					BgL_arg1692z00_242);
			}
			return (BGl_z52thezd2backendzd2nilz52zzbackend_backendz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* <anonymous:1694> */
	obj_t BGl_zc3anonymousza31694ze3z83zzbackend_backendz00(obj_t BgL_envz00_636,
		obj_t BgL_xz00_637)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{
				obj_t BgL_xz00_245;

				BgL_xz00_245 = BgL_xz00_637;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string1721z00zzbackend_backendz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* <anonymous:1693> */
	obj_t BGl_zc3anonymousza31693ze3z83zzbackend_backendz00(obj_t BgL_envz00_638,
		obj_t BgL_xz00_639)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{
				obj_t BgL_xz00_243;

				BgL_xz00_243 = BgL_xz00_639;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string1722z00zzbackend_backendz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* backend? */
	BGL_EXPORTED_DEF bool_t BGl_backendzf3zf3zzbackend_backendz00(obj_t
		BgL_obj1652z00_34)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_34,
				BGl_backendz00zzbackend_backendz00);
		}
	}



/* _backend? */
	obj_t BGl__backendzf3zf3zzbackend_backendz00(obj_t BgL_envz00_641,
		obj_t BgL_obj1652z00_642)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_642,
					BGl_backendz00zzbackend_backendz00));
		}
	}



/* fill-backend! */
	BGL_EXPORTED_DEF BgL_backendz00_bglt
		BGl_fillzd2backendz12zc0zzbackend_backendz00(BgL_backendz00_bglt
		BgL_new1621z00_35, obj_t BgL_language1593z00_36, obj_t BgL_srfi01594z00_37,
		obj_t BgL_name1595z00_38, obj_t BgL_externzd2variables1596zd2_39,
		obj_t BgL_externzd2functions1597zd2_40, obj_t BgL_externzd2types1598zd2_41,
		obj_t BgL_variables1599z00_42, obj_t BgL_functions1600z00_43,
		obj_t BgL_types1601z00_44, bool_t BgL_typed1602z00_45,
		obj_t BgL_heapzd2suffix1603zd2_46, obj_t BgL_heapzd2compatible1604zd2_47,
		bool_t BgL_callcc1605z00_48, bool_t BgL_qualifiedzd2types1606zd2_49,
		bool_t BgL_effectzb21607zb2_50, bool_t BgL_removezd2emptyzd2let1608z00_51,
		bool_t BgL_foreignzd2closure1609zd2_52, bool_t BgL_typedzd2eq1610zd2_53,
		bool_t BgL_tracezd2support1611zd2_54,
		obj_t BgL_foreignzd2clausezd2suppo1612z00_55,
		obj_t BgL_debugzd2support1613zd2_56, bool_t BgL_pragmazd2support1614zd2_57,
		bool_t BgL_tvectorzd2descrzd2suppor1615z00_58,
		bool_t BgL_requirezd2tailc1616zd2_59, obj_t BgL_registers1617z00_60,
		obj_t BgL_pregisters1618z00_61, bool_t BgL_boundzd2check1619zd2_62,
		bool_t BgL_typezd2check1620zd2_63)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{	/* BackEnd/backend.scm 19 */
				obj_t BgL_language1593z00_731;

				obj_t BgL_srfi01594z00_732;

				obj_t BgL_name1595z00_733;

				obj_t BgL_externzd2variables1596zd2_734;

				obj_t BgL_externzd2functions1597zd2_735;

				obj_t BgL_externzd2types1598zd2_736;

				obj_t BgL_variables1599z00_737;

				obj_t BgL_functions1600z00_738;

				obj_t BgL_types1601z00_739;

				bool_t BgL_typed1602z00_740;

				obj_t BgL_heapzd2suffix1603zd2_741;

				obj_t BgL_heapzd2compatible1604zd2_742;

				bool_t BgL_callcc1605z00_743;

				bool_t BgL_qualifiedzd2types1606zd2_744;

				bool_t BgL_effectzb21607zb2_745;

				bool_t BgL_removezd2emptyzd2let1608z00_746;

				bool_t BgL_foreignzd2closure1609zd2_747;

				bool_t BgL_typedzd2eq1610zd2_748;

				bool_t BgL_tracezd2support1611zd2_749;

				obj_t BgL_foreignzd2clausezd2suppo1612z00_750;

				obj_t BgL_debugzd2support1613zd2_751;

				bool_t BgL_pragmazd2support1614zd2_752;

				bool_t BgL_tvectorzd2descrzd2suppor1615z00_753;

				bool_t BgL_requirezd2tailc1616zd2_754;

				obj_t BgL_registers1617z00_755;

				obj_t BgL_pregisters1618z00_756;

				bool_t BgL_boundzd2check1619zd2_757;

				bool_t BgL_typezd2check1620zd2_758;

				BgL_language1593z00_731 = BgL_language1593z00_36;
				BgL_srfi01594z00_732 = BgL_srfi01594z00_37;
				BgL_name1595z00_733 = BgL_name1595z00_38;
				BgL_externzd2variables1596zd2_734 = BgL_externzd2variables1596zd2_39;
				BgL_externzd2functions1597zd2_735 = BgL_externzd2functions1597zd2_40;
				BgL_externzd2types1598zd2_736 = BgL_externzd2types1598zd2_41;
				BgL_variables1599z00_737 = BgL_variables1599z00_42;
				BgL_functions1600z00_738 = BgL_functions1600z00_43;
				BgL_types1601z00_739 = BgL_types1601z00_44;
				BgL_typed1602z00_740 = BgL_typed1602z00_45;
				BgL_heapzd2suffix1603zd2_741 = BgL_heapzd2suffix1603zd2_46;
				BgL_heapzd2compatible1604zd2_742 = BgL_heapzd2compatible1604zd2_47;
				BgL_callcc1605z00_743 = BgL_callcc1605z00_48;
				BgL_qualifiedzd2types1606zd2_744 = BgL_qualifiedzd2types1606zd2_49;
				BgL_effectzb21607zb2_745 = BgL_effectzb21607zb2_50;
				BgL_removezd2emptyzd2let1608z00_746 =
					BgL_removezd2emptyzd2let1608z00_51;
				BgL_foreignzd2closure1609zd2_747 = BgL_foreignzd2closure1609zd2_52;
				BgL_typedzd2eq1610zd2_748 = BgL_typedzd2eq1610zd2_53;
				BgL_tracezd2support1611zd2_749 = BgL_tracezd2support1611zd2_54;
				BgL_foreignzd2clausezd2suppo1612z00_750 =
					BgL_foreignzd2clausezd2suppo1612z00_55;
				BgL_debugzd2support1613zd2_751 = BgL_debugzd2support1613zd2_56;
				BgL_pragmazd2support1614zd2_752 = BgL_pragmazd2support1614zd2_57;
				BgL_tvectorzd2descrzd2suppor1615z00_753 =
					BgL_tvectorzd2descrzd2suppor1615z00_58;
				BgL_requirezd2tailc1616zd2_754 = BgL_requirezd2tailc1616zd2_59;
				BgL_registers1617z00_755 = BgL_registers1617z00_60;
				BgL_pregisters1618z00_756 = BgL_pregisters1618z00_61;
				BgL_boundzd2check1619zd2_757 = BgL_boundzd2check1619zd2_62;
				BgL_typezd2check1620zd2_758 = BgL_typezd2check1620zd2_63;
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_languagez00) =
					((obj_t) BgL_language1593z00_731), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01594z00_732), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_namez00) =
					((obj_t) BgL_name1595z00_733), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1596zd2_734), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1597zd2_735), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1598zd2_736), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_variablesz00) =
					((obj_t) BgL_variables1599z00_737), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_functionsz00) =
					((obj_t) BgL_functions1600z00_738), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_typesz00) =
					((obj_t) BgL_types1601z00_739), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_typedz00) =
					((bool_t) BgL_typed1602z00_740), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1603zd2_741), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1604zd2_742), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_callccz00) =
					((bool_t) BgL_callcc1605z00_743), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1606zd2_744), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21607zb2_745), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1608z00_746), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1609zd2_747), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1610zd2_748), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1611zd2_749), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1612z00_750), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1613zd2_751), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1614zd2_752), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1615z00_753), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1616zd2_754), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_registersz00) =
					((obj_t) BgL_registers1617z00_755), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1618z00_756), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1619zd2_757), BUNSPEC);
				((((BgL_backendz00_bglt) CREF(BgL_new1621z00_35))->
						BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1620zd2_758), BUNSPEC);
				return BgL_new1621z00_35;
			}
		}
	}



/* _fill-backend! */
	obj_t BGl__fillzd2backendz12zc0zzbackend_backendz00(obj_t BgL_envz00_645,
		obj_t BgL_new1621z00_646, obj_t BgL_language1593z00_647,
		obj_t BgL_srfi01594z00_648, obj_t BgL_name1595z00_649,
		obj_t BgL_externzd2variables1596zd2_650,
		obj_t BgL_externzd2functions1597zd2_651,
		obj_t BgL_externzd2types1598zd2_652, obj_t BgL_variables1599z00_653,
		obj_t BgL_functions1600z00_654, obj_t BgL_types1601z00_655,
		obj_t BgL_typed1602z00_656, obj_t BgL_heapzd2suffix1603zd2_657,
		obj_t BgL_heapzd2compatible1604zd2_658, obj_t BgL_callcc1605z00_659,
		obj_t BgL_qualifiedzd2types1606zd2_660, obj_t BgL_effectzb21607zb2_661,
		obj_t BgL_removezd2emptyzd2let1608z00_662,
		obj_t BgL_foreignzd2closure1609zd2_663, obj_t BgL_typedzd2eq1610zd2_664,
		obj_t BgL_tracezd2support1611zd2_665,
		obj_t BgL_foreignzd2clausezd2suppo1612z00_666,
		obj_t BgL_debugzd2support1613zd2_667, obj_t BgL_pragmazd2support1614zd2_668,
		obj_t BgL_tvectorzd2descrzd2suppor1615z00_669,
		obj_t BgL_requirezd2tailc1616zd2_670, obj_t BgL_registers1617z00_671,
		obj_t BgL_pregisters1618z00_672, obj_t BgL_boundzd2check1619zd2_673,
		obj_t BgL_typezd2check1620zd2_674)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{	/* BackEnd/backend.scm 19 */
				BgL_backendz00_bglt BgL_auxz00_904;

				{	/* BackEnd/backend.scm 19 */
					BgL_backendz00_bglt BgL_res1739z00_816;

					{	/* BackEnd/backend.scm 19 */
						BgL_backendz00_bglt BgL_new1621z00_759;

						obj_t BgL_language1593z00_760;

						obj_t BgL_srfi01594z00_761;

						obj_t BgL_name1595z00_762;

						bool_t BgL_typed1602z00_769;

						obj_t BgL_heapzd2suffix1603zd2_770;

						obj_t BgL_heapzd2compatible1604zd2_771;

						bool_t BgL_callcc1605z00_772;

						bool_t BgL_qualifiedzd2types1606zd2_773;

						bool_t BgL_effectzb21607zb2_774;

						bool_t BgL_removezd2emptyzd2let1608z00_775;

						bool_t BgL_foreignzd2closure1609zd2_776;

						bool_t BgL_typedzd2eq1610zd2_777;

						bool_t BgL_tracezd2support1611zd2_778;

						obj_t BgL_foreignzd2clausezd2suppo1612z00_779;

						obj_t BgL_debugzd2support1613zd2_780;

						bool_t BgL_pragmazd2support1614zd2_781;

						bool_t BgL_tvectorzd2descrzd2suppor1615z00_782;

						bool_t BgL_requirezd2tailc1616zd2_783;

						obj_t BgL_registers1617z00_784;

						obj_t BgL_pregisters1618z00_785;

						bool_t BgL_boundzd2check1619zd2_786;

						bool_t BgL_typezd2check1620zd2_787;

						BgL_new1621z00_759 = (BgL_backendz00_bglt) (BgL_new1621z00_646);
						BgL_language1593z00_760 = BgL_language1593z00_647;
						BgL_srfi01594z00_761 = BgL_srfi01594z00_648;
						BgL_name1595z00_762 = BgL_name1595z00_649;
						BgL_typed1602z00_769 = CBOOL(BgL_typed1602z00_656);
						BgL_heapzd2suffix1603zd2_770 = BgL_heapzd2suffix1603zd2_657;
						BgL_heapzd2compatible1604zd2_771 = BgL_heapzd2compatible1604zd2_658;
						BgL_callcc1605z00_772 = CBOOL(BgL_callcc1605z00_659);
						BgL_qualifiedzd2types1606zd2_773 =
							CBOOL(BgL_qualifiedzd2types1606zd2_660);
						BgL_effectzb21607zb2_774 = CBOOL(BgL_effectzb21607zb2_661);
						BgL_removezd2emptyzd2let1608z00_775 =
							CBOOL(BgL_removezd2emptyzd2let1608z00_662);
						BgL_foreignzd2closure1609zd2_776 =
							CBOOL(BgL_foreignzd2closure1609zd2_663);
						BgL_typedzd2eq1610zd2_777 = CBOOL(BgL_typedzd2eq1610zd2_664);
						BgL_tracezd2support1611zd2_778 =
							CBOOL(BgL_tracezd2support1611zd2_665);
						BgL_foreignzd2clausezd2suppo1612z00_779 =
							BgL_foreignzd2clausezd2suppo1612z00_666;
						BgL_debugzd2support1613zd2_780 = BgL_debugzd2support1613zd2_667;
						BgL_pragmazd2support1614zd2_781 =
							CBOOL(BgL_pragmazd2support1614zd2_668);
						BgL_tvectorzd2descrzd2suppor1615z00_782 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1615z00_669);
						BgL_requirezd2tailc1616zd2_783 =
							CBOOL(BgL_requirezd2tailc1616zd2_670);
						BgL_registers1617z00_784 = BgL_registers1617z00_671;
						BgL_pregisters1618z00_785 = BgL_pregisters1618z00_672;
						BgL_boundzd2check1619zd2_786 = CBOOL(BgL_boundzd2check1619zd2_673);
						BgL_typezd2check1620zd2_787 = CBOOL(BgL_typezd2check1620zd2_674);
						{	/* BackEnd/backend.scm 19 */
							obj_t BgL_language1593z00_788;

							obj_t BgL_srfi01594z00_789;

							obj_t BgL_name1595z00_790;

							obj_t BgL_externzd2variables1596zd2_791;

							obj_t BgL_externzd2functions1597zd2_792;

							obj_t BgL_externzd2types1598zd2_793;

							obj_t BgL_variables1599z00_794;

							obj_t BgL_functions1600z00_795;

							obj_t BgL_types1601z00_796;

							bool_t BgL_typed1602z00_797;

							obj_t BgL_heapzd2suffix1603zd2_798;

							obj_t BgL_heapzd2compatible1604zd2_799;

							bool_t BgL_callcc1605z00_800;

							bool_t BgL_qualifiedzd2types1606zd2_801;

							bool_t BgL_effectzb21607zb2_802;

							bool_t BgL_removezd2emptyzd2let1608z00_803;

							bool_t BgL_foreignzd2closure1609zd2_804;

							bool_t BgL_typedzd2eq1610zd2_805;

							bool_t BgL_tracezd2support1611zd2_806;

							obj_t BgL_foreignzd2clausezd2suppo1612z00_807;

							obj_t BgL_debugzd2support1613zd2_808;

							bool_t BgL_pragmazd2support1614zd2_809;

							bool_t BgL_tvectorzd2descrzd2suppor1615z00_810;

							bool_t BgL_requirezd2tailc1616zd2_811;

							obj_t BgL_registers1617z00_812;

							obj_t BgL_pregisters1618z00_813;

							bool_t BgL_boundzd2check1619zd2_814;

							bool_t BgL_typezd2check1620zd2_815;

							BgL_language1593z00_788 = BgL_language1593z00_760;
							BgL_srfi01594z00_789 = BgL_srfi01594z00_761;
							BgL_name1595z00_790 = BgL_name1595z00_762;
							BgL_externzd2variables1596zd2_791 =
								BgL_externzd2variables1596zd2_650;
							BgL_externzd2functions1597zd2_792 =
								BgL_externzd2functions1597zd2_651;
							BgL_externzd2types1598zd2_793 = BgL_externzd2types1598zd2_652;
							BgL_variables1599z00_794 = BgL_variables1599z00_653;
							BgL_functions1600z00_795 = BgL_functions1600z00_654;
							BgL_types1601z00_796 = BgL_types1601z00_655;
							BgL_typed1602z00_797 = BgL_typed1602z00_769;
							BgL_heapzd2suffix1603zd2_798 = BgL_heapzd2suffix1603zd2_770;
							BgL_heapzd2compatible1604zd2_799 =
								BgL_heapzd2compatible1604zd2_771;
							BgL_callcc1605z00_800 = BgL_callcc1605z00_772;
							BgL_qualifiedzd2types1606zd2_801 =
								BgL_qualifiedzd2types1606zd2_773;
							BgL_effectzb21607zb2_802 = BgL_effectzb21607zb2_774;
							BgL_removezd2emptyzd2let1608z00_803 =
								BgL_removezd2emptyzd2let1608z00_775;
							BgL_foreignzd2closure1609zd2_804 =
								BgL_foreignzd2closure1609zd2_776;
							BgL_typedzd2eq1610zd2_805 = BgL_typedzd2eq1610zd2_777;
							BgL_tracezd2support1611zd2_806 = BgL_tracezd2support1611zd2_778;
							BgL_foreignzd2clausezd2suppo1612z00_807 =
								BgL_foreignzd2clausezd2suppo1612z00_779;
							BgL_debugzd2support1613zd2_808 = BgL_debugzd2support1613zd2_780;
							BgL_pragmazd2support1614zd2_809 = BgL_pragmazd2support1614zd2_781;
							BgL_tvectorzd2descrzd2suppor1615z00_810 =
								BgL_tvectorzd2descrzd2suppor1615z00_782;
							BgL_requirezd2tailc1616zd2_811 = BgL_requirezd2tailc1616zd2_783;
							BgL_registers1617z00_812 = BgL_registers1617z00_784;
							BgL_pregisters1618z00_813 = BgL_pregisters1618z00_785;
							BgL_boundzd2check1619zd2_814 = BgL_boundzd2check1619zd2_786;
							BgL_typezd2check1620zd2_815 = BgL_typezd2check1620zd2_787;
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_languagez00) =
								((obj_t) BgL_language1593z00_788), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_srfi0z00) = ((obj_t) BgL_srfi01594z00_789), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->BgL_namez00) =
								((obj_t) BgL_name1595z00_790), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1596zd2_791), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1597zd2_792), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1598zd2_793), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1599z00_794), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1600z00_795), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_typesz00) = ((obj_t) BgL_types1601z00_796), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_typedz00) = ((bool_t) BgL_typed1602z00_797), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1603zd2_798), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1604zd2_799), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_callccz00) = ((bool_t) BgL_callcc1605z00_800), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1606zd2_801), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21607zb2_802), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1608z00_803), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1609zd2_804), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1610zd2_805), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1611zd2_806), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1612z00_807), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1613zd2_808), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1614zd2_809), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1615z00_810), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1616zd2_811), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_registersz00) =
								((obj_t) BgL_registers1617z00_812), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1618z00_813), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1619zd2_814), BUNSPEC);
							((((BgL_backendz00_bglt) CREF(BgL_new1621z00_759))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1620zd2_815), BUNSPEC);
							BgL_res1739z00_816 = BgL_new1621z00_759;
						}
					}
					BgL_auxz00_904 = BgL_res1739z00_816;
				}
				return (obj_t) (BgL_auxz00_904);
			}
		}
	}



/* %allocate-backend */
	BGL_EXPORTED_DEF BgL_backendz00_bglt
		BGl_z52allocatezd2backendz80zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{	/* BackEnd/backend.scm 19 */
				BgL_backendz00_bglt BgL_new1651z00_817;

				BgL_new1651z00_817 =
					((BgL_backendz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_backendz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1651z00_817),
					BGl_classzd2numzd2zz__objectz00(BGl_backendz00zzbackend_backendz00));
				{	/* BackEnd/backend.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_952;

					BgL_auxz00_952 = (BgL_objectz00_bglt) (BgL_new1651z00_817);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_952, BFALSE);
				}
				return BgL_new1651z00_817;
			}
		}
	}



/* _%allocate-backend */
	obj_t BGl__z52allocatezd2backendz80zzbackend_backendz00(obj_t BgL_envz00_675)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			{	/* BackEnd/backend.scm 19 */
				BgL_backendz00_bglt BgL_auxz00_955;

				{	/* BackEnd/backend.scm 19 */
					BgL_backendz00_bglt BgL_res1740z00_821;

					{	/* BackEnd/backend.scm 19 */
						BgL_backendz00_bglt BgL_new1651z00_819;

						BgL_new1651z00_819 =
							((BgL_backendz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_backendz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1651z00_819),
							BGl_classzd2numzd2zz__objectz00
							(BGl_backendz00zzbackend_backendz00));
						{	/* BackEnd/backend.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_960;

							BgL_auxz00_960 = (BgL_objectz00_bglt) (BgL_new1651z00_819);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_960, BFALSE);
						}
						BgL_res1740z00_821 = BgL_new1651z00_819;
					}
					BgL_auxz00_955 = BgL_res1740z00_821;
				}
				return (obj_t) (BgL_auxz00_955);
			}
		}
	}



/* backend-nil */
	BGL_EXPORTED_DEF BgL_backendz00_bglt
		BGl_backendzd2nilzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			if ((BGl_z52thezd2backendzd2nilz52zzbackend_backendz00 == BUNSPEC))
				{	/* BackEnd/backend.scm 19 */
					{	/* BackEnd/backend.scm 19 */
						BgL_backendz00_bglt BgL_res1697z00_334;

						{	/* BackEnd/backend.scm 19 */
							BgL_backendz00_bglt BgL_new1651z00_330;

							BgL_new1651z00_330 =
								((BgL_backendz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_backendz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1651z00_330),
								BGl_classzd2numzd2zz__objectz00
								(BGl_backendz00zzbackend_backendz00));
							{	/* BackEnd/backend.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_970;

								BgL_auxz00_970 = (BgL_objectz00_bglt) (BgL_new1651z00_330);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_970, BFALSE);
							}
							BgL_res1697z00_334 = BgL_new1651z00_330;
						}
						BGl_z52thezd2backendzd2nilz52zzbackend_backendz00 =
							(obj_t) (BgL_res1697z00_334);
					}
					{	/* BackEnd/backend.scm 19 */
						BgL_backendz00_bglt BgL_res1698z00_392;

						{	/* BackEnd/backend.scm 19 */
							BgL_backendz00_bglt BgL_new1621z00_335;

							obj_t BgL_language1593z00_336;

							obj_t BgL_srfi01594z00_337;

							obj_t BgL_heapzd2compatible1604zd2_347;

							BgL_new1621z00_335 =
								(BgL_backendz00_bglt)
								(BGl_z52thezd2backendzd2nilz52zzbackend_backendz00);
							BgL_language1593z00_336 = CNST_TABLE_REF(((long) 2));
							BgL_srfi01594z00_337 = CNST_TABLE_REF(((long) 2));
							BgL_heapzd2compatible1604zd2_347 = CNST_TABLE_REF(((long) 2));
							{	/* BackEnd/backend.scm 19 */
								obj_t BgL_language1593z00_364;

								obj_t BgL_srfi01594z00_365;

								obj_t BgL_name1595z00_366;

								obj_t BgL_externzd2variables1596zd2_367;

								obj_t BgL_externzd2functions1597zd2_368;

								obj_t BgL_externzd2types1598zd2_369;

								obj_t BgL_variables1599z00_370;

								obj_t BgL_functions1600z00_371;

								obj_t BgL_types1601z00_372;

								bool_t BgL_typed1602z00_373;

								obj_t BgL_heapzd2suffix1603zd2_374;

								obj_t BgL_heapzd2compatible1604zd2_375;

								bool_t BgL_callcc1605z00_376;

								bool_t BgL_qualifiedzd2types1606zd2_377;

								bool_t BgL_effectzb21607zb2_378;

								bool_t BgL_removezd2emptyzd2let1608z00_379;

								bool_t BgL_foreignzd2closure1609zd2_380;

								bool_t BgL_typedzd2eq1610zd2_381;

								bool_t BgL_tracezd2support1611zd2_382;

								obj_t BgL_foreignzd2clausezd2suppo1612z00_383;

								obj_t BgL_debugzd2support1613zd2_384;

								bool_t BgL_pragmazd2support1614zd2_385;

								bool_t BgL_tvectorzd2descrzd2suppor1615z00_386;

								bool_t BgL_requirezd2tailc1616zd2_387;

								obj_t BgL_registers1617z00_388;

								obj_t BgL_pregisters1618z00_389;

								bool_t BgL_boundzd2check1619zd2_390;

								bool_t BgL_typezd2check1620zd2_391;

								BgL_language1593z00_364 = BgL_language1593z00_336;
								BgL_srfi01594z00_365 = BgL_srfi01594z00_337;
								BgL_name1595z00_366 = BGl_string1723z00zzbackend_backendz00;
								BgL_externzd2variables1596zd2_367 = BUNSPEC;
								BgL_externzd2functions1597zd2_368 = BUNSPEC;
								BgL_externzd2types1598zd2_369 = BUNSPEC;
								BgL_variables1599z00_370 = BUNSPEC;
								BgL_functions1600z00_371 = BUNSPEC;
								BgL_types1601z00_372 = BUNSPEC;
								BgL_typed1602z00_373 = ((bool_t) 0);
								BgL_heapzd2suffix1603zd2_374 =
									BGl_string1723z00zzbackend_backendz00;
								BgL_heapzd2compatible1604zd2_375 =
									BgL_heapzd2compatible1604zd2_347;
								BgL_callcc1605z00_376 = ((bool_t) 0);
								BgL_qualifiedzd2types1606zd2_377 = ((bool_t) 0);
								BgL_effectzb21607zb2_378 = ((bool_t) 0);
								BgL_removezd2emptyzd2let1608z00_379 = ((bool_t) 0);
								BgL_foreignzd2closure1609zd2_380 = ((bool_t) 0);
								BgL_typedzd2eq1610zd2_381 = ((bool_t) 0);
								BgL_tracezd2support1611zd2_382 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo1612z00_383 = BNIL;
								BgL_debugzd2support1613zd2_384 = BNIL;
								BgL_pragmazd2support1614zd2_385 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor1615z00_386 = ((bool_t) 0);
								BgL_requirezd2tailc1616zd2_387 = ((bool_t) 0);
								BgL_registers1617z00_388 = BNIL;
								BgL_pregisters1618z00_389 = BNIL;
								BgL_boundzd2check1619zd2_390 = ((bool_t) 0);
								BgL_typezd2check1620zd2_391 = ((bool_t) 0);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_languagez00) =
									((obj_t) BgL_language1593z00_364), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_srfi0z00) = ((obj_t) BgL_srfi01594z00_365), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_namez00) = ((obj_t) BgL_name1595z00_366), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables1596zd2_367), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions1597zd2_368), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types1598zd2_369), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_variablesz00) =
									((obj_t) BgL_variables1599z00_370), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_functionsz00) =
									((obj_t) BgL_functions1600z00_371), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_typesz00) = ((obj_t) BgL_types1601z00_372), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_typedz00) = ((bool_t) BgL_typed1602z00_373), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix1603zd2_374), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible1604zd2_375), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_callccz00) = ((bool_t) BgL_callcc1605z00_376), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types1606zd2_377), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb21607zb2_378), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let1608z00_379), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure1609zd2_380), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq1610zd2_381), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support1611zd2_382), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo1612z00_383), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support1613zd2_384), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support1614zd2_385), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor1615z00_386), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc1616zd2_387), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_registersz00) =
									((obj_t) BgL_registers1617z00_388), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters1618z00_389), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check1619zd2_390), BUNSPEC);
								((((BgL_backendz00_bglt) CREF(BgL_new1621z00_335))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check1620zd2_391), BUNSPEC);
								BgL_res1698z00_392 = BgL_new1621z00_335;
						}}
						(obj_t) (BgL_res1698z00_392);
				}}
			else
				{	/* BackEnd/backend.scm 19 */
					BFALSE;
				}
			return
				(BgL_backendz00_bglt)
				(BGl_z52thezd2backendzd2nilz52zzbackend_backendz00);
		}
	}



/* _backend-nil */
	obj_t BGl__backendzd2nilzd2zzbackend_backendz00(obj_t BgL_envz00_640)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 19 */
			return (obj_t) (BGl_backendzd2nilzd2zzbackend_backendz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
				BGl_backendzd2initializa7ez12zd21660zd2envz67zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1724z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_backendzd2compilezd2defa1662zd2envzd2zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1725z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
				BGl_backendzd2compilezd2func1664zd2envzd2zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1726z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_backendzd2linkzd2default1666zd2envzd2zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1727z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_backendzd2subtypezf3zd2def1668zd2envz21zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1728z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_backendzd2cnstzd2tablezd2n1671zd2envz00zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1729z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_backendzd2linkzd2objects1673zd2envzd2zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1730z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
				BGl_backendzd2instrzd2resetzd21675zd2envz00zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1731z00zzbackend_backendz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
				BGl_backendzd2checkzd2inline1677zd2envzd2zzbackend_backendz00,
				BGl_backendz00zzbackend_backendz00,
				BGl_string1732z00zzbackend_backendz00);
		}
	}



/* backend-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_4)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 98 */
			{	/* BackEnd/backend.scm 98 */
				obj_t BgL_method1661z00_393;

				{	/* BackEnd/backend.scm 98 */
					BgL_objectz00_bglt BgL_objz00_394;

					BgL_objz00_394 = (BgL_objectz00_bglt) (BgL_bz00_4);
					{	/* BackEnd/backend.scm 98 */
						long BgL_objzd2classzd2numz00_395;

						BgL_objzd2classzd2numz00_395 = BGL_OBJECT_CLASS_NUM(BgL_objz00_394);
						{	/* BackEnd/backend.scm 98 */
							obj_t BgL_arg2643z00_396;

							BgL_arg2643z00_396 =
								PROCEDURE_REF
								(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 98 */
								obj_t BgL_arrayz00_398;

								int BgL_offsetz00_399;

								BgL_arrayz00_398 = BgL_arg2643z00_396;
								BgL_offsetz00_399 = (int) (BgL_objzd2classzd2numz00_395);
								{	/* BackEnd/backend.scm 98 */
									long BgL_offsetz00_400;

									BgL_offsetz00_400 =
										((long) (BgL_offsetz00_399) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 98 */
										long BgL_modz00_401;

										{	/* BackEnd/backend.scm 98 */
											int BgL_arg2645z00_402;

											BgL_arg2645z00_402 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 98 */
												long BgL_auxz00_1027;

												BgL_auxz00_1027 = (long) (BgL_arg2645z00_402);
												BgL_modz00_401 = (BgL_offsetz00_400 / BgL_auxz00_1027);
										}}
										{	/* BackEnd/backend.scm 98 */
											long BgL_restz00_403;

											{	/* BackEnd/backend.scm 98 */
												int BgL_arg2644z00_404;

												BgL_arg2644z00_404 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 98 */
													long BgL_auxz00_1031;

													BgL_auxz00_1031 = (long) (BgL_arg2644z00_404);
													BgL_restz00_403 =
														(BgL_offsetz00_400 % BgL_auxz00_1031);
											}}
											{	/* BackEnd/backend.scm 98 */

												BgL_method1661z00_393 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_398,
														(int) (BgL_modz00_401)), (int) (BgL_restz00_403));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1661z00_393) (BgL_method1661z00_393,
					(obj_t) (BgL_bz00_4), BEOA);
			}
		}
	}



/* _backend-initialize! */
	obj_t BGl__backendzd2initializa7ez12z67zzbackend_backendz00(obj_t
		BgL_envz00_643, obj_t BgL_bz00_644)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 98 */
			return
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_644));
		}
	}



/* _backend-initialize!-1660 */
	obj_t BGl__backendzd2initializa7ez12zd21660zb5zzbackend_backendz00(obj_t
		BgL_envz00_676, obj_t BgL_bz00_677)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return BUNSPEC;
		}
	}



/* backend-compile */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt BgL_bz00_6)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 104 */
			{	/* BackEnd/backend.scm 104 */
				obj_t BgL_method1663z00_418;

				{	/* BackEnd/backend.scm 104 */
					BgL_objectz00_bglt BgL_objz00_419;

					BgL_objz00_419 = (BgL_objectz00_bglt) (BgL_bz00_6);
					{	/* BackEnd/backend.scm 104 */
						long BgL_objzd2classzd2numz00_420;

						BgL_objzd2classzd2numz00_420 = BGL_OBJECT_CLASS_NUM(BgL_objz00_419);
						{	/* BackEnd/backend.scm 104 */
							obj_t BgL_arg2643z00_421;

							BgL_arg2643z00_421 =
								PROCEDURE_REF
								(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 104 */
								obj_t BgL_arrayz00_423;

								int BgL_offsetz00_424;

								BgL_arrayz00_423 = BgL_arg2643z00_421;
								BgL_offsetz00_424 = (int) (BgL_objzd2classzd2numz00_420);
								{	/* BackEnd/backend.scm 104 */
									long BgL_offsetz00_425;

									BgL_offsetz00_425 =
										((long) (BgL_offsetz00_424) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 104 */
										long BgL_modz00_426;

										{	/* BackEnd/backend.scm 104 */
											int BgL_arg2645z00_427;

											BgL_arg2645z00_427 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 104 */
												long BgL_auxz00_1051;

												BgL_auxz00_1051 = (long) (BgL_arg2645z00_427);
												BgL_modz00_426 = (BgL_offsetz00_425 / BgL_auxz00_1051);
										}}
										{	/* BackEnd/backend.scm 104 */
											long BgL_restz00_428;

											{	/* BackEnd/backend.scm 104 */
												int BgL_arg2644z00_429;

												BgL_arg2644z00_429 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 104 */
													long BgL_auxz00_1055;

													BgL_auxz00_1055 = (long) (BgL_arg2644z00_429);
													BgL_restz00_428 =
														(BgL_offsetz00_425 % BgL_auxz00_1055);
											}}
											{	/* BackEnd/backend.scm 104 */

												BgL_method1663z00_418 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_423,
														(int) (BgL_modz00_426)), (int) (BgL_restz00_428));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1663z00_418) (BgL_method1663z00_418,
					(obj_t) (BgL_bz00_6), BEOA);
			}
		}
	}



/* _backend-compile */
	obj_t BGl__backendzd2compilezd2zzbackend_backendz00(obj_t BgL_envz00_678,
		obj_t BgL_bz00_679)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 104 */
			return
				BGl_backendzd2compilezd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_679));
		}
	}



/* backend-compile-defa1662 */
	obj_t
		BGl_backendzd2compilezd2defa1662z00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_7)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_7));
		}
	}



/* _backend-compile-defa1662 */
	obj_t BGl__backendzd2compilezd2defa1662z00zzbackend_backendz00(obj_t
		BgL_envz00_680, obj_t BgL_bz00_681)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2compilezd2defa1662z00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_681));
		}
	}



/* backend-compile-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_8)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 109 */
			{	/* BackEnd/backend.scm 109 */
				obj_t BgL_method1665z00_443;

				{	/* BackEnd/backend.scm 109 */
					BgL_objectz00_bglt BgL_objz00_444;

					BgL_objz00_444 = (BgL_objectz00_bglt) (BgL_bz00_8);
					{	/* BackEnd/backend.scm 109 */
						long BgL_objzd2classzd2numz00_445;

						BgL_objzd2classzd2numz00_445 = BGL_OBJECT_CLASS_NUM(BgL_objz00_444);
						{	/* BackEnd/backend.scm 109 */
							obj_t BgL_arg2643z00_446;

							BgL_arg2643z00_446 =
								PROCEDURE_REF
								(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 109 */
								obj_t BgL_arrayz00_448;

								int BgL_offsetz00_449;

								BgL_arrayz00_448 = BgL_arg2643z00_446;
								BgL_offsetz00_449 = (int) (BgL_objzd2classzd2numz00_445);
								{	/* BackEnd/backend.scm 109 */
									long BgL_offsetz00_450;

									BgL_offsetz00_450 =
										((long) (BgL_offsetz00_449) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 109 */
										long BgL_modz00_451;

										{	/* BackEnd/backend.scm 109 */
											int BgL_arg2645z00_452;

											BgL_arg2645z00_452 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 109 */
												long BgL_auxz00_1080;

												BgL_auxz00_1080 = (long) (BgL_arg2645z00_452);
												BgL_modz00_451 = (BgL_offsetz00_450 / BgL_auxz00_1080);
										}}
										{	/* BackEnd/backend.scm 109 */
											long BgL_restz00_453;

											{	/* BackEnd/backend.scm 109 */
												int BgL_arg2644z00_454;

												BgL_arg2644z00_454 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 109 */
													long BgL_auxz00_1084;

													BgL_auxz00_1084 = (long) (BgL_arg2644z00_454);
													BgL_restz00_453 =
														(BgL_offsetz00_450 % BgL_auxz00_1084);
											}}
											{	/* BackEnd/backend.scm 109 */

												BgL_method1665z00_443 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_448,
														(int) (BgL_modz00_451)), (int) (BgL_restz00_453));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1665z00_443) (BgL_method1665z00_443,
					(obj_t) (BgL_bz00_8), BEOA);
			}
		}
	}



/* _backend-compile-functions */
	obj_t BGl__backendzd2compilezd2functionsz00zzbackend_backendz00(obj_t
		BgL_envz00_682, obj_t BgL_bz00_683)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 109 */
			return
				BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_683));
		}
	}



/* backend-compile-func1664 */
	obj_t
		BGl_backendzd2compilezd2func1664z00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_9)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_9));
		}
	}



/* _backend-compile-func1664 */
	obj_t BGl__backendzd2compilezd2func1664z00zzbackend_backendz00(obj_t
		BgL_envz00_684, obj_t BgL_bz00_685)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2compilezd2func1664z00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_685));
		}
	}



/* backend-link */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt BgL_bz00_10,
		obj_t BgL_resultz00_11)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 114 */
			{	/* BackEnd/backend.scm 114 */
				obj_t BgL_method1667z00_468;

				{	/* BackEnd/backend.scm 114 */
					BgL_objectz00_bglt BgL_objz00_469;

					BgL_objz00_469 = (BgL_objectz00_bglt) (BgL_bz00_10);
					{	/* BackEnd/backend.scm 114 */
						long BgL_objzd2classzd2numz00_470;

						BgL_objzd2classzd2numz00_470 = BGL_OBJECT_CLASS_NUM(BgL_objz00_469);
						{	/* BackEnd/backend.scm 114 */
							obj_t BgL_arg2643z00_471;

							BgL_arg2643z00_471 =
								PROCEDURE_REF(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 114 */
								obj_t BgL_arrayz00_473;

								int BgL_offsetz00_474;

								BgL_arrayz00_473 = BgL_arg2643z00_471;
								BgL_offsetz00_474 = (int) (BgL_objzd2classzd2numz00_470);
								{	/* BackEnd/backend.scm 114 */
									long BgL_offsetz00_475;

									BgL_offsetz00_475 =
										((long) (BgL_offsetz00_474) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 114 */
										long BgL_modz00_476;

										{	/* BackEnd/backend.scm 114 */
											int BgL_arg2645z00_477;

											BgL_arg2645z00_477 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 114 */
												long BgL_auxz00_1109;

												BgL_auxz00_1109 = (long) (BgL_arg2645z00_477);
												BgL_modz00_476 = (BgL_offsetz00_475 / BgL_auxz00_1109);
										}}
										{	/* BackEnd/backend.scm 114 */
											long BgL_restz00_478;

											{	/* BackEnd/backend.scm 114 */
												int BgL_arg2644z00_479;

												BgL_arg2644z00_479 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 114 */
													long BgL_auxz00_1113;

													BgL_auxz00_1113 = (long) (BgL_arg2644z00_479);
													BgL_restz00_478 =
														(BgL_offsetz00_475 % BgL_auxz00_1113);
											}}
											{	/* BackEnd/backend.scm 114 */

												BgL_method1667z00_468 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_473,
														(int) (BgL_modz00_476)), (int) (BgL_restz00_478));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1667z00_468) (BgL_method1667z00_468,
					(obj_t) (BgL_bz00_10), BgL_resultz00_11, BEOA);
			}
		}
	}



/* _backend-link */
	obj_t BGl__backendzd2linkzd2zzbackend_backendz00(obj_t BgL_envz00_686,
		obj_t BgL_bz00_687, obj_t BgL_resultz00_688)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 114 */
			return
				BGl_backendzd2linkzd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_687), BgL_resultz00_688);
		}
	}



/* backend-link-default1666 */
	obj_t
		BGl_backendzd2linkzd2default1666z00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_12, obj_t BgL_resultz00_13)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_12));
		}
	}



/* _backend-link-default1666 */
	obj_t BGl__backendzd2linkzd2default1666z00zzbackend_backendz00(obj_t
		BgL_envz00_689, obj_t BgL_bz00_690, obj_t BgL_resultz00_691)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2linkzd2default1666z00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_690), BgL_resultz00_691);
		}
	}



/* backend-subtype? */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_14, obj_t BgL_t1z00_15, obj_t BgL_t2z00_16)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 119 */
			{	/* BackEnd/backend.scm 119 */
				obj_t BgL_method1670z00_493;

				{	/* BackEnd/backend.scm 119 */
					BgL_objectz00_bglt BgL_objz00_494;

					BgL_objz00_494 = (BgL_objectz00_bglt) (BgL_bz00_14);
					{	/* BackEnd/backend.scm 119 */
						long BgL_objzd2classzd2numz00_495;

						BgL_objzd2classzd2numz00_495 = BGL_OBJECT_CLASS_NUM(BgL_objz00_494);
						{	/* BackEnd/backend.scm 119 */
							obj_t BgL_arg2643z00_496;

							BgL_arg2643z00_496 =
								PROCEDURE_REF
								(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 119 */
								obj_t BgL_arrayz00_498;

								int BgL_offsetz00_499;

								BgL_arrayz00_498 = BgL_arg2643z00_496;
								BgL_offsetz00_499 = (int) (BgL_objzd2classzd2numz00_495);
								{	/* BackEnd/backend.scm 119 */
									long BgL_offsetz00_500;

									BgL_offsetz00_500 =
										((long) (BgL_offsetz00_499) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 119 */
										long BgL_modz00_501;

										{	/* BackEnd/backend.scm 119 */
											int BgL_arg2645z00_502;

											BgL_arg2645z00_502 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 119 */
												long BgL_auxz00_1138;

												BgL_auxz00_1138 = (long) (BgL_arg2645z00_502);
												BgL_modz00_501 = (BgL_offsetz00_500 / BgL_auxz00_1138);
										}}
										{	/* BackEnd/backend.scm 119 */
											long BgL_restz00_503;

											{	/* BackEnd/backend.scm 119 */
												int BgL_arg2644z00_504;

												BgL_arg2644z00_504 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 119 */
													long BgL_auxz00_1142;

													BgL_auxz00_1142 = (long) (BgL_arg2644z00_504);
													BgL_restz00_503 =
														(BgL_offsetz00_500 % BgL_auxz00_1142);
											}}
											{	/* BackEnd/backend.scm 119 */

												BgL_method1670z00_493 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_498,
														(int) (BgL_modz00_501)), (int) (BgL_restz00_503));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1670z00_493) (BgL_method1670z00_493,
					(obj_t) (BgL_bz00_14), BgL_t1z00_15, BgL_t2z00_16, BEOA);
			}
		}
	}



/* _backend-subtype? */
	obj_t BGl__backendzd2subtypezf3z21zzbackend_backendz00(obj_t BgL_envz00_692,
		obj_t BgL_bz00_693, obj_t BgL_t1z00_694, obj_t BgL_t2z00_695)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 119 */
			return
				BGl_backendzd2subtypezf3z21zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_693), BgL_t1z00_694, BgL_t2z00_695);
		}
	}



/* backend-subtype?-def1668 */
	obj_t
		BGl_backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00
		(BgL_backendz00_bglt BgL_bz00_17, obj_t BgL_t1z00_18, obj_t BgL_t2z00_19)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 6)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_17));
		}
	}



/* _backend-subtype?-def1668 */
	obj_t BGl__backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00(obj_t
		BgL_envz00_696, obj_t BgL_bz00_697, obj_t BgL_t1z00_698,
		obj_t BgL_t2z00_699)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2subtypezf3zd2def1668zf3zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_697), BgL_t1z00_698, BgL_t2z00_699);
		}
	}



/* backend-cnst-table-name */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_20, int BgL_oz00_21)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 124 */
			{	/* BackEnd/backend.scm 124 */
				obj_t BgL_method1672z00_518;

				{	/* BackEnd/backend.scm 124 */
					BgL_objectz00_bglt BgL_objz00_519;

					BgL_objz00_519 = (BgL_objectz00_bglt) (BgL_bz00_20);
					{	/* BackEnd/backend.scm 124 */
						long BgL_objzd2classzd2numz00_520;

						BgL_objzd2classzd2numz00_520 = BGL_OBJECT_CLASS_NUM(BgL_objz00_519);
						{	/* BackEnd/backend.scm 124 */
							obj_t BgL_arg2643z00_521;

							BgL_arg2643z00_521 =
								PROCEDURE_REF
								(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 124 */
								obj_t BgL_arrayz00_523;

								int BgL_offsetz00_524;

								BgL_arrayz00_523 = BgL_arg2643z00_521;
								BgL_offsetz00_524 = (int) (BgL_objzd2classzd2numz00_520);
								{	/* BackEnd/backend.scm 124 */
									long BgL_offsetz00_525;

									BgL_offsetz00_525 =
										((long) (BgL_offsetz00_524) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 124 */
										long BgL_modz00_526;

										{	/* BackEnd/backend.scm 124 */
											int BgL_arg2645z00_527;

											BgL_arg2645z00_527 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 124 */
												long BgL_auxz00_1167;

												BgL_auxz00_1167 = (long) (BgL_arg2645z00_527);
												BgL_modz00_526 = (BgL_offsetz00_525 / BgL_auxz00_1167);
										}}
										{	/* BackEnd/backend.scm 124 */
											long BgL_restz00_528;

											{	/* BackEnd/backend.scm 124 */
												int BgL_arg2644z00_529;

												BgL_arg2644z00_529 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 124 */
													long BgL_auxz00_1171;

													BgL_auxz00_1171 = (long) (BgL_arg2644z00_529);
													BgL_restz00_528 =
														(BgL_offsetz00_525 % BgL_auxz00_1171);
											}}
											{	/* BackEnd/backend.scm 124 */

												BgL_method1672z00_518 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_523,
														(int) (BgL_modz00_526)), (int) (BgL_restz00_528));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1672z00_518) (BgL_method1672z00_518,
					(obj_t) (BgL_bz00_20), BINT(BgL_oz00_21), BEOA);
			}
		}
	}



/* _backend-cnst-table-name */
	obj_t BGl__backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(obj_t
		BgL_envz00_700, obj_t BgL_bz00_701, obj_t BgL_oz00_702)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 124 */
			return
				BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_701), CINT(BgL_oz00_702));
		}
	}



/* backend-cnst-table-n1671 */
	obj_t
		BGl_backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_bz00_22, obj_t BgL_oz00_23)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 7)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_22));
		}
	}



/* _backend-cnst-table-n1671 */
	obj_t BGl__backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00(obj_t
		BgL_envz00_703, obj_t BgL_bz00_704, obj_t BgL_oz00_705)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2cnstzd2tablezd2n1671zd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_704), BgL_oz00_705);
		}
	}



/* backend-link-objects */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_24, obj_t BgL_lz00_25)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 129 */
			{	/* BackEnd/backend.scm 129 */
				obj_t BgL_method1674z00_543;

				{	/* BackEnd/backend.scm 129 */
					BgL_objectz00_bglt BgL_objz00_544;

					BgL_objz00_544 = (BgL_objectz00_bglt) (BgL_bz00_24);
					{	/* BackEnd/backend.scm 129 */
						long BgL_objzd2classzd2numz00_545;

						BgL_objzd2classzd2numz00_545 = BGL_OBJECT_CLASS_NUM(BgL_objz00_544);
						{	/* BackEnd/backend.scm 129 */
							obj_t BgL_arg2643z00_546;

							BgL_arg2643z00_546 =
								PROCEDURE_REF
								(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 129 */
								obj_t BgL_arrayz00_548;

								int BgL_offsetz00_549;

								BgL_arrayz00_548 = BgL_arg2643z00_546;
								BgL_offsetz00_549 = (int) (BgL_objzd2classzd2numz00_545);
								{	/* BackEnd/backend.scm 129 */
									long BgL_offsetz00_550;

									BgL_offsetz00_550 =
										((long) (BgL_offsetz00_549) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 129 */
										long BgL_modz00_551;

										{	/* BackEnd/backend.scm 129 */
											int BgL_arg2645z00_552;

											BgL_arg2645z00_552 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 129 */
												long BgL_auxz00_1198;

												BgL_auxz00_1198 = (long) (BgL_arg2645z00_552);
												BgL_modz00_551 = (BgL_offsetz00_550 / BgL_auxz00_1198);
										}}
										{	/* BackEnd/backend.scm 129 */
											long BgL_restz00_553;

											{	/* BackEnd/backend.scm 129 */
												int BgL_arg2644z00_554;

												BgL_arg2644z00_554 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 129 */
													long BgL_auxz00_1202;

													BgL_auxz00_1202 = (long) (BgL_arg2644z00_554);
													BgL_restz00_553 =
														(BgL_offsetz00_550 % BgL_auxz00_1202);
											}}
											{	/* BackEnd/backend.scm 129 */

												BgL_method1674z00_543 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_548,
														(int) (BgL_modz00_551)), (int) (BgL_restz00_553));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1674z00_543) (BgL_method1674z00_543,
					(obj_t) (BgL_bz00_24), BgL_lz00_25, BEOA);
			}
		}
	}



/* _backend-link-objects */
	obj_t BGl__backendzd2linkzd2objectsz00zzbackend_backendz00(obj_t
		BgL_envz00_706, obj_t BgL_bz00_707, obj_t BgL_lz00_708)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 129 */
			return
				BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_707), BgL_lz00_708);
		}
	}



/* backend-link-objects1673 */
	obj_t
		BGl_backendzd2linkzd2objects1673z00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_26, obj_t BgL_lz00_27)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 8)),
				BGl_string1733z00zzbackend_backendz00, (obj_t) (BgL_bz00_26));
		}
	}



/* _backend-link-objects1673 */
	obj_t BGl__backendzd2linkzd2objects1673z00zzbackend_backendz00(obj_t
		BgL_envz00_709, obj_t BgL_bz00_710, obj_t BgL_lz00_711)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2linkzd2objects1673z00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_710), BgL_lz00_711);
		}
	}



/* backend-instr-reset-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_bz00_28, obj_t BgL_iz00_29)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 134 */
			{	/* BackEnd/backend.scm 134 */
				obj_t BgL_method1676z00_568;

				{	/* BackEnd/backend.scm 134 */
					BgL_objectz00_bglt BgL_objz00_569;

					BgL_objz00_569 = (BgL_objectz00_bglt) (BgL_bz00_28);
					{	/* BackEnd/backend.scm 134 */
						long BgL_objzd2classzd2numz00_570;

						BgL_objzd2classzd2numz00_570 = BGL_OBJECT_CLASS_NUM(BgL_objz00_569);
						{	/* BackEnd/backend.scm 134 */
							obj_t BgL_arg2643z00_571;

							BgL_arg2643z00_571 =
								PROCEDURE_REF
								(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 134 */
								obj_t BgL_arrayz00_573;

								int BgL_offsetz00_574;

								BgL_arrayz00_573 = BgL_arg2643z00_571;
								BgL_offsetz00_574 = (int) (BgL_objzd2classzd2numz00_570);
								{	/* BackEnd/backend.scm 134 */
									long BgL_offsetz00_575;

									BgL_offsetz00_575 =
										((long) (BgL_offsetz00_574) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 134 */
										long BgL_modz00_576;

										{	/* BackEnd/backend.scm 134 */
											int BgL_arg2645z00_577;

											BgL_arg2645z00_577 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 134 */
												long BgL_auxz00_1227;

												BgL_auxz00_1227 = (long) (BgL_arg2645z00_577);
												BgL_modz00_576 = (BgL_offsetz00_575 / BgL_auxz00_1227);
										}}
										{	/* BackEnd/backend.scm 134 */
											long BgL_restz00_578;

											{	/* BackEnd/backend.scm 134 */
												int BgL_arg2644z00_579;

												BgL_arg2644z00_579 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 134 */
													long BgL_auxz00_1231;

													BgL_auxz00_1231 = (long) (BgL_arg2644z00_579);
													BgL_restz00_578 =
														(BgL_offsetz00_575 % BgL_auxz00_1231);
											}}
											{	/* BackEnd/backend.scm 134 */

												BgL_method1676z00_568 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_573,
														(int) (BgL_modz00_576)), (int) (BgL_restz00_578));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1676z00_568) (BgL_method1676z00_568,
					(obj_t) (BgL_bz00_28), BgL_iz00_29, BEOA);
			}
		}
	}



/* _backend-instr-reset-registers */
	obj_t BGl__backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00(obj_t
		BgL_envz00_712, obj_t BgL_bz00_713, obj_t BgL_iz00_714)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 134 */
			return
				BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_713), BgL_iz00_714);
		}
	}



/* backend-instr-reset-1675 */
	obj_t
		BGl_backendzd2instrzd2resetzd21675zd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_bz00_30, obj_t BgL_iz00_31)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			{	/* BackEnd/backend.scm 136 */
				obj_t BgL_val1_1656z00_291;

				obj_t BgL_val2_1657z00_292;

				obj_t BgL_val3_1658z00_293;

				BgL_val1_1656z00_291 =
					(((BgL_backendz00_bglt) CREF(BgL_bz00_30))->BgL_registersz00);
				BgL_val2_1657z00_292 =
					(((BgL_backendz00_bglt) CREF(BgL_bz00_30))->BgL_registersz00);
				BgL_val3_1658z00_293 =
					(((BgL_backendz00_bglt) CREF(BgL_bz00_30))->BgL_registersz00);
				{	/* BackEnd/backend.scm 136 */
					int BgL_auxz00_1246;

					BgL_auxz00_1246 = (int) (((long) 4));
					BGL_MVALUES_NUMBER_SET(BgL_auxz00_1246);
				}
				{	/* BackEnd/backend.scm 136 */
					int BgL_auxz00_1249;

					BgL_auxz00_1249 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_auxz00_1249, BgL_val1_1656z00_291);
				}
				{	/* BackEnd/backend.scm 136 */
					int BgL_auxz00_1252;

					BgL_auxz00_1252 = (int) (((long) 2));
					BGL_MVALUES_VAL_SET(BgL_auxz00_1252, BgL_val2_1657z00_292);
				}
				{	/* BackEnd/backend.scm 136 */
					int BgL_auxz00_1255;

					BgL_auxz00_1255 = (int) (((long) 3));
					BGL_MVALUES_VAL_SET(BgL_auxz00_1255, BgL_val3_1658z00_293);
				}
				return BNIL;
			}
		}
	}



/* _backend-instr-reset-1675 */
	obj_t BGl__backendzd2instrzd2resetzd21675zd2zzbackend_backendz00(obj_t
		BgL_envz00_715, obj_t BgL_bz00_716, obj_t BgL_iz00_717)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_backendzd2instrzd2resetzd21675zd2zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_716), BgL_iz00_717);
		}
	}



/* backend-check-inlines */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_32)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 141 */
			{	/* BackEnd/backend.scm 141 */
				obj_t BgL_method1678z00_603;

				{	/* BackEnd/backend.scm 141 */
					BgL_objectz00_bglt BgL_objz00_604;

					BgL_objz00_604 = (BgL_objectz00_bglt) (BgL_bz00_32);
					{	/* BackEnd/backend.scm 141 */
						long BgL_objzd2classzd2numz00_605;

						BgL_objzd2classzd2numz00_605 = BGL_OBJECT_CLASS_NUM(BgL_objz00_604);
						{	/* BackEnd/backend.scm 141 */
							obj_t BgL_arg2643z00_606;

							BgL_arg2643z00_606 =
								PROCEDURE_REF
								(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 141 */
								obj_t BgL_arrayz00_608;

								int BgL_offsetz00_609;

								BgL_arrayz00_608 = BgL_arg2643z00_606;
								BgL_offsetz00_609 = (int) (BgL_objzd2classzd2numz00_605);
								{	/* BackEnd/backend.scm 141 */
									long BgL_offsetz00_610;

									BgL_offsetz00_610 =
										((long) (BgL_offsetz00_609) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 141 */
										long BgL_modz00_611;

										{	/* BackEnd/backend.scm 141 */
											int BgL_arg2645z00_612;

											BgL_arg2645z00_612 = (int) (((long) 16));
											{	/* BackEnd/backend.scm 141 */
												long BgL_auxz00_1268;

												BgL_auxz00_1268 = (long) (BgL_arg2645z00_612);
												BgL_modz00_611 = (BgL_offsetz00_610 / BgL_auxz00_1268);
										}}
										{	/* BackEnd/backend.scm 141 */
											long BgL_restz00_613;

											{	/* BackEnd/backend.scm 141 */
												int BgL_arg2644z00_614;

												BgL_arg2644z00_614 = (int) (((long) 16));
												{	/* BackEnd/backend.scm 141 */
													long BgL_auxz00_1272;

													BgL_auxz00_1272 = (long) (BgL_arg2644z00_614);
													BgL_restz00_613 =
														(BgL_offsetz00_610 % BgL_auxz00_1272);
											}}
											{	/* BackEnd/backend.scm 141 */

												BgL_method1678z00_603 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_608,
														(int) (BgL_modz00_611)), (int) (BgL_restz00_613));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1678z00_603) (BgL_method1678z00_603,
					(obj_t) (BgL_bz00_32), BEOA);
			}
		}
	}



/* _backend-check-inlines */
	obj_t BGl__backendzd2checkzd2inlinesz00zzbackend_backendz00(obj_t
		BgL_envz00_718, obj_t BgL_bz00_719)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 141 */
			return
				BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(
				(BgL_backendz00_bglt) (BgL_bz00_719));
		}
	}



/* _backend-check-inline1677 */
	obj_t BGl__backendzd2checkzd2inline1677z00zzbackend_backendz00(obj_t
		BgL_envz00_720, obj_t BgL_bz00_721)
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_backendz00()
	{
		AN_OBJECT;
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1734z00zzbackend_backendz00));
		}
	}

#ifdef __cplusplus
}
#endif
