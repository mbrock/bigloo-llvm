/*===========================================================================*/
/*   (Eval/expdargs.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdargs.scm -indent -o objs/obj_u/Eval/expdargs.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00(obj_t);
	static obj_t BGl_concatz00zz__expander_argsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_argsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2argszd2parsez00zz__expander_argsz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00(obj_t,
		obj_t);
	static obj_t BGl__argszd2parsezd2usagez00zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_symbol3401z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3403z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3394z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3405z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3407z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_symbol3409z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3411z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol3413z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3415z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3417z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3419z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3424z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3426z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3428z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3430z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_loopz72z72z00zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_symbol3432z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3434z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_symbol3436z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3438z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3440z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3442z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3444z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3446z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__expander_argsz00();
	static obj_t BGl_symbol3449z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3451z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3453z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3455z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3457z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3459z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3461z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3463z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3465z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3467z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3469z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3471z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3473z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3475z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3478z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3485z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3487z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3501z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3491z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3503z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3493z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3495z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3497z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3499z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol3513z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_argsz00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	static obj_t BGl__expandzd2argszd2parsez00zz__expander_argsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bindzd2optionz12zc0zz__expander_argsz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t
		BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00(obj_t,
		obj_t);
	static obj_t BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00(obj_t,
		obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t string_to_symbol(char *);
	static obj_t BGl_zc3anonymousza33117ze3z83zz__expander_argsz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_makezd2parserzd2zz__expander_argsz00(obj_t, obj_t);
	static bool_t BGl_synopsiszf3zf3zz__expander_argsz00(obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32191ze3z83zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__expander_argsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_argszd2parsezd2usagez00zz__expander_argsz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopz72z72zz__expander_argsz00(obj_t, obj_t);
	static bool_t BGl_helpzd2messagezf3z21zz__expander_argsz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2helpzd2zz__expander_argsz00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_makezd2synopsiszd2namez00zz__expander_argsz00(obj_t);
	static obj_t BGl_makezd2optzd2parserz00zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_argsz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argszd2parsezd2usagezd2envzd2zz__expander_argsz00,
		BgL_bgl__argsza7d2parseza7d23519z00,
		BGl__argszd2parsezd2usagez00zz__expander_argsz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00,
		BgL_bgl__expandza7d2argsza7d3520z00,
		BGl__expandzd2argszd2parsez00zz__expander_argsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3423z00zz__expander_argsz00,
		BgL_bgl_za7c3anonymousza7a323521z00,
		BGl_zc3anonymousza32191ze3z83zz__expander_argsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3400z00zz__expander_argsz00,
		BgL_bgl_string3400za700za7za7_3522za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3402z00zz__expander_argsz00,
		BgL_bgl_string3402za700za7za7_3523za7, "lambda", 6);
	      DEFINE_STRING(BGl_string3404z00zz__expander_argsz00,
		BgL_bgl_string3404za700za7za7_3524za7, "a", 1);
	      DEFINE_STRING(BGl_string3395z00zz__expander_argsz00,
		BgL_bgl_string3395za700za7za7_3525za7, "args-parse", 10);
	      DEFINE_STRING(BGl_string3406z00zz__expander_argsz00,
		BgL_bgl_string3406za700za7za7_3526za7, "v", 1);
	      DEFINE_STRING(BGl_string3396z00zz__expander_argsz00,
		BgL_bgl_string3396za700za7za7_3527za7, "Illegal syntax", 14);
	      DEFINE_STRING(BGl_string3397z00zz__expander_argsz00,
		BgL_bgl_string3397za700za7za7_3528za7,
		"/tmp/bigloo/runtime/Eval/expdargs.scm", 37);
	      DEFINE_STRING(BGl_string3408z00zz__expander_argsz00,
		BgL_bgl_string3408za700za7za7_3529za7, "if", 2);
	      DEFINE_STRING(BGl_string3398z00zz__expander_argsz00,
		BgL_bgl_string3398za700za7za7_3530za7, "_expand-args-parse", 18);
	      DEFINE_STRING(BGl_string3410z00zz__expander_argsz00,
		BgL_bgl_string3410za700za7za7_3531za7, "null?", 5);
	      DEFINE_STRING(BGl_string3399z00zz__expander_argsz00,
		BgL_bgl_string3399za700za7za7_3532za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string3412z00zz__expander_argsz00,
		BgL_bgl_string3412za700za7za7_3533za7, "values", 6);
	      DEFINE_STRING(BGl_string3414z00zz__expander_argsz00,
		BgL_bgl_string3414za700za7za7_3534za7, "quote", 5);
	      DEFINE_STRING(BGl_string3416z00zz__expander_argsz00,
		BgL_bgl_string3416za700za7za7_3535za7, "end", 3);
	      DEFINE_STRING(BGl_string3418z00zz__expander_argsz00,
		BgL_bgl_string3418za700za7za7_3536za7, "error", 5);
	      DEFINE_STRING(BGl_string3420z00zz__expander_argsz00,
		BgL_bgl_string3420za700za7za7_3537za7, "car", 3);
	      DEFINE_STRING(BGl_string3421z00zz__expander_argsz00,
		BgL_bgl_string3421za700za7za7_3538za7, "see -help", 9);
	      DEFINE_STRING(BGl_string3422z00zz__expander_argsz00,
		BgL_bgl_string3422za700za7za7_3539za7, "Illegal option", 14);
	      DEFINE_STRING(BGl_string3425z00zz__expander_argsz00,
		BgL_bgl_string3425za700za7za7_3540za7, "let*", 4);
	      DEFINE_STRING(BGl_string3427z00zz__expander_argsz00,
		BgL_bgl_string3427za700za7za7_3541za7, "args-parse-usage", 16);
	      DEFINE_STRING(BGl_string3429z00zz__expander_argsz00,
		BgL_bgl_string3429za700za7za7_3542za7, "unquote", 7);
	      DEFINE_STRING(BGl_string3431z00zz__expander_argsz00,
		BgL_bgl_string3431za700za7za7_3543za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string3433z00zz__expander_argsz00,
		BgL_bgl_string3433za700za7za7_3544za7, "p*", 2);
	      DEFINE_STRING(BGl_string3435z00zz__expander_argsz00,
		BgL_bgl_string3435za700za7za7_3545za7, "list", 4);
	      DEFINE_STRING(BGl_string3437z00zz__expander_argsz00,
		BgL_bgl_string3437za700za7za7_3546za7, "a*", 2);
	      DEFINE_STRING(BGl_string3439z00zz__expander_argsz00,
		BgL_bgl_string3439za700za7za7_3547za7, "set!", 4);
	      DEFINE_STRING(BGl_string3441z00zz__expander_argsz00,
		BgL_bgl_string3441za700za7za7_3548za7, "cons", 4);
	      DEFINE_STRING(BGl_string3443z00zz__expander_argsz00,
		BgL_bgl_string3443za700za7za7_3549za7, "cond", 4);
	      DEFINE_STRING(BGl_string3445z00zz__expander_argsz00,
		BgL_bgl_string3445za700za7za7_3550za7, "not", 3);
	      DEFINE_STRING(BGl_string3447z00zz__expander_argsz00,
		BgL_bgl_string3447za700za7za7_3551za7, "pair?", 5);
	      DEFINE_STRING(BGl_string3448z00zz__expander_argsz00,
		BgL_bgl_string3448za700za7za7_3552za7, "Illegal argument list", 21);
	      DEFINE_STRING(BGl_string3450z00zz__expander_argsz00,
		BgL_bgl_string3450za700za7za7_3553za7, "else", 4);
	      DEFINE_STRING(BGl_string3452z00zz__expander_argsz00,
		BgL_bgl_string3452za700za7za7_3554za7, "let", 3);
	      DEFINE_STRING(BGl_string3454z00zz__expander_argsz00,
		BgL_bgl_string3454za700za7za7_3555za7, "loop", 4);
	      DEFINE_STRING(BGl_string3456z00zz__expander_argsz00,
		BgL_bgl_string3456za700za7za7_3556za7, "liip", 4);
	      DEFINE_STRING(BGl_string3458z00zz__expander_argsz00,
		BgL_bgl_string3458za700za7za7_3557za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string3460z00zz__expander_argsz00,
		BgL_bgl_string3460za700za7za7_3558za7, "action", 6);
	      DEFINE_STRING(BGl_string3462z00zz__expander_argsz00,
		BgL_bgl_string3462za700za7za7_3559za7, "nv", 2);
	      DEFINE_STRING(BGl_string3464z00zz__expander_argsz00,
		BgL_bgl_string3464za700za7za7_3560za7, "na*", 3);
	      DEFINE_STRING(BGl_string3466z00zz__expander_argsz00,
		BgL_bgl_string3466za700za7za7_3561za7, "case", 4);
	      DEFINE_STRING(BGl_string3468z00zz__expander_argsz00,
		BgL_bgl_string3468za700za7za7_3562za7, "next", 4);
	      DEFINE_STRING(BGl_string3470z00zz__expander_argsz00,
		BgL_bgl_string3470za700za7za7_3563za7, "fail", 4);
	      DEFINE_STRING(BGl_string3472z00zz__expander_argsz00,
		BgL_bgl_string3472za700za7za7_3564za7, "cdr", 3);
	      DEFINE_STRING(BGl_string3474z00zz__expander_argsz00,
		BgL_bgl_string3474za700za7za7_3565za7, "help", 4);
	      DEFINE_STRING(BGl_string3476z00zz__expander_argsz00,
		BgL_bgl_string3476za700za7za7_3566za7, "synopsis", 8);
	      DEFINE_STRING(BGl_string3477z00zz__expander_argsz00,
		BgL_bgl_string3477za700za7za7_3567za7, "Illegal help message", 20);
	      DEFINE_STRING(BGl_string3480z00zz__expander_argsz00,
		BgL_bgl_string3480za700za7za7_3568za7, " ", 1);
	      DEFINE_STRING(BGl_string3479z00zz__expander_argsz00,
		BgL_bgl_string3479za700za7za7_3569za7, "section", 7);
	      DEFINE_STRING(BGl_string3481z00zz__expander_argsz00,
		BgL_bgl_string3481za700za7za7_3570za7, "Illegal options", 15);
	      DEFINE_STRING(BGl_string3482z00zz__expander_argsz00,
		BgL_bgl_string3482za700za7za7_3571za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string3483z00zz__expander_argsz00,
		BgL_bgl_string3483za700za7za7_3572za7, "", 0);
	      DEFINE_STRING(BGl_string3484z00zz__expander_argsz00,
		BgL_bgl_string3484za700za7za7_3573za7, ",", 1);
	      DEFINE_STRING(BGl_string3486z00zz__expander_argsz00,
		BgL_bgl_string3486za700za7za7_3574za7, "begin", 5);
	      DEFINE_STRING(BGl_string3488z00zz__expander_argsz00,
		BgL_bgl_string3488za700za7za7_3575za7, "rest", 4);
	      DEFINE_STRING(BGl_string3500z00zz__expander_argsz00,
		BgL_bgl_string3500za700za7za7_3576za7, "the-remaining-args", 18);
	      DEFINE_STRING(BGl_string3490z00zz__expander_argsz00,
		BgL_bgl_string3490za700za7za7_3577za7, " -- Option overridden:", 22);
	      DEFINE_STRING(BGl_string3489z00zz__expander_argsz00,
		BgL_bgl_string3489za700za7za7_3578za7, "  ", 2);
	      DEFINE_STRING(BGl_string3502z00zz__expander_argsz00,
		BgL_bgl_string3502za700za7za7_3579za7, "string=?", 8);
	      DEFINE_STRING(BGl_string3492z00zz__expander_argsz00,
		BgL_bgl_string3492za700za7za7_3580za7, "and", 3);
	      DEFINE_STRING(BGl_string3504z00zz__expander_argsz00,
		BgL_bgl_string3504za700za7za7_3581za7, "or", 2);
	      DEFINE_STRING(BGl_string3494z00zz__expander_argsz00,
		BgL_bgl_string3494za700za7za7_3582za7, "substring=?", 11);
	      DEFINE_STRING(BGl_string3505z00zz__expander_argsz00,
		BgL_bgl_string3505za700za7za7_3583za7, "missing argument", 16);
	      DEFINE_STRING(BGl_string3506z00zz__expander_argsz00,
		BgL_bgl_string3506za700za7za7_3584za7, "Illegal option argument `", 25);
	      DEFINE_STRING(BGl_string3496z00zz__expander_argsz00,
		BgL_bgl_string3496za700za7za7_3585za7, "substring", 9);
	      DEFINE_STRING(BGl_string3507z00zz__expander_argsz00,
		BgL_bgl_string3507za700za7za7_3586za7, "'", 1);
	      DEFINE_STRING(BGl_string3508z00zz__expander_argsz00,
		BgL_bgl_string3508za700za7za7_3587za7, "Illegal option argument", 23);
	      DEFINE_STRING(BGl_string3498z00zz__expander_argsz00,
		BgL_bgl_string3498za700za7za7_3588za7, "string-length", 13);
	      DEFINE_STRING(BGl_string3510z00zz__expander_argsz00,
		BgL_bgl_string3510za700za7za7_3589za7, "(", 1);
	      DEFINE_STRING(BGl_string3509z00zz__expander_argsz00,
		BgL_bgl_string3509za700za7za7_3590za7, "_args-parse-usage", 17);
	      DEFINE_STRING(BGl_string3511z00zz__expander_argsz00,
		BgL_bgl_string3511za700za7za7_3591za7, "   ", 3);
	      DEFINE_STRING(BGl_string3512z00zz__expander_argsz00,
		BgL_bgl_string3512za700za7za7_3592za7, ":", 1);
	      DEFINE_STRING(BGl_string3514z00zz__expander_argsz00,
		BgL_bgl_string3514za700za7za7_3593za7, "usage-done", 10);
	      DEFINE_STRING(BGl_string3515z00zz__expander_argsz00,
		BgL_bgl_string3515za700za7za7_3594za7, ")", 1);
	      DEFINE_STRING(BGl_string3516z00zz__expander_argsz00,
		BgL_bgl_string3516za700za7za7_3595za7, "__expander_args", 15);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_argsz00(long
		BgL_checksumz00_3507, char *BgL_fromz00_3508)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_argsz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_argsz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_argsz00();
					BGl_importedzd2moduleszd2initz00zz__expander_argsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_argsz00()
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 19 */
			BGl_symbol3394z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3395z00zz__expander_argsz00);
			BGl_symbol3401z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3402z00zz__expander_argsz00);
			BGl_symbol3403z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3404z00zz__expander_argsz00);
			BGl_symbol3405z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3406z00zz__expander_argsz00);
			BGl_symbol3407z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3408z00zz__expander_argsz00);
			BGl_symbol3409z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3410z00zz__expander_argsz00);
			BGl_symbol3411z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3412z00zz__expander_argsz00);
			BGl_symbol3413z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3414z00zz__expander_argsz00);
			BGl_symbol3415z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3416z00zz__expander_argsz00);
			BGl_symbol3417z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3418z00zz__expander_argsz00);
			BGl_symbol3419z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3420z00zz__expander_argsz00);
			BGl_symbol3424z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3425z00zz__expander_argsz00);
			BGl_symbol3426z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3427z00zz__expander_argsz00);
			BGl_symbol3428z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3429z00zz__expander_argsz00);
			BGl_symbol3430z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3431z00zz__expander_argsz00);
			BGl_symbol3432z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3433z00zz__expander_argsz00);
			BGl_symbol3434z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3435z00zz__expander_argsz00);
			BGl_symbol3436z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3437z00zz__expander_argsz00);
			BGl_symbol3438z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3439z00zz__expander_argsz00);
			BGl_symbol3440z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3441z00zz__expander_argsz00);
			BGl_symbol3442z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3443z00zz__expander_argsz00);
			BGl_symbol3444z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3445z00zz__expander_argsz00);
			BGl_symbol3446z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3447z00zz__expander_argsz00);
			BGl_symbol3449z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3450z00zz__expander_argsz00);
			BGl_symbol3451z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3452z00zz__expander_argsz00);
			BGl_symbol3453z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3454z00zz__expander_argsz00);
			BGl_symbol3455z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3456z00zz__expander_argsz00);
			BGl_symbol3457z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3458z00zz__expander_argsz00);
			BGl_symbol3459z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3460z00zz__expander_argsz00);
			BGl_symbol3461z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3462z00zz__expander_argsz00);
			BGl_symbol3463z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3464z00zz__expander_argsz00);
			BGl_symbol3465z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3466z00zz__expander_argsz00);
			BGl_symbol3467z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3468z00zz__expander_argsz00);
			BGl_symbol3469z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3470z00zz__expander_argsz00);
			BGl_symbol3471z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3472z00zz__expander_argsz00);
			BGl_symbol3473z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3474z00zz__expander_argsz00);
			BGl_symbol3475z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3476z00zz__expander_argsz00);
			BGl_symbol3478z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3479z00zz__expander_argsz00);
			BGl_symbol3485z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3486z00zz__expander_argsz00);
			BGl_symbol3487z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3488z00zz__expander_argsz00);
			BGl_symbol3491z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3492z00zz__expander_argsz00);
			BGl_symbol3493z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3494z00zz__expander_argsz00);
			BGl_symbol3495z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3496z00zz__expander_argsz00);
			BGl_symbol3497z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3498z00zz__expander_argsz00);
			BGl_symbol3499z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3500z00zz__expander_argsz00);
			BGl_symbol3501z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3502z00zz__expander_argsz00);
			BGl_symbol3503z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3504z00zz__expander_argsz00);
			return (BGl_symbol3513z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string3514z00zz__expander_argsz00), BUNSPEC);
		}
	}



/* expand-args-parse */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2argszd2parsez00zz__expander_argsz00(obj_t
		BgL_xz00_4, obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 75 */
			if (PAIRP(BgL_xz00_4))
				{	/* Eval/expdargs.scm 76 */
					obj_t BgL_cdrzd21393zd2_849;

					BgL_cdrzd21393zd2_849 = CDR(BgL_xz00_4);
					if (PAIRP(BgL_cdrzd21393zd2_849))
						{	/* Eval/expdargs.scm 76 */
							bool_t BgL_testz00_3567;

							{	/* Eval/expdargs.scm 76 */
								obj_t BgL_auxz00_3568;

								BgL_auxz00_3568 = CDR(BgL_cdrzd21393zd2_849);
								BgL_testz00_3567 = PAIRP(BgL_auxz00_3568);
							}
							if (BgL_testz00_3567)
								{	/* Eval/expdargs.scm 76 */
									obj_t BgL_arg1965z00_2664;

									BgL_arg1965z00_2664 =
										BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00
										(BgL_xz00_4, BgL_ez00_5);
									return PROCEDURE_ENTRY(BgL_ez00_5) (BgL_ez00_5,
										BgL_arg1965z00_2664, BgL_ez00_5, BEOA);
								}
							else
								{	/* Eval/expdargs.scm 76 */
									return
										BGl_errorz00zz__errorz00
										(BGl_symbol3394z00zz__expander_argsz00,
										BGl_string3396z00zz__expander_argsz00, BgL_xz00_4);
								}
						}
					else
						{	/* Eval/expdargs.scm 76 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3394z00zz__expander_argsz00,
								BGl_string3396z00zz__expander_argsz00, BgL_xz00_4);
						}
				}
			else
				{	/* Eval/expdargs.scm 76 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3394z00zz__expander_argsz00,
						BGl_string3396z00zz__expander_argsz00, BgL_xz00_4);
				}
		}
	}



/* _expand-args-parse */
	obj_t BGl__expandzd2argszd2parsez00zz__expander_argsz00(obj_t BgL_envz00_3472,
		obj_t BgL_xz00_3473, obj_t BgL_ez00_3474)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 75 */
			{	/* Eval/expdargs.scm 76 */
				obj_t BgL_auxz00_3586;

				obj_t BgL_auxz00_3577;

				if (PROCEDUREP(BgL_ez00_3474))
					{	/* Eval/expdargs.scm 76 */
						BgL_auxz00_3586 = BgL_ez00_3474;
					}
				else
					{
						obj_t BgL_auxz00_3589;

						BgL_auxz00_3589 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3397z00zz__expander_argsz00, BINT(((long) 2889)),
							BGl_string3398z00zz__expander_argsz00,
							BGl_string3400z00zz__expander_argsz00, BgL_ez00_3474);
						FAILURE(BgL_auxz00_3589, BFALSE, BFALSE);
					}
				{	/* Eval/expdargs.scm 76 */
					bool_t BgL_testz00_3578;

					if (PAIRP(BgL_xz00_3473))
						{	/* Eval/expdargs.scm 76 */
							BgL_testz00_3578 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdargs.scm 76 */
							BgL_testz00_3578 = NULLP(BgL_xz00_3473);
						}
					if (BgL_testz00_3578)
						{	/* Eval/expdargs.scm 76 */
							BgL_auxz00_3577 = BgL_xz00_3473;
						}
					else
						{
							obj_t BgL_auxz00_3582;

							BgL_auxz00_3582 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3397z00zz__expander_argsz00, BINT(((long) 2889)),
								BGl_string3398z00zz__expander_argsz00,
								BGl_string3399z00zz__expander_argsz00, BgL_xz00_3473);
							FAILURE(BgL_auxz00_3582, BFALSE, BFALSE);
				}}
				return
					BGl_expandzd2argszd2parsez00zz__expander_argsz00(BgL_auxz00_3577,
					BgL_auxz00_3586);
			}
		}
	}



