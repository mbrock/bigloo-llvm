/*===========================================================================*/
/*   (Pp/pp.scm)                                                             */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Pp/pp.scm -indent -o objs/obj_u/Pp/pp.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_genericzd2writezd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ppzd2caseza2zd2zz__ppz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	static obj_t BGl_prz00zz__ppz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ppz00 = BUNSPEC;
	static obj_t BGl_reversezd2stringzd2appendz00zz__ppz00(obj_t);
	extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	static obj_t BGl_genericzd2initzd2zz__ppz00();
	static obj_t BGl_wrz00zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_ppzd2exprzd2listz00zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_ppzd2downzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_ppzd2definezd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__ppz00();
	static obj_t BGl_ppzd2lambdazd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_ppzd2defunzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__ppz00();
	static obj_t BGl_revzd2stringzd2appendz00zz__ppz00(obj_t, long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ppzd2widthza2zd2zz__ppz00 = BUNSPEC;
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_zc3anonymousza31913ze3z83zz__ppz00(obj_t, obj_t);
	static obj_t BGl_ppzd2casezd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_vectorzd2prefixzd2zz__ppz00(obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_ppzd2condzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_ppzd2generalzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_ppzd2beginzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__ppz00();
	extern obj_t bgl_close_output_port(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t string_to_symbol(char *);
	static obj_t BGl_ppzd2commentzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__ppz00zz__ppz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2475z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2488z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2501z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2503z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2494z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2505z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2507z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2516z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2518z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2520z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2522z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2524z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2526z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2528z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2530z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2532z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2534z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_ppzd2exprzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2536z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2538z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2540z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2542z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2544z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2546z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2548z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2550z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_ppzd2letzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	static bool_t BGl_readzd2macrozf3z21zz__ppz00(obj_t);
	static obj_t BGl_zc3anonymousza32057ze3z83zz__ppz00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_ppzd2exprzd2defunz00zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_ppzd2andzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_indentz00zz__ppz00(obj_t, obj_t, obj_t);
	static obj_t BGl_ppzd2dozd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_outz00zz__ppz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_ppzd2ifzd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_readzd2macrozd2prefixz00zz__ppz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__ppz00();
	static obj_t BGl_zc3anonymousza31986ze3z83zz__ppz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2476z00zz__ppz00,
		BgL_bgl_string2476za700za7za7_2553za7, "respect", 7);
	      DEFINE_STRING(BGl_string2477z00zz__ppz00,
		BgL_bgl_string2477za700za7za7_2554za7, "pp", 2);
	      DEFINE_STRING(BGl_string2478z00zz__ppz00,
		BgL_bgl_string2478za700za7za7_2555za7, "not an output-port", 18);
	      DEFINE_STRING(BGl_string2480z00zz__ppz00,
		BgL_bgl_string2480za700za7za7_2556za7, "#0", 2);
	      DEFINE_STRING(BGl_string2479z00zz__ppz00,
		BgL_bgl_string2479za700za7za7_2557za7, "#", 1);
	      DEFINE_STRING(BGl_string2481z00zz__ppz00,
		BgL_bgl_string2481za700za7za7_2558za7, "#00", 3);
	      DEFINE_STRING(BGl_string2482z00zz__ppz00,
		BgL_bgl_string2482za700za7za7_2559za7, ")", 1);
	      DEFINE_STRING(BGl_string2483z00zz__ppz00,
		BgL_bgl_string2483za700za7za7_2560za7, ".", 1);
	      DEFINE_STRING(BGl_string2484z00zz__ppz00,
		BgL_bgl_string2484za700za7za7_2561za7, "(", 1);
	      DEFINE_STRING(BGl_string2485z00zz__ppz00,
		BgL_bgl_string2485za700za7za7_2562za7, " ", 1);
	      DEFINE_STRING(BGl_string2486z00zz__ppz00,
		BgL_bgl_string2486za700za7za7_2563za7, " . ", 3);
	      DEFINE_STRING(BGl_string2487z00zz__ppz00,
		BgL_bgl_string2487za700za7za7_2564za7, "()", 2);
	      DEFINE_STRING(BGl_string2500z00zz__ppz00,
		BgL_bgl_string2500za700za7za7_2565za7, "#[eof-object]", 13);
	      DEFINE_STRING(BGl_string2490z00zz__ppz00,
		BgL_bgl_string2490za700za7za7_2566za7, "#t", 2);
	      DEFINE_STRING(BGl_string2489z00zz__ppz00,
		BgL_bgl_string2489za700za7za7_2567za7, "comment", 7);
	      DEFINE_STRING(BGl_string2491z00zz__ppz00,
		BgL_bgl_string2491za700za7za7_2568za7, "#f", 2);
	      DEFINE_STRING(BGl_string2502z00zz__ppz00,
		BgL_bgl_string2502za700za7za7_2569za7, "quote", 5);
	      DEFINE_STRING(BGl_string2492z00zz__ppz00,
		BgL_bgl_string2492za700za7za7_2570za7, "#e", 2);
	      DEFINE_STRING(BGl_string2493z00zz__ppz00,
		BgL_bgl_string2493za700za7za7_2571za7, "#l", 2);
	      DEFINE_STRING(BGl_string2504z00zz__ppz00,
		BgL_bgl_string2504za700za7za7_2572za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2495z00zz__ppz00,
		BgL_bgl_string2495za700za7za7_2573za7, "upper", 5);
	      DEFINE_STRING(BGl_string2506z00zz__ppz00,
		BgL_bgl_string2506za700za7za7_2574za7, "unquote", 7);
	      DEFINE_STRING(BGl_string2496z00zz__ppz00,
		BgL_bgl_string2496za700za7za7_2575za7, "#\"", 2);
	      DEFINE_STRING(BGl_string2497z00zz__ppz00,
		BgL_bgl_string2497za700za7za7_2576za7, "\"", 1);
	      DEFINE_STRING(BGl_string2508z00zz__ppz00,
		BgL_bgl_string2508za700za7za7_2577za7, "unquote-splicing", 16);
	      DEFINE_STRING(BGl_string2498z00zz__ppz00,
		BgL_bgl_string2498za700za7za7_2578za7, "#[input-port]", 13);
	      DEFINE_STRING(BGl_string2510z00zz__ppz00,
		BgL_bgl_string2510za700za7za7_2579za7, "`", 1);
	      DEFINE_STRING(BGl_string2509z00zz__ppz00,
		BgL_bgl_string2509za700za7za7_2580za7, "'", 1);
	      DEFINE_STRING(BGl_string2499z00zz__ppz00,
		BgL_bgl_string2499za700za7za7_2581za7, "#[output-port]", 14);
	      DEFINE_STRING(BGl_string2511z00zz__ppz00,
		BgL_bgl_string2511za700za7za7_2582za7, ",", 1);
	      DEFINE_STRING(BGl_string2512z00zz__ppz00,
		BgL_bgl_string2512za700za7za7_2583za7, ",@", 2);
	      DEFINE_STRING(BGl_string2513z00zz__ppz00,
		BgL_bgl_string2513za700za7za7_2584za7, "        ", 8);
	      DEFINE_STRING(BGl_string2514z00zz__ppz00,
		BgL_bgl_string2514za700za7za7_2585za7, "\n", 1);
	      DEFINE_STRING(BGl_string2515z00zz__ppz00,
		BgL_bgl_string2515za700za7za7_2586za7, "({}", 3);
	      DEFINE_STRING(BGl_string2517z00zz__ppz00,
		BgL_bgl_string2517za700za7za7_2587za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2519z00zz__ppz00,
		BgL_bgl_string2519za700za7za7_2588za7, "let*", 4);
	      DEFINE_STRING(BGl_string2521z00zz__ppz00,
		BgL_bgl_string2521za700za7za7_2589za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2523z00zz__ppz00,
		BgL_bgl_string2523za700za7za7_2590za7, "define", 6);
	      DEFINE_STRING(BGl_string2525z00zz__ppz00,
		BgL_bgl_string2525za700za7za7_2591za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2527z00zz__ppz00,
		BgL_bgl_string2527za700za7za7_2592za7, "define-method", 13);
	      DEFINE_STRING(BGl_string2529z00zz__ppz00,
		BgL_bgl_string2529za700za7za7_2593za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2531z00zz__ppz00,
		BgL_bgl_string2531za700za7za7_2594za7, "defun", 5);
	      DEFINE_STRING(BGl_string2533z00zz__ppz00,
		BgL_bgl_string2533za700za7za7_2595za7, "de", 2);
	      DEFINE_STRING(BGl_string2535z00zz__ppz00,
		BgL_bgl_string2535za700za7za7_2596za7, "if", 2);
	      DEFINE_STRING(BGl_string2537z00zz__ppz00,
		BgL_bgl_string2537za700za7za7_2597za7, "set!", 4);
	      DEFINE_STRING(BGl_string2539z00zz__ppz00,
		BgL_bgl_string2539za700za7za7_2598za7, "cond", 4);
	      DEFINE_STRING(BGl_string2541z00zz__ppz00,
		BgL_bgl_string2541za700za7za7_2599za7, "case", 4);
	      DEFINE_STRING(BGl_string2543z00zz__ppz00,
		BgL_bgl_string2543za700za7za7_2600za7, "and", 3);
	      DEFINE_STRING(BGl_string2545z00zz__ppz00,
		BgL_bgl_string2545za700za7za7_2601za7, "or", 2);
	      DEFINE_STRING(BGl_string2547z00zz__ppz00,
		BgL_bgl_string2547za700za7za7_2602za7, "let", 3);
	      DEFINE_STRING(BGl_string2549z00zz__ppz00,
		BgL_bgl_string2549za700za7za7_2603za7, "begin", 5);
	      DEFINE_STRING(BGl_string2551z00zz__ppz00,
		BgL_bgl_string2551za700za7za7_2604za7, "do", 2);
	      DEFINE_STRING(BGl_string2552z00zz__ppz00,
		BgL_bgl_string2552za700za7za7_2605za7, "__pp", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ppzd2envzd2zz__ppz00,
		BgL_bgl__ppza700za7za7__ppza7002606z00, va_generic_entry,
		BGl__ppz00zz__ppz00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long
		BgL_checksumz00_3500, char *BgL_fromz00_3501)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ppz00))
				{
					BGl_requirezd2initializa7ationz75zz__ppz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__ppz00();
					BGl_importedzd2moduleszd2initz00zz__ppz00();
					BGl_toplevelzd2initzd2zz__ppz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ppz00()
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 14 */
			BGl_symbol2475z00zz__ppz00 =
				bstring_to_symbol(BGl_string2476z00zz__ppz00);
			BGl_symbol2488z00zz__ppz00 =
				bstring_to_symbol(BGl_string2489z00zz__ppz00);
			BGl_symbol2494z00zz__ppz00 =
				bstring_to_symbol(BGl_string2495z00zz__ppz00);
			BGl_symbol2501z00zz__ppz00 =
				bstring_to_symbol(BGl_string2502z00zz__ppz00);
			BGl_symbol2503z00zz__ppz00 =
				bstring_to_symbol(BGl_string2504z00zz__ppz00);
			BGl_symbol2505z00zz__ppz00 =
				bstring_to_symbol(BGl_string2506z00zz__ppz00);
			BGl_symbol2507z00zz__ppz00 =
				bstring_to_symbol(BGl_string2508z00zz__ppz00);
			BGl_symbol2516z00zz__ppz00 =
				bstring_to_symbol(BGl_string2517z00zz__ppz00);
			BGl_symbol2518z00zz__ppz00 =
				bstring_to_symbol(BGl_string2519z00zz__ppz00);
			BGl_symbol2520z00zz__ppz00 =
				bstring_to_symbol(BGl_string2521z00zz__ppz00);
			BGl_symbol2522z00zz__ppz00 =
				bstring_to_symbol(BGl_string2523z00zz__ppz00);
			BGl_symbol2524z00zz__ppz00 =
				bstring_to_symbol(BGl_string2525z00zz__ppz00);
			BGl_symbol2526z00zz__ppz00 =
				bstring_to_symbol(BGl_string2527z00zz__ppz00);
			BGl_symbol2528z00zz__ppz00 =
				bstring_to_symbol(BGl_string2529z00zz__ppz00);
			BGl_symbol2530z00zz__ppz00 =
				bstring_to_symbol(BGl_string2531z00zz__ppz00);
			BGl_symbol2532z00zz__ppz00 =
				bstring_to_symbol(BGl_string2533z00zz__ppz00);
			BGl_symbol2534z00zz__ppz00 =
				bstring_to_symbol(BGl_string2535z00zz__ppz00);
			BGl_symbol2536z00zz__ppz00 =
				bstring_to_symbol(BGl_string2537z00zz__ppz00);
			BGl_symbol2538z00zz__ppz00 =
				bstring_to_symbol(BGl_string2539z00zz__ppz00);
			BGl_symbol2540z00zz__ppz00 =
				bstring_to_symbol(BGl_string2541z00zz__ppz00);
			BGl_symbol2542z00zz__ppz00 =
				bstring_to_symbol(BGl_string2543z00zz__ppz00);
			BGl_symbol2544z00zz__ppz00 =
				bstring_to_symbol(BGl_string2545z00zz__ppz00);
			BGl_symbol2546z00zz__ppz00 =
				bstring_to_symbol(BGl_string2547z00zz__ppz00);
			BGl_symbol2548z00zz__ppz00 =
				bstring_to_symbol(BGl_string2549z00zz__ppz00);
			return (BGl_symbol2550z00zz__ppz00 =
				bstring_to_symbol(BGl_string2551z00zz__ppz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__ppz00()
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 14 */
			BGl_za2ppzd2caseza2zd2zz__ppz00 = BGl_symbol2475z00zz__ppz00;
			return (BGl_za2ppzd2widthza2zd2zz__ppz00 = BINT(((long) 80)), BUNSPEC);
		}
	}



/* pp */
	BGL_EXPORTED_DEF obj_t BGl_ppz00zz__ppz00(obj_t BgL_expz00_1,
		obj_t BgL_portz00_2)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 62 */
			{	/* Pp/pp.scm 63 */
				obj_t BgL_portz00_782;

				if (NULLP(BgL_portz00_2))
					{	/* Pp/pp.scm 64 */
						obj_t BgL_res2457z00_1840;

						{	/* Pp/pp.scm 64 */
							obj_t BgL_auxz00_3536;

							BgL_auxz00_3536 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2457z00_1840 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3536);
						}
						BgL_portz00_782 = BgL_res2457z00_1840;
					}
				else
					{	/* Pp/pp.scm 65 */
						obj_t BgL_portz00_788;

						BgL_portz00_788 = CAR(BgL_portz00_2);
						if (OUTPUT_PORTP(BgL_portz00_788))
							{	/* Pp/pp.scm 66 */
								BgL_portz00_782 = BgL_portz00_788;
							}
						else
							{	/* Pp/pp.scm 66 */
								BgL_portz00_782 =
									BGl_errorz00zz__errorz00(BGl_string2477z00zz__ppz00,
									BGl_string2478z00zz__ppz00, BgL_portz00_788);
							}
					}
				{	/* Pp/pp.scm 69 */
					obj_t BgL_zc3anonymousza31913ze3z83_3071;

					BgL_zc3anonymousza31913ze3z83_3071 =
						make_fx_procedure(BGl_zc3anonymousza31913ze3z83zz__ppz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza31913ze3z83_3071,
						(int) (((long) 0)), BgL_portz00_782);
					BGl_genericzd2writezd2zz__ppz00(BgL_expz00_1, BFALSE,
						BGl_za2ppzd2widthza2zd2zz__ppz00,
						BgL_zc3anonymousza31913ze3z83_3071);
				}
				return BUNSPEC;
			}
		}
	}



/* _pp */
	obj_t BGl__ppz00zz__ppz00(obj_t BgL_envz00_3072, obj_t BgL_expz00_3073,
		obj_t BgL_portz00_3074)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 62 */
			return BGl_ppz00zz__ppz00(BgL_expz00_3073, BgL_portz00_3074);
		}
	}



/* <anonymous:1913> */
	obj_t BGl_zc3anonymousza31913ze3z83zz__ppz00(obj_t BgL_envz00_3075,
		obj_t BgL_sz00_3077)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 69 */
			{	/* Pp/pp.scm 69 */
				obj_t BgL_portz00_3076;

				BgL_portz00_3076 = PROCEDURE_REF(BgL_envz00_3075, (int) (((long) 0)));
				{
					obj_t BgL_sz00_784;

					{	/* Pp/pp.scm 69 */
						bool_t BgL_auxz00_3552;

						BgL_sz00_784 = BgL_sz00_3077;
						bgl_display_obj(BgL_sz00_784, BgL_portz00_3076);
						BgL_auxz00_3552 = ((bool_t) 1);
						return BBOOL(BgL_auxz00_3552);
					}
				}
			}
		}
	}



/* vector-prefix */
	obj_t BGl_vectorzd2prefixzd2zz__ppz00(obj_t BgL_objz00_3)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 73 */
			{	/* Pp/pp.scm 74 */
				int BgL_tagz00_790;

				BgL_tagz00_790 = VECTOR_TAG(BgL_objz00_3);
				if (((long) (BgL_tagz00_790) == ((long) 0)))
					{	/* Pp/pp.scm 75 */
						return BGl_string2479z00zz__ppz00;
					}
				else
					{	/* Pp/pp.scm 75 */
						if (((long) (BgL_tagz00_790) >= ((long) 100)))
							{	/* Pp/pp.scm 78 */
								char *BgL_arg1919z00_794;

								{	/* Ieee/number.scm 133 */

									BgL_arg1919z00_794 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
										(BgL_tagz00_790), BINT(((long) 10)));
								}
								return
									string_append(BGl_string2479z00zz__ppz00,
									string_to_bstring(BgL_arg1919z00_794));
							}
						else
							{	/* Pp/pp.scm 77 */
								if (((long) (BgL_tagz00_790) >= ((long) 10)))
									{	/* Pp/pp.scm 80 */
										char *BgL_arg1922z00_799;

										{	/* Ieee/number.scm 133 */

											BgL_arg1922z00_799 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
												(BgL_tagz00_790), BINT(((long) 10)));
										}
										return
											string_append(BGl_string2480z00zz__ppz00,
											string_to_bstring(BgL_arg1922z00_799));
									}
								else
									{	/* Pp/pp.scm 81 */
										char *BgL_arg1924z00_803;

										{	/* Ieee/number.scm 133 */

											BgL_arg1924z00_803 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
												(BgL_tagz00_790), BINT(((long) 10)));
										}
										return
											string_append(BGl_string2481z00zz__ppz00,
											string_to_bstring(BgL_arg1924z00_803));
									}
							}
					}
			}
		}
	}



/* generic-write */
	obj_t BGl_genericzd2writezd2zz__ppz00(obj_t BgL_objz00_4,
		obj_t BgL_displayzf3zf3_5, obj_t BgL_widthz00_6, obj_t BgL_outputz00_7)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 109 */
			{
				obj_t BgL_objz00_989;

				long BgL_colz00_990;

				if (CBOOL(BgL_widthz00_6))
					{	/* Pp/pp.scm 441 */
						obj_t BgL_arg1925z00_812;

						obj_t BgL_arg1926z00_813;

						{	/* Pp/pp.scm 441 */
							obj_t BgL_list1927z00_814;

							BgL_list1927z00_814 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							{	/* Pp/pp.scm 441 */
								obj_t BgL_res2458z00_1856;

								{	/* Pp/pp.scm 441 */
									obj_t BgL_arg2368z00_1853;

									BgL_arg2368z00_1853 = CAR(BgL_list1927z00_814);
									BgL_res2458z00_1856 =
										make_string(((long) 1), CCHAR(BgL_arg2368z00_1853));
								}
								BgL_arg1925z00_812 = BgL_res2458z00_1856;
						}}
						BgL_objz00_989 = BgL_objz00_4;
						BgL_colz00_990 = ((long) 0);
						{	/* Pp/pp.scm 228 */
							obj_t BgL_ppzd2dozd2_3088;

							obj_t BgL_ppzd2beginzd2_3089;

							obj_t BgL_ppzd2andzd2_3091;

							obj_t BgL_ppzd2casezd2_3092;

							obj_t BgL_ppzd2condzd2_3093;

							obj_t BgL_ppzd2ifzd2_3094;

							obj_t BgL_ppzd2commentzd2_3085;

							obj_t BgL_ppzd2lambdazd2_3098;

							obj_t BgL_ppzd2letzd2_3090;

							obj_t BgL_ppzd2defunzd2_3096;

							obj_t BgL_ppzd2definezd2_3097;

							obj_t BgL_ppzd2exprzd2defunz00_3095;

							obj_t BgL_ppzd2exprzd2listz00_3087;

							obj_t BgL_ppzd2exprzd2_3086;

							BgL_ppzd2dozd2_3088 =
								make_fx_procedure(BGl_ppzd2dozd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2beginzd2_3089 =
								make_fx_procedure(BGl_ppzd2beginzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2andzd2_3091 =
								make_fx_procedure(BGl_ppzd2andzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2casezd2_3092 =
								make_fx_procedure(BGl_ppzd2casezd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2condzd2_3093 =
								make_fx_procedure(BGl_ppzd2condzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2ifzd2_3094 =
								make_fx_procedure(BGl_ppzd2ifzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2commentzd2_3085 =
								make_fx_procedure(BGl_ppzd2commentzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2lambdazd2_3098 =
								make_fx_procedure(BGl_ppzd2lambdazd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2letzd2_3090 =
								make_fx_procedure(BGl_ppzd2letzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2defunzd2_3096 =
								make_fx_procedure(BGl_ppzd2defunzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2definezd2_3097 =
								make_fx_procedure(BGl_ppzd2definezd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2defunz00_3095 =
								make_fx_procedure(BGl_ppzd2exprzd2defunz00zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2listz00_3087 =
								make_fx_procedure(BGl_ppzd2exprzd2listz00zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2_3086 =
								make_fx_procedure(BGl_ppzd2exprzd2zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 6)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 7)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 8)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 9)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 10)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 13)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 16)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 17)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2dozd2_3088,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 7)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 14)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3089,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 7)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 9)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 14)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2andzd2_3091,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 10)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 13)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 16)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2casezd2_3092,
								(int) (((long) 18)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 13)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 16)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2condzd2_3093,
								(int) (((long) 18)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 7)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 9)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 10)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 11)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 12)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 14)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3094,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 1)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 2)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 3)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 4)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 5)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 6)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 7)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 8)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 9)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 10)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 13)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 15)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 16)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3085,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 7)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 9)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 10)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 11)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 12)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 13)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 14)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 15)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3098,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 8)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 9)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 10)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 13)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 16)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 17)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2letzd2_3090,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 1)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 2)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 3)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 4)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 13)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 16)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3096,
								(int) (((long) 18)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 16)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2definezd2_3097,
								(int) (((long) 18)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 1)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 2)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 3)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 4)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 14)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3095,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 6)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 8)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 9)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 10)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 11)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 14)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 17)), BgL_outputz00_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3087,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3086);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3095);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 1)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 2)), BgL_widthz00_6);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 4)), BgL_displayzf3zf3_5);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3087);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3085);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 7)), BgL_ppzd2dozd2_3088);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3089);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 9)), BgL_ppzd2letzd2_3090);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 10)), BgL_ppzd2andzd2_3091);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 11)), BgL_ppzd2casezd2_3092);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 12)), BgL_ppzd2condzd2_3093);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 13)), BgL_ppzd2ifzd2_3094);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 14)), BgL_ppzd2defunzd2_3096);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 15)), BgL_ppzd2definezd2_3097);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 16)), BgL_ppzd2lambdazd2_3098);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 17)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2exprzd2_3086,
								(int) (((long) 18)), BgL_outputz00_7);
							BgL_arg1926z00_813 =
								BGl_prz00zz__ppz00(BgL_ppzd2exprzd2_3086, BgL_outputz00_7,
								BgL_displayzf3zf3_5, BINT(((long) 50)), BgL_widthz00_6,
								BINT(((long) 5)), BgL_ppzd2lambdazd2_3098,
								BgL_ppzd2definezd2_3097, BgL_ppzd2defunzd2_3096,
								BgL_ppzd2ifzd2_3094, BgL_ppzd2condzd2_3093,
								BgL_ppzd2casezd2_3092, BgL_ppzd2andzd2_3091,
								BgL_ppzd2letzd2_3090, BgL_ppzd2beginzd2_3089,
								BgL_ppzd2dozd2_3088, BgL_ppzd2commentzd2_3085,
								BgL_ppzd2exprzd2listz00_3087, BINT(((long) 2)),
								BgL_ppzd2exprzd2defunz00_3095, BgL_objz00_989,
								BINT(BgL_colz00_990), BINT(((long) 0)), BgL_ppzd2exprzd2_3086);
						}
						if (CBOOL(BgL_arg1926z00_813))
							{	/* Pp/pp.scm 441 */
								obj_t BgL__andtest_1829z00_1860;

								BgL__andtest_1829z00_1860 =
									PROCEDURE_ENTRY(BgL_outputz00_7) (BgL_outputz00_7,
									BgL_arg1925z00_812, BEOA);
								if (CBOOL(BgL__andtest_1829z00_1860))
									{	/* Pp/pp.scm 441 */
										return
											BINT(
											((long) CINT(BgL_arg1926z00_813) +
												STRING_LENGTH(BgL_arg1925z00_812)));
									}
								else
									{	/* Pp/pp.scm 441 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 441 */
								return BFALSE;
							}
					}
				else
					{	/* Pp/pp.scm 440 */
						return
							BGl_wrz00zz__ppz00(BgL_displayzf3zf3_5, BgL_outputz00_7,
							BgL_objz00_4, BINT(((long) 0)));
		}}}
	}



