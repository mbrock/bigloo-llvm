/*===========================================================================*/
/*   (Ieee/symbol.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/symbol.scm -indent -o objs/obj_u/Ieee/symbol.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
	static long BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00;
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t string_to_symbol(char *);
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
	BGL_EXPORTED_DECL obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t string_to_keyword(char *);
	static obj_t BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00();
	static obj_t BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2plistzd2envz00zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7d2plistza72227z00,
		BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_gensymzd2envzd2zz__r4_symbols_6_4z00,
		BgL_bgl__gensymza700za7za7__r42228za7, opt_generic_entry,
		BGl__gensymz00zz__r4_symbols_6_4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3stringzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7d2za7e3str2229z00,
		BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3symbolzd2cizd2envz31zz__r4_symbols_6_4z00,
		BgL_bgl__stringza7d2za7e3sym2230z00,
		BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7f3za7f3za7za7_2231z00,
		BGl__symbolzf3zf3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00,
		BgL_bgl__keywordza7d2za7e3st2232z00,
		BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7d2za7e3key2233z00,
		BGl__symbolzd2ze3keywordz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpropzd2envzd2zz__r4_symbols_6_4z00,
		BgL_bgl__getpropza700za7za7__r2234za7, BGl__getpropz00zz__r4_symbols_6_4z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7d2za7e3str2235z00,
		BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2appendzd2envz00zz__r4_symbols_6_4z00,
		BgL_bgl__symbolza7d2append2236za7, va_generic_entry,
		BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__stringza7d2za7e3key2237z00,
		BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_putpropz12zd2envzc0zz__r4_symbols_6_4z00,
		BgL_bgl__putpropza712za712za7za72238z00,
		BGl__putpropz12z12zz__r4_symbols_6_4z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_keywordzf3zd2envz21zz__r4_symbols_6_4z00,
		BgL_bgl__keywordza7f3za7f3za7za72239z00,
		BGl__keywordzf3zf3zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rempropz12zd2envzc0zz__r4_symbols_6_4z00,
		BgL_bgl__rempropza712za712za7za72240z00,
		BGl__rempropz12z12zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2205z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2205za700za7za7_2241za7,
		"/tmp/bigloo/runtime/Ieee/symbol.scm", 35);
	      DEFINE_STRING(BGl_string2206z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2206za700za7za7_2242za7, "_symbol->string", 15);
	      DEFINE_STRING(BGl_string2207z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2207za700za7za7_2243za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2208z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2208za700za7za7_2244za7, "_symbol->string!", 16);
	      DEFINE_STRING(BGl_string2210z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2210za700za7za7_2245za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2209z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2209za700za7za7_2246za7, "_string->symbol", 15);
	      DEFINE_STRING(BGl_string2211z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2211za700za7za7_2247za7, "_string->symbol-ci", 18);
	      DEFINE_STRING(BGl_string2212z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2212za700za7za7_2248za7, "", 0);
	      DEFINE_STRING(BGl_string2213z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2213za700za7za7_2249za7, "gensym", 6);
	      DEFINE_STRING(BGl_string2214z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2214za700za7za7_2250za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2215z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2215za700za7za7_2251za7, "symbol-plist", 12);
	      DEFINE_STRING(BGl_string2216z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2216za700za7za7_2252za7,
		"argument is neither a symbol nor a keyword", 42);
	      DEFINE_STRING(BGl_string2217z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2217za700za7za7_2253za7, "getprop", 7);
	      DEFINE_STRING(BGl_string2218z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2218za700za7za7_2254za7, "_keyword->string", 16);
	      DEFINE_STRING(BGl_string2220z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2220za700za7za7_2255za7, "_keyword->string!", 17);
	      DEFINE_STRING(BGl_string2219z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2219za700za7za7_2256za7, "keyword", 7);
	      DEFINE_STRING(BGl_string2221z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2221za700za7za7_2257za7, "_string->keyword", 16);
	      DEFINE_STRING(BGl_string2222z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2222za700za7za7_2258za7, "_symbol->keyword", 16);
	      DEFINE_STRING(BGl_string2223z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2223za700za7za7_2259za7, "_keyword->symbol", 16);
	      DEFINE_STRING(BGl_string2224z00zz__r4_symbols_6_4z00,
		BgL_bgl_string2224za700za7za7_2260za7, "__r4_symbols_6_4", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__stringza7d2za7e3sym2261z00,
		BGl__stringzd2ze3symbolz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3stringzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__keywordza7d2za7e3st2262z00,
		BGl__keywordzd2ze3stringz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl__keywordza7d2za7e3sy2263z00,
		BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long
		BgL_checksumz00_1577, char *BgL_fromz00_1578)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
					BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 14 */
			return (BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00 =
				((long) 999), BUNSPEC);
		}
	}