/* do-expand-args-parse */
	obj_t BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00(obj_t BgL_xz00_6,
		obj_t BgL_ez00_7)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 85 */
			{	/* Eval/expdargs.scm 86 */
				obj_t BgL_expz00_854;

				{	/* Eval/expdargs.scm 86 */
					obj_t BgL_pairz00_2670;

					BgL_pairz00_2670 = BgL_xz00_6;
					BgL_expz00_854 = CAR(CDR(BgL_pairz00_2670));
				}
				{	/* Eval/expdargs.scm 86 */
					obj_t BgL_clausesz00_855;

					{	/* Eval/expdargs.scm 87 */
						obj_t BgL_pairz00_2674;

						BgL_pairz00_2674 = BgL_xz00_6;
						BgL_clausesz00_855 = CDR(CDR(BgL_pairz00_2674));
					}
					{	/* Eval/expdargs.scm 87 */
						obj_t BgL_otablez00_856;

						{	/* Eval/expdargs.scm 88 */
							obj_t BgL_list2270z00_1162;

							BgL_list2270z00_1162 = MAKE_PAIR(BINT(((long) 20)), BNIL);
							BgL_otablez00_856 =
								BGl_makezd2hashtablezd2zz__hashz00(BgL_list2270z00_1162);
						}
						{	/* Eval/expdargs.scm 88 */
							obj_t BgL_parsersz00_857;

							if (NULLP(BgL_clausesz00_855))
								{	/* Eval/expdargs.scm 89 */
									BgL_parsersz00_857 = BNIL;
								}
							else
								{	/* Eval/expdargs.scm 89 */
									obj_t BgL_head1859z00_1150;

									BgL_head1859z00_1150 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l1857z00_2682;

										obj_t BgL_tail1860z00_2683;

										BgL_l1857z00_2682 = BgL_clausesz00_855;
										BgL_tail1860z00_2683 = BgL_head1859z00_1150;
									BgL_zc3anonymousza32265ze3z83_2681:
										if (NULLP(BgL_l1857z00_2682))
											{	/* Eval/expdargs.scm 89 */
												BgL_parsersz00_857 = CDR(BgL_head1859z00_1150);
											}
										else
											{	/* Eval/expdargs.scm 89 */
												obj_t BgL_newtail1861z00_2691;

												BgL_newtail1861z00_2691 =
													MAKE_PAIR(BGl_makezd2parserzd2zz__expander_argsz00(CAR
														(BgL_l1857z00_2682), BgL_otablez00_856), BNIL);
												SET_CDR(BgL_tail1860z00_2683, BgL_newtail1861z00_2691);
												{
													obj_t BgL_tail1860z00_3613;

													obj_t BgL_l1857z00_3611;

													BgL_l1857z00_3611 = CDR(BgL_l1857z00_2682);
													BgL_tail1860z00_3613 = BgL_newtail1861z00_2691;
													BgL_tail1860z00_2683 = BgL_tail1860z00_3613;
													BgL_l1857z00_2682 = BgL_l1857z00_3611;
													goto BgL_zc3anonymousza32265ze3z83_2681;
												}
											}
									}
								}
							{	/* Eval/expdargs.scm 89 */
								obj_t BgL_lastzd2parserzd2_858;

								{	/* Eval/expdargs.scm 90 */
									obj_t BgL_arg2204z00_1102;

									obj_t BgL_arg2205z00_1103;

									BgL_arg2204z00_1102 = BGl_symbol3401z00zz__expander_argsz00;
									{	/* Eval/expdargs.scm 90 */
										obj_t BgL_arg2206z00_1104;

										obj_t BgL_arg2207z00_1105;

										{	/* Eval/expdargs.scm 90 */
											obj_t BgL_arg2211z00_1109;

											obj_t BgL_arg2212z00_1110;

											BgL_arg2211z00_1109 =
												BGl_symbol3403z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 90 */
												obj_t BgL_list2213z00_1111;

												BgL_list2213z00_1111 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2212z00_1110 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_symbol3405z00zz__expander_argsz00,
													BgL_list2213z00_1111);
											}
											BgL_arg2206z00_1104 =
												MAKE_PAIR(BgL_arg2211z00_1109, BgL_arg2212z00_1110);
										}
										{	/* Eval/expdargs.scm 91 */
											obj_t BgL_arg2214z00_1112;

											obj_t BgL_arg2216z00_1113;

											BgL_arg2214z00_1112 =
												BGl_symbol3407z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 91 */
												obj_t BgL_arg2217z00_1114;

												obj_t BgL_arg2222z00_1115;

												obj_t BgL_arg2223z00_1116;

												{	/* Eval/expdargs.scm 91 */
													obj_t BgL_arg2233z00_1121;

													obj_t BgL_arg2234z00_1122;

													BgL_arg2233z00_1121 =
														BGl_symbol3409z00zz__expander_argsz00;
													{	/* Eval/expdargs.scm 91 */
														obj_t BgL_list2235z00_1123;

														BgL_list2235z00_1123 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2234z00_1122 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3403z00zz__expander_argsz00,
															BgL_list2235z00_1123);
													}
													BgL_arg2217z00_1114 =
														MAKE_PAIR(BgL_arg2233z00_1121, BgL_arg2234z00_1122);
												}
												{	/* Eval/expdargs.scm 92 */
													obj_t BgL_arg2236z00_1124;

													obj_t BgL_arg2237z00_1125;

													BgL_arg2236z00_1124 =
														BGl_symbol3411z00zz__expander_argsz00;
													{	/* Eval/expdargs.scm 92 */
														obj_t BgL_arg2238z00_1126;

														obj_t BgL_arg2239z00_1127;

														obj_t BgL_arg2240z00_1128;

														{	/* Eval/expdargs.scm 92 */
															obj_t BgL_arg2246z00_1133;

															obj_t BgL_arg2247z00_1134;

															BgL_arg2246z00_1133 =
																BGl_symbol3413z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 92 */
																obj_t BgL_list2248z00_1135;

																BgL_list2248z00_1135 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2247z00_1134 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3415z00zz__expander_argsz00,
																	BgL_list2248z00_1135);
															}
															BgL_arg2238z00_1126 =
																MAKE_PAIR(BgL_arg2246z00_1133,
																BgL_arg2247z00_1134);
														}
														BgL_arg2239z00_1127 =
															BGl_symbol3403z00zz__expander_argsz00;
														BgL_arg2240z00_1128 =
															BGl_symbol3405z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 92 */
															obj_t BgL_list2243z00_1130;

															{	/* Eval/expdargs.scm 92 */
																obj_t BgL_arg2244z00_1131;

																{	/* Eval/expdargs.scm 92 */
																	obj_t BgL_arg2245z00_1132;

																	BgL_arg2245z00_1132 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2244z00_1131 =
																		MAKE_PAIR(BgL_arg2240z00_1128,
																		BgL_arg2245z00_1132);
																}
																BgL_list2243z00_1130 =
																	MAKE_PAIR(BgL_arg2239z00_1127,
																	BgL_arg2244z00_1131);
															}
															BgL_arg2237z00_1125 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2238z00_1126, BgL_list2243z00_1130);
														}
													}
													BgL_arg2222z00_1115 =
														MAKE_PAIR(BgL_arg2236z00_1124, BgL_arg2237z00_1125);
												}
												{	/* Eval/expdargs.scm 93 */
													obj_t BgL_arg2249z00_1136;

													obj_t BgL_arg2250z00_1137;

													BgL_arg2249z00_1136 =
														BGl_symbol3417z00zz__expander_argsz00;
													{	/* Eval/expdargs.scm 93 */
														obj_t BgL_arg2251z00_1138;

														{	/* Eval/expdargs.scm 93 */
															obj_t BgL_arg2260z00_1145;

															obj_t BgL_arg2262z00_1146;

															BgL_arg2260z00_1145 =
																BGl_symbol3419z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 93 */
																obj_t BgL_list2263z00_1147;

																BgL_list2263z00_1147 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2262z00_1146 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3403z00zz__expander_argsz00,
																	BgL_list2263z00_1147);
															}
															BgL_arg2251z00_1138 =
																MAKE_PAIR(BgL_arg2260z00_1145,
																BgL_arg2262z00_1146);
														}
														{	/* Eval/expdargs.scm 93 */
															obj_t BgL_list2256z00_1142;

															{	/* Eval/expdargs.scm 93 */
																obj_t BgL_arg2257z00_1143;

																{	/* Eval/expdargs.scm 93 */
																	obj_t BgL_arg2259z00_1144;

																	BgL_arg2259z00_1144 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2257z00_1143 =
																		MAKE_PAIR
																		(BGl_string3421z00zz__expander_argsz00,
																		BgL_arg2259z00_1144);
																}
																BgL_list2256z00_1142 =
																	MAKE_PAIR
																	(BGl_string3422z00zz__expander_argsz00,
																	BgL_arg2257z00_1143);
															}
															BgL_arg2250z00_1137 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2251z00_1138, BgL_list2256z00_1142);
														}
													}
													BgL_arg2223z00_1116 =
														MAKE_PAIR(BgL_arg2249z00_1136, BgL_arg2250z00_1137);
												}
												{	/* Eval/expdargs.scm 91 */
													obj_t BgL_list2225z00_1118;

													{	/* Eval/expdargs.scm 91 */
														obj_t BgL_arg2226z00_1119;

														{	/* Eval/expdargs.scm 91 */
															obj_t BgL_arg2227z00_1120;

															BgL_arg2227z00_1120 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2226z00_1119 =
																MAKE_PAIR(BgL_arg2223z00_1116,
																BgL_arg2227z00_1120);
														}
														BgL_list2225z00_1118 =
															MAKE_PAIR(BgL_arg2222z00_1115,
															BgL_arg2226z00_1119);
													}
													BgL_arg2216z00_1113 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2217z00_1114, BgL_list2225z00_1118);
												}
											}
											BgL_arg2207z00_1105 =
												MAKE_PAIR(BgL_arg2214z00_1112, BgL_arg2216z00_1113);
										}
										{	/* Eval/expdargs.scm 90 */
											obj_t BgL_list2209z00_1107;

											{	/* Eval/expdargs.scm 90 */
												obj_t BgL_arg2210z00_1108;

												BgL_arg2210z00_1108 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2209z00_1107 =
													MAKE_PAIR(BgL_arg2207z00_1105, BgL_arg2210z00_1108);
											}
											BgL_arg2205z00_1103 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2206z00_1104, BgL_list2209z00_1107);
										}
									}
									BgL_lastzd2parserzd2_858 =
										MAKE_PAIR(BgL_arg2204z00_1102, BgL_arg2205z00_1103);
								}
								{	/* Eval/expdargs.scm 90 */
									obj_t BgL_descrsz00_859;

									{	/* Eval/expdargs.scm 94 */
										obj_t BgL_arg2190z00_1080;

										if (NULLP(BgL_clausesz00_855))
											{	/* Eval/expdargs.scm 94 */
												BgL_arg2190z00_1080 = BNIL;
											}
										else
											{	/* Eval/expdargs.scm 94 */
												obj_t BgL_head1864z00_1085;

												BgL_head1864z00_1085 =
													MAKE_PAIR(BGl_makezd2helpzd2zz__expander_argsz00(CAR
														(BgL_clausesz00_855)), BNIL);
												{	/* Eval/expdargs.scm 94 */
													obj_t BgL_g1867z00_1086;

													BgL_g1867z00_1086 = CDR(BgL_clausesz00_855);
													{
														obj_t BgL_l1862z00_2740;

														obj_t BgL_tail1865z00_2741;

														BgL_l1862z00_2740 = BgL_g1867z00_1086;
														BgL_tail1865z00_2741 = BgL_head1864z00_1085;
													BgL_zc3anonymousza32193ze3z83_2739:
														if (NULLP(BgL_l1862z00_2740))
															{	/* Eval/expdargs.scm 94 */
																BgL_arg2190z00_1080 = BgL_head1864z00_1085;
															}
														else
															{	/* Eval/expdargs.scm 94 */
																obj_t BgL_newtail1866z00_2749;

																BgL_newtail1866z00_2749 =
																	MAKE_PAIR
																	(BGl_makezd2helpzd2zz__expander_argsz00(CAR
																		(BgL_l1862z00_2740)), BNIL);
																SET_CDR(BgL_tail1865z00_2741,
																	BgL_newtail1866z00_2749);
																{
																	obj_t BgL_tail1865z00_3659;

																	obj_t BgL_l1862z00_3657;

																	BgL_l1862z00_3657 = CDR(BgL_l1862z00_2740);
																	BgL_tail1865z00_3659 =
																		BgL_newtail1866z00_2749;
																	BgL_tail1865z00_2741 = BgL_tail1865z00_3659;
																	BgL_l1862z00_2740 = BgL_l1862z00_3657;
																	goto BgL_zc3anonymousza32193ze3z83_2739;
																}
															}
													}
												}
											}
										BgL_descrsz00_859 =
											BGl_filterz00zz__r4_control_features_6_9z00
											(BGl_proc3423z00zz__expander_argsz00,
											BgL_arg2190z00_1080);
									}
									{	/* Eval/expdargs.scm 94 */

										{	/* Eval/expdargs.scm 95 */
											obj_t BgL_arg1966z00_860;

											obj_t BgL_arg1967z00_861;

											BgL_arg1966z00_860 =
												BGl_symbol3424z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 95 */
												obj_t BgL_arg1968z00_862;

												obj_t BgL_arg1969z00_863;

												{	/* Eval/expdargs.scm 95 */
													obj_t BgL_arg1971z00_865;

													obj_t BgL_arg1972z00_866;

													{	/* Eval/expdargs.scm 95 */
														obj_t BgL_arg1973z00_867;

														obj_t BgL_arg1974z00_868;

														BgL_arg1973z00_867 =
															BGl_symbol3426z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 96 */
															obj_t BgL_arg1975z00_869;

															{	/* Eval/expdargs.scm 96 */
																obj_t BgL_arg1979z00_872;

																obj_t BgL_arg1980z00_873;

																BgL_arg1979z00_872 =
																	BGl_symbol3426z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 97 */
																	obj_t BgL_arg1981z00_874;

																	{	/* Eval/expdargs.scm 97 */
																		obj_t BgL_arg1984z00_877;

																		{	/* Eval/expdargs.scm 97 */
																			bool_t BgL_testz00_3661;

																			{
																				obj_t BgL_l1868z00_882;

																				BgL_l1868z00_882 = BgL_descrsz00_859;
																			BgL_zc3anonymousza31988ze3z83_883:
																				if (NULLP(BgL_l1868z00_882))
																					{	/* Eval/expdargs.scm 97 */
																						BgL_testz00_3661 = ((bool_t) 0);
																					}
																				else
																					{	/* Eval/expdargs.scm 97 */
																						bool_t BgL_testz00_3664;

																						{	/* Eval/expdargs.scm 98 */
																							obj_t BgL_fz00_887;

																							BgL_fz00_887 =
																								CAR(BgL_l1868z00_882);
																							if (PAIRP(BgL_fz00_887))
																								{	/* Eval/expdargs.scm 99 */
																									bool_t BgL_testz00_3668;

																									{	/* Eval/expdargs.scm 99 */
																										obj_t BgL_auxz00_3669;

																										BgL_auxz00_3669 =
																											CDR(BgL_fz00_887);
																										BgL_testz00_3668 =
																											PAIRP(BgL_auxz00_3669);
																									}
																									if (BgL_testz00_3668)
																										{	/* Eval/expdargs.scm 99 */
																											BgL_testz00_3664 =
																												(CAR(CDR(BgL_fz00_887))
																												==
																												BGl_symbol3428z00zz__expander_argsz00);
																										}
																									else
																										{	/* Eval/expdargs.scm 99 */
																											BgL_testz00_3664 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Eval/expdargs.scm 98 */
																									BgL_testz00_3664 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_testz00_3664)
																							{	/* Eval/expdargs.scm 97 */
																								BgL_testz00_3661 = ((bool_t) 1);
																							}
																						else
																							{
																								obj_t BgL_l1868z00_3675;

																								BgL_l1868z00_3675 =
																									CDR(BgL_l1868z00_882);
																								BgL_l1868z00_882 =
																									BgL_l1868z00_3675;
																								goto
																									BgL_zc3anonymousza31988ze3z83_883;
																							}
																					}
																			}
																			if (BgL_testz00_3661)
																				{	/* Eval/expdargs.scm 97 */
																					BgL_arg1984z00_877 =
																						BGl_symbol3430z00zz__expander_argsz00;
																				}
																			else
																				{	/* Eval/expdargs.scm 97 */
																					BgL_arg1984z00_877 =
																						BGl_symbol3413z00zz__expander_argsz00;
																				}
																		}
																		{	/* Eval/expdargs.scm 97 */
																			obj_t BgL_list1985z00_878;

																			{	/* Eval/expdargs.scm 97 */
																				obj_t BgL_arg1986z00_879;

																				BgL_arg1986z00_879 =
																					MAKE_PAIR(BgL_descrsz00_859, BNIL);
																				BgL_list1985z00_878 =
																					MAKE_PAIR(BgL_arg1984z00_877,
																					BgL_arg1986z00_879);
																			}
																			BgL_arg1981z00_874 = BgL_list1985z00_878;
																		}
																	}
																	{	/* Eval/expdargs.scm 96 */
																		obj_t BgL_list1983z00_876;

																		BgL_list1983z00_876 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1980z00_873 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1981z00_874, BgL_list1983z00_876);
																	}
																}
																BgL_arg1975z00_869 =
																	MAKE_PAIR(BgL_arg1979z00_872,
																	BgL_arg1980z00_873);
															}
															{	/* Eval/expdargs.scm 95 */
																obj_t BgL_list1977z00_871;

																BgL_list1977z00_871 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1974z00_868 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1975z00_869, BgL_list1977z00_871);
															}
														}
														BgL_arg1971z00_865 =
															MAKE_PAIR(BgL_arg1973z00_867, BgL_arg1974z00_868);
													}
													{	/* Eval/expdargs.scm 105 */
														obj_t BgL_arg1995z00_894;

														obj_t BgL_arg1996z00_895;

														{	/* Eval/expdargs.scm 105 */
															obj_t BgL_arg2001z00_899;

															obj_t BgL_arg2002z00_900;

															BgL_arg2001z00_899 =
																BGl_symbol3432z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 105 */
																obj_t BgL_arg2003z00_901;

																{	/* Eval/expdargs.scm 105 */
																	obj_t BgL_arg2006z00_904;

																	obj_t BgL_arg2007z00_905;

																	BgL_arg2006z00_904 =
																		BGl_symbol3434z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 105 */
																		obj_t BgL_list2008z00_906;

																		BgL_list2008z00_906 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2007z00_905 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_lastzd2parserzd2_858,
																			BgL_list2008z00_906);
																	}
																	BgL_arg2003z00_901 =
																		MAKE_PAIR(BgL_arg2006z00_904,
																		BgL_arg2007z00_905);
																}
																{	/* Eval/expdargs.scm 105 */
																	obj_t BgL_list2005z00_903;

																	BgL_list2005z00_903 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2002z00_900 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2003z00_901, BgL_list2005z00_903);
																}
															}
															BgL_arg1995z00_894 =
																MAKE_PAIR(BgL_arg2001z00_899,
																BgL_arg2002z00_900);
														}
														{	/* Eval/expdargs.scm 106 */
															obj_t BgL_arg2009z00_907;

															obj_t BgL_arg2010z00_908;

															BgL_arg2009z00_907 =
																BGl_symbol3436z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 106 */
																obj_t BgL_list2011z00_909;

																BgL_list2011z00_909 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2010z00_908 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_expz00_854, BgL_list2011z00_909);
															}
															BgL_arg1996z00_895 =
																MAKE_PAIR(BgL_arg2009z00_907,
																BgL_arg2010z00_908);
														}
														{	/* Eval/expdargs.scm 95 */
															obj_t BgL_list1999z00_897;

															{	/* Eval/expdargs.scm 95 */
																obj_t BgL_arg2000z00_898;

																BgL_arg2000z00_898 = MAKE_PAIR(BNIL, BNIL);
																BgL_list1999z00_897 =
																	MAKE_PAIR(BgL_arg1996z00_895,
																	BgL_arg2000z00_898);
															}
															BgL_arg1972z00_866 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1995z00_894, BgL_list1999z00_897);
														}
													}
													BgL_arg1968z00_862 =
														MAKE_PAIR(BgL_arg1971z00_865, BgL_arg1972z00_866);
												}
												{	/* Eval/expdargs.scm 107 */
													obj_t BgL_arg2012z00_910;

													obj_t BgL_arg2013z00_911;

													{	/* Eval/expdargs.scm 107 */
														obj_t BgL_l1870z00_912;

														BgL_l1870z00_912 =
															bgl_reverse_bang
															(BGl_filterz00zz__r4_control_features_6_9z00
															(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
																BgL_parsersz00_857));
														if (NULLP(BgL_l1870z00_912))
															{	/* Eval/expdargs.scm 107 */
																BgL_arg2012z00_910 = BNIL;
															}
														else
															{	/* Eval/expdargs.scm 107 */
																obj_t BgL_head1872z00_914;

																BgL_head1872z00_914 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l1870z00_916;

																	obj_t BgL_tail1873z00_917;

																	BgL_l1870z00_916 = BgL_l1870z00_912;
																	BgL_tail1873z00_917 = BgL_head1872z00_914;
																BgL_zc3anonymousza32015ze3z83_918:
																	if (NULLP(BgL_l1870z00_916))
																		{	/* Eval/expdargs.scm 107 */
																			BgL_arg2012z00_910 =
																				CDR(BgL_head1872z00_914);
																		}
																	else
																		{	/* Eval/expdargs.scm 107 */
																			obj_t BgL_newtail1874z00_920;

																			{	/* Eval/expdargs.scm 107 */
																				obj_t BgL_arg2018z00_922;

																				{	/* Eval/expdargs.scm 107 */
																					obj_t BgL_pz00_924;

																					BgL_pz00_924 = CAR(BgL_l1870z00_916);
																					{	/* Eval/expdargs.scm 107 */
																						obj_t BgL_arg2021z00_925;

																						obj_t BgL_arg2022z00_926;

																						BgL_arg2021z00_925 =
																							BGl_symbol3438z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 107 */
																							obj_t BgL_arg2023z00_927;

																							obj_t BgL_arg2024z00_928;

																							BgL_arg2023z00_927 =
																								BGl_symbol3432z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 107 */
																								obj_t BgL_arg2028z00_932;

																								obj_t BgL_arg2029z00_933;

																								BgL_arg2028z00_932 =
																									BGl_symbol3440z00zz__expander_argsz00;
																								{	/* Eval/expdargs.scm 107 */
																									obj_t BgL_list2030z00_934;

																									{	/* Eval/expdargs.scm 107 */
																										obj_t BgL_arg2031z00_935;

																										obj_t BgL_arg2033z00_936;

																										BgL_arg2031z00_935 =
																											BGl_symbol3432z00zz__expander_argsz00;
																										BgL_arg2033z00_936 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2030z00_934 =
																											MAKE_PAIR
																											(BgL_arg2031z00_935,
																											BgL_arg2033z00_936);
																									}
																									BgL_arg2029z00_933 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_pz00_924,
																										BgL_list2030z00_934);
																								}
																								BgL_arg2024z00_928 =
																									MAKE_PAIR(BgL_arg2028z00_932,
																									BgL_arg2029z00_933);
																							}
																							{	/* Eval/expdargs.scm 107 */
																								obj_t BgL_list2026z00_930;

																								{	/* Eval/expdargs.scm 107 */
																									obj_t BgL_arg2027z00_931;

																									BgL_arg2027z00_931 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2026z00_930 =
																										MAKE_PAIR
																										(BgL_arg2024z00_928,
																										BgL_arg2027z00_931);
																								}
																								BgL_arg2022z00_926 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2023z00_927,
																									BgL_list2026z00_930);
																							}
																						}
																						BgL_arg2018z00_922 =
																							MAKE_PAIR(BgL_arg2021z00_925,
																							BgL_arg2022z00_926);
																					}
																				}
																				BgL_newtail1874z00_920 =
																					MAKE_PAIR(BgL_arg2018z00_922, BNIL);
																			}
																			SET_CDR(BgL_tail1873z00_917,
																				BgL_newtail1874z00_920);
																			{
																				obj_t BgL_tail1873z00_3719;

																				obj_t BgL_l1870z00_3717;

																				BgL_l1870z00_3717 =
																					CDR(BgL_l1870z00_916);
																				BgL_tail1873z00_3719 =
																					BgL_newtail1874z00_920;
																				BgL_tail1873z00_917 =
																					BgL_tail1873z00_3719;
																				BgL_l1870z00_916 = BgL_l1870z00_3717;
																				goto BgL_zc3anonymousza32015ze3z83_918;
																			}
																		}
																}
															}
													}
													{	/* Eval/expdargs.scm 109 */
														obj_t BgL_arg2036z00_939;

														{	/* Eval/expdargs.scm 109 */
															obj_t BgL_arg2038z00_941;

															obj_t BgL_arg2039z00_942;

															BgL_arg2038z00_941 =
																BGl_symbol3442z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 110 */
																obj_t BgL_arg2040z00_943;

																obj_t BgL_arg2041z00_944;

																obj_t BgL_arg2042z00_945;

																{	/* Eval/expdargs.scm 110 */
																	obj_t BgL_arg2047z00_950;

																	obj_t BgL_arg2048z00_951;

																	{	/* Eval/expdargs.scm 110 */
																		obj_t BgL_arg2051z00_952;

																		obj_t BgL_arg2052z00_953;

																		BgL_arg2051z00_952 =
																			BGl_symbol3409z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 110 */
																			obj_t BgL_list2053z00_954;

																			BgL_list2053z00_954 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2052z00_953 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol3436z00zz__expander_argsz00,
																				BgL_list2053z00_954);
																		}
																		BgL_arg2047z00_950 =
																			MAKE_PAIR(BgL_arg2051z00_952,
																			BgL_arg2052z00_953);
																	}
																	{	/* Eval/expdargs.scm 110 */
																		obj_t BgL_list2054z00_955;

																		BgL_list2054z00_955 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2048z00_951 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BUNSPEC, BgL_list2054z00_955);
																	}
																	BgL_arg2040z00_943 =
																		MAKE_PAIR(BgL_arg2047z00_950,
																		BgL_arg2048z00_951);
																}
																{	/* Eval/expdargs.scm 112 */
																	obj_t BgL_arg2055z00_956;

																	obj_t BgL_arg2056z00_957;

																	{	/* Eval/expdargs.scm 112 */
																		obj_t BgL_arg2057z00_958;

																		obj_t BgL_arg2058z00_959;

																		BgL_arg2057z00_958 =
																			BGl_symbol3444z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 112 */
																			obj_t BgL_arg2059z00_960;

																			{	/* Eval/expdargs.scm 112 */
																				obj_t BgL_arg2062z00_963;

																				obj_t BgL_arg2063z00_964;

																				BgL_arg2062z00_963 =
																					BGl_symbol3446z00zz__expander_argsz00;
																				{	/* Eval/expdargs.scm 112 */
																					obj_t BgL_list2064z00_965;

																					BgL_list2064z00_965 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2063z00_964 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol3436z00zz__expander_argsz00,
																						BgL_list2064z00_965);
																				}
																				BgL_arg2059z00_960 =
																					MAKE_PAIR(BgL_arg2062z00_963,
																					BgL_arg2063z00_964);
																			}
																			{	/* Eval/expdargs.scm 112 */
																				obj_t BgL_list2061z00_962;

																				BgL_list2061z00_962 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2058z00_959 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2059z00_960,
																					BgL_list2061z00_962);
																			}
																		}
																		BgL_arg2055z00_956 =
																			MAKE_PAIR(BgL_arg2057z00_958,
																			BgL_arg2058z00_959);
																	}
																	{	/* Eval/expdargs.scm 113 */
																		obj_t BgL_arg2065z00_966;

																		{	/* Eval/expdargs.scm 113 */
																			obj_t BgL_arg2068z00_969;

																			obj_t BgL_arg2069z00_970;

																			BgL_arg2068z00_969 =
																				BGl_symbol3417z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 113 */
																				obj_t BgL_arg2070z00_971;

																				obj_t BgL_arg2073z00_973;

																				{	/* Eval/expdargs.scm 113 */
																					obj_t BgL_arg2080z00_978;

																					obj_t BgL_arg2081z00_979;

																					BgL_arg2080z00_978 =
																						BGl_symbol3413z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 113 */
																						obj_t BgL_list2082z00_980;

																						BgL_list2082z00_980 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2081z00_979 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol3394z00zz__expander_argsz00,
																							BgL_list2082z00_980);
																					}
																					BgL_arg2070z00_971 =
																						MAKE_PAIR(BgL_arg2080z00_978,
																						BgL_arg2081z00_979);
																				}
																				BgL_arg2073z00_973 =
																					BGl_symbol3436z00zz__expander_argsz00;
																				{	/* Eval/expdargs.scm 113 */
																					obj_t BgL_list2077z00_975;

																					{	/* Eval/expdargs.scm 113 */
																						obj_t BgL_arg2078z00_976;

																						{	/* Eval/expdargs.scm 113 */
																							obj_t BgL_arg2079z00_977;

																							BgL_arg2079z00_977 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2078z00_976 =
																								MAKE_PAIR(BgL_arg2073z00_973,
																								BgL_arg2079z00_977);
																						}
																						BgL_list2077z00_975 =
																							MAKE_PAIR
																							(BGl_string3448z00zz__expander_argsz00,
																							BgL_arg2078z00_976);
																					}
																					BgL_arg2069z00_970 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2070z00_971,
																						BgL_list2077z00_975);
																				}
																			}
																			BgL_arg2065z00_966 =
																				MAKE_PAIR(BgL_arg2068z00_969,
																				BgL_arg2069z00_970);
																		}
																		{	/* Eval/expdargs.scm 112 */
																			obj_t BgL_list2067z00_968;

																			BgL_list2067z00_968 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2056z00_957 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2065z00_966,
																				BgL_list2067z00_968);
																		}
																	}
																	BgL_arg2041z00_944 =
																		MAKE_PAIR(BgL_arg2055z00_956,
																		BgL_arg2056z00_957);
																}
																{	/* Eval/expdargs.scm 114 */
																	obj_t BgL_arg2083z00_981;

																	obj_t BgL_arg2084z00_982;

																	BgL_arg2083z00_981 =
																		BGl_symbol3449z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 115 */
																		obj_t BgL_arg2085z00_983;

																		{	/* Eval/expdargs.scm 115 */
																			obj_t BgL_arg2089z00_986;

																			obj_t BgL_arg2090z00_987;

																			BgL_arg2089z00_986 =
																				BGl_symbol3451z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 115 */
																				obj_t BgL_arg2091z00_988;

																				obj_t BgL_arg2092z00_989;

																				obj_t BgL_arg2093z00_990;

																				BgL_arg2091z00_988 =
																					BGl_symbol3453z00zz__expander_argsz00;
																				{	/* Eval/expdargs.scm 115 */
																					obj_t BgL_arg2098z00_995;

																					obj_t BgL_arg2099z00_996;

																					{	/* Eval/expdargs.scm 115 */
																						obj_t BgL_arg2100z00_997;

																						obj_t BgL_arg2101z00_998;

																						BgL_arg2100z00_997 =
																							BGl_symbol3436z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 115 */
																							obj_t BgL_list2102z00_999;

																							BgL_list2102z00_999 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2101z00_998 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol3436z00zz__expander_argsz00,
																								BgL_list2102z00_999);
																						}
																						BgL_arg2098z00_995 =
																							MAKE_PAIR(BgL_arg2100z00_997,
																							BgL_arg2101z00_998);
																					}
																					{	/* Eval/expdargs.scm 116 */
																						obj_t BgL_arg2103z00_1000;

																						{	/* Eval/expdargs.scm 116 */
																							obj_t BgL_arg2106z00_1003;

																							obj_t BgL_arg2107z00_1004;

																							BgL_arg2106z00_1003 =
																								BGl_symbol3405z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 116 */
																								obj_t BgL_list2108z00_1005;

																								BgL_list2108z00_1005 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2107z00_1004 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BFALSE,
																									BgL_list2108z00_1005);
																							}
																							BgL_arg2103z00_1000 =
																								MAKE_PAIR(BgL_arg2106z00_1003,
																								BgL_arg2107z00_1004);
																						}
																						{	/* Eval/expdargs.scm 115 */
																							obj_t BgL_list2105z00_1002;

																							BgL_list2105z00_1002 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2099z00_996 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2103z00_1000,
																								BgL_list2105z00_1002);
																						}
																					}
																					BgL_arg2092z00_989 =
																						MAKE_PAIR(BgL_arg2098z00_995,
																						BgL_arg2099z00_996);
																				}
																				{	/* Eval/expdargs.scm 117 */
																					obj_t BgL_arg2109z00_1006;

																					obj_t BgL_arg2110z00_1007;

																					BgL_arg2109z00_1006 =
																						BGl_symbol3451z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 117 */
																						obj_t BgL_arg2111z00_1008;

																						obj_t BgL_arg2112z00_1009;

																						obj_t BgL_arg2113z00_1010;

																						BgL_arg2111z00_1008 =
																							BGl_symbol3455z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 117 */
																							obj_t BgL_arg2119z00_1015;

																							{	/* Eval/expdargs.scm 117 */
																								obj_t BgL_arg2123z00_1017;

																								obj_t BgL_arg2124z00_1018;

																								BgL_arg2123z00_1017 =
																									BGl_symbol3432z00zz__expander_argsz00;
																								{	/* Eval/expdargs.scm 117 */
																									obj_t BgL_list2125z00_1019;

																									BgL_list2125z00_1019 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2124z00_1018 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol3432z00zz__expander_argsz00,
																										BgL_list2125z00_1019);
																								}
																								BgL_arg2119z00_1015 =
																									MAKE_PAIR(BgL_arg2123z00_1017,
																									BgL_arg2124z00_1018);
																							}
																							BgL_arg2112z00_1009 =
																								MAKE_PAIR(BgL_arg2119z00_1015,
																								BNIL);
																						}
																						{	/* Eval/expdargs.scm 118 */
																							obj_t BgL_arg2126z00_1020;

																							obj_t BgL_arg2127z00_1021;

																							BgL_arg2126z00_1020 =
																								BGl_symbol3457z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 118 */
																								obj_t BgL_arg2130z00_1022;

																								obj_t BgL_arg2131z00_1023;

																								obj_t BgL_arg2132z00_1024;

																								{	/* Eval/expdargs.scm 118 */
																									obj_t BgL_arg2137z00_1029;

																									obj_t BgL_arg2138z00_1030;

																									BgL_arg2137z00_1029 =
																										BGl_symbol3459z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 118 */
																										obj_t BgL_list2139z00_1031;

																										{	/* Eval/expdargs.scm 118 */
																											obj_t BgL_arg2140z00_1032;

																											obj_t BgL_arg2141z00_1033;

																											BgL_arg2140z00_1032 =
																												BGl_symbol3461z00zz__expander_argsz00;
																											BgL_arg2141z00_1033 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2139z00_1031 =
																												MAKE_PAIR
																												(BgL_arg2140z00_1032,
																												BgL_arg2141z00_1033);
																										}
																										BgL_arg2138z00_1030 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol3463z00zz__expander_argsz00,
																											BgL_list2139z00_1031);
																									}
																									BgL_arg2130z00_1022 =
																										MAKE_PAIR
																										(BgL_arg2137z00_1029,
																										BgL_arg2138z00_1030);
																								}
																								{	/* Eval/expdargs.scm 119 */
																									obj_t BgL_arg2144z00_1034;

																									obj_t BgL_arg2145z00_1035;

																									{	/* Eval/expdargs.scm 119 */
																										obj_t BgL_arg2146z00_1036;

																										obj_t BgL_arg2147z00_1037;

																										BgL_arg2146z00_1036 =
																											BGl_symbol3419z00zz__expander_argsz00;
																										{	/* Eval/expdargs.scm 119 */
																											obj_t
																												BgL_list2148z00_1038;
																											BgL_list2148z00_1038 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2147z00_1037 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol3432z00zz__expander_argsz00,
																												BgL_list2148z00_1038);
																										}
																										BgL_arg2144z00_1034 =
																											MAKE_PAIR
																											(BgL_arg2146z00_1036,
																											BgL_arg2147z00_1037);
																									}
																									{	/* Eval/expdargs.scm 119 */
																										obj_t BgL_list2149z00_1039;

																										{	/* Eval/expdargs.scm 119 */
																											obj_t BgL_arg2150z00_1040;

																											obj_t BgL_arg2151z00_1041;

																											BgL_arg2150z00_1040 =
																												BGl_symbol3405z00zz__expander_argsz00;
																											BgL_arg2151z00_1041 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2149z00_1039 =
																												MAKE_PAIR
																												(BgL_arg2150z00_1040,
																												BgL_arg2151z00_1041);
																										}
																										BgL_arg2145z00_1035 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol3436z00zz__expander_argsz00,
																											BgL_list2149z00_1039);
																									}
																									BgL_arg2131z00_1023 =
																										MAKE_PAIR
																										(BgL_arg2144z00_1034,
																										BgL_arg2145z00_1035);
																								}
																								{	/* Eval/expdargs.scm 120 */
																									obj_t BgL_arg2152z00_1042;

																									obj_t BgL_arg2153z00_1043;

																									BgL_arg2152z00_1042 =
																										BGl_symbol3465z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 120 */
																										obj_t BgL_arg2154z00_1044;

																										obj_t BgL_arg2155z00_1045;

																										obj_t BgL_arg2156z00_1046;

																										obj_t BgL_arg2157z00_1047;

																										BgL_arg2154z00_1044 =
																											BGl_symbol3459z00zz__expander_argsz00;
																										{	/* Eval/expdargs.scm 121 */
																											obj_t BgL_arg2163z00_1053;

																											obj_t BgL_arg2164z00_1054;

																											BgL_arg2163z00_1053 =
																												MAKE_PAIR
																												(BGl_symbol3467z00zz__expander_argsz00,
																												BNIL);
																											{	/* Eval/expdargs.scm 122 */
																												obj_t
																													BgL_arg2165z00_1055;
																												{	/* Eval/expdargs.scm 122 */
																													obj_t
																														BgL_arg2168z00_1058;
																													obj_t
																														BgL_arg2169z00_1059;
																													BgL_arg2168z00_1058 =
																														BGl_symbol3453z00zz__expander_argsz00;
																													{	/* Eval/expdargs.scm 122 */
																														obj_t
																															BgL_list2170z00_1060;
																														{	/* Eval/expdargs.scm 122 */
																															obj_t
																																BgL_arg2171z00_1061;
																															obj_t
																																BgL_arg2172z00_1062;
																															BgL_arg2171z00_1061
																																=
																																BGl_symbol3461z00zz__expander_argsz00;
																															BgL_arg2172z00_1062
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2170z00_1060
																																=
																																MAKE_PAIR
																																(BgL_arg2171z00_1061,
																																BgL_arg2172z00_1062);
																														}
																														BgL_arg2169z00_1059
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BGl_symbol3463z00zz__expander_argsz00,
																															BgL_list2170z00_1060);
																													}
																													BgL_arg2165z00_1055 =
																														MAKE_PAIR
																														(BgL_arg2168z00_1058,
																														BgL_arg2169z00_1059);
																												}
																												{	/* Eval/expdargs.scm 121 */
																													obj_t
																														BgL_list2167z00_1057;
																													BgL_list2167z00_1057 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2164z00_1054 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2165z00_1055,
																														BgL_list2167z00_1057);
																												}
																											}
																											BgL_arg2155z00_1045 =
																												MAKE_PAIR
																												(BgL_arg2163z00_1053,
																												BgL_arg2164z00_1054);
																										}
																										{	/* Eval/expdargs.scm 123 */
																											obj_t BgL_arg2173z00_1063;

																											obj_t BgL_arg2174z00_1064;

																											BgL_arg2173z00_1063 =
																												MAKE_PAIR
																												(BGl_symbol3469z00zz__expander_argsz00,
																												BNIL);
																											{	/* Eval/expdargs.scm 124 */
																												obj_t
																													BgL_arg2175z00_1065;
																												{	/* Eval/expdargs.scm 124 */
																													obj_t
																														BgL_arg2178z00_1068;
																													obj_t
																														BgL_arg2179z00_1069;
																													BgL_arg2178z00_1068 =
																														BGl_symbol3455z00zz__expander_argsz00;
																													{	/* Eval/expdargs.scm 124 */
																														obj_t
																															BgL_arg2180z00_1070;
																														{	/* Eval/expdargs.scm 124 */
																															obj_t
																																BgL_arg2183z00_1073;
																															obj_t
																																BgL_arg2184z00_1074;
																															BgL_arg2183z00_1073
																																=
																																BGl_symbol3471z00zz__expander_argsz00;
																															{	/* Eval/expdargs.scm 124 */
																																obj_t
																																	BgL_list2185z00_1075;
																																BgL_list2185z00_1075
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2184z00_1074
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_symbol3432z00zz__expander_argsz00,
																																	BgL_list2185z00_1075);
																															}
																															BgL_arg2180z00_1070
																																=
																																MAKE_PAIR
																																(BgL_arg2183z00_1073,
																																BgL_arg2184z00_1074);
																														}
																														{	/* Eval/expdargs.scm 124 */
																															obj_t
																																BgL_list2182z00_1072;
																															BgL_list2182z00_1072
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2179z00_1069
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2180z00_1070,
																																BgL_list2182z00_1072);
																														}
																													}
																													BgL_arg2175z00_1065 =
																														MAKE_PAIR
																														(BgL_arg2178z00_1068,
																														BgL_arg2179z00_1069);
																												}
																												{	/* Eval/expdargs.scm 123 */
																													obj_t
																														BgL_list2177z00_1067;
																													BgL_list2177z00_1067 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2174z00_1064 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2175z00_1065,
																														BgL_list2177z00_1067);
																												}
																											}
																											BgL_arg2156z00_1046 =
																												MAKE_PAIR
																												(BgL_arg2173z00_1063,
																												BgL_arg2174z00_1064);
																										}
																										{	/* Eval/expdargs.scm 125 */
																											obj_t BgL_arg2186z00_1076;

																											obj_t BgL_arg2187z00_1077;

																											BgL_arg2186z00_1076 =
																												MAKE_PAIR
																												(BGl_symbol3415z00zz__expander_argsz00,
																												BNIL);
																											{	/* Eval/expdargs.scm 125 */
																												obj_t
																													BgL_list2188z00_1078;
																												BgL_list2188z00_1078 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2187z00_1077 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol3461z00zz__expander_argsz00,
																													BgL_list2188z00_1078);
																											}
																											BgL_arg2157z00_1047 =
																												MAKE_PAIR
																												(BgL_arg2186z00_1076,
																												BgL_arg2187z00_1077);
																										}
																										{	/* Eval/expdargs.scm 120 */
																											obj_t
																												BgL_list2159z00_1049;
																											{	/* Eval/expdargs.scm 120 */
																												obj_t
																													BgL_arg2160z00_1050;
																												{	/* Eval/expdargs.scm 120 */
																													obj_t
																														BgL_arg2161z00_1051;
																													{	/* Eval/expdargs.scm 120 */
																														obj_t
																															BgL_arg2162z00_1052;
																														BgL_arg2162z00_1052
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2161z00_1051
																															=
																															MAKE_PAIR
																															(BgL_arg2157z00_1047,
																															BgL_arg2162z00_1052);
																													}
																													BgL_arg2160z00_1050 =
																														MAKE_PAIR
																														(BgL_arg2156z00_1046,
																														BgL_arg2161z00_1051);
																												}
																												BgL_list2159z00_1049 =
																													MAKE_PAIR
																													(BgL_arg2155z00_1045,
																													BgL_arg2160z00_1050);
																											}
																											BgL_arg2153z00_1043 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2154z00_1044,
																												BgL_list2159z00_1049);
																										}
																									}
																									BgL_arg2132z00_1024 =
																										MAKE_PAIR
																										(BgL_arg2152z00_1042,
																										BgL_arg2153z00_1043);
																								}
																								{	/* Eval/expdargs.scm 118 */
																									obj_t BgL_list2134z00_1026;

																									{	/* Eval/expdargs.scm 118 */
																										obj_t BgL_arg2135z00_1027;

																										{	/* Eval/expdargs.scm 118 */
																											obj_t BgL_arg2136z00_1028;

																											BgL_arg2136z00_1028 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2135z00_1027 =
																												MAKE_PAIR
																												(BgL_arg2132z00_1024,
																												BgL_arg2136z00_1028);
																										}
																										BgL_list2134z00_1026 =
																											MAKE_PAIR
																											(BgL_arg2131z00_1023,
																											BgL_arg2135z00_1027);
																									}
																									BgL_arg2127z00_1021 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2130z00_1022,
																										BgL_list2134z00_1026);
																								}
																							}
																							BgL_arg2113z00_1010 =
																								MAKE_PAIR(BgL_arg2126z00_1020,
																								BgL_arg2127z00_1021);
																						}
																						{	/* Eval/expdargs.scm 117 */
																							obj_t BgL_list2115z00_1012;

																							{	/* Eval/expdargs.scm 117 */
																								obj_t BgL_arg2116z00_1013;

																								{	/* Eval/expdargs.scm 117 */
																									obj_t BgL_arg2118z00_1014;

																									BgL_arg2118z00_1014 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2116z00_1013 =
																										MAKE_PAIR
																										(BgL_arg2113z00_1010,
																										BgL_arg2118z00_1014);
																								}
																								BgL_list2115z00_1012 =
																									MAKE_PAIR(BgL_arg2112z00_1009,
																									BgL_arg2116z00_1013);
																							}
																							BgL_arg2110z00_1007 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2111z00_1008,
																								BgL_list2115z00_1012);
																						}
																					}
																					BgL_arg2093z00_990 =
																						MAKE_PAIR(BgL_arg2109z00_1006,
																						BgL_arg2110z00_1007);
																				}
																				{	/* Eval/expdargs.scm 115 */
																					obj_t BgL_list2095z00_992;

																					{	/* Eval/expdargs.scm 115 */
																						obj_t BgL_arg2096z00_993;

																						{	/* Eval/expdargs.scm 115 */
																							obj_t BgL_arg2097z00_994;

																							BgL_arg2097z00_994 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2096z00_993 =
																								MAKE_PAIR(BgL_arg2093z00_990,
																								BgL_arg2097z00_994);
																						}
																						BgL_list2095z00_992 =
																							MAKE_PAIR(BgL_arg2092z00_989,
																							BgL_arg2096z00_993);
																					}
																					BgL_arg2090z00_987 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2091z00_988,
																						BgL_list2095z00_992);
																				}
																			}
																			BgL_arg2085z00_983 =
																				MAKE_PAIR(BgL_arg2089z00_986,
																				BgL_arg2090z00_987);
																		}
																		{	/* Eval/expdargs.scm 114 */
																			obj_t BgL_list2087z00_985;

																			BgL_list2087z00_985 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2084z00_982 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2085z00_983,
																				BgL_list2087z00_985);
																		}
																	}
																	BgL_arg2042z00_945 =
																		MAKE_PAIR(BgL_arg2083z00_981,
																		BgL_arg2084z00_982);
																}
																{	/* Eval/expdargs.scm 109 */
																	obj_t BgL_list2044z00_947;

																	{	/* Eval/expdargs.scm 109 */
																		obj_t BgL_arg2045z00_948;

																		{	/* Eval/expdargs.scm 109 */
																			obj_t BgL_arg2046z00_949;

																			BgL_arg2046z00_949 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2045z00_948 =
																				MAKE_PAIR(BgL_arg2042z00_945,
																				BgL_arg2046z00_949);
																		}
																		BgL_list2044z00_947 =
																			MAKE_PAIR(BgL_arg2041z00_944,
																			BgL_arg2045z00_948);
																	}
																	BgL_arg2039z00_942 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2040z00_943, BgL_list2044z00_947);
																}
															}
															BgL_arg2036z00_939 =
																MAKE_PAIR(BgL_arg2038z00_941,
																BgL_arg2039z00_942);
														}
														BgL_arg2013z00_911 =
															MAKE_PAIR(BgL_arg2036z00_939, BNIL);
													}
													BgL_arg1969z00_863 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2012z00_910, BgL_arg2013z00_911);
												}
												{	/* Eval/expdargs.scm 95 */
													obj_t BgL_list1970z00_864;

													BgL_list1970z00_864 =
														MAKE_PAIR(BgL_arg1969z00_863, BNIL);
													BgL_arg1967z00_861 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1968z00_862, BgL_list1970z00_864);
												}
											}
											return MAKE_PAIR(BgL_arg1966z00_860, BgL_arg1967z00_861);
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



