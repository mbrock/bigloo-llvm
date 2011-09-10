/*===========================================================================*/
/*   (Rgc/rgccompile.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgccompile.scm -indent -o objs/obj_u/Rgc/rgccompile.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	extern obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	extern int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int);
	extern obj_t BGl_rgcsetzd2removez12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_splitzd2transitionszd2zz__rgc_compilez00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_compilezd2casezd2transitionz00zz__rgc_compilez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_compilez00();
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_compilezd2submatcheszd2zz__rgc_compilez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_compilez00();
	extern obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_compilez00();
	static obj_t BGl_insortz00zz__rgc_compilez00(int, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00();
	extern obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	static obj_t BGl_compilezd2statezd2zz__rgc_compilez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2rgczd2optimza2zd2zz__rgc_configz00;
	extern obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	static obj_t BGl_compilezd2condzd2testz00zz__rgc_compilez00(obj_t, obj_t,
		long);
	static obj_t BGl__compilezd2dfazd2zz__rgc_compilez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_compilez00();
	extern long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t);
	extern long bgl_list_length(obj_t);
	extern obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	extern bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t, long);
	static obj_t BGl_zc3anonymousza32471ze3z83zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__rgc_compilez00(obj_t);
	extern bool_t BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int);
	static obj_t BGl_compilezd2casezd2regularz00zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00(obj_t);
	static obj_t BGl_compilezd2condzd2regularz00zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_compilezd2matchzd2zz__rgc_compilez00(obj_t);
	extern bool_t BGl_statezf3zf3zz__rgc_dfaz00(obj_t);
	static obj_t BGl_compilezd2memberzd2testz00zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_symbol2846z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_statezd2transitionzd2listz00zz__rgc_compilez00(obj_t);
	static obj_t BGl_symbol2848z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2850z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t);
	static obj_t BGl_symbol2852z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2854z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2856z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2858z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2860z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2862z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2864z00zz__rgc_compilez00 = BUNSPEC;
	extern bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int);
	static obj_t BGl_symbol2866z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2868z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2870z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2872z00zz__rgc_compilez00 = BUNSPEC;
	static long BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00;
	static obj_t BGl_symbol2874z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_charzd2rangezd2ze3testze3zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_symbol2876z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2878z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2880z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2882z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2884z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2886z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2888z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2900z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2890z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2902z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2892z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2894z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2896z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_compilezd2rangezd2testz00zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_symbol2898z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_compilezd2regularzd2zz__rgc_compilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__rgc_compilez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2847z00zz__rgc_compilez00,
		BgL_bgl_string2847za700za7za7_2907za7, "define", 6);
	      DEFINE_STRING(BGl_string2849z00zz__rgc_compilez00,
		BgL_bgl_string2849za700za7za7_2908za7, "last-match", 10);
	      DEFINE_STRING(BGl_string2851z00zz__rgc_compilez00,
		BgL_bgl_string2851za700za7za7_2909za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2853z00zz__rgc_compilez00,
		BgL_bgl_string2853za700za7za7_2910za7, "let", 3);
	      DEFINE_STRING(BGl_string2855z00zz__rgc_compilez00,
		BgL_bgl_string2855za700za7za7_2911za7, "new-match", 9);
	      DEFINE_STRING(BGl_string2857z00zz__rgc_compilez00,
		BgL_bgl_string2857za700za7za7_2912za7, "current-char::int", 17);
	      DEFINE_STRING(BGl_string2859z00zz__rgc_compilez00,
		BgL_bgl_string2859za700za7za7_2913za7, "rgc-buffer-get-char", 19);
	      DEFINE_STRING(BGl_string2861z00zz__rgc_compilez00,
		BgL_bgl_string2861za700za7za7_2914za7, "current-char", 12);
	      DEFINE_STRING(BGl_string2863z00zz__rgc_compilez00,
		BgL_bgl_string2863za700za7za7_2915za7, "if", 2);
	      DEFINE_STRING(BGl_string2865z00zz__rgc_compilez00,
		BgL_bgl_string2865za700za7za7_2916za7, "rgc-buffer-empty?", 17);
	      DEFINE_STRING(BGl_string2867z00zz__rgc_compilez00,
		BgL_bgl_string2867za700za7za7_2917za7, "rgc-fill-buffer", 15);
	      DEFINE_STRING(BGl_string2869z00zz__rgc_compilez00,
		BgL_bgl_string2869za700za7za7_2918za7, "rgc-fill-buffer-if-empty", 24);
	      DEFINE_STRING(BGl_string2871z00zz__rgc_compilez00,
		BgL_bgl_string2871za700za7za7_2919za7, "case", 4);
	      DEFINE_STRING(BGl_string2873z00zz__rgc_compilez00,
		BgL_bgl_string2873za700za7za7_2920za7, "else", 4);
	      DEFINE_STRING(BGl_string2875z00zz__rgc_compilez00,
		BgL_bgl_string2875za700za7za7_2921za7, "=fx", 3);
	      DEFINE_STRING(BGl_string2877z00zz__rgc_compilez00,
		BgL_bgl_string2877za700za7za7_2922za7, "cond", 4);
	      DEFINE_STRING(BGl_string2879z00zz__rgc_compilez00,
		BgL_bgl_string2879za700za7za7_2923za7, "not", 3);
	      DEFINE_STRING(BGl_string2881z00zz__rgc_compilez00,
		BgL_bgl_string2881za700za7za7_2924za7, "or", 2);
	      DEFINE_STRING(BGl_string2883z00zz__rgc_compilez00,
		BgL_bgl_string2883za700za7za7_2925za7, ">=fx", 4);
	      DEFINE_STRING(BGl_string2885z00zz__rgc_compilez00,
		BgL_bgl_string2885za700za7za7_2926za7, "<fx", 3);
	      DEFINE_STRING(BGl_string2887z00zz__rgc_compilez00,
		BgL_bgl_string2887za700za7za7_2927za7, "and", 3);
	      DEFINE_STRING(BGl_string2889z00zz__rgc_compilez00,
		BgL_bgl_string2889za700za7za7_2928za7, "begin", 5);
	      DEFINE_STRING(BGl_string2901z00zz__rgc_compilez00,
		BgL_bgl_string2901za700za7za7_2929za7, "rgc-submatch-start!", 19);
	      DEFINE_STRING(BGl_string2891z00zz__rgc_compilez00,
		BgL_bgl_string2891za700za7za7_2930za7, "rgc-stop-match!", 15);
	      DEFINE_STRING(BGl_string2903z00zz__rgc_compilez00,
		BgL_bgl_string2903za700za7za7_2931za7, "rgc-submatch-stop!", 18);
	      DEFINE_STRING(BGl_string2893z00zz__rgc_compilez00,
		BgL_bgl_string2893za700za7za7_2932za7, "<=fx", 4);
	      DEFINE_STRING(BGl_string2904z00zz__rgc_compilez00,
		BgL_bgl_string2904za700za7za7_2933za7, "compile-submatches", 18);
	      DEFINE_STRING(BGl_string2905z00zz__rgc_compilez00,
		BgL_bgl_string2905za700za7za7_2934za7, "Illegal char description", 24);
	      DEFINE_STRING(BGl_string2895z00zz__rgc_compilez00,
		BgL_bgl_string2895za700za7za7_2935za7, "memq", 4);
	      DEFINE_STRING(BGl_string2906z00zz__rgc_compilez00,
		BgL_bgl_string2906za700za7za7_2936za7, "__rgc_compile", 13);
	      DEFINE_STRING(BGl_string2897z00zz__rgc_compilez00,
		BgL_bgl_string2897za700za7za7_2937za7, "quote", 5);
	      DEFINE_STRING(BGl_string2899z00zz__rgc_compilez00,
		BgL_bgl_string2899za700za7za7_2938za7, "rgc-submatch-start*!", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilezd2dfazd2envz00zz__rgc_compilez00,
		BgL_bgl__compileza7d2dfaza7d2939z00,
		BGl__compilezd2dfazd2zz__rgc_compilez00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long
		BgL_checksumz00_2961, char *BgL_fromz00_2962)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_compilez00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_compilez00();
					BGl_importedzd2moduleszd2initz00zz__rgc_compilez00();
					BGl_toplevelzd2initzd2zz__rgc_compilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 15 */
			BGl_symbol2846z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2847z00zz__rgc_compilez00);
			BGl_symbol2848z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2849z00zz__rgc_compilez00);
			BGl_symbol2850z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2851z00zz__rgc_compilez00);
			BGl_symbol2852z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2853z00zz__rgc_compilez00);
			BGl_symbol2854z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2855z00zz__rgc_compilez00);
			BGl_symbol2856z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2857z00zz__rgc_compilez00);
			BGl_symbol2858z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2859z00zz__rgc_compilez00);
			BGl_symbol2860z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2861z00zz__rgc_compilez00);
			BGl_symbol2862z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2863z00zz__rgc_compilez00);
			BGl_symbol2864z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2865z00zz__rgc_compilez00);
			BGl_symbol2866z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2867z00zz__rgc_compilez00);
			BGl_symbol2868z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2869z00zz__rgc_compilez00);
			BGl_symbol2870z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2871z00zz__rgc_compilez00);
			BGl_symbol2872z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2873z00zz__rgc_compilez00);
			BGl_symbol2874z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2875z00zz__rgc_compilez00);
			BGl_symbol2876z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2877z00zz__rgc_compilez00);
			BGl_symbol2878z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2879z00zz__rgc_compilez00);
			BGl_symbol2880z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2881z00zz__rgc_compilez00);
			BGl_symbol2882z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2883z00zz__rgc_compilez00);
			BGl_symbol2884z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2885z00zz__rgc_compilez00);
			BGl_symbol2886z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2887z00zz__rgc_compilez00);
			BGl_symbol2888z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2889z00zz__rgc_compilez00);
			BGl_symbol2890z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2891z00zz__rgc_compilez00);
			BGl_symbol2892z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2893z00zz__rgc_compilez00);
			BGl_symbol2894z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2895z00zz__rgc_compilez00);
			BGl_symbol2896z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2897z00zz__rgc_compilez00);
			BGl_symbol2898z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2899z00zz__rgc_compilez00);
			BGl_symbol2900z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2901z00zz__rgc_compilez00);
			return (BGl_symbol2902z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2903z00zz__rgc_compilez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 15 */
			if (CBOOL(BGl_za2rgczd2optimza2zd2zz__rgc_configz00))
				{	/* Rgc/rgccompile.scm 74 */
					BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00 =
						(((long) 80) / ((long) 2));
				}
			else
				{	/* Rgc/rgccompile.scm 74 */
					BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00 = ((long) 80);
				}
			return (BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* compile-dfa */
	BGL_EXPORTED_DEF obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t
		BgL_submatchesz00_1, obj_t BgL_statesz00_2, obj_t BgL_positionsz00_3)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 56 */
			BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00();
			{	/* Rgc/rgccompile.scm 58 */
				obj_t BgL_resz00_805;

				if (NULLP(BgL_statesz00_2))
					{	/* Rgc/rgccompile.scm 58 */
						BgL_resz00_805 = BNIL;
					}
				else
					{	/* Rgc/rgccompile.scm 58 */
						obj_t BgL_head1862z00_808;

						BgL_head1862z00_808 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l1860z00_810;

							obj_t BgL_tail1863z00_811;

							BgL_l1860z00_810 = BgL_statesz00_2;
							BgL_tail1863z00_811 = BgL_head1862z00_808;
						BgL_zc3anonymousza31949ze3z83_812:
							if (NULLP(BgL_l1860z00_810))
								{	/* Rgc/rgccompile.scm 58 */
									BgL_resz00_805 = CDR(BgL_head1862z00_808);
								}
							else
								{	/* Rgc/rgccompile.scm 58 */
									obj_t BgL_newtail1864z00_814;

									BgL_newtail1864z00_814 =
										MAKE_PAIR(BGl_compilezd2statezd2zz__rgc_compilez00
										(BgL_submatchesz00_1, CAR(BgL_l1860z00_810),
											BgL_positionsz00_3), BNIL);
									SET_CDR(BgL_tail1863z00_811, BgL_newtail1864z00_814);
									{
										obj_t BgL_tail1863z00_3014;

										obj_t BgL_l1860z00_3012;

										BgL_l1860z00_3012 = CDR(BgL_l1860z00_810);
										BgL_tail1863z00_3014 = BgL_newtail1864z00_814;
										BgL_tail1863z00_811 = BgL_tail1863z00_3014;
										BgL_l1860z00_810 = BgL_l1860z00_3012;
										goto BgL_zc3anonymousza31949ze3z83_812;
									}
								}
						}
					}
				BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 = BUNSPEC;
				return BgL_resz00_805;
			}
		}
	}



/* _compile-dfa */
	obj_t BGl__compilezd2dfazd2zz__rgc_compilez00(obj_t BgL_envz00_2947,
		obj_t BgL_submatchesz00_2948, obj_t BgL_statesz00_2949,
		obj_t BgL_positionsz00_2950)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 56 */
			return
				BGl_compilezd2dfazd2zz__rgc_compilez00(BgL_submatchesz00_2948,
				BgL_statesz00_2949, BgL_positionsz00_2950);
		}
	}



/* compile-state */
	obj_t BGl_compilezd2statezd2zz__rgc_compilez00(obj_t BgL_submatchesz00_4,
		obj_t BgL_statez00_5, obj_t BgL_positionszd2tozd2charz00_6)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 92 */
			{	/* Rgc/rgccompile.scm 96 */
				obj_t BgL_arg1954z00_820;

				obj_t BgL_arg1955z00_821;

				BgL_arg1954z00_820 = BGl_symbol2846z00zz__rgc_compilez00;
				{	/* Rgc/rgccompile.scm 96 */
					obj_t BgL_arg1956z00_822;

					obj_t BgL_arg1957z00_823;

					{	/* Rgc/rgccompile.scm 96 */
						obj_t BgL_arg1961z00_827;

						obj_t BgL_arg1962z00_828;

						BgL_arg1961z00_827 =
							BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_5);
						{	/* Rgc/rgccompile.scm 96 */
							obj_t BgL_list1963z00_829;

							{	/* Rgc/rgccompile.scm 96 */
								obj_t BgL_arg1965z00_830;

								obj_t BgL_arg1966z00_831;

								BgL_arg1965z00_830 = BGl_symbol2848z00zz__rgc_compilez00;
								BgL_arg1966z00_831 = MAKE_PAIR(BNIL, BNIL);
								BgL_list1963z00_829 =
									MAKE_PAIR(BgL_arg1965z00_830, BgL_arg1966z00_831);
							}
							BgL_arg1962z00_828 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_symbol2850z00zz__rgc_compilez00, BgL_list1963z00_829);
						}
						BgL_arg1956z00_822 =
							MAKE_PAIR(BgL_arg1961z00_827, BgL_arg1962z00_828);
					}
					{	/* Rgc/rgccompile.scm 97 */
						obj_t BgL_transitionsz00_832;

						obj_t BgL_positionsz00_833;

						BgL_transitionsz00_832 =
							BGl_statezd2transitionszd2zz__rgc_dfaz00(BgL_statez00_5);
						BgL_positionsz00_833 =
							BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_statez00_5);
						if (NULLP(BgL_transitionsz00_832))
							{	/* Rgc/rgccompile.scm 99 */
								BgL_arg1957z00_823 = BGl_symbol2848z00zz__rgc_compilez00;
							}
						else
							{	/* Rgc/rgccompile.scm 101 */
								obj_t BgL_specialzd2transzd2_835;

								BgL_specialzd2transzd2_835 =
									BGl_splitzd2transitionszd2zz__rgc_compilez00
									(BgL_transitionsz00_832);
								{	/* Rgc/rgccompile.scm 103 */
									obj_t BgL_regularzd2transzd2_836;

									{	/* Rgc/rgccompile.scm 103 */
										int BgL_auxz00_3026;

										BgL_auxz00_3026 = (int) (((long) 1));
										BgL_regularzd2transzd2_836 =
											BGL_MVALUES_VAL(BgL_auxz00_3026);
									}
									{	/* Rgc/rgccompile.scm 103 */
										obj_t BgL_matchzd2bodyzd2_837;

										BgL_matchzd2bodyzd2_837 =
											BGl_compilezd2matchzd2zz__rgc_compilez00
											(BgL_specialzd2transzd2_835);
										if (CBOOL(BgL_matchzd2bodyzd2_837))
											{	/* Rgc/rgccompile.scm 105 */
												obj_t BgL_arg1968z00_838;

												obj_t BgL_arg1969z00_839;

												BgL_arg1968z00_838 =
													BGl_symbol2852z00zz__rgc_compilez00;
												{	/* Rgc/rgccompile.scm 105 */
													obj_t BgL_arg1970z00_840;

													obj_t BgL_arg1971z00_841;

													{	/* Rgc/rgccompile.scm 105 */
														obj_t BgL_arg1975z00_845;

														{	/* Rgc/rgccompile.scm 105 */
															obj_t BgL_arg1977z00_847;

															obj_t BgL_arg1979z00_848;

															BgL_arg1977z00_847 =
																BGl_symbol2854z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 105 */
																obj_t BgL_list1980z00_849;

																BgL_list1980z00_849 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1979z00_848 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_matchzd2bodyzd2_837,
																	BgL_list1980z00_849);
															}
															BgL_arg1975z00_845 =
																MAKE_PAIR(BgL_arg1977z00_847,
																BgL_arg1979z00_848);
														}
														BgL_arg1970z00_840 =
															MAKE_PAIR(BgL_arg1975z00_845, BNIL);
													}
													BgL_arg1971z00_841 =
														BGl_compilezd2regularzd2zz__rgc_compilez00
														(BgL_submatchesz00_4, BgL_statez00_5,
														BgL_regularzd2transzd2_836,
														BGl_symbol2854z00zz__rgc_compilez00,
														BgL_positionszd2tozd2charz00_6);
													{	/* Rgc/rgccompile.scm 105 */
														obj_t BgL_list1973z00_843;

														{	/* Rgc/rgccompile.scm 105 */
															obj_t BgL_arg1974z00_844;

															BgL_arg1974z00_844 = MAKE_PAIR(BNIL, BNIL);
															BgL_list1973z00_843 =
																MAKE_PAIR(BgL_arg1971z00_841,
																BgL_arg1974z00_844);
														}
														BgL_arg1969z00_839 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1970z00_840, BgL_list1973z00_843);
													}
												}
												BgL_arg1957z00_823 =
													MAKE_PAIR(BgL_arg1968z00_838, BgL_arg1969z00_839);
											}
										else
											{	/* Rgc/rgccompile.scm 104 */
												BgL_arg1957z00_823 =
													BGl_compilezd2regularzd2zz__rgc_compilez00
													(BgL_submatchesz00_4, BgL_statez00_5,
													BgL_regularzd2transzd2_836,
													BGl_symbol2848z00zz__rgc_compilez00,
													BgL_positionszd2tozd2charz00_6);
											}
									}
								}
							}
					}
					{	/* Rgc/rgccompile.scm 96 */
						obj_t BgL_list1959z00_825;

						{	/* Rgc/rgccompile.scm 96 */
							obj_t BgL_arg1960z00_826;

							BgL_arg1960z00_826 = MAKE_PAIR(BNIL, BNIL);
							BgL_list1959z00_825 =
								MAKE_PAIR(BgL_arg1957z00_823, BgL_arg1960z00_826);
						}
						BgL_arg1955z00_821 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1956z00_822,
							BgL_list1959z00_825);
					}
				}
				return MAKE_PAIR(BgL_arg1954z00_820, BgL_arg1955z00_821);
			}
		}
	}



