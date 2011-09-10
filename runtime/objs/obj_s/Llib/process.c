/*===========================================================================*/
/*   (Llib/process.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/process.scm -indent -o objs/obj_s/Llib/process.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern bool_t c_process_alivep(obj_t);
static obj_t BGl__processzd2errorzd2portz00zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2stopzd2zz__processz00(obj_t);
static obj_t BGl__processzd2alivezf3z21zz__processz00(obj_t, obj_t);
static obj_t BGl__processzd2exitzd2statusz00zz__processz00(obj_t, obj_t);
extern obj_t bgl_close_output_port(obj_t);
static obj_t BGl_list2270z00zz__processz00 = BUNSPEC;
static obj_t BGl__processzd2inputzd2portz00zz__processz00(obj_t, obj_t);
extern obj_t c_process_send_signal(obj_t, int);
static obj_t BGl__processzf3zf3zz__processz00(obj_t, obj_t);
static obj_t BGl__processzd2listzd2zz__processz00(obj_t);
static obj_t BGl__runzd2processzd2zz__processz00(obj_t, obj_t, obj_t);
extern obj_t c_process_kill(obj_t);
static obj_t BGl_keyword2271z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2276z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2280z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2282z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2284z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2286z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2288z00zz__processz00 = BUNSPEC;
extern obj_t c_run_process(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2290z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword2292z00zz__processz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t);
static obj_t BGl__processzd2nilzd2zz__processz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__processz00();
BGL_EXPORTED_DECL obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t c_process_stop(obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t);
extern obj_t bgl_process_nil();
static obj_t BGl__processzd2waitzd2zz__processz00(obj_t, obj_t);
static obj_t BGl__closezd2processzd2portsz00zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2listzd2zz__processz00();
BGL_EXPORTED_DECL obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t, int);
static obj_t BGl__processzd2sendzd2signalz00zz__processz00(obj_t, obj_t, obj_t);
extern obj_t c_process_continue(obj_t);
BGL_EXPORTED_DECL bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
static obj_t BGl__processzd2continuezd2zz__processz00(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL bool_t BGl_processzf3zf3zz__processz00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__processzd2killzd2zz__processz00(obj_t, obj_t);
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl__unregisterzd2processzd2zz__processz00(obj_t, obj_t);
static obj_t BGl__processzd2pidzd2zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2continuezd2zz__processz00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__processz00();
BGL_EXPORTED_DECL bool_t BGl_processzd2waitzd2zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2nilzd2zz__processz00();
extern obj_t c_process_xstatus(obj_t);
extern obj_t c_process_list();
static obj_t BGl_importedzd2moduleszd2initz00zz__processz00();
static obj_t BGl__processzd2stopzd2zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__processzd2outputzd2portz00zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2killzd2zz__processz00(obj_t);
extern obj_t c_unregister_process(obj_t);
extern obj_t bstring_to_keyword(obj_t);
extern obj_t c_process_wait(obj_t);
BGL_EXPORTED_DECL int BGl_processzd2pidzd2zz__processz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__processz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2nilzd2envz00zz__processz00, BgL_bgl__processza7d2nilza7d2303z00, BGl__processzd2nilzd2zz__processz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2listzd2envz00zz__processz00, BgL_bgl__processza7d2listza72304z00, BGl__processzd2listzd2zz__processz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2waitzd2envz00zz__processz00, BgL_bgl__processza7d2waitza72305z00, BGl__processzd2waitzd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2outputzd2portzd2envzd2zz__processz00, BgL_bgl__processza7d2outpu2306za7, BGl__processzd2outputzd2portz00zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2processzd2portszd2envzd2zz__processz00, BgL_bgl__closeza7d2process2307za7, BGl__closezd2processzd2portsz00zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2stopzd2envz00zz__processz00, BgL_bgl__processza7d2stopza72308z00, BGl__processzd2stopzd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2alivezf3zd2envzf3zz__processz00, BgL_bgl__processza7d2alive2309za7, BGl__processzd2alivezf3z21zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2pidzd2envz00zz__processz00, BgL_bgl__processza7d2pidza7d2310z00, BGl__processzd2pidzd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_runzd2processzd2envz00zz__processz00, BgL_bgl__runza7d2processza7d2311z00, va_generic_entry, BGl__runzd2processzd2zz__processz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2killzd2envz00zz__processz00, BgL_bgl__processza7d2killza72312z00, BGl__processzd2killzd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2continuezd2envz00zz__processz00, BgL_bgl__processza7d2conti2313za7, BGl__processzd2continuezd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzf3zd2envz21zz__processz00, BgL_bgl__processza7f3za7f3za7za72314z00, BGl__processzf3zf3zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unregisterzd2processzd2envz00zz__processz00, BgL_bgl__unregisterza7d2pr2315za7, BGl__unregisterzd2processzd2zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2256z00zz__processz00, BgL_bgl_string2256za700za7za7_2316za7, "/tmp/bigloo/runtime/Llib/process.scm", 36 );
DEFINE_STRING( BGl_string2257z00zz__processz00, BgL_bgl_string2257za700za7za7_2317za7, "_process-pid", 12 );
DEFINE_STRING( BGl_string2258z00zz__processz00, BgL_bgl_string2258za700za7za7_2318za7, "process", 7 );
DEFINE_STRING( BGl_string2260z00zz__processz00, BgL_bgl_string2260za700za7za7_2319za7, "_process-input-port", 19 );
DEFINE_STRING( BGl_string2259z00zz__processz00, BgL_bgl_string2259za700za7za7_2320za7, "_process-output-port", 20 );
DEFINE_STRING( BGl_string2261z00zz__processz00, BgL_bgl_string2261za700za7za7_2321za7, "_process-error-port", 19 );
DEFINE_STRING( BGl_string2262z00zz__processz00, BgL_bgl_string2262za700za7za7_2322za7, "_process-alive?", 15 );
DEFINE_STRING( BGl_string2263z00zz__processz00, BgL_bgl_string2263za700za7za7_2323za7, "_process-wait", 13 );
DEFINE_STRING( BGl_string2264z00zz__processz00, BgL_bgl_string2264za700za7za7_2324za7, "_process-exit-status", 20 );
DEFINE_STRING( BGl_string2265z00zz__processz00, BgL_bgl_string2265za700za7za7_2325za7, "_process-send-signal", 20 );
DEFINE_STRING( BGl_string2266z00zz__processz00, BgL_bgl_string2266za700za7za7_2326za7, "int", 3 );
DEFINE_STRING( BGl_string2267z00zz__processz00, BgL_bgl_string2267za700za7za7_2327za7, "_process-kill", 13 );
DEFINE_STRING( BGl_string2268z00zz__processz00, BgL_bgl_string2268za700za7za7_2328za7, "_process-stop", 13 );
DEFINE_STRING( BGl_string2269z00zz__processz00, BgL_bgl_string2269za700za7za7_2329za7, "_process-continue", 17 );
DEFINE_STRING( BGl_string2272z00zz__processz00, BgL_bgl_string2272za700za7za7_2330za7, "pipe", 4 );
DEFINE_STRING( BGl_string2273z00zz__processz00, BgL_bgl_string2273za700za7za7_2331za7, "loop", 4 );
DEFINE_STRING( BGl_string2274z00zz__processz00, BgL_bgl_string2274za700za7za7_2332za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2275z00zz__processz00, BgL_bgl_string2275za700za7za7_2333za7, "pair", 4 );
DEFINE_STRING( BGl_string2277z00zz__processz00, BgL_bgl_string2277za700za7za7_2334za7, "wait", 4 );
DEFINE_STRING( BGl_string2278z00zz__processz00, BgL_bgl_string2278za700za7za7_2335za7, "run-process", 11 );
DEFINE_STRING( BGl_string2279z00zz__processz00, BgL_bgl_string2279za700za7za7_2336za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string2281z00zz__processz00, BgL_bgl_string2281za700za7za7_2337za7, "fork", 4 );
DEFINE_STRING( BGl_string2283z00zz__processz00, BgL_bgl_string2283za700za7za7_2338za7, "input", 5 );
DEFINE_STRING( BGl_string2285z00zz__processz00, BgL_bgl_string2285za700za7za7_2339za7, "output", 6 );
DEFINE_STRING( BGl_string2287z00zz__processz00, BgL_bgl_string2287za700za7za7_2340za7, "null", 4 );
DEFINE_STRING( BGl_string2300z00zz__processz00, BgL_bgl_string2300za700za7za7_2341za7, "_unregister-process", 19 );
DEFINE_STRING( BGl_string2289z00zz__processz00, BgL_bgl_string2289za700za7za7_2342za7, "error", 5 );
DEFINE_STRING( BGl_string2301z00zz__processz00, BgL_bgl_string2301za700za7za7_2343za7, "__process", 9 );
DEFINE_STRING( BGl_string2291z00zz__processz00, BgL_bgl_string2291za700za7za7_2344za7, "host", 4 );
DEFINE_STRING( BGl_string2293z00zz__processz00, BgL_bgl_string2293za700za7za7_2345za7, "env", 3 );
DEFINE_STRING( BGl_string2294z00zz__processz00, BgL_bgl_string2294za700za7za7_2346za7, "_run-process", 12 );
DEFINE_STRING( BGl_string2295z00zz__processz00, BgL_bgl_string2295za700za7za7_2347za7, "bstring", 7 );
DEFINE_STRING( BGl_string2296z00zz__processz00, BgL_bgl_string2296za700za7za7_2348za7, "close-process-ports", 19 );
DEFINE_STRING( BGl_string2297z00zz__processz00, BgL_bgl_string2297za700za7za7_2349za7, "output-port", 11 );
DEFINE_STRING( BGl_string2298z00zz__processz00, BgL_bgl_string2298za700za7za7_2350za7, "input-port", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2inputzd2portzd2envzd2zz__processz00, BgL_bgl__processza7d2input2351za7, BGl__processzd2inputzd2portz00zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2299z00zz__processz00, BgL_bgl_string2299za700za7za7_2352za7, "_close-process-ports", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2exitzd2statuszd2envzd2zz__processz00, BgL_bgl__processza7d2exitza72353z00, BGl__processzd2exitzd2statusz00zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2sendzd2signalzd2envzd2zz__processz00, BgL_bgl__processza7d2sendza72354z00, BGl__processzd2sendzd2signalz00zz__processz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2errorzd2portzd2envzd2zz__processz00, BgL_bgl__processza7d2error2355za7, BGl__processzd2errorzd2portz00zz__processz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__processz00(long BgL_checksumz00_1628, char * BgL_fromz00_1629)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__processz00))
{ 
BGl_requirezd2initializa7ationz75zz__processz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__processz00(); 
BGl_importedzd2moduleszd2initz00zz__processz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 15 */
BGl_keyword2271z00zz__processz00 = 
bstring_to_keyword(BGl_string2272z00zz__processz00); 
BGl_list2270z00zz__processz00 = 
MAKE_PAIR(BGl_keyword2271z00zz__processz00, BNIL); 
BGl_keyword2276z00zz__processz00 = 
bstring_to_keyword(BGl_string2277z00zz__processz00); 
BGl_keyword2280z00zz__processz00 = 
bstring_to_keyword(BGl_string2281z00zz__processz00); 
BGl_keyword2282z00zz__processz00 = 
bstring_to_keyword(BGl_string2283z00zz__processz00); 
BGl_keyword2284z00zz__processz00 = 
bstring_to_keyword(BGl_string2285z00zz__processz00); 
BGl_keyword2286z00zz__processz00 = 
bstring_to_keyword(BGl_string2287z00zz__processz00); 
BGl_keyword2288z00zz__processz00 = 
bstring_to_keyword(BGl_string2289z00zz__processz00); 
BGl_keyword2290z00zz__processz00 = 
bstring_to_keyword(BGl_string2291z00zz__processz00); 
return ( 
BGl_keyword2292z00zz__processz00 = 
bstring_to_keyword(BGl_string2293z00zz__processz00), BUNSPEC) ;} 
}