/* <anonymous:2191> */
	obj_t BGl_zc3anonymousza32191ze3z83zz__expander_argsz00(obj_t BgL_envz00_3476,
		obj_t BgL_xz00_3477)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 94 */
			return BgL_xz00_3477;
		}
	}



/* make-help */
	obj_t BGl_makezd2helpzd2zz__expander_argsz00(obj_t BgL_clausez00_8)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 131 */
			{
				obj_t BgL_optz00_1168;

				if (PAIRP(BgL_clausez00_8))
					{	/* Eval/expdargs.scm 132 */
						obj_t BgL_cdrzd21409zd2_1173;

						BgL_cdrzd21409zd2_1173 = CDR(BgL_clausez00_8);
						if ((CAR(BgL_clausez00_8) == BGl_symbol3478z00zz__expander_argsz00))
							{	/* Eval/expdargs.scm 132 */
								if (PAIRP(BgL_cdrzd21409zd2_1173))
									{	/* Eval/expdargs.scm 132 */
										if (NULLP(CDR(BgL_cdrzd21409zd2_1173)))
											{	/* Eval/expdargs.scm 132 */
												obj_t BgL_arg2275z00_1177;

												BgL_arg2275z00_1177 = CAR(BgL_cdrzd21409zd2_1173);
												return
													MAKE_PAIR(BGl_symbol3478z00zz__expander_argsz00,
													BgL_arg2275z00_1177);
											}
										else
											{	/* Eval/expdargs.scm 132 */
												obj_t BgL_carzd21417zd2_1178;

												BgL_carzd21417zd2_1178 = CAR(BgL_clausez00_8);
												if (PAIRP(BgL_carzd21417zd2_1178))
													{	/* Eval/expdargs.scm 132 */
														if (NULLP(CDR(BgL_carzd21417zd2_1178)))
															{	/* Eval/expdargs.scm 132 */
																return BFALSE;
															}
														else
															{	/* Eval/expdargs.scm 132 */
																BgL_optz00_1168 = BgL_carzd21417zd2_1178;
															BgL_tagzd21402zd2_1169:
																{	/* Eval/expdargs.scm 142 */
																	obj_t BgL_synz00_1204;

																	BgL_synz00_1204 =
																		CAR
																		(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_optz00_1168));
																	{
																		obj_t BgL_synopsisz00_1209;

																		obj_t BgL_msgz00_1210;

																		if (PAIRP(BgL_synz00_1204))
																			{	/* Eval/expdargs.scm 143 */
																				obj_t BgL_cdrzd21485zd2_1215;

																				BgL_cdrzd21485zd2_1215 =
																					CDR(BgL_synz00_1204);
																				if (PAIRP(BgL_cdrzd21485zd2_1215))
																					{	/* Eval/expdargs.scm 143 */
																						obj_t BgL_cdrzd21490zd2_1217;

																						BgL_cdrzd21490zd2_1217 =
																							CDR(BgL_cdrzd21485zd2_1215);
																						if (PAIRP(BgL_cdrzd21490zd2_1217))
																							{	/* Eval/expdargs.scm 143 */
																								if (NULLP(CDR
																										(BgL_cdrzd21490zd2_1217)))
																									{	/* Eval/expdargs.scm 143 */
																										obj_t BgL_arg2305z00_1220;

																										obj_t BgL_arg2306z00_1221;

																										obj_t BgL_arg2307z00_1222;

																										BgL_arg2305z00_1220 =
																											CAR(BgL_synz00_1204);
																										BgL_arg2306z00_1221 =
																											CAR
																											(BgL_cdrzd21485zd2_1215);
																										BgL_arg2307z00_1222 =
																											CAR
																											(BgL_cdrzd21490zd2_1217);
																										if (BGl_synopsiszf3zf3zz__expander_argsz00(BgL_arg2305z00_1220))
																											{	/* Eval/expdargs.scm 143 */
																												obj_t
																													BgL_arg2314z00_2856;
																												if (STRINGP
																													(BgL_arg2307z00_1222))
																													{	/* Eval/expdargs.scm 143 */
																														BgL_arg2314z00_2856
																															=
																															BgL_arg2307z00_1222;
																													}
																												else
																													{	/* Eval/expdargs.scm 143 */
																														obj_t
																															BgL_list2316z00_2858;
																														{	/* Eval/expdargs.scm 143 */
																															obj_t
																																BgL_arg2317z00_2859;
																															obj_t
																																BgL_arg2318z00_2860;
																															BgL_arg2317z00_2859
																																=
																																BGl_symbol3428z00zz__expander_argsz00;
																															BgL_arg2318z00_2860
																																=
																																MAKE_PAIR
																																(BgL_arg2307z00_1222,
																																BNIL);
																															BgL_list2316z00_2858
																																=
																																MAKE_PAIR
																																(BgL_arg2317z00_2859,
																																BgL_arg2318z00_2860);
																														}
																														BgL_arg2314z00_2856
																															=
																															BgL_list2316z00_2858;
																													}
																												return
																													MAKE_PAIR
																													(BgL_arg2306z00_1221,
																													BgL_arg2314z00_2856);
																											}
																										else
																											{	/* Eval/expdargs.scm 143 */
																												return
																													BGl_errorz00zz__errorz00
																													(BGl_symbol3394z00zz__expander_argsz00,
																													BGl_string3477z00zz__expander_argsz00,
																													BgL_clausez00_8);
																											}
																									}
																								else
																									{	/* Eval/expdargs.scm 143 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Eval/expdargs.scm 143 */
																								if (NULLP(CDR
																										(BgL_cdrzd21485zd2_1215)))
																									{	/* Eval/expdargs.scm 143 */
																										BgL_synopsisz00_1209 =
																											CAR(BgL_synz00_1204);
																										BgL_msgz00_1210 =
																											CAR
																											(BgL_cdrzd21485zd2_1215);
																										{	/* Eval/expdargs.scm 149 */
																											bool_t BgL_testz00_3869;

																											{	/* Eval/expdargs.scm 149 */
																												bool_t
																													BgL__ortest_1832z00_2885;
																												BgL__ortest_1832z00_2885
																													=
																													(BgL_synopsisz00_1209
																													==
																													BGl_symbol3473z00zz__expander_argsz00);
																												if (BgL__ortest_1832z00_2885)
																													{	/* Eval/expdargs.scm 149 */
																														BgL_testz00_3869 =
																															BgL__ortest_1832z00_2885;
																													}
																												else
																													{	/* Eval/expdargs.scm 149 */
																														BgL_testz00_3869 =
																															(BgL_synopsisz00_1209
																															==
																															BGl_symbol3475z00zz__expander_argsz00);
																													}
																											}
																											if (BgL_testz00_3869)
																												{	/* Eval/expdargs.scm 151 */
																													obj_t
																														BgL_arg2320z00_1236;
																													obj_t
																														BgL_arg2321z00_1237;
																													BgL_arg2320z00_1236 =
																														BGl_makezd2synopsiszd2namez00zz__expander_argsz00
																														(BgL_clausez00_8);
																													if (STRINGP
																														(BgL_msgz00_1210))
																														{	/* Eval/expdargs.scm 152 */
																															BgL_arg2321z00_1237
																																=
																																BgL_msgz00_1210;
																														}
																													else
																														{	/* Eval/expdargs.scm 152 */
																															obj_t
																																BgL_list2323z00_1239;
																															{	/* Eval/expdargs.scm 152 */
																																obj_t
																																	BgL_arg2324z00_1240;
																																obj_t
																																	BgL_arg2325z00_1241;
																																BgL_arg2324z00_1240
																																	=
																																	BGl_symbol3428z00zz__expander_argsz00;
																																BgL_arg2325z00_1241
																																	=
																																	MAKE_PAIR
																																	(BgL_msgz00_1210,
																																	BNIL);
																																BgL_list2323z00_1239
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2324z00_1240,
																																	BgL_arg2325z00_1241);
																															}
																															BgL_arg2321z00_1237
																																=
																																BgL_list2323z00_1239;
																														}
																													return
																														MAKE_PAIR
																														(BgL_arg2320z00_1236,
																														BgL_arg2321z00_1237);
																												}
																											else
																												{	/* Eval/expdargs.scm 149 */
																													return
																														BGl_errorz00zz__errorz00
																														(BGl_symbol3394z00zz__expander_argsz00,
																														BGl_string3477z00zz__expander_argsz00,
																														BgL_clausez00_8);
																												}
																										}
																									}
																								else
																									{	/* Eval/expdargs.scm 143 */
																										return BFALSE;
																									}
																							}
																					}
																				else
																					{	/* Eval/expdargs.scm 143 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Eval/expdargs.scm 143 */
																				return BFALSE;
																			}
																	}
																}
															}
													}
												else
													{
														obj_t BgL_optz00_3882;

														BgL_optz00_3882 = BgL_carzd21417zd2_1178;
														BgL_optz00_1168 = BgL_optz00_3882;
														goto BgL_tagzd21402zd2_1169;
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 132 */
										obj_t BgL_carzd21434zd2_1185;

										BgL_carzd21434zd2_1185 = CAR(BgL_clausez00_8);
										if (PAIRP(BgL_carzd21434zd2_1185))
											{	/* Eval/expdargs.scm 132 */
												if (NULLP(CDR(BgL_carzd21434zd2_1185)))
													{	/* Eval/expdargs.scm 132 */
														return BFALSE;
													}
												else
													{
														obj_t BgL_optz00_3889;

														BgL_optz00_3889 = BgL_carzd21434zd2_1185;
														BgL_optz00_1168 = BgL_optz00_3889;
														goto BgL_tagzd21402zd2_1169;
													}
											}
										else
											{
												obj_t BgL_optz00_3890;

												BgL_optz00_3890 = BgL_carzd21434zd2_1185;
												BgL_optz00_1168 = BgL_optz00_3890;
												goto BgL_tagzd21402zd2_1169;
											}
									}
							}
						else
							{	/* Eval/expdargs.scm 132 */
								if (NULLP(CAR(BgL_clausez00_8)))
									{	/* Eval/expdargs.scm 132 */
										return BFALSE;
									}
								else
									{	/* Eval/expdargs.scm 132 */
										if (
											(CAR(BgL_clausez00_8) ==
												BGl_symbol3449z00zz__expander_argsz00))
											{	/* Eval/expdargs.scm 132 */
												return BFALSE;
											}
										else
											{	/* Eval/expdargs.scm 132 */
												obj_t BgL_carzd21455zd2_1193;

												BgL_carzd21455zd2_1193 = CAR(BgL_clausez00_8);
												if (PAIRP(BgL_carzd21455zd2_1193))
													{	/* Eval/expdargs.scm 132 */
														if (NULLP(CDR(BgL_carzd21455zd2_1193)))
															{	/* Eval/expdargs.scm 132 */
																return BFALSE;
															}
														else
															{
																obj_t BgL_optz00_3903;

																BgL_optz00_3903 = BgL_carzd21455zd2_1193;
																BgL_optz00_1168 = BgL_optz00_3903;
																goto BgL_tagzd21402zd2_1169;
															}
													}
												else
													{
														obj_t BgL_optz00_3904;

														BgL_optz00_3904 = BgL_carzd21455zd2_1193;
														BgL_optz00_1168 = BgL_optz00_3904;
														goto BgL_tagzd21402zd2_1169;
													}
											}
									}
							}
					}
				else
					{	/* Eval/expdargs.scm 132 */
						return BFALSE;
					}
			}
		}
	}



/* make-synopsis-name */
	obj_t BGl_makezd2synopsiszd2namez00zz__expander_argsz00(obj_t
		BgL_clausez00_10)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 167 */
			{
				obj_t BgL_optz00_1259;

				obj_t BgL_oz00_1260;

				obj_t BgL_argsz00_1261;

				obj_t BgL_optz00_1280;

				obj_t BgL_ozb2zb2_1281;

				obj_t BgL_argsz00_1282;

				{	/* Eval/expdargs.scm 225 */
					obj_t BgL_optz00_1245;

					BgL_optz00_1245 = CAR(BgL_clausez00_10);
					{	/* Eval/expdargs.scm 225 */
						obj_t BgL_oz00_1246;

						BgL_oz00_1246 = CAR(BgL_optz00_1245);
						{	/* Eval/expdargs.scm 226 */
							obj_t BgL_argsz00_1247;

							BgL_argsz00_1247 =
								BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
								(BgL_optz00_1245);
							{	/* Eval/expdargs.scm 227 */

								if (STRINGP(BgL_oz00_1246))
									{	/* Eval/expdargs.scm 229 */
										BgL_optz00_1259 = BgL_optz00_1245;
										BgL_oz00_1260 = BgL_oz00_1246;
										BgL_argsz00_1261 = BgL_argsz00_1247;
										{	/* Eval/expdargs.scm 169 */
											obj_t BgL_oidz00_1263;

											BgL_oidz00_1263 =
												BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
												(BgL_oz00_1260);
											{	/* Eval/expdargs.scm 172 */
												obj_t BgL_aidz00_1264;

												{	/* Eval/expdargs.scm 172 */
													int BgL_auxz00_3911;

													BgL_auxz00_3911 = (int) (((long) 1));
													BgL_aidz00_1264 = BGL_MVALUES_VAL(BgL_auxz00_3911);
												}
												{	/* Eval/expdargs.scm 172 */
													bool_t BgL_testz00_3914;

													if (CBOOL(BgL_aidz00_1264))
														{	/* Eval/expdargs.scm 172 */
															BgL_testz00_3914 = PAIRP(BgL_argsz00_1261);
														}
													else
														{	/* Eval/expdargs.scm 172 */
															BgL_testz00_3914 = ((bool_t) 0);
														}
													if (BgL_testz00_3914)
														{	/* Eval/expdargs.scm 172 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol3394z00zz__expander_argsz00,
																BGl_string3482z00zz__expander_argsz00,
																BgL_clausez00_10);
														}
													else
														{	/* Eval/expdargs.scm 174 */
															bool_t BgL_testz00_3919;

															if (CBOOL(BgL_aidz00_1264))
																{	/* Eval/expdargs.scm 174 */
																	BgL_testz00_3919 = ((bool_t) 1);
																}
															else
																{	/* Eval/expdargs.scm 174 */
																	BgL_testz00_3919 = PAIRP(BgL_argsz00_1261);
																}
															if (BgL_testz00_3919)
																{	/* Eval/expdargs.scm 174 */
																	if (CBOOL(BgL_aidz00_1264))
																		{	/* Eval/expdargs.scm 176 */
																			return
																				string_append(BgL_oidz00_1263,
																				BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																				(BgL_aidz00_1264));
																		}
																	else
																		{	/* Eval/expdargs.scm 176 */
																			return
																				string_append(BgL_oidz00_1263,
																				BGl_loopz72z72zz__expander_argsz00
																				(BgL_clausez00_10, BgL_argsz00_1261));
																		}
																}
															else
																{	/* Eval/expdargs.scm 174 */
																	return BgL_oidz00_1263;
																}
														}
												}
											}
										}
									}
								else
									{	/* Eval/expdargs.scm 231 */
										bool_t BgL_testz00_3929;

										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_oz00_1246))
											{
												obj_t BgL_l1884z00_1252;

												BgL_l1884z00_1252 = BgL_oz00_1246;
											BgL_zc3anonymousza32330ze3z83_1253:
												if (NULLP(BgL_l1884z00_1252))
													{	/* Eval/expdargs.scm 231 */
														BgL_testz00_3929 = ((bool_t) 1);
													}
												else
													{	/* Eval/expdargs.scm 231 */
														bool_t BgL_testz00_3934;

														{	/* Eval/expdargs.scm 231 */
															obj_t BgL_auxz00_3935;

															BgL_auxz00_3935 = CAR(BgL_l1884z00_1252);
															BgL_testz00_3934 = STRINGP(BgL_auxz00_3935);
														}
														if (BgL_testz00_3934)
															{
																obj_t BgL_l1884z00_3938;

																BgL_l1884z00_3938 = CDR(BgL_l1884z00_1252);
																BgL_l1884z00_1252 = BgL_l1884z00_3938;
																goto BgL_zc3anonymousza32330ze3z83_1253;
															}
														else
															{	/* Eval/expdargs.scm 231 */
																BgL_testz00_3929 = ((bool_t) 0);
															}
													}
											}
										else
											{	/* Eval/expdargs.scm 231 */
												BgL_testz00_3929 = ((bool_t) 0);
											}
										if (BgL_testz00_3929)
											{	/* Eval/expdargs.scm 231 */
												BgL_optz00_1280 = BgL_optz00_1245;
												BgL_ozb2zb2_1281 = BgL_oz00_1246;
												BgL_argsz00_1282 = BgL_argsz00_1247;
												{	/* Eval/expdargs.scm 195 */
													obj_t BgL_oidzb2zb2_1285;

													{
														obj_t BgL_ozb2zb2_1335;

														obj_t BgL_oidzb2zb2_1336;

														obj_t BgL_aidzb2zb2_1337;

														BgL_ozb2zb2_1335 = BgL_ozb2zb2_1281;
														BgL_oidzb2zb2_1336 = BNIL;
														BgL_aidzb2zb2_1337 = BNIL;
													BgL_zc3anonymousza32379ze3z83_1338:
														if (NULLP(BgL_ozb2zb2_1335))
															{	/* Eval/expdargs.scm 200 */
																obj_t BgL_val0_1875z00_1340;

																obj_t BgL_val1_1876z00_1341;

																BgL_val0_1875z00_1340 =
																	bgl_reverse_bang(BgL_oidzb2zb2_1336);
																BgL_val1_1876z00_1341 =
																	bgl_reverse_bang(BgL_aidzb2zb2_1337);
																{	/* Eval/expdargs.scm 200 */
																	int BgL_auxz00_3944;

																	BgL_auxz00_3944 = (int) (((long) 2));
																	BGL_MVALUES_NUMBER_SET(BgL_auxz00_3944);
																}
																{	/* Eval/expdargs.scm 200 */
																	int BgL_auxz00_3947;

																	BgL_auxz00_3947 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_auxz00_3947,
																		BgL_val1_1876z00_1341);
																}
																BgL_oidzb2zb2_1285 = BgL_val0_1875z00_1340;
															}
														else
															{	/* Eval/expdargs.scm 201 */
																obj_t BgL_oidz00_1342;

																BgL_oidz00_1342 =
																	BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
																	(CAR(BgL_ozb2zb2_1335));
																{	/* Eval/expdargs.scm 203 */
																	obj_t BgL_aidz00_1343;

																	{	/* Eval/expdargs.scm 203 */
																		int BgL_auxz00_3952;

																		BgL_auxz00_3952 = (int) (((long) 1));
																		BgL_aidz00_1343 =
																			BGL_MVALUES_VAL(BgL_auxz00_3952);
																	}
																	{	/* Eval/expdargs.scm 203 */
																		obj_t BgL_arg2381z00_1344;

																		obj_t BgL_arg2382z00_1345;

																		obj_t BgL_arg2383z00_1346;

																		BgL_arg2381z00_1344 = CDR(BgL_ozb2zb2_1335);
																		BgL_arg2382z00_1345 =
																			MAKE_PAIR(BgL_oidz00_1342,
																			BgL_oidzb2zb2_1336);
																		BgL_arg2383z00_1346 =
																			MAKE_PAIR(BgL_aidz00_1343,
																			BgL_aidzb2zb2_1337);
																		{
																			obj_t BgL_aidzb2zb2_3960;

																			obj_t BgL_oidzb2zb2_3959;

																			obj_t BgL_ozb2zb2_3958;

																			BgL_ozb2zb2_3958 = BgL_arg2381z00_1344;
																			BgL_oidzb2zb2_3959 = BgL_arg2382z00_1345;
																			BgL_aidzb2zb2_3960 = BgL_arg2383z00_1346;
																			BgL_aidzb2zb2_1337 = BgL_aidzb2zb2_3960;
																			BgL_oidzb2zb2_1336 = BgL_oidzb2zb2_3959;
																			BgL_ozb2zb2_1335 = BgL_ozb2zb2_3958;
																			goto BgL_zc3anonymousza32379ze3z83_1338;
																		}
																	}
																}
															}
													}
													{	/* Eval/expdargs.scm 205 */
														obj_t BgL_aidzb2zb2_1286;

														{	/* Eval/expdargs.scm 205 */
															int BgL_auxz00_3961;

															BgL_auxz00_3961 = (int) (((long) 1));
															BgL_aidzb2zb2_1286 =
																BGL_MVALUES_VAL(BgL_auxz00_3961);
														}
														{	/* Eval/expdargs.scm 205 */
															bool_t BgL_testz00_3964;

															if (PAIRP(BgL_aidzb2zb2_1286))
																{
																	obj_t BgL_l1877z00_2920;

																	BgL_l1877z00_2920 = BgL_aidzb2zb2_1286;
																BgL_zc3anonymousza32375ze3z83_2919:
																	if (NULLP(BgL_l1877z00_2920))
																		{	/* Eval/expdargs.scm 205 */
																			BgL_testz00_3964 = ((bool_t) 0);
																		}
																	else
																		{	/* Eval/expdargs.scm 205 */
																			bool_t BgL_testz00_3969;

																			{	/* Eval/expdargs.scm 205 */
																				obj_t BgL_pairz00_2930;

																				BgL_pairz00_2930 = BgL_l1877z00_2920;
																				BgL_testz00_3969 =
																					CBOOL(CAR(BgL_pairz00_2930));
																			}
																			if (BgL_testz00_3969)
																				{	/* Eval/expdargs.scm 205 */
																					BgL_testz00_3964 = ((bool_t) 1);
																				}
																			else
																				{
																					obj_t BgL_l1877z00_3972;

																					BgL_l1877z00_3972 =
																						CDR(BgL_l1877z00_2920);
																					BgL_l1877z00_2920 = BgL_l1877z00_3972;
																					goto
																						BgL_zc3anonymousza32375ze3z83_2919;
																				}
																		}
																}
															else
																{	/* Eval/expdargs.scm 205 */
																	BgL_testz00_3964 = ((bool_t) 0);
																}
															if (BgL_testz00_3964)
																{	/* Eval/expdargs.scm 205 */
																	if (NULLP(BgL_argsz00_1282))
																		{	/* Eval/expdargs.scm 218 */
																			obj_t BgL_runner2363z00_1309;

																			{	/* Eval/expdargs.scm 219 */
																				obj_t BgL_arg2352z00_1290;

																				obj_t BgL_arg2353z00_1291;

																				BgL_arg2352z00_1290 =
																					BGl_concatz00zz__expander_argsz00
																					(BgL_oidzb2zb2_1285);
																				{	/* Eval/expdargs.scm 220 */
																					obj_t BgL_l1879z00_1293;

																					BgL_l1879z00_1293 =
																						BgL_aidzb2zb2_1286;
																					{	/* Eval/expdargs.scm 220 */
																						obj_t BgL_head1881z00_1295;

																						BgL_head1881z00_1295 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l1879z00_1297;

																							obj_t BgL_tail1882z00_1298;

																							BgL_l1879z00_1297 =
																								BgL_l1879z00_1293;
																							BgL_tail1882z00_1298 =
																								BgL_head1881z00_1295;
																						BgL_zc3anonymousza32356ze3z83_1299:
																							if (NULLP(BgL_l1879z00_1297))
																								{	/* Eval/expdargs.scm 220 */
																									BgL_arg2353z00_1291 =
																										CDR(BgL_head1881z00_1295);
																								}
																							else
																								{	/* Eval/expdargs.scm 220 */
																									obj_t BgL_newtail1883z00_1301;

																									{	/* Eval/expdargs.scm 220 */
																										obj_t BgL_arg2359z00_1303;

																										{	/* Eval/expdargs.scm 220 */
																											obj_t BgL_az00_1305;

																											BgL_az00_1305 =
																												CAR(BgL_l1879z00_1297);
																											BgL_arg2359z00_1303 =
																												string_append
																												(BGl_string3480z00zz__expander_argsz00,
																												BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																												(BgL_az00_1305));
																										}
																										BgL_newtail1883z00_1301 =
																											MAKE_PAIR
																											(BgL_arg2359z00_1303,
																											BNIL);
																									}
																									SET_CDR(BgL_tail1882z00_1298,
																										BgL_newtail1883z00_1301);
																									{
																										obj_t BgL_tail1882z00_3988;

																										obj_t BgL_l1879z00_3986;

																										BgL_l1879z00_3986 =
																											CDR(BgL_l1879z00_1297);
																										BgL_tail1882z00_3988 =
																											BgL_newtail1883z00_1301;
																										BgL_tail1882z00_1298 =
																											BgL_tail1882z00_3988;
																										BgL_l1879z00_1297 =
																											BgL_l1879z00_3986;
																										goto
																											BgL_zc3anonymousza32356ze3z83_1299;
																									}
																								}
																						}
																					}
																				}
																				{	/* Eval/expdargs.scm 218 */
																					obj_t BgL_list2354z00_1292;

																					BgL_list2354z00_1292 =
																						MAKE_PAIR(BgL_arg2353z00_1291,
																						BNIL);
																					BgL_runner2363z00_1309 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2352z00_1290,
																						BgL_list2354z00_1292);
																				}
																			}
																			return
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_runner2363z00_1309);
																		}
																	else
																		{	/* Eval/expdargs.scm 215 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol3394z00zz__expander_argsz00,
																				BGl_string3481z00zz__expander_argsz00,
																				BgL_clausez00_10);
																		}
																}
															else
																{	/* Eval/expdargs.scm 205 */
																	return
																		string_append
																		(BGl_concatz00zz__expander_argsz00
																		(BgL_oidzb2zb2_1285),
																		BGl_loopz72z72z00zz__expander_argsz00
																		(BgL_clausez00_10, BgL_argsz00_1282));
																}
														}
													}
												}
											}
										else
											{	/* Eval/expdargs.scm 231 */
												return
													BGl_errorz00zz__errorz00
													(BGl_symbol3394z00zz__expander_argsz00,
													BGl_string3482z00zz__expander_argsz00,
													BgL_clausez00_10);
											}
									}
							}
						}
					}
				}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__expander_argsz00(obj_t BgL_clausez00_3488,
		obj_t BgL_argsz00_1270)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 181 */
			if (NULLP(BgL_argsz00_1270))
				{	/* Eval/expdargs.scm 182 */
					return BGl_string3483z00zz__expander_argsz00;
				}
			else
				{	/* Eval/expdargs.scm 182 */
					return
						string_append_3(BGl_string3480z00zz__expander_argsz00,
						BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
						(BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(CAR
								(BgL_argsz00_1270), BgL_clausez00_3488)),
						BGl_loopz72z72zz__expander_argsz00(BgL_clausez00_3488,
							CDR(BgL_argsz00_1270)));
				}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__expander_argsz00(obj_t BgL_clausez00_3489,
		obj_t BgL_argsz00_1313)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 208 */
			if (NULLP(BgL_argsz00_1313))
				{	/* Eval/expdargs.scm 209 */
					return BGl_string3483z00zz__expander_argsz00;
				}
			else
				{	/* Eval/expdargs.scm 209 */
					return
						string_append_3(BGl_string3480z00zz__expander_argsz00,
						BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
						(BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(CAR
								(BgL_argsz00_1313), BgL_clausez00_3489)),
						BGl_loopz72z72z00zz__expander_argsz00(BgL_clausez00_3489,
							CDR(BgL_argsz00_1313)));
				}
		}
	}



