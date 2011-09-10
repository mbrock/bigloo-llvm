/*===========================================================================*/
/*   (Rgc/rgcconfig.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcconfig.scm -indent -o objs/obj_u/Rgc/rgcconfig.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__rgczd2upcasezd2zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_configz00();
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl__rgczd2charzf3z21zz__rgc_configz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2envzd2zz__rgc_configz00();
	static obj_t BGl__rgczd2downcasezd2zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_configz00();
	static obj_t BGl_zc3anonymousza31901ze3z83zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31902ze3z83zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31904ze3z83zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_configz00();
	static obj_t BGl_zc3anonymousza31907ze3z83zz__rgc_configz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t);
	static obj_t BGl_symbol2183z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2186z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2189z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_za2rgczd2configza2zd2zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2192z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2203z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2206z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2197z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2209z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2216z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2219z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2225z00zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t);
	static obj_t BGl_symbol2232z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2237z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2242z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol2248z00zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2rgczd2optimza2zd2zz__rgc_configz00 = BUNSPEC;
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_configz00();
	static obj_t BGl_za2asciizd2configza2zd2zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rgczd2charzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl__rgczd2envzd2zz__rgc_configz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl__rgczd2maxzd2charz00zz__rgc_configz00(obj_t);
	static obj_t BGl__rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_list2181z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2182z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2185z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2188z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2200z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2191z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2202z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2194z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2205z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2196z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2208z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2199z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2212z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2213z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2215z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2218z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__rgc_configz00();
	static obj_t BGl_list2221z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2222z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2224z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2227z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2228z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2229z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2231z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2234z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2236z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2239z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list2241z00zz__rgc_configz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2envzd2envz00zz__rgc_configz00,
		BgL_bgl__rgcza7d2envza7d2za7za7_2252z00, BGl__rgczd2envzd2zz__rgc_configz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2maxzd2charzd2envzd2zz__rgc_configz00,
		BgL_bgl__rgcza7d2maxza7d2cha2253z00,
		BGl__rgczd2maxzd2charz00zz__rgc_configz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2charzf3zd2envzf3zz__rgc_configz00,
		BgL_bgl__rgcza7d2charza7f3za722254za7,
		BGl__rgczd2charzf3z21zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2upcasezd2envz00zz__rgc_configz00,
		BgL_bgl__rgcza7d2upcaseza7d22255z00, BGl__rgczd2upcasezd2zz__rgc_configz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2alphabeticzf3zd2envzf3zz__rgc_configz00,
		BgL_bgl__rgcza7d2alphabeti2256za7,
		BGl__rgczd2alphabeticzf3z21zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zz__rgc_configz00,
		BgL_bgl_za7c3anonymousza7a312257z00,
		BGl_zc3anonymousza31907ze3z83zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zz__rgc_configz00,
		BgL_bgl_za7c3anonymousza7a312258z00,
		BGl_zc3anonymousza31904ze3z83zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zz__rgc_configz00,
		BgL_bgl_za7c3anonymousza7a312259z00,
		BGl_zc3anonymousza31902ze3z83zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zz__rgc_configz00,
		BgL_bgl_za7c3anonymousza7a312260z00,
		BGl_zc3anonymousza31901ze3z83zz__rgc_configz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2downcasezd2envz00zz__rgc_configz00,
		BgL_bgl__rgcza7d2downcaseza72261z00,
		BGl__rgczd2downcasezd2zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2184z00zz__rgc_configz00,
		BgL_bgl_string2184za700za7za7_2262za7, "all", 3);
	      DEFINE_STRING(BGl_string2187z00zz__rgc_configz00,
		BgL_bgl_string2187za700za7za7_2263za7, "out", 3);
	      DEFINE_STRING(BGl_string2190z00zz__rgc_configz00,
		BgL_bgl_string2190za700za7za7_2264za7, "lower", 5);
	      DEFINE_STRING(BGl_string2201z00zz__rgc_configz00,
		BgL_bgl_string2201za700za7za7_2265za7, "AZ", 2);
	      DEFINE_STRING(BGl_string2193z00zz__rgc_configz00,
		BgL_bgl_string2193za700za7za7_2266za7, "in", 2);
	      DEFINE_STRING(BGl_string2204z00zz__rgc_configz00,
		BgL_bgl_string2204za700za7za7_2267za7, "alpha", 5);
	      DEFINE_STRING(BGl_string2195z00zz__rgc_configz00,
		BgL_bgl_string2195za700za7za7_2268za7, "az", 2);
	      DEFINE_STRING(BGl_string2207z00zz__rgc_configz00,
		BgL_bgl_string2207za700za7za7_2269za7, "or", 2);
	      DEFINE_STRING(BGl_string2198z00zz__rgc_configz00,
		BgL_bgl_string2198za700za7za7_2270za7, "upper", 5);
	      DEFINE_STRING(BGl_string2210z00zz__rgc_configz00,
		BgL_bgl_string2210za700za7za7_2271za7, "digit", 5);
	      DEFINE_STRING(BGl_string2214z00zz__rgc_configz00,
		BgL_bgl_string2214za700za7za7_2272za7, "09", 2);
	      DEFINE_STRING(BGl_string2217z00zz__rgc_configz00,
		BgL_bgl_string2217za700za7za7_2273za7, "xdigit", 6);
	      DEFINE_STRING(BGl_string2220z00zz__rgc_configz00,
		BgL_bgl_string2220za700za7za7_2274za7, "uncase", 6);
	      DEFINE_STRING(BGl_string2223z00zz__rgc_configz00,
		BgL_bgl_string2223za700za7za7_2275za7, "af09", 4);
	      DEFINE_STRING(BGl_string2226z00zz__rgc_configz00,
		BgL_bgl_string2226za700za7za7_2276za7, "alnum", 5);
	      DEFINE_STRING(BGl_string2230z00zz__rgc_configz00,
		BgL_bgl_string2230za700za7za7_2277za7, "az09", 4);
	      DEFINE_STRING(BGl_string2233z00zz__rgc_configz00,
		BgL_bgl_string2233za700za7za7_2278za7, "punct", 5);
	      DEFINE_STRING(BGl_string2235z00zz__rgc_configz00,
		BgL_bgl_string2235za700za7za7_2279za7, ".,;!?", 5);
	      DEFINE_STRING(BGl_string2238z00zz__rgc_configz00,
		BgL_bgl_string2238za700za7za7_2280za7, "blank", 5);
	      DEFINE_STRING(BGl_string2240z00zz__rgc_configz00,
		BgL_bgl_string2240za700za7za7_2281za7, " \t\n", 3);
	      DEFINE_STRING(BGl_string2243z00zz__rgc_configz00,
		BgL_bgl_string2243za700za7za7_2282za7, "space", 5);
	      DEFINE_STRING(BGl_string2250z00zz__rgc_configz00,
		BgL_bgl_string2250za700za7za7_2283za7, "ascii", 5);
	      DEFINE_STRING(BGl_string2249z00zz__rgc_configz00,
		BgL_bgl_string2249za700za7za7_2284za7, "rgc-config", 10);
	      DEFINE_STRING(BGl_string2251z00zz__rgc_configz00,
		BgL_bgl_string2251za700za7za7_2285za7, "__rgc_config", 12);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long
		BgL_checksumz00_1622, char *BgL_fromz00_1623)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_configz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_configz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_configz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_configz00();
					BGl_toplevelzd2initzd2zz__rgc_configz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 14 */
			BGl_symbol2183z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2184z00zz__rgc_configz00);
			BGl_symbol2186z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2187z00zz__rgc_configz00);
			BGl_list2185z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2186z00zz__rgc_configz00,
				MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL));
			BGl_list2182z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2183z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2185z00zz__rgc_configz00, BNIL));
			BGl_symbol2189z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2190z00zz__rgc_configz00);
			BGl_symbol2192z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2193z00zz__rgc_configz00);
			BGl_list2194z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_string2195z00zz__rgc_configz00, BNIL);
			BGl_list2191z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2194z00zz__rgc_configz00, BNIL));
			BGl_list2188z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2189z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2191z00zz__rgc_configz00, BNIL));
			BGl_symbol2197z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2198z00zz__rgc_configz00);
			BGl_list2200z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_string2201z00zz__rgc_configz00, BNIL);
			BGl_list2199z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2200z00zz__rgc_configz00, BNIL));
			BGl_list2196z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2197z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2199z00zz__rgc_configz00, BNIL));
			BGl_symbol2203z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2204z00zz__rgc_configz00);
			BGl_symbol2206z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2207z00zz__rgc_configz00);
			BGl_list2205z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2206z00zz__rgc_configz00,
				MAKE_PAIR(BGl_symbol2189z00zz__rgc_configz00,
					MAKE_PAIR(BGl_symbol2197z00zz__rgc_configz00, BNIL)));
			BGl_list2202z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2203z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2205z00zz__rgc_configz00, BNIL));
			BGl_symbol2209z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2210z00zz__rgc_configz00);
			BGl_list2213z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_string2214z00zz__rgc_configz00, BNIL);
			BGl_list2212z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2213z00zz__rgc_configz00, BNIL));
			BGl_list2208z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2209z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2212z00zz__rgc_configz00, BNIL));
			BGl_symbol2216z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2217z00zz__rgc_configz00);
			BGl_symbol2219z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2220z00zz__rgc_configz00);
			BGl_list2222z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_string2223z00zz__rgc_configz00, BNIL);
			BGl_list2221z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2222z00zz__rgc_configz00, BNIL));
			BGl_list2218z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2219z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2221z00zz__rgc_configz00, BNIL));
			BGl_list2215z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2216z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2218z00zz__rgc_configz00, BNIL));
			BGl_symbol2225z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2226z00zz__rgc_configz00);
			BGl_list2229z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_string2230z00zz__rgc_configz00, BNIL);
			BGl_list2228z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2229z00zz__rgc_configz00, BNIL));
			BGl_list2227z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2219z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2228z00zz__rgc_configz00, BNIL));
			BGl_list2224z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2225z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2227z00zz__rgc_configz00, BNIL));
			BGl_symbol2232z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2233z00zz__rgc_configz00);
			BGl_list2234z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_string2235z00zz__rgc_configz00, BNIL));
			BGl_list2231z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2232z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2234z00zz__rgc_configz00, BNIL));
			BGl_symbol2237z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2238z00zz__rgc_configz00);
			BGl_list2239z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2192z00zz__rgc_configz00,
				MAKE_PAIR(BGl_string2240z00zz__rgc_configz00, BNIL));
			BGl_list2236z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2237z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2239z00zz__rgc_configz00, BNIL));
			BGl_symbol2242z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2243z00zz__rgc_configz00);
			BGl_list2241z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_symbol2242z00zz__rgc_configz00,
				MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL));
			BGl_list2181z00zz__rgc_configz00 =
				MAKE_PAIR(BGl_list2182z00zz__rgc_configz00,
				MAKE_PAIR(BGl_list2188z00zz__rgc_configz00,
					MAKE_PAIR(BGl_list2196z00zz__rgc_configz00,
						MAKE_PAIR(BGl_list2202z00zz__rgc_configz00,
							MAKE_PAIR(BGl_list2208z00zz__rgc_configz00,
								MAKE_PAIR(BGl_list2215z00zz__rgc_configz00,
									MAKE_PAIR(BGl_list2224z00zz__rgc_configz00,
										MAKE_PAIR(BGl_list2231z00zz__rgc_configz00,
											MAKE_PAIR(BGl_list2236z00zz__rgc_configz00,
												MAKE_PAIR(BGl_list2241z00zz__rgc_configz00,
													BNIL))))))))));
			return (BGl_symbol2248z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string2249z00zz__rgc_configz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 14 */
			BGl_za2rgczd2optimza2zd2zz__rgc_configz00 = BTRUE;
			{	/* Rgc/rgcconfig.scm 113 */
				obj_t BgL_arg1900z00_806;

				BgL_arg1900z00_806 = BGl_list2181z00zz__rgc_configz00;
				{	/* Rgc/rgcconfig.scm 113 */
					obj_t BgL_newz00_1287;

					BgL_newz00_1287 =
						create_struct(BGl_symbol2248z00zz__rgc_configz00,
						(int) (((long) 7)));
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1707;

						BgL_auxz00_1707 = (int) (((long) 6));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1707, BgL_arg1900z00_806);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1710;

						BgL_auxz00_1710 = (int) (((long) 5));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1710,
							BGl_proc2244z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1713;

						BgL_auxz00_1713 = (int) (((long) 4));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1713,
							BGl_proc2245z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1716;

						BgL_auxz00_1716 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1716,
							BGl_proc2246z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1719;

						BgL_auxz00_1719 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1719,
							BGl_proc2247z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						obj_t BgL_auxz00_1724;

						int BgL_auxz00_1722;

						BgL_auxz00_1724 = BINT(((long) 256));
						BgL_auxz00_1722 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1722, BgL_auxz00_1724);
					}
					{	/* Rgc/rgcconfig.scm 113 */
						int BgL_auxz00_1727;

						BgL_auxz00_1727 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1287, BgL_auxz00_1727,
							BGl_string2250z00zz__rgc_configz00);
					}
					BGl_za2asciizd2configza2zd2zz__rgc_configz00 = BgL_newz00_1287;
			}}
			return (BGl_za2rgczd2configza2zd2zz__rgc_configz00 =
				BGl_za2asciizd2configza2zd2zz__rgc_configz00, BUNSPEC);
		}
	}



