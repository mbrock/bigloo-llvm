/*===========================================================================*/
/*   (Llib/param.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/param.scm -indent -o objs/obj_u/Llib/param.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2debugzd2zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t);
	static long BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00;
	static obj_t BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_EXPORTED_DECL long bgl_dns_cache_validity_timeout();
	static obj_t BGl_requirezd2initializa7ationz75zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL int bgl_debug();
	BGL_EXPORTED_DECL int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	static obj_t BGl_genericzd2initzd2zz__paramz00();
	static obj_t BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t);
	static bool_t BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
	static obj_t
		BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t);
	static obj_t BGl__bigloozd2compilerzd2debugz00zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00();
	static obj_t
		BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(obj_t, obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	static obj_t BGl__bigloozd2warningzd2setz12z12zz__paramz00(obj_t, obj_t);
	extern obj_t BGl_getenvz00zz__osz00(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2debugza2zd2zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
	static obj_t BGl_cnstzd2initzd2zz__paramz00();
	static obj_t BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2initializa7edz12z67zz__paramz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00();
	static obj_t BGl__bigloozd2initializa7edzf3z86zz__paramz00(obj_t);
	static obj_t BGl_zc3anonymousza31906ze3z83zz__paramz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__paramz00();
	static obj_t BGl__bigloozd2warningzd2zz__paramz00(obj_t);
	static obj_t BGl_symbol2173z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2175z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2178z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2184z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2187z00zz__paramz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2191z00zz__paramz00 = BUNSPEC;
	static obj_t
		BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(obj_t, obj_t);
	static obj_t BGl_symbol2205z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2197z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol2199z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
	static bool_t BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
	static obj_t BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl__bigloozd2loadzd2readerz00zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long);
	static obj_t BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__paramz00();
	static obj_t BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int);
	BGL_EXPORTED_DECL int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	static bool_t BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
	BGL_EXPORTED_DECL int BGl_bigloozd2debugzd2modulez00zz__paramz00();
	static obj_t BGl__bigloozd2debugzd2modulez00zz__paramz00(obj_t);
	static long
		BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
	BGL_EXPORTED_DECL bool_t bgl_dns_enable_cache();
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t);
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00(obj_t);
	static bool_t BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
	BGL_EXPORTED_DECL int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	BGL_EXPORTED_DECL obj_t bgl_debug_set(int);
	static obj_t BGl__bigloozd2loadzd2modulez00zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BUNSPEC;
	static obj_t
		BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int);
	static obj_t
		BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00
		(obj_t, obj_t);
	static obj_t BGl__bigloozd2casezd2sensitivez00zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
	static obj_t BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl__bigloozd2tracezd2colorz00zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2warningza2zd2zz__paramz00 = BUNSPEC;
	static bool_t BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
	static obj_t BGl__bigloozd2libraryzd2pathz00zz__paramz00(obj_t);
	static obj_t BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl__bigloozd2debugzd2setz12z12zz__paramz00(obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
	static obj_t BGl_list2196z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__paramz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2extensionzd2handlerzd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2module2223za7,
		BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2casezd2sensitivezd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2caseza7d2224z00,
		BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2dnsza7d22225z00,
		BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2strictzd2r5rszd2stringszd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2strict2226za7,
		BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2initializa7edz12zd2envzb5zz__paramz00,
		BgL_bgl__biglooza7d2initia2227za7,
		BGl__bigloozd2initializa7edz12z67zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2enablezd2cachezd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2dnsza7d22228z00,
		BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2loadzd2modulezd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2loadza7d2229z00,
		BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2compilerzd2debugzd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2compil2230za7,
		BGl__bigloozd2compilerzd2debugz00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2dnsza7d22231z00,
		BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2loadzd2readerzd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2loadza7d2232z00,
		BGl__bigloozd2loadzd2readerz00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2evalzd2strictzd2modulezd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2evalza7d2233z00,
		BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2loadzd2readerzd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2loadza7d2234z00,
		BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2debugza72235z00,
		BGl__bigloozd2debugzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2initializa7edzf3zd2envz54zz__paramz00,
		BgL_bgl__biglooza7d2initia2236za7,
		BGl__bigloozd2initializa7edzf3z86zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2tracezd2colorzd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2traceza72237z00,
		BGl__bigloozd2tracezd2colorz00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2casezd2sensitivezd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2caseza7d2238z00,
		BGl__bigloozd2casezd2sensitivez00zz__paramz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2debugzd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2debugza72239z00, BGl__bigloozd2debugzd2zz__paramz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2stackzd2depthzd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2traceza72240z00,
		BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2warningzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2warnin2241za7,
		BGl__bigloozd2warningzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2loadzd2modulezd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2loadza7d2242z00,
		BGl__bigloozd2loadzd2modulez00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2libraryzd2pathzd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2librar2243za7,
		BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2libraryzd2pathzd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2librar2244za7,
		BGl__bigloozd2libraryzd2pathz00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2compilerzd2debugzd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2compil2245za7,
		BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zz__paramz00,
		BgL_bgl_za7c3anonymousza7a312246z00,
		BGl_zc3anonymousza31906ze3z83zz__paramz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2warningzd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2warnin2247za7, BGl__bigloozd2warningzd2zz__paramz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2colorzd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2traceza72248z00,
		BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2enablezd2cachezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2dnsza7d22249z00,
		BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2strictzd2r5rszd2stringszd2envz00zz__paramz00,
		BgL_bgl__biglooza7d2strict2250za7,
		BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2module2251za7,
		BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2171z00zz__paramz00,
		BgL_bgl_string2171za700za7za7_2252za7, "param", 5);
	      DEFINE_STRING(BGl_string2172z00zz__paramz00,
		BgL_bgl_string2172za700za7za7_2253za7, "BIGLOOSTACKDEPTH", 16);
	      DEFINE_STRING(BGl_string2174z00zz__paramz00,
		BgL_bgl_string2174za700za7za7_2254za7, "sensitive", 9);
	      DEFINE_STRING(BGl_string2176z00zz__paramz00,
		BgL_bgl_string2176za700za7za7_2255za7, "library-directory", 17);
	      DEFINE_STRING(BGl_string2177z00zz__paramz00,
		BgL_bgl_string2177za700za7za7_2256za7, ".", 1);
	      DEFINE_STRING(BGl_string2180z00zz__paramz00,
		BgL_bgl_string2180za700za7za7_2257za7, "Illegal debug level", 19);
	      DEFINE_STRING(BGl_string2179z00zz__paramz00,
		BgL_bgl_string2179za700za7za7_2258za7, "bigloo-compiler-debug-set!", 26);
	      DEFINE_STRING(BGl_string2181z00zz__paramz00,
		BgL_bgl_string2181za700za7za7_2259za7, "/tmp/bigloo/runtime/Llib/param.scm",
		34);
	      DEFINE_STRING(BGl_string2182z00zz__paramz00,
		BgL_bgl_string2182za700za7za7_2260za7, "_bigloo-compiler-debug-set!", 27);
	      DEFINE_STRING(BGl_string2183z00zz__paramz00,
		BgL_bgl_string2183za700za7za7_2261za7, "int", 3);
	      DEFINE_STRING(BGl_string2185z00zz__paramz00,
		BgL_bgl_string2185za700za7za7_2262za7, "bigloo-debug-set!", 17);
	      DEFINE_STRING(BGl_string2186z00zz__paramz00,
		BgL_bgl_string2186za700za7za7_2263za7, "_bigloo-debug-set!", 18);
	      DEFINE_STRING(BGl_string2188z00zz__paramz00,
		BgL_bgl_string2188za700za7za7_2264za7, "bigloo-debug-module-set!", 24);
	      DEFINE_STRING(BGl_string2200z00zz__paramz00,
		BgL_bgl_string2200za700za7za7_2265za7, "upcase", 6);
	      DEFINE_STRING(BGl_string2190z00zz__paramz00,
		BgL_bgl_string2190za700za7za7_2266za7, "_bigloo-debug-module-set!", 25);
	      DEFINE_STRING(BGl_string2189z00zz__paramz00,
		BgL_bgl_string2189za700za7za7_2267za7, "Illegal debug module level", 26);
	      DEFINE_STRING(BGl_string2201z00zz__paramz00,
		BgL_bgl_string2201za700za7za7_2268za7, "bigloo-sensitivity-set!", 23);
	      DEFINE_STRING(BGl_string2202z00zz__paramz00,
		BgL_bgl_string2202za700za7za7_2269za7, "Illegal sensitive value", 23);
	      DEFINE_STRING(BGl_string2192z00zz__paramz00,
		BgL_bgl_string2192za700za7za7_2270za7, "bigloo-warning-set!", 19);
	      DEFINE_STRING(BGl_string2203z00zz__paramz00,
		BgL_bgl_string2203za700za7za7_2271za7, "_bigloo-case-sensitive-set!", 27);
	      DEFINE_STRING(BGl_string2193z00zz__paramz00,
		BgL_bgl_string2193za700za7za7_2272za7, "Illegal warning level", 21);
	      DEFINE_STRING(BGl_string2204z00zz__paramz00,
		BgL_bgl_string2204za700za7za7_2273za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2194z00zz__paramz00,
		BgL_bgl_string2194za700za7za7_2274za7, "_bigloo-warning-set!", 20);
	      DEFINE_STRING(BGl_string2195z00zz__paramz00,
		BgL_bgl_string2195za700za7za7_2275za7, "_bigloo-trace-stack-depth-set!",
		30);
	      DEFINE_STRING(BGl_string2206z00zz__paramz00,
		BgL_bgl_string2206za700za7za7_2276za7, "bigloo-library-path-set!", 24);
	      DEFINE_STRING(BGl_string2208z00zz__paramz00,
		BgL_bgl_string2208za700za7za7_2277za7, "Illegal values", 14);
	      DEFINE_STRING(BGl_string2198z00zz__paramz00,
		BgL_bgl_string2198za700za7za7_2278za7, "downcase", 8);
	      DEFINE_STRING(BGl_string2210z00zz__paramz00,
		BgL_bgl_string2210za700za7za7_2279za7, "_bigloo-library-path-set!", 25);
	      DEFINE_STRING(BGl_string2209z00zz__paramz00,
		BgL_bgl_string2209za700za7za7_2280za7, "Illegal list", 12);
	      DEFINE_STRING(BGl_string2211z00zz__paramz00,
		BgL_bgl_string2211za700za7za7_2281za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2212z00zz__paramz00,
		BgL_bgl_string2212za700za7za7_2282za7,
		"_bigloo-dns-cache-validity-timeout-set!", 39);
	      DEFINE_STRING(BGl_string2213z00zz__paramz00,
		BgL_bgl_string2213za700za7za7_2283za7, "long", 4);
	      DEFINE_STRING(BGl_string2214z00zz__paramz00,
		BgL_bgl_string2214za700za7za7_2284za7, "__param", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2modulezd2envzd2zz__paramz00,
		BgL_bgl__biglooza7d2debugza72285z00,
		BGl__bigloozd2debugzd2modulez00zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2evalzd2strictzd2modulezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2evalza7d2286z00,
		BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2stackzd2depthzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl__biglooza7d2traceza72287z00,
		BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2modulezd2setz12zd2envz12zz__paramz00,
		BgL_bgl__biglooza7d2debugza72288z00,
		BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long
		BgL_checksumz00_1589, char *BgL_fromz00_1590)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__paramz00))
				{
					BGl_requirezd2initializa7ationz75zz__paramz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__paramz00();
					BGl_importedzd2moduleszd2initz00zz__paramz00();
					BGl_toplevelzd2initzd2zz__paramz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 15 */
			BGl_symbol2173z00zz__paramz00 =
				bstring_to_symbol(BGl_string2174z00zz__paramz00);
			BGl_symbol2175z00zz__paramz00 =
				bstring_to_symbol(BGl_string2176z00zz__paramz00);
			BGl_symbol2178z00zz__paramz00 =
				bstring_to_symbol(BGl_string2179z00zz__paramz00);
			BGl_symbol2184z00zz__paramz00 =
				bstring_to_symbol(BGl_string2185z00zz__paramz00);
			BGl_symbol2187z00zz__paramz00 =
				bstring_to_symbol(BGl_string2188z00zz__paramz00);
			BGl_symbol2191z00zz__paramz00 =
				bstring_to_symbol(BGl_string2192z00zz__paramz00);
			BGl_symbol2197z00zz__paramz00 =
				bstring_to_symbol(BGl_string2198z00zz__paramz00);
			BGl_symbol2199z00zz__paramz00 =
				bstring_to_symbol(BGl_string2200z00zz__paramz00);
			BGl_list2196z00zz__paramz00 =
				MAKE_PAIR(BGl_symbol2173z00zz__paramz00,
				MAKE_PAIR(BGl_symbol2197z00zz__paramz00,
					MAKE_PAIR(BGl_symbol2199z00zz__paramz00, BNIL)));
			return (BGl_symbol2205z00zz__paramz00 =
				bstring_to_symbol(BGl_string2206z00zz__paramz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 15 */
			BGl_za2parameterzd2mutexza2zd2zz__paramz00 =
				bgl_make_mutex(BGl_string2171z00zz__paramz00);
			BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = ((bool_t) 0);
			BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2debugza2zd2zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2warningza2zd2zz__paramz00 = BINT(((long) 1));
			BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = ((bool_t) 1);
			{	/* Llib/param.scm 190 */
				obj_t BgL_envzd2valuezd2_734;

				BgL_envzd2valuezd2_734 =
					BGl_getenvz00zz__osz00(BSTRING_TO_STRING
					(BGl_string2172z00zz__paramz00));
				if (STRINGP(BgL_envzd2valuezd2_734))
					{	/* Llib/param.scm 191 */
						BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
							BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
							(BgL_envzd2valuezd2_734, BNIL);
					}
				else
					{	/* Llib/param.scm 191 */
						BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
							((long) 10);
			}}
			BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 =
				BGl_symbol2173z00zz__paramz00;
			BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = ((bool_t) 0);
			BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BFALSE;
			BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BFALSE;
			BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BFALSE;
			BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = ((bool_t) 1);
			{	/* Llib/param.scm 254 */
				obj_t BgL_arg1887z00_738;

				BgL_arg1887z00_738 =
					BGl_bigloozd2configzd2zz__configurez00(BGl_symbol2175z00zz__paramz00);
				{	/* Llib/param.scm 254 */
					obj_t BgL_list1888z00_739;

					{	/* Llib/param.scm 254 */
						obj_t BgL_arg1890z00_740;

						BgL_arg1890z00_740 = MAKE_PAIR(BgL_arg1887z00_738, BNIL);
						BgL_list1888z00_739 =
							MAKE_PAIR(BGl_string2177z00zz__paramz00, BgL_arg1890z00_740);
					}
					BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
						BgL_list1888z00_739;
			}}
			BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = ((bool_t) 1);
			return (BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00
				= ((long) 20), BUNSPEC);
		}
	}