/* concat */
	obj_t BGl_concatz00zz__expander_argsz00(obj_t BgL_lz00_1349)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 194 */
			if (NULLP(CDR(BgL_lz00_1349)))
				{	/* Eval/expdargs.scm 190 */
					return CAR(BgL_lz00_1349);
				}
			else
				{	/* Eval/expdargs.scm 190 */
					return
						string_append_3(CAR(BgL_lz00_1349),
						BGl_string3484z00zz__expander_argsz00,
						BGl_concatz00zz__expander_argsz00(CDR(BgL_lz00_1349)));
				}
		}
	}



/* make-parser */
	obj_t BGl_makezd2parserzd2zz__expander_argsz00(obj_t BgL_clausez00_11,
		obj_t BgL_otablez00_12)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 239 */
			{
				obj_t BgL_exprza2za2_1364;

				obj_t BgL_exprza2za2_1362;

				if (PAIRP(BgL_clausez00_11))
					{	/* Eval/expdargs.scm 240 */
						obj_t BgL_cdrzd21537zd2_1370;

						BgL_cdrzd21537zd2_1370 = CDR(BgL_clausez00_11);
						if (
							(CAR(BgL_clausez00_11) == BGl_symbol3478z00zz__expander_argsz00))
							{	/* Eval/expdargs.scm 240 */
								if (PAIRP(BgL_cdrzd21537zd2_1370))
									{	/* Eval/expdargs.scm 240 */
										if (NULLP(CDR(BgL_cdrzd21537zd2_1370)))
											{	/* Eval/expdargs.scm 240 */
												return BFALSE;
											}
										else
											{	/* Eval/expdargs.scm 240 */
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_clausez00_11)))
													{	/* Eval/expdargs.scm 240 */
														return
															BGl_makezd2optzd2parserz00zz__expander_argsz00
															(BgL_clausez00_11, BgL_otablez00_12);
													}
												else
													{	/* Eval/expdargs.scm 240 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol3394z00zz__expander_argsz00,
															BGl_string3482z00zz__expander_argsz00,
															BgL_clausez00_11);
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 240 */
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_clausez00_11)))
											{	/* Eval/expdargs.scm 240 */
												return
													BGl_makezd2optzd2parserz00zz__expander_argsz00
													(BgL_clausez00_11, BgL_otablez00_12);
											}
										else
											{	/* Eval/expdargs.scm 240 */
												return
													BGl_errorz00zz__errorz00
													(BGl_symbol3394z00zz__expander_argsz00,
													BGl_string3482z00zz__expander_argsz00,
													BgL_clausez00_11);
											}
									}
							}
						else
							{	/* Eval/expdargs.scm 240 */
								if (NULLP(CAR(BgL_clausez00_11)))
									{	/* Eval/expdargs.scm 240 */
										BgL_exprza2za2_1362 = BgL_cdrzd21537zd2_1370;
										{	/* Eval/expdargs.scm 244 */
											obj_t BgL_az00_1391;

											obj_t BgL_vz00_1392;

											{	/* Eval/expdargs.scm 244 */

												{	/* Eval/expdargs.scm 244 */

													BgL_az00_1391 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/expdargs.scm 245 */

												{	/* Eval/expdargs.scm 245 */

													BgL_vz00_1392 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/expdargs.scm 246 */
												obj_t BgL_arg2413z00_1393;

												obj_t BgL_arg2414z00_1394;

												BgL_arg2413z00_1393 =
													BGl_symbol3401z00zz__expander_argsz00;
												{	/* Eval/expdargs.scm 246 */
													obj_t BgL_arg2415z00_1395;

													obj_t BgL_arg2416z00_1396;

													{	/* Eval/expdargs.scm 246 */
														obj_t BgL_arg2420z00_1400;

														{	/* Eval/expdargs.scm 246 */
															obj_t BgL_list2421z00_1401;

															BgL_list2421z00_1401 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2420z00_1400 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_vz00_1392, BgL_list2421z00_1401);
														}
														BgL_arg2415z00_1395 =
															MAKE_PAIR(BgL_az00_1391, BgL_arg2420z00_1400);
													}
													{	/* Eval/expdargs.scm 247 */
														obj_t BgL_arg2422z00_1402;

														obj_t BgL_arg2423z00_1403;

														BgL_arg2422z00_1402 =
															BGl_symbol3407z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 247 */
															obj_t BgL_arg2424z00_1404;

															obj_t BgL_arg2425z00_1405;

															obj_t BgL_arg2426z00_1406;

															{	/* Eval/expdargs.scm 247 */
																obj_t BgL_arg2431z00_1411;

																obj_t BgL_arg2432z00_1412;

																BgL_arg2431z00_1411 =
																	BGl_symbol3409z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 247 */
																	obj_t BgL_list2433z00_1413;

																	BgL_list2433z00_1413 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2432z00_1412 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_az00_1391, BgL_list2433z00_1413);
																}
																BgL_arg2424z00_1404 =
																	MAKE_PAIR(BgL_arg2431z00_1411,
																	BgL_arg2432z00_1412);
															}
															{	/* Eval/expdargs.scm 248 */
																obj_t BgL_arg2434z00_1414;

																obj_t BgL_arg2435z00_1415;

																BgL_arg2434z00_1414 =
																	BGl_symbol3411z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 248 */
																	obj_t BgL_arg2436z00_1416;

																	obj_t BgL_arg2437z00_1417;

																	{	/* Eval/expdargs.scm 248 */
																		obj_t BgL_arg2442z00_1422;

																		obj_t BgL_arg2443z00_1423;

																		BgL_arg2442z00_1422 =
																			BGl_symbol3413z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 248 */
																			obj_t BgL_list2444z00_1424;

																			BgL_list2444z00_1424 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2443z00_1423 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol3415z00zz__expander_argsz00,
																				BgL_list2444z00_1424);
																		}
																		BgL_arg2436z00_1416 =
																			MAKE_PAIR(BgL_arg2442z00_1422,
																			BgL_arg2443z00_1423);
																	}
																	BgL_arg2437z00_1417 =
																		MAKE_PAIR
																		(BGl_symbol3485z00zz__expander_argsz00,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_exprza2za2_1362, BNIL));
																	{	/* Eval/expdargs.scm 248 */
																		obj_t BgL_list2439z00_1419;

																		{	/* Eval/expdargs.scm 248 */
																			obj_t BgL_arg2440z00_1420;

																			{	/* Eval/expdargs.scm 248 */
																				obj_t BgL_arg2441z00_1421;

																				BgL_arg2441z00_1421 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2440z00_1420 =
																					MAKE_PAIR(BgL_arg2437z00_1417,
																					BgL_arg2441z00_1421);
																			}
																			BgL_list2439z00_1419 =
																				MAKE_PAIR(BgL_az00_1391,
																				BgL_arg2440z00_1420);
																		}
																		BgL_arg2435z00_1415 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2436z00_1416,
																			BgL_list2439z00_1419);
																	}
																}
																BgL_arg2425z00_1405 =
																	MAKE_PAIR(BgL_arg2434z00_1414,
																	BgL_arg2435z00_1415);
															}
															{	/* Eval/expdargs.scm 249 */
																obj_t BgL_arg2447z00_1427;

																obj_t BgL_arg2448z00_1428;

																BgL_arg2447z00_1427 =
																	BGl_symbol3411z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 249 */
																	obj_t BgL_arg2449z00_1429;

																	{	/* Eval/expdargs.scm 249 */
																		obj_t BgL_arg2454z00_1434;

																		obj_t BgL_arg2455z00_1435;

																		BgL_arg2454z00_1434 =
																			BGl_symbol3413z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 249 */
																			obj_t BgL_list2456z00_1436;

																			BgL_list2456z00_1436 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2455z00_1435 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol3469z00zz__expander_argsz00,
																				BgL_list2456z00_1436);
																		}
																		BgL_arg2449z00_1429 =
																			MAKE_PAIR(BgL_arg2454z00_1434,
																			BgL_arg2455z00_1435);
																	}
																	{	/* Eval/expdargs.scm 249 */
																		obj_t BgL_list2451z00_1431;

																		{	/* Eval/expdargs.scm 249 */
																			obj_t BgL_arg2452z00_1432;

																			{	/* Eval/expdargs.scm 249 */
																				obj_t BgL_arg2453z00_1433;

																				BgL_arg2453z00_1433 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2452z00_1432 =
																					MAKE_PAIR(BgL_vz00_1392,
																					BgL_arg2453z00_1433);
																			}
																			BgL_list2451z00_1431 =
																				MAKE_PAIR(BgL_az00_1391,
																				BgL_arg2452z00_1432);
																		}
																		BgL_arg2448z00_1428 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2449z00_1429,
																			BgL_list2451z00_1431);
																	}
																}
																BgL_arg2426z00_1406 =
																	MAKE_PAIR(BgL_arg2447z00_1427,
																	BgL_arg2448z00_1428);
															}
															{	/* Eval/expdargs.scm 247 */
																obj_t BgL_list2428z00_1408;

																{	/* Eval/expdargs.scm 247 */
																	obj_t BgL_arg2429z00_1409;

																	{	/* Eval/expdargs.scm 247 */
																		obj_t BgL_arg2430z00_1410;

																		BgL_arg2430z00_1410 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2429z00_1409 =
																			MAKE_PAIR(BgL_arg2426z00_1406,
																			BgL_arg2430z00_1410);
																	}
																	BgL_list2428z00_1408 =
																		MAKE_PAIR(BgL_arg2425z00_1405,
																		BgL_arg2429z00_1409);
																}
																BgL_arg2423z00_1403 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2424z00_1404, BgL_list2428z00_1408);
															}
														}
														BgL_arg2416z00_1396 =
															MAKE_PAIR(BgL_arg2422z00_1402,
															BgL_arg2423z00_1403);
													}
													{	/* Eval/expdargs.scm 246 */
														obj_t BgL_list2418z00_1398;

														{	/* Eval/expdargs.scm 246 */
															obj_t BgL_arg2419z00_1399;

															BgL_arg2419z00_1399 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2418z00_1398 =
																MAKE_PAIR(BgL_arg2416z00_1396,
																BgL_arg2419z00_1399);
														}
														BgL_arg2414z00_1394 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2415z00_1395, BgL_list2418z00_1398);
													}
												}
												return
													MAKE_PAIR(BgL_arg2413z00_1393, BgL_arg2414z00_1394);
											}
										}
									}
								else
									{	/* Eval/expdargs.scm 240 */
										if (
											(CAR(BgL_clausez00_11) ==
												BGl_symbol3449z00zz__expander_argsz00))
											{	/* Eval/expdargs.scm 240 */
												BgL_exprza2za2_1364 = BgL_cdrzd21537zd2_1370;
												{	/* Eval/expdargs.scm 251 */
													obj_t BgL_az00_1439;

													obj_t BgL_vz00_1440;

													{	/* Eval/expdargs.scm 251 */

														{	/* Eval/expdargs.scm 251 */

															BgL_az00_1439 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													{	/* Eval/expdargs.scm 252 */

														{	/* Eval/expdargs.scm 252 */

															BgL_vz00_1440 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													{	/* Eval/expdargs.scm 253 */
														obj_t BgL_arg2457z00_1441;

														obj_t BgL_arg2458z00_1442;

														BgL_arg2457z00_1441 =
															BGl_symbol3401z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 253 */
															obj_t BgL_arg2459z00_1443;

															obj_t BgL_arg2460z00_1444;

															{	/* Eval/expdargs.scm 253 */
																obj_t BgL_arg2467z00_1448;

																{	/* Eval/expdargs.scm 253 */
																	obj_t BgL_list2468z00_1449;

																	BgL_list2468z00_1449 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2467z00_1448 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_vz00_1440, BgL_list2468z00_1449);
																}
																BgL_arg2459z00_1443 =
																	MAKE_PAIR(BgL_az00_1439, BgL_arg2467z00_1448);
															}
															{	/* Eval/expdargs.scm 254 */
																obj_t BgL_arg2469z00_1450;

																obj_t BgL_arg2470z00_1451;

																BgL_arg2469z00_1450 =
																	BGl_symbol3407z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 254 */
																	obj_t BgL_arg2471z00_1452;

																	obj_t BgL_arg2472z00_1453;

																	obj_t BgL_arg2476z00_1454;

																	{	/* Eval/expdargs.scm 254 */
																		obj_t BgL_arg2481z00_1459;

																		obj_t BgL_arg2482z00_1460;

																		BgL_arg2481z00_1459 =
																			BGl_symbol3446z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 254 */
																			obj_t BgL_list2483z00_1461;

																			BgL_list2483z00_1461 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2482z00_1460 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_az00_1439, BgL_list2483z00_1461);
																		}
																		BgL_arg2471z00_1452 =
																			MAKE_PAIR(BgL_arg2481z00_1459,
																			BgL_arg2482z00_1460);
																	}
																	{	/* Eval/expdargs.scm 255 */
																		obj_t BgL_arg2484z00_1462;

																		obj_t BgL_arg2485z00_1463;

																		BgL_arg2484z00_1462 =
																			BGl_symbol3451z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 255 */
																			obj_t BgL_arg2486z00_1464;

																			obj_t BgL_arg2487z00_1465;

																			{	/* Eval/expdargs.scm 255 */
																				obj_t BgL_arg2492z00_1469;

																				obj_t BgL_arg2493z00_1470;

																				{	/* Eval/expdargs.scm 255 */
																					obj_t BgL_arg2494z00_1471;

																					obj_t BgL_arg2495z00_1472;

																					BgL_arg2494z00_1471 =
																						BGl_symbol3449z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 255 */
																						obj_t BgL_arg2497z00_1473;

																						{	/* Eval/expdargs.scm 255 */
																							obj_t BgL_arg2500z00_1476;

																							obj_t BgL_arg2501z00_1477;

																							BgL_arg2500z00_1476 =
																								BGl_symbol3419z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 255 */
																								obj_t BgL_list2502z00_1478;

																								BgL_list2502z00_1478 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2501z00_1477 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_az00_1439,
																									BgL_list2502z00_1478);
																							}
																							BgL_arg2497z00_1473 =
																								MAKE_PAIR(BgL_arg2500z00_1476,
																								BgL_arg2501z00_1477);
																						}
																						{	/* Eval/expdargs.scm 255 */
																							obj_t BgL_list2499z00_1475;

																							BgL_list2499z00_1475 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2495z00_1472 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2497z00_1473,
																								BgL_list2499z00_1475);
																						}
																					}
																					BgL_arg2492z00_1469 =
																						MAKE_PAIR(BgL_arg2494z00_1471,
																						BgL_arg2495z00_1472);
																				}
																				{	/* Eval/expdargs.scm 256 */
																					obj_t BgL_arg2503z00_1479;

																					{	/* Eval/expdargs.scm 256 */
																						obj_t BgL_arg2506z00_1482;

																						obj_t BgL_arg2507z00_1483;

																						BgL_arg2506z00_1482 =
																							BGl_symbol3487z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 256 */
																							obj_t BgL_list2508z00_1484;

																							BgL_list2508z00_1484 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2507z00_1483 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_az00_1439,
																								BgL_list2508z00_1484);
																						}
																						BgL_arg2503z00_1479 =
																							MAKE_PAIR(BgL_arg2506z00_1482,
																							BgL_arg2507z00_1483);
																					}
																					{	/* Eval/expdargs.scm 255 */
																						obj_t BgL_list2505z00_1481;

																						BgL_list2505z00_1481 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2493z00_1470 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2503z00_1479,
																							BgL_list2505z00_1481);
																					}
																				}
																				BgL_arg2486z00_1464 =
																					MAKE_PAIR(BgL_arg2492z00_1469,
																					BgL_arg2493z00_1470);
																			}
																			{	/* Eval/expdargs.scm 257 */
																				obj_t BgL_arg2509z00_1485;

																				obj_t BgL_arg2510z00_1486;

																				BgL_arg2509z00_1485 =
																					BGl_symbol3411z00zz__expander_argsz00;
																				{	/* Eval/expdargs.scm 257 */
																					obj_t BgL_arg2511z00_1487;

																					obj_t BgL_arg2512z00_1488;

																					obj_t BgL_arg2513z00_1489;

																					{	/* Eval/expdargs.scm 257 */
																						obj_t BgL_arg2518z00_1494;

																						obj_t BgL_arg2519z00_1495;

																						BgL_arg2518z00_1494 =
																							BGl_symbol3413z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 257 */
																							obj_t BgL_list2520z00_1496;

																							BgL_list2520z00_1496 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2519z00_1495 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol3467z00zz__expander_argsz00,
																								BgL_list2520z00_1496);
																						}
																						BgL_arg2511z00_1487 =
																							MAKE_PAIR(BgL_arg2518z00_1494,
																							BgL_arg2519z00_1495);
																					}
																					{	/* Eval/expdargs.scm 257 */
																						obj_t BgL_arg2521z00_1497;

																						obj_t BgL_arg2522z00_1498;

																						BgL_arg2521z00_1497 =
																							BGl_symbol3471z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 257 */
																							obj_t BgL_list2523z00_1499;

																							BgL_list2523z00_1499 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2522z00_1498 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_az00_1439,
																								BgL_list2523z00_1499);
																						}
																						BgL_arg2512z00_1488 =
																							MAKE_PAIR(BgL_arg2521z00_1497,
																							BgL_arg2522z00_1498);
																					}
																					BgL_arg2513z00_1489 =
																						MAKE_PAIR
																						(BGl_symbol3485z00zz__expander_argsz00,
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_exprza2za2_1364, BNIL));
																					{	/* Eval/expdargs.scm 257 */
																						obj_t BgL_list2515z00_1491;

																						{	/* Eval/expdargs.scm 257 */
																							obj_t BgL_arg2516z00_1492;

																							{	/* Eval/expdargs.scm 257 */
																								obj_t BgL_arg2517z00_1493;

																								BgL_arg2517z00_1493 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2516z00_1492 =
																									MAKE_PAIR(BgL_arg2513z00_1489,
																									BgL_arg2517z00_1493);
																							}
																							BgL_list2515z00_1491 =
																								MAKE_PAIR(BgL_arg2512z00_1488,
																								BgL_arg2516z00_1492);
																						}
																						BgL_arg2510z00_1486 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2511z00_1487,
																							BgL_list2515z00_1491);
																					}
																				}
																				BgL_arg2487z00_1465 =
																					MAKE_PAIR(BgL_arg2509z00_1485,
																					BgL_arg2510z00_1486);
																			}
																			{	/* Eval/expdargs.scm 255 */
																				obj_t BgL_list2489z00_1467;

																				{	/* Eval/expdargs.scm 255 */
																					obj_t BgL_arg2491z00_1468;

																					BgL_arg2491z00_1468 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2489z00_1467 =
																						MAKE_PAIR(BgL_arg2487z00_1465,
																						BgL_arg2491z00_1468);
																				}
																				BgL_arg2485z00_1463 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2486z00_1464,
																					BgL_list2489z00_1467);
																			}
																		}
																		BgL_arg2472z00_1453 =
																			MAKE_PAIR(BgL_arg2484z00_1462,
																			BgL_arg2485z00_1463);
																	}
																	{	/* Eval/expdargs.scm 258 */
																		obj_t BgL_arg2526z00_1502;

																		obj_t BgL_arg2527z00_1503;

																		BgL_arg2526z00_1502 =
																			BGl_symbol3411z00zz__expander_argsz00;
																		{	/* Eval/expdargs.scm 258 */
																			obj_t BgL_arg2528z00_1504;

																			{	/* Eval/expdargs.scm 258 */
																				obj_t BgL_arg2533z00_1509;

																				obj_t BgL_arg2534z00_1510;

																				BgL_arg2533z00_1509 =
																					BGl_symbol3413z00zz__expander_argsz00;
																				{	/* Eval/expdargs.scm 258 */
																					obj_t BgL_list2535z00_1511;

																					BgL_list2535z00_1511 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2534z00_1510 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol3469z00zz__expander_argsz00,
																						BgL_list2535z00_1511);
																				}
																				BgL_arg2528z00_1504 =
																					MAKE_PAIR(BgL_arg2533z00_1509,
																					BgL_arg2534z00_1510);
																			}
																			{	/* Eval/expdargs.scm 258 */
																				obj_t BgL_list2530z00_1506;

																				{	/* Eval/expdargs.scm 258 */
																					obj_t BgL_arg2531z00_1507;

																					{	/* Eval/expdargs.scm 258 */
																						obj_t BgL_arg2532z00_1508;

																						BgL_arg2532z00_1508 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2531z00_1507 =
																							MAKE_PAIR(BgL_vz00_1440,
																							BgL_arg2532z00_1508);
																					}
																					BgL_list2530z00_1506 =
																						MAKE_PAIR(BgL_az00_1439,
																						BgL_arg2531z00_1507);
																				}
																				BgL_arg2527z00_1503 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2528z00_1504,
																					BgL_list2530z00_1506);
																			}
																		}
																		BgL_arg2476z00_1454 =
																			MAKE_PAIR(BgL_arg2526z00_1502,
																			BgL_arg2527z00_1503);
																	}
																	{	/* Eval/expdargs.scm 254 */
																		obj_t BgL_list2478z00_1456;

																		{	/* Eval/expdargs.scm 254 */
																			obj_t BgL_arg2479z00_1457;

																			{	/* Eval/expdargs.scm 254 */
																				obj_t BgL_arg2480z00_1458;

																				BgL_arg2480z00_1458 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2479z00_1457 =
																					MAKE_PAIR(BgL_arg2476z00_1454,
																					BgL_arg2480z00_1458);
																			}
																			BgL_list2478z00_1456 =
																				MAKE_PAIR(BgL_arg2472z00_1453,
																				BgL_arg2479z00_1457);
																		}
																		BgL_arg2470z00_1451 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2471z00_1452,
																			BgL_list2478z00_1456);
																	}
																}
																BgL_arg2460z00_1444 =
																	MAKE_PAIR(BgL_arg2469z00_1450,
																	BgL_arg2470z00_1451);
															}
															{	/* Eval/expdargs.scm 253 */
																obj_t BgL_list2462z00_1446;

																{	/* Eval/expdargs.scm 253 */
																	obj_t BgL_arg2465z00_1447;

																	BgL_arg2465z00_1447 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2462z00_1446 =
																		MAKE_PAIR(BgL_arg2460z00_1444,
																		BgL_arg2465z00_1447);
																}
																BgL_arg2458z00_1442 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2459z00_1443, BgL_list2462z00_1446);
															}
														}
														return
															MAKE_PAIR(BgL_arg2457z00_1441,
															BgL_arg2458z00_1442);
													}
												}
											}
										else
											{	/* Eval/expdargs.scm 240 */
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_clausez00_11)))
													{	/* Eval/expdargs.scm 240 */
														return
															BGl_makezd2optzd2parserz00zz__expander_argsz00
															(BgL_clausez00_11, BgL_otablez00_12);
													}
												else
													{	/* Eval/expdargs.scm 240 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol3394z00zz__expander_argsz00,
															BGl_string3482z00zz__expander_argsz00,
															BgL_clausez00_11);
													}
											}
									}
							}
					}
				else
					{	/* Eval/expdargs.scm 240 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3394z00zz__expander_argsz00,
							BGl_string3482z00zz__expander_argsz00, BgL_clausez00_11);
					}
			}
		}
	}



/* bind-option! */
	obj_t BGl_bindzd2optionz12zc0zz__expander_argsz00(obj_t BgL_otablez00_13,
		obj_t BgL_oidz00_14, obj_t BgL_clausez00_15)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 267 */
			{	/* Eval/expdargs.scm 268 */
				obj_t BgL_oldz00_1514;

				BgL_oldz00_1514 =
					BGl_hashtablezd2getzd2zz__hashz00(BgL_otablez00_13, BgL_oidz00_14);
				if (CBOOL(BgL_oldz00_1514))
					{	/* Eval/expdargs.scm 270 */
						obj_t BgL_list2536z00_1515;

						{	/* Eval/expdargs.scm 270 */
							obj_t BgL_arg2537z00_1516;

							obj_t BgL_arg2539z00_1517;

							BgL_arg2537z00_1516 = BGl_symbol3394z00zz__expander_argsz00;
							{	/* Eval/expdargs.scm 270 */
								obj_t BgL_arg2540z00_1518;

								{	/* Eval/expdargs.scm 270 */
									obj_t BgL_arg2542z00_1520;

									{	/* Eval/expdargs.scm 270 */
										obj_t BgL_arg2543z00_1521;

										{	/* Eval/expdargs.scm 270 */
											obj_t BgL_arg2545z00_1523;

											{	/* Eval/expdargs.scm 270 */
												obj_t BgL_arg2546z00_1524;

												{	/* Eval/expdargs.scm 270 */
													obj_t BgL_arg2547z00_1525;

													{	/* Eval/expdargs.scm 270 */
														obj_t BgL_arg2549z00_1527;

														BgL_arg2549z00_1527 =
															MAKE_PAIR(BgL_clausez00_15, BNIL);
														BgL_arg2547z00_1525 =
															MAKE_PAIR(BGl_string3489z00zz__expander_argsz00,
															BgL_arg2549z00_1527);
													}
													BgL_arg2546z00_1524 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')),
														BgL_arg2547z00_1525);
												}
												BgL_arg2545z00_1523 =
													MAKE_PAIR(BgL_oldz00_1514, BgL_arg2546z00_1524);
											}
											BgL_arg2543z00_1521 =
												MAKE_PAIR(BGl_string3489z00zz__expander_argsz00,
												BgL_arg2545z00_1523);
										}
										BgL_arg2542z00_1520 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')),
											BgL_arg2543z00_1521);
									}
									BgL_arg2540z00_1518 =
										MAKE_PAIR(BGl_string3490z00zz__expander_argsz00,
										BgL_arg2542z00_1520);
								}
								BgL_arg2539z00_1517 =
									MAKE_PAIR(BgL_oidz00_14, BgL_arg2540z00_1518);
							}
							BgL_list2536z00_1515 =
								MAKE_PAIR(BgL_arg2537z00_1516, BgL_arg2539z00_1517);
						}
						return BGl_warningz00zz__errorz00(BgL_list2536z00_1515);
					}
				else
					{	/* Eval/expdargs.scm 269 */
						return
							BGl_hashtablezd2putz12zc0zz__hashz00(BgL_otablez00_13,
							BgL_oidz00_14, BgL_clausez00_15);
					}
			}
		}
	}



