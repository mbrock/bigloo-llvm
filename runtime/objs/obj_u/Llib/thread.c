/*===========================================================================*/
/*   (Llib/thread.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/thread.scm -indent -o objs/obj_u/Llib/thread.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_nothreadzd2backendzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                            *BgL_nothreadzd2backendzd2_bglt;

	typedef struct BgL_threadzd2backendzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                          *BgL_threadzd2backendzd2_bglt;

	typedef struct BgL_threadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                *BgL_threadz00_bglt;

	typedef struct BgL_nothreadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		obj_t BgL_bodyz00;
		obj_t BgL_z52specificz52;
		obj_t BgL_z52cleanupz52;
		obj_t BgL_endzd2resultzd2;
		obj_t BgL_endzd2exceptionzd2;
	}                  *BgL_nothreadz00_bglt;


	static obj_t BGl__z52userzd2currentzd2threadz52zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z52currentzd2threadz80zz__threadz00();
	static obj_t BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nothreadz00_bglt BGl_nothreadzd2nilzd2zz__threadz00();
	BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt
		BGl_fillzd2threadzd2backendz12z12zz__threadz00(BgL_threadzd2backendzd2_bglt,
		obj_t);
	static obj_t BGl_zc3anonymousza32236ze3z83zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl__threadzd2namezd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_zc3anonymousza32101ze3z83zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_threadz00_bglt
		BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32102ze3z83zz__threadz00(obj_t, obj_t);
	static BgL_nothreadzd2backendzd2_bglt
		BGl_nothreadzd2backendzd2nilz00zz__threadz00();
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__threadzd2nilzd2zz__threadz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static BgL_nothreadzd2backendzd2_bglt
		BGl_za2nothreadzd2backendza2zd2zz__threadz00;
	static obj_t BGl__fillzd2threadzd2backendz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2backendzd2nilz00zz__threadz00(obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_threadz00_bglt
		BGl_fillzd2threadz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl__makezd2nothreadzd2zz__threadz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 = BUNSPEC;
	static obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t);
	static obj_t BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl__currentzd2threadzd2backendz00zz__threadz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__threadz00();
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__z52userzd2threadzd2yieldz12z40zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendz00zz__threadz00();
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t);
	extern void bgl_sleep(long);
	static obj_t BGl__fillzd2nothreadz12zc0zz__threadz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2getzd2specificz00zz__threadz00(BgL_threadz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t);
	static obj_t
		BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__threadzd2getzd2specificz00zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00(obj_t, obj_t);
	static obj_t BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nothreadz00_bglt
		BGl_makezd2nothreadzd2zz__threadz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nothreadzf3zf3zz__threadz00(obj_t);
	static obj_t
		BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__nothreadzd2z52specificz80zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__conditionzd2variablezd2signalz12z12zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t,
		obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_threadzd2backendzd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_threadzd2getzd2specificzd21997zd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__currentzd2threadzd2zz__threadz00(obj_t);
	static obj_t BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt);
	static obj_t BGl_zc3anonymousza32270ze3z83zz__threadz00(obj_t, obj_t);
	static obj_t BGl__mutexzd2namezd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__conditionzd2variablezd2namez00zz__threadz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32260ze3z83zz__threadz00(BgL_nothreadz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__threadz00();
	static obj_t BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32261ze3z83zz__threadz00(BgL_nothreadz00_bglt,
		BgL_nothreadz00_bglt);
	static obj_t BGl__z52allocatezd2nothreadz80zz__threadz00(obj_t);
	static obj_t BGl__makezd2threadzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2nilzd2zz__threadz00();
	static obj_t BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_threadzd2nilzd2zz__threadz00();
	static obj_t BGl_zc3exitza32267ze3z83zz__threadz00(BgL_nothreadz00_bglt,
		BgL_nothreadz00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl__threadzd2startzd2joinabl1964z00zz__threadz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__threadz00();
	extern obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__threadzd2joinz12zc0zz__threadz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nothreadz00_bglt
		BGl_fillzd2nothreadz12zc0zz__threadz00(BgL_nothreadz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2joinz12zd2default1967z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_threadzf3zf3zz__threadz00(obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__dynamiczd2envzf3z21zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2sleepz12zc0zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nothreadz00_bglt
		BGl_z52allocatezd2nothreadz80zz__threadz00();
	static BgL_nothreadzd2backendzd2_bglt
		BGl_makezd2nothreadzd2backendz00zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl__mutexzf3zf3zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00(obj_t);
	static obj_t BGl_list2803z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_list2806z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_nothreadz00zz__threadz00 = BUNSPEC;
	static obj_t BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2printzd2thread1959z00zz__threadz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__mutexzd2unlockz12zc0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2zz__threadz00();
	static obj_t BGl__threadzd2setzd2specificz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL BgL_threadz00_bglt
		BGl_z52allocatezd2threadz80zz__threadz00();
	static obj_t BGl_threadzd2startz12zd2nothre1989z12zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__threadzd2specificzd2setz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl__mutexzd2statezd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__threadz00();
	static obj_t BGl__threadzd2namezd2setz12z12zz__threadz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__getzd2threadzd2backendz00zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t);
	static obj_t BGl__z52allocatezd2threadzd2backendz52zz__threadz00(obj_t);
	static obj_t BGl__threadzd2setzd2specificz121973z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t);
	extern obj_t bgl_make_nil_mutex();
	extern long bgl_current_seconds();
	static obj_t
		BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00
		(BgL_threadzd2backendzd2_bglt);
	extern obj_t bgl_seconds_to_date(long);
	BGL_EXPORTED_DECL bool_t BGl_threadzd2backendzf3z21zz__threadz00(obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t);
	static obj_t BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__threadzd2startz12zd2defaul1962z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t, long);
	static obj_t BGl__nothreadzd2z52cleanupz80zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2setzd2cleanupz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__conditionzd2variablezf3z21zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_threadz00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t);
	static obj_t BGl_za2mutexzd2nilza2zd2zz__threadz00 = BUNSPEC;
	static obj_t
		BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_threadz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t);
	static obj_t BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BUNSPEC;
	static obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt
		BGl_makezd2threadzd2backendz00zz__threadz00(obj_t);
	static obj_t BGl__threadzd2specificzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2yieldz12zc0zz__threadz00(obj_t);
	static obj_t BGl__makezd2threadzd2backendz00zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__threadzd2parameterzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__nothreadzd2endzd2exceptionz00zz__threadz00(obj_t, obj_t);
	static obj_t BGl__nothreadzd2backendzf3z21zz__threadz00(obj_t, obj_t);
	static obj_t BGl_objectzd2writezd2thread1957z00zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 = BUNSPEC;
	static obj_t BGl__threadzd2getzd2cleanupz00zz__threadz00(obj_t, obj_t);
	static obj_t
		BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(BgL_threadz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt);
	static obj_t BGl_nothreadzd2backendzd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_z52thezd2threadzd2nilz52zz__threadz00 = BUNSPEC;
	static obj_t
		BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__threadzd2backendzd2nilz00zz__threadz00(obj_t);
	static obj_t BGl_z52thezd2nothreadzd2nilz52zz__threadz00 = BUNSPEC;
	static obj_t BGl__threadzd2backendzf3z21zz__threadz00(obj_t, obj_t);
	static obj_t BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_threadzd2startzd2joinabl1991z00zz__threadz00(obj_t, obj_t);
	static obj_t
		BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_threadz00_bglt,
		obj_t);
	static obj_t BGl__threadzd2terminatez12zc0zz__threadz00(obj_t, obj_t);
	static obj_t BGl__conditionzd2variablezd2nilz00zz__threadz00(obj_t);
	static obj_t BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_threadzd2yieldz12zc0zz__threadz00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00();
	static obj_t BGl__nothreadzf3zf3zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2startzd2joinablez12z12zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_zc3anonymousza32206ze3z83zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t, long);
	extern obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt,
		int, obj_t);
	static obj_t BGl__defaultzd2threadzd2backendz00zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl__threadzd2cleanupzd2setz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00();
	extern obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt,
		int);
	BGL_EXPORTED_DECL bool_t BGl_mutexzf3zf3zz__threadz00(obj_t);
	BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt
		BGl_threadzd2backendzd2nilz00zz__threadz00();
	static obj_t BGl__threadzd2parameterzd2setz12z12zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__tbzd2makezd2threadz00zz__threadz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl__threadzd2cleanupzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__threadzd2terminatez12zd2de1969z12zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2778z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2785z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2800z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2801z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__mutexzd2nilzd2zz__threadz00(obj_t);
	static obj_t BGl_symbol2793z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2804z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2807z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__threadz00();
	static obj_t BGl_symbol2809z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2811z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt
		BGl_z52allocatezd2threadzd2backendz52zz__threadz00();
	static obj_t BGl_symbol2815z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__threadzf3zf3zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2816z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2818z00zz__threadz00 = BUNSPEC;
	static obj_t
		BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_threadz00_bglt,
		obj_t);
	static obj_t BGl_symbol2820z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2822z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__nothreadzd2nilzd2zz__threadz00(obj_t);
	static obj_t BGl_za2threadzd2backendsza2zd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2824z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2826z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2828z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__threadzd2startz12zc0zz__threadz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t bgl_make_nil_condvar();
	static obj_t BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00();
	static obj_t BGl_threadzd2setzd2specificz121999z12zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__threadzd2backendzd2namez00zz__threadz00(obj_t, obj_t);
	static obj_t BGl__currentzd2dynamiczd2envz00zz__threadz00(obj_t);
	static obj_t BGl__threadzd2getzd2specificzd21971zd2zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2displayzd2threa1955z00zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__withzd2lockzd2zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl__tbzd2currentzd2threadz00zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2870z00zz__threadz00 = BUNSPEC;
	extern long bgl_date_to_seconds(obj_t);
	static obj_t
		BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00
		(BgL_threadzd2backendzd2_bglt, obj_t, obj_t);
	static obj_t BGl_symbol2875z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__z52userzd2currentzd2thread1982z52zz__threadz00(obj_t,
		obj_t);
	static obj_t
		BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_threadz00_bglt,
		obj_t);
	static obj_t BGl__threadzd2initializa7ez12z67zz__threadz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2018z83zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl_symbol2881z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec2022z83zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2885z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec2026z83zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52userzd2threadzd2sleepz12z40zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2889z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_threadzd2terminatez12zd2no1995z12zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2901z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2893z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2905z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2909z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2915z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__nothreadzd2bodyzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2threadz80zz__threadz00(obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__threadz00();
	static obj_t BGl__fillzd2threadz12zc0zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2nothreadzd2backendz00zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	static obj_t BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_zc3exitza32073ze3z83zz__threadz00(obj_t);
	static obj_t BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t);
	static obj_t BGl__nothreadzd2endzd2resultz00zz__threadz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2sleepz12zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2sleepza72956z00, BGl__threadzd2sleepz12zc0zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tbzd2makezd2threadzd2defau1945zd2envz00zz__threadz00,
		BgL_bgl__tbza7d2makeza7d2thr2957z00,
		BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zz__threadz00,
		BgL_bgl__nothreadza7d2endza72958z00,
		BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2setza7d22959z00,
		BGl__threadzd2setzd2cleanupz12z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
		BgL_bgl__za752userza7d2threa2960z00,
		BGl__z52userzd2threadzd2sleepz12z40zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2namezd2envzd2zz__threadz00,
		BgL_bgl__conditionza7d2var2961za7,
		BGl__conditionzd2variablezd2namez00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl__getza7d2threadza7d22962z00,
		BGl__getzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_makezd2nothreadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl__makeza7d2nothread2963za7,
		BGl__makezd2nothreadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2setza7d22964z00,
		BGl__threadzd2setzd2specificz12z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52specificzd2setz12zd2envz92zz__threadz00,
		BgL_bgl__nothreadza7d2za752s2965z00,
		BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2broadcastz12zd2envzc0zz__threadz00,
		BgL_bgl__conditionza7d2var2966za7,
		BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2exceptionzd2envzd2zz__threadz00,
		BgL_bgl__nothreadza7d2endza72967z00,
		BGl__nothreadzd2endzd2exceptionz00zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2threadzd2envz00zz__threadz00,
		BgL_bgl__currentza7d2threa2968za7, BGl__currentzd2threadzd2zz__threadz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nothreadzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2nothread2969za7, BGl__makezd2nothreadzd2zz__threadz00, 0L,
		BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzf3zd2envz21zz__threadz00,
		BgL_bgl__threadza7f3za7f3za7za7_2970z00, BGl__threadzf3zf3zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2namezd2envz00zz__threadz00,
		BgL_bgl__mutexza7d2nameza7d22971z00, BGl__mutexzd2namezd2zz__threadz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zz__threadz00,
		BgL_bgl__nothreadza7d2endza72972z00,
		BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_threadzd2parameterzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2parame2973za7,
		BGl__threadzd2parameterzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52userzd2currentzd2thread1982zd2envz80zz__threadz00,
		BgL_bgl__za752userza7d2curre2974z00,
		BGl__z52userzd2currentzd2thread1982z52zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2startza72975z00,
		BGl__threadzd2startzd2joinablez12z12zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2joinz12zd2default1967zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2joinza712976z00, va_generic_entry,
		BGl__threadzd2joinz12zd2default1967z12zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_nothreadzd2bodyzd2envz00zz__threadz00,
		BgL_bgl__nothreadza7d2body2977za7, BGl__nothreadzd2bodyzd2zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2813z00zz__threadz00,
		BgL_bgl_za7c3anonymousza7a322978z00,
		BGl_zc3anonymousza32101ze3z83zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2814z00zz__threadz00,
		BgL_bgl_za7c3anonymousza7a322979z00,
		BGl_zc3anonymousza32102ze3z83zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2getzd2specificzd21971zd2envz00zz__threadz00,
		BgL_bgl__threadza7d2getza7d22980z00,
		BGl__threadzd2getzd2specificzd21971zd2zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2backendzd2nilzd2envzd2zz__threadz00,
		BgL_bgl__nothreadza7d2back2981za7,
		BGl__nothreadzd2backendzd2nilz00zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_threadzd2backendzd2nilzd2envzd2zz__threadz00,
		BgL_bgl__threadza7d2backen2982za7,
		BGl__threadzd2backendzd2nilz00zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2threadzd2backendzd2setz12zd2envz12zz__threadz00,
		BgL_bgl__defaultza7d2threa2983za7,
		BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2lockz12zd2envz12zz__threadz00,
		BgL_bgl__mutexza7d2lockza7122984z00, opt_generic_entry,
		BGl__mutexzd2lockz12zc0zz__threadz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2parameterzd2envz00zz__threadz00,
		BgL_bgl__threadza7d2parame2985za7, BGl__threadzd2parameterzd2zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2threadzd2backendzd2setz12zd2envz12zz__threadz00,
		BgL_bgl__currentza7d2threa2986za7,
		BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2getzd2cleanupzd2d1975zd2envz00zz__threadz00,
		BgL_bgl__threadza7d2getza7d22987z00,
		BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_nothreadzd2backendzf3zd2envzf3zz__threadz00,
		BgL_bgl__nothreadza7d2back2988za7,
		BGl__nothreadzd2backendzf3z21zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2unlockz12zd2envz12zz__threadz00,
		BgL_bgl__mutexza7d2unlockza72989z00, BGl__mutexzd2unlockz12zc0zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2cleanu2990za7,
		BGl__threadzd2cleanupzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52specificzd2envz52zz__threadz00,
		BgL_bgl__nothreadza7d2za752s2991z00,
		BGl__nothreadzd2z52specificz80zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52userzd2threadzd2sleepz12zd21984zd2envz40zz__threadz00,
		BgL_bgl__za752userza7d2threa2992z00,
		BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zz__threadz00,
		BgL_bgl__nothreadza7d2za752c2993z00,
		BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2921z00zz__threadz00,
		BgL_bgl_tbza7d2makeza7d2thre2994z00,
		BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2922z00zz__threadz00,
		BgL_bgl_tbza7d2currentza7d2t2995z00,
		BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2923z00zz__threadz00,
		BgL_bgl_objectza7d2display2996za7, va_generic_entry,
		BGl_objectzd2displayzd2threa1955z00zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2925z00zz__threadz00,
		BgL_bgl_objectza7d2writeza7d2997z00, va_generic_entry,
		BGl_objectzd2writezd2thread1957z00zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2927z00zz__threadz00,
		BgL_bgl_objectza7d2printza7d2998z00,
		BGl_objectzd2printzd2thread1959z00zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2930z00zz__threadz00,
		BgL_bgl_threadza7d2startza7d2999z00,
		BGl_threadzd2startzd2joinabl1991z00zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2929z00zz__threadz00,
		BgL_bgl_threadza7d2startza713000z00, va_generic_entry,
		BGl_threadzd2startz12zd2nothre1989z12zz__threadz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2backendzf3zd2envzf3zz__threadz00,
		BgL_bgl__threadza7d2backen3001za7, BGl__threadzd2backendzf3z21zz__threadz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2931z00zz__threadz00,
		BgL_bgl_threadza7d2joinza7123002z00, va_generic_entry,
		BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2932z00zz__threadz00,
		BgL_bgl_threadza7d2termina3003za7,
		BGl_threadzd2terminatez12zd2no1995z12zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2933z00zz__threadz00,
		BgL_bgl_threadza7d2getza7d2s3004z00,
		BGl_threadzd2getzd2specificzd21997zd2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2934z00zz__threadz00,
		BgL_bgl_threadza7d2setza7d2s3005z00,
		BGl_threadzd2setzd2specificz121999z12zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2935z00zz__threadz00,
		BgL_bgl_threadza7d2getza7d2c3006z00,
		BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2936z00zz__threadz00,
		BgL_bgl_threadza7d2setza7d2c3007z00,
		BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2937z00zz__threadz00,
		BgL_bgl_objectza7d2za7e3stru3008z00,
		BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2939z00zz__threadz00,
		BgL_bgl_structza7b2objectza73009z00,
		BGl_structzb2objectzd2ze3objec2018z83zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2941z00zz__threadz00,
		BgL_bgl_objectza7d2za7e3stru3010z00,
		BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2joinz12zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2joinza713011z00, va_generic_entry,
		BGl__threadzd2joinz12zc0zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2942z00zz__threadz00,
		BgL_bgl_structza7b2objectza73012z00,
		BGl_structzb2objectzd2ze3objec2022z83zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2943z00zz__threadz00,
		BgL_bgl_objectza7d2za7e3stru3013z00,
		BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2944z00zz__threadz00,
		BgL_bgl_structza7b2objectza73014z00,
		BGl_structzb2objectzd2ze3objec2026z83zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2771z00zz__threadz00,
		BgL_bgl_string2771za700za7za7_3015za7, "nothread", 8);
	      DEFINE_STRING(BGl_string2772z00zz__threadz00,
		BgL_bgl_string2772za700za7za7_3016za7,
		"/tmp/bigloo/runtime/Llib/thread.scm", 35);
	      DEFINE_STRING(BGl_string2773z00zz__threadz00,
		BgL_bgl_string2773za700za7za7_3017za7, "_current-thread-backend-set!", 28);
	      DEFINE_STRING(BGl_string2774z00zz__threadz00,
		BgL_bgl_string2774za700za7za7_3018za7, "thread-backend", 14);
	      DEFINE_STRING(BGl_string2775z00zz__threadz00,
		BgL_bgl_string2775za700za7za7_3019za7, "_default-thread-backend-set!", 28);
	      DEFINE_STRING(BGl_string2776z00zz__threadz00,
		BgL_bgl_string2776za700za7za7_3020za7, "_get-thread-backend", 19);
	      DEFINE_STRING(BGl_string2777z00zz__threadz00,
		BgL_bgl_string2777za700za7za7_3021za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2780z00zz__threadz00,
		BgL_bgl_string2780za700za7za7_3022za7, "_make-thread", 12);
	      DEFINE_STRING(BGl_string2779z00zz__threadz00,
		BgL_bgl_string2779za700za7za7_3023za7, "thread", 6);
	      DEFINE_STRING(BGl_string2781z00zz__threadz00,
		BgL_bgl_string2781za700za7za7_3024za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2782z00zz__threadz00,
		BgL_bgl_string2782za700za7za7_3025za7, "_thread-parameter", 17);
	      DEFINE_STRING(BGl_string2783z00zz__threadz00,
		BgL_bgl_string2783za700za7za7_3026za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2784z00zz__threadz00,
		BgL_bgl_string2784za700za7za7_3027za7, "_thread-parameter-set!", 22);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_nothreadzd2z52cleanupzd2envz52zz__threadz00,
		BgL_bgl__nothreadza7d2za752c3028z00,
		BGl__nothreadzd2z52cleanupz80zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2786z00zz__threadz00,
		BgL_bgl_string2786za700za7za7_3029za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2787z00zz__threadz00,
		BgL_bgl_string2787za700za7za7_3030za7, "_mutex-name", 11);
	      DEFINE_STRING(BGl_string2788z00zz__threadz00,
		BgL_bgl_string2788za700za7za7_3031za7, "_mutex-lock!", 12);
	      DEFINE_STRING(BGl_string2790z00zz__threadz00,
		BgL_bgl_string2790za700za7za7_3032za7, "_mutex-unlock!", 14);
	      DEFINE_STRING(BGl_string2789z00zz__threadz00,
		BgL_bgl_string2789za700za7za7_3033za7, "long", 4);
	      DEFINE_STRING(BGl_string2791z00zz__threadz00,
		BgL_bgl_string2791za700za7za7_3034za7, "_mutex-state", 12);
	      DEFINE_STRING(BGl_string2802z00zz__threadz00,
		BgL_bgl_string2802za700za7za7_3035za7, "name", 4);
	      DEFINE_STRING(BGl_string2792z00zz__threadz00,
		BgL_bgl_string2792za700za7za7_3036za7, "_with-lock", 10);
	      DEFINE_STRING(BGl_string2794z00zz__threadz00,
		BgL_bgl_string2794za700za7za7_3037za7, "condition-variable", 18);
	      DEFINE_STRING(BGl_string2805z00zz__threadz00,
		BgL_bgl_string2805za700za7za7_3038za7, "gensym", 6);
	      DEFINE_STRING(BGl_string2795z00zz__threadz00,
		BgL_bgl_string2795za700za7za7_3039za7, "_condition-variable-name", 24);
	      DEFINE_STRING(BGl_string2796z00zz__threadz00,
		BgL_bgl_string2796za700za7za7_3040za7, "condvar", 7);
	      DEFINE_STRING(BGl_string2797z00zz__threadz00,
		BgL_bgl_string2797za700za7za7_3041za7, "_condition-variable-wait!", 25);
	      DEFINE_STRING(BGl_string2808z00zz__threadz00,
		BgL_bgl_string2808za700za7za7_3042za7, "quote", 5);
	      DEFINE_STRING(BGl_string2798z00zz__threadz00,
		BgL_bgl_string2798za700za7za7_3043za7, "_condition-variable-signal!", 27);
	      DEFINE_STRING(BGl_string2810z00zz__threadz00,
		BgL_bgl_string2810za700za7za7_3044za7, "specific", 8);
	      DEFINE_STRING(BGl_string2799z00zz__threadz00,
		BgL_bgl_string2799za700za7za7_3045za7, "_condition-variable-broadcast!",
		30);
	      DEFINE_STRING(BGl_string2812z00zz__threadz00,
		BgL_bgl_string2812za700za7za7_3046za7, "cleanup", 7);
	      DEFINE_STRING(BGl_string2817z00zz__threadz00,
		BgL_bgl_string2817za700za7za7_3047za7, "body", 4);
	      DEFINE_STRING(BGl_string2819z00zz__threadz00,
		BgL_bgl_string2819za700za7za7_3048za7, "%specific", 9);
	      DEFINE_STRING(BGl_string2821z00zz__threadz00,
		BgL_bgl_string2821za700za7za7_3049za7, "%cleanup", 8);
	      DEFINE_STRING(BGl_string2823z00zz__threadz00,
		BgL_bgl_string2823za700za7za7_3050za7, "end-result", 10);
	      DEFINE_STRING(BGl_string2825z00zz__threadz00,
		BgL_bgl_string2825za700za7za7_3051za7, "end-exception", 13);
	      DEFINE_STRING(BGl_string2827z00zz__threadz00,
		BgL_bgl_string2827za700za7za7_3052za7, "nothread-backend", 16);
	      DEFINE_STRING(BGl_string2830z00zz__threadz00,
		BgL_bgl_string2830za700za7za7_3053za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string2829z00zz__threadz00,
		BgL_bgl_string2829za700za7za7_3054za7, "%allocate-thread", 16);
	      DEFINE_STRING(BGl_string2831z00zz__threadz00,
		BgL_bgl_string2831za700za7za7_3055za7,
		"Can't make instance of abstract classes", 39);
	      DEFINE_STRING(BGl_string2832z00zz__threadz00,
		BgL_bgl_string2832za700za7za7_3056za7, "_make-nothread-backend", 22);
	      DEFINE_STRING(BGl_string2833z00zz__threadz00,
		BgL_bgl_string2833za700za7za7_3057za7, "", 0);
	      DEFINE_STRING(BGl_string2834z00zz__threadz00,
		BgL_bgl_string2834za700za7za7_3058za7, "_make-nothread", 14);
	      DEFINE_STRING(BGl_string2835z00zz__threadz00,
		BgL_bgl_string2835za700za7za7_3059za7, "_fill-nothread!", 15);
	      DEFINE_STRING(BGl_string2836z00zz__threadz00,
		BgL_bgl_string2836za700za7za7_3060za7, "_nothread-body", 14);
	      DEFINE_STRING(BGl_string2837z00zz__threadz00,
		BgL_bgl_string2837za700za7za7_3061za7, "_nothread-%specific-set!", 24);
	      DEFINE_STRING(BGl_string2838z00zz__threadz00,
		BgL_bgl_string2838za700za7za7_3062za7, "_nothread-%specific", 19);
	      DEFINE_STRING(BGl_string2840z00zz__threadz00,
		BgL_bgl_string2840za700za7za7_3063za7, "_nothread-%cleanup", 18);
	      DEFINE_STRING(BGl_string2839z00zz__threadz00,
		BgL_bgl_string2839za700za7za7_3064za7, "_nothread-%cleanup-set!", 23);
	      DEFINE_STRING(BGl_string2841z00zz__threadz00,
		BgL_bgl_string2841za700za7za7_3065za7, "_nothread-end-result-set!", 25);
	      DEFINE_STRING(BGl_string2842z00zz__threadz00,
		BgL_bgl_string2842za700za7za7_3066za7, "_nothread-end-result", 20);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2nothreadzd2backendzd2envz80zz__threadz00,
		BgL_bgl__za752allocateza7d2n3067z00,
		BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2843z00zz__threadz00,
		BgL_bgl_string2843za700za7za7_3068za7, "_nothread-end-exception-set!", 28);
	      DEFINE_STRING(BGl_string2844z00zz__threadz00,
		BgL_bgl_string2844za700za7za7_3069za7, "_nothread-end-exception", 23);
	      DEFINE_STRING(BGl_string2845z00zz__threadz00,
		BgL_bgl_string2845za700za7za7_3070za7, "_fill-thread!", 13);
	      DEFINE_STRING(BGl_string2846z00zz__threadz00,
		BgL_bgl_string2846za700za7za7_3071za7, "_thread-name-set!", 17);
	      DEFINE_STRING(BGl_string2847z00zz__threadz00,
		BgL_bgl_string2847za700za7za7_3072za7, "_thread-name", 12);
	      DEFINE_STRING(BGl_string2848z00zz__threadz00,
		BgL_bgl_string2848za700za7za7_3073za7, "_thread-specific-set!", 21);
	      DEFINE_STRING(BGl_string2850z00zz__threadz00,
		BgL_bgl_string2850za700za7za7_3074za7, "_thread-cleanup-set!", 20);
	      DEFINE_STRING(BGl_string2849z00zz__threadz00,
		BgL_bgl_string2849za700za7za7_3075za7, "_thread-specific", 16);
	      DEFINE_STRING(BGl_string2851z00zz__threadz00,
		BgL_bgl_string2851za700za7za7_3076za7, "_thread-cleanup", 15);
	      DEFINE_STRING(BGl_string2852z00zz__threadz00,
		BgL_bgl_string2852za700za7za7_3077za7, "_make-thread-backend", 20);
	      DEFINE_STRING(BGl_string2853z00zz__threadz00,
		BgL_bgl_string2853za700za7za7_3078za7, "_fill-thread-backend!", 21);
	      DEFINE_STRING(BGl_string2854z00zz__threadz00,
		BgL_bgl_string2854za700za7za7_3079za7, "_thread-backend-name", 20);
	      DEFINE_STRING(BGl_string2855z00zz__threadz00,
		BgL_bgl_string2855za700za7za7_3080za7, "tb-make-thread", 14);
	      DEFINE_STRING(BGl_string2856z00zz__threadz00,
		BgL_bgl_string2856za700za7za7_3081za7, "tb-current-thread", 17);
	      DEFINE_STRING(BGl_string2857z00zz__threadz00,
		BgL_bgl_string2857za700za7za7_3082za7, "thread-initialize!", 18);
	      DEFINE_STRING(BGl_string2858z00zz__threadz00,
		BgL_bgl_string2858za700za7za7_3083za7, "thread-start!", 13);
	      DEFINE_STRING(BGl_string2860z00zz__threadz00,
		BgL_bgl_string2860za700za7za7_3084za7, "thread-join!", 12);
	      DEFINE_STRING(BGl_string2859z00zz__threadz00,
		BgL_bgl_string2859za700za7za7_3085za7, "thread-start-joinable!", 22);
	      DEFINE_STRING(BGl_string2861z00zz__threadz00,
		BgL_bgl_string2861za700za7za7_3086za7, "thread-terminate!", 17);
	      DEFINE_STRING(BGl_string2862z00zz__threadz00,
		BgL_bgl_string2862za700za7za7_3087za7, "thread-get-specific", 19);
	      DEFINE_STRING(BGl_string2863z00zz__threadz00,
		BgL_bgl_string2863za700za7za7_3088za7, "thread-set-specific!", 20);
	      DEFINE_STRING(BGl_string2864z00zz__threadz00,
		BgL_bgl_string2864za700za7za7_3089za7, "thread-get-cleanup", 18);
	      DEFINE_STRING(BGl_string2865z00zz__threadz00,
		BgL_bgl_string2865za700za7za7_3090za7, "thread-set-cleanup!", 19);
	      DEFINE_STRING(BGl_string2866z00zz__threadz00,
		BgL_bgl_string2866za700za7za7_3091za7, "%user-current-thread", 20);
	      DEFINE_STRING(BGl_string2867z00zz__threadz00,
		BgL_bgl_string2867za700za7za7_3092za7, "%user-thread-sleep!", 19);
	      DEFINE_STRING(BGl_string2868z00zz__threadz00,
		BgL_bgl_string2868za700za7za7_3093za7, "%user-thread-yield!", 19);
	extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
	   
		 
		DEFINE_STRING(BGl_string2869z00zz__threadz00,
		BgL_bgl_string2869za700za7za7_3094za7, "_tb-make-thread", 15);
	      DEFINE_STRING(BGl_string2871z00zz__threadz00,
		BgL_bgl_string2871za700za7za7_3095za7, "tb-make-thread-defau1945", 24);
	      DEFINE_STRING(BGl_string2872z00zz__threadz00,
		BgL_bgl_string2872za700za7za7_3096za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2873z00zz__threadz00,
		BgL_bgl_string2873za700za7za7_3097za7, "_tb-make-thread-defau1945", 25);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nothreadzd2nilzd2envz00zz__threadz00,
		BgL_bgl__nothreadza7d2nilza73098z00, BGl__nothreadzd2nilzd2zz__threadz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2874z00zz__threadz00,
		BgL_bgl_string2874za700za7za7_3099za7, "_tb-current-thread", 18);
	      DEFINE_STRING(BGl_string2876z00zz__threadz00,
		BgL_bgl_string2876za700za7za7_3100za7, "tb-current-thread-de1947", 24);
	      DEFINE_STRING(BGl_string2877z00zz__threadz00,
		BgL_bgl_string2877za700za7za7_3101za7, "_tb-current-thread-de1947", 25);
	      DEFINE_STRING(BGl_string2878z00zz__threadz00,
		BgL_bgl_string2878za700za7za7_3102za7, "_thread-initialize!", 19);
	      DEFINE_STRING(BGl_string2880z00zz__threadz00,
		BgL_bgl_string2880za700za7za7_3103za7, "_thread-start!", 14);
	      DEFINE_STRING(BGl_string2879z00zz__threadz00,
		BgL_bgl_string2879za700za7za7_3104za7, "_thread-initialize!-d1960", 25);
	      DEFINE_STRING(BGl_string2882z00zz__threadz00,
		BgL_bgl_string2882za700za7za7_3105za7, "thread-start!-defaul1962", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2conditionzd2variablezd2envzd2zz__threadz00,
		BgL_bgl__makeza7d2conditio3106za7, opt_generic_entry,
		BGl__makezd2conditionzd2variablez00zz__threadz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2yieldz12zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2yieldza73107z00, BGl__threadzd2yieldz12zc0zz__threadz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2883z00zz__threadz00,
		BgL_bgl_string2883za700za7za7_3108za7, "_thread-start!-defaul1962", 25);
	      DEFINE_STRING(BGl_string2884z00zz__threadz00,
		BgL_bgl_string2884za700za7za7_3109za7, "_thread-start-joinable!", 23);
	      DEFINE_STRING(BGl_string2886z00zz__threadz00,
		BgL_bgl_string2886za700za7za7_3110za7, "thread-start-joinabl1964", 24);
	      DEFINE_STRING(BGl_string2887z00zz__threadz00,
		BgL_bgl_string2887za700za7za7_3111za7, "_thread-start-joinabl1964", 25);
	      DEFINE_STRING(BGl_string2888z00zz__threadz00,
		BgL_bgl_string2888za700za7za7_3112za7, "_thread-join!", 13);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52userzd2threadzd2yieldz12zd21986zd2envz40zz__threadz00,
		BgL_bgl__za752userza7d2threa3113z00,
		BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STRING(BGl_string2900z00zz__threadz00,
		BgL_bgl_string2900za700za7za7_3114za7, "_thread-set-specific!", 21);
	      DEFINE_STRING(BGl_string2890z00zz__threadz00,
		BgL_bgl_string2890za700za7za7_3115za7, "thread-join!-default1967", 24);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2startz12zd2defaul1962zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2startza73116z00, va_generic_entry,
		BGl__threadzd2startz12zd2defaul1962z12zz__threadz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2891z00zz__threadz00,
		BgL_bgl_string2891za700za7za7_3117za7, "_thread-join!-default1967", 25);
	      DEFINE_STRING(BGl_string2902z00zz__threadz00,
		BgL_bgl_string2902za700za7za7_3118za7, "thread-set-specific!1973", 24);
	      DEFINE_STRING(BGl_string2892z00zz__threadz00,
		BgL_bgl_string2892za700za7za7_3119za7, "_thread-terminate!", 18);
	      DEFINE_STRING(BGl_string2903z00zz__threadz00,
		BgL_bgl_string2903za700za7za7_3120za7, "_thread-set-specific!1973", 25);
	      DEFINE_STRING(BGl_string2904z00zz__threadz00,
		BgL_bgl_string2904za700za7za7_3121za7, "_thread-get-cleanup", 19);
	      DEFINE_STRING(BGl_string2894z00zz__threadz00,
		BgL_bgl_string2894za700za7za7_3122za7, "thread-terminate!-de1969", 24);
	      DEFINE_STRING(BGl_string2895z00zz__threadz00,
		BgL_bgl_string2895za700za7za7_3123za7, "_thread-terminate!-de1969", 25);
	      DEFINE_STRING(BGl_string2906z00zz__threadz00,
		BgL_bgl_string2906za700za7za7_3124za7, "thread-get-cleanup-d1975", 24);
	      DEFINE_STRING(BGl_string2896z00zz__threadz00,
		BgL_bgl_string2896za700za7za7_3125za7, "_thread-get-specific", 20);
	      DEFINE_STRING(BGl_string2907z00zz__threadz00,
		BgL_bgl_string2907za700za7za7_3126za7, "_thread-get-cleanup-d1975", 25);
	      DEFINE_STRING(BGl_string2908z00zz__threadz00,
		BgL_bgl_string2908za700za7za7_3127za7, "_thread-set-cleanup!", 20);
	      DEFINE_STRING(BGl_string2898z00zz__threadz00,
		BgL_bgl_string2898za700za7za7_3128za7, "thread-get-specific-1971", 24);
	      DEFINE_STRING(BGl_string2910z00zz__threadz00,
		BgL_bgl_string2910za700za7za7_3129za7, "thread-set-cleanup!-1977", 24);
	      DEFINE_STRING(BGl_string2899z00zz__threadz00,
		BgL_bgl_string2899za700za7za7_3130za7, "_thread-get-specific-1971", 25);
	      DEFINE_STRING(BGl_string2911z00zz__threadz00,
		BgL_bgl_string2911za700za7za7_3131za7, "_thread-set-cleanup!-1977", 25);
	      DEFINE_STRING(BGl_string2912z00zz__threadz00,
		BgL_bgl_string2912za700za7za7_3132za7, "_%user-current-thread", 21);
	      DEFINE_STRING(BGl_string2913z00zz__threadz00,
		BgL_bgl_string2913za700za7za7_3133za7, "_%user-current-thread1982", 25);
	      DEFINE_STRING(BGl_string2914z00zz__threadz00,
		BgL_bgl_string2914za700za7za7_3134za7, "_%user-thread-sleep!", 20);
	      DEFINE_STRING(BGl_string2916z00zz__threadz00,
		BgL_bgl_string2916za700za7za7_3135za7, "thread-sleep!", 13);
	      DEFINE_STRING(BGl_string2917z00zz__threadz00,
		BgL_bgl_string2917za700za7za7_3136za7, "date, real, or integer", 22);
	      DEFINE_STRING(BGl_string2918z00zz__threadz00,
		BgL_bgl_string2918za700za7za7_3137za7, "_%user-thread-sleep!-1984", 25);
	      DEFINE_STRING(BGl_string2920z00zz__threadz00,
		BgL_bgl_string2920za700za7za7_3138za7, "_%user-thread-yield!-1986", 25);
	      DEFINE_STRING(BGl_string2919z00zz__threadz00,
		BgL_bgl_string2919za700za7za7_3139za7, "_%user-thread-yield!", 20);
	      DEFINE_STRING(BGl_string2924z00zz__threadz00,
		BgL_bgl_string2924za700za7za7_3140za7, "object-display", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2threadzd2backendz12zd2envzc0zz__threadz00,
		BgL_bgl__fillza7d2threadza7d3141z00,
		BGl__fillzd2threadzd2backendz12z12zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2926z00zz__threadz00,
		BgL_bgl_string2926za700za7za7_3142za7, "object-write", 12);
	      DEFINE_STRING(BGl_string2928z00zz__threadz00,
		BgL_bgl_string2928za700za7za7_3143za7, "object-print", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2nilzd2envzd2zz__threadz00,
		BgL_bgl__conditionza7d2var3144za7,
		BGl__conditionzd2variablezd2nilz00zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
		BgL_bgl__za752userza7d2threa3145z00,
		BGl__z52userzd2threadzd2yieldz12z40zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2938z00zz__threadz00,
		BgL_bgl_string2938za700za7za7_3146za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2940z00zz__threadz00,
		BgL_bgl_string2940za700za7za7_3147za7, "struct+object->object::object", 29);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
		BgL_bgl__za752userza7d2curre3148z00,
		BGl__z52userzd2currentzd2threadz52zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2envzf3zd2envzf3zz__threadz00,
		BgL_bgl__dynamicza7d2envza7f3149z00, BGl__dynamiczd2envzf3z21zz__threadz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2945z00zz__threadz00,
		BgL_bgl_string2945za700za7za7_3150za7, ">", 1);
	      DEFINE_STRING(BGl_string2946z00zz__threadz00,
		BgL_bgl_string2946za700za7za7_3151za7, ":", 1);
	      DEFINE_STRING(BGl_string2947z00zz__threadz00,
		BgL_bgl_string2947za700za7za7_3152za7, "#<", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2threadzd2envz52zz__threadz00,
		BgL_bgl__za752allocateza7d2t3153z00,
		BGl__z52allocatezd2threadz80zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2948z00zz__threadz00,
		BgL_bgl_string2948za700za7za7_3154za7, "__thread", 8);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00,
		BgL_bgl__threadza7d2getza7d23155z00,
		BGl__threadzd2getzd2cleanupz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2waitz12zd2envzc0zz__threadz00,
		BgL_bgl__conditionza7d2var3156za7, opt_generic_entry,
		BGl__conditionzd2variablezd2waitz12z12zz__threadz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2threadz12zd2envz12zz__threadz00,
		BgL_bgl__fillza7d2threadza713157z00, BGl__fillzd2threadz12zc0zz__threadz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2startz12zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2startza73158z00, va_generic_entry,
		BGl__threadzd2startz12zc0zz__threadz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
		BgL_bgl__tbza7d2currentza7d23159z00,
		BGl__tbzd2currentzd2threadz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00,
		BgL_bgl__threadza7d2getza7d23160z00,
		BGl__threadzd2getzd2specificz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl__currentza7d2threa3161za7,
		BGl__currentzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
		BgL_bgl__tbza7d2makeza7d2thr3162z00,
		BGl__tbzd2makezd2threadz00zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2threadzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2threadza7d3163z00, opt_generic_entry,
		BGl__makezd2threadzd2zz__threadz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2threadzd2backendzd2envz80zz__threadz00,
		BgL_bgl__za752allocateza7d2t3164z00,
		BGl__z52allocatezd2threadzd2backendz52zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nothreadzd2endzd2resultzd2envzd2zz__threadz00,
		BgL_bgl__nothreadza7d2endza73165z00,
		BGl__nothreadzd2endzd2resultz00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2setzd2specificz121973zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2setza7d23166z00,
		BGl__threadzd2setzd2specificz121973z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
		BgL_bgl__threadza7d2initia3167za7,
		BGl__threadzd2initializa7ez12z67zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2nothreadzd2envz52zz__threadz00,
		BgL_bgl__za752allocateza7d2n3168z00,
		BGl__z52allocatezd2nothreadz80zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2nilzd2envz00zz__threadz00,
		BgL_bgl__mutexza7d2nilza7d2za73169za7, BGl__mutexzd2nilzd2zz__threadz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2mutexzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2mutexza7d23170z00, opt_generic_entry,
		BGl__makezd2mutexzd2zz__threadz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2signalz12zd2envzc0zz__threadz00,
		BgL_bgl__conditionza7d2var3171za7,
		BGl__conditionzd2variablezd2signalz12z12zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2termin3172za7,
		BGl__threadzd2terminatez12zc0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2namezd2envz00zz__threadz00,
		BgL_bgl__threadza7d2nameza7d3173z00, BGl__threadzd2namezd2zz__threadz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl__defaultza7d2threa3174za7,
		BGl__defaultzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2startzd2joinabl1964zd2envzd2zz__threadz00,
		BgL_bgl__threadza7d2startza73175z00,
		BGl__threadzd2startzd2joinabl1964z00zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2specificzd2envz00zz__threadz00,
		BgL_bgl__threadza7d2specif3176za7, BGl__threadzd2specificzd2zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2nothreadz12zd2envz12zz__threadz00,
		BgL_bgl__fillza7d2nothread3177za7, BGl__fillzd2nothreadz12zc0zz__threadz00,
		0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_withzd2lockzd2envz00zz__threadz00,
		BgL_bgl__withza7d2lockza7d2za73178za7, BGl__withzd2lockzd2zz__threadz00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2specif3179za7,
		BGl__threadzd2specificzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2setzd2cleanupz12zd21977zd2envz12zz__threadz00,
		BgL_bgl__threadza7d2setza7d23180z00,
		BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezf3zd2envzf3zz__threadz00,
		BgL_bgl__conditionza7d2var3181za7,
		BGl__conditionzd2variablezf3z21zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tbzd2currentzd2threadzd2de1947zd2envz00zz__threadz00,
		BgL_bgl__tbza7d2currentza7d23182z00,
		BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2initializa7ez12zd2d1960zd2envz67zz__threadz00,
		BgL_bgl__threadza7d2initia3183za7,
		BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2namezd2setz12zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2nameza7d3184z00,
		BGl__threadzd2namezd2setz12z12zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_threadzd2cleanupzd2envz00zz__threadz00,
		BgL_bgl__threadza7d2cleanu3185za7, BGl__threadzd2cleanupzd2zz__threadz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2statezd2envz00zz__threadz00,
		BgL_bgl__mutexza7d2stateza7d3186z00, BGl__mutexzd2statezd2zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2nilzd2envz00zz__threadz00,
		BgL_bgl__threadza7d2nilza7d23187z00, BGl__threadzd2nilzd2zz__threadz00, 0L,
		BUNSPEC, 0);
	extern obj_t BGl_objectzd2writezd2envz00zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2backendzd2namezd2envzd2zz__threadz00,
		BgL_bgl__threadza7d2backen3188za7,
		BGl__threadzd2backendzd2namez00zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2dynamiczd2envzd2envzd2zz__threadz00,
		BgL_bgl__currentza7d2dynam3189za7,
		BGl__currentzd2dynamiczd2envz00zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nothreadzf3zd2envz21zz__threadz00,
		BgL_bgl__nothreadza7f3za7f3za73190za7, BGl__nothreadzf3zf3zz__threadz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl__makeza7d2threadza7d3191z00,
		BGl__makezd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzf3zd2envz21zz__threadz00,
		BgL_bgl__mutexza7f3za7f3za7za7__3192z00, BGl__mutexzf3zf3zz__threadz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_threadzd2terminatez12zd2de1969zd2envzc0zz__threadz00,
		BgL_bgl__threadza7d2termin3193za7,
		BGl__threadzd2terminatez12zd2de1969z12zz__threadz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long
		BgL_checksumz00_3428, char *BgL_fromz00_3429)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__threadz00))
				{
					BGl_requirezd2initializa7ationz75zz__threadz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__threadz00();
					BGl_importedzd2moduleszd2initz00zz__threadz00();
					BGl_objectzd2initzd2zz__threadz00();
					BGl_genericzd2initzd2zz__threadz00();
					BGl_methodzd2initzd2zz__threadz00();
					BGl_toplevelzd2initzd2zz__threadz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			BGl_symbol2778z00zz__threadz00 =
				bstring_to_symbol(BGl_string2779z00zz__threadz00);
			BGl_symbol2785z00zz__threadz00 =
				bstring_to_symbol(BGl_string2786z00zz__threadz00);
			BGl_symbol2793z00zz__threadz00 =
				bstring_to_symbol(BGl_string2794z00zz__threadz00);
			BGl_symbol2800z00zz__threadz00 =
				bstring_to_symbol(BGl_string2774z00zz__threadz00);
			BGl_symbol2801z00zz__threadz00 =
				bstring_to_symbol(BGl_string2802z00zz__threadz00);
			BGl_symbol2804z00zz__threadz00 =
				bstring_to_symbol(BGl_string2805z00zz__threadz00);
			BGl_symbol2807z00zz__threadz00 =
				bstring_to_symbol(BGl_string2808z00zz__threadz00);
			BGl_list2806z00zz__threadz00 =
				MAKE_PAIR(BGl_symbol2807z00zz__threadz00,
				MAKE_PAIR(BGl_symbol2778z00zz__threadz00, BNIL));
			BGl_list2803z00zz__threadz00 =
				MAKE_PAIR(BGl_symbol2804z00zz__threadz00,
				MAKE_PAIR(BGl_list2806z00zz__threadz00, BNIL));
			BGl_symbol2809z00zz__threadz00 =
				bstring_to_symbol(BGl_string2810z00zz__threadz00);
			BGl_symbol2811z00zz__threadz00 =
				bstring_to_symbol(BGl_string2812z00zz__threadz00);
			BGl_symbol2815z00zz__threadz00 =
				bstring_to_symbol(BGl_string2771z00zz__threadz00);
			BGl_symbol2816z00zz__threadz00 =
				bstring_to_symbol(BGl_string2817z00zz__threadz00);
			BGl_symbol2818z00zz__threadz00 =
				bstring_to_symbol(BGl_string2819z00zz__threadz00);
			BGl_symbol2820z00zz__threadz00 =
				bstring_to_symbol(BGl_string2821z00zz__threadz00);
			BGl_symbol2822z00zz__threadz00 =
				bstring_to_symbol(BGl_string2823z00zz__threadz00);
			BGl_symbol2824z00zz__threadz00 =
				bstring_to_symbol(BGl_string2825z00zz__threadz00);
			BGl_symbol2826z00zz__threadz00 =
				bstring_to_symbol(BGl_string2827z00zz__threadz00);
			BGl_symbol2828z00zz__threadz00 =
				bstring_to_symbol(BGl_string2829z00zz__threadz00);
			BGl_symbol2870z00zz__threadz00 =
				bstring_to_symbol(BGl_string2871z00zz__threadz00);
			BGl_symbol2875z00zz__threadz00 =
				bstring_to_symbol(BGl_string2876z00zz__threadz00);
			BGl_symbol2881z00zz__threadz00 =
				bstring_to_symbol(BGl_string2882z00zz__threadz00);
			BGl_symbol2885z00zz__threadz00 =
				bstring_to_symbol(BGl_string2886z00zz__threadz00);
			BGl_symbol2889z00zz__threadz00 =
				bstring_to_symbol(BGl_string2890z00zz__threadz00);
			BGl_symbol2893z00zz__threadz00 =
				bstring_to_symbol(BGl_string2894z00zz__threadz00);
			BGl_symbol2897z00zz__threadz00 =
				bstring_to_symbol(BGl_string2898z00zz__threadz00);
			BGl_symbol2901z00zz__threadz00 =
				bstring_to_symbol(BGl_string2902z00zz__threadz00);
			BGl_symbol2905z00zz__threadz00 =
				bstring_to_symbol(BGl_string2906z00zz__threadz00);
			BGl_symbol2909z00zz__threadz00 =
				bstring_to_symbol(BGl_string2910z00zz__threadz00);
			return (BGl_symbol2915z00zz__threadz00 =
				bstring_to_symbol(BGl_string2916z00zz__threadz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 233 */
				BgL_nothreadzd2backendzd2_bglt BgL_res2525z00_1728;

				{	/* Llib/thread.scm 233 */
					BgL_nothreadzd2backendzd2_bglt BgL_new1868z00_1718;

					{	/* Llib/thread.scm 233 */
						BgL_nothreadzd2backendzd2_bglt BgL_res2523z00_1723;

						{	/* Llib/thread.scm 233 */
							BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1719;

							BgL_new1874z00_1719 =
								((BgL_nothreadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nothreadzd2backendzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1874z00_1719),
								BGl_classzd2numzd2zz__objectz00
								(BGl_nothreadzd2backendzd2zz__threadz00));
							{	/* Llib/thread.scm 233 */
								BgL_objectz00_bglt BgL_auxz00_3475;

								BgL_auxz00_3475 = (BgL_objectz00_bglt) (BgL_new1874z00_1719);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3475, BFALSE);
							}
							BgL_res2523z00_1723 = BgL_new1874z00_1719;
						}
						BgL_new1868z00_1718 = BgL_res2523z00_1723;
					}
					{	/* Llib/thread.scm 233 */
						BgL_nothreadzd2backendzd2_bglt BgL_res2524z00_1727;

						{	/* Llib/thread.scm 233 */
							BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1724;

							BgL_new1871z00_1724 = BgL_new1868z00_1718;
							{	/* Llib/thread.scm 233 */
								obj_t BgL_name1870z00_1726;

								BgL_name1870z00_1726 = BGl_string2771z00zz__threadz00;
								((((BgL_nothreadzd2backendzd2_bglt) CREF(BgL_new1871z00_1724))->
										BgL_namez00) = ((obj_t) BgL_name1870z00_1726), BUNSPEC);
								BgL_res2524z00_1727 = BgL_new1871z00_1724;
						}} BgL_res2524z00_1727;
					}
					BgL_res2525z00_1728 = BgL_new1868z00_1718;
				}
				BGl_za2nothreadzd2backendza2zd2zz__threadz00 = BgL_res2525z00_1728;
			}
			{	/* Llib/thread.scm 240 */
				obj_t BgL_list2040z00_888;

				BgL_list2040z00_888 =
					MAKE_PAIR(
					(obj_t) (BGl_za2nothreadzd2backendza2zd2zz__threadz00), BNIL);
				BGl_za2threadzd2backendsza2zd2zz__threadz00 = BgL_list2040z00_888;
			}
			BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BFALSE;
			BGl_za2mutexzd2nilza2zd2zz__threadz00 = bgl_make_nil_mutex();
			return (BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 =
				bgl_make_nil_condvar(), BUNSPEC);
		}
	}