/* bigloo-strict-r5rs-strings */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 129 */
			return BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
		}
	}



/* _bigloo-strict-r5rs-strings */
	obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00(obj_t
		BgL_envz00_1511)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 129 */
			{	/* Llib/param.scm 129 */
				bool_t BgL_auxz00_1622;

				BgL_auxz00_1622 =
					BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
				return BBOOL(BgL_auxz00_1622);
			}
		}
	}



/* bigloo-strict-r5rs-strings-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t
		BgL_vz00_1)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 129 */
			{	/* Llib/param.scm 129 */
				obj_t BgL_g1862z00_1224;

				BgL_g1862z00_1224 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 129 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 129 */
							bgl_mutex_lock(BgL_g1862z00_1224);
						}
					else
						{	/* Llib/param.scm 129 */
							bgl_mutex_timed_lock(BgL_g1862z00_1224, ((long) 0));
			}}}
			BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = BgL_vz00_1;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BBOOL(BgL_vz00_1);
		}
	}



/* _bigloo-strict-r5rs-strings-set! */
	obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(obj_t
		BgL_envz00_1512, obj_t BgL_vz00_1513)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 129 */
			return
				BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1513));
		}
	}



/* bigloo-compiler-debug */
	BGL_EXPORTED_DEF int BGl_bigloozd2compilerzd2debugz00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 136 */
			return CINT(BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00);
		}
	}



