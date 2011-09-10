/*===========================================================================*/
/*   (Lalr/lalr.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/lalr.scm -indent -o objs/obj_u/Lalr/lalr.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol3060z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00();
	extern obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_Fz00zz__lalr_globalz00;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_buildzd2relationszd2zz__lalr_expandz00();
	extern obj_t BGl_actionzd2tablezd2zz__lalr_globalz00;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_keyword3032z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_keyword3034z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_keyword3036z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_packzd2grammarzd2zz__lalr_expandz00();
	static obj_t BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00(obj_t, obj_t,
		long);
	static bool_t BGl_setzd2firstszd2zz__lalr_expandz00();
	extern obj_t BGl_kernelzd2endzd2zz__lalr_globalz00;
	static obj_t BGl_genericzd2initzd2zz__lalr_expandz00();
	extern obj_t BGl_rprecz00zz__lalr_globalz00;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_nshiftsz00zz__lalr_globalz00;
	static bool_t BGl_setzd2nullablezd2zz__lalr_expandz00();
	extern obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_rrhsz00zz__lalr_globalz00;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_tozd2statezd2zz__lalr_globalz00;
	extern obj_t BGl_derivesz00zz__lalr_globalz00;
	extern obj_t BGl_lookaheadsz00zz__lalr_globalz00;
	static bool_t BGl_digraphz00zz__lalr_expandz00(obj_t);
	extern obj_t BGl_consistentz00zz__lalr_globalz00;
	extern obj_t BGl_shiftzd2tablezd2zz__lalr_globalz00;
	extern obj_t BGl_reductionzd2tablezd2zz__lalr_globalz00;
	extern obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static long BGl_mapzd2gotozd2zz__lalr_expandz00(obj_t, obj_t);
	extern obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_setzd2maxzd2rhsz00zz__lalr_expandz00();
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_loopz72z72z00zz__lalr_expandz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_expandz00();
	extern obj_t BGl_kernelzd2basezd2zz__lalr_globalz00;
	extern obj_t BGl_nsymsz00zz__lalr_globalz00;
	static bool_t BGl_setzd2shiftzd2tablez00zz__lalr_expandz00();
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t BGl_nstatesz00zz__lalr_globalz00;
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_ritemz00zz__lalr_globalz00;
	extern obj_t BGl_redzd2setzd2zz__lalr_globalz00;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static bool_t BGl_initializa7ezd2Fz75zz__lalr_expandz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_expandz00();
	extern obj_t BGl_ntermsz00zz__lalr_globalz00;
	extern obj_t BGl_ngotosz00zz__lalr_globalz00;
	static bool_t BGl_loop2z72z72zz__lalr_expandz00(long, obj_t, obj_t, obj_t,
		obj_t, obj_t, long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static bool_t BGl_initializa7ezd2LAz75zz__lalr_expandz00();
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_fromzd2statezd2zz__lalr_globalz00;
	static obj_t BGl_buildzd2tableszd2zz__lalr_expandz00();
	extern obj_t BGl_nrulesz00zz__lalr_globalz00;
	extern obj_t BGl_LArulenoz00zz__lalr_globalz00;
	extern obj_t BGl_nullablez00zz__lalr_globalz00;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_initializa7ezd2statesz75zz__lalr_expandz00();
	extern obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_maxrhsz00zz__lalr_globalz00;
	static obj_t BGl_addzd2actionzd2zz__lalr_expandz00(obj_t, long, obj_t);
	extern obj_t BGl_shiftzd2symbolzd2zz__lalr_globalz00;
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00();
	static bool_t BGl_setzd2gotozd2mapz00zz__lalr_expandz00();
	static obj_t BGl_savezd2shiftszd2zz__lalr_expandz00(obj_t);
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static bool_t BGl_setzd2fderiveszd2zz__lalr_expandz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_shiftzd2setzd2zz__lalr_globalz00;
	static obj_t BGl_toplevelzd2initzd2zz__lalr_expandz00();
	static obj_t BGl_transposez00zz__lalr_expandz00(obj_t, obj_t);
	static obj_t BGl_buildzd2rulezd2zz__lalr_expandz00(long);
	static obj_t BGl_zc3anonymousza32729ze3z83zz__lalr_expandz00(obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	static bool_t BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00();
	static obj_t BGl_list3031z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_list3042z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_allocatezd2storagezd2zz__lalr_expandz00();
	extern obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t);
	static obj_t BGl_newzd2statezd2zz__lalr_expandz00(obj_t);
	extern obj_t BGl_nitemsz00zz__lalr_globalz00;
	extern obj_t BGl_includesz00zz__lalr_globalz00;
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00;
	extern obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00();
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_newzd2itemsetszd2zz__lalr_expandz00(obj_t);
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	static bool_t BGl_compactzd2actionzd2tablez00zz__lalr_expandz00();
	extern obj_t BGl_za2symvza2z00zz__lalr_rewritez00;
	static bool_t BGl_lalrz00zz__lalr_expandz00();
	static bool_t BGl_setzd2deriveszd2zz__lalr_expandz00();
	static bool_t BGl_traversez00zz__lalr_expandz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_lastzd2reductionzd2zz__lalr_globalz00;
	static bool_t BGl_loopz72z72z72z72zz__lalr_expandz00(obj_t, obj_t, obj_t,
		obj_t, long, long, long);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_firstzd2shiftzd2zz__lalr_globalz00;
	static obj_t BGl_savezd2reductionszd2zz__lalr_expandz00(obj_t, obj_t);
	extern obj_t BGl_firstzd2statezd2zz__lalr_globalz00;
	static bool_t BGl_generatezd2stateszd2zz__lalr_expandz00();
	extern obj_t BGl_initializa7ezd2allz75zz__lalr_globalz00();
	extern obj_t BGl_rlhsz00zz__lalr_globalz00;
	extern obj_t BGl_LAz00zz__lalr_globalz00;
	static obj_t BGl_za2defaultza2z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__lalr_expandz00(obj_t);
	extern obj_t BGl_gotozd2mapzd2zz__lalr_globalz00;
	extern obj_t BGl_fderivesz00zz__lalr_globalz00;
	static obj_t BGl_zc3exitza32048ze3z83zz__lalr_expandz00(obj_t);
	static bool_t BGl_loopz72z72z72z72z00zz__lalr_expandz00(obj_t, obj_t, obj_t,
		obj_t, long, long);
	static obj_t BGl_closurez00zz__lalr_expandz00(obj_t);
	extern obj_t BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00;
	static obj_t BGl_loopz72z72zz__lalr_expandz00(obj_t);
	extern obj_t BGl_firstzd2reductionzd2zz__lalr_globalz00;
	static bool_t BGl_loop2z00zz__lalr_expandz00(long, long, long, obj_t, obj_t,
		obj_t, obj_t, long, bool_t);
	static bool_t BGl_loop3z00zz__lalr_expandz00(obj_t, obj_t, long, obj_t, long,
		obj_t, long, long);
	extern obj_t BGl_sunionz00zz__lalr_utilz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t, obj_t);
	static obj_t BGl__expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t, obj_t,
		obj_t);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	extern obj_t BGl_lastzd2shiftzd2zz__lalr_globalz00;
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_lastzd2statezd2zz__lalr_globalz00;
	static obj_t BGl_getzd2statezd2zz__lalr_expandz00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t, obj_t);
	extern obj_t BGl_finalzd2statezd2zz__lalr_globalz00;
	extern obj_t BGl_lookbackz00zz__lalr_globalz00;
	static obj_t BGl_appendzd2stateszd2zz__lalr_expandz00();
	static bool_t BGl_computezd2lookaheadszd2zz__lalr_expandz00();
	extern obj_t BGl_statezd2tablezd2zz__lalr_globalz00;
	static obj_t BGl_symbol3021z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3025z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3027z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_acceszd2symbolzd2zz__lalr_globalz00;
	static bool_t BGl_setzd2reductionzd2tablez00zz__lalr_expandz00();
	static obj_t BGl_methodzd2initzd2zz__lalr_expandz00();
	extern obj_t BGl_firstsz00zz__lalr_globalz00;
	static obj_t BGl_symbol3038z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3039z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3045z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3047z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3049z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	static obj_t BGl_symbol3055z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3022z00zz__lalr_expandz00,
		BgL_bgl_string3022za700za7za7_3063za7, "default", 7);
	      DEFINE_STRING(BGl_string3023z00zz__lalr_expandz00,
		BgL_bgl_string3023za700za7za7_3064za7, "lalr-grammar", 12);
	      DEFINE_STRING(BGl_string3024z00zz__lalr_expandz00,
		BgL_bgl_string3024za700za7za7_3065za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string3026z00zz__lalr_expandz00,
		BgL_bgl_string3026za700za7za7_3066za7, "sym-no", 6);
	      DEFINE_STRING(BGl_string3028z00zz__lalr_expandz00,
		BgL_bgl_string3028za700za7za7_3067za7, "prec", 4);
	      DEFINE_STRING(BGl_string3030z00zz__lalr_expandz00,
		BgL_bgl_string3030za700za7za7_3068za7,
		"Illegal form (Illegal left hand side)", 37);
	      DEFINE_STRING(BGl_string3029z00zz__lalr_expandz00,
		BgL_bgl_string3029za700za7za7_3069za7, "Illegal form ", 13);
	      DEFINE_STRING(BGl_string3033z00zz__lalr_expandz00,
		BgL_bgl_string3033za700za7za7_3070za7, "left", 4);
	      DEFINE_STRING(BGl_string3035z00zz__lalr_expandz00,
		BgL_bgl_string3035za700za7za7_3071za7, "right", 5);
	      DEFINE_STRING(BGl_string3037z00zz__lalr_expandz00,
		BgL_bgl_string3037za700za7za7_3072za7, "none", 4);
	      DEFINE_STRING(BGl_string3040z00zz__lalr_expandz00,
		BgL_bgl_string3040za700za7za7_3073za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3041z00zz__lalr_expandz00,
		BgL_bgl_string3041za700za7za7_3074za7, "Illegal token", 13);
	      DEFINE_STRING(BGl_string3043z00zz__lalr_expandz00,
		BgL_bgl_string3043za700za7za7_3075za7, "Error in map-goto", 17);
	      DEFINE_STRING(BGl_string3044z00zz__lalr_expandz00,
		BgL_bgl_string3044za700za7za7_3076za7, "Error in add-lookback-edge : ", 29);
	      DEFINE_STRING(BGl_string3046z00zz__lalr_expandz00,
		BgL_bgl_string3046za700za7za7_3077za7, "bidon", 5);
	      DEFINE_STRING(BGl_string3048z00zz__lalr_expandz00,
		BgL_bgl_string3048za700za7za7_3078za7, "-->", 3);
	      DEFINE_STRING(BGl_string3050z00zz__lalr_expandz00,
		BgL_bgl_string3050za700za7za7_3079za7, "accept", 6);
	      DEFINE_STRING(BGl_string3051z00zz__lalr_expandz00,
		BgL_bgl_string3051za700za7za7_3080za7, "'", 1);
	      DEFINE_STRING(BGl_string3052z00zz__lalr_expandz00,
		BgL_bgl_string3052za700za7za7_3081za7, "\non token `", 11);
	      DEFINE_STRING(BGl_string3053z00zz__lalr_expandz00,
		BgL_bgl_string3053za700za7za7_3082za7, "\n - reduce by rule ", 19);
	      DEFINE_STRING(BGl_string3054z00zz__lalr_expandz00,
		BgL_bgl_string3054za700za7za7_3083za7, "** Reduce/Reduce conflict: ", 27);
	      DEFINE_STRING(BGl_string3056z00zz__lalr_expandz00,
		BgL_bgl_string3056za700za7za7_3084za7, "*error*", 7);
	      DEFINE_STRING(BGl_string3057z00zz__lalr_expandz00,
		BgL_bgl_string3057za700za7za7_3085za7, "\n - reduce rule ", 16);
	      DEFINE_STRING(BGl_string3058z00zz__lalr_expandz00,
		BgL_bgl_string3058za700za7za7_3086za7, "\n - shift to state ", 19);
	      DEFINE_STRING(BGl_string3059z00zz__lalr_expandz00,
		BgL_bgl_string3059za700za7za7_3087za7, "** Shift/Reduce conflict: ", 26);
	      DEFINE_STRING(BGl_string3061z00zz__lalr_expandz00,
		BgL_bgl_string3061za700za7za7_3088za7, "error", 5);
	      DEFINE_STRING(BGl_string3062z00zz__lalr_expandz00,
		BgL_bgl_string3062za700za7za7_3089za7, "__lalr_expand", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00,
		BgL_bgl__expandza7d2lalrza7d3090z00,
		BGl__expandzd2lalrzd2grammarz00zz__lalr_expandz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long
		BgL_checksumz00_4304, char *BgL_fromz00_4305)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__lalr_expandz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_expandz00();
					BGl_toplevelzd2initzd2zz__lalr_expandz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 11 */
			BGl_symbol3021z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3022z00zz__lalr_expandz00);
			BGl_symbol3025z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3026z00zz__lalr_expandz00);
			BGl_symbol3027z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3028z00zz__lalr_expandz00);
			BGl_keyword3032z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string3033z00zz__lalr_expandz00);
			BGl_keyword3034z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string3035z00zz__lalr_expandz00);
			BGl_keyword3036z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string3037z00zz__lalr_expandz00);
			BGl_list3031z00zz__lalr_expandz00 =
				MAKE_PAIR(BGl_keyword3032z00zz__lalr_expandz00,
				MAKE_PAIR(BGl_keyword3034z00zz__lalr_expandz00,
					MAKE_PAIR(BGl_keyword3036z00zz__lalr_expandz00, BNIL)));
			BGl_symbol3038z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3023z00zz__lalr_expandz00);
			BGl_symbol3039z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3040z00zz__lalr_expandz00);
			BGl_list3042z00zz__lalr_expandz00 = MAKE_PAIR(BINT(((long) 0)), BNIL);
			BGl_symbol3045z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3046z00zz__lalr_expandz00);
			BGl_symbol3047z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3048z00zz__lalr_expandz00);
			BGl_symbol3049z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3050z00zz__lalr_expandz00);
			BGl_symbol3055z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3056z00zz__lalr_expandz00);
			return (BGl_symbol3060z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string3061z00zz__lalr_expandz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 11 */
			return (BGl_za2defaultza2z00zz__lalr_expandz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3021z00zz__lalr_expandz00),
				BUNSPEC);
		}
	}



/* expand-lalr-grammar */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 60 */
			{
				obj_t BgL_rulesz00_830;

				if (PAIRP(BgL_xz00_1))
					{	/* Lalr/lalr.scm 61 */
						BgL_rulesz00_830 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_rulesz00_830))
							{	/* Lalr/lalr.scm 63 */
								obj_t BgL_carzd21896zd2_841;

								obj_t BgL_cdrzd21897zd2_842;

								BgL_carzd21896zd2_841 = CAR(BgL_rulesz00_830);
								BgL_cdrzd21897zd2_842 = CDR(BgL_rulesz00_830);
								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
									(BgL_carzd21896zd2_841))
									{	/* Lalr/lalr.scm 63 */
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_cdrzd21897zd2_842))
											{	/* Lalr/lalr.scm 63 */
												BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00
													(BgL_xz00_1, BgL_carzd21896zd2_841,
													BgL_cdrzd21897zd2_842);
											}
										else
											{	/* Lalr/lalr.scm 63 */
												((bool_t) 0);
											}
									}
								else
									{	/* Lalr/lalr.scm 63 */
										((bool_t) 0);
									}
							}
						else
							{	/* Lalr/lalr.scm 63 */
								((bool_t) 0);
							}
						{	/* Lalr/lalr.scm 66 */
							obj_t BgL_codez00_845;

							{	/* Lalr/lalr.scm 66 */
								obj_t BgL_val1910z00_846;

								BgL_val1910z00_846 =
									BGl_zc3exitza32048ze3z83zz__lalr_expandz00(BgL_rulesz00_830);
								BGl_cleanzd2plistzd2zz__lalr_rewritez00();
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1910z00_846)))
									{	/* Lalr/lalr.scm 78 */
										BgL_codez00_845 =
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1910z00_846), CDR(BgL_val1910z00_846));
									}
								else
									{	/* Lalr/lalr.scm 78 */
										BgL_codez00_845 = BgL_val1910z00_846;
									}
							}
							return
								PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2, BgL_codez00_845,
								BgL_ez00_2, BEOA);
						}
					}
				else
					{	/* Lalr/lalr.scm 61 */
						return
							BGl_errorz00zz__errorz00(BGl_string3023z00zz__lalr_expandz00,
							BGl_string3024z00zz__lalr_expandz00, BgL_xz00_1);
					}
			}
		}
	}



/* <exit:2048> */
	obj_t BGl_zc3exitza32048ze3z83zz__lalr_expandz00(obj_t BgL_rulesz00_4302)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 78 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1911z00_851;

			if (SET_EXIT(BgL_an_exit1911z00_851))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1911z00_851 = (void *) jmpbuf;
					{	/* Lalr/lalr.scm 78 */

						PUSH_EXIT(BgL_an_exit1911z00_851, ((long) 0));
						{	/* Lalr/lalr.scm 76 */
							obj_t BgL_val1912z00_852;

							BGl_initializa7ezd2allz75zz__lalr_globalz00();
							BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(BgL_rulesz00_4302);
							BGl_packzd2grammarzd2zz__lalr_expandz00();
							BGl_setzd2deriveszd2zz__lalr_expandz00();
							BGl_setzd2nullablezd2zz__lalr_expandz00();
							BGl_generatezd2stateszd2zz__lalr_expandz00();
							BGl_lalrz00zz__lalr_expandz00();
							BGl_buildzd2tableszd2zz__lalr_expandz00();
							BGl_compactzd2actionzd2tablez00zz__lalr_expandz00();
							BgL_val1912z00_852 = BGl_genzd2lalrzd2codez00zz__lalr_genz00();
							POP_EXIT();
							return BgL_val1912z00_852;
						}
					}
				}
		}
	}



/* _expand-lalr-grammar */
	obj_t BGl__expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t BgL_envz00_4257,
		obj_t BgL_xz00_4258, obj_t BgL_ez00_4259)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 60 */
			return
				BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(BgL_xz00_4258,
				BgL_ez00_4259);
		}
	}