/* symbol? */
	BGL_EXPORTED_DEF bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 128 */
			return SYMBOLP(BgL_objz00_1);
		}
	}



/* _symbol? */
	obj_t BGl__symbolzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_envz00_1508,
		obj_t BgL_objz00_1509)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 128 */
			return BBOOL(SYMBOLP(BgL_objz00_1509));
		}
	}



/* symbol->string */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 134 */
			{	/* Ieee/symbol.scm 135 */
				obj_t BgL_arg1887z00_1563;

				BgL_arg1887z00_1563 = SYMBOL_TO_STRING(BgL_symbolz00_2);
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1563);
			}
		}
	}



/* _symbol->string */
	obj_t BGl__symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1510,
		obj_t BgL_symbolz00_1511)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 134 */
			{	/* Ieee/symbol.scm 135 */
				obj_t BgL_res2225z00_1566;

				{	/* Ieee/symbol.scm 135 */
					obj_t BgL_symbolz00_1564;

					if (SYMBOLP(BgL_symbolz00_1511))
						{	/* Ieee/symbol.scm 135 */
							BgL_symbolz00_1564 = BgL_symbolz00_1511;
						}
					else
						{
							obj_t BgL_auxz00_1591;

							BgL_auxz00_1591 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 5614)),
								BGl_string2206z00zz__r4_symbols_6_4z00,
								BGl_string2207z00zz__r4_symbols_6_4z00, BgL_symbolz00_1511);
							FAILURE(BgL_auxz00_1591, BFALSE, BFALSE);
						}
					{	/* Ieee/symbol.scm 135 */
						obj_t BgL_arg1887z00_1565;

						BgL_arg1887z00_1565 = SYMBOL_TO_STRING(BgL_symbolz00_1564);
						BgL_res2225z00_1566 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1565);
				}}
				return BgL_res2225z00_1566;
			}
		}
	}



/* symbol->string! */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_3)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 140 */
			return SYMBOL_TO_STRING(BgL_symbolz00_3);
		}
	}



/* _symbol->string! */
	obj_t BGl__symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1512, obj_t BgL_symbolz00_1513)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 140 */
			{	/* Ieee/symbol.scm 141 */
				obj_t BgL_symbolz00_1567;

				if (SYMBOLP(BgL_symbolz00_1513))
					{	/* Ieee/symbol.scm 141 */
						BgL_symbolz00_1567 = BgL_symbolz00_1513;
					}
				else
					{
						obj_t BgL_auxz00_1600;

						BgL_auxz00_1600 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 5908)),
							BGl_string2208z00zz__r4_symbols_6_4z00,
							BGl_string2207z00zz__r4_symbols_6_4z00, BgL_symbolz00_1513);
						FAILURE(BgL_auxz00_1600, BFALSE, BFALSE);
					}
				return SYMBOL_TO_STRING(BgL_symbolz00_1567);
			}
		}
	}



/* string->symbol */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t
		BgL_stringz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 146 */
			return string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_4));
		}
	}



/* _string->symbol */
	obj_t BGl__stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1514,
		obj_t BgL_stringz00_1515)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 146 */
			{	/* Ieee/symbol.scm 147 */
				obj_t BgL_stringz00_1568;

				if (STRINGP(BgL_stringz00_1515))
					{	/* Ieee/symbol.scm 147 */
						BgL_stringz00_1568 = BgL_stringz00_1515;
					}
				else
					{
						obj_t BgL_auxz00_1609;

						BgL_auxz00_1609 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 6200)),
							BGl_string2209z00zz__r4_symbols_6_4z00,
							BGl_string2210z00zz__r4_symbols_6_4z00, BgL_stringz00_1515);
						FAILURE(BgL_auxz00_1609, BFALSE, BFALSE);
					}
				return string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_1568));
			}
		}
	}



/* string->symbol-ci */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t BgL_stringz00_5)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 152 */
			{	/* Ieee/symbol.scm 153 */
				obj_t BgL_arg1888z00_1238;

				BgL_arg1888z00_1238 =
					BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_stringz00_5);
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1888z00_1238));
			}
		}
	}



/* _string->symbol-ci */
	obj_t BGl__stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1516, obj_t BgL_stringz00_1517)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 152 */
			{	/* Ieee/symbol.scm 153 */
				obj_t BgL_auxz00_1618;

				if (STRINGP(BgL_stringz00_1517))
					{	/* Ieee/symbol.scm 153 */
						BgL_auxz00_1618 = BgL_stringz00_1517;
					}
				else
					{
						obj_t BgL_auxz00_1621;

						BgL_auxz00_1621 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 6506)),
							BGl_string2211z00zz__r4_symbols_6_4z00,
							BGl_string2210z00zz__r4_symbols_6_4z00, BgL_stringz00_1517);
						FAILURE(BgL_auxz00_1621, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(BgL_auxz00_1618);
			}
		}
	}



