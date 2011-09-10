/*===========================================================================*/
/*   (Llib/binary.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/binary.scm -indent -o objs/obj_s/Llib/binary.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
static obj_t BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t, obj_t);
extern int bgl_input_fill_string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__binaryz00 = BUNSPEC;
extern int bgl_output_string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__binaryz00();
static obj_t BGl__inputzd2fillzd2stringz12z12zz__binaryz00(obj_t, obj_t, obj_t);
extern obj_t output_obj(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
BGL_EXPORTED_DECL obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00();
static obj_t BGl__outputzd2objzd2zz__binaryz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__closezd2binaryzd2portz00zz__binaryz00(obj_t, obj_t);
extern obj_t close_binary_port(obj_t);
static obj_t BGl__inputzd2charzd2zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t, unsigned char);
extern obj_t open_output_binary_file(obj_t);
static obj_t BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
static obj_t BGl__inputzd2objzd2zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t, obj_t);
extern obj_t bgl_input_string(obj_t, int);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t input_obj(obj_t);
extern obj_t append_output_binary_file(obj_t);
static obj_t BGl__flushzd2binaryzd2portz00zz__binaryz00(obj_t, obj_t);
static obj_t BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t, obj_t);
extern obj_t bgl_flush_binary_port(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t);
static obj_t BGl__outputzd2charzd2zz__binaryz00(obj_t, obj_t, obj_t);
extern obj_t open_input_binary_file(obj_t);
static obj_t BGl__inputzd2stringzd2zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__binaryz00();
static obj_t BGl__binaryzd2portzf3z21zz__binaryz00(obj_t, obj_t);
static obj_t BGl__outputzd2stringzd2zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_binaryzd2portzf3zd2envzf3zz__binaryz00, BgL_bgl__binaryza7d2portza7f2232z00, BGl__binaryzd2portzf3z21zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2charzd2envz00zz__binaryz00, BgL_bgl__inputza7d2charza7d22233z00, BGl__inputzd2charzd2zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2binaryzd2portzd2envzd2zz__binaryz00, BgL_bgl__closeza7d2binaryza72234z00, BGl__closezd2binaryzd2portz00zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2stringzd2envz00zz__binaryz00, BgL_bgl__outputza7d2string2235za7, BGl__outputzd2stringzd2zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flushzd2binaryzd2portzd2envzd2zz__binaryz00, BgL_bgl__flushza7d2binaryza72236z00, BGl__flushzd2binaryzd2portz00zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2objzd2envz00zz__binaryz00, BgL_bgl__inputza7d2objza7d2za72237za7, BGl__inputzd2objzd2zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2outputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl__appendza7d2output2238za7, BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2fillzd2stringz12zd2envzc0zz__binaryz00, BgL_bgl__inputza7d2fillza7d22239z00, BGl__inputzd2fillzd2stringz12z12zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl__openza7d2outputza7d2240z00, BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2objzd2envz00zz__binaryz00, BgL_bgl__outputza7d2objza7d22241z00, BGl__outputzd2objzd2zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2charzd2envz00zz__binaryz00, BgL_bgl__outputza7d2charza7d2242z00, BGl__outputzd2charzd2zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2stringzd2envz00zz__binaryz00, BgL_bgl__inputza7d2stringza72243z00, BGl__inputzd2stringzd2zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2214z00zz__binaryz00, BgL_bgl_string2214za700za7za7_2244za7, "/tmp/bigloo/runtime/Llib/binary.scm", 35 );
DEFINE_STRING( BGl_string2215z00zz__binaryz00, BgL_bgl_string2215za700za7za7_2245za7, "_open-output-binary-file", 24 );
DEFINE_STRING( BGl_string2216z00zz__binaryz00, BgL_bgl_string2216za700za7za7_2246za7, "bstring", 7 );
DEFINE_STRING( BGl_string2217z00zz__binaryz00, BgL_bgl_string2217za700za7za7_2247za7, "_append-output-binary-file", 26 );
DEFINE_STRING( BGl_string2218z00zz__binaryz00, BgL_bgl_string2218za700za7za7_2248za7, "_open-input-binary-file", 23 );
DEFINE_STRING( BGl_string2220z00zz__binaryz00, BgL_bgl_string2220za700za7za7_2249za7, "binary-port", 11 );
DEFINE_STRING( BGl_string2219z00zz__binaryz00, BgL_bgl_string2219za700za7za7_2250za7, "_close-binary-port", 18 );
DEFINE_STRING( BGl_string2221z00zz__binaryz00, BgL_bgl_string2221za700za7za7_2251za7, "_flush-binary-port", 18 );
DEFINE_STRING( BGl_string2222z00zz__binaryz00, BgL_bgl_string2222za700za7za7_2252za7, "_input-obj", 10 );
DEFINE_STRING( BGl_string2223z00zz__binaryz00, BgL_bgl_string2223za700za7za7_2253za7, "_output-obj", 11 );
DEFINE_STRING( BGl_string2224z00zz__binaryz00, BgL_bgl_string2224za700za7za7_2254za7, "_output-char", 12 );
DEFINE_STRING( BGl_string2225z00zz__binaryz00, BgL_bgl_string2225za700za7za7_2255za7, "char", 4 );
DEFINE_STRING( BGl_string2226z00zz__binaryz00, BgL_bgl_string2226za700za7za7_2256za7, "_input-char", 11 );
DEFINE_STRING( BGl_string2227z00zz__binaryz00, BgL_bgl_string2227za700za7za7_2257za7, "_output-string", 14 );
DEFINE_STRING( BGl_string2228z00zz__binaryz00, BgL_bgl_string2228za700za7za7_2258za7, "_input-string", 13 );
DEFINE_STRING( BGl_string2230z00zz__binaryz00, BgL_bgl_string2230za700za7za7_2259za7, "_input-fill-string!", 19 );
DEFINE_STRING( BGl_string2229z00zz__binaryz00, BgL_bgl_string2229za700za7za7_2260za7, "int", 3 );
DEFINE_STRING( BGl_string2231z00zz__binaryz00, BgL_bgl_string2231za700za7za7_2261za7, "__binary", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl__openza7d2inputza7d22262z00, BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long BgL_checksumz00_1555, char * BgL_fromz00_1556)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__binaryz00))
{ 
BGl_requirezd2initializa7ationz75zz__binaryz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__binaryz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* binary-port? */
BGL_EXPORTED_DEF bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/binary.scm 129 */
return 
BINARY_PORTP(BgL_objz00_1);} 
}



