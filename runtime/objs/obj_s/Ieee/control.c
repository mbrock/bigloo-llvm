/*===========================================================================*/
/*   (Ieee/control.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/control.scm -indent -o objs/obj_s/Ieee/control.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__makezd2promisezd2zz__r4_control_features_6_9z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__callzf2cczf2zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
static obj_t BGl_symbol1785z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_symbol1789z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1791z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1802z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1804z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1806z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl__filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1811z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1814z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1816z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1818z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1822z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1825z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1830z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1834z00zz__r4_control_features_6_9z00 = BUNSPEC;
extern obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol1839z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_symbol1843z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1846z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_symbol1851z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00(obj_t);
static obj_t BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_symbol1860z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1862z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1868z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl__mapz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1872z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1875z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1788z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl__forcez00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1801z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1882z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl__appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_list1812z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1901z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1813z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1892z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1906z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1896z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1898z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1821z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1909z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_symbol1914z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1829z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_loopz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_mapzd22z12zc0zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1838z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl__filterz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_list1845z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1850z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(obj_t);
extern obj_t bgl_reverse_bang(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list1859z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1867z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1871z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1874z00zz__r4_control_features_6_9z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t);
static obj_t BGl_loopz72z72z00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list1881z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_recurz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1887z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1900z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1891z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r4_control_features_6_9z00();
static obj_t BGl_loopz72z72zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list1905z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1895z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1908z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl_list1913z00zz__r4_control_features_6_9z00 = BUNSPEC;
static obj_t BGl__applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
extern obj_t bgl_append2(obj_t, obj_t);
static obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00();
static obj_t BGl__forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl__filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__mapzd22zd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00(obj_t);
extern obj_t call_cc(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__procedurezf3zf3zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2mapz12zd2envz12zz__r4_control_features_6_9z00, BgL_bgl__appendza7d2mapza7121953z00, va_generic_entry, BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2promisezd2envz00zz__r4_control_features_6_9z00, BgL_bgl__makeza7d2promiseza71954z00, BGl__makezd2promisezd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00;
extern obj_t BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2mapzd2envz00zz__r4_control_features_6_9z00, BgL_bgl__appendza7d2mapza7d21955z00, va_generic_entry, BGl__appendzd2mapzd2zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filterz12zd2envzc0zz__r4_control_features_6_9z00, BgL_bgl__filterza712za712za7za7_1956z00, BGl__filterz12z12zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1786z00zz__r4_control_features_6_9z00, BgL_bgl_string1786za700za7za7_1957za7, "apply", 5 );
DEFINE_STRING( BGl_string1787z00zz__r4_control_features_6_9z00, BgL_bgl_string1787za700za7za7_1958za7, "Wrong number of arguments", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzf2cczd2envz20zz__r4_control_features_6_9z00, BgL_bgl__callza7f2ccza7f2za7za7_1959z00, BGl__callzf2cczf2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1790z00zz__r4_control_features_6_9z00, BgL_bgl_string1790za700za7za7_1960za7, "proc", 4 );
DEFINE_STRING( BGl_string1800z00zz__r4_control_features_6_9z00, BgL_bgl_string1800za700za7za7_1961za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string1792z00zz__r4_control_features_6_9z00, BgL_bgl_string1792za700za7za7_1962za7, "args", 4 );
DEFINE_STRING( BGl_string1793z00zz__r4_control_features_6_9z00, BgL_bgl_string1793za700za7za7_1963za7, "/tmp/bigloo/runtime/Ieee/control.scm", 36 );
DEFINE_STRING( BGl_string1803z00zz__r4_control_features_6_9z00, BgL_bgl_string1803za700za7za7_1964za7, "funcall", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mapzd2envzd2zz__r4_control_features_6_9z00, BgL_bgl__mapza700za7za7__r4_co1965za7, va_generic_entry, BGl__mapz00zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string1794z00zz__r4_control_features_6_9z00, BgL_bgl_string1794za700za7za7_1966za7, "loop''''''", 10 );
DEFINE_STRING( BGl_string1795z00zz__r4_control_features_6_9z00, BgL_bgl_string1795za700za7za7_1967za7, "pair", 4 );
DEFINE_STRING( BGl_string1805z00zz__r4_control_features_6_9z00, BgL_bgl_string1805za700za7za7_1968za7, "f", 1 );
DEFINE_STRING( BGl_string1796z00zz__r4_control_features_6_9z00, BgL_bgl_string1796za700za7za7_1969za7, "_apply", 6 );
DEFINE_STRING( BGl_string1797z00zz__r4_control_features_6_9z00, BgL_bgl_string1797za700za7za7_1970za7, "procedure", 9 );
DEFINE_STRING( BGl_string1807z00zz__r4_control_features_6_9z00, BgL_bgl_string1807za700za7za7_1971za7, "arg1240", 7 );
DEFINE_STRING( BGl_string1798z00zz__r4_control_features_6_9z00, BgL_bgl_string1798za700za7za7_1972za7, "loop", 4 );
DEFINE_STRING( BGl_string1808z00zz__r4_control_features_6_9z00, BgL_bgl_string1808za700za7za7_1973za7, "_map-2", 6 );
DEFINE_STRING( BGl_string1799z00zz__r4_control_features_6_9z00, BgL_bgl_string1799za700za7za7_1974za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1809z00zz__r4_control_features_6_9z00, BgL_bgl_string1809za700za7za7_1975za7, "map", 3 );
DEFINE_STRING( BGl_string1810z00zz__r4_control_features_6_9z00, BgL_bgl_string1810za700za7za7_1976za7, "loop'''''", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mapzd22zd2envz00zz__r4_control_features_6_9z00, BgL_bgl__mapza7d22za7d2za7za7__r1977z00, BGl__mapzd22zd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1815z00zz__r4_control_features_6_9z00, BgL_bgl_string1815za700za7za7_1978za7, "map-2", 5 );
DEFINE_STRING( BGl_string1817z00zz__r4_control_features_6_9z00, BgL_bgl_string1817za700za7za7_1979za7, "car-env", 7 );
DEFINE_STRING( BGl_string1819z00zz__r4_control_features_6_9z00, BgL_bgl_string1819za700za7za7_1980za7, "l", 1 );
DEFINE_STRING( BGl_string1820z00zz__r4_control_features_6_9z00, BgL_bgl_string1820za700za7za7_1981za7, "_map", 4 );
DEFINE_STRING( BGl_string1823z00zz__r4_control_features_6_9z00, BgL_bgl_string1823za700za7za7_1982za7, "arg1254", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezf3zd2envz21zz__r4_control_features_6_9z00, BgL_bgl__procedureza7f3za7f31983z00, BGl__procedurezf3zf3zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1824z00zz__r4_control_features_6_9z00, BgL_bgl_string1824za700za7za7_1984za7, "map!", 4 );
DEFINE_STRING( BGl_string1826z00zz__r4_control_features_6_9z00, BgL_bgl_string1826za700za7za7_1985za7, "_map!", 5 );
DEFINE_STRING( BGl_string1827z00zz__r4_control_features_6_9z00, BgL_bgl_string1827za700za7za7_1986za7, "loop''''", 8 );
DEFINE_STRING( BGl_string1828z00zz__r4_control_features_6_9z00, BgL_bgl_string1828za700za7za7_1987za7, "loop'''':Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string1831z00zz__r4_control_features_6_9z00, BgL_bgl_string1831za700za7za7_1988za7, "arg1270", 7 );
DEFINE_STRING( BGl_string1832z00zz__r4_control_features_6_9z00, BgL_bgl_string1832za700za7za7_1989za7, "append-map", 10 );
DEFINE_STRING( BGl_string1833z00zz__r4_control_features_6_9z00, BgL_bgl_string1833za700za7za7_1990za7, "loop'''", 7 );
DEFINE_STRING( BGl_string1835z00zz__r4_control_features_6_9z00, BgL_bgl_string1835za700za7za7_1991za7, "_append-map", 11 );
DEFINE_STRING( BGl_string1836z00zz__r4_control_features_6_9z00, BgL_bgl_string1836za700za7za7_1992za7, "loop''", 6 );
DEFINE_STRING( BGl_string1837z00zz__r4_control_features_6_9z00, BgL_bgl_string1837za700za7za7_1993za7, "loop'':Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string1840z00zz__r4_control_features_6_9z00, BgL_bgl_string1840za700za7za7_1994za7, "arg1286", 7 );
DEFINE_STRING( BGl_string1841z00zz__r4_control_features_6_9z00, BgL_bgl_string1841za700za7za7_1995za7, "append-map!", 11 );
DEFINE_STRING( BGl_string1842z00zz__r4_control_features_6_9z00, BgL_bgl_string1842za700za7za7_1996za7, "loop'", 5 );
DEFINE_STRING( BGl_string1844z00zz__r4_control_features_6_9z00, BgL_bgl_string1844za700za7za7_1997za7, "_append-map!", 12 );
DEFINE_STRING( BGl_string1847z00zz__r4_control_features_6_9z00, BgL_bgl_string1847za700za7za7_1998za7, "arg1303", 7 );
DEFINE_STRING( BGl_string1848z00zz__r4_control_features_6_9z00, BgL_bgl_string1848za700za7za7_1999za7, "filter-map", 10 );
DEFINE_STRING( BGl_string1849z00zz__r4_control_features_6_9z00, BgL_bgl_string1849za700za7za7_2000za7, "_filter-map", 11 );
DEFINE_STRING( BGl_string1852z00zz__r4_control_features_6_9z00, BgL_bgl_string1852za700za7za7_2001za7, "arg1316", 7 );
DEFINE_STRING( BGl_string1853z00zz__r4_control_features_6_9z00, BgL_bgl_string1853za700za7za7_2002za7, "_for-each-2", 11 );
DEFINE_STRING( BGl_string1854z00zz__r4_control_features_6_9z00, BgL_bgl_string1854za700za7za7_2003za7, "for-each", 8 );
DEFINE_STRING( BGl_string1855z00zz__r4_control_features_6_9z00, BgL_bgl_string1855za700za7za7_2004za7, "_for-each", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2currentzd2continuationzd2envz00zz__r4_control_features_6_9z00, BgL_bgl__callza7d2withza7d2c2005z00, BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1856z00zz__r4_control_features_6_9z00, BgL_bgl_string1856za700za7za7_2006za7, "filter", 6 );
DEFINE_STRING( BGl_string1857z00zz__r4_control_features_6_9z00, BgL_bgl_string1857za700za7za7_2007za7, "recur", 5 );
DEFINE_STRING( BGl_string1858z00zz__r4_control_features_6_9z00, BgL_bgl_string1858za700za7za7_2008za7, "recur:Wrong number of arguments", 31 );
DEFINE_STRING( BGl_string1861z00zz__r4_control_features_6_9z00, BgL_bgl_string1861za700za7za7_2009za7, "pred", 4 );
DEFINE_STRING( BGl_string1863z00zz__r4_control_features_6_9z00, BgL_bgl_string1863za700za7za7_2010za7, "head", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_forzd2eachzd22zd2envzd2zz__r4_control_features_6_9z00, BgL_bgl__forza7d2eachza7d22za72011za7, BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1864z00zz__r4_control_features_6_9z00, BgL_bgl_string1864za700za7za7_2012za7, "_filter", 7 );
DEFINE_STRING( BGl_string1865z00zz__r4_control_features_6_9z00, BgL_bgl_string1865za700za7za7_2013za7, "lp", 2 );
DEFINE_STRING( BGl_string1866z00zz__r4_control_features_6_9z00, BgL_bgl_string1866za700za7za7_2014za7, "lp:Wrong number of arguments", 28 );
DEFINE_STRING( BGl_string1870z00zz__r4_control_features_6_9z00, BgL_bgl_string1870za700za7za7_2015za7, "scan-in:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string1869z00zz__r4_control_features_6_9z00, BgL_bgl_string1869za700za7za7_2016za7, "arg1348", 7 );
DEFINE_STRING( BGl_string1873z00zz__r4_control_features_6_9z00, BgL_bgl_string1873za700za7za7_2017za7, "arg1339", 7 );
DEFINE_STRING( BGl_string1876z00zz__r4_control_features_6_9z00, BgL_bgl_string1876za700za7za7_2018za7, "arg1346", 7 );
DEFINE_STRING( BGl_string1877z00zz__r4_control_features_6_9z00, BgL_bgl_string1877za700za7za7_2019za7, "filter!", 7 );
DEFINE_STRING( BGl_string1878z00zz__r4_control_features_6_9z00, BgL_bgl_string1878za700za7za7_2020za7, "_filter!", 8 );
DEFINE_STRING( BGl_string1880z00zz__r4_control_features_6_9z00, BgL_bgl_string1880za700za7za7_2021za7, "force:Wrong number of arguments", 31 );
DEFINE_STRING( BGl_string1879z00zz__r4_control_features_6_9z00, BgL_bgl_string1879za700za7za7_2022za7, "force", 5 );
DEFINE_STRING( BGl_string1883z00zz__r4_control_features_6_9z00, BgL_bgl_string1883za700za7za7_2023za7, "promise", 7 );
DEFINE_STRING( BGl_string1884z00zz__r4_control_features_6_9z00, BgL_bgl_string1884za700za7za7_2024za7, "_make-promise", 13 );
DEFINE_STRING( BGl_string1885z00zz__r4_control_features_6_9z00, BgL_bgl_string1885za700za7za7_2025za7, "<anonymous:1349>", 16 );
DEFINE_STRING( BGl_string1886z00zz__r4_control_features_6_9z00, BgL_bgl_string1886za700za7za7_2026za7, "<anonymous:1349>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string1888z00zz__r4_control_features_6_9z00, BgL_bgl_string1888za700za7za7_2027za7, "_call/cc", 8 );
DEFINE_STRING( BGl_string1890z00zz__r4_control_features_6_9z00, BgL_bgl_string1890za700za7za7_2028za7, "<anonymous:1355>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string1889z00zz__r4_control_features_6_9z00, BgL_bgl_string1889za700za7za7_2029za7, "<anonymous:1355>", 16 );
DEFINE_STRING( BGl_string1902z00zz__r4_control_features_6_9z00, BgL_bgl_string1902za700za7za7_2030za7, "vals", 4 );
DEFINE_STRING( BGl_string1903z00zz__r4_control_features_6_9z00, BgL_bgl_string1903za700za7za7_2031za7, "_call-with-current-continuation", 31 );
DEFINE_STRING( BGl_string1893z00zz__r4_control_features_6_9z00, BgL_bgl_string1893za700za7za7_2032za7, "<anonymous:1357>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_applyzd2envzd2zz__r4_control_features_6_9z00, BgL_bgl__applyza700za7za7__r4_2033za7, va_generic_entry, BGl__applyz00zz__r4_control_features_6_9z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string1904z00zz__r4_control_features_6_9z00, BgL_bgl_string1904za700za7za7_2034za7, "dynamic-wind:Wrong number of arguments", 38 );
DEFINE_STRING( BGl_string1894z00zz__r4_control_features_6_9z00, BgL_bgl_string1894za700za7za7_2035za7, "<anonymous:1357>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string1907z00zz__r4_control_features_6_9z00, BgL_bgl_string1907za700za7za7_2036za7, "before", 6 );
DEFINE_STRING( BGl_string1897z00zz__r4_control_features_6_9z00, BgL_bgl_string1897za700za7za7_2037za7, "cont", 4 );
DEFINE_STRING( BGl_string1910z00zz__r4_control_features_6_9z00, BgL_bgl_string1910za700za7za7_2038za7, "after", 5 );
DEFINE_STRING( BGl_string1899z00zz__r4_control_features_6_9z00, BgL_bgl_string1899za700za7za7_2039za7, "arg1359", 7 );
DEFINE_STRING( BGl_string1911z00zz__r4_control_features_6_9z00, BgL_bgl_string1911za700za7za7_2040za7, "dynamic-wind", 12 );
DEFINE_STRING( BGl_string1912z00zz__r4_control_features_6_9z00, BgL_bgl_string1912za700za7za7_2041za7, "<exit:1372>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string1915z00zz__r4_control_features_6_9z00, BgL_bgl_string1915za700za7za7_2042za7, "thunk", 5 );
DEFINE_STRING( BGl_string1916z00zz__r4_control_features_6_9z00, BgL_bgl_string1916za700za7za7_2043za7, "_dynamic-wind", 13 );
DEFINE_STRING( BGl_string1917z00zz__r4_control_features_6_9z00, BgL_bgl_string1917za700za7za7_2044za7, "__r4_control_features_6_9", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filterzd2mapzd2envz00zz__r4_control_features_6_9z00, BgL_bgl__filterza7d2mapza7d22045z00, va_generic_entry, BGl__filterzd2mapzd2zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mapz12zd2envzc0zz__r4_control_features_6_9z00, BgL_bgl__mapza712za712za7za7__r42046z00, va_generic_entry, BGl__mapz12z12zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_forcezd2envzd2zz__r4_control_features_6_9z00, BgL_bgl__forceza700za7za7__r4_2047za7, BGl__forcez00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_forzd2eachzd2envz00zz__r4_control_features_6_9z00, BgL_bgl__forza7d2eachza7d2za7za72048z00, va_generic_entry, BGl__forzd2eachzd2zz__r4_control_features_6_9z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2windzd2envz00zz__r4_control_features_6_9z00, BgL_bgl__dynamicza7d2windza72049z00, BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filterzd2envzd2zz__r4_control_features_6_9z00, BgL_bgl__filterza700za7za7__r42050za7, BGl__filterz00zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long BgL_checksumz00_1534, char * BgL_fromz00_1535)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_control_features_6_9z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_control_features_6_9z00()
{ AN_OBJECT;
{ /* Ieee/control.scm 14 */
BGl_symbol1785z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1786z00zz__r4_control_features_6_9z00); 
BGl_symbol1789z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1790z00zz__r4_control_features_6_9z00); 
BGl_symbol1791z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1792z00zz__r4_control_features_6_9z00); 
BGl_list1788z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1785z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1789z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1791z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_symbol1802z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1803z00zz__r4_control_features_6_9z00); 
BGl_symbol1804z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1805z00zz__r4_control_features_6_9z00); 
BGl_symbol1806z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1807z00zz__r4_control_features_6_9z00); 
BGl_list1801z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1806z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1811z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1810z00zz__r4_control_features_6_9z00); 
BGl_symbol1814z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1815z00zz__r4_control_features_6_9z00); 
BGl_symbol1816z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1817z00zz__r4_control_features_6_9z00); 
BGl_symbol1818z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1819z00zz__r4_control_features_6_9z00); 
BGl_list1813z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1814z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1816z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1818z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_list1812z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1785z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_list1813z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_symbol1822z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1823z00zz__r4_control_features_6_9z00); 
BGl_list1821z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1822z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1825z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1798z00zz__r4_control_features_6_9z00); 
BGl_symbol1830z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1831z00zz__r4_control_features_6_9z00); 
BGl_list1829z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1830z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1834z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1833z00zz__r4_control_features_6_9z00); 
BGl_symbol1839z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1840z00zz__r4_control_features_6_9z00); 
BGl_list1838z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1839z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1843z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1842z00zz__r4_control_features_6_9z00); 
BGl_symbol1846z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1847z00zz__r4_control_features_6_9z00); 
BGl_list1845z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1846z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1851z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1852z00zz__r4_control_features_6_9z00); 
BGl_list1850z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1804z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1851z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1860z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1861z00zz__r4_control_features_6_9z00); 
BGl_symbol1862z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1863z00zz__r4_control_features_6_9z00); 
BGl_list1859z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1862z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1868z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1869z00zz__r4_control_features_6_9z00); 
BGl_list1867z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1868z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1872z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1873z00zz__r4_control_features_6_9z00); 
BGl_list1871z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1872z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1875z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1876z00zz__r4_control_features_6_9z00); 
BGl_list1874z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1860z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1875z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1882z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1883z00zz__r4_control_features_6_9z00); 
BGl_list1881z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1882z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1882z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_list1887z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1789z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1789z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_symbol1892z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1893z00zz__r4_control_features_6_9z00); 
BGl_list1891z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1789z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1789z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1892z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1896z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1897z00zz__r4_control_features_6_9z00); 
BGl_symbol1898z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1899z00zz__r4_control_features_6_9z00); 
BGl_list1895z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1896z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1896z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1898z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1901z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1902z00zz__r4_control_features_6_9z00); 
BGl_list1900z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1896z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1896z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1901z00zz__r4_control_features_6_9z00, BNIL)))); 
BGl_symbol1906z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1907z00zz__r4_control_features_6_9z00); 
BGl_list1905z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1906z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1906z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_symbol1909z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1910z00zz__r4_control_features_6_9z00); 
BGl_list1908z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1909z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1909z00zz__r4_control_features_6_9z00, BNIL))); 
BGl_symbol1914z00zz__r4_control_features_6_9z00 = 
bstring_to_symbol(BGl_string1915z00zz__r4_control_features_6_9z00); 
return ( 
BGl_list1913z00zz__r4_control_features_6_9z00 = 
MAKE_PAIR(BGl_symbol1802z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1914z00zz__r4_control_features_6_9z00, 
MAKE_PAIR(BGl_symbol1914z00zz__r4_control_features_6_9z00, BNIL))), BUNSPEC) ;} 
}