/* <anonymous:1901> */
	obj_t BGl_zc3anonymousza31901ze3z83zz__rgc_configz00(obj_t BgL_envz00_1603,
		obj_t BgL_xz00_1604)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 115 */
			{
				obj_t BgL_xz00_807;

				{	/* Rgc/rgcconfig.scm 116 */
					bool_t BgL_auxz00_1730;

					BgL_xz00_807 = BgL_xz00_1604;
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_807, BINT(((long) 0))))
						{	/* Rgc/rgcconfig.scm 116 */
							if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_807,
									BINT(((long) 256))))
								{	/* Rgc/rgcconfig.scm 116 */
									BgL_auxz00_1730 = CHARP(BgL_xz00_807);
								}
							else
								{	/* Rgc/rgcconfig.scm 116 */
									BgL_auxz00_1730 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcconfig.scm 116 */
							BgL_auxz00_1730 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_1730);
				}
			}
		}
	}



/* <anonymous:1902> */
	obj_t BGl_zc3anonymousza31902ze3z83zz__rgc_configz00(obj_t BgL_envz00_1605,
		obj_t BgL_xz00_1606)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 117 */
			{
				obj_t BgL_xz00_811;

				{	/* Rgc/rgcconfig.scm 118 */
					bool_t BgL_auxz00_1739;

					BgL_xz00_811 = BgL_xz00_1606;
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_811, BINT(((long) 0))))
						{	/* Rgc/rgcconfig.scm 118 */
							if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_811,
									BINT(((long) 256))))
								{	/* Rgc/rgcconfig.scm 118 */
									unsigned char BgL_auxz00_1746;

									BgL_auxz00_1746 = ((long) CINT(BgL_xz00_811));
									BgL_auxz00_1739 = isalpha(BgL_auxz00_1746);
								}
							else
								{	/* Rgc/rgcconfig.scm 118 */
									BgL_auxz00_1739 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcconfig.scm 118 */
							BgL_auxz00_1739 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_1739);
				}
			}
		}
	}