/* make-opt-parser */
	obj_t BGl_makezd2optzd2parserz00zz__expander_argsz00(obj_t BgL_clausez00_16,
		obj_t BgL_otablez00_17)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 278 */
			{	/* Eval/expdargs.scm 279 */
				obj_t BgL_optz00_1528;

				BgL_optz00_1528 = CAR(BgL_clausez00_16);
				{	/* Eval/expdargs.scm 279 */
					obj_t BgL_oz00_1529;

					BgL_oz00_1529 = CAR(BgL_optz00_1528);
					{	/* Eval/expdargs.scm 280 */

						if (STRINGP(BgL_oz00_1529))
							{	/* Eval/expdargs.scm 282 */
								return
									BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00
									(BgL_clausez00_16, BgL_otablez00_17);
							}
						else
							{	/* Eval/expdargs.scm 284 */
								bool_t BgL_testz00_4164;

								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_oz00_1529))
									{
										obj_t BgL_l1886z00_1534;

										BgL_l1886z00_1534 = BgL_oz00_1529;
									BgL_zc3anonymousza32553ze3z83_1535:
										if (NULLP(BgL_l1886z00_1534))
											{	/* Eval/expdargs.scm 284 */
												BgL_testz00_4164 = ((bool_t) 1);
											}
										else
											{	/* Eval/expdargs.scm 284 */
												bool_t BgL_testz00_4169;

												{	/* Eval/expdargs.scm 284 */
													obj_t BgL_auxz00_4170;

													BgL_auxz00_4170 = CAR(BgL_l1886z00_1534);
													BgL_testz00_4169 = STRINGP(BgL_auxz00_4170);
												}
												if (BgL_testz00_4169)
													{
														obj_t BgL_l1886z00_4173;

														BgL_l1886z00_4173 = CDR(BgL_l1886z00_1534);
														BgL_l1886z00_1534 = BgL_l1886z00_4173;
														goto BgL_zc3anonymousza32553ze3z83_1535;
													}
												else
													{	/* Eval/expdargs.scm 284 */
														BgL_testz00_4164 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 284 */
										BgL_testz00_4164 = ((bool_t) 0);
									}
								if (BgL_testz00_4164)
									{	/* Eval/expdargs.scm 284 */
										return
											BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00
											(BgL_clausez00_16, BgL_otablez00_17);
									}
								else
									{	/* Eval/expdargs.scm 284 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol3394z00zz__expander_argsz00,
											BGl_string3422z00zz__expander_argsz00, BgL_clausez00_16);
									}
							}
					}
				}
			}
		}
	}



/* make-simple-opt-parser */
	obj_t BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00(obj_t
		BgL_clausez00_18, obj_t BgL_otablez00_19)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 292 */
			{	/* Eval/expdargs.scm 293 */
				obj_t BgL_optz00_1541;

				BgL_optz00_1541 = CAR(BgL_clausez00_18);
				{	/* Eval/expdargs.scm 293 */
					obj_t BgL_oz00_1542;

					BgL_oz00_1542 = CAR(BgL_optz00_1541);
					{	/* Eval/expdargs.scm 294 */
						obj_t BgL_argsz00_1543;

						BgL_argsz00_1543 =
							BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
							(BgL_optz00_1541);
						{	/* Eval/expdargs.scm 295 */
							obj_t BgL_exprza2za2_1544;

							BgL_exprza2za2_1544 = CDR(BgL_clausez00_18);
							{	/* Eval/expdargs.scm 296 */

								{	/* Eval/expdargs.scm 297 */
									obj_t BgL_oidz00_1545;

									BgL_oidz00_1545 =
										BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
										(BgL_oz00_1542);
									{	/* Eval/expdargs.scm 300 */
										obj_t BgL_aidz00_1546;

										{	/* Eval/expdargs.scm 300 */
											int BgL_auxz00_4182;

											BgL_auxz00_4182 = (int) (((long) 1));
											BgL_aidz00_1546 = BGL_MVALUES_VAL(BgL_auxz00_4182);
										}
										{	/* Eval/expdargs.scm 300 */
											bool_t BgL_testz00_4185;

											if (CBOOL(BgL_aidz00_1546))
												{	/* Eval/expdargs.scm 300 */
													BgL_testz00_4185 = PAIRP(BgL_argsz00_1543);
												}
											else
												{	/* Eval/expdargs.scm 300 */
													BgL_testz00_4185 = ((bool_t) 0);
												}
											if (BgL_testz00_4185)
												{	/* Eval/expdargs.scm 300 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol3394z00zz__expander_argsz00,
														BGl_string3481z00zz__expander_argsz00,
														BgL_clausez00_18);
												}
											else
												{	/* Eval/expdargs.scm 300 */
													if (STRINGP(BgL_aidz00_1546))
														{	/* Eval/expdargs.scm 302 */
															BGl_bindzd2optionz12zc0zz__expander_argsz00
																(BgL_otablez00_19, BgL_oidz00_1545,
																BgL_clausez00_18);
															{	/* Eval/expdargs.scm 304 */
																obj_t BgL_az00_1549;

																obj_t BgL_vz00_1550;

																long BgL_oidlz00_1551;

																{	/* Eval/expdargs.scm 304 */

																	{	/* Eval/expdargs.scm 304 */

																		BgL_az00_1549 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																}}
																{	/* Eval/expdargs.scm 305 */

																	{	/* Eval/expdargs.scm 305 */

																		BgL_vz00_1550 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																}}
																BgL_oidlz00_1551 =
																	STRING_LENGTH(BgL_oidz00_1545);
																{	/* Eval/expdargs.scm 307 */
																	obj_t BgL_arg2560z00_1552;

																	obj_t BgL_arg2561z00_1553;

																	BgL_arg2560z00_1552 =
																		BGl_symbol3401z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 307 */
																		obj_t BgL_arg2562z00_1554;

																		obj_t BgL_arg2563z00_1555;

																		{	/* Eval/expdargs.scm 307 */
																			obj_t BgL_arg2568z00_1559;

																			{	/* Eval/expdargs.scm 307 */
																				obj_t BgL_list2569z00_1560;

																				BgL_list2569z00_1560 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2568z00_1559 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_vz00_1550, BgL_list2569z00_1560);
																			}
																			BgL_arg2562z00_1554 =
																				MAKE_PAIR(BgL_az00_1549,
																				BgL_arg2568z00_1559);
																		}
																		{	/* Eval/expdargs.scm 308 */
																			obj_t BgL_arg2571z00_1561;

																			obj_t BgL_arg2572z00_1562;

																			BgL_arg2571z00_1561 =
																				BGl_symbol3407z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 308 */
																				obj_t BgL_arg2573z00_1563;

																				obj_t BgL_arg2574z00_1564;

																				obj_t BgL_arg2575z00_1565;

																				{	/* Eval/expdargs.scm 308 */
																					obj_t BgL_arg2580z00_1570;

																					obj_t BgL_arg2581z00_1571;

																					BgL_arg2580z00_1570 =
																						BGl_symbol3491z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 308 */
																						obj_t BgL_arg2582z00_1572;

																						obj_t BgL_arg2583z00_1573;

																						{	/* Eval/expdargs.scm 308 */
																							obj_t BgL_arg2587z00_1577;

																							obj_t BgL_arg2589z00_1578;

																							BgL_arg2587z00_1577 =
																								BGl_symbol3446z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 308 */
																								obj_t BgL_list2590z00_1579;

																								BgL_list2590z00_1579 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2589z00_1578 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_az00_1549,
																									BgL_list2590z00_1579);
																							}
																							BgL_arg2582z00_1572 =
																								MAKE_PAIR(BgL_arg2587z00_1577,
																								BgL_arg2589z00_1578);
																						}
																						{	/* Eval/expdargs.scm 309 */
																							obj_t BgL_arg2591z00_1580;

																							obj_t BgL_arg2592z00_1581;

																							BgL_arg2591z00_1580 =
																								BGl_symbol3493z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 309 */
																								obj_t BgL_arg2593z00_1582;

																								{	/* Eval/expdargs.scm 309 */
																									obj_t BgL_arg2598z00_1587;

																									obj_t BgL_arg2599z00_1588;

																									BgL_arg2598z00_1587 =
																										BGl_symbol3419z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 309 */
																										obj_t BgL_list2600z00_1589;

																										BgL_list2600z00_1589 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2599z00_1588 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_az00_1549,
																											BgL_list2600z00_1589);
																									}
																									BgL_arg2593z00_1582 =
																										MAKE_PAIR
																										(BgL_arg2598z00_1587,
																										BgL_arg2599z00_1588);
																								}
																								{	/* Eval/expdargs.scm 309 */
																									obj_t BgL_list2595z00_1584;

																									{	/* Eval/expdargs.scm 309 */
																										obj_t BgL_arg2596z00_1585;

																										{	/* Eval/expdargs.scm 309 */
																											obj_t BgL_arg2597z00_1586;

																											BgL_arg2597z00_1586 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2596z00_1585 =
																												MAKE_PAIR(BINT
																												(BgL_oidlz00_1551),
																												BgL_arg2597z00_1586);
																										}
																										BgL_list2595z00_1584 =
																											MAKE_PAIR
																											(BgL_arg2593z00_1582,
																											BgL_arg2596z00_1585);
																									}
																									BgL_arg2592z00_1581 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_oidz00_1545,
																										BgL_list2595z00_1584);
																							}}
																							BgL_arg2583z00_1573 =
																								MAKE_PAIR(BgL_arg2591z00_1580,
																								BgL_arg2592z00_1581);
																						}
																						{	/* Eval/expdargs.scm 308 */
																							obj_t BgL_list2585z00_1575;

																							{	/* Eval/expdargs.scm 308 */
																								obj_t BgL_arg2586z00_1576;

																								BgL_arg2586z00_1576 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2585z00_1575 =
																									MAKE_PAIR(BgL_arg2583z00_1573,
																									BgL_arg2586z00_1576);
																							}
																							BgL_arg2581z00_1571 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2582z00_1572,
																								BgL_list2585z00_1575);
																					}}
																					BgL_arg2573z00_1563 =
																						MAKE_PAIR(BgL_arg2580z00_1570,
																						BgL_arg2581z00_1571);
																				}
																				{	/* Eval/expdargs.scm 310 */
																					obj_t BgL_arg2601z00_1590;

																					obj_t BgL_arg2602z00_1591;

																					BgL_arg2601z00_1590 =
																						BGl_symbol3424z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 310 */
																						obj_t BgL_arg2603z00_1592;

																						obj_t BgL_arg2604z00_1593;

																						{	/* Eval/expdargs.scm 310 */
																							obj_t BgL_arg2608z00_1597;

																							obj_t BgL_arg2609z00_1598;

																							{	/* Eval/expdargs.scm 310 */
																								obj_t BgL_arg2610z00_1599;

																								obj_t BgL_arg2611z00_1600;

																								{	/* Eval/expdargs.scm 310 */
																									obj_t BgL_stringz00_3016;

																									BgL_stringz00_3016 =
																										BgL_aidz00_1546;
																									BgL_arg2610z00_1599 =
																										string_to_symbol
																										(BSTRING_TO_STRING
																										(BgL_stringz00_3016));
																								}
																								{	/* Eval/expdargs.scm 311 */
																									obj_t BgL_arg2612z00_1601;

																									{	/* Eval/expdargs.scm 311 */
																										obj_t BgL_arg2615z00_1604;

																										obj_t BgL_arg2616z00_1605;

																										BgL_arg2615z00_1604 =
																											BGl_symbol3495z00zz__expander_argsz00;
																										{	/* Eval/expdargs.scm 311 */
																											obj_t BgL_arg2617z00_1606;

																											obj_t BgL_arg2618z00_1607;

																											{	/* Eval/expdargs.scm 311 */
																												obj_t
																													BgL_arg2623z00_1612;
																												obj_t
																													BgL_arg2624z00_1613;
																												BgL_arg2623z00_1612 =
																													BGl_symbol3419z00zz__expander_argsz00;
																												{	/* Eval/expdargs.scm 311 */
																													obj_t
																														BgL_list2625z00_1614;
																													BgL_list2625z00_1614 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2624z00_1613 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_az00_1549,
																														BgL_list2625z00_1614);
																												}
																												BgL_arg2617z00_1606 =
																													MAKE_PAIR
																													(BgL_arg2623z00_1612,
																													BgL_arg2624z00_1613);
																											}
																											{	/* Eval/expdargs.scm 313 */
																												obj_t
																													BgL_arg2626z00_1615;
																												obj_t
																													BgL_arg2627z00_1616;
																												BgL_arg2626z00_1615 =
																													BGl_symbol3497z00zz__expander_argsz00;
																												{	/* Eval/expdargs.scm 313 */
																													obj_t
																														BgL_arg2628z00_1617;
																													{	/* Eval/expdargs.scm 313 */
																														obj_t
																															BgL_arg2631z00_1620;
																														obj_t
																															BgL_arg2632z00_1621;
																														BgL_arg2631z00_1620
																															=
																															BGl_symbol3419z00zz__expander_argsz00;
																														{	/* Eval/expdargs.scm 313 */
																															obj_t
																																BgL_list2633z00_1622;
																															BgL_list2633z00_1622
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2632z00_1621
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_az00_1549,
																																BgL_list2633z00_1622);
																														}
																														BgL_arg2628z00_1617
																															=
																															MAKE_PAIR
																															(BgL_arg2631z00_1620,
																															BgL_arg2632z00_1621);
																													}
																													{	/* Eval/expdargs.scm 313 */
																														obj_t
																															BgL_list2630z00_1619;
																														BgL_list2630z00_1619
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2627z00_1616
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2628z00_1617,
																															BgL_list2630z00_1619);
																												}}
																												BgL_arg2618z00_1607 =
																													MAKE_PAIR
																													(BgL_arg2626z00_1615,
																													BgL_arg2627z00_1616);
																											}
																											{	/* Eval/expdargs.scm 311 */
																												obj_t
																													BgL_list2620z00_1609;
																												{	/* Eval/expdargs.scm 311 */
																													obj_t
																														BgL_arg2621z00_1610;
																													{	/* Eval/expdargs.scm 311 */
																														obj_t
																															BgL_arg2622z00_1611;
																														BgL_arg2622z00_1611
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2621z00_1610
																															=
																															MAKE_PAIR
																															(BgL_arg2618z00_1607,
																															BgL_arg2622z00_1611);
																													}
																													BgL_list2620z00_1609 =
																														MAKE_PAIR(BINT
																														(BgL_oidlz00_1551),
																														BgL_arg2621z00_1610);
																												}
																												BgL_arg2616z00_1605 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2617z00_1606,
																													BgL_list2620z00_1609);
																										}}
																										BgL_arg2612z00_1601 =
																											MAKE_PAIR
																											(BgL_arg2615z00_1604,
																											BgL_arg2616z00_1605);
																									}
																									{	/* Eval/expdargs.scm 310 */
																										obj_t BgL_list2614z00_1603;

																										BgL_list2614z00_1603 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2611z00_1600 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2612z00_1601,
																											BgL_list2614z00_1603);
																								}}
																								BgL_arg2608z00_1597 =
																									MAKE_PAIR(BgL_arg2610z00_1599,
																									BgL_arg2611z00_1600);
																							}
																							{	/* Eval/expdargs.scm 314 */
																								obj_t BgL_arg2634z00_1623;

																								obj_t BgL_arg2635z00_1624;

																								{	/* Eval/expdargs.scm 314 */
																									obj_t BgL_arg2639z00_1628;

																									obj_t BgL_arg2640z00_1629;

																									BgL_arg2639z00_1628 =
																										BGl_symbol3499z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 314 */
																										obj_t BgL_arg2641z00_1630;

																										{	/* Eval/expdargs.scm 314 */
																											obj_t BgL_arg2644z00_1633;

																											obj_t BgL_arg2645z00_1634;

																											BgL_arg2644z00_1633 =
																												BGl_symbol3471z00zz__expander_argsz00;
																											{	/* Eval/expdargs.scm 314 */
																												obj_t
																													BgL_list2646z00_1635;
																												BgL_list2646z00_1635 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2645z00_1634 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_az00_1549,
																													BgL_list2646z00_1635);
																											}
																											BgL_arg2641z00_1630 =
																												MAKE_PAIR
																												(BgL_arg2644z00_1633,
																												BgL_arg2645z00_1634);
																										}
																										{	/* Eval/expdargs.scm 314 */
																											obj_t
																												BgL_list2643z00_1632;
																											BgL_list2643z00_1632 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2640z00_1629 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2641z00_1630,
																												BgL_list2643z00_1632);
																									}}
																									BgL_arg2634z00_1623 =
																										MAKE_PAIR
																										(BgL_arg2639z00_1628,
																										BgL_arg2640z00_1629);
																								}
																								{	/* Eval/expdargs.scm 315 */
																									obj_t BgL_arg2647z00_1636;

																									obj_t BgL_arg2648z00_1637;

																									BgL_arg2647z00_1636 =
																										BGl_symbol3461z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 315 */
																										obj_t BgL_arg2649z00_1638;

																										BgL_arg2649z00_1638 =
																											MAKE_PAIR
																											(BGl_symbol3485z00zz__expander_argsz00,
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_exprza2za2_1544,
																												BNIL));
																										{	/* Eval/expdargs.scm 315 */
																											obj_t
																												BgL_list2651z00_1640;
																											BgL_list2651z00_1640 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2648z00_1637 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2649z00_1638,
																												BgL_list2651z00_1640);
																									}}
																									BgL_arg2635z00_1624 =
																										MAKE_PAIR
																										(BgL_arg2647z00_1636,
																										BgL_arg2648z00_1637);
																								}
																								{	/* Eval/expdargs.scm 310 */
																									obj_t BgL_list2637z00_1626;

																									{	/* Eval/expdargs.scm 310 */
																										obj_t BgL_arg2638z00_1627;

																										BgL_arg2638z00_1627 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2637z00_1626 =
																											MAKE_PAIR
																											(BgL_arg2635z00_1624,
																											BgL_arg2638z00_1627);
																									}
																									BgL_arg2609z00_1598 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2634z00_1623,
																										BgL_list2637z00_1626);
																							}}
																							BgL_arg2603z00_1592 =
																								MAKE_PAIR(BgL_arg2608z00_1597,
																								BgL_arg2609z00_1598);
																						}
																						{	/* Eval/expdargs.scm 316 */
																							obj_t BgL_arg2656z00_1643;

																							obj_t BgL_arg2657z00_1644;

																							BgL_arg2656z00_1643 =
																								BGl_symbol3411z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 316 */
																								obj_t BgL_arg2658z00_1645;

																								obj_t BgL_arg2659z00_1646;

																								obj_t BgL_arg2660z00_1647;

																								{	/* Eval/expdargs.scm 316 */
																									obj_t BgL_arg2665z00_1652;

																									obj_t BgL_arg2666z00_1653;

																									BgL_arg2665z00_1652 =
																										BGl_symbol3413z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 316 */
																										obj_t BgL_list2667z00_1654;

																										BgL_list2667z00_1654 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2666z00_1653 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol3467z00zz__expander_argsz00,
																											BgL_list2667z00_1654);
																									}
																									BgL_arg2658z00_1645 =
																										MAKE_PAIR
																										(BgL_arg2665z00_1652,
																										BgL_arg2666z00_1653);
																								}
																								BgL_arg2659z00_1646 =
																									BGl_symbol3499z00zz__expander_argsz00;
																								BgL_arg2660z00_1647 =
																									BGl_symbol3461z00zz__expander_argsz00;
																								{	/* Eval/expdargs.scm 316 */
																									obj_t BgL_list2662z00_1649;

																									{	/* Eval/expdargs.scm 316 */
																										obj_t BgL_arg2663z00_1650;

																										{	/* Eval/expdargs.scm 316 */
																											obj_t BgL_arg2664z00_1651;

																											BgL_arg2664z00_1651 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2663z00_1650 =
																												MAKE_PAIR
																												(BgL_arg2660z00_1647,
																												BgL_arg2664z00_1651);
																										}
																										BgL_list2662z00_1649 =
																											MAKE_PAIR
																											(BgL_arg2659z00_1646,
																											BgL_arg2663z00_1650);
																									}
																									BgL_arg2657z00_1644 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2658z00_1645,
																										BgL_list2662z00_1649);
																							}}
																							BgL_arg2604z00_1593 =
																								MAKE_PAIR(BgL_arg2656z00_1643,
																								BgL_arg2657z00_1644);
																						}
																						{	/* Eval/expdargs.scm 310 */
																							obj_t BgL_list2606z00_1595;

																							{	/* Eval/expdargs.scm 310 */
																								obj_t BgL_arg2607z00_1596;

																								BgL_arg2607z00_1596 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2606z00_1595 =
																									MAKE_PAIR(BgL_arg2604z00_1593,
																									BgL_arg2607z00_1596);
																							}
																							BgL_arg2602z00_1591 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2603z00_1592,
																								BgL_list2606z00_1595);
																					}}
																					BgL_arg2574z00_1564 =
																						MAKE_PAIR(BgL_arg2601z00_1590,
																						BgL_arg2602z00_1591);
																				}
																				{	/* Eval/expdargs.scm 317 */
																					obj_t BgL_arg2668z00_1655;

																					obj_t BgL_arg2669z00_1656;

																					BgL_arg2668z00_1655 =
																						BGl_symbol3411z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 317 */
																						obj_t BgL_arg2670z00_1657;

																						{	/* Eval/expdargs.scm 317 */
																							obj_t BgL_arg2675z00_1662;

																							obj_t BgL_arg2676z00_1663;

																							BgL_arg2675z00_1662 =
																								BGl_symbol3413z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 317 */
																								obj_t BgL_list2677z00_1664;

																								BgL_list2677z00_1664 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2676z00_1663 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol3469z00zz__expander_argsz00,
																									BgL_list2677z00_1664);
																							}
																							BgL_arg2670z00_1657 =
																								MAKE_PAIR(BgL_arg2675z00_1662,
																								BgL_arg2676z00_1663);
																						}
																						{	/* Eval/expdargs.scm 317 */
																							obj_t BgL_list2672z00_1659;

																							{	/* Eval/expdargs.scm 317 */
																								obj_t BgL_arg2673z00_1660;

																								{	/* Eval/expdargs.scm 317 */
																									obj_t BgL_arg2674z00_1661;

																									BgL_arg2674z00_1661 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2673z00_1660 =
																										MAKE_PAIR(BgL_vz00_1550,
																										BgL_arg2674z00_1661);
																								}
																								BgL_list2672z00_1659 =
																									MAKE_PAIR(BgL_az00_1549,
																									BgL_arg2673z00_1660);
																							}
																							BgL_arg2669z00_1656 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2670z00_1657,
																								BgL_list2672z00_1659);
																					}}
																					BgL_arg2575z00_1565 =
																						MAKE_PAIR(BgL_arg2668z00_1655,
																						BgL_arg2669z00_1656);
																				}
																				{	/* Eval/expdargs.scm 308 */
																					obj_t BgL_list2577z00_1567;

																					{	/* Eval/expdargs.scm 308 */
																						obj_t BgL_arg2578z00_1568;

																						{	/* Eval/expdargs.scm 308 */
																							obj_t BgL_arg2579z00_1569;

																							BgL_arg2579z00_1569 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2578z00_1568 =
																								MAKE_PAIR(BgL_arg2575z00_1565,
																								BgL_arg2579z00_1569);
																						}
																						BgL_list2577z00_1567 =
																							MAKE_PAIR(BgL_arg2574z00_1564,
																							BgL_arg2578z00_1568);
																					}
																					BgL_arg2572z00_1562 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2573z00_1563,
																						BgL_list2577z00_1567);
																			}}
																			BgL_arg2563z00_1555 =
																				MAKE_PAIR(BgL_arg2571z00_1561,
																				BgL_arg2572z00_1562);
																		}
																		{	/* Eval/expdargs.scm 307 */
																			obj_t BgL_list2565z00_1557;

																			{	/* Eval/expdargs.scm 307 */
																				obj_t BgL_arg2566z00_1558;

																				BgL_arg2566z00_1558 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2565z00_1557 =
																					MAKE_PAIR(BgL_arg2563z00_1555,
																					BgL_arg2566z00_1558);
																			}
																			BgL_arg2561z00_1553 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2562z00_1554,
																				BgL_list2565z00_1557);
																	}}
																	return
																		MAKE_PAIR(BgL_arg2560z00_1552,
																		BgL_arg2561z00_1553);
																}
															}
														}
													else
														{	/* Eval/expdargs.scm 302 */
															BGl_bindzd2optionz12zc0zz__expander_argsz00
																(BgL_otablez00_19, BgL_oidz00_1545,
																BgL_clausez00_18);
															{	/* Eval/expdargs.scm 320 */
																obj_t BgL_az00_1667;

																obj_t BgL_vz00_1668;

																obj_t BgL_naz00_1669;

																{	/* Eval/expdargs.scm 320 */

																	{	/* Eval/expdargs.scm 320 */

																		BgL_az00_1667 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																{	/* Eval/expdargs.scm 321 */

																	{	/* Eval/expdargs.scm 321 */

																		BgL_vz00_1668 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_naz00_1669 =
																	BGl_symbol3499z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 323 */
																	obj_t BgL_arg2678z00_1670;

																	obj_t BgL_arg2679z00_1671;

																	BgL_arg2678z00_1670 =
																		BGl_symbol3401z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 323 */
																		obj_t BgL_arg2680z00_1672;

																		obj_t BgL_arg2681z00_1673;

																		{	/* Eval/expdargs.scm 323 */
																			obj_t BgL_arg2685z00_1677;

																			{	/* Eval/expdargs.scm 323 */
																				obj_t BgL_list2686z00_1678;

																				BgL_list2686z00_1678 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2685z00_1677 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_vz00_1668, BgL_list2686z00_1678);
																			}
																			BgL_arg2680z00_1672 =
																				MAKE_PAIR(BgL_az00_1667,
																				BgL_arg2685z00_1677);
																		}
																		{	/* Eval/expdargs.scm 324 */
																			obj_t BgL_arg2687z00_1679;

																			obj_t BgL_arg2688z00_1680;

																			BgL_arg2687z00_1679 =
																				BGl_symbol3407z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 324 */
																				obj_t BgL_arg2689z00_1681;

																				obj_t BgL_arg2690z00_1682;

																				obj_t BgL_arg2691z00_1683;

																				{	/* Eval/expdargs.scm 324 */
																					obj_t BgL_arg2696z00_1688;

																					obj_t BgL_arg2697z00_1689;

																					BgL_arg2696z00_1688 =
																						BGl_symbol3491z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 324 */
																						obj_t BgL_arg2698z00_1690;

																						obj_t BgL_arg2699z00_1691;

																						{	/* Eval/expdargs.scm 324 */
																							obj_t BgL_arg2703z00_1695;

																							obj_t BgL_arg2704z00_1696;

																							BgL_arg2703z00_1695 =
																								BGl_symbol3446z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 324 */
																								obj_t BgL_list2705z00_1697;

																								BgL_list2705z00_1697 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2704z00_1696 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_az00_1667,
																									BgL_list2705z00_1697);
																							}
																							BgL_arg2698z00_1690 =
																								MAKE_PAIR(BgL_arg2703z00_1695,
																								BgL_arg2704z00_1696);
																						}
																						{	/* Eval/expdargs.scm 324 */
																							obj_t BgL_arg2706z00_1698;

																							obj_t BgL_arg2707z00_1699;

																							BgL_arg2706z00_1698 =
																								BGl_symbol3501z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 324 */
																								obj_t BgL_arg2708z00_1700;

																								{	/* Eval/expdargs.scm 324 */
																									obj_t BgL_arg2712z00_1704;

																									obj_t BgL_arg2713z00_1705;

																									BgL_arg2712z00_1704 =
																										BGl_symbol3419z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 324 */
																										obj_t BgL_list2714z00_1706;

																										BgL_list2714z00_1706 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2713z00_1705 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_az00_1667,
																											BgL_list2714z00_1706);
																									}
																									BgL_arg2708z00_1700 =
																										MAKE_PAIR
																										(BgL_arg2712z00_1704,
																										BgL_arg2713z00_1705);
																								}
																								{	/* Eval/expdargs.scm 324 */
																									obj_t BgL_list2710z00_1702;

																									{	/* Eval/expdargs.scm 324 */
																										obj_t BgL_arg2711z00_1703;

																										BgL_arg2711z00_1703 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2710z00_1702 =
																											MAKE_PAIR
																											(BgL_arg2708z00_1700,
																											BgL_arg2711z00_1703);
																									}
																									BgL_arg2707z00_1699 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_oidz00_1545,
																										BgL_list2710z00_1702);
																								}
																							}
																							BgL_arg2699z00_1691 =
																								MAKE_PAIR(BgL_arg2706z00_1698,
																								BgL_arg2707z00_1699);
																						}
																						{	/* Eval/expdargs.scm 324 */
																							obj_t BgL_list2701z00_1693;

																							{	/* Eval/expdargs.scm 324 */
																								obj_t BgL_arg2702z00_1694;

																								BgL_arg2702z00_1694 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2701z00_1693 =
																									MAKE_PAIR(BgL_arg2699z00_1691,
																									BgL_arg2702z00_1694);
																							}
																							BgL_arg2697z00_1689 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2698z00_1690,
																								BgL_list2701z00_1693);
																						}
																					}
																					BgL_arg2689z00_1681 =
																						MAKE_PAIR(BgL_arg2696z00_1688,
																						BgL_arg2697z00_1689);
																				}
																				{	/* Eval/expdargs.scm 325 */
																					obj_t BgL_arg2716z00_1707;

																					obj_t BgL_arg2717z00_1708;

																					BgL_arg2716z00_1707 =
																						BGl_symbol3424z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 325 */
																						obj_t BgL_arg2718z00_1709;

																						obj_t BgL_arg2719z00_1710;

																						{	/* Eval/expdargs.scm 325 */
																							obj_t BgL_arg2724z00_1714;

																							obj_t BgL_arg2725z00_1715;

																							BgL_arg2724z00_1714 =
																								BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																								(BgL_argsz00_1543,
																								BgL_az00_1667, BgL_naz00_1669,
																								BgL_clausez00_18);
																							{	/* Eval/expdargs.scm 326 */
																								obj_t BgL_arg2726z00_1716;

																								{	/* Eval/expdargs.scm 326 */
																									obj_t BgL_arg2728z00_1718;

																									obj_t BgL_arg2729z00_1719;

																									BgL_arg2728z00_1718 =
																										BGl_symbol3461z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 326 */
																										obj_t BgL_arg2730z00_1720;

																										BgL_arg2730z00_1720 =
																											MAKE_PAIR
																											(BGl_symbol3485z00zz__expander_argsz00,
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_exprza2za2_1544,
																												BNIL));
																										{	/* Eval/expdargs.scm 326 */
																											obj_t
																												BgL_list2732z00_1722;
																											BgL_list2732z00_1722 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2729z00_1719 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2730z00_1720,
																												BgL_list2732z00_1722);
																										}
																									}
																									BgL_arg2726z00_1716 =
																										MAKE_PAIR
																										(BgL_arg2728z00_1718,
																										BgL_arg2729z00_1719);
																								}
																								BgL_arg2725z00_1715 =
																									MAKE_PAIR(BgL_arg2726z00_1716,
																									BNIL);
																							}
																							BgL_arg2718z00_1709 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2724z00_1714,
																								BgL_arg2725z00_1715);
																						}
																						{	/* Eval/expdargs.scm 327 */
																							obj_t BgL_arg2735z00_1725;

																							obj_t BgL_arg2736z00_1726;

																							BgL_arg2735z00_1725 =
																								BGl_symbol3411z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 327 */
																								obj_t BgL_arg2737z00_1727;

																								obj_t BgL_arg2738z00_1728;

																								{	/* Eval/expdargs.scm 327 */
																									obj_t BgL_arg2743z00_1733;

																									obj_t BgL_arg2745z00_1734;

																									BgL_arg2743z00_1733 =
																										BGl_symbol3413z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 327 */
																										obj_t BgL_list2746z00_1735;

																										BgL_list2746z00_1735 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2745z00_1734 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol3467z00zz__expander_argsz00,
																											BgL_list2746z00_1735);
																									}
																									BgL_arg2737z00_1727 =
																										MAKE_PAIR
																										(BgL_arg2743z00_1733,
																										BgL_arg2745z00_1734);
																								}
																								BgL_arg2738z00_1728 =
																									BGl_symbol3461z00zz__expander_argsz00;
																								{	/* Eval/expdargs.scm 327 */
																									obj_t BgL_list2740z00_1730;

																									{	/* Eval/expdargs.scm 327 */
																										obj_t BgL_arg2741z00_1731;

																										{	/* Eval/expdargs.scm 327 */
																											obj_t BgL_arg2742z00_1732;

																											BgL_arg2742z00_1732 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2741z00_1731 =
																												MAKE_PAIR
																												(BgL_arg2738z00_1728,
																												BgL_arg2742z00_1732);
																										}
																										BgL_list2740z00_1730 =
																											MAKE_PAIR(BgL_naz00_1669,
																											BgL_arg2741z00_1731);
																									}
																									BgL_arg2736z00_1726 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2737z00_1727,
																										BgL_list2740z00_1730);
																								}
																							}
																							BgL_arg2719z00_1710 =
																								MAKE_PAIR(BgL_arg2735z00_1725,
																								BgL_arg2736z00_1726);
																						}
																						{	/* Eval/expdargs.scm 325 */
																							obj_t BgL_list2721z00_1712;

																							{	/* Eval/expdargs.scm 325 */
																								obj_t BgL_arg2722z00_1713;

																								BgL_arg2722z00_1713 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2721z00_1712 =
																									MAKE_PAIR(BgL_arg2719z00_1710,
																									BgL_arg2722z00_1713);
																							}
																							BgL_arg2717z00_1708 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2718z00_1709,
																								BgL_list2721z00_1712);
																						}
																					}
																					BgL_arg2690z00_1682 =
																						MAKE_PAIR(BgL_arg2716z00_1707,
																						BgL_arg2717z00_1708);
																				}
																				{	/* Eval/expdargs.scm 328 */
																					obj_t BgL_arg2747z00_1736;

																					obj_t BgL_arg2748z00_1737;

																					BgL_arg2747z00_1736 =
																						BGl_symbol3411z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 328 */
																						obj_t BgL_arg2749z00_1738;

																						{	/* Eval/expdargs.scm 328 */
																							obj_t BgL_arg2754z00_1743;

																							obj_t BgL_arg2755z00_1744;

																							BgL_arg2754z00_1743 =
																								BGl_symbol3413z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 328 */
																								obj_t BgL_list2756z00_1745;

																								BgL_list2756z00_1745 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2755z00_1744 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol3469z00zz__expander_argsz00,
																									BgL_list2756z00_1745);
																							}
																							BgL_arg2749z00_1738 =
																								MAKE_PAIR(BgL_arg2754z00_1743,
																								BgL_arg2755z00_1744);
																						}
																						{	/* Eval/expdargs.scm 328 */
																							obj_t BgL_list2751z00_1740;

																							{	/* Eval/expdargs.scm 328 */
																								obj_t BgL_arg2752z00_1741;

																								{	/* Eval/expdargs.scm 328 */
																									obj_t BgL_arg2753z00_1742;

																									BgL_arg2753z00_1742 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2752z00_1741 =
																										MAKE_PAIR(BgL_vz00_1668,
																										BgL_arg2753z00_1742);
																								}
																								BgL_list2751z00_1740 =
																									MAKE_PAIR(BgL_az00_1667,
																									BgL_arg2752z00_1741);
																							}
																							BgL_arg2748z00_1737 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2749z00_1738,
																								BgL_list2751z00_1740);
																						}
																					}
																					BgL_arg2691z00_1683 =
																						MAKE_PAIR(BgL_arg2747z00_1736,
																						BgL_arg2748z00_1737);
																				}
																				{	/* Eval/expdargs.scm 324 */
																					obj_t BgL_list2693z00_1685;

																					{	/* Eval/expdargs.scm 324 */
																						obj_t BgL_arg2694z00_1686;

																						{	/* Eval/expdargs.scm 324 */
																							obj_t BgL_arg2695z00_1687;

																							BgL_arg2695z00_1687 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2694z00_1686 =
																								MAKE_PAIR(BgL_arg2691z00_1683,
																								BgL_arg2695z00_1687);
																						}
																						BgL_list2693z00_1685 =
																							MAKE_PAIR(BgL_arg2690z00_1682,
																							BgL_arg2694z00_1686);
																					}
																					BgL_arg2688z00_1680 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2689z00_1681,
																						BgL_list2693z00_1685);
																				}
																			}
																			BgL_arg2681z00_1673 =
																				MAKE_PAIR(BgL_arg2687z00_1679,
																				BgL_arg2688z00_1680);
																		}
																		{	/* Eval/expdargs.scm 323 */
																			obj_t BgL_list2683z00_1675;

																			{	/* Eval/expdargs.scm 323 */
																				obj_t BgL_arg2684z00_1676;

																				BgL_arg2684z00_1676 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2683z00_1675 =
																					MAKE_PAIR(BgL_arg2681z00_1673,
																					BgL_arg2684z00_1676);
																			}
																			BgL_arg2679z00_1671 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2680z00_1672,
																				BgL_list2683z00_1675);
																		}
																	}
																	return
																		MAKE_PAIR(BgL_arg2678z00_1670,
																		BgL_arg2679z00_1671);
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