/* _bigloo-compiler-debug */
	obj_t BGl__bigloozd2compilerzd2debugz00zz__paramz00(obj_t BgL_envz00_1514)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 136 */
			return BINT(BGl_bigloozd2compilerzd2debugz00zz__paramz00());
		}
	}



/* bigloo-compiler-debug-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int BgL_vz00_2)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 136 */
			{	/* Llib/param.scm 136 */
				obj_t BgL_g1862z00_743;

				BgL_g1862z00_743 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_743);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_743, ((long) 0));
			}}}
			if (((long) (BgL_vz00_2) < ((long) 0)))
				{	/* Llib/param.scm 139 */
					BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_symbol2178z00zz__paramz00,
						BGl_string2180z00zz__paramz00, BINT(BgL_vz00_2));
				}
			else
				{	/* Llib/param.scm 139 */
					BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BINT(BgL_vz00_2);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_2);
		}
	}



/* _bigloo-compiler-debug-set! */
	obj_t BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1515, obj_t BgL_vz00_1516)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 136 */
			{	/* Llib/param.scm 136 */
				int BgL_auxz00_1647;

				{	/* Llib/param.scm 136 */
					obj_t BgL_auxz00_1648;

					if (INTEGERP(BgL_vz00_1516))
						{	/* Llib/param.scm 136 */
							BgL_auxz00_1648 = BgL_vz00_1516;
						}
					else
						{
							obj_t BgL_auxz00_1651;

							BgL_auxz00_1651 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 4764)), BGl_string2182z00zz__paramz00,
								BGl_string2183z00zz__paramz00, BgL_vz00_1516);
							FAILURE(BgL_auxz00_1651, BFALSE, BFALSE);
						}
					BgL_auxz00_1647 = CINT(BgL_auxz00_1648);
				}
				return
					BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00
					(BgL_auxz00_1647);
			}
		}
	}