/* procedure? */
BGL_EXPORTED_DEF bool_t BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/control.scm 74 */
return 
PROCEDUREP(BgL_objz00_1);} 
}



/* _procedure? */
obj_t BGl__procedurezf3zf3zz__r4_control_features_6_9z00(obj_t BgL_envz00_979, obj_t BgL_objz00_980)
{ AN_OBJECT;
{ /* Ieee/control.scm 74 */
return 
BBOOL(
PROCEDUREP(BgL_objz00_980));} 
}



/* apply */
BGL_EXPORTED_DEF obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t BgL_procz00_2, obj_t BgL_argsz00_3, obj_t BgL_optz00_4)
{ AN_OBJECT;
{ /* Ieee/control.scm 80 */
{ /* Ieee/control.scm 81 */
obj_t BgL_argsz00_406;
if(
PAIRP(BgL_optz00_4))
{ /* Ieee/control.scm 81 */
BgL_argsz00_406 = 
MAKE_PAIR(BgL_argsz00_3, 
BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(BgL_optz00_4)); }  else 
{ /* Ieee/control.scm 81 */
BgL_argsz00_406 = BgL_argsz00_3; } 
{ /* Ieee/control.scm 87 */
obj_t BgL_valz00_1055;
BgL_valz00_1055 = BgL_argsz00_406; 
{ /* Ieee/control.scm 87 */
int BgL_len1521z00_1056;
BgL_len1521z00_1056 = 
(int)(
bgl_list_length(BgL_valz00_1055)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_2, BgL_len1521z00_1056))
{ /* Ieee/control.scm 87 */
return 
apply(BgL_procz00_2, BgL_valz00_1055);}  else 
{ /* Ieee/control.scm 87 */
FAILURE(BGl_symbol1785z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1788z00zz__r4_control_features_6_9z00);} } } } } 
}



/* loop'''''' */
obj_t BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(obj_t BgL_optz00_410)
{ AN_OBJECT;
{ /* Ieee/control.scm 82 */
{ /* Ieee/control.scm 83 */
bool_t BgL_testz00_1662;
{ /* Ieee/control.scm 83 */
obj_t BgL_auxz00_1663;
{ /* Ieee/control.scm 83 */
obj_t BgL_pairz00_797;
if(
PAIRP(BgL_optz00_410))
{ /* Ieee/control.scm 83 */
BgL_pairz00_797 = BgL_optz00_410; }  else 
{ 
obj_t BgL_auxz00_1666;
BgL_auxz00_1666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3294)), BGl_string1794z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_optz00_410); 
FAILURE(BgL_auxz00_1666,BFALSE,BFALSE);} 
BgL_auxz00_1663 = 
CDR(BgL_pairz00_797); } 
BgL_testz00_1662 = 
PAIRP(BgL_auxz00_1663); } 
if(BgL_testz00_1662)
{ /* Ieee/control.scm 84 */
obj_t BgL_arg1127z00_413;obj_t BgL_arg1128z00_414;
{ /* Ieee/control.scm 84 */
obj_t BgL_pairz00_799;
if(
PAIRP(BgL_optz00_410))
{ /* Ieee/control.scm 84 */
BgL_pairz00_799 = BgL_optz00_410; }  else 
{ 
obj_t BgL_auxz00_1674;
BgL_auxz00_1674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3320)), BGl_string1794z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_optz00_410); 
FAILURE(BgL_auxz00_1674,BFALSE,BFALSE);} 
BgL_arg1127z00_413 = 
CAR(BgL_pairz00_799); } 
BgL_arg1128z00_414 = 
BGl_loopz72z72z72z72z72z72z00zz__r4_control_features_6_9z00(
CDR(BgL_optz00_410)); 
return 
MAKE_PAIR(BgL_arg1127z00_413, BgL_arg1128z00_414);}  else 
{ /* Ieee/control.scm 85 */
obj_t BgL_pairz00_801;
if(
PAIRP(BgL_optz00_410))
{ /* Ieee/control.scm 85 */
BgL_pairz00_801 = BgL_optz00_410; }  else 
{ 
obj_t BgL_auxz00_1684;
BgL_auxz00_1684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3357)), BGl_string1794z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_optz00_410); 
FAILURE(BgL_auxz00_1684,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_801);} } } 
}



/* _apply */
obj_t BGl__applyz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_981, obj_t BgL_procz00_982, obj_t BgL_argsz00_983, obj_t BgL_optz00_984)
{ AN_OBJECT;
{ /* Ieee/control.scm 80 */
{ /* Ieee/control.scm 81 */
obj_t BgL_auxz00_1689;
if(
PROCEDUREP(BgL_procz00_982))
{ /* Ieee/control.scm 81 */
BgL_auxz00_1689 = BgL_procz00_982
; }  else 
{ 
obj_t BgL_auxz00_1692;
BgL_auxz00_1692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3207)), BGl_string1796z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_982); 
FAILURE(BgL_auxz00_1692,BFALSE,BFALSE);} 
return 
BGl_applyz00zz__r4_control_features_6_9z00(BgL_auxz00_1689, BgL_argsz00_983, BgL_optz00_984);} } 
}



/* map-2 */
BGL_EXPORTED_DEF obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t BgL_fz00_5, obj_t BgL_lz00_6)
{ AN_OBJECT;
{ /* Ieee/control.scm 92 */
{ 
obj_t BgL_lz00_420;obj_t BgL_resz00_421;
BgL_lz00_420 = BgL_lz00_6; 
BgL_resz00_421 = BNIL; 
BgL_zc3anonymousza31131ze3z83_422:
if(
NULLP(BgL_lz00_420))
{ /* Ieee/control.scm 96 */
obj_t BgL_auxz00_1699;
{ /* Ieee/control.scm 96 */
bool_t BgL_testz00_1700;
if(
PAIRP(BgL_resz00_421))
{ /* Ieee/control.scm 96 */
BgL_testz00_1700 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 96 */
BgL_testz00_1700 = 
NULLP(BgL_resz00_421)
; } 
if(BgL_testz00_1700)
{ /* Ieee/control.scm 96 */
BgL_auxz00_1699 = BgL_resz00_421
; }  else 
{ 
obj_t BgL_auxz00_1704;
BgL_auxz00_1704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3720)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_resz00_421); 
FAILURE(BgL_auxz00_1704,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_1699);}  else 
{ /* Ieee/control.scm 97 */
obj_t BgL_arg1237z00_424;obj_t BgL_arg1238z00_425;
{ /* Ieee/control.scm 97 */
obj_t BgL_pairz00_803;
if(
PAIRP(BgL_lz00_420))
{ /* Ieee/control.scm 97 */
BgL_pairz00_803 = BgL_lz00_420; }  else 
{ 
obj_t BgL_auxz00_1711;
BgL_auxz00_1711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3739)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_420); 
FAILURE(BgL_auxz00_1711,BFALSE,BFALSE);} 
BgL_arg1237z00_424 = 
CDR(BgL_pairz00_803); } 
{ /* Ieee/control.scm 97 */
obj_t BgL_arg1239z00_426;
{ /* Ieee/control.scm 97 */
obj_t BgL_arg1240z00_427;
BgL_arg1240z00_427 = 
CAR(BgL_lz00_420); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_5, ((long)1)))
{ /* Ieee/control.scm 97 */
BgL_arg1239z00_426 = 
PROCEDURE_ENTRY(BgL_fz00_5)(BgL_fz00_5, BgL_arg1240z00_427, BEOA); }  else 
{ /* Ieee/control.scm 97 */
FAILURE(BGl_string1800z00zz__r4_control_features_6_9z00,BGl_list1801z00zz__r4_control_features_6_9z00,BgL_fz00_5);} } 
BgL_arg1238z00_425 = 
MAKE_PAIR(BgL_arg1239z00_426, BgL_resz00_421); } 
{ 
obj_t BgL_resz00_1724;obj_t BgL_lz00_1723;
BgL_lz00_1723 = BgL_arg1237z00_424; 
BgL_resz00_1724 = BgL_arg1238z00_425; 
BgL_resz00_421 = BgL_resz00_1724; 
BgL_lz00_420 = BgL_lz00_1723; 
goto BgL_zc3anonymousza31131ze3z83_422;} } } } 
}



/* _map-2 */
obj_t BGl__mapzd22zd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_985, obj_t BgL_fz00_986, obj_t BgL_lz00_987)
{ AN_OBJECT;
{ /* Ieee/control.scm 92 */
{ /* Ieee/control.scm 95 */
obj_t BgL_auxz00_1732;obj_t BgL_auxz00_1725;
{ /* Ieee/control.scm 95 */
bool_t BgL_testz00_1733;
if(
PAIRP(BgL_lz00_987))
{ /* Ieee/control.scm 95 */
BgL_testz00_1733 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 95 */
BgL_testz00_1733 = 
NULLP(BgL_lz00_987)
; } 
if(BgL_testz00_1733)
{ /* Ieee/control.scm 95 */
BgL_auxz00_1732 = BgL_lz00_987
; }  else 
{ 
obj_t BgL_auxz00_1737;
BgL_auxz00_1737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3693)), BGl_string1808z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_987); 
FAILURE(BgL_auxz00_1737,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_fz00_986))
{ /* Ieee/control.scm 95 */
BgL_auxz00_1725 = BgL_fz00_986
; }  else 
{ 
obj_t BgL_auxz00_1728;
BgL_auxz00_1728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)3693)), BGl_string1808z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_986); 
FAILURE(BgL_auxz00_1728,BFALSE,BFALSE);} 
return 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_auxz00_1725, BgL_auxz00_1732);} } 
}