/* pp-down */
	obj_t BGl_ppzd2downzd2zz__ppz00(obj_t BgL_outputz00_3121,
		obj_t BgL_ppzd2exprzd2_3120, obj_t BgL_displayzf3zf3_3119,
		obj_t BgL_maxzd2exprzd2widthz00_3118, obj_t BgL_widthz00_3117,
		obj_t BgL_maxzd2callzd2headzd2widthzd2_3116, obj_t BgL_ppzd2lambdazd2_3115,
		obj_t BgL_ppzd2definezd2_3114, obj_t BgL_ppzd2defunzd2_3113,
		obj_t BgL_ppzd2ifzd2_3112, obj_t BgL_ppzd2condzd2_3111,
		obj_t BgL_ppzd2casezd2_3110, obj_t BgL_ppzd2andzd2_3109,
		obj_t BgL_ppzd2letzd2_3108, obj_t BgL_ppzd2beginzd2_3107,
		obj_t BgL_ppzd2dozd2_3106, obj_t BgL_ppzd2commentzd2_3105,
		obj_t BgL_ppzd2exprzd2listz00_3104, obj_t BgL_indentzd2generalzd2_3103,
		obj_t BgL_ppzd2exprzd2defunz00_3102, obj_t BgL_lz00_1104,
		obj_t BgL_col1z00_1105, obj_t BgL_col2z00_1106, obj_t BgL_extraz00_1107,
		obj_t BgL_ppzd2itemzd2_1108)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 313 */
			{
				obj_t BgL_lz00_1111;

				obj_t BgL_colz00_1112;

				BgL_lz00_1111 = BgL_lz00_1104;
				BgL_colz00_1112 = BgL_col1z00_1105;
			BgL_zc3anonymousza32094ze3z83_1113:
				if (CBOOL(BgL_colz00_1112))
					{	/* Pp/pp.scm 300 */
						if (PAIRP(BgL_lz00_1111))
							{	/* Pp/pp.scm 302 */
								obj_t BgL_restz00_1116;

								BgL_restz00_1116 = CDR(BgL_lz00_1111);
								{	/* Pp/pp.scm 303 */
									long BgL_extraz00_1117;

									if (NULLP(BgL_restz00_1116))
										{	/* Pp/pp.scm 303 */
											BgL_extraz00_1117 =
												((long) CINT(BgL_extraz00_1107) + ((long) 1));
										}
									else
										{	/* Pp/pp.scm 303 */
											BgL_extraz00_1117 = ((long) 0);
										}
									{
										obj_t BgL_colz00_4231;

										obj_t BgL_lz00_4230;

										BgL_lz00_4230 = BgL_restz00_1116;
										BgL_colz00_4231 =
											BGl_prz00zz__ppz00(BgL_ppzd2exprzd2_3120,
											BgL_outputz00_3121, BgL_displayzf3zf3_3119,
											BgL_maxzd2exprzd2widthz00_3118, BgL_widthz00_3117,
											BgL_maxzd2callzd2headzd2widthzd2_3116,
											BgL_ppzd2lambdazd2_3115, BgL_ppzd2definezd2_3114,
											BgL_ppzd2defunzd2_3113, BgL_ppzd2ifzd2_3112,
											BgL_ppzd2condzd2_3111, BgL_ppzd2casezd2_3110,
											BgL_ppzd2andzd2_3109, BgL_ppzd2letzd2_3108,
											BgL_ppzd2beginzd2_3107, BgL_ppzd2dozd2_3106,
											BgL_ppzd2commentzd2_3105, BgL_ppzd2exprzd2listz00_3104,
											BgL_indentzd2generalzd2_3103,
											BgL_ppzd2exprzd2defunz00_3102, CAR(BgL_lz00_1111),
											BGl_indentz00zz__ppz00(BgL_outputz00_3121,
												BgL_col2z00_1106, BgL_colz00_1112),
											BINT(BgL_extraz00_1117), BgL_ppzd2itemzd2_1108);
										BgL_colz00_1112 = BgL_colz00_4231;
										BgL_lz00_1111 = BgL_lz00_4230;
										goto BgL_zc3anonymousza32094ze3z83_1113;
									}
								}
							}
						else
							{	/* Pp/pp.scm 301 */
								if (NULLP(BgL_lz00_1111))
									{	/* Pp/pp.scm 306 */
										if (CBOOL(BgL_colz00_1112))
											{	/* Pp/pp.scm 307 */
												obj_t BgL__andtest_1829z00_2458;

												BgL__andtest_1829z00_2458 =
													PROCEDURE_ENTRY(BgL_outputz00_3121)
													(BgL_outputz00_3121, BGl_string2482z00zz__ppz00,
													BEOA);
												if (CBOOL(BgL__andtest_1829z00_2458))
													{	/* Pp/pp.scm 307 */
														return
															BINT(((long) CINT(BgL_colz00_1112) + ((long) 1)));
													}
												else
													{	/* Pp/pp.scm 307 */
														return BFALSE;
													}
											}
										else
											{	/* Pp/pp.scm 307 */
												return BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 309 */
										obj_t BgL_arg2102z00_1124;

										{	/* Pp/pp.scm 311 */
											obj_t BgL_arg2103z00_1125;

											long BgL_arg2104z00_1126;

											{	/* Pp/pp.scm 311 */
												obj_t BgL_arg2105z00_1127;

												{	/* Pp/pp.scm 311 */
													obj_t BgL_arg2107z00_1129;

													BgL_arg2107z00_1129 =
														BGl_indentz00zz__ppz00(BgL_outputz00_3121,
														BgL_col2z00_1106, BgL_colz00_1112);
													if (CBOOL(BgL_arg2107z00_1129))
														{	/* Pp/pp.scm 311 */
															obj_t BgL__andtest_1829z00_2466;

															BgL__andtest_1829z00_2466 =
																PROCEDURE_ENTRY(BgL_outputz00_3121)
																(BgL_outputz00_3121, BGl_string2483z00zz__ppz00,
																BEOA);
															if (CBOOL(BgL__andtest_1829z00_2466))
																{	/* Pp/pp.scm 311 */
																	BgL_arg2105z00_1127 =
																		BINT(
																		((long) CINT(BgL_arg2107z00_1129) +
																			((long) 1)));
																}
															else
																{	/* Pp/pp.scm 311 */
																	BgL_arg2105z00_1127 = BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 311 */
															BgL_arg2105z00_1127 = BFALSE;
														}
												}
												BgL_arg2103z00_1125 =
													BGl_indentz00zz__ppz00(BgL_outputz00_3121,
													BgL_col2z00_1106, BgL_arg2105z00_1127);
											}
											BgL_arg2104z00_1126 =
												((long) CINT(BgL_extraz00_1107) + ((long) 1));
											BgL_arg2102z00_1124 =
												BGl_prz00zz__ppz00(BgL_ppzd2exprzd2_3120,
												BgL_outputz00_3121, BgL_displayzf3zf3_3119,
												BgL_maxzd2exprzd2widthz00_3118, BgL_widthz00_3117,
												BgL_maxzd2callzd2headzd2widthzd2_3116,
												BgL_ppzd2lambdazd2_3115, BgL_ppzd2definezd2_3114,
												BgL_ppzd2defunzd2_3113, BgL_ppzd2ifzd2_3112,
												BgL_ppzd2condzd2_3111, BgL_ppzd2casezd2_3110,
												BgL_ppzd2andzd2_3109, BgL_ppzd2letzd2_3108,
												BgL_ppzd2beginzd2_3107, BgL_ppzd2dozd2_3106,
												BgL_ppzd2commentzd2_3105, BgL_ppzd2exprzd2listz00_3104,
												BgL_indentzd2generalzd2_3103,
												BgL_ppzd2exprzd2defunz00_3102, BgL_lz00_1111,
												BgL_arg2103z00_1125, BINT(BgL_arg2104z00_1126),
												BgL_ppzd2itemzd2_1108);
										}
										if (CBOOL(BgL_arg2102z00_1124))
											{	/* Pp/pp.scm 309 */
												obj_t BgL__andtest_1829z00_2476;

												BgL__andtest_1829z00_2476 =
													PROCEDURE_ENTRY(BgL_outputz00_3121)
													(BgL_outputz00_3121, BGl_string2482z00zz__ppz00,
													BEOA);
												if (CBOOL(BgL__andtest_1829z00_2476))
													{	/* Pp/pp.scm 309 */
														return
															BINT(
															((long) CINT(BgL_arg2102z00_1124) + ((long) 1)));
													}
												else
													{	/* Pp/pp.scm 309 */
														return BFALSE;
													}
											}
										else
											{	/* Pp/pp.scm 309 */
												return BFALSE;
											}
									}
							}
					}
				else
					{	/* Pp/pp.scm 300 */
						return BFALSE;
					}
			}
		}
	}



