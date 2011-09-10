/*===========================================================================*/
/*   (Ieee/pairlist.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/pairlist.scm -indent -o objs/obj_u/Ieee/pairlist.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__listz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__appendz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__consz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL long bgl_list_length(obj_t);
	static obj_t BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__reversez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		long);
	BGL_EXPORTED_DECL obj_t bgl_reverse(obj_t);
	static obj_t BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 =
		BUNSPEC;
	static obj_t BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int,
		obj_t);
	static obj_t BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__lengthz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static obj_t BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__econsz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__findz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, long, obj_t);
	static obj_t BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_remq(obj_t, obj_t);
	static obj_t BGl__assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_loopz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_recurz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__caarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
	static obj_t
		BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2111z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
	static obj_t BGl__cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__iotaz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_append2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
	static obj_t BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__remqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__carz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
	static obj_t BGl__assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__cerz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__reducez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_listzd2copyz72za0zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__takez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_list_ref(obj_t, long);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__findza700za7za7__r4_p2119za7,
		BGl__findz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caadarza700za7za7__r42120za7,
		BGl__caadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2splitz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2splitza7122121z00, va_generic_entry,
		BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__appendza700za7za7__r42122za7, va_generic_entry,
		BGl__appendz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cddrza700za7za7__r4_p2123za7,
		BGl__cddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remqz12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__remqza712za712za7za7__r2124z00,
		BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdarza700za7za7__r4_p2125za7,
		BGl__cdarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caaadrza700za7za7__r42126za7,
		BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cddddrza700za7za7__r42127za7,
		BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caaaarza700za7za7__r42128za7,
		BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdddarza700za7za7__r42129za7,
		BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza700za7za7__r4_p2130za7, va_generic_entry,
		BGl__listz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cadrza700za7za7__r4_p2131za7,
		BGl__cadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__nullza7f3za7f3za7za7__r2132z00,
		BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2cerz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__setza7d2cerza712za7c02133za7,
		BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eappendzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__eappendza700za7za7__r2134za7, va_generic_entry,
		BGl__eappendz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caarza700za7za7__r4_p2135za7,
		BGl__caarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_treezd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__treeza7d2copyza7d2za72136za7,
		BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_econszd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__econsza700za7za7__r4_2137za7,
		BGl__econsz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_memberzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__memberza700za7za7__r42138za7,
		BGl__memberz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2cdrz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__setza7d2cdrza712za7c02139za7,
		BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdrza700za7za7__r4_pa2140za7,
		BGl__cdrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cddadrza700za7za7__r42141za7,
		BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__carza700za7za7__r4_pa2142za7,
		BGl__carz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cddaarza700za7za7__r42143za7,
		BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cadddrza700za7za7__r42144za7,
		BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_remqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__remqza700za7za7__r4_p2145za7,
		BGl__remqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caddarza700za7za7__r42146za7,
		BGl__caddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pairzd2orzd2nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__pairza7d2orza7d2nul2147z00,
		BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_anyzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__anyza700za7za7__r4_pa2148za7, va_generic_entry,
		BGl__anyz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2duplicatesz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza7d2duplic2149za7, opt_generic_entry,
		BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2carz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__setza7d2carza712za7c02150za7,
		BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__assqza700za7za7__r4_p2151za7,
		BGl__assqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cadadrza700za7za7__r42152za7,
		BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cadaarza700za7za7__r42153za7,
		BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletez12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza712za712za7za7_2154z00, opt_generic_entry,
		BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assvzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__assvza700za7za7__r4_p2155za7,
		BGl__assvz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_takezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__takeza700za7za7__r4_p2156za7,
		BGl__takez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dropzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__dropza700za7za7__r4_p2157za7,
		BGl__dropz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lastzd2pairzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__lastza7d2pairza7d2za72158za7,
		BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_everyzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__everyza7f3za7f3za7za7__2159z00, va_generic_entry,
		BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendz12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__appendza712za712za7za7_2160z00, va_generic_entry,
		BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2splitzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2splitza7d22161z00, va_generic_entry,
		BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2032za700za7za7_2162za7,
		"/tmp/bigloo/runtime/Ieee/pairlist.scm", 37);
	      DEFINE_STRING(BGl_string2033z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2033za700za7za7_2163za7, "_car", 4);
	      DEFINE_STRING(BGl_string2034z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2034za700za7za7_2164za7, "pair", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7f3za7f3za7za7__r2165z00,
		BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2035z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2035za700za7za7_2166za7, "_cdr", 4);
	      DEFINE_STRING(BGl_string2036z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2036za700za7za7_2167za7, "_cer", 4);
	      DEFINE_STRING(BGl_string2037z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2037za700za7za7_2168za7, "epair", 5);
	      DEFINE_STRING(BGl_string2038z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2038za700za7za7_2169za7, "_caar", 5);
	      DEFINE_STRING(BGl_string2039z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2039za700za7za7_2170za7, "_cadr", 5);
	      DEFINE_STRING(BGl_string2040z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2040za700za7za7_2171za7, "_cdar", 5);
	      DEFINE_STRING(BGl_string2041z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2041za700za7za7_2172za7, "_cddr", 5);
	      DEFINE_STRING(BGl_string2042z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2042za700za7za7_2173za7, "_caaar", 6);
	      DEFINE_STRING(BGl_string2043z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2043za700za7za7_2174za7, "_caadr", 6);
	      DEFINE_STRING(BGl_string2044z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2044za700za7za7_2175za7, "_cadar", 6);
	      DEFINE_STRING(BGl_string2045z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2045za700za7za7_2176za7, "_caddr", 6);
	      DEFINE_STRING(BGl_string2046z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2046za700za7za7_2177za7, "_cdaar", 6);
	      DEFINE_STRING(BGl_string2047z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2047za700za7za7_2178za7, "_cddar", 6);
	      DEFINE_STRING(BGl_string2048z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2048za700za7za7_2179za7, "_cdadr", 6);
	      DEFINE_STRING(BGl_string2049z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2049za700za7za7_2180za7, "_cdddr", 6);
	      DEFINE_STRING(BGl_string2050z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2050za700za7za7_2181za7, "_caaaar", 7);
	      DEFINE_STRING(BGl_string2051z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2051za700za7za7_2182za7, "_caaadr", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cerzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cerza700za7za7__r4_pa2183za7,
		BGl__cerz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2052z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2052za700za7za7_2184za7, "_caadar", 7);
	      DEFINE_STRING(BGl_string2053z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2053za700za7za7_2185za7, "_cadaar", 7);
	      DEFINE_STRING(BGl_string2054z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2054za700za7za7_2186za7, "_cdaaar", 7);
	      DEFINE_STRING(BGl_string2055z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2055za700za7za7_2187za7, "_caaddr", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2setz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2setza712za7c2188za7,
		BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2056z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2056za700za7za7_2189za7, "_caddar", 7);
	      DEFINE_STRING(BGl_string2057z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2057za700za7za7_2190za7, "_cadadr", 7);
	      DEFINE_STRING(BGl_string2058z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2058za700za7za7_2191za7, "_cadddr", 7);
	      DEFINE_STRING(BGl_string2059z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2059za700za7za7_2192za7, "_cdaadr", 7);
	      DEFINE_STRING(BGl_string2060z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2060za700za7za7_2193za7, "_cdaddr", 7);
	      DEFINE_STRING(BGl_string2061z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2061za700za7za7_2194za7, "_cddaar", 7);
	      DEFINE_STRING(BGl_string2062z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2062za700za7za7_2195za7, "_cddadr", 7);
	      DEFINE_STRING(BGl_string2063z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2063za700za7za7_2196za7, "_cdadar", 7);
	      DEFINE_STRING(BGl_string2064z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2064za700za7za7_2197za7, "_cdddar", 7);
	      DEFINE_STRING(BGl_string2065z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2065za700za7za7_2198za7, "_cddddr", 7);
	      DEFINE_STRING(BGl_string2066z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2066za700za7za7_2199za7, "_set-car!", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_memqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__memqza700za7za7__r4_p2200za7,
		BGl__memqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2067z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2067za700za7za7_2201za7, "_set-cdr!", 9);
	      DEFINE_STRING(BGl_string2068z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2068za700za7za7_2202za7, "_set-cer!", 9);
	      DEFINE_STRING(BGl_string2069z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2069za700za7za7_2203za7, "_append-2", 9);
	      DEFINE_STRING(BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2070za700za7za7_2204za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2071z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2071za700za7za7_2205za7, "_eappend-2", 10);
	      DEFINE_STRING(BGl_string2072z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2072za700za7za7_2206za7, "_append-2!", 10);
	      DEFINE_STRING(BGl_string2073z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2073za700za7za7_2207za7, "_length", 7);
	      DEFINE_STRING(BGl_string2074z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2074za700za7za7_2208za7, "_reverse", 8);
	      DEFINE_STRING(BGl_string2075z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2075za700za7za7_2209za7, "_ereverse", 9);
	      DEFINE_STRING(BGl_string2076z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2076za700za7za7_2210za7, "_take", 5);
	      DEFINE_STRING(BGl_string2077z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2077za700za7za7_2211za7, "long", 4);
	      DEFINE_STRING(BGl_string2078z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2078za700za7za7_2212za7, "_drop", 5);
	      DEFINE_STRING(BGl_string2079z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2079za700za7za7_2213za7, "_list-tail", 10);
	      DEFINE_STRING(BGl_string2080z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2080za700za7za7_2214za7, "_list-ref", 9);
	      DEFINE_STRING(BGl_string2081z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2081za700za7za7_2215za7, "_list-set!", 10);
	      DEFINE_STRING(BGl_string2082z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2082za700za7za7_2216za7, "_last-pair", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2refzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2refza7d2za7za72217z00,
		BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2083z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2083za700za7za7_2218za7, "_memq", 5);
	      DEFINE_STRING(BGl_string2084z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2084za700za7za7_2219za7, "_memv", 5);
	      DEFINE_STRING(BGl_string2085z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2085za700za7za7_2220za7, "_member", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ereversezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__ereverseza700za7za7__2221za7,
		BGl__ereversez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2086z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2086za700za7za7_2222za7, "_assq", 5);
	      DEFINE_STRING(BGl_string2087z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2087za700za7za7_2223za7, "_assv", 5);
	      DEFINE_STRING(BGl_string2088z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2088za700za7za7_2224za7, "_assoc", 6);
	      DEFINE_STRING(BGl_string2100z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2100za700za7za7_2225za7, "_find-tail", 10);
	      DEFINE_STRING(BGl_string2089z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2089za700za7za7_2226za7, "_remq", 5);
	      DEFINE_STRING(BGl_string2090z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2090za700za7za7_2227za7, "_remq!", 6);
	      DEFINE_STRING(BGl_string2101z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2101za700za7za7_2228za7, "_reduce", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_iotazd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__iotaza700za7za7__r4_p2229za7, va_generic_entry,
		BGl__iotaz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2091z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2091za700za7za7_2230za7, "_delete", 7);
	      DEFINE_STRING(BGl_string2102z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2102za700za7za7_2231za7, "_make-list", 10);
	      DEFINE_STRING(BGl_string2092z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2092za700za7za7_2232za7, "_delete!", 8);
	      DEFINE_STRING(BGl_string2103z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2103za700za7za7_2233za7, "int", 3);
	      DEFINE_STRING(BGl_string2093z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2093za700za7za7_2234za7, "_reverse!", 9);
	      DEFINE_STRING(BGl_string2104z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2104za700za7za7_2235za7, "_list-tabulate", 14);
	      DEFINE_STRING(BGl_string2094z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2094za700za7za7_2236za7, "_every", 6);
	      DEFINE_STRING(BGl_string2105z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2105za700za7za7_2237za7, "_list-split", 11);
	      DEFINE_STRING(BGl_string2095z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2095za700za7za7_2238za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2106z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2106za700za7za7_2239za7, "_list-split!", 12);
	      DEFINE_STRING(BGl_string2096z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2096za700za7za7_2240za7, "_any", 4);
	      DEFINE_STRING(BGl_string2107z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2107za700za7za7_2241za7, "_iota", 5);
	      DEFINE_STRING(BGl_string2097z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2097za700za7za7_2242za7, "_every?", 7);
	      DEFINE_STRING(BGl_string2108z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2108za700za7za7_2243za7, "_list-copy", 10);
	      DEFINE_STRING(BGl_string2098z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2098za700za7za7_2244za7, "_any?", 5);
	      DEFINE_STRING(BGl_string2110z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2110za700za7za7_2245za7, "_delete-duplicates!", 19);
	      DEFINE_STRING(BGl_string2109z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2109za700za7za7_2246za7, "_delete-duplicates", 18);
	      DEFINE_STRING(BGl_string2099z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2099za700za7za7_2247za7, "_find", 5);
	      DEFINE_STRING(BGl_string2112z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2112za700za7za7_2248za7, "delete-duplicates!", 18);
	      DEFINE_STRING(BGl_string2113z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2113za700za7za7_2249za7, "__r4_pairs_and_lists_6_3", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd22z12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__appendza7d22za712za7c2250za7,
		BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_memvzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__memvza700za7za7__r4_p2251za7,
		BGl__memvz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__appendza7d22za7d2za7za72252z00,
		BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assoczd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__assocza700za7za7__r4_2253za7,
		BGl__assocz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_epairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__epairza7f3za7f3za7za7__2254z00,
		BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2tabulatezd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2tabulate2255za7,
		BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reversezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__reverseza700za7za7__r2256za7,
		BGl__reversez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caddrza700za7za7__r4_2257za7,
		BGl__caddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cadarza700za7za7__r4_2258za7,
		BGl__cadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_everyzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__everyza700za7za7__r4_2259za7, va_generic_entry,
		BGl__everyz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2listzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__makeza7d2listza7d2za72260za7, va_generic_entry,
		BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_anyzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__anyza7f3za7f3za7za7__r42261z00, va_generic_entry,
		BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__pairza7f3za7f3za7za7__r2262z00,
		BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caadrza700za7za7__r4_2263za7,
		BGl__caadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caaarza700za7za7__r4_2264za7,
		BGl__caaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2copyza7d2za72265za7,
		BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__listza7d2tailza7d2za72266za7,
		BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reversez12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__reverseza712za712za7za72267z00,
		BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__consza700za7za7__r4_p2268za7,
		BGl__consz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdddrza700za7za7__r4_2269za7,
		BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cddarza700za7za7__r4_2270za7,
		BGl__cddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdaddrza700za7za7__r42271za7,
		BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdadarza700za7za7__r42272za7,
		BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2duplicateszd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza7d2duplic2273za7, opt_generic_entry,
		BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lengthzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__lengthza700za7za7__r42274za7,
		BGl__lengthz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza700za7za7__r42275za7, opt_generic_entry,
		BGl__deletez00zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdadrza700za7za7__r4_2276za7,
		BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__reduceza700za7za7__r42277za7,
		BGl__reducez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdaarza700za7za7__r4_2278za7,
		BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consza2zd2envz70zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__consza7a2za7a2za7za7__r2279z00, va_generic_entry,
		BGl__consza2za2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdaadrza700za7za7__r42280za7,
		BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__cdaaarza700za7za7__r42281za7,
		BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__findza7d2tailza7d2za72282za7,
		BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eappendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__eappendza7d22za7d2za72283za7,
		BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__caaddrza700za7za7__r42284za7,
		BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long
		BgL_checksumz00_3353, char *BgL_fromz00_3354)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
					BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 18 */
			return (BGl_symbol2111z00zz__r4_pairs_and_lists_6_3z00 =
				bstring_to_symbol(BGl_string2112z00zz__r4_pairs_and_lists_6_3z00),
				BUNSPEC);
		}
	}



/* pair? */
	BGL_EXPORTED_DEF bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 216 */
			return PAIRP(BgL_objz00_1);
		}
	}



/* _pair? */
	obj_t BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2875,
		obj_t BgL_objz00_2876)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 216 */
			return BBOOL(PAIRP(BgL_objz00_2876));
		}
	}



/* epair? */
	BGL_EXPORTED_DEF bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 222 */
			return EXTENDED_PAIRP(BgL_objz00_2);
		}
	}



/* _epair? */
	obj_t BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2877,
		obj_t BgL_objz00_2878)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 222 */
			return BBOOL(EXTENDED_PAIRP(BgL_objz00_2878));
		}
	}



/* pair-or-null? */
	BGL_EXPORTED_DEF bool_t
		BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_3)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 228 */
			if (PAIRP(BgL_objz00_3))
				{	/* Ieee/pairlist.scm 229 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/pairlist.scm 229 */
					return NULLP(BgL_objz00_3);
				}
		}
	}



/* _pair-or-null? */
	obj_t BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2879, obj_t BgL_objz00_2880)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 228 */
			{	/* Ieee/pairlist.scm 229 */
				bool_t BgL_auxz00_3370;

				if (PAIRP(BgL_objz00_2880))
					{	/* Ieee/pairlist.scm 229 */
						BgL_auxz00_3370 = ((bool_t) 1);
					}
				else
					{	/* Ieee/pairlist.scm 229 */
						BgL_auxz00_3370 = NULLP(BgL_objz00_2880);
					}
				return BBOOL(BgL_auxz00_3370);
			}
		}
	}



/* cons */
	BGL_EXPORTED_DEF obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_obj1z00_4, obj_t BgL_obj2z00_5)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 236 */
			return MAKE_PAIR(BgL_obj1z00_4, BgL_obj2z00_5);
		}
	}



/* _cons */
	obj_t BGl__consz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2881,
		obj_t BgL_obj1z00_2882, obj_t BgL_obj2z00_2883)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 236 */
			return MAKE_PAIR(BgL_obj1z00_2882, BgL_obj2z00_2883);
		}
	}



/* econs */
	BGL_EXPORTED_DEF obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_obj1z00_6, obj_t BgL_obj2z00_7, obj_t BgL_obj3z00_8)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 242 */
			return MAKE_EXTENDED_PAIR(BgL_obj1z00_6, BgL_obj2z00_7, BgL_obj3z00_8);
		}
	}



/* _econs */
	obj_t BGl__econsz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2884,
		obj_t BgL_obj1z00_2885, obj_t BgL_obj2z00_2886, obj_t BgL_obj3z00_2887)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 242 */
			{	/* Ieee/pairlist.scm 243 */
				obj_t BgL_res2114z00_3265;

				BgL_res2114z00_3265 =
					MAKE_EXTENDED_PAIR(BgL_obj1z00_2885, BgL_obj2z00_2886,
					BgL_obj3z00_2887);
				return BgL_res2114z00_3265;
			}
		}
	}



/* car */
	BGL_EXPORTED_DEF obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 248 */
			return CAR(BgL_pairz00_9);
		}
	}



/* _car */
	obj_t BGl__carz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2888,
		obj_t BgL_pairz00_2889)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 248 */
			{	/* Ieee/pairlist.scm 249 */
				obj_t BgL_pairz00_3266;

				if (PAIRP(BgL_pairz00_2889))
					{	/* Ieee/pairlist.scm 249 */
						BgL_pairz00_3266 = BgL_pairz00_2889;
					}
				else
					{
						obj_t BgL_auxz00_3382;

						BgL_auxz00_3382 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 9731)),
							BGl_string2033z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2889);
						FAILURE(BgL_auxz00_3382, BFALSE, BFALSE);
					}
				return CAR(BgL_pairz00_3266);
			}
		}
	}



/* cdr */
	BGL_EXPORTED_DEF obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_10)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 254 */
			return CDR(BgL_pairz00_10);
		}
	}



/* _cdr */
	obj_t BGl__cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2890,
		obj_t BgL_pairz00_2891)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 254 */
			{	/* Ieee/pairlist.scm 255 */
				obj_t BgL_pairz00_3267;

				if (PAIRP(BgL_pairz00_2891))
					{	/* Ieee/pairlist.scm 255 */
						BgL_pairz00_3267 = BgL_pairz00_2891;
					}
				else
					{
						obj_t BgL_auxz00_3390;

						BgL_auxz00_3390 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 9997)),
							BGl_string2035z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2891);
						FAILURE(BgL_auxz00_3390, BFALSE, BFALSE);
					}
				return CDR(BgL_pairz00_3267);
			}
		}
	}



/* cer */
	BGL_EXPORTED_DEF obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 260 */
			return CER(BgL_objz00_11);
		}
	}



/* _cer */
	obj_t BGl__cerz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2892,
		obj_t BgL_objz00_2893)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 260 */
			{	/* Ieee/pairlist.scm 261 */
				obj_t BgL_objz00_3268;

				if (EXTENDED_PAIRP(BgL_objz00_2893))
					{	/* Ieee/pairlist.scm 261 */
						BgL_objz00_3268 = BgL_objz00_2893;
					}
				else
					{
						obj_t BgL_auxz00_3398;

						BgL_auxz00_3398 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10262)),
							BGl_string2036z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2037z00zz__r4_pairs_and_lists_6_3z00, BgL_objz00_2893);
						FAILURE(BgL_auxz00_3398, BFALSE, BFALSE);
					}
				return CER(BgL_objz00_3268);
			}
		}
	}



/* caar */
	BGL_EXPORTED_DEF obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 266 */
			return CAR(CAR(BgL_pairz00_12));
		}
	}



/* _caar */
	obj_t BGl__caarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2894,
		obj_t BgL_pairz00_2895)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 266 */
			{	/* Ieee/pairlist.scm 267 */
				obj_t BgL_pairz00_3269;

				if (PAIRP(BgL_pairz00_2895))
					{	/* Ieee/pairlist.scm 267 */
						BgL_pairz00_3269 = BgL_pairz00_2895;
					}
				else
					{
						obj_t BgL_auxz00_3407;

						BgL_auxz00_3407 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10533)),
							BGl_string2038z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2895);
						FAILURE(BgL_auxz00_3407, BFALSE, BFALSE);
					}
				return CAR(CAR(BgL_pairz00_3269));
			}
		}
	}



/* cadr */
	BGL_EXPORTED_DEF obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 272 */
			return CAR(CDR(BgL_pairz00_13));
		}
	}



/* _cadr */
	obj_t BGl__cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2896,
		obj_t BgL_pairz00_2897)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 272 */
			{	/* Ieee/pairlist.scm 273 */
				obj_t BgL_pairz00_3270;

				if (PAIRP(BgL_pairz00_2897))
					{	/* Ieee/pairlist.scm 273 */
						BgL_pairz00_3270 = BgL_pairz00_2897;
					}
				else
					{
						obj_t BgL_auxz00_3417;

						BgL_auxz00_3417 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10804)),
							BGl_string2039z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2897);
						FAILURE(BgL_auxz00_3417, BFALSE, BFALSE);
					}
				return CAR(CDR(BgL_pairz00_3270));
			}
		}
	}



/* cdar */
	BGL_EXPORTED_DEF obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 278 */
			return CDR(CAR(BgL_pairz00_14));
		}
	}



/* _cdar */
	obj_t BGl__cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2898,
		obj_t BgL_pairz00_2899)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 278 */
			{	/* Ieee/pairlist.scm 279 */
				obj_t BgL_pairz00_3271;

				if (PAIRP(BgL_pairz00_2899))
					{	/* Ieee/pairlist.scm 279 */
						BgL_pairz00_3271 = BgL_pairz00_2899;
					}
				else
					{
						obj_t BgL_auxz00_3427;

						BgL_auxz00_3427 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11075)),
							BGl_string2040z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2899);
						FAILURE(BgL_auxz00_3427, BFALSE, BFALSE);
					}
				return CDR(CAR(BgL_pairz00_3271));
			}
		}
	}



/* cddr */
	BGL_EXPORTED_DEF obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 284 */
			return CDR(CDR(BgL_pairz00_15));
		}
	}



/* _cddr */
	obj_t BGl__cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2900,
		obj_t BgL_pairz00_2901)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 284 */
			{	/* Ieee/pairlist.scm 285 */
				obj_t BgL_pairz00_3272;

				if (PAIRP(BgL_pairz00_2901))
					{	/* Ieee/pairlist.scm 285 */
						BgL_pairz00_3272 = BgL_pairz00_2901;
					}
				else
					{
						obj_t BgL_auxz00_3437;

						BgL_auxz00_3437 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11346)),
							BGl_string2041z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2901);
						FAILURE(BgL_auxz00_3437, BFALSE, BFALSE);
					}
				return CDR(CDR(BgL_pairz00_3272));
			}
		}
	}



/* caaar */
	BGL_EXPORTED_DEF obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_16)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 290 */
			return CAR(CAR(CAR(BgL_pairz00_16)));
		}
	}



/* _caaar */
	obj_t BGl__caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2902,
		obj_t BgL_pairz00_2903)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 290 */
			{	/* Ieee/pairlist.scm 291 */
				obj_t BgL_pairz00_3273;

				if (PAIRP(BgL_pairz00_2903))
					{	/* Ieee/pairlist.scm 291 */
						BgL_pairz00_3273 = BgL_pairz00_2903;
					}
				else
					{
						obj_t BgL_auxz00_3448;

						BgL_auxz00_3448 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11623)),
							BGl_string2042z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2903);
						FAILURE(BgL_auxz00_3448, BFALSE, BFALSE);
					}
				return CAR(CAR(CAR(BgL_pairz00_3273)));
			}
		}
	}



/* caadr */
	BGL_EXPORTED_DEF obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 296 */
			return CAR(CAR(CDR(BgL_pairz00_17)));
		}
	}