/* map */
BGL_EXPORTED_DEF obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t BgL_fz00_7, obj_t BgL_lz00_8)
{ AN_OBJECT;
{ /* Ieee/control.scm 102 */
if(
NULLP(BgL_lz00_8))
{ /* Ieee/control.scm 104 */
return BNIL;}  else 
{ /* Ieee/control.scm 106 */
bool_t BgL_testz00_1744;
{ /* Ieee/control.scm 106 */
obj_t BgL_auxz00_1745;
{ /* Ieee/control.scm 106 */
obj_t BgL_pairz00_806;
if(
PAIRP(BgL_lz00_8))
{ /* Ieee/control.scm 106 */
BgL_pairz00_806 = BgL_lz00_8; }  else 
{ 
obj_t BgL_auxz00_1748;
BgL_auxz00_1748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4069)), BGl_string1809z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_8); 
FAILURE(BgL_auxz00_1748,BFALSE,BFALSE);} 
BgL_auxz00_1745 = 
CDR(BgL_pairz00_806); } 
BgL_testz00_1744 = 
NULLP(BgL_auxz00_1745); } 
if(BgL_testz00_1744)
{ /* Ieee/control.scm 107 */
obj_t BgL_arg1243z00_431;
{ /* Ieee/control.scm 107 */
obj_t BgL_pairz00_808;
if(
PAIRP(BgL_lz00_8))
{ /* Ieee/control.scm 107 */
BgL_pairz00_808 = BgL_lz00_8; }  else 
{ 
obj_t BgL_auxz00_1756;
BgL_auxz00_1756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4094)), BGl_string1809z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_8); 
FAILURE(BgL_auxz00_1756,BFALSE,BFALSE);} 
BgL_arg1243z00_431 = 
CAR(BgL_pairz00_808); } 
{ /* Ieee/control.scm 107 */
obj_t BgL_auxz00_1761;
{ /* Ieee/control.scm 107 */
bool_t BgL_testz00_1762;
if(
PAIRP(BgL_arg1243z00_431))
{ /* Ieee/control.scm 107 */
BgL_testz00_1762 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 107 */
BgL_testz00_1762 = 
NULLP(BgL_arg1243z00_431)
; } 
if(BgL_testz00_1762)
{ /* Ieee/control.scm 107 */
BgL_auxz00_1761 = BgL_arg1243z00_431
; }  else 
{ 
obj_t BgL_auxz00_1766;
BgL_auxz00_1766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4095)), BGl_string1809z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1243z00_431); 
FAILURE(BgL_auxz00_1766,BFALSE,BFALSE);} } 
return 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_fz00_7, BgL_auxz00_1761);} }  else 
{ /* Ieee/control.scm 109 */
obj_t BgL_aux1551z00_1087;
BgL_aux1551z00_1087 = 
BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_7, BgL_lz00_8); 
{ /* Ieee/control.scm 109 */
bool_t BgL_testz00_1772;
if(
PAIRP(BgL_aux1551z00_1087))
{ /* Ieee/control.scm 109 */
BgL_testz00_1772 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 109 */
BgL_testz00_1772 = 
NULLP(BgL_aux1551z00_1087)
; } 
if(BgL_testz00_1772)
{ /* Ieee/control.scm 109 */
return BgL_aux1551z00_1087;}  else 
{ 
obj_t BgL_auxz00_1776;
BgL_auxz00_1776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4118)), BGl_string1809z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1551z00_1087); 
FAILURE(BgL_auxz00_1776,BFALSE,BFALSE);} } } } } 
}



/* loop''''' */
obj_t BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(obj_t BgL_fz00_1053, obj_t BgL_lz00_433)
{ AN_OBJECT;
{ /* Ieee/control.scm 109 */
{ /* Ieee/control.scm 110 */
bool_t BgL_testz00_1780;
{ /* Ieee/control.scm 110 */
obj_t BgL_auxz00_1781;
{ /* Ieee/control.scm 110 */
obj_t BgL_pairz00_809;
if(
PAIRP(BgL_lz00_433))
{ /* Ieee/control.scm 110 */
BgL_pairz00_809 = BgL_lz00_433; }  else 
{ 
obj_t BgL_auxz00_1784;
BgL_auxz00_1784 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4155)), BGl_string1810z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_433); 
FAILURE(BgL_auxz00_1784,BFALSE,BFALSE);} 
BgL_auxz00_1781 = 
CAR(BgL_pairz00_809); } 
BgL_testz00_1780 = 
NULLP(BgL_auxz00_1781); } 
if(BgL_testz00_1780)
{ /* Ieee/control.scm 110 */
return BNIL;}  else 
{ /* Ieee/control.scm 112 */
obj_t BgL_arg1246z00_436;obj_t BgL_arg1247z00_437;
{ /* Ieee/control.scm 112 */
obj_t BgL_valz00_1094;
{ /* Ieee/control.scm 112 */
obj_t BgL_auxz00_1790;
{ /* Ieee/control.scm 112 */
bool_t BgL_testz00_1791;
if(
PAIRP(BgL_lz00_433))
{ /* Ieee/control.scm 112 */
BgL_testz00_1791 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 112 */
BgL_testz00_1791 = 
NULLP(BgL_lz00_433)
; } 
if(BgL_testz00_1791)
{ /* Ieee/control.scm 112 */
BgL_auxz00_1790 = BgL_lz00_433
; }  else 
{ 
obj_t BgL_auxz00_1795;
BgL_auxz00_1795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4203)), BGl_string1810z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_433); 
FAILURE(BgL_auxz00_1795,BFALSE,BFALSE);} } 
BgL_valz00_1094 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_1790); } 
{ /* Ieee/control.scm 112 */
int BgL_len1557z00_1095;
BgL_len1557z00_1095 = 
(int)(
bgl_list_length(BgL_valz00_1094)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1053, BgL_len1557z00_1095))
{ /* Ieee/control.scm 112 */
BgL_arg1246z00_436 = 
apply(BgL_fz00_1053, BgL_valz00_1094); }  else 
{ /* Ieee/control.scm 112 */
FAILURE(BGl_symbol1811z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
{ /* Ieee/control.scm 113 */
obj_t BgL_arg1248z00_438;
{ /* Ieee/control.scm 113 */
obj_t BgL_auxz00_1807;
{ /* Ieee/control.scm 113 */
bool_t BgL_testz00_1808;
if(
PAIRP(BgL_lz00_433))
{ /* Ieee/control.scm 113 */
BgL_testz00_1808 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 113 */
BgL_testz00_1808 = 
NULLP(BgL_lz00_433)
; } 
if(BgL_testz00_1808)
{ /* Ieee/control.scm 113 */
BgL_auxz00_1807 = BgL_lz00_433
; }  else 
{ 
obj_t BgL_auxz00_1812;
BgL_auxz00_1812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4230)), BGl_string1810z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_433); 
FAILURE(BgL_auxz00_1812,BFALSE,BFALSE);} } 
BgL_arg1248z00_438 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_1807); } 
BgL_arg1247z00_437 = 
BGl_loopz72z72z72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_1053, BgL_arg1248z00_438); } 
return 
MAKE_PAIR(BgL_arg1246z00_436, BgL_arg1247z00_437);} } } 
}



/* _map */
obj_t BGl__mapz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_988, obj_t BgL_fz00_989, obj_t BgL_lz00_990)
{ AN_OBJECT;
{ /* Ieee/control.scm 102 */
{ /* Ieee/control.scm 104 */
obj_t BgL_auxz00_1819;
if(
PROCEDUREP(BgL_fz00_989))
{ /* Ieee/control.scm 104 */
BgL_auxz00_1819 = BgL_fz00_989
; }  else 
{ 
obj_t BgL_auxz00_1822;
BgL_auxz00_1822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4028)), BGl_string1820z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_989); 
FAILURE(BgL_auxz00_1822,BFALSE,BFALSE);} 
return 
BGl_mapz00zz__r4_control_features_6_9z00(BgL_auxz00_1819, BgL_lz00_990);} } 
}



/* map-2! */
obj_t BGl_mapzd22z12zc0zz__r4_control_features_6_9z00(obj_t BgL_fz00_9, obj_t BgL_l0z00_10)
{ AN_OBJECT;
{ /* Ieee/control.scm 118 */
{ 
obj_t BgL_lz00_443;
BgL_lz00_443 = BgL_l0z00_10; 
BgL_zc3anonymousza31251ze3z83_444:
if(
NULLP(BgL_lz00_443))
{ /* Ieee/control.scm 120 */
return BgL_l0z00_10;}  else 
{ /* Ieee/control.scm 120 */
{ /* Ieee/control.scm 123 */
obj_t BgL_arg1253z00_446;
{ /* Ieee/control.scm 123 */
obj_t BgL_arg1254z00_447;
{ /* Ieee/control.scm 123 */
obj_t BgL_pairz00_812;
if(
PAIRP(BgL_lz00_443))
{ /* Ieee/control.scm 123 */
BgL_pairz00_812 = BgL_lz00_443; }  else 
{ 
obj_t BgL_auxz00_1831;
BgL_auxz00_1831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4569)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_443); 
FAILURE(BgL_auxz00_1831,BFALSE,BFALSE);} 
BgL_arg1254z00_447 = 
CAR(BgL_pairz00_812); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_9, ((long)1)))
{ /* Ieee/control.scm 123 */
BgL_arg1253z00_446 = 
PROCEDURE_ENTRY(BgL_fz00_9)(BgL_fz00_9, BgL_arg1254z00_447, BEOA); }  else 
{ /* Ieee/control.scm 123 */
FAILURE(BGl_string1800z00zz__r4_control_features_6_9z00,BGl_list1821z00zz__r4_control_features_6_9z00,BgL_fz00_9);} } 
SET_CAR(BgL_lz00_443, BgL_arg1253z00_446); } 
{ 
obj_t BgL_lz00_1842;
BgL_lz00_1842 = 
CDR(BgL_lz00_443); 
BgL_lz00_443 = BgL_lz00_1842; 
goto BgL_zc3anonymousza31251ze3z83_444;} } } } 
}



/* map! */
BGL_EXPORTED_DEF obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t BgL_fz00_11, obj_t BgL_lz00_12)
{ AN_OBJECT;
{ /* Ieee/control.scm 129 */
if(
NULLP(BgL_lz00_12))
{ /* Ieee/control.scm 131 */
return BNIL;}  else 
{ /* Ieee/control.scm 133 */
bool_t BgL_testz00_1846;
{ /* Ieee/control.scm 133 */
obj_t BgL_auxz00_1847;
{ /* Ieee/control.scm 133 */
obj_t BgL_pairz00_817;
if(
PAIRP(BgL_lz00_12))
{ /* Ieee/control.scm 133 */
BgL_pairz00_817 = BgL_lz00_12; }  else 
{ 
obj_t BgL_auxz00_1850;
BgL_auxz00_1850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4900)), BGl_string1824z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_12); 
FAILURE(BgL_auxz00_1850,BFALSE,BFALSE);} 
BgL_auxz00_1847 = 
CDR(BgL_pairz00_817); } 
BgL_testz00_1846 = 
NULLP(BgL_auxz00_1847); } 
if(BgL_testz00_1846)
{ /* Ieee/control.scm 134 */
obj_t BgL_arg1258z00_452;
{ /* Ieee/control.scm 134 */
obj_t BgL_pairz00_819;
if(
PAIRP(BgL_lz00_12))
{ /* Ieee/control.scm 134 */
BgL_pairz00_819 = BgL_lz00_12; }  else 
{ 
obj_t BgL_auxz00_1858;
BgL_auxz00_1858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4926)), BGl_string1824z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_12); 
FAILURE(BgL_auxz00_1858,BFALSE,BFALSE);} 
BgL_arg1258z00_452 = 
CAR(BgL_pairz00_819); } 
{ /* Ieee/control.scm 134 */
obj_t BgL_aux1575z00_1114;
BgL_aux1575z00_1114 = 
BGl_mapzd22z12zc0zz__r4_control_features_6_9z00(BgL_fz00_11, BgL_arg1258z00_452); 
{ /* Ieee/control.scm 134 */
bool_t BgL_testz00_1864;
if(
PAIRP(BgL_aux1575z00_1114))
{ /* Ieee/control.scm 134 */
BgL_testz00_1864 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 134 */
BgL_testz00_1864 = 
NULLP(BgL_aux1575z00_1114)
; } 
if(BgL_testz00_1864)
{ /* Ieee/control.scm 134 */
return BgL_aux1575z00_1114;}  else 
{ 
obj_t BgL_auxz00_1868;
BgL_auxz00_1868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4911)), BGl_string1824z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1575z00_1114); 
FAILURE(BgL_auxz00_1868,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/control.scm 136 */
obj_t BgL_l0z00_453;
{ /* Ieee/control.scm 136 */
obj_t BgL_pairz00_820;
if(
PAIRP(BgL_lz00_12))
{ /* Ieee/control.scm 136 */
BgL_pairz00_820 = BgL_lz00_12; }  else 
{ 
obj_t BgL_auxz00_1874;
BgL_auxz00_1874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4965)), BGl_string1824z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_12); 
FAILURE(BgL_auxz00_1874,BFALSE,BFALSE);} 
BgL_l0z00_453 = 
CAR(BgL_pairz00_820); } 
{ 
obj_t BgL_lz00_455;
{ /* Ieee/control.scm 137 */
obj_t BgL_aux1591z00_1132;
BgL_lz00_455 = BgL_lz00_12; 
BgL_zc3anonymousza31259ze3z83_456:
{ /* Ieee/control.scm 138 */
bool_t BgL_testz00_1879;
{ /* Ieee/control.scm 138 */
obj_t BgL_auxz00_1880;
{ /* Ieee/control.scm 138 */
obj_t BgL_pairz00_821;
if(
PAIRP(BgL_lz00_455))
{ /* Ieee/control.scm 138 */
BgL_pairz00_821 = BgL_lz00_455; }  else 
{ 
obj_t BgL_auxz00_1883;
BgL_auxz00_1883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5013)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_455); 
FAILURE(BgL_auxz00_1883,BFALSE,BFALSE);} 
BgL_auxz00_1880 = 
CAR(BgL_pairz00_821); } 
BgL_testz00_1879 = 
NULLP(BgL_auxz00_1880); } 
if(BgL_testz00_1879)
{ /* Ieee/control.scm 138 */
BgL_aux1591z00_1132 = BgL_l0z00_453; }  else 
{ /* Ieee/control.scm 138 */
{ /* Ieee/control.scm 141 */
obj_t BgL_arg1261z00_458;obj_t BgL_arg1262z00_459;
{ /* Ieee/control.scm 141 */
obj_t BgL_pairz00_823;
if(
PAIRP(BgL_lz00_455))
{ /* Ieee/control.scm 141 */
BgL_pairz00_823 = BgL_lz00_455; }  else 
{ 
obj_t BgL_auxz00_1891;
BgL_auxz00_1891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5054)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_455); 
FAILURE(BgL_auxz00_1891,BFALSE,BFALSE);} 
BgL_arg1261z00_458 = 
CAR(BgL_pairz00_823); } 
{ /* Ieee/control.scm 141 */
obj_t BgL_valz00_1125;
BgL_valz00_1125 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_455); 
{ /* Ieee/control.scm 141 */
int BgL_len1585z00_1126;
BgL_len1585z00_1126 = 
(int)(
bgl_list_length(BgL_valz00_1125)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_11, BgL_len1585z00_1126))
{ /* Ieee/control.scm 141 */
BgL_arg1262z00_459 = 
apply(BgL_fz00_11, BgL_valz00_1125); }  else 
{ /* Ieee/control.scm 141 */
FAILURE(BGl_symbol1825z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
{ /* Ieee/control.scm 141 */
obj_t BgL_pairz00_824;
if(
PAIRP(BgL_arg1261z00_458))
{ /* Ieee/control.scm 141 */
BgL_pairz00_824 = BgL_arg1261z00_458; }  else 
{ 
obj_t BgL_auxz00_1906;
BgL_auxz00_1906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5055)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_arg1261z00_458); 
FAILURE(BgL_auxz00_1906,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_824, BgL_arg1262z00_459); } } 
{ 
obj_t BgL_lz00_1911;
BgL_lz00_1911 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_455); 
BgL_lz00_455 = BgL_lz00_1911; 
goto BgL_zc3anonymousza31259ze3z83_456;} } } 
{ /* Ieee/control.scm 137 */
bool_t BgL_testz00_1913;
if(
PAIRP(BgL_aux1591z00_1132))
{ /* Ieee/control.scm 137 */
BgL_testz00_1913 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 137 */
BgL_testz00_1913 = 
NULLP(BgL_aux1591z00_1132)
; } 
if(BgL_testz00_1913)
{ /* Ieee/control.scm 137 */
return BgL_aux1591z00_1132;}  else 
{ 
obj_t BgL_auxz00_1917;
BgL_auxz00_1917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4973)), BGl_string1824z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1591z00_1132); 
FAILURE(BgL_auxz00_1917,BFALSE,BFALSE);} } } } } } } 
}



