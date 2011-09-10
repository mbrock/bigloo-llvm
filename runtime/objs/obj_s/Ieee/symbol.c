/*===========================================================================*/
/*   (Ieee/symbol.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/symbol.scm -indent -o objs/obj_s/Ieee/symbol.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
static obj_t BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t);
extern obj_t string_to_symbol(char *);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 = BUNSPEC;
static obj_t BGl__keywordzf3zf3zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl__keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl__symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00();
extern obj_t bgl_gensym(obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl__symbolzf3zf3zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl__getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_symbols_6_4z00();
static obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl__rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t string_to_keyword(char *);
static obj_t BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_symbol2297z00zz__r4_symbols_6_4z00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00();
static obj_t BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2plistzd2envz00zz__r4_symbols_6_4z00, BgL_bgl__symbolza7d2plistza72314z00, BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gensymzd2envzd2zz__r4_symbols_6_4z00, BgL_bgl__gensymza700za7za7__r42315za7, opt_generic_entry, BGl__gensymz00zz__r4_symbols_6_4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3stringzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__symbolza7d2za7e3str2316z00, BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3symbolzd2cizd2envz31zz__r4_symbols_6_4z00, BgL_bgl__stringza7d2za7e3sym2317z00, BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00, BgL_bgl__symbolza7f3za7f3za7za7_2318z00, BGl__symbolzf3zf3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00, BgL_bgl__keywordza7d2za7e3st2319z00, BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__symbolza7d2za7e3key2320z00, BGl__symbolzd2ze3keywordz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpropzd2envzd2zz__r4_symbols_6_4z00, BgL_bgl__getpropza700za7za7__r2321za7, BGl__getpropz00zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00, BgL_bgl__symbolza7d2za7e3str2322z00, BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2appendzd2envz00zz__r4_symbols_6_4z00, BgL_bgl__symbolza7d2append2323za7, va_generic_entry, BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__stringza7d2za7e3key2324z00, BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_putpropz12zd2envzc0zz__r4_symbols_6_4z00, BgL_bgl__putpropza712za712za7za72325z00, BGl__putpropz12z12zz__r4_symbols_6_4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzf3zd2envz21zz__r4_symbols_6_4z00, BgL_bgl__keywordza7f3za7f3za7za72326z00, BGl__keywordzf3zf3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rempropz12zd2envzc0zz__r4_symbols_6_4z00, BgL_bgl__rempropza712za712za7za72327z00, BGl__rempropz12z12zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__stringza7d2za7e3sym2328z00, BGl__stringzd2ze3symbolz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3stringzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__keywordza7d2za7e3st2329z00, BGl__keywordzd2ze3stringz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00, BgL_bgl__keywordza7d2za7e3sy2330z00, BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2287z00zz__r4_symbols_6_4z00, BgL_bgl_string2287za700za7za7_2331za7, "/tmp/bigloo/runtime/Ieee/symbol.scm", 35 );
DEFINE_STRING( BGl_string2288z00zz__r4_symbols_6_4z00, BgL_bgl_string2288za700za7za7_2332za7, "_symbol->string", 15 );
DEFINE_STRING( BGl_string2300z00zz__r4_symbols_6_4z00, BgL_bgl_string2300za700za7za7_2333za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string2290z00zz__r4_symbols_6_4z00, BgL_bgl_string2290za700za7za7_2334za7, "_symbol->string!", 16 );
DEFINE_STRING( BGl_string2289z00zz__r4_symbols_6_4z00, BgL_bgl_string2289za700za7za7_2335za7, "symbol", 6 );
DEFINE_STRING( BGl_string2301z00zz__r4_symbols_6_4z00, BgL_bgl_string2301za700za7za7_2336za7, "symbol-plist", 12 );
DEFINE_STRING( BGl_string2291z00zz__r4_symbols_6_4z00, BgL_bgl_string2291za700za7za7_2337za7, "_string->symbol", 15 );
DEFINE_STRING( BGl_string2302z00zz__r4_symbols_6_4z00, BgL_bgl_string2302za700za7za7_2338za7, "argument is neither a symbol nor a keyword", 42 );
DEFINE_STRING( BGl_string2292z00zz__r4_symbols_6_4z00, BgL_bgl_string2292za700za7za7_2339za7, "bstring", 7 );
DEFINE_STRING( BGl_string2303z00zz__r4_symbols_6_4z00, BgL_bgl_string2303za700za7za7_2340za7, "loop", 4 );
DEFINE_STRING( BGl_string2293z00zz__r4_symbols_6_4z00, BgL_bgl_string2293za700za7za7_2341za7, "_string->symbol-ci", 18 );
DEFINE_STRING( BGl_string2304z00zz__r4_symbols_6_4z00, BgL_bgl_string2304za700za7za7_2342za7, "getprop", 7 );
DEFINE_STRING( BGl_string2294z00zz__r4_symbols_6_4z00, BgL_bgl_string2294za700za7za7_2343za7, "", 0 );
DEFINE_STRING( BGl_string2305z00zz__r4_symbols_6_4z00, BgL_bgl_string2305za700za7za7_2344za7, "_keyword->string", 16 );
DEFINE_STRING( BGl_string2295z00zz__r4_symbols_6_4z00, BgL_bgl_string2295za700za7za7_2345za7, "symbol-append'", 14 );
DEFINE_STRING( BGl_string2306z00zz__r4_symbols_6_4z00, BgL_bgl_string2306za700za7za7_2346za7, "keyword", 7 );
DEFINE_STRING( BGl_string2296z00zz__r4_symbols_6_4z00, BgL_bgl_string2296za700za7za7_2347za7, "pair", 4 );
DEFINE_STRING( BGl_string2307z00zz__r4_symbols_6_4z00, BgL_bgl_string2307za700za7za7_2348za7, "_keyword->string!", 17 );
DEFINE_STRING( BGl_string2308z00zz__r4_symbols_6_4z00, BgL_bgl_string2308za700za7za7_2349za7, "_string->keyword", 16 );
DEFINE_STRING( BGl_string2298z00zz__r4_symbols_6_4z00, BgL_bgl_string2298za700za7za7_2350za7, "gensym", 6 );
DEFINE_STRING( BGl_string2310z00zz__r4_symbols_6_4z00, BgL_bgl_string2310za700za7za7_2351za7, "_keyword->symbol", 16 );
DEFINE_STRING( BGl_string2309z00zz__r4_symbols_6_4z00, BgL_bgl_string2309za700za7za7_2352za7, "_symbol->keyword", 16 );
DEFINE_STRING( BGl_string2299z00zz__r4_symbols_6_4z00, BgL_bgl_string2299za700za7za7_2353za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string2311z00zz__r4_symbols_6_4z00, BgL_bgl_string2311za700za7za7_2354za7, "__r4_symbols_6_4", 16 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long BgL_checksumz00_1680, char * BgL_fromz00_1681)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_symbols_6_4z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00(); 
BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_symbols_6_4z00()
{ AN_OBJECT;
{ /* Ieee/symbol.scm 14 */
return ( 
BGl_symbol2297z00zz__r4_symbols_6_4z00 = 
bstring_to_symbol(BGl_string2298z00zz__r4_symbols_6_4z00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00()
{ AN_OBJECT;
{ /* Ieee/symbol.scm 14 */
return ( 
BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00 = 
BINT(((long)999)), BUNSPEC) ;} 
}



/* symbol? */
BGL_EXPORTED_DEF bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 128 */
return 
SYMBOLP(BgL_objz00_1);} 
}