/* wr */
	obj_t BGl_wrz00zz__ppz00(obj_t BgL_displayzf3zf3_3123,
		obj_t BgL_outputz00_3122, obj_t BgL_objz00_847, obj_t BgL_colz00_848)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 137 */
		BGl_wrz00zz__ppz00:
			{
				obj_t BgL_lz00_964;

				obj_t BgL_colz00_965;

				{	/* Pp/pp.scm 148 */
					bool_t BgL_testz00_4271;

					if (PAIRP(BgL_objz00_847))
						{	/* Pp/pp.scm 148 */
							obj_t BgL_cdrzd21393zd2_944;

							BgL_cdrzd21393zd2_944 = CDR(BgL_objz00_847);
							if ((CAR(BgL_objz00_847) == BGl_symbol2488z00zz__ppz00))
								{	/* Pp/pp.scm 148 */
									if (PAIRP(BgL_cdrzd21393zd2_944))
										{	/* Pp/pp.scm 148 */
											obj_t BgL_cdrzd21395zd2_947;

											BgL_cdrzd21395zd2_947 = CDR(BgL_cdrzd21393zd2_944);
											if (INTEGERP(CAR(BgL_cdrzd21393zd2_944)))
												{	/* Pp/pp.scm 148 */
													if (PAIRP(BgL_cdrzd21395zd2_947))
														{	/* Pp/pp.scm 148 */
															bool_t BgL_testz00_4286;

															{	/* Pp/pp.scm 148 */
																obj_t BgL_auxz00_4287;

																BgL_auxz00_4287 = CAR(BgL_cdrzd21395zd2_947);
																BgL_testz00_4286 = STRINGP(BgL_auxz00_4287);
															}
															if (BgL_testz00_4286)
																{	/* Pp/pp.scm 148 */
																	if (NULLP(CDR(BgL_cdrzd21395zd2_947)))
																		{	/* Pp/pp.scm 148 */
																			BgL_testz00_4271 = ((bool_t) 1);
																		}
																	else
																		{	/* Pp/pp.scm 148 */
																			BgL_testz00_4271 = ((bool_t) 0);
																		}
																}
															else
																{	/* Pp/pp.scm 148 */
																	BgL_testz00_4271 = ((bool_t) 0);
																}
														}
													else
														{	/* Pp/pp.scm 148 */
															BgL_testz00_4271 = ((bool_t) 0);
														}
												}
											else
												{	/* Pp/pp.scm 148 */
													BgL_testz00_4271 = ((bool_t) 0);
												}
										}
									else
										{	/* Pp/pp.scm 148 */
											BgL_testz00_4271 = ((bool_t) 0);
										}
								}
							else
								{	/* Pp/pp.scm 148 */
									BgL_testz00_4271 = ((bool_t) 0);
								}
						}
					else
						{	/* Pp/pp.scm 148 */
							BgL_testz00_4271 = ((bool_t) 0);
						}
					if (BgL_testz00_4271)
						{	/* Pp/pp.scm 153 */
							obj_t BgL_addz00_853;

							{	/* Pp/pp.scm 153 */
								obj_t BgL_arg1950z00_860;

								{	/* Pp/pp.scm 153 */
									long BgL_arg1951z00_861;

									BgL_arg1951z00_861 =
										STRING_LENGTH(CAR(CDR(CDR(BgL_objz00_847))));
									{	/* Pp/pp.scm 153 */
										obj_t BgL_list1953z00_863;

										{	/* Pp/pp.scm 153 */
											obj_t BgL_arg1954z00_864;

											BgL_arg1954z00_864 = MAKE_PAIR(BINT(((long) 3)), BNIL);
											BgL_list1953z00_863 =
												MAKE_PAIR(BINT(BgL_arg1951z00_861), BgL_arg1954z00_864);
										}
										BgL_arg1950z00_860 =
											BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_list1953z00_863);
								}}
								BgL_addz00_853 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00
									(BGl_za2ppzd2widthza2zd2zz__ppz00, BgL_arg1950z00_860);
							}
							if (((long) CINT(BgL_addz00_853) <= ((long) 0)))
								{	/* Pp/pp.scm 155 */
									obj_t BgL_arg1944z00_855;

									BgL_arg1944z00_855 = CAR(CDR(CDR(BgL_objz00_847)));
									if (CBOOL(BgL_colz00_848))
										{	/* Pp/pp.scm 155 */
											obj_t BgL__andtest_1829z00_1928;

											BgL__andtest_1829z00_1928 =
												PROCEDURE_ENTRY(BgL_outputz00_3122) (BgL_outputz00_3122,
												BgL_arg1944z00_855, BEOA);
											if (CBOOL(BgL__andtest_1829z00_1928))
												{	/* Pp/pp.scm 155 */
													return
														BINT(
														((long) CINT(BgL_colz00_848) +
															STRING_LENGTH(BgL_arg1944z00_855)));
												}
											else
												{	/* Pp/pp.scm 155 */
													return BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 155 */
											return BFALSE;
										}
								}
							else
								{	/* Pp/pp.scm 156 */
									obj_t BgL_arg1945z00_856;

									{	/* Pp/pp.scm 156 */
										obj_t BgL_arg1946z00_857;

										obj_t BgL_arg1948z00_858;

										BgL_arg1946z00_857 = CAR(CDR(CDR(BgL_objz00_847)));
										{	/* Pp/pp.scm 156 */
											obj_t BgL_list1949z00_859;

											BgL_list1949z00_859 =
												MAKE_PAIR(BCHAR(((unsigned char) ' ')), BNIL);
											{	/* Pp/pp.scm 156 */
												obj_t BgL_res2459z00_1945;

												{	/* Pp/pp.scm 156 */
													long BgL_kz00_1939;

													BgL_kz00_1939 = (long) CINT(BgL_addz00_853);
													{	/* Pp/pp.scm 156 */
														obj_t BgL_arg2368z00_1942;

														BgL_arg2368z00_1942 = CAR(BgL_list1949z00_859);
														BgL_res2459z00_1945 =
															make_string(BgL_kz00_1939,
															CCHAR(BgL_arg2368z00_1942));
												}}
												BgL_arg1948z00_858 = BgL_res2459z00_1945;
										}}
										BgL_arg1945z00_856 =
											string_append(BgL_arg1946z00_857, BgL_arg1948z00_858);
									}
									if (CBOOL(BgL_colz00_848))
										{	/* Pp/pp.scm 156 */
											obj_t BgL__andtest_1829z00_1949;

											BgL__andtest_1829z00_1949 =
												PROCEDURE_ENTRY(BgL_outputz00_3122) (BgL_outputz00_3122,
												BgL_arg1945z00_856, BEOA);
											if (CBOOL(BgL__andtest_1829z00_1949))
												{	/* Pp/pp.scm 156 */
													return
														BINT(
														((long) CINT(BgL_colz00_848) +
															STRING_LENGTH(BgL_arg1945z00_856)));
												}
											else
												{	/* Pp/pp.scm 156 */
													return BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 156 */
											return BFALSE;
										}
								}
						}
					else
						{	/* Pp/pp.scm 148 */
							if (PAIRP(BgL_objz00_847))
								{	/* Pp/pp.scm 159 */
									obj_t BgL_exprz00_1955;

									BgL_exprz00_1955 = BgL_objz00_847;
									if (BGl_readzd2macrozf3z21zz__ppz00(BgL_exprz00_1955))
										{
											obj_t BgL_colz00_4346;

											obj_t BgL_objz00_4343;

											BgL_objz00_4343 = CAR(CDR(BgL_exprz00_1955));
											BgL_colz00_4346 =
												BGl_outz00zz__ppz00(BgL_outputz00_3122,
												BGl_readzd2macrozd2prefixz00zz__ppz00(BgL_exprz00_1955),
												BgL_colz00_848);
											BgL_colz00_848 = BgL_colz00_4346;
											BgL_objz00_847 = BgL_objz00_4343;
											goto BGl_wrz00zz__ppz00;
										}
									else
										{	/* Pp/pp.scm 159 */
											BgL_lz00_964 = BgL_exprz00_1955;
											BgL_colz00_965 = BgL_colz00_848;
										BgL_zc3anonymousza32025ze3z83_966:
											if (PAIRP(BgL_lz00_964))
												{	/* Pp/pp.scm 141 */
													obj_t BgL_g1830z00_968;

													obj_t BgL_g1831z00_969;

													BgL_g1830z00_968 = CDR(BgL_lz00_964);
													{	/* Pp/pp.scm 141 */
														obj_t BgL_arg2039z00_985;

														obj_t BgL_arg2040z00_986;

														BgL_arg2039z00_985 = CAR(BgL_lz00_964);
														if (CBOOL(BgL_colz00_965))
															{	/* Pp/pp.scm 141 */
																obj_t BgL__andtest_1829z00_2229;

																BgL__andtest_1829z00_2229 =
																	PROCEDURE_ENTRY(BgL_outputz00_3122)
																	(BgL_outputz00_3122,
																	BGl_string2484z00zz__ppz00, BEOA);
																if (CBOOL(BgL__andtest_1829z00_2229))
																	{	/* Pp/pp.scm 141 */
																		BgL_arg2040z00_986 =
																			BINT(
																			((long) CINT(BgL_colz00_965) +
																				((long) 1)));
																	}
																else
																	{	/* Pp/pp.scm 141 */
																		BgL_arg2040z00_986 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 141 */
																BgL_arg2040z00_986 = BFALSE;
															}
														BgL_g1831z00_969 =
															BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3123,
															BgL_outputz00_3122, BgL_arg2039z00_985,
															BgL_arg2040z00_986);
													}
													{
														obj_t BgL_lz00_971;

														obj_t BgL_colz00_972;

														BgL_lz00_971 = BgL_g1830z00_968;
														BgL_colz00_972 = BgL_g1831z00_969;
													BgL_zc3anonymousza32027ze3z83_973:
														if (CBOOL(BgL_colz00_972))
															{	/* Pp/pp.scm 142 */
																if (PAIRP(BgL_lz00_971))
																	{	/* Pp/pp.scm 143 */
																		obj_t BgL_arg2029z00_976;

																		obj_t BgL_arg2030z00_977;

																		BgL_arg2029z00_976 = CDR(BgL_lz00_971);
																		{	/* Pp/pp.scm 143 */
																			obj_t BgL_arg2031z00_978;

																			obj_t BgL_arg2033z00_979;

																			BgL_arg2031z00_978 = CAR(BgL_lz00_971);
																			if (CBOOL(BgL_colz00_972))
																				{	/* Pp/pp.scm 143 */
																					obj_t BgL__andtest_1829z00_2240;

																					BgL__andtest_1829z00_2240 =
																						PROCEDURE_ENTRY(BgL_outputz00_3122)
																						(BgL_outputz00_3122,
																						BGl_string2485z00zz__ppz00, BEOA);
																					if (CBOOL(BgL__andtest_1829z00_2240))
																						{	/* Pp/pp.scm 143 */
																							BgL_arg2033z00_979 =
																								BINT(
																								((long) CINT(BgL_colz00_972) +
																									((long) 1)));
																						}
																					else
																						{	/* Pp/pp.scm 143 */
																							BgL_arg2033z00_979 = BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 143 */
																					BgL_arg2033z00_979 = BFALSE;
																				}
																			BgL_arg2030z00_977 =
																				BGl_wrz00zz__ppz00
																				(BgL_displayzf3zf3_3123,
																				BgL_outputz00_3122, BgL_arg2031z00_978,
																				BgL_arg2033z00_979);
																		}
																		{
																			obj_t BgL_colz00_4380;

																			obj_t BgL_lz00_4379;

																			BgL_lz00_4379 = BgL_arg2029z00_976;
																			BgL_colz00_4380 = BgL_arg2030z00_977;
																			BgL_colz00_972 = BgL_colz00_4380;
																			BgL_lz00_971 = BgL_lz00_4379;
																			goto BgL_zc3anonymousza32027ze3z83_973;
																		}
																	}
																else
																	{	/* Pp/pp.scm 143 */
																		if (NULLP(BgL_lz00_971))
																			{	/* Pp/pp.scm 144 */
																				if (CBOOL(BgL_colz00_972))
																					{	/* Pp/pp.scm 144 */
																						obj_t BgL__andtest_1829z00_2249;

																						BgL__andtest_1829z00_2249 =
																							PROCEDURE_ENTRY
																							(BgL_outputz00_3122)
																							(BgL_outputz00_3122,
																							BGl_string2482z00zz__ppz00, BEOA);
																						if (CBOOL
																							(BgL__andtest_1829z00_2249))
																							{	/* Pp/pp.scm 144 */
																								return
																									BINT(
																									((long) CINT(BgL_colz00_972) +
																										((long) 1)));
																							}
																						else
																							{	/* Pp/pp.scm 144 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 144 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Pp/pp.scm 145 */
																				obj_t BgL_arg2037z00_982;

																				{	/* Pp/pp.scm 145 */
																					obj_t BgL_arg2038z00_983;

																					if (CBOOL(BgL_colz00_972))
																						{	/* Pp/pp.scm 145 */
																							obj_t BgL__andtest_1829z00_2257;

																							BgL__andtest_1829z00_2257 =
																								PROCEDURE_ENTRY
																								(BgL_outputz00_3122)
																								(BgL_outputz00_3122,
																								BGl_string2486z00zz__ppz00,
																								BEOA);
																							if (CBOOL
																								(BgL__andtest_1829z00_2257))
																								{	/* Pp/pp.scm 145 */
																									BgL_arg2038z00_983 =
																										BINT(
																										((long) CINT(BgL_colz00_972)
																											+ ((long) 3)));
																								}
																							else
																								{	/* Pp/pp.scm 145 */
																									BgL_arg2038z00_983 = BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 145 */
																							BgL_arg2038z00_983 = BFALSE;
																						}
																					BgL_arg2037z00_982 =
																						BGl_wrz00zz__ppz00
																						(BgL_displayzf3zf3_3123,
																						BgL_outputz00_3122, BgL_lz00_971,
																						BgL_arg2038z00_983);
																				}
																				if (CBOOL(BgL_arg2037z00_982))
																					{	/* Pp/pp.scm 145 */
																						obj_t BgL__andtest_1829z00_2265;

																						BgL__andtest_1829z00_2265 =
																							PROCEDURE_ENTRY
																							(BgL_outputz00_3122)
																							(BgL_outputz00_3122,
																							BGl_string2482z00zz__ppz00, BEOA);
																						if (CBOOL
																							(BgL__andtest_1829z00_2265))
																							{	/* Pp/pp.scm 145 */
																								return
																									BINT(
																									((long)
																										CINT(BgL_arg2037z00_982) +
																										((long) 1)));
																							}
																						else
																							{	/* Pp/pp.scm 145 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 145 */
																						return BFALSE;
																					}
																			}
																	}
															}
														else
															{	/* Pp/pp.scm 142 */
																return BFALSE;
															}
													}
												}
											else
												{	/* Pp/pp.scm 140 */
													if (CBOOL(BgL_colz00_965))
														{	/* Pp/pp.scm 146 */
															obj_t BgL__andtest_1829z00_2273;

															BgL__andtest_1829z00_2273 =
																PROCEDURE_ENTRY(BgL_outputz00_3122)
																(BgL_outputz00_3122, BGl_string2487z00zz__ppz00,
																BEOA);
															if (CBOOL(BgL__andtest_1829z00_2273))
																{	/* Pp/pp.scm 146 */
																	return
																		BINT(
																		((long) CINT(BgL_colz00_965) + ((long) 2)));
																}
															else
																{	/* Pp/pp.scm 146 */
																	return BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 146 */
															return BFALSE;
														}
												}
										}
								}
							else
								{	/* Pp/pp.scm 158 */
									if (NULLP(BgL_objz00_847))
										{
											obj_t BgL_colz00_4423;

											obj_t BgL_lz00_4422;

											BgL_lz00_4422 = BgL_objz00_847;
											BgL_colz00_4423 = BgL_colz00_848;
											BgL_colz00_965 = BgL_colz00_4423;
											BgL_lz00_964 = BgL_lz00_4422;
											goto BgL_zc3anonymousza32025ze3z83_966;
										}
									else
										{	/* Pp/pp.scm 160 */
											if (VECTORP(BgL_objz00_847))
												{	/* Pp/pp.scm 163 */
													obj_t BgL_arg1959z00_869;

													obj_t BgL_arg1960z00_870;

													BgL_arg1959z00_869 =
														BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
														(BgL_objz00_847);
													{	/* Pp/pp.scm 164 */
														obj_t BgL_arg1961z00_871;

														BgL_arg1961z00_871 =
															BGl_vectorzd2prefixzd2zz__ppz00(BgL_objz00_847);
														if (CBOOL(BgL_colz00_848))
															{	/* Pp/pp.scm 164 */
																obj_t BgL__andtest_1829z00_1971;

																BgL__andtest_1829z00_1971 =
																	PROCEDURE_ENTRY(BgL_outputz00_3122)
																	(BgL_outputz00_3122, BgL_arg1961z00_871,
																	BEOA);
																if (CBOOL(BgL__andtest_1829z00_1971))
																	{	/* Pp/pp.scm 164 */
																		BgL_arg1960z00_870 =
																			BINT(
																			((long) CINT(BgL_colz00_848) +
																				STRING_LENGTH(BgL_arg1961z00_871)));
																	}
																else
																	{	/* Pp/pp.scm 164 */
																		BgL_arg1960z00_870 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 164 */
																BgL_arg1960z00_870 = BFALSE;
															}
													}
													{
														obj_t BgL_colz00_4439;

														obj_t BgL_lz00_4438;

														BgL_lz00_4438 = BgL_arg1959z00_869;
														BgL_colz00_4439 = BgL_arg1960z00_870;
														BgL_colz00_965 = BgL_colz00_4439;
														BgL_lz00_964 = BgL_lz00_4438;
														goto BgL_zc3anonymousza32025ze3z83_966;
													}
												}
											else
												{	/* Pp/pp.scm 162 */
													if (BOOLEANP(BgL_objz00_847))
														{	/* Pp/pp.scm 166 */
															obj_t BgL_arg1963z00_873;

															if (CBOOL(BgL_objz00_847))
																{	/* Pp/pp.scm 166 */
																	BgL_arg1963z00_873 =
																		BGl_string2490z00zz__ppz00;
																}
															else
																{	/* Pp/pp.scm 166 */
																	BgL_arg1963z00_873 =
																		BGl_string2491z00zz__ppz00;
																}
															if (CBOOL(BgL_colz00_848))
																{	/* Pp/pp.scm 166 */
																	obj_t BgL__andtest_1829z00_1980;

																	BgL__andtest_1829z00_1980 =
																		PROCEDURE_ENTRY(BgL_outputz00_3122)
																		(BgL_outputz00_3122, BgL_arg1963z00_873,
																		BEOA);
																	if (CBOOL(BgL__andtest_1829z00_1980))
																		{	/* Pp/pp.scm 166 */
																			return
																				BINT(
																				((long) CINT(BgL_colz00_848) +
																					STRING_LENGTH(BgL_arg1963z00_873)));
																		}
																	else
																		{	/* Pp/pp.scm 166 */
																			return BFALSE;
																		}
																}
															else
																{	/* Pp/pp.scm 166 */
																	return BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 165 */
															if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																(BgL_objz00_847))
																{	/* Pp/pp.scm 167 */
																	if (ELONGP(BgL_objz00_847))
																		{	/* Pp/pp.scm 170 */
																			obj_t BgL_arg1966z00_876;

																			{	/* Pp/pp.scm 170 */
																				char *BgL_arg1968z00_878;

																				{	/* Ieee/number.scm 133 */

																					BgL_arg1968z00_878 =
																						BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																						(BgL_objz00_847, BINT(((long) 10)));
																				}
																				BgL_arg1966z00_876 =
																					string_append
																					(BGl_string2492z00zz__ppz00,
																					string_to_bstring
																					(BgL_arg1968z00_878));
																			}
																			if (CBOOL(BgL_colz00_848))
																				{	/* Pp/pp.scm 170 */
																					obj_t BgL__andtest_1829z00_1989;

																					BgL__andtest_1829z00_1989 =
																						PROCEDURE_ENTRY(BgL_outputz00_3122)
																						(BgL_outputz00_3122,
																						BgL_arg1966z00_876, BEOA);
																					if (CBOOL(BgL__andtest_1829z00_1989))
																						{	/* Pp/pp.scm 170 */
																							return
																								BINT(
																								((long) CINT(BgL_colz00_848) +
																									STRING_LENGTH
																									(BgL_arg1966z00_876)));
																						}
																					else
																						{	/* Pp/pp.scm 170 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 170 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Pp/pp.scm 169 */
																			if (LLONGP(BgL_objz00_847))
																				{	/* Pp/pp.scm 172 */
																					obj_t BgL_arg1970z00_882;

																					{	/* Pp/pp.scm 172 */
																						char *BgL_arg1972z00_884;

																						{	/* Ieee/number.scm 133 */

																							BgL_arg1972z00_884 =
																								BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																								(BgL_objz00_847,
																								BINT(((long) 10)));
																						}
																						BgL_arg1970z00_882 =
																							string_append
																							(BGl_string2493z00zz__ppz00,
																							string_to_bstring
																							(BgL_arg1972z00_884));
																					}
																					if (CBOOL(BgL_colz00_848))
																						{	/* Pp/pp.scm 172 */
																							obj_t BgL__andtest_1829z00_1998;

																							BgL__andtest_1829z00_1998 =
																								PROCEDURE_ENTRY
																								(BgL_outputz00_3122)
																								(BgL_outputz00_3122,
																								BgL_arg1970z00_882, BEOA);
																							if (CBOOL
																								(BgL__andtest_1829z00_1998))
																								{	/* Pp/pp.scm 172 */
																									return
																										BINT(
																										((long) CINT(BgL_colz00_848)
																											+
																											STRING_LENGTH
																											(BgL_arg1970z00_882)));
																								}
																							else
																								{	/* Pp/pp.scm 172 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 172 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 174 */
																					char *BgL_arg1973z00_887;

																					{	/* Ieee/number.scm 133 */

																						BgL_arg1973z00_887 =
																							BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																							(BgL_objz00_847,
																							BINT(((long) 10)));
																					}
																					if (CBOOL(BgL_colz00_848))
																						{	/* Pp/pp.scm 174 */
																							obj_t BgL__andtest_1829z00_2006;

																							BgL__andtest_1829z00_2006 =
																								PROCEDURE_ENTRY
																								(BgL_outputz00_3122)
																								(BgL_outputz00_3122,
																								string_to_bstring
																								(BgL_arg1973z00_887), BEOA);
																							if (CBOOL
																								(BgL__andtest_1829z00_2006))
																								{	/* Pp/pp.scm 174 */
																									return
																										BINT(
																										((long) CINT(BgL_colz00_848)
																											+
																											STRING_LENGTH
																											(string_to_bstring
																												(BgL_arg1973z00_887))));
																								}
																							else
																								{	/* Pp/pp.scm 174 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 174 */
																							return BFALSE;
																						}
																				}
																		}
																}
															else
																{	/* Pp/pp.scm 167 */
																	if (SYMBOLP(BgL_objz00_847))
																		{	/* Pp/pp.scm 176 */
																			obj_t BgL_pz00_891;

																			{	/* Pp/pp.scm 176 */

																				{	/* Ieee/port.scm 386 */

																					BgL_pz00_891 =
																						BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																						(BTRUE);
																				}
																			}
																			if (CBOOL(BgL_displayzf3zf3_3123))
																				{	/* Pp/pp.scm 177 */
																					bgl_display_obj(BgL_objz00_847,
																						BgL_pz00_891);
																				}
																			else
																				{	/* Pp/pp.scm 179 */
																					obj_t BgL_list1975z00_892;

																					BgL_list1975z00_892 =
																						MAKE_PAIR(BgL_pz00_891, BNIL);
																					BGl_writez00zz__r4_output_6_10_3z00
																						(BgL_objz00_847,
																						BgL_list1975z00_892);
																				}
																			{	/* Pp/pp.scm 180 */
																				obj_t BgL_casezd2valuezd2_893;

																				BgL_casezd2valuezd2_893 =
																					BGl_za2ppzd2caseza2zd2zz__ppz00;
																				if ((BgL_casezd2valuezd2_893 ==
																						BGl_symbol2475z00zz__ppz00))
																					{	/* Pp/pp.scm 182 */
																						obj_t BgL_arg1977z00_895;

																						BgL_arg1977z00_895 =
																							bgl_close_output_port
																							(BgL_pz00_891);
																						if (CBOOL(BgL_colz00_848))
																							{	/* Pp/pp.scm 182 */
																								obj_t BgL__andtest_1829z00_2018;

																								BgL__andtest_1829z00_2018 =
																									PROCEDURE_ENTRY
																									(BgL_outputz00_3122)
																									(BgL_outputz00_3122,
																									BgL_arg1977z00_895, BEOA);
																								if (CBOOL
																									(BgL__andtest_1829z00_2018))
																									{	/* Pp/pp.scm 182 */
																										return
																											BINT(
																											((long)
																												CINT(BgL_colz00_848) +
																												STRING_LENGTH
																												(BgL_arg1977z00_895)));
																									}
																								else
																									{	/* Pp/pp.scm 182 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Pp/pp.scm 182 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 180 */
																						if (
																							(BgL_casezd2valuezd2_893 ==
																								BGl_symbol2494z00zz__ppz00))
																							{	/* Pp/pp.scm 184 */
																								obj_t BgL_arg1979z00_897;

																								BgL_arg1979z00_897 =
																									BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																									(bgl_close_output_port
																									(BgL_pz00_891));
																								if (CBOOL(BgL_colz00_848))
																									{	/* Pp/pp.scm 184 */
																										obj_t
																											BgL__andtest_1829z00_2029;
																										BgL__andtest_1829z00_2029 =
																											PROCEDURE_ENTRY
																											(BgL_outputz00_3122)
																											(BgL_outputz00_3122,
																											BgL_arg1979z00_897, BEOA);
																										if (CBOOL
																											(BgL__andtest_1829z00_2029))
																											{	/* Pp/pp.scm 184 */
																												return
																													BINT(
																													((long)
																														CINT(BgL_colz00_848)
																														+
																														STRING_LENGTH
																														(BgL_arg1979z00_897)));
																											}
																										else
																											{	/* Pp/pp.scm 184 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 184 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Pp/pp.scm 187 */
																								obj_t BgL_arg1981z00_899;

																								BgL_arg1981z00_899 =
																									BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
																									(bgl_close_output_port
																									(BgL_pz00_891));
																								if (CBOOL(BgL_colz00_848))
																									{	/* Pp/pp.scm 187 */
																										obj_t
																											BgL__andtest_1829z00_2038;
																										BgL__andtest_1829z00_2038 =
																											PROCEDURE_ENTRY
																											(BgL_outputz00_3122)
																											(BgL_outputz00_3122,
																											BgL_arg1981z00_899, BEOA);
																										if (CBOOL
																											(BgL__andtest_1829z00_2038))
																											{	/* Pp/pp.scm 187 */
																												return
																													BINT(
																													((long)
																														CINT(BgL_colz00_848)
																														+
																														STRING_LENGTH
																														(BgL_arg1981z00_899)));
																											}
																										else
																											{	/* Pp/pp.scm 187 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 187 */
																										return BFALSE;
																									}
																							}
																					}
																			}
																		}
																	else
																		{	/* Pp/pp.scm 175 */
																			if (PROCEDUREP(BgL_objz00_847))
																				{	/* Pp/pp.scm 190 */
																					obj_t BgL_arg1984z00_903;

																					{	/* Pp/pp.scm 190 */
																						obj_t
																							BgL_zc3anonymousza31986ze3z83_3080;
																						BgL_zc3anonymousza31986ze3z83_3080 =
																							make_fx_procedure
																							(BGl_zc3anonymousza31986ze3z83zz__ppz00,
																							(int) (((long) 0)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31986ze3z83_3080,
																							(int) (((long) 0)),
																							BgL_objz00_847);
																						BgL_arg1984z00_903 =
																							BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
																							(BgL_zc3anonymousza31986ze3z83_3080);
																					}
																					if (CBOOL(BgL_colz00_848))
																						{	/* Pp/pp.scm 190 */
																							obj_t BgL__andtest_1829z00_2050;

																							BgL__andtest_1829z00_2050 =
																								PROCEDURE_ENTRY
																								(BgL_outputz00_3122)
																								(BgL_outputz00_3122,
																								BgL_arg1984z00_903, BEOA);
																							if (CBOOL
																								(BgL__andtest_1829z00_2050))
																								{	/* Pp/pp.scm 190 */
																									return
																										BINT(
																										((long) CINT(BgL_colz00_848)
																											+
																											STRING_LENGTH
																											(BgL_arg1984z00_903)));
																								}
																							else
																								{	/* Pp/pp.scm 190 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 190 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 189 */
																					if (STRINGP(BgL_objz00_847))
																						{	/* Pp/pp.scm 192 */
																							obj_t BgL_objz00_909;

																							BgL_objz00_909 =
																								string_for_read(BgL_objz00_847);
																							if (CBOOL(BgL_displayzf3zf3_3123))
																								{	/* Pp/pp.scm 193 */
																									if (CBOOL(BgL_colz00_848))
																										{	/* Pp/pp.scm 194 */
																											obj_t
																												BgL__andtest_1829z00_2060;
																											BgL__andtest_1829z00_2060
																												=
																												PROCEDURE_ENTRY
																												(BgL_outputz00_3122)
																												(BgL_outputz00_3122,
																												BgL_objz00_909, BEOA);
																											if (CBOOL
																												(BgL__andtest_1829z00_2060))
																												{	/* Pp/pp.scm 194 */
																													return
																														BINT(
																														((long)
																															CINT
																															(BgL_colz00_848) +
																															STRING_LENGTH
																															(BgL_objz00_909)));
																												}
																											else
																												{	/* Pp/pp.scm 194 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 194 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Pp/pp.scm 195 */
																									obj_t BgL_g1833z00_910;

																									{	/* Pp/pp.scm 197 */
																										obj_t BgL_arg1996z00_924;

																										if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
																											{	/* Pp/pp.scm 197 */
																												BgL_arg1996z00_924 =
																													BGl_string2496z00zz__ppz00;
																											}
																										else
																											{	/* Pp/pp.scm 197 */
																												BgL_arg1996z00_924 =
																													BGl_string2497z00zz__ppz00;
																											}
																										if (CBOOL(BgL_colz00_848))
																											{	/* Pp/pp.scm 197 */
																												obj_t
																													BgL__andtest_1829z00_2068;
																												BgL__andtest_1829z00_2068
																													=
																													PROCEDURE_ENTRY
																													(BgL_outputz00_3122)
																													(BgL_outputz00_3122,
																													BgL_arg1996z00_924,
																													BEOA);
																												if (CBOOL
																													(BgL__andtest_1829z00_2068))
																													{	/* Pp/pp.scm 197 */
																														BgL_g1833z00_910 =
																															BINT(
																															((long)
																																CINT
																																(BgL_colz00_848)
																																+
																																STRING_LENGTH
																																(BgL_arg1996z00_924)));
																													}
																												else
																													{	/* Pp/pp.scm 197 */
																														BgL_g1833z00_910 =
																															BFALSE;
																													}
																											}
																										else
																											{	/* Pp/pp.scm 197 */
																												BgL_g1833z00_910 =
																													BFALSE;
																											}
																									}
																									{
																										long BgL_jz00_2074;

																										BgL_jz00_2074 = ((long) 0);
																									BgL_loopz00_2073:
																										{	/* Pp/pp.scm 195 */
																											bool_t BgL_testz00_4594;

																											if (CBOOL
																												(BgL_g1833z00_910))
																												{	/* Pp/pp.scm 195 */
																													BgL_testz00_4594 =
																														(BgL_jz00_2074 <
																														STRING_LENGTH
																														(BgL_objz00_909));
																												}
																											else
																												{	/* Pp/pp.scm 195 */
																													BgL_testz00_4594 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_4594)
																												{
																													long BgL_jz00_4599;

																													BgL_jz00_4599 =
																														(BgL_jz00_2074 +
																														((long) 1));
																													BgL_jz00_2074 =
																														BgL_jz00_4599;
																													goto BgL_loopz00_2073;
																												}
																											else
																												{	/* Pp/pp.scm 195 */
																													return
																														BGl_outz00zz__ppz00
																														(BgL_outputz00_3122,
																														BGl_string2497z00zz__ppz00,
																														BGl_outz00zz__ppz00
																														(BgL_outputz00_3122,
																															c_substring
																															(BgL_objz00_909,
																																((long) 0),
																																BgL_jz00_2074),
																															BgL_g1833z00_910));
																						}}}}}
																					else
																						{	/* Pp/pp.scm 191 */
																							if (CHARP(BgL_objz00_847))
																								{	/* Pp/pp.scm 207 */
																									if (CBOOL
																										(BgL_displayzf3zf3_3123))
																										{	/* Pp/pp.scm 209 */
																											obj_t BgL_arg1999z00_927;

																											{	/* Pp/pp.scm 209 */
																												obj_t
																													BgL_list2000z00_928;
																												BgL_list2000z00_928 =
																													MAKE_PAIR
																													(BgL_objz00_847,
																													BNIL);
																												{	/* Pp/pp.scm 209 */
																													obj_t
																														BgL_res2461z00_2152;
																													{	/* Pp/pp.scm 209 */
																														obj_t
																															BgL_arg2368z00_2149;
																														BgL_arg2368z00_2149
																															=
																															CAR
																															(BgL_list2000z00_928);
																														BgL_res2461z00_2152
																															=
																															make_string((
																																(long) 1),
																															CCHAR
																															(BgL_arg2368z00_2149));
																													}
																													BgL_arg1999z00_927 =
																														BgL_res2461z00_2152;
																											}}
																											if (CBOOL(BgL_colz00_848))
																												{	/* Pp/pp.scm 209 */
																													obj_t
																														BgL__andtest_1829z00_2156;
																													BgL__andtest_1829z00_2156
																														=
																														PROCEDURE_ENTRY
																														(BgL_outputz00_3122)
																														(BgL_outputz00_3122,
																														BgL_arg1999z00_927,
																														BEOA);
																													if (CBOOL
																														(BgL__andtest_1829z00_2156))
																														{	/* Pp/pp.scm 209 */
																															return
																																BINT(
																																((long)
																																	CINT
																																	(BgL_colz00_848)
																																	+
																																	STRING_LENGTH
																																	(BgL_arg1999z00_927)));
																														}
																													else
																														{	/* Pp/pp.scm 209 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 209 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 210 */
																											obj_t BgL_pz00_929;

																											{	/* Pp/pp.scm 210 */

																												{	/* Ieee/port.scm 386 */

																													BgL_pz00_929 =
																														BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																														(BTRUE);
																												}
																											}
																											{	/* Pp/pp.scm 211 */
																												obj_t
																													BgL_list2001z00_930;
																												BgL_list2001z00_930 =
																													MAKE_PAIR
																													(BgL_pz00_929, BNIL);
																												BGl_writez00zz__r4_output_6_10_3z00
																													(BgL_objz00_847,
																													BgL_list2001z00_930);
																											}
																											{	/* Pp/pp.scm 212 */
																												obj_t
																													BgL_arg2002z00_931;
																												BgL_arg2002z00_931 =
																													bgl_close_output_port
																													(BgL_pz00_929);
																												if (CBOOL
																													(BgL_colz00_848))
																													{	/* Pp/pp.scm 212 */
																														obj_t
																															BgL__andtest_1829z00_2165;
																														BgL__andtest_1829z00_2165
																															=
																															PROCEDURE_ENTRY
																															(BgL_outputz00_3122)
																															(BgL_outputz00_3122,
																															BgL_arg2002z00_931,
																															BEOA);
																														if (CBOOL
																															(BgL__andtest_1829z00_2165))
																															{	/* Pp/pp.scm 212 */
																																return
																																	BINT(
																																	((long)
																																		CINT
																																		(BgL_colz00_848)
																																		+
																																		STRING_LENGTH
																																		(BgL_arg2002z00_931)));
																															}
																														else
																															{	/* Pp/pp.scm 212 */
																																return BFALSE;
																															}
																													}
																												else
																													{	/* Pp/pp.scm 212 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																							else
																								{	/* Pp/pp.scm 207 */
																									if (INPUT_PORTP
																										(BgL_objz00_847))
																										{	/* Pp/pp.scm 213 */
																											if (CBOOL(BgL_colz00_848))
																												{	/* Pp/pp.scm 214 */
																													obj_t
																														BgL__andtest_1829z00_2174;
																													BgL__andtest_1829z00_2174
																														=
																														PROCEDURE_ENTRY
																														(BgL_outputz00_3122)
																														(BgL_outputz00_3122,
																														BGl_string2498z00zz__ppz00,
																														BEOA);
																													if (CBOOL
																														(BgL__andtest_1829z00_2174))
																														{	/* Pp/pp.scm 214 */
																															return
																																BINT(
																																((long)
																																	CINT
																																	(BgL_colz00_848)
																																	+
																																	((long) 13)));
																														}
																													else
																														{	/* Pp/pp.scm 214 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 214 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 213 */
																											if (OUTPUT_PORTP
																												(BgL_objz00_847))
																												{	/* Pp/pp.scm 215 */
																													if (CBOOL
																														(BgL_colz00_848))
																														{	/* Pp/pp.scm 216 */
																															obj_t
																																BgL__andtest_1829z00_2183;
																															BgL__andtest_1829z00_2183
																																=
																																PROCEDURE_ENTRY
																																(BgL_outputz00_3122)
																																(BgL_outputz00_3122,
																																BGl_string2499z00zz__ppz00,
																																BEOA);
																															if (CBOOL
																																(BgL__andtest_1829z00_2183))
																																{	/* Pp/pp.scm 216 */
																																	return
																																		BINT(
																																		((long)
																																			CINT
																																			(BgL_colz00_848)
																																			+
																																			((long)
																																				14)));
																																}
																															else
																																{	/* Pp/pp.scm 216 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 216 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 215 */
																													if (EOF_OBJECTP
																														(BgL_objz00_847))
																														{	/* Pp/pp.scm 217 */
																															if (CBOOL
																																(BgL_colz00_848))
																																{	/* Pp/pp.scm 218 */
																																	obj_t
																																		BgL__andtest_1829z00_2192;
																																	BgL__andtest_1829z00_2192
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_outputz00_3122)
																																		(BgL_outputz00_3122,
																																		BGl_string2500z00zz__ppz00,
																																		BEOA);
																																	if (CBOOL
																																		(BgL__andtest_1829z00_2192))
																																		{	/* Pp/pp.scm 218 */
																																			return
																																				BINT(
																																				((long)
																																					CINT
																																					(BgL_colz00_848)
																																					+
																																					((long) 13)));
																																		}
																																	else
																																		{	/* Pp/pp.scm 218 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 218 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 220 */
																															obj_t
																																BgL_arg2006z00_936;
																															{	/* Pp/pp.scm 220 */
																																obj_t
																																	BgL_pz00_937;
																																{	/* Pp/pp.scm 220 */

																																	{	/* Ieee/port.scm 386 */

																																		BgL_pz00_937
																																			=
																																			BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																																			(BTRUE);
																																	}
																																}
																																{	/* Pp/pp.scm 221 */
																																	obj_t
																																		BgL_list2007z00_938;
																																	BgL_list2007z00_938
																																		=
																																		MAKE_PAIR
																																		(BgL_pz00_937,
																																		BNIL);
																																	BGl_writez00zz__r4_output_6_10_3z00
																																		(BgL_objz00_847,
																																		BgL_list2007z00_938);
																																}
																																BgL_arg2006z00_936
																																	=
																																	bgl_close_output_port
																																	(BgL_pz00_937);
																															}
																															if (CBOOL
																																(BgL_colz00_848))
																																{	/* Pp/pp.scm 220 */
																																	obj_t
																																		BgL__andtest_1829z00_2201;
																																	BgL__andtest_1829z00_2201
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_outputz00_3122)
																																		(BgL_outputz00_3122,
																																		BgL_arg2006z00_936,
																																		BEOA);
																																	if (CBOOL
																																		(BgL__andtest_1829z00_2201))
																																		{	/* Pp/pp.scm 220 */
																																			return
																																				BINT(
																																				((long)
																																					CINT
																																					(BgL_colz00_848)
																																					+
																																					STRING_LENGTH
																																					(BgL_arg2006z00_936)));
																																		}
																																	else
																																		{	/* Pp/pp.scm 220 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 220 */
																																	return BFALSE;
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
			}
		}
	}



/* read-macro? */
	bool_t BGl_readzd2macrozf3z21zz__ppz00(obj_t BgL_lz00_815)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 112 */
			{	/* Pp/pp.scm 114 */
				obj_t BgL_casezd2valuezd2_820;

				BgL_casezd2valuezd2_820 = CAR(BgL_lz00_815);
				{	/* Pp/pp.scm 114 */
					bool_t BgL_testz00_4684;

					{	/* Pp/pp.scm 114 */
						bool_t BgL__ortest_1825z00_822;

						BgL__ortest_1825z00_822 =
							(BgL_casezd2valuezd2_820 == BGl_symbol2501z00zz__ppz00);
						if (BgL__ortest_1825z00_822)
							{	/* Pp/pp.scm 114 */
								BgL_testz00_4684 = BgL__ortest_1825z00_822;
							}
						else
							{	/* Pp/pp.scm 114 */
								bool_t BgL__ortest_1826z00_823;

								BgL__ortest_1826z00_823 =
									(BgL_casezd2valuezd2_820 == BGl_symbol2503z00zz__ppz00);
								if (BgL__ortest_1826z00_823)
									{	/* Pp/pp.scm 114 */
										BgL_testz00_4684 = BgL__ortest_1826z00_823;
									}
								else
									{	/* Pp/pp.scm 114 */
										bool_t BgL__ortest_1827z00_824;

										BgL__ortest_1827z00_824 =
											(BgL_casezd2valuezd2_820 == BGl_symbol2505z00zz__ppz00);
										if (BgL__ortest_1827z00_824)
											{	/* Pp/pp.scm 114 */
												BgL_testz00_4684 = BgL__ortest_1827z00_824;
											}
										else
											{	/* Pp/pp.scm 114 */
												BgL_testz00_4684 =
													(BgL_casezd2valuezd2_820 ==
													BGl_symbol2507z00zz__ppz00);
											}
									}
							}
					}
					if (BgL_testz00_4684)
						{	/* Pp/pp.scm 115 */
							obj_t BgL_lz00_1867;

							BgL_lz00_1867 = CDR(BgL_lz00_815);
							if (PAIRP(BgL_lz00_1867))
								{	/* Pp/pp.scm 115 */
									return NULLP(CDR(BgL_lz00_1867));
								}
							else
								{	/* Pp/pp.scm 115 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Pp/pp.scm 114 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* out */
	obj_t BGl_outz00zz__ppz00(obj_t BgL_outputz00_3124, obj_t BgL_strz00_841,
		obj_t BgL_colz00_842)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 130 */
			if (CBOOL(BgL_colz00_842))
				{	/* Pp/pp.scm 130 */
					obj_t BgL__andtest_1829z00_1893;

					BgL__andtest_1829z00_1893 =
						PROCEDURE_ENTRY(BgL_outputz00_3124) (BgL_outputz00_3124,
						BgL_strz00_841, BEOA);
					if (CBOOL(BgL__andtest_1829z00_1893))
						{	/* Pp/pp.scm 130 */
							return
								BINT(
								((long) CINT(BgL_colz00_842) + STRING_LENGTH(BgL_strz00_841)));
						}
					else
						{	/* Pp/pp.scm 130 */
							return BFALSE;
						}
				}
			else
				{	/* Pp/pp.scm 130 */
					return BFALSE;
				}
		}
	}



/* read-macro-prefix */
	obj_t BGl_readzd2macrozd2prefixz00zz__ppz00(obj_t BgL_lz00_832)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 127 */
			{	/* Pp/pp.scm 123 */
				obj_t BgL_casezd2valuezd2_836;

				BgL_casezd2valuezd2_836 = CAR(BgL_lz00_832);
				if ((BgL_casezd2valuezd2_836 == BGl_symbol2501z00zz__ppz00))
					{	/* Pp/pp.scm 123 */
						return BGl_string2509z00zz__ppz00;
					}
				else
					{	/* Pp/pp.scm 123 */
						if ((BgL_casezd2valuezd2_836 == BGl_symbol2503z00zz__ppz00))
							{	/* Pp/pp.scm 123 */
								return BGl_string2510z00zz__ppz00;
							}
						else
							{	/* Pp/pp.scm 123 */
								if ((BgL_casezd2valuezd2_836 == BGl_symbol2505z00zz__ppz00))
									{	/* Pp/pp.scm 123 */
										return BGl_string2511z00zz__ppz00;
									}
								else
									{	/* Pp/pp.scm 123 */
										if ((BgL_casezd2valuezd2_836 == BGl_symbol2507z00zz__ppz00))
											{	/* Pp/pp.scm 123 */
												return BGl_string2512z00zz__ppz00;
											}
										else
											{	/* Pp/pp.scm 123 */
												return BUNSPEC;
											}
									}
							}
					}
			}
		}
	}



/* pr */
	obj_t BGl_prz00zz__ppz00(obj_t BgL_ppzd2exprzd2_3144,
		obj_t BgL_outputz00_3143, obj_t BgL_displayzf3zf3_3142,
		obj_t BgL_maxzd2exprzd2widthz00_3141, obj_t BgL_widthz00_3140,
		obj_t BgL_maxzd2callzd2headzd2widthzd2_3139, obj_t BgL_ppzd2lambdazd2_3138,
		obj_t BgL_ppzd2definezd2_3137, obj_t BgL_ppzd2defunzd2_3136,
		obj_t BgL_ppzd2ifzd2_3135, obj_t BgL_ppzd2condzd2_3134,
		obj_t BgL_ppzd2casezd2_3133, obj_t BgL_ppzd2andzd2_3132,
		obj_t BgL_ppzd2letzd2_3131, obj_t BgL_ppzd2beginzd2_3130,
		obj_t BgL_ppzd2dozd2_3129, obj_t BgL_ppzd2commentzd2_3128,
		obj_t BgL_ppzd2exprzd2listz00_3127, obj_t BgL_indentzd2generalzd2_3126,
		obj_t BgL_ppzd2exprzd2defunz00_3125, obj_t BgL_objz00_1036,
		obj_t BgL_colz00_1037, obj_t BgL_extraz00_1038, obj_t BgL_ppzd2pairzd2_1039)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 256 */
			{	/* Pp/pp.scm 241 */
				bool_t BgL_testz00_4716;

				if (PAIRP(BgL_objz00_1036))
					{	/* Pp/pp.scm 241 */
						BgL_testz00_4716 = ((bool_t) 1);
					}
				else
					{	/* Pp/pp.scm 241 */
						BgL_testz00_4716 = VECTORP(BgL_objz00_1036);
					}
				if (BgL_testz00_4716)
					{	/* Pp/pp.scm 242 */
						obj_t BgL_resultz00_1042;

						obj_t BgL_leftz00_1043;

						BgL_resultz00_1042 = MAKE_CELL(BNIL);
						{	/* Pp/pp.scm 243 */
							obj_t BgL_cellvalz00_4720;

							BgL_cellvalz00_4720 =
								BGl_2minz00zz__r4_numbers_6_5z00(BINT(
									((((long) CINT(BgL_widthz00_3140) -
												(long) CINT(BgL_colz00_1037)) -
											(long) CINT(BgL_extraz00_1038)) + ((long) 1))),
								BgL_maxzd2exprzd2widthz00_3141);
							BgL_leftz00_1043 = MAKE_CELL(BgL_cellvalz00_4720);
						}
						{	/* Pp/pp.scm 246 */
							obj_t BgL_zc3anonymousza32057ze3z83_3099;

							BgL_zc3anonymousza32057ze3z83_3099 =
								make_fx_procedure(BGl_zc3anonymousza32057ze3z83zz__ppz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32057ze3z83_3099,
								(int) (((long) 0)), BgL_resultz00_1042);
							PROCEDURE_SET(BgL_zc3anonymousza32057ze3z83_3099,
								(int) (((long) 1)), BgL_leftz00_1043);
							BGl_genericzd2writezd2zz__ppz00(BgL_objz00_1036,
								BgL_displayzf3zf3_3142, BFALSE,
								BgL_zc3anonymousza32057ze3z83_3099);
						}
						if (((long) CINT(CELL_REF(BgL_leftz00_1043)) > ((long) 0)))
							{	/* Pp/pp.scm 250 */
								obj_t BgL_arg2060z00_1050;

								BgL_arg2060z00_1050 =
									BGl_reversezd2stringzd2appendz00zz__ppz00(CELL_REF
									(BgL_resultz00_1042));
								if (CBOOL(BgL_colz00_1037))
									{	/* Pp/pp.scm 250 */
										obj_t BgL__andtest_1829z00_2341;

										BgL__andtest_1829z00_2341 =
											PROCEDURE_ENTRY(BgL_outputz00_3143) (BgL_outputz00_3143,
											BgL_arg2060z00_1050, BEOA);
										if (CBOOL(BgL__andtest_1829z00_2341))
											{	/* Pp/pp.scm 250 */
												return
													BINT(
													((long) CINT(BgL_colz00_1037) +
														STRING_LENGTH(BgL_arg2060z00_1050)));
											}
										else
											{	/* Pp/pp.scm 250 */
												return BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 250 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 249 */
								if (PAIRP(BgL_objz00_1036))
									{	/* Pp/pp.scm 251 */
										return
											PROCEDURE_ENTRY(BgL_ppzd2pairzd2_1039)
											(BgL_ppzd2pairzd2_1039, BgL_objz00_1036, BgL_colz00_1037,
											BgL_extraz00_1038, BEOA);
									}
								else
									{	/* Pp/pp.scm 253 */
										obj_t BgL_arg2062z00_1052;

										obj_t BgL_arg2063z00_1053;

										BgL_arg2062z00_1052 =
											BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
											(BgL_objz00_1036);
										{	/* Pp/pp.scm 254 */
											obj_t BgL_arg2064z00_1054;

											BgL_arg2064z00_1054 =
												BGl_vectorzd2prefixzd2zz__ppz00(BgL_objz00_1036);
											if (CBOOL(BgL_colz00_1037))
												{	/* Pp/pp.scm 254 */
													obj_t BgL__andtest_1829z00_2350;

													BgL__andtest_1829z00_2350 =
														PROCEDURE_ENTRY(BgL_outputz00_3143)
														(BgL_outputz00_3143, BgL_arg2064z00_1054, BEOA);
													if (CBOOL(BgL__andtest_1829z00_2350))
														{	/* Pp/pp.scm 254 */
															BgL_arg2063z00_1053 =
																BINT(
																((long) CINT(BgL_colz00_1037) +
																	STRING_LENGTH(BgL_arg2064z00_1054)));
														}
													else
														{	/* Pp/pp.scm 254 */
															BgL_arg2063z00_1053 = BFALSE;
														}
												}
											else
												{	/* Pp/pp.scm 254 */
													BgL_arg2063z00_1053 = BFALSE;
												}
										}
										{	/* Pp/pp.scm 253 */
											obj_t BgL_colz00_2358;

											BgL_colz00_2358 =
												BGl_outz00zz__ppz00(BgL_outputz00_3143,
												BGl_string2484z00zz__ppz00, BgL_arg2063z00_1053);
											return BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3143,
												BgL_ppzd2exprzd2_3144, BgL_displayzf3zf3_3142,
												BgL_maxzd2exprzd2widthz00_3141, BgL_widthz00_3140,
												BgL_maxzd2callzd2headzd2widthzd2_3139,
												BgL_ppzd2lambdazd2_3138, BgL_ppzd2definezd2_3137,
												BgL_ppzd2defunzd2_3136, BgL_ppzd2ifzd2_3135,
												BgL_ppzd2condzd2_3134, BgL_ppzd2casezd2_3133,
												BgL_ppzd2andzd2_3132, BgL_ppzd2letzd2_3131,
												BgL_ppzd2beginzd2_3130, BgL_ppzd2dozd2_3129,
												BgL_ppzd2commentzd2_3128, BgL_ppzd2exprzd2listz00_3127,
												BgL_indentzd2generalzd2_3126,
												BgL_ppzd2exprzd2defunz00_3125, BgL_arg2062z00_1052,
												BgL_colz00_2358, BgL_colz00_2358, BgL_extraz00_1038,
												BgL_ppzd2exprzd2_3144);
										}
									}
							}
					}
				else
					{	/* Pp/pp.scm 241 */
						return
							BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3142, BgL_outputz00_3143,
							BgL_objz00_1036, BgL_colz00_1037);
					}
			}
		}
	}



/* indent */
	obj_t BGl_indentz00zz__ppz00(obj_t BgL_outputz00_3145, obj_t BgL_toz00_1027,
		obj_t BgL_colz00_1028)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 238 */
			{
				obj_t BgL_nz00_1019;

				obj_t BgL_colz00_1020;

				if (CBOOL(BgL_colz00_1028))
					{	/* Pp/pp.scm 235 */
						if (((long) CINT(BgL_toz00_1027) < (long) CINT(BgL_colz00_1028)))
							{	/* Pp/pp.scm 237 */
								obj_t BgL__andtest_1835z00_1032;

								{	/* Pp/pp.scm 237 */
									obj_t BgL_arg2051z00_1033;

									{	/* Pp/pp.scm 237 */
										obj_t BgL_list2052z00_1034;

										BgL_list2052z00_1034 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										{	/* Pp/pp.scm 237 */
											obj_t BgL_res2462z00_2311;

											{	/* Pp/pp.scm 237 */
												obj_t BgL_arg2368z00_2308;

												BgL_arg2368z00_2308 = CAR(BgL_list2052z00_1034);
												BgL_res2462z00_2311 =
													make_string(((long) 1), CCHAR(BgL_arg2368z00_2308));
											}
											BgL_arg2051z00_1033 = BgL_res2462z00_2311;
									}}
									if (CBOOL(BgL_colz00_1028))
										{	/* Pp/pp.scm 237 */
											obj_t BgL__andtest_1829z00_2315;

											BgL__andtest_1829z00_2315 =
												PROCEDURE_ENTRY(BgL_outputz00_3145) (BgL_outputz00_3145,
												BgL_arg2051z00_1033, BEOA);
											if (CBOOL(BgL__andtest_1829z00_2315))
												{	/* Pp/pp.scm 237 */
													BgL__andtest_1835z00_1032 =
														BINT(
														((long) CINT(BgL_colz00_1028) +
															STRING_LENGTH(BgL_arg2051z00_1033)));
												}
											else
												{	/* Pp/pp.scm 237 */
													BgL__andtest_1835z00_1032 = BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 237 */
											BgL__andtest_1835z00_1032 = BFALSE;
										}
								}
								if (CBOOL(BgL__andtest_1835z00_1032))
									{	/* Pp/pp.scm 237 */
										BgL_nz00_1019 = BgL_toz00_1027;
										BgL_colz00_1020 = BINT(((long) 0));
									BgL_zc3anonymousza32042ze3z83_1021:
										if (((long) CINT(BgL_nz00_1019) > ((long) 0)))
											{	/* Pp/pp.scm 228 */
												if (((long) CINT(BgL_nz00_1019) > ((long) 7)))
													{	/* Pp/pp.scm 230 */
														long BgL_arg2045z00_1024;

														obj_t BgL_arg2046z00_1025;

														BgL_arg2045z00_1024 =
															((long) CINT(BgL_nz00_1019) - ((long) 8));
														if (CBOOL(BgL_colz00_1020))
															{	/* Pp/pp.scm 230 */
																obj_t BgL__andtest_1829z00_2287;

																BgL__andtest_1829z00_2287 =
																	PROCEDURE_ENTRY(BgL_outputz00_3145)
																	(BgL_outputz00_3145,
																	BGl_string2513z00zz__ppz00, BEOA);
																if (CBOOL(BgL__andtest_1829z00_2287))
																	{	/* Pp/pp.scm 230 */
																		BgL_arg2046z00_1025 =
																			BINT(
																			((long) CINT(BgL_colz00_1020) +
																				((long) 8)));
																	}
																else
																	{	/* Pp/pp.scm 230 */
																		BgL_arg2046z00_1025 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 230 */
																BgL_arg2046z00_1025 = BFALSE;
															}
														{
															obj_t BgL_colz00_4812;

															obj_t BgL_nz00_4810;

															BgL_nz00_4810 = BINT(BgL_arg2045z00_1024);
															BgL_colz00_4812 = BgL_arg2046z00_1025;
															BgL_colz00_1020 = BgL_colz00_4812;
															BgL_nz00_1019 = BgL_nz00_4810;
															goto BgL_zc3anonymousza32042ze3z83_1021;
														}
													}
												else
													{	/* Pp/pp.scm 231 */
														obj_t BgL_arg2047z00_1026;

														BgL_arg2047z00_1026 =
															c_substring(BGl_string2513z00zz__ppz00,
															((long) 0), (long) CINT(BgL_nz00_1019));
														if (CBOOL(BgL_colz00_1020))
															{	/* Pp/pp.scm 231 */
																obj_t BgL__andtest_1829z00_2298;

																BgL__andtest_1829z00_2298 =
																	PROCEDURE_ENTRY(BgL_outputz00_3145)
																	(BgL_outputz00_3145, BgL_arg2047z00_1026,
																	BEOA);
																if (CBOOL(BgL__andtest_1829z00_2298))
																	{	/* Pp/pp.scm 231 */
																		return
																			BINT(
																			((long) CINT(BgL_colz00_1020) +
																				STRING_LENGTH(BgL_arg2047z00_1026)));
																	}
																else
																	{	/* Pp/pp.scm 231 */
																		return BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 231 */
																return BFALSE;
															}
													}
											}
										else
											{	/* Pp/pp.scm 228 */
												return BgL_colz00_1020;
											}
									}
								else
									{	/* Pp/pp.scm 237 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 238 */
								long BgL_arg2053z00_1035;

								BgL_arg2053z00_1035 =
									((long) CINT(BgL_toz00_1027) - (long) CINT(BgL_colz00_1028));
								{
									obj_t BgL_colz00_4831;

									obj_t BgL_nz00_4829;

									BgL_nz00_4829 = BINT(BgL_arg2053z00_1035);
									BgL_colz00_4831 = BgL_colz00_1028;
									BgL_colz00_1020 = BgL_colz00_4831;
									BgL_nz00_1019 = BgL_nz00_4829;
									goto BgL_zc3anonymousza32042ze3z83_1021;
								}
							}
					}
				else
					{	/* Pp/pp.scm 235 */
						return BFALSE;
					}
			}
		}
	}



/* pp-general */
	obj_t BGl_ppzd2generalzd2zz__ppz00(obj_t BgL_indentzd2generalzd2_3165,
		obj_t BgL_outputz00_3164, obj_t BgL_ppzd2exprzd2_3163,
		obj_t BgL_displayzf3zf3_3162, obj_t BgL_maxzd2exprzd2widthz00_3161,
		obj_t BgL_widthz00_3160, obj_t BgL_maxzd2callzd2headzd2widthzd2_3159,
		obj_t BgL_ppzd2lambdazd2_3158, obj_t BgL_ppzd2definezd2_3157,
		obj_t BgL_ppzd2defunzd2_3156, obj_t BgL_ppzd2ifzd2_3155,
		obj_t BgL_ppzd2condzd2_3154, obj_t BgL_ppzd2casezd2_3153,
		obj_t BgL_ppzd2andzd2_3152, obj_t BgL_ppzd2letzd2_3151,
		obj_t BgL_ppzd2beginzd2_3150, obj_t BgL_ppzd2dozd2_3149,
		obj_t BgL_ppzd2commentzd2_3148, obj_t BgL_ppzd2exprzd2listz00_3147,
		obj_t BgL_ppzd2exprzd2defunz00_3146, obj_t BgL_exprz00_1131,
		obj_t BgL_colz00_1132, obj_t BgL_extraz00_1133, bool_t BgL_namedzf3zf3_1134,
		obj_t BgL_ppzd21zd2_1135, obj_t BgL_ppzd22zd2_1136,
		obj_t BgL_ppzd23zd2_1137)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 323 */
			{
				obj_t BgL_restz00_1167;

				long BgL_col1z00_1168;

				obj_t BgL_col2z00_1169;

				long BgL_col3z00_1170;

				{	/* Pp/pp.scm 336 */
					obj_t BgL_headz00_1142;

					BgL_headz00_1142 = CAR(BgL_exprz00_1131);
					{	/* Pp/pp.scm 336 */
						obj_t BgL_restz00_1143;

						BgL_restz00_1143 = CDR(BgL_exprz00_1131);
						{	/* Pp/pp.scm 337 */
							obj_t BgL_colza2za2_1144;

							{	/* Pp/pp.scm 338 */
								obj_t BgL_arg2115z00_1154;

								if (CBOOL(BgL_colz00_1132))
									{	/* Pp/pp.scm 338 */
										obj_t BgL__andtest_1829z00_2486;

										BgL__andtest_1829z00_2486 =
											PROCEDURE_ENTRY(BgL_outputz00_3164) (BgL_outputz00_3164,
											BGl_string2484z00zz__ppz00, BEOA);
										if (CBOOL(BgL__andtest_1829z00_2486))
											{	/* Pp/pp.scm 338 */
												BgL_arg2115z00_1154 =
													BINT(((long) CINT(BgL_colz00_1132) + ((long) 1)));
											}
										else
											{	/* Pp/pp.scm 338 */
												BgL_arg2115z00_1154 = BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 338 */
										BgL_arg2115z00_1154 = BFALSE;
									}
								BgL_colza2za2_1144 =
									BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3162, BgL_outputz00_3164,
									BgL_headz00_1142, BgL_arg2115z00_1154);
							}
							{	/* Pp/pp.scm 338 */

								{	/* Pp/pp.scm 339 */
									bool_t BgL_testz00_4844;

									if (BgL_namedzf3zf3_1134)
										{	/* Pp/pp.scm 339 */
											BgL_testz00_4844 = PAIRP(BgL_restz00_1143);
										}
									else
										{	/* Pp/pp.scm 339 */
											BgL_testz00_4844 = ((bool_t) 0);
										}
									if (BgL_testz00_4844)
										{	/* Pp/pp.scm 340 */
											obj_t BgL_namez00_1146;

											BgL_namez00_1146 = CAR(BgL_restz00_1143);
											{	/* Pp/pp.scm 340 */
												obj_t BgL_restz00_1147;

												BgL_restz00_1147 = CDR(BgL_restz00_1143);
												{	/* Pp/pp.scm 341 */
													obj_t BgL_colza2za2z00_1148;

													{	/* Pp/pp.scm 342 */
														obj_t BgL_arg2112z00_1151;

														if (CBOOL(BgL_colza2za2_1144))
															{	/* Pp/pp.scm 342 */
																obj_t BgL__andtest_1829z00_2497;

																BgL__andtest_1829z00_2497 =
																	PROCEDURE_ENTRY(BgL_outputz00_3164)
																	(BgL_outputz00_3164,
																	BGl_string2485z00zz__ppz00, BEOA);
																if (CBOOL(BgL__andtest_1829z00_2497))
																	{	/* Pp/pp.scm 342 */
																		BgL_arg2112z00_1151 =
																			BINT(
																			((long) CINT(BgL_colza2za2_1144) +
																				((long) 1)));
																	}
																else
																	{	/* Pp/pp.scm 342 */
																		BgL_arg2112z00_1151 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 342 */
																BgL_arg2112z00_1151 = BFALSE;
															}
														BgL_colza2za2z00_1148 =
															BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3162,
															BgL_outputz00_3164, BgL_namez00_1146,
															BgL_arg2112z00_1151);
													}
													{	/* Pp/pp.scm 342 */

														{	/* Pp/pp.scm 343 */
															long BgL_arg2110z00_1149;

															long BgL_arg2111z00_1150;

															BgL_arg2110z00_1149 =
																(
																(long) CINT(BgL_colz00_1132) +
																(long) CINT(BgL_indentzd2generalzd2_3165));
															BgL_arg2111z00_1150 =
																(
																(long) CINT(BgL_colza2za2z00_1148) +
																((long) 1));
															{	/* Pp/pp.scm 343 */
																bool_t BgL_testz00_4864;

																if (CBOOL(BgL_ppzd21zd2_1135))
																	{	/* Pp/pp.scm 343 */
																		BgL_testz00_4864 = PAIRP(BgL_restz00_1147);
																	}
																else
																	{	/* Pp/pp.scm 343 */
																		BgL_testz00_4864 = ((bool_t) 0);
																	}
																if (BgL_testz00_4864)
																	{	/* Pp/pp.scm 343 */
																		obj_t BgL_val1z00_2511;

																		BgL_val1z00_2511 = CAR(BgL_restz00_1147);
																		{	/* Pp/pp.scm 343 */
																			obj_t BgL_restz00_2512;

																			BgL_restz00_2512 = CDR(BgL_restz00_1147);
																			{	/* Pp/pp.scm 343 */
																				long BgL_extraz00_2513;

																				if (NULLP(BgL_restz00_2512))
																					{	/* Pp/pp.scm 343 */
																						BgL_extraz00_2513 =
																							(
																							(long) CINT(BgL_extraz00_1133) +
																							((long) 1));
																					}
																				else
																					{	/* Pp/pp.scm 343 */
																						BgL_extraz00_2513 = ((long) 0);
																					}
																				{	/* Pp/pp.scm 343 */

																					BgL_restz00_1167 = BgL_restz00_2512;
																					BgL_col1z00_1168 =
																						BgL_arg2110z00_1149;
																					BgL_col2z00_1169 =
																						BGl_prz00zz__ppz00
																						(BgL_ppzd2exprzd2_3163,
																						BgL_outputz00_3164,
																						BgL_displayzf3zf3_3162,
																						BgL_maxzd2exprzd2widthz00_3161,
																						BgL_widthz00_3160,
																						BgL_maxzd2callzd2headzd2widthzd2_3159,
																						BgL_ppzd2lambdazd2_3158,
																						BgL_ppzd2definezd2_3157,
																						BgL_ppzd2defunzd2_3156,
																						BgL_ppzd2ifzd2_3155,
																						BgL_ppzd2condzd2_3154,
																						BgL_ppzd2casezd2_3153,
																						BgL_ppzd2andzd2_3152,
																						BgL_ppzd2letzd2_3151,
																						BgL_ppzd2beginzd2_3150,
																						BgL_ppzd2dozd2_3149,
																						BgL_ppzd2commentzd2_3148,
																						BgL_ppzd2exprzd2listz00_3147,
																						BgL_indentzd2generalzd2_3165,
																						BgL_ppzd2exprzd2defunz00_3146,
																						BgL_val1z00_2511,
																						BGl_indentz00zz__ppz00
																						(BgL_outputz00_3164,
																							BINT(BgL_arg2111z00_1150),
																							BgL_colza2za2z00_1148),
																						BINT(BgL_extraz00_2513),
																						BgL_ppzd21zd2_1135);
																					BgL_col3z00_1170 =
																						BgL_arg2111z00_1150;
																				BgL_zc3anonymousza32121ze3z83_1171:
																					{	/* Pp/pp.scm 326 */
																						bool_t BgL_testz00_4874;

																						if (CBOOL(BgL_ppzd22zd2_1136))
																							{	/* Pp/pp.scm 326 */
																								BgL_testz00_4874 =
																									PAIRP(BgL_restz00_1167);
																							}
																						else
																							{	/* Pp/pp.scm 326 */
																								BgL_testz00_4874 = ((bool_t) 0);
																							}
																						if (BgL_testz00_4874)
																							{	/* Pp/pp.scm 326 */
																								obj_t BgL_val1z00_2604;

																								BgL_val1z00_2604 =
																									CAR(BgL_restz00_1167);
																								{	/* Pp/pp.scm 326 */
																									obj_t BgL_restz00_2605;

																									BgL_restz00_2605 =
																										CDR(BgL_restz00_1167);
																									{	/* Pp/pp.scm 326 */
																										long BgL_extraz00_2606;

																										if (NULLP(BgL_restz00_2605))
																											{	/* Pp/pp.scm 326 */
																												BgL_extraz00_2606 =
																													(
																													(long)
																													CINT
																													(BgL_extraz00_1133) +
																													((long) 1));
																											}
																										else
																											{	/* Pp/pp.scm 326 */
																												BgL_extraz00_2606 =
																													((long) 0);
																											}
																										{	/* Pp/pp.scm 326 */

																											return
																												BGl_ppzd2downzd2zz__ppz00
																												(BgL_outputz00_3164,
																												BgL_ppzd2exprzd2_3163,
																												BgL_displayzf3zf3_3162,
																												BgL_maxzd2exprzd2widthz00_3161,
																												BgL_widthz00_3160,
																												BgL_maxzd2callzd2headzd2widthzd2_3159,
																												BgL_ppzd2lambdazd2_3158,
																												BgL_ppzd2definezd2_3157,
																												BgL_ppzd2defunzd2_3156,
																												BgL_ppzd2ifzd2_3155,
																												BgL_ppzd2condzd2_3154,
																												BgL_ppzd2casezd2_3153,
																												BgL_ppzd2andzd2_3152,
																												BgL_ppzd2letzd2_3151,
																												BgL_ppzd2beginzd2_3150,
																												BgL_ppzd2dozd2_3149,
																												BgL_ppzd2commentzd2_3148,
																												BgL_ppzd2exprzd2listz00_3147,
																												BgL_indentzd2generalzd2_3165,
																												BgL_ppzd2exprzd2defunz00_3146,
																												BgL_restz00_2605,
																												BGl_prz00zz__ppz00
																												(BgL_ppzd2exprzd2_3163,
																													BgL_outputz00_3164,
																													BgL_displayzf3zf3_3162,
																													BgL_maxzd2exprzd2widthz00_3161,
																													BgL_widthz00_3160,
																													BgL_maxzd2callzd2headzd2widthzd2_3159,
																													BgL_ppzd2lambdazd2_3158,
																													BgL_ppzd2definezd2_3157,
																													BgL_ppzd2defunzd2_3156,
																													BgL_ppzd2ifzd2_3155,
																													BgL_ppzd2condzd2_3154,
																													BgL_ppzd2casezd2_3153,
																													BgL_ppzd2andzd2_3152,
																													BgL_ppzd2letzd2_3151,
																													BgL_ppzd2beginzd2_3150,
																													BgL_ppzd2dozd2_3149,
																													BgL_ppzd2commentzd2_3148,
																													BgL_ppzd2exprzd2listz00_3147,
																													BgL_indentzd2generalzd2_3165,
																													BgL_ppzd2exprzd2defunz00_3146,
																													BgL_val1z00_2604,
																													BGl_indentz00zz__ppz00
																													(BgL_outputz00_3164,
																														BINT
																														(BgL_col3z00_1170),
																														BgL_col2z00_1169),
																													BINT
																													(BgL_extraz00_2606),
																													BgL_ppzd22zd2_1136),
																												BINT(BgL_col1z00_1168),
																												BgL_extraz00_1133,
																												BgL_ppzd23zd2_1137);
																										}
																									}
																								}
																							}
																						else
																							{	/* Pp/pp.scm 326 */
																								return
																									BGl_ppzd2downzd2zz__ppz00
																									(BgL_outputz00_3164,
																									BgL_ppzd2exprzd2_3163,
																									BgL_displayzf3zf3_3162,
																									BgL_maxzd2exprzd2widthz00_3161,
																									BgL_widthz00_3160,
																									BgL_maxzd2callzd2headzd2widthzd2_3159,
																									BgL_ppzd2lambdazd2_3158,
																									BgL_ppzd2definezd2_3157,
																									BgL_ppzd2defunzd2_3156,
																									BgL_ppzd2ifzd2_3155,
																									BgL_ppzd2condzd2_3154,
																									BgL_ppzd2casezd2_3153,
																									BgL_ppzd2andzd2_3152,
																									BgL_ppzd2letzd2_3151,
																									BgL_ppzd2beginzd2_3150,
																									BgL_ppzd2dozd2_3149,
																									BgL_ppzd2commentzd2_3148,
																									BgL_ppzd2exprzd2listz00_3147,
																									BgL_indentzd2generalzd2_3165,
																									BgL_ppzd2exprzd2defunz00_3146,
																									BgL_restz00_1167,
																									BgL_col2z00_1169,
																									BINT(BgL_col1z00_1168),
																									BgL_extraz00_1133,
																									BgL_ppzd23zd2_1137);
																							}
																					}
																				}
																			}
																		}
																	}
																else
																	{
																		long BgL_col3z00_4899;

																		obj_t BgL_col2z00_4898;

																		long BgL_col1z00_4897;

																		obj_t BgL_restz00_4896;

																		BgL_restz00_4896 = BgL_restz00_1147;
																		BgL_col1z00_4897 = BgL_arg2110z00_1149;
																		BgL_col2z00_4898 = BgL_colza2za2z00_1148;
																		BgL_col3z00_4899 = BgL_arg2111z00_1150;
																		BgL_col3z00_1170 = BgL_col3z00_4899;
																		BgL_col2z00_1169 = BgL_col2z00_4898;
																		BgL_col1z00_1168 = BgL_col1z00_4897;
																		BgL_restz00_1167 = BgL_restz00_4896;
																		goto BgL_zc3anonymousza32121ze3z83_1171;
																	}
															}
														}
													}
												}
											}
										}
									else
										{	/* Pp/pp.scm 344 */
											long BgL_arg2113z00_1152;

											long BgL_arg2114z00_1153;

											BgL_arg2113z00_1152 =
												(
												(long) CINT(BgL_colz00_1132) +
												(long) CINT(BgL_indentzd2generalzd2_3165));
											BgL_arg2114z00_1153 =
												((long) CINT(BgL_colza2za2_1144) + ((long) 1));
											{	/* Pp/pp.scm 344 */
												bool_t BgL_testz00_4905;

												if (CBOOL(BgL_ppzd21zd2_1135))
													{	/* Pp/pp.scm 344 */
														BgL_testz00_4905 = PAIRP(BgL_restz00_1143);
													}
												else
													{	/* Pp/pp.scm 344 */
														BgL_testz00_4905 = ((bool_t) 0);
													}
												if (BgL_testz00_4905)
													{	/* Pp/pp.scm 344 */
														obj_t BgL_val1z00_2532;

														BgL_val1z00_2532 = CAR(BgL_restz00_1143);
														{	/* Pp/pp.scm 344 */
															obj_t BgL_restz00_2533;

															BgL_restz00_2533 = CDR(BgL_restz00_1143);
															{	/* Pp/pp.scm 344 */
																long BgL_extraz00_2534;

																if (NULLP(BgL_restz00_2533))
																	{	/* Pp/pp.scm 344 */
																		BgL_extraz00_2534 =
																			(
																			(long) CINT(BgL_extraz00_1133) +
																			((long) 1));
																	}
																else
																	{	/* Pp/pp.scm 344 */
																		BgL_extraz00_2534 = ((long) 0);
																	}
																{	/* Pp/pp.scm 344 */

																	{
																		long BgL_col3z00_4922;

																		obj_t BgL_col2z00_4917;

																		long BgL_col1z00_4916;

																		obj_t BgL_restz00_4915;

																		BgL_restz00_4915 = BgL_restz00_2533;
																		BgL_col1z00_4916 = BgL_arg2113z00_1152;
																		BgL_col2z00_4917 =
																			BGl_prz00zz__ppz00(BgL_ppzd2exprzd2_3163,
																			BgL_outputz00_3164,
																			BgL_displayzf3zf3_3162,
																			BgL_maxzd2exprzd2widthz00_3161,
																			BgL_widthz00_3160,
																			BgL_maxzd2callzd2headzd2widthzd2_3159,
																			BgL_ppzd2lambdazd2_3158,
																			BgL_ppzd2definezd2_3157,
																			BgL_ppzd2defunzd2_3156,
																			BgL_ppzd2ifzd2_3155,
																			BgL_ppzd2condzd2_3154,
																			BgL_ppzd2casezd2_3153,
																			BgL_ppzd2andzd2_3152,
																			BgL_ppzd2letzd2_3151,
																			BgL_ppzd2beginzd2_3150,
																			BgL_ppzd2dozd2_3149,
																			BgL_ppzd2commentzd2_3148,
																			BgL_ppzd2exprzd2listz00_3147,
																			BgL_indentzd2generalzd2_3165,
																			BgL_ppzd2exprzd2defunz00_3146,
																			BgL_val1z00_2532,
																			BGl_indentz00zz__ppz00(BgL_outputz00_3164,
																				BINT(BgL_arg2114z00_1153),
																				BgL_colza2za2_1144),
																			BINT(BgL_extraz00_2534),
																			BgL_ppzd21zd2_1135);
																		BgL_col3z00_4922 = BgL_arg2114z00_1153;
																		BgL_col3z00_1170 = BgL_col3z00_4922;
																		BgL_col2z00_1169 = BgL_col2z00_4917;
																		BgL_col1z00_1168 = BgL_col1z00_4916;
																		BgL_restz00_1167 = BgL_restz00_4915;
																		goto BgL_zc3anonymousza32121ze3z83_1171;
																	}
																}
															}
														}
													}
												else
													{
														long BgL_col3z00_4926;

														obj_t BgL_col2z00_4925;

														long BgL_col1z00_4924;

														obj_t BgL_restz00_4923;

														BgL_restz00_4923 = BgL_restz00_1143;
														BgL_col1z00_4924 = BgL_arg2113z00_1152;
														BgL_col2z00_4925 = BgL_colza2za2_1144;
														BgL_col3z00_4926 = BgL_arg2114z00_1153;
														BgL_col3z00_1170 = BgL_col3z00_4926;
														BgL_col2z00_1169 = BgL_col2z00_4925;
														BgL_col1z00_1168 = BgL_col1z00_4924;
														BgL_restz00_1167 = BgL_restz00_4923;
														goto BgL_zc3anonymousza32121ze3z83_1171;
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



/* pp-lambda */
	obj_t BGl_ppzd2lambdazd2zz__ppz00(obj_t BgL_envz00_3166,
		obj_t BgL_exprz00_3186, obj_t BgL_colz00_3187, obj_t BgL_extraz00_3188)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 371 */
			{	/* Pp/pp.scm 367 */
				obj_t BgL_ppzd2exprzd2defunz00_3167;

				obj_t BgL_indentzd2generalzd2_3168;

				obj_t BgL_widthz00_3169;

				obj_t BgL_maxzd2exprzd2widthz00_3170;

				obj_t BgL_displayzf3zf3_3171;

				obj_t BgL_ppzd2exprzd2listz00_3172;

				obj_t BgL_ppzd2commentzd2_3173;

				obj_t BgL_ppzd2dozd2_3174;

				obj_t BgL_ppzd2beginzd2_3175;

				obj_t BgL_ppzd2letzd2_3176;

				obj_t BgL_ppzd2andzd2_3177;

				obj_t BgL_ppzd2casezd2_3178;

				obj_t BgL_ppzd2condzd2_3179;

				obj_t BgL_ppzd2ifzd2_3180;

				obj_t BgL_ppzd2defunzd2_3181;

				obj_t BgL_ppzd2definezd2_3182;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3183;

				obj_t BgL_outputz00_3184;

				obj_t BgL_ppzd2exprzd2_3185;

				BgL_ppzd2exprzd2defunz00_3167 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3168 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 1)));
				BgL_widthz00_3169 = PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3170 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 3)));
				BgL_displayzf3zf3_3171 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3172 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 5)));
				BgL_ppzd2commentzd2_3173 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 6)));
				BgL_ppzd2dozd2_3174 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 7)));
				BgL_ppzd2beginzd2_3175 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 8)));
				BgL_ppzd2letzd2_3176 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 9)));
				BgL_ppzd2andzd2_3177 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 10)));
				BgL_ppzd2casezd2_3178 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 11)));
				BgL_ppzd2condzd2_3179 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 12)));
				BgL_ppzd2ifzd2_3180 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 13)));
				BgL_ppzd2defunzd2_3181 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 14)));
				BgL_ppzd2definezd2_3182 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3183 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 16)));
				BgL_outputz00_3184 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3185 =
					PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1206;

					obj_t BgL_colz00_1207;

					obj_t BgL_extraz00_1208;

					BgL_exprz00_1206 = BgL_exprz00_3186;
					BgL_colz00_1207 = BgL_colz00_3187;
					BgL_extraz00_1208 = BgL_extraz00_3188;
					{	/* Pp/pp.scm 367 */
						obj_t BgL_colz00_2663;

						if (CBOOL(BgL_colz00_1207))
							{	/* Pp/pp.scm 367 */
								obj_t BgL__andtest_1829z00_2674;

								BgL__andtest_1829z00_2674 =
									PROCEDURE_ENTRY(BgL_outputz00_3184) (BgL_outputz00_3184,
									BGl_string2484z00zz__ppz00, BEOA);
								if (CBOOL(BgL__andtest_1829z00_2674))
									{	/* Pp/pp.scm 367 */
										BgL_colz00_2663 =
											BINT(((long) CINT(BgL_colz00_1207) + ((long) 1)));
									}
								else
									{	/* Pp/pp.scm 367 */
										BgL_colz00_2663 = BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 367 */
								BgL_colz00_2663 = BFALSE;
							}
						{	/* Pp/pp.scm 367 */
							obj_t BgL_col2z00_2664;

							BgL_col2z00_2664 =
								BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3171, BgL_outputz00_3184,
								CAR(BgL_exprz00_1206), BgL_colz00_2663);
							{	/* Pp/pp.scm 367 */
								obj_t BgL_col3z00_2666;

								if (CBOOL(BgL_col2z00_2664))
									{	/* Pp/pp.scm 367 */
										obj_t BgL__andtest_1829z00_2683;

										BgL__andtest_1829z00_2683 =
											PROCEDURE_ENTRY(BgL_outputz00_3184) (BgL_outputz00_3184,
											BGl_string2485z00zz__ppz00, BEOA);
										if (CBOOL(BgL__andtest_1829z00_2683))
											{	/* Pp/pp.scm 367 */
												BgL_col3z00_2666 =
													BINT(((long) CINT(BgL_col2z00_2664) + ((long) 1)));
											}
										else
											{	/* Pp/pp.scm 367 */
												BgL_col3z00_2666 = BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 367 */
										BgL_col3z00_2666 = BFALSE;
									}
								{	/* Pp/pp.scm 367 */
									obj_t BgL_col4z00_2667;

									{	/* Pp/pp.scm 367 */
										obj_t BgL_arg2135z00_2668;

										{	/* Pp/pp.scm 367 */
											obj_t BgL_pairz00_2688;

											BgL_pairz00_2688 = BgL_exprz00_1206;
											BgL_arg2135z00_2668 = CAR(CDR(BgL_pairz00_2688));
										}
										BgL_col4z00_2667 =
											BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3171,
											BgL_outputz00_3184, BgL_arg2135z00_2668,
											BgL_col3z00_2666);
									}
									{	/* Pp/pp.scm 367 */

										{	/* Pp/pp.scm 367 */
											obj_t BgL_arg2133z00_2669;

											long BgL_arg2134z00_2670;

											{	/* Pp/pp.scm 367 */
												obj_t BgL_pairz00_2692;

												BgL_pairz00_2692 = BgL_exprz00_1206;
												BgL_arg2133z00_2669 = CDR(CDR(BgL_pairz00_2692));
											}
											BgL_arg2134z00_2670 =
												((long) CINT(BgL_colz00_2663) + ((long) 2));
											return
												BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3184,
												BgL_ppzd2exprzd2_3185, BgL_displayzf3zf3_3171,
												BgL_maxzd2exprzd2widthz00_3170, BgL_widthz00_3169,
												BgL_maxzd2callzd2headzd2widthzd2_3183, BgL_envz00_3166,
												BgL_ppzd2definezd2_3182, BgL_ppzd2defunzd2_3181,
												BgL_ppzd2ifzd2_3180, BgL_ppzd2condzd2_3179,
												BgL_ppzd2casezd2_3178, BgL_ppzd2andzd2_3177,
												BgL_ppzd2letzd2_3176, BgL_ppzd2beginzd2_3175,
												BgL_ppzd2dozd2_3174, BgL_ppzd2commentzd2_3173,
												BgL_ppzd2exprzd2listz00_3172,
												BgL_indentzd2generalzd2_3168,
												BgL_ppzd2exprzd2defunz00_3167, BgL_arg2133z00_2669,
												BgL_col3z00_2666, BINT(BgL_arg2134z00_2670),
												BgL_extraz00_1208, BgL_ppzd2exprzd2_3185);
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



/* pp-define */
	obj_t BGl_ppzd2definezd2zz__ppz00(obj_t BgL_envz00_3189,
		obj_t BgL_exprz00_3209, obj_t BgL_colz00_3210, obj_t BgL_extraz00_3211)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 353 */
			{	/* Pp/pp.scm 353 */
				obj_t BgL_ppzd2exprzd2defunz00_3190;

				obj_t BgL_indentzd2generalzd2_3191;

				obj_t BgL_widthz00_3192;

				obj_t BgL_maxzd2exprzd2widthz00_3193;

				obj_t BgL_displayzf3zf3_3194;

				obj_t BgL_ppzd2commentzd2_3195;

				obj_t BgL_ppzd2dozd2_3196;

				obj_t BgL_ppzd2beginzd2_3197;

				obj_t BgL_ppzd2letzd2_3198;

				obj_t BgL_ppzd2andzd2_3199;

				obj_t BgL_ppzd2casezd2_3200;

				obj_t BgL_ppzd2condzd2_3201;

				obj_t BgL_ppzd2ifzd2_3202;

				obj_t BgL_ppzd2defunzd2_3203;

				obj_t BgL_ppzd2lambdazd2_3204;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3205;

				obj_t BgL_ppzd2exprzd2listz00_3206;

				obj_t BgL_ppzd2exprzd2_3207;

				obj_t BgL_outputz00_3208;

				BgL_ppzd2exprzd2defunz00_3190 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3191 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 1)));
				BgL_widthz00_3192 = PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3193 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 3)));
				BgL_displayzf3zf3_3194 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3195 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 5)));
				BgL_ppzd2dozd2_3196 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3197 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 7)));
				BgL_ppzd2letzd2_3198 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 8)));
				BgL_ppzd2andzd2_3199 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 9)));
				BgL_ppzd2casezd2_3200 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 10)));
				BgL_ppzd2condzd2_3201 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3202 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3203 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3204 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3205 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 15)));
				BgL_ppzd2exprzd2listz00_3206 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 16)));
				BgL_ppzd2exprzd2_3207 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 17)));
				BgL_outputz00_3208 =
					PROCEDURE_REF(BgL_envz00_3189, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1194;

					obj_t BgL_colz00_1195;

					obj_t BgL_extraz00_1196;

					BgL_exprz00_1194 = BgL_exprz00_3209;
					BgL_colz00_1195 = BgL_colz00_3210;
					BgL_extraz00_1196 = BgL_extraz00_3211;
					BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3191,
						BgL_outputz00_3208, BgL_ppzd2exprzd2_3207, BgL_displayzf3zf3_3194,
						BgL_maxzd2exprzd2widthz00_3193, BgL_widthz00_3192,
						BgL_maxzd2callzd2headzd2widthzd2_3205, BgL_ppzd2lambdazd2_3204,
						BgL_envz00_3189, BgL_ppzd2defunzd2_3203, BgL_ppzd2ifzd2_3202,
						BgL_ppzd2condzd2_3201, BgL_ppzd2casezd2_3200, BgL_ppzd2andzd2_3199,
						BgL_ppzd2letzd2_3198, BgL_ppzd2beginzd2_3197, BgL_ppzd2dozd2_3196,
						BgL_ppzd2commentzd2_3195, BgL_ppzd2exprzd2listz00_3206,
						BgL_ppzd2exprzd2defunz00_3190, BgL_exprz00_1194, BgL_colz00_1195,
						BgL_extraz00_1196, ((bool_t) 0), BgL_ppzd2exprzd2listz00_3206,
						BFALSE, BgL_ppzd2exprzd2_3207);
					{	/* Pp/pp.scm 354 */
						obj_t BgL__andtest_1829z00_2650;

						BgL__andtest_1829z00_2650 =
							PROCEDURE_ENTRY(BgL_outputz00_3208) (BgL_outputz00_3208,
							BGl_string2514z00zz__ppz00, BEOA);
						if (CBOOL(BgL__andtest_1829z00_2650))
							{	/* Pp/pp.scm 354 */
								return BINT((((long) 0) + ((long) 1)));
							}
						else
							{	/* Pp/pp.scm 354 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* pp-defun */
	obj_t BGl_ppzd2defunzd2zz__ppz00(obj_t BgL_envz00_3212,
		obj_t BgL_exprz00_3232, obj_t BgL_colz00_3233, obj_t BgL_extraz00_3234)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 357 */
			{	/* Pp/pp.scm 357 */
				obj_t BgL_indentzd2generalzd2_3213;

				obj_t BgL_widthz00_3214;

				obj_t BgL_maxzd2exprzd2widthz00_3215;

				obj_t BgL_displayzf3zf3_3216;

				obj_t BgL_ppzd2exprzd2listz00_3217;

				obj_t BgL_ppzd2commentzd2_3218;

				obj_t BgL_ppzd2dozd2_3219;

				obj_t BgL_ppzd2beginzd2_3220;

				obj_t BgL_ppzd2letzd2_3221;

				obj_t BgL_ppzd2andzd2_3222;

				obj_t BgL_ppzd2casezd2_3223;

				obj_t BgL_ppzd2condzd2_3224;

				obj_t BgL_ppzd2ifzd2_3225;

				obj_t BgL_ppzd2definezd2_3226;

				obj_t BgL_ppzd2lambdazd2_3227;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3228;

				obj_t BgL_ppzd2exprzd2defunz00_3229;

				obj_t BgL_ppzd2exprzd2_3230;

				obj_t BgL_outputz00_3231;

				BgL_indentzd2generalzd2_3213 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 0)));
				BgL_widthz00_3214 = PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 1)));
				BgL_maxzd2exprzd2widthz00_3215 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 2)));
				BgL_displayzf3zf3_3216 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 3)));
				BgL_ppzd2exprzd2listz00_3217 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3218 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 5)));
				BgL_ppzd2dozd2_3219 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3220 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 7)));
				BgL_ppzd2letzd2_3221 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 8)));
				BgL_ppzd2andzd2_3222 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 9)));
				BgL_ppzd2casezd2_3223 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 10)));
				BgL_ppzd2condzd2_3224 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3225 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 12)));
				BgL_ppzd2definezd2_3226 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3227 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3228 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 15)));
				BgL_ppzd2exprzd2defunz00_3229 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 16)));
				BgL_ppzd2exprzd2_3230 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 17)));
				BgL_outputz00_3231 =
					PROCEDURE_REF(BgL_envz00_3212, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1198;

					obj_t BgL_colz00_1199;

					obj_t BgL_extraz00_1200;

					BgL_exprz00_1198 = BgL_exprz00_3232;
					BgL_colz00_1199 = BgL_colz00_3233;
					BgL_extraz00_1200 = BgL_extraz00_3234;
					BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3213,
						BgL_outputz00_3231, BgL_ppzd2exprzd2_3230, BgL_displayzf3zf3_3216,
						BgL_maxzd2exprzd2widthz00_3215, BgL_widthz00_3214,
						BgL_maxzd2callzd2headzd2widthzd2_3228, BgL_ppzd2lambdazd2_3227,
						BgL_ppzd2definezd2_3226, BgL_envz00_3212, BgL_ppzd2ifzd2_3225,
						BgL_ppzd2condzd2_3224, BgL_ppzd2casezd2_3223, BgL_ppzd2andzd2_3222,
						BgL_ppzd2letzd2_3221, BgL_ppzd2beginzd2_3220, BgL_ppzd2dozd2_3219,
						BgL_ppzd2commentzd2_3218, BgL_ppzd2exprzd2listz00_3217,
						BgL_ppzd2exprzd2defunz00_3229, BgL_exprz00_1198, BgL_colz00_1199,
						BgL_extraz00_1200, ((bool_t) 1), BgL_ppzd2exprzd2defunz00_3229,
						BFALSE, BgL_ppzd2exprzd2_3230);
					{	/* Pp/pp.scm 358 */
						obj_t BgL__andtest_1829z00_2658;

						BgL__andtest_1829z00_2658 =
							PROCEDURE_ENTRY(BgL_outputz00_3231) (BgL_outputz00_3231,
							BGl_string2514z00zz__ppz00, BEOA);
						if (CBOOL(BgL__andtest_1829z00_2658))
							{	/* Pp/pp.scm 358 */
								return BINT((((long) 0) + ((long) 1)));
							}
						else
							{	/* Pp/pp.scm 358 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* pp-if */
	obj_t BGl_ppzd2ifzd2zz__ppz00(obj_t BgL_envz00_3235, obj_t BgL_exprz00_3255,
		obj_t BgL_colz00_3256, obj_t BgL_extraz00_3257)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 390 */
			{	/* Pp/pp.scm 390 */
				obj_t BgL_ppzd2exprzd2defunz00_3236;

				obj_t BgL_indentzd2generalzd2_3237;

				obj_t BgL_widthz00_3238;

				obj_t BgL_maxzd2exprzd2widthz00_3239;

				obj_t BgL_displayzf3zf3_3240;

				obj_t BgL_ppzd2exprzd2listz00_3241;

				obj_t BgL_ppzd2commentzd2_3242;

				obj_t BgL_ppzd2dozd2_3243;

				obj_t BgL_ppzd2beginzd2_3244;

				obj_t BgL_ppzd2letzd2_3245;

				obj_t BgL_ppzd2andzd2_3246;

				obj_t BgL_ppzd2casezd2_3247;

				obj_t BgL_ppzd2condzd2_3248;

				obj_t BgL_ppzd2defunzd2_3249;

				obj_t BgL_ppzd2definezd2_3250;

				obj_t BgL_ppzd2lambdazd2_3251;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3252;

				obj_t BgL_outputz00_3253;

				obj_t BgL_ppzd2exprzd2_3254;

				BgL_ppzd2exprzd2defunz00_3236 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3237 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 1)));
				BgL_widthz00_3238 = PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3239 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 3)));
				BgL_displayzf3zf3_3240 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3241 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 5)));
				BgL_ppzd2commentzd2_3242 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 6)));
				BgL_ppzd2dozd2_3243 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 7)));
				BgL_ppzd2beginzd2_3244 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 8)));
				BgL_ppzd2letzd2_3245 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 9)));
				BgL_ppzd2andzd2_3246 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 10)));
				BgL_ppzd2casezd2_3247 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 11)));
				BgL_ppzd2condzd2_3248 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3249 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 13)));
				BgL_ppzd2definezd2_3250 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 14)));
				BgL_ppzd2lambdazd2_3251 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3252 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 16)));
				BgL_outputz00_3253 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3254 =
					PROCEDURE_REF(BgL_envz00_3235, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1257;

					obj_t BgL_colz00_1258;

					obj_t BgL_extraz00_1259;

					BgL_exprz00_1257 = BgL_exprz00_3255;
					BgL_colz00_1258 = BgL_colz00_3256;
					BgL_extraz00_1259 = BgL_extraz00_3257;
					return
						BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3237,
						BgL_outputz00_3253, BgL_ppzd2exprzd2_3254, BgL_displayzf3zf3_3240,
						BgL_maxzd2exprzd2widthz00_3239, BgL_widthz00_3238,
						BgL_maxzd2callzd2headzd2widthzd2_3252, BgL_ppzd2lambdazd2_3251,
						BgL_ppzd2definezd2_3250, BgL_ppzd2defunzd2_3249, BgL_envz00_3235,
						BgL_ppzd2condzd2_3248, BgL_ppzd2casezd2_3247, BgL_ppzd2andzd2_3246,
						BgL_ppzd2letzd2_3245, BgL_ppzd2beginzd2_3244, BgL_ppzd2dozd2_3243,
						BgL_ppzd2commentzd2_3242, BgL_ppzd2exprzd2listz00_3241,
						BgL_ppzd2exprzd2defunz00_3236, BgL_exprz00_1257, BgL_colz00_1258,
						BgL_extraz00_1259, ((bool_t) 0), BgL_ppzd2exprzd2_3254, BFALSE,
						BgL_ppzd2exprzd2_3254);
				}
			}
		}
	}



