/*===========================================================================*/
/*   (Ieee/port.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/port.scm -indent -o objs/obj_u/Ieee/port.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62iozd2portzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2portzd2errorz62_bglt;

	typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                           
		*BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

	typedef struct BgL_z62httpzd2redirectionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_portz00;
		obj_t BgL_urlz00;
	}                               *BgL_z62httpzd2redirectionzb0_bglt;


	extern obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_symbol3061z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3063z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3067z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3076z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3080z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char *,
		char *);
	static obj_t BGl_symbol3100z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_symbol3091z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_symbol3093z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3096z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	extern int bgl_input_fill_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_symbol3098z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	extern bool_t bgl_input_port_timeout_set(obj_t, long);
	static obj_t BGl_symbol3113z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t bgl_open_input_procedure(obj_t, obj_t);
	static obj_t BGl_symbol3126z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		long);
	static obj_t BGl_symbol3139z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol3148z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3154z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3158z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	BGL_EXPORTED_DECL long
		BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_closez00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t make_string_sans_fill(long);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	extern int bgl_output_string(obj_t, obj_t);
	static obj_t BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern long bgl_file_size(char *);
	static obj_t BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, char *);
	static obj_t BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern int bgl_file_mode(char *);
	static obj_t BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00();
	static obj_t
		BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern bool_t fexists(char *);
	BGL_EXPORTED_DECL int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	extern int default_io_bufsiz;
	extern BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__deletezd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_append_output_file(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl_parserz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern BgL_z62iozd2portzd2errorz62_bglt
		BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char *);
	BGL_EXPORTED_DECL int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	extern obj_t socket_close(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	static obj_t
		BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
	static obj_t BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern bool_t directoryp(char *);
	static obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char *);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char *);
	extern obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__filezd2gidzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_open_input_resource(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_input_port_reopen(obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern obj_t bgl_output_port_seek(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t
		BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t close_binary_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__copyzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_open_input_c_string(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl__filezd2uidzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_reopen_input_c_string(obj_t, char *);
	static obj_t BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern int bgl_file_gid(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_z62httpzd2redirectionzb0zz__httpz00;
	extern obj_t get_output_string(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char *,
		char *);
	static obj_t BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern long bgl_last_modification_time(char *);
	static obj_t
		BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_directory_to_path_list(char *, int, unsigned char);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t string_to_bstring(char *);
	static obj_t
		BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_close_2776z00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_close_2778z00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_close_2780z00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_close_2779z00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();
	extern int bgl_file_uid(char *);
	extern obj_t bgl_input_port_seek(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_open_input_string_bang(obj_t);
	static obj_t BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_input_file(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_filezd2separatorzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32478ze3z83zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_flushz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t bgl_open_output_file(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_flush_2777z00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_flush_2781z00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32488ze3z83zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_output_procedure(obj_t, obj_t, obj_t, obj_t);
	extern bool_t bgl_output_port_timeout_set(obj_t, long);
	static obj_t BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_input_pipe(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32479ze3z83zz__r4_ports_6_10_1z00();
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	static obj_t BGl__portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__filezd2modezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32485ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t bgl_open_output_string(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3018z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t
		BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t directory_to_list(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
	extern bool_t reset_eof(obj_t);
	static obj_t BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__renamezd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3031z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol3035z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00();
	static obj_t BGl__directoryzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_symbol3043z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3045z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3048z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3051z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_symbol3056z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2procedu3188za7,
		BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2outputzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__callza7d2withza7d2o3189z00,
		BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23190z00,
		BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23191z00, opt_generic_entry,
		BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2modezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2modeza7d2za73192za7,
		BGl__filezd2modezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d3193z00, opt_generic_entry,
		BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23194z00,
		BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2inputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__setza7d2inputza7d2p3195z00,
		BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__closeza7d2outputza73196z00,
		BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3197z00,
		BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2gza7ipzd2portzd2envza7zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23198z00, opt_generic_entry,
		BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__currentza7d2outpu3199za7,
		BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2outputzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__callza7d2withza7d2o3200z00,
		BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23201z00, opt_generic_entry,
		BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3202z00,
		BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2directoryzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__makeza7d2director3203za7,
		BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2outputza7d3204z00,
		BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3205z00,
		BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2gidzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2gidza7d2za7za73206z00,
		BGl__filezd2gidzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2lastzd2tokenzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23207z00,
		BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2outputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__setza7d2outputza7d23208z00,
		BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2inputza7d23209z00,
		BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	extern obj_t BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2inputza7d23210z00,
		BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2bufferzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3211z00,
		BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2inputzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__callza7d2withza7d2i3212z00,
		BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__deleteza7d2fileza7d3213z00,
		BGl__deletezd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2proced3214za7,
		BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flushzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__flushza7d2outputza73215z00,
		BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3022z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za7c3anonymousza7a323216z00,
		BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2outputza7d3217z00,
		BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_directoryzd2ze3pathzd2listzd2envz31zz__r4_ports_6_10_1z00,
		BgL_bgl__directoryza7d2za7e33218z00,
		BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00,
		BgL_bgl__za752openza7d2input3219z00,
		BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2stringza73220z00,
		BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3073z00zz__r4_ports_6_10_1z00,
		BgL_bgl_flushza700za7za7__r4_p3221za7, BGl_flushz00zz__r4_ports_6_10_1z00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3074z00zz__r4_ports_6_10_1z00,
		BgL_bgl_closeza700za7za7__r4_p3222za7, BGl_closez00zz__r4_ports_6_10_1z00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2gza7ipzf3zd2envz54zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2gza7a7ipza7f3223za7,
		BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3224z00,
		BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3084z00zz__r4_ports_6_10_1z00,
		BgL_bgl_flush_2777za700za7za7_3225za7,
		BGl_flush_2777z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3085z00zz__r4_ports_6_10_1z00,
		BgL_bgl_close_2776za700za7za7_3226za7,
		BGl_close_2776z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3227z00,
		BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23228z00,
		BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7f33229z00,
		BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3121z00zz__r4_ports_6_10_1z00,
		BgL_bgl_flush_2781za700za7za7_3230za7,
		BGl_flush_2781z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3122z00zz__r4_ports_6_10_1z00,
		BgL_bgl_close_2780za700za7za7_3231za7,
		BGl_close_2780z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3124z00zz__r4_ports_6_10_1z00,
		BgL_bgl_close_2779za700za7za7_3232za7,
		BGl_close_2779z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3125z00zz__r4_ports_6_10_1z00,
		BgL_bgl_close_2778za700za7za7_3233za7,
		BGl_close_2778z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3234z00,
		BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23235z00,
		BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__closeza7d2inputza7d3236z00,
		BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2errorza7d23237z00,
		BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__currentza7d2input3238za7,
		BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3170z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za7c3anonymousza7a323239z00,
		BGl_zc3anonymousza32478ze3z83zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl__za752openza7d2input3240z00,
		BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2errorzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__currentza7d2error3241za7,
		BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2protocolzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23242z00,
		BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	extern obj_t BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7;
	   
		 
		DEFINE_STRING(BGl_string3020z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3020za700za7za7_3243za7, "file:", 5);
	      DEFINE_STRING(BGl_string3019z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3019za700za7za7_3244za7, "input-port-protocols", 20);
	      DEFINE_STRING(BGl_string3021z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3021za700za7za7_3245za7, "string:", 7);
	      DEFINE_STRING(BGl_string3023z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3023za700za7za7_3246za7, "| ", 2);
	      DEFINE_STRING(BGl_string3024z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3024za700za7za7_3247za7, "pipe:", 5);
	      DEFINE_STRING(BGl_string3025z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3025za700za7za7_3248za7, "http://", 7);
	      DEFINE_STRING(BGl_string3026z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3026za700za7za7_3249za7, "gzip:", 5);
	      DEFINE_STRING(BGl_string3027z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3027za700za7za7_3250za7, "zlib:", 5);
	      DEFINE_STRING(BGl_string3028z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3028za700za7za7_3251za7, "inflate:", 8);
	      DEFINE_STRING(BGl_string3030z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3030za700za7za7_3252za7, "ftp://", 6);
	      DEFINE_STRING(BGl_string3029z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3029za700za7za7_3253za7, "/resource/", 10);
	      DEFINE_STRING(BGl_string3032z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3032za700za7za7_3254za7, "open-input-string", 17);
	      DEFINE_STRING(BGl_string3033z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3033za700za7za7_3255za7, "Illegal start offset", 20);
	      DEFINE_STRING(BGl_string3034z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3034za700za7za7_3256za7, "Start offset out of bounds", 26);
	      DEFINE_STRING(BGl_string3036z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3036za700za7za7_3257za7, "call-with-input-file", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2directoryzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__deleteza7d2direct3258za7,
		BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3037z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3037za700za7za7_3259za7, "can't open file", 15);
	      DEFINE_STRING(BGl_string3038z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3038za700za7za7_3260za7, "/tmp/bigloo/runtime/Ieee/port.scm",
		33);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2inputzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__callza7d2withza7d2i3261z00,
		BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3040z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3040za700za7za7_3262za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3039z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3039za700za7za7_3263za7, "_call-with-input-file", 21);
	      DEFINE_STRING(BGl_string3041z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3041za700za7za7_3264za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3042z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3042za700za7za7_3265za7, "_call-with-input-string", 23);
	      DEFINE_STRING(BGl_string3044z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3044za700za7za7_3266za7, "open-output-file", 16);
	      DEFINE_STRING(BGl_string3046z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3046za700za7za7_3267za7, "call-with-output-file", 21);
	      DEFINE_STRING(BGl_string3047z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3047za700za7za7_3268za7, "_call-with-output-file", 22);
	      DEFINE_STRING(BGl_string3050z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3050za700za7za7_3269za7, "_call-with-output-string", 24);
	      DEFINE_STRING(BGl_string3049z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3049za700za7za7_3270za7, "append-output-file", 18);
	      DEFINE_STRING(BGl_string3052z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3052za700za7za7_3271za7, "input-port-reopen!", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__appendza7d2output3272za7, opt_generic_entry,
		BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3053z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3053za700za7za7_3273za7, "Can't reopen port", 17);
	      DEFINE_STRING(BGl_string3054z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3054za700za7za7_3274za7, "_input-port-reopen!", 19);
	      DEFINE_STRING(BGl_string3055z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3055za700za7za7_3275za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3057z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3057za700za7za7_3276za7, "with-input-from-file", 20);
	      DEFINE_STRING(BGl_string3058z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3058za700za7za7_3277za7, "_with-input-from-file", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2reopenz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23278z00,
		BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3060z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3060za700za7za7_3279za7, "_with-input-from-port", 21);
	      DEFINE_STRING(BGl_string3059z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3059za700za7za7_3280za7, "_with-input-from-string", 23);
	      DEFINE_STRING(BGl_string3062z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3062za700za7za7_3281za7, "open-input-procedure", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2existszf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2existsza7f3282z00,
		BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3064z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3064za700za7za7_3283za7, "with-input-from-procedure", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d3284z00, opt_generic_entry,
		BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3065z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3065za700za7za7_3285za7, "can't open procedure", 20);
	      DEFINE_STRING(BGl_string3066z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3066za700za7za7_3286za7, "_with-input-from-procedure", 26);
	      DEFINE_STRING(BGl_string3068z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3068za700za7za7_3287za7, "with-output-to-file", 19);
	      DEFINE_STRING(BGl_string3070z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3070za700za7za7_3288za7, "_with-output-to-port", 20);
	      DEFINE_STRING(BGl_string3069z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3069za700za7za7_3289za7, "_with-output-to-file", 20);
	      DEFINE_STRING(BGl_string3071z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3071za700za7za7_3290za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3072z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3072za700za7za7_3291za7, "_with-output-to-string", 22);
	      DEFINE_STRING(BGl_string3075z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3075za700za7za7_3292za7, "_with-output-to-procedure", 25);
	      DEFINE_STRING(BGl_string3077z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3077za700za7za7_3293za7, "with-error-to-string", 20);
	      DEFINE_STRING(BGl_string3078z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3078za700za7za7_3294za7, "can't open string", 17);
	      DEFINE_STRING(BGl_string3079z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3079za700za7za7_3295za7, "_with-error-to-string", 21);
	      DEFINE_STRING(BGl_string3081z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3081za700za7za7_3296za7, "with-error-to-file", 18);
	      DEFINE_STRING(BGl_string3082z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3082za700za7za7_3297za7, "_with-error-to-file", 19);
	      DEFINE_STRING(BGl_string3083z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3083za700za7za7_3298za7, "_with-error-to-port", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23299z00,
		BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3086z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3086za700za7za7_3300za7, "_with-error-to-procedure", 24);
	      DEFINE_STRING(BGl_string3087z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3087za700za7za7_3301za7, "Illegal buffer", 14);
	      DEFINE_STRING(BGl_string3088z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3088za700za7za7_3302za7, "_get-port-buffer", 16);
	      DEFINE_STRING(BGl_string3090z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3090za700za7za7_3303za7, "int", 3);
	      DEFINE_STRING(BGl_string3089z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3089za700za7za7_3304za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3101z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3101za700za7za7_3305za7, "input-port-close-hook-set!", 26);
	      DEFINE_STRING(BGl_string3102z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3102za700za7za7_3306za7, "Illegal hook", 12);
	      DEFINE_STRING(BGl_string3092z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3092za700za7za7_3307za7, "open-input-pipe", 15);
	      DEFINE_STRING(BGl_string3103z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3103za700za7za7_3308za7, "", 0);
	      DEFINE_STRING(BGl_string3104z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3104za700za7za7_3309za7, "Cannot open URL (~a)", 20);
	      DEFINE_STRING(BGl_string3094z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3094za700za7za7_3310za7, "open-input-file", 15);
	      DEFINE_STRING(BGl_string3105z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3105za700za7za7_3311za7,
		"Cannot open URL, authentication required", 40);
	      DEFINE_STRING(BGl_string3095z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3095za700za7za7_3312za7, "http", 4);
	      DEFINE_STRING(BGl_string3106z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3106za700za7za7_3313za7, "Cannot open URL", 15);
	      DEFINE_STRING(BGl_string3107z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3107za700za7za7_3314za7, "_open-input-file", 16);
	      DEFINE_STRING(BGl_string3097z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3097za700za7za7_3315za7, "get", 3);
	      DEFINE_STRING(BGl_string3108z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3108za700za7za7_3316za7, "_open-input-string", 18);
	      DEFINE_STRING(BGl_string3110z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3110za700za7za7_3317za7, "_open-input-string!", 19);
	      DEFINE_STRING(BGl_string3109z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3109za700za7za7_3318za7, "long", 4);
	      DEFINE_STRING(BGl_string3099z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3099za700za7za7_3319za7, "HTTP/1.1", 8);
	      DEFINE_STRING(BGl_string3111z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3111za700za7za7_3320za7, "_open-input-procedure", 21);
	      DEFINE_STRING(BGl_string3112z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3112za700za7za7_3321za7, "_open-input-gzip-port", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2directorieszd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__makeza7d2director3322za7,
		BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3114z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3114za700za7za7_3323za7, "open-input-gzip-port", 20);
	      DEFINE_STRING(BGl_string3115z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3115za700za7za7_3324za7, "_open-input-c-string", 20);
	      DEFINE_STRING(BGl_string3116z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3116za700za7za7_3325za7, "string", 6);
	      DEFINE_STRING(BGl_string3117z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3117za700za7za7_3326za7, "_reopen-input-c-string", 22);
	      DEFINE_STRING(BGl_string3118z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3118za700za7za7_3327za7, "_input-port-timeout-set!", 24);
	      DEFINE_STRING(BGl_string3120z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3120za700za7za7_3328za7, "_append-output-file", 19);
	      DEFINE_STRING(BGl_string3119z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3119za700za7za7_3329za7, "_open-output-file", 17);
	      DEFINE_STRING(BGl_string3123z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3123za700za7za7_3330za7, "_open-output-procedure", 22);
	      DEFINE_STRING(BGl_string3127z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3127za700za7za7_3331za7, "open-output-procedure", 21);
	      DEFINE_STRING(BGl_string3128z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3128za700za7za7_3332za7, "Illegal flush procedure", 23);
	      DEFINE_STRING(BGl_string3130z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3130za700za7za7_3333za7, "Illegal write procedure", 23);
	      DEFINE_STRING(BGl_string3129z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3129za700za7za7_3334za7, "Illegal close procedure", 23);
	      DEFINE_STRING(BGl_string3131z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3131za700za7za7_3335za7, "_output-port-timeout-set!", 25);
	      DEFINE_STRING(BGl_string3132z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3132za700za7za7_3336za7, "_closed-input-port?", 19);
	      DEFINE_STRING(BGl_string3133z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3133za700za7za7_3337za7, "_close-input-port", 17);
	      DEFINE_STRING(BGl_string3134z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3134za700za7za7_3338za7, "_get-output-string", 18);
	      DEFINE_STRING(BGl_string3135z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3135za700za7za7_3339za7, "_close-output-port", 18);
	      DEFINE_STRING(BGl_string3136z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3136za700za7za7_3340za7, "_flush-output-port", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2inputza7d23341z00,
		BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3137z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3137za700za7za7_3342za7, "_reset-output-port", 18);
	      DEFINE_STRING(BGl_string3138z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3138za700za7za7_3343za7, "_reset-eof", 10);
	      DEFINE_STRING(BGl_string3140z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3140za700za7za7_3344za7, "set-input-port-position!", 24);
	      DEFINE_STRING(BGl_string3141z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3141za700za7za7_3345za7, "Can't seek port", 15);
	      DEFINE_STRING(BGl_string3142z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3142za700za7za7_3346za7, "_set-input-port-position!", 25);
	      DEFINE_STRING(BGl_string3143z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3143za700za7za7_3347za7, "_input-port-position", 20);
	      DEFINE_STRING(BGl_string3144z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3144za700za7za7_3348za7, "_input-port-fill-barrier", 24);
	      DEFINE_STRING(BGl_string3145z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3145za700za7za7_3349za7, "_input-port-fill-barrier-set!", 29);
	      DEFINE_STRING(BGl_string3146z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3146za700za7za7_3350za7, "_input-port-last-token-position",
		31);
	      DEFINE_STRING(BGl_string3147z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3147za700za7za7_3351za7, "_output-port-name", 17);
	      DEFINE_STRING(BGl_string3150z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3150za700za7za7_3352za7, "_set-output-port-position!", 26);
	      DEFINE_STRING(BGl_string3149z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3149za700za7za7_3353za7, "set-output-port-position!", 25);
	      DEFINE_STRING(BGl_string3151z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3151za700za7za7_3354za7, "_output-port-position", 21);
	      DEFINE_STRING(BGl_string3152z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3152za700za7za7_3355za7, "_input-port-name", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2fillzd2barrierzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23356z00,
		BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3153z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3153za700za7za7_3357za7, "_output-port-close-hook", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_renamezd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__renameza7d2fileza7d3358z00,
		BGl__renamezd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3155z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3155za700za7za7_3359za7, "output-port-close-hook-set!", 27);
	      DEFINE_STRING(BGl_string3156z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3156za700za7za7_3360za7, "_output-port-close-hook-set!", 28);
	      DEFINE_STRING(BGl_string3157z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3157za700za7za7_3361za7, "_output-port-flush-hook", 23);
	      DEFINE_STRING(BGl_string3160z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3160za700za7za7_3362za7, "_output-port-flush-hook-set!", 28);
	      DEFINE_STRING(BGl_string3159z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3159za700za7za7_3363za7, "output-port-flush-hook-set!", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__resetza7d2outputza73364z00,
		BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3161z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3161za700za7za7_3365za7, "_output-port-flush-buffer", 25);
	      DEFINE_STRING(BGl_string3162z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3162za700za7za7_3366za7, "_output-port-flush-buffer-set!",
		30);
	      DEFINE_STRING(BGl_string3163z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3163za700za7za7_3367za7, "_input-port-close-hook", 22);
	      DEFINE_STRING(BGl_string3164z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3164za700za7za7_3368za7, "_input-port-close-hook-set!", 27);
	      DEFINE_STRING(BGl_string3165z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3165za700za7za7_3369za7, "_input-port-buffer", 18);
	      DEFINE_STRING(BGl_string3166z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3166za700za7za7_3370za7, "_input-port-buffer-set!", 23);
	      DEFINE_STRING(BGl_string3167z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3167za700za7za7_3371za7, "_output-port-buffer", 19);
	      DEFINE_STRING(BGl_string3168z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3168za700za7za7_3372za7, "_output-port-buffer-set!", 24);
	      DEFINE_STRING(BGl_string3169z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3169za700za7za7_3373za7, "_file-exists?", 13);
	      DEFINE_STRING(BGl_string3171z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3171za700za7za7_3374za7, "_delete-file", 12);
	      DEFINE_STRING(BGl_string3172z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3172za700za7za7_3375za7, "_make-directory", 15);
	      DEFINE_STRING(BGl_string3173z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3173za700za7za7_3376za7, "_make-directories", 17);
	      DEFINE_STRING(BGl_string3174z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3174za700za7za7_3377za7, "_delete-directory", 17);
	      DEFINE_STRING(BGl_string3175z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3175za700za7za7_3378za7, "_rename-file", 12);
	      DEFINE_STRING(BGl_string3176z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3176za700za7za7_3379za7, "_copy-file", 10);
	      DEFINE_STRING(BGl_string3177z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3177za700za7za7_3380za7, "_directory?", 11);
	      DEFINE_STRING(BGl_string3178z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3178za700za7za7_3381za7, "_directory->list", 16);
	      DEFINE_STRING(BGl_string3180z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3180za700za7za7_3382za7, "_file-modification-time", 23);
	      DEFINE_STRING(BGl_string3179z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3179za700za7za7_3383za7, "_directory->path-list", 21);
	      DEFINE_STRING(BGl_string3181z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3181za700za7za7_3384za7, "_file-size", 10);
	      DEFINE_STRING(BGl_string3182z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3182za700za7za7_3385za7, "_file-uid", 9);
	      DEFINE_STRING(BGl_string3183z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3183za700za7za7_3386za7, "_file-gid", 9);
	      DEFINE_STRING(BGl_string3184z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3184za700za7za7_3387za7, "_file-mode", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__getza7d2portza7d2bu3388z00,
		BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string3185za700za7za7_3389za7, "__r4_ports_6_10_1", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23390z00,
		BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3391z00,
		BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2errorza7d23392z00,
		BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closedzd2inputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__closedza7d2inputza73393z00,
		BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d3394z00, opt_generic_entry,
		BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__portza7f3za7f3za7za7__r3395z00,
		BGl__portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3396z00,
		BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2outputza7d3397z00,
		BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2string3398za7,
		BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_directoryzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl__directoryza7f3za7f33399z00,
		BGl__directoryzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl__za752openza7d2input3400z00,
		BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	extern obj_t BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2bufferzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3401z00,
		BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reopenzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__reopenza7d2inputza73402z00,
		BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl__za752openza7d2input3403z00,
		BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__getza7d2outputza7d23404z00,
		BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2protocolzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23405z00,
		BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2stringz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23406z00,
		BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7d3407z00,
		BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl__outputza7d2portza7f3408z00,
		BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2outputza7d3409z00,
		BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2modificationzd2timezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2modifica3410za7,
		BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copyzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__copyza7d2fileza7d2za73411za7,
		BGl__copyzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23412z00,
		BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2eofzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__resetza7d2eofza7d2za73413za7,
		BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2inputza7d23414z00,
		BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2errorza7d23415z00,
		BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__withza7d2errorza7d23416z00,
		BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_directoryzd2ze3listzd2envze3zz__r4_ports_6_10_1z00,
		BgL_bgl__directoryza7d2za7e33417z00,
		BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23418z00, opt_generic_entry,
		BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2fillzd2barrierzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2portza7d23419z00,
		BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2uidzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2uidza7d2za7za73420z00,
		BGl__filezd2uidzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d23421z00,
		BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2siza7ezd2envza7zz__r4_ports_6_10_1z00,
		BgL_bgl__fileza7d2siza7a7eza773422za7,
		BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2gza7ipzd2portzf3zd2envz86zz__r4_ports_6_10_1z00,
		BgL_bgl__inputza7d2gza7a7ipza73423za7,
		BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long
		BgL_checksumz00_3146, char *BgL_fromz00_3147)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
					BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
					BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 18 */
			BGl_symbol3018z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3019z00zz__r4_ports_6_10_1z00);
			BGl_symbol3031z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3032z00zz__r4_ports_6_10_1z00);
			BGl_symbol3035z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3036z00zz__r4_ports_6_10_1z00);
			BGl_symbol3043z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3044z00zz__r4_ports_6_10_1z00);
			BGl_symbol3045z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3046z00zz__r4_ports_6_10_1z00);
			BGl_symbol3048z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3049z00zz__r4_ports_6_10_1z00);
			BGl_symbol3051z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3052z00zz__r4_ports_6_10_1z00);
			BGl_symbol3056z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3057z00zz__r4_ports_6_10_1z00);
			BGl_symbol3061z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3062z00zz__r4_ports_6_10_1z00);
			BGl_symbol3063z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3064z00zz__r4_ports_6_10_1z00);
			BGl_symbol3067z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3068z00zz__r4_ports_6_10_1z00);
			BGl_symbol3076z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3077z00zz__r4_ports_6_10_1z00);
			BGl_symbol3080z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3081z00zz__r4_ports_6_10_1z00);
			BGl_symbol3091z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3092z00zz__r4_ports_6_10_1z00);
			BGl_symbol3093z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3094z00zz__r4_ports_6_10_1z00);
			BGl_symbol3096z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3097z00zz__r4_ports_6_10_1z00);
			BGl_symbol3098z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3095z00zz__r4_ports_6_10_1z00);
			BGl_symbol3100z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3101z00zz__r4_ports_6_10_1z00);
			BGl_symbol3113z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3114z00zz__r4_ports_6_10_1z00);
			BGl_symbol3126z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3127z00zz__r4_ports_6_10_1z00);
			BGl_symbol3139z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3140z00zz__r4_ports_6_10_1z00);
			BGl_symbol3148z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3149z00zz__r4_ports_6_10_1z00);
			BGl_symbol3154z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3155z00zz__r4_ports_6_10_1z00);
			return (BGl_symbol3158z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string3159z00zz__r4_ports_6_10_1z00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 18 */
			BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 =
				bgl_make_mutex(BGl_symbol3018z00zz__r4_ports_6_10_1z00);
			{	/* Ieee/port.scm 763 */
				obj_t BgL_arg2278z00_979;

				obj_t BgL_arg2279z00_980;

				BgL_arg2278z00_979 =
					MAKE_PAIR(BGl_string3020z00zz__r4_ports_6_10_1z00,
					BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00);
				{	/* Ieee/port.scm 764 */
					obj_t BgL_arg2280z00_981;

					obj_t BgL_arg2281z00_982;

					obj_t BgL_arg2282z00_983;

					obj_t BgL_arg2283z00_984;

					obj_t BgL_arg2284z00_985;

					obj_t BgL_arg2285z00_986;

					obj_t BgL_arg2286z00_987;

					obj_t BgL_arg2289z00_988;

					obj_t BgL_arg2290z00_989;

					BgL_arg2280z00_981 =
						MAKE_PAIR(BGl_string3021z00zz__r4_ports_6_10_1z00,
						BGl_proc3022z00zz__r4_ports_6_10_1z00);
					BgL_arg2281z00_982 =
						MAKE_PAIR(BGl_string3023z00zz__r4_ports_6_10_1z00,
						BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00);
					BgL_arg2282z00_983 =
						MAKE_PAIR(BGl_string3024z00zz__r4_ports_6_10_1z00,
						BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00);
					BgL_arg2283z00_984 =
						MAKE_PAIR(BGl_string3025z00zz__r4_ports_6_10_1z00,
						BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00);
					BgL_arg2284z00_985 =
						MAKE_PAIR(BGl_string3026z00zz__r4_ports_6_10_1z00,
						BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7);
					BgL_arg2285z00_986 =
						MAKE_PAIR(BGl_string3027z00zz__r4_ports_6_10_1z00,
						BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7);
					BgL_arg2286z00_987 =
						MAKE_PAIR(BGl_string3028z00zz__r4_ports_6_10_1z00,
						BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7);
					BgL_arg2289z00_988 =
						MAKE_PAIR(BGl_string3029z00zz__r4_ports_6_10_1z00,
						BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00);
					BgL_arg2290z00_989 =
						MAKE_PAIR(BGl_string3030z00zz__r4_ports_6_10_1z00,
						BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00);
					{	/* Ieee/port.scm 763 */
						obj_t BgL_list2292z00_991;

						{	/* Ieee/port.scm 763 */
							obj_t BgL_arg2293z00_992;

							{	/* Ieee/port.scm 763 */
								obj_t BgL_arg2294z00_993;

								{	/* Ieee/port.scm 763 */
									obj_t BgL_arg2295z00_994;

									{	/* Ieee/port.scm 763 */
										obj_t BgL_arg2296z00_995;

										{	/* Ieee/port.scm 763 */
											obj_t BgL_arg2297z00_996;

											{	/* Ieee/port.scm 763 */
												obj_t BgL_arg2300z00_997;

												{	/* Ieee/port.scm 763 */
													obj_t BgL_arg2301z00_998;

													{	/* Ieee/port.scm 763 */
														obj_t BgL_arg2302z00_999;

														BgL_arg2302z00_999 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2301z00_998 =
															MAKE_PAIR(BgL_arg2290z00_989, BgL_arg2302z00_999);
													}
													BgL_arg2300z00_997 =
														MAKE_PAIR(BgL_arg2289z00_988, BgL_arg2301z00_998);
												}
												BgL_arg2297z00_996 =
													MAKE_PAIR(BgL_arg2286z00_987, BgL_arg2300z00_997);
											}
											BgL_arg2296z00_995 =
												MAKE_PAIR(BgL_arg2285z00_986, BgL_arg2297z00_996);
										}
										BgL_arg2295z00_994 =
											MAKE_PAIR(BgL_arg2284z00_985, BgL_arg2296z00_995);
									}
									BgL_arg2294z00_993 =
										MAKE_PAIR(BgL_arg2283z00_984, BgL_arg2295z00_994);
								}
								BgL_arg2293z00_992 =
									MAKE_PAIR(BgL_arg2282z00_983, BgL_arg2294z00_993);
							}
							BgL_list2292z00_991 =
								MAKE_PAIR(BgL_arg2281z00_982, BgL_arg2293z00_992);
						}
						BgL_arg2279z00_980 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2280z00_981,
							BgL_list2292z00_991);
					}
				}
				return (BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
					MAKE_PAIR(BgL_arg2278z00_979, BgL_arg2279z00_980), BUNSPEC);
			}
		}
	}