/* make-multiple-opt-parser */
	obj_t BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00(obj_t
		BgL_clausez00_20, obj_t BgL_otablez00_21)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 333 */
			{	/* Eval/expdargs.scm 334 */
				obj_t BgL_optz00_1748;

				BgL_optz00_1748 = CAR(BgL_clausez00_20);
				{	/* Eval/expdargs.scm 334 */
					obj_t BgL_ozb2zb2_1749;

					BgL_ozb2zb2_1749 = CAR(BgL_optz00_1748);
					{	/* Eval/expdargs.scm 335 */
						obj_t BgL_argsz00_1750;

						BgL_argsz00_1750 =
							BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
							(BgL_optz00_1748);
						{	/* Eval/expdargs.scm 336 */
							obj_t BgL_exprza2za2_1751;

							BgL_exprza2za2_1751 = CDR(BgL_clausez00_20);
							{	/* Eval/expdargs.scm 337 */

								{	/* Eval/expdargs.scm 338 */
									obj_t BgL_oidzb2zb2_1752;

									{
										obj_t BgL_ozb2zb2_2050;

										obj_t BgL_oidzb2zb2_2051;

										obj_t BgL_aidzb2zb2_2052;

										BgL_ozb2zb2_2050 = BgL_ozb2zb2_1749;
										BgL_oidzb2zb2_2051 = BNIL;
										BgL_aidzb2zb2_2052 = BNIL;
									BgL_zc3anonymousza33022ze3z83_2053:
										if (NULLP(BgL_ozb2zb2_2050))
											{	/* Eval/expdargs.scm 343 */
												obj_t BgL_val0_1888z00_2055;

												obj_t BgL_val1_1889z00_2056;

												BgL_val0_1888z00_2055 =
													bgl_reverse_bang(BgL_oidzb2zb2_2051);
												BgL_val1_1889z00_2056 =
													bgl_reverse_bang(BgL_aidzb2zb2_2052);
												{	/* Eval/expdargs.scm 343 */
													int BgL_auxz00_4344;

													BgL_auxz00_4344 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_4344);
												}
												{	/* Eval/expdargs.scm 343 */
													int BgL_auxz00_4347;

													BgL_auxz00_4347 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_4347,
														BgL_val1_1889z00_2056);
												}
												BgL_oidzb2zb2_1752 = BgL_val0_1888z00_2055;
											}
										else
											{	/* Eval/expdargs.scm 344 */
												obj_t BgL_oidz00_2057;

												BgL_oidz00_2057 =
													BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
													(CAR(BgL_ozb2zb2_2050));
												{	/* Eval/expdargs.scm 346 */
													obj_t BgL_aidz00_2058;

													{	/* Eval/expdargs.scm 346 */
														int BgL_auxz00_4352;

														BgL_auxz00_4352 = (int) (((long) 1));
														BgL_aidz00_2058 = BGL_MVALUES_VAL(BgL_auxz00_4352);
													}
													{	/* Eval/expdargs.scm 346 */
														obj_t BgL_arg3024z00_2059;

														obj_t BgL_arg3025z00_2060;

														obj_t BgL_arg3026z00_2061;

														BgL_arg3024z00_2059 = CDR(BgL_ozb2zb2_2050);
														BgL_arg3025z00_2060 =
															MAKE_PAIR(BgL_oidz00_2057, BgL_oidzb2zb2_2051);
														BgL_arg3026z00_2061 =
															MAKE_PAIR(BgL_aidz00_2058, BgL_aidzb2zb2_2052);
														{
															obj_t BgL_aidzb2zb2_4360;

															obj_t BgL_oidzb2zb2_4359;

															obj_t BgL_ozb2zb2_4358;

															BgL_ozb2zb2_4358 = BgL_arg3024z00_2059;
															BgL_oidzb2zb2_4359 = BgL_arg3025z00_2060;
															BgL_aidzb2zb2_4360 = BgL_arg3026z00_2061;
															BgL_aidzb2zb2_2052 = BgL_aidzb2zb2_4360;
															BgL_oidzb2zb2_2051 = BgL_oidzb2zb2_4359;
															BgL_ozb2zb2_2050 = BgL_ozb2zb2_4358;
															goto BgL_zc3anonymousza33022ze3z83_2053;
														}
													}
												}
											}
									}
									{	/* Eval/expdargs.scm 348 */
										obj_t BgL_aidzb2zb2_1753;

										{	/* Eval/expdargs.scm 348 */
											int BgL_auxz00_4361;

											BgL_auxz00_4361 = (int) (((long) 1));
											BgL_aidzb2zb2_1753 = BGL_MVALUES_VAL(BgL_auxz00_4361);
										}
										{	/* Eval/expdargs.scm 348 */
											bool_t BgL_testz00_4364;

											if (PAIRP(BgL_aidzb2zb2_1753))
												{
													obj_t BgL_l1890z00_3030;

													BgL_l1890z00_3030 = BgL_aidzb2zb2_1753;
												BgL_zc3anonymousza33018ze3z83_3029:
													if (NULLP(BgL_l1890z00_3030))
														{	/* Eval/expdargs.scm 348 */
															BgL_testz00_4364 = ((bool_t) 0);
														}
													else
														{	/* Eval/expdargs.scm 348 */
															bool_t BgL_testz00_4369;

															{	/* Eval/expdargs.scm 348 */
																obj_t BgL_pairz00_3040;

																BgL_pairz00_3040 = BgL_l1890z00_3030;
																BgL_testz00_4369 = CBOOL(CAR(BgL_pairz00_3040));
															}
															if (BgL_testz00_4369)
																{	/* Eval/expdargs.scm 348 */
																	BgL_testz00_4364 = ((bool_t) 1);
																}
															else
																{
																	obj_t BgL_l1890z00_4372;

																	BgL_l1890z00_4372 = CDR(BgL_l1890z00_3030);
																	BgL_l1890z00_3030 = BgL_l1890z00_4372;
																	goto BgL_zc3anonymousza33018ze3z83_3029;
																}
														}
												}
											else
												{	/* Eval/expdargs.scm 348 */
													BgL_testz00_4364 = ((bool_t) 0);
												}
											if (BgL_testz00_4364)
												{	/* Eval/expdargs.scm 348 */
													if (NULLP(BgL_argsz00_1750))
														{	/* Eval/expdargs.scm 362 */
															{
																obj_t BgL_l1899z00_3059;

																BgL_l1899z00_3059 = BgL_oidzb2zb2_1752;
															BgL_zc3anonymousza32759ze3z83_3058:
																if (PAIRP(BgL_l1899z00_3059))
																	{	/* Eval/expdargs.scm 363 */
																		BGl_bindzd2optionz12zc0zz__expander_argsz00
																			(BgL_otablez00_21, CAR(BgL_l1899z00_3059),
																			BgL_clausez00_20);
																		{
																			obj_t BgL_l1899z00_4380;

																			BgL_l1899z00_4380 =
																				CDR(BgL_l1899z00_3059);
																			BgL_l1899z00_3059 = BgL_l1899z00_4380;
																			goto BgL_zc3anonymousza32759ze3z83_3058;
																		}
																	}
																else
																	{	/* Eval/expdargs.scm 363 */
																		((bool_t) 1);
																	}
															}
															{	/* Eval/expdargs.scm 364 */
																obj_t BgL_az00_1763;

																obj_t BgL_vz00_1764;

																obj_t BgL_naz00_1765;

																{	/* Eval/expdargs.scm 364 */

																	{	/* Eval/expdargs.scm 364 */

																		BgL_az00_1763 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																{	/* Eval/expdargs.scm 365 */

																	{	/* Eval/expdargs.scm 365 */

																		BgL_vz00_1764 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_naz00_1765 =
																	BGl_symbol3499z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 367 */
																	obj_t BgL_arg2762z00_1766;

																	obj_t BgL_arg2763z00_1767;

																	BgL_arg2762z00_1766 =
																		BGl_symbol3401z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 367 */
																		obj_t BgL_arg2764z00_1768;

																		obj_t BgL_arg2765z00_1769;

																		{	/* Eval/expdargs.scm 367 */
																			obj_t BgL_arg2769z00_1773;

																			{	/* Eval/expdargs.scm 367 */
																				obj_t BgL_list2770z00_1774;

																				BgL_list2770z00_1774 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2769z00_1773 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_vz00_1764, BgL_list2770z00_1774);
																			}
																			BgL_arg2764z00_1768 =
																				MAKE_PAIR(BgL_az00_1763,
																				BgL_arg2769z00_1773);
																		}
																		{	/* Eval/expdargs.scm 368 */
																			obj_t BgL_arg2771z00_1775;

																			obj_t BgL_arg2773z00_1776;

																			BgL_arg2771z00_1775 =
																				BGl_symbol3442z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 369 */
																				obj_t BgL_arg2774z00_1777;

																				obj_t BgL_arg2775z00_1778;

																				{	/* Eval/expdargs.scm 369 */
																					obj_t BgL_arg2779z00_1782;

																					obj_t BgL_arg2780z00_1783;

																					{	/* Eval/expdargs.scm 369 */
																						obj_t BgL_arg2782z00_1784;

																						obj_t BgL_arg2783z00_1785;

																						BgL_arg2782z00_1784 =
																							BGl_symbol3446z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 369 */
																							obj_t BgL_list2784z00_1786;

																							BgL_list2784z00_1786 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2783z00_1785 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_az00_1763,
																								BgL_list2784z00_1786);
																						}
																						BgL_arg2779z00_1782 =
																							MAKE_PAIR(BgL_arg2782z00_1784,
																							BgL_arg2783z00_1785);
																					}
																					{	/* Eval/expdargs.scm 370 */
																						obj_t BgL_arg2785z00_1787;

																						{	/* Eval/expdargs.scm 370 */
																							obj_t BgL_arg2789z00_1790;

																							obj_t BgL_arg2790z00_1791;

																							BgL_arg2789z00_1790 =
																								BGl_symbol3442z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 370 */
																								obj_t BgL_arg2791z00_1792;

																								obj_t BgL_arg2792z00_1793;

																								{	/* Eval/expdargs.scm 370 */
																									obj_t BgL_ll1902z00_1795;

																									BgL_ll1902z00_1795 =
																										BgL_aidzb2zb2_1753;
																									if (NULLP(BgL_oidzb2zb2_1752))
																										{	/* Eval/expdargs.scm 370 */
																											BgL_arg2791z00_1792 =
																												BNIL;
																										}
																									else
																										{	/* Eval/expdargs.scm 370 */
																											obj_t
																												BgL_head1903z00_1797;
																											BgL_head1903z00_1797 =
																												MAKE_PAIR(BNIL, BNIL);
																											{
																												obj_t
																													BgL_ll1901z00_1799;
																												obj_t
																													BgL_ll1902z00_1800;
																												obj_t
																													BgL_tail1904z00_1801;
																												BgL_ll1901z00_1799 =
																													BgL_oidzb2zb2_1752;
																												BgL_ll1902z00_1800 =
																													BgL_ll1902z00_1795;
																												BgL_tail1904z00_1801 =
																													BgL_head1903z00_1797;
																											BgL_zc3anonymousza32794ze3z83_1802:
																												if (NULLP
																													(BgL_ll1901z00_1799))
																													{	/* Eval/expdargs.scm 370 */
																														BgL_arg2791z00_1792
																															=
																															CDR
																															(BgL_head1903z00_1797);
																													}
																												else
																													{	/* Eval/expdargs.scm 370 */
																														obj_t
																															BgL_newtail1905z00_1804;
																														{	/* Eval/expdargs.scm 370 */
																															obj_t
																																BgL_arg2798z00_1807;
																															{	/* Eval/expdargs.scm 370 */
																																obj_t
																																	BgL_oidz00_1809;
																																obj_t
																																	BgL_aidz00_1810;
																																BgL_oidz00_1809
																																	=
																																	CAR
																																	(BgL_ll1901z00_1799);
																																BgL_aidz00_1810
																																	=
																																	CAR
																																	(BgL_ll1902z00_1800);
																																if (CBOOL
																																	(BgL_aidz00_1810))
																																	{	/* Eval/expdargs.scm 372 */
																																		long
																																			BgL_oidlz00_1811;
																																		BgL_oidlz00_1811
																																			=
																																			STRING_LENGTH
																																			(BgL_oidz00_1809);
																																		{	/* Eval/expdargs.scm 373 */
																																			obj_t
																																				BgL_arg2800z00_1812;
																																			obj_t
																																				BgL_arg2801z00_1813;
																																			{	/* Eval/expdargs.scm 373 */
																																				obj_t
																																					BgL_arg2802z00_1814;
																																				obj_t
																																					BgL_arg2803z00_1815;
																																				BgL_arg2802z00_1814
																																					=
																																					BGl_symbol3493z00zz__expander_argsz00;
																																				{	/* Eval/expdargs.scm 373 */
																																					obj_t
																																						BgL_arg2804z00_1816;
																																					{	/* Eval/expdargs.scm 373 */
																																						obj_t
																																							BgL_arg2809z00_1821;
																																						obj_t
																																							BgL_arg2810z00_1822;
																																						BgL_arg2809z00_1821
																																							=
																																							BGl_symbol3419z00zz__expander_argsz00;
																																						{	/* Eval/expdargs.scm 373 */
																																							obj_t
																																								BgL_list2811z00_1823;
																																							BgL_list2811z00_1823
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg2810z00_1822
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_az00_1763,
																																								BgL_list2811z00_1823);
																																						}
																																						BgL_arg2804z00_1816
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2809z00_1821,
																																							BgL_arg2810z00_1822);
																																					}
																																					{	/* Eval/expdargs.scm 373 */
																																						obj_t
																																							BgL_list2806z00_1818;
																																						{	/* Eval/expdargs.scm 373 */
																																							obj_t
																																								BgL_arg2807z00_1819;
																																							{	/* Eval/expdargs.scm 373 */
																																								obj_t
																																									BgL_arg2808z00_1820;
																																								BgL_arg2808z00_1820
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_arg2807z00_1819
																																									=
																																									MAKE_PAIR
																																									(BINT
																																									(BgL_oidlz00_1811),
																																									BgL_arg2808z00_1820);
																																							}
																																							BgL_list2806z00_1818
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2804z00_1816,
																																								BgL_arg2807z00_1819);
																																						}
																																						BgL_arg2803z00_1815
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_oidz00_1809,
																																							BgL_list2806z00_1818);
																																				}}
																																				BgL_arg2800z00_1812
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2802z00_1814,
																																					BgL_arg2803z00_1815);
																																			}
																																			{	/* Eval/expdargs.scm 374 */
																																				obj_t
																																					BgL_arg2812z00_1824;
																																				{	/* Eval/expdargs.scm 374 */
																																					obj_t
																																						BgL_arg2815z00_1827;
																																					obj_t
																																						BgL_arg2816z00_1828;
																																					BgL_arg2815z00_1827
																																						=
																																						BGl_symbol3424z00zz__expander_argsz00;
																																					{	/* Eval/expdargs.scm 374 */
																																						obj_t
																																							BgL_arg2818z00_1829;
																																						obj_t
																																							BgL_arg2819z00_1830;
																																						{	/* Eval/expdargs.scm 374 */
																																							obj_t
																																								BgL_arg2823z00_1834;
																																							obj_t
																																								BgL_arg2825z00_1835;
																																							{	/* Eval/expdargs.scm 374 */
																																								obj_t
																																									BgL_arg2826z00_1836;
																																								obj_t
																																									BgL_arg2827z00_1837;
																																								{	/* Eval/expdargs.scm 374 */
																																									obj_t
																																										BgL_stringz00_3090;
																																									BgL_stringz00_3090
																																										=
																																										BgL_aidz00_1810;
																																									BgL_arg2826z00_1836
																																										=
																																										string_to_symbol
																																										(BSTRING_TO_STRING
																																										(BgL_stringz00_3090));
																																								}
																																								{	/* Eval/expdargs.scm 375 */
																																									obj_t
																																										BgL_arg2828z00_1838;
																																									{	/* Eval/expdargs.scm 375 */
																																										obj_t
																																											BgL_arg2831z00_1841;
																																										obj_t
																																											BgL_arg2832z00_1842;
																																										BgL_arg2831z00_1841
																																											=
																																											BGl_symbol3495z00zz__expander_argsz00;
																																										{	/* Eval/expdargs.scm 376 */
																																											obj_t
																																												BgL_arg2833z00_1843;
																																											obj_t
																																												BgL_arg2834z00_1844;
																																											{	/* Eval/expdargs.scm 376 */
																																												obj_t
																																													BgL_arg2839z00_1849;
																																												obj_t
																																													BgL_arg2841z00_1850;
																																												BgL_arg2839z00_1849
																																													=
																																													BGl_symbol3419z00zz__expander_argsz00;
																																												{	/* Eval/expdargs.scm 376 */
																																													obj_t
																																														BgL_list2842z00_1851;
																																													BgL_list2842z00_1851
																																														=
																																														MAKE_PAIR
																																														(BNIL,
																																														BNIL);
																																													BgL_arg2841z00_1850
																																														=
																																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																														(BgL_az00_1763,
																																														BgL_list2842z00_1851);
																																												}
																																												BgL_arg2833z00_1843
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2839z00_1849,
																																													BgL_arg2841z00_1850);
																																											}
																																											{	/* Eval/expdargs.scm 378 */
																																												obj_t
																																													BgL_arg2843z00_1852;
																																												obj_t
																																													BgL_arg2844z00_1853;
																																												BgL_arg2843z00_1852
																																													=
																																													BGl_symbol3497z00zz__expander_argsz00;
																																												{	/* Eval/expdargs.scm 378 */
																																													obj_t
																																														BgL_arg2845z00_1854;
																																													{	/* Eval/expdargs.scm 378 */
																																														obj_t
																																															BgL_arg2848z00_1857;
																																														obj_t
																																															BgL_arg2849z00_1858;
																																														BgL_arg2848z00_1857
																																															=
																																															BGl_symbol3419z00zz__expander_argsz00;
																																														{	/* Eval/expdargs.scm 378 */
																																															obj_t
																																																BgL_list2850z00_1859;
																																															BgL_list2850z00_1859
																																																=
																																																MAKE_PAIR
																																																(BNIL,
																																																BNIL);
																																															BgL_arg2849z00_1858
																																																=
																																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																(BgL_az00_1763,
																																																BgL_list2850z00_1859);
																																														}
																																														BgL_arg2845z00_1854
																																															=
																																															MAKE_PAIR
																																															(BgL_arg2848z00_1857,
																																															BgL_arg2849z00_1858);
																																													}
																																													{	/* Eval/expdargs.scm 378 */
																																														obj_t
																																															BgL_list2847z00_1856;
																																														BgL_list2847z00_1856
																																															=
																																															MAKE_PAIR
																																															(BNIL,
																																															BNIL);
																																														BgL_arg2844z00_1853
																																															=
																																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																															(BgL_arg2845z00_1854,
																																															BgL_list2847z00_1856);
																																												}}
																																												BgL_arg2834z00_1844
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2843z00_1852,
																																													BgL_arg2844z00_1853);
																																											}
																																											{	/* Eval/expdargs.scm 375 */
																																												obj_t
																																													BgL_list2836z00_1846;
																																												{	/* Eval/expdargs.scm 375 */
																																													obj_t
																																														BgL_arg2837z00_1847;
																																													{	/* Eval/expdargs.scm 375 */
																																														obj_t
																																															BgL_arg2838z00_1848;
																																														BgL_arg2838z00_1848
																																															=
																																															MAKE_PAIR
																																															(BNIL,
																																															BNIL);
																																														BgL_arg2837z00_1847
																																															=
																																															MAKE_PAIR
																																															(BgL_arg2834z00_1844,
																																															BgL_arg2838z00_1848);
																																													}
																																													BgL_list2836z00_1846
																																														=
																																														MAKE_PAIR
																																														(BINT
																																														(BgL_oidlz00_1811),
																																														BgL_arg2837z00_1847);
																																												}
																																												BgL_arg2832z00_1842
																																													=
																																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_arg2833z00_1843,
																																													BgL_list2836z00_1846);
																																										}}
																																										BgL_arg2828z00_1838
																																											=
																																											MAKE_PAIR
																																											(BgL_arg2831z00_1841,
																																											BgL_arg2832z00_1842);
																																									}
																																									{	/* Eval/expdargs.scm 374 */
																																										obj_t
																																											BgL_list2830z00_1840;
																																										BgL_list2830z00_1840
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg2827z00_1837
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg2828z00_1838,
																																											BgL_list2830z00_1840);
																																								}}
																																								BgL_arg2823z00_1834
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2826z00_1836,
																																									BgL_arg2827z00_1837);
																																							}
																																							{	/* Eval/expdargs.scm 379 */
																																								obj_t
																																									BgL_arg2851z00_1860;
																																								obj_t
																																									BgL_arg2852z00_1861;
																																								BgL_arg2851z00_1860
																																									=
																																									BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																																									(BgL_argsz00_1750,
																																									BgL_az00_1763,
																																									BgL_naz00_1765,
																																									BgL_clausez00_20);
																																								{	/* Eval/expdargs.scm 380 */
																																									obj_t
																																										BgL_arg2854z00_1862;
																																									{	/* Eval/expdargs.scm 380 */
																																										obj_t
																																											BgL_arg2857z00_1864;
																																										obj_t
																																											BgL_arg2858z00_1865;
																																										BgL_arg2857z00_1864
																																											=
																																											BGl_symbol3461z00zz__expander_argsz00;
																																										{	/* Eval/expdargs.scm 380 */
																																											obj_t
																																												BgL_arg2859z00_1866;
																																											BgL_arg2859z00_1866
																																												=
																																												MAKE_PAIR
																																												(BGl_symbol3485z00zz__expander_argsz00,
																																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																												(BgL_exprza2za2_1751,
																																													BNIL));
																																											{	/* Eval/expdargs.scm 380 */
																																												obj_t
																																													BgL_list2862z00_1868;
																																												BgL_list2862z00_1868
																																													=
																																													MAKE_PAIR
																																													(BNIL,
																																													BNIL);
																																												BgL_arg2858z00_1865
																																													=
																																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_arg2859z00_1866,
																																													BgL_list2862z00_1868);
																																										}}
																																										BgL_arg2854z00_1862
																																											=
																																											MAKE_PAIR
																																											(BgL_arg2857z00_1864,
																																											BgL_arg2858z00_1865);
																																									}
																																									BgL_arg2852z00_1861
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2854z00_1862,
																																										BNIL);
																																								}
																																								BgL_arg2825z00_1835
																																									=
																																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_arg2851z00_1860,
																																									BgL_arg2852z00_1861);
																																							}
																																							BgL_arg2818z00_1829
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2823z00_1834,
																																								BgL_arg2825z00_1835);
																																						}
																																						{	/* Eval/expdargs.scm 381 */
																																							obj_t
																																								BgL_arg2865z00_1871;
																																							obj_t
																																								BgL_arg2866z00_1872;
																																							BgL_arg2865z00_1871
																																								=
																																								BGl_symbol3411z00zz__expander_argsz00;
																																							{	/* Eval/expdargs.scm 381 */
																																								obj_t
																																									BgL_arg2867z00_1873;
																																								obj_t
																																									BgL_arg2868z00_1874;
																																								{	/* Eval/expdargs.scm 381 */
																																									obj_t
																																										BgL_arg2873z00_1879;
																																									obj_t
																																										BgL_arg2874z00_1880;
																																									BgL_arg2873z00_1879
																																										=
																																										BGl_symbol3413z00zz__expander_argsz00;
																																									{	/* Eval/expdargs.scm 381 */
																																										obj_t
																																											BgL_list2875z00_1881;
																																										BgL_list2875z00_1881
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg2874z00_1880
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BGl_symbol3467z00zz__expander_argsz00,
																																											BgL_list2875z00_1881);
																																									}
																																									BgL_arg2867z00_1873
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2873z00_1879,
																																										BgL_arg2874z00_1880);
																																								}
																																								BgL_arg2868z00_1874
																																									=
																																									BGl_symbol3461z00zz__expander_argsz00;
																																								{	/* Eval/expdargs.scm 381 */
																																									obj_t
																																										BgL_list2870z00_1876;
																																									{	/* Eval/expdargs.scm 381 */
																																										obj_t
																																											BgL_arg2871z00_1877;
																																										{	/* Eval/expdargs.scm 381 */
																																											obj_t
																																												BgL_arg2872z00_1878;
																																											BgL_arg2872z00_1878
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_arg2871z00_1877
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2868z00_1874,
																																												BgL_arg2872z00_1878);
																																										}
																																										BgL_list2870z00_1876
																																											=
																																											MAKE_PAIR
																																											(BgL_naz00_1765,
																																											BgL_arg2871z00_1877);
																																									}
																																									BgL_arg2866z00_1872
																																										=
																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_arg2867z00_1873,
																																										BgL_list2870z00_1876);
																																							}}
																																							BgL_arg2819z00_1830
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2865z00_1871,
																																								BgL_arg2866z00_1872);
																																						}
																																						{	/* Eval/expdargs.scm 374 */
																																							obj_t
																																								BgL_list2821z00_1832;
																																							{	/* Eval/expdargs.scm 374 */
																																								obj_t
																																									BgL_arg2822z00_1833;
																																								BgL_arg2822z00_1833
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_list2821z00_1832
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2819z00_1830,
																																									BgL_arg2822z00_1833);
																																							}
																																							BgL_arg2816z00_1828
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2818z00_1829,
																																								BgL_list2821z00_1832);
																																					}}
																																					BgL_arg2812z00_1824
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2815z00_1827,
																																						BgL_arg2816z00_1828);
																																				}
																																				{	/* Eval/expdargs.scm 373 */
																																					obj_t
																																						BgL_list2814z00_1826;
																																					BgL_list2814z00_1826
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg2801z00_1813
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg2812z00_1824,
																																						BgL_list2814z00_1826);
																																			}}
																																			BgL_arg2798z00_1807
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2800z00_1812,
																																				BgL_arg2801z00_1813);
																																	}}
																																else
																																	{	/* Eval/expdargs.scm 382 */
																																		obj_t
																																			BgL_arg2876z00_1882;
																																		obj_t
																																			BgL_arg2877z00_1883;
																																		BgL_arg2876z00_1882
																																			=
																																			BGl_symbol3449z00zz__expander_argsz00;
																																		{	/* Eval/expdargs.scm 382 */
																																			obj_t
																																				BgL_arg2878z00_1884;
																																			{	/* Eval/expdargs.scm 382 */
																																				obj_t
																																					BgL_arg2881z00_1887;
																																				obj_t
																																					BgL_arg2882z00_1888;
																																				BgL_arg2881z00_1887
																																					=
																																					BGl_symbol3411z00zz__expander_argsz00;
																																				{	/* Eval/expdargs.scm 382 */
																																					obj_t
																																						BgL_arg2883z00_1889;
																																					{	/* Eval/expdargs.scm 382 */
																																						obj_t
																																							BgL_arg2888z00_1894;
																																						obj_t
																																							BgL_arg2890z00_1895;
																																						BgL_arg2888z00_1894
																																							=
																																							BGl_symbol3413z00zz__expander_argsz00;
																																						{	/* Eval/expdargs.scm 382 */
																																							obj_t
																																								BgL_list2891z00_1896;
																																							BgL_list2891z00_1896
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg2890z00_1895
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BGl_symbol3469z00zz__expander_argsz00,
																																								BgL_list2891z00_1896);
																																						}
																																						BgL_arg2883z00_1889
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2888z00_1894,
																																							BgL_arg2890z00_1895);
																																					}
																																					{	/* Eval/expdargs.scm 382 */
																																						obj_t
																																							BgL_list2885z00_1891;
																																						{	/* Eval/expdargs.scm 382 */
																																							obj_t
																																								BgL_arg2886z00_1892;
																																							{	/* Eval/expdargs.scm 382 */
																																								obj_t
																																									BgL_arg2887z00_1893;
																																								BgL_arg2887z00_1893
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_arg2886z00_1892
																																									=
																																									MAKE_PAIR
																																									(BgL_vz00_1764,
																																									BgL_arg2887z00_1893);
																																							}
																																							BgL_list2885z00_1891
																																								=
																																								MAKE_PAIR
																																								(BgL_az00_1763,
																																								BgL_arg2886z00_1892);
																																						}
																																						BgL_arg2882z00_1888
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_arg2883z00_1889,
																																							BgL_list2885z00_1891);
																																					}
																																				}
																																				BgL_arg2878z00_1884
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2881z00_1887,
																																					BgL_arg2882z00_1888);
																																			}
																																			{	/* Eval/expdargs.scm 382 */
																																				obj_t
																																					BgL_list2880z00_1886;
																																				BgL_list2880z00_1886
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_arg2877z00_1883
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg2878z00_1884,
																																					BgL_list2880z00_1886);
																																			}
																																		}
																																		BgL_arg2798z00_1807
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2876z00_1882,
																																			BgL_arg2877z00_1883);
																																	}
																															}
																															BgL_newtail1905z00_1804
																																=
																																MAKE_PAIR
																																(BgL_arg2798z00_1807,
																																BNIL);
																														}
																														SET_CDR
																															(BgL_tail1904z00_1801,
																															BgL_newtail1905z00_1804);
																														{
																															obj_t
																																BgL_tail1904z00_4471;
																															obj_t
																																BgL_ll1902z00_4469;
																															obj_t
																																BgL_ll1901z00_4467;
																															BgL_ll1901z00_4467
																																=
																																CDR
																																(BgL_ll1901z00_1799);
																															BgL_ll1902z00_4469
																																=
																																CDR
																																(BgL_ll1902z00_1800);
																															BgL_tail1904z00_4471
																																=
																																BgL_newtail1905z00_1804;
																															BgL_tail1904z00_1801
																																=
																																BgL_tail1904z00_4471;
																															BgL_ll1902z00_1800
																																=
																																BgL_ll1902z00_4469;
																															BgL_ll1901z00_1799
																																=
																																BgL_ll1901z00_4467;
																															goto
																																BgL_zc3anonymousza32794ze3z83_1802;
																														}
																													}
																											}
																										}
																								}
																								{	/* Eval/expdargs.scm 384 */
																									obj_t BgL_arg2892z00_1898;

																									{	/* Eval/expdargs.scm 384 */
																										obj_t BgL_arg2894z00_1900;

																										obj_t BgL_arg2896z00_1901;

																										BgL_arg2894z00_1900 =
																											BGl_symbol3449z00zz__expander_argsz00;
																										{	/* Eval/expdargs.scm 384 */
																											obj_t BgL_arg2897z00_1902;

																											{	/* Eval/expdargs.scm 384 */
																												obj_t
																													BgL_arg2900z00_1905;
																												obj_t
																													BgL_arg2901z00_1906;
																												BgL_arg2900z00_1905 =
																													BGl_symbol3411z00zz__expander_argsz00;
																												{	/* Eval/expdargs.scm 384 */
																													obj_t
																														BgL_arg2902z00_1907;
																													{	/* Eval/expdargs.scm 384 */
																														obj_t
																															BgL_arg2907z00_1912;
																														obj_t
																															BgL_arg2908z00_1913;
																														BgL_arg2907z00_1912
																															=
																															BGl_symbol3413z00zz__expander_argsz00;
																														{	/* Eval/expdargs.scm 384 */
																															obj_t
																																BgL_list2909z00_1914;
																															BgL_list2909z00_1914
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2908z00_1913
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BGl_symbol3469z00zz__expander_argsz00,
																																BgL_list2909z00_1914);
																														}
																														BgL_arg2902z00_1907
																															=
																															MAKE_PAIR
																															(BgL_arg2907z00_1912,
																															BgL_arg2908z00_1913);
																													}
																													{	/* Eval/expdargs.scm 384 */
																														obj_t
																															BgL_list2904z00_1909;
																														{	/* Eval/expdargs.scm 384 */
																															obj_t
																																BgL_arg2905z00_1910;
																															{	/* Eval/expdargs.scm 384 */
																																obj_t
																																	BgL_arg2906z00_1911;
																																BgL_arg2906z00_1911
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2905z00_1910
																																	=
																																	MAKE_PAIR
																																	(BgL_vz00_1764,
																																	BgL_arg2906z00_1911);
																															}
																															BgL_list2904z00_1909
																																=
																																MAKE_PAIR
																																(BgL_az00_1763,
																																BgL_arg2905z00_1910);
																														}
																														BgL_arg2901z00_1906
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2902z00_1907,
																															BgL_list2904z00_1909);
																													}
																												}
																												BgL_arg2897z00_1902 =
																													MAKE_PAIR
																													(BgL_arg2900z00_1905,
																													BgL_arg2901z00_1906);
																											}
																											{	/* Eval/expdargs.scm 384 */
																												obj_t
																													BgL_list2899z00_1904;
																												BgL_list2899z00_1904 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2896z00_1901 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2897z00_1902,
																													BgL_list2899z00_1904);
																											}
																										}
																										BgL_arg2892z00_1898 =
																											MAKE_PAIR
																											(BgL_arg2894z00_1900,
																											BgL_arg2896z00_1901);
																									}
																									BgL_arg2792z00_1793 =
																										MAKE_PAIR
																										(BgL_arg2892z00_1898, BNIL);
																								}
																								BgL_arg2790z00_1791 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2791z00_1792,
																									BgL_arg2792z00_1793);
																							}
																							BgL_arg2785z00_1787 =
																								MAKE_PAIR(BgL_arg2789z00_1790,
																								BgL_arg2790z00_1791);
																						}
																						{	/* Eval/expdargs.scm 369 */
																							obj_t BgL_list2787z00_1789;

																							BgL_list2787z00_1789 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2780z00_1783 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2785z00_1787,
																								BgL_list2787z00_1789);
																						}
																					}
																					BgL_arg2774z00_1777 =
																						MAKE_PAIR(BgL_arg2779z00_1782,
																						BgL_arg2780z00_1783);
																				}
																				{	/* Eval/expdargs.scm 385 */
																					obj_t BgL_arg2910z00_1915;

																					obj_t BgL_arg2911z00_1916;

																					BgL_arg2910z00_1915 =
																						BGl_symbol3449z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 386 */
																						obj_t BgL_arg2912z00_1917;

																						{	/* Eval/expdargs.scm 386 */
																							obj_t BgL_arg2915z00_1920;

																							obj_t BgL_arg2916z00_1921;

																							BgL_arg2915z00_1920 =
																								BGl_symbol3411z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 386 */
																								obj_t BgL_arg2917z00_1922;

																								{	/* Eval/expdargs.scm 386 */
																									obj_t BgL_arg2922z00_1927;

																									obj_t BgL_arg2923z00_1928;

																									BgL_arg2922z00_1927 =
																										BGl_symbol3413z00zz__expander_argsz00;
																									{	/* Eval/expdargs.scm 386 */
																										obj_t BgL_list2924z00_1929;

																										BgL_list2924z00_1929 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2923z00_1928 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BGl_symbol3469z00zz__expander_argsz00,
																											BgL_list2924z00_1929);
																									}
																									BgL_arg2917z00_1922 =
																										MAKE_PAIR
																										(BgL_arg2922z00_1927,
																										BgL_arg2923z00_1928);
																								}
																								{	/* Eval/expdargs.scm 386 */
																									obj_t BgL_list2919z00_1924;

																									{	/* Eval/expdargs.scm 386 */
																										obj_t BgL_arg2920z00_1925;

																										{	/* Eval/expdargs.scm 386 */
																											obj_t BgL_arg2921z00_1926;

																											BgL_arg2921z00_1926 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2920z00_1925 =
																												MAKE_PAIR(BgL_vz00_1764,
																												BgL_arg2921z00_1926);
																										}
																										BgL_list2919z00_1924 =
																											MAKE_PAIR(BgL_az00_1763,
																											BgL_arg2920z00_1925);
																									}
																									BgL_arg2916z00_1921 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2917z00_1922,
																										BgL_list2919z00_1924);
																								}
																							}
																							BgL_arg2912z00_1917 =
																								MAKE_PAIR(BgL_arg2915z00_1920,
																								BgL_arg2916z00_1921);
																						}
																						{	/* Eval/expdargs.scm 385 */
																							obj_t BgL_list2914z00_1919;

																							BgL_list2914z00_1919 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2911z00_1916 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2912z00_1917,
																								BgL_list2914z00_1919);
																						}
																					}
																					BgL_arg2775z00_1778 =
																						MAKE_PAIR(BgL_arg2910z00_1915,
																						BgL_arg2911z00_1916);
																				}
																				{	/* Eval/expdargs.scm 368 */
																					obj_t BgL_list2777z00_1780;

																					{	/* Eval/expdargs.scm 368 */
																						obj_t BgL_arg2778z00_1781;

																						BgL_arg2778z00_1781 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2777z00_1780 =
																							MAKE_PAIR(BgL_arg2775z00_1778,
																							BgL_arg2778z00_1781);
																					}
																					BgL_arg2773z00_1776 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2774z00_1777,
																						BgL_list2777z00_1780);
																				}
																			}
																			BgL_arg2765z00_1769 =
																				MAKE_PAIR(BgL_arg2771z00_1775,
																				BgL_arg2773z00_1776);
																		}
																		{	/* Eval/expdargs.scm 367 */
																			obj_t BgL_list2767z00_1771;

																			{	/* Eval/expdargs.scm 367 */
																				obj_t BgL_arg2768z00_1772;

																				BgL_arg2768z00_1772 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2767z00_1771 =
																					MAKE_PAIR(BgL_arg2765z00_1769,
																					BgL_arg2768z00_1772);
																			}
																			BgL_arg2763z00_1767 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2764z00_1768,
																				BgL_list2767z00_1771);
																		}
																	}
																	return
																		MAKE_PAIR(BgL_arg2762z00_1766,
																		BgL_arg2763z00_1767);
																}
															}
														}
													else
														{	/* Eval/expdargs.scm 362 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol3394z00zz__expander_argsz00,
																BGl_string3481z00zz__expander_argsz00,
																BgL_clausez00_20);
														}
												}
											else
												{	/* Eval/expdargs.scm 348 */
													{
														obj_t BgL_l1892z00_3100;

														BgL_l1892z00_3100 = BgL_oidzb2zb2_1752;
													BgL_zc3anonymousza32925ze3z83_3099:
														if (PAIRP(BgL_l1892z00_3100))
															{	/* Eval/expdargs.scm 349 */
																BGl_bindzd2optionz12zc0zz__expander_argsz00
																	(BgL_otablez00_21, CAR(BgL_l1892z00_3100),
																	BgL_clausez00_20);
																{
																	obj_t BgL_l1892z00_4513;

																	BgL_l1892z00_4513 = CDR(BgL_l1892z00_3100);
																	BgL_l1892z00_3100 = BgL_l1892z00_4513;
																	goto BgL_zc3anonymousza32925ze3z83_3099;
																}
															}
														else
															{	/* Eval/expdargs.scm 349 */
																((bool_t) 1);
															}
													}
													{	/* Eval/expdargs.scm 350 */
														obj_t BgL_az00_1939;

														obj_t BgL_vz00_1940;

														obj_t BgL_naz00_1941;

														{	/* Eval/expdargs.scm 350 */

															{	/* Eval/expdargs.scm 350 */

																BgL_az00_1939 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{	/* Eval/expdargs.scm 351 */

															{	/* Eval/expdargs.scm 351 */

																BgL_vz00_1940 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														BgL_naz00_1941 =
															BGl_symbol3499z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 353 */
															obj_t BgL_arg2928z00_1942;

															obj_t BgL_arg2929z00_1943;

															BgL_arg2928z00_1942 =
																BGl_symbol3401z00zz__expander_argsz00;
															{	/* Eval/expdargs.scm 353 */
																obj_t BgL_arg2930z00_1944;

																obj_t BgL_arg2931z00_1945;

																{	/* Eval/expdargs.scm 353 */
																	obj_t BgL_arg2935z00_1949;

																	{	/* Eval/expdargs.scm 353 */
																		obj_t BgL_list2936z00_1950;

																		BgL_list2936z00_1950 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2935z00_1949 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_vz00_1940, BgL_list2936z00_1950);
																	}
																	BgL_arg2930z00_1944 =
																		MAKE_PAIR(BgL_az00_1939,
																		BgL_arg2935z00_1949);
																}
																{	/* Eval/expdargs.scm 354 */
																	obj_t BgL_arg2937z00_1951;

																	obj_t BgL_arg2938z00_1952;

																	BgL_arg2937z00_1951 =
																		BGl_symbol3407z00zz__expander_argsz00;
																	{	/* Eval/expdargs.scm 354 */
																		obj_t BgL_arg2939z00_1953;

																		obj_t BgL_arg2940z00_1954;

																		obj_t BgL_arg2942z00_1955;

																		{	/* Eval/expdargs.scm 354 */
																			obj_t BgL_arg2947z00_1960;

																			obj_t BgL_arg2948z00_1961;

																			BgL_arg2947z00_1960 =
																				BGl_symbol3491z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 354 */
																				obj_t BgL_arg2949z00_1962;

																				obj_t BgL_arg2950z00_1963;

																				{	/* Eval/expdargs.scm 354 */
																					obj_t BgL_arg2954z00_1967;

																					obj_t BgL_arg2955z00_1968;

																					BgL_arg2954z00_1967 =
																						BGl_symbol3446z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 354 */
																						obj_t BgL_list2956z00_1969;

																						BgL_list2956z00_1969 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2955z00_1968 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_az00_1939,
																							BgL_list2956z00_1969);
																					}
																					BgL_arg2949z00_1962 =
																						MAKE_PAIR(BgL_arg2954z00_1967,
																						BgL_arg2955z00_1968);
																				}
																				{	/* Eval/expdargs.scm 355 */
																					obj_t BgL_arg2958z00_1970;

																					obj_t BgL_arg2959z00_1971;

																					BgL_arg2958z00_1970 =
																						BGl_symbol3503z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 355 */
																						obj_t BgL_arg2960z00_1972;

																						if (NULLP(BgL_ozb2zb2_1749))
																							{	/* Eval/expdargs.scm 355 */
																								BgL_arg2960z00_1972 = BNIL;
																							}
																						else
																							{	/* Eval/expdargs.scm 355 */
																								obj_t BgL_head1896z00_1976;

																								BgL_head1896z00_1976 =
																									MAKE_PAIR(BNIL, BNIL);
																								{
																									obj_t BgL_l1894z00_1978;

																									obj_t BgL_tail1897z00_1979;

																									BgL_l1894z00_1978 =
																										BgL_ozb2zb2_1749;
																									BgL_tail1897z00_1979 =
																										BgL_head1896z00_1976;
																								BgL_zc3anonymousza32963ze3z83_1980:
																									if (NULLP
																										(BgL_l1894z00_1978))
																										{	/* Eval/expdargs.scm 355 */
																											BgL_arg2960z00_1972 =
																												CDR
																												(BgL_head1896z00_1976);
																										}
																									else
																										{	/* Eval/expdargs.scm 355 */
																											obj_t
																												BgL_newtail1898z00_1982;
																											{	/* Eval/expdargs.scm 355 */
																												obj_t
																													BgL_arg2966z00_1984;
																												{	/* Eval/expdargs.scm 355 */
																													obj_t BgL_oz00_1986;

																													BgL_oz00_1986 =
																														CAR
																														(BgL_l1894z00_1978);
																													{	/* Eval/expdargs.scm 356 */
																														obj_t
																															BgL_arg2968z00_1987;
																														obj_t
																															BgL_arg2969z00_1988;
																														BgL_arg2968z00_1987
																															=
																															BGl_symbol3501z00zz__expander_argsz00;
																														{	/* Eval/expdargs.scm 356 */
																															obj_t
																																BgL_arg2970z00_1989;
																															{	/* Eval/expdargs.scm 356 */
																																obj_t
																																	BgL_arg2974z00_1993;
																																obj_t
																																	BgL_arg2975z00_1994;
																																BgL_arg2974z00_1993
																																	=
																																	BGl_symbol3419z00zz__expander_argsz00;
																																{	/* Eval/expdargs.scm 356 */
																																	obj_t
																																		BgL_list2976z00_1995;
																																	BgL_list2976z00_1995
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2975z00_1994
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_az00_1939,
																																		BgL_list2976z00_1995);
																																}
																																BgL_arg2970z00_1989
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2974z00_1993,
																																	BgL_arg2975z00_1994);
																															}
																															{	/* Eval/expdargs.scm 356 */
																																obj_t
																																	BgL_list2972z00_1991;
																																{	/* Eval/expdargs.scm 356 */
																																	obj_t
																																		BgL_arg2973z00_1992;
																																	BgL_arg2973z00_1992
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2972z00_1991
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2970z00_1989,
																																		BgL_arg2973z00_1992);
																																}
																																BgL_arg2969z00_1988
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_oz00_1986,
																																	BgL_list2972z00_1991);
																															}
																														}
																														BgL_arg2966z00_1984
																															=
																															MAKE_PAIR
																															(BgL_arg2968z00_1987,
																															BgL_arg2969z00_1988);
																													}
																												}
																												BgL_newtail1898z00_1982
																													=
																													MAKE_PAIR
																													(BgL_arg2966z00_1984,
																													BNIL);
																											}
																											SET_CDR
																												(BgL_tail1897z00_1979,
																												BgL_newtail1898z00_1982);
																											{
																												obj_t
																													BgL_tail1897z00_4541;
																												obj_t BgL_l1894z00_4539;

																												BgL_l1894z00_4539 =
																													CDR
																													(BgL_l1894z00_1978);
																												BgL_tail1897z00_4541 =
																													BgL_newtail1898z00_1982;
																												BgL_tail1897z00_1979 =
																													BgL_tail1897z00_4541;
																												BgL_l1894z00_1978 =
																													BgL_l1894z00_4539;
																												goto
																													BgL_zc3anonymousza32963ze3z83_1980;
																											}
																										}
																								}
																							}
																						BgL_arg2959z00_1971 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2960z00_1972, BNIL);
																					}
																					BgL_arg2950z00_1963 =
																						MAKE_PAIR(BgL_arg2958z00_1970,
																						BgL_arg2959z00_1971);
																				}
																				{	/* Eval/expdargs.scm 354 */
																					obj_t BgL_list2952z00_1965;

																					{	/* Eval/expdargs.scm 354 */
																						obj_t BgL_arg2953z00_1966;

																						BgL_arg2953z00_1966 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2952z00_1965 =
																							MAKE_PAIR(BgL_arg2950z00_1963,
																							BgL_arg2953z00_1966);
																					}
																					BgL_arg2948z00_1961 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2949z00_1962,
																						BgL_list2952z00_1965);
																				}
																			}
																			BgL_arg2939z00_1953 =
																				MAKE_PAIR(BgL_arg2947z00_1960,
																				BgL_arg2948z00_1961);
																		}
																		{	/* Eval/expdargs.scm 358 */
																			obj_t BgL_arg2977z00_1997;

																			obj_t BgL_arg2978z00_1998;

																			BgL_arg2977z00_1997 =
																				BGl_symbol3424z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 358 */
																				obj_t BgL_arg2979z00_1999;

																				obj_t BgL_arg2980z00_2000;

																				{	/* Eval/expdargs.scm 358 */
																					obj_t BgL_arg2984z00_2004;

																					obj_t BgL_arg2985z00_2005;

																					BgL_arg2984z00_2004 =
																						BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																						(BgL_argsz00_1750, BgL_az00_1939,
																						BgL_naz00_1941, BgL_clausez00_20);
																					{	/* Eval/expdargs.scm 359 */
																						obj_t BgL_arg2986z00_2006;

																						{	/* Eval/expdargs.scm 359 */
																							obj_t BgL_arg2988z00_2008;

																							obj_t BgL_arg2989z00_2009;

																							BgL_arg2988z00_2008 =
																								BGl_symbol3461z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 359 */
																								obj_t BgL_arg2990z00_2010;

																								BgL_arg2990z00_2010 =
																									MAKE_PAIR
																									(BGl_symbol3485z00zz__expander_argsz00,
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_exprza2za2_1751, BNIL));
																								{	/* Eval/expdargs.scm 359 */
																									obj_t BgL_list2992z00_2012;

																									BgL_list2992z00_2012 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2989z00_2009 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2990z00_2010,
																										BgL_list2992z00_2012);
																								}
																							}
																							BgL_arg2986z00_2006 =
																								MAKE_PAIR(BgL_arg2988z00_2008,
																								BgL_arg2989z00_2009);
																						}
																						BgL_arg2985z00_2005 =
																							MAKE_PAIR(BgL_arg2986z00_2006,
																							BNIL);
																					}
																					BgL_arg2979z00_1999 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2984z00_2004,
																						BgL_arg2985z00_2005);
																				}
																				{	/* Eval/expdargs.scm 360 */
																					obj_t BgL_arg2995z00_2015;

																					obj_t BgL_arg2996z00_2016;

																					BgL_arg2995z00_2015 =
																						BGl_symbol3411z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 360 */
																						obj_t BgL_arg2997z00_2017;

																						obj_t BgL_arg2998z00_2018;

																						{	/* Eval/expdargs.scm 360 */
																							obj_t BgL_arg3004z00_2023;

																							obj_t BgL_arg3005z00_2024;

																							BgL_arg3004z00_2023 =
																								BGl_symbol3413z00zz__expander_argsz00;
																							{	/* Eval/expdargs.scm 360 */
																								obj_t BgL_list3006z00_2025;

																								BgL_list3006z00_2025 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3005z00_2024 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol3467z00zz__expander_argsz00,
																									BgL_list3006z00_2025);
																							}
																							BgL_arg2997z00_2017 =
																								MAKE_PAIR(BgL_arg3004z00_2023,
																								BgL_arg3005z00_2024);
																						}
																						BgL_arg2998z00_2018 =
																							BGl_symbol3461z00zz__expander_argsz00;
																						{	/* Eval/expdargs.scm 360 */
																							obj_t BgL_list3001z00_2020;

																							{	/* Eval/expdargs.scm 360 */
																								obj_t BgL_arg3002z00_2021;

																								{	/* Eval/expdargs.scm 360 */
																									obj_t BgL_arg3003z00_2022;

																									BgL_arg3003z00_2022 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3002z00_2021 =
																										MAKE_PAIR
																										(BgL_arg2998z00_2018,
																										BgL_arg3003z00_2022);
																								}
																								BgL_list3001z00_2020 =
																									MAKE_PAIR(BgL_naz00_1941,
																									BgL_arg3002z00_2021);
																							}
																							BgL_arg2996z00_2016 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2997z00_2017,
																								BgL_list3001z00_2020);
																						}
																					}
																					BgL_arg2980z00_2000 =
																						MAKE_PAIR(BgL_arg2995z00_2015,
																						BgL_arg2996z00_2016);
																				}
																				{	/* Eval/expdargs.scm 358 */
																					obj_t BgL_list2982z00_2002;

																					{	/* Eval/expdargs.scm 358 */
																						obj_t BgL_arg2983z00_2003;

																						BgL_arg2983z00_2003 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2982z00_2002 =
																							MAKE_PAIR(BgL_arg2980z00_2000,
																							BgL_arg2983z00_2003);
																					}
																					BgL_arg2978z00_1998 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2979z00_1999,
																						BgL_list2982z00_2002);
																				}
																			}
																			BgL_arg2940z00_1954 =
																				MAKE_PAIR(BgL_arg2977z00_1997,
																				BgL_arg2978z00_1998);
																		}
																		{	/* Eval/expdargs.scm 361 */
																			obj_t BgL_arg3007z00_2026;

																			obj_t BgL_arg3008z00_2027;

																			BgL_arg3007z00_2026 =
																				BGl_symbol3411z00zz__expander_argsz00;
																			{	/* Eval/expdargs.scm 361 */
																				obj_t BgL_arg3009z00_2028;

																				{	/* Eval/expdargs.scm 361 */
																					obj_t BgL_arg3014z00_2033;

																					obj_t BgL_arg3015z00_2034;

																					BgL_arg3014z00_2033 =
																						BGl_symbol3413z00zz__expander_argsz00;
																					{	/* Eval/expdargs.scm 361 */
																						obj_t BgL_list3016z00_2035;

																						BgL_list3016z00_2035 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3015z00_2034 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol3469z00zz__expander_argsz00,
																							BgL_list3016z00_2035);
																					}
																					BgL_arg3009z00_2028 =
																						MAKE_PAIR(BgL_arg3014z00_2033,
																						BgL_arg3015z00_2034);
																				}
																				{	/* Eval/expdargs.scm 361 */
																					obj_t BgL_list3011z00_2030;

																					{	/* Eval/expdargs.scm 361 */
																						obj_t BgL_arg3012z00_2031;

																						{	/* Eval/expdargs.scm 361 */
																							obj_t BgL_arg3013z00_2032;

																							BgL_arg3013z00_2032 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3012z00_2031 =
																								MAKE_PAIR(BgL_vz00_1940,
																								BgL_arg3013z00_2032);
																						}
																						BgL_list3011z00_2030 =
																							MAKE_PAIR(BgL_az00_1939,
																							BgL_arg3012z00_2031);
																					}
																					BgL_arg3008z00_2027 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3009z00_2028,
																						BgL_list3011z00_2030);
																				}
																			}
																			BgL_arg2942z00_1955 =
																				MAKE_PAIR(BgL_arg3007z00_2026,
																				BgL_arg3008z00_2027);
																		}
																		{	/* Eval/expdargs.scm 354 */
																			obj_t BgL_list2944z00_1957;

																			{	/* Eval/expdargs.scm 354 */
																				obj_t BgL_arg2945z00_1958;

																				{	/* Eval/expdargs.scm 354 */
																					obj_t BgL_arg2946z00_1959;

																					BgL_arg2946z00_1959 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2945z00_1958 =
																						MAKE_PAIR(BgL_arg2942z00_1955,
																						BgL_arg2946z00_1959);
																				}
																				BgL_list2944z00_1957 =
																					MAKE_PAIR(BgL_arg2940z00_1954,
																					BgL_arg2945z00_1958);
																			}
																			BgL_arg2938z00_1952 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2939z00_1953,
																				BgL_list2944z00_1957);
																		}
																	}
																	BgL_arg2931z00_1945 =
																		MAKE_PAIR(BgL_arg2937z00_1951,
																		BgL_arg2938z00_1952);
																}
																{	/* Eval/expdargs.scm 353 */
																	obj_t BgL_list2933z00_1947;

																	{	/* Eval/expdargs.scm 353 */
																		obj_t BgL_arg2934z00_1948;

																		BgL_arg2934z00_1948 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2933z00_1947 =
																			MAKE_PAIR(BgL_arg2931z00_1945,
																			BgL_arg2934z00_1948);
																	}
																	BgL_arg2929z00_1943 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2930z00_1944, BgL_list2933z00_1947);
																}
															}
															return
																MAKE_PAIR(BgL_arg2928z00_1942,
																BgL_arg2929z00_1943);
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