/* <anonymous:1904> */
	obj_t BGl_zc3anonymousza31904ze3z83zz__rgc_configz00(obj_t BgL_envz00_1607,
		obj_t BgL_xz00_1608)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 119 */
			{
				obj_t BgL_xz00_816;

				{	/* Rgc/rgcconfig.scm 120 */
					long BgL_auxz00_1751;

					BgL_xz00_816 = BgL_xz00_1608;
					BgL_auxz00_1751 = (toupper(((long) CINT(BgL_xz00_816))));
					return BINT(BgL_auxz00_1751);
				}
			}
		}
	}



/* <anonymous:1907> */
	obj_t BGl_zc3anonymousza31907ze3z83zz__rgc_configz00(obj_t BgL_envz00_1609,
		obj_t BgL_xz00_1610)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 121 */
			{
				obj_t BgL_xz00_820;

				{	/* Rgc/rgcconfig.scm 122 */
					long BgL_auxz00_1757;

					BgL_xz00_820 = BgL_xz00_1610;
					BgL_auxz00_1757 = (tolower(((long) CINT(BgL_xz00_820))));
					return BINT(BgL_auxz00_1757);
				}
			}
		}
	}



/* rgc-max-char */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 74 */
			return
				STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
				(int) (((long) 1)));
		}
	}