/* _map! */
obj_t BGl__mapz12z12zz__r4_control_features_6_9z00(obj_t BgL_envz00_995, obj_t BgL_fz00_996, obj_t BgL_lz00_997)
{ AN_OBJECT;
{ /* Ieee/control.scm 129 */
{ /* Ieee/control.scm 131 */
obj_t BgL_auxz00_1921;
if(
PROCEDUREP(BgL_fz00_996))
{ /* Ieee/control.scm 131 */
BgL_auxz00_1921 = BgL_fz00_996
; }  else 
{ 
obj_t BgL_auxz00_1924;
BgL_auxz00_1924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)4859)), BGl_string1826z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_996); 
FAILURE(BgL_auxz00_1924,BFALSE,BFALSE);} 
return 
BGl_mapz12z12zz__r4_control_features_6_9z00(BgL_auxz00_1921, BgL_lz00_997);} } 
}



/* loop'''' */
obj_t BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_1052, obj_t BgL_lz00_465)
{ AN_OBJECT;
{ /* Ieee/control.scm 148 */
if(
NULLP(BgL_lz00_465))
{ /* Ieee/control.scm 149 */
return BNIL;}  else 
{ /* Ieee/control.scm 151 */
obj_t BgL_arg1268z00_468;obj_t BgL_arg1269z00_469;
{ /* Ieee/control.scm 151 */
obj_t BgL_arg1270z00_470;
{ /* Ieee/control.scm 151 */
obj_t BgL_pairz00_827;
if(
PAIRP(BgL_lz00_465))
{ /* Ieee/control.scm 151 */
BgL_pairz00_827 = BgL_lz00_465; }  else 
{ 
obj_t BgL_auxz00_1933;
BgL_auxz00_1933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5432)), BGl_string1827z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_465); 
FAILURE(BgL_auxz00_1933,BFALSE,BFALSE);} 
BgL_arg1270z00_470 = 
CAR(BgL_pairz00_827); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1052, ((long)1)))
{ /* Ieee/control.scm 151 */
BgL_arg1268z00_468 = 
PROCEDURE_ENTRY(BgL_fz00_1052)(BgL_fz00_1052, BgL_arg1270z00_470, BEOA); }  else 
{ /* Ieee/control.scm 151 */
FAILURE(BGl_string1828z00zz__r4_control_features_6_9z00,BGl_list1829z00zz__r4_control_features_6_9z00,BgL_fz00_1052);} } 
BgL_arg1269z00_469 = 
BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(BgL_fz00_1052, 
CDR(BgL_lz00_465)); 
{ /* Ieee/control.scm 151 */
obj_t BgL_auxz00_1945;
{ /* Ieee/control.scm 151 */
bool_t BgL_testz00_1946;
if(
PAIRP(BgL_arg1268z00_468))
{ /* Ieee/control.scm 151 */
BgL_testz00_1946 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 151 */
BgL_testz00_1946 = 
NULLP(BgL_arg1268z00_468)
; } 
if(BgL_testz00_1946)
{ /* Ieee/control.scm 151 */
BgL_auxz00_1945 = BgL_arg1268z00_468
; }  else 
{ 
obj_t BgL_auxz00_1950;
BgL_auxz00_1950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5416)), BGl_string1827z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1268z00_468); 
FAILURE(BgL_auxz00_1950,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_1945, BgL_arg1269z00_469);} } } 
}



/* append-map */
BGL_EXPORTED_DEF obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t BgL_fz00_15, obj_t BgL_lz00_16)
{ AN_OBJECT;
{ /* Ieee/control.scm 156 */
if(
NULLP(BgL_lz00_16))
{ /* Ieee/control.scm 158 */
return BNIL;}  else 
{ /* Ieee/control.scm 160 */
bool_t BgL_testz00_1957;
{ /* Ieee/control.scm 160 */
obj_t BgL_auxz00_1958;
{ /* Ieee/control.scm 160 */
obj_t BgL_pairz00_830;
if(
PAIRP(BgL_lz00_16))
{ /* Ieee/control.scm 160 */
BgL_pairz00_830 = BgL_lz00_16; }  else 
{ 
obj_t BgL_auxz00_1961;
BgL_auxz00_1961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5762)), BGl_string1832z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_16); 
FAILURE(BgL_auxz00_1961,BFALSE,BFALSE);} 
BgL_auxz00_1958 = 
CDR(BgL_pairz00_830); } 
BgL_testz00_1957 = 
NULLP(BgL_auxz00_1958); } 
if(BgL_testz00_1957)
{ /* Ieee/control.scm 161 */
obj_t BgL_arg1274z00_475;
{ /* Ieee/control.scm 161 */
obj_t BgL_pairz00_832;
if(
PAIRP(BgL_lz00_16))
{ /* Ieee/control.scm 161 */
BgL_pairz00_832 = BgL_lz00_16; }  else 
{ 
obj_t BgL_auxz00_1969;
BgL_auxz00_1969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5793)), BGl_string1832z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_16); 
FAILURE(BgL_auxz00_1969,BFALSE,BFALSE);} 
BgL_arg1274z00_475 = 
CAR(BgL_pairz00_832); } 
{ /* Ieee/control.scm 161 */
obj_t BgL_aux1607z00_1149;
BgL_aux1607z00_1149 = 
BGl_loopz72z72z72z72z00zz__r4_control_features_6_9z00(BgL_fz00_15, BgL_arg1274z00_475); 
{ /* Ieee/control.scm 161 */
bool_t BgL_testz00_1975;
if(
PAIRP(BgL_aux1607z00_1149))
{ /* Ieee/control.scm 161 */
BgL_testz00_1975 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 161 */
BgL_testz00_1975 = 
NULLP(BgL_aux1607z00_1149)
; } 
if(BgL_testz00_1975)
{ /* Ieee/control.scm 161 */
return BgL_aux1607z00_1149;}  else 
{ 
obj_t BgL_auxz00_1979;
BgL_auxz00_1979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5773)), BGl_string1832z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1607z00_1149); 
FAILURE(BgL_auxz00_1979,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/control.scm 163 */
obj_t BgL_aux1609z00_1151;
BgL_aux1609z00_1151 = 
BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_15, BgL_lz00_16); 
{ /* Ieee/control.scm 163 */
bool_t BgL_testz00_1984;
if(
PAIRP(BgL_aux1609z00_1151))
{ /* Ieee/control.scm 163 */
BgL_testz00_1984 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 163 */
BgL_testz00_1984 = 
NULLP(BgL_aux1609z00_1151)
; } 
if(BgL_testz00_1984)
{ /* Ieee/control.scm 163 */
return BgL_aux1609z00_1151;}  else 
{ 
obj_t BgL_auxz00_1988;
BgL_auxz00_1988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5817)), BGl_string1832z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1609z00_1151); 
FAILURE(BgL_auxz00_1988,BFALSE,BFALSE);} } } } } 
}



/* loop''' */
obj_t BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(obj_t BgL_fz00_1051, obj_t BgL_lz00_477)
{ AN_OBJECT;
{ /* Ieee/control.scm 163 */
{ /* Ieee/control.scm 164 */
bool_t BgL_testz00_1992;
{ /* Ieee/control.scm 164 */
obj_t BgL_auxz00_1993;
{ /* Ieee/control.scm 164 */
obj_t BgL_pairz00_833;
if(
PAIRP(BgL_lz00_477))
{ /* Ieee/control.scm 164 */
BgL_pairz00_833 = BgL_lz00_477; }  else 
{ 
obj_t BgL_auxz00_1996;
BgL_auxz00_1996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5854)), BGl_string1833z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_477); 
FAILURE(BgL_auxz00_1996,BFALSE,BFALSE);} 
BgL_auxz00_1993 = 
CAR(BgL_pairz00_833); } 
BgL_testz00_1992 = 
NULLP(BgL_auxz00_1993); } 
if(BgL_testz00_1992)
{ /* Ieee/control.scm 164 */
return BNIL;}  else 
{ /* Ieee/control.scm 166 */
obj_t BgL_arg1277z00_480;obj_t BgL_arg1278z00_481;
{ /* Ieee/control.scm 166 */
obj_t BgL_valz00_1158;
{ /* Ieee/control.scm 166 */
obj_t BgL_auxz00_2002;
{ /* Ieee/control.scm 166 */
bool_t BgL_testz00_2003;
if(
PAIRP(BgL_lz00_477))
{ /* Ieee/control.scm 166 */
BgL_testz00_2003 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 166 */
BgL_testz00_2003 = 
NULLP(BgL_lz00_477)
; } 
if(BgL_testz00_2003)
{ /* Ieee/control.scm 166 */
BgL_auxz00_2002 = BgL_lz00_477
; }  else 
{ 
obj_t BgL_auxz00_2007;
BgL_auxz00_2007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5904)), BGl_string1833z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_477); 
FAILURE(BgL_auxz00_2007,BFALSE,BFALSE);} } 
BgL_valz00_1158 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2002); } 
{ /* Ieee/control.scm 166 */
int BgL_len1615z00_1159;
BgL_len1615z00_1159 = 
(int)(
bgl_list_length(BgL_valz00_1158)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1051, BgL_len1615z00_1159))
{ /* Ieee/control.scm 166 */
BgL_arg1277z00_480 = 
apply(BgL_fz00_1051, BgL_valz00_1158); }  else 
{ /* Ieee/control.scm 166 */
FAILURE(BGl_symbol1834z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
{ /* Ieee/control.scm 166 */
obj_t BgL_arg1279z00_482;
{ /* Ieee/control.scm 166 */
obj_t BgL_auxz00_2019;
{ /* Ieee/control.scm 166 */
bool_t BgL_testz00_2020;
if(
PAIRP(BgL_lz00_477))
{ /* Ieee/control.scm 166 */
BgL_testz00_2020 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 166 */
BgL_testz00_2020 = 
NULLP(BgL_lz00_477)
; } 
if(BgL_testz00_2020)
{ /* Ieee/control.scm 166 */
BgL_auxz00_2019 = BgL_lz00_477
; }  else 
{ 
obj_t BgL_auxz00_2024;
BgL_auxz00_2024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5925)), BGl_string1833z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_477); 
FAILURE(BgL_auxz00_2024,BFALSE,BFALSE);} } 
BgL_arg1279z00_482 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2019); } 
BgL_arg1278z00_481 = 
BGl_loopz72z72z72z72zz__r4_control_features_6_9z00(BgL_fz00_1051, BgL_arg1279z00_482); } 
{ /* Ieee/control.scm 166 */
obj_t BgL_auxz00_2030;
{ /* Ieee/control.scm 166 */
bool_t BgL_testz00_2031;
if(
PAIRP(BgL_arg1277z00_480))
{ /* Ieee/control.scm 166 */
BgL_testz00_2031 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 166 */
BgL_testz00_2031 = 
NULLP(BgL_arg1277z00_480)
; } 
if(BgL_testz00_2031)
{ /* Ieee/control.scm 166 */
BgL_auxz00_2030 = BgL_arg1277z00_480
; }  else 
{ 
obj_t BgL_auxz00_2035;
BgL_auxz00_2035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5876)), BGl_string1833z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1277z00_480); 
FAILURE(BgL_auxz00_2035,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_2030, BgL_arg1278z00_481);} } } } 
}



/* _append-map */
obj_t BGl__appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_998, obj_t BgL_fz00_999, obj_t BgL_lz00_1000)
{ AN_OBJECT;
{ /* Ieee/control.scm 156 */
{ /* Ieee/control.scm 158 */
obj_t BgL_auxz00_2040;
if(
PROCEDUREP(BgL_fz00_999))
{ /* Ieee/control.scm 158 */
BgL_auxz00_2040 = BgL_fz00_999
; }  else 
{ 
obj_t BgL_auxz00_2043;
BgL_auxz00_2043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)5721)), BGl_string1835z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_999); 
FAILURE(BgL_auxz00_2043,BFALSE,BFALSE);} 
return 
BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_2040, BgL_lz00_1000);} } 
}



/* loop'' */
obj_t BGl_loopz72z72z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_1050, obj_t BgL_lz00_487)
{ AN_OBJECT;
{ /* Ieee/control.scm 172 */
if(
NULLP(BgL_lz00_487))
{ /* Ieee/control.scm 173 */
return BNIL;}  else 
{ /* Ieee/control.scm 175 */
obj_t BgL_arg1284z00_490;obj_t BgL_arg1285z00_491;
{ /* Ieee/control.scm 175 */
obj_t BgL_arg1286z00_492;
{ /* Ieee/control.scm 175 */
obj_t BgL_pairz00_836;
if(
PAIRP(BgL_lz00_487))
{ /* Ieee/control.scm 175 */
BgL_pairz00_836 = BgL_lz00_487; }  else 
{ 
obj_t BgL_auxz00_2052;
BgL_auxz00_2052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6253)), BGl_string1836z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_487); 
FAILURE(BgL_auxz00_2052,BFALSE,BFALSE);} 
BgL_arg1286z00_492 = 
CAR(BgL_pairz00_836); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1050, ((long)1)))
{ /* Ieee/control.scm 175 */
BgL_arg1284z00_490 = 
PROCEDURE_ENTRY(BgL_fz00_1050)(BgL_fz00_1050, BgL_arg1286z00_492, BEOA); }  else 
{ /* Ieee/control.scm 175 */
FAILURE(BGl_string1837z00zz__r4_control_features_6_9z00,BGl_list1838z00zz__r4_control_features_6_9z00,BgL_fz00_1050);} } 
BgL_arg1285z00_491 = 
BGl_loopz72z72z00zz__r4_control_features_6_9z00(BgL_fz00_1050, 
CDR(BgL_lz00_487)); 
{ /* Ieee/control.scm 175 */
obj_t BgL_auxz00_2073;obj_t BgL_auxz00_2064;
{ /* Ieee/control.scm 175 */
bool_t BgL_testz00_2074;
if(
PAIRP(BgL_arg1285z00_491))
{ /* Ieee/control.scm 175 */
BgL_testz00_2074 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 175 */
BgL_testz00_2074 = 
NULLP(BgL_arg1285z00_491)
; } 
if(BgL_testz00_2074)
{ /* Ieee/control.scm 175 */
BgL_auxz00_2073 = BgL_arg1285z00_491
; }  else 
{ 
obj_t BgL_auxz00_2078;
BgL_auxz00_2078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6236)), BGl_string1836z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1285z00_491); 
FAILURE(BgL_auxz00_2078,BFALSE,BFALSE);} } 
{ /* Ieee/control.scm 175 */
bool_t BgL_testz00_2065;
if(
PAIRP(BgL_arg1284z00_490))
{ /* Ieee/control.scm 175 */
BgL_testz00_2065 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 175 */
BgL_testz00_2065 = 
NULLP(BgL_arg1284z00_490)
; } 
if(BgL_testz00_2065)
{ /* Ieee/control.scm 175 */
BgL_auxz00_2064 = BgL_arg1284z00_490
; }  else 
{ 
obj_t BgL_auxz00_2069;
BgL_auxz00_2069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6236)), BGl_string1836z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1284z00_490); 
FAILURE(BgL_auxz00_2069,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2064, BgL_auxz00_2073);} } } 
}



