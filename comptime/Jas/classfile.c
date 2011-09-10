/*===========================================================================*/
/*   (Jas/classfile.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/classfile.scm)*/
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
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_basicz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}               *BgL_basicz00_bglt;

	typedef struct BgL_vectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_vectz00_bglt;

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_typez00_bgl *BgL_tretz00;
		obj_t BgL_targsz00;
	}             *BgL_funz00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_attributez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_typez00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_infoz00;
	}                   *BgL_attributez00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	static obj_t BGl__declaredzd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl__poolzd2fieldzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2funzd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_attributezd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z52thezd2methodzd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl__z52allocatezd2fieldz80zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl__poolzd2doublezd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_makezd2typezd2zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl__methodzf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl__vectzf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2type2279ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl__makezd2basiczd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2typezd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_pourquoi_tant_de_hainez00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_basicz00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_classez00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl__vectzd2nilzd2zzjas_classfilez00(obj_t);
	static obj_t BGl__fillzd2funz12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_basiczd2encodedzd2typez00zzjas_classfilez00 = BUNSPEC;
	extern obj_t BGl_w2z00zzjas_libz00(int);
	static obj_t BGl__fillzd2classfilez12zc0zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__aszd2typezd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_w4z00zzjas_libz00(long);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_classfilezd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	static obj_t BGl__poolzd2intzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__fillzd2fieldzd2orzd2methodz12zc0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2245z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2249z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2253z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funz00_bglt
		BGl_aszd2funtypezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2257z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt
		BGl_fillzd2vectz12zc0zzjas_classfilez00(BgL_vectz00_bglt, obj_t, obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec2261z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__typezd2siza7ez75zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2265z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__aszd2assignzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2269z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_makezd2classfilezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2273z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2methodz12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2277z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2281z83zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__classfilezf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl__fillzd2typez12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_classfilez00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL BgL_basicz00_bglt BGl_basiczd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL int
		BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt, float);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2basic2275ze3zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_fillzd2attributez12zc0zzjas_classfilez00(BgL_attributez00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_funz00zzjas_classfilez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_typez00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl__makezd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2attri2247ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl__poolzd2longzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt, obj_t,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t);
	static obj_t BGl__classezf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl__classezd2nilzd2zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_z52allocatezd2attributez80zzjas_classfilez00();
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_fillzd2methodz12zc0zzjas_classfilez00(BgL_methodz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2attributez80zzjas_classfilez00(obj_t);
	static obj_t BGl__makezd2fieldzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_classfilez00();
	static obj_t BGl__makezd2vectzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_typezd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL int
		BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	static obj_t BGl__poolzd2localzd2methodz00zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_fieldz00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_basicz00_bglt
		BGl_makezd2basiczd2zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl__funzd2nilzd2zzjas_classfilez00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl__fillzd2classez12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2attributez12zc0zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__typezf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_bglt,
		long, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_classfilez00();
	static obj_t BGl__methodzd2nilzd2zzjas_classfilez00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_basicz00_bglt
		BGl_fillzd2basicz12zc0zzjas_classfilez00(BgL_basicz00_bglt, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2vectz80zzjas_classfilez00(obj_t);
	static obj_t BGl__basiczf3zf3zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__poolzd2classzd2byzd2namezd2zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__poolzd2llongzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2attributezd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_z52allocatezd2methodz80zzjas_classfilez00();
	BGL_EXPORTED_DECL int
		BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	static obj_t BGl__attributezf3zf3zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z52thezd2attributezd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classfilezf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_fillzd2typez12zc0zzjas_classfilez00(BgL_typez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2classez80zzjas_classfilez00(obj_t);
	static obj_t BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00 =
		BUNSPEC;
	static obj_t BGl__jaszd2warningzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fieldzd2nilzd2zzjas_classfilez00(obj_t);
	static obj_t BGl__poolzd2stringzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_fillzd2classez12zc0zzjas_classfilez00(BgL_classez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__declaredzd2classzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_makezd2classezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_methodz00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_classfilez00();
	static obj_t BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2vect2271ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2vectzd2nilz52zzjas_classfilez00 = BUNSPEC;
	extern obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T);
	static obj_t BGl__poolzd2elongzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_fillzd2fieldzd2orzd2methodz12zc0zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__poolzd2namezd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt BGl_classezd2nilzd2zzjas_classfilez00();
	static obj_t BGl__makezd2typezd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2fun2267ze3zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_funz00_bglt
		BGl_fillzd2funz12zc0zzjas_classfilez00(BgL_funz00_bglt, obj_t, obj_t,
		BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_methodzf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2orzd2methodz00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl__funzf3zf3zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_fillzd2fieldz12zc0zzjas_classfilez00(BgL_fieldz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fieldzf3zf3zzjas_classfilez00(obj_t, obj_t);
	static long BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_bglt, long,
		obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_makezd2fieldzd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__typezd2nilzd2zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt
		BGl_z52allocatezd2vectz80zzjas_classfilez00();
	static obj_t BGl__jaszd2errorzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__poolzd2interfacezd2methodz00zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_typezd2siza7ez75zzjas_classfilez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_makezd2attributezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_basicz00_bglt
		BGl_z52allocatezd2basicz80zzjas_classfilez00();
	BGL_EXPORTED_DEF obj_t BGl_attributez00zzjas_classfilez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__z52allocatezd2typez80zzjas_classfilez00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_methodz00_bglt BGl_methodzd2nilzd2zzjas_classfilez00();
	static obj_t BGl__basiczd2nilzd2zzjas_classfilez00(obj_t);
	static obj_t BGl__poolzd2classzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2funz80zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	extern obj_t BGl_w4elongz00zzjas_libz00(long);
	BGL_EXPORTED_DECL int
		BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BGL_LONGLONG_T);
	static obj_t BGl__fillzd2basicz12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_poolzd2getzd2specialz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		long, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt, double);
	BGL_EXPORTED_DECL bool_t BGl_attributezf3zf3zzjas_classfilez00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_makezd2funzd2zzjas_classfilez00(obj_t,
		obj_t, BgL_typez00_bglt, obj_t);
	static obj_t BGl__poolzd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2metho2251ze3zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_basiczf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt BGl_makezd2vectzd2zzjas_classfilez00(obj_t,
		obj_t, BgL_typez00_bglt);
	static obj_t BGl__z52allocatezd2basicz80zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classezf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_z52allocatezd2classfilez80zzjas_classfilez00();
	static obj_t BGl__z52allocatezd2classfilez80zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt BGl_vectzd2nilzd2zzjas_classfilez00();
	static obj_t BGl__makezd2classezd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl__declaredzd2fieldzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funz00_bglt
		BGl_z52allocatezd2funz80zzjas_classfilez00();
	static obj_t BGl__makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt, int);
	static obj_t BGl__aszd2funtypezd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2vectz12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00
		(BgL_classfilez00_bglt, BgL_methodz00_bglt, long);
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z52thezd2funzd2nilz52zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl__fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2typez80zzjas_classfilez00();
	BGL_EXPORTED_DECL int
		BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	static obj_t BGl__poolzd2floatzd2zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2basiczd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_vectzf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_z52allocatezd2fieldz80zzjas_classfilez00();
	static obj_t BGl_objectzd2initzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_funzd2nilzd2zzjas_classfilez00();
	static obj_t
		BGl__z52allocatezd2fieldzd2orzd2methodz80zzjas_classfilez00(obj_t);
	static obj_t BGl__z52allocatezd2methodz80zzjas_classfilez00(obj_t);
	static obj_t BGl__attributezd2nilzd2zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funzf3zf3zzjas_classfilez00(obj_t);
	static obj_t BGl__fillzd2fieldz12zc0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2vectzd2typez00zzjas_classfilez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_makezd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2classezd2nilz52zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_fillzd2classfilez12zc0zzjas_classfilez00(BgL_classfilez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2class2243ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl__makezd2classfilezd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_f2z00zzjas_libz00(float);
	extern obj_t BGl_f4z00zzjas_libz00(double);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_classfilez00();
	static obj_t BGl_objectzd2ze3structzd2class2263ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2field2255ze3zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2field2259ze3zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt BGl_fieldzd2nilzd2zzjas_classfilez00();
	static obj_t BGl__classfilezd2nilzd2zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vectz00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL bool_t BGl_fieldzf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_z52allocatezd2fieldzd2orzd2methodz80zzjas_classfilez00();
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_z52allocatezd2classez80zzjas_classfilez00();
	static obj_t __cnst[24];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2classfilez12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2classfil3109za7,
		BGl__fillzd2classfilez12zc0zzjas_classfilez00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2methodza7d3110z00,
		BGl__poolzd2methodzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2siza7ezd2envza7zzjas_classfilez00,
		BgL_bgl__typeza7d2siza7a7eza773111za7,
		BGl__typezd2siza7ez75zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezf3zd2envz21zzjas_classfilez00,
		BgL_bgl__attributeza7f3za7f33112z00, BGl__attributezf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2attributezd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2attribut3113za7,
		BGl__makezd2attributezd2zzjas_classfilez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__basicza7d2nilza7d2za73114za7,
		BGl__basiczd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2vectz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2vectza712za73115za7,
		BGl__fillzd2vectz12zc0zzjas_classfilez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2attributezd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2a3116z00,
		BGl__z52allocatezd2attributez80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2interfacezd2methodzd2envzd2zzjas_classfilez00,
		BgL_bgl__poolza7d2interfac3117za7,
		BGl__poolzd2interfacezd2methodz00zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2vectzd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2v3118z00,
		BGl__z52allocatezd2vectz80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2funz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2funza712za7c3119za7,
		BGl__fillzd2funz12zc0zzjas_classfilez00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2classzd2byzd2reftypezd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2classza7d23120z00,
		BGl__poolzd2classzd2byzd2reftypezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzf3zd2envz21zzjas_classfilez00,
		BgL_bgl__vectza7f3za7f3za7za7jas3121z00, BGl__vectzf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2basiczd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2b3122z00,
		BGl__z52allocatezd2basicz80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classfilezd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2classfil3123za7,
		BGl__makezd2classfilezd2zzjas_classfilez00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2classfilezd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2c3124z00,
		BGl__z52allocatezd2classfilez80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2fieldzd2orzd2methodzd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2f3125z00,
		BGl__z52allocatezd2fieldzd2orzd2methodz80zzjas_classfilez00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2attributez12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2attribut3126za7,
		BGl__fillzd2attributez12zc0zzjas_classfilez00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__typeza7d2nilza7d2za7za73127z00,
		BGl__typezd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2intzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2intza7d2za7za73128z00,
		BGl__poolzd2intzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__attributeza7d2nil3129za7,
		BGl__attributezd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2fieldza7d23130z00, BGl__makezd2fieldzd2zzjas_classfilez00,
		0L, BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczf3zd2envz21zzjas_classfilez00,
		BgL_bgl__basicza7f3za7f3za7za7ja3131z00, BGl__basiczf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2floatzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2floatza7d23132z00, BGl__poolzd2floatzd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2methodz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2methodza713133z00,
		BGl__fillzd2methodz12zc0zzjas_classfilez00, 0L, BUNSPEC, 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3063z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3134z00,
		BGl_objectzd2ze3structzd2class2243ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3065z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73135z00,
		BGl_structzb2objectzd2ze3objec2245z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3067z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3136z00,
		BGl_objectzd2ze3structzd2attri2247ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3068z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73137z00,
		BGl_structzb2objectzd2ze3objec2249z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3070z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73138z00,
		BGl_structzb2objectzd2ze3objec2253z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3069z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3139z00,
		BGl_objectzd2ze3structzd2metho2251ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3071z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3140z00,
		BGl_objectzd2ze3structzd2field2255ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3072z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73141z00,
		BGl_structzb2objectzd2ze3objec2257z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3073z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3142z00,
		BGl_objectzd2ze3structzd2field2259ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3074z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73143z00,
		BGl_structzb2objectzd2ze3objec2261z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3075z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3144z00,
		BGl_objectzd2ze3structzd2class2263ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3076z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73145z00,
		BGl_structzb2objectzd2ze3objec2265z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3077z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3146z00,
		BGl_objectzd2ze3structzd2fun2267ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3078z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73147z00,
		BGl_structzb2objectzd2ze3objec2269z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3080z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73148z00,
		BGl_structzb2objectzd2ze3objec2273z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3079z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3149z00,
		BGl_objectzd2ze3structzd2vect2271ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3081z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3150z00,
		BGl_objectzd2ze3structzd2basic2275ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3082z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73151z00,
		BGl_structzb2objectzd2ze3objec2277z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2classzd2byzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2classza7d23152z00,
		BGl__poolzd2classzd2byzd2namezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3083z00zzjas_classfilez00,
		BgL_bgl_objectza7d2za7e3stru3153z00,
		BGl_objectzd2ze3structzd2type2279ze3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3084z00zzjas_classfilez00,
		BgL_bgl_structza7b2objectza73154z00,
		BGl_structzb2objectzd2ze3objec2281z83zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2classez12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2classeza713155z00,
		BGl__fillzd2classez12zc0zzjas_classfilez00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__funza7d2nilza7d2za7za7j3156z00,
		BGl__funzd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2nameza7d2za73157za7,
		BGl__poolzd2namezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2typezd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2typeza7d2za73158za7,
		BGl__makezd2typezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2funzd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2f3159z00,
		BGl__z52allocatezd2funz80zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__fieldza7d2nilza7d2za73160za7,
		BGl__fieldzd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2fieldzd2orzd2methodz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2fieldza7d23161z00,
		BGl__fillzd2fieldzd2orzd2methodz12zc0zzjas_classfilez00, 0L, BUNSPEC, 10);
	      DEFINE_STRING(BGl_string3041z00zzjas_classfilez00,
		BgL_bgl_string3041za700za7za7j3162za7, "V", 1);
	      DEFINE_STRING(BGl_string3042z00zzjas_classfilez00,
		BgL_bgl_string3042za700za7za7j3163za7, "Z", 1);
	      DEFINE_STRING(BGl_string3043z00zzjas_classfilez00,
		BgL_bgl_string3043za700za7za7j3164za7, "C", 1);
	      DEFINE_STRING(BGl_string3044z00zzjas_classfilez00,
		BgL_bgl_string3044za700za7za7j3165za7, "B", 1);
	      DEFINE_STRING(BGl_string3045z00zzjas_classfilez00,
		BgL_bgl_string3045za700za7za7j3166za7, "S", 1);
	      DEFINE_STRING(BGl_string3046z00zzjas_classfilez00,
		BgL_bgl_string3046za700za7za7j3167za7, "I", 1);
	      DEFINE_STRING(BGl_string3047z00zzjas_classfilez00,
		BgL_bgl_string3047za700za7za7j3168za7, "J", 1);
	      DEFINE_STRING(BGl_string3048z00zzjas_classfilez00,
		BgL_bgl_string3048za700za7za7j3169za7, "F", 1);
	      DEFINE_STRING(BGl_string3050z00zzjas_classfilez00,
		BgL_bgl_string3050za700za7za7j3170za7, "[B", 2);
	      DEFINE_STRING(BGl_string3049z00zzjas_classfilez00,
		BgL_bgl_string3049za700za7za7j3171za7, "D", 1);
	      DEFINE_STRING(BGl_string3051z00zzjas_classfilez00,
		BgL_bgl_string3051za700za7za7j3172za7, " WARNING ** : ", 14);
	      DEFINE_STRING(BGl_string3052z00zzjas_classfilez00,
		BgL_bgl_string3052za700za7za7j3173za7, " ", 1);
	      DEFINE_STRING(BGl_string3053z00zzjas_classfilez00,
		BgL_bgl_string3053za700za7za7j3174za7, "bad type", 8);
	      DEFINE_STRING(BGl_string3054z00zzjas_classfilez00,
		BgL_bgl_string3054za700za7za7j3175za7, "[", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2errorzd2envz00zzjas_classfilez00,
		BgL_bgl__jasza7d2errorza7d2za73176za7,
		BGl__jaszd2errorzd2zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3055z00zzjas_classfilez00,
		BgL_bgl_string3055za700za7za7j3177za7, ")", 1);
	      DEFINE_STRING(BGl_string3056z00zzjas_classfilez00,
		BgL_bgl_string3056za700za7za7j3178za7, "(", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzf3zd2envz21zzjas_classfilez00,
		BgL_bgl__fieldza7d2orza7d2me3179z00,
		BGl__fieldzd2orzd2methodzf3zf3zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3057z00zzjas_classfilez00,
		BgL_bgl_string3057za700za7za7j3180za7, "redefinition of global", 22);
	      DEFINE_STRING(BGl_string3058z00zzjas_classfilez00,
		BgL_bgl_string3058za700za7za7j3181za7, "undefined global name", 21);
	      DEFINE_STRING(BGl_string3060z00zzjas_classfilez00,
		BgL_bgl_string3060za700za7za7j3182za7, "not a field", 11);
	      DEFINE_STRING(BGl_string3059z00zzjas_classfilez00,
		BgL_bgl_string3059za700za7za7j3183za7, "not a class", 11);
	      DEFINE_STRING(BGl_string3061z00zzjas_classfilez00,
		BgL_bgl_string3061za700za7za7j3184za7, "not a method", 12);
	      DEFINE_STRING(BGl_string3062z00zzjas_classfilez00,
		BgL_bgl_string3062za700za7za7j3185za7, "", 0);
	      DEFINE_STRING(BGl_string3064z00zzjas_classfilez00,
		BgL_bgl_string3064za700za7za7j3186za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3066z00zzjas_classfilez00,
		BgL_bgl_string3066za700za7za7j3187za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__vectza7d2nilza7d2za7za73188z00,
		BGl__vectzd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2basiczd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2basicza7d23189z00, BGl__makezd2basiczd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3085z00zzjas_classfilez00,
		BgL_bgl_string3085za700za7za7j3190za7, "jas_classfile", 13);
	      DEFINE_STRING(BGl_string3086z00zzjas_classfilez00,
		BgL_bgl_string3086za700za7za7j3191za7,
		"classfile attribute method field field-or-method classe fun vect basic type (5 6) function vector jas-global-value (jas-error classfile msg arg) double float long int short byte char boolean void ",
		196);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declaredzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl__declaredza7d2meth3192za7,
		BGl__declaredzd2methodzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2llongzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2llongza7d23193z00, BGl__poolzd2llongzd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzf3zd2envz21zzjas_classfilez00,
		BgL_bgl__fieldza7f3za7f3za7za7ja3194z00, BGl__fieldzf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2basicz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2basicza7123195z00,
		BGl__fillzd2basicz12zc0zzjas_classfilez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2fieldzd2orzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2fieldza7d23196z00,
		BGl__makezd2fieldzd2orzd2methodzd2zzjas_classfilez00, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2typezd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2t3197z00,
		BGl__z52allocatezd2typez80zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2classzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2classza7d23198z00, BGl__poolzd2classzd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2doublezd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2doubleza7d3199z00,
		BGl__poolzd2doublezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2fieldza7d23200z00, BGl__poolzd2fieldzd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2typez12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2typeza712za73201za7,
		BGl__fillzd2typez12zc0zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2assignzd2envz00zzjas_classfilez00,
		BgL_bgl__asza7d2assignza7d2za73202za7,
		BGl__aszd2assignzd2zzjas_classfilez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2classezd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2c3203z00,
		BGl__z52allocatezd2classez80zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__methodza7d2nilza7d23204z00, BGl__methodzd2nilzd2zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2typezd2envz00zzjas_classfilez00,
		BgL_bgl__asza7d2typeza7d2za7za7j3205z00,
		BGl__aszd2typezd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezf3zd2envz21zzjas_classfilez00,
		BgL_bgl__typeza7f3za7f3za7za7jas3206z00, BGl__typezf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2localzd2methodzd2envzd2zzjas_classfilez00,
		BgL_bgl__poolza7d2localza7d23207z00,
		BGl__poolzd2localzd2methodz00zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzf3zd2envz21zzjas_classfilez00,
		BgL_bgl__funza7f3za7f3za7za7jas_3208z00, BGl__funzf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2methodzd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2m3209z00,
		BGl__z52allocatezd2methodz80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classezd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2classeza7d3210z00,
		BGl__makezd2classezd2zzjas_classfilez00, 0L, BUNSPEC, 5);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2elongzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2elongza7d23211z00, BGl__poolzd2elongzd2zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezf3zd2envz21zzjas_classfilez00,
		BgL_bgl__classfileza7f3za7f33212z00, BGl__classfilezf3zf3zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2fieldz12zd2envz12zzjas_classfilez00,
		BgL_bgl__fillza7d2fieldza7123213z00,
		BGl__fillzd2fieldz12zc0zzjas_classfilez00, 0L, BUNSPEC, 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2funtypezd2envz00zzjas_classfilez00,
		BgL_bgl__asza7d2funtypeza7d23214z00, BGl__aszd2funtypezd2zzjas_classfilez00,
		0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__classeza7d2nilza7d23215z00, BGl__classezd2nilzd2zzjas_classfilez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2methodza7d3216z00,
		BGl__makezd2methodzd2zzjas_classfilez00, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__classfileza7d2nil3217za7,
		BGl__classfilezd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declaredzd2classzd2envz00zzjas_classfilez00,
		BgL_bgl__declaredza7d2clas3218za7,
		BGl__declaredzd2classzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declaredzd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl__declaredza7d2fiel3219za7,
		BGl__declaredzd2fieldzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2vectza7d2za73220za7,
		BGl__makezd2vectzd2zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzf3zd2envz21zzjas_classfilez00,
		BgL_bgl__methodza7f3za7f3za7za7j3221z00,
		BGl__methodzf3zf3zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2warningzd2envz00zzjas_classfilez00,
		BgL_bgl__jasza7d2warningza7d3222z00,
		BGl__jaszd2warningzd2zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2longzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2longza7d2za73223za7,
		BGl__poolzd2longzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2fieldzd2envz52zzjas_classfilez00,
		BgL_bgl__za752allocateza7d2f3224z00,
		BGl__z52allocatezd2fieldz80zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl__fieldza7d2orza7d2me3225z00,
		BGl__fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezf3zd2envz21zzjas_classfilez00,
		BgL_bgl__classeza7f3za7f3za7za7j3226z00,
		BGl__classezf3zf3zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2stringzd2envz00zzjas_classfilez00,
		BgL_bgl__poolza7d2stringza7d3227z00,
		BGl__poolzd2stringzd2zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2funzd2envz00zzjas_classfilez00,
		BgL_bgl__makeza7d2funza7d2za7za73228z00,
		BGl__makezd2funzd2zzjas_classfilez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long
		BgL_checksumz00_3112, char *BgL_fromz00_3113)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_classfilez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_classfilez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_classfilez00();
					BGl_cnstzd2initzd2zzjas_classfilez00();
					BGl_importedzd2moduleszd2initz00zzjas_classfilez00();
					BGl_objectzd2initzd2zzjas_classfilez00();
					BGl_methodzd2initzd2zzjas_classfilez00();
					BGl_toplevelzd2initzd2zzjas_classfilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_classfile");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_classfile");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 1 */
				obj_t BgL_cportz00_2845;

				BgL_cportz00_2845 =
					bgl_open_input_string(BGl_string3086z00zzjas_classfilez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2846;

					BgL_iz00_2846 = ((long) 23);
				BgL_loopz00_2847:
					if ((BgL_iz00_2846 == ((long) -1)))
						{	/* Jas/classfile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/classfile.scm 1 */
							{	/* Jas/classfile.scm 1 */
								obj_t BgL_arg3088z00_2849;

								{	/* Jas/classfile.scm 1 */

									{	/* Jas/classfile.scm 1 */
										obj_t BgL_locationz00_2851;

										BgL_locationz00_2851 = BBOOL(((bool_t) 0));
										{	/* Jas/classfile.scm 1 */

											BgL_arg3088z00_2849 =
												BGl_readz00zz__readerz00(BgL_cportz00_2845,
												BgL_locationz00_2851);
										}
									}
								}
								{	/* Jas/classfile.scm 1 */
									int BgL_auxz00_3138;

									BgL_auxz00_3138 = (int) (BgL_iz00_2846);
									CNST_TABLE_SET(BgL_auxz00_3138, BgL_arg3088z00_2849);
							}}
							{	/* Jas/classfile.scm 1 */
								int BgL_auxz00_2852;

								BgL_auxz00_2852 = (int) ((BgL_iz00_2846 - ((long) 1)));
								{
									long BgL_iz00_3143;

									BgL_iz00_3143 = (long) (BgL_auxz00_2852);
									BgL_iz00_2846 = BgL_iz00_3143;
									goto BgL_loopz00_2847;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 96 */
				obj_t BgL_arg2282z00_427;

				obj_t BgL_arg2285z00_428;

				{	/* Jas/classfile.scm 96 */
					obj_t BgL_arg2286z00_429;

					BgL_basicz00_bglt BgL_arg2290z00_430;

					BgL_arg2286z00_429 = CNST_TABLE_REF(((long) 0));
					{	/* Jas/classfile.scm 96 */
						BgL_basicz00_bglt BgL_res2950z00_1151;

						{	/* Jas/classfile.scm 96 */
							BgL_basicz00_bglt BgL_new1544z00_1139;

							{	/* Jas/classfile.scm 96 */
								BgL_basicz00_bglt BgL_res2948z00_1144;

								{	/* Jas/classfile.scm 96 */
									BgL_basicz00_bglt BgL_new1552z00_1140;

									BgL_new1552z00_1140 =
										((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_basicz00_bgl))));
									BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
										(BgL_new1552z00_1140),
										BGl_classzd2numzd2zz__objectz00
										(BGl_basicz00zzjas_classfilez00));
									{	/* Jas/classfile.scm 96 */
										BgL_objectz00_bglt BgL_auxz00_3150;

										BgL_auxz00_3150 =
											(BgL_objectz00_bglt) (BgL_new1552z00_1140);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3150, BFALSE);
									}
									BgL_res2948z00_1144 = BgL_new1552z00_1140;
								}
								BgL_new1544z00_1139 = BgL_res2948z00_1144;
							}
							{	/* Jas/classfile.scm 96 */
								BgL_basicz00_bglt BgL_res2949z00_1150;

								{	/* Jas/classfile.scm 96 */
									BgL_basicz00_bglt BgL_new1548z00_1145;

									BgL_new1548z00_1145 = BgL_new1544z00_1139;
									{	/* Jas/classfile.scm 96 */
										obj_t BgL_code1546z00_1148;

										obj_t BgL_vect1547z00_1149;

										BgL_code1546z00_1148 = BGl_string3041z00zzjas_classfilez00;
										BgL_vect1547z00_1149 = BFALSE;
										((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1145))->
												BgL_codez00) = ((obj_t) BgL_code1546z00_1148), BUNSPEC);
										((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1145))->
												BgL_vectz00) = ((obj_t) BgL_vect1547z00_1149), BUNSPEC);
										BgL_res2949z00_1150 = BgL_new1548z00_1145;
								}} BgL_res2949z00_1150;
							}
							BgL_res2950z00_1151 = BgL_new1544z00_1139;
						}
						BgL_arg2290z00_430 = BgL_res2950z00_1151;
					}
					BgL_arg2282z00_427 =
						MAKE_PAIR(BgL_arg2286z00_429, (obj_t) (BgL_arg2290z00_430));
				}
				{	/* Jas/classfile.scm 97 */
					obj_t BgL_arg2295z00_431;

					obj_t BgL_arg2297z00_432;

					obj_t BgL_arg2305z00_433;

					obj_t BgL_arg2312z00_434;

					obj_t BgL_arg2318z00_435;

					obj_t BgL_arg2325z00_436;

					obj_t BgL_arg2331z00_437;

					obj_t BgL_arg2338z00_438;

					{	/* Jas/classfile.scm 97 */
						obj_t BgL_arg2396z00_448;

						BgL_basicz00_bglt BgL_arg2403z00_449;

						BgL_arg2396z00_448 = CNST_TABLE_REF(((long) 1));
						{	/* Jas/classfile.scm 97 */
							BgL_basicz00_bglt BgL_res2953z00_1166;

							{	/* Jas/classfile.scm 97 */
								BgL_basicz00_bglt BgL_new1544z00_1154;

								{	/* Jas/classfile.scm 97 */
									BgL_basicz00_bglt BgL_res2951z00_1159;

									{	/* Jas/classfile.scm 97 */
										BgL_basicz00_bglt BgL_new1552z00_1155;

										BgL_new1552z00_1155 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1155),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 97 */
											BgL_objectz00_bglt BgL_auxz00_3162;

											BgL_auxz00_3162 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1155);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3162, BFALSE);
										}
										BgL_res2951z00_1159 = BgL_new1552z00_1155;
									}
									BgL_new1544z00_1154 = BgL_res2951z00_1159;
								}
								{	/* Jas/classfile.scm 97 */
									BgL_basicz00_bglt BgL_res2952z00_1165;

									{	/* Jas/classfile.scm 97 */
										BgL_basicz00_bglt BgL_new1548z00_1160;

										BgL_new1548z00_1160 = BgL_new1544z00_1154;
										{	/* Jas/classfile.scm 97 */
											obj_t BgL_code1546z00_1163;

											obj_t BgL_vect1547z00_1164;

											BgL_code1546z00_1163 =
												BGl_string3042z00zzjas_classfilez00;
											BgL_vect1547z00_1164 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1160))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1163), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1160))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1164), BUNSPEC);
											BgL_res2952z00_1165 = BgL_new1548z00_1160;
									}} BgL_res2952z00_1165;
								}
								BgL_res2953z00_1166 = BgL_new1544z00_1154;
							}
							BgL_arg2403z00_449 = BgL_res2953z00_1166;
						}
						BgL_arg2295z00_431 =
							MAKE_PAIR(BgL_arg2396z00_448, (obj_t) (BgL_arg2403z00_449));
					}
					{	/* Jas/classfile.scm 98 */
						obj_t BgL_arg2409z00_450;

						BgL_basicz00_bglt BgL_arg2416z00_451;

						BgL_arg2409z00_450 = CNST_TABLE_REF(((long) 2));
						{	/* Jas/classfile.scm 98 */
							BgL_basicz00_bglt BgL_res2956z00_1181;

							{	/* Jas/classfile.scm 98 */
								BgL_basicz00_bglt BgL_new1544z00_1169;

								{	/* Jas/classfile.scm 98 */
									BgL_basicz00_bglt BgL_res2954z00_1174;

									{	/* Jas/classfile.scm 98 */
										BgL_basicz00_bglt BgL_new1552z00_1170;

										BgL_new1552z00_1170 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1170),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 98 */
											BgL_objectz00_bglt BgL_auxz00_3174;

											BgL_auxz00_3174 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1170);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3174, BFALSE);
										}
										BgL_res2954z00_1174 = BgL_new1552z00_1170;
									}
									BgL_new1544z00_1169 = BgL_res2954z00_1174;
								}
								{	/* Jas/classfile.scm 98 */
									BgL_basicz00_bglt BgL_res2955z00_1180;

									{	/* Jas/classfile.scm 98 */
										BgL_basicz00_bglt BgL_new1548z00_1175;

										BgL_new1548z00_1175 = BgL_new1544z00_1169;
										{	/* Jas/classfile.scm 98 */
											obj_t BgL_code1546z00_1178;

											obj_t BgL_vect1547z00_1179;

											BgL_code1546z00_1178 =
												BGl_string3043z00zzjas_classfilez00;
											BgL_vect1547z00_1179 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1175))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1178), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1175))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1179), BUNSPEC);
											BgL_res2955z00_1180 = BgL_new1548z00_1175;
									}} BgL_res2955z00_1180;
								}
								BgL_res2956z00_1181 = BgL_new1544z00_1169;
							}
							BgL_arg2416z00_451 = BgL_res2956z00_1181;
						}
						BgL_arg2297z00_432 =
							MAKE_PAIR(BgL_arg2409z00_450, (obj_t) (BgL_arg2416z00_451));
					}
					{	/* Jas/classfile.scm 99 */
						obj_t BgL_arg2422z00_452;

						BgL_basicz00_bglt BgL_arg2429z00_453;

						BgL_arg2422z00_452 = CNST_TABLE_REF(((long) 3));
						{	/* Jas/classfile.scm 99 */
							BgL_basicz00_bglt BgL_res2959z00_1196;

							{	/* Jas/classfile.scm 99 */
								BgL_basicz00_bglt BgL_new1544z00_1184;

								{	/* Jas/classfile.scm 99 */
									BgL_basicz00_bglt BgL_res2957z00_1189;

									{	/* Jas/classfile.scm 99 */
										BgL_basicz00_bglt BgL_new1552z00_1185;

										BgL_new1552z00_1185 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1185),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 99 */
											BgL_objectz00_bglt BgL_auxz00_3186;

											BgL_auxz00_3186 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1185);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3186, BFALSE);
										}
										BgL_res2957z00_1189 = BgL_new1552z00_1185;
									}
									BgL_new1544z00_1184 = BgL_res2957z00_1189;
								}
								{	/* Jas/classfile.scm 99 */
									BgL_basicz00_bglt BgL_res2958z00_1195;

									{	/* Jas/classfile.scm 99 */
										BgL_basicz00_bglt BgL_new1548z00_1190;

										BgL_new1548z00_1190 = BgL_new1544z00_1184;
										{	/* Jas/classfile.scm 99 */
											obj_t BgL_code1546z00_1193;

											obj_t BgL_vect1547z00_1194;

											BgL_code1546z00_1193 =
												BGl_string3044z00zzjas_classfilez00;
											BgL_vect1547z00_1194 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1190))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1193), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1190))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1194), BUNSPEC);
											BgL_res2958z00_1195 = BgL_new1548z00_1190;
									}} BgL_res2958z00_1195;
								}
								BgL_res2959z00_1196 = BgL_new1544z00_1184;
							}
							BgL_arg2429z00_453 = BgL_res2959z00_1196;
						}
						BgL_arg2305z00_433 =
							MAKE_PAIR(BgL_arg2422z00_452, (obj_t) (BgL_arg2429z00_453));
					}
					{	/* Jas/classfile.scm 100 */
						obj_t BgL_arg2430z00_454;

						BgL_basicz00_bglt BgL_arg2431z00_455;

						BgL_arg2430z00_454 = CNST_TABLE_REF(((long) 4));
						{	/* Jas/classfile.scm 100 */
							BgL_basicz00_bglt BgL_res2962z00_1211;

							{	/* Jas/classfile.scm 100 */
								BgL_basicz00_bglt BgL_new1544z00_1199;

								{	/* Jas/classfile.scm 100 */
									BgL_basicz00_bglt BgL_res2960z00_1204;

									{	/* Jas/classfile.scm 100 */
										BgL_basicz00_bglt BgL_new1552z00_1200;

										BgL_new1552z00_1200 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1200),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 100 */
											BgL_objectz00_bglt BgL_auxz00_3198;

											BgL_auxz00_3198 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1200);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3198, BFALSE);
										}
										BgL_res2960z00_1204 = BgL_new1552z00_1200;
									}
									BgL_new1544z00_1199 = BgL_res2960z00_1204;
								}
								{	/* Jas/classfile.scm 100 */
									BgL_basicz00_bglt BgL_res2961z00_1210;

									{	/* Jas/classfile.scm 100 */
										BgL_basicz00_bglt BgL_new1548z00_1205;

										BgL_new1548z00_1205 = BgL_new1544z00_1199;
										{	/* Jas/classfile.scm 100 */
											obj_t BgL_code1546z00_1208;

											obj_t BgL_vect1547z00_1209;

											BgL_code1546z00_1208 =
												BGl_string3045z00zzjas_classfilez00;
											BgL_vect1547z00_1209 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1205))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1208), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1205))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1209), BUNSPEC);
											BgL_res2961z00_1210 = BgL_new1548z00_1205;
									}} BgL_res2961z00_1210;
								}
								BgL_res2962z00_1211 = BgL_new1544z00_1199;
							}
							BgL_arg2431z00_455 = BgL_res2962z00_1211;
						}
						BgL_arg2312z00_434 =
							MAKE_PAIR(BgL_arg2430z00_454, (obj_t) (BgL_arg2431z00_455));
					}
					{	/* Jas/classfile.scm 101 */
						obj_t BgL_arg2437z00_456;

						BgL_basicz00_bglt BgL_arg2438z00_457;

						BgL_arg2437z00_456 = CNST_TABLE_REF(((long) 5));
						{	/* Jas/classfile.scm 101 */
							BgL_basicz00_bglt BgL_res2965z00_1226;

							{	/* Jas/classfile.scm 101 */
								BgL_basicz00_bglt BgL_new1544z00_1214;

								{	/* Jas/classfile.scm 101 */
									BgL_basicz00_bglt BgL_res2963z00_1219;

									{	/* Jas/classfile.scm 101 */
										BgL_basicz00_bglt BgL_new1552z00_1215;

										BgL_new1552z00_1215 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1215),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 101 */
											BgL_objectz00_bglt BgL_auxz00_3210;

											BgL_auxz00_3210 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1215);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3210, BFALSE);
										}
										BgL_res2963z00_1219 = BgL_new1552z00_1215;
									}
									BgL_new1544z00_1214 = BgL_res2963z00_1219;
								}
								{	/* Jas/classfile.scm 101 */
									BgL_basicz00_bglt BgL_res2964z00_1225;

									{	/* Jas/classfile.scm 101 */
										BgL_basicz00_bglt BgL_new1548z00_1220;

										BgL_new1548z00_1220 = BgL_new1544z00_1214;
										{	/* Jas/classfile.scm 101 */
											obj_t BgL_code1546z00_1223;

											obj_t BgL_vect1547z00_1224;

											BgL_code1546z00_1223 =
												BGl_string3046z00zzjas_classfilez00;
											BgL_vect1547z00_1224 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1220))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1223), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1220))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1224), BUNSPEC);
											BgL_res2964z00_1225 = BgL_new1548z00_1220;
									}} BgL_res2964z00_1225;
								}
								BgL_res2965z00_1226 = BgL_new1544z00_1214;
							}
							BgL_arg2438z00_457 = BgL_res2965z00_1226;
						}
						BgL_arg2318z00_435 =
							MAKE_PAIR(BgL_arg2437z00_456, (obj_t) (BgL_arg2438z00_457));
					}
					{	/* Jas/classfile.scm 102 */
						obj_t BgL_arg2444z00_458;

						BgL_basicz00_bglt BgL_arg2445z00_459;

						BgL_arg2444z00_458 = CNST_TABLE_REF(((long) 6));
						{	/* Jas/classfile.scm 102 */
							BgL_basicz00_bglt BgL_res2968z00_1241;

							{	/* Jas/classfile.scm 102 */
								BgL_basicz00_bglt BgL_new1544z00_1229;

								{	/* Jas/classfile.scm 102 */
									BgL_basicz00_bglt BgL_res2966z00_1234;

									{	/* Jas/classfile.scm 102 */
										BgL_basicz00_bglt BgL_new1552z00_1230;

										BgL_new1552z00_1230 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1230),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 102 */
											BgL_objectz00_bglt BgL_auxz00_3222;

											BgL_auxz00_3222 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1230);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3222, BFALSE);
										}
										BgL_res2966z00_1234 = BgL_new1552z00_1230;
									}
									BgL_new1544z00_1229 = BgL_res2966z00_1234;
								}
								{	/* Jas/classfile.scm 102 */
									BgL_basicz00_bglt BgL_res2967z00_1240;

									{	/* Jas/classfile.scm 102 */
										BgL_basicz00_bglt BgL_new1548z00_1235;

										BgL_new1548z00_1235 = BgL_new1544z00_1229;
										{	/* Jas/classfile.scm 102 */
											obj_t BgL_code1546z00_1238;

											obj_t BgL_vect1547z00_1239;

											BgL_code1546z00_1238 =
												BGl_string3047z00zzjas_classfilez00;
											BgL_vect1547z00_1239 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1235))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1238), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1235))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1239), BUNSPEC);
											BgL_res2967z00_1240 = BgL_new1548z00_1235;
									}} BgL_res2967z00_1240;
								}
								BgL_res2968z00_1241 = BgL_new1544z00_1229;
							}
							BgL_arg2445z00_459 = BgL_res2968z00_1241;
						}
						BgL_arg2325z00_436 =
							MAKE_PAIR(BgL_arg2444z00_458, (obj_t) (BgL_arg2445z00_459));
					}
					{	/* Jas/classfile.scm 103 */
						obj_t BgL_arg2448z00_460;

						BgL_basicz00_bglt BgL_arg2451z00_461;

						BgL_arg2448z00_460 = CNST_TABLE_REF(((long) 7));
						{	/* Jas/classfile.scm 103 */
							BgL_basicz00_bglt BgL_res2971z00_1256;

							{	/* Jas/classfile.scm 103 */
								BgL_basicz00_bglt BgL_new1544z00_1244;

								{	/* Jas/classfile.scm 103 */
									BgL_basicz00_bglt BgL_res2969z00_1249;

									{	/* Jas/classfile.scm 103 */
										BgL_basicz00_bglt BgL_new1552z00_1245;

										BgL_new1552z00_1245 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1245),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 103 */
											BgL_objectz00_bglt BgL_auxz00_3234;

											BgL_auxz00_3234 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1245);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3234, BFALSE);
										}
										BgL_res2969z00_1249 = BgL_new1552z00_1245;
									}
									BgL_new1544z00_1244 = BgL_res2969z00_1249;
								}
								{	/* Jas/classfile.scm 103 */
									BgL_basicz00_bglt BgL_res2970z00_1255;

									{	/* Jas/classfile.scm 103 */
										BgL_basicz00_bglt BgL_new1548z00_1250;

										BgL_new1548z00_1250 = BgL_new1544z00_1244;
										{	/* Jas/classfile.scm 103 */
											obj_t BgL_code1546z00_1253;

											obj_t BgL_vect1547z00_1254;

											BgL_code1546z00_1253 =
												BGl_string3048z00zzjas_classfilez00;
											BgL_vect1547z00_1254 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1250))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1253), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1250))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1254), BUNSPEC);
											BgL_res2970z00_1255 = BgL_new1548z00_1250;
									}} BgL_res2970z00_1255;
								}
								BgL_res2971z00_1256 = BgL_new1544z00_1244;
							}
							BgL_arg2451z00_461 = BgL_res2971z00_1256;
						}
						BgL_arg2331z00_437 =
							MAKE_PAIR(BgL_arg2448z00_460, (obj_t) (BgL_arg2451z00_461));
					}
					{	/* Jas/classfile.scm 104 */
						obj_t BgL_arg2452z00_462;

						BgL_basicz00_bglt BgL_arg2453z00_463;

						BgL_arg2452z00_462 = CNST_TABLE_REF(((long) 8));
						{	/* Jas/classfile.scm 104 */
							BgL_basicz00_bglt BgL_res2974z00_1271;

							{	/* Jas/classfile.scm 104 */
								BgL_basicz00_bglt BgL_new1544z00_1259;

								{	/* Jas/classfile.scm 104 */
									BgL_basicz00_bglt BgL_res2972z00_1264;

									{	/* Jas/classfile.scm 104 */
										BgL_basicz00_bglt BgL_new1552z00_1260;

										BgL_new1552z00_1260 =
											((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1552z00_1260),
											BGl_classzd2numzd2zz__objectz00
											(BGl_basicz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 104 */
											BgL_objectz00_bglt BgL_auxz00_3246;

											BgL_auxz00_3246 =
												(BgL_objectz00_bglt) (BgL_new1552z00_1260);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3246, BFALSE);
										}
										BgL_res2972z00_1264 = BgL_new1552z00_1260;
									}
									BgL_new1544z00_1259 = BgL_res2972z00_1264;
								}
								{	/* Jas/classfile.scm 104 */
									BgL_basicz00_bglt BgL_res2973z00_1270;

									{	/* Jas/classfile.scm 104 */
										BgL_basicz00_bglt BgL_new1548z00_1265;

										BgL_new1548z00_1265 = BgL_new1544z00_1259;
										{	/* Jas/classfile.scm 104 */
											obj_t BgL_code1546z00_1268;

											obj_t BgL_vect1547z00_1269;

											BgL_code1546z00_1268 =
												BGl_string3049z00zzjas_classfilez00;
											BgL_vect1547z00_1269 = BFALSE;
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1265))->
													BgL_codez00) =
												((obj_t) BgL_code1546z00_1268), BUNSPEC);
											((((BgL_basicz00_bglt) CREF(BgL_new1548z00_1265))->
													BgL_vectz00) =
												((obj_t) BgL_vect1547z00_1269), BUNSPEC);
											BgL_res2973z00_1270 = BgL_new1548z00_1265;
									}} BgL_res2973z00_1270;
								}
								BgL_res2974z00_1271 = BgL_new1544z00_1259;
							}
							BgL_arg2453z00_463 = BgL_res2974z00_1271;
						}
						BgL_arg2338z00_438 =
							MAKE_PAIR(BgL_arg2452z00_462, (obj_t) (BgL_arg2453z00_463));
					}
					{	/* Jas/classfile.scm 96 */
						obj_t BgL_list2345z00_440;

						{	/* Jas/classfile.scm 96 */
							obj_t BgL_arg2351z00_441;

							{	/* Jas/classfile.scm 96 */
								obj_t BgL_arg2357z00_442;

								{	/* Jas/classfile.scm 96 */
									obj_t BgL_arg2364z00_443;

									{	/* Jas/classfile.scm 96 */
										obj_t BgL_arg2370z00_444;

										{	/* Jas/classfile.scm 96 */
											obj_t BgL_arg2377z00_445;

											{	/* Jas/classfile.scm 96 */
												obj_t BgL_arg2383z00_446;

												{	/* Jas/classfile.scm 96 */
													obj_t BgL_arg2390z00_447;

													BgL_arg2390z00_447 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2383z00_446 =
														MAKE_PAIR(BgL_arg2338z00_438, BgL_arg2390z00_447);
												}
												BgL_arg2377z00_445 =
													MAKE_PAIR(BgL_arg2331z00_437, BgL_arg2383z00_446);
											}
											BgL_arg2370z00_444 =
												MAKE_PAIR(BgL_arg2325z00_436, BgL_arg2377z00_445);
										}
										BgL_arg2364z00_443 =
											MAKE_PAIR(BgL_arg2318z00_435, BgL_arg2370z00_444);
									}
									BgL_arg2357z00_442 =
										MAKE_PAIR(BgL_arg2312z00_434, BgL_arg2364z00_443);
								}
								BgL_arg2351z00_441 =
									MAKE_PAIR(BgL_arg2305z00_433, BgL_arg2357z00_442);
							}
							BgL_list2345z00_440 =
								MAKE_PAIR(BgL_arg2297z00_432, BgL_arg2351z00_441);
						}
						BgL_arg2285z00_428 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2295z00_431,
							BgL_list2345z00_440);
				}}
				BGl_basiczd2encodedzd2typez00zzjas_classfilez00 =
					MAKE_PAIR(BgL_arg2282z00_427, BgL_arg2285z00_428);
			}
			{	/* Jas/classfile.scm 106 */
				obj_t BgL_arg2454z00_464;

				BgL_arg2454z00_464 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long) 3)),
					BGl_basiczd2encodedzd2typez00zzjas_classfilez00);
				BGl_pourquoi_tant_de_hainez00zzjas_classfilez00 =
					CDR(BgL_arg2454z00_464);
			}
			{	/* Jas/classfile.scm 109 */
				BgL_vectz00_bglt BgL_arg2459z00_465;

				{	/* Jas/classfile.scm 109 */
					BgL_vectz00_bglt BgL_res2977z00_1290;

					{	/* Jas/classfile.scm 109 */
						BgL_typez00_bglt BgL_type1575z00_1275;

						BgL_type1575z00_1275 =
							(BgL_typez00_bglt)
							(BGl_pourquoi_tant_de_hainez00zzjas_classfilez00);
						{	/* Jas/classfile.scm 109 */
							BgL_vectz00_bglt BgL_new1576z00_1276;

							{	/* Jas/classfile.scm 109 */
								BgL_vectz00_bglt BgL_res2975z00_1281;

								{	/* Jas/classfile.scm 109 */
									BgL_vectz00_bglt BgL_new1586z00_1277;

									BgL_new1586z00_1277 =
										((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_vectz00_bgl))));
									BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
										(BgL_new1586z00_1277),
										BGl_classzd2numzd2zz__objectz00
										(BGl_vectz00zzjas_classfilez00));
									{	/* Jas/classfile.scm 109 */
										BgL_objectz00_bglt BgL_auxz00_3271;

										BgL_auxz00_3271 =
											(BgL_objectz00_bglt) (BgL_new1586z00_1277);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3271, BFALSE);
									}
									BgL_res2975z00_1281 = BgL_new1586z00_1277;
								}
								BgL_new1576z00_1276 = BgL_res2975z00_1281;
							}
							{	/* Jas/classfile.scm 109 */
								BgL_vectz00_bglt BgL_res2976z00_1289;

								{	/* Jas/classfile.scm 109 */
									BgL_vectz00_bglt BgL_new1581z00_1282;

									BgL_new1581z00_1282 = BgL_new1576z00_1276;
									{	/* Jas/classfile.scm 109 */
										obj_t BgL_code1578z00_1286;

										obj_t BgL_vect1579z00_1287;

										BgL_typez00_bglt BgL_type1580z00_1288;

										BgL_code1578z00_1286 = BGl_string3050z00zzjas_classfilez00;
										BgL_vect1579z00_1287 = BFALSE;
										BgL_type1580z00_1288 = BgL_type1575z00_1275;
										((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1282))->
												BgL_codez00) = ((obj_t) BgL_code1578z00_1286), BUNSPEC);
										((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1282))->
												BgL_vectz00) = ((obj_t) BgL_vect1579z00_1287), BUNSPEC);
										((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1282))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_type1580z00_1288), BUNSPEC);
										BgL_res2976z00_1289 = BgL_new1581z00_1282;
								}} BgL_res2976z00_1289;
							}
							BgL_res2977z00_1290 = BgL_new1576z00_1276;
					}}
					BgL_arg2459z00_465 = BgL_res2977z00_1290;
				}
				{
					obj_t BgL_auxz00_3279;

					BgL_typez00_bglt BgL_auxz00_3277;

					BgL_auxz00_3279 = (obj_t) (BgL_arg2459z00_465);
					BgL_auxz00_3277 =
						(BgL_typez00_bglt)
						(BGl_pourquoi_tant_de_hainez00zzjas_classfilez00);
					return ((((BgL_typez00_bglt) CREF(BgL_auxz00_3277))->BgL_vectz00) =
						((obj_t) BgL_auxz00_3279), BUNSPEC);
				}
			}
		}
	}