/* <anonymous:2305> */
	obj_t BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2530, obj_t BgL_sz00_2531, obj_t BgL_pz00_2532)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 764 */
			{
				obj_t BgL_sz00_1002;

				obj_t BgL_pz00_1003;

				BgL_sz00_1002 = BgL_sz00_2531;
				BgL_pz00_1003 = BgL_pz00_2532;
				{	/* Ieee/port.scm 764 */

					{	/* Ieee/port.scm 764 */
						obj_t BgL_stringz00_2004;

						obj_t BgL_startz00_2005;

						BgL_stringz00_2004 = BgL_sz00_1002;
						BgL_startz00_2005 = BINT(((long) 0));
						if (((long) CINT(BgL_startz00_2005) < ((long) 0)))
							{	/* Ieee/port.scm 764 */
								return
									BGl_errorz00zz__errorz00
									(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
									BGl_string3033z00zz__r4_ports_6_10_1z00, BgL_startz00_2005);
							}
						else
							{	/* Ieee/port.scm 764 */
								if (
									((long) CINT(BgL_startz00_2005) >
										STRING_LENGTH(BgL_stringz00_2004)))
									{	/* Ieee/port.scm 764 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
											BGl_string3034z00zz__r4_ports_6_10_1z00,
											BgL_startz00_2005);
									}
								else
									{	/* Ieee/port.scm 764 */
										return
											bgl_open_input_string(BgL_stringz00_2004,
											CINT(BgL_startz00_2005));
									}
							}
					}
				}
			}
		}
	}



/* call-with-input-file */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_1, obj_t BgL_procz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 450 */
			{	/* Ieee/port.scm 451 */
				obj_t BgL_portz00_1008;

				{	/* Ieee/port.scm 375 */

					BgL_portz00_1008 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_1,
						BTRUE);
				}
				if (INPUT_PORTP(BgL_portz00_1008))
					{	/* Ieee/port.scm 453 */
						obj_t BgL_val2097z00_1010;

						BgL_val2097z00_1010 =
							BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(BgL_portz00_1008,
							BgL_procz00_2);
						bgl_close_input_port(BgL_portz00_1008);
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val2097z00_1010)))
							{	/* Ieee/port.scm 455 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val2097z00_1010),
									CDR(BgL_val2097z00_1010));
							}
						else
							{	/* Ieee/port.scm 455 */
								return BgL_val2097z00_1010;
							}
					}
				else
					{	/* Ieee/port.scm 452 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3035z00zz__r4_ports_6_10_1z00,
							BGl_string3037z00zz__r4_ports_6_10_1z00, BgL_stringz00_1);
					}
			}
		}
	}



/* <exit:2310> */
	obj_t BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_portz00_2837,
		obj_t BgL_procz00_2836)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 455 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2098z00_1015;

			if (SET_EXIT(BgL_an_exit2098z00_1015))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2098z00_1015 = (void *) jmpbuf;
					{	/* Ieee/port.scm 455 */

						PUSH_EXIT(BgL_an_exit2098z00_1015, ((long) 0));
						{	/* Ieee/port.scm 454 */
							obj_t BgL_val2099z00_1016;

							BgL_val2099z00_1016 =
								PROCEDURE_ENTRY(BgL_procz00_2836) (BgL_procz00_2836,
								BgL_portz00_2837, BEOA);
							POP_EXIT();
							return BgL_val2099z00_1016;
						}
					}
				}
		}
	}



/* _call-with-input-file */
	obj_t BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2557, obj_t BgL_stringz00_2558, obj_t BgL_procz00_2559)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 450 */
			{	/* Ieee/port.scm 451 */
				obj_t BgL_auxz00_3237;

				obj_t BgL_auxz00_3230;

				if (PROCEDUREP(BgL_procz00_2559))
					{	/* Ieee/port.scm 451 */
						BgL_auxz00_3237 = BgL_procz00_2559;
					}
				else
					{
						obj_t BgL_auxz00_3240;

						BgL_auxz00_3240 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20043)),
							BGl_string3039z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2559);
						FAILURE(BgL_auxz00_3240, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2558))
					{	/* Ieee/port.scm 451 */
						BgL_auxz00_3230 = BgL_stringz00_2558;
					}
				else
					{
						obj_t BgL_auxz00_3233;

						BgL_auxz00_3233 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20043)),
							BGl_string3039z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2558);
						FAILURE(BgL_auxz00_3233, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3230, BgL_auxz00_3237);
			}
		}
	}



/* call-with-input-string */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_3, obj_t BgL_procz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 462 */
			{	/* Ieee/port.scm 463 */
				obj_t BgL_portz00_2018;

				{	/* Ieee/port.scm 463 */

					{	/* Ieee/port.scm 463 */
						obj_t BgL_startz00_2023;

						BgL_startz00_2023 = BINT(((long) 0));
						if (((long) CINT(BgL_startz00_2023) < ((long) 0)))
							{	/* Ieee/port.scm 463 */
								BgL_portz00_2018 =
									BGl_errorz00zz__errorz00
									(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
									BGl_string3033z00zz__r4_ports_6_10_1z00, BgL_startz00_2023);
							}
						else
							{	/* Ieee/port.scm 463 */
								if (
									((long) CINT(BgL_startz00_2023) >
										STRING_LENGTH(BgL_stringz00_3)))
									{	/* Ieee/port.scm 463 */
										BgL_portz00_2018 =
											BGl_errorz00zz__errorz00
											(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
											BGl_string3034z00zz__r4_ports_6_10_1z00,
											BgL_startz00_2023);
									}
								else
									{	/* Ieee/port.scm 463 */
										BgL_portz00_2018 =
											bgl_open_input_string(BgL_stringz00_3,
											CINT(BgL_startz00_2023));
									}
							}
					}
				}
				{	/* Ieee/port.scm 463 */
					obj_t BgL_resz00_2021;

					BgL_resz00_2021 =
						PROCEDURE_ENTRY(BgL_procz00_4) (BgL_procz00_4, BgL_portz00_2018,
						BEOA);
					bgl_close_input_port(BgL_portz00_2018);
					return BgL_resz00_2021;
				}
			}
		}
	}



/* _call-with-input-string */
	obj_t BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2560, obj_t BgL_stringz00_2561, obj_t BgL_procz00_2562)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 462 */
			{	/* Ieee/port.scm 463 */
				obj_t BgL_auxz00_3267;

				obj_t BgL_auxz00_3260;

				if (PROCEDUREP(BgL_procz00_2562))
					{	/* Ieee/port.scm 463 */
						BgL_auxz00_3267 = BgL_procz00_2562;
					}
				else
					{
						obj_t BgL_auxz00_3270;

						BgL_auxz00_3270 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20578)),
							BGl_string3042z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2562);
						FAILURE(BgL_auxz00_3270, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2561))
					{	/* Ieee/port.scm 463 */
						BgL_auxz00_3260 = BgL_stringz00_2561;
					}
				else
					{
						obj_t BgL_auxz00_3263;

						BgL_auxz00_3263 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20578)),
							BGl_string3042z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2561);
						FAILURE(BgL_auxz00_3263, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3260, BgL_auxz00_3267);
			}
		}
	}



/* call-with-output-file */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_5, obj_t BgL_procz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 472 */
			{	/* Ieee/port.scm 473 */
				obj_t BgL_portz00_1023;

				{	/* Ieee/port.scm 384 */

					BgL_portz00_1023 =
						bgl_open_output_file(BgL_stringz00_5,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_symbol3043z00zz__r4_ports_6_10_1z00, BTRUE,
							default_io_bufsiz));
				}
				if (OUTPUT_PORTP(BgL_portz00_1023))
					{	/* Ieee/port.scm 475 */
						obj_t BgL_val2100z00_1025;

						BgL_val2100z00_1025 =
							BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(BgL_portz00_1023,
							BgL_procz00_6);
						bgl_close_output_port(BgL_portz00_1023);
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val2100z00_1025)))
							{	/* Ieee/port.scm 477 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val2100z00_1025),
									CDR(BgL_val2100z00_1025));
							}
						else
							{	/* Ieee/port.scm 477 */
								return BgL_val2100z00_1025;
							}
					}
				else
					{	/* Ieee/port.scm 474 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3045z00zz__r4_ports_6_10_1z00,
							BGl_string3037z00zz__r4_ports_6_10_1z00, BgL_stringz00_5);
					}
			}
		}
	}



/* <exit:2315> */
	obj_t BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_portz00_2835,
		obj_t BgL_procz00_2834)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 477 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2101z00_1030;

			if (SET_EXIT(BgL_an_exit2101z00_1030))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2101z00_1030 = (void *) jmpbuf;
					{	/* Ieee/port.scm 477 */

						PUSH_EXIT(BgL_an_exit2101z00_1030, ((long) 0));
						{	/* Ieee/port.scm 476 */
							obj_t BgL_val2102z00_1031;

							BgL_val2102z00_1031 =
								PROCEDURE_ENTRY(BgL_procz00_2834) (BgL_procz00_2834,
								BgL_portz00_2835, BEOA);
							POP_EXIT();
							return BgL_val2102z00_1031;
						}
					}
				}
		}
	}



/* _call-with-output-file */
	obj_t BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2563, obj_t BgL_stringz00_2564, obj_t BgL_procz00_2565)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 472 */
			{	/* Ieee/port.scm 473 */
				obj_t BgL_auxz00_3301;

				obj_t BgL_auxz00_3294;

				if (PROCEDUREP(BgL_procz00_2565))
					{	/* Ieee/port.scm 473 */
						BgL_auxz00_3301 = BgL_procz00_2565;
					}
				else
					{
						obj_t BgL_auxz00_3304;

						BgL_auxz00_3304 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20997)),
							BGl_string3047z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2565);
						FAILURE(BgL_auxz00_3304, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2564))
					{	/* Ieee/port.scm 473 */
						BgL_auxz00_3294 = BgL_stringz00_2564;
					}
				else
					{
						obj_t BgL_auxz00_3297;

						BgL_auxz00_3297 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 20997)),
							BGl_string3047z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2564);
						FAILURE(BgL_auxz00_3297, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3294, BgL_auxz00_3301);
			}
		}
	}



/* call-with-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 484 */
			{	/* Ieee/port.scm 485 */
				obj_t BgL_portz00_2040;

				{	/* Ieee/port.scm 485 */

					{	/* Ieee/port.scm 485 */

						BgL_portz00_2040 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				PROCEDURE_ENTRY(BgL_procz00_7) (BgL_procz00_7, BgL_portz00_2040, BEOA);
				return bgl_close_output_port(BgL_portz00_2040);
			}
		}
	}



/* _call-with-output-string */
	obj_t BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2566, obj_t BgL_procz00_2567)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 484 */
			{	/* Ieee/port.scm 485 */
				obj_t BgL_auxz00_3315;

				if (PROCEDUREP(BgL_procz00_2567))
					{	/* Ieee/port.scm 485 */
						BgL_auxz00_3315 = BgL_procz00_2567;
					}
				else
					{
						obj_t BgL_auxz00_3318;

						BgL_auxz00_3318 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 21512)),
							BGl_string3050z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2567);
						FAILURE(BgL_auxz00_3318, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3315);
			}
		}
	}



/* input-port? */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 492 */
			return BBOOL(INPUT_PORTP(BgL_objz00_8));
		}
	}



/* _input-port? */
	obj_t BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2568,
		obj_t BgL_objz00_2569)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 492 */
			return BBOOL(INPUT_PORTP(BgL_objz00_2569));
		}
	}



/* input-string-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 498 */
			return BBOOL(INPUT_STRING_PORTP(BgL_objz00_9));
		}
	}



/* _input-string-port? */
	obj_t BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2570, obj_t BgL_objz00_2571)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 498 */
			return BBOOL(INPUT_STRING_PORTP(BgL_objz00_2571));
		}
	}



/* input-procedure-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_10)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 504 */
			return BBOOL(INPUT_PROCEDURE_PORTP(BgL_objz00_10));
		}
	}



/* _input-procedure-port? */
	obj_t BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2572, obj_t BgL_objz00_2573)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 504 */
			return BBOOL(INPUT_PROCEDURE_PORTP(BgL_objz00_2573));
		}
	}



/* input-gzip-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t BgL_objz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 510 */
			return BBOOL(INPUT_GZIP_PORTP(BgL_objz00_11));
		}
	}



/* _input-gzip-port? */
	obj_t BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2574, obj_t BgL_objz00_2575)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 510 */
			return BBOOL(INPUT_GZIP_PORTP(BgL_objz00_2575));
		}
	}



/* output-port? */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 516 */
			return BBOOL(OUTPUT_PORTP(BgL_objz00_12));
		}
	}



/* _output-port? */
	obj_t BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2576,
		obj_t BgL_objz00_2577)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 516 */
			return BBOOL(OUTPUT_PORTP(BgL_objz00_2577));
		}
	}



/* output-string-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 522 */
			return BBOOL(BGL_OUTPUT_STRING_PORTP(BgL_objz00_13));
		}
	}



/* _output-string-port? */
	obj_t BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2578, obj_t BgL_objz00_2579)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 522 */
			return BBOOL(BGL_OUTPUT_STRING_PORTP(BgL_objz00_2579));
		}
	}



/* output-procedure-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 528 */
			return BBOOL(BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_14));
		}
	}



/* _output-procedure-port? */
	obj_t BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2580, obj_t BgL_objz00_2581)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 528 */
			return BBOOL(BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_2581));
		}
	}



/* current-input-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 534 */
			{	/* Ieee/port.scm 535 */
				obj_t BgL_auxz00_3351;

				BgL_auxz00_3351 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_3351);
			}
		}
	}



/* _current-input-port */
	obj_t BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2582)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 534 */
			{	/* Ieee/port.scm 535 */
				obj_t BgL_auxz00_3354;

				BgL_auxz00_3354 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_3354);
			}
		}
	}



/* current-output-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 540 */
			{	/* Ieee/port.scm 541 */
				obj_t BgL_auxz00_3357;

				BgL_auxz00_3357 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3357);
			}
		}
	}



/* _current-output-port */
	obj_t BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2583)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 540 */
			{	/* Ieee/port.scm 541 */
				obj_t BgL_auxz00_3360;

				BgL_auxz00_3360 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3360);
			}
		}
	}



/* current-error-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 546 */
			{	/* Ieee/port.scm 547 */
				obj_t BgL_auxz00_3363;

				BgL_auxz00_3363 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3363);
			}
		}
	}



/* _current-error-port */
	obj_t BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2584)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 546 */
			{	/* Ieee/port.scm 547 */
				obj_t BgL_auxz00_3366;

				BgL_auxz00_3366 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3366);
			}
		}
	}



/* input-port-reopen! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 552 */
			if (CBOOL(bgl_input_port_reopen(BgL_portz00_15)))
				{	/* Ieee/port.scm 553 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 553 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3051z00zz__r4_ports_6_10_1z00,
						BGl_string3053z00zz__r4_ports_6_10_1z00, BgL_portz00_15);
				}
		}
	}



/* _input-port-reopen! */
	obj_t BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2585, obj_t BgL_portz00_2586)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 552 */
			{	/* Ieee/port.scm 553 */
				obj_t BgL_portz00_3081;

				if (INPUT_PORTP(BgL_portz00_2586))
					{	/* Ieee/port.scm 553 */
						BgL_portz00_3081 = BgL_portz00_2586;
					}
				else
					{
						obj_t BgL_auxz00_3375;

						BgL_auxz00_3375 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 24838)),
							BGl_string3054z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2586);
						FAILURE(BgL_auxz00_3375, BFALSE, BFALSE);
					}
				if (CBOOL(bgl_input_port_reopen(BgL_portz00_3081)))
					{	/* Ieee/port.scm 553 */
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 553 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3051z00zz__r4_ports_6_10_1z00,
							BGl_string3053z00zz__r4_ports_6_10_1z00, BgL_portz00_3081);
					}
			}
		}
	}



/* with-input-from-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_16, obj_t BgL_thunkz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 560 */
			{	/* Ieee/port.scm 561 */
				obj_t BgL_portz00_1040;

				{	/* Ieee/port.scm 375 */

					BgL_portz00_1040 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_16,
						BTRUE);
				}
				if (INPUT_PORTP(BgL_portz00_1040))
					{	/* Ieee/port.scm 563 */
						obj_t BgL_denvz00_1042;

						BgL_denvz00_1042 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 563 */
							obj_t BgL_oldzd2inputzd2portz00_1043;

							BgL_oldzd2inputzd2portz00_1043 =
								BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1042);
							{	/* Ieee/port.scm 564 */

								{	/* Ieee/port.scm 565 */
									obj_t BgL_val2103z00_1044;

									BgL_val2103z00_1044 =
										BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_17, BgL_portz00_1040, BgL_denvz00_1042);
									BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1042,
										BgL_oldzd2inputzd2portz00_1043);
									BUNSPEC;
									bgl_close_input_port(BgL_portz00_1040);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2103z00_1044)))
										{	/* Ieee/port.scm 571 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2103z00_1044), CDR(BgL_val2103z00_1044));
										}
									else
										{	/* Ieee/port.scm 571 */
											return BgL_val2103z00_1044;
										}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 562 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3056z00zz__r4_ports_6_10_1z00,
							BGl_string3037z00zz__r4_ports_6_10_1z00, BgL_stringz00_16);
					}
			}
		}
	}



/* <exit:2324> */
	obj_t BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2833,
		obj_t BgL_portz00_2832, obj_t BgL_denvz00_2831)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 570 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2104z00_1049;

			if (SET_EXIT(BgL_an_exit2104z00_1049))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2104z00_1049 = (void *) jmpbuf;
					{	/* Ieee/port.scm 570 */

						PUSH_EXIT(BgL_an_exit2104z00_1049, ((long) 0));
						{	/* Ieee/port.scm 567 */
							obj_t BgL_val2105z00_1050;

							BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2831,
								BgL_portz00_2832);
							BUNSPEC;
							BgL_val2105z00_1050 =
								PROCEDURE_ENTRY(BgL_thunkz00_2833) (BgL_thunkz00_2833, BEOA);
							POP_EXIT();
							return BgL_val2105z00_1050;
						}
					}
				}
		}
	}



/* _with-input-from-file */
	obj_t BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2587, obj_t BgL_stringz00_2588, obj_t BgL_thunkz00_2589)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 560 */
			{	/* Ieee/port.scm 561 */
				obj_t BgL_auxz00_3412;

				obj_t BgL_auxz00_3405;

				if (PROCEDUREP(BgL_thunkz00_2589))
					{	/* Ieee/port.scm 561 */
						BgL_auxz00_3412 = BgL_thunkz00_2589;
					}
				else
					{
						obj_t BgL_auxz00_3415;

						BgL_auxz00_3415 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 25241)),
							BGl_string3058z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2589);
						FAILURE(BgL_auxz00_3415, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2588))
					{	/* Ieee/port.scm 561 */
						BgL_auxz00_3405 = BgL_stringz00_2588;
					}
				else
					{
						obj_t BgL_auxz00_3408;

						BgL_auxz00_3408 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 25241)),
							BGl_string3058z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2588);
						FAILURE(BgL_auxz00_3408, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3405, BgL_auxz00_3412);
			}
		}
	}



/* with-input-from-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_18, obj_t BgL_thunkz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 578 */
			{	/* Ieee/port.scm 579 */
				obj_t BgL_portz00_1053;

				{	/* Ieee/port.scm 376 */

					{	/* Ieee/port.scm 376 */
						obj_t BgL_startz00_2054;

						BgL_startz00_2054 = BINT(((long) 0));
						if (((long) CINT(BgL_startz00_2054) < ((long) 0)))
							{	/* Ieee/port.scm 376 */
								BgL_portz00_1053 =
									BGl_errorz00zz__errorz00
									(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
									BGl_string3033z00zz__r4_ports_6_10_1z00, BgL_startz00_2054);
							}
						else
							{	/* Ieee/port.scm 376 */
								if (
									((long) CINT(BgL_startz00_2054) >
										STRING_LENGTH(BgL_stringz00_18)))
									{	/* Ieee/port.scm 376 */
										BgL_portz00_1053 =
											BGl_errorz00zz__errorz00
											(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
											BGl_string3034z00zz__r4_ports_6_10_1z00,
											BgL_startz00_2054);
									}
								else
									{	/* Ieee/port.scm 376 */
										BgL_portz00_1053 =
											bgl_open_input_string(BgL_stringz00_18,
											CINT(BgL_startz00_2054));
									}
							}
					}
				}
				{	/* Ieee/port.scm 579 */
					obj_t BgL_denvz00_1054;

					BgL_denvz00_1054 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 580 */
						obj_t BgL_oldzd2inputzd2portz00_1055;

						BgL_oldzd2inputzd2portz00_1055 =
							BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1054);
						{	/* Ieee/port.scm 581 */

							{	/* Ieee/port.scm 582 */
								obj_t BgL_val2106z00_1056;

								BgL_val2106z00_1056 =
									BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00
									(BgL_thunkz00_19, BgL_portz00_1053, BgL_denvz00_1054);
								BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1054,
									BgL_oldzd2inputzd2portz00_1055);
								BUNSPEC;
								bgl_close_input_port(BgL_portz00_1053);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val2106z00_1056)))
									{	/* Ieee/port.scm 588 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val2106z00_1056), CDR(BgL_val2106z00_1056));
									}
								else
									{	/* Ieee/port.scm 588 */
										return BgL_val2106z00_1056;
									}
							}
						}
					}
				}
			}
		}
	}



/* <exit:2328> */
	obj_t BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2830,
		obj_t BgL_portz00_2829, obj_t BgL_denvz00_2828)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 587 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2107z00_1061;

			if (SET_EXIT(BgL_an_exit2107z00_1061))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2107z00_1061 = (void *) jmpbuf;
					{	/* Ieee/port.scm 587 */

						PUSH_EXIT(BgL_an_exit2107z00_1061, ((long) 0));
						{	/* Ieee/port.scm 584 */
							obj_t BgL_val2108z00_1062;

							BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2828,
								BgL_portz00_2829);
							BUNSPEC;
							BgL_val2108z00_1062 =
								PROCEDURE_ENTRY(BgL_thunkz00_2830) (BgL_thunkz00_2830, BEOA);
							POP_EXIT();
							return BgL_val2108z00_1062;
						}
					}
				}
		}
	}



/* _with-input-from-string */
	obj_t BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2590, obj_t BgL_stringz00_2591, obj_t BgL_thunkz00_2592)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 578 */
			{	/* Ieee/port.scm 579 */
				obj_t BgL_auxz00_3457;

				obj_t BgL_auxz00_3450;

				if (PROCEDUREP(BgL_thunkz00_2592))
					{	/* Ieee/port.scm 579 */
						BgL_auxz00_3457 = BgL_thunkz00_2592;
					}
				else
					{
						obj_t BgL_auxz00_3460;

						BgL_auxz00_3460 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 25949)),
							BGl_string3059z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2592);
						FAILURE(BgL_auxz00_3460, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2591))
					{	/* Ieee/port.scm 579 */
						BgL_auxz00_3450 = BgL_stringz00_2591;
					}
				else
					{
						obj_t BgL_auxz00_3453;

						BgL_auxz00_3453 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 25949)),
							BGl_string3059z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2591);
						FAILURE(BgL_auxz00_3453, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3450, BgL_auxz00_3457);
			}
		}
	}



/* with-input-from-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_20, obj_t BgL_thunkz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 593 */
			{	/* Ieee/port.scm 594 */
				obj_t BgL_denvz00_1065;

				BgL_denvz00_1065 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 594 */
					obj_t BgL_oldzd2inputzd2portz00_1066;

					BgL_oldzd2inputzd2portz00_1066 =
						BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1065);
					{	/* Ieee/port.scm 595 */

						{	/* Ieee/port.scm 596 */
							obj_t BgL_val2109z00_1067;

							BgL_val2109z00_1067 =
								BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_21,
								BgL_portz00_20, BgL_denvz00_1065);
							BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1065,
								BgL_oldzd2inputzd2portz00_1066);
							BUNSPEC;
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val2109z00_1067)))
								{	/* Ieee/port.scm 600 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val2109z00_1067), CDR(BgL_val2109z00_1067));
								}
							else
								{	/* Ieee/port.scm 600 */
									return BgL_val2109z00_1067;
								}
						}
					}
				}
			}
		}
	}



/* <exit:2332> */
	obj_t BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2827,
		obj_t BgL_portz00_2826, obj_t BgL_denvz00_2825)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 600 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2110z00_1072;

			if (SET_EXIT(BgL_an_exit2110z00_1072))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2110z00_1072 = (void *) jmpbuf;
					{	/* Ieee/port.scm 600 */

						PUSH_EXIT(BgL_an_exit2110z00_1072, ((long) 0));
						{	/* Ieee/port.scm 598 */
							obj_t BgL_val2111z00_1073;

							BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2825,
								BgL_portz00_2826);
							BUNSPEC;
							BgL_val2111z00_1073 =
								PROCEDURE_ENTRY(BgL_thunkz00_2827) (BgL_thunkz00_2827, BEOA);
							POP_EXIT();
							return BgL_val2111z00_1073;
						}
					}
				}
		}
	}



/* _with-input-from-port */
	obj_t BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2593, obj_t BgL_portz00_2594, obj_t BgL_thunkz00_2595)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 593 */
			{	/* Ieee/port.scm 594 */
				obj_t BgL_auxz00_3489;

				obj_t BgL_auxz00_3482;

				if (PROCEDUREP(BgL_thunkz00_2595))
					{	/* Ieee/port.scm 594 */
						BgL_auxz00_3489 = BgL_thunkz00_2595;
					}
				else
					{
						obj_t BgL_auxz00_3492;

						BgL_auxz00_3492 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 26523)),
							BGl_string3060z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2595);
						FAILURE(BgL_auxz00_3492, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_2594))
					{	/* Ieee/port.scm 594 */
						BgL_auxz00_3482 = BgL_portz00_2594;
					}
				else
					{
						obj_t BgL_auxz00_3485;

						BgL_auxz00_3485 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 26523)),
							BGl_string3060z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2594);
						FAILURE(BgL_auxz00_3485, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3482, BgL_auxz00_3489);
			}
		}
	}



