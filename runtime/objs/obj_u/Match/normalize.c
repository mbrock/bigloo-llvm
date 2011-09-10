/*===========================================================================*/
/*   (Match/normalize.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Match/normalize.scm -indent -o objs/obj_u/Match/normalize.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2960z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2962z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2964z00zz__match_normaliza7eza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2966z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2969z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2973z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2975z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2979z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2983z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2987z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31989ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_symbol2991z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2994z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2996z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31991ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2999z00zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_vectorifyz00zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza32240ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32377ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31995ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_rze2macrozd2patternze2initzd2zz__match_normaliza7eza7 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza32244ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza32247ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32250ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static bool_t BGl_termzd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_normaliza7eza7();
	static obj_t BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl__extendze2rze2macrozd2envzd2zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32392ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32256ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza32395ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32259ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza32262ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_extendze2rze2macrozd2envzd2zz__match_normaliza7eza7(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32268ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_makezd2togglezd2zz__match_normaliza7eza7();
	static obj_t
		BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7(obj_t, obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_normaliza7eza7();
	static obj_t
		BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza32000ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32273ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static bool_t BGl_holezd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7();
	static obj_t
		BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
		(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32282ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32011ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl__normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32013ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32159ze3_2878z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32159ze3_2879z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2consz75zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32287ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32573ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32017ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32293ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32021ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32441ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32159ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_oczd2countzd2zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__match_normaliza7eza7();
	static bool_t
		BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_treezd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza32031ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7(obj_t);
	extern obj_t string_to_symbol(char *);
	static obj_t BGl_list2968z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32033ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32453ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list2977z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2978z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2981z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2982z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2985z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2986z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2990z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2989z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32036ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static long BGl_patternzd2lengthzd2zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_zc3anonymousza31939ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza31941ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31945ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32045ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32330ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32047ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza32337ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32192ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32341ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	static obj_t BGl_zc3anonymousza32195ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32060ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32344ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32062ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32198ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t);
	static bool_t BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl__matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31968ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31970ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	static obj_t BGl_zc3anonymousza31974ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32074ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32075ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2structz75zz__match_normaliza7eza7(obj_t);
	static bool_t BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31978ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2882z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2885z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2888z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2900z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2891z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2903z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2894z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2905z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2909z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32227ze3z83zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2912z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2915z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_standardiza7ezd2quotez75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2924z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2926z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2932z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2935z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__match_normaliza7eza7();
	static obj_t BGl_symbol2937z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2940z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_unboundzd2patternzd2zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2942z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2946z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2948z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2950z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2952z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2954z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2956z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2958z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2patternzd2envza7zz__match_normaliza7eza7,
		BgL_bgl__normaliza7a7eza7d2p3003z00,
		BGl__normaliza7ezd2patternz75zz__match_normaliza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2884z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a313004z00, va_generic_entry,
		BGl_zc3anonymousza31939ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2887z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a313005z00, va_generic_entry,
		BGl_zc3anonymousza31968ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2890z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a313006z00, va_generic_entry,
		BGl_zc3anonymousza31989ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2902z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323007z00, va_generic_entry,
		BGl_zc3anonymousza32060ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2893z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323008z00, va_generic_entry,
		BGl_zc3anonymousza32011ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2896z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323009z00, va_generic_entry,
		BGl_zc3anonymousza32031ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2907z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323010z00, va_generic_entry,
		BGl_zc3anonymousza32074ze3z83zz__match_normaliza7eza7, BUNSPEC, -3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2908z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323011z00,
		BGl_zc3anonymousza32159ze3z83zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2899z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323012z00, va_generic_entry,
		BGl_zc3anonymousza32045ze3z83zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2928z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323013z00,
		BGl_zc3anonymousza32159ze3_2878z83zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2945z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323014z00,
		BGl_zc3anonymousza32227ze3z83zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extendze2rze2macrozd2envzd2envz00zz__match_normaliza7eza7,
		BgL_bgl__extendza7e2rza7e2ma3015z00,
		BGl__extendze2rze2macrozd2envzd2zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_matchzd2definezd2recordzd2typez12zd2envz12zz__match_normaliza7eza7,
		BgL_bgl__matchza7d2defineza73016z00,
		BGl__matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2971z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323017z00,
		BGl_zc3anonymousza32441ze3z83zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2972z00zz__match_normaliza7eza7,
		BgL_bgl_za7c3anonymousza7a323018z00,
		BGl_zc3anonymousza32159ze3_2879z83zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2883z00zz__match_normaliza7eza7,
		BgL_bgl_string2883za700za7za7_3019za7, "atom", 4);
	      DEFINE_STRING(BGl_string2886z00zz__match_normaliza7eza7,
		BgL_bgl_string2886za700za7za7_3020za7, "or", 2);
	      DEFINE_STRING(BGl_string3000z00zz__match_normaliza7eza7,
		BgL_bgl_string3000za700za7za7_3021za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2889z00zz__match_normaliza7eza7,
		BgL_bgl_string2889za700za7za7_3022za7, "t-or", 4);
	      DEFINE_STRING(BGl_string3001z00zz__match_normaliza7eza7,
		BgL_bgl_string3001za700za7za7_3023za7, "No such structure ", 18);
	      DEFINE_STRING(BGl_string2901z00zz__match_normaliza7eza7,
		BgL_bgl_string2901za700za7za7_3024za7, "kwote", 5);
	      DEFINE_STRING(BGl_string3002z00zz__match_normaliza7eza7,
		BgL_bgl_string3002za700za7za7_3025za7, "__match_normalize", 17);
	      DEFINE_STRING(BGl_string2892z00zz__match_normaliza7eza7,
		BgL_bgl_string2892za700za7za7_3026za7, "and", 3);
	      DEFINE_STRING(BGl_string2904z00zz__match_normaliza7eza7,
		BgL_bgl_string2904za700za7za7_3027za7, "**Bad-Luck096561123523452**", 27);
	      DEFINE_STRING(BGl_string2895z00zz__match_normaliza7eza7,
		BgL_bgl_string2895za700za7za7_3028za7, "not", 3);
	      DEFINE_STRING(BGl_string2906z00zz__match_normaliza7eza7,
		BgL_bgl_string2906za700za7za7_3029za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2898z00zz__match_normaliza7eza7,
		BgL_bgl_string2898za700za7za7_3030za7, "?", 1);
	      DEFINE_STRING(BGl_string2910z00zz__match_normaliza7eza7,
		BgL_bgl_string2910za700za7za7_3031za7, "Pattern-Matching", 16);
	      DEFINE_STRING(BGl_string2911z00zz__match_normaliza7eza7,
		BgL_bgl_string2911za700za7za7_3032za7, "Illegal `kwote' form", 20);
	      DEFINE_STRING(BGl_string2913z00zz__match_normaliza7eza7,
		BgL_bgl_string2913za700za7za7_3033za7, "quote", 5);
	      DEFINE_STRING(BGl_string2914z00zz__match_normaliza7eza7,
		BgL_bgl_string2914za700za7za7_3034za7, "Illegal `?' form", 16);
	      DEFINE_STRING(BGl_string2916z00zz__match_normaliza7eza7,
		BgL_bgl_string2916za700za7za7_3035za7, "check", 5);
	      DEFINE_STRING(BGl_string2917z00zz__match_normaliza7eza7,
		BgL_bgl_string2917za700za7za7_3036za7, "Illegal `not'", 13);
	      DEFINE_STRING(BGl_string2918z00zz__match_normaliza7eza7,
		BgL_bgl_string2918za700za7za7_3037za7, "Illegal `and' form", 18);
	      DEFINE_STRING(BGl_string2920z00zz__match_normaliza7eza7,
		BgL_bgl_string2920za700za7za7_3038za7, "Incompatible alternative", 24);
	      DEFINE_STRING(BGl_string2919z00zz__match_normaliza7eza7,
		BgL_bgl_string2919za700za7za7_3039za7, "Illegal `t-or' form", 19);
	      DEFINE_STRING(BGl_string2921z00zz__match_normaliza7eza7,
		BgL_bgl_string2921za700za7za7_3040za7, "Illegal `or' form", 17);
	      DEFINE_STRING(BGl_string2922z00zz__match_normaliza7eza7,
		BgL_bgl_string2922za700za7za7_3041za7, "Illegal `atom' form", 19);
	      DEFINE_STRING(BGl_string2923z00zz__match_normaliza7eza7,
		BgL_bgl_string2923za700za7za7_3042za7,
		"Too many patterns provided for atom", 35);
	      DEFINE_STRING(BGl_string2925z00zz__match_normaliza7eza7,
		BgL_bgl_string2925za700za7za7_3043za7, "cons", 4);
	      DEFINE_STRING(BGl_string2927z00zz__match_normaliza7eza7,
		BgL_bgl_string2927za700za7za7_3044za7, "any", 3);
	      DEFINE_STRING(BGl_string2930z00zz__match_normaliza7eza7,
		BgL_bgl_string2930za700za7za7_3045za7, "standardize-pattern", 19);
	      DEFINE_STRING(BGl_string2929z00zz__match_normaliza7eza7,
		BgL_bgl_string2929za700za7za7_3046za7,
		"/tmp/bigloo/runtime/Match/normalize.scm", 39);
	      DEFINE_STRING(BGl_string2931z00zz__match_normaliza7eza7,
		BgL_bgl_string2931za700za7za7_3047za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2933z00zz__match_normaliza7eza7,
		BgL_bgl_string2933za700za7za7_3048za7, "?-", 2);
	      DEFINE_STRING(BGl_string2934z00zz__match_normaliza7eza7,
		BgL_bgl_string2934za700za7za7_3049za7, "standardize-patterns", 20);
	      DEFINE_STRING(BGl_string2936z00zz__match_normaliza7eza7,
		BgL_bgl_string2936za700za7za7_3050za7, "\077\077-", 3);
	      DEFINE_STRING(BGl_string2938z00zz__match_normaliza7eza7,
		BgL_bgl_string2938za700za7za7_3051za7, "\077\077?-", 4);
	      DEFINE_STRING(BGl_string2939z00zz__match_normaliza7eza7,
		BgL_bgl_string2939za700za7za7_3052za7, "g", 1);
	      DEFINE_STRING(BGl_string2941z00zz__match_normaliza7eza7,
		BgL_bgl_string2941za700za7za7_3053za7, "times", 5);
	      DEFINE_STRING(BGl_string2943z00zz__match_normaliza7eza7,
		BgL_bgl_string2943za700za7za7_3054za7, "hole", 4);
	      DEFINE_STRING(BGl_string2944z00zz__match_normaliza7eza7,
		BgL_bgl_string2944za700za7za7_3055za7, "HOLE-", 5);
	      DEFINE_STRING(BGl_string2947z00zz__match_normaliza7eza7,
		BgL_bgl_string2947za700za7za7_3056za7, "...", 3);
	      DEFINE_STRING(BGl_string2949z00zz__match_normaliza7eza7,
		BgL_bgl_string2949za700za7za7_3057za7, "value", 5);
	      DEFINE_STRING(BGl_string2951z00zz__match_normaliza7eza7,
		BgL_bgl_string2951za700za7za7_3058za7, "on", 2);
	      DEFINE_STRING(BGl_string2953z00zz__match_normaliza7eza7,
		BgL_bgl_string2953za700za7za7_3059za7, "off", 3);
	      DEFINE_STRING(BGl_string2955z00zz__match_normaliza7eza7,
		BgL_bgl_string2955za700za7za7_3060za7, "xcons", 5);
	      DEFINE_STRING(BGl_string2957z00zz__match_normaliza7eza7,
		BgL_bgl_string2957za700za7za7_3061za7, "var", 3);
	      DEFINE_STRING(BGl_string2959z00zz__match_normaliza7eza7,
		BgL_bgl_string2959za700za7za7_3062za7, "segment", 7);
	      DEFINE_STRING(BGl_string2961z00zz__match_normaliza7eza7,
		BgL_bgl_string2961za700za7za7_3063za7, "ssetq-append", 12);
	      DEFINE_STRING(BGl_string2963z00zz__match_normaliza7eza7,
		BgL_bgl_string2963za700za7za7_3064za7, "tree", 4);
	      DEFINE_STRING(BGl_string2965z00zz__match_normaliza7eza7,
		BgL_bgl_string2965za700za7za7_3065za7, "end-ssetq", 9);
	      DEFINE_STRING(BGl_string2967z00zz__match_normaliza7eza7,
		BgL_bgl_string2967za700za7za7_3066za7, "eval-append", 11);
	      DEFINE_STRING(BGl_string2970z00zz__match_normaliza7eza7,
		BgL_bgl_string2970za700za7za7_3067za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2974z00zz__match_normaliza7eza7,
		BgL_bgl_string2974za700za7za7_3068za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2976z00zz__match_normaliza7eza7,
		BgL_bgl_string2976za700za7za7_3069za7, "vector-cons", 11);
	      DEFINE_STRING(BGl_string2980z00zz__match_normaliza7eza7,
		BgL_bgl_string2980za700za7za7_3070za7, "vector-any", 10);
	      DEFINE_STRING(BGl_string2984z00zz__match_normaliza7eza7,
		BgL_bgl_string2984za700za7za7_3071za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2988z00zz__match_normaliza7eza7,
		BgL_bgl_string2988za700za7za7_3072za7, "vector-times", 12);
	      DEFINE_STRING(BGl_string2992z00zz__match_normaliza7eza7,
		BgL_bgl_string2992za700za7za7_3073za7, "define-struct", 13);
	      DEFINE_STRING(BGl_string2993z00zz__match_normaliza7eza7,
		BgL_bgl_string2993za700za7za7_3074za7, "Incorrect declaration: ", 23);
	      DEFINE_STRING(BGl_string2995z00zz__match_normaliza7eza7,
		BgL_bgl_string2995za700za7za7_3075za7, "Aborted", 7);
	      DEFINE_STRING(BGl_string2997z00zz__match_normaliza7eza7,
		BgL_bgl_string2997za700za7za7_3076za7, "define-record-type", 18);
	      DEFINE_STRING(BGl_string2998z00zz__match_normaliza7eza7,
		BgL_bgl_string2998za700za7za7_3077za7, "No such structure: ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_matchzd2definezd2structurez12zd2envzc0zz__match_normaliza7eza7,
		BgL_bgl__matchza7d2defineza73078z00,
		BGl__matchzd2definezd2structurez12z12zz__match_normaliza7eza7, 0L, BUNSPEC,
		1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long
		BgL_checksumz00_3518, char *BgL_fromz00_3519)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7))
				{
					BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__match_normaliza7eza7();
					BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7();
					BGl_toplevelzd2initzd2zz__match_normaliza7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 2 */
			BGl_symbol2882z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2883z00zz__match_normaliza7eza7);
			BGl_symbol2885z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2886z00zz__match_normaliza7eza7);
			BGl_symbol2888z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2889z00zz__match_normaliza7eza7);
			BGl_symbol2891z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2892z00zz__match_normaliza7eza7);
			BGl_symbol2894z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2895z00zz__match_normaliza7eza7);
			BGl_symbol2897z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2898z00zz__match_normaliza7eza7);
			BGl_symbol2900z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2901z00zz__match_normaliza7eza7);
			BGl_symbol2903z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2904z00zz__match_normaliza7eza7);
			BGl_symbol2905z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2906z00zz__match_normaliza7eza7);
			BGl_symbol2909z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2910z00zz__match_normaliza7eza7);
			BGl_symbol2912z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2913z00zz__match_normaliza7eza7);
			BGl_symbol2915z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2916z00zz__match_normaliza7eza7);
			BGl_symbol2924z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2925z00zz__match_normaliza7eza7);
			BGl_symbol2926z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2927z00zz__match_normaliza7eza7);
			BGl_symbol2932z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2933z00zz__match_normaliza7eza7);
			BGl_symbol2935z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2936z00zz__match_normaliza7eza7);
			BGl_symbol2937z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2938z00zz__match_normaliza7eza7);
			BGl_symbol2940z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2941z00zz__match_normaliza7eza7);
			BGl_symbol2942z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2943z00zz__match_normaliza7eza7);
			BGl_symbol2946z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2947z00zz__match_normaliza7eza7);
			BGl_symbol2948z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2949z00zz__match_normaliza7eza7);
			BGl_symbol2950z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2951z00zz__match_normaliza7eza7);
			BGl_symbol2952z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2953z00zz__match_normaliza7eza7);
			BGl_symbol2954z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2955z00zz__match_normaliza7eza7);
			BGl_symbol2956z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2957z00zz__match_normaliza7eza7);
			BGl_symbol2958z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2959z00zz__match_normaliza7eza7);
			BGl_symbol2960z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2961z00zz__match_normaliza7eza7);
			BGl_symbol2962z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2963z00zz__match_normaliza7eza7);
			BGl_symbol2964z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2965z00zz__match_normaliza7eza7);
			BGl_symbol2966z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2967z00zz__match_normaliza7eza7);
			BGl_symbol2969z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2970z00zz__match_normaliza7eza7);
			BGl_list2968z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2885z00zz__match_normaliza7eza7,
				MAKE_PAIR(BGl_symbol2891z00zz__match_normaliza7eza7,
					MAKE_PAIR(BGl_symbol2888z00zz__match_normaliza7eza7,
						MAKE_PAIR(BGl_symbol2969z00zz__match_normaliza7eza7,
							MAKE_PAIR(BGl_symbol2924z00zz__match_normaliza7eza7,
								MAKE_PAIR(BGl_symbol2894z00zz__match_normaliza7eza7, BNIL))))));
			BGl_symbol2973z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2974z00zz__match_normaliza7eza7);
			BGl_symbol2975z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2976z00zz__match_normaliza7eza7);
			BGl_list2977z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7, BNIL);
			BGl_symbol2979z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2980z00zz__match_normaliza7eza7);
			BGl_list2978z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2979z00zz__match_normaliza7eza7, BNIL);
			BGl_list2981z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2912z00zz__match_normaliza7eza7,
				MAKE_PAIR(BNIL, BNIL));
			BGl_symbol2983z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2984z00zz__match_normaliza7eza7);
			BGl_list2982z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2983z00zz__match_normaliza7eza7, BNIL);
			BGl_list2985z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2891z00zz__match_normaliza7eza7,
				MAKE_PAIR(BGl_symbol2885z00zz__match_normaliza7eza7,
					MAKE_PAIR(BGl_symbol2894z00zz__match_normaliza7eza7, BNIL)));
			BGl_list2986z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2940z00zz__match_normaliza7eza7,
				MAKE_PAIR(BGl_symbol2962z00zz__match_normaliza7eza7, BNIL));
			BGl_symbol2987z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2988z00zz__match_normaliza7eza7);
			BGl_list2989z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2935z00zz__match_normaliza7eza7,
				MAKE_PAIR(BGl_symbol2937z00zz__match_normaliza7eza7, BNIL));
			BGl_list2990z00zz__match_normaliza7eza7 =
				MAKE_PAIR(BGl_symbol2885z00zz__match_normaliza7eza7,
				MAKE_PAIR(BGl_symbol2891z00zz__match_normaliza7eza7,
					MAKE_PAIR(BGl_symbol2888z00zz__match_normaliza7eza7,
						MAKE_PAIR(BGl_symbol2969z00zz__match_normaliza7eza7, BNIL))));
			BGl_symbol2991z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2992z00zz__match_normaliza7eza7);
			BGl_symbol2994z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2995z00zz__match_normaliza7eza7);
			BGl_symbol2996z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2997z00zz__match_normaliza7eza7);
			return (BGl_symbol2999z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string3000z00zz__match_normaliza7eza7), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 2 */
			BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7 =
				BGl_makezd2togglezd2zz__match_normaliza7eza7();
			BGl_rze2macrozd2patternze2initzd2zz__match_normaliza7eza7 = BNIL;
			BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
				BGl_rze2macrozd2patternze2initzd2zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 357 */
				obj_t BgL_arg1937z00_823;

				BgL_arg1937z00_823 = BGl_symbol2882z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 357 */
					obj_t BgL_fnz00_2153;

					BgL_fnz00_2153 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 357 */
						obj_t BgL_arg2444z00_2155;

						BgL_arg2444z00_2155 =
							MAKE_PAIR(BgL_arg1937z00_823,
							BGl_proc2884z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2155, BgL_fnz00_2153);
					}
				}
			}
			BGl_symbol2882z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 372 */
				obj_t BgL_arg1966z00_860;

				BgL_arg1966z00_860 = BGl_symbol2885z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 372 */
					obj_t BgL_fnz00_2165;

					BgL_fnz00_2165 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 372 */
						obj_t BgL_arg2444z00_2167;

						BgL_arg2444z00_2167 =
							MAKE_PAIR(BgL_arg1966z00_860,
							BGl_proc2887z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2167, BgL_fnz00_2165);
					}
				}
			}
			BGl_symbol2885z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 406 */
				obj_t BgL_arg1987z00_893;

				BgL_arg1987z00_893 = BGl_symbol2888z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 406 */
					obj_t BgL_fnz00_2177;

					BgL_fnz00_2177 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 406 */
						obj_t BgL_arg2444z00_2179;

						BgL_arg2444z00_2179 =
							MAKE_PAIR(BgL_arg1987z00_893,
							BGl_proc2890z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2179, BgL_fnz00_2177);
					}
				}
			}
			BGl_symbol2888z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 425 */
				obj_t BgL_arg2009z00_926;

				BgL_arg2009z00_926 = BGl_symbol2891z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 425 */
					obj_t BgL_fnz00_2189;

					BgL_fnz00_2189 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 425 */
						obj_t BgL_arg2444z00_2191;

						BgL_arg2444z00_2191 =
							MAKE_PAIR(BgL_arg2009z00_926,
							BGl_proc2893z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2191, BgL_fnz00_2189);
					}
				}
			}
			BGl_symbol2891z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 441 */
				obj_t BgL_arg2029z00_957;

				BgL_arg2029z00_957 = BGl_symbol2894z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 441 */
					obj_t BgL_fnz00_2204;

					BgL_fnz00_2204 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 441 */
						obj_t BgL_arg2444z00_2206;

						BgL_arg2444z00_2206 =
							MAKE_PAIR(BgL_arg2029z00_957,
							BGl_proc2896z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2206, BgL_fnz00_2204);
					}
				}
			}
			BGl_symbol2894z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 451 */
				obj_t BgL_arg2043z00_979;

				BgL_arg2043z00_979 = BGl_symbol2897z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 451 */
					obj_t BgL_fnz00_2226;

					BgL_fnz00_2226 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 451 */
						obj_t BgL_arg2444z00_2228;

						BgL_arg2444z00_2228 =
							MAKE_PAIR(BgL_arg2043z00_979,
							BGl_proc2899z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2228, BgL_fnz00_2226);
					}
				}
			}
			BGl_symbol2897z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 457 */
				obj_t BgL_arg2058z00_996;

				BgL_arg2058z00_996 = BGl_symbol2900z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 457 */
					obj_t BgL_fnz00_2242;

					BgL_fnz00_2242 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 457 */
						obj_t BgL_arg2444z00_2244;

						BgL_arg2444z00_2244 =
							MAKE_PAIR(BgL_arg2058z00_996,
							BGl_proc2902z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2244, BgL_fnz00_2242);
					}
				}
			}
			BGl_symbol2900z00zz__match_normaliza7eza7;
			BGl_unboundzd2patternzd2zz__match_normaliza7eza7 =
				BGl_symbol2903z00zz__match_normaliza7eza7;
			BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7 = BNIL;
			{	/* Match/normalize.scm 560 */
				obj_t BgL_arg2072z00_1013;

				BgL_arg2072z00_1013 = BGl_symbol2905z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 560 */
					obj_t BgL_fnz00_2258;

					BgL_fnz00_2258 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 560 */
						obj_t BgL_arg2444z00_2260;

						BgL_arg2444z00_2260 =
							MAKE_PAIR(BgL_arg2072z00_1013,
							BGl_proc2907z00zz__match_normaliza7eza7);
						BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
							MAKE_PAIR(BgL_arg2444z00_2260, BgL_fnz00_2258);
					}
				}
			}
			return BGl_symbol2905z00zz__match_normaliza7eza7;
		}
	}



/* <anonymous:2074> */
	obj_t BGl_zc3anonymousza32074ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3235, obj_t BgL_namez00_3236, obj_t BgL_predz00_3237,
		obj_t BgL_eza2za2_3238)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 560 */
			{
				obj_t BgL_namez00_1015;

				obj_t BgL_predz00_1016;

				obj_t BgL_eza2za2_1017;

				BgL_namez00_1015 = BgL_namez00_3236;
				BgL_predz00_1016 = BgL_predz00_3237;
				BgL_eza2za2_1017 = BgL_eza2za2_3238;
				{	/* Match/normalize.scm 561 */
					obj_t BgL_zc3anonymousza32075ze3z83_3211;

					BgL_zc3anonymousza32075ze3z83_3211 =
						make_fx_procedure
						(BGl_zc3anonymousza32075ze3z83zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32075ze3z83_3211, (int) (((long) 0)),
						BgL_eza2za2_1017);
					PROCEDURE_SET(BgL_zc3anonymousza32075ze3z83_3211, (int) (((long) 1)),
						BgL_predz00_1016);
					PROCEDURE_SET(BgL_zc3anonymousza32075ze3z83_3211, (int) (((long) 2)),
						BgL_namez00_1015);
					return BgL_zc3anonymousza32075ze3z83_3211;
				}
			}
		}
	}