/* pack-grammar */
	bool_t BGl_packzd2grammarzd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 86 */
			BGl_rlhsz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			BGl_rrhsz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			{	/* Lalr/lalr.scm 89 */
				long BgL_arg2051z00_853;

				BgL_arg2051z00_853 =
					(((long) 1) + (long) CINT(BGl_nitemsz00zz__lalr_globalz00));
				BGl_ritemz00zz__lalr_globalz00 =
					make_vector((int) (BgL_arg2051z00_853), BFALSE);
			}
			BGl_rprecz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_pz00_855;

				long BgL_itemzd2nozd2_856;

				long BgL_rulezd2nozd2_857;

				BgL_pz00_855 = BGl_grammarz00zz__lalr_globalz00;
				BgL_itemzd2nozd2_856 = ((long) 0);
				BgL_rulezd2nozd2_857 = ((long) 1);
			BgL_zc3anonymousza32052ze3z83_858:
				if (NULLP(BgL_pz00_855))
					{	/* Lalr/lalr.scm 93 */
						return ((bool_t) 0);
					}
				else
					{	/* Lalr/lalr.scm 94 */
						obj_t BgL_ntz00_860;

						{	/* Lalr/lalr.scm 94 */
							obj_t BgL_auxz00_4381;

							{	/* Lalr/lalr.scm 94 */
								obj_t BgL_pairz00_2480;

								BgL_pairz00_2480 = BgL_pz00_855;
								BgL_auxz00_4381 = CAR(CAR(BgL_pairz00_2480));
							}
							BgL_ntz00_860 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4381,
								BGl_symbol3025z00zz__lalr_expandz00);
						}
						{	/* Lalr/lalr.scm 95 */
							obj_t BgL_g1913z00_861;

							{	/* Lalr/lalr.scm 95 */
								obj_t BgL_pairz00_2484;

								BgL_pairz00_2484 = BgL_pz00_855;
								BgL_g1913z00_861 = CDR(CAR(BgL_pairz00_2484));
							}
							{
								obj_t BgL_prodsz00_863;

								long BgL_itzd2no2zd2_864;

								long BgL_rlzd2no2zd2_865;

								BgL_prodsz00_863 = BgL_g1913z00_861;
								BgL_itzd2no2zd2_864 = BgL_itemzd2nozd2_856;
								BgL_rlzd2no2zd2_865 = BgL_rulezd2nozd2_857;
							BgL_zc3anonymousza32054ze3z83_866:
								if (NULLP(BgL_prodsz00_863))
									{
										long BgL_rulezd2nozd2_4392;

										long BgL_itemzd2nozd2_4391;

										obj_t BgL_pz00_4389;

										BgL_pz00_4389 = CDR(BgL_pz00_855);
										BgL_itemzd2nozd2_4391 = BgL_itzd2no2zd2_864;
										BgL_rulezd2nozd2_4392 = BgL_rlzd2no2zd2_865;
										BgL_rulezd2nozd2_857 = BgL_rulezd2nozd2_4392;
										BgL_itemzd2nozd2_856 = BgL_itemzd2nozd2_4391;
										BgL_pz00_855 = BgL_pz00_4389;
										goto BgL_zc3anonymousza32052ze3z83_858;
									}
								else
									{	/* Lalr/lalr.scm 96 */
										VECTOR_SET(BGl_rlhsz00zz__lalr_globalz00,
											(int) (BgL_rlzd2no2zd2_865), BgL_ntz00_860);
										VECTOR_SET(BGl_rrhsz00zz__lalr_globalz00,
											(int) (BgL_rlzd2no2zd2_865), BINT(BgL_itzd2no2zd2_864));
										{	/* Lalr/lalr.scm 101 */
											obj_t BgL_g1914z00_869;

											{	/* Lalr/lalr.scm 101 */
												obj_t BgL_pairz00_2496;

												BgL_pairz00_2496 = BgL_prodsz00_863;
												BgL_g1914z00_869 = CAR(CAR(BgL_pairz00_2496));
											}
											{
												obj_t BgL_rhsz00_871;

												long BgL_itzd2no3zd2_872;

												BgL_rhsz00_871 = BgL_g1914z00_869;
												BgL_itzd2no3zd2_872 = BgL_itzd2no2zd2_864;
											BgL_zc3anonymousza32057ze3z83_873:
												if (NULLP(BgL_rhsz00_871))
													{	/* Lalr/lalr.scm 102 */
														{	/* Lalr/lalr.scm 104 */
															long BgL_arg2059z00_875;

															BgL_arg2059z00_875 = NEG(BgL_rlzd2no2zd2_865);
															VECTOR_SET(BGl_ritemz00zz__lalr_globalz00,
																(int) (BgL_itzd2no3zd2_872),
																BINT(BgL_arg2059z00_875));
														}
														{
															long BgL_rlzd2no2zd2_4410;

															long BgL_itzd2no2zd2_4408;

															obj_t BgL_prodsz00_4406;

															BgL_prodsz00_4406 = CDR(BgL_prodsz00_863);
															BgL_itzd2no2zd2_4408 =
																(BgL_itzd2no3zd2_872 + ((long) 1));
															BgL_rlzd2no2zd2_4410 =
																(BgL_rlzd2no2zd2_865 + ((long) 1));
															BgL_rlzd2no2zd2_865 = BgL_rlzd2no2zd2_4410;
															BgL_itzd2no2zd2_864 = BgL_itzd2no2zd2_4408;
															BgL_prodsz00_863 = BgL_prodsz00_4406;
															goto BgL_zc3anonymousza32054ze3z83_866;
														}
													}
												else
													{	/* Lalr/lalr.scm 106 */
														obj_t BgL_symz00_879;

														BgL_symz00_879 = CAR(BgL_rhsz00_871);
														{	/* Lalr/lalr.scm 106 */
															obj_t BgL_asymz00_880;

															if (PAIRP(BgL_symz00_879))
																{	/* Lalr/lalr.scm 107 */
																	BgL_asymz00_880 = CAR(BgL_symz00_879);
																}
															else
																{	/* Lalr/lalr.scm 107 */
																	BgL_asymz00_880 = BgL_symz00_879;
																}
															{	/* Lalr/lalr.scm 107 */
																obj_t BgL_symzd2nozd2_881;

																BgL_symzd2nozd2_881 =
																	BGl_getpropz00zz__r4_symbols_6_4z00
																	(BgL_asymz00_880,
																	BGl_symbol3025z00zz__lalr_expandz00);
																{	/* Lalr/lalr.scm 110 */

																	if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00
																			(BgL_asymz00_880,
																				BGl_symbol3027z00zz__lalr_expandz00)))
																		{	/* Lalr/lalr.scm 112 */
																			VECTOR_SET(BGl_rprecz00zz__lalr_globalz00,
																				(int) (BgL_rlzd2no2zd2_865),
																				BGl_getpropz00zz__r4_symbols_6_4z00
																				(BgL_asymz00_880,
																					BGl_symbol3027z00zz__lalr_expandz00));
																		}
																	else
																		{	/* Lalr/lalr.scm 112 */
																			BFALSE;
																		}
																	VECTOR_SET(BGl_ritemz00zz__lalr_globalz00,
																		(int) (BgL_itzd2no3zd2_872),
																		BgL_symzd2nozd2_881);
																	{
																		long BgL_itzd2no3zd2_4427;

																		obj_t BgL_rhsz00_4425;

																		BgL_rhsz00_4425 = CDR(BgL_rhsz00_871);
																		BgL_itzd2no3zd2_4427 =
																			(BgL_itzd2no3zd2_872 + ((long) 1));
																		BgL_itzd2no3zd2_872 = BgL_itzd2no3zd2_4427;
																		BgL_rhsz00_871 = BgL_rhsz00_4425;
																		goto BgL_zc3anonymousza32057ze3z83_873;
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



/* check-lalr-rules */
	bool_t BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00(obj_t BgL_xz00_3,
		obj_t BgL_tokensz00_4, obj_t BgL_rulesz00_5)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 120 */
			{
				obj_t BgL_rulez00_921;

				{
					obj_t BgL_l1992z00_894;

					BgL_l1992z00_894 = BgL_tokensz00_4;
				BgL_zc3anonymousza32070ze3z83_895:
					if (PAIRP(BgL_l1992z00_894))
						{	/* Lalr/lalr.scm 140 */
							{	/* Lalr/lalr.scm 142 */
								obj_t BgL_tz00_897;

								BgL_tz00_897 = CAR(BgL_l1992z00_894);
								if (SYMBOLP(BgL_tz00_897))
									{	/* Lalr/lalr.scm 142 */
										BTRUE;
									}
								else
									{	/* Lalr/lalr.scm 144 */
										bool_t BgL_testz00_4434;

										if (PAIRP(BgL_tz00_897))
											{	/* Lalr/lalr.scm 144 */
												BgL_testz00_4434 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_tz00_897), BGl_list3031z00zz__lalr_expandz00));
											}
										else
											{	/* Lalr/lalr.scm 144 */
												BgL_testz00_4434 = ((bool_t) 0);
											}
										if (BgL_testz00_4434)
											{	/* Lalr/lalr.scm 145 */
												obj_t BgL_g1991z00_900;

												BgL_g1991z00_900 = CDR(BgL_tz00_897);
												{
													obj_t BgL_l1989z00_902;

													{	/* Lalr/lalr.scm 150 */
														bool_t BgL_auxz00_4441;

														BgL_l1989z00_902 = BgL_g1991z00_900;
													BgL_zc3anonymousza32074ze3z83_903:
														if (PAIRP(BgL_l1989z00_902))
															{	/* Lalr/lalr.scm 150 */
																{	/* Lalr/lalr.scm 146 */
																	obj_t BgL_tz00_905;

																	BgL_tz00_905 = CAR(BgL_l1989z00_902);
																	if (SYMBOLP(BgL_tz00_905))
																		{	/* Lalr/lalr.scm 146 */
																			BFALSE;
																		}
																	else
																		{	/* Lalr/lalr.scm 146 */
																			BGl_bigloozd2typezd2errorz00zz__errorz00
																				(BGl_symbol3038z00zz__lalr_expandz00,
																				BGl_symbol3039z00zz__lalr_expandz00,
																				BgL_tz00_905);
																		}
																}
																{
																	obj_t BgL_l1989z00_4448;

																	BgL_l1989z00_4448 = CDR(BgL_l1989z00_902);
																	BgL_l1989z00_902 = BgL_l1989z00_4448;
																	goto BgL_zc3anonymousza32074ze3z83_903;
																}
															}
														else
															{	/* Lalr/lalr.scm 150 */
																BgL_auxz00_4441 = ((bool_t) 1);
															}
														BBOOL(BgL_auxz00_4441);
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 144 */
												BGl_errorz00zz__errorz00
													(BGl_string3023z00zz__lalr_expandz00,
													BGl_string3041z00zz__lalr_expandz00, BgL_tz00_897);
											}
									}
							}
							{
								obj_t BgL_l1992z00_4452;

								BgL_l1992z00_4452 = CDR(BgL_l1992z00_894);
								BgL_l1992z00_894 = BgL_l1992z00_4452;
								goto BgL_zc3anonymousza32070ze3z83_895;
							}
						}
					else
						{	/* Lalr/lalr.scm 140 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l1994z00_2534;

					BgL_l1994z00_2534 = BgL_rulesz00_5;
				BgL_zc3anonymousza32082ze3z83_2533:
					if (PAIRP(BgL_l1994z00_2534))
						{	/* Lalr/lalr.scm 154 */
							BgL_rulez00_921 = CAR(BgL_l1994z00_2534);
							{
								obj_t BgL_subrulesz00_923;

								if (PAIRP(BgL_rulez00_921))
									{	/* Lalr/lalr.scm 139 */
										obj_t BgL_cdrzd21910zd2_928;

										BgL_cdrzd21910zd2_928 = CDR(BgL_rulez00_921);
										{	/* Lalr/lalr.scm 139 */
											bool_t BgL_testz00_4459;

											{	/* Lalr/lalr.scm 139 */
												obj_t BgL_auxz00_4460;

												BgL_auxz00_4460 = CAR(BgL_rulez00_921);
												BgL_testz00_4459 = SYMBOLP(BgL_auxz00_4460);
											}
											if (BgL_testz00_4459)
												{	/* Lalr/lalr.scm 139 */
													if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
														(BgL_cdrzd21910zd2_928))
														{	/* Lalr/lalr.scm 139 */
															bool_t BgL_auxz00_4465;

															BgL_subrulesz00_923 = BgL_cdrzd21910zd2_928;
															{
																obj_t BgL_l1987z00_933;

																BgL_l1987z00_933 = BgL_subrulesz00_923;
															BgL_zc3anonymousza32091ze3z83_934:
																if (PAIRP(BgL_l1987z00_933))
																	{	/* Lalr/lalr.scm 124 */
																		{	/* Lalr/lalr.scm 125 */
																			obj_t BgL_srz00_936;

																			BgL_srz00_936 = CAR(BgL_l1987z00_933);
																			{
																				obj_t BgL_srz00_937;

																				if (PAIRP(BgL_srz00_936))
																					{	/* Lalr/lalr.scm 125 */
																						obj_t BgL_carzd21919zd2_942;

																						BgL_carzd21919zd2_942 =
																							CAR(BgL_srz00_936);
																						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21919zd2_942))
																							{	/* Lalr/lalr.scm 125 */
																								bool_t BgL_auxz00_4474;

																								BgL_srz00_937 =
																									BgL_carzd21919zd2_942;
																								{
																									obj_t BgL_l1985z00_945;

																									BgL_l1985z00_945 =
																										BgL_srz00_937;
																								BgL_zc3anonymousza32095ze3z83_946:
																									if (PAIRP
																										(BgL_l1985z00_945))
																										{	/* Lalr/lalr.scm 127 */
																											{	/* Lalr/lalr.scm 128 */
																												obj_t BgL_symz00_948;

																												BgL_symz00_948 =
																													CAR(BgL_l1985z00_945);
																												if (SYMBOLP
																													(BgL_symz00_948))
																													{	/* Lalr/lalr.scm 128 */
																														BFALSE;
																													}
																												else
																													{	/* Lalr/lalr.scm 128 */
																														BGl_errorz00zz__errorz00
																															(BGl_string3023z00zz__lalr_expandz00,
																															BGl_string3029z00zz__lalr_expandz00,
																															BgL_rulez00_921);
																													}
																											}
																											{
																												obj_t BgL_l1985z00_4481;

																												BgL_l1985z00_4481 =
																													CDR(BgL_l1985z00_945);
																												BgL_l1985z00_945 =
																													BgL_l1985z00_4481;
																												goto
																													BgL_zc3anonymousza32095ze3z83_946;
																											}
																										}
																									else
																										{	/* Lalr/lalr.scm 127 */
																											BgL_auxz00_4474 =
																												((bool_t) 1);
																										}
																								}
																								BBOOL(BgL_auxz00_4474);
																							}
																						else
																							{	/* Lalr/lalr.scm 125 */
																								BGl_errorz00zz__errorz00
																									(BGl_string3023z00zz__lalr_expandz00,
																									BGl_string3030z00zz__lalr_expandz00,
																									BgL_rulez00_921);
																							}
																					}
																				else
																					{	/* Lalr/lalr.scm 125 */
																						BGl_errorz00zz__errorz00
																							(BGl_string3023z00zz__lalr_expandz00,
																							BGl_string3030z00zz__lalr_expandz00,
																							BgL_rulez00_921);
																					}
																			}
																		}
																		{
																			obj_t BgL_l1987z00_4486;

																			BgL_l1987z00_4486 = CDR(BgL_l1987z00_933);
																			BgL_l1987z00_933 = BgL_l1987z00_4486;
																			goto BgL_zc3anonymousza32091ze3z83_934;
																		}
																	}
																else
																	{	/* Lalr/lalr.scm 124 */
																		BgL_auxz00_4465 = ((bool_t) 1);
																	}
															}
															BBOOL(BgL_auxz00_4465);
														}
													else
														{	/* Lalr/lalr.scm 139 */
															BGl_errorz00zz__errorz00
																(BGl_string3023z00zz__lalr_expandz00,
																BGl_string3024z00zz__lalr_expandz00,
																BgL_xz00_3);
														}
												}
											else
												{	/* Lalr/lalr.scm 139 */
													BGl_errorz00zz__errorz00
														(BGl_string3023z00zz__lalr_expandz00,
														BGl_string3024z00zz__lalr_expandz00, BgL_xz00_3);
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 139 */
										BGl_errorz00zz__errorz00
											(BGl_string3023z00zz__lalr_expandz00,
											BGl_string3024z00zz__lalr_expandz00, BgL_xz00_3);
									}
							}
							{
								obj_t BgL_l1994z00_4493;

								BgL_l1994z00_4493 = CDR(BgL_l1994z00_2534);
								BgL_l1994z00_2534 = BgL_l1994z00_4493;
								goto BgL_zc3anonymousza32082ze3z83_2533;
							}
						}
					else
						{	/* Lalr/lalr.scm 154 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* set-derives */
	bool_t BGl_setzd2deriveszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 163 */
			{	/* Lalr/lalr.scm 164 */
				obj_t BgL_deltsz00_955;

				obj_t BgL_dsetz00_956;

				{	/* Lalr/lalr.scm 164 */
					long BgL_arg2116z00_989;

					BgL_arg2116z00_989 =
						((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1));
					BgL_deltsz00_955 =
						make_vector((int) (BgL_arg2116z00_989), BINT(((long) 0)));
				}
				BgL_dsetz00_956 =
					make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) -1)));
				{
					long BgL_iz00_958;

					long BgL_jz00_959;

					BgL_iz00_958 = ((long) 1);
					BgL_jz00_959 = ((long) 0);
				BgL_zc3anonymousza32100ze3z83_960:
					if ((BgL_iz00_958 < (long) CINT(BGl_nrulesz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 169 */
							obj_t BgL_lhsz00_962;

							BgL_lhsz00_962 =
								VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00, (int) (BgL_iz00_958));
							if (((long) CINT(BgL_lhsz00_962) >= ((long) 0)))
								{	/* Lalr/lalr.scm 170 */
									{	/* Lalr/lalr.scm 172 */
										obj_t BgL_arg2103z00_964;

										BgL_arg2103z00_964 =
											MAKE_PAIR(BINT(BgL_iz00_958),
											VECTOR_REF(BgL_dsetz00_956, CINT(BgL_lhsz00_962)));
										VECTOR_SET(BgL_deltsz00_955,
											(int) (BgL_jz00_959), BgL_arg2103z00_964);
									}
									VECTOR_SET(BgL_dsetz00_956,
										CINT(BgL_lhsz00_962), BINT(BgL_jz00_959));
									{
										long BgL_jz00_4522;

										long BgL_iz00_4520;

										BgL_iz00_4520 = (BgL_iz00_958 + ((long) 1));
										BgL_jz00_4522 = (BgL_jz00_959 + ((long) 1));
										BgL_jz00_959 = BgL_jz00_4522;
										BgL_iz00_958 = BgL_iz00_4520;
										goto BgL_zc3anonymousza32100ze3z83_960;
									}
								}
							else
								{
									long BgL_iz00_4524;

									BgL_iz00_4524 = (BgL_iz00_958 + ((long) 1));
									BgL_iz00_958 = BgL_iz00_4524;
									goto BgL_zc3anonymousza32100ze3z83_960;
								}
						}
					else
						{	/* Lalr/lalr.scm 168 */
							((bool_t) 0);
						}
				}
				BGl_derivesz00zz__lalr_globalz00 =
					make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) 0)));
				{
					long BgL_iz00_971;

					BgL_iz00_971 = ((long) 0);
				BgL_zc3anonymousza32108ze3z83_972:
					if ((BgL_iz00_971 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 181 */
							obj_t BgL_qz00_974;

							{	/* Lalr/lalr.scm 181 */
								obj_t BgL_g1915z00_976;

								BgL_g1915z00_976 =
									VECTOR_REF(BgL_dsetz00_956, (int) (BgL_iz00_971));
								{
									obj_t BgL_jz00_2597;

									obj_t BgL_sz00_2598;

									BgL_jz00_2597 = BgL_g1915z00_976;
									BgL_sz00_2598 = BNIL;
								BgL_loop2z00_2596:
									if (((long) CINT(BgL_jz00_2597) < ((long) 0)))
										{	/* Lalr/lalr.scm 181 */
											BgL_qz00_974 = BgL_sz00_2598;
										}
									else
										{	/* Lalr/lalr.scm 181 */
											obj_t BgL_xz00_2605;

											BgL_xz00_2605 =
												VECTOR_REF(BgL_deltsz00_955, CINT(BgL_jz00_2597));
											{	/* Lalr/lalr.scm 181 */
												obj_t BgL_arg2113z00_2606;

												obj_t BgL_arg2114z00_2607;

												BgL_arg2113z00_2606 = CDR(BgL_xz00_2605);
												BgL_arg2114z00_2607 =
													MAKE_PAIR(CAR(BgL_xz00_2605), BgL_sz00_2598);
												{
													obj_t BgL_sz00_4543;

													obj_t BgL_jz00_4542;

													BgL_jz00_4542 = BgL_arg2113z00_2606;
													BgL_sz00_4543 = BgL_arg2114z00_2607;
													BgL_sz00_2598 = BgL_sz00_4543;
													BgL_jz00_2597 = BgL_jz00_4542;
													goto BgL_loop2z00_2596;
												}
											}
										}
								}
							}
							VECTOR_SET(BGl_derivesz00zz__lalr_globalz00,
								(int) (BgL_iz00_971), BgL_qz00_974);
							{
								long BgL_iz00_4546;

								BgL_iz00_4546 = (BgL_iz00_971 + ((long) 1));
								BgL_iz00_971 = BgL_iz00_4546;
								goto BgL_zc3anonymousza32108ze3z83_972;
							}
						}
					else
						{	/* Lalr/lalr.scm 180 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* set-nullable */
	bool_t BGl_setzd2nullablezd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 191 */
			BGl_nullablez00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
			{	/* Lalr/lalr.scm 193 */
				obj_t BgL_squeuez00_991;

				obj_t BgL_rcountz00_992;

				obj_t BgL_rsetsz00_993;

				obj_t BgL_reltsz00_994;

				BgL_squeuez00_991 =
					make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) 0)));
				{	/* Lalr/lalr.scm 194 */
					long BgL_arg2160z00_1065;

					BgL_arg2160z00_1065 =
						((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1));
					BgL_rcountz00_992 =
						make_vector((int) (BgL_arg2160z00_1065), BINT(((long) 0)));
				}
				BgL_rsetsz00_993 =
					make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
				{	/* Lalr/lalr.scm 196 */
					long BgL_arg2162z00_1067;

					{	/* Lalr/lalr.scm 196 */
						long BgL_za71za7_2648;

						BgL_za71za7_2648 = (long) CINT(BGl_nitemsz00zz__lalr_globalz00);
						BgL_arg2162z00_1067 =
							(BgL_za71za7_2648 +
							((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1)));
					}
					BgL_reltsz00_994 = make_vector((int) (BgL_arg2162z00_1067), BFALSE);
				}
				return
					BGl_loopz72z72z72z72zz__lalr_expandz00(BgL_squeuez00_991,
					BgL_rsetsz00_993, BgL_rcountz00_992, BgL_reltsz00_994, ((long) 0),
					((long) 0), ((long) 0));
		}}
	}



/* loop3 */
	bool_t BGl_loop3z00zz__lalr_expandz00(obj_t BgL_reltsz00_4281,
		obj_t BgL_rsetsz00_4280, long BgL_rulenoz00_4279, obj_t BgL_rcountz00_4278,
		long BgL_s2z00_4277, obj_t BgL_squeuez00_4276, long BgL_r2z00_1021,
		long BgL_p2z00_1022)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 214 */
		BGl_loop3z00zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 215 */
				obj_t BgL_symbolz00_1024;

				BgL_symbolz00_1024 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, (int) (BgL_r2z00_1021));
				if (((long) CINT(BgL_symbolz00_1024) > ((long) 0)))
					{	/* Lalr/lalr.scm 216 */
						{	/* Lalr/lalr.scm 219 */
							long BgL_arg2135z00_1026;

							{	/* Lalr/lalr.scm 219 */
								obj_t BgL_arg2136z00_1027;

								BgL_arg2136z00_1027 =
									VECTOR_REF(BgL_rcountz00_4278, (int) (BgL_rulenoz00_4279));
								BgL_arg2135z00_1026 =
									((long) CINT(BgL_arg2136z00_1027) + ((long) 1));
							}
							VECTOR_SET(BgL_rcountz00_4278,
								(int) (BgL_rulenoz00_4279), BINT(BgL_arg2135z00_1026));
						}
						{	/* Lalr/lalr.scm 221 */
							obj_t BgL_arg2138z00_1029;

							BgL_arg2138z00_1029 =
								MAKE_PAIR(VECTOR_REF(BgL_rsetsz00_4280,
									CINT(BgL_symbolz00_1024)), BINT(BgL_rulenoz00_4279));
							VECTOR_SET(BgL_reltsz00_4281,
								(int) (BgL_p2z00_1022), BgL_arg2138z00_1029);
						}
						VECTOR_SET(BgL_rsetsz00_4280,
							CINT(BgL_symbolz00_1024), BINT(BgL_p2z00_1022));
						{
							long BgL_p2z00_4590;

							long BgL_r2z00_4588;

							BgL_r2z00_4588 = (BgL_r2z00_1021 + ((long) 1));
							BgL_p2z00_4590 = (BgL_p2z00_1022 + ((long) 1));
							BgL_p2z00_1022 = BgL_p2z00_4590;
							BgL_r2z00_1021 = BgL_r2z00_4588;
							goto BGl_loop3z00zz__lalr_expandz00;
						}
					}
				else
					{	/* Lalr/lalr.scm 216 */
						return
							BGl_loopz72z72z72z72zz__lalr_expandz00(BgL_squeuez00_4276,
							BgL_rsetsz00_4280, BgL_rcountz00_4278, BgL_reltsz00_4281,
							(BgL_r2z00_1021 + ((long) 1)), BgL_s2z00_4277, BgL_p2z00_1022);
		}}}
	}



/* loop2 */
	bool_t BGl_loop2z00zz__lalr_expandz00(long BgL_s2z00_4288, long BgL_pz00_4287,
		long BgL_rz00_4286, obj_t BgL_squeuez00_4285, obj_t BgL_rsetsz00_4284,
		obj_t BgL_rcountz00_4283, obj_t BgL_reltsz00_4282, long BgL_r1z00_1010,
		bool_t BgL_anyzd2tokenszd2_1011)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 208 */
		BGl_loop2z00zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 209 */
				obj_t BgL_symbolz00_1013;

				BgL_symbolz00_1013 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, (int) (BgL_r1z00_1010));
				{	/* Lalr/lalr.scm 209 */

					if (((long) CINT(BgL_symbolz00_1013) > ((long) 0)))
						{	/* Lalr/lalr.scm 211 */
							long BgL_arg2130z00_1015;

							bool_t BgL_arg2131z00_1016;

							BgL_arg2130z00_1015 = (BgL_r1z00_1010 + ((long) 1));
							if (BgL_anyzd2tokenszd2_1011)
								{	/* Lalr/lalr.scm 211 */
									BgL_arg2131z00_1016 = BgL_anyzd2tokenszd2_1011;
								}
							else
								{	/* Lalr/lalr.scm 211 */
									BgL_arg2131z00_1016 =
										(
										(long) CINT(BgL_symbolz00_1013) >=
										(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
								}
							{
								bool_t BgL_anyzd2tokenszd2_4605;

								long BgL_r1z00_4604;

								BgL_r1z00_4604 = BgL_arg2130z00_1015;
								BgL_anyzd2tokenszd2_4605 = BgL_arg2131z00_1016;
								BgL_anyzd2tokenszd2_1011 = BgL_anyzd2tokenszd2_4605;
								BgL_r1z00_1010 = BgL_r1z00_4604;
								goto BGl_loop2z00zz__lalr_expandz00;
							}
						}
					else
						{	/* Lalr/lalr.scm 210 */
							if (BgL_anyzd2tokenszd2_1011)
								{	/* Lalr/lalr.scm 212 */
									return
										BGl_loopz72z72z72z72zz__lalr_expandz00(BgL_squeuez00_4285,
										BgL_rsetsz00_4284, BgL_rcountz00_4283, BgL_reltsz00_4282,
										(BgL_r1z00_1010 + ((long) 1)), BgL_s2z00_4288,
										BgL_pz00_4287);
								}
							else
								{	/* Lalr/lalr.scm 212 */
									return
										BGl_loop3z00zz__lalr_expandz00(BgL_reltsz00_4282,
										BgL_rsetsz00_4284, NEG((long) CINT(BgL_symbolz00_1013)),
										BgL_rcountz00_4283, BgL_s2z00_4288, BgL_squeuez00_4285,
										BgL_rz00_4286, BgL_pz00_4287);
		}}}}}
	}



/* loop'''' */
	bool_t BGl_loopz72z72z72z72z00zz__lalr_expandz00(obj_t BgL_rsetsz00_4292,
		obj_t BgL_squeuez00_4291, obj_t BgL_rcountz00_4290, obj_t BgL_reltsz00_4289,
		long BgL_s1z00_1037, long BgL_s3z00_1038)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 227 */
			if ((BgL_s1z00_1037 < BgL_s3z00_1038))
				{	/* Lalr/lalr.scm 229 */
					obj_t BgL_g1918z00_1041;

					{	/* Lalr/lalr.scm 229 */
						obj_t BgL_arg2159z00_1062;

						BgL_arg2159z00_1062 =
							VECTOR_REF(BgL_squeuez00_4291, (int) (BgL_s1z00_1037));
						BgL_g1918z00_1041 =
							VECTOR_REF(BgL_rsetsz00_4292, CINT(BgL_arg2159z00_1062));
					}
					return
						BGl_loop2z72z72zz__lalr_expandz00(BgL_s1z00_1037,
						BgL_squeuez00_4291, BgL_rcountz00_4290, BgL_reltsz00_4289,
						BgL_rsetsz00_4292, BgL_g1918z00_1041, BgL_s3z00_1038);
				}
			else
				{	/* Lalr/lalr.scm 228 */
					return ((bool_t) 0);
				}
		}
	}



/* loop''' */
	bool_t BGl_loopz72z72z72z72zz__lalr_expandz00(obj_t BgL_squeuez00_4296,
		obj_t BgL_rsetsz00_4295, obj_t BgL_rcountz00_4294, obj_t BgL_reltsz00_4293,
		long BgL_rz00_996, long BgL_s2z00_997, long BgL_pz00_998)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 197 */
		BGl_loopz72z72z72z72zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 198 */
				obj_t BgL_za2rza2_1000;

				BgL_za2rza2_1000 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, (int) (BgL_rz00_996));
				if (CBOOL(BgL_za2rza2_1000))
					{	/* Lalr/lalr.scm 199 */
						if (((long) CINT(BgL_za2rza2_1000) < ((long) 0)))
							{	/* Lalr/lalr.scm 201 */
								obj_t BgL_symbolz00_1002;

								{	/* Lalr/lalr.scm 201 */
									long BgL_arg2127z00_1008;

									BgL_arg2127z00_1008 = NEG((long) CINT(BgL_za2rza2_1000));
									BgL_symbolz00_1002 =
										VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00,
										(int) (BgL_arg2127z00_1008));
								}
								{	/* Lalr/lalr.scm 202 */
									bool_t BgL_testz00_4630;

									if (((long) CINT(BgL_symbolz00_1002) >= ((long) 0)))
										{	/* Lalr/lalr.scm 203 */
											bool_t BgL_testz00_4634;

											{	/* Lalr/lalr.scm 203 */
												obj_t BgL_vectorz00_2659;

												int BgL_kz00_2660;

												BgL_vectorz00_2659 = BGl_nullablez00zz__lalr_globalz00;
												BgL_kz00_2660 = CINT(BgL_symbolz00_1002);
												BgL_testz00_4634 =
													CBOOL(VECTOR_REF(BgL_vectorz00_2659, BgL_kz00_2660));
											}
											if (BgL_testz00_4634)
												{	/* Lalr/lalr.scm 203 */
													BgL_testz00_4630 = ((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 203 */
													BgL_testz00_4630 = ((bool_t) 1);
												}
										}
									else
										{	/* Lalr/lalr.scm 202 */
											BgL_testz00_4630 = ((bool_t) 0);
										}
									if (BgL_testz00_4630)
										{	/* Lalr/lalr.scm 202 */
											VECTOR_SET(BGl_nullablez00zz__lalr_globalz00,
												CINT(BgL_symbolz00_1002), BTRUE);
											VECTOR_SET(BgL_squeuez00_4296,
												(int) (BgL_s2z00_997), BgL_symbolz00_1002);
											{
												long BgL_s2z00_4644;

												long BgL_rz00_4642;

												BgL_rz00_4642 = (BgL_rz00_996 + ((long) 1));
												BgL_s2z00_4644 = (BgL_s2z00_997 + ((long) 1));
												BgL_s2z00_997 = BgL_s2z00_4644;
												BgL_rz00_996 = BgL_rz00_4642;
												goto BGl_loopz72z72z72z72zz__lalr_expandz00;
											}
										}
									else
										{	/* Lalr/lalr.scm 202 */
											return ((bool_t) 0);
										}
								}
							}
						else
							{	/* Lalr/lalr.scm 200 */
								return
									BGl_loop2z00zz__lalr_expandz00(BgL_s2z00_997, BgL_pz00_998,
									BgL_rz00_996, BgL_squeuez00_4296, BgL_rsetsz00_4295,
									BgL_rcountz00_4294, BgL_reltsz00_4293, BgL_rz00_996,
									((bool_t) 0));
							}
					}
				else
					{	/* Lalr/lalr.scm 199 */
						return
							BGl_loopz72z72z72z72z00zz__lalr_expandz00(BgL_rsetsz00_4295,
							BgL_squeuez00_4296, BgL_rcountz00_4294, BgL_reltsz00_4293,
							((long) 0), BgL_s2z00_997);
		}}}
	}



/* loop2' */
	bool_t BGl_loop2z72z72zz__lalr_expandz00(long BgL_s1z00_4301,
		obj_t BgL_squeuez00_4300, obj_t BgL_rcountz00_4299, obj_t BgL_reltsz00_4298,
		obj_t BgL_rsetsz00_4297, obj_t BgL_pz00_1043, long BgL_s4z00_1044)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 229 */
			if (CBOOL(BgL_pz00_1043))
				{	/* Lalr/lalr.scm 231 */
					obj_t BgL_xz00_1046;

					BgL_xz00_1046 = VECTOR_REF(BgL_reltsz00_4298, CINT(BgL_pz00_1043));
					{	/* Lalr/lalr.scm 231 */
						obj_t BgL_rulenoz00_1047;

						BgL_rulenoz00_1047 = CDR(BgL_xz00_1046);
						{	/* Lalr/lalr.scm 232 */
							long BgL_yz00_1048;

							{	/* Lalr/lalr.scm 233 */
								obj_t BgL_arg2156z00_1058;

								BgL_arg2156z00_1058 =
									VECTOR_REF(BgL_rcountz00_4299, CINT(BgL_rulenoz00_1047));
								BgL_yz00_1048 = ((long) CINT(BgL_arg2156z00_1058) - ((long) 1));
							}
							{	/* Lalr/lalr.scm 233 */

								VECTOR_SET(BgL_rcountz00_4299,
									CINT(BgL_rulenoz00_1047), BINT(BgL_yz00_1048));
								if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_yz00_1048),
										BINT(((long) 0))))
									{	/* Lalr/lalr.scm 236 */
										obj_t BgL_symbolz00_1050;

										BgL_symbolz00_1050 =
											VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00,
											CINT(BgL_rulenoz00_1047));
										{	/* Lalr/lalr.scm 237 */
											bool_t BgL_testz00_4666;

											if (((long) CINT(BgL_symbolz00_1050) >= ((long) 0)))
												{	/* Lalr/lalr.scm 238 */
													bool_t BgL_testz00_4670;

													{	/* Lalr/lalr.scm 238 */
														obj_t BgL_vectorz00_2727;

														int BgL_kz00_2728;

														BgL_vectorz00_2727 =
															BGl_nullablez00zz__lalr_globalz00;
														BgL_kz00_2728 = CINT(BgL_symbolz00_1050);
														BgL_testz00_4670 =
															CBOOL(VECTOR_REF(BgL_vectorz00_2727,
																BgL_kz00_2728));
													}
													if (BgL_testz00_4670)
														{	/* Lalr/lalr.scm 238 */
															BgL_testz00_4666 = ((bool_t) 0);
														}
													else
														{	/* Lalr/lalr.scm 238 */
															BgL_testz00_4666 = ((bool_t) 1);
														}
												}
											else
												{	/* Lalr/lalr.scm 237 */
													BgL_testz00_4666 = ((bool_t) 0);
												}
											if (BgL_testz00_4666)
												{	/* Lalr/lalr.scm 237 */
													VECTOR_SET(BGl_nullablez00zz__lalr_globalz00,
														CINT(BgL_symbolz00_1050), BTRUE);
													VECTOR_SET(BgL_squeuez00_4300,
														(int) (BgL_s4z00_1044), BgL_symbolz00_1050);
													BGl_loop2z72z72zz__lalr_expandz00(BgL_s1z00_4301,
														BgL_squeuez00_4300, BgL_rcountz00_4299,
														BgL_reltsz00_4298, BgL_rsetsz00_4297,
														CAR(BgL_xz00_1046), (BgL_s4z00_1044 + ((long) 1)));
												}
											else
												{	/* Lalr/lalr.scm 237 */
													BGl_loop2z72z72zz__lalr_expandz00(BgL_s1z00_4301,
														BgL_squeuez00_4300, BgL_rcountz00_4299,
														BgL_reltsz00_4298, BgL_rsetsz00_4297,
														CAR(BgL_xz00_1046), BgL_s4z00_1044);
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 235 */
										BGl_loop2z72z72zz__lalr_expandz00(BgL_s1z00_4301,
											BgL_squeuez00_4300, BgL_rcountz00_4299, BgL_reltsz00_4298,
											BgL_rsetsz00_4297, CAR(BgL_xz00_1046), BgL_s4z00_1044);
									}
							}
						}
					}
				}
			else
				{	/* Lalr/lalr.scm 230 */
					((bool_t) 0);
				}
			return
				BGl_loopz72z72z72z72z00zz__lalr_expandz00(BgL_rsetsz00_4297,
				BgL_squeuez00_4300, BgL_rcountz00_4299, BgL_reltsz00_4298,
				(BgL_s1z00_4301 + ((long) 1)), BgL_s4z00_1044);
		}
	}