/* _binary-port? */
obj_t BGl__binaryzd2portzf3z21zz__binaryz00(obj_t BgL_envz00_1472, obj_t BgL_objz00_1473)
{ AN_OBJECT;
{ /* Llib/binary.scm 129 */
return 
BBOOL(
BINARY_PORTP(BgL_objz00_1473));} 
}



/* open-output-binary-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_2)
{ AN_OBJECT;
{ /* Llib/binary.scm 135 */
return 
open_output_binary_file(BgL_strz00_2);} 
}



/* _open-output-binary-file */
obj_t BGl__openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_envz00_1474, obj_t BgL_strz00_1475)
{ AN_OBJECT;
{ /* Llib/binary.scm 135 */
{ /* Llib/binary.scm 136 */
obj_t BgL_strz00_1536;
if(
STRINGP(BgL_strz00_1475))
{ /* Llib/binary.scm 136 */
BgL_strz00_1536 = BgL_strz00_1475; }  else 
{ 
obj_t BgL_auxz00_1567;
BgL_auxz00_1567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)5342)), BGl_string2215z00zz__binaryz00, BGl_string2216z00zz__binaryz00, BgL_strz00_1475); 
FAILURE(BgL_auxz00_1567,BFALSE,BFALSE);} 
return 
open_output_binary_file(BgL_strz00_1536);} } 
}