/* jas-error */
	BGL_EXPORTED_DEF obj_t
		BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_1, obj_t BgL_msgz00_2, obj_t BgL_argz00_3)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 84 */
			{	/* Jas/classfile.scm 85 */
				obj_t BgL_arg2460z00_1293;

				BgL_arg2460z00_1293 =
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_1))->
					BgL_currentzd2methodzd2);
				return BGl_errorz00zz__errorz00(BgL_arg2460z00_1293, BgL_msgz00_2,
					BgL_argz00_3);
			}
		}
	}



/* _jas-error */
	obj_t BGl__jaszd2errorzd2zzjas_classfilez00(obj_t BgL_envz00_2507,
		obj_t BgL_classfilez00_2508, obj_t BgL_msgz00_2509, obj_t BgL_argz00_2510)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 84 */
			return
				BGl_jaszd2errorzd2zzjas_classfilez00(
				(BgL_classfilez00_bglt) (BgL_classfilez00_2508), BgL_msgz00_2509,
				BgL_argz00_2510);
		}
	}



/* jas-warning */
	BGL_EXPORTED_DEF obj_t
		BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_4, obj_t BgL_msgz00_5, obj_t BgL_argz00_6)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 87 */
			{	/* Jas/classfile.scm 88 */
				obj_t BgL_port2220z00_467;

				{	/* Jas/classfile.scm 88 */
					obj_t BgL_res2978z00_1296;

					{	/* Jas/classfile.scm 88 */
						obj_t BgL_auxz00_3286;

						BgL_auxz00_3286 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2978z00_1296 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3286);
					}
					BgL_port2220z00_467 = BgL_res2978z00_1296;
				}
				bgl_display_string(BGl_string3051z00zzjas_classfilez00,
					BgL_port2220z00_467);
				{	/* Jas/classfile.scm 88 */
					obj_t BgL_arg2461z00_468;

					BgL_arg2461z00_468 =
						(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_4))->
						BgL_currentzd2methodzd2);
					bgl_display_obj(BgL_arg2461z00_468, BgL_port2220z00_467);
				}
				bgl_display_string(BGl_string3052z00zzjas_classfilez00,
					BgL_port2220z00_467);
				bgl_display_string(BGl_string3052z00zzjas_classfilez00,
					BgL_port2220z00_467);
				bgl_display_obj(BgL_msgz00_5, BgL_port2220z00_467);
				bgl_display_string(BGl_string3052z00zzjas_classfilez00,
					BgL_port2220z00_467);
				bgl_display_obj(BgL_argz00_6, BgL_port2220z00_467);
				bgl_display_char(((unsigned char) '\n'), BgL_port2220z00_467);
			}
			return CNST_TABLE_REF(((long) 9));
		}
	}



/* _jas-warning */
	obj_t BGl__jaszd2warningzd2zzjas_classfilez00(obj_t BgL_envz00_2511,
		obj_t BgL_classfilez00_2512, obj_t BgL_msgz00_2513, obj_t BgL_argz00_2514)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 87 */
			return
				BGl_jaszd2warningzd2zzjas_classfilez00(
				(BgL_classfilez00_bglt) (BgL_classfilez00_2512), BgL_msgz00_2513,
				BgL_argz00_2514);
		}
	}



/* as-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt BgL_classfilez00_7,
		obj_t BgL_typedeclz00_8)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 113 */
			{
				obj_t BgL_namez00_499;

				{

					if (PAIRP(BgL_typedeclz00_8))
						{	/* Jas/classfile.scm 119 */
							obj_t BgL_cdrzd21398zd2_478;

							BgL_cdrzd21398zd2_478 = CDR(BgL_typedeclz00_8);
							if ((CAR(BgL_typedeclz00_8) == CNST_TABLE_REF(((long) 11))))
								{	/* Jas/classfile.scm 119 */
									if (PAIRP(BgL_cdrzd21398zd2_478))
										{	/* Jas/classfile.scm 119 */
											if (NULLP(CDR(BgL_cdrzd21398zd2_478)))
												{	/* Jas/classfile.scm 119 */
													obj_t BgL_arg2470z00_482;

													BgL_arg2470z00_482 = CAR(BgL_cdrzd21398zd2_478);
													{	/* Jas/classfile.scm 119 */
														BgL_typez00_bglt BgL_eltzd2typezd2_1315;

														BgL_eltzd2typezd2_1315 =
															BGl_aszd2typezd2zzjas_classfilez00
															(BgL_classfilez00_7, BgL_arg2470z00_482);
														return (BgL_typez00_bglt)
															(BGl_getzd2vectzd2typez00zzjas_classfilez00
															(BgL_eltzd2typezd2_1315));
													}
												}
											else
												{	/* Jas/classfile.scm 119 */
													obj_t BgL_auxz00_3317;

												BgL_tagzd21391zd2_475:
													{	/* Jas/classfile.scm 127 */
														obj_t BgL_g2193z00_494;

														BgL_g2193z00_494 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_typedeclz00_8,
															BGl_basiczd2encodedzd2typez00zzjas_classfilez00);
														if (CBOOL(BgL_g2193z00_494))
															{	/* Jas/classfile.scm 127 */
																BgL_auxz00_3317 = CDR(BgL_g2193z00_494);
															}
														else
															{	/* Jas/classfile.scm 128 */
																obj_t BgL_g2195z00_496;

																BgL_namez00_499 = BgL_typedeclz00_8;
																{	/* Jas/classfile.scm 115 */
																	obj_t BgL_valuez00_501;

																	BgL_valuez00_501 =
																		BGl_getpropz00zz__r4_symbols_6_4z00
																		(BgL_namez00_499,
																		CNST_TABLE_REF(((long) 10)));
																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_valuez00_501,
																			BGl_classez00zzjas_classfilez00))
																		{	/* Jas/classfile.scm 116 */
																			BgL_g2195z00_496 = BgL_valuez00_501;
																		}
																	else
																		{	/* Jas/classfile.scm 116 */
																			BgL_g2195z00_496 = BFALSE;
																		}
																}
																if (CBOOL(BgL_g2195z00_496))
																	{	/* Jas/classfile.scm 128 */
																		BgL_auxz00_3317 = BgL_g2195z00_496;
																	}
																else
																	{	/* Jas/classfile.scm 129 */
																		obj_t BgL_arg2460z00_1328;

																		BgL_arg2460z00_1328 =
																			(((BgL_classfilez00_bglt)
																				CREF(BgL_classfilez00_7))->
																			BgL_currentzd2methodzd2);
																		BgL_auxz00_3317 =
																			BGl_errorz00zz__errorz00
																			(BgL_arg2460z00_1328,
																			BGl_string3053z00zzjas_classfilez00,
																			BgL_typedeclz00_8);
																	}
															}
													}
													return (BgL_typez00_bglt) (BgL_auxz00_3317);
												}
										}
									else
										{	/* Jas/classfile.scm 119 */
											obj_t BgL_auxz00_3331;

											goto BgL_tagzd21391zd2_475;
											return (BgL_typez00_bglt) (BgL_auxz00_3331);
										}
								}
							else
								{	/* Jas/classfile.scm 119 */
									if ((CAR(BgL_typedeclz00_8) == CNST_TABLE_REF(((long) 12))))
										{	/* Jas/classfile.scm 119 */
											if (PAIRP(BgL_cdrzd21398zd2_478))
												{	/* Jas/classfile.scm 119 */
													obj_t BgL_arg2476z00_487;

													obj_t BgL_arg2477z00_488;

													BgL_arg2476z00_487 = CAR(BgL_cdrzd21398zd2_478);
													BgL_arg2477z00_488 = CDR(BgL_cdrzd21398zd2_478);
													return
														(BgL_typez00_bglt)
														(BGl_aszd2funtypezd2zzjas_classfilez00
														(BgL_classfilez00_7, BgL_arg2476z00_487,
															BgL_arg2477z00_488));
												}
											else
												{	/* Jas/classfile.scm 119 */
													obj_t BgL_auxz00_3343;

													goto BgL_tagzd21391zd2_475;
													return (BgL_typez00_bglt) (BgL_auxz00_3343);
												}
										}
									else
										{	/* Jas/classfile.scm 119 */
											obj_t BgL_auxz00_3345;

											goto BgL_tagzd21391zd2_475;
											return (BgL_typez00_bglt) (BgL_auxz00_3345);
										}
								}
						}
					else
						{	/* Jas/classfile.scm 119 */
							obj_t BgL_auxz00_3347;

							goto BgL_tagzd21391zd2_475;
							return (BgL_typez00_bglt) (BgL_auxz00_3347);
						}
				}
			}
		}
	}



/* _as-type */
	obj_t BGl__aszd2typezd2zzjas_classfilez00(obj_t BgL_envz00_2515,
		obj_t BgL_classfilez00_2516, obj_t BgL_typedeclz00_2517)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 113 */
			return
				(obj_t) (BGl_aszd2typezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2516),
					BgL_typedeclz00_2517));
		}
	}



/* get-vect-type */
	obj_t BGl_getzd2vectzd2typez00zzjas_classfilez00(BgL_typez00_bglt
		BgL_typez00_9)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 131 */
			if (CBOOL((((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_vectz00)))
				{	/* Jas/classfile.scm 133 */
					return (((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_vectz00);
				}
			else
				{	/* Jas/classfile.scm 135 */
					BgL_vectz00_bglt BgL_rz00_506;

					{	/* Jas/classfile.scm 136 */
						obj_t BgL_arg2523z00_507;

						{	/* Jas/classfile.scm 136 */
							obj_t BgL_arg2531z00_509;

							BgL_arg2531z00_509 =
								(((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_codez00);
							BgL_arg2523z00_507 =
								string_append(BGl_string3054z00zzjas_classfilez00,
								BgL_arg2531z00_509);
						}
						{	/* Jas/classfile.scm 135 */
							BgL_vectz00_bglt BgL_res2981z00_1353;

							{	/* Jas/classfile.scm 135 */
								BgL_vectz00_bglt BgL_new1576z00_1339;

								{	/* Jas/classfile.scm 135 */
									BgL_vectz00_bglt BgL_res2979z00_1344;

									{	/* Jas/classfile.scm 135 */
										BgL_vectz00_bglt BgL_new1586z00_1340;

										BgL_new1586z00_1340 =
											((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_vectz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1586z00_1340),
											BGl_classzd2numzd2zz__objectz00
											(BGl_vectz00zzjas_classfilez00));
										{	/* Jas/classfile.scm 135 */
											BgL_objectz00_bglt BgL_auxz00_3362;

											BgL_auxz00_3362 =
												(BgL_objectz00_bglt) (BgL_new1586z00_1340);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3362, BFALSE);
										}
										BgL_res2979z00_1344 = BgL_new1586z00_1340;
									}
									BgL_new1576z00_1339 = BgL_res2979z00_1344;
								}
								{	/* Jas/classfile.scm 135 */
									BgL_vectz00_bglt BgL_res2980z00_1352;

									{	/* Jas/classfile.scm 135 */
										BgL_vectz00_bglt BgL_new1581z00_1345;

										BgL_new1581z00_1345 = BgL_new1576z00_1339;
										{	/* Jas/classfile.scm 135 */
											obj_t BgL_code1578z00_1349;

											obj_t BgL_vect1579z00_1350;

											BgL_typez00_bglt BgL_type1580z00_1351;

											BgL_code1578z00_1349 = BgL_arg2523z00_507;
											BgL_vect1579z00_1350 = BFALSE;
											BgL_type1580z00_1351 = BgL_typez00_9;
											((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1345))->
													BgL_codez00) =
												((obj_t) BgL_code1578z00_1349), BUNSPEC);
											((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1345))->
													BgL_vectz00) =
												((obj_t) BgL_vect1579z00_1350), BUNSPEC);
											((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1345))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_type1580z00_1351), BUNSPEC);
											BgL_res2980z00_1352 = BgL_new1581z00_1345;
									}} BgL_res2980z00_1352;
								}
								BgL_res2981z00_1353 = BgL_new1576z00_1339;
							}
							BgL_rz00_506 = BgL_res2981z00_1353;
					}}
					{
						obj_t BgL_auxz00_3368;

						BgL_auxz00_3368 = (obj_t) (BgL_rz00_506);
						((((BgL_typez00_bglt) CREF(BgL_typez00_9))->BgL_vectz00) =
							((obj_t) BgL_auxz00_3368), BUNSPEC);
					}
					return (obj_t) (BgL_rz00_506);
				}
		}
	}



/* as-funtype */
	BGL_EXPORTED_DEF BgL_funz00_bglt
		BGl_aszd2funtypezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_10, obj_t BgL_tretz00_11, obj_t BgL_targsz00_12)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 141 */
			{	/* Jas/classfile.scm 142 */
				BgL_typez00_bglt BgL_tretz00_510;

				obj_t BgL_targsz00_511;

				BgL_tretz00_510 =
					BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_10,
					BgL_tretz00_11);
				if (NULLP(BgL_targsz00_12))
					{	/* Jas/classfile.scm 143 */
						BgL_targsz00_511 = BNIL;
					}
				else
					{	/* Jas/classfile.scm 143 */
						obj_t BgL_head2223z00_542;

						BgL_head2223z00_542 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l2221z00_544;

							obj_t BgL_tail2224z00_545;

							BgL_l2221z00_544 = BgL_targsz00_12;
							BgL_tail2224z00_545 = BgL_head2223z00_542;
						BgL_zc3anonymousza32579ze3z83_546:
							if (NULLP(BgL_l2221z00_544))
								{	/* Jas/classfile.scm 143 */
									BgL_targsz00_511 = CDR(BgL_head2223z00_542);
								}
							else
								{	/* Jas/classfile.scm 143 */
									obj_t BgL_newtail2225z00_548;

									{	/* Jas/classfile.scm 143 */
										BgL_typez00_bglt BgL_arg2587z00_550;

										BgL_arg2587z00_550 =
											BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_10,
											CAR(BgL_l2221z00_544));
										BgL_newtail2225z00_548 =
											MAKE_PAIR((obj_t) (BgL_arg2587z00_550), BNIL);
									}
									SET_CDR(BgL_tail2224z00_545, BgL_newtail2225z00_548);
									{
										obj_t BgL_tail2224z00_3386;

										obj_t BgL_l2221z00_3384;

										BgL_l2221z00_3384 = CDR(BgL_l2221z00_544);
										BgL_tail2224z00_3386 = BgL_newtail2225z00_548;
										BgL_tail2224z00_545 = BgL_tail2224z00_3386;
										BgL_l2221z00_544 = BgL_l2221z00_3384;
										goto BgL_zc3anonymousza32579ze3z83_546;
									}
								}
						}
					}
				{	/* Jas/classfile.scm 145 */
					obj_t BgL_arg2536z00_512;

					{	/* Jas/classfile.scm 145 */
						obj_t BgL_arg2550z00_514;

						obj_t BgL_arg2555z00_516;

						{	/* Jas/classfile.scm 146 */
							obj_t BgL_runner2577z00_539;

							if (NULLP(BgL_targsz00_511))
								{	/* Jas/classfile.scm 146 */
									BgL_runner2577z00_539 = BNIL;
								}
							else
								{	/* Jas/classfile.scm 146 */
									obj_t BgL_head2228z00_523;

									{	/* Jas/classfile.scm 146 */
										obj_t BgL_arg2571z00_536;

										{	/* Jas/classfile.scm 146 */
											BgL_typez00_bglt BgL_obj1508z00_1369;

											{	/* Jas/classfile.scm 146 */
												obj_t BgL_pairz00_1368;

												BgL_pairz00_1368 = BgL_targsz00_511;
												BgL_obj1508z00_1369 =
													(BgL_typez00_bglt) (CAR(BgL_pairz00_1368));
											}
											BgL_arg2571z00_536 =
												(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1369))->
												BgL_codez00);
										}
										BgL_head2228z00_523 = MAKE_PAIR(BgL_arg2571z00_536, BNIL);
									}
									{	/* Jas/classfile.scm 146 */
										obj_t BgL_g2231z00_524;

										BgL_g2231z00_524 = CDR(BgL_targsz00_511);
										{
											obj_t BgL_l2226z00_526;

											obj_t BgL_tail2229z00_527;

											BgL_l2226z00_526 = BgL_g2231z00_524;
											BgL_tail2229z00_527 = BgL_head2228z00_523;
										BgL_zc3anonymousza32561ze3z83_528:
											if (NULLP(BgL_l2226z00_526))
												{	/* Jas/classfile.scm 146 */
													BgL_runner2577z00_539 = BgL_head2228z00_523;
												}
											else
												{	/* Jas/classfile.scm 146 */
													obj_t BgL_newtail2230z00_530;

													{	/* Jas/classfile.scm 146 */
														obj_t BgL_arg2564z00_532;

														{	/* Jas/classfile.scm 146 */
															BgL_typez00_bglt BgL_obj1508z00_1375;

															{	/* Jas/classfile.scm 146 */
																obj_t BgL_pairz00_1374;

																BgL_pairz00_1374 = BgL_l2226z00_526;
																BgL_obj1508z00_1375 =
																	(BgL_typez00_bglt) (CAR(BgL_pairz00_1374));
															}
															BgL_arg2564z00_532 =
																(((BgL_typez00_bglt)
																	CREF(BgL_obj1508z00_1375))->BgL_codez00);
														}
														BgL_newtail2230z00_530 =
															MAKE_PAIR(BgL_arg2564z00_532, BNIL);
													}
													SET_CDR(BgL_tail2229z00_527, BgL_newtail2230z00_530);
													{
														obj_t BgL_tail2229z00_3403;

														obj_t BgL_l2226z00_3401;

														BgL_l2226z00_3401 = CDR(BgL_l2226z00_526);
														BgL_tail2229z00_3403 = BgL_newtail2230z00_530;
														BgL_tail2229z00_527 = BgL_tail2229z00_3403;
														BgL_l2226z00_526 = BgL_l2226z00_3401;
														goto BgL_zc3anonymousza32561ze3z83_528;
													}
												}
										}
									}
								}
							BgL_arg2550z00_514 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_runner2577z00_539);
						}
						BgL_arg2555z00_516 =
							(((BgL_typez00_bglt) CREF(BgL_tretz00_510))->BgL_codez00);
						{	/* Jas/classfile.scm 145 */
							obj_t BgL_list2556z00_517;

							{	/* Jas/classfile.scm 145 */
								obj_t BgL_arg2557z00_518;

								{	/* Jas/classfile.scm 145 */
									obj_t BgL_arg2558z00_519;

									{	/* Jas/classfile.scm 145 */
										obj_t BgL_arg2559z00_520;

										BgL_arg2559z00_520 = MAKE_PAIR(BgL_arg2555z00_516, BNIL);
										BgL_arg2558z00_519 =
											MAKE_PAIR(BGl_string3055z00zzjas_classfilez00,
											BgL_arg2559z00_520);
									}
									BgL_arg2557z00_518 =
										MAKE_PAIR(BgL_arg2550z00_514, BgL_arg2558z00_519);
								}
								BgL_list2556z00_517 =
									MAKE_PAIR(BGl_string3056z00zzjas_classfilez00,
									BgL_arg2557z00_518);
							}
							BgL_arg2536z00_512 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2556z00_517);
						}
					}
					{	/* Jas/classfile.scm 144 */
						BgL_funz00_bglt BgL_res2984z00_1402;

						{	/* Jas/classfile.scm 144 */
							BgL_funz00_bglt BgL_new1618z00_1386;

							{	/* Jas/classfile.scm 144 */
								BgL_funz00_bglt BgL_res2982z00_1391;

								{	/* Jas/classfile.scm 144 */
									BgL_funz00_bglt BgL_new1630z00_1387;

									BgL_new1630z00_1387 =
										((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_funz00_bgl))));
									BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
										(BgL_new1630z00_1387),
										BGl_classzd2numzd2zz__objectz00
										(BGl_funz00zzjas_classfilez00));
									{	/* Jas/classfile.scm 144 */
										BgL_objectz00_bglt BgL_auxz00_3415;

										BgL_auxz00_3415 =
											(BgL_objectz00_bglt) (BgL_new1630z00_1387);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3415, BFALSE);
									}
									BgL_res2982z00_1391 = BgL_new1630z00_1387;
								}
								BgL_new1618z00_1386 = BgL_res2982z00_1391;
							}
							{	/* Jas/classfile.scm 144 */
								BgL_funz00_bglt BgL_res2983z00_1401;

								{	/* Jas/classfile.scm 144 */
									BgL_funz00_bglt BgL_new1624z00_1392;

									BgL_new1624z00_1392 = BgL_new1618z00_1386;
									{	/* Jas/classfile.scm 144 */
										obj_t BgL_code1620z00_1397;

										obj_t BgL_vect1621z00_1398;

										BgL_typez00_bglt BgL_tret1622z00_1399;

										obj_t BgL_targs1623z00_1400;

										BgL_code1620z00_1397 = BgL_arg2536z00_512;
										BgL_vect1621z00_1398 = BFALSE;
										BgL_tret1622z00_1399 = BgL_tretz00_510;
										BgL_targs1623z00_1400 = BgL_targsz00_511;
										((((BgL_funz00_bglt) CREF(BgL_new1624z00_1392))->
												BgL_codez00) = ((obj_t) BgL_code1620z00_1397), BUNSPEC);
										((((BgL_funz00_bglt) CREF(BgL_new1624z00_1392))->
												BgL_vectz00) = ((obj_t) BgL_vect1621z00_1398), BUNSPEC);
										((((BgL_funz00_bglt) CREF(BgL_new1624z00_1392))->
												BgL_tretz00) =
											((BgL_typez00_bglt) BgL_tret1622z00_1399), BUNSPEC);
										((((BgL_funz00_bglt) CREF(BgL_new1624z00_1392))->
												BgL_targsz00) =
											((obj_t) BgL_targs1623z00_1400), BUNSPEC);
										BgL_res2983z00_1401 = BgL_new1624z00_1392;
								}} BgL_res2983z00_1401;
							}
							BgL_res2984z00_1402 = BgL_new1618z00_1386;
						}
						return BgL_res2984z00_1402;
					}
				}
			}
		}
	}



/* _as-funtype */
	obj_t BGl__aszd2funtypezd2zzjas_classfilez00(obj_t BgL_envz00_2518,
		obj_t BgL_classfilez00_2519, obj_t BgL_tretz00_2520,
		obj_t BgL_targsz00_2521)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 141 */
			return
				(obj_t) (BGl_aszd2funtypezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2519), BgL_tretz00_2520,
					BgL_targsz00_2521));
		}
	}



/* type-size */
	BGL_EXPORTED_DEF int BGl_typezd2siza7ez75zzjas_classfilez00(BgL_typez00_bglt
		BgL_typez00_13)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 152 */
			{	/* Jas/classfile.scm 153 */
				obj_t BgL_codez00_554;

				BgL_codez00_554 =
					(((BgL_typez00_bglt) CREF(BgL_typez00_13))->BgL_codez00);
				if ((STRING_LENGTH(BgL_codez00_554) == ((long) 1)))
					{	/* Jas/classfile.scm 155 */
						switch (STRING_REF(BgL_codez00_554, ((long) 0)))
							{
							case ((unsigned char) 'V'):

								return (int) (((long) 0));
								break;
							case ((unsigned char) 'J'):
							case ((unsigned char) 'D'):

								return (int) (((long) 2));
								break;
							default:
								return (int) (((long) 1));
					}}
				else
					{	/* Jas/classfile.scm 155 */
						return (int) (((long) 1));
		}}}
	}



/* _type-size */
	obj_t BGl__typezd2siza7ez75zzjas_classfilez00(obj_t BgL_envz00_2522,
		obj_t BgL_typez00_2523)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 152 */
			return
				BINT(BGl_typezd2siza7ez75zzjas_classfilez00(
					(BgL_typez00_bglt) (BgL_typez00_2523)));
		}
	}



/* as-assign */
	BGL_EXPORTED_DEF obj_t
		BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_14, obj_t BgL_namez00_15, obj_t BgL_valuez00_16)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 165 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_15,
						CNST_TABLE_REF(((long) 10)))))
				{	/* Jas/classfile.scm 167 */
					obj_t BgL_arg2460z00_1412;

					BgL_arg2460z00_1412 =
						(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_14))->
						BgL_currentzd2methodzd2);
					return BGl_errorz00zz__errorz00(BgL_arg2460z00_1412,
						BGl_string3057z00zzjas_classfilez00, BgL_namez00_15);
				}
			else
				{	/* Jas/classfile.scm 166 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_namez00_15,
						CNST_TABLE_REF(((long) 10)), BgL_valuez00_16);
					{	/* Jas/classfile.scm 170 */
						obj_t BgL_arg2594z00_562;

						{	/* Jas/classfile.scm 170 */
							obj_t BgL_arg2595z00_563;

							BgL_arg2595z00_563 =
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_14))->
								BgL_globalsz00);
							BgL_arg2594z00_562 =
								MAKE_PAIR(BgL_namez00_15, BgL_arg2595z00_563);
						}
						return
							((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_14))->
								BgL_globalsz00) = ((obj_t) BgL_arg2594z00_562), BUNSPEC);
					}
				}
		}
	}



/* _as-assign */
	obj_t BGl__aszd2assignzd2zzjas_classfilez00(obj_t BgL_envz00_2524,
		obj_t BgL_classfilez00_2525, obj_t BgL_namez00_2526,
		obj_t BgL_valuez00_2527)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 165 */
			return
				BGl_aszd2assignzd2zzjas_classfilez00(
				(BgL_classfilez00_bglt) (BgL_classfilez00_2525), BgL_namez00_2526,
				BgL_valuez00_2527);
		}
	}



/* declared-class */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_21, obj_t BgL_namez00_22)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 182 */
			{	/* Jas/classfile.scm 183 */
				obj_t BgL_valuez00_565;

				{	/* Jas/classfile.scm 183 */
					obj_t BgL__ortest_2205z00_1427;

					BgL__ortest_2205z00_1427 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_22,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_2205z00_1427))
						{	/* Jas/classfile.scm 183 */
							BgL_valuez00_565 = BgL__ortest_2205z00_1427;
						}
					else
						{	/* Jas/classfile.scm 183 */
							obj_t BgL_arg2460z00_1433;

							BgL_arg2460z00_1433 =
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_21))->
								BgL_currentzd2methodzd2);
							BgL_valuez00_565 =
								BGl_errorz00zz__errorz00(BgL_arg2460z00_1433,
								BGl_string3058z00zzjas_classfilez00, BgL_namez00_22);
						}
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_valuez00_565,
						BGl_classez00zzjas_classfilez00))
					{	/* Jas/classfile.scm 184 */
						return (BgL_classez00_bglt) (BgL_valuez00_565);
					}
				else
					{	/* Jas/classfile.scm 186 */
						obj_t BgL_arg2460z00_1439;

						BgL_arg2460z00_1439 =
							(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_21))->
							BgL_currentzd2methodzd2);
						return (BgL_classez00_bglt) (BGl_errorz00zz__errorz00
							(BgL_arg2460z00_1439, BGl_string3059z00zzjas_classfilez00,
								BgL_namez00_22));
					}
			}
		}
	}



