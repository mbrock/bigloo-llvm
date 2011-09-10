/*===========================================================================*/
/*   (Llib/bexit.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/bexit.scm -indent -o objs/obj_s/Llib/bexit.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__bexitz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__bexitz00();
BGL_EXPORTED_DECL bool_t unwind_stack_value_p(obj_t);
static obj_t BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00(obj_t, obj_t);
static obj_t BGl__unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__bexitz00();
BGL_EXPORTED_DECL obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl__valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00();
static obj_t BGl_symbol2180z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_symbol2182z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_symbol2184z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_symbol2187z00zz__bexitz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2193z00zz__bexitz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
BGL_EXPORTED_DECL obj_t bgl_uncaught_exception_handler(obj_t);
BGL_EXPORTED_DECL obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__unwindzd2stackzd2untilz12z12zz__bexitz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00(obj_t, obj_t);
static obj_t BGl_list2179z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_list2186z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__bexitz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2untilz12zd2envz12zz__bexitz00, BgL_bgl__unwindza7d2untilza72197z00, BGl__unwindzd2untilz12zc0zz__bexitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_valzd2fromzd2exitzf3zd2envz21zz__bexitz00, BgL_bgl__valza7d2fromza7d2ex2198z00, BGl__valzd2fromzd2exitzf3zf3zz__bexitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2stackzd2untilz12zd2envzc0zz__bexitz00, BgL_bgl__unwindza7d2stackza72199z00, BGl__unwindzd2stackzd2untilz12z12zz__bexitz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string2178z00zz__bexitz00, BgL_bgl_string2178za700za7za7_2200za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2181z00zz__bexitz00, BgL_bgl_string2181za700za7za7_2201za7, "funcall", 7 );
DEFINE_STRING( BGl_string2183z00zz__bexitz00, BgL_bgl_string2183za700za7za7_2202za7, "proc", 4 );
DEFINE_STRING( BGl_string2185z00zz__bexitz00, BgL_bgl_string2185za700za7za7_2203za7, "val", 3 );
DEFINE_STRING( BGl_string2188z00zz__bexitz00, BgL_bgl_string2188za700za7za7_2204za7, "fun1889", 7 );
DEFINE_STRING( BGl_string2190z00zz__bexitz00, BgL_bgl_string2190za700za7za7_2205za7, "loop", 4 );
DEFINE_STRING( BGl_string2189z00zz__bexitz00, BgL_bgl_string2189za700za7za7_2206za7, "/tmp/bigloo/runtime/Llib/bexit.scm", 34 );
DEFINE_STRING( BGl_string2191z00zz__bexitz00, BgL_bgl_string2191za700za7za7_2207za7, "long", 4 );
DEFINE_STRING( BGl_string2192z00zz__bexitz00, BgL_bgl_string2192za700za7za7_2208za7, "pair", 4 );
DEFINE_STRING( BGl_string2194z00zz__bexitz00, BgL_bgl_string2194za700za7za7_2209za7, "unwind-until!", 13 );
DEFINE_STRING( BGl_string2195z00zz__bexitz00, BgL_bgl_string2195za700za7za7_2210za7, "exit out of dynamic scope", 25 );
DEFINE_STRING( BGl_string2196z00zz__bexitz00, BgL_bgl_string2196za700za7za7_2211za7, "__bexit", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00, BgL_bgl__defaultza7d2uncau2212za7, BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2stackzd2valuezf3zd2envz21zz__bexitz00, BgL_bgl__unwindza7d2stackza72213z00, BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long BgL_checksumz00_1414, char * BgL_fromz00_1415)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__bexitz00))
{ 
BGl_requirezd2initializa7ationz75zz__bexitz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__bexitz00(); 
BGl_importedzd2moduleszd2initz00zz__bexitz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__bexitz00()
{ AN_OBJECT;
{ /* Llib/bexit.scm 14 */
BGl_symbol2180z00zz__bexitz00 = 
bstring_to_symbol(BGl_string2181z00zz__bexitz00); 
BGl_symbol2182z00zz__bexitz00 = 
bstring_to_symbol(BGl_string2183z00zz__bexitz00); 
BGl_symbol2184z00zz__bexitz00 = 
bstring_to_symbol(BGl_string2185z00zz__bexitz00); 
BGl_list2179z00zz__bexitz00 = 
MAKE_PAIR(BGl_symbol2180z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2182z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2182z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2184z00zz__bexitz00, BNIL)))); 
BGl_symbol2187z00zz__bexitz00 = 
bstring_to_symbol(BGl_string2188z00zz__bexitz00); 
BGl_list2186z00zz__bexitz00 = 
MAKE_PAIR(BGl_symbol2180z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2187z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2187z00zz__bexitz00, 
MAKE_PAIR(BGl_symbol2184z00zz__bexitz00, BNIL)))); 
return ( 
BGl_symbol2193z00zz__bexitz00 = 
bstring_to_symbol(BGl_string2194z00zz__bexitz00), BUNSPEC) ;} 
}



