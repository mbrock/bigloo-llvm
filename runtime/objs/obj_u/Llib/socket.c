/*===========================================================================*/
/*   (Llib/socket.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/socket.scm -indent -o objs/obj_u/Llib/socket.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t);
	static obj_t BGl__socketzd2closezd2zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t bgl_getprotobynumber(long);
	static obj_t BGl_toplevelzd2initzd2zz__socketz00();
	static obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31930ze3z83zz__socketz00(obj_t, obj_t);
	static obj_t BGl_list2313z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_list2318z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_getsockopt(obj_t, obj_t);
	static obj_t BGl__socketzd2optionzd2setz12z12zz__socketz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52socketzd2initz12z92zz__socketz00();
	static obj_t BGl__socketzd2downzf3z21zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2optionzd2zz__socketz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2protocolszd2zz__socketz00();
	static obj_t BGl_keyword2301z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t);
	extern obj_t bgl_host(obj_t);
	static obj_t BGl_keyword2295z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword2297z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword2299z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword2314z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword2316z00zz__socketz00 = BUNSPEC;
	static obj_t BGl__hostinfoz00zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2clientzf3z21zz__socketz00(obj_t, obj_t);
	static obj_t BGl_keyword2319z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_hostinfo(obj_t);
	static obj_t BGl_keyword2324z00zz__socketz00 = BUNSPEC;
	extern obj_t socket_local_addr(obj_t);
	static obj_t BGl_keyword2326z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_socketzd2closezd2zz__socketz00(obj_t);
	static obj_t BGl__hostz00zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2hostnamezd2zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t socket_shutdown(obj_t, bool_t);
	static obj_t BGl_genericzd2initzd2zz__socketz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bgl_make_client_socket(obj_t, int, int, obj_t, obj_t);
	static obj_t BGl__socketzf3zf3zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2socketzd2mutexza2zd2zz__socketz00 = BUNSPEC;
	extern void socket_cleanup();
	BGL_EXPORTED_DECL bool_t BGl_socketzf3zf3zz__socketz00(obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__hostnamez00zz__socketz00(obj_t);
	static obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bgl_make_unix_socket(obj_t, int, obj_t, obj_t);
	extern void socket_startup();
	BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2outputzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2serverzf3z21zz__socketz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_getprotoents();
	BGL_EXPORTED_DECL obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t);
	extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
	extern obj_t bgl_getprotobyname(char *);
	static obj_t BGl__socketzd2portzd2numberz00zz__socketz00(obj_t, obj_t);
	extern obj_t socket_close(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__socketz00();
	extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		int);
	BGL_EXPORTED_DECL obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hostinfoz00zz__socketz00(obj_t);
	static obj_t BGl__socketzd2localzd2addressz00zz__socketz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__socketz00();
	static obj_t BGl__getzd2protocolzd2zz__socketz00(obj_t, obj_t);
	extern obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t);
	extern obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
	extern obj_t bgl_socket_accept(obj_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hostnamez00zz__socketz00();
	extern obj_t bgl_make_server_socket(obj_t, int, int);
	BGL_EXPORTED_DECL obj_t BGl_hostz00zz__socketz00(obj_t);
	extern obj_t bgl_gethostname();
	BGL_EXPORTED_DECL obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl__socketzd2hostzd2addressz00zz__socketz00(obj_t, obj_t);
	static obj_t BGl__z52socketzd2initz12z92zz__socketz00(obj_t);
	static bool_t BGl_za2socketzd2initializa7edza2z75zz__socketz00;
	static obj_t BGl__getzd2protocolszd2zz__socketz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t);
	static obj_t BGl_symbol2293z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_symbol2306z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__socketz00();
	static obj_t BGl_symbol2308z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_symbol2310z00zz__socketz00 = BUNSPEC;
	static obj_t BGl__socketzd2inputzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl__makezd2serverzd2socketz00zz__socketz00(obj_t, obj_t);
	extern long bgl_socket_accept_many(obj_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2322z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_symbol2330z00zz__socketz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostinfozd2envzd2zz__socketz00,
		BgL_bgl__hostinfoza700za7za7__2343za7, BGl__hostinfoz00zz__socketz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2localzd2addresszd2envzd2zz__socketz00,
		BgL_bgl__socketza7d2localza72344z00,
		BGl__socketzd2localzd2addressz00zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzf3zd2envz21zz__socketz00,
		BgL_bgl__socketza7f3za7f3za7za7_2345z00, BGl__socketzf3zf3zz__socketz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2hostnamezd2envz00zz__socketz00,
		BgL_bgl__socketza7d2hostna2346za7, BGl__socketzd2hostnamezd2zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostnamezd2envzd2zz__socketz00,
		BgL_bgl__hostnameza700za7za7__2347za7, BGl__hostnamez00zz__socketz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2hostzd2addresszd2envzd2zz__socketz00,
		BgL_bgl__socketza7d2hostza7d2348z00,
		BGl__socketzd2hostzd2addressz00zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2portzd2numberzd2envzd2zz__socketz00,
		BgL_bgl__socketza7d2portza7d2349z00,
		BGl__socketzd2portzd2numberz00zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2clientzd2socketzd2envzd2zz__socketz00,
		BgL_bgl__makeza7d2clientza7d2350z00, opt_generic_entry,
		BGl__makezd2clientzd2socketz00zz__socketz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2protocolzd2envz00zz__socketz00,
		BgL_bgl__getza7d2protocolza72351z00, BGl__getzd2protocolzd2zz__socketz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2serverzd2socketzd2envzd2zz__socketz00,
		BgL_bgl__makeza7d2serverza7d2352z00, va_generic_entry,
		BGl__makezd2serverzd2socketz00zz__socketz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52socketzd2initz12zd2envz40zz__socketz00,
		BgL_bgl__za752socketza7d2ini2353z00,
		BGl__z52socketzd2initz12z92zz__socketz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2serverzf3zd2envzf3zz__socketz00,
		BgL_bgl__socketza7d2server2354za7, BGl__socketzd2serverzf3z21zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2shutdownzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2shutdo2355za7, opt_generic_entry,
		BGl__socketzd2shutdownzd2zz__socketz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2acceptzd2manyzd2envzd2zz__socketz00,
		BgL_bgl__socketza7d2accept2356za7, opt_generic_entry,
		BGl__socketzd2acceptzd2manyz00zz__socketz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2acceptzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2accept2357za7, opt_generic_entry,
		BGl__socketzd2acceptzd2zz__socketz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2protocolszd2envz00zz__socketz00,
		BgL_bgl__getza7d2protocols2358za7, BGl__getzd2protocolszd2zz__socketz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2284z00zz__socketz00,
		BgL_bgl_za7c3anonymousza7a312359z00,
		BGl_zc3anonymousza31930ze3z83zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2clientzf3zd2envzf3zz__socketz00,
		BgL_bgl__socketza7d2client2360za7, BGl__socketzd2clientzf3z21zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2outputzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2output2361za7, BGl__socketzd2outputzd2zz__socketz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2closezd2envz00zz__socketz00,
		BgL_bgl__socketza7d2closeza72362z00, BGl__socketzd2closezd2zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2downzf3zd2envzf3zz__socketz00,
		BgL_bgl__socketza7d2downza7f2363z00, BGl__socketzd2downzf3z21zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2inputzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2inputza72364z00, BGl__socketzd2inputzd2zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2optionzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2option2365za7, BGl__socketzd2optionzd2zz__socketz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2283z00zz__socketz00,
		BgL_bgl_string2283za700za7za7_2366za7, "socket", 6);
	      DEFINE_STRING(BGl_string2285z00zz__socketz00,
		BgL_bgl_string2285za700za7za7_2367za7,
		"/tmp/bigloo/runtime/Llib/socket.scm", 35);
	      DEFINE_STRING(BGl_string2286z00zz__socketz00,
		BgL_bgl_string2286za700za7za7_2368za7, "_socket-hostname", 16);
	      DEFINE_STRING(BGl_string2287z00zz__socketz00,
		BgL_bgl_string2287za700za7za7_2369za7, "_socket-host-address", 20);
	      DEFINE_STRING(BGl_string2288z00zz__socketz00,
		BgL_bgl_string2288za700za7za7_2370za7, "_socket-local-address", 21);
	      DEFINE_STRING(BGl_string2300z00zz__socketz00,
		BgL_bgl_string2300za700za7za7_2371za7, "outbuf", 6);
	      DEFINE_STRING(BGl_string2290z00zz__socketz00,
		BgL_bgl_string2290za700za7za7_2372za7, "_socket-port-number", 19);
	      DEFINE_STRING(BGl_string2289z00zz__socketz00,
		BgL_bgl_string2289za700za7za7_2373za7, "_socket-down?", 13);
	      DEFINE_STRING(BGl_string2291z00zz__socketz00,
		BgL_bgl_string2291za700za7za7_2374za7, "_socket-input", 13);
	      DEFINE_STRING(BGl_string2302z00zz__socketz00,
		BgL_bgl_string2302za700za7za7_2375za7, "timeout", 7);
	      DEFINE_STRING(BGl_string2292z00zz__socketz00,
		BgL_bgl_string2292za700za7za7_2376za7, "_socket-output", 14);
	      DEFINE_STRING(BGl_string2303z00zz__socketz00,
		BgL_bgl_string2303za700za7za7_2377za7, "_make-client-socket", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2optionzd2setz12zd2envzc0zz__socketz00,
		BgL_bgl__socketza7d2option2378za7,
		BGl__socketzd2optionzd2setz12z12zz__socketz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2304z00zz__socketz00,
		BgL_bgl_string2304za700za7za7_2379za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2294z00zz__socketz00,
		BgL_bgl_string2294za700za7za7_2380za7, "inet", 4);
	      DEFINE_STRING(BGl_string2305z00zz__socketz00,
		BgL_bgl_string2305za700za7za7_2381za7, "int", 3);
	      DEFINE_STRING(BGl_string2296z00zz__socketz00,
		BgL_bgl_string2296za700za7za7_2382za7, "domain", 6);
	      DEFINE_STRING(BGl_string2307z00zz__socketz00,
		BgL_bgl_string2307za700za7za7_2383za7, "make-client-socket", 18);
	      DEFINE_STRING(BGl_string2298z00zz__socketz00,
		BgL_bgl_string2298za700za7za7_2384za7, "inbuf", 5);
	      DEFINE_STRING(BGl_string2309z00zz__socketz00,
		BgL_bgl_string2309za700za7za7_2385za7, "unix", 4);
	      DEFINE_STRING(BGl_string2311z00zz__socketz00,
		BgL_bgl_string2311za700za7za7_2386za7, "local", 5);
	      DEFINE_STRING(BGl_string2312z00zz__socketz00,
		BgL_bgl_string2312za700za7za7_2387za7, "Unknown socket domain", 21);
	      DEFINE_STRING(BGl_string2315z00zz__socketz00,
		BgL_bgl_string2315za700za7za7_2388za7, "backlog", 7);
	      DEFINE_STRING(BGl_string2317z00zz__socketz00,
		BgL_bgl_string2317za700za7za7_2389za7, "name", 4);
	      DEFINE_STRING(BGl_string2320z00zz__socketz00,
		BgL_bgl_string2320za700za7za7_2390za7, "errp", 4);
	      DEFINE_STRING(BGl_string2321z00zz__socketz00,
		BgL_bgl_string2321za700za7za7_2391za7, "_socket-accept", 14);
	      DEFINE_STRING(BGl_string2323z00zz__socketz00,
		BgL_bgl_string2323za700za7za7_2392za7, "socket-accept", 13);
	      DEFINE_STRING(BGl_string2325z00zz__socketz00,
		BgL_bgl_string2325za700za7za7_2393za7, "inbufs", 6);
	      DEFINE_STRING(BGl_string2327z00zz__socketz00,
		BgL_bgl_string2327za700za7za7_2394za7, "outbufs", 7);
	      DEFINE_STRING(BGl_string2328z00zz__socketz00,
		BgL_bgl_string2328za700za7za7_2395za7, "_socket-accept-many", 19);
	      DEFINE_STRING(BGl_string2329z00zz__socketz00,
		BgL_bgl_string2329za700za7za7_2396za7, "vector", 6);
	      DEFINE_STRING(BGl_string2331z00zz__socketz00,
		BgL_bgl_string2331za700za7za7_2397za7, "socket-accept-many", 18);
	      DEFINE_STRING(BGl_string2332z00zz__socketz00,
		BgL_bgl_string2332za700za7za7_2398za7, "_socket-shutdown", 16);
	      DEFINE_STRING(BGl_string2333z00zz__socketz00,
		BgL_bgl_string2333za700za7za7_2399za7, "_socket-close", 13);
	      DEFINE_STRING(BGl_string2334z00zz__socketz00,
		BgL_bgl_string2334za700za7za7_2400za7, "_host", 5);
	      DEFINE_STRING(BGl_string2335z00zz__socketz00,
		BgL_bgl_string2335za700za7za7_2401za7, "_hostinfo", 9);
	      DEFINE_STRING(BGl_string2336z00zz__socketz00,
		BgL_bgl_string2336za700za7za7_2402za7, "_socket-option", 14);
	      DEFINE_STRING(BGl_string2337z00zz__socketz00,
		BgL_bgl_string2337za700za7za7_2403za7, "keyword", 7);
	      DEFINE_STRING(BGl_string2338z00zz__socketz00,
		BgL_bgl_string2338za700za7za7_2404za7, "_socket-option-set!", 19);
	      DEFINE_STRING(BGl_string2339z00zz__socketz00,
		BgL_bgl_string2339za700za7za7_2405za7, "__socket", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostzd2envzd2zz__socketz00,
		BgL_bgl__hostza700za7za7__sock2406za7, BGl__hostz00zz__socketz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long
		BgL_checksumz00_1911, char *BgL_fromz00_1912)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__socketz00))
				{
					BGl_requirezd2initializa7ationz75zz__socketz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__socketz00();
					BGl_importedzd2moduleszd2initz00zz__socketz00();
					BGl_toplevelzd2initzd2zz__socketz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 14 */
			BGl_symbol2293z00zz__socketz00 =
				bstring_to_symbol(BGl_string2294z00zz__socketz00);
			BGl_keyword2295z00zz__socketz00 =
				bstring_to_keyword(BGl_string2296z00zz__socketz00);
			BGl_keyword2297z00zz__socketz00 =
				bstring_to_keyword(BGl_string2298z00zz__socketz00);
			BGl_keyword2299z00zz__socketz00 =
				bstring_to_keyword(BGl_string2300z00zz__socketz00);
			BGl_keyword2301z00zz__socketz00 =
				bstring_to_keyword(BGl_string2302z00zz__socketz00);
			BGl_symbol2306z00zz__socketz00 =
				bstring_to_symbol(BGl_string2307z00zz__socketz00);
			BGl_symbol2308z00zz__socketz00 =
				bstring_to_symbol(BGl_string2309z00zz__socketz00);
			BGl_symbol2310z00zz__socketz00 =
				bstring_to_symbol(BGl_string2311z00zz__socketz00);
			BGl_keyword2314z00zz__socketz00 =
				bstring_to_keyword(BGl_string2315z00zz__socketz00);
			BGl_keyword2316z00zz__socketz00 =
				bstring_to_keyword(BGl_string2317z00zz__socketz00);
			BGl_list2313z00zz__socketz00 =
				MAKE_PAIR(BGl_keyword2314z00zz__socketz00,
				MAKE_PAIR(BGl_keyword2316z00zz__socketz00, BNIL));
			BGl_list2318z00zz__socketz00 =
				MAKE_PAIR(BGl_keyword2316z00zz__socketz00,
				MAKE_PAIR(BGl_keyword2314z00zz__socketz00, BNIL));
			BGl_keyword2319z00zz__socketz00 =
				bstring_to_keyword(BGl_string2320z00zz__socketz00);
			BGl_symbol2322z00zz__socketz00 =
				bstring_to_symbol(BGl_string2323z00zz__socketz00);
			BGl_keyword2324z00zz__socketz00 =
				bstring_to_keyword(BGl_string2325z00zz__socketz00);
			BGl_keyword2326z00zz__socketz00 =
				bstring_to_keyword(BGl_string2327z00zz__socketz00);
			return (BGl_symbol2330z00zz__socketz00 =
				bstring_to_symbol(BGl_string2331z00zz__socketz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 14 */
			BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t) 0);
			return (BGl_za2socketzd2mutexza2zd2zz__socketz00 =
				bgl_make_mutex(BGl_string2283z00zz__socketz00), BUNSPEC);
		}
	}



