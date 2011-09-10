/*===========================================================================*/
/*   (Llib/process.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/process.scm -indent -o objs/obj_u/Llib/process.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__processz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t c_process_alivep(obj_t);
	static obj_t BGl__processzd2errorzd2portz00zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2stopzd2zz__processz00(obj_t);
	static obj_t BGl__processzd2alivezf3z21zz__processz00(obj_t, obj_t);
	static obj_t BGl__processzd2exitzd2statusz00zz__processz00(obj_t, obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_keyword2217z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword2219z00zz__processz00 = BUNSPEC;
	static obj_t BGl__processzd2inputzd2portz00zz__processz00(obj_t, obj_t);
	static obj_t BGl_keyword2223z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword2225z00zz__processz00 = BUNSPEC;
	extern obj_t c_process_send_signal(obj_t, int);
	static obj_t BGl_keyword2227z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword2229z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword2231z00zz__processz00 = BUNSPEC;
	static obj_t BGl__processzf3zf3zz__processz00(obj_t, obj_t);
	static obj_t BGl_keyword2233z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword2235z00zz__processz00 = BUNSPEC;
	static obj_t BGl__processzd2listzd2zz__processz00(obj_t);
	static obj_t BGl__runzd2processzd2zz__processz00(obj_t, obj_t, obj_t);
	extern obj_t c_process_kill(obj_t);
	extern obj_t c_run_process(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__processz00 = BUNSPEC;
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
	BGL_EXPORTED_DECL obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t,
		int);
	static obj_t BGl__processzd2sendzd2signalz00zz__processz00(obj_t, obj_t,
		obj_t);
	extern obj_t c_process_continue(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	static obj_t BGl__processzd2continuezd2zz__processz00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_processzf3zf3zz__processz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
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
	static obj_t BGl_list2216z00zz__processz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_processzd2pidzd2zz__processz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__processz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2nilzd2envz00zz__processz00,
		BgL_bgl__processza7d2nilza7d2242z00, BGl__processzd2nilzd2zz__processz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2listzd2envz00zz__processz00,
		BgL_bgl__processza7d2listza72243z00, BGl__processzd2listzd2zz__processz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2waitzd2envz00zz__processz00,
		BgL_bgl__processza7d2waitza72244z00, BGl__processzd2waitzd2zz__processz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2outputzd2portzd2envzd2zz__processz00,
		BgL_bgl__processza7d2outpu2245za7,
		BGl__processzd2outputzd2portz00zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2processzd2portszd2envzd2zz__processz00,
		BgL_bgl__closeza7d2process2246za7,
		BGl__closezd2processzd2portsz00zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2stopzd2envz00zz__processz00,
		BgL_bgl__processza7d2stopza72247z00, BGl__processzd2stopzd2zz__processz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2alivezf3zd2envzf3zz__processz00,
		BgL_bgl__processza7d2alive2248za7, BGl__processzd2alivezf3z21zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2pidzd2envz00zz__processz00,
		BgL_bgl__processza7d2pidza7d2249z00, BGl__processzd2pidzd2zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_runzd2processzd2envz00zz__processz00,
		BgL_bgl__runza7d2processza7d2250z00, va_generic_entry,
		BGl__runzd2processzd2zz__processz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2killzd2envz00zz__processz00,
		BgL_bgl__processza7d2killza72251z00, BGl__processzd2killzd2zz__processz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2continuezd2envz00zz__processz00,
		BgL_bgl__processza7d2conti2252za7, BGl__processzd2continuezd2zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzf3zd2envz21zz__processz00,
		BgL_bgl__processza7f3za7f3za7za72253z00, BGl__processzf3zf3zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2202z00zz__processz00,
		BgL_bgl_string2202za700za7za7_2254za7,
		"/tmp/bigloo/runtime/Llib/process.scm", 36);
	      DEFINE_STRING(BGl_string2203z00zz__processz00,
		BgL_bgl_string2203za700za7za7_2255za7, "_process-pid", 12);
	      DEFINE_STRING(BGl_string2204z00zz__processz00,
		BgL_bgl_string2204za700za7za7_2256za7, "process", 7);
	      DEFINE_STRING(BGl_string2205z00zz__processz00,
		BgL_bgl_string2205za700za7za7_2257za7, "_process-output-port", 20);
	      DEFINE_STRING(BGl_string2206z00zz__processz00,
		BgL_bgl_string2206za700za7za7_2258za7, "_process-input-port", 19);
	      DEFINE_STRING(BGl_string2207z00zz__processz00,
		BgL_bgl_string2207za700za7za7_2259za7, "_process-error-port", 19);
	      DEFINE_STRING(BGl_string2208z00zz__processz00,
		BgL_bgl_string2208za700za7za7_2260za7, "_process-alive?", 15);
	      DEFINE_STRING(BGl_string2210z00zz__processz00,
		BgL_bgl_string2210za700za7za7_2261za7, "_process-exit-status", 20);
	      DEFINE_STRING(BGl_string2209z00zz__processz00,
		BgL_bgl_string2209za700za7za7_2262za7, "_process-wait", 13);
	      DEFINE_STRING(BGl_string2211z00zz__processz00,
		BgL_bgl_string2211za700za7za7_2263za7, "_process-send-signal", 20);
	      DEFINE_STRING(BGl_string2212z00zz__processz00,
		BgL_bgl_string2212za700za7za7_2264za7, "int", 3);
	      DEFINE_STRING(BGl_string2213z00zz__processz00,
		BgL_bgl_string2213za700za7za7_2265za7, "_process-kill", 13);
	      DEFINE_STRING(BGl_string2214z00zz__processz00,
		BgL_bgl_string2214za700za7za7_2266za7, "_process-stop", 13);
	      DEFINE_STRING(BGl_string2215z00zz__processz00,
		BgL_bgl_string2215za700za7za7_2267za7, "_process-continue", 17);
	      DEFINE_STRING(BGl_string2218z00zz__processz00,
		BgL_bgl_string2218za700za7za7_2268za7, "pipe", 4);
	      DEFINE_STRING(BGl_string2220z00zz__processz00,
		BgL_bgl_string2220za700za7za7_2269za7, "wait", 4);
	      DEFINE_STRING(BGl_string2221z00zz__processz00,
		BgL_bgl_string2221za700za7za7_2270za7, "run-process", 11);
	      DEFINE_STRING(BGl_string2222z00zz__processz00,
		BgL_bgl_string2222za700za7za7_2271za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2224z00zz__processz00,
		BgL_bgl_string2224za700za7za7_2272za7, "fork", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unregisterzd2processzd2envz00zz__processz00,
		BgL_bgl__unregisterza7d2pr2273za7,
		BGl__unregisterzd2processzd2zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2226z00zz__processz00,
		BgL_bgl_string2226za700za7za7_2274za7, "input", 5);
	      DEFINE_STRING(BGl_string2228z00zz__processz00,
		BgL_bgl_string2228za700za7za7_2275za7, "output", 6);
	      DEFINE_STRING(BGl_string2230z00zz__processz00,
		BgL_bgl_string2230za700za7za7_2276za7, "null", 4);
	      DEFINE_STRING(BGl_string2232z00zz__processz00,
		BgL_bgl_string2232za700za7za7_2277za7, "error", 5);
	      DEFINE_STRING(BGl_string2234z00zz__processz00,
		BgL_bgl_string2234za700za7za7_2278za7, "host", 4);
	      DEFINE_STRING(BGl_string2236z00zz__processz00,
		BgL_bgl_string2236za700za7za7_2279za7, "env", 3);
	      DEFINE_STRING(BGl_string2237z00zz__processz00,
		BgL_bgl_string2237za700za7za7_2280za7, "_run-process", 12);
	      DEFINE_STRING(BGl_string2238z00zz__processz00,
		BgL_bgl_string2238za700za7za7_2281za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2240z00zz__processz00,
		BgL_bgl_string2240za700za7za7_2282za7, "_unregister-process", 19);
	      DEFINE_STRING(BGl_string2239z00zz__processz00,
		BgL_bgl_string2239za700za7za7_2283za7, "_close-process-ports", 20);
	      DEFINE_STRING(BGl_string2241z00zz__processz00,
		BgL_bgl_string2241za700za7za7_2284za7, "__process", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2inputzd2portzd2envzd2zz__processz00,
		BgL_bgl__processza7d2input2285za7,
		BGl__processzd2inputzd2portz00zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2exitzd2statuszd2envzd2zz__processz00,
		BgL_bgl__processza7d2exitza72286z00,
		BGl__processzd2exitzd2statusz00zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2sendzd2signalzd2envzd2zz__processz00,
		BgL_bgl__processza7d2sendza72287z00,
		BGl__processzd2sendzd2signalz00zz__processz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2errorzd2portzd2envzd2zz__processz00,
		BgL_bgl__processza7d2error2288za7,
		BGl__processzd2errorzd2portz00zz__processz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__processz00(long
		BgL_checksumz00_1545, char *BgL_fromz00_1546)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__processz00))
				{
					BGl_requirezd2initializa7ationz75zz__processz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__processz00();
					BGl_importedzd2moduleszd2initz00zz__processz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 15 */
			BGl_keyword2217z00zz__processz00 =
				bstring_to_keyword(BGl_string2218z00zz__processz00);
			BGl_list2216z00zz__processz00 =
				MAKE_PAIR(BGl_keyword2217z00zz__processz00, BNIL);
			BGl_keyword2219z00zz__processz00 =
				bstring_to_keyword(BGl_string2220z00zz__processz00);
			BGl_keyword2223z00zz__processz00 =
				bstring_to_keyword(BGl_string2224z00zz__processz00);
			BGl_keyword2225z00zz__processz00 =
				bstring_to_keyword(BGl_string2226z00zz__processz00);
			BGl_keyword2227z00zz__processz00 =
				bstring_to_keyword(BGl_string2228z00zz__processz00);
			BGl_keyword2229z00zz__processz00 =
				bstring_to_keyword(BGl_string2230z00zz__processz00);
			BGl_keyword2231z00zz__processz00 =
				bstring_to_keyword(BGl_string2232z00zz__processz00);
			BGl_keyword2233z00zz__processz00 =
				bstring_to_keyword(BGl_string2234z00zz__processz00);
			return (BGl_keyword2235z00zz__processz00 =
				bstring_to_keyword(BGl_string2236z00zz__processz00), BUNSPEC);
		}
	}