/* process? */
BGL_EXPORTED_DEF bool_t BGl_processzf3zf3zz__processz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/process.scm 122 */
return 
PROCESSP(BgL_objz00_1);} 
}



/* _process? */
obj_t BGl__processzf3zf3zz__processz00(obj_t BgL_envz00_1515, obj_t BgL_objz00_1516)
{ AN_OBJECT;
{ /* Llib/process.scm 122 */
return 
BBOOL(
PROCESSP(BgL_objz00_1516));} 
}



/* process-nil */
BGL_EXPORTED_DEF obj_t BGl_processzd2nilzd2zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 128 */
return 
bgl_process_nil();} 
}



/* _process-nil */
obj_t BGl__processzd2nilzd2zz__processz00(obj_t BgL_envz00_1517)
{ AN_OBJECT;
{ /* Llib/process.scm 128 */
return 
bgl_process_nil();} 
}



/* process-pid */
BGL_EXPORTED_DEF int BGl_processzd2pidzd2zz__processz00(obj_t BgL_procz00_2)
{ AN_OBJECT;
{ /* Llib/process.scm 134 */
return 
PROCESS_PID(BgL_procz00_2);} 
}



/* _process-pid */
obj_t BGl__processzd2pidzd2zz__processz00(obj_t BgL_envz00_1518, obj_t BgL_procz00_1519)
{ AN_OBJECT;
{ /* Llib/process.scm 134 */
{ /* Llib/process.scm 135 */
int BgL_auxz00_1651;
{ /* Llib/process.scm 135 */
obj_t BgL_procz00_1610;
if(
PROCESSP(BgL_procz00_1519))
{ /* Llib/process.scm 135 */
BgL_procz00_1610 = BgL_procz00_1519; }  else 
{ 
obj_t BgL_auxz00_1654;
BgL_auxz00_1654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)5703)), BGl_string2257z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1519); 
FAILURE(BgL_auxz00_1654,BFALSE,BFALSE);} 
BgL_auxz00_1651 = 
PROCESS_PID(BgL_procz00_1610); } 
return 
BINT(BgL_auxz00_1651);} } 
}