/* pp-cond */
	obj_t BGl_ppzd2condzd2zz__ppz00(obj_t BgL_envz00_3258, obj_t BgL_exprz00_3278,
		obj_t BgL_colz00_3279, obj_t BgL_extraz00_3280)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 393 */
			{	/* Pp/pp.scm 393 */
				obj_t BgL_ppzd2exprzd2defunz00_3259;

				obj_t BgL_indentzd2generalzd2_3260;

				obj_t BgL_widthz00_3261;

				obj_t BgL_maxzd2exprzd2widthz00_3262;

				obj_t BgL_displayzf3zf3_3263;

				obj_t BgL_ppzd2commentzd2_3264;

				obj_t BgL_ppzd2dozd2_3265;

				obj_t BgL_ppzd2beginzd2_3266;

				obj_t BgL_ppzd2letzd2_3267;

				obj_t BgL_ppzd2andzd2_3268;

				obj_t BgL_ppzd2casezd2_3269;

				obj_t BgL_ppzd2ifzd2_3270;

				obj_t BgL_ppzd2defunzd2_3271;

				obj_t BgL_ppzd2definezd2_3272;

				obj_t BgL_ppzd2lambdazd2_3273;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3274;

				obj_t BgL_outputz00_3275;

				obj_t BgL_ppzd2exprzd2_3276;

				obj_t BgL_ppzd2exprzd2listz00_3277;

				BgL_ppzd2exprzd2defunz00_3259 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3260 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 1)));
				BgL_widthz00_3261 = PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3262 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 3)));
				BgL_displayzf3zf3_3263 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3264 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 5)));
				BgL_ppzd2dozd2_3265 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3266 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 7)));
				BgL_ppzd2letzd2_3267 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 8)));
				BgL_ppzd2andzd2_3268 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 9)));
				BgL_ppzd2casezd2_3269 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 10)));
				BgL_ppzd2ifzd2_3270 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 11)));
				BgL_ppzd2defunzd2_3271 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 12)));
				BgL_ppzd2definezd2_3272 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3273 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3274 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 15)));
				BgL_outputz00_3275 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 16)));
				BgL_ppzd2exprzd2_3276 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 17)));
				BgL_ppzd2exprzd2listz00_3277 =
					PROCEDURE_REF(BgL_envz00_3258, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1261;

					obj_t BgL_colz00_1262;

					obj_t BgL_extraz00_1263;

					BgL_exprz00_1261 = BgL_exprz00_3278;
					BgL_colz00_1262 = BgL_colz00_3279;
					BgL_extraz00_1263 = BgL_extraz00_3280;
					{	/* Pp/pp.scm 393 */
						obj_t BgL_colza2za2_2766;

						BgL_colza2za2_2766 =
							BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3263, BgL_outputz00_3275,
							CAR(BgL_exprz00_1261),
							BGl_outz00zz__ppz00(BgL_outputz00_3275,
								BGl_string2484z00zz__ppz00, BgL_colz00_1262));
						if (CBOOL(BgL_colz00_1262))
							{	/* Pp/pp.scm 393 */
								obj_t BgL_arg2082z00_2770;

								long BgL_arg2083z00_2771;

								BgL_arg2082z00_2770 = CDR(BgL_exprz00_1261);
								BgL_arg2083z00_2771 =
									((long) CINT(BgL_colza2za2_2766) + ((long) 1));
								return
									BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3275,
									BgL_ppzd2exprzd2_3276, BgL_displayzf3zf3_3263,
									BgL_maxzd2exprzd2widthz00_3262, BgL_widthz00_3261,
									BgL_maxzd2callzd2headzd2widthzd2_3274,
									BgL_ppzd2lambdazd2_3273, BgL_ppzd2definezd2_3272,
									BgL_ppzd2defunzd2_3271, BgL_ppzd2ifzd2_3270, BgL_envz00_3258,
									BgL_ppzd2casezd2_3269, BgL_ppzd2andzd2_3268,
									BgL_ppzd2letzd2_3267, BgL_ppzd2beginzd2_3266,
									BgL_ppzd2dozd2_3265, BgL_ppzd2commentzd2_3264,
									BgL_ppzd2exprzd2listz00_3277, BgL_indentzd2generalzd2_3260,
									BgL_ppzd2exprzd2defunz00_3259, BgL_arg2082z00_2770,
									BgL_colza2za2_2766, BINT(BgL_arg2083z00_2771),
									BgL_extraz00_1263, BgL_ppzd2exprzd2listz00_3277);
							}
						else
							{	/* Pp/pp.scm 393 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* pp-case */
	obj_t BGl_ppzd2casezd2zz__ppz00(obj_t BgL_envz00_3281, obj_t BgL_exprz00_3301,
		obj_t BgL_colz00_3302, obj_t BgL_extraz00_3303)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 396 */
			{	/* Pp/pp.scm 396 */
				obj_t BgL_ppzd2exprzd2defunz00_3282;

				obj_t BgL_indentzd2generalzd2_3283;

				obj_t BgL_widthz00_3284;

				obj_t BgL_maxzd2exprzd2widthz00_3285;

				obj_t BgL_displayzf3zf3_3286;

				obj_t BgL_ppzd2commentzd2_3287;

				obj_t BgL_ppzd2dozd2_3288;

				obj_t BgL_ppzd2beginzd2_3289;

				obj_t BgL_ppzd2letzd2_3290;

				obj_t BgL_ppzd2andzd2_3291;

				obj_t BgL_ppzd2condzd2_3292;

				obj_t BgL_ppzd2ifzd2_3293;

				obj_t BgL_ppzd2defunzd2_3294;

				obj_t BgL_ppzd2definezd2_3295;

				obj_t BgL_ppzd2lambdazd2_3296;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3297;

				obj_t BgL_outputz00_3298;

				obj_t BgL_ppzd2exprzd2_3299;

				obj_t BgL_ppzd2exprzd2listz00_3300;

				BgL_ppzd2exprzd2defunz00_3282 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3283 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 1)));
				BgL_widthz00_3284 = PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3285 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 3)));
				BgL_displayzf3zf3_3286 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3287 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 5)));
				BgL_ppzd2dozd2_3288 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3289 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 7)));
				BgL_ppzd2letzd2_3290 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 8)));
				BgL_ppzd2andzd2_3291 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 9)));
				BgL_ppzd2condzd2_3292 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 10)));
				BgL_ppzd2ifzd2_3293 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 11)));
				BgL_ppzd2defunzd2_3294 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 12)));
				BgL_ppzd2definezd2_3295 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3296 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3297 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 15)));
				BgL_outputz00_3298 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 16)));
				BgL_ppzd2exprzd2_3299 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 17)));
				BgL_ppzd2exprzd2listz00_3300 =
					PROCEDURE_REF(BgL_envz00_3281, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1265;

					obj_t BgL_colz00_1266;

					obj_t BgL_extraz00_1267;

					BgL_exprz00_1265 = BgL_exprz00_3301;
					BgL_colz00_1266 = BgL_colz00_3302;
					BgL_extraz00_1267 = BgL_extraz00_3303;
					return
						BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3283,
						BgL_outputz00_3298, BgL_ppzd2exprzd2_3299, BgL_displayzf3zf3_3286,
						BgL_maxzd2exprzd2widthz00_3285, BgL_widthz00_3284,
						BgL_maxzd2callzd2headzd2widthzd2_3297, BgL_ppzd2lambdazd2_3296,
						BgL_ppzd2definezd2_3295, BgL_ppzd2defunzd2_3294,
						BgL_ppzd2ifzd2_3293, BgL_ppzd2condzd2_3292, BgL_envz00_3281,
						BgL_ppzd2andzd2_3291, BgL_ppzd2letzd2_3290, BgL_ppzd2beginzd2_3289,
						BgL_ppzd2dozd2_3288, BgL_ppzd2commentzd2_3287,
						BgL_ppzd2exprzd2listz00_3300, BgL_ppzd2exprzd2defunz00_3282,
						BgL_exprz00_1265, BgL_colz00_1266, BgL_extraz00_1267, ((bool_t) 0),
						BgL_ppzd2exprzd2_3299, BFALSE, BgL_ppzd2exprzd2listz00_3300);
				}
			}
		}
	}