/* process? */
	BGL_EXPORTED_DEF bool_t BGl_processzf3zf3zz__processz00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 122 */
			return PROCESSP(BgL_objz00_1);
		}
	}



/* _process? */
	obj_t BGl__processzf3zf3zz__processz00(obj_t BgL_envz00_1467,
		obj_t BgL_objz00_1468)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 122 */
			return BBOOL(PROCESSP(BgL_objz00_1468));
		}
	}



/* process-nil */
	BGL_EXPORTED_DEF obj_t BGl_processzd2nilzd2zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 128 */
			return bgl_process_nil();
		}
	}



/* _process-nil */
	obj_t BGl__processzd2nilzd2zz__processz00(obj_t BgL_envz00_1469)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 128 */
			return bgl_process_nil();
		}
	}



/* process-pid */
	BGL_EXPORTED_DEF int BGl_processzd2pidzd2zz__processz00(obj_t BgL_procz00_2)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 134 */
			return PROCESS_PID(BgL_procz00_2);
		}
	}



/* _process-pid */
	obj_t BGl__processzd2pidzd2zz__processz00(obj_t BgL_envz00_1470,
		obj_t BgL_procz00_1471)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 134 */
			{	/* Llib/process.scm 135 */
				int BgL_auxz00_1568;

				{	/* Llib/process.scm 135 */
					obj_t BgL_procz00_1532;

					if (PROCESSP(BgL_procz00_1471))
						{	/* Llib/process.scm 135 */
							BgL_procz00_1532 = BgL_procz00_1471;
						}
					else
						{
							obj_t BgL_auxz00_1571;

							BgL_auxz00_1571 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
								BINT(((long) 5703)), BGl_string2203z00zz__processz00,
								BGl_string2204z00zz__processz00, BgL_procz00_1471);
							FAILURE(BgL_auxz00_1571, BFALSE, BFALSE);
						}
					BgL_auxz00_1568 = PROCESS_PID(BgL_procz00_1532);
				}
				return BINT(BgL_auxz00_1568);
			}
		}
	}