/* _declared-class */
	obj_t BGl__declaredzd2classzd2zzjas_classfilez00(obj_t BgL_envz00_2528,
		obj_t BgL_classfilez00_2529, obj_t BgL_namez00_2530)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 182 */
			return
				(obj_t) (BGl_declaredzd2classzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2529), BgL_namez00_2530));
		}
	}



/* declared-field */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_23, obj_t BgL_namez00_24)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 188 */
			{	/* Jas/classfile.scm 189 */
				obj_t BgL_valuez00_567;

				{	/* Jas/classfile.scm 189 */
					obj_t BgL__ortest_2205z00_1443;

					BgL__ortest_2205z00_1443 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_24,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_2205z00_1443))
						{	/* Jas/classfile.scm 189 */
							BgL_valuez00_567 = BgL__ortest_2205z00_1443;
						}
					else
						{	/* Jas/classfile.scm 189 */
							obj_t BgL_arg2460z00_1449;

							BgL_arg2460z00_1449 =
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_23))->
								BgL_currentzd2methodzd2);
							BgL_valuez00_567 =
								BGl_errorz00zz__errorz00(BgL_arg2460z00_1449,
								BGl_string3058z00zzjas_classfilez00, BgL_namez00_24);
						}
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_valuez00_567,
						BGl_fieldz00zzjas_classfilez00))
					{	/* Jas/classfile.scm 190 */
						return (BgL_fieldz00_bglt) (BgL_valuez00_567);
					}
				else
					{	/* Jas/classfile.scm 192 */
						obj_t BgL_arg2460z00_1455;

						BgL_arg2460z00_1455 =
							(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_23))->
							BgL_currentzd2methodzd2);
						return (BgL_fieldz00_bglt) (BGl_errorz00zz__errorz00
							(BgL_arg2460z00_1455, BGl_string3060z00zzjas_classfilez00,
								BgL_namez00_24));
					}
			}
		}
	}



/* _declared-field */
	obj_t BGl__declaredzd2fieldzd2zzjas_classfilez00(obj_t BgL_envz00_2531,
		obj_t BgL_classfilez00_2532, obj_t BgL_namez00_2533)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 188 */
			return
				(obj_t) (BGl_declaredzd2fieldzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2532), BgL_namez00_2533));
		}
	}



/* declared-method */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_25, obj_t BgL_namez00_26)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 194 */
			{	/* Jas/classfile.scm 195 */
				obj_t BgL_valuez00_569;

				{	/* Jas/classfile.scm 195 */
					obj_t BgL__ortest_2205z00_1459;

					BgL__ortest_2205z00_1459 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_26,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_2205z00_1459))
						{	/* Jas/classfile.scm 195 */
							BgL_valuez00_569 = BgL__ortest_2205z00_1459;
						}
					else
						{	/* Jas/classfile.scm 195 */
							obj_t BgL_arg2460z00_1465;

							BgL_arg2460z00_1465 =
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_25))->
								BgL_currentzd2methodzd2);
							BgL_valuez00_569 =
								BGl_errorz00zz__errorz00(BgL_arg2460z00_1465,
								BGl_string3058z00zzjas_classfilez00, BgL_namez00_26);
						}
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_valuez00_569,
						BGl_methodz00zzjas_classfilez00))
					{	/* Jas/classfile.scm 196 */
						return (BgL_methodz00_bglt) (BgL_valuez00_569);
					}
				else
					{	/* Jas/classfile.scm 198 */
						obj_t BgL_arg2460z00_1471;

						BgL_arg2460z00_1471 =
							(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_25))->
							BgL_currentzd2methodzd2);
						return (BgL_methodz00_bglt) (BGl_errorz00zz__errorz00
							(BgL_arg2460z00_1471, BGl_string3061z00zzjas_classfilez00,
								BgL_namez00_26));
					}
			}
		}
	}



/* _declared-method */
	obj_t BGl__declaredzd2methodzd2zzjas_classfilez00(obj_t BgL_envz00_2534,
		obj_t BgL_classfilez00_2535, obj_t BgL_namez00_2536)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 194 */
			return
				(obj_t) (BGl_declaredzd2methodzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2535), BgL_namez00_2536));
		}
	}



/* pool-add */
	obj_t BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_28, obj_t BgL_itemz00_29)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 208 */
			{	/* Jas/classfile.scm 210 */
				obj_t BgL_rz00_573;

				BgL_rz00_573 =
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_28))->
					BgL_poolzd2siza7ez75);
				{	/* Jas/classfile.scm 211 */
					obj_t BgL_arg2602z00_574;

					{	/* Jas/classfile.scm 211 */
						obj_t BgL_arg2608z00_575;

						BgL_arg2608z00_575 =
							(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_28))->
							BgL_poolz00);
						BgL_arg2602z00_574 = MAKE_PAIR(BgL_itemz00_29, BgL_arg2608z00_575);
					}
					((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_28))->BgL_poolz00) =
						((obj_t) BgL_arg2602z00_574), BUNSPEC);
				}
				{	/* Jas/classfile.scm 212 */
					long BgL_arg2615z00_576;

					{	/* Jas/classfile.scm 212 */
						long BgL_auxz00_3500;

						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
									(BgL_itemz00_29), CNST_TABLE_REF(((long) 13)))))
							{	/* Jas/classfile.scm 212 */
								BgL_auxz00_3500 = ((long) 2);
							}
						else
							{	/* Jas/classfile.scm 212 */
								BgL_auxz00_3500 = ((long) 1);
							}
						BgL_arg2615z00_576 =
							(
							(long) CINT(
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_28))->
									BgL_poolzd2siza7ez75)) + BgL_auxz00_3500);
					}
					{
						obj_t BgL_auxz00_3509;

						BgL_auxz00_3509 = BINT(BgL_arg2615z00_576);
						((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_28))->
								BgL_poolzd2siza7ez75) = ((obj_t) BgL_auxz00_3509), BUNSPEC);
				}}
				return BgL_rz00_573;
			}
		}
	}



/* pool-get */
	long BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_30, long BgL_tagz00_31, obj_t BgL_valz00_32)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 215 */
			{
				obj_t BgL_lz00_584;

				obj_t BgL_nz00_585;

				BgL_lz00_584 =
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_30))->BgL_poolz00);
				BgL_nz00_585 =
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_30))->
					BgL_poolzd2siza7ez75);
			BgL_zc3anonymousza32643ze3z83_586:
				if (NULLP(BgL_lz00_584))
					{	/* Jas/classfile.scm 218 */
						return ((long) 0);
					}
				else
					{	/* Jas/classfile.scm 220 */
						obj_t BgL_xtagz00_588;

						{	/* Jas/classfile.scm 220 */
							obj_t BgL_pairz00_1489;

							BgL_pairz00_1489 = BgL_lz00_584;
							BgL_xtagz00_588 = CAR(CAR(BgL_pairz00_1489));
						}
						{	/* Jas/classfile.scm 221 */
							long BgL_herez00_590;

							{	/* Jas/classfile.scm 221 */
								long BgL_auxz00_3516;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_xtagz00_588, CNST_TABLE_REF(((long) 13)))))
									{	/* Jas/classfile.scm 221 */
										BgL_auxz00_3516 = ((long) 2);
									}
								else
									{	/* Jas/classfile.scm 221 */
										BgL_auxz00_3516 = ((long) 1);
									}
								BgL_herez00_590 = ((long) CINT(BgL_nz00_585) - BgL_auxz00_3516);
							}
							{	/* Jas/classfile.scm 222 */
								bool_t BgL_testz00_3523;

								if ((BgL_xtagz00_588 == BINT(BgL_tagz00_31)))
									{	/* Jas/classfile.scm 222 */
										obj_t BgL_auxz00_3527;

										{	/* Jas/classfile.scm 220 */
											obj_t BgL_pairz00_1493;

											BgL_pairz00_1493 = BgL_lz00_584;
											BgL_auxz00_3527 = CDR(CAR(BgL_pairz00_1493));
										}
										BgL_testz00_3523 =
											BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_3527,
											BgL_valz00_32);
									}
								else
									{	/* Jas/classfile.scm 222 */
										BgL_testz00_3523 = ((bool_t) 0);
									}
								if (BgL_testz00_3523)
									{	/* Jas/classfile.scm 222 */
										return BgL_herez00_590;
									}
								else
									{
										obj_t BgL_nz00_3533;

										obj_t BgL_lz00_3531;

										BgL_lz00_3531 = CDR(BgL_lz00_584);
										BgL_nz00_3533 = BINT(BgL_herez00_590);
										BgL_nz00_585 = BgL_nz00_3533;
										BgL_lz00_584 = BgL_lz00_3531;
										goto BgL_zc3anonymousza32643ze3z83_586;
									}
							}
						}
					}
			}
		}
	}



/* pool-get-special! */
	obj_t BGl_poolzd2getzd2specialz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_33, long BgL_tagz00_34, obj_t BgL_valz00_35)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 227 */
			{	/* Jas/classfile.scm 229 */
				obj_t BgL_nz00_597;

				BgL_nz00_597 =
					BGl_hashtablezd2getzd2zz__hashz00(
					(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
						BgL_pooledzd2nameszd2), BgL_valz00_35);
				if (CBOOL(BgL_nz00_597))
					{	/* Jas/classfile.scm 230 */
						return BgL_nz00_597;
					}
				else
					{	/* Jas/classfile.scm 233 */
						obj_t BgL_rz00_599;

						BgL_rz00_599 =
							(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
							BgL_poolzd2siza7ez75);
						{	/* Jas/classfile.scm 234 */
							obj_t BgL_arg2655z00_600;

							{	/* Jas/classfile.scm 234 */
								obj_t BgL_arg2656z00_601;

								obj_t BgL_arg2657z00_602;

								BgL_arg2656z00_601 = MAKE_PAIR(BINT(((long) 1)), BgL_valz00_35);
								BgL_arg2657z00_602 =
									(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
									BgL_poolz00);
								BgL_arg2655z00_600 =
									MAKE_PAIR(BgL_arg2656z00_601, BgL_arg2657z00_602);
							}
							((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
									BgL_poolz00) = ((obj_t) BgL_arg2655z00_600), BUNSPEC);
						}
						{	/* Jas/classfile.scm 235 */
							long BgL_arg2658z00_603;

							BgL_arg2658z00_603 =
								(
								(long) CINT(
									(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
										BgL_poolzd2siza7ez75)) + ((long) 1));
							{
								obj_t BgL_auxz00_3550;

								BgL_auxz00_3550 = BINT(BgL_arg2658z00_603);
								((((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
										BgL_poolzd2siza7ez75) = ((obj_t) BgL_auxz00_3550), BUNSPEC);
						}}
						{	/* Jas/classfile.scm 236 */
							obj_t BgL_arg2661z00_606;

							BgL_arg2661z00_606 =
								(((BgL_classfilez00_bglt) CREF(BgL_classfilez00_33))->
								BgL_pooledzd2nameszd2);
							BGl_hashtablezd2putz12zc0zz__hashz00(BgL_arg2661z00_606,
								BgL_valz00_35, BgL_rz00_599);
						}
						return BgL_rz00_599;
					}
			}
		}
	}



/* pool-get! */
	obj_t BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_36, long BgL_tagz00_37, obj_t BgL_valz00_38)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 239 */
			{	/* Jas/classfile.scm 240 */
				long BgL_rz00_608;

				BgL_rz00_608 =
					BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_36,
					BgL_tagz00_37, BgL_valz00_38);
				if ((BgL_rz00_608 == ((long) 0)))
					{	/* Jas/classfile.scm 242 */
						obj_t BgL_arg2665z00_610;

						BgL_arg2665z00_610 = MAKE_PAIR(BINT(BgL_tagz00_37), BgL_valz00_38);
						return
							BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_36,
							BgL_arg2665z00_610);
					}
				else
					{	/* Jas/classfile.scm 241 */
						return BINT(BgL_rz00_608);
					}
			}
		}
	}



/* pool-name */
	BGL_EXPORTED_DEF int
		BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_39, obj_t BgL_namez00_40)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 246 */
			return
				CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
				(BgL_classfilez00_39, ((long) 1), BgL_namez00_40));
		}
	}



/* _pool-name */
	obj_t BGl__poolzd2namezd2zzjas_classfilez00(obj_t BgL_envz00_2537,
		obj_t BgL_classfilez00_2538, obj_t BgL_namez00_2539)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 246 */
			return
				BINT(BGl_poolzd2namezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2538), BgL_namez00_2539));
		}
	}



/* pool-int */
	BGL_EXPORTED_DEF int BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_41, int BgL_nz00_42)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 249 */
			{	/* Jas/classfile.scm 250 */
				obj_t BgL_arg2667z00_1514;

				BgL_arg2667z00_1514 = BGl_w2z00zzjas_libz00(BgL_nz00_42);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_41,
						((long) 3), BgL_arg2667z00_1514));
		}}
	}



/* _pool-int */
	obj_t BGl__poolzd2intzd2zzjas_classfilez00(obj_t BgL_envz00_2540,
		obj_t BgL_classfilez00_2541, obj_t BgL_nz00_2542)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 249 */
			return
				BINT(BGl_poolzd2intzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2541),
					CINT(BgL_nz00_2542)));
		}
	}



/* pool-elong */
	BGL_EXPORTED_DEF int
		BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_43, long BgL_nz00_44)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 252 */
			{	/* Jas/classfile.scm 253 */
				obj_t BgL_arg2669z00_1516;

				BgL_arg2669z00_1516 = BGl_w4elongz00zzjas_libz00(BgL_nz00_44);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_43,
						((long) 5), BgL_arg2669z00_1516));
		}}
	}



/* _pool-elong */
	obj_t BGl__poolzd2elongzd2zzjas_classfilez00(obj_t BgL_envz00_2543,
		obj_t BgL_classfilez00_2544, obj_t BgL_nz00_2545)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 252 */
			return
				BINT(BGl_poolzd2elongzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2544),
					BELONG_TO_LONG(BgL_nz00_2545)));
		}
	}



/* pool-float */
	BGL_EXPORTED_DEF int
		BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_45, float BgL_nz00_46)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 255 */
			{	/* Jas/classfile.scm 256 */
				obj_t BgL_arg2671z00_1518;

				BgL_arg2671z00_1518 = BGl_f2z00zzjas_libz00(BgL_nz00_46);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_45,
						((long) 4), BgL_arg2671z00_1518));
		}}
	}



/* _pool-float */
	obj_t BGl__poolzd2floatzd2zzjas_classfilez00(obj_t BgL_envz00_2546,
		obj_t BgL_classfilez00_2547, obj_t BgL_nz00_2548)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 255 */
			return
				BINT(BGl_poolzd2floatzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2547),
					REAL_TO_FLOAT(BgL_nz00_2548)));
		}
	}



/* pool-long */
	BGL_EXPORTED_DEF int
		BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_47, long BgL_nz00_48)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 258 */
			{	/* Jas/classfile.scm 259 */
				obj_t BgL_arg2673z00_1520;

				BgL_arg2673z00_1520 = BGl_w4z00zzjas_libz00(BgL_nz00_48);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_47,
						((long) 5), BgL_arg2673z00_1520));
		}}
	}



/* _pool-long */
	obj_t BGl__poolzd2longzd2zzjas_classfilez00(obj_t BgL_envz00_2549,
		obj_t BgL_classfilez00_2550, obj_t BgL_nz00_2551)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 258 */
			return
				BINT(BGl_poolzd2longzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2550),
					(long) CINT(BgL_nz00_2551)));
		}
	}



/* pool-llong */
	BGL_EXPORTED_DEF int
		BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_49, BGL_LONGLONG_T BgL_nz00_50)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 261 */
			{	/* Jas/classfile.scm 262 */
				obj_t BgL_arg2675z00_1522;

				BgL_arg2675z00_1522 = BGl_w4llongz00zzjas_libz00(BgL_nz00_50);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_49,
						((long) 5), BgL_arg2675z00_1522));
		}}
	}



/* _pool-llong */
	obj_t BGl__poolzd2llongzd2zzjas_classfilez00(obj_t BgL_envz00_2552,
		obj_t BgL_classfilez00_2553, obj_t BgL_nz00_2554)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 261 */
			return
				BINT(BGl_poolzd2llongzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2553),
					BLLONG_TO_LLONG(BgL_nz00_2554)));
		}
	}



/* pool-double */
	BGL_EXPORTED_DEF int
		BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_51, double BgL_nz00_52)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 264 */
			{	/* Jas/classfile.scm 265 */
				obj_t BgL_arg2677z00_1524;

				BgL_arg2677z00_1524 = BGl_f4z00zzjas_libz00(BgL_nz00_52);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_51,
						((long) 6), BgL_arg2677z00_1524));
		}}
	}



/* _pool-double */
	obj_t BGl__poolzd2doublezd2zzjas_classfilez00(obj_t BgL_envz00_2555,
		obj_t BgL_classfilez00_2556, obj_t BgL_nz00_2557)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 264 */
			return
				BINT(BGl_poolzd2doublezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2556),
					REAL_TO_DOUBLE(BgL_nz00_2557)));
		}
	}



/* pool-class */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_53, BgL_classez00_bglt BgL_classez00_54)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 267 */
			if (CBOOL((((BgL_classez00_bglt) CREF(BgL_classez00_54))->BgL_poolz00)))
				{	/* Jas/classfile.scm 269 */
					return
						CINT((((BgL_classez00_bglt) CREF(BgL_classez00_54))->BgL_poolz00));
				}
			else
				{	/* Jas/classfile.scm 271 */
					int BgL_pnamez00_625;

					{	/* Jas/classfile.scm 271 */
						obj_t BgL_arg2682z00_630;

						BgL_arg2682z00_630 =
							(((BgL_classez00_bglt) CREF(BgL_classez00_54))->BgL_namez00);
						{	/* Jas/classfile.scm 271 */
							int BgL_res2985z00_1530;

							{	/* Jas/classfile.scm 271 */
								obj_t BgL_namez00_1529;

								BgL_namez00_1529 = BgL_arg2682z00_630;
								BgL_res2985z00_1530 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_53, ((long) 1), BgL_namez00_1529));
							}
							BgL_pnamez00_625 = BgL_res2985z00_1530;
					}}
					{	/* Jas/classfile.scm 272 */
						obj_t BgL_rz00_626;

						{	/* Jas/classfile.scm 272 */
							obj_t BgL_arg2680z00_628;

							{	/* Jas/classfile.scm 272 */
								obj_t BgL_list2681z00_629;

								BgL_list2681z00_629 = MAKE_PAIR(BINT(BgL_pnamez00_625), BNIL);
								BgL_arg2680z00_628 = BgL_list2681z00_629;
							}
							BgL_rz00_626 =
								BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_53,
								((long) 7), BgL_arg2680z00_628);
						}
						((((BgL_classez00_bglt) CREF(BgL_classez00_54))->BgL_poolz00) =
							((obj_t) BgL_rz00_626), BUNSPEC);
						return CINT(BgL_rz00_626);
					}
				}
		}
	}



/* _pool-class */
	obj_t BGl__poolzd2classzd2zzjas_classfilez00(obj_t BgL_envz00_2558,
		obj_t BgL_classfilez00_2559, obj_t BgL_classez00_2560)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 267 */
			return
				BINT(BGl_poolzd2classzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2559),
					(BgL_classez00_bglt) (BgL_classez00_2560)));
		}
	}



/* pool-class-by-name */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_55, obj_t BgL_namez00_56)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 276 */
			return
				BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_55,
				BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_55,
					BgL_namez00_56));
		}
	}



/* _pool-class-by-name */
	obj_t BGl__poolzd2classzd2byzd2namezd2zzjas_classfilez00(obj_t
		BgL_envz00_2561, obj_t BgL_classfilez00_2562, obj_t BgL_namez00_2563)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 276 */
			return
				BINT(BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2562), BgL_namez00_2563));
		}
	}



/* pool-class-by-reftype */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_57, BgL_typez00_bglt BgL_reftypez00_58)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 279 */
			{	/* Jas/classfile.scm 280 */
				bool_t BgL_testz00_3631;

				{	/* Jas/classfile.scm 280 */
					obj_t BgL_obj1601z00_1536;

					BgL_obj1601z00_1536 = (obj_t) (BgL_reftypez00_58);
					BgL_testz00_3631 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1601z00_1536,
						BGl_vectz00zzjas_classfilez00);
				}
				if (BgL_testz00_3631)
					{	/* Jas/classfile.scm 281 */
						int BgL_pnamez00_633;

						{	/* Jas/classfile.scm 281 */
							obj_t BgL_arg2688z00_637;

							BgL_arg2688z00_637 =
								(((BgL_typez00_bglt) CREF(BgL_reftypez00_58))->BgL_codez00);
							BgL_pnamez00_633 =
								CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
								(BgL_classfilez00_57, ((long) 1), BgL_arg2688z00_637));
						}
						{	/* Jas/classfile.scm 282 */
							obj_t BgL_arg2686z00_635;

							{	/* Jas/classfile.scm 282 */
								obj_t BgL_list2687z00_636;

								BgL_list2687z00_636 = MAKE_PAIR(BINT(BgL_pnamez00_633), BNIL);
								BgL_arg2686z00_635 = BgL_list2687z00_636;
							}
							return
								CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_57,
									((long) 7), BgL_arg2686z00_635));
					}}
				else
					{	/* Jas/classfile.scm 280 */
						return
							BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_57,
							(BgL_classez00_bglt) (BgL_reftypez00_58));
					}
			}
		}
	}



/* _pool-class-by-reftype */
	obj_t BGl__poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(obj_t
		BgL_envz00_2564, obj_t BgL_classfilez00_2565, obj_t BgL_reftypez00_2566)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 279 */
			return
				BINT(BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2565),
					(BgL_typez00_bglt) (BgL_reftypez00_2566)));
		}
	}



/* pool-string */
	BGL_EXPORTED_DEF int
		BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_59, obj_t BgL_strz00_60)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 285 */
			{	/* Jas/classfile.scm 286 */
				obj_t BgL_arg2690z00_639;

				{	/* Jas/classfile.scm 286 */
					int BgL_arg2691z00_640;

					BgL_arg2691z00_640 =
						CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
						(BgL_classfilez00_59, ((long) 1), BgL_strz00_60));
					{	/* Jas/classfile.scm 286 */
						obj_t BgL_list2692z00_641;

						BgL_list2692z00_641 = MAKE_PAIR(BINT(BgL_arg2691z00_640), BNIL);
						BgL_arg2690z00_639 = BgL_list2692z00_641;
				}}
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_59,
						((long) 8), BgL_arg2690z00_639));
		}}
	}



/* _pool-string */
	obj_t BGl__poolzd2stringzd2zzjas_classfilez00(obj_t BgL_envz00_2567,
		obj_t BgL_classfilez00_2568, obj_t BgL_strz00_2569)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 285 */
			return
				BINT(BGl_poolzd2stringzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2568), BgL_strz00_2569));
		}
	}



/* pool-field */
	BGL_EXPORTED_DEF int
		BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_61, BgL_fieldz00_bglt BgL_fieldz00_62)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 288 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_61,
					(obj_t) (BgL_fieldz00_62), ((long) 9)));
		}
	}



/* _pool-field */
	obj_t BGl__poolzd2fieldzd2zzjas_classfilez00(obj_t BgL_envz00_2570,
		obj_t BgL_classfilez00_2571, obj_t BgL_fieldz00_2572)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 288 */
			return
				BINT(BGl_poolzd2fieldzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2571),
					(BgL_fieldz00_bglt) (BgL_fieldz00_2572)));
		}
	}



/* pool-method */
	BGL_EXPORTED_DEF int
		BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_63, BgL_methodz00_bglt BgL_methodz00_64)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 291 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_63,
					(obj_t) (BgL_methodz00_64), ((long) 10)));
		}
	}



/* _pool-method */
	obj_t BGl__poolzd2methodzd2zzjas_classfilez00(obj_t BgL_envz00_2573,
		obj_t BgL_classfilez00_2574, obj_t BgL_methodz00_2575)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 291 */
			return
				BINT(BGl_poolzd2methodzd2zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2574),
					(BgL_methodz00_bglt) (BgL_methodz00_2575)));
		}
	}



/* pool-interface-method */
	BGL_EXPORTED_DEF int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_65, BgL_methodz00_bglt BgL_fieldz00_66)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 294 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_65,
					(obj_t) (BgL_fieldz00_66), ((long) 11)));
		}
	}



/* _pool-interface-method */
	obj_t BGl__poolzd2interfacezd2methodz00zzjas_classfilez00(obj_t
		BgL_envz00_2576, obj_t BgL_classfilez00_2577, obj_t BgL_fieldz00_2578)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 294 */
			return
				BINT(BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(
					(BgL_classfilez00_bglt) (BgL_classfilez00_2577),
					(BgL_methodz00_bglt) (BgL_fieldz00_2578)));
		}
	}



/* pool-field-method */
	obj_t BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_67, obj_t BgL_fmz00_68, long BgL_tagz00_69)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 297 */
			{	/* Jas/classfile.scm 299 */
				bool_t BgL_testz00_3677;

				{	/* Jas/classfile.scm 299 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_obj1732z00_1548;

					BgL_obj1732z00_1548 =
						(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
					BgL_testz00_3677 =
						CBOOL(
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1732z00_1548))->
							BgL_poolz00));
				}
				if (BgL_testz00_3677)
					{
						BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3681;

						BgL_auxz00_3681 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
						return
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_3681))->
							BgL_poolz00);
					}
				else
					{	/* Jas/classfile.scm 301 */
						int BgL_pnz00_644;

						{	/* Jas/classfile.scm 301 */
							obj_t BgL_arg2704z00_659;

							{
								BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3684;

								BgL_auxz00_3684 =
									(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
								BgL_arg2704z00_659 =
									(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_3684))->
									BgL_namez00);
							}
							BgL_pnz00_644 =
								CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
								(BgL_classfilez00_67, ((long) 1), BgL_arg2704z00_659));
						}
						{	/* Jas/classfile.scm 301 */
							int BgL_ptz00_645;

							{	/* Jas/classfile.scm 302 */
								obj_t BgL_arg2702z00_657;

								{	/* Jas/classfile.scm 302 */
									BgL_typez00_bglt BgL_obj1508z00_1555;

									{	/* Jas/classfile.scm 302 */
										BgL_fieldzd2orzd2methodz00_bglt BgL_obj1722z00_1554;

										BgL_obj1722z00_1554 =
											(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
										BgL_obj1508z00_1555 =
											(BgL_typez00_bglt) (
											(((BgL_fieldzd2orzd2methodz00_bglt)
													CREF(BgL_obj1722z00_1554))->BgL_typez00));
									}
									BgL_arg2702z00_657 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1555))->
										BgL_codez00);
								}
								BgL_ptz00_645 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_67, ((long) 1), BgL_arg2702z00_657));
							}
							{	/* Jas/classfile.scm 302 */
								int BgL_cz00_646;

								{	/* Jas/classfile.scm 303 */
									obj_t BgL_arg2701z00_656;

									{
										BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3695;

										BgL_auxz00_3695 =
											(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
										BgL_arg2701z00_656 =
											(((BgL_fieldzd2orzd2methodz00_bglt)
												CREF(BgL_auxz00_3695))->BgL_ownerz00);
									}
									{	/* Jas/classfile.scm 303 */
										int BgL_res2993z00_1563;

										{	/* Jas/classfile.scm 303 */
											obj_t BgL_namez00_1561;

											BgL_namez00_1561 = BgL_arg2701z00_656;
											BgL_res2993z00_1563 =
												BGl_poolzd2classzd2zzjas_classfilez00
												(BgL_classfilez00_67,
												BGl_declaredzd2classzd2zzjas_classfilez00
												(BgL_classfilez00_67, BgL_namez00_1561));
										}
										BgL_cz00_646 = BgL_res2993z00_1563;
								}}
								{	/* Jas/classfile.scm 303 */
									obj_t BgL_dz00_647;

									{	/* Jas/classfile.scm 304 */
										obj_t BgL_arg2698z00_653;

										{	/* Jas/classfile.scm 304 */
											obj_t BgL_list2699z00_654;

											{	/* Jas/classfile.scm 304 */
												obj_t BgL_arg2700z00_655;

												BgL_arg2700z00_655 =
													MAKE_PAIR(BINT(BgL_ptz00_645), BNIL);
												BgL_list2699z00_654 =
													MAKE_PAIR(BINT(BgL_pnz00_644), BgL_arg2700z00_655);
											}
											BgL_arg2698z00_653 = BgL_list2699z00_654;
										}
										BgL_dz00_647 =
											BGl_poolzd2getz12zc0zzjas_classfilez00
											(BgL_classfilez00_67, ((long) 12), BgL_arg2698z00_653);
									}
									{	/* Jas/classfile.scm 304 */
										obj_t BgL_rz00_648;

										{	/* Jas/classfile.scm 305 */
											obj_t BgL_arg2694z00_649;

											{	/* Jas/classfile.scm 305 */
												obj_t BgL_list2695z00_650;

												{	/* Jas/classfile.scm 305 */
													obj_t BgL_arg2696z00_651;

													BgL_arg2696z00_651 = MAKE_PAIR(BgL_dz00_647, BNIL);
													BgL_list2695z00_650 =
														MAKE_PAIR(BINT(BgL_cz00_646), BgL_arg2696z00_651);
												}
												BgL_arg2694z00_649 = BgL_list2695z00_650;
											}
											BgL_rz00_648 =
												BGl_poolzd2getz12zc0zzjas_classfilez00
												(BgL_classfilez00_67, BgL_tagz00_69,
												BgL_arg2694z00_649);
										}
										{	/* Jas/classfile.scm 305 */

											{
												obj_t BgL_auxz00_3711;

												BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3709;

												BgL_auxz00_3711 = BINT(BgL_pnz00_644);
												BgL_auxz00_3709 =
													(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
												((((BgL_fieldzd2orzd2methodz00_bglt)
															CREF(BgL_auxz00_3709))->BgL_pnamez00) =
													((obj_t) BgL_auxz00_3711), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_3716;

												BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3714;

												BgL_auxz00_3716 = BINT(BgL_ptz00_645);
												BgL_auxz00_3714 =
													(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
												((((BgL_fieldzd2orzd2methodz00_bglt)
															CREF(BgL_auxz00_3714))->BgL_descriptorz00) =
													((obj_t) BgL_auxz00_3716), BUNSPEC);
											}
											{
												BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3719;

												BgL_auxz00_3719 =
													(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_68);
												((((BgL_fieldzd2orzd2methodz00_bglt)
															CREF(BgL_auxz00_3719))->BgL_poolz00) =
													((obj_t) BgL_rz00_648), BUNSPEC);
											}
											return BgL_rz00_648;
										}
									}
								}
							}
						}
					}
			}
		}
	}



/* pool-local-method */
	BGL_EXPORTED_DEF obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_70, BgL_methodz00_bglt BgL_methodz00_71)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 311 */
			return
				BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00
				(BgL_classfilez00_70, BgL_methodz00_71, ((long) 10));
		}
	}



/* _pool-local-method */
	obj_t BGl__poolzd2localzd2methodz00zzjas_classfilez00(obj_t BgL_envz00_2579,
		obj_t BgL_classfilez00_2580, obj_t BgL_methodz00_2581)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 311 */
			return
				BGl_poolzd2localzd2methodz00zzjas_classfilez00(
				(BgL_classfilez00_bglt) (BgL_classfilez00_2580),
				(BgL_methodz00_bglt) (BgL_methodz00_2581));
		}
	}



/* pool-field-method-local */
	obj_t
		BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_72, BgL_methodz00_bglt BgL_fmz00_73, long BgL_tagz00_74)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 315 */
			{	/* Jas/classfile.scm 317 */
				bool_t BgL_testz00_3726;

				{	/* Jas/classfile.scm 317 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_obj1732z00_1574;

					BgL_obj1732z00_1574 =
						(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_73);
					BgL_testz00_3726 =
						CBOOL(
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1732z00_1574))->
							BgL_poolz00));
				}
				if (BgL_testz00_3726)
					{	/* Jas/classfile.scm 317 */
						return BFALSE;
					}
				else
					{	/* Jas/classfile.scm 317 */
						{	/* Jas/classfile.scm 318 */
							int BgL_arg2706z00_662;

							{	/* Jas/classfile.scm 318 */
								obj_t BgL_arg2707z00_663;

								{
									BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3730;

									BgL_auxz00_3730 =
										(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_73);
									BgL_arg2707z00_663 =
										(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_3730))->
										BgL_namez00);
								}
								BgL_arg2706z00_662 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_72, ((long) 1), BgL_arg2707z00_663));
							}
							{
								obj_t BgL_auxz00_3737;

								BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3735;

								BgL_auxz00_3737 = BINT(BgL_arg2706z00_662);
								BgL_auxz00_3735 =
									(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_73);
								((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_3735))->
										BgL_pnamez00) = ((obj_t) BgL_auxz00_3737), BUNSPEC);
						}}
						{	/* Jas/classfile.scm 319 */
							int BgL_arg2708z00_664;

							{	/* Jas/classfile.scm 319 */
								obj_t BgL_arg2709z00_665;

								{	/* Jas/classfile.scm 319 */
									BgL_typez00_bglt BgL_obj1508z00_1582;

									{	/* Jas/classfile.scm 319 */
										BgL_fieldzd2orzd2methodz00_bglt BgL_obj1722z00_1581;

										BgL_obj1722z00_1581 =
											(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_73);
										BgL_obj1508z00_1582 =
											(BgL_typez00_bglt) (
											(((BgL_fieldzd2orzd2methodz00_bglt)
													CREF(BgL_obj1722z00_1581))->BgL_typez00));
									}
									BgL_arg2709z00_665 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1582))->
										BgL_codez00);
								}
								BgL_arg2708z00_664 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_72, ((long) 1), BgL_arg2709z00_665));
							}
							{
								obj_t BgL_auxz00_3748;

								BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_3746;

								BgL_auxz00_3748 = BINT(BgL_arg2708z00_664);
								BgL_auxz00_3746 =
									(BgL_fieldzd2orzd2methodz00_bglt) (BgL_fmz00_73);
								return
									((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_3746))->
										BgL_descriptorz00) = ((obj_t) BgL_auxz00_3748), BUNSPEC);
							}
						}
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 4 */
				obj_t BgL_arg2711z00_667;

				obj_t BgL_arg2712z00_668;

				obj_t BgL_arg2716z00_671;

				BgL_arg2711z00_667 = CNST_TABLE_REF(((long) 14));
				BgL_arg2712z00_668 = BGl_objectz00zz__objectz00;
				{	/* Jas/classfile.scm 4 */
					obj_t BgL_v2232z00_672;

					BgL_v2232z00_672 = create_vector((int) (((long) 0)));
					BgL_arg2716z00_671 = BgL_v2232z00_672;
				}
				BGl_typez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2711z00_667,
					BgL_arg2712z00_668, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2typezd2envz52zzjas_classfilez00,
					BGl_typezd2nilzd2envz00zzjas_classfilez00,
					BGl_typezf3zd2envz21zzjas_classfilez00, ((long) 165886633), BFALSE,
					BFALSE, BgL_arg2716z00_671);
			}
			{	/* Jas/classfile.scm 8 */
				obj_t BgL_arg2717z00_673;

				obj_t BgL_arg2718z00_674;

				obj_t BgL_arg2721z00_677;

				BgL_arg2717z00_673 = CNST_TABLE_REF(((long) 15));
				BgL_arg2718z00_674 = BGl_typez00zzjas_classfilez00;
				{	/* Jas/classfile.scm 8 */
					obj_t BgL_v2233z00_678;

					BgL_v2233z00_678 = create_vector((int) (((long) 0)));
					BgL_arg2721z00_677 = BgL_v2233z00_678;
				}
				BGl_basicz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2717z00_673,
					BgL_arg2718z00_674, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2basiczd2envz52zzjas_classfilez00,
					BGl_basiczd2nilzd2envz00zzjas_classfilez00,
					BGl_basiczf3zd2envz21zzjas_classfilez00, ((long) 724051), BFALSE,
					BFALSE, BgL_arg2721z00_677);
			}
			{	/* Jas/classfile.scm 10 */
				obj_t BgL_arg2722z00_679;

				obj_t BgL_arg2724z00_680;

				obj_t BgL_arg2727z00_683;

				BgL_arg2722z00_679 = CNST_TABLE_REF(((long) 16));
				BgL_arg2724z00_680 = BGl_typez00zzjas_classfilez00;
				{	/* Jas/classfile.scm 10 */
					obj_t BgL_v2234z00_684;

					BgL_v2234z00_684 = create_vector((int) (((long) 0)));
					BgL_arg2727z00_683 = BgL_v2234z00_684;
				}
				BGl_vectz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2722z00_679,
					BgL_arg2724z00_680, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vectzd2envz52zzjas_classfilez00,
					BGl_vectzd2nilzd2envz00zzjas_classfilez00,
					BGl_vectzf3zd2envz21zzjas_classfilez00, ((long) 276910178), BFALSE,
					BFALSE, BgL_arg2727z00_683);
			}
			{	/* Jas/classfile.scm 12 */
				obj_t BgL_arg2728z00_685;

				obj_t BgL_arg2729z00_686;

				obj_t BgL_arg2732z00_689;

				BgL_arg2728z00_685 = CNST_TABLE_REF(((long) 17));
				BgL_arg2729z00_686 = BGl_typez00zzjas_classfilez00;
				{	/* Jas/classfile.scm 12 */
					obj_t BgL_v2235z00_690;

					BgL_v2235z00_690 = create_vector((int) (((long) 0)));
					BgL_arg2732z00_689 = BgL_v2235z00_690;
				}
				BGl_funz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2728z00_685,
					BgL_arg2729z00_686, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2funzd2envz52zzjas_classfilez00,
					BGl_funzd2nilzd2envz00zzjas_classfilez00,
					BGl_funzf3zd2envz21zzjas_classfilez00, ((long) 468576302), BFALSE,
					BFALSE, BgL_arg2732z00_689);
			}
			{	/* Jas/classfile.scm 14 */
				obj_t BgL_arg2733z00_691;

				obj_t BgL_arg2734z00_692;

				obj_t BgL_arg2737z00_695;

				BgL_arg2733z00_691 = CNST_TABLE_REF(((long) 18));
				BgL_arg2734z00_692 = BGl_typez00zzjas_classfilez00;
				{	/* Jas/classfile.scm 14 */
					obj_t BgL_v2236z00_696;

					BgL_v2236z00_696 = create_vector((int) (((long) 0)));
					BgL_arg2737z00_695 = BgL_v2236z00_696;
				}
				BGl_classez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2733z00_691,
					BgL_arg2734z00_692, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2classezd2envz52zzjas_classfilez00,
					BGl_classezd2nilzd2envz00zzjas_classfilez00,
					BGl_classezf3zd2envz21zzjas_classfilez00, ((long) 7272043), BFALSE,
					BFALSE, BgL_arg2737z00_695);
			}
			{	/* Jas/classfile.scm 19 */
				obj_t BgL_arg2738z00_697;

				obj_t BgL_arg2739z00_698;

				obj_t BgL_arg2742z00_701;

				BgL_arg2738z00_697 = CNST_TABLE_REF(((long) 19));
				BgL_arg2739z00_698 = BGl_objectz00zz__objectz00;
				{	/* Jas/classfile.scm 19 */
					obj_t BgL_v2237z00_702;

					BgL_v2237z00_702 = create_vector((int) (((long) 0)));
					BgL_arg2742z00_701 = BgL_v2237z00_702;
				}
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2738z00_697,
					BgL_arg2739z00_698, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2fieldzd2orzd2methodzd2envz52zzjas_classfilez00,
					BGl_fieldzd2orzd2methodzd2nilzd2envz00zzjas_classfilez00,
					BGl_fieldzd2orzd2methodzf3zd2envz21zzjas_classfilez00,
					((long) 9409212), BFALSE, BFALSE, BgL_arg2742z00_701);
			}
			{	/* Jas/classfile.scm 30 */
				obj_t BgL_arg2743z00_703;

				obj_t BgL_arg2745z00_704;

				obj_t BgL_arg2748z00_707;

				BgL_arg2743z00_703 = CNST_TABLE_REF(((long) 20));
				BgL_arg2745z00_704 = BGl_fieldzd2orzd2methodz00zzjas_classfilez00;
				{	/* Jas/classfile.scm 30 */
					obj_t BgL_v2238z00_708;

					BgL_v2238z00_708 = create_vector((int) (((long) 0)));
					BgL_arg2748z00_707 = BgL_v2238z00_708;
				}
				BGl_fieldz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2743z00_703,
					BgL_arg2745z00_704, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2fieldzd2envz52zzjas_classfilez00,
					BGl_fieldzd2nilzd2envz00zzjas_classfilez00,
					BGl_fieldzf3zd2envz21zzjas_classfilez00, ((long) 755021), BFALSE,
					BFALSE, BgL_arg2748z00_707);
			}
			{	/* Jas/classfile.scm 32 */
				obj_t BgL_arg2749z00_709;

				obj_t BgL_arg2750z00_710;

				obj_t BgL_arg2754z00_713;

				BgL_arg2749z00_709 = CNST_TABLE_REF(((long) 21));
				BgL_arg2750z00_710 = BGl_fieldzd2orzd2methodz00zzjas_classfilez00;
				{	/* Jas/classfile.scm 32 */
					obj_t BgL_v2239z00_714;

					BgL_v2239z00_714 = create_vector((int) (((long) 0)));
					BgL_arg2754z00_713 = BgL_v2239z00_714;
				}
				BGl_methodz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2749z00_709,
					BgL_arg2750z00_710, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2methodzd2envz52zzjas_classfilez00,
					BGl_methodzd2nilzd2envz00zzjas_classfilez00,
					BGl_methodzf3zd2envz21zzjas_classfilez00, ((long) 7193090), BFALSE,
					BFALSE, BgL_arg2754z00_713);
			}
			{	/* Jas/classfile.scm 34 */
				obj_t BgL_arg2755z00_715;

				obj_t BgL_arg2756z00_716;

				obj_t BgL_arg2760z00_719;

				BgL_arg2755z00_715 = CNST_TABLE_REF(((long) 22));
				BgL_arg2756z00_716 = BGl_objectz00zz__objectz00;
				{	/* Jas/classfile.scm 34 */
					obj_t BgL_v2240z00_720;

					BgL_v2240z00_720 = create_vector((int) (((long) 0)));
					BgL_arg2760z00_719 = BgL_v2240z00_720;
				}
				BGl_attributez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2755z00_715,
					BgL_arg2756z00_716, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2attributezd2envz52zzjas_classfilez00,
					BGl_attributezd2nilzd2envz00zzjas_classfilez00,
					BGl_attributezf3zd2envz21zzjas_classfilez00, ((long) 504541933),
					BFALSE, BFALSE, BgL_arg2760z00_719);
			}
			{	/* Jas/classfile.scm 40 */
				obj_t BgL_arg2761z00_721;

				obj_t BgL_arg2762z00_722;

				obj_t BgL_arg2765z00_725;

				BgL_arg2761z00_721 = CNST_TABLE_REF(((long) 23));
				BgL_arg2762z00_722 = BGl_objectz00zz__objectz00;
				{	/* Jas/classfile.scm 40 */
					obj_t BgL_v2241z00_726;

					BgL_v2241z00_726 = create_vector((int) (((long) 0)));
					BgL_arg2765z00_725 = BgL_v2241z00_726;
				}
				BGl_classfilez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2761z00_721,
					BgL_arg2762z00_722, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2classfilezd2envz52zzjas_classfilez00,
					BGl_classfilezd2nilzd2envz00zzjas_classfilez00,
					BGl_classfilezf3zd2envz21zzjas_classfilez00, ((long) 338927872),
					BFALSE, BFALSE, BgL_arg2765z00_725);
			}
			BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2attributezd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2methodzd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2classezd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2funzd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2vectzd2nilz52zzjas_classfilez00 = BUNSPEC;
			BGl_z52thezd2basiczd2nilz52zzjas_classfilez00 = BUNSPEC;
			return (BGl_z52thezd2typezd2nilz52zzjas_classfilez00 = BUNSPEC, BUNSPEC);
		}
	}