/* symbol-append */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t
		BgL_listz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 158 */
			{	/* Ieee/symbol.scm 160 */
				obj_t BgL_arg1890z00_743;

				if (NULLP(BgL_listz00_6))
					{	/* Ieee/symbol.scm 160 */
						BgL_arg1890z00_743 = BGl_string2212z00zz__r4_symbols_6_4z00;
					}
				else
					{	/* Ieee/symbol.scm 160 */
						BgL_arg1890z00_743 =
							BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(BgL_listz00_6);
					}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1890z00_743));
			}
		}
	}



/* symbol-append' */
	obj_t BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(obj_t BgL_listz00_746)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 162 */
			if (NULLP(CDR(BgL_listz00_746)))
				{	/* Ieee/symbol.scm 164 */
					obj_t BgL_arg1894z00_749;

					BgL_arg1894z00_749 = CAR(BgL_listz00_746);
					{	/* Ieee/symbol.scm 164 */
						obj_t BgL_res2174z00_1245;

						{	/* Ieee/symbol.scm 164 */
							obj_t BgL_symbolz00_1243;

							BgL_symbolz00_1243 = BgL_arg1894z00_749;
							{	/* Ieee/symbol.scm 164 */
								obj_t BgL_arg1887z00_1244;

								BgL_arg1887z00_1244 = SYMBOL_TO_STRING(BgL_symbolz00_1243);
								BgL_res2174z00_1245 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1887z00_1244);
							}
						}
						return BgL_res2174z00_1245;
					}
				}
			else
				{	/* Ieee/symbol.scm 165 */
					obj_t BgL_arg1895z00_750;

					obj_t BgL_arg1896z00_751;

					{	/* Ieee/symbol.scm 165 */
						obj_t BgL_arg1898z00_752;

						BgL_arg1898z00_752 = CAR(BgL_listz00_746);
						{	/* Ieee/symbol.scm 165 */
							obj_t BgL_res2175z00_1249;

							{	/* Ieee/symbol.scm 165 */
								obj_t BgL_symbolz00_1247;

								BgL_symbolz00_1247 = BgL_arg1898z00_752;
								{	/* Ieee/symbol.scm 165 */
									obj_t BgL_arg1887z00_1248;

									BgL_arg1887z00_1248 = SYMBOL_TO_STRING(BgL_symbolz00_1247);
									BgL_res2175z00_1249 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1887z00_1248);
								}
							}
							BgL_arg1895z00_750 = BgL_res2175z00_1249;
						}
					}
					BgL_arg1896z00_751 =
						BGl_symbolzd2appendz72za0zz__r4_symbols_6_4z00(CDR
						(BgL_listz00_746));
					return string_append(BgL_arg1895z00_750, BgL_arg1896z00_751);
				}
		}
	}



/* _symbol-append */
	obj_t BGl__symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t BgL_envz00_1518,
		obj_t BgL_listz00_1519)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 158 */
			return BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_listz00_1519);
		}
	}