/* with-input-from-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_22, obj_t BgL_thunkz00_23)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 605 */
			{	/* Ieee/port.scm 606 */
				obj_t BgL_portz00_1074;

				{	/* Ieee/port.scm 378 */

					BgL_portz00_1074 =
						bgl_open_input_procedure(BgL_procz00_22,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_symbol3061z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (((long) 1024))));
				}
				if (INPUT_PORTP(BgL_portz00_1074))
					{	/* Ieee/port.scm 608 */
						obj_t BgL_denvz00_1076;

						BgL_denvz00_1076 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 608 */
							obj_t BgL_oldzd2inputzd2portz00_1077;

							BgL_oldzd2inputzd2portz00_1077 =
								BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1076);
							{	/* Ieee/port.scm 609 */

								{	/* Ieee/port.scm 610 */
									obj_t BgL_val2112z00_1078;

									BgL_val2112z00_1078 =
										BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_23, BgL_portz00_1074, BgL_denvz00_1076);
									BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1076,
										BgL_oldzd2inputzd2portz00_1077);
									BUNSPEC;
									bgl_close_input_port(BgL_portz00_1074);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2112z00_1078)))
										{	/* Ieee/port.scm 616 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2112z00_1078), CDR(BgL_val2112z00_1078));
										}
									else
										{	/* Ieee/port.scm 616 */
											return BgL_val2112z00_1078;
										}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 607 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3063z00zz__r4_ports_6_10_1z00,
							BGl_string3065z00zz__r4_ports_6_10_1z00, BgL_procz00_22);
					}
			}
		}
	}



/* <exit:2337> */
	obj_t BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2824,
		obj_t BgL_portz00_2823, obj_t BgL_denvz00_2822)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 615 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2113z00_1083;

			if (SET_EXIT(BgL_an_exit2113z00_1083))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2113z00_1083 = (void *) jmpbuf;
					{	/* Ieee/port.scm 615 */

						PUSH_EXIT(BgL_an_exit2113z00_1083, ((long) 0));
						{	/* Ieee/port.scm 612 */
							obj_t BgL_val2114z00_1084;

							BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2822,
								BgL_portz00_2823);
							BUNSPEC;
							BgL_val2114z00_1084 =
								PROCEDURE_ENTRY(BgL_thunkz00_2824) (BgL_thunkz00_2824, BEOA);
							POP_EXIT();
							return BgL_val2114z00_1084;
						}
					}
				}
		}
	}



/* _with-input-from-procedure */
	obj_t BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2596, obj_t BgL_procz00_2597, obj_t BgL_thunkz00_2598)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 605 */
			{	/* Ieee/port.scm 606 */
				obj_t BgL_auxz00_3528;

				obj_t BgL_auxz00_3521;

				if (PROCEDUREP(BgL_thunkz00_2598))
					{	/* Ieee/port.scm 606 */
						BgL_auxz00_3528 = BgL_thunkz00_2598;
					}
				else
					{
						obj_t BgL_auxz00_3531;

						BgL_auxz00_3531 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 27023)),
							BGl_string3066z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2598);
						FAILURE(BgL_auxz00_3531, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2597))
					{	/* Ieee/port.scm 606 */
						BgL_auxz00_3521 = BgL_procz00_2597;
					}
				else
					{
						obj_t BgL_auxz00_3524;

						BgL_auxz00_3524 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 27023)),
							BGl_string3066z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2597);
						FAILURE(BgL_auxz00_3524, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3521, BgL_auxz00_3528);
			}
		}
	}



/* with-output-to-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_24, obj_t BgL_thunkz00_25)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 622 */
			{	/* Ieee/port.scm 623 */
				obj_t BgL_portz00_1087;

				{	/* Ieee/port.scm 384 */

					BgL_portz00_1087 =
						bgl_open_output_file(BgL_stringz00_24,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_symbol3043z00zz__r4_ports_6_10_1z00, BTRUE,
							default_io_bufsiz));
				}
				if (OUTPUT_PORTP(BgL_portz00_1087))
					{	/* Ieee/port.scm 625 */
						obj_t BgL_denvz00_1089;

						BgL_denvz00_1089 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 625 */
							obj_t BgL_oldzd2outputzd2portz00_1090;

							BgL_oldzd2outputzd2portz00_1090 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1089);
							{	/* Ieee/port.scm 626 */

								{	/* Ieee/port.scm 627 */
									obj_t BgL_val2115z00_1091;

									BgL_val2115z00_1091 =
										BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_25, BgL_portz00_1087, BgL_denvz00_1089);
									BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1089,
										BgL_oldzd2outputzd2portz00_1090);
									BUNSPEC;
									bgl_close_output_port(BgL_portz00_1087);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2115z00_1091)))
										{	/* Ieee/port.scm 633 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2115z00_1091), CDR(BgL_val2115z00_1091));
										}
									else
										{	/* Ieee/port.scm 633 */
											return BgL_val2115z00_1091;
										}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 624 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3067z00zz__r4_ports_6_10_1z00,
							BGl_string3037z00zz__r4_ports_6_10_1z00, BgL_stringz00_24);
					}
			}
		}
	}



/* <exit:2342> */
	obj_t BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2821,
		obj_t BgL_portz00_2820, obj_t BgL_denvz00_2819)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 632 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2116z00_1096;

			if (SET_EXIT(BgL_an_exit2116z00_1096))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2116z00_1096 = (void *) jmpbuf;
					{	/* Ieee/port.scm 632 */

						PUSH_EXIT(BgL_an_exit2116z00_1096, ((long) 0));
						{	/* Ieee/port.scm 629 */
							obj_t BgL_val2117z00_1097;

							BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2819,
								BgL_portz00_2820);
							BUNSPEC;
							BgL_val2117z00_1097 =
								PROCEDURE_ENTRY(BgL_thunkz00_2821) (BgL_thunkz00_2821, BEOA);
							POP_EXIT();
							return BgL_val2117z00_1097;
						}
					}
				}
		}
	}



/* _with-output-to-file */
	obj_t BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2599, obj_t BgL_stringz00_2600, obj_t BgL_thunkz00_2601)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 622 */
			{	/* Ieee/port.scm 623 */
				obj_t BgL_auxz00_3566;

				obj_t BgL_auxz00_3559;

				if (PROCEDUREP(BgL_thunkz00_2601))
					{	/* Ieee/port.scm 623 */
						BgL_auxz00_3566 = BgL_thunkz00_2601;
					}
				else
					{
						obj_t BgL_auxz00_3569;

						BgL_auxz00_3569 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 27703)),
							BGl_string3069z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2601);
						FAILURE(BgL_auxz00_3569, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2600))
					{	/* Ieee/port.scm 623 */
						BgL_auxz00_3559 = BgL_stringz00_2600;
					}
				else
					{
						obj_t BgL_auxz00_3562;

						BgL_auxz00_3562 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 27703)),
							BGl_string3069z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2600);
						FAILURE(BgL_auxz00_3562, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3559, BgL_auxz00_3566);
			}
		}
	}



/* with-output-to-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_26,
		obj_t BgL_thunkz00_27)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 640 */
			{	/* Ieee/port.scm 641 */
				obj_t BgL_denvz00_1100;

				BgL_denvz00_1100 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 641 */
					obj_t BgL_oldzd2outputzd2portz00_1101;

					BgL_oldzd2outputzd2portz00_1101 =
						BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1100);
					{	/* Ieee/port.scm 642 */

						{	/* Ieee/port.scm 643 */
							obj_t BgL_val2118z00_1102;

							BgL_val2118z00_1102 =
								BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_27,
								BgL_portz00_26, BgL_denvz00_1100);
							BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1100,
								BgL_oldzd2outputzd2portz00_1101);
							BUNSPEC;
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val2118z00_1102)))
								{	/* Ieee/port.scm 647 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val2118z00_1102), CDR(BgL_val2118z00_1102));
								}
							else
								{	/* Ieee/port.scm 647 */
									return BgL_val2118z00_1102;
								}
						}
					}
				}
			}
		}
	}



/* <exit:2346> */
	obj_t BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2818,
		obj_t BgL_portz00_2817, obj_t BgL_denvz00_2816)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 647 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2119z00_1107;

			if (SET_EXIT(BgL_an_exit2119z00_1107))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2119z00_1107 = (void *) jmpbuf;
					{	/* Ieee/port.scm 647 */

						PUSH_EXIT(BgL_an_exit2119z00_1107, ((long) 0));
						{	/* Ieee/port.scm 645 */
							obj_t BgL_val2120z00_1108;

							BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2816,
								BgL_portz00_2817);
							BUNSPEC;
							BgL_val2120z00_1108 =
								PROCEDURE_ENTRY(BgL_thunkz00_2818) (BgL_thunkz00_2818, BEOA);
							POP_EXIT();
							return BgL_val2120z00_1108;
						}
					}
				}
		}
	}



/* _with-output-to-port */
	obj_t BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2602, obj_t BgL_portz00_2603, obj_t BgL_thunkz00_2604)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 640 */
			{	/* Ieee/port.scm 641 */
				obj_t BgL_auxz00_3598;

				obj_t BgL_auxz00_3591;

				if (PROCEDUREP(BgL_thunkz00_2604))
					{	/* Ieee/port.scm 641 */
						BgL_auxz00_3598 = BgL_thunkz00_2604;
					}
				else
					{
						obj_t BgL_auxz00_3601;

						BgL_auxz00_3601 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 28413)),
							BGl_string3070z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2604);
						FAILURE(BgL_auxz00_3601, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_2603))
					{	/* Ieee/port.scm 641 */
						BgL_auxz00_3591 = BgL_portz00_2603;
					}
				else
					{
						obj_t BgL_auxz00_3594;

						BgL_auxz00_3594 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 28413)),
							BGl_string3070z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2603);
						FAILURE(BgL_auxz00_3594, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3591, BgL_auxz00_3598);
			}
		}
	}



/* with-output-to-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_thunkz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 652 */
			{	/* Ieee/port.scm 653 */
				obj_t BgL_portz00_1109;

				{	/* Ieee/port.scm 653 */

					{	/* Ieee/port.scm 386 */

						BgL_portz00_1109 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				{	/* Ieee/port.scm 653 */
					obj_t BgL_denvz00_1110;

					BgL_denvz00_1110 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 654 */
						obj_t BgL_oldzd2outputzd2portz00_1111;

						BgL_oldzd2outputzd2portz00_1111 =
							BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1110);
						{	/* Ieee/port.scm 655 */
							obj_t BgL_resz00_1112;

							BgL_resz00_1112 = BUNSPEC;
							{	/* Ieee/port.scm 656 */

								{	/* Ieee/port.scm 657 */
									obj_t BgL_val2121z00_1113;

									BgL_val2121z00_1113 =
										BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_28, BgL_portz00_1109, BgL_denvz00_1110);
									BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1110,
										BgL_oldzd2outputzd2portz00_1111);
									BUNSPEC;
									BgL_resz00_1112 = bgl_close_output_port(BgL_portz00_1109);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2121z00_1113)))
										{	/* Ieee/port.scm 663 */
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2121z00_1113), CDR(BgL_val2121z00_1113));
										}
									else
										{	/* Ieee/port.scm 663 */
											BgL_val2121z00_1113;
										}
								}
								return BgL_resz00_1112;
							}
						}
					}
				}
			}
		}
	}



/* <exit:2350> */
	obj_t BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2815,
		obj_t BgL_portz00_2814, obj_t BgL_denvz00_2813)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 662 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2122z00_1118;

			if (SET_EXIT(BgL_an_exit2122z00_1118))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2122z00_1118 = (void *) jmpbuf;
					{	/* Ieee/port.scm 662 */

						PUSH_EXIT(BgL_an_exit2122z00_1118, ((long) 0));
						{	/* Ieee/port.scm 659 */
							obj_t BgL_val2123z00_1119;

							BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2813,
								BgL_portz00_2814);
							BUNSPEC;
							BgL_val2123z00_1119 =
								PROCEDURE_ENTRY(BgL_thunkz00_2815) (BgL_thunkz00_2815, BEOA);
							POP_EXIT();
							return BgL_val2123z00_1119;
						}
					}
				}
		}
	}



/* _with-output-to-string */
	obj_t BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2605, obj_t BgL_thunkz00_2606)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 652 */
			{	/* Ieee/port.scm 653 */
				obj_t BgL_auxz00_3627;

				if (PROCEDUREP(BgL_thunkz00_2606))
					{	/* Ieee/port.scm 653 */
						BgL_auxz00_3627 = BgL_thunkz00_2606;
					}
				else
					{
						obj_t BgL_auxz00_3630;

						BgL_auxz00_3630 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 28909)),
							BGl_string3072z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2606);
						FAILURE(BgL_auxz00_3630, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3627);
			}
		}
	}



/* with-output-to-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_29, obj_t BgL_thunkz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 669 */
			{	/* Ieee/port.scm 670 */
				obj_t BgL_portz00_1121;

				{	/* Ieee/port.scm 387 */

					BgL_portz00_1121 =
						BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
						(BgL_procz00_29, BGl_proc3073z00zz__r4_ports_6_10_1z00, BTRUE,
						BGl_proc3074z00zz__r4_ports_6_10_1z00);
				}
				{	/* Ieee/port.scm 670 */
					obj_t BgL_denvz00_1122;

					BgL_denvz00_1122 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 671 */
						obj_t BgL_oldzd2outputzd2portz00_1123;

						BgL_oldzd2outputzd2portz00_1123 =
							BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1122);
						{	/* Ieee/port.scm 672 */
							obj_t BgL_resz00_1124;

							BgL_resz00_1124 = BUNSPEC;
							{	/* Ieee/port.scm 673 */

								{	/* Ieee/port.scm 674 */
									obj_t BgL_val2124z00_1125;

									BgL_val2124z00_1125 =
										BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_30, BgL_portz00_1121, BgL_denvz00_1122);
									BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1122,
										BgL_oldzd2outputzd2portz00_1123);
									BUNSPEC;
									BgL_resz00_1124 = bgl_close_output_port(BgL_portz00_1121);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2124z00_1125)))
										{	/* Ieee/port.scm 680 */
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2124z00_1125), CDR(BgL_val2124z00_1125));
										}
									else
										{	/* Ieee/port.scm 680 */
											BgL_val2124z00_1125;
										}
								}
								return BgL_resz00_1124;
							}
						}
					}
				}
			}
		}
	}



/* <exit:2354> */
	obj_t BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2812,
		obj_t BgL_portz00_2811, obj_t BgL_denvz00_2810)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 679 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2125z00_1130;

			if (SET_EXIT(BgL_an_exit2125z00_1130))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2125z00_1130 = (void *) jmpbuf;
					{	/* Ieee/port.scm 679 */

						PUSH_EXIT(BgL_an_exit2125z00_1130, ((long) 0));
						{	/* Ieee/port.scm 676 */
							obj_t BgL_val2126z00_1131;

							BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2810,
								BgL_portz00_2811);
							BUNSPEC;
							BgL_val2126z00_1131 =
								PROCEDURE_ENTRY(BgL_thunkz00_2812) (BgL_thunkz00_2812, BEOA);
							POP_EXIT();
							return BgL_val2126z00_1131;
						}
					}
				}
		}
	}



/* _with-output-to-procedure */
	obj_t BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2609, obj_t BgL_procz00_2610, obj_t BgL_thunkz00_2611)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 669 */
			{	/* Ieee/port.scm 670 */
				obj_t BgL_auxz00_3661;

				obj_t BgL_auxz00_3654;

				if (PROCEDUREP(BgL_thunkz00_2611))
					{	/* Ieee/port.scm 670 */
						BgL_auxz00_3661 = BgL_thunkz00_2611;
					}
				else
					{
						obj_t BgL_auxz00_3664;

						BgL_auxz00_3664 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 29530)),
							BGl_string3075z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2611);
						FAILURE(BgL_auxz00_3664, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2610))
					{	/* Ieee/port.scm 670 */
						BgL_auxz00_3654 = BgL_procz00_2610;
					}
				else
					{
						obj_t BgL_auxz00_3657;

						BgL_auxz00_3657 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 29530)),
							BGl_string3075z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2610);
						FAILURE(BgL_auxz00_3657, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3654, BgL_auxz00_3661);
			}
		}
	}



/* close */
	obj_t BGl_closez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2612)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 387 */
			return BBOOL(((bool_t) 0));
		}
	}



/* flush */
	obj_t BGl_flushz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2613)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 387 */
			return BBOOL(((bool_t) 0));
		}
	}



/* with-error-to-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_thunkz00_31)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 686 */
			{	/* Ieee/port.scm 687 */
				obj_t BgL_portz00_1140;

				{	/* Ieee/port.scm 687 */

					{	/* Ieee/port.scm 386 */

						BgL_portz00_1140 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				if (OUTPUT_PORTP(BgL_portz00_1140))
					{	/* Ieee/port.scm 689 */
						obj_t BgL_denvz00_1142;

						BgL_denvz00_1142 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 689 */
							obj_t BgL_oldzd2errorzd2portz00_1143;

							BgL_oldzd2errorzd2portz00_1143 =
								BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1142);
							{	/* Ieee/port.scm 690 */
								obj_t BgL_resz00_1144;

								BgL_resz00_1144 = BUNSPEC;
								{	/* Ieee/port.scm 691 */

									{	/* Ieee/port.scm 692 */
										obj_t BgL_val2127z00_1145;

										BgL_val2127z00_1145 =
											BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00
											(BgL_thunkz00_31, BgL_portz00_1140, BgL_denvz00_1142);
										BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1142,
											BgL_oldzd2errorzd2portz00_1143);
										BUNSPEC;
										BgL_resz00_1144 = bgl_close_output_port(BgL_portz00_1140);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val2127z00_1145)))
											{	/* Ieee/port.scm 698 */
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val2127z00_1145), CDR(BgL_val2127z00_1145));
											}
										else
											{	/* Ieee/port.scm 698 */
												BgL_val2127z00_1145;
											}
									}
									return BgL_resz00_1144;
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 688 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3076z00zz__r4_ports_6_10_1z00,
							BGl_string3078z00zz__r4_ports_6_10_1z00, BUNSPEC);
					}
			}
		}
	}



/* <exit:2361> */
	obj_t BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2809,
		obj_t BgL_portz00_2808, obj_t BgL_denvz00_2807)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 697 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2128z00_1150;

			if (SET_EXIT(BgL_an_exit2128z00_1150))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2128z00_1150 = (void *) jmpbuf;
					{	/* Ieee/port.scm 697 */

						PUSH_EXIT(BgL_an_exit2128z00_1150, ((long) 0));
						{	/* Ieee/port.scm 694 */
							obj_t BgL_val2129z00_1151;

							BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2807,
								BgL_portz00_2808);
							BUNSPEC;
							BgL_val2129z00_1151 =
								PROCEDURE_ENTRY(BgL_thunkz00_2809) (BgL_thunkz00_2809, BEOA);
							POP_EXIT();
							return BgL_val2129z00_1151;
						}
					}
				}
		}
	}



/* _with-error-to-string */
	obj_t BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2614, obj_t BgL_thunkz00_2615)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 686 */
			{	/* Ieee/port.scm 687 */
				obj_t BgL_auxz00_3695;

				if (PROCEDUREP(BgL_thunkz00_2615))
					{	/* Ieee/port.scm 687 */
						BgL_auxz00_3695 = BgL_thunkz00_2615;
					}
				else
					{
						obj_t BgL_auxz00_3698;

						BgL_auxz00_3698 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 30150)),
							BGl_string3079z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2615);
						FAILURE(BgL_auxz00_3698, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3695);
			}
		}
	}



/* with-error-to-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_32, obj_t BgL_thunkz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 708 */
			{	/* Ieee/port.scm 709 */
				obj_t BgL_portz00_1153;

				{	/* Ieee/port.scm 384 */

					BgL_portz00_1153 =
						bgl_open_output_file(BgL_stringz00_32,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_symbol3043z00zz__r4_ports_6_10_1z00, BTRUE,
							default_io_bufsiz));
				}
				if (OUTPUT_PORTP(BgL_portz00_1153))
					{	/* Ieee/port.scm 711 */
						obj_t BgL_denvz00_1155;

						BgL_denvz00_1155 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 711 */
							obj_t BgL_oldzd2outputzd2portz00_1156;

							BgL_oldzd2outputzd2portz00_1156 =
								BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1155);
							{	/* Ieee/port.scm 712 */

								{	/* Ieee/port.scm 713 */
									obj_t BgL_val2130z00_1157;

									BgL_val2130z00_1157 =
										BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_33, BgL_portz00_1153, BgL_denvz00_1155);
									BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1155,
										BgL_oldzd2outputzd2portz00_1156);
									BUNSPEC;
									bgl_close_output_port(BgL_portz00_1153);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2130z00_1157)))
										{	/* Ieee/port.scm 719 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2130z00_1157), CDR(BgL_val2130z00_1157));
										}
									else
										{	/* Ieee/port.scm 719 */
											return BgL_val2130z00_1157;
										}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 710 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3080z00zz__r4_ports_6_10_1z00,
							BGl_string3037z00zz__r4_ports_6_10_1z00, BgL_stringz00_32);
					}
			}
		}
	}



/* <exit:2366> */
	obj_t BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2806,
		obj_t BgL_portz00_2805, obj_t BgL_denvz00_2804)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 718 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2131z00_1162;

			if (SET_EXIT(BgL_an_exit2131z00_1162))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2131z00_1162 = (void *) jmpbuf;
					{	/* Ieee/port.scm 718 */

						PUSH_EXIT(BgL_an_exit2131z00_1162, ((long) 0));
						{	/* Ieee/port.scm 715 */
							obj_t BgL_val2132z00_1163;

							BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2804,
								BgL_portz00_2805);
							BUNSPEC;
							BgL_val2132z00_1163 =
								PROCEDURE_ENTRY(BgL_thunkz00_2806) (BgL_thunkz00_2806, BEOA);
							POP_EXIT();
							return BgL_val2132z00_1163;
						}
					}
				}
		}
	}



/* _with-error-to-file */
	obj_t BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2616, obj_t BgL_stringz00_2617, obj_t BgL_thunkz00_2618)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 708 */
			{	/* Ieee/port.scm 709 */
				obj_t BgL_auxz00_3733;

				obj_t BgL_auxz00_3726;

				if (PROCEDUREP(BgL_thunkz00_2618))
					{	/* Ieee/port.scm 709 */
						BgL_auxz00_3733 = BgL_thunkz00_2618;
					}
				else
					{
						obj_t BgL_auxz00_3736;

						BgL_auxz00_3736 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 30921)),
							BGl_string3082z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2618);
						FAILURE(BgL_auxz00_3736, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2617))
					{	/* Ieee/port.scm 709 */
						BgL_auxz00_3726 = BgL_stringz00_2617;
					}
				else
					{
						obj_t BgL_auxz00_3729;

						BgL_auxz00_3729 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 30921)),
							BGl_string3082z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2617);
						FAILURE(BgL_auxz00_3729, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3726,
					BgL_auxz00_3733);
			}
		}
	}



/* with-error-to-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_34,
		obj_t BgL_thunkz00_35)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 728 */
			{	/* Ieee/port.scm 729 */
				obj_t BgL_denvz00_1166;

				BgL_denvz00_1166 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 729 */
					obj_t BgL_oldzd2outputzd2portz00_1167;

					BgL_oldzd2outputzd2portz00_1167 =
						BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1166);
					{	/* Ieee/port.scm 730 */

						{	/* Ieee/port.scm 731 */
							obj_t BgL_val2133z00_1168;

							BgL_val2133z00_1168 =
								BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_35,
								BgL_portz00_34, BgL_denvz00_1166);
							BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1166,
								BgL_oldzd2outputzd2portz00_1167);
							BUNSPEC;
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val2133z00_1168)))
								{	/* Ieee/port.scm 735 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val2133z00_1168), CDR(BgL_val2133z00_1168));
								}
							else
								{	/* Ieee/port.scm 735 */
									return BgL_val2133z00_1168;
								}
						}
					}
				}
			}
		}
	}



/* <exit:2370> */
	obj_t BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2803,
		obj_t BgL_portz00_2802, obj_t BgL_denvz00_2801)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 735 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2134z00_1173;

			if (SET_EXIT(BgL_an_exit2134z00_1173))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2134z00_1173 = (void *) jmpbuf;
					{	/* Ieee/port.scm 735 */

						PUSH_EXIT(BgL_an_exit2134z00_1173, ((long) 0));
						{	/* Ieee/port.scm 733 */
							obj_t BgL_val2135z00_1174;

							BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2801,
								BgL_portz00_2802);
							BUNSPEC;
							BgL_val2135z00_1174 =
								PROCEDURE_ENTRY(BgL_thunkz00_2803) (BgL_thunkz00_2803, BEOA);
							POP_EXIT();
							return BgL_val2135z00_1174;
						}
					}
				}
		}
	}



/* _with-error-to-port */
	obj_t BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2619, obj_t BgL_portz00_2620, obj_t BgL_thunkz00_2621)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 728 */
			{	/* Ieee/port.scm 729 */
				obj_t BgL_auxz00_3765;

				obj_t BgL_auxz00_3758;

				if (PROCEDUREP(BgL_thunkz00_2621))
					{	/* Ieee/port.scm 729 */
						BgL_auxz00_3765 = BgL_thunkz00_2621;
					}
				else
					{
						obj_t BgL_auxz00_3768;

						BgL_auxz00_3768 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 31644)),
							BGl_string3083z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2621);
						FAILURE(BgL_auxz00_3768, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_2620))
					{	/* Ieee/port.scm 729 */
						BgL_auxz00_3758 = BgL_portz00_2620;
					}
				else
					{
						obj_t BgL_auxz00_3761;

						BgL_auxz00_3761 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 31644)),
							BGl_string3083z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2620);
						FAILURE(BgL_auxz00_3761, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3758,
					BgL_auxz00_3765);
			}
		}
	}



/* with-error-to-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_36, obj_t BgL_thunkz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 740 */
			{	/* Ieee/port.scm 741 */
				obj_t BgL_portz00_1175;

				{	/* Ieee/port.scm 387 */

					BgL_portz00_1175 =
						BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
						(BgL_procz00_36, BGl_proc3084z00zz__r4_ports_6_10_1z00, BTRUE,
						BGl_proc3085z00zz__r4_ports_6_10_1z00);
				}
				{	/* Ieee/port.scm 741 */
					obj_t BgL_denvz00_1176;

					BgL_denvz00_1176 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 742 */
						obj_t BgL_oldzd2errorzd2portz00_1177;

						BgL_oldzd2errorzd2portz00_1177 =
							BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1176);
						{	/* Ieee/port.scm 743 */
							obj_t BgL_resz00_1178;

							BgL_resz00_1178 = BUNSPEC;
							{	/* Ieee/port.scm 744 */

								{	/* Ieee/port.scm 745 */
									obj_t BgL_val2136z00_1179;

									BgL_val2136z00_1179 =
										BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00
										(BgL_thunkz00_37, BgL_portz00_1175, BgL_denvz00_1176);
									BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1176,
										BgL_oldzd2errorzd2portz00_1177);
									BUNSPEC;
									BgL_resz00_1178 = bgl_close_output_port(BgL_portz00_1175);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val2136z00_1179)))
										{	/* Ieee/port.scm 751 */
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val2136z00_1179), CDR(BgL_val2136z00_1179));
										}
									else
										{	/* Ieee/port.scm 751 */
											BgL_val2136z00_1179;
										}
								}
								return BgL_resz00_1178;
							}
						}
					}
				}
			}
		}
	}



/* <exit:2374> */
	obj_t BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2800,
		obj_t BgL_portz00_2799, obj_t BgL_denvz00_2798)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 750 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2137z00_1184;

			if (SET_EXIT(BgL_an_exit2137z00_1184))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2137z00_1184 = (void *) jmpbuf;
					{	/* Ieee/port.scm 750 */

						PUSH_EXIT(BgL_an_exit2137z00_1184, ((long) 0));
						{	/* Ieee/port.scm 747 */
							obj_t BgL_val2138z00_1185;

							BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2798,
								BgL_portz00_2799);
							BUNSPEC;
							BgL_val2138z00_1185 =
								PROCEDURE_ENTRY(BgL_thunkz00_2800) (BgL_thunkz00_2800, BEOA);
							POP_EXIT();
							return BgL_val2138z00_1185;
						}
					}
				}
		}
	}