/* <anonymous:2075> */
	obj_t BGl_zc3anonymousza32075ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3239, obj_t BgL_rz00_3243, obj_t BgL_cz00_3244)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 561 */
			{	/* Match/normalize.scm 562 */
				obj_t BgL_eza2za2_3240;

				obj_t BgL_predz00_3241;

				obj_t BgL_namez00_3242;

				BgL_eza2za2_3240 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 0)));
				BgL_predz00_3241 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 1)));
				BgL_namez00_3242 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 2)));
				{
					obj_t BgL_rz00_1019;

					obj_t BgL_cz00_1020;

					BgL_rz00_1019 = BgL_rz00_3243;
					BgL_cz00_1020 = BgL_cz00_3244;
					{	/* Match/normalize.scm 562 */
						obj_t BgL_arg2076z00_1022;

						{	/* Match/normalize.scm 562 */
							obj_t BgL_arg2077z00_1023;

							obj_t BgL_arg2078z00_1024;

							BgL_arg2077z00_1023 = BGl_symbol2905z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 562 */
								obj_t BgL_arg2079z00_1025;

								{	/* Match/normalize.scm 562 */
									obj_t BgL_arg2082z00_1028;

									if (NULLP(BgL_eza2za2_3240))
										{	/* Match/normalize.scm 562 */
											BgL_arg2082z00_1028 = BNIL;
										}
									else
										{	/* Match/normalize.scm 562 */
											obj_t BgL_head1881z00_1032;

											{	/* Match/normalize.scm 562 */
												obj_t BgL_arg2093z00_1045;

												{	/* Match/normalize.scm 562 */
													obj_t BgL_arg2095z00_1047;

													BgL_arg2095z00_1047 = CAR(BgL_eza2za2_3240);
													{	/* Match/normalize.scm 562 */
														obj_t BgL_fun2158z00_2264;

														BgL_fun2158z00_2264 =
															BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
															(BgL_arg2095z00_1047);
														BgL_arg2093z00_1045 =
															PROCEDURE_ENTRY(BgL_fun2158z00_2264)
															(BgL_fun2158z00_2264,
															BGl_rze2macrozd2patternz30zz__match_normaliza7eza7,
															BGl_proc2908z00zz__match_normaliza7eza7, BEOA);
													}
												}
												BgL_head1881z00_1032 =
													MAKE_PAIR(BgL_arg2093z00_1045, BNIL);
											}
											{	/* Match/normalize.scm 562 */
												obj_t BgL_g1884z00_1033;

												BgL_g1884z00_1033 = CDR(BgL_eza2za2_3240);
												{
													obj_t BgL_l1879z00_2272;

													obj_t BgL_tail1882z00_2273;

													BgL_l1879z00_2272 = BgL_g1884z00_1033;
													BgL_tail1882z00_2273 = BgL_head1881z00_1032;
												BgL_zc3anonymousza32085ze3z83_2271:
													if (NULLP(BgL_l1879z00_2272))
														{	/* Match/normalize.scm 562 */
															BgL_arg2082z00_1028 = BgL_head1881z00_1032;
														}
													else
														{	/* Match/normalize.scm 562 */
															obj_t BgL_newtail1883z00_2281;

															BgL_newtail1883z00_2281 =
																MAKE_PAIR
																(BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7
																(CAR(BgL_l1879z00_2272)), BNIL);
															SET_CDR(BgL_tail1882z00_2273,
																BgL_newtail1883z00_2281);
															{
																obj_t BgL_tail1882z00_3636;

																obj_t BgL_l1879z00_3634;

																BgL_l1879z00_3634 = CDR(BgL_l1879z00_2272);
																BgL_tail1882z00_3636 = BgL_newtail1883z00_2281;
																BgL_tail1882z00_2273 = BgL_tail1882z00_3636;
																BgL_l1879z00_2272 = BgL_l1879z00_3634;
																goto BgL_zc3anonymousza32085ze3z83_2271;
															}
														}
												}
											}
										}
									BgL_arg2079z00_1025 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2082z00_1028, BNIL);
								}
								{	/* Match/normalize.scm 562 */
									obj_t BgL_list2080z00_1026;

									{	/* Match/normalize.scm 562 */
										obj_t BgL_arg2081z00_1027;

										BgL_arg2081z00_1027 = MAKE_PAIR(BgL_arg2079z00_1025, BNIL);
										BgL_list2080z00_1026 =
											MAKE_PAIR(BgL_predz00_3241, BgL_arg2081z00_1027);
									}
									BgL_arg2078z00_1024 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_3242, BgL_list2080z00_1026);
								}
							}
							BgL_arg2076z00_1022 =
								MAKE_PAIR(BgL_arg2077z00_1023, BgL_arg2078z00_1024);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_1020) (BgL_cz00_1020,
							BgL_arg2076z00_1022, BgL_rz00_1019, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2159> */
	obj_t BGl_zc3anonymousza32159ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3245, obj_t BgL_patternz00_3246, obj_t BgL_rrz00_3247)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 123 */
			return BgL_patternz00_3246;
		}
	}



/* <anonymous:2060> */
	obj_t BGl_zc3anonymousza32060ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3248, obj_t BgL_lz00_3249)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 457 */
			{
				obj_t BgL_lz00_998;

				BgL_lz00_998 = BgL_lz00_3249;
				{	/* Match/normalize.scm 458 */
					bool_t BgL_testz00_3644;

					if (NULLP(BgL_lz00_998))
						{	/* Match/normalize.scm 458 */
							BgL_testz00_3644 = ((bool_t) 1);
						}
					else
						{	/* Match/normalize.scm 458 */
							obj_t BgL_auxz00_3647;

							BgL_auxz00_3647 = CDR(BgL_lz00_998);
							BgL_testz00_3644 = PAIRP(BgL_auxz00_3647);
						}
					if (BgL_testz00_3644)
						{	/* Match/normalize.scm 458 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2909z00zz__match_normaliza7eza7,
								BGl_string2911z00zz__match_normaliza7eza7, BgL_lz00_998);
						}
					else
						{	/* Match/normalize.scm 460 */
							obj_t BgL_zc3anonymousza32062ze3z83_3213;

							BgL_zc3anonymousza32062ze3z83_3213 =
								make_fx_procedure
								(BGl_zc3anonymousza32062ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32062ze3z83_3213,
								(int) (((long) 0)), BgL_lz00_998);
							return BgL_zc3anonymousza32062ze3z83_3213;
						}
				}
			}
		}
	}



/* <anonymous:2062> */
	obj_t BGl_zc3anonymousza32062ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3250, obj_t BgL_rz00_3252, obj_t BgL_cz00_3253)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 460 */
			{	/* Match/normalize.scm 461 */
				obj_t BgL_lz00_3251;

				BgL_lz00_3251 = PROCEDURE_REF(BgL_envz00_3250, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1001;

					obj_t BgL_cz00_1002;

					BgL_rz00_1001 = BgL_rz00_3252;
					BgL_cz00_1002 = BgL_cz00_3253;
					{	/* Match/normalize.scm 461 */
						obj_t BgL_arg2063z00_2250;

						{	/* Match/normalize.scm 461 */
							obj_t BgL_arg2064z00_2251;

							obj_t BgL_arg2065z00_2252;

							BgL_arg2064z00_2251 = BGl_symbol2912z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 461 */
								obj_t BgL_arg2066z00_2253;

								BgL_arg2066z00_2253 = CAR(BgL_lz00_3251);
								{	/* Match/normalize.scm 461 */
									obj_t BgL_list2068z00_2255;

									BgL_list2068z00_2255 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2065z00_2252 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2066z00_2253, BgL_list2068z00_2255);
							}}
							BgL_arg2063z00_2250 =
								MAKE_PAIR(BgL_arg2064z00_2251, BgL_arg2065z00_2252);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_1002) (BgL_cz00_1002,
							BgL_arg2063z00_2250, BgL_rz00_1001, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2045> */
	obj_t BGl_zc3anonymousza32045ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3254, obj_t BgL_lz00_3255)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 451 */
			{
				obj_t BgL_lz00_981;

				BgL_lz00_981 = BgL_lz00_3255;
				{	/* Match/normalize.scm 452 */
					bool_t BgL_testz00_3664;

					if (NULLP(BgL_lz00_981))
						{	/* Match/normalize.scm 452 */
							BgL_testz00_3664 = ((bool_t) 1);
						}
					else
						{	/* Match/normalize.scm 452 */
							obj_t BgL_auxz00_3667;

							BgL_auxz00_3667 = CDR(BgL_lz00_981);
							BgL_testz00_3664 = PAIRP(BgL_auxz00_3667);
						}
					if (BgL_testz00_3664)
						{	/* Match/normalize.scm 452 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2909z00zz__match_normaliza7eza7,
								BGl_string2914z00zz__match_normaliza7eza7, BgL_lz00_981);
						}
					else
						{	/* Match/normalize.scm 454 */
							obj_t BgL_zc3anonymousza32047ze3z83_3215;

							BgL_zc3anonymousza32047ze3z83_3215 =
								make_fx_procedure
								(BGl_zc3anonymousza32047ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32047ze3z83_3215,
								(int) (((long) 0)), BgL_lz00_981);
							return BgL_zc3anonymousza32047ze3z83_3215;
						}
				}
			}
		}
	}



/* <anonymous:2047> */
	obj_t BGl_zc3anonymousza32047ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3256, obj_t BgL_rz00_3258, obj_t BgL_cz00_3259)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 454 */
			{	/* Match/normalize.scm 455 */
				obj_t BgL_lz00_3257;

				BgL_lz00_3257 = PROCEDURE_REF(BgL_envz00_3256, (int) (((long) 0)));
				{
					obj_t BgL_rz00_984;

					obj_t BgL_cz00_985;

					BgL_rz00_984 = BgL_rz00_3258;
					BgL_cz00_985 = BgL_cz00_3259;
					{	/* Match/normalize.scm 455 */
						obj_t BgL_arg2048z00_2234;

						{	/* Match/normalize.scm 455 */
							obj_t BgL_arg2051z00_2235;

							obj_t BgL_arg2052z00_2236;

							BgL_arg2051z00_2235 = BGl_symbol2915z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 455 */
								obj_t BgL_arg2053z00_2237;

								BgL_arg2053z00_2237 = CAR(BgL_lz00_3257);
								{	/* Match/normalize.scm 455 */
									obj_t BgL_list2055z00_2239;

									BgL_list2055z00_2239 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2052z00_2236 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2053z00_2237, BgL_list2055z00_2239);
							}}
							BgL_arg2048z00_2234 =
								MAKE_PAIR(BgL_arg2051z00_2235, BgL_arg2052z00_2236);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_985) (BgL_cz00_985, BgL_arg2048z00_2234,
							BgL_rz00_984, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2031> */
	obj_t BGl_zc3anonymousza32031ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3260, obj_t BgL_lz00_3261)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 441 */
			{
				obj_t BgL_lz00_959;

				BgL_lz00_959 = BgL_lz00_3261;
				{	/* Match/normalize.scm 442 */
					bool_t BgL_testz00_3684;

					if (NULLP(BgL_lz00_959))
						{	/* Match/normalize.scm 442 */
							BgL_testz00_3684 = ((bool_t) 1);
						}
					else
						{	/* Match/normalize.scm 442 */
							obj_t BgL_auxz00_3687;

							BgL_auxz00_3687 = CDR(BgL_lz00_959);
							BgL_testz00_3684 = PAIRP(BgL_auxz00_3687);
						}
					if (BgL_testz00_3684)
						{	/* Match/normalize.scm 442 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2909z00zz__match_normaliza7eza7,
								BGl_string2917z00zz__match_normaliza7eza7, BgL_lz00_959);
						}
					else
						{	/* Match/normalize.scm 444 */
							obj_t BgL_ez00_962;

							BgL_ez00_962 = CAR(BgL_lz00_959);
							{	/* Match/normalize.scm 445 */
								obj_t BgL_zc3anonymousza32033ze3z83_3218;

								BgL_zc3anonymousza32033ze3z83_3218 =
									make_fx_procedure
									(BGl_zc3anonymousza32033ze3z83zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza32033ze3z83_3218,
									(int) (((long) 0)), BgL_ez00_962);
								return BgL_zc3anonymousza32033ze3z83_3218;
							}
						}
				}
			}
		}
	}



/* <anonymous:2033> */
	obj_t BGl_zc3anonymousza32033ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3262, obj_t BgL_rz00_3264, obj_t BgL_cz00_3265)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 445 */
			{	/* Match/normalize.scm 446 */
				obj_t BgL_ez00_3263;

				BgL_ez00_3263 = PROCEDURE_REF(BgL_envz00_3262, (int) (((long) 0)));
				{
					obj_t BgL_rz00_963;

					obj_t BgL_cz00_964;

					BgL_rz00_963 = BgL_rz00_3264;
					BgL_cz00_964 = BgL_cz00_3265;
					{	/* Match/normalize.scm 446 */
						obj_t BgL_fun2035z00_2213;

						BgL_fun2035z00_2213 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3263);
						{	/* Match/normalize.scm 446 */
							obj_t BgL_zc3anonymousza32036ze3z83_3217;

							BgL_zc3anonymousza32036ze3z83_3217 =
								make_fx_procedure
								(BGl_zc3anonymousza32036ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32036ze3z83_3217,
								(int) (((long) 0)), BgL_cz00_964);
							PROCEDURE_SET(BgL_zc3anonymousza32036ze3z83_3217,
								(int) (((long) 1)), BgL_rz00_963);
							return PROCEDURE_ENTRY(BgL_fun2035z00_2213) (BgL_fun2035z00_2213,
								BgL_rz00_963, BgL_zc3anonymousza32036ze3z83_3217, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2036> */
	obj_t BGl_zc3anonymousza32036ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3266, obj_t BgL_patternz00_3269, obj_t BgL_rrz00_3270)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 448 */
			{	/* Match/normalize.scm 446 */
				obj_t BgL_cz00_3267;

				obj_t BgL_rz00_3268;

				BgL_cz00_3267 = PROCEDURE_REF(BgL_envz00_3266, (int) (((long) 0)));
				BgL_rz00_3268 = PROCEDURE_REF(BgL_envz00_3266, (int) (((long) 1)));
				{
					obj_t BgL_patternz00_2215;

					obj_t BgL_rrz00_2216;

					BgL_patternz00_2215 = BgL_patternz00_3269;
					BgL_rrz00_2216 = BgL_rrz00_3270;
					{	/* Match/normalize.scm 446 */
						obj_t BgL_arg2037z00_2221;

						{	/* Match/normalize.scm 446 */
							obj_t BgL_arg2038z00_2222;

							obj_t BgL_arg2039z00_2223;

							BgL_arg2038z00_2222 = BGl_symbol2894z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 446 */
								obj_t BgL_list2040z00_2224;

								BgL_list2040z00_2224 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2039z00_2223 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_patternz00_2215, BgL_list2040z00_2224);
							}
							BgL_arg2037z00_2221 =
								MAKE_PAIR(BgL_arg2038z00_2222, BgL_arg2039z00_2223);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3267) (BgL_cz00_3267,
							BgL_arg2037z00_2221, BgL_rz00_3268, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2011> */
	obj_t BGl_zc3anonymousza32011ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3271, obj_t BgL_lz00_3272)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 425 */
			{
				obj_t BgL_lz00_928;

				BgL_lz00_928 = BgL_lz00_3272;
				if (NULLP(BgL_lz00_928))
					{	/* Match/normalize.scm 427 */
						obj_t BgL_argz00_2194;

						BgL_argz00_2194 = BgL_lz00_928;
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2909z00zz__match_normaliza7eza7,
							BGl_string2918z00zz__match_normaliza7eza7, BgL_argz00_2194);
					}
				else
					{	/* Match/normalize.scm 428 */
						obj_t BgL_ez00_931;

						obj_t BgL_eza2za2_932;

						BgL_ez00_931 = CAR(BgL_lz00_928);
						BgL_eza2za2_932 = CDR(BgL_lz00_928);
						{	/* Match/normalize.scm 430 */
							obj_t BgL_zc3anonymousza32013ze3z83_3222;

							BgL_zc3anonymousza32013ze3z83_3222 =
								make_fx_procedure
								(BGl_zc3anonymousza32013ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32013ze3z83_3222,
								(int) (((long) 0)), BgL_ez00_931);
							PROCEDURE_SET(BgL_zc3anonymousza32013ze3z83_3222,
								(int) (((long) 1)), BgL_eza2za2_932);
							return BgL_zc3anonymousza32013ze3z83_3222;
						}
					}
			}
		}
	}



/* <anonymous:2013> */
	obj_t BGl_zc3anonymousza32013ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3273, obj_t BgL_rz00_3276, obj_t BgL_cz00_3277)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 430 */
			{	/* Match/normalize.scm 431 */
				obj_t BgL_ez00_3274;

				obj_t BgL_eza2za2_3275;

				BgL_ez00_3274 = PROCEDURE_REF(BgL_envz00_3273, (int) (((long) 0)));
				BgL_eza2za2_3275 = PROCEDURE_REF(BgL_envz00_3273, (int) (((long) 1)));
				{
					obj_t BgL_rz00_933;

					obj_t BgL_cz00_934;

					BgL_rz00_933 = BgL_rz00_3276;
					BgL_cz00_934 = BgL_cz00_3277;
					if (PAIRP(BgL_eza2za2_3275))
						{	/* Match/normalize.scm 432 */
							obj_t BgL_fun2016z00_937;

							BgL_fun2016z00_937 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3274);
							{	/* Match/normalize.scm 435 */
								obj_t BgL_zc3anonymousza32017ze3z83_3221;

								BgL_zc3anonymousza32017ze3z83_3221 =
									make_fx_procedure
									(BGl_zc3anonymousza32017ze3z83zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza32017ze3z83_3221,
									(int) (((long) 0)), BgL_eza2za2_3275);
								PROCEDURE_SET(BgL_zc3anonymousza32017ze3z83_3221,
									(int) (((long) 1)), BgL_cz00_934);
								return PROCEDURE_ENTRY(BgL_fun2016z00_937) (BgL_fun2016z00_937,
									BgL_rz00_933, BgL_zc3anonymousza32017ze3z83_3221, BEOA);
							}
						}
					else
						{	/* Match/normalize.scm 439 */
							obj_t BgL_fun2028z00_955;

							BgL_fun2028z00_955 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3274);
							return PROCEDURE_ENTRY(BgL_fun2028z00_955) (BgL_fun2028z00_955,
								BgL_rz00_933, BgL_cz00_934, BEOA);
						}
				}
			}
		}
	}



/* <anonymous:2017> */
	obj_t BGl_zc3anonymousza32017ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3278, obj_t BgL_pattern1z00_3281, obj_t BgL_rrz00_3282)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 434 */
			{	/* Match/normalize.scm 435 */
				obj_t BgL_eza2za2_3279;

				obj_t BgL_cz00_3280;

				BgL_eza2za2_3279 = PROCEDURE_REF(BgL_envz00_3278, (int) (((long) 0)));
				BgL_cz00_3280 = PROCEDURE_REF(BgL_envz00_3278, (int) (((long) 1)));
				{
					obj_t BgL_pattern1z00_939;

					obj_t BgL_rrz00_940;

					BgL_pattern1z00_939 = BgL_pattern1z00_3281;
					BgL_rrz00_940 = BgL_rrz00_3282;
					{	/* Match/normalize.scm 435 */
						obj_t BgL_fun2020z00_943;

						{	/* Match/normalize.scm 435 */
							obj_t BgL_arg2018z00_942;

							BgL_arg2018z00_942 =
								MAKE_PAIR(BGl_symbol2891z00zz__match_normaliza7eza7,
								BgL_eza2za2_3279);
							BgL_fun2020z00_943 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_arg2018z00_942);
						}
						{	/* Match/normalize.scm 438 */
							obj_t BgL_zc3anonymousza32021ze3z83_3220;

							BgL_zc3anonymousza32021ze3z83_3220 =
								make_fx_procedure
								(BGl_zc3anonymousza32021ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32021ze3z83_3220,
								(int) (((long) 0)), BgL_pattern1z00_939);
							PROCEDURE_SET(BgL_zc3anonymousza32021ze3z83_3220,
								(int) (((long) 1)), BgL_cz00_3280);
							return PROCEDURE_ENTRY(BgL_fun2020z00_943) (BgL_fun2020z00_943,
								BgL_rrz00_940, BgL_zc3anonymousza32021ze3z83_3220, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2021> */
	obj_t BGl_zc3anonymousza32021ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3283, obj_t BgL_pattern2z00_3286, obj_t BgL_rrrz00_3287)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 437 */
			{	/* Match/normalize.scm 438 */
				obj_t BgL_pattern1z00_3284;

				obj_t BgL_cz00_3285;

				BgL_pattern1z00_3284 =
					PROCEDURE_REF(BgL_envz00_3283, (int) (((long) 0)));
				BgL_cz00_3285 = PROCEDURE_REF(BgL_envz00_3283, (int) (((long) 1)));
				{
					obj_t BgL_pattern2z00_945;

					obj_t BgL_rrrz00_946;

					BgL_pattern2z00_945 = BgL_pattern2z00_3286;
					BgL_rrrz00_946 = BgL_rrrz00_3287;
					{	/* Match/normalize.scm 438 */
						obj_t BgL_arg2022z00_2198;

						{	/* Match/normalize.scm 438 */
							obj_t BgL_arg2023z00_2199;

							obj_t BgL_arg2024z00_2200;

							BgL_arg2023z00_2199 = BGl_symbol2891z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 438 */
								obj_t BgL_list2025z00_2201;

								{	/* Match/normalize.scm 438 */
									obj_t BgL_arg2027z00_2202;

									BgL_arg2027z00_2202 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2025z00_2201 =
										MAKE_PAIR(BgL_pattern2z00_945, BgL_arg2027z00_2202);
								}
								BgL_arg2024z00_2200 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_pattern1z00_3284, BgL_list2025z00_2201);
							}
							BgL_arg2022z00_2198 =
								MAKE_PAIR(BgL_arg2023z00_2199, BgL_arg2024z00_2200);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3285) (BgL_cz00_3285,
							BgL_arg2022z00_2198, BgL_rrrz00_946, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:1989> */
	obj_t BGl_zc3anonymousza31989ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3288, obj_t BgL_lz00_3289)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 406 */
			{
				obj_t BgL_lz00_895;

				BgL_lz00_895 = BgL_lz00_3289;
				if (NULLP(BgL_lz00_895))
					{	/* Match/normalize.scm 408 */
						obj_t BgL_argz00_2182;

						BgL_argz00_2182 = BgL_lz00_895;
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2909z00zz__match_normaliza7eza7,
							BGl_string2919z00zz__match_normaliza7eza7, BgL_argz00_2182);
					}
				else
					{	/* Match/normalize.scm 409 */
						obj_t BgL_ez00_898;

						obj_t BgL_eza2za2_899;

						BgL_ez00_898 = CAR(BgL_lz00_895);
						BgL_eza2za2_899 = CDR(BgL_lz00_895);
						{	/* Match/normalize.scm 411 */
							obj_t BgL_zc3anonymousza31991ze3z83_3226;

							BgL_zc3anonymousza31991ze3z83_3226 =
								make_fx_procedure
								(BGl_zc3anonymousza31991ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3anonymousza31991ze3z83_3226,
								(int) (((long) 0)), BgL_ez00_898);
							PROCEDURE_SET(BgL_zc3anonymousza31991ze3z83_3226,
								(int) (((long) 1)), BgL_eza2za2_899);
							PROCEDURE_SET(BgL_zc3anonymousza31991ze3z83_3226,
								(int) (((long) 2)), BgL_lz00_895);
							return BgL_zc3anonymousza31991ze3z83_3226;
						}
					}
			}
		}
	}



/* <anonymous:1991> */
	obj_t BGl_zc3anonymousza31991ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3290, obj_t BgL_rz00_3294, obj_t BgL_cz00_3295)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 411 */
			{	/* Match/normalize.scm 412 */
				obj_t BgL_ez00_3291;

				obj_t BgL_eza2za2_3292;

				obj_t BgL_lz00_3293;

				BgL_ez00_3291 = PROCEDURE_REF(BgL_envz00_3290, (int) (((long) 0)));
				BgL_eza2za2_3292 = PROCEDURE_REF(BgL_envz00_3290, (int) (((long) 1)));
				BgL_lz00_3293 = PROCEDURE_REF(BgL_envz00_3290, (int) (((long) 2)));
				{
					obj_t BgL_rz00_900;

					obj_t BgL_cz00_901;

					BgL_rz00_900 = BgL_rz00_3294;
					BgL_cz00_901 = BgL_cz00_3295;
					if (PAIRP(BgL_eza2za2_3292))
						{	/* Match/normalize.scm 413 */
							obj_t BgL_fun1994z00_904;

							BgL_fun1994z00_904 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3291);
							{	/* Match/normalize.scm 416 */
								obj_t BgL_zc3anonymousza31995ze3z83_3225;

								BgL_zc3anonymousza31995ze3z83_3225 =
									make_fx_procedure
									(BGl_zc3anonymousza31995ze3z83zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 4)));
								PROCEDURE_SET(BgL_zc3anonymousza31995ze3z83_3225,
									(int) (((long) 0)), BgL_eza2za2_3292);
								PROCEDURE_SET(BgL_zc3anonymousza31995ze3z83_3225,
									(int) (((long) 1)), BgL_lz00_3293);
								PROCEDURE_SET(BgL_zc3anonymousza31995ze3z83_3225,
									(int) (((long) 2)), BgL_cz00_901);
								PROCEDURE_SET(BgL_zc3anonymousza31995ze3z83_3225,
									(int) (((long) 3)), BgL_rz00_900);
								return PROCEDURE_ENTRY(BgL_fun1994z00_904) (BgL_fun1994z00_904,
									BgL_rz00_900, BgL_zc3anonymousza31995ze3z83_3225, BEOA);
							}
						}
					else
						{	/* Match/normalize.scm 423 */
							obj_t BgL_fun2008z00_924;

							BgL_fun2008z00_924 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3291);
							return PROCEDURE_ENTRY(BgL_fun2008z00_924) (BgL_fun2008z00_924,
								BgL_rz00_900, BgL_cz00_901, BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1995> */
	obj_t BGl_zc3anonymousza31995ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3296, obj_t BgL_pattern1z00_3301, obj_t BgL_rrz00_3302)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 415 */
			{	/* Match/normalize.scm 416 */
				obj_t BgL_eza2za2_3297;

				obj_t BgL_lz00_3298;

				obj_t BgL_cz00_3299;

				obj_t BgL_rz00_3300;

				BgL_eza2za2_3297 = PROCEDURE_REF(BgL_envz00_3296, (int) (((long) 0)));
				BgL_lz00_3298 = PROCEDURE_REF(BgL_envz00_3296, (int) (((long) 1)));
				BgL_cz00_3299 = PROCEDURE_REF(BgL_envz00_3296, (int) (((long) 2)));
				BgL_rz00_3300 = PROCEDURE_REF(BgL_envz00_3296, (int) (((long) 3)));
				{
					obj_t BgL_pattern1z00_906;

					obj_t BgL_rrz00_907;

					BgL_pattern1z00_906 = BgL_pattern1z00_3301;
					BgL_rrz00_907 = BgL_rrz00_3302;
					{	/* Match/normalize.scm 416 */
						obj_t BgL_fun1999z00_910;

						{	/* Match/normalize.scm 416 */
							obj_t BgL_arg1996z00_909;

							BgL_arg1996z00_909 =
								MAKE_PAIR(BGl_symbol2888z00zz__match_normaliza7eza7,
								BgL_eza2za2_3297);
							BgL_fun1999z00_910 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_arg1996z00_909);
						}
						{	/* Match/normalize.scm 419 */
							obj_t BgL_zc3anonymousza32000ze3z83_3224;

							BgL_zc3anonymousza32000ze3z83_3224 =
								make_fx_procedure
								(BGl_zc3anonymousza32000ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 4)));
							PROCEDURE_SET(BgL_zc3anonymousza32000ze3z83_3224,
								(int) (((long) 0)), BgL_lz00_3298);
							PROCEDURE_SET(BgL_zc3anonymousza32000ze3z83_3224,
								(int) (((long) 1)), BgL_pattern1z00_906);
							PROCEDURE_SET(BgL_zc3anonymousza32000ze3z83_3224,
								(int) (((long) 2)), BgL_cz00_3299);
							PROCEDURE_SET(BgL_zc3anonymousza32000ze3z83_3224,
								(int) (((long) 3)), BgL_rrz00_907);
							return PROCEDURE_ENTRY(BgL_fun1999z00_910) (BgL_fun1999z00_910,
								BgL_rz00_3300, BgL_zc3anonymousza32000ze3z83_3224, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2000> */
	obj_t BGl_zc3anonymousza32000ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3303, obj_t BgL_pattern2z00_3308, obj_t BgL_rrrz00_3309)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 418 */
			{	/* Match/normalize.scm 419 */
				obj_t BgL_lz00_3304;

				obj_t BgL_pattern1z00_3305;

				obj_t BgL_cz00_3306;

				obj_t BgL_rrz00_3307;

				BgL_lz00_3304 = PROCEDURE_REF(BgL_envz00_3303, (int) (((long) 0)));
				BgL_pattern1z00_3305 =
					PROCEDURE_REF(BgL_envz00_3303, (int) (((long) 1)));
				BgL_cz00_3306 = PROCEDURE_REF(BgL_envz00_3303, (int) (((long) 2)));
				BgL_rrz00_3307 = PROCEDURE_REF(BgL_envz00_3303, (int) (((long) 3)));
				{
					obj_t BgL_pattern2z00_912;

					obj_t BgL_rrrz00_913;

					BgL_pattern2z00_912 = BgL_pattern2z00_3308;
					BgL_rrrz00_913 = BgL_rrrz00_3309;
					{	/* Match/normalize.scm 419 */
						bool_t BgL_testz00_3844;

						if (BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
							(BgL_rrz00_3307, BgL_rrrz00_913))
							{	/* Match/normalize.scm 419 */
								BgL_testz00_3844 =
									BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
									(BgL_rrrz00_913, BgL_rrz00_3307);
							}
						else
							{	/* Match/normalize.scm 419 */
								BgL_testz00_3844 = ((bool_t) 0);
							}
						if (BgL_testz00_3844)
							{	/* Match/normalize.scm 421 */
								obj_t BgL_arg2002z00_916;

								{	/* Match/normalize.scm 421 */
									obj_t BgL_arg2003z00_917;

									obj_t BgL_arg2004z00_918;

									BgL_arg2003z00_917 =
										BGl_symbol2888z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 421 */
										obj_t BgL_list2005z00_919;

										{	/* Match/normalize.scm 421 */
											obj_t BgL_arg2006z00_920;

											BgL_arg2006z00_920 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2005z00_919 =
												MAKE_PAIR(BgL_pattern2z00_912, BgL_arg2006z00_920);
										}
										BgL_arg2004z00_918 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_pattern1z00_3305, BgL_list2005z00_919);
									}
									BgL_arg2002z00_916 =
										MAKE_PAIR(BgL_arg2003z00_917, BgL_arg2004z00_918);
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3306) (BgL_cz00_3306,
									BgL_arg2002z00_916, BgL_rrrz00_913, BEOA);
							}
						else
							{	/* Match/normalize.scm 419 */
								return
									BGl_errorz00zz__errorz00
									(BGl_symbol2909z00zz__match_normaliza7eza7,
									BGl_string2920z00zz__match_normaliza7eza7, BgL_lz00_3304);
							}
					}
				}
			}
		}
	}