/* val-from-exit? */
BGL_EXPORTED_DEF obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t BgL_valz00_1)
{ AN_OBJECT;
{ /* Llib/bexit.scm 94 */
{ /* Llib/bexit.scm 95 */
obj_t BgL_arg1880z00_1178;
BgL_arg1880z00_1178 = 
BGL_EXITD_VAL(); 
return 
BBOOL(
(BgL_valz00_1==BgL_arg1880z00_1178));} } 
}



/* _val-from-exit? */
obj_t BGl__valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t BgL_envz00_1382, obj_t BgL_valz00_1383)
{ AN_OBJECT;
{ /* Llib/bexit.scm 94 */
return 
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_valz00_1383);} 
}



/* unwind-stack-value? */
BGL_EXPORTED_DEF bool_t unwind_stack_value_p(obj_t BgL_valz00_2)
{ AN_OBJECT;
{ /* Llib/bexit.scm 105 */
{ /* Llib/bexit.scm 106 */
obj_t BgL_arg1880z00_1180;
BgL_arg1880z00_1180 = 
BGL_EXITD_VAL(); 
return 
(BgL_valz00_2==BgL_arg1880z00_1180);} } 
}



/* _unwind-stack-value? */
obj_t BGl__unwindzd2stackzd2valuezf3zf3zz__bexitz00(obj_t BgL_envz00_1384, obj_t BgL_valz00_1385)
{ AN_OBJECT;
{ /* Llib/bexit.scm 105 */
return 
BBOOL(
unwind_stack_value_p(BgL_valz00_1385));} 
}



/* unwind-until! */
BGL_EXPORTED_DEF obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t BgL_exitdz00_3, obj_t BgL_valz00_4)
{ AN_OBJECT;
{ /* Llib/bexit.scm 115 */
if(
PAIRP(BgL_exitdz00_3))
{ /* Llib/bexit.scm 116 */
return 
unwind_stack_until(
CAR(BgL_exitdz00_3), BFALSE, BgL_valz00_4, 
CDR(BgL_exitdz00_3));}  else 
{ /* Llib/bexit.scm 116 */
return 
unwind_stack_until(BgL_exitdz00_3, BFALSE, BgL_valz00_4, BFALSE);} } 
}



/* _unwind-until! */
obj_t BGl__unwindzd2untilz12zc0zz__bexitz00(obj_t BgL_envz00_1386, obj_t BgL_exitdz00_1387, obj_t BgL_valz00_1388)
{ AN_OBJECT;
{ /* Llib/bexit.scm 115 */
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_exitdz00_1387, BgL_valz00_1388);} 
}