/* _with-error-to-procedure */
	obj_t BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2624, obj_t BgL_procz00_2625, obj_t BgL_thunkz00_2626)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 740 */
			{	/* Ieee/port.scm 741 */
				obj_t BgL_auxz00_3799;

				obj_t BgL_auxz00_3792;

				if (PROCEDUREP(BgL_thunkz00_2626))
					{	/* Ieee/port.scm 741 */
						BgL_auxz00_3799 = BgL_thunkz00_2626;
					}
				else
					{
						obj_t BgL_auxz00_3802;

						BgL_auxz00_3802 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 32144)),
							BGl_string3086z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2626);
						FAILURE(BgL_auxz00_3802, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2625))
					{	/* Ieee/port.scm 741 */
						BgL_auxz00_3792 = BgL_procz00_2625;
					}
				else
					{
						obj_t BgL_auxz00_3795;

						BgL_auxz00_3795 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 32144)),
							BGl_string3086z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2625);
						FAILURE(BgL_auxz00_3795, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3792, BgL_auxz00_3799);
			}
		}
	}



/* close_2776 */
	obj_t BGl_close_2776z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2627)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 387 */
			return BBOOL(((bool_t) 0));
		}
	}



/* flush_2777 */
	obj_t BGl_flush_2777z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2628)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 387 */
			return BBOOL(((bool_t) 0));
		}
	}



/* input-port-protocol */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t
		BgL_prototcolz00_38)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 787 */
			{	/* Ieee/port.scm 788 */
				obj_t BgL_g2266z00_1198;

				BgL_g2266z00_1198 =
					BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g2266z00_1198);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g2266z00_1198, ((long) 0));
			}}}
			{	/* Ieee/port.scm 789 */
				obj_t BgL_cellz00_1200;

				BgL_cellz00_1200 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_prototcolz00_38,
					BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00);
				bgl_mutex_unlock
					(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
				if (PAIRP(BgL_cellz00_1200))
					{	/* Ieee/port.scm 791 */
						return CDR(BgL_cellz00_1200);
					}
				else
					{	/* Ieee/port.scm 791 */
						return BFALSE;
					}
			}
		}
	}



/* _input-port-protocol */
	obj_t BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2629, obj_t BgL_prototcolz00_2630)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 787 */
			return
				BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00
				(BgL_prototcolz00_2630);
		}
	}



/* input-port-protocol-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_protocolz00_39, obj_t BgL_openz00_40)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 798 */
			{	/* Ieee/port.scm 799 */
				obj_t BgL_g2266z00_1202;

				BgL_g2266z00_1202 =
					BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g2266z00_1202);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g2266z00_1202, ((long) 0));
			}}}
			{	/* Ieee/port.scm 800 */
				obj_t BgL_cz00_1204;

				BgL_cz00_1204 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_protocolz00_39,
					BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00);
				if (PAIRP(BgL_cz00_1204))
					{	/* Ieee/port.scm 801 */
						SET_CDR(BgL_cz00_1204, BgL_openz00_40);
					}
				else
					{	/* Ieee/port.scm 804 */
						obj_t BgL_arg2380z00_1206;

						BgL_arg2380z00_1206 = MAKE_PAIR(BgL_protocolz00_39, BgL_openz00_40);
						BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
							MAKE_PAIR(BgL_arg2380z00_1206,
							BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00);
					}
			}
			bgl_mutex_unlock
				(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
			return BgL_openz00_40;
		}
	}



/* _input-port-protocol-set! */
	obj_t BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2631, obj_t BgL_protocolz00_2632, obj_t BgL_openz00_2633)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 798 */
			return
				BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00
				(BgL_protocolz00_2632, BgL_openz00_2633);
		}
	}



/* get-port-buffer */
	BGL_EXPORTED_DEF obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t
		BgL_whoz00_41, obj_t BgL_bufinfoz00_42, int BgL_defsiza7za7_43)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 811 */
			if ((BgL_bufinfoz00_42 == BTRUE))
				{	/* Ieee/port.scm 813 */
					return make_string_sans_fill((long) (BgL_defsiza7za7_43));
				}
			else
				{	/* Ieee/port.scm 813 */
					if ((BgL_bufinfoz00_42 == BFALSE))
						{	/* Ieee/port.scm 815 */
							return make_string_sans_fill(((long) 2));
						}
					else
						{	/* Ieee/port.scm 815 */
							if (STRINGP(BgL_bufinfoz00_42))
								{	/* Ieee/port.scm 817 */
									return BgL_bufinfoz00_42;
								}
							else
								{	/* Ieee/port.scm 817 */
									if (INTEGERP(BgL_bufinfoz00_42))
										{	/* Ieee/port.scm 819 */
											if (((long) CINT(BgL_bufinfoz00_42) > ((long) 0)))
												{	/* Ieee/port.scm 820 */
													return
														make_string_sans_fill(
														(long) CINT(BgL_bufinfoz00_42));
												}
											else
												{	/* Ieee/port.scm 820 */
													return make_string_sans_fill(((long) 2));
										}}
									else
										{	/* Ieee/port.scm 819 */
											return
												BGl_errorz00zz__errorz00(BgL_whoz00_41,
												BGl_string3087z00zz__r4_ports_6_10_1z00,
												BgL_bufinfoz00_42);
										}
								}
						}
				}
		}
	}



/* _get-port-buffer */
	obj_t BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2634,
		obj_t BgL_whoz00_2635, obj_t BgL_bufinfoz00_2636,
		obj_t BgL_defsiza7za7_2637)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 811 */
			{	/* Ieee/port.scm 813 */
				int BgL_auxz00_3856;

				obj_t BgL_auxz00_3849;

				{	/* Ieee/port.scm 813 */
					obj_t BgL_auxz00_3857;

					if (INTEGERP(BgL_defsiza7za7_2637))
						{	/* Ieee/port.scm 813 */
							BgL_auxz00_3857 = BgL_defsiza7za7_2637;
						}
					else
						{
							obj_t BgL_auxz00_3860;

							BgL_auxz00_3860 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 35242)),
								BGl_string3088z00zz__r4_ports_6_10_1z00,
								BGl_string3090z00zz__r4_ports_6_10_1z00, BgL_defsiza7za7_2637);
							FAILURE(BgL_auxz00_3860, BFALSE, BFALSE);
						}
					BgL_auxz00_3856 = CINT(BgL_auxz00_3857);
				}
				if (SYMBOLP(BgL_whoz00_2635))
					{	/* Ieee/port.scm 813 */
						BgL_auxz00_3849 = BgL_whoz00_2635;
					}
				else
					{
						obj_t BgL_auxz00_3852;

						BgL_auxz00_3852 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 35242)),
							BGl_string3088z00zz__r4_ports_6_10_1z00,
							BGl_string3089z00zz__r4_ports_6_10_1z00, BgL_whoz00_2635);
						FAILURE(BgL_auxz00_3852, BFALSE, BFALSE);
					}
				return
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_3849,
					BgL_bufinfoz00_2636, BgL_auxz00_3856);
			}
		}
	}



/* _%open-input-file */
	obj_t BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2533, obj_t BgL_stringz00_2534, obj_t BgL_bufz00_2535)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 829 */
			return bgl_open_input_file(BgL_stringz00_2534, BgL_bufz00_2535);
		}
	}



/* _%open-input-pipe */
	obj_t BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2536, obj_t BgL_stringz00_2537, obj_t BgL_bufinfoz00_2538)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 835 */
			return
				bgl_open_input_pipe(BgL_stringz00_2537,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3091z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_2538,
					(int) (((long) 1024))));
		}
	}



/* %open-input-resource */
	obj_t BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t
		BgL_filez00_48, obj_t BgL_bufinfoz00_49)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 842 */
			return
				bgl_open_input_resource(BgL_filez00_48,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3093z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_49,
					default_io_bufsiz));
		}
	}



/* _%open-input-resource */
	obj_t BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2551, obj_t BgL_filez00_2552, obj_t BgL_bufinfoz00_2553)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 842 */
			return
				BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00
				(BgL_filez00_2552, BgL_bufinfoz00_2553);
		}
	}



/* %open-input-http-socket */
	obj_t BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_50, obj_t BgL_bufinfoz00_51)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 849 */
			{	/* Ieee/port.scm 852 */
				obj_t BgL_parserz00_2638;

				BgL_parserz00_2638 =
					make_fx_procedure(BGl_parserz00zz__r4_ports_6_10_1z00,
					(int) (((long) 5)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_parserz00_2638, (int) (((long) 0)), BgL_stringz00_50);
				{	/* Ieee/port.scm 879 */
					obj_t BgL_protocolz00_1215;

					BgL_protocolz00_1215 =
						BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_50,
						BGl_string3095z00zz__r4_ports_6_10_1z00);
					{	/* Ieee/port.scm 881 */
						obj_t BgL_loginz00_1216;

						obj_t BgL_hostz00_1217;

						obj_t BgL_portz00_1218;

						obj_t BgL_abspathz00_1219;

						{	/* Ieee/port.scm 881 */
							int BgL_auxz00_3879;

							BgL_auxz00_3879 = (int) (((long) 1));
							BgL_loginz00_1216 = BGL_MVALUES_VAL(BgL_auxz00_3879);
						}
						{	/* Ieee/port.scm 881 */
							int BgL_auxz00_3882;

							BgL_auxz00_3882 = (int) (((long) 2));
							BgL_hostz00_1217 = BGL_MVALUES_VAL(BgL_auxz00_3882);
						}
						{	/* Ieee/port.scm 881 */
							int BgL_auxz00_3885;

							BgL_auxz00_3885 = (int) (((long) 3));
							BgL_portz00_1218 = BGL_MVALUES_VAL(BgL_auxz00_3885);
						}
						{	/* Ieee/port.scm 881 */
							int BgL_auxz00_3888;

							BgL_auxz00_3888 = (int) (((long) 4));
							BgL_abspathz00_1219 = BGL_MVALUES_VAL(BgL_auxz00_3888);
						}
						{	/* Ieee/port.scm 881 */
							obj_t BgL_sockz00_1220;

							{	/* Ieee/port.scm 881 */
								obj_t BgL_methodz00_1262;

								BgL_methodz00_1262 = BGl_symbol3096z00zz__r4_ports_6_10_1z00;
								BgL_sockz00_1220 =
									BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE,
									BNIL, BgL_hostz00_1217,
									BGl_string3099z00zz__r4_ports_6_10_1z00, BFALSE,
									BgL_loginz00_1216, BgL_methodz00_1262, BFALSE, BFALSE,
									BgL_abspathz00_1219, BgL_portz00_1218,
									BGl_symbol3098z00zz__r4_ports_6_10_1z00, BFALSE, BFALSE,
									BINT(((long) 0)), BFALSE);
							}
							{	/* Ieee/port.scm 881 */
								obj_t BgL_ipz00_1221;

								BgL_ipz00_1221 = SOCKET_INPUT(BgL_sockz00_1220);
								{	/* Ieee/port.scm 886 */
									obj_t BgL_opz00_1222;

									BgL_opz00_1222 = SOCKET_OUTPUT(BgL_sockz00_1220);
									{	/* Ieee/port.scm 887 */

										{	/* Ieee/port.scm 888 */
											obj_t BgL_zc3anonymousza32387ze3z83_2640;

											BgL_zc3anonymousza32387ze3z83_2640 =
												make_fx_procedure
												(BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza32387ze3z83_2640,
												(int) (((long) 0)), BgL_sockz00_1220);
											if (PROCEDURE_CORRECT_ARITYP
												(BgL_zc3anonymousza32387ze3z83_2640,
													(int) (((long) 1))))
												{	/* Ieee/port.scm 888 */
													PORT_CHOOK_SET(BgL_ipz00_1221,
														BgL_zc3anonymousza32387ze3z83_2640);
													BUNSPEC;
													BgL_zc3anonymousza32387ze3z83_2640;
												}
											else
												{	/* Ieee/port.scm 888 */
													bgl_system_failure(BGL_IO_PORT_ERROR,
														BGl_symbol3100z00zz__r4_ports_6_10_1z00,
														BGl_string3102z00zz__r4_ports_6_10_1z00,
														BgL_zc3anonymousza32387ze3z83_2640);
												}
										}
										return
											BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00
											(BgL_bufinfoz00_51, BgL_sockz00_1220, BgL_parserz00_2638,
											BgL_opz00_1222, BgL_ipz00_1221);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* <exit:2388> */
	obj_t BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_bufinfoz00_2791, obj_t BgL_sockz00_2790, obj_t BgL_parserz00_2789,
		obj_t BgL_opz00_2788, obj_t BgL_ipz00_2787)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 889 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2147z00_1228;

			if (SET_EXIT(BgL_an_exit2147z00_1228))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2147z00_1228 = (void *) jmpbuf;
					{	/* Ieee/port.scm 889 */

						PUSH_EXIT(BgL_an_exit2147z00_1228, ((long) 1));
						{	/* Ieee/port.scm 889 */
							obj_t BgL_an_exitd2148z00_1229;

							BgL_an_exitd2148z00_1229 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Ieee/port.scm 889 */
								obj_t BgL_res2150z00_1232;

								{	/* Ieee/port.scm 889 */
									obj_t BgL_err2145z00_1233;

									obj_t BgL_ohs2144z00_1234;

									BgL_err2145z00_1233 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs2144z00_1234 = BGL_ERROR_HANDLER_GET();
									{	/* Ieee/port.scm 889 */
										obj_t BgL_val2151z00_1235;

										BgL_val2151z00_1235 =
											BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00
											(BgL_parserz00_2789, BgL_opz00_2788, BgL_ipz00_2787,
											BgL_ohs2144z00_1234, BgL_an_exitd2148z00_1229,
											BgL_err2145z00_1233);
										BGL_ERROR_HANDLER_SET(BgL_ohs2144z00_1234);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err2145z00_1233)))
											{	/* Ieee/port.scm 894 */
												obj_t BgL_arg2390z00_1237;

												{	/* Ieee/port.scm 894 */
													obj_t BgL_ez00_1238;

													BgL_ez00_1238 = CDR(BgL_err2145z00_1233);
													socket_close(BgL_sockz00_2790);
													if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1238,
															BGl_z62httpzd2redirectionzb0zz__httpz00))
														{	/* Ieee/port.scm 893 */
															obj_t BgL_arg2392z00_1240;

															{
																BgL_z62httpzd2redirectionzb0_bglt
																	BgL_auxz00_3921;
																BgL_auxz00_3921 =
																	(BgL_z62httpzd2redirectionzb0_bglt)
																	(BgL_ez00_1238);
																BgL_arg2392z00_1240 =
																	(((BgL_z62httpzd2redirectionzb0_bglt)
																		CREF(BgL_auxz00_3921))->BgL_urlz00);
															}
															BgL_arg2390z00_1237 =
																BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																(BgL_arg2392z00_1240, BgL_bufinfoz00_2791);
														}
													else
														{	/* Ieee/port.scm 892 */
															BgL_arg2390z00_1237 =
																BGl_raisez00zz__errorz00(BgL_ez00_1238);
														}
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd2148z00_1229, BgL_arg2390z00_1237);
											}
										else
											{	/* Ieee/port.scm 889 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val2151z00_1235)))
											{	/* Ieee/port.scm 889 */
												BgL_res2150z00_1232 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val2151z00_1235), CDR(BgL_val2151z00_1235));
											}
										else
											{	/* Ieee/port.scm 889 */
												BgL_res2150z00_1232 = BgL_val2151z00_1235;
											}
									}
								}
								POP_EXIT();
								return BgL_res2150z00_1232;
							}
						}
					}
				}
		}
	}



/* <exit:2396> */
	obj_t BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_parserz00_2797,
		obj_t BgL_opz00_2796, obj_t BgL_ipz00_2795, obj_t BgL_ohs2144z00_2794,
		obj_t BgL_an_exitd2148z00_2793, obj_t BgL_err2145z00_2792)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 889 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2152z00_1245;

			if (SET_EXIT(BgL_an_exit2152z00_1245))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2152z00_1245 = (void *) jmpbuf;
					{	/* Ieee/port.scm 889 */

						PUSH_EXIT(BgL_an_exit2152z00_1245, ((long) 0));
						{	/* Ieee/port.scm 889 */
							obj_t BgL_val2153z00_1246;

							{	/* Ieee/port.scm 889 */
								obj_t BgL_arg2397z00_1247;

								{	/* Ieee/port.scm 889 */
									obj_t BgL_zc3anonymousza32399ze3z83_2639;

									BgL_zc3anonymousza32399ze3z83_2639 =
										make_fx_procedure
										(BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32399ze3z83_2639,
										(int) (((long) 0)), BgL_err2145z00_2792);
									PROCEDURE_SET(BgL_zc3anonymousza32399ze3z83_2639,
										(int) (((long) 1)), BgL_an_exitd2148z00_2793);
									BgL_arg2397z00_1247 =
										MAKE_PAIR(BgL_zc3anonymousza32399ze3z83_2639,
										BgL_ohs2144z00_2794);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2397z00_1247);
								BUNSPEC;
							}
							BgL_val2153z00_1246 =
								BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_ipz00_2795,
								BgL_opz00_2796, BgL_parserz00_2797);
							POP_EXIT();
							return BgL_val2153z00_1246;
						}
					}
				}
		}
	}



/* _%open-input-http-socket */
	obj_t BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2539, obj_t BgL_stringz00_2540, obj_t BgL_bufinfoz00_2541)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 849 */
			return
				BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00
				(BgL_stringz00_2540, BgL_bufinfoz00_2541);
		}
	}



/* parser */
	obj_t BGl_parserz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2641,
		obj_t BgL_ipz00_2643, obj_t BgL_statuszd2codezd2_2644,
		obj_t BgL_headerz00_2645, obj_t BgL_clenz00_2646, obj_t BgL_tencz00_2647)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 877 */
			{	/* Ieee/port.scm 852 */
				obj_t BgL_stringz00_2642;

				BgL_stringz00_2642 = PROCEDURE_REF(BgL_envz00_2641, (int) (((long) 0)));
				{
					obj_t BgL_ipz00_1272;

					obj_t BgL_statuszd2codezd2_1273;

					obj_t BgL_headerz00_1274;

					obj_t BgL_clenz00_1275;

					obj_t BgL_tencz00_1276;

					BgL_ipz00_1272 = BgL_ipz00_2643;
					BgL_statuszd2codezd2_1273 = BgL_statuszd2codezd2_2644;
					BgL_headerz00_1274 = BgL_headerz00_2645;
					BgL_clenz00_1275 = BgL_clenz00_2646;
					BgL_tencz00_1276 = BgL_tencz00_2647;
					{	/* Ieee/port.scm 852 */
						bool_t BgL_testz00_3951;

						if (((long) CINT(BgL_statuszd2codezd2_1273) >= ((long) 200)))
							{	/* Ieee/port.scm 852 */
								BgL_testz00_3951 =
									((long) CINT(BgL_statuszd2codezd2_1273) <= ((long) 299));
							}
						else
							{	/* Ieee/port.scm 852 */
								BgL_testz00_3951 = ((bool_t) 0);
							}
						if (BgL_testz00_3951)
							{	/* Ieee/port.scm 852 */
								if (INPUT_PORTP(BgL_ipz00_1272))
									{	/* Ieee/port.scm 870 */
										if (CBOOL(BgL_clenz00_1275))
											{	/* Ieee/port.scm 872 */
												{	/* Ieee/port.scm 873 */
													long BgL_arg2403z00_1280;

													{	/* Ieee/port.scm 873 */
														long BgL_res2756z00_2162;

														{	/* Ieee/port.scm 873 */
															long BgL_xz00_2161;

															BgL_xz00_2161 = BELONG_TO_LONG(BgL_clenz00_1275);
															{	/* Ieee/port.scm 873 */
																long BgL_auxz00_3962;

																{	/* Ieee/port.scm 873 */
																	long BgL_auxz00_3963;

																	BgL_auxz00_3963 =
																		ELONG_TO_LONG(BgL_xz00_2161);
																	BgL_auxz00_3962 =
																		ELONG_TO_LONG(BgL_auxz00_3963);
																}
																BgL_res2756z00_2162 =
																	ELONG_TO_LONG(BgL_auxz00_3962);
														}}
														BgL_arg2403z00_1280 = BgL_res2756z00_2162;
													}
													{	/* Ieee/port.scm 873 */
														obj_t BgL_portz00_2163;

														BgL_portz00_2163 = BgL_ipz00_1272;
														INPUT_PORT_FILLBARRIER_SET(BgL_portz00_2163,
															BgL_arg2403z00_1280);
														BUNSPEC;
														BgL_arg2403z00_1280;
												}}
												{	/* Ieee/port.scm 874 */
													long BgL_auxz00_3968;

													BgL_auxz00_3968 = BELONG_TO_LONG(BgL_clenz00_1275);
													BGL_INPUT_PORT_LENGTH_SET(BgL_ipz00_1272,
														BgL_auxz00_3968);
												} BUNSPEC;
												return BgL_ipz00_1272;
											}
										else
											{	/* Ieee/port.scm 872 */
												return BgL_ipz00_1272;
											}
									}
								else
									{	/* Ieee/port.scm 376 */

										{	/* Ieee/port.scm 376 */
											obj_t BgL_startz00_2166;

											BgL_startz00_2166 = BINT(((long) 0));
											if (((long) CINT(BgL_startz00_2166) < ((long) 0)))
												{	/* Ieee/port.scm 376 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
														BGl_string3033z00zz__r4_ports_6_10_1z00,
														BgL_startz00_2166);
												}
											else
												{	/* Ieee/port.scm 376 */
													if (((long) CINT(BgL_startz00_2166) > ((long) 0)))
														{	/* Ieee/port.scm 376 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
																BGl_string3034z00zz__r4_ports_6_10_1z00,
																BgL_startz00_2166);
														}
													else
														{	/* Ieee/port.scm 376 */
															return
																bgl_open_input_string
																(BGl_string3103z00zz__r4_ports_6_10_1z00,
																CINT(BgL_startz00_2166));
														}
												}
										}
									}
							}
						else
							{

								if (INTEGERP(BgL_statuszd2codezd2_1273))
									{	/* Ieee/port.scm 853 */
										switch ((long) CINT(BgL_statuszd2codezd2_1273))
											{
											case ((long) 401):

												{	/* Llib/object.scm 90 */
													BgL_z62iozd2portzd2errorz62_bglt BgL_arg2405z00_1286;

													{	/* Llib/object.scm 90 */
														obj_t BgL_arg2406z00_1287;

														obj_t BgL_arg2407z00_1288;

														obj_t BgL_arg2409z00_1290;

														{	/* Llib/object.scm 90 */

															{	/* Llib/object.scm 90 */

																BgL_arg2406z00_1287 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
														}}
														BgL_arg2407z00_1288 =
															BGl_symbol3093z00zz__r4_ports_6_10_1z00;
														BgL_arg2409z00_1290 =
															string_append
															(BGl_string3025z00zz__r4_ports_6_10_1z00,
															BgL_stringz00_2642);
														BgL_arg2405z00_1286 =
															BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg2406z00_1287,
															BgL_arg2407z00_1288,
															BGl_string3105z00zz__r4_ports_6_10_1z00,
															BgL_arg2409z00_1290);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2405z00_1286));
												}
												break;
											case ((long) 404):

												{	/* Llib/object.scm 90 */
													BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
														BgL_arg2410z00_1292;
													{	/* Llib/object.scm 90 */
														obj_t BgL_arg2411z00_1293;

														obj_t BgL_arg2412z00_1294;

														obj_t BgL_arg2414z00_1296;

														{	/* Llib/object.scm 90 */

															{	/* Llib/object.scm 90 */

																BgL_arg2411z00_1293 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
														}}
														BgL_arg2412z00_1294 =
															BGl_symbol3093z00zz__r4_ports_6_10_1z00;
														BgL_arg2414z00_1296 =
															string_append
															(BGl_string3025z00zz__r4_ports_6_10_1z00,
															BgL_stringz00_2642);
														BgL_arg2410z00_1292 =
															BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg2411z00_1293,
															BgL_arg2412z00_1294,
															BGl_string3106z00zz__r4_ports_6_10_1z00,
															BgL_arg2414z00_1296);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2410z00_1292));
												}
												break;
											default:
											BgL_case_else2140z00_1283:
												{	/* Llib/object.scm 90 */
													BgL_z62iozd2portzd2errorz62_bglt BgL_arg2415z00_1298;

													{	/* Llib/object.scm 90 */
														obj_t BgL_arg2416z00_1299;

														obj_t BgL_arg2417z00_1300;

														obj_t BgL_arg2418z00_1301;

														obj_t BgL_arg2419z00_1302;

														{	/* Llib/object.scm 90 */

															{	/* Llib/object.scm 90 */

																BgL_arg2416z00_1299 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
															}
														}
														BgL_arg2417z00_1300 =
															BGl_symbol3093z00zz__r4_ports_6_10_1z00;
														{	/* Ieee/port.scm 867 */
															obj_t BgL_list2420z00_1304;

															BgL_list2420z00_1304 =
																MAKE_PAIR(BgL_statuszd2codezd2_1273, BNIL);
															BgL_arg2418z00_1301 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string3104z00zz__r4_ports_6_10_1z00,
																BgL_list2420z00_1304);
														}
														BgL_arg2419z00_1302 =
															string_append
															(BGl_string3025z00zz__r4_ports_6_10_1z00,
															BgL_stringz00_2642);
														BgL_arg2415z00_1298 =
															BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg2416z00_1299,
															BgL_arg2417z00_1300, BgL_arg2418z00_1301,
															BgL_arg2419z00_1302);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2415z00_1298));
												}
											}
									}
								else
									{	/* Ieee/port.scm 853 */
										goto BgL_case_else2140z00_1283;
									}
							}
					}
				}
			}
		}
	}



/* <anonymous:2399> */
	obj_t BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2648, obj_t BgL_ez00_2651)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 889 */
			{	/* Ieee/port.scm 889 */
				obj_t BgL_err2145z00_2649;

				obj_t BgL_an_exitd2148z00_2650;

				BgL_err2145z00_2649 =
					PROCEDURE_REF(BgL_envz00_2648, (int) (((long) 0)));
				BgL_an_exitd2148z00_2650 =
					PROCEDURE_REF(BgL_envz00_2648, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1249;

					BgL_ez00_1249 = BgL_ez00_2651;
					SET_CAR(BgL_err2145z00_2649, BTRUE);
					SET_CDR(BgL_err2145z00_2649, BgL_ez00_1249);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2148z00_2650,
						BgL_ez00_1249);
				}
			}
		}
	}



/* <anonymous:2387> */
	obj_t BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2652, obj_t BgL_ipz00_2654)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 888 */
			return socket_close(PROCEDURE_REF(BgL_envz00_2652, (int) (((long) 0))));
		}
	}