/* process-output-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t BgL_procz00_3)
{ AN_OBJECT;
{ /* Llib/process.scm 140 */
return 
PROCESS_OUTPUT_PORT(BgL_procz00_3);} 
}



/* _process-output-port */
obj_t BGl__processzd2outputzd2portz00zz__processz00(obj_t BgL_envz00_1520, obj_t BgL_procz00_1521)
{ AN_OBJECT;
{ /* Llib/process.scm 140 */
{ /* Llib/process.scm 141 */
obj_t BgL_procz00_1611;
if(
PROCESSP(BgL_procz00_1521))
{ /* Llib/process.scm 141 */
BgL_procz00_1611 = BgL_procz00_1521; }  else 
{ 
obj_t BgL_auxz00_1663;
BgL_auxz00_1663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)5993)), BGl_string2259z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1521); 
FAILURE(BgL_auxz00_1663,BFALSE,BFALSE);} 
return 
PROCESS_OUTPUT_PORT(BgL_procz00_1611);} } 
}



/* process-input-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t BgL_procz00_4)
{ AN_OBJECT;
{ /* Llib/process.scm 146 */
return 
PROCESS_INPUT_PORT(BgL_procz00_4);} 
}



/* _process-input-port */
obj_t BGl__processzd2inputzd2portz00zz__processz00(obj_t BgL_envz00_1522, obj_t BgL_procz00_1523)
{ AN_OBJECT;
{ /* Llib/process.scm 146 */
{ /* Llib/process.scm 147 */
obj_t BgL_procz00_1612;
if(
PROCESSP(BgL_procz00_1523))
{ /* Llib/process.scm 147 */
BgL_procz00_1612 = BgL_procz00_1523; }  else 
{ 
obj_t BgL_auxz00_1671;
BgL_auxz00_1671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)6290)), BGl_string2260z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1523); 
FAILURE(BgL_auxz00_1671,BFALSE,BFALSE);} 
return 
PROCESS_INPUT_PORT(BgL_procz00_1612);} } 
}



/* process-error-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t BgL_procz00_5)
{ AN_OBJECT;
{ /* Llib/process.scm 152 */
return 
PROCESS_ERROR_PORT(BgL_procz00_5);} 
}



/* _process-error-port */
obj_t BGl__processzd2errorzd2portz00zz__processz00(obj_t BgL_envz00_1524, obj_t BgL_procz00_1525)
{ AN_OBJECT;
{ /* Llib/process.scm 152 */
{ /* Llib/process.scm 153 */
obj_t BgL_procz00_1613;
if(
PROCESSP(BgL_procz00_1525))
{ /* Llib/process.scm 153 */
BgL_procz00_1613 = BgL_procz00_1525; }  else 
{ 
obj_t BgL_auxz00_1679;
BgL_auxz00_1679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)6586)), BGl_string2261z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1525); 
FAILURE(BgL_auxz00_1679,BFALSE,BFALSE);} 
return 
PROCESS_ERROR_PORT(BgL_procz00_1613);} } 
}



/* process-alive? */
BGL_EXPORTED_DEF bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t BgL_procz00_6)
{ AN_OBJECT;
{ /* Llib/process.scm 158 */
return 
c_process_alivep(BgL_procz00_6);} 
}