/* fetch-option-arguments */
	obj_t BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00(obj_t
		BgL_optz00_22)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 395 */
			{	/* Eval/expdargs.scm 396 */
				obj_t BgL_g1830z00_2064;

				BgL_g1830z00_2064 = CDR(BgL_optz00_22);
				{
					obj_t BgL_iz00_3136;

					obj_t BgL_resz00_3137;

					BgL_iz00_3136 = BgL_g1830z00_2064;
					BgL_resz00_3137 = BNIL;
				BgL_loopz00_3135:
					{	/* Eval/expdargs.scm 396 */
						bool_t BgL_testz00_4586;

						if (NULLP(BgL_iz00_3136))
							{	/* Eval/expdargs.scm 396 */
								BgL_testz00_4586 = ((bool_t) 1);
							}
						else
							{	/* Eval/expdargs.scm 396 */
								BgL_testz00_4586 =
									BGl_helpzd2messagezf3z21zz__expander_argsz00(CAR
									(BgL_iz00_3136));
							}
						if (BgL_testz00_4586)
							{	/* Eval/expdargs.scm 396 */
								return bgl_reverse_bang(BgL_resz00_3137);
							}
						else
							{	/* Eval/expdargs.scm 396 */
								obj_t BgL_arg3030z00_3147;

								obj_t BgL_arg3031z00_3148;

								BgL_arg3030z00_3147 = CDR(BgL_iz00_3136);
								BgL_arg3031z00_3148 =
									MAKE_PAIR(CAR(BgL_iz00_3136), BgL_resz00_3137);
								{
									obj_t BgL_resz00_4596;

									obj_t BgL_iz00_4595;

									BgL_iz00_4595 = BgL_arg3030z00_3147;
									BgL_resz00_4596 = BgL_arg3031z00_3148;
									BgL_resz00_3137 = BgL_resz00_4596;
									BgL_iz00_3136 = BgL_iz00_4595;
									goto BgL_loopz00_3135;
								}
							}
					}
				}
			}
		}
	}