/* _symbol? */
obj_t BGl__symbolzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_envz00_1559, obj_t BgL_objz00_1560)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 128 */
return 
BBOOL(
SYMBOLP(BgL_objz00_1560));} 
}



/* symbol->string */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_2)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 134 */
{ /* Ieee/symbol.scm 135 */
obj_t BgL_arg1887z00_1666;
BgL_arg1887z00_1666 = 
SYMBOL_TO_STRING(BgL_symbolz00_2); 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1666);} } 
}



/* _symbol->string */
obj_t BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1561, obj_t BgL_symbolz00_1562)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 134 */
{ /* Ieee/symbol.scm 135 */
obj_t BgL_res2312z00_1669;
{ /* Ieee/symbol.scm 135 */
obj_t BgL_symbolz00_1667;
if(
SYMBOLP(BgL_symbolz00_1562))
{ /* Ieee/symbol.scm 135 */
BgL_symbolz00_1667 = BgL_symbolz00_1562; }  else 
{ 
obj_t BgL_auxz00_1697;
BgL_auxz00_1697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)5614)), BGl_string2288z00zz__r4_symbols_6_4z00, BGl_string2289z00zz__r4_symbols_6_4z00, BgL_symbolz00_1562); 
FAILURE(BgL_auxz00_1697,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 135 */
obj_t BgL_arg1887z00_1668;
BgL_arg1887z00_1668 = 
SYMBOL_TO_STRING(BgL_symbolz00_1667); 
BgL_res2312z00_1669 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1668); } } 
return BgL_res2312z00_1669;} } 
}



/* symbol->string! */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_3)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 140 */
return 
SYMBOL_TO_STRING(BgL_symbolz00_3);} 
}



/* _symbol->string! */
obj_t BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_envz00_1563, obj_t BgL_symbolz00_1564)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 140 */
{ /* Ieee/symbol.scm 141 */
obj_t BgL_symbolz00_1670;
if(
SYMBOLP(BgL_symbolz00_1564))
{ /* Ieee/symbol.scm 141 */
BgL_symbolz00_1670 = BgL_symbolz00_1564; }  else 
{ 
obj_t BgL_auxz00_1706;
BgL_auxz00_1706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)5908)), BGl_string2290z00zz__r4_symbols_6_4z00, BGl_string2289z00zz__r4_symbols_6_4z00, BgL_symbolz00_1564); 
FAILURE(BgL_auxz00_1706,BFALSE,BFALSE);} 
return 
SYMBOL_TO_STRING(BgL_symbolz00_1670);} } 
}



/* string->symbol */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_stringz00_4)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 146 */
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_stringz00_4));} 
}



/* _string->symbol */
obj_t BGl__stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1565, obj_t BgL_stringz00_1566)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 146 */
{ /* Ieee/symbol.scm 147 */
obj_t BgL_stringz00_1671;
if(
STRINGP(BgL_stringz00_1566))
{ /* Ieee/symbol.scm 147 */
BgL_stringz00_1671 = BgL_stringz00_1566; }  else 
{ 
obj_t BgL_auxz00_1715;
BgL_auxz00_1715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6200)), BGl_string2291z00zz__r4_symbols_6_4z00, BGl_string2292z00zz__r4_symbols_6_4z00, BgL_stringz00_1566); 
FAILURE(BgL_auxz00_1715,BFALSE,BFALSE);} 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_stringz00_1671));} } 
}



/* string->symbol-ci */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t BgL_stringz00_5)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 152 */
{ /* Ieee/symbol.scm 153 */
obj_t BgL_arg1888z00_1265;
BgL_arg1888z00_1265 = 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_stringz00_5); 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg1888z00_1265));} } 
}



/* _string->symbol-ci */
obj_t BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t BgL_envz00_1567, obj_t BgL_stringz00_1568)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 152 */
{ /* Ieee/symbol.scm 153 */
obj_t BgL_auxz00_1724;
if(
STRINGP(BgL_stringz00_1568))
{ /* Ieee/symbol.scm 153 */
BgL_auxz00_1724 = BgL_stringz00_1568
; }  else 
{ 
obj_t BgL_auxz00_1727;
BgL_auxz00_1727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6506)), BGl_string2293z00zz__r4_symbols_6_4z00, BGl_string2292z00zz__r4_symbols_6_4z00, BgL_stringz00_1568); 
FAILURE(BgL_auxz00_1727,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(BgL_auxz00_1724);} } 
}



/* symbol-append */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t BgL_listz00_6)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 158 */
{ /* Ieee/symbol.scm 160 */
obj_t BgL_arg1890z00_743;
if(
NULLP(BgL_listz00_6))
{ /* Ieee/symbol.scm 160 */
BgL_arg1890z00_743 = BGl_string2294z00zz__r4_symbols_6_4z00; }  else 
{ /* Ieee/symbol.scm 160 */
BgL_arg1890z00_743 = 
BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(BgL_listz00_6); } 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg1890z00_743));} } 
}