/* _caadr */
	obj_t BGl__caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2904,
		obj_t BgL_pairz00_2905)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 296 */
			{	/* Ieee/pairlist.scm 297 */
				obj_t BgL_pairz00_3274;

				if (PAIRP(BgL_pairz00_2905))
					{	/* Ieee/pairlist.scm 297 */
						BgL_pairz00_3274 = BgL_pairz00_2905;
					}
				else
					{
						obj_t BgL_auxz00_3460;

						BgL_auxz00_3460 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11901)),
							BGl_string2043z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2905);
						FAILURE(BgL_auxz00_3460, BFALSE, BFALSE);
					}
				return CAR(CAR(CDR(BgL_pairz00_3274)));
			}
		}
	}



/* cadar */
	BGL_EXPORTED_DEF obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 302 */
			return CAR(CDR(CAR(BgL_pairz00_18)));
		}
	}



/* _cadar */
	obj_t BGl__cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2906,
		obj_t BgL_pairz00_2907)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 302 */
			{	/* Ieee/pairlist.scm 303 */
				obj_t BgL_pairz00_3275;

				if (PAIRP(BgL_pairz00_2907))
					{	/* Ieee/pairlist.scm 303 */
						BgL_pairz00_3275 = BgL_pairz00_2907;
					}
				else
					{
						obj_t BgL_auxz00_3472;

						BgL_auxz00_3472 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12179)),
							BGl_string2044z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2907);
						FAILURE(BgL_auxz00_3472, BFALSE, BFALSE);
					}
				return CAR(CDR(CAR(BgL_pairz00_3275)));
			}
		}
	}



/* caddr */
	BGL_EXPORTED_DEF obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 308 */
			return CAR(CDR(CDR(BgL_pairz00_19)));
		}
	}



/* _caddr */
	obj_t BGl__caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2908,
		obj_t BgL_pairz00_2909)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 308 */
			{	/* Ieee/pairlist.scm 309 */
				obj_t BgL_pairz00_3276;

				if (PAIRP(BgL_pairz00_2909))
					{	/* Ieee/pairlist.scm 309 */
						BgL_pairz00_3276 = BgL_pairz00_2909;
					}
				else
					{
						obj_t BgL_auxz00_3484;

						BgL_auxz00_3484 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12457)),
							BGl_string2045z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2909);
						FAILURE(BgL_auxz00_3484, BFALSE, BFALSE);
					}
				return CAR(CDR(CDR(BgL_pairz00_3276)));
			}
		}
	}



/* cdaar */
	BGL_EXPORTED_DEF obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 314 */
			return CDR(CAR(CAR(BgL_pairz00_20)));
		}
	}



/* _cdaar */
	obj_t BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2910,
		obj_t BgL_pairz00_2911)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 314 */
			{	/* Ieee/pairlist.scm 315 */
				obj_t BgL_pairz00_3277;

				if (PAIRP(BgL_pairz00_2911))
					{	/* Ieee/pairlist.scm 315 */
						BgL_pairz00_3277 = BgL_pairz00_2911;
					}
				else
					{
						obj_t BgL_auxz00_3496;

						BgL_auxz00_3496 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12735)),
							BGl_string2046z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2911);
						FAILURE(BgL_auxz00_3496, BFALSE, BFALSE);
					}
				return CDR(CAR(CAR(BgL_pairz00_3277)));
			}
		}
	}



/* cddar */
	BGL_EXPORTED_DEF obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 320 */
			return CDR(CDR(CAR(BgL_pairz00_21)));
		}
	}



/* _cddar */
	obj_t BGl__cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2912,
		obj_t BgL_pairz00_2913)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 320 */
			{	/* Ieee/pairlist.scm 321 */
				obj_t BgL_pairz00_3278;

				if (PAIRP(BgL_pairz00_2913))
					{	/* Ieee/pairlist.scm 321 */
						BgL_pairz00_3278 = BgL_pairz00_2913;
					}
				else
					{
						obj_t BgL_auxz00_3508;

						BgL_auxz00_3508 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13013)),
							BGl_string2047z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2913);
						FAILURE(BgL_auxz00_3508, BFALSE, BFALSE);
					}
				return CDR(CDR(CAR(BgL_pairz00_3278)));
			}
		}
	}



/* cdadr */
	BGL_EXPORTED_DEF obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 326 */
			return CDR(CAR(CDR(BgL_pairz00_22)));
		}
	}



/* _cdadr */
	obj_t BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2914,
		obj_t BgL_pairz00_2915)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 326 */
			{	/* Ieee/pairlist.scm 327 */
				obj_t BgL_pairz00_3279;

				if (PAIRP(BgL_pairz00_2915))
					{	/* Ieee/pairlist.scm 327 */
						BgL_pairz00_3279 = BgL_pairz00_2915;
					}
				else
					{
						obj_t BgL_auxz00_3520;

						BgL_auxz00_3520 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13291)),
							BGl_string2048z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2915);
						FAILURE(BgL_auxz00_3520, BFALSE, BFALSE);
					}
				return CDR(CAR(CDR(BgL_pairz00_3279)));
			}
		}
	}



/* cdddr */
	BGL_EXPORTED_DEF obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_23)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 332 */
			return CDR(CDR(CDR(BgL_pairz00_23)));
		}
	}



/* _cdddr */
	obj_t BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2916,
		obj_t BgL_pairz00_2917)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 332 */
			{	/* Ieee/pairlist.scm 333 */
				obj_t BgL_pairz00_3280;

				if (PAIRP(BgL_pairz00_2917))
					{	/* Ieee/pairlist.scm 333 */
						BgL_pairz00_3280 = BgL_pairz00_2917;
					}
				else
					{
						obj_t BgL_auxz00_3532;

						BgL_auxz00_3532 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13569)),
							BGl_string2049z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2917);
						FAILURE(BgL_auxz00_3532, BFALSE, BFALSE);
					}
				return CDR(CDR(CDR(BgL_pairz00_3280)));
			}
		}
	}



/* caaaar */
	BGL_EXPORTED_DEF obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 338 */
			return CAR(CAR(CAR(CAR(BgL_pairz00_24))));
		}
	}



/* _caaaar */
	obj_t BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2918,
		obj_t BgL_pairz00_2919)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 338 */
			{	/* Ieee/pairlist.scm 339 */
				obj_t BgL_pairz00_3281;

				if (PAIRP(BgL_pairz00_2919))
					{	/* Ieee/pairlist.scm 339 */
						BgL_pairz00_3281 = BgL_pairz00_2919;
					}
				else
					{
						obj_t BgL_auxz00_3545;

						BgL_auxz00_3545 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13853)),
							BGl_string2050z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2919);
						FAILURE(BgL_auxz00_3545, BFALSE, BFALSE);
					}
				return CAR(CAR(CAR(CAR(BgL_pairz00_3281))));
			}
		}
	}



/* caaadr */
	BGL_EXPORTED_DEF obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_25)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 344 */
			return CAR(CAR(CAR(CDR(BgL_pairz00_25))));
		}
	}



/* _caaadr */
	obj_t BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2920,
		obj_t BgL_pairz00_2921)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 344 */
			{	/* Ieee/pairlist.scm 345 */
				obj_t BgL_pairz00_3282;

				if (PAIRP(BgL_pairz00_2921))
					{	/* Ieee/pairlist.scm 345 */
						BgL_pairz00_3282 = BgL_pairz00_2921;
					}
				else
					{
						obj_t BgL_auxz00_3559;

						BgL_auxz00_3559 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14138)),
							BGl_string2051z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2921);
						FAILURE(BgL_auxz00_3559, BFALSE, BFALSE);
					}
				return CAR(CAR(CAR(CDR(BgL_pairz00_3282))));
			}
		}
	}



/* caadar */
	BGL_EXPORTED_DEF obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 350 */
			return CAR(CAR(CDR(CAR(BgL_pairz00_26))));
		}
	}



/* _caadar */
	obj_t BGl__caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2922,
		obj_t BgL_pairz00_2923)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 350 */
			{	/* Ieee/pairlist.scm 351 */
				obj_t BgL_pairz00_3283;

				if (PAIRP(BgL_pairz00_2923))
					{	/* Ieee/pairlist.scm 351 */
						BgL_pairz00_3283 = BgL_pairz00_2923;
					}
				else
					{
						obj_t BgL_auxz00_3573;

						BgL_auxz00_3573 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14423)),
							BGl_string2052z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2923);
						FAILURE(BgL_auxz00_3573, BFALSE, BFALSE);
					}
				return CAR(CAR(CDR(CAR(BgL_pairz00_3283))));
			}
		}
	}



/* cadaar */
	BGL_EXPORTED_DEF obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_27)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 356 */
			return CAR(CDR(CAR(CAR(BgL_pairz00_27))));
		}
	}



/* _cadaar */
	obj_t BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2924,
		obj_t BgL_pairz00_2925)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 356 */
			{	/* Ieee/pairlist.scm 357 */
				obj_t BgL_pairz00_3284;

				if (PAIRP(BgL_pairz00_2925))
					{	/* Ieee/pairlist.scm 357 */
						BgL_pairz00_3284 = BgL_pairz00_2925;
					}
				else
					{
						obj_t BgL_auxz00_3587;

						BgL_auxz00_3587 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14708)),
							BGl_string2053z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2925);
						FAILURE(BgL_auxz00_3587, BFALSE, BFALSE);
					}
				return CAR(CDR(CAR(CAR(BgL_pairz00_3284))));
			}
		}
	}



/* cdaaar */
	BGL_EXPORTED_DEF obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 362 */
			return CDR(CAR(CAR(CAR(BgL_pairz00_28))));
		}
	}



/* _cdaaar */
	obj_t BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2926,
		obj_t BgL_pairz00_2927)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 362 */
			{	/* Ieee/pairlist.scm 363 */
				obj_t BgL_pairz00_3285;

				if (PAIRP(BgL_pairz00_2927))
					{	/* Ieee/pairlist.scm 363 */
						BgL_pairz00_3285 = BgL_pairz00_2927;
					}
				else
					{
						obj_t BgL_auxz00_3601;

						BgL_auxz00_3601 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14993)),
							BGl_string2054z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2927);
						FAILURE(BgL_auxz00_3601, BFALSE, BFALSE);
					}
				return CDR(CAR(CAR(CAR(BgL_pairz00_3285))));
			}
		}
	}



/* caaddr */
	BGL_EXPORTED_DEF obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_29)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 368 */
			return CAR(CAR(CDR(CDR(BgL_pairz00_29))));
		}
	}



/* _caaddr */
	obj_t BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2928,
		obj_t BgL_pairz00_2929)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 368 */
			{	/* Ieee/pairlist.scm 369 */
				obj_t BgL_pairz00_3286;

				if (PAIRP(BgL_pairz00_2929))
					{	/* Ieee/pairlist.scm 369 */
						BgL_pairz00_3286 = BgL_pairz00_2929;
					}
				else
					{
						obj_t BgL_auxz00_3615;

						BgL_auxz00_3615 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15278)),
							BGl_string2055z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2929);
						FAILURE(BgL_auxz00_3615, BFALSE, BFALSE);
					}
				return CAR(CAR(CDR(CDR(BgL_pairz00_3286))));
			}
		}
	}



/* caddar */
	BGL_EXPORTED_DEF obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 374 */
			return CAR(CDR(CDR(CAR(BgL_pairz00_30))));
		}
	}



/* _caddar */
	obj_t BGl__caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2930,
		obj_t BgL_pairz00_2931)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 374 */
			{	/* Ieee/pairlist.scm 375 */
				obj_t BgL_pairz00_3287;

				if (PAIRP(BgL_pairz00_2931))
					{	/* Ieee/pairlist.scm 375 */
						BgL_pairz00_3287 = BgL_pairz00_2931;
					}
				else
					{
						obj_t BgL_auxz00_3629;

						BgL_auxz00_3629 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15563)),
							BGl_string2056z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2931);
						FAILURE(BgL_auxz00_3629, BFALSE, BFALSE);
					}
				return CAR(CDR(CDR(CAR(BgL_pairz00_3287))));
			}
		}
	}



/* cadadr */
	BGL_EXPORTED_DEF obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_31)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 380 */
			return CAR(CDR(CAR(CDR(BgL_pairz00_31))));
		}
	}



/* _cadadr */
	obj_t BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2932,
		obj_t BgL_pairz00_2933)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 380 */
			{	/* Ieee/pairlist.scm 381 */
				obj_t BgL_pairz00_3288;

				if (PAIRP(BgL_pairz00_2933))
					{	/* Ieee/pairlist.scm 381 */
						BgL_pairz00_3288 = BgL_pairz00_2933;
					}
				else
					{
						obj_t BgL_auxz00_3643;

						BgL_auxz00_3643 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15848)),
							BGl_string2057z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2933);
						FAILURE(BgL_auxz00_3643, BFALSE, BFALSE);
					}
				return CAR(CDR(CAR(CDR(BgL_pairz00_3288))));
			}
		}
	}



/* cadddr */
	BGL_EXPORTED_DEF obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_32)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 386 */
			return CAR(CDR(CDR(CDR(BgL_pairz00_32))));
		}
	}



/* _cadddr */
	obj_t BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2934,
		obj_t BgL_pairz00_2935)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 386 */
			{	/* Ieee/pairlist.scm 387 */
				obj_t BgL_pairz00_3289;

				if (PAIRP(BgL_pairz00_2935))
					{	/* Ieee/pairlist.scm 387 */
						BgL_pairz00_3289 = BgL_pairz00_2935;
					}
				else
					{
						obj_t BgL_auxz00_3657;

						BgL_auxz00_3657 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16133)),
							BGl_string2058z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2935);
						FAILURE(BgL_auxz00_3657, BFALSE, BFALSE);
					}
				return CAR(CDR(CDR(CDR(BgL_pairz00_3289))));
			}
		}
	}



/* cdaadr */
	BGL_EXPORTED_DEF obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 392 */
			return CDR(CAR(CAR(CDR(BgL_pairz00_33))));
		}
	}



/* _cdaadr */
	obj_t BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2936,
		obj_t BgL_pairz00_2937)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 392 */
			{	/* Ieee/pairlist.scm 393 */
				obj_t BgL_pairz00_3290;

				if (PAIRP(BgL_pairz00_2937))
					{	/* Ieee/pairlist.scm 393 */
						BgL_pairz00_3290 = BgL_pairz00_2937;
					}
				else
					{
						obj_t BgL_auxz00_3671;

						BgL_auxz00_3671 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16418)),
							BGl_string2059z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2937);
						FAILURE(BgL_auxz00_3671, BFALSE, BFALSE);
					}
				return CDR(CAR(CAR(CDR(BgL_pairz00_3290))));
			}
		}
	}



/* cdaddr */
	BGL_EXPORTED_DEF obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 398 */
			return CDR(CAR(CDR(CDR(BgL_pairz00_34))));
		}
	}



/* _cdaddr */
	obj_t BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2938,
		obj_t BgL_pairz00_2939)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 398 */
			{	/* Ieee/pairlist.scm 399 */
				obj_t BgL_pairz00_3291;

				if (PAIRP(BgL_pairz00_2939))
					{	/* Ieee/pairlist.scm 399 */
						BgL_pairz00_3291 = BgL_pairz00_2939;
					}
				else
					{
						obj_t BgL_auxz00_3685;

						BgL_auxz00_3685 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16703)),
							BGl_string2060z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2939);
						FAILURE(BgL_auxz00_3685, BFALSE, BFALSE);
					}
				return CDR(CAR(CDR(CDR(BgL_pairz00_3291))));
			}
		}
	}



/* cddaar */
	BGL_EXPORTED_DEF obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_35)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 404 */
			return CDR(CDR(CAR(CAR(BgL_pairz00_35))));
		}
	}



/* _cddaar */
	obj_t BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2940,
		obj_t BgL_pairz00_2941)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 404 */
			{	/* Ieee/pairlist.scm 405 */
				obj_t BgL_pairz00_3292;

				if (PAIRP(BgL_pairz00_2941))
					{	/* Ieee/pairlist.scm 405 */
						BgL_pairz00_3292 = BgL_pairz00_2941;
					}
				else
					{
						obj_t BgL_auxz00_3699;

						BgL_auxz00_3699 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16988)),
							BGl_string2061z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2941);
						FAILURE(BgL_auxz00_3699, BFALSE, BFALSE);
					}
				return CDR(CDR(CAR(CAR(BgL_pairz00_3292))));
			}
		}
	}



/* cddadr */
	BGL_EXPORTED_DEF obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_36)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 410 */
			return CDR(CDR(CAR(CDR(BgL_pairz00_36))));
		}
	}



/* _cddadr */
	obj_t BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2942,
		obj_t BgL_pairz00_2943)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 410 */
			{	/* Ieee/pairlist.scm 411 */
				obj_t BgL_pairz00_3293;

				if (PAIRP(BgL_pairz00_2943))
					{	/* Ieee/pairlist.scm 411 */
						BgL_pairz00_3293 = BgL_pairz00_2943;
					}
				else
					{
						obj_t BgL_auxz00_3713;

						BgL_auxz00_3713 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17273)),
							BGl_string2062z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2943);
						FAILURE(BgL_auxz00_3713, BFALSE, BFALSE);
					}
				return CDR(CDR(CAR(CDR(BgL_pairz00_3293))));
			}
		}
	}



/* cdadar */
	BGL_EXPORTED_DEF obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 416 */
			return CDR(CAR(CDR(CAR(BgL_pairz00_37))));
		}
	}



/* _cdadar */
	obj_t BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2944,
		obj_t BgL_pairz00_2945)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 416 */
			{	/* Ieee/pairlist.scm 417 */
				obj_t BgL_pairz00_3294;

				if (PAIRP(BgL_pairz00_2945))
					{	/* Ieee/pairlist.scm 417 */
						BgL_pairz00_3294 = BgL_pairz00_2945;
					}
				else
					{
						obj_t BgL_auxz00_3727;

						BgL_auxz00_3727 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17558)),
							BGl_string2063z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2945);
						FAILURE(BgL_auxz00_3727, BFALSE, BFALSE);
					}
				return CDR(CAR(CDR(CAR(BgL_pairz00_3294))));
			}
		}
	}



/* cdddar */
	BGL_EXPORTED_DEF obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_38)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 422 */
			return CDR(CDR(CDR(CAR(BgL_pairz00_38))));
		}
	}



/* _cdddar */
	obj_t BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2946,
		obj_t BgL_pairz00_2947)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 422 */
			{	/* Ieee/pairlist.scm 423 */
				obj_t BgL_pairz00_3295;

				if (PAIRP(BgL_pairz00_2947))
					{	/* Ieee/pairlist.scm 423 */
						BgL_pairz00_3295 = BgL_pairz00_2947;
					}
				else
					{
						obj_t BgL_auxz00_3741;

						BgL_auxz00_3741 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17843)),
							BGl_string2064z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2947);
						FAILURE(BgL_auxz00_3741, BFALSE, BFALSE);
					}
				return CDR(CDR(CDR(CAR(BgL_pairz00_3295))));
			}
		}
	}



/* cddddr */
	BGL_EXPORTED_DEF obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_39)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 429 */
			return CDR(CDR(CDR(CDR(BgL_pairz00_39))));
		}
	}



/* _cddddr */
	obj_t BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2948,
		obj_t BgL_pairz00_2949)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 429 */
			{	/* Ieee/pairlist.scm 430 */
				obj_t BgL_pairz00_3296;

				if (PAIRP(BgL_pairz00_2949))
					{	/* Ieee/pairlist.scm 430 */
						BgL_pairz00_3296 = BgL_pairz00_2949;
					}
				else
					{
						obj_t BgL_auxz00_3755;

						BgL_auxz00_3755 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18129)),
							BGl_string2065z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2949);
						FAILURE(BgL_auxz00_3755, BFALSE, BFALSE);
					}
				return CDR(CDR(CDR(CDR(BgL_pairz00_3296))));
			}
		}
	}



/* set-car! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_40, obj_t BgL_objz00_41)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 435 */
			return SET_CAR(BgL_pairz00_40, BgL_objz00_41);
		}
	}



/* _set-car! */
	obj_t BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2950,
		obj_t BgL_pairz00_2951, obj_t BgL_objz00_2952)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 435 */
			{	/* Ieee/pairlist.scm 436 */
				obj_t BgL_pairz00_3297;

				if (PAIRP(BgL_pairz00_2951))
					{	/* Ieee/pairlist.scm 436 */
						BgL_pairz00_3297 = BgL_pairz00_2951;
					}
				else
					{
						obj_t BgL_auxz00_3766;

						BgL_auxz00_3766 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18405)),
							BGl_string2066z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2951);
						FAILURE(BgL_auxz00_3766, BFALSE, BFALSE);
					}
				return SET_CAR(BgL_pairz00_3297, BgL_objz00_2952);
			}
		}
	}



/* set-cdr! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_42, obj_t BgL_objz00_43)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 441 */
			return SET_CDR(BgL_pairz00_42, BgL_objz00_43);
		}
	}



/* _set-cdr! */
	obj_t BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2953,
		obj_t BgL_pairz00_2954, obj_t BgL_objz00_2955)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 441 */
			{	/* Ieee/pairlist.scm 442 */
				obj_t BgL_pairz00_3299;

				if (PAIRP(BgL_pairz00_2954))
					{	/* Ieee/pairlist.scm 442 */
						BgL_pairz00_3299 = BgL_pairz00_2954;
					}
				else
					{
						obj_t BgL_auxz00_3774;

						BgL_auxz00_3774 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18689)),
							BGl_string2067z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2954);
						FAILURE(BgL_auxz00_3774, BFALSE, BFALSE);
					}
				return SET_CDR(BgL_pairz00_3299, BgL_objz00_2955);
			}
		}
	}



/* set-cer! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_epairz00_44, obj_t BgL_objz00_45)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 447 */
			return SET_CER(BgL_epairz00_44, BgL_objz00_45);
		}
	}



/* _set-cer! */
	obj_t BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2956,
		obj_t BgL_epairz00_2957, obj_t BgL_objz00_2958)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 447 */
			{	/* Ieee/pairlist.scm 448 */
				obj_t BgL_epairz00_3301;

				if (EXTENDED_PAIRP(BgL_epairz00_2957))
					{	/* Ieee/pairlist.scm 448 */
						BgL_epairz00_3301 = BgL_epairz00_2957;
					}
				else
					{
						obj_t BgL_auxz00_3782;

						BgL_auxz00_3782 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18974)),
							BGl_string2068z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2037z00zz__r4_pairs_and_lists_6_3z00,
							BgL_epairz00_2957);
						FAILURE(BgL_auxz00_3782, BFALSE, BFALSE);
					}
				return SET_CER(BgL_epairz00_3301, BgL_objz00_2958);
			}
		}
	}



/* null? */
	BGL_EXPORTED_DEF bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_46)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 453 */
			return NULLP(BgL_objz00_46);
		}
	}



/* _null? */
	obj_t BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2959,
		obj_t BgL_objz00_2960)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 453 */
			return BBOOL(NULLP(BgL_objz00_2960));
		}
	}



/* list */
	BGL_EXPORTED_DEF obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_47)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 459 */
			return BgL_lz00_47;
		}
	}



/* _list */
	obj_t BGl__listz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2961,
		obj_t BgL_lz00_2962)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 459 */
			return BgL_lz00_2962;
		}
	}