/* classfile? */
	BGL_EXPORTED_DEF bool_t BGl_classfilezf3zf3zzjas_classfilez00(obj_t
		BgL_obj2182z00_75)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2182z00_75,
				BGl_classfilez00zzjas_classfilez00);
		}
	}



/* _classfile? */
	obj_t BGl__classfilezf3zf3zzjas_classfilez00(obj_t BgL_envz00_2620,
		obj_t BgL_obj2182z00_2621)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2182z00_2621,
					BGl_classfilez00zzjas_classfilez00));
		}
	}



/* make-classfile */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_makezd2classfilezd2zzjas_classfilez00(obj_t
		BgL_currentzd2method2091zd2_79, obj_t BgL_globals2092z00_80,
		obj_t BgL_pool2093z00_81, obj_t BgL_poolzd2siza7e2094z75_82,
		obj_t BgL_pooledzd2names2095zd2_83, obj_t BgL_flags2096z00_84,
		obj_t BgL_me2097z00_85, obj_t BgL_super2098z00_86,
		obj_t BgL_interfaces2099z00_87, obj_t BgL_fields2100z00_88,
		obj_t BgL_methods2101z00_89, obj_t BgL_attributes2102z00_90)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{	/* Jas/classfile.scm 40 */
				BgL_classfilez00_bglt BgL_new2103z00_1588;

				{	/* Jas/classfile.scm 40 */
					BgL_classfilez00_bglt BgL_res2998z00_1593;

					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_new2131z00_1589;

						BgL_new2131z00_1589 =
							((BgL_classfilez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_classfilez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2131z00_1589),
							BGl_classzd2numzd2zz__objectz00
							(BGl_classfilez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_3798;

							BgL_auxz00_3798 = (BgL_objectz00_bglt) (BgL_new2131z00_1589);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3798, BFALSE);
						}
						BgL_res2998z00_1593 = BgL_new2131z00_1589;
					}
					BgL_new2103z00_1588 = BgL_res2998z00_1593;
				}
				{	/* Jas/classfile.scm 40 */
					BgL_classfilez00_bglt BgL_res2999z00_1619;

					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_new2117z00_1594;

						BgL_new2117z00_1594 = BgL_new2103z00_1588;
						{	/* Jas/classfile.scm 40 */
							obj_t BgL_currentzd2method2105zd2_1607;

							obj_t BgL_globals2106z00_1608;

							obj_t BgL_pool2107z00_1609;

							obj_t BgL_poolzd2siza7e2108z75_1610;

							obj_t BgL_pooledzd2names2109zd2_1611;

							obj_t BgL_flags2110z00_1612;

							obj_t BgL_me2111z00_1613;

							obj_t BgL_super2112z00_1614;

							obj_t BgL_interfaces2113z00_1615;

							obj_t BgL_fields2114z00_1616;

							obj_t BgL_methods2115z00_1617;

							obj_t BgL_attributes2116z00_1618;

							BgL_currentzd2method2105zd2_1607 = BgL_currentzd2method2091zd2_79;
							BgL_globals2106z00_1608 = BgL_globals2092z00_80;
							BgL_pool2107z00_1609 = BgL_pool2093z00_81;
							BgL_poolzd2siza7e2108z75_1610 = BgL_poolzd2siza7e2094z75_82;
							BgL_pooledzd2names2109zd2_1611 = BgL_pooledzd2names2095zd2_83;
							BgL_flags2110z00_1612 = BgL_flags2096z00_84;
							BgL_me2111z00_1613 = BgL_me2097z00_85;
							BgL_super2112z00_1614 = BgL_super2098z00_86;
							BgL_interfaces2113z00_1615 = BgL_interfaces2099z00_87;
							BgL_fields2114z00_1616 = BgL_fields2100z00_88;
							BgL_methods2115z00_1617 = BgL_methods2101z00_89;
							BgL_attributes2116z00_1618 = BgL_attributes2102z00_90;
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_currentzd2methodzd2) =
								((obj_t) BgL_currentzd2method2105zd2_1607), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_globalsz00) = ((obj_t) BgL_globals2106z00_1608), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_poolz00) = ((obj_t) BgL_pool2107z00_1609), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_poolzd2siza7ez75) =
								((obj_t) BgL_poolzd2siza7e2108z75_1610), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_pooledzd2nameszd2) =
								((obj_t) BgL_pooledzd2names2109zd2_1611), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_flagsz00) = ((obj_t) BgL_flags2110z00_1612), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_mez00) = ((obj_t) BgL_me2111z00_1613), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_superz00) = ((obj_t) BgL_super2112z00_1614), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_interfacesz00) =
								((obj_t) BgL_interfaces2113z00_1615), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_fieldsz00) = ((obj_t) BgL_fields2114z00_1616), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_methodsz00) = ((obj_t) BgL_methods2115z00_1617), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1594))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes2116z00_1618), BUNSPEC);
							BgL_res2999z00_1619 = BgL_new2117z00_1594;
					}} BgL_res2999z00_1619;
				}
				return BgL_new2103z00_1588;
			}
		}
	}



/* _make-classfile */
	obj_t BGl__makezd2classfilezd2zzjas_classfilez00(obj_t BgL_envz00_2622,
		obj_t BgL_currentzd2method2091zd2_2623, obj_t BgL_globals2092z00_2624,
		obj_t BgL_pool2093z00_2625, obj_t BgL_poolzd2siza7e2094z75_2626,
		obj_t BgL_pooledzd2names2095zd2_2627, obj_t BgL_flags2096z00_2628,
		obj_t BgL_me2097z00_2629, obj_t BgL_super2098z00_2630,
		obj_t BgL_interfaces2099z00_2631, obj_t BgL_fields2100z00_2632,
		obj_t BgL_methods2101z00_2633, obj_t BgL_attributes2102z00_2634)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			return
				(obj_t) (BGl_makezd2classfilezd2zzjas_classfilez00
				(BgL_currentzd2method2091zd2_2623, BgL_globals2092z00_2624,
					BgL_pool2093z00_2625, BgL_poolzd2siza7e2094z75_2626,
					BgL_pooledzd2names2095zd2_2627, BgL_flags2096z00_2628,
					BgL_me2097z00_2629, BgL_super2098z00_2630, BgL_interfaces2099z00_2631,
					BgL_fields2100z00_2632, BgL_methods2101z00_2633,
					BgL_attributes2102z00_2634));
		}
	}



/* fill-classfile! */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_fillzd2classfilez12zc0zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_new2117z00_91, obj_t BgL_currentzd2method2105zd2_92,
		obj_t BgL_globals2106z00_93, obj_t BgL_pool2107z00_94,
		obj_t BgL_poolzd2siza7e2108z75_95, obj_t BgL_pooledzd2names2109zd2_96,
		obj_t BgL_flags2110z00_97, obj_t BgL_me2111z00_98,
		obj_t BgL_super2112z00_99, obj_t BgL_interfaces2113z00_100,
		obj_t BgL_fields2114z00_101, obj_t BgL_methods2115z00_102,
		obj_t BgL_attributes2116z00_103)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{	/* Jas/classfile.scm 40 */
				obj_t BgL_currentzd2method2105zd2_2856;

				obj_t BgL_globals2106z00_2857;

				obj_t BgL_pool2107z00_2858;

				obj_t BgL_poolzd2siza7e2108z75_2859;

				obj_t BgL_pooledzd2names2109zd2_2860;

				obj_t BgL_flags2110z00_2861;

				obj_t BgL_me2111z00_2862;

				obj_t BgL_super2112z00_2863;

				obj_t BgL_interfaces2113z00_2864;

				obj_t BgL_fields2114z00_2865;

				obj_t BgL_methods2115z00_2866;

				obj_t BgL_attributes2116z00_2867;

				BgL_currentzd2method2105zd2_2856 = BgL_currentzd2method2105zd2_92;
				BgL_globals2106z00_2857 = BgL_globals2106z00_93;
				BgL_pool2107z00_2858 = BgL_pool2107z00_94;
				BgL_poolzd2siza7e2108z75_2859 = BgL_poolzd2siza7e2108z75_95;
				BgL_pooledzd2names2109zd2_2860 = BgL_pooledzd2names2109zd2_96;
				BgL_flags2110z00_2861 = BgL_flags2110z00_97;
				BgL_me2111z00_2862 = BgL_me2111z00_98;
				BgL_super2112z00_2863 = BgL_super2112z00_99;
				BgL_interfaces2113z00_2864 = BgL_interfaces2113z00_100;
				BgL_fields2114z00_2865 = BgL_fields2114z00_101;
				BgL_methods2115z00_2866 = BgL_methods2115z00_102;
				BgL_attributes2116z00_2867 = BgL_attributes2116z00_103;
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->
						BgL_currentzd2methodzd2) =
					((obj_t) BgL_currentzd2method2105zd2_2856), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_globalsz00) =
					((obj_t) BgL_globals2106z00_2857), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_poolz00) =
					((obj_t) BgL_pool2107z00_2858), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->
						BgL_poolzd2siza7ez75) =
					((obj_t) BgL_poolzd2siza7e2108z75_2859), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->
						BgL_pooledzd2nameszd2) =
					((obj_t) BgL_pooledzd2names2109zd2_2860), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_flagsz00) =
					((obj_t) BgL_flags2110z00_2861), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_mez00) =
					((obj_t) BgL_me2111z00_2862), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_superz00) =
					((obj_t) BgL_super2112z00_2863), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->
						BgL_interfacesz00) = ((obj_t) BgL_interfaces2113z00_2864), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_fieldsz00) =
					((obj_t) BgL_fields2114z00_2865), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->BgL_methodsz00) =
					((obj_t) BgL_methods2115z00_2866), BUNSPEC);
				((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_91))->
						BgL_attributesz00) = ((obj_t) BgL_attributes2116z00_2867), BUNSPEC);
				return BgL_new2117z00_91;
			}
		}
	}



/* _fill-classfile! */
	obj_t BGl__fillzd2classfilez12zc0zzjas_classfilez00(obj_t BgL_envz00_2635,
		obj_t BgL_new2117z00_2636, obj_t BgL_currentzd2method2105zd2_2637,
		obj_t BgL_globals2106z00_2638, obj_t BgL_pool2107z00_2639,
		obj_t BgL_poolzd2siza7e2108z75_2640, obj_t BgL_pooledzd2names2109zd2_2641,
		obj_t BgL_flags2110z00_2642, obj_t BgL_me2111z00_2643,
		obj_t BgL_super2112z00_2644, obj_t BgL_interfaces2113z00_2645,
		obj_t BgL_fields2114z00_2646, obj_t BgL_methods2115z00_2647,
		obj_t BgL_attributes2116z00_2648)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{	/* Jas/classfile.scm 40 */
				BgL_classfilez00_bglt BgL_auxz00_3827;

				{	/* Jas/classfile.scm 40 */
					BgL_classfilez00_bglt BgL_res3089z00_2893;

					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_new2117z00_2868;

						BgL_new2117z00_2868 = (BgL_classfilez00_bglt) (BgL_new2117z00_2636);
						{	/* Jas/classfile.scm 40 */
							obj_t BgL_currentzd2method2105zd2_2881;

							obj_t BgL_globals2106z00_2882;

							obj_t BgL_pool2107z00_2883;

							obj_t BgL_poolzd2siza7e2108z75_2884;

							obj_t BgL_pooledzd2names2109zd2_2885;

							obj_t BgL_flags2110z00_2886;

							obj_t BgL_me2111z00_2887;

							obj_t BgL_super2112z00_2888;

							obj_t BgL_interfaces2113z00_2889;

							obj_t BgL_fields2114z00_2890;

							obj_t BgL_methods2115z00_2891;

							obj_t BgL_attributes2116z00_2892;

							BgL_currentzd2method2105zd2_2881 =
								BgL_currentzd2method2105zd2_2637;
							BgL_globals2106z00_2882 = BgL_globals2106z00_2638;
							BgL_pool2107z00_2883 = BgL_pool2107z00_2639;
							BgL_poolzd2siza7e2108z75_2884 = BgL_poolzd2siza7e2108z75_2640;
							BgL_pooledzd2names2109zd2_2885 = BgL_pooledzd2names2109zd2_2641;
							BgL_flags2110z00_2886 = BgL_flags2110z00_2642;
							BgL_me2111z00_2887 = BgL_me2111z00_2643;
							BgL_super2112z00_2888 = BgL_super2112z00_2644;
							BgL_interfaces2113z00_2889 = BgL_interfaces2113z00_2645;
							BgL_fields2114z00_2890 = BgL_fields2114z00_2646;
							BgL_methods2115z00_2891 = BgL_methods2115z00_2647;
							BgL_attributes2116z00_2892 = BgL_attributes2116z00_2648;
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_currentzd2methodzd2) =
								((obj_t) BgL_currentzd2method2105zd2_2881), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_globalsz00) = ((obj_t) BgL_globals2106z00_2882), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_poolz00) = ((obj_t) BgL_pool2107z00_2883), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_poolzd2siza7ez75) =
								((obj_t) BgL_poolzd2siza7e2108z75_2884), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_pooledzd2nameszd2) =
								((obj_t) BgL_pooledzd2names2109zd2_2885), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_flagsz00) = ((obj_t) BgL_flags2110z00_2886), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_mez00) = ((obj_t) BgL_me2111z00_2887), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_superz00) = ((obj_t) BgL_super2112z00_2888), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_interfacesz00) =
								((obj_t) BgL_interfaces2113z00_2889), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_fieldsz00) = ((obj_t) BgL_fields2114z00_2890), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_methodsz00) = ((obj_t) BgL_methods2115z00_2891), BUNSPEC);
							((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_2868))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes2116z00_2892), BUNSPEC);
							BgL_res3089z00_2893 = BgL_new2117z00_2868;
						}
					}
					BgL_auxz00_3827 = BgL_res3089z00_2893;
				}
				return (obj_t) (BgL_auxz00_3827);
			}
		}
	}



/* %allocate-classfile */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_z52allocatezd2classfilez80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{	/* Jas/classfile.scm 40 */
				BgL_classfilez00_bglt BgL_new2131z00_2894;

				BgL_new2131z00_2894 =
					((BgL_classfilez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_classfilez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2131z00_2894),
					BGl_classzd2numzd2zz__objectz00(BGl_classfilez00zzjas_classfilez00));
				{	/* Jas/classfile.scm 40 */
					BgL_objectz00_bglt BgL_auxz00_3846;

					BgL_auxz00_3846 = (BgL_objectz00_bglt) (BgL_new2131z00_2894);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3846, BFALSE);
				}
				return BgL_new2131z00_2894;
			}
		}
	}



/* _%allocate-classfile */
	obj_t BGl__z52allocatezd2classfilez80zzjas_classfilez00(obj_t BgL_envz00_2618)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{	/* Jas/classfile.scm 40 */
				BgL_classfilez00_bglt BgL_auxz00_3849;

				{	/* Jas/classfile.scm 40 */
					BgL_classfilez00_bglt BgL_res3090z00_2898;

					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_new2131z00_2896;

						BgL_new2131z00_2896 =
							((BgL_classfilez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_classfilez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2131z00_2896),
							BGl_classzd2numzd2zz__objectz00
							(BGl_classfilez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_3854;

							BgL_auxz00_3854 = (BgL_objectz00_bglt) (BgL_new2131z00_2896);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3854, BFALSE);
						}
						BgL_res3090z00_2898 = BgL_new2131z00_2896;
					}
					BgL_auxz00_3849 = BgL_res3090z00_2898;
				}
				return (obj_t) (BgL_auxz00_3849);
			}
		}
	}



/* classfile-nil */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_classfilezd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			if ((BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 40 */
					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_res3000z00_1640;

						{	/* Jas/classfile.scm 40 */
							BgL_classfilez00_bglt BgL_new2131z00_1636;

							BgL_new2131z00_1636 =
								((BgL_classfilez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_classfilez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2131z00_1636),
								BGl_classzd2numzd2zz__objectz00
								(BGl_classfilez00zzjas_classfilez00));
							{	/* Jas/classfile.scm 40 */
								BgL_objectz00_bglt BgL_auxz00_3864;

								BgL_auxz00_3864 = (BgL_objectz00_bglt) (BgL_new2131z00_1636);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3864, BFALSE);
							}
							BgL_res3000z00_1640 = BgL_new2131z00_1636;
						}
						BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3000z00_1640);
					}
					{	/* Jas/classfile.scm 40 */
						BgL_classfilez00_bglt BgL_res3001z00_1666;

						{	/* Jas/classfile.scm 40 */
							BgL_classfilez00_bglt BgL_new2117z00_1641;

							BgL_new2117z00_1641 =
								(BgL_classfilez00_bglt)
								(BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 40 */
								obj_t BgL_currentzd2method2105zd2_1654;

								obj_t BgL_globals2106z00_1655;

								obj_t BgL_pool2107z00_1656;

								obj_t BgL_poolzd2siza7e2108z75_1657;

								obj_t BgL_pooledzd2names2109zd2_1658;

								obj_t BgL_flags2110z00_1659;

								obj_t BgL_me2111z00_1660;

								obj_t BgL_super2112z00_1661;

								obj_t BgL_interfaces2113z00_1662;

								obj_t BgL_fields2114z00_1663;

								obj_t BgL_methods2115z00_1664;

								obj_t BgL_attributes2116z00_1665;

								BgL_currentzd2method2105zd2_1654 = BUNSPEC;
								BgL_globals2106z00_1655 = BUNSPEC;
								BgL_pool2107z00_1656 = BUNSPEC;
								BgL_poolzd2siza7e2108z75_1657 = BUNSPEC;
								BgL_pooledzd2names2109zd2_1658 = BUNSPEC;
								BgL_flags2110z00_1659 = BUNSPEC;
								BgL_me2111z00_1660 = BUNSPEC;
								BgL_super2112z00_1661 = BUNSPEC;
								BgL_interfaces2113z00_1662 = BUNSPEC;
								BgL_fields2114z00_1663 = BUNSPEC;
								BgL_methods2115z00_1664 = BUNSPEC;
								BgL_attributes2116z00_1665 = BUNSPEC;
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_currentzd2methodzd2) =
									((obj_t) BgL_currentzd2method2105zd2_1654), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_globalsz00) =
									((obj_t) BgL_globals2106z00_1655), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_poolz00) = ((obj_t) BgL_pool2107z00_1656), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_poolzd2siza7ez75) =
									((obj_t) BgL_poolzd2siza7e2108z75_1657), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_pooledzd2nameszd2) =
									((obj_t) BgL_pooledzd2names2109zd2_1658), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_flagsz00) = ((obj_t) BgL_flags2110z00_1659), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_mez00) = ((obj_t) BgL_me2111z00_1660), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_superz00) = ((obj_t) BgL_super2112z00_1661), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_interfacesz00) =
									((obj_t) BgL_interfaces2113z00_1662), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_fieldsz00) = ((obj_t) BgL_fields2114z00_1663), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_methodsz00) =
									((obj_t) BgL_methods2115z00_1664), BUNSPEC);
								((((BgL_classfilez00_bglt) CREF(BgL_new2117z00_1641))->
										BgL_attributesz00) =
									((obj_t) BgL_attributes2116z00_1665), BUNSPEC);
								BgL_res3001z00_1666 = BgL_new2117z00_1641;
						}}
						(obj_t) (BgL_res3001z00_1666);
				}}
			else
				{	/* Jas/classfile.scm 40 */
					BFALSE;
				}
			return
				(BgL_classfilez00_bglt)
				(BGl_z52thezd2classfilezd2nilz52zzjas_classfilez00);
		}
	}



/* _classfile-nil */
	obj_t BGl__classfilezd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2619)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			return (obj_t) (BGl_classfilezd2nilzd2zzjas_classfilez00());
		}
	}



/* attribute? */
	BGL_EXPORTED_DEF bool_t BGl_attributezf3zf3zzjas_classfilez00(obj_t
		BgL_obj2054z00_140)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2054z00_140,
				BGl_attributez00zzjas_classfilez00);
		}
	}



/* _attribute? */
	obj_t BGl__attributezf3zf3zzjas_classfilez00(obj_t BgL_envz00_2616,
		obj_t BgL_obj2054z00_2617)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2054z00_2617,
					BGl_attributez00zzjas_classfilez00));
		}
	}



/* make-attribute */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_makezd2attributezd2zzjas_classfilez00(obj_t BgL_type2019z00_144,
		obj_t BgL_name2020z00_145, obj_t BgL_siza7e2021za7_146,
		obj_t BgL_info2022z00_147)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{	/* Jas/classfile.scm 34 */
				BgL_attributez00_bglt BgL_new2023z00_1667;

				{	/* Jas/classfile.scm 34 */
					BgL_attributez00_bglt BgL_res3002z00_1672;

					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_new2035z00_1668;

						BgL_new2035z00_1668 =
							((BgL_attributez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_attributez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2035z00_1668),
							BGl_classzd2numzd2zz__objectz00
							(BGl_attributez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_3892;

							BgL_auxz00_3892 = (BgL_objectz00_bglt) (BgL_new2035z00_1668);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3892, BFALSE);
						}
						BgL_res3002z00_1672 = BgL_new2035z00_1668;
					}
					BgL_new2023z00_1667 = BgL_res3002z00_1672;
				}
				{	/* Jas/classfile.scm 34 */
					BgL_attributez00_bglt BgL_res3003z00_1682;

					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_new2029z00_1673;

						BgL_new2029z00_1673 = BgL_new2023z00_1667;
						{	/* Jas/classfile.scm 34 */
							obj_t BgL_type2025z00_1678;

							obj_t BgL_name2026z00_1679;

							obj_t BgL_siza7e2027za7_1680;

							obj_t BgL_info2028z00_1681;

							BgL_type2025z00_1678 = BgL_type2019z00_144;
							BgL_name2026z00_1679 = BgL_name2020z00_145;
							BgL_siza7e2027za7_1680 = BgL_siza7e2021za7_146;
							BgL_info2028z00_1681 = BgL_info2022z00_147;
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1673))->
									BgL_typez00) = ((obj_t) BgL_type2025z00_1678), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1673))->
									BgL_namez00) = ((obj_t) BgL_name2026z00_1679), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1673))->
									BgL_siza7eza7) = ((obj_t) BgL_siza7e2027za7_1680), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1673))->
									BgL_infoz00) = ((obj_t) BgL_info2028z00_1681), BUNSPEC);
							BgL_res3003z00_1682 = BgL_new2029z00_1673;
					}} BgL_res3003z00_1682;
				}
				return BgL_new2023z00_1667;
			}
		}
	}



/* _make-attribute */
	obj_t BGl__makezd2attributezd2zzjas_classfilez00(obj_t BgL_envz00_2649,
		obj_t BgL_type2019z00_2650, obj_t BgL_name2020z00_2651,
		obj_t BgL_siza7e2021za7_2652, obj_t BgL_info2022z00_2653)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			return
				(obj_t) (BGl_makezd2attributezd2zzjas_classfilez00(BgL_type2019z00_2650,
					BgL_name2020z00_2651, BgL_siza7e2021za7_2652, BgL_info2022z00_2653));
		}
	}



/* fill-attribute! */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_fillzd2attributez12zc0zzjas_classfilez00(BgL_attributez00_bglt
		BgL_new2029z00_148, obj_t BgL_type2025z00_149, obj_t BgL_name2026z00_150,
		obj_t BgL_siza7e2027za7_151, obj_t BgL_info2028z00_152)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{	/* Jas/classfile.scm 34 */
				obj_t BgL_type2025z00_2900;

				obj_t BgL_name2026z00_2901;

				obj_t BgL_siza7e2027za7_2902;

				obj_t BgL_info2028z00_2903;

				BgL_type2025z00_2900 = BgL_type2025z00_149;
				BgL_name2026z00_2901 = BgL_name2026z00_150;
				BgL_siza7e2027za7_2902 = BgL_siza7e2027za7_151;
				BgL_info2028z00_2903 = BgL_info2028z00_152;
				((((BgL_attributez00_bglt) CREF(BgL_new2029z00_148))->BgL_typez00) =
					((obj_t) BgL_type2025z00_2900), BUNSPEC);
				((((BgL_attributez00_bglt) CREF(BgL_new2029z00_148))->BgL_namez00) =
					((obj_t) BgL_name2026z00_2901), BUNSPEC);
				((((BgL_attributez00_bglt) CREF(BgL_new2029z00_148))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e2027za7_2902), BUNSPEC);
				((((BgL_attributez00_bglt) CREF(BgL_new2029z00_148))->BgL_infoz00) =
					((obj_t) BgL_info2028z00_2903), BUNSPEC);
				return BgL_new2029z00_148;
			}
		}
	}



/* _fill-attribute! */
	obj_t BGl__fillzd2attributez12zc0zzjas_classfilez00(obj_t BgL_envz00_2654,
		obj_t BgL_new2029z00_2655, obj_t BgL_type2025z00_2656,
		obj_t BgL_name2026z00_2657, obj_t BgL_siza7e2027za7_2658,
		obj_t BgL_info2028z00_2659)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{	/* Jas/classfile.scm 34 */
				BgL_attributez00_bglt BgL_auxz00_3905;

				{	/* Jas/classfile.scm 34 */
					BgL_attributez00_bglt BgL_res3091z00_2913;

					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_new2029z00_2904;

						BgL_new2029z00_2904 = (BgL_attributez00_bglt) (BgL_new2029z00_2655);
						{	/* Jas/classfile.scm 34 */
							obj_t BgL_type2025z00_2909;

							obj_t BgL_name2026z00_2910;

							obj_t BgL_siza7e2027za7_2911;

							obj_t BgL_info2028z00_2912;

							BgL_type2025z00_2909 = BgL_type2025z00_2656;
							BgL_name2026z00_2910 = BgL_name2026z00_2657;
							BgL_siza7e2027za7_2911 = BgL_siza7e2027za7_2658;
							BgL_info2028z00_2912 = BgL_info2028z00_2659;
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_2904))->
									BgL_typez00) = ((obj_t) BgL_type2025z00_2909), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_2904))->
									BgL_namez00) = ((obj_t) BgL_name2026z00_2910), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_2904))->
									BgL_siza7eza7) = ((obj_t) BgL_siza7e2027za7_2911), BUNSPEC);
							((((BgL_attributez00_bglt) CREF(BgL_new2029z00_2904))->
									BgL_infoz00) = ((obj_t) BgL_info2028z00_2912), BUNSPEC);
							BgL_res3091z00_2913 = BgL_new2029z00_2904;
						}
					}
					BgL_auxz00_3905 = BgL_res3091z00_2913;
				}
				return (obj_t) (BgL_auxz00_3905);
			}
		}
	}



/* %allocate-attribute */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_z52allocatezd2attributez80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{	/* Jas/classfile.scm 34 */
				BgL_attributez00_bglt BgL_new2035z00_2914;

				BgL_new2035z00_2914 =
					((BgL_attributez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_attributez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2035z00_2914),
					BGl_classzd2numzd2zz__objectz00(BGl_attributez00zzjas_classfilez00));
				{	/* Jas/classfile.scm 34 */
					BgL_objectz00_bglt BgL_auxz00_3916;

					BgL_auxz00_3916 = (BgL_objectz00_bglt) (BgL_new2035z00_2914);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3916, BFALSE);
				}
				return BgL_new2035z00_2914;
			}
		}
	}



/* _%allocate-attribute */
	obj_t BGl__z52allocatezd2attributez80zzjas_classfilez00(obj_t BgL_envz00_2614)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{	/* Jas/classfile.scm 34 */
				BgL_attributez00_bglt BgL_auxz00_3919;

				{	/* Jas/classfile.scm 34 */
					BgL_attributez00_bglt BgL_res3092z00_2918;

					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_new2035z00_2916;

						BgL_new2035z00_2916 =
							((BgL_attributez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_attributez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2035z00_2916),
							BGl_classzd2numzd2zz__objectz00
							(BGl_attributez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_3924;

							BgL_auxz00_3924 = (BgL_objectz00_bglt) (BgL_new2035z00_2916);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3924, BFALSE);
						}
						BgL_res3092z00_2918 = BgL_new2035z00_2916;
					}
					BgL_auxz00_3919 = BgL_res3092z00_2918;
				}
				return (obj_t) (BgL_auxz00_3919);
			}
		}
	}



/* attribute-nil */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_attributezd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			if ((BGl_z52thezd2attributezd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 34 */
					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_res3004z00_1695;

						{	/* Jas/classfile.scm 34 */
							BgL_attributez00_bglt BgL_new2035z00_1691;

							BgL_new2035z00_1691 =
								((BgL_attributez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_attributez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2035z00_1691),
								BGl_classzd2numzd2zz__objectz00
								(BGl_attributez00zzjas_classfilez00));
							{	/* Jas/classfile.scm 34 */
								BgL_objectz00_bglt BgL_auxz00_3934;

								BgL_auxz00_3934 = (BgL_objectz00_bglt) (BgL_new2035z00_1691);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3934, BFALSE);
							}
							BgL_res3004z00_1695 = BgL_new2035z00_1691;
						}
						BGl_z52thezd2attributezd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3004z00_1695);
					}
					{	/* Jas/classfile.scm 34 */
						BgL_attributez00_bglt BgL_res3005z00_1705;

						{	/* Jas/classfile.scm 34 */
							BgL_attributez00_bglt BgL_new2029z00_1696;

							BgL_new2029z00_1696 =
								(BgL_attributez00_bglt)
								(BGl_z52thezd2attributezd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 34 */
								obj_t BgL_type2025z00_1701;

								obj_t BgL_name2026z00_1702;

								obj_t BgL_siza7e2027za7_1703;

								obj_t BgL_info2028z00_1704;

								BgL_type2025z00_1701 = BUNSPEC;
								BgL_name2026z00_1702 = BUNSPEC;
								BgL_siza7e2027za7_1703 = BUNSPEC;
								BgL_info2028z00_1704 = BUNSPEC;
								((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1696))->
										BgL_typez00) = ((obj_t) BgL_type2025z00_1701), BUNSPEC);
								((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1696))->
										BgL_namez00) = ((obj_t) BgL_name2026z00_1702), BUNSPEC);
								((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1696))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e2027za7_1703), BUNSPEC);
								((((BgL_attributez00_bglt) CREF(BgL_new2029z00_1696))->
										BgL_infoz00) = ((obj_t) BgL_info2028z00_1704), BUNSPEC);
								BgL_res3005z00_1705 = BgL_new2029z00_1696;
						}}
						(obj_t) (BgL_res3005z00_1705);
				}}
			else
				{	/* Jas/classfile.scm 34 */
					BFALSE;
				}
			return
				(BgL_attributez00_bglt)
				(BGl_z52thezd2attributezd2nilz52zzjas_classfilez00);
		}
	}



/* _attribute-nil */
	obj_t BGl__attributezd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2615)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			return (obj_t) (BGl_attributezd2nilzd2zzjas_classfilez00());
		}
	}



/* method? */
	BGL_EXPORTED_DEF bool_t BGl_methodzf3zf3zzjas_classfilez00(obj_t
		BgL_obj2006z00_165)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2006z00_165,
				BGl_methodz00zzjas_classfilez00);
		}
	}



/* _method? */
	obj_t BGl__methodzf3zf3zzjas_classfilez00(obj_t BgL_envz00_2612,
		obj_t BgL_obj2006z00_2613)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2006z00_2613,
					BGl_methodz00zzjas_classfilez00));
		}
	}



/* make-method */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_makezd2methodzd2zzjas_classfilez00(obj_t BgL_flags1936z00_169,
		obj_t BgL_name1937z00_170, obj_t BgL_owner1938z00_171,
		obj_t BgL_usertype1939z00_172, obj_t BgL_type1940z00_173,
		obj_t BgL_pname1941z00_174, obj_t BgL_descriptor1942z00_175,
		obj_t BgL_pool1943z00_176, obj_t BgL_attributes1944z00_177)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{	/* Jas/classfile.scm 32 */
				BgL_methodz00_bglt BgL_new1945z00_1706;

				{	/* Jas/classfile.scm 32 */
					BgL_methodz00_bglt BgL_res3006z00_1711;

					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_new1967z00_1707;

						BgL_new1967z00_1707 =
							((BgL_methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_methodz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1967z00_1707),
							BGl_classzd2numzd2zz__objectz00(BGl_methodz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_3954;

							BgL_auxz00_3954 = (BgL_objectz00_bglt) (BgL_new1967z00_1707);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3954, BFALSE);
						}
						BgL_res3006z00_1711 = BgL_new1967z00_1707;
					}
					BgL_new1945z00_1706 = BgL_res3006z00_1711;
				}
				{	/* Jas/classfile.scm 32 */
					BgL_methodz00_bglt BgL_res3007z00_1731;

					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_new1956z00_1712;

						BgL_new1956z00_1712 = BgL_new1945z00_1706;
						{	/* Jas/classfile.scm 32 */
							obj_t BgL_flags1947z00_1722;

							obj_t BgL_name1948z00_1723;

							obj_t BgL_owner1949z00_1724;

							obj_t BgL_usertype1950z00_1725;

							obj_t BgL_type1951z00_1726;

							obj_t BgL_pname1952z00_1727;

							obj_t BgL_descriptor1953z00_1728;

							obj_t BgL_pool1954z00_1729;

							obj_t BgL_attributes1955z00_1730;

							BgL_flags1947z00_1722 = BgL_flags1936z00_169;
							BgL_name1948z00_1723 = BgL_name1937z00_170;
							BgL_owner1949z00_1724 = BgL_owner1938z00_171;
							BgL_usertype1950z00_1725 = BgL_usertype1939z00_172;
							BgL_type1951z00_1726 = BgL_type1940z00_173;
							BgL_pname1952z00_1727 = BgL_pname1941z00_174;
							BgL_descriptor1953z00_1728 = BgL_descriptor1942z00_175;
							BgL_pool1954z00_1729 = BgL_pool1943z00_176;
							BgL_attributes1955z00_1730 = BgL_attributes1944z00_177;
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_flagsz00) = ((obj_t) BgL_flags1947z00_1722), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->BgL_namez00) =
								((obj_t) BgL_name1948z00_1723), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_ownerz00) = ((obj_t) BgL_owner1949z00_1724), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1950z00_1725), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->BgL_typez00) =
								((obj_t) BgL_type1951z00_1726), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_pnamez00) = ((obj_t) BgL_pname1952z00_1727), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1953z00_1728), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->BgL_poolz00) =
								((obj_t) BgL_pool1954z00_1729), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1712))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1955z00_1730), BUNSPEC);
							BgL_res3007z00_1731 = BgL_new1956z00_1712;
					}} BgL_res3007z00_1731;
				}
				return BgL_new1945z00_1706;
			}
		}
	}