/* append-output-binary-file */
BGL_EXPORTED_DEF obj_t BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_3)
{ AN_OBJECT;
{ /* Llib/binary.scm 141 */
return 
append_output_binary_file(BgL_strz00_3);} 
}



/* _append-output-binary-file */
obj_t BGl__appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_envz00_1476, obj_t BgL_strz00_1477)
{ AN_OBJECT;
{ /* Llib/binary.scm 141 */
{ /* Llib/binary.scm 142 */
obj_t BgL_strz00_1537;
if(
STRINGP(BgL_strz00_1477))
{ /* Llib/binary.scm 142 */
BgL_strz00_1537 = BgL_strz00_1477; }  else 
{ 
obj_t BgL_auxz00_1575;
BgL_auxz00_1575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)5641)), BGl_string2217z00zz__binaryz00, BGl_string2216z00zz__binaryz00, BgL_strz00_1477); 
FAILURE(BgL_auxz00_1575,BFALSE,BFALSE);} 
return 
append_output_binary_file(BgL_strz00_1537);} } 
}



/* open-input-binary-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_4)
{ AN_OBJECT;
{ /* Llib/binary.scm 147 */
return 
open_input_binary_file(BgL_strz00_4);} 
}



/* _open-input-binary-file */
obj_t BGl__openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_envz00_1478, obj_t BgL_strz00_1479)
{ AN_OBJECT;
{ /* Llib/binary.scm 147 */
{ /* Llib/binary.scm 148 */
obj_t BgL_strz00_1538;
if(
STRINGP(BgL_strz00_1479))
{ /* Llib/binary.scm 148 */
BgL_strz00_1538 = BgL_strz00_1479; }  else 
{ 
obj_t BgL_auxz00_1583;
BgL_auxz00_1583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)5939)), BGl_string2218z00zz__binaryz00, BGl_string2216z00zz__binaryz00, BgL_strz00_1479); 
FAILURE(BgL_auxz00_1583,BFALSE,BFALSE);} 
return 
open_input_binary_file(BgL_strz00_1538);} } 
}



/* close-binary-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t BgL_portz00_5)
{ AN_OBJECT;
{ /* Llib/binary.scm 153 */
return 
close_binary_port(BgL_portz00_5);} 
}



/* _close-binary-port */
obj_t BGl__closezd2binaryzd2portz00zz__binaryz00(obj_t BgL_envz00_1480, obj_t BgL_portz00_1481)
{ AN_OBJECT;
{ /* Llib/binary.scm 153 */
{ /* Llib/binary.scm 154 */
obj_t BgL_portz00_1539;
if(
BINARY_PORTP(BgL_portz00_1481))
{ /* Llib/binary.scm 154 */
BgL_portz00_1539 = BgL_portz00_1481; }  else 
{ 
obj_t BgL_auxz00_1591;
BgL_auxz00_1591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)6237)), BGl_string2219z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1481); 
FAILURE(BgL_auxz00_1591,BFALSE,BFALSE);} 
return 
close_binary_port(BgL_portz00_1539);} } 
}



/* flush-binary-port */
BGL_EXPORTED_DEF obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t BgL_portz00_6)
{ AN_OBJECT;
{ /* Llib/binary.scm 159 */
return 
bgl_flush_binary_port(BgL_portz00_6);} 
}



/* _flush-binary-port */
obj_t BGl__flushzd2binaryzd2portz00zz__binaryz00(obj_t BgL_envz00_1482, obj_t BgL_portz00_1483)
{ AN_OBJECT;
{ /* Llib/binary.scm 159 */
{ /* Llib/binary.scm 160 */
obj_t BgL_portz00_1540;
if(
BINARY_PORTP(BgL_portz00_1483))
{ /* Llib/binary.scm 160 */
BgL_portz00_1540 = BgL_portz00_1483; }  else 
{ 
obj_t BgL_auxz00_1599;
BgL_auxz00_1599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)6531)), BGl_string2221z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1483); 
FAILURE(BgL_auxz00_1599,BFALSE,BFALSE);} 
return 
bgl_flush_binary_port(BgL_portz00_1540);} } 
}