/* list? */
	BGL_EXPORTED_DEF bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_48)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 465 */
			{
				obj_t BgL_xz00_553;

				obj_t BgL_prevz00_554;

				if (NULLP(BgL_xz00_48))
					{	/* Ieee/pairlist.scm 482 */
						return ((bool_t) 1);
					}
				else
					{	/* Ieee/pairlist.scm 482 */
						if (PAIRP(BgL_xz00_48))
							{	/* Ieee/pairlist.scm 485 */
								obj_t BgL_xz00_1502;

								obj_t BgL_prevz00_1503;

								BgL_xz00_1502 = CDR(BgL_xz00_48);
								BgL_prevz00_1503 = BgL_xz00_48;
								if (NULLP(BgL_xz00_1502))
									{	/* Ieee/pairlist.scm 485 */
										return ((bool_t) 1);
									}
								else
									{	/* Ieee/pairlist.scm 485 */
										if (PAIRP(BgL_xz00_1502))
											{	/* Ieee/pairlist.scm 485 */
												if ((BgL_xz00_1502 == BgL_prevz00_1503))
													{	/* Ieee/pairlist.scm 485 */
														return ((bool_t) 0);
													}
												else
													{	/* Ieee/pairlist.scm 485 */
														BgL_xz00_553 = CDR(BgL_xz00_1502);
														BgL_prevz00_554 = BgL_prevz00_1503;
													BgL_l2z00_555:
														if (NULLP(BgL_xz00_553))
															{	/* Ieee/pairlist.scm 475 */
																return ((bool_t) 1);
															}
														else
															{	/* Ieee/pairlist.scm 475 */
																if (PAIRP(BgL_xz00_553))
																	{	/* Ieee/pairlist.scm 475 */
																		if ((BgL_xz00_553 == BgL_prevz00_554))
																			{	/* Ieee/pairlist.scm 475 */
																				return ((bool_t) 0);
																			}
																		else
																			{	/* Ieee/pairlist.scm 475 */
																				obj_t BgL_xz00_1538;

																				obj_t BgL_prevz00_1539;

																				BgL_xz00_1538 = CDR(BgL_xz00_553);
																				BgL_prevz00_1539 = CDR(BgL_prevz00_554);
																				if (NULLP(BgL_xz00_1538))
																					{	/* Ieee/pairlist.scm 475 */
																						return ((bool_t) 1);
																					}
																				else
																					{	/* Ieee/pairlist.scm 475 */
																						if (PAIRP(BgL_xz00_1538))
																							{	/* Ieee/pairlist.scm 475 */
																								if (
																									(BgL_xz00_1538 ==
																										BgL_prevz00_1539))
																									{	/* Ieee/pairlist.scm 475 */
																										return ((bool_t) 0);
																									}
																								else
																									{
																										obj_t BgL_prevz00_3817;

																										obj_t BgL_xz00_3815;

																										BgL_xz00_3815 =
																											CDR(BgL_xz00_1538);
																										BgL_prevz00_3817 =
																											BgL_prevz00_1539;
																										BgL_prevz00_554 =
																											BgL_prevz00_3817;
																										BgL_xz00_553 =
																											BgL_xz00_3815;
																										goto BgL_l2z00_555;
																									}
																							}
																						else
																							{	/* Ieee/pairlist.scm 475 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																	}
																else
																	{	/* Ieee/pairlist.scm 475 */
																		return ((bool_t) 0);
																	}
															}
													}
											}
										else
											{	/* Ieee/pairlist.scm 485 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Ieee/pairlist.scm 484 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* _list? */
	obj_t BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2963,
		obj_t BgL_xz00_2964)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 465 */
			return BBOOL(BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2964));
		}
	}



/* append-2 */
	BGL_EXPORTED_DEF obj_t bgl_append2(obj_t BgL_l1z00_49, obj_t BgL_l2z00_50)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 492 */
			{	/* Ieee/pairlist.scm 493 */
				obj_t BgL_headz00_568;

				BgL_headz00_568 = MAKE_PAIR(BNIL, BgL_l2z00_50);
				{
					obj_t BgL_prevz00_1548;

					obj_t BgL_tailz00_1549;

					BgL_prevz00_1548 = BgL_headz00_568;
					BgL_tailz00_1549 = BgL_l1z00_49;
				BgL_loopz00_1547:
					if (NULLP(BgL_tailz00_1549))
						{	/* Ieee/pairlist.scm 500 */
							BNIL;
						}
					else
						{	/* Ieee/pairlist.scm 500 */
							obj_t BgL_newzd2prevzd2_1555;

							BgL_newzd2prevzd2_1555 =
								MAKE_PAIR(CAR(BgL_tailz00_1549), BgL_l2z00_50);
							SET_CDR(BgL_prevz00_1548, BgL_newzd2prevzd2_1555);
							{
								obj_t BgL_tailz00_3828;

								obj_t BgL_prevz00_3827;

								BgL_prevz00_3827 = BgL_newzd2prevzd2_1555;
								BgL_tailz00_3828 = CDR(BgL_tailz00_1549);
								BgL_tailz00_1549 = BgL_tailz00_3828;
								BgL_prevz00_1548 = BgL_prevz00_3827;
								goto BgL_loopz00_1547;
							}
						}
				}
				return CDR(BgL_headz00_568);
			}
		}
	}



/* _append-2 */
	obj_t BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2965,
		obj_t BgL_l1z00_2966, obj_t BgL_l2z00_2967)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 492 */
			{	/* Ieee/pairlist.scm 493 */
				obj_t BgL_auxz00_3831;

				{	/* Ieee/pairlist.scm 493 */
					bool_t BgL_testz00_3832;

					if (PAIRP(BgL_l1z00_2966))
						{	/* Ieee/pairlist.scm 493 */
							BgL_testz00_3832 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 493 */
							BgL_testz00_3832 = NULLP(BgL_l1z00_2966);
						}
					if (BgL_testz00_3832)
						{	/* Ieee/pairlist.scm 493 */
							BgL_auxz00_3831 = BgL_l1z00_2966;
						}
					else
						{
							obj_t BgL_auxz00_3836;

							BgL_auxz00_3836 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 20433)),
								BGl_string2069z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2966);
							FAILURE(BgL_auxz00_3836, BFALSE, BFALSE);
				}}
				return bgl_append2(BgL_auxz00_3831, BgL_l2z00_2967);
			}
		}
	}



/* eappend-2 */
	BGL_EXPORTED_DEF obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_l1z00_51, obj_t BgL_l2z00_52)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 506 */
			{	/* Ieee/pairlist.scm 507 */
				obj_t BgL_headz00_576;

				if (EXTENDED_PAIRP(BgL_l2z00_52))
					{	/* Ieee/pairlist.scm 508 */
						obj_t BgL_arg1329z00_589;

						BgL_arg1329z00_589 = CER(BgL_l2z00_52);
						{	/* Ieee/pairlist.scm 508 */
							obj_t BgL_res1841z00_1589;

							BgL_res1841z00_1589 =
								MAKE_EXTENDED_PAIR(BNIL, BgL_l2z00_52, BgL_arg1329z00_589);
							BgL_headz00_576 = BgL_res1841z00_1589;
						}
					}
				else
					{	/* Ieee/pairlist.scm 507 */
						BgL_headz00_576 = MAKE_PAIR(BNIL, BgL_l2z00_52);
					}
				{
					obj_t BgL_prevz00_577;

					obj_t BgL_tailz00_578;

					BgL_prevz00_577 = BgL_headz00_576;
					BgL_tailz00_578 = BgL_l1z00_51;
				BgL_loopz00_579:
					if (NULLP(BgL_tailz00_578))
						{	/* Ieee/pairlist.scm 511 */
							BNIL;
						}
					else
						{	/* Ieee/pairlist.scm 513 */
							obj_t BgL_newzd2prevzd2_581;

							if (EXTENDED_PAIRP(BgL_tailz00_578))
								{	/* Ieee/pairlist.scm 514 */
									obj_t BgL_arg1324z00_584;

									obj_t BgL_arg1325z00_585;

									BgL_arg1324z00_584 = CAR(BgL_tailz00_578);
									BgL_arg1325z00_585 = CER(BgL_tailz00_578);
									{	/* Ieee/pairlist.scm 514 */
										obj_t BgL_res1842z00_1598;

										BgL_res1842z00_1598 =
											MAKE_EXTENDED_PAIR(BgL_arg1324z00_584, BgL_l2z00_52,
											BgL_arg1325z00_585);
										BgL_newzd2prevzd2_581 = BgL_res1842z00_1598;
									}
								}
							else
								{	/* Ieee/pairlist.scm 513 */
									BgL_newzd2prevzd2_581 =
										MAKE_PAIR(CAR(BgL_tailz00_578), BgL_l2z00_52);
								}
							SET_CDR(BgL_prevz00_577, BgL_newzd2prevzd2_581);
							{
								obj_t BgL_tailz00_3857;

								obj_t BgL_prevz00_3856;

								BgL_prevz00_3856 = BgL_newzd2prevzd2_581;
								BgL_tailz00_3857 = CDR(BgL_tailz00_578);
								BgL_tailz00_578 = BgL_tailz00_3857;
								BgL_prevz00_577 = BgL_prevz00_3856;
								goto BgL_loopz00_579;
							}
						}
					return CDR(BgL_headz00_576);
				}
			}
		}
	}



/* _eappend-2 */
	obj_t BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2968,
		obj_t BgL_l1z00_2969, obj_t BgL_l2z00_2970)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 506 */
			{	/* Ieee/pairlist.scm 507 */
				obj_t BgL_auxz00_3860;

				{	/* Ieee/pairlist.scm 507 */
					bool_t BgL_testz00_3861;

					if (PAIRP(BgL_l1z00_2969))
						{	/* Ieee/pairlist.scm 507 */
							BgL_testz00_3861 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 507 */
							BgL_testz00_3861 = NULLP(BgL_l1z00_2969);
						}
					if (BgL_testz00_3861)
						{	/* Ieee/pairlist.scm 507 */
							BgL_auxz00_3860 = BgL_l1z00_2969;
						}
					else
						{
							obj_t BgL_auxz00_3865;

							BgL_auxz00_3865 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 20924)),
								BGl_string2071z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2969);
							FAILURE(BgL_auxz00_3865, BFALSE, BFALSE);
				}}
				return
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3860,
					BgL_l2z00_2970);
			}
		}
	}



/* append */
	BGL_EXPORTED_DEF obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_53)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 524 */
			return
				BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_53);
		}
	}



/* append-list'' */
	obj_t BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_590)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 525 */
			{	/* Ieee/pairlist.scm 526 */
				long BgL_lenz00_592;

				BgL_lenz00_592 = bgl_list_length(BgL_lz00_590);
				{

					switch (BgL_lenz00_592)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(BgL_lz00_590);
							break;
						case ((long) 2):

							return bgl_append2(CAR(BgL_lz00_590), CAR(CDR(BgL_lz00_590)));
							break;
						default:
							return
								bgl_append2(CAR(BgL_lz00_590),
								BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(CDR
									(BgL_lz00_590)));
						}
				}
			}
		}
	}



/* _append */
	obj_t BGl__appendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2971,
		obj_t BgL_lz00_2972)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 524 */
			return
				BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2972);
		}
	}



/* eappend */
	BGL_EXPORTED_DEF obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_54)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 541 */
			return BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(BgL_lz00_54);
		}
	}



/* append-list' */
	obj_t BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_602)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 542 */
			{	/* Ieee/pairlist.scm 543 */
				long BgL_lenz00_604;

				BgL_lenz00_604 = bgl_list_length(BgL_lz00_602);
				{

					switch (BgL_lenz00_604)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(BgL_lz00_602);
							break;
						case ((long) 2):

							return
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(CAR
								(BgL_lz00_602), CAR(CDR(BgL_lz00_602)));
							break;
						default:
							return
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(CAR
								(BgL_lz00_602),
								BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(CDR
									(BgL_lz00_602)));
						}
				}
			}
		}
	}



/* _eappend */
	obj_t BGl__eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2973,
		obj_t BgL_lz00_2974)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 541 */
			return
				BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2974);
		}
	}



/* append! */
	BGL_EXPORTED_DEF obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_55)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 558 */
			return BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_55);
		}
	}



/* append-list */
	obj_t BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_614)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 559 */
			{	/* Ieee/pairlist.scm 560 */
				long BgL_lenz00_616;

				BgL_lenz00_616 = bgl_list_length(BgL_lz00_614);
				{

					switch (BgL_lenz00_616)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(BgL_lz00_614);
							break;
						case ((long) 2):

							return
								BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(CAR
								(BgL_lz00_614), CAR(CDR(BgL_lz00_614)));
							break;
						default:
							return
								BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(CAR
								(BgL_lz00_614),
								BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(CDR
									(BgL_lz00_614)));
						}
				}
			}
		}
	}



/* _append! */
	obj_t BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2975,
		obj_t BgL_lz00_2976)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 558 */
			return BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2976);
		}
	}



/* append-2! */
	BGL_EXPORTED_DEF obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_56, obj_t BgL_yz00_57)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 575 */
			if (NULLP(BgL_xz00_56))
				{	/* Ieee/pairlist.scm 576 */
					return BgL_yz00_57;
				}
			else
				{	/* Ieee/pairlist.scm 579 */
					obj_t BgL_arg1358z00_628;

					BgL_arg1358z00_628 = CDR(BgL_xz00_56);
					{
						obj_t BgL_az00_1624;

						obj_t BgL_bz00_1625;

						BgL_az00_1624 = BgL_xz00_56;
						BgL_bz00_1625 = BgL_arg1358z00_628;
					BgL_dozd2loopzd2zd21100zd2_1623:
						if (NULLP(BgL_bz00_1625))
							{	/* Ieee/pairlist.scm 578 */
								SET_CDR(BgL_az00_1624, BgL_yz00_57);
								return BgL_xz00_56;
							}
						else
							{
								obj_t BgL_bz00_3916;

								obj_t BgL_az00_3915;

								BgL_az00_3915 = BgL_bz00_1625;
								BgL_bz00_3916 = CDR(BgL_bz00_1625);
								BgL_bz00_1625 = BgL_bz00_3916;
								BgL_az00_1624 = BgL_az00_3915;
								goto BgL_dozd2loopzd2zd21100zd2_1623;
							}
					}
				}
		}
	}



/* _append-2! */
	obj_t BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2977, obj_t BgL_xz00_2978, obj_t BgL_yz00_2979)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 575 */
			{	/* Ieee/pairlist.scm 576 */
				obj_t BgL_auxz00_3927;

				obj_t BgL_auxz00_3918;

				{	/* Ieee/pairlist.scm 576 */
					bool_t BgL_testz00_3928;

					if (PAIRP(BgL_yz00_2979))
						{	/* Ieee/pairlist.scm 576 */
							BgL_testz00_3928 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 576 */
							BgL_testz00_3928 = NULLP(BgL_yz00_2979);
						}
					if (BgL_testz00_3928)
						{	/* Ieee/pairlist.scm 576 */
							BgL_auxz00_3927 = BgL_yz00_2979;
						}
					else
						{
							obj_t BgL_auxz00_3932;

							BgL_auxz00_3932 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 23111)),
								BGl_string2072z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2979);
							FAILURE(BgL_auxz00_3932, BFALSE, BFALSE);
				}}
				{	/* Ieee/pairlist.scm 576 */
					bool_t BgL_testz00_3919;

					if (PAIRP(BgL_xz00_2978))
						{	/* Ieee/pairlist.scm 576 */
							BgL_testz00_3919 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 576 */
							BgL_testz00_3919 = NULLP(BgL_xz00_2978);
						}
					if (BgL_testz00_3919)
						{	/* Ieee/pairlist.scm 576 */
							BgL_auxz00_3918 = BgL_xz00_2978;
						}
					else
						{
							obj_t BgL_auxz00_3923;

							BgL_auxz00_3923 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 23111)),
								BGl_string2072z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2978);
							FAILURE(BgL_auxz00_3923, BFALSE, BFALSE);
				}}
				return
					BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3918,
					BgL_auxz00_3927);
			}
		}
	}



/* length */
	BGL_EXPORTED_DEF long bgl_list_length(obj_t BgL_listz00_58)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 587 */
			{
				obj_t BgL_lz00_1649;

				long BgL_resz00_1650;

				BgL_lz00_1649 = BgL_listz00_58;
				BgL_resz00_1650 = ((long) 0);
			BgL_loopz00_1648:
				if (NULLP(BgL_lz00_1649))
					{	/* Ieee/pairlist.scm 588 */
						return BgL_resz00_1650;
					}
				else
					{
						long BgL_resz00_3941;

						obj_t BgL_lz00_3939;

						BgL_lz00_3939 = CDR(BgL_lz00_1649);
						BgL_resz00_3941 = (((long) 1) + BgL_resz00_1650);
						BgL_resz00_1650 = BgL_resz00_3941;
						BgL_lz00_1649 = BgL_lz00_3939;
						goto BgL_loopz00_1648;
					}
			}
		}
	}



/* _length */
	obj_t BGl__lengthz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2980,
		obj_t BgL_listz00_2981)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 587 */
			{	/* Ieee/pairlist.scm 588 */
				long BgL_auxz00_3943;

				{	/* Ieee/pairlist.scm 588 */
					obj_t BgL_auxz00_3944;

					{	/* Ieee/pairlist.scm 588 */
						bool_t BgL_testz00_3945;

						if (PAIRP(BgL_listz00_2981))
							{	/* Ieee/pairlist.scm 588 */
								BgL_testz00_3945 = ((bool_t) 1);
							}
						else
							{	/* Ieee/pairlist.scm 588 */
								BgL_testz00_3945 = NULLP(BgL_listz00_2981);
							}
						if (BgL_testz00_3945)
							{	/* Ieee/pairlist.scm 588 */
								BgL_auxz00_3944 = BgL_listz00_2981;
							}
						else
							{
								obj_t BgL_auxz00_3949;

								BgL_auxz00_3949 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
									BINT(((long) 23496)),
									BGl_string2073z00zz__r4_pairs_and_lists_6_3z00,
									BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
									BgL_listz00_2981);
								FAILURE(BgL_auxz00_3949, BFALSE, BFALSE);
					}}
					BgL_auxz00_3943 = bgl_list_length(BgL_auxz00_3944);
				}
				return BINT(BgL_auxz00_3943);
			}
		}
	}



/* reverse */
	BGL_EXPORTED_DEF obj_t bgl_reverse(obj_t BgL_lz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 599 */
			{
				obj_t BgL_lz00_1678;

				obj_t BgL_accz00_1679;

				BgL_lz00_1678 = BgL_lz00_59;
				BgL_accz00_1679 = BNIL;
			BgL_loopz00_1677:
				if (NULLP(BgL_lz00_1678))
					{	/* Ieee/pairlist.scm 600 */
						return BgL_accz00_1679;
					}
				else
					{	/* Ieee/pairlist.scm 600 */
						obj_t BgL_arg1374z00_1685;

						obj_t BgL_arg1375z00_1686;

						BgL_arg1374z00_1685 = CDR(BgL_lz00_1678);
						BgL_arg1375z00_1686 =
							MAKE_PAIR(CAR(BgL_lz00_1678), BgL_accz00_1679);
						{
							obj_t BgL_accz00_3961;

							obj_t BgL_lz00_3960;

							BgL_lz00_3960 = BgL_arg1374z00_1685;
							BgL_accz00_3961 = BgL_arg1375z00_1686;
							BgL_accz00_1679 = BgL_accz00_3961;
							BgL_lz00_1678 = BgL_lz00_3960;
							goto BgL_loopz00_1677;
						}
					}
			}
		}
	}



/* _reverse */
	obj_t BGl__reversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2982,
		obj_t BgL_lz00_2983)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 599 */
			{	/* Ieee/pairlist.scm 600 */
				obj_t BgL_auxz00_3962;

				{	/* Ieee/pairlist.scm 600 */
					bool_t BgL_testz00_3963;

					if (PAIRP(BgL_lz00_2983))
						{	/* Ieee/pairlist.scm 600 */
							BgL_testz00_3963 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 600 */
							BgL_testz00_3963 = NULLP(BgL_lz00_2983);
						}
					if (BgL_testz00_3963)
						{	/* Ieee/pairlist.scm 600 */
							BgL_auxz00_3962 = BgL_lz00_2983;
						}
					else
						{
							obj_t BgL_auxz00_3967;

							BgL_auxz00_3967 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 23866)),
								BGl_string2074z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2983);
							FAILURE(BgL_auxz00_3967, BFALSE, BFALSE);
				}}
				return bgl_reverse(BgL_auxz00_3962);
			}
		}
	}



/* ereverse */
	BGL_EXPORTED_DEF obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_60)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 609 */
			{
				obj_t BgL_lz00_655;

				obj_t BgL_accz00_656;

				BgL_lz00_655 = BgL_lz00_60;
				BgL_accz00_656 = BNIL;
			BgL_zc3anonymousza31377ze3z83_657:
				if (NULLP(BgL_lz00_655))
					{	/* Ieee/pairlist.scm 612 */
						return BgL_accz00_656;
					}
				else
					{	/* Ieee/pairlist.scm 614 */
						obj_t BgL_arg1379z00_659;

						obj_t BgL_arg1380z00_660;

						BgL_arg1379z00_659 = CDR(BgL_lz00_655);
						if (EXTENDED_PAIRP(BgL_lz00_655))
							{	/* Ieee/pairlist.scm 616 */
								obj_t BgL_arg1382z00_662;

								obj_t BgL_arg1383z00_663;

								BgL_arg1382z00_662 = CAR(BgL_lz00_655);
								BgL_arg1383z00_663 = CER(BgL_lz00_655);
								{	/* Ieee/pairlist.scm 616 */
									obj_t BgL_res1843z00_1715;

									BgL_res1843z00_1715 =
										MAKE_EXTENDED_PAIR(BgL_arg1382z00_662, BgL_accz00_656,
										BgL_arg1383z00_663);
									BgL_arg1380z00_660 = BgL_res1843z00_1715;
								}
							}
						else
							{	/* Ieee/pairlist.scm 615 */
								BgL_arg1380z00_660 =
									MAKE_PAIR(CAR(BgL_lz00_655), BgL_accz00_656);
							}
						{
							obj_t BgL_accz00_3983;

							obj_t BgL_lz00_3982;

							BgL_lz00_3982 = BgL_arg1379z00_659;
							BgL_accz00_3983 = BgL_arg1380z00_660;
							BgL_accz00_656 = BgL_accz00_3983;
							BgL_lz00_655 = BgL_lz00_3982;
							goto BgL_zc3anonymousza31377ze3z83_657;
						}
					}
			}
		}
	}



/* _ereverse */
	obj_t BGl__ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2984,
		obj_t BgL_lz00_2985)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 609 */
			{	/* Ieee/pairlist.scm 612 */
				obj_t BgL_auxz00_3984;

				{	/* Ieee/pairlist.scm 612 */
					bool_t BgL_testz00_3985;

					if (PAIRP(BgL_lz00_2985))
						{	/* Ieee/pairlist.scm 612 */
							BgL_testz00_3985 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 612 */
							BgL_testz00_3985 = NULLP(BgL_lz00_2985);
						}
					if (BgL_testz00_3985)
						{	/* Ieee/pairlist.scm 612 */
							BgL_auxz00_3984 = BgL_lz00_2985;
						}
					else
						{
							obj_t BgL_auxz00_3989;

							BgL_auxz00_3989 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 24260)),
								BGl_string2075z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2985);
							FAILURE(BgL_auxz00_3989, BFALSE, BFALSE);
				}}
				return BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3984);
			}
		}
	}



/* take */
	BGL_EXPORTED_DEF obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_61, long BgL_kz00_62)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 622 */
			{
				obj_t BgL_listz00_1718;

				long BgL_kz00_1719;

				obj_t BgL_resz00_1720;

				BgL_listz00_1718 = BgL_listz00_61;
				BgL_kz00_1719 = BgL_kz00_62;
				BgL_resz00_1720 = BNIL;
			BgL_loopz00_1717:
				if ((BgL_kz00_1719 == ((long) 0)))
					{	/* Ieee/pairlist.scm 623 */
						return bgl_reverse_bang(BgL_resz00_1720);
					}
				else
					{	/* Ieee/pairlist.scm 623 */
						obj_t BgL_arg1387z00_1727;

						long BgL_arg1388z00_1728;

						obj_t BgL_arg1389z00_1729;

						BgL_arg1387z00_1727 = CDR(BgL_listz00_1718);
						BgL_arg1388z00_1728 = (BgL_kz00_1719 - ((long) 1));
						BgL_arg1389z00_1729 =
							MAKE_PAIR(CAR(BgL_listz00_1718), BgL_resz00_1720);
						{
							obj_t BgL_resz00_4003;

							long BgL_kz00_4002;

							obj_t BgL_listz00_4001;

							BgL_listz00_4001 = BgL_arg1387z00_1727;
							BgL_kz00_4002 = BgL_arg1388z00_1728;
							BgL_resz00_4003 = BgL_arg1389z00_1729;
							BgL_resz00_1720 = BgL_resz00_4003;
							BgL_kz00_1719 = BgL_kz00_4002;
							BgL_listz00_1718 = BgL_listz00_4001;
							goto BgL_loopz00_1717;
						}
					}
			}
		}
	}



/* _take */
	obj_t BGl__takez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2986,
		obj_t BgL_listz00_2987, obj_t BgL_kz00_2988)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 622 */
			{	/* Ieee/pairlist.scm 623 */
				long BgL_auxz00_4013;

				obj_t BgL_auxz00_4004;

				{	/* Ieee/pairlist.scm 623 */
					obj_t BgL_auxz00_4014;

					if (INTEGERP(BgL_kz00_2988))
						{	/* Ieee/pairlist.scm 623 */
							BgL_auxz00_4014 = BgL_kz00_2988;
						}
					else
						{
							obj_t BgL_auxz00_4017;

							BgL_auxz00_4017 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 24627)),
								BGl_string2076z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2077z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2988);
							FAILURE(BgL_auxz00_4017, BFALSE, BFALSE);
						}
					BgL_auxz00_4013 = (long) CINT(BgL_auxz00_4014);
				}
				{	/* Ieee/pairlist.scm 623 */
					bool_t BgL_testz00_4005;

					if (PAIRP(BgL_listz00_2987))
						{	/* Ieee/pairlist.scm 623 */
							BgL_testz00_4005 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 623 */
							BgL_testz00_4005 = NULLP(BgL_listz00_2987);
						}
					if (BgL_testz00_4005)
						{	/* Ieee/pairlist.scm 623 */
							BgL_auxz00_4004 = BgL_listz00_2987;
						}
					else
						{
							obj_t BgL_auxz00_4009;

							BgL_auxz00_4009 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 24627)),
								BGl_string2076z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2987);
							FAILURE(BgL_auxz00_4009, BFALSE, BFALSE);
				}}
				return
					BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4004,
					BgL_auxz00_4013);
			}
		}
	}