/* %socket-init! */
	BGL_EXPORTED_DEF obj_t BGl_z52socketzd2initz12z92zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 178 */
			{	/* Llib/socket.scm 179 */
				obj_t BgL_g1920z00_786;

				BgL_g1920z00_786 = BGl_za2socketzd2mutexza2zd2zz__socketz00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1920z00_786);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1920z00_786, ((long) 0));
			}}}
			if (BGl_za2socketzd2initializa7edza2z75zz__socketz00)
				{	/* Llib/socket.scm 180 */
					BFALSE;
				}
			else
				{	/* Llib/socket.scm 180 */
					BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t) 1);
					socket_startup();
					BUNSPEC;
					BGl_registerzd2exitzd2functionz12z12zz__biglooz00
						(BGl_proc2284z00zz__socketz00);
					BUNSPEC;
				}
			{	/* Llib/socket.scm 190 */
				obj_t BgL_mz00_1346;

				BgL_mz00_1346 = BGl_za2socketzd2mutexza2zd2zz__socketz00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1346));
			}
		}
	}



/* _%socket-init! */
	obj_t BGl__z52socketzd2initz12z92zz__socketz00(obj_t BgL_envz00_1790)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 178 */
			return BGl_z52socketzd2initz12z92zz__socketz00();
		}
	}



/* <anonymous:1930> */
	obj_t BGl_zc3anonymousza31930ze3z83zz__socketz00(obj_t BgL_envz00_1791,
		obj_t BgL_xz00_1792)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 184 */
			{
				obj_t BgL_xz00_789;

				BgL_xz00_789 = BgL_xz00_1792;
				socket_cleanup();
				BUNSPEC;
				return BgL_xz00_789;
			}
		}
	}



/* socket? */
	BGL_EXPORTED_DEF bool_t BGl_socketzf3zf3zz__socketz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 195 */
			return SOCKETP(BgL_objz00_1);
		}
	}



/* _socket? */
	obj_t BGl__socketzf3zf3zz__socketz00(obj_t BgL_envz00_1793,
		obj_t BgL_objz00_1794)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 195 */
			return BBOOL(SOCKETP(BgL_objz00_1794));
		}
	}



/* socket-server? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t
		BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 201 */
			return BGL_SOCKET_SERVERP(BgL_objz00_2);
		}
	}



/* _socket-server? */
	obj_t BGl__socketzd2serverzf3z21zz__socketz00(obj_t BgL_envz00_1795,
		obj_t BgL_objz00_1796)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 201 */
			return BBOOL(BGL_SOCKET_SERVERP(BgL_objz00_1796));
		}
	}