/* _gensym */
	obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t BgL_envz00_9,
		obj_t BgL_optz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 176 */
			{	/* Ieee/symbol.scm 176 */

				{	/* Ieee/symbol.scm 176 */
					int BgL_aux1859z00_757;

					BgL_aux1859z00_757 = VECTOR_LENGTH(BgL_optz00_8);
					switch ((long) (BgL_aux1859z00_757))
						{
						case ((long) 0):

							{	/* Ieee/symbol.scm 176 */

								return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
							break;
						case ((long) 1):

							{	/* Ieee/symbol.scm 176 */
								obj_t BgL_argz00_760;

								BgL_argz00_760 = VECTOR_REF(BgL_optz00_8, (int) (((long) 0)));
								{	/* Ieee/symbol.scm 176 */

									return BGl_gensymz00zz__r4_symbols_6_4z00(BgL_argz00_760);
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



/* gensym */
	BGL_EXPORTED_DEF obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t BgL_argz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 176 */
			{	/* Ieee/symbol.scm 179 */
				obj_t BgL_argz00_761;

				if (CBOOL(BgL_argz00_7))
					{	/* Ieee/symbol.scm 180 */
						if (SYMBOLP(BgL_argz00_7))
							{	/* Ieee/symbol.scm 181 */
								obj_t BgL_res2176z00_1255;

								{	/* Ieee/symbol.scm 181 */
									obj_t BgL_symbolz00_1253;

									BgL_symbolz00_1253 = BgL_argz00_7;
									{	/* Ieee/symbol.scm 181 */
										obj_t BgL_arg1887z00_1254;

										BgL_arg1887z00_1254 = SYMBOL_TO_STRING(BgL_symbolz00_1253);
										BgL_res2176z00_1255 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1887z00_1254);
									}
								}
								BgL_argz00_761 = BgL_res2176z00_1255;
							}
						else
							{	/* Ieee/symbol.scm 181 */
								if (STRINGP(BgL_argz00_7))
									{	/* Ieee/symbol.scm 182 */
										BgL_argz00_761 = BgL_argz00_7;
									}
								else
									{	/* Ieee/symbol.scm 182 */
										BgL_argz00_761 =
											BGl_errorz00zz__errorz00
											(BGl_string2213z00zz__r4_symbols_6_4z00,
											BGl_string2214z00zz__r4_symbols_6_4z00, BgL_argz00_7);
									}
							}
					}
				else
					{	/* Ieee/symbol.scm 180 */
						BgL_argz00_761 = BgL_argz00_7;
					}
				return bgl_gensym(BgL_argz00_761);
			}
		}
	}



/* symbol-plist */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_10)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 202 */
			if (SYMBOLP(BgL_symbolz00_10))
				{	/* Ieee/symbol.scm 204 */
					return GET_SYMBOL_PLIST(BgL_symbolz00_10);
				}
			else
				{	/* Ieee/symbol.scm 204 */
					if (KEYWORDP(BgL_symbolz00_10))
						{	/* Ieee/symbol.scm 204 */
							return GET_KEYWORD_PLIST(BgL_symbolz00_10);
						}
					else
						{	/* Ieee/symbol.scm 204 */
							return
								BGl_errorz00zz__errorz00(BGl_string2215z00zz__r4_symbols_6_4z00,
								BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_10);
						}
				}
		}
	}



/* _symbol-plist */
	obj_t BGl__symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t BgL_envz00_1520,
		obj_t BgL_symbolz00_1521)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 202 */
			if (SYMBOLP(BgL_symbolz00_1521))
				{	/* Ieee/symbol.scm 204 */
					return GET_SYMBOL_PLIST(BgL_symbolz00_1521);
				}
			else
				{	/* Ieee/symbol.scm 204 */
					if (KEYWORDP(BgL_symbolz00_1521))
						{	/* Ieee/symbol.scm 204 */
							return GET_KEYWORD_PLIST(BgL_symbolz00_1521);
						}
					else
						{	/* Ieee/symbol.scm 204 */
							return
								BGl_errorz00zz__errorz00(BGl_string2215z00zz__r4_symbols_6_4z00,
								BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_1521);
						}
				}
		}
	}



/* getprop */
	BGL_EXPORTED_DEF obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_11, obj_t BgL_keyz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 216 */
			{	/* Ieee/symbol.scm 217 */
				bool_t BgL_testz00_1675;

				if (SYMBOLP(BgL_symbolz00_11))
					{	/* Ieee/symbol.scm 217 */
						BgL_testz00_1675 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 217 */
						BgL_testz00_1675 = KEYWORDP(BgL_symbolz00_11);
					}
				if (BgL_testz00_1675)
					{	/* Ieee/symbol.scm 218 */
						obj_t BgL_g1825z00_767;

						if (SYMBOLP(BgL_symbolz00_11))
							{	/* Ieee/symbol.scm 218 */
								BgL_g1825z00_767 = GET_SYMBOL_PLIST(BgL_symbolz00_11);
							}
						else
							{	/* Ieee/symbol.scm 218 */
								if (KEYWORDP(BgL_symbolz00_11))
									{	/* Ieee/symbol.scm 218 */
										BgL_g1825z00_767 = GET_KEYWORD_PLIST(BgL_symbolz00_11);
									}
								else
									{	/* Ieee/symbol.scm 218 */
										BgL_g1825z00_767 =
											BGl_errorz00zz__errorz00
											(BGl_string2215z00zz__r4_symbols_6_4z00,
											BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_11);
									}
							}
						{
							obj_t BgL_plz00_769;

							BgL_plz00_769 = BgL_g1825z00_767;
						BgL_zc3anonymousza31907ze3z83_770:
							if (NULLP(BgL_plz00_769))
								{	/* Ieee/symbol.scm 220 */
									return BFALSE;
								}
							else
								{	/* Ieee/symbol.scm 220 */
									if ((CAR(BgL_plz00_769) == BgL_keyz00_12))
										{	/* Ieee/symbol.scm 223 */
											obj_t BgL_pairz00_1270;

											BgL_pairz00_1270 = BgL_plz00_769;
											return CAR(CDR(BgL_pairz00_1270));
										}
									else
										{	/* Ieee/symbol.scm 225 */
											obj_t BgL_arg1910z00_773;

											{	/* Ieee/symbol.scm 225 */
												obj_t BgL_pairz00_1274;

												BgL_pairz00_1274 = BgL_plz00_769;
												BgL_arg1910z00_773 = CDR(CDR(BgL_pairz00_1274));
											}
											{
												obj_t BgL_plz00_1695;

												BgL_plz00_1695 = BgL_arg1910z00_773;
												BgL_plz00_769 = BgL_plz00_1695;
												goto BgL_zc3anonymousza31907ze3z83_770;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 217 */
						return
							BGl_errorz00zz__errorz00(BGl_string2217z00zz__r4_symbols_6_4z00,
							BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_11);
					}
			}
		}
	}



/* _getprop */
	obj_t BGl__getpropz00zz__r4_symbols_6_4z00(obj_t BgL_envz00_1522,
		obj_t BgL_symbolz00_1523, obj_t BgL_keyz00_1524)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 216 */
			return
				BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_1523,
				BgL_keyz00_1524);
		}
	}