/* bigloo-debug */
	BGL_EXPORTED_DEF int bgl_debug()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 148 */
			return CINT(BGl_za2bigloozd2debugza2zd2zz__paramz00);
		}
	}



/* _bigloo-debug */
	obj_t BGl__bigloozd2debugzd2zz__paramz00(obj_t BgL_envz00_1517)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 148 */
			return BINT(bgl_debug());
		}
	}



/* bigloo-debug-set! */
	BGL_EXPORTED_DEF obj_t bgl_debug_set(int BgL_vz00_3)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 148 */
			{	/* Llib/param.scm 148 */
				obj_t BgL_g1862z00_748;

				BgL_g1862z00_748 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_748);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_748, ((long) 0));
			}}}
			if (((long) (BgL_vz00_3) < ((long) 0)))
				{	/* Llib/param.scm 151 */
					BGl_za2bigloozd2debugza2zd2zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_symbol2184z00zz__paramz00,
						BGl_string2180z00zz__paramz00, BINT(BgL_vz00_3));
				}
			else
				{	/* Llib/param.scm 151 */
					BGl_za2bigloozd2debugza2zd2zz__paramz00 = BINT(BgL_vz00_3);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_3);
		}
	}



/* _bigloo-debug-set! */
	obj_t BGl__bigloozd2debugzd2setz12z12zz__paramz00(obj_t BgL_envz00_1518,
		obj_t BgL_vz00_1519)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 148 */
			{	/* Llib/param.scm 148 */
				int BgL_auxz00_1672;

				{	/* Llib/param.scm 148 */
					obj_t BgL_auxz00_1673;

					if (INTEGERP(BgL_vz00_1519))
						{	/* Llib/param.scm 148 */
							BgL_auxz00_1673 = BgL_vz00_1519;
						}
					else
						{
							obj_t BgL_auxz00_1676;

							BgL_auxz00_1676 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 5317)), BGl_string2186z00zz__paramz00,
								BGl_string2183z00zz__paramz00, BgL_vz00_1519);
							FAILURE(BgL_auxz00_1676, BFALSE, BFALSE);
						}
					BgL_auxz00_1672 = CINT(BgL_auxz00_1673);
				}
				return bgl_debug_set(BgL_auxz00_1672);
			}
		}
	}



/* bigloo-debug-module */
	BGL_EXPORTED_DEF int BGl_bigloozd2debugzd2modulez00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 160 */
			return CINT(BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00);
		}
	}



/* _bigloo-debug-module */
	obj_t BGl__bigloozd2debugzd2modulez00zz__paramz00(obj_t BgL_envz00_1520)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 160 */
			return BINT(BGl_bigloozd2debugzd2modulez00zz__paramz00());
		}
	}