/* socket-client? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t
		BgL_objz00_3)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 207 */
			return BGL_SOCKET_CLIENTP(BgL_objz00_3);
		}
	}



/* _socket-client? */
	obj_t BGl__socketzd2clientzf3z21zz__socketz00(obj_t BgL_envz00_1797,
		obj_t BgL_objz00_1798)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 207 */
			return BBOOL(BGL_SOCKET_CLIENTP(BgL_objz00_1798));
		}
	}



/* socket-hostname */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t
		BgL_socketz00_4)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 213 */
			return SOCKET_HOSTNAME(BgL_socketz00_4);
		}
	}



/* _socket-hostname */
	obj_t BGl__socketzd2hostnamezd2zz__socketz00(obj_t BgL_envz00_1799,
		obj_t BgL_socketz00_1800)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 213 */
			{	/* Llib/socket.scm 214 */
				obj_t BgL_socketz00_1885;

				if (SOCKETP(BgL_socketz00_1800))
					{	/* Llib/socket.scm 214 */
						BgL_socketz00_1885 = BgL_socketz00_1800;
					}
				else
					{
						obj_t BgL_auxz00_1962;

						BgL_auxz00_1962 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 8747)), BGl_string2286z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1800);
						FAILURE(BgL_auxz00_1962, BFALSE, BFALSE);
					}
				return SOCKET_HOSTNAME(BgL_socketz00_1885);
			}
		}
	}



/* socket-host-address */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t
		BgL_socketz00_5)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 219 */
			return SOCKET_HOSTIP(BgL_socketz00_5);
		}
	}



/* _socket-host-address */
	obj_t BGl__socketzd2hostzd2addressz00zz__socketz00(obj_t BgL_envz00_1801,
		obj_t BgL_socketz00_1802)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 219 */
			{	/* Llib/socket.scm 220 */
				obj_t BgL_socketz00_1886;

				if (SOCKETP(BgL_socketz00_1802))
					{	/* Llib/socket.scm 220 */
						BgL_socketz00_1886 = BgL_socketz00_1802;
					}
				else
					{
						obj_t BgL_auxz00_1970;

						BgL_auxz00_1970 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 9045)), BGl_string2287z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1802);
						FAILURE(BgL_auxz00_1970, BFALSE, BFALSE);
					}
				return SOCKET_HOSTIP(BgL_socketz00_1886);
			}
		}
	}



/* socket-local-address */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t
		BgL_socketz00_6)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 225 */
			return socket_local_addr(BgL_socketz00_6);
		}
	}



/* _socket-local-address */
	obj_t BGl__socketzd2localzd2addressz00zz__socketz00(obj_t BgL_envz00_1803,
		obj_t BgL_socketz00_1804)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 225 */
			{	/* Llib/socket.scm 226 */
				obj_t BgL_socketz00_1887;

				if (SOCKETP(BgL_socketz00_1804))
					{	/* Llib/socket.scm 226 */
						BgL_socketz00_1887 = BgL_socketz00_1804;
					}
				else
					{
						obj_t BgL_auxz00_1978;

						BgL_auxz00_1978 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 9350)), BGl_string2288z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1804);
						FAILURE(BgL_auxz00_1978, BFALSE, BFALSE);
					}
				return socket_local_addr(BgL_socketz00_1887);
			}
		}
	}



/* socket-down? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t
		BgL_socketz00_7)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 231 */
			return SOCKET_DOWNP(BgL_socketz00_7);
		}
	}



/* _socket-down? */
	obj_t BGl__socketzd2downzf3z21zz__socketz00(obj_t BgL_envz00_1805,
		obj_t BgL_socketz00_1806)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 231 */
			{	/* Llib/socket.scm 232 */
				bool_t BgL_auxz00_1984;

				{	/* Llib/socket.scm 232 */
					obj_t BgL_socketz00_1888;

					if (SOCKETP(BgL_socketz00_1806))
						{	/* Llib/socket.scm 232 */
							BgL_socketz00_1888 = BgL_socketz00_1806;
						}
					else
						{
							obj_t BgL_auxz00_1987;

							BgL_auxz00_1987 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
								BINT(((long) 9657)), BGl_string2289z00zz__socketz00,
								BGl_string2283z00zz__socketz00, BgL_socketz00_1806);
							FAILURE(BgL_auxz00_1987, BFALSE, BFALSE);
						}
					BgL_auxz00_1984 = SOCKET_DOWNP(BgL_socketz00_1888);
				}
				return BBOOL(BgL_auxz00_1984);
			}
		}
	}



/* socket-port-number */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t
		BgL_socketz00_8)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 237 */
			return BINT(SOCKET_PORT(BgL_socketz00_8));
		}
	}



/* _socket-port-number */
	obj_t BGl__socketzd2portzd2numberz00zz__socketz00(obj_t BgL_envz00_1807,
		obj_t BgL_socketz00_1808)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 237 */
			{	/* Llib/socket.scm 238 */
				obj_t BgL_socketz00_1889;

				if (SOCKETP(BgL_socketz00_1808))
					{	/* Llib/socket.scm 238 */
						BgL_socketz00_1889 = BgL_socketz00_1808;
					}
				else
					{
						obj_t BgL_auxz00_1997;

						BgL_auxz00_1997 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 9965)), BGl_string2290z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1808);
						FAILURE(BgL_auxz00_1997, BFALSE, BFALSE);
					}
				return BINT(SOCKET_PORT(BgL_socketz00_1889));
			}
		}
	}



/* socket-input */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t
		BgL_socketz00_9)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 243 */
			return SOCKET_INPUT(BgL_socketz00_9);
		}
	}



/* _socket-input */
	obj_t BGl__socketzd2inputzd2zz__socketz00(obj_t BgL_envz00_1809,
		obj_t BgL_socketz00_1810)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 243 */
			{	/* Llib/socket.scm 244 */
				obj_t BgL_socketz00_1890;

				if (SOCKETP(BgL_socketz00_1810))
					{	/* Llib/socket.scm 244 */
						BgL_socketz00_1890 = BgL_socketz00_1810;
					}
				else
					{
						obj_t BgL_auxz00_2006;

						BgL_auxz00_2006 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 10267)), BGl_string2291z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1810);
						FAILURE(BgL_auxz00_2006, BFALSE, BFALSE);
					}
				return SOCKET_INPUT(BgL_socketz00_1890);
			}
		}
	}



/* socket-output */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t
		BgL_socketz00_10)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 249 */
			return SOCKET_OUTPUT(BgL_socketz00_10);
		}
	}



/* _socket-output */
	obj_t BGl__socketzd2outputzd2zz__socketz00(obj_t BgL_envz00_1811,
		obj_t BgL_socketz00_1812)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 249 */
			{	/* Llib/socket.scm 250 */
				obj_t BgL_socketz00_1891;

				if (SOCKETP(BgL_socketz00_1812))
					{	/* Llib/socket.scm 250 */
						BgL_socketz00_1891 = BgL_socketz00_1812;
					}
				else
					{
						obj_t BgL_auxz00_2014;

						BgL_auxz00_2014 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 10564)), BGl_string2292z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1812);
						FAILURE(BgL_auxz00_2014, BFALSE, BFALSE);
					}
				return SOCKET_OUTPUT(BgL_socketz00_1891);
			}
		}
	}