/* _open-input-file */
	obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_55,
		obj_t BgL_optz00_54)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 917 */
			{	/* Ieee/port.scm 917 */
				obj_t BgL_g2221z00_1307;

				BgL_g2221z00_1307 = VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
				{	/* Ieee/port.scm 917 */
					int BgL_aux2223z00_1309;

					BgL_aux2223z00_1309 = VECTOR_LENGTH(BgL_optz00_54);
					switch ((long) (BgL_aux2223z00_1309))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 917 */

								{	/* Ieee/port.scm 917 */
									obj_t BgL_arg2423z00_1312;

									BgL_arg2423z00_1312 =
										VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
									{	/* Ieee/port.scm 917 */
										obj_t BgL_auxz00_4018;

										if (STRINGP(BgL_arg2423z00_1312))
											{	/* Ieee/port.scm 917 */
												BgL_auxz00_4018 = BgL_arg2423z00_1312;
											}
										else
											{
												obj_t BgL_auxz00_4021;

												BgL_auxz00_4021 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 39848)),
													BGl_string3107z00zz__r4_ports_6_10_1z00,
													BGl_string3040z00zz__r4_ports_6_10_1z00,
													BgL_arg2423z00_1312);
												FAILURE(BgL_auxz00_4021, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_auxz00_4018, BTRUE);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 917 */
								obj_t BgL_bufinfoz00_1313;

								BgL_bufinfoz00_1313 =
									VECTOR_REF(BgL_optz00_54, (int) (((long) 1)));
								{	/* Ieee/port.scm 917 */

									{	/* Ieee/port.scm 917 */
										obj_t BgL_arg2424z00_1314;

										BgL_arg2424z00_1314 =
											VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
										{	/* Ieee/port.scm 917 */
											obj_t BgL_auxz00_4030;

											if (STRINGP(BgL_arg2424z00_1314))
												{	/* Ieee/port.scm 917 */
													BgL_auxz00_4030 = BgL_arg2424z00_1314;
												}
											else
												{
													obj_t BgL_auxz00_4033;

													BgL_auxz00_4033 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 39848)),
														BGl_string3107z00zz__r4_ports_6_10_1z00,
														BGl_string3040z00zz__r4_ports_6_10_1z00,
														BgL_arg2424z00_1314);
													FAILURE(BgL_auxz00_4033, BFALSE, BFALSE);
												}
											return
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_auxz00_4030, BgL_bufinfoz00_1313);
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



/* open-input-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_52, obj_t BgL_bufinfoz00_53)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 917 */
			{	/* Ieee/port.scm 918 */
				obj_t BgL_bufferz00_1315;

				BgL_bufferz00_1315 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_symbol3093z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_53,
					default_io_bufsiz);
				{
					obj_t BgL_protosz00_1317;

					BgL_protosz00_1317 =
						BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00;
				BgL_zc3anonymousza32425ze3z83_1318:
					if (NULLP(BgL_protosz00_1317))
						{	/* Ieee/port.scm 920 */
							return bgl_open_input_file(BgL_stringz00_52, BgL_bufferz00_1315);
						}
					else
						{	/* Ieee/port.scm 923 */
							obj_t BgL_cellz00_1320;

							BgL_cellz00_1320 = CAR(BgL_protosz00_1317);
							{	/* Ieee/port.scm 923 */
								obj_t BgL_identz00_1321;

								BgL_identz00_1321 = CAR(BgL_cellz00_1320);
								{	/* Ieee/port.scm 924 */
									long BgL_lz00_1322;

									BgL_lz00_1322 = STRING_LENGTH(BgL_identz00_1321);
									{	/* Ieee/port.scm 925 */
										obj_t BgL_openz00_1323;

										BgL_openz00_1323 = CDR(BgL_cellz00_1320);
										{	/* Ieee/port.scm 926 */

											if (bigloo_strncmp(BgL_stringz00_52, BgL_identz00_1321,
													BgL_lz00_1322))
												{	/* Ieee/port.scm 929 */
													obj_t BgL_arg2428z00_1325;

													BgL_arg2428z00_1325 =
														c_substring(BgL_stringz00_52, BgL_lz00_1322,
														STRING_LENGTH(BgL_stringz00_52));
													return
														PROCEDURE_ENTRY(BgL_openz00_1323) (BgL_openz00_1323,
														BgL_arg2428z00_1325, BgL_bufferz00_1315, BEOA);
												}
											else
												{
													obj_t BgL_protosz00_4054;

													BgL_protosz00_4054 = CDR(BgL_protosz00_1317);
													BgL_protosz00_1317 = BgL_protosz00_4054;
													goto BgL_zc3anonymousza32425ze3z83_1318;
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



/* _open-input-string */
	obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_59,
		obj_t BgL_optz00_58)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 935 */
			{	/* Ieee/port.scm 935 */
				obj_t BgL_g2224z00_1329;

				BgL_g2224z00_1329 = VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
				{	/* Ieee/port.scm 935 */
					int BgL_aux2226z00_1331;

					BgL_aux2226z00_1331 = VECTOR_LENGTH(BgL_optz00_58);
					switch ((long) (BgL_aux2226z00_1331))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 935 */

								{	/* Ieee/port.scm 935 */
									obj_t BgL_arg2432z00_1334;

									BgL_arg2432z00_1334 =
										VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
									{	/* Ieee/port.scm 935 */
										obj_t BgL_stringz00_2190;

										obj_t BgL_startz00_2191;

										if (STRINGP(BgL_arg2432z00_1334))
											{	/* Ieee/port.scm 935 */
												BgL_stringz00_2190 = BgL_arg2432z00_1334;
											}
										else
											{
												obj_t BgL_auxz00_4063;

												BgL_auxz00_4063 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 40629)),
													BGl_string3108z00zz__r4_ports_6_10_1z00,
													BGl_string3040z00zz__r4_ports_6_10_1z00,
													BgL_arg2432z00_1334);
												FAILURE(BgL_auxz00_4063, BFALSE, BFALSE);
											}
										BgL_startz00_2191 = BINT(((long) 0));
										{	/* Ieee/port.scm 935 */
											bool_t BgL_testz00_4068;

											{	/* Ieee/port.scm 935 */
												long BgL_n1z00_2195;

												{	/* Ieee/port.scm 935 */
													obj_t BgL_auxz00_4069;

													if (INTEGERP(BgL_startz00_2191))
														{	/* Ieee/port.scm 935 */
															BgL_auxz00_4069 = BgL_startz00_2191;
														}
													else
														{
															obj_t BgL_auxz00_4072;

															BgL_auxz00_4072 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3038z00zz__r4_ports_6_10_1z00,
																BINT(((long) 40629)),
																BGl_string3108z00zz__r4_ports_6_10_1z00,
																BGl_string3109z00zz__r4_ports_6_10_1z00,
																BgL_startz00_2191);
															FAILURE(BgL_auxz00_4072, BFALSE, BFALSE);
														}
													BgL_n1z00_2195 = (long) CINT(BgL_auxz00_4069);
												}
												BgL_testz00_4068 = (BgL_n1z00_2195 < ((long) 0));
											}
											if (BgL_testz00_4068)
												{	/* Ieee/port.scm 935 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
														BGl_string3033z00zz__r4_ports_6_10_1z00,
														BgL_startz00_2191);
												}
											else
												{	/* Ieee/port.scm 935 */
													bool_t BgL_testz00_4079;

													{	/* Ieee/port.scm 935 */
														long BgL_n1z00_2198;

														{	/* Ieee/port.scm 935 */
															obj_t BgL_auxz00_4080;

															if (INTEGERP(BgL_startz00_2191))
																{	/* Ieee/port.scm 935 */
																	BgL_auxz00_4080 = BgL_startz00_2191;
																}
															else
																{
																	obj_t BgL_auxz00_4083;

																	BgL_auxz00_4083 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3038z00zz__r4_ports_6_10_1z00,
																		BINT(((long) 40629)),
																		BGl_string3108z00zz__r4_ports_6_10_1z00,
																		BGl_string3109z00zz__r4_ports_6_10_1z00,
																		BgL_startz00_2191);
																	FAILURE(BgL_auxz00_4083, BFALSE, BFALSE);
																}
															BgL_n1z00_2198 = (long) CINT(BgL_auxz00_4080);
														}
														BgL_testz00_4079 =
															(BgL_n1z00_2198 >
															STRING_LENGTH(BgL_stringz00_2190));
													}
													if (BgL_testz00_4079)
														{	/* Ieee/port.scm 935 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
																BGl_string3034z00zz__r4_ports_6_10_1z00,
																BgL_startz00_2191);
														}
													else
														{	/* Ieee/port.scm 935 */
															int BgL_auxz00_4091;

															{	/* Ieee/port.scm 935 */
																obj_t BgL_auxz00_4092;

																if (INTEGERP(BgL_startz00_2191))
																	{	/* Ieee/port.scm 935 */
																		BgL_auxz00_4092 = BgL_startz00_2191;
																	}
																else
																	{
																		obj_t BgL_auxz00_4095;

																		BgL_auxz00_4095 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3038z00zz__r4_ports_6_10_1z00,
																			BINT(((long) 40629)),
																			BGl_string3108z00zz__r4_ports_6_10_1z00,
																			BGl_string3090z00zz__r4_ports_6_10_1z00,
																			BgL_startz00_2191);
																		FAILURE(BgL_auxz00_4095, BFALSE, BFALSE);
																	}
																BgL_auxz00_4091 = CINT(BgL_auxz00_4092);
															}
															return
																bgl_open_input_string(BgL_stringz00_2190,
																BgL_auxz00_4091);
														}
												}
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 935 */
								obj_t BgL_startz00_1335;

								BgL_startz00_1335 =
									VECTOR_REF(BgL_optz00_58, (int) (((long) 1)));
								{	/* Ieee/port.scm 935 */

									{	/* Ieee/port.scm 935 */
										obj_t BgL_arg2434z00_1336;

										BgL_arg2434z00_1336 =
											VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
										{	/* Ieee/port.scm 935 */
											obj_t BgL_stringz00_2200;

											if (STRINGP(BgL_arg2434z00_1336))
												{	/* Ieee/port.scm 935 */
													BgL_stringz00_2200 = BgL_arg2434z00_1336;
												}
											else
												{
													obj_t BgL_auxz00_4107;

													BgL_auxz00_4107 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 40629)),
														BGl_string3108z00zz__r4_ports_6_10_1z00,
														BGl_string3040z00zz__r4_ports_6_10_1z00,
														BgL_arg2434z00_1336);
													FAILURE(BgL_auxz00_4107, BFALSE, BFALSE);
												}
											{	/* Ieee/port.scm 935 */
												bool_t BgL_testz00_4111;

												{	/* Ieee/port.scm 935 */
													long BgL_n1z00_2205;

													{	/* Ieee/port.scm 935 */
														obj_t BgL_auxz00_4112;

														if (INTEGERP(BgL_startz00_1335))
															{	/* Ieee/port.scm 935 */
																BgL_auxz00_4112 = BgL_startz00_1335;
															}
														else
															{
																obj_t BgL_auxz00_4115;

																BgL_auxz00_4115 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3038z00zz__r4_ports_6_10_1z00,
																	BINT(((long) 40629)),
																	BGl_string3108z00zz__r4_ports_6_10_1z00,
																	BGl_string3109z00zz__r4_ports_6_10_1z00,
																	BgL_startz00_1335);
																FAILURE(BgL_auxz00_4115, BFALSE, BFALSE);
															}
														BgL_n1z00_2205 = (long) CINT(BgL_auxz00_4112);
													}
													BgL_testz00_4111 = (BgL_n1z00_2205 < ((long) 0));
												}
												if (BgL_testz00_4111)
													{	/* Ieee/port.scm 935 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
															BGl_string3033z00zz__r4_ports_6_10_1z00,
															BgL_startz00_1335);
													}
												else
													{	/* Ieee/port.scm 935 */
														bool_t BgL_testz00_4122;

														{	/* Ieee/port.scm 935 */
															long BgL_n1z00_2208;

															{	/* Ieee/port.scm 935 */
																obj_t BgL_auxz00_4123;

																if (INTEGERP(BgL_startz00_1335))
																	{	/* Ieee/port.scm 935 */
																		BgL_auxz00_4123 = BgL_startz00_1335;
																	}
																else
																	{
																		obj_t BgL_auxz00_4126;

																		BgL_auxz00_4126 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3038z00zz__r4_ports_6_10_1z00,
																			BINT(((long) 40629)),
																			BGl_string3108z00zz__r4_ports_6_10_1z00,
																			BGl_string3109z00zz__r4_ports_6_10_1z00,
																			BgL_startz00_1335);
																		FAILURE(BgL_auxz00_4126, BFALSE, BFALSE);
																	}
																BgL_n1z00_2208 = (long) CINT(BgL_auxz00_4123);
															}
															BgL_testz00_4122 =
																(BgL_n1z00_2208 >
																STRING_LENGTH(BgL_stringz00_2200));
														}
														if (BgL_testz00_4122)
															{	/* Ieee/port.scm 935 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
																	BGl_string3034z00zz__r4_ports_6_10_1z00,
																	BgL_startz00_1335);
															}
														else
															{	/* Ieee/port.scm 935 */
																int BgL_auxz00_4134;

																{	/* Ieee/port.scm 935 */
																	obj_t BgL_auxz00_4135;

																	if (INTEGERP(BgL_startz00_1335))
																		{	/* Ieee/port.scm 935 */
																			BgL_auxz00_4135 = BgL_startz00_1335;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4138;

																			BgL_auxz00_4138 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3038z00zz__r4_ports_6_10_1z00,
																				BINT(((long) 40629)),
																				BGl_string3108z00zz__r4_ports_6_10_1z00,
																				BGl_string3090z00zz__r4_ports_6_10_1z00,
																				BgL_startz00_1335);
																			FAILURE(BgL_auxz00_4138, BFALSE, BFALSE);
																		}
																	BgL_auxz00_4134 = CINT(BgL_auxz00_4135);
																}
																return
																	bgl_open_input_string(BgL_stringz00_2200,
																	BgL_auxz00_4134);
															}
													}
											}
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



/* open-input-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_56,
		obj_t BgL_startz00_57)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 935 */
			if (((long) CINT(BgL_startz00_57) < ((long) 0)))
				{	/* Ieee/port.scm 937 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
						BGl_string3033z00zz__r4_ports_6_10_1z00, BgL_startz00_57);
				}
			else
				{	/* Ieee/port.scm 937 */
					if (((long) CINT(BgL_startz00_57) > STRING_LENGTH(BgL_stringz00_56)))
						{	/* Ieee/port.scm 937 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol3031z00zz__r4_ports_6_10_1z00,
								BGl_string3034z00zz__r4_ports_6_10_1z00, BgL_startz00_57);
						}
					else
						{	/* Ieee/port.scm 937 */
							return
								bgl_open_input_string(BgL_stringz00_56, CINT(BgL_startz00_57));
						}
				}
		}
	}



/* open-input-string! */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_60)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 947 */
			return bgl_open_input_string_bang(BgL_stringz00_60);
		}
	}



/* _open-input-string! */
	obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2655, obj_t BgL_stringz00_2656)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 947 */
			{	/* Ieee/port.scm 948 */
				obj_t BgL_stringz00_3087;

				if (STRINGP(BgL_stringz00_2656))
					{	/* Ieee/port.scm 948 */
						BgL_stringz00_3087 = BgL_stringz00_2656;
					}
				else
					{
						obj_t BgL_auxz00_4160;

						BgL_auxz00_4160 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 41216)),
							BGl_string3110z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2656);
						FAILURE(BgL_auxz00_4160, BFALSE, BFALSE);
					}
				return bgl_open_input_string_bang(BgL_stringz00_3087);
			}
		}
	}



/* _open-input-procedure */
	obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_64, obj_t BgL_optz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 953 */
			{	/* Ieee/port.scm 953 */
				obj_t BgL_g2227z00_1340;

				BgL_g2227z00_1340 = VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
				{	/* Ieee/port.scm 953 */
					int BgL_aux2229z00_1342;

					BgL_aux2229z00_1342 = VECTOR_LENGTH(BgL_optz00_63);
					switch ((long) (BgL_aux2229z00_1342))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 953 */

								{	/* Ieee/port.scm 953 */
									obj_t BgL_arg2439z00_1345;

									BgL_arg2439z00_1345 =
										VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
									{	/* Ieee/port.scm 953 */
										obj_t BgL_procz00_2218;

										if (PROCEDUREP(BgL_arg2439z00_1345))
											{	/* Ieee/port.scm 953 */
												BgL_procz00_2218 = BgL_arg2439z00_1345;
											}
										else
											{
												obj_t BgL_auxz00_4172;

												BgL_auxz00_4172 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 41469)),
													BGl_string3111z00zz__r4_ports_6_10_1z00,
													BGl_string3041z00zz__r4_ports_6_10_1z00,
													BgL_arg2439z00_1345);
												FAILURE(BgL_auxz00_4172, BFALSE, BFALSE);
											}
										return
											bgl_open_input_procedure(BgL_procz00_2218,
											BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
											(BGl_symbol3061z00zz__r4_ports_6_10_1z00, BTRUE,
												(int) (((long) 1024))));
							}}} break;
						case ((long) 2):

							{	/* Ieee/port.scm 953 */
								obj_t BgL_bufinfoz00_1346;

								BgL_bufinfoz00_1346 =
									VECTOR_REF(BgL_optz00_63, (int) (((long) 1)));
								{	/* Ieee/port.scm 953 */

									{	/* Ieee/port.scm 953 */
										obj_t BgL_arg2440z00_1347;

										BgL_arg2440z00_1347 =
											VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
										{	/* Ieee/port.scm 953 */
											obj_t BgL_procz00_2221;

											if (PROCEDUREP(BgL_arg2440z00_1347))
												{	/* Ieee/port.scm 953 */
													BgL_procz00_2221 = BgL_arg2440z00_1347;
												}
											else
												{
													obj_t BgL_auxz00_4185;

													BgL_auxz00_4185 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 41469)),
														BGl_string3111z00zz__r4_ports_6_10_1z00,
														BGl_string3041z00zz__r4_ports_6_10_1z00,
														BgL_arg2440z00_1347);
													FAILURE(BgL_auxz00_4185, BFALSE, BFALSE);
												}
											return
												bgl_open_input_procedure(BgL_procz00_2221,
												BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
												(BGl_symbol3061z00zz__r4_ports_6_10_1z00,
													BgL_bufinfoz00_1346, (int) (((long) 1024))));
							}}}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* open-input-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_61,
		obj_t BgL_bufinfoz00_62)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 953 */
			return
				bgl_open_input_procedure(BgL_procz00_61,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3061z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_62,
					(int) (((long) 1024))));
		}
	}



/* _open-input-gzip-port */
	obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_68, obj_t BgL_optz00_67)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 960 */
			{	/* Ieee/port.scm 960 */
				obj_t BgL_g2230z00_1349;

				BgL_g2230z00_1349 = VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
				{	/* Ieee/port.scm 960 */
					int BgL_aux2232z00_1351;

					BgL_aux2232z00_1351 = VECTOR_LENGTH(BgL_optz00_67);
					switch ((long) (BgL_aux2232z00_1351))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 960 */

								{	/* Ieee/port.scm 960 */
									obj_t BgL_arg2442z00_1354;

									BgL_arg2442z00_1354 =
										VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
									{	/* Ieee/port.scm 960 */
										obj_t BgL_inz00_2225;

										if (INPUT_PORTP(BgL_arg2442z00_1354))
											{	/* Ieee/port.scm 960 */
												BgL_inz00_2225 = BgL_arg2442z00_1354;
											}
										else
											{
												obj_t BgL_auxz00_4204;

												BgL_auxz00_4204 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 41862)),
													BGl_string3112z00zz__r4_ports_6_10_1z00,
													BGl_string3055z00zz__r4_ports_6_10_1z00,
													BgL_arg2442z00_1354);
												FAILURE(BgL_auxz00_4204, BFALSE, BFALSE);
											}
										return
											BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7
											(BgL_inz00_2225,
											BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
											(BGl_symbol3113z00zz__r4_ports_6_10_1z00, BTRUE,
												default_io_bufsiz));
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 960 */
								obj_t BgL_bufinfoz00_1355;

								BgL_bufinfoz00_1355 =
									VECTOR_REF(BgL_optz00_67, (int) (((long) 1)));
								{	/* Ieee/port.scm 960 */

									{	/* Ieee/port.scm 960 */
										obj_t BgL_arg2443z00_1356;

										BgL_arg2443z00_1356 =
											VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
										{	/* Ieee/port.scm 960 */
											obj_t BgL_inz00_2228;

											if (INPUT_PORTP(BgL_arg2443z00_1356))
												{	/* Ieee/port.scm 960 */
													BgL_inz00_2228 = BgL_arg2443z00_1356;
												}
											else
												{
													obj_t BgL_auxz00_4216;

													BgL_auxz00_4216 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 41862)),
														BGl_string3112z00zz__r4_ports_6_10_1z00,
														BGl_string3055z00zz__r4_ports_6_10_1z00,
														BgL_arg2443z00_1356);
													FAILURE(BgL_auxz00_4216, BFALSE, BFALSE);
												}
											return
												BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7
												(BgL_inz00_2228,
												BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
												(BGl_symbol3113z00zz__r4_ports_6_10_1z00,
													BgL_bufinfoz00_1355, default_io_bufsiz));
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



/* open-input-gzip-port */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t
		BgL_inz00_65, obj_t BgL_bufinfoz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 960 */
			return
				BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_65,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3113z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_66,
					default_io_bufsiz));
		}
	}



/* open-input-c-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_69)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 967 */
			return bgl_open_input_c_string(BgL_stringz00_69);
		}
	}



/* _open-input-c-string */
	obj_t BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2657, obj_t BgL_stringz00_2658)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 967 */
			{	/* Ieee/port.scm 968 */
				char *BgL_stringz00_3088;

				{	/* Ieee/port.scm 968 */
					obj_t BgL_auxz00_4227;

					if (STRINGP(BgL_stringz00_2658))
						{	/* Ieee/port.scm 968 */
							BgL_auxz00_4227 = BgL_stringz00_2658;
						}
					else
						{
							obj_t BgL_auxz00_4230;

							BgL_auxz00_4230 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 42319)),
								BGl_string3115z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2658);
							FAILURE(BgL_auxz00_4230, BFALSE, BFALSE);
						}
					BgL_stringz00_3088 = BSTRING_TO_STRING(BgL_auxz00_4227);
				}
				return bgl_open_input_c_string(BgL_stringz00_3088);
			}
		}
	}



/* reopen-input-c-string */
	BGL_EXPORTED_DEF obj_t
		BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_70, char *BgL_stringz00_71)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 973 */
			return bgl_reopen_input_c_string(BgL_portz00_70, BgL_stringz00_71);
		}
	}



/* _reopen-input-c-string */
	obj_t BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2659, obj_t BgL_portz00_2660, obj_t BgL_stringz00_2661)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 973 */
			{	/* Ieee/port.scm 974 */
				obj_t BgL_portz00_3089;

				char *BgL_stringz00_3090;

				if (INPUT_PORTP(BgL_portz00_2660))
					{	/* Ieee/port.scm 974 */
						BgL_portz00_3089 = BgL_portz00_2660;
					}
				else
					{
						obj_t BgL_auxz00_4239;

						BgL_auxz00_4239 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 42639)),
							BGl_string3117z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2660);
						FAILURE(BgL_auxz00_4239, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 974 */
					obj_t BgL_auxz00_4243;

					if (STRINGP(BgL_stringz00_2661))
						{	/* Ieee/port.scm 974 */
							BgL_auxz00_4243 = BgL_stringz00_2661;
						}
					else
						{
							obj_t BgL_auxz00_4246;

							BgL_auxz00_4246 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 42639)),
								BGl_string3117z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2661);
							FAILURE(BgL_auxz00_4246, BFALSE, BFALSE);
						}
					BgL_stringz00_3090 = BSTRING_TO_STRING(BgL_auxz00_4243);
				}
				return bgl_reopen_input_c_string(BgL_portz00_3089, BgL_stringz00_3090);
			}
		}
	}



/* input-port-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_72, long BgL_timeoutz00_73)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 979 */
			return
				BBOOL(bgl_input_port_timeout_set(BgL_portz00_72, BgL_timeoutz00_73));
		}
	}



/* _input-port-timeout-set! */
	obj_t BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2662, obj_t BgL_portz00_2663, obj_t BgL_timeoutz00_2664)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 979 */
			{	/* Ieee/port.scm 980 */
				obj_t BgL_portz00_3091;

				long BgL_timeoutz00_3092;

				if (INPUT_PORTP(BgL_portz00_2663))
					{	/* Ieee/port.scm 980 */
						BgL_portz00_3091 = BgL_portz00_2663;
					}
				else
					{
						obj_t BgL_auxz00_4256;

						BgL_auxz00_4256 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 42975)),
							BGl_string3118z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2663);
						FAILURE(BgL_auxz00_4256, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 980 */
					obj_t BgL_auxz00_4260;

					if (INTEGERP(BgL_timeoutz00_2664))
						{	/* Ieee/port.scm 980 */
							BgL_auxz00_4260 = BgL_timeoutz00_2664;
						}
					else
						{
							obj_t BgL_auxz00_4263;

							BgL_auxz00_4263 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 42975)),
								BGl_string3118z00zz__r4_ports_6_10_1z00,
								BGl_string3109z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_2664);
							FAILURE(BgL_auxz00_4263, BFALSE, BFALSE);
						}
					BgL_timeoutz00_3092 = (long) CINT(BgL_auxz00_4260);
				}
				return
					BBOOL(bgl_input_port_timeout_set(BgL_portz00_3091,
						BgL_timeoutz00_3092));
			}
		}
	}



/* _open-output-file */
	obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_77,
		obj_t BgL_optz00_76)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 985 */
			{	/* Ieee/port.scm 985 */
				obj_t BgL_g2233z00_1358;

				BgL_g2233z00_1358 = VECTOR_REF(BgL_optz00_76, (int) (((long) 0)));
				{	/* Ieee/port.scm 985 */
					int BgL_aux2235z00_1360;

					BgL_aux2235z00_1360 = VECTOR_LENGTH(BgL_optz00_76);
					switch ((long) (BgL_aux2235z00_1360))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 985 */

								{	/* Ieee/port.scm 985 */
									obj_t BgL_arg2445z00_1363;

									BgL_arg2445z00_1363 =
										VECTOR_REF(BgL_optz00_76, (int) (((long) 0)));
									{	/* Ieee/port.scm 985 */
										obj_t BgL_stringz00_2232;

										if (STRINGP(BgL_arg2445z00_1363))
											{	/* Ieee/port.scm 985 */
												BgL_stringz00_2232 = BgL_arg2445z00_1363;
											}
										else
											{
												obj_t BgL_auxz00_4277;

												BgL_auxz00_4277 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 43239)),
													BGl_string3119z00zz__r4_ports_6_10_1z00,
													BGl_string3040z00zz__r4_ports_6_10_1z00,
													BgL_arg2445z00_1363);
												FAILURE(BgL_auxz00_4277, BFALSE, BFALSE);
											}
										return
											bgl_open_output_file(BgL_stringz00_2232,
											BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
											(BGl_symbol3043z00zz__r4_ports_6_10_1z00, BTRUE,
												default_io_bufsiz));
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 985 */
								obj_t BgL_bufinfoz00_1364;

								BgL_bufinfoz00_1364 =
									VECTOR_REF(BgL_optz00_76, (int) (((long) 1)));
								{	/* Ieee/port.scm 985 */

									{	/* Ieee/port.scm 985 */
										obj_t BgL_arg2446z00_1365;

										BgL_arg2446z00_1365 =
											VECTOR_REF(BgL_optz00_76, (int) (((long) 0)));
										{	/* Ieee/port.scm 985 */
											obj_t BgL_stringz00_2235;

											if (STRINGP(BgL_arg2446z00_1365))
												{	/* Ieee/port.scm 985 */
													BgL_stringz00_2235 = BgL_arg2446z00_1365;
												}
											else
												{
													obj_t BgL_auxz00_4289;

													BgL_auxz00_4289 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 43239)),
														BGl_string3119z00zz__r4_ports_6_10_1z00,
														BGl_string3040z00zz__r4_ports_6_10_1z00,
														BgL_arg2446z00_1365);
													FAILURE(BgL_auxz00_4289, BFALSE, BFALSE);
												}
											return
												bgl_open_output_file(BgL_stringz00_2235,
												BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
												(BGl_symbol3043z00zz__r4_ports_6_10_1z00,
													BgL_bufinfoz00_1364, default_io_bufsiz));
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



/* open-output-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_74, obj_t BgL_bufinfoz00_75)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 985 */
			return
				bgl_open_output_file(BgL_stringz00_74,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3043z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_75,
					default_io_bufsiz));
		}
	}