/* drop */
	BGL_EXPORTED_DEF obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_63, long BgL_kz00_64)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 633 */
		BGl_dropz00zz__r4_pairs_and_lists_6_3z00:
			if ((BgL_kz00_64 == ((long) 0)))
				{	/* Ieee/pairlist.scm 634 */
					return BgL_listz00_63;
				}
			else
				{	/* Ieee/pairlist.scm 634 */
					obj_t BgL_listz00_1774;

					long BgL_kz00_1775;

					BgL_listz00_1774 = CDR(BgL_listz00_63);
					BgL_kz00_1775 = (BgL_kz00_64 - ((long) 1));
					if ((BgL_kz00_1775 == ((long) 0)))
						{	/* Ieee/pairlist.scm 634 */
							return BgL_listz00_1774;
						}
					else
						{
							long BgL_kz00_4031;

							obj_t BgL_listz00_4029;

							BgL_listz00_4029 = CDR(BgL_listz00_1774);
							BgL_kz00_4031 = (BgL_kz00_1775 - ((long) 1));
							BgL_kz00_64 = BgL_kz00_4031;
							BgL_listz00_63 = BgL_listz00_4029;
							goto BGl_dropz00zz__r4_pairs_and_lists_6_3z00;
						}
				}
		}
	}



/* _drop */
	obj_t BGl__dropz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2989,
		obj_t BgL_listz00_2990, obj_t BgL_kz00_2991)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 633 */
			{	/* Ieee/pairlist.scm 634 */
				long BgL_auxz00_4042;

				obj_t BgL_auxz00_4033;

				{	/* Ieee/pairlist.scm 634 */
					obj_t BgL_auxz00_4043;

					if (INTEGERP(BgL_kz00_2991))
						{	/* Ieee/pairlist.scm 634 */
							BgL_auxz00_4043 = BgL_kz00_2991;
						}
					else
						{
							obj_t BgL_auxz00_4046;

							BgL_auxz00_4046 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25025)),
								BGl_string2078z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2077z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2991);
							FAILURE(BgL_auxz00_4046, BFALSE, BFALSE);
						}
					BgL_auxz00_4042 = (long) CINT(BgL_auxz00_4043);
				}
				{	/* Ieee/pairlist.scm 634 */
					bool_t BgL_testz00_4034;

					if (PAIRP(BgL_listz00_2990))
						{	/* Ieee/pairlist.scm 634 */
							BgL_testz00_4034 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 634 */
							BgL_testz00_4034 = NULLP(BgL_listz00_2990);
						}
					if (BgL_testz00_4034)
						{	/* Ieee/pairlist.scm 634 */
							BgL_auxz00_4033 = BgL_listz00_2990;
						}
					else
						{
							obj_t BgL_auxz00_4038;

							BgL_auxz00_4038 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25025)),
								BGl_string2078z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2990);
							FAILURE(BgL_auxz00_4038, BFALSE, BFALSE);
				}}
				return
					BGl_dropz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4033,
					BgL_auxz00_4042);
			}
		}
	}



/* list-tail */
	BGL_EXPORTED_DEF obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_65, long BgL_kz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 641 */
			{
				obj_t BgL_listz00_1787;

				long BgL_kz00_1788;

				BgL_listz00_1787 = BgL_listz00_65;
				BgL_kz00_1788 = BgL_kz00_66;
			BgL_dropz00_1786:
				if ((BgL_kz00_1788 == ((long) 0)))
					{	/* Ieee/pairlist.scm 642 */
						return BgL_listz00_1787;
					}
				else
					{
						long BgL_kz00_4056;

						obj_t BgL_listz00_4054;

						BgL_listz00_4054 = CDR(BgL_listz00_1787);
						BgL_kz00_4056 = (BgL_kz00_1788 - ((long) 1));
						BgL_kz00_1788 = BgL_kz00_4056;
						BgL_listz00_1787 = BgL_listz00_4054;
						goto BgL_dropz00_1786;
					}
			}
		}
	}



/* _list-tail */
	obj_t BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2992,
		obj_t BgL_listz00_2993, obj_t BgL_kz00_2994)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 641 */
			{	/* Ieee/pairlist.scm 642 */
				long BgL_auxz00_4067;

				obj_t BgL_auxz00_4058;

				{	/* Ieee/pairlist.scm 642 */
					obj_t BgL_auxz00_4068;

					if (INTEGERP(BgL_kz00_2994))
						{	/* Ieee/pairlist.scm 642 */
							BgL_auxz00_4068 = BgL_kz00_2994;
						}
					else
						{
							obj_t BgL_auxz00_4071;

							BgL_auxz00_4071 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25343)),
								BGl_string2079z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2077z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2994);
							FAILURE(BgL_auxz00_4071, BFALSE, BFALSE);
						}
					BgL_auxz00_4067 = (long) CINT(BgL_auxz00_4068);
				}
				{	/* Ieee/pairlist.scm 642 */
					bool_t BgL_testz00_4059;

					if (PAIRP(BgL_listz00_2993))
						{	/* Ieee/pairlist.scm 642 */
							BgL_testz00_4059 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 642 */
							BgL_testz00_4059 = NULLP(BgL_listz00_2993);
						}
					if (BgL_testz00_4059)
						{	/* Ieee/pairlist.scm 642 */
							BgL_auxz00_4058 = BgL_listz00_2993;
						}
					else
						{
							obj_t BgL_auxz00_4063;

							BgL_auxz00_4063 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25343)),
								BGl_string2079z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2993);
							FAILURE(BgL_auxz00_4063, BFALSE, BFALSE);
				}}
				return
					BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4058,
					BgL_auxz00_4067);
			}
		}
	}



/* list-ref */
	BGL_EXPORTED_DEF obj_t bgl_list_ref(obj_t BgL_listz00_67, long BgL_kz00_68)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 647 */
		bgl_list_ref:
			if ((BgL_kz00_68 == ((long) 0)))
				{	/* Ieee/pairlist.scm 648 */
					return CAR(BgL_listz00_67);
				}
			else
				{	/* Ieee/pairlist.scm 648 */
					obj_t BgL_listz00_1811;

					long BgL_kz00_1812;

					BgL_listz00_1811 = CDR(BgL_listz00_67);
					BgL_kz00_1812 = (BgL_kz00_68 - ((long) 1));
					if ((BgL_kz00_1812 == ((long) 0)))
						{	/* Ieee/pairlist.scm 648 */
							return CAR(BgL_listz00_1811);
						}
					else
						{
							long BgL_kz00_4087;

							obj_t BgL_listz00_4085;

							BgL_listz00_4085 = CDR(BgL_listz00_1811);
							BgL_kz00_4087 = (BgL_kz00_1812 - ((long) 1));
							BgL_kz00_68 = BgL_kz00_4087;
							BgL_listz00_67 = BgL_listz00_4085;
							goto bgl_list_ref;
						}
				}
		}
	}



/* _list-ref */
	obj_t BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2995,
		obj_t BgL_listz00_2996, obj_t BgL_kz00_2997)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 647 */
			{	/* Ieee/pairlist.scm 648 */
				long BgL_auxz00_4098;

				obj_t BgL_auxz00_4089;

				{	/* Ieee/pairlist.scm 648 */
					obj_t BgL_auxz00_4099;

					if (INTEGERP(BgL_kz00_2997))
						{	/* Ieee/pairlist.scm 648 */
							BgL_auxz00_4099 = BgL_kz00_2997;
						}
					else
						{
							obj_t BgL_auxz00_4102;

							BgL_auxz00_4102 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25610)),
								BGl_string2080z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2077z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2997);
							FAILURE(BgL_auxz00_4102, BFALSE, BFALSE);
						}
					BgL_auxz00_4098 = (long) CINT(BgL_auxz00_4099);
				}
				{	/* Ieee/pairlist.scm 648 */
					bool_t BgL_testz00_4090;

					if (PAIRP(BgL_listz00_2996))
						{	/* Ieee/pairlist.scm 648 */
							BgL_testz00_4090 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 648 */
							BgL_testz00_4090 = NULLP(BgL_listz00_2996);
						}
					if (BgL_testz00_4090)
						{	/* Ieee/pairlist.scm 648 */
							BgL_auxz00_4089 = BgL_listz00_2996;
						}
					else
						{
							obj_t BgL_auxz00_4094;

							BgL_auxz00_4094 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25610)),
								BGl_string2080z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2996);
							FAILURE(BgL_auxz00_4094, BFALSE, BFALSE);
				}}
				return bgl_list_ref(BgL_auxz00_4089, BgL_auxz00_4098);
			}
		}
	}



/* list-set! */
	BGL_EXPORTED_DEF obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_69, long BgL_kz00_70, obj_t BgL_valz00_71)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 655 */
		BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00:
			if ((BgL_kz00_70 == ((long) 0)))
				{	/* Ieee/pairlist.scm 656 */
					return SET_CAR(BgL_listz00_69, BgL_valz00_71);
				}
			else
				{	/* Ieee/pairlist.scm 656 */
					obj_t BgL_arg1398z00_1824;

					long BgL_arg1399z00_1825;

					BgL_arg1398z00_1824 = CDR(BgL_listz00_69);
					BgL_arg1399z00_1825 = (BgL_kz00_70 - ((long) 1));
					{	/* Ieee/pairlist.scm 656 */
						obj_t BgL_listz00_1834;

						BgL_listz00_1834 = BgL_arg1398z00_1824;
						if ((BgL_arg1399z00_1825 == ((long) 0)))
							{	/* Ieee/pairlist.scm 656 */
								return SET_CAR(BgL_listz00_1834, BgL_valz00_71);
							}
						else
							{
								long BgL_kz00_4118;

								obj_t BgL_listz00_4116;

								BgL_listz00_4116 = CDR(BgL_listz00_1834);
								BgL_kz00_4118 = (BgL_arg1399z00_1825 - ((long) 1));
								BgL_kz00_70 = BgL_kz00_4118;
								BgL_listz00_69 = BgL_listz00_4116;
								goto BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00;
							}
					}
				}
		}
	}



/* _list-set! */
	obj_t BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2998, obj_t BgL_listz00_2999, obj_t BgL_kz00_3000,
		obj_t BgL_valz00_3001)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 655 */
			{	/* Ieee/pairlist.scm 656 */
				long BgL_auxz00_4129;

				obj_t BgL_auxz00_4120;

				{	/* Ieee/pairlist.scm 656 */
					obj_t BgL_auxz00_4130;

					if (INTEGERP(BgL_kz00_3000))
						{	/* Ieee/pairlist.scm 656 */
							BgL_auxz00_4130 = BgL_kz00_3000;
						}
					else
						{
							obj_t BgL_auxz00_4133;

							BgL_auxz00_4133 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25942)),
								BGl_string2081z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2077z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_3000);
							FAILURE(BgL_auxz00_4133, BFALSE, BFALSE);
						}
					BgL_auxz00_4129 = (long) CINT(BgL_auxz00_4130);
				}
				{	/* Ieee/pairlist.scm 656 */
					bool_t BgL_testz00_4121;

					if (PAIRP(BgL_listz00_2999))
						{	/* Ieee/pairlist.scm 656 */
							BgL_testz00_4121 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 656 */
							BgL_testz00_4121 = NULLP(BgL_listz00_2999);
						}
					if (BgL_testz00_4121)
						{	/* Ieee/pairlist.scm 656 */
							BgL_auxz00_4120 = BgL_listz00_2999;
						}
					else
						{
							obj_t BgL_auxz00_4125;

							BgL_auxz00_4125 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25942)),
								BGl_string2081z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2999);
							FAILURE(BgL_auxz00_4125, BFALSE, BFALSE);
				}}
				return
					BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4120,
					BgL_auxz00_4129, BgL_valz00_3001);
			}
		}
	}



/* last-pair */
	BGL_EXPORTED_DEF obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_72)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 663 */
		BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00:
			{	/* Ieee/pairlist.scm 664 */
				bool_t BgL_testz00_4139;

				{	/* Ieee/pairlist.scm 664 */
					obj_t BgL_auxz00_4140;

					BgL_auxz00_4140 = CDR(BgL_xz00_72);
					BgL_testz00_4139 = PAIRP(BgL_auxz00_4140);
				}
				if (BgL_testz00_4139)
					{	/* Ieee/pairlist.scm 664 */
						obj_t BgL_xz00_1854;

						BgL_xz00_1854 = CDR(BgL_xz00_72);
						{	/* Ieee/pairlist.scm 664 */
							bool_t BgL_testz00_4144;

							{	/* Ieee/pairlist.scm 664 */
								obj_t BgL_auxz00_4145;

								BgL_auxz00_4145 = CDR(BgL_xz00_1854);
								BgL_testz00_4144 = PAIRP(BgL_auxz00_4145);
							}
							if (BgL_testz00_4144)
								{
									obj_t BgL_xz00_4148;

									BgL_xz00_4148 = CDR(BgL_xz00_1854);
									BgL_xz00_72 = BgL_xz00_4148;
									goto BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00;
								}
							else
								{	/* Ieee/pairlist.scm 664 */
									return BgL_xz00_1854;
								}
						}
					}
				else
					{	/* Ieee/pairlist.scm 664 */
						return BgL_xz00_72;
					}
			}
		}
	}



/* _last-pair */
	obj_t BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3002,
		obj_t BgL_xz00_3003)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 663 */
			{	/* Ieee/pairlist.scm 664 */
				obj_t BgL_auxz00_4150;

				if (PAIRP(BgL_xz00_3003))
					{	/* Ieee/pairlist.scm 664 */
						BgL_auxz00_4150 = BgL_xz00_3003;
					}
				else
					{
						obj_t BgL_auxz00_4153;

						BgL_auxz00_4153 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 26290)),
							BGl_string2082z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2034z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_3003);
						FAILURE(BgL_auxz00_4153, BFALSE, BFALSE);
					}
				return BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4150);
			}
		}
	}



/* memq */
	BGL_EXPORTED_DEF obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_73, obj_t BgL_listz00_74)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 671 */
			{
				obj_t BgL_listz00_1863;

				BgL_listz00_1863 = BgL_listz00_74;
			BgL_loopz00_1862:
				if (PAIRP(BgL_listz00_1863))
					{	/* Ieee/pairlist.scm 673 */
						if ((CAR(BgL_listz00_1863) == BgL_objz00_73))
							{	/* Ieee/pairlist.scm 673 */
								return BgL_listz00_1863;
							}
						else
							{
								obj_t BgL_listz00_4163;

								BgL_listz00_4163 = CDR(BgL_listz00_1863);
								BgL_listz00_1863 = BgL_listz00_4163;
								goto BgL_loopz00_1862;
							}
					}
				else
					{	/* Ieee/pairlist.scm 673 */
						return BFALSE;
					}
			}
		}
	}



/* _memq */
	obj_t BGl__memqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3004,
		obj_t BgL_objz00_3005, obj_t BgL_listz00_3006)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 671 */
			{	/* Ieee/pairlist.scm 673 */
				obj_t BgL_auxz00_4165;

				{	/* Ieee/pairlist.scm 673 */
					bool_t BgL_testz00_4166;

					if (PAIRP(BgL_listz00_3006))
						{	/* Ieee/pairlist.scm 673 */
							BgL_testz00_4166 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 673 */
							BgL_testz00_4166 = NULLP(BgL_listz00_3006);
						}
					if (BgL_testz00_4166)
						{	/* Ieee/pairlist.scm 673 */
							BgL_auxz00_4165 = BgL_listz00_3006;
						}
					else
						{
							obj_t BgL_auxz00_4170;

							BgL_auxz00_4170 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 26617)),
								BGl_string2083z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3006);
							FAILURE(BgL_auxz00_4170, BFALSE, BFALSE);
				}}
				return
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3005,
					BgL_auxz00_4165);
			}
		}
	}



/* memv */
	BGL_EXPORTED_DEF obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_75, obj_t BgL_listz00_76)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 682 */
			{
				obj_t BgL_listz00_1872;

				BgL_listz00_1872 = BgL_listz00_76;
			BgL_loopz00_1871:
				if (PAIRP(BgL_listz00_1872))
					{	/* Ieee/pairlist.scm 684 */
						if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_listz00_1872),
								BgL_objz00_75))
							{	/* Ieee/pairlist.scm 684 */
								return BgL_listz00_1872;
							}
						else
							{
								obj_t BgL_listz00_4180;

								BgL_listz00_4180 = CDR(BgL_listz00_1872);
								BgL_listz00_1872 = BgL_listz00_4180;
								goto BgL_loopz00_1871;
							}
					}
				else
					{	/* Ieee/pairlist.scm 684 */
						return BFALSE;
					}
			}
		}
	}



/* _memv */
	obj_t BGl__memvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3007,
		obj_t BgL_objz00_3008, obj_t BgL_listz00_3009)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 682 */
			{	/* Ieee/pairlist.scm 684 */
				obj_t BgL_auxz00_4182;

				{	/* Ieee/pairlist.scm 684 */
					bool_t BgL_testz00_4183;

					if (PAIRP(BgL_listz00_3009))
						{	/* Ieee/pairlist.scm 684 */
							BgL_testz00_4183 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 684 */
							BgL_testz00_4183 = NULLP(BgL_listz00_3009);
						}
					if (BgL_testz00_4183)
						{	/* Ieee/pairlist.scm 684 */
							BgL_auxz00_4182 = BgL_listz00_3009;
						}
					else
						{
							obj_t BgL_auxz00_4187;

							BgL_auxz00_4187 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 26989)),
								BGl_string2084z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3009);
							FAILURE(BgL_auxz00_4187, BFALSE, BFALSE);
				}}
				return
					BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3008,
					BgL_auxz00_4182);
			}
		}
	}



/* member */
	BGL_EXPORTED_DEF obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_77, obj_t BgL_listz00_78)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 693 */
			{
				obj_t BgL_listz00_1881;

				BgL_listz00_1881 = BgL_listz00_78;
			BgL_loopz00_1880:
				if (PAIRP(BgL_listz00_1881))
					{	/* Ieee/pairlist.scm 696 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_objz00_77,
								CAR(BgL_listz00_1881)))
							{	/* Ieee/pairlist.scm 696 */
								return BgL_listz00_1881;
							}
						else
							{
								obj_t BgL_listz00_4197;

								BgL_listz00_4197 = CDR(BgL_listz00_1881);
								BgL_listz00_1881 = BgL_listz00_4197;
								goto BgL_loopz00_1880;
							}
					}
				else
					{	/* Ieee/pairlist.scm 696 */
						return BFALSE;
					}
			}
		}
	}



/* _member */
	obj_t BGl__memberz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3010,
		obj_t BgL_objz00_3011, obj_t BgL_listz00_3012)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 693 */
			{	/* Ieee/pairlist.scm 696 */
				obj_t BgL_auxz00_4199;

				{	/* Ieee/pairlist.scm 696 */
					bool_t BgL_testz00_4200;

					if (PAIRP(BgL_listz00_3012))
						{	/* Ieee/pairlist.scm 696 */
							BgL_testz00_4200 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 696 */
							BgL_testz00_4200 = NULLP(BgL_listz00_3012);
						}
					if (BgL_testz00_4200)
						{	/* Ieee/pairlist.scm 696 */
							BgL_auxz00_4199 = BgL_listz00_3012;
						}
					else
						{
							obj_t BgL_auxz00_4204;

							BgL_auxz00_4204 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 27373)),
								BGl_string2085z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3012);
							FAILURE(BgL_auxz00_4204, BFALSE, BFALSE);
				}}
				return
					BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3011,
					BgL_auxz00_4199);
			}
		}
	}



/* assq */
	BGL_EXPORTED_DEF obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_79, obj_t BgL_alistz00_80)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 703 */
			{
				obj_t BgL_alistz00_715;

				BgL_alistz00_715 = BgL_alistz00_80;
			BgL_zc3anonymousza31418ze3z83_716:
				if (PAIRP(BgL_alistz00_715))
					{	/* Ieee/pairlist.scm 705 */
						if ((CAR(CAR(BgL_alistz00_715)) == BgL_objz00_79))
							{	/* Ieee/pairlist.scm 706 */
								return CAR(BgL_alistz00_715);
							}
						else
							{
								obj_t BgL_alistz00_4216;

								BgL_alistz00_4216 = CDR(BgL_alistz00_715);
								BgL_alistz00_715 = BgL_alistz00_4216;
								goto BgL_zc3anonymousza31418ze3z83_716;
							}
					}
				else
					{	/* Ieee/pairlist.scm 705 */
						return BFALSE;
					}
			}
		}
	}



/* _assq */
	obj_t BGl__assqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3013,
		obj_t BgL_objz00_3014, obj_t BgL_alistz00_3015)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 703 */
			{	/* Ieee/pairlist.scm 705 */
				obj_t BgL_auxz00_4218;

				{	/* Ieee/pairlist.scm 705 */
					bool_t BgL_testz00_4219;

					if (PAIRP(BgL_alistz00_3015))
						{	/* Ieee/pairlist.scm 705 */
							BgL_testz00_4219 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 705 */
							BgL_testz00_4219 = NULLP(BgL_alistz00_3015);
						}
					if (BgL_testz00_4219)
						{	/* Ieee/pairlist.scm 705 */
							BgL_auxz00_4218 = BgL_alistz00_3015;
						}
					else
						{
							obj_t BgL_auxz00_4223;

							BgL_auxz00_4223 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 27743)),
								BGl_string2086z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_alistz00_3015);
							FAILURE(BgL_auxz00_4223, BFALSE, BFALSE);
				}}
				return
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3014,
					BgL_auxz00_4218);
			}
		}
	}



/* assv */
	BGL_EXPORTED_DEF obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_81, obj_t BgL_alistz00_82)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 714 */
			{
				obj_t BgL_alistz00_724;

				BgL_alistz00_724 = BgL_alistz00_82;
			BgL_zc3anonymousza31424ze3z83_725:
				if (PAIRP(BgL_alistz00_724))
					{	/* Ieee/pairlist.scm 716 */
						if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(CAR(CAR
									(BgL_alistz00_724)), BgL_objz00_81))
							{	/* Ieee/pairlist.scm 717 */
								return CAR(BgL_alistz00_724);
							}
						else
							{
								obj_t BgL_alistz00_4235;

								BgL_alistz00_4235 = CDR(BgL_alistz00_724);
								BgL_alistz00_724 = BgL_alistz00_4235;
								goto BgL_zc3anonymousza31424ze3z83_725;
							}
					}
				else
					{	/* Ieee/pairlist.scm 716 */
						return BFALSE;
					}
			}
		}
	}



/* _assv */
	obj_t BGl__assvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3016,
		obj_t BgL_objz00_3017, obj_t BgL_alistz00_3018)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 714 */
			{	/* Ieee/pairlist.scm 716 */
				obj_t BgL_auxz00_4237;

				{	/* Ieee/pairlist.scm 716 */
					bool_t BgL_testz00_4238;

					if (PAIRP(BgL_alistz00_3018))
						{	/* Ieee/pairlist.scm 716 */
							BgL_testz00_4238 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 716 */
							BgL_testz00_4238 = NULLP(BgL_alistz00_3018);
						}
					if (BgL_testz00_4238)
						{	/* Ieee/pairlist.scm 716 */
							BgL_auxz00_4237 = BgL_alistz00_3018;
						}
					else
						{
							obj_t BgL_auxz00_4242;

							BgL_auxz00_4242 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 28162)),
								BGl_string2087z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_alistz00_3018);
							FAILURE(BgL_auxz00_4242, BFALSE, BFALSE);
				}}
				return
					BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3017,
					BgL_auxz00_4237);
			}
		}
	}



/* assoc */
	BGL_EXPORTED_DEF obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_83, obj_t BgL_alistz00_84)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 725 */
			{
				obj_t BgL_alistz00_733;

				BgL_alistz00_733 = BgL_alistz00_84;
			BgL_zc3anonymousza31430ze3z83_734:
				if (PAIRP(BgL_alistz00_733))
					{	/* Ieee/pairlist.scm 727 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(CAR
									(BgL_alistz00_733)), BgL_objz00_83))
							{	/* Ieee/pairlist.scm 728 */
								return CAR(BgL_alistz00_733);
							}
						else
							{
								obj_t BgL_alistz00_4254;

								BgL_alistz00_4254 = CDR(BgL_alistz00_733);
								BgL_alistz00_733 = BgL_alistz00_4254;
								goto BgL_zc3anonymousza31430ze3z83_734;
							}
					}
				else
					{	/* Ieee/pairlist.scm 727 */
						return BFALSE;
					}
			}
		}
	}



/* _assoc */
	obj_t BGl__assocz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3019,
		obj_t BgL_objz00_3020, obj_t BgL_alistz00_3021)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 725 */
			{	/* Ieee/pairlist.scm 727 */
				obj_t BgL_auxz00_4256;

				{	/* Ieee/pairlist.scm 727 */
					bool_t BgL_testz00_4257;

					if (PAIRP(BgL_alistz00_3021))
						{	/* Ieee/pairlist.scm 727 */
							BgL_testz00_4257 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 727 */
							BgL_testz00_4257 = NULLP(BgL_alistz00_3021);
						}
					if (BgL_testz00_4257)
						{	/* Ieee/pairlist.scm 727 */
							BgL_auxz00_4256 = BgL_alistz00_3021;
						}
					else
						{
							obj_t BgL_auxz00_4261;

							BgL_auxz00_4261 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 28576)),
								BGl_string2088z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_alistz00_3021);
							FAILURE(BgL_auxz00_4261, BFALSE, BFALSE);
				}}
				return
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3020,
					BgL_auxz00_4256);
			}
		}
	}