/* _process-alive? */
obj_t BGl__processzd2alivezf3z21zz__processz00(obj_t BgL_envz00_1526, obj_t BgL_procz00_1527)
{ AN_OBJECT;
{ /* Llib/process.scm 158 */
{ /* Llib/process.scm 159 */
bool_t BgL_auxz00_1685;
{ /* Llib/process.scm 159 */
obj_t BgL_procz00_1614;
if(
PROCESSP(BgL_procz00_1527))
{ /* Llib/process.scm 159 */
BgL_procz00_1614 = BgL_procz00_1527; }  else 
{ 
obj_t BgL_auxz00_1688;
BgL_auxz00_1688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)6878)), BGl_string2262z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1527); 
FAILURE(BgL_auxz00_1688,BFALSE,BFALSE);} 
BgL_auxz00_1685 = 
c_process_alivep(BgL_procz00_1614); } 
return 
BBOOL(BgL_auxz00_1685);} } 
}



/* process-wait */
BGL_EXPORTED_DEF bool_t BGl_processzd2waitzd2zz__processz00(obj_t BgL_procz00_7)
{ AN_OBJECT;
{ /* Llib/process.scm 164 */
if(
c_process_alivep(BgL_procz00_7))
{ /* Llib/process.scm 165 */
return 
CBOOL(
c_process_wait(BgL_procz00_7));}  else 
{ /* Llib/process.scm 165 */
return ((bool_t)0);} } 
}



/* _process-wait */
obj_t BGl__processzd2waitzd2zz__processz00(obj_t BgL_envz00_1528, obj_t BgL_procz00_1529)
{ AN_OBJECT;
{ /* Llib/process.scm 164 */
{ /* Llib/process.scm 165 */
bool_t BgL_auxz00_1698;
{ /* Llib/process.scm 165 */
obj_t BgL_procz00_1615;
if(
PROCESSP(BgL_procz00_1529))
{ /* Llib/process.scm 165 */
BgL_procz00_1615 = BgL_procz00_1529; }  else 
{ 
obj_t BgL_auxz00_1701;
BgL_auxz00_1701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)7164)), BGl_string2263z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1529); 
FAILURE(BgL_auxz00_1701,BFALSE,BFALSE);} 
if(
c_process_alivep(BgL_procz00_1615))
{ /* Llib/process.scm 165 */
BgL_auxz00_1698 = 
CBOOL(
c_process_wait(BgL_procz00_1615))
; }  else 
{ /* Llib/process.scm 165 */
BgL_auxz00_1698 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_1698);} } 
}



/* process-exit-status */
BGL_EXPORTED_DEF obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t BgL_procz00_8)
{ AN_OBJECT;
{ /* Llib/process.scm 171 */
return 
c_process_xstatus(BgL_procz00_8);} 
}



/* _process-exit-status */
obj_t BGl__processzd2exitzd2statusz00zz__processz00(obj_t BgL_envz00_1530, obj_t BgL_procz00_1531)
{ AN_OBJECT;
{ /* Llib/process.scm 171 */
{ /* Llib/process.scm 172 */
obj_t BgL_procz00_1616;
if(
PROCESSP(BgL_procz00_1531))
{ /* Llib/process.scm 172 */
BgL_procz00_1616 = BgL_procz00_1531; }  else 
{ 
obj_t BgL_auxz00_1713;
BgL_auxz00_1713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)7489)), BGl_string2264z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1531); 
FAILURE(BgL_auxz00_1713,BFALSE,BFALSE);} 
return 
c_process_xstatus(BgL_procz00_1616);} } 
}



/* process-send-signal */
BGL_EXPORTED_DEF obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t BgL_procz00_9, int BgL_signalz00_10)
{ AN_OBJECT;
{ /* Llib/process.scm 177 */
return 
c_process_send_signal(BgL_procz00_9, BgL_signalz00_10);} 
}



/* _process-send-signal */
obj_t BGl__processzd2sendzd2signalz00zz__processz00(obj_t BgL_envz00_1532, obj_t BgL_procz00_1533, obj_t BgL_signalz00_1534)
{ AN_OBJECT;
{ /* Llib/process.scm 177 */
{ /* Llib/process.scm 178 */
obj_t BgL_procz00_1617;int BgL_signalz00_1618;
if(
PROCESSP(BgL_procz00_1533))
{ /* Llib/process.scm 178 */
BgL_procz00_1617 = BgL_procz00_1533; }  else 
{ 
obj_t BgL_auxz00_1721;
BgL_auxz00_1721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)7794)), BGl_string2265z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1533); 
FAILURE(BgL_auxz00_1721,BFALSE,BFALSE);} 
{ /* Llib/process.scm 178 */
obj_t BgL_auxz00_1725;
if(
INTEGERP(BgL_signalz00_1534))
{ /* Llib/process.scm 178 */
BgL_auxz00_1725 = BgL_signalz00_1534
; }  else 
{ 
obj_t BgL_auxz00_1728;
BgL_auxz00_1728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)7794)), BGl_string2265z00zz__processz00, BGl_string2266z00zz__processz00, BgL_signalz00_1534); 
FAILURE(BgL_auxz00_1728,BFALSE,BFALSE);} 
BgL_signalz00_1618 = 
CINT(BgL_auxz00_1725); } 
return 
c_process_send_signal(BgL_procz00_1617, BgL_signalz00_1618);} } 
}



/* process-kill */
BGL_EXPORTED_DEF obj_t BGl_processzd2killzd2zz__processz00(obj_t BgL_procz00_11)
{ AN_OBJECT;
{ /* Llib/process.scm 183 */
c_process_kill(BgL_procz00_11); 
return 
BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_11);} 
}