/* _rgc-max-char */
	obj_t BGl__rgczd2maxzd2charz00zz__rgc_configz00(obj_t BgL_envz00_1611)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 74 */
			return BGl_rgczd2maxzd2charz00zz__rgc_configz00();
		}
	}



/* rgc-char? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2charzf3z21zz__rgc_configz00(obj_t
		BgL_charz00_31)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 80 */
			{	/* Rgc/rgcconfig.scm 81 */
				obj_t BgL_fun1920z00_1402;

				BgL_fun1920z00_1402 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 2)));
				return
					CBOOL(PROCEDURE_ENTRY(BgL_fun1920z00_1402) (BgL_fun1920z00_1402,
						BgL_charz00_31, BEOA));
			}
		}
	}



/* _rgc-char? */
	obj_t BGl__rgczd2charzf3z21zz__rgc_configz00(obj_t BgL_envz00_1612,
		obj_t BgL_charz00_1613)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 80 */
			return BBOOL(BGl_rgczd2charzf3z21zz__rgc_configz00(BgL_charz00_1613));
		}
	}



/* rgc-alphabetic? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t
		BgL_charz00_32)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 86 */
			{	/* Rgc/rgcconfig.scm 87 */
				obj_t BgL_fun1921z00_1406;

				BgL_fun1921z00_1406 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 3)));
				return
					CBOOL(PROCEDURE_ENTRY(BgL_fun1921z00_1406) (BgL_fun1921z00_1406,
						BgL_charz00_32, BEOA));
			}
		}
	}