/* bigloo-debug-module-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int
		BgL_vz00_4)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 160 */
			{	/* Llib/param.scm 160 */
				obj_t BgL_g1862z00_753;

				BgL_g1862z00_753 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_753);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_753, ((long) 0));
			}}}
			if (((long) (BgL_vz00_4) < ((long) 0)))
				{	/* Llib/param.scm 163 */
					BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_symbol2187z00zz__paramz00,
						BGl_string2189z00zz__paramz00, BINT(BgL_vz00_4));
				}
			else
				{	/* Llib/param.scm 163 */
					BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BINT(BgL_vz00_4);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_4);
		}
	}



/* _bigloo-debug-module-set! */
	obj_t BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1521, obj_t BgL_vz00_1522)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 160 */
			{	/* Llib/param.scm 160 */
				int BgL_auxz00_1697;

				{	/* Llib/param.scm 160 */
					obj_t BgL_auxz00_1698;

					if (INTEGERP(BgL_vz00_1522))
						{	/* Llib/param.scm 160 */
							BgL_auxz00_1698 = BgL_vz00_1522;
						}
					else
						{
							obj_t BgL_auxz00_1701;

							BgL_auxz00_1701 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 5849)), BGl_string2190z00zz__paramz00,
								BGl_string2183z00zz__paramz00, BgL_vz00_1522);
							FAILURE(BgL_auxz00_1701, BFALSE, BFALSE);
						}
					BgL_auxz00_1697 = CINT(BgL_auxz00_1698);
				}
				return
					BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(BgL_auxz00_1697);
			}
		}
	}



/* bigloo-warning */
	BGL_EXPORTED_DEF int BGl_bigloozd2warningzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 172 */
			return CINT(BGl_za2bigloozd2warningza2zd2zz__paramz00);
		}
	}



/* _bigloo-warning */
	obj_t BGl__bigloozd2warningzd2zz__paramz00(obj_t BgL_envz00_1523)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 172 */
			return BINT(BGl_bigloozd2warningzd2zz__paramz00());
		}
	}



/* bigloo-warning-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int
		BgL_vz00_5)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 172 */
			{	/* Llib/param.scm 172 */
				obj_t BgL_g1862z00_758;

				BgL_g1862z00_758 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_758);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_758, ((long) 0));
			}}}
			if (((long) (BgL_vz00_5) < ((long) 0)))
				{	/* Llib/param.scm 175 */
					BGl_za2bigloozd2warningza2zd2zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_symbol2191z00zz__paramz00,
						BGl_string2193z00zz__paramz00, BINT(BgL_vz00_5));
				}
			else
				{	/* Llib/param.scm 175 */
					BGl_za2bigloozd2warningza2zd2zz__paramz00 = BINT(BgL_vz00_5);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_5);
		}
	}



/* _bigloo-warning-set! */
	obj_t BGl__bigloozd2warningzd2setz12z12zz__paramz00(obj_t BgL_envz00_1524,
		obj_t BgL_vz00_1525)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 172 */
			{	/* Llib/param.scm 172 */
				int BgL_auxz00_1722;

				{	/* Llib/param.scm 172 */
					obj_t BgL_auxz00_1723;

					if (INTEGERP(BgL_vz00_1525))
						{	/* Llib/param.scm 172 */
							BgL_auxz00_1723 = BgL_vz00_1525;
						}
					else
						{
							obj_t BgL_auxz00_1726;

							BgL_auxz00_1726 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 6402)), BGl_string2194z00zz__paramz00,
								BGl_string2183z00zz__paramz00, BgL_vz00_1525);
							FAILURE(BgL_auxz00_1726, BFALSE, BFALSE);
						}
					BgL_auxz00_1722 = CINT(BgL_auxz00_1723);
				}
				return BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_auxz00_1722);
			}
		}
	}



/* bigloo-trace-color */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 182 */
			return BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
		}
	}



/* _bigloo-trace-color */
	obj_t BGl__bigloozd2tracezd2colorz00zz__paramz00(obj_t BgL_envz00_1526)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 182 */
			{	/* Llib/param.scm 182 */
				bool_t BgL_auxz00_1732;

				BgL_auxz00_1732 = BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
				return BBOOL(BgL_auxz00_1732);
			}
		}
	}



/* bigloo-trace-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t BgL_vz00_6)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 182 */
			{	/* Llib/param.scm 182 */
				obj_t BgL_g1862z00_1268;

				BgL_g1862z00_1268 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 182 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 182 */
							bgl_mutex_lock(BgL_g1862z00_1268);
						}
					else
						{	/* Llib/param.scm 182 */
							bgl_mutex_timed_lock(BgL_g1862z00_1268, ((long) 0));
			}}}
			BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = BgL_vz00_6;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BBOOL(BgL_vz00_6);
		}
	}



/* _bigloo-trace-color-set! */
	obj_t BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1527, obj_t BgL_vz00_1528)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 182 */
			return
				BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(CBOOL
				(BgL_vz00_1528));
		}
	}



/* bigloo-trace-stack-depth */
	BGL_EXPORTED_DEF int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 189 */
			return (int) (BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00);
		}
	}



/* _bigloo-trace-stack-depth */
	obj_t BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00(obj_t
		BgL_envz00_1529)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 189 */
			return BINT(BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());
		}
	}



/* bigloo-trace-stack-depth-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int BgL_vz00_7)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 189 */
			{	/* Llib/param.scm 189 */
				obj_t BgL_g1862z00_1276;

				BgL_g1862z00_1276 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 189 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 189 */
							bgl_mutex_lock(BgL_g1862z00_1276);
						}
					else
						{	/* Llib/param.scm 189 */
							bgl_mutex_timed_lock(BgL_g1862z00_1276, ((long) 0));
			}}}
			BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
				(long) (BgL_vz00_7);
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_7);
		}
	}