/* split-transitions */
	obj_t BGl_splitzd2transitionszd2zz__rgc_compilez00(obj_t BgL_transitionsz00_7)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 123 */
			{
				obj_t BgL_transitionsz00_853;

				obj_t BgL_specialsz00_854;

				obj_t BgL_regularsz00_855;

				BgL_transitionsz00_853 = BgL_transitionsz00_7;
				BgL_specialsz00_854 = BNIL;
				BgL_regularsz00_855 = BNIL;
			BgL_zc3anonymousza31981ze3z83_856:
				if (NULLP(BgL_transitionsz00_853))
					{	/* Rgc/rgccompile.scm 128 */
						{	/* Rgc/rgccompile.scm 129 */
							int BgL_auxz00_3048;

							BgL_auxz00_3048 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3048);
						}
						{	/* Rgc/rgccompile.scm 129 */
							int BgL_auxz00_3051;

							BgL_auxz00_3051 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3051, BgL_regularsz00_855);
						}
						return BgL_specialsz00_854;
					}
				else
					{	/* Rgc/rgccompile.scm 130 */
						bool_t BgL_testz00_3054;

						{	/* Rgc/rgccompile.scm 130 */
							obj_t BgL_arg1990z00_867;

							BgL_arg1990z00_867 = CAR(CAR(BgL_transitionsz00_853));
							BgL_testz00_3054 =
								BGl_specialzd2charzf3z21zz__rgc_rulesz00(CINT
								(BgL_arg1990z00_867));
						}
						if (BgL_testz00_3054)
							{	/* Rgc/rgccompile.scm 131 */
								obj_t BgL_arg1984z00_861;

								obj_t BgL_arg1985z00_862;

								BgL_arg1984z00_861 = CDR(BgL_transitionsz00_853);
								BgL_arg1985z00_862 =
									MAKE_PAIR(CAR(BgL_transitionsz00_853), BgL_specialsz00_854);
								{
									obj_t BgL_specialsz00_3063;

									obj_t BgL_transitionsz00_3062;

									BgL_transitionsz00_3062 = BgL_arg1984z00_861;
									BgL_specialsz00_3063 = BgL_arg1985z00_862;
									BgL_specialsz00_854 = BgL_specialsz00_3063;
									BgL_transitionsz00_853 = BgL_transitionsz00_3062;
									goto BgL_zc3anonymousza31981ze3z83_856;
								}
							}
						else
							{	/* Rgc/rgccompile.scm 135 */
								obj_t BgL_arg1987z00_864;

								obj_t BgL_arg1988z00_865;

								BgL_arg1987z00_864 = CDR(BgL_transitionsz00_853);
								BgL_arg1988z00_865 =
									MAKE_PAIR(CAR(BgL_transitionsz00_853), BgL_regularsz00_855);
								{
									obj_t BgL_regularsz00_3068;

									obj_t BgL_transitionsz00_3067;

									BgL_transitionsz00_3067 = BgL_arg1987z00_864;
									BgL_regularsz00_3068 = BgL_arg1988z00_865;
									BgL_regularsz00_855 = BgL_regularsz00_3068;
									BgL_transitionsz00_853 = BgL_transitionsz00_3067;
									goto BgL_zc3anonymousza31981ze3z83_856;
								}
							}
					}
			}
		}
	}



/* compile-regular */
	obj_t BGl_compilezd2regularzd2zz__rgc_compilez00(obj_t BgL_submatchesz00_8,
		obj_t BgL_currentzd2statezd2_9, obj_t BgL_transitionsz00_10,
		obj_t BgL_lastzd2matchzd2_11, obj_t BgL_pzd2ze3cz31_12)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 142 */
			{	/* Rgc/rgccompile.scm 145 */
				obj_t BgL_statezd2transzd2_870;

				obj_t BgL_positionsz00_871;

				BgL_statezd2transzd2_870 =
					BGl_statezd2transitionzd2listz00zz__rgc_compilez00
					(BgL_transitionsz00_10);
				BgL_positionsz00_871 =
					BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_currentzd2statezd2_9);
				if (NULLP(BgL_statezd2transzd2_870))
					{	/* Rgc/rgccompile.scm 147 */
						return BgL_lastzd2matchzd2_11;
					}
				else
					{	/* Rgc/rgccompile.scm 152 */
						obj_t BgL_arg1993z00_873;

						obj_t BgL_arg1994z00_874;

						BgL_arg1993z00_873 = BGl_symbol2852z00zz__rgc_compilez00;
						{	/* Rgc/rgccompile.scm 152 */
							obj_t BgL_arg1995z00_875;

							obj_t BgL_arg1996z00_876;

							{	/* Rgc/rgccompile.scm 152 */
								obj_t BgL_arg1998z00_878;

								{	/* Rgc/rgccompile.scm 152 */
									obj_t BgL_arg2000z00_880;

									obj_t BgL_arg2001z00_881;

									BgL_arg2000z00_880 = BGl_symbol2856z00zz__rgc_compilez00;
									{	/* Rgc/rgccompile.scm 152 */
										obj_t BgL_arg2002z00_882;

										{	/* Rgc/rgccompile.scm 152 */
											obj_t BgL_arg2005z00_885;

											obj_t BgL_arg2006z00_886;

											BgL_arg2005z00_885 = BGl_symbol2858z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 152 */
												obj_t BgL_list2007z00_887;

												BgL_list2007z00_887 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2006z00_886 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol2850z00zz__rgc_compilez00,
													BgL_list2007z00_887);
											}
											BgL_arg2002z00_882 =
												MAKE_PAIR(BgL_arg2005z00_885, BgL_arg2006z00_886);
										}
										{	/* Rgc/rgccompile.scm 152 */
											obj_t BgL_list2004z00_884;

											BgL_list2004z00_884 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2001z00_881 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2002z00_882, BgL_list2004z00_884);
										}
									}
									BgL_arg1998z00_878 =
										MAKE_PAIR(BgL_arg2000z00_880, BgL_arg2001z00_881);
								}
								BgL_arg1995z00_875 = MAKE_PAIR(BgL_arg1998z00_878, BNIL);
							}
							{	/* Rgc/rgccompile.scm 153 */
								obj_t BgL_arg2008z00_888;

								obj_t BgL_arg2009z00_889;

								BgL_arg2008z00_888 =
									BGl_compilezd2submatcheszd2zz__rgc_compilez00
									(BGl_symbol2860z00zz__rgc_compilez00, BgL_submatchesz00_8,
									BgL_positionsz00_871, BgL_pzd2ze3cz31_12);
								{	/* Rgc/rgccompile.scm 157 */
									obj_t BgL_arg2010z00_890;

									if (
										(bgl_list_length(BgL_statezd2transzd2_870) <= ((long) 12)))
										{	/* Rgc/rgccompile.scm 157 */
											BgL_arg2010z00_890 =
												BGl_compilezd2condzd2regularz00zz__rgc_compilez00
												(BgL_currentzd2statezd2_9, BgL_statezd2transzd2_870,
												BgL_lastzd2matchzd2_11);
										}
									else
										{	/* Rgc/rgccompile.scm 157 */
											BgL_arg2010z00_890 =
												BGl_compilezd2casezd2regularz00zz__rgc_compilez00
												(BgL_currentzd2statezd2_9, BgL_statezd2transzd2_870,
												BgL_lastzd2matchzd2_11);
										}
									BgL_arg2009z00_889 = MAKE_PAIR(BgL_arg2010z00_890, BNIL);
								}
								BgL_arg1996z00_876 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2008z00_888, BgL_arg2009z00_889);
							}
							{	/* Rgc/rgccompile.scm 152 */
								obj_t BgL_list1997z00_877;

								BgL_list1997z00_877 = MAKE_PAIR(BgL_arg1996z00_876, BNIL);
								BgL_arg1994z00_874 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1995z00_875, BgL_list1997z00_877);
							}
						}
						return MAKE_PAIR(BgL_arg1993z00_873, BgL_arg1994z00_874);
					}
			}
		}
	}



/* compile-case-regular */
	obj_t BGl_compilezd2casezd2regularz00zz__rgc_compilez00(obj_t
		BgL_currentzd2statezd2_15, obj_t BgL_statezd2transzd2_16,
		obj_t BgL_matchz00_17)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 174 */
			{	/* Rgc/rgccompile.scm 195 */
				obj_t BgL_sentinelzd2matchzd2_899;

				BgL_sentinelzd2matchzd2_899 = MAKE_CELL(BFALSE);
				{

					{	/* Rgc/rgccompile.scm 195 */
						obj_t BgL_arg2021z00_902;

						obj_t BgL_arg2022z00_903;

						BgL_arg2021z00_902 = BGl_symbol2870z00zz__rgc_compilez00;
						{	/* Rgc/rgccompile.scm 195 */
							obj_t BgL_arg2023z00_904;

							obj_t BgL_arg2024z00_905;

							BgL_arg2023z00_904 = BGl_symbol2860z00zz__rgc_compilez00;
							{	/* Rgc/rgccompile.scm 196 */
								obj_t BgL_arg2027z00_907;

								obj_t BgL_arg2028z00_908;

								if (NULLP(BgL_statezd2transzd2_16))
									{	/* Rgc/rgccompile.scm 196 */
										BgL_arg2027z00_907 = BNIL;
									}
								else
									{	/* Rgc/rgccompile.scm 196 */
										obj_t BgL_head1869z00_911;

										BgL_head1869z00_911 =
											MAKE_PAIR
											(BGl_compilezd2casezd2transitionz00zz__rgc_compilez00
											(BgL_matchz00_17, BgL_sentinelzd2matchzd2_899,
												CAR(BgL_statezd2transzd2_16)), BNIL);
										{	/* Rgc/rgccompile.scm 196 */
											obj_t BgL_g1872z00_912;

											BgL_g1872z00_912 = CDR(BgL_statezd2transzd2_16);
											{
												obj_t BgL_l1867z00_2151;

												obj_t BgL_tail1870z00_2152;

												BgL_l1867z00_2151 = BgL_g1872z00_912;
												BgL_tail1870z00_2152 = BgL_head1869z00_911;
											BgL_zc3anonymousza32030ze3z83_2150:
												if (NULLP(BgL_l1867z00_2151))
													{	/* Rgc/rgccompile.scm 196 */
														BgL_arg2027z00_907 = BgL_head1869z00_911;
													}
												else
													{	/* Rgc/rgccompile.scm 196 */
														obj_t BgL_newtail1871z00_2160;

														BgL_newtail1871z00_2160 =
															MAKE_PAIR
															(BGl_compilezd2casezd2transitionz00zz__rgc_compilez00
															(BgL_matchz00_17, BgL_sentinelzd2matchzd2_899,
																CAR(BgL_l1867z00_2151)), BNIL);
														SET_CDR(BgL_tail1870z00_2152,
															BgL_newtail1871z00_2160);
														{
															obj_t BgL_tail1870z00_3105;

															obj_t BgL_l1867z00_3103;

															BgL_l1867z00_3103 = CDR(BgL_l1867z00_2151);
															BgL_tail1870z00_3105 = BgL_newtail1871z00_2160;
															BgL_tail1870z00_2152 = BgL_tail1870z00_3105;
															BgL_l1867z00_2151 = BgL_l1867z00_3103;
															goto BgL_zc3anonymousza32030ze3z83_2150;
														}
													}
											}
										}
									}
								{	/* Rgc/rgccompile.scm 197 */
									obj_t BgL_arg2041z00_927;

									obj_t BgL_arg2042z00_928;

									if (BGl_statezf3zf3zz__rgc_dfaz00(CELL_REF
											(BgL_sentinelzd2matchzd2_899)))
										{	/* Rgc/rgccompile.scm 178 */
											obj_t BgL_arg2051z00_937;

											obj_t BgL_arg2052z00_938;

											BgL_arg2051z00_937 = MAKE_PAIR(BINT(((long) 0)), BNIL);
											{	/* Rgc/rgccompile.scm 178 */
												obj_t BgL_arg2053z00_939;

												{	/* Rgc/rgccompile.scm 178 */
													obj_t BgL_arg2056z00_942;

													obj_t BgL_arg2057z00_943;

													BgL_arg2056z00_942 =
														BGl_symbol2862z00zz__rgc_compilez00;
													{	/* Rgc/rgccompile.scm 178 */
														obj_t BgL_arg2058z00_944;

														obj_t BgL_arg2059z00_945;

														obj_t BgL_arg2060z00_946;

														{	/* Rgc/rgccompile.scm 178 */
															obj_t BgL_arg2065z00_951;

															obj_t BgL_arg2066z00_952;

															BgL_arg2065z00_951 =
																BGl_symbol2864z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 178 */
																obj_t BgL_list2067z00_953;

																BgL_list2067z00_953 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2066z00_952 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol2850z00zz__rgc_compilez00,
																	BgL_list2067z00_953);
															}
															BgL_arg2058z00_944 =
																MAKE_PAIR(BgL_arg2065z00_951,
																BgL_arg2066z00_952);
														}
														{	/* Rgc/rgccompile.scm 179 */
															obj_t BgL_arg2068z00_954;

															obj_t BgL_arg2069z00_955;

															BgL_arg2068z00_954 =
																BGl_symbol2862z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 179 */
																obj_t BgL_arg2070z00_956;

																obj_t BgL_arg2072z00_957;

																{	/* Rgc/rgccompile.scm 179 */
																	obj_t BgL_arg2078z00_962;

																	obj_t BgL_arg2079z00_963;

																	BgL_arg2078z00_962 =
																		BGl_symbol2866z00zz__rgc_compilez00;
																	{	/* Rgc/rgccompile.scm 179 */
																		obj_t BgL_list2080z00_964;

																		BgL_list2080z00_964 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2079z00_963 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol2850z00zz__rgc_compilez00,
																			BgL_list2080z00_964);
																	}
																	BgL_arg2070z00_956 =
																		MAKE_PAIR(BgL_arg2078z00_962,
																		BgL_arg2079z00_963);
																}
																{	/* Rgc/rgccompile.scm 180 */
																	obj_t BgL_matchz00_2201;

																	BgL_matchz00_2201 =
																		BGl_symbol2848z00zz__rgc_compilez00;
																	{	/* Rgc/rgccompile.scm 180 */
																		obj_t BgL_arg2016z00_2202;

																		obj_t BgL_arg2017z00_2203;

																		BgL_arg2016z00_2202 =
																			BGl_statezd2namezd2zz__rgc_dfaz00
																			(BgL_currentzd2statezd2_15);
																		{	/* Rgc/rgccompile.scm 180 */
																			obj_t BgL_list2018z00_2204;

																			{	/* Rgc/rgccompile.scm 180 */
																				obj_t BgL_arg2019z00_2205;

																				BgL_arg2019z00_2205 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2018z00_2204 =
																					MAKE_PAIR(BgL_matchz00_2201,
																					BgL_arg2019z00_2205);
																			}
																			BgL_arg2017z00_2203 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol2850z00zz__rgc_compilez00,
																				BgL_list2018z00_2204);
																		}
																		BgL_arg2072z00_957 =
																			MAKE_PAIR(BgL_arg2016z00_2202,
																			BgL_arg2017z00_2203);
																}}
																{	/* Rgc/rgccompile.scm 179 */
																	obj_t BgL_list2074z00_959;

																	{	/* Rgc/rgccompile.scm 179 */
																		obj_t BgL_arg2076z00_960;

																		{	/* Rgc/rgccompile.scm 179 */
																			obj_t BgL_arg2077z00_961;

																			BgL_arg2077z00_961 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2076z00_960 =
																				MAKE_PAIR(BgL_matchz00_17,
																				BgL_arg2077z00_961);
																		}
																		BgL_list2074z00_959 =
																			MAKE_PAIR(BgL_arg2072z00_957,
																			BgL_arg2076z00_960);
																	}
																	BgL_arg2069z00_955 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2070z00_956, BgL_list2074z00_959);
															}}
															BgL_arg2059z00_945 =
																MAKE_PAIR(BgL_arg2068z00_954,
																BgL_arg2069z00_955);
														}
														{	/* Rgc/rgccompile.scm 182 */
															obj_t BgL_statez00_2206;

															BgL_statez00_2206 =
																CELL_REF(BgL_sentinelzd2matchzd2_899);
															{	/* Rgc/rgccompile.scm 182 */
																obj_t BgL_arg2016z00_2208;

																obj_t BgL_arg2017z00_2209;

																BgL_arg2016z00_2208 =
																	BGl_statezd2namezd2zz__rgc_dfaz00
																	(BgL_statez00_2206);
																{	/* Rgc/rgccompile.scm 182 */
																	obj_t BgL_list2018z00_2210;

																	{	/* Rgc/rgccompile.scm 182 */
																		obj_t BgL_arg2019z00_2211;

																		BgL_arg2019z00_2211 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2018z00_2210 =
																			MAKE_PAIR(BgL_matchz00_17,
																			BgL_arg2019z00_2211);
																	}
																	BgL_arg2017z00_2209 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol2850z00zz__rgc_compilez00,
																		BgL_list2018z00_2210);
																}
																BgL_arg2060z00_946 =
																	MAKE_PAIR(BgL_arg2016z00_2208,
																	BgL_arg2017z00_2209);
														}}
														{	/* Rgc/rgccompile.scm 178 */
															obj_t BgL_list2062z00_948;

															{	/* Rgc/rgccompile.scm 178 */
																obj_t BgL_arg2063z00_949;

																{	/* Rgc/rgccompile.scm 178 */
																	obj_t BgL_arg2064z00_950;

																	BgL_arg2064z00_950 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2063z00_949 =
																		MAKE_PAIR(BgL_arg2060z00_946,
																		BgL_arg2064z00_950);
																}
																BgL_list2062z00_948 =
																	MAKE_PAIR(BgL_arg2059z00_945,
																	BgL_arg2063z00_949);
															}
															BgL_arg2057z00_943 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2058z00_944, BgL_list2062z00_948);
													}}
													BgL_arg2053z00_939 =
														MAKE_PAIR(BgL_arg2056z00_942, BgL_arg2057z00_943);
												}
												{	/* Rgc/rgccompile.scm 178 */
													obj_t BgL_list2055z00_941;

													BgL_list2055z00_941 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2052z00_938 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2053z00_939, BgL_list2055z00_941);
											}}
											BgL_arg2041z00_927 =
												MAKE_PAIR(BgL_arg2051z00_937, BgL_arg2052z00_938);
										}
									else
										{	/* Rgc/rgccompile.scm 183 */
											obj_t BgL_arg2081z00_965;

											obj_t BgL_arg2082z00_966;

											BgL_arg2081z00_965 = MAKE_PAIR(BINT(((long) 0)), BNIL);
											{	/* Rgc/rgccompile.scm 183 */
												obj_t BgL_arg2083z00_967;

												{	/* Rgc/rgccompile.scm 183 */
													obj_t BgL_arg2086z00_970;

													obj_t BgL_arg2089z00_971;

													BgL_arg2086z00_970 =
														BGl_symbol2862z00zz__rgc_compilez00;
													{	/* Rgc/rgccompile.scm 183 */
														obj_t BgL_arg2090z00_972;

														obj_t BgL_arg2091z00_973;

														{	/* Rgc/rgccompile.scm 183 */
															obj_t BgL_arg2096z00_978;

															obj_t BgL_arg2097z00_979;

															BgL_arg2096z00_978 =
																BGl_symbol2868z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 183 */
																obj_t BgL_list2098z00_980;

																BgL_list2098z00_980 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2097z00_979 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol2850z00zz__rgc_compilez00,
																	BgL_list2098z00_980);
															}
															BgL_arg2090z00_972 =
																MAKE_PAIR(BgL_arg2096z00_978,
																BgL_arg2097z00_979);
														}
														{	/* Rgc/rgccompile.scm 184 */
															obj_t BgL_matchz00_2213;

															BgL_matchz00_2213 =
																BGl_symbol2848z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 184 */
																obj_t BgL_arg2016z00_2214;

																obj_t BgL_arg2017z00_2215;

																BgL_arg2016z00_2214 =
																	BGl_statezd2namezd2zz__rgc_dfaz00
																	(BgL_currentzd2statezd2_15);
																{	/* Rgc/rgccompile.scm 184 */
																	obj_t BgL_list2018z00_2216;

																	{	/* Rgc/rgccompile.scm 184 */
																		obj_t BgL_arg2019z00_2217;

																		BgL_arg2019z00_2217 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2018z00_2216 =
																			MAKE_PAIR(BgL_matchz00_2213,
																			BgL_arg2019z00_2217);
																	}
																	BgL_arg2017z00_2215 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol2850z00zz__rgc_compilez00,
																		BgL_list2018z00_2216);
																}
																BgL_arg2091z00_973 =
																	MAKE_PAIR(BgL_arg2016z00_2214,
																	BgL_arg2017z00_2215);
														}}
														{	/* Rgc/rgccompile.scm 183 */
															obj_t BgL_list2093z00_975;

															{	/* Rgc/rgccompile.scm 183 */
																obj_t BgL_arg2094z00_976;

																{	/* Rgc/rgccompile.scm 183 */
																	obj_t BgL_arg2095z00_977;

																	BgL_arg2095z00_977 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2094z00_976 =
																		MAKE_PAIR(BgL_matchz00_17,
																		BgL_arg2095z00_977);
																}
																BgL_list2093z00_975 =
																	MAKE_PAIR(BgL_arg2091z00_973,
																	BgL_arg2094z00_976);
															}
															BgL_arg2089z00_971 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2090z00_972, BgL_list2093z00_975);
													}}
													BgL_arg2083z00_967 =
														MAKE_PAIR(BgL_arg2086z00_970, BgL_arg2089z00_971);
												}
												{	/* Rgc/rgccompile.scm 183 */
													obj_t BgL_list2085z00_969;

													BgL_list2085z00_969 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2082z00_966 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2083z00_967, BgL_list2085z00_969);
											}}
											BgL_arg2041z00_927 =
												MAKE_PAIR(BgL_arg2081z00_965, BgL_arg2082z00_966);
										}
									{	/* Rgc/rgccompile.scm 198 */
										obj_t BgL_arg2043z00_929;

										{	/* Rgc/rgccompile.scm 198 */
											obj_t BgL_arg2046z00_932;

											obj_t BgL_arg2047z00_933;

											BgL_arg2046z00_932 = BGl_symbol2872z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 198 */
												obj_t BgL_list2048z00_934;

												BgL_list2048z00_934 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2047z00_933 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_matchz00_17, BgL_list2048z00_934);
											}
											BgL_arg2043z00_929 =
												MAKE_PAIR(BgL_arg2046z00_932, BgL_arg2047z00_933);
										}
										{	/* Rgc/rgccompile.scm 195 */
											obj_t BgL_list2045z00_931;

											BgL_list2045z00_931 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2042z00_928 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2043z00_929, BgL_list2045z00_931);
									}}
									BgL_arg2028z00_908 =
										MAKE_PAIR(BgL_arg2041z00_927, BgL_arg2042z00_928);
								}
								BgL_arg2024z00_905 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2027z00_907, BgL_arg2028z00_908);
							}
							{	/* Rgc/rgccompile.scm 195 */
								obj_t BgL_list2025z00_906;

								BgL_list2025z00_906 = MAKE_PAIR(BgL_arg2024z00_905, BNIL);
								BgL_arg2022z00_903 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2023z00_904, BgL_list2025z00_906);
						}}
						return MAKE_PAIR(BgL_arg2021z00_902, BgL_arg2022z00_903);
					}
				}
			}
		}
	}