/* _process-kill */
obj_t BGl__processzd2killzd2zz__processz00(obj_t BgL_envz00_1535, obj_t BgL_procz00_1536)
{ AN_OBJECT;
{ /* Llib/process.scm 183 */
{ /* Llib/process.scm 185 */
obj_t BgL_procz00_1619;
if(
PROCESSP(BgL_procz00_1536))
{ /* Llib/process.scm 185 */
BgL_procz00_1619 = BgL_procz00_1536; }  else 
{ 
obj_t BgL_auxz00_1738;
BgL_auxz00_1738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)8142)), BGl_string2267z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1536); 
FAILURE(BgL_auxz00_1738,BFALSE,BFALSE);} 
c_process_kill(BgL_procz00_1619); 
return 
BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_1619);} } 
}



/* process-stop */
BGL_EXPORTED_DEF obj_t BGl_processzd2stopzd2zz__processz00(obj_t BgL_procz00_12)
{ AN_OBJECT;
{ /* Llib/process.scm 190 */
return 
c_process_stop(BgL_procz00_12);} 
}



/* _process-stop */
obj_t BGl__processzd2stopzd2zz__processz00(obj_t BgL_envz00_1537, obj_t BgL_procz00_1538)
{ AN_OBJECT;
{ /* Llib/process.scm 190 */
{ /* Llib/process.scm 191 */
obj_t BgL_procz00_1620;
if(
PROCESSP(BgL_procz00_1538))
{ /* Llib/process.scm 191 */
BgL_procz00_1620 = BgL_procz00_1538; }  else 
{ 
obj_t BgL_auxz00_1747;
BgL_auxz00_1747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)8406)), BGl_string2268z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1538); 
FAILURE(BgL_auxz00_1747,BFALSE,BFALSE);} 
return 
c_process_stop(BgL_procz00_1620);} } 
}



/* process-continue */
BGL_EXPORTED_DEF obj_t BGl_processzd2continuezd2zz__processz00(obj_t BgL_procz00_13)
{ AN_OBJECT;
{ /* Llib/process.scm 196 */
return 
c_process_continue(BgL_procz00_13);} 
}



/* _process-continue */
obj_t BGl__processzd2continuezd2zz__processz00(obj_t BgL_envz00_1539, obj_t BgL_procz00_1540)
{ AN_OBJECT;
{ /* Llib/process.scm 196 */
{ /* Llib/process.scm 197 */
obj_t BgL_procz00_1621;
if(
PROCESSP(BgL_procz00_1540))
{ /* Llib/process.scm 197 */
BgL_procz00_1621 = BgL_procz00_1540; }  else 
{ 
obj_t BgL_auxz00_1755;
BgL_auxz00_1755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)8694)), BGl_string2269z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1540); 
FAILURE(BgL_auxz00_1755,BFALSE,BFALSE);} 
return 
c_process_continue(BgL_procz00_1621);} } 
}



/* process-list */
BGL_EXPORTED_DEF obj_t BGl_processzd2listzd2zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 202 */
return 
c_process_list();} 
}



/* _process-list */
obj_t BGl__processzd2listzd2zz__processz00(obj_t BgL_envz00_1541)
{ AN_OBJECT;
{ /* Llib/process.scm 202 */
return 
c_process_list();} 
}