/* _make-client-socket */
	obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t BgL_envz00_18,
		obj_t BgL_opt1866z00_17)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 255 */
			{	/* Llib/socket.scm 255 */
				int BgL_l1867z00_792;

				BgL_l1867z00_792 = VECTOR_LENGTH(BgL_opt1866z00_17);
				{	/* Llib/socket.scm 255 */
					obj_t BgL_g1875z00_796;

					obj_t BgL_g1876z00_797;

					BgL_g1875z00_796 = VECTOR_REF(BgL_opt1866z00_17, (int) (((long) 0)));
					BgL_g1876z00_797 = VECTOR_REF(BgL_opt1866z00_17, (int) (((long) 1)));
					{	/* Llib/socket.scm 255 */
						obj_t BgL_domainz00_798;

						BgL_domainz00_798 = BGl_symbol2293z00zz__socketz00;
						{	/* Llib/socket.scm 255 */
							obj_t BgL_inbufz00_799;

							BgL_inbufz00_799 = BTRUE;
							{	/* Llib/socket.scm 255 */
								obj_t BgL_outbufz00_800;

								BgL_outbufz00_800 = BTRUE;
								{	/* Llib/socket.scm 255 */
									obj_t BgL_timeoutz00_801;

									BgL_timeoutz00_801 = BINT(((long) 0));
									{	/* Llib/socket.scm 255 */

										{	/* Llib/socket.scm 255 */
											long BgL_index1871z00_802;

											{
												long BgL_iz00_1349;

												BgL_iz00_1349 = ((long) 2);
											BgL_search1868z00_1348:
												if ((BgL_iz00_1349 == (long) (BgL_l1867z00_792)))
													{	/* Llib/socket.scm 255 */
														BgL_index1871z00_802 = ((long) -1);
													}
												else
													{	/* Llib/socket.scm 255 */
														obj_t BgL_vz00_1351;

														BgL_vz00_1351 =
															VECTOR_REF(BgL_opt1866z00_17,
															(int) (BgL_iz00_1349));
														if (
															(BgL_vz00_1351 ==
																BGl_keyword2295z00zz__socketz00))
															{	/* Llib/socket.scm 255 */
																BgL_index1871z00_802 =
																	(BgL_iz00_1349 + ((long) 1));
															}
														else
															{
																long BgL_iz00_2033;

																BgL_iz00_2033 = (BgL_iz00_1349 + ((long) 2));
																BgL_iz00_1349 = BgL_iz00_2033;
																goto BgL_search1868z00_1348;
															}
													}
											}
											if ((BgL_index1871z00_802 >= ((long) 0)))
												{	/* Llib/socket.scm 255 */
													BgL_domainz00_798 =
														VECTOR_REF(BgL_opt1866z00_17,
														(int) (BgL_index1871z00_802));
												}
											else
												{	/* Llib/socket.scm 255 */
													BFALSE;
												}
										}
										{	/* Llib/socket.scm 255 */
											long BgL_index1872z00_804;

											{
												long BgL_iz00_1363;

												BgL_iz00_1363 = ((long) 2);
											BgL_search1868z00_1362:
												if ((BgL_iz00_1363 == (long) (BgL_l1867z00_792)))
													{	/* Llib/socket.scm 255 */
														BgL_index1872z00_804 = ((long) -1);
													}
												else
													{	/* Llib/socket.scm 255 */
														obj_t BgL_vz00_1365;

														BgL_vz00_1365 =
															VECTOR_REF(BgL_opt1866z00_17,
															(int) (BgL_iz00_1363));
														if (
															(BgL_vz00_1365 ==
																BGl_keyword2297z00zz__socketz00))
															{	/* Llib/socket.scm 255 */
																BgL_index1872z00_804 =
																	(BgL_iz00_1363 + ((long) 1));
															}
														else
															{
																long BgL_iz00_2047;

																BgL_iz00_2047 = (BgL_iz00_1363 + ((long) 2));
																BgL_iz00_1363 = BgL_iz00_2047;
																goto BgL_search1868z00_1362;
															}
													}
											}
											if ((BgL_index1872z00_804 >= ((long) 0)))
												{	/* Llib/socket.scm 255 */
													BgL_inbufz00_799 =
														VECTOR_REF(BgL_opt1866z00_17,
														(int) (BgL_index1872z00_804));
												}
											else
												{	/* Llib/socket.scm 255 */
													BFALSE;
												}
										}
										{	/* Llib/socket.scm 255 */
											long BgL_index1873z00_806;

											{
												long BgL_iz00_1377;

												BgL_iz00_1377 = ((long) 2);
											BgL_search1868z00_1376:
												if ((BgL_iz00_1377 == (long) (BgL_l1867z00_792)))
													{	/* Llib/socket.scm 255 */
														BgL_index1873z00_806 = ((long) -1);
													}
												else
													{	/* Llib/socket.scm 255 */
														obj_t BgL_vz00_1379;

														BgL_vz00_1379 =
															VECTOR_REF(BgL_opt1866z00_17,
															(int) (BgL_iz00_1377));
														if (
															(BgL_vz00_1379 ==
																BGl_keyword2299z00zz__socketz00))
															{	/* Llib/socket.scm 255 */
																BgL_index1873z00_806 =
																	(BgL_iz00_1377 + ((long) 1));
															}
														else
															{
																long BgL_iz00_2061;

																BgL_iz00_2061 = (BgL_iz00_1377 + ((long) 2));
																BgL_iz00_1377 = BgL_iz00_2061;
																goto BgL_search1868z00_1376;
															}
													}
											}
											if ((BgL_index1873z00_806 >= ((long) 0)))
												{	/* Llib/socket.scm 255 */
													BgL_outbufz00_800 =
														VECTOR_REF(BgL_opt1866z00_17,
														(int) (BgL_index1873z00_806));
												}
											else
												{	/* Llib/socket.scm 255 */
													BFALSE;
												}
										}
										{	/* Llib/socket.scm 255 */
											long BgL_index1874z00_808;

											{
												long BgL_iz00_1391;

												BgL_iz00_1391 = ((long) 2);
											BgL_search1868z00_1390:
												if ((BgL_iz00_1391 == (long) (BgL_l1867z00_792)))
													{	/* Llib/socket.scm 255 */
														BgL_index1874z00_808 = ((long) -1);
													}
												else
													{	/* Llib/socket.scm 255 */
														obj_t BgL_vz00_1393;

														BgL_vz00_1393 =
															VECTOR_REF(BgL_opt1866z00_17,
															(int) (BgL_iz00_1391));
														if (
															(BgL_vz00_1393 ==
																BGl_keyword2301z00zz__socketz00))
															{	/* Llib/socket.scm 255 */
																BgL_index1874z00_808 =
																	(BgL_iz00_1391 + ((long) 1));
															}
														else
															{
																long BgL_iz00_2075;

																BgL_iz00_2075 = (BgL_iz00_1391 + ((long) 2));
																BgL_iz00_1391 = BgL_iz00_2075;
																goto BgL_search1868z00_1390;
															}
													}
											}
											if ((BgL_index1874z00_808 >= ((long) 0)))
												{	/* Llib/socket.scm 255 */
													BgL_timeoutz00_801 =
														VECTOR_REF(BgL_opt1866z00_17,
														(int) (BgL_index1874z00_808));
												}
											else
												{	/* Llib/socket.scm 255 */
													BFALSE;
												}
										}
										{	/* Llib/socket.scm 255 */
											obj_t BgL_arg1935z00_810;

											obj_t BgL_arg1937z00_811;

											BgL_arg1935z00_810 =
												VECTOR_REF(BgL_opt1866z00_17, (int) (((long) 0)));
											BgL_arg1937z00_811 =
												VECTOR_REF(BgL_opt1866z00_17, (int) (((long) 1)));
											{	/* Llib/socket.scm 255 */
												obj_t BgL_domainz00_812;

												BgL_domainz00_812 = BgL_domainz00_798;
												{	/* Llib/socket.scm 255 */
													obj_t BgL_inbufz00_813;

													BgL_inbufz00_813 = BgL_inbufz00_799;
													{	/* Llib/socket.scm 255 */
														obj_t BgL_outbufz00_814;

														BgL_outbufz00_814 = BgL_outbufz00_800;
														{	/* Llib/socket.scm 255 */
															obj_t BgL_timeoutz00_815;

															BgL_timeoutz00_815 = BgL_timeoutz00_801;
															{	/* Llib/socket.scm 255 */
																obj_t BgL_res2224z00_1418;

																{	/* Llib/socket.scm 255 */
																	obj_t BgL_hostz00_1404;

																	int BgL_portz00_1405;

																	if (STRINGP(BgL_arg1935z00_810))
																		{	/* Llib/socket.scm 255 */
																			BgL_hostz00_1404 = BgL_arg1935z00_810;
																		}
																	else
																		{
																			obj_t BgL_auxz00_2087;

																			BgL_auxz00_2087 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2285z00zz__socketz00,
																				BINT(((long) 10813)),
																				BGl_string2303z00zz__socketz00,
																				BGl_string2304z00zz__socketz00,
																				BgL_arg1935z00_810);
																			FAILURE(BgL_auxz00_2087, BFALSE, BFALSE);
																		}
																	{	/* Llib/socket.scm 255 */
																		obj_t BgL_auxz00_2091;

																		if (INTEGERP(BgL_arg1937z00_811))
																			{	/* Llib/socket.scm 255 */
																				BgL_auxz00_2091 = BgL_arg1937z00_811;
																			}
																		else
																			{
																				obj_t BgL_auxz00_2094;

																				BgL_auxz00_2094 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2285z00zz__socketz00,
																					BINT(((long) 10813)),
																					BGl_string2303z00zz__socketz00,
																					BGl_string2305z00zz__socketz00,
																					BgL_arg1937z00_811);
																				FAILURE(BgL_auxz00_2094, BFALSE,
																					BFALSE);
																			}
																		BgL_portz00_1405 = CINT(BgL_auxz00_2091);
																	}
																	BGl_z52socketzd2initz12z92zz__socketz00();
																	{	/* Llib/socket.scm 255 */
																		obj_t BgL_inbufz00_1410;

																		obj_t BgL_outbufz00_1411;

																		BgL_inbufz00_1410 =
																			BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
																			(BGl_symbol2306z00zz__socketz00,
																			BgL_inbufz00_813, (int) (((long) 512)));
																		BgL_outbufz00_1411 =
																			BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
																			(BGl_symbol2306z00zz__socketz00,
																			BgL_outbufz00_814, (int) (((long) 1024)));
																		if ((BgL_domainz00_812 ==
																				BGl_symbol2293z00zz__socketz00))
																			{	/* Llib/socket.scm 255 */
																				int BgL_auxz00_2106;

																				{	/* Llib/socket.scm 255 */
																					obj_t BgL_auxz00_2107;

																					if (INTEGERP(BgL_timeoutz00_815))
																						{	/* Llib/socket.scm 255 */
																							BgL_auxz00_2107 =
																								BgL_timeoutz00_815;
																						}
																					else
																						{
																							obj_t BgL_auxz00_2110;

																							BgL_auxz00_2110 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string2285z00zz__socketz00,
																								BINT(((long) 10813)),
																								BGl_string2303z00zz__socketz00,
																								BGl_string2305z00zz__socketz00,
																								BgL_timeoutz00_815);
																							FAILURE(BgL_auxz00_2110, BFALSE,
																								BFALSE);
																						}
																					BgL_auxz00_2106 =
																						CINT(BgL_auxz00_2107);
																				}
																				BgL_res2224z00_1418 =
																					bgl_make_client_socket
																					(BgL_hostz00_1404, BgL_portz00_1405,
																					BgL_auxz00_2106, BgL_inbufz00_1410,
																					BgL_outbufz00_1411);
																			}
																		else
																			{	/* Llib/socket.scm 255 */
																				bool_t BgL_testz00_2116;

																				{	/* Llib/socket.scm 255 */
																					bool_t BgL__ortest_1825z00_1415;

																					BgL__ortest_1825z00_1415 =
																						(BgL_domainz00_812 ==
																						BGl_symbol2308z00zz__socketz00);
																					if (BgL__ortest_1825z00_1415)
																						{	/* Llib/socket.scm 255 */
																							BgL_testz00_2116 =
																								BgL__ortest_1825z00_1415;
																						}
																					else
																						{	/* Llib/socket.scm 255 */
																							BgL_testz00_2116 =
																								(BgL_domainz00_812 ==
																								BGl_symbol2310z00zz__socketz00);
																						}
																				}
																				if (BgL_testz00_2116)
																					{	/* Llib/socket.scm 255 */
																						int BgL_auxz00_2120;

																						{	/* Llib/socket.scm 255 */
																							obj_t BgL_auxz00_2121;

																							if (INTEGERP(BgL_timeoutz00_815))
																								{	/* Llib/socket.scm 255 */
																									BgL_auxz00_2121 =
																										BgL_timeoutz00_815;
																								}
																							else
																								{
																									obj_t BgL_auxz00_2124;

																									BgL_auxz00_2124 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2285z00zz__socketz00,
																										BINT(((long) 10813)),
																										BGl_string2303z00zz__socketz00,
																										BGl_string2305z00zz__socketz00,
																										BgL_timeoutz00_815);
																									FAILURE(BgL_auxz00_2124,
																										BFALSE, BFALSE);
																								}
																							BgL_auxz00_2120 =
																								CINT(BgL_auxz00_2121);
																						}
																						BgL_res2224z00_1418 =
																							bgl_make_unix_socket
																							(BgL_hostz00_1404,
																							BgL_auxz00_2120,
																							BgL_inbufz00_1410,
																							BgL_outbufz00_1411);
																					}
																				else
																					{	/* Llib/socket.scm 255 */
																						obj_t BgL_aux2257z00_1854;

																						BgL_aux2257z00_1854 =
																							BGl_errorz00zz__errorz00
																							(BGl_symbol2306z00zz__socketz00,
																							BGl_string2312z00zz__socketz00,
																							BgL_domainz00_812);
																						if (SOCKETP(BgL_aux2257z00_1854))
																							{	/* Llib/socket.scm 255 */
																								BgL_res2224z00_1418 =
																									BgL_aux2257z00_1854;
																							}
																						else
																							{
																								obj_t BgL_auxz00_2133;

																								BgL_auxz00_2133 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2285z00zz__socketz00,
																									BINT(((long) 10813)),
																									BGl_string2303z00zz__socketz00,
																									BGl_string2283z00zz__socketz00,
																									BgL_aux2257z00_1854);
																								FAILURE(BgL_auxz00_2133, BFALSE,
																									BFALSE);
																}}}}}
																return BgL_res2224z00_1418;
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



/* make-client-socket */
	BGL_EXPORTED_DEF obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t
		BgL_hostz00_11, int BgL_portz00_12, obj_t BgL_domainz00_13,
		obj_t BgL_inbufz00_14, obj_t BgL_outbufz00_15, obj_t BgL_timeoutz00_16)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 255 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			{	/* Llib/socket.scm 257 */
				obj_t BgL_inbufz00_1441;

				obj_t BgL_outbufz00_1442;

				BgL_inbufz00_1441 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_symbol2306z00zz__socketz00, BgL_inbufz00_14,
					(int) (((long) 512)));
				BgL_outbufz00_1442 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_symbol2306z00zz__socketz00, BgL_outbufz00_15,
					(int) (((long) 1024)));
				if ((BgL_domainz00_13 == BGl_symbol2293z00zz__socketz00))
					{	/* Llib/socket.scm 257 */
						return
							bgl_make_client_socket(BgL_hostz00_11, BgL_portz00_12,
							CINT(BgL_timeoutz00_16), BgL_inbufz00_1441, BgL_outbufz00_1442);
					}
				else
					{	/* Llib/socket.scm 257 */
						bool_t BgL_testz00_2146;

						{	/* Llib/socket.scm 257 */
							bool_t BgL__ortest_1825z00_1446;

							BgL__ortest_1825z00_1446 =
								(BgL_domainz00_13 == BGl_symbol2308z00zz__socketz00);
							if (BgL__ortest_1825z00_1446)
								{	/* Llib/socket.scm 257 */
									BgL_testz00_2146 = BgL__ortest_1825z00_1446;
								}
							else
								{	/* Llib/socket.scm 257 */
									BgL_testz00_2146 =
										(BgL_domainz00_13 == BGl_symbol2310z00zz__socketz00);
								}
						}
						if (BgL_testz00_2146)
							{	/* Llib/socket.scm 257 */
								return
									bgl_make_unix_socket(BgL_hostz00_11,
									CINT(BgL_timeoutz00_16), BgL_inbufz00_1441,
									BgL_outbufz00_1442);
							}
						else
							{	/* Llib/socket.scm 257 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2306z00zz__socketz00,
									BGl_string2312z00zz__socketz00, BgL_domainz00_13);
							}
					}
			}
		}
	}



/* make-server-socket */
	BGL_EXPORTED_DEF obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t
		BgL_portz00_19)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 272 */
			{	/* Llib/socket.scm 272 */
				obj_t BgL_dsssl1877z00_826;

				BgL_dsssl1877z00_826 = BgL_portz00_19;
				{	/* Llib/socket.scm 272 */
					obj_t BgL_portz00_827;

					{	/* Llib/socket.scm 272 */
						bool_t BgL_testz00_2153;

						if (NULLP(BgL_dsssl1877z00_826))
							{	/* Llib/socket.scm 272 */
								BgL_testz00_2153 = ((bool_t) 1);
							}
						else
							{	/* Llib/socket.scm 272 */
								BgL_testz00_2153 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_dsssl1877z00_826), BGl_list2313z00zz__socketz00));
							}
						if (BgL_testz00_2153)
							{	/* Llib/socket.scm 272 */
								BgL_portz00_827 = BINT(((long) 0));
							}
						else
							{	/* Llib/socket.scm 272 */
								obj_t BgL_tmp1878z00_831;

								BgL_tmp1878z00_831 = CAR(BgL_dsssl1877z00_826);
								BgL_dsssl1877z00_826 = CDR(BgL_dsssl1877z00_826);
								BgL_portz00_827 = BgL_tmp1878z00_831;
							}
					}
					BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(BgL_dsssl1877z00_826,
						BGl_list2318z00zz__socketz00);
					{	/* Llib/socket.scm 272 */
						obj_t BgL_namez00_828;

						BgL_namez00_828 =
							BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1877z00_826,
							BGl_keyword2316z00zz__socketz00, BFALSE);
						{	/* Llib/socket.scm 274 */
							obj_t BgL_backlogz00_829;

							BgL_backlogz00_829 =
								BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1877z00_826,
								BGl_keyword2314z00zz__socketz00, BINT(((long) 5)));
							BGl_z52socketzd2initz12z92zz__socketz00();
							return
								bgl_make_server_socket(BgL_namez00_828,
								CINT(BgL_portz00_827), CINT(BgL_backlogz00_829));
						}
					}
				}
			}
		}
	}