/* remq */
	BGL_EXPORTED_DEF obj_t bgl_remq(obj_t BgL_xz00_85, obj_t BgL_yz00_86)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 739 */
		bgl_remq:
			if (NULLP(BgL_yz00_86))
				{	/* Ieee/pairlist.scm 741 */
					return BgL_yz00_86;
				}
			else
				{	/* Ieee/pairlist.scm 741 */
					if ((BgL_xz00_85 == CAR(BgL_yz00_86)))
						{
							obj_t BgL_yz00_4271;

							BgL_yz00_4271 = CDR(BgL_yz00_86);
							BgL_yz00_86 = BgL_yz00_4271;
							goto bgl_remq;
						}
					else
						{	/* Ieee/pairlist.scm 742 */
							return
								MAKE_PAIR(CAR(BgL_yz00_86),
								bgl_remq(BgL_xz00_85, CDR(BgL_yz00_86)));
						}
				}
		}
	}



/* _remq */
	obj_t BGl__remqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3022,
		obj_t BgL_xz00_3023, obj_t BgL_yz00_3024)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 739 */
			{	/* Ieee/pairlist.scm 741 */
				obj_t BgL_auxz00_4277;

				{	/* Ieee/pairlist.scm 741 */
					bool_t BgL_testz00_4278;

					if (PAIRP(BgL_yz00_3024))
						{	/* Ieee/pairlist.scm 741 */
							BgL_testz00_4278 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 741 */
							BgL_testz00_4278 = NULLP(BgL_yz00_3024);
						}
					if (BgL_testz00_4278)
						{	/* Ieee/pairlist.scm 741 */
							BgL_auxz00_4277 = BgL_yz00_3024;
						}
					else
						{
							obj_t BgL_auxz00_4282;

							BgL_auxz00_4282 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 29188)),
								BGl_string2089z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_3024);
							FAILURE(BgL_auxz00_4282, BFALSE, BFALSE);
				}}
				return bgl_remq(BgL_xz00_3023, BgL_auxz00_4277);
			}
		}
	}



/* remq! */
	BGL_EXPORTED_DEF obj_t bgl_remq_bang(obj_t BgL_xz00_87, obj_t BgL_yz00_88)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 748 */
		bgl_remq_bang:
			if (NULLP(BgL_yz00_88))
				{	/* Ieee/pairlist.scm 750 */
					return BgL_yz00_88;
				}
			else
				{	/* Ieee/pairlist.scm 750 */
					if ((BgL_xz00_87 == CAR(BgL_yz00_88)))
						{
							obj_t BgL_yz00_4292;

							BgL_yz00_4292 = CDR(BgL_yz00_88);
							BgL_yz00_88 = BgL_yz00_4292;
							goto bgl_remq_bang;
						}
					else
						{
							obj_t BgL_prevz00_752;

							BgL_prevz00_752 = BgL_yz00_88;
						BgL_zc3anonymousza31446ze3z83_753:
							if (NULLP(CDR(BgL_prevz00_752)))
								{	/* Ieee/pairlist.scm 753 */
									return BgL_yz00_88;
								}
							else
								{	/* Ieee/pairlist.scm 755 */
									bool_t BgL_testz00_4297;

									{	/* Ieee/pairlist.scm 755 */
										obj_t BgL_auxz00_4298;

										{	/* Ieee/pairlist.scm 755 */
											obj_t BgL_pairz00_1914;

											BgL_pairz00_1914 = BgL_prevz00_752;
											BgL_auxz00_4298 = CAR(CDR(BgL_pairz00_1914));
										}
										BgL_testz00_4297 = (BgL_auxz00_4298 == BgL_xz00_87);
									}
									if (BgL_testz00_4297)
										{	/* Ieee/pairlist.scm 755 */
											{	/* Ieee/pairlist.scm 756 */
												obj_t BgL_arg1449z00_756;

												{	/* Ieee/pairlist.scm 756 */
													obj_t BgL_pairz00_1918;

													BgL_pairz00_1918 = BgL_prevz00_752;
													BgL_arg1449z00_756 = CDR(CDR(BgL_pairz00_1918));
												}
												SET_CDR(BgL_prevz00_752, BgL_arg1449z00_756);
											}
											{

												goto BgL_zc3anonymousza31446ze3z83_753;
											}
										}
									else
										{
											obj_t BgL_prevz00_4305;

											BgL_prevz00_4305 = CDR(BgL_prevz00_752);
											BgL_prevz00_752 = BgL_prevz00_4305;
											goto BgL_zc3anonymousza31446ze3z83_753;
										}
								}
						}
				}
		}
	}



/* _remq! */
	obj_t BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3025,
		obj_t BgL_xz00_3026, obj_t BgL_yz00_3027)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 748 */
			{	/* Ieee/pairlist.scm 750 */
				obj_t BgL_auxz00_4307;

				{	/* Ieee/pairlist.scm 750 */
					bool_t BgL_testz00_4308;

					if (PAIRP(BgL_yz00_3027))
						{	/* Ieee/pairlist.scm 750 */
							BgL_testz00_4308 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 750 */
							BgL_testz00_4308 = NULLP(BgL_yz00_3027);
						}
					if (BgL_testz00_4308)
						{	/* Ieee/pairlist.scm 750 */
							BgL_auxz00_4307 = BgL_yz00_3027;
						}
					else
						{
							obj_t BgL_auxz00_4312;

							BgL_auxz00_4312 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 29548)),
								BGl_string2090z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_3027);
							FAILURE(BgL_auxz00_4312, BFALSE, BFALSE);
				}}
				return bgl_remq_bang(BgL_xz00_3026, BgL_auxz00_4307);
			}
		}
	}



/* _delete */
	obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_93,
		obj_t BgL_optz00_92)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 763 */
			{	/* Ieee/pairlist.scm 763 */
				obj_t BgL_g1193z00_762;

				obj_t BgL_g1194z00_763;

				BgL_g1193z00_762 = VECTOR_REF(BgL_optz00_92, (int) (((long) 0)));
				BgL_g1194z00_763 = VECTOR_REF(BgL_optz00_92, (int) (((long) 1)));
				{	/* Ieee/pairlist.scm 763 */
					int BgL_aux1196z00_765;

					BgL_aux1196z00_765 = VECTOR_LENGTH(BgL_optz00_92);
					switch ((long) (BgL_aux1196z00_765))
						{
						case ((long) 2):

							{	/* Ieee/pairlist.scm 763 */

								{	/* Ieee/pairlist.scm 763 */
									obj_t BgL_arg1455z00_768;

									obj_t BgL_arg1456z00_769;

									BgL_arg1455z00_768 =
										VECTOR_REF(BgL_optz00_92, (int) (((long) 0)));
									BgL_arg1456z00_769 =
										VECTOR_REF(BgL_optz00_92, (int) (((long) 1)));
									{	/* Ieee/pairlist.scm 763 */
										obj_t BgL_res2117z00_3334;

										{	/* Ieee/pairlist.scm 763 */
											obj_t BgL_yz00_3332;

											{	/* Ieee/pairlist.scm 763 */
												bool_t BgL_testz00_4326;

												if (PAIRP(BgL_arg1456z00_769))
													{	/* Ieee/pairlist.scm 763 */
														BgL_testz00_4326 = ((bool_t) 1);
													}
												else
													{	/* Ieee/pairlist.scm 763 */
														BgL_testz00_4326 = NULLP(BgL_arg1456z00_769);
													}
												if (BgL_testz00_4326)
													{	/* Ieee/pairlist.scm 763 */
														BgL_yz00_3332 = BgL_arg1456z00_769;
													}
												else
													{
														obj_t BgL_auxz00_4330;

														BgL_auxz00_4330 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
															BINT(((long) 30103)),
															BGl_string2091z00zz__r4_pairs_and_lists_6_3z00,
															BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
															BgL_arg1456z00_769);
														FAILURE(BgL_auxz00_4330, BFALSE, BFALSE);
											}}
											BgL_res2117z00_3334 =
												BGl_loopz00zz__r4_pairs_and_lists_6_3z00
												(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00,
												BgL_arg1455z00_768, BgL_yz00_3332);
										}
										return BgL_res2117z00_3334;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/pairlist.scm 763 */
								obj_t BgL_eqz00_770;

								BgL_eqz00_770 = VECTOR_REF(BgL_optz00_92, (int) (((long) 2)));
								{	/* Ieee/pairlist.scm 763 */

									{	/* Ieee/pairlist.scm 763 */
										obj_t BgL_arg1457z00_771;

										obj_t BgL_arg1458z00_772;

										BgL_arg1457z00_771 =
											VECTOR_REF(BgL_optz00_92, (int) (((long) 0)));
										BgL_arg1458z00_772 =
											VECTOR_REF(BgL_optz00_92, (int) (((long) 1)));
										{	/* Ieee/pairlist.scm 763 */
											obj_t BgL_res2118z00_3339;

											{	/* Ieee/pairlist.scm 763 */
												obj_t BgL_yz00_3337;

												{	/* Ieee/pairlist.scm 763 */
													bool_t BgL_testz00_4341;

													if (PAIRP(BgL_arg1458z00_772))
														{	/* Ieee/pairlist.scm 763 */
															BgL_testz00_4341 = ((bool_t) 1);
														}
													else
														{	/* Ieee/pairlist.scm 763 */
															BgL_testz00_4341 = NULLP(BgL_arg1458z00_772);
														}
													if (BgL_testz00_4341)
														{	/* Ieee/pairlist.scm 763 */
															BgL_yz00_3337 = BgL_arg1458z00_772;
														}
													else
														{
															obj_t BgL_auxz00_4345;

															BgL_auxz00_4345 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
																BINT(((long) 30103)),
																BGl_string2091z00zz__r4_pairs_and_lists_6_3z00,
																BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
																BgL_arg1458z00_772);
															FAILURE(BgL_auxz00_4345, BFALSE, BFALSE);
												}}
												BgL_res2118z00_3339 =
													BGl_loopz00zz__r4_pairs_and_lists_6_3z00
													(BgL_eqz00_770, BgL_arg1457z00_771, BgL_yz00_3337);
											}
											return BgL_res2118z00_3339;
										}
									}
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



/* delete */
	BGL_EXPORTED_DEF obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_89, obj_t BgL_yz00_90, obj_t BgL_eqz00_91)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 763 */
			return
				BGl_loopz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_91, BgL_xz00_89,
				BgL_yz00_90);
		}
	}



/* loop */
	obj_t BGl_loopz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_3080,
		obj_t BgL_xz00_774, obj_t BgL_yz00_775)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 764 */
		BGl_loopz00zz__r4_pairs_and_lists_6_3z00:
			if (NULLP(BgL_yz00_775))
				{	/* Ieee/pairlist.scm 767 */
					return BgL_yz00_775;
				}
			else
				{	/* Ieee/pairlist.scm 768 */
					bool_t BgL_testz00_4355;

					{	/* Ieee/pairlist.scm 768 */
						obj_t BgL_arg1466z00_783;

						BgL_arg1466z00_783 = CAR(BgL_yz00_775);
						BgL_testz00_4355 =
							CBOOL(PROCEDURE_ENTRY(BgL_eqz00_3080) (BgL_eqz00_3080,
								BgL_xz00_774, BgL_arg1466z00_783, BEOA));
					}
					if (BgL_testz00_4355)
						{
							obj_t BgL_yz00_4360;

							BgL_yz00_4360 = CDR(BgL_yz00_775);
							BgL_yz00_775 = BgL_yz00_4360;
							goto BGl_loopz00zz__r4_pairs_and_lists_6_3z00;
						}
					else
						{	/* Ieee/pairlist.scm 768 */
							return
								MAKE_PAIR(CAR(BgL_yz00_775),
								BGl_loopz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_3080,
									BgL_xz00_774, CDR(BgL_yz00_775)));
						}
				}
		}
	}



/* _delete! */
	obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_98,
		obj_t BgL_optz00_97)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 774 */
			{	/* Ieee/pairlist.scm 774 */
				obj_t BgL_g1197z00_785;

				obj_t BgL_g1198z00_786;

				BgL_g1197z00_785 = VECTOR_REF(BgL_optz00_97, (int) (((long) 0)));
				BgL_g1198z00_786 = VECTOR_REF(BgL_optz00_97, (int) (((long) 1)));
				{	/* Ieee/pairlist.scm 774 */
					int BgL_aux1200z00_788;

					BgL_aux1200z00_788 = VECTOR_LENGTH(BgL_optz00_97);
					switch ((long) (BgL_aux1200z00_788))
						{
						case ((long) 2):

							{	/* Ieee/pairlist.scm 774 */

								{	/* Ieee/pairlist.scm 774 */
									obj_t BgL_arg1468z00_791;

									obj_t BgL_arg1469z00_792;

									BgL_arg1468z00_791 =
										VECTOR_REF(BgL_optz00_97, (int) (((long) 0)));
									BgL_arg1469z00_792 =
										VECTOR_REF(BgL_optz00_97, (int) (((long) 1)));
									{	/* Ieee/pairlist.scm 774 */
										obj_t BgL_auxz00_4375;

										{	/* Ieee/pairlist.scm 774 */
											bool_t BgL_testz00_4376;

											if (PAIRP(BgL_arg1469z00_792))
												{	/* Ieee/pairlist.scm 774 */
													BgL_testz00_4376 = ((bool_t) 1);
												}
											else
												{	/* Ieee/pairlist.scm 774 */
													BgL_testz00_4376 = NULLP(BgL_arg1469z00_792);
												}
											if (BgL_testz00_4376)
												{	/* Ieee/pairlist.scm 774 */
													BgL_auxz00_4375 = BgL_arg1469z00_792;
												}
											else
												{
													obj_t BgL_auxz00_4380;

													BgL_auxz00_4380 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
														BINT(((long) 30512)),
														BGl_string2092z00zz__r4_pairs_and_lists_6_3z00,
														BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
														BgL_arg1469z00_792);
													FAILURE(BgL_auxz00_4380, BFALSE, BFALSE);
										}}
										return
											BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1468z00_791, BgL_auxz00_4375,
											BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/pairlist.scm 774 */
								obj_t BgL_eqz00_793;

								BgL_eqz00_793 = VECTOR_REF(BgL_optz00_97, (int) (((long) 2)));
								{	/* Ieee/pairlist.scm 774 */

									{	/* Ieee/pairlist.scm 774 */
										obj_t BgL_arg1470z00_794;

										obj_t BgL_arg1471z00_795;

										BgL_arg1470z00_794 =
											VECTOR_REF(BgL_optz00_97, (int) (((long) 0)));
										BgL_arg1471z00_795 =
											VECTOR_REF(BgL_optz00_97, (int) (((long) 1)));
										{	/* Ieee/pairlist.scm 774 */
											obj_t BgL_auxz00_4391;

											{	/* Ieee/pairlist.scm 774 */
												bool_t BgL_testz00_4392;

												if (PAIRP(BgL_arg1471z00_795))
													{	/* Ieee/pairlist.scm 774 */
														BgL_testz00_4392 = ((bool_t) 1);
													}
												else
													{	/* Ieee/pairlist.scm 774 */
														BgL_testz00_4392 = NULLP(BgL_arg1471z00_795);
													}
												if (BgL_testz00_4392)
													{	/* Ieee/pairlist.scm 774 */
														BgL_auxz00_4391 = BgL_arg1471z00_795;
													}
												else
													{
														obj_t BgL_auxz00_4396;

														BgL_auxz00_4396 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
															BINT(((long) 30512)),
															BGl_string2092z00zz__r4_pairs_and_lists_6_3z00,
															BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
															BgL_arg1471z00_795);
														FAILURE(BgL_auxz00_4396, BFALSE, BFALSE);
											}}
											return
												BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1470z00_794, BgL_auxz00_4391, BgL_eqz00_793);
										}
									}
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



/* delete! */
	BGL_EXPORTED_DEF obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_94, obj_t BgL_yz00_95, obj_t BgL_eqz00_96)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 774 */
			{
				obj_t BgL_xz00_797;

				obj_t BgL_yz00_798;

				BgL_xz00_797 = BgL_xz00_94;
				BgL_yz00_798 = BgL_yz00_95;
			BgL_zc3anonymousza31472ze3z83_799:
				if (NULLP(BgL_yz00_798))
					{	/* Ieee/pairlist.scm 778 */
						return BgL_yz00_798;
					}
				else
					{	/* Ieee/pairlist.scm 779 */
						bool_t BgL_testz00_4405;

						{	/* Ieee/pairlist.scm 779 */
							obj_t BgL_arg1483z00_813;

							BgL_arg1483z00_813 = CAR(BgL_yz00_798);
							BgL_testz00_4405 =
								CBOOL(PROCEDURE_ENTRY(BgL_eqz00_96) (BgL_eqz00_96, BgL_xz00_797,
									BgL_arg1483z00_813, BEOA));
						}
						if (BgL_testz00_4405)
							{
								obj_t BgL_yz00_4410;

								BgL_yz00_4410 = CDR(BgL_yz00_798);
								BgL_yz00_798 = BgL_yz00_4410;
								goto BgL_zc3anonymousza31472ze3z83_799;
							}
						else
							{
								obj_t BgL_prevz00_804;

								BgL_prevz00_804 = BgL_yz00_798;
							BgL_zc3anonymousza31476ze3z83_805:
								if (NULLP(CDR(BgL_prevz00_804)))
									{	/* Ieee/pairlist.scm 781 */
										return BgL_yz00_798;
									}
								else
									{	/* Ieee/pairlist.scm 783 */
										bool_t BgL_testz00_4415;

										{	/* Ieee/pairlist.scm 783 */
											obj_t BgL_arg1481z00_810;

											{	/* Ieee/pairlist.scm 783 */
												obj_t BgL_pairz00_1935;

												BgL_pairz00_1935 = BgL_prevz00_804;
												BgL_arg1481z00_810 = CAR(CDR(BgL_pairz00_1935));
											}
											BgL_testz00_4415 =
												CBOOL(PROCEDURE_ENTRY(BgL_eqz00_96) (BgL_eqz00_96,
													BgL_arg1481z00_810, BgL_xz00_797, BEOA));
										}
										if (BgL_testz00_4415)
											{	/* Ieee/pairlist.scm 783 */
												{	/* Ieee/pairlist.scm 784 */
													obj_t BgL_arg1479z00_808;

													{	/* Ieee/pairlist.scm 784 */
														obj_t BgL_pairz00_1939;

														BgL_pairz00_1939 = BgL_prevz00_804;
														BgL_arg1479z00_808 = CDR(CDR(BgL_pairz00_1939));
													}
													SET_CDR(BgL_prevz00_804, BgL_arg1479z00_808);
												}
												{

													goto BgL_zc3anonymousza31476ze3z83_805;
												}
											}
										else
											{
												obj_t BgL_prevz00_4424;

												BgL_prevz00_4424 = CDR(BgL_prevz00_804);
												BgL_prevz00_804 = BgL_prevz00_4424;
												goto BgL_zc3anonymousza31476ze3z83_805;
											}
									}
							}
					}
			}
		}
	}



/* cons* */
	BGL_EXPORTED_DEF obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_99, obj_t BgL_yz00_100)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 791 */
			if (NULLP(BgL_yz00_100))
				{	/* Ieee/pairlist.scm 796 */
					return BgL_xz00_99;
				}
			else
				{	/* Ieee/pairlist.scm 796 */
					return
						MAKE_PAIR(BgL_xz00_99,
						BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(BgL_yz00_100));
				}
		}
	}



/* cons*1 */
	obj_t BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_815)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 792 */
			if (NULLP(CDR(BgL_xz00_815)))
				{	/* Ieee/pairlist.scm 792 */
					return CAR(BgL_xz00_815);
				}
			else
				{	/* Ieee/pairlist.scm 792 */
					return
						MAKE_PAIR(CAR(BgL_xz00_815),
						BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(CDR(BgL_xz00_815)));
				}
		}
	}



/* _cons* */
	obj_t BGl__consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3031,
		obj_t BgL_xz00_3032, obj_t BgL_yz00_3033)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 791 */
			return
				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3032,
				BgL_yz00_3033);
		}
	}



/* reverse! */
	BGL_EXPORTED_DEF obj_t bgl_reverse_bang(obj_t BgL_lz00_101)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 803 */
			if (PAIRP(BgL_lz00_101))
				{
					obj_t BgL_lz00_1954;

					obj_t BgL_rz00_1955;

					BgL_lz00_1954 = BgL_lz00_101;
					BgL_rz00_1955 = BNIL;
				BgL_nrz00_1953:
					if (NULLP(CDR(BgL_lz00_1954)))
						{	/* Ieee/pairlist.scm 805 */
							SET_CDR(BgL_lz00_1954, BgL_rz00_1955);
							return BgL_lz00_1954;
						}
					else
						{	/* Ieee/pairlist.scm 805 */
							obj_t BgL_cdrlz00_1962;

							BgL_cdrlz00_1962 = CDR(BgL_lz00_1954);
							{	/* Ieee/pairlist.scm 805 */
								obj_t BgL_arg1494z00_1963;

								SET_CDR(BgL_lz00_1954, BgL_rz00_1955);
								BgL_arg1494z00_1963 = BgL_lz00_1954;
								{
									obj_t BgL_rz00_4448;

									obj_t BgL_lz00_4447;

									BgL_lz00_4447 = BgL_cdrlz00_1962;
									BgL_rz00_4448 = BgL_arg1494z00_1963;
									BgL_rz00_1955 = BgL_rz00_4448;
									BgL_lz00_1954 = BgL_lz00_4447;
									goto BgL_nrz00_1953;
								}
							}
						}
				}
			else
				{	/* Ieee/pairlist.scm 804 */
					return BgL_lz00_101;
				}
		}
	}



/* _reverse! */
	obj_t BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3034,
		obj_t BgL_lz00_3035)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 803 */
			{	/* Ieee/pairlist.scm 804 */
				obj_t BgL_auxz00_4449;

				{	/* Ieee/pairlist.scm 804 */
					bool_t BgL_testz00_4450;

					if (PAIRP(BgL_lz00_3035))
						{	/* Ieee/pairlist.scm 804 */
							BgL_testz00_4450 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 804 */
							BgL_testz00_4450 = NULLP(BgL_lz00_3035);
						}
					if (BgL_testz00_4450)
						{	/* Ieee/pairlist.scm 804 */
							BgL_auxz00_4449 = BgL_lz00_3035;
						}
					else
						{
							obj_t BgL_auxz00_4454;

							BgL_auxz00_4454 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 31504)),
								BGl_string2093z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_3035);
							FAILURE(BgL_auxz00_4454, BFALSE, BFALSE);
				}}
				return bgl_reverse_bang(BgL_auxz00_4449);
			}
		}
	}