/* pp-and */
	obj_t BGl_ppzd2andzd2zz__ppz00(obj_t BgL_envz00_3304, obj_t BgL_exprz00_3324,
		obj_t BgL_colz00_3325, obj_t BgL_extraz00_3326)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 399 */
			{	/* Pp/pp.scm 399 */
				obj_t BgL_ppzd2exprzd2defunz00_3305;

				obj_t BgL_indentzd2generalzd2_3306;

				obj_t BgL_widthz00_3307;

				obj_t BgL_maxzd2exprzd2widthz00_3308;

				obj_t BgL_displayzf3zf3_3309;

				obj_t BgL_ppzd2exprzd2listz00_3310;

				obj_t BgL_ppzd2commentzd2_3311;

				obj_t BgL_ppzd2dozd2_3312;

				obj_t BgL_ppzd2beginzd2_3313;

				obj_t BgL_ppzd2letzd2_3314;

				obj_t BgL_ppzd2casezd2_3315;

				obj_t BgL_ppzd2condzd2_3316;

				obj_t BgL_ppzd2ifzd2_3317;

				obj_t BgL_ppzd2defunzd2_3318;

				obj_t BgL_ppzd2definezd2_3319;

				obj_t BgL_ppzd2lambdazd2_3320;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3321;

				obj_t BgL_outputz00_3322;

				obj_t BgL_ppzd2exprzd2_3323;

				BgL_ppzd2exprzd2defunz00_3305 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3306 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 1)));
				BgL_widthz00_3307 = PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3308 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 3)));
				BgL_displayzf3zf3_3309 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3310 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 5)));
				BgL_ppzd2commentzd2_3311 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 6)));
				BgL_ppzd2dozd2_3312 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 7)));
				BgL_ppzd2beginzd2_3313 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 8)));
				BgL_ppzd2letzd2_3314 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 9)));
				BgL_ppzd2casezd2_3315 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 10)));
				BgL_ppzd2condzd2_3316 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3317 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3318 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 13)));
				BgL_ppzd2definezd2_3319 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 14)));
				BgL_ppzd2lambdazd2_3320 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3321 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 16)));
				BgL_outputz00_3322 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3323 =
					PROCEDURE_REF(BgL_envz00_3304, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1269;

					obj_t BgL_colz00_1270;

					obj_t BgL_extraz00_1271;

					BgL_exprz00_1269 = BgL_exprz00_3324;
					BgL_colz00_1270 = BgL_colz00_3325;
					BgL_extraz00_1271 = BgL_extraz00_3326;
					{	/* Pp/pp.scm 399 */
						obj_t BgL_colza2za2_2779;

						BgL_colza2za2_2779 =
							BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3309, BgL_outputz00_3322,
							CAR(BgL_exprz00_1269),
							BGl_outz00zz__ppz00(BgL_outputz00_3322,
								BGl_string2484z00zz__ppz00, BgL_colz00_1270));
						if (CBOOL(BgL_colz00_1270))
							{	/* Pp/pp.scm 399 */
								obj_t BgL_arg2082z00_2783;

								long BgL_arg2083z00_2784;

								BgL_arg2082z00_2783 = CDR(BgL_exprz00_1269);
								BgL_arg2083z00_2784 =
									((long) CINT(BgL_colza2za2_2779) + ((long) 1));
								return
									BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3322,
									BgL_ppzd2exprzd2_3323, BgL_displayzf3zf3_3309,
									BgL_maxzd2exprzd2widthz00_3308, BgL_widthz00_3307,
									BgL_maxzd2callzd2headzd2widthzd2_3321,
									BgL_ppzd2lambdazd2_3320, BgL_ppzd2definezd2_3319,
									BgL_ppzd2defunzd2_3318, BgL_ppzd2ifzd2_3317,
									BgL_ppzd2condzd2_3316, BgL_ppzd2casezd2_3315, BgL_envz00_3304,
									BgL_ppzd2letzd2_3314, BgL_ppzd2beginzd2_3313,
									BgL_ppzd2dozd2_3312, BgL_ppzd2commentzd2_3311,
									BgL_ppzd2exprzd2listz00_3310, BgL_indentzd2generalzd2_3306,
									BgL_ppzd2exprzd2defunz00_3305, BgL_arg2082z00_2783,
									BgL_colza2za2_2779, BINT(BgL_arg2083z00_2784),
									BgL_extraz00_1271, BgL_ppzd2exprzd2_3323);
							}
						else
							{	/* Pp/pp.scm 399 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* pp-let */
	obj_t BGl_ppzd2letzd2zz__ppz00(obj_t BgL_envz00_3327, obj_t BgL_exprz00_3347,
		obj_t BgL_colz00_3348, obj_t BgL_extraz00_3349)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 361 */
			{	/* Pp/pp.scm 361 */
				obj_t BgL_ppzd2exprzd2defunz00_3328;

				obj_t BgL_indentzd2generalzd2_3329;

				obj_t BgL_widthz00_3330;

				obj_t BgL_maxzd2exprzd2widthz00_3331;

				obj_t BgL_displayzf3zf3_3332;

				obj_t BgL_ppzd2commentzd2_3333;

				obj_t BgL_ppzd2dozd2_3334;

				obj_t BgL_ppzd2beginzd2_3335;

				obj_t BgL_ppzd2andzd2_3336;

				obj_t BgL_ppzd2casezd2_3337;

				obj_t BgL_ppzd2condzd2_3338;

				obj_t BgL_ppzd2ifzd2_3339;

				obj_t BgL_ppzd2defunzd2_3340;

				obj_t BgL_ppzd2definezd2_3341;

				obj_t BgL_ppzd2lambdazd2_3342;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3343;

				obj_t BgL_outputz00_3344;

				obj_t BgL_ppzd2exprzd2listz00_3345;

				obj_t BgL_ppzd2exprzd2_3346;

				BgL_ppzd2exprzd2defunz00_3328 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3329 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 1)));
				BgL_widthz00_3330 = PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3331 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 3)));
				BgL_displayzf3zf3_3332 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3333 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 5)));
				BgL_ppzd2dozd2_3334 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3335 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 7)));
				BgL_ppzd2andzd2_3336 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 8)));
				BgL_ppzd2casezd2_3337 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 9)));
				BgL_ppzd2condzd2_3338 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 10)));
				BgL_ppzd2ifzd2_3339 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 11)));
				BgL_ppzd2defunzd2_3340 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 12)));
				BgL_ppzd2definezd2_3341 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3342 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3343 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 15)));
				BgL_outputz00_3344 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 16)));
				BgL_ppzd2exprzd2listz00_3345 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3346 =
					PROCEDURE_REF(BgL_envz00_3327, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1202;

					obj_t BgL_colz00_1203;

					obj_t BgL_extraz00_1204;

					BgL_exprz00_1202 = BgL_exprz00_3347;
					BgL_colz00_1203 = BgL_colz00_3348;
					BgL_extraz00_1204 = BgL_extraz00_3349;
					return
						BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3329,
						BgL_outputz00_3344, BgL_ppzd2exprzd2_3346, BgL_displayzf3zf3_3332,
						BgL_maxzd2exprzd2widthz00_3331, BgL_widthz00_3330,
						BgL_maxzd2callzd2headzd2widthzd2_3343, BgL_ppzd2lambdazd2_3342,
						BgL_ppzd2definezd2_3341, BgL_ppzd2defunzd2_3340,
						BgL_ppzd2ifzd2_3339, BgL_ppzd2condzd2_3338, BgL_ppzd2casezd2_3337,
						BgL_ppzd2andzd2_3336, BgL_envz00_3327, BgL_ppzd2beginzd2_3335,
						BgL_ppzd2dozd2_3334, BgL_ppzd2commentzd2_3333,
						BgL_ppzd2exprzd2listz00_3345, BgL_ppzd2exprzd2defunz00_3328,
						BgL_exprz00_1202, BgL_colz00_1203, BgL_extraz00_1204, ((bool_t) 0),
						BgL_ppzd2exprzd2listz00_3345, BFALSE, BgL_ppzd2exprzd2_3346);
				}
			}
		}
	}