/* putprop! */
	BGL_EXPORTED_DEF obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_13, obj_t BgL_keyz00_14, obj_t BgL_valz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 231 */
			{	/* Ieee/symbol.scm 232 */
				bool_t BgL_testz00_1698;

				if (SYMBOLP(BgL_symbolz00_13))
					{	/* Ieee/symbol.scm 232 */
						BgL_testz00_1698 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 232 */
						BgL_testz00_1698 = KEYWORDP(BgL_symbolz00_13);
					}
				if (BgL_testz00_1698)
					{	/* Ieee/symbol.scm 233 */
						obj_t BgL_g1826z00_778;

						if (SYMBOLP(BgL_symbolz00_13))
							{	/* Ieee/symbol.scm 233 */
								BgL_g1826z00_778 = GET_SYMBOL_PLIST(BgL_symbolz00_13);
							}
						else
							{	/* Ieee/symbol.scm 233 */
								if (KEYWORDP(BgL_symbolz00_13))
									{	/* Ieee/symbol.scm 233 */
										BgL_g1826z00_778 = GET_KEYWORD_PLIST(BgL_symbolz00_13);
									}
								else
									{	/* Ieee/symbol.scm 233 */
										BgL_g1826z00_778 =
											BGl_errorz00zz__errorz00
											(BGl_string2215z00zz__r4_symbols_6_4z00,
											BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);
									}
							}
						{
							obj_t BgL_plz00_780;

							BgL_plz00_780 = BgL_g1826z00_778;
						BgL_zc3anonymousza31914ze3z83_781:
							if (NULLP(BgL_plz00_780))
								{	/* Ieee/symbol.scm 236 */
									obj_t BgL_newz00_783;

									{	/* Ieee/symbol.scm 236 */
										obj_t BgL_arg1918z00_785;

										{	/* Ieee/symbol.scm 236 */
											obj_t BgL_arg1919z00_786;

											if (SYMBOLP(BgL_symbolz00_13))
												{	/* Ieee/symbol.scm 236 */
													BgL_arg1919z00_786 =
														GET_SYMBOL_PLIST(BgL_symbolz00_13);
												}
											else
												{	/* Ieee/symbol.scm 236 */
													if (KEYWORDP(BgL_symbolz00_13))
														{	/* Ieee/symbol.scm 236 */
															BgL_arg1919z00_786 =
																GET_KEYWORD_PLIST(BgL_symbolz00_13);
														}
													else
														{	/* Ieee/symbol.scm 236 */
															BgL_arg1919z00_786 =
																BGl_errorz00zz__errorz00
																(BGl_string2215z00zz__r4_symbols_6_4z00,
																BGl_string2216z00zz__r4_symbols_6_4z00,
																BgL_symbolz00_13);
														}
												}
											{	/* Ieee/symbol.scm 236 */
												obj_t BgL_list1920z00_787;

												BgL_list1920z00_787 =
													MAKE_PAIR(BgL_arg1919z00_786, BNIL);
												BgL_arg1918z00_785 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_valz00_15, BgL_list1920z00_787);
											}
										}
										BgL_newz00_783 =
											MAKE_PAIR(BgL_keyz00_14, BgL_arg1918z00_785);
									}
									if (SYMBOLP(BgL_symbolz00_13))
										{	/* Ieee/symbol.scm 237 */
											SET_SYMBOL_PLIST(BgL_symbolz00_13, BgL_newz00_783);
										}
									else
										{	/* Ieee/symbol.scm 237 */
											SET_KEYWORD_PLIST(BgL_symbolz00_13, BgL_newz00_783);
										}
									return BgL_newz00_783;
								}
							else
								{	/* Ieee/symbol.scm 235 */
									if ((CAR(BgL_plz00_780) == BgL_keyz00_14))
										{	/* Ieee/symbol.scm 242 */
											obj_t BgL_auxz00_1728;

											BgL_auxz00_1728 = CDR(BgL_plz00_780);
											return SET_CAR(BgL_auxz00_1728, BgL_valz00_15);
										}
									else
										{	/* Ieee/symbol.scm 244 */
											obj_t BgL_arg1923z00_790;

											{	/* Ieee/symbol.scm 244 */
												obj_t BgL_pairz00_1296;

												BgL_pairz00_1296 = BgL_plz00_780;
												BgL_arg1923z00_790 = CDR(CDR(BgL_pairz00_1296));
											}
											{
												obj_t BgL_plz00_1733;

												BgL_plz00_1733 = BgL_arg1923z00_790;
												BgL_plz00_780 = BgL_plz00_1733;
												goto BgL_zc3anonymousza31914ze3z83_781;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 232 */
						return
							BGl_errorz00zz__errorz00(BGl_string2217z00zz__r4_symbols_6_4z00,
							BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);
					}
			}
		}
	}



/* _putprop! */
	obj_t BGl__putpropz12z12zz__r4_symbols_6_4z00(obj_t BgL_envz00_1525,
		obj_t BgL_symbolz00_1526, obj_t BgL_keyz00_1527, obj_t BgL_valz00_1528)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 231 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1526,
				BgL_keyz00_1527, BgL_valz00_1528);
		}
	}