/* bind-option-arguments */
	obj_t BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00(obj_t
		BgL_argsz00_23, obj_t BgL_azb2zb2_24, obj_t BgL_naz00_25,
		obj_t BgL_clausez00_26)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 407 */
			{	/* Eval/expdargs.scm 408 */
				obj_t BgL_arg3035z00_2077;

				obj_t BgL_arg3036z00_2078;

				{	/* Eval/expdargs.scm 408 */
					obj_t BgL_arg3037z00_2079;

					{	/* Eval/expdargs.scm 408 */
						obj_t BgL_arg3038z00_2080;

						{	/* Eval/expdargs.scm 408 */
							obj_t BgL_arg3041z00_2083;

							obj_t BgL_arg3042z00_2084;

							BgL_arg3041z00_2083 = BGl_symbol3471z00zz__expander_argsz00;
							{	/* Eval/expdargs.scm 408 */
								obj_t BgL_list3043z00_2085;

								BgL_list3043z00_2085 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg3042z00_2084 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_azb2zb2_24,
									BgL_list3043z00_2085);
							}
							BgL_arg3038z00_2080 =
								MAKE_PAIR(BgL_arg3041z00_2083, BgL_arg3042z00_2084);
						}
						{	/* Eval/expdargs.scm 408 */
							obj_t BgL_list3040z00_2082;

							BgL_list3040z00_2082 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3037z00_2079 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3038z00_2080,
								BgL_list3040z00_2082);
						}
					}
					BgL_arg3035z00_2077 = MAKE_PAIR(BgL_naz00_25, BgL_arg3037z00_2079);
				}
				BgL_arg3036z00_2078 =
					BGl_loopz00zz__expander_argsz00(BgL_naz00_25, BgL_clausez00_26,
					BgL_argsz00_23);
				return MAKE_PAIR(BgL_arg3035z00_2077, BgL_arg3036z00_2078);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expander_argsz00(obj_t BgL_naz00_3487,
		obj_t BgL_clausez00_3486, obj_t BgL_argsz00_2087)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 409 */
			if (PAIRP(BgL_argsz00_2087))
				{	/* Eval/expdargs.scm 411 */
					obj_t BgL_idz00_2090;

					BgL_idz00_2090 =
						BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(CAR
						(BgL_argsz00_2087), BgL_clausez00_3486);
					{	/* Eval/expdargs.scm 412 */
						obj_t BgL_arg3046z00_2091;

						obj_t BgL_arg3047z00_2092;

						{	/* Eval/expdargs.scm 412 */
							obj_t BgL_arg3048z00_2093;

							obj_t BgL_arg3049z00_2094;

							{	/* Eval/expdargs.scm 412 */
								obj_t BgL_stringz00_3178;

								BgL_stringz00_3178 = BgL_idz00_2090;
								BgL_arg3048z00_2093 =
									string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_3178));
							}
							{	/* Eval/expdargs.scm 413 */
								obj_t BgL_arg3050z00_2095;

								{	/* Eval/expdargs.scm 413 */
									obj_t BgL_arg3053z00_2098;

									obj_t BgL_arg3054z00_2099;

									BgL_arg3053z00_2098 = BGl_symbol3407z00zz__expander_argsz00;
									{	/* Eval/expdargs.scm 413 */
										obj_t BgL_arg3055z00_2100;

										obj_t BgL_arg3056z00_2101;

										obj_t BgL_arg3057z00_2102;

										{	/* Eval/expdargs.scm 413 */
											obj_t BgL_arg3063z00_2107;

											obj_t BgL_arg3064z00_2108;

											BgL_arg3063z00_2107 =
												BGl_symbol3446z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 413 */
												obj_t BgL_list3065z00_2109;

												BgL_list3065z00_2109 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3064z00_2108 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_naz00_3487, BgL_list3065z00_2109);
											}
											BgL_arg3055z00_2100 =
												MAKE_PAIR(BgL_arg3063z00_2107, BgL_arg3064z00_2108);
										}
										{	/* Eval/expdargs.scm 414 */
											obj_t BgL_arg3066z00_2110;

											obj_t BgL_arg3067z00_2111;

											BgL_arg3066z00_2110 =
												BGl_symbol3419z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 414 */
												obj_t BgL_list3068z00_2112;

												BgL_list3068z00_2112 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3067z00_2111 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_naz00_3487, BgL_list3068z00_2112);
											}
											BgL_arg3056z00_2101 =
												MAKE_PAIR(BgL_arg3066z00_2110, BgL_arg3067z00_2111);
										}
										{	/* Eval/expdargs.scm 415 */
											obj_t BgL_arg3069z00_2113;

											obj_t BgL_arg3070z00_2114;

											BgL_arg3069z00_2113 =
												BGl_symbol3417z00zz__expander_argsz00;
											{	/* Eval/expdargs.scm 415 */
												obj_t BgL_arg3071z00_2115;

												obj_t BgL_arg3073z00_2117;

												{	/* Eval/expdargs.scm 415 */
													obj_t BgL_arg3078z00_2122;

													obj_t BgL_arg3079z00_2123;

													BgL_arg3078z00_2122 =
														BGl_symbol3413z00zz__expander_argsz00;
													{	/* Eval/expdargs.scm 415 */
														obj_t BgL_arg3081z00_2124;

														BgL_arg3081z00_2124 = CAR(BgL_argsz00_2087);
														{	/* Eval/expdargs.scm 415 */
															obj_t BgL_list3083z00_2126;

															BgL_list3083z00_2126 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3079z00_2123 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3081z00_2124, BgL_list3083z00_2126);
														}
													}
													BgL_arg3071z00_2115 =
														MAKE_PAIR(BgL_arg3078z00_2122, BgL_arg3079z00_2123);
												}
												{	/* Eval/expdargs.scm 417 */
													obj_t BgL_arg3084z00_2127;

													obj_t BgL_arg3085z00_2128;

													BgL_arg3084z00_2127 =
														BGl_symbol3413z00zz__expander_argsz00;
													{	/* Eval/expdargs.scm 417 */
														obj_t BgL_list3086z00_2129;

														BgL_list3086z00_2129 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3085z00_2128 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_clausez00_3486, BgL_list3086z00_2129);
													}
													BgL_arg3073z00_2117 =
														MAKE_PAIR(BgL_arg3084z00_2127, BgL_arg3085z00_2128);
												}
												{	/* Eval/expdargs.scm 415 */
													obj_t BgL_list3075z00_2119;

													{	/* Eval/expdargs.scm 415 */
														obj_t BgL_arg3076z00_2120;

														{	/* Eval/expdargs.scm 415 */
															obj_t BgL_arg3077z00_2121;

															BgL_arg3077z00_2121 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3076z00_2120 =
																MAKE_PAIR(BgL_arg3073z00_2117,
																BgL_arg3077z00_2121);
														}
														BgL_list3075z00_2119 =
															MAKE_PAIR(BGl_string3505z00zz__expander_argsz00,
															BgL_arg3076z00_2120);
													}
													BgL_arg3070z00_2114 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3071z00_2115, BgL_list3075z00_2119);
												}
											}
											BgL_arg3057z00_2102 =
												MAKE_PAIR(BgL_arg3069z00_2113, BgL_arg3070z00_2114);
										}
										{	/* Eval/expdargs.scm 413 */
											obj_t BgL_list3059z00_2104;

											{	/* Eval/expdargs.scm 413 */
												obj_t BgL_arg3060z00_2105;

												{	/* Eval/expdargs.scm 413 */
													obj_t BgL_arg3061z00_2106;

													BgL_arg3061z00_2106 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3060z00_2105 =
														MAKE_PAIR(BgL_arg3057z00_2102, BgL_arg3061z00_2106);
												}
												BgL_list3059z00_2104 =
													MAKE_PAIR(BgL_arg3056z00_2101, BgL_arg3060z00_2105);
											}
											BgL_arg3054z00_2099 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3055z00_2100, BgL_list3059z00_2104);
										}
									}
									BgL_arg3050z00_2095 =
										MAKE_PAIR(BgL_arg3053z00_2098, BgL_arg3054z00_2099);
								}
								{	/* Eval/expdargs.scm 412 */
									obj_t BgL_list3052z00_2097;

									BgL_list3052z00_2097 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3049z00_2094 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3050z00_2095, BgL_list3052z00_2097);
								}
							}
							BgL_arg3046z00_2091 =
								MAKE_PAIR(BgL_arg3048z00_2093, BgL_arg3049z00_2094);
						}
						{	/* Eval/expdargs.scm 418 */
							obj_t BgL_arg3087z00_2130;

							obj_t BgL_arg3088z00_2131;

							{	/* Eval/expdargs.scm 418 */
								obj_t BgL_arg3090z00_2133;

								{	/* Eval/expdargs.scm 418 */
									obj_t BgL_arg3091z00_2134;

									{	/* Eval/expdargs.scm 418 */
										obj_t BgL_arg3094z00_2137;

										obj_t BgL_arg3095z00_2138;

										BgL_arg3094z00_2137 = BGl_symbol3471z00zz__expander_argsz00;
										{	/* Eval/expdargs.scm 418 */
											obj_t BgL_list3096z00_2139;

											BgL_list3096z00_2139 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3095z00_2138 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_naz00_3487, BgL_list3096z00_2139);
										}
										BgL_arg3091z00_2134 =
											MAKE_PAIR(BgL_arg3094z00_2137, BgL_arg3095z00_2138);
									}
									{	/* Eval/expdargs.scm 418 */
										obj_t BgL_list3093z00_2136;

										BgL_list3093z00_2136 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3090z00_2133 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3091z00_2134, BgL_list3093z00_2136);
									}
								}
								BgL_arg3087z00_2130 =
									MAKE_PAIR(BgL_naz00_3487, BgL_arg3090z00_2133);
							}
							BgL_arg3088z00_2131 =
								BGl_loopz00zz__expander_argsz00(BgL_naz00_3487,
								BgL_clausez00_3486, CDR(BgL_argsz00_2087));
							{	/* Eval/expdargs.scm 412 */
								obj_t BgL_list3089z00_2132;

								BgL_list3089z00_2132 = MAKE_PAIR(BgL_arg3088z00_2131, BNIL);
								BgL_arg3047z00_2092 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3087z00_2130, BgL_list3089z00_2132);
							}
						}
						return MAKE_PAIR(BgL_arg3046z00_2091, BgL_arg3047z00_2092);
					}
				}
			else
				{	/* Eval/expdargs.scm 410 */
					return BNIL;
				}
		}
	}



/* fetch-argument-name */
	obj_t BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(obj_t BgL_az00_27,
		obj_t BgL_clausez00_28)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 425 */
			if (SYMBOLP(BgL_az00_27))
				{	/* Eval/expdargs.scm 428 */
					obj_t BgL_sz00_2144;

					{	/* Eval/expdargs.scm 428 */
						obj_t BgL_res3372z00_3184;

						{	/* Eval/expdargs.scm 428 */
							obj_t BgL_symbolz00_3182;

							BgL_symbolz00_3182 = BgL_az00_27;
							{	/* Eval/expdargs.scm 428 */
								obj_t BgL_arg3294z00_3183;

								BgL_arg3294z00_3183 = SYMBOL_TO_STRING(BgL_symbolz00_3182);
								BgL_res3372z00_3184 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg3294z00_3183);
							}
						}
						BgL_sz00_2144 = BgL_res3372z00_3184;
					}
					if ((STRING_REF(BgL_sz00_2144, ((long) 0)) == ((unsigned char) '?')))
						{	/* Eval/expdargs.scm 429 */
							return
								c_substring(BgL_sz00_2144, ((long) 1),
								STRING_LENGTH(BgL_sz00_2144));
						}
					else
						{	/* Eval/expdargs.scm 432 */
							obj_t BgL_arg3103z00_2148;

							BgL_arg3103z00_2148 =
								string_append_3(BGl_string3506z00zz__expander_argsz00,
								BgL_sz00_2144, BGl_string3507z00zz__expander_argsz00);
							return
								BGl_errorz00zz__errorz00(BGl_symbol3394z00zz__expander_argsz00,
								BgL_arg3103z00_2148, BgL_clausez00_28);
						}
				}
			else
				{	/* Eval/expdargs.scm 426 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3394z00zz__expander_argsz00,
						BGl_string3508z00zz__expander_argsz00, BgL_clausez00_28);
				}
		}
	}



/* fetch-option-embed-argument */
	obj_t BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00(obj_t
		BgL_optz00_29)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 440 */
			{	/* Eval/expdargs.scm 441 */
				long BgL_lenz00_2150;

				BgL_lenz00_2150 = (STRING_LENGTH(BgL_optz00_29) - ((long) 1));
				{
					long BgL_iz00_2152;

					BgL_iz00_2152 = ((long) 0);
				BgL_zc3anonymousza33105ze3z83_2153:
					if ((BgL_iz00_2152 >= BgL_lenz00_2150))
						{	/* Eval/expdargs.scm 444 */
							{	/* Eval/expdargs.scm 445 */
								int BgL_auxz00_4664;

								BgL_auxz00_4664 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_4664);
							}
							{	/* Eval/expdargs.scm 445 */
								int BgL_auxz00_4667;

								BgL_auxz00_4667 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_4667, BFALSE);
							}
							return BgL_optz00_29;
						}
					else
						{	/* Eval/expdargs.scm 444 */
							if (
								(STRING_REF(BgL_optz00_29,
										BgL_iz00_2152) == ((unsigned char) '?')))
								{	/* Eval/expdargs.scm 447 */
									obj_t BgL_val0_1909z00_2158;

									obj_t BgL_val1_1910z00_2159;

									BgL_val0_1909z00_2158 =
										c_substring(BgL_optz00_29, ((long) 0), BgL_iz00_2152);
									BgL_val1_1910z00_2159 =
										c_substring(BgL_optz00_29,
										(((long) 1) + BgL_iz00_2152),
										(BgL_lenz00_2150 + ((long) 1)));
									{	/* Eval/expdargs.scm 447 */
										int BgL_auxz00_4677;

										BgL_auxz00_4677 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4677);
									}
									{	/* Eval/expdargs.scm 447 */
										int BgL_auxz00_4680;

										BgL_auxz00_4680 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4680, BgL_val1_1910z00_2159);
									}
									return BgL_val0_1909z00_2158;
								}
							else
								{
									long BgL_iz00_4683;

									BgL_iz00_4683 = (BgL_iz00_2152 + ((long) 1));
									BgL_iz00_2152 = BgL_iz00_4683;
									goto BgL_zc3anonymousza33105ze3z83_2153;
								}
						}
				}
			}
		}
	}



/* help-message? */
	bool_t BGl_helpzd2messagezf3z21zz__expander_argsz00(obj_t BgL_expz00_30)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 455 */
			if (PAIRP(BgL_expz00_30))
				{	/* Eval/expdargs.scm 456 */
					bool_t BgL_testz00_4687;

					{	/* Eval/expdargs.scm 456 */
						obj_t BgL_symz00_3226;

						BgL_symz00_3226 = CAR(BgL_expz00_30);
						{	/* Eval/expdargs.scm 456 */
							bool_t BgL__ortest_1832z00_3227;

							BgL__ortest_1832z00_3227 =
								(BgL_symz00_3226 == BGl_symbol3473z00zz__expander_argsz00);
							if (BgL__ortest_1832z00_3227)
								{	/* Eval/expdargs.scm 456 */
									BgL_testz00_4687 = BgL__ortest_1832z00_3227;
								}
							else
								{	/* Eval/expdargs.scm 456 */
									BgL_testz00_4687 =
										(BgL_symz00_3226 == BGl_symbol3475z00zz__expander_argsz00);
								}
						}
					}
					if (BgL_testz00_4687)
						{	/* Eval/expdargs.scm 456 */
							return ((bool_t) 1);
						}
					else
						{	/* Eval/expdargs.scm 456 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Eval/expdargs.scm 456 */
					return ((bool_t) 0);
				}
		}
	}



/* synopsis? */
	bool_t BGl_synopsiszf3zf3zz__expander_argsz00(obj_t BgL_symz00_31)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 463 */
			{	/* Eval/expdargs.scm 464 */
				bool_t BgL__ortest_1832z00_3228;

				BgL__ortest_1832z00_3228 =
					(BgL_symz00_31 == BGl_symbol3473z00zz__expander_argsz00);
				if (BgL__ortest_1832z00_3228)
					{	/* Eval/expdargs.scm 464 */
						return BgL__ortest_1832z00_3228;
					}
				else
					{	/* Eval/expdargs.scm 464 */
						return (BgL_symz00_31 == BGl_symbol3475z00zz__expander_argsz00);
					}
			}
		}
	}



/* args-parse-usage */
	BGL_EXPORTED_DEF obj_t BGl_argszd2parsezd2usagez00zz__expander_argsz00(obj_t
		BgL_descrsz00_32)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 469 */
			{	/* Eval/expdargs.scm 470 */
				obj_t BgL_zc3anonymousza33117ze3z83_3480;

				BgL_zc3anonymousza33117ze3z83_3480 =
					make_fx_procedure(BGl_zc3anonymousza33117ze3z83zz__expander_argsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza33117ze3z83_3480,
					(int) (((long) 0)), BgL_descrsz00_32);
				return BgL_zc3anonymousza33117ze3z83_3480;
			}
		}
	}



/* _args-parse-usage */
	obj_t BGl__argszd2parsezd2usagez00zz__expander_argsz00(obj_t BgL_envz00_3481,
		obj_t BgL_descrsz00_3482)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 469 */
			{	/* Eval/expdargs.scm 470 */
				obj_t BgL_auxz00_4700;

				{	/* Eval/expdargs.scm 470 */
					bool_t BgL_testz00_4701;

					if (PAIRP(BgL_descrsz00_3482))
						{	/* Eval/expdargs.scm 470 */
							BgL_testz00_4701 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdargs.scm 470 */
							BgL_testz00_4701 = NULLP(BgL_descrsz00_3482);
						}
					if (BgL_testz00_4701)
						{	/* Eval/expdargs.scm 470 */
							BgL_auxz00_4700 = BgL_descrsz00_3482;
						}
					else
						{
							obj_t BgL_auxz00_4705;

							BgL_auxz00_4705 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3397z00zz__expander_argsz00, BINT(((long) 16216)),
								BGl_string3509z00zz__expander_argsz00,
								BGl_string3399z00zz__expander_argsz00, BgL_descrsz00_3482);
							FAILURE(BgL_auxz00_4705, BFALSE, BFALSE);
				}}
				return BGl_argszd2parsezd2usagez00zz__expander_argsz00(BgL_auxz00_4700);
			}
		}
	}



/* <anonymous:3117> */
	obj_t BGl_zc3anonymousza33117ze3z83zz__expander_argsz00(obj_t BgL_envz00_3483,
		obj_t BgL_manualzf3zf3_3485)
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 470 */
			{	/* Eval/expdargs.scm 471 */
				obj_t BgL_descrsz00_3484;

				BgL_descrsz00_3484 = PROCEDURE_REF(BgL_envz00_3483, (int) (((long) 0)));
				{
					obj_t BgL_manualzf3zf3_2174;

					BgL_manualzf3zf3_2174 = BgL_manualzf3zf3_3485;
					if (CBOOL(BgL_manualzf3zf3_2174))
						{	/* Eval/expdargs.scm 471 */
							obj_t BgL_port1911z00_2176;

							{	/* Eval/expdargs.scm 471 */
								obj_t BgL_res3373z00_3230;

								{	/* Eval/expdargs.scm 471 */
									obj_t BgL_auxz00_4714;

									BgL_auxz00_4714 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3373z00_3230 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4714);
								}
								BgL_port1911z00_2176 = BgL_res3373z00_3230;
							}
							bgl_display_string(BGl_string3510z00zz__expander_argsz00,
								BgL_port1911z00_2176);
							bgl_display_char(((unsigned char) '\n'), BgL_port1911z00_2176);
						}
					else
						{	/* Eval/expdargs.scm 471 */
							BFALSE;
						}
					{	/* Eval/expdargs.scm 472 */
						long BgL_mlenzd2symzd2_2178;

						BgL_mlenzd2symzd2_2178 = ((long) 0);
						{
							obj_t BgL_l1912z00_2180;

							BgL_l1912z00_2180 = BgL_descrsz00_3484;
						BgL_zc3anonymousza33118ze3z83_2181:
							if (PAIRP(BgL_l1912z00_2180))
								{	/* Eval/expdargs.scm 474 */
									{	/* Eval/expdargs.scm 475 */
										obj_t BgL_optz00_2183;

										BgL_optz00_2183 = CAR(BgL_l1912z00_2180);
										{	/* Eval/expdargs.scm 475 */
											obj_t BgL_namez00_2184;

											BgL_namez00_2184 = CAR(BgL_optz00_2183);
											if (STRINGP(BgL_namez00_2184))
												{	/* Eval/expdargs.scm 477 */
													long BgL_lenz00_2186;

													BgL_lenz00_2186 = STRING_LENGTH(BgL_namez00_2184);
													if ((BgL_lenz00_2186 > BgL_mlenzd2symzd2_2178))
														{	/* Eval/expdargs.scm 478 */
															BgL_mlenzd2symzd2_2178 = BgL_lenz00_2186;
														}
													else
														{	/* Eval/expdargs.scm 478 */
															BFALSE;
														}
												}
											else
												{	/* Eval/expdargs.scm 476 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1912z00_4728;

										BgL_l1912z00_4728 = CDR(BgL_l1912z00_2180);
										BgL_l1912z00_2180 = BgL_l1912z00_4728;
										goto BgL_zc3anonymousza33118ze3z83_2181;
									}
								}
							else
								{	/* Eval/expdargs.scm 474 */
									((bool_t) 1);
								}
						}
						{
							obj_t BgL_l1916z00_2191;

							BgL_l1916z00_2191 = BgL_descrsz00_3484;
						BgL_zc3anonymousza33123ze3z83_2192:
							if (PAIRP(BgL_l1916z00_2191))
								{	/* Eval/expdargs.scm 481 */
									{	/* Eval/expdargs.scm 482 */
										obj_t BgL_optz00_2194;

										BgL_optz00_2194 = CAR(BgL_l1916z00_2191);
										{	/* Eval/expdargs.scm 482 */
											obj_t BgL_namez00_2195;

											BgL_namez00_2195 = CAR(BgL_optz00_2194);
											if (STRINGP(BgL_namez00_2195))
												{	/* Eval/expdargs.scm 485 */
													long BgL_lenz00_2198;

													BgL_lenz00_2198 = STRING_LENGTH(BgL_namez00_2195);
													{	/* Eval/expdargs.scm 486 */
														obj_t BgL_descz00_2199;

														BgL_descz00_2199 = CDR(BgL_optz00_2194);
														{	/* Eval/expdargs.scm 487 */
															obj_t BgL_tabz00_2200;

															{	/* Eval/expdargs.scm 488 */
																long BgL_arg3131z00_2207;

																BgL_arg3131z00_2207 =
																	(BgL_mlenzd2symzd2_2178 - BgL_lenz00_2198);
																{	/* Eval/expdargs.scm 488 */
																	obj_t BgL_list3132z00_2208;

																	BgL_list3132z00_2208 =
																		MAKE_PAIR(BCHAR(((unsigned char) ' ')),
																		BNIL);
																	{	/* Eval/expdargs.scm 488 */
																		obj_t BgL_res3374z00_3257;

																		{	/* Eval/expdargs.scm 488 */
																			obj_t BgL_arg3288z00_3254;

																			BgL_arg3288z00_3254 =
																				CAR(BgL_list3132z00_2208);
																			BgL_res3374z00_3257 =
																				make_string(BgL_arg3131z00_2207,
																				CCHAR(BgL_arg3288z00_3254));
																		}
																		BgL_tabz00_2200 = BgL_res3374z00_3257;
															}}}
															{	/* Eval/expdargs.scm 488 */

																if (CBOOL(BgL_manualzf3zf3_2174))
																	{	/* Eval/expdargs.scm 490 */
																		{	/* Eval/expdargs.scm 492 */
																			obj_t BgL_arg3126z00_2201;

																			{	/* Eval/expdargs.scm 492 */
																				obj_t BgL_arg3128z00_2203;

																				{	/* Eval/expdargs.scm 492 */
																					obj_t BgL_list3129z00_2204;

																					BgL_list3129z00_2204 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3128z00_2203 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_descz00_2199,
																						BgL_list3129z00_2204);
																				}
																				BgL_arg3126z00_2201 =
																					MAKE_PAIR(BgL_namez00_2195,
																					BgL_arg3128z00_2203);
																			}
																			BGl_writez00zz__r4_output_6_10_3z00
																				(BgL_arg3126z00_2201, BNIL);
																		}
																		{	/* Eval/expdargs.scm 493 */
																			obj_t BgL_arg3130z00_2205;

																			{	/* Eval/expdargs.scm 493 */
																				obj_t BgL_res3375z00_3259;

																				{	/* Eval/expdargs.scm 493 */
																					obj_t BgL_auxz00_4750;

																					BgL_auxz00_4750 =
																						BGL_CURRENT_DYNAMIC_ENV();
																					BgL_res3375z00_3259 =
																						BGL_ENV_CURRENT_OUTPUT_PORT
																						(BgL_auxz00_4750);
																				}
																				BgL_arg3130z00_2205 =
																					BgL_res3375z00_3259;
																			}
																			bgl_display_char(((unsigned char) '\n'),
																				BgL_arg3130z00_2205);
																	}}
																else
																	{	/* Eval/expdargs.scm 494 */
																		obj_t BgL_port1914z00_2206;

																		{	/* Eval/expdargs.scm 494 */
																			obj_t BgL_res3376z00_3262;

																			{	/* Eval/expdargs.scm 494 */
																				obj_t BgL_auxz00_4754;

																				BgL_auxz00_4754 =
																					BGL_CURRENT_DYNAMIC_ENV();
																				BgL_res3376z00_3262 =
																					BGL_ENV_CURRENT_OUTPUT_PORT
																					(BgL_auxz00_4754);
																			}
																			BgL_port1914z00_2206 =
																				BgL_res3376z00_3262;
																		}
																		bgl_display_string
																			(BGl_string3511z00zz__expander_argsz00,
																			BgL_port1914z00_2206);
																		bgl_display_obj(BgL_namez00_2195,
																			BgL_port1914z00_2206);
																		bgl_display_obj(BgL_tabz00_2200,
																			BgL_port1914z00_2206);
																		bgl_display_string
																			(BGl_string3480z00zz__expander_argsz00,
																			BgL_port1914z00_2206);
																		bgl_display_obj(BgL_descz00_2199,
																			BgL_port1914z00_2206);
																		bgl_display_char(((unsigned char) '\n'),
																			BgL_port1914z00_2206);
												}}}}}
											else
												{	/* Eval/expdargs.scm 484 */
													if (
														(BgL_namez00_2195 ==
															BGl_symbol3478z00zz__expander_argsz00))
														{	/* Eval/expdargs.scm 496 */
															obj_t BgL_port1915z00_2210;

															{	/* Eval/expdargs.scm 496 */
																obj_t BgL_res3377z00_3269;

																{	/* Eval/expdargs.scm 496 */
																	obj_t BgL_auxz00_4765;

																	BgL_auxz00_4765 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res3377z00_3269 =
																		BGL_ENV_CURRENT_OUTPUT_PORT
																		(BgL_auxz00_4765);
																}
																BgL_port1915z00_2210 = BgL_res3377z00_3269;
															}
															bgl_display_char(((unsigned char) '\n'),
																BgL_port1915z00_2210);
															bgl_display_obj(CDR(BgL_optz00_2194),
																BgL_port1915z00_2210);
															bgl_display_string
																(BGl_string3512z00zz__expander_argsz00,
																BgL_port1915z00_2210);
															bgl_display_char(((unsigned char) '\n'),
																BgL_port1915z00_2210);
														}
													else
														{	/* Eval/expdargs.scm 495 */
															BFALSE;
														}
												}
										}
									}
									{
										obj_t BgL_l1916z00_4773;

										BgL_l1916z00_4773 = CDR(BgL_l1916z00_2191);
										BgL_l1916z00_2191 = BgL_l1916z00_4773;
										goto BgL_zc3anonymousza33123ze3z83_2192;
									}
								}
							else
								{	/* Eval/expdargs.scm 481 */
									((bool_t) 1);
								}
						}
						BGl_symbol3513z00zz__expander_argsz00;
					}
					if (CBOOL(BgL_manualzf3zf3_2174))
						{	/* Eval/expdargs.scm 499 */
							obj_t BgL_port1918z00_2214;

							{	/* Eval/expdargs.scm 499 */
								obj_t BgL_res3378z00_3278;

								{	/* Eval/expdargs.scm 499 */
									obj_t BgL_auxz00_4777;

									BgL_auxz00_4777 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3378z00_3278 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4777);
								}
								BgL_port1918z00_2214 = BgL_res3378z00_3278;
							}
							bgl_display_string(BGl_string3515z00zz__expander_argsz00,
								BgL_port1918z00_2214);
							return bgl_display_char(((unsigned char) '\n'),
								BgL_port1918z00_2214);
						}
					else
						{	/* Eval/expdargs.scm 499 */
							return BFALSE;
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_argsz00()
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 19 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_argsz00()
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 19 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_argsz00()
	{
		AN_OBJECT;
		{	/* Eval/expdargs.scm 19 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					123685331), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string3516z00zz__expander_argsz00));
		}
	}

#ifdef __cplusplus
}
#endif