/* run-process */
BGL_EXPORTED_DEF obj_t BGl_runzd2processzd2zz__processz00(obj_t BgL_commandz00_14, obj_t BgL_restz00_15)
{ AN_OBJECT;
{ /* Llib/process.scm 211 */
{ /* Llib/process.scm 212 */
obj_t BgL_forkz00_759;obj_t BgL_waitz00_760;obj_t BgL_inputz00_761;obj_t BgL_outputz00_762;obj_t BgL_errorz00_763;obj_t BgL_hostz00_764;obj_t BgL_pipesz00_765;obj_t BgL_argsz00_766;obj_t BgL_envz00_767;
BgL_forkz00_759 = BTRUE; 
BgL_waitz00_760 = BFALSE; 
BgL_inputz00_761 = BUNSPEC; 
BgL_outputz00_762 = BUNSPEC; 
BgL_errorz00_763 = BUNSPEC; 
BgL_hostz00_764 = BUNSPEC; 
BgL_pipesz00_765 = BGl_list2270z00zz__processz00; 
BgL_argsz00_766 = BNIL; 
BgL_envz00_767 = BNIL; 
{ 
obj_t BgL_restz00_770;
{ /* Llib/process.scm 223 */
obj_t BgL_aux2242z00_1595;
BgL_restz00_770 = BgL_restz00_15; 
BgL_zc3anonymousza31880ze3z83_771:
if(
NULLP(BgL_restz00_770))
{ /* Llib/process.scm 228 */
obj_t BgL_arg1882z00_773;
{ /* Llib/process.scm 228 */
obj_t BgL_auxz00_1764;
{ /* Llib/process.scm 228 */
obj_t BgL_aux2220z00_1573;
BgL_aux2220z00_1573 = BgL_argsz00_766; 
{ /* Llib/process.scm 228 */
bool_t BgL_testz00_1765;
if(
PAIRP(BgL_aux2220z00_1573))
{ /* Llib/process.scm 228 */
BgL_testz00_1765 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 228 */
BgL_testz00_1765 = 
NULLP(BgL_aux2220z00_1573)
; } 
if(BgL_testz00_1765)
{ /* Llib/process.scm 228 */
BgL_auxz00_1764 = BgL_aux2220z00_1573
; }  else 
{ 
obj_t BgL_auxz00_1769;
BgL_auxz00_1769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9888)), BGl_string2273z00zz__processz00, BGl_string2274z00zz__processz00, BgL_aux2220z00_1573); 
FAILURE(BgL_auxz00_1769,BFALSE,BFALSE);} } } 
BgL_arg1882z00_773 = 
bgl_reverse_bang(BgL_auxz00_1764); } 
BgL_aux2242z00_1595 = 
c_run_process(BgL_hostz00_764, BgL_forkz00_759, BgL_waitz00_760, BgL_inputz00_761, BgL_outputz00_762, BgL_errorz00_763, BgL_commandz00_14, BgL_arg1882z00_773, BgL_envz00_767); }  else 
{ /* Llib/process.scm 229 */
bool_t BgL_testz00_1775;
{ /* Llib/process.scm 229 */
bool_t BgL_testz00_1776;
{ /* Llib/process.scm 229 */
obj_t BgL_auxz00_1777;
{ /* Llib/process.scm 229 */
obj_t BgL_pairz00_1270;
if(
PAIRP(BgL_restz00_770))
{ /* Llib/process.scm 229 */
BgL_pairz00_1270 = BgL_restz00_770; }  else 
{ 
obj_t BgL_auxz00_1780;
BgL_auxz00_1780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9926)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_restz00_770); 
FAILURE(BgL_auxz00_1780,BFALSE,BFALSE);} 
BgL_auxz00_1777 = 
CAR(BgL_pairz00_1270); } 
BgL_testz00_1776 = 
KEYWORDP(BgL_auxz00_1777); } 
if(BgL_testz00_1776)
{ /* Llib/process.scm 229 */
obj_t BgL_auxz00_1786;
{ /* Llib/process.scm 229 */
obj_t BgL_pairz00_1272;
if(
PAIRP(BgL_restz00_770))
{ /* Llib/process.scm 229 */
BgL_pairz00_1272 = BgL_restz00_770; }  else 
{ 
obj_t BgL_auxz00_1789;
BgL_auxz00_1789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9945)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_restz00_770); 
FAILURE(BgL_auxz00_1789,BFALSE,BFALSE);} 
BgL_auxz00_1786 = 
CDR(BgL_pairz00_1272); } 
BgL_testz00_1775 = 
PAIRP(BgL_auxz00_1786); }  else 
{ /* Llib/process.scm 229 */
BgL_testz00_1775 = ((bool_t)0)
; } } 
if(BgL_testz00_1775)
{ /* Llib/process.scm 230 */
obj_t BgL_valz00_775;
{ /* Llib/process.scm 230 */
obj_t BgL_pairz00_1274;
if(
PAIRP(BgL_restz00_770))
{ /* Llib/process.scm 230 */
BgL_pairz00_1274 = BgL_restz00_770; }  else 
{ 
obj_t BgL_auxz00_1797;
BgL_auxz00_1797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9976)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_restz00_770); 
FAILURE(BgL_auxz00_1797,BFALSE,BFALSE);} 
{ /* Llib/process.scm 230 */
obj_t BgL_pairz00_1277;
{ /* Llib/process.scm 230 */
obj_t BgL_aux2228z00_1581;
BgL_aux2228z00_1581 = 
CDR(BgL_pairz00_1274); 
if(
PAIRP(BgL_aux2228z00_1581))
{ /* Llib/process.scm 230 */
BgL_pairz00_1277 = BgL_aux2228z00_1581; }  else 
{ 
obj_t BgL_auxz00_1804;
BgL_auxz00_1804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9970)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_aux2228z00_1581); 
FAILURE(BgL_auxz00_1804,BFALSE,BFALSE);} } 
BgL_valz00_775 = 
CAR(BgL_pairz00_1277); } } 
{ /* Llib/process.scm 231 */
obj_t BgL_casezd2valuezd2_776;
BgL_casezd2valuezd2_776 = 
CAR(BgL_restz00_770); 
if(
(BgL_casezd2valuezd2_776==BGl_keyword2276z00zz__processz00))
{ /* Llib/process.scm 231 */
if(
BOOLEANP(BgL_valz00_775))
{ /* Llib/process.scm 233 */
BgL_waitz00_760 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 233 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2280z00zz__processz00))
{ /* Llib/process.scm 231 */
if(
BOOLEANP(BgL_valz00_775))
{ /* Llib/process.scm 237 */
BgL_forkz00_759 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 237 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2282z00zz__processz00))
{ /* Llib/process.scm 241 */
bool_t BgL_testz00_1822;
if(
STRINGP(BgL_valz00_775))
{ /* Llib/process.scm 241 */
BgL_testz00_1822 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 241 */
BgL_testz00_1822 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_775, BgL_pipesz00_765))
; } 
if(BgL_testz00_1822)
{ /* Llib/process.scm 241 */
BgL_inputz00_761 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 241 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2284z00zz__processz00))
{ /* Llib/process.scm 245 */
bool_t BgL_testz00_1830;
if(
STRINGP(BgL_valz00_775))
{ /* Llib/process.scm 245 */
BgL_testz00_1830 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 245 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_775, BgL_pipesz00_765)))
{ /* Llib/process.scm 245 */
BgL_testz00_1830 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 245 */
BgL_testz00_1830 = 
(BgL_valz00_775==BGl_keyword2286z00zz__processz00)
; } } 
if(BgL_testz00_1830)
{ /* Llib/process.scm 245 */
BgL_outputz00_762 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 245 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2288z00zz__processz00))
{ /* Llib/process.scm 249 */
bool_t BgL_testz00_1840;
if(
STRINGP(BgL_valz00_775))
{ /* Llib/process.scm 249 */
BgL_testz00_1840 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 249 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_775, BgL_pipesz00_765)))
{ /* Llib/process.scm 249 */
BgL_testz00_1840 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 249 */
BgL_testz00_1840 = 
(BgL_valz00_775==BGl_keyword2286z00zz__processz00)
; } } 
if(BgL_testz00_1840)
{ /* Llib/process.scm 249 */
BgL_errorz00_763 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 249 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2290z00zz__processz00))
{ /* Llib/process.scm 231 */
if(
STRINGP(BgL_valz00_775))
{ /* Llib/process.scm 253 */
BgL_hostz00_764 = BgL_valz00_775; }  else 
{ /* Llib/process.scm 253 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
if(
(BgL_casezd2valuezd2_776==BGl_keyword2292z00zz__processz00))
{ /* Llib/process.scm 231 */
if(
STRINGP(BgL_valz00_775))
{ /* Llib/process.scm 257 */
BgL_envz00_767 = 
MAKE_PAIR(BgL_valz00_775, BgL_envz00_767); }  else 
{ /* Llib/process.scm 257 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } }  else 
{ /* Llib/process.scm 231 */
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } } } } } } } } 
{ /* Llib/process.scm 262 */
obj_t BgL_arg1903z00_796;
{ /* Llib/process.scm 262 */
obj_t BgL_pairz00_1309;
{ /* Llib/process.scm 262 */
obj_t BgL_pairz00_1308;
BgL_pairz00_1308 = BgL_restz00_770; 
{ /* Llib/process.scm 262 */
obj_t BgL_aux2234z00_1587;
BgL_aux2234z00_1587 = 
CDR(BgL_pairz00_1308); 
if(
PAIRP(BgL_aux2234z00_1587))
{ /* Llib/process.scm 262 */
BgL_pairz00_1309 = BgL_aux2234z00_1587; }  else 
{ 
obj_t BgL_auxz00_1863;
BgL_auxz00_1863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)10722)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_aux2234z00_1587); 
FAILURE(BgL_auxz00_1863,BFALSE,BFALSE);} } } 
BgL_arg1903z00_796 = 
CDR(BgL_pairz00_1309); } 
{ 
obj_t BgL_restz00_1868;
BgL_restz00_1868 = BgL_arg1903z00_796; 
BgL_restz00_770 = BgL_restz00_1868; 
goto BgL_zc3anonymousza31880ze3z83_771;} } }  else 
{ /* Llib/process.scm 263 */
bool_t BgL_testz00_1869;
{ /* Llib/process.scm 263 */
obj_t BgL_auxz00_1870;
{ /* Llib/process.scm 263 */
obj_t BgL_pairz00_1310;
if(
PAIRP(BgL_restz00_770))
{ /* Llib/process.scm 263 */
BgL_pairz00_1310 = BgL_restz00_770; }  else 
{ 
obj_t BgL_auxz00_1873;
BgL_auxz00_1873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)10757)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_restz00_770); 
FAILURE(BgL_auxz00_1873,BFALSE,BFALSE);} 
BgL_auxz00_1870 = 
CAR(BgL_pairz00_1310); } 
BgL_testz00_1869 = 
STRINGP(BgL_auxz00_1870); } 
if(BgL_testz00_1869)
{ /* Llib/process.scm 263 */
{ /* Llib/process.scm 264 */
obj_t BgL_arg1906z00_799;
{ /* Llib/process.scm 264 */
obj_t BgL_pairz00_1312;
if(
PAIRP(BgL_restz00_770))
{ /* Llib/process.scm 264 */
BgL_pairz00_1312 = BgL_restz00_770; }  else 
{ 
obj_t BgL_auxz00_1881;
BgL_auxz00_1881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)10792)), BGl_string2273z00zz__processz00, BGl_string2275z00zz__processz00, BgL_restz00_770); 
FAILURE(BgL_auxz00_1881,BFALSE,BFALSE);} 
BgL_arg1906z00_799 = 
CAR(BgL_pairz00_1312); } 
BgL_argsz00_766 = 
MAKE_PAIR(BgL_arg1906z00_799, BgL_argsz00_766); } 
{ 
obj_t BgL_restz00_1887;
BgL_restz00_1887 = 
CDR(BgL_restz00_770); 
BgL_restz00_770 = BgL_restz00_1887; 
goto BgL_zc3anonymousza31880ze3z83_771;} }  else 
{ /* Llib/process.scm 263 */
BgL_aux2242z00_1595 = 
BGl_errorz00zz__errorz00(BGl_string2278z00zz__processz00, BGl_string2279z00zz__processz00, BgL_restz00_770); } } } 
if(
PROCESSP(BgL_aux2242z00_1595))
{ /* Llib/process.scm 223 */
return BgL_aux2242z00_1595;}  else 
{ 
obj_t BgL_auxz00_1892;
BgL_auxz00_1892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9750)), BGl_string2278z00zz__processz00, BGl_string2258z00zz__processz00, BgL_aux2242z00_1595); 
FAILURE(BgL_auxz00_1892,BFALSE,BFALSE);} } } } } 
}