/* remprop! */
	BGL_EXPORTED_DEF obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_16, obj_t BgL_keyz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 250 */
			{	/* Ieee/symbol.scm 251 */
				bool_t BgL_testz00_1736;

				if (SYMBOLP(BgL_symbolz00_16))
					{	/* Ieee/symbol.scm 251 */
						BgL_testz00_1736 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 251 */
						BgL_testz00_1736 = KEYWORDP(BgL_symbolz00_16);
					}
				if (BgL_testz00_1736)
					{	/* Ieee/symbol.scm 252 */
						obj_t BgL_g1828z00_796;

						if (SYMBOLP(BgL_symbolz00_16))
							{	/* Ieee/symbol.scm 253 */
								BgL_g1828z00_796 = GET_SYMBOL_PLIST(BgL_symbolz00_16);
							}
						else
							{	/* Ieee/symbol.scm 253 */
								if (KEYWORDP(BgL_symbolz00_16))
									{	/* Ieee/symbol.scm 253 */
										BgL_g1828z00_796 = GET_KEYWORD_PLIST(BgL_symbolz00_16);
									}
								else
									{	/* Ieee/symbol.scm 253 */
										BgL_g1828z00_796 =
											BGl_errorz00zz__errorz00
											(BGl_string2215z00zz__r4_symbols_6_4z00,
											BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_16);
									}
							}
						{
							obj_t BgL_oldz00_798;

							obj_t BgL_lz00_799;

							BgL_oldz00_798 = BNIL;
							BgL_lz00_799 = BgL_g1828z00_796;
						BgL_zc3anonymousza31927ze3z83_800:
							if (NULLP(BgL_lz00_799))
								{	/* Ieee/symbol.scm 255 */
									return BFALSE;
								}
							else
								{	/* Ieee/symbol.scm 255 */
									if ((CAR(BgL_lz00_799) == BgL_keyz00_17))
										{	/* Ieee/symbol.scm 257 */
											if (PAIRP(BgL_oldz00_798))
												{	/* Ieee/symbol.scm 260 */
													obj_t BgL_arg1931z00_804;

													obj_t BgL_arg1932z00_805;

													BgL_arg1931z00_804 = CDR(BgL_oldz00_798);
													{	/* Ieee/symbol.scm 260 */
														obj_t BgL_pairz00_1311;

														BgL_pairz00_1311 = BgL_lz00_799;
														BgL_arg1932z00_805 = CDR(CDR(BgL_pairz00_1311));
													}
													return
														SET_CDR(BgL_arg1931z00_804, BgL_arg1932z00_805);
												}
											else
												{	/* Ieee/symbol.scm 259 */
													if (SYMBOLP(BgL_symbolz00_16))
														{	/* Ieee/symbol.scm 263 */
															obj_t BgL_arg1935z00_807;

															{	/* Ieee/symbol.scm 263 */
																obj_t BgL_pairz00_1318;

																BgL_pairz00_1318 = BgL_lz00_799;
																BgL_arg1935z00_807 = CDR(CDR(BgL_pairz00_1318));
															}
															return
																SET_SYMBOL_PLIST(BgL_symbolz00_16,
																BgL_arg1935z00_807);
														}
													else
														{	/* Ieee/symbol.scm 264 */
															obj_t BgL_arg1937z00_808;

															{	/* Ieee/symbol.scm 264 */
																obj_t BgL_pairz00_1322;

																BgL_pairz00_1322 = BgL_lz00_799;
																BgL_arg1937z00_808 = CDR(CDR(BgL_pairz00_1322));
															}
															return
																SET_KEYWORD_PLIST(BgL_symbolz00_16,
																BgL_arg1937z00_808);
														}
												}
										}
									else
										{	/* Ieee/symbol.scm 266 */
											obj_t BgL_arg1938z00_809;

											{	/* Ieee/symbol.scm 266 */
												obj_t BgL_pairz00_1326;

												BgL_pairz00_1326 = BgL_lz00_799;
												BgL_arg1938z00_809 = CDR(CDR(BgL_pairz00_1326));
											}
											{
												obj_t BgL_lz00_1769;

												obj_t BgL_oldz00_1768;

												BgL_oldz00_1768 = BgL_lz00_799;
												BgL_lz00_1769 = BgL_arg1938z00_809;
												BgL_lz00_799 = BgL_lz00_1769;
												BgL_oldz00_798 = BgL_oldz00_1768;
												goto BgL_zc3anonymousza31927ze3z83_800;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 251 */
						return
							BGl_errorz00zz__errorz00(BGl_string2217z00zz__r4_symbols_6_4z00,
							BGl_string2216z00zz__r4_symbols_6_4z00, BgL_symbolz00_16);
					}
			}
		}
	}



/* _remprop! */
	obj_t BGl__rempropz12z12zz__r4_symbols_6_4z00(obj_t BgL_envz00_1529,
		obj_t BgL_symbolz00_1530, obj_t BgL_keyz00_1531)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 250 */
			return
				BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1530,
				BgL_keyz00_1531);
		}
	}