/* dynamic-env? */
	BGL_EXPORTED_DEF bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 220 */
			return BGL_DYNAMIC_ENVP(BgL_objz00_1);
		}
	}



/* _dynamic-env? */
	obj_t BGl__dynamiczd2envzf3z21zz__threadz00(obj_t BgL_envz00_2773,
		obj_t BgL_objz00_2774)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 220 */
			return BBOOL(BGL_DYNAMIC_ENVP(BgL_objz00_2774));
		}
	}



/* current-dynamic-env */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 226 */
			return BGL_CURRENT_DYNAMIC_ENV();
		}
	}



/* _current-dynamic-env */
	obj_t BGl__currentzd2dynamiczd2envz00zz__threadz00(obj_t BgL_envz00_2775)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 226 */
			return BGL_CURRENT_DYNAMIC_ENV();
		}
	}



/* current-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 245 */
			return BGL_THREAD_BACKEND();
		}
	}



/* _current-thread-backend */
	obj_t BGl__currentzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2776)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 245 */
			return BGL_THREAD_BACKEND();
		}
	}



/* current-thread-backend-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_2)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 251 */
			{	/* Llib/thread.scm 252 */
				obj_t BgL_auxz00_3490;

				BgL_auxz00_3490 = (obj_t) (BgL_tbz00_2);
				BGL_THREAD_BACKEND_SET(BgL_auxz00_3490);
			}
			BUNSPEC;
			return (obj_t) (BgL_tbz00_2);
		}
	}



/* _current-thread-backend-set! */
	obj_t BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t
		BgL_envz00_2777, obj_t BgL_tbz00_2778)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 251 */
			{	/* Llib/thread.scm 253 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_3494;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2778,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 253 */
						BgL_auxz00_3494 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2778);
					}
				else
					{
						obj_t BgL_auxz00_3498;

						BgL_auxz00_3498 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 9678)), BGl_string2773z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_tbz00_2778);
						FAILURE(BgL_auxz00_3498, BFALSE, BFALSE);
					}
				return
					BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
					(BgL_auxz00_3494);
			}
		}
	}



/* default-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 258 */
			return CAR(BGl_za2threadzd2backendsza2zd2zz__threadz00);
		}
	}



/* _default-thread-backend */
	obj_t BGl__defaultzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2779)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 258 */
			return BGl_defaultzd2threadzd2backendz00zz__threadz00();
		}
	}



/* default-thread-backend-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_3)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 264 */
			BGl_za2threadzd2backendsza2zd2zz__threadz00 =
				bgl_remq_bang(
				(obj_t) (BgL_tbz00_3), BGl_za2threadzd2backendsza2zd2zz__threadz00);
			return (BGl_za2threadzd2backendsza2zd2zz__threadz00 =
				MAKE_PAIR(
					(obj_t) (BgL_tbz00_3), BGl_za2threadzd2backendsza2zd2zz__threadz00),
				BUNSPEC);
		}
	}



/* _default-thread-backend-set! */
	obj_t BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t
		BgL_envz00_2780, obj_t BgL_tbz00_2781)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 264 */
			{	/* Llib/thread.scm 266 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_3509;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2781,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 266 */
						BgL_auxz00_3509 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2781);
					}
				else
					{
						obj_t BgL_auxz00_3513;

						BgL_auxz00_3513 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 10347)), BGl_string2775z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_tbz00_2781);
						FAILURE(BgL_auxz00_3513, BFALSE, BFALSE);
					}
				return
					BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
					(BgL_auxz00_3509);
			}
		}
	}



/* get-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t
		BgL_namez00_4)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 271 */
			{
				obj_t BgL_tbsz00_890;

				BgL_tbsz00_890 = BGl_za2threadzd2backendsza2zd2zz__threadz00;
			BgL_zc3anonymousza32041ze3z83_891:
				if (PAIRP(BgL_tbsz00_890))
					{	/* Llib/thread.scm 274 */
						bool_t BgL_testz00_3520;

						{	/* Llib/thread.scm 274 */
							obj_t BgL_arg2045z00_895;

							{
								BgL_threadzd2backendzd2_bglt BgL_auxz00_3521;

								BgL_auxz00_3521 =
									(BgL_threadzd2backendzd2_bglt) (CAR(BgL_tbsz00_890));
								BgL_arg2045z00_895 =
									(((BgL_threadzd2backendzd2_bglt) CREF(BgL_auxz00_3521))->
									BgL_namez00);
							}
							BgL_testz00_3520 =
								bigloo_strcmp(BgL_arg2045z00_895, BgL_namez00_4);
						}
						if (BgL_testz00_3520)
							{	/* Llib/thread.scm 274 */
								return CAR(BgL_tbsz00_890);
							}
						else
							{
								obj_t BgL_tbsz00_3527;

								BgL_tbsz00_3527 = CDR(BgL_tbsz00_890);
								BgL_tbsz00_890 = BgL_tbsz00_3527;
								goto BgL_zc3anonymousza32041ze3z83_891;
							}
					}
				else
					{	/* Llib/thread.scm 273 */
						return BFALSE;
					}
			}
		}
	}



/* _get-thread-backend */
	obj_t BGl__getzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2782,
		obj_t BgL_namez00_2783)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 271 */
			{	/* Llib/thread.scm 273 */
				obj_t BgL_auxz00_3529;

				if (STRINGP(BgL_namez00_2783))
					{	/* Llib/thread.scm 273 */
						BgL_auxz00_3529 = BgL_namez00_2783;
					}
				else
					{
						obj_t BgL_auxz00_3532;

						BgL_auxz00_3532 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 10652)), BGl_string2776z00zz__threadz00,
							BGl_string2777z00zz__threadz00, BgL_namez00_2783);
						FAILURE(BgL_auxz00_3532, BFALSE, BFALSE);
					}
				return BGl_getzd2threadzd2backendz00zz__threadz00(BgL_auxz00_3529);
			}
		}
	}



/* _make-thread */
	obj_t BGl__makezd2threadzd2zz__threadz00(obj_t BgL_envz00_53,
		obj_t BgL_optz00_52)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 380 */
			{	/* Llib/thread.scm 380 */
				obj_t BgL_g1979z00_3237;

				BgL_g1979z00_3237 = VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
				{	/* Llib/thread.scm 380 */
					int BgL_aux1981z00_3238;

					BgL_aux1981z00_3238 = VECTOR_LENGTH(BgL_optz00_52);
					switch ((long) (BgL_aux1981z00_3238))
						{
						case ((long) 1):

							{	/* Llib/thread.scm 380 */
								obj_t BgL_namez00_3239;

								BgL_namez00_3239 =
									BGl_gensymz00zz__r4_symbols_6_4z00
									(BGl_symbol2778z00zz__threadz00);
								{	/* Llib/thread.scm 380 */

									{	/* Llib/thread.scm 380 */
										obj_t BgL_arg2048z00_3240;

										BgL_arg2048z00_3240 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
										{	/* Llib/thread.scm 380 */
											BgL_threadz00_bglt BgL_res2527z00_3241;

											{	/* Llib/thread.scm 380 */
												obj_t BgL_bodyz00_3242;

												if (PROCEDUREP(BgL_arg2048z00_3240))
													{	/* Llib/thread.scm 380 */
														BgL_bodyz00_3242 = BgL_arg2048z00_3240;
													}
												else
													{
														obj_t BgL_auxz00_3545;

														BgL_auxz00_3545 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2772z00zz__threadz00,
															BINT(((long) 16199)),
															BGl_string2780z00zz__threadz00,
															BGl_string2781z00zz__threadz00,
															BgL_arg2048z00_3240);
														FAILURE(BgL_auxz00_3545, BFALSE, BFALSE);
													}
												{	/* Llib/thread.scm 380 */
													obj_t BgL_arg2052z00_3243;

													BgL_arg2052z00_3243 =
														BGl_defaultzd2threadzd2backendz00zz__threadz00();
													{	/* Llib/thread.scm 380 */
														BgL_threadzd2backendzd2_bglt BgL_auxz00_3550;

														if (BGl_iszd2azf3z21zz__objectz00
															(BgL_arg2052z00_3243,
																BGl_threadzd2backendzd2zz__threadz00))
															{	/* Llib/thread.scm 380 */
																BgL_auxz00_3550 =
																	(BgL_threadzd2backendzd2_bglt)
																	(BgL_arg2052z00_3243);
															}
														else
															{
																obj_t BgL_auxz00_3554;

																BgL_auxz00_3554 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2772z00zz__threadz00,
																	BINT(((long) 16199)),
																	BGl_string2780z00zz__threadz00,
																	BGl_string2774z00zz__threadz00,
																	BgL_arg2052z00_3243);
																FAILURE(BgL_auxz00_3554, BFALSE, BFALSE);
															}
														BgL_res2527z00_3241 =
															BGl_tbzd2makezd2threadz00zz__threadz00
															(BgL_auxz00_3550, BgL_bodyz00_3242,
															BgL_namez00_3239);
											}}}
											return (obj_t) (BgL_res2527z00_3241);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/thread.scm 380 */
								obj_t BgL_namez00_3244;

								BgL_namez00_3244 =
									VECTOR_REF(BgL_optz00_52, (int) (((long) 1)));
								{	/* Llib/thread.scm 380 */

									{	/* Llib/thread.scm 380 */
										obj_t BgL_arg2051z00_3245;

										BgL_arg2051z00_3245 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
										{	/* Llib/thread.scm 380 */
											BgL_threadz00_bglt BgL_res2528z00_3246;

											{	/* Llib/thread.scm 380 */
												obj_t BgL_bodyz00_3247;

												if (PROCEDUREP(BgL_arg2051z00_3245))
													{	/* Llib/thread.scm 380 */
														BgL_bodyz00_3247 = BgL_arg2051z00_3245;
													}
												else
													{
														obj_t BgL_auxz00_3566;

														BgL_auxz00_3566 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2772z00zz__threadz00,
															BINT(((long) 16199)),
															BGl_string2780z00zz__threadz00,
															BGl_string2781z00zz__threadz00,
															BgL_arg2051z00_3245);
														FAILURE(BgL_auxz00_3566, BFALSE, BFALSE);
													}
												{	/* Llib/thread.scm 380 */
													obj_t BgL_arg2052z00_3248;

													BgL_arg2052z00_3248 =
														BGl_defaultzd2threadzd2backendz00zz__threadz00();
													{	/* Llib/thread.scm 380 */
														BgL_threadzd2backendzd2_bglt BgL_auxz00_3571;

														if (BGl_iszd2azf3z21zz__objectz00
															(BgL_arg2052z00_3248,
																BGl_threadzd2backendzd2zz__threadz00))
															{	/* Llib/thread.scm 380 */
																BgL_auxz00_3571 =
																	(BgL_threadzd2backendzd2_bglt)
																	(BgL_arg2052z00_3248);
															}
														else
															{
																obj_t BgL_auxz00_3575;

																BgL_auxz00_3575 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2772z00zz__threadz00,
																	BINT(((long) 16199)),
																	BGl_string2780z00zz__threadz00,
																	BGl_string2774z00zz__threadz00,
																	BgL_arg2052z00_3248);
																FAILURE(BgL_auxz00_3575, BFALSE, BFALSE);
															}
														BgL_res2528z00_3246 =
															BGl_tbzd2makezd2threadz00zz__threadz00
															(BgL_auxz00_3571, BgL_bodyz00_3247,
															BgL_namez00_3244);
											}}}
											return (obj_t) (BgL_res2528z00_3246);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* make-thread */
	BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t
		BgL_bodyz00_50, obj_t BgL_namez00_51)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 380 */
			{	/* Llib/thread.scm 381 */
				obj_t BgL_arg2052z00_3251;

				BgL_arg2052z00_3251 = BGl_defaultzd2threadzd2backendz00zz__threadz00();
				return
					BGl_tbzd2makezd2threadz00zz__threadz00(
					(BgL_threadzd2backendzd2_bglt) (BgL_arg2052z00_3251), BgL_bodyz00_50,
					BgL_namez00_51);
			}
		}
	}



/* %current-thread */
	obj_t BGl_z52currentzd2threadz80zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 392 */
			{	/* Llib/thread.scm 393 */
				obj_t BgL_tbz00_907;

				BgL_tbz00_907 = BGL_THREAD_BACKEND();
				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_907,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 395 */
						BgL_threadzd2backendzd2_bglt BgL_tbz00_1757;

						BgL_tbz00_1757 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_907);
						{	/* Llib/thread.scm 395 */
							obj_t BgL_method1949z00_1758;

							{	/* Llib/thread.scm 395 */
								BgL_objectz00_bglt BgL_objz00_1759;

								BgL_objz00_1759 = (BgL_objectz00_bglt) (BgL_tbz00_1757);
								{	/* Llib/thread.scm 395 */
									long BgL_objzd2classzd2numz00_1760;

									BgL_objzd2classzd2numz00_1760 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1759);
									{	/* Llib/thread.scm 395 */
										obj_t BgL_arg2518z00_1761;

										BgL_arg2518z00_1761 =
											PROCEDURE_REF
											(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
											(int) (((long) 1)));
										{	/* Llib/thread.scm 395 */
											obj_t BgL_arrayz00_1763;

											int BgL_offsetz00_1764;

											BgL_arrayz00_1763 = BgL_arg2518z00_1761;
											BgL_offsetz00_1764 =
												(int) (BgL_objzd2classzd2numz00_1760);
											{	/* Llib/thread.scm 395 */
												long BgL_offsetz00_1765;

												BgL_offsetz00_1765 =
													((long) (BgL_offsetz00_1764) - OBJECT_TYPE);
												{	/* Llib/thread.scm 395 */
													long BgL_modz00_1766;

													{	/* Llib/thread.scm 395 */
														int BgL_arg2520z00_1767;

														BgL_arg2520z00_1767 = (int) (((long) 16));
														{	/* Llib/thread.scm 395 */
															long BgL_auxz00_3598;

															BgL_auxz00_3598 = (long) (BgL_arg2520z00_1767);
															BgL_modz00_1766 =
																(BgL_offsetz00_1765 / BgL_auxz00_3598);
													}}
													{	/* Llib/thread.scm 395 */
														long BgL_restz00_1768;

														{	/* Llib/thread.scm 395 */
															int BgL_arg2519z00_1769;

															BgL_arg2519z00_1769 = (int) (((long) 16));
															{	/* Llib/thread.scm 395 */
																long BgL_auxz00_3602;

																BgL_auxz00_3602 = (long) (BgL_arg2519z00_1769);
																BgL_restz00_1768 =
																	(BgL_offsetz00_1765 % BgL_auxz00_3602);
														}}
														{	/* Llib/thread.scm 395 */

															BgL_method1949z00_1758 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1763,
																	(int) (BgL_modz00_1766)),
																(int) (BgL_restz00_1768));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method1949z00_1758) (BgL_method1949z00_1758,
								(obj_t) (BgL_tbz00_1757), BEOA);
						}
					}
				else
					{	/* Llib/thread.scm 394 */
						return BFALSE;
					}
			}
		}
	}



/* current-thread */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 400 */
			{	/* Llib/thread.scm 401 */
				obj_t BgL_thz00_909;

				BgL_thz00_909 = BGl_z52currentzd2threadz80zz__threadz00();
				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_909,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 403 */
						BgL_threadz00_bglt BgL_oz00_1784;

						BgL_oz00_1784 = (BgL_threadz00_bglt) (BgL_thz00_909);
						{	/* Llib/thread.scm 403 */
							obj_t BgL_method1983z00_1785;

							{	/* Llib/thread.scm 403 */
								BgL_objectz00_bglt BgL_objz00_1786;

								BgL_objz00_1786 = (BgL_objectz00_bglt) (BgL_oz00_1784);
								{	/* Llib/thread.scm 403 */
									long BgL_objzd2classzd2numz00_1787;

									BgL_objzd2classzd2numz00_1787 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1786);
									{	/* Llib/thread.scm 403 */
										obj_t BgL_arg2518z00_1788;

										BgL_arg2518z00_1788 =
											PROCEDURE_REF
											(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
											(int) (((long) 1)));
										{	/* Llib/thread.scm 403 */
											obj_t BgL_arrayz00_1790;

											int BgL_offsetz00_1791;

											BgL_arrayz00_1790 = BgL_arg2518z00_1788;
											BgL_offsetz00_1791 =
												(int) (BgL_objzd2classzd2numz00_1787);
											{	/* Llib/thread.scm 403 */
												long BgL_offsetz00_1792;

												BgL_offsetz00_1792 =
													((long) (BgL_offsetz00_1791) - OBJECT_TYPE);
												{	/* Llib/thread.scm 403 */
													long BgL_modz00_1793;

													{	/* Llib/thread.scm 403 */
														int BgL_arg2520z00_1794;

														BgL_arg2520z00_1794 = (int) (((long) 16));
														{	/* Llib/thread.scm 403 */
															long BgL_auxz00_3624;

															BgL_auxz00_3624 = (long) (BgL_arg2520z00_1794);
															BgL_modz00_1793 =
																(BgL_offsetz00_1792 / BgL_auxz00_3624);
													}}
													{	/* Llib/thread.scm 403 */
														long BgL_restz00_1795;

														{	/* Llib/thread.scm 403 */
															int BgL_arg2519z00_1796;

															BgL_arg2519z00_1796 = (int) (((long) 16));
															{	/* Llib/thread.scm 403 */
																long BgL_auxz00_3628;

																BgL_auxz00_3628 = (long) (BgL_arg2519z00_1796);
																BgL_restz00_1795 =
																	(BgL_offsetz00_1792 % BgL_auxz00_3628);
														}}
														{	/* Llib/thread.scm 403 */

															BgL_method1983z00_1785 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1790,
																	(int) (BgL_modz00_1793)),
																(int) (BgL_restz00_1795));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method1983z00_1785) (BgL_method1983z00_1785,
								(obj_t) (BgL_oz00_1784), BEOA);
						}
					}
				else
					{	/* Llib/thread.scm 402 */
						return BFALSE;
					}
			}
		}
	}



/* _current-thread */
	obj_t BGl__currentzd2threadzd2zz__threadz00(obj_t BgL_envz00_2786)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 400 */
			return BGl_currentzd2threadzd2zz__threadz00();
		}
	}



/* thread-sleep! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t
		BgL_objz00_60)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 429 */
			{	/* Llib/thread.scm 430 */
				obj_t BgL_arg2055z00_3252;

				BgL_arg2055z00_3252 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(
					(BgL_threadz00_bglt) (BgL_arg2055z00_3252), BgL_objz00_60);
			}
		}
	}