/* _append-output-file */
	obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_81, obj_t BgL_optz00_80)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 992 */
			{	/* Ieee/port.scm 992 */
				obj_t BgL_g2236z00_1367;

				BgL_g2236z00_1367 = VECTOR_REF(BgL_optz00_80, (int) (((long) 0)));
				{	/* Ieee/port.scm 992 */
					int BgL_aux2238z00_1369;

					BgL_aux2238z00_1369 = VECTOR_LENGTH(BgL_optz00_80);
					switch ((long) (BgL_aux2238z00_1369))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 992 */

								{	/* Ieee/port.scm 992 */
									obj_t BgL_arg2448z00_1372;

									BgL_arg2448z00_1372 =
										VECTOR_REF(BgL_optz00_80, (int) (((long) 0)));
									{	/* Ieee/port.scm 992 */
										obj_t BgL_stringz00_2239;

										if (STRINGP(BgL_arg2448z00_1372))
											{	/* Ieee/port.scm 992 */
												BgL_stringz00_2239 = BgL_arg2448z00_1372;
											}
										else
											{
												obj_t BgL_auxz00_4306;

												BgL_auxz00_4306 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 43639)),
													BGl_string3120z00zz__r4_ports_6_10_1z00,
													BGl_string3040z00zz__r4_ports_6_10_1z00,
													BgL_arg2448z00_1372);
												FAILURE(BgL_auxz00_4306, BFALSE, BFALSE);
											}
										return
											bgl_append_output_file(BgL_stringz00_2239,
											BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
											(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BTRUE,
												default_io_bufsiz));
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 992 */
								obj_t BgL_bufinfoz00_1373;

								BgL_bufinfoz00_1373 =
									VECTOR_REF(BgL_optz00_80, (int) (((long) 1)));
								{	/* Ieee/port.scm 992 */

									{	/* Ieee/port.scm 992 */
										obj_t BgL_arg2449z00_1374;

										BgL_arg2449z00_1374 =
											VECTOR_REF(BgL_optz00_80, (int) (((long) 0)));
										{	/* Ieee/port.scm 992 */
											obj_t BgL_stringz00_2242;

											if (STRINGP(BgL_arg2449z00_1374))
												{	/* Ieee/port.scm 992 */
													BgL_stringz00_2242 = BgL_arg2449z00_1374;
												}
											else
												{
													obj_t BgL_auxz00_4318;

													BgL_auxz00_4318 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 43639)),
														BGl_string3120z00zz__r4_ports_6_10_1z00,
														BGl_string3040z00zz__r4_ports_6_10_1z00,
														BgL_arg2449z00_1374);
													FAILURE(BgL_auxz00_4318, BFALSE, BFALSE);
												}
											return
												bgl_append_output_file(BgL_stringz00_2242,
												BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
												(BGl_symbol3048z00zz__r4_ports_6_10_1z00,
													BgL_bufinfoz00_1373, default_io_bufsiz));
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



/* append-output-file */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_78,
		obj_t BgL_bufinfoz00_79)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 992 */
			return
				bgl_append_output_file(BgL_stringz00_78,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_79,
					default_io_bufsiz));
		}
	}



/* _open-output-string */
	obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_84, obj_t BgL_optz00_83)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 999 */
			{	/* Ieee/port.scm 999 */

				{	/* Ieee/port.scm 999 */
					int BgL_aux2240z00_1377;

					BgL_aux2240z00_1377 = VECTOR_LENGTH(BgL_optz00_83);
					switch ((long) (BgL_aux2240z00_1377))
						{
						case ((long) 0):

							{	/* Ieee/port.scm 999 */

								return
									bgl_open_output_string
									(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BTRUE,
										(int) (((long) 128))));
							} break;
						case ((long) 1):

							{	/* Ieee/port.scm 999 */
								obj_t BgL_bufinfoz00_1380;

								BgL_bufinfoz00_1380 =
									VECTOR_REF(BgL_optz00_83, (int) (((long) 0)));
								{	/* Ieee/port.scm 999 */

									return
										bgl_open_output_string
										(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_symbol3048z00zz__r4_ports_6_10_1z00,
											BgL_bufinfoz00_1380, (int) (((long) 128))));
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* open-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_bufinfoz00_82)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 999 */
			return
				bgl_open_output_string(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_82,
					(int) (((long) 128))));
		}
	}



/* _open-output-procedure */
	obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_90, obj_t BgL_optz00_89)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1006 */
			{	/* Ieee/port.scm 1006 */
				obj_t BgL_g2241z00_1382;

				BgL_g2241z00_1382 = VECTOR_REF(BgL_optz00_89, (int) (((long) 0)));
				{	/* Ieee/port.scm 1006 */
					int BgL_aux2243z00_1384;

					BgL_aux2243z00_1384 = VECTOR_LENGTH(BgL_optz00_89);
					switch ((long) (BgL_aux2243z00_1384))
						{
						case ((long) 1):

							{	/* Ieee/port.scm 1006 */

								{	/* Ieee/port.scm 1006 */
									obj_t BgL_arg2452z00_1389;

									BgL_arg2452z00_1389 =
										VECTOR_REF(BgL_optz00_89, (int) (((long) 0)));
									{	/* Ieee/port.scm 1006 */
										obj_t BgL_auxz00_4347;

										if (PROCEDUREP(BgL_arg2452z00_1389))
											{	/* Ieee/port.scm 1006 */
												BgL_auxz00_4347 = BgL_arg2452z00_1389;
											}
										else
											{
												obj_t BgL_auxz00_4350;

												BgL_auxz00_4350 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3038z00zz__r4_ports_6_10_1z00,
													BINT(((long) 44421)),
													BGl_string3123z00zz__r4_ports_6_10_1z00,
													BGl_string3041z00zz__r4_ports_6_10_1z00,
													BgL_arg2452z00_1389);
												FAILURE(BgL_auxz00_4350, BFALSE, BFALSE);
											}
										return
											BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
											(BgL_auxz00_4347, BGl_proc3121z00zz__r4_ports_6_10_1z00,
											BTRUE, BGl_proc3122z00zz__r4_ports_6_10_1z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/port.scm 1006 */
								obj_t BgL_flushz00_1394;

								BgL_flushz00_1394 =
									VECTOR_REF(BgL_optz00_89, (int) (((long) 1)));
								{	/* Ieee/port.scm 1006 */

									{	/* Ieee/port.scm 1006 */
										obj_t BgL_arg2455z00_1397;

										BgL_arg2455z00_1397 =
											VECTOR_REF(BgL_optz00_89, (int) (((long) 0)));
										{	/* Ieee/port.scm 1006 */
											obj_t BgL_auxz00_4366;

											obj_t BgL_auxz00_4359;

											if (PROCEDUREP(BgL_flushz00_1394))
												{	/* Ieee/port.scm 1006 */
													BgL_auxz00_4366 = BgL_flushz00_1394;
												}
											else
												{
													obj_t BgL_auxz00_4369;

													BgL_auxz00_4369 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 44421)),
														BGl_string3123z00zz__r4_ports_6_10_1z00,
														BGl_string3041z00zz__r4_ports_6_10_1z00,
														BgL_flushz00_1394);
													FAILURE(BgL_auxz00_4369, BFALSE, BFALSE);
												}
											if (PROCEDUREP(BgL_arg2455z00_1397))
												{	/* Ieee/port.scm 1006 */
													BgL_auxz00_4359 = BgL_arg2455z00_1397;
												}
											else
												{
													obj_t BgL_auxz00_4362;

													BgL_auxz00_4362 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3038z00zz__r4_ports_6_10_1z00,
														BINT(((long) 44421)),
														BGl_string3123z00zz__r4_ports_6_10_1z00,
														BGl_string3041z00zz__r4_ports_6_10_1z00,
														BgL_arg2455z00_1397);
													FAILURE(BgL_auxz00_4362, BFALSE, BFALSE);
												}
											return
												BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
												(BgL_auxz00_4359, BgL_auxz00_4366, BTRUE,
												BGl_proc3124z00zz__r4_ports_6_10_1z00);
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/port.scm 1006 */
								obj_t BgL_flushz00_1400;

								BgL_flushz00_1400 =
									VECTOR_REF(BgL_optz00_89, (int) (((long) 1)));
								{	/* Ieee/port.scm 1006 */
									obj_t BgL_bufinfoz00_1401;

									BgL_bufinfoz00_1401 =
										VECTOR_REF(BgL_optz00_89, (int) (((long) 2)));
									{	/* Ieee/port.scm 1006 */

										{	/* Ieee/port.scm 1006 */
											obj_t BgL_arg2457z00_1403;

											BgL_arg2457z00_1403 =
												VECTOR_REF(BgL_optz00_89, (int) (((long) 0)));
											{	/* Ieee/port.scm 1006 */
												obj_t BgL_auxz00_4387;

												obj_t BgL_auxz00_4380;

												if (PROCEDUREP(BgL_flushz00_1400))
													{	/* Ieee/port.scm 1006 */
														BgL_auxz00_4387 = BgL_flushz00_1400;
													}
												else
													{
														obj_t BgL_auxz00_4390;

														BgL_auxz00_4390 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3038z00zz__r4_ports_6_10_1z00,
															BINT(((long) 44421)),
															BGl_string3123z00zz__r4_ports_6_10_1z00,
															BGl_string3041z00zz__r4_ports_6_10_1z00,
															BgL_flushz00_1400);
														FAILURE(BgL_auxz00_4390, BFALSE, BFALSE);
													}
												if (PROCEDUREP(BgL_arg2457z00_1403))
													{	/* Ieee/port.scm 1006 */
														BgL_auxz00_4380 = BgL_arg2457z00_1403;
													}
												else
													{
														obj_t BgL_auxz00_4383;

														BgL_auxz00_4383 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3038z00zz__r4_ports_6_10_1z00,
															BINT(((long) 44421)),
															BGl_string3123z00zz__r4_ports_6_10_1z00,
															BGl_string3041z00zz__r4_ports_6_10_1z00,
															BgL_arg2457z00_1403);
														FAILURE(BgL_auxz00_4383, BFALSE, BFALSE);
													}
												return
													BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
													(BgL_auxz00_4380, BgL_auxz00_4387,
													BgL_bufinfoz00_1401,
													BGl_proc3125z00zz__r4_ports_6_10_1z00);
											}
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/port.scm 1006 */
								obj_t BgL_flushz00_1406;

								BgL_flushz00_1406 =
									VECTOR_REF(BgL_optz00_89, (int) (((long) 1)));
								{	/* Ieee/port.scm 1006 */
									obj_t BgL_bufinfoz00_1407;

									BgL_bufinfoz00_1407 =
										VECTOR_REF(BgL_optz00_89, (int) (((long) 2)));
									{	/* Ieee/port.scm 1006 */
										obj_t BgL_closez00_1408;

										BgL_closez00_1408 =
											VECTOR_REF(BgL_optz00_89, (int) (((long) 3)));
										{	/* Ieee/port.scm 1006 */

											{	/* Ieee/port.scm 1006 */
												obj_t BgL_arg2459z00_1409;

												BgL_arg2459z00_1409 =
													VECTOR_REF(BgL_optz00_89, (int) (((long) 0)));
												{	/* Ieee/port.scm 1006 */
													obj_t BgL_auxz00_4417;

													obj_t BgL_auxz00_4410;

													obj_t BgL_auxz00_4403;

													if (PROCEDUREP(BgL_closez00_1408))
														{	/* Ieee/port.scm 1006 */
															BgL_auxz00_4417 = BgL_closez00_1408;
														}
													else
														{
															obj_t BgL_auxz00_4420;

															BgL_auxz00_4420 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3038z00zz__r4_ports_6_10_1z00,
																BINT(((long) 44421)),
																BGl_string3123z00zz__r4_ports_6_10_1z00,
																BGl_string3041z00zz__r4_ports_6_10_1z00,
																BgL_closez00_1408);
															FAILURE(BgL_auxz00_4420, BFALSE, BFALSE);
														}
													if (PROCEDUREP(BgL_flushz00_1406))
														{	/* Ieee/port.scm 1006 */
															BgL_auxz00_4410 = BgL_flushz00_1406;
														}
													else
														{
															obj_t BgL_auxz00_4413;

															BgL_auxz00_4413 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3038z00zz__r4_ports_6_10_1z00,
																BINT(((long) 44421)),
																BGl_string3123z00zz__r4_ports_6_10_1z00,
																BGl_string3041z00zz__r4_ports_6_10_1z00,
																BgL_flushz00_1406);
															FAILURE(BgL_auxz00_4413, BFALSE, BFALSE);
														}
													if (PROCEDUREP(BgL_arg2459z00_1409))
														{	/* Ieee/port.scm 1006 */
															BgL_auxz00_4403 = BgL_arg2459z00_1409;
														}
													else
														{
															obj_t BgL_auxz00_4406;

															BgL_auxz00_4406 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3038z00zz__r4_ports_6_10_1z00,
																BINT(((long) 44421)),
																BGl_string3123z00zz__r4_ports_6_10_1z00,
																BGl_string3041z00zz__r4_ports_6_10_1z00,
																BgL_arg2459z00_1409);
															FAILURE(BgL_auxz00_4406, BFALSE, BFALSE);
														}
													return
														BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
														(BgL_auxz00_4403, BgL_auxz00_4410,
														BgL_bufinfoz00_1407, BgL_auxz00_4417);
												}
											}
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



/* close_2778 */
	obj_t BGl_close_2778z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2669)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1010 */
			return BBOOL(((bool_t) 0));
		}
	}



/* close_2779 */
	obj_t BGl_close_2779z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2670)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1010 */
			return BBOOL(((bool_t) 0));
		}
	}



/* close_2780 */
	obj_t BGl_close_2780z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2671)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1010 */
			return BBOOL(((bool_t) 0));
		}
	}



/* flush_2781 */
	obj_t BGl_flush_2781z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2672)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1008 */
			return BBOOL(((bool_t) 0));
		}
	}



/* open-output-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_85,
		obj_t BgL_flushz00_86, obj_t BgL_bufinfoz00_87, obj_t BgL_closez00_88)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1006 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_85, (int) (((long) 1))))
				{	/* Ieee/port.scm 1017 */
					bool_t BgL_testz00_4434;

					if (PROCEDURE_CORRECT_ARITYP(BgL_flushz00_86, (int) (((long) 0))))
						{	/* Ieee/port.scm 1018 */
							BgL_testz00_4434 = ((bool_t) 0);
						}
					else
						{	/* Ieee/port.scm 1018 */
							BgL_testz00_4434 = ((bool_t) 1);
						}
					if (BgL_testz00_4434)
						{	/* Ieee/port.scm 1017 */
							return
								bgl_system_failure(BGL_IO_PORT_ERROR,
								BGl_symbol3126z00zz__r4_ports_6_10_1z00,
								BGl_string3128z00zz__r4_ports_6_10_1z00, BgL_flushz00_86);
						}
					else
						{	/* Ieee/port.scm 1023 */
							bool_t BgL_testz00_4439;

							if (PROCEDURE_CORRECT_ARITYP(BgL_closez00_88, (int) (((long) 0))))
								{	/* Ieee/port.scm 1024 */
									BgL_testz00_4439 = ((bool_t) 0);
								}
							else
								{	/* Ieee/port.scm 1024 */
									BgL_testz00_4439 = ((bool_t) 1);
								}
							if (BgL_testz00_4439)
								{	/* Ieee/port.scm 1023 */
									return
										bgl_system_failure(BGL_IO_PORT_ERROR,
										BGl_symbol3126z00zz__r4_ports_6_10_1z00,
										BGl_string3129z00zz__r4_ports_6_10_1z00, BgL_flushz00_86);
								}
							else
								{	/* Ieee/port.scm 1023 */
									return
										bgl_open_output_procedure(BgL_procz00_85, BgL_flushz00_86,
										BgL_closez00_88,
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_symbol3048z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_87,
											(int) (((long) 128))));
				}}}
			else
				{	/* Ieee/port.scm 1012 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3126z00zz__r4_ports_6_10_1z00,
						BGl_string3130z00zz__r4_ports_6_10_1z00, BgL_procz00_85);
				}
		}
	}



/* output-port-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_91, long BgL_timeoutz00_92)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1036 */
			return
				BBOOL(bgl_output_port_timeout_set(BgL_portz00_91, BgL_timeoutz00_92));
		}
	}



/* _output-port-timeout-set! */
	obj_t BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2673, obj_t BgL_portz00_2674, obj_t BgL_timeoutz00_2675)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1036 */
			{	/* Ieee/port.scm 1037 */
				obj_t BgL_portz00_3093;

				long BgL_timeoutz00_3094;

				if (OUTPUT_PORTP(BgL_portz00_2674))
					{	/* Ieee/port.scm 1037 */
						BgL_portz00_3093 = BgL_portz00_2674;
					}
				else
					{
						obj_t BgL_auxz00_4452;

						BgL_auxz00_4452 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 45562)),
							BGl_string3131z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2674);
						FAILURE(BgL_auxz00_4452, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 1037 */
					obj_t BgL_auxz00_4456;

					if (INTEGERP(BgL_timeoutz00_2675))
						{	/* Ieee/port.scm 1037 */
							BgL_auxz00_4456 = BgL_timeoutz00_2675;
						}
					else
						{
							obj_t BgL_auxz00_4459;

							BgL_auxz00_4459 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 45562)),
								BGl_string3131z00zz__r4_ports_6_10_1z00,
								BGl_string3109z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_2675);
							FAILURE(BgL_auxz00_4459, BFALSE, BFALSE);
						}
					BgL_timeoutz00_3094 = (long) CINT(BgL_auxz00_4456);
				}
				return
					BBOOL(bgl_output_port_timeout_set(BgL_portz00_3093,
						BgL_timeoutz00_3094));
			}
		}
	}



/* closed-input-port? */
	BGL_EXPORTED_DEF bool_t
		BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_93)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1042 */
			return INPUT_PORT_CLOSEP(BgL_portz00_93);
		}
	}



/* _closed-input-port? */
	obj_t BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2676, obj_t BgL_portz00_2677)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1042 */
			{	/* Ieee/port.scm 1043 */
				bool_t BgL_auxz00_4467;

				{	/* Ieee/port.scm 1043 */
					obj_t BgL_portz00_3095;

					if (INPUT_PORTP(BgL_portz00_2677))
						{	/* Ieee/port.scm 1043 */
							BgL_portz00_3095 = BgL_portz00_2677;
						}
					else
						{
							obj_t BgL_auxz00_4470;

							BgL_auxz00_4470 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 45871)),
								BGl_string3132z00zz__r4_ports_6_10_1z00,
								BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2677);
							FAILURE(BgL_auxz00_4470, BFALSE, BFALSE);
						}
					BgL_auxz00_4467 = INPUT_PORT_CLOSEP(BgL_portz00_3095);
				}
				return BBOOL(BgL_auxz00_4467);
			}
		}
	}



/* close-input-port */
	BGL_EXPORTED_DEF obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_94)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1048 */
			return bgl_close_input_port(BgL_portz00_94);
		}
	}



/* _close-input-port */
	obj_t BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2678, obj_t BgL_portz00_2679)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1048 */
			{	/* Ieee/port.scm 1049 */
				obj_t BgL_portz00_3096;

				if (INPUT_PORTP(BgL_portz00_2679))
					{	/* Ieee/port.scm 1049 */
						BgL_portz00_3096 = BgL_portz00_2679;
					}
				else
					{
						obj_t BgL_auxz00_4479;

						BgL_auxz00_4479 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 46165)),
							BGl_string3133z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2679);
						FAILURE(BgL_auxz00_4479, BFALSE, BFALSE);
					}
				return bgl_close_input_port(BgL_portz00_3096);
			}
		}
	}



/* get-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_95)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1054 */
			return get_output_string(BgL_portz00_95);
		}
	}



/* _get-output-string */
	obj_t BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2680, obj_t BgL_portz00_2681)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1054 */
			{	/* Ieee/port.scm 1055 */
				obj_t BgL_portz00_3097;

				if (OUTPUT_PORTP(BgL_portz00_2681))
					{	/* Ieee/port.scm 1055 */
						BgL_portz00_3097 = BgL_portz00_2681;
					}
				else
					{
						obj_t BgL_auxz00_4487;

						BgL_auxz00_4487 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 46457)),
							BGl_string3134z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2681);
						FAILURE(BgL_auxz00_4487, BFALSE, BFALSE);
					}
				return get_output_string(BgL_portz00_3097);
			}
		}
	}



/* close-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_96)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1060 */
			return bgl_close_output_port(BgL_portz00_96);
		}
	}



/* _close-output-port */
	obj_t BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2682, obj_t BgL_portz00_2683)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1060 */
			{	/* Ieee/port.scm 1061 */
				obj_t BgL_portz00_3098;

				if (OUTPUT_PORTP(BgL_portz00_2683))
					{	/* Ieee/port.scm 1061 */
						BgL_portz00_3098 = BgL_portz00_2683;
					}
				else
					{
						obj_t BgL_auxz00_4495;

						BgL_auxz00_4495 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 46751)),
							BGl_string3135z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2683);
						FAILURE(BgL_auxz00_4495, BFALSE, BFALSE);
					}
				return bgl_close_output_port(BgL_portz00_3098);
			}
		}
	}



/* flush-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_97)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1066 */
			return FLUSH_OUTPUT_PORT(BgL_portz00_97);
		}
	}



/* _flush-output-port */
	obj_t BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2684, obj_t BgL_portz00_2685)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1066 */
			{	/* Ieee/port.scm 1067 */
				obj_t BgL_portz00_3099;

				if (OUTPUT_PORTP(BgL_portz00_2685))
					{	/* Ieee/port.scm 1067 */
						BgL_portz00_3099 = BgL_portz00_2685;
					}
				else
					{
						obj_t BgL_auxz00_4503;

						BgL_auxz00_4503 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 47045)),
							BGl_string3136z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2685);
						FAILURE(BgL_auxz00_4503, BFALSE, BFALSE);
					}
				return FLUSH_OUTPUT_PORT(BgL_portz00_3099);
			}
		}
	}



/* reset-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_98)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1072 */
			if (BGL_OUTPUT_STRING_PORTP(BgL_portz00_98))
				{	/* Ieee/port.scm 1073 */
					return bgl_reset_output_string_port(BgL_portz00_98);
				}
			else
				{	/* Ieee/port.scm 1073 */
					return FLUSH_OUTPUT_PORT(BgL_portz00_98);
				}
		}
	}



/* _reset-output-port */
	obj_t BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2686, obj_t BgL_portz00_2687)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1072 */
			{	/* Ieee/port.scm 1073 */
				obj_t BgL_portz00_3100;

				if (OUTPUT_PORTP(BgL_portz00_2687))
					{	/* Ieee/port.scm 1073 */
						BgL_portz00_3100 = BgL_portz00_2687;
					}
				else
					{
						obj_t BgL_auxz00_4514;

						BgL_auxz00_4514 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 47339)),
							BGl_string3137z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2687);
						FAILURE(BgL_auxz00_4514, BFALSE, BFALSE);
					}
				if (BGL_OUTPUT_STRING_PORTP(BgL_portz00_3100))
					{	/* Ieee/port.scm 1073 */
						return bgl_reset_output_string_port(BgL_portz00_3100);
					}
				else
					{	/* Ieee/port.scm 1073 */
						return FLUSH_OUTPUT_PORT(BgL_portz00_3100);
					}
			}
		}
	}



/* reset-eof */
	BGL_EXPORTED_DEF bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_99)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1080 */
			return reset_eof(BgL_portz00_99);
		}
	}



/* _reset-eof */
	obj_t BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2688,
		obj_t BgL_portz00_2689)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1080 */
			{	/* Ieee/port.scm 1081 */
				bool_t BgL_auxz00_4523;

				{	/* Ieee/port.scm 1081 */
					obj_t BgL_portz00_3101;

					if (INPUT_PORTP(BgL_portz00_2689))
						{	/* Ieee/port.scm 1081 */
							BgL_portz00_3101 = BgL_portz00_2689;
						}
					else
						{
							obj_t BgL_auxz00_4526;

							BgL_auxz00_4526 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 47704)),
								BGl_string3138z00zz__r4_ports_6_10_1z00,
								BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2689);
							FAILURE(BgL_auxz00_4526, BFALSE, BFALSE);
						}
					BgL_auxz00_4523 = reset_eof(BgL_portz00_3101);
				}
				return BBOOL(BgL_auxz00_4523);
			}
		}
	}



/* set-input-port-position! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_100, long BgL_posz00_101)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1086 */
			if (CBOOL(bgl_input_port_seek(BgL_portz00_100, BgL_posz00_101)))
				{	/* Ieee/port.scm 1087 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1087 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3139z00zz__r4_ports_6_10_1z00,
						BGl_string3141z00zz__r4_ports_6_10_1z00, BgL_portz00_100);
				}
		}
	}



/* _set-input-port-position! */
	obj_t BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2690, obj_t BgL_portz00_2691, obj_t BgL_posz00_2692)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1086 */
			{	/* Ieee/port.scm 1087 */
				obj_t BgL_portz00_3102;

				long BgL_posz00_3103;

				if (INPUT_PORTP(BgL_portz00_2691))
					{	/* Ieee/port.scm 1087 */
						BgL_portz00_3102 = BgL_portz00_2691;
					}
				else
					{
						obj_t BgL_auxz00_4538;

						BgL_auxz00_4538 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 48019)),
							BGl_string3142z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2691);
						FAILURE(BgL_auxz00_4538, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 1087 */
					obj_t BgL_auxz00_4542;

					if (INTEGERP(BgL_posz00_2692))
						{	/* Ieee/port.scm 1087 */
							BgL_auxz00_4542 = BgL_posz00_2692;
						}
					else
						{
							obj_t BgL_auxz00_4545;

							BgL_auxz00_4545 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 48019)),
								BGl_string3142z00zz__r4_ports_6_10_1z00,
								BGl_string3109z00zz__r4_ports_6_10_1z00, BgL_posz00_2692);
							FAILURE(BgL_auxz00_4545, BFALSE, BFALSE);
						}
					BgL_posz00_3103 = (long) CINT(BgL_auxz00_4542);
				}
				if (CBOOL(bgl_input_port_seek(BgL_portz00_3102, BgL_posz00_3103)))
					{	/* Ieee/port.scm 1087 */
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 1087 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3139z00zz__r4_ports_6_10_1z00,
							BGl_string3141z00zz__r4_ports_6_10_1z00, BgL_portz00_3102);
					}
			}
		}
	}



/* input-port-position */
	BGL_EXPORTED_DEF long
		BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_102)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1096 */
			return INPUT_PORT_FILEPOS(BgL_portz00_102);
		}
	}



/* _input-port-position */
	obj_t BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2693, obj_t BgL_portz00_2694)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1096 */
			{	/* Ieee/port.scm 1097 */
				long BgL_auxz00_4555;

				{	/* Ieee/port.scm 1097 */
					obj_t BgL_portz00_3104;

					if (INPUT_PORTP(BgL_portz00_2694))
						{	/* Ieee/port.scm 1097 */
							BgL_portz00_3104 = BgL_portz00_2694;
						}
					else
						{
							obj_t BgL_auxz00_4558;

							BgL_auxz00_4558 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 48449)),
								BGl_string3143z00zz__r4_ports_6_10_1z00,
								BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2694);
							FAILURE(BgL_auxz00_4558, BFALSE, BFALSE);
						}
					BgL_auxz00_4555 = INPUT_PORT_FILEPOS(BgL_portz00_3104);
				}
				return BINT(BgL_auxz00_4555);
			}
		}
	}



/* input-port-fill-barrier */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_103)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1102 */
			return BINT(INPUT_PORT_FILLBARRIER(BgL_portz00_103));
		}
	}



/* _input-port-fill-barrier */
	obj_t BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2695, obj_t BgL_portz00_2696)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1102 */
			{	/* Ieee/port.scm 1103 */
				obj_t BgL_portz00_3105;

				if (INPUT_PORTP(BgL_portz00_2696))
					{	/* Ieee/port.scm 1103 */
						BgL_portz00_3105 = BgL_portz00_2696;
					}
				else
					{
						obj_t BgL_auxz00_4568;

						BgL_auxz00_4568 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 48763)),
							BGl_string3144z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2696);
						FAILURE(BgL_auxz00_4568, BFALSE, BFALSE);
					}
				return BINT(INPUT_PORT_FILLBARRIER(BgL_portz00_3105));
			}
		}
	}



/* input-port-fill-barrier-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_104, long BgL_posz00_105)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1108 */
			INPUT_PORT_FILLBARRIER_SET(BgL_portz00_104, BgL_posz00_105);
			BUNSPEC;
			return BINT(BgL_posz00_105);
		}
	}