/* keyword? */
	BGL_EXPORTED_DEF bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t
		BgL_objz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 272 */
			return KEYWORDP(BgL_objz00_18);
		}
	}



/* _keyword? */
	obj_t BGl__keywordzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_envz00_1532,
		obj_t BgL_objz00_1533)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 272 */
			return BBOOL(KEYWORDP(BgL_objz00_1533));
		}
	}



/* keyword->string */
	BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t
		BgL_keywordz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 278 */
			{	/* Ieee/symbol.scm 279 */
				obj_t BgL_arg1942z00_1571;

				BgL_arg1942z00_1571 = KEYWORD_TO_STRING(BgL_keywordz00_19);
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1942z00_1571);
			}
		}
	}



/* _keyword->string */
	obj_t BGl__keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1534,
		obj_t BgL_keywordz00_1535)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 278 */
			{	/* Ieee/symbol.scm 279 */
				obj_t BgL_res2226z00_1574;

				{	/* Ieee/symbol.scm 279 */
					obj_t BgL_keywordz00_1572;

					if (KEYWORDP(BgL_keywordz00_1535))
						{	/* Ieee/symbol.scm 279 */
							BgL_keywordz00_1572 = BgL_keywordz00_1535;
						}
					else
						{
							obj_t BgL_auxz00_1779;

							BgL_auxz00_1779 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 11210)),
								BGl_string2218z00zz__r4_symbols_6_4z00,
								BGl_string2219z00zz__r4_symbols_6_4z00, BgL_keywordz00_1535);
							FAILURE(BgL_auxz00_1779, BFALSE, BFALSE);
						}
					{	/* Ieee/symbol.scm 279 */
						obj_t BgL_arg1942z00_1573;

						BgL_arg1942z00_1573 = KEYWORD_TO_STRING(BgL_keywordz00_1572);
						BgL_res2226z00_1574 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1942z00_1573);
				}}
				return BgL_res2226z00_1574;
			}
		}
	}



/* keyword->string! */
	BGL_EXPORTED_DEF obj_t
		BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 284 */
			return KEYWORD_TO_STRING(BgL_keywordz00_20);
		}
	}



/* _keyword->string! */
	obj_t BGl__keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1536, obj_t BgL_keywordz00_1537)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 284 */
			{	/* Ieee/symbol.scm 285 */
				obj_t BgL_keywordz00_1575;

				if (KEYWORDP(BgL_keywordz00_1537))
					{	/* Ieee/symbol.scm 285 */
						BgL_keywordz00_1575 = BgL_keywordz00_1537;
					}
				else
					{
						obj_t BgL_auxz00_1788;

						BgL_auxz00_1788 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 11508)),
							BGl_string2220z00zz__r4_symbols_6_4z00,
							BGl_string2219z00zz__r4_symbols_6_4z00, BgL_keywordz00_1537);
						FAILURE(BgL_auxz00_1788, BFALSE, BFALSE);
					}
				return KEYWORD_TO_STRING(BgL_keywordz00_1575);
			}
		}
	}