/* _make-method */
	obj_t BGl__makezd2methodzd2zzjas_classfilez00(obj_t BgL_envz00_2660,
		obj_t BgL_flags1936z00_2661, obj_t BgL_name1937z00_2662,
		obj_t BgL_owner1938z00_2663, obj_t BgL_usertype1939z00_2664,
		obj_t BgL_type1940z00_2665, obj_t BgL_pname1941z00_2666,
		obj_t BgL_descriptor1942z00_2667, obj_t BgL_pool1943z00_2668,
		obj_t BgL_attributes1944z00_2669)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			return
				(obj_t) (BGl_makezd2methodzd2zzjas_classfilez00(BgL_flags1936z00_2661,
					BgL_name1937z00_2662, BgL_owner1938z00_2663, BgL_usertype1939z00_2664,
					BgL_type1940z00_2665, BgL_pname1941z00_2666,
					BgL_descriptor1942z00_2667, BgL_pool1943z00_2668,
					BgL_attributes1944z00_2669));
		}
	}



/* fill-method! */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_fillzd2methodz12zc0zzjas_classfilez00(BgL_methodz00_bglt
		BgL_new1956z00_178, obj_t BgL_flags1947z00_179, obj_t BgL_name1948z00_180,
		obj_t BgL_owner1949z00_181, obj_t BgL_usertype1950z00_182,
		obj_t BgL_type1951z00_183, obj_t BgL_pname1952z00_184,
		obj_t BgL_descriptor1953z00_185, obj_t BgL_pool1954z00_186,
		obj_t BgL_attributes1955z00_187)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{	/* Jas/classfile.scm 32 */
				obj_t BgL_flags1947z00_2920;

				obj_t BgL_name1948z00_2921;

				obj_t BgL_owner1949z00_2922;

				obj_t BgL_usertype1950z00_2923;

				obj_t BgL_type1951z00_2924;

				obj_t BgL_pname1952z00_2925;

				obj_t BgL_descriptor1953z00_2926;

				obj_t BgL_pool1954z00_2927;

				obj_t BgL_attributes1955z00_2928;

				BgL_flags1947z00_2920 = BgL_flags1947z00_179;
				BgL_name1948z00_2921 = BgL_name1948z00_180;
				BgL_owner1949z00_2922 = BgL_owner1949z00_181;
				BgL_usertype1950z00_2923 = BgL_usertype1950z00_182;
				BgL_type1951z00_2924 = BgL_type1951z00_183;
				BgL_pname1952z00_2925 = BgL_pname1952z00_184;
				BgL_descriptor1953z00_2926 = BgL_descriptor1953z00_185;
				BgL_pool1954z00_2927 = BgL_pool1954z00_186;
				BgL_attributes1955z00_2928 = BgL_attributes1955z00_187;
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_flagsz00) =
					((obj_t) BgL_flags1947z00_2920), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_namez00) =
					((obj_t) BgL_name1948z00_2921), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_ownerz00) =
					((obj_t) BgL_owner1949z00_2922), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_usertypez00) =
					((obj_t) BgL_usertype1950z00_2923), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_typez00) =
					((obj_t) BgL_type1951z00_2924), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_pnamez00) =
					((obj_t) BgL_pname1952z00_2925), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1953z00_2926), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_poolz00) =
					((obj_t) BgL_pool1954z00_2927), BUNSPEC);
				((((BgL_methodz00_bglt) CREF(BgL_new1956z00_178))->BgL_attributesz00) =
					((obj_t) BgL_attributes1955z00_2928), BUNSPEC);
				return BgL_new1956z00_178;
			}
		}
	}



/* _fill-method! */
	obj_t BGl__fillzd2methodz12zc0zzjas_classfilez00(obj_t BgL_envz00_2670,
		obj_t BgL_new1956z00_2671, obj_t BgL_flags1947z00_2672,
		obj_t BgL_name1948z00_2673, obj_t BgL_owner1949z00_2674,
		obj_t BgL_usertype1950z00_2675, obj_t BgL_type1951z00_2676,
		obj_t BgL_pname1952z00_2677, obj_t BgL_descriptor1953z00_2678,
		obj_t BgL_pool1954z00_2679, obj_t BgL_attributes1955z00_2680)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{	/* Jas/classfile.scm 32 */
				BgL_methodz00_bglt BgL_auxz00_3977;

				{	/* Jas/classfile.scm 32 */
					BgL_methodz00_bglt BgL_res3093z00_2948;

					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_new1956z00_2929;

						obj_t BgL_name1948z00_2931;

						BgL_new1956z00_2929 = (BgL_methodz00_bglt) (BgL_new1956z00_2671);
						BgL_name1948z00_2931 = BgL_name1948z00_2673;
						{	/* Jas/classfile.scm 32 */
							obj_t BgL_flags1947z00_2939;

							obj_t BgL_name1948z00_2940;

							obj_t BgL_owner1949z00_2941;

							obj_t BgL_usertype1950z00_2942;

							obj_t BgL_type1951z00_2943;

							obj_t BgL_pname1952z00_2944;

							obj_t BgL_descriptor1953z00_2945;

							obj_t BgL_pool1954z00_2946;

							obj_t BgL_attributes1955z00_2947;

							BgL_flags1947z00_2939 = BgL_flags1947z00_2672;
							BgL_name1948z00_2940 = BgL_name1948z00_2931;
							BgL_owner1949z00_2941 = BgL_owner1949z00_2674;
							BgL_usertype1950z00_2942 = BgL_usertype1950z00_2675;
							BgL_type1951z00_2943 = BgL_type1951z00_2676;
							BgL_pname1952z00_2944 = BgL_pname1952z00_2677;
							BgL_descriptor1953z00_2945 = BgL_descriptor1953z00_2678;
							BgL_pool1954z00_2946 = BgL_pool1954z00_2679;
							BgL_attributes1955z00_2947 = BgL_attributes1955z00_2680;
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_flagsz00) = ((obj_t) BgL_flags1947z00_2939), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->BgL_namez00) =
								((obj_t) BgL_name1948z00_2940), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_ownerz00) = ((obj_t) BgL_owner1949z00_2941), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1950z00_2942), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->BgL_typez00) =
								((obj_t) BgL_type1951z00_2943), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_pnamez00) = ((obj_t) BgL_pname1952z00_2944), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1953z00_2945), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->BgL_poolz00) =
								((obj_t) BgL_pool1954z00_2946), BUNSPEC);
							((((BgL_methodz00_bglt) CREF(BgL_new1956z00_2929))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1955z00_2947), BUNSPEC);
							BgL_res3093z00_2948 = BgL_new1956z00_2929;
						}
					}
					BgL_auxz00_3977 = BgL_res3093z00_2948;
				}
				return (obj_t) (BgL_auxz00_3977);
			}
		}
	}



/* %allocate-method */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_z52allocatezd2methodz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{	/* Jas/classfile.scm 32 */
				BgL_methodz00_bglt BgL_new1967z00_2949;

				BgL_new1967z00_2949 =
					((BgL_methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_methodz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1967z00_2949),
					BGl_classzd2numzd2zz__objectz00(BGl_methodz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 32 */
					BgL_objectz00_bglt BgL_auxz00_3993;

					BgL_auxz00_3993 = (BgL_objectz00_bglt) (BgL_new1967z00_2949);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3993, BFALSE);
				}
				return BgL_new1967z00_2949;
			}
		}
	}



/* _%allocate-method */
	obj_t BGl__z52allocatezd2methodz80zzjas_classfilez00(obj_t BgL_envz00_2610)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{	/* Jas/classfile.scm 32 */
				BgL_methodz00_bglt BgL_auxz00_3996;

				{	/* Jas/classfile.scm 32 */
					BgL_methodz00_bglt BgL_res3094z00_2953;

					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_new1967z00_2951;

						BgL_new1967z00_2951 =
							((BgL_methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_methodz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1967z00_2951),
							BGl_classzd2numzd2zz__objectz00(BGl_methodz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_4001;

							BgL_auxz00_4001 = (BgL_objectz00_bglt) (BgL_new1967z00_2951);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4001, BFALSE);
						}
						BgL_res3094z00_2953 = BgL_new1967z00_2951;
					}
					BgL_auxz00_3996 = BgL_res3094z00_2953;
				}
				return (obj_t) (BgL_auxz00_3996);
			}
		}
	}



/* method-nil */
	BGL_EXPORTED_DEF BgL_methodz00_bglt BGl_methodzd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			if ((BGl_z52thezd2methodzd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 32 */
					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_res3008z00_1749;

						{	/* Jas/classfile.scm 32 */
							BgL_methodz00_bglt BgL_new1967z00_1745;

							BgL_new1967z00_1745 =
								((BgL_methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_methodz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1967z00_1745),
								BGl_classzd2numzd2zz__objectz00
								(BGl_methodz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_4011;

								BgL_auxz00_4011 = (BgL_objectz00_bglt) (BgL_new1967z00_1745);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4011, BFALSE);
							}
							BgL_res3008z00_1749 = BgL_new1967z00_1745;
						}
						BGl_z52thezd2methodzd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3008z00_1749);
					}
					{	/* Jas/classfile.scm 32 */
						BgL_methodz00_bglt BgL_res3009z00_1769;

						{	/* Jas/classfile.scm 32 */
							BgL_methodz00_bglt BgL_new1956z00_1750;

							BgL_new1956z00_1750 =
								(BgL_methodz00_bglt)
								(BGl_z52thezd2methodzd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 32 */
								obj_t BgL_flags1947z00_1760;

								obj_t BgL_name1948z00_1761;

								obj_t BgL_owner1949z00_1762;

								obj_t BgL_usertype1950z00_1763;

								obj_t BgL_type1951z00_1764;

								obj_t BgL_pname1952z00_1765;

								obj_t BgL_descriptor1953z00_1766;

								obj_t BgL_pool1954z00_1767;

								obj_t BgL_attributes1955z00_1768;

								BgL_flags1947z00_1760 = BUNSPEC;
								BgL_name1948z00_1761 = BGl_string3062z00zzjas_classfilez00;
								BgL_owner1949z00_1762 = BUNSPEC;
								BgL_usertype1950z00_1763 = BUNSPEC;
								BgL_type1951z00_1764 = BUNSPEC;
								BgL_pname1952z00_1765 = BUNSPEC;
								BgL_descriptor1953z00_1766 = BUNSPEC;
								BgL_pool1954z00_1767 = BUNSPEC;
								BgL_attributes1955z00_1768 = BUNSPEC;
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_flagsz00) = ((obj_t) BgL_flags1947z00_1760), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_namez00) = ((obj_t) BgL_name1948z00_1761), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_ownerz00) = ((obj_t) BgL_owner1949z00_1762), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_usertypez00) =
									((obj_t) BgL_usertype1950z00_1763), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_typez00) = ((obj_t) BgL_type1951z00_1764), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_pnamez00) = ((obj_t) BgL_pname1952z00_1765), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_descriptorz00) =
									((obj_t) BgL_descriptor1953z00_1766), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_poolz00) = ((obj_t) BgL_pool1954z00_1767), BUNSPEC);
								((((BgL_methodz00_bglt) CREF(BgL_new1956z00_1750))->
										BgL_attributesz00) =
									((obj_t) BgL_attributes1955z00_1768), BUNSPEC);
								BgL_res3009z00_1769 = BgL_new1956z00_1750;
						}}
						(obj_t) (BgL_res3009z00_1769);
				}}
			else
				{	/* Jas/classfile.scm 32 */
					BFALSE;
				}
			return
				(BgL_methodz00_bglt) (BGl_z52thezd2methodzd2nilz52zzjas_classfilez00);
		}
	}



/* _method-nil */
	obj_t BGl__methodzd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2611)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			return (obj_t) (BGl_methodzd2nilzd2zzjas_classfilez00());
		}
	}



/* field? */
	BGL_EXPORTED_DEF bool_t BGl_fieldzf3zf3zzjas_classfilez00(obj_t
		BgL_obj1908z00_188)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1908z00_188,
				BGl_fieldz00zzjas_classfilez00);
		}
	}



/* _field? */
	obj_t BGl__fieldzf3zf3zzjas_classfilez00(obj_t BgL_envz00_2608,
		obj_t BgL_obj1908z00_2609)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1908z00_2609,
					BGl_fieldz00zzjas_classfilez00));
		}
	}



/* make-field */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt BGl_makezd2fieldzd2zzjas_classfilez00(obj_t
		BgL_flags1837z00_192, obj_t BgL_name1838z00_193, obj_t BgL_owner1839z00_194,
		obj_t BgL_usertype1840z00_195, obj_t BgL_type1841z00_196,
		obj_t BgL_pname1842z00_197, obj_t BgL_descriptor1843z00_198,
		obj_t BgL_pool1844z00_199, obj_t BgL_attributes1845z00_200)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{	/* Jas/classfile.scm 30 */
				BgL_fieldz00_bglt BgL_new1846z00_1770;

				{	/* Jas/classfile.scm 30 */
					BgL_fieldz00_bglt BgL_res3010z00_1775;

					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_new1868z00_1771;

						BgL_new1868z00_1771 =
							((BgL_fieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_fieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1868z00_1771),
							BGl_classzd2numzd2zz__objectz00(BGl_fieldz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_4036;

							BgL_auxz00_4036 = (BgL_objectz00_bglt) (BgL_new1868z00_1771);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4036, BFALSE);
						}
						BgL_res3010z00_1775 = BgL_new1868z00_1771;
					}
					BgL_new1846z00_1770 = BgL_res3010z00_1775;
				}
				{	/* Jas/classfile.scm 30 */
					BgL_fieldz00_bglt BgL_res3011z00_1795;

					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_new1857z00_1776;

						BgL_new1857z00_1776 = BgL_new1846z00_1770;
						{	/* Jas/classfile.scm 30 */
							obj_t BgL_flags1848z00_1786;

							obj_t BgL_name1849z00_1787;

							obj_t BgL_owner1850z00_1788;

							obj_t BgL_usertype1851z00_1789;

							obj_t BgL_type1852z00_1790;

							obj_t BgL_pname1853z00_1791;

							obj_t BgL_descriptor1854z00_1792;

							obj_t BgL_pool1855z00_1793;

							obj_t BgL_attributes1856z00_1794;

							BgL_flags1848z00_1786 = BgL_flags1837z00_192;
							BgL_name1849z00_1787 = BgL_name1838z00_193;
							BgL_owner1850z00_1788 = BgL_owner1839z00_194;
							BgL_usertype1851z00_1789 = BgL_usertype1840z00_195;
							BgL_type1852z00_1790 = BgL_type1841z00_196;
							BgL_pname1853z00_1791 = BgL_pname1842z00_197;
							BgL_descriptor1854z00_1792 = BgL_descriptor1843z00_198;
							BgL_pool1855z00_1793 = BgL_pool1844z00_199;
							BgL_attributes1856z00_1794 = BgL_attributes1845z00_200;
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_flagsz00) =
								((obj_t) BgL_flags1848z00_1786), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_namez00) =
								((obj_t) BgL_name1849z00_1787), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_ownerz00) =
								((obj_t) BgL_owner1850z00_1788), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1851z00_1789), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_typez00) =
								((obj_t) BgL_type1852z00_1790), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_pnamez00) =
								((obj_t) BgL_pname1853z00_1791), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1854z00_1792), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->BgL_poolz00) =
								((obj_t) BgL_pool1855z00_1793), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1776))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1856z00_1794), BUNSPEC);
							BgL_res3011z00_1795 = BgL_new1857z00_1776;
					}} BgL_res3011z00_1795;
				}
				return BgL_new1846z00_1770;
			}
		}
	}



/* _make-field */
	obj_t BGl__makezd2fieldzd2zzjas_classfilez00(obj_t BgL_envz00_2681,
		obj_t BgL_flags1837z00_2682, obj_t BgL_name1838z00_2683,
		obj_t BgL_owner1839z00_2684, obj_t BgL_usertype1840z00_2685,
		obj_t BgL_type1841z00_2686, obj_t BgL_pname1842z00_2687,
		obj_t BgL_descriptor1843z00_2688, obj_t BgL_pool1844z00_2689,
		obj_t BgL_attributes1845z00_2690)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			return
				(obj_t) (BGl_makezd2fieldzd2zzjas_classfilez00(BgL_flags1837z00_2682,
					BgL_name1838z00_2683, BgL_owner1839z00_2684, BgL_usertype1840z00_2685,
					BgL_type1841z00_2686, BgL_pname1842z00_2687,
					BgL_descriptor1843z00_2688, BgL_pool1844z00_2689,
					BgL_attributes1845z00_2690));
		}
	}



/* fill-field! */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt
		BGl_fillzd2fieldz12zc0zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_new1857z00_201, obj_t BgL_flags1848z00_202, obj_t BgL_name1849z00_203,
		obj_t BgL_owner1850z00_204, obj_t BgL_usertype1851z00_205,
		obj_t BgL_type1852z00_206, obj_t BgL_pname1853z00_207,
		obj_t BgL_descriptor1854z00_208, obj_t BgL_pool1855z00_209,
		obj_t BgL_attributes1856z00_210)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{	/* Jas/classfile.scm 30 */
				obj_t BgL_flags1848z00_2955;

				obj_t BgL_name1849z00_2956;

				obj_t BgL_owner1850z00_2957;

				obj_t BgL_usertype1851z00_2958;

				obj_t BgL_type1852z00_2959;

				obj_t BgL_pname1853z00_2960;

				obj_t BgL_descriptor1854z00_2961;

				obj_t BgL_pool1855z00_2962;

				obj_t BgL_attributes1856z00_2963;

				BgL_flags1848z00_2955 = BgL_flags1848z00_202;
				BgL_name1849z00_2956 = BgL_name1849z00_203;
				BgL_owner1850z00_2957 = BgL_owner1850z00_204;
				BgL_usertype1851z00_2958 = BgL_usertype1851z00_205;
				BgL_type1852z00_2959 = BgL_type1852z00_206;
				BgL_pname1853z00_2960 = BgL_pname1853z00_207;
				BgL_descriptor1854z00_2961 = BgL_descriptor1854z00_208;
				BgL_pool1855z00_2962 = BgL_pool1855z00_209;
				BgL_attributes1856z00_2963 = BgL_attributes1856z00_210;
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_flagsz00) =
					((obj_t) BgL_flags1848z00_2955), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_namez00) =
					((obj_t) BgL_name1849z00_2956), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_ownerz00) =
					((obj_t) BgL_owner1850z00_2957), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_usertypez00) =
					((obj_t) BgL_usertype1851z00_2958), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_typez00) =
					((obj_t) BgL_type1852z00_2959), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_pnamez00) =
					((obj_t) BgL_pname1853z00_2960), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1854z00_2961), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_poolz00) =
					((obj_t) BgL_pool1855z00_2962), BUNSPEC);
				((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_201))->BgL_attributesz00) =
					((obj_t) BgL_attributes1856z00_2963), BUNSPEC);
				return BgL_new1857z00_201;
			}
		}
	}



/* _fill-field! */
	obj_t BGl__fillzd2fieldz12zc0zzjas_classfilez00(obj_t BgL_envz00_2691,
		obj_t BgL_new1857z00_2692, obj_t BgL_flags1848z00_2693,
		obj_t BgL_name1849z00_2694, obj_t BgL_owner1850z00_2695,
		obj_t BgL_usertype1851z00_2696, obj_t BgL_type1852z00_2697,
		obj_t BgL_pname1853z00_2698, obj_t BgL_descriptor1854z00_2699,
		obj_t BgL_pool1855z00_2700, obj_t BgL_attributes1856z00_2701)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{	/* Jas/classfile.scm 30 */
				BgL_fieldz00_bglt BgL_auxz00_4059;

				{	/* Jas/classfile.scm 30 */
					BgL_fieldz00_bglt BgL_res3095z00_2983;

					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_new1857z00_2964;

						obj_t BgL_name1849z00_2966;

						BgL_new1857z00_2964 = (BgL_fieldz00_bglt) (BgL_new1857z00_2692);
						BgL_name1849z00_2966 = BgL_name1849z00_2694;
						{	/* Jas/classfile.scm 30 */
							obj_t BgL_flags1848z00_2974;

							obj_t BgL_name1849z00_2975;

							obj_t BgL_owner1850z00_2976;

							obj_t BgL_usertype1851z00_2977;

							obj_t BgL_type1852z00_2978;

							obj_t BgL_pname1853z00_2979;

							obj_t BgL_descriptor1854z00_2980;

							obj_t BgL_pool1855z00_2981;

							obj_t BgL_attributes1856z00_2982;

							BgL_flags1848z00_2974 = BgL_flags1848z00_2693;
							BgL_name1849z00_2975 = BgL_name1849z00_2966;
							BgL_owner1850z00_2976 = BgL_owner1850z00_2695;
							BgL_usertype1851z00_2977 = BgL_usertype1851z00_2696;
							BgL_type1852z00_2978 = BgL_type1852z00_2697;
							BgL_pname1853z00_2979 = BgL_pname1853z00_2698;
							BgL_descriptor1854z00_2980 = BgL_descriptor1854z00_2699;
							BgL_pool1855z00_2981 = BgL_pool1855z00_2700;
							BgL_attributes1856z00_2982 = BgL_attributes1856z00_2701;
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_flagsz00) =
								((obj_t) BgL_flags1848z00_2974), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_namez00) =
								((obj_t) BgL_name1849z00_2975), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_ownerz00) =
								((obj_t) BgL_owner1850z00_2976), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1851z00_2977), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_typez00) =
								((obj_t) BgL_type1852z00_2978), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_pnamez00) =
								((obj_t) BgL_pname1853z00_2979), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1854z00_2980), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->BgL_poolz00) =
								((obj_t) BgL_pool1855z00_2981), BUNSPEC);
							((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_2964))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1856z00_2982), BUNSPEC);
							BgL_res3095z00_2983 = BgL_new1857z00_2964;
						}
					}
					BgL_auxz00_4059 = BgL_res3095z00_2983;
				}
				return (obj_t) (BgL_auxz00_4059);
			}
		}
	}



/* %allocate-field */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt
		BGl_z52allocatezd2fieldz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{	/* Jas/classfile.scm 30 */
				BgL_fieldz00_bglt BgL_new1868z00_2984;

				BgL_new1868z00_2984 =
					((BgL_fieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_fieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1868z00_2984),
					BGl_classzd2numzd2zz__objectz00(BGl_fieldz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 30 */
					BgL_objectz00_bglt BgL_auxz00_4075;

					BgL_auxz00_4075 = (BgL_objectz00_bglt) (BgL_new1868z00_2984);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4075, BFALSE);
				}
				return BgL_new1868z00_2984;
			}
		}
	}



/* _%allocate-field */
	obj_t BGl__z52allocatezd2fieldz80zzjas_classfilez00(obj_t BgL_envz00_2606)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{	/* Jas/classfile.scm 30 */
				BgL_fieldz00_bglt BgL_auxz00_4078;

				{	/* Jas/classfile.scm 30 */
					BgL_fieldz00_bglt BgL_res3096z00_2988;

					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_new1868z00_2986;

						BgL_new1868z00_2986 =
							((BgL_fieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_fieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1868z00_2986),
							BGl_classzd2numzd2zz__objectz00(BGl_fieldz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_4083;

							BgL_auxz00_4083 = (BgL_objectz00_bglt) (BgL_new1868z00_2986);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4083, BFALSE);
						}
						BgL_res3096z00_2988 = BgL_new1868z00_2986;
					}
					BgL_auxz00_4078 = BgL_res3096z00_2988;
				}
				return (obj_t) (BgL_auxz00_4078);
			}
		}
	}



/* field-nil */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt BGl_fieldzd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			if ((BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 30 */
					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_res3012z00_1813;

						{	/* Jas/classfile.scm 30 */
							BgL_fieldz00_bglt BgL_new1868z00_1809;

							BgL_new1868z00_1809 =
								((BgL_fieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_fieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1868z00_1809),
								BGl_classzd2numzd2zz__objectz00
								(BGl_fieldz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 30 */
								BgL_objectz00_bglt BgL_auxz00_4093;

								BgL_auxz00_4093 = (BgL_objectz00_bglt) (BgL_new1868z00_1809);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4093, BFALSE);
							}
							BgL_res3012z00_1813 = BgL_new1868z00_1809;
						}
						BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3012z00_1813);
					}
					{	/* Jas/classfile.scm 30 */
						BgL_fieldz00_bglt BgL_res3013z00_1833;

						{	/* Jas/classfile.scm 30 */
							BgL_fieldz00_bglt BgL_new1857z00_1814;

							BgL_new1857z00_1814 =
								(BgL_fieldz00_bglt)
								(BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 30 */
								obj_t BgL_flags1848z00_1824;

								obj_t BgL_name1849z00_1825;

								obj_t BgL_owner1850z00_1826;

								obj_t BgL_usertype1851z00_1827;

								obj_t BgL_type1852z00_1828;

								obj_t BgL_pname1853z00_1829;

								obj_t BgL_descriptor1854z00_1830;

								obj_t BgL_pool1855z00_1831;

								obj_t BgL_attributes1856z00_1832;

								BgL_flags1848z00_1824 = BUNSPEC;
								BgL_name1849z00_1825 = BGl_string3062z00zzjas_classfilez00;
								BgL_owner1850z00_1826 = BUNSPEC;
								BgL_usertype1851z00_1827 = BUNSPEC;
								BgL_type1852z00_1828 = BUNSPEC;
								BgL_pname1853z00_1829 = BUNSPEC;
								BgL_descriptor1854z00_1830 = BUNSPEC;
								BgL_pool1855z00_1831 = BUNSPEC;
								BgL_attributes1856z00_1832 = BUNSPEC;
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_flagsz00) = ((obj_t) BgL_flags1848z00_1824), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_namez00) = ((obj_t) BgL_name1849z00_1825), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_ownerz00) = ((obj_t) BgL_owner1850z00_1826), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_usertypez00) =
									((obj_t) BgL_usertype1851z00_1827), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_typez00) = ((obj_t) BgL_type1852z00_1828), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_pnamez00) = ((obj_t) BgL_pname1853z00_1829), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_descriptorz00) =
									((obj_t) BgL_descriptor1854z00_1830), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_poolz00) = ((obj_t) BgL_pool1855z00_1831), BUNSPEC);
								((((BgL_fieldz00_bglt) CREF(BgL_new1857z00_1814))->
										BgL_attributesz00) =
									((obj_t) BgL_attributes1856z00_1832), BUNSPEC);
								BgL_res3013z00_1833 = BgL_new1857z00_1814;
						}}
						(obj_t) (BgL_res3013z00_1833);
				}}
			else
				{	/* Jas/classfile.scm 30 */
					BFALSE;
				}
			return
				(BgL_fieldz00_bglt) (BGl_z52thezd2fieldzd2nilz52zzjas_classfilez00);
		}
	}



/* _field-nil */
	obj_t BGl__fieldzd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2607)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			return (obj_t) (BGl_fieldzd2nilzd2zzjas_classfilez00());
		}
	}



/* field-or-method? */
	BGL_EXPORTED_DEF bool_t BGl_fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t
		BgL_obj1808z00_211)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1808z00_211,
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00);
		}
	}



/* _field-or-method? */
	obj_t BGl__fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t BgL_envz00_2604,
		obj_t BgL_obj1808z00_2605)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1808z00_2605,
					BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
		}
	}



/* make-field-or-method */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t
		BgL_flags1738z00_215, obj_t BgL_name1739z00_216, obj_t BgL_owner1740z00_217,
		obj_t BgL_usertype1741z00_218, obj_t BgL_type1742z00_219,
		obj_t BgL_pname1743z00_220, obj_t BgL_descriptor1744z00_221,
		obj_t BgL_pool1745z00_222, obj_t BgL_attributes1746z00_223)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{	/* Jas/classfile.scm 19 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_new1747z00_1834;

				{	/* Jas/classfile.scm 19 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_res3014z00_1839;

					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_new1769z00_1835;

						BgL_new1769z00_1835 =
							((BgL_fieldzd2orzd2methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_fieldzd2orzd2methodz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1769z00_1835),
							BGl_classzd2numzd2zz__objectz00
							(BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_4118;

							BgL_auxz00_4118 = (BgL_objectz00_bglt) (BgL_new1769z00_1835);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4118, BFALSE);
						}
						BgL_res3014z00_1839 = BgL_new1769z00_1835;
					}
					BgL_new1747z00_1834 = BgL_res3014z00_1839;
				}
				{	/* Jas/classfile.scm 19 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_res3015z00_1859;

					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_new1758z00_1840;

						BgL_new1758z00_1840 = BgL_new1747z00_1834;
						{	/* Jas/classfile.scm 19 */
							obj_t BgL_flags1749z00_1850;

							obj_t BgL_name1750z00_1851;

							obj_t BgL_owner1751z00_1852;

							obj_t BgL_usertype1752z00_1853;

							obj_t BgL_type1753z00_1854;

							obj_t BgL_pname1754z00_1855;

							obj_t BgL_descriptor1755z00_1856;

							obj_t BgL_pool1756z00_1857;

							obj_t BgL_attributes1757z00_1858;

							BgL_flags1749z00_1850 = BgL_flags1738z00_215;
							BgL_name1750z00_1851 = BgL_name1739z00_216;
							BgL_owner1751z00_1852 = BgL_owner1740z00_217;
							BgL_usertype1752z00_1853 = BgL_usertype1741z00_218;
							BgL_type1753z00_1854 = BgL_type1742z00_219;
							BgL_pname1754z00_1855 = BgL_pname1743z00_220;
							BgL_descriptor1755z00_1856 = BgL_descriptor1744z00_221;
							BgL_pool1756z00_1857 = BgL_pool1745z00_222;
							BgL_attributes1757z00_1858 = BgL_attributes1746z00_223;
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_flagsz00) = ((obj_t) BgL_flags1749z00_1850), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_namez00) = ((obj_t) BgL_name1750z00_1851), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_ownerz00) = ((obj_t) BgL_owner1751z00_1852), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1752z00_1853), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_typez00) = ((obj_t) BgL_type1753z00_1854), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_pnamez00) = ((obj_t) BgL_pname1754z00_1855), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1755z00_1856), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_poolz00) = ((obj_t) BgL_pool1756z00_1857), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_1840))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1757z00_1858), BUNSPEC);
							BgL_res3015z00_1859 = BgL_new1758z00_1840;
					}} BgL_res3015z00_1859;
				}
				return BgL_new1747z00_1834;
			}
		}
	}



/* _make-field-or-method */
	obj_t BGl__makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t
		BgL_envz00_2702, obj_t BgL_flags1738z00_2703, obj_t BgL_name1739z00_2704,
		obj_t BgL_owner1740z00_2705, obj_t BgL_usertype1741z00_2706,
		obj_t BgL_type1742z00_2707, obj_t BgL_pname1743z00_2708,
		obj_t BgL_descriptor1744z00_2709, obj_t BgL_pool1745z00_2710,
		obj_t BgL_attributes1746z00_2711)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			return
				(obj_t) (BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00
				(BgL_flags1738z00_2703, BgL_name1739z00_2704, BgL_owner1740z00_2705,
					BgL_usertype1741z00_2706, BgL_type1742z00_2707, BgL_pname1743z00_2708,
					BgL_descriptor1744z00_2709, BgL_pool1745z00_2710,
					BgL_attributes1746z00_2711));
		}
	}



/* fill-field-or-method! */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_fillzd2fieldzd2orzd2methodz12zc0zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_new1758z00_224,
		obj_t BgL_flags1749z00_225, obj_t BgL_name1750z00_226,
		obj_t BgL_owner1751z00_227, obj_t BgL_usertype1752z00_228,
		obj_t BgL_type1753z00_229, obj_t BgL_pname1754z00_230,
		obj_t BgL_descriptor1755z00_231, obj_t BgL_pool1756z00_232,
		obj_t BgL_attributes1757z00_233)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{	/* Jas/classfile.scm 19 */
				obj_t BgL_flags1749z00_2990;

				obj_t BgL_name1750z00_2991;

				obj_t BgL_owner1751z00_2992;

				obj_t BgL_usertype1752z00_2993;

				obj_t BgL_type1753z00_2994;

				obj_t BgL_pname1754z00_2995;

				obj_t BgL_descriptor1755z00_2996;

				obj_t BgL_pool1756z00_2997;

				obj_t BgL_attributes1757z00_2998;

				BgL_flags1749z00_2990 = BgL_flags1749z00_225;
				BgL_name1750z00_2991 = BgL_name1750z00_226;
				BgL_owner1751z00_2992 = BgL_owner1751z00_227;
				BgL_usertype1752z00_2993 = BgL_usertype1752z00_228;
				BgL_type1753z00_2994 = BgL_type1753z00_229;
				BgL_pname1754z00_2995 = BgL_pname1754z00_230;
				BgL_descriptor1755z00_2996 = BgL_descriptor1755z00_231;
				BgL_pool1756z00_2997 = BgL_pool1756z00_232;
				BgL_attributes1757z00_2998 = BgL_attributes1757z00_233;
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_flagsz00) = ((obj_t) BgL_flags1749z00_2990), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_namez00) = ((obj_t) BgL_name1750z00_2991), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_ownerz00) = ((obj_t) BgL_owner1751z00_2992), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_usertypez00) = ((obj_t) BgL_usertype1752z00_2993), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_typez00) = ((obj_t) BgL_type1753z00_2994), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_pnamez00) = ((obj_t) BgL_pname1754z00_2995), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_descriptorz00) = ((obj_t) BgL_descriptor1755z00_2996), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_poolz00) = ((obj_t) BgL_pool1756z00_2997), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_224))->
						BgL_attributesz00) = ((obj_t) BgL_attributes1757z00_2998), BUNSPEC);
				return BgL_new1758z00_224;
			}
		}
	}



/* _fill-field-or-method! */
	obj_t BGl__fillzd2fieldzd2orzd2methodz12zc0zzjas_classfilez00(obj_t
		BgL_envz00_2712, obj_t BgL_new1758z00_2713, obj_t BgL_flags1749z00_2714,
		obj_t BgL_name1750z00_2715, obj_t BgL_owner1751z00_2716,
		obj_t BgL_usertype1752z00_2717, obj_t BgL_type1753z00_2718,
		obj_t BgL_pname1754z00_2719, obj_t BgL_descriptor1755z00_2720,
		obj_t BgL_pool1756z00_2721, obj_t BgL_attributes1757z00_2722)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{	/* Jas/classfile.scm 19 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4141;

				{	/* Jas/classfile.scm 19 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_res3097z00_3018;

					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_new1758z00_2999;

						obj_t BgL_name1750z00_3001;

						BgL_new1758z00_2999 =
							(BgL_fieldzd2orzd2methodz00_bglt) (BgL_new1758z00_2713);
						BgL_name1750z00_3001 = BgL_name1750z00_2715;
						{	/* Jas/classfile.scm 19 */
							obj_t BgL_flags1749z00_3009;

							obj_t BgL_name1750z00_3010;

							obj_t BgL_owner1751z00_3011;

							obj_t BgL_usertype1752z00_3012;

							obj_t BgL_type1753z00_3013;

							obj_t BgL_pname1754z00_3014;

							obj_t BgL_descriptor1755z00_3015;

							obj_t BgL_pool1756z00_3016;

							obj_t BgL_attributes1757z00_3017;

							BgL_flags1749z00_3009 = BgL_flags1749z00_2714;
							BgL_name1750z00_3010 = BgL_name1750z00_3001;
							BgL_owner1751z00_3011 = BgL_owner1751z00_2716;
							BgL_usertype1752z00_3012 = BgL_usertype1752z00_2717;
							BgL_type1753z00_3013 = BgL_type1753z00_2718;
							BgL_pname1754z00_3014 = BgL_pname1754z00_2719;
							BgL_descriptor1755z00_3015 = BgL_descriptor1755z00_2720;
							BgL_pool1756z00_3016 = BgL_pool1756z00_2721;
							BgL_attributes1757z00_3017 = BgL_attributes1757z00_2722;
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_flagsz00) = ((obj_t) BgL_flags1749z00_3009), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_namez00) = ((obj_t) BgL_name1750z00_3010), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_ownerz00) = ((obj_t) BgL_owner1751z00_3011), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_usertypez00) =
								((obj_t) BgL_usertype1752z00_3012), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_typez00) = ((obj_t) BgL_type1753z00_3013), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_pnamez00) = ((obj_t) BgL_pname1754z00_3014), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_descriptorz00) =
								((obj_t) BgL_descriptor1755z00_3015), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_poolz00) = ((obj_t) BgL_pool1756z00_3016), BUNSPEC);
							((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_new1758z00_2999))->
									BgL_attributesz00) =
								((obj_t) BgL_attributes1757z00_3017), BUNSPEC);
							BgL_res3097z00_3018 = BgL_new1758z00_2999;
						}
					}
					BgL_auxz00_4141 = BgL_res3097z00_3018;
				}
				return (obj_t) (BgL_auxz00_4141);
			}
		}
	}