/* set-firsts */
	bool_t BGl_setzd2firstszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 254 */
			BGl_firstsz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BNIL);
			{
				long BgL_iz00_1070;

				BgL_iz00_1070 = ((long) 0);
			BgL_zc3anonymousza32164ze3z83_1071:
				if ((BgL_iz00_1070 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 260 */
						obj_t BgL_g1919z00_1073;

						BgL_g1919z00_1073 =
							VECTOR_REF(BGl_derivesz00zz__lalr_globalz00,
							(int) (BgL_iz00_1070));
						{
							obj_t BgL_spz00_1075;

							BgL_spz00_1075 = BgL_g1919z00_1073;
						BgL_zc3anonymousza32166ze3z83_1076:
							if (NULLP(BgL_spz00_1075))
								{
									long BgL_iz00_4696;

									BgL_iz00_4696 = (BgL_iz00_1070 + ((long) 1));
									BgL_iz00_1070 = BgL_iz00_4696;
									goto BgL_zc3anonymousza32164ze3z83_1071;
								}
							else
								{	/* Lalr/lalr.scm 263 */
									obj_t BgL_symz00_1079;

									{	/* Lalr/lalr.scm 263 */
										obj_t BgL_arg2174z00_1086;

										{	/* Lalr/lalr.scm 263 */
											obj_t BgL_arg2175z00_1087;

											BgL_arg2175z00_1087 = CAR(BgL_spz00_1075);
											BgL_arg2174z00_1086 =
												VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
												CINT(BgL_arg2175z00_1087));
										}
										BgL_symz00_1079 =
											VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
											CINT(BgL_arg2174z00_1086));
									}
									{	/* Lalr/lalr.scm 264 */
										bool_t BgL_testz00_4703;

										if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(((long) -1)),
												BgL_symz00_1079))
											{	/* Lalr/lalr.scm 264 */
												BgL_testz00_4703 =
													BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_symz00_1079,
													BGl_nvarsz00zz__lalr_globalz00, BNIL);
											}
										else
											{	/* Lalr/lalr.scm 264 */
												BgL_testz00_4703 = ((bool_t) 0);
											}
										if (BgL_testz00_4703)
											{	/* Lalr/lalr.scm 264 */
												VECTOR_SET(BGl_firstsz00zz__lalr_globalz00,
													(int) (BgL_iz00_1070),
													BGl_sinsertz00zz__lalr_utilz00(BgL_symz00_1079,
														VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
															(int) (BgL_iz00_1070))));
											}
										else
											{	/* Lalr/lalr.scm 264 */
												BFALSE;
											}
									}
									{
										obj_t BgL_spz00_4713;

										BgL_spz00_4713 = CDR(BgL_spz00_1075);
										BgL_spz00_1075 = BgL_spz00_4713;
										goto BgL_zc3anonymousza32166ze3z83_1076;
									}
								}
						}
					}
				else
					{	/* Lalr/lalr.scm 259 */
						((bool_t) 0);
					}
			}
			{
				bool_t BgL_continuez00_1091;

				BgL_continuez00_1091 = ((bool_t) 1);
			BgL_zc3anonymousza32176ze3z83_1092:
				if (BgL_continuez00_1091)
					{
						long BgL_iz00_1094;

						bool_t BgL_contz00_1095;

						BgL_iz00_1094 = ((long) 0);
						BgL_contz00_1095 = ((bool_t) 0);
					BgL_zc3anonymousza32177ze3z83_1096:
						if ((BgL_iz00_1094 >= (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
							{
								bool_t BgL_continuez00_4719;

								BgL_continuez00_4719 = BgL_contz00_1095;
								BgL_continuez00_1091 = BgL_continuez00_4719;
								goto BgL_zc3anonymousza32176ze3z83_1092;
							}
						else
							{	/* Lalr/lalr.scm 274 */
								obj_t BgL_xz00_1098;

								BgL_xz00_1098 =
									VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
									(int) (BgL_iz00_1094));
								{	/* Lalr/lalr.scm 274 */
									obj_t BgL_yz00_1099;

									{
										obj_t BgL_lz00_2765;

										obj_t BgL_za7za7_2766;

										BgL_lz00_2765 = BgL_xz00_1098;
										BgL_za7za7_2766 = BgL_xz00_1098;
									BgL_loop3z00_2764:
										if (NULLP(BgL_lz00_2765))
											{	/* Lalr/lalr.scm 275 */
												BgL_yz00_1099 = BgL_za7za7_2766;
											}
										else
											{	/* Lalr/lalr.scm 275 */
												obj_t BgL_arg2184z00_2773;

												obj_t BgL_arg2185z00_2774;

												BgL_arg2184z00_2773 = CDR(BgL_lz00_2765);
												{	/* Lalr/lalr.scm 275 */
													obj_t BgL_arg2186z00_2775;

													{	/* Lalr/lalr.scm 275 */
														obj_t BgL_arg2187z00_2776;

														BgL_arg2187z00_2776 = CAR(BgL_lz00_2765);
														BgL_arg2186z00_2775 =
															VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
															CINT(BgL_arg2187z00_2776));
													}
													BgL_arg2185z00_2774 =
														BGl_sunionz00zz__lalr_utilz00(BgL_arg2186z00_2775,
														BgL_za7za7_2766);
												}
												{
													obj_t BgL_za7za7_4730;

													obj_t BgL_lz00_4729;

													BgL_lz00_4729 = BgL_arg2184z00_2773;
													BgL_za7za7_4730 = BgL_arg2185z00_2774;
													BgL_za7za7_2766 = BgL_za7za7_4730;
													BgL_lz00_2765 = BgL_lz00_4729;
													goto BgL_loop3z00_2764;
												}
											}
									}
									{	/* Lalr/lalr.scm 275 */

										if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_xz00_1098,
												BgL_yz00_1099))
											{
												long BgL_iz00_4733;

												BgL_iz00_4733 = (BgL_iz00_1094 + ((long) 1));
												BgL_iz00_1094 = BgL_iz00_4733;
												goto BgL_zc3anonymousza32177ze3z83_1096;
											}
										else
											{	/* Lalr/lalr.scm 280 */
												VECTOR_SET(BGl_firstsz00zz__lalr_globalz00,
													(int) (BgL_iz00_1094), BgL_yz00_1099);
												{
													bool_t BgL_contz00_4739;

													long BgL_iz00_4737;

													BgL_iz00_4737 = (BgL_iz00_1094 + ((long) 1));
													BgL_contz00_4739 = ((bool_t) 1);
													BgL_contz00_1095 = BgL_contz00_4739;
													BgL_iz00_1094 = BgL_iz00_4737;
													goto BgL_zc3anonymousza32177ze3z83_1096;
												}
											}
									}
								}
							}
					}
				else
					{	/* Lalr/lalr.scm 270 */
						((bool_t) 0);
					}
			}
			{
				long BgL_iz00_1116;

				BgL_iz00_1116 = ((long) 0);
			BgL_zc3anonymousza32188ze3z83_1117:
				if ((BgL_iz00_1116 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 287 */
						VECTOR_SET(BGl_firstsz00zz__lalr_globalz00,
							(int) (BgL_iz00_1116),
							BGl_sinsertz00zz__lalr_utilz00(BINT(BgL_iz00_1116),
								VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
									(int) (BgL_iz00_1116))));
						{
							long BgL_iz00_4749;

							BgL_iz00_4749 = (BgL_iz00_1116 + ((long) 1));
							BgL_iz00_1116 = BgL_iz00_4749;
							goto BgL_zc3anonymousza32188ze3z83_1117;
						}
					}
				else
					{	/* Lalr/lalr.scm 287 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-fderives */
	bool_t BGl_setzd2fderiveszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 299 */
			BGl_fderivesz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
			BGl_setzd2firstszd2zz__lalr_expandz00();
			{
				long BgL_iz00_1124;

				BgL_iz00_1124 = ((long) 0);
			BgL_zc3anonymousza32193ze3z83_1125:
				if ((BgL_iz00_1124 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 306 */
						obj_t BgL_xz00_1127;

						{	/* Lalr/lalr.scm 306 */
							obj_t BgL_g1920z00_1129;

							BgL_g1920z00_1129 =
								VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
								(int) (BgL_iz00_1124));
							{
								obj_t BgL_lz00_2825;

								obj_t BgL_fdz00_2826;

								BgL_lz00_2825 = BgL_g1920z00_1129;
								BgL_fdz00_2826 = BNIL;
							BgL_loop2z00_2824:
								if (NULLP(BgL_lz00_2825))
									{	/* Lalr/lalr.scm 306 */
										BgL_xz00_1127 = BgL_fdz00_2826;
									}
								else
									{	/* Lalr/lalr.scm 306 */
										obj_t BgL_arg2198z00_2833;

										obj_t BgL_arg2199z00_2834;

										BgL_arg2198z00_2833 = CDR(BgL_lz00_2825);
										{	/* Lalr/lalr.scm 306 */
											obj_t BgL_arg2200z00_2835;

											{	/* Lalr/lalr.scm 306 */
												obj_t BgL_arg2203z00_2836;

												BgL_arg2203z00_2836 = CAR(BgL_lz00_2825);
												BgL_arg2200z00_2835 =
													VECTOR_REF(BGl_derivesz00zz__lalr_globalz00,
													CINT(BgL_arg2203z00_2836));
											}
											BgL_arg2199z00_2834 =
												BGl_sunionz00zz__lalr_utilz00(BgL_arg2200z00_2835,
												BgL_fdz00_2826);
										}
										{
											obj_t BgL_fdz00_4767;

											obj_t BgL_lz00_4766;

											BgL_lz00_4766 = BgL_arg2198z00_2833;
											BgL_fdz00_4767 = BgL_arg2199z00_2834;
											BgL_fdz00_2826 = BgL_fdz00_4767;
											BgL_lz00_2825 = BgL_lz00_4766;
											goto BgL_loop2z00_2824;
										}
									}
							}
						}
						VECTOR_SET(BGl_fderivesz00zz__lalr_globalz00,
							(int) (BgL_iz00_1124), BgL_xz00_1127);
						{
							long BgL_iz00_4770;

							BgL_iz00_4770 = (BgL_iz00_1124 + ((long) 1));
							BgL_iz00_1124 = BgL_iz00_4770;
							goto BgL_zc3anonymousza32193ze3z83_1125;
						}
					}
				else
					{	/* Lalr/lalr.scm 305 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* closure */
	obj_t BGl_closurez00zz__lalr_expandz00(obj_t BgL_corez00_6)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 318 */
			{	/* Lalr/lalr.scm 320 */
				obj_t BgL_rulesetz00_1142;

				BgL_rulesetz00_1142 =
					make_vector(CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
				{
					obj_t BgL_cspz00_1144;

					BgL_cspz00_1144 = BgL_corez00_6;
				BgL_zc3anonymousza32204ze3z83_1145:
					if (NULLP(BgL_cspz00_1144))
						{	/* Lalr/lalr.scm 323 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 324 */
							obj_t BgL_symz00_1147;

							{	/* Lalr/lalr.scm 324 */
								obj_t BgL_arg2214z00_1160;

								BgL_arg2214z00_1160 = CAR(BgL_cspz00_1144);
								BgL_symz00_1147 =
									VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
									CINT(BgL_arg2214z00_1160));
							}
							{	/* Lalr/lalr.scm 325 */
								bool_t BgL_testz00_4779;

								if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(((long) -1)),
										BgL_symz00_1147))
									{	/* Lalr/lalr.scm 325 */
										BgL_testz00_4779 =
											BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_symz00_1147,
											BGl_nvarsz00zz__lalr_globalz00, BNIL);
									}
								else
									{	/* Lalr/lalr.scm 325 */
										BgL_testz00_4779 = ((bool_t) 0);
									}
								if (BgL_testz00_4779)
									{	/* Lalr/lalr.scm 326 */
										obj_t BgL_g1922z00_1149;

										BgL_g1922z00_1149 =
											VECTOR_REF(BGl_fderivesz00zz__lalr_globalz00,
											CINT(BgL_symz00_1147));
										{
											obj_t BgL_dspz00_2876;

											BgL_dspz00_2876 = BgL_g1922z00_1149;
										BgL_loop2z00_2875:
											if (NULLP(BgL_dspz00_2876))
												{	/* Lalr/lalr.scm 326 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 326 */
													{	/* Lalr/lalr.scm 326 */
														obj_t BgL_arg2209z00_2881;

														BgL_arg2209z00_2881 = CAR(BgL_dspz00_2876);
														VECTOR_SET(BgL_rulesetz00_1142,
															CINT(BgL_arg2209z00_2881), BTRUE);
													}
													{
														obj_t BgL_dspz00_4791;

														BgL_dspz00_4791 = CDR(BgL_dspz00_2876);
														BgL_dspz00_2876 = BgL_dspz00_4791;
														goto BgL_loop2z00_2875;
													}
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 325 */
										((bool_t) 0);
									}
							}
							{
								obj_t BgL_cspz00_4793;

								BgL_cspz00_4793 = CDR(BgL_cspz00_1144);
								BgL_cspz00_1144 = BgL_cspz00_4793;
								goto BgL_zc3anonymousza32204ze3z83_1145;
							}
						}
				}
				{
					long BgL_rulenoz00_1164;

					obj_t BgL_cspz00_1165;

					obj_t BgL_itemsetvz00_1166;

					BgL_rulenoz00_1164 = ((long) 1);
					BgL_cspz00_1165 = BgL_corez00_6;
					BgL_itemsetvz00_1166 = BNIL;
				BgL_zc3anonymousza32215ze3z83_1167:
					if (
						(BgL_rulenoz00_1164 < (long) CINT(BGl_nrulesz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 335 */
							bool_t BgL_testz00_4798;

							{	/* Lalr/lalr.scm 335 */
								int BgL_kz00_2912;

								BgL_kz00_2912 = (int) (BgL_rulenoz00_1164);
								BgL_testz00_4798 =
									CBOOL(VECTOR_REF(BgL_rulesetz00_1142, BgL_kz00_2912));
							}
							if (BgL_testz00_4798)
								{	/* Lalr/lalr.scm 336 */
									obj_t BgL_itemnoz00_1170;

									BgL_itemnoz00_1170 =
										VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
										(int) (BgL_rulenoz00_1164));
									{
										obj_t BgL_cz00_1172;

										obj_t BgL_itemsetv2z00_1173;

										BgL_cz00_1172 = BgL_cspz00_1165;
										BgL_itemsetv2z00_1173 = BgL_itemsetvz00_1166;
									BgL_zc3anonymousza32218ze3z83_1174:
										{	/* Lalr/lalr.scm 338 */
											bool_t BgL_testz00_4804;

											if (PAIRP(BgL_cz00_1172))
												{	/* Lalr/lalr.scm 338 */
													BgL_testz00_4804 =
														(
														(long) CINT(CAR(BgL_cz00_1172)) <
														(long) CINT(BgL_itemnoz00_1170));
												}
											else
												{	/* Lalr/lalr.scm 338 */
													BgL_testz00_4804 = ((bool_t) 0);
												}
											if (BgL_testz00_4804)
												{	/* Lalr/lalr.scm 340 */
													obj_t BgL_arg2222z00_1176;

													obj_t BgL_arg2223z00_1177;

													BgL_arg2222z00_1176 = CDR(BgL_cz00_1172);
													BgL_arg2223z00_1177 =
														MAKE_PAIR(CAR(BgL_cz00_1172),
														BgL_itemsetv2z00_1173);
													{
														obj_t BgL_itemsetv2z00_4815;

														obj_t BgL_cz00_4814;

														BgL_cz00_4814 = BgL_arg2222z00_1176;
														BgL_itemsetv2z00_4815 = BgL_arg2223z00_1177;
														BgL_itemsetv2z00_1173 = BgL_itemsetv2z00_4815;
														BgL_cz00_1172 = BgL_cz00_4814;
														goto BgL_zc3anonymousza32218ze3z83_1174;
													}
												}
											else
												{	/* Lalr/lalr.scm 341 */
													long BgL_arg2226z00_1179;

													obj_t BgL_arg2227z00_1180;

													BgL_arg2226z00_1179 =
														(BgL_rulenoz00_1164 + ((long) 1));
													BgL_arg2227z00_1180 =
														MAKE_PAIR(BgL_itemnoz00_1170,
														BgL_itemsetv2z00_1173);
													{
														obj_t BgL_itemsetvz00_4820;

														obj_t BgL_cspz00_4819;

														long BgL_rulenoz00_4818;

														BgL_rulenoz00_4818 = BgL_arg2226z00_1179;
														BgL_cspz00_4819 = BgL_cz00_1172;
														BgL_itemsetvz00_4820 = BgL_arg2227z00_1180;
														BgL_itemsetvz00_1166 = BgL_itemsetvz00_4820;
														BgL_cspz00_1165 = BgL_cspz00_4819;
														BgL_rulenoz00_1164 = BgL_rulenoz00_4818;
														goto BgL_zc3anonymousza32215ze3z83_1167;
													}
												}
										}
									}
								}
							else
								{
									long BgL_rulenoz00_4821;

									BgL_rulenoz00_4821 = (BgL_rulenoz00_1164 + ((long) 1));
									BgL_rulenoz00_1164 = BgL_rulenoz00_4821;
									goto BgL_zc3anonymousza32215ze3z83_1167;
								}
						}
					else
						{
							obj_t BgL_cz00_2926;

							obj_t BgL_itemsetv2z00_2927;

							BgL_cz00_2926 = BgL_cspz00_1165;
							BgL_itemsetv2z00_2927 = BgL_itemsetvz00_1166;
						BgL_loop2z00_2925:
							if (PAIRP(BgL_cz00_2926))
								{	/* Lalr/lalr.scm 343 */
									obj_t BgL_arg2237z00_2933;

									obj_t BgL_arg2238z00_2934;

									BgL_arg2237z00_2933 = CDR(BgL_cz00_2926);
									BgL_arg2238z00_2934 =
										MAKE_PAIR(CAR(BgL_cz00_2926), BgL_itemsetv2z00_2927);
									{
										obj_t BgL_itemsetv2z00_4829;

										obj_t BgL_cz00_4828;

										BgL_cz00_4828 = BgL_arg2237z00_2933;
										BgL_itemsetv2z00_4829 = BgL_arg2238z00_2934;
										BgL_itemsetv2z00_2927 = BgL_itemsetv2z00_4829;
										BgL_cz00_2926 = BgL_cz00_4828;
										goto BgL_loop2z00_2925;
									}
								}
							else
								{	/* Lalr/lalr.scm 343 */
									return bgl_reverse(BgL_itemsetv2z00_2927);
								}
						}
				}
			}
		}
	}



/* allocate-item-sets */
	obj_t BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 350 */
			BGl_kernelzd2basezd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nsymsz00zz__lalr_globalz00), BINT(((long) 0)));
			return (BGl_kernelzd2endzd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nsymsz00zz__lalr_globalz00), BFALSE), BUNSPEC);
		}
	}



/* allocate-storage */
	obj_t BGl_allocatezd2storagezd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 355 */
			BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00();
			{	/* Lalr/lalr.scm 357 */
				long BgL_arg2240z00_1195;

				BgL_arg2240z00_1195 =
					((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1));
				return (BGl_redzd2setzd2zz__lalr_globalz00 =
					make_vector((int) (BgL_arg2240z00_1195), BINT(((long) 0))), BUNSPEC);
		}}
	}



/* initialize-states */
	obj_t BGl_initializa7ezd2statesz75zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 362 */
			{	/* Lalr/lalr.scm 363 */
				obj_t BgL_pz00_1197;

				BgL_pz00_1197 = make_vector((int) (((long) 4)), BINT(((long) 0)));
				VECTOR_SET(BgL_pz00_1197, (int) (((long) 0)), BINT(((long) 0)));
				VECTOR_SET(BgL_pz00_1197, (int) (((long) 1)), BFALSE);
				VECTOR_SET(BgL_pz00_1197, (int) (((long) 2)), BINT(((long) 1)));
				VECTOR_SET(BgL_pz00_1197,
					(int) (((long) 3)), BGl_list3042z00zz__lalr_expandz00);
				{	/* Lalr/lalr.scm 369 */
					obj_t BgL_list2243z00_1198;

					BgL_list2243z00_1198 = MAKE_PAIR(BgL_pz00_1197, BNIL);
					BGl_firstzd2statezd2zz__lalr_globalz00 = BgL_list2243z00_1198;
				}
				BGl_lastzd2statezd2zz__lalr_globalz00 =
					BGl_firstzd2statezd2zz__lalr_globalz00;
				return (BGl_nstatesz00zz__lalr_globalz00 = BINT(((long) 1)), BUNSPEC);
		}}
	}



/* generate-states */
	bool_t BGl_generatezd2stateszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 375 */
			BGl_allocatezd2storagezd2zz__lalr_expandz00();
			BGl_setzd2fderiveszd2zz__lalr_expandz00();
			BGl_initializa7ezd2statesz75zz__lalr_expandz00();
			{
				obj_t BgL_thiszd2statezd2_1200;

				BgL_thiszd2statezd2_1200 = BGl_firstzd2statezd2zz__lalr_globalz00;
			BgL_zc3anonymousza32244ze3z83_1201:
				if (PAIRP(BgL_thiszd2statezd2_1200))
					{	/* Lalr/lalr.scm 381 */
						obj_t BgL_xz00_1203;

						BgL_xz00_1203 = CAR(BgL_thiszd2statezd2_1200);
						{	/* Lalr/lalr.scm 381 */
							obj_t BgL_isz00_1204;

							BgL_isz00_1204 =
								BGl_closurez00zz__lalr_expandz00(VECTOR_REF(BgL_xz00_1203,
									(int) (((long) 3))));
							{	/* Lalr/lalr.scm 382 */

								BGl_savezd2reductionszd2zz__lalr_expandz00(BgL_xz00_1203,
									BgL_isz00_1204);
								BGl_newzd2itemsetszd2zz__lalr_expandz00(BgL_isz00_1204);
								BGl_appendzd2stateszd2zz__lalr_expandz00();
								if (
									((long) CINT(BGl_nshiftsz00zz__lalr_globalz00) > ((long) 0)))
									{	/* Lalr/lalr.scm 386 */
										BGl_savezd2shiftszd2zz__lalr_expandz00(BgL_xz00_1203);
									}
								else
									{	/* Lalr/lalr.scm 386 */
										BFALSE;
									}
								{
									obj_t BgL_thiszd2statezd2_4873;

									BgL_thiszd2statezd2_4873 = CDR(BgL_thiszd2statezd2_1200);
									BgL_thiszd2statezd2_1200 = BgL_thiszd2statezd2_4873;
									goto BgL_zc3anonymousza32244ze3z83_1201;
								}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 380 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* new-itemsets */
	obj_t BGl_newzd2itemsetszd2zz__lalr_expandz00(obj_t BgL_itemsetz00_7)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 394 */
			BGl_shiftzd2symbolzd2zz__lalr_globalz00 = BNIL;
			{
				long BgL_iz00_2979;

				BgL_iz00_2979 = ((long) 0);
			BgL_loopz00_2978:
				if ((BgL_iz00_2979 < (long) CINT(BGl_nsymsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 397 */
						VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00,
							(int) (BgL_iz00_2979), BNIL);
						{
							long BgL_iz00_4880;

							BgL_iz00_4880 = (BgL_iz00_2979 + ((long) 1));
							BgL_iz00_2979 = BgL_iz00_4880;
							goto BgL_loopz00_2978;
						}
					}
				else
					{	/* Lalr/lalr.scm 397 */
						((bool_t) 0);
					}
			}
			{
				obj_t BgL_ispz00_1216;

				BgL_ispz00_1216 = BgL_itemsetz00_7;
			BgL_zc3anonymousza32252ze3z83_1217:
				if (PAIRP(BgL_ispz00_1216))
					{	/* Lalr/lalr.scm 405 */
						obj_t BgL_iz00_1219;

						BgL_iz00_1219 = CAR(BgL_ispz00_1216);
						{	/* Lalr/lalr.scm 405 */
							obj_t BgL_symz00_1220;

							BgL_symz00_1220 =
								VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, CINT(BgL_iz00_1219));
							{	/* Lalr/lalr.scm 406 */

								if (((long) CINT(BgL_symz00_1220) >= ((long) 0)))
									{	/* Lalr/lalr.scm 407 */
										BGl_shiftzd2symbolzd2zz__lalr_globalz00 =
											BGl_sinsertz00zz__lalr_utilz00(BgL_symz00_1220,
											BGl_shiftzd2symbolzd2zz__lalr_globalz00);
										{	/* Lalr/lalr.scm 410 */
											obj_t BgL_xz00_1222;

											BgL_xz00_1222 =
												VECTOR_REF(BGl_kernelzd2endzd2zz__lalr_globalz00,
												CINT(BgL_symz00_1220));
											if (NULLP(BgL_xz00_1222))
												{	/* Lalr/lalr.scm 411 */
													{	/* Lalr/lalr.scm 413 */
														obj_t BgL_arg2256z00_1224;

														{	/* Lalr/lalr.scm 413 */
															long BgL_arg2257z00_1225;

															BgL_arg2257z00_1225 =
																((long) CINT(BgL_iz00_1219) + ((long) 1));
															BgL_arg2256z00_1224 =
																MAKE_PAIR(BINT(BgL_arg2257z00_1225),
																BgL_xz00_1222);
														}
														VECTOR_SET(BGl_kernelzd2basezd2zz__lalr_globalz00,
															CINT(BgL_symz00_1220), BgL_arg2256z00_1224);
													}
													VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00,
														CINT(BgL_symz00_1220),
														VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
															CINT(BgL_symz00_1220)));
												}
											else
												{	/* Lalr/lalr.scm 411 */
													{	/* Lalr/lalr.scm 416 */
														obj_t BgL_arg2260z00_1227;

														{	/* Lalr/lalr.scm 416 */
															long BgL_arg2262z00_1228;

															BgL_arg2262z00_1228 =
																((long) CINT(BgL_iz00_1219) + ((long) 1));
															{	/* Lalr/lalr.scm 416 */
																obj_t BgL_list2263z00_1229;

																BgL_list2263z00_1229 =
																	MAKE_PAIR(BINT(BgL_arg2262z00_1228), BNIL);
																BgL_arg2260z00_1227 = BgL_list2263z00_1229;
														}}
														SET_CDR(BgL_xz00_1222, BgL_arg2260z00_1227);
													}
													VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00,
														CINT(BgL_symz00_1220), CDR(BgL_xz00_1222));
									}}}
								else
									{	/* Lalr/lalr.scm 407 */
										BFALSE;
									}
								{
									obj_t BgL_ispz00_4913;

									BgL_ispz00_4913 = CDR(BgL_ispz00_1216);
									BgL_ispz00_1216 = BgL_ispz00_4913;
									goto BgL_zc3anonymousza32252ze3z83_1217;
								}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 404 */
						((bool_t) 0);
					}
			}
			return (BGl_nshiftsz00zz__lalr_globalz00 =
				BINT(bgl_list_length(BGl_shiftzd2symbolzd2zz__lalr_globalz00)),
				BUNSPEC);
		}
	}



/* get-state */
	obj_t BGl_getzd2statezd2zz__lalr_expandz00(obj_t BgL_symz00_8)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 424 */
			{	/* Lalr/lalr.scm 425 */
				obj_t BgL_ispz00_1233;

				BgL_ispz00_1233 =
					VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
					CINT(BgL_symz00_8));
				{	/* Lalr/lalr.scm 425 */
					long BgL_nz00_1234;

					BgL_nz00_1234 = bgl_list_length(BgL_ispz00_1233);
					{	/* Lalr/lalr.scm 426 */
						long BgL_keyz00_1235;

						{
							obj_t BgL_isp1z00_3043;

							long BgL_kz00_3044;

							BgL_isp1z00_3043 = BgL_ispz00_1233;
							BgL_kz00_3044 = ((long) 0);
						BgL_loopz00_3042:
							if (NULLP(BgL_isp1z00_3043))
								{	/* Lalr/lalr.scm 427 */
									BgL_keyz00_1235 =
										BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_kz00_3044,
										(long) CINT(BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00));
								}
							else
								{	/* Lalr/lalr.scm 427 */
									obj_t BgL_arg2296z00_3050;

									long BgL_arg2297z00_3051;

									BgL_arg2296z00_3050 = CDR(BgL_isp1z00_3043);
									{	/* Lalr/lalr.scm 427 */
										long BgL_auxz00_4925;

										{	/* Lalr/lalr.scm 427 */
											obj_t BgL_pairz00_3055;

											BgL_pairz00_3055 = BgL_isp1z00_3043;
											BgL_auxz00_4925 = (long) CINT(CAR(BgL_pairz00_3055));
										}
										BgL_arg2297z00_3051 = (BgL_kz00_3044 + BgL_auxz00_4925);
									}
									{
										long BgL_kz00_4930;

										obj_t BgL_isp1z00_4929;

										BgL_isp1z00_4929 = BgL_arg2296z00_3050;
										BgL_kz00_4930 = BgL_arg2297z00_3051;
										BgL_kz00_3044 = BgL_kz00_4930;
										BgL_isp1z00_3043 = BgL_isp1z00_4929;
										goto BgL_loopz00_3042;
									}
								}
						}
						{	/* Lalr/lalr.scm 427 */
							obj_t BgL_spz00_1236;

							BgL_spz00_1236 =
								VECTOR_REF(BGl_statezd2tablezd2zz__lalr_globalz00,
								(int) (BgL_keyz00_1235));
							{	/* Lalr/lalr.scm 431 */

								if (NULLP(BgL_spz00_1236))
									{	/* Lalr/lalr.scm 433 */
										obj_t BgL_xz00_1238;

										BgL_xz00_1238 =
											BGl_newzd2statezd2zz__lalr_expandz00(BgL_symz00_8);
										{	/* Lalr/lalr.scm 434 */
											obj_t BgL_arg2267z00_1239;

											{	/* Lalr/lalr.scm 434 */
												obj_t BgL_list2268z00_1240;

												BgL_list2268z00_1240 = MAKE_PAIR(BgL_xz00_1238, BNIL);
												BgL_arg2267z00_1239 = BgL_list2268z00_1240;
											}
											VECTOR_SET(BGl_statezd2tablezd2zz__lalr_globalz00,
												(int) (BgL_keyz00_1235), BgL_arg2267z00_1239);
										}
										return VECTOR_REF(BgL_xz00_1238, (int) (((long) 0)));
									}
								else
									{
										obj_t BgL_sp1z00_1242;

										BgL_sp1z00_1242 = BgL_spz00_1236;
									BgL_zc3anonymousza32269ze3z83_1243:
										{	/* Lalr/lalr.scm 437 */
											bool_t BgL_testz00_4941;

											if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_nz00_1234),
													VECTOR_REF(CAR(BgL_sp1z00_1242), (int) (((long) 2)))))
												{	/* Lalr/lalr.scm 438 */
													obj_t BgL_g1924z00_1254;

													BgL_g1924z00_1254 =
														VECTOR_REF(CAR(BgL_sp1z00_1242),
														(int) (((long) 3)));
													{
														obj_t BgL_i1z00_3095;

														obj_t BgL_tz00_3096;

														BgL_i1z00_3095 = BgL_ispz00_1233;
														BgL_tz00_3096 = BgL_g1924z00_1254;
													BgL_loop2z00_3094:
														{	/* Lalr/lalr.scm 438 */
															bool_t BgL_testz00_4951;

															if (PAIRP(BgL_i1z00_3095))
																{	/* Lalr/lalr.scm 438 */
																	BgL_testz00_4951 =
																		BGl_2zd3zd3zz__r4_numbers_6_5z00(CAR
																		(BgL_i1z00_3095), CAR(BgL_tz00_3096));
																}
															else
																{	/* Lalr/lalr.scm 438 */
																	BgL_testz00_4951 = ((bool_t) 0);
																}
															if (BgL_testz00_4951)
																{
																	obj_t BgL_tz00_4959;

																	obj_t BgL_i1z00_4957;

																	BgL_i1z00_4957 = CDR(BgL_i1z00_3095);
																	BgL_tz00_4959 = CDR(BgL_tz00_3096);
																	BgL_tz00_3096 = BgL_tz00_4959;
																	BgL_i1z00_3095 = BgL_i1z00_4957;
																	goto BgL_loop2z00_3094;
																}
															else
																{	/* Lalr/lalr.scm 438 */
																	BgL_testz00_4941 = NULLP(BgL_i1z00_3095);
																}
														}
													}
												}
											else
												{	/* Lalr/lalr.scm 437 */
													BgL_testz00_4941 = ((bool_t) 0);
												}
											if (BgL_testz00_4941)
												{	/* Lalr/lalr.scm 437 */
													return
														VECTOR_REF(CAR(BgL_sp1z00_1242),
														(int) (((long) 0)));
												}
											else
												{	/* Lalr/lalr.scm 437 */
													if (NULLP(CDR(BgL_sp1z00_1242)))
														{	/* Lalr/lalr.scm 446 */
															obj_t BgL_xz00_1248;

															BgL_xz00_1248 =
																BGl_newzd2statezd2zz__lalr_expandz00
																(BgL_symz00_8);
															{	/* Lalr/lalr.scm 447 */
																obj_t BgL_arg2274z00_1249;

																{	/* Lalr/lalr.scm 447 */
																	obj_t BgL_list2275z00_1250;

																	BgL_list2275z00_1250 =
																		MAKE_PAIR(BgL_xz00_1248, BNIL);
																	BgL_arg2274z00_1249 = BgL_list2275z00_1250;
																}
																SET_CDR(BgL_sp1z00_1242, BgL_arg2274z00_1249);
															}
															return
																VECTOR_REF(BgL_xz00_1248, (int) (((long) 0)));
														}
													else
														{
															obj_t BgL_sp1z00_4973;

															BgL_sp1z00_4973 = CDR(BgL_sp1z00_1242);
															BgL_sp1z00_1242 = BgL_sp1z00_4973;
															goto BgL_zc3anonymousza32269ze3z83_1243;
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



/* new-state */
	obj_t BGl_newzd2statezd2zz__lalr_expandz00(obj_t BgL_symz00_9)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 452 */
			{	/* Lalr/lalr.scm 453 */
				obj_t BgL_ispz00_1281;

				BgL_ispz00_1281 =
					VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
					CINT(BgL_symz00_9));
				{	/* Lalr/lalr.scm 453 */
					long BgL_nz00_1282;

					BgL_nz00_1282 = bgl_list_length(BgL_ispz00_1281);
					{	/* Lalr/lalr.scm 454 */
						obj_t BgL_pz00_1283;

						BgL_pz00_1283 = make_vector((int) (((long) 4)), BINT(((long) 0)));
						{	/* Lalr/lalr.scm 455 */

							VECTOR_SET(BgL_pz00_1283,
								(int) (((long) 0)), BGl_nstatesz00zz__lalr_globalz00);
							VECTOR_SET(BgL_pz00_1283, (int) (((long) 1)), BgL_symz00_9);
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_symz00_9,
									BGl_nvarsz00zz__lalr_globalz00))
								{	/* Lalr/lalr.scm 458 */
									BGl_finalzd2statezd2zz__lalr_globalz00 =
										BGl_nstatesz00zz__lalr_globalz00;
								}
							else
								{	/* Lalr/lalr.scm 458 */
									BFALSE;
								}
							VECTOR_SET(BgL_pz00_1283,
								(int) (((long) 2)), BINT(BgL_nz00_1282));
							VECTOR_SET(BgL_pz00_1283, (int) (((long) 3)), BgL_ispz00_1281);
							{	/* Lalr/lalr.scm 461 */
								obj_t BgL_arg2302z00_1285;

								{	/* Lalr/lalr.scm 461 */
									obj_t BgL_list2303z00_1286;

									BgL_list2303z00_1286 = MAKE_PAIR(BgL_pz00_1283, BNIL);
									BgL_arg2302z00_1285 = BgL_list2303z00_1286;
								}
								SET_CDR(BGl_lastzd2statezd2zz__lalr_globalz00,
									BgL_arg2302z00_1285);
							}
							BGl_lastzd2statezd2zz__lalr_globalz00 =
								CDR(BGl_lastzd2statezd2zz__lalr_globalz00);
							{	/* Lalr/lalr.scm 463 */
								long BgL_za71za7_3172;

								BgL_za71za7_3172 =
									(long) CINT(BGl_nstatesz00zz__lalr_globalz00);
								BGl_nstatesz00zz__lalr_globalz00 =
									BINT((BgL_za71za7_3172 + ((long) 1)));
							}
							return BgL_pz00_1283;
						}
					}
				}
			}
		}
	}