/* <anonymous:1968> */
	obj_t BGl_zc3anonymousza31968ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3310, obj_t BgL_lz00_3311)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 372 */
			{
				obj_t BgL_lz00_862;

				BgL_lz00_862 = BgL_lz00_3311;
				if (NULLP(BgL_lz00_862))
					{	/* Match/normalize.scm 374 */
						obj_t BgL_argz00_2170;

						BgL_argz00_2170 = BgL_lz00_862;
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2909z00zz__match_normaliza7eza7,
							BGl_string2921z00zz__match_normaliza7eza7, BgL_argz00_2170);
					}
				else
					{	/* Match/normalize.scm 375 */
						obj_t BgL_ez00_865;

						obj_t BgL_eza2za2_866;

						BgL_ez00_865 = CAR(BgL_lz00_862);
						BgL_eza2za2_866 = CDR(BgL_lz00_862);
						{	/* Match/normalize.scm 377 */
							obj_t BgL_zc3anonymousza31970ze3z83_3230;

							BgL_zc3anonymousza31970ze3z83_3230 =
								make_fx_procedure
								(BGl_zc3anonymousza31970ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3anonymousza31970ze3z83_3230,
								(int) (((long) 0)), BgL_ez00_865);
							PROCEDURE_SET(BgL_zc3anonymousza31970ze3z83_3230,
								(int) (((long) 1)), BgL_eza2za2_866);
							PROCEDURE_SET(BgL_zc3anonymousza31970ze3z83_3230,
								(int) (((long) 2)), BgL_lz00_862);
							return BgL_zc3anonymousza31970ze3z83_3230;
						}
					}
			}
		}
	}



/* <anonymous:1970> */
	obj_t BGl_zc3anonymousza31970ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3312, obj_t BgL_rz00_3316, obj_t BgL_cz00_3317)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 377 */
			{	/* Match/normalize.scm 378 */
				obj_t BgL_ez00_3313;

				obj_t BgL_eza2za2_3314;

				obj_t BgL_lz00_3315;

				BgL_ez00_3313 = PROCEDURE_REF(BgL_envz00_3312, (int) (((long) 0)));
				BgL_eza2za2_3314 = PROCEDURE_REF(BgL_envz00_3312, (int) (((long) 1)));
				BgL_lz00_3315 = PROCEDURE_REF(BgL_envz00_3312, (int) (((long) 2)));
				{
					obj_t BgL_rz00_867;

					obj_t BgL_cz00_868;

					BgL_rz00_867 = BgL_rz00_3316;
					BgL_cz00_868 = BgL_cz00_3317;
					if (PAIRP(BgL_eza2za2_3314))
						{	/* Match/normalize.scm 379 */
							obj_t BgL_fun1973z00_871;

							BgL_fun1973z00_871 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3313);
							{	/* Match/normalize.scm 382 */
								obj_t BgL_zc3anonymousza31974ze3z83_3229;

								BgL_zc3anonymousza31974ze3z83_3229 =
									make_fx_procedure
									(BGl_zc3anonymousza31974ze3z83zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 4)));
								PROCEDURE_SET(BgL_zc3anonymousza31974ze3z83_3229,
									(int) (((long) 0)), BgL_eza2za2_3314);
								PROCEDURE_SET(BgL_zc3anonymousza31974ze3z83_3229,
									(int) (((long) 1)), BgL_lz00_3315);
								PROCEDURE_SET(BgL_zc3anonymousza31974ze3z83_3229,
									(int) (((long) 2)), BgL_cz00_868);
								PROCEDURE_SET(BgL_zc3anonymousza31974ze3z83_3229,
									(int) (((long) 3)), BgL_rz00_867);
								return PROCEDURE_ENTRY(BgL_fun1973z00_871) (BgL_fun1973z00_871,
									BgL_rz00_867, BgL_zc3anonymousza31974ze3z83_3229, BEOA);
							}
						}
					else
						{	/* Match/normalize.scm 389 */
							obj_t BgL_fun1986z00_891;

							BgL_fun1986z00_891 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3313);
							return PROCEDURE_ENTRY(BgL_fun1986z00_891) (BgL_fun1986z00_891,
								BgL_rz00_867, BgL_cz00_868, BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1974> */
	obj_t BGl_zc3anonymousza31974ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3318, obj_t BgL_pattern1z00_3323, obj_t BgL_rrz00_3324)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 381 */
			{	/* Match/normalize.scm 382 */
				obj_t BgL_eza2za2_3319;

				obj_t BgL_lz00_3320;

				obj_t BgL_cz00_3321;

				obj_t BgL_rz00_3322;

				BgL_eza2za2_3319 = PROCEDURE_REF(BgL_envz00_3318, (int) (((long) 0)));
				BgL_lz00_3320 = PROCEDURE_REF(BgL_envz00_3318, (int) (((long) 1)));
				BgL_cz00_3321 = PROCEDURE_REF(BgL_envz00_3318, (int) (((long) 2)));
				BgL_rz00_3322 = PROCEDURE_REF(BgL_envz00_3318, (int) (((long) 3)));
				{
					obj_t BgL_pattern1z00_873;

					obj_t BgL_rrz00_874;

					BgL_pattern1z00_873 = BgL_pattern1z00_3323;
					BgL_rrz00_874 = BgL_rrz00_3324;
					{	/* Match/normalize.scm 382 */
						obj_t BgL_fun1977z00_877;

						{	/* Match/normalize.scm 382 */
							obj_t BgL_arg1975z00_876;

							BgL_arg1975z00_876 =
								MAKE_PAIR(BGl_symbol2885z00zz__match_normaliza7eza7,
								BgL_eza2za2_3319);
							BgL_fun1977z00_877 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_arg1975z00_876);
						}
						{	/* Match/normalize.scm 385 */
							obj_t BgL_zc3anonymousza31978ze3z83_3228;

							BgL_zc3anonymousza31978ze3z83_3228 =
								make_fx_procedure
								(BGl_zc3anonymousza31978ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 4)));
							PROCEDURE_SET(BgL_zc3anonymousza31978ze3z83_3228,
								(int) (((long) 0)), BgL_lz00_3320);
							PROCEDURE_SET(BgL_zc3anonymousza31978ze3z83_3228,
								(int) (((long) 1)), BgL_pattern1z00_873);
							PROCEDURE_SET(BgL_zc3anonymousza31978ze3z83_3228,
								(int) (((long) 2)), BgL_cz00_3321);
							PROCEDURE_SET(BgL_zc3anonymousza31978ze3z83_3228,
								(int) (((long) 3)), BgL_rrz00_874);
							return PROCEDURE_ENTRY(BgL_fun1977z00_877) (BgL_fun1977z00_877,
								BgL_rz00_3322, BgL_zc3anonymousza31978ze3z83_3228, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:1978> */
	obj_t BGl_zc3anonymousza31978ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3325, obj_t BgL_pattern2z00_3330, obj_t BgL_rrrz00_3331)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 384 */
			{	/* Match/normalize.scm 385 */
				obj_t BgL_lz00_3326;

				obj_t BgL_pattern1z00_3327;

				obj_t BgL_cz00_3328;

				obj_t BgL_rrz00_3329;

				BgL_lz00_3326 = PROCEDURE_REF(BgL_envz00_3325, (int) (((long) 0)));
				BgL_pattern1z00_3327 =
					PROCEDURE_REF(BgL_envz00_3325, (int) (((long) 1)));
				BgL_cz00_3328 = PROCEDURE_REF(BgL_envz00_3325, (int) (((long) 2)));
				BgL_rrz00_3329 = PROCEDURE_REF(BgL_envz00_3325, (int) (((long) 3)));
				{
					obj_t BgL_pattern2z00_879;

					obj_t BgL_rrrz00_880;

					BgL_pattern2z00_879 = BgL_pattern2z00_3330;
					BgL_rrrz00_880 = BgL_rrrz00_3331;
					{	/* Match/normalize.scm 385 */
						bool_t BgL_testz00_3925;

						if (BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
							(BgL_rrz00_3329, BgL_rrrz00_880))
							{	/* Match/normalize.scm 385 */
								BgL_testz00_3925 =
									BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
									(BgL_rrrz00_880, BgL_rrz00_3329);
							}
						else
							{	/* Match/normalize.scm 385 */
								BgL_testz00_3925 = ((bool_t) 0);
							}
						if (BgL_testz00_3925)
							{	/* Match/normalize.scm 387 */
								obj_t BgL_arg1980z00_883;

								{	/* Match/normalize.scm 387 */
									obj_t BgL_arg1981z00_884;

									obj_t BgL_arg1982z00_885;

									BgL_arg1981z00_884 =
										BGl_symbol2885z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 387 */
										obj_t BgL_list1983z00_886;

										{	/* Match/normalize.scm 387 */
											obj_t BgL_arg1984z00_887;

											BgL_arg1984z00_887 = MAKE_PAIR(BNIL, BNIL);
											BgL_list1983z00_886 =
												MAKE_PAIR(BgL_pattern2z00_879, BgL_arg1984z00_887);
										}
										BgL_arg1982z00_885 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_pattern1z00_3327, BgL_list1983z00_886);
									}
									BgL_arg1980z00_883 =
										MAKE_PAIR(BgL_arg1981z00_884, BgL_arg1982z00_885);
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3328) (BgL_cz00_3328,
									BgL_arg1980z00_883, BgL_rrrz00_880, BEOA);
							}
						else
							{	/* Match/normalize.scm 385 */
								return
									BGl_errorz00zz__errorz00
									(BGl_symbol2909z00zz__match_normaliza7eza7,
									BGl_string2920z00zz__match_normaliza7eza7, BgL_lz00_3326);
							}
					}
				}
			}
		}
	}



/* <anonymous:1939> */
	obj_t BGl_zc3anonymousza31939ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3332, obj_t BgL_lz00_3333)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 357 */
			{
				obj_t BgL_lz00_825;

				BgL_lz00_825 = BgL_lz00_3333;
				if (NULLP(BgL_lz00_825))
					{	/* Match/normalize.scm 359 */
						obj_t BgL_argz00_2158;

						BgL_argz00_2158 = BgL_lz00_825;
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2909z00zz__match_normaliza7eza7,
							BGl_string2922z00zz__match_normaliza7eza7, BgL_argz00_2158);
					}
				else
					{	/* Match/normalize.scm 360 */
						obj_t BgL_ez00_828;

						obj_t BgL_eza2za2_829;

						BgL_ez00_828 = CAR(BgL_lz00_825);
						BgL_eza2za2_829 = CDR(BgL_lz00_825);
						{	/* Match/normalize.scm 362 */
							obj_t BgL_zc3anonymousza31941ze3z83_3233;

							BgL_zc3anonymousza31941ze3z83_3233 =
								make_fx_procedure
								(BGl_zc3anonymousza31941ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza31941ze3z83_3233,
								(int) (((long) 0)), BgL_ez00_828);
							PROCEDURE_SET(BgL_zc3anonymousza31941ze3z83_3233,
								(int) (((long) 1)), BgL_eza2za2_829);
							return BgL_zc3anonymousza31941ze3z83_3233;
						}
					}
			}
		}
	}



/* <anonymous:1941> */
	obj_t BGl_zc3anonymousza31941ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3334, obj_t BgL_rz00_3337, obj_t BgL_cz00_3338)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 362 */
			{	/* Match/normalize.scm 363 */
				obj_t BgL_ez00_3335;

				obj_t BgL_eza2za2_3336;

				BgL_ez00_3335 = PROCEDURE_REF(BgL_envz00_3334, (int) (((long) 0)));
				BgL_eza2za2_3336 = PROCEDURE_REF(BgL_envz00_3334, (int) (((long) 1)));
				{
					obj_t BgL_rz00_830;

					obj_t BgL_cz00_831;

					BgL_rz00_830 = BgL_rz00_3337;
					BgL_cz00_831 = BgL_cz00_3338;
					if (PAIRP(BgL_eza2za2_3336))
						{	/* Match/normalize.scm 363 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2909z00zz__match_normaliza7eza7,
								BGl_string2923z00zz__match_normaliza7eza7, BgL_eza2za2_3336);
						}
					else
						{	/* Match/normalize.scm 365 */
							obj_t BgL_fun1944z00_834;

							BgL_fun1944z00_834 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_ez00_3335);
							{	/* Match/normalize.scm 368 */
								obj_t BgL_zc3anonymousza31945ze3z83_3232;

								BgL_zc3anonymousza31945ze3z83_3232 =
									make_fx_procedure
									(BGl_zc3anonymousza31945ze3z83zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza31945ze3z83_3232,
									(int) (((long) 0)), BgL_cz00_831);
								return PROCEDURE_ENTRY(BgL_fun1944z00_834) (BgL_fun1944z00_834,
									BgL_rz00_830, BgL_zc3anonymousza31945ze3z83_3232, BEOA);
							}
						}
				}
			}
		}
	}



/* <anonymous:1945> */
	obj_t BGl_zc3anonymousza31945ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3339, obj_t BgL_patternz00_3341, obj_t BgL_rrz00_3342)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 367 */
			{	/* Match/normalize.scm 368 */
				obj_t BgL_cz00_3340;

				BgL_cz00_3340 = PROCEDURE_REF(BgL_envz00_3339, (int) (((long) 0)));
				{
					obj_t BgL_patternz00_836;

					obj_t BgL_rrz00_837;

					BgL_patternz00_836 = BgL_patternz00_3341;
					BgL_rrz00_837 = BgL_rrz00_3342;
					{	/* Match/normalize.scm 368 */
						obj_t BgL_arg1946z00_839;

						{	/* Match/normalize.scm 368 */
							obj_t BgL_arg1948z00_840;

							obj_t BgL_arg1949z00_841;

							BgL_arg1948z00_840 = BGl_symbol2891z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 368 */
								obj_t BgL_arg1950z00_842;

								{	/* Match/normalize.scm 368 */
									obj_t BgL_arg1954z00_846;

									obj_t BgL_arg1955z00_847;

									BgL_arg1954z00_846 =
										BGl_symbol2894z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 368 */
										obj_t BgL_arg1956z00_848;

										{	/* Match/normalize.scm 368 */
											obj_t BgL_arg1959z00_851;

											obj_t BgL_arg1960z00_852;

											BgL_arg1959z00_851 =
												BGl_symbol2924z00zz__match_normaliza7eza7;
											{	/* Match/normalize.scm 368 */
												obj_t BgL_arg1961z00_853;

												obj_t BgL_arg1962z00_854;

												BgL_arg1961z00_853 =
													MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
													BNIL);
												BgL_arg1962z00_854 =
													MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
													BNIL);
												{	/* Match/normalize.scm 368 */
													obj_t BgL_list1964z00_856;

													{	/* Match/normalize.scm 368 */
														obj_t BgL_arg1965z00_857;

														BgL_arg1965z00_857 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1964z00_856 =
															MAKE_PAIR(BgL_arg1962z00_854, BgL_arg1965z00_857);
													}
													BgL_arg1960z00_852 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1961z00_853, BgL_list1964z00_856);
											}}
											BgL_arg1956z00_848 =
												MAKE_PAIR(BgL_arg1959z00_851, BgL_arg1960z00_852);
										}
										{	/* Match/normalize.scm 368 */
											obj_t BgL_list1958z00_850;

											BgL_list1958z00_850 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1955z00_847 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1956z00_848, BgL_list1958z00_850);
									}}
									BgL_arg1950z00_842 =
										MAKE_PAIR(BgL_arg1954z00_846, BgL_arg1955z00_847);
								}
								{	/* Match/normalize.scm 368 */
									obj_t BgL_list1952z00_844;

									{	/* Match/normalize.scm 368 */
										obj_t BgL_arg1953z00_845;

										BgL_arg1953z00_845 = MAKE_PAIR(BNIL, BNIL);
										BgL_list1952z00_844 =
											MAKE_PAIR(BgL_patternz00_836, BgL_arg1953z00_845);
									}
									BgL_arg1949z00_841 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1950z00_842, BgL_list1952z00_844);
							}}
							BgL_arg1946z00_839 =
								MAKE_PAIR(BgL_arg1948z00_840, BgL_arg1949z00_841);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3340) (BgL_cz00_3340, BgL_arg1946z00_839,
							BgL_rrz00_837, BEOA);
					}
				}
			}
		}
	}



/* term-variable? */
	bool_t BGl_termzd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_1)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 69 */
			if (SYMBOLP(BgL_ez00_1))
				{	/* Match/normalize.scm 71 */
					bool_t BgL_testz00_3982;

					{	/* Match/normalize.scm 71 */
						long BgL_arg2099z00_1054;

						{	/* Match/normalize.scm 71 */
							obj_t BgL_arg2101z00_1056;

							BgL_arg2101z00_1056 = SYMBOL_TO_STRING(BgL_ez00_1);
							BgL_arg2099z00_1054 = STRING_LENGTH(BgL_arg2101z00_1056);
						}
						BgL_testz00_3982 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2099z00_1054),
							BINT(((long) 1)));
					}
					if (BgL_testz00_3982)
						{	/* Match/normalize.scm 72 */
							unsigned char BgL_arg2096z00_1051;

							{	/* Match/normalize.scm 72 */
								obj_t BgL_arg2097z00_1052;

								BgL_arg2097z00_1052 = SYMBOL_TO_STRING(BgL_ez00_1);
								BgL_arg2096z00_1051 =
									STRING_REF(BgL_arg2097z00_1052, ((long) 0));
							}
							return (BgL_arg2096z00_1051 == ((unsigned char) '?'));
						}
					else
						{	/* Match/normalize.scm 71 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 70 */
					return ((bool_t) 0);
				}
		}
	}



/* segment-variable? */
	bool_t BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 74 */
			if (SYMBOLP(BgL_ez00_2))
				{	/* Match/normalize.scm 76 */
					bool_t BgL_testz00_3993;

					{	/* Match/normalize.scm 76 */
						long BgL_arg2108z00_1066;

						{	/* Match/normalize.scm 76 */
							obj_t BgL_arg2110z00_1068;

							BgL_arg2110z00_1068 = SYMBOL_TO_STRING(BgL_ez00_2);
							BgL_arg2108z00_1066 = STRING_LENGTH(BgL_arg2110z00_1068);
						}
						BgL_testz00_3993 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2108z00_1066),
							BINT(((long) 2)));
					}
					if (BgL_testz00_3993)
						{	/* Match/normalize.scm 77 */
							bool_t BgL_testz00_3999;

							{	/* Match/normalize.scm 77 */
								unsigned char BgL_arg2105z00_1063;

								{	/* Match/normalize.scm 77 */
									obj_t BgL_arg2106z00_1064;

									BgL_arg2106z00_1064 = SYMBOL_TO_STRING(BgL_ez00_2);
									BgL_arg2105z00_1063 =
										STRING_REF(BgL_arg2106z00_1064, ((long) 0));
								}
								BgL_testz00_3999 =
									(BgL_arg2105z00_1063 == ((unsigned char) '?'));
							}
							if (BgL_testz00_3999)
								{	/* Match/normalize.scm 78 */
									unsigned char BgL_arg2102z00_1060;

									{	/* Match/normalize.scm 78 */
										obj_t BgL_arg2103z00_1061;

										BgL_arg2103z00_1061 = SYMBOL_TO_STRING(BgL_ez00_2);
										BgL_arg2102z00_1060 =
											STRING_REF(BgL_arg2103z00_1061, ((long) 1));
									}
									return (BgL_arg2102z00_1060 == ((unsigned char) '?'));
								}
							else
								{	/* Match/normalize.scm 77 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/normalize.scm 76 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 75 */
					return ((bool_t) 0);
				}
		}
	}