/* input-obj */
BGL_EXPORTED_DEF obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t BgL_portz00_7)
{ AN_OBJECT;
{ /* Llib/binary.scm 165 */
return 
input_obj(BgL_portz00_7);} 
}



/* _input-obj */
obj_t BGl__inputzd2objzd2zz__binaryz00(obj_t BgL_envz00_1484, obj_t BgL_portz00_1485)
{ AN_OBJECT;
{ /* Llib/binary.scm 165 */
{ /* Llib/binary.scm 166 */
obj_t BgL_portz00_1541;
if(
BINARY_PORTP(BgL_portz00_1485))
{ /* Llib/binary.scm 166 */
BgL_portz00_1541 = BgL_portz00_1485; }  else 
{ 
obj_t BgL_auxz00_1607;
BgL_auxz00_1607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)6817)), BGl_string2222z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1485); 
FAILURE(BgL_auxz00_1607,BFALSE,BFALSE);} 
return 
input_obj(BgL_portz00_1541);} } 
}



/* output-obj */
BGL_EXPORTED_DEF obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t BgL_portz00_8, obj_t BgL_objz00_9)
{ AN_OBJECT;
{ /* Llib/binary.scm 171 */
return 
output_obj(BgL_portz00_8, BgL_objz00_9);} 
}



/* _output-obj */
obj_t BGl__outputzd2objzd2zz__binaryz00(obj_t BgL_envz00_1486, obj_t BgL_portz00_1487, obj_t BgL_objz00_1488)
{ AN_OBJECT;
{ /* Llib/binary.scm 171 */
{ /* Llib/binary.scm 172 */
obj_t BgL_portz00_1542;
if(
BINARY_PORTP(BgL_portz00_1487))
{ /* Llib/binary.scm 172 */
BgL_portz00_1542 = BgL_portz00_1487; }  else 
{ 
obj_t BgL_auxz00_1615;
BgL_auxz00_1615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)7100)), BGl_string2223z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1487); 
FAILURE(BgL_auxz00_1615,BFALSE,BFALSE);} 
return 
output_obj(BgL_portz00_1542, BgL_objz00_1488);} } 
}



/* output-char */
BGL_EXPORTED_DEF obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t BgL_portz00_10, unsigned char BgL_charz00_11)
{ AN_OBJECT;
{ /* Llib/binary.scm 177 */
return 
BGL_OUTPUT_CHAR(BgL_portz00_10, BgL_charz00_11);} 
}



/* _output-char */
obj_t BGl__outputzd2charzd2zz__binaryz00(obj_t BgL_envz00_1489, obj_t BgL_portz00_1490, obj_t BgL_charz00_1491)
{ AN_OBJECT;
{ /* Llib/binary.scm 177 */
{ /* Llib/binary.scm 178 */
obj_t BgL_portz00_1544;unsigned char BgL_charz00_1545;
if(
BINARY_PORTP(BgL_portz00_1490))
{ /* Llib/binary.scm 178 */
BgL_portz00_1544 = BgL_portz00_1490; }  else 
{ 
obj_t BgL_auxz00_1623;
BgL_auxz00_1623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)7395)), BGl_string2224z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1490); 
FAILURE(BgL_auxz00_1623,BFALSE,BFALSE);} 
{ /* Llib/binary.scm 178 */
obj_t BgL_auxz00_1627;
if(
CHARP(BgL_charz00_1491))
{ /* Llib/binary.scm 178 */
BgL_auxz00_1627 = BgL_charz00_1491
; }  else 
{ 
obj_t BgL_auxz00_1630;
BgL_auxz00_1630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)7395)), BGl_string2224z00zz__binaryz00, BGl_string2225z00zz__binaryz00, BgL_charz00_1491); 
FAILURE(BgL_auxz00_1630,BFALSE,BFALSE);} 
BgL_charz00_1545 = 
CCHAR(BgL_auxz00_1627); } 
return 
BGL_OUTPUT_CHAR(BgL_portz00_1544, BgL_charz00_1545);} } 
}