/* _run-process */
obj_t BGl__runzd2processzd2zz__processz00(obj_t BgL_envz00_1542, obj_t BgL_commandz00_1543, obj_t BgL_restz00_1544)
{ AN_OBJECT;
{ /* Llib/process.scm 211 */
{ /* Llib/process.scm 212 */
obj_t BgL_auxz00_1896;
if(
STRINGP(BgL_commandz00_1543))
{ /* Llib/process.scm 212 */
BgL_auxz00_1896 = BgL_commandz00_1543
; }  else 
{ 
obj_t BgL_auxz00_1899;
BgL_auxz00_1899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)9480)), BGl_string2294z00zz__processz00, BGl_string2295z00zz__processz00, BgL_commandz00_1543); 
FAILURE(BgL_auxz00_1899,BFALSE,BFALSE);} 
return 
BGl_runzd2processzd2zz__processz00(BgL_auxz00_1896, BgL_restz00_1544);} } 
}



/* close-process-ports */
BGL_EXPORTED_DEF obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t BgL_procz00_16)
{ AN_OBJECT;
{ /* Llib/process.scm 272 */
{ /* Llib/process.scm 273 */
bool_t BgL_testz00_1904;
{ /* Llib/process.scm 273 */
obj_t BgL_auxz00_1905;
BgL_auxz00_1905 = 
PROCESS_INPUT_PORT(BgL_procz00_16); 
BgL_testz00_1904 = 
OUTPUT_PORTP(BgL_auxz00_1905); } 
if(BgL_testz00_1904)
{ /* Llib/process.scm 274 */
obj_t BgL_arg1914z00_810;
BgL_arg1914z00_810 = 
PROCESS_INPUT_PORT(BgL_procz00_16); 
{ /* Llib/process.scm 274 */
obj_t BgL_portz00_1318;
if(
OUTPUT_PORTP(BgL_arg1914z00_810))
{ /* Llib/process.scm 274 */
BgL_portz00_1318 = BgL_arg1914z00_810; }  else 
{ 
obj_t BgL_auxz00_1911;
BgL_auxz00_1911 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)11225)), BGl_string2296z00zz__processz00, BGl_string2297z00zz__processz00, BgL_arg1914z00_810); 
FAILURE(BgL_auxz00_1911,BFALSE,BFALSE);} 
bgl_close_output_port(BgL_portz00_1318); } }  else 
{ /* Llib/process.scm 273 */BFALSE; } } 
{ /* Llib/process.scm 275 */
bool_t BgL_testz00_1916;
{ /* Llib/process.scm 275 */
obj_t BgL_auxz00_1917;
BgL_auxz00_1917 = 
PROCESS_ERROR_PORT(BgL_procz00_16); 
BgL_testz00_1916 = 
INPUT_PORTP(BgL_auxz00_1917); } 
if(BgL_testz00_1916)
{ /* Llib/process.scm 276 */
obj_t BgL_arg1918z00_813;
BgL_arg1918z00_813 = 
PROCESS_ERROR_PORT(BgL_procz00_16); 
{ /* Llib/process.scm 276 */
obj_t BgL_portz00_1322;
if(
INPUT_PORTP(BgL_arg1918z00_813))
{ /* Llib/process.scm 276 */
BgL_portz00_1322 = BgL_arg1918z00_813; }  else 
{ 
obj_t BgL_auxz00_1923;
BgL_auxz00_1923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)11325)), BGl_string2296z00zz__processz00, BGl_string2298z00zz__processz00, BgL_arg1918z00_813); 
FAILURE(BgL_auxz00_1923,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_1322); } }  else 
{ /* Llib/process.scm 275 */BFALSE; } } 
{ /* Llib/process.scm 277 */
bool_t BgL_testz00_1928;
{ /* Llib/process.scm 277 */
obj_t BgL_auxz00_1929;
BgL_auxz00_1929 = 
PROCESS_OUTPUT_PORT(BgL_procz00_16); 
BgL_testz00_1928 = 
INPUT_PORTP(BgL_auxz00_1929); } 
if(BgL_testz00_1928)
{ /* Llib/process.scm 278 */
obj_t BgL_arg1921z00_816;
BgL_arg1921z00_816 = 
PROCESS_OUTPUT_PORT(BgL_procz00_16); 
{ /* Llib/process.scm 278 */
obj_t BgL_portz00_1326;
if(
INPUT_PORTP(BgL_arg1921z00_816))
{ /* Llib/process.scm 278 */
BgL_portz00_1326 = BgL_arg1921z00_816; }  else 
{ 
obj_t BgL_auxz00_1935;
BgL_auxz00_1935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)11427)), BGl_string2296z00zz__processz00, BGl_string2298z00zz__processz00, BgL_arg1921z00_816); 
FAILURE(BgL_auxz00_1935,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_1326);} }  else 
{ /* Llib/process.scm 277 */
return BFALSE;} } } 
}