/* lispish-segment-variable? */
	bool_t BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(obj_t
		BgL_ez00_3)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 80 */
			if (SYMBOLP(BgL_ez00_3))
				{	/* Match/normalize.scm 82 */
					bool_t BgL_testz00_4008;

					{	/* Match/normalize.scm 82 */
						long BgL_arg2123z00_1082;

						{	/* Match/normalize.scm 82 */
							obj_t BgL_arg2125z00_1084;

							BgL_arg2125z00_1084 = SYMBOL_TO_STRING(BgL_ez00_3);
							BgL_arg2123z00_1082 = STRING_LENGTH(BgL_arg2125z00_1084);
						}
						BgL_testz00_4008 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2123z00_1082),
							BINT(((long) 3)));
					}
					if (BgL_testz00_4008)
						{	/* Match/normalize.scm 83 */
							bool_t BgL_testz00_4014;

							{	/* Match/normalize.scm 83 */
								unsigned char BgL_arg2118z00_1079;

								{	/* Match/normalize.scm 83 */
									obj_t BgL_arg2119z00_1080;

									BgL_arg2119z00_1080 = SYMBOL_TO_STRING(BgL_ez00_3);
									BgL_arg2118z00_1079 =
										STRING_REF(BgL_arg2119z00_1080, ((long) 0));
								}
								BgL_testz00_4014 =
									(BgL_arg2118z00_1079 == ((unsigned char) '?'));
							}
							if (BgL_testz00_4014)
								{	/* Match/normalize.scm 84 */
									bool_t BgL_testz00_4018;

									{	/* Match/normalize.scm 84 */
										unsigned char BgL_arg2114z00_1076;

										{	/* Match/normalize.scm 84 */
											obj_t BgL_arg2115z00_1077;

											BgL_arg2115z00_1077 = SYMBOL_TO_STRING(BgL_ez00_3);
											BgL_arg2114z00_1076 =
												STRING_REF(BgL_arg2115z00_1077, ((long) 1));
										}
										BgL_testz00_4018 =
											(BgL_arg2114z00_1076 == ((unsigned char) '?'));
									}
									if (BgL_testz00_4018)
										{	/* Match/normalize.scm 85 */
											unsigned char BgL_arg2111z00_1073;

											{	/* Match/normalize.scm 85 */
												obj_t BgL_arg2112z00_1074;

												BgL_arg2112z00_1074 = SYMBOL_TO_STRING(BgL_ez00_3);
												BgL_arg2111z00_1073 =
													STRING_REF(BgL_arg2112z00_1074, ((long) 2));
											}
											return (BgL_arg2111z00_1073 == ((unsigned char) '?'));
										}
									else
										{	/* Match/normalize.scm 84 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Match/normalize.scm 83 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/normalize.scm 82 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 81 */
					return ((bool_t) 0);
				}
		}
	}



/* tree-variable? */
	bool_t BGl_treezd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 87 */
			if (SYMBOLP(BgL_ez00_4))
				{	/* Match/normalize.scm 89 */
					bool_t BgL_testz00_4027;

					{	/* Match/normalize.scm 89 */
						long BgL_arg2131z00_1090;

						{	/* Match/normalize.scm 89 */
							obj_t BgL_arg2133z00_1092;

							BgL_arg2133z00_1092 = SYMBOL_TO_STRING(BgL_ez00_4);
							BgL_arg2131z00_1090 = STRING_LENGTH(BgL_arg2133z00_1092);
						}
						BgL_testz00_4027 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2131z00_1090),
							BINT(((long) 1)));
					}
					if (BgL_testz00_4027)
						{	/* Match/normalize.scm 90 */
							unsigned char BgL_arg2126z00_1087;

							{	/* Match/normalize.scm 90 */
								obj_t BgL_arg2127z00_1088;

								BgL_arg2127z00_1088 = SYMBOL_TO_STRING(BgL_ez00_4);
								BgL_arg2126z00_1087 =
									STRING_REF(BgL_arg2127z00_1088, ((long) 0));
							}
							return (BgL_arg2126z00_1087 == ((unsigned char) '!'));
						}
					else
						{	/* Match/normalize.scm 89 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 88 */
					return ((bool_t) 0);
				}
		}
	}



/* hole-variable? */
	bool_t BGl_holezd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 92 */
			if (SYMBOLP(BgL_ez00_5))
				{	/* Match/normalize.scm 94 */
					bool_t BgL_testz00_4038;

					{	/* Match/normalize.scm 94 */
						long BgL_arg2137z00_1098;

						{	/* Match/normalize.scm 94 */
							obj_t BgL_arg2139z00_1100;

							BgL_arg2139z00_1100 = SYMBOL_TO_STRING(BgL_ez00_5);
							BgL_arg2137z00_1098 = STRING_LENGTH(BgL_arg2139z00_1100);
						}
						BgL_testz00_4038 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2137z00_1098),
							BINT(((long) 1)));
					}
					if (BgL_testz00_4038)
						{	/* Match/normalize.scm 95 */
							unsigned char BgL_arg2134z00_1095;

							{	/* Match/normalize.scm 95 */
								obj_t BgL_arg2135z00_1096;

								BgL_arg2135z00_1096 = SYMBOL_TO_STRING(BgL_ez00_5);
								BgL_arg2134z00_1095 =
									STRING_REF(BgL_arg2135z00_1096, ((long) 0));
							}
							return (BgL_arg2134z00_1095 == ((unsigned char) '^'));
						}
					else
						{	/* Match/normalize.scm 94 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 93 */
					return ((bool_t) 0);
				}
		}
	}



/* normalize-pattern */
	BGL_EXPORTED_DEF obj_t
		BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t BgL_ez00_11)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 120 */
			{	/* Match/normalize.scm 121 */
				obj_t BgL_fun2158z00_2431;

				BgL_fun2158z00_2431 =
					BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(BgL_ez00_11);
				return
					PROCEDURE_ENTRY(BgL_fun2158z00_2431) (BgL_fun2158z00_2431,
					BGl_rze2macrozd2patternz30zz__match_normaliza7eza7,
					BGl_proc2928z00zz__match_normaliza7eza7, BEOA);
			}
		}
	}



/* _normalize-pattern */
	obj_t BGl__normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t
		BgL_envz00_3344, obj_t BgL_ez00_3345)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 120 */
			return
				BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(BgL_ez00_3345);
		}
	}



/* <anonymous:2159>_2878 */
	obj_t BGl_zc3anonymousza32159ze3_2878z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3346, obj_t BgL_patternz00_3347, obj_t BgL_rrz00_3348)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 123 */
			return BgL_patternz00_3347;
		}
	}



/* standardize-pattern */
	obj_t BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(obj_t
		BgL_ez00_12)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 133 */
			{	/* Match/normalize.scm 134 */
				bool_t BgL_testz00_4051;

				if (PAIRP(BgL_ez00_12))
					{	/* Match/normalize.scm 134 */
						obj_t BgL_rz00_2440;

						obj_t BgL_nz00_2441;

						BgL_rz00_2440 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
						BgL_nz00_2441 = CAR(BgL_ez00_12);
						if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2441,
									BgL_rz00_2440)))
							{	/* Match/normalize.scm 134 */
								obj_t BgL_pairz00_2444;

								BgL_pairz00_2444 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2441,
									BgL_rz00_2440);
								BgL_testz00_4051 = CBOOL(CDR(BgL_pairz00_2444));
							}
						else
							{	/* Match/normalize.scm 134 */
								BgL_testz00_4051 = ((bool_t) 0);
							}
					}
				else
					{	/* Match/normalize.scm 134 */
						BgL_testz00_4051 = ((bool_t) 0);
					}
				if (BgL_testz00_4051)
					{	/* Match/normalize.scm 134 */
						obj_t BgL_funz00_3509;

						{	/* Match/normalize.scm 134 */
							obj_t BgL_rz00_2448;

							obj_t BgL_nz00_2449;

							BgL_rz00_2448 =
								BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
							BgL_nz00_2449 = CAR(BgL_ez00_12);
							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2449,
										BgL_rz00_2448)))
								{	/* Match/normalize.scm 134 */
									BgL_funz00_3509 =
										CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2449,
											BgL_rz00_2448));
								}
							else
								{
									obj_t BgL_auxz00_4067;

									BgL_auxz00_4067 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2929z00zz__match_normaliza7eza7,
										BINT(((long) 4355)),
										BGl_string2930z00zz__match_normaliza7eza7,
										BGl_string2931z00zz__match_normaliza7eza7, BFALSE);
									FAILURE(BgL_auxz00_4067, BFALSE, BFALSE);
						}}
						return apply(BgL_funz00_3509, CDR(BgL_ez00_12));
					}
				else
					{	/* Match/normalize.scm 134 */
						if ((BgL_ez00_12 == BGl_symbol2932z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 135 */
								return BGl_proc2945z00zz__match_normaliza7eza7;
							}
						else
							{	/* Match/normalize.scm 135 */
								if (BGl_termzd2variablezf3z21zz__match_normaliza7eza7
									(BgL_ez00_12))
									{	/* Match/normalize.scm 136 */
										return
											BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7
											(BgL_ez00_12);
									}
								else
									{	/* Match/normalize.scm 136 */
										if (BGl_holezd2variablezf3z21zz__match_normaliza7eza7
											(BgL_ez00_12))
											{	/* Match/normalize.scm 137 */
												return
													BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7
													(BgL_ez00_12);
											}
										else
											{	/* Match/normalize.scm 137 */
												if (VECTORP(BgL_ez00_12))
													{	/* Match/normalize.scm 138 */
														return
															BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7
															(BgL_ez00_12);
													}
												else
													{	/* Match/normalize.scm 138 */
														if (STRUCTP(BgL_ez00_12))
															{	/* Match/normalize.scm 139 */
																return
																	BGl_standardiza7ezd2structz75zz__match_normaliza7eza7
																	(BgL_ez00_12);
															}
														else
															{	/* Match/normalize.scm 139 */
																if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00
																		(BgL_ez00_12)))
																	{	/* Match/normalize.scm 140 */
																		return
																			BGl_standardiza7ezd2quotez75zz__match_normaliza7eza7
																			(BgL_ez00_12);
																	}
																else
																	{	/* Match/normalize.scm 140 */
																		return
																			BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
																			(BgL_ez00_12);
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



/* standardize-patterns */
	obj_t BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7(obj_t
		BgL_eza2za2_13)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 151 */
			if (PAIRP(BgL_eza2za2_13))
				{	/* Match/normalize.scm 153 */
					bool_t BgL_testz00_4095;

					{	/* Match/normalize.scm 153 */
						obj_t BgL_ez00_2457;

						BgL_ez00_2457 = BgL_eza2za2_13;
						{	/* Match/normalize.scm 153 */
							obj_t BgL_rz00_2462;

							obj_t BgL_nz00_2463;

							BgL_rz00_2462 =
								BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
							BgL_nz00_2463 = CAR(BgL_ez00_2457);
							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2463,
										BgL_rz00_2462)))
								{	/* Match/normalize.scm 153 */
									obj_t BgL_pairz00_2466;

									BgL_pairz00_2466 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_2463,
										BgL_rz00_2462);
									BgL_testz00_4095 = CBOOL(CDR(BgL_pairz00_2466));
								}
							else
								{	/* Match/normalize.scm 153 */
									BgL_testz00_4095 = ((bool_t) 0);
								}
						}
					}
					if (BgL_testz00_4095)
						{	/* Match/normalize.scm 153 */
							obj_t BgL_ez00_2467;

							BgL_ez00_2467 = BgL_eza2za2_13;
							{	/* Match/normalize.scm 153 */
								obj_t BgL_funz00_3511;

								{	/* Match/normalize.scm 153 */
									obj_t BgL_rz00_2470;

									obj_t BgL_nz00_2471;

									BgL_rz00_2470 =
										BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
									BgL_nz00_2471 = CAR(BgL_ez00_2467);
									if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_nz00_2471, BgL_rz00_2470)))
										{	/* Match/normalize.scm 153 */
											BgL_funz00_3511 =
												CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_nz00_2471, BgL_rz00_2470));
										}
									else
										{
											obj_t BgL_auxz00_4109;

											BgL_auxz00_4109 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2929z00zz__match_normaliza7eza7,
												BINT(((long) 5069)),
												BGl_string2934z00zz__match_normaliza7eza7,
												BGl_string2931z00zz__match_normaliza7eza7, BFALSE);
											FAILURE(BgL_auxz00_4109, BFALSE, BFALSE);
								}}
								return apply(BgL_funz00_3511, CDR(BgL_ez00_2467));
							}
						}
					else
						{	/* Match/normalize.scm 153 */
							if (
								(CAR(BgL_eza2za2_13) ==
									BGl_symbol2935z00zz__match_normaliza7eza7))
								{	/* Match/normalize.scm 154 */
									return
										BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(CDR
										(BgL_eza2za2_13));
								}
							else
								{	/* Match/normalize.scm 154 */
									if (
										(CAR(BgL_eza2za2_13) ==
											BGl_symbol2937z00zz__match_normaliza7eza7))
										{	/* Match/normalize.scm 155 */
											return
												BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7
												(CDR(BgL_eza2za2_13));
										}
									else
										{	/* Match/normalize.scm 155 */
											if (BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(CAR(BgL_eza2za2_13)))
												{	/* Match/normalize.scm 156 */
													return
														BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
														(CAR(BgL_eza2za2_13), CDR(BgL_eza2za2_13));
												}
											else
												{	/* Match/normalize.scm 156 */
													if (BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(CAR(BgL_eza2za2_13)))
														{	/* Match/normalize.scm 158 */
															return
																BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7
																(CAR(BgL_eza2za2_13), CDR(BgL_eza2za2_13));
														}
													else
														{	/* Match/normalize.scm 158 */
															if (BGl_treezd2variablezf3z21zz__match_normaliza7eza7(CAR(BgL_eza2za2_13)))
																{	/* Match/normalize.scm 160 */
																	return
																		BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7
																		(CAR(BgL_eza2za2_13),
																		CAR(CDR(BgL_eza2za2_13)),
																		CAR(CDR(CDR(BgL_eza2za2_13))));
																}
															else
																{	/* Match/normalize.scm 160 */
																	return
																		BGl_standardiza7ezd2consz75zz__match_normaliza7eza7
																		(CAR(BgL_eza2za2_13), CDR(BgL_eza2za2_13));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Match/normalize.scm 152 */
					return
						BGl_standardiza7ezd2quotez75zz__match_normaliza7eza7
						(BgL_eza2za2_13);
				}
		}
	}



/* standardize-repetition */
	obj_t BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7(obj_t
		BgL_ez00_14, obj_t BgL_eza2za2_15)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 165 */
			{	/* Match/normalize.scm 166 */
				obj_t BgL_zc3anonymousza32192ze3z83_3351;

				BgL_zc3anonymousza32192ze3z83_3351 =
					make_fx_procedure
					(BGl_zc3anonymousza32192ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32192ze3z83_3351, (int) (((long) 0)),
					BgL_ez00_14);
				PROCEDURE_SET(BgL_zc3anonymousza32192ze3z83_3351, (int) (((long) 1)),
					BgL_eza2za2_15);
				return BgL_zc3anonymousza32192ze3z83_3351;
			}
		}
	}



/* <anonymous:2192> */
	obj_t BGl_zc3anonymousza32192ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3352, obj_t BgL_rz00_3355, obj_t BgL_cz00_3356)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 166 */
			{	/* Match/normalize.scm 167 */
				obj_t BgL_ez00_3353;

				obj_t BgL_eza2za2_3354;

				BgL_ez00_3353 = PROCEDURE_REF(BgL_envz00_3352, (int) (((long) 0)));
				BgL_eza2za2_3354 = PROCEDURE_REF(BgL_envz00_3352, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1159;

					obj_t BgL_cz00_1160;

					BgL_rz00_1159 = BgL_rz00_3355;
					BgL_cz00_1160 = BgL_cz00_3356;
					{	/* Match/normalize.scm 167 */
						obj_t BgL_fun2194z00_1162;

						BgL_fun2194z00_1162 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3353);
						{	/* Match/normalize.scm 170 */
							obj_t BgL_zc3anonymousza32195ze3z83_3350;

							BgL_zc3anonymousza32195ze3z83_3350 =
								make_fx_procedure
								(BGl_zc3anonymousza32195ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32195ze3z83_3350,
								(int) (((long) 0)), BgL_eza2za2_3354);
							PROCEDURE_SET(BgL_zc3anonymousza32195ze3z83_3350,
								(int) (((long) 1)), BgL_cz00_1160);
							return PROCEDURE_ENTRY(BgL_fun2194z00_1162) (BgL_fun2194z00_1162,
								BgL_rz00_1159, BgL_zc3anonymousza32195ze3z83_3350, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2195> */
	obj_t BGl_zc3anonymousza32195ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3357, obj_t BgL_fz00_3360, obj_t BgL_rrz00_3361)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 169 */
			{	/* Match/normalize.scm 170 */
				obj_t BgL_eza2za2_3358;

				obj_t BgL_cz00_3359;

				BgL_eza2za2_3358 = PROCEDURE_REF(BgL_envz00_3357, (int) (((long) 0)));
				BgL_cz00_3359 = PROCEDURE_REF(BgL_envz00_3357, (int) (((long) 1)));
				{
					obj_t BgL_fz00_1164;

					obj_t BgL_rrz00_1165;

					BgL_fz00_1164 = BgL_fz00_3360;
					BgL_rrz00_1165 = BgL_rrz00_3361;
					{	/* Match/normalize.scm 170 */
						obj_t BgL_fun2197z00_1167;

						BgL_fun2197z00_1167 =
							BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
							(BgL_eza2za2_3358);
						{	/* Match/normalize.scm 173 */
							obj_t BgL_zc3anonymousza32198ze3z83_3349;

							BgL_zc3anonymousza32198ze3z83_3349 =
								make_fx_procedure
								(BGl_zc3anonymousza32198ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32198ze3z83_3349,
								(int) (((long) 0)), BgL_fz00_1164);
							PROCEDURE_SET(BgL_zc3anonymousza32198ze3z83_3349,
								(int) (((long) 1)), BgL_cz00_3359);
							return PROCEDURE_ENTRY(BgL_fun2197z00_1167) (BgL_fun2197z00_1167,
								BgL_rrz00_1165, BgL_zc3anonymousza32198ze3z83_3349, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2198> */
	obj_t BGl_zc3anonymousza32198ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3362, obj_t BgL_fza2za2_3365, obj_t BgL_rrrz00_3366)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 172 */
			{	/* Match/normalize.scm 173 */
				obj_t BgL_fz00_3363;

				obj_t BgL_cz00_3364;

				BgL_fz00_3363 = PROCEDURE_REF(BgL_envz00_3362, (int) (((long) 0)));
				BgL_cz00_3364 = PROCEDURE_REF(BgL_envz00_3362, (int) (((long) 1)));
				{
					obj_t BgL_fza2za2_1169;

					obj_t BgL_rrrz00_1170;

					BgL_fza2za2_1169 = BgL_fza2za2_3365;
					BgL_rrrz00_1170 = BgL_rrrz00_3366;
					{	/* Match/normalize.scm 173 */
						obj_t BgL_labelz00_1172;

						BgL_labelz00_1172 =
							PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
							(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
							BGl_string2939z00zz__match_normaliza7eza7, BEOA);
						{	/* Match/normalize.scm 174 */
							obj_t BgL_arg2199z00_1173;

							{	/* Match/normalize.scm 174 */
								obj_t BgL_arg2200z00_1174;

								obj_t BgL_arg2203z00_1175;

								BgL_arg2200z00_1174 = BGl_symbol2940z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 175 */
									obj_t BgL_arg2204z00_1176;

									{	/* Match/normalize.scm 175 */
										obj_t BgL_arg2209z00_1181;

										obj_t BgL_arg2210z00_1182;

										BgL_arg2209z00_1181 =
											BGl_symbol2924z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 175 */
											obj_t BgL_arg2211z00_1183;

											{	/* Match/normalize.scm 175 */
												obj_t BgL_arg2216z00_1187;

												obj_t BgL_arg2217z00_1188;

												BgL_arg2216z00_1187 =
													BGl_symbol2942z00zz__match_normaliza7eza7;
												{	/* Match/normalize.scm 175 */
													obj_t BgL_arg2222z00_1189;

													BgL_arg2222z00_1189 =
														PROCEDURE_ENTRY
														(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
														(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
														BGl_string2944z00zz__match_normaliza7eza7, BEOA);
													{	/* Match/normalize.scm 175 */
														obj_t BgL_list2224z00_1191;

														{	/* Match/normalize.scm 175 */
															obj_t BgL_arg2226z00_1192;

															BgL_arg2226z00_1192 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2224z00_1191 =
																MAKE_PAIR(BgL_arg2222z00_1189,
																BgL_arg2226z00_1192);
														}
														BgL_arg2217z00_1188 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_labelz00_1172, BgL_list2224z00_1191);
												}}
												BgL_arg2211z00_1183 =
													MAKE_PAIR(BgL_arg2216z00_1187, BgL_arg2217z00_1188);
											}
											{	/* Match/normalize.scm 175 */
												obj_t BgL_list2213z00_1185;

												{	/* Match/normalize.scm 175 */
													obj_t BgL_arg2214z00_1186;

													BgL_arg2214z00_1186 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2213z00_1185 =
														MAKE_PAIR(BgL_arg2211z00_1183, BgL_arg2214z00_1186);
												}
												BgL_arg2210z00_1182 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_fz00_3363, BgL_list2213z00_1185);
										}}
										BgL_arg2204z00_1176 =
											MAKE_PAIR(BgL_arg2209z00_1181, BgL_arg2210z00_1182);
									}
									{	/* Match/normalize.scm 174 */
										obj_t BgL_list2206z00_1178;

										{	/* Match/normalize.scm 174 */
											obj_t BgL_arg2207z00_1179;

											{	/* Match/normalize.scm 174 */
												obj_t BgL_arg2208z00_1180;

												BgL_arg2208z00_1180 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2207z00_1179 =
													MAKE_PAIR(BgL_fza2za2_1169, BgL_arg2208z00_1180);
											}
											BgL_list2206z00_1178 =
												MAKE_PAIR(BgL_arg2204z00_1176, BgL_arg2207z00_1179);
										}
										BgL_arg2203z00_1175 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_labelz00_1172, BgL_list2206z00_1178);
								}}
								BgL_arg2199z00_1173 =
									MAKE_PAIR(BgL_arg2200z00_1174, BgL_arg2203z00_1175);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3364) (BgL_cz00_3364,
								BgL_arg2199z00_1173, BgL_rrrz00_1170, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2227> */
	obj_t BGl_zc3anonymousza32227ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3368, obj_t BgL_rz00_3369, obj_t BgL_cz00_3370)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 180 */
			{
				obj_t BgL_rz00_1195;

				obj_t BgL_cz00_1196;

				BgL_rz00_1195 = BgL_rz00_3369;
				BgL_cz00_1196 = BgL_cz00_3370;
				{	/* Match/normalize.scm 181 */
					obj_t BgL_arg2233z00_2500;

					BgL_arg2233z00_2500 =
						MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7, BNIL);
					return
						PROCEDURE_ENTRY(BgL_cz00_1196) (BgL_cz00_1196, BgL_arg2233z00_2500,
						BgL_rz00_1195, BEOA);
				}
			}
		}
	}



/* standardize-cons */
	obj_t BGl_standardiza7ezd2consz75zz__match_normaliza7eza7(obj_t BgL_fz00_16,
		obj_t BgL_fza2za2_17)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 183 */
			{	/* Match/normalize.scm 184 */
				bool_t BgL_testz00_4213;

				if (PAIRP(BgL_fza2za2_17))
					{	/* Match/normalize.scm 184 */
						BgL_testz00_4213 =
							(CAR(BgL_fza2za2_17) ==
							BGl_symbol2946z00zz__match_normaliza7eza7);
					}
				else
					{	/* Match/normalize.scm 184 */
						BgL_testz00_4213 = ((bool_t) 0);
					}
				if (BgL_testz00_4213)
					{	/* Match/normalize.scm 184 */
						return
							BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7
							(BgL_fz00_16, CDR(BgL_fza2za2_17));
					}
				else
					{	/* Match/normalize.scm 184 */
						if (CBOOL(PROCEDURE_ENTRY
								(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7)
								(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7,
									BGl_symbol2948z00zz__match_normaliza7eza7, BEOA)))
							{	/* Match/normalize.scm 186 */
								return
									BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7
									(BgL_fz00_16, BgL_fza2za2_17);
							}
						else
							{	/* Match/normalize.scm 186 */
								return
									BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7
									(BgL_fz00_16, BgL_fza2za2_17);
							}
					}
			}
		}
	}



/* make-toggle */
	obj_t BGl_makezd2togglezd2zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 190 */
			{	/* Match/normalize.scm 191 */
				obj_t BgL_valuez00_1205;

				BgL_valuez00_1205 = MAKE_CELL(BFALSE);
				{	/* Match/normalize.scm 192 */
					obj_t BgL_zc3anonymousza32240ze3z83_3371;

					BgL_zc3anonymousza32240ze3z83_3371 =
						make_fx_procedure
						(BGl_zc3anonymousza32240ze3z83zz__match_normaliza7eza7,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32240ze3z83_3371, (int) (((long) 0)),
						BgL_valuez00_1205);
					return BgL_zc3anonymousza32240ze3z83_3371;
				}
			}
		}
	}



/* <anonymous:2240> */
	obj_t BGl_zc3anonymousza32240ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3372, obj_t BgL_msgz00_3374)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 192 */
			{	/* Match/normalize.scm 193 */
				obj_t BgL_valuez00_3373;

				BgL_valuez00_3373 = PROCEDURE_REF(BgL_envz00_3372, (int) (((long) 0)));
				{
					obj_t BgL_msgz00_1206;

					BgL_msgz00_1206 = BgL_msgz00_3374;
					if ((BgL_msgz00_1206 == BGl_symbol2948z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 193 */
							return CELL_REF(BgL_valuez00_3373);
						}
					else
						{	/* Match/normalize.scm 193 */
							if (
								(BgL_msgz00_1206 == BGl_symbol2950z00zz__match_normaliza7eza7))
								{	/* Match/normalize.scm 193 */
									return CELL_SET(BgL_valuez00_3373, BTRUE);
								}
							else
								{	/* Match/normalize.scm 193 */
									if (
										(BgL_msgz00_1206 ==
											BGl_symbol2952z00zz__match_normaliza7eza7))
										{	/* Match/normalize.scm 193 */
											return CELL_SET(BgL_valuez00_3373, BFALSE);
										}
									else
										{	/* Match/normalize.scm 193 */
											return BUNSPEC;
										}
								}
						}
				}
			}
		}
	}