/* _make-server-socket */
	obj_t BGl__makezd2serverzd2socketz00zz__socketz00(obj_t BgL_envz00_1813,
		obj_t BgL_portz00_1814)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 272 */
			return BGl_makezd2serverzd2socketz00zz__socketz00(BgL_portz00_1814);
		}
	}



/* _socket-accept */
	obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t BgL_envz00_25,
		obj_t BgL_opt1879z00_24)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 279 */
			{	/* Llib/socket.scm 279 */
				int BgL_l1880z00_835;

				BgL_l1880z00_835 = VECTOR_LENGTH(BgL_opt1879z00_24);
				{	/* Llib/socket.scm 279 */
					obj_t BgL_g1887z00_839;

					BgL_g1887z00_839 = VECTOR_REF(BgL_opt1879z00_24, (int) (((long) 0)));
					{	/* Llib/socket.scm 279 */
						obj_t BgL_errpz00_840;

						BgL_errpz00_840 = BTRUE;
						{	/* Llib/socket.scm 279 */
							obj_t BgL_inbufz00_841;

							BgL_inbufz00_841 = BTRUE;
							{	/* Llib/socket.scm 279 */
								obj_t BgL_outbufz00_842;

								BgL_outbufz00_842 = BTRUE;
								{	/* Llib/socket.scm 279 */

									{	/* Llib/socket.scm 279 */
										long BgL_index1884z00_843;

										{
											long BgL_iz00_1455;

											BgL_iz00_1455 = ((long) 1);
										BgL_search1881z00_1454:
											if ((BgL_iz00_1455 == (long) (BgL_l1880z00_835)))
												{	/* Llib/socket.scm 279 */
													BgL_index1884z00_843 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 279 */
													obj_t BgL_vz00_1457;

													BgL_vz00_1457 =
														VECTOR_REF(BgL_opt1879z00_24,
														(int) (BgL_iz00_1455));
													if (
														(BgL_vz00_1457 == BGl_keyword2319z00zz__socketz00))
														{	/* Llib/socket.scm 279 */
															BgL_index1884z00_843 =
																(BgL_iz00_1455 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2182;

															BgL_iz00_2182 = (BgL_iz00_1455 + ((long) 2));
															BgL_iz00_1455 = BgL_iz00_2182;
															goto BgL_search1881z00_1454;
														}
												}
										}
										if ((BgL_index1884z00_843 >= ((long) 0)))
											{	/* Llib/socket.scm 279 */
												BgL_errpz00_840 =
													VECTOR_REF(BgL_opt1879z00_24,
													(int) (BgL_index1884z00_843));
											}
										else
											{	/* Llib/socket.scm 279 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 279 */
										long BgL_index1885z00_845;

										{
											long BgL_iz00_1469;

											BgL_iz00_1469 = ((long) 1);
										BgL_search1881z00_1468:
											if ((BgL_iz00_1469 == (long) (BgL_l1880z00_835)))
												{	/* Llib/socket.scm 279 */
													BgL_index1885z00_845 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 279 */
													obj_t BgL_vz00_1471;

													BgL_vz00_1471 =
														VECTOR_REF(BgL_opt1879z00_24,
														(int) (BgL_iz00_1469));
													if (
														(BgL_vz00_1471 == BGl_keyword2297z00zz__socketz00))
														{	/* Llib/socket.scm 279 */
															BgL_index1885z00_845 =
																(BgL_iz00_1469 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2196;

															BgL_iz00_2196 = (BgL_iz00_1469 + ((long) 2));
															BgL_iz00_1469 = BgL_iz00_2196;
															goto BgL_search1881z00_1468;
														}
												}
										}
										if ((BgL_index1885z00_845 >= ((long) 0)))
											{	/* Llib/socket.scm 279 */
												BgL_inbufz00_841 =
													VECTOR_REF(BgL_opt1879z00_24,
													(int) (BgL_index1885z00_845));
											}
										else
											{	/* Llib/socket.scm 279 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 279 */
										long BgL_index1886z00_847;

										{
											long BgL_iz00_1483;

											BgL_iz00_1483 = ((long) 1);
										BgL_search1881z00_1482:
											if ((BgL_iz00_1483 == (long) (BgL_l1880z00_835)))
												{	/* Llib/socket.scm 279 */
													BgL_index1886z00_847 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 279 */
													obj_t BgL_vz00_1485;

													BgL_vz00_1485 =
														VECTOR_REF(BgL_opt1879z00_24,
														(int) (BgL_iz00_1483));
													if (
														(BgL_vz00_1485 == BGl_keyword2299z00zz__socketz00))
														{	/* Llib/socket.scm 279 */
															BgL_index1886z00_847 =
																(BgL_iz00_1483 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2210;

															BgL_iz00_2210 = (BgL_iz00_1483 + ((long) 2));
															BgL_iz00_1483 = BgL_iz00_2210;
															goto BgL_search1881z00_1482;
														}
												}
										}
										if ((BgL_index1886z00_847 >= ((long) 0)))
											{	/* Llib/socket.scm 279 */
												BgL_outbufz00_842 =
													VECTOR_REF(BgL_opt1879z00_24,
													(int) (BgL_index1886z00_847));
											}
										else
											{	/* Llib/socket.scm 279 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 279 */
										obj_t BgL_arg1950z00_849;

										BgL_arg1950z00_849 =
											VECTOR_REF(BgL_opt1879z00_24, (int) (((long) 0)));
										{	/* Llib/socket.scm 279 */
											obj_t BgL_errpz00_850;

											BgL_errpz00_850 = BgL_errpz00_840;
											{	/* Llib/socket.scm 279 */
												obj_t BgL_inbufz00_851;

												BgL_inbufz00_851 = BgL_inbufz00_841;
												{	/* Llib/socket.scm 279 */
													obj_t BgL_outbufz00_852;

													BgL_outbufz00_852 = BgL_outbufz00_842;
													{	/* Llib/socket.scm 279 */
														obj_t BgL_socketz00_1496;

														if (SOCKETP(BgL_arg1950z00_849))
															{	/* Llib/socket.scm 279 */
																BgL_socketz00_1496 = BgL_arg1950z00_849;
															}
														else
															{
																obj_t BgL_auxz00_2220;

																BgL_auxz00_2220 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2285z00zz__socketz00,
																	BINT(((long) 11982)),
																	BGl_string2321z00zz__socketz00,
																	BGl_string2283z00zz__socketz00,
																	BgL_arg1950z00_849);
																FAILURE(BgL_auxz00_2220, BFALSE, BFALSE);
															}
														return
															bgl_socket_accept(BgL_socketz00_1496,
															CBOOL(BgL_errpz00_850),
															BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
															(BGl_symbol2322z00zz__socketz00, BgL_inbufz00_851,
																(int) (((long) 512))),
															BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
															(BGl_symbol2322z00zz__socketz00,
																BgL_outbufz00_852, (int) (((long) 1024))));
		}}}}}}}}}}}}
	}



/* socket-accept */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t
		BgL_socketz00_20, obj_t BgL_errpz00_21, obj_t BgL_inbufz00_22,
		obj_t BgL_outbufz00_23)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 279 */
			return
				bgl_socket_accept(BgL_socketz00_20,
				CBOOL(BgL_errpz00_21),
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol2322z00zz__socketz00, BgL_inbufz00_22, (int) (((long) 512))),
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol2322z00zz__socketz00, BgL_outbufz00_23,
					(int) (((long) 1024))));
		}
	}