/* append-map! */
BGL_EXPORTED_DEF obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t BgL_fz00_19, obj_t BgL_lz00_20)
{ AN_OBJECT;
{ /* Ieee/control.scm 180 */
if(
NULLP(BgL_lz00_20))
{ /* Ieee/control.scm 182 */
return BNIL;}  else 
{ /* Ieee/control.scm 184 */
bool_t BgL_testz00_2085;
{ /* Ieee/control.scm 184 */
obj_t BgL_auxz00_2086;
{ /* Ieee/control.scm 184 */
obj_t BgL_pairz00_839;
if(
PAIRP(BgL_lz00_20))
{ /* Ieee/control.scm 184 */
BgL_pairz00_839 = BgL_lz00_20; }  else 
{ 
obj_t BgL_auxz00_2089;
BgL_auxz00_2089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6584)), BGl_string1841z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_20); 
FAILURE(BgL_auxz00_2089,BFALSE,BFALSE);} 
BgL_auxz00_2086 = 
CDR(BgL_pairz00_839); } 
BgL_testz00_2085 = 
NULLP(BgL_auxz00_2086); } 
if(BgL_testz00_2085)
{ /* Ieee/control.scm 185 */
obj_t BgL_arg1290z00_497;
{ /* Ieee/control.scm 185 */
obj_t BgL_pairz00_841;
if(
PAIRP(BgL_lz00_20))
{ /* Ieee/control.scm 185 */
BgL_pairz00_841 = BgL_lz00_20; }  else 
{ 
obj_t BgL_auxz00_2097;
BgL_auxz00_2097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6616)), BGl_string1841z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_20); 
FAILURE(BgL_auxz00_2097,BFALSE,BFALSE);} 
BgL_arg1290z00_497 = 
CAR(BgL_pairz00_841); } 
{ /* Ieee/control.scm 185 */
obj_t BgL_aux1637z00_1182;
BgL_aux1637z00_1182 = 
BGl_loopz72z72z00zz__r4_control_features_6_9z00(BgL_fz00_19, BgL_arg1290z00_497); 
{ /* Ieee/control.scm 185 */
bool_t BgL_testz00_2103;
if(
PAIRP(BgL_aux1637z00_1182))
{ /* Ieee/control.scm 185 */
BgL_testz00_2103 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 185 */
BgL_testz00_2103 = 
NULLP(BgL_aux1637z00_1182)
; } 
if(BgL_testz00_2103)
{ /* Ieee/control.scm 185 */
return BgL_aux1637z00_1182;}  else 
{ 
obj_t BgL_auxz00_2107;
BgL_auxz00_2107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6595)), BGl_string1841z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1637z00_1182); 
FAILURE(BgL_auxz00_2107,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/control.scm 187 */
obj_t BgL_aux1639z00_1184;
BgL_aux1639z00_1184 = 
BGl_loopz72z72zz__r4_control_features_6_9z00(BgL_fz00_19, BgL_lz00_20); 
{ /* Ieee/control.scm 187 */
bool_t BgL_testz00_2112;
if(
PAIRP(BgL_aux1639z00_1184))
{ /* Ieee/control.scm 187 */
BgL_testz00_2112 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 187 */
BgL_testz00_2112 = 
NULLP(BgL_aux1639z00_1184)
; } 
if(BgL_testz00_2112)
{ /* Ieee/control.scm 187 */
return BgL_aux1639z00_1184;}  else 
{ 
obj_t BgL_auxz00_2116;
BgL_auxz00_2116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6640)), BGl_string1841z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1639z00_1184); 
FAILURE(BgL_auxz00_2116,BFALSE,BFALSE);} } } } } 
}



/* loop' */
obj_t BGl_loopz72z72zz__r4_control_features_6_9z00(obj_t BgL_fz00_1049, obj_t BgL_lz00_499)
{ AN_OBJECT;
{ /* Ieee/control.scm 187 */
{ /* Ieee/control.scm 188 */
bool_t BgL_testz00_2120;
{ /* Ieee/control.scm 188 */
obj_t BgL_auxz00_2121;
{ /* Ieee/control.scm 188 */
obj_t BgL_pairz00_842;
if(
PAIRP(BgL_lz00_499))
{ /* Ieee/control.scm 188 */
BgL_pairz00_842 = BgL_lz00_499; }  else 
{ 
obj_t BgL_auxz00_2124;
BgL_auxz00_2124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6677)), BGl_string1842z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_499); 
FAILURE(BgL_auxz00_2124,BFALSE,BFALSE);} 
BgL_auxz00_2121 = 
CAR(BgL_pairz00_842); } 
BgL_testz00_2120 = 
NULLP(BgL_auxz00_2121); } 
if(BgL_testz00_2120)
{ /* Ieee/control.scm 188 */
return BNIL;}  else 
{ /* Ieee/control.scm 190 */
obj_t BgL_arg1293z00_502;obj_t BgL_arg1294z00_503;
{ /* Ieee/control.scm 190 */
obj_t BgL_valz00_1191;
{ /* Ieee/control.scm 190 */
obj_t BgL_auxz00_2130;
{ /* Ieee/control.scm 190 */
bool_t BgL_testz00_2131;
if(
PAIRP(BgL_lz00_499))
{ /* Ieee/control.scm 190 */
BgL_testz00_2131 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 190 */
BgL_testz00_2131 = 
NULLP(BgL_lz00_499)
; } 
if(BgL_testz00_2131)
{ /* Ieee/control.scm 190 */
BgL_auxz00_2130 = BgL_lz00_499
; }  else 
{ 
obj_t BgL_auxz00_2135;
BgL_auxz00_2135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6728)), BGl_string1842z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_499); 
FAILURE(BgL_auxz00_2135,BFALSE,BFALSE);} } 
BgL_valz00_1191 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2130); } 
{ /* Ieee/control.scm 190 */
int BgL_len1645z00_1192;
BgL_len1645z00_1192 = 
(int)(
bgl_list_length(BgL_valz00_1191)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1049, BgL_len1645z00_1192))
{ /* Ieee/control.scm 190 */
BgL_arg1293z00_502 = 
apply(BgL_fz00_1049, BgL_valz00_1191); }  else 
{ /* Ieee/control.scm 190 */
FAILURE(BGl_symbol1843z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
{ /* Ieee/control.scm 190 */
obj_t BgL_arg1295z00_504;
{ /* Ieee/control.scm 190 */
obj_t BgL_auxz00_2147;
{ /* Ieee/control.scm 190 */
bool_t BgL_testz00_2148;
if(
PAIRP(BgL_lz00_499))
{ /* Ieee/control.scm 190 */
BgL_testz00_2148 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 190 */
BgL_testz00_2148 = 
NULLP(BgL_lz00_499)
; } 
if(BgL_testz00_2148)
{ /* Ieee/control.scm 190 */
BgL_auxz00_2147 = BgL_lz00_499
; }  else 
{ 
obj_t BgL_auxz00_2152;
BgL_auxz00_2152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6749)), BGl_string1842z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_499); 
FAILURE(BgL_auxz00_2152,BFALSE,BFALSE);} } 
BgL_arg1295z00_504 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2147); } 
BgL_arg1294z00_503 = 
BGl_loopz72z72zz__r4_control_features_6_9z00(BgL_fz00_1049, BgL_arg1295z00_504); } 
{ /* Ieee/control.scm 190 */
obj_t BgL_auxz00_2167;obj_t BgL_auxz00_2158;
{ /* Ieee/control.scm 190 */
bool_t BgL_testz00_2168;
if(
PAIRP(BgL_arg1294z00_503))
{ /* Ieee/control.scm 190 */
BgL_testz00_2168 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 190 */
BgL_testz00_2168 = 
NULLP(BgL_arg1294z00_503)
; } 
if(BgL_testz00_2168)
{ /* Ieee/control.scm 190 */
BgL_auxz00_2167 = BgL_arg1294z00_503
; }  else 
{ 
obj_t BgL_auxz00_2172;
BgL_auxz00_2172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6699)), BGl_string1842z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1294z00_503); 
FAILURE(BgL_auxz00_2172,BFALSE,BFALSE);} } 
{ /* Ieee/control.scm 190 */
bool_t BgL_testz00_2159;
if(
PAIRP(BgL_arg1293z00_502))
{ /* Ieee/control.scm 190 */
BgL_testz00_2159 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 190 */
BgL_testz00_2159 = 
NULLP(BgL_arg1293z00_502)
; } 
if(BgL_testz00_2159)
{ /* Ieee/control.scm 190 */
BgL_auxz00_2158 = BgL_arg1293z00_502
; }  else 
{ 
obj_t BgL_auxz00_2163;
BgL_auxz00_2163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6699)), BGl_string1842z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1293z00_502); 
FAILURE(BgL_auxz00_2163,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2158, BgL_auxz00_2167);} } } } 
}



/* _append-map! */
obj_t BGl__appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t BgL_envz00_1001, obj_t BgL_fz00_1002, obj_t BgL_lz00_1003)
{ AN_OBJECT;
{ /* Ieee/control.scm 180 */
{ /* Ieee/control.scm 182 */
obj_t BgL_auxz00_2177;
if(
PROCEDUREP(BgL_fz00_1002))
{ /* Ieee/control.scm 182 */
BgL_auxz00_2177 = BgL_fz00_1002
; }  else 
{ 
obj_t BgL_auxz00_2180;
BgL_auxz00_2180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)6543)), BGl_string1844z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_1002); 
FAILURE(BgL_auxz00_2180,BFALSE,BFALSE);} 
return 
BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(BgL_auxz00_2177, BgL_lz00_1003);} } 
}



/* filter-map-2 */
obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_21, obj_t BgL_lz00_22)
{ AN_OBJECT;
{ /* Ieee/control.scm 195 */
{ 
obj_t BgL_lz00_510;obj_t BgL_resz00_511;
BgL_lz00_510 = BgL_lz00_22; 
BgL_resz00_511 = BNIL; 
BgL_zc3anonymousza31298ze3z83_512:
if(
NULLP(BgL_lz00_510))
{ /* Ieee/control.scm 199 */
obj_t BgL_auxz00_2187;
{ /* Ieee/control.scm 199 */
bool_t BgL_testz00_2188;
if(
PAIRP(BgL_resz00_511))
{ /* Ieee/control.scm 199 */
BgL_testz00_2188 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 199 */
BgL_testz00_2188 = 
NULLP(BgL_resz00_511)
; } 
if(BgL_testz00_2188)
{ /* Ieee/control.scm 199 */
BgL_auxz00_2187 = BgL_resz00_511
; }  else 
{ 
obj_t BgL_auxz00_2192;
BgL_auxz00_2192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7082)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_resz00_511); 
FAILURE(BgL_auxz00_2192,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_2187);}  else 
{ /* Ieee/control.scm 200 */
obj_t BgL_hdz00_514;
{ /* Ieee/control.scm 200 */
obj_t BgL_arg1303z00_518;
{ /* Ieee/control.scm 200 */
obj_t BgL_pairz00_845;
if(
PAIRP(BgL_lz00_510))
{ /* Ieee/control.scm 200 */
BgL_pairz00_845 = BgL_lz00_510; }  else 
{ 
obj_t BgL_auxz00_2199;
BgL_auxz00_2199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7108)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_510); 
FAILURE(BgL_auxz00_2199,BFALSE,BFALSE);} 
BgL_arg1303z00_518 = 
CAR(BgL_pairz00_845); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_21, ((long)1)))
{ /* Ieee/control.scm 200 */
BgL_hdz00_514 = 
PROCEDURE_ENTRY(BgL_fz00_21)(BgL_fz00_21, BgL_arg1303z00_518, BEOA); }  else 
{ /* Ieee/control.scm 200 */
FAILURE(BGl_string1800z00zz__r4_control_features_6_9z00,BGl_list1845z00zz__r4_control_features_6_9z00,BgL_fz00_21);} } 
if(
CBOOL(BgL_hdz00_514))
{ /* Ieee/control.scm 202 */
obj_t BgL_arg1300z00_515;obj_t BgL_arg1301z00_516;
BgL_arg1300z00_515 = 
CDR(BgL_lz00_510); 
BgL_arg1301z00_516 = 
MAKE_PAIR(BgL_hdz00_514, BgL_resz00_511); 
{ 
obj_t BgL_resz00_2214;obj_t BgL_lz00_2213;
BgL_lz00_2213 = BgL_arg1300z00_515; 
BgL_resz00_2214 = BgL_arg1301z00_516; 
BgL_resz00_511 = BgL_resz00_2214; 
BgL_lz00_510 = BgL_lz00_2213; 
goto BgL_zc3anonymousza31298ze3z83_512;} }  else 
{ 
obj_t BgL_lz00_2215;
BgL_lz00_2215 = 
CDR(BgL_lz00_510); 
BgL_lz00_510 = BgL_lz00_2215; 
goto BgL_zc3anonymousza31298ze3z83_512;} } } } 
}



/* filter-map */
BGL_EXPORTED_DEF obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t BgL_fz00_23, obj_t BgL_lz00_24)
{ AN_OBJECT;
{ /* Ieee/control.scm 208 */
if(
NULLP(BgL_lz00_24))
{ /* Ieee/control.scm 210 */
return BNIL;}  else 
{ /* Ieee/control.scm 212 */
bool_t BgL_testz00_2219;
{ /* Ieee/control.scm 212 */
obj_t BgL_auxz00_2220;
{ /* Ieee/control.scm 212 */
obj_t BgL_pairz00_849;
if(
PAIRP(BgL_lz00_24))
{ /* Ieee/control.scm 212 */
BgL_pairz00_849 = BgL_lz00_24; }  else 
{ 
obj_t BgL_auxz00_2223;
BgL_auxz00_2223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7493)), BGl_string1848z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_24); 
FAILURE(BgL_auxz00_2223,BFALSE,BFALSE);} 
BgL_auxz00_2220 = 
CDR(BgL_pairz00_849); } 
BgL_testz00_2219 = 
NULLP(BgL_auxz00_2220); } 
if(BgL_testz00_2219)
{ /* Ieee/control.scm 213 */
obj_t BgL_arg1306z00_522;
{ /* Ieee/control.scm 213 */
obj_t BgL_pairz00_851;
if(
PAIRP(BgL_lz00_24))
{ /* Ieee/control.scm 213 */
BgL_pairz00_851 = BgL_lz00_24; }  else 
{ 
obj_t BgL_auxz00_2231;
BgL_auxz00_2231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7525)), BGl_string1848z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_24); 
FAILURE(BgL_auxz00_2231,BFALSE,BFALSE);} 
BgL_arg1306z00_522 = 
CAR(BgL_pairz00_851); } 
return 
BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(BgL_fz00_23, BgL_arg1306z00_522);}  else 
{ /* Ieee/control.scm 215 */
obj_t BgL_aux1669z00_1217;
BgL_aux1669z00_1217 = 
BGl_loopz00zz__r4_control_features_6_9z00(BgL_fz00_23, BgL_lz00_24); 
{ /* Ieee/control.scm 215 */
bool_t BgL_testz00_2238;
if(
PAIRP(BgL_aux1669z00_1217))
{ /* Ieee/control.scm 215 */
BgL_testz00_2238 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 215 */
BgL_testz00_2238 = 
NULLP(BgL_aux1669z00_1217)
; } 
if(BgL_testz00_2238)
{ /* Ieee/control.scm 215 */
return BgL_aux1669z00_1217;}  else 
{ 
obj_t BgL_auxz00_2242;
BgL_auxz00_2242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7549)), BGl_string1848z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1669z00_1217); 
FAILURE(BgL_auxz00_2242,BFALSE,BFALSE);} } } } } 
}