/* process-output-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t
		BgL_procz00_3)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 140 */
			return PROCESS_OUTPUT_PORT(BgL_procz00_3);
		}
	}



/* _process-output-port */
	obj_t BGl__processzd2outputzd2portz00zz__processz00(obj_t BgL_envz00_1472,
		obj_t BgL_procz00_1473)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 140 */
			{	/* Llib/process.scm 141 */
				obj_t BgL_procz00_1533;

				if (PROCESSP(BgL_procz00_1473))
					{	/* Llib/process.scm 141 */
						BgL_procz00_1533 = BgL_procz00_1473;
					}
				else
					{
						obj_t BgL_auxz00_1580;

						BgL_auxz00_1580 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 5993)), BGl_string2205z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1473);
						FAILURE(BgL_auxz00_1580, BFALSE, BFALSE);
					}
				return PROCESS_OUTPUT_PORT(BgL_procz00_1533);
			}
		}
	}



/* process-input-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t
		BgL_procz00_4)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 146 */
			return PROCESS_INPUT_PORT(BgL_procz00_4);
		}
	}



/* _process-input-port */
	obj_t BGl__processzd2inputzd2portz00zz__processz00(obj_t BgL_envz00_1474,
		obj_t BgL_procz00_1475)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 146 */
			{	/* Llib/process.scm 147 */
				obj_t BgL_procz00_1534;

				if (PROCESSP(BgL_procz00_1475))
					{	/* Llib/process.scm 147 */
						BgL_procz00_1534 = BgL_procz00_1475;
					}
				else
					{
						obj_t BgL_auxz00_1588;

						BgL_auxz00_1588 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 6290)), BGl_string2206z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1475);
						FAILURE(BgL_auxz00_1588, BFALSE, BFALSE);
					}
				return PROCESS_INPUT_PORT(BgL_procz00_1534);
			}
		}
	}



/* process-error-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t
		BgL_procz00_5)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 152 */
			return PROCESS_ERROR_PORT(BgL_procz00_5);
		}
	}



/* _process-error-port */
	obj_t BGl__processzd2errorzd2portz00zz__processz00(obj_t BgL_envz00_1476,
		obj_t BgL_procz00_1477)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 152 */
			{	/* Llib/process.scm 153 */
				obj_t BgL_procz00_1535;

				if (PROCESSP(BgL_procz00_1477))
					{	/* Llib/process.scm 153 */
						BgL_procz00_1535 = BgL_procz00_1477;
					}
				else
					{
						obj_t BgL_auxz00_1596;

						BgL_auxz00_1596 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 6586)), BGl_string2207z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1477);
						FAILURE(BgL_auxz00_1596, BFALSE, BFALSE);
					}
				return PROCESS_ERROR_PORT(BgL_procz00_1535);
			}
		}
	}