/* _socket-accept-many */
	obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_envz00_32,
		obj_t BgL_opt1888z00_31)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 290 */
			{	/* Llib/socket.scm 290 */
				int BgL_l1889z00_859;

				BgL_l1889z00_859 = VECTOR_LENGTH(BgL_opt1888z00_31);
				{	/* Llib/socket.scm 290 */
					obj_t BgL_g1896z00_863;

					obj_t BgL_g1897z00_864;

					BgL_g1896z00_863 = VECTOR_REF(BgL_opt1888z00_31, (int) (((long) 0)));
					BgL_g1897z00_864 = VECTOR_REF(BgL_opt1888z00_31, (int) (((long) 1)));
					{	/* Llib/socket.scm 290 */
						obj_t BgL_errpz00_865;

						BgL_errpz00_865 = BTRUE;
						{	/* Llib/socket.scm 290 */
							obj_t BgL_inbufsz00_866;

							BgL_inbufsz00_866 = BTRUE;
							{	/* Llib/socket.scm 290 */
								obj_t BgL_outbufsz00_867;

								BgL_outbufsz00_867 = BTRUE;
								{	/* Llib/socket.scm 290 */

									{	/* Llib/socket.scm 290 */
										long BgL_index1893z00_868;

										{
											long BgL_iz00_1528;

											BgL_iz00_1528 = ((long) 2);
										BgL_search1890z00_1527:
											if ((BgL_iz00_1528 == (long) (BgL_l1889z00_859)))
												{	/* Llib/socket.scm 290 */
													BgL_index1893z00_868 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 290 */
													obj_t BgL_vz00_1530;

													BgL_vz00_1530 =
														VECTOR_REF(BgL_opt1888z00_31,
														(int) (BgL_iz00_1528));
													if (
														(BgL_vz00_1530 == BGl_keyword2319z00zz__socketz00))
														{	/* Llib/socket.scm 290 */
															BgL_index1893z00_868 =
																(BgL_iz00_1528 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2249;

															BgL_iz00_2249 = (BgL_iz00_1528 + ((long) 2));
															BgL_iz00_1528 = BgL_iz00_2249;
															goto BgL_search1890z00_1527;
														}
												}
										}
										if ((BgL_index1893z00_868 >= ((long) 0)))
											{	/* Llib/socket.scm 290 */
												BgL_errpz00_865 =
													VECTOR_REF(BgL_opt1888z00_31,
													(int) (BgL_index1893z00_868));
											}
										else
											{	/* Llib/socket.scm 290 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 290 */
										long BgL_index1894z00_870;

										{
											long BgL_iz00_1542;

											BgL_iz00_1542 = ((long) 2);
										BgL_search1890z00_1541:
											if ((BgL_iz00_1542 == (long) (BgL_l1889z00_859)))
												{	/* Llib/socket.scm 290 */
													BgL_index1894z00_870 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 290 */
													obj_t BgL_vz00_1544;

													BgL_vz00_1544 =
														VECTOR_REF(BgL_opt1888z00_31,
														(int) (BgL_iz00_1542));
													if (
														(BgL_vz00_1544 == BGl_keyword2324z00zz__socketz00))
														{	/* Llib/socket.scm 290 */
															BgL_index1894z00_870 =
																(BgL_iz00_1542 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2263;

															BgL_iz00_2263 = (BgL_iz00_1542 + ((long) 2));
															BgL_iz00_1542 = BgL_iz00_2263;
															goto BgL_search1890z00_1541;
														}
												}
										}
										if ((BgL_index1894z00_870 >= ((long) 0)))
											{	/* Llib/socket.scm 290 */
												BgL_inbufsz00_866 =
													VECTOR_REF(BgL_opt1888z00_31,
													(int) (BgL_index1894z00_870));
											}
										else
											{	/* Llib/socket.scm 290 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 290 */
										long BgL_index1895z00_872;

										{
											long BgL_iz00_1556;

											BgL_iz00_1556 = ((long) 2);
										BgL_search1890z00_1555:
											if ((BgL_iz00_1556 == (long) (BgL_l1889z00_859)))
												{	/* Llib/socket.scm 290 */
													BgL_index1895z00_872 = ((long) -1);
												}
											else
												{	/* Llib/socket.scm 290 */
													obj_t BgL_vz00_1558;

													BgL_vz00_1558 =
														VECTOR_REF(BgL_opt1888z00_31,
														(int) (BgL_iz00_1556));
													if (
														(BgL_vz00_1558 == BGl_keyword2326z00zz__socketz00))
														{	/* Llib/socket.scm 290 */
															BgL_index1895z00_872 =
																(BgL_iz00_1556 + ((long) 1));
														}
													else
														{
															long BgL_iz00_2277;

															BgL_iz00_2277 = (BgL_iz00_1556 + ((long) 2));
															BgL_iz00_1556 = BgL_iz00_2277;
															goto BgL_search1890z00_1555;
														}
												}
										}
										if ((BgL_index1895z00_872 >= ((long) 0)))
											{	/* Llib/socket.scm 290 */
												BgL_outbufsz00_867 =
													VECTOR_REF(BgL_opt1888z00_31,
													(int) (BgL_index1895z00_872));
											}
										else
											{	/* Llib/socket.scm 290 */
												BFALSE;
											}
									}
									{	/* Llib/socket.scm 290 */
										obj_t BgL_arg1957z00_874;

										obj_t BgL_arg1958z00_875;

										BgL_arg1957z00_874 =
											VECTOR_REF(BgL_opt1888z00_31, (int) (((long) 0)));
										BgL_arg1958z00_875 =
											VECTOR_REF(BgL_opt1888z00_31, (int) (((long) 1)));
										{	/* Llib/socket.scm 290 */
											obj_t BgL_errpz00_876;

											BgL_errpz00_876 = BgL_errpz00_865;
											{	/* Llib/socket.scm 290 */
												obj_t BgL_inbufsz00_877;

												BgL_inbufsz00_877 = BgL_inbufsz00_866;
												{	/* Llib/socket.scm 290 */
													obj_t BgL_outbufsz00_878;

													BgL_outbufsz00_878 = BgL_outbufsz00_867;
													{	/* Llib/socket.scm 290 */
														obj_t BgL_auxz00_2294;

														obj_t BgL_auxz00_2287;

														if (VECTORP(BgL_arg1958z00_875))
															{	/* Llib/socket.scm 290 */
																BgL_auxz00_2294 = BgL_arg1958z00_875;
															}
														else
															{
																obj_t BgL_auxz00_2297;

																BgL_auxz00_2297 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2285z00zz__socketz00,
																	BINT(((long) 12672)),
																	BGl_string2328z00zz__socketz00,
																	BGl_string2329z00zz__socketz00,
																	BgL_arg1958z00_875);
																FAILURE(BgL_auxz00_2297, BFALSE, BFALSE);
															}
														if (SOCKETP(BgL_arg1957z00_874))
															{	/* Llib/socket.scm 290 */
																BgL_auxz00_2287 = BgL_arg1957z00_874;
															}
														else
															{
																obj_t BgL_auxz00_2290;

																BgL_auxz00_2290 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2285z00zz__socketz00,
																	BINT(((long) 12672)),
																	BGl_string2328z00zz__socketz00,
																	BGl_string2283z00zz__socketz00,
																	BgL_arg1957z00_874);
																FAILURE(BgL_auxz00_2290, BFALSE, BFALSE);
															}
														return
															BGl_socketzd2acceptzd2manyz00zz__socketz00
															(BgL_auxz00_2287, BgL_auxz00_2294,
															BgL_errpz00_876, BgL_inbufsz00_877,
															BgL_outbufsz00_878);
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



/* socket-accept-many */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t
		BgL_socketz00_26, obj_t BgL_resultz00_27, obj_t BgL_errpz00_28,
		obj_t BgL_inbufsz00_29, obj_t BgL_outbufsz00_30)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 290 */
			if (VECTORP(BgL_inbufsz00_29))
				{	/* Llib/socket.scm 291 */
					((bool_t) 0);
				}
			else
				{	/* Llib/socket.scm 291 */
					{	/* Llib/socket.scm 292 */
						int BgL_arg1963z00_884;

						BgL_arg1963z00_884 = VECTOR_LENGTH(BgL_resultz00_27);
						BgL_inbufsz00_29 = make_vector(BgL_arg1963z00_884, BUNSPEC);
					}
					{
						long BgL_iz00_887;

						BgL_iz00_887 = ((long) 0);
					BgL_zc3anonymousza31966ze3z83_888:
						{	/* Llib/socket.scm 294 */
							bool_t BgL_testz00_2306;

							{	/* Llib/socket.scm 294 */
								int BgL_arg1969z00_892;

								BgL_arg1969z00_892 = VECTOR_LENGTH(BgL_resultz00_27);
								BgL_testz00_2306 = (BgL_iz00_887 < (long) (BgL_arg1969z00_892));
							}
							if (BgL_testz00_2306)
								{	/* Llib/socket.scm 295 */
									obj_t BgL_bufz00_890;

									BgL_bufz00_890 =
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_symbol2330z00zz__socketz00, BTRUE,
										(int) (((long) 512)));
									VECTOR_SET(BgL_inbufsz00_29, (int) (BgL_iz00_887),
										BgL_bufz00_890);
									{
										long BgL_iz00_2314;

										BgL_iz00_2314 = (BgL_iz00_887 + ((long) 1));
										BgL_iz00_887 = BgL_iz00_2314;
										goto BgL_zc3anonymousza31966ze3z83_888;
									}
								}
							else
								{	/* Llib/socket.scm 294 */
									((bool_t) 0);
								}
						}
					}
				}
			if (VECTORP(BgL_outbufsz00_30))
				{	/* Llib/socket.scm 298 */
					((bool_t) 0);
				}
			else
				{	/* Llib/socket.scm 298 */
					{	/* Llib/socket.scm 299 */
						int BgL_arg1971z00_895;

						BgL_arg1971z00_895 = VECTOR_LENGTH(BgL_resultz00_27);
						BgL_outbufsz00_30 = make_vector(BgL_arg1971z00_895, BUNSPEC);
					}
					{
						long BgL_iz00_898;

						BgL_iz00_898 = ((long) 0);
					BgL_zc3anonymousza31973ze3z83_899:
						{	/* Llib/socket.scm 301 */
							bool_t BgL_testz00_2320;

							{	/* Llib/socket.scm 301 */
								int BgL_arg1976z00_903;

								BgL_arg1976z00_903 = VECTOR_LENGTH(BgL_resultz00_27);
								BgL_testz00_2320 = (BgL_iz00_898 < (long) (BgL_arg1976z00_903));
							}
							if (BgL_testz00_2320)
								{	/* Llib/socket.scm 302 */
									obj_t BgL_bufz00_901;

									BgL_bufz00_901 =
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_symbol2330z00zz__socketz00, BTRUE,
										(int) (((long) 512)));
									VECTOR_SET(BgL_outbufsz00_30, (int) (BgL_iz00_898),
										BgL_bufz00_901);
									{
										long BgL_iz00_2328;

										BgL_iz00_2328 = (BgL_iz00_898 + ((long) 1));
										BgL_iz00_898 = BgL_iz00_2328;
										goto BgL_zc3anonymousza31973ze3z83_899;
									}
								}
							else
								{	/* Llib/socket.scm 301 */
									((bool_t) 0);
								}
						}
					}
				}
			return
				BINT(bgl_socket_accept_many(BgL_socketz00_26,
					CBOOL(BgL_errpz00_28), BgL_inbufsz00_29, BgL_outbufsz00_30,
					BgL_resultz00_27));
		}
	}



/* _socket-shutdown */
	obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t BgL_envz00_36,
		obj_t BgL_optz00_35)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 318 */
			{	/* Llib/socket.scm 318 */
				obj_t BgL_g1898z00_1892;

				BgL_g1898z00_1892 = VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
				{	/* Llib/socket.scm 318 */
					int BgL_aux1900z00_1893;

					BgL_aux1900z00_1893 = VECTOR_LENGTH(BgL_optz00_35);
					switch ((long) (BgL_aux1900z00_1893))
						{
						case ((long) 1):

							{	/* Llib/socket.scm 318 */

								{	/* Llib/socket.scm 318 */
									obj_t BgL_arg1979z00_1894;

									BgL_arg1979z00_1894 =
										VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
									{	/* Llib/socket.scm 318 */
										obj_t BgL_socketz00_1895;

										if (SOCKETP(BgL_arg1979z00_1894))
											{	/* Llib/socket.scm 318 */
												BgL_socketz00_1895 = BgL_arg1979z00_1894;
											}
										else
											{
												obj_t BgL_auxz00_2340;

												BgL_auxz00_2340 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2285z00zz__socketz00, BINT(((long) 13804)),
													BGl_string2332z00zz__socketz00,
													BGl_string2283z00zz__socketz00, BgL_arg1979z00_1894);
												FAILURE(BgL_auxz00_2340, BFALSE, BFALSE);
											}
										return socket_shutdown(BgL_socketz00_1895, CBOOL(BTRUE));
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/socket.scm 318 */
								obj_t BgL_closez00_1897;

								BgL_closez00_1897 =
									VECTOR_REF(BgL_optz00_35, (int) (((long) 1)));
								{	/* Llib/socket.scm 318 */

									{	/* Llib/socket.scm 318 */
										obj_t BgL_arg1980z00_1898;

										BgL_arg1980z00_1898 =
											VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
										{	/* Llib/socket.scm 318 */
											obj_t BgL_socketz00_1899;

											if (SOCKETP(BgL_arg1980z00_1898))
												{	/* Llib/socket.scm 318 */
													BgL_socketz00_1899 = BgL_arg1980z00_1898;
												}
											else
												{
													obj_t BgL_auxz00_2352;

													BgL_auxz00_2352 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2285z00zz__socketz00,
														BINT(((long) 13804)),
														BGl_string2332z00zz__socketz00,
														BGl_string2283z00zz__socketz00,
														BgL_arg1980z00_1898);
													FAILURE(BgL_auxz00_2352, BFALSE, BFALSE);
												}
											return
												socket_shutdown(BgL_socketz00_1899,
												CBOOL(BgL_closez00_1897));
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



/* socket-shutdown */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2shutdownzd2zz__socketz00(obj_t
		BgL_socketz00_33, obj_t BgL_closez00_34)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 318 */
			return socket_shutdown(BgL_socketz00_33, CBOOL(BgL_closez00_34));
		}
	}



/* socket-close */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2closezd2zz__socketz00(obj_t
		BgL_socketz00_37)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 324 */
			return socket_close(BgL_socketz00_37);
		}
	}



/* _socket-close */
	obj_t BGl__socketzd2closezd2zz__socketz00(obj_t BgL_envz00_1815,
		obj_t BgL_socketz00_1816)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 324 */
			{	/* Llib/socket.scm 325 */
				obj_t BgL_socketz00_1900;

				if (SOCKETP(BgL_socketz00_1816))
					{	/* Llib/socket.scm 325 */
						BgL_socketz00_1900 = BgL_socketz00_1816;
					}
				else
					{
						obj_t BgL_auxz00_2365;

						BgL_auxz00_2365 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 14182)), BGl_string2333z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1816);
						FAILURE(BgL_auxz00_2365, BFALSE, BFALSE);
					}
				return socket_close(BgL_socketz00_1900);
			}
		}
	}



/* host */
	BGL_EXPORTED_DEF obj_t BGl_hostz00zz__socketz00(obj_t BgL_hostnamez00_38)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 330 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_host(BgL_hostnamez00_38);
		}
	}



/* _host */
	obj_t BGl__hostz00zz__socketz00(obj_t BgL_envz00_1817,
		obj_t BgL_hostnamez00_1818)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 330 */
			{	/* Llib/socket.scm 333 */
				obj_t BgL_res2340z00_1902;

				{	/* Llib/socket.scm 333 */
					obj_t BgL_hostnamez00_1901;

					if (STRINGP(BgL_hostnamez00_1818))
						{	/* Llib/socket.scm 333 */
							BgL_hostnamez00_1901 = BgL_hostnamez00_1818;
						}
					else
						{
							obj_t BgL_auxz00_2374;

							BgL_auxz00_2374 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
								BINT(((long) 14515)), BGl_string2334z00zz__socketz00,
								BGl_string2304z00zz__socketz00, BgL_hostnamez00_1818);
							FAILURE(BgL_auxz00_2374, BFALSE, BFALSE);
						}
					BGl_z52socketzd2initz12z92zz__socketz00();
					BgL_res2340z00_1902 = bgl_host(BgL_hostnamez00_1901);
				}
				return BgL_res2340z00_1902;
			}
		}
	}