/* symbol-append' */
obj_t BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(obj_t BgL_listz00_746)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 162 */
{ /* Ieee/symbol.scm 163 */
bool_t BgL_testz00_1737;
{ /* Ieee/symbol.scm 163 */
obj_t BgL_auxz00_1738;
{ /* Ieee/symbol.scm 163 */
obj_t BgL_pairz00_1267;
if(
PAIRP(BgL_listz00_746))
{ /* Ieee/symbol.scm 163 */
BgL_pairz00_1267 = BgL_listz00_746; }  else 
{ 
obj_t BgL_auxz00_1741;
BgL_auxz00_1741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6883)), BGl_string2295z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_listz00_746); 
FAILURE(BgL_auxz00_1741,BFALSE,BFALSE);} 
BgL_auxz00_1738 = 
CDR(BgL_pairz00_1267); } 
BgL_testz00_1737 = 
NULLP(BgL_auxz00_1738); } 
if(BgL_testz00_1737)
{ /* Ieee/symbol.scm 164 */
obj_t BgL_arg1894z00_749;
{ /* Ieee/symbol.scm 164 */
obj_t BgL_pairz00_1269;
if(
PAIRP(BgL_listz00_746))
{ /* Ieee/symbol.scm 164 */
BgL_pairz00_1269 = BgL_listz00_746; }  else 
{ 
obj_t BgL_auxz00_1749;
BgL_auxz00_1749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6919)), BGl_string2295z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_listz00_746); 
FAILURE(BgL_auxz00_1749,BFALSE,BFALSE);} 
BgL_arg1894z00_749 = 
CAR(BgL_pairz00_1269); } 
{ /* Ieee/symbol.scm 164 */
obj_t BgL_res2204z00_1272;
{ /* Ieee/symbol.scm 164 */
obj_t BgL_symbolz00_1270;
if(
SYMBOLP(BgL_arg1894z00_749))
{ /* Ieee/symbol.scm 164 */
BgL_symbolz00_1270 = BgL_arg1894z00_749; }  else 
{ 
obj_t BgL_auxz00_1756;
BgL_auxz00_1756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6923)), BGl_string2295z00zz__r4_symbols_6_4z00, BGl_string2289z00zz__r4_symbols_6_4z00, BgL_arg1894z00_749); 
FAILURE(BgL_auxz00_1756,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 164 */
obj_t BgL_arg1887z00_1271;
BgL_arg1887z00_1271 = 
SYMBOL_TO_STRING(BgL_symbolz00_1270); 
BgL_res2204z00_1272 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1271); } } 
return BgL_res2204z00_1272;} }  else 
{ /* Ieee/symbol.scm 165 */
obj_t BgL_arg1895z00_750;obj_t BgL_arg1896z00_751;
{ /* Ieee/symbol.scm 165 */
obj_t BgL_arg1898z00_752;
{ /* Ieee/symbol.scm 165 */
obj_t BgL_pairz00_1273;
if(
PAIRP(BgL_listz00_746))
{ /* Ieee/symbol.scm 165 */
BgL_pairz00_1273 = BgL_listz00_746; }  else 
{ 
obj_t BgL_auxz00_1764;
BgL_auxz00_1764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6971)), BGl_string2295z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_listz00_746); 
FAILURE(BgL_auxz00_1764,BFALSE,BFALSE);} 
BgL_arg1898z00_752 = 
CAR(BgL_pairz00_1273); } 
{ /* Ieee/symbol.scm 165 */
obj_t BgL_res2205z00_1276;
{ /* Ieee/symbol.scm 165 */
obj_t BgL_symbolz00_1274;
if(
SYMBOLP(BgL_arg1898z00_752))
{ /* Ieee/symbol.scm 165 */
BgL_symbolz00_1274 = BgL_arg1898z00_752; }  else 
{ 
obj_t BgL_auxz00_1771;
BgL_auxz00_1771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)6975)), BGl_string2295z00zz__r4_symbols_6_4z00, BGl_string2289z00zz__r4_symbols_6_4z00, BgL_arg1898z00_752); 
FAILURE(BgL_auxz00_1771,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 165 */
obj_t BgL_arg1887z00_1275;
BgL_arg1887z00_1275 = 
SYMBOL_TO_STRING(BgL_symbolz00_1274); 
BgL_res2205z00_1276 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1275); } } 
BgL_arg1895z00_750 = BgL_res2205z00_1276; } } 
BgL_arg1896z00_751 = 
BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(
CDR(BgL_listz00_746)); 
return 
string_append(BgL_arg1895z00_750, BgL_arg1896z00_751);} } } 
}



/* _symbol-append */
obj_t BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t BgL_envz00_1569, obj_t BgL_listz00_1570)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 158 */
return 
BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_listz00_1570);} 
}



/* _gensym */
obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t BgL_envz00_9, obj_t BgL_optz00_8)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 176 */
{ /* Ieee/symbol.scm 176 */

{ 

{ /* Ieee/symbol.scm 176 */
int BgL_aux1859z00_757;
BgL_aux1859z00_757 = 
VECTOR_LENGTH(BgL_optz00_8); 
switch( 
(long)(BgL_aux1859z00_757)) { case ((long)0) : 

{ /* Ieee/symbol.scm 176 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);} break;case ((long)1) : 

{ /* Ieee/symbol.scm 176 */
obj_t BgL_argz00_760;
BgL_argz00_760 = 
VECTOR_REF(BgL_optz00_8,
(int)(((long)0))); 
{ /* Ieee/symbol.scm 176 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BgL_argz00_760);} } break;
default: 
{ /* Ieee/symbol.scm 176 */
obj_t BgL_arg1902z00_761;int BgL_arg1904z00_763;
BgL_arg1902z00_761 = BGl_symbol2297z00zz__r4_symbols_6_4z00; 
BgL_arg1904z00_763 = 
VECTOR_LENGTH(BgL_optz00_8); 
return 
BGl_errorz00zz__errorz00(BgL_arg1902z00_761, BGl_string2299z00zz__r4_symbols_6_4z00, 
BINT(BgL_arg1904z00_763));} } } } } } 
}