/* append-states */
	obj_t BGl_appendzd2stateszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 469 */
			return (BGl_shiftzd2setzd2zz__lalr_globalz00 =
				BGl_loopz72z72z00zz__lalr_expandz00
				(BGl_shiftzd2symbolzd2zz__lalr_globalz00), BUNSPEC);
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__lalr_expandz00(obj_t BgL_lz00_1288)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 471 */
			if (NULLP(BgL_lz00_1288))
				{	/* Lalr/lalr.scm 472 */
					return BNIL;
				}
			else
				{	/* Lalr/lalr.scm 472 */
					return
						MAKE_PAIR(BGl_getzd2statezd2zz__lalr_expandz00(CAR(BgL_lz00_1288)),
						BGl_loopz72z72z00zz__lalr_expandz00(CDR(BgL_lz00_1288)));
				}
		}
	}



/* save-shifts */
	obj_t BGl_savezd2shiftszd2zz__lalr_expandz00(obj_t BgL_corez00_10)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 478 */
			{	/* Lalr/lalr.scm 479 */
				obj_t BgL_pz00_1296;

				BgL_pz00_1296 = make_vector((int) (((long) 3)), BINT(((long) 0)));
				VECTOR_SET(BgL_pz00_1296,
					(int) (((long) 0)), VECTOR_REF(BgL_corez00_10, (int) (((long) 0))));
				VECTOR_SET(BgL_pz00_1296,
					(int) (((long) 1)), BGl_nshiftsz00zz__lalr_globalz00);
				VECTOR_SET(BgL_pz00_1296,
					(int) (((long) 2)), BGl_shiftzd2setzd2zz__lalr_globalz00);
				if (CBOOL(BGl_lastzd2shiftzd2zz__lalr_globalz00))
					{	/* Lalr/lalr.scm 483 */
						{	/* Lalr/lalr.scm 485 */
							obj_t BgL_arg2312z00_1299;

							{	/* Lalr/lalr.scm 485 */
								obj_t BgL_list2313z00_1300;

								BgL_list2313z00_1300 = MAKE_PAIR(BgL_pz00_1296, BNIL);
								BgL_arg2312z00_1299 = BgL_list2313z00_1300;
							}
							SET_CDR(BGl_lastzd2shiftzd2zz__lalr_globalz00,
								BgL_arg2312z00_1299);
						}
						return (BGl_lastzd2shiftzd2zz__lalr_globalz00 =
							CDR(BGl_lastzd2shiftzd2zz__lalr_globalz00), BUNSPEC);
					}
				else
					{	/* Lalr/lalr.scm 483 */
						{	/* Lalr/lalr.scm 488 */
							obj_t BgL_list2314z00_1301;

							BgL_list2314z00_1301 = MAKE_PAIR(BgL_pz00_1296, BNIL);
							BGl_firstzd2shiftzd2zz__lalr_globalz00 = BgL_list2314z00_1301;
						}
						return (BGl_lastzd2shiftzd2zz__lalr_globalz00 =
							BGl_firstzd2shiftzd2zz__lalr_globalz00, BUNSPEC);
					}
			}
		}
	}



/* save-reductions */
	obj_t BGl_savezd2reductionszd2zz__lalr_expandz00(obj_t BgL_corez00_11,
		obj_t BgL_itemsetz00_12)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 491 */
			{	/* Lalr/lalr.scm 492 */
				obj_t BgL_rsz00_1302;

				BgL_rsz00_1302 = BGl_loopz72z72zz__lalr_expandz00(BgL_itemsetz00_12);
				if (PAIRP(BgL_rsz00_1302))
					{	/* Lalr/lalr.scm 500 */
						obj_t BgL_pz00_1304;

						BgL_pz00_1304 = make_vector((int) (((long) 3)), BINT(((long) 0)));
						VECTOR_SET(BgL_pz00_1304,
							(int) (((long) 0)),
							VECTOR_REF(BgL_corez00_11, (int) (((long) 0))));
						{	/* Lalr/lalr.scm 502 */
							long BgL_arg2319z00_1308;

							BgL_arg2319z00_1308 = bgl_list_length(BgL_rsz00_1302);
							VECTOR_SET(BgL_pz00_1304,
								(int) (((long) 1)), BINT(BgL_arg2319z00_1308));
						}
						VECTOR_SET(BgL_pz00_1304, (int) (((long) 2)), BgL_rsz00_1302);
						if (CBOOL(BGl_lastzd2reductionzd2zz__lalr_globalz00))
							{	/* Lalr/lalr.scm 504 */
								{	/* Lalr/lalr.scm 506 */
									obj_t BgL_arg2320z00_1309;

									{	/* Lalr/lalr.scm 506 */
										obj_t BgL_list2321z00_1310;

										BgL_list2321z00_1310 = MAKE_PAIR(BgL_pz00_1304, BNIL);
										BgL_arg2320z00_1309 = BgL_list2321z00_1310;
									}
									SET_CDR(BGl_lastzd2reductionzd2zz__lalr_globalz00,
										BgL_arg2320z00_1309);
								}
								return (BGl_lastzd2reductionzd2zz__lalr_globalz00 =
									CDR(BGl_lastzd2reductionzd2zz__lalr_globalz00), BUNSPEC);
							}
						else
							{	/* Lalr/lalr.scm 504 */
								{	/* Lalr/lalr.scm 509 */
									obj_t BgL_list2322z00_1311;

									BgL_list2322z00_1311 = MAKE_PAIR(BgL_pz00_1304, BNIL);
									BGl_firstzd2reductionzd2zz__lalr_globalz00 =
										BgL_list2322z00_1311;
								}
								return (BGl_lastzd2reductionzd2zz__lalr_globalz00 =
									BGl_firstzd2reductionzd2zz__lalr_globalz00, BUNSPEC);
							}
					}
				else
					{	/* Lalr/lalr.scm 499 */
						return BFALSE;
					}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__lalr_expandz00(obj_t BgL_lz00_1313)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 492 */
		BGl_loopz72z72zz__lalr_expandz00:
			if (NULLP(BgL_lz00_1313))
				{	/* Lalr/lalr.scm 493 */
					return BNIL;
				}
			else
				{	/* Lalr/lalr.scm 495 */
					obj_t BgL_itemz00_1316;

					{	/* Lalr/lalr.scm 495 */
						obj_t BgL_arg2330z00_1322;

						BgL_arg2330z00_1322 = CAR(BgL_lz00_1313);
						BgL_itemz00_1316 =
							VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
							CINT(BgL_arg2330z00_1322));
					}
					if (((long) CINT(BgL_itemz00_1316) < ((long) 0)))
						{	/* Lalr/lalr.scm 497 */
							long BgL_arg2326z00_1318;

							obj_t BgL_arg2327z00_1319;

							BgL_arg2326z00_1318 = NEG((long) CINT(BgL_itemz00_1316));
							BgL_arg2327z00_1319 =
								BGl_loopz72z72zz__lalr_expandz00(CDR(BgL_lz00_1313));
							return MAKE_PAIR(BINT(BgL_arg2326z00_1318), BgL_arg2327z00_1319);
						}
					else
						{
							obj_t BgL_lz00_5059;

							BgL_lz00_5059 = CDR(BgL_lz00_1313);
							BgL_lz00_1313 = BgL_lz00_5059;
							goto BGl_loopz72z72zz__lalr_expandz00;
						}
				}
		}
	}



/* lalr */
	bool_t BGl_lalrz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 515 */
			{	/* Lalr/lalr.scm 516 */
				long BgL_arg2332z00_1325;

				{	/* Lalr/lalr.scm 516 */
					long BgL_auxz00_5061;

					BgL_auxz00_5061 = (long) CINT(BGl_ntermsz00zz__lalr_globalz00);
					BgL_arg2332z00_1325 = (BgL_auxz00_5061 / ((long) 28));
				}
				BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00 =
					BINT((((long) 1) + BgL_arg2332z00_1325));
			}
			BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00();
			BGl_setzd2shiftzd2tablez00zz__lalr_expandz00();
			BGl_setzd2reductionzd2tablez00zz__lalr_expandz00();
			BGl_setzd2maxzd2rhsz00zz__lalr_expandz00();
			BGl_initializa7ezd2LAz75zz__lalr_expandz00();
			BGl_setzd2gotozd2mapz00zz__lalr_expandz00();
			BGl_initializa7ezd2Fz75zz__lalr_expandz00();
			BGl_buildzd2relationszd2zz__lalr_expandz00();
			BGl_digraphz00zz__lalr_expandz00(BGl_includesz00zz__lalr_globalz00);
			return BGl_computezd2lookaheadszd2zz__lalr_expandz00();
		}
	}



/* set-accessing-symbol */
	bool_t BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 528 */
			BGl_acceszd2symbolzd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1327;

				BgL_lz00_1327 = BGl_firstzd2statezd2zz__lalr_globalz00;
			BgL_zc3anonymousza32333ze3z83_1328:
				if (PAIRP(BgL_lz00_1327))
					{	/* Lalr/lalr.scm 532 */
						obj_t BgL_xz00_1330;

						BgL_xz00_1330 = CAR(BgL_lz00_1327);
						{	/* Lalr/lalr.scm 533 */
							obj_t BgL_arg2335z00_1331;

							obj_t BgL_arg2336z00_1332;

							BgL_arg2335z00_1331 =
								VECTOR_REF(BgL_xz00_1330, (int) (((long) 0)));
							BgL_arg2336z00_1332 =
								VECTOR_REF(BgL_xz00_1330, (int) (((long) 1)));
							VECTOR_SET(BGl_acceszd2symbolzd2zz__lalr_globalz00,
								CINT(BgL_arg2335z00_1331), BgL_arg2336z00_1332);
						}
						{
							obj_t BgL_lz00_5087;

							BgL_lz00_5087 = CDR(BgL_lz00_1327);
							BgL_lz00_1327 = BgL_lz00_5087;
							goto BgL_zc3anonymousza32333ze3z83_1328;
						}
					}
				else
					{	/* Lalr/lalr.scm 531 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-shift-table */
	bool_t BGl_setzd2shiftzd2tablez00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 536 */
			BGl_shiftzd2tablezd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1336;

				BgL_lz00_1336 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
			BgL_zc3anonymousza32338ze3z83_1337:
				if (PAIRP(BgL_lz00_1336))
					{	/* Lalr/lalr.scm 540 */
						obj_t BgL_xz00_1339;

						BgL_xz00_1339 = CAR(BgL_lz00_1336);
						{	/* Lalr/lalr.scm 541 */
							obj_t BgL_arg2340z00_1340;

							BgL_arg2340z00_1340 =
								VECTOR_REF(BgL_xz00_1339, (int) (((long) 0)));
							VECTOR_SET(BGl_shiftzd2tablezd2zz__lalr_globalz00,
								CINT(BgL_arg2340z00_1340), BgL_xz00_1339);
						}
						{
							obj_t BgL_lz00_5098;

							BgL_lz00_5098 = CDR(BgL_lz00_1336);
							BgL_lz00_1336 = BgL_lz00_5098;
							goto BgL_zc3anonymousza32338ze3z83_1337;
						}
					}
				else
					{	/* Lalr/lalr.scm 539 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-reduction-table */
	bool_t BGl_setzd2reductionzd2tablez00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 544 */
			BGl_reductionzd2tablezd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1344;

				BgL_lz00_1344 = BGl_firstzd2reductionzd2zz__lalr_globalz00;
			BgL_zc3anonymousza32342ze3z83_1345:
				if (PAIRP(BgL_lz00_1344))
					{	/* Lalr/lalr.scm 548 */
						obj_t BgL_xz00_1347;

						BgL_xz00_1347 = CAR(BgL_lz00_1344);
						{	/* Lalr/lalr.scm 549 */
							obj_t BgL_arg2344z00_1348;

							BgL_arg2344z00_1348 =
								VECTOR_REF(BgL_xz00_1347, (int) (((long) 0)));
							VECTOR_SET(BGl_reductionzd2tablezd2zz__lalr_globalz00,
								CINT(BgL_arg2344z00_1348), BgL_xz00_1347);
						}
						{
							obj_t BgL_lz00_5109;

							BgL_lz00_5109 = CDR(BgL_lz00_1344);
							BgL_lz00_1344 = BgL_lz00_5109;
							goto BgL_zc3anonymousza32342ze3z83_1345;
						}
					}
				else
					{	/* Lalr/lalr.scm 547 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-max-rhs */
	obj_t BGl_setzd2maxzd2rhsz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 552 */
			{
				long BgL_pz00_1352;

				obj_t BgL_curmaxz00_1353;

				long BgL_lengthz00_1354;

				BgL_pz00_1352 = ((long) 0);
				BgL_curmaxz00_1353 = BINT(((long) 0));
				BgL_lengthz00_1354 = ((long) 0);
			BgL_zc3anonymousza32346ze3z83_1355:
				{	/* Lalr/lalr.scm 554 */
					obj_t BgL_xz00_1356;

					BgL_xz00_1356 =
						VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, (int) (BgL_pz00_1352));
					if (CBOOL(BgL_xz00_1356))
						{	/* Lalr/lalr.scm 555 */
							if (((long) CINT(BgL_xz00_1356) >= ((long) 0)))
								{
									long BgL_lengthz00_5120;

									long BgL_pz00_5118;

									BgL_pz00_5118 = (BgL_pz00_1352 + ((long) 1));
									BgL_lengthz00_5120 = (BgL_lengthz00_1354 + ((long) 1));
									BgL_lengthz00_1354 = BgL_lengthz00_5120;
									BgL_pz00_1352 = BgL_pz00_5118;
									goto BgL_zc3anonymousza32346ze3z83_1355;
								}
							else
								{
									long BgL_lengthz00_5127;

									obj_t BgL_curmaxz00_5124;

									long BgL_pz00_5122;

									BgL_pz00_5122 = (BgL_pz00_1352 + ((long) 1));
									BgL_curmaxz00_5124 =
										BGl_2maxz00zz__r4_numbers_6_5z00(BgL_curmaxz00_1353,
										BINT(BgL_lengthz00_1354));
									BgL_lengthz00_5127 = ((long) 0);
									BgL_lengthz00_1354 = BgL_lengthz00_5127;
									BgL_curmaxz00_1353 = BgL_curmaxz00_5124;
									BgL_pz00_1352 = BgL_pz00_5122;
									goto BgL_zc3anonymousza32346ze3z83_1355;
								}
						}
					else
						{	/* Lalr/lalr.scm 555 */
							return (BGl_maxrhsz00zz__lalr_globalz00 =
								BgL_curmaxz00_1353, BUNSPEC);
						}
				}
			}
		}
	}



/* initialize-LA */
	bool_t BGl_initializa7ezd2LAz75zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 561 */
			BGl_consistentz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{	/* Lalr/lalr.scm 568 */
				long BgL_arg2353z00_1367;

				BgL_arg2353z00_1367 =
					((long) CINT(BGl_nstatesz00zz__lalr_globalz00) + ((long) 1));
				BGl_lookaheadsz00zz__lalr_globalz00 =
					make_vector((int) (BgL_arg2353z00_1367), BFALSE);
			}
			{
				long BgL_countz00_1369;

				long BgL_iz00_1370;

				BgL_countz00_1369 = ((long) 0);
				BgL_iz00_1370 = ((long) 0);
			BgL_zc3anonymousza32354ze3z83_1371:
				if ((BgL_iz00_1370 < (long) CINT(BGl_nstatesz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 571 */
						VECTOR_SET(BGl_lookaheadsz00zz__lalr_globalz00,
							(int) (BgL_iz00_1370), BINT(BgL_countz00_1369));
						{	/* Lalr/lalr.scm 574 */
							obj_t BgL_rpz00_1373;

							obj_t BgL_spz00_1374;

							BgL_rpz00_1373 =
								VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
								(int) (BgL_iz00_1370));
							BgL_spz00_1374 =
								VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
								(int) (BgL_iz00_1370));
							{	/* Lalr/lalr.scm 576 */
								bool_t BgL_testz00_5145;

								if (CBOOL(BgL_rpz00_1373))
									{	/* Lalr/lalr.scm 577 */
										bool_t BgL__ortest_1925z00_1380;

										{	/* Lalr/lalr.scm 577 */
											obj_t BgL_arg2365z00_1386;

											BgL_arg2365z00_1386 =
												VECTOR_REF(BgL_rpz00_1373, (int) (((long) 1)));
											BgL__ortest_1925z00_1380 =
												((long) CINT(BgL_arg2365z00_1386) > ((long) 1));
										}
										if (BgL__ortest_1925z00_1380)
											{	/* Lalr/lalr.scm 577 */
												BgL_testz00_5145 = BgL__ortest_1925z00_1380;
											}
										else
											{	/* Lalr/lalr.scm 577 */
												if (CBOOL(BgL_spz00_1374))
													{	/* Lalr/lalr.scm 579 */
														bool_t BgL_testz00_5155;

														{	/* Lalr/lalr.scm 581 */
															obj_t BgL_arg2362z00_1383;

															{	/* Lalr/lalr.scm 581 */
																obj_t BgL_arg2363z00_1384;

																{	/* Lalr/lalr.scm 581 */
																	obj_t BgL_arg2364z00_1385;

																	BgL_arg2364z00_1385 =
																		VECTOR_REF(BgL_spz00_1374,
																		(int) (((long) 2)));
																	{
																		obj_t BgL_lz00_3281;

																		BgL_lz00_3281 = BgL_arg2364z00_1385;
																	BgL_lastz00_3280:
																		if (NULLP(CDR(BgL_lz00_3281)))
																			{	/* Lalr/lalr.scm 581 */
																				BgL_arg2363z00_1384 =
																					CAR(BgL_lz00_3281);
																			}
																		else
																			{
																				obj_t BgL_lz00_5162;

																				BgL_lz00_5162 = CDR(BgL_lz00_3281);
																				BgL_lz00_3281 = BgL_lz00_5162;
																				goto BgL_lastz00_3280;
																			}
																	}
																}
																BgL_arg2362z00_1383 =
																	VECTOR_REF
																	(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																	CINT(BgL_arg2363z00_1384));
															}
															BgL_testz00_5155 =
																(
																(long) CINT(BgL_arg2362z00_1383) <
																(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
														}
														if (BgL_testz00_5155)
															{	/* Lalr/lalr.scm 579 */
																BgL_testz00_5145 = ((bool_t) 0);
															}
														else
															{	/* Lalr/lalr.scm 579 */
																BgL_testz00_5145 = ((bool_t) 1);
															}
													}
												else
													{	/* Lalr/lalr.scm 578 */
														BgL_testz00_5145 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Lalr/lalr.scm 576 */
										BgL_testz00_5145 = ((bool_t) 0);
									}
								if (BgL_testz00_5145)
									{	/* Lalr/lalr.scm 583 */
										long BgL_arg2357z00_1376;

										long BgL_arg2358z00_1377;

										{	/* Lalr/lalr.scm 583 */
											obj_t BgL_arg2359z00_1378;

											BgL_arg2359z00_1378 =
												VECTOR_REF(BgL_rpz00_1373, (int) (((long) 1)));
											BgL_arg2357z00_1376 =
												(BgL_countz00_1369 + (long) CINT(BgL_arg2359z00_1378));
										}
										BgL_arg2358z00_1377 = (BgL_iz00_1370 + ((long) 1));
										{
											long BgL_iz00_5175;

											long BgL_countz00_5174;

											BgL_countz00_5174 = BgL_arg2357z00_1376;
											BgL_iz00_5175 = BgL_arg2358z00_1377;
											BgL_iz00_1370 = BgL_iz00_5175;
											BgL_countz00_1369 = BgL_countz00_5174;
											goto BgL_zc3anonymousza32354ze3z83_1371;
										}
									}
								else
									{	/* Lalr/lalr.scm 576 */
										VECTOR_SET(BGl_consistentz00zz__lalr_globalz00,
											(int) (BgL_iz00_1370), BTRUE);
										{
											long BgL_iz00_5178;

											BgL_iz00_5178 = (BgL_iz00_1370 + ((long) 1));
											BgL_iz00_1370 = BgL_iz00_5178;
											goto BgL_zc3anonymousza32354ze3z83_1371;
										}
									}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 571 */
						VECTOR_SET(BGl_lookaheadsz00zz__lalr_globalz00,
							CINT(BGl_nstatesz00zz__lalr_globalz00), BINT(BgL_countz00_1369));
						{	/* Lalr/lalr.scm 590 */
							obj_t BgL_cz00_1388;

							BgL_cz00_1388 =
								BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_countz00_1369),
								BINT(((long) 1)));
							BGl_LAz00zz__lalr_globalz00 =
								make_vector(CINT(BgL_cz00_1388), BFALSE);
							{
								long BgL_jz00_1390;

								BgL_jz00_1390 = ((long) 0);
							BgL_zc3anonymousza32367ze3z83_1391:
								if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_jz00_1390),
										BgL_cz00_1388))
									{	/* Lalr/lalr.scm 592 */
										((bool_t) 0);
									}
								else
									{	/* Lalr/lalr.scm 592 */
										VECTOR_SET(BGl_LAz00zz__lalr_globalz00,
											(int) (BgL_jz00_1390),
											make_vector(CINT
												(BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00),
												BINT(((long) 0))));
										{
											long BgL_jz00_5196;

											BgL_jz00_5196 = (BgL_jz00_1390 + ((long) 1));
											BgL_jz00_1390 = BgL_jz00_5196;
											goto BgL_zc3anonymousza32367ze3z83_1391;
										}
									}
							}
							BGl_LArulenoz00zz__lalr_globalz00 =
								make_vector(CINT(BgL_cz00_1388), BINT(((long) -1)));
							BGl_lookbackz00zz__lalr_globalz00 =
								make_vector(CINT(BgL_cz00_1388), BFALSE);
						}
						{
							long BgL_iz00_1399;

							long BgL_npz00_1400;

							BgL_iz00_1399 = ((long) 0);
							BgL_npz00_1400 = ((long) 0);
						BgL_zc3anonymousza32371ze3z83_1401:
							if (
								(BgL_iz00_1399 < (long) CINT(BGl_nstatesz00zz__lalr_globalz00)))
								{	/* Lalr/lalr.scm 597 */
									bool_t BgL_testz00_5206;

									{	/* Lalr/lalr.scm 597 */
										obj_t BgL_vectorz00_3317;

										int BgL_kz00_3318;

										BgL_vectorz00_3317 = BGl_consistentz00zz__lalr_globalz00;
										BgL_kz00_3318 = (int) (BgL_iz00_1399);
										BgL_testz00_5206 =
											CBOOL(VECTOR_REF(BgL_vectorz00_3317, BgL_kz00_3318));
									}
									if (BgL_testz00_5206)
										{
											long BgL_iz00_5210;

											BgL_iz00_5210 = (BgL_iz00_1399 + ((long) 1));
											BgL_iz00_1399 = BgL_iz00_5210;
											goto BgL_zc3anonymousza32371ze3z83_1401;
										}
									else
										{	/* Lalr/lalr.scm 599 */
											obj_t BgL_rpz00_1405;

											BgL_rpz00_1405 =
												VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
												(int) (BgL_iz00_1399));
											if (CBOOL(BgL_rpz00_1405))
												{	/* Lalr/lalr.scm 601 */
													obj_t BgL_g1928z00_1406;

													BgL_g1928z00_1406 =
														VECTOR_REF(BgL_rpz00_1405, (int) (((long) 2)));
													{
														obj_t BgL_jz00_1408;

														long BgL_np2z00_1409;

														BgL_jz00_1408 = BgL_g1928z00_1406;
														BgL_np2z00_1409 = BgL_npz00_1400;
													BgL_zc3anonymousza32375ze3z83_1410:
														if (NULLP(BgL_jz00_1408))
															{
																long BgL_npz00_5222;

																long BgL_iz00_5220;

																BgL_iz00_5220 = (BgL_iz00_1399 + ((long) 1));
																BgL_npz00_5222 = BgL_np2z00_1409;
																BgL_npz00_1400 = BgL_npz00_5222;
																BgL_iz00_1399 = BgL_iz00_5220;
																goto BgL_zc3anonymousza32371ze3z83_1401;
															}
														else
															{	/* Lalr/lalr.scm 602 */
																VECTOR_SET(BGl_LArulenoz00zz__lalr_globalz00,
																	(int) (BgL_np2z00_1409), CAR(BgL_jz00_1408));
																{
																	long BgL_np2z00_5228;

																	obj_t BgL_jz00_5226;

																	BgL_jz00_5226 = CDR(BgL_jz00_1408);
																	BgL_np2z00_5228 =
																		(BgL_np2z00_1409 + ((long) 1));
																	BgL_np2z00_1409 = BgL_np2z00_5228;
																	BgL_jz00_1408 = BgL_jz00_5226;
																	goto BgL_zc3anonymousza32375ze3z83_1410;
																}
															}
													}
												}
											else
												{
													long BgL_iz00_5230;

													BgL_iz00_5230 = (BgL_iz00_1399 + ((long) 1));
													BgL_iz00_1399 = BgL_iz00_5230;
													goto BgL_zc3anonymousza32371ze3z83_1401;
												}
										}
								}
							else
								{	/* Lalr/lalr.scm 596 */
									return ((bool_t) 0);
								}
						}
					}
			}
		}
	}