/* compile-case-transition */
	obj_t BGl_compilezd2casezd2transitionz00zz__rgc_compilez00(obj_t
		BgL_matchz00_2958, obj_t BgL_sentinelzd2matchzd2_2957,
		obj_t BgL_statezd2transzd2_981)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 194 */
			{	/* Rgc/rgccompile.scm 187 */
				obj_t BgL_setz00_983;

				obj_t BgL_statez00_984;

				BgL_setz00_983 = CDR(BgL_statezd2transzd2_981);
				BgL_statez00_984 = CAR(BgL_statezd2transzd2_981);
				if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_983, ((long) 0)))
					{	/* Rgc/rgccompile.scm 189 */
						CELL_SET(BgL_sentinelzd2matchzd2_2957, BgL_statez00_984);
						BGl_rgcsetzd2removez12zc0zz__rgc_setz00(BgL_setz00_983, ((long) 0));
					}
				else
					{	/* Rgc/rgccompile.scm 189 */
						BFALSE;
					}
				{	/* Rgc/rgccompile.scm 193 */
					obj_t BgL_casezd2testzd2_986;

					BgL_casezd2testzd2_986 =
						BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_setz00_983);
					{	/* Rgc/rgccompile.scm 194 */
						obj_t BgL_arg2101z00_987;

						{	/* Rgc/rgccompile.scm 194 */
							obj_t BgL_arg2102z00_988;

							{	/* Rgc/rgccompile.scm 194 */
								obj_t BgL_arg2016z00_2222;

								obj_t BgL_arg2017z00_2223;

								BgL_arg2016z00_2222 =
									BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_984);
								{	/* Rgc/rgccompile.scm 194 */
									obj_t BgL_list2018z00_2224;

									{	/* Rgc/rgccompile.scm 194 */
										obj_t BgL_arg2019z00_2225;

										BgL_arg2019z00_2225 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2018z00_2224 =
											MAKE_PAIR(BgL_matchz00_2958, BgL_arg2019z00_2225);
									}
									BgL_arg2017z00_2223 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol2850z00zz__rgc_compilez00, BgL_list2018z00_2224);
								}
								BgL_arg2102z00_988 =
									MAKE_PAIR(BgL_arg2016z00_2222, BgL_arg2017z00_2223);
							}
							{	/* Rgc/rgccompile.scm 194 */
								obj_t BgL_list2104z00_990;

								BgL_list2104z00_990 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2101z00_987 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2102z00_988, BgL_list2104z00_990);
							}
						}
						return MAKE_PAIR(BgL_casezd2testzd2_986, BgL_arg2101z00_987);
					}
				}
			}
		}
	}



/* compile-cond-regular */
	obj_t BGl_compilezd2condzd2regularz00zz__rgc_compilez00(obj_t
		BgL_currentzd2statezd2_18, obj_t BgL_statezd2transzd2_19,
		obj_t BgL_matchz00_20)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 204 */
			{	/* Rgc/rgccompile.scm 229 */
				obj_t BgL_sentinelzd2matchzd2_993;

				BgL_sentinelzd2matchzd2_993 = BFALSE;
				{
					obj_t BgL_statezd2transzd2_1092;

					long BgL_prevzd2testzd2lenz00_1093;

					{
						obj_t BgL_transz00_998;

						obj_t BgL_testsz00_999;

						long BgL_costz00_1000;

						long BgL_prevzd2lenzd2_1001;

						bool_t BgL_elsepz00_1002;

						BgL_transz00_998 = BgL_statezd2transzd2_19;
						BgL_testsz00_999 = BNIL;
						BgL_costz00_1000 = ((long) 0);
						BgL_prevzd2lenzd2_1001 = ((long) 0);
						BgL_elsepz00_1002 = ((bool_t) 0);
					BgL_zc3anonymousza32105ze3z83_1003:
						{	/* Rgc/rgccompile.scm 234 */
							bool_t BgL_testz00_3181;

							if (NULLP(BgL_transz00_998))
								{	/* Rgc/rgccompile.scm 234 */
									BgL_testz00_3181 = ((bool_t) 1);
								}
							else
								{	/* Rgc/rgccompile.scm 234 */
									BgL_testz00_3181 = BgL_elsepz00_1002;
								}
							if (BgL_testz00_3181)
								{	/* Rgc/rgccompile.scm 234 */
									if (
										(BgL_costz00_1000 >
											BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00))
										{	/* Rgc/rgccompile.scm 235 */
											return
												BGl_compilezd2casezd2regularz00zz__rgc_compilez00
												(BgL_currentzd2statezd2_18, BgL_statezd2transzd2_19,
												BgL_matchz00_20);
										}
									else
										{	/* Rgc/rgccompile.scm 239 */
											obj_t BgL_arg2108z00_1006;

											obj_t BgL_arg2109z00_1007;

											BgL_arg2108z00_1006 = BGl_symbol2876z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 240 */
												obj_t BgL_arg2110z00_1008;

												obj_t BgL_arg2111z00_1009;

												if (BGl_statezf3zf3zz__rgc_dfaz00
													(BgL_sentinelzd2matchzd2_993))
													{	/* Rgc/rgccompile.scm 208 */
														obj_t BgL_arg2141z00_1038;

														obj_t BgL_arg2144z00_1039;

														{	/* Rgc/rgccompile.scm 208 */
															obj_t BgL_arg2145z00_1040;

															obj_t BgL_arg2146z00_1041;

															BgL_arg2145z00_1040 =
																BGl_symbol2874z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 208 */
																obj_t BgL_list2147z00_1042;

																{	/* Rgc/rgccompile.scm 208 */
																	obj_t BgL_arg2149z00_1044;

																	BgL_arg2149z00_1044 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2147z00_1042 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2149z00_1044);
																}
																BgL_arg2146z00_1041 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol2860z00zz__rgc_compilez00,
																	BgL_list2147z00_1042);
															}
															BgL_arg2141z00_1038 =
																MAKE_PAIR(BgL_arg2145z00_1040,
																BgL_arg2146z00_1041);
														}
														{	/* Rgc/rgccompile.scm 209 */
															obj_t BgL_arg2150z00_1045;

															{	/* Rgc/rgccompile.scm 209 */
																obj_t BgL_arg2153z00_1048;

																obj_t BgL_arg2154z00_1049;

																BgL_arg2153z00_1048 =
																	BGl_symbol2862z00zz__rgc_compilez00;
																{	/* Rgc/rgccompile.scm 209 */
																	obj_t BgL_arg2155z00_1050;

																	obj_t BgL_arg2156z00_1051;

																	obj_t BgL_arg2157z00_1052;

																	{	/* Rgc/rgccompile.scm 209 */
																		obj_t BgL_arg2162z00_1057;

																		obj_t BgL_arg2163z00_1058;

																		BgL_arg2162z00_1057 =
																			BGl_symbol2864z00zz__rgc_compilez00;
																		{	/* Rgc/rgccompile.scm 209 */
																			obj_t BgL_list2164z00_1059;

																			BgL_list2164z00_1059 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2163z00_1058 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol2850z00zz__rgc_compilez00,
																				BgL_list2164z00_1059);
																		}
																		BgL_arg2155z00_1050 =
																			MAKE_PAIR(BgL_arg2162z00_1057,
																			BgL_arg2163z00_1058);
																	}
																	{	/* Rgc/rgccompile.scm 210 */
																		obj_t BgL_arg2165z00_1060;

																		obj_t BgL_arg2166z00_1061;

																		BgL_arg2165z00_1060 =
																			BGl_symbol2862z00zz__rgc_compilez00;
																		{	/* Rgc/rgccompile.scm 210 */
																			obj_t BgL_arg2167z00_1062;

																			obj_t BgL_arg2168z00_1063;

																			{	/* Rgc/rgccompile.scm 210 */
																				obj_t BgL_arg2173z00_1068;

																				obj_t BgL_arg2174z00_1069;

																				BgL_arg2173z00_1068 =
																					BGl_symbol2866z00zz__rgc_compilez00;
																				{	/* Rgc/rgccompile.scm 210 */
																					obj_t BgL_list2175z00_1070;

																					BgL_list2175z00_1070 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2174z00_1069 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol2850z00zz__rgc_compilez00,
																						BgL_list2175z00_1070);
																				}
																				BgL_arg2167z00_1062 =
																					MAKE_PAIR(BgL_arg2173z00_1068,
																					BgL_arg2174z00_1069);
																			}
																			{	/* Rgc/rgccompile.scm 211 */
																				obj_t BgL_matchz00_2241;

																				BgL_matchz00_2241 =
																					BGl_symbol2848z00zz__rgc_compilez00;
																				{	/* Rgc/rgccompile.scm 211 */
																					obj_t BgL_arg2016z00_2242;

																					obj_t BgL_arg2017z00_2243;

																					BgL_arg2016z00_2242 =
																						BGl_statezd2namezd2zz__rgc_dfaz00
																						(BgL_currentzd2statezd2_18);
																					{	/* Rgc/rgccompile.scm 211 */
																						obj_t BgL_list2018z00_2244;

																						{	/* Rgc/rgccompile.scm 211 */
																							obj_t BgL_arg2019z00_2245;

																							BgL_arg2019z00_2245 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2018z00_2244 =
																								MAKE_PAIR(BgL_matchz00_2241,
																								BgL_arg2019z00_2245);
																						}
																						BgL_arg2017z00_2243 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol2850z00zz__rgc_compilez00,
																							BgL_list2018z00_2244);
																					}
																					BgL_arg2168z00_1063 =
																						MAKE_PAIR(BgL_arg2016z00_2242,
																						BgL_arg2017z00_2243);
																			}}
																			{	/* Rgc/rgccompile.scm 210 */
																				obj_t BgL_list2170z00_1065;

																				{	/* Rgc/rgccompile.scm 210 */
																					obj_t BgL_arg2171z00_1066;

																					{	/* Rgc/rgccompile.scm 210 */
																						obj_t BgL_arg2172z00_1067;

																						BgL_arg2172z00_1067 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2171z00_1066 =
																							MAKE_PAIR(BgL_matchz00_20,
																							BgL_arg2172z00_1067);
																					}
																					BgL_list2170z00_1065 =
																						MAKE_PAIR(BgL_arg2168z00_1063,
																						BgL_arg2171z00_1066);
																				}
																				BgL_arg2166z00_1061 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2167z00_1062,
																					BgL_list2170z00_1065);
																		}}
																		BgL_arg2156z00_1051 =
																			MAKE_PAIR(BgL_arg2165z00_1060,
																			BgL_arg2166z00_1061);
																	}
																	{	/* Rgc/rgccompile.scm 213 */
																		obj_t BgL_statez00_2246;

																		BgL_statez00_2246 =
																			BgL_sentinelzd2matchzd2_993;
																		{	/* Rgc/rgccompile.scm 213 */
																			obj_t BgL_arg2016z00_2248;

																			obj_t BgL_arg2017z00_2249;

																			BgL_arg2016z00_2248 =
																				BGl_statezd2namezd2zz__rgc_dfaz00
																				(BgL_statez00_2246);
																			{	/* Rgc/rgccompile.scm 213 */
																				obj_t BgL_list2018z00_2250;

																				{	/* Rgc/rgccompile.scm 213 */
																					obj_t BgL_arg2019z00_2251;

																					BgL_arg2019z00_2251 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2018z00_2250 =
																						MAKE_PAIR(BgL_matchz00_20,
																						BgL_arg2019z00_2251);
																				}
																				BgL_arg2017z00_2249 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol2850z00zz__rgc_compilez00,
																					BgL_list2018z00_2250);
																			}
																			BgL_arg2157z00_1052 =
																				MAKE_PAIR(BgL_arg2016z00_2248,
																				BgL_arg2017z00_2249);
																	}}
																	{	/* Rgc/rgccompile.scm 209 */
																		obj_t BgL_list2159z00_1054;

																		{	/* Rgc/rgccompile.scm 209 */
																			obj_t BgL_arg2160z00_1055;

																			{	/* Rgc/rgccompile.scm 209 */
																				obj_t BgL_arg2161z00_1056;

																				BgL_arg2161z00_1056 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2160z00_1055 =
																					MAKE_PAIR(BgL_arg2157z00_1052,
																					BgL_arg2161z00_1056);
																			}
																			BgL_list2159z00_1054 =
																				MAKE_PAIR(BgL_arg2156z00_1051,
																				BgL_arg2160z00_1055);
																		}
																		BgL_arg2154z00_1049 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2155z00_1050,
																			BgL_list2159z00_1054);
																}}
																BgL_arg2150z00_1045 =
																	MAKE_PAIR(BgL_arg2153z00_1048,
																	BgL_arg2154z00_1049);
															}
															{	/* Rgc/rgccompile.scm 208 */
																obj_t BgL_list2152z00_1047;

																BgL_list2152z00_1047 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2144z00_1039 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2150z00_1045, BgL_list2152z00_1047);
														}}
														BgL_arg2110z00_1008 =
															MAKE_PAIR(BgL_arg2141z00_1038,
															BgL_arg2144z00_1039);
													}
												else
													{	/* Rgc/rgccompile.scm 214 */
														obj_t BgL_arg2176z00_1071;

														obj_t BgL_arg2177z00_1072;

														{	/* Rgc/rgccompile.scm 214 */
															obj_t BgL_arg2178z00_1073;

															obj_t BgL_arg2179z00_1074;

															BgL_arg2178z00_1073 =
																BGl_symbol2874z00zz__rgc_compilez00;
															{	/* Rgc/rgccompile.scm 214 */
																obj_t BgL_list2180z00_1075;

																{	/* Rgc/rgccompile.scm 214 */
																	obj_t BgL_arg2182z00_1077;

																	BgL_arg2182z00_1077 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2180z00_1075 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2182z00_1077);
																}
																BgL_arg2179z00_1074 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol2860z00zz__rgc_compilez00,
																	BgL_list2180z00_1075);
															}
															BgL_arg2176z00_1071 =
																MAKE_PAIR(BgL_arg2178z00_1073,
																BgL_arg2179z00_1074);
														}
														{	/* Rgc/rgccompile.scm 215 */
															obj_t BgL_arg2183z00_1078;

															{	/* Rgc/rgccompile.scm 215 */
																obj_t BgL_arg2186z00_1081;

																obj_t BgL_arg2187z00_1082;

																BgL_arg2186z00_1081 =
																	BGl_symbol2862z00zz__rgc_compilez00;
																{	/* Rgc/rgccompile.scm 215 */
																	obj_t BgL_arg2188z00_1083;

																	obj_t BgL_arg2189z00_1084;

																	{	/* Rgc/rgccompile.scm 215 */
																		obj_t BgL_arg2194z00_1089;

																		obj_t BgL_arg2195z00_1090;

																		BgL_arg2194z00_1089 =
																			BGl_symbol2868z00zz__rgc_compilez00;
																		{	/* Rgc/rgccompile.scm 215 */
																			obj_t BgL_list2196z00_1091;

																			BgL_list2196z00_1091 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2195z00_1090 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol2850z00zz__rgc_compilez00,
																				BgL_list2196z00_1091);
																		}
																		BgL_arg2188z00_1083 =
																			MAKE_PAIR(BgL_arg2194z00_1089,
																			BgL_arg2195z00_1090);
																	}
																	{	/* Rgc/rgccompile.scm 216 */
																		obj_t BgL_matchz00_2253;

																		BgL_matchz00_2253 =
																			BGl_symbol2848z00zz__rgc_compilez00;
																		{	/* Rgc/rgccompile.scm 216 */
																			obj_t BgL_arg2016z00_2254;

																			obj_t BgL_arg2017z00_2255;

																			BgL_arg2016z00_2254 =
																				BGl_statezd2namezd2zz__rgc_dfaz00
																				(BgL_currentzd2statezd2_18);
																			{	/* Rgc/rgccompile.scm 216 */
																				obj_t BgL_list2018z00_2256;

																				{	/* Rgc/rgccompile.scm 216 */
																					obj_t BgL_arg2019z00_2257;

																					BgL_arg2019z00_2257 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2018z00_2256 =
																						MAKE_PAIR(BgL_matchz00_2253,
																						BgL_arg2019z00_2257);
																				}
																				BgL_arg2017z00_2255 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol2850z00zz__rgc_compilez00,
																					BgL_list2018z00_2256);
																			}
																			BgL_arg2189z00_1084 =
																				MAKE_PAIR(BgL_arg2016z00_2254,
																				BgL_arg2017z00_2255);
																	}}
																	{	/* Rgc/rgccompile.scm 215 */
																		obj_t BgL_list2191z00_1086;

																		{	/* Rgc/rgccompile.scm 215 */
																			obj_t BgL_arg2192z00_1087;

																			{	/* Rgc/rgccompile.scm 215 */
																				obj_t BgL_arg2193z00_1088;

																				BgL_arg2193z00_1088 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2192z00_1087 =
																					MAKE_PAIR(BgL_matchz00_20,
																					BgL_arg2193z00_1088);
																			}
																			BgL_list2191z00_1086 =
																				MAKE_PAIR(BgL_arg2189z00_1084,
																				BgL_arg2192z00_1087);
																		}
																		BgL_arg2187z00_1082 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2188z00_1083,
																			BgL_list2191z00_1086);
																}}
																BgL_arg2183z00_1078 =
																	MAKE_PAIR(BgL_arg2186z00_1081,
																	BgL_arg2187z00_1082);
															}
															{	/* Rgc/rgccompile.scm 214 */
																obj_t BgL_list2185z00_1080;

																BgL_list2185z00_1080 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2177z00_1072 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2183z00_1078, BgL_list2185z00_1080);
														}}
														BgL_arg2110z00_1008 =
															MAKE_PAIR(BgL_arg2176z00_1071,
															BgL_arg2177z00_1072);
													}
												{	/* Rgc/rgccompile.scm 241 */
													obj_t BgL_arg2113z00_1011;

													obj_t BgL_arg2114z00_1012;

													BgL_arg2113z00_1011 =
														bgl_reverse_bang(BgL_testsz00_999);
													{	/* Rgc/rgccompile.scm 242 */
														obj_t BgL_arg2115z00_1013;

														if (BgL_elsepz00_1002)
															{	/* Rgc/rgccompile.scm 242 */
																BgL_arg2115z00_1013 = BNIL;
															}
														else
															{	/* Rgc/rgccompile.scm 244 */
																obj_t BgL_arg2118z00_1015;

																{	/* Rgc/rgccompile.scm 244 */
																	obj_t BgL_arg2121z00_1017;

																	obj_t BgL_arg2123z00_1018;

																	BgL_arg2121z00_1017 =
																		BGl_symbol2872z00zz__rgc_compilez00;
																	{	/* Rgc/rgccompile.scm 244 */
																		obj_t BgL_list2124z00_1019;

																		BgL_list2124z00_1019 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2123z00_1018 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_matchz00_20, BgL_list2124z00_1019);
																	}
																	BgL_arg2118z00_1015 =
																		MAKE_PAIR(BgL_arg2121z00_1017,
																		BgL_arg2123z00_1018);
																}
																BgL_arg2115z00_1013 =
																	MAKE_PAIR(BgL_arg2118z00_1015, BNIL);
															}
														BgL_arg2114z00_1012 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2115z00_1013, BNIL);
													}
													BgL_arg2111z00_1009 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2113z00_1011, BgL_arg2114z00_1012);
												}
												{	/* Rgc/rgccompile.scm 239 */
													obj_t BgL_list2112z00_1010;

													BgL_list2112z00_1010 =
														MAKE_PAIR(BgL_arg2111z00_1009, BNIL);
													BgL_arg2109z00_1007 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2110z00_1008, BgL_list2112z00_1010);
												}
											}
											return
												MAKE_PAIR(BgL_arg2108z00_1006, BgL_arg2109z00_1007);
										}
								}
							else
								{	/* Rgc/rgccompile.scm 245 */
									obj_t BgL_testz00_1020;

									BgL_statezd2transzd2_1092 = CAR(BgL_transz00_998);
									BgL_prevzd2testzd2lenz00_1093 = BgL_prevzd2lenzd2_1001;
									{	/* Rgc/rgccompile.scm 219 */
										obj_t BgL_setz00_1095;

										obj_t BgL_statez00_1096;

										BgL_setz00_1095 = CDR(BgL_statezd2transzd2_1092);
										BgL_statez00_1096 = CAR(BgL_statezd2transzd2_1092);
										if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_1095,
												((long) 0)))
											{	/* Rgc/rgccompile.scm 221 */
												BgL_sentinelzd2matchzd2_993 = BgL_statez00_1096;
												BGl_rgcsetzd2removez12zc0zz__rgc_setz00(BgL_setz00_1095,
													((long) 0));
											}
										else
											{	/* Rgc/rgccompile.scm 221 */
												BFALSE;
											}
										{	/* Rgc/rgccompile.scm 225 */
											obj_t BgL_condzd2testzd2_1098;

											BgL_condzd2testzd2_1098 =
												BGl_compilezd2condzd2testz00zz__rgc_compilez00
												(BgL_setz00_1095, BGl_symbol2860z00zz__rgc_compilez00,
												BgL_prevzd2testzd2lenz00_1093);
											{	/* Rgc/rgccompile.scm 227 */
												obj_t BgL_condzd2costzd2_1099;

												{	/* Rgc/rgccompile.scm 227 */
													int BgL_auxz00_3261;

													BgL_auxz00_3261 = (int) (((long) 1));
													BgL_condzd2costzd2_1099 =
														BGL_MVALUES_VAL(BgL_auxz00_3261);
												}
												{	/* Rgc/rgccompile.scm 227 */
													obj_t BgL_val0_1873z00_1100;

													{	/* Rgc/rgccompile.scm 227 */
														obj_t BgL_arg2199z00_1102;

														{	/* Rgc/rgccompile.scm 227 */
															obj_t BgL_arg2200z00_1103;

															{	/* Rgc/rgccompile.scm 227 */
																obj_t BgL_arg2016z00_2263;

																obj_t BgL_arg2017z00_2264;

																BgL_arg2016z00_2263 =
																	BGl_statezd2namezd2zz__rgc_dfaz00
																	(BgL_statez00_1096);
																{	/* Rgc/rgccompile.scm 227 */
																	obj_t BgL_list2018z00_2265;

																	{	/* Rgc/rgccompile.scm 227 */
																		obj_t BgL_arg2019z00_2266;

																		BgL_arg2019z00_2266 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2018z00_2265 =
																			MAKE_PAIR(BgL_matchz00_20,
																			BgL_arg2019z00_2266);
																	}
																	BgL_arg2017z00_2264 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol2850z00zz__rgc_compilez00,
																		BgL_list2018z00_2265);
																}
																BgL_arg2200z00_1103 =
																	MAKE_PAIR(BgL_arg2016z00_2263,
																	BgL_arg2017z00_2264);
															}
															{	/* Rgc/rgccompile.scm 227 */
																obj_t BgL_list2205z00_1105;

																BgL_list2205z00_1105 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2199z00_1102 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2200z00_1103, BgL_list2205z00_1105);
														}}
														BgL_val0_1873z00_1100 =
															MAKE_PAIR(BgL_condzd2testzd2_1098,
															BgL_arg2199z00_1102);
													}
													{	/* Rgc/rgccompile.scm 227 */
														int BgL_auxz00_3272;

														BgL_auxz00_3272 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_3272);
													}
													{	/* Rgc/rgccompile.scm 227 */
														int BgL_auxz00_3275;

														BgL_auxz00_3275 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_3275,
															BgL_condzd2costzd2_1099);
													}
													BgL_testz00_1020 = BgL_val0_1873z00_1100;
									}}}}
									{	/* Rgc/rgccompile.scm 247 */
										obj_t BgL_cz00_1021;

										{	/* Rgc/rgccompile.scm 247 */
											int BgL_auxz00_3279;

											BgL_auxz00_3279 = (int) (((long) 1));
											BgL_cz00_1021 = BGL_MVALUES_VAL(BgL_auxz00_3279);
										}
										{	/* Rgc/rgccompile.scm 247 */
											obj_t BgL_arg2125z00_1022;

											obj_t BgL_arg2126z00_1023;

											long BgL_arg2127z00_1024;

											long BgL_arg2130z00_1025;

											bool_t BgL_arg2131z00_1026;

											BgL_arg2125z00_1022 = CDR(BgL_transz00_998);
											BgL_arg2126z00_1023 =
												MAKE_PAIR(BgL_testz00_1020, BgL_testsz00_999);
											BgL_arg2127z00_1024 =
												((long) CINT(BgL_cz00_1021) + BgL_costz00_1000);
											BgL_arg2130z00_1025 =
												(BgL_prevzd2lenzd2_1001 +
												BGl_rgcsetzd2lengthzd2zz__rgc_setz00(CDR(CAR
														(BgL_transz00_998))));
											BgL_arg2131z00_1026 =
												(CAR(BgL_testz00_1020) ==
												BGl_symbol2872z00zz__rgc_compilez00);
											{
												bool_t BgL_elsepz00_3296;

												long BgL_prevzd2lenzd2_3295;

												long BgL_costz00_3294;

												obj_t BgL_testsz00_3293;

												obj_t BgL_transz00_3292;

												BgL_transz00_3292 = BgL_arg2125z00_1022;
												BgL_testsz00_3293 = BgL_arg2126z00_1023;
												BgL_costz00_3294 = BgL_arg2127z00_1024;
												BgL_prevzd2lenzd2_3295 = BgL_arg2130z00_1025;
												BgL_elsepz00_3296 = BgL_arg2131z00_1026;
												BgL_elsepz00_1002 = BgL_elsepz00_3296;
												BgL_prevzd2lenzd2_1001 = BgL_prevzd2lenzd2_3295;
												BgL_costz00_1000 = BgL_costz00_3294;
												BgL_testsz00_999 = BgL_testsz00_3293;
												BgL_transz00_998 = BgL_transz00_3292;
												goto BgL_zc3anonymousza32105ze3z83_1003;
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



/* compile-cond-test */
	obj_t BGl_compilezd2condzd2testz00zz__rgc_compilez00(obj_t BgL_setz00_21,
		obj_t BgL_varz00_22, long BgL_prevzd2testzd2lenz00_23)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 256 */
			{	/* Rgc/rgccompile.scm 309 */
				obj_t BgL_maxz00_1112;

				long BgL_lenz00_1113;

				BgL_maxz00_1112 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				BgL_lenz00_1113 = BGl_rgcsetzd2lengthzd2zz__rgc_setz00(BgL_setz00_21);
				{	/* Rgc/rgccompile.scm 312 */
					bool_t BgL_testz00_3299;

					{	/* Rgc/rgccompile.scm 312 */
						obj_t BgL_arg2216z00_1129;

						long BgL_arg2217z00_1130;

						BgL_arg2216z00_1129 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						BgL_arg2217z00_1130 =
							(((long) 1) + (BgL_lenz00_1113 + BgL_prevzd2testzd2lenz00_23));
						BgL_testz00_3299 =
							((long) CINT(BgL_arg2216z00_1129) == BgL_arg2217z00_1130);
					}
					if (BgL_testz00_3299)
						{	/* Rgc/rgccompile.scm 316 */
							obj_t BgL_val0_1889z00_1115;

							BgL_val0_1889z00_1115 = BGl_symbol2872z00zz__rgc_compilez00;
							{	/* Rgc/rgccompile.scm 316 */
								int BgL_auxz00_3305;

								BgL_auxz00_3305 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_3305);
							}
							{	/* Rgc/rgccompile.scm 316 */
								obj_t BgL_auxz00_3310;

								int BgL_auxz00_3308;

								BgL_auxz00_3310 = BINT(((long) 0));
								BgL_auxz00_3308 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_3308, BgL_auxz00_3310);
							}
							return BgL_val0_1889z00_1115;
						}
					else
						{	/* Rgc/rgccompile.scm 312 */
							if (
								(BgL_lenz00_1113 >
									(((long) 2) + ((long) CINT(BgL_maxz00_1112) / ((long) 2)))))
								{	/* Rgc/rgccompile.scm 319 */
									obj_t BgL_testz00_1118;

									BgL_testz00_1118 =
										BGl_compilezd2rangezd2testz00zz__rgc_compilez00
										(BgL_varz00_22,
										BGl_rgcsetzd2notzd2zz__rgc_setz00(BgL_setz00_21));
									{	/* Rgc/rgccompile.scm 321 */
										obj_t BgL_costz00_1119;

										{	/* Rgc/rgccompile.scm 321 */
											int BgL_auxz00_3320;

											BgL_auxz00_3320 = (int) (((long) 1));
											BgL_costz00_1119 = BGL_MVALUES_VAL(BgL_auxz00_3320);
										}
										{	/* Rgc/rgccompile.scm 321 */
											obj_t BgL_val0_1891z00_1120;

											long BgL_val1_1892z00_1121;

											{	/* Rgc/rgccompile.scm 321 */
												obj_t BgL_arg2208z00_1122;

												obj_t BgL_arg2209z00_1123;

												BgL_arg2208z00_1122 =
													BGl_symbol2878z00zz__rgc_compilez00;
												{	/* Rgc/rgccompile.scm 321 */
													obj_t BgL_list2210z00_1124;

													BgL_list2210z00_1124 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2209z00_1123 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_testz00_1118, BgL_list2210z00_1124);
												}
												BgL_val0_1891z00_1120 =
													MAKE_PAIR(BgL_arg2208z00_1122, BgL_arg2209z00_1123);
											}
											BgL_val1_1892z00_1121 =
												(((long) 1) + (long) CINT(BgL_costz00_1119));
											{	/* Rgc/rgccompile.scm 321 */
												int BgL_auxz00_3328;

												BgL_auxz00_3328 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_3328);
											}
											{	/* Rgc/rgccompile.scm 321 */
												obj_t BgL_auxz00_3333;

												int BgL_auxz00_3331;

												BgL_auxz00_3333 = BINT(BgL_val1_1892z00_1121);
												BgL_auxz00_3331 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_3331, BgL_auxz00_3333);
											}
											return BgL_val0_1891z00_1120;
										}
									}
								}
							else
								{	/* Rgc/rgccompile.scm 317 */
									return
										BGl_compilezd2rangezd2testz00zz__rgc_compilez00
										(BgL_varz00_22, BgL_setz00_21);
								}
						}
				}
			}
		}
	}