/* _thread-sleep! */
	obj_t BGl__threadzd2sleepz12zc0zz__threadz00(obj_t BgL_envz00_2789,
		obj_t BgL_objz00_2790)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 429 */
			{	/* Llib/thread.scm 430 */
				obj_t BgL_arg2055z00_3254;

				BgL_arg2055z00_3254 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(
					(BgL_threadz00_bglt) (BgL_arg2055z00_3254), BgL_objz00_2790);
			}
		}
	}



/* thread-yield! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2yieldz12zc0zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 441 */
			{	/* Llib/thread.scm 442 */
				obj_t BgL_arg2056z00_3255;

				BgL_arg2056z00_3255 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(
					(BgL_threadz00_bglt) (BgL_arg2056z00_3255));
			}
		}
	}



/* _thread-yield! */
	obj_t BGl__threadzd2yieldz12zc0zz__threadz00(obj_t BgL_envz00_2791)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 441 */
			{	/* Llib/thread.scm 442 */
				obj_t BgL_arg2056z00_3256;

				BgL_arg2056z00_3256 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(
					(BgL_threadz00_bglt) (BgL_arg2056z00_3256));
			}
		}
	}



/* thread-parameter */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t
		BgL_idz00_63)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 447 */
			{	/* Llib/thread.scm 448 */
				obj_t BgL_cz00_1812;

				{	/* Llib/thread.scm 448 */
					obj_t BgL_arg2058z00_1813;

					BgL_arg2058z00_1813 = BGL_PARAMETERS();
					BgL_cz00_1812 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_63,
						BgL_arg2058z00_1813);
				}
				if (PAIRP(BgL_cz00_1812))
					{	/* Llib/thread.scm 448 */
						return CDR(BgL_cz00_1812);
					}
				else
					{	/* Llib/thread.scm 448 */
						return BFALSE;
					}
			}
		}
	}



/* _thread-parameter */
	obj_t BGl__threadzd2parameterzd2zz__threadz00(obj_t BgL_envz00_2792,
		obj_t BgL_idz00_2793)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 447 */
			{	/* Llib/thread.scm 448 */
				obj_t BgL_auxz00_3656;

				if (SYMBOLP(BgL_idz00_2793))
					{	/* Llib/thread.scm 448 */
						BgL_auxz00_3656 = BgL_idz00_2793;
					}
				else
					{
						obj_t BgL_auxz00_3659;

						BgL_auxz00_3659 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 19208)), BGl_string2782z00zz__threadz00,
							BGl_string2783z00zz__threadz00, BgL_idz00_2793);
						FAILURE(BgL_auxz00_3659, BFALSE, BFALSE);
					}
				return BGl_threadzd2parameterzd2zz__threadz00(BgL_auxz00_3656);
			}
		}
	}



/* thread-parameter-set! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t
		BgL_idz00_64, obj_t BgL_valz00_65)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 456 */
			{	/* Llib/thread.scm 457 */
				obj_t BgL_cz00_1817;

				{	/* Llib/thread.scm 457 */
					obj_t BgL_arg2063z00_1818;

					BgL_arg2063z00_1818 = BGL_PARAMETERS();
					BgL_cz00_1817 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_64,
						BgL_arg2063z00_1818);
				}
				if (PAIRP(BgL_cz00_1817))
					{	/* Llib/thread.scm 457 */
						return SET_CDR(BgL_cz00_1817, BgL_valz00_65);
					}
				else
					{	/* Llib/thread.scm 457 */
						{	/* Llib/thread.scm 457 */
							obj_t BgL_arg2060z00_1820;

							{	/* Llib/thread.scm 457 */
								obj_t BgL_arg2061z00_1821;

								obj_t BgL_arg2062z00_1822;

								BgL_arg2061z00_1821 = MAKE_PAIR(BgL_idz00_64, BgL_valz00_65);
								BgL_arg2062z00_1822 = BGL_PARAMETERS();
								BgL_arg2060z00_1820 =
									MAKE_PAIR(BgL_arg2061z00_1821, BgL_arg2062z00_1822);
							}
							BGL_PARAMETERS_SET(BgL_arg2060z00_1820);
						}
						return BgL_valz00_65;
					}
			}
		}
	}



/* _thread-parameter-set! */
	obj_t BGl__threadzd2parameterzd2setz12z12zz__threadz00(obj_t BgL_envz00_2794,
		obj_t BgL_idz00_2795, obj_t BgL_valz00_2796)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 456 */
			{	/* Llib/thread.scm 457 */
				obj_t BgL_auxz00_3673;

				if (SYMBOLP(BgL_idz00_2795))
					{	/* Llib/thread.scm 457 */
						BgL_auxz00_3673 = BgL_idz00_2795;
					}
				else
					{
						obj_t BgL_auxz00_3676;

						BgL_auxz00_3676 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 19555)), BGl_string2784z00zz__threadz00,
							BGl_string2783z00zz__threadz00, BgL_idz00_2795);
						FAILURE(BgL_auxz00_3676, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2parameterzd2setz12z12zz__threadz00(BgL_auxz00_3673,
					BgL_valz00_2796);
			}
		}
	}



/* mutex? */
	BGL_EXPORTED_DEF bool_t BGl_mutexzf3zf3zz__threadz00(obj_t BgL_objz00_78)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 531 */
			return BGL_MUTEXP(BgL_objz00_78);
		}
	}



/* _mutex? */
	obj_t BGl__mutexzf3zf3zz__threadz00(obj_t BgL_envz00_2797,
		obj_t BgL_objz00_2798)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 531 */
			return BBOOL(BGL_MUTEXP(BgL_objz00_2798));
		}
	}



/* _make-mutex */
	obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t BgL_envz00_81,
		obj_t BgL_optz00_80)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 537 */
			{	/* Llib/thread.scm 537 */

				{	/* Llib/thread.scm 537 */
					int BgL_aux2005z00_3258;

					BgL_aux2005z00_3258 = VECTOR_LENGTH(BgL_optz00_80);
					switch ((long) (BgL_aux2005z00_3258))
						{
						case ((long) 0):

							{	/* Llib/thread.scm 537 */
								obj_t BgL_namez00_3259;

								BgL_namez00_3259 =
									BGl_gensymz00zz__r4_symbols_6_4z00
									(BGl_symbol2785z00zz__threadz00);
								{	/* Llib/thread.scm 537 */

									return bgl_make_mutex(BgL_namez00_3259);
								}
							}
							break;
						case ((long) 1):

							{	/* Llib/thread.scm 537 */
								obj_t BgL_namez00_3260;

								BgL_namez00_3260 =
									VECTOR_REF(BgL_optz00_80, (int) (((long) 0)));
								{	/* Llib/thread.scm 537 */

									return bgl_make_mutex(BgL_namez00_3260);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* make-mutex */
	BGL_EXPORTED_DEF obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t BgL_namez00_79)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 537 */
			return bgl_make_mutex(BgL_namez00_79);
		}
	}



/* mutex-nil */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2nilzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 544 */
			return BGl_za2mutexzd2nilza2zd2zz__threadz00;
		}
	}



/* _mutex-nil */
	obj_t BGl__mutexzd2nilzd2zz__threadz00(obj_t BgL_envz00_2799)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 544 */
			return BGl_za2mutexzd2nilza2zd2zz__threadz00;
		}
	}



/* mutex-name */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t BgL_objz00_82)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 549 */
			return BGL_MUTEX_NAME(BgL_objz00_82);
		}
	}



/* _mutex-name */
	obj_t BGl__mutexzd2namezd2zz__threadz00(obj_t BgL_envz00_2800,
		obj_t BgL_objz00_2801)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 549 */
			{	/* Llib/thread.scm 550 */
				obj_t BgL_objz00_3261;

				if (BGL_MUTEXP(BgL_objz00_2801))
					{	/* Llib/thread.scm 550 */
						BgL_objz00_3261 = BgL_objz00_2801;
					}
				else
					{
						obj_t BgL_auxz00_3696;

						BgL_auxz00_3696 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 23759)), BGl_string2787z00zz__threadz00,
							BGl_string2786z00zz__threadz00, BgL_objz00_2801);
						FAILURE(BgL_auxz00_3696, BFALSE, BFALSE);
					}
				return BGL_MUTEX_NAME(BgL_objz00_3261);
			}
		}
	}



/* _mutex-lock! */
	obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t BgL_envz00_86,
		obj_t BgL_optz00_85)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 555 */
			{	/* Llib/thread.scm 555 */
				obj_t BgL_g2006z00_3262;

				BgL_g2006z00_3262 = VECTOR_REF(BgL_optz00_85, (int) (((long) 0)));
				{	/* Llib/thread.scm 555 */
					int BgL_aux2008z00_3263;

					BgL_aux2008z00_3263 = VECTOR_LENGTH(BgL_optz00_85);
					switch ((long) (BgL_aux2008z00_3263))
						{
						case ((long) 1):

							{	/* Llib/thread.scm 555 */

								{	/* Llib/thread.scm 555 */
									obj_t BgL_arg2066z00_3264;

									BgL_arg2066z00_3264 =
										VECTOR_REF(BgL_optz00_85, (int) (((long) 0)));
									{	/* Llib/thread.scm 555 */
										obj_t BgL_mz00_3265;

										if (BGL_MUTEXP(BgL_arg2066z00_3264))
											{	/* Llib/thread.scm 555 */
												BgL_mz00_3265 = BgL_arg2066z00_3264;
											}
										else
											{
												obj_t BgL_auxz00_3708;

												BgL_auxz00_3708 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2772z00zz__threadz00, BINT(((long) 24001)),
													BGl_string2788z00zz__threadz00,
													BGl_string2786z00zz__threadz00, BgL_arg2066z00_3264);
												FAILURE(BgL_auxz00_3708, BFALSE, BFALSE);
											}
										if ((((long) 0) == ((long) 0)))
											{	/* Llib/thread.scm 555 */
												return BBOOL(bgl_mutex_lock(BgL_mz00_3265));
											}
										else
											{	/* Llib/thread.scm 555 */
												return
													BBOOL(bgl_mutex_timed_lock(BgL_mz00_3265,
														((long) 0)));
							}}}} break;
						case ((long) 2):

							{	/* Llib/thread.scm 555 */
								obj_t BgL_timeoutz00_3266;

								BgL_timeoutz00_3266 =
									VECTOR_REF(BgL_optz00_85, (int) (((long) 1)));
								{	/* Llib/thread.scm 555 */

									{	/* Llib/thread.scm 555 */
										obj_t BgL_arg2067z00_3267;

										BgL_arg2067z00_3267 =
											VECTOR_REF(BgL_optz00_85, (int) (((long) 0)));
										{	/* Llib/thread.scm 555 */
											obj_t BgL_mz00_3268;

											long BgL_timeoutz00_3269;

											if (BGL_MUTEXP(BgL_arg2067z00_3267))
												{	/* Llib/thread.scm 555 */
													BgL_mz00_3268 = BgL_arg2067z00_3267;
												}
											else
												{
													obj_t BgL_auxz00_3724;

													BgL_auxz00_3724 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2772z00zz__threadz00,
														BINT(((long) 24001)),
														BGl_string2788z00zz__threadz00,
														BGl_string2786z00zz__threadz00,
														BgL_arg2067z00_3267);
													FAILURE(BgL_auxz00_3724, BFALSE, BFALSE);
												}
											{	/* Llib/thread.scm 555 */
												obj_t BgL_auxz00_3728;

												if (INTEGERP(BgL_timeoutz00_3266))
													{	/* Llib/thread.scm 555 */
														BgL_auxz00_3728 = BgL_timeoutz00_3266;
													}
												else
													{
														obj_t BgL_auxz00_3731;

														BgL_auxz00_3731 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2772z00zz__threadz00,
															BINT(((long) 24001)),
															BGl_string2788z00zz__threadz00,
															BGl_string2789z00zz__threadz00,
															BgL_timeoutz00_3266);
														FAILURE(BgL_auxz00_3731, BFALSE, BFALSE);
													}
												BgL_timeoutz00_3269 = (long) CINT(BgL_auxz00_3728);
											}
											if ((BgL_timeoutz00_3269 == ((long) 0)))
												{	/* Llib/thread.scm 555 */
													return BBOOL(bgl_mutex_lock(BgL_mz00_3268));
												}
											else
												{	/* Llib/thread.scm 555 */
													return
														BBOOL(bgl_mutex_timed_lock(BgL_mz00_3268,
															BgL_timeoutz00_3269));
												}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* mutex-lock! */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t BgL_mz00_83,
		long BgL_timeoutz00_84)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 555 */
			if ((BgL_timeoutz00_84 == ((long) 0)))
				{	/* Llib/thread.scm 556 */
					return BBOOL(bgl_mutex_lock(BgL_mz00_83));
				}
			else
				{	/* Llib/thread.scm 556 */
					return BBOOL(bgl_mutex_timed_lock(BgL_mz00_83, BgL_timeoutz00_84));
				}
		}
	}



/* mutex-unlock! */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t
		BgL_mz00_87)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 563 */
			return BBOOL(bgl_mutex_unlock(BgL_mz00_87));
		}
	}



/* _mutex-unlock! */
	obj_t BGl__mutexzd2unlockz12zc0zz__threadz00(obj_t BgL_envz00_2802,
		obj_t BgL_mz00_2803)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 563 */
			{	/* Llib/thread.scm 564 */
				obj_t BgL_mz00_3270;

				if (BGL_MUTEXP(BgL_mz00_2803))
					{	/* Llib/thread.scm 564 */
						BgL_mz00_3270 = BgL_mz00_2803;
					}
				else
					{
						obj_t BgL_auxz00_3754;

						BgL_auxz00_3754 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 24405)), BGl_string2790z00zz__threadz00,
							BGl_string2786z00zz__threadz00, BgL_mz00_2803);
						FAILURE(BgL_auxz00_3754, BFALSE, BFALSE);
					}
				return BBOOL(bgl_mutex_unlock(BgL_mz00_3270));
			}
		}
	}



/* mutex-state */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t
		BgL_mutexz00_88)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 569 */
			return bgl_mutex_state(BgL_mutexz00_88);
		}
	}



/* _mutex-state */
	obj_t BGl__mutexzd2statezd2zz__threadz00(obj_t BgL_envz00_2804,
		obj_t BgL_mutexz00_2805)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 569 */
			{	/* Llib/thread.scm 570 */
				obj_t BgL_mutexz00_3271;

				if (BGL_MUTEXP(BgL_mutexz00_2805))
					{	/* Llib/thread.scm 570 */
						BgL_mutexz00_3271 = BgL_mutexz00_2805;
					}
				else
					{
						obj_t BgL_auxz00_3763;

						BgL_auxz00_3763 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 24685)), BGl_string2791z00zz__threadz00,
							BGl_string2786z00zz__threadz00, BgL_mutexz00_2805);
						FAILURE(BgL_auxz00_3763, BFALSE, BFALSE);
					}
				return bgl_mutex_state(BgL_mutexz00_3271);
			}
		}
	}



/* with-lock */
	BGL_EXPORTED_DEF obj_t BGl_withzd2lockzd2zz__threadz00(obj_t BgL_mutexz00_89,
		obj_t BgL_thunkz00_90)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 575 */
			{	/* Llib/thread.scm 201 */

				if ((((long) 0) == ((long) 0)))
					{	/* Llib/thread.scm 201 */
						bgl_mutex_lock(BgL_mutexz00_89);
					}
				else
					{	/* Llib/thread.scm 201 */
						bgl_mutex_timed_lock(BgL_mutexz00_89, ((long) 0));
			}}
			{	/* Llib/thread.scm 577 */
				obj_t BgL_val1913z00_938;

				BgL_val1913z00_938 =
					BGl_zc3exitza32073ze3z83zz__threadz00(BgL_thunkz00_90);
				bgl_mutex_unlock(BgL_mutexz00_89);
				if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1913z00_938)))
					{	/* Llib/thread.scm 579 */
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1913z00_938),
							CDR(BgL_val1913z00_938));
					}
				else
					{	/* Llib/thread.scm 579 */
						return BgL_val1913z00_938;
					}
			}
		}
	}



/* <exit:2073> */
	obj_t BGl_zc3exitza32073ze3z83zz__threadz00(obj_t BgL_thunkz00_3077)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 579 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1914z00_943;

			if (SET_EXIT(BgL_an_exit1914z00_943))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1914z00_943 = (void *) jmpbuf;
					{	/* Llib/thread.scm 579 */

						PUSH_EXIT(BgL_an_exit1914z00_943, ((long) 0));
						{	/* Llib/thread.scm 578 */
							obj_t BgL_val1915z00_944;

							BgL_val1915z00_944 =
								PROCEDURE_ENTRY(BgL_thunkz00_3077) (BgL_thunkz00_3077, BEOA);
							POP_EXIT();
							return BgL_val1915z00_944;
						}
					}
				}
		}
	}



/* _with-lock */
	obj_t BGl__withzd2lockzd2zz__threadz00(obj_t BgL_envz00_2806,
		obj_t BgL_mutexz00_2807, obj_t BgL_thunkz00_2808)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 575 */
			{	/* Llib/thread.scm 579 */
				obj_t BgL_auxz00_3793;

				obj_t BgL_auxz00_3786;

				if (PROCEDUREP(BgL_thunkz00_2808))
					{	/* Llib/thread.scm 579 */
						BgL_auxz00_3793 = BgL_thunkz00_2808;
					}
				else
					{
						obj_t BgL_auxz00_3796;

						BgL_auxz00_3796 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 25045)), BGl_string2792z00zz__threadz00,
							BGl_string2781z00zz__threadz00, BgL_thunkz00_2808);
						FAILURE(BgL_auxz00_3796, BFALSE, BFALSE);
					}
				if (BGL_MUTEXP(BgL_mutexz00_2807))
					{	/* Llib/thread.scm 579 */
						BgL_auxz00_3786 = BgL_mutexz00_2807;
					}
				else
					{
						obj_t BgL_auxz00_3789;

						BgL_auxz00_3789 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 25045)), BGl_string2792z00zz__threadz00,
							BGl_string2786z00zz__threadz00, BgL_mutexz00_2807);
						FAILURE(BgL_auxz00_3789, BFALSE, BFALSE);
					}
				return
					BGl_withzd2lockzd2zz__threadz00(BgL_auxz00_3786, BgL_auxz00_3793);
			}
		}
	}



/* condition-variable? */
	BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t
		BgL_objz00_91)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 584 */
			return BGL_CONDVARP(BgL_objz00_91);
		}
	}



/* _condition-variable? */
	obj_t BGl__conditionzd2variablezf3z21zz__threadz00(obj_t BgL_envz00_2809,
		obj_t BgL_objz00_2810)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 584 */
			return BBOOL(BGL_CONDVARP(BgL_objz00_2810));
		}
	}



/* _make-condition-variable */
	obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t BgL_envz00_94,
		obj_t BgL_optz00_93)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 590 */
			{	/* Llib/thread.scm 590 */

				{	/* Llib/thread.scm 590 */
					int BgL_aux2010z00_3273;

					BgL_aux2010z00_3273 = VECTOR_LENGTH(BgL_optz00_93);
					switch ((long) (BgL_aux2010z00_3273))
						{
						case ((long) 0):

							{	/* Llib/thread.scm 590 */
								obj_t BgL_namez00_3274;

								BgL_namez00_3274 =
									BGl_gensymz00zz__r4_symbols_6_4z00
									(BGl_symbol2793z00zz__threadz00);
								{	/* Llib/thread.scm 590 */

									return bgl_make_condvar(BgL_namez00_3274);
								}
							}
							break;
						case ((long) 1):

							{	/* Llib/thread.scm 590 */
								obj_t BgL_namez00_3275;

								BgL_namez00_3275 =
									VECTOR_REF(BgL_optz00_93, (int) (((long) 0)));
								{	/* Llib/thread.scm 590 */

									return bgl_make_condvar(BgL_namez00_3275);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* make-condition-variable */
	BGL_EXPORTED_DEF obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t
		BgL_namez00_92)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 590 */
			return bgl_make_condvar(BgL_namez00_92);
		}
	}



/* condition-variable-nil */
	BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 598 */
			return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;
		}
	}



/* _condition-variable-nil */
	obj_t BGl__conditionzd2variablezd2nilz00zz__threadz00(obj_t BgL_envz00_2811)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 598 */
			return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;
		}
	}



/* condition-variable-name */
	BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t
		BgL_objz00_95)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 603 */
			return BGL_CONDVAR_NAME(BgL_objz00_95);
		}
	}



/* _condition-variable-name */
	obj_t BGl__conditionzd2variablezd2namez00zz__threadz00(obj_t BgL_envz00_2812,
		obj_t BgL_objz00_2813)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 603 */
			{	/* Llib/thread.scm 604 */
				obj_t BgL_objz00_3276;

				if (BGL_CONDVARP(BgL_objz00_2813))
					{	/* Llib/thread.scm 604 */
						BgL_objz00_3276 = BgL_objz00_2813;
					}
				else
					{
						obj_t BgL_auxz00_3816;

						BgL_auxz00_3816 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 26280)), BGl_string2795z00zz__threadz00,
							BGl_string2796z00zz__threadz00, BgL_objz00_2813);
						FAILURE(BgL_auxz00_3816, BFALSE, BFALSE);
					}
				return BGL_CONDVAR_NAME(BgL_objz00_3276);
			}
		}
	}



/* _condition-variable-wait! */
	obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t
		BgL_envz00_100, obj_t BgL_optz00_99)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 609 */
			{	/* Llib/thread.scm 609 */
				obj_t BgL_g2011z00_3277;

				obj_t BgL_g2012z00_3278;

				BgL_g2011z00_3277 = VECTOR_REF(BgL_optz00_99, (int) (((long) 0)));
				BgL_g2012z00_3278 = VECTOR_REF(BgL_optz00_99, (int) (((long) 1)));
				{	/* Llib/thread.scm 609 */
					int BgL_aux2014z00_3279;

					BgL_aux2014z00_3279 = VECTOR_LENGTH(BgL_optz00_99);
					switch ((long) (BgL_aux2014z00_3279))
						{
						case ((long) 2):

							{	/* Llib/thread.scm 609 */

								{	/* Llib/thread.scm 609 */
									obj_t BgL_arg2076z00_3280;

									obj_t BgL_arg2077z00_3281;

									BgL_arg2076z00_3280 =
										VECTOR_REF(BgL_optz00_99, (int) (((long) 0)));
									BgL_arg2077z00_3281 =
										VECTOR_REF(BgL_optz00_99, (int) (((long) 1)));
									{	/* Llib/thread.scm 609 */
										bool_t BgL_res2533z00_3282;

										{	/* Llib/thread.scm 609 */
											obj_t BgL_cz00_3283;

											obj_t BgL_mz00_3284;

											if (BGL_CONDVARP(BgL_arg2076z00_3280))
												{	/* Llib/thread.scm 609 */
													BgL_cz00_3283 = BgL_arg2076z00_3280;
												}
											else
												{
													obj_t BgL_auxz00_3832;

													BgL_auxz00_3832 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2772z00zz__threadz00,
														BINT(((long) 26524)),
														BGl_string2797z00zz__threadz00,
														BGl_string2796z00zz__threadz00,
														BgL_arg2076z00_3280);
													FAILURE(BgL_auxz00_3832, BFALSE, BFALSE);
												}
											if (BGL_MUTEXP(BgL_arg2077z00_3281))
												{	/* Llib/thread.scm 609 */
													BgL_mz00_3284 = BgL_arg2077z00_3281;
												}
											else
												{
													obj_t BgL_auxz00_3838;

													BgL_auxz00_3838 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2772z00zz__threadz00,
														BINT(((long) 26524)),
														BGl_string2797z00zz__threadz00,
														BGl_string2786z00zz__threadz00,
														BgL_arg2077z00_3281);
													FAILURE(BgL_auxz00_3838, BFALSE, BFALSE);
												}
											if ((((long) 0) == ((long) 0)))
												{	/* Llib/thread.scm 609 */
													BgL_res2533z00_3282 =
														bgl_condvar_wait(BgL_cz00_3283, BgL_mz00_3284);
												}
											else
												{	/* Llib/thread.scm 609 */
													BgL_res2533z00_3282 =
														bgl_condvar_timed_wait(BgL_cz00_3283, BgL_mz00_3284,
														((long) 0));
										}}
										return BBOOL(BgL_res2533z00_3282);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Llib/thread.scm 609 */
								obj_t BgL_timeoutz00_3285;

								BgL_timeoutz00_3285 =
									VECTOR_REF(BgL_optz00_99, (int) (((long) 2)));
								{	/* Llib/thread.scm 609 */

									{	/* Llib/thread.scm 609 */
										obj_t BgL_arg2078z00_3286;

										obj_t BgL_arg2079z00_3287;

										BgL_arg2078z00_3286 =
											VECTOR_REF(BgL_optz00_99, (int) (((long) 0)));
										BgL_arg2079z00_3287 =
											VECTOR_REF(BgL_optz00_99, (int) (((long) 1)));
										{	/* Llib/thread.scm 609 */
											bool_t BgL_res2534z00_3288;

											{	/* Llib/thread.scm 609 */
												obj_t BgL_cz00_3289;

												obj_t BgL_mz00_3290;

												long BgL_timeoutz00_3291;

												if (BGL_CONDVARP(BgL_arg2078z00_3286))
													{	/* Llib/thread.scm 609 */
														BgL_cz00_3289 = BgL_arg2078z00_3286;
													}
												else
													{
														obj_t BgL_auxz00_3855;

														BgL_auxz00_3855 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2772z00zz__threadz00,
															BINT(((long) 26524)),
															BGl_string2797z00zz__threadz00,
															BGl_string2796z00zz__threadz00,
															BgL_arg2078z00_3286);
														FAILURE(BgL_auxz00_3855, BFALSE, BFALSE);
													}
												if (BGL_MUTEXP(BgL_arg2079z00_3287))
													{	/* Llib/thread.scm 609 */
														BgL_mz00_3290 = BgL_arg2079z00_3287;
													}
												else
													{
														obj_t BgL_auxz00_3861;

														BgL_auxz00_3861 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2772z00zz__threadz00,
															BINT(((long) 26524)),
															BGl_string2797z00zz__threadz00,
															BGl_string2786z00zz__threadz00,
															BgL_arg2079z00_3287);
														FAILURE(BgL_auxz00_3861, BFALSE, BFALSE);
													}
												{	/* Llib/thread.scm 609 */
													obj_t BgL_auxz00_3865;

													if (INTEGERP(BgL_timeoutz00_3285))
														{	/* Llib/thread.scm 609 */
															BgL_auxz00_3865 = BgL_timeoutz00_3285;
														}
													else
														{
															obj_t BgL_auxz00_3868;

															BgL_auxz00_3868 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2772z00zz__threadz00,
																BINT(((long) 26524)),
																BGl_string2797z00zz__threadz00,
																BGl_string2789z00zz__threadz00,
																BgL_timeoutz00_3285);
															FAILURE(BgL_auxz00_3868, BFALSE, BFALSE);
														}
													BgL_timeoutz00_3291 = (long) CINT(BgL_auxz00_3865);
												}
												if ((BgL_timeoutz00_3291 == ((long) 0)))
													{	/* Llib/thread.scm 609 */
														BgL_res2534z00_3288 =
															bgl_condvar_wait(BgL_cz00_3289, BgL_mz00_3290);
													}
												else
													{	/* Llib/thread.scm 609 */
														BgL_res2534z00_3288 =
															bgl_condvar_timed_wait(BgL_cz00_3289,
															BgL_mz00_3290, BgL_timeoutz00_3291);
													}
											}
											return BBOOL(BgL_res2534z00_3288);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* condition-variable-wait! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_cz00_96,
		obj_t BgL_mz00_97, long BgL_timeoutz00_98)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 609 */
			if ((BgL_timeoutz00_98 == ((long) 0)))
				{	/* Llib/thread.scm 610 */
					return bgl_condvar_wait(BgL_cz00_96, BgL_mz00_97);
				}
			else
				{	/* Llib/thread.scm 610 */
					return
						bgl_condvar_timed_wait(BgL_cz00_96, BgL_mz00_97, BgL_timeoutz00_98);
				}
		}
	}



/* condition-variable-signal! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t BgL_cz00_101)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 617 */
			return bgl_condvar_signal(BgL_cz00_101);
		}
	}



/* _condition-variable-signal! */
	obj_t BGl__conditionzd2variablezd2signalz12z12zz__threadz00(obj_t
		BgL_envz00_2814, obj_t BgL_cz00_2815)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 617 */
			{	/* Llib/thread.scm 618 */
				bool_t BgL_auxz00_3885;

				{	/* Llib/thread.scm 618 */
					obj_t BgL_cz00_3292;

					if (BGL_CONDVARP(BgL_cz00_2815))
						{	/* Llib/thread.scm 618 */
							BgL_cz00_3292 = BgL_cz00_2815;
						}
					else
						{
							obj_t BgL_auxz00_3888;

							BgL_auxz00_3888 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 26966)), BGl_string2798z00zz__threadz00,
								BGl_string2796z00zz__threadz00, BgL_cz00_2815);
							FAILURE(BgL_auxz00_3888, BFALSE, BFALSE);
						}
					BgL_auxz00_3885 = bgl_condvar_signal(BgL_cz00_3292);
				}
				return BBOOL(BgL_auxz00_3885);
			}
		}
	}



/* condition-variable-broadcast! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t BgL_cz00_102)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 623 */
			return bgl_condvar_broadcast(BgL_cz00_102);
		}
	}