/* pp-begin */
	obj_t BGl_ppzd2beginzd2zz__ppz00(obj_t BgL_envz00_3350,
		obj_t BgL_exprz00_3370, obj_t BgL_colz00_3371, obj_t BgL_extraz00_3372)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 407 */
			{	/* Pp/pp.scm 407 */
				obj_t BgL_ppzd2exprzd2defunz00_3351;

				obj_t BgL_indentzd2generalzd2_3352;

				obj_t BgL_widthz00_3353;

				obj_t BgL_maxzd2exprzd2widthz00_3354;

				obj_t BgL_displayzf3zf3_3355;

				obj_t BgL_ppzd2exprzd2listz00_3356;

				obj_t BgL_ppzd2commentzd2_3357;

				obj_t BgL_ppzd2dozd2_3358;

				obj_t BgL_ppzd2letzd2_3359;

				obj_t BgL_ppzd2andzd2_3360;

				obj_t BgL_ppzd2casezd2_3361;

				obj_t BgL_ppzd2condzd2_3362;

				obj_t BgL_ppzd2ifzd2_3363;

				obj_t BgL_ppzd2defunzd2_3364;

				obj_t BgL_ppzd2definezd2_3365;

				obj_t BgL_ppzd2lambdazd2_3366;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3367;

				obj_t BgL_outputz00_3368;

				obj_t BgL_ppzd2exprzd2_3369;

				BgL_ppzd2exprzd2defunz00_3351 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3352 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 1)));
				BgL_widthz00_3353 = PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3354 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 3)));
				BgL_displayzf3zf3_3355 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3356 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 5)));
				BgL_ppzd2commentzd2_3357 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 6)));
				BgL_ppzd2dozd2_3358 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 7)));
				BgL_ppzd2letzd2_3359 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 8)));
				BgL_ppzd2andzd2_3360 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 9)));
				BgL_ppzd2casezd2_3361 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 10)));
				BgL_ppzd2condzd2_3362 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3363 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3364 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 13)));
				BgL_ppzd2definezd2_3365 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 14)));
				BgL_ppzd2lambdazd2_3366 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3367 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 16)));
				BgL_outputz00_3368 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3369 =
					PROCEDURE_REF(BgL_envz00_3350, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1281;

					obj_t BgL_colz00_1282;

					obj_t BgL_extraz00_1283;

					BgL_exprz00_1281 = BgL_exprz00_3370;
					BgL_colz00_1282 = BgL_colz00_3371;
					BgL_extraz00_1283 = BgL_extraz00_3372;
					return
						BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3352,
						BgL_outputz00_3368, BgL_ppzd2exprzd2_3369, BgL_displayzf3zf3_3355,
						BgL_maxzd2exprzd2widthz00_3354, BgL_widthz00_3353,
						BgL_maxzd2callzd2headzd2widthzd2_3367, BgL_ppzd2lambdazd2_3366,
						BgL_ppzd2definezd2_3365, BgL_ppzd2defunzd2_3364,
						BgL_ppzd2ifzd2_3363, BgL_ppzd2condzd2_3362, BgL_ppzd2casezd2_3361,
						BgL_ppzd2andzd2_3360, BgL_ppzd2letzd2_3359, BgL_envz00_3350,
						BgL_ppzd2dozd2_3358, BgL_ppzd2commentzd2_3357,
						BgL_ppzd2exprzd2listz00_3356, BgL_ppzd2exprzd2defunz00_3351,
						BgL_exprz00_1281, BgL_colz00_1282, BgL_extraz00_1283, ((bool_t) 0),
						BFALSE, BFALSE, BgL_ppzd2exprzd2_3369);
				}
			}
		}
	}



/* pp-do */
	obj_t BGl_ppzd2dozd2zz__ppz00(obj_t BgL_envz00_3373, obj_t BgL_exprz00_3393,
		obj_t BgL_colz00_3394, obj_t BgL_extraz00_3395)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 410 */
			{	/* Pp/pp.scm 410 */
				obj_t BgL_ppzd2exprzd2defunz00_3374;

				obj_t BgL_indentzd2generalzd2_3375;

				obj_t BgL_widthz00_3376;

				obj_t BgL_maxzd2exprzd2widthz00_3377;

				obj_t BgL_displayzf3zf3_3378;

				obj_t BgL_ppzd2commentzd2_3379;

				obj_t BgL_ppzd2beginzd2_3380;

				obj_t BgL_ppzd2letzd2_3381;

				obj_t BgL_ppzd2andzd2_3382;

				obj_t BgL_ppzd2casezd2_3383;

				obj_t BgL_ppzd2condzd2_3384;

				obj_t BgL_ppzd2ifzd2_3385;

				obj_t BgL_ppzd2defunzd2_3386;

				obj_t BgL_ppzd2definezd2_3387;

				obj_t BgL_ppzd2lambdazd2_3388;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3389;

				obj_t BgL_outputz00_3390;

				obj_t BgL_ppzd2exprzd2listz00_3391;

				obj_t BgL_ppzd2exprzd2_3392;

				BgL_ppzd2exprzd2defunz00_3374 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3375 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 1)));
				BgL_widthz00_3376 = PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3377 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 3)));
				BgL_displayzf3zf3_3378 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3379 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 5)));
				BgL_ppzd2beginzd2_3380 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 6)));
				BgL_ppzd2letzd2_3381 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 7)));
				BgL_ppzd2andzd2_3382 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 8)));
				BgL_ppzd2casezd2_3383 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 9)));
				BgL_ppzd2condzd2_3384 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 10)));
				BgL_ppzd2ifzd2_3385 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 11)));
				BgL_ppzd2defunzd2_3386 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 12)));
				BgL_ppzd2definezd2_3387 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 13)));
				BgL_ppzd2lambdazd2_3388 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 14)));
				BgL_maxzd2callzd2headzd2widthzd2_3389 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 15)));
				BgL_outputz00_3390 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 16)));
				BgL_ppzd2exprzd2listz00_3391 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3392 =
					PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1285;

					obj_t BgL_colz00_1286;

					obj_t BgL_extraz00_1287;

					BgL_exprz00_1285 = BgL_exprz00_3393;
					BgL_colz00_1286 = BgL_colz00_3394;
					BgL_extraz00_1287 = BgL_extraz00_3395;
					return
						BGl_ppzd2generalzd2zz__ppz00(BgL_indentzd2generalzd2_3375,
						BgL_outputz00_3390, BgL_ppzd2exprzd2_3392, BgL_displayzf3zf3_3378,
						BgL_maxzd2exprzd2widthz00_3377, BgL_widthz00_3376,
						BgL_maxzd2callzd2headzd2widthzd2_3389, BgL_ppzd2lambdazd2_3388,
						BgL_ppzd2definezd2_3387, BgL_ppzd2defunzd2_3386,
						BgL_ppzd2ifzd2_3385, BgL_ppzd2condzd2_3384, BgL_ppzd2casezd2_3383,
						BgL_ppzd2andzd2_3382, BgL_ppzd2letzd2_3381, BgL_ppzd2beginzd2_3380,
						BgL_envz00_3373, BgL_ppzd2commentzd2_3379,
						BgL_ppzd2exprzd2listz00_3391, BgL_ppzd2exprzd2defunz00_3374,
						BgL_exprz00_1285, BgL_colz00_1286, BgL_extraz00_1287, ((bool_t) 0),
						BgL_ppzd2exprzd2listz00_3391, BgL_ppzd2exprzd2listz00_3391,
						BgL_ppzd2exprzd2_3392);
				}
			}
		}
	}