/* compile-range-test */
	obj_t BGl_compilezd2rangezd2testz00zz__rgc_compilez00(obj_t BgL_varz00_2956,
		obj_t BgL_setz00_1227)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 308 */
			{
				obj_t BgL_startz00_1155;

				obj_t BgL_stopz00_1156;

				obj_t BgL_setz00_1157;

				{	/* Rgc/rgccompile.scm 298 */
					long BgL_g1829z00_1229;

					{	/* Rgc/rgccompile.scm 298 */
						obj_t BgL_maxz00_2353;

						BgL_maxz00_2353 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						{
							long BgL_iz00_2355;

							BgL_iz00_2355 = ((long) 1);
						BgL_loopz00_2354:
							if ((BgL_iz00_2355 == (long) CINT(BgL_maxz00_2353)))
								{	/* Rgc/rgccompile.scm 298 */
									BgL_g1829z00_1229 = ((long) -1);
								}
							else
								{	/* Rgc/rgccompile.scm 298 */
									if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_1227,
											BgL_iz00_2355))
										{	/* Rgc/rgccompile.scm 298 */
											BgL_g1829z00_1229 = BgL_iz00_2355;
										}
									else
										{
											long BgL_iz00_3343;

											BgL_iz00_3343 = (BgL_iz00_2355 + ((long) 1));
											BgL_iz00_2355 = BgL_iz00_3343;
											goto BgL_loopz00_2354;
										}
								}
						}
					}
					{
						obj_t BgL_startz00_1232;

						obj_t BgL_testsz00_1233;

						long BgL_costz00_1234;

						BgL_startz00_1232 = BINT(BgL_g1829z00_1229);
						BgL_testsz00_1233 = BNIL;
						BgL_costz00_1234 = ((long) 0);
					BgL_zc3anonymousza32302ze3z83_1235:
						if (((long) CINT(BgL_startz00_1232) == ((long) -1)))
							{	/* Rgc/rgccompile.scm 302 */
								obj_t BgL_val0_1887z00_1237;

								BgL_val0_1887z00_1237 =
									MAKE_PAIR(BGl_symbol2880z00zz__rgc_compilez00,
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(bgl_reverse_bang(BgL_testsz00_1233), BNIL));
								{	/* Rgc/rgccompile.scm 302 */
									int BgL_auxz00_3351;

									BgL_auxz00_3351 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_3351);
								}
								{	/* Rgc/rgccompile.scm 302 */
									obj_t BgL_auxz00_3356;

									int BgL_auxz00_3354;

									BgL_auxz00_3356 = BINT(BgL_costz00_1234);
									BgL_auxz00_3354 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_3354, BgL_auxz00_3356);
								}
								return BgL_val0_1887z00_1237;
							}
						else
							{	/* Rgc/rgccompile.scm 303 */
								obj_t BgL_stopz00_1243;

								{	/* Rgc/rgccompile.scm 303 */
									obj_t BgL_maxz00_2370;

									BgL_maxz00_2370 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
									{
										obj_t BgL_iz00_2372;

										BgL_iz00_2372 = BgL_startz00_1232;
									BgL_loopz00_2371:
										if (
											((long) CINT(BgL_iz00_2372) ==
												(long) CINT(BgL_maxz00_2370)))
											{	/* Rgc/rgccompile.scm 303 */
												BgL_stopz00_1243 = BgL_maxz00_2370;
											}
										else
											{	/* Rgc/rgccompile.scm 303 */
												if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00
													(BgL_setz00_1227, (long) CINT(BgL_iz00_2372)))
													{	/* Rgc/rgccompile.scm 303 */
														long BgL_arg2238z00_2375;

														BgL_arg2238z00_2375 =
															((long) CINT(BgL_iz00_2372) + ((long) 1));
														{
															obj_t BgL_iz00_3369;

															BgL_iz00_3369 = BINT(BgL_arg2238z00_2375);
															BgL_iz00_2372 = BgL_iz00_3369;
															goto BgL_loopz00_2371;
														}
													}
												else
													{	/* Rgc/rgccompile.scm 303 */
														BgL_stopz00_1243 = BgL_iz00_2372;
													}
											}
									}
								}
								{	/* Rgc/rgccompile.scm 304 */
									obj_t BgL_testz00_1244;

									BgL_startz00_1155 = BgL_startz00_1232;
									BgL_stopz00_1156 = BgL_stopz00_1243;
									BgL_setz00_1157 = BgL_setz00_1227;
									if (
										(((long) CINT(BgL_stopz00_1156) - ((long) 1)) ==
											(long) CINT(BgL_startz00_1155)))
										{	/* Rgc/rgccompile.scm 280 */
											obj_t BgL_val0_1875z00_1160;

											{	/* Rgc/rgccompile.scm 280 */
												obj_t BgL_arg2242z00_1162;

												obj_t BgL_arg2243z00_1163;

												BgL_arg2242z00_1162 =
													BGl_symbol2874z00zz__rgc_compilez00;
												{	/* Rgc/rgccompile.scm 280 */
													obj_t BgL_list2244z00_1164;

													{	/* Rgc/rgccompile.scm 280 */
														obj_t BgL_arg2245z00_1165;

														BgL_arg2245z00_1165 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2244z00_1164 =
															MAKE_PAIR(BgL_startz00_1155, BgL_arg2245z00_1165);
													}
													BgL_arg2243z00_1163 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_varz00_2956, BgL_list2244z00_1164);
												}
												BgL_val0_1875z00_1160 =
													MAKE_PAIR(BgL_arg2242z00_1162, BgL_arg2243z00_1163);
											}
											{	/* Rgc/rgccompile.scm 280 */
												int BgL_auxz00_3380;

												BgL_auxz00_3380 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_3380);
											}
											{	/* Rgc/rgccompile.scm 280 */
												obj_t BgL_auxz00_3385;

												int BgL_auxz00_3383;

												BgL_auxz00_3385 = BINT(((long) 1));
												BgL_auxz00_3383 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_3383, BgL_auxz00_3385);
											}
											BgL_testz00_1244 = BgL_val0_1875z00_1160;
										}
									else
										{	/* Rgc/rgccompile.scm 279 */
											if (
												(((long) CINT(BgL_stopz00_1156) -
														(long) CINT(BgL_startz00_1155)) < ((long) 4)))
												{	/* Rgc/rgccompile.scm 282 */
													obj_t BgL_val0_1877z00_1167;

													long BgL_val1_1878z00_1168;

													{	/* Rgc/rgccompile.scm 282 */
														obj_t BgL_arg2247z00_1169;

														obj_t BgL_arg2248z00_1170;

														BgL_arg2247z00_1169 =
															BGl_symbol2880z00zz__rgc_compilez00;
														{	/* Rgc/rgccompile.scm 282 */
															obj_t BgL_arg2249z00_1171;

															{
																obj_t BgL_startz00_1175;

																obj_t BgL_resz00_1176;

																BgL_startz00_1175 = BgL_startz00_1155;
																BgL_resz00_1176 = BNIL;
															BgL_zc3anonymousza32251ze3z83_1177:
																if (
																	((long) CINT(BgL_startz00_1175) ==
																		(long) CINT(BgL_stopz00_1156)))
																	{	/* Rgc/rgccompile.scm 284 */
																		BgL_arg2249z00_1171 = BgL_resz00_1176;
																	}
																else
																	{	/* Rgc/rgccompile.scm 286 */
																		long BgL_arg2253z00_1179;

																		obj_t BgL_arg2255z00_1180;

																		BgL_arg2253z00_1179 =
																			(
																			(long) CINT(BgL_startz00_1175) +
																			((long) 1));
																		{	/* Rgc/rgccompile.scm 287 */
																			obj_t BgL_arg2256z00_1181;

																			{	/* Rgc/rgccompile.scm 287 */
																				obj_t BgL_arg2257z00_1182;

																				obj_t BgL_arg2259z00_1183;

																				BgL_arg2257z00_1182 =
																					BGl_symbol2874z00zz__rgc_compilez00;
																				{	/* Rgc/rgccompile.scm 287 */
																					obj_t BgL_list2260z00_1184;

																					{	/* Rgc/rgccompile.scm 287 */
																						obj_t BgL_arg2262z00_1185;

																						BgL_arg2262z00_1185 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2260z00_1184 =
																							MAKE_PAIR(BgL_startz00_1175,
																							BgL_arg2262z00_1185);
																					}
																					BgL_arg2259z00_1183 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_varz00_2956,
																						BgL_list2260z00_1184);
																				}
																				BgL_arg2256z00_1181 =
																					MAKE_PAIR(BgL_arg2257z00_1182,
																					BgL_arg2259z00_1183);
																			}
																			BgL_arg2255z00_1180 =
																				MAKE_PAIR(BgL_arg2256z00_1181,
																				BgL_resz00_1176);
																		}
																		{
																			obj_t BgL_resz00_3406;

																			obj_t BgL_startz00_3404;

																			BgL_startz00_3404 =
																				BINT(BgL_arg2253z00_1179);
																			BgL_resz00_3406 = BgL_arg2255z00_1180;
																			BgL_resz00_1176 = BgL_resz00_3406;
																			BgL_startz00_1175 = BgL_startz00_3404;
																			goto BgL_zc3anonymousza32251ze3z83_1177;
																		}
																	}
															}
															BgL_arg2248z00_1170 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2249z00_1171, BNIL);
														}
														BgL_val0_1877z00_1167 =
															MAKE_PAIR(BgL_arg2247z00_1169,
															BgL_arg2248z00_1170);
													}
													BgL_val1_1878z00_1168 =
														(
														(long) CINT(BgL_stopz00_1156) -
														(long) CINT(BgL_startz00_1155));
													{	/* Rgc/rgccompile.scm 282 */
														int BgL_auxz00_3412;

														BgL_auxz00_3412 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_3412);
													}
													{	/* Rgc/rgccompile.scm 282 */
														obj_t BgL_auxz00_3417;

														int BgL_auxz00_3415;

														BgL_auxz00_3417 = BINT(BgL_val1_1878z00_1168);
														BgL_auxz00_3415 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_3415,
															BgL_auxz00_3417);
													}
													BgL_testz00_1244 = BgL_val0_1877z00_1167;
												}
											else
												{	/* Rgc/rgccompile.scm 289 */
													bool_t BgL_testz00_3420;

													{	/* Rgc/rgccompile.scm 289 */
														bool_t BgL_testz00_3421;

														{	/* Rgc/rgccompile.scm 289 */
															obj_t BgL_arg2295z00_1223;

															BgL_arg2295z00_1223 =
																BGl_rgczd2maxzd2charz00zz__rgc_configz00();
															BgL_testz00_3421 =
																(
																(long) CINT(BgL_stopz00_1156) ==
																(long) CINT(BgL_arg2295z00_1223));
														}
														if (BgL_testz00_3421)
															{	/* Rgc/rgccompile.scm 289 */
																BgL_testz00_3420 =
																	(
																	(long) CINT(BgL_startz00_1155) == ((long) 1));
															}
														else
															{	/* Rgc/rgccompile.scm 289 */
																BgL_testz00_3420 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_3420)
														{	/* Rgc/rgccompile.scm 289 */
															{	/* Rgc/rgccompile.scm 290 */
																int BgL_auxz00_3428;

																BgL_auxz00_3428 = (int) (((long) 2));
																BGL_MVALUES_NUMBER_SET(BgL_auxz00_3428);
															}
															{	/* Rgc/rgccompile.scm 290 */
																obj_t BgL_auxz00_3433;

																int BgL_auxz00_3431;

																BgL_auxz00_3433 = BINT(((long) 0));
																BgL_auxz00_3431 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_auxz00_3431,
																	BgL_auxz00_3433);
															}
															BgL_testz00_1244 = BTRUE;
														}
													else
														{	/* Rgc/rgccompile.scm 291 */
															bool_t BgL_testz00_3436;

															{	/* Rgc/rgccompile.scm 291 */
																obj_t BgL_arg2293z00_1221;

																BgL_arg2293z00_1221 =
																	BGl_rgczd2maxzd2charz00zz__rgc_configz00();
																BgL_testz00_3436 =
																	(
																	(long) CINT(BgL_stopz00_1156) ==
																	(long) CINT(BgL_arg2293z00_1221));
															}
															if (BgL_testz00_3436)
																{	/* Rgc/rgccompile.scm 292 */
																	obj_t BgL_val0_1881z00_1191;

																	{	/* Rgc/rgccompile.scm 292 */
																		obj_t BgL_arg2265z00_1193;

																		obj_t BgL_arg2266z00_1194;

																		BgL_arg2265z00_1193 =
																			BGl_symbol2882z00zz__rgc_compilez00;
																		{	/* Rgc/rgccompile.scm 292 */
																			obj_t BgL_list2267z00_1195;

																			{	/* Rgc/rgccompile.scm 292 */
																				obj_t BgL_arg2268z00_1196;

																				BgL_arg2268z00_1196 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2267z00_1195 =
																					MAKE_PAIR(BgL_startz00_1155,
																					BgL_arg2268z00_1196);
																			}
																			BgL_arg2266z00_1194 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_varz00_2956, BgL_list2267z00_1195);
																		}
																		BgL_val0_1881z00_1191 =
																			MAKE_PAIR(BgL_arg2265z00_1193,
																			BgL_arg2266z00_1194);
																	}
																	{	/* Rgc/rgccompile.scm 292 */
																		int BgL_auxz00_3445;

																		BgL_auxz00_3445 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_3445);
																	}
																	{	/* Rgc/rgccompile.scm 292 */
																		obj_t BgL_auxz00_3450;

																		int BgL_auxz00_3448;

																		BgL_auxz00_3450 = BINT(((long) 1));
																		BgL_auxz00_3448 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_3448,
																			BgL_auxz00_3450);
																	}
																	BgL_testz00_1244 = BgL_val0_1881z00_1191;
																}
															else
																{	/* Rgc/rgccompile.scm 291 */
																	if (
																		((long) CINT(BgL_startz00_1155) ==
																			((long) 1)))
																		{	/* Rgc/rgccompile.scm 294 */
																			obj_t BgL_val0_1883z00_1198;

																			{	/* Rgc/rgccompile.scm 294 */
																				obj_t BgL_arg2270z00_1200;

																				obj_t BgL_arg2271z00_1201;

																				BgL_arg2270z00_1200 =
																					BGl_symbol2884z00zz__rgc_compilez00;
																				{	/* Rgc/rgccompile.scm 294 */
																					obj_t BgL_list2272z00_1202;

																					{	/* Rgc/rgccompile.scm 294 */
																						obj_t BgL_arg2274z00_1203;

																						BgL_arg2274z00_1203 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2272z00_1202 =
																							MAKE_PAIR(BgL_stopz00_1156,
																							BgL_arg2274z00_1203);
																					}
																					BgL_arg2271z00_1201 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_varz00_2956,
																						BgL_list2272z00_1202);
																				}
																				BgL_val0_1883z00_1198 =
																					MAKE_PAIR(BgL_arg2270z00_1200,
																					BgL_arg2271z00_1201);
																			}
																			{	/* Rgc/rgccompile.scm 294 */
																				int BgL_auxz00_3460;

																				BgL_auxz00_3460 = (int) (((long) 2));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_3460);
																			}
																			{	/* Rgc/rgccompile.scm 294 */
																				obj_t BgL_auxz00_3465;

																				int BgL_auxz00_3463;

																				BgL_auxz00_3465 = BINT(((long) 1));
																				BgL_auxz00_3463 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3463,
																					BgL_auxz00_3465);
																			}
																			BgL_testz00_1244 = BgL_val0_1883z00_1198;
																		}
																	else
																		{	/* Rgc/rgccompile.scm 296 */
																			obj_t BgL_val0_1885z00_1204;

																			{	/* Rgc/rgccompile.scm 296 */
																				obj_t BgL_arg2275z00_1206;

																				obj_t BgL_arg2277z00_1207;

																				BgL_arg2275z00_1206 =
																					BGl_symbol2886z00zz__rgc_compilez00;
																				{	/* Rgc/rgccompile.scm 296 */
																					obj_t BgL_arg2278z00_1208;

																					obj_t BgL_arg2279z00_1209;

																					{	/* Rgc/rgccompile.scm 296 */
																						obj_t BgL_arg2283z00_1213;

																						obj_t BgL_arg2284z00_1214;

																						BgL_arg2283z00_1213 =
																							BGl_symbol2882z00zz__rgc_compilez00;
																						{	/* Rgc/rgccompile.scm 296 */
																							obj_t BgL_list2285z00_1215;

																							{	/* Rgc/rgccompile.scm 296 */
																								obj_t BgL_arg2286z00_1216;

																								BgL_arg2286z00_1216 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2285z00_1215 =
																									MAKE_PAIR(BgL_startz00_1155,
																									BgL_arg2286z00_1216);
																							}
																							BgL_arg2284z00_1214 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_varz00_2956,
																								BgL_list2285z00_1215);
																						}
																						BgL_arg2278z00_1208 =
																							MAKE_PAIR(BgL_arg2283z00_1213,
																							BgL_arg2284z00_1214);
																					}
																					{	/* Rgc/rgccompile.scm 296 */
																						obj_t BgL_arg2289z00_1217;

																						obj_t BgL_arg2290z00_1218;

																						BgL_arg2289z00_1217 =
																							BGl_symbol2884z00zz__rgc_compilez00;
																						{	/* Rgc/rgccompile.scm 296 */
																							obj_t BgL_list2291z00_1219;

																							{	/* Rgc/rgccompile.scm 296 */
																								obj_t BgL_arg2292z00_1220;

																								BgL_arg2292z00_1220 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2291z00_1219 =
																									MAKE_PAIR(BgL_stopz00_1156,
																									BgL_arg2292z00_1220);
																							}
																							BgL_arg2290z00_1218 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_varz00_2956,
																								BgL_list2291z00_1219);
																						}
																						BgL_arg2279z00_1209 =
																							MAKE_PAIR(BgL_arg2289z00_1217,
																							BgL_arg2290z00_1218);
																					}
																					{	/* Rgc/rgccompile.scm 296 */
																						obj_t BgL_list2281z00_1211;

																						{	/* Rgc/rgccompile.scm 296 */
																							obj_t BgL_arg2282z00_1212;

																							BgL_arg2282z00_1212 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2281z00_1211 =
																								MAKE_PAIR(BgL_arg2279z00_1209,
																								BgL_arg2282z00_1212);
																						}
																						BgL_arg2277z00_1207 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2278z00_1208,
																							BgL_list2281z00_1211);
																					}
																				}
																				BgL_val0_1885z00_1204 =
																					MAKE_PAIR(BgL_arg2275z00_1206,
																					BgL_arg2277z00_1207);
																			}
																			{	/* Rgc/rgccompile.scm 296 */
																				int BgL_auxz00_3480;

																				BgL_auxz00_3480 = (int) (((long) 2));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_3480);
																			}
																			{	/* Rgc/rgccompile.scm 296 */
																				obj_t BgL_auxz00_3485;

																				int BgL_auxz00_3483;

																				BgL_auxz00_3485 = BINT(((long) 3));
																				BgL_auxz00_3483 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3483,
																					BgL_auxz00_3485);
																			}
																			BgL_testz00_1244 = BgL_val0_1885z00_1204;
										}}}}}
									{	/* Rgc/rgccompile.scm 306 */
										obj_t BgL_cz00_1245;

										{	/* Rgc/rgccompile.scm 306 */
											int BgL_auxz00_3488;

											BgL_auxz00_3488 = (int) (((long) 1));
											BgL_cz00_1245 = BGL_MVALUES_VAL(BgL_auxz00_3488);
										}
										{	/* Rgc/rgccompile.scm 306 */
											obj_t BgL_arg2308z00_1246;

											obj_t BgL_arg2309z00_1247;

											long BgL_arg2310z00_1248;

											{	/* Rgc/rgccompile.scm 306 */
												obj_t BgL_maxz00_2383;

												BgL_maxz00_2383 =
													BGl_rgczd2maxzd2charz00zz__rgc_configz00();
												{
													obj_t BgL_iz00_2385;

													BgL_iz00_2385 = BgL_stopz00_1243;
												BgL_loopz00_2384:
													if (
														((long) CINT(BgL_iz00_2385) ==
															(long) CINT(BgL_maxz00_2383)))
														{	/* Rgc/rgccompile.scm 306 */
															BgL_arg2308z00_1246 = BINT(((long) -1));
														}
													else
														{	/* Rgc/rgccompile.scm 306 */
															if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00
																(BgL_setz00_1227, (long) CINT(BgL_iz00_2385)))
																{	/* Rgc/rgccompile.scm 306 */
																	BgL_arg2308z00_1246 = BgL_iz00_2385;
																}
															else
																{	/* Rgc/rgccompile.scm 306 */
																	long BgL_arg2233z00_2388;

																	BgL_arg2233z00_2388 =
																		((long) CINT(BgL_iz00_2385) + ((long) 1));
																	{
																		obj_t BgL_iz00_3502;

																		BgL_iz00_3502 = BINT(BgL_arg2233z00_2388);
																		BgL_iz00_2385 = BgL_iz00_3502;
																		goto BgL_loopz00_2384;
																	}
																}
														}
												}
											}
											BgL_arg2309z00_1247 =
												MAKE_PAIR(BgL_testz00_1244, BgL_testsz00_1233);
											BgL_arg2310z00_1248 =
												((long) CINT(BgL_cz00_1245) + BgL_costz00_1234);
											{
												long BgL_costz00_3509;

												obj_t BgL_testsz00_3508;

												obj_t BgL_startz00_3507;

												BgL_startz00_3507 = BgL_arg2308z00_1246;
												BgL_testsz00_3508 = BgL_arg2309z00_1247;
												BgL_costz00_3509 = BgL_arg2310z00_1248;
												BgL_costz00_1234 = BgL_costz00_3509;
												BgL_testsz00_1233 = BgL_testsz00_3508;
												BgL_startz00_1232 = BgL_startz00_3507;
												goto BgL_zc3anonymousza32302ze3z83_1235;
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



/* state-transition-list */
	obj_t BGl_statezd2transitionzd2listz00zz__rgc_compilez00(obj_t
		BgL_transitionsz00_24)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 328 */
			{
				obj_t BgL_transitionsz00_1256;

				obj_t BgL_resz00_1257;

				BgL_transitionsz00_1256 = BgL_transitionsz00_24;
				BgL_resz00_1257 = BNIL;
			BgL_zc3anonymousza32311ze3z83_1258:
				if (NULLP(BgL_transitionsz00_1256))
					{	/* Rgc/rgccompile.scm 331 */
						return BgL_resz00_1257;
					}
				else
					{	/* Rgc/rgccompile.scm 333 */
						obj_t BgL_transitionz00_1260;

						BgL_transitionz00_1260 = CAR(BgL_transitionsz00_1256);
						{	/* Rgc/rgccompile.scm 333 */
							obj_t BgL_charz00_1261;

							BgL_charz00_1261 = CAR(BgL_transitionz00_1260);
							{	/* Rgc/rgccompile.scm 334 */
								obj_t BgL_statez00_1262;

								BgL_statez00_1262 = CDR(BgL_transitionz00_1260);
								{	/* Rgc/rgccompile.scm 335 */

									{	/* Rgc/rgccompile.scm 336 */
										obj_t BgL_cellz00_1263;

										BgL_cellz00_1263 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_statez00_1262, BgL_resz00_1257);
										if (PAIRP(BgL_cellz00_1263))
											{	/* Rgc/rgccompile.scm 337 */
												BGl_rgcsetzd2addz12zc0zz__rgc_setz00(CDR
													(BgL_cellz00_1263), (long) CINT(BgL_charz00_1261));
												{
													obj_t BgL_transitionsz00_3522;

													BgL_transitionsz00_3522 =
														CDR(BgL_transitionsz00_1256);
													BgL_transitionsz00_1256 = BgL_transitionsz00_3522;
													goto BgL_zc3anonymousza32311ze3z83_1258;
												}
											}
										else
											{	/* Rgc/rgccompile.scm 338 */
												obj_t BgL_setz00_1267;

												{	/* Rgc/rgccompile.scm 338 */
													obj_t BgL_arg2319z00_1271;

													obj_t BgL_arg2320z00_1272;

													{	/* Rgc/rgccompile.scm 338 */
														obj_t BgL_list2321z00_1273;

														BgL_list2321z00_1273 =
															MAKE_PAIR(BgL_charz00_1261, BNIL);
														BgL_arg2319z00_1271 = BgL_list2321z00_1273;
													}
													BgL_arg2320z00_1272 =
														BGl_rgczd2maxzd2charz00zz__rgc_configz00();
													BgL_setz00_1267 =
														BGl_listzd2ze3rgcsetz31zz__rgc_setz00
														(BgL_arg2319z00_1271,
														(long) CINT(BgL_arg2320z00_1272));
												}
												{	/* Rgc/rgccompile.scm 339 */
													obj_t BgL_arg2316z00_1268;

													obj_t BgL_arg2317z00_1269;

													BgL_arg2316z00_1268 = CDR(BgL_transitionsz00_1256);
													{	/* Rgc/rgccompile.scm 340 */
														obj_t BgL_arg2318z00_1270;

														BgL_arg2318z00_1270 =
															MAKE_PAIR(BgL_statez00_1262, BgL_setz00_1267);
														BgL_arg2317z00_1269 =
															MAKE_PAIR(BgL_arg2318z00_1270, BgL_resz00_1257);
													}
													{
														obj_t BgL_resz00_3532;

														obj_t BgL_transitionsz00_3531;

														BgL_transitionsz00_3531 = BgL_arg2316z00_1268;
														BgL_resz00_3532 = BgL_arg2317z00_1269;
														BgL_resz00_1257 = BgL_resz00_3532;
														BgL_transitionsz00_1256 = BgL_transitionsz00_3531;
														goto BgL_zc3anonymousza32311ze3z83_1258;
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



/* insort */
	obj_t BGl_insortz00zz__rgc_compilez00(int BgL_elz00_25, obj_t BgL_lstz00_26)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 350 */
			if (NULLP(BgL_lstz00_26))
				{	/* Rgc/rgccompile.scm 353 */
					obj_t BgL_list2323z00_1276;

					BgL_list2323z00_1276 = MAKE_PAIR(BINT(BgL_elz00_25), BNIL);
					return BgL_list2323z00_1276;
				}
			else
				{	/* Rgc/rgccompile.scm 354 */
					bool_t BgL_testz00_3537;

					{	/* Rgc/rgccompile.scm 354 */
						long BgL_auxz00_3538;

						{	/* Rgc/rgccompile.scm 354 */
							obj_t BgL_pairz00_2408;

							BgL_pairz00_2408 = BgL_lstz00_26;
							BgL_auxz00_3538 = (long) CINT(CAR(BgL_pairz00_2408));
						}
						BgL_testz00_3537 = ((long) (BgL_elz00_25) < BgL_auxz00_3538);
					}
					if (BgL_testz00_3537)
						{	/* Rgc/rgccompile.scm 354 */
							return MAKE_PAIR(BINT(BgL_elz00_25), BgL_lstz00_26);
						}
					else
						{	/* Rgc/rgccompile.scm 356 */
							bool_t BgL_testz00_3545;

							{	/* Rgc/rgccompile.scm 356 */
								long BgL_auxz00_3546;

								{	/* Rgc/rgccompile.scm 356 */
									obj_t BgL_pairz00_2411;

									BgL_pairz00_2411 = BgL_lstz00_26;
									BgL_auxz00_3546 = (long) CINT(CAR(BgL_pairz00_2411));
								}
								BgL_testz00_3545 = ((long) (BgL_elz00_25) == BgL_auxz00_3546);
							}
							if (BgL_testz00_3545)
								{	/* Rgc/rgccompile.scm 356 */
									return BgL_lstz00_26;
								}
							else
								{	/* Rgc/rgccompile.scm 356 */
									return
										MAKE_PAIR(CAR(BgL_lstz00_26),
										BGl_insortz00zz__rgc_compilez00(BgL_elz00_25,
											CDR(BgL_lstz00_26)));
								}
						}
				}
		}
	}



/* compile-match */
	obj_t BGl_compilezd2matchzd2zz__rgc_compilez00(obj_t BgL_transitionsz00_27)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 369 */
			{
				obj_t BgL_matchesz00_1300;

				{
					obj_t BgL_transitionsz00_1287;

					obj_t BgL_matchesz00_1288;

					BgL_transitionsz00_1287 = BgL_transitionsz00_27;
					BgL_matchesz00_1288 = BNIL;
				BgL_zc3anonymousza32331ze3z83_1289:
					if (NULLP(BgL_transitionsz00_1287))
						{	/* Rgc/rgccompile.scm 393 */
							BgL_matchesz00_1300 = BgL_matchesz00_1288;
							if (NULLP(BgL_matchesz00_1300))
								{	/* Rgc/rgccompile.scm 373 */
									return BFALSE;
								}
							else
								{	/* Rgc/rgccompile.scm 373 */
									return BGl_loopz00zz__rgc_compilez00(BgL_matchesz00_1300);
								}
						}
					else
						{	/* Rgc/rgccompile.scm 395 */
							obj_t BgL_transitionz00_1291;

							BgL_transitionz00_1291 = CAR(BgL_transitionsz00_1287);
							{	/* Rgc/rgccompile.scm 395 */
								obj_t BgL_charz00_1292;

								BgL_charz00_1292 = CAR(BgL_transitionz00_1291);
								{	/* Rgc/rgccompile.scm 397 */

									if (BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(CINT
											(BgL_charz00_1292)))
										{
											obj_t BgL_matchesz00_3567;

											obj_t BgL_transitionsz00_3565;

											BgL_transitionsz00_3565 = CDR(BgL_transitionsz00_1287);
											BgL_matchesz00_3567 =
												BGl_insortz00zz__rgc_compilez00
												(BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00
												(CINT(BgL_charz00_1292)), BgL_matchesz00_1288);
											BgL_matchesz00_1288 = BgL_matchesz00_3567;
											BgL_transitionsz00_1287 = BgL_transitionsz00_3565;
											goto BgL_zc3anonymousza32331ze3z83_1289;
										}
									else
										{
											obj_t BgL_transitionsz00_3571;

											BgL_transitionsz00_3571 = CDR(BgL_transitionsz00_1287);
											BgL_transitionsz00_1287 = BgL_transitionsz00_3571;
											goto BgL_zc3anonymousza32331ze3z83_1289;
										}
								}
							}
						}
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__rgc_compilez00(obj_t BgL_matchesz00_1304)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 376 */
			if (NULLP(BgL_matchesz00_1304))
				{	/* Rgc/rgccompile.scm 377 */
					return BGl_symbol2848z00zz__rgc_compilez00;
				}
			else
				{	/* Rgc/rgccompile.scm 379 */
					obj_t BgL_matchz00_1307;

					BgL_matchz00_1307 = CAR(BgL_matchesz00_1304);
					{	/* Rgc/rgccompile.scm 379 */
						obj_t BgL_predsz00_1308;

						BgL_predsz00_1308 =
							BGl_predicatezd2matchzd2zz__rgc_rulesz00(CINT(BgL_matchz00_1307));
						{	/* Rgc/rgccompile.scm 380 */

							if (PAIRP(BgL_predsz00_1308))
								{	/* Rgc/rgccompile.scm 383 */
									obj_t BgL_arg2343z00_1310;

									obj_t BgL_arg2344z00_1311;

									BgL_arg2343z00_1310 = BGl_symbol2862z00zz__rgc_compilez00;
									{	/* Rgc/rgccompile.scm 383 */
										obj_t BgL_arg2345z00_1312;

										obj_t BgL_arg2346z00_1313;

										obj_t BgL_arg2347z00_1314;

										BgL_arg2345z00_1312 =
											MAKE_PAIR(BGl_symbol2886z00zz__rgc_compilez00,
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_predsz00_1308, BNIL));
										{	/* Rgc/rgccompile.scm 384 */
											obj_t BgL_arg2354z00_1321;

											obj_t BgL_arg2355z00_1322;

											BgL_arg2354z00_1321 = BGl_symbol2888z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 385 */
												obj_t BgL_arg2356z00_1323;

												{	/* Rgc/rgccompile.scm 385 */
													obj_t BgL_arg2360z00_1327;

													obj_t BgL_arg2361z00_1328;

													BgL_arg2360z00_1327 =
														BGl_symbol2890z00zz__rgc_compilez00;
													{	/* Rgc/rgccompile.scm 385 */
														obj_t BgL_list2362z00_1329;

														BgL_list2362z00_1329 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2361z00_1328 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol2850z00zz__rgc_compilez00,
															BgL_list2362z00_1329);
													}
													BgL_arg2356z00_1323 =
														MAKE_PAIR(BgL_arg2360z00_1327, BgL_arg2361z00_1328);
												}
												{	/* Rgc/rgccompile.scm 384 */
													obj_t BgL_list2358z00_1325;

													{	/* Rgc/rgccompile.scm 384 */
														obj_t BgL_arg2359z00_1326;

														BgL_arg2359z00_1326 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2358z00_1325 =
															MAKE_PAIR(BgL_matchz00_1307, BgL_arg2359z00_1326);
													}
													BgL_arg2355z00_1322 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2356z00_1323, BgL_list2358z00_1325);
												}
											}
											BgL_arg2346z00_1313 =
												MAKE_PAIR(BgL_arg2354z00_1321, BgL_arg2355z00_1322);
										}
										BgL_arg2347z00_1314 =
											BGl_loopz00zz__rgc_compilez00(CDR(BgL_matchesz00_1304));
										{	/* Rgc/rgccompile.scm 383 */
											obj_t BgL_list2349z00_1316;

											{	/* Rgc/rgccompile.scm 383 */
												obj_t BgL_arg2350z00_1317;

												{	/* Rgc/rgccompile.scm 383 */
													obj_t BgL_arg2351z00_1318;

													BgL_arg2351z00_1318 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2350z00_1317 =
														MAKE_PAIR(BgL_arg2347z00_1314, BgL_arg2351z00_1318);
												}
												BgL_list2349z00_1316 =
													MAKE_PAIR(BgL_arg2346z00_1313, BgL_arg2350z00_1317);
											}
											BgL_arg2344z00_1311 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2345z00_1312, BgL_list2349z00_1316);
										}
									}
									return MAKE_PAIR(BgL_arg2343z00_1310, BgL_arg2344z00_1311);
								}
							else
								{	/* Rgc/rgccompile.scm 388 */
									obj_t BgL_arg2364z00_1331;

									obj_t BgL_arg2365z00_1332;

									BgL_arg2364z00_1331 = BGl_symbol2888z00zz__rgc_compilez00;
									{	/* Rgc/rgccompile.scm 389 */
										obj_t BgL_arg2366z00_1333;

										{	/* Rgc/rgccompile.scm 389 */
											obj_t BgL_arg2370z00_1337;

											obj_t BgL_arg2371z00_1338;

											BgL_arg2370z00_1337 = BGl_symbol2890z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 389 */
												obj_t BgL_list2372z00_1339;

												BgL_list2372z00_1339 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2371z00_1338 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol2850z00zz__rgc_compilez00,
													BgL_list2372z00_1339);
											}
											BgL_arg2366z00_1333 =
												MAKE_PAIR(BgL_arg2370z00_1337, BgL_arg2371z00_1338);
										}
										{	/* Rgc/rgccompile.scm 388 */
											obj_t BgL_list2368z00_1335;

											{	/* Rgc/rgccompile.scm 388 */
												obj_t BgL_arg2369z00_1336;

												BgL_arg2369z00_1336 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2368z00_1335 =
													MAKE_PAIR(BgL_matchz00_1307, BgL_arg2369z00_1336);
											}
											BgL_arg2365z00_1332 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2366z00_1333, BgL_list2368z00_1335);
										}
									}
									return MAKE_PAIR(BgL_arg2364z00_1331, BgL_arg2365z00_1332);
								}
						}
					}
				}
		}
	}