/* standardize-real-cons */
	obj_t BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7(obj_t
		BgL_fz00_18, obj_t BgL_fza2za2_19)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 200 */
			{	/* Match/normalize.scm 201 */
				obj_t BgL_zc3anonymousza32244ze3z83_3379;

				BgL_zc3anonymousza32244ze3z83_3379 =
					make_fx_procedure
					(BGl_zc3anonymousza32244ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32244ze3z83_3379, (int) (((long) 0)),
					BgL_fz00_18);
				PROCEDURE_SET(BgL_zc3anonymousza32244ze3z83_3379, (int) (((long) 1)),
					BgL_fza2za2_19);
				return BgL_zc3anonymousza32244ze3z83_3379;
			}
		}
	}



/* <anonymous:2244> */
	obj_t BGl_zc3anonymousza32244ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3380, obj_t BgL_rz00_3383, obj_t BgL_cz00_3384)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 201 */
			{	/* Match/normalize.scm 202 */
				obj_t BgL_fz00_3381;

				obj_t BgL_fza2za2_3382;

				BgL_fz00_3381 = PROCEDURE_REF(BgL_envz00_3380, (int) (((long) 0)));
				BgL_fza2za2_3382 = PROCEDURE_REF(BgL_envz00_3380, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1212;

					obj_t BgL_cz00_1213;

					BgL_rz00_1212 = BgL_rz00_3383;
					BgL_cz00_1213 = BgL_cz00_3384;
					{	/* Match/normalize.scm 202 */
						obj_t BgL_fun2246z00_1215;

						BgL_fun2246z00_1215 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_fz00_3381);
						{	/* Match/normalize.scm 206 */
							obj_t BgL_zc3anonymousza32247ze3z83_3378;

							BgL_zc3anonymousza32247ze3z83_3378 =
								make_fx_procedure
								(BGl_zc3anonymousza32247ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32247ze3z83_3378,
								(int) (((long) 0)), BgL_fza2za2_3382);
							PROCEDURE_SET(BgL_zc3anonymousza32247ze3z83_3378,
								(int) (((long) 1)), BgL_cz00_1213);
							return PROCEDURE_ENTRY(BgL_fun2246z00_1215) (BgL_fun2246z00_1215,
								BgL_rz00_1212, BgL_zc3anonymousza32247ze3z83_3378, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2247> */
	obj_t BGl_zc3anonymousza32247ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3385, obj_t BgL_pattern1z00_3388, obj_t BgL_rrz00_3389)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 204 */
			{	/* Match/normalize.scm 206 */
				obj_t BgL_fza2za2_3386;

				obj_t BgL_cz00_3387;

				BgL_fza2za2_3386 = PROCEDURE_REF(BgL_envz00_3385, (int) (((long) 0)));
				BgL_cz00_3387 = PROCEDURE_REF(BgL_envz00_3385, (int) (((long) 1)));
				{
					obj_t BgL_pattern1z00_1217;

					obj_t BgL_rrz00_1218;

					BgL_pattern1z00_1217 = BgL_pattern1z00_3388;
					BgL_rrz00_1218 = BgL_rrz00_3389;
					{	/* Match/normalize.scm 206 */
						obj_t BgL_fun2249z00_1220;

						BgL_fun2249z00_1220 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_fza2za2_3386);
						{	/* Match/normalize.scm 209 */
							obj_t BgL_zc3anonymousza32250ze3z83_3377;

							BgL_zc3anonymousza32250ze3z83_3377 =
								make_fx_procedure
								(BGl_zc3anonymousza32250ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32250ze3z83_3377,
								(int) (((long) 0)), BgL_pattern1z00_1217);
							PROCEDURE_SET(BgL_zc3anonymousza32250ze3z83_3377,
								(int) (((long) 1)), BgL_cz00_3387);
							return PROCEDURE_ENTRY(BgL_fun2249z00_1220) (BgL_fun2249z00_1220,
								BgL_rrz00_1218, BgL_zc3anonymousza32250ze3z83_3377, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2250> */
	obj_t BGl_zc3anonymousza32250ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3390, obj_t BgL_pattern2z00_3393, obj_t BgL_rrrz00_3394)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 208 */
			{	/* Match/normalize.scm 209 */
				obj_t BgL_pattern1z00_3391;

				obj_t BgL_cz00_3392;

				BgL_pattern1z00_3391 =
					PROCEDURE_REF(BgL_envz00_3390, (int) (((long) 0)));
				BgL_cz00_3392 = PROCEDURE_REF(BgL_envz00_3390, (int) (((long) 1)));
				{
					obj_t BgL_pattern2z00_1222;

					obj_t BgL_rrrz00_1223;

					BgL_pattern2z00_1222 = BgL_pattern2z00_3393;
					BgL_rrrz00_1223 = BgL_rrrz00_3394;
					{	/* Match/normalize.scm 209 */
						obj_t BgL_arg2251z00_2510;

						{	/* Match/normalize.scm 209 */
							obj_t BgL_arg2252z00_2511;

							obj_t BgL_arg2253z00_2512;

							BgL_arg2252z00_2511 = BGl_symbol2924z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 209 */
								obj_t BgL_list2254z00_2513;

								{	/* Match/normalize.scm 209 */
									obj_t BgL_arg2255z00_2514;

									BgL_arg2255z00_2514 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2254z00_2513 =
										MAKE_PAIR(BgL_pattern2z00_1222, BgL_arg2255z00_2514);
								}
								BgL_arg2253z00_2512 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_pattern1z00_3391, BgL_list2254z00_2513);
							}
							BgL_arg2251z00_2510 =
								MAKE_PAIR(BgL_arg2252z00_2511, BgL_arg2253z00_2512);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3392) (BgL_cz00_3392,
							BgL_arg2251z00_2510, BgL_rrrz00_1223, BEOA);
					}
				}
			}
		}
	}



/* standardize-real-xcons */
	obj_t BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7(obj_t
		BgL_fz00_20, obj_t BgL_fza2za2_21)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 211 */
			{	/* Match/normalize.scm 212 */
				obj_t BgL_zc3anonymousza32256ze3z83_3397;

				BgL_zc3anonymousza32256ze3z83_3397 =
					make_fx_procedure
					(BGl_zc3anonymousza32256ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32256ze3z83_3397, (int) (((long) 0)),
					BgL_fza2za2_21);
				PROCEDURE_SET(BgL_zc3anonymousza32256ze3z83_3397, (int) (((long) 1)),
					BgL_fz00_20);
				return BgL_zc3anonymousza32256ze3z83_3397;
			}
		}
	}



/* <anonymous:2256> */
	obj_t BGl_zc3anonymousza32256ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3398, obj_t BgL_rz00_3401, obj_t BgL_cz00_3402)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 212 */
			{	/* Match/normalize.scm 213 */
				obj_t BgL_fza2za2_3399;

				obj_t BgL_fz00_3400;

				BgL_fza2za2_3399 = PROCEDURE_REF(BgL_envz00_3398, (int) (((long) 0)));
				BgL_fz00_3400 = PROCEDURE_REF(BgL_envz00_3398, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1232;

					obj_t BgL_cz00_1233;

					BgL_rz00_1232 = BgL_rz00_3401;
					BgL_cz00_1233 = BgL_cz00_3402;
					{	/* Match/normalize.scm 213 */
						obj_t BgL_fun2258z00_1235;

						BgL_fun2258z00_1235 =
							BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
							(BgL_fza2za2_3399);
						{	/* Match/normalize.scm 216 */
							obj_t BgL_zc3anonymousza32259ze3z83_3396;

							BgL_zc3anonymousza32259ze3z83_3396 =
								make_fx_procedure
								(BGl_zc3anonymousza32259ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32259ze3z83_3396,
								(int) (((long) 0)), BgL_fz00_3400);
							PROCEDURE_SET(BgL_zc3anonymousza32259ze3z83_3396,
								(int) (((long) 1)), BgL_cz00_1233);
							return PROCEDURE_ENTRY(BgL_fun2258z00_1235) (BgL_fun2258z00_1235,
								BgL_rz00_1232, BgL_zc3anonymousza32259ze3z83_3396, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2259> */
	obj_t BGl_zc3anonymousza32259ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3403, obj_t BgL_pattern1z00_3406, obj_t BgL_rrz00_3407)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 215 */
			{	/* Match/normalize.scm 216 */
				obj_t BgL_fz00_3404;

				obj_t BgL_cz00_3405;

				BgL_fz00_3404 = PROCEDURE_REF(BgL_envz00_3403, (int) (((long) 0)));
				BgL_cz00_3405 = PROCEDURE_REF(BgL_envz00_3403, (int) (((long) 1)));
				{
					obj_t BgL_pattern1z00_1237;

					obj_t BgL_rrz00_1238;

					BgL_pattern1z00_1237 = BgL_pattern1z00_3406;
					BgL_rrz00_1238 = BgL_rrz00_3407;
					{	/* Match/normalize.scm 216 */
						obj_t BgL_fun2261z00_1240;

						BgL_fun2261z00_1240 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_fz00_3404);
						{	/* Match/normalize.scm 219 */
							obj_t BgL_zc3anonymousza32262ze3z83_3395;

							BgL_zc3anonymousza32262ze3z83_3395 =
								make_fx_procedure
								(BGl_zc3anonymousza32262ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32262ze3z83_3395,
								(int) (((long) 0)), BgL_pattern1z00_1237);
							PROCEDURE_SET(BgL_zc3anonymousza32262ze3z83_3395,
								(int) (((long) 1)), BgL_cz00_3405);
							return PROCEDURE_ENTRY(BgL_fun2261z00_1240) (BgL_fun2261z00_1240,
								BgL_rrz00_1238, BgL_zc3anonymousza32262ze3z83_3395, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2262> */
	obj_t BGl_zc3anonymousza32262ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3408, obj_t BgL_pattern2z00_3411, obj_t BgL_rrrz00_3412)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 218 */
			{	/* Match/normalize.scm 219 */
				obj_t BgL_pattern1z00_3409;

				obj_t BgL_cz00_3410;

				BgL_pattern1z00_3409 =
					PROCEDURE_REF(BgL_envz00_3408, (int) (((long) 0)));
				BgL_cz00_3410 = PROCEDURE_REF(BgL_envz00_3408, (int) (((long) 1)));
				{
					obj_t BgL_pattern2z00_1242;

					obj_t BgL_rrrz00_1243;

					BgL_pattern2z00_1242 = BgL_pattern2z00_3411;
					BgL_rrrz00_1243 = BgL_rrrz00_3412;
					{	/* Match/normalize.scm 219 */
						obj_t BgL_arg2263z00_2515;

						{	/* Match/normalize.scm 219 */
							obj_t BgL_arg2264z00_2516;

							obj_t BgL_arg2265z00_2517;

							BgL_arg2264z00_2516 = BGl_symbol2954z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 219 */
								obj_t BgL_list2266z00_2518;

								{	/* Match/normalize.scm 219 */
									obj_t BgL_arg2267z00_2519;

									BgL_arg2267z00_2519 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2266z00_2518 =
										MAKE_PAIR(BgL_pattern1z00_3409, BgL_arg2267z00_2519);
								}
								BgL_arg2265z00_2517 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_pattern2z00_1242, BgL_list2266z00_2518);
							}
							BgL_arg2263z00_2515 =
								MAKE_PAIR(BgL_arg2264z00_2516, BgL_arg2265z00_2517);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3410) (BgL_cz00_3410,
							BgL_arg2263z00_2515, BgL_rrrz00_1243, BEOA);
					}
				}
			}
		}
	}



/* standardize-term-variable */
	obj_t BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 221 */
			{	/* Match/normalize.scm 222 */
				obj_t BgL_zc3anonymousza32268ze3z83_3413;

				BgL_zc3anonymousza32268ze3z83_3413 =
					make_fx_procedure
					(BGl_zc3anonymousza32268ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32268ze3z83_3413, (int) (((long) 0)),
					BgL_ez00_22);
				return BgL_zc3anonymousza32268ze3z83_3413;
			}
		}
	}



/* <anonymous:2268> */
	obj_t BGl_zc3anonymousza32268ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3414, obj_t BgL_rz00_3416, obj_t BgL_cz00_3417)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 222 */
			{	/* Match/normalize.scm 223 */
				obj_t BgL_ez00_3415;

				BgL_ez00_3415 = PROCEDURE_REF(BgL_envz00_3414, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1252;

					obj_t BgL_cz00_1253;

					BgL_rz00_1252 = BgL_rz00_3416;
					BgL_cz00_1253 = BgL_cz00_3417;
					{	/* Match/normalize.scm 223 */
						obj_t BgL_namez00_2520;

						{	/* Match/normalize.scm 223 */
							obj_t BgL_sz00_2526;

							BgL_sz00_2526 = SYMBOL_TO_STRING(BgL_ez00_3415);
							{	/* Match/normalize.scm 223 */
								obj_t BgL_arg2140z00_2527;

								BgL_arg2140z00_2527 =
									c_substring(BgL_sz00_2526, ((long) 1),
									STRING_LENGTH(BgL_sz00_2526));
								BgL_namez00_2520 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2140z00_2527));
						}}
						{	/* Match/normalize.scm 223 */
							obj_t BgL_arg2269z00_2521;

							{	/* Match/normalize.scm 223 */
								obj_t BgL_arg2270z00_2522;

								obj_t BgL_arg2271z00_2523;

								BgL_arg2270z00_2522 = BGl_symbol2956z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 223 */
									obj_t BgL_list2272z00_2524;

									BgL_list2272z00_2524 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2271z00_2523 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_2520, BgL_list2272z00_2524);
								}
								BgL_arg2269z00_2521 =
									MAKE_PAIR(BgL_arg2270z00_2522, BgL_arg2271z00_2523);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_1253) (BgL_cz00_1253,
								BgL_arg2269z00_2521, BgL_rz00_1252, BEOA);
						}
					}
				}
			}
		}
	}



/* standardize-hole-variable */
	obj_t BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_23)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 234 */
			{	/* Match/normalize.scm 235 */
				obj_t BgL_zc3anonymousza32273ze3z83_3418;

				BgL_zc3anonymousza32273ze3z83_3418 =
					make_fx_procedure
					(BGl_zc3anonymousza32273ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32273ze3z83_3418, (int) (((long) 0)),
					BgL_ez00_23);
				return BgL_zc3anonymousza32273ze3z83_3418;
			}
		}
	}



/* <anonymous:2273> */
	obj_t BGl_zc3anonymousza32273ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3419, obj_t BgL_rz00_3421, obj_t BgL_cz00_3422)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 235 */
			{	/* Match/normalize.scm 236 */
				obj_t BgL_ez00_3420;

				BgL_ez00_3420 = PROCEDURE_REF(BgL_envz00_3419, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1260;

					obj_t BgL_cz00_1261;

					BgL_rz00_1260 = BgL_rz00_3421;
					BgL_cz00_1261 = BgL_cz00_3422;
					{	/* Match/normalize.scm 236 */
						obj_t BgL_namez00_2536;

						{	/* Match/normalize.scm 236 */
							obj_t BgL_sz00_2545;

							BgL_sz00_2545 = SYMBOL_TO_STRING(BgL_ez00_3420);
							{	/* Match/normalize.scm 236 */
								obj_t BgL_arg2151z00_2546;

								BgL_arg2151z00_2546 =
									c_substring(BgL_sz00_2545, ((long) 1),
									STRING_LENGTH(BgL_sz00_2545));
								BgL_namez00_2536 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2151z00_2546));
						}}
						{	/* Match/normalize.scm 236 */
							obj_t BgL_arg2274z00_2537;

							{	/* Match/normalize.scm 236 */
								obj_t BgL_arg2275z00_2538;

								obj_t BgL_arg2277z00_2539;

								BgL_arg2275z00_2538 = BGl_symbol2942z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 236 */
									obj_t BgL_arg2278z00_2540;

									BgL_arg2278z00_2540 =
										PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
										(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
										BGl_string2944z00zz__match_normaliza7eza7, BEOA);
									{	/* Match/normalize.scm 236 */
										obj_t BgL_list2280z00_2542;

										{	/* Match/normalize.scm 236 */
											obj_t BgL_arg2281z00_2543;

											BgL_arg2281z00_2543 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2280z00_2542 =
												MAKE_PAIR(BgL_arg2278z00_2540, BgL_arg2281z00_2543);
										}
										BgL_arg2277z00_2539 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_namez00_2536, BgL_list2280z00_2542);
								}}
								BgL_arg2274z00_2537 =
									MAKE_PAIR(BgL_arg2275z00_2538, BgL_arg2277z00_2539);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_1261) (BgL_cz00_1261,
								BgL_arg2274z00_2537, BgL_rz00_1260, BEOA);
						}
					}
				}
			}
		}
	}



/* standardize-quote */
	obj_t BGl_standardiza7ezd2quotez75zz__match_normaliza7eza7(obj_t BgL_ez00_24)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 239 */
			{	/* Match/normalize.scm 240 */
				obj_t BgL_zc3anonymousza32282ze3z83_3423;

				BgL_zc3anonymousza32282ze3z83_3423 =
					make_fx_procedure
					(BGl_zc3anonymousza32282ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32282ze3z83_3423, (int) (((long) 0)),
					BgL_ez00_24);
				return BgL_zc3anonymousza32282ze3z83_3423;
			}
		}
	}



/* <anonymous:2282> */
	obj_t BGl_zc3anonymousza32282ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3424, obj_t BgL_rz00_3426, obj_t BgL_cz00_3427)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 240 */
			{	/* Match/normalize.scm 241 */
				obj_t BgL_ez00_3425;

				BgL_ez00_3425 = PROCEDURE_REF(BgL_envz00_3424, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1271;

					obj_t BgL_cz00_1272;

					BgL_rz00_1271 = BgL_rz00_3426;
					BgL_cz00_1272 = BgL_cz00_3427;
					{	/* Match/normalize.scm 241 */
						obj_t BgL_arg2283z00_2555;

						{	/* Match/normalize.scm 241 */
							obj_t BgL_arg2284z00_2556;

							obj_t BgL_arg2285z00_2557;

							BgL_arg2284z00_2556 = BGl_symbol2912z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 241 */
								obj_t BgL_list2286z00_2558;

								BgL_list2286z00_2558 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2285z00_2557 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_3425,
									BgL_list2286z00_2558);
							}
							BgL_arg2283z00_2555 =
								MAKE_PAIR(BgL_arg2284z00_2556, BgL_arg2285z00_2557);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_1272) (BgL_cz00_1272,
							BgL_arg2283z00_2555, BgL_rz00_1271, BEOA);
					}
				}
			}
		}
	}



/* standardize-segment-variable */
	obj_t BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_25, obj_t BgL_fza2za2_26)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 243 */
			{	/* Match/normalize.scm 244 */
				obj_t BgL_zc3anonymousza32287ze3z83_3430;

				BgL_zc3anonymousza32287ze3z83_3430 =
					make_fx_procedure
					(BGl_zc3anonymousza32287ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza32287ze3z83_3430, (int) (((long) 0)),
					BgL_ez00_25);
				PROCEDURE_SET(BgL_zc3anonymousza32287ze3z83_3430, (int) (((long) 1)),
					BgL_fza2za2_26);
				return BgL_zc3anonymousza32287ze3z83_3430;
			}
		}
	}



/* <anonymous:2287> */
	obj_t BGl_zc3anonymousza32287ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3431, obj_t BgL_rz00_3434, obj_t BgL_cz00_3435)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 244 */
			{	/* Match/normalize.scm 245 */
				obj_t BgL_ez00_3432;

				obj_t BgL_fza2za2_3433;

				BgL_ez00_3432 = PROCEDURE_REF(BgL_envz00_3431, (int) (((long) 0)));
				BgL_fza2za2_3433 = PROCEDURE_REF(BgL_envz00_3431, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1278;

					obj_t BgL_cz00_1279;

					BgL_rz00_1278 = BgL_rz00_3434;
					BgL_cz00_1279 = BgL_cz00_3435;
					{	/* Match/normalize.scm 245 */
						obj_t BgL_namez00_1281;

						{	/* Match/normalize.scm 245 */
							obj_t BgL_sz00_2560;

							BgL_sz00_2560 = SYMBOL_TO_STRING(BgL_ez00_3432);
							{	/* Match/normalize.scm 245 */
								obj_t BgL_arg2145z00_2561;

								BgL_arg2145z00_2561 =
									c_substring(BgL_sz00_2560, ((long) 2),
									STRING_LENGTH(BgL_sz00_2560));
								BgL_namez00_1281 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2145z00_2561));
						}}
						{	/* Match/normalize.scm 246 */
							bool_t BgL_testz00_4394;

							{	/* Match/normalize.scm 246 */
								obj_t BgL_arg2336z00_1334;

								if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_1281, BgL_rz00_1278)))
									{	/* Match/normalize.scm 246 */
										BgL_arg2336z00_1334 =
											CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_namez00_1281, BgL_rz00_1278));
									}
								else
									{	/* Match/normalize.scm 246 */
										BgL_arg2336z00_1334 = BFALSE;
									}
								BgL_testz00_4394 =
									(BgL_arg2336z00_1334 ==
									BGl_unboundzd2patternzd2zz__match_normaliza7eza7);
							}
							if (BgL_testz00_4394)
								{	/* Match/normalize.scm 247 */
									obj_t BgL_fun2292z00_1283;

									BgL_fun2292z00_1283 =
										BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
										(BgL_fza2za2_3433);
									{	/* Match/normalize.scm 248 */
										obj_t BgL_arg2289z00_1284;

										{	/* Match/normalize.scm 248 */
											obj_t BgL_imz00_2577;

											BgL_imz00_2577 =
												BGl_symbol2958z00zz__match_normaliza7eza7;
											{	/* Match/normalize.scm 248 */
												obj_t BgL_arg2444z00_2578;

												BgL_arg2444z00_2578 =
													MAKE_PAIR(BgL_namez00_1281, BgL_imz00_2577);
												BgL_arg2289z00_1284 =
													MAKE_PAIR(BgL_arg2444z00_2578, BgL_rz00_1278);
											}
										}
										{	/* Match/normalize.scm 250 */
											obj_t BgL_zc3anonymousza32293ze3z83_3428;

											BgL_zc3anonymousza32293ze3z83_3428 =
												make_fx_procedure
												(BGl_zc3anonymousza32293ze3z83zz__match_normaliza7eza7,
												(int) (((long) 2)), (int) (((long) 2)));
											PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_3428,
												(int) (((long) 0)), BgL_namez00_1281);
											PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_3428,
												(int) (((long) 1)), BgL_cz00_1279);
											return
												PROCEDURE_ENTRY(BgL_fun2292z00_1283)
												(BgL_fun2292z00_1283, BgL_arg2289z00_1284,
												BgL_zc3anonymousza32293ze3z83_3428, BEOA);
										}
									}
								}
							else
								{	/* Match/normalize.scm 258 */
									obj_t BgL_fun2329z00_1323;

									BgL_fun2329z00_1323 =
										BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
										(BgL_fza2za2_3433);
									{	/* Match/normalize.scm 261 */
										obj_t BgL_zc3anonymousza32330ze3z83_3429;

										BgL_zc3anonymousza32330ze3z83_3429 =
											make_fx_procedure
											(BGl_zc3anonymousza32330ze3z83zz__match_normaliza7eza7,
											(int) (((long) 2)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3anonymousza32330ze3z83_3429,
											(int) (((long) 0)), BgL_namez00_1281);
										PROCEDURE_SET(BgL_zc3anonymousza32330ze3z83_3429,
											(int) (((long) 1)), BgL_cz00_1279);
										return
											PROCEDURE_ENTRY(BgL_fun2329z00_1323) (BgL_fun2329z00_1323,
											BgL_rz00_1278, BgL_zc3anonymousza32330ze3z83_3429, BEOA);
									}
								}
						}
					}
				}
			}
		}
	}