/* pp-comment */
	obj_t BGl_ppzd2commentzd2zz__ppz00(obj_t BgL_envz00_3396,
		obj_t BgL_exprz00_3416, obj_t BgL_colz00_3417, obj_t BgL_extraz00_3418)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 387 */
			{	/* Pp/pp.scm 387 */
				obj_t BgL_ppzd2exprzd2defunz00_3397;

				obj_t BgL_ppzd2exprzd2listz00_3398;

				obj_t BgL_ppzd2dozd2_3399;

				obj_t BgL_ppzd2beginzd2_3400;

				obj_t BgL_ppzd2letzd2_3401;

				obj_t BgL_ppzd2andzd2_3402;

				obj_t BgL_ppzd2casezd2_3403;

				obj_t BgL_ppzd2condzd2_3404;

				obj_t BgL_ppzd2ifzd2_3405;

				obj_t BgL_ppzd2defunzd2_3406;

				obj_t BgL_ppzd2definezd2_3407;

				obj_t BgL_ppzd2lambdazd2_3408;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3409;

				obj_t BgL_widthz00_3410;

				obj_t BgL_maxzd2exprzd2widthz00_3411;

				obj_t BgL_displayzf3zf3_3412;

				obj_t BgL_indentzd2generalzd2_3413;

				obj_t BgL_outputz00_3414;

				obj_t BgL_ppzd2exprzd2_3415;

				BgL_ppzd2exprzd2defunz00_3397 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 0)));
				BgL_ppzd2exprzd2listz00_3398 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 1)));
				BgL_ppzd2dozd2_3399 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 2)));
				BgL_ppzd2beginzd2_3400 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 3)));
				BgL_ppzd2letzd2_3401 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 4)));
				BgL_ppzd2andzd2_3402 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 5)));
				BgL_ppzd2casezd2_3403 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 6)));
				BgL_ppzd2condzd2_3404 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 7)));
				BgL_ppzd2ifzd2_3405 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 8)));
				BgL_ppzd2defunzd2_3406 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 9)));
				BgL_ppzd2definezd2_3407 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 10)));
				BgL_ppzd2lambdazd2_3408 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 11)));
				BgL_maxzd2callzd2headzd2widthzd2_3409 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 12)));
				BgL_widthz00_3410 = PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_3411 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 14)));
				BgL_displayzf3zf3_3412 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 15)));
				BgL_indentzd2generalzd2_3413 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 16)));
				BgL_outputz00_3414 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3415 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1218;

					obj_t BgL_colz00_1219;

					obj_t BgL_extraz00_1220;

					BgL_exprz00_1218 = BgL_exprz00_3416;
					BgL_colz00_1219 = BgL_colz00_3417;
					BgL_extraz00_1220 = BgL_extraz00_3418;
					{
						obj_t BgL_columnz00_1222;

						obj_t BgL_stringz00_1223;

						if (PAIRP(BgL_exprz00_1218))
							{	/* Pp/pp.scm 387 */
								obj_t BgL_cdrzd21406zd2_1228;

								BgL_cdrzd21406zd2_1228 = CDR(BgL_exprz00_1218);
								if ((CAR(BgL_exprz00_1218) == BGl_symbol2488z00zz__ppz00))
									{	/* Pp/pp.scm 387 */
										if (PAIRP(BgL_cdrzd21406zd2_1228))
											{	/* Pp/pp.scm 387 */
												obj_t BgL_carzd21409zd2_1231;

												obj_t BgL_cdrzd21410zd2_1232;

												BgL_carzd21409zd2_1231 = CAR(BgL_cdrzd21406zd2_1228);
												BgL_cdrzd21410zd2_1232 = CDR(BgL_cdrzd21406zd2_1228);
												if (INTEGERP(BgL_carzd21409zd2_1231))
													{	/* Pp/pp.scm 387 */
														if (PAIRP(BgL_cdrzd21410zd2_1232))
															{	/* Pp/pp.scm 387 */
																obj_t BgL_carzd21415zd2_1235;

																BgL_carzd21415zd2_1235 =
																	CAR(BgL_cdrzd21410zd2_1232);
																if (STRINGP(BgL_carzd21415zd2_1235))
																	{	/* Pp/pp.scm 387 */
																		if (NULLP(CDR(BgL_cdrzd21410zd2_1232)))
																			{	/* Pp/pp.scm 387 */
																				BgL_columnz00_1222 =
																					BgL_carzd21409zd2_1231;
																				BgL_stringz00_1223 =
																					BgL_carzd21415zd2_1235;
																				{	/* Pp/pp.scm 376 */
																					obj_t BgL_addz00_1241;

																					{	/* Pp/pp.scm 376 */
																						obj_t BgL_arg2158z00_1252;

																						{	/* Pp/pp.scm 376 */
																							long BgL_arg2159z00_1253;

																							BgL_arg2159z00_1253 =
																								STRING_LENGTH
																								(BgL_stringz00_1223);
																							{	/* Pp/pp.scm 376 */
																								obj_t BgL_list2161z00_1255;

																								{	/* Pp/pp.scm 376 */
																									obj_t BgL_arg2162z00_1256;

																									BgL_arg2162z00_1256 =
																										MAKE_PAIR(BINT(((long) 3)),
																										BNIL);
																									BgL_list2161z00_1255 =
																										MAKE_PAIR(BINT
																										(BgL_arg2159z00_1253),
																										BgL_arg2162z00_1256);
																								}
																								BgL_arg2158z00_1252 =
																									BGl_zb2zb2zz__r4_numbers_6_5z00
																									(BgL_list2161z00_1255);
																						}}
																						BgL_addz00_1241 =
																							BGl_2zd2zd2zz__r4_numbers_6_5z00
																							(BGl_za2ppzd2widthza2zd2zz__ppz00,
																							BgL_arg2158z00_1252);
																					}
																					if (
																						((long) CINT(BgL_columnz00_1222) ==
																							((long) 0)))
																						{	/* Pp/pp.scm 377 */
																							if (
																								((long) CINT(BgL_addz00_1241) >
																									((long) 0)))
																								{	/* Pp/pp.scm 379 */
																									obj_t BgL_arg2150z00_1244;

																									{	/* Pp/pp.scm 379 */
																										obj_t BgL_arg2152z00_1246;

																										{	/* Pp/pp.scm 379 */
																											obj_t
																												BgL_list2153z00_1247;
																											BgL_list2153z00_1247 =
																												MAKE_PAIR(BCHAR((
																														(unsigned char)
																														' ')), BNIL);
																											{	/* Pp/pp.scm 379 */
																												obj_t
																													BgL_res2463z00_2721;
																												{	/* Pp/pp.scm 379 */
																													long BgL_kz00_2715;

																													BgL_kz00_2715 =
																														(long)
																														CINT
																														(BgL_addz00_1241);
																													{	/* Pp/pp.scm 379 */
																														obj_t
																															BgL_arg2368z00_2718;
																														BgL_arg2368z00_2718
																															=
																															CAR
																															(BgL_list2153z00_1247);
																														BgL_res2463z00_2721
																															=
																															make_string
																															(BgL_kz00_2715,
																															CCHAR
																															(BgL_arg2368z00_2718));
																												}}
																												BgL_arg2152z00_1246 =
																													BgL_res2463z00_2721;
																										}}
																										BgL_arg2150z00_1244 =
																											string_append
																											(BgL_stringz00_1223,
																											BgL_arg2152z00_1246);
																									}
																									{	/* Pp/pp.scm 379 */
																										obj_t
																											BgL__andtest_1829z00_2725;
																										BgL__andtest_1829z00_2725 =
																											PROCEDURE_ENTRY
																											(BgL_outputz00_3414)
																											(BgL_outputz00_3414,
																											BgL_arg2150z00_1244,
																											BEOA);
																										if (CBOOL
																											(BgL__andtest_1829z00_2725))
																											{	/* Pp/pp.scm 379 */
																												return
																													BINT(
																													(((long) 0) +
																														STRING_LENGTH
																														(BgL_arg2150z00_1244)));
																											}
																										else
																											{	/* Pp/pp.scm 379 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Pp/pp.scm 381 */
																									obj_t
																										BgL__andtest_1829z00_2733;
																									BgL__andtest_1829z00_2733 =
																										PROCEDURE_ENTRY
																										(BgL_outputz00_3414)
																										(BgL_outputz00_3414,
																										BgL_stringz00_1223, BEOA);
																									if (CBOOL
																										(BgL__andtest_1829z00_2733))
																										{	/* Pp/pp.scm 381 */
																											return
																												BINT(
																												(((long) 0) +
																													STRING_LENGTH
																													(BgL_stringz00_1223)));
																										}
																									else
																										{	/* Pp/pp.scm 381 */
																											return BFALSE;
																										}
																								}
																						}
																					else
																						{	/* Pp/pp.scm 377 */
																							if (
																								((long) CINT(BgL_addz00_1241) >
																									((long) 0)))
																								{	/* Pp/pp.scm 383 */
																									obj_t BgL_arg2155z00_1249;

																									{	/* Pp/pp.scm 383 */
																										obj_t BgL_arg2156z00_1250;

																										{	/* Pp/pp.scm 383 */
																											obj_t
																												BgL_list2157z00_1251;
																											BgL_list2157z00_1251 =
																												MAKE_PAIR(BCHAR((
																														(unsigned char)
																														' ')), BNIL);
																											{	/* Pp/pp.scm 383 */
																												obj_t
																													BgL_res2464z00_2746;
																												{	/* Pp/pp.scm 383 */
																													long BgL_kz00_2740;

																													BgL_kz00_2740 =
																														(long)
																														CINT
																														(BgL_addz00_1241);
																													{	/* Pp/pp.scm 383 */
																														obj_t
																															BgL_arg2368z00_2743;
																														BgL_arg2368z00_2743
																															=
																															CAR
																															(BgL_list2157z00_1251);
																														BgL_res2464z00_2746
																															=
																															make_string
																															(BgL_kz00_2740,
																															CCHAR
																															(BgL_arg2368z00_2743));
																												}}
																												BgL_arg2156z00_1250 =
																													BgL_res2464z00_2746;
																										}}
																										BgL_arg2155z00_1249 =
																											string_append
																											(BgL_stringz00_1223,
																											BgL_arg2156z00_1250);
																									}
																									if (CBOOL(BgL_colz00_1219))
																										{	/* Pp/pp.scm 383 */
																											obj_t
																												BgL__andtest_1829z00_2750;
																											BgL__andtest_1829z00_2750
																												=
																												PROCEDURE_ENTRY
																												(BgL_outputz00_3414)
																												(BgL_outputz00_3414,
																												BgL_arg2155z00_1249,
																												BEOA);
																											if (CBOOL
																												(BgL__andtest_1829z00_2750))
																												{	/* Pp/pp.scm 383 */
																													return
																														BINT(
																														((long)
																															CINT
																															(BgL_colz00_1219)
																															+
																															STRING_LENGTH
																															(BgL_arg2155z00_1249)));
																												}
																											else
																												{	/* Pp/pp.scm 383 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 383 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Pp/pp.scm 382 */
																									if (CBOOL(BgL_colz00_1219))
																										{	/* Pp/pp.scm 385 */
																											obj_t
																												BgL__andtest_1829z00_2758;
																											BgL__andtest_1829z00_2758
																												=
																												PROCEDURE_ENTRY
																												(BgL_outputz00_3414)
																												(BgL_outputz00_3414,
																												BgL_stringz00_1223,
																												BEOA);
																											if (CBOOL
																												(BgL__andtest_1829z00_2758))
																												{	/* Pp/pp.scm 385 */
																													return
																														BINT(
																														((long)
																															CINT
																															(BgL_colz00_1219)
																															+
																															STRING_LENGTH
																															(BgL_stringz00_1223)));
																												}
																											else
																												{	/* Pp/pp.scm 385 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 385 */
																											return BFALSE;
																										}
																								}
																						}
																				}
																			}
																		else
																			{	/* Pp/pp.scm 387 */
																			BgL_tagzd21399zd2_1225:
																				return
																					BGl_ppzd2generalzd2zz__ppz00
																					(BgL_indentzd2generalzd2_3413,
																					BgL_outputz00_3414,
																					BgL_ppzd2exprzd2_3415,
																					BgL_displayzf3zf3_3412,
																					BgL_maxzd2exprzd2widthz00_3411,
																					BgL_widthz00_3410,
																					BgL_maxzd2callzd2headzd2widthzd2_3409,
																					BgL_ppzd2lambdazd2_3408,
																					BgL_ppzd2definezd2_3407,
																					BgL_ppzd2defunzd2_3406,
																					BgL_ppzd2ifzd2_3405,
																					BgL_ppzd2condzd2_3404,
																					BgL_ppzd2casezd2_3403,
																					BgL_ppzd2andzd2_3402,
																					BgL_ppzd2letzd2_3401,
																					BgL_ppzd2beginzd2_3400,
																					BgL_ppzd2dozd2_3399, BgL_envz00_3396,
																					BgL_ppzd2exprzd2listz00_3398,
																					BgL_ppzd2exprzd2defunz00_3397,
																					BgL_exprz00_1218, BgL_colz00_1219,
																					BgL_extraz00_1220, ((bool_t) 0),
																					BgL_ppzd2exprzd2_3415, BFALSE,
																					BgL_ppzd2exprzd2_3415);
																			}
																	}
																else
																	{	/* Pp/pp.scm 387 */
																		goto BgL_tagzd21399zd2_1225;
																	}
															}
														else
															{	/* Pp/pp.scm 387 */
																goto BgL_tagzd21399zd2_1225;
															}
													}
												else
													{	/* Pp/pp.scm 387 */
														goto BgL_tagzd21399zd2_1225;
													}
											}
										else
											{	/* Pp/pp.scm 387 */
												goto BgL_tagzd21399zd2_1225;
											}
									}
								else
									{	/* Pp/pp.scm 387 */
										goto BgL_tagzd21399zd2_1225;
									}
							}
						else
							{	/* Pp/pp.scm 387 */
								goto BgL_tagzd21399zd2_1225;
							}
					}
				}
			}
		}
	}



/* pp-expr-defun */
	obj_t BGl_ppzd2exprzd2defunz00zz__ppz00(obj_t BgL_envz00_3419,
		obj_t BgL_lz00_3439, obj_t BgL_colz00_3440, obj_t BgL_extraz00_3441)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 350 */
			{	/* Pp/pp.scm 350 */
				obj_t BgL_indentzd2generalzd2_3420;

				obj_t BgL_widthz00_3421;

				obj_t BgL_maxzd2exprzd2widthz00_3422;

				obj_t BgL_displayzf3zf3_3423;

				obj_t BgL_ppzd2exprzd2listz00_3424;

				obj_t BgL_ppzd2commentzd2_3425;

				obj_t BgL_ppzd2dozd2_3426;

				obj_t BgL_ppzd2beginzd2_3427;

				obj_t BgL_ppzd2letzd2_3428;

				obj_t BgL_ppzd2andzd2_3429;

				obj_t BgL_ppzd2casezd2_3430;

				obj_t BgL_ppzd2condzd2_3431;

				obj_t BgL_ppzd2ifzd2_3432;

				obj_t BgL_ppzd2defunzd2_3433;

				obj_t BgL_ppzd2definezd2_3434;

				obj_t BgL_ppzd2lambdazd2_3435;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3436;

				obj_t BgL_outputz00_3437;

				obj_t BgL_ppzd2exprzd2_3438;

				BgL_indentzd2generalzd2_3420 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 0)));
				BgL_widthz00_3421 = PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 1)));
				BgL_maxzd2exprzd2widthz00_3422 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 2)));
				BgL_displayzf3zf3_3423 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 3)));
				BgL_ppzd2exprzd2listz00_3424 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3425 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 5)));
				BgL_ppzd2dozd2_3426 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3427 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 7)));
				BgL_ppzd2letzd2_3428 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 8)));
				BgL_ppzd2andzd2_3429 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 9)));
				BgL_ppzd2casezd2_3430 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 10)));
				BgL_ppzd2condzd2_3431 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3432 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3433 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 13)));
				BgL_ppzd2definezd2_3434 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 14)));
				BgL_ppzd2lambdazd2_3435 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3436 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 16)));
				BgL_outputz00_3437 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3438 =
					PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 18)));
				{
					obj_t BgL_lz00_1190;

					obj_t BgL_colz00_1191;

					obj_t BgL_extraz00_1192;

					BgL_lz00_1190 = BgL_lz00_3439;
					BgL_colz00_1191 = BgL_colz00_3440;
					BgL_extraz00_1192 = BgL_extraz00_3441;
					{	/* Pp/pp.scm 350 */
						obj_t BgL_colz00_2629;

						BgL_colz00_2629 =
							BGl_outz00zz__ppz00(BgL_outputz00_3437,
							BGl_string2515z00zz__ppz00, BgL_colz00_1191);
						{	/* Pp/pp.scm 350 */
							obj_t BgL_col2z00_2630;

							BgL_col2z00_2630 =
								BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3423, BgL_outputz00_3437,
								CAR(BgL_lz00_1190), BgL_colz00_2629);
							{	/* Pp/pp.scm 350 */
								obj_t BgL_col3z00_2632;

								{	/* Pp/pp.scm 350 */
									obj_t BgL_arg2091z00_2633;

									{	/* Pp/pp.scm 350 */
										obj_t BgL_pairz00_2637;

										BgL_pairz00_2637 = BgL_lz00_1190;
										BgL_arg2091z00_2633 = CAR(CDR(BgL_pairz00_2637));
									}
									BgL_col3z00_2632 =
										BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3423,
										BgL_outputz00_3437, BgL_arg2091z00_2633, BgL_col2z00_2630);
								}
								{	/* Pp/pp.scm 350 */

									{	/* Pp/pp.scm 350 */
										obj_t BgL_arg2089z00_2634;

										long BgL_arg2090z00_2635;

										{	/* Pp/pp.scm 350 */
											obj_t BgL_pairz00_2641;

											BgL_pairz00_2641 = BgL_lz00_1190;
											BgL_arg2089z00_2634 = CDR(CDR(BgL_pairz00_2641));
										}
										BgL_arg2090z00_2635 =
											((long) CINT(BgL_col3z00_2632) + ((long) 1));
										return
											BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3437,
											BgL_ppzd2exprzd2_3438, BgL_displayzf3zf3_3423,
											BgL_maxzd2exprzd2widthz00_3422, BgL_widthz00_3421,
											BgL_maxzd2callzd2headzd2widthzd2_3436,
											BgL_ppzd2lambdazd2_3435, BgL_ppzd2definezd2_3434,
											BgL_ppzd2defunzd2_3433, BgL_ppzd2ifzd2_3432,
											BgL_ppzd2condzd2_3431, BgL_ppzd2casezd2_3430,
											BgL_ppzd2andzd2_3429, BgL_ppzd2letzd2_3428,
											BgL_ppzd2beginzd2_3427, BgL_ppzd2dozd2_3426,
											BgL_ppzd2commentzd2_3425, BgL_ppzd2exprzd2listz00_3424,
											BgL_indentzd2generalzd2_3420, BgL_envz00_3419,
											BgL_arg2089z00_2634, BgL_col3z00_2632,
											BINT(BgL_arg2090z00_2635), BgL_extraz00_1192,
											BgL_ppzd2exprzd2_3438);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* pp-expr-list */
	obj_t BGl_ppzd2exprzd2listz00zz__ppz00(obj_t BgL_envz00_3442,
		obj_t BgL_lz00_3462, obj_t BgL_colz00_3463, obj_t BgL_extraz00_3464)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 347 */
			{	/* Pp/pp.scm 347 */
				obj_t BgL_ppzd2exprzd2defunz00_3443;

				obj_t BgL_indentzd2generalzd2_3444;

				obj_t BgL_widthz00_3445;

				obj_t BgL_maxzd2exprzd2widthz00_3446;

				obj_t BgL_displayzf3zf3_3447;

				obj_t BgL_ppzd2commentzd2_3448;

				obj_t BgL_ppzd2dozd2_3449;

				obj_t BgL_ppzd2beginzd2_3450;

				obj_t BgL_ppzd2letzd2_3451;

				obj_t BgL_ppzd2andzd2_3452;

				obj_t BgL_ppzd2casezd2_3453;

				obj_t BgL_ppzd2condzd2_3454;

				obj_t BgL_ppzd2ifzd2_3455;

				obj_t BgL_ppzd2defunzd2_3456;

				obj_t BgL_ppzd2definezd2_3457;

				obj_t BgL_ppzd2lambdazd2_3458;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3459;

				obj_t BgL_outputz00_3460;

				obj_t BgL_ppzd2exprzd2_3461;

				BgL_ppzd2exprzd2defunz00_3443 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3444 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 1)));
				BgL_widthz00_3445 = PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3446 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 3)));
				BgL_displayzf3zf3_3447 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3448 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 5)));
				BgL_ppzd2dozd2_3449 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 6)));
				BgL_ppzd2beginzd2_3450 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 7)));
				BgL_ppzd2letzd2_3451 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 8)));
				BgL_ppzd2andzd2_3452 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 9)));
				BgL_ppzd2casezd2_3453 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 10)));
				BgL_ppzd2condzd2_3454 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 11)));
				BgL_ppzd2ifzd2_3455 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 12)));
				BgL_ppzd2defunzd2_3456 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 13)));
				BgL_ppzd2definezd2_3457 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 14)));
				BgL_ppzd2lambdazd2_3458 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 15)));
				BgL_maxzd2callzd2headzd2widthzd2_3459 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 16)));
				BgL_outputz00_3460 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 17)));
				BgL_ppzd2exprzd2_3461 =
					PROCEDURE_REF(BgL_envz00_3442, (int) (((long) 18)));
				{
					obj_t BgL_lz00_1186;

					obj_t BgL_colz00_1187;

					obj_t BgL_extraz00_1188;

					BgL_lz00_1186 = BgL_lz00_3462;
					BgL_colz00_1187 = BgL_colz00_3463;
					BgL_extraz00_1188 = BgL_extraz00_3464;
					{	/* Pp/pp.scm 347 */
						obj_t BgL_colz00_2625;

						BgL_colz00_2625 =
							BGl_outz00zz__ppz00(BgL_outputz00_3460,
							BGl_string2484z00zz__ppz00, BgL_colz00_1187);
						return BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3460,
							BgL_ppzd2exprzd2_3461, BgL_displayzf3zf3_3447,
							BgL_maxzd2exprzd2widthz00_3446, BgL_widthz00_3445,
							BgL_maxzd2callzd2headzd2widthzd2_3459, BgL_ppzd2lambdazd2_3458,
							BgL_ppzd2definezd2_3457, BgL_ppzd2defunzd2_3456,
							BgL_ppzd2ifzd2_3455, BgL_ppzd2condzd2_3454, BgL_ppzd2casezd2_3453,
							BgL_ppzd2andzd2_3452, BgL_ppzd2letzd2_3451,
							BgL_ppzd2beginzd2_3450, BgL_ppzd2dozd2_3449,
							BgL_ppzd2commentzd2_3448, BgL_envz00_3442,
							BgL_indentzd2generalzd2_3444, BgL_ppzd2exprzd2defunz00_3443,
							BgL_lz00_1186, BgL_colz00_2625, BgL_colz00_2625,
							BgL_extraz00_1188, BgL_ppzd2exprzd2_3461);
					}
				}
			}
		}
	}