/* _condition-variable-broadcast! */
	obj_t BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t
		BgL_envz00_2816, obj_t BgL_cz00_2817)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 623 */
			{	/* Llib/thread.scm 624 */
				bool_t BgL_auxz00_3895;

				{	/* Llib/thread.scm 624 */
					obj_t BgL_cz00_3293;

					if (BGL_CONDVARP(BgL_cz00_2817))
						{	/* Llib/thread.scm 624 */
							BgL_cz00_3293 = BgL_cz00_2817;
						}
					else
						{
							obj_t BgL_auxz00_3898;

							BgL_auxz00_3898 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 27263)), BGl_string2799z00zz__threadz00,
								BGl_string2796z00zz__threadz00, BgL_cz00_2817);
							FAILURE(BgL_auxz00_3898, BFALSE, BFALSE);
						}
					BgL_auxz00_3895 = bgl_condvar_broadcast(BgL_cz00_3293);
				}
				return BBOOL(BgL_auxz00_3895);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 147 */
				obj_t BgL_arg2081z00_962;

				obj_t BgL_arg2082z00_963;

				obj_t BgL_arg2086z00_967;

				obj_t BgL_arg2089z00_968;

				BgL_arg2081z00_962 = BGl_symbol2800z00zz__threadz00;
				BgL_arg2082z00_963 = BGl_objectz00zz__objectz00;
				{	/* Llib/thread.scm 147 */
					obj_t BgL_arg2090z00_969;

					BgL_arg2090z00_969 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2801z00zz__threadz00,
						BGl_threadzd2backendzd2namezd2envzd2zz__threadz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Llib/thread.scm 147 */
						obj_t BgL_list2091z00_970;

						BgL_list2091z00_970 = MAKE_PAIR(BgL_arg2090z00_969, BNIL);
						BgL_arg2086z00_967 = BgL_list2091z00_970;
					}
				}
				{	/* Llib/thread.scm 147 */
					obj_t BgL_v1937z00_973;

					BgL_v1937z00_973 = create_vector((int) (((long) 0)));
					BgL_arg2089z00_968 = BgL_v1937z00_973;
				}
				BGl_threadzd2backendzd2zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2081z00_962,
					BgL_arg2082z00_963, ((bool_t) 0),
					BGl_makezd2threadzd2backendzd2envzd2zz__threadz00,
					BGl_z52allocatezd2threadzd2backendzd2envz80zz__threadz00,
					BGl_threadzd2backendzd2nilzd2envzd2zz__threadz00,
					BGl_threadzd2backendzf3zd2envzf3zz__threadz00, ((long) 491294473),
					BgL_arg2086z00_967, BFALSE, BgL_arg2089z00_968);
			}
			{	/* Llib/thread.scm 150 */
				obj_t BgL_arg2094z00_974;

				obj_t BgL_arg2095z00_975;

				obj_t BgL_arg2099z00_979;

				obj_t BgL_arg2100z00_980;

				BgL_arg2094z00_974 = BGl_symbol2778z00zz__threadz00;
				BgL_arg2095z00_975 = BGl_objectz00zz__objectz00;
				{	/* Llib/thread.scm 150 */
					obj_t BgL_arg2103z00_985;

					obj_t BgL_arg2104z00_986;

					obj_t BgL_arg2105z00_987;

					BgL_arg2103z00_985 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2801z00zz__threadz00,
						BGl_threadzd2namezd2envz00zz__threadz00,
						BGl_threadzd2namezd2setz12zd2envzc0zz__threadz00, BUNSPEC,
						((bool_t) 0), BFALSE, BGl_list2803z00zz__threadz00);
					BgL_arg2104z00_986 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2809z00zz__threadz00,
						BGl_threadzd2specificzd2envz00zz__threadz00,
						BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BUNSPEC,
						((bool_t) 1), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2105z00_987 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2811z00zz__threadz00,
						BGl_threadzd2cleanupzd2envz00zz__threadz00,
						BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BUNSPEC,
						((bool_t) 1), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Llib/thread.scm 150 */
						obj_t BgL_list2106z00_988;

						{	/* Llib/thread.scm 150 */
							obj_t BgL_arg2107z00_989;

							{	/* Llib/thread.scm 150 */
								obj_t BgL_arg2108z00_990;

								BgL_arg2108z00_990 = MAKE_PAIR(BgL_arg2105z00_987, BNIL);
								BgL_arg2107z00_989 =
									MAKE_PAIR(BgL_arg2104z00_986, BgL_arg2108z00_990);
							}
							BgL_list2106z00_988 =
								MAKE_PAIR(BgL_arg2103z00_985, BgL_arg2107z00_989);
						}
						BgL_arg2099z00_979 = BgL_list2106z00_988;
				}}
				{	/* Llib/thread.scm 150 */
					obj_t BgL_v1938z00_995;

					BgL_v1938z00_995 = create_vector((int) (((long) 2)));
					{	/* Llib/thread.scm 150 */
						obj_t BgL_arg2114z00_997;

						{	/* Llib/thread.scm 150 */
							obj_t BgL_arg2116z00_999;

							BgL_arg2116z00_999 =
								MAKE_PAIR(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00,
								BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00);
							BgL_arg2114z00_997 =
								MAKE_PAIR(BINT(((long) 1)), BgL_arg2116z00_999);
						}
						VECTOR_SET(BgL_v1938z00_995,
							(int) (((long) 1)), BgL_arg2114z00_997);
					}
					{	/* Llib/thread.scm 150 */
						obj_t BgL_arg2119z00_1001;

						{	/* Llib/thread.scm 150 */
							obj_t BgL_arg2123z00_1003;

							BgL_arg2123z00_1003 =
								MAKE_PAIR(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00,
								BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00);
							BgL_arg2119z00_1001 =
								MAKE_PAIR(BINT(((long) 0)), BgL_arg2123z00_1003);
						}
						VECTOR_SET(BgL_v1938z00_995,
							(int) (((long) 0)), BgL_arg2119z00_1001);
					}
					BgL_arg2100z00_980 = BgL_v1938z00_995;
				}
				BGl_threadz00zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2094z00_974,
					BgL_arg2095z00_975, ((bool_t) 1), BGl_proc2813z00zz__threadz00,
					BGl_proc2814z00zz__threadz00, BGl_threadzd2nilzd2envz00zz__threadz00,
					BGl_threadzf3zd2envz21zz__threadz00, ((long) 121707757),
					BgL_arg2099z00_979,
					BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
					BgL_arg2100z00_980);
			}
			{	/* Llib/thread.scm 156 */
				obj_t BgL_arg2124z00_1006;

				obj_t BgL_arg2125z00_1007;

				obj_t BgL_arg2131z00_1011;

				obj_t BgL_arg2132z00_1012;

				BgL_arg2124z00_1006 = BGl_symbol2815z00zz__threadz00;
				BgL_arg2125z00_1007 = BGl_threadz00zz__threadz00;
				{	/* Llib/thread.scm 156 */
					obj_t BgL_arg2133z00_1013;

					obj_t BgL_arg2134z00_1014;

					obj_t BgL_arg2135z00_1015;

					obj_t BgL_arg2136z00_1016;

					obj_t BgL_arg2137z00_1017;

					BgL_arg2133z00_1013 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2816z00zz__threadz00,
						BGl_nothreadzd2bodyzd2envz00zz__threadz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2134z00_1014 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2818z00zz__threadz00,
						BGl_nothreadzd2z52specificzd2envz52zz__threadz00,
						BGl_nothreadzd2z52specificzd2setz12zd2envz92zz__threadz00, BUNSPEC,
						((bool_t) 0), BFALSE, BUNSPEC);
					BgL_arg2135z00_1015 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2820z00zz__threadz00,
						BGl_nothreadzd2z52cleanupzd2envz52zz__threadz00,
						BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zz__threadz00, BUNSPEC,
						((bool_t) 0), BFALSE, BFALSE);
					BgL_arg2136z00_1016 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2822z00zz__threadz00,
						BGl_nothreadzd2endzd2resultzd2envzd2zz__threadz00,
						BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zz__threadz00, BUNSPEC,
						((bool_t) 0), BFALSE, BUNSPEC);
					BgL_arg2137z00_1017 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2824z00zz__threadz00,
						BGl_nothreadzd2endzd2exceptionzd2envzd2zz__threadz00,
						BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zz__threadz00,
						BUNSPEC, ((bool_t) 0), BFALSE, BUNSPEC);
					{	/* Llib/thread.scm 156 */
						obj_t BgL_list2138z00_1018;

						{	/* Llib/thread.scm 156 */
							obj_t BgL_arg2139z00_1019;

							{	/* Llib/thread.scm 156 */
								obj_t BgL_arg2140z00_1020;

								{	/* Llib/thread.scm 156 */
									obj_t BgL_arg2141z00_1021;

									{	/* Llib/thread.scm 156 */
										obj_t BgL_arg2144z00_1022;

										BgL_arg2144z00_1022 = MAKE_PAIR(BgL_arg2137z00_1017, BNIL);
										BgL_arg2141z00_1021 =
											MAKE_PAIR(BgL_arg2136z00_1016, BgL_arg2144z00_1022);
									}
									BgL_arg2140z00_1020 =
										MAKE_PAIR(BgL_arg2135z00_1015, BgL_arg2141z00_1021);
								}
								BgL_arg2139z00_1019 =
									MAKE_PAIR(BgL_arg2134z00_1014, BgL_arg2140z00_1020);
							}
							BgL_list2138z00_1018 =
								MAKE_PAIR(BgL_arg2133z00_1013, BgL_arg2139z00_1019);
						}
						BgL_arg2131z00_1011 = BgL_list2138z00_1018;
				}}
				{	/* Llib/thread.scm 156 */
					obj_t BgL_v1939z00_1025;

					BgL_v1939z00_1025 = create_vector((int) (((long) 0)));
					BgL_arg2132z00_1012 = BgL_v1939z00_1025;
				}
				BGl_nothreadz00zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2124z00_1006,
					BgL_arg2125z00_1007, ((bool_t) 0),
					BGl_makezd2nothreadzd2envz00zz__threadz00,
					BGl_z52allocatezd2nothreadzd2envz52zz__threadz00,
					BGl_nothreadzd2nilzd2envz00zz__threadz00,
					BGl_nothreadzf3zd2envz21zz__threadz00, ((long) 447745964),
					BgL_arg2131z00_1011, BFALSE, BgL_arg2132z00_1012);
			}
			{	/* Llib/thread.scm 145 */
				obj_t BgL_arg2147z00_1026;

				obj_t BgL_arg2148z00_1027;

				obj_t BgL_arg2153z00_1032;

				BgL_arg2147z00_1026 = BGl_symbol2826z00zz__threadz00;
				BgL_arg2148z00_1027 = BGl_threadzd2backendzd2zz__threadz00;
				{	/* Llib/thread.scm 145 */
					obj_t BgL_v1940z00_1034;

					BgL_v1940z00_1034 = create_vector((int) (((long) 0)));
					BgL_arg2153z00_1032 = BgL_v1940z00_1034;
				}
				BGl_nothreadzd2backendzd2zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2147z00_1026,
					BgL_arg2148z00_1027, ((bool_t) 0),
					BGl_makezd2nothreadzd2backendzd2envzd2zz__threadz00,
					BGl_z52allocatezd2nothreadzd2backendzd2envz80zz__threadz00,
					BGl_nothreadzd2backendzd2nilzd2envzd2zz__threadz00,
					BGl_nothreadzd2backendzf3zd2envzf3zz__threadz00, ((long) 136781531),
					BNIL, BFALSE, BgL_arg2153z00_1032);
			}
			BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 = BUNSPEC;
			BGl_z52thezd2nothreadzd2nilz52zz__threadz00 = BUNSPEC;
			BGl_z52thezd2threadzd2nilz52zz__threadz00 = BUNSPEC;
			return (BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* <anonymous:2102> */
	obj_t BGl_zc3anonymousza32102ze3z83zz__threadz00(obj_t BgL_envz00_2820,
		obj_t BgL_xz00_2821)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{
				obj_t BgL_xz00_983;

				BgL_xz00_983 = BgL_xz00_2821;
				return
					BGl_errorz00zz__errorz00(BGl_symbol2828z00zz__threadz00,
					BGl_string2830z00zz__threadz00, BGl_symbol2778z00zz__threadz00);
			}
		}
	}



/* <anonymous:2101> */
	obj_t BGl_zc3anonymousza32101ze3z83zz__threadz00(obj_t BgL_envz00_2822,
		obj_t BgL_xz00_2823)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{
				obj_t BgL_xz00_981;

				BgL_xz00_981 = BgL_xz00_2823;
				return
					BGl_errorz00zz__errorz00(BGl_symbol2778z00zz__threadz00,
					BGl_string2831z00zz__threadz00, BGl_symbol2778z00zz__threadz00);
			}
		}
	}



/* _nothread-backend? */
	obj_t BGl__nothreadzd2backendzf3z21zz__threadz00(obj_t BgL_envz00_2899,
		obj_t BgL_obj1881z00_2900)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1881z00_2900,
					BGl_nothreadzd2backendzd2zz__threadz00));
		}
	}



/* make-nothread-backend */
	BgL_nothreadzd2backendzd2_bglt
		BGl_makezd2nothreadzd2backendz00zz__threadz00(obj_t BgL_name1867z00_107)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			{	/* Llib/thread.scm 145 */
				BgL_nothreadzd2backendzd2_bglt BgL_new1868z00_1911;

				{	/* Llib/thread.scm 145 */
					BgL_nothreadzd2backendzd2_bglt BgL_res2539z00_1916;

					{	/* Llib/thread.scm 145 */
						BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1912;

						BgL_new1874z00_1912 =
							((BgL_nothreadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nothreadzd2backendzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1874z00_1912),
							BGl_classzd2numzd2zz__objectz00
							(BGl_nothreadzd2backendzd2zz__threadz00));
						{	/* Llib/thread.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_3956;

							BgL_auxz00_3956 = (BgL_objectz00_bglt) (BgL_new1874z00_1912);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3956, BFALSE);
						}
						BgL_res2539z00_1916 = BgL_new1874z00_1912;
					}
					BgL_new1868z00_1911 = BgL_res2539z00_1916;
				}
				{	/* Llib/thread.scm 145 */
					BgL_nothreadzd2backendzd2_bglt BgL_res2540z00_1920;

					{	/* Llib/thread.scm 145 */
						BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1917;

						BgL_new1871z00_1917 = BgL_new1868z00_1911;
						{	/* Llib/thread.scm 145 */
							obj_t BgL_name1870z00_1919;

							BgL_name1870z00_1919 = BgL_name1867z00_107;
							((((BgL_nothreadzd2backendzd2_bglt) CREF(BgL_new1871z00_1917))->
									BgL_namez00) = ((obj_t) BgL_name1870z00_1919), BUNSPEC);
							BgL_res2540z00_1920 = BgL_new1871z00_1917;
					}} BgL_res2540z00_1920;
				}
				return BgL_new1868z00_1911;
			}
		}
	}



/* _make-nothread-backend */
	obj_t BGl__makezd2nothreadzd2backendz00zz__threadz00(obj_t BgL_envz00_2895,
		obj_t BgL_name1867z00_2896)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			{	/* Llib/thread.scm 145 */
				BgL_nothreadzd2backendzd2_bglt BgL_auxz00_3960;

				{	/* Llib/thread.scm 145 */
					obj_t BgL_auxz00_3961;

					if (STRINGP(BgL_name1867z00_2896))
						{	/* Llib/thread.scm 145 */
							BgL_auxz00_3961 = BgL_name1867z00_2896;
						}
					else
						{
							obj_t BgL_auxz00_3964;

							BgL_auxz00_3964 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 5130)), BGl_string2832z00zz__threadz00,
								BGl_string2777z00zz__threadz00, BgL_name1867z00_2896);
							FAILURE(BgL_auxz00_3964, BFALSE, BFALSE);
						}
					BgL_auxz00_3960 =
						BGl_makezd2nothreadzd2backendz00zz__threadz00(BgL_auxz00_3961);
				}
				return (obj_t) (BgL_auxz00_3960);
			}
		}
	}



/* _%allocate-nothread-backend */
	obj_t BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00(obj_t
		BgL_envz00_2897)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			{	/* Llib/thread.scm 145 */
				BgL_nothreadzd2backendzd2_bglt BgL_auxz00_3970;

				{	/* Llib/thread.scm 145 */
					BgL_nothreadzd2backendzd2_bglt BgL_res2949z00_3299;

					{	/* Llib/thread.scm 145 */
						BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_3297;

						BgL_new1874z00_3297 =
							((BgL_nothreadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nothreadzd2backendzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1874z00_3297),
							BGl_classzd2numzd2zz__objectz00
							(BGl_nothreadzd2backendzd2zz__threadz00));
						{	/* Llib/thread.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_3975;

							BgL_auxz00_3975 = (BgL_objectz00_bglt) (BgL_new1874z00_3297);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3975, BFALSE);
						}
						BgL_res2949z00_3299 = BgL_new1874z00_3297;
					}
					BgL_auxz00_3970 = BgL_res2949z00_3299;
				}
				return (obj_t) (BgL_auxz00_3970);
			}
		}
	}



/* nothread-backend-nil */
	BgL_nothreadzd2backendzd2_bglt BGl_nothreadzd2backendzd2nilz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			if ((BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 == BUNSPEC))
				{	/* Llib/thread.scm 145 */
					{	/* Llib/thread.scm 145 */
						BgL_nothreadzd2backendzd2_bglt BgL_res2541z00_1930;

						{	/* Llib/thread.scm 145 */
							BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1926;

							BgL_new1874z00_1926 =
								((BgL_nothreadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nothreadzd2backendzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1874z00_1926),
								BGl_classzd2numzd2zz__objectz00
								(BGl_nothreadzd2backendzd2zz__threadz00));
							{	/* Llib/thread.scm 145 */
								BgL_objectz00_bglt BgL_auxz00_3985;

								BgL_auxz00_3985 = (BgL_objectz00_bglt) (BgL_new1874z00_1926);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3985, BFALSE);
							}
							BgL_res2541z00_1930 = BgL_new1874z00_1926;
						}
						BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 =
							(obj_t) (BgL_res2541z00_1930);
					}
					{	/* Llib/thread.scm 145 */
						BgL_nothreadzd2backendzd2_bglt BgL_res2542z00_1934;

						{	/* Llib/thread.scm 145 */
							BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1931;

							BgL_new1871z00_1931 =
								(BgL_nothreadzd2backendzd2_bglt)
								(BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00);
							{	/* Llib/thread.scm 145 */
								obj_t BgL_name1870z00_1933;

								BgL_name1870z00_1933 = BGl_string2833z00zz__threadz00;
								((((BgL_nothreadzd2backendzd2_bglt) CREF(BgL_new1871z00_1931))->
										BgL_namez00) = ((obj_t) BgL_name1870z00_1933), BUNSPEC);
								BgL_res2542z00_1934 = BgL_new1871z00_1931;
						}}
						(obj_t) (BgL_res2542z00_1934);
				}}
			else
				{	/* Llib/thread.scm 145 */
					BFALSE;
				}
			return
				(BgL_nothreadzd2backendzd2_bglt)
				(BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00);
		}
	}



/* _nothread-backend-nil */
	obj_t BGl__nothreadzd2backendzd2nilz00zz__threadz00(obj_t BgL_envz00_2898)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			return (obj_t) (BGl_nothreadzd2backendzd2nilz00zz__threadz00());
		}
	}



/* nothread? */
	BGL_EXPORTED_DEF bool_t BGl_nothreadzf3zf3zz__threadz00(obj_t
		BgL_obj1865z00_110)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1865z00_110,
				BGl_nothreadz00zz__threadz00);
		}
	}



/* _nothread? */
	obj_t BGl__nothreadzf3zf3zz__threadz00(obj_t BgL_envz00_2893,
		obj_t BgL_obj1865z00_2894)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1865z00_2894,
					BGl_nothreadz00zz__threadz00));
		}
	}



/* make-nothread */
	BGL_EXPORTED_DEF BgL_nothreadz00_bglt
		BGl_makezd2nothreadzd2zz__threadz00(obj_t BgL_name1816z00_114,
		obj_t BgL_body1817z00_115, obj_t BgL_z52specific1818z52_116,
		obj_t BgL_z52cleanup1819z52_117, obj_t BgL_endzd2result1820zd2_118,
		obj_t BgL_endzd2exception1821zd2_119)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				BgL_nothreadz00_bglt BgL_new1822z00_1935;

				{	/* Llib/thread.scm 156 */
					BgL_nothreadz00_bglt BgL_res2543z00_1940;

					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_new1838z00_1936;

						BgL_new1838z00_1936 =
							((BgL_nothreadz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nothreadz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1838z00_1936),
							BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00));
						{	/* Llib/thread.scm 156 */
							BgL_objectz00_bglt BgL_auxz00_4002;

							BgL_auxz00_4002 = (BgL_objectz00_bglt) (BgL_new1838z00_1936);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4002, BFALSE);
						}
						BgL_res2543z00_1940 = BgL_new1838z00_1936;
					}
					BgL_new1822z00_1935 = BgL_res2543z00_1940;
				}
				{	/* Llib/thread.scm 156 */
					BgL_nothreadz00_bglt BgL_res2544z00_1954;

					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_new1830z00_1941;

						BgL_new1830z00_1941 = BgL_new1822z00_1935;
						{	/* Llib/thread.scm 156 */
							obj_t BgL_name1824z00_1948;

							obj_t BgL_body1825z00_1949;

							obj_t BgL_z52specific1826z52_1950;

							obj_t BgL_z52cleanup1827z52_1951;

							obj_t BgL_endzd2result1828zd2_1952;

							obj_t BgL_endzd2exception1829zd2_1953;

							BgL_name1824z00_1948 = BgL_name1816z00_114;
							BgL_body1825z00_1949 = BgL_body1817z00_115;
							BgL_z52specific1826z52_1950 = BgL_z52specific1818z52_116;
							BgL_z52cleanup1827z52_1951 = BgL_z52cleanup1819z52_117;
							BgL_endzd2result1828zd2_1952 = BgL_endzd2result1820zd2_118;
							BgL_endzd2exception1829zd2_1953 = BgL_endzd2exception1821zd2_119;
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_namez00) = ((obj_t) BgL_name1824z00_1948), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_bodyz00) = ((obj_t) BgL_body1825z00_1949), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_z52specificz52) =
								((obj_t) BgL_z52specific1826z52_1950), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_z52cleanupz52) =
								((obj_t) BgL_z52cleanup1827z52_1951), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_endzd2resultzd2) =
								((obj_t) BgL_endzd2result1828zd2_1952), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1941))->
									BgL_endzd2exceptionzd2) =
								((obj_t) BgL_endzd2exception1829zd2_1953), BUNSPEC);
							BgL_res2544z00_1954 = BgL_new1830z00_1941;
					}} BgL_res2544z00_1954;
				}
				{	/* Llib/thread.scm 156 */
					BgL_threadz00_bglt BgL_thz00_1955;

					BgL_thz00_1955 = (BgL_threadz00_bglt) (BgL_new1822z00_1935);
					{	/* Llib/thread.scm 156 */
						obj_t BgL_method1961z00_1956;

						{	/* Llib/thread.scm 156 */
							BgL_objectz00_bglt BgL_objz00_1957;

							BgL_objz00_1957 = (BgL_objectz00_bglt) (BgL_thz00_1955);
							{	/* Llib/thread.scm 156 */
								long BgL_objzd2classzd2numz00_1958;

								BgL_objzd2classzd2numz00_1958 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1957);
								{	/* Llib/thread.scm 156 */
									obj_t BgL_arg2518z00_1959;

									BgL_arg2518z00_1959 =
										PROCEDURE_REF
										(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
										(int) (((long) 1)));
									{	/* Llib/thread.scm 156 */
										obj_t BgL_arrayz00_1961;

										int BgL_offsetz00_1962;

										BgL_arrayz00_1961 = BgL_arg2518z00_1959;
										BgL_offsetz00_1962 = (int) (BgL_objzd2classzd2numz00_1958);
										{	/* Llib/thread.scm 156 */
											long BgL_offsetz00_1963;

											BgL_offsetz00_1963 =
												((long) (BgL_offsetz00_1962) - OBJECT_TYPE);
											{	/* Llib/thread.scm 156 */
												long BgL_modz00_1964;

												{	/* Llib/thread.scm 156 */
													int BgL_arg2520z00_1965;

													BgL_arg2520z00_1965 = (int) (((long) 16));
													{	/* Llib/thread.scm 156 */
														long BgL_auxz00_4020;

														BgL_auxz00_4020 = (long) (BgL_arg2520z00_1965);
														BgL_modz00_1964 =
															(BgL_offsetz00_1963 / BgL_auxz00_4020);
												}}
												{	/* Llib/thread.scm 156 */
													long BgL_restz00_1966;

													{	/* Llib/thread.scm 156 */
														int BgL_arg2519z00_1967;

														BgL_arg2519z00_1967 = (int) (((long) 16));
														{	/* Llib/thread.scm 156 */
															long BgL_auxz00_4024;

															BgL_auxz00_4024 = (long) (BgL_arg2519z00_1967);
															BgL_restz00_1966 =
																(BgL_offsetz00_1963 % BgL_auxz00_4024);
													}}
													{	/* Llib/thread.scm 156 */

														BgL_method1961z00_1956 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1961,
																(int) (BgL_modz00_1964)),
															(int) (BgL_restz00_1966));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method1961z00_1956) (BgL_method1961z00_1956,
							(obj_t) (BgL_thz00_1955), BEOA);
				}}
				return BgL_new1822z00_1935;
			}
		}
	}



/* _make-nothread */
	obj_t BGl__makezd2nothreadzd2zz__threadz00(obj_t BgL_envz00_2862,
		obj_t BgL_name1816z00_2863, obj_t BgL_body1817z00_2864,
		obj_t BgL_z52specific1818z52_2865, obj_t BgL_z52cleanup1819z52_2866,
		obj_t BgL_endzd2result1820zd2_2867, obj_t BgL_endzd2exception1821zd2_2868)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				BgL_nothreadz00_bglt BgL_auxz00_4034;

				{	/* Llib/thread.scm 156 */
					obj_t BgL_auxz00_4035;

					if (PROCEDUREP(BgL_body1817z00_2864))
						{	/* Llib/thread.scm 156 */
							BgL_auxz00_4035 = BgL_body1817z00_2864;
						}
					else
						{
							obj_t BgL_auxz00_4038;

							BgL_auxz00_4038 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 5490)), BGl_string2834z00zz__threadz00,
								BGl_string2781z00zz__threadz00, BgL_body1817z00_2864);
							FAILURE(BgL_auxz00_4038, BFALSE, BFALSE);
						}
					BgL_auxz00_4034 =
						BGl_makezd2nothreadzd2zz__threadz00(BgL_name1816z00_2863,
						BgL_auxz00_4035, BgL_z52specific1818z52_2865,
						BgL_z52cleanup1819z52_2866, BgL_endzd2result1820zd2_2867,
						BgL_endzd2exception1821zd2_2868);
				}
				return (obj_t) (BgL_auxz00_4034);
			}
		}
	}



/* fill-nothread! */
	BGL_EXPORTED_DEF BgL_nothreadz00_bglt
		BGl_fillzd2nothreadz12zc0zz__threadz00(BgL_nothreadz00_bglt
		BgL_new1830z00_120, obj_t BgL_name1824z00_121, obj_t BgL_body1825z00_122,
		obj_t BgL_z52specific1826z52_123, obj_t BgL_z52cleanup1827z52_124,
		obj_t BgL_endzd2result1828zd2_125, obj_t BgL_endzd2exception1829zd2_126)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				obj_t BgL_name1824z00_3301;

				obj_t BgL_body1825z00_3302;

				obj_t BgL_z52specific1826z52_3303;

				obj_t BgL_z52cleanup1827z52_3304;

				obj_t BgL_endzd2result1828zd2_3305;

				obj_t BgL_endzd2exception1829zd2_3306;

				BgL_name1824z00_3301 = BgL_name1824z00_121;
				BgL_body1825z00_3302 = BgL_body1825z00_122;
				BgL_z52specific1826z52_3303 = BgL_z52specific1826z52_123;
				BgL_z52cleanup1827z52_3304 = BgL_z52cleanup1827z52_124;
				BgL_endzd2result1828zd2_3305 = BgL_endzd2result1828zd2_125;
				BgL_endzd2exception1829zd2_3306 = BgL_endzd2exception1829zd2_126;
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->BgL_namez00) =
					((obj_t) BgL_name1824z00_3301), BUNSPEC);
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->BgL_bodyz00) =
					((obj_t) BgL_body1825z00_3302), BUNSPEC);
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->
						BgL_z52specificz52) =
					((obj_t) BgL_z52specific1826z52_3303), BUNSPEC);
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->
						BgL_z52cleanupz52) = ((obj_t) BgL_z52cleanup1827z52_3304), BUNSPEC);
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->
						BgL_endzd2resultzd2) =
					((obj_t) BgL_endzd2result1828zd2_3305), BUNSPEC);
				((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_120))->
						BgL_endzd2exceptionzd2) =
					((obj_t) BgL_endzd2exception1829zd2_3306), BUNSPEC);
				return BgL_new1830z00_120;
			}
		}
	}



/* _fill-nothread! */
	obj_t BGl__fillzd2nothreadz12zc0zz__threadz00(obj_t BgL_envz00_2901,
		obj_t BgL_new1830z00_2902, obj_t BgL_name1824z00_2903,
		obj_t BgL_body1825z00_2904, obj_t BgL_z52specific1826z52_2905,
		obj_t BgL_z52cleanup1827z52_2906, obj_t BgL_endzd2result1828zd2_2907,
		obj_t BgL_endzd2exception1829zd2_2908)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				BgL_nothreadz00_bglt BgL_auxz00_4050;

				{	/* Llib/thread.scm 156 */
					BgL_nothreadz00_bglt BgL_res2950z00_3321;

					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_new1830z00_3308;

						obj_t BgL_body1825z00_3310;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1830z00_2902,
								BGl_nothreadz00zz__threadz00))
							{	/* Llib/thread.scm 156 */
								BgL_new1830z00_3308 =
									(BgL_nothreadz00_bglt) (BgL_new1830z00_2902);
							}
						else
							{
								obj_t BgL_auxz00_4054;

								BgL_auxz00_4054 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2772z00zz__threadz00, BINT(((long) 5490)),
									BGl_string2835z00zz__threadz00,
									BGl_string2771z00zz__threadz00, BgL_new1830z00_2902);
								FAILURE(BgL_auxz00_4054, BFALSE, BFALSE);
							}
						if (PROCEDUREP(BgL_body1825z00_2904))
							{	/* Llib/thread.scm 156 */
								BgL_body1825z00_3310 = BgL_body1825z00_2904;
							}
						else
							{
								obj_t BgL_auxz00_4060;

								BgL_auxz00_4060 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2772z00zz__threadz00, BINT(((long) 5490)),
									BGl_string2835z00zz__threadz00,
									BGl_string2781z00zz__threadz00, BgL_body1825z00_2904);
								FAILURE(BgL_auxz00_4060, BFALSE, BFALSE);
							}
						{	/* Llib/thread.scm 156 */
							obj_t BgL_name1824z00_3315;

							obj_t BgL_body1825z00_3316;

							obj_t BgL_z52specific1826z52_3317;

							obj_t BgL_z52cleanup1827z52_3318;

							obj_t BgL_endzd2result1828zd2_3319;

							obj_t BgL_endzd2exception1829zd2_3320;

							BgL_name1824z00_3315 = BgL_name1824z00_2903;
							BgL_body1825z00_3316 = BgL_body1825z00_3310;
							BgL_z52specific1826z52_3317 = BgL_z52specific1826z52_2905;
							BgL_z52cleanup1827z52_3318 = BgL_z52cleanup1827z52_2906;
							BgL_endzd2result1828zd2_3319 = BgL_endzd2result1828zd2_2907;
							BgL_endzd2exception1829zd2_3320 = BgL_endzd2exception1829zd2_2908;
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_namez00) = ((obj_t) BgL_name1824z00_3315), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_bodyz00) = ((obj_t) BgL_body1825z00_3316), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_z52specificz52) =
								((obj_t) BgL_z52specific1826z52_3317), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_z52cleanupz52) =
								((obj_t) BgL_z52cleanup1827z52_3318), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_endzd2resultzd2) =
								((obj_t) BgL_endzd2result1828zd2_3319), BUNSPEC);
							((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_3308))->
									BgL_endzd2exceptionzd2) =
								((obj_t) BgL_endzd2exception1829zd2_3320), BUNSPEC);
							BgL_res2950z00_3321 = BgL_new1830z00_3308;
					}}
					BgL_auxz00_4050 = BgL_res2950z00_3321;
				}
				return (obj_t) (BgL_auxz00_4050);
			}
		}
	}



/* %allocate-nothread */
	BGL_EXPORTED_DEF BgL_nothreadz00_bglt
		BGl_z52allocatezd2nothreadz80zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				BgL_nothreadz00_bglt BgL_new1838z00_3322;

				BgL_new1838z00_3322 =
					((BgL_nothreadz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_nothreadz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1838z00_3322),
					BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00));
				{	/* Llib/thread.scm 156 */
					BgL_objectz00_bglt BgL_auxz00_4075;

					BgL_auxz00_4075 = (BgL_objectz00_bglt) (BgL_new1838z00_3322);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4075, BFALSE);
				}
				return BgL_new1838z00_3322;
			}
		}
	}



/* _%allocate-nothread */
	obj_t BGl__z52allocatezd2nothreadz80zz__threadz00(obj_t BgL_envz00_2869)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{	/* Llib/thread.scm 156 */
				BgL_nothreadz00_bglt BgL_auxz00_4078;

				{	/* Llib/thread.scm 156 */
					BgL_nothreadz00_bglt BgL_res2951z00_3326;

					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_new1838z00_3324;

						BgL_new1838z00_3324 =
							((BgL_nothreadz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nothreadz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1838z00_3324),
							BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00));
						{	/* Llib/thread.scm 156 */
							BgL_objectz00_bglt BgL_auxz00_4083;

							BgL_auxz00_4083 = (BgL_objectz00_bglt) (BgL_new1838z00_3324);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4083, BFALSE);
						}
						BgL_res2951z00_3326 = BgL_new1838z00_3324;
					}
					BgL_auxz00_4078 = BgL_res2951z00_3326;
				}
				return (obj_t) (BgL_auxz00_4078);
			}
		}
	}



/* nothread-nil */
	BGL_EXPORTED_DEF BgL_nothreadz00_bglt BGl_nothreadzd2nilzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			if ((BGl_z52thezd2nothreadzd2nilz52zz__threadz00 == BUNSPEC))
				{	/* Llib/thread.scm 156 */
					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_res2547z00_1995;

						{	/* Llib/thread.scm 156 */
							BgL_nothreadz00_bglt BgL_new1838z00_1991;

							BgL_new1838z00_1991 =
								((BgL_nothreadz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nothreadz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1838z00_1991),
								BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00));
							{	/* Llib/thread.scm 156 */
								BgL_objectz00_bglt BgL_auxz00_4093;

								BgL_auxz00_4093 = (BgL_objectz00_bglt) (BgL_new1838z00_1991);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4093, BFALSE);
							}
							BgL_res2547z00_1995 = BgL_new1838z00_1991;
						}
						BGl_z52thezd2nothreadzd2nilz52zz__threadz00 =
							(obj_t) (BgL_res2547z00_1995);
					}
					{	/* Llib/thread.scm 156 */
						BgL_nothreadz00_bglt BgL_res2548z00_2008;

						{	/* Llib/thread.scm 156 */
							BgL_nothreadz00_bglt BgL_new1830z00_1996;

							BgL_new1830z00_1996 =
								(BgL_nothreadz00_bglt)
								(BGl_z52thezd2nothreadzd2nilz52zz__threadz00);
							{	/* Llib/thread.scm 156 */
								obj_t BgL_name1824z00_2002;

								obj_t BgL_body1825z00_2003;

								obj_t BgL_z52specific1826z52_2004;

								obj_t BgL_z52cleanup1827z52_2005;

								obj_t BgL_endzd2result1828zd2_2006;

								obj_t BgL_endzd2exception1829zd2_2007;

								BgL_name1824z00_2002 = BUNSPEC;
								BgL_body1825z00_2003 =
									BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
								BgL_z52specific1826z52_2004 = BUNSPEC;
								BgL_z52cleanup1827z52_2005 = BUNSPEC;
								BgL_endzd2result1828zd2_2006 = BUNSPEC;
								BgL_endzd2exception1829zd2_2007 = BUNSPEC;
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_namez00) = ((obj_t) BgL_name1824z00_2002), BUNSPEC);
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_bodyz00) = ((obj_t) BgL_body1825z00_2003), BUNSPEC);
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_z52specificz52) =
									((obj_t) BgL_z52specific1826z52_2004), BUNSPEC);
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_z52cleanupz52) =
									((obj_t) BgL_z52cleanup1827z52_2005), BUNSPEC);
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_endzd2resultzd2) =
									((obj_t) BgL_endzd2result1828zd2_2006), BUNSPEC);
								((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_1996))->
										BgL_endzd2exceptionzd2) =
									((obj_t) BgL_endzd2exception1829zd2_2007), BUNSPEC);
								BgL_res2548z00_2008 = BgL_new1830z00_1996;
						}}
						(obj_t) (BgL_res2548z00_2008);
				}}
			else
				{	/* Llib/thread.scm 156 */
					BFALSE;
				}
			return
				(BgL_nothreadz00_bglt) (BGl_z52thezd2nothreadzd2nilz52zz__threadz00);
		}
	}



/* _nothread-nil */
	obj_t BGl__nothreadzd2nilzd2zz__threadz00(obj_t BgL_envz00_2892)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			return (obj_t) (BGl_nothreadzd2nilzd2zz__threadz00());
		}
	}



/* _nothread-body */
	obj_t BGl__nothreadzd2bodyzd2zz__threadz00(obj_t BgL_envz00_2870,
		obj_t BgL_obj1802z00_2871)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 157 */
			{	/* Llib/thread.scm 157 */
				BgL_nothreadz00_bglt BgL_obj1802z00_3328;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1802z00_2871,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 157 */
						BgL_obj1802z00_3328 = (BgL_nothreadz00_bglt) (BgL_obj1802z00_2871);
					}
				else
					{
						obj_t BgL_auxz00_4111;

						BgL_auxz00_4111 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5522)), BGl_string2836z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1802z00_2871);
						FAILURE(BgL_auxz00_4111, BFALSE, BFALSE);
					}
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_obj1802z00_3328))->BgL_bodyz00);
			}
		}
	}



/* _nothread-%specific-set! */
	obj_t BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00(obj_t
		BgL_envz00_2874, obj_t BgL_obj1805z00_2875, obj_t BgL_val1804z00_2876)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 158 */
			{	/* Llib/thread.scm 158 */
				BgL_nothreadz00_bglt BgL_obj1805z00_3330;

				obj_t BgL_val1804z00_3331;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1805z00_2875,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 158 */
						BgL_obj1805z00_3330 = (BgL_nothreadz00_bglt) (BgL_obj1805z00_2875);
					}
				else
					{
						obj_t BgL_auxz00_4119;

						BgL_auxz00_4119 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5558)), BGl_string2837z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1805z00_2875);
						FAILURE(BgL_auxz00_4119, BFALSE, BFALSE);
					}
				BgL_val1804z00_3331 = BgL_val1804z00_2876;
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_obj1805z00_3330))->
						BgL_z52specificz52) = ((obj_t) BgL_val1804z00_3331), BUNSPEC);
			}
		}
	}



/* _nothread-%specific */
	obj_t BGl__nothreadzd2z52specificz80zz__threadz00(obj_t BgL_envz00_2872,
		obj_t BgL_obj1803z00_2873)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 158 */
			{	/* Llib/thread.scm 158 */
				BgL_nothreadz00_bglt BgL_obj1803z00_3333;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1803z00_2873,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 158 */
						BgL_obj1803z00_3333 = (BgL_nothreadz00_bglt) (BgL_obj1803z00_2873);
					}
				else
					{
						obj_t BgL_auxz00_4127;

						BgL_auxz00_4127 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5558)), BGl_string2838z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1803z00_2873);
						FAILURE(BgL_auxz00_4127, BFALSE, BFALSE);
					}
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_obj1803z00_3333))->
					BgL_z52specificz52);
			}
		}
	}