/* string->keyword */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t
		BgL_stringz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 290 */
			return string_to_keyword(BSTRING_TO_STRING(BgL_stringz00_21));
		}
	}



/* _string->keyword */
	obj_t BGl__stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1538,
		obj_t BgL_stringz00_1539)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 290 */
			{	/* Ieee/symbol.scm 291 */
				obj_t BgL_stringz00_1576;

				if (STRINGP(BgL_stringz00_1539))
					{	/* Ieee/symbol.scm 291 */
						BgL_stringz00_1576 = BgL_stringz00_1539;
					}
				else
					{
						obj_t BgL_auxz00_1797;

						BgL_auxz00_1797 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 11803)),
							BGl_string2221z00zz__r4_symbols_6_4z00,
							BGl_string2210z00zz__r4_symbols_6_4z00, BgL_stringz00_1539);
						FAILURE(BgL_auxz00_1797, BFALSE, BFALSE);
					}
				return string_to_keyword(BSTRING_TO_STRING(BgL_stringz00_1576));
			}
		}
	}



/* symbol->keyword */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 296 */
			{	/* Ieee/symbol.scm 297 */
				obj_t BgL_arg1943z00_1331;

				{	/* Ieee/symbol.scm 297 */
					obj_t BgL_res2177z00_1334;

					{	/* Ieee/symbol.scm 297 */
						obj_t BgL_arg1887z00_1333;

						BgL_arg1887z00_1333 = SYMBOL_TO_STRING(BgL_symbolz00_22);
						BgL_res2177z00_1334 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1887z00_1333);
					}
					BgL_arg1943z00_1331 = BgL_res2177z00_1334;
				}
				return string_to_keyword(BSTRING_TO_STRING(BgL_arg1943z00_1331));
			}
		}
	}



/* _symbol->keyword */
	obj_t BGl__symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1540,
		obj_t BgL_symbolz00_1541)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 296 */
			{	/* Ieee/symbol.scm 297 */
				obj_t BgL_auxz00_1807;

				if (SYMBOLP(BgL_symbolz00_1541))
					{	/* Ieee/symbol.scm 297 */
						BgL_auxz00_1807 = BgL_symbolz00_1541;
					}
				else
					{
						obj_t BgL_auxz00_1810;

						BgL_auxz00_1810 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 12107)),
							BGl_string2222z00zz__r4_symbols_6_4z00,
							BGl_string2207z00zz__r4_symbols_6_4z00, BgL_symbolz00_1541);
						FAILURE(BgL_auxz00_1810, BFALSE, BFALSE);
					}
				return BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_1807);
			}
		}
	}



/* keyword->symbol */
	BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t
		BgL_keywordz00_23)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 302 */
			{	/* Ieee/symbol.scm 303 */
				obj_t BgL_arg1944z00_1336;

				{	/* Ieee/symbol.scm 303 */
					obj_t BgL_res2178z00_1339;

					{	/* Ieee/symbol.scm 303 */
						obj_t BgL_arg1942z00_1338;

						BgL_arg1942z00_1338 = KEYWORD_TO_STRING(BgL_keywordz00_23);
						BgL_res2178z00_1339 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1942z00_1338);
					}
					BgL_arg1944z00_1336 = BgL_res2178z00_1339;
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1944z00_1336));
			}
		}
	}



/* _keyword->symbol */
	obj_t BGl__keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_envz00_1542,
		obj_t BgL_keywordz00_1543)
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 302 */
			{	/* Ieee/symbol.scm 303 */
				obj_t BgL_auxz00_1819;

				if (KEYWORDP(BgL_keywordz00_1543))
					{	/* Ieee/symbol.scm 303 */
						BgL_auxz00_1819 = BgL_keywordz00_1543;
					}
				else
					{
						obj_t BgL_auxz00_1822;

						BgL_auxz00_1822 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2205z00zz__r4_symbols_6_4z00, BINT(((long) 12409)),
							BGl_string2223z00zz__r4_symbols_6_4z00,
							BGl_string2219z00zz__r4_symbols_6_4z00, BgL_keywordz00_1543);
						FAILURE(BgL_auxz00_1822, BFALSE, BFALSE);
					}
				return BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_1819);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00()
	{
		AN_OBJECT;
		{	/* Ieee/symbol.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2224z00zz__r4_symbols_6_4z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2224z00zz__r4_symbols_6_4z00));
		}
	}

#ifdef __cplusplus
}
#endif