/* process-alive? */
	BGL_EXPORTED_DEF bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t
		BgL_procz00_6)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 158 */
			return c_process_alivep(BgL_procz00_6);
		}
	}



/* _process-alive? */
	obj_t BGl__processzd2alivezf3z21zz__processz00(obj_t BgL_envz00_1478,
		obj_t BgL_procz00_1479)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 158 */
			{	/* Llib/process.scm 159 */
				bool_t BgL_auxz00_1602;

				{	/* Llib/process.scm 159 */
					obj_t BgL_procz00_1536;

					if (PROCESSP(BgL_procz00_1479))
						{	/* Llib/process.scm 159 */
							BgL_procz00_1536 = BgL_procz00_1479;
						}
					else
						{
							obj_t BgL_auxz00_1605;

							BgL_auxz00_1605 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
								BINT(((long) 6878)), BGl_string2208z00zz__processz00,
								BGl_string2204z00zz__processz00, BgL_procz00_1479);
							FAILURE(BgL_auxz00_1605, BFALSE, BFALSE);
						}
					BgL_auxz00_1602 = c_process_alivep(BgL_procz00_1536);
				}
				return BBOOL(BgL_auxz00_1602);
			}
		}
	}



/* process-wait */
	BGL_EXPORTED_DEF bool_t BGl_processzd2waitzd2zz__processz00(obj_t
		BgL_procz00_7)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 164 */
			if (c_process_alivep(BgL_procz00_7))
				{	/* Llib/process.scm 165 */
					return CBOOL(c_process_wait(BgL_procz00_7));
				}
			else
				{	/* Llib/process.scm 165 */
					return ((bool_t) 0);
				}
		}
	}



/* _process-wait */
	obj_t BGl__processzd2waitzd2zz__processz00(obj_t BgL_envz00_1480,
		obj_t BgL_procz00_1481)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 164 */
			{	/* Llib/process.scm 165 */
				bool_t BgL_auxz00_1615;

				{	/* Llib/process.scm 165 */
					obj_t BgL_procz00_1537;

					if (PROCESSP(BgL_procz00_1481))
						{	/* Llib/process.scm 165 */
							BgL_procz00_1537 = BgL_procz00_1481;
						}
					else
						{
							obj_t BgL_auxz00_1618;

							BgL_auxz00_1618 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
								BINT(((long) 7164)), BGl_string2209z00zz__processz00,
								BGl_string2204z00zz__processz00, BgL_procz00_1481);
							FAILURE(BgL_auxz00_1618, BFALSE, BFALSE);
						}
					if (c_process_alivep(BgL_procz00_1537))
						{	/* Llib/process.scm 165 */
							BgL_auxz00_1615 = CBOOL(c_process_wait(BgL_procz00_1537));
						}
					else
						{	/* Llib/process.scm 165 */
							BgL_auxz00_1615 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_auxz00_1615);
			}
		}
	}



/* process-exit-status */
	BGL_EXPORTED_DEF obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t
		BgL_procz00_8)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 171 */
			return c_process_xstatus(BgL_procz00_8);
		}
	}



/* _process-exit-status */
	obj_t BGl__processzd2exitzd2statusz00zz__processz00(obj_t BgL_envz00_1482,
		obj_t BgL_procz00_1483)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 171 */
			{	/* Llib/process.scm 172 */
				obj_t BgL_procz00_1538;

				if (PROCESSP(BgL_procz00_1483))
					{	/* Llib/process.scm 172 */
						BgL_procz00_1538 = BgL_procz00_1483;
					}
				else
					{
						obj_t BgL_auxz00_1630;

						BgL_auxz00_1630 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 7489)), BGl_string2210z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1483);
						FAILURE(BgL_auxz00_1630, BFALSE, BFALSE);
					}
				return c_process_xstatus(BgL_procz00_1538);
			}
		}
	}



/* process-send-signal */
	BGL_EXPORTED_DEF obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t
		BgL_procz00_9, int BgL_signalz00_10)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 177 */
			return c_process_send_signal(BgL_procz00_9, BgL_signalz00_10);
		}
	}