/* set-goto-map */
	bool_t BGl_setzd2gotozd2mapz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 610 */
			{	/* Lalr/lalr.scm 611 */
				long BgL_arg2386z00_1426;

				BgL_arg2386z00_1426 =
					((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1));
				BGl_gotozd2mapzd2zz__lalr_globalz00 =
					make_vector((int) (BgL_arg2386z00_1426), BINT(((long) 0)));
			}
			{	/* Lalr/lalr.scm 612 */
				obj_t BgL_tempzd2mapzd2_1428;

				{	/* Lalr/lalr.scm 612 */
					long BgL_arg2422z00_1491;

					BgL_arg2422z00_1491 =
						((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1));
					BgL_tempzd2mapzd2_1428 =
						make_vector((int) (BgL_arg2422z00_1491), BINT(((long) 0)));
				}
				{
					long BgL_ngz00_1430;

					obj_t BgL_spz00_1431;

					BgL_ngz00_1430 = ((long) 0);
					BgL_spz00_1431 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
				BgL_zc3anonymousza32388ze3z83_1432:
					if (PAIRP(BgL_spz00_1431))
						{	/* Lalr/lalr.scm 615 */
							obj_t BgL_g1929z00_1434;

							BgL_g1929z00_1434 =
								bgl_reverse(VECTOR_REF(CAR(BgL_spz00_1431),
									(int) (((long) 2))));
							{
								obj_t BgL_iz00_1436;

								long BgL_ng2z00_1437;

								BgL_iz00_1436 = BgL_g1929z00_1434;
								BgL_ng2z00_1437 = BgL_ngz00_1430;
							BgL_zc3anonymousza32390ze3z83_1438:
								if (PAIRP(BgL_iz00_1436))
									{	/* Lalr/lalr.scm 617 */
										obj_t BgL_symbolz00_1440;

										{	/* Lalr/lalr.scm 617 */
											obj_t BgL_arg2399z00_1448;

											BgL_arg2399z00_1448 = CAR(BgL_iz00_1436);
											BgL_symbolz00_1440 =
												VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
												CINT(BgL_arg2399z00_1448));
										}
										if (
											((long) CINT(BgL_symbolz00_1440) <
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
											{	/* Lalr/lalr.scm 618 */
												{	/* Lalr/lalr.scm 621 */
													long BgL_arg2393z00_1442;

													{	/* Lalr/lalr.scm 621 */
														obj_t BgL_arg2395z00_1444;

														BgL_arg2395z00_1444 =
															VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
															CINT(BgL_symbolz00_1440));
														BgL_arg2393z00_1442 =
															(((long) 1) + (long) CINT(BgL_arg2395z00_1444));
													}
													VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
														CINT(BgL_symbolz00_1440),
														BINT(BgL_arg2393z00_1442));
												}
												{
													long BgL_ng2z00_5266;

													obj_t BgL_iz00_5264;

													BgL_iz00_5264 = CDR(BgL_iz00_1436);
													BgL_ng2z00_5266 = (BgL_ng2z00_1437 + ((long) 1));
													BgL_ng2z00_1437 = BgL_ng2z00_5266;
													BgL_iz00_1436 = BgL_iz00_5264;
													goto BgL_zc3anonymousza32390ze3z83_1438;
												}
											}
										else
											{
												obj_t BgL_iz00_5268;

												BgL_iz00_5268 = CDR(BgL_iz00_1436);
												BgL_iz00_1436 = BgL_iz00_5268;
												goto BgL_zc3anonymousza32390ze3z83_1438;
											}
									}
								else
									{
										obj_t BgL_spz00_5271;

										long BgL_ngz00_5270;

										BgL_ngz00_5270 = BgL_ng2z00_1437;
										BgL_spz00_5271 = CDR(BgL_spz00_1431);
										BgL_spz00_1431 = BgL_spz00_5271;
										BgL_ngz00_1430 = BgL_ngz00_5270;
										goto BgL_zc3anonymousza32388ze3z83_1432;
									}
							}
						}
					else
						{
							long BgL_kz00_1455;

							long BgL_iz00_1456;

							BgL_kz00_1455 = ((long) 0);
							BgL_iz00_1456 = ((long) 0);
						BgL_zc3anonymousza32404ze3z83_1457:
							if ((BgL_iz00_1456 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
								{	/* Lalr/lalr.scm 627 */
									VECTOR_SET(BgL_tempzd2mapzd2_1428,
										(int) (BgL_iz00_1456), BINT(BgL_kz00_1455));
									{	/* Lalr/lalr.scm 630 */
										long BgL_arg2406z00_1459;

										long BgL_arg2407z00_1460;

										{	/* Lalr/lalr.scm 630 */
											obj_t BgL_arg2408z00_1461;

											BgL_arg2408z00_1461 =
												VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
												(int) (BgL_iz00_1456));
											BgL_arg2406z00_1459 =
												(BgL_kz00_1455 + (long) CINT(BgL_arg2408z00_1461));
										}
										BgL_arg2407z00_1460 = (BgL_iz00_1456 + ((long) 1));
										{
											long BgL_iz00_5285;

											long BgL_kz00_5284;

											BgL_kz00_5284 = BgL_arg2406z00_1459;
											BgL_iz00_5285 = BgL_arg2407z00_1460;
											BgL_iz00_1456 = BgL_iz00_5285;
											BgL_kz00_1455 = BgL_kz00_5284;
											goto BgL_zc3anonymousza32404ze3z83_1457;
										}
									}
								}
							else
								{	/* Lalr/lalr.scm 627 */
									{
										long BgL_iz00_1463;

										BgL_iz00_1463 = ((long) 0);
									BgL_zc3anonymousza32409ze3z83_1464:
										if (
											(BgL_iz00_1463 >=
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
											{	/* Lalr/lalr.scm 633 */
												((bool_t) 0);
											}
										else
											{	/* Lalr/lalr.scm 633 */
												VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
													(int) (BgL_iz00_1463),
													VECTOR_REF(BgL_tempzd2mapzd2_1428,
														(int) (BgL_iz00_1463)));
												{
													long BgL_iz00_5293;

													BgL_iz00_5293 = (BgL_iz00_1463 + ((long) 1));
													BgL_iz00_1463 = BgL_iz00_5293;
													goto BgL_zc3anonymousza32409ze3z83_1464;
												}
											}
									}
									BGl_ngotosz00zz__lalr_globalz00 = BINT(BgL_ngz00_1430);
									VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
										CINT(BGl_nvarsz00zz__lalr_globalz00),
										BGl_ngotosz00zz__lalr_globalz00);
									VECTOR_SET(BgL_tempzd2mapzd2_1428,
										CINT(BGl_nvarsz00zz__lalr_globalz00),
										BGl_ngotosz00zz__lalr_globalz00);
									BGl_fromzd2statezd2zz__lalr_globalz00 =
										make_vector(CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
									BGl_tozd2statezd2zz__lalr_globalz00 =
										make_vector(CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
									{
										obj_t BgL_spz00_1470;

										BgL_spz00_1470 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
									BgL_zc3anonymousza32413ze3z83_1471:
										if (NULLP(BgL_spz00_1470))
											{	/* Lalr/lalr.scm 643 */
												return ((bool_t) 0);
											}
										else
											{	/* Lalr/lalr.scm 643 */
												{	/* Lalr/lalr.scm 645 */
													obj_t BgL_xz00_1473;

													BgL_xz00_1473 = CAR(BgL_spz00_1470);
													{	/* Lalr/lalr.scm 645 */
														obj_t BgL_state1z00_1474;

														BgL_state1z00_1474 =
															VECTOR_REF(BgL_xz00_1473, (int) (((long) 0)));
														{	/* Lalr/lalr.scm 646 */

															{
																obj_t BgL_iz00_1477;

																BgL_iz00_1477 =
																	VECTOR_REF(BgL_xz00_1473, (int) (((long) 2)));
															BgL_zc3anonymousza32416ze3z83_1478:
																if (NULLP(BgL_iz00_1477))
																	{	/* Lalr/lalr.scm 647 */
																		((bool_t) 0);
																	}
																else
																	{	/* Lalr/lalr.scm 647 */
																		{	/* Lalr/lalr.scm 649 */
																			obj_t BgL_state2z00_1480;

																			BgL_state2z00_1480 = CAR(BgL_iz00_1477);
																			{	/* Lalr/lalr.scm 649 */
																				obj_t BgL_symbolz00_1481;

																				BgL_symbolz00_1481 =
																					VECTOR_REF
																					(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																					CINT(BgL_state2z00_1480));
																				{	/* Lalr/lalr.scm 650 */

																					if (
																						((long) CINT(BgL_symbolz00_1481) <
																							(long)
																							CINT
																							(BGl_nvarsz00zz__lalr_globalz00)))
																						{	/* Lalr/lalr.scm 652 */
																							obj_t BgL_kz00_1483;

																							BgL_kz00_1483 =
																								VECTOR_REF
																								(BgL_tempzd2mapzd2_1428,
																								CINT(BgL_symbolz00_1481));
																							{	/* Lalr/lalr.scm 653 */
																								long BgL_arg2419z00_1484;

																								BgL_arg2419z00_1484 =
																									(
																									(long) CINT(BgL_kz00_1483) +
																									((long) 1));
																								VECTOR_SET
																									(BgL_tempzd2mapzd2_1428,
																									CINT(BgL_symbolz00_1481),
																									BINT(BgL_arg2419z00_1484));
																							}
																							VECTOR_SET
																								(BGl_fromzd2statezd2zz__lalr_globalz00,
																								CINT(BgL_kz00_1483),
																								BgL_state1z00_1474);
																							VECTOR_SET
																								(BGl_tozd2statezd2zz__lalr_globalz00,
																								CINT(BgL_kz00_1483),
																								BgL_state2z00_1480);
																						}
																					else
																						{	/* Lalr/lalr.scm 651 */
																							BFALSE;
																						}
																				}
																			}
																		}
																		{
																			obj_t BgL_iz00_5329;

																			BgL_iz00_5329 = CDR(BgL_iz00_1477);
																			BgL_iz00_1477 = BgL_iz00_5329;
																			goto BgL_zc3anonymousza32416ze3z83_1478;
																		}
																	}
															}
														}
													}
												}
												{
													obj_t BgL_spz00_5333;

													BgL_spz00_5333 = CDR(BgL_spz00_1470);
													BgL_spz00_1470 = BgL_spz00_5333;
													goto BgL_zc3anonymousza32413ze3z83_1471;
												}
											}
									}
								}
						}
				}
			}
		}
	}



/* map-goto */
	long BGl_mapzd2gotozd2zz__lalr_expandz00(obj_t BgL_statez00_13,
		obj_t BgL_symbolz00_14)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 658 */
			{	/* Lalr/lalr.scm 659 */
				obj_t BgL_g1933z00_1493;

				long BgL_g1934z00_1494;

				BgL_g1933z00_1493 =
					VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
					CINT(BgL_symbolz00_14));
				{	/* Lalr/lalr.scm 660 */
					obj_t BgL_arg2439z00_1516;

					{	/* Lalr/lalr.scm 660 */
						long BgL_arg2441z00_1518;

						BgL_arg2441z00_1518 = ((long) CINT(BgL_symbolz00_14) + ((long) 1));
						BgL_arg2439z00_1516 =
							VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
							(int) (BgL_arg2441z00_1518));
					}
					BgL_g1934z00_1494 = ((long) CINT(BgL_arg2439z00_1516) - ((long) 1));
				}
				{
					obj_t BgL_lowz00_1496;

					long BgL_highz00_1497;

					BgL_lowz00_1496 = BgL_g1933z00_1493;
					BgL_highz00_1497 = BgL_g1934z00_1494;
				BgL_zc3anonymousza32424ze3z83_1498:
					if (((long) CINT(BgL_lowz00_1496) > BgL_highz00_1497))
						{	/* Lalr/lalr.scm 661 */
							{	/* Lalr/lalr.scm 663 */
								obj_t BgL_arg2426z00_1500;

								obj_t BgL_arg2427z00_1501;

								{	/* Lalr/lalr.scm 663 */
									obj_t BgL_list2428z00_1502;

									{	/* Lalr/lalr.scm 663 */
										obj_t BgL_arg2430z00_1504;

										{	/* Lalr/lalr.scm 663 */
											obj_t BgL_arg2431z00_1505;

											BgL_arg2431z00_1505 = MAKE_PAIR(BgL_symbolz00_14, BNIL);
											BgL_arg2430z00_1504 =
												MAKE_PAIR(BgL_statez00_13, BgL_arg2431z00_1505);
										}
										BgL_list2428z00_1502 =
											MAKE_PAIR(BGl_string3043z00zz__lalr_expandz00,
											BgL_arg2430z00_1504);
									}
									BgL_arg2426z00_1500 = BgL_list2428z00_1502;
								}
								{	/* Lalr/lalr.scm 663 */
									obj_t BgL_res3004z00_3444;

									{	/* Lalr/lalr.scm 663 */
										obj_t BgL_auxz00_5349;

										BgL_auxz00_5349 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3004z00_3444 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5349);
									}
									BgL_arg2427z00_1501 = BgL_res3004z00_3444;
								}
								bgl_display_obj(BgL_arg2426z00_1500, BgL_arg2427z00_1501);
							}
							{	/* Lalr/lalr.scm 663 */
								obj_t BgL_arg2432z00_1506;

								{	/* Lalr/lalr.scm 663 */
									obj_t BgL_res3005z00_3446;

									{	/* Lalr/lalr.scm 663 */
										obj_t BgL_auxz00_5353;

										BgL_auxz00_5353 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3005z00_3446 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5353);
									}
									BgL_arg2432z00_1506 = BgL_res3005z00_3446;
								}
								bgl_display_char(((unsigned char) '\n'), BgL_arg2432z00_1506);
							}
							return ((long) 0);
						}
					else
						{	/* Lalr/lalr.scm 665 */
							long BgL_middlez00_1507;

							{	/* Lalr/lalr.scm 665 */
								long BgL_auxz00_5357;

								BgL_auxz00_5357 =
									((long) CINT(BgL_lowz00_1496) + BgL_highz00_1497);
								BgL_middlez00_1507 = (BgL_auxz00_5357 / ((long) 2));
							}
							{	/* Lalr/lalr.scm 665 */
								obj_t BgL_sz00_1508;

								BgL_sz00_1508 =
									VECTOR_REF(BGl_fromzd2statezd2zz__lalr_globalz00,
									(int) (BgL_middlez00_1507));
								{	/* Lalr/lalr.scm 666 */

									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_sz00_1508,
											BgL_statez00_13))
										{	/* Lalr/lalr.scm 668 */
											return BgL_middlez00_1507;
										}
									else
										{	/* Lalr/lalr.scm 668 */
											if (
												((long) CINT(BgL_sz00_1508) <
													(long) CINT(BgL_statez00_13)))
												{	/* Lalr/lalr.scm 671 */
													long BgL_arg2435z00_1511;

													BgL_arg2435z00_1511 =
														(BgL_middlez00_1507 + ((long) 1));
													{
														obj_t BgL_lowz00_5370;

														BgL_lowz00_5370 = BINT(BgL_arg2435z00_1511);
														BgL_lowz00_1496 = BgL_lowz00_5370;
														goto BgL_zc3anonymousza32424ze3z83_1498;
													}
												}
											else
												{
													long BgL_highz00_5372;

													BgL_highz00_5372 = (BgL_middlez00_1507 - ((long) 1));
													BgL_highz00_1497 = BgL_highz00_5372;
													goto BgL_zc3anonymousza32424ze3z83_1498;
												}
										}
								}
							}
						}
				}
			}
		}
	}



/* initialize-F */
	bool_t BGl_initializa7ezd2Fz75zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 676 */
			BGl_Fz00zz__lalr_globalz00 =
				make_vector(CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
			{
				long BgL_iz00_1520;

				BgL_iz00_1520 = ((long) 0);
			BgL_zc3anonymousza32442ze3z83_1521:
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1520),
						BGl_ngotosz00zz__lalr_globalz00))
					{	/* Lalr/lalr.scm 678 */
						((bool_t) 0);
					}
				else
					{	/* Lalr/lalr.scm 678 */
						VECTOR_SET(BGl_Fz00zz__lalr_globalz00,
							(int) (BgL_iz00_1520),
							make_vector(CINT(BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00),
								BINT(((long) 0))));
						{
							long BgL_iz00_5384;

							BgL_iz00_5384 = (BgL_iz00_1520 + ((long) 1));
							BgL_iz00_1520 = BgL_iz00_5384;
							goto BgL_zc3anonymousza32442ze3z83_1521;
						}
					}
			}
			{	/* Lalr/lalr.scm 680 */
				obj_t BgL_readsz00_1526;

				BgL_readsz00_1526 =
					make_vector(CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
				{
					long BgL_iz00_1528;

					long BgL_rowpz00_1529;

					BgL_iz00_1528 = ((long) 0);
					BgL_rowpz00_1529 = ((long) 0);
				BgL_zc3anonymousza32446ze3z83_1530:
					if ((BgL_iz00_1528 < (long) CINT(BGl_ngotosz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 684 */
							obj_t BgL_rowfz00_1532;

							BgL_rowfz00_1532 =
								VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
								(int) (BgL_rowpz00_1529));
							{	/* Lalr/lalr.scm 684 */
								obj_t BgL_statenoz00_1533;

								BgL_statenoz00_1533 =
									VECTOR_REF(BGl_tozd2statezd2zz__lalr_globalz00,
									(int) (BgL_iz00_1528));
								{	/* Lalr/lalr.scm 685 */
									obj_t BgL_spz00_1534;

									BgL_spz00_1534 =
										VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
										CINT(BgL_statenoz00_1533));
									{	/* Lalr/lalr.scm 686 */

										if (CBOOL(BgL_spz00_1534))
											{	/* Lalr/lalr.scm 688 */
												obj_t BgL_g1936z00_1535;

												BgL_g1936z00_1535 =
													VECTOR_REF(BgL_spz00_1534, (int) (((long) 2)));
												{
													obj_t BgL_jz00_1538;

													obj_t BgL_edgesz00_1539;

													BgL_jz00_1538 = BgL_g1936z00_1535;
													BgL_edgesz00_1539 = BNIL;
												BgL_zc3anonymousza32448ze3z83_1540:
													if (PAIRP(BgL_jz00_1538))
														{	/* Lalr/lalr.scm 690 */
															obj_t BgL_symbolz00_1542;

															{	/* Lalr/lalr.scm 690 */
																obj_t BgL_arg2469z00_1560;

																BgL_arg2469z00_1560 = CAR(BgL_jz00_1538);
																BgL_symbolz00_1542 =
																	VECTOR_REF
																	(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																	CINT(BgL_arg2469z00_1560));
															}
															if (
																((long) CINT(BgL_symbolz00_1542) <
																	(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
																{	/* Lalr/lalr.scm 692 */
																	bool_t BgL_testz00_5410;

																	{	/* Lalr/lalr.scm 692 */
																		obj_t BgL_vectorz00_3481;

																		int BgL_kz00_3482;

																		BgL_vectorz00_3481 =
																			BGl_nullablez00zz__lalr_globalz00;
																		BgL_kz00_3482 = CINT(BgL_symbolz00_1542);
																		BgL_testz00_5410 =
																			CBOOL(VECTOR_REF(BgL_vectorz00_3481,
																				BgL_kz00_3482));
																	}
																	if (BgL_testz00_5410)
																		{	/* Lalr/lalr.scm 693 */
																			obj_t BgL_arg2452z00_1545;

																			obj_t BgL_arg2453z00_1546;

																			BgL_arg2452z00_1545 = CDR(BgL_jz00_1538);
																			{	/* Lalr/lalr.scm 693 */
																				long BgL_arg2454z00_1547;

																				BgL_arg2454z00_1547 =
																					BGl_mapzd2gotozd2zz__lalr_expandz00
																					(BgL_statenoz00_1533,
																					BgL_symbolz00_1542);
																				BgL_arg2453z00_1546 =
																					MAKE_PAIR(BINT(BgL_arg2454z00_1547),
																					BgL_edgesz00_1539);
																			}
																			{
																				obj_t BgL_edgesz00_5419;

																				obj_t BgL_jz00_5418;

																				BgL_jz00_5418 = BgL_arg2452z00_1545;
																				BgL_edgesz00_5419 = BgL_arg2453z00_1546;
																				BgL_edgesz00_1539 = BgL_edgesz00_5419;
																				BgL_jz00_1538 = BgL_jz00_5418;
																				goto BgL_zc3anonymousza32448ze3z83_1540;
																			}
																		}
																	else
																		{
																			obj_t BgL_jz00_5420;

																			BgL_jz00_5420 = CDR(BgL_jz00_1538);
																			BgL_jz00_1538 = BgL_jz00_5420;
																			goto BgL_zc3anonymousza32448ze3z83_1540;
																		}
																}
															else
																{	/* Lalr/lalr.scm 691 */
																	{	/* Lalr/lalr.scm 697 */
																		obj_t BgL_xz00_1549;

																		obj_t BgL_yz00_1550;

																		{	/* Lalr/lalr.scm 697 */
																			long BgL_arg2458z00_1553;

																			BgL_arg2458z00_1553 =
																				(
																				(long) CINT(BgL_symbolz00_1542) -
																				(long)
																				CINT(BGl_nvarsz00zz__lalr_globalz00));
																			BgL_xz00_1549 =
																				BGl_quotientz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_arg2458z00_1553),
																				BINT(((long) 28)));
																		}
																		{	/* Lalr/lalr.scm 697 */
																			obj_t BgL_arg2461z00_1556;

																			{	/* Lalr/lalr.scm 697 */
																				long BgL_arg2462z00_1557;

																				BgL_arg2462z00_1557 =
																					(
																					(long) CINT(BgL_symbolz00_1542) -
																					(long)
																					CINT(BGl_nvarsz00zz__lalr_globalz00));
																				BgL_arg2461z00_1556 =
																					BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																					(BINT(BgL_arg2462z00_1557),
																					BINT(((long) 28)));
																			}
																			BgL_yz00_1550 =
																				BGl_exptz00zz__r4_numbers_6_5z00(BINT((
																						(long) 2)), BgL_arg2461z00_1556);
																		}
																		{	/* Lalr/lalr.scm 697 */
																			long BgL_arg2456z00_1551;

																			{	/* Lalr/lalr.scm 697 */
																				obj_t BgL_arg2457z00_1552;

																				BgL_arg2457z00_1552 =
																					VECTOR_REF(BgL_rowfz00_1532,
																					CINT(BgL_xz00_1549));
																				BgL_arg2456z00_1551 =
																					(
																					(long) CINT(BgL_arg2457z00_1552) |
																					(long) CINT(BgL_yz00_1550));
																			}
																			VECTOR_SET(BgL_rowfz00_1532,
																				CINT(BgL_xz00_1549),
																				BINT(BgL_arg2456z00_1551));
																	}}
																	{
																		obj_t BgL_jz00_5444;

																		BgL_jz00_5444 = CDR(BgL_jz00_1538);
																		BgL_jz00_1538 = BgL_jz00_5444;
																		goto BgL_zc3anonymousza32448ze3z83_1540;
																	}
																}
														}
													else
														{	/* Lalr/lalr.scm 689 */
															if (PAIRP(BgL_edgesz00_1539))
																{	/* Lalr/lalr.scm 699 */
																	VECTOR_SET(BgL_readsz00_1526,
																		(int) (BgL_iz00_1528),
																		bgl_reverse(BgL_edgesz00_1539));
																}
															else
																{	/* Lalr/lalr.scm 699 */
																	BFALSE;
																}
														}
												}
											}
										else
											{	/* Lalr/lalr.scm 687 */
												BFALSE;
											}
										{
											long BgL_rowpz00_5453;

											long BgL_iz00_5451;

											BgL_iz00_5451 = (BgL_iz00_1528 + ((long) 1));
											BgL_rowpz00_5453 = (BgL_rowpz00_1529 + ((long) 1));
											BgL_rowpz00_1529 = BgL_rowpz00_5453;
											BgL_iz00_1528 = BgL_iz00_5451;
											goto BgL_zc3anonymousza32446ze3z83_1530;
										}
									}
								}
							}
						}
					else
						{	/* Lalr/lalr.scm 683 */
							((bool_t) 0);
						}
				}
				return BGl_digraphz00zz__lalr_expandz00(BgL_readsz00_1526);
			}
		}
	}



/* add-lookback-edge */
	obj_t BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00(obj_t BgL_statenoz00_15,
		obj_t BgL_rulenoz00_16, long BgL_gotonoz00_17)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 704 */
			{	/* Lalr/lalr.scm 705 */
				obj_t BgL_kz00_1567;

				{	/* Lalr/lalr.scm 705 */
					long BgL_arg2493z00_1588;

					BgL_arg2493z00_1588 = ((long) CINT(BgL_statenoz00_15) + ((long) 1));
					BgL_kz00_1567 =
						VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
						(int) (BgL_arg2493z00_1588));
				}
				{	/* Lalr/lalr.scm 706 */
					obj_t BgL_g1938z00_1568;

					BgL_g1938z00_1568 =
						VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
						CINT(BgL_statenoz00_15));
					{
						bool_t BgL_foundz00_1570;

						obj_t BgL_iz00_1571;

						BgL_foundz00_1570 = ((bool_t) 0);
						BgL_iz00_1571 = BgL_g1938z00_1568;
					BgL_zc3anonymousza32477ze3z83_1572:
						{	/* Lalr/lalr.scm 707 */
							bool_t BgL_testz00_5462;

							if (BgL_foundz00_1570)
								{	/* Lalr/lalr.scm 707 */
									BgL_testz00_5462 = ((bool_t) 0);
								}
							else
								{	/* Lalr/lalr.scm 707 */
									BgL_testz00_5462 =
										((long) CINT(BgL_iz00_1571) < (long) CINT(BgL_kz00_1567));
								}
							if (BgL_testz00_5462)
								{	/* Lalr/lalr.scm 707 */
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(VECTOR_REF
											(BGl_LArulenoz00zz__lalr_globalz00, CINT(BgL_iz00_1571)),
											BgL_rulenoz00_16))
										{
											bool_t BgL_foundz00_5471;

											BgL_foundz00_5471 = ((bool_t) 1);
											BgL_foundz00_1570 = BgL_foundz00_5471;
											goto BgL_zc3anonymousza32477ze3z83_1572;
										}
									else
										{	/* Lalr/lalr.scm 710 */
											long BgL_arg2480z00_1575;

											BgL_arg2480z00_1575 =
												((long) CINT(BgL_iz00_1571) + ((long) 1));
											{
												obj_t BgL_iz00_5474;

												BgL_iz00_5474 = BINT(BgL_arg2480z00_1575);
												BgL_iz00_1571 = BgL_iz00_5474;
												goto BgL_zc3anonymousza32477ze3z83_1572;
											}
										}
								}
							else
								{	/* Lalr/lalr.scm 707 */
									if (BgL_foundz00_1570)
										{	/* Lalr/lalr.scm 716 */
											obj_t BgL_arg2482z00_1577;

											BgL_arg2482z00_1577 =
												MAKE_PAIR(BINT(BgL_gotonoz00_17),
												VECTOR_REF(BGl_lookbackz00zz__lalr_globalz00,
													CINT(BgL_iz00_1571)));
											return
												VECTOR_SET(BGl_lookbackz00zz__lalr_globalz00,
												CINT(BgL_iz00_1571), BgL_arg2482z00_1577);
										}
									else
										{	/* Lalr/lalr.scm 712 */
											{	/* Lalr/lalr.scm 713 */
												obj_t BgL_arg2485z00_1580;

												{	/* Lalr/lalr.scm 713 */
													obj_t BgL_res3006z00_3523;

													{	/* Lalr/lalr.scm 713 */
														obj_t BgL_auxz00_5483;

														BgL_auxz00_5483 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3006z00_3523 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5483);
													}
													BgL_arg2485z00_1580 = BgL_res3006z00_3523;
												}
												bgl_display_string(BGl_string3044z00zz__lalr_expandz00,
													BgL_arg2485z00_1580);
											}
											{	/* Lalr/lalr.scm 714 */
												obj_t BgL_arg2486z00_1581;

												obj_t BgL_arg2487z00_1582;

												{	/* Lalr/lalr.scm 714 */
													obj_t BgL_list2488z00_1583;

													{	/* Lalr/lalr.scm 714 */
														obj_t BgL_arg2489z00_1584;

														{	/* Lalr/lalr.scm 714 */
															obj_t BgL_arg2491z00_1585;

															BgL_arg2491z00_1585 =
																MAKE_PAIR(BINT(BgL_gotonoz00_17), BNIL);
															BgL_arg2489z00_1584 =
																MAKE_PAIR(BgL_rulenoz00_16,
																BgL_arg2491z00_1585);
														}
														BgL_list2488z00_1583 =
															MAKE_PAIR(BgL_statenoz00_15, BgL_arg2489z00_1584);
													}
													BgL_arg2486z00_1581 = BgL_list2488z00_1583;
												}
												{	/* Lalr/lalr.scm 714 */
													obj_t BgL_res3008z00_3529;

													{	/* Lalr/lalr.scm 714 */
														obj_t BgL_auxz00_5491;

														BgL_auxz00_5491 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3008z00_3529 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5491);
													}
													BgL_arg2487z00_1582 = BgL_res3008z00_3529;
												}
												bgl_display_obj(BgL_arg2486z00_1581,
													BgL_arg2487z00_1582);
											}
											{	/* Lalr/lalr.scm 714 */
												obj_t BgL_arg2492z00_1586;

												{	/* Lalr/lalr.scm 714 */
													obj_t BgL_res3009z00_3531;

													{	/* Lalr/lalr.scm 714 */
														obj_t BgL_auxz00_5495;

														BgL_auxz00_5495 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3009z00_3531 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5495);
													}
													BgL_arg2492z00_1586 = BgL_res3009z00_3531;
												}
												return
													bgl_display_char(((unsigned char) '\n'),
													BgL_arg2492z00_1586);
		}}}}}}}}
	}