/* every */
	BGL_EXPORTED_DEF obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_102, obj_t BgL_lz00_103)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 819 */
			if (NULLP(BgL_lz00_103))
				{	/* Ieee/pairlist.scm 821 */
					return BTRUE;
				}
			else
				{	/* Ieee/pairlist.scm 821 */
					if (NULLP(CDR(BgL_lz00_103)))
						{	/* Ieee/pairlist.scm 824 */
							obj_t BgL_g1107z00_837;

							BgL_g1107z00_837 = CAR(BgL_lz00_103);
							{
								obj_t BgL_lz00_2000;

								obj_t BgL_lvz00_2001;

								BgL_lz00_2000 = BgL_g1107z00_837;
								BgL_lvz00_2001 = BTRUE;
							BgL_loopz00_1999:
								if (NULLP(BgL_lz00_2000))
									{	/* Ieee/pairlist.scm 824 */
										return BgL_lvz00_2001;
									}
								else
									{	/* Ieee/pairlist.scm 824 */
										obj_t BgL_nvz00_2008;

										{	/* Ieee/pairlist.scm 824 */
											obj_t BgL_arg1501z00_2009;

											BgL_arg1501z00_2009 = CAR(BgL_lz00_2000);
											BgL_nvz00_2008 =
												PROCEDURE_ENTRY(BgL_predz00_102) (BgL_predz00_102,
												BgL_arg1501z00_2009, BEOA);
										}
										if (CBOOL(BgL_nvz00_2008))
											{
												obj_t BgL_lvz00_4474;

												obj_t BgL_lz00_4472;

												BgL_lz00_4472 = CDR(BgL_lz00_2000);
												BgL_lvz00_4474 = BgL_nvz00_2008;
												BgL_lvz00_2001 = BgL_lvz00_4474;
												BgL_lz00_2000 = BgL_lz00_4472;
												goto BgL_loopz00_1999;
											}
										else
											{	/* Ieee/pairlist.scm 824 */
												return BFALSE;
											}
									}
							}
						}
					else
						{
							obj_t BgL_lz00_849;

							obj_t BgL_lvz00_850;

							BgL_lz00_849 = BgL_lz00_103;
							BgL_lvz00_850 = BTRUE;
						BgL_zc3anonymousza31502ze3z83_851:
							if (NULLP(CAR(BgL_lz00_849)))
								{	/* Ieee/pairlist.scm 833 */
									return BgL_lvz00_850;
								}
							else
								{	/* Ieee/pairlist.scm 835 */
									obj_t BgL_nvz00_853;

									{	/* Ieee/pairlist.scm 835 */
										obj_t BgL_auxz00_4478;

										if (NULLP(BgL_lz00_849))
											{	/* Ieee/pairlist.scm 835 */
												BgL_auxz00_4478 = BNIL;
											}
										else
											{	/* Ieee/pairlist.scm 835 */
												obj_t BgL_head1142z00_876;

												BgL_head1142z00_876 =
													MAKE_PAIR(CAR(CAR(BgL_lz00_849)), BNIL);
												{	/* Ieee/pairlist.scm 835 */
													obj_t BgL_g1145z00_877;

													BgL_g1145z00_877 = CDR(BgL_lz00_849);
													{
														obj_t BgL_l1140z00_2042;

														obj_t BgL_tail1143z00_2043;

														BgL_l1140z00_2042 = BgL_g1145z00_877;
														BgL_tail1143z00_2043 = BgL_head1142z00_876;
													BgL_zc3anonymousza31516ze3z83_2041:
														if (NULLP(BgL_l1140z00_2042))
															{	/* Ieee/pairlist.scm 835 */
																BgL_auxz00_4478 = BgL_head1142z00_876;
															}
														else
															{	/* Ieee/pairlist.scm 835 */
																obj_t BgL_newtail1144z00_2051;

																BgL_newtail1144z00_2051 =
																	MAKE_PAIR(CAR(CAR(BgL_l1140z00_2042)), BNIL);
																SET_CDR(BgL_tail1143z00_2043,
																	BgL_newtail1144z00_2051);
																{
																	obj_t BgL_tail1143z00_4493;

																	obj_t BgL_l1140z00_4491;

																	BgL_l1140z00_4491 = CDR(BgL_l1140z00_2042);
																	BgL_tail1143z00_4493 =
																		BgL_newtail1144z00_2051;
																	BgL_tail1143z00_2043 = BgL_tail1143z00_4493;
																	BgL_l1140z00_2042 = BgL_l1140z00_4491;
																	goto BgL_zc3anonymousza31516ze3z83_2041;
																}
															}
													}
												}
											}
										BgL_nvz00_853 = apply(BgL_predz00_102, BgL_auxz00_4478);
									}
									if (CBOOL(BgL_nvz00_853))
										{	/* Ieee/pairlist.scm 836 */
											obj_t BgL_arg1504z00_855;

											if (NULLP(BgL_lz00_849))
												{	/* Ieee/pairlist.scm 836 */
													BgL_arg1504z00_855 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 836 */
													obj_t BgL_head1148z00_858;

													BgL_head1148z00_858 =
														MAKE_PAIR(CDR(CAR(BgL_lz00_849)), BNIL);
													{	/* Ieee/pairlist.scm 836 */
														obj_t BgL_g1151z00_859;

														BgL_g1151z00_859 = CDR(BgL_lz00_849);
														{
															obj_t BgL_l1146z00_2101;

															obj_t BgL_tail1149z00_2102;

															BgL_l1146z00_2101 = BgL_g1151z00_859;
															BgL_tail1149z00_2102 = BgL_head1148z00_858;
														BgL_zc3anonymousza31506ze3z83_2100:
															if (NULLP(BgL_l1146z00_2101))
																{	/* Ieee/pairlist.scm 836 */
																	BgL_arg1504z00_855 = BgL_head1148z00_858;
																}
															else
																{	/* Ieee/pairlist.scm 836 */
																	obj_t BgL_newtail1150z00_2110;

																	BgL_newtail1150z00_2110 =
																		MAKE_PAIR(CDR(CAR(BgL_l1146z00_2101)),
																		BNIL);
																	SET_CDR(BgL_tail1149z00_2102,
																		BgL_newtail1150z00_2110);
																	{
																		obj_t BgL_tail1149z00_4511;

																		obj_t BgL_l1146z00_4509;

																		BgL_l1146z00_4509 = CDR(BgL_l1146z00_2101);
																		BgL_tail1149z00_4511 =
																			BgL_newtail1150z00_2110;
																		BgL_tail1149z00_2102 = BgL_tail1149z00_4511;
																		BgL_l1146z00_2101 = BgL_l1146z00_4509;
																		goto BgL_zc3anonymousza31506ze3z83_2100;
																	}
																}
														}
													}
												}
											{
												obj_t BgL_lvz00_4513;

												obj_t BgL_lz00_4512;

												BgL_lz00_4512 = BgL_arg1504z00_855;
												BgL_lvz00_4513 = BgL_nvz00_853;
												BgL_lvz00_850 = BgL_lvz00_4513;
												BgL_lz00_849 = BgL_lz00_4512;
												goto BgL_zc3anonymousza31502ze3z83_851;
											}
										}
									else
										{	/* Ieee/pairlist.scm 836 */
											return BFALSE;
										}
								}
						}
				}
		}
	}



/* _every */
	obj_t BGl__everyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3036,
		obj_t BgL_predz00_3037, obj_t BgL_lz00_3038)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 819 */
			{	/* Ieee/pairlist.scm 821 */
				obj_t BgL_auxz00_4514;

				if (PROCEDUREP(BgL_predz00_3037))
					{	/* Ieee/pairlist.scm 821 */
						BgL_auxz00_4514 = BgL_predz00_3037;
					}
				else
					{
						obj_t BgL_auxz00_4517;

						BgL_auxz00_4517 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 32006)),
							BGl_string2094z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_3037);
						FAILURE(BgL_auxz00_4517, BFALSE, BFALSE);
					}
				return
					BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4514,
					BgL_lz00_3038);
			}
		}
	}



/* any */
	BGL_EXPORTED_DEF obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_104, obj_t BgL_lz00_105)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 841 */
			if (NULLP(BgL_lz00_105))
				{	/* Ieee/pairlist.scm 843 */
					return BFALSE;
				}
			else
				{	/* Ieee/pairlist.scm 843 */
					if (NULLP(CDR(BgL_lz00_105)))
						{	/* Ieee/pairlist.scm 846 */
							obj_t BgL_g1110z00_897;

							BgL_g1110z00_897 = CAR(BgL_lz00_105);
							{
								obj_t BgL_lz00_899;

								BgL_lz00_899 = BgL_g1110z00_897;
							BgL_zc3anonymousza31529ze3z83_900:
								if (NULLP(BgL_lz00_899))
									{	/* Ieee/pairlist.scm 847 */
										return BFALSE;
									}
								else
									{	/* Ieee/pairlist.scm 849 */
										obj_t BgL__ortest_1111z00_902;

										{	/* Ieee/pairlist.scm 849 */
											obj_t BgL_arg1532z00_904;

											BgL_arg1532z00_904 = CAR(BgL_lz00_899);
											BgL__ortest_1111z00_902 =
												PROCEDURE_ENTRY(BgL_predz00_104) (BgL_predz00_104,
												BgL_arg1532z00_904, BEOA);
										}
										if (CBOOL(BgL__ortest_1111z00_902))
											{	/* Ieee/pairlist.scm 849 */
												return BgL__ortest_1111z00_902;
											}
										else
											{
												obj_t BgL_lz00_4535;

												BgL_lz00_4535 = CDR(BgL_lz00_899);
												BgL_lz00_899 = BgL_lz00_4535;
												goto BgL_zc3anonymousza31529ze3z83_900;
											}
									}
							}
						}
					else
						{
							obj_t BgL_lz00_907;

							BgL_lz00_907 = BgL_lz00_105;
						BgL_zc3anonymousza31533ze3z83_908:
							if (NULLP(CAR(BgL_lz00_907)))
								{	/* Ieee/pairlist.scm 853 */
									return BFALSE;
								}
							else
								{	/* Ieee/pairlist.scm 855 */
									obj_t BgL__ortest_1112z00_910;

									{	/* Ieee/pairlist.scm 855 */
										obj_t BgL_auxz00_4540;

										if (NULLP(BgL_lz00_907))
											{	/* Ieee/pairlist.scm 855 */
												BgL_auxz00_4540 = BNIL;
											}
										else
											{	/* Ieee/pairlist.scm 855 */
												obj_t BgL_head1154z00_932;

												BgL_head1154z00_932 =
													MAKE_PAIR(CAR(CAR(BgL_lz00_907)), BNIL);
												{	/* Ieee/pairlist.scm 855 */
													obj_t BgL_g1157z00_933;

													BgL_g1157z00_933 = CDR(BgL_lz00_907);
													{
														obj_t BgL_l1152z00_2169;

														obj_t BgL_tail1155z00_2170;

														BgL_l1152z00_2169 = BgL_g1157z00_933;
														BgL_tail1155z00_2170 = BgL_head1154z00_932;
													BgL_zc3anonymousza31547ze3z83_2168:
														if (NULLP(BgL_l1152z00_2169))
															{	/* Ieee/pairlist.scm 855 */
																BgL_auxz00_4540 = BgL_head1154z00_932;
															}
														else
															{	/* Ieee/pairlist.scm 855 */
																obj_t BgL_newtail1156z00_2178;

																BgL_newtail1156z00_2178 =
																	MAKE_PAIR(CAR(CAR(BgL_l1152z00_2169)), BNIL);
																SET_CDR(BgL_tail1155z00_2170,
																	BgL_newtail1156z00_2178);
																{
																	obj_t BgL_tail1155z00_4555;

																	obj_t BgL_l1152z00_4553;

																	BgL_l1152z00_4553 = CDR(BgL_l1152z00_2169);
																	BgL_tail1155z00_4555 =
																		BgL_newtail1156z00_2178;
																	BgL_tail1155z00_2170 = BgL_tail1155z00_4555;
																	BgL_l1152z00_2169 = BgL_l1152z00_4553;
																	goto BgL_zc3anonymousza31547ze3z83_2168;
																}
															}
													}
												}
											}
										BgL__ortest_1112z00_910 =
											apply(BgL_predz00_104, BgL_auxz00_4540);
									}
									if (CBOOL(BgL__ortest_1112z00_910))
										{	/* Ieee/pairlist.scm 855 */
											return BgL__ortest_1112z00_910;
										}
									else
										{	/* Ieee/pairlist.scm 856 */
											obj_t BgL_arg1535z00_911;

											if (NULLP(BgL_lz00_907))
												{	/* Ieee/pairlist.scm 856 */
													BgL_arg1535z00_911 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 856 */
													obj_t BgL_head1160z00_914;

													BgL_head1160z00_914 =
														MAKE_PAIR(CDR(CAR(BgL_lz00_907)), BNIL);
													{	/* Ieee/pairlist.scm 856 */
														obj_t BgL_g1163z00_915;

														BgL_g1163z00_915 = CDR(BgL_lz00_907);
														{
															obj_t BgL_l1158z00_2228;

															obj_t BgL_tail1161z00_2229;

															BgL_l1158z00_2228 = BgL_g1163z00_915;
															BgL_tail1161z00_2229 = BgL_head1160z00_914;
														BgL_zc3anonymousza31537ze3z83_2227:
															if (NULLP(BgL_l1158z00_2228))
																{	/* Ieee/pairlist.scm 856 */
																	BgL_arg1535z00_911 = BgL_head1160z00_914;
																}
															else
																{	/* Ieee/pairlist.scm 856 */
																	obj_t BgL_newtail1162z00_2237;

																	BgL_newtail1162z00_2237 =
																		MAKE_PAIR(CDR(CAR(BgL_l1158z00_2228)),
																		BNIL);
																	SET_CDR(BgL_tail1161z00_2229,
																		BgL_newtail1162z00_2237);
																	{
																		obj_t BgL_tail1161z00_4573;

																		obj_t BgL_l1158z00_4571;

																		BgL_l1158z00_4571 = CDR(BgL_l1158z00_2228);
																		BgL_tail1161z00_4573 =
																			BgL_newtail1162z00_2237;
																		BgL_tail1161z00_2229 = BgL_tail1161z00_4573;
																		BgL_l1158z00_2228 = BgL_l1158z00_4571;
																		goto BgL_zc3anonymousza31537ze3z83_2227;
																	}
																}
														}
													}
												}
											{
												obj_t BgL_lz00_4574;

												BgL_lz00_4574 = BgL_arg1535z00_911;
												BgL_lz00_907 = BgL_lz00_4574;
												goto BgL_zc3anonymousza31533ze3z83_908;
											}
										}
								}
						}
				}
		}
	}



/* _any */
	obj_t BGl__anyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3039,
		obj_t BgL_predz00_3040, obj_t BgL_lz00_3041)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 841 */
			{	/* Ieee/pairlist.scm 843 */
				obj_t BgL_auxz00_4575;

				if (PROCEDUREP(BgL_predz00_3040))
					{	/* Ieee/pairlist.scm 843 */
						BgL_auxz00_4575 = BgL_predz00_3040;
					}
				else
					{
						obj_t BgL_auxz00_4578;

						BgL_auxz00_4578 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 32616)),
							BGl_string2096z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_3040);
						FAILURE(BgL_auxz00_4578, BFALSE, BFALSE);
					}
				return
					BGl_anyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4575,
					BgL_lz00_3041);
			}
		}
	}



/* every? */
	BGL_EXPORTED_DEF bool_t BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_106, obj_t BgL_lz00_107)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 861 */
			if (NULLP(BgL_lz00_107))
				{	/* Ieee/pairlist.scm 863 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/pairlist.scm 863 */
					if (NULLP(CDR(BgL_lz00_107)))
						{	/* Ieee/pairlist.scm 866 */
							obj_t BgL_g1113z00_953;

							BgL_g1113z00_953 = CAR(BgL_lz00_107);
							{
								obj_t BgL_lz00_955;

								BgL_lz00_955 = BgL_g1113z00_953;
							BgL_zc3anonymousza31562ze3z83_956:
								if (NULLP(BgL_lz00_955))
									{	/* Ieee/pairlist.scm 868 */
										return ((bool_t) 1);
									}
								else
									{	/* Ieee/pairlist.scm 870 */
										bool_t BgL_testz00_4591;

										{	/* Ieee/pairlist.scm 870 */
											obj_t BgL_arg1566z00_960;

											BgL_arg1566z00_960 = CAR(BgL_lz00_955);
											BgL_testz00_4591 =
												CBOOL(PROCEDURE_ENTRY(BgL_predz00_106) (BgL_predz00_106,
													BgL_arg1566z00_960, BEOA));
										}
										if (BgL_testz00_4591)
											{
												obj_t BgL_lz00_4596;

												BgL_lz00_4596 = CDR(BgL_lz00_955);
												BgL_lz00_955 = BgL_lz00_4596;
												goto BgL_zc3anonymousza31562ze3z83_956;
											}
										else
											{	/* Ieee/pairlist.scm 870 */
												return ((bool_t) 0);
											}
									}
							}
						}
					else
						{
							obj_t BgL_lz00_963;

							BgL_lz00_963 = BgL_lz00_107;
						BgL_zc3anonymousza31567ze3z83_964:
							if (NULLP(CAR(BgL_lz00_963)))
								{	/* Ieee/pairlist.scm 877 */
									return ((bool_t) 1);
								}
							else
								{	/* Ieee/pairlist.scm 879 */
									bool_t BgL_testz00_4601;

									{	/* Ieee/pairlist.scm 879 */
										obj_t BgL_auxz00_4602;

										{	/* Ieee/pairlist.scm 879 */
											obj_t BgL_auxz00_4603;

											if (NULLP(BgL_lz00_963))
												{	/* Ieee/pairlist.scm 879 */
													BgL_auxz00_4603 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 879 */
													obj_t BgL_head1166z00_988;

													BgL_head1166z00_988 =
														MAKE_PAIR(CAR(CAR(BgL_lz00_963)), BNIL);
													{	/* Ieee/pairlist.scm 879 */
														obj_t BgL_g1169z00_989;

														BgL_g1169z00_989 = CDR(BgL_lz00_963);
														{
															obj_t BgL_l1164z00_2296;

															obj_t BgL_tail1167z00_2297;

															BgL_l1164z00_2296 = BgL_g1169z00_989;
															BgL_tail1167z00_2297 = BgL_head1166z00_988;
														BgL_zc3anonymousza31583ze3z83_2295:
															if (NULLP(BgL_l1164z00_2296))
																{	/* Ieee/pairlist.scm 879 */
																	BgL_auxz00_4603 = BgL_head1166z00_988;
																}
															else
																{	/* Ieee/pairlist.scm 879 */
																	obj_t BgL_newtail1168z00_2305;

																	BgL_newtail1168z00_2305 =
																		MAKE_PAIR(CAR(CAR(BgL_l1164z00_2296)),
																		BNIL);
																	SET_CDR(BgL_tail1167z00_2297,
																		BgL_newtail1168z00_2305);
																	{
																		obj_t BgL_tail1167z00_4618;

																		obj_t BgL_l1164z00_4616;

																		BgL_l1164z00_4616 = CDR(BgL_l1164z00_2296);
																		BgL_tail1167z00_4618 =
																			BgL_newtail1168z00_2305;
																		BgL_tail1167z00_2297 = BgL_tail1167z00_4618;
																		BgL_l1164z00_2296 = BgL_l1164z00_4616;
																		goto BgL_zc3anonymousza31583ze3z83_2295;
																	}
																}
														}
													}
												}
											BgL_auxz00_4602 = apply(BgL_predz00_106, BgL_auxz00_4603);
										}
										BgL_testz00_4601 = CBOOL(BgL_auxz00_4602);
									}
									if (BgL_testz00_4601)
										{	/* Ieee/pairlist.scm 880 */
											obj_t BgL_arg1570z00_967;

											if (NULLP(BgL_lz00_963))
												{	/* Ieee/pairlist.scm 880 */
													BgL_arg1570z00_967 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 880 */
													obj_t BgL_head1172z00_970;

													BgL_head1172z00_970 =
														MAKE_PAIR(CDR(CAR(BgL_lz00_963)), BNIL);
													{	/* Ieee/pairlist.scm 880 */
														obj_t BgL_g1175z00_971;

														BgL_g1175z00_971 = CDR(BgL_lz00_963);
														{
															obj_t BgL_l1170z00_2355;

															obj_t BgL_tail1173z00_2356;

															BgL_l1170z00_2355 = BgL_g1175z00_971;
															BgL_tail1173z00_2356 = BgL_head1172z00_970;
														BgL_zc3anonymousza31572ze3z83_2354:
															if (NULLP(BgL_l1170z00_2355))
																{	/* Ieee/pairlist.scm 880 */
																	BgL_arg1570z00_967 = BgL_head1172z00_970;
																}
															else
																{	/* Ieee/pairlist.scm 880 */
																	obj_t BgL_newtail1174z00_2364;

																	BgL_newtail1174z00_2364 =
																		MAKE_PAIR(CDR(CAR(BgL_l1170z00_2355)),
																		BNIL);
																	SET_CDR(BgL_tail1173z00_2356,
																		BgL_newtail1174z00_2364);
																	{
																		obj_t BgL_tail1173z00_4635;

																		obj_t BgL_l1170z00_4633;

																		BgL_l1170z00_4633 = CDR(BgL_l1170z00_2355);
																		BgL_tail1173z00_4635 =
																			BgL_newtail1174z00_2364;
																		BgL_tail1173z00_2356 = BgL_tail1173z00_4635;
																		BgL_l1170z00_2355 = BgL_l1170z00_4633;
																		goto BgL_zc3anonymousza31572ze3z83_2354;
																	}
																}
														}
													}
												}
											{
												obj_t BgL_lz00_4636;

												BgL_lz00_4636 = BgL_arg1570z00_967;
												BgL_lz00_963 = BgL_lz00_4636;
												goto BgL_zc3anonymousza31567ze3z83_964;
											}
										}
									else
										{	/* Ieee/pairlist.scm 879 */
											return ((bool_t) 0);
										}
								}
						}
				}
		}
	}



/* _every? */
	obj_t BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3042,
		obj_t BgL_predz00_3043, obj_t BgL_lz00_3044)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 861 */
			{	/* Ieee/pairlist.scm 863 */
				bool_t BgL_auxz00_4637;

				{	/* Ieee/pairlist.scm 863 */
					obj_t BgL_auxz00_4638;

					if (PROCEDUREP(BgL_predz00_3043))
						{	/* Ieee/pairlist.scm 863 */
							BgL_auxz00_4638 = BgL_predz00_3043;
						}
					else
						{
							obj_t BgL_auxz00_4641;

							BgL_auxz00_4641 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 33167)),
								BGl_string2097z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2095z00zz__r4_pairs_and_lists_6_3z00,
								BgL_predz00_3043);
							FAILURE(BgL_auxz00_4641, BFALSE, BFALSE);
						}
					BgL_auxz00_4637 =
						BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4638,
						BgL_lz00_3044);
				}
				return BBOOL(BgL_auxz00_4637);
			}
		}
	}



/* any? */
	BGL_EXPORTED_DEF bool_t BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_108, obj_t BgL_lz00_109)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 887 */
			if (NULLP(BgL_lz00_109))
				{	/* Ieee/pairlist.scm 889 */
					return ((bool_t) 0);
				}
			else
				{	/* Ieee/pairlist.scm 889 */
					if (NULLP(CDR(BgL_lz00_109)))
						{	/* Ieee/pairlist.scm 892 */
							obj_t BgL_g1114z00_1009;

							BgL_g1114z00_1009 = CAR(BgL_lz00_109);
							{
								obj_t BgL_lz00_1011;

								BgL_lz00_1011 = BgL_g1114z00_1009;
							BgL_zc3anonymousza31599ze3z83_1012:
								if (NULLP(BgL_lz00_1011))
									{	/* Ieee/pairlist.scm 894 */
										return ((bool_t) 0);
									}
								else
									{	/* Ieee/pairlist.scm 896 */
										bool_t BgL_testz00_4655;

										{	/* Ieee/pairlist.scm 896 */
											obj_t BgL_arg1603z00_1016;

											BgL_arg1603z00_1016 = CAR(BgL_lz00_1011);
											BgL_testz00_4655 =
												CBOOL(PROCEDURE_ENTRY(BgL_predz00_108) (BgL_predz00_108,
													BgL_arg1603z00_1016, BEOA));
										}
										if (BgL_testz00_4655)
											{	/* Ieee/pairlist.scm 896 */
												return ((bool_t) 1);
											}
										else
											{
												obj_t BgL_lz00_4660;

												BgL_lz00_4660 = CDR(BgL_lz00_1011);
												BgL_lz00_1011 = BgL_lz00_4660;
												goto BgL_zc3anonymousza31599ze3z83_1012;
											}
									}
							}
						}
					else
						{
							obj_t BgL_lz00_1019;

							BgL_lz00_1019 = BgL_lz00_109;
						BgL_zc3anonymousza31604ze3z83_1020:
							if (NULLP(CAR(BgL_lz00_1019)))
								{	/* Ieee/pairlist.scm 903 */
									return ((bool_t) 0);
								}
							else
								{	/* Ieee/pairlist.scm 905 */
									bool_t BgL_testz00_4665;

									{	/* Ieee/pairlist.scm 905 */
										obj_t BgL_auxz00_4666;

										{	/* Ieee/pairlist.scm 905 */
											obj_t BgL_auxz00_4667;

											if (NULLP(BgL_lz00_1019))
												{	/* Ieee/pairlist.scm 905 */
													BgL_auxz00_4667 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 905 */
													obj_t BgL_head1178z00_1044;

													BgL_head1178z00_1044 =
														MAKE_PAIR(CAR(CAR(BgL_lz00_1019)), BNIL);
													{	/* Ieee/pairlist.scm 905 */
														obj_t BgL_g1181z00_1045;

														BgL_g1181z00_1045 = CDR(BgL_lz00_1019);
														{
															obj_t BgL_l1176z00_2423;

															obj_t BgL_tail1179z00_2424;

															BgL_l1176z00_2423 = BgL_g1181z00_1045;
															BgL_tail1179z00_2424 = BgL_head1178z00_1044;
														BgL_zc3anonymousza31623ze3z83_2422:
															if (NULLP(BgL_l1176z00_2423))
																{	/* Ieee/pairlist.scm 905 */
																	BgL_auxz00_4667 = BgL_head1178z00_1044;
																}
															else
																{	/* Ieee/pairlist.scm 905 */
																	obj_t BgL_newtail1180z00_2432;

																	BgL_newtail1180z00_2432 =
																		MAKE_PAIR(CAR(CAR(BgL_l1176z00_2423)),
																		BNIL);
																	SET_CDR(BgL_tail1179z00_2424,
																		BgL_newtail1180z00_2432);
																	{
																		obj_t BgL_tail1179z00_4682;

																		obj_t BgL_l1176z00_4680;

																		BgL_l1176z00_4680 = CDR(BgL_l1176z00_2423);
																		BgL_tail1179z00_4682 =
																			BgL_newtail1180z00_2432;
																		BgL_tail1179z00_2424 = BgL_tail1179z00_4682;
																		BgL_l1176z00_2423 = BgL_l1176z00_4680;
																		goto BgL_zc3anonymousza31623ze3z83_2422;
																	}
																}
														}
													}
												}
											BgL_auxz00_4666 = apply(BgL_predz00_108, BgL_auxz00_4667);
										}
										BgL_testz00_4665 = CBOOL(BgL_auxz00_4666);
									}
									if (BgL_testz00_4665)
										{	/* Ieee/pairlist.scm 905 */
											return ((bool_t) 1);
										}
									else
										{	/* Ieee/pairlist.scm 908 */
											obj_t BgL_arg1607z00_1023;

											if (NULLP(BgL_lz00_1019))
												{	/* Ieee/pairlist.scm 908 */
													BgL_arg1607z00_1023 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 908 */
													obj_t BgL_head1184z00_1026;

													BgL_head1184z00_1026 =
														MAKE_PAIR(CDR(CAR(BgL_lz00_1019)), BNIL);
													{	/* Ieee/pairlist.scm 908 */
														obj_t BgL_g1187z00_1027;

														BgL_g1187z00_1027 = CDR(BgL_lz00_1019);
														{
															obj_t BgL_l1182z00_2482;

															obj_t BgL_tail1185z00_2483;

															BgL_l1182z00_2482 = BgL_g1187z00_1027;
															BgL_tail1185z00_2483 = BgL_head1184z00_1026;
														BgL_zc3anonymousza31609ze3z83_2481:
															if (NULLP(BgL_l1182z00_2482))
																{	/* Ieee/pairlist.scm 908 */
																	BgL_arg1607z00_1023 = BgL_head1184z00_1026;
																}
															else
																{	/* Ieee/pairlist.scm 908 */
																	obj_t BgL_newtail1186z00_2491;

																	BgL_newtail1186z00_2491 =
																		MAKE_PAIR(CDR(CAR(BgL_l1182z00_2482)),
																		BNIL);
																	SET_CDR(BgL_tail1185z00_2483,
																		BgL_newtail1186z00_2491);
																	{
																		obj_t BgL_tail1185z00_4699;

																		obj_t BgL_l1182z00_4697;

																		BgL_l1182z00_4697 = CDR(BgL_l1182z00_2482);
																		BgL_tail1185z00_4699 =
																			BgL_newtail1186z00_2491;
																		BgL_tail1185z00_2483 = BgL_tail1185z00_4699;
																		BgL_l1182z00_2482 = BgL_l1182z00_4697;
																		goto BgL_zc3anonymousza31609ze3z83_2481;
																	}
																}
														}
													}
												}
											{
												obj_t BgL_lz00_4700;

												BgL_lz00_4700 = BgL_arg1607z00_1023;
												BgL_lz00_1019 = BgL_lz00_4700;
												goto BgL_zc3anonymousza31604ze3z83_1020;
											}
										}
								}
						}
				}
		}
	}