/* gensym */
BGL_EXPORTED_DEF obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t BgL_argz00_7)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 176 */
{ /* Ieee/symbol.scm 179 */
obj_t BgL_argz00_764;
if(
CBOOL(BgL_argz00_7))
{ /* Ieee/symbol.scm 180 */
if(
SYMBOLP(BgL_argz00_7))
{ /* Ieee/symbol.scm 181 */
obj_t BgL_res2206z00_1282;
{ /* Ieee/symbol.scm 181 */
obj_t BgL_symbolz00_1280;
BgL_symbolz00_1280 = BgL_argz00_7; 
{ /* Ieee/symbol.scm 181 */
obj_t BgL_arg1887z00_1281;
BgL_arg1887z00_1281 = 
SYMBOL_TO_STRING(BgL_symbolz00_1280); 
BgL_res2206z00_1282 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1281); } } 
BgL_argz00_764 = BgL_res2206z00_1282; }  else 
{ /* Ieee/symbol.scm 181 */
if(
STRINGP(BgL_argz00_7))
{ /* Ieee/symbol.scm 182 */
BgL_argz00_764 = BgL_argz00_7; }  else 
{ /* Ieee/symbol.scm 182 */
BgL_argz00_764 = 
BGl_errorz00zz__errorz00(BGl_string2298z00zz__r4_symbols_6_4z00, BGl_string2300z00zz__r4_symbols_6_4z00, BgL_argz00_7); } } }  else 
{ /* Ieee/symbol.scm 180 */
BgL_argz00_764 = BgL_argz00_7; } 
return 
bgl_gensym(BgL_argz00_764);} } 
}



/* symbol-plist */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_10)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 202 */
if(
SYMBOLP(BgL_symbolz00_10))
{ /* Ieee/symbol.scm 204 */
return 
GET_SYMBOL_PLIST(BgL_symbolz00_10);}  else 
{ /* Ieee/symbol.scm 204 */
if(
KEYWORDP(BgL_symbolz00_10))
{ /* Ieee/symbol.scm 204 */
return 
GET_KEYWORD_PLIST(BgL_symbolz00_10);}  else 
{ /* Ieee/symbol.scm 204 */
return 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_10);} } } 
}



/* _symbol-plist */
obj_t BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t BgL_envz00_1571, obj_t BgL_symbolz00_1572)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 202 */
if(
SYMBOLP(BgL_symbolz00_1572))
{ /* Ieee/symbol.scm 204 */
return 
GET_SYMBOL_PLIST(BgL_symbolz00_1572);}  else 
{ /* Ieee/symbol.scm 204 */
if(
KEYWORDP(BgL_symbolz00_1572))
{ /* Ieee/symbol.scm 204 */
return 
GET_KEYWORD_PLIST(BgL_symbolz00_1572);}  else 
{ /* Ieee/symbol.scm 204 */
return 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_1572);} } } 
}



/* getprop */
BGL_EXPORTED_DEF obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_11, obj_t BgL_keyz00_12)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 216 */
{ /* Ieee/symbol.scm 217 */
bool_t BgL_testz00_1815;
if(
SYMBOLP(BgL_symbolz00_11))
{ /* Ieee/symbol.scm 217 */
BgL_testz00_1815 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 217 */
BgL_testz00_1815 = 
KEYWORDP(BgL_symbolz00_11)
; } 
if(BgL_testz00_1815)
{ /* Ieee/symbol.scm 218 */
obj_t BgL_g1825z00_770;
if(
SYMBOLP(BgL_symbolz00_11))
{ /* Ieee/symbol.scm 218 */
BgL_g1825z00_770 = 
GET_SYMBOL_PLIST(BgL_symbolz00_11); }  else 
{ /* Ieee/symbol.scm 218 */
if(
KEYWORDP(BgL_symbolz00_11))
{ /* Ieee/symbol.scm 218 */
BgL_g1825z00_770 = 
GET_KEYWORD_PLIST(BgL_symbolz00_11); }  else 
{ /* Ieee/symbol.scm 218 */
BgL_g1825z00_770 = 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_11); } } 
{ 
obj_t BgL_plz00_772;
BgL_plz00_772 = BgL_g1825z00_770; 
BgL_zc3anonymousza31910ze3z83_773:
if(
NULLP(BgL_plz00_772))
{ /* Ieee/symbol.scm 220 */
return BFALSE;}  else 
{ /* Ieee/symbol.scm 222 */
bool_t BgL_testz00_1828;
{ /* Ieee/symbol.scm 222 */
obj_t BgL_auxz00_1829;
{ /* Ieee/symbol.scm 222 */
obj_t BgL_pairz00_1296;
if(
PAIRP(BgL_plz00_772))
{ /* Ieee/symbol.scm 222 */
BgL_pairz00_1296 = BgL_plz00_772; }  else 
{ 
obj_t BgL_auxz00_1832;
BgL_auxz00_1832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9060)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_772); 
FAILURE(BgL_auxz00_1832,BFALSE,BFALSE);} 
BgL_auxz00_1829 = 
CAR(BgL_pairz00_1296); } 
BgL_testz00_1828 = 
(BgL_auxz00_1829==BgL_keyz00_12); } 
if(BgL_testz00_1828)
{ /* Ieee/symbol.scm 223 */
obj_t BgL_pairz00_1297;
if(
PAIRP(BgL_plz00_772))
{ /* Ieee/symbol.scm 223 */
BgL_pairz00_1297 = BgL_plz00_772; }  else 
{ 
obj_t BgL_auxz00_1840;
BgL_auxz00_1840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9082)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_772); 
FAILURE(BgL_auxz00_1840,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 223 */
obj_t BgL_pairz00_1300;
{ /* Ieee/symbol.scm 223 */
obj_t BgL_aux2241z00_1619;
BgL_aux2241z00_1619 = 
CDR(BgL_pairz00_1297); 
if(
PAIRP(BgL_aux2241z00_1619))
{ /* Ieee/symbol.scm 223 */
BgL_pairz00_1300 = BgL_aux2241z00_1619; }  else 
{ 
obj_t BgL_auxz00_1847;
BgL_auxz00_1847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9076)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2241z00_1619); 
FAILURE(BgL_auxz00_1847,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_1300);} }  else 
{ /* Ieee/symbol.scm 225 */
obj_t BgL_arg1914z00_776;
{ /* Ieee/symbol.scm 225 */
obj_t BgL_pairz00_1301;
if(
PAIRP(BgL_plz00_772))
{ /* Ieee/symbol.scm 225 */
BgL_pairz00_1301 = BgL_plz00_772; }  else 
{ 
obj_t BgL_auxz00_1854;
BgL_auxz00_1854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9118)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_772); 
FAILURE(BgL_auxz00_1854,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 225 */
obj_t BgL_pairz00_1304;
{ /* Ieee/symbol.scm 225 */
obj_t BgL_aux2245z00_1623;
BgL_aux2245z00_1623 = 
CDR(BgL_pairz00_1301); 
if(
PAIRP(BgL_aux2245z00_1623))
{ /* Ieee/symbol.scm 225 */
BgL_pairz00_1304 = BgL_aux2245z00_1623; }  else 
{ 
obj_t BgL_auxz00_1861;
BgL_auxz00_1861 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9112)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2245z00_1623); 
FAILURE(BgL_auxz00_1861,BFALSE,BFALSE);} } 
BgL_arg1914z00_776 = 
CDR(BgL_pairz00_1304); } } 
{ 
obj_t BgL_plz00_1866;
BgL_plz00_1866 = BgL_arg1914z00_776; 
BgL_plz00_772 = BgL_plz00_1866; 
goto BgL_zc3anonymousza31910ze3z83_773;} } } } }  else 
{ /* Ieee/symbol.scm 217 */
return 
BGl_errorz00zz__errorz00(BGl_string2304z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_11);} } } 
}