/* init-compile-member-vector! */
	obj_t BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 412 */
			if (VECTORP(BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00))
				{	/* Rgc/rgccompile.scm 413 */
					return BFALSE;
				}
			else
				{	/* Rgc/rgccompile.scm 414 */
					obj_t BgL_arg2374z00_1343;

					BgL_arg2374z00_1343 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						BGl_rgczd2maxzd2charz00zz__rgc_configz00());
					return (BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 =
						make_vector(CINT(BgL_arg2374z00_1343), BUNSPEC), BUNSPEC);
				}
		}
	}



/* chars->char-ranges */
	obj_t BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00(obj_t BgL_charsz00_28)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 429 */
			{	/* Rgc/rgccompile.scm 430 */
				obj_t BgL_maxz00_1347;

				BgL_maxz00_1347 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				{
					obj_t BgL_iz00_1380;

					obj_t BgL_iz00_1371;

					BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
						(BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00, BFALSE);
					{
						obj_t BgL_l1893z00_2430;

						BgL_l1893z00_2430 = BgL_charsz00_28;
					BgL_zc3anonymousza32378ze3z83_2429:
						if (PAIRP(BgL_l1893z00_2430))
							{	/* Rgc/rgccompile.scm 455 */
								{	/* Rgc/rgccompile.scm 455 */
									obj_t BgL_xz00_2435;

									BgL_xz00_2435 = CAR(BgL_l1893z00_2430);
									VECTOR_SET(BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00,
										CINT(BgL_xz00_2435), BTRUE);
								}
								{
									obj_t BgL_l1893z00_3617;

									BgL_l1893z00_3617 = CDR(BgL_l1893z00_2430);
									BgL_l1893z00_2430 = BgL_l1893z00_3617;
									goto BgL_zc3anonymousza32378ze3z83_2429;
								}
							}
						else
							{	/* Rgc/rgccompile.scm 455 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_iz00_1360;

						obj_t BgL_rangesz00_1361;

						BgL_iz00_1360 = BINT(((long) 0));
						BgL_rangesz00_1361 = BNIL;
					BgL_zc3anonymousza32381ze3z83_1362:
						if (((long) CINT(BgL_iz00_1360) >= (long) CINT(BgL_maxz00_1347)))
							{	/* Rgc/rgccompile.scm 458 */
								return bgl_reverse_bang(BgL_rangesz00_1361);
							}
						else
							{	/* Rgc/rgccompile.scm 460 */
								obj_t BgL_rangez00_1364;

								{	/* Rgc/rgccompile.scm 460 */
									obj_t BgL_startz00_2465;

									BgL_iz00_1371 = BgL_iz00_1360;
									{
										obj_t BgL_iz00_1374;

										BgL_iz00_1374 = BgL_iz00_1371;
									BgL_zc3anonymousza32389ze3z83_1375:
										if (
											((long) CINT(BgL_iz00_1374) ==
												(long) CINT(BgL_maxz00_1347)))
											{	/* Rgc/rgccompile.scm 434 */
												BgL_startz00_2465 = BFALSE;
											}
										else
											{	/* Rgc/rgccompile.scm 436 */
												bool_t BgL_testz00_3628;

												{	/* Rgc/rgccompile.scm 436 */
													obj_t BgL_vectorz00_2477;

													int BgL_kz00_2478;

													BgL_vectorz00_2477 =
														BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00;
													BgL_kz00_2478 = CINT(BgL_iz00_1374);
													BgL_testz00_3628 =
														CBOOL(VECTOR_REF(BgL_vectorz00_2477,
															BgL_kz00_2478));
												}
												if (BgL_testz00_3628)
													{	/* Rgc/rgccompile.scm 436 */
														BgL_startz00_2465 = BgL_iz00_1374;
													}
												else
													{
														obj_t BgL_iz00_3632;

														BgL_iz00_3632 =
															BINT(((long) CINT(BgL_iz00_1374) + ((long) 1)));
														BgL_iz00_1374 = BgL_iz00_3632;
														goto BgL_zc3anonymousza32389ze3z83_1375;
													}
											}
									}
									if (CBOOL(BgL_startz00_2465))
										{	/* Rgc/rgccompile.scm 460 */
											long BgL_arg2399z00_2466;

											{	/* Rgc/rgccompile.scm 460 */
												long BgL_auxz00_3638;

												{	/* Rgc/rgccompile.scm 460 */
													obj_t BgL_auxz00_3639;

													BgL_iz00_1380 = BgL_startz00_2465;
													{
														obj_t BgL_iz00_1383;

														BgL_iz00_1383 = BgL_iz00_1380;
													BgL_zc3anonymousza32394ze3z83_1384:
														if (
															((long) CINT(BgL_iz00_1383) ==
																(long) CINT(BgL_maxz00_1347)))
															{	/* Rgc/rgccompile.scm 443 */
																BgL_auxz00_3639 = BgL_maxz00_1347;
															}
														else
															{	/* Rgc/rgccompile.scm 445 */
																bool_t BgL_testz00_3644;

																{	/* Rgc/rgccompile.scm 445 */
																	obj_t BgL_vectorz00_2483;

																	int BgL_kz00_2484;

																	BgL_vectorz00_2483 =
																		BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00;
																	BgL_kz00_2484 = CINT(BgL_iz00_1383);
																	BgL_testz00_3644 =
																		CBOOL(VECTOR_REF(BgL_vectorz00_2483,
																			BgL_kz00_2484));
																}
																if (BgL_testz00_3644)
																	{
																		obj_t BgL_iz00_3648;

																		BgL_iz00_3648 =
																			BINT(
																			((long) CINT(BgL_iz00_1383) +
																				((long) 1)));
																		BgL_iz00_1383 = BgL_iz00_3648;
																		goto BgL_zc3anonymousza32394ze3z83_1384;
																	}
																else
																	{	/* Rgc/rgccompile.scm 445 */
																		BgL_auxz00_3639 = BgL_iz00_1383;
																	}
															}
													}
													BgL_auxz00_3638 = (long) CINT(BgL_auxz00_3639);
												}
												BgL_arg2399z00_2466 = (BgL_auxz00_3638 - ((long) 1));
											}
											BgL_rangez00_1364 =
												MAKE_PAIR(BgL_startz00_2465, BINT(BgL_arg2399z00_2466));
										}
									else
										{	/* Rgc/rgccompile.scm 460 */
											BgL_rangez00_1364 = BgL_maxz00_1347;
										}
								}
								if (PAIRP(BgL_rangez00_1364))
									{	/* Rgc/rgccompile.scm 462 */
										long BgL_arg2384z00_1366;

										obj_t BgL_arg2385z00_1367;

										BgL_arg2384z00_1366 =
											((long) CINT(CDR(BgL_rangez00_1364)) + ((long) 1));
										BgL_arg2385z00_1367 =
											MAKE_PAIR(BgL_rangez00_1364, BgL_rangesz00_1361);
										{
											obj_t BgL_rangesz00_3664;

											obj_t BgL_iz00_3662;

											BgL_iz00_3662 = BINT(BgL_arg2384z00_1366);
											BgL_rangesz00_3664 = BgL_arg2385z00_1367;
											BgL_rangesz00_1361 = BgL_rangesz00_3664;
											BgL_iz00_1360 = BgL_iz00_3662;
											goto BgL_zc3anonymousza32381ze3z83_1362;
										}
									}
								else
									{
										obj_t BgL_iz00_3665;

										BgL_iz00_3665 = BgL_rangez00_1364;
										BgL_iz00_1360 = BgL_iz00_3665;
										goto BgL_zc3anonymousza32381ze3z83_1362;
									}
							}
					}
				}
			}
		}
	}