/* _any? */
	obj_t BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3045,
		obj_t BgL_predz00_3046, obj_t BgL_lz00_3047)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 887 */
			{	/* Ieee/pairlist.scm 889 */
				bool_t BgL_auxz00_4701;

				{	/* Ieee/pairlist.scm 889 */
					obj_t BgL_auxz00_4702;

					if (PROCEDUREP(BgL_predz00_3046))
						{	/* Ieee/pairlist.scm 889 */
							BgL_auxz00_4702 = BgL_predz00_3046;
						}
					else
						{
							obj_t BgL_auxz00_4705;

							BgL_auxz00_4705 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 33780)),
								BGl_string2098z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2095z00zz__r4_pairs_and_lists_6_3z00,
								BgL_predz00_3046);
							FAILURE(BgL_auxz00_4705, BFALSE, BFALSE);
						}
					BgL_auxz00_4701 =
						BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4702,
						BgL_lz00_3047);
				}
				return BBOOL(BgL_auxz00_4701);
			}
		}
	}



/* find */
	BGL_EXPORTED_DEF obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_110, obj_t BgL_listz00_111)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 913 */
			{	/* Ieee/pairlist.scm 914 */
				obj_t BgL_g1115z00_2534;

				{
					obj_t BgL_listz00_2539;

					BgL_listz00_2539 = BgL_listz00_111;
				BgL_lpz00_2538:
					if (PAIRP(BgL_listz00_2539))
						{	/* Ieee/pairlist.scm 914 */
							bool_t BgL_testz00_4713;

							{	/* Ieee/pairlist.scm 914 */
								obj_t BgL_arg1640z00_2542;

								BgL_arg1640z00_2542 = CAR(BgL_listz00_2539);
								BgL_testz00_4713 =
									CBOOL(PROCEDURE_ENTRY(BgL_predz00_110) (BgL_predz00_110,
										BgL_arg1640z00_2542, BEOA));
							}
							if (BgL_testz00_4713)
								{	/* Ieee/pairlist.scm 914 */
									BgL_g1115z00_2534 = BgL_listz00_2539;
								}
							else
								{
									obj_t BgL_listz00_4718;

									BgL_listz00_4718 = CDR(BgL_listz00_2539);
									BgL_listz00_2539 = BgL_listz00_4718;
									goto BgL_lpz00_2538;
								}
						}
					else
						{	/* Ieee/pairlist.scm 914 */
							BgL_g1115z00_2534 = BFALSE;
						}
				}
				if (CBOOL(BgL_g1115z00_2534))
					{	/* Ieee/pairlist.scm 914 */
						return CAR(BgL_g1115z00_2534);
					}
				else
					{	/* Ieee/pairlist.scm 914 */
						return BFALSE;
					}
			}
		}
	}



/* _find */
	obj_t BGl__findz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3048,
		obj_t BgL_predz00_3049, obj_t BgL_listz00_3050)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 913 */
			{	/* Ieee/pairlist.scm 914 */
				obj_t BgL_auxz00_4730;

				obj_t BgL_auxz00_4723;

				{	/* Ieee/pairlist.scm 914 */
					bool_t BgL_testz00_4731;

					if (PAIRP(BgL_listz00_3050))
						{	/* Ieee/pairlist.scm 914 */
							BgL_testz00_4731 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 914 */
							BgL_testz00_4731 = NULLP(BgL_listz00_3050);
						}
					if (BgL_testz00_4731)
						{	/* Ieee/pairlist.scm 914 */
							BgL_auxz00_4730 = BgL_listz00_3050;
						}
					else
						{
							obj_t BgL_auxz00_4735;

							BgL_auxz00_4735 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 34388)),
								BGl_string2099z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3050);
							FAILURE(BgL_auxz00_4735, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_predz00_3049))
					{	/* Ieee/pairlist.scm 914 */
						BgL_auxz00_4723 = BgL_predz00_3049;
					}
				else
					{
						obj_t BgL_auxz00_4726;

						BgL_auxz00_4726 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 34388)),
							BGl_string2099z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_3049);
						FAILURE(BgL_auxz00_4726, BFALSE, BFALSE);
					}
				return
					BGl_findz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4723,
					BgL_auxz00_4730);
			}
		}
	}



/* find-tail */
	BGL_EXPORTED_DEF obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_112, obj_t BgL_listz00_113)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 920 */
			{
				obj_t BgL_listz00_2549;

				BgL_listz00_2549 = BgL_listz00_113;
			BgL_lpz00_2548:
				if (PAIRP(BgL_listz00_2549))
					{	/* Ieee/pairlist.scm 922 */
						bool_t BgL_testz00_4742;

						{	/* Ieee/pairlist.scm 922 */
							obj_t BgL_arg1640z00_2552;

							BgL_arg1640z00_2552 = CAR(BgL_listz00_2549);
							BgL_testz00_4742 =
								CBOOL(PROCEDURE_ENTRY(BgL_predz00_112) (BgL_predz00_112,
									BgL_arg1640z00_2552, BEOA));
						}
						if (BgL_testz00_4742)
							{	/* Ieee/pairlist.scm 922 */
								return BgL_listz00_2549;
							}
						else
							{
								obj_t BgL_listz00_4747;

								BgL_listz00_4747 = CDR(BgL_listz00_2549);
								BgL_listz00_2549 = BgL_listz00_4747;
								goto BgL_lpz00_2548;
							}
					}
				else
					{	/* Ieee/pairlist.scm 922 */
						return BFALSE;
					}
			}
		}
	}



/* _find-tail */
	obj_t BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3051,
		obj_t BgL_predz00_3052, obj_t BgL_listz00_3053)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 920 */
			{	/* Ieee/pairlist.scm 922 */
				obj_t BgL_auxz00_4756;

				obj_t BgL_auxz00_4749;

				{	/* Ieee/pairlist.scm 922 */
					bool_t BgL_testz00_4757;

					if (PAIRP(BgL_listz00_3053))
						{	/* Ieee/pairlist.scm 922 */
							BgL_testz00_4757 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 922 */
							BgL_testz00_4757 = NULLP(BgL_listz00_3053);
						}
					if (BgL_testz00_4757)
						{	/* Ieee/pairlist.scm 922 */
							BgL_auxz00_4756 = BgL_listz00_3053;
						}
					else
						{
							obj_t BgL_auxz00_4761;

							BgL_auxz00_4761 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 34716)),
								BGl_string2100z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3053);
							FAILURE(BgL_auxz00_4761, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_predz00_3052))
					{	/* Ieee/pairlist.scm 922 */
						BgL_auxz00_4749 = BgL_predz00_3052;
					}
				else
					{
						obj_t BgL_auxz00_4752;

						BgL_auxz00_4752 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 34716)),
							BGl_string2100z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_3052);
						FAILURE(BgL_auxz00_4752, BFALSE, BFALSE);
					}
				return
					BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4749,
					BgL_auxz00_4756);
			}
		}
	}



/* reduce */
	BGL_EXPORTED_DEF obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_fz00_114, obj_t BgL_ridentifyz00_115, obj_t BgL_listz00_116)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 930 */
			if (NULLP(BgL_listz00_116))
				{	/* Ieee/pairlist.scm 931 */
					return BgL_ridentifyz00_115;
				}
			else
				{	/* Ieee/pairlist.scm 931 */
					obj_t BgL_g1117z00_2558;

					obj_t BgL_g1118z00_2559;

					BgL_g1117z00_2558 = CDR(BgL_listz00_116);
					BgL_g1118z00_2559 = CAR(BgL_listz00_116);
					{
						obj_t BgL_listz00_2571;

						obj_t BgL_ansz00_2572;

						BgL_listz00_2571 = BgL_g1117z00_2558;
						BgL_ansz00_2572 = BgL_g1118z00_2559;
					BgL_loopz00_2570:
						if (PAIRP(BgL_listz00_2571))
							{	/* Ieee/pairlist.scm 931 */
								obj_t BgL_arg1644z00_2578;

								obj_t BgL_arg1645z00_2579;

								BgL_arg1644z00_2578 = CDR(BgL_listz00_2571);
								{	/* Ieee/pairlist.scm 931 */
									obj_t BgL_arg1646z00_2580;

									BgL_arg1646z00_2580 = CAR(BgL_listz00_2571);
									BgL_arg1645z00_2579 =
										PROCEDURE_ENTRY(BgL_fz00_114) (BgL_fz00_114,
										BgL_arg1646z00_2580, BgL_ansz00_2572, BEOA);
								}
								{
									obj_t BgL_ansz00_4777;

									obj_t BgL_listz00_4776;

									BgL_listz00_4776 = BgL_arg1644z00_2578;
									BgL_ansz00_4777 = BgL_arg1645z00_2579;
									BgL_ansz00_2572 = BgL_ansz00_4777;
									BgL_listz00_2571 = BgL_listz00_4776;
									goto BgL_loopz00_2570;
								}
							}
						else
							{	/* Ieee/pairlist.scm 931 */
								return BgL_ansz00_2572;
							}
					}
				}
		}
	}



/* _reduce */
	obj_t BGl__reducez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3054,
		obj_t BgL_fz00_3055, obj_t BgL_ridentifyz00_3056, obj_t BgL_listz00_3057)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 930 */
			{	/* Ieee/pairlist.scm 931 */
				obj_t BgL_auxz00_4785;

				obj_t BgL_auxz00_4778;

				{	/* Ieee/pairlist.scm 931 */
					bool_t BgL_testz00_4786;

					if (PAIRP(BgL_listz00_3057))
						{	/* Ieee/pairlist.scm 931 */
							BgL_testz00_4786 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 931 */
							BgL_testz00_4786 = NULLP(BgL_listz00_3057);
						}
					if (BgL_testz00_4786)
						{	/* Ieee/pairlist.scm 931 */
							BgL_auxz00_4785 = BgL_listz00_3057;
						}
					else
						{
							obj_t BgL_auxz00_4790;

							BgL_auxz00_4790 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 35056)),
								BGl_string2101z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_3057);
							FAILURE(BgL_auxz00_4790, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_fz00_3055))
					{	/* Ieee/pairlist.scm 931 */
						BgL_auxz00_4778 = BgL_fz00_3055;
					}
				else
					{
						obj_t BgL_auxz00_4781;

						BgL_auxz00_4781 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 35056)),
							BGl_string2101z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_fz00_3055);
						FAILURE(BgL_auxz00_4781, BFALSE, BFALSE);
					}
				return
					BGl_reducez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4778,
					BgL_ridentifyz00_3056, BgL_auxz00_4785);
			}
		}
	}



/* make-list */
	BGL_EXPORTED_DEF obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int
		BgL_nz00_117, obj_t BgL_oz00_118)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 942 */
			{	/* Ieee/pairlist.scm 943 */
				obj_t BgL_fillz00_1085;

				if (PAIRP(BgL_oz00_118))
					{	/* Ieee/pairlist.scm 943 */
						BgL_fillz00_1085 = CAR(BgL_oz00_118);
					}
				else
					{	/* Ieee/pairlist.scm 943 */
						BgL_fillz00_1085 = BUNSPEC;
					}
				{
					int BgL_iz00_2603;

					obj_t BgL_rz00_2604;

					BgL_iz00_2603 = BgL_nz00_117;
					BgL_rz00_2604 = BNIL;
				BgL_walkz00_2602:
					if (((long) (BgL_iz00_2603) <= ((long) 0)))
						{	/* Ieee/pairlist.scm 944 */
							return BgL_rz00_2604;
						}
					else
						{	/* Ieee/pairlist.scm 944 */
							long BgL_arg1650z00_2609;

							obj_t BgL_arg1651z00_2610;

							BgL_arg1650z00_2609 = ((long) (BgL_iz00_2603) - ((long) 1));
							BgL_arg1651z00_2610 = MAKE_PAIR(BgL_fillz00_1085, BgL_rz00_2604);
							{
								obj_t BgL_rz00_4806;

								int BgL_iz00_4804;

								BgL_iz00_4804 = (int) (BgL_arg1650z00_2609);
								BgL_rz00_4806 = BgL_arg1651z00_2610;
								BgL_rz00_2604 = BgL_rz00_4806;
								BgL_iz00_2603 = BgL_iz00_4804;
								goto BgL_walkz00_2602;
							}
						}
				}
			}
		}
	}



/* _make-list */
	obj_t BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3058,
		obj_t BgL_nz00_3059, obj_t BgL_oz00_3060)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 942 */
			{	/* Ieee/pairlist.scm 943 */
				int BgL_auxz00_4807;

				{	/* Ieee/pairlist.scm 943 */
					obj_t BgL_auxz00_4808;

					if (INTEGERP(BgL_nz00_3059))
						{	/* Ieee/pairlist.scm 943 */
							BgL_auxz00_4808 = BgL_nz00_3059;
						}
					else
						{
							obj_t BgL_auxz00_4811;

							BgL_auxz00_4811 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 35485)),
								BGl_string2102z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2103z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_3059);
							FAILURE(BgL_auxz00_4811, BFALSE, BFALSE);
						}
					BgL_auxz00_4807 = CINT(BgL_auxz00_4808);
				}
				return
					BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4807,
					BgL_oz00_3060);
			}
		}
	}



/* list-tabulate */
	BGL_EXPORTED_DEF obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int
		BgL_nz00_119, obj_t BgL_initzd2proczd2_120)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 952 */
			{	/* Ieee/pairlist.scm 953 */
				long BgL_g1120z00_1096;

				BgL_g1120z00_1096 = ((long) (BgL_nz00_119) - ((long) 1));
				{
					long BgL_iz00_2634;

					obj_t BgL_rz00_2635;

					BgL_iz00_2634 = BgL_g1120z00_1096;
					BgL_rz00_2635 = BNIL;
				BgL_walkz00_2633:
					if ((BgL_iz00_2634 < ((long) 0)))
						{	/* Ieee/pairlist.scm 953 */
							return BgL_rz00_2635;
						}
					else
						{	/* Ieee/pairlist.scm 953 */
							long BgL_arg1655z00_2641;

							obj_t BgL_arg1657z00_2642;

							BgL_arg1655z00_2641 = (BgL_iz00_2634 - ((long) 1));
							{	/* Ieee/pairlist.scm 953 */
								obj_t BgL_arg1659z00_2643;

								BgL_arg1659z00_2643 =
									PROCEDURE_ENTRY(BgL_initzd2proczd2_120)
									(BgL_initzd2proczd2_120, BINT(BgL_iz00_2634), BEOA);
								BgL_arg1657z00_2642 =
									MAKE_PAIR(BgL_arg1659z00_2643, BgL_rz00_2635);
							}
							{
								obj_t BgL_rz00_4827;

								long BgL_iz00_4826;

								BgL_iz00_4826 = BgL_arg1655z00_2641;
								BgL_rz00_4827 = BgL_arg1657z00_2642;
								BgL_rz00_2635 = BgL_rz00_4827;
								BgL_iz00_2634 = BgL_iz00_4826;
								goto BgL_walkz00_2633;
							}
						}
				}
			}
		}
	}



/* _list-tabulate */
	obj_t BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_3061, obj_t BgL_nz00_3062, obj_t BgL_initzd2proczd2_3063)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 952 */
			{	/* Ieee/pairlist.scm 953 */
				obj_t BgL_auxz00_4837;

				int BgL_auxz00_4828;

				if (PROCEDUREP(BgL_initzd2proczd2_3063))
					{	/* Ieee/pairlist.scm 953 */
						BgL_auxz00_4837 = BgL_initzd2proczd2_3063;
					}
				else
					{
						obj_t BgL_auxz00_4840;

						BgL_auxz00_4840 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 35896)),
							BGl_string2104z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2095z00zz__r4_pairs_and_lists_6_3z00,
							BgL_initzd2proczd2_3063);
						FAILURE(BgL_auxz00_4840, BFALSE, BFALSE);
					}
				{	/* Ieee/pairlist.scm 953 */
					obj_t BgL_auxz00_4829;

					if (INTEGERP(BgL_nz00_3062))
						{	/* Ieee/pairlist.scm 953 */
							BgL_auxz00_4829 = BgL_nz00_3062;
						}
					else
						{
							obj_t BgL_auxz00_4832;

							BgL_auxz00_4832 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 35896)),
								BGl_string2104z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2103z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_3062);
							FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
						}
					BgL_auxz00_4828 = CINT(BgL_auxz00_4829);
				}
				return
					BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4828,
					BgL_auxz00_4837);
			}
		}
	}



/* list-split */
	BGL_EXPORTED_DEF obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_121, int BgL_numz00_122, obj_t BgL_fillz00_123)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 961 */
			{
				obj_t BgL_lz00_1110;

				long BgL_iz00_1111;

				obj_t BgL_accz00_1112;

				obj_t BgL_resz00_1113;

				BgL_lz00_1110 = BgL_lz00_121;
				BgL_iz00_1111 = ((long) 0);
				BgL_accz00_1112 = BNIL;
				BgL_resz00_1113 = BNIL;
			BgL_zc3anonymousza31660ze3z83_1114:
				if (NULLP(BgL_lz00_1110))
					{	/* Ieee/pairlist.scm 968 */
						obj_t BgL_arg1662z00_1116;

						{	/* Ieee/pairlist.scm 968 */
							obj_t BgL_arg1663z00_1117;

							{	/* Ieee/pairlist.scm 968 */
								bool_t BgL_testz00_4847;

								if (NULLP(BgL_fillz00_123))
									{	/* Ieee/pairlist.scm 968 */
										BgL_testz00_4847 = ((bool_t) 1);
									}
								else
									{	/* Ieee/pairlist.scm 968 */
										if ((BgL_iz00_1111 == (long) (BgL_numz00_122)))
											{	/* Ieee/pairlist.scm 968 */
												BgL_testz00_4847 = ((bool_t) 1);
											}
										else
											{	/* Ieee/pairlist.scm 968 */
												BgL_testz00_4847 = (BgL_iz00_1111 == ((long) 0));
									}}
								if (BgL_testz00_4847)
									{	/* Ieee/pairlist.scm 968 */
										BgL_arg1663z00_1117 = bgl_reverse_bang(BgL_accz00_1112);
									}
								else
									{	/* Ieee/pairlist.scm 970 */
										obj_t BgL_arg1666z00_1119;

										obj_t BgL_arg1667z00_1120;

										BgL_arg1666z00_1119 = bgl_reverse_bang(BgL_accz00_1112);
										{	/* Ieee/pairlist.scm 971 */
											long BgL_arg1668z00_1121;

											obj_t BgL_arg1669z00_1122;

											BgL_arg1668z00_1121 =
												((long) (BgL_numz00_122) - BgL_iz00_1111);
											BgL_arg1669z00_1122 = CAR(BgL_fillz00_123);
											{	/* Ieee/pairlist.scm 971 */
												obj_t BgL_list1670z00_1123;

												BgL_list1670z00_1123 =
													MAKE_PAIR(BgL_arg1669z00_1122, BNIL);
												BgL_arg1667z00_1120 =
													BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
													(int) (BgL_arg1668z00_1121), BgL_list1670z00_1123);
										}}
										BgL_arg1663z00_1117 =
											BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1666z00_1119, BgL_arg1667z00_1120);
							}}
							BgL_arg1662z00_1116 =
								MAKE_PAIR(BgL_arg1663z00_1117, BgL_resz00_1113);
						}
						return bgl_reverse_bang(BgL_arg1662z00_1116);
					}
				else
					{	/* Ieee/pairlist.scm 967 */
						if ((BgL_iz00_1111 == (long) (BgL_numz00_122)))
							{	/* Ieee/pairlist.scm 974 */
								obj_t BgL_arg1676z00_1129;

								BgL_arg1676z00_1129 =
									MAKE_PAIR(bgl_reverse_bang(BgL_accz00_1112), BgL_resz00_1113);
								{
									obj_t BgL_resz00_4872;

									obj_t BgL_accz00_4871;

									long BgL_iz00_4870;

									BgL_iz00_4870 = ((long) 0);
									BgL_accz00_4871 = BNIL;
									BgL_resz00_4872 = BgL_arg1676z00_1129;
									BgL_resz00_1113 = BgL_resz00_4872;
									BgL_accz00_1112 = BgL_accz00_4871;
									BgL_iz00_1111 = BgL_iz00_4870;
									goto BgL_zc3anonymousza31660ze3z83_1114;
								}
							}
						else
							{	/* Ieee/pairlist.scm 976 */
								obj_t BgL_arg1678z00_1131;

								long BgL_arg1680z00_1132;

								obj_t BgL_arg1684z00_1133;

								BgL_arg1678z00_1131 = CDR(BgL_lz00_1110);
								BgL_arg1680z00_1132 = (BgL_iz00_1111 + ((long) 1));
								BgL_arg1684z00_1133 =
									MAKE_PAIR(CAR(BgL_lz00_1110), BgL_accz00_1112);
								{
									obj_t BgL_accz00_4879;

									long BgL_iz00_4878;

									obj_t BgL_lz00_4877;

									BgL_lz00_4877 = BgL_arg1678z00_1131;
									BgL_iz00_4878 = BgL_arg1680z00_1132;
									BgL_accz00_4879 = BgL_arg1684z00_1133;
									BgL_accz00_1112 = BgL_accz00_4879;
									BgL_iz00_1111 = BgL_iz00_4878;
									BgL_lz00_1110 = BgL_lz00_4877;
									goto BgL_zc3anonymousza31660ze3z83_1114;
								}
							}
					}
			}
		}
	}



/* _list-split */
	obj_t BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3064,
		obj_t BgL_lz00_3065, obj_t BgL_numz00_3066, obj_t BgL_fillz00_3067)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 961 */
			{	/* Ieee/pairlist.scm 967 */
				int BgL_auxz00_4889;

				obj_t BgL_auxz00_4880;

				{	/* Ieee/pairlist.scm 967 */
					obj_t BgL_auxz00_4890;

					if (INTEGERP(BgL_numz00_3066))
						{	/* Ieee/pairlist.scm 967 */
							BgL_auxz00_4890 = BgL_numz00_3066;
						}
					else
						{
							obj_t BgL_auxz00_4893;

							BgL_auxz00_4893 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 36341)),
								BGl_string2105z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2103z00zz__r4_pairs_and_lists_6_3z00,
								BgL_numz00_3066);
							FAILURE(BgL_auxz00_4893, BFALSE, BFALSE);
						}
					BgL_auxz00_4889 = CINT(BgL_auxz00_4890);
				}
				{	/* Ieee/pairlist.scm 967 */
					bool_t BgL_testz00_4881;

					if (PAIRP(BgL_lz00_3065))
						{	/* Ieee/pairlist.scm 967 */
							BgL_testz00_4881 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 967 */
							BgL_testz00_4881 = NULLP(BgL_lz00_3065);
						}
					if (BgL_testz00_4881)
						{	/* Ieee/pairlist.scm 967 */
							BgL_auxz00_4880 = BgL_lz00_3065;
						}
					else
						{
							obj_t BgL_auxz00_4885;

							BgL_auxz00_4885 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 36341)),
								BGl_string2105z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_3065);
							FAILURE(BgL_auxz00_4885, BFALSE, BFALSE);
				}}
				return
					BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4880,
					BgL_auxz00_4889, BgL_fillz00_3067);
			}
		}
	}