/* _nothread-%cleanup-set! */
	obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00(obj_t
		BgL_envz00_2879, obj_t BgL_obj1808z00_2880, obj_t BgL_val1807z00_2881)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 159 */
			{	/* Llib/thread.scm 159 */
				BgL_nothreadz00_bglt BgL_obj1808z00_3335;

				obj_t BgL_val1807z00_3336;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1808z00_2880,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 159 */
						BgL_obj1808z00_3335 = (BgL_nothreadz00_bglt) (BgL_obj1808z00_2880);
					}
				else
					{
						obj_t BgL_auxz00_4135;

						BgL_auxz00_4135 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5606)), BGl_string2839z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1808z00_2880);
						FAILURE(BgL_auxz00_4135, BFALSE, BFALSE);
					}
				BgL_val1807z00_3336 = BgL_val1807z00_2881;
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_obj1808z00_3335))->
						BgL_z52cleanupz52) = ((obj_t) BgL_val1807z00_3336), BUNSPEC);
			}
		}
	}



/* _nothread-%cleanup */
	obj_t BGl__nothreadzd2z52cleanupz80zz__threadz00(obj_t BgL_envz00_2877,
		obj_t BgL_obj1806z00_2878)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 159 */
			{	/* Llib/thread.scm 159 */
				BgL_nothreadz00_bglt BgL_obj1806z00_3338;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1806z00_2878,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 159 */
						BgL_obj1806z00_3338 = (BgL_nothreadz00_bglt) (BgL_obj1806z00_2878);
					}
				else
					{
						obj_t BgL_auxz00_4143;

						BgL_auxz00_4143 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5606)), BGl_string2840z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1806z00_2878);
						FAILURE(BgL_auxz00_4143, BFALSE, BFALSE);
					}
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_obj1806z00_3338))->
					BgL_z52cleanupz52);
			}
		}
	}



/* _nothread-end-result-set! */
	obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00(obj_t
		BgL_envz00_2884, obj_t BgL_obj1812z00_2885, obj_t BgL_val1810z00_2886)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 160 */
			{	/* Llib/thread.scm 160 */
				BgL_nothreadz00_bglt BgL_obj1812z00_3340;

				obj_t BgL_val1810z00_3341;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2885,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 160 */
						BgL_obj1812z00_3340 = (BgL_nothreadz00_bglt) (BgL_obj1812z00_2885);
					}
				else
					{
						obj_t BgL_auxz00_4151;

						BgL_auxz00_4151 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5643)), BGl_string2841z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1812z00_2885);
						FAILURE(BgL_auxz00_4151, BFALSE, BFALSE);
					}
				BgL_val1810z00_3341 = BgL_val1810z00_2886;
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_obj1812z00_3340))->
						BgL_endzd2resultzd2) = ((obj_t) BgL_val1810z00_3341), BUNSPEC);
			}
		}
	}



/* _nothread-end-result */
	obj_t BGl__nothreadzd2endzd2resultz00zz__threadz00(obj_t BgL_envz00_2882,
		obj_t BgL_obj1809z00_2883)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 160 */
			{	/* Llib/thread.scm 160 */
				BgL_nothreadz00_bglt BgL_obj1809z00_3343;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1809z00_2883,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 160 */
						BgL_obj1809z00_3343 = (BgL_nothreadz00_bglt) (BgL_obj1809z00_2883);
					}
				else
					{
						obj_t BgL_auxz00_4159;

						BgL_auxz00_4159 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5643)), BGl_string2842z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1809z00_2883);
						FAILURE(BgL_auxz00_4159, BFALSE, BFALSE);
					}
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_obj1809z00_3343))->
					BgL_endzd2resultzd2);
			}
		}
	}



/* _nothread-end-exception-set! */
	obj_t BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00(obj_t
		BgL_envz00_2889, obj_t BgL_obj1815z00_2890, obj_t BgL_val1814z00_2891)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 161 */
			{	/* Llib/thread.scm 161 */
				BgL_nothreadz00_bglt BgL_obj1815z00_3345;

				obj_t BgL_val1814z00_3346;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1815z00_2890,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 161 */
						BgL_obj1815z00_3345 = (BgL_nothreadz00_bglt) (BgL_obj1815z00_2890);
					}
				else
					{
						obj_t BgL_auxz00_4167;

						BgL_auxz00_4167 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5692)), BGl_string2843z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1815z00_2890);
						FAILURE(BgL_auxz00_4167, BFALSE, BFALSE);
					}
				BgL_val1814z00_3346 = BgL_val1814z00_2891;
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_obj1815z00_3345))->
						BgL_endzd2exceptionzd2) = ((obj_t) BgL_val1814z00_3346), BUNSPEC);
			}
		}
	}



/* _nothread-end-exception */
	obj_t BGl__nothreadzd2endzd2exceptionz00zz__threadz00(obj_t BgL_envz00_2887,
		obj_t BgL_obj1813z00_2888)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 161 */
			{	/* Llib/thread.scm 161 */
				BgL_nothreadz00_bglt BgL_obj1813z00_3348;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1813z00_2888,
						BGl_nothreadz00zz__threadz00))
					{	/* Llib/thread.scm 161 */
						BgL_obj1813z00_3348 = (BgL_nothreadz00_bglt) (BgL_obj1813z00_2888);
					}
				else
					{
						obj_t BgL_auxz00_4175;

						BgL_auxz00_4175 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5692)), BGl_string2844z00zz__threadz00,
							BGl_string2771z00zz__threadz00, BgL_obj1813z00_2888);
						FAILURE(BgL_auxz00_4175, BFALSE, BFALSE);
					}
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_obj1813z00_3348))->
					BgL_endzd2exceptionzd2);
			}
		}
	}



/* thread? */
	BGL_EXPORTED_DEF bool_t BGl_threadzf3zf3zz__threadz00(obj_t
		BgL_obj1786z00_140)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1786z00_140,
				BGl_threadz00zz__threadz00);
		}
	}



/* _thread? */
	obj_t BGl__threadzf3zf3zz__threadz00(obj_t BgL_envz00_2858,
		obj_t BgL_obj1786z00_2859)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1786z00_2859,
					BGl_threadz00zz__threadz00));
		}
	}



/* fill-thread! */
	BGL_EXPORTED_DEF BgL_threadz00_bglt
		BGl_fillzd2threadz12zc0zz__threadz00(BgL_threadz00_bglt BgL_new1782z00_141,
		obj_t BgL_name1781z00_142)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{	/* Llib/thread.scm 150 */
				obj_t BgL_name1781z00_3350;

				BgL_name1781z00_3350 = BgL_name1781z00_142;
				((((BgL_threadz00_bglt) CREF(BgL_new1782z00_141))->BgL_namez00) =
					((obj_t) BgL_name1781z00_3350), BUNSPEC);
				return BgL_new1782z00_141;
			}
		}
	}



/* _fill-thread! */
	obj_t BGl__fillzd2threadz12zc0zz__threadz00(obj_t BgL_envz00_2912,
		obj_t BgL_new1782z00_2913, obj_t BgL_name1781z00_2914)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{	/* Llib/thread.scm 150 */
				BgL_threadz00_bglt BgL_auxz00_4184;

				{	/* Llib/thread.scm 150 */
					BgL_threadz00_bglt BgL_res2952z00_3355;

					{	/* Llib/thread.scm 150 */
						BgL_threadz00_bglt BgL_new1782z00_3352;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1782z00_2913,
								BGl_threadz00zz__threadz00))
							{	/* Llib/thread.scm 150 */
								BgL_new1782z00_3352 =
									(BgL_threadz00_bglt) (BgL_new1782z00_2913);
							}
						else
							{
								obj_t BgL_auxz00_4188;

								BgL_auxz00_4188 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2772z00zz__threadz00, BINT(((long) 5248)),
									BGl_string2845z00zz__threadz00,
									BGl_string2779z00zz__threadz00, BgL_new1782z00_2913);
								FAILURE(BgL_auxz00_4188, BFALSE, BFALSE);
							}
						{	/* Llib/thread.scm 150 */
							obj_t BgL_name1781z00_3354;

							BgL_name1781z00_3354 = BgL_name1781z00_2914;
							((((BgL_threadz00_bglt) CREF(BgL_new1782z00_3352))->BgL_namez00) =
								((obj_t) BgL_name1781z00_3354), BUNSPEC);
							BgL_res2952z00_3355 = BgL_new1782z00_3352;
					}}
					BgL_auxz00_4184 = BgL_res2952z00_3355;
				}
				return (obj_t) (BgL_auxz00_4184);
			}
		}
	}



/* %allocate-thread */
	BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_z52allocatezd2threadz80zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{	/* Llib/thread.scm 150 */
				BgL_threadz00_bglt BgL_new1785z00_3356;

				BgL_new1785z00_3356 =
					((BgL_threadz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_threadz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1785z00_3356),
					BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00));
				{	/* Llib/thread.scm 150 */
					BgL_objectz00_bglt BgL_auxz00_4198;

					BgL_auxz00_4198 = (BgL_objectz00_bglt) (BgL_new1785z00_3356);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4198, BFALSE);
				}
				return BgL_new1785z00_3356;
			}
		}
	}



/* _%allocate-thread */
	obj_t BGl__z52allocatezd2threadz80zz__threadz00(obj_t BgL_envz00_2915)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			{	/* Llib/thread.scm 150 */
				BgL_threadz00_bglt BgL_auxz00_4201;

				{	/* Llib/thread.scm 150 */
					BgL_threadz00_bglt BgL_res2953z00_3360;

					{	/* Llib/thread.scm 150 */
						BgL_threadz00_bglt BgL_new1785z00_3358;

						BgL_new1785z00_3358 =
							((BgL_threadz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_threadz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1785z00_3358),
							BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00));
						{	/* Llib/thread.scm 150 */
							BgL_objectz00_bglt BgL_auxz00_4206;

							BgL_auxz00_4206 = (BgL_objectz00_bglt) (BgL_new1785z00_3358);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4206, BFALSE);
						}
						BgL_res2953z00_3360 = BgL_new1785z00_3358;
					}
					BgL_auxz00_4201 = BgL_res2953z00_3360;
				}
				return (obj_t) (BgL_auxz00_4201);
			}
		}
	}



/* thread-nil */
	BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_threadzd2nilzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			if ((BGl_z52thezd2threadzd2nilz52zz__threadz00 == BUNSPEC))
				{	/* Llib/thread.scm 150 */
					{	/* Llib/thread.scm 150 */
						BgL_threadz00_bglt BgL_res2549z00_2018;

						{	/* Llib/thread.scm 150 */
							BgL_threadz00_bglt BgL_new1785z00_2014;

							BgL_new1785z00_2014 =
								((BgL_threadz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_threadz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1785z00_2014),
								BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00));
							{	/* Llib/thread.scm 150 */
								BgL_objectz00_bglt BgL_auxz00_4216;

								BgL_auxz00_4216 = (BgL_objectz00_bglt) (BgL_new1785z00_2014);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4216, BFALSE);
							}
							BgL_res2549z00_2018 = BgL_new1785z00_2014;
						}
						BGl_z52thezd2threadzd2nilz52zz__threadz00 =
							(obj_t) (BgL_res2549z00_2018);
					}
					{	/* Llib/thread.scm 150 */
						BgL_threadz00_bglt BgL_res2550z00_2022;

						{	/* Llib/thread.scm 150 */
							BgL_threadz00_bglt BgL_new1782z00_2019;

							BgL_new1782z00_2019 =
								(BgL_threadz00_bglt)
								(BGl_z52thezd2threadzd2nilz52zz__threadz00);
							{	/* Llib/thread.scm 150 */
								obj_t BgL_name1781z00_2021;

								BgL_name1781z00_2021 = BUNSPEC;
								((((BgL_threadz00_bglt) CREF(BgL_new1782z00_2019))->
										BgL_namez00) = ((obj_t) BgL_name1781z00_2021), BUNSPEC);
								BgL_res2550z00_2022 = BgL_new1782z00_2019;
						}}
						(obj_t) (BgL_res2550z00_2022);
				}}
			else
				{	/* Llib/thread.scm 150 */
					BFALSE;
				}
			return (BgL_threadz00_bglt) (BGl_z52thezd2threadzd2nilz52zz__threadz00);
		}
	}



/* _thread-nil */
	obj_t BGl__threadzd2nilzd2zz__threadz00(obj_t BgL_envz00_2857)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 150 */
			return (obj_t) (BGl_threadzd2nilzd2zz__threadz00());
		}
	}



/* _thread-name-set! */
	obj_t BGl__threadzd2namezd2setz12z12zz__threadz00(obj_t BgL_envz00_2834,
		obj_t BgL_obj1774z00_2835, obj_t BgL_val1773z00_2836)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 152 */
			{	/* Llib/thread.scm 152 */
				BgL_threadz00_bglt BgL_obj1774z00_3362;

				obj_t BgL_val1773z00_3363;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1774z00_2835,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 152 */
						BgL_obj1774z00_3362 = (BgL_threadz00_bglt) (BgL_obj1774z00_2835);
					}
				else
					{
						obj_t BgL_auxz00_4229;

						BgL_auxz00_4229 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5308)), BGl_string2846z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1774z00_2835);
						FAILURE(BgL_auxz00_4229, BFALSE, BFALSE);
					}
				BgL_val1773z00_3363 = BgL_val1773z00_2836;
				return
					((((BgL_threadz00_bglt) CREF(BgL_obj1774z00_3362))->BgL_namez00) =
					((obj_t) BgL_val1773z00_3363), BUNSPEC);
			}
		}
	}



/* _thread-name */
	obj_t BGl__threadzd2namezd2zz__threadz00(obj_t BgL_envz00_2832,
		obj_t BgL_obj1772z00_2833)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 152 */
			{	/* Llib/thread.scm 152 */
				BgL_threadz00_bglt BgL_obj1772z00_3365;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1772z00_2833,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 152 */
						BgL_obj1772z00_3365 = (BgL_threadz00_bglt) (BgL_obj1772z00_2833);
					}
				else
					{
						obj_t BgL_auxz00_4237;

						BgL_auxz00_4237 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5308)), BGl_string2847z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1772z00_2833);
						FAILURE(BgL_auxz00_4237, BFALSE, BFALSE);
					}
				return (((BgL_threadz00_bglt) CREF(BgL_obj1772z00_3365))->BgL_namez00);
			}
		}
	}



/* _thread-specific-set! */
	obj_t BGl__threadzd2specificzd2setz12z12zz__threadz00(obj_t BgL_envz00_2839,
		obj_t BgL_obj1777z00_2840, obj_t BgL_val1776z00_2841)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 153 */
			{	/* Llib/thread.scm 153 */
				BgL_threadz00_bglt BgL_obj1777z00_3367;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1777z00_2840,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 153 */
						BgL_obj1777z00_3367 = (BgL_threadz00_bglt) (BgL_obj1777z00_2840);
					}
				else
					{
						obj_t BgL_auxz00_4245;

						BgL_auxz00_4245 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5350)), BGl_string2848z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1777z00_2840);
						FAILURE(BgL_auxz00_4245, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1777z00_3367),
					(int) (((long) 0)), BgL_val1776z00_2841);
		}}
	}



/* _thread-specific */
	obj_t BGl__threadzd2specificzd2zz__threadz00(obj_t BgL_envz00_2837,
		obj_t BgL_obj1775z00_2838)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 153 */
			{	/* Llib/thread.scm 153 */
				BgL_threadz00_bglt BgL_obj1775z00_3370;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1775z00_2838,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 153 */
						BgL_obj1775z00_3370 = (BgL_threadz00_bglt) (BgL_obj1775z00_2838);
					}
				else
					{
						obj_t BgL_auxz00_4255;

						BgL_auxz00_4255 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5350)), BGl_string2849z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1775z00_2838);
						FAILURE(BgL_auxz00_4255, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1775z00_3370), (int) (((long) 0)));
		}}
	}



/* _thread-cleanup-set! */
	obj_t BGl__threadzd2cleanupzd2setz12z12zz__threadz00(obj_t BgL_envz00_2844,
		obj_t BgL_obj1780z00_2845, obj_t BgL_val1779z00_2846)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 154 */
			{	/* Llib/thread.scm 154 */
				BgL_threadz00_bglt BgL_obj1780z00_3372;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1780z00_2845,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 154 */
						BgL_obj1780z00_3372 = (BgL_threadz00_bglt) (BgL_obj1780z00_2845);
					}
				else
					{
						obj_t BgL_auxz00_4265;

						BgL_auxz00_4265 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5422)), BGl_string2850z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1780z00_2845);
						FAILURE(BgL_auxz00_4265, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1780z00_3372),
					(int) (((long) 1)), BgL_val1779z00_2846);
		}}
	}



/* _thread-cleanup */
	obj_t BGl__threadzd2cleanupzd2zz__threadz00(obj_t BgL_envz00_2842,
		obj_t BgL_obj1778z00_2843)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 154 */
			{	/* Llib/thread.scm 154 */
				BgL_threadz00_bglt BgL_obj1778z00_3375;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1778z00_2843,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 154 */
						BgL_obj1778z00_3375 = (BgL_threadz00_bglt) (BgL_obj1778z00_2843);
					}
				else
					{
						obj_t BgL_auxz00_4275;

						BgL_auxz00_4275 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5422)), BGl_string2851z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_obj1778z00_2843);
						FAILURE(BgL_auxz00_4275, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(
					(BgL_objectz00_bglt) (BgL_obj1778z00_3375), (int) (((long) 1)));
		}}
	}



/* thread-backend? */
	BGL_EXPORTED_DEF bool_t BGl_threadzd2backendzf3z21zz__threadz00(obj_t
		BgL_obj1771z00_152)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1771z00_152,
				BGl_threadzd2backendzd2zz__threadz00);
		}
	}



/* _thread-backend? */
	obj_t BGl__threadzd2backendzf3z21zz__threadz00(obj_t BgL_envz00_2830,
		obj_t BgL_obj1771z00_2831)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1771z00_2831,
					BGl_threadzd2backendzd2zz__threadz00));
		}
	}



/* make-thread-backend */
	BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt
		BGl_makezd2threadzd2backendz00zz__threadz00(obj_t BgL_name1757z00_156)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				BgL_threadzd2backendzd2_bglt BgL_new1758z00_2023;

				{	/* Llib/thread.scm 147 */
					BgL_threadzd2backendzd2_bglt BgL_res2551z00_2028;

					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_new1764z00_2024;

						BgL_new1764z00_2024 =
							((BgL_threadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_threadzd2backendzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1764z00_2024),
							BGl_classzd2numzd2zz__objectz00
							(BGl_threadzd2backendzd2zz__threadz00));
						{	/* Llib/thread.scm 147 */
							BgL_objectz00_bglt BgL_auxz00_4289;

							BgL_auxz00_4289 = (BgL_objectz00_bglt) (BgL_new1764z00_2024);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4289, BFALSE);
						}
						BgL_res2551z00_2028 = BgL_new1764z00_2024;
					}
					BgL_new1758z00_2023 = BgL_res2551z00_2028;
				}
				{	/* Llib/thread.scm 147 */
					BgL_threadzd2backendzd2_bglt BgL_res2552z00_2032;

					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_new1761z00_2029;

						BgL_new1761z00_2029 = BgL_new1758z00_2023;
						{	/* Llib/thread.scm 147 */
							obj_t BgL_name1760z00_2031;

							BgL_name1760z00_2031 = BgL_name1757z00_156;
							((((BgL_threadzd2backendzd2_bglt) CREF(BgL_new1761z00_2029))->
									BgL_namez00) = ((obj_t) BgL_name1760z00_2031), BUNSPEC);
							BgL_res2552z00_2032 = BgL_new1761z00_2029;
					}} BgL_res2552z00_2032;
				}
				return BgL_new1758z00_2023;
			}
		}
	}



/* _make-thread-backend */
	obj_t BGl__makezd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2824,
		obj_t BgL_name1757z00_2825)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4293;

				{	/* Llib/thread.scm 147 */
					obj_t BgL_auxz00_4294;

					if (STRINGP(BgL_name1757z00_2825))
						{	/* Llib/thread.scm 147 */
							BgL_auxz00_4294 = BgL_name1757z00_2825;
						}
					else
						{
							obj_t BgL_auxz00_4297;

							BgL_auxz00_4297 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 5185)), BGl_string2852z00zz__threadz00,
								BGl_string2777z00zz__threadz00, BgL_name1757z00_2825);
							FAILURE(BgL_auxz00_4297, BFALSE, BFALSE);
						}
					BgL_auxz00_4293 =
						BGl_makezd2threadzd2backendz00zz__threadz00(BgL_auxz00_4294);
				}
				return (obj_t) (BgL_auxz00_4293);
			}
		}
	}



/* fill-thread-backend! */
	BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt
		BGl_fillzd2threadzd2backendz12z12zz__threadz00(BgL_threadzd2backendzd2_bglt
		BgL_new1761z00_157, obj_t BgL_name1760z00_158)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				obj_t BgL_name1760z00_3377;

				BgL_name1760z00_3377 = BgL_name1760z00_158;
				((((BgL_threadzd2backendzd2_bglt) CREF(BgL_new1761z00_157))->
						BgL_namez00) = ((obj_t) BgL_name1760z00_3377), BUNSPEC);
				return BgL_new1761z00_157;
			}
		}
	}



/* _fill-thread-backend! */
	obj_t BGl__fillzd2threadzd2backendz12z12zz__threadz00(obj_t BgL_envz00_2916,
		obj_t BgL_new1761z00_2917, obj_t BgL_name1760z00_2918)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4304;

				{	/* Llib/thread.scm 147 */
					BgL_threadzd2backendzd2_bglt BgL_res2954z00_3382;

					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_new1761z00_3379;

						obj_t BgL_name1760z00_3380;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1761z00_2917,
								BGl_threadzd2backendzd2zz__threadz00))
							{	/* Llib/thread.scm 147 */
								BgL_new1761z00_3379 =
									(BgL_threadzd2backendzd2_bglt) (BgL_new1761z00_2917);
							}
						else
							{
								obj_t BgL_auxz00_4308;

								BgL_auxz00_4308 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2772z00zz__threadz00, BINT(((long) 5185)),
									BGl_string2853z00zz__threadz00,
									BGl_string2774z00zz__threadz00, BgL_new1761z00_2917);
								FAILURE(BgL_auxz00_4308, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_name1760z00_2918))
							{	/* Llib/thread.scm 147 */
								BgL_name1760z00_3380 = BgL_name1760z00_2918;
							}
						else
							{
								obj_t BgL_auxz00_4314;

								BgL_auxz00_4314 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2772z00zz__threadz00, BINT(((long) 5185)),
									BGl_string2853z00zz__threadz00,
									BGl_string2777z00zz__threadz00, BgL_name1760z00_2918);
								FAILURE(BgL_auxz00_4314, BFALSE, BFALSE);
							}
						{	/* Llib/thread.scm 147 */
							obj_t BgL_name1760z00_3381;

							BgL_name1760z00_3381 = BgL_name1760z00_3380;
							((((BgL_threadzd2backendzd2_bglt) CREF(BgL_new1761z00_3379))->
									BgL_namez00) = ((obj_t) BgL_name1760z00_3381), BUNSPEC);
							BgL_res2954z00_3382 = BgL_new1761z00_3379;
					}}
					BgL_auxz00_4304 = BgL_res2954z00_3382;
				}
				return (obj_t) (BgL_auxz00_4304);
			}
		}
	}



/* %allocate-thread-backend */
	BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt
		BGl_z52allocatezd2threadzd2backendz52zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				BgL_threadzd2backendzd2_bglt BgL_new1764z00_3383;

				BgL_new1764z00_3383 =
					((BgL_threadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_threadzd2backendzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1764z00_3383),
					BGl_classzd2numzd2zz__objectz00
					(BGl_threadzd2backendzd2zz__threadz00));
				{	/* Llib/thread.scm 147 */
					BgL_objectz00_bglt BgL_auxz00_4324;

					BgL_auxz00_4324 = (BgL_objectz00_bglt) (BgL_new1764z00_3383);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4324, BFALSE);
				}
				return BgL_new1764z00_3383;
			}
		}
	}



/* _%allocate-thread-backend */
	obj_t BGl__z52allocatezd2threadzd2backendz52zz__threadz00(obj_t
		BgL_envz00_2826)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{	/* Llib/thread.scm 147 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4327;

				{	/* Llib/thread.scm 147 */
					BgL_threadzd2backendzd2_bglt BgL_res2955z00_3387;

					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_new1764z00_3385;

						BgL_new1764z00_3385 =
							((BgL_threadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_threadzd2backendzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1764z00_3385),
							BGl_classzd2numzd2zz__objectz00
							(BGl_threadzd2backendzd2zz__threadz00));
						{	/* Llib/thread.scm 147 */
							BgL_objectz00_bglt BgL_auxz00_4332;

							BgL_auxz00_4332 = (BgL_objectz00_bglt) (BgL_new1764z00_3385);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4332, BFALSE);
						}
						BgL_res2955z00_3387 = BgL_new1764z00_3385;
					}
					BgL_auxz00_4327 = BgL_res2955z00_3387;
				}
				return (obj_t) (BgL_auxz00_4327);
			}
		}
	}



/* thread-backend-nil */
	BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt
		BGl_threadzd2backendzd2nilz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			if ((BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 == BUNSPEC))
				{	/* Llib/thread.scm 147 */
					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_res2553z00_2042;

						{	/* Llib/thread.scm 147 */
							BgL_threadzd2backendzd2_bglt BgL_new1764z00_2038;

							BgL_new1764z00_2038 =
								((BgL_threadzd2backendzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_threadzd2backendzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1764z00_2038),
								BGl_classzd2numzd2zz__objectz00
								(BGl_threadzd2backendzd2zz__threadz00));
							{	/* Llib/thread.scm 147 */
								BgL_objectz00_bglt BgL_auxz00_4342;

								BgL_auxz00_4342 = (BgL_objectz00_bglt) (BgL_new1764z00_2038);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4342, BFALSE);
							}
							BgL_res2553z00_2042 = BgL_new1764z00_2038;
						}
						BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 =
							(obj_t) (BgL_res2553z00_2042);
					}
					{	/* Llib/thread.scm 147 */
						BgL_threadzd2backendzd2_bglt BgL_res2554z00_2046;

						{	/* Llib/thread.scm 147 */
							BgL_threadzd2backendzd2_bglt BgL_new1761z00_2043;

							BgL_new1761z00_2043 =
								(BgL_threadzd2backendzd2_bglt)
								(BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00);
							{	/* Llib/thread.scm 147 */
								obj_t BgL_name1760z00_2045;

								BgL_name1760z00_2045 = BGl_string2833z00zz__threadz00;
								((((BgL_threadzd2backendzd2_bglt) CREF(BgL_new1761z00_2043))->
										BgL_namez00) = ((obj_t) BgL_name1760z00_2045), BUNSPEC);
								BgL_res2554z00_2046 = BgL_new1761z00_2043;
						}}
						(obj_t) (BgL_res2554z00_2046);
				}}
			else
				{	/* Llib/thread.scm 147 */
					BFALSE;
				}
			return
				(BgL_threadzd2backendzd2_bglt)
				(BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00);
		}
	}



/* _thread-backend-nil */
	obj_t BGl__threadzd2backendzd2nilz00zz__threadz00(obj_t BgL_envz00_2829)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			return (obj_t) (BGl_threadzd2backendzd2nilz00zz__threadz00());
		}
	}



/* _thread-backend-name */
	obj_t BGl__threadzd2backendzd2namez00zz__threadz00(obj_t BgL_envz00_2827,
		obj_t BgL_obj1756z00_2828)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 148 */
			{	/* Llib/thread.scm 148 */
				BgL_threadzd2backendzd2_bglt BgL_obj1756z00_3389;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1756z00_2828,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 148 */
						BgL_obj1756z00_3389 =
							(BgL_threadzd2backendzd2_bglt) (BgL_obj1756z00_2828);
					}
				else
					{
						obj_t BgL_auxz00_4355;

						BgL_auxz00_4355 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 5215)), BGl_string2854z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_obj1756z00_2828);
						FAILURE(BgL_auxz00_4355, BFALSE, BFALSE);
					}
				return
					(((BgL_threadzd2backendzd2_bglt) CREF(BgL_obj1756z00_3389))->
					BgL_namez00);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
				BGl_tbzd2makezd2threadzd2defau1945zd2envz00zz__threadz00,
				BGl_threadzd2backendzd2zz__threadz00, BGl_string2855z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
				BGl_tbzd2currentzd2threadzd2de1947zd2envz00zz__threadz00,
				BGl_threadzd2backendzd2zz__threadz00, BGl_string2856z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
				BGl_threadzd2initializa7ez12zd2d1960zd2envz67zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2857z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2startz12zd2envz12zz__threadz00,
				BGl_threadzd2startz12zd2defaul1962zd2envzc0zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2858z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
				BGl_threadzd2startzd2joinabl1964zd2envzd2zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2859z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2joinz12zd2envz12zz__threadz00,
				BGl_threadzd2joinz12zd2default1967zd2envzc0zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2860z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
				BGl_threadzd2terminatez12zd2de1969zd2envzc0zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2861z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00,
				BGl_threadzd2getzd2specificzd21971zd2envz00zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2862z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00,
				BGl_threadzd2setzd2specificz121973zd2envzc0zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2863z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00,
				BGl_threadzd2getzd2cleanupzd2d1975zd2envz00zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2864z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00,
				BGl_threadzd2setzd2cleanupz12zd21977zd2envz12zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2865z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
				BGl_z52userzd2currentzd2thread1982zd2envz80zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2866z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
				BGl_z52userzd2threadzd2sleepz12zd21984zd2envz40zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2867z00zz__threadz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
				BGl_z52userzd2threadzd2yieldz12zd21986zd2envz40zz__threadz00,
				BGl_threadz00zz__threadz00, BGl_string2868z00zz__threadz00);
		}
	}



/* tb-make-thread */
	BGL_EXPORTED_DEF BgL_threadz00_bglt
		BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt
		BgL_tbz00_5, obj_t BgL_bodyz00_6, obj_t BgL_namez00_7)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 281 */
			{	/* Llib/thread.scm 281 */
				obj_t BgL_method1946z00_2047;

				{	/* Llib/thread.scm 281 */
					BgL_objectz00_bglt BgL_objz00_2048;

					BgL_objz00_2048 = (BgL_objectz00_bglt) (BgL_tbz00_5);
					{	/* Llib/thread.scm 281 */
						long BgL_objzd2classzd2numz00_2049;

						BgL_objzd2classzd2numz00_2049 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2048);
						{	/* Llib/thread.scm 281 */
							obj_t BgL_arg2518z00_2050;

							BgL_arg2518z00_2050 =
								PROCEDURE_REF(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 281 */
								obj_t BgL_arrayz00_2052;

								int BgL_offsetz00_2053;

								BgL_arrayz00_2052 = BgL_arg2518z00_2050;
								BgL_offsetz00_2053 = (int) (BgL_objzd2classzd2numz00_2049);
								{	/* Llib/thread.scm 281 */
									long BgL_offsetz00_2054;

									BgL_offsetz00_2054 =
										((long) (BgL_offsetz00_2053) - OBJECT_TYPE);
									{	/* Llib/thread.scm 281 */
										long BgL_modz00_2055;

										{	/* Llib/thread.scm 281 */
											int BgL_arg2520z00_2056;

											BgL_arg2520z00_2056 = (int) (((long) 16));
											{	/* Llib/thread.scm 281 */
												long BgL_auxz00_4382;

												BgL_auxz00_4382 = (long) (BgL_arg2520z00_2056);
												BgL_modz00_2055 =
													(BgL_offsetz00_2054 / BgL_auxz00_4382);
										}}
										{	/* Llib/thread.scm 281 */
											long BgL_restz00_2057;

											{	/* Llib/thread.scm 281 */
												int BgL_arg2519z00_2058;

												BgL_arg2519z00_2058 = (int) (((long) 16));
												{	/* Llib/thread.scm 281 */
													long BgL_auxz00_4386;

													BgL_auxz00_4386 = (long) (BgL_arg2519z00_2058);
													BgL_restz00_2057 =
														(BgL_offsetz00_2054 % BgL_auxz00_4386);
											}}
											{	/* Llib/thread.scm 281 */

												BgL_method1946z00_2047 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2052,
														(int) (BgL_modz00_2055)), (int) (BgL_restz00_2057));
				}}}}}}}}
				return
					(BgL_threadz00_bglt) (PROCEDURE_ENTRY(BgL_method1946z00_2047)
					(BgL_method1946z00_2047, (obj_t) (BgL_tbz00_5), BgL_bodyz00_6,
						BgL_namez00_7, BEOA));
			}
		}
	}



/* _tb-make-thread */
	obj_t BGl__tbzd2makezd2threadz00zz__threadz00(obj_t BgL_envz00_2919,
		obj_t BgL_tbz00_2920, obj_t BgL_bodyz00_2921, obj_t BgL_namez00_2922)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 281 */
			{	/* Llib/thread.scm 281 */
				BgL_threadz00_bglt BgL_auxz00_4397;

				{	/* Llib/thread.scm 281 */
					obj_t BgL_auxz00_4406;

					BgL_threadzd2backendzd2_bglt BgL_auxz00_4398;

					if (PROCEDUREP(BgL_bodyz00_2921))
						{	/* Llib/thread.scm 281 */
							BgL_auxz00_4406 = BgL_bodyz00_2921;
						}
					else
						{
							obj_t BgL_auxz00_4409;

							BgL_auxz00_4409 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 10990)), BGl_string2869z00zz__threadz00,
								BGl_string2781z00zz__threadz00, BgL_bodyz00_2921);
							FAILURE(BgL_auxz00_4409, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2920,
							BGl_threadzd2backendzd2zz__threadz00))
						{	/* Llib/thread.scm 281 */
							BgL_auxz00_4398 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2920);
						}
					else
						{
							obj_t BgL_auxz00_4402;

							BgL_auxz00_4402 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 10990)), BGl_string2869z00zz__threadz00,
								BGl_string2774z00zz__threadz00, BgL_tbz00_2920);
							FAILURE(BgL_auxz00_4402, BFALSE, BFALSE);
						}
					BgL_auxz00_4397 =
						BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4398,
						BgL_auxz00_4406, BgL_namez00_2922);
				}
				return (obj_t) (BgL_auxz00_4397);
			}
		}
	}



/* tb-make-thread-defau1945 */
	obj_t
		BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_8, obj_t BgL_bodyz00_9,
		obj_t BgL_namez00_10)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2870z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_tbz00_8));
		}
	}



/* _tb-make-thread-defau1945 */
	obj_t BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00(obj_t
		BgL_envz00_2923, obj_t BgL_tbz00_2924, obj_t BgL_bodyz00_2925,
		obj_t BgL_namez00_2926)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4417;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2924,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4417 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2924);
					}
				else
					{
						obj_t BgL_auxz00_4421;

						BgL_auxz00_4421 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2873z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_tbz00_2924);
						FAILURE(BgL_auxz00_4421, BFALSE, BFALSE);
					}
				return
					BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00(BgL_auxz00_4417,
					BgL_bodyz00_2925, BgL_namez00_2926);
			}
		}
	}