/* pp-expr */
	obj_t BGl_ppzd2exprzd2zz__ppz00(obj_t BgL_envz00_3465, obj_t BgL_exprz00_3485,
		obj_t BgL_colz00_3486, obj_t BgL_extraz00_3487)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 273 */
			{	/* Pp/pp.scm 259 */
				obj_t BgL_ppzd2exprzd2defunz00_3466;

				obj_t BgL_indentzd2generalzd2_3467;

				obj_t BgL_widthz00_3468;

				obj_t BgL_maxzd2exprzd2widthz00_3469;

				obj_t BgL_displayzf3zf3_3470;

				obj_t BgL_ppzd2exprzd2listz00_3471;

				obj_t BgL_ppzd2commentzd2_3472;

				obj_t BgL_ppzd2dozd2_3473;

				obj_t BgL_ppzd2beginzd2_3474;

				obj_t BgL_ppzd2letzd2_3475;

				obj_t BgL_ppzd2andzd2_3476;

				obj_t BgL_ppzd2casezd2_3477;

				obj_t BgL_ppzd2condzd2_3478;

				obj_t BgL_ppzd2ifzd2_3479;

				obj_t BgL_ppzd2defunzd2_3480;

				obj_t BgL_ppzd2definezd2_3481;

				obj_t BgL_ppzd2lambdazd2_3482;

				obj_t BgL_maxzd2callzd2headzd2widthzd2_3483;

				obj_t BgL_outputz00_3484;

				BgL_ppzd2exprzd2defunz00_3466 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 0)));
				BgL_indentzd2generalzd2_3467 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 1)));
				BgL_widthz00_3468 = PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3469 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 3)));
				BgL_displayzf3zf3_3470 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3471 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 5)));
				BgL_ppzd2commentzd2_3472 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 6)));
				BgL_ppzd2dozd2_3473 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 7)));
				BgL_ppzd2beginzd2_3474 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 8)));
				BgL_ppzd2letzd2_3475 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 9)));
				BgL_ppzd2andzd2_3476 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 10)));
				BgL_ppzd2casezd2_3477 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 11)));
				BgL_ppzd2condzd2_3478 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 12)));
				BgL_ppzd2ifzd2_3479 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 13)));
				BgL_ppzd2defunzd2_3480 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 14)));
				BgL_ppzd2definezd2_3481 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 15)));
				BgL_ppzd2lambdazd2_3482 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 16)));
				BgL_maxzd2callzd2headzd2widthzd2_3483 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 17)));
				BgL_outputz00_3484 =
					PROCEDURE_REF(BgL_envz00_3465, (int) (((long) 18)));
				{
					obj_t BgL_exprz00_1061;

					obj_t BgL_colz00_1062;

					obj_t BgL_extraz00_1063;

					BgL_exprz00_1061 = BgL_exprz00_3485;
					BgL_colz00_1062 = BgL_colz00_3486;
					BgL_extraz00_1063 = BgL_extraz00_3487;
					{
						obj_t BgL_headz00_1289;

						if (BGl_readzd2macrozf3z21zz__ppz00(BgL_exprz00_1061))
							{	/* Pp/pp.scm 260 */
								obj_t BgL_arg2072z00_1066;

								obj_t BgL_arg2073z00_1067;

								{	/* Pp/pp.scm 260 */
									obj_t BgL_pairz00_2360;

									BgL_pairz00_2360 = BgL_exprz00_1061;
									BgL_arg2072z00_1066 = CAR(CDR(BgL_pairz00_2360));
								}
								{	/* Pp/pp.scm 261 */
									obj_t BgL_arg2076z00_1068;

									BgL_arg2076z00_1068 =
										BGl_readzd2macrozd2prefixz00zz__ppz00(BgL_exprz00_1061);
									if (CBOOL(BgL_colz00_1062))
										{	/* Pp/pp.scm 261 */
											obj_t BgL__andtest_1829z00_2367;

											BgL__andtest_1829z00_2367 =
												PROCEDURE_ENTRY(BgL_outputz00_3484) (BgL_outputz00_3484,
												BgL_arg2076z00_1068, BEOA);
											if (CBOOL(BgL__andtest_1829z00_2367))
												{	/* Pp/pp.scm 261 */
													BgL_arg2073z00_1067 =
														BINT(
														((long) CINT(BgL_colz00_1062) +
															STRING_LENGTH(BgL_arg2076z00_1068)));
												}
											else
												{	/* Pp/pp.scm 261 */
													BgL_arg2073z00_1067 = BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 261 */
											BgL_arg2073z00_1067 = BFALSE;
										}
								}
								return
									BGl_prz00zz__ppz00(BgL_envz00_3465, BgL_outputz00_3484,
									BgL_displayzf3zf3_3470, BgL_maxzd2exprzd2widthz00_3469,
									BgL_widthz00_3468, BgL_maxzd2callzd2headzd2widthzd2_3483,
									BgL_ppzd2lambdazd2_3482, BgL_ppzd2definezd2_3481,
									BgL_ppzd2defunzd2_3480, BgL_ppzd2ifzd2_3479,
									BgL_ppzd2condzd2_3478, BgL_ppzd2casezd2_3477,
									BgL_ppzd2andzd2_3476, BgL_ppzd2letzd2_3475,
									BgL_ppzd2beginzd2_3474, BgL_ppzd2dozd2_3473,
									BgL_ppzd2commentzd2_3472, BgL_ppzd2exprzd2listz00_3471,
									BgL_indentzd2generalzd2_3467, BgL_ppzd2exprzd2defunz00_3466,
									BgL_arg2072z00_1066, BgL_arg2073z00_1067, BgL_extraz00_1063,
									BgL_envz00_3465);
							}
						else
							{	/* Pp/pp.scm 264 */
								obj_t BgL_headz00_1069;

								BgL_headz00_1069 = CAR(BgL_exprz00_1061);
								if (SYMBOLP(BgL_headz00_1069))
									{	/* Pp/pp.scm 266 */
										obj_t BgL_procz00_1071;

										BgL_headz00_1289 = BgL_headz00_1069;
										{	/* Pp/pp.scm 421 */
											obj_t BgL_casezd2valuezd2_1291;

											if (
												(BGl_za2ppzd2caseza2zd2zz__ppz00 ==
													BGl_symbol2475z00zz__ppz00))
												{	/* Pp/pp.scm 422 */
													obj_t BgL_arg2185z00_1312;

													BgL_arg2185z00_1312 =
														SYMBOL_TO_STRING(BgL_headz00_1289);
													BgL_casezd2valuezd2_1291 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2185z00_1312));
												}
											else
												{	/* Pp/pp.scm 421 */
													BgL_casezd2valuezd2_1291 = BgL_headz00_1289;
												}
											if (
												(BgL_casezd2valuezd2_1291 ==
													BGl_symbol2516z00zz__ppz00))
												{	/* Pp/pp.scm 421 */
													BgL_procz00_1071 = BgL_ppzd2lambdazd2_3482;
												}
											else
												{	/* Pp/pp.scm 421 */
													bool_t BgL_testz00_5652;

													{	/* Pp/pp.scm 421 */
														bool_t BgL__ortest_1839z00_1310;

														BgL__ortest_1839z00_1310 =
															(BgL_casezd2valuezd2_1291 ==
															BGl_symbol2518z00zz__ppz00);
														if (BgL__ortest_1839z00_1310)
															{	/* Pp/pp.scm 421 */
																BgL_testz00_5652 = BgL__ortest_1839z00_1310;
															}
														else
															{	/* Pp/pp.scm 421 */
																BgL_testz00_5652 =
																	(BgL_casezd2valuezd2_1291 ==
																	BGl_symbol2520z00zz__ppz00);
															}
													}
													if (BgL_testz00_5652)
														{	/* Pp/pp.scm 421 */
															BgL_procz00_1071 = BgL_ppzd2letzd2_3475;
														}
													else
														{	/* Pp/pp.scm 421 */
															bool_t BgL_testz00_5656;

															{	/* Pp/pp.scm 421 */
																bool_t BgL__ortest_1840z00_1307;

																BgL__ortest_1840z00_1307 =
																	(BgL_casezd2valuezd2_1291 ==
																	BGl_symbol2522z00zz__ppz00);
																if (BgL__ortest_1840z00_1307)
																	{	/* Pp/pp.scm 421 */
																		BgL_testz00_5656 = BgL__ortest_1840z00_1307;
																	}
																else
																	{	/* Pp/pp.scm 421 */
																		bool_t BgL__ortest_1841z00_1308;

																		BgL__ortest_1841z00_1308 =
																			(BgL_casezd2valuezd2_1291 ==
																			BGl_symbol2524z00zz__ppz00);
																		if (BgL__ortest_1841z00_1308)
																			{	/* Pp/pp.scm 421 */
																				BgL_testz00_5656 =
																					BgL__ortest_1841z00_1308;
																			}
																		else
																			{	/* Pp/pp.scm 421 */
																				bool_t BgL__ortest_1842z00_1309;

																				BgL__ortest_1842z00_1309 =
																					(BgL_casezd2valuezd2_1291 ==
																					BGl_symbol2526z00zz__ppz00);
																				if (BgL__ortest_1842z00_1309)
																					{	/* Pp/pp.scm 421 */
																						BgL_testz00_5656 =
																							BgL__ortest_1842z00_1309;
																					}
																				else
																					{	/* Pp/pp.scm 421 */
																						BgL_testz00_5656 =
																							(BgL_casezd2valuezd2_1291 ==
																							BGl_symbol2528z00zz__ppz00);
																					}
																			}
																	}
															}
															if (BgL_testz00_5656)
																{	/* Pp/pp.scm 421 */
																	BgL_procz00_1071 = BgL_ppzd2definezd2_3481;
																}
															else
																{	/* Pp/pp.scm 421 */
																	bool_t BgL_testz00_5664;

																	{	/* Pp/pp.scm 421 */
																		bool_t BgL__ortest_1843z00_1306;

																		BgL__ortest_1843z00_1306 =
																			(BgL_casezd2valuezd2_1291 ==
																			BGl_symbol2530z00zz__ppz00);
																		if (BgL__ortest_1843z00_1306)
																			{	/* Pp/pp.scm 421 */
																				BgL_testz00_5664 =
																					BgL__ortest_1843z00_1306;
																			}
																		else
																			{	/* Pp/pp.scm 421 */
																				BgL_testz00_5664 =
																					(BgL_casezd2valuezd2_1291 ==
																					BGl_symbol2532z00zz__ppz00);
																			}
																	}
																	if (BgL_testz00_5664)
																		{	/* Pp/pp.scm 421 */
																			BgL_procz00_1071 = BgL_ppzd2defunzd2_3480;
																		}
																	else
																		{	/* Pp/pp.scm 421 */
																			bool_t BgL_testz00_5668;

																			{	/* Pp/pp.scm 421 */
																				bool_t BgL__ortest_1844z00_1305;

																				BgL__ortest_1844z00_1305 =
																					(BgL_casezd2valuezd2_1291 ==
																					BGl_symbol2534z00zz__ppz00);
																				if (BgL__ortest_1844z00_1305)
																					{	/* Pp/pp.scm 421 */
																						BgL_testz00_5668 =
																							BgL__ortest_1844z00_1305;
																					}
																				else
																					{	/* Pp/pp.scm 421 */
																						BgL_testz00_5668 =
																							(BgL_casezd2valuezd2_1291 ==
																							BGl_symbol2536z00zz__ppz00);
																					}
																			}
																			if (BgL_testz00_5668)
																				{	/* Pp/pp.scm 421 */
																					BgL_procz00_1071 =
																						BgL_ppzd2ifzd2_3479;
																				}
																			else
																				{	/* Pp/pp.scm 421 */
																					if (
																						(BgL_casezd2valuezd2_1291 ==
																							BGl_symbol2538z00zz__ppz00))
																						{	/* Pp/pp.scm 421 */
																							BgL_procz00_1071 =
																								BgL_ppzd2condzd2_3478;
																						}
																					else
																						{	/* Pp/pp.scm 421 */
																							if (
																								(BgL_casezd2valuezd2_1291 ==
																									BGl_symbol2540z00zz__ppz00))
																								{	/* Pp/pp.scm 421 */
																									BgL_procz00_1071 =
																										BgL_ppzd2casezd2_3477;
																								}
																							else
																								{	/* Pp/pp.scm 421 */
																									bool_t BgL_testz00_5676;

																									{	/* Pp/pp.scm 421 */
																										bool_t
																											BgL__ortest_1845z00_1304;
																										BgL__ortest_1845z00_1304 =
																											(BgL_casezd2valuezd2_1291
																											==
																											BGl_symbol2542z00zz__ppz00);
																										if (BgL__ortest_1845z00_1304)
																											{	/* Pp/pp.scm 421 */
																												BgL_testz00_5676 =
																													BgL__ortest_1845z00_1304;
																											}
																										else
																											{	/* Pp/pp.scm 421 */
																												BgL_testz00_5676 =
																													(BgL_casezd2valuezd2_1291
																													==
																													BGl_symbol2544z00zz__ppz00);
																											}
																									}
																									if (BgL_testz00_5676)
																										{	/* Pp/pp.scm 421 */
																											BgL_procz00_1071 =
																												BgL_ppzd2andzd2_3476;
																										}
																									else
																										{	/* Pp/pp.scm 421 */
																											if (
																												(BgL_casezd2valuezd2_1291
																													==
																													BGl_symbol2546z00zz__ppz00))
																												{	/* Pp/pp.scm 421 */
																													BgL_procz00_1071 =
																														BgL_ppzd2letzd2_3475;
																												}
																											else
																												{	/* Pp/pp.scm 421 */
																													if (
																														(BgL_casezd2valuezd2_1291
																															==
																															BGl_symbol2548z00zz__ppz00))
																														{	/* Pp/pp.scm 421 */
																															BgL_procz00_1071 =
																																BgL_ppzd2beginzd2_3474;
																														}
																													else
																														{	/* Pp/pp.scm 421 */
																															if (
																																(BgL_casezd2valuezd2_1291
																																	==
																																	BGl_symbol2550z00zz__ppz00))
																																{	/* Pp/pp.scm 421 */
																																	BgL_procz00_1071
																																		=
																																		BgL_ppzd2dozd2_3473;
																																}
																															else
																																{	/* Pp/pp.scm 421 */
																																	if (
																																		(BgL_casezd2valuezd2_1291
																																			==
																																			BGl_symbol2488z00zz__ppz00))
																																		{	/* Pp/pp.scm 421 */
																																			BgL_procz00_1071
																																				=
																																				BgL_ppzd2commentzd2_3472;
																																		}
																																	else
																																		{	/* Pp/pp.scm 421 */
																																			BgL_procz00_1071
																																				=
																																				BFALSE;
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
										if (CBOOL(BgL_procz00_1071))
											{	/* Pp/pp.scm 267 */
												return
													PROCEDURE_ENTRY(BgL_procz00_1071) (BgL_procz00_1071,
													BgL_exprz00_1061, BgL_colz00_1062, BgL_extraz00_1063,
													BEOA);
											}
										else
											{	/* Pp/pp.scm 269 */
												bool_t BgL_testz00_5692;

												{	/* Pp/pp.scm 269 */
													long BgL_arg2079z00_1073;

													{	/* Pp/pp.scm 269 */
														obj_t BgL_arg2080z00_1074;

														BgL_arg2080z00_1074 =
															SYMBOL_TO_STRING(BgL_headz00_1069);
														BgL_arg2079z00_1073 =
															STRING_LENGTH(BgL_arg2080z00_1074);
													}
													BgL_testz00_5692 =
														(BgL_arg2079z00_1073 >
														(long) CINT(BgL_maxzd2callzd2headzd2widthzd2_3483));
												}
												if (BgL_testz00_5692)
													{	/* Pp/pp.scm 269 */
														return
															BGl_ppzd2generalzd2zz__ppz00
															(BgL_indentzd2generalzd2_3467, BgL_outputz00_3484,
															BgL_envz00_3465, BgL_displayzf3zf3_3470,
															BgL_maxzd2exprzd2widthz00_3469, BgL_widthz00_3468,
															BgL_maxzd2callzd2headzd2widthzd2_3483,
															BgL_ppzd2lambdazd2_3482, BgL_ppzd2definezd2_3481,
															BgL_ppzd2defunzd2_3480, BgL_ppzd2ifzd2_3479,
															BgL_ppzd2condzd2_3478, BgL_ppzd2casezd2_3477,
															BgL_ppzd2andzd2_3476, BgL_ppzd2letzd2_3475,
															BgL_ppzd2beginzd2_3474, BgL_ppzd2dozd2_3473,
															BgL_ppzd2commentzd2_3472,
															BgL_ppzd2exprzd2listz00_3471,
															BgL_ppzd2exprzd2defunz00_3466, BgL_exprz00_1061,
															BgL_colz00_1062, BgL_extraz00_1063, ((bool_t) 0),
															BFALSE, BFALSE, BgL_envz00_3465);
													}
												else
													{	/* Pp/pp.scm 272 */
														obj_t BgL_colza2za2_2381;

														BgL_colza2za2_2381 =
															BGl_wrz00zz__ppz00(BgL_displayzf3zf3_3470,
															BgL_outputz00_3484, CAR(BgL_exprz00_1061),
															BGl_outz00zz__ppz00(BgL_outputz00_3484,
																BGl_string2484z00zz__ppz00, BgL_colz00_1062));
														if (CBOOL(BgL_colz00_1062))
															{	/* Pp/pp.scm 272 */
																obj_t BgL_arg2082z00_2385;

																long BgL_arg2083z00_2386;

																BgL_arg2082z00_2385 = CDR(BgL_exprz00_1061);
																BgL_arg2083z00_2386 =
																	(
																	(long) CINT(BgL_colza2za2_2381) + ((long) 1));
																return
																	BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3484,
																	BgL_envz00_3465, BgL_displayzf3zf3_3470,
																	BgL_maxzd2exprzd2widthz00_3469,
																	BgL_widthz00_3468,
																	BgL_maxzd2callzd2headzd2widthzd2_3483,
																	BgL_ppzd2lambdazd2_3482,
																	BgL_ppzd2definezd2_3481,
																	BgL_ppzd2defunzd2_3480, BgL_ppzd2ifzd2_3479,
																	BgL_ppzd2condzd2_3478, BgL_ppzd2casezd2_3477,
																	BgL_ppzd2andzd2_3476, BgL_ppzd2letzd2_3475,
																	BgL_ppzd2beginzd2_3474, BgL_ppzd2dozd2_3473,
																	BgL_ppzd2commentzd2_3472,
																	BgL_ppzd2exprzd2listz00_3471,
																	BgL_indentzd2generalzd2_3467,
																	BgL_ppzd2exprzd2defunz00_3466,
																	BgL_arg2082z00_2385, BgL_colza2za2_2381,
																	BINT(BgL_arg2083z00_2386), BgL_extraz00_1063,
																	BgL_envz00_3465);
															}
														else
															{	/* Pp/pp.scm 272 */
																return BFALSE;
															}
													}
											}
									}
								else
									{	/* Pp/pp.scm 273 */
										obj_t BgL_colz00_2394;

										BgL_colz00_2394 =
											BGl_outz00zz__ppz00(BgL_outputz00_3484,
											BGl_string2484z00zz__ppz00, BgL_colz00_1062);
										return BGl_ppzd2downzd2zz__ppz00(BgL_outputz00_3484,
											BgL_envz00_3465, BgL_displayzf3zf3_3470,
											BgL_maxzd2exprzd2widthz00_3469, BgL_widthz00_3468,
											BgL_maxzd2callzd2headzd2widthzd2_3483,
											BgL_ppzd2lambdazd2_3482, BgL_ppzd2definezd2_3481,
											BgL_ppzd2defunzd2_3480, BgL_ppzd2ifzd2_3479,
											BgL_ppzd2condzd2_3478, BgL_ppzd2casezd2_3477,
											BgL_ppzd2andzd2_3476, BgL_ppzd2letzd2_3475,
											BgL_ppzd2beginzd2_3474, BgL_ppzd2dozd2_3473,
											BgL_ppzd2commentzd2_3472, BgL_ppzd2exprzd2listz00_3471,
											BgL_indentzd2generalzd2_3467,
											BgL_ppzd2exprzd2defunz00_3466, BgL_exprz00_1061,
											BgL_colz00_2394, BgL_colz00_2394, BgL_extraz00_1063,
											BgL_envz00_3465);
									}
							}
					}
				}
			}
		}
	}



/* <anonymous:2057> */
	obj_t BGl_zc3anonymousza32057ze3z83zz__ppz00(obj_t BgL_envz00_3488,
		obj_t BgL_strz00_3491)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 245 */
			{	/* Pp/pp.scm 246 */
				obj_t BgL_resultz00_3489;

				obj_t BgL_leftz00_3490;

				BgL_resultz00_3489 = PROCEDURE_REF(BgL_envz00_3488, (int) (((long) 0)));
				BgL_leftz00_3490 = PROCEDURE_REF(BgL_envz00_3488, (int) (((long) 1)));
				{
					obj_t BgL_strz00_1045;

					{	/* Pp/pp.scm 246 */
						bool_t BgL_auxz00_5714;

						BgL_strz00_1045 = BgL_strz00_3491;
						{	/* Pp/pp.scm 246 */
							obj_t BgL_auxz00_3492;

							BgL_auxz00_3492 =
								MAKE_PAIR(BgL_strz00_1045, CELL_REF(BgL_resultz00_3489));
							CELL_SET(BgL_resultz00_3489, BgL_auxz00_3492);
						}
						{	/* Pp/pp.scm 247 */
							obj_t BgL_auxz00_3493;

							BgL_auxz00_3493 =
								BINT(
								((long) CINT(CELL_REF(BgL_leftz00_3490)) -
									STRING_LENGTH(BgL_strz00_1045)));
							CELL_SET(BgL_leftz00_3490, BgL_auxz00_3493);
						}
						BgL_auxz00_5714 =
							((long) CINT(CELL_REF(BgL_leftz00_3490)) > ((long) 0));
						return BBOOL(BgL_auxz00_5714);
					}
				}
			}
		}
	}



/* <anonymous:1986> */
	obj_t BGl_zc3anonymousza31986ze3z83zz__ppz00(obj_t BgL_envz00_3494)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 190 */
			{	/* Pp/pp.scm 190 */
				obj_t BgL_objz00_3495;

				BgL_objz00_3495 = PROCEDURE_REF(BgL_envz00_3494, (int) (((long) 0)));
				{

					{	/* Pp/pp.scm 190 */
						obj_t BgL_arg1987z00_2044;

						{	/* Pp/pp.scm 190 */
							obj_t BgL_res2460z00_2046;

							{	/* Pp/pp.scm 190 */
								obj_t BgL_auxz00_5725;

								BgL_auxz00_5725 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2460z00_2046 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5725);
							}
							BgL_arg1987z00_2044 = BgL_res2460z00_2046;
						}
						return bgl_display_obj(BgL_objz00_3495, BgL_arg1987z00_2044);
					}
				}
			}
		}
	}



/* reverse-string-append */
	obj_t BGl_reversezd2stringzd2appendz00zz__ppz00(obj_t BgL_lz00_8)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 446 */
			return BGl_revzd2stringzd2appendz00zz__ppz00(BgL_lz00_8, ((long) 0));
		}
	}



/* rev-string-append */
	obj_t BGl_revzd2stringzd2appendz00zz__ppz00(obj_t BgL_lz00_1344,
		long BgL_iz00_1345)
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 459 */
			if (PAIRP(BgL_lz00_1344))
				{	/* Pp/pp.scm 450 */
					obj_t BgL_strz00_1348;

					BgL_strz00_1348 = CAR(BgL_lz00_1344);
					{	/* Pp/pp.scm 450 */
						long BgL_lenz00_1349;

						BgL_lenz00_1349 = STRING_LENGTH(BgL_strz00_1348);
						{	/* Pp/pp.scm 451 */
							obj_t BgL_resultz00_1350;

							BgL_resultz00_1350 =
								BGl_revzd2stringzd2appendz00zz__ppz00(CDR(BgL_lz00_1344),
								(BgL_iz00_1345 + BgL_lenz00_1349));
							{	/* Pp/pp.scm 452 */

								{	/* Pp/pp.scm 453 */
									long BgL_g1846z00_1351;

									BgL_g1846z00_1351 =
										(
										(STRING_LENGTH(BgL_resultz00_1350) - BgL_iz00_1345) -
										BgL_lenz00_1349);
									{
										long BgL_jz00_2817;

										long BgL_kz00_2818;

										BgL_jz00_2817 = ((long) 0);
										BgL_kz00_2818 = BgL_g1846z00_1351;
									BgL_loopz00_2816:
										if ((BgL_jz00_2817 < BgL_lenz00_1349))
											{	/* Pp/pp.scm 453 */
												{	/* Pp/pp.scm 453 */
													unsigned char BgL_auxz00_5742;

													BgL_auxz00_5742 =
														STRING_REF(BgL_strz00_1348, BgL_jz00_2817);
													STRING_SET(BgL_resultz00_1350, BgL_kz00_2818,
														BgL_auxz00_5742);
												}
												{
													long BgL_kz00_5747;

													long BgL_jz00_5745;

													BgL_jz00_5745 = (BgL_jz00_2817 + ((long) 1));
													BgL_kz00_5747 = (BgL_kz00_2818 + ((long) 1));
													BgL_kz00_2818 = BgL_kz00_5747;
													BgL_jz00_2817 = BgL_jz00_5745;
													goto BgL_loopz00_2816;
												}
											}
										else
											{	/* Pp/pp.scm 453 */
												return BgL_resultz00_1350;
											}
									}
								}
							}
						}
					}
				}
			else
				{	/* Pp/pp.scm 449 */
					return make_string(BgL_iz00_1345, ((unsigned char) ' '));
		}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__ppz00()
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__ppz00()
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ppz00()
	{
		AN_OBJECT;
		{	/* Pp/pp.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2552z00zz__ppz00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2552z00zz__ppz00));
		}
	}

#ifdef __cplusplus
}
#endif