/* _bigloo-trace-stack-depth-set! */
	obj_t BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(obj_t
		BgL_envz00_1530, obj_t BgL_vz00_1531)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 189 */
			{	/* Llib/param.scm 189 */
				int BgL_auxz00_1752;

				{	/* Llib/param.scm 189 */
					obj_t BgL_auxz00_1753;

					if (INTEGERP(BgL_vz00_1531))
						{	/* Llib/param.scm 189 */
							BgL_auxz00_1753 = BgL_vz00_1531;
						}
					else
						{
							obj_t BgL_auxz00_1756;

							BgL_auxz00_1756 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 7207)), BGl_string2195z00zz__paramz00,
								BGl_string2183z00zz__paramz00, BgL_vz00_1531);
							FAILURE(BgL_auxz00_1756, BFALSE, BFALSE);
						}
					BgL_auxz00_1752 = CINT(BgL_auxz00_1753);
				}
				return
					BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00
					(BgL_auxz00_1752);
			}
		}
	}



/* bigloo-case-sensitive */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 204 */
			return BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00;
		}
	}



/* _bigloo-case-sensitive */
	obj_t BGl__bigloozd2casezd2sensitivez00zz__paramz00(obj_t BgL_envz00_1532)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 204 */
			return BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00;
		}
	}



/* bigloo-case-sensitive-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t BgL_vz00_8)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 204 */
			{	/* Llib/param.scm 204 */
				obj_t BgL_g1862z00_767;

				BgL_g1862z00_767 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_767);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_767, ((long) 0));
			}}}
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_8,
						BGl_list2196z00zz__paramz00)))
				{	/* Llib/param.scm 208 */
					BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BgL_vz00_8;
				}
			else
				{	/* Llib/param.scm 208 */
					BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_string2201z00zz__paramz00,
						BGl_string2202z00zz__paramz00, BgL_vz00_8);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BgL_vz00_8;
		}
	}



/* _bigloo-case-sensitive-set! */
	obj_t BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1533, obj_t BgL_vz00_1534)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 204 */
			{	/* Llib/param.scm 204 */
				obj_t BgL_auxz00_1771;

				if (SYMBOLP(BgL_vz00_1534))
					{	/* Llib/param.scm 204 */
						BgL_auxz00_1771 = BgL_vz00_1534;
					}
				else
					{
						obj_t BgL_auxz00_1774;

						BgL_auxz00_1774 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
							BINT(((long) 8037)), BGl_string2203z00zz__paramz00,
							BGl_string2204z00zz__paramz00, BgL_vz00_1534);
						FAILURE(BgL_auxz00_1774, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00
					(BgL_auxz00_1771);
			}
		}
	}



/* bigloo-initialized! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 221 */
			return (BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 =
				((bool_t) 1), BUNSPEC);
		}
	}



/* _bigloo-initialized! */
	obj_t BGl__bigloozd2initializa7edz12z67zz__paramz00(obj_t BgL_envz00_1535)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 221 */
			return BGl_bigloozd2initializa7edz12z67zz__paramz00();
		}
	}



/* bigloo-initialized? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 227 */
			return BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;
		}
	}



/* _bigloo-initialized? */
	obj_t BGl__bigloozd2initializa7edzf3z86zz__paramz00(obj_t BgL_envz00_1536)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 227 */
			return BBOOL(BGl_za2bigloozd2initializa7edpza2z75zz__paramz00);
		}
	}



/* bigloo-load-reader */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 233 */
			return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;
		}
	}



/* _bigloo-load-reader */
	obj_t BGl__bigloozd2loadzd2readerz00zz__paramz00(obj_t BgL_envz00_1537)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 233 */
			return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;
		}
	}



/* bigloo-load-reader-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t BgL_vz00_9)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 233 */
			{	/* Llib/param.scm 233 */
				obj_t BgL_g1862z00_1290;

				BgL_g1862z00_1290 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 233 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 233 */
							bgl_mutex_lock(BgL_g1862z00_1290);
						}
					else
						{	/* Llib/param.scm 233 */
							bgl_mutex_timed_lock(BgL_g1862z00_1290, ((long) 0));
			}}}
			BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BgL_vz00_9;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BgL_vz00_9;
		}
	}



/* _bigloo-load-reader-set! */
	obj_t BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1538, obj_t BgL_vz00_1539)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 233 */
			return BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(BgL_vz00_1539);
		}
	}



/* bigloo-load-module */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 238 */
			return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;
		}
	}



/* _bigloo-load-module */
	obj_t BGl__bigloozd2loadzd2modulez00zz__paramz00(obj_t BgL_envz00_1540)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 238 */
			return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;
		}
	}



/* bigloo-load-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_vz00_10)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 238 */
			{	/* Llib/param.scm 238 */
				obj_t BgL_g1862z00_1298;

				BgL_g1862z00_1298 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 238 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 238 */
							bgl_mutex_lock(BgL_g1862z00_1298);
						}
					else
						{	/* Llib/param.scm 238 */
							bgl_mutex_timed_lock(BgL_g1862z00_1298, ((long) 0));
			}}}
			BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BgL_vz00_10;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BgL_vz00_10;
		}
	}