/* unwind-stack-until! */
BGL_EXPORTED_DEF obj_t unwind_stack_until(obj_t BgL_exitdz00_5, obj_t BgL_estampz00_6, obj_t BgL_valz00_7, obj_t BgL_procz00_8)
{ AN_OBJECT;
{ /* Llib/bexit.scm 128 */
{ 

BgL_zc3anonymousza31884ze3z83_720:
{ /* Llib/bexit.scm 130 */
obj_t BgL_exitdzd2topzd2_721;
BgL_exitdzd2topzd2_721 = 
BGL_EXITD_TOP_AS_OBJ(); 
if(
BGL_EXITD_BOTTOMP(BgL_exitdzd2topzd2_721))
{ /* Llib/bexit.scm 131 */
if(
PROCEDUREP(BgL_procz00_8))
{ /* Llib/bexit.scm 133 */
obj_t BgL_funz00_1396;
BgL_funz00_1396 = BgL_procz00_8; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1396, ((long)1)))
{ /* Llib/bexit.scm 133 */
return 
PROCEDURE_ENTRY(BgL_funz00_1396)(BgL_procz00_8, BgL_valz00_7, BEOA);}  else 
{ /* Llib/bexit.scm 133 */
FAILURE(BGl_string2178z00zz__bexitz00,BGl_list2179z00zz__bexitz00,BgL_funz00_1396);} }  else 
{ /* Llib/bexit.scm 134 */
obj_t BgL_hdlz00_724;
BgL_hdlz00_724 = 
BGL_UNCAUGHT_EXCEPTION_HANDLER_GET(); 
{ /* Llib/bexit.scm 135 */
obj_t BgL_fun1889z00_726;
if(
PROCEDUREP(BgL_hdlz00_724))
{ /* Llib/bexit.scm 135 */
BgL_fun1889z00_726 = BgL_hdlz00_724; }  else 
{ /* Llib/bexit.scm 135 */
BgL_fun1889z00_726 = BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1889z00_726, ((long)1)))
{ /* Llib/bexit.scm 135 */
return 
PROCEDURE_ENTRY(BgL_fun1889z00_726)(BgL_fun1889z00_726, BgL_valz00_7, BEOA);}  else 
{ /* Llib/bexit.scm 135 */
FAILURE(BGl_string2178z00zz__bexitz00,BGl_list2186z00zz__bexitz00,BgL_fun1889z00_726);} } } }  else 
{ /* Llib/bexit.scm 131 */
POP_EXIT(); 
{ /* Llib/bexit.scm 142 */
bool_t BgL_testz00_1468;
if(
(BgL_exitdzd2topzd2_721==BgL_exitdz00_5))
{ /* Llib/bexit.scm 143 */
bool_t BgL__ortest_1824z00_735;
if(
INTEGERP(BgL_estampz00_6))
{ /* Llib/bexit.scm 143 */
BgL__ortest_1824z00_735 = ((bool_t)0); }  else 
{ /* Llib/bexit.scm 143 */
BgL__ortest_1824z00_735 = ((bool_t)1); } 
if(BgL__ortest_1824z00_735)
{ /* Llib/bexit.scm 143 */
BgL_testz00_1468 = BgL__ortest_1824z00_735
; }  else 
{ /* Llib/bexit.scm 144 */
obj_t BgL_arg1898z00_736;
BgL_arg1898z00_736 = 
EXITD_STAMP(BgL_exitdzd2topzd2_721); 
{ /* Llib/bexit.scm 144 */
long BgL_n1z00_1187;long BgL_n2z00_1188;
BgL_n1z00_1187 = 
(long)CINT(BgL_arg1898z00_736); 
{ /* Llib/bexit.scm 144 */
obj_t BgL_auxz00_1476;
if(
INTEGERP(BgL_estampz00_6))
{ /* Llib/bexit.scm 144 */
BgL_auxz00_1476 = BgL_estampz00_6
; }  else 
{ 
obj_t BgL_auxz00_1479;
BgL_auxz00_1479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2189z00zz__bexitz00, 
BINT(((long)6087)), BGl_string2190z00zz__bexitz00, BGl_string2191z00zz__bexitz00, BgL_estampz00_6); 
FAILURE(BgL_auxz00_1479,BFALSE,BFALSE);} 
BgL_n2z00_1188 = 
(long)CINT(BgL_auxz00_1476); } 
BgL_testz00_1468 = 
(BgL_n1z00_1187==BgL_n2z00_1188); } } }  else 
{ /* Llib/bexit.scm 142 */
BgL_testz00_1468 = ((bool_t)0)
; } 
if(BgL_testz00_1468)
{ /* Llib/bexit.scm 142 */
if(
EXITD_CALLCCP(BgL_exitdzd2topzd2_721))
{ /* Llib/bexit.scm 147 */
void * BgL_arg1892z00_729;
BgL_arg1892z00_729 = 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_721); 
CALLCC_JUMP_EXIT(BgL_arg1892z00_729, BgL_valz00_7); }  else 
{ /* Llib/bexit.scm 145 */
JUMP_EXIT( 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_721),BgL_valz00_7)
; } 
return BUNSPEC;}  else 
{ /* Llib/bexit.scm 142 */
if(
EXITD_USERP(BgL_exitdzd2topzd2_721))
{ /* Llib/bexit.scm 151 */
goto BgL_zc3anonymousza31884ze3z83_720;}  else 
{ /* Llib/bexit.scm 151 */
{ /* Llib/bexit.scm 152 */
obj_t BgL_pz00_731;
BgL_pz00_731 = 
BGL_EXITD_VAL(); 
{ /* Llib/bexit.scm 153 */
obj_t BgL_arg1894z00_732;
{ /* Llib/bexit.scm 153 */
obj_t BgL_pairz00_1189;
if(
PAIRP(BgL_pz00_731))
{ /* Llib/bexit.scm 153 */
BgL_pairz00_1189 = BgL_pz00_731; }  else 
{ 
obj_t BgL_auxz00_1497;
BgL_auxz00_1497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2189z00zz__bexitz00, 
BINT(((long)6417)), BGl_string2190z00zz__bexitz00, BGl_string2192z00zz__bexitz00, BgL_pz00_731); 
FAILURE(BgL_auxz00_1497,BFALSE,BFALSE);} 
BgL_arg1894z00_732 = 
CAR(BgL_pairz00_1189); } 
{ /* Llib/bexit.scm 153 */
obj_t BgL_pairz00_1190;
if(
PAIRP(BgL_arg1894z00_732))
{ /* Llib/bexit.scm 153 */
BgL_pairz00_1190 = BgL_arg1894z00_732; }  else 
{ 
obj_t BgL_auxz00_1504;
BgL_auxz00_1504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2189z00zz__bexitz00, 
BINT(((long)6418)), BGl_string2190z00zz__bexitz00, BGl_string2192z00zz__bexitz00, BgL_arg1894z00_732); 
FAILURE(BgL_auxz00_1504,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_1190, BgL_exitdz00_5); } } 
{ /* Llib/bexit.scm 154 */
obj_t BgL_arg1895z00_733;
BgL_arg1895z00_733 = 
CAR(BgL_pz00_731); 
{ /* Llib/bexit.scm 154 */
obj_t BgL_pairz00_1193;
if(
PAIRP(BgL_arg1895z00_733))
{ /* Llib/bexit.scm 154 */
BgL_pairz00_1193 = BgL_arg1895z00_733; }  else 
{ 
obj_t BgL_auxz00_1512;
BgL_auxz00_1512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2189z00zz__bexitz00, 
BINT(((long)6452)), BGl_string2190z00zz__bexitz00, BGl_string2192z00zz__bexitz00, BgL_arg1895z00_733); 
FAILURE(BgL_auxz00_1512,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1193, BgL_procz00_8); } } 
SET_CDR(BgL_pz00_731, BgL_valz00_7); 
JUMP_EXIT( 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_721),BgL_pz00_731); } 
return BUNSPEC;} } } } } } } 
}