/* input-char */
BGL_EXPORTED_DEF obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t BgL_portz00_12)
{ AN_OBJECT;
{ /* Llib/binary.scm 183 */
{ /* Llib/binary.scm 184 */
int BgL_charz00_1546;
BgL_charz00_1546 = 
BGL_INPUT_CHAR(BgL_portz00_12); 
if(
BGL_INT_EOFP(BgL_charz00_1546))
{ /* Llib/binary.scm 184 */
return BEOF;}  else 
{ /* Llib/binary.scm 184 */
return 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(long)(BgL_charz00_1546)));} } } 
}



/* _input-char */
obj_t BGl__inputzd2charzd2zz__binaryz00(obj_t BgL_envz00_1492, obj_t BgL_portz00_1493)
{ AN_OBJECT;
{ /* Llib/binary.scm 183 */
{ /* Llib/binary.scm 184 */
obj_t BgL_portz00_1547;
if(
BINARY_PORTP(BgL_portz00_1493))
{ /* Llib/binary.scm 184 */
BgL_portz00_1547 = BgL_portz00_1493; }  else 
{ 
obj_t BgL_auxz00_1644;
BgL_auxz00_1644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)7681)), BGl_string2226z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1493); 
FAILURE(BgL_auxz00_1644,BFALSE,BFALSE);} 
{ /* Llib/binary.scm 184 */
int BgL_charz00_1548;
BgL_charz00_1548 = 
BGL_INPUT_CHAR(BgL_portz00_1547); 
if(
BGL_INT_EOFP(BgL_charz00_1548))
{ /* Llib/binary.scm 184 */
return BEOF;}  else 
{ /* Llib/binary.scm 184 */
return 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(long)(BgL_charz00_1548)));} } } } 
}



/* output-string */
BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t BgL_portz00_13, obj_t BgL_stringz00_14)
{ AN_OBJECT;
{ /* Llib/binary.scm 192 */
return 
BINT(
bgl_output_string(BgL_portz00_13, BgL_stringz00_14));} 
}



/* _output-string */
obj_t BGl__outputzd2stringzd2zz__binaryz00(obj_t BgL_envz00_1494, obj_t BgL_portz00_1495, obj_t BgL_stringz00_1496)
{ AN_OBJECT;
{ /* Llib/binary.scm 192 */
{ /* Llib/binary.scm 193 */
obj_t BgL_portz00_1549;obj_t BgL_stringz00_1550;
if(
BINARY_PORTP(BgL_portz00_1495))
{ /* Llib/binary.scm 193 */
BgL_portz00_1549 = BgL_portz00_1495; }  else 
{ 
obj_t BgL_auxz00_1658;
BgL_auxz00_1658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8047)), BGl_string2227z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1495); 
FAILURE(BgL_auxz00_1658,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_1496))
{ /* Llib/binary.scm 193 */
BgL_stringz00_1550 = BgL_stringz00_1496; }  else 
{ 
obj_t BgL_auxz00_1664;
BgL_auxz00_1664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8047)), BGl_string2227z00zz__binaryz00, BGl_string2216z00zz__binaryz00, BgL_stringz00_1496); 
FAILURE(BgL_auxz00_1664,BFALSE,BFALSE);} 
return 
BINT(
bgl_output_string(BgL_portz00_1549, BgL_stringz00_1550));} } 
}



/* input-string */
BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t BgL_portz00_15, int BgL_lenz00_16)
{ AN_OBJECT;
{ /* Llib/binary.scm 198 */
return 
bgl_input_string(BgL_portz00_15, BgL_lenz00_16);} 
}