/* <anonymous:2293> */
	obj_t BGl_zc3anonymousza32293ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3436, obj_t BgL_patternz00_3439, obj_t BgL_rrz00_3440)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 249 */
			{	/* Match/normalize.scm 250 */
				obj_t BgL_namez00_3437;

				obj_t BgL_cz00_3438;

				BgL_namez00_3437 = PROCEDURE_REF(BgL_envz00_3436, (int) (((long) 0)));
				BgL_cz00_3438 = PROCEDURE_REF(BgL_envz00_3436, (int) (((long) 1)));
				{
					obj_t BgL_patternz00_1286;

					obj_t BgL_rrz00_1287;

					BgL_patternz00_1286 = BgL_patternz00_3439;
					BgL_rrz00_1287 = BgL_rrz00_3440;
					{	/* Match/normalize.scm 250 */
						obj_t BgL_labelz00_1289;

						BgL_labelz00_1289 =
							PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
							(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
							BGl_string2939z00zz__match_normaliza7eza7, BEOA);
						{	/* Match/normalize.scm 251 */
							obj_t BgL_arg2294z00_1290;

							{	/* Match/normalize.scm 251 */
								obj_t BgL_arg2295z00_1291;

								obj_t BgL_arg2296z00_1292;

								BgL_arg2295z00_1291 = BGl_symbol2960z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 253 */
									obj_t BgL_arg2297z00_1293;

									{	/* Match/normalize.scm 253 */
										obj_t BgL_arg2304z00_1298;

										obj_t BgL_arg2305z00_1299;

										BgL_arg2304z00_1298 =
											BGl_symbol2962z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 254 */
											obj_t BgL_arg2306z00_1300;

											obj_t BgL_arg2307z00_1301;

											{	/* Match/normalize.scm 254 */
												obj_t BgL_arg2312z00_1306;

												obj_t BgL_arg2313z00_1307;

												BgL_arg2312z00_1306 =
													BGl_symbol2924z00zz__match_normaliza7eza7;
												{	/* Match/normalize.scm 254 */
													obj_t BgL_arg2314z00_1308;

													obj_t BgL_arg2315z00_1309;

													BgL_arg2314z00_1308 =
														MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
														BNIL);
													{	/* Match/normalize.scm 254 */
														obj_t BgL_arg2319z00_1313;

														obj_t BgL_arg2320z00_1314;

														BgL_arg2319z00_1313 =
															BGl_symbol2942z00zz__match_normaliza7eza7;
														{	/* Match/normalize.scm 254 */
															obj_t BgL_arg2321z00_1315;

															BgL_arg2321z00_1315 =
																PROCEDURE_ENTRY
																(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																BGl_string2944z00zz__match_normaliza7eza7,
																BEOA);
															{	/* Match/normalize.scm 254 */
																obj_t BgL_list2323z00_1317;

																{	/* Match/normalize.scm 254 */
																	obj_t BgL_arg2324z00_1318;

																	BgL_arg2324z00_1318 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2323z00_1317 =
																		MAKE_PAIR(BgL_arg2321z00_1315,
																		BgL_arg2324z00_1318);
																}
																BgL_arg2320z00_1314 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_labelz00_1289, BgL_list2323z00_1317);
														}}
														BgL_arg2315z00_1309 =
															MAKE_PAIR(BgL_arg2319z00_1313,
															BgL_arg2320z00_1314);
													}
													{	/* Match/normalize.scm 254 */
														obj_t BgL_list2317z00_1311;

														{	/* Match/normalize.scm 254 */
															obj_t BgL_arg2318z00_1312;

															BgL_arg2318z00_1312 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2317z00_1311 =
																MAKE_PAIR(BgL_arg2315z00_1309,
																BgL_arg2318z00_1312);
														}
														BgL_arg2313z00_1307 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2314z00_1308, BgL_list2317z00_1311);
												}}
												BgL_arg2306z00_1300 =
													MAKE_PAIR(BgL_arg2312z00_1306, BgL_arg2313z00_1307);
											}
											{	/* Match/normalize.scm 255 */
												obj_t BgL_arg2325z00_1319;

												obj_t BgL_arg2326z00_1320;

												BgL_arg2325z00_1319 =
													BGl_symbol2964z00zz__match_normaliza7eza7;
												{	/* Match/normalize.scm 255 */
													obj_t BgL_list2327z00_1321;

													BgL_list2327z00_1321 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2326z00_1320 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_namez00_3437, BgL_list2327z00_1321);
												}
												BgL_arg2307z00_1301 =
													MAKE_PAIR(BgL_arg2325z00_1319, BgL_arg2326z00_1320);
											}
											{	/* Match/normalize.scm 253 */
												obj_t BgL_list2309z00_1303;

												{	/* Match/normalize.scm 253 */
													obj_t BgL_arg2310z00_1304;

													{	/* Match/normalize.scm 253 */
														obj_t BgL_arg2311z00_1305;

														BgL_arg2311z00_1305 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2310z00_1304 =
															MAKE_PAIR(BgL_arg2307z00_1301,
															BgL_arg2311z00_1305);
													}
													BgL_list2309z00_1303 =
														MAKE_PAIR(BgL_arg2306z00_1300, BgL_arg2310z00_1304);
												}
												BgL_arg2305z00_1299 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_labelz00_1289, BgL_list2309z00_1303);
										}}
										BgL_arg2297z00_1293 =
											MAKE_PAIR(BgL_arg2304z00_1298, BgL_arg2305z00_1299);
									}
									{	/* Match/normalize.scm 251 */
										obj_t BgL_list2301z00_1295;

										{	/* Match/normalize.scm 251 */
											obj_t BgL_arg2302z00_1296;

											{	/* Match/normalize.scm 251 */
												obj_t BgL_arg2303z00_1297;

												BgL_arg2303z00_1297 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2302z00_1296 =
													MAKE_PAIR(BgL_patternz00_1286, BgL_arg2303z00_1297);
											}
											BgL_list2301z00_1295 =
												MAKE_PAIR(BgL_arg2297z00_1293, BgL_arg2302z00_1296);
										}
										BgL_arg2296z00_1292 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_namez00_3437, BgL_list2301z00_1295);
								}}
								BgL_arg2294z00_1290 =
									MAKE_PAIR(BgL_arg2295z00_1291, BgL_arg2296z00_1292);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3438) (BgL_cz00_3438,
								BgL_arg2294z00_1290, BgL_rrz00_1287, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2330> */
	obj_t BGl_zc3anonymousza32330ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3441, obj_t BgL_patternz00_3444, obj_t BgL_rrz00_3445)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 260 */
			{	/* Match/normalize.scm 261 */
				obj_t BgL_namez00_3442;

				obj_t BgL_cz00_3443;

				BgL_namez00_3442 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 0)));
				BgL_cz00_3443 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 1)));
				{
					obj_t BgL_patternz00_1325;

					obj_t BgL_rrz00_1326;

					BgL_patternz00_1325 = BgL_patternz00_3444;
					BgL_rrz00_1326 = BgL_rrz00_3445;
					{	/* Match/normalize.scm 261 */
						obj_t BgL_arg2331z00_2579;

						{	/* Match/normalize.scm 261 */
							obj_t BgL_arg2332z00_2580;

							obj_t BgL_arg2333z00_2581;

							BgL_arg2332z00_2580 = BGl_symbol2966z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 261 */
								obj_t BgL_list2334z00_2582;

								{	/* Match/normalize.scm 261 */
									obj_t BgL_arg2335z00_2583;

									BgL_arg2335z00_2583 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2334z00_2582 =
										MAKE_PAIR(BgL_patternz00_1325, BgL_arg2335z00_2583);
								}
								BgL_arg2333z00_2581 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_namez00_3442,
									BgL_list2334z00_2582);
							}
							BgL_arg2331z00_2579 =
								MAKE_PAIR(BgL_arg2332z00_2580, BgL_arg2333z00_2581);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3443) (BgL_cz00_3443,
							BgL_arg2331z00_2579, BgL_rrz00_1326, BEOA);
					}
				}
			}
		}
	}



/* standardize-tree-variable */
	obj_t BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_27, obj_t BgL_f1z00_28, obj_t BgL_f2z00_29)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 263 */
			{	/* Match/normalize.scm 264 */
				obj_t BgL_zc3anonymousza32337ze3z83_3448;

				BgL_zc3anonymousza32337ze3z83_3448 =
					make_fx_procedure
					(BGl_zc3anonymousza32337ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_3448, (int) (((long) 0)),
					BgL_ez00_27);
				PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_3448, (int) (((long) 1)),
					BgL_f1z00_28);
				PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_3448, (int) (((long) 2)),
					BgL_f2z00_29);
				return BgL_zc3anonymousza32337ze3z83_3448;
			}
		}
	}



/* <anonymous:2337> */
	obj_t BGl_zc3anonymousza32337ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3449, obj_t BgL_rz00_3453, obj_t BgL_cz00_3454)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 264 */
			{	/* Match/normalize.scm 265 */
				obj_t BgL_ez00_3450;

				obj_t BgL_f1z00_3451;

				obj_t BgL_f2z00_3452;

				BgL_ez00_3450 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 0)));
				BgL_f1z00_3451 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 1)));
				BgL_f2z00_3452 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 2)));
				{
					obj_t BgL_rz00_1335;

					obj_t BgL_cz00_1336;

					BgL_rz00_1335 = BgL_rz00_3453;
					BgL_cz00_1336 = BgL_cz00_3454;
					{	/* Match/normalize.scm 265 */
						obj_t BgL_namez00_1338;

						{	/* Match/normalize.scm 265 */
							obj_t BgL_sz00_2585;

							BgL_sz00_2585 = SYMBOL_TO_STRING(BgL_ez00_3450);
							{	/* Match/normalize.scm 265 */
								obj_t BgL_arg2148z00_2586;

								BgL_arg2148z00_2586 =
									c_substring(BgL_sz00_2585, ((long) 1),
									STRING_LENGTH(BgL_sz00_2585));
								BgL_namez00_1338 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2148z00_2586));
						}}
						{	/* Match/normalize.scm 266 */
							obj_t BgL_fun2340z00_1339;

							BgL_fun2340z00_1339 =
								BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_f1z00_3451);
							{	/* Match/normalize.scm 267 */
								obj_t BgL_arg2338z00_1340;

								{	/* Match/normalize.scm 267 */
									obj_t BgL_imz00_2597;

									BgL_imz00_2597 = BGl_symbol2962z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 267 */
										obj_t BgL_arg2444z00_2598;

										BgL_arg2444z00_2598 =
											MAKE_PAIR(BgL_namez00_1338, BgL_imz00_2597);
										BgL_arg2338z00_1340 =
											MAKE_PAIR(BgL_arg2444z00_2598, BgL_rz00_1335);
								}}
								{	/* Match/normalize.scm 269 */
									obj_t BgL_zc3anonymousza32341ze3z83_3447;

									BgL_zc3anonymousza32341ze3z83_3447 =
										make_fx_procedure
										(BGl_zc3anonymousza32341ze3z83zz__match_normaliza7eza7,
										(int) (((long) 2)), (int) (((long) 3)));
									PROCEDURE_SET(BgL_zc3anonymousza32341ze3z83_3447,
										(int) (((long) 0)), BgL_f2z00_3452);
									PROCEDURE_SET(BgL_zc3anonymousza32341ze3z83_3447,
										(int) (((long) 1)), BgL_namez00_1338);
									PROCEDURE_SET(BgL_zc3anonymousza32341ze3z83_3447,
										(int) (((long) 2)), BgL_cz00_1336);
									return
										PROCEDURE_ENTRY(BgL_fun2340z00_1339) (BgL_fun2340z00_1339,
										BgL_arg2338z00_1340, BgL_zc3anonymousza32341ze3z83_3447,
										BEOA);
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2341> */
	obj_t BGl_zc3anonymousza32341ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3455, obj_t BgL_holezd2patternzd2_3459, obj_t BgL_rrz00_3460)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 268 */
			{	/* Match/normalize.scm 269 */
				obj_t BgL_f2z00_3456;

				obj_t BgL_namez00_3457;

				obj_t BgL_cz00_3458;

				BgL_f2z00_3456 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 0)));
				BgL_namez00_3457 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 1)));
				BgL_cz00_3458 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 2)));
				{
					obj_t BgL_holezd2patternzd2_1342;

					obj_t BgL_rrz00_1343;

					BgL_holezd2patternzd2_1342 = BgL_holezd2patternzd2_3459;
					BgL_rrz00_1343 = BgL_rrz00_3460;
					{	/* Match/normalize.scm 269 */
						obj_t BgL_fun2343z00_1345;

						BgL_fun2343z00_1345 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_f2z00_3456);
						{	/* Match/normalize.scm 272 */
							obj_t BgL_zc3anonymousza32344ze3z83_3446;

							BgL_zc3anonymousza32344ze3z83_3446 =
								make_fx_procedure
								(BGl_zc3anonymousza32344ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3anonymousza32344ze3z83_3446,
								(int) (((long) 0)), BgL_holezd2patternzd2_1342);
							PROCEDURE_SET(BgL_zc3anonymousza32344ze3z83_3446,
								(int) (((long) 1)), BgL_namez00_3457);
							PROCEDURE_SET(BgL_zc3anonymousza32344ze3z83_3446,
								(int) (((long) 2)), BgL_cz00_3458);
							return PROCEDURE_ENTRY(BgL_fun2343z00_1345) (BgL_fun2343z00_1345,
								BgL_rrz00_1343, BgL_zc3anonymousza32344ze3z83_3446, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2344> */
	obj_t BGl_zc3anonymousza32344ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3461, obj_t BgL_patternsz00_3465, obj_t BgL_rrrz00_3466)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 271 */
			{	/* Match/normalize.scm 272 */
				obj_t BgL_holezd2patternzd2_3462;

				obj_t BgL_namez00_3463;

				obj_t BgL_cz00_3464;

				BgL_holezd2patternzd2_3462 =
					PROCEDURE_REF(BgL_envz00_3461, (int) (((long) 0)));
				BgL_namez00_3463 = PROCEDURE_REF(BgL_envz00_3461, (int) (((long) 1)));
				BgL_cz00_3464 = PROCEDURE_REF(BgL_envz00_3461, (int) (((long) 2)));
				{
					obj_t BgL_patternsz00_1347;

					obj_t BgL_rrrz00_1348;

					BgL_patternsz00_1347 = BgL_patternsz00_3465;
					BgL_rrrz00_1348 = BgL_rrrz00_3466;
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00
						(BGl_oczd2countzd2zz__match_normaliza7eza7(BgL_namez00_3463,
								BgL_patternsz00_1347), BINT(((long) 1))))
						{	/* Match/normalize.scm 273 */
							obj_t BgL_arg2346z00_1351;

							{	/* Match/normalize.scm 273 */
								obj_t BgL_arg2347z00_1352;

								obj_t BgL_arg2348z00_1353;

								BgL_arg2347z00_1352 = BGl_symbol2962z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 273 */
									obj_t BgL_list2349z00_1354;

									{	/* Match/normalize.scm 273 */
										obj_t BgL_arg2350z00_1355;

										{	/* Match/normalize.scm 273 */
											obj_t BgL_arg2351z00_1356;

											BgL_arg2351z00_1356 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2350z00_1355 =
												MAKE_PAIR(BgL_holezd2patternzd2_3462,
												BgL_arg2351z00_1356);
										}
										BgL_list2349z00_1354 =
											MAKE_PAIR(BgL_patternsz00_1347, BgL_arg2350z00_1355);
									}
									BgL_arg2348z00_1353 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_3463, BgL_list2349z00_1354);
								}
								BgL_arg2346z00_1351 =
									MAKE_PAIR(BgL_arg2347z00_1352, BgL_arg2348z00_1353);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3464) (BgL_cz00_3464,
								BgL_arg2346z00_1351, BgL_rrrz00_1348, BEOA);
						}
					else
						{	/* Match/normalize.scm 274 */
							obj_t BgL_arg2352z00_1357;

							{	/* Match/normalize.scm 274 */
								obj_t BgL_arg2353z00_1358;

								obj_t BgL_arg2354z00_1359;

								BgL_arg2353z00_1358 = BGl_symbol2940z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 274 */
									obj_t BgL_list2355z00_1360;

									{	/* Match/normalize.scm 274 */
										obj_t BgL_arg2356z00_1361;

										{	/* Match/normalize.scm 274 */
											obj_t BgL_arg2357z00_1362;

											BgL_arg2357z00_1362 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2356z00_1361 =
												MAKE_PAIR(BgL_holezd2patternzd2_3462,
												BgL_arg2357z00_1362);
										}
										BgL_list2355z00_1360 =
											MAKE_PAIR(BgL_patternsz00_1347, BgL_arg2356z00_1361);
									}
									BgL_arg2354z00_1359 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_3463, BgL_list2355z00_1360);
								}
								BgL_arg2352z00_1357 =
									MAKE_PAIR(BgL_arg2353z00_1358, BgL_arg2354z00_1359);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3464) (BgL_cz00_3464,
								BgL_arg2352z00_1357, BgL_rrrz00_1348, BEOA);
						}
				}
			}
		}
	}



/* oc-count */
	obj_t BGl_oczd2countzd2zz__match_normaliza7eza7(obj_t BgL_namez00_30,
		obj_t BgL_patternz00_31)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 276 */
			if (NULLP(BgL_patternz00_31))
				{	/* Match/normalize.scm 278 */
					return BINT(((long) 0));
				}
			else
				{	/* Match/normalize.scm 278 */
					if (
						(CAR(BgL_patternz00_31) ==
							BGl_symbol2942z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 280 */
							bool_t BgL_testz00_4547;

							{	/* Match/normalize.scm 280 */
								obj_t BgL_auxz00_4548;

								{	/* Match/normalize.scm 280 */
									obj_t BgL_pairz00_2601;

									BgL_pairz00_2601 = BgL_patternz00_31;
									BgL_auxz00_4548 = CAR(CDR(BgL_pairz00_2601));
								}
								BgL_testz00_4547 = (BgL_auxz00_4548 == BgL_namez00_30);
							}
							if (BgL_testz00_4547)
								{	/* Match/normalize.scm 280 */
									return BINT(((long) 1));
								}
							else
								{	/* Match/normalize.scm 280 */
									return BINT(((long) 0));
						}}
					else
						{	/* Match/normalize.scm 279 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_patternz00_31),
										BGl_list2968z00zz__match_normaliza7eza7)))
								{	/* Match/normalize.scm 284 */
									obj_t BgL_runner2371z00_1386;

									{	/* Match/normalize.scm 284 */
										obj_t BgL_l1868z00_1372;

										BgL_l1868z00_1372 = CDR(BgL_patternz00_31);
										if (NULLP(BgL_l1868z00_1372))
											{	/* Match/normalize.scm 284 */
												BgL_runner2371z00_1386 = BNIL;
											}
										else
											{	/* Match/normalize.scm 284 */
												obj_t BgL_head1870z00_1374;

												BgL_head1870z00_1374 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l1868z00_2611;

													obj_t BgL_tail1871z00_2612;

													BgL_l1868z00_2611 = BgL_l1868z00_1372;
													BgL_tail1871z00_2612 = BgL_head1870z00_1374;
												BgL_zc3anonymousza32366ze3z83_2610:
													if (NULLP(BgL_l1868z00_2611))
														{	/* Match/normalize.scm 284 */
															BgL_runner2371z00_1386 =
																CDR(BgL_head1870z00_1374);
														}
													else
														{	/* Match/normalize.scm 284 */
															obj_t BgL_newtail1872z00_2620;

															BgL_newtail1872z00_2620 =
																MAKE_PAIR
																(BGl_oczd2countzd2zz__match_normaliza7eza7
																(BgL_namez00_30, CAR(BgL_l1868z00_2611)), BNIL);
															SET_CDR(BgL_tail1871z00_2612,
																BgL_newtail1872z00_2620);
															{
																obj_t BgL_tail1871z00_4571;

																obj_t BgL_l1868z00_4569;

																BgL_l1868z00_4569 = CDR(BgL_l1868z00_2611);
																BgL_tail1871z00_4571 = BgL_newtail1872z00_2620;
																BgL_tail1871z00_2612 = BgL_tail1871z00_4571;
																BgL_l1868z00_2611 = BgL_l1868z00_4569;
																goto BgL_zc3anonymousza32366ze3z83_2610;
															}
														}
												}
											}
									}
									return
										BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner2371z00_1386);
								}
							else
								{	/* Match/normalize.scm 283 */
									return BINT(((long) 0));
		}}}}
	}



/* standardize-lispish-segment-variable */
	obj_t
		BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
		(obj_t BgL_ez00_32, obj_t BgL_fza2za2_33)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 287 */
			if (NULLP(BgL_fza2za2_33))
				{	/* Match/normalize.scm 289 */
					obj_t BgL_zc3anonymousza32377ze3z83_3467;

					BgL_zc3anonymousza32377ze3z83_3467 =
						make_fx_procedure
						(BGl_zc3anonymousza32377ze3z83zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3467, (int) (((long) 0)),
						BgL_ez00_32);
					return BgL_zc3anonymousza32377ze3z83_3467;
				}
			else
				{	/* Match/normalize.scm 288 */
					return
						BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7
						(BgL_ez00_32, BgL_fza2za2_33);
				}
		}
	}



/* <anonymous:2377> */
	obj_t BGl_zc3anonymousza32377ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3468, obj_t BgL_rz00_3470, obj_t BgL_cz00_3471)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 289 */
			{	/* Match/normalize.scm 290 */
				obj_t BgL_ez00_3469;

				BgL_ez00_3469 = PROCEDURE_REF(BgL_envz00_3468, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1392;

					obj_t BgL_cz00_1393;

					BgL_rz00_1392 = BgL_rz00_3470;
					BgL_cz00_1393 = BgL_cz00_3471;
					{	/* Match/normalize.scm 290 */
						obj_t BgL_namez00_1395;

						{	/* Match/normalize.scm 290 */
							obj_t BgL_sz00_2665;

							BgL_sz00_2665 = SYMBOL_TO_STRING(BgL_ez00_3469);
							{	/* Match/normalize.scm 290 */
								obj_t BgL_arg2154z00_2666;

								BgL_arg2154z00_2666 =
									c_substring(BgL_sz00_2665, ((long) 3),
									STRING_LENGTH(BgL_sz00_2665));
								BgL_namez00_1395 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2154z00_2666));
						}}
						{	/* Match/normalize.scm 291 */
							bool_t BgL_testz00_4589;

							{	/* Match/normalize.scm 291 */
								obj_t BgL_arg2391z00_1409;

								if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_1395, BgL_rz00_1392)))
									{	/* Match/normalize.scm 291 */
										BgL_arg2391z00_1409 =
											CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_namez00_1395, BgL_rz00_1392));
									}
								else
									{	/* Match/normalize.scm 291 */
										BgL_arg2391z00_1409 = BFALSE;
									}
								BgL_testz00_4589 =
									(BgL_arg2391z00_1409 ==
									BGl_unboundzd2patternzd2zz__match_normaliza7eza7);
							}
							if (BgL_testz00_4589)
								{	/* Match/normalize.scm 292 */
									obj_t BgL_arg2379z00_1397;

									obj_t BgL_arg2380z00_1398;

									{	/* Match/normalize.scm 292 */
										obj_t BgL_arg2381z00_1399;

										obj_t BgL_arg2382z00_1400;

										BgL_arg2381z00_1399 =
											BGl_symbol2956z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 292 */
											obj_t BgL_arg2383z00_1401;

											BgL_arg2383z00_1401 =
												MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
												BNIL);
											{	/* Match/normalize.scm 292 */
												obj_t BgL_list2385z00_1403;

												{	/* Match/normalize.scm 292 */
													obj_t BgL_arg2386z00_1404;

													BgL_arg2386z00_1404 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2385z00_1403 =
														MAKE_PAIR(BgL_arg2383z00_1401, BgL_arg2386z00_1404);
												}
												BgL_arg2382z00_1400 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_namez00_1395, BgL_list2385z00_1403);
											}
										}
										BgL_arg2379z00_1397 =
											MAKE_PAIR(BgL_arg2381z00_1399, BgL_arg2382z00_1400);
									}
									{	/* Match/normalize.scm 293 */
										obj_t BgL_imz00_2682;

										BgL_imz00_2682 = BGl_symbol2958z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 293 */
											obj_t BgL_arg2444z00_2683;

											BgL_arg2444z00_2683 =
												MAKE_PAIR(BgL_namez00_1395, BgL_imz00_2682);
											BgL_arg2380z00_1398 =
												MAKE_PAIR(BgL_arg2444z00_2683, BgL_rz00_1392);
										}
									}
									return
										PROCEDURE_ENTRY(BgL_cz00_1393) (BgL_cz00_1393,
										BgL_arg2379z00_1397, BgL_arg2380z00_1398, BEOA);
								}
							else
								{	/* Match/normalize.scm 294 */
									obj_t BgL_arg2387z00_1405;

									{	/* Match/normalize.scm 294 */
										obj_t BgL_arg2388z00_1406;

										obj_t BgL_arg2389z00_1407;

										BgL_arg2388z00_1406 =
											BGl_symbol2956z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 294 */
											obj_t BgL_list2390z00_1408;

											BgL_list2390z00_1408 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2389z00_1407 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_namez00_1395, BgL_list2390z00_1408);
										}
										BgL_arg2387z00_1405 =
											MAKE_PAIR(BgL_arg2388z00_1406, BgL_arg2389z00_1407);
									}
									return
										PROCEDURE_ENTRY(BgL_cz00_1393) (BgL_cz00_1393,
										BgL_arg2387z00_1405, BgL_rz00_1392, BEOA);
								}
						}
					}
				}
			}
		}
	}



/* standardize-any */
	obj_t BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(obj_t BgL_fza2za2_34)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 297 */
			{	/* Match/normalize.scm 298 */
				obj_t BgL_zc3anonymousza32392ze3z83_3473;

				BgL_zc3anonymousza32392ze3z83_3473 =
					make_fx_procedure
					(BGl_zc3anonymousza32392ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32392ze3z83_3473, (int) (((long) 0)),
					BgL_fza2za2_34);
				return BgL_zc3anonymousza32392ze3z83_3473;
			}
		}
	}