/* %allocate-field-or-method */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_z52allocatezd2fieldzd2orzd2methodz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{	/* Jas/classfile.scm 19 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_new1769z00_3019;

				BgL_new1769z00_3019 =
					((BgL_fieldzd2orzd2methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_fieldzd2orzd2methodz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1769z00_3019),
					BGl_classzd2numzd2zz__objectz00
					(BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_4157;

					BgL_auxz00_4157 = (BgL_objectz00_bglt) (BgL_new1769z00_3019);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4157, BFALSE);
				}
				return BgL_new1769z00_3019;
			}
		}
	}



/* _%allocate-field-or-method */
	obj_t BGl__z52allocatezd2fieldzd2orzd2methodz80zzjas_classfilez00(obj_t
		BgL_envz00_2602)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{	/* Jas/classfile.scm 19 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4160;

				{	/* Jas/classfile.scm 19 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_res3098z00_3023;

					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_new1769z00_3021;

						BgL_new1769z00_3021 =
							((BgL_fieldzd2orzd2methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_fieldzd2orzd2methodz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1769z00_3021),
							BGl_classzd2numzd2zz__objectz00
							(BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_4165;

							BgL_auxz00_4165 = (BgL_objectz00_bglt) (BgL_new1769z00_3021);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4165, BFALSE);
						}
						BgL_res3098z00_3023 = BgL_new1769z00_3021;
					}
					BgL_auxz00_4160 = BgL_res3098z00_3023;
				}
				return (obj_t) (BgL_auxz00_4160);
			}
		}
	}



/* field-or-method-nil */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			if (
				(BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00 ==
					BUNSPEC))
				{	/* Jas/classfile.scm 19 */
					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_res3016z00_1877;

						{	/* Jas/classfile.scm 19 */
							BgL_fieldzd2orzd2methodz00_bglt BgL_new1769z00_1873;

							BgL_new1769z00_1873 =
								((BgL_fieldzd2orzd2methodz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_fieldzd2orzd2methodz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1769z00_1873),
								BGl_classzd2numzd2zz__objectz00
								(BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_4175;

								BgL_auxz00_4175 = (BgL_objectz00_bglt) (BgL_new1769z00_1873);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4175, BFALSE);
							}
							BgL_res3016z00_1877 = BgL_new1769z00_1873;
						}
						BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3016z00_1877);
					}
					{	/* Jas/classfile.scm 19 */
						BgL_fieldzd2orzd2methodz00_bglt BgL_res3017z00_1897;

						{	/* Jas/classfile.scm 19 */
							BgL_fieldzd2orzd2methodz00_bglt BgL_new1758z00_1878;

							BgL_new1758z00_1878 =
								(BgL_fieldzd2orzd2methodz00_bglt)
								(BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 19 */
								obj_t BgL_flags1749z00_1888;

								obj_t BgL_name1750z00_1889;

								obj_t BgL_owner1751z00_1890;

								obj_t BgL_usertype1752z00_1891;

								obj_t BgL_type1753z00_1892;

								obj_t BgL_pname1754z00_1893;

								obj_t BgL_descriptor1755z00_1894;

								obj_t BgL_pool1756z00_1895;

								obj_t BgL_attributes1757z00_1896;

								BgL_flags1749z00_1888 = BUNSPEC;
								BgL_name1750z00_1889 = BGl_string3062z00zzjas_classfilez00;
								BgL_owner1751z00_1890 = BUNSPEC;
								BgL_usertype1752z00_1891 = BUNSPEC;
								BgL_type1753z00_1892 = BUNSPEC;
								BgL_pname1754z00_1893 = BUNSPEC;
								BgL_descriptor1755z00_1894 = BUNSPEC;
								BgL_pool1756z00_1895 = BUNSPEC;
								BgL_attributes1757z00_1896 = BUNSPEC;
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_flagsz00) =
									((obj_t) BgL_flags1749z00_1888), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_namez00) =
									((obj_t) BgL_name1750z00_1889), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_ownerz00) =
									((obj_t) BgL_owner1751z00_1890), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_usertypez00) =
									((obj_t) BgL_usertype1752z00_1891), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_typez00) =
									((obj_t) BgL_type1753z00_1892), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_pnamez00) =
									((obj_t) BgL_pname1754z00_1893), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_descriptorz00) =
									((obj_t) BgL_descriptor1755z00_1894), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_poolz00) =
									((obj_t) BgL_pool1756z00_1895), BUNSPEC);
								((((BgL_fieldzd2orzd2methodz00_bglt)
											CREF(BgL_new1758z00_1878))->BgL_attributesz00) =
									((obj_t) BgL_attributes1757z00_1896), BUNSPEC);
								BgL_res3017z00_1897 = BgL_new1758z00_1878;
						}}
						(obj_t) (BgL_res3017z00_1897);
				}}
			else
				{	/* Jas/classfile.scm 19 */
					BFALSE;
				}
			return
				(BgL_fieldzd2orzd2methodz00_bglt)
				(BGl_z52thezd2fieldzd2orzd2methodzd2nilz52zzjas_classfilez00);
		}
	}



/* _field-or-method-nil */
	obj_t BGl__fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00(obj_t
		BgL_envz00_2603)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			return (obj_t) (BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00());
		}
	}



/* classe? */
	BGL_EXPORTED_DEF bool_t BGl_classezf3zf3zzjas_classfilez00(obj_t
		BgL_obj1707z00_261)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1707z00_261,
				BGl_classez00zzjas_classfilez00);
		}
	}



/* _classe? */
	obj_t BGl__classezf3zf3zzjas_classfilez00(obj_t BgL_envz00_2600,
		obj_t BgL_obj1707z00_2601)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1707z00_2601,
					BGl_classez00zzjas_classfilez00));
		}
	}



/* make-classe */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_makezd2classezd2zzjas_classfilez00(obj_t BgL_code1665z00_265,
		obj_t BgL_vect1666z00_266, obj_t BgL_flags1667z00_267,
		obj_t BgL_name1668z00_268, obj_t BgL_pool1669z00_269)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{	/* Jas/classfile.scm 14 */
				BgL_classez00_bglt BgL_new1670z00_1898;

				{	/* Jas/classfile.scm 14 */
					BgL_classez00_bglt BgL_res3018z00_1903;

					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_new1684z00_1899;

						BgL_new1684z00_1899 =
							((BgL_classez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_classez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1684z00_1899),
							BGl_classzd2numzd2zz__objectz00(BGl_classez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_4200;

							BgL_auxz00_4200 = (BgL_objectz00_bglt) (BgL_new1684z00_1899);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4200, BFALSE);
						}
						BgL_res3018z00_1903 = BgL_new1684z00_1899;
					}
					BgL_new1670z00_1898 = BgL_res3018z00_1903;
				}
				{	/* Jas/classfile.scm 14 */
					BgL_classez00_bglt BgL_res3019z00_1915;

					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_new1677z00_1904;

						BgL_new1677z00_1904 = BgL_new1670z00_1898;
						{	/* Jas/classfile.scm 14 */
							obj_t BgL_code1672z00_1910;

							obj_t BgL_vect1673z00_1911;

							obj_t BgL_flags1674z00_1912;

							obj_t BgL_name1675z00_1913;

							obj_t BgL_pool1676z00_1914;

							BgL_code1672z00_1910 = BgL_code1665z00_265;
							BgL_vect1673z00_1911 = BgL_vect1666z00_266;
							BgL_flags1674z00_1912 = BgL_flags1667z00_267;
							BgL_name1675z00_1913 = BgL_name1668z00_268;
							BgL_pool1676z00_1914 = BgL_pool1669z00_269;
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_1904))->BgL_codez00) =
								((obj_t) BgL_code1672z00_1910), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_1904))->BgL_vectz00) =
								((obj_t) BgL_vect1673z00_1911), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_1904))->
									BgL_flagsz00) = ((obj_t) BgL_flags1674z00_1912), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_1904))->BgL_namez00) =
								((obj_t) BgL_name1675z00_1913), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_1904))->BgL_poolz00) =
								((obj_t) BgL_pool1676z00_1914), BUNSPEC);
							BgL_res3019z00_1915 = BgL_new1677z00_1904;
					}} BgL_res3019z00_1915;
				}
				return BgL_new1670z00_1898;
			}
		}
	}



/* _make-classe */
	obj_t BGl__makezd2classezd2zzjas_classfilez00(obj_t BgL_envz00_2723,
		obj_t BgL_code1665z00_2724, obj_t BgL_vect1666z00_2725,
		obj_t BgL_flags1667z00_2726, obj_t BgL_name1668z00_2727,
		obj_t BgL_pool1669z00_2728)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			return
				(obj_t) (BGl_makezd2classezd2zzjas_classfilez00(BgL_code1665z00_2724,
					BgL_vect1666z00_2725, BgL_flags1667z00_2726, BgL_name1668z00_2727,
					BgL_pool1669z00_2728));
		}
	}



/* fill-classe! */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_fillzd2classez12zc0zzjas_classfilez00(BgL_classez00_bglt
		BgL_new1677z00_270, obj_t BgL_code1672z00_271, obj_t BgL_vect1673z00_272,
		obj_t BgL_flags1674z00_273, obj_t BgL_name1675z00_274,
		obj_t BgL_pool1676z00_275)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{	/* Jas/classfile.scm 14 */
				obj_t BgL_code1672z00_3025;

				obj_t BgL_vect1673z00_3026;

				obj_t BgL_flags1674z00_3027;

				obj_t BgL_name1675z00_3028;

				obj_t BgL_pool1676z00_3029;

				BgL_code1672z00_3025 = BgL_code1672z00_271;
				BgL_vect1673z00_3026 = BgL_vect1673z00_272;
				BgL_flags1674z00_3027 = BgL_flags1674z00_273;
				BgL_name1675z00_3028 = BgL_name1675z00_274;
				BgL_pool1676z00_3029 = BgL_pool1676z00_275;
				((((BgL_classez00_bglt) CREF(BgL_new1677z00_270))->BgL_codez00) =
					((obj_t) BgL_code1672z00_3025), BUNSPEC);
				((((BgL_classez00_bglt) CREF(BgL_new1677z00_270))->BgL_vectz00) =
					((obj_t) BgL_vect1673z00_3026), BUNSPEC);
				((((BgL_classez00_bglt) CREF(BgL_new1677z00_270))->BgL_flagsz00) =
					((obj_t) BgL_flags1674z00_3027), BUNSPEC);
				((((BgL_classez00_bglt) CREF(BgL_new1677z00_270))->BgL_namez00) =
					((obj_t) BgL_name1675z00_3028), BUNSPEC);
				((((BgL_classez00_bglt) CREF(BgL_new1677z00_270))->BgL_poolz00) =
					((obj_t) BgL_pool1676z00_3029), BUNSPEC);
				return BgL_new1677z00_270;
			}
		}
	}



/* _fill-classe! */
	obj_t BGl__fillzd2classez12zc0zzjas_classfilez00(obj_t BgL_envz00_2729,
		obj_t BgL_new1677z00_2730, obj_t BgL_code1672z00_2731,
		obj_t BgL_vect1673z00_2732, obj_t BgL_flags1674z00_2733,
		obj_t BgL_name1675z00_2734, obj_t BgL_pool1676z00_2735)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{	/* Jas/classfile.scm 14 */
				BgL_classez00_bglt BgL_auxz00_4215;

				{	/* Jas/classfile.scm 14 */
					BgL_classez00_bglt BgL_res3099z00_3041;

					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_new1677z00_3030;

						obj_t BgL_code1672z00_3031;

						BgL_new1677z00_3030 = (BgL_classez00_bglt) (BgL_new1677z00_2730);
						BgL_code1672z00_3031 = BgL_code1672z00_2731;
						{	/* Jas/classfile.scm 14 */
							obj_t BgL_code1672z00_3036;

							obj_t BgL_vect1673z00_3037;

							obj_t BgL_flags1674z00_3038;

							obj_t BgL_name1675z00_3039;

							obj_t BgL_pool1676z00_3040;

							BgL_code1672z00_3036 = BgL_code1672z00_3031;
							BgL_vect1673z00_3037 = BgL_vect1673z00_2732;
							BgL_flags1674z00_3038 = BgL_flags1674z00_2733;
							BgL_name1675z00_3039 = BgL_name1675z00_2734;
							BgL_pool1676z00_3040 = BgL_pool1676z00_2735;
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_3030))->BgL_codez00) =
								((obj_t) BgL_code1672z00_3036), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_3030))->BgL_vectz00) =
								((obj_t) BgL_vect1673z00_3037), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_3030))->
									BgL_flagsz00) = ((obj_t) BgL_flags1674z00_3038), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_3030))->BgL_namez00) =
								((obj_t) BgL_name1675z00_3039), BUNSPEC);
							((((BgL_classez00_bglt) CREF(BgL_new1677z00_3030))->BgL_poolz00) =
								((obj_t) BgL_pool1676z00_3040), BUNSPEC);
							BgL_res3099z00_3041 = BgL_new1677z00_3030;
						}
					}
					BgL_auxz00_4215 = BgL_res3099z00_3041;
				}
				return (obj_t) (BgL_auxz00_4215);
			}
		}
	}



/* %allocate-classe */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_z52allocatezd2classez80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{	/* Jas/classfile.scm 14 */
				BgL_classez00_bglt BgL_new1684z00_3042;

				BgL_new1684z00_3042 =
					((BgL_classez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_classez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1684z00_3042),
					BGl_classzd2numzd2zz__objectz00(BGl_classez00zzjas_classfilez00));
				{	/* Jas/classfile.scm 14 */
					BgL_objectz00_bglt BgL_auxz00_4227;

					BgL_auxz00_4227 = (BgL_objectz00_bglt) (BgL_new1684z00_3042);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4227, BFALSE);
				}
				return BgL_new1684z00_3042;
			}
		}
	}



/* _%allocate-classe */
	obj_t BGl__z52allocatezd2classez80zzjas_classfilez00(obj_t BgL_envz00_2598)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{	/* Jas/classfile.scm 14 */
				BgL_classez00_bglt BgL_auxz00_4230;

				{	/* Jas/classfile.scm 14 */
					BgL_classez00_bglt BgL_res3100z00_3046;

					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_new1684z00_3044;

						BgL_new1684z00_3044 =
							((BgL_classez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_classez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1684z00_3044),
							BGl_classzd2numzd2zz__objectz00(BGl_classez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_4235;

							BgL_auxz00_4235 = (BgL_objectz00_bglt) (BgL_new1684z00_3044);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4235, BFALSE);
						}
						BgL_res3100z00_3046 = BgL_new1684z00_3044;
					}
					BgL_auxz00_4230 = BgL_res3100z00_3046;
				}
				return (obj_t) (BgL_auxz00_4230);
			}
		}
	}



/* classe-nil */
	BGL_EXPORTED_DEF BgL_classez00_bglt BGl_classezd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			if ((BGl_z52thezd2classezd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 14 */
					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_res3020z00_1929;

						{	/* Jas/classfile.scm 14 */
							BgL_classez00_bglt BgL_new1684z00_1925;

							BgL_new1684z00_1925 =
								((BgL_classez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_classez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1684z00_1925),
								BGl_classzd2numzd2zz__objectz00
								(BGl_classez00zzjas_classfilez00));
							{	/* Jas/classfile.scm 14 */
								BgL_objectz00_bglt BgL_auxz00_4245;

								BgL_auxz00_4245 = (BgL_objectz00_bglt) (BgL_new1684z00_1925);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4245, BFALSE);
							}
							BgL_res3020z00_1929 = BgL_new1684z00_1925;
						}
						BGl_z52thezd2classezd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3020z00_1929);
					}
					{	/* Jas/classfile.scm 14 */
						BgL_classez00_bglt BgL_res3021z00_1941;

						{	/* Jas/classfile.scm 14 */
							BgL_classez00_bglt BgL_new1677z00_1930;

							BgL_new1677z00_1930 =
								(BgL_classez00_bglt)
								(BGl_z52thezd2classezd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 14 */
								obj_t BgL_code1672z00_1936;

								obj_t BgL_vect1673z00_1937;

								obj_t BgL_flags1674z00_1938;

								obj_t BgL_name1675z00_1939;

								obj_t BgL_pool1676z00_1940;

								BgL_code1672z00_1936 = BGl_string3062z00zzjas_classfilez00;
								BgL_vect1673z00_1937 = BUNSPEC;
								BgL_flags1674z00_1938 = BUNSPEC;
								BgL_name1675z00_1939 = BUNSPEC;
								BgL_pool1676z00_1940 = BUNSPEC;
								((((BgL_classez00_bglt) CREF(BgL_new1677z00_1930))->
										BgL_codez00) = ((obj_t) BgL_code1672z00_1936), BUNSPEC);
								((((BgL_classez00_bglt) CREF(BgL_new1677z00_1930))->
										BgL_vectz00) = ((obj_t) BgL_vect1673z00_1937), BUNSPEC);
								((((BgL_classez00_bglt) CREF(BgL_new1677z00_1930))->
										BgL_flagsz00) = ((obj_t) BgL_flags1674z00_1938), BUNSPEC);
								((((BgL_classez00_bglt) CREF(BgL_new1677z00_1930))->
										BgL_namez00) = ((obj_t) BgL_name1675z00_1939), BUNSPEC);
								((((BgL_classez00_bglt) CREF(BgL_new1677z00_1930))->
										BgL_poolz00) = ((obj_t) BgL_pool1676z00_1940), BUNSPEC);
								BgL_res3021z00_1941 = BgL_new1677z00_1930;
						}}
						(obj_t) (BgL_res3021z00_1941);
				}}
			else
				{	/* Jas/classfile.scm 14 */
					BFALSE;
				}
			return
				(BgL_classez00_bglt) (BGl_z52thezd2classezd2nilz52zzjas_classfilez00);
		}
	}



/* _classe-nil */
	obj_t BGl__classezd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2599)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			return (obj_t) (BGl_classezd2nilzd2zzjas_classfilez00());
		}
	}



/* fun? */
	BGL_EXPORTED_DEF bool_t BGl_funzf3zf3zzjas_classfilez00(obj_t
		BgL_obj1649z00_285)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1649z00_285,
				BGl_funz00zzjas_classfilez00);
		}
	}



/* _fun? */
	obj_t BGl__funzf3zf3zzjas_classfilez00(obj_t BgL_envz00_2596,
		obj_t BgL_obj1649z00_2597)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1649z00_2597,
					BGl_funz00zzjas_classfilez00));
		}
	}



/* make-fun */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_makezd2funzd2zzjas_classfilez00(obj_t
		BgL_code1614z00_289, obj_t BgL_vect1615z00_290,
		BgL_typez00_bglt BgL_tret1616z00_291, obj_t BgL_targs1617z00_292)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{	/* Jas/classfile.scm 12 */
				BgL_funz00_bglt BgL_new1618z00_1942;

				{	/* Jas/classfile.scm 12 */
					BgL_funz00_bglt BgL_res3022z00_1947;

					{	/* Jas/classfile.scm 12 */
						BgL_funz00_bglt BgL_new1630z00_1943;

						BgL_new1630z00_1943 =
							((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1630z00_1943),
							BGl_classzd2numzd2zz__objectz00(BGl_funz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 12 */
							BgL_objectz00_bglt BgL_auxz00_4266;

							BgL_auxz00_4266 = (BgL_objectz00_bglt) (BgL_new1630z00_1943);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4266, BFALSE);
						}
						BgL_res3022z00_1947 = BgL_new1630z00_1943;
					}
					BgL_new1618z00_1942 = BgL_res3022z00_1947;
				}
				{	/* Jas/classfile.scm 12 */
					BgL_funz00_bglt BgL_res3023z00_1957;

					{	/* Jas/classfile.scm 12 */
						BgL_funz00_bglt BgL_new1624z00_1948;

						BgL_new1624z00_1948 = BgL_new1618z00_1942;
						{	/* Jas/classfile.scm 12 */
							obj_t BgL_code1620z00_1953;

							obj_t BgL_vect1621z00_1954;

							BgL_typez00_bglt BgL_tret1622z00_1955;

							obj_t BgL_targs1623z00_1956;

							BgL_code1620z00_1953 = BgL_code1614z00_289;
							BgL_vect1621z00_1954 = BgL_vect1615z00_290;
							BgL_tret1622z00_1955 = BgL_tret1616z00_291;
							BgL_targs1623z00_1956 = BgL_targs1617z00_292;
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_1948))->BgL_codez00) =
								((obj_t) BgL_code1620z00_1953), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_1948))->BgL_vectz00) =
								((obj_t) BgL_vect1621z00_1954), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_1948))->BgL_tretz00) =
								((BgL_typez00_bglt) BgL_tret1622z00_1955), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_1948))->BgL_targsz00) =
								((obj_t) BgL_targs1623z00_1956), BUNSPEC);
							BgL_res3023z00_1957 = BgL_new1624z00_1948;
					}} BgL_res3023z00_1957;
				}
				return BgL_new1618z00_1942;
			}
		}
	}



/* _make-fun */
	obj_t BGl__makezd2funzd2zzjas_classfilez00(obj_t BgL_envz00_2736,
		obj_t BgL_code1614z00_2737, obj_t BgL_vect1615z00_2738,
		obj_t BgL_tret1616z00_2739, obj_t BgL_targs1617z00_2740)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			return
				(obj_t) (BGl_makezd2funzd2zzjas_classfilez00(BgL_code1614z00_2737,
					BgL_vect1615z00_2738, (BgL_typez00_bglt) (BgL_tret1616z00_2739),
					BgL_targs1617z00_2740));
		}
	}



/* fill-fun! */
	BGL_EXPORTED_DEF BgL_funz00_bglt
		BGl_fillzd2funz12zc0zzjas_classfilez00(BgL_funz00_bglt BgL_new1624z00_293,
		obj_t BgL_code1620z00_294, obj_t BgL_vect1621z00_295,
		BgL_typez00_bglt BgL_tret1622z00_296, obj_t BgL_targs1623z00_297)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{	/* Jas/classfile.scm 12 */
				obj_t BgL_code1620z00_3048;

				obj_t BgL_vect1621z00_3049;

				BgL_typez00_bglt BgL_tret1622z00_3050;

				obj_t BgL_targs1623z00_3051;

				BgL_code1620z00_3048 = BgL_code1620z00_294;
				BgL_vect1621z00_3049 = BgL_vect1621z00_295;
				BgL_tret1622z00_3050 = BgL_tret1622z00_296;
				BgL_targs1623z00_3051 = BgL_targs1623z00_297;
				((((BgL_funz00_bglt) CREF(BgL_new1624z00_293))->BgL_codez00) =
					((obj_t) BgL_code1620z00_3048), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new1624z00_293))->BgL_vectz00) =
					((obj_t) BgL_vect1621z00_3049), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new1624z00_293))->BgL_tretz00) =
					((BgL_typez00_bglt) BgL_tret1622z00_3050), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new1624z00_293))->BgL_targsz00) =
					((obj_t) BgL_targs1623z00_3051), BUNSPEC);
				return BgL_new1624z00_293;
			}
		}
	}



/* _fill-fun! */
	obj_t BGl__fillzd2funz12zc0zzjas_classfilez00(obj_t BgL_envz00_2741,
		obj_t BgL_new1624z00_2742, obj_t BgL_code1620z00_2743,
		obj_t BgL_vect1621z00_2744, obj_t BgL_tret1622z00_2745,
		obj_t BgL_targs1623z00_2746)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{	/* Jas/classfile.scm 12 */
				BgL_funz00_bglt BgL_auxz00_4280;

				{	/* Jas/classfile.scm 12 */
					BgL_funz00_bglt BgL_res3101z00_3061;

					{	/* Jas/classfile.scm 12 */
						BgL_funz00_bglt BgL_new1624z00_3052;

						obj_t BgL_code1620z00_3053;

						BgL_typez00_bglt BgL_tret1622z00_3055;

						BgL_new1624z00_3052 = (BgL_funz00_bglt) (BgL_new1624z00_2742);
						BgL_code1620z00_3053 = BgL_code1620z00_2743;
						BgL_tret1622z00_3055 = (BgL_typez00_bglt) (BgL_tret1622z00_2745);
						{	/* Jas/classfile.scm 12 */
							obj_t BgL_code1620z00_3057;

							obj_t BgL_vect1621z00_3058;

							BgL_typez00_bglt BgL_tret1622z00_3059;

							obj_t BgL_targs1623z00_3060;

							BgL_code1620z00_3057 = BgL_code1620z00_3053;
							BgL_vect1621z00_3058 = BgL_vect1621z00_2744;
							BgL_tret1622z00_3059 = BgL_tret1622z00_3055;
							BgL_targs1623z00_3060 = BgL_targs1623z00_2746;
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_3052))->BgL_codez00) =
								((obj_t) BgL_code1620z00_3057), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_3052))->BgL_vectz00) =
								((obj_t) BgL_vect1621z00_3058), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_3052))->BgL_tretz00) =
								((BgL_typez00_bglt) BgL_tret1622z00_3059), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new1624z00_3052))->BgL_targsz00) =
								((obj_t) BgL_targs1623z00_3060), BUNSPEC);
							BgL_res3101z00_3061 = BgL_new1624z00_3052;
						}
					}
					BgL_auxz00_4280 = BgL_res3101z00_3061;
				}
				return (obj_t) (BgL_auxz00_4280);
			}
		}
	}



/* %allocate-fun */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_z52allocatezd2funz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{	/* Jas/classfile.scm 12 */
				BgL_funz00_bglt BgL_new1630z00_3062;

				BgL_new1630z00_3062 =
					((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_funz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1630z00_3062),
					BGl_classzd2numzd2zz__objectz00(BGl_funz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 12 */
					BgL_objectz00_bglt BgL_auxz00_4292;

					BgL_auxz00_4292 = (BgL_objectz00_bglt) (BgL_new1630z00_3062);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4292, BFALSE);
				}
				return BgL_new1630z00_3062;
			}
		}
	}



/* _%allocate-fun */
	obj_t BGl__z52allocatezd2funz80zzjas_classfilez00(obj_t BgL_envz00_2594)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{	/* Jas/classfile.scm 12 */
				BgL_funz00_bglt BgL_auxz00_4295;

				{	/* Jas/classfile.scm 12 */
					BgL_funz00_bglt BgL_res3102z00_3066;

					{	/* Jas/classfile.scm 12 */
						BgL_funz00_bglt BgL_new1630z00_3064;

						BgL_new1630z00_3064 =
							((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1630z00_3064),
							BGl_classzd2numzd2zz__objectz00(BGl_funz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 12 */
							BgL_objectz00_bglt BgL_auxz00_4300;

							BgL_auxz00_4300 = (BgL_objectz00_bglt) (BgL_new1630z00_3064);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4300, BFALSE);
						}
						BgL_res3102z00_3066 = BgL_new1630z00_3064;
					}
					BgL_auxz00_4295 = BgL_res3102z00_3066;
				}
				return (obj_t) (BgL_auxz00_4295);
			}
		}
	}



/* fun-nil */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_funzd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			if ((BGl_z52thezd2funzd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 12 */
					{	/* Jas/classfile.scm 12 */
						BgL_funz00_bglt BgL_res3024z00_1970;

						{	/* Jas/classfile.scm 12 */
							BgL_funz00_bglt BgL_new1630z00_1966;

							BgL_new1630z00_1966 =
								((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_funz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1630z00_1966),
								BGl_classzd2numzd2zz__objectz00(BGl_funz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 12 */
								BgL_objectz00_bglt BgL_auxz00_4310;

								BgL_auxz00_4310 = (BgL_objectz00_bglt) (BgL_new1630z00_1966);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4310, BFALSE);
							}
							BgL_res3024z00_1970 = BgL_new1630z00_1966;
						}
						BGl_z52thezd2funzd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3024z00_1970);
					}
					{	/* Jas/classfile.scm 12 */
						BgL_typez00_bglt BgL_arg2783z00_808;

						BgL_arg2783z00_808 = BGl_typezd2nilzd2zzjas_classfilez00();
						{	/* Jas/classfile.scm 12 */
							BgL_funz00_bglt BgL_res3025z00_1980;

							{	/* Jas/classfile.scm 12 */
								BgL_funz00_bglt BgL_new1624z00_1971;

								BgL_new1624z00_1971 =
									(BgL_funz00_bglt)
									(BGl_z52thezd2funzd2nilz52zzjas_classfilez00);
								{	/* Jas/classfile.scm 12 */
									obj_t BgL_code1620z00_1976;

									obj_t BgL_vect1621z00_1977;

									BgL_typez00_bglt BgL_tret1622z00_1978;

									obj_t BgL_targs1623z00_1979;

									BgL_code1620z00_1976 = BGl_string3062z00zzjas_classfilez00;
									BgL_vect1621z00_1977 = BUNSPEC;
									BgL_tret1622z00_1978 = BgL_arg2783z00_808;
									BgL_targs1623z00_1979 = BUNSPEC;
									((((BgL_funz00_bglt) CREF(BgL_new1624z00_1971))->
											BgL_codez00) = ((obj_t) BgL_code1620z00_1976), BUNSPEC);
									((((BgL_funz00_bglt) CREF(BgL_new1624z00_1971))->
											BgL_vectz00) = ((obj_t) BgL_vect1621z00_1977), BUNSPEC);
									((((BgL_funz00_bglt) CREF(BgL_new1624z00_1971))->
											BgL_tretz00) =
										((BgL_typez00_bglt) BgL_tret1622z00_1978), BUNSPEC);
									((((BgL_funz00_bglt) CREF(BgL_new1624z00_1971))->
											BgL_targsz00) = ((obj_t) BgL_targs1623z00_1979), BUNSPEC);
									BgL_res3025z00_1980 = BgL_new1624z00_1971;
							}}
							(obj_t) (BgL_res3025z00_1980);
				}}}
			else
				{	/* Jas/classfile.scm 12 */
					BFALSE;
				}
			return (BgL_funz00_bglt) (BGl_z52thezd2funzd2nilz52zzjas_classfilez00);
		}
	}



/* _fun-nil */
	obj_t BGl__funzd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2595)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			return (obj_t) (BGl_funzd2nilzd2zzjas_classfilez00());
		}
	}



/* vect? */
	BGL_EXPORTED_DEF bool_t BGl_vectzf3zf3zzjas_classfilez00(obj_t
		BgL_obj1601z00_304)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1601z00_304,
				BGl_vectz00zzjas_classfilez00);
		}
	}



/* _vect? */
	obj_t BGl__vectzf3zf3zzjas_classfilez00(obj_t BgL_envz00_2592,
		obj_t BgL_obj1601z00_2593)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1601z00_2593,
					BGl_vectz00zzjas_classfilez00));
		}
	}



/* make-vect */
	BGL_EXPORTED_DEF BgL_vectz00_bglt BGl_makezd2vectzd2zzjas_classfilez00(obj_t
		BgL_code1573z00_308, obj_t BgL_vect1574z00_309,
		BgL_typez00_bglt BgL_type1575z00_310)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{	/* Jas/classfile.scm 10 */
				BgL_vectz00_bglt BgL_new1576z00_1981;

				{	/* Jas/classfile.scm 10 */
					BgL_vectz00_bglt BgL_res3026z00_1986;

					{	/* Jas/classfile.scm 10 */
						BgL_vectz00_bglt BgL_new1586z00_1982;

						BgL_new1586z00_1982 =
							((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1586z00_1982),
							BGl_classzd2numzd2zz__objectz00(BGl_vectz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 10 */
							BgL_objectz00_bglt BgL_auxz00_4331;

							BgL_auxz00_4331 = (BgL_objectz00_bglt) (BgL_new1586z00_1982);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4331, BFALSE);
						}
						BgL_res3026z00_1986 = BgL_new1586z00_1982;
					}
					BgL_new1576z00_1981 = BgL_res3026z00_1986;
				}
				{	/* Jas/classfile.scm 10 */
					BgL_vectz00_bglt BgL_res3027z00_1994;

					{	/* Jas/classfile.scm 10 */
						BgL_vectz00_bglt BgL_new1581z00_1987;

						BgL_new1581z00_1987 = BgL_new1576z00_1981;
						{	/* Jas/classfile.scm 10 */
							obj_t BgL_code1578z00_1991;

							obj_t BgL_vect1579z00_1992;

							BgL_typez00_bglt BgL_type1580z00_1993;

							BgL_code1578z00_1991 = BgL_code1573z00_308;
							BgL_vect1579z00_1992 = BgL_vect1574z00_309;
							BgL_type1580z00_1993 = BgL_type1575z00_310;
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1987))->BgL_codez00) =
								((obj_t) BgL_code1578z00_1991), BUNSPEC);
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1987))->BgL_vectz00) =
								((obj_t) BgL_vect1579z00_1992), BUNSPEC);
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_1987))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1580z00_1993), BUNSPEC);
							BgL_res3027z00_1994 = BgL_new1581z00_1987;
					}} BgL_res3027z00_1994;
				}
				return BgL_new1576z00_1981;
			}
		}
	}



/* _make-vect */
	obj_t BGl__makezd2vectzd2zzjas_classfilez00(obj_t BgL_envz00_2747,
		obj_t BgL_code1573z00_2748, obj_t BgL_vect1574z00_2749,
		obj_t BgL_type1575z00_2750)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			return
				(obj_t) (BGl_makezd2vectzd2zzjas_classfilez00(BgL_code1573z00_2748,
					BgL_vect1574z00_2749, (BgL_typez00_bglt) (BgL_type1575z00_2750)));
		}
	}



/* fill-vect! */
	BGL_EXPORTED_DEF BgL_vectz00_bglt
		BGl_fillzd2vectz12zc0zzjas_classfilez00(BgL_vectz00_bglt BgL_new1581z00_311,
		obj_t BgL_code1578z00_312, obj_t BgL_vect1579z00_313,
		BgL_typez00_bglt BgL_type1580z00_314)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{	/* Jas/classfile.scm 10 */
				obj_t BgL_code1578z00_3068;

				obj_t BgL_vect1579z00_3069;

				BgL_typez00_bglt BgL_type1580z00_3070;

				BgL_code1578z00_3068 = BgL_code1578z00_312;
				BgL_vect1579z00_3069 = BgL_vect1579z00_313;
				BgL_type1580z00_3070 = BgL_type1580z00_314;
				((((BgL_vectz00_bglt) CREF(BgL_new1581z00_311))->BgL_codez00) =
					((obj_t) BgL_code1578z00_3068), BUNSPEC);
				((((BgL_vectz00_bglt) CREF(BgL_new1581z00_311))->BgL_vectz00) =
					((obj_t) BgL_vect1579z00_3069), BUNSPEC);
				((((BgL_vectz00_bglt) CREF(BgL_new1581z00_311))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1580z00_3070), BUNSPEC);
				return BgL_new1581z00_311;
			}
		}
	}



/* _fill-vect! */
	obj_t BGl__fillzd2vectz12zc0zzjas_classfilez00(obj_t BgL_envz00_2751,
		obj_t BgL_new1581z00_2752, obj_t BgL_code1578z00_2753,
		obj_t BgL_vect1579z00_2754, obj_t BgL_type1580z00_2755)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{	/* Jas/classfile.scm 10 */
				BgL_vectz00_bglt BgL_auxz00_4343;

				{	/* Jas/classfile.scm 10 */
					BgL_vectz00_bglt BgL_res3103z00_3078;

					{	/* Jas/classfile.scm 10 */
						BgL_vectz00_bglt BgL_new1581z00_3071;

						obj_t BgL_code1578z00_3072;

						BgL_typez00_bglt BgL_type1580z00_3074;

						BgL_new1581z00_3071 = (BgL_vectz00_bglt) (BgL_new1581z00_2752);
						BgL_code1578z00_3072 = BgL_code1578z00_2753;
						BgL_type1580z00_3074 = (BgL_typez00_bglt) (BgL_type1580z00_2755);
						{	/* Jas/classfile.scm 10 */
							obj_t BgL_code1578z00_3075;

							obj_t BgL_vect1579z00_3076;

							BgL_typez00_bglt BgL_type1580z00_3077;

							BgL_code1578z00_3075 = BgL_code1578z00_3072;
							BgL_vect1579z00_3076 = BgL_vect1579z00_2754;
							BgL_type1580z00_3077 = BgL_type1580z00_3074;
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_3071))->BgL_codez00) =
								((obj_t) BgL_code1578z00_3075), BUNSPEC);
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_3071))->BgL_vectz00) =
								((obj_t) BgL_vect1579z00_3076), BUNSPEC);
							((((BgL_vectz00_bglt) CREF(BgL_new1581z00_3071))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1580z00_3077), BUNSPEC);
							BgL_res3103z00_3078 = BgL_new1581z00_3071;
						}
					}
					BgL_auxz00_4343 = BgL_res3103z00_3078;
				}
				return (obj_t) (BgL_auxz00_4343);
			}
		}
	}



/* %allocate-vect */
	BGL_EXPORTED_DEF BgL_vectz00_bglt
		BGl_z52allocatezd2vectz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{	/* Jas/classfile.scm 10 */
				BgL_vectz00_bglt BgL_new1586z00_3079;

				BgL_new1586z00_3079 =
					((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_vectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1586z00_3079),
					BGl_classzd2numzd2zz__objectz00(BGl_vectz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 10 */
					BgL_objectz00_bglt BgL_auxz00_4354;

					BgL_auxz00_4354 = (BgL_objectz00_bglt) (BgL_new1586z00_3079);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4354, BFALSE);
				}
				return BgL_new1586z00_3079;
			}
		}
	}



/* _%allocate-vect */
	obj_t BGl__z52allocatezd2vectz80zzjas_classfilez00(obj_t BgL_envz00_2590)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{	/* Jas/classfile.scm 10 */
				BgL_vectz00_bglt BgL_auxz00_4357;

				{	/* Jas/classfile.scm 10 */
					BgL_vectz00_bglt BgL_res3104z00_3083;

					{	/* Jas/classfile.scm 10 */
						BgL_vectz00_bglt BgL_new1586z00_3081;

						BgL_new1586z00_3081 =
							((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1586z00_3081),
							BGl_classzd2numzd2zz__objectz00(BGl_vectz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 10 */
							BgL_objectz00_bglt BgL_auxz00_4362;

							BgL_auxz00_4362 = (BgL_objectz00_bglt) (BgL_new1586z00_3081);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4362, BFALSE);
						}
						BgL_res3104z00_3083 = BgL_new1586z00_3081;
					}
					BgL_auxz00_4357 = BgL_res3104z00_3083;
				}
				return (obj_t) (BgL_auxz00_4357);
			}
		}
	}