/* _unwind-stack-until! */
obj_t BGl__unwindzd2stackzd2untilz12z12zz__bexitz00(obj_t BgL_envz00_1389, obj_t BgL_exitdz00_1390, obj_t BgL_estampz00_1391, obj_t BgL_valz00_1392, obj_t BgL_procz00_1393)
{ AN_OBJECT;
{ /* Llib/bexit.scm 128 */
return 
unwind_stack_until(BgL_exitdz00_1390, BgL_estampz00_1391, BgL_valz00_1392, BgL_procz00_1393);} 
}



/* default-uncaught-exception-handler */
BGL_EXPORTED_DEF obj_t bgl_uncaught_exception_handler(obj_t BgL_valz00_9)
{ AN_OBJECT;
{ /* Llib/bexit.scm 164 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2193z00zz__bexitz00, BGl_string2195z00zz__bexitz00, BgL_valz00_9);} 
}



/* _default-uncaught-exception-handler */
obj_t BGl__defaultzd2uncaughtzd2exceptionzd2handlerzd2zz__bexitz00(obj_t BgL_envz00_1394, obj_t BgL_valz00_1395)
{ AN_OBJECT;
{ /* Llib/bexit.scm 164 */
return 
bgl_uncaught_exception_handler(BgL_valz00_1395);} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__bexitz00()
{ AN_OBJECT;
{ /* Llib/bexit.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__bexitz00()
{ AN_OBJECT;
{ /* Llib/bexit.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00()
{ AN_OBJECT;
{ /* Llib/bexit.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2196z00zz__bexitz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2196z00zz__bexitz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2196z00zz__bexitz00));} 
}

#ifdef __cplusplus
}
#endif