/* char-ranges->test */
	obj_t BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00(obj_t
		BgL_currentz00_29, obj_t BgL_rangesz00_30)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 470 */
			{	/* Rgc/rgccompile.scm 477 */
				obj_t BgL_arg2402z00_1399;

				obj_t BgL_arg2403z00_1400;

				BgL_arg2402z00_1399 = BGl_symbol2880z00zz__rgc_compilez00;
				{	/* Rgc/rgccompile.scm 477 */
					obj_t BgL_arg2404z00_1401;

					if (NULLP(BgL_rangesz00_30))
						{	/* Rgc/rgccompile.scm 477 */
							BgL_arg2404z00_1401 = BNIL;
						}
					else
						{	/* Rgc/rgccompile.scm 477 */
							obj_t BgL_head1897z00_1405;

							BgL_head1897z00_1405 =
								MAKE_PAIR(BGl_charzd2rangezd2ze3testze3zz__rgc_compilez00
								(BgL_currentz00_29, CAR(BgL_rangesz00_30)), BNIL);
							{	/* Rgc/rgccompile.scm 477 */
								obj_t BgL_g1900z00_1406;

								BgL_g1900z00_1406 = CDR(BgL_rangesz00_30);
								{
									obj_t BgL_l1895z00_2499;

									obj_t BgL_tail1898z00_2500;

									BgL_l1895z00_2499 = BgL_g1900z00_1406;
									BgL_tail1898z00_2500 = BgL_head1897z00_1405;
								BgL_zc3anonymousza32407ze3z83_2498:
									if (NULLP(BgL_l1895z00_2499))
										{	/* Rgc/rgccompile.scm 477 */
											BgL_arg2404z00_1401 = BgL_head1897z00_1405;
										}
									else
										{	/* Rgc/rgccompile.scm 477 */
											obj_t BgL_newtail1899z00_2508;

											BgL_newtail1899z00_2508 =
												MAKE_PAIR
												(BGl_charzd2rangezd2ze3testze3zz__rgc_compilez00
												(BgL_currentz00_29, CAR(BgL_l1895z00_2499)), BNIL);
											SET_CDR(BgL_tail1898z00_2500, BgL_newtail1899z00_2508);
											{
												obj_t BgL_tail1898z00_3681;

												obj_t BgL_l1895z00_3679;

												BgL_l1895z00_3679 = CDR(BgL_l1895z00_2499);
												BgL_tail1898z00_3681 = BgL_newtail1899z00_2508;
												BgL_tail1898z00_2500 = BgL_tail1898z00_3681;
												BgL_l1895z00_2499 = BgL_l1895z00_3679;
												goto BgL_zc3anonymousza32407ze3z83_2498;
											}
										}
								}
							}
						}
					BgL_arg2403z00_1400 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg2404z00_1401,
						BNIL);
				}
				return MAKE_PAIR(BgL_arg2402z00_1399, BgL_arg2403z00_1400);
			}
		}
	}