/* _close-process-ports */
obj_t BGl__closezd2processzd2portsz00zz__processz00(obj_t BgL_envz00_1545, obj_t BgL_procz00_1546)
{ AN_OBJECT;
{ /* Llib/process.scm 272 */
{ /* Llib/process.scm 278 */
obj_t BgL_auxz00_1940;
if(
PROCESSP(BgL_procz00_1546))
{ /* Llib/process.scm 278 */
BgL_auxz00_1940 = BgL_procz00_1546
; }  else 
{ 
obj_t BgL_auxz00_1943;
BgL_auxz00_1943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)11429)), BGl_string2299z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1546); 
FAILURE(BgL_auxz00_1943,BFALSE,BFALSE);} 
return 
BGl_closezd2processzd2portsz00zz__processz00(BgL_auxz00_1940);} } 
}



/* unregister-process */
BGL_EXPORTED_DEF obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t BgL_procz00_17)
{ AN_OBJECT;
{ /* Llib/process.scm 283 */
return 
c_unregister_process(BgL_procz00_17);} 
}



/* _unregister-process */
obj_t BGl__unregisterzd2processzd2zz__processz00(obj_t BgL_envz00_1547, obj_t BgL_procz00_1548)
{ AN_OBJECT;
{ /* Llib/process.scm 283 */
{ /* Llib/process.scm 284 */
obj_t BgL_procz00_1627;
if(
PROCESSP(BgL_procz00_1548))
{ /* Llib/process.scm 284 */
BgL_procz00_1627 = BgL_procz00_1548; }  else 
{ 
obj_t BgL_auxz00_1951;
BgL_auxz00_1951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2256z00zz__processz00, 
BINT(((long)11699)), BGl_string2300z00zz__processz00, BGl_string2258z00zz__processz00, BgL_procz00_1548); 
FAILURE(BgL_auxz00_1951,BFALSE,BFALSE);} 
return 
c_unregister_process(BgL_procz00_1627);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 15 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 15 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__processz00()
{ AN_OBJECT;
{ /* Llib/process.scm 15 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2301z00zz__processz00));} 
}

#ifdef __cplusplus
}
#endif