/* tb-current-thread */
	BGL_EXPORTED_DEF obj_t
		BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt
		BgL_tbz00_11)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 286 */
			{	/* Llib/thread.scm 286 */
				obj_t BgL_method1949z00_2072;

				{	/* Llib/thread.scm 286 */
					BgL_objectz00_bglt BgL_objz00_2073;

					BgL_objz00_2073 = (BgL_objectz00_bglt) (BgL_tbz00_11);
					{	/* Llib/thread.scm 286 */
						long BgL_objzd2classzd2numz00_2074;

						BgL_objzd2classzd2numz00_2074 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2073);
						{	/* Llib/thread.scm 286 */
							obj_t BgL_arg2518z00_2075;

							BgL_arg2518z00_2075 =
								PROCEDURE_REF(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 286 */
								obj_t BgL_arrayz00_2077;

								int BgL_offsetz00_2078;

								BgL_arrayz00_2077 = BgL_arg2518z00_2075;
								BgL_offsetz00_2078 = (int) (BgL_objzd2classzd2numz00_2074);
								{	/* Llib/thread.scm 286 */
									long BgL_offsetz00_2079;

									BgL_offsetz00_2079 =
										((long) (BgL_offsetz00_2078) - OBJECT_TYPE);
									{	/* Llib/thread.scm 286 */
										long BgL_modz00_2080;

										{	/* Llib/thread.scm 286 */
											int BgL_arg2520z00_2081;

											BgL_arg2520z00_2081 = (int) (((long) 16));
											{	/* Llib/thread.scm 286 */
												long BgL_auxz00_4434;

												BgL_auxz00_4434 = (long) (BgL_arg2520z00_2081);
												BgL_modz00_2080 =
													(BgL_offsetz00_2079 / BgL_auxz00_4434);
										}}
										{	/* Llib/thread.scm 286 */
											long BgL_restz00_2082;

											{	/* Llib/thread.scm 286 */
												int BgL_arg2519z00_2083;

												BgL_arg2519z00_2083 = (int) (((long) 16));
												{	/* Llib/thread.scm 286 */
													long BgL_auxz00_4438;

													BgL_auxz00_4438 = (long) (BgL_arg2519z00_2083);
													BgL_restz00_2082 =
														(BgL_offsetz00_2079 % BgL_auxz00_4438);
											}}
											{	/* Llib/thread.scm 286 */

												BgL_method1949z00_2072 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2077,
														(int) (BgL_modz00_2080)), (int) (BgL_restz00_2082));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1949z00_2072) (BgL_method1949z00_2072,
					(obj_t) (BgL_tbz00_11), BEOA);
			}
		}
	}



/* _tb-current-thread */
	obj_t BGl__tbzd2currentzd2threadz00zz__threadz00(obj_t BgL_envz00_2784,
		obj_t BgL_tbz00_2785)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 286 */
			{	/* Llib/thread.scm 286 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4448;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2785,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 286 */
						BgL_auxz00_4448 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2785);
					}
				else
					{
						obj_t BgL_auxz00_4452;

						BgL_auxz00_4452 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 11276)), BGl_string2874z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_tbz00_2785);
						FAILURE(BgL_auxz00_4452, BFALSE, BFALSE);
					}
				return BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_auxz00_4448);
			}
		}
	}



/* tb-current-thread-de1947 */
	obj_t
		BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_12)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2875z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_tbz00_12));
		}
	}



/* _tb-current-thread-de1947 */
	obj_t BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00(obj_t
		BgL_envz00_2927, obj_t BgL_tbz00_2928)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4459;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2928,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4459 = (BgL_threadzd2backendzd2_bglt) (BgL_tbz00_2928);
					}
				else
					{
						obj_t BgL_auxz00_4463;

						BgL_auxz00_4463 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2877z00zz__threadz00,
							BGl_string2774z00zz__threadz00, BgL_tbz00_2928);
						FAILURE(BgL_auxz00_4463, BFALSE, BFALSE);
					}
				return
					BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00(BgL_auxz00_4459);
			}
		}
	}



/* thread-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_24)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 334 */
			{	/* Llib/thread.scm 334 */
				obj_t BgL_method1961z00_2097;

				{	/* Llib/thread.scm 334 */
					BgL_objectz00_bglt BgL_objz00_2098;

					BgL_objz00_2098 = (BgL_objectz00_bglt) (BgL_thz00_24);
					{	/* Llib/thread.scm 334 */
						long BgL_objzd2classzd2numz00_2099;

						BgL_objzd2classzd2numz00_2099 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
						{	/* Llib/thread.scm 334 */
							obj_t BgL_arg2518z00_2100;

							BgL_arg2518z00_2100 =
								PROCEDURE_REF
								(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 334 */
								obj_t BgL_arrayz00_2102;

								int BgL_offsetz00_2103;

								BgL_arrayz00_2102 = BgL_arg2518z00_2100;
								BgL_offsetz00_2103 = (int) (BgL_objzd2classzd2numz00_2099);
								{	/* Llib/thread.scm 334 */
									long BgL_offsetz00_2104;

									BgL_offsetz00_2104 =
										((long) (BgL_offsetz00_2103) - OBJECT_TYPE);
									{	/* Llib/thread.scm 334 */
										long BgL_modz00_2105;

										{	/* Llib/thread.scm 334 */
											int BgL_arg2520z00_2106;

											BgL_arg2520z00_2106 = (int) (((long) 16));
											{	/* Llib/thread.scm 334 */
												long BgL_auxz00_4476;

												BgL_auxz00_4476 = (long) (BgL_arg2520z00_2106);
												BgL_modz00_2105 =
													(BgL_offsetz00_2104 / BgL_auxz00_4476);
										}}
										{	/* Llib/thread.scm 334 */
											long BgL_restz00_2107;

											{	/* Llib/thread.scm 334 */
												int BgL_arg2519z00_2108;

												BgL_arg2519z00_2108 = (int) (((long) 16));
												{	/* Llib/thread.scm 334 */
													long BgL_auxz00_4480;

													BgL_auxz00_4480 = (long) (BgL_arg2519z00_2108);
													BgL_restz00_2107 =
														(BgL_offsetz00_2104 % BgL_auxz00_4480);
											}}
											{	/* Llib/thread.scm 334 */

												BgL_method1961z00_2097 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2102,
														(int) (BgL_modz00_2105)), (int) (BgL_restz00_2107));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1961z00_2097) (BgL_method1961z00_2097,
					(obj_t) (BgL_thz00_24), BEOA);
			}
		}
	}



/* _thread-initialize! */
	obj_t BGl__threadzd2initializa7ez12z67zz__threadz00(obj_t BgL_envz00_2860,
		obj_t BgL_thz00_2861)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 334 */
			{	/* Llib/thread.scm 334 */
				BgL_threadz00_bglt BgL_auxz00_4490;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2861,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 334 */
						BgL_auxz00_4490 = (BgL_threadz00_bglt) (BgL_thz00_2861);
					}
				else
					{
						obj_t BgL_auxz00_4494;

						BgL_auxz00_4494 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 13720)), BGl_string2878z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2861);
						FAILURE(BgL_auxz00_4494, BFALSE, BFALSE);
					}
				return BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_auxz00_4490);
			}
		}
	}



/* _thread-initialize!-d1960 */
	obj_t BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00(obj_t
		BgL_envz00_2929, obj_t BgL_thz00_2930)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4499;

				{	/* Llib/thread.scm 17 */
					BgL_threadz00_bglt BgL_thz00_3396;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2930,
							BGl_threadz00zz__threadz00))
						{	/* Llib/thread.scm 17 */
							BgL_thz00_3396 = (BgL_threadz00_bglt) (BgL_thz00_2930);
						}
					else
						{
							obj_t BgL_auxz00_4503;

							BgL_auxz00_4503 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 1111)), BGl_string2879z00zz__threadz00,
								BGl_string2779z00zz__threadz00, BgL_thz00_2930);
							FAILURE(BgL_auxz00_4503, BFALSE, BFALSE);
						}
					BgL_auxz00_4499 = BgL_thz00_3396;
				}
				return (obj_t) (BgL_auxz00_4499);
			}
		}
	}



/* thread-start! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_26,
		obj_t BgL_scz00_27)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 340 */
			{	/* Llib/thread.scm 340 */
				obj_t BgL_method1963z00_2122;

				{	/* Llib/thread.scm 340 */
					BgL_objectz00_bglt BgL_objz00_2124;

					BgL_objz00_2124 = (BgL_objectz00_bglt) (BgL_thz00_26);
					{	/* Llib/thread.scm 340 */
						long BgL_objzd2classzd2numz00_2125;

						BgL_objzd2classzd2numz00_2125 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2124);
						{	/* Llib/thread.scm 340 */
							obj_t BgL_arg2518z00_2126;

							BgL_arg2518z00_2126 =
								PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 340 */
								obj_t BgL_arrayz00_2128;

								int BgL_offsetz00_2129;

								BgL_arrayz00_2128 = BgL_arg2518z00_2126;
								BgL_offsetz00_2129 = (int) (BgL_objzd2classzd2numz00_2125);
								{	/* Llib/thread.scm 340 */
									long BgL_offsetz00_2130;

									BgL_offsetz00_2130 =
										((long) (BgL_offsetz00_2129) - OBJECT_TYPE);
									{	/* Llib/thread.scm 340 */
										long BgL_modz00_2131;

										{	/* Llib/thread.scm 340 */
											int BgL_arg2520z00_2132;

											BgL_arg2520z00_2132 = (int) (((long) 16));
											{	/* Llib/thread.scm 340 */
												long BgL_auxz00_4516;

												BgL_auxz00_4516 = (long) (BgL_arg2520z00_2132);
												BgL_modz00_2131 =
													(BgL_offsetz00_2130 / BgL_auxz00_4516);
										}}
										{	/* Llib/thread.scm 340 */
											long BgL_restz00_2133;

											{	/* Llib/thread.scm 340 */
												int BgL_arg2519z00_2134;

												BgL_arg2519z00_2134 = (int) (((long) 16));
												{	/* Llib/thread.scm 340 */
													long BgL_auxz00_4520;

													BgL_auxz00_4520 = (long) (BgL_arg2519z00_2134);
													BgL_restz00_2133 =
														(BgL_offsetz00_2130 % BgL_auxz00_4520);
											}}
											{	/* Llib/thread.scm 340 */

												BgL_method1963z00_2122 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2128,
														(int) (BgL_modz00_2131)), (int) (BgL_restz00_2133));
				}}}}}}}}
				{	/* Llib/thread.scm 340 */
					obj_t BgL_auxz00_4527;

					{	/* Llib/thread.scm 340 */
						obj_t BgL_list2185z00_2123;

						BgL_list2185z00_2123 = MAKE_PAIR(BgL_scz00_27, BNIL);
						BgL_auxz00_4527 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_thz00_26), BgL_list2185z00_2123);
					}
					return apply(BgL_method1963z00_2122, BgL_auxz00_4527);
				}
			}
		}
	}



/* _thread-start! */
	obj_t BGl__threadzd2startz12zc0zz__threadz00(obj_t BgL_envz00_2931,
		obj_t BgL_thz00_2932, obj_t BgL_scz00_2933)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 340 */
			{	/* Llib/thread.scm 340 */
				BgL_threadz00_bglt BgL_auxz00_4532;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2932,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 340 */
						BgL_auxz00_4532 = (BgL_threadz00_bglt) (BgL_thz00_2932);
					}
				else
					{
						obj_t BgL_auxz00_4536;

						BgL_auxz00_4536 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 13998)), BGl_string2880z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2932);
						FAILURE(BgL_auxz00_4536, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startz12zc0zz__threadz00(BgL_auxz00_4532,
					BgL_scz00_2933);
			}
		}
	}



/* thread-start!-defaul1962 */
	obj_t BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_28, obj_t BgL_scz00_29)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2881z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_28));
		}
	}



/* _thread-start!-defaul1962 */
	obj_t BGl__threadzd2startz12zd2defaul1962z12zz__threadz00(obj_t
		BgL_envz00_2934, obj_t BgL_thz00_2935, obj_t BgL_scz00_2936)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4543;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2935,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4543 = (BgL_threadz00_bglt) (BgL_thz00_2935);
					}
				else
					{
						obj_t BgL_auxz00_4547;

						BgL_auxz00_4547 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2883z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2935);
						FAILURE(BgL_auxz00_4547, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_auxz00_4543,
					BgL_scz00_2936);
			}
		}
	}



/* thread-start-joinable! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_30)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 345 */
			{	/* Llib/thread.scm 345 */
				obj_t BgL_method1966z00_2148;

				{	/* Llib/thread.scm 345 */
					BgL_objectz00_bglt BgL_objz00_2149;

					BgL_objz00_2149 = (BgL_objectz00_bglt) (BgL_thz00_30);
					{	/* Llib/thread.scm 345 */
						long BgL_objzd2classzd2numz00_2150;

						BgL_objzd2classzd2numz00_2150 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2149);
						{	/* Llib/thread.scm 345 */
							obj_t BgL_arg2518z00_2151;

							BgL_arg2518z00_2151 =
								PROCEDURE_REF
								(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 345 */
								obj_t BgL_arrayz00_2153;

								int BgL_offsetz00_2154;

								BgL_arrayz00_2153 = BgL_arg2518z00_2151;
								BgL_offsetz00_2154 = (int) (BgL_objzd2classzd2numz00_2150);
								{	/* Llib/thread.scm 345 */
									long BgL_offsetz00_2155;

									BgL_offsetz00_2155 =
										((long) (BgL_offsetz00_2154) - OBJECT_TYPE);
									{	/* Llib/thread.scm 345 */
										long BgL_modz00_2156;

										{	/* Llib/thread.scm 345 */
											int BgL_arg2520z00_2157;

											BgL_arg2520z00_2157 = (int) (((long) 16));
											{	/* Llib/thread.scm 345 */
												long BgL_auxz00_4560;

												BgL_auxz00_4560 = (long) (BgL_arg2520z00_2157);
												BgL_modz00_2156 =
													(BgL_offsetz00_2155 / BgL_auxz00_4560);
										}}
										{	/* Llib/thread.scm 345 */
											long BgL_restz00_2158;

											{	/* Llib/thread.scm 345 */
												int BgL_arg2519z00_2159;

												BgL_arg2519z00_2159 = (int) (((long) 16));
												{	/* Llib/thread.scm 345 */
													long BgL_auxz00_4564;

													BgL_auxz00_4564 = (long) (BgL_arg2519z00_2159);
													BgL_restz00_2158 =
														(BgL_offsetz00_2155 % BgL_auxz00_4564);
											}}
											{	/* Llib/thread.scm 345 */

												BgL_method1966z00_2148 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2153,
														(int) (BgL_modz00_2156)), (int) (BgL_restz00_2158));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1966z00_2148) (BgL_method1966z00_2148,
					(obj_t) (BgL_thz00_30), BEOA);
			}
		}
	}



/* _thread-start-joinable! */
	obj_t BGl__threadzd2startzd2joinablez12z12zz__threadz00(obj_t BgL_envz00_2937,
		obj_t BgL_thz00_2938)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 345 */
			{	/* Llib/thread.scm 345 */
				BgL_threadz00_bglt BgL_auxz00_4574;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2938,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 345 */
						BgL_auxz00_4574 = (BgL_threadz00_bglt) (BgL_thz00_2938);
					}
				else
					{
						obj_t BgL_auxz00_4578;

						BgL_auxz00_4578 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 14270)), BGl_string2884z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2938);
						FAILURE(BgL_auxz00_4578, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_auxz00_4574);
			}
		}
	}



/* thread-start-joinabl1964 */
	obj_t BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_31)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2885z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_31));
		}
	}



/* _thread-start-joinabl1964 */
	obj_t BGl__threadzd2startzd2joinabl1964z00zz__threadz00(obj_t BgL_envz00_2939,
		obj_t BgL_thz00_2940)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4585;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2940,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4585 = (BgL_threadz00_bglt) (BgL_thz00_2940);
					}
				else
					{
						obj_t BgL_auxz00_4589;

						BgL_auxz00_4589 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2887z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2940);
						FAILURE(BgL_auxz00_4589, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_auxz00_4585);
			}
		}
	}



/* thread-join! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_32, obj_t BgL_timeoutz00_33)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 350 */
			{	/* Llib/thread.scm 350 */
				obj_t BgL_method1968z00_2173;

				{	/* Llib/thread.scm 350 */
					BgL_objectz00_bglt BgL_objz00_2175;

					BgL_objz00_2175 = (BgL_objectz00_bglt) (BgL_thz00_32);
					{	/* Llib/thread.scm 350 */
						long BgL_objzd2classzd2numz00_2176;

						BgL_objzd2classzd2numz00_2176 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2175);
						{	/* Llib/thread.scm 350 */
							obj_t BgL_arg2518z00_2177;

							BgL_arg2518z00_2177 =
								PROCEDURE_REF(BGl_threadzd2joinz12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 350 */
								obj_t BgL_arrayz00_2179;

								int BgL_offsetz00_2180;

								BgL_arrayz00_2179 = BgL_arg2518z00_2177;
								BgL_offsetz00_2180 = (int) (BgL_objzd2classzd2numz00_2176);
								{	/* Llib/thread.scm 350 */
									long BgL_offsetz00_2181;

									BgL_offsetz00_2181 =
										((long) (BgL_offsetz00_2180) - OBJECT_TYPE);
									{	/* Llib/thread.scm 350 */
										long BgL_modz00_2182;

										{	/* Llib/thread.scm 350 */
											int BgL_arg2520z00_2183;

											BgL_arg2520z00_2183 = (int) (((long) 16));
											{	/* Llib/thread.scm 350 */
												long BgL_auxz00_4602;

												BgL_auxz00_4602 = (long) (BgL_arg2520z00_2183);
												BgL_modz00_2182 =
													(BgL_offsetz00_2181 / BgL_auxz00_4602);
										}}
										{	/* Llib/thread.scm 350 */
											long BgL_restz00_2184;

											{	/* Llib/thread.scm 350 */
												int BgL_arg2519z00_2185;

												BgL_arg2519z00_2185 = (int) (((long) 16));
												{	/* Llib/thread.scm 350 */
													long BgL_auxz00_4606;

													BgL_auxz00_4606 = (long) (BgL_arg2519z00_2185);
													BgL_restz00_2184 =
														(BgL_offsetz00_2181 % BgL_auxz00_4606);
											}}
											{	/* Llib/thread.scm 350 */

												BgL_method1968z00_2173 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2179,
														(int) (BgL_modz00_2182)), (int) (BgL_restz00_2184));
				}}}}}}}}
				{	/* Llib/thread.scm 350 */
					obj_t BgL_auxz00_4613;

					{	/* Llib/thread.scm 350 */
						obj_t BgL_list2186z00_2174;

						BgL_list2186z00_2174 = MAKE_PAIR(BgL_timeoutz00_33, BNIL);
						BgL_auxz00_4613 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_thz00_32), BgL_list2186z00_2174);
					}
					return apply(BgL_method1968z00_2173, BgL_auxz00_4613);
				}
			}
		}
	}



/* _thread-join! */
	obj_t BGl__threadzd2joinz12zc0zz__threadz00(obj_t BgL_envz00_2941,
		obj_t BgL_thz00_2942, obj_t BgL_timeoutz00_2943)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 350 */
			{	/* Llib/thread.scm 350 */
				BgL_threadz00_bglt BgL_auxz00_4618;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2942,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 350 */
						BgL_auxz00_4618 = (BgL_threadz00_bglt) (BgL_thz00_2942);
					}
				else
					{
						obj_t BgL_auxz00_4622;

						BgL_auxz00_4622 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 14546)), BGl_string2888z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2942);
						FAILURE(BgL_auxz00_4622, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2joinz12zc0zz__threadz00(BgL_auxz00_4618,
					BgL_timeoutz00_2943);
			}
		}
	}



/* thread-join!-default1967 */
	obj_t BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_34, obj_t BgL_timeoutz00_35)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2889z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_34));
		}
	}



/* _thread-join!-default1967 */
	obj_t BGl__threadzd2joinz12zd2default1967z12zz__threadz00(obj_t
		BgL_envz00_2944, obj_t BgL_thz00_2945, obj_t BgL_timeoutz00_2946)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4629;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2945,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4629 = (BgL_threadz00_bglt) (BgL_thz00_2945);
					}
				else
					{
						obj_t BgL_auxz00_4633;

						BgL_auxz00_4633 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2891z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2945);
						FAILURE(BgL_auxz00_4633, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_auxz00_4629,
					BgL_timeoutz00_2946);
			}
		}
	}



/* thread-terminate! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_36)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 355 */
			{	/* Llib/thread.scm 355 */
				obj_t BgL_method1970z00_2199;

				{	/* Llib/thread.scm 355 */
					BgL_objectz00_bglt BgL_objz00_2200;

					BgL_objz00_2200 = (BgL_objectz00_bglt) (BgL_thz00_36);
					{	/* Llib/thread.scm 355 */
						long BgL_objzd2classzd2numz00_2201;

						BgL_objzd2classzd2numz00_2201 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2200);
						{	/* Llib/thread.scm 355 */
							obj_t BgL_arg2518z00_2202;

							BgL_arg2518z00_2202 =
								PROCEDURE_REF(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 355 */
								obj_t BgL_arrayz00_2204;

								int BgL_offsetz00_2205;

								BgL_arrayz00_2204 = BgL_arg2518z00_2202;
								BgL_offsetz00_2205 = (int) (BgL_objzd2classzd2numz00_2201);
								{	/* Llib/thread.scm 355 */
									long BgL_offsetz00_2206;

									BgL_offsetz00_2206 =
										((long) (BgL_offsetz00_2205) - OBJECT_TYPE);
									{	/* Llib/thread.scm 355 */
										long BgL_modz00_2207;

										{	/* Llib/thread.scm 355 */
											int BgL_arg2520z00_2208;

											BgL_arg2520z00_2208 = (int) (((long) 16));
											{	/* Llib/thread.scm 355 */
												long BgL_auxz00_4646;

												BgL_auxz00_4646 = (long) (BgL_arg2520z00_2208);
												BgL_modz00_2207 =
													(BgL_offsetz00_2206 / BgL_auxz00_4646);
										}}
										{	/* Llib/thread.scm 355 */
											long BgL_restz00_2209;

											{	/* Llib/thread.scm 355 */
												int BgL_arg2519z00_2210;

												BgL_arg2519z00_2210 = (int) (((long) 16));
												{	/* Llib/thread.scm 355 */
													long BgL_auxz00_4650;

													BgL_auxz00_4650 = (long) (BgL_arg2519z00_2210);
													BgL_restz00_2209 =
														(BgL_offsetz00_2206 % BgL_auxz00_4650);
											}}
											{	/* Llib/thread.scm 355 */

												BgL_method1970z00_2199 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2204,
														(int) (BgL_modz00_2207)), (int) (BgL_restz00_2209));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1970z00_2199) (BgL_method1970z00_2199,
					(obj_t) (BgL_thz00_36), BEOA);
			}
		}
	}



/* _thread-terminate! */
	obj_t BGl__threadzd2terminatez12zc0zz__threadz00(obj_t BgL_envz00_2947,
		obj_t BgL_thz00_2948)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 355 */
			{	/* Llib/thread.scm 355 */
				BgL_threadz00_bglt BgL_auxz00_4660;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2948,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 355 */
						BgL_auxz00_4660 = (BgL_threadz00_bglt) (BgL_thz00_2948);
					}
				else
					{
						obj_t BgL_auxz00_4664;

						BgL_auxz00_4664 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 14822)), BGl_string2892z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2948);
						FAILURE(BgL_auxz00_4664, BFALSE, BFALSE);
					}
				return BGl_threadzd2terminatez12zc0zz__threadz00(BgL_auxz00_4660);
			}
		}
	}



/* thread-terminate!-de1969 */
	obj_t BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_37)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2893z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_37));
		}
	}



/* _thread-terminate!-de1969 */
	obj_t BGl__threadzd2terminatez12zd2de1969z12zz__threadz00(obj_t
		BgL_envz00_2949, obj_t BgL_thz00_2950)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4671;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2950,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4671 = (BgL_threadz00_bglt) (BgL_thz00_2950);
					}
				else
					{
						obj_t BgL_auxz00_4675;

						BgL_auxz00_4675 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2895z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2950);
						FAILURE(BgL_auxz00_4675, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_auxz00_4671);
			}
		}
	}



/* thread-get-specific */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2getzd2specificz00zz__threadz00(BgL_threadz00_bglt BgL_thz00_38)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 360 */
			{	/* Llib/thread.scm 360 */
				obj_t BgL_method1972z00_2224;

				{	/* Llib/thread.scm 360 */
					BgL_objectz00_bglt BgL_objz00_2225;

					BgL_objz00_2225 = (BgL_objectz00_bglt) (BgL_thz00_38);
					{	/* Llib/thread.scm 360 */
						long BgL_objzd2classzd2numz00_2226;

						BgL_objzd2classzd2numz00_2226 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2225);
						{	/* Llib/thread.scm 360 */
							obj_t BgL_arg2518z00_2227;

							BgL_arg2518z00_2227 =
								PROCEDURE_REF(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 360 */
								obj_t BgL_arrayz00_2229;

								int BgL_offsetz00_2230;

								BgL_arrayz00_2229 = BgL_arg2518z00_2227;
								BgL_offsetz00_2230 = (int) (BgL_objzd2classzd2numz00_2226);
								{	/* Llib/thread.scm 360 */
									long BgL_offsetz00_2231;

									BgL_offsetz00_2231 =
										((long) (BgL_offsetz00_2230) - OBJECT_TYPE);
									{	/* Llib/thread.scm 360 */
										long BgL_modz00_2232;

										{	/* Llib/thread.scm 360 */
											int BgL_arg2520z00_2233;

											BgL_arg2520z00_2233 = (int) (((long) 16));
											{	/* Llib/thread.scm 360 */
												long BgL_auxz00_4688;

												BgL_auxz00_4688 = (long) (BgL_arg2520z00_2233);
												BgL_modz00_2232 =
													(BgL_offsetz00_2231 / BgL_auxz00_4688);
										}}
										{	/* Llib/thread.scm 360 */
											long BgL_restz00_2234;

											{	/* Llib/thread.scm 360 */
												int BgL_arg2519z00_2235;

												BgL_arg2519z00_2235 = (int) (((long) 16));
												{	/* Llib/thread.scm 360 */
													long BgL_auxz00_4692;

													BgL_auxz00_4692 = (long) (BgL_arg2519z00_2235);
													BgL_restz00_2234 =
														(BgL_offsetz00_2231 % BgL_auxz00_4692);
											}}
											{	/* Llib/thread.scm 360 */

												BgL_method1972z00_2224 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2229,
														(int) (BgL_modz00_2232)), (int) (BgL_restz00_2234));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1972z00_2224) (BgL_method1972z00_2224,
					(obj_t) (BgL_thz00_38), BEOA);
			}
		}
	}



/* _thread-get-specific */
	obj_t BGl__threadzd2getzd2specificz00zz__threadz00(obj_t BgL_envz00_2852,
		obj_t BgL_thz00_2853)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 360 */
			{	/* Llib/thread.scm 360 */
				BgL_threadz00_bglt BgL_auxz00_4702;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2853,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 360 */
						BgL_auxz00_4702 = (BgL_threadz00_bglt) (BgL_thz00_2853);
					}
				else
					{
						obj_t BgL_auxz00_4706;

						BgL_auxz00_4706 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 15093)), BGl_string2896z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2853);
						FAILURE(BgL_auxz00_4706, BFALSE, BFALSE);
					}
				return BGl_threadzd2getzd2specificz00zz__threadz00(BgL_auxz00_4702);
			}
		}
	}



/* thread-get-specific-1971 */
	obj_t BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_39)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2897z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_39));
		}
	}



/* _thread-get-specific-1971 */
	obj_t BGl__threadzd2getzd2specificzd21971zd2zz__threadz00(obj_t
		BgL_envz00_2951, obj_t BgL_thz00_2952)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4713;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2952,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4713 = (BgL_threadz00_bglt) (BgL_thz00_2952);
					}
				else
					{
						obj_t BgL_auxz00_4717;

						BgL_auxz00_4717 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2899z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2952);
						FAILURE(BgL_auxz00_4717, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_auxz00_4713);
			}
		}
	}



/* thread-set-specific! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_40, obj_t BgL_vz00_41)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 365 */
			{	/* Llib/thread.scm 365 */
				obj_t BgL_method1974z00_2249;

				{	/* Llib/thread.scm 365 */
					BgL_objectz00_bglt BgL_objz00_2250;

					BgL_objz00_2250 = (BgL_objectz00_bglt) (BgL_thz00_40);
					{	/* Llib/thread.scm 365 */
						long BgL_objzd2classzd2numz00_2251;

						BgL_objzd2classzd2numz00_2251 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2250);
						{	/* Llib/thread.scm 365 */
							obj_t BgL_arg2518z00_2252;

							BgL_arg2518z00_2252 =
								PROCEDURE_REF
								(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 365 */
								obj_t BgL_arrayz00_2254;

								int BgL_offsetz00_2255;

								BgL_arrayz00_2254 = BgL_arg2518z00_2252;
								BgL_offsetz00_2255 = (int) (BgL_objzd2classzd2numz00_2251);
								{	/* Llib/thread.scm 365 */
									long BgL_offsetz00_2256;

									BgL_offsetz00_2256 =
										((long) (BgL_offsetz00_2255) - OBJECT_TYPE);
									{	/* Llib/thread.scm 365 */
										long BgL_modz00_2257;

										{	/* Llib/thread.scm 365 */
											int BgL_arg2520z00_2258;

											BgL_arg2520z00_2258 = (int) (((long) 16));
											{	/* Llib/thread.scm 365 */
												long BgL_auxz00_4730;

												BgL_auxz00_4730 = (long) (BgL_arg2520z00_2258);
												BgL_modz00_2257 =
													(BgL_offsetz00_2256 / BgL_auxz00_4730);
										}}
										{	/* Llib/thread.scm 365 */
											long BgL_restz00_2259;

											{	/* Llib/thread.scm 365 */
												int BgL_arg2519z00_2260;

												BgL_arg2519z00_2260 = (int) (((long) 16));
												{	/* Llib/thread.scm 365 */
													long BgL_auxz00_4734;

													BgL_auxz00_4734 = (long) (BgL_arg2519z00_2260);
													BgL_restz00_2259 =
														(BgL_offsetz00_2256 % BgL_auxz00_4734);
											}}
											{	/* Llib/thread.scm 365 */

												BgL_method1974z00_2249 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2254,
														(int) (BgL_modz00_2257)), (int) (BgL_restz00_2259));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1974z00_2249) (BgL_method1974z00_2249,
					(obj_t) (BgL_thz00_40), BgL_vz00_41, BEOA);
			}
		}
	}



/* _thread-set-specific! */
	obj_t BGl__threadzd2setzd2specificz12z12zz__threadz00(obj_t BgL_envz00_2854,
		obj_t BgL_thz00_2855, obj_t BgL_vz00_2856)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 365 */
			{	/* Llib/thread.scm 365 */
				BgL_threadz00_bglt BgL_auxz00_4744;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2855,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 365 */
						BgL_auxz00_4744 = (BgL_threadz00_bglt) (BgL_thz00_2855);
					}
				else
					{
						obj_t BgL_auxz00_4748;

						BgL_auxz00_4748 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 15366)), BGl_string2900z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2855);
						FAILURE(BgL_auxz00_4748, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_auxz00_4744,
					BgL_vz00_2856);
			}
		}
	}



/* thread-set-specific!1973 */
	obj_t BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_42, obj_t BgL_vz00_43)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2901z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_42));
		}
	}



/* _thread-set-specific!1973 */
	obj_t BGl__threadzd2setzd2specificz121973z12zz__threadz00(obj_t
		BgL_envz00_2953, obj_t BgL_thz00_2954, obj_t BgL_vz00_2955)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4755;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2954,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4755 = (BgL_threadz00_bglt) (BgL_thz00_2954);
					}
				else
					{
						obj_t BgL_auxz00_4759;

						BgL_auxz00_4759 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2903z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2954);
						FAILURE(BgL_auxz00_4759, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_auxz00_4755,
					BgL_vz00_2955);
			}
		}
	}



/* thread-get-cleanup */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_threadz00_bglt BgL_thz00_44)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 370 */
			{	/* Llib/thread.scm 370 */
				obj_t BgL_method1976z00_2274;

				{	/* Llib/thread.scm 370 */
					BgL_objectz00_bglt BgL_objz00_2275;

					BgL_objz00_2275 = (BgL_objectz00_bglt) (BgL_thz00_44);
					{	/* Llib/thread.scm 370 */
						long BgL_objzd2classzd2numz00_2276;

						BgL_objzd2classzd2numz00_2276 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2275);
						{	/* Llib/thread.scm 370 */
							obj_t BgL_arg2518z00_2277;

							BgL_arg2518z00_2277 =
								PROCEDURE_REF(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 370 */
								obj_t BgL_arrayz00_2279;

								int BgL_offsetz00_2280;

								BgL_arrayz00_2279 = BgL_arg2518z00_2277;
								BgL_offsetz00_2280 = (int) (BgL_objzd2classzd2numz00_2276);
								{	/* Llib/thread.scm 370 */
									long BgL_offsetz00_2281;

									BgL_offsetz00_2281 =
										((long) (BgL_offsetz00_2280) - OBJECT_TYPE);
									{	/* Llib/thread.scm 370 */
										long BgL_modz00_2282;

										{	/* Llib/thread.scm 370 */
											int BgL_arg2520z00_2283;

											BgL_arg2520z00_2283 = (int) (((long) 16));
											{	/* Llib/thread.scm 370 */
												long BgL_auxz00_4772;

												BgL_auxz00_4772 = (long) (BgL_arg2520z00_2283);
												BgL_modz00_2282 =
													(BgL_offsetz00_2281 / BgL_auxz00_4772);
										}}
										{	/* Llib/thread.scm 370 */
											long BgL_restz00_2284;

											{	/* Llib/thread.scm 370 */
												int BgL_arg2519z00_2285;

												BgL_arg2519z00_2285 = (int) (((long) 16));
												{	/* Llib/thread.scm 370 */
													long BgL_auxz00_4776;

													BgL_auxz00_4776 = (long) (BgL_arg2519z00_2285);
													BgL_restz00_2284 =
														(BgL_offsetz00_2281 % BgL_auxz00_4776);
											}}
											{	/* Llib/thread.scm 370 */

												BgL_method1976z00_2274 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2279,
														(int) (BgL_modz00_2282)), (int) (BgL_restz00_2284));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1976z00_2274) (BgL_method1976z00_2274,
					(obj_t) (BgL_thz00_44), BEOA);
			}
		}
	}



/* _thread-get-cleanup */
	obj_t BGl__threadzd2getzd2cleanupz00zz__threadz00(obj_t BgL_envz00_2847,
		obj_t BgL_thz00_2848)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 370 */
			{	/* Llib/thread.scm 370 */
				BgL_threadz00_bglt BgL_auxz00_4786;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2848,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 370 */
						BgL_auxz00_4786 = (BgL_threadz00_bglt) (BgL_thz00_2848);
					}
				else
					{
						obj_t BgL_auxz00_4790;

						BgL_auxz00_4790 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 15647)), BGl_string2904z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2848);
						FAILURE(BgL_auxz00_4790, BFALSE, BFALSE);
					}
				return BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_auxz00_4786);
			}
		}
	}