/* _getprop */
obj_t BGl__getpropz00zz__r4_symbols_6_4z00(obj_t BgL_envz00_1573, obj_t BgL_symbolz00_1574, obj_t BgL_keyz00_1575)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 216 */
return 
BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_1574, BgL_keyz00_1575);} 
}



/* putprop! */
BGL_EXPORTED_DEF obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_13, obj_t BgL_keyz00_14, obj_t BgL_valz00_15)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 231 */
{ /* Ieee/symbol.scm 232 */
bool_t BgL_testz00_1869;
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 232 */
BgL_testz00_1869 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 232 */
BgL_testz00_1869 = 
KEYWORDP(BgL_symbolz00_13)
; } 
if(BgL_testz00_1869)
{ /* Ieee/symbol.scm 233 */
obj_t BgL_g1826z00_781;
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 233 */
BgL_g1826z00_781 = 
GET_SYMBOL_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 233 */
if(
KEYWORDP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 233 */
BgL_g1826z00_781 = 
GET_KEYWORD_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 233 */
BgL_g1826z00_781 = 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_13); } } 
{ 
obj_t BgL_plz00_783;
BgL_plz00_783 = BgL_g1826z00_781; 
BgL_zc3anonymousza31918ze3z83_784:
if(
NULLP(BgL_plz00_783))
{ /* Ieee/symbol.scm 236 */
obj_t BgL_newz00_786;
{ /* Ieee/symbol.scm 236 */
obj_t BgL_arg1921z00_788;
{ /* Ieee/symbol.scm 236 */
obj_t BgL_arg1922z00_789;
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 236 */
BgL_arg1922z00_789 = 
GET_SYMBOL_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 236 */
if(
KEYWORDP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 236 */
BgL_arg1922z00_789 = 
GET_KEYWORD_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 236 */
BgL_arg1922z00_789 = 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_13); } } 
{ /* Ieee/symbol.scm 236 */
obj_t BgL_list1923z00_790;
BgL_list1923z00_790 = 
MAKE_PAIR(BgL_arg1922z00_789, BNIL); 
BgL_arg1921z00_788 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_valz00_15, BgL_list1923z00_790); } } 
BgL_newz00_786 = 
MAKE_PAIR(BgL_keyz00_14, BgL_arg1921z00_788); } 
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 237 */
SET_SYMBOL_PLIST(BgL_symbolz00_13, BgL_newz00_786); }  else 
{ /* Ieee/symbol.scm 237 */
SET_KEYWORD_PLIST(BgL_symbolz00_13, BgL_newz00_786); } 
return BgL_newz00_786;}  else 
{ /* Ieee/symbol.scm 241 */
bool_t BgL_testz00_1896;
{ /* Ieee/symbol.scm 241 */
obj_t BgL_auxz00_1897;
{ /* Ieee/symbol.scm 241 */
obj_t BgL_pairz00_1319;
if(
PAIRP(BgL_plz00_783))
{ /* Ieee/symbol.scm 241 */
BgL_pairz00_1319 = BgL_plz00_783; }  else 
{ 
obj_t BgL_auxz00_1900;
BgL_auxz00_1900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9766)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_783); 
FAILURE(BgL_auxz00_1900,BFALSE,BFALSE);} 
BgL_auxz00_1897 = 
CAR(BgL_pairz00_1319); } 
BgL_testz00_1896 = 
(BgL_auxz00_1897==BgL_keyz00_14); } 
if(BgL_testz00_1896)
{ /* Ieee/symbol.scm 242 */
obj_t BgL_arg1925z00_792;
{ /* Ieee/symbol.scm 242 */
obj_t BgL_pairz00_1320;
if(
PAIRP(BgL_plz00_783))
{ /* Ieee/symbol.scm 242 */
BgL_pairz00_1320 = BgL_plz00_783; }  else 
{ 
obj_t BgL_auxz00_1908;
BgL_auxz00_1908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9797)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_783); 
FAILURE(BgL_auxz00_1908,BFALSE,BFALSE);} 
BgL_arg1925z00_792 = 
CDR(BgL_pairz00_1320); } 
{ /* Ieee/symbol.scm 242 */
obj_t BgL_pairz00_1321;
if(
PAIRP(BgL_arg1925z00_792))
{ /* Ieee/symbol.scm 242 */
BgL_pairz00_1321 = BgL_arg1925z00_792; }  else 
{ 
obj_t BgL_auxz00_1915;
BgL_auxz00_1915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9799)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_arg1925z00_792); 
FAILURE(BgL_auxz00_1915,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_1321, BgL_valz00_15);} }  else 
{ /* Ieee/symbol.scm 244 */
obj_t BgL_arg1926z00_793;
{ /* Ieee/symbol.scm 244 */
obj_t BgL_pairz00_1323;
if(
PAIRP(BgL_plz00_783))
{ /* Ieee/symbol.scm 244 */
BgL_pairz00_1323 = BgL_plz00_783; }  else 
{ 
obj_t BgL_auxz00_1922;
BgL_auxz00_1922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9838)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_plz00_783); 
FAILURE(BgL_auxz00_1922,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 244 */
obj_t BgL_pairz00_1326;
{ /* Ieee/symbol.scm 244 */
obj_t BgL_aux2255z00_1633;
BgL_aux2255z00_1633 = 
CDR(BgL_pairz00_1323); 
if(
PAIRP(BgL_aux2255z00_1633))
{ /* Ieee/symbol.scm 244 */
BgL_pairz00_1326 = BgL_aux2255z00_1633; }  else 
{ 
obj_t BgL_auxz00_1929;
BgL_auxz00_1929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)9832)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2255z00_1633); 
FAILURE(BgL_auxz00_1929,BFALSE,BFALSE);} } 
BgL_arg1926z00_793 = 
CDR(BgL_pairz00_1326); } } 
{ 
obj_t BgL_plz00_1934;
BgL_plz00_1934 = BgL_arg1926z00_793; 
BgL_plz00_783 = BgL_plz00_1934; 
goto BgL_zc3anonymousza31918ze3z83_784;} } } } }  else 
{ /* Ieee/symbol.scm 232 */
return 
BGl_errorz00zz__errorz00(BGl_string2304z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);} } } 
}