/* char-range->test */
	obj_t BGl_charzd2rangezd2ze3testze3zz__rgc_compilez00(obj_t
		BgL_currentz00_2955, obj_t BgL_rangez00_1421)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 476 */
			{	/* Rgc/rgccompile.scm 472 */
				obj_t BgL_startz00_1423;

				obj_t BgL_stopz00_1424;

				BgL_startz00_1423 = CAR(BgL_rangez00_1421);
				BgL_stopz00_1424 = CDR(BgL_rangez00_1421);
				if (((long) CINT(BgL_startz00_1423) == (long) CINT(BgL_stopz00_1424)))
					{	/* Rgc/rgccompile.scm 475 */
						obj_t BgL_arg2418z00_1426;

						obj_t BgL_arg2419z00_1427;

						BgL_arg2418z00_1426 = BGl_symbol2874z00zz__rgc_compilez00;
						{	/* Rgc/rgccompile.scm 475 */
							obj_t BgL_list2420z00_1428;

							{	/* Rgc/rgccompile.scm 475 */
								obj_t BgL_arg2421z00_1429;

								BgL_arg2421z00_1429 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2420z00_1428 =
									MAKE_PAIR(BgL_startz00_1423, BgL_arg2421z00_1429);
							}
							BgL_arg2419z00_1427 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_currentz00_2955,
								BgL_list2420z00_1428);
						}
						return MAKE_PAIR(BgL_arg2418z00_1426, BgL_arg2419z00_1427);
					}
				else
					{	/* Rgc/rgccompile.scm 476 */
						obj_t BgL_arg2422z00_1430;

						obj_t BgL_arg2423z00_1431;

						BgL_arg2422z00_1430 = BGl_symbol2886z00zz__rgc_compilez00;
						{	/* Rgc/rgccompile.scm 476 */
							obj_t BgL_arg2424z00_1432;

							obj_t BgL_arg2425z00_1433;

							{	/* Rgc/rgccompile.scm 476 */
								obj_t BgL_arg2429z00_1437;

								obj_t BgL_arg2430z00_1438;

								BgL_arg2429z00_1437 = BGl_symbol2882z00zz__rgc_compilez00;
								{	/* Rgc/rgccompile.scm 476 */
									obj_t BgL_list2431z00_1439;

									{	/* Rgc/rgccompile.scm 476 */
										obj_t BgL_arg2432z00_1440;

										BgL_arg2432z00_1440 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2431z00_1439 =
											MAKE_PAIR(BgL_startz00_1423, BgL_arg2432z00_1440);
									}
									BgL_arg2430z00_1438 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_currentz00_2955, BgL_list2431z00_1439);
								}
								BgL_arg2424z00_1432 =
									MAKE_PAIR(BgL_arg2429z00_1437, BgL_arg2430z00_1438);
							}
							{	/* Rgc/rgccompile.scm 476 */
								obj_t BgL_arg2434z00_1441;

								obj_t BgL_arg2435z00_1442;

								BgL_arg2434z00_1441 = BGl_symbol2892z00zz__rgc_compilez00;
								{	/* Rgc/rgccompile.scm 476 */
									obj_t BgL_list2436z00_1443;

									{	/* Rgc/rgccompile.scm 476 */
										obj_t BgL_arg2437z00_1444;

										BgL_arg2437z00_1444 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2436z00_1443 =
											MAKE_PAIR(BgL_stopz00_1424, BgL_arg2437z00_1444);
									}
									BgL_arg2435z00_1442 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_currentz00_2955, BgL_list2436z00_1443);
								}
								BgL_arg2425z00_1433 =
									MAKE_PAIR(BgL_arg2434z00_1441, BgL_arg2435z00_1442);
							}
							{	/* Rgc/rgccompile.scm 476 */
								obj_t BgL_list2427z00_1435;

								{	/* Rgc/rgccompile.scm 476 */
									obj_t BgL_arg2428z00_1436;

									BgL_arg2428z00_1436 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2427z00_1435 =
										MAKE_PAIR(BgL_arg2425z00_1433, BgL_arg2428z00_1436);
								}
								BgL_arg2423z00_1431 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2424z00_1432, BgL_list2427z00_1435);
							}
						}
						return MAKE_PAIR(BgL_arg2422z00_1430, BgL_arg2423z00_1431);
					}
			}
		}
	}



/* compile-member-test */
	obj_t BGl_compilezd2memberzd2testz00zz__rgc_compilez00(obj_t
		BgL_currentz00_31, obj_t BgL_charsz00_32)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 484 */
			{

				if (PAIRP(BgL_charsz00_32))
					{	/* Rgc/rgccompile.scm 485 */
						if (NULLP(CDR(BgL_charsz00_32)))
							{	/* Rgc/rgccompile.scm 485 */
								obj_t BgL_arg2440z00_1452;

								BgL_arg2440z00_1452 = CAR(BgL_charsz00_32);
								{	/* Rgc/rgccompile.scm 485 */
									obj_t BgL_arg2442z00_2557;

									obj_t BgL_arg2443z00_2558;

									BgL_arg2442z00_2557 = BGl_symbol2874z00zz__rgc_compilez00;
									{	/* Rgc/rgccompile.scm 485 */
										obj_t BgL_list2444z00_2559;

										{	/* Rgc/rgccompile.scm 485 */
											obj_t BgL_arg2445z00_2560;

											BgL_arg2445z00_2560 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2444z00_2559 =
												MAKE_PAIR(BgL_arg2440z00_1452, BgL_arg2445z00_2560);
										}
										BgL_arg2443z00_2558 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_currentz00_31, BgL_list2444z00_2559);
									}
									return MAKE_PAIR(BgL_arg2442z00_2557, BgL_arg2443z00_2558);
								}
							}
						else
							{	/* Rgc/rgccompile.scm 485 */
							BgL_tagzd21390zd2_1448:
								{	/* Rgc/rgccompile.scm 489 */
									obj_t BgL_rangesz00_1458;

									BgL_rangesz00_1458 =
										BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00
										(BgL_charsz00_32);
									if ((bgl_list_length(BgL_rangesz00_1458) >
											(bgl_list_length(BgL_charsz00_32) / ((long) 3))))
										{	/* Rgc/rgccompile.scm 491 */
											obj_t BgL_arg2447z00_1460;

											obj_t BgL_arg2448z00_1461;

											BgL_arg2447z00_1460 = BGl_symbol2894z00zz__rgc_compilez00;
											{	/* Rgc/rgccompile.scm 491 */
												obj_t BgL_arg2449z00_1462;

												{	/* Rgc/rgccompile.scm 491 */
													obj_t BgL_arg2453z00_1466;

													obj_t BgL_arg2454z00_1467;

													BgL_arg2453z00_1466 =
														BGl_symbol2896z00zz__rgc_compilez00;
													{	/* Rgc/rgccompile.scm 491 */
														obj_t BgL_list2455z00_1468;

														BgL_list2455z00_1468 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2454z00_1467 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_charsz00_32, BgL_list2455z00_1468);
													}
													BgL_arg2449z00_1462 =
														MAKE_PAIR(BgL_arg2453z00_1466, BgL_arg2454z00_1467);
												}
												{	/* Rgc/rgccompile.scm 491 */
													obj_t BgL_list2451z00_1464;

													{	/* Rgc/rgccompile.scm 491 */
														obj_t BgL_arg2452z00_1465;

														BgL_arg2452z00_1465 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2451z00_1464 =
															MAKE_PAIR(BgL_arg2449z00_1462,
															BgL_arg2452z00_1465);
													}
													BgL_arg2448z00_1461 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_currentz00_31, BgL_list2451z00_1464);
											}}
											return
												MAKE_PAIR(BgL_arg2447z00_1460, BgL_arg2448z00_1461);
										}
									else
										{	/* Rgc/rgccompile.scm 490 */
											return
												BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00
												(BgL_currentz00_31, BgL_rangesz00_1458);
										}
								}
							}
					}
				else
					{	/* Rgc/rgccompile.scm 485 */
						goto BgL_tagzd21390zd2_1448;
					}
			}
		}
	}