/* _process-send-signal */
	obj_t BGl__processzd2sendzd2signalz00zz__processz00(obj_t BgL_envz00_1484,
		obj_t BgL_procz00_1485, obj_t BgL_signalz00_1486)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 177 */
			{	/* Llib/process.scm 178 */
				obj_t BgL_procz00_1539;

				int BgL_signalz00_1540;

				if (PROCESSP(BgL_procz00_1485))
					{	/* Llib/process.scm 178 */
						BgL_procz00_1539 = BgL_procz00_1485;
					}
				else
					{
						obj_t BgL_auxz00_1638;

						BgL_auxz00_1638 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 7794)), BGl_string2211z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1485);
						FAILURE(BgL_auxz00_1638, BFALSE, BFALSE);
					}
				{	/* Llib/process.scm 178 */
					obj_t BgL_auxz00_1642;

					if (INTEGERP(BgL_signalz00_1486))
						{	/* Llib/process.scm 178 */
							BgL_auxz00_1642 = BgL_signalz00_1486;
						}
					else
						{
							obj_t BgL_auxz00_1645;

							BgL_auxz00_1645 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
								BINT(((long) 7794)), BGl_string2211z00zz__processz00,
								BGl_string2212z00zz__processz00, BgL_signalz00_1486);
							FAILURE(BgL_auxz00_1645, BFALSE, BFALSE);
						}
					BgL_signalz00_1540 = CINT(BgL_auxz00_1642);
				}
				return c_process_send_signal(BgL_procz00_1539, BgL_signalz00_1540);
			}
		}
	}



/* process-kill */
	BGL_EXPORTED_DEF obj_t BGl_processzd2killzd2zz__processz00(obj_t
		BgL_procz00_11)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 183 */
			c_process_kill(BgL_procz00_11);
			return BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_11);
		}
	}



/* _process-kill */
	obj_t BGl__processzd2killzd2zz__processz00(obj_t BgL_envz00_1487,
		obj_t BgL_procz00_1488)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 183 */
			{	/* Llib/process.scm 185 */
				obj_t BgL_procz00_1541;

				if (PROCESSP(BgL_procz00_1488))
					{	/* Llib/process.scm 185 */
						BgL_procz00_1541 = BgL_procz00_1488;
					}
				else
					{
						obj_t BgL_auxz00_1655;

						BgL_auxz00_1655 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 8142)), BGl_string2213z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1488);
						FAILURE(BgL_auxz00_1655, BFALSE, BFALSE);
					}
				c_process_kill(BgL_procz00_1541);
				return BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_1541);
			}
		}
	}



/* process-stop */
	BGL_EXPORTED_DEF obj_t BGl_processzd2stopzd2zz__processz00(obj_t
		BgL_procz00_12)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 190 */
			return c_process_stop(BgL_procz00_12);
		}
	}



/* _process-stop */
	obj_t BGl__processzd2stopzd2zz__processz00(obj_t BgL_envz00_1489,
		obj_t BgL_procz00_1490)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 190 */
			{	/* Llib/process.scm 191 */
				obj_t BgL_procz00_1542;

				if (PROCESSP(BgL_procz00_1490))
					{	/* Llib/process.scm 191 */
						BgL_procz00_1542 = BgL_procz00_1490;
					}
				else
					{
						obj_t BgL_auxz00_1664;

						BgL_auxz00_1664 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 8406)), BGl_string2214z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1490);
						FAILURE(BgL_auxz00_1664, BFALSE, BFALSE);
					}
				return c_process_stop(BgL_procz00_1542);
			}
		}
	}



/* process-continue */
	BGL_EXPORTED_DEF obj_t BGl_processzd2continuezd2zz__processz00(obj_t
		BgL_procz00_13)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 196 */
			return c_process_continue(BgL_procz00_13);
		}
	}



/* _process-continue */
	obj_t BGl__processzd2continuezd2zz__processz00(obj_t BgL_envz00_1491,
		obj_t BgL_procz00_1492)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 196 */
			{	/* Llib/process.scm 197 */
				obj_t BgL_procz00_1543;

				if (PROCESSP(BgL_procz00_1492))
					{	/* Llib/process.scm 197 */
						BgL_procz00_1543 = BgL_procz00_1492;
					}
				else
					{
						obj_t BgL_auxz00_1672;

						BgL_auxz00_1672 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 8694)), BGl_string2215z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1492);
						FAILURE(BgL_auxz00_1672, BFALSE, BFALSE);
					}
				return c_process_continue(BgL_procz00_1543);
			}
		}
	}



/* process-list */
	BGL_EXPORTED_DEF obj_t BGl_processzd2listzd2zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 202 */
			return c_process_list();
		}
	}



/* _process-list */
	obj_t BGl__processzd2listzd2zz__processz00(obj_t BgL_envz00_1493)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 202 */
			return c_process_list();
		}
	}