/* _putprop! */
obj_t BGl__putpropz12z12zz__r4_symbols_6_4z00(obj_t BgL_envz00_1576, obj_t BgL_symbolz00_1577, obj_t BgL_keyz00_1578, obj_t BgL_valz00_1579)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 231 */
return 
BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1577, BgL_keyz00_1578, BgL_valz00_1579);} 
}



/* remprop! */
BGL_EXPORTED_DEF obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_16, obj_t BgL_keyz00_17)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 250 */
{ /* Ieee/symbol.scm 251 */
bool_t BgL_testz00_1937;
if(
SYMBOLP(BgL_symbolz00_16))
{ /* Ieee/symbol.scm 251 */
BgL_testz00_1937 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 251 */
BgL_testz00_1937 = 
KEYWORDP(BgL_symbolz00_16)
; } 
if(BgL_testz00_1937)
{ /* Ieee/symbol.scm 252 */
obj_t BgL_g1828z00_799;
if(
SYMBOLP(BgL_symbolz00_16))
{ /* Ieee/symbol.scm 253 */
BgL_g1828z00_799 = 
GET_SYMBOL_PLIST(BgL_symbolz00_16); }  else 
{ /* Ieee/symbol.scm 253 */
if(
KEYWORDP(BgL_symbolz00_16))
{ /* Ieee/symbol.scm 253 */
BgL_g1828z00_799 = 
GET_KEYWORD_PLIST(BgL_symbolz00_16); }  else 
{ /* Ieee/symbol.scm 253 */
BgL_g1828z00_799 = 
BGl_errorz00zz__errorz00(BGl_string2301z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_16); } } 
{ 
obj_t BgL_oldz00_801;obj_t BgL_lz00_802;
BgL_oldz00_801 = BNIL; 
BgL_lz00_802 = BgL_g1828z00_799; 
BgL_zc3anonymousza31930ze3z83_803:
if(
NULLP(BgL_lz00_802))
{ /* Ieee/symbol.scm 255 */
return BFALSE;}  else 
{ /* Ieee/symbol.scm 257 */
bool_t BgL_testz00_1950;
{ /* Ieee/symbol.scm 257 */
obj_t BgL_auxz00_1951;
{ /* Ieee/symbol.scm 257 */
obj_t BgL_pairz00_1335;
if(
PAIRP(BgL_lz00_802))
{ /* Ieee/symbol.scm 257 */
BgL_pairz00_1335 = BgL_lz00_802; }  else 
{ 
obj_t BgL_auxz00_1954;
BgL_auxz00_1954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10340)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_lz00_802); 
FAILURE(BgL_auxz00_1954,BFALSE,BFALSE);} 
BgL_auxz00_1951 = 
CAR(BgL_pairz00_1335); } 
BgL_testz00_1950 = 
(BgL_auxz00_1951==BgL_keyz00_17); } 
if(BgL_testz00_1950)
{ /* Ieee/symbol.scm 257 */
if(
PAIRP(BgL_oldz00_801))
{ /* Ieee/symbol.scm 260 */
obj_t BgL_arg1935z00_807;obj_t BgL_arg1937z00_808;
BgL_arg1935z00_807 = 
CDR(BgL_oldz00_801); 
{ /* Ieee/symbol.scm 260 */
obj_t BgL_pairz00_1338;
if(
PAIRP(BgL_lz00_802))
{ /* Ieee/symbol.scm 260 */
BgL_pairz00_1338 = BgL_lz00_802; }  else 
{ 
obj_t BgL_auxz00_1965;
BgL_auxz00_1965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10407)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_lz00_802); 
FAILURE(BgL_auxz00_1965,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 260 */
obj_t BgL_pairz00_1341;
{ /* Ieee/symbol.scm 260 */
obj_t BgL_aux2261z00_1639;
BgL_aux2261z00_1639 = 
CDR(BgL_pairz00_1338); 
if(
PAIRP(BgL_aux2261z00_1639))
{ /* Ieee/symbol.scm 260 */
BgL_pairz00_1341 = BgL_aux2261z00_1639; }  else 
{ 
obj_t BgL_auxz00_1972;
BgL_auxz00_1972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10401)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2261z00_1639); 
FAILURE(BgL_auxz00_1972,BFALSE,BFALSE);} } 
BgL_arg1937z00_808 = 
CDR(BgL_pairz00_1341); } } 
{ /* Ieee/symbol.scm 260 */
obj_t BgL_pairz00_1342;
if(
PAIRP(BgL_arg1935z00_807))
{ /* Ieee/symbol.scm 260 */
BgL_pairz00_1342 = BgL_arg1935z00_807; }  else 
{ 
obj_t BgL_auxz00_1979;
BgL_auxz00_1979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10399)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_arg1935z00_807); 
FAILURE(BgL_auxz00_1979,BFALSE,BFALSE);} 
return 
SET_CDR(BgL_pairz00_1342, BgL_arg1937z00_808);} }  else 
{ /* Ieee/symbol.scm 259 */
if(
SYMBOLP(BgL_symbolz00_16))
{ /* Ieee/symbol.scm 263 */
obj_t BgL_arg1940z00_810;
{ /* Ieee/symbol.scm 263 */
obj_t BgL_pairz00_1345;
if(
PAIRP(BgL_lz00_802))
{ /* Ieee/symbol.scm 263 */
BgL_pairz00_1345 = BgL_lz00_802; }  else 
{ 
obj_t BgL_auxz00_1988;
BgL_auxz00_1988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10485)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_lz00_802); 
FAILURE(BgL_auxz00_1988,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 263 */
obj_t BgL_pairz00_1348;
{ /* Ieee/symbol.scm 263 */
obj_t BgL_aux2267z00_1645;
BgL_aux2267z00_1645 = 
CDR(BgL_pairz00_1345); 
if(
PAIRP(BgL_aux2267z00_1645))
{ /* Ieee/symbol.scm 263 */
BgL_pairz00_1348 = BgL_aux2267z00_1645; }  else 
{ 
obj_t BgL_auxz00_1995;
BgL_auxz00_1995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10479)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2267z00_1645); 
FAILURE(BgL_auxz00_1995,BFALSE,BFALSE);} } 
BgL_arg1940z00_810 = 
CDR(BgL_pairz00_1348); } } 
return 
SET_SYMBOL_PLIST(BgL_symbolz00_16, BgL_arg1940z00_810);}  else 
{ /* Ieee/symbol.scm 264 */
obj_t BgL_arg1941z00_811;
{ /* Ieee/symbol.scm 264 */
obj_t BgL_pairz00_1349;
if(
PAIRP(BgL_lz00_802))
{ /* Ieee/symbol.scm 264 */
BgL_pairz00_1349 = BgL_lz00_802; }  else 
{ 
obj_t BgL_auxz00_2003;
BgL_auxz00_2003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10529)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_lz00_802); 
FAILURE(BgL_auxz00_2003,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 264 */
obj_t BgL_pairz00_1352;
{ /* Ieee/symbol.scm 264 */
obj_t BgL_aux2271z00_1649;
BgL_aux2271z00_1649 = 
CDR(BgL_pairz00_1349); 
if(
PAIRP(BgL_aux2271z00_1649))
{ /* Ieee/symbol.scm 264 */
BgL_pairz00_1352 = BgL_aux2271z00_1649; }  else 
{ 
obj_t BgL_auxz00_2010;
BgL_auxz00_2010 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10523)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2271z00_1649); 
FAILURE(BgL_auxz00_2010,BFALSE,BFALSE);} } 
BgL_arg1941z00_811 = 
CDR(BgL_pairz00_1352); } } 
return 
SET_KEYWORD_PLIST(BgL_symbolz00_16, BgL_arg1941z00_811);} } }  else 
{ /* Ieee/symbol.scm 266 */
obj_t BgL_arg1942z00_812;
{ /* Ieee/symbol.scm 266 */
obj_t BgL_pairz00_1353;
if(
PAIRP(BgL_lz00_802))
{ /* Ieee/symbol.scm 266 */
BgL_pairz00_1353 = BgL_lz00_802; }  else 
{ 
obj_t BgL_auxz00_2018;
BgL_auxz00_2018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10570)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_lz00_802); 
FAILURE(BgL_auxz00_2018,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 266 */
obj_t BgL_pairz00_1356;
{ /* Ieee/symbol.scm 266 */
obj_t BgL_aux2275z00_1653;
BgL_aux2275z00_1653 = 
CDR(BgL_pairz00_1353); 
if(
PAIRP(BgL_aux2275z00_1653))
{ /* Ieee/symbol.scm 266 */
BgL_pairz00_1356 = BgL_aux2275z00_1653; }  else 
{ 
obj_t BgL_auxz00_2025;
BgL_auxz00_2025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)10564)), BGl_string2303z00zz__r4_symbols_6_4z00, BGl_string2296z00zz__r4_symbols_6_4z00, BgL_aux2275z00_1653); 
FAILURE(BgL_auxz00_2025,BFALSE,BFALSE);} } 
BgL_arg1942z00_812 = 
CDR(BgL_pairz00_1356); } } 
{ 
obj_t BgL_lz00_2031;obj_t BgL_oldz00_2030;
BgL_oldz00_2030 = BgL_lz00_802; 
BgL_lz00_2031 = BgL_arg1942z00_812; 
BgL_lz00_802 = BgL_lz00_2031; 
BgL_oldz00_801 = BgL_oldz00_2030; 
goto BgL_zc3anonymousza31930ze3z83_803;} } } } }  else 
{ /* Ieee/symbol.scm 251 */
return 
BGl_errorz00zz__errorz00(BGl_string2304z00zz__r4_symbols_6_4z00, BGl_string2302z00zz__r4_symbols_6_4z00, BgL_symbolz00_16);} } } 
}