/* _bigloo-load-module-set! */
	obj_t BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1541, obj_t BgL_vz00_1542)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 238 */
			return BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(BgL_vz00_1542);
		}
	}



/* bigloo-module-extension-handler */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 243 */
			return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;
		}
	}



/* _bigloo-module-extension-handler */
	obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00(obj_t
		BgL_envz00_1543)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 243 */
			return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;
		}
	}



/* bigloo-module-extension-handler-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t
		BgL_vz00_11)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 243 */
			{	/* Llib/param.scm 243 */
				obj_t BgL_g1862z00_1306;

				BgL_g1862z00_1306 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 243 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 243 */
							bgl_mutex_lock(BgL_g1862z00_1306);
						}
					else
						{	/* Llib/param.scm 243 */
							bgl_mutex_timed_lock(BgL_g1862z00_1306, ((long) 0));
			}}}
			BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 =
				BgL_vz00_11;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BgL_vz00_11;
		}
	}



/* _bigloo-module-extension-handler-set! */
	obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t
		BgL_envz00_1544, obj_t BgL_vz00_1545)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 243 */
			return
				BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00
				(BgL_vz00_1545);
		}
	}



/* bigloo-eval-strict-module */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 248 */
			return BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
		}
	}



/* _bigloo-eval-strict-module */
	obj_t BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00(obj_t
		BgL_envz00_1546)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 248 */
			{	/* Llib/param.scm 248 */
				bool_t BgL_auxz00_1799;

				BgL_auxz00_1799 =
					BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
				return BBOOL(BgL_auxz00_1799);
			}
		}
	}



/* bigloo-eval-strict-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t
		BgL_vz00_12)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 248 */
			{	/* Llib/param.scm 248 */
				obj_t BgL_g1862z00_1314;

				BgL_g1862z00_1314 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 248 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 248 */
							bgl_mutex_lock(BgL_g1862z00_1314);
						}
					else
						{	/* Llib/param.scm 248 */
							bgl_mutex_timed_lock(BgL_g1862z00_1314, ((long) 0));
			}}}
			BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = BgL_vz00_12;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BBOOL(BgL_vz00_12);
		}
	}



/* _bigloo-eval-strict-module-set! */
	obj_t BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(obj_t
		BgL_envz00_1547, obj_t BgL_vz00_1548)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 248 */
			return
				BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1548));
		}
	}



/* bigloo-library-path */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 253 */
			return BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00;
		}
	}



/* _bigloo-library-path */
	obj_t BGl__bigloozd2libraryzd2pathz00zz__paramz00(obj_t BgL_envz00_1549)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 253 */
			return BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00;
		}
	}



/* bigloo-library-path-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t BgL_vz00_13)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 253 */
			{	/* Llib/param.scm 253 */
				obj_t BgL_g1862z00_779;

				BgL_g1862z00_779 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1862z00_779);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1862z00_779, ((long) 0));
			}}}
			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_13))
				{	/* Llib/param.scm 259 */
					bool_t BgL_testz00_1815;

					{
						obj_t BgL_l1846z00_793;

						BgL_l1846z00_793 = BgL_vz00_13;
					BgL_zc3anonymousza31908ze3z83_794:
						if (NULLP(BgL_l1846z00_793))
							{	/* Llib/param.scm 259 */
								BgL_testz00_1815 = ((bool_t) 1);
							}
						else
							{	/* Llib/param.scm 259 */
								bool_t BgL_testz00_1818;

								{	/* Llib/param.scm 259 */
									obj_t BgL_auxz00_1819;

									BgL_auxz00_1819 = CAR(BgL_l1846z00_793);
									BgL_testz00_1818 = STRINGP(BgL_auxz00_1819);
								}
								if (BgL_testz00_1818)
									{
										obj_t BgL_l1846z00_1822;

										BgL_l1846z00_1822 = CDR(BgL_l1846z00_793);
										BgL_l1846z00_793 = BgL_l1846z00_1822;
										goto BgL_zc3anonymousza31908ze3z83_794;
									}
								else
									{	/* Llib/param.scm 259 */
										BgL_testz00_1815 = ((bool_t) 0);
									}
							}
					}
					if (BgL_testz00_1815)
						{	/* Llib/param.scm 259 */
							BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BgL_vz00_13;
						}
					else
						{	/* Llib/param.scm 259 */
							BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol2205z00zz__paramz00,
								BGl_string2208z00zz__paramz00,
								BGl_filterz00zz__r4_control_features_6_9z00
								(BGl_proc2207z00zz__paramz00, BgL_vz00_13));
						}
				}
			else
				{	/* Llib/param.scm 257 */
					BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
						BGl_errorz00zz__errorz00(BGl_symbol2205z00zz__paramz00,
						BGl_string2209z00zz__paramz00, BgL_vz00_13);
				}
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BgL_vz00_13;
		}
	}