/* thread-get-cleanup-d1975 */
	obj_t BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_45)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2905z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_45));
		}
	}



/* _thread-get-cleanup-d1975 */
	obj_t BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(obj_t
		BgL_envz00_2956, obj_t BgL_thz00_2957)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4797;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2957,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4797 = (BgL_threadz00_bglt) (BgL_thz00_2957);
					}
				else
					{
						obj_t BgL_auxz00_4801;

						BgL_auxz00_4801 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2907z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2957);
						FAILURE(BgL_auxz00_4801, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_auxz00_4797);
			}
		}
	}



/* thread-set-cleanup! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_46, obj_t BgL_vz00_47)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 375 */
			{	/* Llib/thread.scm 375 */
				obj_t BgL_method1978z00_2299;

				{	/* Llib/thread.scm 375 */
					BgL_objectz00_bglt BgL_objz00_2300;

					BgL_objz00_2300 = (BgL_objectz00_bglt) (BgL_thz00_46);
					{	/* Llib/thread.scm 375 */
						long BgL_objzd2classzd2numz00_2301;

						BgL_objzd2classzd2numz00_2301 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2300);
						{	/* Llib/thread.scm 375 */
							obj_t BgL_arg2518z00_2302;

							BgL_arg2518z00_2302 =
								PROCEDURE_REF
								(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 375 */
								obj_t BgL_arrayz00_2304;

								int BgL_offsetz00_2305;

								BgL_arrayz00_2304 = BgL_arg2518z00_2302;
								BgL_offsetz00_2305 = (int) (BgL_objzd2classzd2numz00_2301);
								{	/* Llib/thread.scm 375 */
									long BgL_offsetz00_2306;

									BgL_offsetz00_2306 =
										((long) (BgL_offsetz00_2305) - OBJECT_TYPE);
									{	/* Llib/thread.scm 375 */
										long BgL_modz00_2307;

										{	/* Llib/thread.scm 375 */
											int BgL_arg2520z00_2308;

											BgL_arg2520z00_2308 = (int) (((long) 16));
											{	/* Llib/thread.scm 375 */
												long BgL_auxz00_4814;

												BgL_auxz00_4814 = (long) (BgL_arg2520z00_2308);
												BgL_modz00_2307 =
													(BgL_offsetz00_2306 / BgL_auxz00_4814);
										}}
										{	/* Llib/thread.scm 375 */
											long BgL_restz00_2309;

											{	/* Llib/thread.scm 375 */
												int BgL_arg2519z00_2310;

												BgL_arg2519z00_2310 = (int) (((long) 16));
												{	/* Llib/thread.scm 375 */
													long BgL_auxz00_4818;

													BgL_auxz00_4818 = (long) (BgL_arg2519z00_2310);
													BgL_restz00_2309 =
														(BgL_offsetz00_2306 % BgL_auxz00_4818);
											}}
											{	/* Llib/thread.scm 375 */

												BgL_method1978z00_2299 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2304,
														(int) (BgL_modz00_2307)), (int) (BgL_restz00_2309));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1978z00_2299) (BgL_method1978z00_2299,
					(obj_t) (BgL_thz00_46), BgL_vz00_47, BEOA);
			}
		}
	}



/* _thread-set-cleanup! */
	obj_t BGl__threadzd2setzd2cleanupz12z12zz__threadz00(obj_t BgL_envz00_2849,
		obj_t BgL_thz00_2850, obj_t BgL_vz00_2851)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 375 */
			{	/* Llib/thread.scm 375 */
				BgL_threadz00_bglt BgL_auxz00_4828;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2850,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 375 */
						BgL_auxz00_4828 = (BgL_threadz00_bglt) (BgL_thz00_2850);
					}
				else
					{
						obj_t BgL_auxz00_4832;

						BgL_auxz00_4832 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 15919)), BGl_string2908z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2850);
						FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_auxz00_4828,
					BgL_vz00_2851);
			}
		}
	}



/* thread-set-cleanup!-1977 */
	obj_t BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_48, obj_t BgL_vz00_49)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2909z00zz__threadz00,
				BGl_string2872z00zz__threadz00, (obj_t) (BgL_thz00_48));
		}
	}



/* _thread-set-cleanup!-1977 */
	obj_t BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(obj_t
		BgL_envz00_2958, obj_t BgL_thz00_2959, obj_t BgL_vz00_2960)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4839;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2959,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_auxz00_4839 = (BgL_threadz00_bglt) (BgL_thz00_2959);
					}
				else
					{
						obj_t BgL_auxz00_4843;

						BgL_auxz00_4843 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2911z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_thz00_2959);
						FAILURE(BgL_auxz00_4843, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_auxz00_4839,
					BgL_vz00_2960);
			}
		}
	}



/* %user-current-thread */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_54)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 386 */
			{	/* Llib/thread.scm 386 */
				obj_t BgL_method1983z00_2324;

				{	/* Llib/thread.scm 386 */
					BgL_objectz00_bglt BgL_objz00_2325;

					BgL_objz00_2325 = (BgL_objectz00_bglt) (BgL_oz00_54);
					{	/* Llib/thread.scm 386 */
						long BgL_objzd2classzd2numz00_2326;

						BgL_objzd2classzd2numz00_2326 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2325);
						{	/* Llib/thread.scm 386 */
							obj_t BgL_arg2518z00_2327;

							BgL_arg2518z00_2327 =
								PROCEDURE_REF
								(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 386 */
								obj_t BgL_arrayz00_2329;

								int BgL_offsetz00_2330;

								BgL_arrayz00_2329 = BgL_arg2518z00_2327;
								BgL_offsetz00_2330 = (int) (BgL_objzd2classzd2numz00_2326);
								{	/* Llib/thread.scm 386 */
									long BgL_offsetz00_2331;

									BgL_offsetz00_2331 =
										((long) (BgL_offsetz00_2330) - OBJECT_TYPE);
									{	/* Llib/thread.scm 386 */
										long BgL_modz00_2332;

										{	/* Llib/thread.scm 386 */
											int BgL_arg2520z00_2333;

											BgL_arg2520z00_2333 = (int) (((long) 16));
											{	/* Llib/thread.scm 386 */
												long BgL_auxz00_4856;

												BgL_auxz00_4856 = (long) (BgL_arg2520z00_2333);
												BgL_modz00_2332 =
													(BgL_offsetz00_2331 / BgL_auxz00_4856);
										}}
										{	/* Llib/thread.scm 386 */
											long BgL_restz00_2334;

											{	/* Llib/thread.scm 386 */
												int BgL_arg2519z00_2335;

												BgL_arg2519z00_2335 = (int) (((long) 16));
												{	/* Llib/thread.scm 386 */
													long BgL_auxz00_4860;

													BgL_auxz00_4860 = (long) (BgL_arg2519z00_2335);
													BgL_restz00_2334 =
														(BgL_offsetz00_2331 % BgL_auxz00_4860);
											}}
											{	/* Llib/thread.scm 386 */

												BgL_method1983z00_2324 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2329,
														(int) (BgL_modz00_2332)), (int) (BgL_restz00_2334));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1983z00_2324) (BgL_method1983z00_2324,
					(obj_t) (BgL_oz00_54), BEOA);
			}
		}
	}



/* _%user-current-thread */
	obj_t BGl__z52userzd2currentzd2threadz52zz__threadz00(obj_t BgL_envz00_2787,
		obj_t BgL_oz00_2788)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 386 */
			{	/* Llib/thread.scm 386 */
				BgL_threadz00_bglt BgL_auxz00_4870;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2788,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 386 */
						BgL_auxz00_4870 = (BgL_threadz00_bglt) (BgL_oz00_2788);
					}
				else
					{
						obj_t BgL_auxz00_4874;

						BgL_auxz00_4874 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 16547)), BGl_string2912z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_oz00_2788);
						FAILURE(BgL_auxz00_4874, BFALSE, BFALSE);
					}
				return BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_auxz00_4870);
			}
		}
	}



/* _%user-current-thread1982 */
	obj_t BGl__z52userzd2currentzd2thread1982z52zz__threadz00(obj_t
		BgL_envz00_2961, obj_t BgL_oz00_2962)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_auxz00_4879;

				{	/* Llib/thread.scm 17 */
					BgL_threadz00_bglt BgL_oz00_3415;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2962,
							BGl_threadz00zz__threadz00))
						{	/* Llib/thread.scm 17 */
							BgL_oz00_3415 = (BgL_threadz00_bglt) (BgL_oz00_2962);
						}
					else
						{
							obj_t BgL_auxz00_4883;

							BgL_auxz00_4883 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
								BINT(((long) 1111)), BGl_string2913z00zz__threadz00,
								BGl_string2779z00zz__threadz00, BgL_oz00_2962);
							FAILURE(BgL_auxz00_4883, BFALSE, BFALSE);
						}
					BgL_auxz00_4879 = BgL_oz00_3415;
				}
				return (obj_t) (BgL_auxz00_4879);
			}
		}
	}



/* %user-thread-sleep! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_56, obj_t BgL_dz00_57)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 408 */
			{	/* Llib/thread.scm 408 */
				obj_t BgL_method1985z00_2349;

				{	/* Llib/thread.scm 408 */
					BgL_objectz00_bglt BgL_objz00_2350;

					BgL_objz00_2350 = (BgL_objectz00_bglt) (BgL_oz00_56);
					{	/* Llib/thread.scm 408 */
						long BgL_objzd2classzd2numz00_2351;

						BgL_objzd2classzd2numz00_2351 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2350);
						{	/* Llib/thread.scm 408 */
							obj_t BgL_arg2518z00_2352;

							BgL_arg2518z00_2352 =
								PROCEDURE_REF
								(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 408 */
								obj_t BgL_arrayz00_2354;

								int BgL_offsetz00_2355;

								BgL_arrayz00_2354 = BgL_arg2518z00_2352;
								BgL_offsetz00_2355 = (int) (BgL_objzd2classzd2numz00_2351);
								{	/* Llib/thread.scm 408 */
									long BgL_offsetz00_2356;

									BgL_offsetz00_2356 =
										((long) (BgL_offsetz00_2355) - OBJECT_TYPE);
									{	/* Llib/thread.scm 408 */
										long BgL_modz00_2357;

										{	/* Llib/thread.scm 408 */
											int BgL_arg2520z00_2358;

											BgL_arg2520z00_2358 = (int) (((long) 16));
											{	/* Llib/thread.scm 408 */
												long BgL_auxz00_4896;

												BgL_auxz00_4896 = (long) (BgL_arg2520z00_2358);
												BgL_modz00_2357 =
													(BgL_offsetz00_2356 / BgL_auxz00_4896);
										}}
										{	/* Llib/thread.scm 408 */
											long BgL_restz00_2359;

											{	/* Llib/thread.scm 408 */
												int BgL_arg2519z00_2360;

												BgL_arg2519z00_2360 = (int) (((long) 16));
												{	/* Llib/thread.scm 408 */
													long BgL_auxz00_4900;

													BgL_auxz00_4900 = (long) (BgL_arg2519z00_2360);
													BgL_restz00_2359 =
														(BgL_offsetz00_2356 % BgL_auxz00_4900);
											}}
											{	/* Llib/thread.scm 408 */

												BgL_method1985z00_2349 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2354,
														(int) (BgL_modz00_2357)), (int) (BgL_restz00_2359));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1985z00_2349) (BgL_method1985z00_2349,
					(obj_t) (BgL_oz00_56), BgL_dz00_57, BEOA);
			}
		}
	}



/* _%user-thread-sleep! */
	obj_t BGl__z52userzd2threadzd2sleepz12z40zz__threadz00(obj_t BgL_envz00_2963,
		obj_t BgL_oz00_2964, obj_t BgL_dz00_2965)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 408 */
			{	/* Llib/thread.scm 408 */
				BgL_threadz00_bglt BgL_auxz00_4910;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2964,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 408 */
						BgL_auxz00_4910 = (BgL_threadz00_bglt) (BgL_oz00_2964);
					}
				else
					{
						obj_t BgL_auxz00_4914;

						BgL_auxz00_4914 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 17513)), BGl_string2914z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_oz00_2964);
						FAILURE(BgL_auxz00_4914, BFALSE, BFALSE);
					}
				return
					BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_4910,
					BgL_dz00_2965);
			}
		}
	}



/* %user-thread-sleep!-1984 */
	obj_t
		BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_58, obj_t BgL_dz00_59)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			if (BGL_DATEP(BgL_dz00_59))
				{	/* Llib/thread.scm 411 */
					long BgL_cdtz00_1232;

					BgL_cdtz00_1232 =
						bgl_date_to_seconds(bgl_seconds_to_date(bgl_current_seconds()));
					{	/* Llib/thread.scm 411 */
						long BgL_dtz00_1233;

						BgL_dtz00_1233 = bgl_date_to_seconds(BgL_dz00_59);
						{	/* Llib/thread.scm 412 */
							long BgL_az00_1234;

							{	/* Llib/thread.scm 413 */
								long BgL_res2582z00_2381;

								{	/* Llib/thread.scm 413 */
									long BgL_auxz00_4925;

									BgL_auxz00_4925 = (BgL_dtz00_1233 - BgL_cdtz00_1232);
									BgL_res2582z00_2381 = LONG_TO_ELONG(BgL_auxz00_4925);
								}
								BgL_az00_1234 = BgL_res2582z00_2381;
							}
							{	/* Llib/thread.scm 413 */

								if ((BgL_az00_1234 > ((long) 0)))
									{	/* Llib/thread.scm 414 */
										long BgL_arg2189z00_1236;

										{	/* Llib/thread.scm 414 */
											long BgL_res2583z00_2385;

											{	/* Llib/thread.scm 414 */
												long BgL_auxz00_4930;

												{	/* Llib/thread.scm 414 */
													long BgL_auxz00_4931;

													BgL_auxz00_4931 = ELONG_TO_LONG(BgL_az00_1234);
													BgL_auxz00_4930 = ELONG_TO_LONG(BgL_auxz00_4931);
												}
												BgL_res2583z00_2385 = ELONG_TO_LONG(BgL_auxz00_4930);
											}
											BgL_arg2189z00_1236 = BgL_res2583z00_2385;
										}
										bgl_sleep(BgL_arg2189z00_1236);
										BUNSPEC;
										return BINT(BgL_arg2189z00_1236);
									}
								else
									{	/* Llib/thread.scm 414 */
										return BFALSE;
									}
							}
						}
					}
				}
			else
				{	/* Llib/thread.scm 410 */
					if (INTEGERP(BgL_dz00_59))
						{	/* Llib/thread.scm 416 */
							long BgL_msz00_2388;

							BgL_msz00_2388 = (long) CINT(BgL_dz00_59);
							bgl_sleep(BgL_msz00_2388);
							BUNSPEC;
							return BINT(BgL_msz00_2388);
						}
					else
						{	/* Llib/thread.scm 415 */
							if (ELONGP(BgL_dz00_59))
								{	/* Llib/thread.scm 418 */
									long BgL_arg2193z00_1240;

									{	/* Llib/thread.scm 418 */
										long BgL_res2584z00_2391;

										{	/* Llib/thread.scm 418 */
											long BgL_xz00_2390;

											BgL_xz00_2390 = BELONG_TO_LONG(BgL_dz00_59);
											{	/* Llib/thread.scm 418 */
												long BgL_auxz00_4945;

												{	/* Llib/thread.scm 418 */
													long BgL_auxz00_4946;

													BgL_auxz00_4946 = ELONG_TO_LONG(BgL_xz00_2390);
													BgL_auxz00_4945 = ELONG_TO_LONG(BgL_auxz00_4946);
												}
												BgL_res2584z00_2391 = ELONG_TO_LONG(BgL_auxz00_4945);
										}}
										BgL_arg2193z00_1240 = BgL_res2584z00_2391;
									}
									bgl_sleep(BgL_arg2193z00_1240);
									BUNSPEC;
									return BINT(BgL_arg2193z00_1240);
								}
							else
								{	/* Llib/thread.scm 417 */
									if (LLONGP(BgL_dz00_59))
										{	/* Llib/thread.scm 420 */
											long BgL_arg2195z00_1242;

											{	/* Llib/thread.scm 420 */
												BGL_LONGLONG_T BgL_auxz00_4954;

												BgL_auxz00_4954 = BLLONG_TO_LLONG(BgL_dz00_59);
												BgL_arg2195z00_1242 = LLONG_TO_LONG(BgL_auxz00_4954);
											}
											bgl_sleep(BgL_arg2195z00_1242);
											BUNSPEC;
											return BINT(BgL_arg2195z00_1242);
										}
									else
										{	/* Llib/thread.scm 421 */
											bool_t BgL_testz00_4959;

											if (INTEGERP(BgL_dz00_59))
												{	/* Llib/thread.scm 421 */
													BgL_testz00_4959 = ((bool_t) 1);
												}
											else
												{	/* Llib/thread.scm 421 */
													BgL_testz00_4959 = REALP(BgL_dz00_59);
												}
											if (BgL_testz00_4959)
												{	/* Llib/thread.scm 422 */
													long BgL_arg2197z00_1244;

													BgL_arg2197z00_1244 =
														(
														(long) (REAL_TO_DOUBLE(BgL_dz00_59)) *
														((long) 1000));
													bgl_sleep(BgL_arg2197z00_1244);
													BUNSPEC;
													return BINT(BgL_arg2197z00_1244);
												}
											else
												{	/* Llib/thread.scm 421 */
													return
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_symbol2915z00zz__threadz00,
														BGl_string2917z00zz__threadz00, BgL_dz00_59);
												}
										}
								}
						}
				}
		}
	}



/* _%user-thread-sleep!-1984 */
	obj_t BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(obj_t
		BgL_envz00_2966, obj_t BgL_oz00_2967, obj_t BgL_dz00_2968)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 410 */
				BgL_threadz00_bglt BgL_auxz00_4969;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2967,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 410 */
						BgL_auxz00_4969 = (BgL_threadz00_bglt) (BgL_oz00_2967);
					}
				else
					{
						obj_t BgL_auxz00_4973;

						BgL_auxz00_4973 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 17579)), BGl_string2918z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_oz00_2967);
						FAILURE(BgL_auxz00_4973, BFALSE, BFALSE);
					}
				return
					BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00
					(BgL_auxz00_4969, BgL_dz00_2968);
			}
		}
	}



/* %user-thread-yield! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_61)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 435 */
			{	/* Llib/thread.scm 435 */
				obj_t BgL_method1987z00_2403;

				{	/* Llib/thread.scm 435 */
					BgL_objectz00_bglt BgL_objz00_2404;

					BgL_objz00_2404 = (BgL_objectz00_bglt) (BgL_oz00_61);
					{	/* Llib/thread.scm 435 */
						long BgL_objzd2classzd2numz00_2405;

						BgL_objzd2classzd2numz00_2405 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2404);
						{	/* Llib/thread.scm 435 */
							obj_t BgL_arg2518z00_2406;

							BgL_arg2518z00_2406 =
								PROCEDURE_REF
								(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 435 */
								obj_t BgL_arrayz00_2408;

								int BgL_offsetz00_2409;

								BgL_arrayz00_2408 = BgL_arg2518z00_2406;
								BgL_offsetz00_2409 = (int) (BgL_objzd2classzd2numz00_2405);
								{	/* Llib/thread.scm 435 */
									long BgL_offsetz00_2410;

									BgL_offsetz00_2410 =
										((long) (BgL_offsetz00_2409) - OBJECT_TYPE);
									{	/* Llib/thread.scm 435 */
										long BgL_modz00_2411;

										{	/* Llib/thread.scm 435 */
											int BgL_arg2520z00_2412;

											BgL_arg2520z00_2412 = (int) (((long) 16));
											{	/* Llib/thread.scm 435 */
												long BgL_auxz00_4986;

												BgL_auxz00_4986 = (long) (BgL_arg2520z00_2412);
												BgL_modz00_2411 =
													(BgL_offsetz00_2410 / BgL_auxz00_4986);
										}}
										{	/* Llib/thread.scm 435 */
											long BgL_restz00_2413;

											{	/* Llib/thread.scm 435 */
												int BgL_arg2519z00_2414;

												BgL_arg2519z00_2414 = (int) (((long) 16));
												{	/* Llib/thread.scm 435 */
													long BgL_auxz00_4990;

													BgL_auxz00_4990 = (long) (BgL_arg2519z00_2414);
													BgL_restz00_2413 =
														(BgL_offsetz00_2410 % BgL_auxz00_4990);
											}}
											{	/* Llib/thread.scm 435 */

												BgL_method1987z00_2403 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2408,
														(int) (BgL_modz00_2411)), (int) (BgL_restz00_2413));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1987z00_2403) (BgL_method1987z00_2403,
					(obj_t) (BgL_oz00_61), BEOA);
			}
		}
	}



/* _%user-thread-yield! */
	obj_t BGl__z52userzd2threadzd2yieldz12z40zz__threadz00(obj_t BgL_envz00_2969,
		obj_t BgL_oz00_2970)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 435 */
			{	/* Llib/thread.scm 435 */
				BgL_threadz00_bglt BgL_auxz00_5000;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2970,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 435 */
						BgL_auxz00_5000 = (BgL_threadz00_bglt) (BgL_oz00_2970);
					}
				else
					{
						obj_t BgL_auxz00_5004;

						BgL_auxz00_5004 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 18567)), BGl_string2919z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_oz00_2970);
						FAILURE(BgL_auxz00_5004, BFALSE, BFALSE);
					}
				return BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_5000);
			}
		}
	}



/* _%user-thread-yield!-1986 */
	obj_t BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00(obj_t
		BgL_envz00_2971, obj_t BgL_oz00_2972)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 17 */
				BgL_threadz00_bglt BgL_oz00_3420;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2972,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 17 */
						BgL_oz00_3420 = (BgL_threadz00_bglt) (BgL_oz00_2972);
					}
				else
					{
						obj_t BgL_auxz00_5012;

						BgL_auxz00_5012 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2772z00zz__threadz00,
							BINT(((long) 1111)), BGl_string2920z00zz__threadz00,
							BGl_string2779z00zz__threadz00, BgL_oz00_2972);
						FAILURE(BgL_auxz00_5012, BFALSE, BFALSE);
					}
				return BUNSPEC;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2921z00zz__threadz00,
				BGl_string2855z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2922z00zz__threadz00,
				BGl_string2856z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2923z00zz__threadz00, BGl_string2924z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2writezd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2925z00zz__threadz00, BGl_string2926z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2printzd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2927z00zz__threadz00, BGl_string2928z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2startz12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2929z00zz__threadz00,
				BGl_string2858z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2930z00zz__threadz00,
				BGl_string2859z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2joinz12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2931z00zz__threadz00,
				BGl_string2860z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2932z00zz__threadz00,
				BGl_string2861z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2933z00zz__threadz00,
				BGl_string2862z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2934z00zz__threadz00,
				BGl_string2863z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2935z00zz__threadz00,
				BGl_string2864z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2936z00zz__threadz00,
				BGl_string2865z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2937z00zz__threadz00,
				BGl_string2938z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2939z00zz__threadz00,
				BGl_string2940z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2941z00zz__threadz00,
				BGl_string2938z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2942z00zz__threadz00,
				BGl_string2940z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_threadzd2backendzd2zz__threadz00, BGl_proc2943z00zz__threadz00,
				BGl_string2938z00zz__threadz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_threadzd2backendzd2zz__threadz00, BGl_proc2944z00zz__threadz00,
				BGl_string2940z00zz__threadz00);
		}
	}



/* struct+object->objec2026 */
	obj_t BGl_structzb2objectzd2ze3objec2026z83zz__threadz00(obj_t
		BgL_envz00_2995, obj_t BgL_oz00_2996, obj_t BgL_sz00_2997)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{
				BgL_threadzd2backendzd2_bglt BgL_oz00_1469;

				obj_t BgL_sz00_1470;

				{	/* Llib/thread.scm 147 */
					BgL_threadzd2backendzd2_bglt BgL_auxz00_5035;

					BgL_oz00_1469 = (BgL_threadzd2backendzd2_bglt) (BgL_oz00_2996);
					BgL_sz00_1470 = BgL_sz00_2997;
					{	/* Llib/thread.scm 147 */
						obj_t BgL_arg2318z00_2633;

						BgL_arg2318z00_2633 = STRUCT_REF(BgL_sz00_1470, (int) (((long) 0)));
						{	/* Llib/thread.scm 147 */
							BgL_objectz00_bglt BgL_auxz00_5038;

							BgL_auxz00_5038 = (BgL_objectz00_bglt) (BgL_oz00_1469);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5038, BgL_arg2318z00_2633);
					}}
					{
						obj_t BgL_auxz00_5041;

						BgL_auxz00_5041 = STRUCT_REF(BgL_sz00_1470, (int) (((long) 1)));
						((((BgL_threadzd2backendzd2_bglt) CREF(BgL_oz00_1469))->
								BgL_namez00) = ((obj_t) BgL_auxz00_5041), BUNSPEC);
					}
					BgL_auxz00_5035 = BgL_oz00_1469;
					return (obj_t) (BgL_auxz00_5035);
				}
			}
		}
	}



/* object->struct-threa2024 */
	obj_t BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00(obj_t
		BgL_envz00_2998, obj_t BgL_obj1765z00_2999)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 147 */
			{
				BgL_threadzd2backendzd2_bglt BgL_obj1765z00_1461;

				BgL_obj1765z00_1461 =
					(BgL_threadzd2backendzd2_bglt) (BgL_obj1765z00_2999);
				{	/* Llib/thread.scm 147 */
					obj_t BgL_res1766z00_1464;

					BgL_res1766z00_1464 =
						make_struct(BGl_symbol2800z00zz__threadz00,
						(int) (((long) 2)), BUNSPEC);
					{	/* Llib/thread.scm 147 */
						int BgL_auxz00_5049;

						BgL_auxz00_5049 = (int) (((long) 0));
						STRUCT_SET(BgL_res1766z00_1464, BgL_auxz00_5049, BFALSE);
					}
					{	/* Llib/thread.scm 147 */
						obj_t BgL_arg2316z00_1466;

						BgL_arg2316z00_1466 =
							(((BgL_threadzd2backendzd2_bglt) CREF(BgL_obj1765z00_1461))->
							BgL_namez00);
						{	/* Llib/thread.scm 147 */
							int BgL_auxz00_5053;

							BgL_auxz00_5053 = (int) (((long) 1));
							STRUCT_SET(BgL_res1766z00_1464, BgL_auxz00_5053,
								BgL_arg2316z00_1466);
					}}
					return BgL_res1766z00_1464;
				}
			}
		}
	}



/* struct+object->objec2022 */
	obj_t BGl_structzb2objectzd2ze3objec2022z83zz__threadz00(obj_t
		BgL_envz00_3000, obj_t BgL_oz00_3001, obj_t BgL_sz00_3002)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{
				BgL_nothreadz00_bglt BgL_oz00_1448;

				obj_t BgL_sz00_1449;

				{	/* Llib/thread.scm 156 */
					BgL_nothreadz00_bglt BgL_auxz00_5057;

					BgL_oz00_1448 = (BgL_nothreadz00_bglt) (BgL_oz00_3001);
					BgL_sz00_1449 = BgL_sz00_3002;
					{	/* Llib/thread.scm 156 */
						obj_t BgL_arg2313z00_1452;

						BgL_arg2313z00_1452 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 0)));
						{	/* Llib/thread.scm 156 */
							BgL_objectz00_bglt BgL_auxz00_5060;

							BgL_auxz00_5060 = (BgL_objectz00_bglt) (BgL_oz00_1448);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5060, BgL_arg2313z00_1452);
					}}
					{
						obj_t BgL_auxz00_5063;

						BgL_auxz00_5063 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 1)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->BgL_namez00) =
							((obj_t) BgL_auxz00_5063), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5067;

						BgL_auxz00_5067 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 4)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_5067), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5071;

						BgL_auxz00_5071 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 5)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->
								BgL_z52specificz52) = ((obj_t) BgL_auxz00_5071), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5075;

						BgL_auxz00_5075 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 6)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->BgL_z52cleanupz52) =
							((obj_t) BgL_auxz00_5075), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5079;

						BgL_auxz00_5079 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 7)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->
								BgL_endzd2resultzd2) = ((obj_t) BgL_auxz00_5079), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5083;

						BgL_auxz00_5083 = STRUCT_REF(BgL_sz00_1449, (int) (((long) 8)));
						((((BgL_nothreadz00_bglt) CREF(BgL_oz00_1448))->
								BgL_endzd2exceptionzd2) = ((obj_t) BgL_auxz00_5083), BUNSPEC);
					}
					BgL_auxz00_5057 = BgL_oz00_1448;
					return (obj_t) (BgL_auxz00_5057);
				}
			}
		}
	}



/* object->struct-nothr2020 */
	obj_t BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00(obj_t
		BgL_envz00_3003, obj_t BgL_obj1839z00_3004)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 156 */
			{
				BgL_nothreadz00_bglt BgL_obj1839z00_1434;

				BgL_obj1839z00_1434 = (BgL_nothreadz00_bglt) (BgL_obj1839z00_3004);
				{	/* Llib/thread.scm 156 */
					obj_t BgL_res1840z00_1437;

					BgL_res1840z00_1437 =
						make_struct(BGl_symbol2815z00zz__threadz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Llib/thread.scm 156 */
						int BgL_auxz00_5091;

						BgL_auxz00_5091 = (int) (((long) 0));
						STRUCT_SET(BgL_res1840z00_1437, BgL_auxz00_5091, BFALSE);
					}
					{	/* Llib/thread.scm 156 */
						obj_t BgL_arg2305z00_1439;

						{
							BgL_threadz00_bglt BgL_auxz00_5094;

							BgL_auxz00_5094 = (BgL_threadz00_bglt) (BgL_obj1839z00_1434);
							BgL_arg2305z00_1439 =
								(((BgL_threadz00_bglt) CREF(BgL_auxz00_5094))->BgL_namez00);
						}
						{	/* Llib/thread.scm 156 */
							int BgL_auxz00_5097;

							BgL_auxz00_5097 = (int) (((long) 1));
							STRUCT_SET(BgL_res1840z00_1437, BgL_auxz00_5097,
								BgL_arg2305z00_1439);
					}}
					{	/* Llib/thread.scm 156 */
						obj_t BgL_arg2307z00_1441;

						BgL_arg2307z00_1441 =
							(((BgL_nothreadz00_bglt) CREF(BgL_obj1839z00_1434))->BgL_bodyz00);
						{	/* Llib/thread.scm 156 */
							int BgL_auxz00_5101;

							BgL_auxz00_5101 = (int) (((long) 4));
							STRUCT_SET(BgL_res1840z00_1437, BgL_auxz00_5101,
								BgL_arg2307z00_1441);
					}}
					{	/* Llib/thread.scm 156 */
						obj_t BgL_arg2309z00_1443;

						BgL_arg2309z00_1443 =
							(((BgL_nothreadz00_bglt) CREF(BgL_obj1839z00_1434))->
							BgL_z52specificz52);
						{	/* Llib/thread.scm 156 */
							int BgL_auxz00_5105;

							BgL_auxz00_5105 = (int) (((long) 5));
							STRUCT_SET(BgL_res1840z00_1437, BgL_auxz00_5105,
								BgL_arg2309z00_1443);
					}}
					{	/* Llib/thread.scm 156 */
						obj_t BgL_arg2311z00_1445;

						BgL_arg2311z00_1445 =
							(((BgL_nothreadz00_bglt) CREF(BgL_obj1839z00_1434))->
							BgL_z52cleanupz52);
						{	/* Llib/thread.scm 156 */
							int BgL_auxz00_5109;

							BgL_auxz00_5109 = (int) (((long) 6));
							STRUCT_SET(BgL_res1840z00_1437, BgL_auxz00_5109,
								BgL_arg2311z00_1445);
					}}
					return BgL_res1840z00_1437;
				}
			}
		}
	}



/* struct+object->objec2018 */
	obj_t BGl_structzb2objectzd2ze3objec2018z83zz__threadz00(obj_t
		BgL_envz00_3005, obj_t BgL_oz00_3006, obj_t BgL_sz00_3007)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			{
				BgL_nothreadzd2backendzd2_bglt BgL_oz00_1426;

				obj_t BgL_sz00_1427;

				{	/* Llib/thread.scm 145 */
					BgL_nothreadzd2backendzd2_bglt BgL_auxz00_5113;

					BgL_oz00_1426 = (BgL_nothreadzd2backendzd2_bglt) (BgL_oz00_3006);
					BgL_sz00_1427 = BgL_sz00_3007;
					{	/* Llib/thread.scm 145 */
						obj_t BgL_arg2302z00_2581;

						BgL_arg2302z00_2581 = STRUCT_REF(BgL_sz00_1427, (int) (((long) 0)));
						{	/* Llib/thread.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_5116;

							BgL_auxz00_5116 = (BgL_objectz00_bglt) (BgL_oz00_1426);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5116, BgL_arg2302z00_2581);
					}}
					{
						obj_t BgL_auxz00_5119;

						BgL_auxz00_5119 = STRUCT_REF(BgL_sz00_1427, (int) (((long) 1)));
						((((BgL_nothreadzd2backendzd2_bglt) CREF(BgL_oz00_1426))->
								BgL_namez00) = ((obj_t) BgL_auxz00_5119), BUNSPEC);
					}
					BgL_auxz00_5113 = BgL_oz00_1426;
					return (obj_t) (BgL_auxz00_5113);
				}
			}
		}
	}



/* object->struct-nothr2016 */
	obj_t BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00(obj_t
		BgL_envz00_3008, obj_t BgL_obj1875z00_3009)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 145 */
			{
				BgL_nothreadzd2backendzd2_bglt BgL_obj1875z00_1418;

				BgL_obj1875z00_1418 =
					(BgL_nothreadzd2backendzd2_bglt) (BgL_obj1875z00_3009);
				{	/* Llib/thread.scm 145 */
					obj_t BgL_res1876z00_1421;

					BgL_res1876z00_1421 =
						make_struct(BGl_symbol2826z00zz__threadz00,
						(int) (((long) 2)), BUNSPEC);
					{	/* Llib/thread.scm 145 */
						int BgL_auxz00_5127;

						BgL_auxz00_5127 = (int) (((long) 0));
						STRUCT_SET(BgL_res1876z00_1421, BgL_auxz00_5127, BFALSE);
					}
					{	/* Llib/thread.scm 145 */
						obj_t BgL_arg2300z00_1423;

						{
							BgL_threadzd2backendzd2_bglt BgL_auxz00_5130;

							BgL_auxz00_5130 =
								(BgL_threadzd2backendzd2_bglt) (BgL_obj1875z00_1418);
							BgL_arg2300z00_1423 =
								(((BgL_threadzd2backendzd2_bglt) CREF(BgL_auxz00_5130))->
								BgL_namez00);
						}
						{	/* Llib/thread.scm 145 */
							int BgL_auxz00_5133;

							BgL_auxz00_5133 = (int) (((long) 1));
							STRUCT_SET(BgL_res1876z00_1421, BgL_auxz00_5133,
								BgL_arg2300z00_1423);
					}}
					return BgL_res1876z00_1421;
				}
			}
		}
	}



/* thread-set-cleanup!-2003 */
	obj_t BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00(obj_t
		BgL_envz00_3010, obj_t BgL_thz00_3011, obj_t BgL_vz00_3012)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 525 */
			{
				BgL_nothreadz00_bglt BgL_auxz00_5137;

				BgL_auxz00_5137 = (BgL_nothreadz00_bglt) (BgL_thz00_3011);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_5137))->BgL_z52cleanupz52) =
					((obj_t) BgL_vz00_3012), BUNSPEC);
			}
		}
	}