/* _remprop! */
obj_t BGl__rempropz12z12zz__r4_symbols_6_4z00(obj_t BgL_envz00_1580, obj_t BgL_symbolz00_1581, obj_t BgL_keyz00_1582)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 250 */
return 
BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1581, BgL_keyz00_1582);} 
}



/* keyword? */
BGL_EXPORTED_DEF bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_objz00_18)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 272 */
return 
KEYWORDP(BgL_objz00_18);} 
}



/* _keyword? */
obj_t BGl__keywordzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_envz00_1583, obj_t BgL_objz00_1584)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 272 */
return 
BBOOL(
KEYWORDP(BgL_objz00_1584));} 
}



/* keyword->string */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_19)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 278 */
{ /* Ieee/symbol.scm 279 */
obj_t BgL_arg1945z00_1674;
BgL_arg1945z00_1674 = 
KEYWORD_TO_STRING(BgL_keywordz00_19); 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1945z00_1674);} } 
}



/* _keyword->string */
obj_t BGl__keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1585, obj_t BgL_keywordz00_1586)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 278 */
{ /* Ieee/symbol.scm 279 */
obj_t BgL_res2313z00_1677;
{ /* Ieee/symbol.scm 279 */
obj_t BgL_keywordz00_1675;
if(
KEYWORDP(BgL_keywordz00_1586))
{ /* Ieee/symbol.scm 279 */
BgL_keywordz00_1675 = BgL_keywordz00_1586; }  else 
{ 
obj_t BgL_auxz00_2041;
BgL_auxz00_2041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)11210)), BGl_string2305z00zz__r4_symbols_6_4z00, BGl_string2306z00zz__r4_symbols_6_4z00, BgL_keywordz00_1586); 
FAILURE(BgL_auxz00_2041,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 279 */
obj_t BgL_arg1945z00_1676;
BgL_arg1945z00_1676 = 
KEYWORD_TO_STRING(BgL_keywordz00_1675); 
BgL_res2313z00_1677 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1945z00_1676); } } 
return BgL_res2313z00_1677;} } 
}