/* transpose */
	obj_t BGl_transposez00zz__lalr_expandz00(obj_t BgL_rzd2argzd2_18,
		obj_t BgL_nz00_19)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 719 */
			{	/* Lalr/lalr.scm 720 */
				obj_t BgL_newzd2endzd2_1589;

				obj_t BgL_newzd2rzd2_1590;

				BgL_newzd2endzd2_1589 = make_vector(CINT(BgL_nz00_19), BFALSE);
				BgL_newzd2rzd2_1590 = make_vector(CINT(BgL_nz00_19), BFALSE);
				{
					long BgL_iz00_1592;

					BgL_iz00_1592 = ((long) 0);
				BgL_zc3anonymousza32494ze3z83_1593:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1592),
							BgL_nz00_19))
						{	/* Lalr/lalr.scm 722 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 722 */
							{	/* Lalr/lalr.scm 724 */
								obj_t BgL_xz00_1595;

								{	/* Lalr/lalr.scm 724 */
									obj_t BgL_list2496z00_1596;

									BgL_list2496z00_1596 =
										MAKE_PAIR(BGl_symbol3045z00zz__lalr_expandz00, BNIL);
									BgL_xz00_1595 = BgL_list2496z00_1596;
								}
								VECTOR_SET(BgL_newzd2rzd2_1590,
									(int) (BgL_iz00_1592), BgL_xz00_1595);
								VECTOR_SET(BgL_newzd2endzd2_1589,
									(int) (BgL_iz00_1592), BgL_xz00_1595);
							}
							{
								long BgL_iz00_5511;

								BgL_iz00_5511 = (BgL_iz00_1592 + ((long) 1));
								BgL_iz00_1592 = BgL_iz00_5511;
								goto BgL_zc3anonymousza32494ze3z83_1593;
							}
						}
				}
				{
					long BgL_iz00_1600;

					BgL_iz00_1600 = ((long) 0);
				BgL_zc3anonymousza32498ze3z83_1601:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1600),
							BgL_nz00_19))
						{	/* Lalr/lalr.scm 727 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 727 */
							{	/* Lalr/lalr.scm 729 */
								obj_t BgL_spz00_1603;

								BgL_spz00_1603 =
									VECTOR_REF(BgL_rzd2argzd2_18, (int) (BgL_iz00_1600));
								if (PAIRP(BgL_spz00_1603))
									{
										obj_t BgL_sp2z00_1606;

										BgL_sp2z00_1606 = BgL_spz00_1603;
									BgL_zc3anonymousza32501ze3z83_1607:
										if (PAIRP(BgL_sp2z00_1606))
											{	/* Lalr/lalr.scm 733 */
												obj_t BgL_xz00_1609;

												BgL_xz00_1609 = CAR(BgL_sp2z00_1606);
												{	/* Lalr/lalr.scm 733 */
													obj_t BgL_yz00_1610;

													BgL_yz00_1610 =
														VECTOR_REF(BgL_newzd2endzd2_1589,
														CINT(BgL_xz00_1609));
													{	/* Lalr/lalr.scm 734 */

														{	/* Lalr/lalr.scm 735 */
															obj_t BgL_arg2503z00_1611;

															BgL_arg2503z00_1611 =
																MAKE_PAIR(BINT(BgL_iz00_1600),
																CDR(BgL_yz00_1610));
															SET_CDR(BgL_yz00_1610, BgL_arg2503z00_1611);
														}
														VECTOR_SET(BgL_newzd2endzd2_1589,
															CINT(BgL_xz00_1609), CDR(BgL_yz00_1610));
														{
															obj_t BgL_sp2z00_5532;

															BgL_sp2z00_5532 = CDR(BgL_sp2z00_1606);
															BgL_sp2z00_1606 = BgL_sp2z00_5532;
															goto BgL_zc3anonymousza32501ze3z83_1607;
														}
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 732 */
												((bool_t) 0);
											}
									}
								else
									{	/* Lalr/lalr.scm 730 */
										((bool_t) 0);
									}
							}
							{
								long BgL_iz00_5534;

								BgL_iz00_5534 = (BgL_iz00_1600 + ((long) 1));
								BgL_iz00_1600 = BgL_iz00_5534;
								goto BgL_zc3anonymousza32498ze3z83_1601;
							}
						}
				}
				{
					long BgL_iz00_1619;

					BgL_iz00_1619 = ((long) 0);
				BgL_zc3anonymousza32508ze3z83_1620:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1619),
							BgL_nz00_19))
						{	/* Lalr/lalr.scm 738 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 738 */
							VECTOR_SET(BgL_newzd2rzd2_1590,
								(int) (BgL_iz00_1619),
								CDR(VECTOR_REF(BgL_newzd2rzd2_1590, (int) (BgL_iz00_1619))));
							{
								long BgL_iz00_5544;

								BgL_iz00_5544 = (BgL_iz00_1619 + ((long) 1));
								BgL_iz00_1619 = BgL_iz00_5544;
								goto BgL_zc3anonymousza32508ze3z83_1620;
							}
						}
				}
				return BgL_newzd2rzd2_1590;
			}
		}
	}



/* build-relations */
	obj_t BGl_buildzd2relationszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 746 */
			{
				obj_t BgL_statenoz00_1681;

				obj_t BgL_symbolz00_1682;

				BGl_includesz00zz__lalr_globalz00 =
					make_vector(CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
				{
					long BgL_iz00_1628;

					BgL_iz00_1628 = ((long) 0);
				BgL_zc3anonymousza32513ze3z83_1629:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1628),
							BGl_ngotosz00zz__lalr_globalz00))
						{	/* Lalr/lalr.scm 759 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 759 */
							{	/* Lalr/lalr.scm 761 */
								obj_t BgL_state1z00_1631;

								obj_t BgL_symbol1z00_1632;

								BgL_state1z00_1631 =
									VECTOR_REF(BGl_fromzd2statezd2zz__lalr_globalz00,
									(int) (BgL_iz00_1628));
								{	/* Lalr/lalr.scm 762 */
									obj_t BgL_arg2534z00_1678;

									BgL_arg2534z00_1678 =
										VECTOR_REF(BGl_tozd2statezd2zz__lalr_globalz00,
										(int) (BgL_iz00_1628));
									BgL_symbol1z00_1632 =
										VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
										CINT(BgL_arg2534z00_1678));
								}
								{	/* Lalr/lalr.scm 763 */
									obj_t BgL_g1944z00_1633;

									BgL_g1944z00_1633 =
										VECTOR_REF(BGl_derivesz00zz__lalr_globalz00,
										CINT(BgL_symbol1z00_1632));
									{
										obj_t BgL_rulepz00_1636;

										obj_t BgL_edgesz00_1637;

										BgL_rulepz00_1636 = BgL_g1944z00_1633;
										BgL_edgesz00_1637 = BNIL;
									BgL_zc3anonymousza32515ze3z83_1638:
										if (PAIRP(BgL_rulepz00_1636))
											{	/* Lalr/lalr.scm 766 */
												obj_t BgL_za2rulepza2_1640;

												BgL_za2rulepza2_1640 = CAR(BgL_rulepz00_1636);
												{	/* Lalr/lalr.scm 767 */
													obj_t BgL_g1946z00_1641;

													obj_t BgL_g1947z00_1642;

													BgL_g1946z00_1641 =
														VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
														CINT(BgL_za2rulepza2_1640));
													{	/* Lalr/lalr.scm 769 */
														obj_t BgL_list2533z00_1676;

														BgL_list2533z00_1676 =
															MAKE_PAIR(BgL_state1z00_1631, BNIL);
														BgL_g1947z00_1642 = BgL_list2533z00_1676;
													}
													{
														obj_t BgL_rpz00_1644;

														obj_t BgL_statenoz00_1645;

														obj_t BgL_statesz00_1646;

														BgL_rpz00_1644 = BgL_g1946z00_1641;
														BgL_statenoz00_1645 = BgL_state1z00_1631;
														BgL_statesz00_1646 = BgL_g1947z00_1642;
													BgL_zc3anonymousza32517ze3z83_1647:
														{	/* Lalr/lalr.scm 770 */
															obj_t BgL_za2rpza2_1648;

															BgL_za2rpza2_1648 =
																VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
																CINT(BgL_rpz00_1644));
															if (((long) CINT(BgL_za2rpza2_1648) > ((long) 0)))
																{	/* Lalr/lalr.scm 772 */
																	obj_t BgL_stz00_1650;

																	BgL_statenoz00_1681 = BgL_statenoz00_1645;
																	BgL_symbolz00_1682 = BgL_za2rpza2_1648;
																	{	/* Lalr/lalr.scm 749 */
																		obj_t BgL_g1942z00_1684;

																		BgL_g1942z00_1684 =
																			VECTOR_REF(VECTOR_REF
																			(BGl_shiftzd2tablezd2zz__lalr_globalz00,
																				CINT(BgL_statenoz00_1681)),
																			(int) (((long) 2)));
																		{
																			obj_t BgL_jz00_3612;

																			obj_t BgL_stnoz00_3613;

																			BgL_jz00_3612 = BgL_g1942z00_1684;
																			BgL_stnoz00_3613 = BgL_statenoz00_1681;
																		BgL_loopz00_3611:
																			if (NULLP(BgL_jz00_3612))
																				{	/* Lalr/lalr.scm 749 */
																					BgL_stz00_1650 = BgL_stnoz00_3613;
																				}
																			else
																				{	/* Lalr/lalr.scm 749 */
																					obj_t BgL_st2z00_3620;

																					BgL_st2z00_3620 = CAR(BgL_jz00_3612);
																					if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																						(VECTOR_REF
																							(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																								CINT(BgL_st2z00_3620)),
																							BgL_symbolz00_1682))
																						{	/* Lalr/lalr.scm 749 */
																							BgL_stz00_1650 = BgL_st2z00_3620;
																						}
																					else
																						{
																							obj_t BgL_stnoz00_5583;

																							obj_t BgL_jz00_5581;

																							BgL_jz00_5581 =
																								CDR(BgL_jz00_3612);
																							BgL_stnoz00_5583 =
																								BgL_st2z00_3620;
																							BgL_stnoz00_3613 =
																								BgL_stnoz00_5583;
																							BgL_jz00_3612 = BgL_jz00_5581;
																							goto BgL_loopz00_3611;
																						}
																				}
																		}
																	}
																	{	/* Lalr/lalr.scm 773 */
																		long BgL_arg2519z00_1651;

																		obj_t BgL_arg2520z00_1652;

																		BgL_arg2519z00_1651 =
																			(
																			(long) CINT(BgL_rpz00_1644) + ((long) 1));
																		BgL_arg2520z00_1652 =
																			MAKE_PAIR(BgL_stz00_1650,
																			BgL_statesz00_1646);
																		{
																			obj_t BgL_statesz00_5590;

																			obj_t BgL_statenoz00_5589;

																			obj_t BgL_rpz00_5587;

																			BgL_rpz00_5587 =
																				BINT(BgL_arg2519z00_1651);
																			BgL_statenoz00_5589 = BgL_stz00_1650;
																			BgL_statesz00_5590 = BgL_arg2520z00_1652;
																			BgL_statesz00_1646 = BgL_statesz00_5590;
																			BgL_statenoz00_1645 = BgL_statenoz00_5589;
																			BgL_rpz00_1644 = BgL_rpz00_5587;
																			goto BgL_zc3anonymousza32517ze3z83_1647;
																		}
																	}
																}
															else
																{	/* Lalr/lalr.scm 771 */
																	{	/* Lalr/lalr.scm 776 */
																		bool_t BgL_testz00_5591;

																		{	/* Lalr/lalr.scm 776 */
																			obj_t BgL_vectorz00_3588;

																			int BgL_kz00_3589;

																			BgL_vectorz00_3588 =
																				BGl_consistentz00zz__lalr_globalz00;
																			BgL_kz00_3589 = CINT(BgL_statenoz00_1645);
																			BgL_testz00_5591 =
																				CBOOL(VECTOR_REF(BgL_vectorz00_3588,
																					BgL_kz00_3589));
																		}
																		if (BgL_testz00_5591)
																			{	/* Lalr/lalr.scm 776 */
																				BFALSE;
																			}
																		else
																			{	/* Lalr/lalr.scm 776 */
																				BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00
																					(BgL_statenoz00_1645,
																					BgL_za2rulepza2_1640, BgL_iz00_1628);
																			}
																	}
																	{	/* Lalr/lalr.scm 779 */
																		obj_t BgL_g1948z00_1654;

																		long BgL_g1949z00_1655;

																		BgL_g1948z00_1654 = CDR(BgL_statesz00_1646);
																		BgL_g1949z00_1655 =
																			(
																			(long) CINT(BgL_rpz00_1644) - ((long) 1));
																		{
																			bool_t BgL_donez00_1657;

																			obj_t BgL_stpz00_1658;

																			long BgL_rp2z00_1659;

																			obj_t BgL_edgpz00_1660;

																			BgL_donez00_1657 = ((bool_t) 0);
																			BgL_stpz00_1658 = BgL_g1948z00_1654;
																			BgL_rp2z00_1659 = BgL_g1949z00_1655;
																			BgL_edgpz00_1660 = BgL_edgesz00_1637;
																		BgL_zc3anonymousza32522ze3z83_1661:
																			if (BgL_donez00_1657)
																				{
																					obj_t BgL_edgesz00_5602;

																					obj_t BgL_rulepz00_5600;

																					BgL_rulepz00_5600 =
																						CDR(BgL_rulepz00_1636);
																					BgL_edgesz00_5602 = BgL_edgpz00_1660;
																					BgL_edgesz00_1637 = BgL_edgesz00_5602;
																					BgL_rulepz00_1636 = BgL_rulepz00_5600;
																					goto
																						BgL_zc3anonymousza32515ze3z83_1638;
																				}
																			else
																				{	/* Lalr/lalr.scm 784 */
																					obj_t BgL_za2rpza2_1663;

																					BgL_za2rpza2_1663 =
																						VECTOR_REF
																						(BGl_ritemz00zz__lalr_globalz00,
																						(int) (BgL_rp2z00_1659));
																					{	/* Lalr/lalr.scm 785 */
																						bool_t BgL_testz00_5605;

																						if (BGl_2zc3zc3zz__r4_numbers_6_5z00
																							(BINT(((long) -1)),
																								BgL_za2rpza2_1663))
																							{	/* Lalr/lalr.scm 785 */
																								BgL_testz00_5605 =
																									BGl_zc3zc3zz__r4_numbers_6_5z00
																									(BgL_za2rpza2_1663,
																									BGl_nvarsz00zz__lalr_globalz00,
																									BNIL);
																							}
																						else
																							{	/* Lalr/lalr.scm 785 */
																								BgL_testz00_5605 = ((bool_t) 0);
																							}
																						if (BgL_testz00_5605)
																							{	/* Lalr/lalr.scm 786 */
																								bool_t BgL_arg2525z00_1665;

																								obj_t BgL_arg2526z00_1666;

																								long BgL_arg2527z00_1667;

																								obj_t BgL_arg2528z00_1668;

																								{	/* Lalr/lalr.scm 786 */
																									bool_t BgL_testz00_5610;

																									{	/* Lalr/lalr.scm 786 */
																										obj_t BgL_vectorz00_3596;

																										int BgL_kz00_3597;

																										BgL_vectorz00_3596 =
																											BGl_nullablez00zz__lalr_globalz00;
																										BgL_kz00_3597 =
																											CINT(BgL_za2rpza2_1663);
																										BgL_testz00_5610 =
																											CBOOL(VECTOR_REF
																											(BgL_vectorz00_3596,
																												BgL_kz00_3597));
																									}
																									if (BgL_testz00_5610)
																										{	/* Lalr/lalr.scm 786 */
																											BgL_arg2525z00_1665 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Lalr/lalr.scm 786 */
																											BgL_arg2525z00_1665 =
																												((bool_t) 1);
																										}
																								}
																								BgL_arg2526z00_1666 =
																									CDR(BgL_stpz00_1658);
																								BgL_arg2527z00_1667 =
																									(BgL_rp2z00_1659 -
																									((long) 1));
																								{	/* Lalr/lalr.scm 789 */
																									long BgL_arg2530z00_1670;

																									BgL_arg2530z00_1670 =
																										BGl_mapzd2gotozd2zz__lalr_expandz00
																										(CAR(BgL_stpz00_1658),
																										BgL_za2rpza2_1663);
																									BgL_arg2528z00_1668 =
																										MAKE_PAIR(BINT
																										(BgL_arg2530z00_1670),
																										BgL_edgpz00_1660);
																								}
																								{
																									obj_t BgL_edgpz00_5623;

																									long BgL_rp2z00_5622;

																									obj_t BgL_stpz00_5621;

																									bool_t BgL_donez00_5620;

																									BgL_donez00_5620 =
																										BgL_arg2525z00_1665;
																									BgL_stpz00_5621 =
																										BgL_arg2526z00_1666;
																									BgL_rp2z00_5622 =
																										BgL_arg2527z00_1667;
																									BgL_edgpz00_5623 =
																										BgL_arg2528z00_1668;
																									BgL_edgpz00_1660 =
																										BgL_edgpz00_5623;
																									BgL_rp2z00_1659 =
																										BgL_rp2z00_5622;
																									BgL_stpz00_1658 =
																										BgL_stpz00_5621;
																									BgL_donez00_1657 =
																										BgL_donez00_5620;
																									goto
																										BgL_zc3anonymousza32522ze3z83_1661;
																								}
																							}
																						else
																							{
																								bool_t BgL_donez00_5624;

																								BgL_donez00_5624 = ((bool_t) 1);
																								BgL_donez00_1657 =
																									BgL_donez00_5624;
																								goto
																									BgL_zc3anonymousza32522ze3z83_1661;
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
										else
											{	/* Lalr/lalr.scm 793 */
												obj_t BgL_vectorz00_3602;

												int BgL_kz00_3603;

												BgL_vectorz00_3602 = BGl_includesz00zz__lalr_globalz00;
												BgL_kz00_3603 = (int) (BgL_iz00_1628);
												{	/* Lalr/lalr.scm 793 */
													obj_t BgL_xz00_4303;

													BgL_xz00_4303 =
														VECTOR_SET(BgL_vectorz00_3602, BgL_kz00_3603,
														BgL_edgesz00_1637);
													BUNSPEC;
							}}}}}
							{
								long BgL_iz00_5627;

								BgL_iz00_5627 = (BgL_iz00_1628 + ((long) 1));
								BgL_iz00_1628 = BgL_iz00_5627;
								goto BgL_zc3anonymousza32513ze3z83_1629;
							}
						}
				}
				return (BGl_includesz00zz__lalr_globalz00 =
					BGl_transposez00zz__lalr_expandz00(BGl_includesz00zz__lalr_globalz00,
						BGl_ngotosz00zz__lalr_globalz00), BUNSPEC);
			}
		}
	}



/* compute-lookaheads */
	bool_t BGl_computezd2lookaheadszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 798 */
			{	/* Lalr/lalr.scm 799 */
				obj_t BgL_nz00_1698;

				BgL_nz00_1698 =
					VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
					CINT(BGl_nstatesz00zz__lalr_globalz00));
				{
					long BgL_iz00_1700;

					BgL_iz00_1700 = ((long) 0);
				BgL_zc3anonymousza32544ze3z83_1701:
					if ((BgL_iz00_1700 < (long) CINT(BgL_nz00_1698)))
						{	/* Lalr/lalr.scm 802 */
							obj_t BgL_g1950z00_1703;

							BgL_g1950z00_1703 =
								VECTOR_REF(BGl_lookbackz00zz__lalr_globalz00,
								(int) (BgL_iz00_1700));
							{
								obj_t BgL_spz00_1705;

								BgL_spz00_1705 = BgL_g1950z00_1703;
							BgL_zc3anonymousza32546ze3z83_1706:
								if (PAIRP(BgL_spz00_1705))
									{	/* Lalr/lalr.scm 804 */
										obj_t BgL_lazd2izd2_1708;

										obj_t BgL_fzd2jzd2_1709;

										BgL_lazd2izd2_1708 =
											VECTOR_REF(BGl_LAz00zz__lalr_globalz00,
											(int) (BgL_iz00_1700));
										{	/* Lalr/lalr.scm 805 */
											obj_t BgL_arg2555z00_1720;

											BgL_arg2555z00_1720 = CAR(BgL_spz00_1705);
											BgL_fzd2jzd2_1709 =
												VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
												CINT(BgL_arg2555z00_1720));
										}
										{
											long BgL_iz00_1711;

											BgL_iz00_1711 = ((long) 0);
										BgL_zc3anonymousza32548ze3z83_1712:
											if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1711),
													BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
												{	/* Lalr/lalr.scm 806 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 806 */
													{	/* Lalr/lalr.scm 806 */
														long BgL_arg2550z00_1714;

														{	/* Lalr/lalr.scm 806 */
															obj_t BgL_arg2551z00_1715;

															obj_t BgL_arg2552z00_1716;

															BgL_arg2551z00_1715 =
																VECTOR_REF(BgL_lazd2izd2_1708,
																(int) (BgL_iz00_1711));
															BgL_arg2552z00_1716 =
																VECTOR_REF(BgL_fzd2jzd2_1709,
																(int) (BgL_iz00_1711));
															BgL_arg2550z00_1714 =
																(
																(long) CINT(BgL_arg2551z00_1715) |
																(long) CINT(BgL_arg2552z00_1716));
														}
														VECTOR_SET(BgL_lazd2izd2_1708,
															(int) (BgL_iz00_1711), BINT(BgL_arg2550z00_1714));
													}
													{
														long BgL_iz00_5657;

														BgL_iz00_5657 =
															(long)
															CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																(BgL_iz00_1711), BINT(((long) 1))));
														BgL_iz00_1711 = BgL_iz00_5657;
														goto BgL_zc3anonymousza32548ze3z83_1712;
													}
												}
										}
										{
											obj_t BgL_spz00_5662;

											BgL_spz00_5662 = CDR(BgL_spz00_1705);
											BgL_spz00_1705 = BgL_spz00_5662;
											goto BgL_zc3anonymousza32546ze3z83_1706;
										}
									}
								else
									{
										long BgL_iz00_5664;

										BgL_iz00_5664 = (BgL_iz00_1700 + ((long) 1));
										BgL_iz00_1700 = BgL_iz00_5664;
										goto BgL_zc3anonymousza32544ze3z83_1701;
									}
							}
						}
					else
						{	/* Lalr/lalr.scm 801 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* digraph */
	bool_t BGl_digraphz00zz__lalr_expandz00(obj_t BgL_relationz00_20)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 812 */
			{	/* Lalr/lalr.scm 813 */
				obj_t BgL_infinityz00_1724;

				obj_t BgL_indexz00_1725;

				obj_t BgL_verticesz00_1726;

				obj_t BgL_topz00_1727;

				obj_t BgL_rz00_1728;

				BgL_infinityz00_1724 = MAKE_CELL(BUNSPEC);
				BgL_indexz00_1725 = MAKE_CELL(BUNSPEC);
				BgL_verticesz00_1726 = MAKE_CELL(BUNSPEC);
				BgL_topz00_1727 = MAKE_CELL(BUNSPEC);
				BgL_rz00_1728 = MAKE_CELL(BUNSPEC);
				{	/* Lalr/lalr.scm 813 */
					obj_t BgL_auxz00_4271;

					{	/* Lalr/lalr.scm 813 */
						long BgL_za71za7_3675;

						BgL_za71za7_3675 = (long) CINT(BGl_ngotosz00zz__lalr_globalz00);
						BgL_auxz00_4271 = BINT((BgL_za71za7_3675 + ((long) 2)));
					}
					CELL_SET(BgL_infinityz00_1724, BgL_auxz00_4271);
				}
				{	/* Lalr/lalr.scm 814 */
					obj_t BgL_auxz00_4272;

					{	/* Lalr/lalr.scm 814 */
						long BgL_arg2565z00_1741;

						BgL_arg2565z00_1741 =
							((long) CINT(BGl_ngotosz00zz__lalr_globalz00) + ((long) 1));
						BgL_auxz00_4272 =
							make_vector((int) (BgL_arg2565z00_1741), BINT(((long) 0)));
					}
					CELL_SET(BgL_indexz00_1725, BgL_auxz00_4272);
				}
				{	/* Lalr/lalr.scm 815 */
					obj_t BgL_auxz00_4273;

					{	/* Lalr/lalr.scm 815 */
						long BgL_arg2568z00_1743;

						BgL_arg2568z00_1743 =
							((long) CINT(BGl_ngotosz00zz__lalr_globalz00) + ((long) 1));
						BgL_auxz00_4273 =
							make_vector((int) (BgL_arg2568z00_1743), BINT(((long) 0)));
					}
					CELL_SET(BgL_verticesz00_1726, BgL_auxz00_4273);
				}
				{	/* Lalr/lalr.scm 850 */
					obj_t BgL_auxz00_4274;

					BgL_auxz00_4274 = BINT(((long) 0));
					CELL_SET(BgL_topz00_1727, BgL_auxz00_4274);
				}
				CELL_SET(BgL_rz00_1728, BgL_relationz00_20);
				{
					long BgL_iz00_1731;

					BgL_iz00_1731 = ((long) 0);
				BgL_zc3anonymousza32557ze3z83_1732:
					if ((BgL_iz00_1731 < (long) CINT(BGl_ngotosz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 851 */
							{	/* Lalr/lalr.scm 853 */
								bool_t BgL_testz00_5683;

								{	/* Lalr/lalr.scm 853 */
									bool_t BgL_testz00_5684;

									{	/* Lalr/lalr.scm 853 */
										obj_t BgL_arg2563z00_1738;

										{	/* Lalr/lalr.scm 853 */
											obj_t BgL_vectorz00_3683;

											int BgL_kz00_3684;

											BgL_vectorz00_3683 = CELL_REF(BgL_indexz00_1725);
											BgL_kz00_3684 = (int) (BgL_iz00_1731);
											BgL_arg2563z00_1738 =
												VECTOR_REF(BgL_vectorz00_3683, BgL_kz00_3684);
										}
										BgL_testz00_5684 =
											BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
											BgL_arg2563z00_1738);
									}
									if (BgL_testz00_5684)
										{	/* Lalr/lalr.scm 854 */
											obj_t BgL_arg2561z00_1736;

											{	/* Lalr/lalr.scm 854 */
												obj_t BgL_vectorz00_3685;

												int BgL_kz00_3686;

												BgL_vectorz00_3685 = CELL_REF(BgL_rz00_1728);
												BgL_kz00_3686 = (int) (BgL_iz00_1731);
												BgL_arg2561z00_1736 =
													VECTOR_REF(BgL_vectorz00_3685, BgL_kz00_3686);
											}
											BgL_testz00_5683 = PAIRP(BgL_arg2561z00_1736);
										}
									else
										{	/* Lalr/lalr.scm 853 */
											BgL_testz00_5683 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_5683)
									{	/* Lalr/lalr.scm 853 */
										BGl_traversez00zz__lalr_expandz00(BgL_infinityz00_1724,
											BgL_rz00_1728, BgL_indexz00_1725, BgL_verticesz00_1726,
											BgL_topz00_1727, BINT(BgL_iz00_1731));
									}
								else
									{	/* Lalr/lalr.scm 853 */
										((bool_t) 0);
									}
							}
							{
								long BgL_iz00_5694;

								BgL_iz00_5694 = (BgL_iz00_1731 + ((long) 1));
								BgL_iz00_1731 = BgL_iz00_5694;
								goto BgL_zc3anonymousza32557ze3z83_1732;
							}
						}
					else
						{	/* Lalr/lalr.scm 851 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* traverse */
	bool_t BGl_traversez00zz__lalr_expandz00(obj_t BgL_infinityz00_4268,
		obj_t BgL_rz00_4267, obj_t BgL_indexz00_4266, obj_t BgL_verticesz00_4265,
		obj_t BgL_topz00_4264, obj_t BgL_iz00_1745)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 820 */
			{	/* Lalr/lalr.scm 820 */
				obj_t BgL_auxz00_4269;

				{	/* Lalr/lalr.scm 820 */
					long BgL_za72za7_3691;

					BgL_za72za7_3691 = (long) CINT(CELL_REF(BgL_topz00_4264));
					BgL_auxz00_4269 = BINT((((long) 1) + BgL_za72za7_3691));
				}
				CELL_SET(BgL_topz00_4264, BgL_auxz00_4269);
			}
			{	/* Lalr/lalr.scm 821 */
				obj_t BgL_vectorz00_3692;

				int BgL_kz00_3693;

				BgL_vectorz00_3692 = CELL_REF(BgL_verticesz00_4265);
				BgL_kz00_3693 = CINT(CELL_REF(BgL_topz00_4264));
				VECTOR_SET(BgL_vectorz00_3692, BgL_kz00_3693, BgL_iz00_1745);
			}
			{	/* Lalr/lalr.scm 822 */
				long BgL_heightz00_1747;

				BgL_heightz00_1747 = (long) CINT(CELL_REF(BgL_topz00_4264));
				{	/* Lalr/lalr.scm 823 */
					obj_t BgL_vectorz00_3695;

					int BgL_kz00_3696;

					obj_t BgL_objz00_3697;

					BgL_vectorz00_3695 = CELL_REF(BgL_indexz00_4266);
					BgL_kz00_3696 = CINT(BgL_iz00_1745);
					BgL_objz00_3697 = BINT(BgL_heightz00_1747);
					VECTOR_SET(BgL_vectorz00_3695, BgL_kz00_3696, BgL_objz00_3697);
				}
				{	/* Lalr/lalr.scm 824 */
					obj_t BgL_rpz00_1748;

					{	/* Lalr/lalr.scm 824 */
						obj_t BgL_vectorz00_3698;

						int BgL_kz00_3699;

						BgL_vectorz00_3698 = CELL_REF(BgL_rz00_4267);
						BgL_kz00_3699 = CINT(BgL_iz00_1745);
						BgL_rpz00_1748 = VECTOR_REF(BgL_vectorz00_3698, BgL_kz00_3699);
					}
					if (PAIRP(BgL_rpz00_1748))
						{
							obj_t BgL_rp2z00_1751;

							BgL_rp2z00_1751 = BgL_rpz00_1748;
						BgL_zc3anonymousza32572ze3z83_1752:
							if (PAIRP(BgL_rp2z00_1751))
								{	/* Lalr/lalr.scm 828 */
									obj_t BgL_jz00_1754;

									BgL_jz00_1754 = CAR(BgL_rp2z00_1751);
									{	/* Lalr/lalr.scm 829 */
										bool_t BgL_testz00_5712;

										{	/* Lalr/lalr.scm 829 */
											obj_t BgL_arg2576z00_1757;

											{	/* Lalr/lalr.scm 829 */
												obj_t BgL_vectorz00_3703;

												int BgL_kz00_3704;

												BgL_vectorz00_3703 = CELL_REF(BgL_indexz00_4266);
												BgL_kz00_3704 = CINT(BgL_jz00_1754);
												BgL_arg2576z00_1757 =
													VECTOR_REF(BgL_vectorz00_3703, BgL_kz00_3704);
											}
											BgL_testz00_5712 =
												BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
												BgL_arg2576z00_1757);
										}
										if (BgL_testz00_5712)
											{	/* Lalr/lalr.scm 829 */
												BGl_traversez00zz__lalr_expandz00(BgL_infinityz00_4268,
													BgL_rz00_4267, BgL_indexz00_4266,
													BgL_verticesz00_4265, BgL_topz00_4264, BgL_jz00_1754);
											}
										else
											{	/* Lalr/lalr.scm 829 */
												((bool_t) 0);
											}
									}
									{	/* Lalr/lalr.scm 831 */
										bool_t BgL_testz00_5718;

										{	/* Lalr/lalr.scm 831 */
											obj_t BgL_arg2579z00_1760;

											obj_t BgL_arg2580z00_1761;

											{	/* Lalr/lalr.scm 831 */
												obj_t BgL_vectorz00_3705;

												int BgL_kz00_3706;

												BgL_vectorz00_3705 = CELL_REF(BgL_indexz00_4266);
												BgL_kz00_3706 = CINT(BgL_iz00_1745);
												BgL_arg2579z00_1760 =
													VECTOR_REF(BgL_vectorz00_3705, BgL_kz00_3706);
											}
											{	/* Lalr/lalr.scm 832 */
												obj_t BgL_vectorz00_3707;

												int BgL_kz00_3708;

												BgL_vectorz00_3707 = CELL_REF(BgL_indexz00_4266);
												BgL_kz00_3708 = CINT(BgL_jz00_1754);
												BgL_arg2580z00_1761 =
													VECTOR_REF(BgL_vectorz00_3707, BgL_kz00_3708);
											}
											BgL_testz00_5718 =
												(
												(long) CINT(BgL_arg2579z00_1760) >
												(long) CINT(BgL_arg2580z00_1761));
										}
										if (BgL_testz00_5718)
											{	/* Lalr/lalr.scm 833 */
												obj_t BgL_arg2578z00_1759;

												{	/* Lalr/lalr.scm 833 */
													obj_t BgL_vectorz00_3711;

													int BgL_kz00_3712;

													BgL_vectorz00_3711 = CELL_REF(BgL_indexz00_4266);
													BgL_kz00_3712 = CINT(BgL_jz00_1754);
													BgL_arg2578z00_1759 =
														VECTOR_REF(BgL_vectorz00_3711, BgL_kz00_3712);
												}
												{	/* Lalr/lalr.scm 833 */
													obj_t BgL_vectorz00_3713;

													int BgL_kz00_3714;

													BgL_vectorz00_3713 = CELL_REF(BgL_indexz00_4266);
													BgL_kz00_3714 = CINT(BgL_iz00_1745);
													VECTOR_SET(BgL_vectorz00_3713, BgL_kz00_3714,
														BgL_arg2578z00_1759);
											}}
										else
											{	/* Lalr/lalr.scm 831 */
												BFALSE;
											}
									}
									{	/* Lalr/lalr.scm 834 */
										obj_t BgL_fzd2izd2_1762;

										obj_t BgL_fzd2jzd2_1763;

										BgL_fzd2izd2_1762 =
											VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
											CINT(BgL_iz00_1745));
										BgL_fzd2jzd2_1763 =
											VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
											CINT(BgL_jz00_1754));
										{
											long BgL_iz00_1765;

											BgL_iz00_1765 = ((long) 0);
										BgL_zc3anonymousza32581ze3z83_1766:
											if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1765),
													BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
												{	/* Lalr/lalr.scm 836 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 836 */
													{	/* Lalr/lalr.scm 836 */
														long BgL_arg2583z00_1768;

														{	/* Lalr/lalr.scm 836 */
															obj_t BgL_arg2584z00_1769;

															obj_t BgL_arg2585z00_1770;

															BgL_arg2584z00_1769 =
																VECTOR_REF(BgL_fzd2izd2_1762,
																(int) (BgL_iz00_1765));
															BgL_arg2585z00_1770 =
																VECTOR_REF(BgL_fzd2jzd2_1763,
																(int) (BgL_iz00_1765));
															BgL_arg2583z00_1768 =
																(
																(long) CINT(BgL_arg2584z00_1769) |
																(long) CINT(BgL_arg2585z00_1770));
														}
														VECTOR_SET(BgL_fzd2izd2_1762,
															(int) (BgL_iz00_1765), BINT(BgL_arg2583z00_1768));
													}
													{
														long BgL_iz00_5747;

														BgL_iz00_5747 =
															(long)
															CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																(BgL_iz00_1765), BINT(((long) 1))));
														BgL_iz00_1765 = BgL_iz00_5747;
														goto BgL_zc3anonymousza32581ze3z83_1766;
													}
												}
										}
									}
									{
										obj_t BgL_rp2z00_5752;

										BgL_rp2z00_5752 = CDR(BgL_rp2z00_1751);
										BgL_rp2z00_1751 = BgL_rp2z00_5752;
										goto BgL_zc3anonymousza32572ze3z83_1752;
									}
								}
							else
								{	/* Lalr/lalr.scm 827 */
									((bool_t) 0);
								}
						}
					else
						{	/* Lalr/lalr.scm 825 */
							((bool_t) 0);
						}
					{	/* Lalr/lalr.scm 838 */
						bool_t BgL_testz00_5754;

						{	/* Lalr/lalr.scm 838 */
							obj_t BgL_arg2600z00_1793;

							{	/* Lalr/lalr.scm 838 */
								obj_t BgL_vectorz00_3730;

								int BgL_kz00_3731;

								BgL_vectorz00_3730 = CELL_REF(BgL_indexz00_4266);
								BgL_kz00_3731 = CINT(BgL_iz00_1745);
								BgL_arg2600z00_1793 =
									VECTOR_REF(BgL_vectorz00_3730, BgL_kz00_3731);
							}
							BgL_testz00_5754 =
								BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_arg2600z00_1793,
								BINT(BgL_heightz00_1747));
						}
						if (BgL_testz00_5754)
							{

							BgL_zc3anonymousza32589ze3z83_1777:
								{	/* Lalr/lalr.scm 840 */
									obj_t BgL_jz00_1778;

									{	/* Lalr/lalr.scm 840 */
										obj_t BgL_vectorz00_3732;

										int BgL_kz00_3733;

										BgL_vectorz00_3732 = CELL_REF(BgL_verticesz00_4265);
										BgL_kz00_3733 = CINT(CELL_REF(BgL_topz00_4264));
										BgL_jz00_1778 =
											VECTOR_REF(BgL_vectorz00_3732, BgL_kz00_3733);
									}
									{	/* Lalr/lalr.scm 841 */
										obj_t BgL_auxz00_4270;

										{	/* Lalr/lalr.scm 841 */
											long BgL_za71za7_3734;

											BgL_za71za7_3734 = (long) CINT(CELL_REF(BgL_topz00_4264));
											BgL_auxz00_4270 = BINT((BgL_za71za7_3734 - ((long) 1)));
										}
										CELL_SET(BgL_topz00_4264, BgL_auxz00_4270);
									}
									{	/* Lalr/lalr.scm 842 */
										obj_t BgL_vectorz00_3736;

										int BgL_kz00_3737;

										obj_t BgL_objz00_3738;

										BgL_vectorz00_3736 = CELL_REF(BgL_indexz00_4266);
										BgL_kz00_3737 = CINT(BgL_jz00_1778);
										BgL_objz00_3738 = CELL_REF(BgL_infinityz00_4268);
										VECTOR_SET(BgL_vectorz00_3736, BgL_kz00_3737,
											BgL_objz00_3738);
									}
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_1745,
											BgL_jz00_1778))
										{	/* Lalr/lalr.scm 843 */
											return ((bool_t) 0);
										}
									else
										{	/* Lalr/lalr.scm 843 */
											{
												long BgL_iz00_1781;

												BgL_iz00_1781 = ((long) 0);
											BgL_zc3anonymousza32591ze3z83_1782:
												if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
														(BgL_iz00_1781),
														BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
													{	/* Lalr/lalr.scm 845 */
														((bool_t) 0);
													}
												else
													{	/* Lalr/lalr.scm 845 */
														{	/* Lalr/lalr.scm 845 */
															obj_t BgL_arg2593z00_1784;

															long BgL_arg2594z00_1785;

															BgL_arg2593z00_1784 =
																VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
																(int) (BgL_iz00_1781));
															{	/* Lalr/lalr.scm 845 */
																obj_t BgL_arg2595z00_1786;

																obj_t BgL_arg2596z00_1787;

																BgL_arg2595z00_1786 =
																	VECTOR_REF(VECTOR_REF
																	(BGl_Fz00zz__lalr_globalz00,
																		(int) (BgL_iz00_1781)),
																	(int) (BgL_iz00_1781));
																BgL_arg2596z00_1787 =
																	VECTOR_REF(VECTOR_REF
																	(BGl_Fz00zz__lalr_globalz00,
																		CINT(BgL_jz00_1778)),
																	(int) (BgL_iz00_1781));
																BgL_arg2594z00_1785 =
																	((long) CINT(BgL_arg2595z00_1786) | (long)
																	CINT(BgL_arg2596z00_1787));
															}
															VECTOR_SET(BgL_arg2593z00_1784,
																(int) (BgL_iz00_1781),
																BINT(BgL_arg2594z00_1785));
														}
														{
															long BgL_iz00_5787;

															BgL_iz00_5787 =
																(long)
																CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																	(BgL_iz00_1781), BINT(((long) 1))));
															BgL_iz00_1781 = BgL_iz00_5787;
															goto BgL_zc3anonymousza32591ze3z83_1782;
														}
													}
											}
											goto BgL_zc3anonymousza32589ze3z83_1777;
										}
								}
							}
						else
							{	/* Lalr/lalr.scm 838 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* build-rule */
	obj_t BGl_buildzd2rulezd2zz__lalr_expandz00(long BgL_nz00_21)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 861 */
			{	/* Lalr/lalr.scm 863 */
				obj_t BgL_arg2601z00_1795;

				obj_t BgL_arg2602z00_1796;

				{	/* Lalr/lalr.scm 863 */
					obj_t BgL_arg2603z00_1797;

					BgL_arg2603z00_1797 =
						VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00, (int) (BgL_nz00_21));
					BgL_arg2601z00_1795 =
						VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
						CINT(BgL_arg2603z00_1797));
				}
				BgL_arg2602z00_1796 =
					MAKE_PAIR(BGl_symbol3047z00zz__lalr_expandz00,
					BGl_loopz00zz__lalr_expandz00(VECTOR_REF
						(BGl_rrhsz00zz__lalr_globalz00, (int) (BgL_nz00_21))));
				return MAKE_PAIR(BgL_arg2601z00_1795, BgL_arg2602z00_1796);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__lalr_expandz00(obj_t BgL_posz00_1802)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 866 */
			{	/* Lalr/lalr.scm 867 */
				obj_t BgL_xz00_1804;

				BgL_xz00_1804 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, CINT(BgL_posz00_1802));
				if (((long) CINT(BgL_xz00_1804) < ((long) 0)))
					{	/* Lalr/lalr.scm 868 */
						return BNIL;
					}
				else
					{	/* Lalr/lalr.scm 870 */
						obj_t BgL_arg2608z00_1806;

						obj_t BgL_arg2609z00_1807;

						BgL_arg2608z00_1806 =
							VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
							CINT(BgL_xz00_1804));
						{	/* Lalr/lalr.scm 871 */
							long BgL_arg2610z00_1808;

							BgL_arg2610z00_1808 = ((long) CINT(BgL_posz00_1802) + ((long) 1));
							BgL_arg2609z00_1807 =
								BGl_loopz00zz__lalr_expandz00(BINT(BgL_arg2610z00_1808));
						}
						return MAKE_PAIR(BgL_arg2608z00_1806, BgL_arg2609z00_1807);
					}
			}
		}
	}