/* vect-nil */
	BGL_EXPORTED_DEF BgL_vectz00_bglt BGl_vectzd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			if ((BGl_z52thezd2vectzd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 10 */
					{	/* Jas/classfile.scm 10 */
						BgL_vectz00_bglt BgL_res3028z00_2006;

						{	/* Jas/classfile.scm 10 */
							BgL_vectz00_bglt BgL_new1586z00_2002;

							BgL_new1586z00_2002 =
								((BgL_vectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1586z00_2002),
								BGl_classzd2numzd2zz__objectz00(BGl_vectz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 10 */
								BgL_objectz00_bglt BgL_auxz00_4372;

								BgL_auxz00_4372 = (BgL_objectz00_bglt) (BgL_new1586z00_2002);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4372, BFALSE);
							}
							BgL_res3028z00_2006 = BgL_new1586z00_2002;
						}
						BGl_z52thezd2vectzd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3028z00_2006);
					}
					{	/* Jas/classfile.scm 10 */
						BgL_typez00_bglt BgL_arg2787z00_817;

						BgL_arg2787z00_817 = BGl_typezd2nilzd2zzjas_classfilez00();
						{	/* Jas/classfile.scm 10 */
							BgL_vectz00_bglt BgL_res3029z00_2014;

							{	/* Jas/classfile.scm 10 */
								BgL_vectz00_bglt BgL_new1581z00_2007;

								BgL_new1581z00_2007 =
									(BgL_vectz00_bglt)
									(BGl_z52thezd2vectzd2nilz52zzjas_classfilez00);
								{	/* Jas/classfile.scm 10 */
									obj_t BgL_code1578z00_2011;

									obj_t BgL_vect1579z00_2012;

									BgL_typez00_bglt BgL_type1580z00_2013;

									BgL_code1578z00_2011 = BGl_string3062z00zzjas_classfilez00;
									BgL_vect1579z00_2012 = BUNSPEC;
									BgL_type1580z00_2013 = BgL_arg2787z00_817;
									((((BgL_vectz00_bglt) CREF(BgL_new1581z00_2007))->
											BgL_codez00) = ((obj_t) BgL_code1578z00_2011), BUNSPEC);
									((((BgL_vectz00_bglt) CREF(BgL_new1581z00_2007))->
											BgL_vectz00) = ((obj_t) BgL_vect1579z00_2012), BUNSPEC);
									((((BgL_vectz00_bglt) CREF(BgL_new1581z00_2007))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1580z00_2013), BUNSPEC);
									BgL_res3029z00_2014 = BgL_new1581z00_2007;
							}}
							(obj_t) (BgL_res3029z00_2014);
				}}}
			else
				{	/* Jas/classfile.scm 10 */
					BFALSE;
				}
			return (BgL_vectz00_bglt) (BGl_z52thezd2vectzd2nilz52zzjas_classfilez00);
		}
	}



/* _vect-nil */
	obj_t BGl__vectzd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2591)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			return (obj_t) (BGl_vectzd2nilzd2zzjas_classfilez00());
		}
	}



/* basic? */
	BGL_EXPORTED_DEF bool_t BGl_basiczf3zf3zzjas_classfilez00(obj_t
		BgL_obj1563z00_318)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1563z00_318,
				BGl_basicz00zzjas_classfilez00);
		}
	}



/* _basic? */
	obj_t BGl__basiczf3zf3zzjas_classfilez00(obj_t BgL_envz00_2588,
		obj_t BgL_obj1563z00_2589)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1563z00_2589,
					BGl_basicz00zzjas_classfilez00));
		}
	}



/* make-basic */
	BGL_EXPORTED_DEF BgL_basicz00_bglt BGl_makezd2basiczd2zzjas_classfilez00(obj_t
		BgL_code1542z00_322, obj_t BgL_vect1543z00_323)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{	/* Jas/classfile.scm 8 */
				BgL_basicz00_bglt BgL_new1544z00_2015;

				{	/* Jas/classfile.scm 8 */
					BgL_basicz00_bglt BgL_res3030z00_2020;

					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_new1552z00_2016;

						BgL_new1552z00_2016 =
							((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_basicz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1552z00_2016),
							BGl_classzd2numzd2zz__objectz00(BGl_basicz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 8 */
							BgL_objectz00_bglt BgL_auxz00_4392;

							BgL_auxz00_4392 = (BgL_objectz00_bglt) (BgL_new1552z00_2016);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4392, BFALSE);
						}
						BgL_res3030z00_2020 = BgL_new1552z00_2016;
					}
					BgL_new1544z00_2015 = BgL_res3030z00_2020;
				}
				{	/* Jas/classfile.scm 8 */
					BgL_basicz00_bglt BgL_res3031z00_2026;

					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_new1548z00_2021;

						BgL_new1548z00_2021 = BgL_new1544z00_2015;
						{	/* Jas/classfile.scm 8 */
							obj_t BgL_code1546z00_2024;

							obj_t BgL_vect1547z00_2025;

							BgL_code1546z00_2024 = BgL_code1542z00_322;
							BgL_vect1547z00_2025 = BgL_vect1543z00_323;
							((((BgL_basicz00_bglt) CREF(BgL_new1548z00_2021))->BgL_codez00) =
								((obj_t) BgL_code1546z00_2024), BUNSPEC);
							((((BgL_basicz00_bglt) CREF(BgL_new1548z00_2021))->BgL_vectz00) =
								((obj_t) BgL_vect1547z00_2025), BUNSPEC);
							BgL_res3031z00_2026 = BgL_new1548z00_2021;
					}} BgL_res3031z00_2026;
				}
				return BgL_new1544z00_2015;
			}
		}
	}



/* _make-basic */
	obj_t BGl__makezd2basiczd2zzjas_classfilez00(obj_t BgL_envz00_2756,
		obj_t BgL_code1542z00_2757, obj_t BgL_vect1543z00_2758)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			return
				(obj_t) (BGl_makezd2basiczd2zzjas_classfilez00(BgL_code1542z00_2757,
					BgL_vect1543z00_2758));
		}
	}



/* fill-basic! */
	BGL_EXPORTED_DEF BgL_basicz00_bglt
		BGl_fillzd2basicz12zc0zzjas_classfilez00(BgL_basicz00_bglt
		BgL_new1548z00_324, obj_t BgL_code1546z00_325, obj_t BgL_vect1547z00_326)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{	/* Jas/classfile.scm 8 */
				obj_t BgL_code1546z00_3085;

				obj_t BgL_vect1547z00_3086;

				BgL_code1546z00_3085 = BgL_code1546z00_325;
				BgL_vect1547z00_3086 = BgL_vect1547z00_326;
				((((BgL_basicz00_bglt) CREF(BgL_new1548z00_324))->BgL_codez00) =
					((obj_t) BgL_code1546z00_3085), BUNSPEC);
				((((BgL_basicz00_bglt) CREF(BgL_new1548z00_324))->BgL_vectz00) =
					((obj_t) BgL_vect1547z00_3086), BUNSPEC);
				return BgL_new1548z00_324;
			}
		}
	}



/* _fill-basic! */
	obj_t BGl__fillzd2basicz12zc0zzjas_classfilez00(obj_t BgL_envz00_2759,
		obj_t BgL_new1548z00_2760, obj_t BgL_code1546z00_2761,
		obj_t BgL_vect1547z00_2762)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{	/* Jas/classfile.scm 8 */
				BgL_basicz00_bglt BgL_auxz00_4401;

				{	/* Jas/classfile.scm 8 */
					BgL_basicz00_bglt BgL_res3105z00_3092;

					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_new1548z00_3087;

						obj_t BgL_code1546z00_3088;

						BgL_new1548z00_3087 = (BgL_basicz00_bglt) (BgL_new1548z00_2760);
						BgL_code1546z00_3088 = BgL_code1546z00_2761;
						{	/* Jas/classfile.scm 8 */
							obj_t BgL_code1546z00_3090;

							obj_t BgL_vect1547z00_3091;

							BgL_code1546z00_3090 = BgL_code1546z00_3088;
							BgL_vect1547z00_3091 = BgL_vect1547z00_2762;
							((((BgL_basicz00_bglt) CREF(BgL_new1548z00_3087))->BgL_codez00) =
								((obj_t) BgL_code1546z00_3090), BUNSPEC);
							((((BgL_basicz00_bglt) CREF(BgL_new1548z00_3087))->BgL_vectz00) =
								((obj_t) BgL_vect1547z00_3091), BUNSPEC);
							BgL_res3105z00_3092 = BgL_new1548z00_3087;
						}
					}
					BgL_auxz00_4401 = BgL_res3105z00_3092;
				}
				return (obj_t) (BgL_auxz00_4401);
			}
		}
	}



/* %allocate-basic */
	BGL_EXPORTED_DEF BgL_basicz00_bglt
		BGl_z52allocatezd2basicz80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{	/* Jas/classfile.scm 8 */
				BgL_basicz00_bglt BgL_new1552z00_3093;

				BgL_new1552z00_3093 =
					((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_basicz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1552z00_3093),
					BGl_classzd2numzd2zz__objectz00(BGl_basicz00zzjas_classfilez00));
				{	/* Jas/classfile.scm 8 */
					BgL_objectz00_bglt BgL_auxz00_4410;

					BgL_auxz00_4410 = (BgL_objectz00_bglt) (BgL_new1552z00_3093);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4410, BFALSE);
				}
				return BgL_new1552z00_3093;
			}
		}
	}



/* _%allocate-basic */
	obj_t BGl__z52allocatezd2basicz80zzjas_classfilez00(obj_t BgL_envz00_2586)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{	/* Jas/classfile.scm 8 */
				BgL_basicz00_bglt BgL_auxz00_4413;

				{	/* Jas/classfile.scm 8 */
					BgL_basicz00_bglt BgL_res3106z00_3097;

					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_new1552z00_3095;

						BgL_new1552z00_3095 =
							((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_basicz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1552z00_3095),
							BGl_classzd2numzd2zz__objectz00(BGl_basicz00zzjas_classfilez00));
						{	/* Jas/classfile.scm 8 */
							BgL_objectz00_bglt BgL_auxz00_4418;

							BgL_auxz00_4418 = (BgL_objectz00_bglt) (BgL_new1552z00_3095);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4418, BFALSE);
						}
						BgL_res3106z00_3097 = BgL_new1552z00_3095;
					}
					BgL_auxz00_4413 = BgL_res3106z00_3097;
				}
				return (obj_t) (BgL_auxz00_4413);
			}
		}
	}



/* basic-nil */
	BGL_EXPORTED_DEF BgL_basicz00_bglt BGl_basiczd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			if ((BGl_z52thezd2basiczd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 8 */
					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_res3032z00_2037;

						{	/* Jas/classfile.scm 8 */
							BgL_basicz00_bglt BgL_new1552z00_2033;

							BgL_new1552z00_2033 =
								((BgL_basicz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_basicz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1552z00_2033),
								BGl_classzd2numzd2zz__objectz00
								(BGl_basicz00zzjas_classfilez00));
							{	/* Jas/classfile.scm 8 */
								BgL_objectz00_bglt BgL_auxz00_4428;

								BgL_auxz00_4428 = (BgL_objectz00_bglt) (BgL_new1552z00_2033);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4428, BFALSE);
							}
							BgL_res3032z00_2037 = BgL_new1552z00_2033;
						}
						BGl_z52thezd2basiczd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3032z00_2037);
					}
					{	/* Jas/classfile.scm 8 */
						BgL_basicz00_bglt BgL_res3033z00_2043;

						{	/* Jas/classfile.scm 8 */
							BgL_basicz00_bglt BgL_new1548z00_2038;

							BgL_new1548z00_2038 =
								(BgL_basicz00_bglt)
								(BGl_z52thezd2basiczd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 8 */
								obj_t BgL_code1546z00_2041;

								obj_t BgL_vect1547z00_2042;

								BgL_code1546z00_2041 = BGl_string3062z00zzjas_classfilez00;
								BgL_vect1547z00_2042 = BUNSPEC;
								((((BgL_basicz00_bglt) CREF(BgL_new1548z00_2038))->
										BgL_codez00) = ((obj_t) BgL_code1546z00_2041), BUNSPEC);
								((((BgL_basicz00_bglt) CREF(BgL_new1548z00_2038))->
										BgL_vectz00) = ((obj_t) BgL_vect1547z00_2042), BUNSPEC);
								BgL_res3033z00_2043 = BgL_new1548z00_2038;
						}}
						(obj_t) (BgL_res3033z00_2043);
				}}
			else
				{	/* Jas/classfile.scm 8 */
					BFALSE;
				}
			return
				(BgL_basicz00_bglt) (BGl_z52thezd2basiczd2nilz52zzjas_classfilez00);
		}
	}



/* _basic-nil */
	obj_t BGl__basiczd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2587)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			return (obj_t) (BGl_basiczd2nilzd2zzjas_classfilez00());
		}
	}



/* type? */
	BGL_EXPORTED_DEF bool_t BGl_typezf3zf3zzjas_classfilez00(obj_t
		BgL_obj1535z00_327)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1535z00_327,
				BGl_typez00zzjas_classfilez00);
		}
	}



/* _type? */
	obj_t BGl__typezf3zf3zzjas_classfilez00(obj_t BgL_envz00_2584,
		obj_t BgL_obj1535z00_2585)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1535z00_2585,
					BGl_typez00zzjas_classfilez00));
		}
	}



/* make-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2typezd2zzjas_classfilez00(obj_t
		BgL_code1514z00_331, obj_t BgL_vect1515z00_332)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{	/* Jas/classfile.scm 4 */
				BgL_typez00_bglt BgL_new1516z00_2044;

				{	/* Jas/classfile.scm 4 */
					BgL_typez00_bglt BgL_res3034z00_2049;

					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_new1524z00_2045;

						BgL_new1524z00_2045 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1524z00_2045),
							BGl_classzd2numzd2zz__objectz00(BGl_typez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 4 */
							BgL_objectz00_bglt BgL_auxz00_4446;

							BgL_auxz00_4446 = (BgL_objectz00_bglt) (BgL_new1524z00_2045);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4446, BFALSE);
						}
						BgL_res3034z00_2049 = BgL_new1524z00_2045;
					}
					BgL_new1516z00_2044 = BgL_res3034z00_2049;
				}
				{	/* Jas/classfile.scm 4 */
					BgL_typez00_bglt BgL_res3035z00_2055;

					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_new1520z00_2050;

						BgL_new1520z00_2050 = BgL_new1516z00_2044;
						{	/* Jas/classfile.scm 4 */
							obj_t BgL_code1518z00_2053;

							obj_t BgL_vect1519z00_2054;

							BgL_code1518z00_2053 = BgL_code1514z00_331;
							BgL_vect1519z00_2054 = BgL_vect1515z00_332;
							((((BgL_typez00_bglt) CREF(BgL_new1520z00_2050))->BgL_codez00) =
								((obj_t) BgL_code1518z00_2053), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1520z00_2050))->BgL_vectz00) =
								((obj_t) BgL_vect1519z00_2054), BUNSPEC);
							BgL_res3035z00_2055 = BgL_new1520z00_2050;
					}} BgL_res3035z00_2055;
				}
				return BgL_new1516z00_2044;
			}
		}
	}



/* _make-type */
	obj_t BGl__makezd2typezd2zzjas_classfilez00(obj_t BgL_envz00_2763,
		obj_t BgL_code1514z00_2764, obj_t BgL_vect1515z00_2765)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			return
				(obj_t) (BGl_makezd2typezd2zzjas_classfilez00(BgL_code1514z00_2764,
					BgL_vect1515z00_2765));
		}
	}



/* fill-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_fillzd2typez12zc0zzjas_classfilez00(BgL_typez00_bglt BgL_new1520z00_333,
		obj_t BgL_code1518z00_334, obj_t BgL_vect1519z00_335)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{	/* Jas/classfile.scm 4 */
				obj_t BgL_code1518z00_3099;

				obj_t BgL_vect1519z00_3100;

				BgL_code1518z00_3099 = BgL_code1518z00_334;
				BgL_vect1519z00_3100 = BgL_vect1519z00_335;
				((((BgL_typez00_bglt) CREF(BgL_new1520z00_333))->BgL_codez00) =
					((obj_t) BgL_code1518z00_3099), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1520z00_333))->BgL_vectz00) =
					((obj_t) BgL_vect1519z00_3100), BUNSPEC);
				return BgL_new1520z00_333;
			}
		}
	}



/* _fill-type! */
	obj_t BGl__fillzd2typez12zc0zzjas_classfilez00(obj_t BgL_envz00_2766,
		obj_t BgL_new1520z00_2767, obj_t BgL_code1518z00_2768,
		obj_t BgL_vect1519z00_2769)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{	/* Jas/classfile.scm 4 */
				BgL_typez00_bglt BgL_auxz00_4455;

				{	/* Jas/classfile.scm 4 */
					BgL_typez00_bglt BgL_res3107z00_3106;

					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_new1520z00_3101;

						obj_t BgL_code1518z00_3102;

						BgL_new1520z00_3101 = (BgL_typez00_bglt) (BgL_new1520z00_2767);
						BgL_code1518z00_3102 = BgL_code1518z00_2768;
						{	/* Jas/classfile.scm 4 */
							obj_t BgL_code1518z00_3104;

							obj_t BgL_vect1519z00_3105;

							BgL_code1518z00_3104 = BgL_code1518z00_3102;
							BgL_vect1519z00_3105 = BgL_vect1519z00_2769;
							((((BgL_typez00_bglt) CREF(BgL_new1520z00_3101))->BgL_codez00) =
								((obj_t) BgL_code1518z00_3104), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1520z00_3101))->BgL_vectz00) =
								((obj_t) BgL_vect1519z00_3105), BUNSPEC);
							BgL_res3107z00_3106 = BgL_new1520z00_3101;
						}
					}
					BgL_auxz00_4455 = BgL_res3107z00_3106;
				}
				return (obj_t) (BgL_auxz00_4455);
			}
		}
	}



/* %allocate-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2typez80zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{	/* Jas/classfile.scm 4 */
				BgL_typez00_bglt BgL_new1524z00_3107;

				BgL_new1524z00_3107 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1524z00_3107),
					BGl_classzd2numzd2zz__objectz00(BGl_typez00zzjas_classfilez00));
				{	/* Jas/classfile.scm 4 */
					BgL_objectz00_bglt BgL_auxz00_4464;

					BgL_auxz00_4464 = (BgL_objectz00_bglt) (BgL_new1524z00_3107);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4464, BFALSE);
				}
				return BgL_new1524z00_3107;
			}
		}
	}



/* _%allocate-type */
	obj_t BGl__z52allocatezd2typez80zzjas_classfilez00(obj_t BgL_envz00_2582)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{	/* Jas/classfile.scm 4 */
				BgL_typez00_bglt BgL_auxz00_4467;

				{	/* Jas/classfile.scm 4 */
					BgL_typez00_bglt BgL_res3108z00_3111;

					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_new1524z00_3109;

						BgL_new1524z00_3109 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1524z00_3109),
							BGl_classzd2numzd2zz__objectz00(BGl_typez00zzjas_classfilez00));
						{	/* Jas/classfile.scm 4 */
							BgL_objectz00_bglt BgL_auxz00_4472;

							BgL_auxz00_4472 = (BgL_objectz00_bglt) (BgL_new1524z00_3109);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4472, BFALSE);
						}
						BgL_res3108z00_3111 = BgL_new1524z00_3109;
					}
					BgL_auxz00_4467 = BgL_res3108z00_3111;
				}
				return (obj_t) (BgL_auxz00_4467);
			}
		}
	}



/* type-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_typezd2nilzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			if ((BGl_z52thezd2typezd2nilz52zzjas_classfilez00 == BUNSPEC))
				{	/* Jas/classfile.scm 4 */
					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_res3036z00_2066;

						{	/* Jas/classfile.scm 4 */
							BgL_typez00_bglt BgL_new1524z00_2062;

							BgL_new1524z00_2062 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1524z00_2062),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zzjas_classfilez00));
							{	/* Jas/classfile.scm 4 */
								BgL_objectz00_bglt BgL_auxz00_4482;

								BgL_auxz00_4482 = (BgL_objectz00_bglt) (BgL_new1524z00_2062);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4482, BFALSE);
							}
							BgL_res3036z00_2066 = BgL_new1524z00_2062;
						}
						BGl_z52thezd2typezd2nilz52zzjas_classfilez00 =
							(obj_t) (BgL_res3036z00_2066);
					}
					{	/* Jas/classfile.scm 4 */
						BgL_typez00_bglt BgL_res3037z00_2072;

						{	/* Jas/classfile.scm 4 */
							BgL_typez00_bglt BgL_new1520z00_2067;

							BgL_new1520z00_2067 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2typezd2nilz52zzjas_classfilez00);
							{	/* Jas/classfile.scm 4 */
								obj_t BgL_code1518z00_2070;

								obj_t BgL_vect1519z00_2071;

								BgL_code1518z00_2070 = BGl_string3062z00zzjas_classfilez00;
								BgL_vect1519z00_2071 = BUNSPEC;
								((((BgL_typez00_bglt) CREF(BgL_new1520z00_2067))->BgL_codez00) =
									((obj_t) BgL_code1518z00_2070), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1520z00_2067))->BgL_vectz00) =
									((obj_t) BgL_vect1519z00_2071), BUNSPEC);
								BgL_res3037z00_2072 = BgL_new1520z00_2067;
						}}
						(obj_t) (BgL_res3037z00_2072);
				}}
			else
				{	/* Jas/classfile.scm 4 */
					BFALSE;
				}
			return (BgL_typez00_bglt) (BGl_z52thezd2typezd2nilz52zzjas_classfilez00);
		}
	}



/* _type-nil */
	obj_t BGl__typezd2nilzd2zzjas_classfilez00(obj_t BgL_envz00_2583)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			return (obj_t) (BGl_typezd2nilzd2zzjas_classfilez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_classfilez00zzjas_classfilez00, BGl_proc3063z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_classfilez00zzjas_classfilez00, BGl_proc3065z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_attributez00zzjas_classfilez00, BGl_proc3067z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_attributez00zzjas_classfilez00, BGl_proc3068z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_methodz00zzjas_classfilez00, BGl_proc3069z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_methodz00zzjas_classfilez00, BGl_proc3070z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_fieldz00zzjas_classfilez00, BGl_proc3071z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_fieldz00zzjas_classfilez00, BGl_proc3072z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00,
				BGl_proc3073z00zzjas_classfilez00, BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00,
				BGl_proc3074z00zzjas_classfilez00, BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_classez00zzjas_classfilez00, BGl_proc3075z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_classez00zzjas_classfilez00, BGl_proc3076z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_funz00zzjas_classfilez00, BGl_proc3077z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_funz00zzjas_classfilez00, BGl_proc3078z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vectz00zzjas_classfilez00, BGl_proc3079z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vectz00zzjas_classfilez00, BGl_proc3080z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_basicz00zzjas_classfilez00, BGl_proc3081z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_basicz00zzjas_classfilez00, BGl_proc3082z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_typez00zzjas_classfilez00, BGl_proc3083z00zzjas_classfilez00,
				BGl_string3064z00zzjas_classfilez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_typez00zzjas_classfilez00, BGl_proc3084z00zzjas_classfilez00,
				BGl_string3066z00zzjas_classfilez00);
		}
	}



/* struct+object->objec2281 */
	obj_t BGl_structzb2objectzd2ze3objec2281z83zzjas_classfilez00(obj_t
		BgL_envz00_2790, obj_t BgL_oz00_2791, obj_t BgL_sz00_2792)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{
				BgL_typez00_bglt BgL_oz00_1128;

				obj_t BgL_sz00_1129;

				{	/* Jas/classfile.scm 4 */
					BgL_typez00_bglt BgL_auxz00_4513;

					BgL_oz00_1128 = (BgL_typez00_bglt) (BgL_oz00_2791);
					BgL_sz00_1129 = BgL_sz00_2792;
					{	/* Jas/classfile.scm 4 */
						obj_t BgL_arg2946z00_1132;

						BgL_arg2946z00_1132 = STRUCT_REF(BgL_sz00_1129, (int) (((long) 0)));
						{	/* Jas/classfile.scm 4 */
							BgL_objectz00_bglt BgL_auxz00_4516;

							BgL_auxz00_4516 = (BgL_objectz00_bglt) (BgL_oz00_1128);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4516, BgL_arg2946z00_1132);
					}}
					{
						obj_t BgL_auxz00_4519;

						BgL_auxz00_4519 = STRUCT_REF(BgL_sz00_1129, (int) (((long) 1)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_1128))->BgL_codez00) =
							((obj_t) BgL_auxz00_4519), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4523;

						BgL_auxz00_4523 = STRUCT_REF(BgL_sz00_1129, (int) (((long) 2)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_1128))->BgL_vectz00) =
							((obj_t) BgL_auxz00_4523), BUNSPEC);
					}
					BgL_auxz00_4513 = BgL_oz00_1128;
					return (obj_t) (BgL_auxz00_4513);
				}
			}
		}
	}



/* object->struct-type2279 */
	obj_t BGl_objectzd2ze3structzd2type2279ze3zzjas_classfilez00(obj_t
		BgL_envz00_2793, obj_t BgL_obj1525z00_2794)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 4 */
			{
				BgL_typez00_bglt BgL_obj1525z00_1118;

				BgL_obj1525z00_1118 = (BgL_typez00_bglt) (BgL_obj1525z00_2794);
				{	/* Jas/classfile.scm 4 */
					obj_t BgL_res1526z00_1121;

					{	/* Jas/classfile.scm 4 */
						obj_t BgL_keyz00_2487;

						BgL_keyz00_2487 = CNST_TABLE_REF(((long) 14));
						BgL_res1526z00_1121 =
							make_struct(BgL_keyz00_2487, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 4 */
						int BgL_auxz00_4532;

						BgL_auxz00_4532 = (int) (((long) 0));
						STRUCT_SET(BgL_res1526z00_1121, BgL_auxz00_4532, BFALSE);
					}
					{	/* Jas/classfile.scm 4 */
						obj_t BgL_arg2942z00_1123;

						BgL_arg2942z00_1123 =
							(((BgL_typez00_bglt) CREF(BgL_obj1525z00_1118))->BgL_codez00);
						{	/* Jas/classfile.scm 4 */
							int BgL_auxz00_4536;

							BgL_auxz00_4536 = (int) (((long) 1));
							STRUCT_SET(BgL_res1526z00_1121, BgL_auxz00_4536,
								BgL_arg2942z00_1123);
					}}
					{	/* Jas/classfile.scm 4 */
						obj_t BgL_arg2944z00_1125;

						BgL_arg2944z00_1125 =
							(((BgL_typez00_bglt) CREF(BgL_obj1525z00_1118))->BgL_vectz00);
						{	/* Jas/classfile.scm 4 */
							int BgL_auxz00_4540;

							BgL_auxz00_4540 = (int) (((long) 2));
							STRUCT_SET(BgL_res1526z00_1121, BgL_auxz00_4540,
								BgL_arg2944z00_1125);
					}}
					return BgL_res1526z00_1121;
				}
			}
		}
	}



/* struct+object->objec2277 */
	obj_t BGl_structzb2objectzd2ze3objec2277z83zzjas_classfilez00(obj_t
		BgL_envz00_2795, obj_t BgL_oz00_2796, obj_t BgL_sz00_2797)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{
				BgL_basicz00_bglt BgL_oz00_1109;

				obj_t BgL_sz00_1110;

				{	/* Jas/classfile.scm 8 */
					BgL_basicz00_bglt BgL_auxz00_4544;

					BgL_oz00_1109 = (BgL_basicz00_bglt) (BgL_oz00_2796);
					BgL_sz00_1110 = BgL_sz00_2797;
					{	/* Jas/classfile.scm 8 */
						obj_t BgL_arg2938z00_1113;

						BgL_arg2938z00_1113 = STRUCT_REF(BgL_sz00_1110, (int) (((long) 0)));
						{	/* Jas/classfile.scm 8 */
							BgL_objectz00_bglt BgL_auxz00_4547;

							BgL_auxz00_4547 = (BgL_objectz00_bglt) (BgL_oz00_1109);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4547, BgL_arg2938z00_1113);
					}}
					{
						obj_t BgL_auxz00_4550;

						BgL_auxz00_4550 = STRUCT_REF(BgL_sz00_1110, (int) (((long) 1)));
						((((BgL_basicz00_bglt) CREF(BgL_oz00_1109))->BgL_codez00) =
							((obj_t) BgL_auxz00_4550), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4554;

						BgL_auxz00_4554 = STRUCT_REF(BgL_sz00_1110, (int) (((long) 2)));
						((((BgL_basicz00_bglt) CREF(BgL_oz00_1109))->BgL_vectz00) =
							((obj_t) BgL_auxz00_4554), BUNSPEC);
					}
					BgL_auxz00_4544 = BgL_oz00_1109;
					return (obj_t) (BgL_auxz00_4544);
				}
			}
		}
	}



/* object->struct-basic2275 */
	obj_t BGl_objectzd2ze3structzd2basic2275ze3zzjas_classfilez00(obj_t
		BgL_envz00_2798, obj_t BgL_obj1553z00_2799)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 8 */
			{
				BgL_basicz00_bglt BgL_obj1553z00_1099;

				BgL_obj1553z00_1099 = (BgL_basicz00_bglt) (BgL_obj1553z00_2799);
				{	/* Jas/classfile.scm 8 */
					obj_t BgL_res1554z00_1102;

					{	/* Jas/classfile.scm 8 */
						obj_t BgL_keyz00_2467;

						BgL_keyz00_2467 = CNST_TABLE_REF(((long) 15));
						BgL_res1554z00_1102 =
							make_struct(BgL_keyz00_2467, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 8 */
						int BgL_auxz00_4563;

						BgL_auxz00_4563 = (int) (((long) 0));
						STRUCT_SET(BgL_res1554z00_1102, BgL_auxz00_4563, BFALSE);
					}
					{	/* Jas/classfile.scm 8 */
						obj_t BgL_arg2934z00_1104;

						{
							BgL_typez00_bglt BgL_auxz00_4566;

							BgL_auxz00_4566 = (BgL_typez00_bglt) (BgL_obj1553z00_1099);
							BgL_arg2934z00_1104 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4566))->BgL_codez00);
						}
						{	/* Jas/classfile.scm 8 */
							int BgL_auxz00_4569;

							BgL_auxz00_4569 = (int) (((long) 1));
							STRUCT_SET(BgL_res1554z00_1102, BgL_auxz00_4569,
								BgL_arg2934z00_1104);
					}}
					{	/* Jas/classfile.scm 8 */
						obj_t BgL_arg2936z00_1106;

						{
							BgL_typez00_bglt BgL_auxz00_4572;

							BgL_auxz00_4572 = (BgL_typez00_bglt) (BgL_obj1553z00_1099);
							BgL_arg2936z00_1106 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4572))->BgL_vectz00);
						}
						{	/* Jas/classfile.scm 8 */
							int BgL_auxz00_4575;

							BgL_auxz00_4575 = (int) (((long) 2));
							STRUCT_SET(BgL_res1554z00_1102, BgL_auxz00_4575,
								BgL_arg2936z00_1106);
					}}
					return BgL_res1554z00_1102;
				}
			}
		}
	}



/* struct+object->objec2273 */
	obj_t BGl_structzb2objectzd2ze3objec2273z83zzjas_classfilez00(obj_t
		BgL_envz00_2800, obj_t BgL_oz00_2801, obj_t BgL_sz00_2802)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{
				BgL_vectz00_bglt BgL_oz00_1089;

				obj_t BgL_sz00_1090;

				{	/* Jas/classfile.scm 10 */
					BgL_vectz00_bglt BgL_auxz00_4579;

					BgL_oz00_1089 = (BgL_vectz00_bglt) (BgL_oz00_2801);
					BgL_sz00_1090 = BgL_sz00_2802;
					{	/* Jas/classfile.scm 10 */
						obj_t BgL_arg2931z00_1093;

						BgL_arg2931z00_1093 = STRUCT_REF(BgL_sz00_1090, (int) (((long) 0)));
						{	/* Jas/classfile.scm 10 */
							BgL_objectz00_bglt BgL_auxz00_4582;

							BgL_auxz00_4582 = (BgL_objectz00_bglt) (BgL_oz00_1089);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4582, BgL_arg2931z00_1093);
					}}
					{
						obj_t BgL_auxz00_4585;

						BgL_auxz00_4585 = STRUCT_REF(BgL_sz00_1090, (int) (((long) 1)));
						((((BgL_vectz00_bglt) CREF(BgL_oz00_1089))->BgL_codez00) =
							((obj_t) BgL_auxz00_4585), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4589;

						BgL_auxz00_4589 = STRUCT_REF(BgL_sz00_1090, (int) (((long) 2)));
						((((BgL_vectz00_bglt) CREF(BgL_oz00_1089))->BgL_vectz00) =
							((obj_t) BgL_auxz00_4589), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_4593;

						BgL_auxz00_4593 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_1090,
								(int) (((long) 3))));
						((((BgL_vectz00_bglt) CREF(BgL_oz00_1089))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4593), BUNSPEC);
					}
					BgL_auxz00_4579 = BgL_oz00_1089;
					return (obj_t) (BgL_auxz00_4579);
				}
			}
		}
	}



/* object->struct-vect2271 */
	obj_t BGl_objectzd2ze3structzd2vect2271ze3zzjas_classfilez00(obj_t
		BgL_envz00_2803, obj_t BgL_obj1587z00_2804)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 10 */
			{
				BgL_vectz00_bglt BgL_obj1587z00_1077;

				BgL_obj1587z00_1077 = (BgL_vectz00_bglt) (BgL_obj1587z00_2804);
				{	/* Jas/classfile.scm 10 */
					obj_t BgL_res1588z00_1080;

					{	/* Jas/classfile.scm 10 */
						obj_t BgL_keyz00_2441;

						BgL_keyz00_2441 = CNST_TABLE_REF(((long) 16));
						BgL_res1588z00_1080 =
							make_struct(BgL_keyz00_2441, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 10 */
						int BgL_auxz00_4603;

						BgL_auxz00_4603 = (int) (((long) 0));
						STRUCT_SET(BgL_res1588z00_1080, BgL_auxz00_4603, BFALSE);
					}
					{	/* Jas/classfile.scm 10 */
						obj_t BgL_arg2925z00_1082;

						{
							BgL_typez00_bglt BgL_auxz00_4606;

							BgL_auxz00_4606 = (BgL_typez00_bglt) (BgL_obj1587z00_1077);
							BgL_arg2925z00_1082 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4606))->BgL_codez00);
						}
						{	/* Jas/classfile.scm 10 */
							int BgL_auxz00_4609;

							BgL_auxz00_4609 = (int) (((long) 1));
							STRUCT_SET(BgL_res1588z00_1080, BgL_auxz00_4609,
								BgL_arg2925z00_1082);
					}}
					{	/* Jas/classfile.scm 10 */
						obj_t BgL_arg2927z00_1084;

						{
							BgL_typez00_bglt BgL_auxz00_4612;

							BgL_auxz00_4612 = (BgL_typez00_bglt) (BgL_obj1587z00_1077);
							BgL_arg2927z00_1084 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4612))->BgL_vectz00);
						}
						{	/* Jas/classfile.scm 10 */
							int BgL_auxz00_4615;

							BgL_auxz00_4615 = (int) (((long) 2));
							STRUCT_SET(BgL_res1588z00_1080, BgL_auxz00_4615,
								BgL_arg2927z00_1084);
					}}
					{	/* Jas/classfile.scm 10 */
						BgL_typez00_bglt BgL_arg2929z00_1086;

						BgL_arg2929z00_1086 =
							(((BgL_vectz00_bglt) CREF(BgL_obj1587z00_1077))->BgL_typez00);
						{	/* Jas/classfile.scm 10 */
							obj_t BgL_auxz00_4621;

							int BgL_auxz00_4619;

							BgL_auxz00_4621 = (obj_t) (BgL_arg2929z00_1086);
							BgL_auxz00_4619 = (int) (((long) 3));
							STRUCT_SET(BgL_res1588z00_1080, BgL_auxz00_4619, BgL_auxz00_4621);
					}}
					return BgL_res1588z00_1080;
				}
			}
		}
	}



/* struct+object->objec2269 */
	obj_t BGl_structzb2objectzd2ze3objec2269z83zzjas_classfilez00(obj_t
		BgL_envz00_2805, obj_t BgL_oz00_2806, obj_t BgL_sz00_2807)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{
				BgL_funz00_bglt BgL_oz00_1066;

				obj_t BgL_sz00_1067;

				{	/* Jas/classfile.scm 12 */
					BgL_funz00_bglt BgL_auxz00_4625;

					BgL_oz00_1066 = (BgL_funz00_bglt) (BgL_oz00_2806);
					BgL_sz00_1067 = BgL_sz00_2807;
					{	/* Jas/classfile.scm 12 */
						obj_t BgL_arg2922z00_1070;

						BgL_arg2922z00_1070 = STRUCT_REF(BgL_sz00_1067, (int) (((long) 0)));
						{	/* Jas/classfile.scm 12 */
							BgL_objectz00_bglt BgL_auxz00_4628;

							BgL_auxz00_4628 = (BgL_objectz00_bglt) (BgL_oz00_1066);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4628, BgL_arg2922z00_1070);
					}}
					{
						obj_t BgL_auxz00_4631;

						BgL_auxz00_4631 = STRUCT_REF(BgL_sz00_1067, (int) (((long) 1)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_1066))->BgL_codez00) =
							((obj_t) BgL_auxz00_4631), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4635;

						BgL_auxz00_4635 = STRUCT_REF(BgL_sz00_1067, (int) (((long) 2)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_1066))->BgL_vectz00) =
							((obj_t) BgL_auxz00_4635), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_4639;

						BgL_auxz00_4639 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_1067,
								(int) (((long) 3))));
						((((BgL_funz00_bglt) CREF(BgL_oz00_1066))->BgL_tretz00) =
							((BgL_typez00_bglt) BgL_auxz00_4639), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4644;

						BgL_auxz00_4644 = STRUCT_REF(BgL_sz00_1067, (int) (((long) 4)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_1066))->BgL_targsz00) =
							((obj_t) BgL_auxz00_4644), BUNSPEC);
					}
					BgL_auxz00_4625 = BgL_oz00_1066;
					return (obj_t) (BgL_auxz00_4625);
				}
			}
		}
	}