/* loop */
obj_t BGl_loopz00zz__r4_control_features_6_9z00(obj_t BgL_fz00_1048, obj_t BgL_lz00_524)
{ AN_OBJECT;
{ /* Ieee/control.scm 215 */
BGl_loopz00zz__r4_control_features_6_9z00:
{ /* Ieee/control.scm 216 */
bool_t BgL_testz00_2246;
{ /* Ieee/control.scm 216 */
obj_t BgL_auxz00_2247;
{ /* Ieee/control.scm 216 */
obj_t BgL_pairz00_852;
if(
PAIRP(BgL_lz00_524))
{ /* Ieee/control.scm 216 */
BgL_pairz00_852 = BgL_lz00_524; }  else 
{ 
obj_t BgL_auxz00_2250;
BgL_auxz00_2250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7586)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_524); 
FAILURE(BgL_auxz00_2250,BFALSE,BFALSE);} 
BgL_auxz00_2247 = 
CAR(BgL_pairz00_852); } 
BgL_testz00_2246 = 
NULLP(BgL_auxz00_2247); } 
if(BgL_testz00_2246)
{ /* Ieee/control.scm 216 */
return BNIL;}  else 
{ /* Ieee/control.scm 218 */
obj_t BgL_hdz00_527;
{ /* Ieee/control.scm 218 */
obj_t BgL_valz00_1224;
{ /* Ieee/control.scm 218 */
obj_t BgL_auxz00_2256;
{ /* Ieee/control.scm 218 */
bool_t BgL_testz00_2257;
if(
PAIRP(BgL_lz00_524))
{ /* Ieee/control.scm 218 */
BgL_testz00_2257 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 218 */
BgL_testz00_2257 = 
NULLP(BgL_lz00_524)
; } 
if(BgL_testz00_2257)
{ /* Ieee/control.scm 218 */
BgL_auxz00_2256 = BgL_lz00_524
; }  else 
{ 
obj_t BgL_auxz00_2261;
BgL_auxz00_2261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7638)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_524); 
FAILURE(BgL_auxz00_2261,BFALSE,BFALSE);} } 
BgL_valz00_1224 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2256); } 
{ /* Ieee/control.scm 218 */
int BgL_len1675z00_1225;
BgL_len1675z00_1225 = 
(int)(
bgl_list_length(BgL_valz00_1224)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_1048, BgL_len1675z00_1225))
{ /* Ieee/control.scm 218 */
BgL_hdz00_527 = 
apply(BgL_fz00_1048, BgL_valz00_1224); }  else 
{ /* Ieee/control.scm 218 */
FAILURE(BGl_symbol1825z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
if(
CBOOL(BgL_hdz00_527))
{ /* Ieee/control.scm 220 */
obj_t BgL_arg1309z00_528;
{ /* Ieee/control.scm 220 */
obj_t BgL_arg1310z00_529;
{ /* Ieee/control.scm 220 */
obj_t BgL_auxz00_2275;
{ /* Ieee/control.scm 220 */
bool_t BgL_testz00_2276;
if(
PAIRP(BgL_lz00_524))
{ /* Ieee/control.scm 220 */
BgL_testz00_2276 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 220 */
BgL_testz00_2276 = 
NULLP(BgL_lz00_524)
; } 
if(BgL_testz00_2276)
{ /* Ieee/control.scm 220 */
BgL_auxz00_2275 = BgL_lz00_524
; }  else 
{ 
obj_t BgL_auxz00_2280;
BgL_auxz00_2280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7687)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_524); 
FAILURE(BgL_auxz00_2280,BFALSE,BFALSE);} } 
BgL_arg1310z00_529 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2275); } 
BgL_arg1309z00_528 = 
BGl_loopz00zz__r4_control_features_6_9z00(BgL_fz00_1048, BgL_arg1310z00_529); } 
return 
MAKE_PAIR(BgL_hdz00_527, BgL_arg1309z00_528);}  else 
{ /* Ieee/control.scm 221 */
obj_t BgL_arg1311z00_530;
{ /* Ieee/control.scm 221 */
obj_t BgL_auxz00_2287;
{ /* Ieee/control.scm 221 */
bool_t BgL_testz00_2288;
if(
PAIRP(BgL_lz00_524))
{ /* Ieee/control.scm 221 */
BgL_testz00_2288 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 221 */
BgL_testz00_2288 = 
NULLP(BgL_lz00_524)
; } 
if(BgL_testz00_2288)
{ /* Ieee/control.scm 221 */
BgL_auxz00_2287 = BgL_lz00_524
; }  else 
{ 
obj_t BgL_auxz00_2292;
BgL_auxz00_2292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7716)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_524); 
FAILURE(BgL_auxz00_2292,BFALSE,BFALSE);} } 
BgL_arg1311z00_530 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2287); } 
{ 
obj_t BgL_lz00_2297;
BgL_lz00_2297 = BgL_arg1311z00_530; 
BgL_lz00_524 = BgL_lz00_2297; 
goto BGl_loopz00zz__r4_control_features_6_9z00;} } } } } 
}



/* _filter-map */
obj_t BGl__filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1004, obj_t BgL_fz00_1005, obj_t BgL_lz00_1006)
{ AN_OBJECT;
{ /* Ieee/control.scm 208 */
{ /* Ieee/control.scm 210 */
obj_t BgL_auxz00_2298;
if(
PROCEDUREP(BgL_fz00_1005))
{ /* Ieee/control.scm 210 */
BgL_auxz00_2298 = BgL_fz00_1005
; }  else 
{ 
obj_t BgL_auxz00_2301;
BgL_auxz00_2301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)7452)), BGl_string1849z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_1005); 
FAILURE(BgL_auxz00_2301,BFALSE,BFALSE);} 
return 
BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_2298, BgL_lz00_1006);} } 
}



/* for-each-2 */
BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_25, obj_t BgL_lz00_26)
{ AN_OBJECT;
{ /* Ieee/control.scm 226 */
{ 
obj_t BgL_lz00_535;
BgL_lz00_535 = BgL_lz00_26; 
BgL_zc3anonymousza31314ze3z83_536:
if(
NULLP(BgL_lz00_535))
{ /* Ieee/control.scm 228 */
return BUNSPEC;}  else 
{ /* Ieee/control.scm 228 */
{ /* Ieee/control.scm 231 */
obj_t BgL_arg1316z00_538;
{ /* Ieee/control.scm 231 */
obj_t BgL_pairz00_855;
if(
PAIRP(BgL_lz00_535))
{ /* Ieee/control.scm 231 */
BgL_pairz00_855 = BgL_lz00_535; }  else 
{ 
obj_t BgL_auxz00_2310;
BgL_auxz00_2310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8056)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_535); 
FAILURE(BgL_auxz00_2310,BFALSE,BFALSE);} 
BgL_arg1316z00_538 = 
CAR(BgL_pairz00_855); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_25, ((long)1)))
{ /* Ieee/control.scm 231 */
PROCEDURE_ENTRY(BgL_fz00_25)(BgL_fz00_25, BgL_arg1316z00_538, BEOA); }  else 
{ /* Ieee/control.scm 231 */
FAILURE(BGl_string1800z00zz__r4_control_features_6_9z00,BGl_list1850z00zz__r4_control_features_6_9z00,BgL_fz00_25);} } 
{ 
obj_t BgL_lz00_2320;
BgL_lz00_2320 = 
CDR(BgL_lz00_535); 
BgL_lz00_535 = BgL_lz00_2320; 
goto BgL_zc3anonymousza31314ze3z83_536;} } } } 
}



/* _for-each-2 */
obj_t BGl__forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1007, obj_t BgL_fz00_1008, obj_t BgL_lz00_1009)
{ AN_OBJECT;
{ /* Ieee/control.scm 226 */
{ /* Ieee/control.scm 228 */
obj_t BgL_auxz00_2329;obj_t BgL_auxz00_2322;
{ /* Ieee/control.scm 228 */
bool_t BgL_testz00_2330;
if(
PAIRP(BgL_lz00_1009))
{ /* Ieee/control.scm 228 */
BgL_testz00_2330 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 228 */
BgL_testz00_2330 = 
NULLP(BgL_lz00_1009)
; } 
if(BgL_testz00_2330)
{ /* Ieee/control.scm 228 */
BgL_auxz00_2329 = BgL_lz00_1009
; }  else 
{ 
obj_t BgL_auxz00_2334;
BgL_auxz00_2334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8002)), BGl_string1853z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_1009); 
FAILURE(BgL_auxz00_2334,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_fz00_1008))
{ /* Ieee/control.scm 228 */
BgL_auxz00_2322 = BgL_fz00_1008
; }  else 
{ 
obj_t BgL_auxz00_2325;
BgL_auxz00_2325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8002)), BGl_string1853z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_1008); 
FAILURE(BgL_auxz00_2325,BFALSE,BFALSE);} 
return 
BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(BgL_auxz00_2322, BgL_auxz00_2329);} } 
}



/* for-each */
BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t BgL_fz00_27, obj_t BgL_lz00_28)
{ AN_OBJECT;
{ /* Ieee/control.scm 237 */
if(
NULLP(BgL_lz00_28))
{ /* Ieee/control.scm 239 */
return BUNSPEC;}  else 
{ /* Ieee/control.scm 241 */
bool_t BgL_testz00_2341;
{ /* Ieee/control.scm 241 */
obj_t BgL_auxz00_2342;
{ /* Ieee/control.scm 241 */
obj_t BgL_pairz00_858;
if(
PAIRP(BgL_lz00_28))
{ /* Ieee/control.scm 241 */
BgL_pairz00_858 = BgL_lz00_28; }  else 
{ 
obj_t BgL_auxz00_2345;
BgL_auxz00_2345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8399)), BGl_string1854z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_28); 
FAILURE(BgL_auxz00_2345,BFALSE,BFALSE);} 
BgL_auxz00_2342 = 
CDR(BgL_pairz00_858); } 
BgL_testz00_2341 = 
NULLP(BgL_auxz00_2342); } 
if(BgL_testz00_2341)
{ /* Ieee/control.scm 242 */
obj_t BgL_arg1320z00_543;
{ /* Ieee/control.scm 242 */
obj_t BgL_pairz00_860;
if(
PAIRP(BgL_lz00_28))
{ /* Ieee/control.scm 242 */
BgL_pairz00_860 = BgL_lz00_28; }  else 
{ 
obj_t BgL_auxz00_2353;
BgL_auxz00_2353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8429)), BGl_string1854z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_28); 
FAILURE(BgL_auxz00_2353,BFALSE,BFALSE);} 
BgL_arg1320z00_543 = 
CAR(BgL_pairz00_860); } 
{ /* Ieee/control.scm 242 */
obj_t BgL_auxz00_2358;
{ /* Ieee/control.scm 242 */
bool_t BgL_testz00_2359;
if(
PAIRP(BgL_arg1320z00_543))
{ /* Ieee/control.scm 242 */
BgL_testz00_2359 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 242 */
BgL_testz00_2359 = 
NULLP(BgL_arg1320z00_543)
; } 
if(BgL_testz00_2359)
{ /* Ieee/control.scm 242 */
BgL_auxz00_2358 = BgL_arg1320z00_543
; }  else 
{ 
obj_t BgL_auxz00_2363;
BgL_auxz00_2363 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8430)), BGl_string1854z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_arg1320z00_543); 
FAILURE(BgL_auxz00_2363,BFALSE,BFALSE);} } 
return 
BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(BgL_fz00_27, BgL_auxz00_2358);} }  else 
{ 
obj_t BgL_lz00_545;
BgL_lz00_545 = BgL_lz00_28; 
BgL_zc3anonymousza31321ze3z83_546:
{ /* Ieee/control.scm 245 */
bool_t BgL_testz00_2368;
{ /* Ieee/control.scm 245 */
obj_t BgL_auxz00_2369;
{ /* Ieee/control.scm 245 */
obj_t BgL_pairz00_861;
if(
PAIRP(BgL_lz00_545))
{ /* Ieee/control.scm 245 */
BgL_pairz00_861 = BgL_lz00_545; }  else 
{ 
obj_t BgL_auxz00_2372;
BgL_auxz00_2372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8490)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lz00_545); 
FAILURE(BgL_auxz00_2372,BFALSE,BFALSE);} 
BgL_auxz00_2369 = 
CAR(BgL_pairz00_861); } 
BgL_testz00_2368 = 
NULLP(BgL_auxz00_2369); } 
if(BgL_testz00_2368)
{ /* Ieee/control.scm 245 */
return BUNSPEC;}  else 
{ /* Ieee/control.scm 245 */
{ /* Ieee/control.scm 248 */
obj_t BgL_valz00_1255;
{ /* Ieee/control.scm 248 */
obj_t BgL_auxz00_2378;
{ /* Ieee/control.scm 248 */
bool_t BgL_testz00_2379;
if(
PAIRP(BgL_lz00_545))
{ /* Ieee/control.scm 248 */
BgL_testz00_2379 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 248 */
BgL_testz00_2379 = 
NULLP(BgL_lz00_545)
; } 
if(BgL_testz00_2379)
{ /* Ieee/control.scm 248 */
BgL_auxz00_2378 = BgL_lz00_545
; }  else 
{ 
obj_t BgL_auxz00_2383;
BgL_auxz00_2383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8551)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_545); 
FAILURE(BgL_auxz00_2383,BFALSE,BFALSE);} } 
BgL_valz00_1255 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2378); } 
{ /* Ieee/control.scm 248 */
int BgL_len1703z00_1256;
BgL_len1703z00_1256 = 
(int)(
bgl_list_length(BgL_valz00_1255)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_27, BgL_len1703z00_1256))
{ /* Ieee/control.scm 248 */
apply(BgL_fz00_27, BgL_valz00_1255); }  else 
{ /* Ieee/control.scm 248 */
FAILURE(BGl_symbol1825z00zz__r4_control_features_6_9z00,BGl_string1787z00zz__r4_control_features_6_9z00,BGl_list1812z00zz__r4_control_features_6_9z00);} } } 
{ /* Ieee/control.scm 249 */
obj_t BgL_arg1323z00_548;
{ /* Ieee/control.scm 249 */
obj_t BgL_auxz00_2395;
{ /* Ieee/control.scm 249 */
bool_t BgL_testz00_2396;
if(
PAIRP(BgL_lz00_545))
{ /* Ieee/control.scm 249 */
BgL_testz00_2396 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 249 */
BgL_testz00_2396 = 
NULLP(BgL_lz00_545)
; } 
if(BgL_testz00_2396)
{ /* Ieee/control.scm 249 */
BgL_auxz00_2395 = BgL_lz00_545
; }  else 
{ 
obj_t BgL_auxz00_2400;
BgL_auxz00_2400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8575)), BGl_string1798z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lz00_545); 
FAILURE(BgL_auxz00_2400,BFALSE,BFALSE);} } 
BgL_arg1323z00_548 = 
BGl_mapzd22zd2zz__r4_control_features_6_9z00(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_auxz00_2395); } 
{ 
obj_t BgL_lz00_2405;
BgL_lz00_2405 = BgL_arg1323z00_548; 
BgL_lz00_545 = BgL_lz00_2405; 
goto BgL_zc3anonymousza31321ze3z83_546;} } } } } } } 
}



/* _for-each */
obj_t BGl__forzd2eachzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1010, obj_t BgL_fz00_1011, obj_t BgL_lz00_1012)
{ AN_OBJECT;
{ /* Ieee/control.scm 237 */
{ /* Ieee/control.scm 239 */
obj_t BgL_auxz00_2406;
if(
PROCEDUREP(BgL_fz00_1011))
{ /* Ieee/control.scm 239 */
BgL_auxz00_2406 = BgL_fz00_1011
; }  else 
{ 
obj_t BgL_auxz00_2409;
BgL_auxz00_2409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8349)), BGl_string1855z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_fz00_1011); 
FAILURE(BgL_auxz00_2409,BFALSE,BFALSE);} 
return 
BGl_forzd2eachzd2zz__r4_control_features_6_9z00(BgL_auxz00_2406, BgL_lz00_1012);} } 
}



/* filter */
BGL_EXPORTED_DEF obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t BgL_predz00_29, obj_t BgL_lisz00_30)
{ AN_OBJECT;
{ /* Ieee/control.scm 254 */
{ /* Ieee/control.scm 255 */
obj_t BgL_aux1709z00_1262;
BgL_aux1709z00_1262 = 
BGl_recurz00zz__r4_control_features_6_9z00(BgL_predz00_29, BgL_lisz00_30); 
{ /* Ieee/control.scm 255 */
bool_t BgL_testz00_2415;
if(
PAIRP(BgL_aux1709z00_1262))
{ /* Ieee/control.scm 255 */
BgL_testz00_2415 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 255 */
BgL_testz00_2415 = 
NULLP(BgL_aux1709z00_1262)
; } 
if(BgL_testz00_2415)
{ /* Ieee/control.scm 255 */
return BgL_aux1709z00_1262;}  else 
{ 
obj_t BgL_auxz00_2419;
BgL_auxz00_2419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8837)), BGl_string1856z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1709z00_1262); 
FAILURE(BgL_auxz00_2419,BFALSE,BFALSE);} } } } 
}