/* compile-submatches */
	obj_t BGl_compilezd2submatcheszd2zz__rgc_compilez00(obj_t BgL_currentz00_33,
		obj_t BgL_submatchesz00_34, obj_t BgL_positionsz00_35,
		obj_t BgL_positionszd2tozd2charz00_36)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 497 */
			{
				obj_t BgL_cellz00_1652;

				obj_t BgL_smz00_1653;

				{	/* Rgc/rgccompile.scm 510 */
					obj_t BgL_g1834z00_1475;

					BgL_g1834z00_1475 =
						BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_positionsz00_35);
					{
						obj_t BgL_positionsz00_1478;

						obj_t BgL_charzd2submatcheszd2_1479;

						BgL_positionsz00_1478 = BgL_g1834z00_1475;
						BgL_charzd2submatcheszd2_1479 = BNIL;
					BgL_zc3anonymousza32460ze3z83_1480:
						if (NULLP(BgL_positionsz00_1478))
							{	/* Rgc/rgccompile.scm 513 */
								obj_t BgL_fun1906z00_1482;

								{	/* Rgc/rgccompile.scm 513 */
									obj_t BgL_zc3anonymousza32471ze3z83_2951;

									{
										int BgL_auxz00_3733;

										BgL_auxz00_3733 = (int) (((long) 1));
										BgL_zc3anonymousza32471ze3z83_2951 =
											MAKE_EL_PROCEDURE_1(BgL_auxz00_3733);
									}
									PROCEDURE_1_EL_SET(BgL_zc3anonymousza32471ze3z83_2951,
										(int) (((long) 0)), BgL_currentz00_33);
									BgL_fun1906z00_1482 = BgL_zc3anonymousza32471ze3z83_2951;
								}
								if (NULLP(BgL_charzd2submatcheszd2_1479))
									{	/* Rgc/rgccompile.scm 513 */
										return BNIL;
									}
								else
									{	/* Rgc/rgccompile.scm 513 */
										obj_t BgL_head1903z00_1485;

										BgL_head1903z00_1485 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1901z00_2688;

											obj_t BgL_tail1904z00_2689;

											BgL_l1901z00_2688 = BgL_charzd2submatcheszd2_1479;
											BgL_tail1904z00_2689 = BgL_head1903z00_1485;
										BgL_zc3anonymousza32463ze3z83_2687:
											if (NULLP(BgL_l1901z00_2688))
												{	/* Rgc/rgccompile.scm 513 */
													return CDR(BgL_head1903z00_1485);
												}
											else
												{	/* Rgc/rgccompile.scm 513 */
													obj_t BgL_newtail1905z00_2697;

													{	/* Rgc/rgccompile.scm 513 */
														obj_t BgL_arg2467z00_2698;

														{	/* Rgc/rgccompile.scm 513 */
															obj_t BgL_arg2470z00_2700;

															BgL_arg2470z00_2700 = CAR(BgL_l1901z00_2688);
															BgL_arg2467z00_2698 =
																BGl_zc3anonymousza32471ze3z83zz__rgc_compilez00
																(BgL_fun1906z00_1482, BgL_arg2470z00_2700);
														}
														BgL_newtail1905z00_2697 =
															MAKE_PAIR(BgL_arg2467z00_2698, BNIL);
													}
													SET_CDR(BgL_tail1904z00_2689,
														BgL_newtail1905z00_2697);
													{
														obj_t BgL_tail1904z00_3751;

														obj_t BgL_l1901z00_3749;

														BgL_l1901z00_3749 = CDR(BgL_l1901z00_2688);
														BgL_tail1904z00_3751 = BgL_newtail1905z00_2697;
														BgL_tail1904z00_2689 = BgL_tail1904z00_3751;
														BgL_l1901z00_2688 = BgL_l1901z00_3749;
														goto BgL_zc3anonymousza32463ze3z83_2687;
													}
												}
										}
									}
							}
						else
							{	/* Rgc/rgccompile.scm 538 */
								obj_t BgL_posz00_1638;

								BgL_posz00_1638 = CAR(BgL_positionsz00_1478);
								{	/* Rgc/rgccompile.scm 538 */
									obj_t BgL_charz00_1639;

									BgL_charz00_1639 =
										VECTOR_REF(BgL_positionszd2tozd2charz00_36,
										CINT(BgL_posz00_1638));
									{	/* Rgc/rgccompile.scm 539 */
										obj_t BgL_cellz00_1640;

										BgL_cellz00_1640 =
											VECTOR_REF(BgL_submatchesz00_34, CINT(BgL_posz00_1638));
										{	/* Rgc/rgccompile.scm 540 */

											if (NULLP(BgL_cellz00_1640))
												{
													obj_t BgL_positionsz00_3759;

													BgL_positionsz00_3759 = CDR(BgL_positionsz00_1478);
													BgL_positionsz00_1478 = BgL_positionsz00_3759;
													goto BgL_zc3anonymousza32460ze3z83_1480;
												}
											else
												{	/* Rgc/rgccompile.scm 544 */
													obj_t BgL_oldz00_1643;

													BgL_cellz00_1652 = BgL_cellz00_1640;
													BgL_smz00_1653 = BgL_charzd2submatcheszd2_1479;
													{
														obj_t BgL_smz00_1656;

														BgL_smz00_1656 = BgL_smz00_1653;
													BgL_zc3anonymousza32590ze3z83_1657:
														if (NULLP(BgL_smz00_1656))
															{	/* Rgc/rgccompile.scm 501 */
																BgL_oldz00_1643 = BNIL;
															}
														else
															{	/* Rgc/rgccompile.scm 501 */
																if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_cellz00_1652, CDR(CAR(BgL_smz00_1656))))
																	{	/* Rgc/rgccompile.scm 503 */
																		BgL_oldz00_1643 = CAR(BgL_smz00_1656);
																	}
																else
																	{
																		obj_t BgL_smz00_3768;

																		BgL_smz00_3768 = CDR(BgL_smz00_1656);
																		BgL_smz00_1656 = BgL_smz00_3768;
																		goto BgL_zc3anonymousza32590ze3z83_1657;
																	}
															}
													}
													if (PAIRP(BgL_oldz00_1643))
														{	/* Rgc/rgccompile.scm 545 */
															{	/* Rgc/rgccompile.scm 547 */
																obj_t BgL_cellz00_2749;

																BgL_cellz00_2749 = BgL_oldz00_1643;
																{	/* Rgc/rgccompile.scm 547 */
																	obj_t BgL_arg2597z00_2750;

																	BgL_arg2597z00_2750 =
																		MAKE_PAIR(BgL_charz00_1639,
																		CAR(BgL_cellz00_2749));
																	SET_CAR(BgL_cellz00_2749,
																		BgL_arg2597z00_2750);
																}
																BgL_cellz00_2749;
															}
															{
																obj_t BgL_positionsz00_3775;

																BgL_positionsz00_3775 =
																	CDR(BgL_positionsz00_1478);
																BgL_positionsz00_1478 = BgL_positionsz00_3775;
																goto BgL_zc3anonymousza32460ze3z83_1480;
															}
														}
													else
														{	/* Rgc/rgccompile.scm 550 */
															obj_t BgL_arg2584z00_1646;

															obj_t BgL_arg2585z00_1647;

															BgL_arg2584z00_1646 = CDR(BgL_positionsz00_1478);
															{	/* Rgc/rgccompile.scm 551 */
																obj_t BgL_arg2586z00_1648;

																{	/* Rgc/rgccompile.scm 551 */
																	obj_t BgL_arg2587z00_1649;

																	{	/* Rgc/rgccompile.scm 551 */
																		obj_t BgL_list2588z00_1650;

																		BgL_list2588z00_1650 =
																			MAKE_PAIR(BgL_charz00_1639, BNIL);
																		BgL_arg2587z00_1649 = BgL_list2588z00_1650;
																	}
																	BgL_arg2586z00_1648 =
																		MAKE_PAIR(BgL_arg2587z00_1649,
																		BgL_cellz00_1640);
																}
																BgL_arg2585z00_1647 =
																	MAKE_PAIR(BgL_arg2586z00_1648,
																	BgL_charzd2submatcheszd2_1479);
															}
															{
																obj_t BgL_charzd2submatcheszd2_3782;

																obj_t BgL_positionsz00_3781;

																BgL_positionsz00_3781 = BgL_arg2584z00_1646;
																BgL_charzd2submatcheszd2_3782 =
																	BgL_arg2585z00_1647;
																BgL_charzd2submatcheszd2_1479 =
																	BgL_charzd2submatcheszd2_3782;
																BgL_positionsz00_1478 = BgL_positionsz00_3781;
																goto BgL_zc3anonymousza32460ze3z83_1480;
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



/* <anonymous:2471> */
	obj_t BGl_zc3anonymousza32471ze3z83zz__rgc_compilez00(obj_t BgL_envz00_2952,
		obj_t BgL_ezd21401zd2_2954)
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 513 */
			{	/* Rgc/rgccompile.scm 513 */
				obj_t BgL_currentz00_2953;

				BgL_currentz00_2953 =
					PROCEDURE_1_EL_REF(BgL_envz00_2952, (int) (((long) 0)));
				{
					obj_t BgL_ezd21401zd2_1515;

					BgL_ezd21401zd2_1515 = BgL_ezd21401zd2_2954;
					{
						obj_t BgL_charz00_1501;

						obj_t BgL_sz00_1502;

						obj_t BgL_mz00_1503;

						obj_t BgL_smz00_1504;

						obj_t BgL_charz00_1506;

						obj_t BgL_sz00_1507;

						obj_t BgL_mz00_1508;

						obj_t BgL_smz00_1509;

						obj_t BgL_tsz00_1510;

						obj_t BgL_tsmz00_1511;

						if (PAIRP(BgL_ezd21401zd2_1515))
							{	/* Rgc/rgccompile.scm 513 */
								obj_t BgL_cdrzd21413zd2_1518;

								BgL_cdrzd21413zd2_1518 = CDR(BgL_ezd21401zd2_1515);
								if (PAIRP(BgL_cdrzd21413zd2_1518))
									{	/* Rgc/rgccompile.scm 513 */
										obj_t BgL_cdrzd21418zd2_1520;

										BgL_cdrzd21418zd2_1520 = CDR(BgL_cdrzd21413zd2_1518);
										if (NULLP(CAR(BgL_cdrzd21413zd2_1518)))
											{	/* Rgc/rgccompile.scm 513 */
												if (PAIRP(BgL_cdrzd21418zd2_1520))
													{	/* Rgc/rgccompile.scm 513 */
														obj_t BgL_carzd21421zd2_1523;

														BgL_carzd21421zd2_1523 =
															CAR(BgL_cdrzd21418zd2_1520);
														if (PAIRP(BgL_carzd21421zd2_1523))
															{	/* Rgc/rgccompile.scm 513 */
																if (NULLP(CDR(BgL_cdrzd21418zd2_1520)))
																	{	/* Rgc/rgccompile.scm 513 */
																		obj_t BgL_arg2478z00_1526;

																		obj_t BgL_arg2479z00_1527;

																		obj_t BgL_arg2480z00_1528;

																		BgL_arg2478z00_1526 =
																			CAR(BgL_ezd21401zd2_1515);
																		BgL_arg2479z00_1527 =
																			CAR(BgL_carzd21421zd2_1523);
																		BgL_arg2480z00_1528 =
																			CDR(BgL_carzd21421zd2_1523);
																		{	/* Rgc/rgccompile.scm 513 */
																			obj_t BgL_arg2525z00_2587;

																			obj_t BgL_arg2526z00_2588;

																			BgL_arg2525z00_2587 =
																				BGl_symbol2862z00zz__rgc_compilez00;
																			{	/* Rgc/rgccompile.scm 513 */
																				obj_t BgL_arg2527z00_2589;

																				obj_t BgL_arg2528z00_2590;

																				BgL_arg2527z00_2589 =
																					BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																					(BgL_currentz00_2953,
																					BgL_arg2478z00_1526);
																				{	/* Rgc/rgccompile.scm 513 */
																					obj_t BgL_arg2532z00_2592;

																					obj_t BgL_arg2533z00_2593;

																					BgL_arg2532z00_2592 =
																						BGl_symbol2902z00zz__rgc_compilez00;
																					{	/* Rgc/rgccompile.scm 513 */
																						obj_t BgL_list2534z00_2594;

																						{	/* Rgc/rgccompile.scm 513 */
																							obj_t BgL_arg2535z00_2595;

																							BgL_arg2535z00_2595 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2534z00_2594 =
																								MAKE_PAIR(BgL_arg2480z00_1528,
																								BgL_arg2535z00_2595);
																						}
																						BgL_arg2533z00_2593 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2479z00_1527,
																							BgL_list2534z00_2594);
																					}
																					BgL_arg2528z00_2590 =
																						MAKE_PAIR(BgL_arg2532z00_2592,
																						BgL_arg2533z00_2593);
																				}
																				{	/* Rgc/rgccompile.scm 513 */
																					obj_t BgL_list2530z00_2596;

																					{	/* Rgc/rgccompile.scm 513 */
																						obj_t BgL_arg2531z00_2597;

																						BgL_arg2531z00_2597 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2530z00_2596 =
																							MAKE_PAIR(BgL_arg2528z00_2590,
																							BgL_arg2531z00_2597);
																					}
																					BgL_arg2526z00_2588 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2527z00_2589,
																						BgL_list2530z00_2596);
																				}
																			}
																			return
																				MAKE_PAIR(BgL_arg2525z00_2587,
																				BgL_arg2526z00_2588);
																		}
																	}
																else
																	{	/* Rgc/rgccompile.scm 513 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2904z00zz__rgc_compilez00,
																			BGl_string2905z00zz__rgc_compilez00,
																			BgL_ezd21401zd2_1515);
																	}
															}
														else
															{	/* Rgc/rgccompile.scm 513 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2904z00zz__rgc_compilez00,
																	BGl_string2905z00zz__rgc_compilez00,
																	BgL_ezd21401zd2_1515);
															}
													}
												else
													{	/* Rgc/rgccompile.scm 513 */
														obj_t BgL_carzd21506zd2_1531;

														BgL_carzd21506zd2_1531 =
															CAR(BgL_cdrzd21413zd2_1518);
														if (PAIRP(BgL_carzd21506zd2_1531))
															{	/* Rgc/rgccompile.scm 513 */
																obj_t BgL_carzd21511zd2_1533;

																BgL_carzd21511zd2_1533 =
																	CAR(BgL_carzd21506zd2_1531);
																if (PAIRP(BgL_carzd21511zd2_1533))
																	{	/* Rgc/rgccompile.scm 513 */
																		obj_t BgL_cdrzd21517zd2_1535;

																		BgL_cdrzd21517zd2_1535 =
																			CDR(BgL_carzd21511zd2_1533);
																		if (PAIRP(BgL_cdrzd21517zd2_1535))
																			{	/* Rgc/rgccompile.scm 513 */
																				obj_t BgL_cdrzd21522zd2_1537;

																				BgL_cdrzd21522zd2_1537 =
																					CDR(BgL_cdrzd21517zd2_1535);
																				if (PAIRP(BgL_cdrzd21522zd2_1537))
																					{	/* Rgc/rgccompile.scm 513 */
																						if (NULLP(CDR
																								(BgL_cdrzd21522zd2_1537)))
																							{	/* Rgc/rgccompile.scm 513 */
																								if (NULLP(CDR
																										(BgL_carzd21506zd2_1531)))
																									{	/* Rgc/rgccompile.scm 513 */
																										if (NULLP(CDR
																												(BgL_cdrzd21413zd2_1518)))
																											{	/* Rgc/rgccompile.scm 513 */
																												BgL_charz00_1501 =
																													CAR
																													(BgL_ezd21401zd2_1515);
																												BgL_sz00_1502 =
																													CAR
																													(BgL_carzd21511zd2_1533);
																												BgL_mz00_1503 =
																													CAR
																													(BgL_cdrzd21517zd2_1535);
																												BgL_smz00_1504 =
																													CAR
																													(BgL_cdrzd21522zd2_1537);
																											BgL_tagzd21398zd2_1505:
																												{	/* Rgc/rgccompile.scm 518 */
																													obj_t
																														BgL_arg2536z00_1597;
																													obj_t
																														BgL_arg2537z00_1598;
																													BgL_arg2536z00_1597 =
																														BGl_symbol2862z00zz__rgc_compilez00;
																													{	/* Rgc/rgccompile.scm 518 */
																														obj_t
																															BgL_arg2539z00_1599;
																														obj_t
																															BgL_arg2540z00_1600;
																														BgL_arg2539z00_1599
																															=
																															BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																															(BgL_currentz00_2953,
																															BgL_charz00_1501);
																														if (CBOOL
																															(BgL_sz00_1502))
																															{	/* Rgc/rgccompile.scm 522 */
																																obj_t
																																	BgL_arg2544z00_1604;
																																obj_t
																																	BgL_arg2545z00_1605;
																																BgL_arg2544z00_1604
																																	=
																																	BGl_symbol2898z00zz__rgc_compilez00;
																																{	/* Rgc/rgccompile.scm 522 */
																																	obj_t
																																		BgL_list2546z00_1606;
																																	{	/* Rgc/rgccompile.scm 522 */
																																		obj_t
																																			BgL_arg2547z00_1607;
																																		BgL_arg2547z00_1607
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2546z00_1606
																																			=
																																			MAKE_PAIR
																																			(BgL_smz00_1504,
																																			BgL_arg2547z00_1607);
																																	}
																																	BgL_arg2545z00_1605
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_mz00_1503,
																																		BgL_list2546z00_1606);
																																}
																																BgL_arg2540z00_1600
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2544z00_1604,
																																	BgL_arg2545z00_1605);
																															}
																														else
																															{	/* Rgc/rgccompile.scm 523 */
																																obj_t
																																	BgL_arg2548z00_1608;
																																obj_t
																																	BgL_arg2549z00_1609;
																																BgL_arg2548z00_1608
																																	=
																																	BGl_symbol2900z00zz__rgc_compilez00;
																																{	/* Rgc/rgccompile.scm 523 */
																																	obj_t
																																		BgL_list2550z00_1610;
																																	{	/* Rgc/rgccompile.scm 523 */
																																		obj_t
																																			BgL_arg2551z00_1611;
																																		BgL_arg2551z00_1611
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2550z00_1610
																																			=
																																			MAKE_PAIR
																																			(BgL_smz00_1504,
																																			BgL_arg2551z00_1611);
																																	}
																																	BgL_arg2549z00_1609
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_mz00_1503,
																																		BgL_list2550z00_1610);
																																}
																																BgL_arg2540z00_1600
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2548z00_1608,
																																	BgL_arg2549z00_1609);
																															}
																														{	/* Rgc/rgccompile.scm 518 */
																															obj_t
																																BgL_list2542z00_1602;
																															{	/* Rgc/rgccompile.scm 518 */
																																obj_t
																																	BgL_arg2543z00_1603;
																																BgL_arg2543z00_1603
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list2542z00_1602
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2540z00_1600,
																																	BgL_arg2543z00_1603);
																															}
																															BgL_arg2537z00_1598
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2539z00_1599,
																																BgL_list2542z00_1602);
																														}
																													}
																													return
																														MAKE_PAIR
																														(BgL_arg2536z00_1597,
																														BgL_arg2537z00_1598);
																												}
																											}
																										else
																											{	/* Rgc/rgccompile.scm 513 */
																												return
																													BGl_errorz00zz__errorz00
																													(BGl_string2904z00zz__rgc_compilez00,
																													BGl_string2905z00zz__rgc_compilez00,
																													BgL_ezd21401zd2_1515);
																											}
																									}
																								else
																									{	/* Rgc/rgccompile.scm 513 */
																										return
																											BGl_errorz00zz__errorz00
																											(BGl_string2904z00zz__rgc_compilez00,
																											BGl_string2905z00zz__rgc_compilez00,
																											BgL_ezd21401zd2_1515);
																									}
																							}
																						else
																							{	/* Rgc/rgccompile.scm 513 */
																								return
																									BGl_errorz00zz__errorz00
																									(BGl_string2904z00zz__rgc_compilez00,
																									BGl_string2905z00zz__rgc_compilez00,
																									BgL_ezd21401zd2_1515);
																							}
																					}
																				else
																					{	/* Rgc/rgccompile.scm 513 */
																						return
																							BGl_errorz00zz__errorz00
																							(BGl_string2904z00zz__rgc_compilez00,
																							BGl_string2905z00zz__rgc_compilez00,
																							BgL_ezd21401zd2_1515);
																					}
																			}
																		else
																			{	/* Rgc/rgccompile.scm 513 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2904z00zz__rgc_compilez00,
																					BGl_string2905z00zz__rgc_compilez00,
																					BgL_ezd21401zd2_1515);
																			}
																	}
																else
																	{	/* Rgc/rgccompile.scm 513 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2904z00zz__rgc_compilez00,
																			BGl_string2905z00zz__rgc_compilez00,
																			BgL_ezd21401zd2_1515);
																	}
															}
														else
															{	/* Rgc/rgccompile.scm 513 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2904z00zz__rgc_compilez00,
																	BGl_string2905z00zz__rgc_compilez00,
																	BgL_ezd21401zd2_1515);
															}
													}
											}
										else
											{	/* Rgc/rgccompile.scm 513 */
												obj_t BgL_carzd21671zd2_1550;

												BgL_carzd21671zd2_1550 = CAR(BgL_cdrzd21413zd2_1518);
												if (PAIRP(BgL_carzd21671zd2_1550))
													{	/* Rgc/rgccompile.scm 513 */
														obj_t BgL_carzd21676zd2_1552;

														BgL_carzd21676zd2_1552 =
															CAR(BgL_carzd21671zd2_1550);
														if (PAIRP(BgL_carzd21676zd2_1552))
															{	/* Rgc/rgccompile.scm 513 */
																obj_t BgL_cdrzd21682zd2_1554;

																BgL_cdrzd21682zd2_1554 =
																	CDR(BgL_carzd21676zd2_1552);
																if (PAIRP(BgL_cdrzd21682zd2_1554))
																	{	/* Rgc/rgccompile.scm 513 */
																		obj_t BgL_cdrzd21687zd2_1556;

																		BgL_cdrzd21687zd2_1556 =
																			CDR(BgL_cdrzd21682zd2_1554);
																		if (PAIRP(BgL_cdrzd21687zd2_1556))
																			{	/* Rgc/rgccompile.scm 513 */
																				if (NULLP(CDR(BgL_cdrzd21687zd2_1556)))
																					{	/* Rgc/rgccompile.scm 513 */
																						if (NULLP(CDR
																								(BgL_carzd21671zd2_1550)))
																							{	/* Rgc/rgccompile.scm 513 */
																								if (NULLP(CDR
																										(BgL_cdrzd21413zd2_1518)))
																									{
																										obj_t BgL_smz00_3890;

																										obj_t BgL_mz00_3888;

																										obj_t BgL_sz00_3886;

																										obj_t BgL_charz00_3884;

																										BgL_charz00_3884 =
																											CAR(BgL_ezd21401zd2_1515);
																										BgL_sz00_3886 =
																											CAR
																											(BgL_carzd21676zd2_1552);
																										BgL_mz00_3888 =
																											CAR
																											(BgL_cdrzd21682zd2_1554);
																										BgL_smz00_3890 =
																											CAR
																											(BgL_cdrzd21687zd2_1556);
																										BgL_smz00_1504 =
																											BgL_smz00_3890;
																										BgL_mz00_1503 =
																											BgL_mz00_3888;
																										BgL_sz00_1502 =
																											BgL_sz00_3886;
																										BgL_charz00_1501 =
																											BgL_charz00_3884;
																										goto BgL_tagzd21398zd2_1505;
																									}
																								else
																									{	/* Rgc/rgccompile.scm 513 */
																										obj_t
																											BgL_cdrzd21723zd2_1566;
																										BgL_cdrzd21723zd2_1566 =
																											CDR
																											(BgL_cdrzd21413zd2_1518);
																										{	/* Rgc/rgccompile.scm 513 */
																											obj_t
																												BgL_carzd21730zd2_1567;
																											BgL_carzd21730zd2_1567 =
																												CAR(CAR
																												(BgL_cdrzd21413zd2_1518));
																											{	/* Rgc/rgccompile.scm 513 */
																												obj_t
																													BgL_cdrzd21739zd2_1568;
																												BgL_cdrzd21739zd2_1568 =
																													CDR
																													(BgL_carzd21730zd2_1567);
																												if (PAIRP
																													(BgL_cdrzd21723zd2_1566))
																													{	/* Rgc/rgccompile.scm 513 */
																														obj_t
																															BgL_carzd21758zd2_1570;
																														BgL_carzd21758zd2_1570
																															=
																															CAR
																															(BgL_cdrzd21723zd2_1566);
																														if (PAIRP
																															(BgL_carzd21758zd2_1570))
																															{	/* Rgc/rgccompile.scm 513 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21723zd2_1566)))
																																	{	/* Rgc/rgccompile.scm 513 */
																																		BgL_charz00_1506
																																			=
																																			CAR
																																			(BgL_ezd21401zd2_1515);
																																		BgL_sz00_1507
																																			=
																																			CAR
																																			(BgL_carzd21730zd2_1567);
																																		BgL_mz00_1508
																																			=
																																			CAR
																																			(BgL_cdrzd21739zd2_1568);
																																		BgL_smz00_1509
																																			=
																																			CAR(CDR
																																			(BgL_cdrzd21739zd2_1568));
																																		BgL_tsz00_1510
																																			=
																																			CAR
																																			(BgL_carzd21758zd2_1570);
																																		BgL_tsmz00_1511
																																			=
																																			CDR
																																			(BgL_carzd21758zd2_1570);
																																		{	/* Rgc/rgccompile.scm 525 */
																																			obj_t
																																				BgL_arg2552z00_1612;
																																			obj_t
																																				BgL_arg2553z00_1613;
																																			BgL_arg2552z00_1612
																																				=
																																				BGl_symbol2862z00zz__rgc_compilez00;
																																			{	/* Rgc/rgccompile.scm 525 */
																																				obj_t
																																					BgL_arg2554z00_1614;
																																				obj_t
																																					BgL_arg2555z00_1615;
																																				BgL_arg2554z00_1614
																																					=
																																					BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																																					(BgL_currentz00_2953,
																																					BgL_charz00_1506);
																																				{	/* Rgc/rgccompile.scm 526 */
																																					obj_t
																																						BgL_arg2559z00_1619;
																																					obj_t
																																						BgL_arg2560z00_1620;
																																					BgL_arg2559z00_1619
																																						=
																																						BGl_symbol2888z00zz__rgc_compilez00;
																																					{	/* Rgc/rgccompile.scm 527 */
																																						obj_t
																																							BgL_arg2561z00_1621;
																																						obj_t
																																							BgL_arg2562z00_1622;
																																						if (CBOOL(BgL_sz00_1507))
																																							{	/* Rgc/rgccompile.scm 530 */
																																								obj_t
																																									BgL_arg2566z00_1626;
																																								obj_t
																																									BgL_arg2568z00_1627;
																																								BgL_arg2566z00_1626
																																									=
																																									BGl_symbol2898z00zz__rgc_compilez00;
																																								{	/* Rgc/rgccompile.scm 530 */
																																									obj_t
																																										BgL_list2569z00_1628;
																																									{	/* Rgc/rgccompile.scm 530 */
																																										obj_t
																																											BgL_arg2571z00_1629;
																																										BgL_arg2571z00_1629
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_list2569z00_1628
																																											=
																																											MAKE_PAIR
																																											(BgL_smz00_1509,
																																											BgL_arg2571z00_1629);
																																									}
																																									BgL_arg2568z00_1627
																																										=
																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_mz00_1508,
																																										BgL_list2569z00_1628);
																																								}
																																								BgL_arg2561z00_1621
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2566z00_1626,
																																									BgL_arg2568z00_1627);
																																							}
																																						else
																																							{	/* Rgc/rgccompile.scm 531 */
																																								obj_t
																																									BgL_arg2572z00_1630;
																																								obj_t
																																									BgL_arg2573z00_1631;
																																								BgL_arg2572z00_1630
																																									=
																																									BGl_symbol2900z00zz__rgc_compilez00;
																																								{	/* Rgc/rgccompile.scm 531 */
																																									obj_t
																																										BgL_list2574z00_1632;
																																									{	/* Rgc/rgccompile.scm 531 */
																																										obj_t
																																											BgL_arg2575z00_1633;
																																										BgL_arg2575z00_1633
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_list2574z00_1632
																																											=
																																											MAKE_PAIR
																																											(BgL_smz00_1509,
																																											BgL_arg2575z00_1633);
																																									}
																																									BgL_arg2573z00_1631
																																										=
																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_mz00_1508,
																																										BgL_list2574z00_1632);
																																								}
																																								BgL_arg2561z00_1621
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2572z00_1630,
																																									BgL_arg2573z00_1631);
																																							}
																																						{	/* Rgc/rgccompile.scm 532 */
																																							obj_t
																																								BgL_arg2576z00_1634;
																																							obj_t
																																								BgL_arg2577z00_1635;
																																							BgL_arg2576z00_1634
																																								=
																																								BGl_symbol2902z00zz__rgc_compilez00;
																																							{	/* Rgc/rgccompile.scm 532 */
																																								obj_t
																																									BgL_list2578z00_1636;
																																								{	/* Rgc/rgccompile.scm 532 */
																																									obj_t
																																										BgL_arg2579z00_1637;
																																									BgL_arg2579z00_1637
																																										=
																																										MAKE_PAIR
																																										(BNIL,
																																										BNIL);
																																									BgL_list2578z00_1636
																																										=
																																										MAKE_PAIR
																																										(BgL_tsmz00_1511,
																																										BgL_arg2579z00_1637);
																																								}
																																								BgL_arg2577z00_1635
																																									=
																																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_tsz00_1510,
																																									BgL_list2578z00_1636);
																																							}
																																							BgL_arg2562z00_1622
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2576z00_1634,
																																								BgL_arg2577z00_1635);
																																						}
																																						{	/* Rgc/rgccompile.scm 526 */
																																							obj_t
																																								BgL_list2564z00_1624;
																																							{	/* Rgc/rgccompile.scm 526 */
																																								obj_t
																																									BgL_arg2565z00_1625;
																																								BgL_arg2565z00_1625
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_list2564z00_1624
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2562z00_1622,
																																									BgL_arg2565z00_1625);
																																							}
																																							BgL_arg2560z00_1620
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2561z00_1621,
																																								BgL_list2564z00_1624);
																																						}
																																					}
																																					BgL_arg2555z00_1615
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2559z00_1619,
																																						BgL_arg2560z00_1620);
																																				}
																																				{	/* Rgc/rgccompile.scm 525 */
																																					obj_t
																																						BgL_list2557z00_1617;
																																					{	/* Rgc/rgccompile.scm 525 */
																																						obj_t
																																							BgL_arg2558z00_1618;
																																						BgL_arg2558z00_1618
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_list2557z00_1617
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2555z00_1615,
																																							BgL_arg2558z00_1618);
																																					}
																																					BgL_arg2553z00_1613
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg2554z00_1614,
																																						BgL_list2557z00_1617);
																																				}
																																			}
																																			return
																																				MAKE_PAIR
																																				(BgL_arg2552z00_1612,
																																				BgL_arg2553z00_1613);
																																		}
																																	}
																																else
																																	{	/* Rgc/rgccompile.scm 513 */
																																		return
																																			BGl_errorz00zz__errorz00
																																			(BGl_string2904z00zz__rgc_compilez00,
																																			BGl_string2905z00zz__rgc_compilez00,
																																			BgL_ezd21401zd2_1515);
																																	}
																															}
																														else
																															{	/* Rgc/rgccompile.scm 513 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2904z00zz__rgc_compilez00,
																																	BGl_string2905z00zz__rgc_compilez00,
																																	BgL_ezd21401zd2_1515);
																															}
																													}
																												else
																													{	/* Rgc/rgccompile.scm 513 */
																														return
																															BGl_errorz00zz__errorz00
																															(BGl_string2904z00zz__rgc_compilez00,
																															BGl_string2905z00zz__rgc_compilez00,
																															BgL_ezd21401zd2_1515);
																													}
																											}
																										}
																									}
																							}
																						else
																							{	/* Rgc/rgccompile.scm 513 */
																								return
																									BGl_errorz00zz__errorz00
																									(BGl_string2904z00zz__rgc_compilez00,
																									BGl_string2905z00zz__rgc_compilez00,
																									BgL_ezd21401zd2_1515);
																							}
																					}
																				else
																					{	/* Rgc/rgccompile.scm 513 */
																						return
																							BGl_errorz00zz__errorz00
																							(BGl_string2904z00zz__rgc_compilez00,
																							BGl_string2905z00zz__rgc_compilez00,
																							BgL_ezd21401zd2_1515);
																					}
																			}
																		else
																			{	/* Rgc/rgccompile.scm 513 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2904z00zz__rgc_compilez00,
																					BGl_string2905z00zz__rgc_compilez00,
																					BgL_ezd21401zd2_1515);
																			}
																	}
																else
																	{	/* Rgc/rgccompile.scm 513 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2904z00zz__rgc_compilez00,
																			BGl_string2905z00zz__rgc_compilez00,
																			BgL_ezd21401zd2_1515);
																	}
															}
														else
															{	/* Rgc/rgccompile.scm 513 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2904z00zz__rgc_compilez00,
																	BGl_string2905z00zz__rgc_compilez00,
																	BgL_ezd21401zd2_1515);
															}
													}
												else
													{	/* Rgc/rgccompile.scm 513 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2904z00zz__rgc_compilez00,
															BGl_string2905z00zz__rgc_compilez00,
															BgL_ezd21401zd2_1515);
													}
											}
									}
								else
									{	/* Rgc/rgccompile.scm 513 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2904z00zz__rgc_compilez00,
											BGl_string2905z00zz__rgc_compilez00,
											BgL_ezd21401zd2_1515);
									}
							}
						else
							{	/* Rgc/rgccompile.scm 513 */
								return
									BGl_errorz00zz__errorz00(BGl_string2904z00zz__rgc_compilez00,
									BGl_string2905z00zz__rgc_compilez00, BgL_ezd21401zd2_1515);
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_compilez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgccompile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 23441563),
				BSTRING_TO_STRING(BGl_string2906z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(((long) 359983032),
				BSTRING_TO_STRING(BGl_string2906z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 492883814),
				BSTRING_TO_STRING(BGl_string2906z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 36213488),
				BSTRING_TO_STRING(BGl_string2906z00zz__rgc_compilez00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2906z00zz__rgc_compilez00));
		}
	}

#ifdef __cplusplus
}
#endif