/* build-tables */
	obj_t BGl_buildzd2tableszd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 878 */
			BGl_actionzd2tablezd2zz__lalr_globalz00 =
				make_vector(CINT(BGl_nstatesz00zz__lalr_globalz00), BNIL);
			{
				long BgL_iz00_1818;

				BgL_iz00_1818 = ((long) 0);
			BgL_zc3anonymousza32616ze3z83_1819:
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1818),
						BGl_nstatesz00zz__lalr_globalz00))
					{	/* Lalr/lalr.scm 954 */
						((bool_t) 0);
					}
				else
					{	/* Lalr/lalr.scm 954 */
						{	/* Lalr/lalr.scm 956 */
							obj_t BgL_redz00_1821;

							BgL_redz00_1821 =
								VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
								(int) (BgL_iz00_1818));
							{	/* Lalr/lalr.scm 957 */
								bool_t BgL_testz00_5820;

								if (CBOOL(BgL_redz00_1821))
									{	/* Lalr/lalr.scm 957 */
										obj_t BgL_arg2644z00_1863;

										BgL_arg2644z00_1863 =
											VECTOR_REF(BgL_redz00_1821, (int) (((long) 1)));
										BgL_testz00_5820 =
											((long) CINT(BgL_arg2644z00_1863) >= ((long) 1));
									}
								else
									{	/* Lalr/lalr.scm 957 */
										BgL_testz00_5820 = ((bool_t) 0);
									}
								if (BgL_testz00_5820)
									{	/* Lalr/lalr.scm 958 */
										bool_t BgL_testz00_5827;

										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(VECTOR_REF
												(BgL_redz00_1821, (int) (((long) 1))),
												BINT(((long) 1))))
											{	/* Lalr/lalr.scm 958 */
												obj_t BgL_vectorz00_3790;

												int BgL_kz00_3791;

												BgL_vectorz00_3790 =
													BGl_consistentz00zz__lalr_globalz00;
												BgL_kz00_3791 = (int) (BgL_iz00_1818);
												BgL_testz00_5827 =
													CBOOL(VECTOR_REF(BgL_vectorz00_3790, BgL_kz00_3791));
											}
										else
											{	/* Lalr/lalr.scm 958 */
												BgL_testz00_5827 = ((bool_t) 0);
											}
										if (BgL_testz00_5827)
											{	/* Lalr/lalr.scm 963 */
												obj_t BgL_arg2620z00_1824;

												BgL_arg2620z00_1824 =
													BGl_zd2zd2zz__r4_numbers_6_5z00(CAR(VECTOR_REF
														(BgL_redz00_1821, (int) (((long) 2)))), BNIL);
												{
													long BgL_iz00_3798;

													BgL_iz00_3798 = ((long) 1);
												BgL_dozd2loopzd2zd21955zd2_3797:
													if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
															(BgL_iz00_3798), BGl_ntermsz00zz__lalr_globalz00))
														{	/* Lalr/lalr.scm 963 */
															((bool_t) 0);
														}
													else
														{	/* Lalr/lalr.scm 963 */
															BGl_addzd2actionzd2zz__lalr_expandz00(BINT
																(BgL_iz00_1818), BgL_iz00_3798,
																BgL_arg2620z00_1824);
															{
																long BgL_iz00_5845;

																BgL_iz00_5845 =
																	(long)
																	CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																		(BgL_iz00_3798), BINT(((long) 1))));
																BgL_iz00_3798 = BgL_iz00_5845;
																goto BgL_dozd2loopzd2zd21955zd2_3797;
															}
														}
												}
											}
										else
											{	/* Lalr/lalr.scm 964 */
												obj_t BgL_kz00_1828;

												{	/* Lalr/lalr.scm 964 */
													long BgL_arg2640z00_1859;

													BgL_arg2640z00_1859 = (BgL_iz00_1818 + ((long) 1));
													BgL_kz00_1828 =
														VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
														(int) (BgL_arg2640z00_1859));
												}
												{	/* Lalr/lalr.scm 965 */
													obj_t BgL_g1957z00_1829;

													BgL_g1957z00_1829 =
														VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
														(int) (BgL_iz00_1818));
													{
														obj_t BgL_jz00_1831;

														BgL_jz00_1831 = BgL_g1957z00_1829;
													BgL_zc3anonymousza32624ze3z83_1832:
														if (
															((long) CINT(BgL_jz00_1831) <
																(long) CINT(BgL_kz00_1828)))
															{	/* Lalr/lalr.scm 967 */
																long BgL_rulez00_1834;

																obj_t BgL_lavz00_1835;

																{	/* Lalr/lalr.scm 967 */
																	obj_t BgL_arg2639z00_1857;

																	BgL_arg2639z00_1857 =
																		VECTOR_REF
																		(BGl_LArulenoz00zz__lalr_globalz00,
																		CINT(BgL_jz00_1831));
																	BgL_rulez00_1834 =
																		NEG((long) CINT(BgL_arg2639z00_1857));
																}
																BgL_lavz00_1835 =
																	VECTOR_REF(BGl_LAz00zz__lalr_globalz00,
																	CINT(BgL_jz00_1831));
																{	/* Lalr/lalr.scm 969 */
																	obj_t BgL_g1958z00_1836;

																	BgL_g1958z00_1836 =
																		VECTOR_REF(BgL_lavz00_1835,
																		(int) (((long) 0)));
																	{
																		long BgL_tokenz00_1838;

																		obj_t BgL_xz00_1839;

																		long BgL_yz00_1840;

																		long BgL_za7za7_1841;

																		BgL_tokenz00_1838 = ((long) 0);
																		BgL_xz00_1839 = BgL_g1958z00_1836;
																		BgL_yz00_1840 = ((long) 1);
																		BgL_za7za7_1841 = ((long) 0);
																	BgL_zc3anonymousza32626ze3z83_1842:
																		if (
																			(BgL_tokenz00_1838 <
																				(long)
																				CINT(BGl_ntermsz00zz__lalr_globalz00)))
																			{	/* Lalr/lalr.scm 970 */
																				{	/* Lalr/lalr.scm 972 */
																					long BgL_inzd2lazd2setzf3zf3_1844;

																					BgL_inzd2lazd2setzf3zf3_1844 =
																						BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
																						((long) CINT(BgL_xz00_1839),
																						((long) 2));
																					if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																						(BINT(BgL_inzd2lazd2setzf3zf3_1844),
																							BINT(((long) 1))))
																						{	/* Lalr/lalr.scm 973 */
																							BGl_addzd2actionzd2zz__lalr_expandz00
																								(BINT(BgL_iz00_1818),
																								BgL_tokenz00_1838,
																								BINT(BgL_rulez00_1834));
																						}
																					else
																						{	/* Lalr/lalr.scm 973 */
																							BFALSE;
																						}
																				}
																				if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																					(BINT(BgL_yz00_1840),
																						BINT(((long) 28))))
																					{	/* Lalr/lalr.scm 976 */
																						long BgL_arg2630z00_1847;

																						obj_t BgL_arg2631z00_1848;

																						long BgL_arg2633z00_1850;

																						BgL_arg2630z00_1847 =
																							(BgL_tokenz00_1838 + ((long) 1));
																						{	/* Lalr/lalr.scm 977 */
																							long BgL_arg2634z00_1851;

																							BgL_arg2634z00_1851 =
																								(BgL_za7za7_1841 + ((long) 1));
																							BgL_arg2631z00_1848 =
																								VECTOR_REF(BgL_lavz00_1835,
																								(int) (BgL_arg2634z00_1851));
																						}
																						BgL_arg2633z00_1850 =
																							(BgL_za7za7_1841 + ((long) 1));
																						{
																							long BgL_za7za7_5891;

																							long BgL_yz00_5890;

																							obj_t BgL_xz00_5889;

																							long BgL_tokenz00_5888;

																							BgL_tokenz00_5888 =
																								BgL_arg2630z00_1847;
																							BgL_xz00_5889 =
																								BgL_arg2631z00_1848;
																							BgL_yz00_5890 = ((long) 1);
																							BgL_za7za7_5891 =
																								BgL_arg2633z00_1850;
																							BgL_za7za7_1841 = BgL_za7za7_5891;
																							BgL_yz00_1840 = BgL_yz00_5890;
																							BgL_xz00_1839 = BgL_xz00_5889;
																							BgL_tokenz00_1838 =
																								BgL_tokenz00_5888;
																							goto
																								BgL_zc3anonymousza32626ze3z83_1842;
																						}
																					}
																				else
																					{	/* Lalr/lalr.scm 980 */
																						long BgL_arg2635z00_1852;

																						long BgL_arg2636z00_1853;

																						long BgL_arg2637z00_1854;

																						BgL_arg2635z00_1852 =
																							(BgL_tokenz00_1838 + ((long) 1));
																						{	/* Lalr/lalr.scm 980 */
																							long BgL_auxz00_5893;

																							BgL_auxz00_5893 =
																								(long) CINT(BgL_xz00_1839);
																							BgL_arg2636z00_1853 =
																								(BgL_auxz00_5893 / ((long) 2));
																						}
																						BgL_arg2637z00_1854 =
																							(BgL_yz00_1840 + ((long) 1));
																						{
																							long BgL_yz00_5900;

																							obj_t BgL_xz00_5898;

																							long BgL_tokenz00_5897;

																							BgL_tokenz00_5897 =
																								BgL_arg2635z00_1852;
																							BgL_xz00_5898 =
																								BINT(BgL_arg2636z00_1853);
																							BgL_yz00_5900 =
																								BgL_arg2637z00_1854;
																							BgL_yz00_1840 = BgL_yz00_5900;
																							BgL_xz00_1839 = BgL_xz00_5898;
																							BgL_tokenz00_1838 =
																								BgL_tokenz00_5897;
																							goto
																								BgL_zc3anonymousza32626ze3z83_1842;
																						}
																					}
																			}
																		else
																			{	/* Lalr/lalr.scm 970 */
																				((bool_t) 0);
																			}
																	}
																}
																{	/* Lalr/lalr.scm 981 */
																	long BgL_arg2638z00_1856;

																	BgL_arg2638z00_1856 =
																		((long) CINT(BgL_jz00_1831) + ((long) 1));
																	{
																		obj_t BgL_jz00_5903;

																		BgL_jz00_5903 = BINT(BgL_arg2638z00_1856);
																		BgL_jz00_1831 = BgL_jz00_5903;
																		goto BgL_zc3anonymousza32624ze3z83_1832;
																	}
																}
															}
														else
															{	/* Lalr/lalr.scm 966 */
																((bool_t) 0);
															}
													}
												}
											}
									}
								else
									{	/* Lalr/lalr.scm 957 */
										((bool_t) 0);
									}
							}
						}
						{	/* Lalr/lalr.scm 983 */
							obj_t BgL_shiftpz00_1865;

							BgL_shiftpz00_1865 =
								VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
								(int) (BgL_iz00_1818));
							if (CBOOL(BgL_shiftpz00_1865))
								{	/* Lalr/lalr.scm 985 */
									obj_t BgL_g1959z00_1866;

									BgL_g1959z00_1866 =
										VECTOR_REF(BgL_shiftpz00_1865, (int) (((long) 2)));
									{
										obj_t BgL_kz00_1868;

										BgL_kz00_1868 = BgL_g1959z00_1866;
									BgL_zc3anonymousza32646ze3z83_1869:
										if (PAIRP(BgL_kz00_1868))
											{	/* Lalr/lalr.scm 987 */
												obj_t BgL_statez00_1871;

												BgL_statez00_1871 = CAR(BgL_kz00_1868);
												{	/* Lalr/lalr.scm 987 */
													obj_t BgL_symbolz00_1872;

													BgL_symbolz00_1872 =
														VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
														CINT(BgL_statez00_1871));
													{	/* Lalr/lalr.scm 988 */

														if (
															((long) CINT(BgL_symbolz00_1872) >=
																(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
															{	/* Lalr/lalr.scm 989 */
																BGl_addzd2actionzd2zz__lalr_expandz00(BINT
																	(BgL_iz00_1818),
																	((long) CINT(BgL_symbolz00_1872) -
																		(long)
																		CINT(BGl_nvarsz00zz__lalr_globalz00)),
																	BgL_statez00_1871);
															}
														else
															{	/* Lalr/lalr.scm 989 */
																BFALSE;
															}
														{
															obj_t BgL_kz00_5925;

															BgL_kz00_5925 = CDR(BgL_kz00_1868);
															BgL_kz00_1868 = BgL_kz00_5925;
															goto BgL_zc3anonymousza32646ze3z83_1869;
														}
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 986 */
												((bool_t) 0);
											}
									}
								}
							else
								{	/* Lalr/lalr.scm 984 */
									((bool_t) 0);
								}
						}
						{
							long BgL_iz00_5927;

							BgL_iz00_5927 = (BgL_iz00_1818 + ((long) 1));
							BgL_iz00_1818 = BgL_iz00_5927;
							goto BgL_zc3anonymousza32616ze3z83_1819;
						}
					}
			}
			return
				BGl_addzd2actionzd2zz__lalr_expandz00
				(BGl_finalzd2statezd2zz__lalr_globalz00, ((long) 0),
				BGl_symbol3049z00zz__lalr_expandz00);
		}
	}