/* hostinfo */
	BGL_EXPORTED_DEF obj_t BGl_hostinfoz00zz__socketz00(obj_t BgL_hostnamez00_39)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 338 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_hostinfo(BgL_hostnamez00_39);
		}
	}



/* _hostinfo */
	obj_t BGl__hostinfoz00zz__socketz00(obj_t BgL_envz00_1819,
		obj_t BgL_hostnamez00_1820)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 338 */
			{	/* Llib/socket.scm 341 */
				obj_t BgL_res2341z00_1904;

				{	/* Llib/socket.scm 341 */
					obj_t BgL_hostnamez00_1903;

					if (STRINGP(BgL_hostnamez00_1820))
						{	/* Llib/socket.scm 341 */
							BgL_hostnamez00_1903 = BgL_hostnamez00_1820;
						}
					else
						{
							obj_t BgL_auxz00_2384;

							BgL_auxz00_2384 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
								BINT(((long) 14834)), BGl_string2335z00zz__socketz00,
								BGl_string2304z00zz__socketz00, BgL_hostnamez00_1820);
							FAILURE(BgL_auxz00_2384, BFALSE, BFALSE);
						}
					BGl_z52socketzd2initz12z92zz__socketz00();
					BgL_res2341z00_1904 = bgl_hostinfo(BgL_hostnamez00_1903);
				}
				return BgL_res2341z00_1904;
			}
		}
	}