/* run-process */
	BGL_EXPORTED_DEF obj_t BGl_runzd2processzd2zz__processz00(obj_t
		BgL_commandz00_14, obj_t BgL_restz00_15)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 211 */
			{	/* Llib/process.scm 212 */
				obj_t BgL_forkz00_759;

				obj_t BgL_waitz00_760;

				obj_t BgL_inputz00_761;

				obj_t BgL_outputz00_762;

				obj_t BgL_errorz00_763;

				obj_t BgL_hostz00_764;

				obj_t BgL_pipesz00_765;

				obj_t BgL_argsz00_766;

				obj_t BgL_envz00_767;

				BgL_forkz00_759 = BTRUE;
				BgL_waitz00_760 = BFALSE;
				BgL_inputz00_761 = BUNSPEC;
				BgL_outputz00_762 = BUNSPEC;
				BgL_errorz00_763 = BUNSPEC;
				BgL_hostz00_764 = BUNSPEC;
				BgL_pipesz00_765 = BGl_list2216z00zz__processz00;
				BgL_argsz00_766 = BNIL;
				BgL_envz00_767 = BNIL;
				{
					obj_t BgL_restz00_770;

					BgL_restz00_770 = BgL_restz00_15;
				BgL_zc3anonymousza31880ze3z83_771:
					if (NULLP(BgL_restz00_770))
						{	/* Llib/process.scm 228 */
							obj_t BgL_arg1882z00_773;

							BgL_arg1882z00_773 = bgl_reverse_bang(BgL_argsz00_766);
							return
								c_run_process(BgL_hostz00_764, BgL_forkz00_759, BgL_waitz00_760,
								BgL_inputz00_761, BgL_outputz00_762, BgL_errorz00_763,
								BgL_commandz00_14, BgL_arg1882z00_773, BgL_envz00_767);
						}
					else
						{	/* Llib/process.scm 229 */
							bool_t BgL_testz00_1683;

							{	/* Llib/process.scm 229 */
								bool_t BgL_testz00_1684;

								{	/* Llib/process.scm 229 */
									obj_t BgL_auxz00_1685;

									BgL_auxz00_1685 = CAR(BgL_restz00_770);
									BgL_testz00_1684 = KEYWORDP(BgL_auxz00_1685);
								}
								if (BgL_testz00_1684)
									{	/* Llib/process.scm 229 */
										obj_t BgL_auxz00_1688;

										BgL_auxz00_1688 = CDR(BgL_restz00_770);
										BgL_testz00_1683 = PAIRP(BgL_auxz00_1688);
									}
								else
									{	/* Llib/process.scm 229 */
										BgL_testz00_1683 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_1683)
								{	/* Llib/process.scm 230 */
									obj_t BgL_valz00_775;

									{	/* Llib/process.scm 230 */
										obj_t BgL_pairz00_1250;

										BgL_pairz00_1250 = BgL_restz00_770;
										BgL_valz00_775 = CAR(CDR(BgL_pairz00_1250));
									}
									{	/* Llib/process.scm 231 */
										obj_t BgL_casezd2valuezd2_776;

										BgL_casezd2valuezd2_776 = CAR(BgL_restz00_770);
										if (
											(BgL_casezd2valuezd2_776 ==
												BGl_keyword2219z00zz__processz00))
											{	/* Llib/process.scm 231 */
												if (BOOLEANP(BgL_valz00_775))
													{	/* Llib/process.scm 233 */
														BgL_waitz00_760 = BgL_valz00_775;
													}
												else
													{	/* Llib/process.scm 233 */
														BGl_errorz00zz__errorz00
															(BGl_string2221z00zz__processz00,
															BGl_string2222z00zz__processz00, BgL_restz00_770);
													}
											}
										else
											{	/* Llib/process.scm 231 */
												if (
													(BgL_casezd2valuezd2_776 ==
														BGl_keyword2223z00zz__processz00))
													{	/* Llib/process.scm 231 */
														if (BOOLEANP(BgL_valz00_775))
															{	/* Llib/process.scm 237 */
																BgL_forkz00_759 = BgL_valz00_775;
															}
														else
															{	/* Llib/process.scm 237 */
																BGl_errorz00zz__errorz00
																	(BGl_string2221z00zz__processz00,
																	BGl_string2222z00zz__processz00,
																	BgL_restz00_770);
															}
													}
												else
													{	/* Llib/process.scm 231 */
														if (
															(BgL_casezd2valuezd2_776 ==
																BGl_keyword2225z00zz__processz00))
															{	/* Llib/process.scm 241 */
																bool_t BgL_testz00_1706;

																if (STRINGP(BgL_valz00_775))
																	{	/* Llib/process.scm 241 */
																		BgL_testz00_1706 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/process.scm 241 */
																		BgL_testz00_1706 =
																			CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_valz00_775, BgL_pipesz00_765));
																	}
																if (BgL_testz00_1706)
																	{	/* Llib/process.scm 241 */
																		BgL_inputz00_761 = BgL_valz00_775;
																	}
																else
																	{	/* Llib/process.scm 241 */
																		BGl_errorz00zz__errorz00
																			(BGl_string2221z00zz__processz00,
																			BGl_string2222z00zz__processz00,
																			BgL_restz00_770);
																	}
															}
														else
															{	/* Llib/process.scm 231 */
																if (
																	(BgL_casezd2valuezd2_776 ==
																		BGl_keyword2227z00zz__processz00))
																	{	/* Llib/process.scm 245 */
																		bool_t BgL_testz00_1714;

																		if (STRINGP(BgL_valz00_775))
																			{	/* Llib/process.scm 245 */
																				BgL_testz00_1714 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/process.scm 245 */
																				if (CBOOL
																					(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_valz00_775, BgL_pipesz00_765)))
																					{	/* Llib/process.scm 245 */
																						BgL_testz00_1714 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/process.scm 245 */
																						BgL_testz00_1714 =
																							(BgL_valz00_775 ==
																							BGl_keyword2229z00zz__processz00);
																					}
																			}
																		if (BgL_testz00_1714)
																			{	/* Llib/process.scm 245 */
																				BgL_outputz00_762 = BgL_valz00_775;
																			}
																		else
																			{	/* Llib/process.scm 245 */
																				BGl_errorz00zz__errorz00
																					(BGl_string2221z00zz__processz00,
																					BGl_string2222z00zz__processz00,
																					BgL_restz00_770);
																			}
																	}
																else
																	{	/* Llib/process.scm 231 */
																		if (
																			(BgL_casezd2valuezd2_776 ==
																				BGl_keyword2231z00zz__processz00))
																			{	/* Llib/process.scm 249 */
																				bool_t BgL_testz00_1724;

																				if (STRINGP(BgL_valz00_775))
																					{	/* Llib/process.scm 249 */
																						BgL_testz00_1724 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/process.scm 249 */
																						if (CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_valz00_775,
																									BgL_pipesz00_765)))
																							{	/* Llib/process.scm 249 */
																								BgL_testz00_1724 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/process.scm 249 */
																								BgL_testz00_1724 =
																									(BgL_valz00_775 ==
																									BGl_keyword2229z00zz__processz00);
																							}
																					}
																				if (BgL_testz00_1724)
																					{	/* Llib/process.scm 249 */
																						BgL_errorz00_763 = BgL_valz00_775;
																					}
																				else
																					{	/* Llib/process.scm 249 */
																						BGl_errorz00zz__errorz00
																							(BGl_string2221z00zz__processz00,
																							BGl_string2222z00zz__processz00,
																							BgL_restz00_770);
																					}
																			}
																		else
																			{	/* Llib/process.scm 231 */
																				if (
																					(BgL_casezd2valuezd2_776 ==
																						BGl_keyword2233z00zz__processz00))
																					{	/* Llib/process.scm 231 */
																						if (STRINGP(BgL_valz00_775))
																							{	/* Llib/process.scm 253 */
																								BgL_hostz00_764 =
																									BgL_valz00_775;
																							}
																						else
																							{	/* Llib/process.scm 253 */
																								BGl_errorz00zz__errorz00
																									(BGl_string2221z00zz__processz00,
																									BGl_string2222z00zz__processz00,
																									BgL_restz00_770);
																							}
																					}
																				else
																					{	/* Llib/process.scm 231 */
																						if (
																							(BgL_casezd2valuezd2_776 ==
																								BGl_keyword2235z00zz__processz00))
																							{	/* Llib/process.scm 231 */
																								if (STRINGP(BgL_valz00_775))
																									{	/* Llib/process.scm 257 */
																										BgL_envz00_767 =
																											MAKE_PAIR(BgL_valz00_775,
																											BgL_envz00_767);
																									}
																								else
																									{	/* Llib/process.scm 257 */
																										BGl_errorz00zz__errorz00
																											(BGl_string2221z00zz__processz00,
																											BGl_string2222z00zz__processz00,
																											BgL_restz00_770);
																									}
																							}
																						else
																							{	/* Llib/process.scm 231 */
																								BGl_errorz00zz__errorz00
																									(BGl_string2221z00zz__processz00,
																									BGl_string2222z00zz__processz00,
																									BgL_restz00_770);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
									{
										obj_t BgL_restz00_1744;

										BgL_restz00_1744 = CDR(CDR(BgL_restz00_770));
										BgL_restz00_770 = BgL_restz00_1744;
										goto BgL_zc3anonymousza31880ze3z83_771;
									}
								}
							else
								{	/* Llib/process.scm 263 */
									bool_t BgL_testz00_1747;

									{	/* Llib/process.scm 263 */
										obj_t BgL_auxz00_1748;

										BgL_auxz00_1748 = CAR(BgL_restz00_770);
										BgL_testz00_1747 = STRINGP(BgL_auxz00_1748);
									}
									if (BgL_testz00_1747)
										{	/* Llib/process.scm 263 */
											{	/* Llib/process.scm 264 */
												obj_t BgL_arg1906z00_799;

												BgL_arg1906z00_799 = CAR(BgL_restz00_770);
												BgL_argsz00_766 =
													MAKE_PAIR(BgL_arg1906z00_799, BgL_argsz00_766);
											}
											{
												obj_t BgL_restz00_1753;

												BgL_restz00_1753 = CDR(BgL_restz00_770);
												BgL_restz00_770 = BgL_restz00_1753;
												goto BgL_zc3anonymousza31880ze3z83_771;
											}
										}
									else
										{	/* Llib/process.scm 263 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2221z00zz__processz00,
												BGl_string2222z00zz__processz00, BgL_restz00_770);
										}
								}
						}
				}
			}
		}
	}



/* _run-process */
	obj_t BGl__runzd2processzd2zz__processz00(obj_t BgL_envz00_1494,
		obj_t BgL_commandz00_1495, obj_t BgL_restz00_1496)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 211 */
			{	/* Llib/process.scm 212 */
				obj_t BgL_auxz00_1756;

				if (STRINGP(BgL_commandz00_1495))
					{	/* Llib/process.scm 212 */
						BgL_auxz00_1756 = BgL_commandz00_1495;
					}
				else
					{
						obj_t BgL_auxz00_1759;

						BgL_auxz00_1759 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 9480)), BGl_string2237z00zz__processz00,
							BGl_string2238z00zz__processz00, BgL_commandz00_1495);
						FAILURE(BgL_auxz00_1759, BFALSE, BFALSE);
					}
				return
					BGl_runzd2processzd2zz__processz00(BgL_auxz00_1756, BgL_restz00_1496);
			}
		}
	}



/* close-process-ports */
	BGL_EXPORTED_DEF obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t
		BgL_procz00_16)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 272 */
			{	/* Llib/process.scm 273 */
				bool_t BgL_testz00_1764;

				{	/* Llib/process.scm 273 */
					obj_t BgL_auxz00_1765;

					BgL_auxz00_1765 = PROCESS_INPUT_PORT(BgL_procz00_16);
					BgL_testz00_1764 = OUTPUT_PORTP(BgL_auxz00_1765);
				}
				if (BgL_testz00_1764)
					{	/* Llib/process.scm 273 */
						bgl_close_output_port(PROCESS_INPUT_PORT(BgL_procz00_16));
					}
				else
					{	/* Llib/process.scm 273 */
						BFALSE;
					}
			}
			{	/* Llib/process.scm 275 */
				bool_t BgL_testz00_1770;

				{	/* Llib/process.scm 275 */
					obj_t BgL_auxz00_1771;

					BgL_auxz00_1771 = PROCESS_ERROR_PORT(BgL_procz00_16);
					BgL_testz00_1770 = INPUT_PORTP(BgL_auxz00_1771);
				}
				if (BgL_testz00_1770)
					{	/* Llib/process.scm 275 */
						bgl_close_input_port(PROCESS_ERROR_PORT(BgL_procz00_16));
					}
				else
					{	/* Llib/process.scm 275 */
						BFALSE;
					}
			}
			{	/* Llib/process.scm 277 */
				bool_t BgL_testz00_1776;

				{	/* Llib/process.scm 277 */
					obj_t BgL_auxz00_1777;

					BgL_auxz00_1777 = PROCESS_OUTPUT_PORT(BgL_procz00_16);
					BgL_testz00_1776 = INPUT_PORTP(BgL_auxz00_1777);
				}
				if (BgL_testz00_1776)
					{	/* Llib/process.scm 277 */
						return bgl_close_input_port(PROCESS_OUTPUT_PORT(BgL_procz00_16));
					}
				else
					{	/* Llib/process.scm 277 */
						return BFALSE;
					}
			}
		}
	}



/* _close-process-ports */
	obj_t BGl__closezd2processzd2portsz00zz__processz00(obj_t BgL_envz00_1497,
		obj_t BgL_procz00_1498)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 272 */
			{	/* Llib/process.scm 278 */
				obj_t BgL_auxz00_1782;

				if (PROCESSP(BgL_procz00_1498))
					{	/* Llib/process.scm 278 */
						BgL_auxz00_1782 = BgL_procz00_1498;
					}
				else
					{
						obj_t BgL_auxz00_1785;

						BgL_auxz00_1785 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 11429)), BGl_string2239z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1498);
						FAILURE(BgL_auxz00_1785, BFALSE, BFALSE);
					}
				return BGl_closezd2processzd2portsz00zz__processz00(BgL_auxz00_1782);
			}
		}
	}