/* object->struct-fun2267 */
	obj_t BGl_objectzd2ze3structzd2fun2267ze3zzjas_classfilez00(obj_t
		BgL_envz00_2808, obj_t BgL_obj1631z00_2809)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 12 */
			{
				BgL_funz00_bglt BgL_obj1631z00_1052;

				BgL_obj1631z00_1052 = (BgL_funz00_bglt) (BgL_obj1631z00_2809);
				{	/* Jas/classfile.scm 12 */
					obj_t BgL_res1632z00_1055;

					{	/* Jas/classfile.scm 12 */
						obj_t BgL_keyz00_2409;

						BgL_keyz00_2409 = CNST_TABLE_REF(((long) 17));
						BgL_res1632z00_1055 =
							make_struct(BgL_keyz00_2409, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 12 */
						int BgL_auxz00_4653;

						BgL_auxz00_4653 = (int) (((long) 0));
						STRUCT_SET(BgL_res1632z00_1055, BgL_auxz00_4653, BFALSE);
					}
					{	/* Jas/classfile.scm 12 */
						obj_t BgL_arg2914z00_1057;

						{
							BgL_typez00_bglt BgL_auxz00_4656;

							BgL_auxz00_4656 = (BgL_typez00_bglt) (BgL_obj1631z00_1052);
							BgL_arg2914z00_1057 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4656))->BgL_codez00);
						}
						{	/* Jas/classfile.scm 12 */
							int BgL_auxz00_4659;

							BgL_auxz00_4659 = (int) (((long) 1));
							STRUCT_SET(BgL_res1632z00_1055, BgL_auxz00_4659,
								BgL_arg2914z00_1057);
					}}
					{	/* Jas/classfile.scm 12 */
						obj_t BgL_arg2916z00_1059;

						{
							BgL_typez00_bglt BgL_auxz00_4662;

							BgL_auxz00_4662 = (BgL_typez00_bglt) (BgL_obj1631z00_1052);
							BgL_arg2916z00_1059 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4662))->BgL_vectz00);
						}
						{	/* Jas/classfile.scm 12 */
							int BgL_auxz00_4665;

							BgL_auxz00_4665 = (int) (((long) 2));
							STRUCT_SET(BgL_res1632z00_1055, BgL_auxz00_4665,
								BgL_arg2916z00_1059);
					}}
					{	/* Jas/classfile.scm 12 */
						BgL_typez00_bglt BgL_arg2918z00_1061;

						BgL_arg2918z00_1061 =
							(((BgL_funz00_bglt) CREF(BgL_obj1631z00_1052))->BgL_tretz00);
						{	/* Jas/classfile.scm 12 */
							obj_t BgL_auxz00_4671;

							int BgL_auxz00_4669;

							BgL_auxz00_4671 = (obj_t) (BgL_arg2918z00_1061);
							BgL_auxz00_4669 = (int) (((long) 3));
							STRUCT_SET(BgL_res1632z00_1055, BgL_auxz00_4669, BgL_auxz00_4671);
					}}
					{	/* Jas/classfile.scm 12 */
						obj_t BgL_arg2920z00_1063;

						BgL_arg2920z00_1063 =
							(((BgL_funz00_bglt) CREF(BgL_obj1631z00_1052))->BgL_targsz00);
						{	/* Jas/classfile.scm 12 */
							int BgL_auxz00_4675;

							BgL_auxz00_4675 = (int) (((long) 4));
							STRUCT_SET(BgL_res1632z00_1055, BgL_auxz00_4675,
								BgL_arg2920z00_1063);
					}}
					return BgL_res1632z00_1055;
				}
			}
		}
	}



/* struct+object->objec2265 */
	obj_t BGl_structzb2objectzd2ze3objec2265z83zzjas_classfilez00(obj_t
		BgL_envz00_2810, obj_t BgL_oz00_2811, obj_t BgL_sz00_2812)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{
				BgL_classez00_bglt BgL_oz00_1040;

				obj_t BgL_sz00_1041;

				{	/* Jas/classfile.scm 14 */
					BgL_classez00_bglt BgL_auxz00_4679;

					BgL_oz00_1040 = (BgL_classez00_bglt) (BgL_oz00_2811);
					BgL_sz00_1041 = BgL_sz00_2812;
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2911z00_1044;

						BgL_arg2911z00_1044 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 0)));
						{	/* Jas/classfile.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_4682;

							BgL_auxz00_4682 = (BgL_objectz00_bglt) (BgL_oz00_1040);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4682, BgL_arg2911z00_1044);
					}}
					{
						obj_t BgL_auxz00_4685;

						BgL_auxz00_4685 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 1)));
						((((BgL_classez00_bglt) CREF(BgL_oz00_1040))->BgL_codez00) =
							((obj_t) BgL_auxz00_4685), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4689;

						BgL_auxz00_4689 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 2)));
						((((BgL_classez00_bglt) CREF(BgL_oz00_1040))->BgL_vectz00) =
							((obj_t) BgL_auxz00_4689), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4693;

						BgL_auxz00_4693 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 3)));
						((((BgL_classez00_bglt) CREF(BgL_oz00_1040))->BgL_flagsz00) =
							((obj_t) BgL_auxz00_4693), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4697;

						BgL_auxz00_4697 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 4)));
						((((BgL_classez00_bglt) CREF(BgL_oz00_1040))->BgL_namez00) =
							((obj_t) BgL_auxz00_4697), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4701;

						BgL_auxz00_4701 = STRUCT_REF(BgL_sz00_1041, (int) (((long) 5)));
						((((BgL_classez00_bglt) CREF(BgL_oz00_1040))->BgL_poolz00) =
							((obj_t) BgL_auxz00_4701), BUNSPEC);
					}
					BgL_auxz00_4679 = BgL_oz00_1040;
					return (obj_t) (BgL_auxz00_4679);
				}
			}
		}
	}



/* object->struct-class2263 */
	obj_t BGl_objectzd2ze3structzd2class2263ze3zzjas_classfilez00(obj_t
		BgL_envz00_2813, obj_t BgL_obj1685z00_2814)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 14 */
			{
				BgL_classez00_bglt BgL_obj1685z00_1024;

				BgL_obj1685z00_1024 = (BgL_classez00_bglt) (BgL_obj1685z00_2814);
				{	/* Jas/classfile.scm 14 */
					obj_t BgL_res1686z00_1027;

					{	/* Jas/classfile.scm 14 */
						obj_t BgL_keyz00_2371;

						BgL_keyz00_2371 = CNST_TABLE_REF(((long) 18));
						BgL_res1686z00_1027 =
							make_struct(BgL_keyz00_2371, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 14 */
						int BgL_auxz00_4710;

						BgL_auxz00_4710 = (int) (((long) 0));
						STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4710, BFALSE);
					}
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2901z00_1029;

						{
							BgL_typez00_bglt BgL_auxz00_4713;

							BgL_auxz00_4713 = (BgL_typez00_bglt) (BgL_obj1685z00_1024);
							BgL_arg2901z00_1029 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4713))->BgL_codez00);
						}
						{	/* Jas/classfile.scm 14 */
							int BgL_auxz00_4716;

							BgL_auxz00_4716 = (int) (((long) 1));
							STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4716,
								BgL_arg2901z00_1029);
					}}
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2903z00_1031;

						{
							BgL_typez00_bglt BgL_auxz00_4719;

							BgL_auxz00_4719 = (BgL_typez00_bglt) (BgL_obj1685z00_1024);
							BgL_arg2903z00_1031 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_4719))->BgL_vectz00);
						}
						{	/* Jas/classfile.scm 14 */
							int BgL_auxz00_4722;

							BgL_auxz00_4722 = (int) (((long) 2));
							STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4722,
								BgL_arg2903z00_1031);
					}}
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2905z00_1033;

						BgL_arg2905z00_1033 =
							(((BgL_classez00_bglt) CREF(BgL_obj1685z00_1024))->BgL_flagsz00);
						{	/* Jas/classfile.scm 14 */
							int BgL_auxz00_4726;

							BgL_auxz00_4726 = (int) (((long) 3));
							STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4726,
								BgL_arg2905z00_1033);
					}}
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2907z00_1035;

						BgL_arg2907z00_1035 =
							(((BgL_classez00_bglt) CREF(BgL_obj1685z00_1024))->BgL_namez00);
						{	/* Jas/classfile.scm 14 */
							int BgL_auxz00_4730;

							BgL_auxz00_4730 = (int) (((long) 4));
							STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4730,
								BgL_arg2907z00_1035);
					}}
					{	/* Jas/classfile.scm 14 */
						obj_t BgL_arg2909z00_1037;

						BgL_arg2909z00_1037 =
							(((BgL_classez00_bglt) CREF(BgL_obj1685z00_1024))->BgL_poolz00);
						{	/* Jas/classfile.scm 14 */
							int BgL_auxz00_4734;

							BgL_auxz00_4734 = (int) (((long) 5));
							STRUCT_SET(BgL_res1686z00_1027, BgL_auxz00_4734,
								BgL_arg2909z00_1037);
					}}
					return BgL_res1686z00_1027;
				}
			}
		}
	}



/* struct+object->objec2261 */
	obj_t BGl_structzb2objectzd2ze3objec2261z83zzjas_classfilez00(obj_t
		BgL_envz00_2815, obj_t BgL_oz00_2816, obj_t BgL_sz00_2817)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{
				BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_1008;

				obj_t BgL_sz00_1009;

				{	/* Jas/classfile.scm 19 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4738;

					BgL_oz00_1008 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_oz00_2816);
					BgL_sz00_1009 = BgL_sz00_2817;
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2898z00_1012;

						BgL_arg2898z00_1012 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 0)));
						{	/* Jas/classfile.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_4741;

							BgL_auxz00_4741 = (BgL_objectz00_bglt) (BgL_oz00_1008);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4741, BgL_arg2898z00_1012);
					}}
					{
						obj_t BgL_auxz00_4744;

						BgL_auxz00_4744 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 1)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_flagsz00) = ((obj_t) BgL_auxz00_4744), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4748;

						BgL_auxz00_4748 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 2)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_namez00) = ((obj_t) BgL_auxz00_4748), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4752;

						BgL_auxz00_4752 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 3)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_ownerz00) = ((obj_t) BgL_auxz00_4752), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4756;

						BgL_auxz00_4756 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 4)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_usertypez00) = ((obj_t) BgL_auxz00_4756), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4760;

						BgL_auxz00_4760 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 5)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_typez00) = ((obj_t) BgL_auxz00_4760), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4764;

						BgL_auxz00_4764 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 6)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_pnamez00) = ((obj_t) BgL_auxz00_4764), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4768;

						BgL_auxz00_4768 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 7)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_descriptorz00) = ((obj_t) BgL_auxz00_4768), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4772;

						BgL_auxz00_4772 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 8)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_poolz00) = ((obj_t) BgL_auxz00_4772), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4776;

						BgL_auxz00_4776 = STRUCT_REF(BgL_sz00_1009, (int) (((long) 9)));
						((((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_oz00_1008))->
								BgL_attributesz00) = ((obj_t) BgL_auxz00_4776), BUNSPEC);
					}
					BgL_auxz00_4738 = BgL_oz00_1008;
					return (obj_t) (BgL_auxz00_4738);
				}
			}
		}
	}



/* object->struct-field2259 */
	obj_t BGl_objectzd2ze3structzd2field2259ze3zzjas_classfilez00(obj_t
		BgL_envz00_2818, obj_t BgL_obj1770z00_2819)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 19 */
			{
				BgL_fieldzd2orzd2methodz00_bglt BgL_obj1770z00_984;

				BgL_obj1770z00_984 =
					(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1770z00_2819);
				{	/* Jas/classfile.scm 19 */
					obj_t BgL_res1771z00_987;

					{	/* Jas/classfile.scm 19 */
						obj_t BgL_keyz00_2309;

						BgL_keyz00_2309 = CNST_TABLE_REF(((long) 19));
						BgL_res1771z00_987 =
							make_struct(BgL_keyz00_2309, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 19 */
						int BgL_auxz00_4785;

						BgL_auxz00_4785 = (int) (((long) 0));
						STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4785, BFALSE);
					}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2878z00_989;

						BgL_arg2878z00_989 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_flagsz00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4789;

							BgL_auxz00_4789 = (int) (((long) 1));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4789,
								BgL_arg2878z00_989);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2880z00_991;

						BgL_arg2880z00_991 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_namez00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4793;

							BgL_auxz00_4793 = (int) (((long) 2));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4793,
								BgL_arg2880z00_991);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2882z00_993;

						BgL_arg2882z00_993 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_ownerz00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4797;

							BgL_auxz00_4797 = (int) (((long) 3));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4797,
								BgL_arg2882z00_993);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2884z00_995;

						BgL_arg2884z00_995 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_usertypez00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4801;

							BgL_auxz00_4801 = (int) (((long) 4));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4801,
								BgL_arg2884z00_995);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2886z00_997;

						BgL_arg2886z00_997 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_typez00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4805;

							BgL_auxz00_4805 = (int) (((long) 5));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4805,
								BgL_arg2886z00_997);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2888z00_999;

						BgL_arg2888z00_999 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_pnamez00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4809;

							BgL_auxz00_4809 = (int) (((long) 6));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4809,
								BgL_arg2888z00_999);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2891z00_1001;

						BgL_arg2891z00_1001 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_descriptorz00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4813;

							BgL_auxz00_4813 = (int) (((long) 7));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4813,
								BgL_arg2891z00_1001);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2893z00_1003;

						BgL_arg2893z00_1003 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_poolz00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4817;

							BgL_auxz00_4817 = (int) (((long) 8));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4817,
								BgL_arg2893z00_1003);
					}}
					{	/* Jas/classfile.scm 19 */
						obj_t BgL_arg2896z00_1005;

						BgL_arg2896z00_1005 =
							(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_obj1770z00_984))->
							BgL_attributesz00);
						{	/* Jas/classfile.scm 19 */
							int BgL_auxz00_4821;

							BgL_auxz00_4821 = (int) (((long) 9));
							STRUCT_SET(BgL_res1771z00_987, BgL_auxz00_4821,
								BgL_arg2896z00_1005);
					}}
					return BgL_res1771z00_987;
				}
			}
		}
	}



/* struct+object->objec2257 */
	obj_t BGl_structzb2objectzd2ze3objec2257z83zzjas_classfilez00(obj_t
		BgL_envz00_2820, obj_t BgL_oz00_2821, obj_t BgL_sz00_2822)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{
				BgL_fieldz00_bglt BgL_oz00_968;

				obj_t BgL_sz00_969;

				{	/* Jas/classfile.scm 30 */
					BgL_fieldz00_bglt BgL_auxz00_4825;

					BgL_oz00_968 = (BgL_fieldz00_bglt) (BgL_oz00_2821);
					BgL_sz00_969 = BgL_sz00_2822;
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2875z00_972;

						BgL_arg2875z00_972 = STRUCT_REF(BgL_sz00_969, (int) (((long) 0)));
						{	/* Jas/classfile.scm 30 */
							BgL_objectz00_bglt BgL_auxz00_4828;

							BgL_auxz00_4828 = (BgL_objectz00_bglt) (BgL_oz00_968);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4828, BgL_arg2875z00_972);
					}}
					{
						obj_t BgL_auxz00_4831;

						BgL_auxz00_4831 = STRUCT_REF(BgL_sz00_969, (int) (((long) 1)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_flagsz00) =
							((obj_t) BgL_auxz00_4831), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4835;

						BgL_auxz00_4835 = STRUCT_REF(BgL_sz00_969, (int) (((long) 2)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_namez00) =
							((obj_t) BgL_auxz00_4835), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4839;

						BgL_auxz00_4839 = STRUCT_REF(BgL_sz00_969, (int) (((long) 3)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_ownerz00) =
							((obj_t) BgL_auxz00_4839), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4843;

						BgL_auxz00_4843 = STRUCT_REF(BgL_sz00_969, (int) (((long) 4)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_usertypez00) =
							((obj_t) BgL_auxz00_4843), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4847;

						BgL_auxz00_4847 = STRUCT_REF(BgL_sz00_969, (int) (((long) 5)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_typez00) =
							((obj_t) BgL_auxz00_4847), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4851;

						BgL_auxz00_4851 = STRUCT_REF(BgL_sz00_969, (int) (((long) 6)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_pnamez00) =
							((obj_t) BgL_auxz00_4851), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4855;

						BgL_auxz00_4855 = STRUCT_REF(BgL_sz00_969, (int) (((long) 7)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_descriptorz00) =
							((obj_t) BgL_auxz00_4855), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4859;

						BgL_auxz00_4859 = STRUCT_REF(BgL_sz00_969, (int) (((long) 8)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_poolz00) =
							((obj_t) BgL_auxz00_4859), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4863;

						BgL_auxz00_4863 = STRUCT_REF(BgL_sz00_969, (int) (((long) 9)));
						((((BgL_fieldz00_bglt) CREF(BgL_oz00_968))->BgL_attributesz00) =
							((obj_t) BgL_auxz00_4863), BUNSPEC);
					}
					BgL_auxz00_4825 = BgL_oz00_968;
					return (obj_t) (BgL_auxz00_4825);
				}
			}
		}
	}



/* object->struct-field2255 */
	obj_t BGl_objectzd2ze3structzd2field2255ze3zzjas_classfilez00(obj_t
		BgL_envz00_2823, obj_t BgL_obj1870z00_2824)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 30 */
			{
				BgL_fieldz00_bglt BgL_obj1870z00_944;

				BgL_obj1870z00_944 = (BgL_fieldz00_bglt) (BgL_obj1870z00_2824);
				{	/* Jas/classfile.scm 30 */
					obj_t BgL_res1871z00_947;

					{	/* Jas/classfile.scm 30 */
						obj_t BgL_keyz00_2247;

						BgL_keyz00_2247 = CNST_TABLE_REF(((long) 20));
						BgL_res1871z00_947 =
							make_struct(BgL_keyz00_2247, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 30 */
						int BgL_auxz00_4872;

						BgL_auxz00_4872 = (int) (((long) 0));
						STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4872, BFALSE);
					}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2856z00_949;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4875;

							BgL_auxz00_4875 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2856z00_949 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4875))->
								BgL_flagsz00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4878;

							BgL_auxz00_4878 = (int) (((long) 1));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4878,
								BgL_arg2856z00_949);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2858z00_951;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4881;

							BgL_auxz00_4881 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2858z00_951 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4881))->
								BgL_namez00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4884;

							BgL_auxz00_4884 = (int) (((long) 2));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4884,
								BgL_arg2858z00_951);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2861z00_953;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4887;

							BgL_auxz00_4887 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2861z00_953 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4887))->
								BgL_ownerz00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4890;

							BgL_auxz00_4890 = (int) (((long) 3));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4890,
								BgL_arg2861z00_953);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2863z00_955;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4893;

							BgL_auxz00_4893 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2863z00_955 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4893))->
								BgL_usertypez00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4896;

							BgL_auxz00_4896 = (int) (((long) 4));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4896,
								BgL_arg2863z00_955);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2865z00_957;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4899;

							BgL_auxz00_4899 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2865z00_957 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4899))->
								BgL_typez00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4902;

							BgL_auxz00_4902 = (int) (((long) 5));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4902,
								BgL_arg2865z00_957);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2867z00_959;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4905;

							BgL_auxz00_4905 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2867z00_959 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4905))->
								BgL_pnamez00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4908;

							BgL_auxz00_4908 = (int) (((long) 6));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4908,
								BgL_arg2867z00_959);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2869z00_961;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4911;

							BgL_auxz00_4911 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2869z00_961 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4911))->
								BgL_descriptorz00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4914;

							BgL_auxz00_4914 = (int) (((long) 7));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4914,
								BgL_arg2869z00_961);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2871z00_963;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4917;

							BgL_auxz00_4917 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2871z00_963 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4917))->
								BgL_poolz00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4920;

							BgL_auxz00_4920 = (int) (((long) 8));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4920,
								BgL_arg2871z00_963);
					}}
					{	/* Jas/classfile.scm 30 */
						obj_t BgL_arg2873z00_965;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4923;

							BgL_auxz00_4923 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1870z00_944);
							BgL_arg2873z00_965 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4923))->
								BgL_attributesz00);
						}
						{	/* Jas/classfile.scm 30 */
							int BgL_auxz00_4926;

							BgL_auxz00_4926 = (int) (((long) 9));
							STRUCT_SET(BgL_res1871z00_947, BgL_auxz00_4926,
								BgL_arg2873z00_965);
					}}
					return BgL_res1871z00_947;
				}
			}
		}
	}



/* struct+object->objec2253 */
	obj_t BGl_structzb2objectzd2ze3objec2253z83zzjas_classfilez00(obj_t
		BgL_envz00_2825, obj_t BgL_oz00_2826, obj_t BgL_sz00_2827)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{
				BgL_methodz00_bglt BgL_oz00_928;

				obj_t BgL_sz00_929;

				{	/* Jas/classfile.scm 32 */
					BgL_methodz00_bglt BgL_auxz00_4930;

					BgL_oz00_928 = (BgL_methodz00_bglt) (BgL_oz00_2826);
					BgL_sz00_929 = BgL_sz00_2827;
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2852z00_932;

						BgL_arg2852z00_932 = STRUCT_REF(BgL_sz00_929, (int) (((long) 0)));
						{	/* Jas/classfile.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_4933;

							BgL_auxz00_4933 = (BgL_objectz00_bglt) (BgL_oz00_928);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4933, BgL_arg2852z00_932);
					}}
					{
						obj_t BgL_auxz00_4936;

						BgL_auxz00_4936 = STRUCT_REF(BgL_sz00_929, (int) (((long) 1)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_flagsz00) =
							((obj_t) BgL_auxz00_4936), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4940;

						BgL_auxz00_4940 = STRUCT_REF(BgL_sz00_929, (int) (((long) 2)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_namez00) =
							((obj_t) BgL_auxz00_4940), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4944;

						BgL_auxz00_4944 = STRUCT_REF(BgL_sz00_929, (int) (((long) 3)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_ownerz00) =
							((obj_t) BgL_auxz00_4944), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4948;

						BgL_auxz00_4948 = STRUCT_REF(BgL_sz00_929, (int) (((long) 4)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_usertypez00) =
							((obj_t) BgL_auxz00_4948), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4952;

						BgL_auxz00_4952 = STRUCT_REF(BgL_sz00_929, (int) (((long) 5)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_typez00) =
							((obj_t) BgL_auxz00_4952), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4956;

						BgL_auxz00_4956 = STRUCT_REF(BgL_sz00_929, (int) (((long) 6)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_pnamez00) =
							((obj_t) BgL_auxz00_4956), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4960;

						BgL_auxz00_4960 = STRUCT_REF(BgL_sz00_929, (int) (((long) 7)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_descriptorz00) =
							((obj_t) BgL_auxz00_4960), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4964;

						BgL_auxz00_4964 = STRUCT_REF(BgL_sz00_929, (int) (((long) 8)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_poolz00) =
							((obj_t) BgL_auxz00_4964), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4968;

						BgL_auxz00_4968 = STRUCT_REF(BgL_sz00_929, (int) (((long) 9)));
						((((BgL_methodz00_bglt) CREF(BgL_oz00_928))->BgL_attributesz00) =
							((obj_t) BgL_auxz00_4968), BUNSPEC);
					}
					BgL_auxz00_4930 = BgL_oz00_928;
					return (obj_t) (BgL_auxz00_4930);
				}
			}
		}
	}



/* object->struct-metho2251 */
	obj_t BGl_objectzd2ze3structzd2metho2251ze3zzjas_classfilez00(obj_t
		BgL_envz00_2828, obj_t BgL_obj1968z00_2829)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 32 */
			{
				BgL_methodz00_bglt BgL_obj1968z00_904;

				BgL_obj1968z00_904 = (BgL_methodz00_bglt) (BgL_obj1968z00_2829);
				{	/* Jas/classfile.scm 32 */
					obj_t BgL_res1969z00_907;

					{	/* Jas/classfile.scm 32 */
						obj_t BgL_keyz00_2185;

						BgL_keyz00_2185 = CNST_TABLE_REF(((long) 21));
						BgL_res1969z00_907 =
							make_struct(BgL_keyz00_2185, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 32 */
						int BgL_auxz00_4977;

						BgL_auxz00_4977 = (int) (((long) 0));
						STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_4977, BFALSE);
					}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2833z00_909;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4980;

							BgL_auxz00_4980 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2833z00_909 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4980))->
								BgL_flagsz00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_4983;

							BgL_auxz00_4983 = (int) (((long) 1));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_4983,
								BgL_arg2833z00_909);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2835z00_911;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4986;

							BgL_auxz00_4986 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2835z00_911 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4986))->
								BgL_namez00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_4989;

							BgL_auxz00_4989 = (int) (((long) 2));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_4989,
								BgL_arg2835z00_911);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2837z00_913;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4992;

							BgL_auxz00_4992 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2837z00_913 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4992))->
								BgL_ownerz00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_4995;

							BgL_auxz00_4995 = (int) (((long) 3));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_4995,
								BgL_arg2837z00_913);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2839z00_915;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4998;

							BgL_auxz00_4998 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2839z00_915 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_4998))->
								BgL_usertypez00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5001;

							BgL_auxz00_5001 = (int) (((long) 4));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5001,
								BgL_arg2839z00_915);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2842z00_917;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_5004;

							BgL_auxz00_5004 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2842z00_917 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_5004))->
								BgL_typez00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5007;

							BgL_auxz00_5007 = (int) (((long) 5));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5007,
								BgL_arg2842z00_917);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2844z00_919;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_5010;

							BgL_auxz00_5010 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2844z00_919 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_5010))->
								BgL_pnamez00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5013;

							BgL_auxz00_5013 = (int) (((long) 6));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5013,
								BgL_arg2844z00_919);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2846z00_921;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_5016;

							BgL_auxz00_5016 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2846z00_921 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_5016))->
								BgL_descriptorz00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5019;

							BgL_auxz00_5019 = (int) (((long) 7));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5019,
								BgL_arg2846z00_921);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2848z00_923;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_5022;

							BgL_auxz00_5022 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2848z00_923 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_5022))->
								BgL_poolz00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5025;

							BgL_auxz00_5025 = (int) (((long) 8));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5025,
								BgL_arg2848z00_923);
					}}
					{	/* Jas/classfile.scm 32 */
						obj_t BgL_arg2850z00_925;

						{
							BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_5028;

							BgL_auxz00_5028 =
								(BgL_fieldzd2orzd2methodz00_bglt) (BgL_obj1968z00_904);
							BgL_arg2850z00_925 =
								(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_5028))->
								BgL_attributesz00);
						}
						{	/* Jas/classfile.scm 32 */
							int BgL_auxz00_5031;

							BgL_auxz00_5031 = (int) (((long) 9));
							STRUCT_SET(BgL_res1969z00_907, BgL_auxz00_5031,
								BgL_arg2850z00_925);
					}}
					return BgL_res1969z00_907;
				}
			}
		}
	}



/* struct+object->objec2249 */
	obj_t BGl_structzb2objectzd2ze3objec2249z83zzjas_classfilez00(obj_t
		BgL_envz00_2830, obj_t BgL_oz00_2831, obj_t BgL_sz00_2832)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{
				BgL_attributez00_bglt BgL_oz00_893;

				obj_t BgL_sz00_894;

				{	/* Jas/classfile.scm 34 */
					BgL_attributez00_bglt BgL_auxz00_5035;

					BgL_oz00_893 = (BgL_attributez00_bglt) (BgL_oz00_2831);
					BgL_sz00_894 = BgL_sz00_2832;
					{	/* Jas/classfile.scm 34 */
						obj_t BgL_arg2830z00_897;

						BgL_arg2830z00_897 = STRUCT_REF(BgL_sz00_894, (int) (((long) 0)));
						{	/* Jas/classfile.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_5038;

							BgL_auxz00_5038 = (BgL_objectz00_bglt) (BgL_oz00_893);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5038, BgL_arg2830z00_897);
					}}
					{
						obj_t BgL_auxz00_5041;

						BgL_auxz00_5041 = STRUCT_REF(BgL_sz00_894, (int) (((long) 1)));
						((((BgL_attributez00_bglt) CREF(BgL_oz00_893))->BgL_typez00) =
							((obj_t) BgL_auxz00_5041), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5045;

						BgL_auxz00_5045 = STRUCT_REF(BgL_sz00_894, (int) (((long) 2)));
						((((BgL_attributez00_bglt) CREF(BgL_oz00_893))->BgL_namez00) =
							((obj_t) BgL_auxz00_5045), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5049;

						BgL_auxz00_5049 = STRUCT_REF(BgL_sz00_894, (int) (((long) 3)));
						((((BgL_attributez00_bglt) CREF(BgL_oz00_893))->BgL_siza7eza7) =
							((obj_t) BgL_auxz00_5049), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5053;

						BgL_auxz00_5053 = STRUCT_REF(BgL_sz00_894, (int) (((long) 4)));
						((((BgL_attributez00_bglt) CREF(BgL_oz00_893))->BgL_infoz00) =
							((obj_t) BgL_auxz00_5053), BUNSPEC);
					}
					BgL_auxz00_5035 = BgL_oz00_893;
					return (obj_t) (BgL_auxz00_5035);
				}
			}
		}
	}



/* object->struct-attri2247 */
	obj_t BGl_objectzd2ze3structzd2attri2247ze3zzjas_classfilez00(obj_t
		BgL_envz00_2833, obj_t BgL_obj2036z00_2834)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 34 */
			{
				BgL_attributez00_bglt BgL_obj2036z00_879;

				BgL_obj2036z00_879 = (BgL_attributez00_bglt) (BgL_obj2036z00_2834);
				{	/* Jas/classfile.scm 34 */
					obj_t BgL_res2037z00_882;

					{	/* Jas/classfile.scm 34 */
						obj_t BgL_keyz00_2153;

						BgL_keyz00_2153 = CNST_TABLE_REF(((long) 22));
						BgL_res2037z00_882 =
							make_struct(BgL_keyz00_2153, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 34 */
						int BgL_auxz00_5062;

						BgL_auxz00_5062 = (int) (((long) 0));
						STRUCT_SET(BgL_res2037z00_882, BgL_auxz00_5062, BFALSE);
					}
					{	/* Jas/classfile.scm 34 */
						obj_t BgL_arg2821z00_884;

						BgL_arg2821z00_884 =
							(((BgL_attributez00_bglt) CREF(BgL_obj2036z00_879))->BgL_typez00);
						{	/* Jas/classfile.scm 34 */
							int BgL_auxz00_5066;

							BgL_auxz00_5066 = (int) (((long) 1));
							STRUCT_SET(BgL_res2037z00_882, BgL_auxz00_5066,
								BgL_arg2821z00_884);
					}}
					{	/* Jas/classfile.scm 34 */
						obj_t BgL_arg2823z00_886;

						BgL_arg2823z00_886 =
							(((BgL_attributez00_bglt) CREF(BgL_obj2036z00_879))->BgL_namez00);
						{	/* Jas/classfile.scm 34 */
							int BgL_auxz00_5070;

							BgL_auxz00_5070 = (int) (((long) 2));
							STRUCT_SET(BgL_res2037z00_882, BgL_auxz00_5070,
								BgL_arg2823z00_886);
					}}
					{	/* Jas/classfile.scm 34 */
						obj_t BgL_arg2826z00_888;

						BgL_arg2826z00_888 =
							(((BgL_attributez00_bglt) CREF(BgL_obj2036z00_879))->
							BgL_siza7eza7);
						{	/* Jas/classfile.scm 34 */
							int BgL_auxz00_5074;

							BgL_auxz00_5074 = (int) (((long) 3));
							STRUCT_SET(BgL_res2037z00_882, BgL_auxz00_5074,
								BgL_arg2826z00_888);
					}}
					{	/* Jas/classfile.scm 34 */
						obj_t BgL_arg2828z00_890;

						BgL_arg2828z00_890 =
							(((BgL_attributez00_bglt) CREF(BgL_obj2036z00_879))->BgL_infoz00);
						{	/* Jas/classfile.scm 34 */
							int BgL_auxz00_5078;

							BgL_auxz00_5078 = (int) (((long) 4));
							STRUCT_SET(BgL_res2037z00_882, BgL_auxz00_5078,
								BgL_arg2828z00_890);
					}}
					return BgL_res2037z00_882;
				}
			}
		}
	}



/* struct+object->objec2245 */
	obj_t BGl_structzb2objectzd2ze3objec2245z83zzjas_classfilez00(obj_t
		BgL_envz00_2835, obj_t BgL_oz00_2836, obj_t BgL_sz00_2837)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{
				BgL_classfilez00_bglt BgL_oz00_860;

				obj_t BgL_sz00_861;

				{	/* Jas/classfile.scm 40 */
					BgL_classfilez00_bglt BgL_auxz00_5082;

					BgL_oz00_860 = (BgL_classfilez00_bglt) (BgL_oz00_2836);
					BgL_sz00_861 = BgL_sz00_2837;
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2818z00_864;

						BgL_arg2818z00_864 = STRUCT_REF(BgL_sz00_861, (int) (((long) 0)));
						{	/* Jas/classfile.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_5085;

							BgL_auxz00_5085 = (BgL_objectz00_bglt) (BgL_oz00_860);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5085, BgL_arg2818z00_864);
					}}
					{
						obj_t BgL_auxz00_5088;

						BgL_auxz00_5088 = STRUCT_REF(BgL_sz00_861, (int) (((long) 1)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->
								BgL_currentzd2methodzd2) = ((obj_t) BgL_auxz00_5088), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5092;

						BgL_auxz00_5092 = STRUCT_REF(BgL_sz00_861, (int) (((long) 2)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_globalsz00) =
							((obj_t) BgL_auxz00_5092), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5096;

						BgL_auxz00_5096 = STRUCT_REF(BgL_sz00_861, (int) (((long) 3)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_poolz00) =
							((obj_t) BgL_auxz00_5096), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5100;

						BgL_auxz00_5100 = STRUCT_REF(BgL_sz00_861, (int) (((long) 4)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->
								BgL_poolzd2siza7ez75) = ((obj_t) BgL_auxz00_5100), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5104;

						BgL_auxz00_5104 = STRUCT_REF(BgL_sz00_861, (int) (((long) 5)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->
								BgL_pooledzd2nameszd2) = ((obj_t) BgL_auxz00_5104), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5108;

						BgL_auxz00_5108 = STRUCT_REF(BgL_sz00_861, (int) (((long) 6)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_flagsz00) =
							((obj_t) BgL_auxz00_5108), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5112;

						BgL_auxz00_5112 = STRUCT_REF(BgL_sz00_861, (int) (((long) 7)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_mez00) =
							((obj_t) BgL_auxz00_5112), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5116;

						BgL_auxz00_5116 = STRUCT_REF(BgL_sz00_861, (int) (((long) 8)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_superz00) =
							((obj_t) BgL_auxz00_5116), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5120;

						BgL_auxz00_5120 = STRUCT_REF(BgL_sz00_861, (int) (((long) 9)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_interfacesz00) =
							((obj_t) BgL_auxz00_5120), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5124;

						BgL_auxz00_5124 = STRUCT_REF(BgL_sz00_861, (int) (((long) 10)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_fieldsz00) =
							((obj_t) BgL_auxz00_5124), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5128;

						BgL_auxz00_5128 = STRUCT_REF(BgL_sz00_861, (int) (((long) 11)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_methodsz00) =
							((obj_t) BgL_auxz00_5128), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5132;

						BgL_auxz00_5132 = STRUCT_REF(BgL_sz00_861, (int) (((long) 12)));
						((((BgL_classfilez00_bglt) CREF(BgL_oz00_860))->BgL_attributesz00) =
							((obj_t) BgL_auxz00_5132), BUNSPEC);
					}
					BgL_auxz00_5082 = BgL_oz00_860;
					return (obj_t) (BgL_auxz00_5082);
				}
			}
		}
	}



/* object->struct-class2243 */
	obj_t BGl_objectzd2ze3structzd2class2243ze3zzjas_classfilez00(obj_t
		BgL_envz00_2838, obj_t BgL_obj2132z00_2839)
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 40 */
			{
				BgL_classfilez00_bglt BgL_obj2132z00_830;

				BgL_obj2132z00_830 = (BgL_classfilez00_bglt) (BgL_obj2132z00_2839);
				{	/* Jas/classfile.scm 40 */
					obj_t BgL_res2133z00_833;

					{	/* Jas/classfile.scm 40 */
						obj_t BgL_keyz00_2073;

						BgL_keyz00_2073 = CNST_TABLE_REF(((long) 23));
						BgL_res2133z00_833 =
							make_struct(BgL_keyz00_2073, (int) (((long) 13)), BUNSPEC);
					}
					{	/* Jas/classfile.scm 40 */
						int BgL_auxz00_5141;

						BgL_auxz00_5141 = (int) (((long) 0));
						STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5141, BFALSE);
					}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2794z00_835;

						BgL_arg2794z00_835 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_currentzd2methodzd2);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5145;

							BgL_auxz00_5145 = (int) (((long) 1));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5145,
								BgL_arg2794z00_835);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2796z00_837;

						BgL_arg2796z00_837 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_globalsz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5149;

							BgL_auxz00_5149 = (int) (((long) 2));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5149,
								BgL_arg2796z00_837);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2798z00_839;

						BgL_arg2798z00_839 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->BgL_poolz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5153;

							BgL_auxz00_5153 = (int) (((long) 3));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5153,
								BgL_arg2798z00_839);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2800z00_841;

						BgL_arg2800z00_841 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_poolzd2siza7ez75);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5157;

							BgL_auxz00_5157 = (int) (((long) 4));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5157,
								BgL_arg2800z00_841);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2802z00_843;

						BgL_arg2802z00_843 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_pooledzd2nameszd2);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5161;

							BgL_auxz00_5161 = (int) (((long) 5));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5161,
								BgL_arg2802z00_843);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2804z00_845;

						BgL_arg2804z00_845 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_flagsz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5165;

							BgL_auxz00_5165 = (int) (((long) 6));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5165,
								BgL_arg2804z00_845);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2806z00_847;

						BgL_arg2806z00_847 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->BgL_mez00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5169;

							BgL_auxz00_5169 = (int) (((long) 7));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5169,
								BgL_arg2806z00_847);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2808z00_849;

						BgL_arg2808z00_849 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_superz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5173;

							BgL_auxz00_5173 = (int) (((long) 8));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5173,
								BgL_arg2808z00_849);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2810z00_851;

						BgL_arg2810z00_851 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_interfacesz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5177;

							BgL_auxz00_5177 = (int) (((long) 9));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5177,
								BgL_arg2810z00_851);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2812z00_853;

						BgL_arg2812z00_853 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_fieldsz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5181;

							BgL_auxz00_5181 = (int) (((long) 10));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5181,
								BgL_arg2812z00_853);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2814z00_855;

						BgL_arg2814z00_855 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_methodsz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5185;

							BgL_auxz00_5185 = (int) (((long) 11));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5185,
								BgL_arg2814z00_855);
					}}
					{	/* Jas/classfile.scm 40 */
						obj_t BgL_arg2816z00_857;

						BgL_arg2816z00_857 =
							(((BgL_classfilez00_bglt) CREF(BgL_obj2132z00_830))->
							BgL_attributesz00);
						{	/* Jas/classfile.scm 40 */
							int BgL_auxz00_5189;

							BgL_auxz00_5189 = (int) (((long) 12));
							STRUCT_SET(BgL_res2133z00_833, BgL_auxz00_5189,
								BgL_arg2816z00_857);
					}}
					return BgL_res2133z00_833;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_classfilez00()
	{
		AN_OBJECT;
		{	/* Jas/classfile.scm 1 */
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string3085z00zzjas_classfilez00));
		}
	}

#ifdef __cplusplus
}
#endif