/* thread-get-cleanup-n2001 */
	obj_t BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00(obj_t
		BgL_envz00_3013, obj_t BgL_thz00_3014)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 519 */
			{
				BgL_nothreadz00_bglt BgL_auxz00_5140;

				BgL_auxz00_5140 = (BgL_nothreadz00_bglt) (BgL_thz00_3014);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_5140))->BgL_z52cleanupz52);
			}
		}
	}



/* thread-set-specific!1999 */
	obj_t BGl_threadzd2setzd2specificz121999z12zz__threadz00(obj_t
		BgL_envz00_3015, obj_t BgL_thz00_3016, obj_t BgL_vz00_3017)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 513 */
			{
				BgL_nothreadz00_bglt BgL_auxz00_5143;

				BgL_auxz00_5143 = (BgL_nothreadz00_bglt) (BgL_thz00_3016);
				return
					((((BgL_nothreadz00_bglt) CREF(BgL_auxz00_5143))->
						BgL_z52specificz52) = ((obj_t) BgL_vz00_3017), BUNSPEC);
			}
		}
	}



/* thread-get-specific-1997 */
	obj_t BGl_threadzd2getzd2specificzd21997zd2zz__threadz00(obj_t
		BgL_envz00_3018, obj_t BgL_thz00_3019)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 507 */
			{
				BgL_nothreadz00_bglt BgL_auxz00_5146;

				BgL_auxz00_5146 = (BgL_nothreadz00_bglt) (BgL_thz00_3019);
				return
					(((BgL_nothreadz00_bglt) CREF(BgL_auxz00_5146))->BgL_z52specificz52);
			}
		}
	}



/* thread-terminate!-no1995 */
	obj_t BGl_threadzd2terminatez12zd2no1995z12zz__threadz00(obj_t
		BgL_envz00_3020, obj_t BgL_thz00_3021)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 499 */
			{
				BgL_nothreadz00_bglt BgL_thz00_1386;

				BgL_thz00_1386 = (BgL_nothreadz00_bglt) (BgL_thz00_3021);
				{	/* Llib/thread.scm 501 */
					bool_t BgL_testz00_5149;

					{	/* Llib/thread.scm 501 */
						obj_t BgL_auxz00_5150;

						BgL_auxz00_5150 =
							(((BgL_nothreadz00_bglt) CREF(BgL_thz00_1386))->
							BgL_z52cleanupz52);
						BgL_testz00_5149 = PROCEDUREP(BgL_auxz00_5150);
					}
					if (BgL_testz00_5149)
						{	/* Llib/thread.scm 501 */
							obj_t BgL_fun2289z00_1391;

							BgL_fun2289z00_1391 =
								(((BgL_nothreadz00_bglt) CREF(BgL_thz00_1386))->
								BgL_z52cleanupz52);
							PROCEDURE_ENTRY(BgL_fun2289z00_1391) (BgL_fun2289z00_1391, BEOA);
						}
					else
						{	/* Llib/thread.scm 501 */
							BFALSE;
						}
				}
				{	/* Llib/thread.scm 502 */
					obj_t BgL_list2291z00_1393;

					BgL_list2291z00_1393 = MAKE_PAIR(BINT(((long) 0)), BNIL);
					return BGl_exitz00zz__errorz00(BgL_list2291z00_1393);
				}
			}
		}
	}



/* thread-join!-nothrea1993 */
	obj_t BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00(obj_t
		BgL_envz00_3022, obj_t BgL_thz00_3023, obj_t BgL_timeoutz00_3024)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 490 */
			{
				BgL_nothreadz00_bglt BgL_thz00_1372;

				obj_t BgL_timeoutz00_1373;

				BgL_thz00_1372 = (BgL_nothreadz00_bglt) (BgL_thz00_3023);
				BgL_timeoutz00_1373 = BgL_timeoutz00_3024;
				{	/* Llib/thread.scm 491 */
					bool_t BgL_testz00_5160;

					{	/* Llib/thread.scm 491 */
						obj_t BgL_arg2282z00_2556;

						BgL_arg2282z00_2556 =
							(((BgL_nothreadz00_bglt) CREF(BgL_thz00_1372))->
							BgL_endzd2exceptionzd2);
						BgL_testz00_5160 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg2282z00_2556,
							BGl_z62exceptionz62zz__objectz00);
					}
					if (BgL_testz00_5160)
						{	/* Llib/thread.scm 491 */
							obj_t BgL_arg2281z00_2557;

							BgL_arg2281z00_2557 =
								(((BgL_nothreadz00_bglt) CREF(BgL_thz00_1372))->
								BgL_endzd2exceptionzd2);
							return BGl_raisez00zz__errorz00(BgL_arg2281z00_2557);
						}
					else
						{	/* Llib/thread.scm 491 */
							return
								(((BgL_nothreadz00_bglt) CREF(BgL_thz00_1372))->
								BgL_endzd2resultzd2);
						}
				}
			}
		}
	}



/* thread-start-joinabl1991 */
	obj_t BGl_threadzd2startzd2joinabl1991z00zz__threadz00(obj_t BgL_envz00_3025,
		obj_t BgL_thz00_3026)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 484 */
			{
				BgL_nothreadz00_bglt BgL_thz00_1366;

				BgL_thz00_1366 = (BgL_nothreadz00_bglt) (BgL_thz00_3026);
				{	/* Llib/thread.scm 485 */
					BgL_threadz00_bglt BgL_thz00_2526;

					BgL_thz00_2526 = (BgL_threadz00_bglt) (BgL_thz00_1366);
					{	/* Llib/thread.scm 485 */
						obj_t BgL_method1963z00_2528;

						{	/* Llib/thread.scm 485 */
							BgL_objectz00_bglt BgL_objz00_2530;

							BgL_objz00_2530 = (BgL_objectz00_bglt) (BgL_thz00_2526);
							{	/* Llib/thread.scm 485 */
								long BgL_objzd2classzd2numz00_2531;

								BgL_objzd2classzd2numz00_2531 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2530);
								{	/* Llib/thread.scm 485 */
									obj_t BgL_arg2518z00_2532;

									BgL_arg2518z00_2532 =
										PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00,
										(int) (((long) 1)));
									{	/* Llib/thread.scm 485 */
										obj_t BgL_arrayz00_2534;

										int BgL_offsetz00_2535;

										BgL_arrayz00_2534 = BgL_arg2518z00_2532;
										BgL_offsetz00_2535 = (int) (BgL_objzd2classzd2numz00_2531);
										{	/* Llib/thread.scm 485 */
											long BgL_offsetz00_2536;

											BgL_offsetz00_2536 =
												((long) (BgL_offsetz00_2535) - OBJECT_TYPE);
											{	/* Llib/thread.scm 485 */
												long BgL_modz00_2537;

												{	/* Llib/thread.scm 485 */
													int BgL_arg2520z00_2538;

													BgL_arg2520z00_2538 = (int) (((long) 16));
													{	/* Llib/thread.scm 485 */
														long BgL_auxz00_5176;

														BgL_auxz00_5176 = (long) (BgL_arg2520z00_2538);
														BgL_modz00_2537 =
															(BgL_offsetz00_2536 / BgL_auxz00_5176);
												}}
												{	/* Llib/thread.scm 485 */
													long BgL_restz00_2539;

													{	/* Llib/thread.scm 485 */
														int BgL_arg2519z00_2540;

														BgL_arg2519z00_2540 = (int) (((long) 16));
														{	/* Llib/thread.scm 485 */
															long BgL_auxz00_5180;

															BgL_auxz00_5180 = (long) (BgL_arg2519z00_2540);
															BgL_restz00_2539 =
																(BgL_offsetz00_2536 % BgL_auxz00_5180);
													}}
													{	/* Llib/thread.scm 485 */

														BgL_method1963z00_2528 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2534,
																(int) (BgL_modz00_2537)),
															(int) (BgL_restz00_2539));
						}}}}}}}}
						{	/* Llib/thread.scm 485 */
							obj_t BgL_auxz00_5187;

							{	/* Llib/thread.scm 485 */
								obj_t BgL_list2185z00_2529;

								BgL_list2185z00_2529 = MAKE_PAIR(BNIL, BNIL);
								BgL_auxz00_5187 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
									(obj_t) (BgL_thz00_2526), BgL_list2185z00_2529);
							}
							return apply(BgL_method1963z00_2528, BgL_auxz00_5187);
						}
					}
				}
			}
		}
	}



/* thread-start!-nothre1989 */
	obj_t BGl_threadzd2startz12zd2nothre1989z12zz__threadz00(obj_t
		BgL_envz00_3027, obj_t BgL_thz00_3028, obj_t BgL_scdz00_3029)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 468 */
			{
				BgL_nothreadz00_bglt BgL_thz00_1322;

				obj_t BgL_scdz00_1323;

				BgL_thz00_1322 = (BgL_nothreadz00_bglt) (BgL_thz00_3028);
				BgL_scdz00_1323 = BgL_scdz00_3029;
				{	/* Llib/thread.scm 469 */
					obj_t BgL_threadz00_1326;

					BgL_threadz00_1326 = BGl_za2nothreadzd2currentza2zd2zz__threadz00;
					{	/* Llib/thread.scm 470 */
						obj_t BgL_val1890z00_1327;

						BgL_val1890z00_1327 =
							BGl_zc3exitza32260ze3z83zz__threadz00(BgL_thz00_1322);
						BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BgL_threadz00_1326;
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val1890z00_1327)))
							{	/* Llib/thread.scm 479 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1890z00_1327),
									CDR(BgL_val1890z00_1327));
							}
						else
							{	/* Llib/thread.scm 479 */
								return BgL_val1890z00_1327;
							}
					}
				}
			}
		}
	}



/* <exit:2267> */
	obj_t BGl_zc3exitza32267ze3z83zz__threadz00(BgL_nothreadz00_bglt
		BgL_instance1893z00_3073, BgL_nothreadz00_bglt BgL_thz00_3072,
		obj_t BgL_ohs1895z00_3071, obj_t BgL_an_exitd1899z00_3070,
		obj_t BgL_err1896z00_3069)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 473 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1903z00_1351;

			if (SET_EXIT(BgL_an_exit1903z00_1351))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1903z00_1351 = (void *) jmpbuf;
					{	/* Llib/thread.scm 473 */

						PUSH_EXIT(BgL_an_exit1903z00_1351, ((long) 0));
						{	/* Llib/thread.scm 473 */
							obj_t BgL_val1904z00_1352;

							{	/* Llib/thread.scm 473 */
								obj_t BgL_arg2268z00_1353;

								{	/* Llib/thread.scm 473 */
									obj_t BgL_zc3anonymousza32270ze3z83_2986;

									BgL_zc3anonymousza32270ze3z83_2986 =
										make_fx_procedure
										(BGl_zc3anonymousza32270ze3z83zz__threadz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32270ze3z83_2986,
										(int) (((long) 0)), BgL_err1896z00_3069);
									PROCEDURE_SET(BgL_zc3anonymousza32270ze3z83_2986,
										(int) (((long) 1)), BgL_an_exitd1899z00_3070);
									BgL_arg2268z00_1353 =
										MAKE_PAIR(BgL_zc3anonymousza32270ze3z83_2986,
										BgL_ohs1895z00_3071);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2268z00_1353);
								BUNSPEC;
							}
							{	/* Llib/thread.scm 477 */
								obj_t BgL_arg2271z00_1358;

								{	/* Llib/thread.scm 477 */
									obj_t BgL_fun2272z00_1359;

									BgL_fun2272z00_1359 =
										(((BgL_nothreadz00_bglt) CREF(BgL_thz00_3072))->
										BgL_bodyz00);
									BgL_arg2271z00_1358 =
										PROCEDURE_ENTRY(BgL_fun2272z00_1359) (BgL_fun2272z00_1359,
										BEOA);
								}
								BgL_val1904z00_1352 =
									((((BgL_nothreadz00_bglt) CREF(BgL_instance1893z00_3073))->
										BgL_endzd2resultzd2) =
									((obj_t) BgL_arg2271z00_1358), BUNSPEC);
							}
							POP_EXIT();
							return BgL_val1904z00_1352;
						}
					}
				}
		}
	}



/* <exit:2261> */
	obj_t BGl_zc3exitza32261ze3z83zz__threadz00(BgL_nothreadz00_bglt
		BgL_instance1893z00_3075, BgL_nothreadz00_bglt BgL_thz00_3074)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 473 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1898z00_1336;

			if (SET_EXIT(BgL_an_exit1898z00_1336))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1898z00_1336 = (void *) jmpbuf;
					{	/* Llib/thread.scm 473 */

						PUSH_EXIT(BgL_an_exit1898z00_1336, ((long) 1));
						{	/* Llib/thread.scm 473 */
							obj_t BgL_an_exitd1899z00_1337;

							BgL_an_exitd1899z00_1337 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Llib/thread.scm 473 */
								obj_t BgL_res1901z00_1340;

								{	/* Llib/thread.scm 473 */
									obj_t BgL_err1896z00_1341;

									obj_t BgL_ohs1895z00_1342;

									BgL_err1896z00_1341 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1895z00_1342 = BGL_ERROR_HANDLER_GET();
									{	/* Llib/thread.scm 473 */
										obj_t BgL_val1902z00_1343;

										BgL_val1902z00_1343 =
											BGl_zc3exitza32267ze3z83zz__threadz00
											(BgL_instance1893z00_3075, BgL_thz00_3074,
											BgL_ohs1895z00_1342, BgL_an_exitd1899z00_1337,
											BgL_err1896z00_1341);
										BGL_ERROR_HANDLER_SET(BgL_ohs1895z00_1342);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1896z00_1341)))
											{	/* Llib/thread.scm 476 */
												obj_t BgL_arg2263z00_1345;

												{	/* Llib/thread.scm 476 */
													obj_t BgL_ez00_1346;

													BgL_ez00_1346 = CDR(BgL_err1896z00_1341);
													((((BgL_nothreadz00_bglt)
																CREF(BgL_instance1893z00_3075))->
															BgL_endzd2exceptionzd2) =
														((obj_t) BgL_ez00_1346), BUNSPEC);
													BgL_arg2263z00_1345 =
														BGl_raisez00zz__errorz00(BgL_ez00_1346);
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1899z00_1337, BgL_arg2263z00_1345);
											}
										else
											{	/* Llib/thread.scm 473 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1902z00_1343)))
											{	/* Llib/thread.scm 473 */
												BgL_res1901z00_1340 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1902z00_1343), CDR(BgL_val1902z00_1343));
											}
										else
											{	/* Llib/thread.scm 473 */
												BgL_res1901z00_1340 = BgL_val1902z00_1343;
											}
									}
								}
								POP_EXIT();
								return BgL_res1901z00_1340;
							}
						}
					}
				}
		}
	}



/* <exit:2260> */
	obj_t BGl_zc3exitza32260ze3z83zz__threadz00(BgL_nothreadz00_bglt
		BgL_thz00_3076)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 479 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1891z00_1332;

			if (SET_EXIT(BgL_an_exit1891z00_1332))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1891z00_1332 = (void *) jmpbuf;
					{	/* Llib/thread.scm 479 */

						PUSH_EXIT(BgL_an_exit1891z00_1332, ((long) 0));
						{	/* Llib/thread.scm 471 */
							BgL_nothreadz00_bglt BgL_val1892z00_1333;

							BGl_za2nothreadzd2currentza2zd2zz__threadz00 =
								(obj_t) (BgL_thz00_3076);
							BGl_zc3exitza32261ze3z83zz__threadz00(BgL_thz00_3076,
								BgL_thz00_3076);
							BgL_val1892z00_1333 = BgL_thz00_3076;
							POP_EXIT();
							return (obj_t) (BgL_val1892z00_1333);
						}
					}
				}
		}
	}



/* <anonymous:2270> */
	obj_t BGl_zc3anonymousza32270ze3z83zz__threadz00(obj_t BgL_envz00_3030,
		obj_t BgL_ez00_3033)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 473 */
			{	/* Llib/thread.scm 473 */
				obj_t BgL_err1896z00_3031;

				obj_t BgL_an_exitd1899z00_3032;

				BgL_err1896z00_3031 =
					PROCEDURE_REF(BgL_envz00_3030, (int) (((long) 0)));
				BgL_an_exitd1899z00_3032 =
					PROCEDURE_REF(BgL_envz00_3030, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1355;

					BgL_ez00_1355 = BgL_ez00_3033;
					SET_CAR(BgL_err1896z00_3031, BTRUE);
					SET_CDR(BgL_err1896z00_3031, BgL_ez00_1355);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1899z00_3032,
						BgL_ez00_1355);
				}
			}
		}
	}



/* object-print-thread1959 */
	obj_t BGl_objectzd2printzd2thread1959z00zz__threadz00(obj_t BgL_envz00_3034,
		obj_t BgL_oz00_3035, obj_t BgL_portz00_3036, obj_t BgL_printzd2slotzd2_3037)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 328 */
			{
				BgL_threadz00_bglt BgL_oz00_1314;

				obj_t BgL_portz00_1315;

				obj_t BgL_printzd2slotzd2_1316;

				BgL_oz00_1314 = (BgL_threadz00_bglt) (BgL_oz00_3035);
				BgL_portz00_1315 = BgL_portz00_3036;
				BgL_printzd2slotzd2_1316 = BgL_printzd2slotzd2_3037;
				{	/* Llib/thread.scm 329 */
					obj_t BgL_list2254z00_2507;

					BgL_list2254z00_2507 = MAKE_PAIR(BgL_portz00_1315, BNIL);
					return
						BGl_objectzd2writezd2zz__objectz00(
						(BgL_objectz00_bglt) (BgL_oz00_1314), BgL_list2254z00_2507);
				}
			}
		}
	}



/* object-write-thread1957 */
	obj_t BGl_objectzd2writezd2thread1957z00zz__threadz00(obj_t BgL_envz00_3038,
		obj_t BgL_oz00_3039, obj_t BgL_portz00_3040)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 319 */
			{
				BgL_threadz00_bglt BgL_oz00_1287;

				obj_t BgL_portz00_1288;

				BgL_oz00_1287 = (BgL_threadz00_bglt) (BgL_oz00_3039);
				BgL_portz00_1288 = BgL_portz00_3040;
				{	/* Llib/thread.scm 320 */
					obj_t BgL_arg2233z00_1291;

					if (PAIRP(BgL_portz00_1288))
						{	/* Llib/thread.scm 320 */
							BgL_arg2233z00_1291 = CAR(BgL_portz00_1288);
						}
					else
						{	/* Llib/thread.scm 320 */
							obj_t BgL_res2594z00_2497;

							{	/* Llib/thread.scm 320 */
								obj_t BgL_auxz00_5261;

								BgL_auxz00_5261 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2594z00_2497 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5261);
							}
							BgL_arg2233z00_1291 = BgL_res2594z00_2497;
						}
					{	/* Llib/thread.scm 322 */
						obj_t BgL_zc3anonymousza32236ze3z83_2989;

						BgL_zc3anonymousza32236ze3z83_2989 =
							make_fx_procedure(BGl_zc3anonymousza32236ze3z83zz__threadz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32236ze3z83_2989,
							(int) (((long) 0)), (obj_t) (BgL_oz00_1287));
						return
							BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
							(BgL_arg2233z00_1291, BgL_zc3anonymousza32236ze3z83_2989);
					}
				}
			}
		}
	}



/* <anonymous:2236> */
	obj_t BGl_zc3anonymousza32236ze3z83zz__threadz00(obj_t BgL_envz00_3041)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 321 */
			{	/* Llib/thread.scm 322 */
				obj_t BgL_oz00_3042;

				BgL_oz00_3042 = PROCEDURE_REF(BgL_envz00_3041, (int) (((long) 0)));
				{

					{	/* Llib/thread.scm 323 */
						obj_t BgL_arg2238z00_1297;

						obj_t BgL_arg2240z00_1299;

						{	/* Llib/thread.scm 323 */
							obj_t BgL_arg2248z00_1306;

							{	/* Llib/thread.scm 323 */
								BgL_objectz00_bglt BgL_objectz00_2498;

								BgL_objectz00_2498 = (BgL_objectz00_bglt) (BgL_oz00_3042);
								{	/* Llib/thread.scm 323 */
									long BgL_arg2521z00_2499;

									{	/* Llib/thread.scm 323 */
										long BgL_arg2522z00_2500;

										BgL_arg2522z00_2500 =
											BGL_OBJECT_CLASS_NUM(BgL_objectz00_2498);
										BgL_arg2521z00_2499 = (BgL_arg2522z00_2500 - OBJECT_TYPE);
									}
									BgL_arg2248z00_1306 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										(int) (BgL_arg2521z00_2499));
							}}
							BgL_arg2238z00_1297 =
								BGl_classzd2namezd2zz__objectz00(BgL_arg2248z00_1306);
						}
						{
							BgL_threadz00_bglt BgL_auxz00_5280;

							BgL_auxz00_5280 = (BgL_threadz00_bglt) (BgL_oz00_3042);
							BgL_arg2240z00_1299 =
								(((BgL_threadz00_bglt) CREF(BgL_auxz00_5280))->BgL_namez00);
						}
						{	/* Llib/thread.scm 323 */
							obj_t BgL_list2243z00_1301;

							{	/* Llib/thread.scm 323 */
								obj_t BgL_arg2244z00_1302;

								{	/* Llib/thread.scm 323 */
									obj_t BgL_arg2245z00_1303;

									{	/* Llib/thread.scm 323 */
										obj_t BgL_arg2246z00_1304;

										{	/* Llib/thread.scm 323 */
											obj_t BgL_arg2247z00_1305;

											BgL_arg2247z00_1305 =
												MAKE_PAIR(BGl_string2945z00zz__threadz00, BNIL);
											BgL_arg2246z00_1304 =
												MAKE_PAIR(BgL_arg2240z00_1299, BgL_arg2247z00_1305);
										}
										BgL_arg2245z00_1303 =
											MAKE_PAIR(BGl_string2946z00zz__threadz00,
											BgL_arg2246z00_1304);
									}
									BgL_arg2244z00_1302 =
										MAKE_PAIR(BgL_arg2238z00_1297, BgL_arg2245z00_1303);
								}
								BgL_list2243z00_1301 =
									MAKE_PAIR(BGl_string2947z00zz__threadz00,
									BgL_arg2244z00_1302);
							}
							return
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2243z00_1301);
						}
					}
				}
			}
		}
	}



/* object-display-threa1955 */
	obj_t BGl_objectzd2displayzd2threa1955z00zz__threadz00(obj_t BgL_envz00_3043,
		obj_t BgL_oz00_3044, obj_t BgL_portz00_3045)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 310 */
			{
				BgL_threadz00_bglt BgL_oz00_1260;

				obj_t BgL_portz00_1261;

				BgL_oz00_1260 = (BgL_threadz00_bglt) (BgL_oz00_3044);
				BgL_portz00_1261 = BgL_portz00_3045;
				{	/* Llib/thread.scm 311 */
					obj_t BgL_arg2203z00_1264;

					if (PAIRP(BgL_portz00_1261))
						{	/* Llib/thread.scm 311 */
							BgL_arg2203z00_1264 = CAR(BgL_portz00_1261);
						}
					else
						{	/* Llib/thread.scm 311 */
							obj_t BgL_res2593z00_2484;

							{	/* Llib/thread.scm 311 */
								obj_t BgL_auxz00_5292;

								BgL_auxz00_5292 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2593z00_2484 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5292);
							}
							BgL_arg2203z00_1264 = BgL_res2593z00_2484;
						}
					{	/* Llib/thread.scm 313 */
						obj_t BgL_zc3anonymousza32206ze3z83_2991;

						BgL_zc3anonymousza32206ze3z83_2991 =
							make_fx_procedure(BGl_zc3anonymousza32206ze3z83zz__threadz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32206ze3z83_2991,
							(int) (((long) 0)), (obj_t) (BgL_oz00_1260));
						return
							BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
							(BgL_arg2203z00_1264, BgL_zc3anonymousza32206ze3z83_2991);
					}
				}
			}
		}
	}



/* <anonymous:2206> */
	obj_t BGl_zc3anonymousza32206ze3z83zz__threadz00(obj_t BgL_envz00_3046)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 312 */
			{	/* Llib/thread.scm 313 */
				obj_t BgL_oz00_3047;

				BgL_oz00_3047 = PROCEDURE_REF(BgL_envz00_3046, (int) (((long) 0)));
				{

					{	/* Llib/thread.scm 314 */
						obj_t BgL_arg2208z00_1270;

						obj_t BgL_arg2210z00_1272;

						{	/* Llib/thread.scm 314 */
							obj_t BgL_arg2222z00_1279;

							{	/* Llib/thread.scm 314 */
								BgL_objectz00_bglt BgL_objectz00_2485;

								BgL_objectz00_2485 = (BgL_objectz00_bglt) (BgL_oz00_3047);
								{	/* Llib/thread.scm 314 */
									long BgL_arg2521z00_2486;

									{	/* Llib/thread.scm 314 */
										long BgL_arg2522z00_2487;

										BgL_arg2522z00_2487 =
											BGL_OBJECT_CLASS_NUM(BgL_objectz00_2485);
										BgL_arg2521z00_2486 = (BgL_arg2522z00_2487 - OBJECT_TYPE);
									}
									BgL_arg2222z00_1279 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										(int) (BgL_arg2521z00_2486));
							}}
							BgL_arg2208z00_1270 =
								BGl_classzd2namezd2zz__objectz00(BgL_arg2222z00_1279);
						}
						{
							BgL_threadz00_bglt BgL_auxz00_5311;

							BgL_auxz00_5311 = (BgL_threadz00_bglt) (BgL_oz00_3047);
							BgL_arg2210z00_1272 =
								(((BgL_threadz00_bglt) CREF(BgL_auxz00_5311))->BgL_namez00);
						}
						{	/* Llib/thread.scm 314 */
							obj_t BgL_list2212z00_1274;

							{	/* Llib/thread.scm 314 */
								obj_t BgL_arg2213z00_1275;

								{	/* Llib/thread.scm 314 */
									obj_t BgL_arg2214z00_1276;

									{	/* Llib/thread.scm 314 */
										obj_t BgL_arg2216z00_1277;

										{	/* Llib/thread.scm 314 */
											obj_t BgL_arg2217z00_1278;

											BgL_arg2217z00_1278 =
												MAKE_PAIR(BGl_string2945z00zz__threadz00, BNIL);
											BgL_arg2216z00_1277 =
												MAKE_PAIR(BgL_arg2210z00_1272, BgL_arg2217z00_1278);
										}
										BgL_arg2214z00_1276 =
											MAKE_PAIR(BGl_string2946z00zz__threadz00,
											BgL_arg2216z00_1277);
									}
									BgL_arg2213z00_1275 =
										MAKE_PAIR(BgL_arg2208z00_1270, BgL_arg2214z00_1276);
								}
								BgL_list2212z00_1274 =
									MAKE_PAIR(BGl_string2947z00zz__threadz00,
									BgL_arg2213z00_1275);
							}
							return
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2212z00_1274);
						}
					}
				}
			}
		}
	}



/* tb-current-thread-no1953 */
	obj_t BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00(obj_t
		BgL_envz00_3048, obj_t BgL_tbz00_3049)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 304 */
			return BGl_za2nothreadzd2currentza2zd2zz__threadz00;
		}
	}



/* tb-make-thread-nothr1951 */
	obj_t BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00(obj_t
		BgL_envz00_3050, obj_t BgL_tbz00_3051, obj_t BgL_bodyz00_3052,
		obj_t BgL_namez00_3053)
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 296 */
			{
				BgL_nothreadzd2backendzd2_bglt BgL_tbz00_1248;

				obj_t BgL_bodyz00_1249;

				obj_t BgL_namez00_1250;

				{	/* Llib/thread.scm 297 */
					BgL_nothreadz00_bglt BgL_auxz00_5320;

					BgL_tbz00_1248 = (BgL_nothreadzd2backendzd2_bglt) (BgL_tbz00_3051);
					BgL_bodyz00_1249 = BgL_bodyz00_3052;
					BgL_namez00_1250 = BgL_namez00_3053;
					{	/* Llib/thread.scm 297 */
						BgL_nothreadz00_bglt BgL_res2592z00_2480;

						{	/* Llib/thread.scm 297 */
							obj_t BgL_body1817z00_2429;

							BgL_body1817z00_2429 = BgL_bodyz00_1249;
							{	/* Llib/thread.scm 297 */
								BgL_nothreadz00_bglt BgL_new1822z00_2434;

								{	/* Llib/thread.scm 297 */
									BgL_nothreadz00_bglt BgL_res2588z00_2439;

									{	/* Llib/thread.scm 297 */
										BgL_nothreadz00_bglt BgL_new1838z00_2435;

										BgL_new1838z00_2435 =
											((BgL_nothreadz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_nothreadz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1838z00_2435),
											BGl_classzd2numzd2zz__objectz00
											(BGl_nothreadz00zz__threadz00));
										{	/* Llib/thread.scm 297 */
											BgL_objectz00_bglt BgL_auxz00_5325;

											BgL_auxz00_5325 =
												(BgL_objectz00_bglt) (BgL_new1838z00_2435);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5325, BFALSE);
										}
										BgL_res2588z00_2439 = BgL_new1838z00_2435;
									}
									BgL_new1822z00_2434 = BgL_res2588z00_2439;
								}
								{	/* Llib/thread.scm 297 */
									BgL_nothreadz00_bglt BgL_res2589z00_2453;

									{	/* Llib/thread.scm 297 */
										BgL_nothreadz00_bglt BgL_new1830z00_2440;

										BgL_new1830z00_2440 = BgL_new1822z00_2434;
										{	/* Llib/thread.scm 297 */
											obj_t BgL_name1824z00_2447;

											obj_t BgL_body1825z00_2448;

											obj_t BgL_z52specific1826z52_2449;

											obj_t BgL_z52cleanup1827z52_2450;

											obj_t BgL_endzd2result1828zd2_2451;

											obj_t BgL_endzd2exception1829zd2_2452;

											BgL_name1824z00_2447 = BgL_namez00_1250;
											BgL_body1825z00_2448 = BgL_body1817z00_2429;
											BgL_z52specific1826z52_2449 = BUNSPEC;
											BgL_z52cleanup1827z52_2450 = BFALSE;
											BgL_endzd2result1828zd2_2451 = BUNSPEC;
											BgL_endzd2exception1829zd2_2452 = BUNSPEC;
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_namez00) =
												((obj_t) BgL_name1824z00_2447), BUNSPEC);
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_bodyz00) =
												((obj_t) BgL_body1825z00_2448), BUNSPEC);
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_z52specificz52) =
												((obj_t) BgL_z52specific1826z52_2449), BUNSPEC);
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_z52cleanupz52) =
												((obj_t) BgL_z52cleanup1827z52_2450), BUNSPEC);
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_endzd2resultzd2) =
												((obj_t) BgL_endzd2result1828zd2_2451), BUNSPEC);
											((((BgL_nothreadz00_bglt) CREF(BgL_new1830z00_2440))->
													BgL_endzd2exceptionzd2) =
												((obj_t) BgL_endzd2exception1829zd2_2452), BUNSPEC);
											BgL_res2589z00_2453 = BgL_new1830z00_2440;
									}} BgL_res2589z00_2453;
								}
								{	/* Llib/thread.scm 297 */
									BgL_threadz00_bglt BgL_thz00_2454;

									BgL_thz00_2454 = (BgL_threadz00_bglt) (BgL_new1822z00_2434);
									{	/* Llib/thread.scm 297 */
										obj_t BgL_method1961z00_2455;

										{	/* Llib/thread.scm 297 */
											BgL_objectz00_bglt BgL_objz00_2456;

											BgL_objz00_2456 = (BgL_objectz00_bglt) (BgL_thz00_2454);
											{	/* Llib/thread.scm 297 */
												long BgL_objzd2classzd2numz00_2457;

												BgL_objzd2classzd2numz00_2457 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2456);
												{	/* Llib/thread.scm 297 */
													obj_t BgL_arg2518z00_2458;

													BgL_arg2518z00_2458 =
														PROCEDURE_REF
														(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
														(int) (((long) 1)));
													{	/* Llib/thread.scm 297 */
														obj_t BgL_arrayz00_2460;

														int BgL_offsetz00_2461;

														BgL_arrayz00_2460 = BgL_arg2518z00_2458;
														BgL_offsetz00_2461 =
															(int) (BgL_objzd2classzd2numz00_2457);
														{	/* Llib/thread.scm 297 */
															long BgL_offsetz00_2462;

															BgL_offsetz00_2462 =
																((long) (BgL_offsetz00_2461) - OBJECT_TYPE);
															{	/* Llib/thread.scm 297 */
																long BgL_modz00_2463;

																{	/* Llib/thread.scm 297 */
																	int BgL_arg2520z00_2464;

																	BgL_arg2520z00_2464 = (int) (((long) 16));
																	{	/* Llib/thread.scm 297 */
																		long BgL_auxz00_5343;

																		BgL_auxz00_5343 =
																			(long) (BgL_arg2520z00_2464);
																		BgL_modz00_2463 =
																			(BgL_offsetz00_2462 / BgL_auxz00_5343);
																}}
																{	/* Llib/thread.scm 297 */
																	long BgL_restz00_2465;

																	{	/* Llib/thread.scm 297 */
																		int BgL_arg2519z00_2466;

																		BgL_arg2519z00_2466 = (int) (((long) 16));
																		{	/* Llib/thread.scm 297 */
																			long BgL_auxz00_5347;

																			BgL_auxz00_5347 =
																				(long) (BgL_arg2519z00_2466);
																			BgL_restz00_2465 =
																				(BgL_offsetz00_2462 % BgL_auxz00_5347);
																	}}
																	{	/* Llib/thread.scm 297 */

																		BgL_method1961z00_2455 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2460,
																				(int) (BgL_modz00_2463)),
																			(int) (BgL_restz00_2465));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method1961z00_2455)
											(BgL_method1961z00_2455, (obj_t) (BgL_thz00_2454), BEOA);
								}}
								BgL_res2592z00_2480 = BgL_new1822z00_2434;
						}}
						BgL_auxz00_5320 = BgL_res2592z00_2480;
					}
					return (obj_t) (BgL_auxz00_5320);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__threadz00()
	{
		AN_OBJECT;
		{	/* Llib/thread.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2948z00zz__threadz00));
			return
				BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2948z00zz__threadz00));
		}
	}

#ifdef __cplusplus
}
#endif