/* list-split! */
	BGL_EXPORTED_DEF obj_t
		BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_124,
		int BgL_numz00_125, obj_t BgL_fillz00_126)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 981 */
			{
				obj_t BgL_lz00_1138;

				long BgL_iz00_1139;

				obj_t BgL_lastz00_1140;

				obj_t BgL_accz00_1141;

				obj_t BgL_rowsz00_1142;

				BgL_lz00_1138 = BgL_lz00_124;
				BgL_iz00_1139 = ((long) 0);
				BgL_lastz00_1140 = BFALSE;
				BgL_accz00_1141 = BgL_lz00_124;
				BgL_rowsz00_1142 = BNIL;
			BgL_zc3anonymousza31686ze3z83_1143:
				if (NULLP(BgL_lz00_1138))
					{	/* Ieee/pairlist.scm 989 */
						obj_t BgL_lrowz00_1145;

						{	/* Ieee/pairlist.scm 989 */
							bool_t BgL_testz00_4901;

							if (NULLP(BgL_fillz00_126))
								{	/* Ieee/pairlist.scm 989 */
									BgL_testz00_4901 = ((bool_t) 1);
								}
							else
								{	/* Ieee/pairlist.scm 989 */
									if ((BgL_iz00_1139 == (long) (BgL_numz00_125)))
										{	/* Ieee/pairlist.scm 989 */
											BgL_testz00_4901 = ((bool_t) 1);
										}
									else
										{	/* Ieee/pairlist.scm 989 */
											BgL_testz00_4901 = (BgL_iz00_1139 == ((long) 0));
								}}
							if (BgL_testz00_4901)
								{	/* Ieee/pairlist.scm 989 */
									BgL_lrowz00_1145 = BgL_accz00_1141;
								}
							else
								{	/* Ieee/pairlist.scm 989 */
									{	/* Ieee/pairlist.scm 993 */
										obj_t BgL_arg1690z00_1148;

										{	/* Ieee/pairlist.scm 993 */
											long BgL_arg1691z00_1149;

											obj_t BgL_arg1692z00_1150;

											BgL_arg1691z00_1149 =
												((long) (BgL_numz00_125) - BgL_iz00_1139);
											BgL_arg1692z00_1150 = CAR(BgL_fillz00_126);
											{	/* Ieee/pairlist.scm 993 */
												obj_t BgL_list1693z00_1151;

												BgL_list1693z00_1151 =
													MAKE_PAIR(BgL_arg1692z00_1150, BNIL);
												BgL_arg1690z00_1148 =
													BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
													(int) (BgL_arg1691z00_1149), BgL_list1693z00_1151);
										}}
										SET_CDR(BgL_lastz00_1140, BgL_arg1690z00_1148);
									}
									BgL_lrowz00_1145 = BgL_accz00_1141;
						}}
						{	/* Ieee/pairlist.scm 995 */
							obj_t BgL_arg1688z00_1146;

							BgL_arg1688z00_1146 =
								MAKE_PAIR(BgL_lrowz00_1145, BgL_rowsz00_1142);
							return bgl_reverse_bang(BgL_arg1688z00_1146);
						}
					}
				else
					{	/* Ieee/pairlist.scm 988 */
						if ((BgL_iz00_1139 == (long) (BgL_numz00_125)))
							{	/* Ieee/pairlist.scm 996 */
								SET_CDR(BgL_lastz00_1140, BNIL);
								{	/* Ieee/pairlist.scm 998 */
									obj_t BgL_arg1700z00_1156;

									BgL_arg1700z00_1156 =
										MAKE_PAIR(BgL_accz00_1141, BgL_rowsz00_1142);
									{
										obj_t BgL_rowsz00_4925;

										obj_t BgL_accz00_4924;

										obj_t BgL_lastz00_4923;

										long BgL_iz00_4922;

										BgL_iz00_4922 = ((long) 0);
										BgL_lastz00_4923 = BgL_lz00_1138;
										BgL_accz00_4924 = BgL_lz00_1138;
										BgL_rowsz00_4925 = BgL_arg1700z00_1156;
										BgL_rowsz00_1142 = BgL_rowsz00_4925;
										BgL_accz00_1141 = BgL_accz00_4924;
										BgL_lastz00_1140 = BgL_lastz00_4923;
										BgL_iz00_1139 = BgL_iz00_4922;
										goto BgL_zc3anonymousza31686ze3z83_1143;
									}
								}
							}
						else
							{
								obj_t BgL_lastz00_4930;

								long BgL_iz00_4928;

								obj_t BgL_lz00_4926;

								BgL_lz00_4926 = CDR(BgL_lz00_1138);
								BgL_iz00_4928 = (BgL_iz00_1139 + ((long) 1));
								BgL_lastz00_4930 = BgL_lz00_1138;
								BgL_lastz00_1140 = BgL_lastz00_4930;
								BgL_iz00_1139 = BgL_iz00_4928;
								BgL_lz00_1138 = BgL_lz00_4926;
								goto BgL_zc3anonymousza31686ze3z83_1143;
							}
					}
			}
		}
	}



/* _list-split! */
	obj_t BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_3068, obj_t BgL_lz00_3069, obj_t BgL_numz00_3070,
		obj_t BgL_fillz00_3071)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 981 */
			{	/* Ieee/pairlist.scm 988 */
				int BgL_auxz00_4940;

				obj_t BgL_auxz00_4931;

				{	/* Ieee/pairlist.scm 988 */
					obj_t BgL_auxz00_4941;

					if (INTEGERP(BgL_numz00_3070))
						{	/* Ieee/pairlist.scm 988 */
							BgL_auxz00_4941 = BgL_numz00_3070;
						}
					else
						{
							obj_t BgL_auxz00_4944;

							BgL_auxz00_4944 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 37011)),
								BGl_string2106z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2103z00zz__r4_pairs_and_lists_6_3z00,
								BgL_numz00_3070);
							FAILURE(BgL_auxz00_4944, BFALSE, BFALSE);
						}
					BgL_auxz00_4940 = CINT(BgL_auxz00_4941);
				}
				{	/* Ieee/pairlist.scm 988 */
					bool_t BgL_testz00_4932;

					if (PAIRP(BgL_lz00_3069))
						{	/* Ieee/pairlist.scm 988 */
							BgL_testz00_4932 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 988 */
							BgL_testz00_4932 = NULLP(BgL_lz00_3069);
						}
					if (BgL_testz00_4932)
						{	/* Ieee/pairlist.scm 988 */
							BgL_auxz00_4931 = BgL_lz00_3069;
						}
					else
						{
							obj_t BgL_auxz00_4936;

							BgL_auxz00_4936 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 37011)),
								BGl_string2106z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_3069);
							FAILURE(BgL_auxz00_4936, BFALSE, BFALSE);
				}}
				return
					BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4931,
					BgL_auxz00_4940, BgL_fillz00_3071);
			}
		}
	}



/* iota */
	BGL_EXPORTED_DEF obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int
		BgL_countz00_127, obj_t BgL_restz00_128)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1005 */
			{	/* Ieee/pairlist.scm 1006 */
				obj_t BgL_startz00_1160;

				obj_t BgL_stepz00_1161;

				BgL_startz00_1160 = BINT(((long) 0));
				BgL_stepz00_1161 = BINT(((long) 1));
				if (PAIRP(BgL_restz00_128))
					{	/* Ieee/pairlist.scm 1008 */
						BgL_startz00_1160 = CAR(BgL_restz00_128);
						{	/* Ieee/pairlist.scm 1011 */
							bool_t BgL_testz00_4955;

							{	/* Ieee/pairlist.scm 1011 */
								obj_t BgL_auxz00_4956;

								BgL_auxz00_4956 = CDR(BgL_restz00_128);
								BgL_testz00_4955 = PAIRP(BgL_auxz00_4956);
							}
							if (BgL_testz00_4955)
								{	/* Ieee/pairlist.scm 1011 */
									BgL_stepz00_1161 = CAR(CDR(BgL_restz00_128));
								}
							else
								{	/* Ieee/pairlist.scm 1011 */
									BFALSE;
								}
						}
					}
				else
					{	/* Ieee/pairlist.scm 1008 */
						BFALSE;
					}
				{	/* Ieee/pairlist.scm 1013 */
					obj_t BgL_g1125z00_1165;

					{	/* Ieee/pairlist.scm 1013 */
						obj_t BgL_arg1711z00_1177;

						{	/* Ieee/pairlist.scm 1013 */
							long BgL_arg1713z00_1178;

							BgL_arg1713z00_1178 =
								(long)
								CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(BgL_countz00_127),
									BINT(((long) 1))));
							BgL_arg1711z00_1177 =
								BGl_2za2za2zz__r4_numbers_6_5z00(BINT(BgL_arg1713z00_1178),
								BgL_stepz00_1161);
						}
						BgL_g1125z00_1165 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_startz00_1160,
							BgL_arg1711z00_1177);
					}
					{
						int BgL_iz00_2708;

						obj_t BgL_vz00_2709;

						obj_t BgL_rz00_2710;

						BgL_iz00_2708 = BgL_countz00_127;
						BgL_vz00_2709 = BgL_g1125z00_1165;
						BgL_rz00_2710 = BNIL;
					BgL_walkz00_2707:
						if (((long) (BgL_iz00_2708) <= ((long) 0)))
							{	/* Ieee/pairlist.scm 1013 */
								return BgL_rz00_2710;
							}
						else
							{	/* Ieee/pairlist.scm 1013 */
								long BgL_arg1708z00_2716;

								obj_t BgL_arg1709z00_2717;

								obj_t BgL_arg1710z00_2718;

								BgL_arg1708z00_2716 = ((long) (BgL_iz00_2708) - ((long) 1));
								BgL_arg1709z00_2717 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_vz00_2709,
									BgL_stepz00_1161);
								BgL_arg1710z00_2718 = MAKE_PAIR(BgL_vz00_2709, BgL_rz00_2710);
								{
									obj_t BgL_rz00_4978;

									obj_t BgL_vz00_4977;

									int BgL_iz00_4975;

									BgL_iz00_4975 = (int) (BgL_arg1708z00_2716);
									BgL_vz00_4977 = BgL_arg1709z00_2717;
									BgL_rz00_4978 = BgL_arg1710z00_2718;
									BgL_rz00_2710 = BgL_rz00_4978;
									BgL_vz00_2709 = BgL_vz00_4977;
									BgL_iz00_2708 = BgL_iz00_4975;
									goto BgL_walkz00_2707;
								}
							}
					}
				}
			}
		}
	}



/* _iota */
	obj_t BGl__iotaz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3072,
		obj_t BgL_countz00_3073, obj_t BgL_restz00_3074)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1005 */
			{	/* Ieee/pairlist.scm 1006 */
				int BgL_auxz00_4979;

				{	/* Ieee/pairlist.scm 1006 */
					obj_t BgL_auxz00_4980;

					if (INTEGERP(BgL_countz00_3073))
						{	/* Ieee/pairlist.scm 1006 */
							BgL_auxz00_4980 = BgL_countz00_3073;
						}
					else
						{
							obj_t BgL_auxz00_4983;

							BgL_auxz00_4983 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 37601)),
								BGl_string2107z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2103z00zz__r4_pairs_and_lists_6_3z00,
								BgL_countz00_3073);
							FAILURE(BgL_auxz00_4983, BFALSE, BFALSE);
						}
					BgL_auxz00_4979 = CINT(BgL_auxz00_4980);
				}
				return
					BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4979,
					BgL_restz00_3074);
			}
		}
	}



/* list-copy */
	BGL_EXPORTED_DEF obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_129)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1021 */
			if (PAIRP(BgL_lz00_129))
				{	/* Ieee/pairlist.scm 1022 */
					obj_t BgL_arg1715z00_2743;

					obj_t BgL_arg1718z00_2744;

					BgL_arg1715z00_2743 = CAR(BgL_lz00_129);
					{	/* Ieee/pairlist.scm 1022 */
						obj_t BgL_arg1719z00_2745;

						BgL_arg1719z00_2745 = CDR(BgL_lz00_129);
						{	/* Ieee/pairlist.scm 1022 */
							obj_t BgL_res1846z00_2757;

							{	/* Ieee/pairlist.scm 1022 */
								obj_t BgL_lz00_2749;

								BgL_lz00_2749 = BgL_arg1719z00_2745;
								if (PAIRP(BgL_lz00_2749))
									{	/* Ieee/pairlist.scm 1022 */
										BgL_res1846z00_2757 =
											MAKE_PAIR(CAR(BgL_lz00_2749),
											BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(CDR
												(BgL_lz00_2749)));
									}
								else
									{	/* Ieee/pairlist.scm 1022 */
										BgL_res1846z00_2757 = BgL_lz00_2749;
									}
							}
							BgL_arg1718z00_2744 = BgL_res1846z00_2757;
						}
					}
					return MAKE_PAIR(BgL_arg1715z00_2743, BgL_arg1718z00_2744);
				}
			else
				{	/* Ieee/pairlist.scm 1022 */
					return BgL_lz00_129;
				}
		}
	}



/* _list-copy */
	obj_t BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3075,
		obj_t BgL_lz00_3076)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1021 */
			{	/* Ieee/pairlist.scm 1022 */
				obj_t BgL_auxz00_5000;

				{	/* Ieee/pairlist.scm 1022 */
					bool_t BgL_testz00_5001;

					if (PAIRP(BgL_lz00_3076))
						{	/* Ieee/pairlist.scm 1022 */
							BgL_testz00_5001 = ((bool_t) 1);
						}
					else
						{	/* Ieee/pairlist.scm 1022 */
							BgL_testz00_5001 = NULLP(BgL_lz00_3076);
						}
					if (BgL_testz00_5001)
						{	/* Ieee/pairlist.scm 1022 */
							BgL_auxz00_5000 = BgL_lz00_3076;
						}
					else
						{
							obj_t BgL_auxz00_5005;

							BgL_auxz00_5005 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 38145)),
								BGl_string2108z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2070z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_3076);
							FAILURE(BgL_auxz00_5005, BFALSE, BFALSE);
				}}
				return BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5000);
			}
		}
	}



/* tree-copy */
	BGL_EXPORTED_DEF obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_130)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1029 */
			if (EXTENDED_PAIRP(BgL_lz00_130))
				{	/* Ieee/pairlist.scm 1032 */
					obj_t BgL_arg1724z00_1184;

					obj_t BgL_arg1725z00_1185;

					obj_t BgL_arg1729z00_1186;

					BgL_arg1724z00_1184 =
						BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CAR(BgL_lz00_130));
					BgL_arg1725z00_1185 =
						BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CDR(BgL_lz00_130));
					BgL_arg1729z00_1186 =
						BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CER(BgL_lz00_130));
					{	/* Ieee/pairlist.scm 1032 */
						obj_t BgL_res1847z00_2765;

						BgL_res1847z00_2765 =
							MAKE_EXTENDED_PAIR(BgL_arg1724z00_1184, BgL_arg1725z00_1185,
							BgL_arg1729z00_1186);
						return BgL_res1847z00_2765;
					}
				}
			else
				{	/* Ieee/pairlist.scm 1031 */
					if (PAIRP(BgL_lz00_130))
						{	/* Ieee/pairlist.scm 1033 */
							return
								MAKE_PAIR(BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CAR
									(BgL_lz00_130)),
								BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CDR
									(BgL_lz00_130)));
						}
					else
						{	/* Ieee/pairlist.scm 1033 */
							return BgL_lz00_130;
						}
				}
		}
	}



/* _tree-copy */
	obj_t BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_3077,
		obj_t BgL_lz00_3078)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1029 */
			return BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_3078);
		}
	}



/* _delete-duplicates */
	obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_134, obj_t BgL_optz00_133)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1041 */
			{	/* Ieee/pairlist.scm 1041 */
				obj_t BgL_g1201z00_1195;

				BgL_g1201z00_1195 = VECTOR_REF(BgL_optz00_133, (int) (((long) 0)));
				{	/* Ieee/pairlist.scm 1041 */
					int BgL_aux1203z00_1197;

					BgL_aux1203z00_1197 = VECTOR_LENGTH(BgL_optz00_133);
					switch ((long) (BgL_aux1203z00_1197))
						{
						case ((long) 1):

							{	/* Ieee/pairlist.scm 1041 */

								{	/* Ieee/pairlist.scm 1041 */
									obj_t BgL_arg1740z00_1200;

									BgL_arg1740z00_1200 =
										VECTOR_REF(BgL_optz00_133, (int) (((long) 0)));
									{	/* Ieee/pairlist.scm 1041 */
										obj_t BgL_res1848z00_2772;

										{	/* Ieee/pairlist.scm 1041 */
											obj_t BgL_lisz00_2769;

											{	/* Ieee/pairlist.scm 1041 */
												bool_t BgL_testz00_5032;

												if (PAIRP(BgL_arg1740z00_1200))
													{	/* Ieee/pairlist.scm 1041 */
														BgL_testz00_5032 = ((bool_t) 1);
													}
												else
													{	/* Ieee/pairlist.scm 1041 */
														BgL_testz00_5032 = NULLP(BgL_arg1740z00_1200);
													}
												if (BgL_testz00_5032)
													{	/* Ieee/pairlist.scm 1041 */
														BgL_lisz00_2769 = BgL_arg1740z00_1200;
													}
												else
													{
														obj_t BgL_auxz00_5036;

														BgL_auxz00_5036 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
															BINT(((long) 38879)),
															BGl_string2109z00zz__r4_pairs_and_lists_6_3z00,
															BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
															BgL_arg1740z00_1200);
														FAILURE(BgL_auxz00_5036, BFALSE, BFALSE);
											}}
											BgL_res1848z00_2772 =
												BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
												(BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00
												(BgL_lisz00_2769),
												BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
										}
										return BgL_res1848z00_2772;
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/pairlist.scm 1041 */
								obj_t BgL_eqz00_1201;

								BgL_eqz00_1201 = VECTOR_REF(BgL_optz00_133, (int) (((long) 1)));
								{	/* Ieee/pairlist.scm 1041 */

									{	/* Ieee/pairlist.scm 1041 */
										obj_t BgL_arg1741z00_1202;

										BgL_arg1741z00_1202 =
											VECTOR_REF(BgL_optz00_133, (int) (((long) 0)));
										{	/* Ieee/pairlist.scm 1041 */
											obj_t BgL_res1849z00_2776;

											{	/* Ieee/pairlist.scm 1041 */
												obj_t BgL_lisz00_2773;

												{	/* Ieee/pairlist.scm 1041 */
													bool_t BgL_testz00_5046;

													if (PAIRP(BgL_arg1741z00_1202))
														{	/* Ieee/pairlist.scm 1041 */
															BgL_testz00_5046 = ((bool_t) 1);
														}
													else
														{	/* Ieee/pairlist.scm 1041 */
															BgL_testz00_5046 = NULLP(BgL_arg1741z00_1202);
														}
													if (BgL_testz00_5046)
														{	/* Ieee/pairlist.scm 1041 */
															BgL_lisz00_2773 = BgL_arg1741z00_1202;
														}
													else
														{
															obj_t BgL_auxz00_5050;

															BgL_auxz00_5050 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
																BINT(((long) 38879)),
																BGl_string2109z00zz__r4_pairs_and_lists_6_3z00,
																BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
																BgL_arg1741z00_1202);
															FAILURE(BgL_auxz00_5050, BFALSE, BFALSE);
												}}
												BgL_res1849z00_2776 =
													BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
													(BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00
													(BgL_lisz00_2773), BgL_eqz00_1201);
											}
											return BgL_res1849z00_2776;
										}
									}
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



/* delete-duplicates */
	BGL_EXPORTED_DEF obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lisz00_131, obj_t BgL_eqz00_132)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1041 */
			return
				BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
				(BGl_listzd2copyz72za0zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_131),
				BgL_eqz00_132);
		}
	}



/* list-copy' */
	obj_t BGl_listzd2copyz72za0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_2779)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1021 */
			if (PAIRP(BgL_lz00_2779))
				{	/* Ieee/pairlist.scm 1042 */
					return
						MAKE_PAIR(CAR(BgL_lz00_2779),
						BGl_listzd2copyz72za0zz__r4_pairs_and_lists_6_3z00(CDR
							(BgL_lz00_2779)));
				}
			else
				{	/* Ieee/pairlist.scm 1042 */
					return BgL_lz00_2779;
				}
		}
	}



/* _delete-duplicates! */
	obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_138, obj_t BgL_optz00_137)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1047 */
			{	/* Ieee/pairlist.scm 1047 */
				obj_t BgL_g1204z00_1204;

				BgL_g1204z00_1204 = VECTOR_REF(BgL_optz00_137, (int) (((long) 0)));
				{	/* Ieee/pairlist.scm 1047 */
					int BgL_aux1206z00_1206;

					BgL_aux1206z00_1206 = VECTOR_LENGTH(BgL_optz00_137);
					switch ((long) (BgL_aux1206z00_1206))
						{
						case ((long) 1):

							{	/* Ieee/pairlist.scm 1047 */

								{	/* Ieee/pairlist.scm 1047 */
									obj_t BgL_arg1744z00_1209;

									BgL_arg1744z00_1209 =
										VECTOR_REF(BgL_optz00_137, (int) (((long) 0)));
									{	/* Ieee/pairlist.scm 1047 */
										obj_t BgL_auxz00_5071;

										{	/* Ieee/pairlist.scm 1047 */
											bool_t BgL_testz00_5072;

											if (PAIRP(BgL_arg1744z00_1209))
												{	/* Ieee/pairlist.scm 1047 */
													BgL_testz00_5072 = ((bool_t) 1);
												}
											else
												{	/* Ieee/pairlist.scm 1047 */
													BgL_testz00_5072 = NULLP(BgL_arg1744z00_1209);
												}
											if (BgL_testz00_5072)
												{	/* Ieee/pairlist.scm 1047 */
													BgL_auxz00_5071 = BgL_arg1744z00_1209;
												}
											else
												{
													obj_t BgL_auxz00_5076;

													BgL_auxz00_5076 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
														BINT(((long) 39201)),
														BGl_string2110z00zz__r4_pairs_and_lists_6_3z00,
														BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
														BgL_arg1744z00_1209);
													FAILURE(BgL_auxz00_5076, BFALSE, BFALSE);
										}}
										return
											BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
											(BgL_auxz00_5071,
											BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/pairlist.scm 1047 */
								obj_t BgL_eqz00_1210;

								BgL_eqz00_1210 = VECTOR_REF(BgL_optz00_137, (int) (((long) 1)));
								{	/* Ieee/pairlist.scm 1047 */

									{	/* Ieee/pairlist.scm 1047 */
										obj_t BgL_arg1745z00_1211;

										BgL_arg1745z00_1211 =
											VECTOR_REF(BgL_optz00_137, (int) (((long) 0)));
										{	/* Ieee/pairlist.scm 1047 */
											obj_t BgL_auxz00_5085;

											{	/* Ieee/pairlist.scm 1047 */
												bool_t BgL_testz00_5086;

												if (PAIRP(BgL_arg1745z00_1211))
													{	/* Ieee/pairlist.scm 1047 */
														BgL_testz00_5086 = ((bool_t) 1);
													}
												else
													{	/* Ieee/pairlist.scm 1047 */
														BgL_testz00_5086 = NULLP(BgL_arg1745z00_1211);
													}
												if (BgL_testz00_5086)
													{	/* Ieee/pairlist.scm 1047 */
														BgL_auxz00_5085 = BgL_arg1745z00_1211;
													}
												else
													{
														obj_t BgL_auxz00_5090;

														BgL_auxz00_5090 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2032z00zz__r4_pairs_and_lists_6_3z00,
															BINT(((long) 39201)),
															BGl_string2110z00zz__r4_pairs_and_lists_6_3z00,
															BGl_string2070z00zz__r4_pairs_and_lists_6_3z00,
															BgL_arg1745z00_1211);
														FAILURE(BgL_auxz00_5090, BFALSE, BFALSE);
											}}
											return
												BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_5085, BgL_eqz00_1210);
										}
									}
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



/* delete-duplicates! */
	BGL_EXPORTED_DEF obj_t
		BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lisz00_135, obj_t BgL_eqz00_136)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1047 */
			if (PROCEDUREP(BgL_eqz00_136))
				{	/* Ieee/pairlist.scm 1048 */
					BFALSE;
				}
			else
				{	/* Ieee/pairlist.scm 1048 */
					BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2111z00zz__r4_pairs_and_lists_6_3z00,
						BGl_string2095z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_136);
				}
			return
				BGl_recurz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_136,
				BgL_lisz00_135);
		}
	}



/* recur */
	obj_t BGl_recurz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_3079,
		obj_t BgL_lisz00_1214)
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 1050 */
			if (PAIRP(BgL_lisz00_1214))
				{	/* Ieee/pairlist.scm 1052 */
					obj_t BgL_xz00_1217;

					BgL_xz00_1217 = CAR(BgL_lisz00_1214);
					{	/* Ieee/pairlist.scm 1052 */
						obj_t BgL_tailz00_1218;

						BgL_tailz00_1218 = CDR(BgL_lisz00_1214);
						{	/* Ieee/pairlist.scm 1053 */
							obj_t BgL_newzd2tailzd2_1219;

							BgL_newzd2tailzd2_1219 =
								BGl_recurz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_3079,
								BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1217,
									BgL_tailz00_1218, BgL_eqz00_3079));
							{	/* Ieee/pairlist.scm 1054 */

								if ((BgL_tailz00_1218 == BgL_newzd2tailzd2_1219))
									{	/* Ieee/pairlist.scm 1055 */
										return BgL_lisz00_1214;
									}
								else
									{	/* Ieee/pairlist.scm 1055 */
										return MAKE_PAIR(BgL_xz00_1217, BgL_newzd2tailzd2_1219);
									}
							}
						}
					}
				}
			else
				{	/* Ieee/pairlist.scm 1051 */
					return BgL_lisz00_1214;
				}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/pairlist.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2113z00zz__r4_pairs_and_lists_6_3z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2113z00zz__r4_pairs_and_lists_6_3z00));
		}
	}

#ifdef __cplusplus
}
#endif