/* _bigloo-library-path-set! */
	obj_t BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1551, obj_t BgL_vz00_1552)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 253 */
			{	/* Llib/param.scm 253 */
				obj_t BgL_auxz00_1828;

				{	/* Llib/param.scm 253 */
					bool_t BgL_testz00_1829;

					if (PAIRP(BgL_vz00_1552))
						{	/* Llib/param.scm 253 */
							BgL_testz00_1829 = ((bool_t) 1);
						}
					else
						{	/* Llib/param.scm 253 */
							BgL_testz00_1829 = NULLP(BgL_vz00_1552);
						}
					if (BgL_testz00_1829)
						{	/* Llib/param.scm 253 */
							BgL_auxz00_1828 = BgL_vz00_1552;
						}
					else
						{
							obj_t BgL_auxz00_1833;

							BgL_auxz00_1833 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 10375)), BGl_string2210z00zz__paramz00,
								BGl_string2211z00zz__paramz00, BgL_vz00_1552);
							FAILURE(BgL_auxz00_1833, BFALSE, BFALSE);
				}}
				return
					BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(BgL_auxz00_1828);
			}
		}
	}



/* <anonymous:1906> */
	obj_t BGl_zc3anonymousza31906ze3z83zz__paramz00(obj_t BgL_envz00_1553,
		obj_t BgL_sz00_1554)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 262 */
			{
				obj_t BgL_sz00_788;

				{	/* Llib/param.scm 262 */
					bool_t BgL_auxz00_1838;

					BgL_sz00_788 = BgL_sz00_1554;
					if (STRINGP(BgL_sz00_788))
						{	/* Llib/param.scm 262 */
							BgL_auxz00_1838 = ((bool_t) 0);
						}
					else
						{	/* Llib/param.scm 262 */
							BgL_auxz00_1838 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1838);
				}
			}
		}
	}



/* bigloo-dns-enable-cache */
	BGL_EXPORTED_DEF bool_t bgl_dns_enable_cache()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 269 */
			return BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
		}
	}



/* _bigloo-dns-enable-cache */
	obj_t BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00(obj_t BgL_envz00_1555)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 269 */
			{	/* Llib/param.scm 269 */
				bool_t BgL_auxz00_1842;

				BgL_auxz00_1842 =
					BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
				return BBOOL(BgL_auxz00_1842);
			}
		}
	}



/* bigloo-dns-enable-cache-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t
		BgL_vz00_14)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 269 */
			{	/* Llib/param.scm 269 */
				obj_t BgL_g1862z00_1334;

				BgL_g1862z00_1334 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 269 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 269 */
							bgl_mutex_lock(BgL_g1862z00_1334);
						}
					else
						{	/* Llib/param.scm 269 */
							bgl_mutex_timed_lock(BgL_g1862z00_1334, ((long) 0));
			}}}
			BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = BgL_vz00_14;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BBOOL(BgL_vz00_14);
		}
	}



/* _bigloo-dns-enable-cache-set! */
	obj_t BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(obj_t
		BgL_envz00_1556, obj_t BgL_vz00_1557)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 269 */
			return
				BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1557));
		}
	}



/* bigloo-dns-cache-validity-timeout */
	BGL_EXPORTED_DEF long bgl_dns_cache_validity_timeout()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 274 */
			return BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
		}
	}



/* _bigloo-dns-cache-validity-timeout */
	obj_t BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00(obj_t
		BgL_envz00_1558)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 274 */
			{	/* Llib/param.scm 274 */
				long BgL_auxz00_1852;

				BgL_auxz00_1852 =
					BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
				return BINT(BgL_auxz00_1852);
			}
		}
	}



/* bigloo-dns-cache-validity-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long
		BgL_vz00_15)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 274 */
			{	/* Llib/param.scm 274 */
				obj_t BgL_g1862z00_1342;

				BgL_g1862z00_1342 = BGl_za2parameterzd2mutexza2zd2zz__paramz00;
				{	/* Llib/param.scm 274 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/param.scm 274 */
							bgl_mutex_lock(BgL_g1862z00_1342);
						}
					else
						{	/* Llib/param.scm 274 */
							bgl_mutex_timed_lock(BgL_g1862z00_1342, ((long) 0));
			}}}
			BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 =
				BgL_vz00_15;
			bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			return BINT(BgL_vz00_15);
		}
	}



/* _bigloo-dns-cache-validity-timeout-set! */
	obj_t
		BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(obj_t
		BgL_envz00_1559, obj_t BgL_vz00_1560)
	{
		AN_OBJECT;
		{	/* Llib/param.scm 274 */
			{	/* Llib/param.scm 274 */
				long BgL_auxz00_1860;

				{	/* Llib/param.scm 274 */
					obj_t BgL_auxz00_1861;

					if (INTEGERP(BgL_vz00_1560))
						{	/* Llib/param.scm 274 */
							BgL_auxz00_1861 = BgL_vz00_1560;
						}
					else
						{
							obj_t BgL_auxz00_1864;

							BgL_auxz00_1864 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2181z00zz__paramz00,
								BINT(((long) 11215)), BGl_string2212z00zz__paramz00,
								BGl_string2213z00zz__paramz00, BgL_vz00_1560);
							FAILURE(BgL_auxz00_1864, BFALSE, BFALSE);
						}
					BgL_auxz00_1860 = (long) CINT(BgL_auxz00_1861);
				}
				return
					BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00
					(BgL_auxz00_1860);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__paramz00()
	{
		AN_OBJECT;
		{	/* Llib/param.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2214z00zz__paramz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2214z00zz__paramz00));
			return
				BGl_modulezd2initializa7ationz75zz__configurez00(((long) 306671391),
				BSTRING_TO_STRING(BGl_string2214z00zz__paramz00));
		}
	}

#ifdef __cplusplus
}
#endif