/* unregister-process */
	BGL_EXPORTED_DEF obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t
		BgL_procz00_17)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 283 */
			return c_unregister_process(BgL_procz00_17);
		}
	}



/* _unregister-process */
	obj_t BGl__unregisterzd2processzd2zz__processz00(obj_t BgL_envz00_1499,
		obj_t BgL_procz00_1500)
	{
		AN_OBJECT;
		{	/* Llib/process.scm 283 */
			{	/* Llib/process.scm 284 */
				obj_t BgL_procz00_1544;

				if (PROCESSP(BgL_procz00_1500))
					{	/* Llib/process.scm 284 */
						BgL_procz00_1544 = BgL_procz00_1500;
					}
				else
					{
						obj_t BgL_auxz00_1793;

						BgL_auxz00_1793 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2202z00zz__processz00,
							BINT(((long) 11699)), BGl_string2240z00zz__processz00,
							BGl_string2204z00zz__processz00, BgL_procz00_1500);
						FAILURE(BgL_auxz00_1793, BFALSE, BFALSE);
					}
				return c_unregister_process(BgL_procz00_1544);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__processz00()
	{
		AN_OBJECT;
		{	/* Llib/process.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2241z00zz__processz00));
		}
	}

#ifdef __cplusplus
}
#endif