/* _input-port-fill-barrier-set! */
	obj_t
		BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2697, obj_t BgL_portz00_2698, obj_t BgL_posz00_2699)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1108 */
			{	/* Ieee/port.scm 1110 */
				obj_t BgL_portz00_3106;

				long BgL_posz00_3107;

				if (INPUT_PORTP(BgL_portz00_2698))
					{	/* Ieee/port.scm 1110 */
						BgL_portz00_3106 = BgL_portz00_2698;
					}
				else
					{
						obj_t BgL_auxz00_4578;

						BgL_auxz00_4578 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 49142)),
							BGl_string3145z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2698);
						FAILURE(BgL_auxz00_4578, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 1110 */
					obj_t BgL_auxz00_4582;

					if (INTEGERP(BgL_posz00_2699))
						{	/* Ieee/port.scm 1110 */
							BgL_auxz00_4582 = BgL_posz00_2699;
						}
					else
						{
							obj_t BgL_auxz00_4585;

							BgL_auxz00_4585 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 49142)),
								BGl_string3145z00zz__r4_ports_6_10_1z00,
								BGl_string3109z00zz__r4_ports_6_10_1z00, BgL_posz00_2699);
							FAILURE(BgL_auxz00_4585, BFALSE, BFALSE);
						}
					BgL_posz00_3107 = (long) CINT(BgL_auxz00_4582);
				}
				INPUT_PORT_FILLBARRIER_SET(BgL_portz00_3106, BgL_posz00_3107);
				BUNSPEC;
				return BINT(BgL_posz00_3107);
			}
		}
	}



/* input-port-last-token-position */
	BGL_EXPORTED_DEF long
		BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_106)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1115 */
			{	/* Ieee/port.scm 1116 */
				long BgL_auxz00_4592;

				BgL_auxz00_4592 = INPUT_PORT_TOKENPOS(BgL_portz00_106);
				return ELONG_TO_LONG(BgL_auxz00_4592);
			}
		}
	}



/* _input-port-last-token-position */
	obj_t
		BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2700, obj_t BgL_portz00_2701)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1115 */
			{	/* Ieee/port.scm 1116 */
				long BgL_auxz00_4595;

				{	/* Ieee/port.scm 1116 */
					long BgL_res3186z00_3109;

					{	/* Ieee/port.scm 1116 */
						obj_t BgL_portz00_3108;

						if (INPUT_PORTP(BgL_portz00_2701))
							{	/* Ieee/port.scm 1116 */
								BgL_portz00_3108 = BgL_portz00_2701;
							}
						else
							{
								obj_t BgL_auxz00_4598;

								BgL_auxz00_4598 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 49429)), BGl_string3146z00zz__r4_ports_6_10_1z00,
									BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2701);
								FAILURE(BgL_auxz00_4598, BFALSE, BFALSE);
							}
						{	/* Ieee/port.scm 1116 */
							long BgL_auxz00_4602;

							BgL_auxz00_4602 = INPUT_PORT_TOKENPOS(BgL_portz00_3108);
							BgL_res3186z00_3109 = ELONG_TO_LONG(BgL_auxz00_4602);
					}}
					BgL_auxz00_4595 = BgL_res3186z00_3109;
				}
				return BINT(BgL_auxz00_4595);
			}
		}
	}



/* output-port-name */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_107)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1121 */
			return OUTPUT_PORT_NAME(BgL_portz00_107);
		}
	}



/* _output-port-name */
	obj_t BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2702, obj_t BgL_portz00_2703)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1121 */
			{	/* Ieee/port.scm 1122 */
				obj_t BgL_portz00_3110;

				if (OUTPUT_PORTP(BgL_portz00_2703))
					{	/* Ieee/port.scm 1122 */
						BgL_portz00_3110 = BgL_portz00_2703;
					}
				else
					{
						obj_t BgL_auxz00_4609;

						BgL_auxz00_4609 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 49735)),
							BGl_string3147z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2703);
						FAILURE(BgL_auxz00_4609, BFALSE, BFALSE);
					}
				return OUTPUT_PORT_NAME(BgL_portz00_3110);
			}
		}
	}



/* set-output-port-position! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_108, long BgL_posz00_109)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1127 */
			if (CBOOL(bgl_output_port_seek(BgL_portz00_108, BgL_posz00_109)))
				{	/* Ieee/port.scm 1128 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1128 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3148z00zz__r4_ports_6_10_1z00,
						BGl_string3141z00zz__r4_ports_6_10_1z00, BgL_portz00_108);
				}
		}
	}



/* _set-output-port-position! */
	obj_t BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2704, obj_t BgL_portz00_2705, obj_t BgL_posz00_2706)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1127 */
			{	/* Ieee/port.scm 1128 */
				obj_t BgL_portz00_3111;

				long BgL_posz00_3112;

				if (OUTPUT_PORTP(BgL_portz00_2705))
					{	/* Ieee/port.scm 1128 */
						BgL_portz00_3111 = BgL_portz00_2705;
					}
				else
					{
						obj_t BgL_auxz00_4620;

						BgL_auxz00_4620 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 50059)),
							BGl_string3150z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2705);
						FAILURE(BgL_auxz00_4620, BFALSE, BFALSE);
					}
				{	/* Ieee/port.scm 1128 */
					obj_t BgL_auxz00_4624;

					if (INTEGERP(BgL_posz00_2706))
						{	/* Ieee/port.scm 1128 */
							BgL_auxz00_4624 = BgL_posz00_2706;
						}
					else
						{
							obj_t BgL_auxz00_4627;

							BgL_auxz00_4627 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 50059)),
								BGl_string3150z00zz__r4_ports_6_10_1z00,
								BGl_string3109z00zz__r4_ports_6_10_1z00, BgL_posz00_2706);
							FAILURE(BgL_auxz00_4627, BFALSE, BFALSE);
						}
					BgL_posz00_3112 = (long) CINT(BgL_auxz00_4624);
				}
				if (CBOOL(bgl_output_port_seek(BgL_portz00_3111, BgL_posz00_3112)))
					{	/* Ieee/port.scm 1128 */
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 1128 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3148z00zz__r4_ports_6_10_1z00,
							BGl_string3141z00zz__r4_ports_6_10_1z00, BgL_portz00_3111);
					}
			}
		}
	}



/* output-port-position */
	BGL_EXPORTED_DEF long
		BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_110)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1137 */
			return BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_110);
		}
	}



/* _output-port-position */
	obj_t BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2707, obj_t BgL_portz00_2708)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1137 */
			{	/* Ieee/port.scm 1138 */
				long BgL_auxz00_4637;

				{	/* Ieee/port.scm 1138 */
					obj_t BgL_portz00_3113;

					if (OUTPUT_PORTP(BgL_portz00_2708))
						{	/* Ieee/port.scm 1138 */
							BgL_portz00_3113 = BgL_portz00_2708;
						}
					else
						{
							obj_t BgL_auxz00_4640;

							BgL_auxz00_4640 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 50492)),
								BGl_string3151z00zz__r4_ports_6_10_1z00,
								BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2708);
							FAILURE(BgL_auxz00_4640, BFALSE, BFALSE);
						}
					BgL_auxz00_4637 = BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_3113);
				}
				return BINT(BgL_auxz00_4637);
			}
		}
	}



/* input-port-name */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_111)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1143 */
			return INPUT_PORT_NAME(BgL_portz00_111);
		}
	}



/* _input-port-name */
	obj_t BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2709,
		obj_t BgL_portz00_2710)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1143 */
			{	/* Ieee/port.scm 1144 */
				obj_t BgL_portz00_3114;

				if (INPUT_PORTP(BgL_portz00_2710))
					{	/* Ieee/port.scm 1144 */
						BgL_portz00_3114 = BgL_portz00_2710;
					}
				else
					{
						obj_t BgL_auxz00_4649;

						BgL_auxz00_4649 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 50787)),
							BGl_string3152z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2710);
						FAILURE(BgL_auxz00_4649, BFALSE, BFALSE);
					}
				return INPUT_PORT_NAME(BgL_portz00_3114);
			}
		}
	}



/* output-port-close-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_112)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1149 */
			return PORT_CHOOK(BgL_portz00_112);
		}
	}



/* _output-port-close-hook */
	obj_t BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2711, obj_t BgL_portz00_2712)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1149 */
			{	/* Ieee/port.scm 1150 */
				obj_t BgL_portz00_3115;

				if (OUTPUT_PORTP(BgL_portz00_2712))
					{	/* Ieee/port.scm 1150 */
						BgL_portz00_3115 = BgL_portz00_2712;
					}
				else
					{
						obj_t BgL_auxz00_4657;

						BgL_auxz00_4657 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 51084)),
							BGl_string3153z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2712);
						FAILURE(BgL_auxz00_4657, BFALSE, BFALSE);
					}
				return PORT_CHOOK(BgL_portz00_3115);
			}
		}
	}



/* output-port-close-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_113, obj_t BgL_procz00_114)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1155 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_114, (int) (((long) 1))))
				{	/* Ieee/port.scm 1156 */
					PORT_CHOOK_SET(BgL_portz00_113, BgL_procz00_114);
					BUNSPEC;
					return BgL_procz00_114;
				}
			else
				{	/* Ieee/port.scm 1156 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3154z00zz__r4_ports_6_10_1z00,
						BGl_string3102z00zz__r4_ports_6_10_1z00, BgL_procz00_114);
				}
		}
	}



/* _output-port-close-hook-set! */
	obj_t
		BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2713, obj_t BgL_portz00_2714, obj_t BgL_procz00_2715)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1155 */
			{	/* Ieee/port.scm 1156 */
				obj_t BgL_auxz00_4674;

				obj_t BgL_auxz00_4667;

				if (PROCEDUREP(BgL_procz00_2715))
					{	/* Ieee/port.scm 1156 */
						BgL_auxz00_4674 = BgL_procz00_2715;
					}
				else
					{
						obj_t BgL_auxz00_4677;

						BgL_auxz00_4677 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 51400)),
							BGl_string3156z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2715);
						FAILURE(BgL_auxz00_4677, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_2714))
					{	/* Ieee/port.scm 1156 */
						BgL_auxz00_4667 = BgL_portz00_2714;
					}
				else
					{
						obj_t BgL_auxz00_4670;

						BgL_auxz00_4670 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 51400)),
							BGl_string3156z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2714);
						FAILURE(BgL_auxz00_4670, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_4667, BgL_auxz00_4674);
			}
		}
	}



/* output-port-flush-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_115)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1168 */
			return BGL_OUTPUT_PORT_FHOOK(BgL_portz00_115);
		}
	}



/* _output-port-flush-hook */
	obj_t BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2716, obj_t BgL_portz00_2717)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1168 */
			{	/* Ieee/port.scm 1169 */
				obj_t BgL_portz00_3116;

				if (OUTPUT_PORTP(BgL_portz00_2717))
					{	/* Ieee/port.scm 1169 */
						BgL_portz00_3116 = BgL_portz00_2717;
					}
				else
					{
						obj_t BgL_auxz00_4685;

						BgL_auxz00_4685 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 51889)),
							BGl_string3157z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2717);
						FAILURE(BgL_auxz00_4685, BFALSE, BFALSE);
					}
				return BGL_OUTPUT_PORT_FHOOK(BgL_portz00_3116);
			}
		}
	}



/* output-port-flush-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_116, obj_t BgL_procz00_117)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1174 */
			{	/* Ieee/port.scm 1175 */
				bool_t BgL_testz00_4690;

				if (PROCEDUREP(BgL_procz00_117))
					{	/* Ieee/port.scm 1175 */
						if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_117, (int) (((long) 2))))
							{	/* Ieee/port.scm 1175 */
								BgL_testz00_4690 = ((bool_t) 0);
							}
						else
							{	/* Ieee/port.scm 1175 */
								BgL_testz00_4690 = ((bool_t) 1);
							}
					}
				else
					{	/* Ieee/port.scm 1175 */
						BgL_testz00_4690 = ((bool_t) 0);
					}
				if (BgL_testz00_4690)
					{	/* Ieee/port.scm 1175 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol3158z00zz__r4_ports_6_10_1z00,
							BGl_string3102z00zz__r4_ports_6_10_1z00, BgL_procz00_117);
					}
				else
					{	/* Ieee/port.scm 1175 */
						BGL_OUTPUT_PORT_FHOOK_SET(BgL_portz00_116, BgL_procz00_117);
						BUNSPEC;
						return BgL_procz00_117;
					}
			}
		}
	}



/* _output-port-flush-hook-set! */
	obj_t
		BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2718, obj_t BgL_portz00_2719, obj_t BgL_procz00_2720)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1174 */
			{	/* Ieee/port.scm 1175 */
				obj_t BgL_auxz00_4698;

				if (OUTPUT_PORTP(BgL_portz00_2719))
					{	/* Ieee/port.scm 1175 */
						BgL_auxz00_4698 = BgL_portz00_2719;
					}
				else
					{
						obj_t BgL_auxz00_4701;

						BgL_auxz00_4701 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 52190)),
							BGl_string3160z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2719);
						FAILURE(BgL_auxz00_4701, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_4698, BgL_procz00_2720);
			}
		}
	}



/* output-port-flush-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_118)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1187 */
			return BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_118);
		}
	}



/* _output-port-flush-buffer */
	obj_t BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2721, obj_t BgL_portz00_2722)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1187 */
			{	/* Ieee/port.scm 1188 */
				obj_t BgL_portz00_3117;

				if (OUTPUT_PORTP(BgL_portz00_2722))
					{	/* Ieee/port.scm 1188 */
						BgL_portz00_3117 = BgL_portz00_2722;
					}
				else
					{
						obj_t BgL_auxz00_4709;

						BgL_auxz00_4709 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 52694)),
							BGl_string3161z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2722);
						FAILURE(BgL_auxz00_4709, BFALSE, BFALSE);
					}
				return BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_3117);
			}
		}
	}



/* output-port-flush-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_119, obj_t BgL_bufz00_120)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1193 */
			BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_119, BgL_bufz00_120);
			BUNSPEC;
			return BgL_bufz00_120;
		}
	}



/* _output-port-flush-buffer-set! */
	obj_t
		BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2723, obj_t BgL_portz00_2724, obj_t BgL_bufz00_2725)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1193 */
			{	/* Ieee/port.scm 1195 */
				obj_t BgL_portz00_3118;

				if (OUTPUT_PORTP(BgL_portz00_2724))
					{	/* Ieee/port.scm 1195 */
						BgL_portz00_3118 = BgL_portz00_2724;
					}
				else
					{
						obj_t BgL_auxz00_4717;

						BgL_auxz00_4717 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 53047)),
							BGl_string3162z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2724);
						FAILURE(BgL_auxz00_4717, BFALSE, BFALSE);
					}
				BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_3118, BgL_bufz00_2725);
				BUNSPEC;
				return BgL_bufz00_2725;
			}
		}
	}



/* input-port-close-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_121)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1200 */
			return PORT_CHOOK(BgL_portz00_121);
		}
	}



/* _input-port-close-hook */
	obj_t BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2726, obj_t BgL_portz00_2727)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1200 */
			{	/* Ieee/port.scm 1201 */
				obj_t BgL_portz00_3120;

				if (INPUT_PORTP(BgL_portz00_2727))
					{	/* Ieee/port.scm 1201 */
						BgL_portz00_3120 = BgL_portz00_2727;
					}
				else
					{
						obj_t BgL_auxz00_4725;

						BgL_auxz00_4725 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 53322)),
							BGl_string3163z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2727);
						FAILURE(BgL_auxz00_4725, BFALSE, BFALSE);
					}
				return PORT_CHOOK(BgL_portz00_3120);
			}
		}
	}



/* input-port-close-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_122, obj_t BgL_procz00_123)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1206 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_123, (int) (((long) 1))))
				{	/* Ieee/port.scm 1207 */
					PORT_CHOOK_SET(BgL_portz00_122, BgL_procz00_123);
					BUNSPEC;
					return BgL_procz00_123;
				}
			else
				{	/* Ieee/port.scm 1207 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_symbol3100z00zz__r4_ports_6_10_1z00,
						BGl_string3102z00zz__r4_ports_6_10_1z00, BgL_procz00_123);
				}
		}
	}



/* _input-port-close-hook-set! */
	obj_t BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2728, obj_t BgL_portz00_2729, obj_t BgL_procz00_2730)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1206 */
			{	/* Ieee/port.scm 1207 */
				obj_t BgL_auxz00_4742;

				obj_t BgL_auxz00_4735;

				if (PROCEDUREP(BgL_procz00_2730))
					{	/* Ieee/port.scm 1207 */
						BgL_auxz00_4742 = BgL_procz00_2730;
					}
				else
					{
						obj_t BgL_auxz00_4745;

						BgL_auxz00_4745 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 53636)),
							BGl_string3164z00zz__r4_ports_6_10_1z00,
							BGl_string3041z00zz__r4_ports_6_10_1z00, BgL_procz00_2730);
						FAILURE(BgL_auxz00_4745, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_2729))
					{	/* Ieee/port.scm 1207 */
						BgL_auxz00_4735 = BgL_portz00_2729;
					}
				else
					{
						obj_t BgL_auxz00_4738;

						BgL_auxz00_4738 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 53636)),
							BGl_string3164z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2729);
						FAILURE(BgL_auxz00_4738, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_4735, BgL_auxz00_4742);
			}
		}
	}



/* input-port-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_124)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1219 */
			return BGL_INPUT_PORT_BUFFER(BgL_portz00_124);
		}
	}



/* _input-port-buffer */
	obj_t BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2731, obj_t BgL_portz00_2732)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1219 */
			{	/* Ieee/port.scm 1220 */
				obj_t BgL_portz00_3121;

				if (INPUT_PORTP(BgL_portz00_2732))
					{	/* Ieee/port.scm 1220 */
						BgL_portz00_3121 = BgL_portz00_2732;
					}
				else
					{
						obj_t BgL_auxz00_4753;

						BgL_auxz00_4753 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 54118)),
							BGl_string3165z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2732);
						FAILURE(BgL_auxz00_4753, BFALSE, BFALSE);
					}
				return BGL_INPUT_PORT_BUFFER(BgL_portz00_3121);
			}
		}
	}



/* input-port-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_125, obj_t BgL_bufferz00_126)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1225 */
			bgl_input_port_buffer_set(BgL_portz00_125, BgL_bufferz00_126);
			BUNSPEC;
			return BgL_portz00_125;
		}
	}



/* _input-port-buffer-set! */
	obj_t BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2733, obj_t BgL_portz00_2734, obj_t BgL_bufferz00_2735)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1225 */
			{	/* Ieee/port.scm 1226 */
				obj_t BgL_portz00_3122;

				obj_t BgL_bufferz00_3123;

				if (INPUT_PORTP(BgL_portz00_2734))
					{	/* Ieee/port.scm 1226 */
						BgL_portz00_3122 = BgL_portz00_2734;
					}
				else
					{
						obj_t BgL_auxz00_4761;

						BgL_auxz00_4761 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 54468)),
							BGl_string3166z00zz__r4_ports_6_10_1z00,
							BGl_string3055z00zz__r4_ports_6_10_1z00, BgL_portz00_2734);
						FAILURE(BgL_auxz00_4761, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_bufferz00_2735))
					{	/* Ieee/port.scm 1226 */
						BgL_bufferz00_3123 = BgL_bufferz00_2735;
					}
				else
					{
						obj_t BgL_auxz00_4767;

						BgL_auxz00_4767 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 54468)),
							BGl_string3166z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_bufferz00_2735);
						FAILURE(BgL_auxz00_4767, BFALSE, BFALSE);
					}
				bgl_input_port_buffer_set(BgL_portz00_3122, BgL_bufferz00_3123);
				BUNSPEC;
				return BgL_portz00_3122;
			}
		}
	}



/* output-port-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_127)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1231 */
			return BGL_OUTPUT_PORT_BUFFER(BgL_portz00_127);
		}
	}



/* _output-port-buffer */
	obj_t BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2736, obj_t BgL_portz00_2737)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1231 */
			{	/* Ieee/port.scm 1232 */
				obj_t BgL_portz00_3124;

				if (OUTPUT_PORTP(BgL_portz00_2737))
					{	/* Ieee/port.scm 1232 */
						BgL_portz00_3124 = BgL_portz00_2737;
					}
				else
					{
						obj_t BgL_auxz00_4775;

						BgL_auxz00_4775 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 54742)),
							BGl_string3167z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2737);
						FAILURE(BgL_auxz00_4775, BFALSE, BFALSE);
					}
				return BGL_OUTPUT_PORT_BUFFER(BgL_portz00_3124);
			}
		}
	}



/* output-port-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_128, obj_t BgL_bufferz00_129)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1237 */
			bgl_output_port_buffer_set(BgL_portz00_128, BgL_bufferz00_129);
			BUNSPEC;
			return BgL_portz00_128;
		}
	}



/* _output-port-buffer-set! */
	obj_t BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2738, obj_t BgL_portz00_2739, obj_t BgL_bufferz00_2740)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1237 */
			{	/* Ieee/port.scm 1238 */
				obj_t BgL_portz00_3125;

				obj_t BgL_bufferz00_3126;

				if (OUTPUT_PORTP(BgL_portz00_2739))
					{	/* Ieee/port.scm 1238 */
						BgL_portz00_3125 = BgL_portz00_2739;
					}
				else
					{
						obj_t BgL_auxz00_4783;

						BgL_auxz00_4783 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 55095)),
							BGl_string3168z00zz__r4_ports_6_10_1z00,
							BGl_string3071z00zz__r4_ports_6_10_1z00, BgL_portz00_2739);
						FAILURE(BgL_auxz00_4783, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_bufferz00_2740))
					{	/* Ieee/port.scm 1238 */
						BgL_bufferz00_3126 = BgL_bufferz00_2740;
					}
				else
					{
						obj_t BgL_auxz00_4789;

						BgL_auxz00_4789 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 55095)),
							BGl_string3168z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_bufferz00_2740);
						FAILURE(BgL_auxz00_4789, BFALSE, BFALSE);
					}
				bgl_output_port_buffer_set(BgL_portz00_3125, BgL_bufferz00_3126);
				BUNSPEC;
				return BgL_portz00_3125;
			}
		}
	}



/* file-exists? */
	BGL_EXPORTED_DEF bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char
		*BgL_namez00_130)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1243 */
			return fexists(BgL_namez00_130);
		}
	}



/* _file-exists? */
	obj_t BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2741,
		obj_t BgL_namez00_2742)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1243 */
			{	/* Ieee/port.scm 1244 */
				bool_t BgL_auxz00_4795;

				{	/* Ieee/port.scm 1244 */
					char *BgL_namez00_3127;

					{	/* Ieee/port.scm 1244 */
						obj_t BgL_auxz00_4796;

						if (STRINGP(BgL_namez00_2742))
							{	/* Ieee/port.scm 1244 */
								BgL_auxz00_4796 = BgL_namez00_2742;
							}
						else
							{
								obj_t BgL_auxz00_4799;

								BgL_auxz00_4799 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 55363)), BGl_string3169z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_namez00_2742);
								FAILURE(BgL_auxz00_4799, BFALSE, BFALSE);
							}
						BgL_namez00_3127 = BSTRING_TO_STRING(BgL_auxz00_4796);
					}
					BgL_auxz00_4795 = fexists(BgL_namez00_3127);
				}
				return BBOOL(BgL_auxz00_4795);
			}
		}
	}



/* file-gzip? */
	BGL_EXPORTED_DEF obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t
		BgL_namez00_131)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1249 */
			if (fexists(BSTRING_TO_STRING(BgL_namez00_131)))
				{	/* Ieee/port.scm 1250 */
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_namez00_131, BGl_proc3170z00zz__r4_ports_6_10_1z00);
				}
			else
				{	/* Ieee/port.scm 1250 */
					return BFALSE;
				}
		}
	}



/* _file-gzip? */
	obj_t BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2745,
		obj_t BgL_namez00_2746)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1249 */
			return BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(BgL_namez00_2746);
		}
	}



/* <anonymous:2478> */
	obj_t BGl_zc3anonymousza32478ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2747)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1252 */
			return BGl_zc3exitza32479ze3z83zz__r4_ports_6_10_1z00();
		}
	}



/* <exit:2479> */
	obj_t BGl_zc3exitza32479ze3z83zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1253 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2166z00_1432;

			if (SET_EXIT(BgL_an_exit2166z00_1432))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2166z00_1432 = (void *) jmpbuf;
					{	/* Ieee/port.scm 1253 */

						PUSH_EXIT(BgL_an_exit2166z00_1432, ((long) 1));
						{	/* Ieee/port.scm 1253 */
							obj_t BgL_an_exitd2167z00_1433;

							BgL_an_exitd2167z00_1433 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Ieee/port.scm 1253 */
								obj_t BgL_res2169z00_1436;

								{	/* Ieee/port.scm 1253 */
									obj_t BgL_err2164z00_1437;

									obj_t BgL_ohs2163z00_1438;

									BgL_err2164z00_1437 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs2163z00_1438 = BGL_ERROR_HANDLER_GET();
									{	/* Ieee/port.scm 1253 */
										obj_t BgL_val2170z00_1439;

										BgL_val2170z00_1439 =
											BGl_zc3exitza32485ze3z83zz__r4_ports_6_10_1z00
											(BgL_ohs2163z00_1438, BgL_an_exitd2167z00_1433,
											BgL_err2164z00_1437);
										BGL_ERROR_HANDLER_SET(BgL_ohs2163z00_1438);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err2164z00_1437)))
											{	/* Ieee/port.scm 1253 */
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd2167z00_1433, BFALSE);
											}
										else
											{	/* Ieee/port.scm 1253 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val2170z00_1439)))
											{	/* Ieee/port.scm 1253 */
												BgL_res2169z00_1436 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val2170z00_1439), CDR(BgL_val2170z00_1439));
											}
										else
											{	/* Ieee/port.scm 1253 */
												BgL_res2169z00_1436 = BgL_val2170z00_1439;
											}
									}
								}
								POP_EXIT();
								return BgL_res2169z00_1436;
							}
						}
					}
				}
		}
	}



/* <exit:2485> */
	obj_t BGl_zc3exitza32485ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_ohs2163z00_2786, obj_t BgL_an_exitd2167z00_2785,
		obj_t BgL_err2164z00_2784)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1253 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2171z00_1447;

			if (SET_EXIT(BgL_an_exit2171z00_1447))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2171z00_1447 = (void *) jmpbuf;
					{	/* Ieee/port.scm 1253 */

						PUSH_EXIT(BgL_an_exit2171z00_1447, ((long) 0));
						{	/* Ieee/port.scm 1253 */
							obj_t BgL_val2172z00_1448;

							{	/* Ieee/port.scm 1253 */
								obj_t BgL_arg2486z00_1449;

								{	/* Ieee/port.scm 1253 */
									obj_t BgL_zc3anonymousza32488ze3z83_2743;

									BgL_zc3anonymousza32488ze3z83_2743 =
										make_fx_procedure
										(BGl_zc3anonymousza32488ze3z83zz__r4_ports_6_10_1z00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_2743,
										(int) (((long) 0)), BgL_err2164z00_2784);
									PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_2743,
										(int) (((long) 1)), BgL_an_exitd2167z00_2785);
									BgL_arg2486z00_1449 =
										MAKE_PAIR(BgL_zc3anonymousza32488ze3z83_2743,
										BgL_ohs2163z00_2786);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2486z00_1449);
								BUNSPEC;
							}
							{	/* Ieee/port.scm 1256 */
								obj_t BgL_arg2489z00_1454;

								{	/* Ieee/port.scm 1256 */
									obj_t BgL_res2757z00_2271;

									{	/* Ieee/port.scm 1256 */
										obj_t BgL_auxz00_4843;

										BgL_auxz00_4843 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2757z00_2271 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_4843);
									}
									BgL_arg2489z00_1454 = BgL_res2757z00_2271;
								}
								BgL_val2172z00_1448 =
									BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7
									(BgL_arg2489z00_1454);
							}
							POP_EXIT();
							return BgL_val2172z00_1448;
						}
					}
				}
		}
	}



/* <anonymous:2488> */
	obj_t BGl_zc3anonymousza32488ze3z83zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2748, obj_t BgL_ez00_2751)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1253 */
			{	/* Ieee/port.scm 1253 */
				obj_t BgL_err2164z00_2749;

				obj_t BgL_an_exitd2167z00_2750;

				BgL_err2164z00_2749 =
					PROCEDURE_REF(BgL_envz00_2748, (int) (((long) 0)));
				BgL_an_exitd2167z00_2750 =
					PROCEDURE_REF(BgL_envz00_2748, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1451;

					BgL_ez00_1451 = BgL_ez00_2751;
					SET_CAR(BgL_err2164z00_2749, BTRUE);
					SET_CDR(BgL_err2164z00_2749, BgL_ez00_1451);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2167z00_2750,
						BgL_ez00_1451);
				}
			}
		}
	}