/* add-action */
	obj_t BGl_addzd2actionzd2zz__lalr_expandz00(obj_t BgL_stz00_1879,
		long BgL_symz00_1880, obj_t BgL_actz00_1881)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 945 */
			{	/* Lalr/lalr.scm 881 */
				obj_t BgL_xz00_1883;

				BgL_xz00_1883 =
					VECTOR_REF(BGl_actionzd2tablezd2zz__lalr_globalz00,
					CINT(BgL_stz00_1879));
				{	/* Lalr/lalr.scm 881 */
					obj_t BgL_yz00_1884;

					BgL_yz00_1884 =
						BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_symz00_1880),
						BgL_xz00_1883);
					{	/* Lalr/lalr.scm 882 */

						if (CBOOL(BgL_yz00_1884))
							{	/* Lalr/lalr.scm 884 */
								obj_t BgL_curzd2preczd2_1885;

								obj_t BgL_newzd2preczd2_1886;

								{	/* Lalr/lalr.scm 884 */
									obj_t BgL_arg2713z00_1955;

									BgL_arg2713z00_1955 = CDR(BgL_yz00_1884);
									if (((long) CINT(BgL_arg2713z00_1955) <= ((long) 0)))
										{	/* Lalr/lalr.scm 884 */
											long BgL_arg2612z00_3857;

											BgL_arg2612z00_3857 =
												NEG((long) CINT(BgL_arg2713z00_1955));
											BgL_curzd2preczd2_1885 =
												VECTOR_REF(BGl_rprecz00zz__lalr_globalz00,
												(int) (BgL_arg2612z00_3857));
										}
									else
										{	/* Lalr/lalr.scm 884 */
											obj_t BgL_arg2613z00_3858;

											obj_t BgL_arg2614z00_3859;

											{	/* Lalr/lalr.scm 884 */
												long BgL_arg2615z00_3860;

												BgL_arg2615z00_3860 =
													(BgL_symz00_1880 +
													(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
												BgL_arg2613z00_3858 =
													VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
													(int) (BgL_arg2615z00_3860));
											}
											BgL_arg2614z00_3859 = BGl_symbol3027z00zz__lalr_expandz00;
											BgL_curzd2preczd2_1885 =
												BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg2613z00_3858,
												BgL_arg2614z00_3859);
								}}
								if (((long) CINT(BgL_actz00_1881) <= ((long) 0)))
									{	/* Lalr/lalr.scm 885 */
										long BgL_arg2612z00_3873;

										BgL_arg2612z00_3873 = NEG((long) CINT(BgL_actz00_1881));
										BgL_newzd2preczd2_1886 =
											VECTOR_REF(BGl_rprecz00zz__lalr_globalz00,
											(int) (BgL_arg2612z00_3873));
									}
								else
									{	/* Lalr/lalr.scm 885 */
										obj_t BgL_arg2613z00_3874;

										obj_t BgL_arg2614z00_3875;

										{	/* Lalr/lalr.scm 885 */
											long BgL_arg2615z00_3876;

											BgL_arg2615z00_3876 =
												(BgL_symz00_1880 +
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
											BgL_arg2613z00_3874 =
												VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
												(int) (BgL_arg2615z00_3876));
										}
										BgL_arg2614z00_3875 = BGl_symbol3027z00zz__lalr_expandz00;
										BgL_newzd2preczd2_1886 =
											BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg2613z00_3874,
											BgL_arg2614z00_3875);
									}
								{	/* Lalr/lalr.scm 887 */
									bool_t BgL_testz00_5961;

									{	/* Lalr/lalr.scm 887 */
										long BgL_auxz00_5962;

										{	/* Lalr/lalr.scm 887 */
											obj_t BgL_pairz00_3886;

											BgL_pairz00_3886 = BgL_yz00_1884;
											BgL_auxz00_5962 = (long) CINT(CDR(BgL_pairz00_3886));
										}
										BgL_testz00_5961 =
											((long) CINT(BgL_actz00_1881) == BgL_auxz00_5962);
									}
									if (BgL_testz00_5961)
										{	/* Lalr/lalr.scm 887 */
											return BTRUE;
										}
									else
										{	/* Lalr/lalr.scm 889 */
											bool_t BgL_testz00_5967;

											{	/* Lalr/lalr.scm 889 */
												bool_t BgL_testz00_5968;

												{	/* Lalr/lalr.scm 889 */
													long BgL_auxz00_5969;

													{	/* Lalr/lalr.scm 889 */
														obj_t BgL_pairz00_3889;

														BgL_pairz00_3889 = BgL_yz00_1884;
														BgL_auxz00_5969 =
															(long) CINT(CDR(BgL_pairz00_3889));
													}
													BgL_testz00_5968 = (BgL_auxz00_5969 <= ((long) 0));
												}
												if (BgL_testz00_5968)
													{	/* Lalr/lalr.scm 889 */
														BgL_testz00_5967 =
															((long) CINT(BgL_actz00_1881) <= ((long) 0));
													}
												else
													{	/* Lalr/lalr.scm 889 */
														BgL_testz00_5967 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_5967)
												{	/* Lalr/lalr.scm 889 */
													{	/* Lalr/lalr.scm 891 */
														obj_t BgL_arg2658z00_1892;

														obj_t BgL_arg2660z00_1894;

														obj_t BgL_arg2663z00_1896;

														BgL_arg2658z00_1892 =
															BGl_buildzd2rulezd2zz__lalr_expandz00(NEG(
																(long) CINT(BgL_actz00_1881)));
														{	/* Lalr/lalr.scm 894 */
															long BgL_arg2675z00_1908;

															{	/* Lalr/lalr.scm 894 */
																long BgL_auxz00_5978;

																{	/* Lalr/lalr.scm 894 */
																	obj_t BgL_pairz00_3895;

																	BgL_pairz00_3895 = BgL_yz00_1884;
																	BgL_auxz00_5978 =
																		(long) CINT(CDR(BgL_pairz00_3895));
																}
																BgL_arg2675z00_1908 = NEG(BgL_auxz00_5978);
															}
															BgL_arg2660z00_1894 =
																BGl_buildzd2rulezd2zz__lalr_expandz00
																(BgL_arg2675z00_1908);
														}
														{	/* Lalr/lalr.scm 895 */
															long BgL_arg2677z00_1910;

															BgL_arg2677z00_1910 =
																(
																(long) CINT(BGl_nvarsz00zz__lalr_globalz00) +
																BgL_symz00_1880);
															BgL_arg2663z00_1896 =
																VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
																(int) (BgL_arg2677z00_1910));
														}
														{	/* Lalr/lalr.scm 891 */
															obj_t BgL_list2665z00_1898;

															{	/* Lalr/lalr.scm 891 */
																obj_t BgL_arg2666z00_1899;

																{	/* Lalr/lalr.scm 891 */
																	obj_t BgL_arg2667z00_1900;

																	{	/* Lalr/lalr.scm 891 */
																		obj_t BgL_arg2668z00_1901;

																		{	/* Lalr/lalr.scm 891 */
																			obj_t BgL_arg2669z00_1902;

																			{	/* Lalr/lalr.scm 891 */
																				obj_t BgL_arg2670z00_1903;

																				{	/* Lalr/lalr.scm 891 */
																					obj_t BgL_arg2671z00_1904;

																					{	/* Lalr/lalr.scm 891 */
																						obj_t BgL_arg2672z00_1905;

																						{	/* Lalr/lalr.scm 891 */
																							obj_t BgL_arg2673z00_1906;

																							BgL_arg2673z00_1906 =
																								MAKE_PAIR
																								(BGl_string3051z00zz__lalr_expandz00,
																								BNIL);
																							BgL_arg2672z00_1905 =
																								MAKE_PAIR(BgL_arg2663z00_1896,
																								BgL_arg2673z00_1906);
																						}
																						BgL_arg2671z00_1904 =
																							MAKE_PAIR
																							(BGl_string3052z00zz__lalr_expandz00,
																							BgL_arg2672z00_1905);
																					}
																					BgL_arg2670z00_1903 =
																						MAKE_PAIR(BgL_arg2660z00_1894,
																						BgL_arg2671z00_1904);
																				}
																				BgL_arg2669z00_1902 =
																					MAKE_PAIR
																					(BGl_string3053z00zz__lalr_expandz00,
																					BgL_arg2670z00_1903);
																			}
																			BgL_arg2668z00_1901 =
																				MAKE_PAIR(BgL_arg2658z00_1892,
																				BgL_arg2669z00_1902);
																		}
																		BgL_arg2667z00_1900 =
																			MAKE_PAIR
																			(BGl_string3053z00zz__lalr_expandz00,
																			BgL_arg2668z00_1901);
																	}
																	BgL_arg2666z00_1899 =
																		MAKE_PAIR
																		(BGl_string3054z00zz__lalr_expandz00,
																		BgL_arg2667z00_1900);
																}
																BgL_list2665z00_1898 =
																	MAKE_PAIR(BGl_string3023z00zz__lalr_expandz00,
																	BgL_arg2666z00_1899);
															}
															BGl_warningz00zz__errorz00(BgL_list2665z00_1898);
													}}
													{	/* Lalr/lalr.scm 897 */
														obj_t BgL_auxz00_5997;

														BgL_auxz00_5997 =
															BGl_2maxz00zz__r4_numbers_6_5z00(CDR
															(BgL_yz00_1884), BgL_actz00_1881);
														return SET_CDR(BgL_yz00_1884, BgL_auxz00_5997);
													}
												}
											else
												{	/* Lalr/lalr.scm 898 */
													bool_t BgL_testz00_6001;

													if (CBOOL(BgL_curzd2preczd2_1885))
														{	/* Lalr/lalr.scm 898 */
															BgL_testz00_6001 = ((bool_t) 1);
														}
													else
														{	/* Lalr/lalr.scm 898 */
															BgL_testz00_6001 = CBOOL(BgL_newzd2preczd2_1886);
														}
													if (BgL_testz00_6001)
														{	/* Lalr/lalr.scm 898 */
															if (CBOOL(BgL_newzd2preczd2_1886))
																{	/* Lalr/lalr.scm 900 */
																	if (CBOOL(BgL_curzd2preczd2_1885))
																		{	/* Lalr/lalr.scm 904 */
																			bool_t BgL_testz00_6009;

																			{	/* Lalr/lalr.scm 904 */
																				long BgL_auxz00_6013;

																				long BgL_auxz00_6010;

																				{	/* Lalr/lalr.scm 904 */
																					obj_t BgL_pairz00_3905;

																					BgL_pairz00_3905 =
																						BgL_newzd2preczd2_1886;
																					BgL_auxz00_6013 =
																						(long) CINT(CDR(BgL_pairz00_3905));
																				}
																				{	/* Lalr/lalr.scm 904 */
																					obj_t BgL_pairz00_3904;

																					BgL_pairz00_3904 =
																						BgL_curzd2preczd2_1885;
																					BgL_auxz00_6010 =
																						(long) CINT(CDR(BgL_pairz00_3904));
																				}
																				BgL_testz00_6009 =
																					(BgL_auxz00_6010 == BgL_auxz00_6013);
																			}
																			if (BgL_testz00_6009)
																				{	/* Lalr/lalr.scm 906 */
																					obj_t BgL_shiftz00_1916;

																					obj_t BgL_reducez00_1917;

																					BgL_shiftz00_1916 =
																						BGl_2maxz00zz__r4_numbers_6_5z00(CDR
																						(BgL_yz00_1884), BgL_actz00_1881);
																					BgL_reducez00_1917 =
																						BGl_2minz00zz__r4_numbers_6_5z00(CDR
																						(BgL_yz00_1884), BgL_actz00_1881);
																					{	/* Lalr/lalr.scm 908 */
																						obj_t BgL_casezd2valuezd2_1918;

																						BgL_casezd2valuezd2_1918 =
																							CAR(BgL_curzd2preczd2_1885);
																						if (
																							(BgL_casezd2valuezd2_1918 ==
																								BGl_keyword3032z00zz__lalr_expandz00))
																							{	/* Lalr/lalr.scm 908 */
																								return
																									SET_CDR(BgL_yz00_1884,
																									BgL_reducez00_1917);
																							}
																						else
																							{	/* Lalr/lalr.scm 908 */
																								if (
																									(BgL_casezd2valuezd2_1918 ==
																										BGl_keyword3034z00zz__lalr_expandz00))
																									{	/* Lalr/lalr.scm 908 */
																										return
																											SET_CDR(BgL_yz00_1884,
																											BgL_shiftz00_1916);
																									}
																								else
																									{	/* Lalr/lalr.scm 908 */
																										if (
																											(BgL_casezd2valuezd2_1918
																												==
																												BGl_keyword3036z00zz__lalr_expandz00))
																											{	/* Lalr/lalr.scm 908 */
																												return
																													SET_CDR(BgL_yz00_1884,
																													BGl_symbol3055z00zz__lalr_expandz00);
																											}
																										else
																											{	/* Lalr/lalr.scm 908 */
																												return BUNSPEC;
																											}
																									}
																							}
																					}
																				}
																			else
																				{	/* Lalr/lalr.scm 931 */
																					bool_t BgL_testz00_6031;

																					{	/* Lalr/lalr.scm 931 */
																						long BgL_auxz00_6035;

																						long BgL_auxz00_6032;

																						{	/* Lalr/lalr.scm 931 */
																							obj_t BgL_pairz00_3924;

																							BgL_pairz00_3924 =
																								BgL_newzd2preczd2_1886;
																							BgL_auxz00_6035 =
																								(long)
																								CINT(CDR(BgL_pairz00_3924));
																						}
																						{	/* Lalr/lalr.scm 931 */
																							obj_t BgL_pairz00_3923;

																							BgL_pairz00_3923 =
																								BgL_curzd2preczd2_1885;
																							BgL_auxz00_6032 =
																								(long)
																								CINT(CDR(BgL_pairz00_3923));
																						}
																						BgL_testz00_6031 =
																							(BgL_auxz00_6032 >
																							BgL_auxz00_6035);
																					}
																					if (BgL_testz00_6031)
																						{	/* Lalr/lalr.scm 931 */
																							return
																								SET_CDR(BgL_yz00_1884,
																								BgL_actz00_1881);
																						}
																					else
																						{	/* Lalr/lalr.scm 931 */
																							return BTRUE;
																						}
																				}
																		}
																	else
																		{	/* Lalr/lalr.scm 902 */
																			return
																				SET_CDR(BgL_yz00_1884, BgL_actz00_1881);
																		}
																}
															else
																{	/* Lalr/lalr.scm 900 */
																	return BTRUE;
																}
														}
													else
														{	/* Lalr/lalr.scm 898 */
															{	/* Lalr/lalr.scm 938 */
																obj_t BgL_arg2693z00_1935;

																obj_t BgL_arg2695z00_1937;

																{	/* Lalr/lalr.scm 941 */
																	long BgL_arg2706z00_1948;

																	{	/* Lalr/lalr.scm 941 */
																		long BgL_auxz00_6041;

																		{	/* Lalr/lalr.scm 941 */
																			obj_t BgL_pairz00_3931;

																			BgL_pairz00_3931 = BgL_yz00_1884;
																			BgL_auxz00_6041 =
																				(long) CINT(CDR(BgL_pairz00_3931));
																		}
																		BgL_arg2706z00_1948 = NEG(BgL_auxz00_6041);
																	}
																	BgL_arg2693z00_1935 =
																		BGl_buildzd2rulezd2zz__lalr_expandz00
																		(BgL_arg2706z00_1948);
																}
																{	/* Lalr/lalr.scm 942 */
																	long BgL_arg2708z00_1950;

																	BgL_arg2708z00_1950 =
																		(
																		(long) CINT(BGl_nvarsz00zz__lalr_globalz00)
																		+ BgL_symz00_1880);
																	BgL_arg2695z00_1937 =
																		VECTOR_REF
																		(BGl_za2symvza2z00zz__lalr_rewritez00,
																		(int) (BgL_arg2708z00_1950));
																}
																{	/* Lalr/lalr.scm 938 */
																	obj_t BgL_list2697z00_1939;

																	{	/* Lalr/lalr.scm 938 */
																		obj_t BgL_arg2698z00_1940;

																		{	/* Lalr/lalr.scm 938 */
																			obj_t BgL_arg2699z00_1941;

																			{	/* Lalr/lalr.scm 938 */
																				obj_t BgL_arg2700z00_1942;

																				{	/* Lalr/lalr.scm 938 */
																					obj_t BgL_arg2701z00_1943;

																					{	/* Lalr/lalr.scm 938 */
																						obj_t BgL_arg2702z00_1944;

																						{	/* Lalr/lalr.scm 938 */
																							obj_t BgL_arg2703z00_1945;

																							{	/* Lalr/lalr.scm 938 */
																								obj_t BgL_arg2704z00_1946;

																								{	/* Lalr/lalr.scm 938 */
																									obj_t BgL_arg2705z00_1947;

																									BgL_arg2705z00_1947 =
																										MAKE_PAIR
																										(BGl_string3051z00zz__lalr_expandz00,
																										BNIL);
																									BgL_arg2704z00_1946 =
																										MAKE_PAIR
																										(BgL_arg2695z00_1937,
																										BgL_arg2705z00_1947);
																								}
																								BgL_arg2703z00_1945 =
																									MAKE_PAIR
																									(BGl_string3052z00zz__lalr_expandz00,
																									BgL_arg2704z00_1946);
																							}
																							BgL_arg2702z00_1944 =
																								MAKE_PAIR(BgL_arg2693z00_1935,
																								BgL_arg2703z00_1945);
																						}
																						BgL_arg2701z00_1943 =
																							MAKE_PAIR
																							(BGl_string3057z00zz__lalr_expandz00,
																							BgL_arg2702z00_1944);
																					}
																					BgL_arg2700z00_1942 =
																						MAKE_PAIR(BgL_actz00_1881,
																						BgL_arg2701z00_1943);
																				}
																				BgL_arg2699z00_1941 =
																					MAKE_PAIR
																					(BGl_string3058z00zz__lalr_expandz00,
																					BgL_arg2700z00_1942);
																			}
																			BgL_arg2698z00_1940 =
																				MAKE_PAIR
																				(BGl_string3059z00zz__lalr_expandz00,
																				BgL_arg2699z00_1941);
																		}
																		BgL_list2697z00_1939 =
																			MAKE_PAIR
																			(BGl_string3023z00zz__lalr_expandz00,
																			BgL_arg2698z00_1940);
																	}
																	BGl_warningz00zz__errorz00
																		(BgL_list2697z00_1939);
															}}
															return SET_CDR(BgL_yz00_1884, BgL_actz00_1881);
														}
												}
										}
								}
							}
						else
							{	/* Lalr/lalr.scm 945 */
								obj_t BgL_arg2714z00_1956;

								{	/* Lalr/lalr.scm 945 */
									obj_t BgL_arg2716z00_1957;

									BgL_arg2716z00_1957 =
										MAKE_PAIR(BINT(BgL_symz00_1880), BgL_actz00_1881);
									BgL_arg2714z00_1956 =
										MAKE_PAIR(BgL_arg2716z00_1957, BgL_xz00_1883);
								}
								return
									VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
									CINT(BgL_stz00_1879), BgL_arg2714z00_1956);
							}
					}
				}
			}
		}
	}



/* compact-action-table */
	bool_t BGl_compactzd2actionzd2tablez00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 995 */
			{
				obj_t BgL_actsz00_1992;

				{
					long BgL_iz00_1971;

					BgL_iz00_1971 = ((long) 0);
				BgL_zc3anonymousza32721ze3z83_1972:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1971),
							BGl_nstatesz00zz__lalr_globalz00))
						{	/* Lalr/lalr.scm 1016 */
							return ((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 1016 */
							{	/* Lalr/lalr.scm 1018 */
								obj_t BgL_actsz00_1974;

								BgL_actsz00_1974 =
									VECTOR_REF(BGl_actionzd2tablezd2zz__lalr_globalz00,
									(int) (BgL_iz00_1971));
								{	/* Lalr/lalr.scm 1019 */
									bool_t BgL_testz00_6071;

									{	/* Lalr/lalr.scm 1019 */
										obj_t BgL_auxz00_6072;

										BgL_auxz00_6072 =
											VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
											(int) (BgL_iz00_1971));
										BgL_testz00_6071 = VECTORP(BgL_auxz00_6072);
									}
									if (BgL_testz00_6071)
										{	/* Lalr/lalr.scm 1020 */
											obj_t BgL_actz00_1976;

											BgL_actsz00_1992 = BgL_actsz00_1974;
											{	/* Lalr/lalr.scm 997 */
												obj_t BgL_accumsz00_1994;

												BgL_accumsz00_1994 = BNIL;
												{
													obj_t BgL_lz00_1996;

													BgL_lz00_1996 = BgL_actsz00_1992;
												BgL_zc3anonymousza32737ze3z83_1997:
													if (PAIRP(BgL_lz00_1996))
														{	/* Lalr/lalr.scm 1000 */
															obj_t BgL_xz00_1999;

															BgL_xz00_1999 = CDR(CAR(BgL_lz00_1996));
															{	/* Lalr/lalr.scm 1000 */
																obj_t BgL_yz00_2000;

																BgL_yz00_2000 =
																	BGl_assvz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_xz00_1999, BgL_accumsz00_1994);
																{	/* Lalr/lalr.scm 1001 */

																	{	/* Lalr/lalr.scm 1002 */
																		bool_t BgL_testz00_6081;

																		if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																			(BgL_xz00_1999))
																			{	/* Lalr/lalr.scm 1002 */
																				BgL_testz00_6081 =
																					(
																					(long) CINT(BgL_xz00_1999) <
																					((long) 0));
																			}
																		else
																			{	/* Lalr/lalr.scm 1002 */
																				BgL_testz00_6081 = ((bool_t) 0);
																			}
																		if (BgL_testz00_6081)
																			{	/* Lalr/lalr.scm 1002 */
																				if (CBOOL(BgL_yz00_2000))
																					{	/* Lalr/lalr.scm 1004 */
																						long BgL_arg2740z00_2002;

																						{	/* Lalr/lalr.scm 1004 */
																							long BgL_auxz00_6088;

																							{	/* Lalr/lalr.scm 1004 */
																								obj_t BgL_pairz00_3980;

																								BgL_pairz00_3980 =
																									BgL_yz00_2000;
																								BgL_auxz00_6088 =
																									(long)
																									CINT(CDR(BgL_pairz00_3980));
																							}
																							BgL_arg2740z00_2002 =
																								(((long) 1) + BgL_auxz00_6088);
																						}
																						{	/* Lalr/lalr.scm 1004 */
																							obj_t BgL_auxz00_6092;

																							BgL_auxz00_6092 =
																								BINT(BgL_arg2740z00_2002);
																							SET_CDR(BgL_yz00_2000,
																								BgL_auxz00_6092);
																					}}
																				else
																					{	/* Lalr/lalr.scm 1005 */
																						obj_t BgL_arg2743z00_2005;

																						BgL_arg2743z00_2005 =
																							MAKE_PAIR(BgL_xz00_1999,
																							BINT(((long) 1)));
																						BgL_accumsz00_1994 =
																							MAKE_PAIR(BgL_arg2743z00_2005,
																							BgL_accumsz00_1994);
																			}}
																		else
																			{	/* Lalr/lalr.scm 1002 */
																				BFALSE;
																			}
																	}
																	{
																		obj_t BgL_lz00_6098;

																		BgL_lz00_6098 = CDR(BgL_lz00_1996);
																		BgL_lz00_1996 = BgL_lz00_6098;
																		goto BgL_zc3anonymousza32737ze3z83_1997;
																	}
																}
															}
														}
													else
														{	/* Lalr/lalr.scm 999 */
															((bool_t) 0);
														}
												}
												{
													obj_t BgL_lz00_3987;

													obj_t BgL_maxz00_3988;

													obj_t BgL_symz00_3989;

													BgL_lz00_3987 = BgL_accumsz00_1994;
													BgL_maxz00_3988 = BINT(((long) 0));
													BgL_symz00_3989 = BFALSE;
												BgL_loopz00_3986:
													if (NULLP(BgL_lz00_3987))
														{	/* Lalr/lalr.scm 1008 */
															BgL_actz00_1976 = BgL_symz00_3989;
														}
													else
														{	/* Lalr/lalr.scm 1008 */
															obj_t BgL_xz00_3999;

															BgL_xz00_3999 = CAR(BgL_lz00_3987);
															{	/* Lalr/lalr.scm 1008 */
																bool_t BgL_testz00_6103;

																{	/* Lalr/lalr.scm 1008 */
																	long BgL_auxz00_6104;

																	{	/* Lalr/lalr.scm 1008 */
																		obj_t BgL_pairz00_4008;

																		BgL_pairz00_4008 = BgL_xz00_3999;
																		BgL_auxz00_6104 =
																			(long) CINT(CDR(BgL_pairz00_4008));
																	}
																	BgL_testz00_6103 =
																		(BgL_auxz00_6104 >
																		(long) CINT(BgL_maxz00_3988));
																}
																if (BgL_testz00_6103)
																	{
																		obj_t BgL_symz00_6113;

																		obj_t BgL_maxz00_6111;

																		obj_t BgL_lz00_6109;

																		BgL_lz00_6109 = CDR(BgL_lz00_3987);
																		BgL_maxz00_6111 = CDR(BgL_xz00_3999);
																		BgL_symz00_6113 = CAR(BgL_xz00_3999);
																		BgL_symz00_3989 = BgL_symz00_6113;
																		BgL_maxz00_3988 = BgL_maxz00_6111;
																		BgL_lz00_3987 = BgL_lz00_6109;
																		goto BgL_loopz00_3986;
																	}
																else
																	{
																		obj_t BgL_lz00_6115;

																		BgL_lz00_6115 = CDR(BgL_lz00_3987);
																		BgL_lz00_3987 = BgL_lz00_6115;
																		goto BgL_loopz00_3986;
																	}
															}
														}
												}
											}
											{	/* Lalr/lalr.scm 1022 */
												obj_t BgL_arg2724z00_1977;

												{	/* Lalr/lalr.scm 1022 */
													obj_t BgL_arg2725z00_1978;

													obj_t BgL_arg2726z00_1979;

													{	/* Lalr/lalr.scm 1022 */
														obj_t BgL_arg2727z00_1980;

														if (CBOOL(BgL_actz00_1976))
															{	/* Lalr/lalr.scm 1022 */
																BgL_arg2727z00_1980 = BgL_actz00_1976;
															}
														else
															{	/* Lalr/lalr.scm 1022 */
																BgL_arg2727z00_1980 =
																	BGl_symbol3060z00zz__lalr_expandz00;
															}
														BgL_arg2725z00_1978 =
															MAKE_PAIR(BGl_za2defaultza2z00zz__lalr_expandz00,
															BgL_arg2727z00_1980);
													}
													{	/* Lalr/lalr.scm 1024 */
														obj_t BgL_zc3anonymousza32729ze3z83_4260;

														BgL_zc3anonymousza32729ze3z83_4260 =
															make_fx_procedure
															(BGl_zc3anonymousza32729ze3z83zz__lalr_expandz00,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3anonymousza32729ze3z83_4260,
															(int) (((long) 0)), BgL_actz00_1976);
														BgL_arg2726z00_1979 =
															BGl_filterz00zz__r4_control_features_6_9z00
															(BgL_zc3anonymousza32729ze3z83_4260,
															BgL_actsz00_1974);
													}
													BgL_arg2724z00_1977 =
														MAKE_PAIR(BgL_arg2725z00_1978, BgL_arg2726z00_1979);
												}
												VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
													(int) (BgL_iz00_1971), BgL_arg2724z00_1977);
										}}
									else
										{	/* Lalr/lalr.scm 1027 */
											obj_t BgL_arg2732z00_1987;

											{	/* Lalr/lalr.scm 1027 */
												obj_t BgL_arg2733z00_1988;

												BgL_arg2733z00_1988 =
													MAKE_PAIR(BGl_za2defaultza2z00zz__lalr_expandz00,
													BGl_symbol3055z00zz__lalr_expandz00);
												BgL_arg2732z00_1987 =
													MAKE_PAIR(BgL_arg2733z00_1988, BgL_actsz00_1974);
											}
											VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
												(int) (BgL_iz00_1971), BgL_arg2732z00_1987);
							}}}
							{
								long BgL_iz00_6134;

								BgL_iz00_6134 = (BgL_iz00_1971 + ((long) 1));
								BgL_iz00_1971 = BgL_iz00_6134;
								goto BgL_zc3anonymousza32721ze3z83_1972;
							}
						}
				}
			}
		}
	}



/* <anonymous:2729> */
	obj_t BGl_zc3anonymousza32729ze3z83zz__lalr_expandz00(obj_t BgL_envz00_4261,
		obj_t BgL_xz00_4263)
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 1023 */
			{	/* Lalr/lalr.scm 1024 */
				obj_t BgL_actz00_4262;

				BgL_actz00_4262 = PROCEDURE_REF(BgL_envz00_4261, (int) (((long) 0)));
				{
					obj_t BgL_xz00_1982;

					{	/* Lalr/lalr.scm 1024 */
						bool_t BgL_auxz00_6138;

						BgL_xz00_1982 = BgL_xz00_4263;
						if ((CDR(BgL_xz00_1982) == BgL_actz00_4262))
							{	/* Lalr/lalr.scm 1024 */
								BgL_auxz00_6138 = ((bool_t) 0);
							}
						else
							{	/* Lalr/lalr.scm 1024 */
								BgL_auxz00_6138 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_6138);
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_expandz00()
	{
		AN_OBJECT;
		{	/* Lalr/lalr.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_utilz00(((long) 95181058),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_genz00(((long) 425616954),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 45247587),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(((long) 229415577),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 32719508),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
			return BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string3062z00zz__lalr_expandz00));
		}
	}

#ifdef __cplusplus
}
#endif