/* _input-string */
obj_t BGl__inputzd2stringzd2zz__binaryz00(obj_t BgL_envz00_1497, obj_t BgL_portz00_1498, obj_t BgL_lenz00_1499)
{ AN_OBJECT;
{ /* Llib/binary.scm 198 */
{ /* Llib/binary.scm 199 */
obj_t BgL_portz00_1551;int BgL_lenz00_1552;
if(
BINARY_PORTP(BgL_portz00_1498))
{ /* Llib/binary.scm 199 */
BgL_portz00_1551 = BgL_portz00_1498; }  else 
{ 
obj_t BgL_auxz00_1673;
BgL_auxz00_1673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8343)), BGl_string2228z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1498); 
FAILURE(BgL_auxz00_1673,BFALSE,BFALSE);} 
{ /* Llib/binary.scm 199 */
obj_t BgL_auxz00_1677;
if(
INTEGERP(BgL_lenz00_1499))
{ /* Llib/binary.scm 199 */
BgL_auxz00_1677 = BgL_lenz00_1499
; }  else 
{ 
obj_t BgL_auxz00_1680;
BgL_auxz00_1680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8343)), BGl_string2228z00zz__binaryz00, BGl_string2229z00zz__binaryz00, BgL_lenz00_1499); 
FAILURE(BgL_auxz00_1680,BFALSE,BFALSE);} 
BgL_lenz00_1552 = 
CINT(BgL_auxz00_1677); } 
return 
bgl_input_string(BgL_portz00_1551, BgL_lenz00_1552);} } 
}



/* input-fill-string! */
BGL_EXPORTED_DEF int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t BgL_portz00_17, obj_t BgL_strz00_18)
{ AN_OBJECT;
{ /* Llib/binary.scm 204 */
return 
bgl_input_fill_string(BgL_portz00_17, BgL_strz00_18);} 
}



/* _input-fill-string! */
obj_t BGl__inputzd2fillzd2stringz12z12zz__binaryz00(obj_t BgL_envz00_1500, obj_t BgL_portz00_1501, obj_t BgL_strz00_1502)
{ AN_OBJECT;
{ /* Llib/binary.scm 204 */
{ /* Llib/binary.scm 205 */
int BgL_auxz00_1687;
{ /* Llib/binary.scm 205 */
obj_t BgL_portz00_1553;obj_t BgL_strz00_1554;
if(
BINARY_PORTP(BgL_portz00_1501))
{ /* Llib/binary.scm 205 */
BgL_portz00_1553 = BgL_portz00_1501; }  else 
{ 
obj_t BgL_auxz00_1690;
BgL_auxz00_1690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8641)), BGl_string2230z00zz__binaryz00, BGl_string2220z00zz__binaryz00, BgL_portz00_1501); 
FAILURE(BgL_auxz00_1690,BFALSE,BFALSE);} 
if(
STRINGP(BgL_strz00_1502))
{ /* Llib/binary.scm 205 */
BgL_strz00_1554 = BgL_strz00_1502; }  else 
{ 
obj_t BgL_auxz00_1696;
BgL_auxz00_1696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2214z00zz__binaryz00, 
BINT(((long)8641)), BGl_string2230z00zz__binaryz00, BGl_string2216z00zz__binaryz00, BgL_strz00_1502); 
FAILURE(BgL_auxz00_1696,BFALSE,BFALSE);} 
BgL_auxz00_1687 = 
bgl_input_fill_string(BgL_portz00_1553, BgL_strz00_1554); } 
return 
BINT(BgL_auxz00_1687);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__binaryz00()
{ AN_OBJECT;
{ /* Llib/binary.scm 15 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__binaryz00()
{ AN_OBJECT;
{ /* Llib/binary.scm 15 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00()
{ AN_OBJECT;
{ /* Llib/binary.scm 15 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__intextz00(((long)77210208), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2231z00zz__binaryz00));} 
}

#ifdef __cplusplus
}
#endif