/* <anonymous:2392> */
	obj_t BGl_zc3anonymousza32392ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3474, obj_t BgL_rz00_3476, obj_t BgL_cz00_3477)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 298 */
			{	/* Match/normalize.scm 299 */
				obj_t BgL_fza2za2_3475;

				BgL_fza2za2_3475 = PROCEDURE_REF(BgL_envz00_3474, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1410;

					obj_t BgL_cz00_1411;

					BgL_rz00_1410 = BgL_rz00_3476;
					BgL_cz00_1411 = BgL_cz00_3477;
					{	/* Match/normalize.scm 299 */
						obj_t BgL_fun2394z00_1413;

						BgL_fun2394z00_1413 =
							BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
							(BgL_fza2za2_3475);
						{	/* Match/normalize.scm 302 */
							obj_t BgL_zc3anonymousza32395ze3z83_3472;

							BgL_zc3anonymousza32395ze3z83_3472 =
								make_fx_procedure
								(BGl_zc3anonymousza32395ze3z83zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32395ze3z83_3472,
								(int) (((long) 0)), BgL_cz00_1411);
							return PROCEDURE_ENTRY(BgL_fun2394z00_1413) (BgL_fun2394z00_1413,
								BgL_rz00_1410, BgL_zc3anonymousza32395ze3z83_3472, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2395> */
	obj_t BGl_zc3anonymousza32395ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3478, obj_t BgL_patternz00_3480, obj_t BgL_rrz00_3481)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 301 */
			{	/* Match/normalize.scm 302 */
				obj_t BgL_cz00_3479;

				BgL_cz00_3479 = PROCEDURE_REF(BgL_envz00_3478, (int) (((long) 0)));
				{
					obj_t BgL_patternz00_1415;

					obj_t BgL_rrz00_1416;

					BgL_patternz00_1415 = BgL_patternz00_3480;
					BgL_rrz00_1416 = BgL_rrz00_3481;
					{	/* Match/normalize.scm 302 */
						obj_t BgL_labelz00_1418;

						BgL_labelz00_1418 =
							PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
							(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
							BGl_string2939z00zz__match_normaliza7eza7, BEOA);
						if (CBOOL(PROCEDURE_ENTRY
								(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7)
								(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7,
									BGl_symbol2948z00zz__match_normaliza7eza7, BEOA)))
							{	/* Match/normalize.scm 304 */
								obj_t BgL_arg2397z00_1420;

								{	/* Match/normalize.scm 304 */
									obj_t BgL_arg2398z00_1421;

									obj_t BgL_arg2399z00_1422;

									BgL_arg2398z00_1421 =
										BGl_symbol2940z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 305 */
										obj_t BgL_arg2400z00_1423;

										{	/* Match/normalize.scm 305 */
											obj_t BgL_arg2405z00_1428;

											obj_t BgL_arg2406z00_1429;

											BgL_arg2405z00_1428 =
												BGl_symbol2954z00zz__match_normaliza7eza7;
											{	/* Match/normalize.scm 305 */
												obj_t BgL_arg2407z00_1430;

												obj_t BgL_arg2408z00_1431;

												BgL_arg2407z00_1430 =
													MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
													BNIL);
												{	/* Match/normalize.scm 305 */
													obj_t BgL_arg2412z00_1435;

													obj_t BgL_arg2413z00_1436;

													BgL_arg2412z00_1435 =
														BGl_symbol2942z00zz__match_normaliza7eza7;
													{	/* Match/normalize.scm 305 */
														obj_t BgL_arg2414z00_1437;

														BgL_arg2414z00_1437 =
															PROCEDURE_ENTRY
															(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
															(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
															BGl_string2944z00zz__match_normaliza7eza7, BEOA);
														{	/* Match/normalize.scm 305 */
															obj_t BgL_list2416z00_1439;

															{	/* Match/normalize.scm 305 */
																obj_t BgL_arg2417z00_1440;

																BgL_arg2417z00_1440 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2416z00_1439 =
																	MAKE_PAIR(BgL_arg2414z00_1437,
																	BgL_arg2417z00_1440);
															}
															BgL_arg2413z00_1436 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_labelz00_1418, BgL_list2416z00_1439);
														}
													}
													BgL_arg2408z00_1431 =
														MAKE_PAIR(BgL_arg2412z00_1435, BgL_arg2413z00_1436);
												}
												{	/* Match/normalize.scm 305 */
													obj_t BgL_list2410z00_1433;

													{	/* Match/normalize.scm 305 */
														obj_t BgL_arg2411z00_1434;

														BgL_arg2411z00_1434 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2410z00_1433 =
															MAKE_PAIR(BgL_arg2408z00_1431,
															BgL_arg2411z00_1434);
													}
													BgL_arg2406z00_1429 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2407z00_1430, BgL_list2410z00_1433);
												}
											}
											BgL_arg2400z00_1423 =
												MAKE_PAIR(BgL_arg2405z00_1428, BgL_arg2406z00_1429);
										}
										{	/* Match/normalize.scm 304 */
											obj_t BgL_list2402z00_1425;

											{	/* Match/normalize.scm 304 */
												obj_t BgL_arg2403z00_1426;

												{	/* Match/normalize.scm 304 */
													obj_t BgL_arg2404z00_1427;

													BgL_arg2404z00_1427 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2403z00_1426 =
														MAKE_PAIR(BgL_patternz00_1415, BgL_arg2404z00_1427);
												}
												BgL_list2402z00_1425 =
													MAKE_PAIR(BgL_arg2400z00_1423, BgL_arg2403z00_1426);
											}
											BgL_arg2399z00_1422 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_labelz00_1418, BgL_list2402z00_1425);
										}
									}
									BgL_arg2397z00_1420 =
										MAKE_PAIR(BgL_arg2398z00_1421, BgL_arg2399z00_1422);
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3479) (BgL_cz00_3479,
									BgL_arg2397z00_1420, BgL_rrz00_1416, BEOA);
							}
						else
							{	/* Match/normalize.scm 308 */
								obj_t BgL_arg2418z00_1441;

								{	/* Match/normalize.scm 308 */
									obj_t BgL_arg2419z00_1442;

									obj_t BgL_arg2420z00_1443;

									BgL_arg2419z00_1442 =
										BGl_symbol2940z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 309 */
										obj_t BgL_arg2421z00_1444;

										{	/* Match/normalize.scm 309 */
											obj_t BgL_arg2426z00_1449;

											obj_t BgL_arg2427z00_1450;

											BgL_arg2426z00_1449 =
												BGl_symbol2924z00zz__match_normaliza7eza7;
											{	/* Match/normalize.scm 309 */
												obj_t BgL_arg2428z00_1451;

												obj_t BgL_arg2429z00_1452;

												BgL_arg2428z00_1451 =
													MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7,
													BNIL);
												{	/* Match/normalize.scm 309 */
													obj_t BgL_arg2434z00_1456;

													obj_t BgL_arg2435z00_1457;

													BgL_arg2434z00_1456 =
														BGl_symbol2942z00zz__match_normaliza7eza7;
													{	/* Match/normalize.scm 309 */
														obj_t BgL_arg2436z00_1458;

														BgL_arg2436z00_1458 =
															PROCEDURE_ENTRY
															(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
															(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
															BGl_string2944z00zz__match_normaliza7eza7, BEOA);
														{	/* Match/normalize.scm 309 */
															obj_t BgL_list2438z00_1460;

															{	/* Match/normalize.scm 309 */
																obj_t BgL_arg2439z00_1461;

																BgL_arg2439z00_1461 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2438z00_1460 =
																	MAKE_PAIR(BgL_arg2436z00_1458,
																	BgL_arg2439z00_1461);
															}
															BgL_arg2435z00_1457 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_labelz00_1418, BgL_list2438z00_1460);
														}
													}
													BgL_arg2429z00_1452 =
														MAKE_PAIR(BgL_arg2434z00_1456, BgL_arg2435z00_1457);
												}
												{	/* Match/normalize.scm 309 */
													obj_t BgL_list2431z00_1454;

													{	/* Match/normalize.scm 309 */
														obj_t BgL_arg2432z00_1455;

														BgL_arg2432z00_1455 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2431z00_1454 =
															MAKE_PAIR(BgL_arg2429z00_1452,
															BgL_arg2432z00_1455);
													}
													BgL_arg2427z00_1450 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2428z00_1451, BgL_list2431z00_1454);
												}
											}
											BgL_arg2421z00_1444 =
												MAKE_PAIR(BgL_arg2426z00_1449, BgL_arg2427z00_1450);
										}
										{	/* Match/normalize.scm 308 */
											obj_t BgL_list2423z00_1446;

											{	/* Match/normalize.scm 308 */
												obj_t BgL_arg2424z00_1447;

												{	/* Match/normalize.scm 308 */
													obj_t BgL_arg2425z00_1448;

													BgL_arg2425z00_1448 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2424z00_1447 =
														MAKE_PAIR(BgL_patternz00_1415, BgL_arg2425z00_1448);
												}
												BgL_list2423z00_1446 =
													MAKE_PAIR(BgL_arg2421z00_1444, BgL_arg2424z00_1447);
											}
											BgL_arg2420z00_1443 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_labelz00_1418, BgL_list2423z00_1446);
										}
									}
									BgL_arg2418z00_1441 =
										MAKE_PAIR(BgL_arg2419z00_1442, BgL_arg2420z00_1443);
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3479) (BgL_cz00_3479,
									BgL_arg2418z00_1441, BgL_rrz00_1416, BEOA);
							}
					}
				}
			}
		}
	}



/* standardize-lispish-any */
	obj_t BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7(obj_t
		BgL_fza2za2_35)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 313 */
			if (NULLP(BgL_fza2za2_35))
				{	/* Match/normalize.scm 314 */
					return BGl_proc2971z00zz__match_normaliza7eza7;
				}
			else
				{	/* Match/normalize.scm 314 */
					return
						BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(BgL_fza2za2_35);
				}
		}
	}



/* <anonymous:2441> */
	obj_t BGl_zc3anonymousza32441ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3483, obj_t BgL_rz00_3484, obj_t BgL_cz00_3485)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 315 */
			{
				obj_t BgL_rz00_1464;

				obj_t BgL_cz00_1465;

				BgL_rz00_1464 = BgL_rz00_3484;
				BgL_cz00_1465 = BgL_cz00_3485;
				{	/* Match/normalize.scm 315 */
					obj_t BgL_arg2442z00_2685;

					BgL_arg2442z00_2685 =
						MAKE_PAIR(BGl_symbol2926z00zz__match_normaliza7eza7, BNIL);
					return
						PROCEDURE_ENTRY(BgL_cz00_1465) (BgL_cz00_1465, BgL_arg2442z00_2685,
						BgL_rz00_1464, BEOA);
				}
			}
		}
	}



/* extend.r.macro-env */
	BGL_EXPORTED_DEF obj_t
		BGl_extendze2rze2macrozd2envzd2zz__match_normaliza7eza7(obj_t
		BgL_namez00_42, obj_t BgL_funz00_43)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 338 */
			{	/* Match/normalize.scm 340 */
				obj_t BgL_fnz00_2698;

				BgL_fnz00_2698 = BGl_rze2macrozd2patternz30zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 340 */
					obj_t BgL_arg2444z00_2701;

					BgL_arg2444z00_2701 = MAKE_PAIR(BgL_namez00_42, BgL_funz00_43);
					return (BGl_rze2macrozd2patternz30zz__match_normaliza7eza7 =
						MAKE_PAIR(BgL_arg2444z00_2701, BgL_fnz00_2698), BUNSPEC);
				}
			}
		}
	}



/* _extend.r.macro-env */
	obj_t BGl__extendze2rze2macrozd2envzd2zz__match_normaliza7eza7(obj_t
		BgL_envz00_3486, obj_t BgL_namez00_3487, obj_t BgL_funz00_3488)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 338 */
			return
				BGl_extendze2rze2macrozd2envzd2zz__match_normaliza7eza7
				(BgL_namez00_3487, BgL_funz00_3488);
		}
	}



/* coherent-environment? */
	bool_t BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7(obj_t
		BgL_rz00_45, obj_t BgL_rrz00_46)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 466 */
		BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7:
			if (PAIRP(BgL_rz00_45))
				{	/* Match/normalize.scm 472 */
					bool_t BgL_testz00_4680;

					{	/* Match/normalize.scm 472 */
						obj_t BgL_arg2450z00_1480;

						BgL_arg2450z00_1480 = CAR(CAR(BgL_rz00_45));
						{
							obj_t BgL_rz00_2717;

							BgL_rz00_2717 = BgL_rrz00_46;
						BgL_lookz00_2716:
							if (PAIRP(BgL_rz00_2717))
								{	/* Match/normalize.scm 472 */
									bool_t BgL__ortest_1842z00_2719;

									BgL__ortest_1842z00_2719 =
										(CAR(CAR(BgL_rz00_2717)) == BgL_arg2450z00_1480);
									if (BgL__ortest_1842z00_2719)
										{	/* Match/normalize.scm 472 */
											BgL_testz00_4680 = BgL__ortest_1842z00_2719;
										}
									else
										{
											obj_t BgL_rz00_4689;

											BgL_rz00_4689 = CDR(BgL_rz00_2717);
											BgL_rz00_2717 = BgL_rz00_4689;
											goto BgL_lookz00_2716;
										}
								}
							else
								{	/* Match/normalize.scm 472 */
									BgL_testz00_4680 = ((bool_t) 0);
								}
						}
					}
					if (BgL_testz00_4680)
						{
							obj_t BgL_rz00_4691;

							BgL_rz00_4691 = CDR(BgL_rz00_45);
							BgL_rz00_45 = BgL_rz00_4691;
							goto BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7;
						}
					else
						{	/* Match/normalize.scm 472 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 471 */
					return ((bool_t) 1);
				}
		}
	}



/* standardize-vector */
	obj_t BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7(obj_t BgL_ez00_51)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 493 */
			{	/* Match/normalize.scm 495 */
				obj_t BgL_tmpz00_1485;

				{	/* Match/normalize.scm 495 */
					obj_t BgL_arg2510z00_1539;

					BgL_arg2510z00_1539 =
						BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_ez00_51);
					{	/* Match/normalize.scm 495 */
						obj_t BgL_fun2158z00_2752;

						BgL_fun2158z00_2752 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_arg2510z00_1539);
						BgL_tmpz00_1485 =
							PROCEDURE_ENTRY(BgL_fun2158z00_2752) (BgL_fun2158z00_2752,
							BGl_rze2macrozd2patternz30zz__match_normaliza7eza7,
							BGl_proc2972z00zz__match_normaliza7eza7, BEOA);
					}
				}
				{	/* Match/normalize.scm 515 */
					obj_t BgL_zc3anonymousza32453ze3z83_3489;

					BgL_zc3anonymousza32453ze3z83_3489 =
						make_fx_procedure
						(BGl_zc3anonymousza32453ze3z83zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza32453ze3z83_3489, (int) (((long) 0)),
						BgL_ez00_51);
					PROCEDURE_SET(BgL_zc3anonymousza32453ze3z83_3489, (int) (((long) 1)),
						BgL_tmpz00_1485);
					return BgL_zc3anonymousza32453ze3z83_3489;
				}
			}
		}
	}



/* <anonymous:2453> */
	obj_t BGl_zc3anonymousza32453ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3491, obj_t BgL_rz00_3494, obj_t BgL_cz00_3495)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 515 */
			{	/* Match/normalize.scm 516 */
				obj_t BgL_ez00_3492;

				obj_t BgL_tmpz00_3493;

				BgL_ez00_3492 = PROCEDURE_REF(BgL_envz00_3491, (int) (((long) 0)));
				BgL_tmpz00_3493 = PROCEDURE_REF(BgL_envz00_3491, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1488;

					obj_t BgL_cz00_1489;

					BgL_rz00_1488 = BgL_rz00_3494;
					BgL_cz00_1489 = BgL_cz00_3495;
					{	/* Match/normalize.scm 516 */
						obj_t BgL_arg2454z00_1491;

						{	/* Match/normalize.scm 516 */
							obj_t BgL_arg2455z00_1492;

							obj_t BgL_arg2456z00_1493;

							BgL_arg2455z00_1492 = BGl_symbol2973z00zz__match_normaliza7eza7;
							{	/* Match/normalize.scm 516 */
								long BgL_arg2457z00_1494;

								obj_t BgL_arg2458z00_1495;

								BgL_arg2457z00_1494 =
									BGl_patternzd2lengthzd2zz__match_normaliza7eza7
									(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_ez00_3492));
								BgL_arg2458z00_1495 =
									BGl_vectorifyz00zz__match_normaliza7eza7(BgL_tmpz00_3493);
								{	/* Match/normalize.scm 516 */
									obj_t BgL_list2460z00_1497;

									{	/* Match/normalize.scm 516 */
										obj_t BgL_arg2461z00_1498;

										BgL_arg2461z00_1498 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2460z00_1497 =
											MAKE_PAIR(BgL_arg2458z00_1495, BgL_arg2461z00_1498);
									}
									BgL_arg2456z00_1493 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
										(BgL_arg2457z00_1494), BgL_list2460z00_1497);
							}}
							BgL_arg2454z00_1491 =
								MAKE_PAIR(BgL_arg2455z00_1492, BgL_arg2456z00_1493);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_1489) (BgL_cz00_1489,
							BgL_arg2454z00_1491, BgL_rz00_1488, BEOA);
					}
				}
			}
		}
	}



/* vectorify */
	obj_t BGl_vectorifyz00zz__match_normaliza7eza7(obj_t BgL_pz00_1486)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 496 */
			if ((CAR(BgL_pz00_1486) == BGl_symbol2924z00zz__match_normaliza7eza7))
				{	/* Match/normalize.scm 500 */
					obj_t BgL_arg2465z00_1501;

					obj_t BgL_arg2467z00_1502;

					BgL_arg2465z00_1501 = BGl_symbol2975z00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 500 */
						obj_t BgL_arg2469z00_1503;

						obj_t BgL_arg2470z00_1504;

						{	/* Match/normalize.scm 500 */
							obj_t BgL_pairz00_2757;

							BgL_pairz00_2757 = BgL_pz00_1486;
							BgL_arg2469z00_1503 = CAR(CDR(BgL_pairz00_2757));
						}
						{	/* Match/normalize.scm 501 */
							bool_t BgL_testz00_4723;

							{	/* Match/normalize.scm 501 */
								obj_t BgL_auxz00_4724;

								{	/* Match/normalize.scm 501 */
									obj_t BgL_pairz00_2761;

									BgL_pairz00_2761 = BgL_pz00_1486;
									BgL_auxz00_4724 = CAR(CDR(CDR(BgL_pairz00_2761)));
								}
								BgL_testz00_4723 =
									BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_4724,
									BGl_list2977z00zz__match_normaliza7eza7);
							}
							if (BgL_testz00_4723)
								{	/* Match/normalize.scm 501 */
									BgL_arg2470z00_1504 = BGl_list2978z00zz__match_normaliza7eza7;
								}
							else
								{	/* Match/normalize.scm 503 */
									obj_t BgL_arg2478z00_1509;

									{	/* Match/normalize.scm 503 */
										obj_t BgL_pairz00_2767;

										BgL_pairz00_2767 = BgL_pz00_1486;
										BgL_arg2478z00_1509 = CAR(CDR(CDR(BgL_pairz00_2767)));
									}
									BgL_arg2470z00_1504 =
										BGl_vectorifyz00zz__match_normaliza7eza7
										(BgL_arg2478z00_1509);
								}
						}
						{	/* Match/normalize.scm 500 */
							obj_t BgL_list2472z00_1506;

							{	/* Match/normalize.scm 500 */
								obj_t BgL_arg2476z00_1507;

								BgL_arg2476z00_1507 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2472z00_1506 =
									MAKE_PAIR(BgL_arg2470z00_1504, BgL_arg2476z00_1507);
							}
							BgL_arg2467z00_1502 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2469z00_1503,
								BgL_list2472z00_1506);
						}
					}
					return MAKE_PAIR(BgL_arg2465z00_1501, BgL_arg2467z00_1502);
				}
			else
				{	/* Match/normalize.scm 499 */
					if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_1486,
							BGl_list2981z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 504 */
							return BGl_list2982z00zz__match_normaliza7eza7;
						}
					else
						{	/* Match/normalize.scm 504 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_pz00_1486), BGl_list2985z00zz__match_normaliza7eza7)))
								{	/* Match/normalize.scm 507 */
									obj_t BgL_arg2483z00_1514;

									obj_t BgL_arg2484z00_1515;

									obj_t BgL_arg2485z00_1516;

									BgL_arg2483z00_1514 = CAR(BgL_pz00_1486);
									{	/* Match/normalize.scm 508 */
										obj_t BgL_arg2489z00_1520;

										{	/* Match/normalize.scm 508 */
											obj_t BgL_pairz00_2775;

											BgL_pairz00_2775 = BgL_pz00_1486;
											BgL_arg2489z00_1520 = CAR(CDR(BgL_pairz00_2775));
										}
										BgL_arg2484z00_1515 =
											BGl_vectorifyz00zz__match_normaliza7eza7
											(BgL_arg2489z00_1520);
									}
									{	/* Match/normalize.scm 509 */
										obj_t BgL_arg2491z00_1521;

										{	/* Match/normalize.scm 509 */
											obj_t BgL_pairz00_2779;

											BgL_pairz00_2779 = BgL_pz00_1486;
											BgL_arg2491z00_1521 = CAR(CDR(CDR(BgL_pairz00_2779)));
										}
										BgL_arg2485z00_1516 =
											BGl_vectorifyz00zz__match_normaliza7eza7
											(BgL_arg2491z00_1521);
									}
									{	/* Match/normalize.scm 507 */
										obj_t BgL_list2486z00_1517;

										{	/* Match/normalize.scm 507 */
											obj_t BgL_arg2487z00_1518;

											{	/* Match/normalize.scm 507 */
												obj_t BgL_arg2488z00_1519;

												BgL_arg2488z00_1519 =
													MAKE_PAIR(BgL_arg2485z00_1516, BNIL);
												BgL_arg2487z00_1518 =
													MAKE_PAIR(BgL_arg2484z00_1515, BgL_arg2488z00_1519);
											}
											BgL_list2486z00_1517 =
												MAKE_PAIR(BgL_arg2483z00_1514, BgL_arg2487z00_1518);
										}
										return BgL_list2486z00_1517;
									}
								}
							else
								{	/* Match/normalize.scm 506 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_pz00_1486),
												BGl_list2986z00zz__match_normaliza7eza7)))
										{	/* Match/normalize.scm 511 */
											obj_t BgL_arg2493z00_1523;

											obj_t BgL_arg2494z00_1524;

											obj_t BgL_arg2495z00_1525;

											obj_t BgL_arg2497z00_1526;

											BgL_arg2493z00_1523 =
												BGl_symbol2987z00zz__match_normaliza7eza7;
											{	/* Match/normalize.scm 511 */
												obj_t BgL_pairz00_2788;

												BgL_pairz00_2788 = BgL_pz00_1486;
												BgL_arg2494z00_1524 = CAR(CDR(BgL_pairz00_2788));
											}
											{	/* Match/normalize.scm 512 */
												obj_t BgL_arg2502z00_1531;

												{	/* Match/normalize.scm 512 */
													obj_t BgL_pairz00_2792;

													BgL_pairz00_2792 = BgL_pz00_1486;
													BgL_arg2502z00_1531 = CAR(CDR(CDR(BgL_pairz00_2792)));
												}
												BgL_arg2495z00_1525 =
													BGl_vectorifyz00zz__match_normaliza7eza7
													(BgL_arg2502z00_1531);
											}
											{	/* Match/normalize.scm 513 */
												obj_t BgL_arg2503z00_1532;

												{	/* Match/normalize.scm 513 */
													obj_t BgL_pairz00_2798;

													BgL_pairz00_2798 = BgL_pz00_1486;
													BgL_arg2503z00_1532 =
														CAR(CDR(CDR(CDR(BgL_pairz00_2798))));
												}
												BgL_arg2497z00_1526 =
													BGl_vectorifyz00zz__match_normaliza7eza7
													(BgL_arg2503z00_1532);
											}
											{	/* Match/normalize.scm 511 */
												obj_t BgL_list2498z00_1527;

												{	/* Match/normalize.scm 511 */
													obj_t BgL_arg2499z00_1528;

													{	/* Match/normalize.scm 511 */
														obj_t BgL_arg2500z00_1529;

														{	/* Match/normalize.scm 511 */
															obj_t BgL_arg2501z00_1530;

															BgL_arg2501z00_1530 =
																MAKE_PAIR(BgL_arg2497z00_1526, BNIL);
															BgL_arg2500z00_1529 =
																MAKE_PAIR(BgL_arg2495z00_1525,
																BgL_arg2501z00_1530);
														}
														BgL_arg2499z00_1528 =
															MAKE_PAIR(BgL_arg2494z00_1524,
															BgL_arg2500z00_1529);
													}
													BgL_list2498z00_1527 =
														MAKE_PAIR(BgL_arg2493z00_1523, BgL_arg2499z00_1528);
												}
												return BgL_list2498z00_1527;
											}
										}
									else
										{	/* Match/normalize.scm 510 */
											return BgL_pz00_1486;
										}
								}
						}
				}
		}
	}



/* <anonymous:2159>_2879 */
	obj_t BGl_zc3anonymousza32159ze3_2879z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3496, obj_t BgL_patternz00_3497, obj_t BgL_rrz00_3498)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 123 */
			return BgL_patternz00_3497;
		}
	}



/* pattern-length */
	long BGl_patternzd2lengthzd2zz__match_normaliza7eza7(obj_t BgL_pz00_52)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 519 */
		BGl_patternzd2lengthzd2zz__match_normaliza7eza7:
			if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_pz00_52)))
				{	/* Match/normalize.scm 521 */
					return ((long) 0);
				}
			else
				{	/* Match/normalize.scm 521 */
					if (NULLP(BgL_pz00_52))
						{	/* Match/normalize.scm 522 */
							return ((long) 0);
						}
					else
						{	/* Match/normalize.scm 522 */
							if (
								(CAR(BgL_pz00_52) == BGl_symbol2894z00zz__match_normaliza7eza7))
								{	/* Match/normalize.scm 523 */
									return ((long) 1);
								}
							else
								{	/* Match/normalize.scm 523 */
									if (BGl_treezd2variablezf3z21zz__match_normaliza7eza7(CAR
											(BgL_pz00_52)))
										{	/* Match/normalize.scm 524 */
											return ((long) 0);
										}
									else
										{	/* Match/normalize.scm 524 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_pz00_52),
														BGl_list2989z00zz__match_normaliza7eza7)))
												{	/* Match/normalize.scm 525 */
													return ((long) 0);
												}
											else
												{	/* Match/normalize.scm 525 */
													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
																(BgL_pz00_52),
																BGl_list2990z00zz__match_normaliza7eza7)))
														{	/* Match/normalize.scm 526 */
															obj_t BgL_arg2517z00_1546;

															{	/* Match/normalize.scm 526 */
																obj_t BgL_pairz00_2813;

																BgL_pairz00_2813 = BgL_pz00_52;
																BgL_arg2517z00_1546 =
																	CAR(CDR(BgL_pairz00_2813));
															}
															{
																obj_t BgL_pz00_4794;

																BgL_pz00_4794 = BgL_arg2517z00_1546;
																BgL_pz00_52 = BgL_pz00_4794;
																goto
																	BGl_patternzd2lengthzd2zz__match_normaliza7eza7;
															}
														}
													else
														{	/* Match/normalize.scm 527 */
															long BgL_arg2519z00_1548;

															BgL_arg2519z00_1548 =
																BGl_patternzd2lengthzd2zz__match_normaliza7eza7
																(CDR(BgL_pz00_52));
															return (long)
																CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																			(long) 1)), BINT(BgL_arg2519z00_1548)));
		}}}}}}}
	}