/* _rgc-alphabetic? */
	obj_t BGl__rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t BgL_envz00_1614,
		obj_t BgL_charz00_1615)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 86 */
			return
				BBOOL(BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(BgL_charz00_1615));
		}
	}



/* rgc-upcase */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t
		BgL_charz00_33)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 92 */
			{	/* Rgc/rgcconfig.scm 93 */
				obj_t BgL_fun1922z00_1410;

				BgL_fun1922z00_1410 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 4)));
				return
					PROCEDURE_ENTRY(BgL_fun1922z00_1410) (BgL_fun1922z00_1410,
					BgL_charz00_33, BEOA);
			}
		}
	}



/* _rgc-upcase */
	obj_t BGl__rgczd2upcasezd2zz__rgc_configz00(obj_t BgL_envz00_1616,
		obj_t BgL_charz00_1617)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 92 */
			return BGl_rgczd2upcasezd2zz__rgc_configz00(BgL_charz00_1617);
		}
	}



/* rgc-downcase */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t
		BgL_charz00_34)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 98 */
			{	/* Rgc/rgcconfig.scm 99 */
				obj_t BgL_fun1923z00_1414;

				BgL_fun1923z00_1414 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 5)));
				return
					PROCEDURE_ENTRY(BgL_fun1923z00_1414) (BgL_fun1923z00_1414,
					BgL_charz00_34, BEOA);
			}
		}
	}



/* _rgc-downcase */
	obj_t BGl__rgczd2downcasezd2zz__rgc_configz00(obj_t BgL_envz00_1618,
		obj_t BgL_charz00_1619)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 98 */
			return BGl_rgczd2downcasezd2zz__rgc_configz00(BgL_charz00_1619);
		}
	}



/* rgc-env */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2envzd2zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 104 */
			return
				STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
				(int) (((long) 6)));
		}
	}



/* _rgc-env */
	obj_t BGl__rgczd2envzd2zz__rgc_configz00(obj_t BgL_envz00_1620)
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 104 */
			return BGl_rgczd2envzd2zz__rgc_configz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_configz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcconfig.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2251z00zz__rgc_configz00));
		}
	}

#ifdef __cplusplus
}
#endif
