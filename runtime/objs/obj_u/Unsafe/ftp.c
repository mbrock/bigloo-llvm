/*===========================================================================*/
/*   (Unsafe/ftp.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/ftp.scm -indent -o objs/obj_u/Unsafe/ftp.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z52ftpz52_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
	}                *BgL_z52ftpz52_bglt;

	typedef struct BgL_ftpz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
		obj_t BgL_hostz00;
		obj_t BgL_portz00;
		obj_t BgL_motdz00;
		obj_t BgL_userz00;
		obj_t BgL_passz00;
		obj_t BgL_acctz00;
	}             *BgL_ftpz00_bglt;

	typedef struct BgL_z62ftpzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                        *BgL_z62ftpzd2errorzb0_bglt;

	typedef struct BgL_z62ftpzd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62ftpzd2parsezd2errorz62_bglt;


	static obj_t BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00 = BUNSPEC;
	static obj_t BGl__makezd2ftpzd2zz__ftpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2userzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32506ze3z83zz__ftpz00(obj_t);
	static obj_t BGl__ftpzd2reinitializa7ez75zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_ftpz00_bglt BGl_ftpzd2nilzd2zz__ftpz00();
	static obj_t BGl__fillzd2z62ftpzd2parsezd2errorz12za2zz__ftpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2ftpz12zc0zz__ftpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2helpzd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2deletezd2zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_fillzd2z62ftpzd2parsezd2errorz12za2zz__ftpz00
		(BgL_z62ftpzd2parsezd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2directoryzd2ze3listze3zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__ftpzd2makezd2directoryz00zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52ftpzf3za1zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2restartzd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__ftpzd2hostzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2222z83zz__ftpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2226z83zz__ftpz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ftpz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec2230z83zz__ftpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2noopzd2zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2abortzd2zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	extern obj_t socket_shutdown(obj_t, bool_t);
	BGL_EXPORTED_DECL BgL_z52ftpz52_bglt BGl_z52ftpzd2nilz80zz__ftpz00();
	static obj_t BGl_ftpportzd2ze3hostportz31zz__ftpz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__ftpz00();
	BGL_EXPORTED_DECL bool_t BGl_z62ftpzd2parsezd2errorzf3z91zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL BgL_z52ftpz52_bglt BGl_z52allocatezd2z52ftpzd2zz__ftpz00();
	static obj_t BGl__ftpzd2connectzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL BgL_z52ftpz52_bglt
		BGl_fillzd2z52ftpz12z92zz__ftpz00(BgL_z52ftpz52_bglt, obj_t, obj_t, bool_t);
	extern bool_t fexists(char *);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2errorzb0_bglt
		BGl_z62ftpzd2errorzd2nilz62zz__ftpz00();
	BGL_EXPORTED_DECL bool_t BGl_z62ftpzd2errorzf3z43zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ftpz00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__ftpzd2systemzd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl__ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2acctzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3339z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3341z00zz__ftpz00 = BUNSPEC;
	extern obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__fillzd2z62ftpzd2errorz12z70zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2mountzd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32534ze3z83zz__ftpz00(obj_t);
	static obj_t BGl_symbol3372z00zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2listzd2zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2storezd2zz__ftpz00(BgL_ftpz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(obj_t);
	extern obj_t socket_close(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2pwdzd2zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl__ftpzd2renamezd2filez00zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2printzd2ftp2208z00zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62ftpzd22220z53zz__ftpz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32701ze3z83zz__ftpz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__ftpz00();
	static obj_t BGl_objectzd2ze3structzd2z62ftpzd22224z53zz__ftpz00(obj_t,
		obj_t);
	static obj_t BGl__ftpzd2allocatezd2zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3455z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3457z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3459z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3461z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__ftpzd2retrievezd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2appendzd2zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3465z00zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3466z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3469z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3471z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62ftpzd2errorzb0_bglt
		BGl_z52allocatezd2z62ftpzd2errorz30zz__ftpz00();
	static obj_t BGl_symbol3473z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3475z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol3477z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__ftpzd2cdzd2parentz00zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_symbol3479z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__ftpzd2userzd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_symbol3481z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2cdzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl__ftpzd2namezd2listz00zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2deletezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	static obj_t BGl__ftpzd2putzd2filez00zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52ftpzd2dtpzd2setz12z40zz__ftpz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl__ftpzd2datazd2typez00zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_keyword3352z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_keyword3355z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__z62ftpzd2parsezd2errorzf3z91zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_keyword3358z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__ftpz00();
	extern bool_t rgc_buffer_bol_p(obj_t);
	static obj_t BGl_keyword3364z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_keyword3366z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32711ze3z83zz__ftpz00(obj_t, obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__z52allocatezd2z62ftpzd2errorz30zz__ftpz00(obj_t);
	extern long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl_zc3anonymousza32712ze3z83zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00();
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2passivezd2zz__ftpz00(BgL_ftpz00_bglt);
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__ftpzd2restartzd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32273ze3z83zz__ftpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	static obj_t BGl__z52ftpzd2nilz80zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2allocatezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z52ftpzd2readzd2dtpz52zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z52allocatezd2z62ftpzd2parsezd2errorze2zz__ftpz00();
	static obj_t BGl__ftpzd2motdzd2zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2retrievezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	static obj_t BGl__ftpzd2copyzd2filez00zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2errorzb0_bglt
		BGl_makezd2z62ftpzd2errorz62zz__ftpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2rmdirzd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	static obj_t BGl__z52ftpzd2passivezf3zd2setz12zb3zz__ftpz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
	static obj_t BGl__ftpzd2passzd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_thezd2substringzd2zz__ftpz00(obj_t, int, int);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__ftpzd2nilzd2zz__ftpz00(obj_t);
	static obj_t BGl__ftpzd2statuszd2zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__ftpzd2motdzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2systemzd2zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl__z62ftpzd2errorzf3z43zz__ftpz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL BgL_ftpz00_bglt
		BGl_fillzd2ftpz12zc0zz__ftpz00(BgL_ftpz00_bglt, obj_t, obj_t, bool_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2z62ftpzd2parsezd2errorze2zz__ftpz00(obj_t);
	static obj_t BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__ftpz00();
	static obj_t BGl__ftpzf3zf3zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z52ftpz52zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_z62ftpzd2errorzb0zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl__ftpzd2portzd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl__ftpzd2transferzd2modez00zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z52ftpzd2cmdz80zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	static obj_t BGl__z52ftpzd2cmdzd2setz12z40zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2portzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2appendzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__makezd2z62ftpzd2errorz62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2abortzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z52ftpzd2passivezf3z73zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_z62errorz62zz__objectz00;
	static obj_t BGl_objectzd2ze3structzd2ftp2228ze3zz__ftpz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2ftpz80zz__ftpz00(obj_t);
	static obj_t BGl__ftpzd2logoutzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2mountzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl__ftpzd2passivezd2zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_ftpz00_bglt BGl_makezd2ftpzd2zz__ftpz00(obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52ftpzd2dtpz80zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2helpzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_loopz00zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2datazd2portz00zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32463ze3z83zz__ftpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_pregexpzd2matchzd2zz__pregexpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62ftpzd2errorzb0_bglt
		BGl_fillzd2z62ftpzd2errorz12z70zz__ftpz00(BgL_z62ftpzd2errorzb0_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2pwdzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ftpzd2passzd2setz12z12zz__ftpz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__ftpzd2storezd2zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62ftpzd2parsezd2errorz62zz__ftpz00 = BUNSPEC;
	extern obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_list3351z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_list3354z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2statuszd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl__ftpzd2sitezd2parametersz00zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list3357z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_list3360z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_list3361z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_list3362z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_list3363z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl__ftpzd2acctzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_ftpz00_bglt BGl_z52allocatezd2ftpz80zz__ftpz00();
	BGL_EXPORTED_DECL bool_t BGl_ftpzf3zf3zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2connectzd2zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2noopzd2zz__ftpz00(BgL_ftpz00_bglt);
	extern obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t,
		int);
	static obj_t BGl__ftpzd2filezd2structurez00zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2z52ftpz12z92zz__ftpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__ftpz00();
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl__ftpzd2hostzd2zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z52ftpzf3za1zz__ftpz00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	static obj_t BGl__ftpzd2cdzd2zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52ftpzd2closez80zz__ftpz00(obj_t);
	static obj_t BGl__z52allocatezd2z52ftpzd2zz__ftpz00(obj_t);
	static obj_t BGl_zc3anonymousza32646ze3z83zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_ignorez00zz__ftpz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl__z62ftpzd2errorzd2nilz62zz__ftpz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__ftpz00();
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2listzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	extern obj_t bgl_list_ref(obj_t, long);
	extern obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2logoutzd2zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl_z52thezd2ftpzd2nilz52zz__ftpz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2logoutzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2logoutza7d23532z00, BGl__ftpzd2logoutzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2userzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2userza7d2se3533z00, BGl__ftpzd2userzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2deletezd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2deleteza7d23534z00, BGl__ftpzd2deletezd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2dtpzd2setz12zd2envz92zz__ftpz00,
		BgL_bgl__za752ftpza7d2dtpza7d23535za7,
		BGl__z52ftpzd2dtpzd2setz12z40zz__ftpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62ftpzd2parsezd2errorz12zd2envz70zz__ftpz00,
		BgL_bgl__fillza7d2za762ftpza7d3536za7,
		BGl__fillzd2z62ftpzd2parsezd2errorz12za2zz__ftpz00, 0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2motdzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2motdza7d2se3537z00, BGl__ftpzd2motdzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2copyzd2filezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2copyza7d2fi3538z00, BGl__ftpzd2copyzd2filez00zz__ftpz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2portzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2portza7d2se3539z00, BGl__ftpzd2portzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2appendzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2appendza7d23540z00, BGl__ftpzd2appendzd2zz__ftpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2passivezd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2passiveza7d3541z00, BGl__ftpzd2passivezd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2acctzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2acctza7d2se3542z00, BGl__ftpzd2acctzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2abortzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2abortza7d2za73543za7, BGl__ftpzd2abortzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00,
		BgL_bgl__openza7d2inputza7d23544z00, opt_generic_entry,
		BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2userzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2userza7d2za7za73545z00, BGl__ftpzd2userzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzf3zd2envz21zz__ftpz00,
		BgL_bgl__ftpza7f3za7f3za7za7__ft3546z00, BGl__ftpzf3zf3zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2connectzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2connectza7d3547z00, BGl__ftpzd2connectzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2filezd2structurezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2fileza7d2st3548z00, va_generic_entry,
		BGl__ftpzd2filezd2structurez00zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2renamezd2filezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2renameza7d23549z00, BGl__ftpzd2renamezd2filez00zz__ftpz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ftpzd2envz00zz__ftpz00,
		BgL_bgl__makeza7d2ftpza7d2za7za73550z00, BGl__makezd2ftpzd2zz__ftpz00, 0L,
		BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62ftpzd2errorzd2envze2zz__ftpz00,
		BgL_bgl__za752allocateza7d2za73551za7,
		BGl__z52allocatezd2z62ftpzd2errorz30zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2z52ftpz12zd2envz40zz__ftpz00,
		BgL_bgl__fillza7d2za752ftpza713552za7, BGl__fillzd2z52ftpz12z92zz__ftpz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2cmdzd2envz52zz__ftpz00,
		BgL_bgl__za752ftpza7d2cmdza7803553za7, BGl__z52ftpzd2cmdz80zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2hostzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2hostza7d2se3554z00, BGl__ftpzd2hostzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2sitezd2parameterszd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2siteza7d2pa3555z00, va_generic_entry,
		BGl__ftpzd2sitezd2parametersz00zz__ftpz00, BUNSPEC, -2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52ftpzd2passivezf3zd2setz12zd2envz61zz__ftpz00,
		BgL_bgl__za752ftpza7d2passiv3556z00,
		BGl__z52ftpzd2passivezf3zd2setz12zb3zz__ftpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ftpzd2directoryzd2ze3pathzd2listzd2envze3zz__ftpz00,
		BgL_bgl__ftpza7d2directory3557za7,
		BGl__ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52ftpzf3zd2envz73zz__ftpz00,
		BgL_bgl__za752ftpza7f3za7a1za7za7_3558za7, BGl__z52ftpzf3za1zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2systemzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2systemza7d23559z00, BGl__ftpzd2systemzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2storezd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2storeza7d2za73560za7, BGl__ftpzd2storezd2zz__ftpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2passzd2setz12zd2envzc0zz__ftpz00,
		BgL_bgl__ftpza7d2passza7d2se3561z00, BGl__ftpzd2passzd2setz12z12zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2portzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2portza7d2za7za73562z00, BGl__ftpzd2portzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2datazd2typezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2dataza7d2ty3563z00, va_generic_entry,
		BGl__ftpzd2datazd2typez00zz__ftpz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2putzd2filezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2putza7d2fil3564z00, BGl__ftpzd2putzd2filez00zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2cdzd2parentzd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2cdza7d2pare3565z00, BGl__ftpzd2cdzd2parentz00zz__ftpz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2cdzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2cdza7d2za7za7__3566z00, BGl__ftpzd2cdzd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2mountzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2mountza7d2za73567za7, BGl__ftpzd2mountzd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2reinitializa7ezd2envza7zz__ftpz00,
		BgL_bgl__ftpza7d2reinitial3568za7, BGl__ftpzd2reinitializa7ez75zz__ftpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62ftpzd2parsezd2errorzd2envz62zz__ftpz00,
		BgL_bgl__makeza7d2za762ftpza7d3569za7,
		BGl__makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2z52ftpzd2envz00zz__ftpz00,
		BgL_bgl__za752allocateza7d2za73570za7,
		BGl__z52allocatezd2z52ftpzd2zz__ftpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62ftpzd2parsezd2errorzf3zd2envz43zz__ftpz00,
		BgL_bgl__za762ftpza7d2parseza73571za7,
		BGl__z62ftpzd2parsezd2errorzf3z91zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2acctzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2acctza7d2za7za73572z00, BGl__ftpzd2acctzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2ftpz12zd2envz12zz__ftpz00,
		BgL_bgl__fillza7d2ftpza712za7c3573za7, BGl__fillzd2ftpz12zc0zz__ftpz00, 0L,
		BUNSPEC, 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2datazd2portzd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2dataza7d2po3574z00, BGl__ftpzd2datazd2portz00zz__ftpz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62ftpzd2errorzf3zd2envz91zz__ftpz00,
		BgL_bgl__za762ftpza7d2errorza73575za7, BGl__z62ftpzd2errorzf3z43zz__ftpz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2motdzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2motdza7d2za7za73576z00, BGl__ftpzd2motdzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2listzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2listza7d2za7za73577z00, va_generic_entry,
		BGl__ftpzd2listzd2zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2restartzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2restartza7d3578z00, BGl__ftpzd2restartzd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2retrievezd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2retrieveza73579z00, BGl__ftpzd2retrievezd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2ftpzd2envz52zz__ftpz00,
		BgL_bgl__za752allocateza7d2f3580z00, BGl__z52allocatezd2ftpz80zz__ftpz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2passivezf3zd2envza1zz__ftpz00,
		BgL_bgl__za752ftpza7d2passiv3581z00, BGl__z52ftpzd2passivezf3z73zz__ftpz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52ftpzd2nilzd2envz52zz__ftpz00,
		BgL_bgl__za752ftpza7d2nilza7803582za7, BGl__z52ftpzd2nilz80zz__ftpz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ftpzd2directoryzd2ze3listzd2envz31zz__ftpz00,
		BgL_bgl__ftpza7d2directory3583za7,
		BGl__ftpzd2directoryzd2ze3listze3zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2statuszd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2statusza7d23584z00, va_generic_entry,
		BGl__ftpzd2statuszd2zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62ftpzd2errorzd2nilzd2envzb0zz__ftpz00,
		BgL_bgl__za762ftpza7d2errorza73585za7,
		BGl__z62ftpzd2errorzd2nilz62zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3463z00zz__ftpz00,
		BgL_bgl_za7c3anonymousza7a323586z00,
		BGl_zc3anonymousza32711ze3z83zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3464z00zz__ftpz00,
		BgL_bgl_za7c3anonymousza7a323587z00,
		BGl_zc3anonymousza32712ze3z83zz__ftpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2transferzd2modezd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2transferza73588z00, va_generic_entry,
		BGl__ftpzd2transferzd2modez00zz__ftpz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3508z00zz__ftpz00,
		BgL_bgl_objectza7d2printza7d3589z00,
		BGl_objectzd2printzd2ftp2208z00zz__ftpz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3510z00zz__ftpz00,
		BgL_bgl_objectza7d2za7e3stru3590z00,
		BGl_objectzd2ze3structzd2z62ftpzd22220z53zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3512z00zz__ftpz00,
		BgL_bgl_structza7b2objectza73591z00,
		BGl_structzb2objectzd2ze3objec2222z83zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3514z00zz__ftpz00,
		BgL_bgl_objectza7d2za7e3stru3592z00,
		BGl_objectzd2ze3structzd2z62ftpzd22224z53zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3331z00zz__ftpz00,
		BgL_bgl_string3331za700za7za7_3593za7, "EOF", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3515z00zz__ftpz00,
		BgL_bgl_structza7b2objectza73594z00,
		BGl_structzb2objectzd2ze3objec2226z83zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3332z00zz__ftpz00,
		BgL_bgl_string3332za700za7za7_3595za7, "Illegal range `~a'", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3516z00zz__ftpz00,
		BgL_bgl_objectza7d2za7e3stru3596z00,
		BGl_objectzd2ze3structzd2ftp2228ze3zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3333z00zz__ftpz00,
		BgL_bgl_string3333za700za7za7_3597za7, "the-substring", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3517z00zz__ftpz00,
		BgL_bgl_structza7b2objectza73598z00,
		BGl_structzb2objectzd2ze3objec2230z83zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3334z00zz__ftpz00,
		BgL_bgl_string3334za700za7za7_3599za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3335z00zz__ftpz00,
		BgL_bgl_string3335za700za7za7_3600za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3336z00zz__ftpz00,
		BgL_bgl_string3336za700za7za7_3601za7, "%ftp-read-cmd", 13);
	      DEFINE_STRING(BGl_string3337z00zz__ftpz00,
		BgL_bgl_string3337za700za7za7_3602za7, "Unrecognized output format", 26);
	      DEFINE_STRING(BGl_string3338z00zz__ftpz00,
		BgL_bgl_string3338za700za7za7_3603za7, "\n", 1);
	      DEFINE_STRING(BGl_string3340z00zz__ftpz00,
		BgL_bgl_string3340za700za7za7_3604za7, "list", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2dtpzd2envz52zz__ftpz00,
		BgL_bgl__za752ftpza7d2dtpza7803605za7, BGl__z52ftpzd2dtpz80zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3342z00zz__ftpz00,
		BgL_bgl_string3342za700za7za7_3606za7, "port", 4);
	      DEFINE_STRING(BGl_string3343z00zz__ftpz00,
		BgL_bgl_string3343za700za7za7_3607za7, "%ftp-read-dtp", 13);
	      DEFINE_STRING(BGl_string3344z00zz__ftpz00,
		BgL_bgl_string3344za700za7za7_3608za7, "Dunno what to read", 18);
	      DEFINE_STRING(BGl_string3345z00zz__ftpz00,
		BgL_bgl_string3345za700za7za7_3609za7, "ftp", 3);
	      DEFINE_STRING(BGl_string3346z00zz__ftpz00,
		BgL_bgl_string3346za700za7za7_3610za7, "Socket not connected", 20);
	      DEFINE_STRING(BGl_string3347z00zz__ftpz00,
		BgL_bgl_string3347za700za7za7_3611za7, "~l\r\n", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2nilzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2nilza7d2za7za7_3612z00, BGl__ftpzd2nilzd2zz__ftpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3348z00zz__ftpz00,
		BgL_bgl_string3348za700za7za7_3613za7, "RETR", 4);
	      DEFINE_STRING(BGl_string3350z00zz__ftpz00,
		BgL_bgl_string3350za700za7za7_3614za7, " ABOR ", 6);
	      DEFINE_STRING(BGl_string3349z00zz__ftpz00,
		BgL_bgl_string3349za700za7za7_3615za7, "USER", 4);
	      DEFINE_STRING(BGl_string3353z00zz__ftpz00,
		BgL_bgl_string3353za700za7za7_3616za7, "sub", 3);
	      DEFINE_STRING(BGl_string3356z00zz__ftpz00,
		BgL_bgl_string3356za700za7za7_3617za7, "or", 2);
	      DEFINE_STRING(BGl_string3359z00zz__ftpz00,
		BgL_bgl_string3359za700za7za7_3618za7, "seq", 3);
	      DEFINE_STRING(BGl_string3365z00zz__ftpz00,
		BgL_bgl_string3365za700za7za7_3619za7, "between", 7);
	      DEFINE_STRING(BGl_string3367z00zz__ftpz00,
		BgL_bgl_string3367za700za7za7_3620za7, "digit", 5);
	      DEFINE_STRING(BGl_string3368z00zz__ftpz00,
		BgL_bgl_string3368za700za7za7_3621za7, "PASS", 4);
	      DEFINE_STRING(BGl_string3370z00zz__ftpz00,
		BgL_bgl_string3370za700za7za7_3622za7, "Remote host closed socket", 25);
	      DEFINE_STRING(BGl_string3369z00zz__ftpz00,
		BgL_bgl_string3369za700za7za7_3623za7, "ACCT", 4);
	      DEFINE_STRING(BGl_string3371z00zz__ftpz00,
		BgL_bgl_string3371za700za7za7_3624za7, "Unknown return code", 19);
	      DEFINE_STRING(BGl_string3373z00zz__ftpz00,
		BgL_bgl_string3373za700za7za7_3625za7, "inet", 4);
	      DEFINE_STRING(BGl_string3374z00zz__ftpz00,
		BgL_bgl_string3374za700za7za7_3626za7, "/tmp/bigloo/runtime/Unsafe/ftp.scm",
		34);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2pwdzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2pwdza7d2za7za7_3627z00, BGl__ftpzd2pwdzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3375z00zz__ftpz00,
		BgL_bgl_string3375za700za7za7_3628za7, "_ftp-connect", 12);
	      DEFINE_STRING(BGl_string3376z00zz__ftpz00,
		BgL_bgl_string3376za700za7za7_3629za7, "PASV", 4);
	      DEFINE_STRING(BGl_string3377z00zz__ftpz00,
		BgL_bgl_string3377za700za7za7_3630za7, "ftp-data-port", 13);
	      DEFINE_STRING(BGl_string3378z00zz__ftpz00,
		BgL_bgl_string3378za700za7za7_3631za7,
		"PORT functionality is not yet implemented", 41);
	      DEFINE_STRING(BGl_string3380z00zz__ftpz00,
		BgL_bgl_string3380za700za7za7_3632za7, "QUIT", 4);
	      DEFINE_STRING(BGl_string3379z00zz__ftpz00,
		BgL_bgl_string3379za700za7za7_3633za7, "~a.~a.~a.~a", 11);
	      DEFINE_STRING(BGl_string3381z00zz__ftpz00,
		BgL_bgl_string3381za700za7za7_3634za7, "_ftp-logout", 11);
	      DEFINE_STRING(BGl_string3382z00zz__ftpz00,
		BgL_bgl_string3382za700za7za7_3635za7, "CWD", 3);
	      DEFINE_STRING(BGl_string3383z00zz__ftpz00,
		BgL_bgl_string3383za700za7za7_3636za7, "_ftp-cd", 7);
	      DEFINE_STRING(BGl_string3384z00zz__ftpz00,
		BgL_bgl_string3384za700za7za7_3637za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3385z00zz__ftpz00,
		BgL_bgl_string3385za700za7za7_3638za7, "CDUP", 4);
	      DEFINE_STRING(BGl_string3386z00zz__ftpz00,
		BgL_bgl_string3386za700za7za7_3639za7, "_ftp-cd-parent", 14);
	      DEFINE_STRING(BGl_string3387z00zz__ftpz00,
		BgL_bgl_string3387za700za7za7_3640za7, "SMNT", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62ftpzd2parsezd2errorzd2envz30zz__ftpz00,
		BgL_bgl__za752allocateza7d2za73641za7,
		BGl__z52allocatezd2z62ftpzd2parsezd2errorze2zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3388z00zz__ftpz00,
		BgL_bgl_string3388za700za7za7_3642za7, "_ftp-mount", 10);
	      DEFINE_STRING(BGl_string3400z00zz__ftpz00,
		BgL_bgl_string3400za700za7za7_3643za7, "I", 1);
	      DEFINE_STRING(BGl_string3390z00zz__ftpz00,
		BgL_bgl_string3390za700za7za7_3644za7, "_ftp-reinitialize", 17);
	      DEFINE_STRING(BGl_string3389z00zz__ftpz00,
		BgL_bgl_string3389za700za7za7_3645za7, "REIN", 4);
	      DEFINE_STRING(BGl_string3401z00zz__ftpz00,
		BgL_bgl_string3401za700za7za7_3646za7, "_ftp-data-type", 14);
	      DEFINE_STRING(BGl_string3391z00zz__ftpz00,
		BgL_bgl_string3391za700za7za7_3647za7,
		"PORT functionality is not implemented", 37);
	      DEFINE_STRING(BGl_string3402z00zz__ftpz00,
		BgL_bgl_string3402za700za7za7_3648za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3392z00zz__ftpz00,
		BgL_bgl_string3392za700za7za7_3649za7,
		"/tmp/bigloo/runtime/Llib/object.scm", 35);
	      DEFINE_STRING(BGl_string3403z00zz__ftpz00,
		BgL_bgl_string3403za700za7za7_3650za7, "F", 1);
	      DEFINE_STRING(BGl_string3393z00zz__ftpz00,
		BgL_bgl_string3393za700za7za7_3651za7, "_ftp-data-port", 14);
	      DEFINE_STRING(BGl_string3404z00zz__ftpz00,
		BgL_bgl_string3404za700za7za7_3652za7, "STRU", 4);
	      DEFINE_STRING(BGl_string3394z00zz__ftpz00,
		BgL_bgl_string3394za700za7za7_3653za7, "bint", 4);
	      DEFINE_STRING(BGl_string3405z00zz__ftpz00,
		BgL_bgl_string3405za700za7za7_3654za7, "_ftp-file-structure", 19);
	      DEFINE_STRING(BGl_string3395z00zz__ftpz00,
		BgL_bgl_string3395za700za7za7_3655za7, "_ftp-passive", 12);
	      DEFINE_STRING(BGl_string3406z00zz__ftpz00,
		BgL_bgl_string3406za700za7za7_3656za7, "S", 1);
	      DEFINE_STRING(BGl_string3396z00zz__ftpz00,
		BgL_bgl_string3396za700za7za7_3657za7, "ftp-data-type", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2passzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2passza7d2za7za73658z00, BGl__ftpzd2passzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3407z00zz__ftpz00,
		BgL_bgl_string3407za700za7za7_3659za7, "MODE", 4);
	      DEFINE_STRING(BGl_string3397z00zz__ftpz00,
		BgL_bgl_string3397za700za7za7_3660za7,
		"Illegal type value, should be on of '(ascii image)", 50);
	      DEFINE_STRING(BGl_string3408z00zz__ftpz00,
		BgL_bgl_string3408za700za7za7_3661za7, "_ftp-transfer-mode", 18);
	      DEFINE_STRING(BGl_string3398z00zz__ftpz00,
		BgL_bgl_string3398za700za7za7_3662za7, "A", 1);
	      DEFINE_STRING(BGl_string3410z00zz__ftpz00,
		BgL_bgl_string3410za700za7za7_3663za7, "STOR", 4);
	      DEFINE_STRING(BGl_string3409z00zz__ftpz00,
		BgL_bgl_string3409za700za7za7_3664za7, "_ftp-retrieve", 13);
	      DEFINE_STRING(BGl_string3399z00zz__ftpz00,
		BgL_bgl_string3399za700za7za7_3665za7, "TYPE", 4);
	      DEFINE_STRING(BGl_string3411z00zz__ftpz00,
		BgL_bgl_string3411za700za7za7_3666za7, "STOU", 4);
	      DEFINE_STRING(BGl_string3412z00zz__ftpz00,
		BgL_bgl_string3412za700za7za7_3667za7, "_ftp-store", 10);
	      DEFINE_STRING(BGl_string3413z00zz__ftpz00,
		BgL_bgl_string3413za700za7za7_3668za7, "APPE", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2z62ftpzd2errorz12zd2envza2zz__ftpz00,
		BgL_bgl__fillza7d2za762ftpza7d3669za7,
		BGl__fillzd2z62ftpzd2errorz12z70zz__ftpz00, 0L, BUNSPEC, 7);
	      DEFINE_STRING(BGl_string3414z00zz__ftpz00,
		BgL_bgl_string3414za700za7za7_3670za7, "_ftp-append", 11);
	      DEFINE_STRING(BGl_string3415z00zz__ftpz00,
		BgL_bgl_string3415za700za7za7_3671za7, "R", 1);
	      DEFINE_STRING(BGl_string3416z00zz__ftpz00,
		BgL_bgl_string3416za700za7za7_3672za7, "ALLO", 4);
	      DEFINE_STRING(BGl_string3417z00zz__ftpz00,
		BgL_bgl_string3417za700za7za7_3673za7, "_ftp-allocate", 13);
	      DEFINE_STRING(BGl_string3418z00zz__ftpz00,
		BgL_bgl_string3418za700za7za7_3674za7, "REST", 4);
	      DEFINE_STRING(BGl_string3420z00zz__ftpz00,
		BgL_bgl_string3420za700za7za7_3675za7, "RNFR", 4);
	      DEFINE_STRING(BGl_string3419z00zz__ftpz00,
		BgL_bgl_string3419za700za7za7_3676za7, "_ftp-restart", 12);
	      DEFINE_STRING(BGl_string3421z00zz__ftpz00,
		BgL_bgl_string3421za700za7za7_3677za7, "RNTO", 4);
	      DEFINE_STRING(BGl_string3422z00zz__ftpz00,
		BgL_bgl_string3422za700za7za7_3678za7, "_ftp-rename-file", 16);
	      DEFINE_STRING(BGl_string3423z00zz__ftpz00,
		BgL_bgl_string3423za700za7za7_3679za7, "ABOR", 4);
	      DEFINE_STRING(BGl_string3424z00zz__ftpz00,
		BgL_bgl_string3424za700za7za7_3680za7, "_ftp-abort", 10);
	      DEFINE_STRING(BGl_string3425z00zz__ftpz00,
		BgL_bgl_string3425za700za7za7_3681za7, "DELE", 4);
	      DEFINE_STRING(BGl_string3426z00zz__ftpz00,
		BgL_bgl_string3426za700za7za7_3682za7, "_ftp-delete", 11);
	      DEFINE_STRING(BGl_string3427z00zz__ftpz00,
		BgL_bgl_string3427za700za7za7_3683za7, "RMD", 3);
	      DEFINE_STRING(BGl_string3428z00zz__ftpz00,
		BgL_bgl_string3428za700za7za7_3684za7, "_ftp-rmdir", 10);
	      DEFINE_STRING(BGl_string3430z00zz__ftpz00,
		BgL_bgl_string3430za700za7za7_3685za7, "_ftp-make-directory", 19);
	      DEFINE_STRING(BGl_string3429z00zz__ftpz00,
		BgL_bgl_string3429za700za7za7_3686za7, "MKD", 3);
	      DEFINE_STRING(BGl_string3431z00zz__ftpz00,
		BgL_bgl_string3431za700za7za7_3687za7, "PWD", 3);
	      DEFINE_STRING(BGl_string3432z00zz__ftpz00,
		BgL_bgl_string3432za700za7za7_3688za7, "_ftp-pwd", 8);
	      DEFINE_STRING(BGl_string3433z00zz__ftpz00,
		BgL_bgl_string3433za700za7za7_3689za7, "LIST", 4);
	      DEFINE_STRING(BGl_string3434z00zz__ftpz00,
		BgL_bgl_string3434za700za7za7_3690za7, "_ftp-list", 9);
	      DEFINE_STRING(BGl_string3435z00zz__ftpz00,
		BgL_bgl_string3435za700za7za7_3691za7, "NLST", 4);
	      DEFINE_STRING(BGl_string3436z00zz__ftpz00,
		BgL_bgl_string3436za700za7za7_3692za7, "_ftp-name-list", 14);
	      DEFINE_STRING(BGl_string3437z00zz__ftpz00,
		BgL_bgl_string3437za700za7za7_3693za7, "SITE", 4);
	      DEFINE_STRING(BGl_string3438z00zz__ftpz00,
		BgL_bgl_string3438za700za7za7_3694za7, "_ftp-site-parameters", 20);
	      DEFINE_STRING(BGl_string3440z00zz__ftpz00,
		BgL_bgl_string3440za700za7za7_3695za7, "_ftp-system", 11);
	      DEFINE_STRING(BGl_string3439z00zz__ftpz00,
		BgL_bgl_string3439za700za7za7_3696za7, "SYST", 4);
	      DEFINE_STRING(BGl_string3441z00zz__ftpz00,
		BgL_bgl_string3441za700za7za7_3697za7, "STAT", 4);
	      DEFINE_STRING(BGl_string3442z00zz__ftpz00,
		BgL_bgl_string3442za700za7za7_3698za7, "_ftp-status", 11);
	      DEFINE_STRING(BGl_string3443z00zz__ftpz00,
		BgL_bgl_string3443za700za7za7_3699za7, "HELP", 4);
	      DEFINE_STRING(BGl_string3444z00zz__ftpz00,
		BgL_bgl_string3444za700za7za7_3700za7, "_ftp-help", 9);
	      DEFINE_STRING(BGl_string3445z00zz__ftpz00,
		BgL_bgl_string3445za700za7za7_3701za7, "NOOP", 4);
	      DEFINE_STRING(BGl_string3446z00zz__ftpz00,
		BgL_bgl_string3446za700za7za7_3702za7, "_ftp-noop", 9);
	      DEFINE_STRING(BGl_string3447z00zz__ftpz00,
		BgL_bgl_string3447za700za7za7_3703za7, "_open-input-ftp-file", 20);
	      DEFINE_STRING(BGl_string3448z00zz__ftpz00,
		BgL_bgl_string3448za700za7za7_3704za7, "anonymous", 9);
	      DEFINE_STRING(BGl_string3450z00zz__ftpz00,
		BgL_bgl_string3450za700za7za7_3705za7, "", 0);
	      DEFINE_STRING(BGl_string3449z00zz__ftpz00,
		BgL_bgl_string3449za700za7za7_3706za7, "foo@bar.net", 11);
	      DEFINE_STRING(BGl_string3451z00zz__ftpz00,
		BgL_bgl_string3451za700za7za7_3707za7, "_ftp-directory->list", 20);
	      DEFINE_STRING(BGl_string3452z00zz__ftpz00,
		BgL_bgl_string3452za700za7za7_3708za7, "_ftp-directory->path-list", 25);
	      DEFINE_STRING(BGl_string3453z00zz__ftpz00,
		BgL_bgl_string3453za700za7za7_3709za7, "_ftp-copy-file", 14);
	      DEFINE_STRING(BGl_string3454z00zz__ftpz00,
		BgL_bgl_string3454za700za7za7_3710za7, "_ftp-put-file", 13);
	      DEFINE_STRING(BGl_string3456z00zz__ftpz00,
		BgL_bgl_string3456za700za7za7_3711za7, "%ftp", 4);
	      DEFINE_STRING(BGl_string3458z00zz__ftpz00,
		BgL_bgl_string3458za700za7za7_3712za7, "cmd", 3);
	      DEFINE_STRING(BGl_string3460z00zz__ftpz00,
		BgL_bgl_string3460za700za7za7_3713za7, "dtp", 3);
	      DEFINE_STRING(BGl_string3462z00zz__ftpz00,
		BgL_bgl_string3462za700za7za7_3714za7, "passive?", 8);
	      DEFINE_STRING(BGl_string3467z00zz__ftpz00,
		BgL_bgl_string3467za700za7za7_3715za7, "host", 4);
	      DEFINE_STRING(BGl_string3468z00zz__ftpz00,
		BgL_bgl_string3468za700za7za7_3716za7, "localhost", 9);
	      DEFINE_STRING(BGl_string3470z00zz__ftpz00,
		BgL_bgl_string3470za700za7za7_3717za7, "motd", 4);
	      DEFINE_STRING(BGl_string3472z00zz__ftpz00,
		BgL_bgl_string3472za700za7za7_3718za7, "user", 4);
	      DEFINE_STRING(BGl_string3474z00zz__ftpz00,
		BgL_bgl_string3474za700za7za7_3719za7, "pass", 4);
	      DEFINE_STRING(BGl_string3476z00zz__ftpz00,
		BgL_bgl_string3476za700za7za7_3720za7, "acct", 4);
	      DEFINE_STRING(BGl_string3478z00zz__ftpz00,
		BgL_bgl_string3478za700za7za7_3721za7, "&ftp-error", 10);
	      DEFINE_STRING(BGl_string3480z00zz__ftpz00,
		BgL_bgl_string3480za700za7za7_3722za7, "&ftp-parse-error", 16);
	      DEFINE_STRING(BGl_string3482z00zz__ftpz00,
		BgL_bgl_string3482za700za7za7_3723za7, "%allocate-%ftp", 14);
	      DEFINE_STRING(BGl_string3483z00zz__ftpz00,
		BgL_bgl_string3483za700za7za7_3724za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string3484z00zz__ftpz00,
		BgL_bgl_string3484za700za7za7_3725za7,
		"Can't make instance of abstract classes", 39);
	      DEFINE_STRING(BGl_string3485z00zz__ftpz00,
		BgL_bgl_string3485za700za7za7_3726za7, "_fill-&ftp-parse-error!", 23);
	      DEFINE_STRING(BGl_string3486z00zz__ftpz00,
		BgL_bgl_string3486za700za7za7_3727za7, "_fill-&ftp-error!", 17);
	      DEFINE_STRING(BGl_string3487z00zz__ftpz00,
		BgL_bgl_string3487za700za7za7_3728za7, "_make-ftp", 9);
	      DEFINE_STRING(BGl_string3488z00zz__ftpz00,
		BgL_bgl_string3488za700za7za7_3729za7, "_fill-ftp!", 10);
	      DEFINE_STRING(BGl_string3500z00zz__ftpz00,
		BgL_bgl_string3500za700za7za7_3730za7, "_ftp-acct", 9);
	      DEFINE_STRING(BGl_string3490z00zz__ftpz00,
		BgL_bgl_string3490za700za7za7_3731za7, "_ftp-host", 9);
	      DEFINE_STRING(BGl_string3489z00zz__ftpz00,
		BgL_bgl_string3489za700za7za7_3732za7, "_ftp-host-set!", 14);
	      DEFINE_STRING(BGl_string3501z00zz__ftpz00,
		BgL_bgl_string3501za700za7za7_3733za7, "_fill-%ftp!", 11);
	      DEFINE_STRING(BGl_string3491z00zz__ftpz00,
		BgL_bgl_string3491za700za7za7_3734za7, "_ftp-port-set!", 14);
	      DEFINE_STRING(BGl_string3502z00zz__ftpz00,
		BgL_bgl_string3502za700za7za7_3735za7, "_%ftp-cmd-set!", 14);
	      DEFINE_STRING(BGl_string3492z00zz__ftpz00,
		BgL_bgl_string3492za700za7za7_3736za7, "_ftp-port", 9);
	      DEFINE_STRING(BGl_string3503z00zz__ftpz00,
		BgL_bgl_string3503za700za7za7_3737za7, "_%ftp-cmd", 9);
	      DEFINE_STRING(BGl_string3493z00zz__ftpz00,
		BgL_bgl_string3493za700za7za7_3738za7, "_ftp-motd-set!", 14);
	      DEFINE_STRING(BGl_string3504z00zz__ftpz00,
		BgL_bgl_string3504za700za7za7_3739za7, "_%ftp-dtp-set!", 14);
	      DEFINE_STRING(BGl_string3494z00zz__ftpz00,
		BgL_bgl_string3494za700za7za7_3740za7, "_ftp-motd", 9);
	      DEFINE_STRING(BGl_string3505z00zz__ftpz00,
		BgL_bgl_string3505za700za7za7_3741za7, "_%ftp-dtp", 9);
	      DEFINE_STRING(BGl_string3495z00zz__ftpz00,
		BgL_bgl_string3495za700za7za7_3742za7, "_ftp-user-set!", 14);
	      DEFINE_STRING(BGl_string3506z00zz__ftpz00,
		BgL_bgl_string3506za700za7za7_3743za7, "_%ftp-passive?-set!", 19);
	      DEFINE_STRING(BGl_string3496z00zz__ftpz00,
		BgL_bgl_string3496za700za7za7_3744za7, "_ftp-user", 9);
	      DEFINE_STRING(BGl_string3507z00zz__ftpz00,
		BgL_bgl_string3507za700za7za7_3745za7, "_%ftp-passive?", 14);
	      DEFINE_STRING(BGl_string3497z00zz__ftpz00,
		BgL_bgl_string3497za700za7za7_3746za7, "_ftp-pass-set!", 14);
	      DEFINE_STRING(BGl_string3498z00zz__ftpz00,
		BgL_bgl_string3498za700za7za7_3747za7, "_ftp-pass", 9);
	      DEFINE_STRING(BGl_string3509z00zz__ftpz00,
		BgL_bgl_string3509za700za7za7_3748za7, "object-print", 12);
	      DEFINE_STRING(BGl_string3499z00zz__ftpz00,
		BgL_bgl_string3499za700za7za7_3749za7, "_ftp-acct-set!", 14);
	      DEFINE_STRING(BGl_string3511z00zz__ftpz00,
		BgL_bgl_string3511za700za7za7_3750za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3513z00zz__ftpz00,
		BgL_bgl_string3513za700za7za7_3751za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2rmdirzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2rmdirza7d2za73752za7, BGl__ftpzd2rmdirzd2zz__ftpz00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STRING(BGl_string3518z00zz__ftpz00,
		BgL_bgl_string3518za700za7za7_3753za7, "#<%ftp host=", 12);
	      DEFINE_STRING(BGl_string3520z00zz__ftpz00,
		BgL_bgl_string3520za700za7za7_3754za7, " data-transfer-port=", 20);
	      DEFINE_STRING(BGl_string3519z00zz__ftpz00,
		BgL_bgl_string3519za700za7za7_3755za7, " user=", 6);
	      DEFINE_STRING(BGl_string3521z00zz__ftpz00,
		BgL_bgl_string3521za700za7za7_3756za7, " passive-mode=", 14);
	      DEFINE_STRING(BGl_string3522z00zz__ftpz00,
		BgL_bgl_string3522za700za7za7_3757za7, ">", 1);
	      DEFINE_STRING(BGl_string3523z00zz__ftpz00,
		BgL_bgl_string3523za700za7za7_3758za7, "__ftp", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62ftpzd2parsezd2errorzd2nilzd2envz62zz__ftpz00,
		BgL_bgl__za762ftpza7d2parseza73759za7,
		BGl__z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2helpzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2helpza7d2za7za73760z00, va_generic_entry,
		BGl__ftpzd2helpzd2zz__ftpz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62ftpzd2errorzd2envzb0zz__ftpz00,
		BgL_bgl__makeza7d2za762ftpza7d3761za7,
		BGl__makezd2z62ftpzd2errorz62zz__ftpz00, 0L, BUNSPEC, 6);
	extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2makezd2directoryzd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2makeza7d2di3762z00,
		BGl__ftpzd2makezd2directoryz00zz__ftpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52ftpzd2cmdzd2setz12zd2envz92zz__ftpz00,
		BgL_bgl__za752ftpza7d2cmdza7d23763za7,
		BGl__z52ftpzd2cmdzd2setz12z40zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2noopzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2noopza7d2za7za73764z00, BGl__ftpzd2noopzd2zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2allocatezd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2allocateza73765z00, va_generic_entry,
		BGl__ftpzd2allocatezd2zz__ftpz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2namezd2listzd2envzd2zz__ftpz00,
		BgL_bgl__ftpza7d2nameza7d2li3766z00, va_generic_entry,
		BGl__ftpzd2namezd2listz00zz__ftpz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ftpzd2hostzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2hostza7d2za7za73767z00, BGl__ftpzd2hostzd2zz__ftpz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long
		BgL_checksumz00_4466, char *BgL_fromz00_4467)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ftpz00))
				{
					BGl_requirezd2initializa7ationz75zz__ftpz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__ftpz00();
					BGl_importedzd2moduleszd2initz00zz__ftpz00();
					BGl_objectzd2initzd2zz__ftpz00();
					BGl_methodzd2initzd2zz__ftpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			BGl_symbol3339z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3340z00zz__ftpz00);
			BGl_symbol3341z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3342z00zz__ftpz00);
			BGl_keyword3352z00zz__ftpz00 =
				bstring_to_keyword(BGl_string3353z00zz__ftpz00);
			BGl_keyword3355z00zz__ftpz00 =
				bstring_to_keyword(BGl_string3356z00zz__ftpz00);
			BGl_keyword3358z00zz__ftpz00 =
				bstring_to_keyword(BGl_string3359z00zz__ftpz00);
			BGl_keyword3364z00zz__ftpz00 =
				bstring_to_keyword(BGl_string3365z00zz__ftpz00);
			BGl_keyword3366z00zz__ftpz00 =
				bstring_to_keyword(BGl_string3367z00zz__ftpz00);
			BGl_list3363z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3364z00zz__ftpz00,
				MAKE_PAIR(BBOOL(((bool_t) 0)),
					MAKE_PAIR(BINT(((long) 1)),
						MAKE_PAIR(BBOOL(((bool_t) 0)),
							MAKE_PAIR(BGl_keyword3366z00zz__ftpz00, BNIL)))));
			BGl_list3362z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3358z00zz__ftpz00,
				MAKE_PAIR(BGl_list3363z00zz__ftpz00, BNIL));
			BGl_list3361z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3355z00zz__ftpz00,
				MAKE_PAIR(BGl_list3362z00zz__ftpz00, BNIL));
			BGl_list3360z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3352z00zz__ftpz00,
				MAKE_PAIR(BGl_list3361z00zz__ftpz00, BNIL));
			BGl_list3357z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3358z00zz__ftpz00,
				MAKE_PAIR(BCHAR(((unsigned char) '(')),
					MAKE_PAIR(BGl_list3360z00zz__ftpz00,
						MAKE_PAIR(BCHAR(((unsigned char) ',')),
							MAKE_PAIR(BGl_list3360z00zz__ftpz00,
								MAKE_PAIR(BCHAR(((unsigned char) ',')),
									MAKE_PAIR(BGl_list3360z00zz__ftpz00,
										MAKE_PAIR(BCHAR(((unsigned char) ',')),
											MAKE_PAIR(BGl_list3360z00zz__ftpz00,
												MAKE_PAIR(BCHAR(((unsigned char) ',')),
													MAKE_PAIR(BGl_list3360z00zz__ftpz00,
														MAKE_PAIR(BCHAR(((unsigned char) ',')),
															MAKE_PAIR(BGl_list3360z00zz__ftpz00,
																MAKE_PAIR(BCHAR(((unsigned char) ')')),
																	BNIL))))))))))))));
			BGl_list3354z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3355z00zz__ftpz00,
				MAKE_PAIR(BGl_list3357z00zz__ftpz00, BNIL));
			BGl_list3351z00zz__ftpz00 =
				MAKE_PAIR(BGl_keyword3352z00zz__ftpz00,
				MAKE_PAIR(BGl_list3354z00zz__ftpz00, BNIL));
			BGl_symbol3372z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3373z00zz__ftpz00);
			BGl_symbol3455z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3456z00zz__ftpz00);
			BGl_symbol3457z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3458z00zz__ftpz00);
			BGl_symbol3459z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3460z00zz__ftpz00);
			BGl_symbol3461z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3462z00zz__ftpz00);
			BGl_symbol3465z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3345z00zz__ftpz00);
			BGl_symbol3466z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3467z00zz__ftpz00);
			BGl_symbol3469z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3470z00zz__ftpz00);
			BGl_symbol3471z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3472z00zz__ftpz00);
			BGl_symbol3473z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3474z00zz__ftpz00);
			BGl_symbol3475z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3476z00zz__ftpz00);
			BGl_symbol3477z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3478z00zz__ftpz00);
			BGl_symbol3479z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3480z00zz__ftpz00);
			return (BGl_symbol3481z00zz__ftpz00 =
				bstring_to_symbol(BGl_string3482z00zz__ftpz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			return BUNSPEC;
		}
	}



/* %ftp-read-cmd */
	obj_t BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(obj_t BgL_ftpz00_6)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 136 */
			{	/* Unsafe/ftp.scm 137 */
				obj_t BgL_ipz00_1072;

				{	/* Unsafe/ftp.scm 137 */
					obj_t BgL_arg2449z00_1419;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_4535;

						BgL_auxz00_4535 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_6);
						BgL_arg2449z00_1419 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_4535))->BgL_cmdz00);
					}
					BgL_ipz00_1072 = SOCKET_INPUT(BgL_arg2449z00_1419);
				}
				{	/* Unsafe/ftp.scm 137 */
					obj_t BgL_msgz00_1073;

					BgL_msgz00_1073 =
						BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1072);
					{	/* Unsafe/ftp.scm 138 */

						if (EOF_OBJECTP(BgL_msgz00_1073))
							{	/* Unsafe/ftp.scm 139 */
								{	/* Unsafe/ftp.scm 140 */
									int BgL_auxz00_4542;

									BgL_auxz00_4542 = (int) (((long) 3));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_4542);
								}
								{	/* Unsafe/ftp.scm 140 */
									int BgL_auxz00_4545;

									BgL_auxz00_4545 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_4545,
										BGl_string3331z00zz__ftpz00);
								}
								{	/* Unsafe/ftp.scm 140 */
									int BgL_auxz00_4548;

									BgL_auxz00_4548 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_4548, BFALSE);
								}
								return BINT(((long) 999));
							}
						else
							{	/* Unsafe/ftp.scm 141 */
								obj_t BgL_codez00_1078;

								obj_t BgL_mesgz00_1079;

								bool_t BgL_morezf3zf3_1080;

								{	/* Unsafe/ftp.scm 141 */
									obj_t BgL_arg2446z00_1412;

									BgL_arg2446z00_1412 =
										c_substring(BgL_msgz00_1073, ((long) 0), ((long) 3));
									{	/* Ieee/number.scm 134 */

										BgL_codez00_1078 =
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg2446z00_1412, BINT(((long) 10)));
								}}
								{	/* Unsafe/ftp.scm 142 */
									obj_t BgL_cellvalz00_4555;

									{	/* Ieee/string.scm 179 */
										long BgL_endz00_1417;

										BgL_endz00_1417 = STRING_LENGTH(BgL_msgz00_1073);
										{	/* Ieee/string.scm 179 */

											BgL_cellvalz00_4555 =
												BGl_substringz00zz__r4_strings_6_7z00(BgL_msgz00_1073,
												((long) 4), BgL_endz00_1417);
									}}
									BgL_mesgz00_1079 = MAKE_CELL(BgL_cellvalz00_4555);
								}
								BgL_morezf3zf3_1080 =
									(((unsigned char) '-') ==
									STRING_REF(BgL_msgz00_1073, ((long) 3)));
								if (BgL_morezf3zf3_1080)
									{	/* Unsafe/ftp.scm 144 */
										BGl_loopz00zz__ftpz00(BgL_codez00_1078, BgL_ipz00_1072,
											BgL_mesgz00_1079,
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1072));
									}
								else
									{	/* Unsafe/ftp.scm 144 */
										BFALSE;
									}
								{	/* Unsafe/ftp.scm 168 */
									obj_t BgL_val1_2172z00_1411;

									BgL_val1_2172z00_1411 = CELL_REF(BgL_mesgz00_1079);
									{	/* Unsafe/ftp.scm 168 */
										int BgL_auxz00_4563;

										BgL_auxz00_4563 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4563);
									}
									{	/* Unsafe/ftp.scm 168 */
										int BgL_auxz00_4566;

										BgL_auxz00_4566 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4566, BgL_val1_2172z00_1411);
									}
									return BgL_codez00_1078;
								}
							}
					}
				}
			}
		}
	}



/* the-substring */
	obj_t BGl_thezd2substringzd2zz__ftpz00(obj_t BgL_inputzd2portzd2_4065,
		int BgL_minz00_1266, int BgL_maxz00_1267)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 147 */
			if (((long) (BgL_maxz00_1267) < ((long) 0)))
				{	/* Unsafe/ftp.scm 147 */
					int BgL_arg2362z00_1270;

					{	/* Unsafe/ftp.scm 147 */
						int BgL_res3069z00_2647;

						{	/* Unsafe/ftp.scm 147 */
							obj_t BgL_inputzd2portzd2_2646;

							BgL_inputzd2portzd2_2646 = BgL_inputzd2portzd2_4065;
							BgL_res3069z00_2647 =
								(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2646));
						}
						BgL_arg2362z00_1270 = BgL_res3069z00_2647;
					}
					{	/* Unsafe/ftp.scm 147 */
						long BgL_za71za7_2648;

						long BgL_za72za7_2649;

						BgL_za71za7_2648 = (long) (BgL_arg2362z00_1270);
						BgL_za72za7_2649 = (long) (BgL_maxz00_1267);
						BgL_maxz00_1267 = (int) ((BgL_za71za7_2648 + BgL_za72za7_2649));
				}}
			else
				{	/* Unsafe/ftp.scm 147 */
					BFALSE;
				}
			{	/* Unsafe/ftp.scm 147 */
				bool_t BgL_testz00_4578;

				if (((long) (BgL_minz00_1266) >= ((long) 0)))
					{	/* Unsafe/ftp.scm 147 */
						if (((long) (BgL_maxz00_1267) >= (long) (BgL_minz00_1266)))
							{	/* Unsafe/ftp.scm 147 */
								int BgL_arg2372z00_1280;

								{	/* Unsafe/ftp.scm 147 */
									int BgL_res3070z00_2655;

									{	/* Unsafe/ftp.scm 147 */
										obj_t BgL_inputzd2portzd2_2654;

										BgL_inputzd2portzd2_2654 = BgL_inputzd2portzd2_4065;
										BgL_res3070z00_2655 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2654));
									}
									BgL_arg2372z00_1280 = BgL_res3070z00_2655;
								}
								BgL_testz00_4578 =
									((long) (BgL_maxz00_1267) <= (long) (BgL_arg2372z00_1280));
							}
						else
							{	/* Unsafe/ftp.scm 147 */
								BgL_testz00_4578 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 147 */
						BgL_testz00_4578 = ((bool_t) 0);
					}
				if (BgL_testz00_4578)
					{	/* Unsafe/ftp.scm 147 */
						return
							rgc_buffer_substring(BgL_inputzd2portzd2_4065,
							(long) (BgL_minz00_1266), (long) (BgL_maxz00_1267));
					}
				else
					{	/* Unsafe/ftp.scm 147 */
						obj_t BgL_arg2365z00_1273;

						obj_t BgL_arg2366z00_1274;

						{	/* Unsafe/ftp.scm 147 */
							obj_t BgL_arg2368z00_1276;

							{	/* Unsafe/ftp.scm 147 */
								obj_t BgL_res3072z00_2668;

								{	/* Unsafe/ftp.scm 147 */
									int BgL_arg2359z00_2662;

									{	/* Unsafe/ftp.scm 147 */
										int BgL_res3071z00_2664;

										{	/* Unsafe/ftp.scm 147 */
											obj_t BgL_inputzd2portzd2_2663;

											BgL_inputzd2portzd2_2663 = BgL_inputzd2portzd2_4065;
											BgL_res3071z00_2664 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2663));
										}
										BgL_arg2359z00_2662 = BgL_res3071z00_2664;
									}
									BgL_res3072z00_2668 =
										rgc_buffer_substring(BgL_inputzd2portzd2_4065, ((long) 0),
										(long) (BgL_arg2359z00_2662));
								}
								BgL_arg2368z00_1276 = BgL_res3072z00_2668;
							}
							{	/* Unsafe/ftp.scm 147 */
								obj_t BgL_list2369z00_1277;

								BgL_list2369z00_1277 = MAKE_PAIR(BgL_arg2368z00_1276, BNIL);
								BgL_arg2365z00_1273 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3332z00zz__ftpz00, BgL_list2369z00_1277);
						}}
						BgL_arg2366z00_1274 =
							MAKE_PAIR(BINT(BgL_minz00_1266), BINT(BgL_maxz00_1267));
						return
							BGl_errorz00zz__errorz00(BGl_string3333z00zz__ftpz00,
							BgL_arg2365z00_1273, BgL_arg2366z00_1274);
					}
			}
		}
	}



/* ignore */
	obj_t BGl_ignorez00zz__ftpz00(obj_t BgL_codez00_4070, obj_t BgL_ipz00_4069,
		obj_t BgL_mesgz00_4068, obj_t BgL_msgz00_4067,
		obj_t BgL_inputzd2portzd2_4066)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 147 */
			{
				obj_t BgL_inputzd2portzd2_1132;

				long BgL_lastzd2matchzd2_1133;

				obj_t BgL_inputzd2portzd2_1146;

				long BgL_lastzd2matchzd2_1147;

				obj_t BgL_inputzd2portzd2_1156;

				long BgL_lastzd2matchzd2_1157;

				obj_t BgL_inputzd2portzd2_1167;

				long BgL_lastzd2matchzd2_1168;

				obj_t BgL_inputzd2portzd2_1182;

				long BgL_lastzd2matchzd2_1183;

				obj_t BgL_inputzd2portzd2_1196;

				long BgL_lastzd2matchzd2_1197;

				obj_t BgL_inputzd2portzd2_1207;

				long BgL_lastzd2matchzd2_1208;

				obj_t BgL_inputzd2portzd2_1220;

				long BgL_lastzd2matchzd2_1221;

				obj_t BgL_inputzd2portzd2_1231;

				long BgL_lastzd2matchzd2_1232;

				obj_t BgL_inputzd2portzd2_1245;

				long BgL_lastzd2matchzd2_1246;

				RGC_START_MATCH(BgL_inputzd2portzd2_4066);
				{	/* Unsafe/ftp.scm 147 */
					long BgL_matchz00_1337;

					BgL_inputzd2portzd2_1207 = BgL_inputzd2portzd2_4066;
					BgL_lastzd2matchzd2_1208 = ((long) 4);
				BgL_zc3anonymousza32320ze3z83_1209:
					{	/* Unsafe/ftp.scm 147 */
						long BgL_newzd2matchzd2_1210;

						if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1207))
							{	/* Unsafe/ftp.scm 147 */
								RGC_STOP_MATCH(BgL_inputzd2portzd2_1207);
								BgL_newzd2matchzd2_1210 = ((long) 3);
							}
						else
							{	/* Unsafe/ftp.scm 147 */
								BgL_newzd2matchzd2_1210 = BgL_lastzd2matchzd2_1208;
							}
						{	/* Unsafe/ftp.scm 147 */
							int BgL_currentzd2charzd2_1211;

							BgL_currentzd2charzd2_1211 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1207);
							if (((long) (BgL_currentzd2charzd2_1211) == ((long) 0)))
								{	/* Unsafe/ftp.scm 147 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1207))
										{	/* Unsafe/ftp.scm 147 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1207))
												{

													goto BgL_zc3anonymousza32320ze3z83_1209;
												}
											else
												{	/* Unsafe/ftp.scm 147 */
													BgL_matchz00_1337 = BgL_newzd2matchzd2_1210;
												}
										}
									else
										{	/* Unsafe/ftp.scm 147 */
											BgL_inputzd2portzd2_1245 = BgL_inputzd2portzd2_1207;
											BgL_lastzd2matchzd2_1246 = BgL_newzd2matchzd2_1210;
										BgL_zc3anonymousza32346ze3z83_1247:
											{	/* Unsafe/ftp.scm 147 */
												long BgL_newzd2matchzd2_1248;

												if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1245))
													{	/* Unsafe/ftp.scm 147 */
														RGC_STOP_MATCH(BgL_inputzd2portzd2_1245);
														BgL_newzd2matchzd2_1248 = ((long) 3);
													}
												else
													{	/* Unsafe/ftp.scm 147 */
														RGC_STOP_MATCH(BgL_inputzd2portzd2_1245);
														BgL_newzd2matchzd2_1248 = ((long) 4);
													}
												{	/* Unsafe/ftp.scm 147 */
													int BgL_currentzd2charzd2_1249;

													BgL_currentzd2charzd2_1249 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1245);
													if (
														((long) (BgL_currentzd2charzd2_1249) == ((long) 0)))
														{	/* Unsafe/ftp.scm 147 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1245))
																{	/* Unsafe/ftp.scm 147 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1245))
																		{

																			goto BgL_zc3anonymousza32346ze3z83_1247;
																		}
																	else
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_matchz00_1337 =
																				BgL_newzd2matchzd2_1248;
																		}
																}
															else
																{	/* Unsafe/ftp.scm 147 */
																	BgL_inputzd2portzd2_1146 =
																		BgL_inputzd2portzd2_1245;
																	BgL_lastzd2matchzd2_1147 =
																		BgL_newzd2matchzd2_1248;
																BgL_zc3anonymousza32283ze3z83_1148:
																	{	/* Unsafe/ftp.scm 147 */
																		long BgL_newzd2matchzd2_1149;

																		if (rgc_buffer_bol_p
																			(BgL_inputzd2portzd2_1146))
																			{	/* Unsafe/ftp.scm 147 */
																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1146);
																				BgL_newzd2matchzd2_1149 = ((long) 3);
																			}
																		else
																			{	/* Unsafe/ftp.scm 147 */
																				BgL_newzd2matchzd2_1149 =
																					BgL_lastzd2matchzd2_1147;
																			}
																		{	/* Unsafe/ftp.scm 147 */
																			int BgL_currentzd2charzd2_1150;

																			BgL_currentzd2charzd2_1150 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1146);
																			if (((long) (BgL_currentzd2charzd2_1150)
																					== ((long) 0)))
																				{	/* Unsafe/ftp.scm 147 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1146))
																						{	/* Unsafe/ftp.scm 147 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1146))
																								{

																									goto
																										BgL_zc3anonymousza32283ze3z83_1148;
																								}
																							else
																								{	/* Unsafe/ftp.scm 147 */
																									BgL_matchz00_1337 =
																										BgL_newzd2matchzd2_1149;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_4639;

																							BgL_lastzd2matchzd2_4639 =
																								BgL_newzd2matchzd2_1149;
																							BgL_lastzd2matchzd2_1147 =
																								BgL_lastzd2matchzd2_4639;
																							goto
																								BgL_zc3anonymousza32283ze3z83_1148;
																						}
																				}
																			else
																				{	/* Unsafe/ftp.scm 147 */
																					if (
																						((long) (BgL_currentzd2charzd2_1150)
																							== ((long) 10)))
																						{	/* Unsafe/ftp.scm 147 */
																							BgL_matchz00_1337 =
																								BgL_newzd2matchzd2_1149;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_4643;

																							BgL_lastzd2matchzd2_4643 =
																								BgL_newzd2matchzd2_1149;
																							BgL_lastzd2matchzd2_1147 =
																								BgL_lastzd2matchzd2_4643;
																							goto
																								BgL_zc3anonymousza32283ze3z83_1148;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/ftp.scm 147 */
															if (
																((long) (BgL_currentzd2charzd2_1249) ==
																	((long) 10)))
																{	/* Unsafe/ftp.scm 147 */
																	BgL_matchz00_1337 = BgL_newzd2matchzd2_1248;
																}
															else
																{
																	long BgL_lastzd2matchzd2_4648;

																	obj_t BgL_inputzd2portzd2_4647;

																	BgL_inputzd2portzd2_4647 =
																		BgL_inputzd2portzd2_1245;
																	BgL_lastzd2matchzd2_4648 =
																		BgL_newzd2matchzd2_1248;
																	BgL_lastzd2matchzd2_1147 =
																		BgL_lastzd2matchzd2_4648;
																	BgL_inputzd2portzd2_1146 =
																		BgL_inputzd2portzd2_4647;
																	goto BgL_zc3anonymousza32283ze3z83_1148;
																}
														}
												}
											}
										}
								}
							else
								{	/* Unsafe/ftp.scm 147 */
									bool_t BgL_testz00_4649;

									if (((long) (BgL_currentzd2charzd2_1211) >= ((long) 48)))
										{	/* Unsafe/ftp.scm 147 */
											BgL_testz00_4649 =
												((long) (BgL_currentzd2charzd2_1211) < ((long) 58));
										}
									else
										{	/* Unsafe/ftp.scm 147 */
											BgL_testz00_4649 = ((bool_t) 0);
										}
									if (BgL_testz00_4649)
										{	/* Unsafe/ftp.scm 147 */
											BgL_inputzd2portzd2_1132 = BgL_inputzd2portzd2_1207;
											BgL_lastzd2matchzd2_1133 = BgL_newzd2matchzd2_1210;
										BgL_zc3anonymousza32274ze3z83_1134:
											{	/* Unsafe/ftp.scm 147 */
												long BgL_newzd2matchzd2_1135;

												if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1132))
													{	/* Unsafe/ftp.scm 147 */
														RGC_STOP_MATCH(BgL_inputzd2portzd2_1132);
														BgL_newzd2matchzd2_1135 = ((long) 3);
													}
												else
													{	/* Unsafe/ftp.scm 147 */
														RGC_STOP_MATCH(BgL_inputzd2portzd2_1132);
														BgL_newzd2matchzd2_1135 = ((long) 4);
													}
												{	/* Unsafe/ftp.scm 147 */
													int BgL_currentzd2charzd2_1136;

													BgL_currentzd2charzd2_1136 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1132);
													if (
														((long) (BgL_currentzd2charzd2_1136) == ((long) 0)))
														{	/* Unsafe/ftp.scm 147 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1132))
																{	/* Unsafe/ftp.scm 147 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1132))
																		{

																			goto BgL_zc3anonymousza32274ze3z83_1134;
																		}
																	else
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_matchz00_1337 =
																				BgL_newzd2matchzd2_1135;
																		}
																}
															else
																{
																	long BgL_lastzd2matchzd2_4668;

																	obj_t BgL_inputzd2portzd2_4667;

																	BgL_inputzd2portzd2_4667 =
																		BgL_inputzd2portzd2_1132;
																	BgL_lastzd2matchzd2_4668 =
																		BgL_newzd2matchzd2_1135;
																	BgL_lastzd2matchzd2_1147 =
																		BgL_lastzd2matchzd2_4668;
																	BgL_inputzd2portzd2_1146 =
																		BgL_inputzd2portzd2_4667;
																	goto BgL_zc3anonymousza32283ze3z83_1148;
																}
														}
													else
														{	/* Unsafe/ftp.scm 147 */
															bool_t BgL_testz00_4669;

															if (
																((long) (BgL_currentzd2charzd2_1136) >=
																	((long) 48)))
																{	/* Unsafe/ftp.scm 147 */
																	BgL_testz00_4669 =
																		(
																		(long) (BgL_currentzd2charzd2_1136) <
																		((long) 58));
																}
															else
																{	/* Unsafe/ftp.scm 147 */
																	BgL_testz00_4669 = ((bool_t) 0);
																}
															if (BgL_testz00_4669)
																{	/* Unsafe/ftp.scm 147 */
																	BgL_inputzd2portzd2_1182 =
																		BgL_inputzd2portzd2_1132;
																	BgL_lastzd2matchzd2_1183 =
																		BgL_newzd2matchzd2_1135;
																BgL_zc3anonymousza32304ze3z83_1184:
																	{	/* Unsafe/ftp.scm 147 */
																		long BgL_newzd2matchzd2_1185;

																		if (rgc_buffer_bol_p
																			(BgL_inputzd2portzd2_1182))
																			{	/* Unsafe/ftp.scm 147 */
																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1182);
																				BgL_newzd2matchzd2_1185 = ((long) 3);
																			}
																		else
																			{	/* Unsafe/ftp.scm 147 */
																				BgL_newzd2matchzd2_1185 =
																					BgL_lastzd2matchzd2_1183;
																			}
																		{	/* Unsafe/ftp.scm 147 */
																			int BgL_currentzd2charzd2_1186;

																			BgL_currentzd2charzd2_1186 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1182);
																			if (((long) (BgL_currentzd2charzd2_1186)
																					== ((long) 0)))
																				{	/* Unsafe/ftp.scm 147 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1182))
																						{	/* Unsafe/ftp.scm 147 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1182))
																								{

																									goto
																										BgL_zc3anonymousza32304ze3z83_1184;
																								}
																							else
																								{	/* Unsafe/ftp.scm 147 */
																									BgL_matchz00_1337 =
																										BgL_newzd2matchzd2_1185;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_4687;

																							obj_t BgL_inputzd2portzd2_4686;

																							BgL_inputzd2portzd2_4686 =
																								BgL_inputzd2portzd2_1182;
																							BgL_lastzd2matchzd2_4687 =
																								BgL_newzd2matchzd2_1185;
																							BgL_lastzd2matchzd2_1147 =
																								BgL_lastzd2matchzd2_4687;
																							BgL_inputzd2portzd2_1146 =
																								BgL_inputzd2portzd2_4686;
																							goto
																								BgL_zc3anonymousza32283ze3z83_1148;
																						}
																				}
																			else
																				{	/* Unsafe/ftp.scm 147 */
																					bool_t BgL_testz00_4688;

																					if (
																						((long) (BgL_currentzd2charzd2_1186)
																							>= ((long) 48)))
																						{	/* Unsafe/ftp.scm 147 */
																							BgL_testz00_4688 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1186) <
																								((long) 58));
																						}
																					else
																						{	/* Unsafe/ftp.scm 147 */
																							BgL_testz00_4688 = ((bool_t) 0);
																						}
																					if (BgL_testz00_4688)
																						{	/* Unsafe/ftp.scm 147 */
																							BgL_inputzd2portzd2_1231 =
																								BgL_inputzd2portzd2_1182;
																							BgL_lastzd2matchzd2_1232 =
																								BgL_newzd2matchzd2_1185;
																						BgL_zc3anonymousza32336ze3z83_1233:
																							{	/* Unsafe/ftp.scm 147 */
																								long BgL_newzd2matchzd2_1234;

																								if (rgc_buffer_bol_p
																									(BgL_inputzd2portzd2_1231))
																									{	/* Unsafe/ftp.scm 147 */
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_1231);
																										BgL_newzd2matchzd2_1234 =
																											((long) 3);
																									}
																								else
																									{	/* Unsafe/ftp.scm 147 */
																										BgL_newzd2matchzd2_1234 =
																											BgL_lastzd2matchzd2_1232;
																									}
																								{	/* Unsafe/ftp.scm 147 */
																									int
																										BgL_currentzd2charzd2_1235;
																									BgL_currentzd2charzd2_1235 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1231);
																									if (((long)
																											(BgL_currentzd2charzd2_1235)
																											== ((long) 0)))
																										{	/* Unsafe/ftp.scm 147 */
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_1231))
																												{	/* Unsafe/ftp.scm 147 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_1231))
																														{

																															goto
																																BgL_zc3anonymousza32336ze3z83_1233;
																														}
																													else
																														{	/* Unsafe/ftp.scm 147 */
																															BgL_matchz00_1337
																																=
																																BgL_newzd2matchzd2_1234;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_4706;
																													obj_t
																														BgL_inputzd2portzd2_4705;
																													BgL_inputzd2portzd2_4705
																														=
																														BgL_inputzd2portzd2_1231;
																													BgL_lastzd2matchzd2_4706
																														=
																														BgL_newzd2matchzd2_1234;
																													BgL_lastzd2matchzd2_1147
																														=
																														BgL_lastzd2matchzd2_4706;
																													BgL_inputzd2portzd2_1146
																														=
																														BgL_inputzd2portzd2_4705;
																													goto
																														BgL_zc3anonymousza32283ze3z83_1148;
																												}
																										}
																									else
																										{	/* Unsafe/ftp.scm 147 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1235)
																													== ((long) 45)))
																												{	/* Unsafe/ftp.scm 147 */
																													BgL_inputzd2portzd2_1156
																														=
																														BgL_inputzd2portzd2_1231;
																													BgL_lastzd2matchzd2_1157
																														=
																														BgL_newzd2matchzd2_1234;
																												BgL_zc3anonymousza32289ze3z83_1158:
																													{	/* Unsafe/ftp.scm 147 */
																														long
																															BgL_newzd2matchzd2_1159;
																														if (rgc_buffer_bol_p
																															(BgL_inputzd2portzd2_1156))
																															{	/* Unsafe/ftp.scm 147 */
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_1156);
																																BgL_newzd2matchzd2_1159
																																	= ((long) 0);
																															}
																														else
																															{	/* Unsafe/ftp.scm 147 */
																																if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1156))
																																	{	/* Unsafe/ftp.scm 147 */
																																		RGC_STOP_MATCH
																																			(BgL_inputzd2portzd2_1156);
																																		BgL_newzd2matchzd2_1159
																																			=
																																			((long)
																																			3);
																																	}
																																else
																																	{	/* Unsafe/ftp.scm 147 */
																																		BgL_newzd2matchzd2_1159
																																			=
																																			BgL_lastzd2matchzd2_1157;
																																	}
																															}
																														{	/* Unsafe/ftp.scm 147 */
																															int
																																BgL_currentzd2charzd2_1160;
																															BgL_currentzd2charzd2_1160
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_1156);
																															if (((long)
																																	(BgL_currentzd2charzd2_1160)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/ftp.scm 147 */
																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1156))
																																		{	/* Unsafe/ftp.scm 147 */
																																			if (rgc_fill_buffer(BgL_inputzd2portzd2_1156))
																																				{

																																					goto
																																						BgL_zc3anonymousza32289ze3z83_1158;
																																				}
																																			else
																																				{	/* Unsafe/ftp.scm 147 */
																																					BgL_matchz00_1337
																																						=
																																						BgL_newzd2matchzd2_1159;
																																				}
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_4724;
																																			BgL_lastzd2matchzd2_4724
																																				=
																																				BgL_newzd2matchzd2_1159;
																																			BgL_lastzd2matchzd2_1157
																																				=
																																				BgL_lastzd2matchzd2_4724;
																																			goto
																																				BgL_zc3anonymousza32289ze3z83_1158;
																																		}
																																}
																															else
																																{	/* Unsafe/ftp.scm 147 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1160)
																																			==
																																			((long)
																																				10)))
																																		{	/* Unsafe/ftp.scm 147 */
																																			BgL_matchz00_1337
																																				=
																																				BgL_newzd2matchzd2_1159;
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_4728;
																																			BgL_lastzd2matchzd2_4728
																																				=
																																				BgL_newzd2matchzd2_1159;
																																			BgL_lastzd2matchzd2_1157
																																				=
																																				BgL_lastzd2matchzd2_4728;
																																			goto
																																				BgL_zc3anonymousza32289ze3z83_1158;
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Unsafe/ftp.scm 147 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1235)
																															== ((long) 32)))
																														{	/* Unsafe/ftp.scm 147 */
																															BgL_inputzd2portzd2_1196
																																=
																																BgL_inputzd2portzd2_1231;
																															BgL_lastzd2matchzd2_1197
																																=
																																BgL_newzd2matchzd2_1234;
																														BgL_zc3anonymousza32313ze3z83_1198:
																															{	/* Unsafe/ftp.scm 147 */
																																long
																																	BgL_newzd2matchzd2_1199;
																																if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1196))
																																	{	/* Unsafe/ftp.scm 147 */
																																		RGC_STOP_MATCH
																																			(BgL_inputzd2portzd2_1196);
																																		BgL_newzd2matchzd2_1199
																																			=
																																			((long)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/ftp.scm 147 */
																																		if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1196))
																																			{	/* Unsafe/ftp.scm 147 */
																																				RGC_STOP_MATCH
																																					(BgL_inputzd2portzd2_1196);
																																				BgL_newzd2matchzd2_1199
																																					=
																																					(
																																					(long)
																																					3);
																																			}
																																		else
																																			{	/* Unsafe/ftp.scm 147 */
																																				BgL_newzd2matchzd2_1199
																																					=
																																					BgL_lastzd2matchzd2_1197;
																																			}
																																	}
																																{	/* Unsafe/ftp.scm 147 */
																																	int
																																		BgL_currentzd2charzd2_1200;
																																	BgL_currentzd2charzd2_1200
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_inputzd2portzd2_1196);
																																	if (((long)
																																			(BgL_currentzd2charzd2_1200)
																																			==
																																			((long)
																																				0)))
																																		{	/* Unsafe/ftp.scm 147 */
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1196))
																																				{	/* Unsafe/ftp.scm 147 */
																																					if (rgc_fill_buffer(BgL_inputzd2portzd2_1196))
																																						{

																																							goto
																																								BgL_zc3anonymousza32313ze3z83_1198;
																																						}
																																					else
																																						{	/* Unsafe/ftp.scm 147 */
																																							BgL_matchz00_1337
																																								=
																																								BgL_newzd2matchzd2_1199;
																																						}
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_4746;
																																					BgL_lastzd2matchzd2_4746
																																						=
																																						BgL_newzd2matchzd2_1199;
																																					BgL_lastzd2matchzd2_1197
																																						=
																																						BgL_lastzd2matchzd2_4746;
																																					goto
																																						BgL_zc3anonymousza32313ze3z83_1198;
																																				}
																																		}
																																	else
																																		{	/* Unsafe/ftp.scm 147 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1200)
																																					==
																																					((long) 10)))
																																				{	/* Unsafe/ftp.scm 147 */
																																					BgL_matchz00_1337
																																						=
																																						BgL_newzd2matchzd2_1199;
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_4750;
																																					BgL_lastzd2matchzd2_4750
																																						=
																																						BgL_newzd2matchzd2_1199;
																																					BgL_lastzd2matchzd2_1197
																																						=
																																						BgL_lastzd2matchzd2_4750;
																																					goto
																																						BgL_zc3anonymousza32313ze3z83_1198;
																																				}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Unsafe/ftp.scm 147 */
																															bool_t
																																BgL_testz00_4751;
																															if (((long)
																																	(BgL_currentzd2charzd2_1235)
																																	==
																																	((long) 10)))
																																{	/* Unsafe/ftp.scm 147 */
																																	BgL_testz00_4751
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/ftp.scm 147 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1235)
																																			==
																																			((long)
																																				32)))
																																		{	/* Unsafe/ftp.scm 147 */
																																			BgL_testz00_4751
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/ftp.scm 147 */
																																			BgL_testz00_4751
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_1235)
																																				==
																																				((long)
																																					45));
																																}}
																															if (BgL_testz00_4751)
																																{	/* Unsafe/ftp.scm 147 */
																																	BgL_matchz00_1337
																																		=
																																		BgL_newzd2matchzd2_1234;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_4761;
																																	obj_t
																																		BgL_inputzd2portzd2_4760;
																																	BgL_inputzd2portzd2_4760
																																		=
																																		BgL_inputzd2portzd2_1231;
																																	BgL_lastzd2matchzd2_4761
																																		=
																																		BgL_newzd2matchzd2_1234;
																																	BgL_lastzd2matchzd2_1147
																																		=
																																		BgL_lastzd2matchzd2_4761;
																																	BgL_inputzd2portzd2_1146
																																		=
																																		BgL_inputzd2portzd2_4760;
																																	goto
																																		BgL_zc3anonymousza32283ze3z83_1148;
																																}
																														}
																												}
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/ftp.scm 147 */
																							bool_t BgL_testz00_4762;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_1186)
																									== ((long) 10)))
																								{	/* Unsafe/ftp.scm 147 */
																									BgL_testz00_4762 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/ftp.scm 147 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1186)
																											>= ((long) 48)))
																										{	/* Unsafe/ftp.scm 147 */
																											BgL_testz00_4762 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_1186)
																												< ((long) 58));
																										}
																									else
																										{	/* Unsafe/ftp.scm 147 */
																											BgL_testz00_4762 =
																												((bool_t) 0);
																										}
																								}
																							if (BgL_testz00_4762)
																								{	/* Unsafe/ftp.scm 147 */
																									BgL_matchz00_1337 =
																										BgL_newzd2matchzd2_1185;
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_4772;

																									obj_t
																										BgL_inputzd2portzd2_4771;
																									BgL_inputzd2portzd2_4771 =
																										BgL_inputzd2portzd2_1182;
																									BgL_lastzd2matchzd2_4772 =
																										BgL_newzd2matchzd2_1185;
																									BgL_lastzd2matchzd2_1147 =
																										BgL_lastzd2matchzd2_4772;
																									BgL_inputzd2portzd2_1146 =
																										BgL_inputzd2portzd2_4771;
																									goto
																										BgL_zc3anonymousza32283ze3z83_1148;
																								}
																						}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/ftp.scm 147 */
																	bool_t BgL_testz00_4773;

																	if (
																		((long) (BgL_currentzd2charzd2_1136) ==
																			((long) 10)))
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_testz00_4773 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/ftp.scm 147 */
																			if (
																				((long) (BgL_currentzd2charzd2_1136) >=
																					((long) 48)))
																				{	/* Unsafe/ftp.scm 147 */
																					BgL_testz00_4773 =
																						(
																						(long) (BgL_currentzd2charzd2_1136)
																						< ((long) 58));
																				}
																			else
																				{	/* Unsafe/ftp.scm 147 */
																					BgL_testz00_4773 = ((bool_t) 0);
																				}
																		}
																	if (BgL_testz00_4773)
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_matchz00_1337 =
																				BgL_newzd2matchzd2_1135;
																		}
																	else
																		{
																			long BgL_lastzd2matchzd2_4783;

																			obj_t BgL_inputzd2portzd2_4782;

																			BgL_inputzd2portzd2_4782 =
																				BgL_inputzd2portzd2_1132;
																			BgL_lastzd2matchzd2_4783 =
																				BgL_newzd2matchzd2_1135;
																			BgL_lastzd2matchzd2_1147 =
																				BgL_lastzd2matchzd2_4783;
																			BgL_inputzd2portzd2_1146 =
																				BgL_inputzd2portzd2_4782;
																			goto BgL_zc3anonymousza32283ze3z83_1148;
																		}
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/ftp.scm 147 */
											if (((long) (BgL_currentzd2charzd2_1211) == ((long) 32)))
												{	/* Unsafe/ftp.scm 147 */
													BgL_inputzd2portzd2_1220 = BgL_inputzd2portzd2_1207;
													BgL_lastzd2matchzd2_1221 = BgL_newzd2matchzd2_1210;
												BgL_zc3anonymousza32329ze3z83_1222:
													{	/* Unsafe/ftp.scm 147 */
														long BgL_newzd2matchzd2_1223;

														if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1220))
															{	/* Unsafe/ftp.scm 147 */
																RGC_STOP_MATCH(BgL_inputzd2portzd2_1220);
																BgL_newzd2matchzd2_1223 = ((long) 2);
															}
														else
															{	/* Unsafe/ftp.scm 147 */
																if (rgc_buffer_bol_p(BgL_inputzd2portzd2_1220))
																	{	/* Unsafe/ftp.scm 147 */
																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1220);
																		BgL_newzd2matchzd2_1223 = ((long) 3);
																	}
																else
																	{	/* Unsafe/ftp.scm 147 */
																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1220);
																		BgL_newzd2matchzd2_1223 = ((long) 4);
															}}
														{	/* Unsafe/ftp.scm 147 */
															int BgL_currentzd2charzd2_1224;

															BgL_currentzd2charzd2_1224 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1220);
															if (
																((long) (BgL_currentzd2charzd2_1224) ==
																	((long) 0)))
																{	/* Unsafe/ftp.scm 147 */
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_1220))
																		{	/* Unsafe/ftp.scm 147 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_1220))
																				{

																					goto
																						BgL_zc3anonymousza32329ze3z83_1222;
																				}
																			else
																				{	/* Unsafe/ftp.scm 147 */
																					BgL_matchz00_1337 =
																						BgL_newzd2matchzd2_1223;
																				}
																		}
																	else
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_inputzd2portzd2_1167 =
																				BgL_inputzd2portzd2_1220;
																			BgL_lastzd2matchzd2_1168 =
																				BgL_newzd2matchzd2_1223;
																		BgL_zc3anonymousza32296ze3z83_1169:
																			{	/* Unsafe/ftp.scm 147 */
																				long BgL_newzd2matchzd2_1170;

																				if (rgc_buffer_bol_p
																					(BgL_inputzd2portzd2_1167))
																					{	/* Unsafe/ftp.scm 147 */
																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1167);
																						BgL_newzd2matchzd2_1170 =
																							((long) 2);
																					}
																				else
																					{	/* Unsafe/ftp.scm 147 */
																						if (rgc_buffer_bol_p
																							(BgL_inputzd2portzd2_1167))
																							{	/* Unsafe/ftp.scm 147 */
																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1167);
																								BgL_newzd2matchzd2_1170 =
																									((long) 3);
																							}
																						else
																							{	/* Unsafe/ftp.scm 147 */
																								BgL_newzd2matchzd2_1170 =
																									BgL_lastzd2matchzd2_1168;
																							}
																					}
																				{	/* Unsafe/ftp.scm 147 */
																					int BgL_currentzd2charzd2_1171;

																					BgL_currentzd2charzd2_1171 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1167);
																					if (((long)
																							(BgL_currentzd2charzd2_1171) ==
																							((long) 0)))
																						{	/* Unsafe/ftp.scm 147 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_1167))
																								{	/* Unsafe/ftp.scm 147 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_1167))
																										{

																											goto
																												BgL_zc3anonymousza32296ze3z83_1169;
																										}
																									else
																										{	/* Unsafe/ftp.scm 147 */
																											BgL_matchz00_1337 =
																												BgL_newzd2matchzd2_1170;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_4816;

																									BgL_lastzd2matchzd2_4816 =
																										BgL_newzd2matchzd2_1170;
																									BgL_lastzd2matchzd2_1168 =
																										BgL_lastzd2matchzd2_4816;
																									goto
																										BgL_zc3anonymousza32296ze3z83_1169;
																								}
																						}
																					else
																						{	/* Unsafe/ftp.scm 147 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1171)
																									== ((long) 10)))
																								{	/* Unsafe/ftp.scm 147 */
																									BgL_matchz00_1337 =
																										BgL_newzd2matchzd2_1170;
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_4820;

																									BgL_lastzd2matchzd2_4820 =
																										BgL_newzd2matchzd2_1170;
																									BgL_lastzd2matchzd2_1168 =
																										BgL_lastzd2matchzd2_4820;
																									goto
																										BgL_zc3anonymousza32296ze3z83_1169;
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Unsafe/ftp.scm 147 */
																	if (
																		((long) (BgL_currentzd2charzd2_1224) ==
																			((long) 10)))
																		{	/* Unsafe/ftp.scm 147 */
																			BgL_matchz00_1337 =
																				BgL_newzd2matchzd2_1223;
																		}
																	else
																		{
																			long BgL_lastzd2matchzd2_4825;

																			obj_t BgL_inputzd2portzd2_4824;

																			BgL_inputzd2portzd2_4824 =
																				BgL_inputzd2portzd2_1220;
																			BgL_lastzd2matchzd2_4825 =
																				BgL_newzd2matchzd2_1223;
																			BgL_lastzd2matchzd2_1168 =
																				BgL_lastzd2matchzd2_4825;
																			BgL_inputzd2portzd2_1167 =
																				BgL_inputzd2portzd2_4824;
																			goto BgL_zc3anonymousza32296ze3z83_1169;
																		}
																}
														}
													}
												}
											else
												{	/* Unsafe/ftp.scm 147 */
													if (
														((long) (BgL_currentzd2charzd2_1211) ==
															((long) 10)))
														{	/* Unsafe/ftp.scm 147 */
															long BgL_newzd2matchzd2_2596;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_1207);
															BgL_newzd2matchzd2_2596 = ((long) 4);
															BgL_matchz00_1337 = BgL_newzd2matchzd2_2596;
														}
													else
														{
															long BgL_lastzd2matchzd2_4831;

															obj_t BgL_inputzd2portzd2_4830;

															BgL_inputzd2portzd2_4830 =
																BgL_inputzd2portzd2_1207;
															BgL_lastzd2matchzd2_4831 =
																BgL_newzd2matchzd2_1210;
															BgL_lastzd2matchzd2_1246 =
																BgL_lastzd2matchzd2_4831;
															BgL_inputzd2portzd2_1245 =
																BgL_inputzd2portzd2_4830;
															goto BgL_zc3anonymousza32346ze3z83_1247;
														}
												}
										}
								}
						}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_4066);
					{

						{	/* Unsafe/ftp.scm 147 */
							obj_t BgL_aux2170z00_1342;

							BgL_aux2170z00_1342 = BINT(BgL_matchz00_1337);
							switch ((long) CINT(BgL_aux2170z00_1342))
								{
								case ((long) 4):

									{	/* Llib/object.scm 90 */
										BgL_z62ftpzd2parsezd2errorz62_bglt BgL_arg2422z00_1344;

										{	/* Llib/object.scm 90 */
											obj_t BgL_arg2423z00_1345;

											{	/* Llib/object.scm 90 */

												{	/* Llib/object.scm 90 */

													BgL_arg2423z00_1345 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}}
											{	/* Unsafe/ftp.scm 164 */
												BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3075z00_2698;

												{	/* Unsafe/ftp.scm 164 */
													BgL_z62ftpzd2parsezd2errorz62_bglt
														BgL_new2022z00_2678;
													{	/* Unsafe/ftp.scm 164 */
														BgL_z62ftpzd2parsezd2errorz62_bglt
															BgL_res3073z00_2683;
														{	/* Unsafe/ftp.scm 164 */
															BgL_z62ftpzd2parsezd2errorz62_bglt
																BgL_new2038z00_2679;
															BgL_new2038z00_2679 =
																((BgL_z62ftpzd2parsezd2errorz62_bglt)
																BREF(GC_MALLOC(sizeof(struct
																			BgL_z62ftpzd2parsezd2errorz62_bgl))));
															BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
																(BgL_new2038z00_2679),
																BGl_classzd2numzd2zz__objectz00
																(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
															{	/* Unsafe/ftp.scm 164 */
																BgL_objectz00_bglt BgL_auxz00_4839;

																BgL_auxz00_4839 =
																	(BgL_objectz00_bglt) (BgL_new2038z00_2679);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_4839,
																	BFALSE);
															}
															BgL_res3073z00_2683 = BgL_new2038z00_2679;
														}
														BgL_new2022z00_2678 = BgL_res3073z00_2683;
													}
													{	/* Unsafe/ftp.scm 164 */
														BgL_z62ftpzd2parsezd2errorz62_bglt
															BgL_res3074z00_2697;
														{	/* Unsafe/ftp.scm 164 */
															BgL_z62ftpzd2parsezd2errorz62_bglt
																BgL_new2030z00_2684;
															BgL_new2030z00_2684 = BgL_new2022z00_2678;
															{	/* Unsafe/ftp.scm 164 */
																obj_t BgL_fname2024z00_2691;

																obj_t BgL_location2025z00_2692;

																obj_t BgL_stack2026z00_2693;

																obj_t BgL_proc2027z00_2694;

																obj_t BgL_msg2028z00_2695;

																obj_t BgL_obj2029z00_2696;

																BgL_fname2024z00_2691 = BFALSE;
																BgL_location2025z00_2692 = BFALSE;
																BgL_stack2026z00_2693 = BgL_arg2423z00_1345;
																BgL_proc2027z00_2694 =
																	BGl_string3336z00zz__ftpz00;
																BgL_msg2028z00_2695 =
																	BGl_string3337z00zz__ftpz00;
																BgL_obj2029z00_2696 = BgL_msgz00_4067;
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->
																		BgL_fnamez00) =
																	((obj_t) BgL_fname2024z00_2691), BUNSPEC);
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->
																		BgL_locationz00) =
																	((obj_t) BgL_location2025z00_2692), BUNSPEC);
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->
																		BgL_stackz00) =
																	((obj_t) BgL_stack2026z00_2693), BUNSPEC);
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->BgL_procz00) =
																	((obj_t) BgL_proc2027z00_2694), BUNSPEC);
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->BgL_msgz00) =
																	((obj_t) BgL_msg2028z00_2695), BUNSPEC);
																((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																			CREF(BgL_new2030z00_2684))->BgL_objz00) =
																	((obj_t) BgL_obj2029z00_2696), BUNSPEC);
																BgL_res3074z00_2697 = BgL_new2030z00_2684;
														}} BgL_res3074z00_2697;
													}
													BgL_res3075z00_2698 = BgL_new2022z00_2678;
												}
												BgL_arg2422z00_1344 = BgL_res3075z00_2698;
										}}
										return
											BGl_raisez00zz__errorz00((obj_t) (BgL_arg2422z00_1344));
									}
									break;
								case ((long) 3):

									{	/* Unsafe/ftp.scm 161 */
										obj_t BgL_auxz00_4071;

										{	/* Unsafe/ftp.scm 161 */
											obj_t BgL_arg2427z00_1350;

											{	/* Unsafe/ftp.scm 161 */
												obj_t BgL_res3077z00_2706;

												{	/* Unsafe/ftp.scm 161 */
													int BgL_arg2359z00_2700;

													{	/* Unsafe/ftp.scm 161 */
														int BgL_res3076z00_2702;

														{	/* Unsafe/ftp.scm 161 */
															obj_t BgL_inputzd2portzd2_2701;

															BgL_inputzd2portzd2_2701 =
																BgL_inputzd2portzd2_4066;
															BgL_res3076z00_2702 =
																(int) (RGC_BUFFER_LENGTH
																(BgL_inputzd2portzd2_2701));
														}
														BgL_arg2359z00_2700 = BgL_res3076z00_2702;
													}
													BgL_res3077z00_2706 =
														rgc_buffer_substring(BgL_inputzd2portzd2_4066,
														((long) 0), (long) (BgL_arg2359z00_2700));
												}
												BgL_arg2427z00_1350 = BgL_res3077z00_2706;
											}
											BgL_auxz00_4071 =
												string_append_3(CELL_REF(BgL_mesgz00_4068),
												BGl_string3338z00zz__ftpz00, BgL_arg2427z00_1350);
										}
										CELL_SET(BgL_mesgz00_4068, BgL_auxz00_4071);
									}
									{	/* Unsafe/ftp.scm 162 */
										obj_t BgL_arg2428z00_1351;

										BgL_arg2428z00_1351 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4069);
										return
											BGl_loopz00zz__ftpz00(BgL_codez00_4070, BgL_ipz00_4069,
											BgL_mesgz00_4068, BgL_arg2428z00_1351);
									}
									break;
								case ((long) 2):

									{	/* Unsafe/ftp.scm 158 */
										obj_t BgL_auxz00_4072;

										{	/* Unsafe/ftp.scm 158 */
											obj_t BgL_arg2430z00_1353;

											{	/* Unsafe/ftp.scm 158 */
												int BgL_arg2432z00_1355;

												{	/* Unsafe/ftp.scm 158 */
													int BgL_res3078z00_2708;

													{	/* Unsafe/ftp.scm 158 */
														obj_t BgL_inputzd2portzd2_2707;

														BgL_inputzd2portzd2_2707 = BgL_inputzd2portzd2_4066;
														BgL_res3078z00_2708 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_2707));
													}
													BgL_arg2432z00_1355 = BgL_res3078z00_2708;
												}
												BgL_arg2430z00_1353 =
													BGl_thezd2substringzd2zz__ftpz00
													(BgL_inputzd2portzd2_4066, (int) (((long) 1)),
													BgL_arg2432z00_1355);
											}
											BgL_auxz00_4072 =
												string_append_3(CELL_REF(BgL_mesgz00_4068),
												BGl_string3338z00zz__ftpz00, BgL_arg2430z00_1353);
										}
										CELL_SET(BgL_mesgz00_4068, BgL_auxz00_4072);
									}
									{	/* Unsafe/ftp.scm 159 */
										obj_t BgL_arg2434z00_1356;

										BgL_arg2434z00_1356 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4069);
										return
											BGl_loopz00zz__ftpz00(BgL_codez00_4070, BgL_ipz00_4069,
											BgL_mesgz00_4068, BgL_arg2434z00_1356);
									}
									break;
								case ((long) 1):

									{	/* Unsafe/ftp.scm 152 */
										obj_t BgL_code1z00_1357;

										obj_t BgL_mesg1z00_1358;

										{	/* Unsafe/ftp.scm 152 */
											obj_t BgL_arg2437z00_1361;

											BgL_arg2437z00_1361 =
												BGl_thezd2substringzd2zz__ftpz00
												(BgL_inputzd2portzd2_4066, (int) (((long) 0)),
												(int) (((long) 3)));
											{	/* Ieee/number.scm 134 */

												BgL_code1z00_1357 =
													BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
													(BgL_arg2437z00_1361, BINT(((long) 10)));
										}}
										{	/* Unsafe/ftp.scm 153 */
											int BgL_arg2439z00_1365;

											{	/* Unsafe/ftp.scm 153 */
												int BgL_res3079z00_2710;

												{	/* Unsafe/ftp.scm 153 */
													obj_t BgL_inputzd2portzd2_2709;

													BgL_inputzd2portzd2_2709 = BgL_inputzd2portzd2_4066;
													BgL_res3079z00_2710 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2709));
												}
												BgL_arg2439z00_1365 = BgL_res3079z00_2710;
											}
											BgL_mesg1z00_1358 =
												BGl_thezd2substringzd2zz__ftpz00
												(BgL_inputzd2portzd2_4066, (int) (((long) 4)),
												BgL_arg2439z00_1365);
										}
										{	/* Unsafe/ftp.scm 154 */
											obj_t BgL_auxz00_4073;

											BgL_auxz00_4073 =
												string_append_3(CELL_REF(BgL_mesgz00_4068),
												BGl_string3338z00zz__ftpz00, BgL_mesg1z00_1358);
											CELL_SET(BgL_mesgz00_4068, BgL_auxz00_4073);
										}
										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_codez00_4070,
												BgL_code1z00_1357))
											{	/* Unsafe/ftp.scm 155 */
												return BFALSE;
											}
										else
											{	/* Unsafe/ftp.scm 156 */
												obj_t BgL_arg2436z00_1360;

												BgL_arg2436z00_1360 =
													BGl_readzd2linezd2zz__r4_input_6_10_2z00
													(BgL_ipz00_4069);
												return BGl_loopz00zz__ftpz00(BgL_codez00_4070,
													BgL_ipz00_4069, BgL_mesgz00_4068,
													BgL_arg2436z00_1360);
											}
									}
									break;
								case ((long) 0):

									{	/* Unsafe/ftp.scm 149 */
										obj_t BgL_auxz00_4074;

										{	/* Unsafe/ftp.scm 149 */
											obj_t BgL_arg2441z00_1367;

											{	/* Unsafe/ftp.scm 149 */
												int BgL_arg2443z00_1369;

												{	/* Unsafe/ftp.scm 149 */
													int BgL_res3080z00_2712;

													{	/* Unsafe/ftp.scm 149 */
														obj_t BgL_inputzd2portzd2_2711;

														BgL_inputzd2portzd2_2711 = BgL_inputzd2portzd2_4066;
														BgL_res3080z00_2712 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_2711));
													}
													BgL_arg2443z00_1369 = BgL_res3080z00_2712;
												}
												BgL_arg2441z00_1367 =
													BGl_thezd2substringzd2zz__ftpz00
													(BgL_inputzd2portzd2_4066, (int) (((long) 4)),
													BgL_arg2443z00_1369);
											}
											BgL_auxz00_4074 =
												string_append_3(CELL_REF(BgL_mesgz00_4068),
												BGl_string3338z00zz__ftpz00, BgL_arg2441z00_1367);
										}
										CELL_SET(BgL_mesgz00_4068, BgL_auxz00_4074);
									}
									{	/* Unsafe/ftp.scm 150 */
										obj_t BgL_arg2444z00_1370;

										BgL_arg2444z00_1370 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4069);
										return
											BGl_loopz00zz__ftpz00(BgL_codez00_4070, BgL_ipz00_4069,
											BgL_mesgz00_4068, BgL_arg2444z00_1370);
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string3334z00zz__ftpz00,
										BGl_string3335z00zz__ftpz00, BINT(BgL_matchz00_1337));
								}
						}
					}
				}
			}
		}
	}



/* <exit:2273> */
	obj_t BGl_zc3exitza32273ze3z83zz__ftpz00(obj_t BgL_port2069z00_4079,
		obj_t BgL_codez00_4078, obj_t BgL_ipz00_4077, obj_t BgL_mesgz00_4076,
		obj_t BgL_msgz00_4075)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 147 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2071z00_1092;

			if (SET_EXIT(BgL_an_exit2071z00_1092))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2071z00_1092 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 147 */

						PUSH_EXIT(BgL_an_exit2071z00_1092, ((long) 0));
						{	/* Unsafe/ftp.scm 147 */
							obj_t BgL_val2072z00_1093;

							BgL_val2072z00_1093 =
								BGl_ignorez00zz__ftpz00(BgL_codez00_4078, BgL_ipz00_4077,
								BgL_mesgz00_4076, BgL_msgz00_4075, BgL_port2069z00_4079);
							POP_EXIT();
							return BgL_val2072z00_1093;
						}
					}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__ftpz00(obj_t BgL_codez00_4082, obj_t BgL_ipz00_4081,
		obj_t BgL_mesgz00_4080, obj_t BgL_msgz00_1083)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 145 */
			if (EOF_OBJECTP(BgL_msgz00_1083))
				{	/* Unsafe/ftp.scm 146 */
					return BFALSE;
				}
			else
				{	/* Unsafe/ftp.scm 147 */
					obj_t BgL_port2069z00_1086;

					{	/* Ieee/port.scm 376 */

						BgL_port2069z00_1086 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BgL_msgz00_1083, BINT(((long) 0)));
					}
					{	/* Unsafe/ftp.scm 147 */
						obj_t BgL_val2070z00_1087;

						BgL_val2070z00_1087 =
							BGl_zc3exitza32273ze3z83zz__ftpz00(BgL_port2069z00_1086,
							BgL_codez00_4082, BgL_ipz00_4081, BgL_mesgz00_4080,
							BgL_msgz00_1083);
						bgl_close_input_port(BgL_port2069z00_1086);
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val2070z00_1087)))
							{	/* Unsafe/ftp.scm 147 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val2070z00_1087),
									CDR(BgL_val2070z00_1087));
							}
						else
							{	/* Unsafe/ftp.scm 147 */
								return BgL_val2070z00_1087;
							}
					}
				}
		}
	}



/* %ftp-read-dtp */
	obj_t BGl_z52ftpzd2readzd2dtpz52zz__ftpz00(obj_t BgL_ftpz00_7,
		obj_t BgL_whatz00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 173 */
			{	/* Unsafe/ftp.scm 174 */
				obj_t BgL_ipz00_1420;

				{	/* Unsafe/ftp.scm 174 */
					obj_t BgL_arg2456z00_1429;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_4906;

						BgL_auxz00_4906 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_7);
						BgL_arg2456z00_1429 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_4906))->BgL_dtpz00);
					}
					BgL_ipz00_1420 = SOCKET_INPUT(BgL_arg2456z00_1429);
				}
				if ((BgL_whatz00_8 == BGl_symbol3339z00zz__ftpz00))
					{	/* Unsafe/ftp.scm 175 */
						return BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_1420);
					}
				else
					{	/* Unsafe/ftp.scm 175 */
						if ((BgL_whatz00_8 == BGl_symbol3341z00zz__ftpz00))
							{	/* Unsafe/ftp.scm 175 */
								return BgL_ipz00_1420;
							}
						else
							{	/* Llib/object.scm 90 */
								BgL_z62ftpzd2errorzb0_bglt BgL_arg2452z00_1424;

								{	/* Llib/object.scm 90 */
									obj_t BgL_arg2453z00_1425;

									{	/* Llib/object.scm 90 */

										{	/* Llib/object.scm 90 */

											BgL_arg2453z00_1425 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									{	/* Unsafe/ftp.scm 182 */
										BgL_z62ftpzd2errorzb0_bglt BgL_res3083z00_2751;

										{	/* Unsafe/ftp.scm 182 */
											BgL_z62ftpzd2errorzb0_bglt BgL_new1960z00_2731;

											{	/* Unsafe/ftp.scm 182 */
												BgL_z62ftpzd2errorzb0_bglt BgL_res3081z00_2736;

												{	/* Unsafe/ftp.scm 182 */
													BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_2732;

													BgL_new1976z00_2732 =
														((BgL_z62ftpzd2errorzb0_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_z62ftpzd2errorzb0_bgl))));
													BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
														(BgL_new1976z00_2732),
														BGl_classzd2numzd2zz__objectz00
														(BGl_z62ftpzd2errorzb0zz__ftpz00));
													{	/* Unsafe/ftp.scm 182 */
														BgL_objectz00_bglt BgL_auxz00_4920;

														BgL_auxz00_4920 =
															(BgL_objectz00_bglt) (BgL_new1976z00_2732);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_4920, BFALSE);
													}
													BgL_res3081z00_2736 = BgL_new1976z00_2732;
												}
												BgL_new1960z00_2731 = BgL_res3081z00_2736;
											}
											{	/* Unsafe/ftp.scm 182 */
												BgL_z62ftpzd2errorzb0_bglt BgL_res3082z00_2750;

												{	/* Unsafe/ftp.scm 182 */
													BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_2737;

													BgL_new1968z00_2737 = BgL_new1960z00_2731;
													{	/* Unsafe/ftp.scm 182 */
														obj_t BgL_fname1962z00_2744;

														obj_t BgL_location1963z00_2745;

														obj_t BgL_stack1964z00_2746;

														obj_t BgL_proc1965z00_2747;

														obj_t BgL_msg1966z00_2748;

														obj_t BgL_obj1967z00_2749;

														BgL_fname1962z00_2744 = BFALSE;
														BgL_location1963z00_2745 = BFALSE;
														BgL_stack1964z00_2746 = BgL_arg2453z00_1425;
														BgL_proc1965z00_2747 = BGl_string3343z00zz__ftpz00;
														BgL_msg1966z00_2748 = BGl_string3344z00zz__ftpz00;
														BgL_obj1967z00_2749 = BgL_whatz00_8;
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_fnamez00) =
															((obj_t) BgL_fname1962z00_2744), BUNSPEC);
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_locationz00) =
															((obj_t) BgL_location1963z00_2745), BUNSPEC);
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_stackz00) =
															((obj_t) BgL_stack1964z00_2746), BUNSPEC);
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_procz00) =
															((obj_t) BgL_proc1965z00_2747), BUNSPEC);
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_msgz00) =
															((obj_t) BgL_msg1966z00_2748), BUNSPEC);
														((((BgL_z62ftpzd2errorzb0_bglt)
																	CREF(BgL_new1968z00_2737))->BgL_objz00) =
															((obj_t) BgL_obj1967z00_2749), BUNSPEC);
														BgL_res3082z00_2750 = BgL_new1968z00_2737;
												}} BgL_res3082z00_2750;
											}
											BgL_res3083z00_2751 = BgL_new1960z00_2731;
										}
										BgL_arg2452z00_1424 = BgL_res3083z00_2751;
								}}
								return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2452z00_1424));
							}
					}
			}
		}
	}



/* %ftp-engine-cmd */
	obj_t BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(obj_t BgL_ftpz00_9,
		obj_t BgL_cmdz00_10, obj_t BgL_cmdsz00_11)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 190 */
			{	/* Unsafe/ftp.scm 191 */
				bool_t BgL_testz00_4931;

				{	/* Unsafe/ftp.scm 191 */
					obj_t BgL_arg2458z00_1431;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_4932;

						BgL_auxz00_4932 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_9);
						BgL_arg2458z00_1431 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_4932))->BgL_cmdz00);
					}
					BgL_testz00_4931 = SOCKETP(BgL_arg2458z00_1431);
				}
				if (BgL_testz00_4931)
					{	/* Unsafe/ftp.scm 191 */
						BFALSE;
					}
				else
					{	/* Unsafe/ftp.scm 191 */
						BGl_errorz00zz__errorz00(BGl_string3345z00zz__ftpz00,
							BGl_string3346z00zz__ftpz00, BgL_cmdz00_10);
					}
			}
			if (CBOOL(BgL_cmdz00_10))
				{	/* Unsafe/ftp.scm 193 */
					obj_t BgL_runner2462z00_1435;

					{	/* Unsafe/ftp.scm 193 */
						obj_t BgL_list2459z00_1432;

						{	/* Unsafe/ftp.scm 193 */
							obj_t BgL_arg2460z00_1433;

							BgL_arg2460z00_1433 = MAKE_PAIR(BgL_cmdsz00_11, BNIL);
							BgL_list2459z00_1432 =
								MAKE_PAIR(BgL_cmdz00_10, BgL_arg2460z00_1433);
						}
						BgL_runner2462z00_1435 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ftpz00_9,
							BgL_list2459z00_1432);
					}
					{	/* Unsafe/ftp.scm 193 */
						obj_t BgL_aux2461z00_1434;

						BgL_aux2461z00_1434 = CAR(BgL_runner2462z00_1435);
						BgL_runner2462z00_1435 = CDR(BgL_runner2462z00_1435);
						{	/* Unsafe/ftp.scm 193 */
							obj_t BgL_msgsz00_2757;

							BgL_msgsz00_2757 = BgL_runner2462z00_1435;
							{	/* Unsafe/ftp.scm 193 */
								obj_t BgL_opz00_2758;

								{	/* Unsafe/ftp.scm 193 */
									obj_t BgL_arg2266z00_2759;

									{
										BgL_z52ftpz52_bglt BgL_auxz00_4944;

										BgL_auxz00_4944 =
											(BgL_z52ftpz52_bglt) (BgL_aux2461z00_1434);
										BgL_arg2266z00_2759 =
											(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_4944))->
											BgL_cmdz00);
									}
									BgL_opz00_2758 = SOCKET_OUTPUT(BgL_arg2266z00_2759);
								}
								{	/* Unsafe/ftp.scm 193 */
									obj_t BgL_list2265z00_2760;

									BgL_list2265z00_2760 = MAKE_PAIR(BgL_msgsz00_2757, BNIL);
									BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_opz00_2758,
										BGl_string3347z00zz__ftpz00, BgL_list2265z00_2760);
								}
								FLUSH_OUTPUT_PORT(BgL_opz00_2758);
							}
						}
					}
				}
			else
				{	/* Unsafe/ftp.scm 193 */
					BFALSE;
				}
			{	/* Unsafe/ftp.scm 194 */
				obj_t BgL_codez00_1436;

				BgL_codez00_1436 = BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(BgL_ftpz00_9);
				{	/* Unsafe/ftp.scm 196 */
					obj_t BgL_mesgz00_1437;

					{	/* Unsafe/ftp.scm 196 */
						int BgL_auxz00_4952;

						BgL_auxz00_4952 = (int) (((long) 1));
						BgL_mesgz00_1437 = BGL_MVALUES_VAL(BgL_auxz00_4952);
					}
					return
						BGl_zc3exitza32463ze3z83zz__ftpz00(BgL_cmdsz00_11, BgL_mesgz00_1437,
						BgL_cmdz00_10, BgL_codez00_1436, BgL_ftpz00_9);
				}
			}
		}
	}



/* <exit:2463> */
	obj_t BGl_zc3exitza32463ze3z83zz__ftpz00(obj_t BgL_cmdsz00_4064,
		obj_t BgL_mesgz00_4063, obj_t BgL_cmdz00_4062, obj_t BgL_codez00_4061,
		obj_t BgL_ftpz00_4060)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 196 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2091z00_1439;

			if (SET_EXIT(BgL_an_exit2091z00_1439))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2091z00_1439 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 196 */

						PUSH_EXIT(BgL_an_exit2091z00_1439, ((long) 1));
						{	/* Unsafe/ftp.scm 196 */
							obj_t BgL_an_exitd2092z00_1440;

							BgL_an_exitd2092z00_1440 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Unsafe/ftp.scm 198 */
								obj_t BgL_res2094z00_1443;

								if (INTEGERP(BgL_codez00_4061))
									{	/* Unsafe/ftp.scm 201 */
										switch ((long) CINT(BgL_codez00_4061))
											{
											case ((long) 110):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 120):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 125):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 150):

												{	/* Unsafe/ftp.scm 219 */
													obj_t BgL_resz00_1449;

													{	/* Unsafe/ftp.scm 221 */
														obj_t BgL_arg2467z00_1451;

														if (bigloo_strcmp(BgL_cmdz00_4062,
																BGl_string3348z00zz__ftpz00))
															{	/* Unsafe/ftp.scm 221 */
																BgL_arg2467z00_1451 =
																	BGl_symbol3341z00zz__ftpz00;
															}
														else
															{	/* Unsafe/ftp.scm 221 */
																BgL_arg2467z00_1451 =
																	BGl_symbol3339z00zz__ftpz00;
															}
														BgL_resz00_1449 =
															BGl_z52ftpzd2readzd2dtpz52zz__ftpz00
															(BgL_ftpz00_4060, BgL_arg2467z00_1451);
													}
													BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
														(BgL_ftpz00_4060, BFALSE, BNIL);
													BgL_res2094z00_1443 = BgL_resz00_1449;
												}
												break;
											case ((long) 200):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 202):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 211):

												BgL_res2094z00_1443 = BgL_mesgz00_4063;
												break;
											case ((long) 212):

												BgL_res2094z00_1443 = BgL_mesgz00_4063;
												break;
											case ((long) 213):

												BgL_res2094z00_1443 = BgL_mesgz00_4063;
												break;
											case ((long) 214):

												BgL_res2094z00_1443 = BgL_mesgz00_4063;
												break;
											case ((long) 215):

												BgL_res2094z00_1443 = BgL_mesgz00_4063;
												break;
											case ((long) 220):

												{
													BgL_ftpz00_bglt BgL_auxz00_4966;

													BgL_auxz00_4966 = (BgL_ftpz00_bglt) (BgL_ftpz00_4060);
													((((BgL_ftpz00_bglt) CREF(BgL_auxz00_4966))->
															BgL_motdz00) =
														((obj_t) BgL_mesgz00_4063), BUNSPEC);
												}
												{	/* Unsafe/ftp.scm 256 */
													obj_t BgL_arg2470z00_1454;

													{
														BgL_ftpz00_bglt BgL_auxz00_4969;

														BgL_auxz00_4969 =
															(BgL_ftpz00_bglt) (BgL_ftpz00_4060);
														BgL_arg2470z00_1454 =
															(((BgL_ftpz00_bglt) CREF(BgL_auxz00_4969))->
															BgL_userz00);
													}
													{	/* Unsafe/ftp.scm 256 */
														obj_t BgL_list2471z00_1455;

														BgL_list2471z00_1455 =
															MAKE_PAIR(BgL_arg2470z00_1454, BNIL);
														BgL_res2094z00_1443 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4060, BGl_string3349z00zz__ftpz00,
															BgL_list2471z00_1455);
												}} break;
											case ((long) 221):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 225):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 226):

												{	/* Unsafe/ftp.scm 268 */
													bool_t BgL_testz00_4974;

													{	/* Ieee/string.scm 182 */

														BgL_testz00_4974 =
															CBOOL
															(BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
															(BgL_mesgz00_4063, BGl_string3350z00zz__ftpz00,
																(int) (((long) 0))));
													}
													if (BgL_testz00_4974)
														{	/* Unsafe/ftp.scm 268 */
															BgL_res2094z00_1443 = BFALSE;
														}
													else
														{	/* Unsafe/ftp.scm 268 */
															BgL_res2094z00_1443 =
																BGl_zc3exitza32534ze3z83zz__ftpz00
																(BgL_ftpz00_4060);
														}
												}
												break;
											case ((long) 227):

												{	/* Unsafe/ftp.scm 272 */
													obj_t BgL_hostz00_1460;

													{	/* Unsafe/ftp.scm 274 */
														obj_t BgL_arg2476z00_1462;

														{	/* Unsafe/ftp.scm 274 */
															obj_t BgL_l2173z00_1463;

															BgL_l2173z00_1463 =
																CDR(BGl_pregexpzd2matchzd2zz__pregexpz00
																(BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_list3351z00zz__ftpz00), BgL_mesgz00_4063,
																	BNIL));
															if (NULLP(BgL_l2173z00_1463))
																{	/* Unsafe/ftp.scm 274 */
																	BgL_arg2476z00_1462 = BNIL;
																}
															else
																{	/* Unsafe/ftp.scm 274 */
																	obj_t BgL_head2175z00_1465;

																	{	/* Unsafe/ftp.scm 274 */
																		obj_t BgL_arg2484z00_1480;

																		{	/* Ieee/number.scm 134 */

																			BgL_arg2484z00_1480 =
																				BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																				(CAR(BgL_l2173z00_1463),
																				BINT(((long) 10)));
																		}
																		BgL_head2175z00_1465 =
																			MAKE_PAIR(BgL_arg2484z00_1480, BNIL);
																	}
																	{	/* Unsafe/ftp.scm 274 */
																		obj_t BgL_g2178z00_1466;

																		BgL_g2178z00_1466 = CDR(BgL_l2173z00_1463);
																		{
																			obj_t BgL_l2173z00_1468;

																			obj_t BgL_tail2176z00_1469;

																			BgL_l2173z00_1468 = BgL_g2178z00_1466;
																			BgL_tail2176z00_1469 =
																				BgL_head2175z00_1465;
																		BgL_zc3anonymousza32478ze3z83_1470:
																			if (NULLP(BgL_l2173z00_1468))
																				{	/* Unsafe/ftp.scm 274 */
																					BgL_arg2476z00_1462 =
																						BgL_head2175z00_1465;
																				}
																			else
																				{	/* Unsafe/ftp.scm 274 */
																					obj_t BgL_newtail2177z00_1472;

																					{	/* Unsafe/ftp.scm 274 */
																						obj_t BgL_arg2481z00_1474;

																						{	/* Ieee/number.scm 134 */

																							BgL_arg2481z00_1474 =
																								BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																								(CAR(BgL_l2173z00_1468),
																								BINT(((long) 10)));
																						}
																						BgL_newtail2177z00_1472 =
																							MAKE_PAIR(BgL_arg2481z00_1474,
																							BNIL);
																					}
																					SET_CDR(BgL_tail2176z00_1469,
																						BgL_newtail2177z00_1472);
																					{
																						obj_t BgL_tail2176z00_4998;

																						obj_t BgL_l2173z00_4996;

																						BgL_l2173z00_4996 =
																							CDR(BgL_l2173z00_1468);
																						BgL_tail2176z00_4998 =
																							BgL_newtail2177z00_1472;
																						BgL_tail2176z00_1469 =
																							BgL_tail2176z00_4998;
																						BgL_l2173z00_1468 =
																							BgL_l2173z00_4996;
																						goto
																							BgL_zc3anonymousza32478ze3z83_1470;
																					}
																				}
																		}
																	}
																}
														}
														BgL_hostz00_1460 =
															BGl_ftpportzd2ze3hostportz31zz__ftpz00
															(BgL_arg2476z00_1462);
													}
													{	/* Unsafe/ftp.scm 278 */
														obj_t BgL_portz00_1461;

														{	/* Unsafe/ftp.scm 278 */
															int BgL_auxz00_5000;

															BgL_auxz00_5000 = (int) (((long) 1));
															BgL_portz00_1461 =
																BGL_MVALUES_VAL(BgL_auxz00_5000);
														}
														BGl_z52ftpzd2closezd2dtpz52zz__ftpz00
															(BgL_ftpz00_4060);
														{	/* Unsafe/ftp.scm 277 */
															obj_t BgL_arg2531z00_2788;

															{	/* Unsafe/ftp.scm 277 */
																obj_t BgL_list2532z00_2789;

																{	/* Unsafe/ftp.scm 277 */
																	obj_t BgL_arg2533z00_2790;

																	BgL_arg2533z00_2790 =
																		MAKE_PAIR(BgL_portz00_1461, BNIL);
																	BgL_list2532z00_2789 =
																		MAKE_PAIR(BgL_hostz00_1460,
																		BgL_arg2533z00_2790);
																}
																BgL_arg2531z00_2788 = BgL_list2532z00_2789;
															}
															{
																BgL_z52ftpz52_bglt BgL_auxz00_5006;

																BgL_auxz00_5006 =
																	(BgL_z52ftpz52_bglt) (BgL_ftpz00_4060);
																((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5006))->
																		BgL_dtpz00) =
																	((obj_t) BgL_arg2531z00_2788), BUNSPEC);
														}}
														BgL_res2094z00_1443 =
															BGl_zc3exitza32534ze3z83zz__ftpz00
															(BgL_ftpz00_4060);
												}} break;
											case ((long) 230):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 250):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 257):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 331):

												{	/* Unsafe/ftp.scm 292 */
													obj_t BgL_arg2492z00_1489;

													{
														BgL_ftpz00_bglt BgL_auxz00_5010;

														BgL_auxz00_5010 =
															(BgL_ftpz00_bglt) (BgL_ftpz00_4060);
														BgL_arg2492z00_1489 =
															(((BgL_ftpz00_bglt) CREF(BgL_auxz00_5010))->
															BgL_passz00);
													}
													{	/* Unsafe/ftp.scm 292 */
														obj_t BgL_list2493z00_1490;

														BgL_list2493z00_1490 =
															MAKE_PAIR(BgL_arg2492z00_1489, BNIL);
														BgL_res2094z00_1443 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4060, BGl_string3368z00zz__ftpz00,
															BgL_list2493z00_1490);
												}} break;
											case ((long) 332):

												{	/* Unsafe/ftp.scm 295 */
													obj_t BgL_arg2495z00_1492;

													{
														BgL_ftpz00_bglt BgL_auxz00_5015;

														BgL_auxz00_5015 =
															(BgL_ftpz00_bglt) (BgL_ftpz00_4060);
														BgL_arg2495z00_1492 =
															(((BgL_ftpz00_bglt) CREF(BgL_auxz00_5015))->
															BgL_acctz00);
													}
													{	/* Unsafe/ftp.scm 295 */
														obj_t BgL_list2496z00_1493;

														BgL_list2496z00_1493 =
															MAKE_PAIR(BgL_arg2495z00_1492, BNIL);
														BgL_res2094z00_1443 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4060, BGl_string3369z00zz__ftpz00,
															BgL_list2496z00_1493);
												}} break;
											case ((long) 350):

												BgL_res2094z00_1443 = BTRUE;
												break;
											case ((long) 421):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 425):

												BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(BgL_ftpz00_4060);
												{	/* Unsafe/ftp.scm 310 */
													obj_t BgL_runner2501z00_1498;

													{	/* Unsafe/ftp.scm 310 */
														obj_t BgL_list2497z00_1494;

														{	/* Unsafe/ftp.scm 310 */
															obj_t BgL_arg2498z00_1495;

															BgL_arg2498z00_1495 =
																MAKE_PAIR(BgL_cmdsz00_4064, BNIL);
															BgL_list2497z00_1494 =
																MAKE_PAIR(BgL_cmdz00_4062, BgL_arg2498z00_1495);
														}
														BgL_runner2501z00_1498 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_ftpz00_4060, BgL_list2497z00_1494);
													}
													{	/* Unsafe/ftp.scm 310 */
														obj_t BgL_aux2499z00_1496;

														BgL_aux2499z00_1496 = CAR(BgL_runner2501z00_1498);
														BgL_runner2501z00_1498 =
															CDR(BgL_runner2501z00_1498);
														{	/* Unsafe/ftp.scm 310 */
															obj_t BgL_aux2500z00_1497;

															BgL_aux2500z00_1497 = CAR(BgL_runner2501z00_1498);
															BgL_runner2501z00_1498 =
																CDR(BgL_runner2501z00_1498);
															BgL_res2094z00_1443 =
																BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
																(BgL_aux2499z00_1496, BgL_aux2500z00_1497,
																BgL_runner2501z00_1498);
												}}} break;
											case ((long) 426):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 450):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 451):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 452):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 500):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 501):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 502):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 503):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 504):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 530):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 532):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 550):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 551):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 552):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 553):

												BgL_res2094z00_1443 = BFALSE;
												break;
											case ((long) 999):

												BGl_z52ftpzd2closez80zz__ftpz00(BgL_ftpz00_4060);
												BgL_res2094z00_1443 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd2092z00_1440,
													BGl_string3370z00zz__ftpz00);
												break;
											default:
												BgL_res2094z00_1443 =
													BGl_errorz00zz__errorz00(BGl_string3345z00zz__ftpz00,
													BGl_string3371z00zz__ftpz00, BgL_codez00_4061);
											}
									}
								else
									{	/* Unsafe/ftp.scm 201 */
										BgL_res2094z00_1443 =
											BGl_errorz00zz__errorz00(BGl_string3345z00zz__ftpz00,
											BGl_string3371z00zz__ftpz00, BgL_codez00_4061);
									}
								POP_EXIT();
								return BgL_res2094z00_1443;
							}
						}
					}
				}
		}
	}



/* %ftp-close */
	obj_t BGl_z52ftpzd2closez80zz__ftpz00(obj_t BgL_ftpz00_12)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 372 */
			{	/* Unsafe/ftp.scm 373 */
				obj_t BgL_val2099z00_1502;

				BgL_val2099z00_1502 = BGl_zc3exitza32506ze3z83zz__ftpz00(BgL_ftpz00_12);
				BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(BgL_ftpz00_12);
				if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2099z00_1502)))
					{	/* Unsafe/ftp.scm 375 */
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val2099z00_1502),
							CDR(BgL_val2099z00_1502));
					}
				else
					{	/* Unsafe/ftp.scm 375 */
						return BgL_val2099z00_1502;
					}
			}
		}
	}



/* <exit:2506> */
	obj_t BGl_zc3exitza32506ze3z83zz__ftpz00(obj_t BgL_ftpz00_4059)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 375 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2100z00_1507;

			if (SET_EXIT(BgL_an_exit2100z00_1507))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2100z00_1507 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 375 */

						PUSH_EXIT(BgL_an_exit2100z00_1507, ((long) 0));
						{	/* Unsafe/ftp.scm 374 */
							obj_t BgL_val2101z00_1508;

							{	/* Unsafe/ftp.scm 374 */
								bool_t BgL_testz00_5047;

								{	/* Unsafe/ftp.scm 374 */
									obj_t BgL_arg2509z00_2807;

									{
										BgL_z52ftpz52_bglt BgL_auxz00_5048;

										BgL_auxz00_5048 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_4059);
										BgL_arg2509z00_2807 =
											(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5048))->
											BgL_cmdz00);
									}
									BgL_testz00_5047 = SOCKETP(BgL_arg2509z00_2807);
								}
								if (BgL_testz00_5047)
									{	/* Unsafe/ftp.scm 374 */
										obj_t BgL_arg2508z00_2808;

										{
											BgL_z52ftpz52_bglt BgL_auxz00_5052;

											BgL_auxz00_5052 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_4059);
											BgL_arg2508z00_2808 =
												(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5052))->
												BgL_cmdz00);
										}
										BgL_val2101z00_1508 = socket_close(BgL_arg2508z00_2808);
									}
								else
									{	/* Unsafe/ftp.scm 374 */
										BgL_val2101z00_1508 = BFALSE;
									}
							}
							POP_EXIT();
							return BgL_val2101z00_1508;
						}
					}
				}
		}
	}



/* %ftp-close-dtp */
	obj_t BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(obj_t BgL_ftpz00_14)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 388 */
			{	/* Unsafe/ftp.scm 390 */
				bool_t BgL_testz00_5057;

				{	/* Unsafe/ftp.scm 390 */
					obj_t BgL_arg2514z00_1520;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_5058;

						BgL_auxz00_5058 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_14);
						BgL_arg2514z00_1520 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5058))->BgL_dtpz00);
					}
					BgL_testz00_5057 = SOCKETP(BgL_arg2514z00_1520);
				}
				if (BgL_testz00_5057)
					{	/* Unsafe/ftp.scm 391 */
						bool_t BgL_testz00_5062;

						{
							BgL_z52ftpz52_bglt BgL_auxz00_5063;

							BgL_auxz00_5063 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_14);
							BgL_testz00_5062 =
								(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5063))->
								BgL_passivezf3zf3);
						}
						if (BgL_testz00_5062)
							{	/* Unsafe/ftp.scm 392 */
								obj_t BgL_arg2512z00_1516;

								{
									BgL_z52ftpz52_bglt BgL_auxz00_5066;

									BgL_auxz00_5066 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_14);
									BgL_arg2512z00_1516 =
										(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5066))->BgL_dtpz00);
								}
								return socket_close(BgL_arg2512z00_1516);
							}
						else
							{	/* Unsafe/ftp.scm 393 */
								obj_t BgL_arg2513z00_1517;

								{
									BgL_z52ftpz52_bglt BgL_auxz00_5070;

									BgL_auxz00_5070 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_14);
									BgL_arg2513z00_1517 =
										(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5070))->BgL_dtpz00);
								}
								{	/* Llib/socket.scm 151 */

									return socket_shutdown(BgL_arg2513z00_1517, CBOOL(BTRUE));
								}
							}
					}
				else
					{	/* Unsafe/ftp.scm 390 */
						return BFALSE;
					}
			}
		}
	}



/* ftp-connect */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2connectzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 404 */
			{	/* Unsafe/ftp.scm 406 */
				obj_t BgL_arg2521z00_1539;

				{	/* Unsafe/ftp.scm 406 */
					obj_t BgL_arg2522z00_1540;

					obj_t BgL_arg2523z00_1541;

					BgL_arg2522z00_1540 =
						(((BgL_ftpz00_bglt) CREF(BgL_ftpz00_19))->BgL_hostz00);
					BgL_arg2523z00_1541 =
						(((BgL_ftpz00_bglt) CREF(BgL_ftpz00_19))->BgL_portz00);
					BgL_arg2521z00_1539 =
						BGl_makezd2clientzd2socketz00zz__socketz00(BgL_arg2522z00_1540,
						CINT(BgL_arg2523z00_1541), BGl_symbol3372z00zz__ftpz00, BTRUE,
						BTRUE, BINT(((long) 0)));
				}
				{
					BgL_z52ftpz52_bglt BgL_auxz00_5080;

					BgL_auxz00_5080 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_19);
					((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5080))->BgL_cmdz00) =
						((obj_t) BgL_arg2521z00_1539), BUNSPEC);
			}}
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_19), BFALSE, BNIL));
		}
	}



/* _ftp-connect */
	obj_t BGl__ftpzd2connectzd2zz__ftpz00(obj_t BgL_envz00_3796,
		obj_t BgL_ftpz00_3797)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 404 */
			{	/* Unsafe/ftp.scm 405 */
				bool_t BgL_auxz00_5086;

				{	/* Unsafe/ftp.scm 405 */
					BgL_ftpz00_bglt BgL_auxz00_5087;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3797,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 405 */
							BgL_auxz00_5087 = (BgL_ftpz00_bglt) (BgL_ftpz00_3797);
						}
					else
						{
							obj_t BgL_auxz00_5091;

							BgL_auxz00_5091 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 13074)), BGl_string3375z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3797);
							FAILURE(BgL_auxz00_5091, BFALSE, BFALSE);
						}
					BgL_auxz00_5086 = BGl_ftpzd2connectzd2zz__ftpz00(BgL_auxz00_5087);
				}
				return BBOOL(BgL_auxz00_5086);
			}
		}
	}



/* %ftp-dtp-init */
	obj_t BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(obj_t BgL_ftpz00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 412 */
			{	/* Unsafe/ftp.scm 414 */
				bool_t BgL_testz00_5097;

				{
					BgL_z52ftpz52_bglt BgL_auxz00_5098;

					BgL_auxz00_5098 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_20);
					BgL_testz00_5097 =
						(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5098))->BgL_passivezf3zf3);
				}
				if (BgL_testz00_5097)
					{	/* Unsafe/ftp.scm 414 */
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_ftpz00_20,
							BGl_string3376z00zz__ftpz00, BNIL);
					}
				else
					{	/* Llib/object.scm 90 */
						BgL_z62ftpzd2errorzb0_bglt BgL_arg2527z00_1550;

						{	/* Llib/object.scm 90 */
							obj_t BgL_arg2528z00_1551;

							{	/* Llib/object.scm 90 */

								{	/* Llib/object.scm 90 */

									BgL_arg2528z00_1551 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							{	/* Unsafe/ftp.scm 416 */
								BgL_z62ftpzd2errorzb0_bglt BgL_res3093z00_2989;

								{	/* Unsafe/ftp.scm 416 */
									BgL_z62ftpzd2errorzb0_bglt BgL_new1960z00_2969;

									{	/* Unsafe/ftp.scm 416 */
										BgL_z62ftpzd2errorzb0_bglt BgL_res3091z00_2974;

										{	/* Unsafe/ftp.scm 416 */
											BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_2970;

											BgL_new1976z00_2970 =
												((BgL_z62ftpzd2errorzb0_bglt)
												BREF(GC_MALLOC(sizeof(struct
															BgL_z62ftpzd2errorzb0_bgl))));
											BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
												(BgL_new1976z00_2970),
												BGl_classzd2numzd2zz__objectz00
												(BGl_z62ftpzd2errorzb0zz__ftpz00));
											{	/* Unsafe/ftp.scm 416 */
												BgL_objectz00_bglt BgL_auxz00_5107;

												BgL_auxz00_5107 =
													(BgL_objectz00_bglt) (BgL_new1976z00_2970);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_5107, BFALSE);
											}
											BgL_res3091z00_2974 = BgL_new1976z00_2970;
										}
										BgL_new1960z00_2969 = BgL_res3091z00_2974;
									}
									{	/* Unsafe/ftp.scm 416 */
										BgL_z62ftpzd2errorzb0_bglt BgL_res3092z00_2988;

										{	/* Unsafe/ftp.scm 416 */
											BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_2975;

											BgL_new1968z00_2975 = BgL_new1960z00_2969;
											{	/* Unsafe/ftp.scm 416 */
												obj_t BgL_fname1962z00_2982;

												obj_t BgL_location1963z00_2983;

												obj_t BgL_stack1964z00_2984;

												obj_t BgL_proc1965z00_2985;

												obj_t BgL_msg1966z00_2986;

												obj_t BgL_obj1967z00_2987;

												BgL_fname1962z00_2982 = BFALSE;
												BgL_location1963z00_2983 = BFALSE;
												BgL_stack1964z00_2984 = BgL_arg2528z00_1551;
												BgL_proc1965z00_2985 = BGl_string3377z00zz__ftpz00;
												BgL_msg1966z00_2986 = BGl_string3378z00zz__ftpz00;
												BgL_obj1967z00_2987 = BgL_ftpz00_20;
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_fnamez00) =
													((obj_t) BgL_fname1962z00_2982), BUNSPEC);
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_locationz00) =
													((obj_t) BgL_location1963z00_2983), BUNSPEC);
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_stackz00) =
													((obj_t) BgL_stack1964z00_2984), BUNSPEC);
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_procz00) =
													((obj_t) BgL_proc1965z00_2985), BUNSPEC);
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_msgz00) =
													((obj_t) BgL_msg1966z00_2986), BUNSPEC);
												((((BgL_z62ftpzd2errorzb0_bglt)
															CREF(BgL_new1968z00_2975))->BgL_objz00) =
													((obj_t) BgL_obj1967z00_2987), BUNSPEC);
												BgL_res3092z00_2988 = BgL_new1968z00_2975;
										}} BgL_res3092z00_2988;
									}
									BgL_res3093z00_2989 = BgL_new1960z00_2969;
								}
								BgL_arg2527z00_1550 = BgL_res3093z00_2989;
						}}
						return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2527z00_1550));
					}
			}
		}
	}



/* <exit:2534> */
	obj_t BGl_zc3exitza32534ze3z83zz__ftpz00(obj_t BgL_instance2115z00_4058)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 434 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2117z00_1561;

			if (SET_EXIT(BgL_an_exit2117z00_1561))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2117z00_1561 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 434 */

						PUSH_EXIT(BgL_an_exit2117z00_1561, ((long) 1));
						{	/* Unsafe/ftp.scm 434 */
							obj_t BgL_an_exitd2118z00_1562;

							BgL_an_exitd2118z00_1562 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Unsafe/ftp.scm 435 */
								bool_t BgL_res2120z00_1565;

								{	/* Unsafe/ftp.scm 435 */
									obj_t BgL_hostz00_1566;

									{	/* Unsafe/ftp.scm 437 */
										bool_t BgL_testz00_5122;

										{	/* Unsafe/ftp.scm 437 */
											obj_t BgL_arg2545z00_1585;

											{
												BgL_z52ftpz52_bglt BgL_auxz00_5123;

												BgL_auxz00_5123 =
													(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
												BgL_arg2545z00_1585 =
													(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5123))->
													BgL_dtpz00);
											}
											BgL_testz00_5122 = SOCKETP(BgL_arg2545z00_1585);
										}
										if (BgL_testz00_5122)
											{	/* Unsafe/ftp.scm 438 */
												obj_t BgL_val0_2180z00_1575;

												obj_t BgL_val1_2181z00_1576;

												{	/* Unsafe/ftp.scm 438 */
													obj_t BgL_arg2539z00_1577;

													{
														BgL_z52ftpz52_bglt BgL_auxz00_5127;

														BgL_auxz00_5127 =
															(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
														BgL_arg2539z00_1577 =
															(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5127))->
															BgL_dtpz00);
													}
													BgL_val0_2180z00_1575 =
														SOCKET_HOSTIP(BgL_arg2539z00_1577);
												}
												{	/* Unsafe/ftp.scm 439 */
													obj_t BgL_arg2540z00_1578;

													{
														BgL_z52ftpz52_bglt BgL_auxz00_5131;

														BgL_auxz00_5131 =
															(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
														BgL_arg2540z00_1578 =
															(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5131))->
															BgL_dtpz00);
													}
													{	/* Unsafe/ftp.scm 439 */
														obj_t BgL_res3095z00_3004;

														{	/* Unsafe/ftp.scm 439 */
															obj_t BgL_socketz00_3003;

															BgL_socketz00_3003 = BgL_arg2540z00_1578;
															BgL_res3095z00_3004 =
																BINT(SOCKET_PORT(BgL_socketz00_3003));
														}
														BgL_val1_2181z00_1576 = BgL_res3095z00_3004;
													}
												}
												{	/* Unsafe/ftp.scm 438 */
													int BgL_auxz00_5136;

													BgL_auxz00_5136 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_5136);
												}
												{	/* Unsafe/ftp.scm 438 */
													int BgL_auxz00_5139;

													BgL_auxz00_5139 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_5139,
														BgL_val1_2181z00_1576);
												}
												BgL_hostz00_1566 = BgL_val0_2180z00_1575;
											}
										else
											{	/* Unsafe/ftp.scm 440 */
												bool_t BgL_testz00_5142;

												{	/* Unsafe/ftp.scm 440 */
													obj_t BgL_auxz00_5143;

													{
														BgL_z52ftpz52_bglt BgL_auxz00_5144;

														BgL_auxz00_5144 =
															(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
														BgL_auxz00_5143 =
															(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5144))->
															BgL_dtpz00);
													}
													BgL_testz00_5142 = PAIRP(BgL_auxz00_5143);
												}
												if (BgL_testz00_5142)
													{	/* Unsafe/ftp.scm 441 */
														obj_t BgL_val0_2182z00_1580;

														obj_t BgL_val1_2183z00_1581;

														{	/* Unsafe/ftp.scm 441 */
															obj_t BgL_pairz00_3011;

															{
																BgL_z52ftpz52_bglt BgL_auxz00_5148;

																BgL_auxz00_5148 =
																	(BgL_z52ftpz52_bglt)
																	(BgL_instance2115z00_4058);
																BgL_pairz00_3011 =
																	(((BgL_z52ftpz52_bglt)
																		CREF(BgL_auxz00_5148))->BgL_dtpz00);
															}
															BgL_val0_2182z00_1580 = CAR(BgL_pairz00_3011);
														}
														{	/* Unsafe/ftp.scm 441 */
															obj_t BgL_pairz00_3013;

															{
																BgL_z52ftpz52_bglt BgL_auxz00_5152;

																BgL_auxz00_5152 =
																	(BgL_z52ftpz52_bglt)
																	(BgL_instance2115z00_4058);
																BgL_pairz00_3013 =
																	(((BgL_z52ftpz52_bglt)
																		CREF(BgL_auxz00_5152))->BgL_dtpz00);
															}
															BgL_val1_2183z00_1581 =
																CAR(CDR(BgL_pairz00_3013));
														}
														{	/* Unsafe/ftp.scm 441 */
															int BgL_auxz00_5157;

															BgL_auxz00_5157 = (int) (((long) 2));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_5157);
														}
														{	/* Unsafe/ftp.scm 441 */
															int BgL_auxz00_5160;

															BgL_auxz00_5160 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_5160,
																BgL_val1_2183z00_1581);
														}
														BgL_hostz00_1566 = BgL_val0_2182z00_1580;
													}
												else
													{	/* Unsafe/ftp.scm 440 */
														BgL_hostz00_1566 =
															BGl_unwindzd2untilz12zc0zz__bexitz00
															(BgL_an_exitd2118z00_1562, BFALSE);
													}
											}
									}
									{	/* Unsafe/ftp.scm 445 */
										obj_t BgL_portz00_1567;

										{	/* Unsafe/ftp.scm 445 */
											int BgL_auxz00_5164;

											BgL_auxz00_5164 = (int) (((long) 1));
											BgL_portz00_1567 = BGL_MVALUES_VAL(BgL_auxz00_5164);
										}
										{
											obj_t BgL_auxz00_5169;

											BgL_z52ftpz52_bglt BgL_auxz00_5167;

											BgL_auxz00_5169 =
												BGl_makezd2clientzd2socketz00zz__socketz00
												(BgL_hostz00_1566, CINT(BgL_portz00_1567),
												BGl_symbol3372z00zz__ftpz00, BTRUE, BTRUE,
												BINT(((long) 0)));
											BgL_auxz00_5167 =
												(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
											((((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5167))->
													BgL_dtpz00) = ((obj_t) BgL_auxz00_5169), BUNSPEC);
										}
										{	/* Unsafe/ftp.scm 445 */
											obj_t BgL_arg2536z00_1573;

											{
												BgL_z52ftpz52_bglt BgL_auxz00_5174;

												BgL_auxz00_5174 =
													(BgL_z52ftpz52_bglt) (BgL_instance2115z00_4058);
												BgL_arg2536z00_1573 =
													(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5174))->
													BgL_dtpz00);
											}
											BgL_res2120z00_1565 = SOCKETP(BgL_arg2536z00_1573);
								}}}
								POP_EXIT();
								return BBOOL(BgL_res2120z00_1565);
							}
						}
					}
				}
		}
	}



/* ftpport->hostport */
	obj_t BGl_ftpportzd2ze3hostportz31zz__ftpz00(obj_t BgL_plistz00_27)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 458 */
			{	/* Unsafe/ftp.scm 459 */
				obj_t BgL_addrz00_1594;

				obj_t BgL_portz00_1595;

				{	/* Unsafe/ftp.scm 459 */
					obj_t BgL_arg2554z00_1599;

					obj_t BgL_arg2555z00_1600;

					obj_t BgL_arg2556z00_1601;

					obj_t BgL_arg2557z00_1602;

					BgL_arg2554z00_1599 = bgl_list_ref(BgL_plistz00_27, ((long) 0));
					BgL_arg2555z00_1600 = bgl_list_ref(BgL_plistz00_27, ((long) 1));
					BgL_arg2556z00_1601 = bgl_list_ref(BgL_plistz00_27, ((long) 2));
					BgL_arg2557z00_1602 = bgl_list_ref(BgL_plistz00_27, ((long) 3));
					{	/* Unsafe/ftp.scm 459 */
						obj_t BgL_list2558z00_1603;

						{	/* Unsafe/ftp.scm 459 */
							obj_t BgL_arg2559z00_1604;

							{	/* Unsafe/ftp.scm 459 */
								obj_t BgL_arg2560z00_1605;

								{	/* Unsafe/ftp.scm 459 */
									obj_t BgL_arg2561z00_1606;

									BgL_arg2561z00_1606 = MAKE_PAIR(BgL_arg2557z00_1602, BNIL);
									BgL_arg2560z00_1605 =
										MAKE_PAIR(BgL_arg2556z00_1601, BgL_arg2561z00_1606);
								}
								BgL_arg2559z00_1604 =
									MAKE_PAIR(BgL_arg2555z00_1600, BgL_arg2560z00_1605);
							}
							BgL_list2558z00_1603 =
								MAKE_PAIR(BgL_arg2554z00_1599, BgL_arg2559z00_1604);
						}
						BgL_addrz00_1594 =
							BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3379z00zz__ftpz00,
							BgL_list2558z00_1603);
				}}
				BgL_portz00_1595 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BGl_2za2za2zz__r4_numbers_6_5z00
					(bgl_list_ref(BgL_plistz00_27, ((long) 4)), BINT(((long) 256))),
					bgl_list_ref(BgL_plistz00_27, ((long) 5)));
				{	/* Unsafe/ftp.scm 465 */
					int BgL_auxz00_5194;

					BgL_auxz00_5194 = (int) (((long) 2));
					BGL_MVALUES_NUMBER_SET(BgL_auxz00_5194);
				}
				{	/* Unsafe/ftp.scm 465 */
					int BgL_auxz00_5197;

					BgL_auxz00_5197 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_auxz00_5197, BgL_portz00_1595);
				}
				return BgL_addrz00_1594;
			}
		}
	}



/* ftp-logout */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2logoutzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_28)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 470 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_28), BGl_string3380z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-logout */
	obj_t BGl__ftpzd2logoutzd2zz__ftpz00(obj_t BgL_envz00_3798,
		obj_t BgL_ftpz00_3799)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 470 */
			{	/* Unsafe/ftp.scm 471 */
				bool_t BgL_auxz00_5203;

				{	/* Unsafe/ftp.scm 471 */
					BgL_ftpz00_bglt BgL_auxz00_5204;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3799,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 471 */
							BgL_auxz00_5204 = (BgL_ftpz00_bglt) (BgL_ftpz00_3799);
						}
					else
						{
							obj_t BgL_auxz00_5208;

							BgL_auxz00_5208 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 15810)), BGl_string3381z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3799);
							FAILURE(BgL_auxz00_5208, BFALSE, BFALSE);
						}
					BgL_auxz00_5203 = BGl_ftpzd2logoutzd2zz__ftpz00(BgL_auxz00_5204);
				}
				return BBOOL(BgL_auxz00_5203);
			}
		}
	}



/* ftp-cd */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2cdzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_29, obj_t BgL_directoryz00_30)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 476 */
			{	/* Unsafe/ftp.scm 477 */
				obj_t BgL_list2567z00_3030;

				BgL_list2567z00_3030 = MAKE_PAIR(BgL_directoryz00_30, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_29), BGl_string3382z00zz__ftpz00,
						BgL_list2567z00_3030));
			}
		}
	}



/* _ftp-cd */
	obj_t BGl__ftpzd2cdzd2zz__ftpz00(obj_t BgL_envz00_3800, obj_t BgL_ftpz00_3801,
		obj_t BgL_directoryz00_3802)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 476 */
			{	/* Unsafe/ftp.scm 477 */
				bool_t BgL_auxz00_5218;

				{	/* Unsafe/ftp.scm 477 */
					obj_t BgL_auxz00_5227;

					BgL_ftpz00_bglt BgL_auxz00_5219;

					if (STRINGP(BgL_directoryz00_3802))
						{	/* Unsafe/ftp.scm 477 */
							BgL_auxz00_5227 = BgL_directoryz00_3802;
						}
					else
						{
							obj_t BgL_auxz00_5230;

							BgL_auxz00_5230 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16097)), BGl_string3383z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_directoryz00_3802);
							FAILURE(BgL_auxz00_5230, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3801,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 477 */
							BgL_auxz00_5219 = (BgL_ftpz00_bglt) (BgL_ftpz00_3801);
						}
					else
						{
							obj_t BgL_auxz00_5223;

							BgL_auxz00_5223 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16097)), BGl_string3383z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3801);
							FAILURE(BgL_auxz00_5223, BFALSE, BFALSE);
						}
					BgL_auxz00_5218 =
						BGl_ftpzd2cdzd2zz__ftpz00(BgL_auxz00_5219, BgL_auxz00_5227);
				}
				return BBOOL(BgL_auxz00_5218);
			}
		}
	}



/* ftp-cd-parent */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_31)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 482 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_31), BGl_string3385z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-cd-parent */
	obj_t BGl__ftpzd2cdzd2parentz00zz__ftpz00(obj_t BgL_envz00_3803,
		obj_t BgL_ftpz00_3804)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 482 */
			{	/* Unsafe/ftp.scm 483 */
				bool_t BgL_auxz00_5239;

				{	/* Unsafe/ftp.scm 483 */
					BgL_ftpz00_bglt BgL_auxz00_5240;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3804,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 483 */
							BgL_auxz00_5240 = (BgL_ftpz00_bglt) (BgL_ftpz00_3804);
						}
					else
						{
							obj_t BgL_auxz00_5244;

							BgL_auxz00_5244 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16390)), BGl_string3386z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3804);
							FAILURE(BgL_auxz00_5244, BFALSE, BFALSE);
						}
					BgL_auxz00_5239 = BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_auxz00_5240);
				}
				return BBOOL(BgL_auxz00_5239);
			}
		}
	}



/* ftp-mount */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2mountzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_32, obj_t BgL_mountzd2pointzd2_33)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 488 */
			{	/* Unsafe/ftp.scm 489 */
				obj_t BgL_list2569z00_3032;

				BgL_list2569z00_3032 = MAKE_PAIR(BgL_mountzd2pointzd2_33, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_32), BGl_string3387z00zz__ftpz00,
						BgL_list2569z00_3032));
			}
		}
	}



/* _ftp-mount */
	obj_t BGl__ftpzd2mountzd2zz__ftpz00(obj_t BgL_envz00_3805,
		obj_t BgL_ftpz00_3806, obj_t BgL_mountzd2pointzd2_3807)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 488 */
			{	/* Unsafe/ftp.scm 489 */
				bool_t BgL_auxz00_5254;

				{	/* Unsafe/ftp.scm 489 */
					obj_t BgL_auxz00_5263;

					BgL_ftpz00_bglt BgL_auxz00_5255;

					if (STRINGP(BgL_mountzd2pointzd2_3807))
						{	/* Unsafe/ftp.scm 489 */
							BgL_auxz00_5263 = BgL_mountzd2pointzd2_3807;
						}
					else
						{
							obj_t BgL_auxz00_5266;

							BgL_auxz00_5266 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16682)), BGl_string3388z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_mountzd2pointzd2_3807);
							FAILURE(BgL_auxz00_5266, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3806,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 489 */
							BgL_auxz00_5255 = (BgL_ftpz00_bglt) (BgL_ftpz00_3806);
						}
					else
						{
							obj_t BgL_auxz00_5259;

							BgL_auxz00_5259 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16682)), BGl_string3388z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3806);
							FAILURE(BgL_auxz00_5259, BFALSE, BFALSE);
						}
					BgL_auxz00_5254 =
						BGl_ftpzd2mountzd2zz__ftpz00(BgL_auxz00_5255, BgL_auxz00_5263);
				}
				return BBOOL(BgL_auxz00_5254);
			}
		}
	}



/* ftp-reinitialize */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_34)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 494 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_34), BGl_string3389z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-reinitialize */
	obj_t BGl__ftpzd2reinitializa7ez75zz__ftpz00(obj_t BgL_envz00_3808,
		obj_t BgL_ftpz00_3809)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 494 */
			{	/* Unsafe/ftp.scm 495 */
				bool_t BgL_auxz00_5275;

				{	/* Unsafe/ftp.scm 495 */
					BgL_ftpz00_bglt BgL_auxz00_5276;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3809,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 495 */
							BgL_auxz00_5276 = (BgL_ftpz00_bglt) (BgL_ftpz00_3809);
						}
					else
						{
							obj_t BgL_auxz00_5280;

							BgL_auxz00_5280 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 16981)), BGl_string3390z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3809);
							FAILURE(BgL_auxz00_5280, BFALSE, BFALSE);
						}
					BgL_auxz00_5275 =
						BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_auxz00_5276);
				}
				return BBOOL(BgL_auxz00_5275);
			}
		}
	}



/* ftp-data-port */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_35, obj_t BgL_hostz00_36, obj_t BgL_portz00_37)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 500 */
			{	/* Llib/object.scm 90 */
				BgL_z62ftpzd2errorzb0_bglt BgL_arg2571z00_3034;

				{	/* Llib/object.scm 90 */
					obj_t BgL_arg2572z00_3035;

					{	/* Llib/object.scm 90 */

						{	/* Llib/object.scm 90 */

							BgL_arg2572z00_3035 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					{	/* Llib/object.scm 90 */
						BgL_z62ftpzd2errorzb0_bglt BgL_res3098z00_3065;

						{	/* Llib/object.scm 90 */
							obj_t BgL_obj1959z00_3044;

							BgL_obj1959z00_3044 = (obj_t) (BgL_ftpz00_35);
							{	/* Llib/object.scm 90 */
								BgL_z62ftpzd2errorzb0_bglt BgL_new1960z00_3045;

								{	/* Llib/object.scm 90 */
									BgL_z62ftpzd2errorzb0_bglt BgL_res3096z00_3050;

									{	/* Llib/object.scm 90 */
										BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_3046;

										BgL_new1976z00_3046 =
											((BgL_z62ftpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_z62ftpzd2errorzb0_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1976z00_3046),
											BGl_classzd2numzd2zz__objectz00
											(BGl_z62ftpzd2errorzb0zz__ftpz00));
										{	/* Llib/object.scm 90 */
											BgL_objectz00_bglt BgL_auxz00_5292;

											BgL_auxz00_5292 =
												(BgL_objectz00_bglt) (BgL_new1976z00_3046);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5292, BFALSE);
										}
										BgL_res3096z00_3050 = BgL_new1976z00_3046;
									}
									BgL_new1960z00_3045 = BgL_res3096z00_3050;
								}
								{	/* Llib/object.scm 90 */
									BgL_z62ftpzd2errorzb0_bglt BgL_res3097z00_3064;

									{	/* Llib/object.scm 90 */
										BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_3051;

										BgL_new1968z00_3051 = BgL_new1960z00_3045;
										{	/* Llib/object.scm 90 */
											obj_t BgL_fname1962z00_3058;

											obj_t BgL_location1963z00_3059;

											obj_t BgL_stack1964z00_3060;

											obj_t BgL_proc1965z00_3061;

											obj_t BgL_msg1966z00_3062;

											obj_t BgL_obj1967z00_3063;

											BgL_fname1962z00_3058 = BFALSE;
											BgL_location1963z00_3059 = BFALSE;
											BgL_stack1964z00_3060 = BgL_arg2572z00_3035;
											BgL_proc1965z00_3061 = BGl_string3377z00zz__ftpz00;
											BgL_msg1966z00_3062 = BGl_string3391z00zz__ftpz00;
											BgL_obj1967z00_3063 = BgL_obj1959z00_3044;
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_fnamez00) =
												((obj_t) BgL_fname1962z00_3058), BUNSPEC);
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_locationz00) =
												((obj_t) BgL_location1963z00_3059), BUNSPEC);
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_stackz00) =
												((obj_t) BgL_stack1964z00_3060), BUNSPEC);
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_procz00) =
												((obj_t) BgL_proc1965z00_3061), BUNSPEC);
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_msgz00) =
												((obj_t) BgL_msg1966z00_3062), BUNSPEC);
											((((BgL_z62ftpzd2errorzb0_bglt)
														CREF(BgL_new1968z00_3051))->BgL_objz00) =
												((obj_t) BgL_obj1967z00_3063), BUNSPEC);
											BgL_res3097z00_3064 = BgL_new1968z00_3051;
									}} BgL_res3097z00_3064;
								}
								BgL_res3098z00_3065 = BgL_new1960z00_3045;
						}}
						BgL_arg2571z00_3034 = BgL_res3098z00_3065;
				}}
				return CBOOL(BGl_raisez00zz__errorz00((obj_t) (BgL_arg2571z00_3034)));
			}
		}
	}



/* _ftp-data-port */
	obj_t BGl__ftpzd2datazd2portz00zz__ftpz00(obj_t BgL_envz00_3810,
		obj_t BgL_ftpz00_3811, obj_t BgL_hostz00_3812, obj_t BgL_portz00_3813)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 500 */
			{	/* Llib/object.scm 90 */
				bool_t BgL_auxz00_5304;

				{	/* Llib/object.scm 90 */
					obj_t BgL_auxz00_5320;

					obj_t BgL_auxz00_5313;

					BgL_ftpz00_bglt BgL_auxz00_5305;

					if (INTEGERP(BgL_portz00_3813))
						{	/* Llib/object.scm 90 */
							BgL_auxz00_5320 = BgL_portz00_3813;
						}
					else
						{
							obj_t BgL_auxz00_5323;

							BgL_auxz00_5323 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3392z00zz__ftpz00,
								BINT(((long) 3333)), BGl_string3393z00zz__ftpz00,
								BGl_string3394z00zz__ftpz00, BgL_portz00_3813);
							FAILURE(BgL_auxz00_5323, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_hostz00_3812))
						{	/* Llib/object.scm 90 */
							BgL_auxz00_5313 = BgL_hostz00_3812;
						}
					else
						{
							obj_t BgL_auxz00_5316;

							BgL_auxz00_5316 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3392z00zz__ftpz00,
								BINT(((long) 3333)), BGl_string3393z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_hostz00_3812);
							FAILURE(BgL_auxz00_5316, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3811,
							BGl_ftpz00zz__ftpz00))
						{	/* Llib/object.scm 90 */
							BgL_auxz00_5305 = (BgL_ftpz00_bglt) (BgL_ftpz00_3811);
						}
					else
						{
							obj_t BgL_auxz00_5309;

							BgL_auxz00_5309 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3392z00zz__ftpz00,
								BINT(((long) 3333)), BGl_string3393z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3811);
							FAILURE(BgL_auxz00_5309, BFALSE, BFALSE);
						}
					BgL_auxz00_5304 =
						BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_auxz00_5305, BgL_auxz00_5313,
						BgL_auxz00_5320);
				}
				return BBOOL(BgL_auxz00_5304);
			}
		}
	}



/* ftp-passive */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2passivezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_38)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 509 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_38), BGl_string3376z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-passive */
	obj_t BGl__ftpzd2passivezd2zz__ftpz00(obj_t BgL_envz00_3814,
		obj_t BgL_ftpz00_3815)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 509 */
			{	/* Unsafe/ftp.scm 510 */
				bool_t BgL_auxz00_5332;

				{	/* Unsafe/ftp.scm 510 */
					BgL_ftpz00_bglt BgL_auxz00_5333;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3815,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 510 */
							BgL_auxz00_5333 = (BgL_ftpz00_bglt) (BgL_ftpz00_3815);
						}
					else
						{
							obj_t BgL_auxz00_5337;

							BgL_auxz00_5337 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 17661)), BGl_string3395z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3815);
							FAILURE(BgL_auxz00_5337, BFALSE, BFALSE);
						}
					BgL_auxz00_5332 = BGl_ftpzd2passivezd2zz__ftpz00(BgL_auxz00_5333);
				}
				return BBOOL(BgL_auxz00_5332);
			}
		}
	}



/* ftp-data-type */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_39, obj_t BgL_typez00_40, obj_t BgL_localzd2bytezd2siza7eza7_41)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 515 */
			{

				{	/* Unsafe/ftp.scm 516 */
					unsigned char BgL_aux2124z00_1623;

					{	/* Unsafe/ftp.scm 516 */
						obj_t BgL_arg2579z00_1627;

						BgL_arg2579z00_1627 = SYMBOL_TO_STRING(BgL_typez00_40);
						BgL_aux2124z00_1623 = STRING_REF(BgL_arg2579z00_1627, ((long) 0));
					}
					switch (BgL_aux2124z00_1623)
						{
						case ((unsigned char) 'a'):
						case ((unsigned char) 'A'):

							{	/* Unsafe/ftp.scm 518 */
								obj_t BgL_list2577z00_1625;

								BgL_list2577z00_1625 =
									MAKE_PAIR(BGl_string3398z00zz__ftpz00, BNIL);
								return
									CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
										(obj_t) (BgL_ftpz00_39), BGl_string3399z00zz__ftpz00,
										BgL_list2577z00_1625));
							}
							break;
						case ((unsigned char) 'i'):
						case ((unsigned char) 'I'):

							{	/* Unsafe/ftp.scm 520 */
								obj_t BgL_list2578z00_1626;

								BgL_list2578z00_1626 =
									MAKE_PAIR(BGl_string3400z00zz__ftpz00, BNIL);
								return
									CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
										(obj_t) (BgL_ftpz00_39), BGl_string3399z00zz__ftpz00,
										BgL_list2578z00_1626));
							}
							break;
						default:
							{	/* Unsafe/ftp.scm 516 */
								obj_t BgL_auxz00_5353;

								{	/* Llib/object.scm 90 */
									BgL_z62ftpzd2parsezd2errorz62_bglt BgL_arg2581z00_1629;

									{	/* Llib/object.scm 90 */
										obj_t BgL_arg2582z00_1630;

										{	/* Llib/object.scm 90 */

											{	/* Llib/object.scm 90 */

												BgL_arg2582z00_1630 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}
										}
										{	/* Unsafe/ftp.scm 522 */
											BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3101z00_3096;

											{	/* Unsafe/ftp.scm 522 */
												BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2022z00_3076;

												{	/* Unsafe/ftp.scm 522 */
													BgL_z62ftpzd2parsezd2errorz62_bglt
														BgL_res3099z00_3081;
													{	/* Unsafe/ftp.scm 522 */
														BgL_z62ftpzd2parsezd2errorz62_bglt
															BgL_new2038z00_3077;
														BgL_new2038z00_3077 =
															((BgL_z62ftpzd2parsezd2errorz62_bglt)
															BREF(GC_MALLOC(sizeof(struct
																		BgL_z62ftpzd2parsezd2errorz62_bgl))));
														BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
															(BgL_new2038z00_3077),
															BGl_classzd2numzd2zz__objectz00
															(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
														{	/* Unsafe/ftp.scm 522 */
															BgL_objectz00_bglt BgL_auxz00_5359;

															BgL_auxz00_5359 =
																(BgL_objectz00_bglt) (BgL_new2038z00_3077);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_5359, BFALSE);
														}
														BgL_res3099z00_3081 = BgL_new2038z00_3077;
													}
													BgL_new2022z00_3076 = BgL_res3099z00_3081;
												}
												{	/* Unsafe/ftp.scm 522 */
													BgL_z62ftpzd2parsezd2errorz62_bglt
														BgL_res3100z00_3095;
													{	/* Unsafe/ftp.scm 522 */
														BgL_z62ftpzd2parsezd2errorz62_bglt
															BgL_new2030z00_3082;
														BgL_new2030z00_3082 = BgL_new2022z00_3076;
														{	/* Unsafe/ftp.scm 522 */
															obj_t BgL_fname2024z00_3089;

															obj_t BgL_location2025z00_3090;

															obj_t BgL_stack2026z00_3091;

															obj_t BgL_proc2027z00_3092;

															obj_t BgL_msg2028z00_3093;

															obj_t BgL_obj2029z00_3094;

															BgL_fname2024z00_3089 = BFALSE;
															BgL_location2025z00_3090 = BFALSE;
															BgL_stack2026z00_3091 = BgL_arg2582z00_1630;
															BgL_proc2027z00_3092 =
																BGl_string3396z00zz__ftpz00;
															BgL_msg2028z00_3093 = BGl_string3397z00zz__ftpz00;
															BgL_obj2029z00_3094 = BgL_typez00_40;
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->BgL_fnamez00) =
																((obj_t) BgL_fname2024z00_3089), BUNSPEC);
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->
																	BgL_locationz00) =
																((obj_t) BgL_location2025z00_3090), BUNSPEC);
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->BgL_stackz00) =
																((obj_t) BgL_stack2026z00_3091), BUNSPEC);
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->BgL_procz00) =
																((obj_t) BgL_proc2027z00_3092), BUNSPEC);
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->BgL_msgz00) =
																((obj_t) BgL_msg2028z00_3093), BUNSPEC);
															((((BgL_z62ftpzd2parsezd2errorz62_bglt)
																		CREF(BgL_new2030z00_3082))->BgL_objz00) =
																((obj_t) BgL_obj2029z00_3094), BUNSPEC);
															BgL_res3100z00_3095 = BgL_new2030z00_3082;
													}} BgL_res3100z00_3095;
												}
												BgL_res3101z00_3096 = BgL_new2022z00_3076;
											}
											BgL_arg2581z00_1629 = BgL_res3101z00_3096;
									}}
									BgL_auxz00_5353 =
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2581z00_1629));
								}
								return CBOOL(BgL_auxz00_5353);
							}
						}
				}
			}
		}
	}



/* _ftp-data-type */
	obj_t BGl__ftpzd2datazd2typez00zz__ftpz00(obj_t BgL_envz00_3816,
		obj_t BgL_ftpz00_3817, obj_t BgL_typez00_3818,
		obj_t BgL_localzd2bytezd2siza7eza7_3819)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 515 */
			{	/* Unsafe/ftp.scm 516 */
				bool_t BgL_auxz00_5372;

				{	/* Unsafe/ftp.scm 516 */
					obj_t BgL_auxz00_5381;

					BgL_ftpz00_bglt BgL_auxz00_5373;

					if (SYMBOLP(BgL_typez00_3818))
						{	/* Unsafe/ftp.scm 516 */
							BgL_auxz00_5381 = BgL_typez00_3818;
						}
					else
						{
							obj_t BgL_auxz00_5384;

							BgL_auxz00_5384 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 17968)), BGl_string3401z00zz__ftpz00,
								BGl_string3402z00zz__ftpz00, BgL_typez00_3818);
							FAILURE(BgL_auxz00_5384, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3817,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 516 */
							BgL_auxz00_5373 = (BgL_ftpz00_bglt) (BgL_ftpz00_3817);
						}
					else
						{
							obj_t BgL_auxz00_5377;

							BgL_auxz00_5377 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 17968)), BGl_string3401z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3817);
							FAILURE(BgL_auxz00_5377, BFALSE, BFALSE);
						}
					BgL_auxz00_5372 =
						BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_auxz00_5373, BgL_auxz00_5381,
						BgL_localzd2bytezd2siza7eza7_3819);
				}
				return BBOOL(BgL_auxz00_5372);
			}
		}
	}



/* ftp-file-structure */
	BGL_EXPORTED_DEF bool_t
		BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_42,
		obj_t BgL_structurez00_43)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 530 */
			{	/* Unsafe/ftp.scm 531 */
				obj_t BgL_list2585z00_3097;

				BgL_list2585z00_3097 = MAKE_PAIR(BGl_string3403z00zz__ftpz00, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_42), BGl_string3404z00zz__ftpz00,
						BgL_list2585z00_3097));
			}
		}
	}



/* _ftp-file-structure */
	obj_t BGl__ftpzd2filezd2structurez00zz__ftpz00(obj_t BgL_envz00_3820,
		obj_t BgL_ftpz00_3821, obj_t BgL_structurez00_3822)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 530 */
			{	/* Unsafe/ftp.scm 531 */
				bool_t BgL_auxz00_5394;

				{	/* Unsafe/ftp.scm 531 */
					BgL_ftpz00_bglt BgL_auxz00_5395;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3821,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 531 */
							BgL_auxz00_5395 = (BgL_ftpz00_bglt) (BgL_ftpz00_3821);
						}
					else
						{
							obj_t BgL_auxz00_5399;

							BgL_auxz00_5399 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 18565)), BGl_string3405z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3821);
							FAILURE(BgL_auxz00_5399, BFALSE, BFALSE);
						}
					BgL_auxz00_5394 =
						BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_auxz00_5395,
						BgL_structurez00_3822);
				}
				return BBOOL(BgL_auxz00_5394);
			}
		}
	}



/* ftp-transfer-mode */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_44, obj_t BgL_modez00_45)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 536 */
			{	/* Unsafe/ftp.scm 537 */
				obj_t BgL_list2586z00_3098;

				BgL_list2586z00_3098 = MAKE_PAIR(BGl_string3406z00zz__ftpz00, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_44), BGl_string3407z00zz__ftpz00,
						BgL_list2586z00_3098));
			}
		}
	}



/* _ftp-transfer-mode */
	obj_t BGl__ftpzd2transferzd2modez00zz__ftpz00(obj_t BgL_envz00_3823,
		obj_t BgL_ftpz00_3824, obj_t BgL_modez00_3825)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 536 */
			{	/* Unsafe/ftp.scm 537 */
				bool_t BgL_auxz00_5409;

				{	/* Unsafe/ftp.scm 537 */
					BgL_ftpz00_bglt BgL_auxz00_5410;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3824,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 537 */
							BgL_auxz00_5410 = (BgL_ftpz00_bglt) (BgL_ftpz00_3824);
						}
					else
						{
							obj_t BgL_auxz00_5414;

							BgL_auxz00_5414 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 18864)), BGl_string3408z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3824);
							FAILURE(BgL_auxz00_5414, BFALSE, BFALSE);
						}
					BgL_auxz00_5409 =
						BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_auxz00_5410,
						BgL_modez00_3825);
				}
				return BBOOL(BgL_auxz00_5409);
			}
		}
	}



/* ftp-retrieve */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2retrievezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_46, obj_t BgL_filenamez00_47)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 542 */
			{	/* Unsafe/ftp.scm 543 */
				obj_t BgL_list2587z00_3099;

				BgL_list2587z00_3099 = MAKE_PAIR(BgL_filenamez00_47, BNIL);
				return
					BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_46), BGl_string3348z00zz__ftpz00,
					BgL_list2587z00_3099);
			}
		}
	}



/* _ftp-retrieve */
	obj_t BGl__ftpzd2retrievezd2zz__ftpz00(obj_t BgL_envz00_3826,
		obj_t BgL_ftpz00_3827, obj_t BgL_filenamez00_3828)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 542 */
			{	/* Unsafe/ftp.scm 543 */
				obj_t BgL_auxz00_5431;

				BgL_ftpz00_bglt BgL_auxz00_5423;

				if (STRINGP(BgL_filenamez00_3828))
					{	/* Unsafe/ftp.scm 543 */
						BgL_auxz00_5431 = BgL_filenamez00_3828;
					}
				else
					{
						obj_t BgL_auxz00_5434;

						BgL_auxz00_5434 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 19160)), BGl_string3409z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_filenamez00_3828);
						FAILURE(BgL_auxz00_5434, BFALSE, BFALSE);
					}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3827,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 543 */
						BgL_auxz00_5423 = (BgL_ftpz00_bglt) (BgL_ftpz00_3827);
					}
				else
					{
						obj_t BgL_auxz00_5427;

						BgL_auxz00_5427 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 19160)), BGl_string3409z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3827);
						FAILURE(BgL_auxz00_5427, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2retrievezd2zz__ftpz00(BgL_auxz00_5423, BgL_auxz00_5431);
			}
		}
	}



/* ftp-store */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2storezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_48, obj_t BgL_sourcez00_49, obj_t BgL_destinationz00_50)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 548 */
			{	/* Unsafe/ftp.scm 549 */
				obj_t BgL_opz00_1637;

				{	/* Unsafe/ftp.scm 549 */
					obj_t BgL_arg2593z00_1644;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_5439;

						BgL_auxz00_5439 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_48);
						BgL_arg2593z00_1644 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5439))->BgL_dtpz00);
					}
					BgL_opz00_1637 = SOCKET_OUTPUT(BgL_arg2593z00_1644);
				}
				if (fexists(BSTRING_TO_STRING(BgL_sourcez00_49)))
					{	/* Unsafe/ftp.scm 551 */
						obj_t BgL__andtest_2126z00_1639;

						if (CBOOL(BgL_destinationz00_50))
							{	/* Unsafe/ftp.scm 552 */
								obj_t BgL_list2591z00_1642;

								BgL_list2591z00_1642 = MAKE_PAIR(BgL_destinationz00_50, BNIL);
								BgL__andtest_2126z00_1639 =
									BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									(obj_t) (BgL_ftpz00_48), BGl_string3410z00zz__ftpz00,
									BgL_list2591z00_1642);
							}
						else
							{	/* Unsafe/ftp.scm 551 */
								BgL__andtest_2126z00_1639 =
									BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									(obj_t) (BgL_ftpz00_48), BGl_string3411z00zz__ftpz00, BNIL);
							}
						if (CBOOL(BgL__andtest_2126z00_1639))
							{	/* Unsafe/ftp.scm 554 */
								long BgL_arg2589z00_1640;

								BgL_arg2589z00_1640 =
									BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(BSTRING_TO_STRING
									(BgL_sourcez00_49));
								{	/* Unsafe/ftp.scm 554 */
									long BgL_xz00_4119;

									BgL_xz00_4119 =
										BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_sourcez00_49,
										BgL_opz00_1637, BgL_arg2589z00_1640, ((long) 0));
									return ((bool_t) 1);
								}
							}
						else
							{	/* Unsafe/ftp.scm 551 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 550 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _ftp-store */
	obj_t BGl__ftpzd2storezd2zz__ftpz00(obj_t BgL_envz00_3829,
		obj_t BgL_ftpz00_3830, obj_t BgL_sourcez00_3831,
		obj_t BgL_destinationz00_3832)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 548 */
			{	/* Unsafe/ftp.scm 549 */
				bool_t BgL_auxz00_5458;

				{	/* Unsafe/ftp.scm 549 */
					obj_t BgL_auxz00_5467;

					BgL_ftpz00_bglt BgL_auxz00_5459;

					if (STRINGP(BgL_sourcez00_3831))
						{	/* Unsafe/ftp.scm 549 */
							BgL_auxz00_5467 = BgL_sourcez00_3831;
						}
					else
						{
							obj_t BgL_auxz00_5470;

							BgL_auxz00_5470 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 19468)), BGl_string3412z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_sourcez00_3831);
							FAILURE(BgL_auxz00_5470, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3830,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 549 */
							BgL_auxz00_5459 = (BgL_ftpz00_bglt) (BgL_ftpz00_3830);
						}
					else
						{
							obj_t BgL_auxz00_5463;

							BgL_auxz00_5463 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 19468)), BGl_string3412z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3830);
							FAILURE(BgL_auxz00_5463, BFALSE, BFALSE);
						}
					BgL_auxz00_5458 =
						BGl_ftpzd2storezd2zz__ftpz00(BgL_auxz00_5459, BgL_auxz00_5467,
						BgL_destinationz00_3832);
				}
				return BBOOL(BgL_auxz00_5458);
			}
		}
	}



/* ftp-append */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2appendzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_51, obj_t BgL_sourcez00_52, obj_t BgL_destinationz00_53)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 559 */
			{	/* Unsafe/ftp.scm 560 */
				obj_t BgL_opz00_3103;

				{	/* Unsafe/ftp.scm 560 */
					obj_t BgL_arg2598z00_3104;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_5476;

						BgL_auxz00_5476 = (BgL_z52ftpz52_bglt) (BgL_ftpz00_51);
						BgL_arg2598z00_3104 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_5476))->BgL_dtpz00);
					}
					BgL_opz00_3103 = SOCKET_OUTPUT(BgL_arg2598z00_3104);
				}
				if (fexists(BSTRING_TO_STRING(BgL_sourcez00_52)))
					{	/* Unsafe/ftp.scm 560 */
						obj_t BgL__andtest_2128z00_3106;

						{	/* Unsafe/ftp.scm 560 */
							obj_t BgL_list2596z00_3107;

							{	/* Unsafe/ftp.scm 560 */
								obj_t BgL_arg2597z00_3108;

								BgL_arg2597z00_3108 = MAKE_PAIR(BgL_destinationz00_53, BNIL);
								BgL_list2596z00_3107 =
									MAKE_PAIR(BgL_sourcez00_52, BgL_arg2597z00_3108);
							}
							BgL__andtest_2128z00_3106 =
								BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								(obj_t) (BgL_ftpz00_51), BGl_string3413z00zz__ftpz00,
								BgL_list2596z00_3107);
						}
						if (CBOOL(BgL__andtest_2128z00_3106))
							{	/* Unsafe/ftp.scm 560 */
								long BgL_arg2594z00_3109;

								BgL_arg2594z00_3109 =
									BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(BSTRING_TO_STRING
									(BgL_sourcez00_52));
								{	/* Unsafe/ftp.scm 560 */
									long BgL_xz00_4124;

									BgL_xz00_4124 =
										BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_sourcez00_52,
										BgL_opz00_3103, BgL_arg2594z00_3109, ((long) 0));
									return ((bool_t) 1);
								}
							}
						else
							{	/* Unsafe/ftp.scm 560 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 560 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _ftp-append */
	obj_t BGl__ftpzd2appendzd2zz__ftpz00(obj_t BgL_envz00_3833,
		obj_t BgL_ftpz00_3834, obj_t BgL_sourcez00_3835,
		obj_t BgL_destinationz00_3836)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 559 */
			{	/* Unsafe/ftp.scm 560 */
				bool_t BgL_auxz00_5492;

				{	/* Unsafe/ftp.scm 560 */
					obj_t BgL_auxz00_5508;

					obj_t BgL_auxz00_5501;

					BgL_ftpz00_bglt BgL_auxz00_5493;

					if (STRINGP(BgL_destinationz00_3836))
						{	/* Unsafe/ftp.scm 560 */
							BgL_auxz00_5508 = BgL_destinationz00_3836;
						}
					else
						{
							obj_t BgL_auxz00_5511;

							BgL_auxz00_5511 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 19998)), BGl_string3414z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_destinationz00_3836);
							FAILURE(BgL_auxz00_5511, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_sourcez00_3835))
						{	/* Unsafe/ftp.scm 560 */
							BgL_auxz00_5501 = BgL_sourcez00_3835;
						}
					else
						{
							obj_t BgL_auxz00_5504;

							BgL_auxz00_5504 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 19998)), BGl_string3414z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_sourcez00_3835);
							FAILURE(BgL_auxz00_5504, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3834,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 560 */
							BgL_auxz00_5493 = (BgL_ftpz00_bglt) (BgL_ftpz00_3834);
						}
					else
						{
							obj_t BgL_auxz00_5497;

							BgL_auxz00_5497 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 19998)), BGl_string3414z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3834);
							FAILURE(BgL_auxz00_5497, BFALSE, BFALSE);
						}
					BgL_auxz00_5492 =
						BGl_ftpzd2appendzd2zz__ftpz00(BgL_auxz00_5493, BgL_auxz00_5501,
						BgL_auxz00_5508);
				}
				return BBOOL(BgL_auxz00_5492);
			}
		}
	}



/* ftp-allocate */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2allocatezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_54, obj_t BgL_siza7eza7_55,
		obj_t BgL_pagezd2orzd2recordzd2siza7ez75_56)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 568 */
			{	/* Unsafe/ftp.scm 569 */
				obj_t BgL_prsiza7eza7_3114;

				if (PAIRP(BgL_pagezd2orzd2recordzd2siza7ez75_56))
					{	/* Unsafe/ftp.scm 569 */
						BgL_prsiza7eza7_3114 = CAR(BgL_pagezd2orzd2recordzd2siza7ez75_56);
					}
				else
					{	/* Unsafe/ftp.scm 569 */
						BgL_prsiza7eza7_3114 = BFALSE;
					}
				if (CBOOL(BgL_prsiza7eza7_3114))
					{	/* Unsafe/ftp.scm 569 */
						obj_t BgL_list2599z00_3116;

						{	/* Unsafe/ftp.scm 569 */
							obj_t BgL_arg2600z00_3117;

							{	/* Unsafe/ftp.scm 569 */
								obj_t BgL_arg2602z00_3119;

								BgL_arg2602z00_3119 = MAKE_PAIR(BgL_prsiza7eza7_3114, BNIL);
								BgL_arg2600z00_3117 =
									MAKE_PAIR(BGl_string3415z00zz__ftpz00, BgL_arg2602z00_3119);
							}
							BgL_list2599z00_3116 =
								MAKE_PAIR(BgL_siza7eza7_55, BgL_arg2600z00_3117);
						}
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								(obj_t) (BgL_ftpz00_54), BGl_string3416z00zz__ftpz00,
								BgL_list2599z00_3116));
					}
				else
					{	/* Unsafe/ftp.scm 569 */
						obj_t BgL_list2603z00_3120;

						BgL_list2603z00_3120 = MAKE_PAIR(BgL_siza7eza7_55, BNIL);
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								(obj_t) (BgL_ftpz00_54), BGl_string3416z00zz__ftpz00,
								BgL_list2603z00_3120));
					}
			}
		}
	}



/* _ftp-allocate */
	obj_t BGl__ftpzd2allocatezd2zz__ftpz00(obj_t BgL_envz00_3837,
		obj_t BgL_ftpz00_3838, obj_t BgL_siza7eza7_3839,
		obj_t BgL_pagezd2orzd2recordzd2siza7ez75_3840)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 568 */
			{	/* Unsafe/ftp.scm 569 */
				bool_t BgL_auxz00_5532;

				{	/* Unsafe/ftp.scm 569 */
					obj_t BgL_auxz00_5541;

					BgL_ftpz00_bglt BgL_auxz00_5533;

					if (INTEGERP(BgL_siza7eza7_3839))
						{	/* Unsafe/ftp.scm 569 */
							BgL_auxz00_5541 = BgL_siza7eza7_3839;
						}
					else
						{
							obj_t BgL_auxz00_5544;

							BgL_auxz00_5544 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 20452)), BGl_string3417z00zz__ftpz00,
								BGl_string3394z00zz__ftpz00, BgL_siza7eza7_3839);
							FAILURE(BgL_auxz00_5544, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3838,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 569 */
							BgL_auxz00_5533 = (BgL_ftpz00_bglt) (BgL_ftpz00_3838);
						}
					else
						{
							obj_t BgL_auxz00_5537;

							BgL_auxz00_5537 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 20452)), BGl_string3417z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3838);
							FAILURE(BgL_auxz00_5537, BFALSE, BFALSE);
						}
					BgL_auxz00_5532 =
						BGl_ftpzd2allocatezd2zz__ftpz00(BgL_auxz00_5533, BgL_auxz00_5541,
						BgL_pagezd2orzd2recordzd2siza7ez75_3840);
				}
				return BBOOL(BgL_auxz00_5532);
			}
		}
	}



/* ftp-restart */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2restartzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_57, obj_t BgL_positionz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 577 */
			{	/* Unsafe/ftp.scm 578 */
				obj_t BgL_list2604z00_3123;

				BgL_list2604z00_3123 = MAKE_PAIR(BgL_positionz00_58, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_57), BGl_string3418z00zz__ftpz00,
						BgL_list2604z00_3123));
			}
		}
	}



/* _ftp-restart */
	obj_t BGl__ftpzd2restartzd2zz__ftpz00(obj_t BgL_envz00_3841,
		obj_t BgL_ftpz00_3842, obj_t BgL_positionz00_3843)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 577 */
			{	/* Unsafe/ftp.scm 578 */
				bool_t BgL_auxz00_5554;

				{	/* Unsafe/ftp.scm 578 */
					obj_t BgL_auxz00_5563;

					BgL_ftpz00_bglt BgL_auxz00_5555;

					if (INTEGERP(BgL_positionz00_3843))
						{	/* Unsafe/ftp.scm 578 */
							BgL_auxz00_5563 = BgL_positionz00_3843;
						}
					else
						{
							obj_t BgL_auxz00_5566;

							BgL_auxz00_5566 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 20875)), BGl_string3419z00zz__ftpz00,
								BGl_string3394z00zz__ftpz00, BgL_positionz00_3843);
							FAILURE(BgL_auxz00_5566, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3842,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 578 */
							BgL_auxz00_5555 = (BgL_ftpz00_bglt) (BgL_ftpz00_3842);
						}
					else
						{
							obj_t BgL_auxz00_5559;

							BgL_auxz00_5559 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 20875)), BGl_string3419z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3842);
							FAILURE(BgL_auxz00_5559, BFALSE, BFALSE);
						}
					BgL_auxz00_5554 =
						BGl_ftpzd2restartzd2zz__ftpz00(BgL_auxz00_5555, BgL_auxz00_5563);
				}
				return BBOOL(BgL_auxz00_5554);
			}
		}
	}



/* ftp-rename-file */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_59, obj_t BgL_fromz00_60, obj_t BgL_toz00_61)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 583 */
			{	/* Unsafe/ftp.scm 584 */
				obj_t BgL__andtest_2130z00_3124;

				{	/* Unsafe/ftp.scm 584 */
					obj_t BgL_list2606z00_3125;

					BgL_list2606z00_3125 = MAKE_PAIR(BgL_fromz00_60, BNIL);
					BgL__andtest_2130z00_3124 =
						BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_59), BGl_string3420z00zz__ftpz00,
						BgL_list2606z00_3125);
				}
				if (CBOOL(BgL__andtest_2130z00_3124))
					{	/* Unsafe/ftp.scm 584 */
						obj_t BgL_list2605z00_3126;

						BgL_list2605z00_3126 = MAKE_PAIR(BgL_toz00_61, BNIL);
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								(obj_t) (BgL_ftpz00_59), BGl_string3421z00zz__ftpz00,
								BgL_list2605z00_3126));
					}
				else
					{	/* Unsafe/ftp.scm 584 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _ftp-rename-file */
	obj_t BGl__ftpzd2renamezd2filez00zz__ftpz00(obj_t BgL_envz00_3844,
		obj_t BgL_ftpz00_3845, obj_t BgL_fromz00_3846, obj_t BgL_toz00_3847)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 583 */
			{	/* Unsafe/ftp.scm 584 */
				bool_t BgL_auxz00_5581;

				{	/* Unsafe/ftp.scm 584 */
					obj_t BgL_auxz00_5597;

					obj_t BgL_auxz00_5590;

					BgL_ftpz00_bglt BgL_auxz00_5582;

					if (STRINGP(BgL_toz00_3847))
						{	/* Unsafe/ftp.scm 584 */
							BgL_auxz00_5597 = BgL_toz00_3847;
						}
					else
						{
							obj_t BgL_auxz00_5600;

							BgL_auxz00_5600 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21183)), BGl_string3422z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_toz00_3847);
							FAILURE(BgL_auxz00_5600, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_fromz00_3846))
						{	/* Unsafe/ftp.scm 584 */
							BgL_auxz00_5590 = BgL_fromz00_3846;
						}
					else
						{
							obj_t BgL_auxz00_5593;

							BgL_auxz00_5593 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21183)), BGl_string3422z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_fromz00_3846);
							FAILURE(BgL_auxz00_5593, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3845,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 584 */
							BgL_auxz00_5582 = (BgL_ftpz00_bglt) (BgL_ftpz00_3845);
						}
					else
						{
							obj_t BgL_auxz00_5586;

							BgL_auxz00_5586 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21183)), BGl_string3422z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3845);
							FAILURE(BgL_auxz00_5586, BFALSE, BFALSE);
						}
					BgL_auxz00_5581 =
						BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_auxz00_5582,
						BgL_auxz00_5590, BgL_auxz00_5597);
				}
				return BBOOL(BgL_auxz00_5581);
			}
		}
	}



/* ftp-abort */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2abortzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_62)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 590 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_62), BGl_string3423z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-abort */
	obj_t BGl__ftpzd2abortzd2zz__ftpz00(obj_t BgL_envz00_3848,
		obj_t BgL_ftpz00_3849)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 590 */
			{	/* Unsafe/ftp.scm 591 */
				bool_t BgL_auxz00_5609;

				{	/* Unsafe/ftp.scm 591 */
					BgL_ftpz00_bglt BgL_auxz00_5610;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3849,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 591 */
							BgL_auxz00_5610 = (BgL_ftpz00_bglt) (BgL_ftpz00_3849);
						}
					else
						{
							obj_t BgL_auxz00_5614;

							BgL_auxz00_5614 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21502)), BGl_string3424z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3849);
							FAILURE(BgL_auxz00_5614, BFALSE, BFALSE);
						}
					BgL_auxz00_5609 = BGl_ftpzd2abortzd2zz__ftpz00(BgL_auxz00_5610);
				}
				return BBOOL(BgL_auxz00_5609);
			}
		}
	}



/* ftp-delete */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2deletezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_63, obj_t BgL_filez00_64)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 596 */
			{	/* Unsafe/ftp.scm 597 */
				obj_t BgL_list2608z00_3128;

				BgL_list2608z00_3128 = MAKE_PAIR(BgL_filez00_64, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_63), BGl_string3425z00zz__ftpz00,
						BgL_list2608z00_3128));
			}
		}
	}



/* _ftp-delete */
	obj_t BGl__ftpzd2deletezd2zz__ftpz00(obj_t BgL_envz00_3850,
		obj_t BgL_ftpz00_3851, obj_t BgL_filez00_3852)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 596 */
			{	/* Unsafe/ftp.scm 597 */
				bool_t BgL_auxz00_5624;

				{	/* Unsafe/ftp.scm 597 */
					obj_t BgL_auxz00_5633;

					BgL_ftpz00_bglt BgL_auxz00_5625;

					if (STRINGP(BgL_filez00_3852))
						{	/* Unsafe/ftp.scm 597 */
							BgL_auxz00_5633 = BgL_filez00_3852;
						}
					else
						{
							obj_t BgL_auxz00_5636;

							BgL_auxz00_5636 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21788)), BGl_string3426z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_filez00_3852);
							FAILURE(BgL_auxz00_5636, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3851,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 597 */
							BgL_auxz00_5625 = (BgL_ftpz00_bglt) (BgL_ftpz00_3851);
						}
					else
						{
							obj_t BgL_auxz00_5629;

							BgL_auxz00_5629 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 21788)), BGl_string3426z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3851);
							FAILURE(BgL_auxz00_5629, BFALSE, BFALSE);
						}
					BgL_auxz00_5624 =
						BGl_ftpzd2deletezd2zz__ftpz00(BgL_auxz00_5625, BgL_auxz00_5633);
				}
				return BBOOL(BgL_auxz00_5624);
			}
		}
	}



/* ftp-rmdir */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_65, obj_t BgL_directoryz00_66)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 602 */
			{	/* Unsafe/ftp.scm 603 */
				obj_t BgL_list2609z00_3129;

				BgL_list2609z00_3129 = MAKE_PAIR(BgL_directoryz00_66, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_65), BGl_string3427z00zz__ftpz00,
						BgL_list2609z00_3129));
			}
		}
	}



/* _ftp-rmdir */
	obj_t BGl__ftpzd2rmdirzd2zz__ftpz00(obj_t BgL_envz00_3853,
		obj_t BgL_ftpz00_3854, obj_t BgL_directoryz00_3855)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 602 */
			{	/* Unsafe/ftp.scm 603 */
				bool_t BgL_auxz00_5646;

				{	/* Unsafe/ftp.scm 603 */
					obj_t BgL_auxz00_5655;

					BgL_ftpz00_bglt BgL_auxz00_5647;

					if (STRINGP(BgL_directoryz00_3855))
						{	/* Unsafe/ftp.scm 603 */
							BgL_auxz00_5655 = BgL_directoryz00_3855;
						}
					else
						{
							obj_t BgL_auxz00_5658;

							BgL_auxz00_5658 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 22083)), BGl_string3428z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_directoryz00_3855);
							FAILURE(BgL_auxz00_5658, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3854,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 603 */
							BgL_auxz00_5647 = (BgL_ftpz00_bglt) (BgL_ftpz00_3854);
						}
					else
						{
							obj_t BgL_auxz00_5651;

							BgL_auxz00_5651 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 22083)), BGl_string3428z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3854);
							FAILURE(BgL_auxz00_5651, BFALSE, BFALSE);
						}
					BgL_auxz00_5646 =
						BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_auxz00_5647, BgL_auxz00_5655);
				}
				return BBOOL(BgL_auxz00_5646);
			}
		}
	}



/* ftp-make-directory */
	BGL_EXPORTED_DEF bool_t
		BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_67,
		obj_t BgL_directoryz00_68)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 608 */
			{	/* Unsafe/ftp.scm 609 */
				obj_t BgL_list2610z00_3130;

				BgL_list2610z00_3130 = MAKE_PAIR(BgL_directoryz00_68, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_67), BGl_string3429z00zz__ftpz00,
						BgL_list2610z00_3130));
			}
		}
	}



/* _ftp-make-directory */
	obj_t BGl__ftpzd2makezd2directoryz00zz__ftpz00(obj_t BgL_envz00_3856,
		obj_t BgL_ftpz00_3857, obj_t BgL_directoryz00_3858)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 608 */
			{	/* Unsafe/ftp.scm 609 */
				bool_t BgL_auxz00_5668;

				{	/* Unsafe/ftp.scm 609 */
					obj_t BgL_auxz00_5677;

					BgL_ftpz00_bglt BgL_auxz00_5669;

					if (STRINGP(BgL_directoryz00_3858))
						{	/* Unsafe/ftp.scm 609 */
							BgL_auxz00_5677 = BgL_directoryz00_3858;
						}
					else
						{
							obj_t BgL_auxz00_5680;

							BgL_auxz00_5680 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 22391)), BGl_string3430z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_directoryz00_3858);
							FAILURE(BgL_auxz00_5680, BFALSE, BFALSE);
						}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3857,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 609 */
							BgL_auxz00_5669 = (BgL_ftpz00_bglt) (BgL_ftpz00_3857);
						}
					else
						{
							obj_t BgL_auxz00_5673;

							BgL_auxz00_5673 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 22391)), BGl_string3430z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3857);
							FAILURE(BgL_auxz00_5673, BFALSE, BFALSE);
						}
					BgL_auxz00_5668 =
						BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_auxz00_5669,
						BgL_auxz00_5677);
				}
				return BBOOL(BgL_auxz00_5668);
			}
		}
	}



/* ftp-pwd */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2pwdzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_69)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 614 */
			return
				BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
				(obj_t) (BgL_ftpz00_69), BGl_string3431z00zz__ftpz00, BNIL);
		}
	}



/* _ftp-pwd */
	obj_t BGl__ftpzd2pwdzd2zz__ftpz00(obj_t BgL_envz00_3859,
		obj_t BgL_ftpz00_3860)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 614 */
			{	/* Unsafe/ftp.scm 615 */
				BgL_ftpz00_bglt BgL_auxz00_5688;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3860,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 615 */
						BgL_auxz00_5688 = (BgL_ftpz00_bglt) (BgL_ftpz00_3860);
					}
				else
					{
						obj_t BgL_auxz00_5692;

						BgL_auxz00_5692 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 22678)), BGl_string3432z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3860);
						FAILURE(BgL_auxz00_5692, BFALSE, BFALSE);
					}
				return BGl_ftpzd2pwdzd2zz__ftpz00(BgL_auxz00_5688);
			}
		}
	}



/* ftp-list */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2listzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_70, obj_t BgL_argsz00_71)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 620 */
			{	/* Unsafe/ftp.scm 621 */
				obj_t BgL_runner2617z00_1674;

				{	/* Unsafe/ftp.scm 621 */
					obj_t BgL_list2612z00_1669;

					{	/* Unsafe/ftp.scm 621 */
						obj_t BgL_arg2614z00_1671;

						BgL_arg2614z00_1671 = MAKE_PAIR(BgL_argsz00_71, BNIL);
						BgL_list2612z00_1669 =
							MAKE_PAIR(BGl_string3433z00zz__ftpz00, BgL_arg2614z00_1671);
					}
					BgL_runner2617z00_1674 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (BgL_ftpz00_70), BgL_list2612z00_1669);
				}
				{	/* Unsafe/ftp.scm 621 */
					obj_t BgL_aux2615z00_1672;

					BgL_aux2615z00_1672 = CAR(BgL_runner2617z00_1674);
					BgL_runner2617z00_1674 = CDR(BgL_runner2617z00_1674);
					{	/* Unsafe/ftp.scm 621 */
						obj_t BgL_aux2616z00_1673;

						BgL_aux2616z00_1673 = CAR(BgL_runner2617z00_1674);
						BgL_runner2617z00_1674 = CDR(BgL_runner2617z00_1674);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux2615z00_1672,
							BgL_aux2616z00_1673, BgL_runner2617z00_1674);
					}
				}
			}
		}
	}



/* _ftp-list */
	obj_t BGl__ftpzd2listzd2zz__ftpz00(obj_t BgL_envz00_3861,
		obj_t BgL_ftpz00_3862, obj_t BgL_argsz00_3863)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 620 */
			{	/* Unsafe/ftp.scm 621 */
				BgL_ftpz00_bglt BgL_auxz00_5706;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3862,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 621 */
						BgL_auxz00_5706 = (BgL_ftpz00_bglt) (BgL_ftpz00_3862);
					}
				else
					{
						obj_t BgL_auxz00_5710;

						BgL_auxz00_5710 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 22963)), BGl_string3434z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3862);
						FAILURE(BgL_auxz00_5710, BFALSE, BFALSE);
					}
				return BGl_ftpzd2listzd2zz__ftpz00(BgL_auxz00_5706, BgL_argsz00_3863);
			}
		}
	}



/* ftp-name-list */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_72, obj_t BgL_argsz00_73)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 626 */
			{	/* Unsafe/ftp.scm 627 */
				obj_t BgL_runner2623z00_1680;

				{	/* Unsafe/ftp.scm 627 */
					obj_t BgL_list2618z00_1675;

					{	/* Unsafe/ftp.scm 627 */
						obj_t BgL_arg2620z00_1677;

						BgL_arg2620z00_1677 = MAKE_PAIR(BgL_argsz00_73, BNIL);
						BgL_list2618z00_1675 =
							MAKE_PAIR(BGl_string3435z00zz__ftpz00, BgL_arg2620z00_1677);
					}
					BgL_runner2623z00_1680 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (BgL_ftpz00_72), BgL_list2618z00_1675);
				}
				{	/* Unsafe/ftp.scm 627 */
					obj_t BgL_aux2621z00_1678;

					BgL_aux2621z00_1678 = CAR(BgL_runner2623z00_1680);
					BgL_runner2623z00_1680 = CDR(BgL_runner2623z00_1680);
					{	/* Unsafe/ftp.scm 627 */
						obj_t BgL_aux2622z00_1679;

						BgL_aux2622z00_1679 = CAR(BgL_runner2623z00_1680);
						BgL_runner2623z00_1680 = CDR(BgL_runner2623z00_1680);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux2621z00_1678,
							BgL_aux2622z00_1679, BgL_runner2623z00_1680);
					}
				}
			}
		}
	}



/* _ftp-name-list */
	obj_t BGl__ftpzd2namezd2listz00zz__ftpz00(obj_t BgL_envz00_3864,
		obj_t BgL_ftpz00_3865, obj_t BgL_argsz00_3866)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 626 */
			{	/* Unsafe/ftp.scm 627 */
				BgL_ftpz00_bglt BgL_auxz00_5724;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3865,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 627 */
						BgL_auxz00_5724 = (BgL_ftpz00_bglt) (BgL_ftpz00_3865);
					}
				else
					{
						obj_t BgL_auxz00_5728;

						BgL_auxz00_5728 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 23265)), BGl_string3436z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3865);
						FAILURE(BgL_auxz00_5728, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_auxz00_5724, BgL_argsz00_3866);
			}
		}
	}



/* ftp-site-parameters */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_74,
		obj_t BgL_argsz00_75)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 632 */
			{	/* Unsafe/ftp.scm 633 */
				obj_t BgL_runner2629z00_1686;

				{	/* Unsafe/ftp.scm 633 */
					obj_t BgL_list2624z00_1681;

					{	/* Unsafe/ftp.scm 633 */
						obj_t BgL_arg2626z00_1683;

						BgL_arg2626z00_1683 = MAKE_PAIR(BgL_argsz00_75, BNIL);
						BgL_list2624z00_1681 =
							MAKE_PAIR(BGl_string3437z00zz__ftpz00, BgL_arg2626z00_1683);
					}
					BgL_runner2629z00_1686 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (BgL_ftpz00_74), BgL_list2624z00_1681);
				}
				{	/* Unsafe/ftp.scm 633 */
					obj_t BgL_aux2627z00_1684;

					BgL_aux2627z00_1684 = CAR(BgL_runner2629z00_1686);
					BgL_runner2629z00_1686 = CDR(BgL_runner2629z00_1686);
					{	/* Unsafe/ftp.scm 633 */
						obj_t BgL_aux2628z00_1685;

						BgL_aux2628z00_1685 = CAR(BgL_runner2629z00_1686);
						BgL_runner2629z00_1686 = CDR(BgL_runner2629z00_1686);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux2627z00_1684,
							BgL_aux2628z00_1685, BgL_runner2629z00_1686);
					}
				}
			}
		}
	}



/* _ftp-site-parameters */
	obj_t BGl__ftpzd2sitezd2parametersz00zz__ftpz00(obj_t BgL_envz00_3867,
		obj_t BgL_ftpz00_3868, obj_t BgL_argsz00_3869)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 632 */
			{	/* Unsafe/ftp.scm 633 */
				BgL_ftpz00_bglt BgL_auxz00_5742;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3868,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 633 */
						BgL_auxz00_5742 = (BgL_ftpz00_bglt) (BgL_ftpz00_3868);
					}
				else
					{
						obj_t BgL_auxz00_5746;

						BgL_auxz00_5746 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 23573)), BGl_string3438z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3868);
						FAILURE(BgL_auxz00_5746, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_auxz00_5742,
					BgL_argsz00_3869);
			}
		}
	}



/* ftp-system */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2systemzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_76)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 638 */
			return
				BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
				(obj_t) (BgL_ftpz00_76), BGl_string3439z00zz__ftpz00, BNIL);
		}
	}



/* _ftp-system */
	obj_t BGl__ftpzd2systemzd2zz__ftpz00(obj_t BgL_envz00_3870,
		obj_t BgL_ftpz00_3871)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 638 */
			{	/* Unsafe/ftp.scm 639 */
				BgL_ftpz00_bglt BgL_auxz00_5753;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3871,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 639 */
						BgL_auxz00_5753 = (BgL_ftpz00_bglt) (BgL_ftpz00_3871);
					}
				else
					{
						obj_t BgL_auxz00_5757;

						BgL_auxz00_5757 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 23865)), BGl_string3440z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3871);
						FAILURE(BgL_auxz00_5757, BFALSE, BFALSE);
					}
				return BGl_ftpzd2systemzd2zz__ftpz00(BgL_auxz00_5753);
			}
		}
	}



/* ftp-status */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2statuszd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_77, obj_t BgL_argsz00_78)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 644 */
			{	/* Unsafe/ftp.scm 645 */
				obj_t BgL_runner2636z00_1693;

				{	/* Unsafe/ftp.scm 645 */
					obj_t BgL_list2631z00_1688;

					{	/* Unsafe/ftp.scm 645 */
						obj_t BgL_arg2633z00_1690;

						BgL_arg2633z00_1690 = MAKE_PAIR(BgL_argsz00_78, BNIL);
						BgL_list2631z00_1688 =
							MAKE_PAIR(BGl_string3441z00zz__ftpz00, BgL_arg2633z00_1690);
					}
					BgL_runner2636z00_1693 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (BgL_ftpz00_77), BgL_list2631z00_1688);
				}
				{	/* Unsafe/ftp.scm 645 */
					obj_t BgL_aux2634z00_1691;

					BgL_aux2634z00_1691 = CAR(BgL_runner2636z00_1693);
					BgL_runner2636z00_1693 = CDR(BgL_runner2636z00_1693);
					{	/* Unsafe/ftp.scm 645 */
						obj_t BgL_aux2635z00_1692;

						BgL_aux2635z00_1692 = CAR(BgL_runner2636z00_1693);
						BgL_runner2636z00_1693 = CDR(BgL_runner2636z00_1693);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux2634z00_1691,
							BgL_aux2635z00_1692, BgL_runner2636z00_1693);
					}
				}
			}
		}
	}



/* _ftp-status */
	obj_t BGl__ftpzd2statuszd2zz__ftpz00(obj_t BgL_envz00_3872,
		obj_t BgL_ftpz00_3873, obj_t BgL_argsz00_3874)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 644 */
			{	/* Unsafe/ftp.scm 645 */
				BgL_ftpz00_bglt BgL_auxz00_5771;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3873,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 645 */
						BgL_auxz00_5771 = (BgL_ftpz00_bglt) (BgL_ftpz00_3873);
					}
				else
					{
						obj_t BgL_auxz00_5775;

						BgL_auxz00_5775 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 24153)), BGl_string3442z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3873);
						FAILURE(BgL_auxz00_5775, BFALSE, BFALSE);
					}
				return BGl_ftpzd2statuszd2zz__ftpz00(BgL_auxz00_5771, BgL_argsz00_3874);
			}
		}
	}



/* ftp-help */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2helpzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_79, obj_t BgL_argsz00_80)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 650 */
			{	/* Unsafe/ftp.scm 651 */
				obj_t BgL_argz00_3149;

				if (PAIRP(BgL_argsz00_80))
					{	/* Unsafe/ftp.scm 651 */
						BgL_argz00_3149 = CAR(BgL_argsz00_80);
					}
				else
					{	/* Unsafe/ftp.scm 651 */
						BgL_argz00_3149 = BFALSE;
					}
				if (CBOOL(BgL_argz00_3149))
					{	/* Unsafe/ftp.scm 651 */
						obj_t BgL_list2637z00_3151;

						BgL_list2637z00_3151 = MAKE_PAIR(BgL_argz00_3149, BNIL);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
							(obj_t) (BgL_ftpz00_79), BGl_string3443z00zz__ftpz00,
							BgL_list2637z00_3151);
					}
				else
					{	/* Unsafe/ftp.scm 651 */
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
							(obj_t) (BgL_ftpz00_79), BGl_string3443z00zz__ftpz00, BNIL);
					}
			}
		}
	}



/* _ftp-help */
	obj_t BGl__ftpzd2helpzd2zz__ftpz00(obj_t BgL_envz00_3875,
		obj_t BgL_ftpz00_3876, obj_t BgL_argsz00_3877)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 650 */
			{	/* Unsafe/ftp.scm 651 */
				BgL_ftpz00_bglt BgL_auxz00_5790;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3876,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 651 */
						BgL_auxz00_5790 = (BgL_ftpz00_bglt) (BgL_ftpz00_3876);
					}
				else
					{
						obj_t BgL_auxz00_5794;

						BgL_auxz00_5794 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 24466)), BGl_string3444z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3876);
						FAILURE(BgL_auxz00_5794, BFALSE, BFALSE);
					}
				return BGl_ftpzd2helpzd2zz__ftpz00(BgL_auxz00_5790, BgL_argsz00_3877);
			}
		}
	}



/* ftp-noop */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2noopzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_81)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 659 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					(obj_t) (BgL_ftpz00_81), BGl_string3445z00zz__ftpz00, BNIL));
		}
	}



/* _ftp-noop */
	obj_t BGl__ftpzd2noopzd2zz__ftpz00(obj_t BgL_envz00_3878,
		obj_t BgL_ftpz00_3879)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 659 */
			{	/* Unsafe/ftp.scm 660 */
				bool_t BgL_auxz00_5802;

				{	/* Unsafe/ftp.scm 660 */
					BgL_ftpz00_bglt BgL_auxz00_5803;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3879,
							BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 660 */
							BgL_auxz00_5803 = (BgL_ftpz00_bglt) (BgL_ftpz00_3879);
						}
					else
						{
							obj_t BgL_auxz00_5807;

							BgL_auxz00_5807 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 24827)), BGl_string3446z00zz__ftpz00,
								BGl_string3345z00zz__ftpz00, BgL_ftpz00_3879);
							FAILURE(BgL_auxz00_5807, BFALSE, BFALSE);
						}
					BgL_auxz00_5802 = BGl_ftpzd2noopzd2zz__ftpz00(BgL_auxz00_5803);
				}
				return BBOOL(BgL_auxz00_5802);
			}
		}
	}



/* _open-input-ftp-file */
	obj_t BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t BgL_envz00_85,
		obj_t BgL_optz00_84)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 665 */
			{	/* Unsafe/ftp.scm 665 */
				obj_t BgL_g2216z00_1699;

				BgL_g2216z00_1699 = VECTOR_REF(BgL_optz00_84, (int) (((long) 0)));
				{	/* Unsafe/ftp.scm 665 */
					int BgL_aux2218z00_1701;

					BgL_aux2218z00_1701 = VECTOR_LENGTH(BgL_optz00_84);
					switch ((long) (BgL_aux2218z00_1701))
						{
						case ((long) 1):

							{	/* Unsafe/ftp.scm 665 */

								{	/* Unsafe/ftp.scm 665 */
									obj_t BgL_arg2641z00_1704;

									BgL_arg2641z00_1704 =
										VECTOR_REF(BgL_optz00_84, (int) (((long) 0)));
									{	/* Unsafe/ftp.scm 665 */
										obj_t BgL_auxz00_5818;

										if (STRINGP(BgL_arg2641z00_1704))
											{	/* Unsafe/ftp.scm 665 */
												BgL_auxz00_5818 = BgL_arg2641z00_1704;
											}
										else
											{
												obj_t BgL_auxz00_5821;

												BgL_auxz00_5821 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3374z00zz__ftpz00, BINT(((long) 25080)),
													BGl_string3447z00zz__ftpz00,
													BGl_string3384z00zz__ftpz00, BgL_arg2641z00_1704);
												FAILURE(BgL_auxz00_5821, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00
											(BgL_auxz00_5818, BTRUE);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/ftp.scm 665 */
								obj_t BgL_bufinfoz00_1705;

								BgL_bufinfoz00_1705 =
									VECTOR_REF(BgL_optz00_84, (int) (((long) 1)));
								{	/* Unsafe/ftp.scm 665 */

									{	/* Unsafe/ftp.scm 665 */
										obj_t BgL_arg2642z00_1706;

										BgL_arg2642z00_1706 =
											VECTOR_REF(BgL_optz00_84, (int) (((long) 0)));
										{	/* Unsafe/ftp.scm 665 */
											obj_t BgL_auxz00_5830;

											if (STRINGP(BgL_arg2642z00_1706))
												{	/* Unsafe/ftp.scm 665 */
													BgL_auxz00_5830 = BgL_arg2642z00_1706;
												}
											else
												{
													obj_t BgL_auxz00_5833;

													BgL_auxz00_5833 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3374z00zz__ftpz00, BINT(((long) 25080)),
														BGl_string3447z00zz__ftpz00,
														BGl_string3384z00zz__ftpz00, BgL_arg2642z00_1706);
													FAILURE(BgL_auxz00_5833, BFALSE, BFALSE);
												}
											return
												BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00
												(BgL_auxz00_5830, BgL_bufinfoz00_1705);
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



/* open-input-ftp-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t
		BgL_stringz00_82, obj_t BgL_bufinfoz00_83)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 665 */
			{	/* Unsafe/ftp.scm 694 */
				obj_t BgL_protocolz00_1708;

				BgL_protocolz00_1708 =
					BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_82,
					BGl_string3345z00zz__ftpz00);
				{	/* Unsafe/ftp.scm 696 */
					obj_t BgL_loginz00_1709;

					obj_t BgL_hostz00_1710;

					obj_t BgL_portz00_1711;

					obj_t BgL_abspathz00_1712;

					{	/* Unsafe/ftp.scm 696 */
						int BgL_auxz00_5841;

						BgL_auxz00_5841 = (int) (((long) 1));
						BgL_loginz00_1709 = BGL_MVALUES_VAL(BgL_auxz00_5841);
					}
					{	/* Unsafe/ftp.scm 696 */
						int BgL_auxz00_5844;

						BgL_auxz00_5844 = (int) (((long) 2));
						BgL_hostz00_1710 = BGL_MVALUES_VAL(BgL_auxz00_5844);
					}
					{	/* Unsafe/ftp.scm 696 */
						int BgL_auxz00_5847;

						BgL_auxz00_5847 = (int) (((long) 3));
						BgL_portz00_1711 = BGL_MVALUES_VAL(BgL_auxz00_5847);
					}
					{	/* Unsafe/ftp.scm 696 */
						int BgL_auxz00_5850;

						BgL_auxz00_5850 = (int) (((long) 4));
						BgL_abspathz00_1712 = BGL_MVALUES_VAL(BgL_auxz00_5850);
					}
					{	/* Unsafe/ftp.scm 696 */
						obj_t BgL_iz00_1713;

						if (STRINGP(BgL_loginz00_1709))
							{	/* Unsafe/ftp.scm 696 */
								obj_t BgL_g2657z00_1733;

								BgL_g2657z00_1733 = BgL_loginz00_1709;
								{	/* Ieee/string.scm 208 */

									BgL_iz00_1713 =
										BGl_stringzd2indexzd2zz__r4_strings_6_7z00
										(BgL_g2657z00_1733, BCHAR(((unsigned char) ':')),
										BINT(((long) 0)));
							}}
						else
							{	/* Unsafe/ftp.scm 696 */
								BgL_iz00_1713 = BFALSE;
							}
						{	/* Unsafe/ftp.scm 696 */
							BgL_ftpz00_bglt BgL_ftpz00_1714;

							{	/* Unsafe/ftp.scm 697 */
								obj_t BgL_arg2649z00_1724;

								obj_t BgL_arg2650z00_1725;

								if (CBOOL(BgL_iz00_1713))
									{	/* Unsafe/ftp.scm 700 */
										BgL_arg2649z00_1724 =
											c_substring(BgL_loginz00_1709, ((long) 0),
											(long) CINT(BgL_iz00_1713));
									}
								else
									{	/* Unsafe/ftp.scm 700 */
										if (STRINGP(BgL_loginz00_1709))
											{	/* Unsafe/ftp.scm 701 */
												BgL_arg2649z00_1724 = BgL_loginz00_1709;
											}
										else
											{	/* Unsafe/ftp.scm 701 */
												BgL_arg2649z00_1724 = BGl_string3448z00zz__ftpz00;
											}
									}
								if (CBOOL(BgL_iz00_1713))
									{	/* Unsafe/ftp.scm 704 */
										long BgL_arg2655z00_1728;

										BgL_arg2655z00_1728 =
											((long) CINT(BgL_iz00_1713) + ((long) 1));
										{	/* Unsafe/ftp.scm 704 */
											obj_t BgL_stringz00_1729;

											BgL_stringz00_1729 = BgL_loginz00_1709;
											{	/* Ieee/string.scm 179 */
												long BgL_endz00_1731;

												BgL_endz00_1731 = STRING_LENGTH(BgL_stringz00_1729);
												{	/* Ieee/string.scm 179 */

													BgL_arg2650z00_1725 =
														BGl_substringz00zz__r4_strings_6_7z00
														(BgL_stringz00_1729, BgL_arg2655z00_1728,
														BgL_endz00_1731);
									}}}}
								else
									{	/* Unsafe/ftp.scm 704 */
										BgL_arg2650z00_1725 = BGl_string3449z00zz__ftpz00;
									}
								{	/* Unsafe/ftp.scm 697 */
									BgL_ftpz00_bglt BgL_res3104z00_3203;

									{	/* Unsafe/ftp.scm 697 */
										obj_t BgL_host1873z00_3171;

										obj_t BgL_port1874z00_3172;

										BgL_host1873z00_3171 = BgL_hostz00_1710;
										BgL_port1874z00_3172 = BINT(((long) 21));
										{	/* Unsafe/ftp.scm 697 */
											BgL_ftpz00_bglt BgL_new1879z00_3177;

											{	/* Unsafe/ftp.scm 697 */
												BgL_ftpz00_bglt BgL_res3102z00_3182;

												{	/* Unsafe/ftp.scm 697 */
													BgL_ftpz00_bglt BgL_new1901z00_3178;

													BgL_new1901z00_3178 =
														((BgL_ftpz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_ftpz00_bgl))));
													BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
														(BgL_new1901z00_3178),
														BGl_classzd2numzd2zz__objectz00
														(BGl_ftpz00zz__ftpz00));
													{	/* Unsafe/ftp.scm 697 */
														BgL_objectz00_bglt BgL_auxz00_5875;

														BgL_auxz00_5875 =
															(BgL_objectz00_bglt) (BgL_new1901z00_3178);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_5875, BFALSE);
													}
													BgL_res3102z00_3182 = BgL_new1901z00_3178;
												}
												BgL_new1879z00_3177 = BgL_res3102z00_3182;
											}
											{	/* Unsafe/ftp.scm 697 */
												BgL_ftpz00_bglt BgL_res3103z00_3202;

												{	/* Unsafe/ftp.scm 697 */
													BgL_ftpz00_bglt BgL_new1890z00_3183;

													BgL_new1890z00_3183 = BgL_new1879z00_3177;
													{	/* Unsafe/ftp.scm 697 */
														obj_t BgL_cmd1881z00_3193;

														obj_t BgL_dtp1882z00_3194;

														bool_t BgL_passivezf31883zf3_3195;

														obj_t BgL_host1884z00_3196;

														obj_t BgL_port1885z00_3197;

														obj_t BgL_motd1886z00_3198;

														obj_t BgL_user1887z00_3199;

														obj_t BgL_pass1888z00_3200;

														obj_t BgL_acct1889z00_3201;

														BgL_cmd1881z00_3193 = BFALSE;
														BgL_dtp1882z00_3194 = BFALSE;
														BgL_passivezf31883zf3_3195 = ((bool_t) 1);
														BgL_host1884z00_3196 = BgL_host1873z00_3171;
														BgL_port1885z00_3197 = BgL_port1874z00_3172;
														BgL_motd1886z00_3198 = BGl_string3450z00zz__ftpz00;
														BgL_user1887z00_3199 = BgL_arg2649z00_1724;
														BgL_pass1888z00_3200 = BgL_arg2650z00_1725;
														BgL_acct1889z00_3201 = BGl_string3450z00zz__ftpz00;
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_cmdz00) =
															((obj_t) BgL_cmd1881z00_3193), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_dtpz00) =
															((obj_t) BgL_dtp1882z00_3194), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_passivezf3zf3) =
															((bool_t) BgL_passivezf31883zf3_3195), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_hostz00) =
															((obj_t) BgL_host1884z00_3196), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_portz00) =
															((obj_t) BgL_port1885z00_3197), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_motdz00) =
															((obj_t) BgL_motd1886z00_3198), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_userz00) =
															((obj_t) BgL_user1887z00_3199), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_passz00) =
															((obj_t) BgL_pass1888z00_3200), BUNSPEC);
														((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3183))->
																BgL_acctz00) =
															((obj_t) BgL_acct1889z00_3201), BUNSPEC);
														BgL_res3103z00_3202 = BgL_new1890z00_3183;
												}} BgL_res3103z00_3202;
											}
											BgL_res3104z00_3203 = BgL_new1879z00_3177;
									}}
									BgL_ftpz00_1714 = BgL_res3104z00_3203;
							}}
							{	/* Unsafe/ftp.scm 697 */

								if (BGl_ftpzd2connectzd2zz__ftpz00(BgL_ftpz00_1714))
									{	/* Unsafe/ftp.scm 707 */
										obj_t BgL_piz00_1716;

										{	/* Unsafe/ftp.scm 707 */
											obj_t BgL_filenamez00_3205;

											BgL_filenamez00_3205 = BgL_abspathz00_1712;
											{	/* Unsafe/ftp.scm 707 */
												obj_t BgL_list2587z00_3206;

												BgL_list2587z00_3206 =
													MAKE_PAIR(BgL_filenamez00_3205, BNIL);
												BgL_piz00_1716 =
													BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
													(obj_t) (BgL_ftpz00_1714),
													BGl_string3348z00zz__ftpz00, BgL_list2587z00_3206);
											}
										}
										if (INPUT_PORTP(BgL_piz00_1716))
											{	/* Unsafe/ftp.scm 708 */
												{	/* Unsafe/ftp.scm 709 */
													obj_t BgL_zc3anonymousza32646ze3z83_3880;

													BgL_zc3anonymousza32646ze3z83_3880 =
														make_fx_procedure
														(BGl_zc3anonymousza32646ze3z83zz__ftpz00,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3anonymousza32646ze3z83_3880,
														(int) (((long) 0)), (obj_t) (BgL_ftpz00_1714));
													BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
														(BgL_piz00_1716,
														BgL_zc3anonymousza32646ze3z83_3880);
												}
												return BgL_piz00_1716;
											}
										else
											{	/* Unsafe/ftp.scm 708 */
												return BFALSE;
											}
									}
								else
									{	/* Unsafe/ftp.scm 706 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2646> */
	obj_t BGl_zc3anonymousza32646ze3z83zz__ftpz00(obj_t BgL_envz00_3881,
		obj_t BgL_vz00_3883)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 709 */
			return
				BGl_z52ftpzd2closez80zz__ftpz00(PROCEDURE_REF(BgL_envz00_3881,
					(int) (((long) 0))));
		}
	}



/* ftp-directory->list */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_86,
		obj_t BgL_dirz00_87)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 715 */
			{	/* Unsafe/ftp.scm 716 */
				long BgL_lenz00_1771;

				obj_t BgL_lstz00_1772;

				BgL_lenz00_1771 = STRING_LENGTH(BgL_dirz00_87);
				{	/* Unsafe/ftp.scm 717 */
					obj_t BgL_list2697z00_1802;

					BgL_list2697z00_1802 = MAKE_PAIR(BgL_dirz00_87, BNIL);
					BgL_lstz00_1772 =
						BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_86,
						BgL_list2697z00_1802);
				}
				{	/* Unsafe/ftp.scm 719 */
					bool_t BgL_testz00_5907;

					if (PAIRP(BgL_lstz00_1772))
						{	/* Unsafe/ftp.scm 719 */
							obj_t BgL_auxz00_5910;

							BgL_auxz00_5910 = CDR(BgL_lstz00_1772);
							BgL_testz00_5907 = PAIRP(BgL_auxz00_5910);
						}
					else
						{	/* Unsafe/ftp.scm 719 */
							BgL_testz00_5907 = ((bool_t) 0);
						}
					if (BgL_testz00_5907)
						{	/* Unsafe/ftp.scm 720 */
							obj_t BgL_l2187z00_1774;

							BgL_l2187z00_1774 = BgL_lstz00_1772;
							{	/* Unsafe/ftp.scm 720 */
								obj_t BgL_head2189z00_1776;

								BgL_head2189z00_1776 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l2187z00_1778;

									obj_t BgL_tail2190z00_1779;

									BgL_l2187z00_1778 = BgL_l2187z00_1774;
									BgL_tail2190z00_1779 = BgL_head2189z00_1776;
								BgL_zc3anonymousza32684ze3z83_1780:
									if (NULLP(BgL_l2187z00_1778))
										{	/* Unsafe/ftp.scm 720 */
											return CDR(BgL_head2189z00_1776);
										}
									else
										{	/* Unsafe/ftp.scm 720 */
											obj_t BgL_newtail2191z00_1782;

											{	/* Unsafe/ftp.scm 720 */
												obj_t BgL_arg2687z00_1784;

												{	/* Unsafe/ftp.scm 720 */
													obj_t BgL_filez00_1786;

													BgL_filez00_1786 = CAR(BgL_l2187z00_1778);
													{	/* Unsafe/ftp.scm 720 */
														long BgL_arg2689z00_1787;

														BgL_arg2689z00_1787 =
															(BgL_lenz00_1771 + ((long) 1));
														{	/* Ieee/string.scm 179 */
															long BgL_endz00_1790;

															BgL_endz00_1790 = STRING_LENGTH(BgL_filez00_1786);
															{	/* Ieee/string.scm 179 */

																BgL_arg2687z00_1784 =
																	BGl_substringz00zz__r4_strings_6_7z00
																	(BgL_filez00_1786, BgL_arg2689z00_1787,
																	BgL_endz00_1790);
												}}}}
												BgL_newtail2191z00_1782 =
													MAKE_PAIR(BgL_arg2687z00_1784, BNIL);
											}
											SET_CDR(BgL_tail2190z00_1779, BgL_newtail2191z00_1782);
											{
												obj_t BgL_tail2190z00_5925;

												obj_t BgL_l2187z00_5923;

												BgL_l2187z00_5923 = CDR(BgL_l2187z00_1778);
												BgL_tail2190z00_5925 = BgL_newtail2191z00_1782;
												BgL_tail2190z00_1779 = BgL_tail2190z00_5925;
												BgL_l2187z00_1778 = BgL_l2187z00_5923;
												goto BgL_zc3anonymousza32684ze3z83_1780;
											}
										}
								}
							}
						}
					else
						{	/* Unsafe/ftp.scm 719 */
							if (NULLP(BgL_lstz00_1772))
								{	/* Unsafe/ftp.scm 721 */
									return BNIL;
								}
							else
								{	/* Unsafe/ftp.scm 721 */
									if (bigloo_strcmp(CAR(BgL_lstz00_1772), BgL_dirz00_87))
										{	/* Unsafe/ftp.scm 723 */
											return BgL_dirz00_87;
										}
									else
										{	/* Unsafe/ftp.scm 726 */
											obj_t BgL_arg2692z00_1794;

											long BgL_arg2693z00_1795;

											BgL_arg2692z00_1794 = CAR(BgL_lstz00_1772);
											BgL_arg2693z00_1795 = (BgL_lenz00_1771 + ((long) 1));
											{	/* Ieee/string.scm 179 */
												long BgL_endz00_1798;

												BgL_endz00_1798 = STRING_LENGTH(BgL_arg2692z00_1794);
												{	/* Ieee/string.scm 179 */

													return
														BGl_substringz00zz__r4_strings_6_7z00
														(BgL_arg2692z00_1794, BgL_arg2693z00_1795,
														BgL_endz00_1798);
												}
											}
										}
								}
						}
				}
			}
		}
	}



/* _ftp-directory->list */
	obj_t BGl__ftpzd2directoryzd2ze3listze3zz__ftpz00(obj_t BgL_envz00_3884,
		obj_t BgL_ftpz00_3885, obj_t BgL_dirz00_3886)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 715 */
			{	/* Unsafe/ftp.scm 716 */
				obj_t BgL_auxz00_5943;

				BgL_ftpz00_bglt BgL_auxz00_5935;

				if (STRINGP(BgL_dirz00_3886))
					{	/* Unsafe/ftp.scm 716 */
						BgL_auxz00_5943 = BgL_dirz00_3886;
					}
				else
					{
						obj_t BgL_auxz00_5946;

						BgL_auxz00_5946 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 26910)), BGl_string3451z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_dirz00_3886);
						FAILURE(BgL_auxz00_5946, BFALSE, BFALSE);
					}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3885,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 716 */
						BgL_auxz00_5935 = (BgL_ftpz00_bglt) (BgL_ftpz00_3885);
					}
				else
					{
						obj_t BgL_auxz00_5939;

						BgL_auxz00_5939 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 26910)), BGl_string3451z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3885);
						FAILURE(BgL_auxz00_5939, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_auxz00_5935,
					BgL_auxz00_5943);
			}
		}
	}



/* ftp-directory->path-list */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_88, obj_t BgL_dirz00_89)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 731 */
			{	/* Unsafe/ftp.scm 732 */
				obj_t BgL_list2698z00_3234;

				BgL_list2698z00_3234 = MAKE_PAIR(BgL_dirz00_89, BNIL);
				return
					BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_88,
					BgL_list2698z00_3234);
			}
		}
	}



/* _ftp-directory->path-list */
	obj_t BGl__ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(obj_t
		BgL_envz00_3887, obj_t BgL_ftpz00_3888, obj_t BgL_dirz00_3889)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 731 */
			{	/* Unsafe/ftp.scm 732 */
				obj_t BgL_auxz00_5961;

				BgL_ftpz00_bglt BgL_auxz00_5953;

				if (STRINGP(BgL_dirz00_3889))
					{	/* Unsafe/ftp.scm 732 */
						BgL_auxz00_5961 = BgL_dirz00_3889;
					}
				else
					{
						obj_t BgL_auxz00_5964;

						BgL_auxz00_5964 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 27462)), BGl_string3452z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_dirz00_3889);
						FAILURE(BgL_auxz00_5964, BFALSE, BFALSE);
					}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3888,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 732 */
						BgL_auxz00_5953 = (BgL_ftpz00_bglt) (BgL_ftpz00_3888);
					}
				else
					{
						obj_t BgL_auxz00_5957;

						BgL_auxz00_5957 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 27462)), BGl_string3452z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3888);
						FAILURE(BgL_auxz00_5957, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_auxz00_5953,
					BgL_auxz00_5961);
			}
		}
	}



/* ftp-copy-file */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_90, obj_t BgL_fromz00_91, obj_t BgL_dstz00_92)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 737 */
			{	/* Unsafe/ftp.scm 738 */
				obj_t BgL_rz00_3235;

				{	/* Unsafe/ftp.scm 738 */
					obj_t BgL_list2587z00_3242;

					BgL_list2587z00_3242 = MAKE_PAIR(BgL_fromz00_91, BNIL);
					BgL_rz00_3235 =
						BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						(obj_t) (BgL_ftpz00_90), BGl_string3348z00zz__ftpz00,
						BgL_list2587z00_3242);
				}
				if (INPUT_PORTP(BgL_rz00_3235))
					{	/* Unsafe/ftp.scm 738 */
						obj_t BgL_zc3anonymousza32701ze3z83_3890;

						BgL_zc3anonymousza32701ze3z83_3890 =
							make_fx_procedure(BGl_zc3anonymousza32701ze3z83zz__ftpz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32701ze3z83_3890,
							(int) (((long) 0)), BgL_rz00_3235);
						return
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
							(BgL_dstz00_92, BgL_zc3anonymousza32701ze3z83_3890);
					}
				else
					{	/* Unsafe/ftp.scm 738 */
						return BFALSE;
					}
			}
		}
	}



/* _ftp-copy-file */
	obj_t BGl__ftpzd2copyzd2filez00zz__ftpz00(obj_t BgL_envz00_3891,
		obj_t BgL_ftpz00_3892, obj_t BgL_fromz00_3893, obj_t BgL_dstz00_3894)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 737 */
			{	/* Unsafe/ftp.scm 738 */
				obj_t BgL_auxz00_5995;

				obj_t BgL_auxz00_5988;

				BgL_ftpz00_bglt BgL_auxz00_5980;

				if (STRINGP(BgL_dstz00_3894))
					{	/* Unsafe/ftp.scm 738 */
						BgL_auxz00_5995 = BgL_dstz00_3894;
					}
				else
					{
						obj_t BgL_auxz00_5998;

						BgL_auxz00_5998 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 27750)), BGl_string3453z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_dstz00_3894);
						FAILURE(BgL_auxz00_5998, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_fromz00_3893))
					{	/* Unsafe/ftp.scm 738 */
						BgL_auxz00_5988 = BgL_fromz00_3893;
					}
				else
					{
						obj_t BgL_auxz00_5991;

						BgL_auxz00_5991 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 27750)), BGl_string3453z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_fromz00_3893);
						FAILURE(BgL_auxz00_5991, BFALSE, BFALSE);
					}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3892,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 738 */
						BgL_auxz00_5980 = (BgL_ftpz00_bglt) (BgL_ftpz00_3892);
					}
				else
					{
						obj_t BgL_auxz00_5984;

						BgL_auxz00_5984 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 27750)), BGl_string3453z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3892);
						FAILURE(BgL_auxz00_5984, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_auxz00_5980, BgL_auxz00_5988,
					BgL_auxz00_5995);
			}
		}
	}



/* <anonymous:2701> */
	obj_t BGl_zc3anonymousza32701ze3z83zz__ftpz00(obj_t BgL_envz00_3895)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 741 */
			{	/* Unsafe/ftp.scm 738 */
				obj_t BgL_rz00_3896;

				BgL_rz00_3896 = PROCEDURE_REF(BgL_envz00_3895, (int) (((long) 0)));
				{

					{	/* Unsafe/ftp.scm 738 */
						bool_t BgL_auxz00_6005;

						{	/* Unsafe/ftp.scm 738 */
							obj_t BgL_arg2702z00_3244;

							obj_t BgL_arg2703z00_3245;

							BgL_arg2702z00_3244 =
								BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_rz00_3896);
							{	/* Unsafe/ftp.scm 738 */
								obj_t BgL_res3105z00_3247;

								{	/* Unsafe/ftp.scm 738 */
									obj_t BgL_auxz00_6007;

									BgL_auxz00_6007 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3105z00_3247 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_6007);
								}
								BgL_arg2703z00_3245 = BgL_res3105z00_3247;
							}
							bgl_display_obj(BgL_arg2702z00_3244, BgL_arg2703z00_3245);
						}
						BgL_auxz00_6005 = ((bool_t) 1);
						return BBOOL(BgL_auxz00_6005);
					}
				}
			}
		}
	}



/* ftp-put-file */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_93, obj_t BgL_pathz00_94)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 748 */
			return
				BBOOL(BGl_ftpzd2storezd2zz__ftpz00(BgL_ftpz00_93, BgL_pathz00_94,
					BTRUE));
		}
	}



/* _ftp-put-file */
	obj_t BGl__ftpzd2putzd2filez00zz__ftpz00(obj_t BgL_envz00_3897,
		obj_t BgL_ftpz00_3898, obj_t BgL_pathz00_3899)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 748 */
			{	/* Unsafe/ftp.scm 749 */
				obj_t BgL_auxz00_6022;

				BgL_ftpz00_bglt BgL_auxz00_6014;

				if (STRINGP(BgL_pathz00_3899))
					{	/* Unsafe/ftp.scm 749 */
						BgL_auxz00_6022 = BgL_pathz00_3899;
					}
				else
					{
						obj_t BgL_auxz00_6025;

						BgL_auxz00_6025 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 28164)), BGl_string3454z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_pathz00_3899);
						FAILURE(BgL_auxz00_6025, BFALSE, BFALSE);
					}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ftpz00_3898,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 749 */
						BgL_auxz00_6014 = (BgL_ftpz00_bglt) (BgL_ftpz00_3898);
					}
				else
					{
						obj_t BgL_auxz00_6018;

						BgL_auxz00_6018 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 28164)), BGl_string3454z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_ftpz00_3898);
						FAILURE(BgL_auxz00_6018, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_auxz00_6014, BgL_auxz00_6022);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			{	/* Unsafe/ftp.scm 52 */
				obj_t BgL_arg2704z00_1811;

				obj_t BgL_arg2705z00_1812;

				obj_t BgL_arg2709z00_1816;

				obj_t BgL_arg2710z00_1817;

				BgL_arg2704z00_1811 = BGl_symbol3455z00zz__ftpz00;
				BgL_arg2705z00_1812 = BGl_objectz00zz__objectz00;
				{	/* Unsafe/ftp.scm 52 */
					obj_t BgL_arg2713z00_1822;

					obj_t BgL_arg2714z00_1823;

					obj_t BgL_arg2716z00_1824;

					BgL_arg2713z00_1822 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3457z00zz__ftpz00, BGl_z52ftpzd2cmdzd2envz52zz__ftpz00,
						BGl_z52ftpzd2cmdzd2setz12zd2envz92zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BFALSE);
					BgL_arg2714z00_1823 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3459z00zz__ftpz00, BGl_z52ftpzd2dtpzd2envz52zz__ftpz00,
						BGl_z52ftpzd2dtpzd2setz12zd2envz92zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BFALSE);
					BgL_arg2716z00_1824 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3461z00zz__ftpz00,
						BGl_z52ftpzd2passivezf3zd2envza1zz__ftpz00,
						BGl_z52ftpzd2passivezf3zd2setz12zd2envz61zz__ftpz00, BUNSPEC,
						((bool_t) 0), BFALSE, BTRUE);
					{	/* Unsafe/ftp.scm 52 */
						obj_t BgL_list2717z00_1825;

						{	/* Unsafe/ftp.scm 52 */
							obj_t BgL_arg2718z00_1826;

							{	/* Unsafe/ftp.scm 52 */
								obj_t BgL_arg2719z00_1827;

								BgL_arg2719z00_1827 = MAKE_PAIR(BgL_arg2716z00_1824, BNIL);
								BgL_arg2718z00_1826 =
									MAKE_PAIR(BgL_arg2714z00_1823, BgL_arg2719z00_1827);
							}
							BgL_list2717z00_1825 =
								MAKE_PAIR(BgL_arg2713z00_1822, BgL_arg2718z00_1826);
						}
						BgL_arg2709z00_1816 = BgL_list2717z00_1825;
					}
				}
				{	/* Unsafe/ftp.scm 52 */
					obj_t BgL_v2192z00_1828;

					BgL_v2192z00_1828 = create_vector((int) (((long) 0)));
					BgL_arg2710z00_1817 = BgL_v2192z00_1828;
				}
				BGl_z52ftpz52zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2704z00_1811,
					BgL_arg2705z00_1812, ((bool_t) 1), BGl_proc3463z00zz__ftpz00,
					BGl_proc3464z00zz__ftpz00, BGl_z52ftpzd2nilzd2envz52zz__ftpz00,
					BGl_z52ftpzf3zd2envz73zz__ftpz00, ((long) 534130919),
					BgL_arg2709z00_1816, BFALSE, BgL_arg2710z00_1817);
			}
			{	/* Unsafe/ftp.scm 57 */
				obj_t BgL_arg2720z00_1831;

				obj_t BgL_arg2721z00_1832;

				obj_t BgL_arg2726z00_1836;

				obj_t BgL_arg2727z00_1837;

				BgL_arg2720z00_1831 = BGl_symbol3465z00zz__ftpz00;
				BgL_arg2721z00_1832 = BGl_z52ftpz52zz__ftpz00;
				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_arg2728z00_1838;

					obj_t BgL_arg2729z00_1839;

					obj_t BgL_arg2730z00_1840;

					obj_t BgL_arg2731z00_1841;

					obj_t BgL_arg2732z00_1842;

					obj_t BgL_arg2733z00_1843;

					BgL_arg2728z00_1838 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3466z00zz__ftpz00, BGl_ftpzd2hostzd2envz00zz__ftpz00,
						BGl_ftpzd2hostzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BGl_string3468z00zz__ftpz00);
					BgL_arg2729z00_1839 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3341z00zz__ftpz00, BGl_ftpzd2portzd2envz00zz__ftpz00,
						BGl_ftpzd2portzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BINT(((long) 21)));
					BgL_arg2730z00_1840 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3469z00zz__ftpz00, BGl_ftpzd2motdzd2envz00zz__ftpz00,
						BGl_ftpzd2motdzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BGl_string3450z00zz__ftpz00);
					BgL_arg2731z00_1841 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3471z00zz__ftpz00, BGl_ftpzd2userzd2envz00zz__ftpz00,
						BGl_ftpzd2userzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BGl_string3448z00zz__ftpz00);
					BgL_arg2732z00_1842 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3473z00zz__ftpz00, BGl_ftpzd2passzd2envz00zz__ftpz00,
						BGl_ftpzd2passzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BGl_string3449z00zz__ftpz00);
					BgL_arg2733z00_1843 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3475z00zz__ftpz00, BGl_ftpzd2acctzd2envz00zz__ftpz00,
						BGl_ftpzd2acctzd2setz12zd2envzc0zz__ftpz00, BUNSPEC, ((bool_t) 0),
						BFALSE, BGl_string3450z00zz__ftpz00);
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_list2734z00_1844;

						{	/* Unsafe/ftp.scm 57 */
							obj_t BgL_arg2735z00_1845;

							{	/* Unsafe/ftp.scm 57 */
								obj_t BgL_arg2736z00_1846;

								{	/* Unsafe/ftp.scm 57 */
									obj_t BgL_arg2737z00_1847;

									{	/* Unsafe/ftp.scm 57 */
										obj_t BgL_arg2738z00_1848;

										{	/* Unsafe/ftp.scm 57 */
											obj_t BgL_arg2739z00_1849;

											BgL_arg2739z00_1849 =
												MAKE_PAIR(BgL_arg2733z00_1843, BNIL);
											BgL_arg2738z00_1848 =
												MAKE_PAIR(BgL_arg2732z00_1842, BgL_arg2739z00_1849);
										}
										BgL_arg2737z00_1847 =
											MAKE_PAIR(BgL_arg2731z00_1841, BgL_arg2738z00_1848);
									}
									BgL_arg2736z00_1846 =
										MAKE_PAIR(BgL_arg2730z00_1840, BgL_arg2737z00_1847);
								}
								BgL_arg2735z00_1845 =
									MAKE_PAIR(BgL_arg2729z00_1839, BgL_arg2736z00_1846);
							}
							BgL_list2734z00_1844 =
								MAKE_PAIR(BgL_arg2728z00_1838, BgL_arg2735z00_1845);
						}
						BgL_arg2726z00_1836 = BgL_list2734z00_1844;
				}}
				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_v2193z00_1850;

					BgL_v2193z00_1850 = create_vector((int) (((long) 0)));
					BgL_arg2727z00_1837 = BgL_v2193z00_1850;
				}
				BGl_ftpz00zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2720z00_1831,
					BgL_arg2721z00_1832, ((bool_t) 0), BGl_makezd2ftpzd2envz00zz__ftpz00,
					BGl_z52allocatezd2ftpzd2envz52zz__ftpz00,
					BGl_ftpzd2nilzd2envz00zz__ftpz00, BGl_ftpzf3zd2envz21zz__ftpz00,
					((long) 238682283), BgL_arg2726z00_1836, BFALSE, BgL_arg2727z00_1837);
			}
			{	/* Unsafe/ftp.scm 64 */
				obj_t BgL_arg2740z00_1851;

				obj_t BgL_arg2741z00_1852;

				obj_t BgL_arg2747z00_1857;

				BgL_arg2740z00_1851 = BGl_symbol3477z00zz__ftpz00;
				BgL_arg2741z00_1852 = BGl_z62errorz62zz__objectz00;
				{	/* Unsafe/ftp.scm 64 */
					obj_t BgL_v2194z00_1859;

					BgL_v2194z00_1859 = create_vector((int) (((long) 0)));
					BgL_arg2747z00_1857 = BgL_v2194z00_1859;
				}
				BGl_z62ftpzd2errorzb0zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2740z00_1851,
					BgL_arg2741z00_1852, ((bool_t) 0),
					BGl_makezd2z62ftpzd2errorzd2envzb0zz__ftpz00,
					BGl_z52allocatezd2z62ftpzd2errorzd2envze2zz__ftpz00,
					BGl_z62ftpzd2errorzd2nilzd2envzb0zz__ftpz00,
					BGl_z62ftpzd2errorzf3zd2envz91zz__ftpz00, ((long) 403150408), BNIL,
					BFALSE, BgL_arg2747z00_1857);
			}
			{	/* Unsafe/ftp.scm 65 */
				obj_t BgL_arg2749z00_1860;

				obj_t BgL_arg2750z00_1861;

				obj_t BgL_arg2756z00_1866;

				BgL_arg2749z00_1860 = BGl_symbol3479z00zz__ftpz00;
				BgL_arg2750z00_1861 = BGl_z62iozd2parsezd2errorz62zz__objectz00;
				{	/* Unsafe/ftp.scm 65 */
					obj_t BgL_v2195z00_1868;

					BgL_v2195z00_1868 = create_vector((int) (((long) 0)));
					BgL_arg2756z00_1866 = BgL_v2195z00_1868;
				}
				BGl_z62ftpzd2parsezd2errorz62zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2749z00_1860,
					BgL_arg2750z00_1861, ((bool_t) 0),
					BGl_makezd2z62ftpzd2parsezd2errorzd2envz62zz__ftpz00,
					BGl_z52allocatezd2z62ftpzd2parsezd2errorzd2envz30zz__ftpz00,
					BGl_z62ftpzd2parsezd2errorzd2nilzd2envz62zz__ftpz00,
					BGl_z62ftpzd2parsezd2errorzf3zd2envz43zz__ftpz00, ((long) 78714664),
					BNIL, BFALSE, BgL_arg2756z00_1866);
			}
			BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00 = BUNSPEC;
			BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00 = BUNSPEC;
			BGl_z52thezd2ftpzd2nilz52zz__ftpz00 = BUNSPEC;
			return (BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00 = BUNSPEC, BUNSPEC);
		}
	}



/* <anonymous:2712> */
	obj_t BGl_zc3anonymousza32712ze3z83zz__ftpz00(obj_t BgL_envz00_3902,
		obj_t BgL_xz00_3903)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{
				obj_t BgL_xz00_1820;

				BgL_xz00_1820 = BgL_xz00_3903;
				return
					BGl_errorz00zz__errorz00(BGl_symbol3481z00zz__ftpz00,
					BGl_string3483z00zz__ftpz00, BGl_symbol3455z00zz__ftpz00);
			}
		}
	}



/* <anonymous:2711> */
	obj_t BGl_zc3anonymousza32711ze3z83zz__ftpz00(obj_t BgL_envz00_3904,
		obj_t BgL_xz00_3905)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{
				obj_t BgL_xz00_1818;

				BgL_xz00_1818 = BgL_xz00_3905;
				return
					BGl_errorz00zz__errorz00(BGl_symbol3455z00zz__ftpz00,
					BGl_string3484z00zz__ftpz00, BGl_symbol3455z00zz__ftpz00);
			}
		}
	}



/* &ftp-parse-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62ftpzd2parsezd2errorzf3z91zz__ftpz00(obj_t
		BgL_obj2065z00_95)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2065z00_95,
				BGl_z62ftpzd2parsezd2errorz62zz__ftpz00);
		}
	}



/* _&ftp-parse-error? */
	obj_t BGl__z62ftpzd2parsezd2errorzf3z91zz__ftpz00(obj_t BgL_envz00_3988,
		obj_t BgL_obj2065z00_3989)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2065z00_3989,
					BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
		}
	}



/* make-&ftp-parse-error */
	BGL_EXPORTED_DEF BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00(obj_t BgL_fname2016z00_99,
		obj_t BgL_location2017z00_100, obj_t BgL_stack2018z00_101,
		obj_t BgL_proc2019z00_102, obj_t BgL_msg2020z00_103,
		obj_t BgL_obj2021z00_104)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2022z00_3256;

				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3110z00_3261;

					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2038z00_3257;

						BgL_new2038z00_3257 =
							((BgL_z62ftpzd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62ftpzd2parsezd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2038z00_3257),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
						{	/* Unsafe/ftp.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_6070;

							BgL_auxz00_6070 = (BgL_objectz00_bglt) (BgL_new2038z00_3257);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6070, BFALSE);
						}
						BgL_res3110z00_3261 = BgL_new2038z00_3257;
					}
					BgL_new2022z00_3256 = BgL_res3110z00_3261;
				}
				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3111z00_3275;

					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2030z00_3262;

						BgL_new2030z00_3262 = BgL_new2022z00_3256;
						{	/* Unsafe/ftp.scm 65 */
							obj_t BgL_fname2024z00_3269;

							obj_t BgL_location2025z00_3270;

							obj_t BgL_stack2026z00_3271;

							obj_t BgL_proc2027z00_3272;

							obj_t BgL_msg2028z00_3273;

							obj_t BgL_obj2029z00_3274;

							BgL_fname2024z00_3269 = BgL_fname2016z00_99;
							BgL_location2025z00_3270 = BgL_location2017z00_100;
							BgL_stack2026z00_3271 = BgL_stack2018z00_101;
							BgL_proc2027z00_3272 = BgL_proc2019z00_102;
							BgL_msg2028z00_3273 = BgL_msg2020z00_103;
							BgL_obj2029z00_3274 = BgL_obj2021z00_104;
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_fnamez00) =
								((obj_t) BgL_fname2024z00_3269), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_locationz00) =
								((obj_t) BgL_location2025z00_3270), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_stackz00) =
								((obj_t) BgL_stack2026z00_3271), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_procz00) =
								((obj_t) BgL_proc2027z00_3272), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_msgz00) =
								((obj_t) BgL_msg2028z00_3273), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_3262))->BgL_objz00) =
								((obj_t) BgL_obj2029z00_3274), BUNSPEC);
							BgL_res3111z00_3275 = BgL_new2030z00_3262;
					}} BgL_res3111z00_3275;
				}
				return BgL_new2022z00_3256;
			}
		}
	}



/* _make-&ftp-parse-error */
	obj_t BGl__makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00(obj_t BgL_envz00_3979,
		obj_t BgL_fname2016z00_3980, obj_t BgL_location2017z00_3981,
		obj_t BgL_stack2018z00_3982, obj_t BgL_proc2019z00_3983,
		obj_t BgL_msg2020z00_3984, obj_t BgL_obj2021z00_3985)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			return
				(obj_t) (BGl_makezd2z62ftpzd2parsezd2errorzb0zz__ftpz00
				(BgL_fname2016z00_3980, BgL_location2017z00_3981, BgL_stack2018z00_3982,
					BgL_proc2019z00_3983, BgL_msg2020z00_3984, BgL_obj2021z00_3985));
		}
	}



/* fill-&ftp-parse-error! */
	BGL_EXPORTED_DEF BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_fillzd2z62ftpzd2parsezd2errorz12za2zz__ftpz00
		(BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2030z00_105,
		obj_t BgL_fname2024z00_106, obj_t BgL_location2025z00_107,
		obj_t BgL_stack2026z00_108, obj_t BgL_proc2027z00_109,
		obj_t BgL_msg2028z00_110, obj_t BgL_obj2029z00_111)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				obj_t BgL_fname2024z00_4314;

				obj_t BgL_location2025z00_4315;

				obj_t BgL_stack2026z00_4316;

				obj_t BgL_proc2027z00_4317;

				obj_t BgL_msg2028z00_4318;

				obj_t BgL_obj2029z00_4319;

				BgL_fname2024z00_4314 = BgL_fname2024z00_106;
				BgL_location2025z00_4315 = BgL_location2025z00_107;
				BgL_stack2026z00_4316 = BgL_stack2026z00_108;
				BgL_proc2027z00_4317 = BgL_proc2027z00_109;
				BgL_msg2028z00_4318 = BgL_msg2028z00_110;
				BgL_obj2029z00_4319 = BgL_obj2029z00_111;
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_fnamez00) = ((obj_t) BgL_fname2024z00_4314), BUNSPEC);
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_locationz00) = ((obj_t) BgL_location2025z00_4315), BUNSPEC);
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_stackz00) = ((obj_t) BgL_stack2026z00_4316), BUNSPEC);
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_procz00) = ((obj_t) BgL_proc2027z00_4317), BUNSPEC);
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_msgz00) = ((obj_t) BgL_msg2028z00_4318), BUNSPEC);
				((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_new2030z00_105))->
						BgL_objz00) = ((obj_t) BgL_obj2029z00_4319), BUNSPEC);
				return BgL_new2030z00_105;
			}
		}
	}



/* _fill-&ftp-parse-error! */
	obj_t BGl__fillzd2z62ftpzd2parsezd2errorz12za2zz__ftpz00(obj_t
		BgL_envz00_3990, obj_t BgL_new2030z00_3991, obj_t BgL_fname2024z00_3992,
		obj_t BgL_location2025z00_3993, obj_t BgL_stack2026z00_3994,
		obj_t BgL_proc2027z00_3995, obj_t BgL_msg2028z00_3996,
		obj_t BgL_obj2029z00_3997)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_auxz00_6087;

				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3524z00_4334;

					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2030z00_4321;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2030z00_3991,
								BGl_z62ftpzd2parsezd2errorz62zz__ftpz00))
							{	/* Unsafe/ftp.scm 65 */
								BgL_new2030z00_4321 =
									(BgL_z62ftpzd2parsezd2errorz62_bglt) (BgL_new2030z00_3991);
							}
						else
							{
								obj_t BgL_auxz00_6091;

								BgL_auxz00_6091 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 2019)), BGl_string3485z00zz__ftpz00,
									BGl_string3480z00zz__ftpz00, BgL_new2030z00_3991);
								FAILURE(BgL_auxz00_6091, BFALSE, BFALSE);
							}
						{	/* Unsafe/ftp.scm 65 */
							obj_t BgL_fname2024z00_4328;

							obj_t BgL_location2025z00_4329;

							obj_t BgL_stack2026z00_4330;

							obj_t BgL_proc2027z00_4331;

							obj_t BgL_msg2028z00_4332;

							obj_t BgL_obj2029z00_4333;

							BgL_fname2024z00_4328 = BgL_fname2024z00_3992;
							BgL_location2025z00_4329 = BgL_location2025z00_3993;
							BgL_stack2026z00_4330 = BgL_stack2026z00_3994;
							BgL_proc2027z00_4331 = BgL_proc2027z00_3995;
							BgL_msg2028z00_4332 = BgL_msg2028z00_3996;
							BgL_obj2029z00_4333 = BgL_obj2029z00_3997;
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_fnamez00) =
								((obj_t) BgL_fname2024z00_4328), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_locationz00) =
								((obj_t) BgL_location2025z00_4329), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_stackz00) =
								((obj_t) BgL_stack2026z00_4330), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_procz00) =
								((obj_t) BgL_proc2027z00_4331), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_msgz00) =
								((obj_t) BgL_msg2028z00_4332), BUNSPEC);
							((((BgL_z62ftpzd2parsezd2errorz62_bglt)
										CREF(BgL_new2030z00_4321))->BgL_objz00) =
								((obj_t) BgL_obj2029z00_4333), BUNSPEC);
							BgL_res3524z00_4334 = BgL_new2030z00_4321;
					}}
					BgL_auxz00_6087 = BgL_res3524z00_4334;
				}
				return (obj_t) (BgL_auxz00_6087);
			}
		}
	}



/* %allocate-&ftp-parse-error */
	BGL_EXPORTED_DEF BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z52allocatezd2z62ftpzd2parsezd2errorze2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2038z00_4335;

				BgL_new2038z00_4335 =
					((BgL_z62ftpzd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62ftpzd2parsezd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2038z00_4335),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
				{	/* Unsafe/ftp.scm 65 */
					BgL_objectz00_bglt BgL_auxz00_6106;

					BgL_auxz00_6106 = (BgL_objectz00_bglt) (BgL_new2038z00_4335);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6106, BFALSE);
				}
				return BgL_new2038z00_4335;
			}
		}
	}



/* _%allocate-&ftp-parse-error */
	obj_t BGl__z52allocatezd2z62ftpzd2parsezd2errorze2zz__ftpz00(obj_t
		BgL_envz00_3986)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_auxz00_6109;

				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3525z00_4339;

					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2038z00_4337;

						BgL_new2038z00_4337 =
							((BgL_z62ftpzd2parsezd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62ftpzd2parsezd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2038z00_4337),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
						{	/* Unsafe/ftp.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_6114;

							BgL_auxz00_6114 = (BgL_objectz00_bglt) (BgL_new2038z00_4337);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6114, BFALSE);
						}
						BgL_res3525z00_4339 = BgL_new2038z00_4337;
					}
					BgL_auxz00_6109 = BgL_res3525z00_4339;
				}
				return (obj_t) (BgL_auxz00_6109);
			}
		}
	}



/* &ftp-parse-error-nil */
	BGL_EXPORTED_DEF BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			if ((BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00 == BUNSPEC))
				{	/* Unsafe/ftp.scm 65 */
					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3112z00_3290;

						{	/* Unsafe/ftp.scm 65 */
							BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2038z00_3286;

							BgL_new2038z00_3286 =
								((BgL_z62ftpzd2parsezd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62ftpzd2parsezd2errorz62_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2038z00_3286),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
							{	/* Unsafe/ftp.scm 65 */
								BgL_objectz00_bglt BgL_auxz00_6124;

								BgL_auxz00_6124 = (BgL_objectz00_bglt) (BgL_new2038z00_3286);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6124, BFALSE);
							}
							BgL_res3112z00_3290 = BgL_new2038z00_3286;
						}
						BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00 =
							(obj_t) (BgL_res3112z00_3290);
					}
					{	/* Unsafe/ftp.scm 65 */
						BgL_z62ftpzd2parsezd2errorz62_bglt BgL_res3113z00_3304;

						{	/* Unsafe/ftp.scm 65 */
							BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new2030z00_3291;

							BgL_new2030z00_3291 =
								(BgL_z62ftpzd2parsezd2errorz62_bglt)
								(BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00);
							{	/* Unsafe/ftp.scm 65 */
								obj_t BgL_fname2024z00_3298;

								obj_t BgL_location2025z00_3299;

								obj_t BgL_stack2026z00_3300;

								obj_t BgL_proc2027z00_3301;

								obj_t BgL_msg2028z00_3302;

								obj_t BgL_obj2029z00_3303;

								BgL_fname2024z00_3298 = BUNSPEC;
								BgL_location2025z00_3299 = BUNSPEC;
								BgL_stack2026z00_3300 = BUNSPEC;
								BgL_proc2027z00_3301 = BUNSPEC;
								BgL_msg2028z00_3302 = BUNSPEC;
								BgL_obj2029z00_3303 = BUNSPEC;
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_fnamez00) =
									((obj_t) BgL_fname2024z00_3298), BUNSPEC);
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_locationz00) =
									((obj_t) BgL_location2025z00_3299), BUNSPEC);
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_stackz00) =
									((obj_t) BgL_stack2026z00_3300), BUNSPEC);
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_procz00) =
									((obj_t) BgL_proc2027z00_3301), BUNSPEC);
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_msgz00) =
									((obj_t) BgL_msg2028z00_3302), BUNSPEC);
								((((BgL_z62ftpzd2parsezd2errorz62_bglt)
											CREF(BgL_new2030z00_3291))->BgL_objz00) =
									((obj_t) BgL_obj2029z00_3303), BUNSPEC);
								BgL_res3113z00_3304 = BgL_new2030z00_3291;
						}}
						(obj_t) (BgL_res3113z00_3304);
				}}
			else
				{	/* Unsafe/ftp.scm 65 */
					BFALSE;
				}
			return
				(BgL_z62ftpzd2parsezd2errorz62_bglt)
				(BGl_z52thezd2z62ftpzd2parsezd2errorzd2nilz30zz__ftpz00);
		}
	}



/* _&ftp-parse-error-nil */
	obj_t BGl__z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00(obj_t BgL_envz00_3987)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			return (obj_t) (BGl_z62ftpzd2parsezd2errorzd2nilzb0zz__ftpz00());
		}
	}



/* &ftp-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62ftpzd2errorzf3z43zz__ftpz00(obj_t
		BgL_obj2003z00_112)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2003z00_112,
				BGl_z62ftpzd2errorzb0zz__ftpz00);
		}
	}



/* _&ftp-error? */
	obj_t BGl__z62ftpzd2errorzf3z43zz__ftpz00(obj_t BgL_envz00_3977,
		obj_t BgL_obj2003z00_3978)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2003z00_3978,
					BGl_z62ftpzd2errorzb0zz__ftpz00));
		}
	}



/* make-&ftp-error */
	BGL_EXPORTED_DEF BgL_z62ftpzd2errorzb0_bglt
		BGl_makezd2z62ftpzd2errorz62zz__ftpz00(obj_t BgL_fname1954z00_116,
		obj_t BgL_location1955z00_117, obj_t BgL_stack1956z00_118,
		obj_t BgL_proc1957z00_119, obj_t BgL_msg1958z00_120,
		obj_t BgL_obj1959z00_121)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_new1960z00_3305;

				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_res3114z00_3310;

					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_3306;

						BgL_new1976z00_3306 =
							((BgL_z62ftpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62ftpzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1976z00_3306),
							BGl_classzd2numzd2zz__objectz00(BGl_z62ftpzd2errorzb0zz__ftpz00));
						{	/* Unsafe/ftp.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_6146;

							BgL_auxz00_6146 = (BgL_objectz00_bglt) (BgL_new1976z00_3306);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6146, BFALSE);
						}
						BgL_res3114z00_3310 = BgL_new1976z00_3306;
					}
					BgL_new1960z00_3305 = BgL_res3114z00_3310;
				}
				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_res3115z00_3324;

					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_3311;

						BgL_new1968z00_3311 = BgL_new1960z00_3305;
						{	/* Unsafe/ftp.scm 64 */
							obj_t BgL_fname1962z00_3318;

							obj_t BgL_location1963z00_3319;

							obj_t BgL_stack1964z00_3320;

							obj_t BgL_proc1965z00_3321;

							obj_t BgL_msg1966z00_3322;

							obj_t BgL_obj1967z00_3323;

							BgL_fname1962z00_3318 = BgL_fname1954z00_116;
							BgL_location1963z00_3319 = BgL_location1955z00_117;
							BgL_stack1964z00_3320 = BgL_stack1956z00_118;
							BgL_proc1965z00_3321 = BgL_proc1957z00_119;
							BgL_msg1966z00_3322 = BgL_msg1958z00_120;
							BgL_obj1967z00_3323 = BgL_obj1959z00_121;
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_fnamez00) = ((obj_t) BgL_fname1962z00_3318), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_locationz00) =
								((obj_t) BgL_location1963z00_3319), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_stackz00) = ((obj_t) BgL_stack1964z00_3320), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_procz00) = ((obj_t) BgL_proc1965z00_3321), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_msgz00) = ((obj_t) BgL_msg1966z00_3322), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3311))->
									BgL_objz00) = ((obj_t) BgL_obj1967z00_3323), BUNSPEC);
							BgL_res3115z00_3324 = BgL_new1968z00_3311;
					}} BgL_res3115z00_3324;
				}
				return BgL_new1960z00_3305;
			}
		}
	}



/* _make-&ftp-error */
	obj_t BGl__makezd2z62ftpzd2errorz62zz__ftpz00(obj_t BgL_envz00_3968,
		obj_t BgL_fname1954z00_3969, obj_t BgL_location1955z00_3970,
		obj_t BgL_stack1956z00_3971, obj_t BgL_proc1957z00_3972,
		obj_t BgL_msg1958z00_3973, obj_t BgL_obj1959z00_3974)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			return
				(obj_t) (BGl_makezd2z62ftpzd2errorz62zz__ftpz00(BgL_fname1954z00_3969,
					BgL_location1955z00_3970, BgL_stack1956z00_3971, BgL_proc1957z00_3972,
					BgL_msg1958z00_3973, BgL_obj1959z00_3974));
		}
	}



/* fill-&ftp-error! */
	BGL_EXPORTED_DEF BgL_z62ftpzd2errorzb0_bglt
		BGl_fillzd2z62ftpzd2errorz12z70zz__ftpz00(BgL_z62ftpzd2errorzb0_bglt
		BgL_new1968z00_122, obj_t BgL_fname1962z00_123,
		obj_t BgL_location1963z00_124, obj_t BgL_stack1964z00_125,
		obj_t BgL_proc1965z00_126, obj_t BgL_msg1966z00_127,
		obj_t BgL_obj1967z00_128)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				obj_t BgL_fname1962z00_4341;

				obj_t BgL_location1963z00_4342;

				obj_t BgL_stack1964z00_4343;

				obj_t BgL_proc1965z00_4344;

				obj_t BgL_msg1966z00_4345;

				obj_t BgL_obj1967z00_4346;

				BgL_fname1962z00_4341 = BgL_fname1962z00_123;
				BgL_location1963z00_4342 = BgL_location1963z00_124;
				BgL_stack1964z00_4343 = BgL_stack1964z00_125;
				BgL_proc1965z00_4344 = BgL_proc1965z00_126;
				BgL_msg1966z00_4345 = BgL_msg1966z00_127;
				BgL_obj1967z00_4346 = BgL_obj1967z00_128;
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->
						BgL_fnamez00) = ((obj_t) BgL_fname1962z00_4341), BUNSPEC);
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->
						BgL_locationz00) = ((obj_t) BgL_location1963z00_4342), BUNSPEC);
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->
						BgL_stackz00) = ((obj_t) BgL_stack1964z00_4343), BUNSPEC);
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->
						BgL_procz00) = ((obj_t) BgL_proc1965z00_4344), BUNSPEC);
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->BgL_msgz00) =
					((obj_t) BgL_msg1966z00_4345), BUNSPEC);
				((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_122))->BgL_objz00) =
					((obj_t) BgL_obj1967z00_4346), BUNSPEC);
				return BgL_new1968z00_122;
			}
		}
	}



/* _fill-&ftp-error! */
	obj_t BGl__fillzd2z62ftpzd2errorz12z70zz__ftpz00(obj_t BgL_envz00_3998,
		obj_t BgL_new1968z00_3999, obj_t BgL_fname1962z00_4000,
		obj_t BgL_location1963z00_4001, obj_t BgL_stack1964z00_4002,
		obj_t BgL_proc1965z00_4003, obj_t BgL_msg1966z00_4004,
		obj_t BgL_obj1967z00_4005)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_auxz00_6163;

				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_res3526z00_4361;

					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_4348;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1968z00_3999,
								BGl_z62ftpzd2errorzb0zz__ftpz00))
							{	/* Unsafe/ftp.scm 64 */
								BgL_new1968z00_4348 =
									(BgL_z62ftpzd2errorzb0_bglt) (BgL_new1968z00_3999);
							}
						else
							{
								obj_t BgL_auxz00_6167;

								BgL_auxz00_6167 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1988)), BGl_string3486z00zz__ftpz00,
									BGl_string3478z00zz__ftpz00, BgL_new1968z00_3999);
								FAILURE(BgL_auxz00_6167, BFALSE, BFALSE);
							}
						{	/* Unsafe/ftp.scm 64 */
							obj_t BgL_fname1962z00_4355;

							obj_t BgL_location1963z00_4356;

							obj_t BgL_stack1964z00_4357;

							obj_t BgL_proc1965z00_4358;

							obj_t BgL_msg1966z00_4359;

							obj_t BgL_obj1967z00_4360;

							BgL_fname1962z00_4355 = BgL_fname1962z00_4000;
							BgL_location1963z00_4356 = BgL_location1963z00_4001;
							BgL_stack1964z00_4357 = BgL_stack1964z00_4002;
							BgL_proc1965z00_4358 = BgL_proc1965z00_4003;
							BgL_msg1966z00_4359 = BgL_msg1966z00_4004;
							BgL_obj1967z00_4360 = BgL_obj1967z00_4005;
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_fnamez00) = ((obj_t) BgL_fname1962z00_4355), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_locationz00) =
								((obj_t) BgL_location1963z00_4356), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_stackz00) = ((obj_t) BgL_stack1964z00_4357), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_procz00) = ((obj_t) BgL_proc1965z00_4358), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_msgz00) = ((obj_t) BgL_msg1966z00_4359), BUNSPEC);
							((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_4348))->
									BgL_objz00) = ((obj_t) BgL_obj1967z00_4360), BUNSPEC);
							BgL_res3526z00_4361 = BgL_new1968z00_4348;
					}}
					BgL_auxz00_6163 = BgL_res3526z00_4361;
				}
				return (obj_t) (BgL_auxz00_6163);
			}
		}
	}



/* %allocate-&ftp-error */
	BGL_EXPORTED_DEF BgL_z62ftpzd2errorzb0_bglt
		BGl_z52allocatezd2z62ftpzd2errorz30zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_4362;

				BgL_new1976z00_4362 =
					((BgL_z62ftpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62ftpzd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1976z00_4362),
					BGl_classzd2numzd2zz__objectz00(BGl_z62ftpzd2errorzb0zz__ftpz00));
				{	/* Unsafe/ftp.scm 64 */
					BgL_objectz00_bglt BgL_auxz00_6182;

					BgL_auxz00_6182 = (BgL_objectz00_bglt) (BgL_new1976z00_4362);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6182, BFALSE);
				}
				return BgL_new1976z00_4362;
			}
		}
	}



/* _%allocate-&ftp-error */
	obj_t BGl__z52allocatezd2z62ftpzd2errorz30zz__ftpz00(obj_t BgL_envz00_3975)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_auxz00_6185;

				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_res3527z00_4366;

					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_4364;

						BgL_new1976z00_4364 =
							((BgL_z62ftpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62ftpzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1976z00_4364),
							BGl_classzd2numzd2zz__objectz00(BGl_z62ftpzd2errorzb0zz__ftpz00));
						{	/* Unsafe/ftp.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_6190;

							BgL_auxz00_6190 = (BgL_objectz00_bglt) (BgL_new1976z00_4364);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6190, BFALSE);
						}
						BgL_res3527z00_4366 = BgL_new1976z00_4364;
					}
					BgL_auxz00_6185 = BgL_res3527z00_4366;
				}
				return (obj_t) (BgL_auxz00_6185);
			}
		}
	}



/* &ftp-error-nil */
	BGL_EXPORTED_DEF BgL_z62ftpzd2errorzb0_bglt
		BGl_z62ftpzd2errorzd2nilz62zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			if ((BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00 == BUNSPEC))
				{	/* Unsafe/ftp.scm 64 */
					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_res3116z00_3339;

						{	/* Unsafe/ftp.scm 64 */
							BgL_z62ftpzd2errorzb0_bglt BgL_new1976z00_3335;

							BgL_new1976z00_3335 =
								((BgL_z62ftpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62ftpzd2errorzb0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1976z00_3335),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62ftpzd2errorzb0zz__ftpz00));
							{	/* Unsafe/ftp.scm 64 */
								BgL_objectz00_bglt BgL_auxz00_6200;

								BgL_auxz00_6200 = (BgL_objectz00_bglt) (BgL_new1976z00_3335);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6200, BFALSE);
							}
							BgL_res3116z00_3339 = BgL_new1976z00_3335;
						}
						BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00 =
							(obj_t) (BgL_res3116z00_3339);
					}
					{	/* Unsafe/ftp.scm 64 */
						BgL_z62ftpzd2errorzb0_bglt BgL_res3117z00_3353;

						{	/* Unsafe/ftp.scm 64 */
							BgL_z62ftpzd2errorzb0_bglt BgL_new1968z00_3340;

							BgL_new1968z00_3340 =
								(BgL_z62ftpzd2errorzb0_bglt)
								(BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00);
							{	/* Unsafe/ftp.scm 64 */
								obj_t BgL_fname1962z00_3347;

								obj_t BgL_location1963z00_3348;

								obj_t BgL_stack1964z00_3349;

								obj_t BgL_proc1965z00_3350;

								obj_t BgL_msg1966z00_3351;

								obj_t BgL_obj1967z00_3352;

								BgL_fname1962z00_3347 = BUNSPEC;
								BgL_location1963z00_3348 = BUNSPEC;
								BgL_stack1964z00_3349 = BUNSPEC;
								BgL_proc1965z00_3350 = BUNSPEC;
								BgL_msg1966z00_3351 = BUNSPEC;
								BgL_obj1967z00_3352 = BUNSPEC;
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_fnamez00) = ((obj_t) BgL_fname1962z00_3347), BUNSPEC);
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_locationz00) =
									((obj_t) BgL_location1963z00_3348), BUNSPEC);
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_stackz00) = ((obj_t) BgL_stack1964z00_3349), BUNSPEC);
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_procz00) = ((obj_t) BgL_proc1965z00_3350), BUNSPEC);
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_msgz00) = ((obj_t) BgL_msg1966z00_3351), BUNSPEC);
								((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_new1968z00_3340))->
										BgL_objz00) = ((obj_t) BgL_obj1967z00_3352), BUNSPEC);
								BgL_res3117z00_3353 = BgL_new1968z00_3340;
						}}
						(obj_t) (BgL_res3117z00_3353);
				}}
			else
				{	/* Unsafe/ftp.scm 64 */
					BFALSE;
				}
			return
				(BgL_z62ftpzd2errorzb0_bglt)
				(BGl_z52thezd2z62ftpzd2errorzd2nilze2zz__ftpz00);
		}
	}



/* _&ftp-error-nil */
	obj_t BGl__z62ftpzd2errorzd2nilz62zz__ftpz00(obj_t BgL_envz00_3976)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			return (obj_t) (BGl_z62ftpzd2errorzd2nilz62zz__ftpz00());
		}
	}



/* ftp? */
	BGL_EXPORTED_DEF bool_t BGl_ftpzf3zf3zz__ftpz00(obj_t BgL_obj1941z00_129)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1941z00_129, BGl_ftpz00zz__ftpz00);
		}
	}



/* _ftp? */
	obj_t BGl__ftpzf3zf3zz__ftpz00(obj_t BgL_envz00_3966,
		obj_t BgL_obj1941z00_3967)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1941z00_3967,
					BGl_ftpz00zz__ftpz00));
		}
	}



/* make-ftp */
	BGL_EXPORTED_DEF BgL_ftpz00_bglt BGl_makezd2ftpzd2zz__ftpz00(obj_t
		BgL_cmd1870z00_133, obj_t BgL_dtp1871z00_134,
		bool_t BgL_passivezf31872zf3_135, obj_t BgL_host1873z00_136,
		obj_t BgL_port1874z00_137, obj_t BgL_motd1875z00_138,
		obj_t BgL_user1876z00_139, obj_t BgL_pass1877z00_140,
		obj_t BgL_acct1878z00_141)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_new1879z00_3354;

				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_res3118z00_3359;

					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_new1901z00_3355;

						BgL_new1901z00_3355 =
							((BgL_ftpz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ftpz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1901z00_3355),
							BGl_classzd2numzd2zz__objectz00(BGl_ftpz00zz__ftpz00));
						{	/* Unsafe/ftp.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_6222;

							BgL_auxz00_6222 = (BgL_objectz00_bglt) (BgL_new1901z00_3355);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6222, BFALSE);
						}
						BgL_res3118z00_3359 = BgL_new1901z00_3355;
					}
					BgL_new1879z00_3354 = BgL_res3118z00_3359;
				}
				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_res3119z00_3379;

					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_new1890z00_3360;

						BgL_new1890z00_3360 = BgL_new1879z00_3354;
						{	/* Unsafe/ftp.scm 57 */
							obj_t BgL_cmd1881z00_3370;

							obj_t BgL_dtp1882z00_3371;

							bool_t BgL_passivezf31883zf3_3372;

							obj_t BgL_host1884z00_3373;

							obj_t BgL_port1885z00_3374;

							obj_t BgL_motd1886z00_3375;

							obj_t BgL_user1887z00_3376;

							obj_t BgL_pass1888z00_3377;

							obj_t BgL_acct1889z00_3378;

							BgL_cmd1881z00_3370 = BgL_cmd1870z00_133;
							BgL_dtp1882z00_3371 = BgL_dtp1871z00_134;
							BgL_passivezf31883zf3_3372 = BgL_passivezf31872zf3_135;
							BgL_host1884z00_3373 = BgL_host1873z00_136;
							BgL_port1885z00_3374 = BgL_port1874z00_137;
							BgL_motd1886z00_3375 = BgL_motd1875z00_138;
							BgL_user1887z00_3376 = BgL_user1876z00_139;
							BgL_pass1888z00_3377 = BgL_pass1877z00_140;
							BgL_acct1889z00_3378 = BgL_acct1878z00_141;
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_cmdz00) =
								((obj_t) BgL_cmd1881z00_3370), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_dtpz00) =
								((obj_t) BgL_dtp1882z00_3371), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->
									BgL_passivezf3zf3) =
								((bool_t) BgL_passivezf31883zf3_3372), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_hostz00) =
								((obj_t) BgL_host1884z00_3373), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_portz00) =
								((obj_t) BgL_port1885z00_3374), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_motdz00) =
								((obj_t) BgL_motd1886z00_3375), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_userz00) =
								((obj_t) BgL_user1887z00_3376), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_passz00) =
								((obj_t) BgL_pass1888z00_3377), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3360))->BgL_acctz00) =
								((obj_t) BgL_acct1889z00_3378), BUNSPEC);
							BgL_res3119z00_3379 = BgL_new1890z00_3360;
					}} BgL_res3119z00_3379;
				}
				return BgL_new1879z00_3354;
			}
		}
	}



/* _make-ftp */
	obj_t BGl__makezd2ftpzd2zz__ftpz00(obj_t BgL_envz00_3924,
		obj_t BgL_cmd1870z00_3925, obj_t BgL_dtp1871z00_3926,
		obj_t BgL_passivezf31872zf3_3927, obj_t BgL_host1873z00_3928,
		obj_t BgL_port1874z00_3929, obj_t BgL_motd1875z00_3930,
		obj_t BgL_user1876z00_3931, obj_t BgL_pass1877z00_3932,
		obj_t BgL_acct1878z00_3933)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_auxz00_6234;

				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_auxz00_6271;

					obj_t BgL_auxz00_6264;

					obj_t BgL_auxz00_6257;

					obj_t BgL_auxz00_6250;

					obj_t BgL_auxz00_6243;

					obj_t BgL_auxz00_6235;

					if (STRINGP(BgL_acct1878z00_3933))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6271 = BgL_acct1878z00_3933;
						}
					else
						{
							obj_t BgL_auxz00_6274;

							BgL_auxz00_6274 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_acct1878z00_3933);
							FAILURE(BgL_auxz00_6274, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_pass1877z00_3932))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6264 = BgL_pass1877z00_3932;
						}
					else
						{
							obj_t BgL_auxz00_6267;

							BgL_auxz00_6267 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_pass1877z00_3932);
							FAILURE(BgL_auxz00_6267, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_user1876z00_3931))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6257 = BgL_user1876z00_3931;
						}
					else
						{
							obj_t BgL_auxz00_6260;

							BgL_auxz00_6260 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_user1876z00_3931);
							FAILURE(BgL_auxz00_6260, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_motd1875z00_3930))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6250 = BgL_motd1875z00_3930;
						}
					else
						{
							obj_t BgL_auxz00_6253;

							BgL_auxz00_6253 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_motd1875z00_3930);
							FAILURE(BgL_auxz00_6253, BFALSE, BFALSE);
						}
					if (INTEGERP(BgL_port1874z00_3929))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6243 = BgL_port1874z00_3929;
						}
					else
						{
							obj_t BgL_auxz00_6246;

							BgL_auxz00_6246 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3394z00zz__ftpz00, BgL_port1874z00_3929);
							FAILURE(BgL_auxz00_6246, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_host1873z00_3928))
						{	/* Unsafe/ftp.scm 57 */
							BgL_auxz00_6235 = BgL_host1873z00_3928;
						}
					else
						{
							obj_t BgL_auxz00_6239;

							BgL_auxz00_6239 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1724)), BGl_string3487z00zz__ftpz00,
								BGl_string3384z00zz__ftpz00, BgL_host1873z00_3928);
							FAILURE(BgL_auxz00_6239, BFALSE, BFALSE);
						}
					BgL_auxz00_6234 =
						BGl_makezd2ftpzd2zz__ftpz00(BgL_cmd1870z00_3925,
						BgL_dtp1871z00_3926, CBOOL(BgL_passivezf31872zf3_3927),
						BgL_auxz00_6235, BgL_auxz00_6243, BgL_auxz00_6250, BgL_auxz00_6257,
						BgL_auxz00_6264, BgL_auxz00_6271);
				}
				return (obj_t) (BgL_auxz00_6234);
			}
		}
	}



/* fill-ftp! */
	BGL_EXPORTED_DEF BgL_ftpz00_bglt
		BGl_fillzd2ftpz12zc0zz__ftpz00(BgL_ftpz00_bglt BgL_new1890z00_142,
		obj_t BgL_cmd1881z00_143, obj_t BgL_dtp1882z00_144,
		bool_t BgL_passivezf31883zf3_145, obj_t BgL_host1884z00_146,
		obj_t BgL_port1885z00_147, obj_t BgL_motd1886z00_148,
		obj_t BgL_user1887z00_149, obj_t BgL_pass1888z00_150,
		obj_t BgL_acct1889z00_151)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				obj_t BgL_cmd1881z00_4368;

				obj_t BgL_dtp1882z00_4369;

				bool_t BgL_passivezf31883zf3_4370;

				obj_t BgL_host1884z00_4371;

				obj_t BgL_port1885z00_4372;

				obj_t BgL_motd1886z00_4373;

				obj_t BgL_user1887z00_4374;

				obj_t BgL_pass1888z00_4375;

				obj_t BgL_acct1889z00_4376;

				BgL_cmd1881z00_4368 = BgL_cmd1881z00_143;
				BgL_dtp1882z00_4369 = BgL_dtp1882z00_144;
				BgL_passivezf31883zf3_4370 = BgL_passivezf31883zf3_145;
				BgL_host1884z00_4371 = BgL_host1884z00_146;
				BgL_port1885z00_4372 = BgL_port1885z00_147;
				BgL_motd1886z00_4373 = BgL_motd1886z00_148;
				BgL_user1887z00_4374 = BgL_user1887z00_149;
				BgL_pass1888z00_4375 = BgL_pass1888z00_150;
				BgL_acct1889z00_4376 = BgL_acct1889z00_151;
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_cmdz00) =
					((obj_t) BgL_cmd1881z00_4368), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_dtpz00) =
					((obj_t) BgL_dtp1882z00_4369), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_passivezf3zf3) =
					((bool_t) BgL_passivezf31883zf3_4370), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_hostz00) =
					((obj_t) BgL_host1884z00_4371), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_portz00) =
					((obj_t) BgL_port1885z00_4372), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_motdz00) =
					((obj_t) BgL_motd1886z00_4373), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_userz00) =
					((obj_t) BgL_user1887z00_4374), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_passz00) =
					((obj_t) BgL_pass1888z00_4375), BUNSPEC);
				((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_142))->BgL_acctz00) =
					((obj_t) BgL_acct1889z00_4376), BUNSPEC);
				return BgL_new1890z00_142;
			}
		}
	}



/* _fill-ftp! */
	obj_t BGl__fillzd2ftpz12zc0zz__ftpz00(obj_t BgL_envz00_4006,
		obj_t BgL_new1890z00_4007, obj_t BgL_cmd1881z00_4008,
		obj_t BgL_dtp1882z00_4009, obj_t BgL_passivezf31883zf3_4010,
		obj_t BgL_host1884z00_4011, obj_t BgL_port1885z00_4012,
		obj_t BgL_motd1886z00_4013, obj_t BgL_user1887z00_4014,
		obj_t BgL_pass1888z00_4015, obj_t BgL_acct1889z00_4016)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_auxz00_6289;

				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_res3528z00_4397;

					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_new1890z00_4378;

						bool_t BgL_passivezf31883zf3_4381;

						obj_t BgL_host1884z00_4382;

						obj_t BgL_port1885z00_4383;

						obj_t BgL_motd1886z00_4384;

						obj_t BgL_user1887z00_4385;

						obj_t BgL_pass1888z00_4386;

						obj_t BgL_acct1889z00_4387;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1890z00_4007,
								BGl_ftpz00zz__ftpz00))
							{	/* Unsafe/ftp.scm 57 */
								BgL_new1890z00_4378 = (BgL_ftpz00_bglt) (BgL_new1890z00_4007);
							}
						else
							{
								obj_t BgL_auxz00_6293;

								BgL_auxz00_6293 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3345z00zz__ftpz00, BgL_new1890z00_4007);
								FAILURE(BgL_auxz00_6293, BFALSE, BFALSE);
							}
						BgL_passivezf31883zf3_4381 = CBOOL(BgL_passivezf31883zf3_4010);
						if (STRINGP(BgL_host1884z00_4011))
							{	/* Unsafe/ftp.scm 57 */
								BgL_host1884z00_4382 = BgL_host1884z00_4011;
							}
						else
							{
								obj_t BgL_auxz00_6300;

								BgL_auxz00_6300 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3384z00zz__ftpz00, BgL_host1884z00_4011);
								FAILURE(BgL_auxz00_6300, BFALSE, BFALSE);
							}
						if (INTEGERP(BgL_port1885z00_4012))
							{	/* Unsafe/ftp.scm 57 */
								BgL_port1885z00_4383 = BgL_port1885z00_4012;
							}
						else
							{
								obj_t BgL_auxz00_6306;

								BgL_auxz00_6306 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3394z00zz__ftpz00, BgL_port1885z00_4012);
								FAILURE(BgL_auxz00_6306, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_motd1886z00_4013))
							{	/* Unsafe/ftp.scm 57 */
								BgL_motd1886z00_4384 = BgL_motd1886z00_4013;
							}
						else
							{
								obj_t BgL_auxz00_6312;

								BgL_auxz00_6312 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3384z00zz__ftpz00, BgL_motd1886z00_4013);
								FAILURE(BgL_auxz00_6312, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_user1887z00_4014))
							{	/* Unsafe/ftp.scm 57 */
								BgL_user1887z00_4385 = BgL_user1887z00_4014;
							}
						else
							{
								obj_t BgL_auxz00_6318;

								BgL_auxz00_6318 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3384z00zz__ftpz00, BgL_user1887z00_4014);
								FAILURE(BgL_auxz00_6318, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_pass1888z00_4015))
							{	/* Unsafe/ftp.scm 57 */
								BgL_pass1888z00_4386 = BgL_pass1888z00_4015;
							}
						else
							{
								obj_t BgL_auxz00_6324;

								BgL_auxz00_6324 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3384z00zz__ftpz00, BgL_pass1888z00_4015);
								FAILURE(BgL_auxz00_6324, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_acct1889z00_4016))
							{	/* Unsafe/ftp.scm 57 */
								BgL_acct1889z00_4387 = BgL_acct1889z00_4016;
							}
						else
							{
								obj_t BgL_auxz00_6330;

								BgL_auxz00_6330 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1724)), BGl_string3488z00zz__ftpz00,
									BGl_string3384z00zz__ftpz00, BgL_acct1889z00_4016);
								FAILURE(BgL_auxz00_6330, BFALSE, BFALSE);
							}
						{	/* Unsafe/ftp.scm 57 */
							obj_t BgL_cmd1881z00_4388;

							obj_t BgL_dtp1882z00_4389;

							bool_t BgL_passivezf31883zf3_4390;

							obj_t BgL_host1884z00_4391;

							obj_t BgL_port1885z00_4392;

							obj_t BgL_motd1886z00_4393;

							obj_t BgL_user1887z00_4394;

							obj_t BgL_pass1888z00_4395;

							obj_t BgL_acct1889z00_4396;

							BgL_cmd1881z00_4388 = BgL_cmd1881z00_4008;
							BgL_dtp1882z00_4389 = BgL_dtp1882z00_4009;
							BgL_passivezf31883zf3_4390 = BgL_passivezf31883zf3_4381;
							BgL_host1884z00_4391 = BgL_host1884z00_4382;
							BgL_port1885z00_4392 = BgL_port1885z00_4383;
							BgL_motd1886z00_4393 = BgL_motd1886z00_4384;
							BgL_user1887z00_4394 = BgL_user1887z00_4385;
							BgL_pass1888z00_4395 = BgL_pass1888z00_4386;
							BgL_acct1889z00_4396 = BgL_acct1889z00_4387;
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_cmdz00) =
								((obj_t) BgL_cmd1881z00_4388), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_dtpz00) =
								((obj_t) BgL_dtp1882z00_4389), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->
									BgL_passivezf3zf3) =
								((bool_t) BgL_passivezf31883zf3_4390), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_hostz00) =
								((obj_t) BgL_host1884z00_4391), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_portz00) =
								((obj_t) BgL_port1885z00_4392), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_motdz00) =
								((obj_t) BgL_motd1886z00_4393), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_userz00) =
								((obj_t) BgL_user1887z00_4394), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_passz00) =
								((obj_t) BgL_pass1888z00_4395), BUNSPEC);
							((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_4378))->BgL_acctz00) =
								((obj_t) BgL_acct1889z00_4396), BUNSPEC);
							BgL_res3528z00_4397 = BgL_new1890z00_4378;
					}}
					BgL_auxz00_6289 = BgL_res3528z00_4397;
				}
				return (obj_t) (BgL_auxz00_6289);
			}
		}
	}



/* %allocate-ftp */
	BGL_EXPORTED_DEF BgL_ftpz00_bglt BGl_z52allocatezd2ftpz80zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_new1901z00_4398;

				BgL_new1901z00_4398 =
					((BgL_ftpz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_ftpz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1901z00_4398),
					BGl_classzd2numzd2zz__objectz00(BGl_ftpz00zz__ftpz00));
				{	/* Unsafe/ftp.scm 57 */
					BgL_objectz00_bglt BgL_auxz00_6348;

					BgL_auxz00_6348 = (BgL_objectz00_bglt) (BgL_new1901z00_4398);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6348, BFALSE);
				}
				return BgL_new1901z00_4398;
			}
		}
	}



/* _%allocate-ftp */
	obj_t BGl__z52allocatezd2ftpz80zz__ftpz00(obj_t BgL_envz00_3934)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_auxz00_6351;

				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_res3529z00_4402;

					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_new1901z00_4400;

						BgL_new1901z00_4400 =
							((BgL_ftpz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_ftpz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1901z00_4400),
							BGl_classzd2numzd2zz__objectz00(BGl_ftpz00zz__ftpz00));
						{	/* Unsafe/ftp.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_6356;

							BgL_auxz00_6356 = (BgL_objectz00_bglt) (BgL_new1901z00_4400);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6356, BFALSE);
						}
						BgL_res3529z00_4402 = BgL_new1901z00_4400;
					}
					BgL_auxz00_6351 = BgL_res3529z00_4402;
				}
				return (obj_t) (BgL_auxz00_6351);
			}
		}
	}



/* ftp-nil */
	BGL_EXPORTED_DEF BgL_ftpz00_bglt BGl_ftpzd2nilzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			if ((BGl_z52thezd2ftpzd2nilz52zz__ftpz00 == BUNSPEC))
				{	/* Unsafe/ftp.scm 57 */
					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_res3120z00_3397;

						{	/* Unsafe/ftp.scm 57 */
							BgL_ftpz00_bglt BgL_new1901z00_3393;

							BgL_new1901z00_3393 =
								((BgL_ftpz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_ftpz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1901z00_3393),
								BGl_classzd2numzd2zz__objectz00(BGl_ftpz00zz__ftpz00));
							{	/* Unsafe/ftp.scm 57 */
								BgL_objectz00_bglt BgL_auxz00_6366;

								BgL_auxz00_6366 = (BgL_objectz00_bglt) (BgL_new1901z00_3393);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6366, BFALSE);
							}
							BgL_res3120z00_3397 = BgL_new1901z00_3393;
						}
						BGl_z52thezd2ftpzd2nilz52zz__ftpz00 = (obj_t) (BgL_res3120z00_3397);
					}
					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_res3121z00_3417;

						{	/* Unsafe/ftp.scm 57 */
							BgL_ftpz00_bglt BgL_new1890z00_3398;

							obj_t BgL_port1885z00_3403;

							BgL_new1890z00_3398 =
								(BgL_ftpz00_bglt) (BGl_z52thezd2ftpzd2nilz52zz__ftpz00);
							BgL_port1885z00_3403 = BINT(((long) 0));
							{	/* Unsafe/ftp.scm 57 */
								obj_t BgL_cmd1881z00_3408;

								obj_t BgL_dtp1882z00_3409;

								bool_t BgL_passivezf31883zf3_3410;

								obj_t BgL_host1884z00_3411;

								obj_t BgL_port1885z00_3412;

								obj_t BgL_motd1886z00_3413;

								obj_t BgL_user1887z00_3414;

								obj_t BgL_pass1888z00_3415;

								obj_t BgL_acct1889z00_3416;

								BgL_cmd1881z00_3408 = BUNSPEC;
								BgL_dtp1882z00_3409 = BUNSPEC;
								BgL_passivezf31883zf3_3410 = ((bool_t) 0);
								BgL_host1884z00_3411 = BGl_string3450z00zz__ftpz00;
								BgL_port1885z00_3412 = BgL_port1885z00_3403;
								BgL_motd1886z00_3413 = BGl_string3450z00zz__ftpz00;
								BgL_user1887z00_3414 = BGl_string3450z00zz__ftpz00;
								BgL_pass1888z00_3415 = BGl_string3450z00zz__ftpz00;
								BgL_acct1889z00_3416 = BGl_string3450z00zz__ftpz00;
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_cmdz00) =
									((obj_t) BgL_cmd1881z00_3408), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_dtpz00) =
									((obj_t) BgL_dtp1882z00_3409), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->
										BgL_passivezf3zf3) =
									((bool_t) BgL_passivezf31883zf3_3410), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_hostz00) =
									((obj_t) BgL_host1884z00_3411), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_portz00) =
									((obj_t) BgL_port1885z00_3412), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_motdz00) =
									((obj_t) BgL_motd1886z00_3413), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_userz00) =
									((obj_t) BgL_user1887z00_3414), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_passz00) =
									((obj_t) BgL_pass1888z00_3415), BUNSPEC);
								((((BgL_ftpz00_bglt) CREF(BgL_new1890z00_3398))->BgL_acctz00) =
									((obj_t) BgL_acct1889z00_3416), BUNSPEC);
								BgL_res3121z00_3417 = BgL_new1890z00_3398;
						}}
						(obj_t) (BgL_res3121z00_3417);
				}}
			else
				{	/* Unsafe/ftp.scm 57 */
					BFALSE;
				}
			return (BgL_ftpz00_bglt) (BGl_z52thezd2ftpzd2nilz52zz__ftpz00);
		}
	}



/* _ftp-nil */
	obj_t BGl__ftpzd2nilzd2zz__ftpz00(obj_t BgL_envz00_3965)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			return (obj_t) (BGl_ftpzd2nilzd2zz__ftpz00());
		}
	}



/* _ftp-host-set! */
	obj_t BGl__ftpzd2hostzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3937,
		obj_t BgL_obj1854z00_3938, obj_t BgL_val1853z00_3939)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 58 */
			{	/* Unsafe/ftp.scm 58 */
				BgL_ftpz00_bglt BgL_obj1854z00_4404;

				obj_t BgL_val1853z00_4405;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1854z00_3938,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 58 */
						BgL_obj1854z00_4404 = (BgL_ftpz00_bglt) (BgL_obj1854z00_3938);
					}
				else
					{
						obj_t BgL_auxz00_6388;

						BgL_auxz00_6388 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1748)), BGl_string3489z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1854z00_3938);
						FAILURE(BgL_auxz00_6388, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_val1853z00_3939))
					{	/* Unsafe/ftp.scm 58 */
						BgL_val1853z00_4405 = BgL_val1853z00_3939;
					}
				else
					{
						obj_t BgL_auxz00_6394;

						BgL_auxz00_6394 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1748)), BGl_string3489z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_val1853z00_3939);
						FAILURE(BgL_auxz00_6394, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1854z00_4404))->BgL_hostz00) =
					((obj_t) BgL_val1853z00_4405), BUNSPEC);
			}
		}
	}



/* _ftp-host */
	obj_t BGl__ftpzd2hostzd2zz__ftpz00(obj_t BgL_envz00_3935,
		obj_t BgL_obj1852z00_3936)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 58 */
			{	/* Unsafe/ftp.scm 58 */
				BgL_ftpz00_bglt BgL_obj1852z00_4407;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1852z00_3936,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 58 */
						BgL_obj1852z00_4407 = (BgL_ftpz00_bglt) (BgL_obj1852z00_3936);
					}
				else
					{
						obj_t BgL_auxz00_6402;

						BgL_auxz00_6402 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1748)), BGl_string3490z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1852z00_3936);
						FAILURE(BgL_auxz00_6402, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1852z00_4407))->BgL_hostz00);
			}
		}
	}



/* _ftp-port-set! */
	obj_t BGl__ftpzd2portzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3942,
		obj_t BgL_obj1857z00_3943, obj_t BgL_val1856z00_3944)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 59 */
			{	/* Unsafe/ftp.scm 59 */
				BgL_ftpz00_bglt BgL_obj1857z00_4409;

				obj_t BgL_val1856z00_4410;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1857z00_3943,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 59 */
						BgL_obj1857z00_4409 = (BgL_ftpz00_bglt) (BgL_obj1857z00_3943);
					}
				else
					{
						obj_t BgL_auxz00_6410;

						BgL_auxz00_6410 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1793)), BGl_string3491z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1857z00_3943);
						FAILURE(BgL_auxz00_6410, BFALSE, BFALSE);
					}
				if (INTEGERP(BgL_val1856z00_3944))
					{	/* Unsafe/ftp.scm 59 */
						BgL_val1856z00_4410 = BgL_val1856z00_3944;
					}
				else
					{
						obj_t BgL_auxz00_6416;

						BgL_auxz00_6416 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1793)), BGl_string3491z00zz__ftpz00,
							BGl_string3394z00zz__ftpz00, BgL_val1856z00_3944);
						FAILURE(BgL_auxz00_6416, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1857z00_4409))->BgL_portz00) =
					((obj_t) BgL_val1856z00_4410), BUNSPEC);
			}
		}
	}



/* _ftp-port */
	obj_t BGl__ftpzd2portzd2zz__ftpz00(obj_t BgL_envz00_3940,
		obj_t BgL_obj1855z00_3941)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 59 */
			{	/* Unsafe/ftp.scm 59 */
				BgL_ftpz00_bglt BgL_obj1855z00_4412;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1855z00_3941,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 59 */
						BgL_obj1855z00_4412 = (BgL_ftpz00_bglt) (BgL_obj1855z00_3941);
					}
				else
					{
						obj_t BgL_auxz00_6424;

						BgL_auxz00_6424 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1793)), BGl_string3492z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1855z00_3941);
						FAILURE(BgL_auxz00_6424, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1855z00_4412))->BgL_portz00);
			}
		}
	}



/* _ftp-motd-set! */
	obj_t BGl__ftpzd2motdzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3947,
		obj_t BgL_obj1860z00_3948, obj_t BgL_val1859z00_3949)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 60 */
			{	/* Unsafe/ftp.scm 60 */
				BgL_ftpz00_bglt BgL_obj1860z00_4414;

				obj_t BgL_val1859z00_4415;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1860z00_3948,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 60 */
						BgL_obj1860z00_4414 = (BgL_ftpz00_bglt) (BgL_obj1860z00_3948);
					}
				else
					{
						obj_t BgL_auxz00_6432;

						BgL_auxz00_6432 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1826)), BGl_string3493z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1860z00_3948);
						FAILURE(BgL_auxz00_6432, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_val1859z00_3949))
					{	/* Unsafe/ftp.scm 60 */
						BgL_val1859z00_4415 = BgL_val1859z00_3949;
					}
				else
					{
						obj_t BgL_auxz00_6438;

						BgL_auxz00_6438 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1826)), BGl_string3493z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_val1859z00_3949);
						FAILURE(BgL_auxz00_6438, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1860z00_4414))->BgL_motdz00) =
					((obj_t) BgL_val1859z00_4415), BUNSPEC);
			}
		}
	}



/* _ftp-motd */
	obj_t BGl__ftpzd2motdzd2zz__ftpz00(obj_t BgL_envz00_3945,
		obj_t BgL_obj1858z00_3946)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 60 */
			{	/* Unsafe/ftp.scm 60 */
				BgL_ftpz00_bglt BgL_obj1858z00_4417;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1858z00_3946,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 60 */
						BgL_obj1858z00_4417 = (BgL_ftpz00_bglt) (BgL_obj1858z00_3946);
					}
				else
					{
						obj_t BgL_auxz00_6446;

						BgL_auxz00_6446 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1826)), BGl_string3494z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1858z00_3946);
						FAILURE(BgL_auxz00_6446, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1858z00_4417))->BgL_motdz00);
			}
		}
	}



/* _ftp-user-set! */
	obj_t BGl__ftpzd2userzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3952,
		obj_t BgL_obj1863z00_3953, obj_t BgL_val1862z00_3954)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 61 */
			{	/* Unsafe/ftp.scm 61 */
				BgL_ftpz00_bglt BgL_obj1863z00_4419;

				obj_t BgL_val1862z00_4420;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1863z00_3953,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 61 */
						BgL_obj1863z00_4419 = (BgL_ftpz00_bglt) (BgL_obj1863z00_3953);
					}
				else
					{
						obj_t BgL_auxz00_6454;

						BgL_auxz00_6454 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1862)), BGl_string3495z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1863z00_3953);
						FAILURE(BgL_auxz00_6454, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_val1862z00_3954))
					{	/* Unsafe/ftp.scm 61 */
						BgL_val1862z00_4420 = BgL_val1862z00_3954;
					}
				else
					{
						obj_t BgL_auxz00_6460;

						BgL_auxz00_6460 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1862)), BGl_string3495z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_val1862z00_3954);
						FAILURE(BgL_auxz00_6460, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1863z00_4419))->BgL_userz00) =
					((obj_t) BgL_val1862z00_4420), BUNSPEC);
			}
		}
	}



/* _ftp-user */
	obj_t BGl__ftpzd2userzd2zz__ftpz00(obj_t BgL_envz00_3950,
		obj_t BgL_obj1861z00_3951)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 61 */
			{	/* Unsafe/ftp.scm 61 */
				BgL_ftpz00_bglt BgL_obj1861z00_4422;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1861z00_3951,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 61 */
						BgL_obj1861z00_4422 = (BgL_ftpz00_bglt) (BgL_obj1861z00_3951);
					}
				else
					{
						obj_t BgL_auxz00_6468;

						BgL_auxz00_6468 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1862)), BGl_string3496z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1861z00_3951);
						FAILURE(BgL_auxz00_6468, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1861z00_4422))->BgL_userz00);
			}
		}
	}



/* _ftp-pass-set! */
	obj_t BGl__ftpzd2passzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3957,
		obj_t BgL_obj1866z00_3958, obj_t BgL_val1865z00_3959)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 62 */
			{	/* Unsafe/ftp.scm 62 */
				BgL_ftpz00_bglt BgL_obj1866z00_4424;

				obj_t BgL_val1865z00_4425;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1866z00_3958,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 62 */
						BgL_obj1866z00_4424 = (BgL_ftpz00_bglt) (BgL_obj1866z00_3958);
					}
				else
					{
						obj_t BgL_auxz00_6476;

						BgL_auxz00_6476 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1907)), BGl_string3497z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1866z00_3958);
						FAILURE(BgL_auxz00_6476, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_val1865z00_3959))
					{	/* Unsafe/ftp.scm 62 */
						BgL_val1865z00_4425 = BgL_val1865z00_3959;
					}
				else
					{
						obj_t BgL_auxz00_6482;

						BgL_auxz00_6482 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1907)), BGl_string3497z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_val1865z00_3959);
						FAILURE(BgL_auxz00_6482, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1866z00_4424))->BgL_passz00) =
					((obj_t) BgL_val1865z00_4425), BUNSPEC);
			}
		}
	}



/* _ftp-pass */
	obj_t BGl__ftpzd2passzd2zz__ftpz00(obj_t BgL_envz00_3955,
		obj_t BgL_obj1864z00_3956)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 62 */
			{	/* Unsafe/ftp.scm 62 */
				BgL_ftpz00_bglt BgL_obj1864z00_4427;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1864z00_3956,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 62 */
						BgL_obj1864z00_4427 = (BgL_ftpz00_bglt) (BgL_obj1864z00_3956);
					}
				else
					{
						obj_t BgL_auxz00_6490;

						BgL_auxz00_6490 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1907)), BGl_string3498z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1864z00_3956);
						FAILURE(BgL_auxz00_6490, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1864z00_4427))->BgL_passz00);
			}
		}
	}



/* _ftp-acct-set! */
	obj_t BGl__ftpzd2acctzd2setz12z12zz__ftpz00(obj_t BgL_envz00_3962,
		obj_t BgL_obj1869z00_3963, obj_t BgL_val1868z00_3964)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 63 */
			{	/* Unsafe/ftp.scm 63 */
				BgL_ftpz00_bglt BgL_obj1869z00_4429;

				obj_t BgL_val1868z00_4430;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1869z00_3963,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 63 */
						BgL_obj1869z00_4429 = (BgL_ftpz00_bglt) (BgL_obj1869z00_3963);
					}
				else
					{
						obj_t BgL_auxz00_6498;

						BgL_auxz00_6498 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1954)), BGl_string3499z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1869z00_3963);
						FAILURE(BgL_auxz00_6498, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_val1868z00_3964))
					{	/* Unsafe/ftp.scm 63 */
						BgL_val1868z00_4430 = BgL_val1868z00_3964;
					}
				else
					{
						obj_t BgL_auxz00_6504;

						BgL_auxz00_6504 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1954)), BGl_string3499z00zz__ftpz00,
							BGl_string3384z00zz__ftpz00, BgL_val1868z00_3964);
						FAILURE(BgL_auxz00_6504, BFALSE, BFALSE);
					}
				return
					((((BgL_ftpz00_bglt) CREF(BgL_obj1869z00_4429))->BgL_acctz00) =
					((obj_t) BgL_val1868z00_4430), BUNSPEC);
			}
		}
	}



/* _ftp-acct */
	obj_t BGl__ftpzd2acctzd2zz__ftpz00(obj_t BgL_envz00_3960,
		obj_t BgL_obj1867z00_3961)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 63 */
			{	/* Unsafe/ftp.scm 63 */
				BgL_ftpz00_bglt BgL_obj1867z00_4432;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1867z00_3961,
						BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 63 */
						BgL_obj1867z00_4432 = (BgL_ftpz00_bglt) (BgL_obj1867z00_3961);
					}
				else
					{
						obj_t BgL_auxz00_6512;

						BgL_auxz00_6512 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1954)), BGl_string3500z00zz__ftpz00,
							BGl_string3345z00zz__ftpz00, BgL_obj1867z00_3961);
						FAILURE(BgL_auxz00_6512, BFALSE, BFALSE);
					}
				return (((BgL_ftpz00_bglt) CREF(BgL_obj1867z00_4432))->BgL_acctz00);
			}
		}
	}



/* %ftp? */
	BGL_EXPORTED_DEF bool_t BGl_z52ftpzf3za1zz__ftpz00(obj_t BgL_obj1842z00_170)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1842z00_170,
				BGl_z52ftpz52zz__ftpz00);
		}
	}



/* _%ftp? */
	obj_t BGl__z52ftpzf3za1zz__ftpz00(obj_t BgL_envz00_3922,
		obj_t BgL_obj1842z00_3923)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1842z00_3923,
					BGl_z52ftpz52zz__ftpz00));
		}
	}



/* fill-%ftp! */
	BGL_EXPORTED_DEF BgL_z52ftpz52_bglt
		BGl_fillzd2z52ftpz12z92zz__ftpz00(BgL_z52ftpz52_bglt BgL_new1836z00_171,
		obj_t BgL_cmd1833z00_172, obj_t BgL_dtp1834z00_173,
		bool_t BgL_passivezf31835zf3_174)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				obj_t BgL_cmd1833z00_4434;

				obj_t BgL_dtp1834z00_4435;

				bool_t BgL_passivezf31835zf3_4436;

				BgL_cmd1833z00_4434 = BgL_cmd1833z00_172;
				BgL_dtp1834z00_4435 = BgL_dtp1834z00_173;
				BgL_passivezf31835zf3_4436 = BgL_passivezf31835zf3_174;
				((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_171))->BgL_cmdz00) =
					((obj_t) BgL_cmd1833z00_4434), BUNSPEC);
				((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_171))->BgL_dtpz00) =
					((obj_t) BgL_dtp1834z00_4435), BUNSPEC);
				((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_171))->BgL_passivezf3zf3) =
					((bool_t) BgL_passivezf31835zf3_4436), BUNSPEC);
				return BgL_new1836z00_171;
			}
		}
	}



/* _fill-%ftp! */
	obj_t BGl__fillzd2z52ftpz12z92zz__ftpz00(obj_t BgL_envz00_4017,
		obj_t BgL_new1836z00_4018, obj_t BgL_cmd1833z00_4019,
		obj_t BgL_dtp1834z00_4020, obj_t BgL_passivezf31835zf3_4021)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				BgL_z52ftpz52_bglt BgL_auxz00_6523;

				{	/* Unsafe/ftp.scm 52 */
					BgL_z52ftpz52_bglt BgL_res3530z00_4445;

					{	/* Unsafe/ftp.scm 52 */
						BgL_z52ftpz52_bglt BgL_new1836z00_4438;

						bool_t BgL_passivezf31835zf3_4441;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1836z00_4018,
								BGl_z52ftpz52zz__ftpz00))
							{	/* Unsafe/ftp.scm 52 */
								BgL_new1836z00_4438 =
									(BgL_z52ftpz52_bglt) (BgL_new1836z00_4018);
							}
						else
							{
								obj_t BgL_auxz00_6527;

								BgL_auxz00_6527 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
									BINT(((long) 1598)), BGl_string3501z00zz__ftpz00,
									BGl_string3456z00zz__ftpz00, BgL_new1836z00_4018);
								FAILURE(BgL_auxz00_6527, BFALSE, BFALSE);
							}
						BgL_passivezf31835zf3_4441 = CBOOL(BgL_passivezf31835zf3_4021);
						{	/* Unsafe/ftp.scm 52 */
							obj_t BgL_cmd1833z00_4442;

							obj_t BgL_dtp1834z00_4443;

							bool_t BgL_passivezf31835zf3_4444;

							BgL_cmd1833z00_4442 = BgL_cmd1833z00_4019;
							BgL_dtp1834z00_4443 = BgL_dtp1834z00_4020;
							BgL_passivezf31835zf3_4444 = BgL_passivezf31835zf3_4441;
							((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_4438))->BgL_cmdz00) =
								((obj_t) BgL_cmd1833z00_4442), BUNSPEC);
							((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_4438))->BgL_dtpz00) =
								((obj_t) BgL_dtp1834z00_4443), BUNSPEC);
							((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_4438))->
									BgL_passivezf3zf3) =
								((bool_t) BgL_passivezf31835zf3_4444), BUNSPEC);
							BgL_res3530z00_4445 = BgL_new1836z00_4438;
					}}
					BgL_auxz00_6523 = BgL_res3530z00_4445;
				}
				return (obj_t) (BgL_auxz00_6523);
			}
		}
	}



/* %allocate-%ftp */
	BGL_EXPORTED_DEF BgL_z52ftpz52_bglt BGl_z52allocatezd2z52ftpzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				BgL_z52ftpz52_bglt BgL_new1841z00_4446;

				BgL_new1841z00_4446 =
					((BgL_z52ftpz52_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z52ftpz52_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1841z00_4446),
					BGl_classzd2numzd2zz__objectz00(BGl_z52ftpz52zz__ftpz00));
				{	/* Unsafe/ftp.scm 52 */
					BgL_objectz00_bglt BgL_auxz00_6540;

					BgL_auxz00_6540 = (BgL_objectz00_bglt) (BgL_new1841z00_4446);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6540, BFALSE);
				}
				return BgL_new1841z00_4446;
			}
		}
	}



/* _%allocate-%ftp */
	obj_t BGl__z52allocatezd2z52ftpzd2zz__ftpz00(obj_t BgL_envz00_4022)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				BgL_z52ftpz52_bglt BgL_auxz00_6543;

				{	/* Unsafe/ftp.scm 52 */
					BgL_z52ftpz52_bglt BgL_res3531z00_4450;

					{	/* Unsafe/ftp.scm 52 */
						BgL_z52ftpz52_bglt BgL_new1841z00_4448;

						BgL_new1841z00_4448 =
							((BgL_z52ftpz52_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z52ftpz52_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1841z00_4448),
							BGl_classzd2numzd2zz__objectz00(BGl_z52ftpz52zz__ftpz00));
						{	/* Unsafe/ftp.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_6548;

							BgL_auxz00_6548 = (BgL_objectz00_bglt) (BgL_new1841z00_4448);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6548, BFALSE);
						}
						BgL_res3531z00_4450 = BgL_new1841z00_4448;
					}
					BgL_auxz00_6543 = BgL_res3531z00_4450;
				}
				return (obj_t) (BgL_auxz00_6543);
			}
		}
	}



/* %ftp-nil */
	BGL_EXPORTED_DEF BgL_z52ftpz52_bglt BGl_z52ftpzd2nilz80zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			if ((BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00 == BUNSPEC))
				{	/* Unsafe/ftp.scm 52 */
					{	/* Unsafe/ftp.scm 52 */
						BgL_z52ftpz52_bglt BgL_res3122z00_3429;

						{	/* Unsafe/ftp.scm 52 */
							BgL_z52ftpz52_bglt BgL_new1841z00_3425;

							BgL_new1841z00_3425 =
								((BgL_z52ftpz52_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z52ftpz52_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1841z00_3425),
								BGl_classzd2numzd2zz__objectz00(BGl_z52ftpz52zz__ftpz00));
							{	/* Unsafe/ftp.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_6558;

								BgL_auxz00_6558 = (BgL_objectz00_bglt) (BgL_new1841z00_3425);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6558, BFALSE);
							}
							BgL_res3122z00_3429 = BgL_new1841z00_3425;
						}
						BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00 =
							(obj_t) (BgL_res3122z00_3429);
					}
					{	/* Unsafe/ftp.scm 52 */
						BgL_z52ftpz52_bglt BgL_res3123z00_3437;

						{	/* Unsafe/ftp.scm 52 */
							BgL_z52ftpz52_bglt BgL_new1836z00_3430;

							BgL_new1836z00_3430 =
								(BgL_z52ftpz52_bglt) (BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00);
							{	/* Unsafe/ftp.scm 52 */
								obj_t BgL_cmd1833z00_3434;

								obj_t BgL_dtp1834z00_3435;

								bool_t BgL_passivezf31835zf3_3436;

								BgL_cmd1833z00_3434 = BUNSPEC;
								BgL_dtp1834z00_3435 = BUNSPEC;
								BgL_passivezf31835zf3_3436 = ((bool_t) 0);
								((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_3430))->
										BgL_cmdz00) = ((obj_t) BgL_cmd1833z00_3434), BUNSPEC);
								((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_3430))->
										BgL_dtpz00) = ((obj_t) BgL_dtp1834z00_3435), BUNSPEC);
								((((BgL_z52ftpz52_bglt) CREF(BgL_new1836z00_3430))->
										BgL_passivezf3zf3) =
									((bool_t) BgL_passivezf31835zf3_3436), BUNSPEC);
								BgL_res3123z00_3437 = BgL_new1836z00_3430;
						}}
						(obj_t) (BgL_res3123z00_3437);
				}}
			else
				{	/* Unsafe/ftp.scm 52 */
					BFALSE;
				}
			return (BgL_z52ftpz52_bglt) (BGl_z52thezd2z52ftpzd2nilz00zz__ftpz00);
		}
	}



/* _%ftp-nil */
	obj_t BGl__z52ftpzd2nilz80zz__ftpz00(obj_t BgL_envz00_3921)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 52 */
			return (obj_t) (BGl_z52ftpzd2nilz80zz__ftpz00());
		}
	}



/* _%ftp-cmd-set! */
	obj_t BGl__z52ftpzd2cmdzd2setz12z40zz__ftpz00(obj_t BgL_envz00_3908,
		obj_t BgL_obj1826z00_3909, obj_t BgL_val1825z00_3910)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 53 */
			{	/* Unsafe/ftp.scm 53 */
				BgL_z52ftpz52_bglt BgL_obj1826z00_4452;

				obj_t BgL_val1825z00_4453;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1826z00_3909,
						BGl_z52ftpz52zz__ftpz00))
					{	/* Unsafe/ftp.scm 53 */
						BgL_obj1826z00_4452 = (BgL_z52ftpz52_bglt) (BgL_obj1826z00_3909);
					}
				else
					{
						obj_t BgL_auxz00_6573;

						BgL_auxz00_6573 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1626)), BGl_string3502z00zz__ftpz00,
							BGl_string3456z00zz__ftpz00, BgL_obj1826z00_3909);
						FAILURE(BgL_auxz00_6573, BFALSE, BFALSE);
					}
				BgL_val1825z00_4453 = BgL_val1825z00_3910;
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_obj1826z00_4452))->BgL_cmdz00) =
					((obj_t) BgL_val1825z00_4453), BUNSPEC);
			}
		}
	}



/* _%ftp-cmd */
	obj_t BGl__z52ftpzd2cmdz80zz__ftpz00(obj_t BgL_envz00_3906,
		obj_t BgL_obj1824z00_3907)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 53 */
			{	/* Unsafe/ftp.scm 53 */
				BgL_z52ftpz52_bglt BgL_obj1824z00_4455;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1824z00_3907,
						BGl_z52ftpz52zz__ftpz00))
					{	/* Unsafe/ftp.scm 53 */
						BgL_obj1824z00_4455 = (BgL_z52ftpz52_bglt) (BgL_obj1824z00_3907);
					}
				else
					{
						obj_t BgL_auxz00_6581;

						BgL_auxz00_6581 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1626)), BGl_string3503z00zz__ftpz00,
							BGl_string3456z00zz__ftpz00, BgL_obj1824z00_3907);
						FAILURE(BgL_auxz00_6581, BFALSE, BFALSE);
					}
				return (((BgL_z52ftpz52_bglt) CREF(BgL_obj1824z00_4455))->BgL_cmdz00);
			}
		}
	}



/* _%ftp-dtp-set! */
	obj_t BGl__z52ftpzd2dtpzd2setz12z40zz__ftpz00(obj_t BgL_envz00_3913,
		obj_t BgL_obj1829z00_3914, obj_t BgL_val1828z00_3915)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 54 */
			{	/* Unsafe/ftp.scm 54 */
				BgL_z52ftpz52_bglt BgL_obj1829z00_4457;

				obj_t BgL_val1828z00_4458;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1829z00_3914,
						BGl_z52ftpz52zz__ftpz00))
					{	/* Unsafe/ftp.scm 54 */
						BgL_obj1829z00_4457 = (BgL_z52ftpz52_bglt) (BgL_obj1829z00_3914);
					}
				else
					{
						obj_t BgL_auxz00_6589;

						BgL_auxz00_6589 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1657)), BGl_string3504z00zz__ftpz00,
							BGl_string3456z00zz__ftpz00, BgL_obj1829z00_3914);
						FAILURE(BgL_auxz00_6589, BFALSE, BFALSE);
					}
				BgL_val1828z00_4458 = BgL_val1828z00_3915;
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_obj1829z00_4457))->BgL_dtpz00) =
					((obj_t) BgL_val1828z00_4458), BUNSPEC);
			}
		}
	}



/* _%ftp-dtp */
	obj_t BGl__z52ftpzd2dtpz80zz__ftpz00(obj_t BgL_envz00_3911,
		obj_t BgL_obj1827z00_3912)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 54 */
			{	/* Unsafe/ftp.scm 54 */
				BgL_z52ftpz52_bglt BgL_obj1827z00_4460;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1827z00_3912,
						BGl_z52ftpz52zz__ftpz00))
					{	/* Unsafe/ftp.scm 54 */
						BgL_obj1827z00_4460 = (BgL_z52ftpz52_bglt) (BgL_obj1827z00_3912);
					}
				else
					{
						obj_t BgL_auxz00_6597;

						BgL_auxz00_6597 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1657)), BGl_string3505z00zz__ftpz00,
							BGl_string3456z00zz__ftpz00, BgL_obj1827z00_3912);
						FAILURE(BgL_auxz00_6597, BFALSE, BFALSE);
					}
				return (((BgL_z52ftpz52_bglt) CREF(BgL_obj1827z00_4460))->BgL_dtpz00);
			}
		}
	}



/* _%ftp-passive?-set! */
	obj_t BGl__z52ftpzd2passivezf3zd2setz12zb3zz__ftpz00(obj_t BgL_envz00_3918,
		obj_t BgL_obj1832z00_3919, obj_t BgL_val1831z00_3920)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 55 */
			{	/* Unsafe/ftp.scm 55 */
				BgL_z52ftpz52_bglt BgL_obj1832z00_4462;

				bool_t BgL_val1831z00_4463;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1832z00_3919,
						BGl_z52ftpz52zz__ftpz00))
					{	/* Unsafe/ftp.scm 55 */
						BgL_obj1832z00_4462 = (BgL_z52ftpz52_bglt) (BgL_obj1832z00_3919);
					}
				else
					{
						obj_t BgL_auxz00_6605;

						BgL_auxz00_6605 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
							BINT(((long) 1688)), BGl_string3506z00zz__ftpz00,
							BGl_string3456z00zz__ftpz00, BgL_obj1832z00_3919);
						FAILURE(BgL_auxz00_6605, BFALSE, BFALSE);
					}
				BgL_val1831z00_4463 = CBOOL(BgL_val1831z00_3920);
				return
					((((BgL_z52ftpz52_bglt) CREF(BgL_obj1832z00_4462))->
						BgL_passivezf3zf3) = ((bool_t) BgL_val1831z00_4463), BUNSPEC);
			}
		}
	}



/* _%ftp-passive? */
	obj_t BGl__z52ftpzd2passivezf3z73zz__ftpz00(obj_t BgL_envz00_3916,
		obj_t BgL_obj1830z00_3917)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 55 */
			{	/* Unsafe/ftp.scm 55 */
				bool_t BgL_auxz00_6611;

				{	/* Unsafe/ftp.scm 55 */
					BgL_z52ftpz52_bglt BgL_obj1830z00_4465;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1830z00_3917,
							BGl_z52ftpz52zz__ftpz00))
						{	/* Unsafe/ftp.scm 55 */
							BgL_obj1830z00_4465 = (BgL_z52ftpz52_bglt) (BgL_obj1830z00_3917);
						}
					else
						{
							obj_t BgL_auxz00_6615;

							BgL_auxz00_6615 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3374z00zz__ftpz00,
								BINT(((long) 1688)), BGl_string3507z00zz__ftpz00,
								BGl_string3456z00zz__ftpz00, BgL_obj1830z00_3917);
							FAILURE(BgL_auxz00_6615, BFALSE, BFALSE);
						}
					BgL_auxz00_6611 =
						(((BgL_z52ftpz52_bglt) CREF(BgL_obj1830z00_4465))->
						BgL_passivezf3zf3);
				}
				return BBOOL(BgL_auxz00_6611);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2printzd2envz00zz__objectz00, BGl_ftpz00zz__ftpz00,
				BGl_proc3508z00zz__ftpz00, BGl_string3509z00zz__ftpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62ftpzd2parsezd2errorz62zz__ftpz00, BGl_proc3510z00zz__ftpz00,
				BGl_string3511z00zz__ftpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62ftpzd2parsezd2errorz62zz__ftpz00, BGl_proc3512z00zz__ftpz00,
				BGl_string3513z00zz__ftpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62ftpzd2errorzb0zz__ftpz00, BGl_proc3514z00zz__ftpz00,
				BGl_string3511z00zz__ftpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62ftpzd2errorzb0zz__ftpz00, BGl_proc3515z00zz__ftpz00,
				BGl_string3513z00zz__ftpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_ftpz00zz__ftpz00,
				BGl_proc3516z00zz__ftpz00, BGl_string3511z00zz__ftpz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_ftpz00zz__ftpz00, BGl_proc3517z00zz__ftpz00,
				BGl_string3513z00zz__ftpz00);
		}
	}



/* struct+object->objec2230 */
	obj_t BGl_structzb2objectzd2ze3objec2230z83zz__ftpz00(obj_t BgL_envz00_4030,
		obj_t BgL_oz00_4031, obj_t BgL_sz00_4032)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{
				BgL_ftpz00_bglt BgL_oz00_2174;

				obj_t BgL_sz00_2175;

				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_auxz00_6628;

					BgL_oz00_2174 = (BgL_ftpz00_bglt) (BgL_oz00_4031);
					BgL_sz00_2175 = BgL_sz00_4032;
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2850z00_2178;

						BgL_arg2850z00_2178 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 0)));
						{	/* Unsafe/ftp.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_6631;

							BgL_auxz00_6631 = (BgL_objectz00_bglt) (BgL_oz00_2174);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6631, BgL_arg2850z00_2178);
					}}
					{
						obj_t BgL_auxz00_6634;

						BgL_auxz00_6634 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 1)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_cmdz00) =
							((obj_t) BgL_auxz00_6634), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6638;

						BgL_auxz00_6638 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 2)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_dtpz00) =
							((obj_t) BgL_auxz00_6638), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_6642;

						BgL_auxz00_6642 =
							CBOOL(STRUCT_REF(BgL_sz00_2175, (int) (((long) 3))));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_passivezf3zf3) =
							((bool_t) BgL_auxz00_6642), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6647;

						BgL_auxz00_6647 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 4)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_hostz00) =
							((obj_t) BgL_auxz00_6647), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6651;

						BgL_auxz00_6651 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 5)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_portz00) =
							((obj_t) BgL_auxz00_6651), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6655;

						BgL_auxz00_6655 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 6)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_motdz00) =
							((obj_t) BgL_auxz00_6655), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6659;

						BgL_auxz00_6659 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 7)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_userz00) =
							((obj_t) BgL_auxz00_6659), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6663;

						BgL_auxz00_6663 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 8)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_passz00) =
							((obj_t) BgL_auxz00_6663), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6667;

						BgL_auxz00_6667 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 9)));
						((((BgL_ftpz00_bglt) CREF(BgL_oz00_2174))->BgL_acctz00) =
							((obj_t) BgL_auxz00_6667), BUNSPEC);
					}
					BgL_auxz00_6628 = BgL_oz00_2174;
					return (obj_t) (BgL_auxz00_6628);
				}
			}
		}
	}



/* object->struct-ftp2228 */
	obj_t BGl_objectzd2ze3structzd2ftp2228ze3zz__ftpz00(obj_t BgL_envz00_4033,
		obj_t BgL_obj1903z00_4034)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 57 */
			{
				BgL_ftpz00_bglt BgL_obj1903z00_2150;

				BgL_obj1903z00_2150 = (BgL_ftpz00_bglt) (BgL_obj1903z00_4034);
				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_res1904z00_2153;

					BgL_res1904z00_2153 =
						make_struct(BGl_symbol3465z00zz__ftpz00,
						(int) (((long) 10)), BUNSPEC);
					{	/* Unsafe/ftp.scm 57 */
						int BgL_auxz00_6675;

						BgL_auxz00_6675 = (int) (((long) 0));
						STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6675, BFALSE);
					}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2831z00_2155;

						{
							BgL_z52ftpz52_bglt BgL_auxz00_6678;

							BgL_auxz00_6678 = (BgL_z52ftpz52_bglt) (BgL_obj1903z00_2150);
							BgL_arg2831z00_2155 =
								(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_6678))->BgL_cmdz00);
						}
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6681;

							BgL_auxz00_6681 = (int) (((long) 1));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6681,
								BgL_arg2831z00_2155);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2833z00_2157;

						{
							BgL_z52ftpz52_bglt BgL_auxz00_6684;

							BgL_auxz00_6684 = (BgL_z52ftpz52_bglt) (BgL_obj1903z00_2150);
							BgL_arg2833z00_2157 =
								(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_6684))->BgL_dtpz00);
						}
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6687;

							BgL_auxz00_6687 = (int) (((long) 2));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6687,
								BgL_arg2833z00_2157);
					}}
					{	/* Unsafe/ftp.scm 57 */
						bool_t BgL_arg2835z00_2159;

						{
							BgL_z52ftpz52_bglt BgL_auxz00_6690;

							BgL_auxz00_6690 = (BgL_z52ftpz52_bglt) (BgL_obj1903z00_2150);
							BgL_arg2835z00_2159 =
								(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_6690))->
								BgL_passivezf3zf3);
						}
						{	/* Unsafe/ftp.scm 57 */
							obj_t BgL_auxz00_6695;

							int BgL_auxz00_6693;

							BgL_auxz00_6695 = BBOOL(BgL_arg2835z00_2159);
							BgL_auxz00_6693 = (int) (((long) 3));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6693, BgL_auxz00_6695);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2837z00_2161;

						BgL_arg2837z00_2161 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_hostz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6699;

							BgL_auxz00_6699 = (int) (((long) 4));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6699,
								BgL_arg2837z00_2161);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2839z00_2163;

						BgL_arg2839z00_2163 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_portz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6703;

							BgL_auxz00_6703 = (int) (((long) 5));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6703,
								BgL_arg2839z00_2163);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2842z00_2165;

						BgL_arg2842z00_2165 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_motdz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6707;

							BgL_auxz00_6707 = (int) (((long) 6));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6707,
								BgL_arg2842z00_2165);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2844z00_2167;

						BgL_arg2844z00_2167 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_userz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6711;

							BgL_auxz00_6711 = (int) (((long) 7));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6711,
								BgL_arg2844z00_2167);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2846z00_2169;

						BgL_arg2846z00_2169 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_passz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6715;

							BgL_auxz00_6715 = (int) (((long) 8));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6715,
								BgL_arg2846z00_2169);
					}}
					{	/* Unsafe/ftp.scm 57 */
						obj_t BgL_arg2848z00_2171;

						BgL_arg2848z00_2171 =
							(((BgL_ftpz00_bglt) CREF(BgL_obj1903z00_2150))->BgL_acctz00);
						{	/* Unsafe/ftp.scm 57 */
							int BgL_auxz00_6719;

							BgL_auxz00_6719 = (int) (((long) 9));
							STRUCT_SET(BgL_res1904z00_2153, BgL_auxz00_6719,
								BgL_arg2848z00_2171);
					}}
					return BgL_res1904z00_2153;
				}
			}
		}
	}



/* struct+object->objec2226 */
	obj_t BGl_structzb2objectzd2ze3objec2226z83zz__ftpz00(obj_t BgL_envz00_4035,
		obj_t BgL_oz00_4036, obj_t BgL_sz00_4037)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{
				BgL_z62ftpzd2errorzb0_bglt BgL_oz00_2137;

				obj_t BgL_sz00_2138;

				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_auxz00_6723;

					BgL_oz00_2137 = (BgL_z62ftpzd2errorzb0_bglt) (BgL_oz00_4036);
					BgL_sz00_2138 = BgL_sz00_4037;
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2828z00_2141;

						BgL_arg2828z00_2141 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 0)));
						{	/* Unsafe/ftp.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_6726;

							BgL_auxz00_6726 = (BgL_objectz00_bglt) (BgL_oz00_2137);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6726, BgL_arg2828z00_2141);
					}}
					{
						obj_t BgL_auxz00_6729;

						BgL_auxz00_6729 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 1)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_6729), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6733;

						BgL_auxz00_6733 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 2)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_6733), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6737;

						BgL_auxz00_6737 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 3)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_6737), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6741;

						BgL_auxz00_6741 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 4)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->BgL_procz00) =
							((obj_t) BgL_auxz00_6741), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6745;

						BgL_auxz00_6745 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 5)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->BgL_msgz00) =
							((obj_t) BgL_auxz00_6745), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6749;

						BgL_auxz00_6749 = STRUCT_REF(BgL_sz00_2138, (int) (((long) 6)));
						((((BgL_z62ftpzd2errorzb0_bglt) CREF(BgL_oz00_2137))->BgL_objz00) =
							((obj_t) BgL_auxz00_6749), BUNSPEC);
					}
					BgL_auxz00_6723 = BgL_oz00_2137;
					return (obj_t) (BgL_auxz00_6723);
				}
			}
		}
	}



/* object->struct-&ftp-2224 */
	obj_t BGl_objectzd2ze3structzd2z62ftpzd22224z53zz__ftpz00(obj_t
		BgL_envz00_4038, obj_t BgL_obj1977z00_4039)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 64 */
			{
				BgL_z62ftpzd2errorzb0_bglt BgL_obj1977z00_2119;

				BgL_obj1977z00_2119 =
					(BgL_z62ftpzd2errorzb0_bglt) (BgL_obj1977z00_4039);
				{	/* Unsafe/ftp.scm 64 */
					obj_t BgL_res1978z00_2122;

					BgL_res1978z00_2122 =
						make_struct(BGl_symbol3477z00zz__ftpz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Unsafe/ftp.scm 64 */
						int BgL_auxz00_6757;

						BgL_auxz00_6757 = (int) (((long) 0));
						STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6757, BFALSE);
					}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2814z00_2124;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6760;

							BgL_auxz00_6760 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2814z00_2124 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6760))->
								BgL_fnamez00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6763;

							BgL_auxz00_6763 = (int) (((long) 1));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6763,
								BgL_arg2814z00_2124);
					}}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2816z00_2126;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6766;

							BgL_auxz00_6766 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2816z00_2126 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6766))->
								BgL_locationz00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6769;

							BgL_auxz00_6769 = (int) (((long) 2));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6769,
								BgL_arg2816z00_2126);
					}}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2819z00_2128;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6772;

							BgL_auxz00_6772 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2819z00_2128 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6772))->
								BgL_stackz00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6775;

							BgL_auxz00_6775 = (int) (((long) 3));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6775,
								BgL_arg2819z00_2128);
					}}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2821z00_2130;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6778;

							BgL_auxz00_6778 = (BgL_z62errorz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2821z00_2130 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6778))->BgL_procz00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6781;

							BgL_auxz00_6781 = (int) (((long) 4));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6781,
								BgL_arg2821z00_2130);
					}}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2823z00_2132;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6784;

							BgL_auxz00_6784 = (BgL_z62errorz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2823z00_2132 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6784))->BgL_msgz00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6787;

							BgL_auxz00_6787 = (int) (((long) 5));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6787,
								BgL_arg2823z00_2132);
					}}
					{	/* Unsafe/ftp.scm 64 */
						obj_t BgL_arg2826z00_2134;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6790;

							BgL_auxz00_6790 = (BgL_z62errorz62_bglt) (BgL_obj1977z00_2119);
							BgL_arg2826z00_2134 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6790))->BgL_objz00);
						}
						{	/* Unsafe/ftp.scm 64 */
							int BgL_auxz00_6793;

							BgL_auxz00_6793 = (int) (((long) 6));
							STRUCT_SET(BgL_res1978z00_2122, BgL_auxz00_6793,
								BgL_arg2826z00_2134);
					}}
					return BgL_res1978z00_2122;
				}
			}
		}
	}



/* struct+object->objec2222 */
	obj_t BGl_structzb2objectzd2ze3objec2222z83zz__ftpz00(obj_t BgL_envz00_4040,
		obj_t BgL_oz00_4041, obj_t BgL_sz00_4042)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_oz00_2106;

				obj_t BgL_sz00_2107;

				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_auxz00_6797;

					BgL_oz00_2106 = (BgL_z62ftpzd2parsezd2errorz62_bglt) (BgL_oz00_4041);
					BgL_sz00_2107 = BgL_sz00_4042;
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2811z00_2110;

						BgL_arg2811z00_2110 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 0)));
						{	/* Unsafe/ftp.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_6800;

							BgL_auxz00_6800 = (BgL_objectz00_bglt) (BgL_oz00_2106);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6800, BgL_arg2811z00_2110);
					}}
					{
						obj_t BgL_auxz00_6803;

						BgL_auxz00_6803 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 1)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_6803), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6807;

						BgL_auxz00_6807 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 2)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_6807), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6811;

						BgL_auxz00_6811 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 3)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_6811), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6815;

						BgL_auxz00_6815 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 4)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_procz00) = ((obj_t) BgL_auxz00_6815), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6819;

						BgL_auxz00_6819 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 5)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_6819), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_6823;

						BgL_auxz00_6823 = STRUCT_REF(BgL_sz00_2107, (int) (((long) 6)));
						((((BgL_z62ftpzd2parsezd2errorz62_bglt) CREF(BgL_oz00_2106))->
								BgL_objz00) = ((obj_t) BgL_auxz00_6823), BUNSPEC);
					}
					BgL_auxz00_6797 = BgL_oz00_2106;
					return (obj_t) (BgL_auxz00_6797);
				}
			}
		}
	}



/* object->struct-&ftp-2220 */
	obj_t BGl_objectzd2ze3structzd2z62ftpzd22220z53zz__ftpz00(obj_t
		BgL_envz00_4043, obj_t BgL_obj2039z00_4044)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 65 */
			{
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_obj2039z00_2088;

				BgL_obj2039z00_2088 =
					(BgL_z62ftpzd2parsezd2errorz62_bglt) (BgL_obj2039z00_4044);
				{	/* Unsafe/ftp.scm 65 */
					obj_t BgL_res2040z00_2091;

					BgL_res2040z00_2091 =
						make_struct(BGl_symbol3479z00zz__ftpz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Unsafe/ftp.scm 65 */
						int BgL_auxz00_6831;

						BgL_auxz00_6831 = (int) (((long) 0));
						STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6831, BFALSE);
					}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2799z00_2093;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6834;

							BgL_auxz00_6834 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2799z00_2093 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6834))->
								BgL_fnamez00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6837;

							BgL_auxz00_6837 = (int) (((long) 1));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6837,
								BgL_arg2799z00_2093);
					}}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2801z00_2095;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6840;

							BgL_auxz00_6840 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2801z00_2095 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6840))->
								BgL_locationz00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6843;

							BgL_auxz00_6843 = (int) (((long) 2));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6843,
								BgL_arg2801z00_2095);
					}}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2803z00_2097;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_6846;

							BgL_auxz00_6846 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2803z00_2097 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_6846))->
								BgL_stackz00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6849;

							BgL_auxz00_6849 = (int) (((long) 3));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6849,
								BgL_arg2803z00_2097);
					}}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2805z00_2099;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6852;

							BgL_auxz00_6852 = (BgL_z62errorz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2805z00_2099 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6852))->BgL_procz00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6855;

							BgL_auxz00_6855 = (int) (((long) 4));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6855,
								BgL_arg2805z00_2099);
					}}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2807z00_2101;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6858;

							BgL_auxz00_6858 = (BgL_z62errorz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2807z00_2101 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6858))->BgL_msgz00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6861;

							BgL_auxz00_6861 = (int) (((long) 5));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6861,
								BgL_arg2807z00_2101);
					}}
					{	/* Unsafe/ftp.scm 65 */
						obj_t BgL_arg2809z00_2103;

						{
							BgL_z62errorz62_bglt BgL_auxz00_6864;

							BgL_auxz00_6864 = (BgL_z62errorz62_bglt) (BgL_obj2039z00_2088);
							BgL_arg2809z00_2103 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_6864))->BgL_objz00);
						}
						{	/* Unsafe/ftp.scm 65 */
							int BgL_auxz00_6867;

							BgL_auxz00_6867 = (int) (((long) 6));
							STRUCT_SET(BgL_res2040z00_2091, BgL_auxz00_6867,
								BgL_arg2809z00_2103);
					}}
					return BgL_res2040z00_2091;
				}
			}
		}
	}



/* object-print-ftp2208 */
	obj_t BGl_objectzd2printzd2ftp2208z00zz__ftpz00(obj_t BgL_envz00_4045,
		obj_t BgL_oz00_4046, obj_t BgL_pz00_4047, obj_t BgL_printzd2slotzd2_4048)
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 113 */
			{
				BgL_ftpz00_bglt BgL_oz00_2076;

				obj_t BgL_pz00_2077;

				obj_t BgL_printzd2slotzd2_2078;

				BgL_oz00_2076 = (BgL_ftpz00_bglt) (BgL_oz00_4046);
				BgL_pz00_2077 = BgL_pz00_4047;
				BgL_printzd2slotzd2_2078 = BgL_printzd2slotzd2_4048;
				bgl_display_string(BGl_string3518z00zz__ftpz00, BgL_pz00_2077);
				{	/* Unsafe/ftp.scm 116 */
					obj_t BgL_arg2793z00_2082;

					BgL_arg2793z00_2082 =
						(((BgL_ftpz00_bglt) CREF(BgL_oz00_2076))->BgL_hostz00);
					PROCEDURE_ENTRY(BgL_printzd2slotzd2_2078) (BgL_printzd2slotzd2_2078,
						BgL_arg2793z00_2082, BgL_pz00_2077, BEOA);
				}
				bgl_display_string(BGl_string3519z00zz__ftpz00, BgL_pz00_2077);
				{	/* Unsafe/ftp.scm 118 */
					obj_t BgL_arg2794z00_2083;

					BgL_arg2794z00_2083 =
						(((BgL_ftpz00_bglt) CREF(BgL_oz00_2076))->BgL_userz00);
					PROCEDURE_ENTRY(BgL_printzd2slotzd2_2078) (BgL_printzd2slotzd2_2078,
						BgL_arg2794z00_2083, BgL_pz00_2077, BEOA);
				}
				bgl_display_string(BGl_string3520z00zz__ftpz00, BgL_pz00_2077);
				{	/* Unsafe/ftp.scm 120 */
					obj_t BgL_arg2795z00_2084;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_6880;

						BgL_auxz00_6880 = (BgL_z52ftpz52_bglt) (BgL_oz00_2076);
						BgL_arg2795z00_2084 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_6880))->BgL_dtpz00);
					}
					PROCEDURE_ENTRY(BgL_printzd2slotzd2_2078) (BgL_printzd2slotzd2_2078,
						BgL_arg2795z00_2084, BgL_pz00_2077, BEOA);
				}
				bgl_display_string(BGl_string3521z00zz__ftpz00, BgL_pz00_2077);
				{	/* Unsafe/ftp.scm 122 */
					bool_t BgL_arg2796z00_2085;

					{
						BgL_z52ftpz52_bglt BgL_auxz00_6886;

						BgL_auxz00_6886 = (BgL_z52ftpz52_bglt) (BgL_oz00_2076);
						BgL_arg2796z00_2085 =
							(((BgL_z52ftpz52_bglt) CREF(BgL_auxz00_6886))->BgL_passivezf3zf3);
					}
					bgl_display_obj(BBOOL(BgL_arg2796z00_2085), BgL_pz00_2077);
				}
				return bgl_display_string(BGl_string3522z00zz__ftpz00, BgL_pz00_2077);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ftpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/ftp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3523z00zz__ftpz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3523z00zz__ftpz00));
			return
				BGl_modulezd2initializa7ationz75zz__pregexpz00(((long) 11873058),
				BSTRING_TO_STRING(BGl_string3523z00zz__ftpz00));
		}
	}

#ifdef __cplusplus
}
#endif