/* hostname */
	BGL_EXPORTED_DEF obj_t BGl_hostnamez00zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 346 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_gethostname();
		}
	}



/* _hostname */
	obj_t BGl__hostnamez00zz__socketz00(obj_t BgL_envz00_1821)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 346 */
			{	/* Llib/socket.scm 349 */
				obj_t BgL_res2342z00_1905;

				BGl_z52socketzd2initz12z92zz__socketz00();
				BgL_res2342z00_1905 = bgl_gethostname();
				return BgL_res2342z00_1905;
			}
		}
	}



/* get-protocols */
	BGL_EXPORTED_DEF obj_t BGl_getzd2protocolszd2zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 354 */
			return bgl_getprotoents();
		}
	}



/* _get-protocols */
	obj_t BGl__getzd2protocolszd2zz__socketz00(obj_t BgL_envz00_1822)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 354 */
			return bgl_getprotoents();
		}
	}



/* get-protocol */
	BGL_EXPORTED_DEF obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t
		BgL_protocolz00_40)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 360 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_protocolz00_40))
				{	/* Llib/socket.scm 362 */
					return bgl_getprotobynumber((long) CINT(BgL_protocolz00_40));
				}
			else
				{	/* Llib/socket.scm 362 */
					if (STRINGP(BgL_protocolz00_40))
						{	/* Llib/socket.scm 362 */
							return bgl_getprotobyname(BSTRING_TO_STRING(BgL_protocolz00_40));
						}
					else
						{	/* Llib/socket.scm 362 */
							return BFALSE;
						}
				}
		}
	}



/* _get-protocol */
	obj_t BGl__getzd2protocolzd2zz__socketz00(obj_t BgL_envz00_1823,
		obj_t BgL_protocolz00_1824)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 360 */
			return BGl_getzd2protocolzd2zz__socketz00(BgL_protocolz00_1824);
		}
	}



/* socket-option */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t
		BgL_socketz00_41, obj_t BgL_optionz00_42)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 372 */
			return bgl_getsockopt(BgL_socketz00_41, BgL_optionz00_42);
		}
	}



/* _socket-option */
	obj_t BGl__socketzd2optionzd2zz__socketz00(obj_t BgL_envz00_1825,
		obj_t BgL_socketz00_1826, obj_t BgL_optionz00_1827)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 372 */
			{	/* Llib/socket.scm 373 */
				obj_t BgL_socketz00_1906;

				obj_t BgL_optionz00_1907;

				if (SOCKETP(BgL_socketz00_1826))
					{	/* Llib/socket.scm 373 */
						BgL_socketz00_1906 = BgL_socketz00_1826;
					}
				else
					{
						obj_t BgL_auxz00_2408;

						BgL_auxz00_2408 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 16101)), BGl_string2336z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1826);
						FAILURE(BgL_auxz00_2408, BFALSE, BFALSE);
					}
				if (KEYWORDP(BgL_optionz00_1827))
					{	/* Llib/socket.scm 373 */
						BgL_optionz00_1907 = BgL_optionz00_1827;
					}
				else
					{
						obj_t BgL_auxz00_2414;

						BgL_auxz00_2414 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 16101)), BGl_string2336z00zz__socketz00,
							BGl_string2337z00zz__socketz00, BgL_optionz00_1827);
						FAILURE(BgL_auxz00_2414, BFALSE, BFALSE);
					}
				return bgl_getsockopt(BgL_socketz00_1906, BgL_optionz00_1907);
			}
		}
	}



/* socket-option-set! */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t
		BgL_socketz00_43, obj_t BgL_optionz00_44, obj_t BgL_valz00_45)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 378 */
			return bgl_setsockopt(BgL_socketz00_43, BgL_optionz00_44, BgL_valz00_45);
		}
	}



/* _socket-option-set! */
	obj_t BGl__socketzd2optionzd2setz12z12zz__socketz00(obj_t BgL_envz00_1828,
		obj_t BgL_socketz00_1829, obj_t BgL_optionz00_1830, obj_t BgL_valz00_1831)
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 378 */
			{	/* Llib/socket.scm 379 */
				obj_t BgL_socketz00_1908;

				obj_t BgL_optionz00_1909;

				if (SOCKETP(BgL_socketz00_1829))
					{	/* Llib/socket.scm 379 */
						BgL_socketz00_1908 = BgL_socketz00_1829;
					}
				else
					{
						obj_t BgL_auxz00_2422;

						BgL_auxz00_2422 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 16410)), BGl_string2338z00zz__socketz00,
							BGl_string2283z00zz__socketz00, BgL_socketz00_1829);
						FAILURE(BgL_auxz00_2422, BFALSE, BFALSE);
					}
				if (KEYWORDP(BgL_optionz00_1830))
					{	/* Llib/socket.scm 379 */
						BgL_optionz00_1909 = BgL_optionz00_1830;
					}
				else
					{
						obj_t BgL_auxz00_2428;

						BgL_auxz00_2428 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2285z00zz__socketz00,
							BINT(((long) 16410)), BGl_string2338z00zz__socketz00,
							BGl_string2337z00zz__socketz00, BgL_optionz00_1830);
						FAILURE(BgL_auxz00_2428, BFALSE, BFALSE);
					}
				return
					bgl_setsockopt(BgL_socketz00_1908, BgL_optionz00_1909,
					BgL_valz00_1831);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__socketz00()
	{
		AN_OBJECT;
		{	/* Llib/socket.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2339z00zz__socketz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2339z00zz__socketz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2339z00zz__socketz00));
		}
	}

#ifdef __cplusplus
}
#endif