/* delete-file */
	BGL_EXPORTED_DEF obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_132)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1261 */
			if (unlink(BgL_stringz00_132))
				{	/* Ieee/port.scm 1262 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1262 */
					return BTRUE;
				}
		}
	}



/* _delete-file */
	obj_t BGl__deletezd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2752,
		obj_t BgL_stringz00_2753)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1261 */
			{	/* Ieee/port.scm 1262 */
				char *BgL_stringz00_3128;

				{	/* Ieee/port.scm 1262 */
					obj_t BgL_auxz00_4857;

					if (STRINGP(BgL_stringz00_2753))
						{	/* Ieee/port.scm 1262 */
							BgL_auxz00_4857 = BgL_stringz00_2753;
						}
					else
						{
							obj_t BgL_auxz00_4860;

							BgL_auxz00_4860 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 56067)),
								BGl_string3171z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2753);
							FAILURE(BgL_auxz00_4860, BFALSE, BFALSE);
						}
					BgL_stringz00_3128 = BSTRING_TO_STRING(BgL_auxz00_4857);
				}
				if (unlink(BgL_stringz00_3128))
					{	/* Ieee/port.scm 1262 */
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 1262 */
						return BTRUE;
					}
			}
		}
	}



/* make-directory */
	BGL_EXPORTED_DEF bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_133)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1267 */
			return !BGL_MKDIR(BgL_stringz00_133, ((long) 511));
		}
	}



/* _make-directory */
	obj_t BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2754,
		obj_t BgL_stringz00_2755)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1267 */
			{	/* Ieee/port.scm 1268 */
				bool_t BgL_auxz00_4868;

				{	/* Ieee/port.scm 1268 */
					char *BgL_stringz00_3129;

					{	/* Ieee/port.scm 1268 */
						obj_t BgL_auxz00_4869;

						if (STRINGP(BgL_stringz00_2755))
							{	/* Ieee/port.scm 1268 */
								BgL_auxz00_4869 = BgL_stringz00_2755;
							}
						else
							{
								obj_t BgL_auxz00_4872;

								BgL_auxz00_4872 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 56362)), BGl_string3172z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2755);
								FAILURE(BgL_auxz00_4872, BFALSE, BFALSE);
							}
						BgL_stringz00_3129 = BSTRING_TO_STRING(BgL_auxz00_4869);
					}
					BgL_auxz00_4868 = !BGL_MKDIR(BgL_stringz00_3129, ((long) 511));
				}
				return BBOOL(BgL_auxz00_4868);
			}
		}
	}



/* make-directories */
	BGL_EXPORTED_DEF bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_134)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1273 */
			{	/* Ieee/port.scm 1274 */
				bool_t BgL__ortest_2173z00_1457;

				BgL__ortest_2173z00_1457 =
					directoryp(BSTRING_TO_STRING(BgL_stringz00_134));
				if (BgL__ortest_2173z00_1457)
					{	/* Ieee/port.scm 1274 */
						return BgL__ortest_2173z00_1457;
					}
				else
					{	/* Ieee/port.scm 1275 */
						bool_t BgL__ortest_2174z00_1458;

						{	/* Ieee/port.scm 1275 */
							char *BgL_auxz00_4882;

							BgL_auxz00_4882 = BSTRING_TO_STRING(BgL_stringz00_134);
							BgL__ortest_2174z00_1458 =
								!BGL_MKDIR(BgL_auxz00_4882, ((long) 511));
						}
						if (BgL__ortest_2174z00_1458)
							{	/* Ieee/port.scm 1275 */
								return BgL__ortest_2174z00_1458;
							}
						else
							{	/* Ieee/port.scm 1276 */
								obj_t BgL_dnamez00_1459;

								BgL_dnamez00_1459 = BGl_dirnamez00zz__osz00(BgL_stringz00_134);
								{	/* Ieee/port.scm 1277 */
									bool_t BgL_testz00_4887;

									if ((STRING_LENGTH(BgL_dnamez00_1459) == ((long) 0)))
										{	/* Ieee/port.scm 1277 */
											BgL_testz00_4887 = ((bool_t) 1);
										}
									else
										{	/* Ieee/port.scm 1277 */
											BgL_testz00_4887 =
												fexists(BSTRING_TO_STRING(BgL_dnamez00_1459));
										}
									if (BgL_testz00_4887)
										{	/* Ieee/port.scm 1277 */
											return ((bool_t) 0);
										}
									else
										{	/* Ieee/port.scm 1279 */
											bool_t BgL_auxz00_1461;

											BgL_auxz00_1461 =
												BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
												(BgL_dnamez00_1459);
											{	/* Ieee/port.scm 1280 */
												bool_t BgL_testz00_4894;

												{	/* Ieee/port.scm 1280 */
													unsigned char BgL_arg2493z00_1463;

													obj_t BgL_arg2494z00_1464;

													BgL_arg2493z00_1463 =
														STRING_REF(BgL_stringz00_134,
														(STRING_LENGTH(BgL_stringz00_134) - ((long) 1)));
													BgL_arg2494z00_1464 =
														BGl_filezd2separatorzd2zz__osz00();
													BgL_testz00_4894 =
														(BgL_arg2493z00_1463 == CCHAR(BgL_arg2494z00_1464));
												}
												if (BgL_testz00_4894)
													{	/* Ieee/port.scm 1280 */
														return BgL_auxz00_1461;
													}
												else
													{	/* Ieee/port.scm 1283 */
														char *BgL_auxz00_4901;

														BgL_auxz00_4901 =
															BSTRING_TO_STRING(BgL_stringz00_134);
														return !BGL_MKDIR(BgL_auxz00_4901, ((long) 511));
		}}}}}}}}
	}



/* _make-directories */
	obj_t BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2756,
		obj_t BgL_stringz00_2757)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1273 */
			{	/* Ieee/port.scm 1274 */
				bool_t BgL_auxz00_4904;

				{	/* Ieee/port.scm 1274 */
					obj_t BgL_auxz00_4905;

					if (STRINGP(BgL_stringz00_2757))
						{	/* Ieee/port.scm 1274 */
							BgL_auxz00_4905 = BgL_stringz00_2757;
						}
					else
						{
							obj_t BgL_auxz00_4908;

							BgL_auxz00_4908 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 56650)),
								BGl_string3173z00zz__r4_ports_6_10_1z00,
								BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_stringz00_2757);
							FAILURE(BgL_auxz00_4908, BFALSE, BFALSE);
						}
					BgL_auxz00_4904 =
						BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_auxz00_4905);
				}
				return BBOOL(BgL_auxz00_4904);
			}
		}
	}



/* delete-directory */
	BGL_EXPORTED_DEF obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_135)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1288 */
			if (rmdir(BgL_stringz00_135))
				{	/* Ieee/port.scm 1289 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1289 */
					return BTRUE;
				}
		}
	}



/* _delete-directory */
	obj_t BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2758,
		obj_t BgL_stringz00_2759)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1288 */
			{	/* Ieee/port.scm 1289 */
				char *BgL_stringz00_3130;

				{	/* Ieee/port.scm 1289 */
					obj_t BgL_auxz00_4916;

					if (STRINGP(BgL_stringz00_2759))
						{	/* Ieee/port.scm 1289 */
							BgL_auxz00_4916 = BgL_stringz00_2759;
						}
					else
						{
							obj_t BgL_auxz00_4919;

							BgL_auxz00_4919 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 57271)),
								BGl_string3174z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2759);
							FAILURE(BgL_auxz00_4919, BFALSE, BFALSE);
						}
					BgL_stringz00_3130 = BSTRING_TO_STRING(BgL_auxz00_4916);
				}
				if (rmdir(BgL_stringz00_3130))
					{	/* Ieee/port.scm 1289 */
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 1289 */
						return BTRUE;
					}
			}
		}
	}



/* rename-file */
	BGL_EXPORTED_DEF obj_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_string1z00_136, char *BgL_string2z00_137)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1294 */
			{	/* Ieee/port.scm 1295 */
				bool_t BgL_testz00_4926;

				{	/* Ieee/port.scm 1295 */
					int BgL_arg2504z00_3131;

					BgL_arg2504z00_3131 = rename(BgL_string1z00_136, BgL_string2z00_137);
					BgL_testz00_4926 = (BINT(BgL_arg2504z00_3131) == BINT(((long) 0)));
				}
				if (BgL_testz00_4926)
					{	/* Ieee/port.scm 1295 */
						return BTRUE;
					}
				else
					{	/* Ieee/port.scm 1295 */
						return BFALSE;
					}
			}
		}
	}



/* _rename-file */
	obj_t BGl__renamezd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2760,
		obj_t BgL_string1z00_2761, obj_t BgL_string2z00_2762)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1294 */
			{	/* Ieee/port.scm 1295 */
				char *BgL_string1z00_3132;

				char *BgL_string2z00_3133;

				{	/* Ieee/port.scm 1295 */
					obj_t BgL_auxz00_4931;

					if (STRINGP(BgL_string1z00_2761))
						{	/* Ieee/port.scm 1295 */
							BgL_auxz00_4931 = BgL_string1z00_2761;
						}
					else
						{
							obj_t BgL_auxz00_4934;

							BgL_auxz00_4934 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 57586)),
								BGl_string3175z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_string1z00_2761);
							FAILURE(BgL_auxz00_4934, BFALSE, BFALSE);
						}
					BgL_string1z00_3132 = BSTRING_TO_STRING(BgL_auxz00_4931);
				}
				{	/* Ieee/port.scm 1295 */
					obj_t BgL_auxz00_4939;

					if (STRINGP(BgL_string2z00_2762))
						{	/* Ieee/port.scm 1295 */
							BgL_auxz00_4939 = BgL_string2z00_2762;
						}
					else
						{
							obj_t BgL_auxz00_4942;

							BgL_auxz00_4942 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 57586)),
								BGl_string3175z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_string2z00_2762);
							FAILURE(BgL_auxz00_4942, BFALSE, BFALSE);
						}
					BgL_string2z00_3133 = BSTRING_TO_STRING(BgL_auxz00_4939);
				}
				{	/* Ieee/port.scm 1295 */
					bool_t BgL_testz00_4947;

					{	/* Ieee/port.scm 1295 */
						int BgL_arg2504z00_3134;

						BgL_arg2504z00_3134 =
							rename(BgL_string1z00_3132, BgL_string2z00_3133);
						BgL_testz00_4947 = (BINT(BgL_arg2504z00_3134) == BINT(((long) 0)));
					}
					if (BgL_testz00_4947)
						{	/* Ieee/port.scm 1295 */
							return BTRUE;
						}
					else
						{	/* Ieee/port.scm 1295 */
							return BFALSE;
						}
				}
			}
		}
	}



/* copy-file */
	BGL_EXPORTED_DEF obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_string1z00_138, char *BgL_string2z00_139)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1302 */
			{	/* Ieee/port.scm 1303 */
				obj_t BgL_piz00_1475;

				obj_t BgL_poz00_1476;

				BgL_piz00_1475 =
					BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(string_to_bstring
					(BgL_string1z00_138));
				BgL_poz00_1476 =
					BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(string_to_bstring
					(BgL_string2z00_139));
				if (BINARY_PORTP(BgL_piz00_1475))
					{	/* Ieee/port.scm 1306 */
						if (BINARY_PORTP(BgL_poz00_1476))
							{	/* Ieee/port.scm 1313 */
								obj_t BgL_sz00_1479;

								BgL_sz00_1479 =
									make_string(((long) 1024), ((unsigned char) ' '));
								{	/* Ieee/port.scm 1314 */
									int BgL_g2175z00_1480;

									BgL_g2175z00_1480 =
										bgl_input_fill_string(BgL_piz00_1475, BgL_sz00_1479);
									{
										int BgL_lz00_1482;

										{	/* Ieee/port.scm 1314 */
											bool_t BgL_auxz00_4962;

											BgL_lz00_1482 = BgL_g2175z00_1480;
										BgL_zc3anonymousza32508ze3z83_1483:
											if (((long) (BgL_lz00_1482) == ((long) 1024)))
												{	/* Ieee/port.scm 1315 */
													bgl_output_string(BgL_poz00_1476, BgL_sz00_1479);
													{
														int BgL_lz00_4967;

														BgL_lz00_4967 =
															bgl_input_fill_string(BgL_piz00_1475,
															BgL_sz00_1479);
														BgL_lz00_1482 = BgL_lz00_4967;
														goto BgL_zc3anonymousza32508ze3z83_1483;
													}
												}
											else
												{	/* Ieee/port.scm 1315 */
													{	/* Ieee/port.scm 1320 */
														obj_t BgL_arg2511z00_1486;

														{	/* Ieee/port.scm 1320 */
															long BgL_auxz00_4969;

															BgL_auxz00_4969 = (long) (BgL_lz00_1482);
															BgL_arg2511z00_1486 =
																bgl_string_shrink(BgL_sz00_1479,
																BgL_auxz00_4969);
														}
														bgl_output_string(BgL_poz00_1476,
															BgL_arg2511z00_1486);
													}
													close_binary_port(BgL_piz00_1475);
													close_binary_port(BgL_poz00_1476);
													BgL_auxz00_4962 = ((bool_t) 1);
												}
											return BBOOL(BgL_auxz00_4962);
										}
									}
								}
							}
						else
							{	/* Ieee/port.scm 1309 */
								close_binary_port(BgL_piz00_1475);
								return BFALSE;
							}
					}
				else
					{	/* Ieee/port.scm 1306 */
						if (BINARY_PORTP(BgL_poz00_1476))
							{	/* Ieee/port.scm 1307 */
								close_binary_port(BgL_poz00_1476);
							}
						else
							{	/* Ieee/port.scm 1307 */
								BFALSE;
							}
						return BFALSE;
					}
			}
		}
	}



/* _copy-file */
	obj_t BGl__copyzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2763,
		obj_t BgL_string1z00_2764, obj_t BgL_string2z00_2765)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1302 */
			{	/* Ieee/port.scm 1303 */
				char *BgL_auxz00_4989;

				char *BgL_auxz00_4980;

				{	/* Ieee/port.scm 1303 */
					obj_t BgL_auxz00_4990;

					if (STRINGP(BgL_string2z00_2765))
						{	/* Ieee/port.scm 1303 */
							BgL_auxz00_4990 = BgL_string2z00_2765;
						}
					else
						{
							obj_t BgL_auxz00_4993;

							BgL_auxz00_4993 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 57905)),
								BGl_string3176z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_string2z00_2765);
							FAILURE(BgL_auxz00_4993, BFALSE, BFALSE);
						}
					BgL_auxz00_4989 = BSTRING_TO_STRING(BgL_auxz00_4990);
				}
				{	/* Ieee/port.scm 1303 */
					obj_t BgL_auxz00_4981;

					if (STRINGP(BgL_string1z00_2764))
						{	/* Ieee/port.scm 1303 */
							BgL_auxz00_4981 = BgL_string1z00_2764;
						}
					else
						{
							obj_t BgL_auxz00_4984;

							BgL_auxz00_4984 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 57905)),
								BGl_string3176z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_string1z00_2764);
							FAILURE(BgL_auxz00_4984, BFALSE, BFALSE);
						}
					BgL_auxz00_4980 = BSTRING_TO_STRING(BgL_auxz00_4981);
				}
				return
					BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4980,
					BgL_auxz00_4989);
			}
		}
	}



/* port? */
	BGL_EXPORTED_DEF bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_140)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1328 */
			{	/* Ieee/port.scm 1329 */
				bool_t BgL__ortest_2176z00_3135;

				BgL__ortest_2176z00_3135 = OUTPUT_PORTP(BgL_objz00_140);
				if (BgL__ortest_2176z00_3135)
					{	/* Ieee/port.scm 1329 */
						return BgL__ortest_2176z00_3135;
					}
				else
					{	/* Ieee/port.scm 1329 */
						return INPUT_PORTP(BgL_objz00_140);
					}
			}
		}
	}



/* _port? */
	obj_t BGl__portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2766,
		obj_t BgL_objz00_2767)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1328 */
			{	/* Ieee/port.scm 1329 */
				bool_t BgL_auxz00_5002;

				{	/* Ieee/port.scm 1329 */
					bool_t BgL__ortest_2176z00_3137;

					BgL__ortest_2176z00_3137 = OUTPUT_PORTP(BgL_objz00_2767);
					if (BgL__ortest_2176z00_3137)
						{	/* Ieee/port.scm 1329 */
							BgL_auxz00_5002 = BgL__ortest_2176z00_3137;
						}
					else
						{	/* Ieee/port.scm 1329 */
							BgL_auxz00_5002 = INPUT_PORTP(BgL_objz00_2767);
						}
				}
				return BBOOL(BgL_auxz00_5002);
			}
		}
	}



/* directory? */
	BGL_EXPORTED_DEF bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_141)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1334 */
			return directoryp(BgL_stringz00_141);
		}
	}



/* _directory? */
	obj_t BGl__directoryzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2768,
		obj_t BgL_stringz00_2769)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1334 */
			{	/* Ieee/port.scm 1335 */
				bool_t BgL_auxz00_5008;

				{	/* Ieee/port.scm 1335 */
					char *BgL_stringz00_3139;

					{	/* Ieee/port.scm 1335 */
						obj_t BgL_auxz00_5009;

						if (STRINGP(BgL_stringz00_2769))
							{	/* Ieee/port.scm 1335 */
								BgL_auxz00_5009 = BgL_stringz00_2769;
							}
						else
							{
								obj_t BgL_auxz00_5012;

								BgL_auxz00_5012 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 59043)), BGl_string3177z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2769);
								FAILURE(BgL_auxz00_5012, BFALSE, BFALSE);
							}
						BgL_stringz00_3139 = BSTRING_TO_STRING(BgL_auxz00_5009);
					}
					BgL_auxz00_5008 = directoryp(BgL_stringz00_3139);
				}
				return BBOOL(BgL_auxz00_5008);
			}
		}
	}



/* directory->list */
	BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_142)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1340 */
			return directory_to_list(BgL_stringz00_142);
		}
	}



/* _directory->list */
	obj_t BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2770,
		obj_t BgL_stringz00_2771)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1340 */
			{	/* Ieee/port.scm 1341 */
				char *BgL_stringz00_3140;

				{	/* Ieee/port.scm 1341 */
					obj_t BgL_auxz00_5020;

					if (STRINGP(BgL_stringz00_2771))
						{	/* Ieee/port.scm 1341 */
							BgL_auxz00_5020 = BgL_stringz00_2771;
						}
					else
						{
							obj_t BgL_auxz00_5023;

							BgL_auxz00_5023 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 59331)),
								BGl_string3178z00zz__r4_ports_6_10_1z00,
								BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_stringz00_2771);
							FAILURE(BgL_auxz00_5023, BFALSE, BFALSE);
						}
					BgL_stringz00_3140 = BSTRING_TO_STRING(BgL_auxz00_5020);
				}
				return directory_to_list(BgL_stringz00_3140);
			}
		}
	}



/* directory->path-list */
	BGL_EXPORTED_DEF obj_t
		BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t
		BgL_dirz00_143)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1346 */
			{	/* Ieee/port.scm 1347 */
				long BgL_lz00_1491;

				BgL_lz00_1491 = STRING_LENGTH(BgL_dirz00_143);
				if ((BgL_lz00_1491 == ((long) 0)))
					{	/* Ieee/port.scm 1349 */
						return BNIL;
					}
				else
					{	/* Ieee/port.scm 1351 */
						bool_t BgL_testz00_5032;

						{	/* Ieee/port.scm 1351 */
							unsigned char BgL_arg2519z00_1497;

							obj_t BgL_arg2520z00_1498;

							BgL_arg2519z00_1497 =
								STRING_REF(BgL_dirz00_143, (BgL_lz00_1491 - ((long) 1)));
							BgL_arg2520z00_1498 = BGl_filezd2separatorzd2zz__osz00();
							BgL_testz00_5032 =
								(BgL_arg2519z00_1497 == CCHAR(BgL_arg2520z00_1498));
						}
						if (BgL_testz00_5032)
							{	/* Ieee/port.scm 1354 */
								long BgL_arg2516z00_1494;

								obj_t BgL_arg2517z00_1495;

								BgL_arg2516z00_1494 = (BgL_lz00_1491 - ((long) 1));
								BgL_arg2517z00_1495 = BGl_filezd2separatorzd2zz__osz00();
								return
									bgl_directory_to_path_list(BSTRING_TO_STRING(BgL_dirz00_143),
									(int) (BgL_arg2516z00_1494), CCHAR(BgL_arg2517z00_1495));
							}
						else
							{	/* Ieee/port.scm 1361 */
								obj_t BgL_arg2518z00_1496;

								BgL_arg2518z00_1496 = BGl_filezd2separatorzd2zz__osz00();
								return
									bgl_directory_to_path_list(BSTRING_TO_STRING(BgL_dirz00_143),
									(int) (BgL_lz00_1491), CCHAR(BgL_arg2518z00_1496));
		}}}}
	}



/* _directory->path-list */
	obj_t BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2772, obj_t BgL_dirz00_2773)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1346 */
			{	/* Ieee/port.scm 1347 */
				obj_t BgL_auxz00_5049;

				if (STRINGP(BgL_dirz00_2773))
					{	/* Ieee/port.scm 1347 */
						BgL_auxz00_5049 = BgL_dirz00_2773;
					}
				else
					{
						obj_t BgL_auxz00_5052;

						BgL_auxz00_5052 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3038z00zz__r4_ports_6_10_1z00, BINT(((long) 59619)),
							BGl_string3179z00zz__r4_ports_6_10_1z00,
							BGl_string3040z00zz__r4_ports_6_10_1z00, BgL_dirz00_2773);
						FAILURE(BgL_auxz00_5052, BFALSE, BFALSE);
					}
				return
					BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00
					(BgL_auxz00_5049);
			}
		}
	}



/* file-modification-time */
	BGL_EXPORTED_DEF long
		BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char
		*BgL_filez00_144)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1369 */
			return bgl_last_modification_time(BgL_filez00_144);
		}
	}



/* _file-modification-time */
	obj_t BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_2774, obj_t BgL_filez00_2775)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1369 */
			{	/* Ieee/port.scm 1370 */
				long BgL_auxz00_5058;

				{	/* Ieee/port.scm 1370 */
					char *BgL_filez00_3141;

					{	/* Ieee/port.scm 1370 */
						obj_t BgL_auxz00_5059;

						if (STRINGP(BgL_filez00_2775))
							{	/* Ieee/port.scm 1370 */
								BgL_auxz00_5059 = BgL_filez00_2775;
							}
						else
							{
								obj_t BgL_auxz00_5062;

								BgL_auxz00_5062 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 60385)), BGl_string3180z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_filez00_2775);
								FAILURE(BgL_auxz00_5062, BFALSE, BFALSE);
							}
						BgL_filez00_3141 = BSTRING_TO_STRING(BgL_auxz00_5059);
					}
					BgL_auxz00_5058 = bgl_last_modification_time(BgL_filez00_3141);
				}
				return make_belong(BgL_auxz00_5058);
			}
		}
	}



/* file-size */
	BGL_EXPORTED_DEF long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char
		*BgL_filez00_145)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1375 */
			return bgl_file_size(BgL_filez00_145);
		}
	}



/* _file-size */
	obj_t BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2776,
		obj_t BgL_filez00_2777)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1375 */
			{	/* Ieee/port.scm 1376 */
				long BgL_auxz00_5070;

				{	/* Ieee/port.scm 1376 */
					char *BgL_filez00_3142;

					{	/* Ieee/port.scm 1376 */
						obj_t BgL_auxz00_5071;

						if (STRINGP(BgL_filez00_2777))
							{	/* Ieee/port.scm 1376 */
								BgL_auxz00_5071 = BgL_filez00_2777;
							}
						else
							{
								obj_t BgL_auxz00_5074;

								BgL_auxz00_5074 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 60664)), BGl_string3181z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_filez00_2777);
								FAILURE(BgL_auxz00_5074, BFALSE, BFALSE);
							}
						BgL_filez00_3142 = BSTRING_TO_STRING(BgL_auxz00_5071);
					}
					BgL_auxz00_5070 = bgl_file_size(BgL_filez00_3142);
				}
				return make_belong(BgL_auxz00_5070);
			}
		}
	}



/* file-uid */
	BGL_EXPORTED_DEF int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_146)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1381 */
			return bgl_file_uid(BgL_filez00_146);
		}
	}



/* _file-uid */
	obj_t BGl__filezd2uidzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2778,
		obj_t BgL_filez00_2779)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1381 */
			{	/* Ieee/port.scm 1382 */
				int BgL_auxz00_5082;

				{	/* Ieee/port.scm 1382 */
					char *BgL_filez00_3143;

					{	/* Ieee/port.scm 1382 */
						obj_t BgL_auxz00_5083;

						if (STRINGP(BgL_filez00_2779))
							{	/* Ieee/port.scm 1382 */
								BgL_auxz00_5083 = BgL_filez00_2779;
							}
						else
							{
								obj_t BgL_auxz00_5086;

								BgL_auxz00_5086 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 60934)), BGl_string3182z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_filez00_2779);
								FAILURE(BgL_auxz00_5086, BFALSE, BFALSE);
							}
						BgL_filez00_3143 = BSTRING_TO_STRING(BgL_auxz00_5083);
					}
					BgL_auxz00_5082 = bgl_file_uid(BgL_filez00_3143);
				}
				return BINT(BgL_auxz00_5082);
			}
		}
	}



/* file-gid */
	BGL_EXPORTED_DEF int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_147)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1387 */
			return bgl_file_gid(BgL_filez00_147);
		}
	}



/* _file-gid */
	obj_t BGl__filezd2gidzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2780,
		obj_t BgL_filez00_2781)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1387 */
			{	/* Ieee/port.scm 1388 */
				int BgL_auxz00_5094;

				{	/* Ieee/port.scm 1388 */
					char *BgL_filez00_3144;

					{	/* Ieee/port.scm 1388 */
						obj_t BgL_auxz00_5095;

						if (STRINGP(BgL_filez00_2781))
							{	/* Ieee/port.scm 1388 */
								BgL_auxz00_5095 = BgL_filez00_2781;
							}
						else
							{
								obj_t BgL_auxz00_5098;

								BgL_auxz00_5098 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 61203)), BGl_string3183z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_filez00_2781);
								FAILURE(BgL_auxz00_5098, BFALSE, BFALSE);
							}
						BgL_filez00_3144 = BSTRING_TO_STRING(BgL_auxz00_5095);
					}
					BgL_auxz00_5094 = bgl_file_gid(BgL_filez00_3144);
				}
				return BINT(BgL_auxz00_5094);
			}
		}
	}



/* file-mode */
	BGL_EXPORTED_DEF int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_148)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1393 */
			return bgl_file_mode(BgL_filez00_148);
		}
	}



/* _file-mode */
	obj_t BGl__filezd2modezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2782,
		obj_t BgL_filez00_2783)
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 1393 */
			{	/* Ieee/port.scm 1394 */
				int BgL_auxz00_5106;

				{	/* Ieee/port.scm 1394 */
					char *BgL_filez00_3145;

					{	/* Ieee/port.scm 1394 */
						obj_t BgL_auxz00_5107;

						if (STRINGP(BgL_filez00_2783))
							{	/* Ieee/port.scm 1394 */
								BgL_auxz00_5107 = BgL_filez00_2783;
							}
						else
							{
								obj_t BgL_auxz00_5110;

								BgL_auxz00_5110 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3038z00zz__r4_ports_6_10_1z00,
									BINT(((long) 61473)), BGl_string3184z00zz__r4_ports_6_10_1z00,
									BGl_string3116z00zz__r4_ports_6_10_1z00, BgL_filez00_2783);
								FAILURE(BgL_auxz00_5110, BFALSE, BFALSE);
							}
						BgL_filez00_3145 = BSTRING_TO_STRING(BgL_auxz00_5107);
					}
					BgL_auxz00_5106 = bgl_file_mode(BgL_filez00_3145);
				}
				return BINT(BgL_auxz00_5106);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00()
	{
		AN_OBJECT;
		{	/* Ieee/port.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long) 23251724),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__urlz00(((long) 26833903),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__httpz00(((long) 420279834),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
			return
				BGl_modulezd2initializa7ationz75zz__ftpz00(((long) 111023090),
				BSTRING_TO_STRING(BGl_string3185z00zz__r4_ports_6_10_1z00));
		}
	}

#ifdef __cplusplus
}
#endif