/* match-define-structure! */
	BGL_EXPORTED_DEF obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t
		BgL_expz00_53)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 543 */
			{
				obj_t BgL_namez00_1557;

				obj_t BgL_fieldsz00_1558;

				if (PAIRP(BgL_expz00_53))
					{	/* Match/normalize.scm 544 */
						obj_t BgL_cdrzd21414zd2_1563;

						BgL_cdrzd21414zd2_1563 = CDR(BgL_expz00_53);
						if (
							(CAR(BgL_expz00_53) == BGl_symbol2991z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 544 */
								if (PAIRP(BgL_cdrzd21414zd2_1563))
									{	/* Match/normalize.scm 544 */
										BgL_namez00_1557 = CAR(BgL_cdrzd21414zd2_1563);
										BgL_fieldsz00_1558 = CDR(BgL_cdrzd21414zd2_1563);
										{	/* Match/normalize.scm 547 */
											obj_t BgL_arg2535z00_1570;

											{	/* Match/normalize.scm 547 */
												obj_t BgL_arg2536z00_1571;

												{	/* Match/normalize.scm 547 */
													obj_t BgL_arg2537z00_1572;

													obj_t BgL_arg2539z00_1573;

													{	/* Match/normalize.scm 547 */
														obj_t BgL_arg2541z00_1575;

														{	/* Match/normalize.scm 547 */
															obj_t BgL_arg2542z00_1576;

															obj_t BgL_arg2543z00_1577;

															{	/* Match/normalize.scm 547 */
																obj_t BgL_res2867z00_2826;

																{	/* Match/normalize.scm 547 */
																	obj_t BgL_symbolz00_2824;

																	BgL_symbolz00_2824 = BgL_namez00_1557;
																	{	/* Match/normalize.scm 547 */
																		obj_t BgL_arg2789z00_2825;

																		BgL_arg2789z00_2825 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2824);
																		BgL_res2867z00_2826 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2789z00_2825);
																	}
																}
																BgL_arg2542z00_1576 = BgL_res2867z00_2826;
															}
															{	/* Match/normalize.scm 547 */
																obj_t BgL_res2868z00_2829;

																{	/* Match/normalize.scm 547 */
																	obj_t BgL_symbolz00_2827;

																	BgL_symbolz00_2827 =
																		BGl_symbol2897z00zz__match_normaliza7eza7;
																	{	/* Match/normalize.scm 547 */
																		obj_t BgL_arg2789z00_2828;

																		BgL_arg2789z00_2828 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2827);
																		BgL_res2868z00_2829 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2789z00_2828);
																	}
																}
																BgL_arg2543z00_1577 = BgL_res2868z00_2829;
															}
															{	/* Match/normalize.scm 547 */
																obj_t BgL_list2544z00_1578;

																{	/* Match/normalize.scm 547 */
																	obj_t BgL_arg2545z00_1579;

																	BgL_arg2545z00_1579 =
																		MAKE_PAIR(BgL_arg2543z00_1577, BNIL);
																	BgL_list2544z00_1578 =
																		MAKE_PAIR(BgL_arg2542z00_1576,
																		BgL_arg2545z00_1579);
																}
																BgL_arg2541z00_1575 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2544z00_1578);
															}
														}
														BgL_arg2537z00_1572 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2541z00_1575));
													}
													BgL_arg2539z00_1573 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_fieldsz00_1558, BNIL);
													{	/* Match/normalize.scm 547 */
														obj_t BgL_list2540z00_1574;

														BgL_list2540z00_1574 =
															MAKE_PAIR(BgL_arg2539z00_1573, BNIL);
														BgL_arg2536z00_1571 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2537z00_1572, BgL_list2540z00_1574);
													}
												}
												BgL_arg2535z00_1570 =
													MAKE_PAIR(BgL_namez00_1557, BgL_arg2536z00_1571);
											}
											return
												(BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7
												=
												MAKE_PAIR(BgL_arg2535z00_1570,
													BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7),
												BUNSPEC);
										}
									}
								else
									{	/* Match/normalize.scm 544 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_53,
											BGl_symbol2994z00zz__match_normaliza7eza7);
									}
							}
						else
							{	/* Match/normalize.scm 544 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_53,
									BGl_symbol2994z00zz__match_normaliza7eza7);
							}
					}
				else
					{	/* Match/normalize.scm 544 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_53,
							BGl_symbol2994z00zz__match_normaliza7eza7);
					}
			}
		}
	}



/* _match-define-structure! */
	obj_t BGl__matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t
		BgL_envz00_3499, obj_t BgL_expz00_3500)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 543 */
			return
				BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
				(BgL_expz00_3500);
		}
	}



/* match-define-record-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t
		BgL_expz00_54)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 551 */
			{
				obj_t BgL_namez00_1580;

				obj_t BgL_constrz00_1581;

				obj_t BgL_predz00_1582;

				obj_t BgL_fieldsz00_1583;

				if (PAIRP(BgL_expz00_54))
					{	/* Match/normalize.scm 552 */
						obj_t BgL_cdrzd21433zd2_1588;

						BgL_cdrzd21433zd2_1588 = CDR(BgL_expz00_54);
						if (
							(CAR(BgL_expz00_54) == BGl_symbol2996z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 552 */
								if (PAIRP(BgL_cdrzd21433zd2_1588))
									{	/* Match/normalize.scm 552 */
										obj_t BgL_cdrzd21439zd2_1591;

										BgL_cdrzd21439zd2_1591 = CDR(BgL_cdrzd21433zd2_1588);
										if (PAIRP(BgL_cdrzd21439zd2_1591))
											{	/* Match/normalize.scm 552 */
												obj_t BgL_cdrzd21445zd2_1593;

												BgL_cdrzd21445zd2_1593 = CDR(BgL_cdrzd21439zd2_1591);
												if (PAIRP(BgL_cdrzd21445zd2_1593))
													{	/* Match/normalize.scm 552 */
														BgL_namez00_1580 = CAR(BgL_cdrzd21433zd2_1588);
														BgL_constrz00_1581 = CAR(BgL_cdrzd21439zd2_1591);
														BgL_predz00_1582 = CAR(BgL_cdrzd21445zd2_1593);
														BgL_fieldsz00_1583 = CDR(BgL_cdrzd21445zd2_1593);
														{	/* Match/normalize.scm 554 */
															obj_t BgL_reallyzd2fieldszd2_1601;

															if (NULLP(BgL_fieldsz00_1583))
																{	/* Match/normalize.scm 554 */
																	BgL_reallyzd2fieldszd2_1601 = BNIL;
																}
															else
																{	/* Match/normalize.scm 554 */
																	obj_t BgL_head1875z00_1608;

																	BgL_head1875z00_1608 =
																		MAKE_PAIR(CAR(CAR(BgL_fieldsz00_1583)),
																		BNIL);
																	{	/* Match/normalize.scm 554 */
																		obj_t BgL_g1878z00_1609;

																		BgL_g1878z00_1609 = CDR(BgL_fieldsz00_1583);
																		{
																			obj_t BgL_l1873z00_2850;

																			obj_t BgL_tail1876z00_2851;

																			BgL_l1873z00_2850 = BgL_g1878z00_1609;
																			BgL_tail1876z00_2851 =
																				BgL_head1875z00_1608;
																		BgL_zc3anonymousza32562ze3z83_2849:
																			if (NULLP(BgL_l1873z00_2850))
																				{	/* Match/normalize.scm 554 */
																					BgL_reallyzd2fieldszd2_1601 =
																						BgL_head1875z00_1608;
																				}
																			else
																				{	/* Match/normalize.scm 554 */
																					obj_t BgL_newtail1877z00_2859;

																					BgL_newtail1877z00_2859 =
																						MAKE_PAIR(CAR(CAR
																							(BgL_l1873z00_2850)), BNIL);
																					SET_CDR(BgL_tail1876z00_2851,
																						BgL_newtail1877z00_2859);
																					{
																						obj_t BgL_tail1876z00_4857;

																						obj_t BgL_l1873z00_4855;

																						BgL_l1873z00_4855 =
																							CDR(BgL_l1873z00_2850);
																						BgL_tail1876z00_4857 =
																							BgL_newtail1877z00_2859;
																						BgL_tail1876z00_2851 =
																							BgL_tail1876z00_4857;
																						BgL_l1873z00_2850 =
																							BgL_l1873z00_4855;
																						goto
																							BgL_zc3anonymousza32562ze3z83_2849;
																					}
																				}
																		}
																	}
																}
															{	/* Match/normalize.scm 556 */
																obj_t BgL_arg2557z00_1602;

																{	/* Match/normalize.scm 556 */
																	obj_t BgL_arg2558z00_1603;

																	{	/* Match/normalize.scm 556 */
																		obj_t BgL_arg2559z00_1604;

																		BgL_arg2559z00_1604 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_fieldsz00_1583, BNIL);
																		{	/* Match/normalize.scm 556 */
																			obj_t BgL_list2560z00_1605;

																			BgL_list2560z00_1605 =
																				MAKE_PAIR(BgL_arg2559z00_1604, BNIL);
																			BgL_arg2558z00_1603 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_predz00_1582,
																				BgL_list2560z00_1605);
																		}
																	}
																	BgL_arg2557z00_1602 =
																		MAKE_PAIR(BgL_namez00_1580,
																		BgL_arg2558z00_1603);
																}
																return
																	(BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7
																	=
																	MAKE_PAIR(BgL_arg2557z00_1602,
																		BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7),
																	BUNSPEC);
															}
														}
													}
												else
													{	/* Match/normalize.scm 552 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2993z00zz__match_normaliza7eza7,
															BgL_expz00_54,
															BGl_symbol2994z00zz__match_normaliza7eza7);
													}
											}
										else
											{	/* Match/normalize.scm 552 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2993z00zz__match_normaliza7eza7,
													BgL_expz00_54,
													BGl_symbol2994z00zz__match_normaliza7eza7);
											}
									}
								else
									{	/* Match/normalize.scm 552 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_54,
											BGl_symbol2994z00zz__match_normaliza7eza7);
									}
							}
						else
							{	/* Match/normalize.scm 552 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_54,
									BGl_symbol2994z00zz__match_normaliza7eza7);
							}
					}
				else
					{	/* Match/normalize.scm 552 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2993z00zz__match_normaliza7eza7, BgL_expz00_54,
							BGl_symbol2994z00zz__match_normaliza7eza7);
					}
			}
		}
	}



/* _match-define-record-type! */
	obj_t BGl__matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t
		BgL_envz00_3501, obj_t BgL_expz00_3502)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 551 */
			return
				BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7
				(BgL_expz00_3502);
		}
	}



/* standardize-struct */
	obj_t BGl_standardiza7ezd2structz75zz__match_normaliza7eza7(obj_t BgL_ez00_55)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 564 */
			{	/* Match/normalize.scm 565 */
				obj_t BgL_zc3anonymousza32573ze3z83_3503;

				BgL_zc3anonymousza32573ze3z83_3503 =
					make_fx_procedure
					(BGl_zc3anonymousza32573ze3z83zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32573ze3z83_3503, (int) (((long) 0)),
					BgL_ez00_55);
				return BgL_zc3anonymousza32573ze3z83_3503;
			}
		}
	}



/* <anonymous:2573> */
	obj_t BGl_zc3anonymousza32573ze3z83zz__match_normaliza7eza7(obj_t
		BgL_envz00_3504, obj_t BgL_rz00_3506, obj_t BgL_cz00_3507)
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 565 */
			{	/* Match/normalize.scm 569 */
				obj_t BgL_ez00_3505;

				BgL_ez00_3505 = PROCEDURE_REF(BgL_envz00_3504, (int) (((long) 0)));
				{
					obj_t BgL_rz00_1624;

					obj_t BgL_cz00_1625;

					BgL_rz00_1624 = BgL_rz00_3506;
					BgL_cz00_1625 = BgL_cz00_3507;
					{
						obj_t BgL_providedzd2fieldszd2_1690;

						{	/* Match/normalize.scm 576 */
							obj_t BgL_fz00_1628;

							BgL_fz00_1628 =
								BGl_structzd2ze3listz31zz__structurez00(BgL_ez00_3505);
							{	/* Match/normalize.scm 578 */
								obj_t BgL_structurez00_1629;

								{	/* Match/normalize.scm 579 */
									bool_t BgL_testz00_4881;

									{	/* Match/normalize.scm 579 */
										obj_t BgL_auxz00_4882;

										BgL_auxz00_4882 = CAR(BgL_fz00_1628);
										BgL_testz00_4881 = PAIRP(BgL_auxz00_4882);
									}
									if (BgL_testz00_4881)
										{	/* Match/normalize.scm 580 */
											obj_t BgL_arg2596z00_1664;

											{	/* Match/normalize.scm 580 */
												obj_t BgL_l1885z00_1665;

												BgL_l1885z00_1665 = CDR(BgL_fz00_1628);
												if (NULLP(BgL_l1885z00_1665))
													{	/* Match/normalize.scm 580 */
														BgL_arg2596z00_1664 = BNIL;
													}
												else
													{	/* Match/normalize.scm 580 */
														obj_t BgL_head1887z00_1667;

														BgL_head1887z00_1667 =
															MAKE_PAIR(CAR(CAR(BgL_l1885z00_1665)), BNIL);
														{	/* Match/normalize.scm 580 */
															obj_t BgL_g1890z00_1668;

															BgL_g1890z00_1668 = CDR(BgL_l1885z00_1665);
															{
																obj_t BgL_l1885z00_2912;

																obj_t BgL_tail1888z00_2913;

																BgL_l1885z00_2912 = BgL_g1890z00_1668;
																BgL_tail1888z00_2913 = BgL_head1887z00_1667;
															BgL_zc3anonymousza32598ze3z83_2911:
																if (NULLP(BgL_l1885z00_2912))
																	{	/* Match/normalize.scm 580 */
																		BgL_arg2596z00_1664 = BgL_head1887z00_1667;
																	}
																else
																	{	/* Match/normalize.scm 580 */
																		obj_t BgL_newtail1889z00_2921;

																		BgL_newtail1889z00_2921 =
																			MAKE_PAIR(CAR(CAR(BgL_l1885z00_2912)),
																			BNIL);
																		SET_CDR(BgL_tail1888z00_2913,
																			BgL_newtail1889z00_2921);
																		{
																			obj_t BgL_tail1888z00_4900;

																			obj_t BgL_l1885z00_4898;

																			BgL_l1885z00_4898 =
																				CDR(BgL_l1885z00_2912);
																			BgL_tail1888z00_4900 =
																				BgL_newtail1889z00_2921;
																			BgL_tail1888z00_2913 =
																				BgL_tail1888z00_4900;
																			BgL_l1885z00_2912 = BgL_l1885z00_4898;
																			goto BgL_zc3anonymousza32598ze3z83_2911;
																		}
																	}
															}
														}
													}
											}
											BgL_providedzd2fieldszd2_1690 = BgL_arg2596z00_1664;
											{
												obj_t BgL_sz00_1693;

												BgL_sz00_1693 =
													BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7;
											BgL_zc3anonymousza32615ze3z83_1694:
												{
													obj_t BgL_pzd2fzd2_1696;

													BgL_pzd2fzd2_1696 = BgL_providedzd2fieldszd2_1690;
												BgL_zc3anonymousza32616ze3z83_1697:
													if (NULLP(BgL_sz00_1693))
														{	/* Match/normalize.scm 569 */
															BgL_structurez00_1629 =
																BGl_errorz00zz__errorz00
																(BGl_string2998z00zz__match_normaliza7eza7,
																BgL_providedzd2fieldszd2_1690, BNIL);
														}
													else
														{	/* Match/normalize.scm 569 */
															if (NULLP(BgL_pzd2fzd2_1696))
																{	/* Match/normalize.scm 571 */
																	BgL_structurez00_1629 = CAR(BgL_sz00_1693);
																}
															else
																{	/* Match/normalize.scm 573 */
																	bool_t BgL_testz00_4907;

																	{	/* Match/normalize.scm 573 */
																		obj_t BgL_auxz00_4908;

																		{	/* Match/normalize.scm 573 */
																			obj_t BgL_auxz00_4909;

																			{	/* Match/normalize.scm 573 */
																				obj_t BgL_pairz00_3001;

																				BgL_pairz00_3001 = BgL_sz00_1693;
																				BgL_auxz00_4909 =
																					CDR(CAR(BgL_pairz00_3001));
																			}
																			BgL_auxz00_4908 =
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(BgL_pzd2fzd2_1696),
																				BgL_auxz00_4909);
																		}
																		BgL_testz00_4907 = CBOOL(BgL_auxz00_4908);
																	}
																	if (BgL_testz00_4907)
																		{
																			obj_t BgL_pzd2fzd2_4915;

																			BgL_pzd2fzd2_4915 =
																				CDR(BgL_pzd2fzd2_1696);
																			BgL_pzd2fzd2_1696 = BgL_pzd2fzd2_4915;
																			goto BgL_zc3anonymousza32616ze3z83_1697;
																		}
																	else
																		{
																			obj_t BgL_sz00_4917;

																			BgL_sz00_4917 = CDR(BgL_sz00_1693);
																			BgL_sz00_1693 = BgL_sz00_4917;
																			goto BgL_zc3anonymousza32615ze3z83_1694;
																		}
																}
														}
												}
											}
										}
									else
										{	/* Match/normalize.scm 581 */
											bool_t BgL_testz00_4919;

											{	/* Match/normalize.scm 581 */
												obj_t BgL_arg2612z00_1688;

												BgL_arg2612z00_1688 = CAR(BgL_fz00_1628);
												BgL_testz00_4919 =
													CBOOL(BGl_assocz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2612z00_1688,
														BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7));
											}
											if (BgL_testz00_4919)
												{	/* Match/normalize.scm 582 */
													obj_t BgL_arg2608z00_1684;

													BgL_arg2608z00_1684 = CAR(BgL_fz00_1628);
													BgL_structurez00_1629 =
														BGl_assocz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2608z00_1684,
														BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7);
												}
											else
												{	/* Match/normalize.scm 581 */
													BgL_structurez00_1629 =
														BGl_errorz00zz__errorz00
														(BGl_symbol2999z00zz__match_normaliza7eza7,
														BGl_string3001z00zz__match_normaliza7eza7,
														CAR(BgL_fz00_1628));
												}
										}
								}
								{	/* Match/normalize.scm 579 */
									obj_t BgL_namez00_1630;

									BgL_namez00_1630 = CAR(BgL_structurez00_1629);
									{	/* Match/normalize.scm 586 */
										obj_t BgL_predz00_1631;

										{	/* Match/normalize.scm 587 */
											obj_t BgL_pairz00_2968;

											BgL_pairz00_2968 = BgL_structurez00_1629;
											BgL_predz00_1631 = CAR(CDR(BgL_pairz00_2968));
										}
										{	/* Match/normalize.scm 587 */
											obj_t BgL_fieldsz00_1632;

											{	/* Match/normalize.scm 588 */
												obj_t BgL_pairz00_2972;

												BgL_pairz00_2972 = BgL_structurez00_1629;
												BgL_fieldsz00_1632 = CDR(CDR(BgL_pairz00_2972));
											}
											{	/* Match/normalize.scm 588 */
												obj_t BgL_providedzd2fieldszd2_1633;

												{	/* Match/normalize.scm 589 */
													bool_t BgL_testz00_4932;

													{	/* Match/normalize.scm 589 */
														obj_t BgL_auxz00_4933;

														BgL_auxz00_4933 = CAR(BgL_fz00_1628);
														BgL_testz00_4932 = PAIRP(BgL_auxz00_4933);
													}
													if (BgL_testz00_4932)
														{	/* Match/normalize.scm 589 */
															BgL_providedzd2fieldszd2_1633 = BgL_fz00_1628;
														}
													else
														{	/* Match/normalize.scm 589 */
															BgL_providedzd2fieldszd2_1633 =
																CDR(BgL_fz00_1628);
														}
												}
												{	/* Match/normalize.scm 589 */
													obj_t BgL_patternz00_1634;

													{	/* Match/normalize.scm 598 */
														obj_t BgL_arg2575z00_1636;

														obj_t BgL_arg2576z00_1637;

														BgL_arg2575z00_1636 =
															BGl_symbol2905z00zz__match_normaliza7eza7;
														{	/* Match/normalize.scm 601 */
															obj_t BgL_arg2577z00_1638;

															{	/* Match/normalize.scm 601 */
																obj_t BgL_arg2580z00_1641;

																{	/* Match/normalize.scm 601 */
																	bool_t BgL_testz00_4937;

																	{	/* Match/normalize.scm 601 */
																		obj_t BgL_auxz00_4938;

																		BgL_auxz00_4938 = CAR(BgL_fz00_1628);
																		BgL_testz00_4937 = PAIRP(BgL_auxz00_4938);
																	}
																	if (BgL_testz00_4937)
																		{	/* Match/normalize.scm 601 */
																			if (NULLP(BgL_fieldsz00_1632))
																				{	/* Match/normalize.scm 602 */
																					BgL_arg2580z00_1641 = BNIL;
																				}
																			else
																				{	/* Match/normalize.scm 602 */
																					obj_t BgL_head1893z00_1646;

																					BgL_head1893z00_1646 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l1891z00_1648;

																						obj_t BgL_tail1894z00_1649;

																						BgL_l1891z00_1648 =
																							BgL_fieldsz00_1632;
																						BgL_tail1894z00_1649 =
																							BgL_head1893z00_1646;
																					BgL_zc3anonymousza32584ze3z83_1650:
																						if (NULLP(BgL_l1891z00_1648))
																							{	/* Match/normalize.scm 602 */
																								BgL_arg2580z00_1641 =
																									CDR(BgL_head1893z00_1646);
																							}
																						else
																							{	/* Match/normalize.scm 602 */
																								obj_t BgL_newtail1895z00_1652;

																								{	/* Match/normalize.scm 602 */
																									obj_t BgL_arg2587z00_1654;

																									{	/* Match/normalize.scm 602 */
																										obj_t BgL_fieldz00_1656;

																										BgL_fieldz00_1656 =
																											CAR(BgL_l1891z00_1648);
																										if (CBOOL
																											(BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																												(BgL_fieldz00_1656,
																													BgL_providedzd2fieldszd2_1633)))
																											{	/* Match/normalize.scm 604 */
																												obj_t BgL_pairz00_2987;

																												BgL_pairz00_2987 =
																													BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_fieldz00_1656,
																													BgL_providedzd2fieldszd2_1633);
																												BgL_arg2587z00_1654 =
																													CAR(CDR
																													(BgL_pairz00_2987));
																											}
																										else
																											{	/* Match/normalize.scm 603 */
																												BgL_arg2587z00_1654 =
																													BGl_symbol2932z00zz__match_normaliza7eza7;
																											}
																									}
																									BgL_newtail1895z00_1652 =
																										MAKE_PAIR
																										(BgL_arg2587z00_1654, BNIL);
																								}
																								SET_CDR(BgL_tail1894z00_1649,
																									BgL_newtail1895z00_1652);
																								{
																									obj_t BgL_tail1894z00_4958;

																									obj_t BgL_l1891z00_4956;

																									BgL_l1891z00_4956 =
																										CDR(BgL_l1891z00_1648);
																									BgL_tail1894z00_4958 =
																										BgL_newtail1895z00_1652;
																									BgL_tail1894z00_1649 =
																										BgL_tail1894z00_4958;
																									BgL_l1891z00_1648 =
																										BgL_l1891z00_4956;
																									goto
																										BgL_zc3anonymousza32584ze3z83_1650;
																								}
																							}
																					}
																				}
																		}
																	else
																		{	/* Match/normalize.scm 601 */
																			BgL_arg2580z00_1641 = CDR(BgL_fz00_1628);
																		}
																}
																BgL_arg2577z00_1638 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2580z00_1641, BNIL);
															}
															{	/* Match/normalize.scm 598 */
																obj_t BgL_list2578z00_1639;

																{	/* Match/normalize.scm 598 */
																	obj_t BgL_arg2579z00_1640;

																	BgL_arg2579z00_1640 =
																		MAKE_PAIR(BgL_arg2577z00_1638, BNIL);
																	BgL_list2578z00_1639 =
																		MAKE_PAIR(BgL_predz00_1631,
																		BgL_arg2579z00_1640);
																}
																BgL_arg2576z00_1637 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_namez00_1630, BgL_list2578z00_1639);
															}
														}
														BgL_patternz00_1634 =
															MAKE_PAIR(BgL_arg2575z00_1636,
															BgL_arg2576z00_1637);
													}
													{	/* Match/normalize.scm 597 */

														{	/* Match/normalize.scm 608 */
															obj_t BgL_fun2574z00_1635;

															BgL_fun2574z00_1635 =
																BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
																(BgL_patternz00_1634);
															return
																PROCEDURE_ENTRY(BgL_fun2574z00_1635)
																(BgL_fun2574z00_1635, BgL_rz00_1624,
																BgL_cz00_1625, BEOA);
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 2 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 2 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7()
	{
		AN_OBJECT;
		{	/* Match/normalize.scm 2 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 228296415),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3002z00zz__match_normaliza7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