/* keyword->string! */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_20)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 284 */
return 
KEYWORD_TO_STRING(BgL_keywordz00_20);} 
}



/* _keyword->string! */
obj_t BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_envz00_1587, obj_t BgL_keywordz00_1588)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 284 */
{ /* Ieee/symbol.scm 285 */
obj_t BgL_keywordz00_1678;
if(
KEYWORDP(BgL_keywordz00_1588))
{ /* Ieee/symbol.scm 285 */
BgL_keywordz00_1678 = BgL_keywordz00_1588; }  else 
{ 
obj_t BgL_auxz00_2050;
BgL_auxz00_2050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)11508)), BGl_string2307z00zz__r4_symbols_6_4z00, BGl_string2306z00zz__r4_symbols_6_4z00, BgL_keywordz00_1588); 
FAILURE(BgL_auxz00_2050,BFALSE,BFALSE);} 
return 
KEYWORD_TO_STRING(BgL_keywordz00_1678);} } 
}



/* string->keyword */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_stringz00_21)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 290 */
return 
string_to_keyword(
BSTRING_TO_STRING(BgL_stringz00_21));} 
}



/* _string->keyword */
obj_t BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1589, obj_t BgL_stringz00_1590)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 290 */
{ /* Ieee/symbol.scm 291 */
obj_t BgL_stringz00_1679;
if(
STRINGP(BgL_stringz00_1590))
{ /* Ieee/symbol.scm 291 */
BgL_stringz00_1679 = BgL_stringz00_1590; }  else 
{ 
obj_t BgL_auxz00_2059;
BgL_auxz00_2059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)11803)), BGl_string2308z00zz__r4_symbols_6_4z00, BGl_string2292z00zz__r4_symbols_6_4z00, BgL_stringz00_1590); 
FAILURE(BgL_auxz00_2059,BFALSE,BFALSE);} 
return 
string_to_keyword(
BSTRING_TO_STRING(BgL_stringz00_1679));} } 
}



/* symbol->keyword */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_22)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 296 */
{ /* Ieee/symbol.scm 297 */
obj_t BgL_arg1946z00_1358;
{ /* Ieee/symbol.scm 297 */
obj_t BgL_res2207z00_1361;
{ /* Ieee/symbol.scm 297 */
obj_t BgL_arg1887z00_1360;
BgL_arg1887z00_1360 = 
SYMBOL_TO_STRING(BgL_symbolz00_22); 
BgL_res2207z00_1361 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1360); } 
BgL_arg1946z00_1358 = BgL_res2207z00_1361; } 
return 
string_to_keyword(
BSTRING_TO_STRING(BgL_arg1946z00_1358));} } 
}



/* _symbol->keyword */
obj_t BGl__symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1591, obj_t BgL_symbolz00_1592)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 296 */
{ /* Ieee/symbol.scm 297 */
obj_t BgL_auxz00_2069;
if(
SYMBOLP(BgL_symbolz00_1592))
{ /* Ieee/symbol.scm 297 */
BgL_auxz00_2069 = BgL_symbolz00_1592
; }  else 
{ 
obj_t BgL_auxz00_2072;
BgL_auxz00_2072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)12107)), BGl_string2309z00zz__r4_symbols_6_4z00, BGl_string2289z00zz__r4_symbols_6_4z00, BgL_symbolz00_1592); 
FAILURE(BgL_auxz00_2072,BFALSE,BFALSE);} 
return 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_2069);} } 
}



/* keyword->symbol */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_23)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 302 */
{ /* Ieee/symbol.scm 303 */
obj_t BgL_arg1948z00_1363;
{ /* Ieee/symbol.scm 303 */
obj_t BgL_res2208z00_1366;
{ /* Ieee/symbol.scm 303 */
obj_t BgL_arg1945z00_1365;
BgL_arg1945z00_1365 = 
KEYWORD_TO_STRING(BgL_keywordz00_23); 
BgL_res2208z00_1366 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1945z00_1365); } 
BgL_arg1948z00_1363 = BgL_res2208z00_1366; } 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg1948z00_1363));} } 
}



/* _keyword->symbol */
obj_t BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1593, obj_t BgL_keywordz00_1594)
{ AN_OBJECT;
{ /* Ieee/symbol.scm 302 */
{ /* Ieee/symbol.scm 303 */
obj_t BgL_auxz00_2081;
if(
KEYWORDP(BgL_keywordz00_1594))
{ /* Ieee/symbol.scm 303 */
BgL_auxz00_2081 = BgL_keywordz00_1594
; }  else 
{ 
obj_t BgL_auxz00_2084;
BgL_auxz00_2084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2287z00zz__r4_symbols_6_4z00, 
BINT(((long)12409)), BGl_string2310z00zz__r4_symbols_6_4z00, BGl_string2306z00zz__r4_symbols_6_4z00, BgL_keywordz00_1594); 
FAILURE(BgL_auxz00_2084,BFALSE,BFALSE);} 
return 
BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_2081);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00()
{ AN_OBJECT;
{ /* Ieee/symbol.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00()
{ AN_OBJECT;
{ /* Ieee/symbol.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00()
{ AN_OBJECT;
{ /* Ieee/symbol.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2311z00zz__r4_symbols_6_4z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2311z00zz__r4_symbols_6_4z00));} 
}

#ifdef __cplusplus
}
#endif