/* recur */
obj_t BGl_recurz00zz__r4_control_features_6_9z00(obj_t BgL_predz00_1047, obj_t BgL_lisz00_553)
{ AN_OBJECT;
{ /* Ieee/control.scm 255 */
BGl_recurz00zz__r4_control_features_6_9z00:
if(
NULLP(BgL_lisz00_553))
{ /* Ieee/control.scm 256 */
return BgL_lisz00_553;}  else 
{ /* Ieee/control.scm 258 */
obj_t BgL_headz00_556;obj_t BgL_tailz00_557;
{ /* Ieee/control.scm 258 */
obj_t BgL_pairz00_864;
if(
PAIRP(BgL_lisz00_553))
{ /* Ieee/control.scm 258 */
BgL_pairz00_864 = BgL_lisz00_553; }  else 
{ 
obj_t BgL_auxz00_2427;
BgL_auxz00_2427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8914)), BGl_string1857z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_lisz00_553); 
FAILURE(BgL_auxz00_2427,BFALSE,BFALSE);} 
BgL_headz00_556 = 
CAR(BgL_pairz00_864); } 
BgL_tailz00_557 = 
CDR(BgL_lisz00_553); 
{ /* Ieee/control.scm 260 */
bool_t BgL_testz00_2433;
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_1047, ((long)1)))
{ /* Ieee/control.scm 260 */
BgL_testz00_2433 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_1047)(BgL_predz00_1047, BgL_headz00_556, BEOA))
; }  else 
{ /* Ieee/control.scm 260 */
FAILURE(BGl_string1858z00zz__r4_control_features_6_9z00,BGl_list1859z00zz__r4_control_features_6_9z00,BgL_predz00_1047);} 
if(BgL_testz00_2433)
{ /* Ieee/control.scm 261 */
obj_t BgL_newzd2tailzd2_559;
BgL_newzd2tailzd2_559 = 
BGl_recurz00zz__r4_control_features_6_9z00(BgL_predz00_1047, BgL_tailz00_557); 
if(
(BgL_tailz00_557==BgL_newzd2tailzd2_559))
{ /* Ieee/control.scm 262 */
return BgL_lisz00_553;}  else 
{ /* Ieee/control.scm 262 */
return 
MAKE_PAIR(BgL_headz00_556, BgL_newzd2tailzd2_559);} }  else 
{ 
obj_t BgL_lisz00_2444;
BgL_lisz00_2444 = BgL_tailz00_557; 
BgL_lisz00_553 = BgL_lisz00_2444; 
goto BGl_recurz00zz__r4_control_features_6_9z00;} } } } 
}



/* _filter */
obj_t BGl__filterz00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1013, obj_t BgL_predz00_1014, obj_t BgL_lisz00_1015)
{ AN_OBJECT;
{ /* Ieee/control.scm 254 */
{ /* Ieee/control.scm 256 */
obj_t BgL_auxz00_2452;obj_t BgL_auxz00_2445;
{ /* Ieee/control.scm 256 */
bool_t BgL_testz00_2453;
if(
PAIRP(BgL_lisz00_1015))
{ /* Ieee/control.scm 256 */
BgL_testz00_2453 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 256 */
BgL_testz00_2453 = 
NULLP(BgL_lisz00_1015)
; } 
if(BgL_testz00_2453)
{ /* Ieee/control.scm 256 */
BgL_auxz00_2452 = BgL_lisz00_1015
; }  else 
{ 
obj_t BgL_auxz00_2457;
BgL_auxz00_2457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8868)), BGl_string1864z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lisz00_1015); 
FAILURE(BgL_auxz00_2457,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_predz00_1014))
{ /* Ieee/control.scm 256 */
BgL_auxz00_2445 = BgL_predz00_1014
; }  else 
{ 
obj_t BgL_auxz00_2448;
BgL_auxz00_2448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)8868)), BGl_string1864z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_predz00_1014); 
FAILURE(BgL_auxz00_2448,BFALSE,BFALSE);} 
return 
BGl_filterz00zz__r4_control_features_6_9z00(BgL_auxz00_2445, BgL_auxz00_2452);} } 
}



/* filter! */
BGL_EXPORTED_DEF obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t BgL_predz00_31, obj_t BgL_lisz00_32)
{ AN_OBJECT;
{ /* Ieee/control.scm 270 */
{ 
obj_t BgL_ansz00_563;
{ /* Ieee/control.scm 271 */
obj_t BgL_aux1737z00_1294;
BgL_ansz00_563 = BgL_lisz00_32; 
BgL_zc3anonymousza31330ze3z83_564:
if(
NULLP(BgL_ansz00_563))
{ /* Ieee/control.scm 272 */
BgL_aux1737z00_1294 = BgL_ansz00_563; }  else 
{ /* Ieee/control.scm 274 */
bool_t BgL_testz00_2464;
{ /* Ieee/control.scm 274 */
obj_t BgL_arg1348z00_593;
{ /* Ieee/control.scm 274 */
obj_t BgL_pairz00_867;
if(
PAIRP(BgL_ansz00_563))
{ /* Ieee/control.scm 274 */
BgL_pairz00_867 = BgL_ansz00_563; }  else 
{ 
obj_t BgL_auxz00_2467;
BgL_auxz00_2467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9411)), BGl_string1865z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_ansz00_563); 
FAILURE(BgL_auxz00_2467,BFALSE,BFALSE);} 
BgL_arg1348z00_593 = 
CAR(BgL_pairz00_867); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_31, ((long)1)))
{ /* Ieee/control.scm 274 */
BgL_testz00_2464 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_31)(BgL_predz00_31, BgL_arg1348z00_593, BEOA))
; }  else 
{ /* Ieee/control.scm 274 */
FAILURE(BGl_string1866z00zz__r4_control_features_6_9z00,BGl_list1867z00zz__r4_control_features_6_9z00,BgL_predz00_31);} } 
if(BgL_testz00_2464)
{ 
obj_t BgL_prevz00_578;obj_t BgL_lisz00_579;obj_t BgL_prevz00_570;obj_t BgL_lisz00_571;
BgL_prevz00_570 = BgL_ansz00_563; 
BgL_lisz00_571 = 
CDR(BgL_ansz00_563); 
BgL_zc3anonymousza31334ze3z83_572:
if(
PAIRP(BgL_lisz00_571))
{ /* Ieee/control.scm 279 */
bool_t BgL_testz00_2480;
{ /* Ieee/control.scm 279 */
obj_t BgL_arg1339z00_577;
BgL_arg1339z00_577 = 
CAR(BgL_lisz00_571); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_31, ((long)1)))
{ /* Ieee/control.scm 279 */
BgL_testz00_2480 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_31)(BgL_predz00_31, BgL_arg1339z00_577, BEOA))
; }  else 
{ /* Ieee/control.scm 279 */
FAILURE(BGl_string1870z00zz__r4_control_features_6_9z00,BGl_list1871z00zz__r4_control_features_6_9z00,BgL_predz00_31);} } 
if(BgL_testz00_2480)
{ 
obj_t BgL_lisz00_2489;obj_t BgL_prevz00_2488;
BgL_prevz00_2488 = BgL_lisz00_571; 
BgL_lisz00_2489 = 
CDR(BgL_lisz00_571); 
BgL_lisz00_571 = BgL_lisz00_2489; 
BgL_prevz00_570 = BgL_prevz00_2488; 
goto BgL_zc3anonymousza31334ze3z83_572;}  else 
{ /* Ieee/control.scm 279 */
BgL_prevz00_578 = BgL_prevz00_570; 
BgL_lisz00_579 = 
CDR(BgL_lisz00_571); 
{ 
obj_t BgL_lisz00_582;
BgL_lisz00_582 = BgL_lisz00_579; 
BgL_zc3anonymousza31341ze3z83_583:
if(
PAIRP(BgL_lisz00_582))
{ /* Ieee/control.scm 285 */
bool_t BgL_testz00_2493;
{ /* Ieee/control.scm 285 */
obj_t BgL_arg1346z00_588;
BgL_arg1346z00_588 = 
CAR(BgL_lisz00_582); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_31, ((long)1)))
{ /* Ieee/control.scm 285 */
BgL_testz00_2493 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_31)(BgL_predz00_31, BgL_arg1346z00_588, BEOA))
; }  else 
{ /* Ieee/control.scm 285 */
FAILURE(BGl_string1866z00zz__r4_control_features_6_9z00,BGl_list1874z00zz__r4_control_features_6_9z00,BgL_predz00_31);} } 
if(BgL_testz00_2493)
{ /* Ieee/control.scm 285 */
{ /* Ieee/control.scm 287 */
obj_t BgL_pairz00_875;
if(
PAIRP(BgL_prevz00_578))
{ /* Ieee/control.scm 287 */
BgL_pairz00_875 = BgL_prevz00_578; }  else 
{ 
obj_t BgL_auxz00_2503;
BgL_auxz00_2503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9768)), BGl_string1865z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_prevz00_578); 
FAILURE(BgL_auxz00_2503,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_875, BgL_lisz00_582); } 
{ 
obj_t BgL_lisz00_2509;obj_t BgL_prevz00_2508;
BgL_prevz00_2508 = BgL_lisz00_582; 
BgL_lisz00_2509 = 
CDR(BgL_lisz00_582); 
BgL_lisz00_571 = BgL_lisz00_2509; 
BgL_prevz00_570 = BgL_prevz00_2508; 
goto BgL_zc3anonymousza31334ze3z83_572;} }  else 
{ 
obj_t BgL_lisz00_2511;
BgL_lisz00_2511 = 
CDR(BgL_lisz00_582); 
BgL_lisz00_582 = BgL_lisz00_2511; 
goto BgL_zc3anonymousza31341ze3z83_583;} }  else 
{ /* Ieee/control.scm 290 */
obj_t BgL_pairz00_879;
if(
PAIRP(BgL_prevz00_578))
{ /* Ieee/control.scm 290 */
BgL_pairz00_879 = BgL_prevz00_578; }  else 
{ 
obj_t BgL_auxz00_2515;
BgL_auxz00_2515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9854)), BGl_string1865z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_prevz00_578); 
FAILURE(BgL_auxz00_2515,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_879, BgL_lisz00_582); } } } }  else 
{ /* Ieee/control.scm 278 */BFALSE; } 
BgL_aux1737z00_1294 = BgL_ansz00_563; }  else 
{ /* Ieee/control.scm 275 */
obj_t BgL_arg1347z00_592;
{ /* Ieee/control.scm 275 */
obj_t BgL_pairz00_881;
if(
PAIRP(BgL_ansz00_563))
{ /* Ieee/control.scm 275 */
BgL_pairz00_881 = BgL_ansz00_563; }  else 
{ 
obj_t BgL_auxz00_2524;
BgL_auxz00_2524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9433)), BGl_string1865z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_ansz00_563); 
FAILURE(BgL_auxz00_2524,BFALSE,BFALSE);} 
BgL_arg1347z00_592 = 
CDR(BgL_pairz00_881); } 
{ 
obj_t BgL_ansz00_2529;
BgL_ansz00_2529 = BgL_arg1347z00_592; 
BgL_ansz00_563 = BgL_ansz00_2529; 
goto BgL_zc3anonymousza31330ze3z83_564;} } } 
{ /* Ieee/control.scm 271 */
bool_t BgL_testz00_2530;
if(
PAIRP(BgL_aux1737z00_1294))
{ /* Ieee/control.scm 271 */
BgL_testz00_2530 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 271 */
BgL_testz00_2530 = 
NULLP(BgL_aux1737z00_1294)
; } 
if(BgL_testz00_2530)
{ /* Ieee/control.scm 271 */
return BgL_aux1737z00_1294;}  else 
{ 
obj_t BgL_auxz00_2534;
BgL_auxz00_2534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9333)), BGl_string1877z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_aux1737z00_1294); 
FAILURE(BgL_auxz00_2534,BFALSE,BFALSE);} } } } } 
}



/* _filter! */
obj_t BGl__filterz12z12zz__r4_control_features_6_9z00(obj_t BgL_envz00_1016, obj_t BgL_predz00_1017, obj_t BgL_lisz00_1018)
{ AN_OBJECT;
{ /* Ieee/control.scm 270 */
{ /* Ieee/control.scm 272 */
obj_t BgL_auxz00_2545;obj_t BgL_auxz00_2538;
{ /* Ieee/control.scm 272 */
bool_t BgL_testz00_2546;
if(
PAIRP(BgL_lisz00_1018))
{ /* Ieee/control.scm 272 */
BgL_testz00_2546 = ((bool_t)1)
; }  else 
{ /* Ieee/control.scm 272 */
BgL_testz00_2546 = 
NULLP(BgL_lisz00_1018)
; } 
if(BgL_testz00_2546)
{ /* Ieee/control.scm 272 */
BgL_auxz00_2545 = BgL_lisz00_1018
; }  else 
{ 
obj_t BgL_auxz00_2550;
BgL_auxz00_2550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9366)), BGl_string1878z00zz__r4_control_features_6_9z00, BGl_string1799z00zz__r4_control_features_6_9z00, BgL_lisz00_1018); 
FAILURE(BgL_auxz00_2550,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_predz00_1017))
{ /* Ieee/control.scm 272 */
BgL_auxz00_2538 = BgL_predz00_1017
; }  else 
{ 
obj_t BgL_auxz00_2541;
BgL_auxz00_2541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)9366)), BGl_string1878z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_predz00_1017); 
FAILURE(BgL_auxz00_2541,BFALSE,BFALSE);} 
return 
BGl_filterz12z12zz__r4_control_features_6_9z00(BgL_auxz00_2538, BgL_auxz00_2545);} } 
}



/* force */
BGL_EXPORTED_DEF obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t BgL_promisez00_33)
{ AN_OBJECT;
{ /* Ieee/control.scm 297 */
{ /* Ieee/control.scm 298 */
obj_t BgL_funz00_1530;
if(
PROCEDUREP(BgL_promisez00_33))
{ /* Ieee/control.scm 298 */
BgL_funz00_1530 = BgL_promisez00_33; }  else 
{ 
obj_t BgL_auxz00_2557;
BgL_auxz00_2557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10163)), BGl_string1879z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_promisez00_33); 
FAILURE(BgL_auxz00_2557,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1530, ((long)0)))
{ /* Ieee/control.scm 298 */
return 
PROCEDURE_ENTRY(BgL_funz00_1530)(BgL_promisez00_33, BEOA);}  else 
{ /* Ieee/control.scm 298 */
FAILURE(BGl_string1880z00zz__r4_control_features_6_9z00,BGl_list1881z00zz__r4_control_features_6_9z00,BgL_funz00_1530);} } } 
}



/* _force */
obj_t BGl__forcez00zz__r4_control_features_6_9z00(obj_t BgL_envz00_1019, obj_t BgL_promisez00_1020)
{ AN_OBJECT;
{ /* Ieee/control.scm 297 */
{ /* Ieee/control.scm 298 */
obj_t BgL_funz00_1532;
if(
PROCEDUREP(BgL_promisez00_1020))
{ /* Ieee/control.scm 298 */
BgL_funz00_1532 = BgL_promisez00_1020; }  else 
{ 
obj_t BgL_auxz00_2568;
BgL_auxz00_2568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10163)), BGl_string1879z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_promisez00_1020); 
FAILURE(BgL_auxz00_2568,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1532, ((long)0)))
{ /* Ieee/control.scm 298 */
return 
PROCEDURE_ENTRY(BgL_funz00_1532)(BgL_promisez00_1020, BEOA);}  else 
{ /* Ieee/control.scm 298 */
FAILURE(BGl_string1880z00zz__r4_control_features_6_9z00,BGl_list1881z00zz__r4_control_features_6_9z00,BgL_funz00_1532);} } } 
}



/* make-promise */
BGL_EXPORTED_DEF obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t BgL_procz00_34)
{ AN_OBJECT;
{ /* Ieee/control.scm 303 */
{ /* Ieee/control.scm 304 */
obj_t BgL_resultzd2readyzf3z21_595;obj_t BgL_resultz00_596;
BgL_resultzd2readyzf3z21_595 = 
MAKE_CELL(BFALSE); 
BgL_resultz00_596 = 
MAKE_CELL(BFALSE); 
{ /* Ieee/control.scm 306 */
obj_t BgL_zc3anonymousza31349ze3z83_1021;
BgL_zc3anonymousza31349ze3z83_1021 = 
make_fx_procedure(BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1021, 
(int)(((long)0)), BgL_procz00_34); 
PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1021, 
(int)(((long)1)), BgL_resultzd2readyzf3z21_595); 
PROCEDURE_SET(BgL_zc3anonymousza31349ze3z83_1021, 
(int)(((long)2)), BgL_resultz00_596); 
return BgL_zc3anonymousza31349ze3z83_1021;} } } 
}



/* _make-promise */
obj_t BGl__makezd2promisezd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1022, obj_t BgL_procz00_1023)
{ AN_OBJECT;
{ /* Ieee/control.scm 303 */
{ /* Ieee/control.scm 304 */
obj_t BgL_auxz00_2586;
if(
PROCEDUREP(BgL_procz00_1023))
{ /* Ieee/control.scm 304 */
BgL_auxz00_2586 = BgL_procz00_1023
; }  else 
{ 
obj_t BgL_auxz00_2589;
BgL_auxz00_2589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10428)), BGl_string1884z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_1023); 
FAILURE(BgL_auxz00_2589,BFALSE,BFALSE);} 
return 
BGl_makezd2promisezd2zz__r4_control_features_6_9z00(BgL_auxz00_2586);} } 
}



/* <anonymous:1349> */
obj_t BGl_zc3anonymousza31349ze3z83zz__r4_control_features_6_9z00(obj_t BgL_envz00_1024)
{ AN_OBJECT;
{ /* Ieee/control.scm 306 */
{ /* Ieee/control.scm 307 */
obj_t BgL_procz00_1025;obj_t BgL_resultzd2readyzf3z21_1026;obj_t BgL_resultz00_1027;
BgL_procz00_1025 = 
PROCEDURE_REF(BgL_envz00_1024, 
(int)(((long)0))); 
BgL_resultzd2readyzf3z21_1026 = 
PROCEDURE_REF(BgL_envz00_1024, 
(int)(((long)1))); 
BgL_resultz00_1027 = 
PROCEDURE_REF(BgL_envz00_1024, 
(int)(((long)2))); 
{ 

if(
CBOOL(
CELL_REF(BgL_resultzd2readyzf3z21_1026)))
{ /* Ieee/control.scm 307 */
return 
CELL_REF(BgL_resultz00_1027);}  else 
{ /* Ieee/control.scm 309 */
obj_t BgL_xz00_598;
{ /* Ieee/control.scm 309 */
obj_t BgL_funz00_1309;
if(
PROCEDUREP(BgL_procz00_1025))
{ /* Ieee/control.scm 309 */
BgL_funz00_1309 = BgL_procz00_1025; }  else 
{ 
obj_t BgL_auxz00_2604;
BgL_auxz00_2604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10540)), BGl_string1885z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_1025); 
FAILURE(BgL_auxz00_2604,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1309, ((long)0)))
{ /* Ieee/control.scm 309 */
BgL_xz00_598 = 
PROCEDURE_ENTRY(BgL_funz00_1309)(BgL_procz00_1025, BEOA); }  else 
{ /* Ieee/control.scm 309 */
FAILURE(BGl_string1886z00zz__r4_control_features_6_9z00,BGl_list1887z00zz__r4_control_features_6_9z00,BgL_funz00_1309);} } 
if(
CBOOL(
CELL_REF(BgL_resultzd2readyzf3z21_1026)))
{ /* Ieee/control.scm 310 */
return 
CELL_REF(BgL_resultz00_1027);}  else 
{ /* Ieee/control.scm 310 */
CELL_SET(BgL_resultzd2readyzf3z21_1026, BTRUE); 
CELL_SET(BgL_resultz00_1027, BgL_xz00_598); 
return 
CELL_REF(BgL_resultz00_1027);} } } } } 
}



/* call/cc */
BGL_EXPORTED_DEF obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t BgL_procz00_35)
{ AN_OBJECT;
{ /* Ieee/control.scm 320 */
{ /* Ieee/control.scm 323 */
obj_t BgL_zc3anonymousza31355ze3z83_1031;
BgL_zc3anonymousza31355ze3z83_1031 = 
make_fx_procedure(BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31355ze3z83_1031, 
(int)(((long)0)), BgL_procz00_35); 
return 
call_cc(BgL_zc3anonymousza31355ze3z83_1031);} } 
}



/* _call/cc */
obj_t BGl__callzf2cczf2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1032, obj_t BgL_procz00_1033)
{ AN_OBJECT;
{ /* Ieee/control.scm 320 */
{ /* Ieee/control.scm 323 */
obj_t BgL_auxz00_2621;
if(
PROCEDUREP(BgL_procz00_1033))
{ /* Ieee/control.scm 323 */
BgL_auxz00_2621 = BgL_procz00_1033
; }  else 
{ 
obj_t BgL_auxz00_2624;
BgL_auxz00_2624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10980)), BGl_string1888z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_1033); 
FAILURE(BgL_auxz00_2624,BFALSE,BFALSE);} 
return 
BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_auxz00_2621);} } 
}



/* <anonymous:1355> */
obj_t BGl_zc3anonymousza31355ze3z83zz__r4_control_features_6_9z00(obj_t BgL_envz00_1034, obj_t BgL_contz00_1036)
{ AN_OBJECT;
{ /* Ieee/control.scm 321 */
{ /* Ieee/control.scm 323 */
obj_t BgL_procz00_1035;
BgL_procz00_1035 = 
PROCEDURE_REF(BgL_envz00_1034, 
(int)(((long)0))); 
{ 
obj_t BgL_contz00_600;
BgL_contz00_600 = BgL_contz00_1036; 
{ /* Ieee/control.scm 323 */
obj_t BgL_zc3anonymousza31357ze3z83_1030;
BgL_zc3anonymousza31357ze3z83_1030 = 
make_va_procedure(BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00, 
(int)(((long)-1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31357ze3z83_1030, 
(int)(((long)0)), BgL_contz00_600); 
{ /* Ieee/control.scm 322 */
obj_t BgL_funz00_1316;
if(
PROCEDUREP(BgL_procz00_1035))
{ /* Ieee/control.scm 322 */
BgL_funz00_1316 = BgL_procz00_1035; }  else 
{ 
obj_t BgL_auxz00_2638;
BgL_auxz00_2638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)10958)), BGl_string1889z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_1035); 
FAILURE(BgL_auxz00_2638,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1316, ((long)1)))
{ /* Ieee/control.scm 322 */
return 
PROCEDURE_ENTRY(BgL_funz00_1316)(BgL_procz00_1035, BgL_zc3anonymousza31357ze3z83_1030, BEOA);}  else 
{ /* Ieee/control.scm 322 */
FAILURE(BGl_string1890z00zz__r4_control_features_6_9z00,BGl_list1891z00zz__r4_control_features_6_9z00,BgL_funz00_1316);} } } } } } 
}



/* <anonymous:1357> */
obj_t BGl_zc3anonymousza31357ze3z83zz__r4_control_features_6_9z00(obj_t BgL_envz00_1037, obj_t BgL_valsz00_1039)
{ AN_OBJECT;
{ /* Ieee/control.scm 322 */
{ /* Ieee/control.scm 323 */
obj_t BgL_contz00_1038;
BgL_contz00_1038 = 
PROCEDURE_REF(BgL_envz00_1037, 
(int)(((long)0))); 
{ 
obj_t BgL_valsz00_603;
BgL_valsz00_603 = BgL_valsz00_1039; 
{ /* Ieee/control.scm 323 */
bool_t BgL_testz00_2649;
if(
PAIRP(BgL_valsz00_603))
{ /* Ieee/control.scm 323 */
BgL_testz00_2649 = 
NULLP(
CDR(BgL_valsz00_603))
; }  else 
{ /* Ieee/control.scm 323 */
BgL_testz00_2649 = ((bool_t)0)
; } 
if(BgL_testz00_2649)
{ /* Ieee/control.scm 324 */
obj_t BgL_arg1359z00_606;
BgL_arg1359z00_606 = 
CAR(BgL_valsz00_603); 
{ /* Ieee/control.scm 324 */
obj_t BgL_funz00_1321;
if(
PROCEDUREP(BgL_contz00_1038))
{ /* Ieee/control.scm 324 */
BgL_funz00_1321 = BgL_contz00_1038; }  else 
{ 
obj_t BgL_auxz00_2657;
BgL_auxz00_2657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11029)), BGl_string1893z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_contz00_1038); 
FAILURE(BgL_auxz00_2657,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1321, ((long)1)))
{ /* Ieee/control.scm 324 */
return 
PROCEDURE_ENTRY(BgL_funz00_1321)(BgL_contz00_1038, BgL_arg1359z00_606, BEOA);}  else 
{ /* Ieee/control.scm 324 */
FAILURE(BGl_string1894z00zz__r4_control_features_6_9z00,BGl_list1895z00zz__r4_control_features_6_9z00,BgL_funz00_1321);} } }  else 
{ /* Ieee/control.scm 323 */
{ /* Ieee/control.scm 326 */
int BgL_auxz00_2666;
BgL_auxz00_2666 = 
(int)(((long)-1)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_2666); } 
{ /* Ieee/control.scm 327 */
obj_t BgL_funz00_1326;
if(
PROCEDUREP(BgL_contz00_1038))
{ /* Ieee/control.scm 327 */
BgL_funz00_1326 = BgL_contz00_1038; }  else 
{ 
obj_t BgL_auxz00_2671;
BgL_auxz00_2671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11107)), BGl_string1893z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_contz00_1038); 
FAILURE(BgL_auxz00_2671,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1326, ((long)1)))
{ /* Ieee/control.scm 327 */
return 
PROCEDURE_ENTRY(BgL_funz00_1326)(BgL_contz00_1038, BgL_valsz00_603, BEOA);}  else 
{ /* Ieee/control.scm 327 */
FAILURE(BGl_string1894z00zz__r4_control_features_6_9z00,BGl_list1900z00zz__r4_control_features_6_9z00,BgL_funz00_1326);} } } } } } } 
}



/* call-with-current-continuation */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00(obj_t BgL_procz00_36)
{ AN_OBJECT;
{ /* Ieee/control.scm 332 */
return 
BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_procz00_36);} 
}



/* _call-with-current-continuation */
obj_t BGl__callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1040, obj_t BgL_procz00_1041)
{ AN_OBJECT;
{ /* Ieee/control.scm 332 */
{ /* Ieee/control.scm 333 */
obj_t BgL_procz00_1533;
if(
PROCEDUREP(BgL_procz00_1041))
{ /* Ieee/control.scm 333 */
BgL_procz00_1533 = BgL_procz00_1041; }  else 
{ 
obj_t BgL_auxz00_2683;
BgL_auxz00_2683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11405)), BGl_string1903z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_procz00_1041); 
FAILURE(BgL_auxz00_2683,BFALSE,BFALSE);} 
return 
BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_procz00_1533);} } 
}



/* dynamic-wind */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t BgL_beforez00_37, obj_t BgL_thunkz00_38, obj_t BgL_afterz00_39)
{ AN_OBJECT;
{ /* Ieee/control.scm 338 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_beforez00_37, ((long)0)))
{ /* Ieee/control.scm 339 */
PROCEDURE_ENTRY(BgL_beforez00_37)(BgL_beforez00_37, BEOA); }  else 
{ /* Ieee/control.scm 339 */
FAILURE(BGl_string1904z00zz__r4_control_features_6_9z00,BGl_list1905z00zz__r4_control_features_6_9z00,BgL_beforez00_37);} 
{ /* Ieee/control.scm 340 */

PUSH_BEFORE(BgL_beforez00_37); 
{ /* Ieee/control.scm 342 */
obj_t BgL_val1096z00_611;
BgL_val1096z00_611 = 
BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00(BgL_thunkz00_38); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_afterz00_39, ((long)0)))
{ /* Ieee/control.scm 345 */
PROCEDURE_ENTRY(BgL_afterz00_39)(BgL_afterz00_39, BEOA); }  else 
{ /* Ieee/control.scm 345 */
FAILURE(BGl_string1904z00zz__r4_control_features_6_9z00,BGl_list1908z00zz__r4_control_features_6_9z00,BgL_afterz00_39);} 
POP_BEFORE(); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1096z00_611)))
{ /* Ieee/control.scm 346 */
obj_t BgL_arg1370z00_613;obj_t BgL_arg1371z00_614;
{ /* Ieee/control.scm 346 */
obj_t BgL_pairz00_887;
if(
PAIRP(BgL_val1096z00_611))
{ /* Ieee/control.scm 346 */
BgL_pairz00_887 = BgL_val1096z00_611; }  else 
{ 
obj_t BgL_auxz00_2706;
BgL_auxz00_2706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11829)), BGl_string1911z00zz__r4_control_features_6_9z00, BGl_string1795z00zz__r4_control_features_6_9z00, BgL_val1096z00_611); 
FAILURE(BgL_auxz00_2706,BFALSE,BFALSE);} 
BgL_arg1370z00_613 = 
CAR(BgL_pairz00_887); } 
BgL_arg1371z00_614 = 
CDR(BgL_val1096z00_611); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg1370z00_613, BgL_arg1371z00_614);}  else 
{ /* Ieee/control.scm 346 */
return BgL_val1096z00_611;} } } } 
}



/* <exit:1372> */
obj_t BGl_zc3exitza31372ze3z83zz__r4_control_features_6_9z00(obj_t BgL_thunkz00_1046)
{ AN_OBJECT;
{ /* Ieee/control.scm 345 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1097z00_616;
if( SET_EXIT(BgL_an_exit1097z00_616) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1097z00_616 = 
(void *)jmpbuf; 
{ /* Ieee/control.scm 345 */

PUSH_EXIT(BgL_an_exit1097z00_616, ((long)0)); 
{ /* Ieee/control.scm 343 */
obj_t BgL_val1098z00_617;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_1046, ((long)0)))
{ /* Ieee/control.scm 343 */
BgL_val1098z00_617 = 
PROCEDURE_ENTRY(BgL_thunkz00_1046)(BgL_thunkz00_1046, BEOA); }  else 
{ /* Ieee/control.scm 343 */
FAILURE(BGl_string1912z00zz__r4_control_features_6_9z00,BGl_list1913z00zz__r4_control_features_6_9z00,BgL_thunkz00_1046);} 
POP_EXIT(); 
return BgL_val1098z00_617;} } 
} } 
}



/* _dynamic-wind */
obj_t BGl__dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t BgL_envz00_1042, obj_t BgL_beforez00_1043, obj_t BgL_thunkz00_1044, obj_t BgL_afterz00_1045)
{ AN_OBJECT;
{ /* Ieee/control.scm 338 */
{ /* Ieee/control.scm 346 */
obj_t BgL_auxz00_2736;obj_t BgL_auxz00_2729;obj_t BgL_auxz00_2722;
if(
PROCEDUREP(BgL_afterz00_1045))
{ /* Ieee/control.scm 346 */
BgL_auxz00_2736 = BgL_afterz00_1045
; }  else 
{ 
obj_t BgL_auxz00_2739;
BgL_auxz00_2739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11844)), BGl_string1916z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_afterz00_1045); 
FAILURE(BgL_auxz00_2739,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_thunkz00_1044))
{ /* Ieee/control.scm 346 */
BgL_auxz00_2729 = BgL_thunkz00_1044
; }  else 
{ 
obj_t BgL_auxz00_2732;
BgL_auxz00_2732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11844)), BGl_string1916z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_thunkz00_1044); 
FAILURE(BgL_auxz00_2732,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_beforez00_1043))
{ /* Ieee/control.scm 346 */
BgL_auxz00_2722 = BgL_beforez00_1043
; }  else 
{ 
obj_t BgL_auxz00_2725;
BgL_auxz00_2725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1793z00zz__r4_control_features_6_9z00, 
BINT(((long)11844)), BGl_string1916z00zz__r4_control_features_6_9z00, BGl_string1797z00zz__r4_control_features_6_9z00, BgL_beforez00_1043); 
FAILURE(BgL_auxz00_2725,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(BgL_auxz00_2722, BgL_auxz00_2729, BgL_auxz00_2736);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00()
{ AN_OBJECT;
{ /* Ieee/control.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1917z00zz__r4_control_features_6_9z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string1917z00zz__r4_control_features_6_9z00));} 
}

#ifdef __cplusplus
}
#endif
