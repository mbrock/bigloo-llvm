/*===========================================================================*/
/*   (Unsafe/http.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/http.scm -indent -o objs/obj_u/Unsafe/http.c)*/
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

	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;

	typedef struct BgL_z62httpzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                         *BgL_z62httpzd2errorzb0_bglt;

	typedef struct BgL_z62httpzd2redirectionzd2errorz62_bgl
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
		*BgL_z62httpzd2redirectionzd2errorz62_bglt;

	typedef struct BgL_z62httpzd2statuszd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		int BgL_statusz00;
	}                                  *BgL_z62httpzd2statuszd2errorz62_bglt;

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


	static obj_t BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00 =
		BUNSPEC;
	static obj_t BGl__makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2errorzb0_bglt
		BGl_makezd2z62httpzd2errorz62zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2z62httpzd2redirectionz62zz__httpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00 =
		BUNSPEC;
	static obj_t BGl__httpz00zz__httpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzb0_bglt
		BGl_makezd2z62httpzd2redirectionz62zz__httpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62httpzd2statuszd2errorz62zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62httpzd2errorzb0zz__httpz00 = BUNSPEC;
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_thezd2failurezd2zz__httpz00(obj_t);
	static obj_t BGl__fillzd2z62httpzd2errorz12z70zz__httpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2errorzb0_bglt
		BGl_z62httpzd2errorzd2nilz62zz__httpz00();
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzb0_bglt
		BGl_z62httpzd2redirectionzd2nilz62zz__httpz00();
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__httpz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2z62httpzd2redirectionz30zz__httpz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62httpzd2redirectionzd2errorz62zz__httpz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__httpz00();
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62http2456z81zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62http2460z81zz__httpz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62http2464z81zz__httpz00(obj_t, obj_t);
	static obj_t BGl__httpzd2readzd2linez00zz__httpz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2z62http2468z81zz__httpz00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t string_for_read(obj_t);
	extern long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2chunkszd2ze3portze3zz__httpz00(obj_t);
	static obj_t BGl_list5344z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_list5345z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_parsezd2bodyzd2zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__z62httpzd2statuszd2errorzd2nilzb0zz__httpz00(obj_t);
	extern obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_z62httpzd2statuszd2errorzd2nilzb0zz__httpz00();
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl__z62httpzd2errorzd2nilz62zz__httpz00(obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t rgc_buffer_downcase_keyword(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_httpzd2skipzd2linez00zz__httpz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z62httpzd2redirectionzd2errorzf3z91zz__httpz00(obj_t);
	static obj_t BGl__z62httpzd2redirectionzd2urlz62zz__httpz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2458z83zz__httpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2462z83zz__httpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2466z83zz__httpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2470z83zz__httpz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2sendzd2chunksz00zz__httpz00(obj_t, obj_t,
		bool_t);
	static obj_t BGl_cnstzd2initzd2zz__httpz00();
	static obj_t
		BGl__z52allocatezd2z62httpzd2redirectionzd2errorze2zz__httpz00(obj_t);
	static obj_t BGl__httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t, obj_t);
	static obj_t BGl__z62httpzd2statuszd2errorzd2statuszb0zz__httpz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_fillzd2z62httpzd2redirectionzd2errorz12za2zz__httpz00
		(BgL_z62httpzd2redirectionzd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34727ze3z83zz__httpz00(obj_t);
	static obj_t BGl__z62httpzd2errorzf3z43zz__httpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_generatezd2httpzd2postzd2bodyzd2zz__httpz00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__httpz00();
	static obj_t BGl_zc3anonymousza34733ze3z83zz__httpz00(obj_t);
	static obj_t BGl__fillzd2z62httpzd2statuszd2errorz12za2zz__httpz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2readzd2linez00zz__httpz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62httpzd2statuszd2errorzf3z91zz__httpz00(obj_t);
	static obj_t BGl_valuezd2grammarzd2zz__httpz00(obj_t);
	static obj_t BGl__z62httpzd2statuszd2errorzf3z91zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__z52allocatezd2z62httpzd2errorz30zz__httpz00(obj_t);
	static obj_t BGl__httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t, obj_t);
	static obj_t BGl__httpzd2chunkszd2ze3portze3zz__httpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzb0_bglt
		BGl_z52allocatezd2z62httpzd2redirectionz30zz__httpz00();
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62httpzd2errorzf3z43zz__httpz00(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__z62httpzd2redirectionzf3z43zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__httpzd2readzd2crlfz00zz__httpz00(obj_t, obj_t);
	static obj_t BGl_thezd2substringzd2zz__httpz00(obj_t, int, int);
	static obj_t BGl_zc3anonymousza34609ze3z83zz__httpz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34746ze3z83zz__httpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_z52allocatezd2z62httpzd2statuszd2errorze2zz__httpz00();
	static obj_t BGl__makezd2z62httpzd2errorz62zz__httpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00 = BUNSPEC;
	extern obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_toplevelzd2initzd2zz__httpz00();
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_makezd2httpzd2socketz00zz__httpz00(obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_za2bufferzd2lengthza2zd2zz__httpz00;
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_generatezd2httpzd2boundaryz00zz__httpz00();
	static obj_t BGl__fillzd2z62httpzd2redirectionzd2errorz12za2zz__httpz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z62httpzd2redirectionzf3z43zz__httpz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t, obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern long rgc_buffer_fixnum(obj_t);
	extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t rgc_buffer_downcase_symbol(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62httpzd2redirectionzb0zz__httpz00 = BUNSPEC;
	static obj_t BGl_authzd2grammarzd2zz__httpz00(obj_t);
	static obj_t BGl_symbolzd2grammarzd2zz__httpz00(obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol5326z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_statuszd2linezd2grammarz00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5335z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5337z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5339z00zz__httpz00 = BUNSPEC;
	static obj_t BGl__z62httpzd2redirectionzd2nilz62zz__httpz00(obj_t);
	static obj_t BGl_symbol5351z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5354z00zz__httpz00 = BUNSPEC;
	static obj_t BGl__fillzd2z62httpzd2redirectionz12z70zz__httpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00(obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2headerz00zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_z62errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_httpzd2readzd2crlfz00zz__httpz00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_barrierzd2portzd2zz__httpz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32750ze3z83zz__httpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5408z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5410z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5416z00zz__httpz00 = BUNSPEC;
	static obj_t BGl__makezd2z62httpzd2statuszd2errorzb0zz__httpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5432z00zz__httpz00 = BUNSPEC;
	extern obj_t BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t);
	BGL_EXPORTED_DECL BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_fillzd2z62httpzd2statuszd2errorz12za2zz__httpz00
		(BgL_z62httpzd2statuszd2errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	static obj_t BGl_symbol5446z00zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_z52allocatezd2z62httpzd2redirectionzd2errorze2zz__httpz00();
	static obj_t BGl__z52allocatezd2z62httpzd2statuszd2errorze2zz__httpz00(obj_t);
	static obj_t BGl_symbol5452z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5455z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5459z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5466z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5469z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5472z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5474z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5476z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5480z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5482z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5484z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5486z00zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol5488z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5490z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_symbol5491z00zz__httpz00 = BUNSPEC;
	static obj_t BGl__httpzd2sendzd2chunksz00zz__httpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_keyword5346z00zz__httpz00 = BUNSPEC;
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_keyword5356z00zz__httpz00 = BUNSPEC;
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_keyword5358z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5360z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_crlfzd2grammarzd2zz__httpz00(obj_t);
	static obj_t BGl_keyword5362z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_thezd2failurez72za0zz__httpz00(obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_keyword5364z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5366z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5368z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5370z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5372z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5374z00zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzb0_bglt
		BGl_fillzd2z62httpzd2redirectionz12z70zz__httpz00
		(BgL_z62httpzd2redirectionzb0_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_keyword5376z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5378z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5380z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5382z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5384z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5386z00zz__httpz00 = BUNSPEC;
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_keyword5388z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5390z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5392z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5394z00zz__httpz00 = BUNSPEC;
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl_keyword5435z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5437z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5439z00zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5441z00zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62httpzd2errorzb0_bglt
		BGl_z52allocatezd2z62httpzd2errorz30zz__httpz00();
	BGL_EXPORTED_DECL BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_makezd2z62httpzd2statuszd2errorzb0zz__httpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, int);
	static obj_t BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00 = BUNSPEC;
	static obj_t BGl_keyword5457z00zz__httpz00 = BUNSPEC;
	static obj_t BGl__httpzd2parsezd2headerz00zz__httpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__httpz00();
	BGL_EXPORTED_DECL BgL_z62httpzd2errorzb0_bglt
		BGl_fillzd2z62httpzd2errorz12z70zz__httpz00(BgL_z62httpzd2errorzb0_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza32505ze3z83zz__httpz00(obj_t, obj_t);
	static obj_t BGl__z62httpzd2redirectionzd2portz62zz__httpz00(obj_t, obj_t);
	static obj_t BGl__z62httpzd2redirectionzd2errorzf3z91zz__httpz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00();
	static obj_t BGl_ignorez00zz__httpz00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__httpz00();
	extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2statuszd2errorzf3zd2envz43zz__httpz00,
		BgL_bgl__za762httpza7d2statu5523z00,
		BGl__z62httpzd2statuszd2errorzf3z91zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_httpzd2responsezd2bodyzd2ze3portzd2envze3zz__httpz00,
		BgL_bgl__httpza7d2response5524za7,
		BGl__httpzd2responsezd2bodyzd2ze3portz31zz__httpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62httpzd2statuszd2errorz12zd2envz70zz__httpz00,
		BgL_bgl__fillza7d2za762httpza75525za7,
		BGl__fillzd2z62httpzd2statuszd2errorz12za2zz__httpz00, 0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5464z00zz__httpz00,
		BgL_bgl_parseza7d2bodyza7d2za75526za7, BGl_parsezd2bodyzd2zz__httpz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5504z00zz__httpz00,
		BgL_bgl_objectza7d2za7e3stru5527z00,
		BGl_objectzd2ze3structzd2z62http2456z81zz__httpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5506z00zz__httpz00,
		BgL_bgl_structza7b2objectza75528z00,
		BGl_structzb2objectzd2ze3objec2458z83zz__httpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5508z00zz__httpz00,
		BgL_bgl_objectza7d2za7e3stru5529z00,
		BGl_objectzd2ze3structzd2z62http2460z81zz__httpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5510z00zz__httpz00,
		BgL_bgl_objectza7d2za7e3stru5530z00,
		BGl_objectzd2ze3structzd2z62http2464z81zz__httpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5509z00zz__httpz00,
		BgL_bgl_structza7b2objectza75531z00,
		BGl_structzb2objectzd2ze3objec2462z83zz__httpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5511z00zz__httpz00,
		BgL_bgl_structza7b2objectza75532z00,
		BGl_structzb2objectzd2ze3objec2466z83zz__httpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5327z00zz__httpz00,
		BgL_bgl_string5327za700za7za7_5533za7, "chunks", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5512z00zz__httpz00,
		BgL_bgl_objectza7d2za7e3stru5534z00,
		BGl_objectzd2ze3structzd2z62http2468z81zz__httpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5328z00zz__httpz00,
		BgL_bgl_string5328za700za7za7_5535za7, "#<eof-object>", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5513z00zz__httpz00,
		BgL_bgl_structza7b2objectza75536z00,
		BGl_structzb2objectzd2ze3objec2470z83zz__httpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5330z00zz__httpz00,
		BgL_bgl_string5330za700za7za7_5537za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string5329z00zz__httpz00,
		BgL_bgl_string5329za700za7za7_5538za7, "Illegal chunk size", 18);
	      DEFINE_STRING(BGl_string5331z00zz__httpz00,
		BgL_bgl_string5331za700za7za7_5539za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string5332z00zz__httpz00,
		BgL_bgl_string5332za700za7za7_5540za7, "Illegal character", 17);
	      DEFINE_STRING(BGl_string5333z00zz__httpz00,
		BgL_bgl_string5333za700za7za7_5541za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string5334z00zz__httpz00,
		BgL_bgl_string5334za700za7za7_5542za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string5336z00zz__httpz00,
		BgL_bgl_string5336za700za7za7_5543za7, "line", 4);
	      DEFINE_STRING(BGl_string5338z00zz__httpz00,
		BgL_bgl_string5338za700za7za7_5544za7, "code", 4);
	      DEFINE_STRING(BGl_string5340z00zz__httpz00,
		BgL_bgl_string5340za700za7za7_5545za7, "http-parse-status-line", 22);
	      DEFINE_STRING(BGl_string5341z00zz__httpz00,
		BgL_bgl_string5341za700za7za7_5546za7,
		"Illegal status line, premature end of input", 43);
	      DEFINE_STRING(BGl_string5342z00zz__httpz00,
		BgL_bgl_string5342za700za7za7_5547za7, "Illegal status line", 19);
	      DEFINE_STRING(BGl_string5343z00zz__httpz00,
		BgL_bgl_string5343za700za7za7_5548za7, "Illegal status code", 19);
	      DEFINE_STRING(BGl_string5347z00zz__httpz00,
		BgL_bgl_string5347za700za7za7_5549za7, "user-agent", 10);
	      DEFINE_STRING(BGl_string5348z00zz__httpz00,
		BgL_bgl_string5348za700za7za7_5550za7, "Mozilla/5.0", 11);
	      DEFINE_STRING(BGl_string5350z00zz__httpz00,
		BgL_bgl_string5350za700za7za7_5551za7, "HTTP/1.1", 8);
	      DEFINE_STRING(BGl_string5349z00zz__httpz00,
		BgL_bgl_string5349za700za7za7_5552za7, "localhost", 9);
	      DEFINE_STRING(BGl_string5352z00zz__httpz00,
		BgL_bgl_string5352za700za7za7_5553za7, "get", 3);
	      DEFINE_STRING(BGl_string5353z00zz__httpz00,
		BgL_bgl_string5353za700za7za7_5554za7, "/", 1);
	      DEFINE_STRING(BGl_string5355z00zz__httpz00,
		BgL_bgl_string5355za700za7za7_5555za7, "http", 4);
	      DEFINE_STRING(BGl_string5357z00zz__httpz00,
		BgL_bgl_string5357za700za7za7_5556za7, "args", 4);
	      DEFINE_STRING(BGl_string5359z00zz__httpz00,
		BgL_bgl_string5359za700za7za7_5557za7, "authorization", 13);
	      DEFINE_STRING(BGl_string5361z00zz__httpz00,
		BgL_bgl_string5361za700za7za7_5558za7, "body", 4);
	      DEFINE_STRING(BGl_string5363z00zz__httpz00,
		BgL_bgl_string5363za700za7za7_5559za7, "connection", 10);
	      DEFINE_STRING(BGl_string5365z00zz__httpz00,
		BgL_bgl_string5365za700za7za7_5560za7, "content-type", 12);
	      DEFINE_STRING(BGl_string5367z00zz__httpz00,
		BgL_bgl_string5367za700za7za7_5561za7, "header", 6);
	      DEFINE_STRING(BGl_string5369z00zz__httpz00,
		BgL_bgl_string5369za700za7za7_5562za7, "host", 4);
	      DEFINE_STRING(BGl_string5371z00zz__httpz00,
		BgL_bgl_string5371za700za7za7_5563za7, "http-version", 12);
	      DEFINE_STRING(BGl_string5373z00zz__httpz00,
		BgL_bgl_string5373za700za7za7_5564za7, "in", 2);
	      DEFINE_STRING(BGl_string5375z00zz__httpz00,
		BgL_bgl_string5375za700za7za7_5565za7, "login", 5);
	      DEFINE_STRING(BGl_string5377z00zz__httpz00,
		BgL_bgl_string5377za700za7za7_5566za7, "method", 6);
	      DEFINE_STRING(BGl_string5379z00zz__httpz00,
		BgL_bgl_string5379za700za7za7_5567za7, "out", 3);
	      DEFINE_STRING(BGl_string5381z00zz__httpz00,
		BgL_bgl_string5381za700za7za7_5568za7, "password", 8);
	      DEFINE_STRING(BGl_string5383z00zz__httpz00,
		BgL_bgl_string5383za700za7za7_5569za7, "path", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62httpzd2redirectionzd2errorzd2envz62zz__httpz00,
		BgL_bgl__makeza7d2za762httpza75570za7,
		BGl__makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00, 0L, BUNSPEC, 6);
	      DEFINE_STRING(BGl_string5385z00zz__httpz00,
		BgL_bgl_string5385za700za7za7_5571za7, "port", 4);
	      DEFINE_STRING(BGl_string5387z00zz__httpz00,
		BgL_bgl_string5387za700za7za7_5572za7, "protocol", 8);
	      DEFINE_STRING(BGl_string5400z00zz__httpz00,
		BgL_bgl_string5400za700za7za7_5573za7, ":", 1);
	      DEFINE_STRING(BGl_string5389z00zz__httpz00,
		BgL_bgl_string5389za700za7za7_5574za7, "proxy", 5);
	      DEFINE_STRING(BGl_string5401z00zz__httpz00,
		BgL_bgl_string5401za700za7za7_5575za7, " ", 1);
	      DEFINE_STRING(BGl_string5391z00zz__httpz00,
		BgL_bgl_string5391za700za7za7_5576za7, "socket", 6);
	      DEFINE_STRING(BGl_string5402z00zz__httpz00,
		BgL_bgl_string5402za700za7za7_5577za7, "\r\n", 2);
	      DEFINE_STRING(BGl_string5403z00zz__httpz00,
		BgL_bgl_string5403za700za7za7_5578za7, "Host: ", 6);
	      DEFINE_STRING(BGl_string5393z00zz__httpz00,
		BgL_bgl_string5393za700za7za7_5579za7, "timeout", 7);
	      DEFINE_STRING(BGl_string5404z00zz__httpz00,
		BgL_bgl_string5404za700za7za7_5580za7, ": ", 2);
	      DEFINE_STRING(BGl_string5405z00zz__httpz00,
		BgL_bgl_string5405za700za7za7_5581za7, "Authorization: Basic ", 21);
	      DEFINE_STRING(BGl_string5395z00zz__httpz00,
		BgL_bgl_string5395za700za7za7_5582za7, "username", 8);
	      DEFINE_STRING(BGl_string5406z00zz__httpz00,
		BgL_bgl_string5406za700za7za7_5583za7, "Authorization: ", 15);
	      DEFINE_STRING(BGl_string5396z00zz__httpz00,
		BgL_bgl_string5396za700za7za7_5584za7,
		"Missing either \"host\" or \"port\" argument", 40);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2sendzd2chunkszd2envzd2zz__httpz00,
		BgL_bgl__httpza7d2sendza7d2c5585z00,
		BGl__httpzd2sendzd2chunksz00zz__httpz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string5407z00zz__httpz00,
		BgL_bgl_string5407za700za7za7_5586za7, "Connection: ", 12);
	      DEFINE_STRING(BGl_string5397z00zz__httpz00,
		BgL_bgl_string5397za700za7za7_5587za7, "Missing \"out\" argument", 22);
	      DEFINE_STRING(BGl_string5398z00zz__httpz00,
		BgL_bgl_string5398za700za7za7_5588za7,
		"Missing either \"in\" or \"socket\" argument", 40);
	      DEFINE_STRING(BGl_string5409z00zz__httpz00,
		BgL_bgl_string5409za700za7za7_5589za7, "post", 4);
	      DEFINE_STRING(BGl_string5399z00zz__httpz00,
		BgL_bgl_string5399za700za7za7_5590za7, " http://", 8);
	      DEFINE_STRING(BGl_string5411z00zz__httpz00,
		BgL_bgl_string5411za700za7za7_5591za7, "multipart/form-data", 19);
	      DEFINE_STRING(BGl_string5412z00zz__httpz00,
		BgL_bgl_string5412za700za7za7_5592za7, "Content-Length: ", 16);
	      DEFINE_STRING(BGl_string5413z00zz__httpz00,
		BgL_bgl_string5413za700za7za7_5593za7,
		"Content-Type: multipart/form-data; boundary=", 44);
	      DEFINE_STRING(BGl_string5414z00zz__httpz00,
		BgL_bgl_string5414za700za7za7_5594za7, "application/x-www-form-urlencoded",
		33);
	      DEFINE_STRING(BGl_string5415z00zz__httpz00,
		BgL_bgl_string5415za700za7za7_5595za7, "Content-Type: ", 14);
	      DEFINE_STRING(BGl_string5417z00zz__httpz00,
		BgL_bgl_string5417za700za7za7_5596za7, "inet", 4);
	      DEFINE_STRING(BGl_string5418z00zz__httpz00,
		BgL_bgl_string5418za700za7za7_5597za7, "integer", 7);
	      DEFINE_STRING(BGl_string5420z00zz__httpz00,
		BgL_bgl_string5420za700za7za7_5598za7, "--", 2);
	      DEFINE_STRING(BGl_string5419z00zz__httpz00,
		BgL_bgl_string5419za700za7za7_5599za7, "string", 6);
	      DEFINE_STRING(BGl_string5421z00zz__httpz00,
		BgL_bgl_string5421za700za7za7_5600za7,
		"Content-Disposition: form-data; name=\"", 38);
	      DEFINE_STRING(BGl_string5422z00zz__httpz00,
		BgL_bgl_string5422za700za7za7_5601za7, "\";", 2);
	      DEFINE_STRING(BGl_string5423z00zz__httpz00,
		BgL_bgl_string5423za700za7za7_5602za7, "\"", 1);
	      DEFINE_STRING(BGl_string5424z00zz__httpz00,
		BgL_bgl_string5424za700za7za7_5603za7, "0123456789abcdef", 16);
	      DEFINE_STRING(BGl_string5425z00zz__httpz00,
		BgL_bgl_string5425za700za7za7_5604za7, "", 0);
	      DEFINE_STRING(BGl_string5426z00zz__httpz00,
		BgL_bgl_string5426za700za7za7_5605za7, "}", 1);
	      DEFINE_STRING(BGl_string5427z00zz__httpz00,
		BgL_bgl_string5427za700za7za7_5606za7, "{", 1);
	      DEFINE_STRING(BGl_string5428z00zz__httpz00,
		BgL_bgl_string5428za700za7za7_5607za7,
		"/tmp/bigloo/runtime/Unsafe/http.scm", 35);
	      DEFINE_STRING(BGl_string5430z00zz__httpz00,
		BgL_bgl_string5430za700za7za7_5608za7, "input-port", 10);
	      DEFINE_STRING(BGl_string5429z00zz__httpz00,
		BgL_bgl_string5429za700za7za7_5609za7, "_http-parse-status-line", 23);
	      DEFINE_STRING(BGl_string5431z00zz__httpz00,
		BgL_bgl_string5431za700za7za7_5610za7, "_http-read-line", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2readzd2linezd2envzd2zz__httpz00,
		BgL_bgl__httpza7d2readza7d2l5611z00, BGl__httpzd2readzd2linez00zz__httpz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5433z00zz__httpz00,
		BgL_bgl_string5433za700za7za7_5612za7, "http-parse-header", 17);
	      DEFINE_STRING(BGl_string5434z00zz__httpz00,
		BgL_bgl_string5434za700za7za7_5613za7, "Illegal characters: ~a", 22);
	      DEFINE_STRING(BGl_string5436z00zz__httpz00,
		BgL_bgl_string5436za700za7za7_5614za7, "content-length", 14);
	      DEFINE_STRING(BGl_string5438z00zz__httpz00,
		BgL_bgl_string5438za700za7za7_5615za7, "transfer-encoding", 17);
	      DEFINE_STRING(BGl_string5440z00zz__httpz00,
		BgL_bgl_string5440za700za7za7_5616za7, "proxy-authorization", 19);
	      DEFINE_STRING(BGl_string5442z00zz__httpz00,
		BgL_bgl_string5442za700za7za7_5617za7, "expect", 6);
	      DEFINE_STRING(BGl_string5443z00zz__httpz00,
		BgL_bgl_string5443za700za7za7_5618za7, "100-continue", 12);
	      DEFINE_STRING(BGl_string5444z00zz__httpz00,
		BgL_bgl_string5444za700za7za7_5619za7, "HTTP/1.1 100 Continue\r\n\r\n", 25);
	      DEFINE_STRING(BGl_string5445z00zz__httpz00,
		BgL_bgl_string5445za700za7za7_5620za7,
		"HTTP/1.1 417 Expectation Failed\r\n\r\n", 35);
	      DEFINE_STRING(BGl_string5447z00zz__httpz00,
		BgL_bgl_string5447za700za7za7_5621za7, "expect-header", 13);
	      DEFINE_STRING(BGl_string5448z00zz__httpz00,
		BgL_bgl_string5448za700za7za7_5622za7, "Expectation failed (~a)", 23);
	      DEFINE_STRING(BGl_string5450z00zz__httpz00,
		BgL_bgl_string5450za700za7za7_5623za7, "_http-parse-header", 18);
	      DEFINE_STRING(BGl_string5451z00zz__httpz00,
		BgL_bgl_string5451za700za7za7_5624za7, "output-port", 11);
	      DEFINE_STRING(BGl_string5453z00zz__httpz00,
		BgL_bgl_string5453za700za7za7_5625za7, "http-parse-response", 19);
	      DEFINE_STRING(BGl_string5454z00zz__httpz00,
		BgL_bgl_string5454za700za7za7_5626za7, "Bad status code: ~a", 19);
	      DEFINE_STRING(BGl_string5456z00zz__httpz00,
		BgL_bgl_string5456za700za7za7_5627za7, "chunked", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2parsezd2headerzd2envzd2zz__httpz00,
		BgL_bgl__httpza7d2parseza7d25628z00,
		BGl__httpzd2parsezd2headerz00zz__httpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5458z00zz__httpz00,
		BgL_bgl_string5458za700za7za7_5629za7, "location", 8);
	      DEFINE_STRING(BGl_string5460z00zz__httpz00,
		BgL_bgl_string5460za700za7za7_5630za7, "http-parse-body", 15);
	      DEFINE_STRING(BGl_string5461z00zz__httpz00,
		BgL_bgl_string5461za700za7za7_5631za7, "No URL for redirection!", 23);
	      DEFINE_STRING(BGl_string5462z00zz__httpz00,
		BgL_bgl_string5462za700za7za7_5632za7, "_http-parse-response", 20);
	      DEFINE_STRING(BGl_string5463z00zz__httpz00,
		BgL_bgl_string5463za700za7za7_5633za7, "procedure", 9);
	      DEFINE_STRING(BGl_string5465z00zz__httpz00,
		BgL_bgl_string5465za700za7za7_5634za7, "_http-response-body->port", 25);
	      DEFINE_STRING(BGl_string5467z00zz__httpz00,
		BgL_bgl_string5467za700za7za7_5635za7, "http-read-crlf", 14);
	      DEFINE_STRING(BGl_string5468z00zz__httpz00,
		BgL_bgl_string5468za700za7za7_5636za7, "_http-read-crlf", 15);
	      DEFINE_STRING(BGl_string5470z00zz__httpz00,
		BgL_bgl_string5470za700za7za7_5637za7, "size", 4);
	      DEFINE_STRING(BGl_string5471z00zz__httpz00,
		BgL_bgl_string5471za700za7za7_5638za7, "_http-chunks->procedure", 23);
	      DEFINE_STRING(BGl_string5473z00zz__httpz00,
		BgL_bgl_string5473za700za7za7_5639za7, "eof", 3);
	      DEFINE_STRING(BGl_string5475z00zz__httpz00,
		BgL_bgl_string5475za700za7za7_5640za7, "trailer", 7);
	      DEFINE_STRING(BGl_string5477z00zz__httpz00,
		BgL_bgl_string5477za700za7za7_5641za7, "chunk", 5);
	      DEFINE_STRING(BGl_string5478z00zz__httpz00,
		BgL_bgl_string5478za700za7za7_5642za7, "_http-chunks->port", 18);
	      DEFINE_STRING(BGl_string5479z00zz__httpz00,
		BgL_bgl_string5479za700za7za7_5643za7, "_http-send-chunks", 17);
	      DEFINE_STRING(BGl_string5481z00zz__httpz00,
		BgL_bgl_string5481za700za7za7_5644za7, "&http-error", 11);
	      DEFINE_STRING(BGl_string5483z00zz__httpz00,
		BgL_bgl_string5483za700za7za7_5645za7, "&http-redirection-error", 23);
	      DEFINE_STRING(BGl_string5485z00zz__httpz00,
		BgL_bgl_string5485za700za7za7_5646za7, "&http-status-error", 18);
	      DEFINE_STRING(BGl_string5487z00zz__httpz00,
		BgL_bgl_string5487za700za7za7_5647za7, "status", 6);
	      DEFINE_STRING(BGl_string5500z00zz__httpz00,
		BgL_bgl_string5500za700za7za7_5648za7, "_fill-&http-status-error!", 25);
	      DEFINE_STRING(BGl_string5489z00zz__httpz00,
		BgL_bgl_string5489za700za7za7_5649za7, "&http-redirection", 17);
	      DEFINE_STRING(BGl_string5501z00zz__httpz00,
		BgL_bgl_string5501za700za7za7_5650za7, "_&http-status-error-status", 26);
	      DEFINE_STRING(BGl_string5502z00zz__httpz00,
		BgL_bgl_string5502za700za7za7_5651za7, "_fill-&http-redirection-error!",
		30);
	      DEFINE_STRING(BGl_string5492z00zz__httpz00,
		BgL_bgl_string5492za700za7za7_5652za7, "url", 3);
	      DEFINE_STRING(BGl_string5503z00zz__httpz00,
		BgL_bgl_string5503za700za7za7_5653za7, "_fill-&http-error!", 18);
	      DEFINE_STRING(BGl_string5493z00zz__httpz00,
		BgL_bgl_string5493za700za7za7_5654za7, "_make-&http-redirection", 23);
	      DEFINE_STRING(BGl_string5494z00zz__httpz00,
		BgL_bgl_string5494za700za7za7_5655za7, "bstring", 7);
	      DEFINE_STRING(BGl_string5505z00zz__httpz00,
		BgL_bgl_string5505za700za7za7_5656za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5495z00zz__httpz00,
		BgL_bgl_string5495za700za7za7_5657za7, "_fill-&http-redirection!", 24);
	      DEFINE_STRING(BGl_string5496z00zz__httpz00,
		BgL_bgl_string5496za700za7za7_5658za7, "_&http-redirection-port", 23);
	      DEFINE_STRING(BGl_string5507z00zz__httpz00,
		BgL_bgl_string5507za700za7za7_5659za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5497z00zz__httpz00,
		BgL_bgl_string5497za700za7za7_5660za7, "_&http-redirection-url", 22);
	      DEFINE_STRING(BGl_string5498z00zz__httpz00,
		BgL_bgl_string5498za700za7za7_5661za7, "_make-&http-status-error", 24);
	      DEFINE_STRING(BGl_string5499z00zz__httpz00,
		BgL_bgl_string5499za700za7za7_5662za7, "int", 3);
	      DEFINE_STRING(BGl_string5514z00zz__httpz00,
		BgL_bgl_string5514za700za7za7_5663za7, "__http", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62httpzd2redirectionzd2errorz12zd2envz70zz__httpz00,
		BgL_bgl__fillza7d2za762httpza75664za7,
		BGl__fillzd2z62httpzd2redirectionzd2errorz12za2zz__httpz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2statuszd2errorzd2nilzd2envz62zz__httpz00,
		BgL_bgl__za762httpza7d2statu5665z00,
		BGl__z62httpzd2statuszd2errorzd2nilzb0zz__httpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2urlzd2envzb0zz__httpz00,
		BgL_bgl__za762httpza7d2redir5666z00,
		BGl__z62httpzd2redirectionzd2urlz62zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2parsezd2responsezd2envzd2zz__httpz00,
		BgL_bgl__httpza7d2parseza7d25667z00,
		BGl__httpzd2parsezd2responsez00zz__httpz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2readzd2crlfzd2envzd2zz__httpz00,
		BgL_bgl__httpza7d2readza7d2c5668z00, BGl__httpzd2readzd2crlfz00zz__httpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62httpzd2redirectionzd2envze2zz__httpz00,
		BgL_bgl__za752allocateza7d2za75669za7,
		BGl__z52allocatezd2z62httpzd2redirectionz30zz__httpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2nilzd2envzb0zz__httpz00,
		BgL_bgl__za762httpza7d2redir5670z00,
		BGl__z62httpzd2redirectionzd2nilz62zz__httpz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2envzd2zz__httpz00,
		BgL_bgl__httpza700za7za7__http5671za7, opt_generic_entry,
		BGl__httpz00zz__httpz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_httpzd2parsezd2statuszd2linezd2envz00zz__httpz00,
		BgL_bgl__httpza7d2parseza7d25672z00,
		BGl__httpzd2parsezd2statuszd2linezd2zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2chunkszd2ze3portzd2envz31zz__httpz00,
		BgL_bgl__httpza7d2chunksza7d5673z00,
		BGl__httpzd2chunkszd2ze3portze3zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62httpzd2redirectionzd2errorzd2envz30zz__httpz00,
		BgL_bgl__za752allocateza7d2za75674za7,
		BGl__z52allocatezd2z62httpzd2redirectionzd2errorze2zz__httpz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2errorzf3zd2envz43zz__httpz00,
		BgL_bgl__za762httpza7d2redir5675z00,
		BGl__z62httpzd2redirectionzd2errorzf3z91zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62httpzd2redirectionzd2envzb0zz__httpz00,
		BgL_bgl__makeza7d2za762httpza75676za7,
		BGl__makezd2z62httpzd2redirectionz62zz__httpz00, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2statuszd2errorzd2statuszd2envz62zz__httpz00,
		BgL_bgl__za762httpza7d2statu5677z00,
		BGl__z62httpzd2statuszd2errorzd2statuszb0zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2z62httpzd2errorzd2envzb0zz__httpz00,
		BgL_bgl__makeza7d2za762httpza75678za7,
		BGl__makezd2z62httpzd2errorz62zz__httpz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2errorzd2nilzd2envz62zz__httpz00,
		BgL_bgl__za762httpza7d2redir5679z00,
		BGl__z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62httpzd2redirectionz12zd2envza2zz__httpz00,
		BgL_bgl__fillza7d2za762httpza75680za7,
		BGl__fillzd2z62httpzd2redirectionz12z70zz__httpz00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62httpzd2errorzf3zd2envz91zz__httpz00,
		BgL_bgl__za762httpza7d2error5681z00, BGl__z62httpzd2errorzf3z43zz__httpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzf3zd2envz91zz__httpz00,
		BgL_bgl__za762httpza7d2redir5682z00,
		BGl__z62httpzd2redirectionzf3z43zz__httpz00, 0L, BUNSPEC, 1);
	      DEFINE_ELONG(BGl_elong5449z00zz__httpz00,
		BgL_bgl_elong5449za700za7za7__5683za7, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2z62httpzd2errorz12zd2envza2zz__httpz00,
		BgL_bgl__fillza7d2za762httpza75684za7,
		BGl__fillzd2z62httpzd2errorz12z70zz__httpz00, 0L, BUNSPEC, 7);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z62httpzd2redirectionzd2portzd2envzb0zz__httpz00,
		BgL_bgl__za762httpza7d2redir5685z00,
		BGl__z62httpzd2redirectionzd2portz62zz__httpz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62httpzd2errorzd2envze2zz__httpz00,
		BgL_bgl__za752allocateza7d2za75686za7,
		BGl__z52allocatezd2z62httpzd2errorz30zz__httpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2z62httpzd2statuszd2errorzd2envz30zz__httpz00,
		BgL_bgl__za752allocateza7d2za75687za7,
		BGl__z52allocatezd2z62httpzd2statuszd2errorze2zz__httpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2z62httpzd2statuszd2errorzd2envz62zz__httpz00,
		BgL_bgl__makeza7d2za762httpza75688za7,
		BGl__makezd2z62httpzd2statuszd2errorzb0zz__httpz00, 0L, BUNSPEC, 7);
	extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5325z00zz__httpz00,
		BgL_bgl_za7c3anonymousza7a325689z00,
		BGl_zc3anonymousza32750ze3z83zz__httpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_httpzd2chunkszd2ze3procedurezd2envz31zz__httpz00,
		BgL_bgl__httpza7d2chunksza7d5690z00,
		BGl__httpzd2chunkszd2ze3procedureze3zz__httpz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62httpzd2errorzd2nilzd2envzb0zz__httpz00,
		BgL_bgl__za762httpza7d2error5691z00,
		BGl__z62httpzd2errorzd2nilz62zz__httpz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long
		BgL_checksumz00_9906, char *BgL_fromz00_9907)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__httpz00))
				{
					BGl_requirezd2initializa7ationz75zz__httpz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__httpz00();
					BGl_importedzd2moduleszd2initz00zz__httpz00();
					BGl_objectzd2initzd2zz__httpz00();
					BGl_methodzd2initzd2zz__httpz00();
					BGl_toplevelzd2initzd2zz__httpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			BGl_symbol5326z00zz__httpz00 =
				bstring_to_symbol(BGl_string5327z00zz__httpz00);
			BGl_symbol5335z00zz__httpz00 =
				bstring_to_symbol(BGl_string5336z00zz__httpz00);
			BGl_symbol5337z00zz__httpz00 =
				bstring_to_symbol(BGl_string5338z00zz__httpz00);
			BGl_symbol5339z00zz__httpz00 =
				bstring_to_symbol(BGl_string5340z00zz__httpz00);
			BGl_keyword5346z00zz__httpz00 =
				bstring_to_keyword(BGl_string5347z00zz__httpz00);
			BGl_list5345z00zz__httpz00 =
				MAKE_PAIR(BGl_keyword5346z00zz__httpz00,
				MAKE_PAIR(BGl_string5348z00zz__httpz00, BNIL));
			BGl_list5344z00zz__httpz00 = MAKE_PAIR(BGl_list5345z00zz__httpz00, BNIL);
			BGl_symbol5351z00zz__httpz00 =
				bstring_to_symbol(BGl_string5352z00zz__httpz00);
			BGl_symbol5354z00zz__httpz00 =
				bstring_to_symbol(BGl_string5355z00zz__httpz00);
			BGl_keyword5356z00zz__httpz00 =
				bstring_to_keyword(BGl_string5357z00zz__httpz00);
			BGl_keyword5358z00zz__httpz00 =
				bstring_to_keyword(BGl_string5359z00zz__httpz00);
			BGl_keyword5360z00zz__httpz00 =
				bstring_to_keyword(BGl_string5361z00zz__httpz00);
			BGl_keyword5362z00zz__httpz00 =
				bstring_to_keyword(BGl_string5363z00zz__httpz00);
			BGl_keyword5364z00zz__httpz00 =
				bstring_to_keyword(BGl_string5365z00zz__httpz00);
			BGl_keyword5366z00zz__httpz00 =
				bstring_to_keyword(BGl_string5367z00zz__httpz00);
			BGl_keyword5368z00zz__httpz00 =
				bstring_to_keyword(BGl_string5369z00zz__httpz00);
			BGl_keyword5370z00zz__httpz00 =
				bstring_to_keyword(BGl_string5371z00zz__httpz00);
			BGl_keyword5372z00zz__httpz00 =
				bstring_to_keyword(BGl_string5373z00zz__httpz00);
			BGl_keyword5374z00zz__httpz00 =
				bstring_to_keyword(BGl_string5375z00zz__httpz00);
			BGl_keyword5376z00zz__httpz00 =
				bstring_to_keyword(BGl_string5377z00zz__httpz00);
			BGl_keyword5378z00zz__httpz00 =
				bstring_to_keyword(BGl_string5379z00zz__httpz00);
			BGl_keyword5380z00zz__httpz00 =
				bstring_to_keyword(BGl_string5381z00zz__httpz00);
			BGl_keyword5382z00zz__httpz00 =
				bstring_to_keyword(BGl_string5383z00zz__httpz00);
			BGl_keyword5384z00zz__httpz00 =
				bstring_to_keyword(BGl_string5385z00zz__httpz00);
			BGl_keyword5386z00zz__httpz00 =
				bstring_to_keyword(BGl_string5387z00zz__httpz00);
			BGl_keyword5388z00zz__httpz00 =
				bstring_to_keyword(BGl_string5389z00zz__httpz00);
			BGl_keyword5390z00zz__httpz00 =
				bstring_to_keyword(BGl_string5391z00zz__httpz00);
			BGl_keyword5392z00zz__httpz00 =
				bstring_to_keyword(BGl_string5393z00zz__httpz00);
			BGl_keyword5394z00zz__httpz00 =
				bstring_to_keyword(BGl_string5395z00zz__httpz00);
			BGl_symbol5408z00zz__httpz00 =
				bstring_to_symbol(BGl_string5409z00zz__httpz00);
			BGl_symbol5410z00zz__httpz00 =
				bstring_to_symbol(BGl_string5411z00zz__httpz00);
			BGl_symbol5416z00zz__httpz00 =
				bstring_to_symbol(BGl_string5417z00zz__httpz00);
			BGl_symbol5432z00zz__httpz00 =
				bstring_to_symbol(BGl_string5433z00zz__httpz00);
			BGl_keyword5435z00zz__httpz00 =
				bstring_to_keyword(BGl_string5436z00zz__httpz00);
			BGl_keyword5437z00zz__httpz00 =
				bstring_to_keyword(BGl_string5438z00zz__httpz00);
			BGl_keyword5439z00zz__httpz00 =
				bstring_to_keyword(BGl_string5440z00zz__httpz00);
			BGl_keyword5441z00zz__httpz00 =
				bstring_to_keyword(BGl_string5442z00zz__httpz00);
			BGl_symbol5446z00zz__httpz00 =
				bstring_to_symbol(BGl_string5447z00zz__httpz00);
			BGl_symbol5452z00zz__httpz00 =
				bstring_to_symbol(BGl_string5453z00zz__httpz00);
			BGl_symbol5455z00zz__httpz00 =
				bstring_to_symbol(BGl_string5456z00zz__httpz00);
			BGl_keyword5457z00zz__httpz00 =
				bstring_to_keyword(BGl_string5458z00zz__httpz00);
			BGl_symbol5459z00zz__httpz00 =
				bstring_to_symbol(BGl_string5460z00zz__httpz00);
			BGl_symbol5466z00zz__httpz00 =
				bstring_to_symbol(BGl_string5467z00zz__httpz00);
			BGl_symbol5469z00zz__httpz00 =
				bstring_to_symbol(BGl_string5470z00zz__httpz00);
			BGl_symbol5472z00zz__httpz00 =
				bstring_to_symbol(BGl_string5473z00zz__httpz00);
			BGl_symbol5474z00zz__httpz00 =
				bstring_to_symbol(BGl_string5475z00zz__httpz00);
			BGl_symbol5476z00zz__httpz00 =
				bstring_to_symbol(BGl_string5477z00zz__httpz00);
			BGl_symbol5480z00zz__httpz00 =
				bstring_to_symbol(BGl_string5481z00zz__httpz00);
			BGl_symbol5482z00zz__httpz00 =
				bstring_to_symbol(BGl_string5483z00zz__httpz00);
			BGl_symbol5484z00zz__httpz00 =
				bstring_to_symbol(BGl_string5485z00zz__httpz00);
			BGl_symbol5486z00zz__httpz00 =
				bstring_to_symbol(BGl_string5487z00zz__httpz00);
			BGl_symbol5488z00zz__httpz00 =
				bstring_to_symbol(BGl_string5489z00zz__httpz00);
			BGl_symbol5490z00zz__httpz00 =
				bstring_to_symbol(BGl_string5385z00zz__httpz00);
			return (BGl_symbol5491z00zz__httpz00 =
				bstring_to_symbol(BGl_string5492z00zz__httpz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			{	/* Unsafe/http.scm 294 */
				obj_t BgL_thezd2rgczd2contextz00_1019;

				BgL_thezd2rgczd2contextz00_1019 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/http.scm 294 */
					obj_t BgL_zc3anonymousza32505ze3z83_9537;

					BgL_zc3anonymousza32505ze3z83_9537 =
						make_fx_procedure(BGl_zc3anonymousza32505ze3z83zz__httpz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32505ze3z83_9537,
						(int) (((long) 0)), BgL_thezd2rgczd2contextz00_1019);
					BGl_statuszd2linezd2grammarz00zz__httpz00 =
						BgL_zc3anonymousza32505ze3z83_9537;
			}}
			BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00 =
				BGl_proc5325z00zz__httpz00;
			return (BGl_za2bufferzd2lengthza2zd2zz__httpz00 = ((long) 8192), BUNSPEC);
		}
	}



/* <anonymous:2750> */
	obj_t BGl_zc3anonymousza32750ze3z83zz__httpz00(obj_t BgL_envz00_9538,
		obj_t BgL_inputzd2portzd2_9539, obj_t BgL_opz00_9540)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 640 */
			{
				obj_t BgL_inputzd2portzd2_1471;

				obj_t BgL_opz00_1472;

				BgL_inputzd2portzd2_1471 = BgL_inputzd2portzd2_9539;
				BgL_opz00_1472 = BgL_opz00_9540;
				{
					obj_t BgL_inputzd2portzd2_1568;

					long BgL_lastzd2matchzd2_1569;

					obj_t BgL_inputzd2portzd2_1561;

					long BgL_lastzd2matchzd2_1562;

					obj_t BgL_inputzd2portzd2_1541;

					long BgL_lastzd2matchzd2_1542;

					obj_t BgL_inputzd2portzd2_1520;

					long BgL_lastzd2matchzd2_1521;

					obj_t BgL_inputzd2portzd2_1507;

					long BgL_lastzd2matchzd2_1508;

					RGC_START_MATCH(BgL_inputzd2portzd2_1471);
					{	/* Unsafe/http.scm 640 */
						long BgL_matchz00_1664;

						BgL_inputzd2portzd2_1507 = BgL_inputzd2portzd2_1471;
						BgL_lastzd2matchzd2_1508 = ((long) 2);
					BgL_zc3anonymousza32751ze3z83_1509:
						{	/* Unsafe/http.scm 640 */
							int BgL_currentzd2charzd2_1510;

							BgL_currentzd2charzd2_1510 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1507);
							if (((long) (BgL_currentzd2charzd2_1510) == ((long) 0)))
								{	/* Unsafe/http.scm 640 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1507))
										{	/* Unsafe/http.scm 640 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1507))
												{

													goto BgL_zc3anonymousza32751ze3z83_1509;
												}
											else
												{	/* Unsafe/http.scm 640 */
													BgL_matchz00_1664 = BgL_lastzd2matchzd2_1508;
												}
										}
									else
										{	/* Unsafe/http.scm 640 */
											long BgL_newzd2matchzd2_6557;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1507);
											BgL_newzd2matchzd2_6557 = ((long) 2);
											BgL_matchz00_1664 = BgL_newzd2matchzd2_6557;
								}}
							else
								{	/* Unsafe/http.scm 640 */
									bool_t BgL_testz00_9986;

									{	/* Unsafe/http.scm 640 */
										bool_t BgL_testz00_9987;

										if (((long) (BgL_currentzd2charzd2_1510) >= ((long) 48)))
											{	/* Unsafe/http.scm 640 */
												BgL_testz00_9987 =
													((long) (BgL_currentzd2charzd2_1510) < ((long) 58));
											}
										else
											{	/* Unsafe/http.scm 640 */
												BgL_testz00_9987 = ((bool_t) 0);
											}
										if (BgL_testz00_9987)
											{	/* Unsafe/http.scm 640 */
												BgL_testz00_9986 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/http.scm 640 */
												bool_t BgL_testz00_9993;

												if (
													((long) (BgL_currentzd2charzd2_1510) >= ((long) 65)))
													{	/* Unsafe/http.scm 640 */
														BgL_testz00_9993 =
															(
															(long) (BgL_currentzd2charzd2_1510) <
															((long) 71));
													}
												else
													{	/* Unsafe/http.scm 640 */
														BgL_testz00_9993 = ((bool_t) 0);
													}
												if (BgL_testz00_9993)
													{	/* Unsafe/http.scm 640 */
														BgL_testz00_9986 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/http.scm 640 */
														if (
															((long) (BgL_currentzd2charzd2_1510) >=
																((long) 97)))
															{	/* Unsafe/http.scm 640 */
																BgL_testz00_9986 =
																	(
																	(long) (BgL_currentzd2charzd2_1510) <
																	((long) 103));
															}
														else
															{	/* Unsafe/http.scm 640 */
																BgL_testz00_9986 = ((bool_t) 0);
															}
													}
											}
									}
									if (BgL_testz00_9986)
										{	/* Unsafe/http.scm 640 */
											BgL_inputzd2portzd2_1520 = BgL_inputzd2portzd2_1507;
											BgL_lastzd2matchzd2_1521 = BgL_lastzd2matchzd2_1508;
										BgL_zc3anonymousza32760ze3z83_1522:
											{	/* Unsafe/http.scm 640 */
												long BgL_newzd2matchzd2_1523;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1520);
												BgL_newzd2matchzd2_1523 = ((long) 2);
												{	/* Unsafe/http.scm 640 */
													int BgL_currentzd2charzd2_1524;

													BgL_currentzd2charzd2_1524 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1520);
													if (
														((long) (BgL_currentzd2charzd2_1524) == ((long) 0)))
														{	/* Unsafe/http.scm 640 */
															bool_t BgL_testz00_10009;

															{	/* Unsafe/http.scm 640 */
																bool_t BgL_res5126z00_6583;

																{	/* Unsafe/http.scm 640 */
																	obj_t BgL_inputzd2portzd2_6579;

																	BgL_inputzd2portzd2_6579 =
																		BgL_inputzd2portzd2_1520;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_6579))
																		{	/* Unsafe/http.scm 640 */
																			BgL_res5126z00_6583 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_6579);
																		}
																	else
																		{	/* Unsafe/http.scm 640 */
																			BgL_res5126z00_6583 = ((bool_t) 0);
																		}
																}
																BgL_testz00_10009 = BgL_res5126z00_6583;
															}
															if (BgL_testz00_10009)
																{

																	goto BgL_zc3anonymousza32760ze3z83_1522;
																}
															else
																{	/* Unsafe/http.scm 640 */
																	BgL_matchz00_1664 = BgL_newzd2matchzd2_1523;
																}
														}
													else
														{	/* Unsafe/http.scm 640 */
															if (
																((long) (BgL_currentzd2charzd2_1524) ==
																	((long) 59)))
																{	/* Unsafe/http.scm 640 */
																	long BgL_newzd2matchzd2_6588;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1520);
																	BgL_newzd2matchzd2_6588 = ((long) 0);
																	BgL_matchz00_1664 = BgL_newzd2matchzd2_6588;
																}
															else
																{	/* Unsafe/http.scm 640 */
																	bool_t BgL_testz00_10017;

																	{	/* Unsafe/http.scm 640 */
																		bool_t BgL_testz00_10018;

																		if (
																			((long) (BgL_currentzd2charzd2_1524) >=
																				((long) 48)))
																			{	/* Unsafe/http.scm 640 */
																				BgL_testz00_10018 =
																					(
																					(long) (BgL_currentzd2charzd2_1524) <
																					((long) 58));
																			}
																		else
																			{	/* Unsafe/http.scm 640 */
																				BgL_testz00_10018 = ((bool_t) 0);
																			}
																		if (BgL_testz00_10018)
																			{	/* Unsafe/http.scm 640 */
																				BgL_testz00_10017 = ((bool_t) 1);
																			}
																		else
																			{	/* Unsafe/http.scm 640 */
																				bool_t BgL_testz00_10024;

																				if (
																					((long) (BgL_currentzd2charzd2_1524)
																						>= ((long) 65)))
																					{	/* Unsafe/http.scm 640 */
																						BgL_testz00_10024 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1524) <
																							((long) 71));
																					}
																				else
																					{	/* Unsafe/http.scm 640 */
																						BgL_testz00_10024 = ((bool_t) 0);
																					}
																				if (BgL_testz00_10024)
																					{	/* Unsafe/http.scm 640 */
																						BgL_testz00_10017 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 640 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1524) >=
																								((long) 97)))
																							{	/* Unsafe/http.scm 640 */
																								BgL_testz00_10017 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_1524) <
																									((long) 103));
																							}
																						else
																							{	/* Unsafe/http.scm 640 */
																								BgL_testz00_10017 =
																									((bool_t) 0);
																							}
																					}
																			}
																	}
																	if (BgL_testz00_10017)
																		{	/* Unsafe/http.scm 640 */
																			BgL_inputzd2portzd2_1541 =
																				BgL_inputzd2portzd2_1520;
																			BgL_lastzd2matchzd2_1542 =
																				BgL_newzd2matchzd2_1523;
																		BgL_zc3anonymousza32773ze3z83_1543:
																			{	/* Unsafe/http.scm 640 */
																				int BgL_currentzd2charzd2_1544;

																				BgL_currentzd2charzd2_1544 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_1541);
																				if (((long) (BgL_currentzd2charzd2_1544)
																						== ((long) 0)))
																					{	/* Unsafe/http.scm 640 */
																						bool_t BgL_testz00_10039;

																						{	/* Unsafe/http.scm 640 */
																							bool_t BgL_res5127z00_6617;

																							{	/* Unsafe/http.scm 640 */
																								obj_t BgL_inputzd2portzd2_6613;

																								BgL_inputzd2portzd2_6613 =
																									BgL_inputzd2portzd2_1541;
																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_6613))
																									{	/* Unsafe/http.scm 640 */
																										BgL_res5127z00_6617 =
																											rgc_fill_buffer
																											(BgL_inputzd2portzd2_6613);
																									}
																								else
																									{	/* Unsafe/http.scm 640 */
																										BgL_res5127z00_6617 =
																											((bool_t) 0);
																									}
																							}
																							BgL_testz00_10039 =
																								BgL_res5127z00_6617;
																						}
																						if (BgL_testz00_10039)
																							{

																								goto
																									BgL_zc3anonymousza32773ze3z83_1543;
																							}
																						else
																							{	/* Unsafe/http.scm 640 */
																								BgL_matchz00_1664 =
																									BgL_lastzd2matchzd2_1542;
																							}
																					}
																				else
																					{	/* Unsafe/http.scm 640 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1544) ==
																								((long) 59)))
																							{	/* Unsafe/http.scm 640 */
																								long BgL_newzd2matchzd2_6622;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1541);
																								BgL_newzd2matchzd2_6622 =
																									((long) 0);
																								BgL_matchz00_1664 =
																									BgL_newzd2matchzd2_6622;
																							}
																						else
																							{	/* Unsafe/http.scm 640 */
																								bool_t BgL_testz00_10047;

																								{	/* Unsafe/http.scm 640 */
																									bool_t BgL_testz00_10048;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_1544)
																											>= ((long) 48)))
																										{	/* Unsafe/http.scm 640 */
																											BgL_testz00_10048 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_1544)
																												< ((long) 58));
																										}
																									else
																										{	/* Unsafe/http.scm 640 */
																											BgL_testz00_10048 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_10048)
																										{	/* Unsafe/http.scm 640 */
																											BgL_testz00_10047 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 640 */
																											bool_t BgL_testz00_10054;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_1544)
																													>= ((long) 65)))
																												{	/* Unsafe/http.scm 640 */
																													BgL_testz00_10054 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_1544)
																														< ((long) 71));
																												}
																											else
																												{	/* Unsafe/http.scm 640 */
																													BgL_testz00_10054 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_10054)
																												{	/* Unsafe/http.scm 640 */
																													BgL_testz00_10047 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/http.scm 640 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1544)
																															>= ((long) 97)))
																														{	/* Unsafe/http.scm 640 */
																															BgL_testz00_10047
																																=
																																((long)
																																(BgL_currentzd2charzd2_1544)
																																< ((long) 103));
																														}
																													else
																														{	/* Unsafe/http.scm 640 */
																															BgL_testz00_10047
																																= ((bool_t) 0);
																														}
																												}
																										}
																								}
																								if (BgL_testz00_10047)
																									{

																										goto
																											BgL_zc3anonymousza32773ze3z83_1543;
																									}
																								else
																									{	/* Unsafe/http.scm 640 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1544)
																												== ((long) 13)))
																											{	/* Unsafe/http.scm 640 */
																												BgL_inputzd2portzd2_1561
																													=
																													BgL_inputzd2portzd2_1541;
																												BgL_lastzd2matchzd2_1562
																													=
																													BgL_lastzd2matchzd2_1542;
																											BgL_zc3anonymousza32786ze3z83_1563:
																												{	/* Unsafe/http.scm 640 */
																													int
																														BgL_currentzd2charzd2_1564;
																													BgL_currentzd2charzd2_1564
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_1561);
																													if (((long)
																															(BgL_currentzd2charzd2_1564)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 640 */
																															bool_t
																																BgL_testz00_10072;
																															{	/* Unsafe/http.scm 640 */
																																bool_t
																																	BgL_res5128z00_6651;
																																{	/* Unsafe/http.scm 640 */
																																	obj_t
																																		BgL_inputzd2portzd2_6647;
																																	BgL_inputzd2portzd2_6647
																																		=
																																		BgL_inputzd2portzd2_1561;
																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_6647))
																																		{	/* Unsafe/http.scm 640 */
																																			BgL_res5128z00_6651
																																				=
																																				rgc_fill_buffer
																																				(BgL_inputzd2portzd2_6647);
																																		}
																																	else
																																		{	/* Unsafe/http.scm 640 */
																																			BgL_res5128z00_6651
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																																BgL_testz00_10072
																																	=
																																	BgL_res5128z00_6651;
																															}
																															if (BgL_testz00_10072)
																																{

																																	goto
																																		BgL_zc3anonymousza32786ze3z83_1563;
																																}
																															else
																																{	/* Unsafe/http.scm 640 */
																																	BgL_matchz00_1664
																																		=
																																		BgL_lastzd2matchzd2_1562;
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 640 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1564)
																																	==
																																	((long) 10)))
																																{	/* Unsafe/http.scm 640 */
																																	long
																																		BgL_newzd2matchzd2_6656;
																																	RGC_STOP_MATCH
																																		(BgL_inputzd2portzd2_1561);
																																	BgL_newzd2matchzd2_6656
																																		=
																																		((long) 1);
																																	BgL_matchz00_1664
																																		=
																																		BgL_newzd2matchzd2_6656;
																																}
																															else
																																{	/* Unsafe/http.scm 640 */
																																	BgL_matchz00_1664
																																		=
																																		BgL_lastzd2matchzd2_1562;
																																}
																														}
																												}
																											}
																										else
																											{	/* Unsafe/http.scm 640 */
																												bool_t
																													BgL_testz00_10080;
																												if (((long)
																														(BgL_currentzd2charzd2_1544)
																														== ((long) 9)))
																													{	/* Unsafe/http.scm 640 */
																														BgL_testz00_10080 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/http.scm 640 */
																														BgL_testz00_10080 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1544)
																															== ((long) 32));
																													}
																												if (BgL_testz00_10080)
																													{	/* Unsafe/http.scm 640 */
																														BgL_inputzd2portzd2_1568
																															=
																															BgL_inputzd2portzd2_1541;
																														BgL_lastzd2matchzd2_1569
																															=
																															BgL_lastzd2matchzd2_1542;
																													BgL_zc3anonymousza32790ze3z83_1570:
																														{	/* Unsafe/http.scm 640 */
																															int
																																BgL_currentzd2charzd2_1571;
																															BgL_currentzd2charzd2_1571
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_1568);
																															if (((long)
																																	(BgL_currentzd2charzd2_1571)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/http.scm 640 */
																																	bool_t
																																		BgL_testz00_10090;
																																	{	/* Unsafe/http.scm 640 */
																																		bool_t
																																			BgL_res5129z00_6665;
																																		{	/* Unsafe/http.scm 640 */
																																			obj_t
																																				BgL_inputzd2portzd2_6661;
																																			BgL_inputzd2portzd2_6661
																																				=
																																				BgL_inputzd2portzd2_1568;
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_6661))
																																				{	/* Unsafe/http.scm 640 */
																																					BgL_res5129z00_6665
																																						=
																																						rgc_fill_buffer
																																						(BgL_inputzd2portzd2_6661);
																																				}
																																			else
																																				{	/* Unsafe/http.scm 640 */
																																					BgL_res5129z00_6665
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		BgL_testz00_10090
																																			=
																																			BgL_res5129z00_6665;
																																	}
																																	if (BgL_testz00_10090)
																																		{

																																			goto
																																				BgL_zc3anonymousza32790ze3z83_1570;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 640 */
																																			BgL_matchz00_1664
																																				=
																																				BgL_lastzd2matchzd2_1569;
																																		}
																																}
																															else
																																{	/* Unsafe/http.scm 640 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1571)
																																			==
																																			((long)
																																				59)))
																																		{	/* Unsafe/http.scm 640 */
																																			long
																																				BgL_newzd2matchzd2_6670;
																																			RGC_STOP_MATCH
																																				(BgL_inputzd2portzd2_1568);
																																			BgL_newzd2matchzd2_6670
																																				=
																																				((long)
																																				0);
																																			BgL_matchz00_1664
																																				=
																																				BgL_newzd2matchzd2_6670;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 640 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1571)
																																					==
																																					((long) 13)))
																																				{
																																					long
																																						BgL_lastzd2matchzd2_10102;
																																					obj_t
																																						BgL_inputzd2portzd2_10101;
																																					BgL_inputzd2portzd2_10101
																																						=
																																						BgL_inputzd2portzd2_1568;
																																					BgL_lastzd2matchzd2_10102
																																						=
																																						BgL_lastzd2matchzd2_1569;
																																					BgL_lastzd2matchzd2_1562
																																						=
																																						BgL_lastzd2matchzd2_10102;
																																					BgL_inputzd2portzd2_1561
																																						=
																																						BgL_inputzd2portzd2_10101;
																																					goto
																																						BgL_zc3anonymousza32786ze3z83_1563;
																																				}
																																			else
																																				{	/* Unsafe/http.scm 640 */
																																					bool_t
																																						BgL_testz00_10103;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_1571)
																																							==
																																							((long) 9)))
																																						{	/* Unsafe/http.scm 640 */
																																							BgL_testz00_10103
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/http.scm 640 */
																																							BgL_testz00_10103
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_1571)
																																								==
																																								((long) 32));
																																						}
																																					if (BgL_testz00_10103)
																																						{

																																							goto
																																								BgL_zc3anonymousza32790ze3z83_1570;
																																						}
																																					else
																																						{	/* Unsafe/http.scm 640 */
																																							BgL_matchz00_1664
																																								=
																																								BgL_lastzd2matchzd2_1569;
																																						}
																																				}
																																		}
																																}
																														}
																													}
																												else
																													{	/* Unsafe/http.scm 640 */
																														BgL_matchz00_1664 =
																															BgL_lastzd2matchzd2_1542;
																													}
																											}
																									}
																							}
																					}
																			}
																		}
																	else
																		{	/* Unsafe/http.scm 640 */
																			if (
																				((long) (BgL_currentzd2charzd2_1524) ==
																					((long) 13)))
																				{
																					long BgL_lastzd2matchzd2_10113;

																					obj_t BgL_inputzd2portzd2_10112;

																					BgL_inputzd2portzd2_10112 =
																						BgL_inputzd2portzd2_1520;
																					BgL_lastzd2matchzd2_10113 =
																						BgL_newzd2matchzd2_1523;
																					BgL_lastzd2matchzd2_1562 =
																						BgL_lastzd2matchzd2_10113;
																					BgL_inputzd2portzd2_1561 =
																						BgL_inputzd2portzd2_10112;
																					goto
																						BgL_zc3anonymousza32786ze3z83_1563;
																				}
																			else
																				{	/* Unsafe/http.scm 640 */
																					bool_t BgL_testz00_10114;

																					if (
																						((long) (BgL_currentzd2charzd2_1524)
																							== ((long) 9)))
																						{	/* Unsafe/http.scm 640 */
																							BgL_testz00_10114 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/http.scm 640 */
																							BgL_testz00_10114 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1524) ==
																								((long) 32));
																						}
																					if (BgL_testz00_10114)
																						{
																							long BgL_lastzd2matchzd2_10121;

																							obj_t BgL_inputzd2portzd2_10120;

																							BgL_inputzd2portzd2_10120 =
																								BgL_inputzd2portzd2_1520;
																							BgL_lastzd2matchzd2_10121 =
																								BgL_newzd2matchzd2_1523;
																							BgL_lastzd2matchzd2_1569 =
																								BgL_lastzd2matchzd2_10121;
																							BgL_inputzd2portzd2_1568 =
																								BgL_inputzd2portzd2_10120;
																							goto
																								BgL_zc3anonymousza32790ze3z83_1570;
																						}
																					else
																						{	/* Unsafe/http.scm 640 */
																							BgL_matchz00_1664 =
																								BgL_newzd2matchzd2_1523;
																						}
																				}
																		}
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/http.scm 640 */
											long BgL_newzd2matchzd2_6573;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1507);
											BgL_newzd2matchzd2_6573 = ((long) 2);
											BgL_matchz00_1664 = BgL_newzd2matchzd2_6573;
						}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1471);
						switch (BgL_matchz00_1664)
							{
							case ((long) 2):

								{	/* Unsafe/http.scm 665 */
									obj_t BgL_c1z00_1668;

									{	/* Unsafe/http.scm 640 */
										bool_t BgL_testz00_10124;

										{	/* Unsafe/http.scm 640 */
											long BgL_arg2859z00_1653;

											BgL_arg2859z00_1653 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1471);
											BgL_testz00_10124 = (BgL_arg2859z00_1653 == ((long) 0));
										}
										if (BgL_testz00_10124)
											{	/* Unsafe/http.scm 640 */
												BgL_c1z00_1668 = BCNST(256);
											}
										else
											{	/* Unsafe/http.scm 640 */
												obj_t BgL_inputzd2portzd2_6716;

												BgL_inputzd2portzd2_6716 = BgL_inputzd2portzd2_1471;
												BgL_c1z00_1668 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_6716));
											}
									}
									{	/* Unsafe/http.scm 665 */
										obj_t BgL_c2z00_1669;

										BgL_c2z00_1669 =
											BGl_readzd2charzd2zz__r4_input_6_10_2z00
											(BgL_inputzd2portzd2_1471);
										{	/* Unsafe/http.scm 666 */
											obj_t BgL_c3z00_1670;

											BgL_c3z00_1670 =
												BGl_readzd2charzd2zz__r4_input_6_10_2z00
												(BgL_inputzd2portzd2_1471);
											{	/* Unsafe/http.scm 667 */
												obj_t BgL_c4z00_1671;

												BgL_c4z00_1671 =
													BGl_readzd2charzd2zz__r4_input_6_10_2z00
													(BgL_inputzd2portzd2_1471);
												{	/* Unsafe/http.scm 668 */
													obj_t BgL_c5z00_1672;

													BgL_c5z00_1672 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_inputzd2portzd2_1471);
													{	/* Unsafe/http.scm 669 */

														{	/* Llib/object.scm 90 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_arg2869z00_1673;
															{	/* Llib/object.scm 90 */
																obj_t BgL_arg2870z00_1674;

																obj_t BgL_arg2871z00_1675;

																obj_t BgL_arg2873z00_1677;

																{	/* Llib/object.scm 90 */

																	{	/* Llib/object.scm 90 */

																		BgL_arg2870z00_1674 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																	}
																}
																BgL_arg2871z00_1675 =
																	BGl_symbol5326z00zz__httpz00;
																{	/* Unsafe/http.scm 673 */
																	bool_t BgL_testz00_10134;

																	if (EOF_OBJECTP(BgL_c1z00_1668))
																		{	/* Unsafe/http.scm 673 */
																			BgL_testz00_10134 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/http.scm 673 */
																			if (EOF_OBJECTP(BgL_c2z00_1669))
																				{	/* Unsafe/http.scm 674 */
																					BgL_testz00_10134 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/http.scm 674 */
																					if (EOF_OBJECTP(BgL_c3z00_1670))
																						{	/* Unsafe/http.scm 675 */
																							BgL_testz00_10134 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/http.scm 675 */
																							if (EOF_OBJECTP(BgL_c4z00_1671))
																								{	/* Unsafe/http.scm 676 */
																									BgL_testz00_10134 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/http.scm 676 */
																									BgL_testz00_10134 =
																										EOF_OBJECTP(BgL_c5z00_1672);
																								}
																						}
																				}
																		}
																	if (BgL_testz00_10134)
																		{	/* Unsafe/http.scm 673 */
																			BgL_arg2873z00_1677 =
																				BGl_string5328z00zz__httpz00;
																		}
																	else
																		{	/* Unsafe/http.scm 679 */
																			obj_t BgL_arg2875z00_1680;

																			{	/* Unsafe/http.scm 679 */
																				obj_t BgL_list2876z00_1681;

																				{	/* Unsafe/http.scm 679 */
																					obj_t BgL_arg2877z00_1682;

																					{	/* Unsafe/http.scm 679 */
																						obj_t BgL_arg2878z00_1683;

																						{	/* Unsafe/http.scm 679 */
																							obj_t BgL_arg2879z00_1684;

																							{	/* Unsafe/http.scm 679 */
																								obj_t BgL_arg2880z00_1685;

																								BgL_arg2880z00_1685 =
																									MAKE_PAIR(BgL_c5z00_1672,
																									BNIL);
																								BgL_arg2879z00_1684 =
																									MAKE_PAIR(BgL_c4z00_1671,
																									BgL_arg2880z00_1685);
																							}
																							BgL_arg2878z00_1683 =
																								MAKE_PAIR(BgL_c3z00_1670,
																								BgL_arg2879z00_1684);
																						}
																						BgL_arg2877z00_1682 =
																							MAKE_PAIR(BgL_c2z00_1669,
																							BgL_arg2878z00_1683);
																					}
																					BgL_list2876z00_1681 =
																						MAKE_PAIR(BgL_c1z00_1668,
																						BgL_arg2877z00_1682);
																				}
																				BgL_arg2875z00_1680 =
																					BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																					(BgL_list2876z00_1681);
																			}
																			BgL_arg2873z00_1677 =
																				string_for_read(BgL_arg2875z00_1680);
																		}
																}
																BgL_arg2869z00_1673 =
																	BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																	(BFALSE, BFALSE, BgL_arg2870z00_1674,
																	BgL_arg2871z00_1675,
																	BGl_string5329z00zz__httpz00,
																	BgL_arg2873z00_1677);
															}
															return
																BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg2869z00_1673));
														}
													}
												}
											}
										}
									}
								}
								break;
							case ((long) 1):

								if (CBOOL(BgL_opz00_1472))
									{	/* Unsafe/http.scm 661 */
										obj_t BgL_arg2890z00_1694;

										{	/* Unsafe/http.scm 661 */
											obj_t BgL_res5140z00_6737;

											{	/* Unsafe/http.scm 661 */
												int BgL_arg2805z00_6731;

												{	/* Unsafe/http.scm 661 */
													int BgL_res5139z00_6733;

													{	/* Unsafe/http.scm 661 */
														obj_t BgL_inputzd2portzd2_6732;

														BgL_inputzd2portzd2_6732 = BgL_inputzd2portzd2_1471;
														BgL_res5139z00_6733 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_6732));
													}
													BgL_arg2805z00_6731 = BgL_res5139z00_6733;
												}
												BgL_res5140z00_6737 =
													rgc_buffer_substring(BgL_inputzd2portzd2_1471,
													((long) 0), (long) (BgL_arg2805z00_6731));
											}
											BgL_arg2890z00_1694 = BgL_res5140z00_6737;
										}
										bgl_display_obj(BgL_arg2890z00_1694, BgL_opz00_1472);
									}
								else
									{	/* Unsafe/http.scm 661 */
										BFALSE;
									}
								{	/* Unsafe/http.scm 662 */
									int BgL_lz00_1695;

									{	/* Unsafe/http.scm 662 */
										int BgL_res5141z00_6739;

										{	/* Unsafe/http.scm 662 */
											obj_t BgL_inputzd2portzd2_6738;

											BgL_inputzd2portzd2_6738 = BgL_inputzd2portzd2_1471;
											BgL_res5141z00_6739 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6738));
										}
										BgL_lz00_1695 = BgL_res5141z00_6739;
									}
									{	/* Unsafe/http.scm 663 */
										obj_t BgL_arg2891z00_1696;

										{	/* Unsafe/http.scm 663 */
											long BgL_arg2896z00_1700;

											BgL_arg2896z00_1700 =
												((long) (BgL_lz00_1695) - ((long) 2));
											BgL_arg2891z00_1696 =
												BGl_thezd2substringzd2zz__httpz00
												(BgL_inputzd2portzd2_1471, (int) (((long) 0)),
												(int) (BgL_arg2896z00_1700));
										}
										{	/* Unsafe/http.scm 663 */
											obj_t BgL_list2893z00_1698;

											BgL_list2893z00_1698 = MAKE_PAIR(BINT(((long) 16)), BNIL);
											return
												BINT
												(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2891z00_1696, BgL_list2893z00_1698));
										}
									}
								}
								break;
							case ((long) 0):

								if (CBOOL(BgL_opz00_1472))
									{	/* Unsafe/http.scm 645 */
										obj_t BgL_arg2897z00_1701;

										{	/* Unsafe/http.scm 645 */
											obj_t BgL_res5143z00_6749;

											{	/* Unsafe/http.scm 645 */
												int BgL_arg2805z00_6743;

												{	/* Unsafe/http.scm 645 */
													int BgL_res5142z00_6745;

													{	/* Unsafe/http.scm 645 */
														obj_t BgL_inputzd2portzd2_6744;

														BgL_inputzd2portzd2_6744 = BgL_inputzd2portzd2_1471;
														BgL_res5142z00_6745 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_6744));
													}
													BgL_arg2805z00_6743 = BgL_res5142z00_6745;
												}
												BgL_res5143z00_6749 =
													rgc_buffer_substring(BgL_inputzd2portzd2_1471,
													((long) 0), (long) (BgL_arg2805z00_6743));
											}
											BgL_arg2897z00_1701 = BgL_res5143z00_6749;
										}
										bgl_display_obj(BgL_arg2897z00_1701, BgL_opz00_1472);
									}
								else
									{	/* Unsafe/http.scm 645 */
										BFALSE;
									}
								{	/* Unsafe/http.scm 646 */
									long BgL_sza7za7_1702;

									{	/* Unsafe/http.scm 647 */
										obj_t BgL_arg3037z00_1981;

										{	/* Unsafe/http.scm 647 */
											long BgL_arg3041z00_1985;

											{	/* Unsafe/http.scm 647 */
												int BgL_arg3042z00_1986;

												{	/* Unsafe/http.scm 647 */
													int BgL_res5144z00_6751;

													{	/* Unsafe/http.scm 647 */
														obj_t BgL_inputzd2portzd2_6750;

														BgL_inputzd2portzd2_6750 = BgL_inputzd2portzd2_1471;
														BgL_res5144z00_6751 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_6750));
													}
													BgL_arg3042z00_1986 = BgL_res5144z00_6751;
												}
												BgL_arg3041z00_1985 =
													((long) (BgL_arg3042z00_1986) - ((long) 1));
											}
											BgL_arg3037z00_1981 =
												BGl_thezd2substringzd2zz__httpz00
												(BgL_inputzd2portzd2_1471, (int) (((long) 0)),
												(int) (BgL_arg3041z00_1985));
										}
										{	/* Unsafe/http.scm 646 */
											obj_t BgL_list3039z00_1983;

											BgL_list3039z00_1983 = MAKE_PAIR(BINT(((long) 16)), BNIL);
											BgL_sza7za7_1702 =
												BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg3037z00_1981, BgL_list3039z00_1983);
									}}
									{	/* Unsafe/http.scm 658 */
										obj_t BgL_inputzd2portzd2_1704;

										BgL_inputzd2portzd2_1704 = BgL_inputzd2portzd2_1471;
										{
											obj_t BgL_inputzd2portzd2_1743;

											long BgL_lastzd2matchzd2_1744;

											obj_t BgL_inputzd2portzd2_1751;

											long BgL_lastzd2matchzd2_1752;

											obj_t BgL_inputzd2portzd2_1759;

											long BgL_lastzd2matchzd2_1760;

											obj_t BgL_inputzd2portzd2_1767;

											long BgL_lastzd2matchzd2_1768;

											obj_t BgL_inputzd2portzd2_1775;

											long BgL_lastzd2matchzd2_1776;

											obj_t BgL_inputzd2portzd2_1783;

											long BgL_lastzd2matchzd2_1784;

											obj_t BgL_inputzd2portzd2_1791;

											long BgL_lastzd2matchzd2_1792;

											obj_t BgL_inputzd2portzd2_1799;

											long BgL_lastzd2matchzd2_1800;

											obj_t BgL_inputzd2portzd2_1807;

											long BgL_lastzd2matchzd2_1808;

											obj_t BgL_inputzd2portzd2_1816;

											long BgL_lastzd2matchzd2_1817;

											obj_t BgL_inputzd2portzd2_1824;

											long BgL_lastzd2matchzd2_1825;

											obj_t BgL_inputzd2portzd2_1833;

											long BgL_lastzd2matchzd2_1834;

											RGC_START_MATCH(BgL_inputzd2portzd2_1704);
											{	/* Unsafe/http.scm 649 */
												long BgL_matchz00_1927;

												BgL_inputzd2portzd2_1775 = BgL_inputzd2portzd2_1704;
												BgL_lastzd2matchzd2_1776 = ((long) 1);
											BgL_zc3anonymousza32918ze3z83_1777:
												{	/* Unsafe/http.scm 649 */
													int BgL_currentzd2charzd2_1778;

													BgL_currentzd2charzd2_1778 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1775);
													if (
														((long) (BgL_currentzd2charzd2_1778) == ((long) 0)))
														{	/* Unsafe/http.scm 649 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1775))
																{	/* Unsafe/http.scm 649 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1775))
																		{

																			goto BgL_zc3anonymousza32918ze3z83_1777;
																		}
																	else
																		{	/* Unsafe/http.scm 649 */
																			BgL_matchz00_1927 =
																				BgL_lastzd2matchzd2_1776;
																		}
																}
															else
																{	/* Unsafe/http.scm 649 */
																	BgL_inputzd2portzd2_1807 =
																		BgL_inputzd2portzd2_1775;
																	BgL_lastzd2matchzd2_1808 =
																		BgL_lastzd2matchzd2_1776;
																BgL_zc3anonymousza32938ze3z83_1809:
																	{	/* Unsafe/http.scm 649 */
																		long BgL_newzd2matchzd2_1810;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1807);
																		BgL_newzd2matchzd2_1810 = ((long) 1);
																		{	/* Unsafe/http.scm 649 */
																			int BgL_currentzd2charzd2_1811;

																			BgL_currentzd2charzd2_1811 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1807);
																			if (((long) (BgL_currentzd2charzd2_1811)
																					== ((long) 0)))
																				{	/* Unsafe/http.scm 649 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1807))
																						{	/* Unsafe/http.scm 649 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1807))
																								{

																									goto
																										BgL_zc3anonymousza32938ze3z83_1809;
																								}
																							else
																								{	/* Unsafe/http.scm 649 */
																									BgL_matchz00_1927 =
																										BgL_newzd2matchzd2_1810;
																								}
																						}
																					else
																						{	/* Unsafe/http.scm 649 */
																							BgL_inputzd2portzd2_1783 =
																								BgL_inputzd2portzd2_1807;
																							BgL_lastzd2matchzd2_1784 =
																								BgL_newzd2matchzd2_1810;
																						BgL_zc3anonymousza32923ze3z83_1785:
																							{	/* Unsafe/http.scm 649 */
																								int BgL_currentzd2charzd2_1786;

																								BgL_currentzd2charzd2_1786 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_1783);
																								if (((long)
																										(BgL_currentzd2charzd2_1786)
																										== ((long) 0)))
																									{	/* Unsafe/http.scm 649 */
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_1783))
																											{	/* Unsafe/http.scm 649 */
																												if (rgc_fill_buffer
																													(BgL_inputzd2portzd2_1783))
																													{

																														goto
																															BgL_zc3anonymousza32923ze3z83_1785;
																													}
																												else
																													{	/* Unsafe/http.scm 649 */
																														BgL_matchz00_1927 =
																															BgL_lastzd2matchzd2_1784;
																													}
																											}
																										else
																											{

																												goto
																													BgL_zc3anonymousza32923ze3z83_1785;
																											}
																									}
																								else
																									{	/* Unsafe/http.scm 649 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1786)
																												== ((long) 13)))
																											{	/* Unsafe/http.scm 649 */
																												BgL_inputzd2portzd2_1767
																													=
																													BgL_inputzd2portzd2_1783;
																												BgL_lastzd2matchzd2_1768
																													=
																													BgL_lastzd2matchzd2_1784;
																											BgL_zc3anonymousza32913ze3z83_1769:
																												{	/* Unsafe/http.scm 649 */
																													int
																														BgL_currentzd2charzd2_1770;
																													BgL_currentzd2charzd2_1770
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_1767);
																													if (((long)
																															(BgL_currentzd2charzd2_1770)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 649 */
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1767))
																																{	/* Unsafe/http.scm 649 */
																																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1767))
																																		{

																																			goto
																																				BgL_zc3anonymousza32913ze3z83_1769;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 649 */
																																			BgL_matchz00_1927
																																				=
																																				BgL_lastzd2matchzd2_1768;
																																		}
																																}
																															else
																																{	/* Unsafe/http.scm 649 */
																																	BgL_inputzd2portzd2_1833
																																		=
																																		BgL_inputzd2portzd2_1767;
																																	BgL_lastzd2matchzd2_1834
																																		=
																																		BgL_lastzd2matchzd2_1768;
																																BgL_zc3anonymousza32953ze3z83_1835:
																																	{	/* Unsafe/http.scm 649 */
																																		int
																																			BgL_currentzd2charzd2_1836;
																																		BgL_currentzd2charzd2_1836
																																			=
																																			RGC_BUFFER_GET_CHAR
																																			(BgL_inputzd2portzd2_1833);
																																		if (((long)
																																				(BgL_currentzd2charzd2_1836)
																																				==
																																				((long)
																																					0)))
																																			{	/* Unsafe/http.scm 649 */
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1833))
																																					{	/* Unsafe/http.scm 649 */
																																						if (rgc_fill_buffer(BgL_inputzd2portzd2_1833))
																																							{

																																								goto
																																									BgL_zc3anonymousza32953ze3z83_1835;
																																							}
																																						else
																																							{	/* Unsafe/http.scm 649 */
																																								BgL_matchz00_1927
																																									=
																																									BgL_lastzd2matchzd2_1834;
																																							}
																																					}
																																				else
																																					{	/* Unsafe/http.scm 649 */
																																						BgL_inputzd2portzd2_1816
																																							=
																																							BgL_inputzd2portzd2_1833;
																																						BgL_lastzd2matchzd2_1817
																																							=
																																							BgL_lastzd2matchzd2_1834;
																																					BgL_zc3anonymousza32943ze3z83_1818:
																																						{	/* Unsafe/http.scm 649 */
																																							int
																																								BgL_currentzd2charzd2_1819;
																																							BgL_currentzd2charzd2_1819
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_inputzd2portzd2_1816);
																																							if (((long) (BgL_currentzd2charzd2_1819) == ((long) 0)))
																																								{	/* Unsafe/http.scm 649 */
																																									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1816))
																																										{	/* Unsafe/http.scm 649 */
																																											if (rgc_fill_buffer(BgL_inputzd2portzd2_1816))
																																												{

																																													goto
																																														BgL_zc3anonymousza32943ze3z83_1818;
																																												}
																																											else
																																												{	/* Unsafe/http.scm 649 */
																																													BgL_matchz00_1927
																																														=
																																														BgL_lastzd2matchzd2_1817;
																																												}
																																										}
																																									else
																																										{

																																											goto
																																												BgL_zc3anonymousza32943ze3z83_1818;
																																										}
																																								}
																																							else
																																								{	/* Unsafe/http.scm 649 */
																																									if (((long) (BgL_currentzd2charzd2_1819) == ((long) 13)))
																																										{
																																											long
																																												BgL_lastzd2matchzd2_10246;
																																											obj_t
																																												BgL_inputzd2portzd2_10245;
																																											BgL_inputzd2portzd2_10245
																																												=
																																												BgL_inputzd2portzd2_1816;
																																											BgL_lastzd2matchzd2_10246
																																												=
																																												BgL_lastzd2matchzd2_1817;
																																											BgL_lastzd2matchzd2_1768
																																												=
																																												BgL_lastzd2matchzd2_10246;
																																											BgL_inputzd2portzd2_1767
																																												=
																																												BgL_inputzd2portzd2_10245;
																																											goto
																																												BgL_zc3anonymousza32913ze3z83_1769;
																																										}
																																									else
																																										{

																																											goto
																																												BgL_zc3anonymousza32943ze3z83_1818;
																																										}
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Unsafe/http.scm 649 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_1836) == ((long) 13)))
																																					{	/* Unsafe/http.scm 649 */
																																						BgL_inputzd2portzd2_1759
																																							=
																																							BgL_inputzd2portzd2_1833;
																																						BgL_lastzd2matchzd2_1760
																																							=
																																							BgL_lastzd2matchzd2_1834;
																																					BgL_zc3anonymousza32908ze3z83_1761:
																																						{	/* Unsafe/http.scm 649 */
																																							int
																																								BgL_currentzd2charzd2_1762;
																																							BgL_currentzd2charzd2_1762
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_inputzd2portzd2_1759);
																																							if (((long) (BgL_currentzd2charzd2_1762) == ((long) 0)))
																																								{	/* Unsafe/http.scm 649 */
																																									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1759))
																																										{	/* Unsafe/http.scm 649 */
																																											if (rgc_fill_buffer(BgL_inputzd2portzd2_1759))
																																												{

																																													goto
																																														BgL_zc3anonymousza32908ze3z83_1761;
																																												}
																																											else
																																												{	/* Unsafe/http.scm 649 */
																																													BgL_matchz00_1927
																																														=
																																														BgL_lastzd2matchzd2_1760;
																																												}
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_10259;
																																											obj_t
																																												BgL_inputzd2portzd2_10258;
																																											BgL_inputzd2portzd2_10258
																																												=
																																												BgL_inputzd2portzd2_1759;
																																											BgL_lastzd2matchzd2_10259
																																												=
																																												BgL_lastzd2matchzd2_1760;
																																											BgL_lastzd2matchzd2_1834
																																												=
																																												BgL_lastzd2matchzd2_10259;
																																											BgL_inputzd2portzd2_1833
																																												=
																																												BgL_inputzd2portzd2_10258;
																																											goto
																																												BgL_zc3anonymousza32953ze3z83_1835;
																																										}
																																								}
																																							else
																																								{	/* Unsafe/http.scm 649 */
																																									if (((long) (BgL_currentzd2charzd2_1762) == ((long) 10)))
																																										{	/* Unsafe/http.scm 649 */
																																											long
																																												BgL_newzd2matchzd2_6782;
																																											RGC_STOP_MATCH
																																												(BgL_inputzd2portzd2_1759);
																																											BgL_newzd2matchzd2_6782
																																												=
																																												(
																																												(long)
																																												0);
																																											BgL_matchz00_1927
																																												=
																																												BgL_newzd2matchzd2_6782;
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_10265;
																																											obj_t
																																												BgL_inputzd2portzd2_10264;
																																											BgL_inputzd2portzd2_10264
																																												=
																																												BgL_inputzd2portzd2_1759;
																																											BgL_lastzd2matchzd2_10265
																																												=
																																												BgL_lastzd2matchzd2_1760;
																																											BgL_lastzd2matchzd2_1834
																																												=
																																												BgL_lastzd2matchzd2_10265;
																																											BgL_inputzd2portzd2_1833
																																												=
																																												BgL_inputzd2portzd2_10264;
																																											goto
																																												BgL_zc3anonymousza32953ze3z83_1835;
																																										}
																																								}
																																						}
																																					}
																																				else
																																					{
																																						long
																																							BgL_lastzd2matchzd2_10267;
																																						obj_t
																																							BgL_inputzd2portzd2_10266;
																																						BgL_inputzd2portzd2_10266
																																							=
																																							BgL_inputzd2portzd2_1833;
																																						BgL_lastzd2matchzd2_10267
																																							=
																																							BgL_lastzd2matchzd2_1834;
																																						BgL_lastzd2matchzd2_1817
																																							=
																																							BgL_lastzd2matchzd2_10267;
																																						BgL_inputzd2portzd2_1816
																																							=
																																							BgL_inputzd2portzd2_10266;
																																						goto
																																							BgL_zc3anonymousza32943ze3z83_1818;
																																					}
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 649 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1770)
																																	==
																																	((long) 10)))
																																{	/* Unsafe/http.scm 649 */
																																	long
																																		BgL_newzd2matchzd2_6793;
																																	RGC_STOP_MATCH
																																		(BgL_inputzd2portzd2_1767);
																																	BgL_newzd2matchzd2_6793
																																		=
																																		((long) 0);
																																	BgL_matchz00_1927
																																		=
																																		BgL_newzd2matchzd2_6793;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_10273;
																																	obj_t
																																		BgL_inputzd2portzd2_10272;
																																	BgL_inputzd2portzd2_10272
																																		=
																																		BgL_inputzd2portzd2_1767;
																																	BgL_lastzd2matchzd2_10273
																																		=
																																		BgL_lastzd2matchzd2_1768;
																																	BgL_lastzd2matchzd2_1834
																																		=
																																		BgL_lastzd2matchzd2_10273;
																																	BgL_inputzd2portzd2_1833
																																		=
																																		BgL_inputzd2portzd2_10272;
																																	goto
																																		BgL_zc3anonymousza32953ze3z83_1835;
																																}
																														}
																												}
																											}
																										else
																											{

																												goto
																													BgL_zc3anonymousza32923ze3z83_1785;
																											}
																									}
																							}
																						}
																				}
																			else
																				{	/* Unsafe/http.scm 649 */
																					if (
																						((long) (BgL_currentzd2charzd2_1811)
																							== ((long) 13)))
																						{
																							long BgL_lastzd2matchzd2_10278;

																							obj_t BgL_inputzd2portzd2_10277;

																							BgL_inputzd2portzd2_10277 =
																								BgL_inputzd2portzd2_1807;
																							BgL_lastzd2matchzd2_10278 =
																								BgL_newzd2matchzd2_1810;
																							BgL_lastzd2matchzd2_1768 =
																								BgL_lastzd2matchzd2_10278;
																							BgL_inputzd2portzd2_1767 =
																								BgL_inputzd2portzd2_10277;
																							goto
																								BgL_zc3anonymousza32913ze3z83_1769;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_10280;

																							obj_t BgL_inputzd2portzd2_10279;

																							BgL_inputzd2portzd2_10279 =
																								BgL_inputzd2portzd2_1807;
																							BgL_lastzd2matchzd2_10280 =
																								BgL_newzd2matchzd2_1810;
																							BgL_lastzd2matchzd2_1784 =
																								BgL_lastzd2matchzd2_10280;
																							BgL_inputzd2portzd2_1783 =
																								BgL_inputzd2portzd2_10279;
																							goto
																								BgL_zc3anonymousza32923ze3z83_1785;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/http.scm 649 */
															if (
																((long) (BgL_currentzd2charzd2_1778) ==
																	((long) 13)))
																{	/* Unsafe/http.scm 649 */
																	BgL_inputzd2portzd2_1824 =
																		BgL_inputzd2portzd2_1775;
																	BgL_lastzd2matchzd2_1825 =
																		BgL_lastzd2matchzd2_1776;
																BgL_zc3anonymousza32948ze3z83_1826:
																	{	/* Unsafe/http.scm 649 */
																		long BgL_newzd2matchzd2_1827;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1824);
																		BgL_newzd2matchzd2_1827 = ((long) 1);
																		{	/* Unsafe/http.scm 649 */
																			int BgL_currentzd2charzd2_1828;

																			BgL_currentzd2charzd2_1828 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1824);
																			if (((long) (BgL_currentzd2charzd2_1828)
																					== ((long) 0)))
																				{	/* Unsafe/http.scm 649 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1824))
																						{	/* Unsafe/http.scm 649 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1824))
																								{

																									goto
																										BgL_zc3anonymousza32948ze3z83_1826;
																								}
																							else
																								{	/* Unsafe/http.scm 649 */
																									BgL_matchz00_1927 =
																										BgL_newzd2matchzd2_1827;
																								}
																						}
																					else
																						{	/* Unsafe/http.scm 649 */
																							BgL_inputzd2portzd2_1791 =
																								BgL_inputzd2portzd2_1824;
																							BgL_lastzd2matchzd2_1792 =
																								BgL_newzd2matchzd2_1827;
																						BgL_zc3anonymousza32928ze3z83_1793:
																							{	/* Unsafe/http.scm 649 */
																								int BgL_currentzd2charzd2_1794;

																								BgL_currentzd2charzd2_1794 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_1791);
																								if (((long)
																										(BgL_currentzd2charzd2_1794)
																										== ((long) 0)))
																									{	/* Unsafe/http.scm 649 */
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_1791))
																											{	/* Unsafe/http.scm 649 */
																												if (rgc_fill_buffer
																													(BgL_inputzd2portzd2_1791))
																													{

																														goto
																															BgL_zc3anonymousza32928ze3z83_1793;
																													}
																												else
																													{	/* Unsafe/http.scm 649 */
																														BgL_matchz00_1927 =
																															BgL_lastzd2matchzd2_1792;
																													}
																											}
																										else
																											{
																												long
																													BgL_lastzd2matchzd2_10302;
																												obj_t
																													BgL_inputzd2portzd2_10301;
																												BgL_inputzd2portzd2_10301
																													=
																													BgL_inputzd2portzd2_1791;
																												BgL_lastzd2matchzd2_10302
																													=
																													BgL_lastzd2matchzd2_1792;
																												BgL_lastzd2matchzd2_1817
																													=
																													BgL_lastzd2matchzd2_10302;
																												BgL_inputzd2portzd2_1816
																													=
																													BgL_inputzd2portzd2_10301;
																												goto
																													BgL_zc3anonymousza32943ze3z83_1818;
																											}
																									}
																								else
																									{	/* Unsafe/http.scm 649 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1794)
																												== ((long) 13)))
																											{	/* Unsafe/http.scm 649 */
																												BgL_inputzd2portzd2_1751
																													=
																													BgL_inputzd2portzd2_1791;
																												BgL_lastzd2matchzd2_1752
																													=
																													BgL_lastzd2matchzd2_1792;
																											BgL_zc3anonymousza32903ze3z83_1753:
																												{	/* Unsafe/http.scm 649 */
																													int
																														BgL_currentzd2charzd2_1754;
																													BgL_currentzd2charzd2_1754
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_1751);
																													if (((long)
																															(BgL_currentzd2charzd2_1754)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 649 */
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1751))
																																{	/* Unsafe/http.scm 649 */
																																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1751))
																																		{

																																			goto
																																				BgL_zc3anonymousza32903ze3z83_1753;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 649 */
																																			BgL_matchz00_1927
																																				=
																																				BgL_lastzd2matchzd2_1752;
																																		}
																																}
																															else
																																{	/* Unsafe/http.scm 649 */
																																	BgL_inputzd2portzd2_1743
																																		=
																																		BgL_inputzd2portzd2_1751;
																																	BgL_lastzd2matchzd2_1744
																																		=
																																		BgL_lastzd2matchzd2_1752;
																																BgL_zc3anonymousza32898ze3z83_1745:
																																	{	/* Unsafe/http.scm 649 */
																																		int
																																			BgL_currentzd2charzd2_1746;
																																		BgL_currentzd2charzd2_1746
																																			=
																																			RGC_BUFFER_GET_CHAR
																																			(BgL_inputzd2portzd2_1743);
																																		if (((long)
																																				(BgL_currentzd2charzd2_1746)
																																				==
																																				((long)
																																					0)))
																																			{	/* Unsafe/http.scm 649 */
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1743))
																																					{	/* Unsafe/http.scm 649 */
																																						if (rgc_fill_buffer(BgL_inputzd2portzd2_1743))
																																							{

																																								goto
																																									BgL_zc3anonymousza32898ze3z83_1745;
																																							}
																																						else
																																							{	/* Unsafe/http.scm 649 */
																																								BgL_matchz00_1927
																																									=
																																									BgL_lastzd2matchzd2_1744;
																																							}
																																					}
																																				else
																																					{
																																						long
																																							BgL_lastzd2matchzd2_10323;
																																						obj_t
																																							BgL_inputzd2portzd2_10322;
																																						BgL_inputzd2portzd2_10322
																																							=
																																							BgL_inputzd2portzd2_1743;
																																						BgL_lastzd2matchzd2_10323
																																							=
																																							BgL_lastzd2matchzd2_1744;
																																						BgL_lastzd2matchzd2_1817
																																							=
																																							BgL_lastzd2matchzd2_10323;
																																						BgL_inputzd2portzd2_1816
																																							=
																																							BgL_inputzd2portzd2_10322;
																																						goto
																																							BgL_zc3anonymousza32943ze3z83_1818;
																																					}
																																			}
																																		else
																																			{	/* Unsafe/http.scm 649 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_1746) == ((long) 13)))
																																					{	/* Unsafe/http.scm 649 */
																																						BgL_inputzd2portzd2_1799
																																							=
																																							BgL_inputzd2portzd2_1743;
																																						BgL_lastzd2matchzd2_1800
																																							=
																																							BgL_lastzd2matchzd2_1744;
																																					BgL_zc3anonymousza32933ze3z83_1801:
																																						{	/* Unsafe/http.scm 649 */
																																							int
																																								BgL_currentzd2charzd2_1802;
																																							BgL_currentzd2charzd2_1802
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_inputzd2portzd2_1799);
																																							if (((long) (BgL_currentzd2charzd2_1802) == ((long) 0)))
																																								{	/* Unsafe/http.scm 649 */
																																									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1799))
																																										{	/* Unsafe/http.scm 649 */
																																											if (rgc_fill_buffer(BgL_inputzd2portzd2_1799))
																																												{

																																													goto
																																														BgL_zc3anonymousza32933ze3z83_1801;
																																												}
																																											else
																																												{	/* Unsafe/http.scm 649 */
																																													BgL_matchz00_1927
																																														=
																																														BgL_lastzd2matchzd2_1800;
																																												}
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_10336;
																																											obj_t
																																												BgL_inputzd2portzd2_10335;
																																											BgL_inputzd2portzd2_10335
																																												=
																																												BgL_inputzd2portzd2_1799;
																																											BgL_lastzd2matchzd2_10336
																																												=
																																												BgL_lastzd2matchzd2_1800;
																																											BgL_lastzd2matchzd2_1744
																																												=
																																												BgL_lastzd2matchzd2_10336;
																																											BgL_inputzd2portzd2_1743
																																												=
																																												BgL_inputzd2portzd2_10335;
																																											goto
																																												BgL_zc3anonymousza32898ze3z83_1745;
																																										}
																																								}
																																							else
																																								{	/* Unsafe/http.scm 649 */
																																									if (((long) (BgL_currentzd2charzd2_1802) == ((long) 10)))
																																										{	/* Unsafe/http.scm 649 */
																																											long
																																												BgL_newzd2matchzd2_6825;
																																											RGC_STOP_MATCH
																																												(BgL_inputzd2portzd2_1799);
																																											BgL_newzd2matchzd2_6825
																																												=
																																												(
																																												(long)
																																												0);
																																											BgL_matchz00_1927
																																												=
																																												BgL_newzd2matchzd2_6825;
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_10342;
																																											obj_t
																																												BgL_inputzd2portzd2_10341;
																																											BgL_inputzd2portzd2_10341
																																												=
																																												BgL_inputzd2portzd2_1799;
																																											BgL_lastzd2matchzd2_10342
																																												=
																																												BgL_lastzd2matchzd2_1800;
																																											BgL_lastzd2matchzd2_1744
																																												=
																																												BgL_lastzd2matchzd2_10342;
																																											BgL_inputzd2portzd2_1743
																																												=
																																												BgL_inputzd2portzd2_10341;
																																											goto
																																												BgL_zc3anonymousza32898ze3z83_1745;
																																										}
																																								}
																																						}
																																					}
																																				else
																																					{
																																						long
																																							BgL_lastzd2matchzd2_10344;
																																						obj_t
																																							BgL_inputzd2portzd2_10343;
																																						BgL_inputzd2portzd2_10343
																																							=
																																							BgL_inputzd2portzd2_1743;
																																						BgL_lastzd2matchzd2_10344
																																							=
																																							BgL_lastzd2matchzd2_1744;
																																						BgL_lastzd2matchzd2_1817
																																							=
																																							BgL_lastzd2matchzd2_10344;
																																						BgL_inputzd2portzd2_1816
																																							=
																																							BgL_inputzd2portzd2_10343;
																																						goto
																																							BgL_zc3anonymousza32943ze3z83_1818;
																																					}
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 649 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1754)
																																	==
																																	((long) 10)))
																																{	/* Unsafe/http.scm 649 */
																																	long
																																		BgL_newzd2matchzd2_6771;
																																	RGC_STOP_MATCH
																																		(BgL_inputzd2portzd2_1751);
																																	BgL_newzd2matchzd2_6771
																																		=
																																		((long) 0);
																																	BgL_matchz00_1927
																																		=
																																		BgL_newzd2matchzd2_6771;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_10350;
																																	obj_t
																																		BgL_inputzd2portzd2_10349;
																																	BgL_inputzd2portzd2_10349
																																		=
																																		BgL_inputzd2portzd2_1751;
																																	BgL_lastzd2matchzd2_10350
																																		=
																																		BgL_lastzd2matchzd2_1752;
																																	BgL_lastzd2matchzd2_1744
																																		=
																																		BgL_lastzd2matchzd2_10350;
																																	BgL_inputzd2portzd2_1743
																																		=
																																		BgL_inputzd2portzd2_10349;
																																	goto
																																		BgL_zc3anonymousza32898ze3z83_1745;
																																}
																														}
																												}
																											}
																										else
																											{
																												long
																													BgL_lastzd2matchzd2_10352;
																												obj_t
																													BgL_inputzd2portzd2_10351;
																												BgL_inputzd2portzd2_10351
																													=
																													BgL_inputzd2portzd2_1791;
																												BgL_lastzd2matchzd2_10352
																													=
																													BgL_lastzd2matchzd2_1792;
																												BgL_lastzd2matchzd2_1817
																													=
																													BgL_lastzd2matchzd2_10352;
																												BgL_inputzd2portzd2_1816
																													=
																													BgL_inputzd2portzd2_10351;
																												goto
																													BgL_zc3anonymousza32943ze3z83_1818;
																											}
																									}
																							}
																						}
																				}
																			else
																				{	/* Unsafe/http.scm 649 */
																					if (
																						((long) (BgL_currentzd2charzd2_1828)
																							== ((long) 10)))
																						{	/* Unsafe/http.scm 649 */
																							BgL_matchz00_1927 =
																								BgL_newzd2matchzd2_1827;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_10357;

																							obj_t BgL_inputzd2portzd2_10356;

																							BgL_inputzd2portzd2_10356 =
																								BgL_inputzd2portzd2_1824;
																							BgL_lastzd2matchzd2_10357 =
																								BgL_newzd2matchzd2_1827;
																							BgL_lastzd2matchzd2_1792 =
																								BgL_lastzd2matchzd2_10357;
																							BgL_inputzd2portzd2_1791 =
																								BgL_inputzd2portzd2_10356;
																							goto
																								BgL_zc3anonymousza32928ze3z83_1793;
																						}
																				}
																		}
																	}
																}
															else
																{
																	long BgL_lastzd2matchzd2_10359;

																	obj_t BgL_inputzd2portzd2_10358;

																	BgL_inputzd2portzd2_10358 =
																		BgL_inputzd2portzd2_1775;
																	BgL_lastzd2matchzd2_10359 =
																		BgL_lastzd2matchzd2_1776;
																	BgL_lastzd2matchzd2_1808 =
																		BgL_lastzd2matchzd2_10359;
																	BgL_inputzd2portzd2_1807 =
																		BgL_inputzd2portzd2_10358;
																	goto BgL_zc3anonymousza32938ze3z83_1809;
																}
														}
												}
												RGC_SET_FILEPOS(BgL_inputzd2portzd2_1704);
												{

													{	/* Unsafe/http.scm 649 */
														obj_t BgL_aux2414z00_1932;

														BgL_aux2414z00_1932 = BINT(BgL_matchz00_1927);
														switch ((long) CINT(BgL_aux2414z00_1932))
															{
															case ((long) 1):

																{	/* Llib/object.scm 90 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg3029z00_1934;
																	{	/* Llib/object.scm 90 */
																		obj_t BgL_arg3030z00_1935;

																		obj_t BgL_arg3031z00_1936;

																		obj_t BgL_arg3033z00_1938;

																		{	/* Llib/object.scm 90 */

																			{	/* Llib/object.scm 90 */

																				BgL_arg3030z00_1935 =
																					BGl_getzd2tracezd2stackz00zz__errorz00
																					(BFALSE);
																		}}
																		BgL_arg3031z00_1936 =
																			BGl_symbol5326z00zz__httpz00;
																		{	/* Unsafe/http.scm 656 */
																			obj_t BgL_auxz00_10363;

																			{	/* Unsafe/http.scm 649 */
																				bool_t BgL_testz00_10364;

																				{	/* Unsafe/http.scm 649 */
																					long BgL_arg3019z00_1916;

																					BgL_arg3019z00_1916 =
																						RGC_BUFFER_LENGTH
																						(BgL_inputzd2portzd2_1704);
																					BgL_testz00_10364 =
																						(BgL_arg3019z00_1916 == ((long) 0));
																				}
																				if (BgL_testz00_10364)
																					{	/* Unsafe/http.scm 649 */
																						BgL_auxz00_10363 = BCNST(256);
																					}
																				else
																					{	/* Unsafe/http.scm 649 */
																						BgL_auxz00_10363 =
																							BCHAR(RGC_BUFFER_CHARACTER
																							(BgL_inputzd2portzd2_1704));
																					}
																			}
																			BgL_arg3033z00_1938 =
																				BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
																				(BgL_auxz00_10363,
																				BgL_inputzd2portzd2_1704);
																		}
																		BgL_arg3029z00_1934 =
																			BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																			(BFALSE, BFALSE, BgL_arg3030z00_1935,
																			BgL_arg3031z00_1936,
																			BGl_string5332z00zz__httpz00,
																			BgL_arg3033z00_1938);
																	}
																	BGl_raisez00zz__errorz00(
																		(obj_t) (BgL_arg3029z00_1934));
																}
																break;
															case ((long) 0):

																if (CBOOL(BgL_opz00_1472))
																	{	/* Unsafe/http.scm 651 */
																		obj_t BgL_arg3036z00_1942;

																		{	/* Unsafe/http.scm 651 */
																			obj_t BgL_res5149z00_6881;

																			{	/* Unsafe/http.scm 651 */
																				int BgL_arg2966z00_6875;

																				{	/* Unsafe/http.scm 651 */
																					int BgL_res5148z00_6877;

																					BgL_res5148z00_6877 =
																						(int) (RGC_BUFFER_LENGTH
																						(BgL_inputzd2portzd2_1704));
																					BgL_arg2966z00_6875 =
																						BgL_res5148z00_6877;
																				}
																				BgL_res5149z00_6881 =
																					rgc_buffer_substring
																					(BgL_inputzd2portzd2_1704, ((long) 0),
																					(long) (BgL_arg2966z00_6875));
																			}
																			BgL_arg3036z00_1942 = BgL_res5149z00_6881;
																		}
																		bgl_display_obj(BgL_arg3036z00_1942,
																			BgL_opz00_1472);
																	}
																else
																	{	/* Unsafe/http.scm 651 */
																		BFALSE;
																	}
																break;
															default:
																BGl_errorz00zz__errorz00
																	(BGl_string5330z00zz__httpz00,
																	BGl_string5331z00zz__httpz00,
																	BINT(BgL_matchz00_1927));
															}
													}
												}
											}
										}
									}
									return BINT(BgL_sza7za7_1702);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
									BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_1664));
							}
					}
				}
			}
		}
	}



/* the-substring */
	obj_t BGl_thezd2substringzd2zz__httpz00(obj_t BgL_inputzd2portzd2_9735,
		int BgL_minz00_1593, int BgL_maxz00_1594)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 640 */
			if (((long) (BgL_maxz00_1594) < ((long) 0)))
				{	/* Unsafe/http.scm 640 */
					int BgL_arg2808z00_1597;

					{	/* Unsafe/http.scm 640 */
						int BgL_res5131z00_6690;

						{	/* Unsafe/http.scm 640 */
							obj_t BgL_inputzd2portzd2_6689;

							BgL_inputzd2portzd2_6689 = BgL_inputzd2portzd2_9735;
							BgL_res5131z00_6690 =
								(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6689));
						}
						BgL_arg2808z00_1597 = BgL_res5131z00_6690;
					}
					{	/* Unsafe/http.scm 640 */
						long BgL_za71za7_6691;

						long BgL_za72za7_6692;

						BgL_za71za7_6691 = (long) (BgL_arg2808z00_1597);
						BgL_za72za7_6692 = (long) (BgL_maxz00_1594);
						BgL_maxz00_1594 = (int) ((BgL_za71za7_6691 + BgL_za72za7_6692));
				}}
			else
				{	/* Unsafe/http.scm 640 */
					BFALSE;
				}
			{	/* Unsafe/http.scm 640 */
				bool_t BgL_testz00_10397;

				if (((long) (BgL_minz00_1593) >= ((long) 0)))
					{	/* Unsafe/http.scm 640 */
						if (((long) (BgL_maxz00_1594) >= (long) (BgL_minz00_1593)))
							{	/* Unsafe/http.scm 640 */
								int BgL_arg2818z00_1607;

								{	/* Unsafe/http.scm 640 */
									int BgL_res5132z00_6698;

									{	/* Unsafe/http.scm 640 */
										obj_t BgL_inputzd2portzd2_6697;

										BgL_inputzd2portzd2_6697 = BgL_inputzd2portzd2_9735;
										BgL_res5132z00_6698 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6697));
									}
									BgL_arg2818z00_1607 = BgL_res5132z00_6698;
								}
								BgL_testz00_10397 =
									((long) (BgL_maxz00_1594) <= (long) (BgL_arg2818z00_1607));
							}
						else
							{	/* Unsafe/http.scm 640 */
								BgL_testz00_10397 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/http.scm 640 */
						BgL_testz00_10397 = ((bool_t) 0);
					}
				if (BgL_testz00_10397)
					{	/* Unsafe/http.scm 640 */
						return
							rgc_buffer_substring(BgL_inputzd2portzd2_9735,
							(long) (BgL_minz00_1593), (long) (BgL_maxz00_1594));
					}
				else
					{	/* Unsafe/http.scm 640 */
						obj_t BgL_arg2811z00_1600;

						obj_t BgL_arg2812z00_1601;

						{	/* Unsafe/http.scm 640 */
							obj_t BgL_arg2814z00_1603;

							{	/* Unsafe/http.scm 640 */
								obj_t BgL_res5134z00_6711;

								{	/* Unsafe/http.scm 640 */
									int BgL_arg2805z00_6705;

									{	/* Unsafe/http.scm 640 */
										int BgL_res5133z00_6707;

										{	/* Unsafe/http.scm 640 */
											obj_t BgL_inputzd2portzd2_6706;

											BgL_inputzd2portzd2_6706 = BgL_inputzd2portzd2_9735;
											BgL_res5133z00_6707 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6706));
										}
										BgL_arg2805z00_6705 = BgL_res5133z00_6707;
									}
									BgL_res5134z00_6711 =
										rgc_buffer_substring(BgL_inputzd2portzd2_9735, ((long) 0),
										(long) (BgL_arg2805z00_6705));
								}
								BgL_arg2814z00_1603 = BgL_res5134z00_6711;
							}
							{	/* Unsafe/http.scm 640 */
								obj_t BgL_list2815z00_1604;

								BgL_list2815z00_1604 = MAKE_PAIR(BgL_arg2814z00_1603, BNIL);
								BgL_arg2811z00_1600 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string5333z00zz__httpz00, BgL_list2815z00_1604);
						}}
						BgL_arg2812z00_1601 =
							MAKE_PAIR(BINT(BgL_minz00_1593), BINT(BgL_maxz00_1594));
						return
							BGl_errorz00zz__errorz00(BGl_string5334z00zz__httpz00,
							BgL_arg2811z00_1600, BgL_arg2812z00_1601);
					}
			}
		}
	}



/* <anonymous:2505> */
	obj_t BGl_zc3anonymousza32505ze3z83zz__httpz00(obj_t BgL_envz00_9541,
		obj_t BgL_inputzd2portzd2_9543)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 294 */
			{	/* Unsafe/http.scm 294 */
				obj_t BgL_thezd2rgczd2contextz00_9542;

				BgL_thezd2rgczd2contextz00_9542 =
					PROCEDURE_REF(BgL_envz00_9541, (int) (((long) 0)));
				{
					obj_t BgL_inputzd2portzd2_1020;

					BgL_inputzd2portzd2_1020 = BgL_inputzd2portzd2_9543;
					return
						BGl_ignorez00zz__httpz00(BgL_inputzd2portzd2_1020,
						BgL_thezd2rgczd2contextz00_9542);
				}
			}
		}
	}



/* ignore */
	obj_t BGl_ignorez00zz__httpz00(obj_t BgL_inputzd2portzd2_9733,
		obj_t BgL_thezd2rgczd2contextz00_9732)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 294 */
			{
				int BgL_minz00_1302;

				int BgL_maxz00_1303;

				obj_t BgL_inputzd2portzd2_1280;

				long BgL_lastzd2matchzd2_1281;

				obj_t BgL_inputzd2portzd2_1266;

				long BgL_lastzd2matchzd2_1267;

				obj_t BgL_inputzd2portzd2_1256;

				long BgL_lastzd2matchzd2_1257;

				obj_t BgL_inputzd2portzd2_1245;

				long BgL_lastzd2matchzd2_1246;

				obj_t BgL_inputzd2portzd2_1234;

				long BgL_lastzd2matchzd2_1235;

				obj_t BgL_inputzd2portzd2_1215;

				long BgL_lastzd2matchzd2_1216;

				obj_t BgL_inputzd2portzd2_1202;

				long BgL_lastzd2matchzd2_1203;

				obj_t BgL_inputzd2portzd2_1188;

				long BgL_lastzd2matchzd2_1189;

				obj_t BgL_inputzd2portzd2_1174;

				long BgL_lastzd2matchzd2_1175;

				obj_t BgL_inputzd2portzd2_1160;

				long BgL_lastzd2matchzd2_1161;

				obj_t BgL_inputzd2portzd2_1147;

				long BgL_lastzd2matchzd2_1148;

				obj_t BgL_inputzd2portzd2_1127;

				long BgL_lastzd2matchzd2_1128;

				obj_t BgL_inputzd2portzd2_1107;

				long BgL_lastzd2matchzd2_1108;

				obj_t BgL_inputzd2portzd2_1092;

				long BgL_lastzd2matchzd2_1093;

				obj_t BgL_inputzd2portzd2_1081;

				long BgL_lastzd2matchzd2_1082;

				obj_t BgL_inputzd2portzd2_1070;

				long BgL_lastzd2matchzd2_1071;

				RGC_START_MATCH(BgL_inputzd2portzd2_9733);
				{	/* Unsafe/http.scm 294 */
					long BgL_matchz00_1373;

					BgL_inputzd2portzd2_1215 = BgL_inputzd2portzd2_9733;
					BgL_lastzd2matchzd2_1216 = ((long) 3);
				BgL_zc3anonymousza32596ze3z83_1217:
					{	/* Unsafe/http.scm 294 */
						int BgL_currentzd2charzd2_1218;

						BgL_currentzd2charzd2_1218 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1215);
						if (((long) (BgL_currentzd2charzd2_1218) == ((long) 0)))
							{	/* Unsafe/http.scm 294 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1215))
									{	/* Unsafe/http.scm 294 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_1215))
											{

												goto BgL_zc3anonymousza32596ze3z83_1217;
											}
										else
											{	/* Unsafe/http.scm 294 */
												BgL_matchz00_1373 = BgL_lastzd2matchzd2_1216;
											}
									}
								else
									{	/* Unsafe/http.scm 294 */
										BgL_inputzd2portzd2_1092 = BgL_inputzd2portzd2_1215;
										BgL_lastzd2matchzd2_1093 = BgL_lastzd2matchzd2_1216;
									BgL_zc3anonymousza32518ze3z83_1094:
										{	/* Unsafe/http.scm 294 */
											long BgL_newzd2matchzd2_1095;

											if (
												(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
													BGl_symbol5335z00zz__httpz00))
												{	/* Unsafe/http.scm 294 */
													RGC_STOP_MATCH(BgL_inputzd2portzd2_1092);
													BgL_newzd2matchzd2_1095 = ((long) 2);
												}
											else
												{	/* Unsafe/http.scm 294 */
													RGC_STOP_MATCH(BgL_inputzd2portzd2_1092);
													BgL_newzd2matchzd2_1095 = ((long) 3);
												}
											{	/* Unsafe/http.scm 294 */
												int BgL_currentzd2charzd2_1096;

												BgL_currentzd2charzd2_1096 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1092);
												switch ((long) (BgL_currentzd2charzd2_1096))
													{
													case ((long) 0):

														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1092))
															{	/* Unsafe/http.scm 294 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_1092))
																	{

																		goto BgL_zc3anonymousza32518ze3z83_1094;
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		BgL_matchz00_1373 = BgL_newzd2matchzd2_1095;
																	}
															}
														else
															{	/* Unsafe/http.scm 294 */
																BgL_inputzd2portzd2_1280 =
																	BgL_inputzd2portzd2_1092;
																BgL_lastzd2matchzd2_1281 =
																	BgL_newzd2matchzd2_1095;
															BgL_zc3anonymousza32633ze3z83_1282:
																{	/* Unsafe/http.scm 294 */
																	long BgL_newzd2matchzd2_1283;

																	if (
																		(CELL_REF(BgL_thezd2rgczd2contextz00_9732)
																			== BGl_symbol5335z00zz__httpz00))
																		{	/* Unsafe/http.scm 294 */
																			RGC_STOP_MATCH(BgL_inputzd2portzd2_1280);
																			BgL_newzd2matchzd2_1283 = ((long) 2);
																		}
																	else
																		{	/* Unsafe/http.scm 294 */
																			BgL_newzd2matchzd2_1283 =
																				BgL_lastzd2matchzd2_1281;
																		}
																	{	/* Unsafe/http.scm 294 */
																		int BgL_currentzd2charzd2_1284;

																		BgL_currentzd2charzd2_1284 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1280);
																		switch ((long) (BgL_currentzd2charzd2_1284))
																			{
																			case ((long) 0):

																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_1280))
																					{	/* Unsafe/http.scm 294 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_1280))
																							{

																								goto
																									BgL_zc3anonymousza32633ze3z83_1282;
																							}
																						else
																							{	/* Unsafe/http.scm 294 */
																								BgL_matchz00_1373 =
																									BgL_newzd2matchzd2_1283;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_10452;

																						BgL_lastzd2matchzd2_10452 =
																							BgL_newzd2matchzd2_1283;
																						BgL_lastzd2matchzd2_1281 =
																							BgL_lastzd2matchzd2_10452;
																						goto
																							BgL_zc3anonymousza32633ze3z83_1282;
																					}
																				break;
																			case ((long) 13):

																				BgL_inputzd2portzd2_1070 =
																					BgL_inputzd2portzd2_1280;
																				BgL_lastzd2matchzd2_1071 =
																					BgL_newzd2matchzd2_1283;
																			BgL_zc3anonymousza32508ze3z83_1072:
																				{	/* Unsafe/http.scm 294 */
																					long BgL_newzd2matchzd2_1073;

																					if (
																						(CELL_REF
																							(BgL_thezd2rgczd2contextz00_9732)
																							== BGl_symbol5335z00zz__httpz00))
																						{	/* Unsafe/http.scm 294 */
																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1070);
																							BgL_newzd2matchzd2_1073 =
																								((long) 2);
																						}
																					else
																						{	/* Unsafe/http.scm 294 */
																							BgL_newzd2matchzd2_1073 =
																								BgL_lastzd2matchzd2_1071;
																						}
																					{	/* Unsafe/http.scm 294 */
																						int BgL_currentzd2charzd2_1074;

																						BgL_currentzd2charzd2_1074 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_1070);
																						switch ((long)
																							(BgL_currentzd2charzd2_1074))
																							{
																							case ((long) 0):

																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_1070))
																									{	/* Unsafe/http.scm 294 */
																										if (rgc_fill_buffer
																											(BgL_inputzd2portzd2_1070))
																											{

																												goto
																													BgL_zc3anonymousza32508ze3z83_1072;
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												BgL_matchz00_1373 =
																													BgL_newzd2matchzd2_1073;
																											}
																									}
																								else
																									{
																										long
																											BgL_lastzd2matchzd2_10462;
																										obj_t
																											BgL_inputzd2portzd2_10461;
																										BgL_inputzd2portzd2_10461 =
																											BgL_inputzd2portzd2_1070;
																										BgL_lastzd2matchzd2_10462 =
																											BgL_newzd2matchzd2_1073;
																										BgL_lastzd2matchzd2_1281 =
																											BgL_lastzd2matchzd2_10462;
																										BgL_inputzd2portzd2_1280 =
																											BgL_inputzd2portzd2_10461;
																										goto
																											BgL_zc3anonymousza32633ze3z83_1282;
																									}
																								break;
																							case ((long) 13):

																								{
																									long
																										BgL_lastzd2matchzd2_10463;
																									BgL_lastzd2matchzd2_10463 =
																										BgL_newzd2matchzd2_1073;
																									BgL_lastzd2matchzd2_1071 =
																										BgL_lastzd2matchzd2_10463;
																									goto
																										BgL_zc3anonymousza32508ze3z83_1072;
																								}
																								break;
																							case ((long) 10):

																								{	/* Unsafe/http.scm 294 */
																									long BgL_newzd2matchzd2_6201;

																									if (
																										(CELL_REF
																											(BgL_thezd2rgczd2contextz00_9732)
																											==
																											BGl_symbol5335z00zz__httpz00))
																										{	/* Unsafe/http.scm 294 */
																											RGC_STOP_MATCH
																												(BgL_inputzd2portzd2_1070);
																											BgL_newzd2matchzd2_6201 =
																												((long) 2);
																										}
																									else
																										{	/* Unsafe/http.scm 294 */
																											BgL_newzd2matchzd2_6201 =
																												BgL_newzd2matchzd2_1073;
																										}
																									BgL_matchz00_1373 =
																										BgL_newzd2matchzd2_6201;
																								}
																								break;
																							default:
																								{
																									long
																										BgL_lastzd2matchzd2_10468;
																									obj_t
																										BgL_inputzd2portzd2_10467;
																									BgL_inputzd2portzd2_10467 =
																										BgL_inputzd2portzd2_1070;
																									BgL_lastzd2matchzd2_10468 =
																										BgL_newzd2matchzd2_1073;
																									BgL_lastzd2matchzd2_1281 =
																										BgL_lastzd2matchzd2_10468;
																									BgL_inputzd2portzd2_1280 =
																										BgL_inputzd2portzd2_10467;
																									goto
																										BgL_zc3anonymousza32633ze3z83_1282;
																								}
																							}
																					}
																				}
																				break;
																			case ((long) 10):

																				{	/* Unsafe/http.scm 294 */
																					long BgL_newzd2matchzd2_6456;

																					if (
																						(CELL_REF
																							(BgL_thezd2rgczd2contextz00_9732)
																							== BGl_symbol5335z00zz__httpz00))
																						{	/* Unsafe/http.scm 294 */
																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1280);
																							BgL_newzd2matchzd2_6456 =
																								((long) 2);
																						}
																					else
																						{	/* Unsafe/http.scm 294 */
																							BgL_newzd2matchzd2_6456 =
																								BgL_newzd2matchzd2_1283;
																						}
																					BgL_matchz00_1373 =
																						BgL_newzd2matchzd2_6456;
																				}
																				break;
																			default:
																				{
																					long BgL_lastzd2matchzd2_10474;

																					BgL_lastzd2matchzd2_10474 =
																						BgL_newzd2matchzd2_1283;
																					BgL_lastzd2matchzd2_1281 =
																						BgL_lastzd2matchzd2_10474;
																					goto
																						BgL_zc3anonymousza32633ze3z83_1282;
																				}
																			}
																	}
																}
															}
														break;
													case ((long) 13):

														{
															long BgL_lastzd2matchzd2_10478;

															obj_t BgL_inputzd2portzd2_10477;

															BgL_inputzd2portzd2_10477 =
																BgL_inputzd2portzd2_1092;
															BgL_lastzd2matchzd2_10478 =
																BgL_newzd2matchzd2_1095;
															BgL_lastzd2matchzd2_1071 =
																BgL_lastzd2matchzd2_10478;
															BgL_inputzd2portzd2_1070 =
																BgL_inputzd2portzd2_10477;
															goto BgL_zc3anonymousza32508ze3z83_1072;
														}
														break;
													case ((long) 10):

														{	/* Unsafe/http.scm 294 */
															long BgL_newzd2matchzd2_6221;

															if (
																(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
																	BGl_symbol5335z00zz__httpz00))
																{	/* Unsafe/http.scm 294 */
																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1092);
																	BgL_newzd2matchzd2_6221 = ((long) 2);
																}
															else
																{	/* Unsafe/http.scm 294 */
																	BgL_newzd2matchzd2_6221 =
																		BgL_newzd2matchzd2_1095;
																}
															BgL_matchz00_1373 = BgL_newzd2matchzd2_6221;
														}
														break;
													default:
														{
															long BgL_lastzd2matchzd2_10483;

															obj_t BgL_inputzd2portzd2_10482;

															BgL_inputzd2portzd2_10482 =
																BgL_inputzd2portzd2_1092;
															BgL_lastzd2matchzd2_10483 =
																BgL_newzd2matchzd2_1095;
															BgL_lastzd2matchzd2_1281 =
																BgL_lastzd2matchzd2_10483;
															BgL_inputzd2portzd2_1280 =
																BgL_inputzd2portzd2_10482;
															goto BgL_zc3anonymousza32633ze3z83_1282;
														}
													}
											}
										}
									}
							}
						else
							{	/* Unsafe/http.scm 294 */
								if (((long) (BgL_currentzd2charzd2_1218) == ((long) 73)))
									{	/* Unsafe/http.scm 294 */
										BgL_inputzd2portzd2_1081 = BgL_inputzd2portzd2_1215;
										BgL_lastzd2matchzd2_1082 = BgL_lastzd2matchzd2_1216;
									BgL_zc3anonymousza32513ze3z83_1083:
										{	/* Unsafe/http.scm 294 */
											long BgL_newzd2matchzd2_1084;

											if (
												(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
													BGl_symbol5335z00zz__httpz00))
												{	/* Unsafe/http.scm 294 */
													RGC_STOP_MATCH(BgL_inputzd2portzd2_1081);
													BgL_newzd2matchzd2_1084 = ((long) 2);
												}
											else
												{	/* Unsafe/http.scm 294 */
													RGC_STOP_MATCH(BgL_inputzd2portzd2_1081);
													BgL_newzd2matchzd2_1084 = ((long) 3);
												}
											{	/* Unsafe/http.scm 294 */
												int BgL_currentzd2charzd2_1085;

												BgL_currentzd2charzd2_1085 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1081);
												switch ((long) (BgL_currentzd2charzd2_1085))
													{
													case ((long) 0):

														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1081))
															{	/* Unsafe/http.scm 294 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_1081))
																	{

																		goto BgL_zc3anonymousza32513ze3z83_1083;
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		BgL_matchz00_1373 = BgL_newzd2matchzd2_1084;
																	}
															}
														else
															{
																long BgL_lastzd2matchzd2_10499;

																obj_t BgL_inputzd2portzd2_10498;

																BgL_inputzd2portzd2_10498 =
																	BgL_inputzd2portzd2_1081;
																BgL_lastzd2matchzd2_10499 =
																	BgL_newzd2matchzd2_1084;
																BgL_lastzd2matchzd2_1281 =
																	BgL_lastzd2matchzd2_10499;
																BgL_inputzd2portzd2_1280 =
																	BgL_inputzd2portzd2_10498;
																goto BgL_zc3anonymousza32633ze3z83_1282;
															}
														break;
													case ((long) 67):

														BgL_inputzd2portzd2_1234 = BgL_inputzd2portzd2_1081;
														BgL_lastzd2matchzd2_1235 = BgL_newzd2matchzd2_1084;
													BgL_zc3anonymousza32611ze3z83_1236:
														{	/* Unsafe/http.scm 294 */
															long BgL_newzd2matchzd2_1237;

															if (
																(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
																	BGl_symbol5335z00zz__httpz00))
																{	/* Unsafe/http.scm 294 */
																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1234);
																	BgL_newzd2matchzd2_1237 = ((long) 2);
																}
															else
																{	/* Unsafe/http.scm 294 */
																	BgL_newzd2matchzd2_1237 =
																		BgL_lastzd2matchzd2_1235;
																}
															{	/* Unsafe/http.scm 294 */
																int BgL_currentzd2charzd2_1238;

																BgL_currentzd2charzd2_1238 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1234);
																switch ((long) (BgL_currentzd2charzd2_1238))
																	{
																	case ((long) 0):

																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_1234))
																			{	/* Unsafe/http.scm 294 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_1234))
																					{

																						goto
																							BgL_zc3anonymousza32611ze3z83_1236;
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						BgL_matchz00_1373 =
																							BgL_newzd2matchzd2_1237;
																					}
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_10509;

																				obj_t BgL_inputzd2portzd2_10508;

																				BgL_inputzd2portzd2_10508 =
																					BgL_inputzd2portzd2_1234;
																				BgL_lastzd2matchzd2_10509 =
																					BgL_newzd2matchzd2_1237;
																				BgL_lastzd2matchzd2_1281 =
																					BgL_lastzd2matchzd2_10509;
																				BgL_inputzd2portzd2_1280 =
																					BgL_inputzd2portzd2_10508;
																				goto BgL_zc3anonymousza32633ze3z83_1282;
																			}
																		break;
																	case ((long) 89):

																		BgL_inputzd2portzd2_1245 =
																			BgL_inputzd2portzd2_1234;
																		BgL_lastzd2matchzd2_1246 =
																			BgL_newzd2matchzd2_1237;
																	BgL_zc3anonymousza32616ze3z83_1247:
																		{	/* Unsafe/http.scm 294 */
																			long BgL_newzd2matchzd2_1248;

																			if (
																				(CELL_REF
																					(BgL_thezd2rgczd2contextz00_9732) ==
																					BGl_symbol5335z00zz__httpz00))
																				{	/* Unsafe/http.scm 294 */
																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_1245);
																					BgL_newzd2matchzd2_1248 = ((long) 2);
																				}
																			else
																				{	/* Unsafe/http.scm 294 */
																					BgL_newzd2matchzd2_1248 =
																						BgL_lastzd2matchzd2_1246;
																				}
																			{	/* Unsafe/http.scm 294 */
																				int BgL_currentzd2charzd2_1249;

																				BgL_currentzd2charzd2_1249 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_1245);
																				switch ((long)
																					(BgL_currentzd2charzd2_1249))
																					{
																					case ((long) 0):

																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_1245))
																							{	/* Unsafe/http.scm 294 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_1245))
																									{

																										goto
																											BgL_zc3anonymousza32616ze3z83_1247;
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										BgL_matchz00_1373 =
																											BgL_newzd2matchzd2_1248;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_10519;

																								obj_t BgL_inputzd2portzd2_10518;

																								BgL_inputzd2portzd2_10518 =
																									BgL_inputzd2portzd2_1245;
																								BgL_lastzd2matchzd2_10519 =
																									BgL_newzd2matchzd2_1248;
																								BgL_lastzd2matchzd2_1281 =
																									BgL_lastzd2matchzd2_10519;
																								BgL_inputzd2portzd2_1280 =
																									BgL_inputzd2portzd2_10518;
																								goto
																									BgL_zc3anonymousza32633ze3z83_1282;
																							}
																						break;
																					case ((long) 32):

																						BgL_inputzd2portzd2_1256 =
																							BgL_inputzd2portzd2_1245;
																						BgL_lastzd2matchzd2_1257 =
																							BgL_newzd2matchzd2_1248;
																					BgL_zc3anonymousza32621ze3z83_1258:
																						{	/* Unsafe/http.scm 294 */
																							long BgL_newzd2matchzd2_1259;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1256);
																							BgL_newzd2matchzd2_1259 =
																								((long) 0);
																							{	/* Unsafe/http.scm 294 */
																								int BgL_currentzd2charzd2_1260;

																								BgL_currentzd2charzd2_1260 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_1256);
																								switch ((long)
																									(BgL_currentzd2charzd2_1260))
																									{
																									case ((long) 0):

																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_1256))
																											{	/* Unsafe/http.scm 294 */
																												if (rgc_fill_buffer
																													(BgL_inputzd2portzd2_1256))
																													{

																														goto
																															BgL_zc3anonymousza32621ze3z83_1258;
																													}
																												else
																													{	/* Unsafe/http.scm 294 */
																														BgL_matchz00_1373 =
																															BgL_newzd2matchzd2_1259;
																													}
																											}
																										else
																											{
																												long
																													BgL_lastzd2matchzd2_10527;
																												obj_t
																													BgL_inputzd2portzd2_10526;
																												BgL_inputzd2portzd2_10526
																													=
																													BgL_inputzd2portzd2_1256;
																												BgL_lastzd2matchzd2_10527
																													=
																													BgL_newzd2matchzd2_1259;
																												BgL_lastzd2matchzd2_1281
																													=
																													BgL_lastzd2matchzd2_10527;
																												BgL_inputzd2portzd2_1280
																													=
																													BgL_inputzd2portzd2_10526;
																												goto
																													BgL_zc3anonymousza32633ze3z83_1282;
																											}
																										break;
																									case ((long) 13):

																										{
																											long
																												BgL_lastzd2matchzd2_10529;
																											obj_t
																												BgL_inputzd2portzd2_10528;
																											BgL_inputzd2portzd2_10528
																												=
																												BgL_inputzd2portzd2_1256;
																											BgL_lastzd2matchzd2_10529
																												=
																												BgL_newzd2matchzd2_1259;
																											BgL_lastzd2matchzd2_1071 =
																												BgL_lastzd2matchzd2_10529;
																											BgL_inputzd2portzd2_1070 =
																												BgL_inputzd2portzd2_10528;
																											goto
																												BgL_zc3anonymousza32508ze3z83_1072;
																										}
																										break;
																									case ((long) 10):

																										{	/* Unsafe/http.scm 294 */
																											long
																												BgL_newzd2matchzd2_6432;
																											if ((CELL_REF
																													(BgL_thezd2rgczd2contextz00_9732)
																													==
																													BGl_symbol5335z00zz__httpz00))
																												{	/* Unsafe/http.scm 294 */
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_1256);
																													BgL_newzd2matchzd2_6432
																														= ((long) 2);
																												}
																											else
																												{	/* Unsafe/http.scm 294 */
																													BgL_newzd2matchzd2_6432
																														=
																														BgL_newzd2matchzd2_1259;
																												}
																											BgL_matchz00_1373 =
																												BgL_newzd2matchzd2_6432;
																										}
																										break;
																									default:
																										{
																											long
																												BgL_lastzd2matchzd2_10534;
																											obj_t
																												BgL_inputzd2portzd2_10533;
																											BgL_inputzd2portzd2_10533
																												=
																												BgL_inputzd2portzd2_1256;
																											BgL_lastzd2matchzd2_10534
																												=
																												BgL_newzd2matchzd2_1259;
																											BgL_lastzd2matchzd2_1281 =
																												BgL_lastzd2matchzd2_10534;
																											BgL_inputzd2portzd2_1280 =
																												BgL_inputzd2portzd2_10533;
																											goto
																												BgL_zc3anonymousza32633ze3z83_1282;
																										}
																									}
																							}
																						}
																						break;
																					case ((long) 13):

																						{
																							long BgL_lastzd2matchzd2_10538;

																							obj_t BgL_inputzd2portzd2_10537;

																							BgL_inputzd2portzd2_10537 =
																								BgL_inputzd2portzd2_1245;
																							BgL_lastzd2matchzd2_10538 =
																								BgL_newzd2matchzd2_1248;
																							BgL_lastzd2matchzd2_1071 =
																								BgL_lastzd2matchzd2_10538;
																							BgL_inputzd2portzd2_1070 =
																								BgL_inputzd2portzd2_10537;
																							goto
																								BgL_zc3anonymousza32508ze3z83_1072;
																						}
																						break;
																					case ((long) 10):

																						{	/* Unsafe/http.scm 294 */
																							long BgL_newzd2matchzd2_6423;

																							if (
																								(CELL_REF
																									(BgL_thezd2rgczd2contextz00_9732)
																									==
																									BGl_symbol5335z00zz__httpz00))
																								{	/* Unsafe/http.scm 294 */
																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_1245);
																									BgL_newzd2matchzd2_6423 =
																										((long) 2);
																								}
																							else
																								{	/* Unsafe/http.scm 294 */
																									BgL_newzd2matchzd2_6423 =
																										BgL_newzd2matchzd2_1248;
																								}
																							BgL_matchz00_1373 =
																								BgL_newzd2matchzd2_6423;
																						}
																						break;
																					default:
																						{
																							long BgL_lastzd2matchzd2_10543;

																							obj_t BgL_inputzd2portzd2_10542;

																							BgL_inputzd2portzd2_10542 =
																								BgL_inputzd2portzd2_1245;
																							BgL_lastzd2matchzd2_10543 =
																								BgL_newzd2matchzd2_1248;
																							BgL_lastzd2matchzd2_1281 =
																								BgL_lastzd2matchzd2_10543;
																							BgL_inputzd2portzd2_1280 =
																								BgL_inputzd2portzd2_10542;
																							goto
																								BgL_zc3anonymousza32633ze3z83_1282;
																						}
																					}
																			}
																		}
																		break;
																	case ((long) 13):

																		{
																			long BgL_lastzd2matchzd2_10547;

																			obj_t BgL_inputzd2portzd2_10546;

																			BgL_inputzd2portzd2_10546 =
																				BgL_inputzd2portzd2_1234;
																			BgL_lastzd2matchzd2_10547 =
																				BgL_newzd2matchzd2_1237;
																			BgL_lastzd2matchzd2_1071 =
																				BgL_lastzd2matchzd2_10547;
																			BgL_inputzd2portzd2_1070 =
																				BgL_inputzd2portzd2_10546;
																			goto BgL_zc3anonymousza32508ze3z83_1072;
																		}
																		break;
																	case ((long) 10):

																		{	/* Unsafe/http.scm 294 */
																			long BgL_newzd2matchzd2_6414;

																			if (
																				(CELL_REF
																					(BgL_thezd2rgczd2contextz00_9732) ==
																					BGl_symbol5335z00zz__httpz00))
																				{	/* Unsafe/http.scm 294 */
																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_1234);
																					BgL_newzd2matchzd2_6414 = ((long) 2);
																				}
																			else
																				{	/* Unsafe/http.scm 294 */
																					BgL_newzd2matchzd2_6414 =
																						BgL_newzd2matchzd2_1237;
																				}
																			BgL_matchz00_1373 =
																				BgL_newzd2matchzd2_6414;
																		}
																		break;
																	default:
																		{
																			long BgL_lastzd2matchzd2_10552;

																			obj_t BgL_inputzd2portzd2_10551;

																			BgL_inputzd2portzd2_10551 =
																				BgL_inputzd2portzd2_1234;
																			BgL_lastzd2matchzd2_10552 =
																				BgL_newzd2matchzd2_1237;
																			BgL_lastzd2matchzd2_1281 =
																				BgL_lastzd2matchzd2_10552;
																			BgL_inputzd2portzd2_1280 =
																				BgL_inputzd2portzd2_10551;
																			goto BgL_zc3anonymousza32633ze3z83_1282;
																		}
																	}
															}
														}
														break;
													case ((long) 13):

														{
															long BgL_lastzd2matchzd2_10556;

															obj_t BgL_inputzd2portzd2_10555;

															BgL_inputzd2portzd2_10555 =
																BgL_inputzd2portzd2_1081;
															BgL_lastzd2matchzd2_10556 =
																BgL_newzd2matchzd2_1084;
															BgL_lastzd2matchzd2_1071 =
																BgL_lastzd2matchzd2_10556;
															BgL_inputzd2portzd2_1070 =
																BgL_inputzd2portzd2_10555;
															goto BgL_zc3anonymousza32508ze3z83_1072;
														}
														break;
													case ((long) 10):

														{	/* Unsafe/http.scm 294 */
															long BgL_newzd2matchzd2_6211;

															if (
																(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
																	BGl_symbol5335z00zz__httpz00))
																{	/* Unsafe/http.scm 294 */
																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1081);
																	BgL_newzd2matchzd2_6211 = ((long) 2);
																}
															else
																{	/* Unsafe/http.scm 294 */
																	BgL_newzd2matchzd2_6211 =
																		BgL_newzd2matchzd2_1084;
																}
															BgL_matchz00_1373 = BgL_newzd2matchzd2_6211;
														}
														break;
													default:
														{
															long BgL_lastzd2matchzd2_10561;

															obj_t BgL_inputzd2portzd2_10560;

															BgL_inputzd2portzd2_10560 =
																BgL_inputzd2portzd2_1081;
															BgL_lastzd2matchzd2_10561 =
																BgL_newzd2matchzd2_1084;
															BgL_lastzd2matchzd2_1281 =
																BgL_lastzd2matchzd2_10561;
															BgL_inputzd2portzd2_1280 =
																BgL_inputzd2portzd2_10560;
															goto BgL_zc3anonymousza32633ze3z83_1282;
														}
													}
											}
										}
									}
								else
									{	/* Unsafe/http.scm 294 */
										bool_t BgL_testz00_10564;

										if (((long) (BgL_currentzd2charzd2_1218) == ((long) 72)))
											{	/* Unsafe/http.scm 294 */
												BgL_testz00_10564 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/http.scm 294 */
												if (
													((long) (BgL_currentzd2charzd2_1218) == ((long) 80)))
													{	/* Unsafe/http.scm 294 */
														BgL_testz00_10564 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/http.scm 294 */
														bool_t BgL_testz00_10571;

														if (
															((long) (BgL_currentzd2charzd2_1218) ==
																((long) 84)))
															{	/* Unsafe/http.scm 294 */
																BgL_testz00_10571 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/http.scm 294 */
																BgL_testz00_10571 =
																	(
																	(long) (BgL_currentzd2charzd2_1218) ==
																	((long) 83));
															}
														if (BgL_testz00_10571)
															{	/* Unsafe/http.scm 294 */
																BgL_testz00_10564 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/http.scm 294 */
																if (
																	((long) (BgL_currentzd2charzd2_1218) ==
																		((long) 104)))
																	{	/* Unsafe/http.scm 294 */
																		BgL_testz00_10564 = ((bool_t) 1);
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		if (
																			((long) (BgL_currentzd2charzd2_1218) ==
																				((long) 112)))
																			{	/* Unsafe/http.scm 294 */
																				BgL_testz00_10564 = ((bool_t) 1);
																			}
																		else
																			{	/* Unsafe/http.scm 294 */
																				bool_t BgL__ortest_2110z00_1232;

																				BgL__ortest_2110z00_1232 =
																					(
																					(long) (BgL_currentzd2charzd2_1218) ==
																					((long) 116));
																				if (BgL__ortest_2110z00_1232)
																					{	/* Unsafe/http.scm 294 */
																						BgL_testz00_10564 =
																							BgL__ortest_2110z00_1232;
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						BgL_testz00_10564 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1218) ==
																							((long) 115));
											}}}}}}
										if (BgL_testz00_10564)
											{	/* Unsafe/http.scm 294 */
												BgL_inputzd2portzd2_1107 = BgL_inputzd2portzd2_1215;
												BgL_lastzd2matchzd2_1108 = BgL_lastzd2matchzd2_1216;
											BgL_zc3anonymousza32524ze3z83_1109:
												{	/* Unsafe/http.scm 294 */
													long BgL_newzd2matchzd2_1110;

													if (
														(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
															BGl_symbol5335z00zz__httpz00))
														{	/* Unsafe/http.scm 294 */
															RGC_STOP_MATCH(BgL_inputzd2portzd2_1107);
															BgL_newzd2matchzd2_1110 = ((long) 2);
														}
													else
														{	/* Unsafe/http.scm 294 */
															RGC_STOP_MATCH(BgL_inputzd2portzd2_1107);
															BgL_newzd2matchzd2_1110 = ((long) 3);
														}
													{	/* Unsafe/http.scm 294 */
														int BgL_currentzd2charzd2_1111;

														BgL_currentzd2charzd2_1111 =
															RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1107);
														if (
															((long) (BgL_currentzd2charzd2_1111) ==
																((long) 0)))
															{	/* Unsafe/http.scm 294 */
																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1107))
																	{	/* Unsafe/http.scm 294 */
																		if (rgc_fill_buffer
																			(BgL_inputzd2portzd2_1107))
																			{

																				goto BgL_zc3anonymousza32524ze3z83_1109;
																			}
																		else
																			{	/* Unsafe/http.scm 294 */
																				BgL_matchz00_1373 =
																					BgL_newzd2matchzd2_1110;
																			}
																	}
																else
																	{
																		long BgL_lastzd2matchzd2_10601;

																		obj_t BgL_inputzd2portzd2_10600;

																		BgL_inputzd2portzd2_10600 =
																			BgL_inputzd2portzd2_1107;
																		BgL_lastzd2matchzd2_10601 =
																			BgL_newzd2matchzd2_1110;
																		BgL_lastzd2matchzd2_1281 =
																			BgL_lastzd2matchzd2_10601;
																		BgL_inputzd2portzd2_1280 =
																			BgL_inputzd2portzd2_10600;
																		goto BgL_zc3anonymousza32633ze3z83_1282;
																	}
															}
														else
															{	/* Unsafe/http.scm 294 */
																bool_t BgL_testz00_10602;

																if (
																	((long) (BgL_currentzd2charzd2_1111) ==
																		((long) 72)))
																	{	/* Unsafe/http.scm 294 */
																		BgL_testz00_10602 = ((bool_t) 1);
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		if (
																			((long) (BgL_currentzd2charzd2_1111) ==
																				((long) 80)))
																			{	/* Unsafe/http.scm 294 */
																				BgL_testz00_10602 = ((bool_t) 1);
																			}
																		else
																			{	/* Unsafe/http.scm 294 */
																				bool_t BgL_testz00_10609;

																				if (
																					((long) (BgL_currentzd2charzd2_1111)
																						== ((long) 84)))
																					{	/* Unsafe/http.scm 294 */
																						BgL_testz00_10609 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						BgL_testz00_10609 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1111) ==
																							((long) 83));
																					}
																				if (BgL_testz00_10609)
																					{	/* Unsafe/http.scm 294 */
																						BgL_testz00_10602 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1111) ==
																								((long) 104)))
																							{	/* Unsafe/http.scm 294 */
																								BgL_testz00_10602 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 294 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_1111)
																										== ((long) 112)))
																									{	/* Unsafe/http.scm 294 */
																										BgL_testz00_10602 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										bool_t
																											BgL__ortest_2102z00_1124;
																										BgL__ortest_2102z00_1124 =
																											((long)
																											(BgL_currentzd2charzd2_1111)
																											== ((long) 116));
																										if (BgL__ortest_2102z00_1124)
																											{	/* Unsafe/http.scm 294 */
																												BgL_testz00_10602 =
																													BgL__ortest_2102z00_1124;
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												BgL_testz00_10602 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1111)
																													== ((long) 115));
																	}}}}}}
																if (BgL_testz00_10602)
																	{	/* Unsafe/http.scm 294 */
																		BgL_inputzd2portzd2_1127 =
																			BgL_inputzd2portzd2_1107;
																		BgL_lastzd2matchzd2_1128 =
																			BgL_newzd2matchzd2_1110;
																	BgL_zc3anonymousza32537ze3z83_1129:
																		{	/* Unsafe/http.scm 294 */
																			long BgL_newzd2matchzd2_1130;

																			if (
																				(CELL_REF
																					(BgL_thezd2rgczd2contextz00_9732) ==
																					BGl_symbol5335z00zz__httpz00))
																				{	/* Unsafe/http.scm 294 */
																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_1127);
																					BgL_newzd2matchzd2_1130 = ((long) 2);
																				}
																			else
																				{	/* Unsafe/http.scm 294 */
																					BgL_newzd2matchzd2_1130 =
																						BgL_lastzd2matchzd2_1128;
																				}
																			{	/* Unsafe/http.scm 294 */
																				int BgL_currentzd2charzd2_1131;

																				BgL_currentzd2charzd2_1131 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_1127);
																				if (((long) (BgL_currentzd2charzd2_1131)
																						== ((long) 0)))
																					{	/* Unsafe/http.scm 294 */
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_1127))
																							{	/* Unsafe/http.scm 294 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_1127))
																									{

																										goto
																											BgL_zc3anonymousza32537ze3z83_1129;
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										BgL_matchz00_1373 =
																											BgL_newzd2matchzd2_1130;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_10638;

																								obj_t BgL_inputzd2portzd2_10637;

																								BgL_inputzd2portzd2_10637 =
																									BgL_inputzd2portzd2_1127;
																								BgL_lastzd2matchzd2_10638 =
																									BgL_newzd2matchzd2_1130;
																								BgL_lastzd2matchzd2_1281 =
																									BgL_lastzd2matchzd2_10638;
																								BgL_inputzd2portzd2_1280 =
																									BgL_inputzd2portzd2_10637;
																								goto
																									BgL_zc3anonymousza32633ze3z83_1282;
																							}
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						bool_t BgL_testz00_10639;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_1131) ==
																								((long) 72)))
																							{	/* Unsafe/http.scm 294 */
																								BgL_testz00_10639 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 294 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_1131)
																										== ((long) 80)))
																									{	/* Unsafe/http.scm 294 */
																										BgL_testz00_10639 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										bool_t BgL_testz00_10646;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1131)
																												== ((long) 84)))
																											{	/* Unsafe/http.scm 294 */
																												BgL_testz00_10646 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												BgL_testz00_10646 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1131)
																													== ((long) 83));
																											}
																										if (BgL_testz00_10646)
																											{	/* Unsafe/http.scm 294 */
																												BgL_testz00_10639 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1131)
																														== ((long) 104)))
																													{	/* Unsafe/http.scm 294 */
																														BgL_testz00_10639 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/http.scm 294 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1131)
																																==
																																((long) 112)))
																															{	/* Unsafe/http.scm 294 */
																																BgL_testz00_10639
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/http.scm 294 */
																																bool_t
																																	BgL__ortest_2105z00_1144;
																																BgL__ortest_2105z00_1144
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1131)
																																	==
																																	((long) 116));
																																if (BgL__ortest_2105z00_1144)
																																	{	/* Unsafe/http.scm 294 */
																																		BgL_testz00_10639
																																			=
																																			BgL__ortest_2105z00_1144;
																																	}
																																else
																																	{	/* Unsafe/http.scm 294 */
																																		BgL_testz00_10639
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_1131)
																																			==
																																			((long)
																																				115));
																							}}}}}}
																						if (BgL_testz00_10639)
																							{
																								long BgL_lastzd2matchzd2_10663;

																								BgL_lastzd2matchzd2_10663 =
																									BgL_newzd2matchzd2_1130;
																								BgL_lastzd2matchzd2_1128 =
																									BgL_lastzd2matchzd2_10663;
																								goto
																									BgL_zc3anonymousza32537ze3z83_1129;
																							}
																						else
																							{	/* Unsafe/http.scm 294 */
																								switch (
																									(long)
																									(BgL_currentzd2charzd2_1131))
																									{
																									case ((long) 47):

																										BgL_inputzd2portzd2_1202 =
																											BgL_inputzd2portzd2_1127;
																										BgL_lastzd2matchzd2_1203 =
																											BgL_newzd2matchzd2_1130;
																									BgL_zc3anonymousza32587ze3z83_1204:
																										{	/* Unsafe/http.scm 294 */
																											long
																												BgL_newzd2matchzd2_1205;
																											if ((CELL_REF
																													(BgL_thezd2rgczd2contextz00_9732)
																													==
																													BGl_symbol5335z00zz__httpz00))
																												{	/* Unsafe/http.scm 294 */
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_1202);
																													BgL_newzd2matchzd2_1205
																														= ((long) 2);
																												}
																											else
																												{	/* Unsafe/http.scm 294 */
																													BgL_newzd2matchzd2_1205
																														=
																														BgL_lastzd2matchzd2_1203;
																												}
																											{	/* Unsafe/http.scm 294 */
																												int
																													BgL_currentzd2charzd2_1206;
																												BgL_currentzd2charzd2_1206
																													=
																													RGC_BUFFER_GET_CHAR
																													(BgL_inputzd2portzd2_1202);
																												if (((long)
																														(BgL_currentzd2charzd2_1206)
																														== ((long) 0)))
																													{	/* Unsafe/http.scm 294 */
																														if (RGC_BUFFER_EMPTY
																															(BgL_inputzd2portzd2_1202))
																															{	/* Unsafe/http.scm 294 */
																																if (rgc_fill_buffer(BgL_inputzd2portzd2_1202))
																																	{

																																		goto
																																			BgL_zc3anonymousza32587ze3z83_1204;
																																	}
																																else
																																	{	/* Unsafe/http.scm 294 */
																																		BgL_matchz00_1373
																																			=
																																			BgL_newzd2matchzd2_1205;
																																	}
																															}
																														else
																															{
																																long
																																	BgL_lastzd2matchzd2_10676;
																																obj_t
																																	BgL_inputzd2portzd2_10675;
																																BgL_inputzd2portzd2_10675
																																	=
																																	BgL_inputzd2portzd2_1202;
																																BgL_lastzd2matchzd2_10676
																																	=
																																	BgL_newzd2matchzd2_1205;
																																BgL_lastzd2matchzd2_1281
																																	=
																																	BgL_lastzd2matchzd2_10676;
																																BgL_inputzd2portzd2_1280
																																	=
																																	BgL_inputzd2portzd2_10675;
																																goto
																																	BgL_zc3anonymousza32633ze3z83_1282;
																															}
																													}
																												else
																													{	/* Unsafe/http.scm 294 */
																														bool_t
																															BgL_testz00_10677;
																														if (((long)
																																(BgL_currentzd2charzd2_1206)
																																>= ((long) 48)))
																															{	/* Unsafe/http.scm 294 */
																																BgL_testz00_10677
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1206)
																																	<
																																	((long) 58));
																															}
																														else
																															{	/* Unsafe/http.scm 294 */
																																BgL_testz00_10677
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_10677)
																															{	/* Unsafe/http.scm 294 */
																																BgL_inputzd2portzd2_1174
																																	=
																																	BgL_inputzd2portzd2_1202;
																																BgL_lastzd2matchzd2_1175
																																	=
																																	BgL_newzd2matchzd2_1205;
																															BgL_zc3anonymousza32569ze3z83_1176:
																																{	/* Unsafe/http.scm 294 */
																																	long
																																		BgL_newzd2matchzd2_1177;
																																	if ((CELL_REF
																																			(BgL_thezd2rgczd2contextz00_9732)
																																			==
																																			BGl_symbol5335z00zz__httpz00))
																																		{	/* Unsafe/http.scm 294 */
																																			RGC_STOP_MATCH
																																				(BgL_inputzd2portzd2_1174);
																																			BgL_newzd2matchzd2_1177
																																				=
																																				((long)
																																				2);
																																		}
																																	else
																																		{	/* Unsafe/http.scm 294 */
																																			BgL_newzd2matchzd2_1177
																																				=
																																				BgL_lastzd2matchzd2_1175;
																																		}
																																	{	/* Unsafe/http.scm 294 */
																																		int
																																			BgL_currentzd2charzd2_1178;
																																		BgL_currentzd2charzd2_1178
																																			=
																																			RGC_BUFFER_GET_CHAR
																																			(BgL_inputzd2portzd2_1174);
																																		if (((long)
																																				(BgL_currentzd2charzd2_1178)
																																				==
																																				((long)
																																					0)))
																																			{	/* Unsafe/http.scm 294 */
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1174))
																																					{	/* Unsafe/http.scm 294 */
																																						if (rgc_fill_buffer(BgL_inputzd2portzd2_1174))
																																							{

																																								goto
																																									BgL_zc3anonymousza32569ze3z83_1176;
																																							}
																																						else
																																							{	/* Unsafe/http.scm 294 */
																																								BgL_matchz00_1373
																																									=
																																									BgL_newzd2matchzd2_1177;
																																							}
																																					}
																																				else
																																					{
																																						long
																																							BgL_lastzd2matchzd2_10695;
																																						obj_t
																																							BgL_inputzd2portzd2_10694;
																																						BgL_inputzd2portzd2_10694
																																							=
																																							BgL_inputzd2portzd2_1174;
																																						BgL_lastzd2matchzd2_10695
																																							=
																																							BgL_newzd2matchzd2_1177;
																																						BgL_lastzd2matchzd2_1281
																																							=
																																							BgL_lastzd2matchzd2_10695;
																																						BgL_inputzd2portzd2_1280
																																							=
																																							BgL_inputzd2portzd2_10694;
																																						goto
																																							BgL_zc3anonymousza32633ze3z83_1282;
																																					}
																																			}
																																		else
																																			{	/* Unsafe/http.scm 294 */
																																				bool_t
																																					BgL_testz00_10696;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1178)
																																						>=
																																						((long) 48)))
																																					{	/* Unsafe/http.scm 294 */
																																						BgL_testz00_10696
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1178)
																																							<
																																							((long) 58));
																																					}
																																				else
																																					{	/* Unsafe/http.scm 294 */
																																						BgL_testz00_10696
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_10696)
																																					{
																																						long
																																							BgL_lastzd2matchzd2_10702;
																																						BgL_lastzd2matchzd2_10702
																																							=
																																							BgL_newzd2matchzd2_1177;
																																						BgL_lastzd2matchzd2_1175
																																							=
																																							BgL_lastzd2matchzd2_10702;
																																						goto
																																							BgL_zc3anonymousza32569ze3z83_1176;
																																					}
																																				else
																																					{	/* Unsafe/http.scm 294 */
																																						switch
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1178))
																																							{
																																							case ((long) 46):

																																								BgL_inputzd2portzd2_1147 = BgL_inputzd2portzd2_1174;
																																								BgL_lastzd2matchzd2_1148
																																									=
																																									BgL_newzd2matchzd2_1177;
																																							BgL_zc3anonymousza32550ze3z83_1149:
																																								{	/* Unsafe/http.scm 294 */
																																									long
																																										BgL_newzd2matchzd2_1150;
																																									if ((CELL_REF(BgL_thezd2rgczd2contextz00_9732) == BGl_symbol5335z00zz__httpz00))
																																										{	/* Unsafe/http.scm 294 */
																																											RGC_STOP_MATCH
																																												(BgL_inputzd2portzd2_1147);
																																											BgL_newzd2matchzd2_1150
																																												=
																																												(
																																												(long)
																																												2);
																																										}
																																									else
																																										{	/* Unsafe/http.scm 294 */
																																											BgL_newzd2matchzd2_1150
																																												=
																																												BgL_lastzd2matchzd2_1148;
																																										}
																																									{	/* Unsafe/http.scm 294 */
																																										int
																																											BgL_currentzd2charzd2_1151;
																																										BgL_currentzd2charzd2_1151
																																											=
																																											RGC_BUFFER_GET_CHAR
																																											(BgL_inputzd2portzd2_1147);
																																										if (((long) (BgL_currentzd2charzd2_1151) == ((long) 0)))
																																											{	/* Unsafe/http.scm 294 */
																																												if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1147))
																																													{	/* Unsafe/http.scm 294 */
																																														if (rgc_fill_buffer(BgL_inputzd2portzd2_1147))
																																															{

																																																goto
																																																	BgL_zc3anonymousza32550ze3z83_1149;
																																															}
																																														else
																																															{	/* Unsafe/http.scm 294 */
																																																BgL_matchz00_1373
																																																	=
																																																	BgL_newzd2matchzd2_1150;
																																															}
																																													}
																																												else
																																													{
																																														long
																																															BgL_lastzd2matchzd2_10715;
																																														obj_t
																																															BgL_inputzd2portzd2_10714;
																																														BgL_inputzd2portzd2_10714
																																															=
																																															BgL_inputzd2portzd2_1147;
																																														BgL_lastzd2matchzd2_10715
																																															=
																																															BgL_newzd2matchzd2_1150;
																																														BgL_lastzd2matchzd2_1281
																																															=
																																															BgL_lastzd2matchzd2_10715;
																																														BgL_inputzd2portzd2_1280
																																															=
																																															BgL_inputzd2portzd2_10714;
																																														goto
																																															BgL_zc3anonymousza32633ze3z83_1282;
																																													}
																																											}
																																										else
																																											{	/* Unsafe/http.scm 294 */
																																												bool_t
																																													BgL_testz00_10716;
																																												if (((long) (BgL_currentzd2charzd2_1151) >= ((long) 48)))
																																													{	/* Unsafe/http.scm 294 */
																																														BgL_testz00_10716
																																															=
																																															(
																																															(long)
																																															(BgL_currentzd2charzd2_1151)
																																															<
																																															((long) 58));
																																													}
																																												else
																																													{	/* Unsafe/http.scm 294 */
																																														BgL_testz00_10716
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												if (BgL_testz00_10716)
																																													{	/* Unsafe/http.scm 294 */
																																														BgL_inputzd2portzd2_1266
																																															=
																																															BgL_inputzd2portzd2_1147;
																																														BgL_lastzd2matchzd2_1267
																																															=
																																															BgL_newzd2matchzd2_1150;
																																													BgL_zc3anonymousza32625ze3z83_1268:
																																														{	/* Unsafe/http.scm 294 */
																																															long
																																																BgL_newzd2matchzd2_1269;
																																															if ((CELL_REF(BgL_thezd2rgczd2contextz00_9732) == BGl_symbol5335z00zz__httpz00))
																																																{	/* Unsafe/http.scm 294 */
																																																	RGC_STOP_MATCH
																																																		(BgL_inputzd2portzd2_1266);
																																																	BgL_newzd2matchzd2_1269
																																																		=
																																																		(
																																																		(long)
																																																		2);
																																																}
																																															else
																																																{	/* Unsafe/http.scm 294 */
																																																	BgL_newzd2matchzd2_1269
																																																		=
																																																		BgL_lastzd2matchzd2_1267;
																																																}
																																															{	/* Unsafe/http.scm 294 */
																																																int
																																																	BgL_currentzd2charzd2_1270;
																																																BgL_currentzd2charzd2_1270
																																																	=
																																																	RGC_BUFFER_GET_CHAR
																																																	(BgL_inputzd2portzd2_1266);
																																																if (((long) (BgL_currentzd2charzd2_1270) == ((long) 0)))
																																																	{	/* Unsafe/http.scm 294 */
																																																		if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1266))
																																																			{	/* Unsafe/http.scm 294 */
																																																				if (rgc_fill_buffer(BgL_inputzd2portzd2_1266))
																																																					{

																																																						goto
																																																							BgL_zc3anonymousza32625ze3z83_1268;
																																																					}
																																																				else
																																																					{	/* Unsafe/http.scm 294 */
																																																						BgL_matchz00_1373
																																																							=
																																																							BgL_newzd2matchzd2_1269;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				long
																																																					BgL_lastzd2matchzd2_10734;
																																																				obj_t
																																																					BgL_inputzd2portzd2_10733;
																																																				BgL_inputzd2portzd2_10733
																																																					=
																																																					BgL_inputzd2portzd2_1266;
																																																				BgL_lastzd2matchzd2_10734
																																																					=
																																																					BgL_newzd2matchzd2_1269;
																																																				BgL_lastzd2matchzd2_1281
																																																					=
																																																					BgL_lastzd2matchzd2_10734;
																																																				BgL_inputzd2portzd2_1280
																																																					=
																																																					BgL_inputzd2portzd2_10733;
																																																				goto
																																																					BgL_zc3anonymousza32633ze3z83_1282;
																																																			}
																																																	}
																																																else
																																																	{	/* Unsafe/http.scm 294 */
																																																		bool_t
																																																			BgL_testz00_10735;
																																																		if (((long) (BgL_currentzd2charzd2_1270) >= ((long) 48)))
																																																			{	/* Unsafe/http.scm 294 */
																																																				BgL_testz00_10735
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1270)
																																																					<
																																																					((long) 58));
																																																			}
																																																		else
																																																			{	/* Unsafe/http.scm 294 */
																																																				BgL_testz00_10735
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_10735)
																																																			{
																																																				long
																																																					BgL_lastzd2matchzd2_10741;
																																																				BgL_lastzd2matchzd2_10741
																																																					=
																																																					BgL_newzd2matchzd2_1269;
																																																				BgL_lastzd2matchzd2_1267
																																																					=
																																																					BgL_lastzd2matchzd2_10741;
																																																				goto
																																																					BgL_zc3anonymousza32625ze3z83_1268;
																																																			}
																																																		else
																																																			{	/* Unsafe/http.scm 294 */
																																																				switch
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1270))
																																																					{
																																																					case ((long) 32):

																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_10743;
																																																							obj_t
																																																								BgL_inputzd2portzd2_10742;
																																																							BgL_inputzd2portzd2_10742
																																																								=
																																																								BgL_inputzd2portzd2_1266;
																																																							BgL_lastzd2matchzd2_10743
																																																								=
																																																								BgL_newzd2matchzd2_1269;
																																																							BgL_lastzd2matchzd2_1257
																																																								=
																																																								BgL_lastzd2matchzd2_10743;
																																																							BgL_inputzd2portzd2_1256
																																																								=
																																																								BgL_inputzd2portzd2_10742;
																																																							goto
																																																								BgL_zc3anonymousza32621ze3z83_1258;
																																																						}
																																																						break;
																																																					case ((long) 13):

																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_10745;
																																																							obj_t
																																																								BgL_inputzd2portzd2_10744;
																																																							BgL_inputzd2portzd2_10744
																																																								=
																																																								BgL_inputzd2portzd2_1266;
																																																							BgL_lastzd2matchzd2_10745
																																																								=
																																																								BgL_newzd2matchzd2_1269;
																																																							BgL_lastzd2matchzd2_1071
																																																								=
																																																								BgL_lastzd2matchzd2_10745;
																																																							BgL_inputzd2portzd2_1070
																																																								=
																																																								BgL_inputzd2portzd2_10744;
																																																							goto
																																																								BgL_zc3anonymousza32508ze3z83_1072;
																																																						}
																																																						break;
																																																					case ((long) 10):

																																																						{	/* Unsafe/http.scm 294 */
																																																							long
																																																								BgL_newzd2matchzd2_6447;
																																																							if ((CELL_REF(BgL_thezd2rgczd2contextz00_9732) == BGl_symbol5335z00zz__httpz00))
																																																								{	/* Unsafe/http.scm 294 */
																																																									RGC_STOP_MATCH
																																																										(BgL_inputzd2portzd2_1266);
																																																									BgL_newzd2matchzd2_6447
																																																										=
																																																										(
																																																										(long)
																																																										2);
																																																								}
																																																							else
																																																								{	/* Unsafe/http.scm 294 */
																																																									BgL_newzd2matchzd2_6447
																																																										=
																																																										BgL_newzd2matchzd2_1269;
																																																								}
																																																							BgL_matchz00_1373
																																																								=
																																																								BgL_newzd2matchzd2_6447;
																																																						}
																																																						break;
																																																					default:
																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_10750;
																																																							obj_t
																																																								BgL_inputzd2portzd2_10749;
																																																							BgL_inputzd2portzd2_10749
																																																								=
																																																								BgL_inputzd2portzd2_1266;
																																																							BgL_lastzd2matchzd2_10750
																																																								=
																																																								BgL_newzd2matchzd2_1269;
																																																							BgL_lastzd2matchzd2_1281
																																																								=
																																																								BgL_lastzd2matchzd2_10750;
																																																							BgL_inputzd2portzd2_1280
																																																								=
																																																								BgL_inputzd2portzd2_10749;
																																																							goto
																																																								BgL_zc3anonymousza32633ze3z83_1282;
																																																						}
																																																					}
																																																			}
																																																	}
																																															}
																																														}
																																													}
																																												else
																																													{	/* Unsafe/http.scm 294 */
																																														if (((long) (BgL_currentzd2charzd2_1151) == ((long) 13)))
																																															{
																																																long
																																																	BgL_lastzd2matchzd2_10757;
																																																obj_t
																																																	BgL_inputzd2portzd2_10756;
																																																BgL_inputzd2portzd2_10756
																																																	=
																																																	BgL_inputzd2portzd2_1147;
																																																BgL_lastzd2matchzd2_10757
																																																	=
																																																	BgL_newzd2matchzd2_1150;
																																																BgL_lastzd2matchzd2_1071
																																																	=
																																																	BgL_lastzd2matchzd2_10757;
																																																BgL_inputzd2portzd2_1070
																																																	=
																																																	BgL_inputzd2portzd2_10756;
																																																goto
																																																	BgL_zc3anonymousza32508ze3z83_1072;
																																															}
																																														else
																																															{	/* Unsafe/http.scm 294 */
																																																if (((long) (BgL_currentzd2charzd2_1151) == ((long) 10)))
																																																	{	/* Unsafe/http.scm 294 */
																																																		long
																																																			BgL_newzd2matchzd2_6297;
																																																		if ((CELL_REF(BgL_thezd2rgczd2contextz00_9732) == BGl_symbol5335z00zz__httpz00))
																																																			{	/* Unsafe/http.scm 294 */
																																																				RGC_STOP_MATCH
																																																					(BgL_inputzd2portzd2_1147);
																																																				BgL_newzd2matchzd2_6297
																																																					=
																																																					(
																																																					(long)
																																																					2);
																																																			}
																																																		else
																																																			{	/* Unsafe/http.scm 294 */
																																																				BgL_newzd2matchzd2_6297
																																																					=
																																																					BgL_newzd2matchzd2_1150;
																																																			}
																																																		BgL_matchz00_1373
																																																			=
																																																			BgL_newzd2matchzd2_6297;
																																																	}
																																																else
																																																	{
																																																		long
																																																			BgL_lastzd2matchzd2_10765;
																																																		obj_t
																																																			BgL_inputzd2portzd2_10764;
																																																		BgL_inputzd2portzd2_10764
																																																			=
																																																			BgL_inputzd2portzd2_1147;
																																																		BgL_lastzd2matchzd2_10765
																																																			=
																																																			BgL_newzd2matchzd2_1150;
																																																		BgL_lastzd2matchzd2_1281
																																																			=
																																																			BgL_lastzd2matchzd2_10765;
																																																		BgL_inputzd2portzd2_1280
																																																			=
																																																			BgL_inputzd2portzd2_10764;
																																																		goto
																																																			BgL_zc3anonymousza32633ze3z83_1282;
																																																	}
																																															}
																																													}
																																											}
																																									}
																																								}
																																								break;
																																							case ((long) 13):

																																								{
																																									long
																																										BgL_lastzd2matchzd2_10767;
																																									obj_t
																																										BgL_inputzd2portzd2_10766;
																																									BgL_inputzd2portzd2_10766
																																										=
																																										BgL_inputzd2portzd2_1174;
																																									BgL_lastzd2matchzd2_10767
																																										=
																																										BgL_newzd2matchzd2_1177;
																																									BgL_lastzd2matchzd2_1071
																																										=
																																										BgL_lastzd2matchzd2_10767;
																																									BgL_inputzd2portzd2_1070
																																										=
																																										BgL_inputzd2portzd2_10766;
																																									goto
																																										BgL_zc3anonymousza32508ze3z83_1072;
																																								}
																																								break;
																																							case ((long) 10):

																																								{	/* Unsafe/http.scm 294 */
																																									long
																																										BgL_newzd2matchzd2_6332;
																																									if ((CELL_REF(BgL_thezd2rgczd2contextz00_9732) == BGl_symbol5335z00zz__httpz00))
																																										{	/* Unsafe/http.scm 294 */
																																											RGC_STOP_MATCH
																																												(BgL_inputzd2portzd2_1174);
																																											BgL_newzd2matchzd2_6332
																																												=
																																												(
																																												(long)
																																												2);
																																										}
																																									else
																																										{	/* Unsafe/http.scm 294 */
																																											BgL_newzd2matchzd2_6332
																																												=
																																												BgL_newzd2matchzd2_1177;
																																										}
																																									BgL_matchz00_1373
																																										=
																																										BgL_newzd2matchzd2_6332;
																																								}
																																								break;
																																							default:
																																								{
																																									long
																																										BgL_lastzd2matchzd2_10772;
																																									obj_t
																																										BgL_inputzd2portzd2_10771;
																																									BgL_inputzd2portzd2_10771
																																										=
																																										BgL_inputzd2portzd2_1174;
																																									BgL_lastzd2matchzd2_10772
																																										=
																																										BgL_newzd2matchzd2_1177;
																																									BgL_lastzd2matchzd2_1281
																																										=
																																										BgL_lastzd2matchzd2_10772;
																																									BgL_inputzd2portzd2_1280
																																										=
																																										BgL_inputzd2portzd2_10771;
																																									goto
																																										BgL_zc3anonymousza32633ze3z83_1282;
																																								}
																																							}
																																					}
																																			}
																																	}
																																}
																															}
																														else
																															{	/* Unsafe/http.scm 294 */
																																if (
																																	((long)
																																		(BgL_currentzd2charzd2_1206)
																																		==
																																		((long)
																																			13)))
																																	{
																																		long
																																			BgL_lastzd2matchzd2_10779;
																																		obj_t
																																			BgL_inputzd2portzd2_10778;
																																		BgL_inputzd2portzd2_10778
																																			=
																																			BgL_inputzd2portzd2_1202;
																																		BgL_lastzd2matchzd2_10779
																																			=
																																			BgL_newzd2matchzd2_1205;
																																		BgL_lastzd2matchzd2_1071
																																			=
																																			BgL_lastzd2matchzd2_10779;
																																		BgL_inputzd2portzd2_1070
																																			=
																																			BgL_inputzd2portzd2_10778;
																																		goto
																																			BgL_zc3anonymousza32508ze3z83_1072;
																																	}
																																else
																																	{	/* Unsafe/http.scm 294 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_1206)
																																				==
																																				((long)
																																					10)))
																																			{	/* Unsafe/http.scm 294 */
																																				long
																																					BgL_newzd2matchzd2_6372;
																																				if (
																																					(CELL_REF
																																						(BgL_thezd2rgczd2contextz00_9732)
																																						==
																																						BGl_symbol5335z00zz__httpz00))
																																					{	/* Unsafe/http.scm 294 */
																																						RGC_STOP_MATCH
																																							(BgL_inputzd2portzd2_1202);
																																						BgL_newzd2matchzd2_6372
																																							=
																																							(
																																							(long)
																																							2);
																																					}
																																				else
																																					{	/* Unsafe/http.scm 294 */
																																						BgL_newzd2matchzd2_6372
																																							=
																																							BgL_newzd2matchzd2_1205;
																																					}
																																				BgL_matchz00_1373
																																					=
																																					BgL_newzd2matchzd2_6372;
																																			}
																																		else
																																			{
																																				long
																																					BgL_lastzd2matchzd2_10787;
																																				obj_t
																																					BgL_inputzd2portzd2_10786;
																																				BgL_inputzd2portzd2_10786
																																					=
																																					BgL_inputzd2portzd2_1202;
																																				BgL_lastzd2matchzd2_10787
																																					=
																																					BgL_newzd2matchzd2_1205;
																																				BgL_lastzd2matchzd2_1281
																																					=
																																					BgL_lastzd2matchzd2_10787;
																																				BgL_inputzd2portzd2_1280
																																					=
																																					BgL_inputzd2portzd2_10786;
																																				goto
																																					BgL_zc3anonymousza32633ze3z83_1282;
																																			}
																																	}
																															}
																													}
																											}
																										}
																										break;
																									case ((long) 13):

																										{
																											long
																												BgL_lastzd2matchzd2_10789;
																											obj_t
																												BgL_inputzd2portzd2_10788;
																											BgL_inputzd2portzd2_10788
																												=
																												BgL_inputzd2portzd2_1127;
																											BgL_lastzd2matchzd2_10789
																												=
																												BgL_newzd2matchzd2_1130;
																											BgL_lastzd2matchzd2_1071 =
																												BgL_lastzd2matchzd2_10789;
																											BgL_inputzd2portzd2_1070 =
																												BgL_inputzd2portzd2_10788;
																											goto
																												BgL_zc3anonymousza32508ze3z83_1072;
																										}
																										break;
																									case ((long) 10):

																										{	/* Unsafe/http.scm 294 */
																											long
																												BgL_newzd2matchzd2_6278;
																											if ((CELL_REF
																													(BgL_thezd2rgczd2contextz00_9732)
																													==
																													BGl_symbol5335z00zz__httpz00))
																												{	/* Unsafe/http.scm 294 */
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_1127);
																													BgL_newzd2matchzd2_6278
																														= ((long) 2);
																												}
																											else
																												{	/* Unsafe/http.scm 294 */
																													BgL_newzd2matchzd2_6278
																														=
																														BgL_newzd2matchzd2_1130;
																												}
																											BgL_matchz00_1373 =
																												BgL_newzd2matchzd2_6278;
																										}
																										break;
																									default:
																										{
																											long
																												BgL_lastzd2matchzd2_10794;
																											obj_t
																												BgL_inputzd2portzd2_10793;
																											BgL_inputzd2portzd2_10793
																												=
																												BgL_inputzd2portzd2_1127;
																											BgL_lastzd2matchzd2_10794
																												=
																												BgL_newzd2matchzd2_1130;
																											BgL_lastzd2matchzd2_1281 =
																												BgL_lastzd2matchzd2_10794;
																											BgL_inputzd2portzd2_1280 =
																												BgL_inputzd2portzd2_10793;
																											goto
																												BgL_zc3anonymousza32633ze3z83_1282;
																										}
																									}
																							}
																					}
																			}
																		}
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		switch ((long) (BgL_currentzd2charzd2_1111))
																			{
																			case ((long) 47):

																				{
																					long BgL_lastzd2matchzd2_10798;

																					obj_t BgL_inputzd2portzd2_10797;

																					BgL_inputzd2portzd2_10797 =
																						BgL_inputzd2portzd2_1107;
																					BgL_lastzd2matchzd2_10798 =
																						BgL_newzd2matchzd2_1110;
																					BgL_lastzd2matchzd2_1203 =
																						BgL_lastzd2matchzd2_10798;
																					BgL_inputzd2portzd2_1202 =
																						BgL_inputzd2portzd2_10797;
																					goto
																						BgL_zc3anonymousza32587ze3z83_1204;
																				}
																				break;
																			case ((long) 13):

																				{
																					long BgL_lastzd2matchzd2_10800;

																					obj_t BgL_inputzd2portzd2_10799;

																					BgL_inputzd2portzd2_10799 =
																						BgL_inputzd2portzd2_1107;
																					BgL_lastzd2matchzd2_10800 =
																						BgL_newzd2matchzd2_1110;
																					BgL_lastzd2matchzd2_1071 =
																						BgL_lastzd2matchzd2_10800;
																					BgL_inputzd2portzd2_1070 =
																						BgL_inputzd2portzd2_10799;
																					goto
																						BgL_zc3anonymousza32508ze3z83_1072;
																				}
																				break;
																			case ((long) 10):

																				{	/* Unsafe/http.scm 294 */
																					long BgL_newzd2matchzd2_6251;

																					if (
																						(CELL_REF
																							(BgL_thezd2rgczd2contextz00_9732)
																							== BGl_symbol5335z00zz__httpz00))
																						{	/* Unsafe/http.scm 294 */
																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1107);
																							BgL_newzd2matchzd2_6251 =
																								((long) 2);
																						}
																					else
																						{	/* Unsafe/http.scm 294 */
																							BgL_newzd2matchzd2_6251 =
																								BgL_newzd2matchzd2_1110;
																						}
																					BgL_matchz00_1373 =
																						BgL_newzd2matchzd2_6251;
																				}
																				break;
																			default:
																				{
																					long BgL_lastzd2matchzd2_10805;

																					obj_t BgL_inputzd2portzd2_10804;

																					BgL_inputzd2portzd2_10804 =
																						BgL_inputzd2portzd2_1107;
																					BgL_lastzd2matchzd2_10805 =
																						BgL_newzd2matchzd2_1110;
																					BgL_lastzd2matchzd2_1281 =
																						BgL_lastzd2matchzd2_10805;
																					BgL_inputzd2portzd2_1280 =
																						BgL_inputzd2portzd2_10804;
																					goto
																						BgL_zc3anonymousza32633ze3z83_1282;
																				}
																			}
																	}
															}
													}
												}
											}
										else
											{	/* Unsafe/http.scm 294 */
												bool_t BgL_testz00_10808;

												if (
													((long) (BgL_currentzd2charzd2_1218) >= ((long) 48)))
													{	/* Unsafe/http.scm 294 */
														BgL_testz00_10808 =
															(
															(long) (BgL_currentzd2charzd2_1218) <
															((long) 58));
													}
												else
													{	/* Unsafe/http.scm 294 */
														BgL_testz00_10808 = ((bool_t) 0);
													}
												if (BgL_testz00_10808)
													{	/* Unsafe/http.scm 294 */
														BgL_inputzd2portzd2_1188 = BgL_inputzd2portzd2_1215;
														BgL_lastzd2matchzd2_1189 = BgL_lastzd2matchzd2_1216;
													BgL_zc3anonymousza32577ze3z83_1190:
														{	/* Unsafe/http.scm 294 */
															long BgL_newzd2matchzd2_1191;

															if (
																(CELL_REF(BgL_thezd2rgczd2contextz00_9732) ==
																	BGl_symbol5337z00zz__httpz00))
																{	/* Unsafe/http.scm 294 */
																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1188);
																	BgL_newzd2matchzd2_1191 = ((long) 1);
																}
															else
																{	/* Unsafe/http.scm 294 */
																	if (
																		(CELL_REF(BgL_thezd2rgczd2contextz00_9732)
																			== BGl_symbol5335z00zz__httpz00))
																		{	/* Unsafe/http.scm 294 */
																			RGC_STOP_MATCH(BgL_inputzd2portzd2_1188);
																			BgL_newzd2matchzd2_1191 = ((long) 2);
																		}
																	else
																		{	/* Unsafe/http.scm 294 */
																			RGC_STOP_MATCH(BgL_inputzd2portzd2_1188);
																			BgL_newzd2matchzd2_1191 = ((long) 3);
																}}
															{	/* Unsafe/http.scm 294 */
																int BgL_currentzd2charzd2_1192;

																BgL_currentzd2charzd2_1192 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1188);
																if (
																	((long) (BgL_currentzd2charzd2_1192) ==
																		((long) 0)))
																	{	/* Unsafe/http.scm 294 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_1188))
																			{	/* Unsafe/http.scm 294 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_1188))
																					{

																						goto
																							BgL_zc3anonymousza32577ze3z83_1190;
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						BgL_matchz00_1373 =
																							BgL_newzd2matchzd2_1191;
																					}
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_10830;

																				obj_t BgL_inputzd2portzd2_10829;

																				BgL_inputzd2portzd2_10829 =
																					BgL_inputzd2portzd2_1188;
																				BgL_lastzd2matchzd2_10830 =
																					BgL_newzd2matchzd2_1191;
																				BgL_lastzd2matchzd2_1281 =
																					BgL_lastzd2matchzd2_10830;
																				BgL_inputzd2portzd2_1280 =
																					BgL_inputzd2portzd2_10829;
																				goto BgL_zc3anonymousza32633ze3z83_1282;
																			}
																	}
																else
																	{	/* Unsafe/http.scm 294 */
																		bool_t BgL_testz00_10831;

																		if (
																			((long) (BgL_currentzd2charzd2_1192) >=
																				((long) 48)))
																			{	/* Unsafe/http.scm 294 */
																				BgL_testz00_10831 =
																					(
																					(long) (BgL_currentzd2charzd2_1192) <
																					((long) 58));
																			}
																		else
																			{	/* Unsafe/http.scm 294 */
																				BgL_testz00_10831 = ((bool_t) 0);
																			}
																		if (BgL_testz00_10831)
																			{	/* Unsafe/http.scm 294 */
																				BgL_inputzd2portzd2_1160 =
																					BgL_inputzd2portzd2_1188;
																				BgL_lastzd2matchzd2_1161 =
																					BgL_newzd2matchzd2_1191;
																			BgL_zc3anonymousza32559ze3z83_1162:
																				{	/* Unsafe/http.scm 294 */
																					long BgL_newzd2matchzd2_1163;

																					if (
																						(CELL_REF
																							(BgL_thezd2rgczd2contextz00_9732)
																							== BGl_symbol5337z00zz__httpz00))
																						{	/* Unsafe/http.scm 294 */
																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1160);
																							BgL_newzd2matchzd2_1163 =
																								((long) 1);
																						}
																					else
																						{	/* Unsafe/http.scm 294 */
																							if (
																								(CELL_REF
																									(BgL_thezd2rgczd2contextz00_9732)
																									==
																									BGl_symbol5335z00zz__httpz00))
																								{	/* Unsafe/http.scm 294 */
																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_1160);
																									BgL_newzd2matchzd2_1163 =
																										((long) 2);
																								}
																							else
																								{	/* Unsafe/http.scm 294 */
																									BgL_newzd2matchzd2_1163 =
																										BgL_lastzd2matchzd2_1161;
																								}
																						}
																					{	/* Unsafe/http.scm 294 */
																						int BgL_currentzd2charzd2_1164;

																						BgL_currentzd2charzd2_1164 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_1160);
																						if (((long)
																								(BgL_currentzd2charzd2_1164) ==
																								((long) 0)))
																							{	/* Unsafe/http.scm 294 */
																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_1160))
																									{	/* Unsafe/http.scm 294 */
																										if (rgc_fill_buffer
																											(BgL_inputzd2portzd2_1160))
																											{

																												goto
																													BgL_zc3anonymousza32559ze3z83_1162;
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												BgL_matchz00_1373 =
																													BgL_newzd2matchzd2_1163;
																											}
																									}
																								else
																									{
																										long
																											BgL_lastzd2matchzd2_10852;
																										obj_t
																											BgL_inputzd2portzd2_10851;
																										BgL_inputzd2portzd2_10851 =
																											BgL_inputzd2portzd2_1160;
																										BgL_lastzd2matchzd2_10852 =
																											BgL_newzd2matchzd2_1163;
																										BgL_lastzd2matchzd2_1281 =
																											BgL_lastzd2matchzd2_10852;
																										BgL_inputzd2portzd2_1280 =
																											BgL_inputzd2portzd2_10851;
																										goto
																											BgL_zc3anonymousza32633ze3z83_1282;
																									}
																							}
																						else
																							{	/* Unsafe/http.scm 294 */
																								bool_t BgL_testz00_10853;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1164)
																										>= ((long) 48)))
																									{	/* Unsafe/http.scm 294 */
																										BgL_testz00_10853 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1164)
																											< ((long) 58));
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										BgL_testz00_10853 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_10853)
																									{
																										long
																											BgL_lastzd2matchzd2_10859;
																										BgL_lastzd2matchzd2_10859 =
																											BgL_newzd2matchzd2_1163;
																										BgL_lastzd2matchzd2_1161 =
																											BgL_lastzd2matchzd2_10859;
																										goto
																											BgL_zc3anonymousza32559ze3z83_1162;
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1164)
																												== ((long) 13)))
																											{
																												long
																													BgL_lastzd2matchzd2_10864;
																												obj_t
																													BgL_inputzd2portzd2_10863;
																												BgL_inputzd2portzd2_10863
																													=
																													BgL_inputzd2portzd2_1160;
																												BgL_lastzd2matchzd2_10864
																													=
																													BgL_newzd2matchzd2_1163;
																												BgL_lastzd2matchzd2_1071
																													=
																													BgL_lastzd2matchzd2_10864;
																												BgL_inputzd2portzd2_1070
																													=
																													BgL_inputzd2portzd2_10863;
																												goto
																													BgL_zc3anonymousza32508ze3z83_1072;
																											}
																										else
																											{	/* Unsafe/http.scm 294 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1164)
																														== ((long) 10)))
																													{	/* Unsafe/http.scm 294 */
																														long
																															BgL_newzd2matchzd2_6317;
																														if ((CELL_REF
																																(BgL_thezd2rgczd2contextz00_9732)
																																==
																																BGl_symbol5335z00zz__httpz00))
																															{	/* Unsafe/http.scm 294 */
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_1160);
																																BgL_newzd2matchzd2_6317
																																	= ((long) 2);
																															}
																														else
																															{	/* Unsafe/http.scm 294 */
																																BgL_newzd2matchzd2_6317
																																	=
																																	BgL_newzd2matchzd2_1163;
																															}
																														BgL_matchz00_1373 =
																															BgL_newzd2matchzd2_6317;
																													}
																												else
																													{
																														long
																															BgL_lastzd2matchzd2_10872;
																														obj_t
																															BgL_inputzd2portzd2_10871;
																														BgL_inputzd2portzd2_10871
																															=
																															BgL_inputzd2portzd2_1160;
																														BgL_lastzd2matchzd2_10872
																															=
																															BgL_newzd2matchzd2_1163;
																														BgL_lastzd2matchzd2_1281
																															=
																															BgL_lastzd2matchzd2_10872;
																														BgL_inputzd2portzd2_1280
																															=
																															BgL_inputzd2portzd2_10871;
																														goto
																															BgL_zc3anonymousza32633ze3z83_1282;
																													}
																											}
																									}
																							}
																					}
																				}
																			}
																		else
																			{	/* Unsafe/http.scm 294 */
																				if (
																					((long) (BgL_currentzd2charzd2_1192)
																						== ((long) 13)))
																					{
																						long BgL_lastzd2matchzd2_10877;

																						obj_t BgL_inputzd2portzd2_10876;

																						BgL_inputzd2portzd2_10876 =
																							BgL_inputzd2portzd2_1188;
																						BgL_lastzd2matchzd2_10877 =
																							BgL_newzd2matchzd2_1191;
																						BgL_lastzd2matchzd2_1071 =
																							BgL_lastzd2matchzd2_10877;
																						BgL_inputzd2portzd2_1070 =
																							BgL_inputzd2portzd2_10876;
																						goto
																							BgL_zc3anonymousza32508ze3z83_1072;
																					}
																				else
																					{	/* Unsafe/http.scm 294 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1192) ==
																								((long) 10)))
																							{	/* Unsafe/http.scm 294 */
																								long BgL_newzd2matchzd2_6353;

																								if (
																									(CELL_REF
																										(BgL_thezd2rgczd2contextz00_9732)
																										==
																										BGl_symbol5335z00zz__httpz00))
																									{	/* Unsafe/http.scm 294 */
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_1188);
																										BgL_newzd2matchzd2_6353 =
																											((long) 2);
																									}
																								else
																									{	/* Unsafe/http.scm 294 */
																										BgL_newzd2matchzd2_6353 =
																											BgL_newzd2matchzd2_1191;
																									}
																								BgL_matchz00_1373 =
																									BgL_newzd2matchzd2_6353;
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_10885;

																								obj_t BgL_inputzd2portzd2_10884;

																								BgL_inputzd2portzd2_10884 =
																									BgL_inputzd2portzd2_1188;
																								BgL_lastzd2matchzd2_10885 =
																									BgL_newzd2matchzd2_1191;
																								BgL_lastzd2matchzd2_1281 =
																									BgL_lastzd2matchzd2_10885;
																								BgL_inputzd2portzd2_1280 =
																									BgL_inputzd2portzd2_10884;
																								goto
																									BgL_zc3anonymousza32633ze3z83_1282;
																							}
																					}
																			}
																	}
															}
														}
													}
												else
													{	/* Unsafe/http.scm 294 */
														if (
															((long) (BgL_currentzd2charzd2_1218) ==
																((long) 10)))
															{	/* Unsafe/http.scm 294 */
																long BgL_newzd2matchzd2_6406;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1215);
																BgL_newzd2matchzd2_6406 = ((long) 3);
																BgL_matchz00_1373 = BgL_newzd2matchzd2_6406;
															}
														else
															{
																long BgL_lastzd2matchzd2_10891;

																obj_t BgL_inputzd2portzd2_10890;

																BgL_inputzd2portzd2_10890 =
																	BgL_inputzd2portzd2_1215;
																BgL_lastzd2matchzd2_10891 =
																	BgL_lastzd2matchzd2_1216;
																BgL_lastzd2matchzd2_1093 =
																	BgL_lastzd2matchzd2_10891;
																BgL_inputzd2portzd2_1092 =
																	BgL_inputzd2portzd2_10890;
																goto BgL_zc3anonymousza32518ze3z83_1094;
															}
													}
											}
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_9733);
					switch (BgL_matchz00_1373)
						{
						case ((long) 3):

							{	/* Unsafe/http.scm 328 */
								obj_t BgL_cz00_1377;

								BgL_cz00_1377 =
									BGl_thezd2failurez72za0zz__httpz00(BgL_inputzd2portzd2_9733);
								{	/* Unsafe/http.scm 329 */
									obj_t BgL_list2744z00_1464;

									BgL_list2744z00_1464 = MAKE_PAIR(BUNSPEC, BNIL);
									{	/* Unsafe/http.scm 329 */
										obj_t BgL_auxz00_9544;

										BgL_auxz00_9544 = CAR(BgL_list2744z00_1464);
										CELL_SET(BgL_thezd2rgczd2contextz00_9732, BgL_auxz00_9544);
								}}
								{	/* Unsafe/http.scm 331 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2709z00_1378;

									if (EOF_OBJECTP(BgL_cz00_1377))
										{	/* Llib/object.scm 90 */
											obj_t BgL_arg2711z00_1380;

											obj_t BgL_arg2712z00_1381;

											obj_t BgL_arg2714z00_1383;

											{	/* Llib/object.scm 90 */

												{	/* Llib/object.scm 90 */

													BgL_arg2711z00_1380 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
											BgL_arg2712z00_1381 = BGl_symbol5339z00zz__httpz00;
											BgL_arg2714z00_1383 = BgL_inputzd2portzd2_9733;
											BgL_arg2709z00_1378 =
												BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
												BFALSE, BgL_arg2711z00_1380, BgL_arg2712z00_1381,
												BGl_string5341z00zz__httpz00, BgL_arg2714z00_1383);
										}
									else
										{	/* Llib/object.scm 90 */
											obj_t BgL_arg2716z00_1385;

											obj_t BgL_arg2717z00_1386;

											obj_t BgL_arg2719z00_1388;

											{	/* Llib/object.scm 90 */

												{	/* Llib/object.scm 90 */

													BgL_arg2716z00_1385 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
											BgL_arg2717z00_1386 = BGl_symbol5339z00zz__httpz00;
											BgL_arg2719z00_1388 =
												BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
												(BgL_cz00_1377, BgL_inputzd2portzd2_9733);
											BgL_arg2709z00_1378 =
												BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
												BFALSE, BgL_arg2716z00_1385, BgL_arg2717z00_1386,
												BGl_string5342z00zz__httpz00, BgL_arg2719z00_1388);
										}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2709z00_1378));
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/http.scm 326 */
								obj_t BgL_res5122z00_6516;

								{	/* Unsafe/http.scm 326 */
									int BgL_arg2645z00_6510;

									{	/* Unsafe/http.scm 326 */
										int BgL_res5121z00_6512;

										{	/* Unsafe/http.scm 326 */
											obj_t BgL_inputzd2portzd2_6511;

											BgL_inputzd2portzd2_6511 = BgL_inputzd2portzd2_9733;
											BgL_res5121z00_6512 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6511));
										}
										BgL_arg2645z00_6510 = BgL_res5121z00_6512;
									}
									BgL_res5122z00_6516 =
										rgc_buffer_substring(BgL_inputzd2portzd2_9733, ((long) 0),
										(long) (BgL_arg2645z00_6510));
								}
								return BgL_res5122z00_6516;
							}
							break;
						case ((long) 1):

							{	/* Unsafe/http.scm 324 */
								obj_t BgL_inputzd2portzd2_6517;

								BgL_inputzd2portzd2_6517 = BgL_inputzd2portzd2_9733;
								return BINT(rgc_buffer_fixnum(BgL_inputzd2portzd2_6517));
							}
							break;
						case ((long) 0):

							{	/* Unsafe/http.scm 301 */
								bool_t BgL_testz00_10911;

								{	/* Unsafe/http.scm 301 */
									obj_t BgL_arg2742z00_1419;

									BgL_arg2742z00_1419 =
										CELL_SET(BgL_thezd2rgczd2contextz00_9732, BUNSPEC);
									BgL_testz00_10911 =
										(BgL_arg2742z00_1419 == BGl_symbol5337z00zz__httpz00);
								}
								if (BgL_testz00_10911)
									{	/* Unsafe/http.scm 301 */
										{	/* Unsafe/http.scm 303 */
											obj_t BgL_list2746z00_1466;

											BgL_list2746z00_1466 = MAKE_PAIR(BUNSPEC, BNIL);
											{	/* Unsafe/http.scm 303 */
												obj_t BgL_auxz00_9548;

												BgL_auxz00_9548 = CAR(BgL_list2746z00_1466);
												CELL_SET(BgL_thezd2rgczd2contextz00_9732,
													BgL_auxz00_9548);
											}
										}
										{	/* Llib/object.scm 90 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2722z00_1392;

											{	/* Llib/object.scm 90 */
												obj_t BgL_arg2724z00_1393;

												obj_t BgL_arg2725z00_1394;

												obj_t BgL_arg2727z00_1396;

												{	/* Llib/object.scm 90 */

													{	/* Llib/object.scm 90 */

														BgL_arg2724z00_1393 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg2725z00_1394 = BGl_symbol5339z00zz__httpz00;
												BgL_arg2727z00_1396 =
													BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
													(BGl_thezd2failurez72za0zz__httpz00
													(BgL_inputzd2portzd2_9733), BgL_inputzd2portzd2_9733);
												BgL_arg2722z00_1392 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg2724z00_1393,
													BgL_arg2725z00_1394, BGl_string5342z00zz__httpz00,
													BgL_arg2727z00_1396);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg2722z00_1392));
										}
									}
								else
									{	/* Unsafe/http.scm 309 */
										obj_t BgL_httpz00_1400;

										{	/* Unsafe/http.scm 309 */
											long BgL_arg2739z00_1416;

											{	/* Unsafe/http.scm 309 */
												int BgL_arg2740z00_1417;

												{	/* Unsafe/http.scm 309 */
													int BgL_res5124z00_6528;

													{	/* Unsafe/http.scm 309 */
														obj_t BgL_inputzd2portzd2_6527;

														BgL_inputzd2portzd2_6527 = BgL_inputzd2portzd2_9733;
														BgL_res5124z00_6528 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_6527));
													}
													BgL_arg2740z00_1417 = BgL_res5124z00_6528;
												}
												BgL_arg2739z00_1416 =
													((long) (BgL_arg2740z00_1417) - ((long) 1));
											}
											BgL_minz00_1302 = (int) (((long) 0));
											BgL_maxz00_1303 = (int) (BgL_arg2739z00_1416);
											if (((long) (BgL_maxz00_1303) < ((long) 0)))
												{	/* Unsafe/http.scm 294 */
													int BgL_arg2648z00_1306;

													{	/* Unsafe/http.scm 294 */
														int BgL_res5115z00_6469;

														{	/* Unsafe/http.scm 294 */
															obj_t BgL_inputzd2portzd2_6468;

															BgL_inputzd2portzd2_6468 =
																BgL_inputzd2portzd2_9733;
															BgL_res5115z00_6469 =
																(int) (RGC_BUFFER_LENGTH
																(BgL_inputzd2portzd2_6468));
														}
														BgL_arg2648z00_1306 = BgL_res5115z00_6469;
													}
													{	/* Unsafe/http.scm 294 */
														long BgL_za71za7_6470;

														long BgL_za72za7_6471;

														BgL_za71za7_6470 = (long) (BgL_arg2648z00_1306);
														BgL_za72za7_6471 = (long) (BgL_maxz00_1303);
														BgL_maxz00_1303 =
															(int) ((BgL_za71za7_6470 + BgL_za72za7_6471));
												}}
											else
												{	/* Unsafe/http.scm 294 */
													BFALSE;
												}
											{	/* Unsafe/http.scm 294 */
												bool_t BgL_testz00_10934;

												if (((long) (BgL_minz00_1302) >= ((long) 0)))
													{	/* Unsafe/http.scm 294 */
														if (
															((long) (BgL_maxz00_1303) >=
																(long) (BgL_minz00_1302)))
															{	/* Unsafe/http.scm 294 */
																int BgL_arg2660z00_1316;

																{	/* Unsafe/http.scm 294 */
																	int BgL_res5116z00_6477;

																	{	/* Unsafe/http.scm 294 */
																		obj_t BgL_inputzd2portzd2_6476;

																		BgL_inputzd2portzd2_6476 =
																			BgL_inputzd2portzd2_9733;
																		BgL_res5116z00_6477 =
																			(int) (RGC_BUFFER_LENGTH
																			(BgL_inputzd2portzd2_6476));
																	}
																	BgL_arg2660z00_1316 = BgL_res5116z00_6477;
																}
																BgL_testz00_10934 =
																	(
																	(long) (BgL_maxz00_1303) <=
																	(long) (BgL_arg2660z00_1316));
															}
														else
															{	/* Unsafe/http.scm 294 */
																BgL_testz00_10934 = ((bool_t) 0);
															}
													}
												else
													{	/* Unsafe/http.scm 294 */
														BgL_testz00_10934 = ((bool_t) 0);
													}
												if (BgL_testz00_10934)
													{	/* Unsafe/http.scm 294 */
														BgL_httpz00_1400 =
															rgc_buffer_substring(BgL_inputzd2portzd2_9733,
															(long) (BgL_minz00_1302),
															(long) (BgL_maxz00_1303));
													}
												else
													{	/* Unsafe/http.scm 294 */
														obj_t BgL_arg2651z00_1309;

														obj_t BgL_arg2652z00_1310;

														{	/* Unsafe/http.scm 294 */
															obj_t BgL_arg2656z00_1312;

															{	/* Unsafe/http.scm 294 */
																obj_t BgL_res5118z00_6490;

																{	/* Unsafe/http.scm 294 */
																	int BgL_arg2645z00_6484;

																	{	/* Unsafe/http.scm 294 */
																		int BgL_res5117z00_6486;

																		{	/* Unsafe/http.scm 294 */
																			obj_t BgL_inputzd2portzd2_6485;

																			BgL_inputzd2portzd2_6485 =
																				BgL_inputzd2portzd2_9733;
																			BgL_res5117z00_6486 =
																				(int) (RGC_BUFFER_LENGTH
																				(BgL_inputzd2portzd2_6485));
																		}
																		BgL_arg2645z00_6484 = BgL_res5117z00_6486;
																	}
																	BgL_res5118z00_6490 =
																		rgc_buffer_substring
																		(BgL_inputzd2portzd2_9733, ((long) 0),
																		(long) (BgL_arg2645z00_6484));
																}
																BgL_arg2656z00_1312 = BgL_res5118z00_6490;
															}
															{	/* Unsafe/http.scm 294 */
																obj_t BgL_list2657z00_1313;

																BgL_list2657z00_1313 =
																	MAKE_PAIR(BgL_arg2656z00_1312, BNIL);
																BgL_arg2651z00_1309 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string5333z00zz__httpz00,
																	BgL_list2657z00_1313);
														}}
														BgL_arg2652z00_1310 =
															MAKE_PAIR(BINT(BgL_minz00_1302),
															BINT(BgL_maxz00_1303));
														BgL_httpz00_1400 =
															BGl_errorz00zz__errorz00
															(BGl_string5334z00zz__httpz00,
															BgL_arg2651z00_1309, BgL_arg2652z00_1310);
										}}}
										{	/* Unsafe/http.scm 310 */
											obj_t BgL_list2747z00_1467;

											BgL_list2747z00_1467 =
												MAKE_PAIR(BGl_symbol5337z00zz__httpz00, BNIL);
											{	/* Unsafe/http.scm 310 */
												obj_t BgL_auxz00_9550;

												BgL_auxz00_9550 = CAR(BgL_list2747z00_1467);
												CELL_SET(BgL_thezd2rgczd2contextz00_9732,
													BgL_auxz00_9550);
										}}
										{	/* Unsafe/http.scm 311 */
											obj_t BgL_codez00_1401;

											BgL_codez00_1401 =
												BGl_ignorez00zz__httpz00(BgL_inputzd2portzd2_9733,
												BgL_thezd2rgczd2contextz00_9732);
											if (INTEGERP(BgL_codez00_1401))
												{	/* Unsafe/http.scm 312 */
													{	/* Unsafe/http.scm 319 */
														obj_t BgL_list2748z00_1468;

														BgL_list2748z00_1468 =
															MAKE_PAIR(BGl_symbol5335z00zz__httpz00, BNIL);
														{	/* Unsafe/http.scm 319 */
															obj_t BgL_auxz00_9552;

															BgL_auxz00_9552 = CAR(BgL_list2748z00_1468);
															CELL_SET(BgL_thezd2rgczd2contextz00_9732,
																BgL_auxz00_9552);
														}
													}
													{	/* Unsafe/http.scm 320 */
														obj_t BgL_phrasez00_1403;

														BgL_phrasez00_1403 =
															BGl_ignorez00zz__httpz00(BgL_inputzd2portzd2_9733,
															BgL_thezd2rgczd2contextz00_9732);
														{	/* Unsafe/http.scm 321 */
															obj_t BgL_list2749z00_1469;

															BgL_list2749z00_1469 = MAKE_PAIR(BUNSPEC, BNIL);
															{	/* Unsafe/http.scm 321 */
																obj_t BgL_auxz00_9554;

																BgL_auxz00_9554 = CAR(BgL_list2749z00_1469);
																CELL_SET(BgL_thezd2rgczd2contextz00_9732,
																	BgL_auxz00_9554);
															}
														}
														{	/* Unsafe/http.scm 322 */
															obj_t BgL_val1_2373z00_1405;

															BgL_val1_2373z00_1405 = BgL_codez00_1401;
															{	/* Unsafe/http.scm 322 */
																int BgL_auxz00_10972;

																BgL_auxz00_10972 = (int) (((long) 3));
																BGL_MVALUES_NUMBER_SET(BgL_auxz00_10972);
															}
															{	/* Unsafe/http.scm 322 */
																int BgL_auxz00_10975;

																BgL_auxz00_10975 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_auxz00_10975,
																	BgL_val1_2373z00_1405);
															}
															{	/* Unsafe/http.scm 322 */
																int BgL_auxz00_10978;

																BgL_auxz00_10978 = (int) (((long) 2));
																BGL_MVALUES_VAL_SET(BgL_auxz00_10978,
																	BgL_phrasez00_1403);
															}
															return BgL_httpz00_1400;
														}
													}
												}
											else
												{	/* Llib/object.scm 90 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2731z00_1407;

													{	/* Llib/object.scm 90 */
														obj_t BgL_arg2732z00_1408;

														obj_t BgL_arg2733z00_1409;

														obj_t BgL_arg2735z00_1411;

														{	/* Llib/object.scm 90 */

															{	/* Llib/object.scm 90 */

																BgL_arg2732z00_1408 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
															}
														}
														BgL_arg2733z00_1409 = BGl_symbol5339z00zz__httpz00;
														BgL_arg2735z00_1411 =
															BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
															(BGl_thezd2failurez72za0zz__httpz00
															(BgL_inputzd2portzd2_9733),
															BgL_inputzd2portzd2_9733);
														BgL_arg2731z00_1407 =
															BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg2732z00_1408,
															BgL_arg2733z00_1409, BGl_string5343z00zz__httpz00,
															BgL_arg2735z00_1411);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2731z00_1407));
												}
										}
									}
							}
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
								BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_1373));
						}
				}
			}
		}
	}



/* the-failure' */
	obj_t BGl_thezd2failurez72za0zz__httpz00(obj_t BgL_inputzd2portzd2_9734)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 294 */
			{	/* Unsafe/http.scm 294 */
				bool_t BgL_testz00_10990;

				{	/* Unsafe/http.scm 294 */
					long BgL_arg2700z00_1362;

					BgL_arg2700z00_1362 = RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_9734);
					BgL_testz00_10990 = (BgL_arg2700z00_1362 == ((long) 0));
				}
				if (BgL_testz00_10990)
					{	/* Unsafe/http.scm 294 */
						return BCNST(256);
					}
				else
					{	/* Unsafe/http.scm 294 */
						obj_t BgL_inputzd2portzd2_6496;

						BgL_inputzd2portzd2_6496 = BgL_inputzd2portzd2_9734;
						return BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_6496));
					}
			}
		}
	}



/* _http */
	obj_t BGl__httpz00zz__httpz00(obj_t BgL_envz00_22, obj_t BgL_opt2430z00_21)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 104 */
			{	/* Unsafe/http.scm 104 */
				int BgL_l2431z00_2021;

				BgL_l2431z00_2021 = VECTOR_LENGTH(BgL_opt2430z00_21);
				{	/* Unsafe/http.scm 104 */

					{	/* Unsafe/http.scm 119 */
						obj_t BgL_argsz00_2025;

						BgL_argsz00_2025 = BNIL;
						{	/* Unsafe/http.scm 104 */
							obj_t BgL_authoriza7ationza7_2026;

							BgL_authoriza7ationza7_2026 = BFALSE;
							{	/* Unsafe/http.scm 104 */
								obj_t BgL_bodyz00_2027;

								BgL_bodyz00_2027 = BFALSE;
								{	/* Unsafe/http.scm 104 */
									obj_t BgL_connectionz00_2028;

									BgL_connectionz00_2028 = BUNSPEC;
									{	/* Unsafe/http.scm 104 */
										obj_t BgL_contentzd2typezd2_2029;

										BgL_contentzd2typezd2_2029 = BFALSE;
										{	/* Unsafe/http.scm 118 */
											obj_t BgL_headerz00_2030;

											BgL_headerz00_2030 = BGl_list5344z00zz__httpz00;
											{	/* Unsafe/http.scm 104 */
												obj_t BgL_hostz00_2031;

												BgL_hostz00_2031 = BGl_string5349z00zz__httpz00;
												{	/* Unsafe/http.scm 104 */
													obj_t BgL_httpzd2versionzd2_2032;

													BgL_httpzd2versionzd2_2032 =
														BGl_string5350z00zz__httpz00;
													{	/* Unsafe/http.scm 104 */
														obj_t BgL_inz00_2033;

														BgL_inz00_2033 = BFALSE;
														{	/* Unsafe/http.scm 104 */
															obj_t BgL_loginz00_2034;

															BgL_loginz00_2034 = BFALSE;
															{	/* Unsafe/http.scm 109 */
																obj_t BgL_methodz00_2035;

																BgL_methodz00_2035 =
																	BGl_symbol5351z00zz__httpz00;
																{	/* Unsafe/http.scm 104 */
																	obj_t BgL_outz00_2036;

																	BgL_outz00_2036 = BFALSE;
																	{	/* Unsafe/http.scm 104 */
																		obj_t BgL_passwordz00_2037;

																		BgL_passwordz00_2037 = BFALSE;
																		{	/* Unsafe/http.scm 104 */
																			obj_t BgL_pathz00_2038;

																			BgL_pathz00_2038 =
																				BGl_string5353z00zz__httpz00;
																			{	/* Unsafe/http.scm 104 */
																				obj_t BgL_portz00_2039;

																				BgL_portz00_2039 = BINT(((long) 80));
																				{	/* Unsafe/http.scm 108 */
																					obj_t BgL_protocolz00_2040;

																					BgL_protocolz00_2040 =
																						BGl_symbol5354z00zz__httpz00;
																					{	/* Unsafe/http.scm 104 */
																						obj_t BgL_proxyz00_2041;

																						BgL_proxyz00_2041 = BFALSE;
																						{	/* Unsafe/http.scm 104 */
																							obj_t BgL_socketz00_2042;

																							BgL_socketz00_2042 = BFALSE;
																							{	/* Unsafe/http.scm 104 */
																								obj_t BgL_timeoutz00_2043;

																								BgL_timeoutz00_2043 =
																									BINT(((long) 0));
																								{	/* Unsafe/http.scm 104 */
																									obj_t BgL_usernamez00_2044;

																									BgL_usernamez00_2044 = BFALSE;
																									{	/* Unsafe/http.scm 104 */

																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2435z00_2045;
																											{
																												long BgL_iz00_6884;

																												BgL_iz00_6884 =
																													((long) 0);
																											BgL_search2432z00_6883:
																												if (
																													(BgL_iz00_6884 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2435z00_2045
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6886;

																														BgL_vz00_6886 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6884));
																														if ((BgL_vz00_6886
																																==
																																BGl_keyword5356z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2435z00_2045
																																	=
																																	(BgL_iz00_6884
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11006;
																																BgL_iz00_11006 =
																																	(BgL_iz00_6884
																																	+ ((long) 2));
																																BgL_iz00_6884 =
																																	BgL_iz00_11006;
																																goto
																																	BgL_search2432z00_6883;
																															}
																													}
																											}
																											if (
																												(BgL_index2435z00_2045
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_argsz00_2025 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2435z00_2045));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2436z00_2047;
																											{
																												long BgL_iz00_6898;

																												BgL_iz00_6898 =
																													((long) 0);
																											BgL_search2432z00_6897:
																												if (
																													(BgL_iz00_6898 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2436z00_2047
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6900;

																														BgL_vz00_6900 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6898));
																														if ((BgL_vz00_6900
																																==
																																BGl_keyword5358z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2436z00_2047
																																	=
																																	(BgL_iz00_6898
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11020;
																																BgL_iz00_11020 =
																																	(BgL_iz00_6898
																																	+ ((long) 2));
																																BgL_iz00_6898 =
																																	BgL_iz00_11020;
																																goto
																																	BgL_search2432z00_6897;
																															}
																													}
																											}
																											if (
																												(BgL_index2436z00_2047
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_authoriza7ationza7_2026
																														=
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2436z00_2047));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2437z00_2049;
																											{
																												long BgL_iz00_6912;

																												BgL_iz00_6912 =
																													((long) 0);
																											BgL_search2432z00_6911:
																												if (
																													(BgL_iz00_6912 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2437z00_2049
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6914;

																														BgL_vz00_6914 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6912));
																														if ((BgL_vz00_6914
																																==
																																BGl_keyword5360z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2437z00_2049
																																	=
																																	(BgL_iz00_6912
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11034;
																																BgL_iz00_11034 =
																																	(BgL_iz00_6912
																																	+ ((long) 2));
																																BgL_iz00_6912 =
																																	BgL_iz00_11034;
																																goto
																																	BgL_search2432z00_6911;
																															}
																													}
																											}
																											if (
																												(BgL_index2437z00_2049
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_bodyz00_2027 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2437z00_2049));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2438z00_2051;
																											{
																												long BgL_iz00_6926;

																												BgL_iz00_6926 =
																													((long) 0);
																											BgL_search2432z00_6925:
																												if (
																													(BgL_iz00_6926 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2438z00_2051
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6928;

																														BgL_vz00_6928 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6926));
																														if ((BgL_vz00_6928
																																==
																																BGl_keyword5362z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2438z00_2051
																																	=
																																	(BgL_iz00_6926
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11048;
																																BgL_iz00_11048 =
																																	(BgL_iz00_6926
																																	+ ((long) 2));
																																BgL_iz00_6926 =
																																	BgL_iz00_11048;
																																goto
																																	BgL_search2432z00_6925;
																															}
																													}
																											}
																											if (
																												(BgL_index2438z00_2051
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_connectionz00_2028
																														=
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2438z00_2051));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2439z00_2053;
																											{
																												long BgL_iz00_6940;

																												BgL_iz00_6940 =
																													((long) 0);
																											BgL_search2432z00_6939:
																												if (
																													(BgL_iz00_6940 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2439z00_2053
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6942;

																														BgL_vz00_6942 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6940));
																														if ((BgL_vz00_6942
																																==
																																BGl_keyword5364z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2439z00_2053
																																	=
																																	(BgL_iz00_6940
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11062;
																																BgL_iz00_11062 =
																																	(BgL_iz00_6940
																																	+ ((long) 2));
																																BgL_iz00_6940 =
																																	BgL_iz00_11062;
																																goto
																																	BgL_search2432z00_6939;
																															}
																													}
																											}
																											if (
																												(BgL_index2439z00_2053
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_contentzd2typezd2_2029
																														=
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2439z00_2053));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2440z00_2055;
																											{
																												long BgL_iz00_6954;

																												BgL_iz00_6954 =
																													((long) 0);
																											BgL_search2432z00_6953:
																												if (
																													(BgL_iz00_6954 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2440z00_2055
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6956;

																														BgL_vz00_6956 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6954));
																														if ((BgL_vz00_6956
																																==
																																BGl_keyword5366z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2440z00_2055
																																	=
																																	(BgL_iz00_6954
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11076;
																																BgL_iz00_11076 =
																																	(BgL_iz00_6954
																																	+ ((long) 2));
																																BgL_iz00_6954 =
																																	BgL_iz00_11076;
																																goto
																																	BgL_search2432z00_6953;
																															}
																													}
																											}
																											if (
																												(BgL_index2440z00_2055
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_headerz00_2030 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2440z00_2055));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2441z00_2057;
																											{
																												long BgL_iz00_6968;

																												BgL_iz00_6968 =
																													((long) 0);
																											BgL_search2432z00_6967:
																												if (
																													(BgL_iz00_6968 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2441z00_2057
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6970;

																														BgL_vz00_6970 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6968));
																														if ((BgL_vz00_6970
																																==
																																BGl_keyword5368z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2441z00_2057
																																	=
																																	(BgL_iz00_6968
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11090;
																																BgL_iz00_11090 =
																																	(BgL_iz00_6968
																																	+ ((long) 2));
																																BgL_iz00_6968 =
																																	BgL_iz00_11090;
																																goto
																																	BgL_search2432z00_6967;
																															}
																													}
																											}
																											if (
																												(BgL_index2441z00_2057
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_hostz00_2031 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2441z00_2057));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2442z00_2059;
																											{
																												long BgL_iz00_6982;

																												BgL_iz00_6982 =
																													((long) 0);
																											BgL_search2432z00_6981:
																												if (
																													(BgL_iz00_6982 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2442z00_2059
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6984;

																														BgL_vz00_6984 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6982));
																														if ((BgL_vz00_6984
																																==
																																BGl_keyword5370z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2442z00_2059
																																	=
																																	(BgL_iz00_6982
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11104;
																																BgL_iz00_11104 =
																																	(BgL_iz00_6982
																																	+ ((long) 2));
																																BgL_iz00_6982 =
																																	BgL_iz00_11104;
																																goto
																																	BgL_search2432z00_6981;
																															}
																													}
																											}
																											if (
																												(BgL_index2442z00_2059
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_httpzd2versionzd2_2032
																														=
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2442z00_2059));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2443z00_2061;
																											{
																												long BgL_iz00_6996;

																												BgL_iz00_6996 =
																													((long) 0);
																											BgL_search2432z00_6995:
																												if (
																													(BgL_iz00_6996 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2443z00_2061
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_6998;

																														BgL_vz00_6998 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_6996));
																														if ((BgL_vz00_6998
																																==
																																BGl_keyword5372z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2443z00_2061
																																	=
																																	(BgL_iz00_6996
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11118;
																																BgL_iz00_11118 =
																																	(BgL_iz00_6996
																																	+ ((long) 2));
																																BgL_iz00_6996 =
																																	BgL_iz00_11118;
																																goto
																																	BgL_search2432z00_6995;
																															}
																													}
																											}
																											if (
																												(BgL_index2443z00_2061
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_inz00_2033 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2443z00_2061));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2444z00_2063;
																											{
																												long BgL_iz00_7010;

																												BgL_iz00_7010 =
																													((long) 0);
																											BgL_search2432z00_7009:
																												if (
																													(BgL_iz00_7010 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2444z00_2063
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7012;

																														BgL_vz00_7012 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7010));
																														if ((BgL_vz00_7012
																																==
																																BGl_keyword5374z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2444z00_2063
																																	=
																																	(BgL_iz00_7010
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11132;
																																BgL_iz00_11132 =
																																	(BgL_iz00_7010
																																	+ ((long) 2));
																																BgL_iz00_7010 =
																																	BgL_iz00_11132;
																																goto
																																	BgL_search2432z00_7009;
																															}
																													}
																											}
																											if (
																												(BgL_index2444z00_2063
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_loginz00_2034 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2444z00_2063));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2445z00_2065;
																											{
																												long BgL_iz00_7024;

																												BgL_iz00_7024 =
																													((long) 0);
																											BgL_search2432z00_7023:
																												if (
																													(BgL_iz00_7024 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2445z00_2065
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7026;

																														BgL_vz00_7026 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7024));
																														if ((BgL_vz00_7026
																																==
																																BGl_keyword5376z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2445z00_2065
																																	=
																																	(BgL_iz00_7024
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11146;
																																BgL_iz00_11146 =
																																	(BgL_iz00_7024
																																	+ ((long) 2));
																																BgL_iz00_7024 =
																																	BgL_iz00_11146;
																																goto
																																	BgL_search2432z00_7023;
																															}
																													}
																											}
																											if (
																												(BgL_index2445z00_2065
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_methodz00_2035 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2445z00_2065));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2446z00_2067;
																											{
																												long BgL_iz00_7038;

																												BgL_iz00_7038 =
																													((long) 0);
																											BgL_search2432z00_7037:
																												if (
																													(BgL_iz00_7038 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2446z00_2067
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7040;

																														BgL_vz00_7040 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7038));
																														if ((BgL_vz00_7040
																																==
																																BGl_keyword5378z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2446z00_2067
																																	=
																																	(BgL_iz00_7038
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11160;
																																BgL_iz00_11160 =
																																	(BgL_iz00_7038
																																	+ ((long) 2));
																																BgL_iz00_7038 =
																																	BgL_iz00_11160;
																																goto
																																	BgL_search2432z00_7037;
																															}
																													}
																											}
																											if (
																												(BgL_index2446z00_2067
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_outz00_2036 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2446z00_2067));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2447z00_2069;
																											{
																												long BgL_iz00_7052;

																												BgL_iz00_7052 =
																													((long) 0);
																											BgL_search2432z00_7051:
																												if (
																													(BgL_iz00_7052 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2447z00_2069
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7054;

																														BgL_vz00_7054 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7052));
																														if ((BgL_vz00_7054
																																==
																																BGl_keyword5380z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2447z00_2069
																																	=
																																	(BgL_iz00_7052
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11174;
																																BgL_iz00_11174 =
																																	(BgL_iz00_7052
																																	+ ((long) 2));
																																BgL_iz00_7052 =
																																	BgL_iz00_11174;
																																goto
																																	BgL_search2432z00_7051;
																															}
																													}
																											}
																											if (
																												(BgL_index2447z00_2069
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_passwordz00_2037 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2447z00_2069));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2448z00_2071;
																											{
																												long BgL_iz00_7066;

																												BgL_iz00_7066 =
																													((long) 0);
																											BgL_search2432z00_7065:
																												if (
																													(BgL_iz00_7066 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2448z00_2071
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7068;

																														BgL_vz00_7068 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7066));
																														if ((BgL_vz00_7068
																																==
																																BGl_keyword5382z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2448z00_2071
																																	=
																																	(BgL_iz00_7066
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11188;
																																BgL_iz00_11188 =
																																	(BgL_iz00_7066
																																	+ ((long) 2));
																																BgL_iz00_7066 =
																																	BgL_iz00_11188;
																																goto
																																	BgL_search2432z00_7065;
																															}
																													}
																											}
																											if (
																												(BgL_index2448z00_2071
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_pathz00_2038 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2448z00_2071));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2449z00_2073;
																											{
																												long BgL_iz00_7080;

																												BgL_iz00_7080 =
																													((long) 0);
																											BgL_search2432z00_7079:
																												if (
																													(BgL_iz00_7080 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2449z00_2073
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7082;

																														BgL_vz00_7082 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7080));
																														if ((BgL_vz00_7082
																																==
																																BGl_keyword5384z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2449z00_2073
																																	=
																																	(BgL_iz00_7080
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11202;
																																BgL_iz00_11202 =
																																	(BgL_iz00_7080
																																	+ ((long) 2));
																																BgL_iz00_7080 =
																																	BgL_iz00_11202;
																																goto
																																	BgL_search2432z00_7079;
																															}
																													}
																											}
																											if (
																												(BgL_index2449z00_2073
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_portz00_2039 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2449z00_2073));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2450z00_2075;
																											{
																												long BgL_iz00_7094;

																												BgL_iz00_7094 =
																													((long) 0);
																											BgL_search2432z00_7093:
																												if (
																													(BgL_iz00_7094 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2450z00_2075
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7096;

																														BgL_vz00_7096 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7094));
																														if ((BgL_vz00_7096
																																==
																																BGl_keyword5386z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2450z00_2075
																																	=
																																	(BgL_iz00_7094
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11216;
																																BgL_iz00_11216 =
																																	(BgL_iz00_7094
																																	+ ((long) 2));
																																BgL_iz00_7094 =
																																	BgL_iz00_11216;
																																goto
																																	BgL_search2432z00_7093;
																															}
																													}
																											}
																											if (
																												(BgL_index2450z00_2075
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_protocolz00_2040 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2450z00_2075));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2451z00_2077;
																											{
																												long BgL_iz00_7108;

																												BgL_iz00_7108 =
																													((long) 0);
																											BgL_search2432z00_7107:
																												if (
																													(BgL_iz00_7108 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2451z00_2077
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7110;

																														BgL_vz00_7110 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7108));
																														if ((BgL_vz00_7110
																																==
																																BGl_keyword5388z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2451z00_2077
																																	=
																																	(BgL_iz00_7108
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11230;
																																BgL_iz00_11230 =
																																	(BgL_iz00_7108
																																	+ ((long) 2));
																																BgL_iz00_7108 =
																																	BgL_iz00_11230;
																																goto
																																	BgL_search2432z00_7107;
																															}
																													}
																											}
																											if (
																												(BgL_index2451z00_2077
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_proxyz00_2041 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2451z00_2077));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2452z00_2079;
																											{
																												long BgL_iz00_7122;

																												BgL_iz00_7122 =
																													((long) 0);
																											BgL_search2432z00_7121:
																												if (
																													(BgL_iz00_7122 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2452z00_2079
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7124;

																														BgL_vz00_7124 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7122));
																														if ((BgL_vz00_7124
																																==
																																BGl_keyword5390z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2452z00_2079
																																	=
																																	(BgL_iz00_7122
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11244;
																																BgL_iz00_11244 =
																																	(BgL_iz00_7122
																																	+ ((long) 2));
																																BgL_iz00_7122 =
																																	BgL_iz00_11244;
																																goto
																																	BgL_search2432z00_7121;
																															}
																													}
																											}
																											if (
																												(BgL_index2452z00_2079
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_socketz00_2042 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2452z00_2079));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2453z00_2081;
																											{
																												long BgL_iz00_7136;

																												BgL_iz00_7136 =
																													((long) 0);
																											BgL_search2432z00_7135:
																												if (
																													(BgL_iz00_7136 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2453z00_2081
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7138;

																														BgL_vz00_7138 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7136));
																														if ((BgL_vz00_7138
																																==
																																BGl_keyword5392z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2453z00_2081
																																	=
																																	(BgL_iz00_7136
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11258;
																																BgL_iz00_11258 =
																																	(BgL_iz00_7136
																																	+ ((long) 2));
																																BgL_iz00_7136 =
																																	BgL_iz00_11258;
																																goto
																																	BgL_search2432z00_7135;
																															}
																													}
																											}
																											if (
																												(BgL_index2453z00_2081
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_timeoutz00_2043 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2453z00_2081));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											long
																												BgL_index2454z00_2083;
																											{
																												long BgL_iz00_7150;

																												BgL_iz00_7150 =
																													((long) 0);
																											BgL_search2432z00_7149:
																												if (
																													(BgL_iz00_7150 ==
																														(long)
																														(BgL_l2431z00_2021)))
																													{	/* Unsafe/http.scm 104 */
																														BgL_index2454z00_2083
																															= ((long) -1);
																													}
																												else
																													{	/* Unsafe/http.scm 104 */
																														obj_t BgL_vz00_7152;

																														BgL_vz00_7152 =
																															VECTOR_REF
																															(BgL_opt2430z00_21,
																															(int)
																															(BgL_iz00_7150));
																														if ((BgL_vz00_7152
																																==
																																BGl_keyword5394z00zz__httpz00))
																															{	/* Unsafe/http.scm 104 */
																																BgL_index2454z00_2083
																																	=
																																	(BgL_iz00_7150
																																	+ ((long) 1));
																															}
																														else
																															{
																																long
																																	BgL_iz00_11272;
																																BgL_iz00_11272 =
																																	(BgL_iz00_7150
																																	+ ((long) 2));
																																BgL_iz00_7150 =
																																	BgL_iz00_11272;
																																goto
																																	BgL_search2432z00_7149;
																															}
																													}
																											}
																											if (
																												(BgL_index2454z00_2083
																													>= ((long) 0)))
																												{	/* Unsafe/http.scm 104 */
																													BgL_usernamez00_2044 =
																														VECTOR_REF
																														(BgL_opt2430z00_21,
																														(int)
																														(BgL_index2454z00_2083));
																												}
																											else
																												{	/* Unsafe/http.scm 104 */
																													BFALSE;
																												}
																										}
																										{	/* Unsafe/http.scm 104 */
																											obj_t BgL_argsz00_2085;

																											BgL_argsz00_2085 =
																												BgL_argsz00_2025;
																											{	/* Unsafe/http.scm 104 */
																												obj_t
																													BgL_authoriza7ationza7_2086;
																												BgL_authoriza7ationza7_2086
																													=
																													BgL_authoriza7ationza7_2026;
																												{	/* Unsafe/http.scm 104 */
																													obj_t
																														BgL_bodyz00_2087;
																													BgL_bodyz00_2087 =
																														BgL_bodyz00_2027;
																													{	/* Unsafe/http.scm 104 */
																														obj_t
																															BgL_connectionz00_2088;
																														BgL_connectionz00_2088
																															=
																															BgL_connectionz00_2028;
																														{	/* Unsafe/http.scm 104 */
																															obj_t
																																BgL_contentzd2typezd2_2089;
																															BgL_contentzd2typezd2_2089
																																=
																																BgL_contentzd2typezd2_2029;
																															{	/* Unsafe/http.scm 104 */
																																obj_t
																																	BgL_headerz00_2090;
																																BgL_headerz00_2090
																																	=
																																	BgL_headerz00_2030;
																																{	/* Unsafe/http.scm 104 */
																																	obj_t
																																		BgL_hostz00_2091;
																																	BgL_hostz00_2091
																																		=
																																		BgL_hostz00_2031;
																																	{	/* Unsafe/http.scm 104 */
																																		obj_t
																																			BgL_httpzd2versionzd2_2092;
																																		BgL_httpzd2versionzd2_2092
																																			=
																																			BgL_httpzd2versionzd2_2032;
																																		{	/* Unsafe/http.scm 104 */
																																			obj_t
																																				BgL_inz00_2093;
																																			BgL_inz00_2093
																																				=
																																				BgL_inz00_2033;
																																			{	/* Unsafe/http.scm 104 */
																																				obj_t
																																					BgL_loginz00_2094;
																																				BgL_loginz00_2094
																																					=
																																					BgL_loginz00_2034;
																																				{	/* Unsafe/http.scm 104 */
																																					obj_t
																																						BgL_methodz00_2095;
																																					BgL_methodz00_2095
																																						=
																																						BgL_methodz00_2035;
																																					{	/* Unsafe/http.scm 104 */
																																						obj_t
																																							BgL_outz00_2096;
																																						BgL_outz00_2096
																																							=
																																							BgL_outz00_2036;
																																						{	/* Unsafe/http.scm 104 */
																																							obj_t
																																								BgL_passwordz00_2097;
																																							BgL_passwordz00_2097
																																								=
																																								BgL_passwordz00_2037;
																																							{	/* Unsafe/http.scm 104 */
																																								obj_t
																																									BgL_pathz00_2098;
																																								BgL_pathz00_2098
																																									=
																																									BgL_pathz00_2038;
																																								{	/* Unsafe/http.scm 104 */
																																									obj_t
																																										BgL_portz00_2099;
																																									BgL_portz00_2099
																																										=
																																										BgL_portz00_2039;
																																									{	/* Unsafe/http.scm 104 */
																																										obj_t
																																											BgL_protocolz00_2100;
																																										BgL_protocolz00_2100
																																											=
																																											BgL_protocolz00_2040;
																																										{	/* Unsafe/http.scm 104 */
																																											obj_t
																																												BgL_proxyz00_2101;
																																											BgL_proxyz00_2101
																																												=
																																												BgL_proxyz00_2041;
																																											{	/* Unsafe/http.scm 104 */
																																												obj_t
																																													BgL_socketz00_2102;
																																												BgL_socketz00_2102
																																													=
																																													BgL_socketz00_2042;
																																												{	/* Unsafe/http.scm 104 */
																																													obj_t
																																														BgL_timeoutz00_2103;
																																													BgL_timeoutz00_2103
																																														=
																																														BgL_timeoutz00_2043;
																																													return
																																														BGl_httpz00zz__httpz00
																																														(BgL_argsz00_2085,
																																														BgL_authoriza7ationza7_2086,
																																														BgL_bodyz00_2087,
																																														BgL_connectionz00_2088,
																																														BgL_contentzd2typezd2_2089,
																																														BgL_headerz00_2090,
																																														BgL_hostz00_2091,
																																														BgL_httpzd2versionzd2_2092,
																																														BgL_inz00_2093,
																																														BgL_loginz00_2094,
																																														BgL_methodz00_2095,
																																														BgL_outz00_2096,
																																														BgL_passwordz00_2097,
																																														BgL_pathz00_2098,
																																														BgL_portz00_2099,
																																														BgL_protocolz00_2100,
																																														BgL_proxyz00_2101,
																																														BgL_socketz00_2102,
																																														BgL_timeoutz00_2103,
																																														BgL_usernamez00_2044);
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
								}
							}
						}
					}
				}
			}
		}
	}



/* http */
	BGL_EXPORTED_DEF obj_t BGl_httpz00zz__httpz00(obj_t BgL_argsz00_1,
		obj_t BgL_authoriza7ationza7_2, obj_t BgL_bodyz00_3,
		obj_t BgL_connectionz00_4, obj_t BgL_contentzd2typezd2_5,
		obj_t BgL_headerz00_6, obj_t BgL_hostz00_7, obj_t BgL_httpzd2versionzd2_8,
		obj_t BgL_inz00_9, obj_t BgL_loginz00_10, obj_t BgL_methodz00_11,
		obj_t BgL_outz00_12, obj_t BgL_passwordz00_13, obj_t BgL_pathz00_14,
		obj_t BgL_portz00_15, obj_t BgL_protocolz00_16, obj_t BgL_proxyz00_17,
		obj_t BgL_socketz00_18, obj_t BgL_timeoutz00_19, obj_t BgL_usernamez00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 104 */
			if (CBOOL(BgL_socketz00_18))
				{	/* Unsafe/http.scm 123 */
					BgL_inz00_9 = SOCKET_INPUT(BgL_socketz00_18);
					BgL_outz00_12 = SOCKET_OUTPUT(BgL_socketz00_18);
				}
			else
				{	/* Unsafe/http.scm 126 */
					bool_t BgL_testz00_11283;

					if (CBOOL(BgL_inz00_9))
						{	/* Unsafe/http.scm 126 */
							BgL_testz00_11283 = ((bool_t) 0);
						}
					else
						{	/* Unsafe/http.scm 126 */
							if (CBOOL(BgL_outz00_12))
								{	/* Unsafe/http.scm 126 */
									BgL_testz00_11283 = ((bool_t) 0);
								}
							else
								{	/* Unsafe/http.scm 126 */
									BgL_testz00_11283 = ((bool_t) 1);
								}
						}
					if (BgL_testz00_11283)
						{	/* Unsafe/http.scm 126 */
							{	/* Unsafe/http.scm 127 */
								bool_t BgL_testz00_11288;

								if (CBOOL(BgL_hostz00_7))
									{	/* Unsafe/http.scm 127 */
										BgL_testz00_11288 = CBOOL(BgL_portz00_15);
									}
								else
									{	/* Unsafe/http.scm 127 */
										BgL_testz00_11288 = ((bool_t) 0);
									}
								if (BgL_testz00_11288)
									{	/* Unsafe/http.scm 127 */
										BFALSE;
									}
								else
									{	/* Unsafe/http.scm 127 */
										BGl_errorz00zz__errorz00(BGl_symbol5354z00zz__httpz00,
											BGl_string5396z00zz__httpz00, BgL_hostz00_7);
									}
							}
							BgL_socketz00_18 =
								BGl_makezd2httpzd2socketz00zz__httpz00(BgL_hostz00_7,
								BgL_portz00_15, BgL_proxyz00_17, BgL_timeoutz00_19);
							BgL_inz00_9 = SOCKET_INPUT(BgL_socketz00_18);
							BgL_outz00_12 = SOCKET_OUTPUT(BgL_socketz00_18);
						}
					else
						{	/* Unsafe/http.scm 126 */
							if (CBOOL(BgL_inz00_9))
								{	/* Unsafe/http.scm 132 */
									if (CBOOL(BgL_outz00_12))
										{	/* Unsafe/http.scm 134 */
											BFALSE;
										}
									else
										{	/* Unsafe/http.scm 134 */
											BGl_errorz00zz__errorz00(BGl_symbol5354z00zz__httpz00,
												BGl_string5397z00zz__httpz00, BgL_outz00_12);
										}
								}
							else
								{	/* Unsafe/http.scm 132 */
									BGl_errorz00zz__errorz00(BGl_symbol5354z00zz__httpz00,
										BGl_string5398z00zz__httpz00, BgL_inz00_9);
								}
						}
				}
			if (STRINGP(BgL_proxyz00_17))
				{	/* Unsafe/http.scm 138 */
					obj_t BgL_outz00_7195;

					BgL_outz00_7195 = BgL_outz00_12;
					{	/* Unsafe/http.scm 138 */
						obj_t BgL_arg3123z00_7196;

						{	/* Unsafe/http.scm 138 */
							obj_t BgL_arg3124z00_7197;

							BgL_arg3124z00_7197 = SYMBOL_TO_STRING(BgL_methodz00_11);
							BgL_arg3123z00_7196 =
								BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
								(BgL_arg3124z00_7197);
						}
						bgl_display_obj(BgL_arg3123z00_7196, BgL_outz00_7195);
					}
					bgl_display_string(BGl_string5399z00zz__httpz00, BgL_outz00_7195);
					bgl_display_obj(BgL_hostz00_7, BgL_outz00_7195);
					bgl_display_string(BGl_string5400z00zz__httpz00, BgL_outz00_7195);
					bgl_display_obj(BgL_portz00_15, BgL_outz00_7195);
					bgl_display_obj(BgL_pathz00_14, BgL_outz00_7195);
					bgl_display_string(BGl_string5401z00zz__httpz00, BgL_outz00_7195);
					bgl_display_obj(BgL_httpzd2versionzd2_8, BgL_outz00_7195);
					bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_7195);
				}
			else
				{	/* Unsafe/http.scm 139 */
					obj_t BgL_outz00_7212;

					BgL_outz00_7212 = BgL_outz00_12;
					{	/* Unsafe/http.scm 139 */
						obj_t BgL_arg3125z00_7213;

						{	/* Unsafe/http.scm 139 */
							obj_t BgL_arg3126z00_7214;

							BgL_arg3126z00_7214 = SYMBOL_TO_STRING(BgL_methodz00_11);
							BgL_arg3125z00_7213 =
								BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
								(BgL_arg3126z00_7214);
						}
						bgl_display_obj(BgL_arg3125z00_7213, BgL_outz00_7212);
					}
					bgl_display_string(BGl_string5401z00zz__httpz00, BgL_outz00_7212);
					bgl_display_obj(BgL_pathz00_14, BgL_outz00_7212);
					bgl_display_string(BGl_string5401z00zz__httpz00, BgL_outz00_7212);
					bgl_display_obj(BgL_httpzd2versionzd2_8, BgL_outz00_7212);
					bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_7212);
				}
			if (((long) CINT(BgL_portz00_15) == ((long) 80)))
				{	/* Unsafe/http.scm 141 */
					bgl_display_string(BGl_string5403z00zz__httpz00, BgL_outz00_12);
					bgl_display_obj(BgL_hostz00_7, BgL_outz00_12);
					bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
				}
			else
				{	/* Unsafe/http.scm 141 */
					bgl_display_string(BGl_string5403z00zz__httpz00, BgL_outz00_12);
					bgl_display_obj(BgL_hostz00_7, BgL_outz00_12);
					bgl_display_string(BGl_string5400z00zz__httpz00, BgL_outz00_12);
					bgl_display_obj(BgL_portz00_15, BgL_outz00_12);
					bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
				}
			{
				obj_t BgL_l2370z00_2114;

				BgL_l2370z00_2114 = BgL_headerz00_6;
			BgL_zc3anonymousza33071ze3z83_2115:
				if (PAIRP(BgL_l2370z00_2114))
					{	/* Unsafe/http.scm 145 */
						{	/* Unsafe/http.scm 146 */
							obj_t BgL_hz00_2117;

							BgL_hz00_2117 = CAR(BgL_l2370z00_2114);
							{	/* Unsafe/http.scm 146 */
								obj_t BgL_arg3073z00_2118;

								{	/* Unsafe/http.scm 146 */
									obj_t BgL_arg3074z00_2119;

									BgL_arg3074z00_2119 = CAR(BgL_hz00_2117);
									{	/* Unsafe/http.scm 146 */
										obj_t BgL_res5150z00_7239;

										{	/* Unsafe/http.scm 146 */
											obj_t BgL_keywordz00_7237;

											BgL_keywordz00_7237 = BgL_arg3074z00_2119;
											{	/* Unsafe/http.scm 146 */
												obj_t BgL_arg5049z00_7238;

												BgL_arg5049z00_7238 =
													KEYWORD_TO_STRING(BgL_keywordz00_7237);
												BgL_res5150z00_7239 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg5049z00_7238);
											}
										}
										BgL_arg3073z00_2118 = BgL_res5150z00_7239;
									}
								}
								bgl_display_obj(BgL_arg3073z00_2118, BgL_outz00_12);
							}
							bgl_display_string(BGl_string5404z00zz__httpz00, BgL_outz00_12);
							{	/* Unsafe/http.scm 147 */
								obj_t BgL_arg3075z00_2120;

								{	/* Unsafe/http.scm 147 */
									bool_t BgL_testz00_11342;

									{	/* Unsafe/http.scm 147 */
										obj_t BgL_auxz00_11343;

										BgL_auxz00_11343 = CDR(BgL_hz00_2117);
										BgL_testz00_11342 = PAIRP(BgL_auxz00_11343);
									}
									if (BgL_testz00_11342)
										{	/* Unsafe/http.scm 147 */
											obj_t BgL_pairz00_7244;

											BgL_pairz00_7244 = BgL_hz00_2117;
											BgL_arg3075z00_2120 = CAR(CDR(BgL_pairz00_7244));
										}
									else
										{	/* Unsafe/http.scm 147 */
											BgL_arg3075z00_2120 = CDR(BgL_hz00_2117);
										}
								}
								bgl_display_obj(BgL_arg3075z00_2120, BgL_outz00_12);
							}
							bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
						}
						{
							obj_t BgL_l2370z00_11351;

							BgL_l2370z00_11351 = CDR(BgL_l2370z00_2114);
							BgL_l2370z00_2114 = BgL_l2370z00_11351;
							goto BgL_zc3anonymousza33071ze3z83_2115;
						}
					}
				else
					{	/* Unsafe/http.scm 145 */
						((bool_t) 1);
					}
			}
			if (STRINGP(BgL_loginz00_10))
				{	/* Unsafe/http.scm 153 */
					obj_t BgL_loginz00_7253;

					obj_t BgL_outz00_7254;

					BgL_loginz00_7253 = BgL_loginz00_10;
					BgL_outz00_7254 = BgL_outz00_12;
					{	/* Unsafe/http.scm 153 */
						obj_t BgL_uinfoz00_7255;

						{	/* Unsafe/http.scm 153 */

							BgL_uinfoz00_7255 =
								BGl_base64zd2encodezd2zz__base64z00(BgL_loginz00_7253,
								BINT(((long) 76)));
						}
						bgl_display_string(BGl_string5405z00zz__httpz00, BgL_outz00_7254);
						bgl_display_obj(BgL_uinfoz00_7255, BgL_outz00_7254);
						bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_7254);
				}}
			else
				{	/* Unsafe/http.scm 152 */
					if (STRINGP(BgL_authoriza7ationza7_2))
						{	/* Unsafe/http.scm 154 */
							bgl_display_string(BGl_string5406z00zz__httpz00, BgL_outz00_12);
							bgl_display_obj(BgL_authoriza7ationza7_2, BgL_outz00_12);
							bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
						}
					else
						{	/* Unsafe/http.scm 156 */
							bool_t BgL_testz00_11365;

							if (STRINGP(BgL_usernamez00_20))
								{	/* Unsafe/http.scm 156 */
									BgL_testz00_11365 = STRINGP(BgL_passwordz00_13);
								}
							else
								{	/* Unsafe/http.scm 156 */
									BgL_testz00_11365 = ((bool_t) 0);
								}
							if (BgL_testz00_11365)
								{	/* Unsafe/http.scm 157 */
									obj_t BgL_arg3082z00_2128;

									BgL_arg3082z00_2128 =
										string_append_3(BgL_usernamez00_20,
										BGl_string5400z00zz__httpz00, BgL_passwordz00_13);
									{	/* Unsafe/http.scm 157 */
										obj_t BgL_outz00_7270;

										BgL_outz00_7270 = BgL_outz00_12;
										{	/* Unsafe/http.scm 157 */
											obj_t BgL_uinfoz00_7271;

											{	/* Unsafe/http.scm 157 */

												BgL_uinfoz00_7271 =
													BGl_base64zd2encodezd2zz__base64z00
													(BgL_arg3082z00_2128, BINT(((long) 76)));
											}
											bgl_display_string(BGl_string5405z00zz__httpz00,
												BgL_outz00_7270);
											bgl_display_obj(BgL_uinfoz00_7271, BgL_outz00_7270);
											bgl_display_string(BGl_string5402z00zz__httpz00,
												BgL_outz00_7270);
								}}}
							else
								{	/* Unsafe/http.scm 156 */
									BFALSE;
								}
						}
				}
			if (STRINGP(BgL_connectionz00_4))
				{	/* Unsafe/http.scm 159 */
					bgl_display_string(BGl_string5407z00zz__httpz00, BgL_outz00_12);
					bgl_display_obj(BgL_connectionz00_4, BgL_outz00_12);
					bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
				}
			else
				{	/* Unsafe/http.scm 159 */
					BFALSE;
				}
			{	/* Unsafe/http.scm 162 */
				bool_t BgL_testz00_11380;

				if ((BgL_methodz00_11 == BGl_symbol5408z00zz__httpz00))
					{	/* Unsafe/http.scm 163 */
						bool_t BgL__ortest_2075z00_2151;

						BgL__ortest_2075z00_2151 =
							(BgL_contentzd2typezd2_5 == BGl_symbol5410z00zz__httpz00);
						if (BgL__ortest_2075z00_2151)
							{	/* Unsafe/http.scm 163 */
								BgL_testz00_11380 = BgL__ortest_2075z00_2151;
							}
						else
							{	/* Unsafe/http.scm 163 */
								if (NULLP(BgL_argsz00_1))
									{	/* Unsafe/http.scm 164 */
										BgL_testz00_11380 = ((bool_t) 0);
									}
								else
									{	/* Unsafe/http.scm 164 */
										BgL_testz00_11380 = ((bool_t) 1);
									}
							}
					}
				else
					{	/* Unsafe/http.scm 162 */
						BgL_testz00_11380 = ((bool_t) 0);
					}
				if (BgL_testz00_11380)
					{	/* Unsafe/http.scm 162 */
						if ((BgL_contentzd2typezd2_5 == BGl_symbol5410z00zz__httpz00))
							{	/* Unsafe/http.scm 168 */
								obj_t BgL_boundaryz00_2133;

								BgL_boundaryz00_2133 =
									BGl_generatezd2httpzd2boundaryz00zz__httpz00();
								{	/* Unsafe/http.scm 168 */
									obj_t BgL_contentz00_2134;

									BgL_contentz00_2134 =
										BGl_generatezd2httpzd2postzd2bodyzd2zz__httpz00
										(BgL_boundaryz00_2133, BgL_argsz00_1);
									{	/* Unsafe/http.scm 169 */

										bgl_display_string(BGl_string5412z00zz__httpz00,
											BgL_outz00_12);
										{	/* Unsafe/http.scm 170 */
											long BgL_arg3087z00_2135;

											BgL_arg3087z00_2135 = STRING_LENGTH(BgL_contentz00_2134);
											bgl_display_obj(BINT(BgL_arg3087z00_2135), BgL_outz00_12);
										}
										bgl_display_string(BGl_string5402z00zz__httpz00,
											BgL_outz00_12);
										bgl_display_string(BGl_string5413z00zz__httpz00,
											BgL_outz00_12);
										{	/* Unsafe/http.scm 172 */
											obj_t BgL_arg3088z00_2136;

											BgL_arg3088z00_2136 =
												c_substring(BgL_boundaryz00_2133, ((long) 2),
												STRING_LENGTH(BgL_boundaryz00_2133));
											bgl_display_obj(BgL_arg3088z00_2136, BgL_outz00_12);
										}
										bgl_display_string(BGl_string5402z00zz__httpz00,
											BgL_outz00_12);
										bgl_display_string(BGl_string5402z00zz__httpz00,
											BgL_outz00_12);
										bgl_display_obj(BgL_contentz00_2134, BgL_outz00_12);
							}}}
						else
							{	/* Unsafe/http.scm 177 */
								obj_t BgL_contentz00_2139;

								obj_t BgL_ctz00_2140;

								BgL_contentz00_2139 =
									BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(BgL_argsz00_1);
								if (CBOOL(BgL_contentzd2typezd2_5))
									{	/* Unsafe/http.scm 178 */
										BgL_ctz00_2140 = BgL_contentzd2typezd2_5;
									}
								else
									{	/* Unsafe/http.scm 178 */
										BgL_ctz00_2140 = BGl_string5414z00zz__httpz00;
									}
								bgl_display_string(BGl_string5415z00zz__httpz00, BgL_outz00_12);
								bgl_display_obj(BgL_ctz00_2140, BgL_outz00_12);
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
								bgl_display_string(BGl_string5412z00zz__httpz00, BgL_outz00_12);
								{	/* Unsafe/http.scm 180 */
									long BgL_arg3091z00_2141;

									BgL_arg3091z00_2141 = STRING_LENGTH(BgL_contentz00_2139);
									bgl_display_obj(BINT(BgL_arg3091z00_2141), BgL_outz00_12);
								}
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
								bgl_display_obj(BgL_contentz00_2139, BgL_outz00_12);
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
					}}
				else
					{	/* Unsafe/http.scm 162 */
						if (STRINGP(BgL_bodyz00_3))
							{	/* Unsafe/http.scm 184 */
								bgl_display_string(BGl_string5412z00zz__httpz00, BgL_outz00_12);
								{	/* Unsafe/http.scm 186 */
									long BgL_arg3093z00_2144;

									BgL_arg3093z00_2144 = STRING_LENGTH(BgL_bodyz00_3);
									bgl_display_obj(BINT(BgL_arg3093z00_2144), BgL_outz00_12);
								}
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
								bgl_display_string(BGl_string5402z00zz__httpz00, BgL_outz00_12);
								bgl_display_obj(BgL_bodyz00_3, BgL_outz00_12);
							}
						else
							{	/* Unsafe/http.scm 184 */
								if (INPUT_PORTP(BgL_bodyz00_3))
									{	/* Unsafe/http.scm 189 */
										bgl_display_string(BGl_string5402z00zz__httpz00,
											BgL_outz00_12);
										{	/* Unsafe/http.scm 192 */
											obj_t BgL_g3095z00_2146;

											obj_t BgL_g3096z00_2147;

											BgL_g3095z00_2146 = BgL_bodyz00_3;
											BgL_g3096z00_2147 = BgL_outz00_12;
											{	/* Ieee/input.scm 82 */

												BINT(BGl_sendzd2charszd2zz__r4_input_6_10_2z00
													(BgL_g3095z00_2146, BgL_g3096z00_2147,
														BINT(((long) -1)), BINT(((long) -1))));
									}}}
								else
									{	/* Unsafe/http.scm 189 */
										bgl_display_string(BGl_string5402z00zz__httpz00,
											BgL_outz00_12);
									}
							}
					}
			}
			FLUSH_OUTPUT_PORT(BgL_outz00_12);
			return BgL_socketz00_18;
		}
	}



/* make-http-socket */
	obj_t BGl_makezd2httpzd2socketz00zz__httpz00(obj_t BgL_hostz00_23,
		obj_t BgL_portz00_24, obj_t BgL_proxyz00_25, obj_t BgL_timeoutz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 202 */
			if (STRINGP(BgL_proxyz00_25))
				{	/* Unsafe/http.scm 204 */
					obj_t BgL_iz00_2154;

					{	/* Unsafe/http.scm 204 */
						obj_t BgL_g3104z00_2159;

						BgL_g3104z00_2159 = BgL_proxyz00_25;
						{	/* Ieee/string.scm 208 */

							BgL_iz00_2154 =
								BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_g3104z00_2159,
								BCHAR(((unsigned char) ':')), BINT(((long) 0)));
					}}
					if (CBOOL(BgL_iz00_2154))
						{	/* Unsafe/http.scm 205 */
							BgL_hostz00_23 =
								c_substring(BgL_proxyz00_25, ((long) 0),
								(long) CINT(BgL_iz00_2154));
							{	/* Unsafe/http.scm 209 */
								obj_t BgL_arg3100z00_2155;

								BgL_arg3100z00_2155 =
									c_substring(BgL_proxyz00_25,
									((long) CINT(BgL_iz00_2154) + ((long) 1)),
									STRING_LENGTH(BgL_proxyz00_25));
								BgL_portz00_24 =
									BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
									(BgL_arg3100z00_2155, BNIL));
						}}
					else
						{	/* Unsafe/http.scm 205 */
							BgL_hostz00_23 = BgL_proxyz00_25;
							BgL_portz00_24 = BINT(((long) 80));
				}}
			else
				{	/* Unsafe/http.scm 203 */
					BFALSE;
				}
			if (STRINGP(BgL_hostz00_23))
				{	/* Unsafe/http.scm 214 */
					if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_portz00_24))
						{	/* Unsafe/http.scm 219 */
							obj_t BgL_domainz00_2164;

							BgL_domainz00_2164 = BGl_symbol5416z00zz__httpz00;
							return
								BGl_makezd2clientzd2socketz00zz__socketz00(BgL_hostz00_23,
								CINT(BgL_portz00_24), BgL_domainz00_2164, BTRUE, BTRUE,
								BgL_timeoutz00_26);
						}
					else
						{	/* Unsafe/http.scm 216 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol5354z00zz__httpz00, BGl_string5418z00zz__httpz00,
								BgL_portz00_24);
						}
				}
			else
				{	/* Unsafe/http.scm 214 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol5354z00zz__httpz00, BGl_string5419z00zz__httpz00,
						BgL_hostz00_23);
				}
		}
	}



/* generate-http-post-body */
	obj_t BGl_generatezd2httpzd2postzd2bodyzd2zz__httpz00(obj_t
		BgL_boundaryz00_27, obj_t BgL_argsz00_28)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 224 */
			{	/* Unsafe/http.scm 225 */
				obj_t BgL_portz00_2168;

				{	/* Unsafe/http.scm 225 */

					{	/* Ieee/port.scm 386 */

						BgL_portz00_2168 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				if (NULLP(BgL_argsz00_28))
					{	/* Unsafe/http.scm 226 */
						bgl_display_string(BGl_string5402z00zz__httpz00, BgL_portz00_2168);
						return bgl_close_output_port(BgL_portz00_2168);
					}
				else
					{
						obj_t BgL_argsz00_2171;

						BgL_argsz00_2171 = BgL_argsz00_28;
					BgL_zc3anonymousza33109ze3z83_2172:
						if (NULLP(BgL_argsz00_2171))
							{	/* Unsafe/http.scm 231 */
								bgl_display_obj(BgL_boundaryz00_27, BgL_portz00_2168);
								bgl_display_string(BGl_string5420z00zz__httpz00,
									BgL_portz00_2168);
								bgl_display_string(BGl_string5402z00zz__httpz00,
									BgL_portz00_2168);
								return bgl_close_output_port(BgL_portz00_2168);
							}
						else
							{	/* Unsafe/http.scm 235 */
								obj_t BgL_az00_2174;

								BgL_az00_2174 = CAR(BgL_argsz00_2171);
								bgl_display_obj(BgL_boundaryz00_27, BgL_portz00_2168);
								bgl_display_string(BGl_string5402z00zz__httpz00,
									BgL_portz00_2168);
								{	/* Unsafe/http.scm 237 */
									bool_t BgL_testz00_11473;

									{	/* Unsafe/http.scm 237 */
										obj_t BgL_auxz00_11474;

										BgL_auxz00_11474 = CAR(BgL_az00_2174);
										BgL_testz00_11473 = PAIRP(BgL_auxz00_11474);
									}
									if (BgL_testz00_11473)
										{	/* Unsafe/http.scm 237 */
											bgl_display_string(BGl_string5421z00zz__httpz00,
												BgL_portz00_2168);
											{	/* Unsafe/http.scm 239 */
												obj_t BgL_arg3112z00_2176;

												{	/* Unsafe/http.scm 239 */
													obj_t BgL_pairz00_7354;

													BgL_pairz00_7354 = BgL_az00_2174;
													BgL_arg3112z00_2176 = CAR(CAR(BgL_pairz00_7354));
												}
												bgl_display_obj(BgL_arg3112z00_2176, BgL_portz00_2168);
											}
											bgl_display_string(BGl_string5422z00zz__httpz00,
												BgL_portz00_2168);
											{	/* Unsafe/http.scm 239 */
												obj_t BgL_arg3113z00_2177;

												{	/* Unsafe/http.scm 239 */
													obj_t BgL_pairz00_7360;

													BgL_pairz00_7360 = BgL_az00_2174;
													BgL_arg3113z00_2177 = CAR(CDR(CAR(BgL_pairz00_7360)));
												}
												bgl_display_obj(BgL_arg3113z00_2177, BgL_portz00_2168);
											}
											bgl_display_string(BGl_string5402z00zz__httpz00,
												BgL_portz00_2168);
										}
									else
										{	/* Unsafe/http.scm 237 */
											bgl_display_string(BGl_string5421z00zz__httpz00,
												BgL_portz00_2168);
											bgl_display_obj(CAR(BgL_az00_2174), BgL_portz00_2168);
											bgl_display_string(BGl_string5423z00zz__httpz00,
												BgL_portz00_2168);
											bgl_display_string(BGl_string5402z00zz__httpz00,
												BgL_portz00_2168);
										}
								}
								bgl_display_string(BGl_string5402z00zz__httpz00,
									BgL_portz00_2168);
								{	/* Unsafe/http.scm 243 */
									obj_t BgL_arg3116z00_2180;

									{	/* Unsafe/http.scm 243 */
										obj_t BgL_pairz00_7377;

										BgL_pairz00_7377 = BgL_az00_2174;
										BgL_arg3116z00_2180 = CAR(CDR(BgL_pairz00_7377));
									}
									bgl_display_obj(BgL_arg3116z00_2180, BgL_portz00_2168);
								}
								bgl_display_string(BGl_string5402z00zz__httpz00,
									BgL_portz00_2168);
								{
									obj_t BgL_argsz00_11497;

									BgL_argsz00_11497 = CDR(BgL_argsz00_2171);
									BgL_argsz00_2171 = BgL_argsz00_11497;
									goto BgL_zc3anonymousza33109ze3z83_2172;
								}
							}
					}
			}
		}
	}



/* generate-http-boundary */
	obj_t BGl_generatezd2httpzd2boundaryz00zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 249 */
			{	/* Unsafe/http.scm 250 */
				obj_t BgL_sz00_2184;

				{	/* Unsafe/http.scm 250 */
					obj_t BgL_list3122z00_2194;

					BgL_list3122z00_2194 = MAKE_PAIR(BCHAR(((unsigned char) '-')), BNIL);
					{	/* Unsafe/http.scm 250 */
						obj_t BgL_res5151z00_7390;

						{	/* Unsafe/http.scm 250 */
							obj_t BgL_arg4962z00_7387;

							BgL_arg4962z00_7387 = CAR(BgL_list3122z00_2194);
							BgL_res5151z00_7390 =
								make_string(((long) 42), CCHAR(BgL_arg4962z00_7387));
						}
						BgL_sz00_2184 = BgL_res5151z00_7390;
				}}
				{
					long BgL_iz00_2187;

					BgL_iz00_2187 = ((long) 30);
				BgL_zc3anonymousza33118ze3z83_2188:
					if ((BgL_iz00_2187 < ((long) 42)))
						{	/* Unsafe/http.scm 254 */
							long BgL_numz00_2190;

							{	/* Unsafe/http.scm 254 */
								long BgL_res5152z00_7395;

								{	/* Unsafe/http.scm 254 */
									int BgL_arg5063z00_7394;

									BgL_arg5063z00_7394 = rand();
									BgL_res5152z00_7395 =
										BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
										(long) (BgL_arg5063z00_7394), ((long) 16));
								}
								BgL_numz00_2190 = BgL_res5152z00_7395;
							}
							{	/* Unsafe/http.scm 255 */
								unsigned char BgL_auxz00_11509;

								BgL_auxz00_11509 =
									STRING_REF(BGl_string5424z00zz__httpz00, BgL_numz00_2190);
								STRING_SET(BgL_sz00_2184, BgL_iz00_2187, BgL_auxz00_11509);
							}
							{
								long BgL_iz00_11512;

								BgL_iz00_11512 = (BgL_iz00_2187 + ((long) 1));
								BgL_iz00_2187 = BgL_iz00_11512;
								goto BgL_zc3anonymousza33118ze3z83_2188;
							}
						}
					else
						{	/* Unsafe/http.scm 253 */
							((bool_t) 0);
						}
				}
				return BgL_sz00_2184;
			}
		}
	}



/* http-parse-error-msg */
	obj_t BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(obj_t BgL_cz00_43,
		obj_t BgL_portz00_44)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 283 */
			if (CHARP(BgL_cz00_43))
				{	/* Unsafe/http.scm 285 */
					obj_t BgL_linez00_2203;

					BgL_linez00_2203 =
						BGl_httpzd2readzd2linez00zz__httpz00(BgL_portz00_44);
					{	/* Unsafe/http.scm 287 */
						obj_t BgL_arg3129z00_2204;

						{	/* Unsafe/http.scm 287 */
							obj_t BgL_arg3131z00_2206;

							obj_t BgL_arg3133z00_2208;

							{	/* Unsafe/http.scm 287 */
								obj_t BgL_list3138z00_2213;

								BgL_list3138z00_2213 = MAKE_PAIR(BgL_cz00_43, BNIL);
								BgL_arg3131z00_2206 =
									BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
									(BgL_list3138z00_2213);
							}
							if (STRINGP(BgL_linez00_2203))
								{	/* Unsafe/http.scm 287 */
									BgL_arg3133z00_2208 = BgL_linez00_2203;
								}
							else
								{	/* Unsafe/http.scm 287 */
									BgL_arg3133z00_2208 = BGl_string5425z00zz__httpz00;
								}
							{	/* Unsafe/http.scm 287 */
								obj_t BgL_list3134z00_2209;

								{	/* Unsafe/http.scm 287 */
									obj_t BgL_arg3135z00_2210;

									{	/* Unsafe/http.scm 287 */
										obj_t BgL_arg3136z00_2211;

										{	/* Unsafe/http.scm 287 */
											obj_t BgL_arg3137z00_2212;

											BgL_arg3137z00_2212 =
												MAKE_PAIR(BgL_arg3133z00_2208, BNIL);
											BgL_arg3136z00_2211 =
												MAKE_PAIR(BGl_string5426z00zz__httpz00,
												BgL_arg3137z00_2212);
										}
										BgL_arg3135z00_2210 =
											MAKE_PAIR(BgL_arg3131z00_2206, BgL_arg3136z00_2211);
									}
									BgL_list3134z00_2209 =
										MAKE_PAIR(BGl_string5427z00zz__httpz00,
										BgL_arg3135z00_2210);
								}
								BgL_arg3129z00_2204 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3134z00_2209);
							}
						}
						return string_for_read(BgL_arg3129z00_2204);
					}
				}
			else
				{	/* Unsafe/http.scm 284 */
					return BgL_cz00_43;
				}
		}
	}



/* http-parse-status-line */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t
		BgL_ipz00_45)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 348 */
			return
				PROCEDURE_ENTRY(BGl_statuszd2linezd2grammarz00zz__httpz00)
				(BGl_statuszd2linezd2grammarz00zz__httpz00, BgL_ipz00_45, BEOA);
		}
	}



/* _http-parse-status-line */
	obj_t BGl__httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t BgL_envz00_9556,
		obj_t BgL_ipz00_9557)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 348 */
			{	/* Unsafe/http.scm 349 */
				obj_t BgL_auxz00_11529;

				if (INPUT_PORTP(BgL_ipz00_9557))
					{	/* Unsafe/http.scm 349 */
						BgL_auxz00_11529 = BgL_ipz00_9557;
					}
				else
					{
						obj_t BgL_auxz00_11532;

						BgL_auxz00_11532 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 12803)), BGl_string5429z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9557);
						FAILURE(BgL_auxz00_11532, BFALSE, BFALSE);
					}
				return BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(BgL_auxz00_11529);
			}
		}
	}



/* http-read-line */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2readzd2linez00zz__httpz00(obj_t BgL_pz00_46)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 354 */
			{
				obj_t BgL_inputzd2portzd2_2286;

				long BgL_lastzd2matchzd2_2287;

				obj_t BgL_inputzd2portzd2_2273;

				long BgL_lastzd2matchzd2_2274;

				obj_t BgL_inputzd2portzd2_2256;

				long BgL_lastzd2matchzd2_2257;

				obj_t BgL_inputzd2portzd2_2248;

				long BgL_lastzd2matchzd2_2249;

				RGC_START_MATCH(BgL_pz00_46);
				{	/* Unsafe/http.scm 355 */
					long BgL_matchz00_2385;

					BgL_inputzd2portzd2_2248 = BgL_pz00_46;
					BgL_lastzd2matchzd2_2249 = ((long) 1);
				BgL_zc3anonymousza33140ze3z83_2250:
					{	/* Unsafe/http.scm 355 */
						int BgL_currentzd2charzd2_2251;

						BgL_currentzd2charzd2_2251 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2248);
						if (((long) (BgL_currentzd2charzd2_2251) == ((long) 0)))
							{	/* Unsafe/http.scm 355 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2248))
									{	/* Unsafe/http.scm 355 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_2248))
											{

												goto BgL_zc3anonymousza33140ze3z83_2250;
											}
										else
											{	/* Unsafe/http.scm 355 */
												BgL_matchz00_2385 = BgL_lastzd2matchzd2_2249;
											}
									}
								else
									{	/* Unsafe/http.scm 355 */
										BgL_inputzd2portzd2_2256 = BgL_inputzd2portzd2_2248;
										BgL_lastzd2matchzd2_2257 = BgL_lastzd2matchzd2_2249;
									BgL_zc3anonymousza33145ze3z83_2258:
										{	/* Unsafe/http.scm 355 */
											long BgL_newzd2matchzd2_2259;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2256);
											BgL_newzd2matchzd2_2259 = ((long) 0);
											{	/* Unsafe/http.scm 355 */
												int BgL_currentzd2charzd2_2260;

												BgL_currentzd2charzd2_2260 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2256);
												{	/* Unsafe/http.scm 355 */
													obj_t BgL_aux2376z00_2265;

													BgL_aux2376z00_2265 =
														BINT(BgL_currentzd2charzd2_2260);
													switch ((long) CINT(BgL_aux2376z00_2265))
														{
														case ((long) 0):

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2256))
																{	/* Unsafe/http.scm 355 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2256))
																		{

																			goto BgL_zc3anonymousza33145ze3z83_2258;
																		}
																	else
																		{	/* Unsafe/http.scm 355 */
																			BgL_matchz00_2385 =
																				BgL_newzd2matchzd2_2259;
																		}
																}
															else
																{	/* Unsafe/http.scm 355 */
																	BgL_inputzd2portzd2_2273 =
																		BgL_inputzd2portzd2_2256;
																	BgL_lastzd2matchzd2_2274 =
																		BgL_newzd2matchzd2_2259;
																BgL_zc3anonymousza33151ze3z83_2275:
																	{	/* Unsafe/http.scm 355 */
																		long BgL_newzd2matchzd2_2276;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2273);
																		BgL_newzd2matchzd2_2276 = ((long) 0);
																		{	/* Unsafe/http.scm 355 */
																			int BgL_currentzd2charzd2_2277;

																			BgL_currentzd2charzd2_2277 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2273);
																			{	/* Unsafe/http.scm 355 */
																				obj_t BgL_aux2378z00_2282;

																				BgL_aux2378z00_2282 =
																					BINT(BgL_currentzd2charzd2_2277);
																				switch (
																					(long) CINT(BgL_aux2378z00_2282))
																					{
																					case ((long) 0):

																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_2273))
																							{	/* Unsafe/http.scm 355 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_2273))
																									{

																										goto
																											BgL_zc3anonymousza33151ze3z83_2275;
																									}
																								else
																									{	/* Unsafe/http.scm 355 */
																										BgL_matchz00_2385 =
																											BgL_newzd2matchzd2_2276;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_11560;

																								BgL_lastzd2matchzd2_11560 =
																									BgL_newzd2matchzd2_2276;
																								BgL_lastzd2matchzd2_2274 =
																									BgL_lastzd2matchzd2_11560;
																								goto
																									BgL_zc3anonymousza33151ze3z83_2275;
																							}
																						break;
																					case ((long) 13):

																						BgL_inputzd2portzd2_2286 =
																							BgL_inputzd2portzd2_2273;
																						BgL_lastzd2matchzd2_2287 =
																							BgL_newzd2matchzd2_2276;
																					BgL_zc3anonymousza33156ze3z83_2288:
																						{	/* Unsafe/http.scm 355 */
																							long BgL_newzd2matchzd2_2289;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2286);
																							BgL_newzd2matchzd2_2289 =
																								((long) 0);
																							{	/* Unsafe/http.scm 355 */
																								int BgL_currentzd2charzd2_2290;

																								BgL_currentzd2charzd2_2290 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_2286);
																								{	/* Unsafe/http.scm 355 */
																									obj_t BgL_aux2380z00_2295;

																									BgL_aux2380z00_2295 =
																										BINT
																										(BgL_currentzd2charzd2_2290);
																									switch ((long)
																										CINT(BgL_aux2380z00_2295))
																										{
																										case ((long) 0):

																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_2286))
																												{	/* Unsafe/http.scm 355 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_2286))
																														{

																															goto
																																BgL_zc3anonymousza33156ze3z83_2288;
																														}
																													else
																														{	/* Unsafe/http.scm 355 */
																															BgL_matchz00_2385
																																=
																																BgL_newzd2matchzd2_2289;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_11569;
																													obj_t
																														BgL_inputzd2portzd2_11568;
																													BgL_inputzd2portzd2_11568
																														=
																														BgL_inputzd2portzd2_2286;
																													BgL_lastzd2matchzd2_11569
																														=
																														BgL_newzd2matchzd2_2289;
																													BgL_lastzd2matchzd2_2274
																														=
																														BgL_lastzd2matchzd2_11569;
																													BgL_inputzd2portzd2_2273
																														=
																														BgL_inputzd2portzd2_11568;
																													goto
																														BgL_zc3anonymousza33151ze3z83_2275;
																												}
																											break;
																										case ((long) 13):

																											{
																												long
																													BgL_lastzd2matchzd2_11570;
																												BgL_lastzd2matchzd2_11570
																													=
																													BgL_newzd2matchzd2_2289;
																												BgL_lastzd2matchzd2_2287
																													=
																													BgL_lastzd2matchzd2_11570;
																												goto
																													BgL_zc3anonymousza33156ze3z83_2288;
																											}
																											break;
																										case ((long) 10):

																											{	/* Unsafe/http.scm 355 */
																												long
																													BgL_newzd2matchzd2_7469;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_2286);
																												BgL_newzd2matchzd2_7469
																													= ((long) 0);
																												BgL_matchz00_2385 =
																													BgL_newzd2matchzd2_7469;
																											} break;
																										default:
																											{
																												long
																													BgL_lastzd2matchzd2_11573;
																												obj_t
																													BgL_inputzd2portzd2_11572;
																												BgL_inputzd2portzd2_11572
																													=
																													BgL_inputzd2portzd2_2286;
																												BgL_lastzd2matchzd2_11573
																													=
																													BgL_newzd2matchzd2_2289;
																												BgL_lastzd2matchzd2_2274
																													=
																													BgL_lastzd2matchzd2_11573;
																												BgL_inputzd2portzd2_2273
																													=
																													BgL_inputzd2portzd2_11572;
																												goto
																													BgL_zc3anonymousza33151ze3z83_2275;
																											}
																										}
																								}
																							}
																						}
																						break;
																					case ((long) 10):

																						{	/* Unsafe/http.scm 355 */
																							long BgL_newzd2matchzd2_7461;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2273);
																							BgL_newzd2matchzd2_7461 =
																								((long) 0);
																							BgL_matchz00_2385 =
																								BgL_newzd2matchzd2_7461;
																						} break;
																					default:
																						{
																							long BgL_lastzd2matchzd2_11577;

																							BgL_lastzd2matchzd2_11577 =
																								BgL_newzd2matchzd2_2276;
																							BgL_lastzd2matchzd2_2274 =
																								BgL_lastzd2matchzd2_11577;
																							goto
																								BgL_zc3anonymousza33151ze3z83_2275;
																						}
																					}
																			}
																		}
																	}
																}
															break;
														case ((long) 13):

															{
																long BgL_lastzd2matchzd2_11581;

																obj_t BgL_inputzd2portzd2_11580;

																BgL_inputzd2portzd2_11580 =
																	BgL_inputzd2portzd2_2256;
																BgL_lastzd2matchzd2_11581 =
																	BgL_newzd2matchzd2_2259;
																BgL_lastzd2matchzd2_2287 =
																	BgL_lastzd2matchzd2_11581;
																BgL_inputzd2portzd2_2286 =
																	BgL_inputzd2portzd2_11580;
																goto BgL_zc3anonymousza33156ze3z83_2288;
															}
															break;
														case ((long) 10):

															{	/* Unsafe/http.scm 355 */
																long BgL_newzd2matchzd2_7451;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_2256);
																BgL_newzd2matchzd2_7451 = ((long) 0);
																BgL_matchz00_2385 = BgL_newzd2matchzd2_7451;
															} break;
														default:
															{
																long BgL_lastzd2matchzd2_11584;

																obj_t BgL_inputzd2portzd2_11583;

																BgL_inputzd2portzd2_11583 =
																	BgL_inputzd2portzd2_2256;
																BgL_lastzd2matchzd2_11584 =
																	BgL_newzd2matchzd2_2259;
																BgL_lastzd2matchzd2_2274 =
																	BgL_lastzd2matchzd2_11584;
																BgL_inputzd2portzd2_2273 =
																	BgL_inputzd2portzd2_11583;
																goto BgL_zc3anonymousza33151ze3z83_2275;
															}
														}
												}
											}
										}
									}
							}
						else
							{	/* Unsafe/http.scm 355 */
								if (((long) (BgL_currentzd2charzd2_2251) == ((long) 10)))
									{	/* Unsafe/http.scm 355 */
										long BgL_newzd2matchzd2_7443;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_2248);
										BgL_newzd2matchzd2_7443 = ((long) 1);
										BgL_matchz00_2385 = BgL_newzd2matchzd2_7443;
									}
								else
									{
										long BgL_lastzd2matchzd2_11592;

										obj_t BgL_inputzd2portzd2_11591;

										BgL_inputzd2portzd2_11591 = BgL_inputzd2portzd2_2248;
										BgL_lastzd2matchzd2_11592 = BgL_lastzd2matchzd2_2249;
										BgL_lastzd2matchzd2_2257 = BgL_lastzd2matchzd2_11592;
										BgL_inputzd2portzd2_2256 = BgL_inputzd2portzd2_11591;
										goto BgL_zc3anonymousza33145ze3z83_2258;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_pz00_46);
					{

						{	/* Unsafe/http.scm 355 */
							obj_t BgL_aux2382z00_2390;

							BgL_aux2382z00_2390 = BINT(BgL_matchz00_2385);
							switch ((long) CINT(BgL_aux2382z00_2390))
								{
								case ((long) 1):

									{	/* Unsafe/http.scm 359 */
										obj_t BgL_cz00_2392;

										{	/* Unsafe/http.scm 355 */
											bool_t BgL_testz00_11595;

											{	/* Unsafe/http.scm 355 */
												long BgL_arg3223z00_2374;

												BgL_arg3223z00_2374 = RGC_BUFFER_LENGTH(BgL_pz00_46);
												BgL_testz00_11595 = (BgL_arg3223z00_2374 == ((long) 0));
											}
											if (BgL_testz00_11595)
												{	/* Unsafe/http.scm 355 */
													BgL_cz00_2392 = BCNST(256);
												}
											else
												{	/* Unsafe/http.scm 355 */
													BgL_cz00_2392 =
														BCHAR(RGC_BUFFER_CHARACTER(BgL_pz00_46));
												}
										}
										if (EOF_OBJECTP(BgL_cz00_2392))
											{	/* Unsafe/http.scm 360 */
												return BgL_cz00_2392;
											}
										else
											{	/* Unsafe/http.scm 362 */
												obj_t BgL_res5155z00_7495;

												{	/* Unsafe/http.scm 362 */
													int BgL_arg3169z00_7489;

													{	/* Unsafe/http.scm 362 */
														int BgL_res5154z00_7491;

														BgL_res5154z00_7491 =
															(int) (RGC_BUFFER_LENGTH(BgL_pz00_46));
														BgL_arg3169z00_7489 = BgL_res5154z00_7491;
													}
													BgL_res5155z00_7495 =
														rgc_buffer_substring(BgL_pz00_46, ((long) 0),
														(long) (BgL_arg3169z00_7489));
												}
												return BgL_res5155z00_7495;
											}
									}
									break;
								case ((long) 0):

									{	/* Unsafe/http.scm 357 */
										obj_t BgL_res5157z00_7503;

										{	/* Unsafe/http.scm 357 */
											int BgL_arg3169z00_7497;

											{	/* Unsafe/http.scm 357 */
												int BgL_res5156z00_7499;

												BgL_res5156z00_7499 =
													(int) (RGC_BUFFER_LENGTH(BgL_pz00_46));
												BgL_arg3169z00_7497 = BgL_res5156z00_7499;
											}
											BgL_res5157z00_7503 =
												rgc_buffer_substring(BgL_pz00_46, ((long) 0),
												(long) (BgL_arg3169z00_7497));
										}
										return BgL_res5157z00_7503;
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
										BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_2385));
								}
						}
					}
				}
			}
		}
	}



/* _http-read-line */
	obj_t BGl__httpzd2readzd2linez00zz__httpz00(obj_t BgL_envz00_9558,
		obj_t BgL_pz00_9559)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 354 */
			{	/* Unsafe/http.scm 355 */
				obj_t BgL_auxz00_11614;

				if (INPUT_PORTP(BgL_pz00_9559))
					{	/* Unsafe/http.scm 355 */
						BgL_auxz00_11614 = BgL_pz00_9559;
					}
				else
					{
						obj_t BgL_auxz00_11617;

						BgL_auxz00_11617 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 13090)), BGl_string5431z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_pz00_9559);
						FAILURE(BgL_auxz00_11617, BFALSE, BFALSE);
					}
				return BGl_httpzd2readzd2linez00zz__httpz00(BgL_auxz00_11614);
			}
		}
	}



/* http-skip-line */
	obj_t BGl_httpzd2skipzd2linez00zz__httpz00(obj_t BgL_pz00_47)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 368 */
			{
				obj_t BgL_inputzd2portzd2_2496;

				long BgL_lastzd2matchzd2_2497;

				obj_t BgL_inputzd2portzd2_2483;

				long BgL_lastzd2matchzd2_2484;

				obj_t BgL_inputzd2portzd2_2466;

				long BgL_lastzd2matchzd2_2467;

				obj_t BgL_inputzd2portzd2_2458;

				long BgL_lastzd2matchzd2_2459;

				RGC_START_MATCH(BgL_pz00_47);
				{	/* Unsafe/http.scm 369 */
					long BgL_matchz00_2595;

					BgL_inputzd2portzd2_2458 = BgL_pz00_47;
					BgL_lastzd2matchzd2_2459 = ((long) 1);
				BgL_zc3anonymousza33234ze3z83_2460:
					{	/* Unsafe/http.scm 369 */
						int BgL_currentzd2charzd2_2461;

						BgL_currentzd2charzd2_2461 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2458);
						if (((long) (BgL_currentzd2charzd2_2461) == ((long) 0)))
							{	/* Unsafe/http.scm 369 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2458))
									{	/* Unsafe/http.scm 369 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_2458))
											{

												goto BgL_zc3anonymousza33234ze3z83_2460;
											}
										else
											{	/* Unsafe/http.scm 369 */
												BgL_matchz00_2595 = BgL_lastzd2matchzd2_2459;
											}
									}
								else
									{	/* Unsafe/http.scm 369 */
										BgL_inputzd2portzd2_2466 = BgL_inputzd2portzd2_2458;
										BgL_lastzd2matchzd2_2467 = BgL_lastzd2matchzd2_2459;
									BgL_zc3anonymousza33239ze3z83_2468:
										{	/* Unsafe/http.scm 369 */
											long BgL_newzd2matchzd2_2469;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2466);
											BgL_newzd2matchzd2_2469 = ((long) 0);
											{	/* Unsafe/http.scm 369 */
												int BgL_currentzd2charzd2_2470;

												BgL_currentzd2charzd2_2470 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2466);
												{	/* Unsafe/http.scm 369 */
													obj_t BgL_aux2384z00_2475;

													BgL_aux2384z00_2475 =
														BINT(BgL_currentzd2charzd2_2470);
													switch ((long) CINT(BgL_aux2384z00_2475))
														{
														case ((long) 0):

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2466))
																{	/* Unsafe/http.scm 369 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2466))
																		{

																			goto BgL_zc3anonymousza33239ze3z83_2468;
																		}
																	else
																		{	/* Unsafe/http.scm 369 */
																			BgL_matchz00_2595 =
																				BgL_newzd2matchzd2_2469;
																		}
																}
															else
																{	/* Unsafe/http.scm 369 */
																	BgL_inputzd2portzd2_2483 =
																		BgL_inputzd2portzd2_2466;
																	BgL_lastzd2matchzd2_2484 =
																		BgL_newzd2matchzd2_2469;
																BgL_zc3anonymousza33245ze3z83_2485:
																	{	/* Unsafe/http.scm 369 */
																		long BgL_newzd2matchzd2_2486;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2483);
																		BgL_newzd2matchzd2_2486 = ((long) 0);
																		{	/* Unsafe/http.scm 369 */
																			int BgL_currentzd2charzd2_2487;

																			BgL_currentzd2charzd2_2487 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2483);
																			{	/* Unsafe/http.scm 369 */
																				obj_t BgL_aux2386z00_2492;

																				BgL_aux2386z00_2492 =
																					BINT(BgL_currentzd2charzd2_2487);
																				switch (
																					(long) CINT(BgL_aux2386z00_2492))
																					{
																					case ((long) 0):

																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_2483))
																							{	/* Unsafe/http.scm 369 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_2483))
																									{

																										goto
																											BgL_zc3anonymousza33245ze3z83_2485;
																									}
																								else
																									{	/* Unsafe/http.scm 369 */
																										BgL_matchz00_2595 =
																											BgL_newzd2matchzd2_2486;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_11645;

																								BgL_lastzd2matchzd2_11645 =
																									BgL_newzd2matchzd2_2486;
																								BgL_lastzd2matchzd2_2484 =
																									BgL_lastzd2matchzd2_11645;
																								goto
																									BgL_zc3anonymousza33245ze3z83_2485;
																							}
																						break;
																					case ((long) 13):

																						BgL_inputzd2portzd2_2496 =
																							BgL_inputzd2portzd2_2483;
																						BgL_lastzd2matchzd2_2497 =
																							BgL_newzd2matchzd2_2486;
																					BgL_zc3anonymousza33250ze3z83_2498:
																						{	/* Unsafe/http.scm 369 */
																							long BgL_newzd2matchzd2_2499;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2496);
																							BgL_newzd2matchzd2_2499 =
																								((long) 0);
																							{	/* Unsafe/http.scm 369 */
																								int BgL_currentzd2charzd2_2500;

																								BgL_currentzd2charzd2_2500 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_inputzd2portzd2_2496);
																								{	/* Unsafe/http.scm 369 */
																									obj_t BgL_aux2388z00_2505;

																									BgL_aux2388z00_2505 =
																										BINT
																										(BgL_currentzd2charzd2_2500);
																									switch ((long)
																										CINT(BgL_aux2388z00_2505))
																										{
																										case ((long) 0):

																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_2496))
																												{	/* Unsafe/http.scm 369 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_2496))
																														{

																															goto
																																BgL_zc3anonymousza33250ze3z83_2498;
																														}
																													else
																														{	/* Unsafe/http.scm 369 */
																															BgL_matchz00_2595
																																=
																																BgL_newzd2matchzd2_2499;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_11654;
																													obj_t
																														BgL_inputzd2portzd2_11653;
																													BgL_inputzd2portzd2_11653
																														=
																														BgL_inputzd2portzd2_2496;
																													BgL_lastzd2matchzd2_11654
																														=
																														BgL_newzd2matchzd2_2499;
																													BgL_lastzd2matchzd2_2484
																														=
																														BgL_lastzd2matchzd2_11654;
																													BgL_inputzd2portzd2_2483
																														=
																														BgL_inputzd2portzd2_11653;
																													goto
																														BgL_zc3anonymousza33245ze3z83_2485;
																												}
																											break;
																										case ((long) 13):

																											{
																												long
																													BgL_lastzd2matchzd2_11655;
																												BgL_lastzd2matchzd2_11655
																													=
																													BgL_newzd2matchzd2_2499;
																												BgL_lastzd2matchzd2_2497
																													=
																													BgL_lastzd2matchzd2_11655;
																												goto
																													BgL_zc3anonymousza33250ze3z83_2498;
																											}
																											break;
																										case ((long) 10):

																											{	/* Unsafe/http.scm 369 */
																												long
																													BgL_newzd2matchzd2_7539;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_2496);
																												BgL_newzd2matchzd2_7539
																													= ((long) 0);
																												BgL_matchz00_2595 =
																													BgL_newzd2matchzd2_7539;
																											} break;
																										default:
																											{
																												long
																													BgL_lastzd2matchzd2_11658;
																												obj_t
																													BgL_inputzd2portzd2_11657;
																												BgL_inputzd2portzd2_11657
																													=
																													BgL_inputzd2portzd2_2496;
																												BgL_lastzd2matchzd2_11658
																													=
																													BgL_newzd2matchzd2_2499;
																												BgL_lastzd2matchzd2_2484
																													=
																													BgL_lastzd2matchzd2_11658;
																												BgL_inputzd2portzd2_2483
																													=
																													BgL_inputzd2portzd2_11657;
																												goto
																													BgL_zc3anonymousza33245ze3z83_2485;
																											}
																										}
																								}
																							}
																						}
																						break;
																					case ((long) 10):

																						{	/* Unsafe/http.scm 369 */
																							long BgL_newzd2matchzd2_7531;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2483);
																							BgL_newzd2matchzd2_7531 =
																								((long) 0);
																							BgL_matchz00_2595 =
																								BgL_newzd2matchzd2_7531;
																						} break;
																					default:
																						{
																							long BgL_lastzd2matchzd2_11662;

																							BgL_lastzd2matchzd2_11662 =
																								BgL_newzd2matchzd2_2486;
																							BgL_lastzd2matchzd2_2484 =
																								BgL_lastzd2matchzd2_11662;
																							goto
																								BgL_zc3anonymousza33245ze3z83_2485;
																						}
																					}
																			}
																		}
																	}
																}
															break;
														case ((long) 13):

															{
																long BgL_lastzd2matchzd2_11666;

																obj_t BgL_inputzd2portzd2_11665;

																BgL_inputzd2portzd2_11665 =
																	BgL_inputzd2portzd2_2466;
																BgL_lastzd2matchzd2_11666 =
																	BgL_newzd2matchzd2_2469;
																BgL_lastzd2matchzd2_2497 =
																	BgL_lastzd2matchzd2_11666;
																BgL_inputzd2portzd2_2496 =
																	BgL_inputzd2portzd2_11665;
																goto BgL_zc3anonymousza33250ze3z83_2498;
															}
															break;
														case ((long) 10):

															{	/* Unsafe/http.scm 369 */
																long BgL_newzd2matchzd2_7521;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_2466);
																BgL_newzd2matchzd2_7521 = ((long) 0);
																BgL_matchz00_2595 = BgL_newzd2matchzd2_7521;
															} break;
														default:
															{
																long BgL_lastzd2matchzd2_11669;

																obj_t BgL_inputzd2portzd2_11668;

																BgL_inputzd2portzd2_11668 =
																	BgL_inputzd2portzd2_2466;
																BgL_lastzd2matchzd2_11669 =
																	BgL_newzd2matchzd2_2469;
																BgL_lastzd2matchzd2_2484 =
																	BgL_lastzd2matchzd2_11669;
																BgL_inputzd2portzd2_2483 =
																	BgL_inputzd2portzd2_11668;
																goto BgL_zc3anonymousza33245ze3z83_2485;
															}
														}
												}
											}
										}
									}
							}
						else
							{	/* Unsafe/http.scm 369 */
								if (((long) (BgL_currentzd2charzd2_2461) == ((long) 10)))
									{	/* Unsafe/http.scm 369 */
										long BgL_newzd2matchzd2_7513;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_2458);
										BgL_newzd2matchzd2_7513 = ((long) 1);
										BgL_matchz00_2595 = BgL_newzd2matchzd2_7513;
									}
								else
									{
										long BgL_lastzd2matchzd2_11677;

										obj_t BgL_inputzd2portzd2_11676;

										BgL_inputzd2portzd2_11676 = BgL_inputzd2portzd2_2458;
										BgL_lastzd2matchzd2_11677 = BgL_lastzd2matchzd2_2459;
										BgL_lastzd2matchzd2_2467 = BgL_lastzd2matchzd2_11677;
										BgL_inputzd2portzd2_2466 = BgL_inputzd2portzd2_11676;
										goto BgL_zc3anonymousza33239ze3z83_2468;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_pz00_47);
					{

						{	/* Unsafe/http.scm 369 */
							obj_t BgL_aux2390z00_2600;

							BgL_aux2390z00_2600 = BINT(BgL_matchz00_2595);
							switch ((long) CINT(BgL_aux2390z00_2600))
								{
								case ((long) 1):

									{	/* Unsafe/http.scm 373 */
										obj_t BgL_cz00_2602;

										{	/* Unsafe/http.scm 369 */
											bool_t BgL_testz00_11680;

											{	/* Unsafe/http.scm 369 */
												long BgL_arg3316z00_2584;

												BgL_arg3316z00_2584 = RGC_BUFFER_LENGTH(BgL_pz00_47);
												BgL_testz00_11680 = (BgL_arg3316z00_2584 == ((long) 0));
											}
											if (BgL_testz00_11680)
												{	/* Unsafe/http.scm 369 */
													BgL_cz00_2602 = BCNST(256);
												}
											else
												{	/* Unsafe/http.scm 369 */
													BgL_cz00_2602 =
														BCHAR(RGC_BUFFER_CHARACTER(BgL_pz00_47));
												}
										}
										if (EOF_OBJECTP(BgL_cz00_2602))
											{	/* Unsafe/http.scm 374 */
												return BgL_cz00_2602;
											}
										else
											{	/* Unsafe/http.scm 374 */
												return BFALSE;
											}
									}
									break;
								case ((long) 0):

									return BFALSE;
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
										BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_2595));
								}
						}
					}
				}
			}
		}
	}



/* http-parse-header */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2headerz00zz__httpz00(obj_t
		BgL_pz00_48, obj_t BgL_poz00_49)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 380 */
			{
				obj_t BgL_inputzd2portzd2_3066;

				obj_t BgL_inputzd2portzd2_3500;

				obj_t BgL_inputzd2portzd2_3702;

				obj_t BgL_inputzd2portzd2_4526;

				obj_t BgL_inputzd2portzd2_4730;

				obj_t BgL_poz00_4731;

				obj_t BgL_headerz00_4732;

				obj_t BgL_hostnamez00_4733;

				obj_t BgL_portz00_4734;

				obj_t BgL_contentzd2lengthzd2_4735;

				obj_t BgL_transferzd2encodingzd2_4736;

				obj_t BgL_authoriza7ationza7_4737;

				obj_t BgL_proxyzd2authoriza7ationz75_4738;

				obj_t BgL_connectionz00_4739;

				BgL_inputzd2portzd2_4730 = BgL_pz00_48;
				BgL_poz00_4731 = BgL_poz00_49;
				BgL_headerz00_4732 = BNIL;
				BgL_hostnamez00_4733 = BFALSE;
				BgL_portz00_4734 = BFALSE;
				BgL_contentzd2lengthzd2_4735 = BGl_elong5449z00zz__httpz00;
				BgL_transferzd2encodingzd2_4736 = BFALSE;
				BgL_authoriza7ationza7_4737 = BFALSE;
				BgL_proxyzd2authoriza7ationz75_4738 = BFALSE;
				BgL_connectionz00_4739 = BFALSE;
				{
					obj_t BgL_inputzd2portzd2_4783;

					long BgL_lastzd2matchzd2_4784;

					obj_t BgL_inputzd2portzd2_4799;

					long BgL_lastzd2matchzd2_4800;

					obj_t BgL_inputzd2portzd2_4814;

					long BgL_lastzd2matchzd2_4815;

					obj_t BgL_inputzd2portzd2_4823;

					long BgL_lastzd2matchzd2_4824;

					obj_t BgL_inputzd2portzd2_4838;

					long BgL_lastzd2matchzd2_4839;

					obj_t BgL_inputzd2portzd2_4860;

					long BgL_lastzd2matchzd2_4861;

					obj_t BgL_inputzd2portzd2_4870;

					long BgL_lastzd2matchzd2_4871;

					obj_t BgL_inputzd2portzd2_4877;

					long BgL_lastzd2matchzd2_4878;

					obj_t BgL_inputzd2portzd2_4885;

					long BgL_lastzd2matchzd2_4886;

					obj_t BgL_inputzd2portzd2_4896;

					long BgL_lastzd2matchzd2_4897;

					obj_t BgL_inputzd2portzd2_4908;

					long BgL_lastzd2matchzd2_4909;

					obj_t BgL_inputzd2portzd2_4923;

					long BgL_lastzd2matchzd2_4924;

					obj_t BgL_inputzd2portzd2_4932;

					long BgL_lastzd2matchzd2_4933;

				BgL_zc3anonymousza34527ze3z83_5034:
					RGC_START_MATCH(BgL_inputzd2portzd2_4730);
					{	/* Unsafe/http.scm 454 */
						long BgL_matchz00_5035;

						BgL_inputzd2portzd2_4923 = BgL_inputzd2portzd2_4730;
						BgL_lastzd2matchzd2_4924 = ((long) 2);
					BgL_zc3anonymousza34442ze3z83_4925:
						{	/* Unsafe/http.scm 454 */
							int BgL_currentzd2charzd2_4926;

							BgL_currentzd2charzd2_4926 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4923);
							switch ((long) (BgL_currentzd2charzd2_4926))
								{
								case ((long) 0):

									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4923))
										{	/* Unsafe/http.scm 454 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_4923))
												{

													goto BgL_zc3anonymousza34442ze3z83_4925;
												}
											else
												{	/* Unsafe/http.scm 454 */
													BgL_matchz00_5035 = BgL_lastzd2matchzd2_4924;
												}
										}
									else
										{	/* Unsafe/http.scm 454 */
											BgL_inputzd2portzd2_4799 = BgL_inputzd2portzd2_4923;
											BgL_lastzd2matchzd2_4800 = BgL_lastzd2matchzd2_4924;
										BgL_zc3anonymousza34363ze3z83_4801:
											{	/* Unsafe/http.scm 454 */
												long BgL_newzd2matchzd2_4802;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_4799);
												BgL_newzd2matchzd2_4802 = ((long) 2);
												{	/* Unsafe/http.scm 454 */
													int BgL_currentzd2charzd2_4803;

													BgL_currentzd2charzd2_4803 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4799);
													if (
														((long) (BgL_currentzd2charzd2_4803) == ((long) 0)))
														{	/* Unsafe/http.scm 454 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4799))
																{	/* Unsafe/http.scm 454 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_4799))
																		{

																			goto BgL_zc3anonymousza34363ze3z83_4801;
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			BgL_matchz00_5035 =
																				BgL_newzd2matchzd2_4802;
																		}
																}
															else
																{	/* Unsafe/http.scm 454 */
																	BgL_inputzd2portzd2_4838 =
																		BgL_inputzd2portzd2_4799;
																	BgL_lastzd2matchzd2_4839 =
																		BgL_newzd2matchzd2_4802;
																BgL_zc3anonymousza34390ze3z83_4840:
																	{	/* Unsafe/http.scm 454 */
																		int BgL_currentzd2charzd2_4841;

																		BgL_currentzd2charzd2_4841 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_4838);
																		if (((long) (BgL_currentzd2charzd2_4841) ==
																				((long) 0)))
																			{	/* Unsafe/http.scm 454 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_4838))
																					{	/* Unsafe/http.scm 454 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_4838))
																							{

																								goto
																									BgL_zc3anonymousza34390ze3z83_4840;
																							}
																						else
																							{	/* Unsafe/http.scm 454 */
																								BgL_matchz00_5035 =
																									BgL_lastzd2matchzd2_4839;
																							}
																					}
																				else
																					{

																						goto
																							BgL_zc3anonymousza34390ze3z83_4840;
																					}
																			}
																		else
																			{	/* Unsafe/http.scm 454 */
																				if (
																					((long) (BgL_currentzd2charzd2_4841)
																						== ((long) 58)))
																					{	/* Unsafe/http.scm 454 */
																						long BgL_newzd2matchzd2_8421;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_4838);
																						BgL_newzd2matchzd2_8421 =
																							((long) 0);
																						BgL_matchz00_5035 =
																							BgL_newzd2matchzd2_8421;
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_4841) ==
																								((long) 32)))
																							{	/* Unsafe/http.scm 454 */
																								BgL_inputzd2portzd2_4877 =
																									BgL_inputzd2portzd2_4838;
																								BgL_lastzd2matchzd2_4878 =
																									BgL_lastzd2matchzd2_4839;
																							BgL_zc3anonymousza34414ze3z83_4879:
																								{	/* Unsafe/http.scm 454 */
																									int
																										BgL_currentzd2charzd2_4880;
																									BgL_currentzd2charzd2_4880 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_4877);
																									if (((long)
																											(BgL_currentzd2charzd2_4880)
																											== ((long) 0)))
																										{	/* Unsafe/http.scm 454 */
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_4877))
																												{	/* Unsafe/http.scm 454 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_4877))
																														{

																															goto
																																BgL_zc3anonymousza34414ze3z83_4879;
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_matchz00_5035
																																=
																																BgL_lastzd2matchzd2_4878;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_11730;
																													obj_t
																														BgL_inputzd2portzd2_11729;
																													BgL_inputzd2portzd2_11729
																														=
																														BgL_inputzd2portzd2_4877;
																													BgL_lastzd2matchzd2_11730
																														=
																														BgL_lastzd2matchzd2_4878;
																													BgL_lastzd2matchzd2_4839
																														=
																														BgL_lastzd2matchzd2_11730;
																													BgL_inputzd2portzd2_4838
																														=
																														BgL_inputzd2portzd2_11729;
																													goto
																														BgL_zc3anonymousza34390ze3z83_4840;
																												}
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4880)
																													== ((long) 58)))
																												{	/* Unsafe/http.scm 454 */
																													BgL_matchz00_5035 =
																														BgL_lastzd2matchzd2_4878;
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_11735;
																													obj_t
																														BgL_inputzd2portzd2_11734;
																													BgL_inputzd2portzd2_11734
																														=
																														BgL_inputzd2portzd2_4877;
																													BgL_lastzd2matchzd2_11735
																														=
																														BgL_lastzd2matchzd2_4878;
																													BgL_lastzd2matchzd2_4839
																														=
																														BgL_lastzd2matchzd2_11735;
																													BgL_inputzd2portzd2_4838
																														=
																														BgL_inputzd2portzd2_11734;
																													goto
																														BgL_zc3anonymousza34390ze3z83_4840;
																												}
																										}
																								}
																							}
																						else
																							{	/* Unsafe/http.scm 454 */
																								bool_t BgL_testz00_11736;

																								{	/* Unsafe/http.scm 454 */
																									bool_t BgL_testz00_11737;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_4841)
																											== ((long) 10)))
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11737 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11737 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_4841)
																												== ((long) 9));
																										}
																									if (BgL_testz00_11737)
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11736 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4841)
																													== ((long) 13)))
																												{	/* Unsafe/http.scm 454 */
																													BgL_testz00_11736 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/http.scm 454 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_4841)
																															== ((long) 32)))
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11736
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11736
																																=
																																((long)
																																(BgL_currentzd2charzd2_4841)
																																== ((long) 58));
																								}}}}
																								if (BgL_testz00_11736)
																									{	/* Unsafe/http.scm 454 */
																										BgL_matchz00_5035 =
																											BgL_lastzd2matchzd2_4839;
																									}
																								else
																									{

																										goto
																											BgL_zc3anonymousza34390ze3z83_4840;
																									}
																							}
																					}
																			}
																	}
																}
														}
													else
														{	/* Unsafe/http.scm 454 */
															if (
																((long) (BgL_currentzd2charzd2_4803) ==
																	((long) 58)))
																{	/* Unsafe/http.scm 454 */
																	long BgL_newzd2matchzd2_8358;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_4799);
																	BgL_newzd2matchzd2_8358 = ((long) 0);
																	BgL_matchz00_5035 = BgL_newzd2matchzd2_8358;
																}
															else
																{	/* Unsafe/http.scm 454 */
																	if (
																		((long) (BgL_currentzd2charzd2_4803) ==
																			((long) 32)))
																		{
																			long BgL_lastzd2matchzd2_11759;

																			obj_t BgL_inputzd2portzd2_11758;

																			BgL_inputzd2portzd2_11758 =
																				BgL_inputzd2portzd2_4799;
																			BgL_lastzd2matchzd2_11759 =
																				BgL_newzd2matchzd2_4802;
																			BgL_lastzd2matchzd2_4878 =
																				BgL_lastzd2matchzd2_11759;
																			BgL_inputzd2portzd2_4877 =
																				BgL_inputzd2portzd2_11758;
																			goto BgL_zc3anonymousza34414ze3z83_4879;
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			bool_t BgL_testz00_11760;

																			{	/* Unsafe/http.scm 454 */
																				bool_t BgL_testz00_11761;

																				if (
																					((long) (BgL_currentzd2charzd2_4803)
																						== ((long) 10)))
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11761 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11761 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_4803) ==
																							((long) 9));
																					}
																				if (BgL_testz00_11761)
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11760 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_4803) ==
																								((long) 13)))
																							{	/* Unsafe/http.scm 454 */
																								BgL_testz00_11760 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 454 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_4803)
																										== ((long) 32)))
																									{	/* Unsafe/http.scm 454 */
																										BgL_testz00_11760 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/http.scm 454 */
																										BgL_testz00_11760 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_4803)
																											== ((long) 58));
																			}}}}
																			if (BgL_testz00_11760)
																				{	/* Unsafe/http.scm 454 */
																					BgL_matchz00_5035 =
																						BgL_newzd2matchzd2_4802;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_11776;

																					obj_t BgL_inputzd2portzd2_11775;

																					BgL_inputzd2portzd2_11775 =
																						BgL_inputzd2portzd2_4799;
																					BgL_lastzd2matchzd2_11776 =
																						BgL_newzd2matchzd2_4802;
																					BgL_lastzd2matchzd2_4839 =
																						BgL_lastzd2matchzd2_11776;
																					BgL_inputzd2portzd2_4838 =
																						BgL_inputzd2portzd2_11775;
																					goto
																						BgL_zc3anonymousza34390ze3z83_4840;
																				}
																		}
																}
														}
												}
											}
										}
									break;
								case ((long) 58):

									{	/* Unsafe/http.scm 454 */
										long BgL_newzd2matchzd2_8547;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4923);
										BgL_newzd2matchzd2_8547 = ((long) 2);
										BgL_matchz00_5035 = BgL_newzd2matchzd2_8547;
									} break;
								case ((long) 32):

									BgL_inputzd2portzd2_4932 = BgL_inputzd2portzd2_4923;
									BgL_lastzd2matchzd2_4933 = BgL_lastzd2matchzd2_4924;
								BgL_zc3anonymousza34446ze3z83_4934:
									{	/* Unsafe/http.scm 454 */
										long BgL_newzd2matchzd2_4935;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4932);
										BgL_newzd2matchzd2_4935 = ((long) 2);
										{	/* Unsafe/http.scm 454 */
											int BgL_currentzd2charzd2_4936;

											BgL_currentzd2charzd2_4936 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4932);
											if (((long) (BgL_currentzd2charzd2_4936) == ((long) 0)))
												{	/* Unsafe/http.scm 454 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4932))
														{	/* Unsafe/http.scm 454 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_4932))
																{

																	goto BgL_zc3anonymousza34446ze3z83_4934;
																}
															else
																{	/* Unsafe/http.scm 454 */
																	BgL_matchz00_5035 = BgL_newzd2matchzd2_4935;
																}
														}
													else
														{
															long BgL_lastzd2matchzd2_11788;

															obj_t BgL_inputzd2portzd2_11787;

															BgL_inputzd2portzd2_11787 =
																BgL_inputzd2portzd2_4932;
															BgL_lastzd2matchzd2_11788 =
																BgL_newzd2matchzd2_4935;
															BgL_lastzd2matchzd2_4839 =
																BgL_lastzd2matchzd2_11788;
															BgL_inputzd2portzd2_4838 =
																BgL_inputzd2portzd2_11787;
															goto BgL_zc3anonymousza34390ze3z83_4840;
														}
												}
											else
												{	/* Unsafe/http.scm 454 */
													if (
														((long) (BgL_currentzd2charzd2_4936) ==
															((long) 13)))
														{	/* Unsafe/http.scm 454 */
															BgL_inputzd2portzd2_4823 =
																BgL_inputzd2portzd2_4932;
															BgL_lastzd2matchzd2_4824 =
																BgL_newzd2matchzd2_4935;
														BgL_zc3anonymousza34378ze3z83_4825:
															{	/* Unsafe/http.scm 454 */
																int BgL_currentzd2charzd2_4826;

																BgL_currentzd2charzd2_4826 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4823);
																if (
																	((long) (BgL_currentzd2charzd2_4826) ==
																		((long) 0)))
																	{	/* Unsafe/http.scm 454 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_4823))
																			{	/* Unsafe/http.scm 454 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_4823))
																					{

																						goto
																							BgL_zc3anonymousza34378ze3z83_4825;
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						BgL_matchz00_5035 =
																							BgL_lastzd2matchzd2_4824;
																					}
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_11801;

																				obj_t BgL_inputzd2portzd2_11800;

																				BgL_inputzd2portzd2_11800 =
																					BgL_inputzd2portzd2_4823;
																				BgL_lastzd2matchzd2_11801 =
																					BgL_lastzd2matchzd2_4824;
																				BgL_lastzd2matchzd2_4839 =
																					BgL_lastzd2matchzd2_11801;
																				BgL_inputzd2portzd2_4838 =
																					BgL_inputzd2portzd2_11800;
																				goto BgL_zc3anonymousza34390ze3z83_4840;
																			}
																	}
																else
																	{	/* Unsafe/http.scm 454 */
																		if (
																			((long) (BgL_currentzd2charzd2_4826) ==
																				((long) 58)))
																			{	/* Unsafe/http.scm 454 */
																				long BgL_newzd2matchzd2_8392;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_4823);
																				BgL_newzd2matchzd2_8392 = ((long) 0);
																				BgL_matchz00_5035 =
																					BgL_newzd2matchzd2_8392;
																			}
																		else
																			{	/* Unsafe/http.scm 454 */
																				if (
																					((long) (BgL_currentzd2charzd2_4826)
																						== ((long) 32)))
																					{
																						long BgL_lastzd2matchzd2_11810;

																						obj_t BgL_inputzd2portzd2_11809;

																						BgL_inputzd2portzd2_11809 =
																							BgL_inputzd2portzd2_4823;
																						BgL_lastzd2matchzd2_11810 =
																							BgL_lastzd2matchzd2_4824;
																						BgL_lastzd2matchzd2_4878 =
																							BgL_lastzd2matchzd2_11810;
																						BgL_inputzd2portzd2_4877 =
																							BgL_inputzd2portzd2_11809;
																						goto
																							BgL_zc3anonymousza34414ze3z83_4879;
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_4826) ==
																								((long) 10)))
																							{	/* Unsafe/http.scm 454 */
																								long BgL_newzd2matchzd2_8400;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_4823);
																								BgL_newzd2matchzd2_8400 =
																									((long) 1);
																								BgL_matchz00_5035 =
																									BgL_newzd2matchzd2_8400;
																							}
																						else
																							{	/* Unsafe/http.scm 454 */
																								bool_t BgL_testz00_11815;

																								{	/* Unsafe/http.scm 454 */
																									bool_t BgL_testz00_11816;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_4826)
																											== ((long) 10)))
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11816 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11816 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_4826)
																												== ((long) 9));
																										}
																									if (BgL_testz00_11816)
																										{	/* Unsafe/http.scm 454 */
																											BgL_testz00_11815 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4826)
																													== ((long) 13)))
																												{	/* Unsafe/http.scm 454 */
																													BgL_testz00_11815 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/http.scm 454 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_4826)
																															== ((long) 32)))
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11815
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11815
																																=
																																((long)
																																(BgL_currentzd2charzd2_4826)
																																== ((long) 58));
																								}}}}
																								if (BgL_testz00_11815)
																									{	/* Unsafe/http.scm 454 */
																										BgL_matchz00_5035 =
																											BgL_lastzd2matchzd2_4824;
																									}
																								else
																									{
																										long
																											BgL_lastzd2matchzd2_11831;
																										obj_t
																											BgL_inputzd2portzd2_11830;
																										BgL_inputzd2portzd2_11830 =
																											BgL_inputzd2portzd2_4823;
																										BgL_lastzd2matchzd2_11831 =
																											BgL_lastzd2matchzd2_4824;
																										BgL_lastzd2matchzd2_4839 =
																											BgL_lastzd2matchzd2_11831;
																										BgL_inputzd2portzd2_4838 =
																											BgL_inputzd2portzd2_11830;
																										goto
																											BgL_zc3anonymousza34390ze3z83_4840;
																									}
																							}
																					}
																			}
																	}
															}
														}
													else
														{	/* Unsafe/http.scm 454 */
															if (
																((long) (BgL_currentzd2charzd2_4936) ==
																	((long) 10)))
																{	/* Unsafe/http.scm 454 */
																	BgL_inputzd2portzd2_4908 =
																		BgL_inputzd2portzd2_4932;
																	BgL_lastzd2matchzd2_4909 =
																		BgL_newzd2matchzd2_4935;
																BgL_zc3anonymousza34431ze3z83_4910:
																	{	/* Unsafe/http.scm 454 */
																		long BgL_newzd2matchzd2_4911;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_4908);
																		BgL_newzd2matchzd2_4911 = ((long) 1);
																		{	/* Unsafe/http.scm 454 */
																			int BgL_currentzd2charzd2_4912;

																			BgL_currentzd2charzd2_4912 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_4908);
																			if (((long) (BgL_currentzd2charzd2_4912)
																					== ((long) 0)))
																				{	/* Unsafe/http.scm 454 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_4908))
																						{	/* Unsafe/http.scm 454 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_4908))
																								{

																									goto
																										BgL_zc3anonymousza34431ze3z83_4910;
																								}
																							else
																								{	/* Unsafe/http.scm 454 */
																									BgL_matchz00_5035 =
																										BgL_newzd2matchzd2_4911;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_11845;

																							obj_t BgL_inputzd2portzd2_11844;

																							BgL_inputzd2portzd2_11844 =
																								BgL_inputzd2portzd2_4908;
																							BgL_lastzd2matchzd2_11845 =
																								BgL_newzd2matchzd2_4911;
																							BgL_lastzd2matchzd2_4839 =
																								BgL_lastzd2matchzd2_11845;
																							BgL_inputzd2portzd2_4838 =
																								BgL_inputzd2portzd2_11844;
																							goto
																								BgL_zc3anonymousza34390ze3z83_4840;
																						}
																				}
																			else
																				{	/* Unsafe/http.scm 454 */
																					if (
																						((long) (BgL_currentzd2charzd2_4912)
																							== ((long) 58)))
																						{	/* Unsafe/http.scm 454 */
																							long BgL_newzd2matchzd2_8528;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_4908);
																							BgL_newzd2matchzd2_8528 =
																								((long) 0);
																							BgL_matchz00_5035 =
																								BgL_newzd2matchzd2_8528;
																						}
																					else
																						{	/* Unsafe/http.scm 454 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_4912)
																									== ((long) 32)))
																								{
																									long
																										BgL_lastzd2matchzd2_11854;
																									obj_t
																										BgL_inputzd2portzd2_11853;
																									BgL_inputzd2portzd2_11853 =
																										BgL_inputzd2portzd2_4908;
																									BgL_lastzd2matchzd2_11854 =
																										BgL_newzd2matchzd2_4911;
																									BgL_lastzd2matchzd2_4878 =
																										BgL_lastzd2matchzd2_11854;
																									BgL_inputzd2portzd2_4877 =
																										BgL_inputzd2portzd2_11853;
																									goto
																										BgL_zc3anonymousza34414ze3z83_4879;
																								}
																							else
																								{	/* Unsafe/http.scm 454 */
																									bool_t BgL_testz00_11855;

																									{	/* Unsafe/http.scm 454 */
																										bool_t BgL_testz00_11856;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_4912)
																												== ((long) 10)))
																											{	/* Unsafe/http.scm 454 */
																												BgL_testz00_11856 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 454 */
																												BgL_testz00_11856 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_4912)
																													== ((long) 9));
																											}
																										if (BgL_testz00_11856)
																											{	/* Unsafe/http.scm 454 */
																												BgL_testz00_11855 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 454 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_4912)
																														== ((long) 13)))
																													{	/* Unsafe/http.scm 454 */
																														BgL_testz00_11855 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/http.scm 454 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_4912)
																																== ((long) 32)))
																															{	/* Unsafe/http.scm 454 */
																																BgL_testz00_11855
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/http.scm 454 */
																																BgL_testz00_11855
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_4912)
																																	==
																																	((long) 58));
																									}}}}
																									if (BgL_testz00_11855)
																										{	/* Unsafe/http.scm 454 */
																											BgL_matchz00_5035 =
																												BgL_newzd2matchzd2_4911;
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_11871;
																											obj_t
																												BgL_inputzd2portzd2_11870;
																											BgL_inputzd2portzd2_11870
																												=
																												BgL_inputzd2portzd2_4908;
																											BgL_lastzd2matchzd2_11871
																												=
																												BgL_newzd2matchzd2_4911;
																											BgL_lastzd2matchzd2_4839 =
																												BgL_lastzd2matchzd2_11871;
																											BgL_inputzd2portzd2_4838 =
																												BgL_inputzd2portzd2_11870;
																											goto
																												BgL_zc3anonymousza34390ze3z83_4840;
																										}
																								}
																						}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/http.scm 454 */
																	bool_t BgL_testz00_11872;

																	if (
																		((long) (BgL_currentzd2charzd2_4936) ==
																			((long) 9)))
																		{	/* Unsafe/http.scm 454 */
																			BgL_testz00_11872 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			BgL_testz00_11872 =
																				(
																				(long) (BgL_currentzd2charzd2_4936) ==
																				((long) 32));
																		}
																	if (BgL_testz00_11872)
																		{	/* Unsafe/http.scm 454 */
																			BgL_inputzd2portzd2_4814 =
																				BgL_inputzd2portzd2_4932;
																			BgL_lastzd2matchzd2_4815 =
																				BgL_newzd2matchzd2_4935;
																		BgL_zc3anonymousza34374ze3z83_4816:
																			{	/* Unsafe/http.scm 454 */
																				int BgL_currentzd2charzd2_4817;

																				BgL_currentzd2charzd2_4817 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_4814);
																				switch ((long)
																					(BgL_currentzd2charzd2_4817))
																					{
																					case ((long) 0):

																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_4814))
																							{	/* Unsafe/http.scm 454 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_4814))
																									{

																										goto
																											BgL_zc3anonymousza34374ze3z83_4816;
																									}
																								else
																									{	/* Unsafe/http.scm 454 */
																										BgL_matchz00_5035 =
																											BgL_lastzd2matchzd2_4815;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_11884;

																								obj_t BgL_inputzd2portzd2_11883;

																								BgL_inputzd2portzd2_11883 =
																									BgL_inputzd2portzd2_4814;
																								BgL_lastzd2matchzd2_11884 =
																									BgL_lastzd2matchzd2_4815;
																								BgL_lastzd2matchzd2_4839 =
																									BgL_lastzd2matchzd2_11884;
																								BgL_inputzd2portzd2_4838 =
																									BgL_inputzd2portzd2_11883;
																								goto
																									BgL_zc3anonymousza34390ze3z83_4840;
																							}
																						break;
																					case ((long) 58):

																						{	/* Unsafe/http.scm 454 */
																							long BgL_newzd2matchzd2_8377;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_4814);
																							BgL_newzd2matchzd2_8377 =
																								((long) 0);
																							BgL_matchz00_5035 =
																								BgL_newzd2matchzd2_8377;
																						} break;
																					case ((long) 32):

																						BgL_inputzd2portzd2_4783 =
																							BgL_inputzd2portzd2_4814;
																						BgL_lastzd2matchzd2_4784 =
																							BgL_lastzd2matchzd2_4815;
																					BgL_zc3anonymousza34350ze3z83_4785:
																						{	/* Unsafe/http.scm 454 */
																							int BgL_currentzd2charzd2_4786;

																							BgL_currentzd2charzd2_4786 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_4783);
																							if (((long)
																									(BgL_currentzd2charzd2_4786)
																									== ((long) 0)))
																								{	/* Unsafe/http.scm 454 */
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_4783))
																										{	/* Unsafe/http.scm 454 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_4783))
																												{

																													goto
																														BgL_zc3anonymousza34350ze3z83_4785;
																												}
																											else
																												{	/* Unsafe/http.scm 454 */
																													BgL_matchz00_5035 =
																														BgL_lastzd2matchzd2_4784;
																												}
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_11895;
																											obj_t
																												BgL_inputzd2portzd2_11894;
																											BgL_inputzd2portzd2_11894
																												=
																												BgL_inputzd2portzd2_4783;
																											BgL_lastzd2matchzd2_11895
																												=
																												BgL_lastzd2matchzd2_4784;
																											BgL_lastzd2matchzd2_4839 =
																												BgL_lastzd2matchzd2_11895;
																											BgL_inputzd2portzd2_4838 =
																												BgL_inputzd2portzd2_11894;
																											goto
																												BgL_zc3anonymousza34390ze3z83_4840;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 454 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_4786)
																											== ((long) 13)))
																										{
																											long
																												BgL_lastzd2matchzd2_11900;
																											obj_t
																												BgL_inputzd2portzd2_11899;
																											BgL_inputzd2portzd2_11899
																												=
																												BgL_inputzd2portzd2_4783;
																											BgL_lastzd2matchzd2_11900
																												=
																												BgL_lastzd2matchzd2_4784;
																											BgL_lastzd2matchzd2_4824 =
																												BgL_lastzd2matchzd2_11900;
																											BgL_inputzd2portzd2_4823 =
																												BgL_inputzd2portzd2_11899;
																											goto
																												BgL_zc3anonymousza34378ze3z83_4825;
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4786)
																													== ((long) 10)))
																												{
																													long
																														BgL_lastzd2matchzd2_11905;
																													obj_t
																														BgL_inputzd2portzd2_11904;
																													BgL_inputzd2portzd2_11904
																														=
																														BgL_inputzd2portzd2_4783;
																													BgL_lastzd2matchzd2_11905
																														=
																														BgL_lastzd2matchzd2_4784;
																													BgL_lastzd2matchzd2_4909
																														=
																														BgL_lastzd2matchzd2_11905;
																													BgL_inputzd2portzd2_4908
																														=
																														BgL_inputzd2portzd2_11904;
																													goto
																														BgL_zc3anonymousza34431ze3z83_4910;
																												}
																											else
																												{	/* Unsafe/http.scm 454 */
																													bool_t
																														BgL_testz00_11906;
																													if (((long)
																															(BgL_currentzd2charzd2_4786)
																															== ((long) 9)))
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11906
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11906
																																=
																																((long)
																																(BgL_currentzd2charzd2_4786)
																																== ((long) 32));
																														}
																													if (BgL_testz00_11906)
																														{
																															long
																																BgL_lastzd2matchzd2_11913;
																															obj_t
																																BgL_inputzd2portzd2_11912;
																															BgL_inputzd2portzd2_11912
																																=
																																BgL_inputzd2portzd2_4783;
																															BgL_lastzd2matchzd2_11913
																																=
																																BgL_lastzd2matchzd2_4784;
																															BgL_lastzd2matchzd2_4815
																																=
																																BgL_lastzd2matchzd2_11913;
																															BgL_inputzd2portzd2_4814
																																=
																																BgL_inputzd2portzd2_11912;
																															goto
																																BgL_zc3anonymousza34374ze3z83_4816;
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															bool_t
																																BgL_testz00_11914;
																															{	/* Unsafe/http.scm 454 */
																																bool_t
																																	BgL_testz00_11915;
																																if (((long)
																																		(BgL_currentzd2charzd2_4786)
																																		==
																																		((long)
																																			10)))
																																	{	/* Unsafe/http.scm 454 */
																																		BgL_testz00_11915
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/http.scm 454 */
																																		BgL_testz00_11915
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_4786)
																																			==
																																			((long)
																																				9));
																																	}
																																if (BgL_testz00_11915)
																																	{	/* Unsafe/http.scm 454 */
																																		BgL_testz00_11914
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/http.scm 454 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_4786)
																																				==
																																				((long)
																																					13)))
																																			{	/* Unsafe/http.scm 454 */
																																				BgL_testz00_11914
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/http.scm 454 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_4786) == ((long) 32)))
																																					{	/* Unsafe/http.scm 454 */
																																						BgL_testz00_11914
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/http.scm 454 */
																																						BgL_testz00_11914
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_4786)
																																							==
																																							((long) 58));
																															}}}}
																															if (BgL_testz00_11914)
																																{	/* Unsafe/http.scm 454 */
																																	BgL_matchz00_5035
																																		=
																																		BgL_lastzd2matchzd2_4784;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_11930;
																																	obj_t
																																		BgL_inputzd2portzd2_11929;
																																	BgL_inputzd2portzd2_11929
																																		=
																																		BgL_inputzd2portzd2_4783;
																																	BgL_lastzd2matchzd2_11930
																																		=
																																		BgL_lastzd2matchzd2_4784;
																																	BgL_lastzd2matchzd2_4839
																																		=
																																		BgL_lastzd2matchzd2_11930;
																																	BgL_inputzd2portzd2_4838
																																		=
																																		BgL_inputzd2portzd2_11929;
																																	goto
																																		BgL_zc3anonymousza34390ze3z83_4840;
																																}
																														}
																												}
																										}
																								}
																						}
																						break;
																					case ((long) 13):

																						BgL_inputzd2portzd2_4870 =
																							BgL_inputzd2portzd2_4814;
																						BgL_lastzd2matchzd2_4871 =
																							BgL_lastzd2matchzd2_4815;
																					BgL_zc3anonymousza34410ze3z83_4872:
																						{	/* Unsafe/http.scm 454 */
																							int BgL_currentzd2charzd2_4873;

																							BgL_currentzd2charzd2_4873 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_4870);
																							if (((long)
																									(BgL_currentzd2charzd2_4873)
																									== ((long) 0)))
																								{	/* Unsafe/http.scm 454 */
																									bool_t BgL_testz00_11935;

																									{	/* Unsafe/http.scm 454 */
																										bool_t BgL_res5200z00_8466;

																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_4870))
																											{	/* Unsafe/http.scm 454 */
																												BgL_res5200z00_8466 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_4870);
																											}
																										else
																											{	/* Unsafe/http.scm 454 */
																												BgL_res5200z00_8466 =
																													((bool_t) 0);
																											}
																										BgL_testz00_11935 =
																											BgL_res5200z00_8466;
																									}
																									if (BgL_testz00_11935)
																										{

																											goto
																												BgL_zc3anonymousza34410ze3z83_4872;
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											BgL_matchz00_5035 =
																												BgL_lastzd2matchzd2_4871;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 454 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_4873)
																											== ((long) 10)))
																										{	/* Unsafe/http.scm 454 */
																											long
																												BgL_newzd2matchzd2_8471;
																											RGC_STOP_MATCH
																												(BgL_inputzd2portzd2_4870);
																											BgL_newzd2matchzd2_8471 =
																												((long) 1);
																											BgL_matchz00_5035 =
																												BgL_newzd2matchzd2_8471;
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											BgL_matchz00_5035 =
																												BgL_lastzd2matchzd2_4871;
																										}
																								}
																						}
																						break;
																					case ((long) 10):

																						{	/* Unsafe/http.scm 454 */
																							long BgL_newzd2matchzd2_8381;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_4814);
																							BgL_newzd2matchzd2_8381 =
																								((long) 1);
																							BgL_matchz00_5035 =
																								BgL_newzd2matchzd2_8381;
																						} break;
																					case ((long) 9):

																						BgL_inputzd2portzd2_4860 =
																							BgL_inputzd2portzd2_4814;
																						BgL_lastzd2matchzd2_4861 =
																							BgL_lastzd2matchzd2_4815;
																					BgL_zc3anonymousza34403ze3z83_4862:
																						{	/* Unsafe/http.scm 454 */
																							int BgL_currentzd2charzd2_4863;

																							BgL_currentzd2charzd2_4863 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_4860);
																							if (((long)
																									(BgL_currentzd2charzd2_4863)
																									== ((long) 0)))
																								{	/* Unsafe/http.scm 454 */
																									bool_t BgL_testz00_11948;

																									{	/* Unsafe/http.scm 454 */
																										bool_t BgL_res5199z00_8446;

																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_4860))
																											{	/* Unsafe/http.scm 454 */
																												BgL_res5199z00_8446 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_4860);
																											}
																										else
																											{	/* Unsafe/http.scm 454 */
																												BgL_res5199z00_8446 =
																													((bool_t) 0);
																											}
																										BgL_testz00_11948 =
																											BgL_res5199z00_8446;
																									}
																									if (BgL_testz00_11948)
																										{

																											goto
																												BgL_zc3anonymousza34403ze3z83_4862;
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											BgL_matchz00_5035 =
																												BgL_lastzd2matchzd2_4861;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 454 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_4863)
																											== ((long) 13)))
																										{
																											long
																												BgL_lastzd2matchzd2_11956;
																											obj_t
																												BgL_inputzd2portzd2_11955;
																											BgL_inputzd2portzd2_11955
																												=
																												BgL_inputzd2portzd2_4860;
																											BgL_lastzd2matchzd2_11956
																												=
																												BgL_lastzd2matchzd2_4861;
																											BgL_lastzd2matchzd2_4871 =
																												BgL_lastzd2matchzd2_11956;
																											BgL_inputzd2portzd2_4870 =
																												BgL_inputzd2portzd2_11955;
																											goto
																												BgL_zc3anonymousza34410ze3z83_4872;
																										}
																									else
																										{	/* Unsafe/http.scm 454 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4863)
																													== ((long) 10)))
																												{	/* Unsafe/http.scm 454 */
																													long
																														BgL_newzd2matchzd2_8453;
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_4860);
																													BgL_newzd2matchzd2_8453
																														= ((long) 1);
																													BgL_matchz00_5035 =
																														BgL_newzd2matchzd2_8453;
																												}
																											else
																												{	/* Unsafe/http.scm 454 */
																													bool_t
																														BgL_testz00_11961;
																													if (((long)
																															(BgL_currentzd2charzd2_4863)
																															== ((long) 9)))
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11961
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_testz00_11961
																																=
																																((long)
																																(BgL_currentzd2charzd2_4863)
																																== ((long) 32));
																														}
																													if (BgL_testz00_11961)
																														{

																															goto
																																BgL_zc3anonymousza34403ze3z83_4862;
																														}
																													else
																														{	/* Unsafe/http.scm 454 */
																															BgL_matchz00_5035
																																=
																																BgL_lastzd2matchzd2_4861;
																														}
																												}
																										}
																								}
																						}
																						break;
																					default:
																						{
																							long BgL_lastzd2matchzd2_11968;

																							obj_t BgL_inputzd2portzd2_11967;

																							BgL_inputzd2portzd2_11967 =
																								BgL_inputzd2portzd2_4814;
																							BgL_lastzd2matchzd2_11968 =
																								BgL_lastzd2matchzd2_4815;
																							BgL_lastzd2matchzd2_4839 =
																								BgL_lastzd2matchzd2_11968;
																							BgL_inputzd2portzd2_4838 =
																								BgL_inputzd2portzd2_11967;
																							goto
																								BgL_zc3anonymousza34390ze3z83_4840;
																						}
																					}
																			}
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			bool_t BgL_testz00_11971;

																			{	/* Unsafe/http.scm 454 */
																				bool_t BgL_testz00_11972;

																				if (
																					((long) (BgL_currentzd2charzd2_4936)
																						== ((long) 10)))
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11972 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11972 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_4936) ==
																							((long) 9));
																					}
																				if (BgL_testz00_11972)
																					{	/* Unsafe/http.scm 454 */
																						BgL_testz00_11971 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 454 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_4936) ==
																								((long) 13)))
																							{	/* Unsafe/http.scm 454 */
																								BgL_testz00_11971 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 454 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_4936)
																										== ((long) 32)))
																									{	/* Unsafe/http.scm 454 */
																										BgL_testz00_11971 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/http.scm 454 */
																										BgL_testz00_11971 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_4936)
																											== ((long) 58));
																			}}}}
																			if (BgL_testz00_11971)
																				{	/* Unsafe/http.scm 454 */
																					BgL_matchz00_5035 =
																						BgL_newzd2matchzd2_4935;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_11987;

																					obj_t BgL_inputzd2portzd2_11986;

																					BgL_inputzd2portzd2_11986 =
																						BgL_inputzd2portzd2_4932;
																					BgL_lastzd2matchzd2_11987 =
																						BgL_newzd2matchzd2_4935;
																					BgL_lastzd2matchzd2_4839 =
																						BgL_lastzd2matchzd2_11987;
																					BgL_inputzd2portzd2_4838 =
																						BgL_inputzd2portzd2_11986;
																					goto
																						BgL_zc3anonymousza34390ze3z83_4840;
																				}
																		}
																}
														}
												}
										}
									}
									break;
								case ((long) 13):

									BgL_inputzd2portzd2_4896 = BgL_inputzd2portzd2_4923;
									BgL_lastzd2matchzd2_4897 = BgL_lastzd2matchzd2_4924;
								BgL_zc3anonymousza34426ze3z83_4898:
									{	/* Unsafe/http.scm 454 */
										long BgL_newzd2matchzd2_4899;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4896);
										BgL_newzd2matchzd2_4899 = ((long) 2);
										{	/* Unsafe/http.scm 454 */
											int BgL_currentzd2charzd2_4900;

											BgL_currentzd2charzd2_4900 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4896);
											if (((long) (BgL_currentzd2charzd2_4900) == ((long) 0)))
												{	/* Unsafe/http.scm 454 */
													bool_t BgL_testz00_11993;

													{	/* Unsafe/http.scm 454 */
														bool_t BgL_res5202z00_8509;

														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4896))
															{	/* Unsafe/http.scm 454 */
																BgL_res5202z00_8509 =
																	rgc_fill_buffer(BgL_inputzd2portzd2_4896);
															}
														else
															{	/* Unsafe/http.scm 454 */
																BgL_res5202z00_8509 = ((bool_t) 0);
															}
														BgL_testz00_11993 = BgL_res5202z00_8509;
													}
													if (BgL_testz00_11993)
														{

															goto BgL_zc3anonymousza34426ze3z83_4898;
														}
													else
														{	/* Unsafe/http.scm 454 */
															BgL_matchz00_5035 = BgL_newzd2matchzd2_4899;
														}
												}
											else
												{	/* Unsafe/http.scm 454 */
													if (
														((long) (BgL_currentzd2charzd2_4900) ==
															((long) 10)))
														{	/* Unsafe/http.scm 454 */
															long BgL_newzd2matchzd2_8514;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_4896);
															BgL_newzd2matchzd2_8514 = ((long) 1);
															BgL_matchz00_5035 = BgL_newzd2matchzd2_8514;
														}
													else
														{	/* Unsafe/http.scm 454 */
															BgL_matchz00_5035 = BgL_newzd2matchzd2_4899;
														}
												}
										}
									}
									break;
								case ((long) 10):

									{	/* Unsafe/http.scm 454 */
										long BgL_newzd2matchzd2_8551;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4923);
										BgL_newzd2matchzd2_8551 = ((long) 1);
										BgL_matchz00_5035 = BgL_newzd2matchzd2_8551;
									} break;
								case ((long) 9):

									BgL_inputzd2portzd2_4885 = BgL_inputzd2portzd2_4923;
									BgL_lastzd2matchzd2_4886 = BgL_lastzd2matchzd2_4924;
								BgL_zc3anonymousza34419ze3z83_4887:
									{	/* Unsafe/http.scm 454 */
										long BgL_newzd2matchzd2_4888;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4885);
										BgL_newzd2matchzd2_4888 = ((long) 2);
										{	/* Unsafe/http.scm 454 */
											int BgL_currentzd2charzd2_4889;

											BgL_currentzd2charzd2_4889 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4885);
											if (((long) (BgL_currentzd2charzd2_4889) == ((long) 0)))
												{	/* Unsafe/http.scm 454 */
													bool_t BgL_testz00_12007;

													{	/* Unsafe/http.scm 454 */
														bool_t BgL_res5201z00_8488;

														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4885))
															{	/* Unsafe/http.scm 454 */
																BgL_res5201z00_8488 =
																	rgc_fill_buffer(BgL_inputzd2portzd2_4885);
															}
														else
															{	/* Unsafe/http.scm 454 */
																BgL_res5201z00_8488 = ((bool_t) 0);
															}
														BgL_testz00_12007 = BgL_res5201z00_8488;
													}
													if (BgL_testz00_12007)
														{

															goto BgL_zc3anonymousza34419ze3z83_4887;
														}
													else
														{	/* Unsafe/http.scm 454 */
															BgL_matchz00_5035 = BgL_newzd2matchzd2_4888;
														}
												}
											else
												{	/* Unsafe/http.scm 454 */
													if (
														((long) (BgL_currentzd2charzd2_4889) ==
															((long) 13)))
														{
															long BgL_lastzd2matchzd2_12015;

															obj_t BgL_inputzd2portzd2_12014;

															BgL_inputzd2portzd2_12014 =
																BgL_inputzd2portzd2_4885;
															BgL_lastzd2matchzd2_12015 =
																BgL_newzd2matchzd2_4888;
															BgL_lastzd2matchzd2_4871 =
																BgL_lastzd2matchzd2_12015;
															BgL_inputzd2portzd2_4870 =
																BgL_inputzd2portzd2_12014;
															goto BgL_zc3anonymousza34410ze3z83_4872;
														}
													else
														{	/* Unsafe/http.scm 454 */
															if (
																((long) (BgL_currentzd2charzd2_4889) ==
																	((long) 10)))
																{	/* Unsafe/http.scm 454 */
																	long BgL_newzd2matchzd2_8495;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_4885);
																	BgL_newzd2matchzd2_8495 = ((long) 1);
																	BgL_matchz00_5035 = BgL_newzd2matchzd2_8495;
																}
															else
																{	/* Unsafe/http.scm 454 */
																	bool_t BgL_testz00_12020;

																	if (
																		((long) (BgL_currentzd2charzd2_4889) ==
																			((long) 9)))
																		{	/* Unsafe/http.scm 454 */
																			BgL_testz00_12020 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			BgL_testz00_12020 =
																				(
																				(long) (BgL_currentzd2charzd2_4889) ==
																				((long) 32));
																		}
																	if (BgL_testz00_12020)
																		{
																			long BgL_lastzd2matchzd2_12027;

																			obj_t BgL_inputzd2portzd2_12026;

																			BgL_inputzd2portzd2_12026 =
																				BgL_inputzd2portzd2_4885;
																			BgL_lastzd2matchzd2_12027 =
																				BgL_newzd2matchzd2_4888;
																			BgL_lastzd2matchzd2_4861 =
																				BgL_lastzd2matchzd2_12027;
																			BgL_inputzd2portzd2_4860 =
																				BgL_inputzd2portzd2_12026;
																			goto BgL_zc3anonymousza34403ze3z83_4862;
																		}
																	else
																		{	/* Unsafe/http.scm 454 */
																			BgL_matchz00_5035 =
																				BgL_newzd2matchzd2_4888;
																		}
																}
														}
												}
										}
									}
									break;
								default:
									{
										long BgL_lastzd2matchzd2_12029;

										obj_t BgL_inputzd2portzd2_12028;

										BgL_inputzd2portzd2_12028 = BgL_inputzd2portzd2_4923;
										BgL_lastzd2matchzd2_12029 = BgL_lastzd2matchzd2_4924;
										BgL_lastzd2matchzd2_4800 = BgL_lastzd2matchzd2_12029;
										BgL_inputzd2portzd2_4799 = BgL_inputzd2portzd2_12028;
										goto BgL_zc3anonymousza34363ze3z83_4801;
									}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_4730);
						switch (BgL_matchz00_5035)
							{
							case ((long) 2):

								{	/* Unsafe/http.scm 534 */
									obj_t BgL_cz00_5039;

									BgL_cz00_5039 =
										BGl_thezd2failurezd2zz__httpz00(BgL_inputzd2portzd2_4730);
									if (EOF_OBJECTP(BgL_cz00_5039))
										{	/* Unsafe/http.scm 538 */
											obj_t BgL_val0_2395z00_5041;

											obj_t BgL_val1_2396z00_5042;

											obj_t BgL_val2_2397z00_5043;

											obj_t BgL_val3_2398z00_5044;

											obj_t BgL_val4_2399z00_5045;

											obj_t BgL_val5_2400z00_5046;

											obj_t BgL_val6_2401z00_5047;

											obj_t BgL_val7_2402z00_5048;

											BgL_val0_2395z00_5041 =
												bgl_reverse_bang(BgL_headerz00_4732);
											BgL_val1_2396z00_5042 = BgL_hostnamez00_4733;
											BgL_val2_2397z00_5043 = BgL_portz00_4734;
											BgL_val3_2398z00_5044 = BgL_contentzd2lengthzd2_4735;
											BgL_val4_2399z00_5045 = BgL_transferzd2encodingzd2_4736;
											BgL_val5_2400z00_5046 = BgL_authoriza7ationza7_4737;
											BgL_val6_2401z00_5047 =
												BgL_proxyzd2authoriza7ationz75_4738;
											BgL_val7_2402z00_5048 = BgL_connectionz00_4739;
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12037;

												BgL_auxz00_12037 = (int) (((long) 8));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_12037);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12040;

												BgL_auxz00_12040 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12040,
													BgL_val1_2396z00_5042);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12043;

												BgL_auxz00_12043 = (int) (((long) 2));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12043,
													BgL_val2_2397z00_5043);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12046;

												BgL_auxz00_12046 = (int) (((long) 3));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12046,
													BgL_val3_2398z00_5044);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12049;

												BgL_auxz00_12049 = (int) (((long) 4));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12049,
													BgL_val4_2399z00_5045);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12052;

												BgL_auxz00_12052 = (int) (((long) 5));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12052,
													BgL_val5_2400z00_5046);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12055;

												BgL_auxz00_12055 = (int) (((long) 6));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12055,
													BgL_val6_2401z00_5047);
											}
											{	/* Unsafe/http.scm 538 */
												int BgL_auxz00_12058;

												BgL_auxz00_12058 = (int) (((long) 7));
												BGL_MVALUES_VAL_SET(BgL_auxz00_12058,
													BgL_val7_2402z00_5048);
											}
											return BgL_val0_2395z00_5041;
										}
									else
										{	/* Llib/object.scm 90 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg4530z00_5049;

											{	/* Llib/object.scm 90 */
												obj_t BgL_arg4531z00_5050;

												obj_t BgL_arg4532z00_5051;

												obj_t BgL_arg4533z00_5052;

												obj_t BgL_arg4534z00_5053;

												{	/* Llib/object.scm 90 */

													{	/* Llib/object.scm 90 */

														BgL_arg4531z00_5050 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg4532z00_5051 = BGl_symbol5432z00zz__httpz00;
												{	/* Unsafe/http.scm 552 */
													obj_t BgL_arg4536z00_5056;

													BgL_arg4536z00_5056 =
														BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
														(BGl_thezd2failurezd2zz__httpz00
														(BgL_inputzd2portzd2_4730),
														BgL_inputzd2portzd2_4730);
													{	/* Unsafe/http.scm 552 */
														obj_t BgL_list4537z00_5057;

														BgL_list4537z00_5057 =
															MAKE_PAIR(BgL_arg4536z00_5056, BNIL);
														BgL_arg4533z00_5052 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string5434z00zz__httpz00,
															BgL_list4537z00_5057);
													}
												}
												{	/* Unsafe/http.scm 547 */
													obj_t BgL_arg4540z00_5060;

													BgL_arg4540z00_5060 =
														bgl_reverse_bang(BgL_headerz00_4732);
													{	/* Unsafe/http.scm 547 */
														obj_t BgL_list4541z00_5061;

														{	/* Unsafe/http.scm 547 */
															obj_t BgL_arg4542z00_5062;

															{	/* Unsafe/http.scm 547 */
																obj_t BgL_arg4543z00_5063;

																{	/* Unsafe/http.scm 547 */
																	obj_t BgL_arg4544z00_5064;

																	{	/* Unsafe/http.scm 547 */
																		obj_t BgL_arg4545z00_5065;

																		{	/* Unsafe/http.scm 547 */
																			obj_t BgL_arg4546z00_5066;

																			{	/* Unsafe/http.scm 547 */
																				obj_t BgL_arg4547z00_5067;

																				{	/* Unsafe/http.scm 547 */
																					obj_t BgL_arg4548z00_5068;

																					BgL_arg4548z00_5068 =
																						MAKE_PAIR(BgL_connectionz00_4739,
																						BNIL);
																					BgL_arg4547z00_5067 =
																						MAKE_PAIR
																						(BgL_proxyzd2authoriza7ationz75_4738,
																						BgL_arg4548z00_5068);
																				}
																				BgL_arg4546z00_5066 =
																					MAKE_PAIR(BgL_authoriza7ationza7_4737,
																					BgL_arg4547z00_5067);
																			}
																			BgL_arg4545z00_5065 =
																				MAKE_PAIR
																				(BgL_transferzd2encodingzd2_4736,
																				BgL_arg4546z00_5066);
																		}
																		BgL_arg4544z00_5064 =
																			MAKE_PAIR(BgL_contentzd2lengthzd2_4735,
																			BgL_arg4545z00_5065);
																	}
																	BgL_arg4543z00_5063 =
																		MAKE_PAIR(BgL_portz00_4734,
																		BgL_arg4544z00_5064);
																}
																BgL_arg4542z00_5062 =
																	MAKE_PAIR(BgL_hostnamez00_4733,
																	BgL_arg4543z00_5063);
															}
															BgL_list4541z00_5061 =
																MAKE_PAIR(BgL_arg4540z00_5060,
																BgL_arg4542z00_5062);
														}
														BgL_arg4534z00_5053 = BgL_list4541z00_5061;
													}
												}
												BgL_arg4530z00_5049 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg4531z00_5050,
													BgL_arg4532z00_5051, BgL_arg4533z00_5052,
													BgL_arg4534z00_5053);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg4530z00_5049));
										}
								}
								break;
							case ((long) 1):

								{	/* Unsafe/http.scm 525 */
									obj_t BgL_val0_2403z00_5069;

									obj_t BgL_val1_2404z00_5070;

									obj_t BgL_val2_2405z00_5071;

									obj_t BgL_val3_2406z00_5072;

									obj_t BgL_val4_2407z00_5073;

									obj_t BgL_val5_2408z00_5074;

									obj_t BgL_val6_2409z00_5075;

									obj_t BgL_val7_2410z00_5076;

									BgL_val0_2403z00_5069 = bgl_reverse_bang(BgL_headerz00_4732);
									BgL_val1_2404z00_5070 = BgL_hostnamez00_4733;
									BgL_val2_2405z00_5071 = BgL_portz00_4734;
									BgL_val3_2406z00_5072 = BgL_contentzd2lengthzd2_4735;
									BgL_val4_2407z00_5073 = BgL_transferzd2encodingzd2_4736;
									BgL_val5_2408z00_5074 = BgL_authoriza7ationza7_4737;
									BgL_val6_2409z00_5075 = BgL_proxyzd2authoriza7ationz75_4738;
									BgL_val7_2410z00_5076 = BgL_connectionz00_4739;
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12079;

										BgL_auxz00_12079 = (int) (((long) 8));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_12079);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12082;

										BgL_auxz00_12082 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12082,
											BgL_val1_2404z00_5070);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12085;

										BgL_auxz00_12085 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12085,
											BgL_val2_2405z00_5071);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12088;

										BgL_auxz00_12088 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12088,
											BgL_val3_2406z00_5072);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12091;

										BgL_auxz00_12091 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12091,
											BgL_val4_2407z00_5073);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12094;

										BgL_auxz00_12094 = (int) (((long) 5));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12094,
											BgL_val5_2408z00_5074);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12097;

										BgL_auxz00_12097 = (int) (((long) 6));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12097,
											BgL_val6_2409z00_5075);
									}
									{	/* Unsafe/http.scm 525 */
										int BgL_auxz00_12100;

										BgL_auxz00_12100 = (int) (((long) 7));
										BGL_MVALUES_VAL_SET(BgL_auxz00_12100,
											BgL_val7_2410z00_5076);
									}
									return BgL_val0_2403z00_5069;
								}
								break;
							case ((long) 0):

								{	/* Unsafe/http.scm 459 */
									obj_t BgL_kz00_5077;

									BgL_kz00_5077 =
										rgc_buffer_downcase_keyword(BgL_inputzd2portzd2_4730);
									{	/* Unsafe/http.scm 459 */

										if ((BgL_kz00_5077 == BGl_keyword5368z00zz__httpz00))
											{	/* Unsafe/http.scm 462 */
												obj_t BgL_hz00_5080;

												BgL_inputzd2portzd2_3066 = BgL_inputzd2portzd2_4730;
												{
													obj_t BgL_inputzd2portzd2_3100;

													long BgL_lastzd2matchzd2_3101;

													obj_t BgL_inputzd2portzd2_3118;

													long BgL_lastzd2matchzd2_3119;

													obj_t BgL_inputzd2portzd2_3132;

													long BgL_lastzd2matchzd2_3133;

													obj_t BgL_inputzd2portzd2_3141;

													long BgL_lastzd2matchzd2_3142;

													obj_t BgL_inputzd2portzd2_3154;

													long BgL_lastzd2matchzd2_3155;

													int BgL_minz00_3177;

													int BgL_maxz00_3178;

												BgL_zc3anonymousza33636ze3z83_3247:
													RGC_START_MATCH(BgL_inputzd2portzd2_3066);
													{	/* Unsafe/http.scm 400 */
														long BgL_matchz00_3248;

														BgL_inputzd2portzd2_3154 = BgL_inputzd2portzd2_3066;
														BgL_lastzd2matchzd2_3155 = ((long) 3);
													BgL_zc3anonymousza33559ze3z83_3156:
														{	/* Unsafe/http.scm 400 */
															int BgL_currentzd2charzd2_3157;

															BgL_currentzd2charzd2_3157 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3154);
															if (
																((long) (BgL_currentzd2charzd2_3157) ==
																	((long) 0)))
																{	/* Unsafe/http.scm 400 */
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3154))
																		{	/* Unsafe/http.scm 400 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_3154))
																				{

																					goto
																						BgL_zc3anonymousza33559ze3z83_3156;
																				}
																			else
																				{	/* Unsafe/http.scm 400 */
																					BgL_matchz00_3248 =
																						BgL_lastzd2matchzd2_3155;
																				}
																		}
																	else
																		{	/* Unsafe/http.scm 400 */
																			BgL_inputzd2portzd2_3118 =
																				BgL_inputzd2portzd2_3154;
																			BgL_lastzd2matchzd2_3119 =
																				BgL_lastzd2matchzd2_3155;
																		BgL_zc3anonymousza33538ze3z83_3120:
																			{	/* Unsafe/http.scm 400 */
																				long BgL_newzd2matchzd2_3121;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_3118);
																				BgL_newzd2matchzd2_3121 = ((long) 1);
																				{	/* Unsafe/http.scm 400 */
																					int BgL_currentzd2charzd2_3122;

																					BgL_currentzd2charzd2_3122 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_3118);
																					if (((long)
																							(BgL_currentzd2charzd2_3122) ==
																							((long) 0)))
																						{	/* Unsafe/http.scm 400 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_3118))
																								{	/* Unsafe/http.scm 400 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_3118))
																										{

																											goto
																												BgL_zc3anonymousza33538ze3z83_3120;
																										}
																									else
																										{	/* Unsafe/http.scm 400 */
																											BgL_matchz00_3248 =
																												BgL_newzd2matchzd2_3121;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 400 */
																									BgL_inputzd2portzd2_3100 =
																										BgL_inputzd2portzd2_3118;
																									BgL_lastzd2matchzd2_3101 =
																										BgL_newzd2matchzd2_3121;
																								BgL_zc3anonymousza33527ze3z83_3102:
																									{	/* Unsafe/http.scm 400 */
																										long
																											BgL_newzd2matchzd2_3103;
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_3100);
																										BgL_newzd2matchzd2_3103 =
																											((long) 1);
																										{	/* Unsafe/http.scm 400 */
																											int
																												BgL_currentzd2charzd2_3104;
																											BgL_currentzd2charzd2_3104
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_3100);
																											if (((long)
																													(BgL_currentzd2charzd2_3104)
																													== ((long) 0)))
																												{	/* Unsafe/http.scm 400 */
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_3100))
																														{	/* Unsafe/http.scm 400 */
																															if (rgc_fill_buffer(BgL_inputzd2portzd2_3100))
																																{

																																	goto
																																		BgL_zc3anonymousza33527ze3z83_3102;
																																}
																															else
																																{	/* Unsafe/http.scm 400 */
																																	BgL_matchz00_3248
																																		=
																																		BgL_newzd2matchzd2_3103;
																																}
																														}
																													else
																														{
																															long
																																BgL_lastzd2matchzd2_12133;
																															BgL_lastzd2matchzd2_12133
																																=
																																BgL_newzd2matchzd2_3103;
																															BgL_lastzd2matchzd2_3101
																																=
																																BgL_lastzd2matchzd2_12133;
																															goto
																																BgL_zc3anonymousza33527ze3z83_3102;
																														}
																												}
																											else
																												{	/* Unsafe/http.scm 400 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_3104)
																															== ((long) 58)))
																														{	/* Unsafe/http.scm 400 */
																															long
																																BgL_newzd2matchzd2_7687;
																															RGC_STOP_MATCH
																																(BgL_inputzd2portzd2_3100);
																															BgL_newzd2matchzd2_7687
																																= ((long) 0);
																															BgL_matchz00_3248
																																=
																																BgL_newzd2matchzd2_7687;
																														}
																													else
																														{	/* Unsafe/http.scm 400 */
																															bool_t
																																BgL_testz00_12138;
																															{	/* Unsafe/http.scm 400 */
																																bool_t
																																	BgL_testz00_12139;
																																if (((long)
																																		(BgL_currentzd2charzd2_3104)
																																		==
																																		((long)
																																			10)))
																																	{	/* Unsafe/http.scm 400 */
																																		BgL_testz00_12139
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/http.scm 400 */
																																		BgL_testz00_12139
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_3104)
																																			==
																																			((long)
																																				9));
																																	}
																																if (BgL_testz00_12139)
																																	{	/* Unsafe/http.scm 400 */
																																		BgL_testz00_12138
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/http.scm 400 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_3104)
																																				==
																																				((long)
																																					13)))
																																			{	/* Unsafe/http.scm 400 */
																																				BgL_testz00_12138
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/http.scm 400 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_3104) == ((long) 32)))
																																					{	/* Unsafe/http.scm 400 */
																																						BgL_testz00_12138
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/http.scm 400 */
																																						BgL_testz00_12138
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_3104)
																																							==
																																							((long) 58));
																															}}}}
																															if (BgL_testz00_12138)
																																{	/* Unsafe/http.scm 400 */
																																	BgL_matchz00_3248
																																		=
																																		BgL_newzd2matchzd2_3103;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_12153;
																																	BgL_lastzd2matchzd2_12153
																																		=
																																		BgL_newzd2matchzd2_3103;
																																	BgL_lastzd2matchzd2_3101
																																		=
																																		BgL_lastzd2matchzd2_12153;
																																	goto
																																		BgL_zc3anonymousza33527ze3z83_3102;
																																}
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Unsafe/http.scm 400 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_3122)
																									== ((long) 58)))
																								{	/* Unsafe/http.scm 400 */
																									long BgL_newzd2matchzd2_7711;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_3118);
																									BgL_newzd2matchzd2_7711 =
																										((long) 0);
																									BgL_matchz00_3248 =
																										BgL_newzd2matchzd2_7711;
																								}
																							else
																								{	/* Unsafe/http.scm 400 */
																									bool_t BgL_testz00_12158;

																									{	/* Unsafe/http.scm 400 */
																										bool_t BgL_testz00_12159;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_3122)
																												== ((long) 10)))
																											{	/* Unsafe/http.scm 400 */
																												BgL_testz00_12159 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 400 */
																												BgL_testz00_12159 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_3122)
																													== ((long) 9));
																											}
																										if (BgL_testz00_12159)
																											{	/* Unsafe/http.scm 400 */
																												BgL_testz00_12158 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/http.scm 400 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_3122)
																														== ((long) 13)))
																													{	/* Unsafe/http.scm 400 */
																														BgL_testz00_12158 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/http.scm 400 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_3122)
																																== ((long) 32)))
																															{	/* Unsafe/http.scm 400 */
																																BgL_testz00_12158
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/http.scm 400 */
																																BgL_testz00_12158
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_3122)
																																	==
																																	((long) 58));
																									}}}}
																									if (BgL_testz00_12158)
																										{	/* Unsafe/http.scm 400 */
																											BgL_matchz00_3248 =
																												BgL_newzd2matchzd2_3121;
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_12174;
																											obj_t
																												BgL_inputzd2portzd2_12173;
																											BgL_inputzd2portzd2_12173
																												=
																												BgL_inputzd2portzd2_3118;
																											BgL_lastzd2matchzd2_12174
																												=
																												BgL_newzd2matchzd2_3121;
																											BgL_lastzd2matchzd2_3101 =
																												BgL_lastzd2matchzd2_12174;
																											BgL_inputzd2portzd2_3100 =
																												BgL_inputzd2portzd2_12173;
																											goto
																												BgL_zc3anonymousza33527ze3z83_3102;
																										}
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Unsafe/http.scm 400 */
																	bool_t BgL_testz00_12175;

																	if (
																		((long) (BgL_currentzd2charzd2_3157) ==
																			((long) 10)))
																		{	/* Unsafe/http.scm 400 */
																			BgL_testz00_12175 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/http.scm 400 */
																			if (
																				((long) (BgL_currentzd2charzd2_3157) ==
																					((long) 13)))
																				{	/* Unsafe/http.scm 400 */
																					BgL_testz00_12175 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/http.scm 400 */
																					BgL_testz00_12175 =
																						(
																						(long) (BgL_currentzd2charzd2_3157)
																						== ((long) 58));
																		}}
																	if (BgL_testz00_12175)
																		{	/* Unsafe/http.scm 400 */
																			long BgL_newzd2matchzd2_7764;

																			RGC_STOP_MATCH(BgL_inputzd2portzd2_3154);
																			BgL_newzd2matchzd2_7764 = ((long) 3);
																			BgL_matchz00_3248 =
																				BgL_newzd2matchzd2_7764;
																		}
																	else
																		{	/* Unsafe/http.scm 400 */
																			bool_t BgL_testz00_12185;

																			if (
																				((long) (BgL_currentzd2charzd2_3157) ==
																					((long) 9)))
																				{	/* Unsafe/http.scm 400 */
																					BgL_testz00_12185 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/http.scm 400 */
																					BgL_testz00_12185 =
																						(
																						(long) (BgL_currentzd2charzd2_3157)
																						== ((long) 32));
																				}
																			if (BgL_testz00_12185)
																				{	/* Unsafe/http.scm 400 */
																					BgL_inputzd2portzd2_3132 =
																						BgL_inputzd2portzd2_3154;
																					BgL_lastzd2matchzd2_3133 =
																						BgL_lastzd2matchzd2_3155;
																				BgL_zc3anonymousza33548ze3z83_3134:
																					{	/* Unsafe/http.scm 400 */
																						long BgL_newzd2matchzd2_3135;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_3132);
																						BgL_newzd2matchzd2_3135 =
																							((long) 2);
																						{	/* Unsafe/http.scm 400 */
																							int BgL_currentzd2charzd2_3136;

																							BgL_currentzd2charzd2_3136 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_3132);
																							if (((long)
																									(BgL_currentzd2charzd2_3136)
																									== ((long) 0)))
																								{	/* Unsafe/http.scm 400 */
																									bool_t BgL_testz00_12196;

																									{	/* Unsafe/http.scm 400 */
																										bool_t BgL_res5166z00_7731;

																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_3132))
																											{	/* Unsafe/http.scm 400 */
																												BgL_res5166z00_7731 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_3132);
																											}
																										else
																											{	/* Unsafe/http.scm 400 */
																												BgL_res5166z00_7731 =
																													((bool_t) 0);
																											}
																										BgL_testz00_12196 =
																											BgL_res5166z00_7731;
																									}
																									if (BgL_testz00_12196)
																										{

																											goto
																												BgL_zc3anonymousza33548ze3z83_3134;
																										}
																									else
																										{	/* Unsafe/http.scm 400 */
																											BgL_matchz00_3248 =
																												BgL_newzd2matchzd2_3135;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 400 */
																									bool_t BgL_testz00_12200;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_3136)
																											== ((long) 9)))
																										{	/* Unsafe/http.scm 400 */
																											BgL_testz00_12200 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 400 */
																											BgL_testz00_12200 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_3136)
																												== ((long) 32));
																										}
																									if (BgL_testz00_12200)
																										{	/* Unsafe/http.scm 400 */
																											BgL_inputzd2portzd2_3141 =
																												BgL_inputzd2portzd2_3132;
																											BgL_lastzd2matchzd2_3142 =
																												BgL_newzd2matchzd2_3135;
																										BgL_zc3anonymousza33553ze3z83_3143:
																											{	/* Unsafe/http.scm 400 */
																												long
																													BgL_newzd2matchzd2_3144;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_3141);
																												BgL_newzd2matchzd2_3144
																													= ((long) 2);
																												{	/* Unsafe/http.scm 400 */
																													int
																														BgL_currentzd2charzd2_3145;
																													BgL_currentzd2charzd2_3145
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_3141);
																													if (((long)
																															(BgL_currentzd2charzd2_3145)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 400 */
																															bool_t
																																BgL_testz00_12211;
																															{	/* Unsafe/http.scm 400 */
																																bool_t
																																	BgL_res5167z00_7744;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3141))
																																	{	/* Unsafe/http.scm 400 */
																																		BgL_res5167z00_7744
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_3141);
																																	}
																																else
																																	{	/* Unsafe/http.scm 400 */
																																		BgL_res5167z00_7744
																																			=
																																			((bool_t)
																																			0);
																																	}
																																BgL_testz00_12211
																																	=
																																	BgL_res5167z00_7744;
																															}
																															if (BgL_testz00_12211)
																																{

																																	goto
																																		BgL_zc3anonymousza33553ze3z83_3143;
																																}
																															else
																																{	/* Unsafe/http.scm 400 */
																																	BgL_matchz00_3248
																																		=
																																		BgL_newzd2matchzd2_3144;
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 400 */
																															bool_t
																																BgL_testz00_12215;
																															if (((long)
																																	(BgL_currentzd2charzd2_3145)
																																	==
																																	((long) 9)))
																																{	/* Unsafe/http.scm 400 */
																																	BgL_testz00_12215
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/http.scm 400 */
																																	BgL_testz00_12215
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_3145)
																																		==
																																		((long)
																																			32));
																																}
																															if (BgL_testz00_12215)
																																{
																																	long
																																		BgL_lastzd2matchzd2_12221;
																																	BgL_lastzd2matchzd2_12221
																																		=
																																		BgL_newzd2matchzd2_3144;
																																	BgL_lastzd2matchzd2_3142
																																		=
																																		BgL_lastzd2matchzd2_12221;
																																	goto
																																		BgL_zc3anonymousza33553ze3z83_3143;
																																}
																															else
																																{	/* Unsafe/http.scm 400 */
																																	BgL_matchz00_3248
																																		=
																																		BgL_newzd2matchzd2_3144;
																																}
																														}
																												}
																											}
																										}
																									else
																										{	/* Unsafe/http.scm 400 */
																											BgL_matchz00_3248 =
																												BgL_newzd2matchzd2_3135;
																										}
																								}
																						}
																					}
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_12223;

																					obj_t BgL_inputzd2portzd2_12222;

																					BgL_inputzd2portzd2_12222 =
																						BgL_inputzd2portzd2_3154;
																					BgL_lastzd2matchzd2_12223 =
																						BgL_lastzd2matchzd2_3155;
																					BgL_lastzd2matchzd2_3119 =
																						BgL_lastzd2matchzd2_12223;
																					BgL_inputzd2portzd2_3118 =
																						BgL_inputzd2portzd2_12222;
																					goto
																						BgL_zc3anonymousza33538ze3z83_3120;
																				}
																		}
																}
														}
														RGC_SET_FILEPOS(BgL_inputzd2portzd2_3066);
														switch (BgL_matchz00_3248)
															{
															case ((long) 3):

																{	/* Unsafe/http.scm 400 */
																	bool_t BgL_testz00_12225;

																	{	/* Unsafe/http.scm 400 */
																		long BgL_arg3629z00_3237;

																		BgL_arg3629z00_3237 =
																			RGC_BUFFER_LENGTH
																			(BgL_inputzd2portzd2_3066);
																		BgL_testz00_12225 =
																			(BgL_arg3629z00_3237 == ((long) 0));
																	}
																	if (BgL_testz00_12225)
																		{	/* Unsafe/http.scm 400 */
																			BgL_hz00_5080 = BCNST(256);
																		}
																	else
																		{	/* Unsafe/http.scm 400 */
																			BgL_hz00_5080 =
																				BCHAR(RGC_BUFFER_CHARACTER
																				(BgL_inputzd2portzd2_3066));
																		}
																}
																break;
															case ((long) 2):

																goto BgL_zc3anonymousza33636ze3z83_3247;
																break;
															case ((long) 1):

																{	/* Unsafe/http.scm 406 */
																	obj_t BgL_val0_2391z00_3252;

																	{	/* Unsafe/http.scm 406 */
																		obj_t BgL_res5174z00_7816;

																		{	/* Unsafe/http.scm 406 */
																			int BgL_arg3575z00_7810;

																			{	/* Unsafe/http.scm 406 */
																				int BgL_res5173z00_7812;

																				BgL_res5173z00_7812 =
																					(int) (RGC_BUFFER_LENGTH
																					(BgL_inputzd2portzd2_3066));
																				BgL_arg3575z00_7810 =
																					BgL_res5173z00_7812;
																			}
																			BgL_res5174z00_7816 =
																				rgc_buffer_substring
																				(BgL_inputzd2portzd2_3066, ((long) 0),
																				(long) (BgL_arg3575z00_7810));
																		}
																		BgL_val0_2391z00_3252 = BgL_res5174z00_7816;
																	}
																	{	/* Unsafe/http.scm 406 */
																		int BgL_auxz00_12234;

																		BgL_auxz00_12234 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_12234);
																	}
																	{	/* Unsafe/http.scm 406 */
																		int BgL_auxz00_12237;

																		BgL_auxz00_12237 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_12237,
																			BFALSE);
																	}
																	BgL_hz00_5080 = BgL_val0_2391z00_3252;
																} break;
															case ((long) 0):

																{	/* Unsafe/http.scm 402 */
																	obj_t BgL_hz00_3254;

																	BgL_minz00_3177 = (int) (((long) 0));
																	BgL_maxz00_3178 = (int) (((long) -1));
																	if (((long) (BgL_maxz00_3178) < ((long) 0)))
																		{	/* Unsafe/http.scm 400 */
																			int BgL_arg3578z00_3181;

																			{	/* Unsafe/http.scm 400 */
																				int BgL_res5169z00_7780;

																				BgL_res5169z00_7780 =
																					(int) (RGC_BUFFER_LENGTH
																					(BgL_inputzd2portzd2_3066));
																				BgL_arg3578z00_3181 =
																					BgL_res5169z00_7780;
																			}
																			{	/* Unsafe/http.scm 400 */
																				long BgL_za71za7_7781;

																				long BgL_za72za7_7782;

																				BgL_za71za7_7781 =
																					(long) (BgL_arg3578z00_3181);
																				BgL_za72za7_7782 =
																					(long) (BgL_maxz00_3178);
																				BgL_maxz00_3178 =
																					(int) (
																					(BgL_za71za7_7781 +
																						BgL_za72za7_7782));
																		}}
																	else
																		{	/* Unsafe/http.scm 400 */
																			BFALSE;
																		}
																	{	/* Unsafe/http.scm 400 */
																		bool_t BgL_testz00_12249;

																		if (
																			((long) (BgL_minz00_3177) >= ((long) 0)))
																			{	/* Unsafe/http.scm 400 */
																				if (
																					((long) (BgL_maxz00_3178) >=
																						(long) (BgL_minz00_3177)))
																					{	/* Unsafe/http.scm 400 */
																						int BgL_arg3588z00_3191;

																						{	/* Unsafe/http.scm 400 */
																							int BgL_res5170z00_7788;

																							BgL_res5170z00_7788 =
																								(int) (RGC_BUFFER_LENGTH
																								(BgL_inputzd2portzd2_3066));
																							BgL_arg3588z00_3191 =
																								BgL_res5170z00_7788;
																						}
																						BgL_testz00_12249 =
																							(
																							(long) (BgL_maxz00_3178) <=
																							(long) (BgL_arg3588z00_3191));
																					}
																				else
																					{	/* Unsafe/http.scm 400 */
																						BgL_testz00_12249 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Unsafe/http.scm 400 */
																				BgL_testz00_12249 = ((bool_t) 0);
																			}
																		if (BgL_testz00_12249)
																			{	/* Unsafe/http.scm 400 */
																				BgL_hz00_3254 =
																					rgc_buffer_substring
																					(BgL_inputzd2portzd2_3066,
																					(long) (BgL_minz00_3177),
																					(long) (BgL_maxz00_3178));
																			}
																		else
																			{	/* Unsafe/http.scm 400 */
																				obj_t BgL_arg3581z00_3184;

																				obj_t BgL_arg3582z00_3185;

																				{	/* Unsafe/http.scm 400 */
																					obj_t BgL_arg3584z00_3187;

																					{	/* Unsafe/http.scm 400 */
																						obj_t BgL_res5172z00_7801;

																						{	/* Unsafe/http.scm 400 */
																							int BgL_arg3575z00_7795;

																							{	/* Unsafe/http.scm 400 */
																								int BgL_res5171z00_7797;

																								BgL_res5171z00_7797 =
																									(int) (RGC_BUFFER_LENGTH
																									(BgL_inputzd2portzd2_3066));
																								BgL_arg3575z00_7795 =
																									BgL_res5171z00_7797;
																							}
																							BgL_res5172z00_7801 =
																								rgc_buffer_substring
																								(BgL_inputzd2portzd2_3066,
																								((long) 0),
																								(long) (BgL_arg3575z00_7795));
																						}
																						BgL_arg3584z00_3187 =
																							BgL_res5172z00_7801;
																					}
																					{	/* Unsafe/http.scm 400 */
																						obj_t BgL_list3585z00_3188;

																						BgL_list3585z00_3188 =
																							MAKE_PAIR(BgL_arg3584z00_3187,
																							BNIL);
																						BgL_arg3581z00_3184 =
																							BGl_formatz00zz__r4_output_6_10_3z00
																							(BGl_string5333z00zz__httpz00,
																							BgL_list3585z00_3188);
																				}}
																				BgL_arg3582z00_3185 =
																					MAKE_PAIR(BINT(BgL_minz00_3177),
																					BINT(BgL_maxz00_3178));
																				BgL_hz00_3254 =
																					BGl_errorz00zz__errorz00
																					(BGl_string5334z00zz__httpz00,
																					BgL_arg3581z00_3184,
																					BgL_arg3582z00_3185);
																	}}
																	{	/* Unsafe/http.scm 402 */
																		obj_t BgL_pz00_3255;

																		BgL_inputzd2portzd2_3500 =
																			BgL_inputzd2portzd2_3066;
																		{
																			obj_t BgL_inputzd2portzd2_3533;

																			long BgL_lastzd2matchzd2_3534;

																			obj_t BgL_inputzd2portzd2_3544;

																			long BgL_lastzd2matchzd2_3545;

																			obj_t BgL_inputzd2portzd2_3557;

																			long BgL_lastzd2matchzd2_3558;

																			obj_t BgL_inputzd2portzd2_3566;

																			long BgL_lastzd2matchzd2_3567;

																			obj_t BgL_inputzd2portzd2_3575;

																			long BgL_lastzd2matchzd2_3576;

																		BgL_zc3anonymousza33842ze3z83_3665:
																			RGC_START_MATCH(BgL_inputzd2portzd2_3500);
																			{	/* Unsafe/http.scm 416 */
																				long BgL_matchz00_3666;

																				BgL_inputzd2portzd2_3533 =
																					BgL_inputzd2portzd2_3500;
																				BgL_lastzd2matchzd2_3534 = ((long) 2);
																			BgL_zc3anonymousza33745ze3z83_3535:
																				{	/* Unsafe/http.scm 416 */
																					int BgL_currentzd2charzd2_3536;

																					BgL_currentzd2charzd2_3536 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_3533);
																					if (((long)
																							(BgL_currentzd2charzd2_3536) ==
																							((long) 0)))
																						{	/* Unsafe/http.scm 416 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_3533))
																								{	/* Unsafe/http.scm 416 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_3533))
																										{

																											goto
																												BgL_zc3anonymousza33745ze3z83_3535;
																										}
																									else
																										{	/* Unsafe/http.scm 416 */
																											BgL_matchz00_3666 =
																												BgL_lastzd2matchzd2_3534;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 416 */
																									long BgL_newzd2matchzd2_7831;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_3533);
																									BgL_newzd2matchzd2_7831 =
																										((long) 2);
																									BgL_matchz00_3666 =
																										BgL_newzd2matchzd2_7831;
																						}}
																					else
																						{	/* Unsafe/http.scm 416 */
																							bool_t BgL_testz00_12287;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_3536)
																									>= ((long) 48)))
																								{	/* Unsafe/http.scm 416 */
																									BgL_testz00_12287 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_3536)
																										< ((long) 58));
																								}
																							else
																								{	/* Unsafe/http.scm 416 */
																									BgL_testz00_12287 =
																										((bool_t) 0);
																								}
																							if (BgL_testz00_12287)
																								{	/* Unsafe/http.scm 416 */
																									BgL_inputzd2portzd2_3544 =
																										BgL_inputzd2portzd2_3533;
																									BgL_lastzd2matchzd2_3545 =
																										BgL_lastzd2matchzd2_3534;
																								BgL_zc3anonymousza33753ze3z83_3546:
																									{	/* Unsafe/http.scm 416 */
																										long
																											BgL_newzd2matchzd2_3547;
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_3544);
																										BgL_newzd2matchzd2_3547 =
																											((long) 0);
																										{	/* Unsafe/http.scm 416 */
																											int
																												BgL_currentzd2charzd2_3548;
																											BgL_currentzd2charzd2_3548
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_3544);
																											if (((long)
																													(BgL_currentzd2charzd2_3548)
																													== ((long) 0)))
																												{	/* Unsafe/http.scm 416 */
																													bool_t
																														BgL_testz00_12298;
																													{	/* Unsafe/http.scm 416 */
																														bool_t
																															BgL_res5176z00_7853;
																														if (RGC_BUFFER_EMPTY
																															(BgL_inputzd2portzd2_3544))
																															{	/* Unsafe/http.scm 416 */
																																BgL_res5176z00_7853
																																	=
																																	rgc_fill_buffer
																																	(BgL_inputzd2portzd2_3544);
																															}
																														else
																															{	/* Unsafe/http.scm 416 */
																																BgL_res5176z00_7853
																																	=
																																	((bool_t) 0);
																															}
																														BgL_testz00_12298 =
																															BgL_res5176z00_7853;
																													}
																													if (BgL_testz00_12298)
																														{

																															goto
																																BgL_zc3anonymousza33753ze3z83_3546;
																														}
																													else
																														{	/* Unsafe/http.scm 416 */
																															BgL_matchz00_3666
																																=
																																BgL_newzd2matchzd2_3547;
																														}
																												}
																											else
																												{	/* Unsafe/http.scm 416 */
																													bool_t
																														BgL_testz00_12302;
																													if (((long)
																															(BgL_currentzd2charzd2_3548)
																															>= ((long) 48)))
																														{	/* Unsafe/http.scm 416 */
																															BgL_testz00_12302
																																=
																																((long)
																																(BgL_currentzd2charzd2_3548)
																																< ((long) 58));
																														}
																													else
																														{	/* Unsafe/http.scm 416 */
																															BgL_testz00_12302
																																= ((bool_t) 0);
																														}
																													if (BgL_testz00_12302)
																														{	/* Unsafe/http.scm 416 */
																															BgL_inputzd2portzd2_3575
																																=
																																BgL_inputzd2portzd2_3544;
																															BgL_lastzd2matchzd2_3576
																																=
																																BgL_newzd2matchzd2_3547;
																														BgL_zc3anonymousza33769ze3z83_3577:
																															{	/* Unsafe/http.scm 416 */
																																long
																																	BgL_newzd2matchzd2_3578;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_3575);
																																BgL_newzd2matchzd2_3578
																																	= ((long) 0);
																																{	/* Unsafe/http.scm 416 */
																																	int
																																		BgL_currentzd2charzd2_3579;
																																	BgL_currentzd2charzd2_3579
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_inputzd2portzd2_3575);
																																	if (((long)
																																			(BgL_currentzd2charzd2_3579)
																																			==
																																			((long)
																																				0)))
																																		{	/* Unsafe/http.scm 416 */
																																			bool_t
																																				BgL_testz00_12313;
																																			{	/* Unsafe/http.scm 416 */
																																				bool_t
																																					BgL_res5179z00_7894;
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3575))
																																					{	/* Unsafe/http.scm 416 */
																																						BgL_res5179z00_7894
																																							=
																																							rgc_fill_buffer
																																							(BgL_inputzd2portzd2_3575);
																																					}
																																				else
																																					{	/* Unsafe/http.scm 416 */
																																						BgL_res5179z00_7894
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				BgL_testz00_12313
																																					=
																																					BgL_res5179z00_7894;
																																			}
																																			if (BgL_testz00_12313)
																																				{

																																					goto
																																						BgL_zc3anonymousza33769ze3z83_3577;
																																				}
																																			else
																																				{	/* Unsafe/http.scm 416 */
																																					BgL_matchz00_3666
																																						=
																																						BgL_newzd2matchzd2_3578;
																																				}
																																		}
																																	else
																																		{	/* Unsafe/http.scm 416 */
																																			bool_t
																																				BgL_testz00_12317;
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_3579)
																																					>=
																																					((long) 48)))
																																				{	/* Unsafe/http.scm 416 */
																																					BgL_testz00_12317
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_3579)
																																						<
																																						((long) 58));
																																				}
																																			else
																																				{	/* Unsafe/http.scm 416 */
																																					BgL_testz00_12317
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_testz00_12317)
																																				{
																																					long
																																						BgL_lastzd2matchzd2_12323;
																																					BgL_lastzd2matchzd2_12323
																																						=
																																						BgL_newzd2matchzd2_3578;
																																					BgL_lastzd2matchzd2_3576
																																						=
																																						BgL_lastzd2matchzd2_12323;
																																					goto
																																						BgL_zc3anonymousza33769ze3z83_3577;
																																				}
																																			else
																																				{	/* Unsafe/http.scm 416 */
																																					BgL_matchz00_3666
																																						=
																																						BgL_newzd2matchzd2_3578;
																																				}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Unsafe/http.scm 416 */
																															BgL_matchz00_3666
																																=
																																BgL_newzd2matchzd2_3547;
																														}
																												}
																										}
																									}
																								}
																							else
																								{	/* Unsafe/http.scm 416 */
																									bool_t BgL_testz00_12324;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_3536)
																											== ((long) 9)))
																										{	/* Unsafe/http.scm 416 */
																											BgL_testz00_12324 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/http.scm 416 */
																											BgL_testz00_12324 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_3536)
																												== ((long) 32));
																										}
																									if (BgL_testz00_12324)
																										{	/* Unsafe/http.scm 416 */
																											BgL_inputzd2portzd2_3557 =
																												BgL_inputzd2portzd2_3533;
																											BgL_lastzd2matchzd2_3558 =
																												BgL_lastzd2matchzd2_3534;
																										BgL_zc3anonymousza33759ze3z83_3559:
																											{	/* Unsafe/http.scm 416 */
																												long
																													BgL_newzd2matchzd2_3560;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_3557);
																												BgL_newzd2matchzd2_3560
																													= ((long) 1);
																												{	/* Unsafe/http.scm 416 */
																													int
																														BgL_currentzd2charzd2_3561;
																													BgL_currentzd2charzd2_3561
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_3557);
																													if (((long)
																															(BgL_currentzd2charzd2_3561)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 416 */
																															bool_t
																																BgL_testz00_12335;
																															{	/* Unsafe/http.scm 416 */
																																bool_t
																																	BgL_res5177z00_7868;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3557))
																																	{	/* Unsafe/http.scm 416 */
																																		BgL_res5177z00_7868
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_3557);
																																	}
																																else
																																	{	/* Unsafe/http.scm 416 */
																																		BgL_res5177z00_7868
																																			=
																																			((bool_t)
																																			0);
																																	}
																																BgL_testz00_12335
																																	=
																																	BgL_res5177z00_7868;
																															}
																															if (BgL_testz00_12335)
																																{

																																	goto
																																		BgL_zc3anonymousza33759ze3z83_3559;
																																}
																															else
																																{	/* Unsafe/http.scm 416 */
																																	BgL_matchz00_3666
																																		=
																																		BgL_newzd2matchzd2_3560;
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 416 */
																															bool_t
																																BgL_testz00_12339;
																															if (((long)
																																	(BgL_currentzd2charzd2_3561)
																																	==
																																	((long) 9)))
																																{	/* Unsafe/http.scm 416 */
																																	BgL_testz00_12339
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/http.scm 416 */
																																	BgL_testz00_12339
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_3561)
																																		==
																																		((long)
																																			32));
																																}
																															if (BgL_testz00_12339)
																																{	/* Unsafe/http.scm 416 */
																																	BgL_inputzd2portzd2_3566
																																		=
																																		BgL_inputzd2portzd2_3557;
																																	BgL_lastzd2matchzd2_3567
																																		=
																																		BgL_newzd2matchzd2_3560;
																																BgL_zc3anonymousza33764ze3z83_3568:
																																	{	/* Unsafe/http.scm 416 */
																																		long
																																			BgL_newzd2matchzd2_3569;
																																		RGC_STOP_MATCH
																																			(BgL_inputzd2portzd2_3566);
																																		BgL_newzd2matchzd2_3569
																																			=
																																			((long)
																																			1);
																																		{	/* Unsafe/http.scm 416 */
																																			int
																																				BgL_currentzd2charzd2_3570;
																																			BgL_currentzd2charzd2_3570
																																				=
																																				RGC_BUFFER_GET_CHAR
																																				(BgL_inputzd2portzd2_3566);
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_3570)
																																					==
																																					((long) 0)))
																																				{	/* Unsafe/http.scm 416 */
																																					bool_t
																																						BgL_testz00_12350;
																																					{	/* Unsafe/http.scm 416 */
																																						bool_t
																																							BgL_res5178z00_7881;
																																						if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3566))
																																							{	/* Unsafe/http.scm 416 */
																																								BgL_res5178z00_7881
																																									=
																																									rgc_fill_buffer
																																									(BgL_inputzd2portzd2_3566);
																																							}
																																						else
																																							{	/* Unsafe/http.scm 416 */
																																								BgL_res5178z00_7881
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						BgL_testz00_12350
																																							=
																																							BgL_res5178z00_7881;
																																					}
																																					if (BgL_testz00_12350)
																																						{

																																							goto
																																								BgL_zc3anonymousza33764ze3z83_3568;
																																						}
																																					else
																																						{	/* Unsafe/http.scm 416 */
																																							BgL_matchz00_3666
																																								=
																																								BgL_newzd2matchzd2_3569;
																																						}
																																				}
																																			else
																																				{	/* Unsafe/http.scm 416 */
																																					bool_t
																																						BgL_testz00_12354;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_3570)
																																							==
																																							((long) 9)))
																																						{	/* Unsafe/http.scm 416 */
																																							BgL_testz00_12354
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/http.scm 416 */
																																							BgL_testz00_12354
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_3570)
																																								==
																																								((long) 32));
																																						}
																																					if (BgL_testz00_12354)
																																						{
																																							long
																																								BgL_lastzd2matchzd2_12360;
																																							BgL_lastzd2matchzd2_12360
																																								=
																																								BgL_newzd2matchzd2_3569;
																																							BgL_lastzd2matchzd2_3567
																																								=
																																								BgL_lastzd2matchzd2_12360;
																																							goto
																																								BgL_zc3anonymousza33764ze3z83_3568;
																																						}
																																					else
																																						{	/* Unsafe/http.scm 416 */
																																							BgL_matchz00_3666
																																								=
																																								BgL_newzd2matchzd2_3569;
																																						}
																																				}
																																		}
																																	}
																																}
																															else
																																{	/* Unsafe/http.scm 416 */
																																	BgL_matchz00_3666
																																		=
																																		BgL_newzd2matchzd2_3560;
																																}
																														}
																												}
																											}
																										}
																									else
																										{	/* Unsafe/http.scm 416 */
																											long
																												BgL_newzd2matchzd2_7843;
																											RGC_STOP_MATCH
																												(BgL_inputzd2portzd2_3533);
																											BgL_newzd2matchzd2_7843 =
																												((long) 2);
																											BgL_matchz00_3666 =
																												BgL_newzd2matchzd2_7843;
																				}}}}
																				RGC_SET_FILEPOS
																					(BgL_inputzd2portzd2_3500);
																				switch (BgL_matchz00_3666)
																					{
																					case ((long) 2):

																						{	/* Unsafe/http.scm 416 */
																							bool_t BgL_testz00_12363;

																							{	/* Unsafe/http.scm 416 */
																								long BgL_arg3835z00_3655;

																								BgL_arg3835z00_3655 =
																									RGC_BUFFER_LENGTH
																									(BgL_inputzd2portzd2_3500);
																								BgL_testz00_12363 =
																									(BgL_arg3835z00_3655 ==
																									((long) 0));
																							}
																							if (BgL_testz00_12363)
																								{	/* Unsafe/http.scm 416 */
																									BgL_pz00_3255 = BCNST(256);
																								}
																							else
																								{	/* Unsafe/http.scm 416 */
																									BgL_pz00_3255 =
																										BCHAR(RGC_BUFFER_CHARACTER
																										(BgL_inputzd2portzd2_3500));
																								}
																						}
																						break;
																					case ((long) 1):

																						goto
																							BgL_zc3anonymousza33842ze3z83_3665;
																						break;
																					case ((long) 0):

																						BgL_pz00_3255 =
																							BINT(rgc_buffer_fixnum
																							(BgL_inputzd2portzd2_3500));
																						break;
																					default:
																						BgL_pz00_3255 =
																							BGl_errorz00zz__errorz00
																							(BGl_string5330z00zz__httpz00,
																							BGl_string5331z00zz__httpz00,
																							BINT(BgL_matchz00_3666));
																					}
																			}
																		}
																		{	/* Unsafe/http.scm 403 */

																			{	/* Unsafe/http.scm 404 */
																				int BgL_auxz00_12373;

																				BgL_auxz00_12373 = (int) (((long) 2));
																				BGL_MVALUES_NUMBER_SET
																					(BgL_auxz00_12373);
																			}
																			{	/* Unsafe/http.scm 404 */
																				int BgL_auxz00_12376;

																				BgL_auxz00_12376 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_12376,
																					BgL_pz00_3255);
																			}
																			BgL_hz00_5080 = BgL_hz00_3254;
																}}} break;
															default:
																BgL_hz00_5080 =
																	BGl_errorz00zz__errorz00
																	(BGl_string5330z00zz__httpz00,
																	BGl_string5331z00zz__httpz00,
																	BINT(BgL_matchz00_3248));
															}
													}
												}
												{	/* Unsafe/http.scm 471 */
													obj_t BgL_pz00_5081;

													{	/* Unsafe/http.scm 471 */
														int BgL_auxz00_12382;

														BgL_auxz00_12382 = (int) (((long) 1));
														BgL_pz00_5081 = BGL_MVALUES_VAL(BgL_auxz00_12382);
													}
													BgL_hostnamez00_4733 = BgL_hz00_5080;
													BgL_portz00_4734 = BgL_pz00_5081;
													BGl_crlfzd2grammarzd2zz__httpz00
														(BgL_inputzd2portzd2_4730);
													{	/* Unsafe/http.scm 467 */
														obj_t BgL_hostz00_5083;

														if (INTEGERP(BgL_pz00_5081))
															{	/* Unsafe/http.scm 468 */
																obj_t BgL_arg4554z00_5087;

																{	/* Ieee/fixnum.scm 355 */

																	BgL_arg4554z00_5087 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		((long) CINT(BgL_pz00_5081), ((long) 10));
																}
																BgL_hostz00_5083 =
																	string_append_3(BgL_hz00_5080,
																	BGl_string5400z00zz__httpz00,
																	BgL_arg4554z00_5087);
															}
														else
															{	/* Unsafe/http.scm 467 */
																BgL_hostz00_5083 = BgL_hz00_5080;
															}
														{	/* Unsafe/http.scm 470 */
															obj_t BgL_arg4551z00_5084;

															BgL_arg4551z00_5084 =
																MAKE_PAIR(BgL_kz00_5077, BgL_hostz00_5083);
															BgL_headerz00_4732 =
																MAKE_PAIR(BgL_arg4551z00_5084,
																BgL_headerz00_4732);
														}
														goto BgL_zc3anonymousza34527ze3z83_5034;
													}
												}
											}
										else
											{	/* Unsafe/http.scm 460 */
												if ((BgL_kz00_5077 == BGl_keyword5435z00zz__httpz00))
													{	/* Unsafe/http.scm 460 */
														BgL_inputzd2portzd2_3702 = BgL_inputzd2portzd2_4730;
														{
															obj_t BgL_inputzd2portzd2_3735;

															long BgL_lastzd2matchzd2_3736;

															obj_t BgL_inputzd2portzd2_3746;

															long BgL_lastzd2matchzd2_3747;

															obj_t BgL_inputzd2portzd2_3759;

															long BgL_lastzd2matchzd2_3760;

															obj_t BgL_inputzd2portzd2_3768;

															long BgL_lastzd2matchzd2_3769;

															obj_t BgL_inputzd2portzd2_3777;

															long BgL_lastzd2matchzd2_3778;

														BgL_zc3anonymousza33942ze3z83_3867:
															RGC_START_MATCH(BgL_inputzd2portzd2_3702);
															{	/* Unsafe/http.scm 421 */
																long BgL_matchz00_3868;

																BgL_inputzd2portzd2_3735 =
																	BgL_inputzd2portzd2_3702;
																BgL_lastzd2matchzd2_3736 = ((long) 2);
															BgL_zc3anonymousza33845ze3z83_3737:
																{	/* Unsafe/http.scm 421 */
																	int BgL_currentzd2charzd2_3738;

																	BgL_currentzd2charzd2_3738 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_3735);
																	if (((long) (BgL_currentzd2charzd2_3738) ==
																			((long) 0)))
																		{	/* Unsafe/http.scm 421 */
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3735))
																				{	/* Unsafe/http.scm 421 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_3735))
																						{

																							goto
																								BgL_zc3anonymousza33845ze3z83_3737;
																						}
																					else
																						{	/* Unsafe/http.scm 421 */
																							BgL_matchz00_3868 =
																								BgL_lastzd2matchzd2_3736;
																						}
																				}
																			else
																				{	/* Unsafe/http.scm 421 */
																					long BgL_newzd2matchzd2_7914;

																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_3735);
																					BgL_newzd2matchzd2_7914 = ((long) 2);
																					BgL_matchz00_3868 =
																						BgL_newzd2matchzd2_7914;
																		}}
																	else
																		{	/* Unsafe/http.scm 421 */
																			bool_t BgL_testz00_12405;

																			if (
																				((long) (BgL_currentzd2charzd2_3738) >=
																					((long) 48)))
																				{	/* Unsafe/http.scm 421 */
																					BgL_testz00_12405 =
																						(
																						(long) (BgL_currentzd2charzd2_3738)
																						< ((long) 58));
																				}
																			else
																				{	/* Unsafe/http.scm 421 */
																					BgL_testz00_12405 = ((bool_t) 0);
																				}
																			if (BgL_testz00_12405)
																				{	/* Unsafe/http.scm 421 */
																					BgL_inputzd2portzd2_3746 =
																						BgL_inputzd2portzd2_3735;
																					BgL_lastzd2matchzd2_3747 =
																						BgL_lastzd2matchzd2_3736;
																				BgL_zc3anonymousza33853ze3z83_3748:
																					{	/* Unsafe/http.scm 421 */
																						long BgL_newzd2matchzd2_3749;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_3746);
																						BgL_newzd2matchzd2_3749 =
																							((long) 0);
																						{	/* Unsafe/http.scm 421 */
																							int BgL_currentzd2charzd2_3750;

																							BgL_currentzd2charzd2_3750 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_3746);
																							if (((long)
																									(BgL_currentzd2charzd2_3750)
																									== ((long) 0)))
																								{	/* Unsafe/http.scm 421 */
																									bool_t BgL_testz00_12416;

																									{	/* Unsafe/http.scm 421 */
																										bool_t BgL_res5180z00_7936;

																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_3746))
																											{	/* Unsafe/http.scm 421 */
																												BgL_res5180z00_7936 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_3746);
																											}
																										else
																											{	/* Unsafe/http.scm 421 */
																												BgL_res5180z00_7936 =
																													((bool_t) 0);
																											}
																										BgL_testz00_12416 =
																											BgL_res5180z00_7936;
																									}
																									if (BgL_testz00_12416)
																										{

																											goto
																												BgL_zc3anonymousza33853ze3z83_3748;
																										}
																									else
																										{	/* Unsafe/http.scm 421 */
																											BgL_matchz00_3868 =
																												BgL_newzd2matchzd2_3749;
																										}
																								}
																							else
																								{	/* Unsafe/http.scm 421 */
																									bool_t BgL_testz00_12420;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_3750)
																											>= ((long) 48)))
																										{	/* Unsafe/http.scm 421 */
																											BgL_testz00_12420 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_3750)
																												< ((long) 58));
																										}
																									else
																										{	/* Unsafe/http.scm 421 */
																											BgL_testz00_12420 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_12420)
																										{	/* Unsafe/http.scm 421 */
																											BgL_inputzd2portzd2_3777 =
																												BgL_inputzd2portzd2_3746;
																											BgL_lastzd2matchzd2_3778 =
																												BgL_newzd2matchzd2_3749;
																										BgL_zc3anonymousza33869ze3z83_3779:
																											{	/* Unsafe/http.scm 421 */
																												long
																													BgL_newzd2matchzd2_3780;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_3777);
																												BgL_newzd2matchzd2_3780
																													= ((long) 0);
																												{	/* Unsafe/http.scm 421 */
																													int
																														BgL_currentzd2charzd2_3781;
																													BgL_currentzd2charzd2_3781
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_3777);
																													if (((long)
																															(BgL_currentzd2charzd2_3781)
																															== ((long) 0)))
																														{	/* Unsafe/http.scm 421 */
																															bool_t
																																BgL_testz00_12431;
																															{	/* Unsafe/http.scm 421 */
																																bool_t
																																	BgL_res5183z00_7977;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3777))
																																	{	/* Unsafe/http.scm 421 */
																																		BgL_res5183z00_7977
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_3777);
																																	}
																																else
																																	{	/* Unsafe/http.scm 421 */
																																		BgL_res5183z00_7977
																																			=
																																			((bool_t)
																																			0);
																																	}
																																BgL_testz00_12431
																																	=
																																	BgL_res5183z00_7977;
																															}
																															if (BgL_testz00_12431)
																																{

																																	goto
																																		BgL_zc3anonymousza33869ze3z83_3779;
																																}
																															else
																																{	/* Unsafe/http.scm 421 */
																																	BgL_matchz00_3868
																																		=
																																		BgL_newzd2matchzd2_3780;
																																}
																														}
																													else
																														{	/* Unsafe/http.scm 421 */
																															bool_t
																																BgL_testz00_12435;
																															if (((long)
																																	(BgL_currentzd2charzd2_3781)
																																	>=
																																	((long) 48)))
																																{	/* Unsafe/http.scm 421 */
																																	BgL_testz00_12435
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_3781)
																																		<
																																		((long)
																																			58));
																																}
																															else
																																{	/* Unsafe/http.scm 421 */
																																	BgL_testz00_12435
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_testz00_12435)
																																{
																																	long
																																		BgL_lastzd2matchzd2_12441;
																																	BgL_lastzd2matchzd2_12441
																																		=
																																		BgL_newzd2matchzd2_3780;
																																	BgL_lastzd2matchzd2_3778
																																		=
																																		BgL_lastzd2matchzd2_12441;
																																	goto
																																		BgL_zc3anonymousza33869ze3z83_3779;
																																}
																															else
																																{	/* Unsafe/http.scm 421 */
																																	BgL_matchz00_3868
																																		=
																																		BgL_newzd2matchzd2_3780;
																																}
																														}
																												}
																											}
																										}
																									else
																										{	/* Unsafe/http.scm 421 */
																											BgL_matchz00_3868 =
																												BgL_newzd2matchzd2_3749;
																										}
																								}
																						}
																					}
																				}
																			else
																				{	/* Unsafe/http.scm 421 */
																					bool_t BgL_testz00_12442;

																					if (
																						((long) (BgL_currentzd2charzd2_3738)
																							== ((long) 9)))
																						{	/* Unsafe/http.scm 421 */
																							BgL_testz00_12442 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/http.scm 421 */
																							BgL_testz00_12442 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_3738) ==
																								((long) 32));
																						}
																					if (BgL_testz00_12442)
																						{	/* Unsafe/http.scm 421 */
																							BgL_inputzd2portzd2_3759 =
																								BgL_inputzd2portzd2_3735;
																							BgL_lastzd2matchzd2_3760 =
																								BgL_lastzd2matchzd2_3736;
																						BgL_zc3anonymousza33859ze3z83_3761:
																							{	/* Unsafe/http.scm 421 */
																								long BgL_newzd2matchzd2_3762;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_3759);
																								BgL_newzd2matchzd2_3762 =
																									((long) 1);
																								{	/* Unsafe/http.scm 421 */
																									int
																										BgL_currentzd2charzd2_3763;
																									BgL_currentzd2charzd2_3763 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_3759);
																									if (((long)
																											(BgL_currentzd2charzd2_3763)
																											== ((long) 0)))
																										{	/* Unsafe/http.scm 421 */
																											bool_t BgL_testz00_12453;

																											{	/* Unsafe/http.scm 421 */
																												bool_t
																													BgL_res5181z00_7951;
																												if (RGC_BUFFER_EMPTY
																													(BgL_inputzd2portzd2_3759))
																													{	/* Unsafe/http.scm 421 */
																														BgL_res5181z00_7951
																															=
																															rgc_fill_buffer
																															(BgL_inputzd2portzd2_3759);
																													}
																												else
																													{	/* Unsafe/http.scm 421 */
																														BgL_res5181z00_7951
																															= ((bool_t) 0);
																													}
																												BgL_testz00_12453 =
																													BgL_res5181z00_7951;
																											}
																											if (BgL_testz00_12453)
																												{

																													goto
																														BgL_zc3anonymousza33859ze3z83_3761;
																												}
																											else
																												{	/* Unsafe/http.scm 421 */
																													BgL_matchz00_3868 =
																														BgL_newzd2matchzd2_3762;
																												}
																										}
																									else
																										{	/* Unsafe/http.scm 421 */
																											bool_t BgL_testz00_12457;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_3763)
																													== ((long) 9)))
																												{	/* Unsafe/http.scm 421 */
																													BgL_testz00_12457 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/http.scm 421 */
																													BgL_testz00_12457 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_3763)
																														== ((long) 32));
																												}
																											if (BgL_testz00_12457)
																												{	/* Unsafe/http.scm 421 */
																													BgL_inputzd2portzd2_3768
																														=
																														BgL_inputzd2portzd2_3759;
																													BgL_lastzd2matchzd2_3769
																														=
																														BgL_newzd2matchzd2_3762;
																												BgL_zc3anonymousza33864ze3z83_3770:
																													{	/* Unsafe/http.scm 421 */
																														long
																															BgL_newzd2matchzd2_3771;
																														RGC_STOP_MATCH
																															(BgL_inputzd2portzd2_3768);
																														BgL_newzd2matchzd2_3771
																															= ((long) 1);
																														{	/* Unsafe/http.scm 421 */
																															int
																																BgL_currentzd2charzd2_3772;
																															BgL_currentzd2charzd2_3772
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_3768);
																															if (((long)
																																	(BgL_currentzd2charzd2_3772)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/http.scm 421 */
																																	bool_t
																																		BgL_testz00_12468;
																																	{	/* Unsafe/http.scm 421 */
																																		bool_t
																																			BgL_res5182z00_7964;
																																		if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3768))
																																			{	/* Unsafe/http.scm 421 */
																																				BgL_res5182z00_7964
																																					=
																																					rgc_fill_buffer
																																					(BgL_inputzd2portzd2_3768);
																																			}
																																		else
																																			{	/* Unsafe/http.scm 421 */
																																				BgL_res5182z00_7964
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		BgL_testz00_12468
																																			=
																																			BgL_res5182z00_7964;
																																	}
																																	if (BgL_testz00_12468)
																																		{

																																			goto
																																				BgL_zc3anonymousza33864ze3z83_3770;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 421 */
																																			BgL_matchz00_3868
																																				=
																																				BgL_newzd2matchzd2_3771;
																																		}
																																}
																															else
																																{	/* Unsafe/http.scm 421 */
																																	bool_t
																																		BgL_testz00_12472;
																																	if (((long)
																																			(BgL_currentzd2charzd2_3772)
																																			==
																																			((long)
																																				9)))
																																		{	/* Unsafe/http.scm 421 */
																																			BgL_testz00_12472
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/http.scm 421 */
																																			BgL_testz00_12472
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_3772)
																																				==
																																				((long)
																																					32));
																																		}
																																	if (BgL_testz00_12472)
																																		{
																																			long
																																				BgL_lastzd2matchzd2_12478;
																																			BgL_lastzd2matchzd2_12478
																																				=
																																				BgL_newzd2matchzd2_3771;
																																			BgL_lastzd2matchzd2_3769
																																				=
																																				BgL_lastzd2matchzd2_12478;
																																			goto
																																				BgL_zc3anonymousza33864ze3z83_3770;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 421 */
																																			BgL_matchz00_3868
																																				=
																																				BgL_newzd2matchzd2_3771;
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Unsafe/http.scm 421 */
																													BgL_matchz00_3868 =
																														BgL_newzd2matchzd2_3762;
																												}
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/http.scm 421 */
																							long BgL_newzd2matchzd2_7926;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_3735);
																							BgL_newzd2matchzd2_7926 =
																								((long) 2);
																							BgL_matchz00_3868 =
																								BgL_newzd2matchzd2_7926;
																}}}}
																RGC_SET_FILEPOS(BgL_inputzd2portzd2_3702);
																switch (BgL_matchz00_3868)
																	{
																	case ((long) 2):

																		{	/* Unsafe/http.scm 421 */
																			bool_t BgL_testz00_12481;

																			{	/* Unsafe/http.scm 421 */
																				long BgL_arg3935z00_3857;

																				BgL_arg3935z00_3857 =
																					RGC_BUFFER_LENGTH
																					(BgL_inputzd2portzd2_3702);
																				BgL_testz00_12481 =
																					(BgL_arg3935z00_3857 == ((long) 0));
																			}
																			if (BgL_testz00_12481)
																				{	/* Unsafe/http.scm 421 */
																					BgL_contentzd2lengthzd2_4735 =
																						BCNST(256);
																				}
																			else
																				{	/* Unsafe/http.scm 421 */
																					BgL_contentzd2lengthzd2_4735 =
																						BCHAR(RGC_BUFFER_CHARACTER
																						(BgL_inputzd2portzd2_3702));
																				}
																		}
																		break;
																	case ((long) 1):

																		goto BgL_zc3anonymousza33942ze3z83_3867;
																		break;
																	case ((long) 0):

																		{	/* Unsafe/http.scm 422 */
																			long BgL_arg3944z00_3872;

																			BgL_arg3944z00_3872 =
																				rgc_buffer_fixnum
																				(BgL_inputzd2portzd2_3702);
																			{	/* Unsafe/http.scm 422 */
																				long BgL_auxz00_12487;

																				BgL_auxz00_12487 =
																					LONG_TO_ELONG(BgL_arg3944z00_3872);
																				BgL_contentzd2lengthzd2_4735 =
																					make_belong(BgL_auxz00_12487);
																		}} break;
																	default:
																		BgL_contentzd2lengthzd2_4735 =
																			BGl_errorz00zz__errorz00
																			(BGl_string5330z00zz__httpz00,
																			BGl_string5331z00zz__httpz00,
																			BINT(BgL_matchz00_3868));
																	}
															}
														}
														BgL_inputzd2portzd2_4526 = BgL_inputzd2portzd2_4730;
														{
															obj_t BgL_inputzd2portzd2_4564;

															long BgL_lastzd2matchzd2_4565;

															obj_t BgL_inputzd2portzd2_4572;

															long BgL_lastzd2matchzd2_4573;

															obj_t BgL_inputzd2portzd2_4582;

															long BgL_lastzd2matchzd2_4583;

															obj_t BgL_inputzd2portzd2_4591;

															long BgL_lastzd2matchzd2_4592;

															obj_t BgL_inputzd2portzd2_4604;

															long BgL_lastzd2matchzd2_4605;

															RGC_START_MATCH(BgL_inputzd2portzd2_4526);
															{	/* Unsafe/http.scm 447 */
																long BgL_matchz00_4693;

																BgL_inputzd2portzd2_4591 =
																	BgL_inputzd2portzd2_4526;
																BgL_lastzd2matchzd2_4592 = ((long) 1);
															BgL_zc3anonymousza34268ze3z83_4593:
																{	/* Unsafe/http.scm 447 */
																	int BgL_currentzd2charzd2_4594;

																	BgL_currentzd2charzd2_4594 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_4591);
																	switch ((long) (BgL_currentzd2charzd2_4594))
																		{
																		case ((long) 0):

																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_4591))
																				{	/* Unsafe/http.scm 447 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_4591))
																						{

																							goto
																								BgL_zc3anonymousza34268ze3z83_4593;
																						}
																					else
																						{	/* Unsafe/http.scm 447 */
																							BgL_matchz00_4693 =
																								BgL_lastzd2matchzd2_4592;
																						}
																				}
																			else
																				{	/* Unsafe/http.scm 447 */
																					BgL_inputzd2portzd2_4572 =
																						BgL_inputzd2portzd2_4591;
																					BgL_lastzd2matchzd2_4573 =
																						BgL_lastzd2matchzd2_4592;
																				BgL_zc3anonymousza34260ze3z83_4574:
																					{	/* Unsafe/http.scm 447 */
																						long BgL_newzd2matchzd2_4575;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_4572);
																						BgL_newzd2matchzd2_4575 =
																							((long) 1);
																						{	/* Unsafe/http.scm 447 */
																							int BgL_currentzd2charzd2_4576;

																							BgL_currentzd2charzd2_4576 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_4572);
																							switch ((long)
																								(BgL_currentzd2charzd2_4576))
																								{
																								case ((long) 0):

																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_4572))
																										{	/* Unsafe/http.scm 447 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_4572))
																												{

																													goto
																														BgL_zc3anonymousza34260ze3z83_4574;
																												}
																											else
																												{	/* Unsafe/http.scm 447 */
																													BgL_matchz00_4693 =
																														BgL_newzd2matchzd2_4575;
																												}
																										}
																									else
																										{	/* Unsafe/http.scm 447 */
																											BgL_inputzd2portzd2_4582 =
																												BgL_inputzd2portzd2_4572;
																											BgL_lastzd2matchzd2_4583 =
																												BgL_newzd2matchzd2_4575;
																										BgL_zc3anonymousza34264ze3z83_4584:
																											{	/* Unsafe/http.scm 447 */
																												int
																													BgL_currentzd2charzd2_4585;
																												BgL_currentzd2charzd2_4585
																													=
																													RGC_BUFFER_GET_CHAR
																													(BgL_inputzd2portzd2_4582);
																												switch ((long)
																													(BgL_currentzd2charzd2_4585))
																													{
																													case ((long) 0):

																														if (RGC_BUFFER_EMPTY
																															(BgL_inputzd2portzd2_4582))
																															{	/* Unsafe/http.scm 447 */
																																if (rgc_fill_buffer(BgL_inputzd2portzd2_4582))
																																	{

																																		goto
																																			BgL_zc3anonymousza34264ze3z83_4584;
																																	}
																																else
																																	{	/* Unsafe/http.scm 447 */
																																		BgL_matchz00_4693
																																			=
																																			BgL_lastzd2matchzd2_4583;
																																	}
																															}
																														else
																															{

																																goto
																																	BgL_zc3anonymousza34264ze3z83_4584;
																															}
																														break;
																													case ((long) 13):

																														BgL_inputzd2portzd2_4604 = BgL_inputzd2portzd2_4582;
																														BgL_lastzd2matchzd2_4605
																															=
																															BgL_lastzd2matchzd2_4583;
																													BgL_zc3anonymousza34273ze3z83_4606:
																														{	/* Unsafe/http.scm 447 */
																															int
																																BgL_currentzd2charzd2_4607;
																															BgL_currentzd2charzd2_4607
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_4604);
																															if (((long)
																																	(BgL_currentzd2charzd2_4607)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/http.scm 447 */
																																	bool_t
																																		BgL_testz00_12514;
																																	{	/* Unsafe/http.scm 447 */
																																		bool_t
																																			BgL_res5198z00_8316;
																																		if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4604))
																																			{	/* Unsafe/http.scm 447 */
																																				BgL_res5198z00_8316
																																					=
																																					rgc_fill_buffer
																																					(BgL_inputzd2portzd2_4604);
																																			}
																																		else
																																			{	/* Unsafe/http.scm 447 */
																																				BgL_res5198z00_8316
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		BgL_testz00_12514
																																			=
																																			BgL_res5198z00_8316;
																																	}
																																	if (BgL_testz00_12514)
																																		{

																																			goto
																																				BgL_zc3anonymousza34273ze3z83_4606;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 447 */
																																			BgL_matchz00_4693
																																				=
																																				BgL_lastzd2matchzd2_4605;
																																		}
																																}
																															else
																																{	/* Unsafe/http.scm 447 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_4607)
																																			==
																																			((long)
																																				10)))
																																		{	/* Unsafe/http.scm 447 */
																																			long
																																				BgL_newzd2matchzd2_8321;
																																			RGC_STOP_MATCH
																																				(BgL_inputzd2portzd2_4604);
																																			BgL_newzd2matchzd2_8321
																																				=
																																				((long)
																																				0);
																																			BgL_matchz00_4693
																																				=
																																				BgL_newzd2matchzd2_8321;
																																		}
																																	else
																																		{	/* Unsafe/http.scm 447 */
																																			BgL_matchz00_4693
																																				=
																																				BgL_lastzd2matchzd2_4605;
																																		}
																																}
																														}
																														break;
																													case ((long) 10):

																														{	/* Unsafe/http.scm 447 */
																															long
																																BgL_newzd2matchzd2_8298;
																															RGC_STOP_MATCH
																																(BgL_inputzd2portzd2_4582);
																															BgL_newzd2matchzd2_8298
																																= ((long) 0);
																															BgL_matchz00_4693
																																=
																																BgL_newzd2matchzd2_8298;
																														} break;
																													default:
																														{

																															goto
																																BgL_zc3anonymousza34264ze3z83_4584;
																														}
																													}
																											}
																										}
																									break;
																								case ((long) 13):

																									{
																										long
																											BgL_lastzd2matchzd2_12526;
																										obj_t
																											BgL_inputzd2portzd2_12525;
																										BgL_inputzd2portzd2_12525 =
																											BgL_inputzd2portzd2_4572;
																										BgL_lastzd2matchzd2_12526 =
																											BgL_newzd2matchzd2_4575;
																										BgL_lastzd2matchzd2_4605 =
																											BgL_lastzd2matchzd2_12526;
																										BgL_inputzd2portzd2_4604 =
																											BgL_inputzd2portzd2_12525;
																										goto
																											BgL_zc3anonymousza34273ze3z83_4606;
																									}
																									break;
																								case ((long) 10):

																									{	/* Unsafe/http.scm 447 */
																										long
																											BgL_newzd2matchzd2_8291;
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_4572);
																										BgL_newzd2matchzd2_8291 =
																											((long) 0);
																										BgL_matchz00_4693 =
																											BgL_newzd2matchzd2_8291;
																									} break;
																								default:
																									{
																										long
																											BgL_lastzd2matchzd2_12529;
																										obj_t
																											BgL_inputzd2portzd2_12528;
																										BgL_inputzd2portzd2_12528 =
																											BgL_inputzd2portzd2_4572;
																										BgL_lastzd2matchzd2_12529 =
																											BgL_newzd2matchzd2_4575;
																										BgL_lastzd2matchzd2_4583 =
																											BgL_lastzd2matchzd2_12529;
																										BgL_inputzd2portzd2_4582 =
																											BgL_inputzd2portzd2_12528;
																										goto
																											BgL_zc3anonymousza34264ze3z83_4584;
																									}
																								}
																						}
																					}
																				}
																			break;
																		case ((long) 13):

																			BgL_inputzd2portzd2_4564 =
																				BgL_inputzd2portzd2_4591;
																			BgL_lastzd2matchzd2_4565 =
																				BgL_lastzd2matchzd2_4592;
																		BgL_zc3anonymousza34256ze3z83_4566:
																			{	/* Unsafe/http.scm 447 */
																				long BgL_newzd2matchzd2_4567;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_4564);
																				BgL_newzd2matchzd2_4567 = ((long) 1);
																				{	/* Unsafe/http.scm 447 */
																					int BgL_currentzd2charzd2_4568;

																					BgL_currentzd2charzd2_4568 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_4564);
																					if (((long)
																							(BgL_currentzd2charzd2_4568) ==
																							((long) 0)))
																						{	/* Unsafe/http.scm 447 */
																							bool_t BgL_testz00_12537;

																							{	/* Unsafe/http.scm 447 */
																								bool_t BgL_res5197z00_8278;

																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_4564))
																									{	/* Unsafe/http.scm 447 */
																										BgL_res5197z00_8278 =
																											rgc_fill_buffer
																											(BgL_inputzd2portzd2_4564);
																									}
																								else
																									{	/* Unsafe/http.scm 447 */
																										BgL_res5197z00_8278 =
																											((bool_t) 0);
																									}
																								BgL_testz00_12537 =
																									BgL_res5197z00_8278;
																							}
																							if (BgL_testz00_12537)
																								{

																									goto
																										BgL_zc3anonymousza34256ze3z83_4566;
																								}
																							else
																								{	/* Unsafe/http.scm 447 */
																									BgL_matchz00_4693 =
																										BgL_newzd2matchzd2_4567;
																								}
																						}
																					else
																						{	/* Unsafe/http.scm 447 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_4568)
																									== ((long) 10)))
																								{	/* Unsafe/http.scm 447 */
																									long BgL_newzd2matchzd2_8283;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_4564);
																									BgL_newzd2matchzd2_8283 =
																										((long) 0);
																									BgL_matchz00_4693 =
																										BgL_newzd2matchzd2_8283;
																								}
																							else
																								{	/* Unsafe/http.scm 447 */
																									BgL_matchz00_4693 =
																										BgL_newzd2matchzd2_4567;
																								}
																						}
																				}
																			}
																			break;
																		case ((long) 10):

																			{	/* Unsafe/http.scm 447 */
																				long BgL_newzd2matchzd2_8305;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_4591);
																				BgL_newzd2matchzd2_8305 = ((long) 0);
																				BgL_matchz00_4693 =
																					BgL_newzd2matchzd2_8305;
																			} break;
																		default:
																			{
																				long BgL_lastzd2matchzd2_12547;

																				obj_t BgL_inputzd2portzd2_12546;

																				BgL_inputzd2portzd2_12546 =
																					BgL_inputzd2portzd2_4591;
																				BgL_lastzd2matchzd2_12547 =
																					BgL_lastzd2matchzd2_4592;
																				BgL_lastzd2matchzd2_4573 =
																					BgL_lastzd2matchzd2_12547;
																				BgL_inputzd2portzd2_4572 =
																					BgL_inputzd2portzd2_12546;
																				goto BgL_zc3anonymousza34260ze3z83_4574;
																			}
																		}
																}
																RGC_SET_FILEPOS(BgL_inputzd2portzd2_4526);
																switch (BgL_matchz00_4693)
																	{
																	case ((long) 1):
																		BFALSE;
																		break;
																	case ((long) 0):
																		BUNSPEC;
																		break;
																	default:
																		BGl_errorz00zz__errorz00
																			(BGl_string5330z00zz__httpz00,
																			BGl_string5331z00zz__httpz00,
																			BINT(BgL_matchz00_4693));
																	}
															}
														}
														{	/* Unsafe/http.scm 479 */
															obj_t BgL_arg4560z00_5094;

															BgL_arg4560z00_5094 =
																MAKE_PAIR(BgL_kz00_5077,
																BgL_contentzd2lengthzd2_4735);
															BgL_headerz00_4732 =
																MAKE_PAIR(BgL_arg4560z00_5094,
																BgL_headerz00_4732);
														}
														goto BgL_zc3anonymousza34527ze3z83_5034;
													}
												else
													{	/* Unsafe/http.scm 460 */
														if (
															(BgL_kz00_5077 == BGl_keyword5437z00zz__httpz00))
															{	/* Unsafe/http.scm 460 */
																BgL_transferzd2encodingzd2_4736 =
																	BGl_symbolzd2grammarzd2zz__httpz00
																	(BgL_inputzd2portzd2_4730);
																BGl_crlfzd2grammarzd2zz__httpz00
																	(BgL_inputzd2portzd2_4730);
																{	/* Unsafe/http.scm 484 */
																	obj_t BgL_arg4564z00_5098;

																	BgL_arg4564z00_5098 =
																		MAKE_PAIR(BgL_kz00_5077,
																		BgL_transferzd2encodingzd2_4736);
																	BgL_headerz00_4732 =
																		MAKE_PAIR(BgL_arg4564z00_5098,
																		BgL_headerz00_4732);
																}
																goto BgL_zc3anonymousza34527ze3z83_5034;
															}
														else
															{	/* Unsafe/http.scm 460 */
																if (
																	(BgL_kz00_5077 ==
																		BGl_keyword5358z00zz__httpz00))
																	{	/* Unsafe/http.scm 460 */
																		BgL_authoriza7ationza7_4737 =
																			BGl_authzd2grammarzd2zz__httpz00
																			(BgL_inputzd2portzd2_4730);
																		BGl_crlfzd2grammarzd2zz__httpz00
																			(BgL_inputzd2portzd2_4730);
																		{	/* Unsafe/http.scm 489 */
																			obj_t BgL_arg4568z00_5102;

																			BgL_arg4568z00_5102 =
																				MAKE_PAIR(BgL_kz00_5077,
																				BgL_authoriza7ationza7_4737);
																			BgL_headerz00_4732 =
																				MAKE_PAIR(BgL_arg4568z00_5102,
																				BgL_headerz00_4732);
																		}
																		goto BgL_zc3anonymousza34527ze3z83_5034;
																	}
																else
																	{	/* Unsafe/http.scm 460 */
																		if (
																			(BgL_kz00_5077 ==
																				BGl_keyword5362z00zz__httpz00))
																			{	/* Unsafe/http.scm 460 */
																				BgL_connectionz00_4739 =
																					BGl_symbolzd2grammarzd2zz__httpz00
																					(BgL_inputzd2portzd2_4730);
																				BGl_httpzd2skipzd2linez00zz__httpz00
																					(BgL_inputzd2portzd2_4730);
																				{	/* Unsafe/http.scm 494 */
																					obj_t BgL_arg4572z00_5106;

																					BgL_arg4572z00_5106 =
																						MAKE_PAIR(BgL_kz00_5077,
																						BgL_connectionz00_4739);
																					BgL_headerz00_4732 =
																						MAKE_PAIR(BgL_arg4572z00_5106,
																						BgL_headerz00_4732);
																				}
																				goto BgL_zc3anonymousza34527ze3z83_5034;
																			}
																		else
																			{	/* Unsafe/http.scm 460 */
																				if (
																					(BgL_kz00_5077 ==
																						BGl_keyword5439z00zz__httpz00))
																					{	/* Unsafe/http.scm 460 */
																						BgL_proxyzd2authoriza7ationz75_4738
																							=
																							BGl_authzd2grammarzd2zz__httpz00
																							(BgL_inputzd2portzd2_4730);
																						BGl_crlfzd2grammarzd2zz__httpz00
																							(BgL_inputzd2portzd2_4730);
																						goto
																							BgL_zc3anonymousza34527ze3z83_5034;
																					}
																				else
																					{	/* Unsafe/http.scm 460 */
																						if (
																							(BgL_kz00_5077 ==
																								BGl_keyword5441z00zz__httpz00))
																							{	/* Unsafe/http.scm 502 */
																								obj_t BgL_ez00_5111;

																								BgL_ez00_5111 =
																									BGl_valuezd2grammarzd2zz__httpz00
																									(BgL_inputzd2portzd2_4730);
																								if (bigloo_strcmp(BgL_ez00_5111,
																										BGl_string5443z00zz__httpz00))
																									{	/* Unsafe/http.scm 508 */
																										bgl_display_string
																											(BGl_string5444z00zz__httpz00,
																											BgL_poz00_4731);
																										bgl_display_char(((unsigned
																													char) '\n'),
																											BgL_poz00_4731);
																										FLUSH_OUTPUT_PORT
																											(BgL_poz00_4731);
																										goto
																											BgL_zc3anonymousza34527ze3z83_5034;
																									}
																								else
																									{	/* Unsafe/http.scm 508 */
																										bgl_display_string
																											(BGl_string5445z00zz__httpz00,
																											BgL_poz00_4731);
																										bgl_display_char(((unsigned
																													char) '\n'),
																											BgL_poz00_4731);
																										FLUSH_OUTPUT_PORT
																											(BgL_poz00_4731);
																										{	/* Llib/object.scm 90 */
																											BgL_z62iozd2parsezd2errorz62_bglt
																												BgL_arg4580z00_5116;
																											{	/* Llib/object.scm 90 */
																												obj_t
																													BgL_arg4581z00_5117;
																												obj_t
																													BgL_arg4582z00_5118;
																												obj_t
																													BgL_arg4583z00_5119;
																												{	/* Llib/object.scm 90 */

																													{	/* Llib/object.scm 90 */

																														BgL_arg4581z00_5117
																															=
																															BGl_getzd2tracezd2stackz00zz__errorz00
																															(BFALSE);
																												}}
																												BgL_arg4582z00_5118 =
																													BGl_symbol5446z00zz__httpz00;
																												{	/* Unsafe/http.scm 519 */
																													obj_t
																														BgL_list4585z00_5122;
																													BgL_list4585z00_5122 =
																														MAKE_PAIR
																														(BgL_ez00_5111,
																														BNIL);
																													BgL_arg4583z00_5119 =
																														BGl_formatz00zz__r4_output_6_10_3z00
																														(BGl_string5448z00zz__httpz00,
																														BgL_list4585z00_5122);
																												}
																												BgL_arg4580z00_5116 =
																													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																													(BFALSE, BFALSE,
																													BgL_arg4581z00_5117,
																													BgL_arg4582z00_5118,
																													BgL_arg4583z00_5119,
																													BgL_inputzd2portzd2_4730);
																											}
																											return
																												BGl_raisez00zz__errorz00
																												((obj_t)
																												(BgL_arg4580z00_5116));
																										}
																									}
																							}
																						else
																							{	/* Unsafe/http.scm 521 */
																								obj_t BgL_vz00_5124;

																								BgL_vz00_5124 =
																									BGl_valuezd2grammarzd2zz__httpz00
																									(BgL_inputzd2portzd2_4730);
																								{	/* Unsafe/http.scm 522 */
																									obj_t BgL_arg4587z00_5125;

																									BgL_arg4587z00_5125 =
																										MAKE_PAIR(BgL_kz00_5077,
																										BgL_vz00_5124);
																									BgL_headerz00_4732 =
																										MAKE_PAIR
																										(BgL_arg4587z00_5125,
																										BgL_headerz00_4732);
																								}
																								goto
																									BgL_zc3anonymousza34527ze3z83_5034;
																							}
																					}
																			}
																	}
															}
													}
											}
									}
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
									BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_5035));
							}
					}
				}
			}
		}
	}



/* the-failure */
	obj_t BGl_thezd2failurezd2zz__httpz00(obj_t BgL_inputzd2portzd2_9731)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 454 */
			{	/* Unsafe/http.scm 454 */
				bool_t BgL_testz00_12601;

				{	/* Unsafe/http.scm 454 */
					long BgL_arg4520z00_5024;

					BgL_arg4520z00_5024 = RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_9731);
					BgL_testz00_12601 = (BgL_arg4520z00_5024 == ((long) 0));
				}
				if (BgL_testz00_12601)
					{	/* Unsafe/http.scm 454 */
						return BCNST(256);
					}
				else
					{	/* Unsafe/http.scm 454 */
						return BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_9731));
					}
			}
		}
	}



/* value-grammar */
	obj_t BGl_valuezd2grammarzd2zz__httpz00(obj_t BgL_inputzd2portzd2_2647)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 383 */
			{
				obj_t BgL_inputzd2portzd2_2685;

				long BgL_lastzd2matchzd2_2686;

				obj_t BgL_inputzd2portzd2_2693;

				long BgL_lastzd2matchzd2_2694;

				obj_t BgL_inputzd2portzd2_2706;

				long BgL_lastzd2matchzd2_2707;

				obj_t BgL_inputzd2portzd2_2718;

				long BgL_lastzd2matchzd2_2719;

				obj_t BgL_inputzd2portzd2_2733;

				long BgL_lastzd2matchzd2_2734;

				obj_t BgL_inputzd2portzd2_2742;

				long BgL_lastzd2matchzd2_2743;

				obj_t BgL_inputzd2portzd2_2752;

				long BgL_lastzd2matchzd2_2753;

				int BgL_minz00_2776;

				int BgL_maxz00_2777;

			BgL_zc3anonymousza33436ze3z83_2846:
				RGC_START_MATCH(BgL_inputzd2portzd2_2647);
				{	/* Unsafe/http.scm 383 */
					long BgL_matchz00_2847;

					BgL_inputzd2portzd2_2718 = BgL_inputzd2portzd2_2647;
					BgL_lastzd2matchzd2_2719 = ((long) 4);
				BgL_zc3anonymousza33343ze3z83_2720:
					{	/* Unsafe/http.scm 383 */
						int BgL_currentzd2charzd2_2721;

						BgL_currentzd2charzd2_2721 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2718);
						if (((long) (BgL_currentzd2charzd2_2721) == ((long) 0)))
							{	/* Unsafe/http.scm 383 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2718))
									{	/* Unsafe/http.scm 383 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_2718))
											{

												goto BgL_zc3anonymousza33343ze3z83_2720;
											}
										else
											{	/* Unsafe/http.scm 383 */
												BgL_matchz00_2847 = BgL_lastzd2matchzd2_2719;
											}
									}
								else
									{	/* Unsafe/http.scm 383 */
										BgL_inputzd2portzd2_2742 = BgL_inputzd2portzd2_2718;
										BgL_lastzd2matchzd2_2743 = BgL_lastzd2matchzd2_2719;
									BgL_zc3anonymousza33357ze3z83_2744:
										{	/* Unsafe/http.scm 383 */
											long BgL_newzd2matchzd2_2745;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2742);
											BgL_newzd2matchzd2_2745 = ((long) 4);
											{	/* Unsafe/http.scm 383 */
												int BgL_currentzd2charzd2_2746;

												BgL_currentzd2charzd2_2746 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2742);
												switch ((long) (BgL_currentzd2charzd2_2746))
													{
													case ((long) 0):

														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2742))
															{	/* Unsafe/http.scm 383 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_2742))
																	{

																		goto BgL_zc3anonymousza33357ze3z83_2744;
																	}
																else
																	{	/* Unsafe/http.scm 383 */
																		BgL_matchz00_2847 = BgL_newzd2matchzd2_2745;
																	}
															}
														else
															{	/* Unsafe/http.scm 383 */
																BgL_inputzd2portzd2_2693 =
																	BgL_inputzd2portzd2_2742;
																BgL_lastzd2matchzd2_2694 =
																	BgL_newzd2matchzd2_2745;
															BgL_zc3anonymousza33333ze3z83_2695:
																{	/* Unsafe/http.scm 383 */
																	int BgL_currentzd2charzd2_2696;

																	BgL_currentzd2charzd2_2696 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_2693);
																	switch ((long) (BgL_currentzd2charzd2_2696))
																		{
																		case ((long) 0):

																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_2693))
																				{	/* Unsafe/http.scm 383 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_2693))
																						{

																							goto
																								BgL_zc3anonymousza33333ze3z83_2695;
																						}
																					else
																						{	/* Unsafe/http.scm 383 */
																							BgL_matchz00_2847 =
																								BgL_lastzd2matchzd2_2694;
																						}
																				}
																			else
																				{

																					goto
																						BgL_zc3anonymousza33333ze3z83_2695;
																				}
																			break;
																		case ((long) 13):

																			BgL_inputzd2portzd2_2685 =
																				BgL_inputzd2portzd2_2693;
																			BgL_lastzd2matchzd2_2686 =
																				BgL_lastzd2matchzd2_2694;
																		BgL_zc3anonymousza33328ze3z83_2687:
																			{	/* Unsafe/http.scm 383 */
																				int BgL_currentzd2charzd2_2688;

																				BgL_currentzd2charzd2_2688 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_2685);
																				if (((long) (BgL_currentzd2charzd2_2688)
																						== ((long) 0)))
																					{	/* Unsafe/http.scm 383 */
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_2685))
																							{	/* Unsafe/http.scm 383 */
																								if (rgc_fill_buffer
																									(BgL_inputzd2portzd2_2685))
																									{

																										goto
																											BgL_zc3anonymousza33328ze3z83_2687;
																									}
																								else
																									{	/* Unsafe/http.scm 383 */
																										BgL_matchz00_2847 =
																											BgL_lastzd2matchzd2_2686;
																									}
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_12635;

																								obj_t BgL_inputzd2portzd2_12634;

																								BgL_inputzd2portzd2_12634 =
																									BgL_inputzd2portzd2_2685;
																								BgL_lastzd2matchzd2_12635 =
																									BgL_lastzd2matchzd2_2686;
																								BgL_lastzd2matchzd2_2694 =
																									BgL_lastzd2matchzd2_12635;
																								BgL_inputzd2portzd2_2693 =
																									BgL_inputzd2portzd2_12634;
																								goto
																									BgL_zc3anonymousza33333ze3z83_2695;
																							}
																					}
																				else
																					{	/* Unsafe/http.scm 383 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_2688) ==
																								((long) 10)))
																							{	/* Unsafe/http.scm 383 */
																								long BgL_newzd2matchzd2_7559;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_2685);
																								BgL_newzd2matchzd2_7559 =
																									((long) 1);
																								BgL_matchz00_2847 =
																									BgL_newzd2matchzd2_7559;
																							}
																						else
																							{
																								long BgL_lastzd2matchzd2_12641;

																								obj_t BgL_inputzd2portzd2_12640;

																								BgL_inputzd2portzd2_12640 =
																									BgL_inputzd2portzd2_2685;
																								BgL_lastzd2matchzd2_12641 =
																									BgL_lastzd2matchzd2_2686;
																								BgL_lastzd2matchzd2_2694 =
																									BgL_lastzd2matchzd2_12641;
																								BgL_inputzd2portzd2_2693 =
																									BgL_inputzd2portzd2_12640;
																								goto
																									BgL_zc3anonymousza33333ze3z83_2695;
																							}
																					}
																			}
																			break;
																		case ((long) 10):

																			{	/* Unsafe/http.scm 383 */
																				long BgL_newzd2matchzd2_7566;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_2693);
																				BgL_newzd2matchzd2_7566 = ((long) 2);
																				BgL_matchz00_2847 =
																					BgL_newzd2matchzd2_7566;
																			} break;
																		default:
																			{

																				goto BgL_zc3anonymousza33333ze3z83_2695;
																			}
																		}
																}
															}
														break;
													case ((long) 13):

														{
															long BgL_lastzd2matchzd2_12646;

															obj_t BgL_inputzd2portzd2_12645;

															BgL_inputzd2portzd2_12645 =
																BgL_inputzd2portzd2_2742;
															BgL_lastzd2matchzd2_12646 =
																BgL_newzd2matchzd2_2745;
															BgL_lastzd2matchzd2_2686 =
																BgL_lastzd2matchzd2_12646;
															BgL_inputzd2portzd2_2685 =
																BgL_inputzd2portzd2_12645;
															goto BgL_zc3anonymousza33328ze3z83_2687;
														}
														break;
													case ((long) 10):

														{	/* Unsafe/http.scm 383 */
															long BgL_newzd2matchzd2_7625;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_2742);
															BgL_newzd2matchzd2_7625 = ((long) 2);
															BgL_matchz00_2847 = BgL_newzd2matchzd2_7625;
														} break;
													default:
														{
															long BgL_lastzd2matchzd2_12649;

															obj_t BgL_inputzd2portzd2_12648;

															BgL_inputzd2portzd2_12648 =
																BgL_inputzd2portzd2_2742;
															BgL_lastzd2matchzd2_12649 =
																BgL_newzd2matchzd2_2745;
															BgL_lastzd2matchzd2_2694 =
																BgL_lastzd2matchzd2_12649;
															BgL_inputzd2portzd2_2693 =
																BgL_inputzd2portzd2_12648;
															goto BgL_zc3anonymousza33333ze3z83_2695;
														}
													}
											}
										}
									}
							}
						else
							{	/* Unsafe/http.scm 383 */
								if (((long) (BgL_currentzd2charzd2_2721) == ((long) 13)))
									{	/* Unsafe/http.scm 383 */
										BgL_inputzd2portzd2_2706 = BgL_inputzd2portzd2_2718;
										BgL_lastzd2matchzd2_2707 = BgL_lastzd2matchzd2_2719;
									BgL_zc3anonymousza33338ze3z83_2708:
										{	/* Unsafe/http.scm 383 */
											long BgL_newzd2matchzd2_2709;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2706);
											BgL_newzd2matchzd2_2709 = ((long) 4);
											{	/* Unsafe/http.scm 383 */
												int BgL_currentzd2charzd2_2710;

												BgL_currentzd2charzd2_2710 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2706);
												if (((long) (BgL_currentzd2charzd2_2710) == ((long) 0)))
													{	/* Unsafe/http.scm 383 */
														bool_t BgL_testz00_12660;

														{	/* Unsafe/http.scm 383 */
															bool_t BgL_res5158z00_7578;

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2706))
																{	/* Unsafe/http.scm 383 */
																	BgL_res5158z00_7578 =
																		rgc_fill_buffer(BgL_inputzd2portzd2_2706);
																}
															else
																{	/* Unsafe/http.scm 383 */
																	BgL_res5158z00_7578 = ((bool_t) 0);
																}
															BgL_testz00_12660 = BgL_res5158z00_7578;
														}
														if (BgL_testz00_12660)
															{

																goto BgL_zc3anonymousza33338ze3z83_2708;
															}
														else
															{	/* Unsafe/http.scm 383 */
																BgL_matchz00_2847 = BgL_newzd2matchzd2_2709;
															}
													}
												else
													{	/* Unsafe/http.scm 383 */
														if (
															((long) (BgL_currentzd2charzd2_2710) ==
																((long) 10)))
															{	/* Unsafe/http.scm 383 */
																long BgL_newzd2matchzd2_7583;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_2706);
																BgL_newzd2matchzd2_7583 = ((long) 3);
																BgL_matchz00_2847 = BgL_newzd2matchzd2_7583;
															}
														else
															{	/* Unsafe/http.scm 383 */
																BgL_matchz00_2847 = BgL_newzd2matchzd2_2709;
															}
													}
											}
										}
									}
								else
									{	/* Unsafe/http.scm 383 */
										if (((long) (BgL_currentzd2charzd2_2721) == ((long) 10)))
											{	/* Unsafe/http.scm 383 */
												long BgL_newzd2matchzd2_7598;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2718);
												BgL_newzd2matchzd2_7598 = ((long) 3);
												BgL_matchz00_2847 = BgL_newzd2matchzd2_7598;
											}
										else
											{	/* Unsafe/http.scm 383 */
												bool_t BgL_testz00_12672;

												if (((long) (BgL_currentzd2charzd2_2721) == ((long) 9)))
													{	/* Unsafe/http.scm 383 */
														BgL_testz00_12672 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/http.scm 383 */
														BgL_testz00_12672 =
															(
															(long) (BgL_currentzd2charzd2_2721) ==
															((long) 32));
													}
												if (BgL_testz00_12672)
													{	/* Unsafe/http.scm 383 */
														BgL_inputzd2portzd2_2733 = BgL_inputzd2portzd2_2718;
														BgL_lastzd2matchzd2_2734 = BgL_lastzd2matchzd2_2719;
													BgL_zc3anonymousza33352ze3z83_2735:
														{	/* Unsafe/http.scm 383 */
															long BgL_newzd2matchzd2_2736;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_2733);
															BgL_newzd2matchzd2_2736 = ((long) 0);
															{	/* Unsafe/http.scm 383 */
																int BgL_currentzd2charzd2_2737;

																BgL_currentzd2charzd2_2737 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2733);
																if (
																	((long) (BgL_currentzd2charzd2_2737) ==
																		((long) 0)))
																	{	/* Unsafe/http.scm 383 */
																		bool_t BgL_testz00_12683;

																		{	/* Unsafe/http.scm 383 */
																			bool_t BgL_res5159z00_7614;

																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_2733))
																				{	/* Unsafe/http.scm 383 */
																					BgL_res5159z00_7614 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_2733);
																				}
																			else
																				{	/* Unsafe/http.scm 383 */
																					BgL_res5159z00_7614 = ((bool_t) 0);
																				}
																			BgL_testz00_12683 = BgL_res5159z00_7614;
																		}
																		if (BgL_testz00_12683)
																			{

																				goto BgL_zc3anonymousza33352ze3z83_2735;
																			}
																		else
																			{	/* Unsafe/http.scm 383 */
																				BgL_matchz00_2847 =
																					BgL_newzd2matchzd2_2736;
																			}
																	}
																else
																	{	/* Unsafe/http.scm 383 */
																		bool_t BgL_testz00_12687;

																		if (
																			((long) (BgL_currentzd2charzd2_2737) ==
																				((long) 9)))
																			{	/* Unsafe/http.scm 383 */
																				BgL_testz00_12687 = ((bool_t) 1);
																			}
																		else
																			{	/* Unsafe/http.scm 383 */
																				BgL_testz00_12687 =
																					(
																					(long) (BgL_currentzd2charzd2_2737) ==
																					((long) 32));
																			}
																		if (BgL_testz00_12687)
																			{	/* Unsafe/http.scm 383 */
																				BgL_inputzd2portzd2_2752 =
																					BgL_inputzd2portzd2_2733;
																				BgL_lastzd2matchzd2_2753 =
																					BgL_newzd2matchzd2_2736;
																			BgL_zc3anonymousza33361ze3z83_2754:
																				{	/* Unsafe/http.scm 383 */
																					long BgL_newzd2matchzd2_2755;

																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_2752);
																					BgL_newzd2matchzd2_2755 = ((long) 0);
																					{	/* Unsafe/http.scm 383 */
																						int BgL_currentzd2charzd2_2756;

																						BgL_currentzd2charzd2_2756 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_2752);
																						if (((long)
																								(BgL_currentzd2charzd2_2756) ==
																								((long) 0)))
																							{	/* Unsafe/http.scm 383 */
																								bool_t BgL_testz00_12698;

																								{	/* Unsafe/http.scm 383 */
																									bool_t BgL_res5160z00_7635;

																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_2752))
																										{	/* Unsafe/http.scm 383 */
																											BgL_res5160z00_7635 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_2752);
																										}
																									else
																										{	/* Unsafe/http.scm 383 */
																											BgL_res5160z00_7635 =
																												((bool_t) 0);
																										}
																									BgL_testz00_12698 =
																										BgL_res5160z00_7635;
																								}
																								if (BgL_testz00_12698)
																									{

																										goto
																											BgL_zc3anonymousza33361ze3z83_2754;
																									}
																								else
																									{	/* Unsafe/http.scm 383 */
																										BgL_matchz00_2847 =
																											BgL_newzd2matchzd2_2755;
																									}
																							}
																						else
																							{	/* Unsafe/http.scm 383 */
																								bool_t BgL_testz00_12702;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_2756)
																										== ((long) 9)))
																									{	/* Unsafe/http.scm 383 */
																										BgL_testz00_12702 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/http.scm 383 */
																										BgL_testz00_12702 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_2756)
																											== ((long) 32));
																									}
																								if (BgL_testz00_12702)
																									{
																										long
																											BgL_lastzd2matchzd2_12708;
																										BgL_lastzd2matchzd2_12708 =
																											BgL_newzd2matchzd2_2755;
																										BgL_lastzd2matchzd2_2753 =
																											BgL_lastzd2matchzd2_12708;
																										goto
																											BgL_zc3anonymousza33361ze3z83_2754;
																									}
																								else
																									{	/* Unsafe/http.scm 383 */
																										BgL_matchz00_2847 =
																											BgL_newzd2matchzd2_2755;
																									}
																							}
																					}
																				}
																			}
																		else
																			{	/* Unsafe/http.scm 383 */
																				BgL_matchz00_2847 =
																					BgL_newzd2matchzd2_2736;
																			}
																	}
															}
														}
													}
												else
													{
														long BgL_lastzd2matchzd2_12710;

														obj_t BgL_inputzd2portzd2_12709;

														BgL_inputzd2portzd2_12709 =
															BgL_inputzd2portzd2_2718;
														BgL_lastzd2matchzd2_12710 =
															BgL_lastzd2matchzd2_2719;
														BgL_lastzd2matchzd2_2743 =
															BgL_lastzd2matchzd2_12710;
														BgL_inputzd2portzd2_2742 =
															BgL_inputzd2portzd2_12709;
														goto BgL_zc3anonymousza33357ze3z83_2744;
													}
											}
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_2647);
					switch (BgL_matchz00_2847)
						{
						case ((long) 4):

							return BGl_string5425z00zz__httpz00;
							break;
						case ((long) 3):

							return BGl_string5425z00zz__httpz00;
							break;
						case ((long) 2):

							BgL_minz00_2776 = (int) (((long) 0));
							BgL_maxz00_2777 = (int) (((long) -1));
						BgL_lambda3375z00_2778:
							if (((long) (BgL_maxz00_2777) < ((long) 0)))
								{	/* Unsafe/http.scm 383 */
									int BgL_arg3377z00_2780;

									{	/* Unsafe/http.scm 383 */
										int BgL_res5162z00_7652;

										BgL_res5162z00_7652 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2647));
										BgL_arg3377z00_2780 = BgL_res5162z00_7652;
									}
									{	/* Unsafe/http.scm 383 */
										long BgL_za71za7_7653;

										long BgL_za72za7_7654;

										BgL_za71za7_7653 = (long) (BgL_arg3377z00_2780);
										BgL_za72za7_7654 = (long) (BgL_maxz00_2777);
										BgL_maxz00_2777 =
											(int) ((BgL_za71za7_7653 + BgL_za72za7_7654));
								}}
							else
								{	/* Unsafe/http.scm 383 */
									BFALSE;
								}
							{	/* Unsafe/http.scm 383 */
								bool_t BgL_testz00_12721;

								if (((long) (BgL_minz00_2776) >= ((long) 0)))
									{	/* Unsafe/http.scm 383 */
										if (((long) (BgL_maxz00_2777) >= (long) (BgL_minz00_2776)))
											{	/* Unsafe/http.scm 383 */
												int BgL_arg3387z00_2790;

												{	/* Unsafe/http.scm 383 */
													int BgL_res5163z00_7660;

													BgL_res5163z00_7660 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2647));
													BgL_arg3387z00_2790 = BgL_res5163z00_7660;
												}
												BgL_testz00_12721 =
													(
													(long) (BgL_maxz00_2777) <=
													(long) (BgL_arg3387z00_2790));
											}
										else
											{	/* Unsafe/http.scm 383 */
												BgL_testz00_12721 = ((bool_t) 0);
											}
									}
								else
									{	/* Unsafe/http.scm 383 */
										BgL_testz00_12721 = ((bool_t) 0);
									}
								if (BgL_testz00_12721)
									{	/* Unsafe/http.scm 383 */
										return
											rgc_buffer_substring(BgL_inputzd2portzd2_2647,
											(long) (BgL_minz00_2776), (long) (BgL_maxz00_2777));
									}
								else
									{	/* Unsafe/http.scm 383 */
										obj_t BgL_arg3380z00_2783;

										obj_t BgL_arg3381z00_2784;

										{	/* Unsafe/http.scm 383 */
											obj_t BgL_arg3383z00_2786;

											{	/* Unsafe/http.scm 383 */
												obj_t BgL_res5165z00_7673;

												{	/* Unsafe/http.scm 383 */
													int BgL_arg3374z00_7667;

													{	/* Unsafe/http.scm 383 */
														int BgL_res5164z00_7669;

														BgL_res5164z00_7669 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_2647));
														BgL_arg3374z00_7667 = BgL_res5164z00_7669;
													}
													BgL_res5165z00_7673 =
														rgc_buffer_substring(BgL_inputzd2portzd2_2647,
														((long) 0), (long) (BgL_arg3374z00_7667));
												}
												BgL_arg3383z00_2786 = BgL_res5165z00_7673;
											}
											{	/* Unsafe/http.scm 383 */
												obj_t BgL_list3384z00_2787;

												BgL_list3384z00_2787 =
													MAKE_PAIR(BgL_arg3383z00_2786, BNIL);
												BgL_arg3380z00_2783 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string5333z00zz__httpz00, BgL_list3384z00_2787);
										}}
										BgL_arg3381z00_2784 =
											MAKE_PAIR(BINT(BgL_minz00_2776), BINT(BgL_maxz00_2777));
										return
											BGl_errorz00zz__errorz00(BGl_string5334z00zz__httpz00,
											BgL_arg3380z00_2783, BgL_arg3381z00_2784);
									}
							}
							break;
						case ((long) 1):

							{
								int BgL_maxz00_12751;

								int BgL_minz00_12749;

								BgL_minz00_12749 = (int) (((long) 0));
								BgL_maxz00_12751 = (int) (((long) -2));
								BgL_maxz00_2777 = BgL_maxz00_12751;
								BgL_minz00_2776 = BgL_minz00_12749;
								goto BgL_lambda3375z00_2778;
							}
							break;
						case ((long) 0):

							goto BgL_zc3anonymousza33436ze3z83_2846;
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
								BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_2847));
						}
				}
			}
		}
	}



/* auth-grammar */
	obj_t BGl_authzd2grammarzd2zz__httpz00(obj_t BgL_inputzd2portzd2_4116)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 431 */
			{
				obj_t BgL_inputzd2portzd2_4148;

				long BgL_lastzd2matchzd2_4149;

				obj_t BgL_inputzd2portzd2_4158;

				long BgL_lastzd2matchzd2_4159;

				obj_t BgL_inputzd2portzd2_4167;

				long BgL_lastzd2matchzd2_4168;

				obj_t BgL_inputzd2portzd2_4177;

				long BgL_lastzd2matchzd2_4178;

				obj_t BgL_inputzd2portzd2_4186;

				long BgL_lastzd2matchzd2_4187;

			BgL_zc3anonymousza34147ze3z83_4276:
				RGC_START_MATCH(BgL_inputzd2portzd2_4116);
				{	/* Unsafe/http.scm 431 */
					long BgL_matchz00_4277;

					BgL_inputzd2portzd2_4158 = BgL_inputzd2portzd2_4116;
					BgL_lastzd2matchzd2_4159 = ((long) 2);
				BgL_zc3anonymousza34057ze3z83_4160:
					{	/* Unsafe/http.scm 431 */
						int BgL_currentzd2charzd2_4161;

						BgL_currentzd2charzd2_4161 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4158);
						if (((long) (BgL_currentzd2charzd2_4161) == ((long) 0)))
							{	/* Unsafe/http.scm 431 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4158))
									{	/* Unsafe/http.scm 431 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_4158))
											{

												goto BgL_zc3anonymousza34057ze3z83_4160;
											}
										else
											{	/* Unsafe/http.scm 431 */
												BgL_matchz00_4277 = BgL_lastzd2matchzd2_4159;
											}
									}
								else
									{	/* Unsafe/http.scm 431 */
										BgL_inputzd2portzd2_4167 = BgL_inputzd2portzd2_4158;
										BgL_lastzd2matchzd2_4168 = BgL_lastzd2matchzd2_4159;
									BgL_zc3anonymousza34063ze3z83_4169:
										{	/* Unsafe/http.scm 431 */
											long BgL_newzd2matchzd2_4170;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_4167);
											BgL_newzd2matchzd2_4170 = ((long) 1);
											{	/* Unsafe/http.scm 431 */
												int BgL_currentzd2charzd2_4171;

												BgL_currentzd2charzd2_4171 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4167);
												if (((long) (BgL_currentzd2charzd2_4171) == ((long) 0)))
													{	/* Unsafe/http.scm 431 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4167))
															{	/* Unsafe/http.scm 431 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_4167))
																	{

																		goto BgL_zc3anonymousza34063ze3z83_4169;
																	}
																else
																	{	/* Unsafe/http.scm 431 */
																		BgL_matchz00_4277 = BgL_newzd2matchzd2_4170;
																	}
															}
														else
															{	/* Unsafe/http.scm 431 */
																BgL_inputzd2portzd2_4148 =
																	BgL_inputzd2portzd2_4167;
																BgL_lastzd2matchzd2_4149 =
																	BgL_newzd2matchzd2_4170;
															BgL_zc3anonymousza34051ze3z83_4150:
																{	/* Unsafe/http.scm 431 */
																	long BgL_newzd2matchzd2_4151;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_4148);
																	BgL_newzd2matchzd2_4151 = ((long) 1);
																	{	/* Unsafe/http.scm 431 */
																		int BgL_currentzd2charzd2_4152;

																		BgL_currentzd2charzd2_4152 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_4148);
																		if (((long) (BgL_currentzd2charzd2_4152) ==
																				((long) 0)))
																			{	/* Unsafe/http.scm 431 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_4148))
																					{	/* Unsafe/http.scm 431 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_4148))
																							{

																								goto
																									BgL_zc3anonymousza34051ze3z83_4150;
																							}
																						else
																							{	/* Unsafe/http.scm 431 */
																								BgL_matchz00_4277 =
																									BgL_newzd2matchzd2_4151;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_12783;

																						BgL_lastzd2matchzd2_12783 =
																							BgL_newzd2matchzd2_4151;
																						BgL_lastzd2matchzd2_4149 =
																							BgL_lastzd2matchzd2_12783;
																						goto
																							BgL_zc3anonymousza34051ze3z83_4150;
																					}
																			}
																		else
																			{	/* Unsafe/http.scm 431 */
																				bool_t BgL_testz00_12784;

																				if (
																					((long) (BgL_currentzd2charzd2_4152)
																						== ((long) 10)))
																					{	/* Unsafe/http.scm 431 */
																						BgL_testz00_12784 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 431 */
																						BgL_testz00_12784 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_4152) ==
																							((long) 13));
																					}
																				if (BgL_testz00_12784)
																					{	/* Unsafe/http.scm 431 */
																						BgL_matchz00_4277 =
																							BgL_newzd2matchzd2_4151;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_12790;

																						BgL_lastzd2matchzd2_12790 =
																							BgL_newzd2matchzd2_4151;
																						BgL_lastzd2matchzd2_4149 =
																							BgL_lastzd2matchzd2_12790;
																						goto
																							BgL_zc3anonymousza34051ze3z83_4150;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Unsafe/http.scm 431 */
														bool_t BgL_testz00_12791;

														if (
															((long) (BgL_currentzd2charzd2_4171) ==
																((long) 10)))
															{	/* Unsafe/http.scm 431 */
																BgL_testz00_12791 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/http.scm 431 */
																BgL_testz00_12791 =
																	(
																	(long) (BgL_currentzd2charzd2_4171) ==
																	((long) 13));
															}
														if (BgL_testz00_12791)
															{	/* Unsafe/http.scm 431 */
																BgL_matchz00_4277 = BgL_newzd2matchzd2_4170;
															}
														else
															{
																long BgL_lastzd2matchzd2_12798;

																obj_t BgL_inputzd2portzd2_12797;

																BgL_inputzd2portzd2_12797 =
																	BgL_inputzd2portzd2_4167;
																BgL_lastzd2matchzd2_12798 =
																	BgL_newzd2matchzd2_4170;
																BgL_lastzd2matchzd2_4149 =
																	BgL_lastzd2matchzd2_12798;
																BgL_inputzd2portzd2_4148 =
																	BgL_inputzd2portzd2_12797;
																goto BgL_zc3anonymousza34051ze3z83_4150;
															}
													}
											}
										}
									}
							}
						else
							{	/* Unsafe/http.scm 431 */
								bool_t BgL_testz00_12799;

								if (((long) (BgL_currentzd2charzd2_4161) == ((long) 9)))
									{	/* Unsafe/http.scm 431 */
										BgL_testz00_12799 = ((bool_t) 1);
									}
								else
									{	/* Unsafe/http.scm 431 */
										BgL_testz00_12799 =
											((long) (BgL_currentzd2charzd2_4161) == ((long) 32));
									}
								if (BgL_testz00_12799)
									{	/* Unsafe/http.scm 431 */
										BgL_inputzd2portzd2_4177 = BgL_inputzd2portzd2_4158;
										BgL_lastzd2matchzd2_4178 = BgL_lastzd2matchzd2_4159;
									BgL_zc3anonymousza34069ze3z83_4179:
										{	/* Unsafe/http.scm 431 */
											long BgL_newzd2matchzd2_4180;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_4177);
											BgL_newzd2matchzd2_4180 = ((long) 0);
											{	/* Unsafe/http.scm 431 */
												int BgL_currentzd2charzd2_4181;

												BgL_currentzd2charzd2_4181 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4177);
												if (((long) (BgL_currentzd2charzd2_4181) == ((long) 0)))
													{	/* Unsafe/http.scm 431 */
														bool_t BgL_testz00_12810;

														{	/* Unsafe/http.scm 431 */
															bool_t BgL_res5188z00_8129;

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4177))
																{	/* Unsafe/http.scm 431 */
																	BgL_res5188z00_8129 =
																		rgc_fill_buffer(BgL_inputzd2portzd2_4177);
																}
															else
																{	/* Unsafe/http.scm 431 */
																	BgL_res5188z00_8129 = ((bool_t) 0);
																}
															BgL_testz00_12810 = BgL_res5188z00_8129;
														}
														if (BgL_testz00_12810)
															{

																goto BgL_zc3anonymousza34069ze3z83_4179;
															}
														else
															{	/* Unsafe/http.scm 431 */
																BgL_matchz00_4277 = BgL_newzd2matchzd2_4180;
															}
													}
												else
													{	/* Unsafe/http.scm 431 */
														bool_t BgL_testz00_12814;

														if (
															((long) (BgL_currentzd2charzd2_4181) ==
																((long) 9)))
															{	/* Unsafe/http.scm 431 */
																BgL_testz00_12814 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/http.scm 431 */
																BgL_testz00_12814 =
																	(
																	(long) (BgL_currentzd2charzd2_4181) ==
																	((long) 32));
															}
														if (BgL_testz00_12814)
															{	/* Unsafe/http.scm 431 */
																BgL_inputzd2portzd2_4186 =
																	BgL_inputzd2portzd2_4177;
																BgL_lastzd2matchzd2_4187 =
																	BgL_newzd2matchzd2_4180;
															BgL_zc3anonymousza34074ze3z83_4188:
																{	/* Unsafe/http.scm 431 */
																	long BgL_newzd2matchzd2_4189;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_4186);
																	BgL_newzd2matchzd2_4189 = ((long) 0);
																	{	/* Unsafe/http.scm 431 */
																		int BgL_currentzd2charzd2_4190;

																		BgL_currentzd2charzd2_4190 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_4186);
																		if (((long) (BgL_currentzd2charzd2_4190) ==
																				((long) 0)))
																			{	/* Unsafe/http.scm 431 */
																				bool_t BgL_testz00_12825;

																				{	/* Unsafe/http.scm 431 */
																					bool_t BgL_res5189z00_8142;

																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_4186))
																						{	/* Unsafe/http.scm 431 */
																							BgL_res5189z00_8142 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_4186);
																						}
																					else
																						{	/* Unsafe/http.scm 431 */
																							BgL_res5189z00_8142 =
																								((bool_t) 0);
																						}
																					BgL_testz00_12825 =
																						BgL_res5189z00_8142;
																				}
																				if (BgL_testz00_12825)
																					{

																						goto
																							BgL_zc3anonymousza34074ze3z83_4188;
																					}
																				else
																					{	/* Unsafe/http.scm 431 */
																						BgL_matchz00_4277 =
																							BgL_newzd2matchzd2_4189;
																					}
																			}
																		else
																			{	/* Unsafe/http.scm 431 */
																				bool_t BgL_testz00_12829;

																				if (
																					((long) (BgL_currentzd2charzd2_4190)
																						== ((long) 9)))
																					{	/* Unsafe/http.scm 431 */
																						BgL_testz00_12829 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 431 */
																						BgL_testz00_12829 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_4190) ==
																							((long) 32));
																					}
																				if (BgL_testz00_12829)
																					{
																						long BgL_lastzd2matchzd2_12835;

																						BgL_lastzd2matchzd2_12835 =
																							BgL_newzd2matchzd2_4189;
																						BgL_lastzd2matchzd2_4187 =
																							BgL_lastzd2matchzd2_12835;
																						goto
																							BgL_zc3anonymousza34074ze3z83_4188;
																					}
																				else
																					{	/* Unsafe/http.scm 431 */
																						BgL_matchz00_4277 =
																							BgL_newzd2matchzd2_4189;
																					}
																			}
																	}
																}
															}
														else
															{	/* Unsafe/http.scm 431 */
																BgL_matchz00_4277 = BgL_newzd2matchzd2_4180;
															}
													}
											}
										}
									}
								else
									{
										long BgL_lastzd2matchzd2_12837;

										obj_t BgL_inputzd2portzd2_12836;

										BgL_inputzd2portzd2_12836 = BgL_inputzd2portzd2_4158;
										BgL_lastzd2matchzd2_12837 = BgL_lastzd2matchzd2_4159;
										BgL_lastzd2matchzd2_4168 = BgL_lastzd2matchzd2_12837;
										BgL_inputzd2portzd2_4167 = BgL_inputzd2portzd2_12836;
										goto BgL_zc3anonymousza34063ze3z83_4169;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_4116);
					switch (BgL_matchz00_4277)
						{
						case ((long) 2):

							return BFALSE;
							break;
						case ((long) 1):

							{	/* Unsafe/http.scm 435 */
								obj_t BgL_res5192z00_8164;

								{	/* Unsafe/http.scm 435 */
									int BgL_arg4086z00_8158;

									{	/* Unsafe/http.scm 435 */
										int BgL_res5191z00_8160;

										BgL_res5191z00_8160 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4116));
										BgL_arg4086z00_8158 = BgL_res5191z00_8160;
									}
									BgL_res5192z00_8164 =
										rgc_buffer_substring(BgL_inputzd2portzd2_4116, ((long) 0),
										(long) (BgL_arg4086z00_8158));
								}
								return BgL_res5192z00_8164;
							}
							break;
						case ((long) 0):

							goto BgL_zc3anonymousza34147ze3z83_4276;
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
								BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_4277));
						}
				}
			}
		}
	}



/* symbol-grammar */
	obj_t BGl_symbolzd2grammarzd2zz__httpz00(obj_t BgL_inputzd2portzd2_3905)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 426 */
			{
				obj_t BgL_inputzd2portzd2_3938;

				long BgL_lastzd2matchzd2_3939;

				obj_t BgL_inputzd2portzd2_3947;

				long BgL_lastzd2matchzd2_3948;

				obj_t BgL_inputzd2portzd2_3959;

				long BgL_lastzd2matchzd2_3960;

				obj_t BgL_inputzd2portzd2_3971;

				long BgL_lastzd2matchzd2_3972;

				obj_t BgL_inputzd2portzd2_3989;

				long BgL_lastzd2matchzd2_3990;

			BgL_zc3anonymousza34048ze3z83_4079:
				RGC_START_MATCH(BgL_inputzd2portzd2_3905);
				{	/* Unsafe/http.scm 426 */
					long BgL_matchz00_4080;

					BgL_inputzd2portzd2_3971 = BgL_inputzd2portzd2_3905;
					BgL_lastzd2matchzd2_3972 = ((long) 2);
				BgL_zc3anonymousza33965ze3z83_3973:
					{	/* Unsafe/http.scm 426 */
						int BgL_currentzd2charzd2_3974;

						BgL_currentzd2charzd2_3974 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3971);
						if (((long) (BgL_currentzd2charzd2_3974) == ((long) 0)))
							{	/* Unsafe/http.scm 426 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3971))
									{	/* Unsafe/http.scm 426 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_3971))
											{

												goto BgL_zc3anonymousza33965ze3z83_3973;
											}
										else
											{	/* Unsafe/http.scm 426 */
												BgL_matchz00_4080 = BgL_lastzd2matchzd2_3972;
											}
									}
								else
									{	/* Unsafe/http.scm 426 */
										long BgL_newzd2matchzd2_8049;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_3971);
										BgL_newzd2matchzd2_8049 = ((long) 2);
										BgL_matchz00_4080 = BgL_newzd2matchzd2_8049;
							}}
						else
							{	/* Unsafe/http.scm 426 */
								bool_t BgL_testz00_12856;

								if (((long) (BgL_currentzd2charzd2_3974) == ((long) 45)))
									{	/* Unsafe/http.scm 426 */
										BgL_testz00_12856 = ((bool_t) 1);
									}
								else
									{	/* Unsafe/http.scm 426 */
										bool_t BgL_testz00_12860;

										if (((long) (BgL_currentzd2charzd2_3974) >= ((long) 65)))
											{	/* Unsafe/http.scm 426 */
												BgL_testz00_12860 =
													((long) (BgL_currentzd2charzd2_3974) < ((long) 91));
											}
										else
											{	/* Unsafe/http.scm 426 */
												BgL_testz00_12860 = ((bool_t) 0);
											}
										if (BgL_testz00_12860)
											{	/* Unsafe/http.scm 426 */
												BgL_testz00_12856 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/http.scm 426 */
												if (
													((long) (BgL_currentzd2charzd2_3974) >= ((long) 97)))
													{	/* Unsafe/http.scm 426 */
														BgL_testz00_12856 =
															(
															(long) (BgL_currentzd2charzd2_3974) <
															((long) 123));
													}
												else
													{	/* Unsafe/http.scm 426 */
														BgL_testz00_12856 = ((bool_t) 0);
													}
											}
									}
								if (BgL_testz00_12856)
									{	/* Unsafe/http.scm 426 */
										BgL_inputzd2portzd2_3947 = BgL_inputzd2portzd2_3971;
										BgL_lastzd2matchzd2_3948 = BgL_lastzd2matchzd2_3972;
									BgL_zc3anonymousza33951ze3z83_3949:
										{	/* Unsafe/http.scm 426 */
											long BgL_newzd2matchzd2_3950;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_3947);
											BgL_newzd2matchzd2_3950 = ((long) 0);
											{	/* Unsafe/http.scm 426 */
												int BgL_currentzd2charzd2_3951;

												BgL_currentzd2charzd2_3951 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3947);
												if (((long) (BgL_currentzd2charzd2_3951) == ((long) 0)))
													{	/* Unsafe/http.scm 426 */
														bool_t BgL_testz00_12876;

														{	/* Unsafe/http.scm 426 */
															bool_t BgL_res5185z00_8012;

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3947))
																{	/* Unsafe/http.scm 426 */
																	BgL_res5185z00_8012 =
																		rgc_fill_buffer(BgL_inputzd2portzd2_3947);
																}
															else
																{	/* Unsafe/http.scm 426 */
																	BgL_res5185z00_8012 = ((bool_t) 0);
																}
															BgL_testz00_12876 = BgL_res5185z00_8012;
														}
														if (BgL_testz00_12876)
															{

																goto BgL_zc3anonymousza33951ze3z83_3949;
															}
														else
															{	/* Unsafe/http.scm 426 */
																BgL_matchz00_4080 = BgL_newzd2matchzd2_3950;
															}
													}
												else
													{	/* Unsafe/http.scm 426 */
														bool_t BgL_testz00_12880;

														if (
															((long) (BgL_currentzd2charzd2_3951) ==
																((long) 45)))
															{	/* Unsafe/http.scm 426 */
																BgL_testz00_12880 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/http.scm 426 */
																bool_t BgL_testz00_12884;

																if (
																	((long) (BgL_currentzd2charzd2_3951) >=
																		((long) 65)))
																	{	/* Unsafe/http.scm 426 */
																		BgL_testz00_12884 =
																			(
																			(long) (BgL_currentzd2charzd2_3951) <
																			((long) 91));
																	}
																else
																	{	/* Unsafe/http.scm 426 */
																		BgL_testz00_12884 = ((bool_t) 0);
																	}
																if (BgL_testz00_12884)
																	{	/* Unsafe/http.scm 426 */
																		BgL_testz00_12880 = ((bool_t) 1);
																	}
																else
																	{	/* Unsafe/http.scm 426 */
																		if (
																			((long) (BgL_currentzd2charzd2_3951) >=
																				((long) 97)))
																			{	/* Unsafe/http.scm 426 */
																				BgL_testz00_12880 =
																					(
																					(long) (BgL_currentzd2charzd2_3951) <
																					((long) 123));
																			}
																		else
																			{	/* Unsafe/http.scm 426 */
																				BgL_testz00_12880 = ((bool_t) 0);
																			}
																	}
															}
														if (BgL_testz00_12880)
															{	/* Unsafe/http.scm 426 */
																BgL_inputzd2portzd2_3959 =
																	BgL_inputzd2portzd2_3947;
																BgL_lastzd2matchzd2_3960 =
																	BgL_newzd2matchzd2_3950;
															BgL_zc3anonymousza33958ze3z83_3961:
																{	/* Unsafe/http.scm 426 */
																	long BgL_newzd2matchzd2_3962;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_3959);
																	BgL_newzd2matchzd2_3962 = ((long) 0);
																	{	/* Unsafe/http.scm 426 */
																		int BgL_currentzd2charzd2_3963;

																		BgL_currentzd2charzd2_3963 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_3959);
																		if (((long) (BgL_currentzd2charzd2_3963) ==
																				((long) 0)))
																			{	/* Unsafe/http.scm 426 */
																				bool_t BgL_testz00_12900;

																				{	/* Unsafe/http.scm 426 */
																					bool_t BgL_res5186z00_8031;

																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_3959))
																						{	/* Unsafe/http.scm 426 */
																							BgL_res5186z00_8031 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_3959);
																						}
																					else
																						{	/* Unsafe/http.scm 426 */
																							BgL_res5186z00_8031 =
																								((bool_t) 0);
																						}
																					BgL_testz00_12900 =
																						BgL_res5186z00_8031;
																				}
																				if (BgL_testz00_12900)
																					{

																						goto
																							BgL_zc3anonymousza33958ze3z83_3961;
																					}
																				else
																					{	/* Unsafe/http.scm 426 */
																						BgL_matchz00_4080 =
																							BgL_newzd2matchzd2_3962;
																					}
																			}
																		else
																			{	/* Unsafe/http.scm 426 */
																				bool_t BgL_testz00_12904;

																				if (
																					((long) (BgL_currentzd2charzd2_3963)
																						== ((long) 45)))
																					{	/* Unsafe/http.scm 426 */
																						BgL_testz00_12904 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/http.scm 426 */
																						bool_t BgL_testz00_12908;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_3963) >=
																								((long) 65)))
																							{	/* Unsafe/http.scm 426 */
																								BgL_testz00_12908 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_3963) <
																									((long) 91));
																							}
																						else
																							{	/* Unsafe/http.scm 426 */
																								BgL_testz00_12908 =
																									((bool_t) 0);
																							}
																						if (BgL_testz00_12908)
																							{	/* Unsafe/http.scm 426 */
																								BgL_testz00_12904 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 426 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_3963)
																										>= ((long) 97)))
																									{	/* Unsafe/http.scm 426 */
																										BgL_testz00_12904 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_3963)
																											< ((long) 123));
																									}
																								else
																									{	/* Unsafe/http.scm 426 */
																										BgL_testz00_12904 =
																											((bool_t) 0);
																									}
																							}
																					}
																				if (BgL_testz00_12904)
																					{
																						long BgL_lastzd2matchzd2_12919;

																						BgL_lastzd2matchzd2_12919 =
																							BgL_newzd2matchzd2_3962;
																						BgL_lastzd2matchzd2_3960 =
																							BgL_lastzd2matchzd2_12919;
																						goto
																							BgL_zc3anonymousza33958ze3z83_3961;
																					}
																				else
																					{	/* Unsafe/http.scm 426 */
																						BgL_matchz00_4080 =
																							BgL_newzd2matchzd2_3962;
																					}
																			}
																	}
																}
															}
														else
															{	/* Unsafe/http.scm 426 */
																BgL_matchz00_4080 = BgL_newzd2matchzd2_3950;
															}
													}
											}
										}
									}
								else
									{	/* Unsafe/http.scm 426 */
										bool_t BgL_testz00_12920;

										if (((long) (BgL_currentzd2charzd2_3974) == ((long) 9)))
											{	/* Unsafe/http.scm 426 */
												BgL_testz00_12920 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/http.scm 426 */
												BgL_testz00_12920 =
													((long) (BgL_currentzd2charzd2_3974) == ((long) 32));
											}
										if (BgL_testz00_12920)
											{	/* Unsafe/http.scm 426 */
												BgL_inputzd2portzd2_3938 = BgL_inputzd2portzd2_3971;
												BgL_lastzd2matchzd2_3939 = BgL_lastzd2matchzd2_3972;
											BgL_zc3anonymousza33946ze3z83_3940:
												{	/* Unsafe/http.scm 426 */
													long BgL_newzd2matchzd2_3941;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_3938);
													BgL_newzd2matchzd2_3941 = ((long) 1);
													{	/* Unsafe/http.scm 426 */
														int BgL_currentzd2charzd2_3942;

														BgL_currentzd2charzd2_3942 =
															RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3938);
														if (
															((long) (BgL_currentzd2charzd2_3942) ==
																((long) 0)))
															{	/* Unsafe/http.scm 426 */
																bool_t BgL_testz00_12931;

																{	/* Unsafe/http.scm 426 */
																	bool_t BgL_res5184z00_7999;

																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3938))
																		{	/* Unsafe/http.scm 426 */
																			BgL_res5184z00_7999 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3938);
																		}
																	else
																		{	/* Unsafe/http.scm 426 */
																			BgL_res5184z00_7999 = ((bool_t) 0);
																		}
																	BgL_testz00_12931 = BgL_res5184z00_7999;
																}
																if (BgL_testz00_12931)
																	{

																		goto BgL_zc3anonymousza33946ze3z83_3940;
																	}
																else
																	{	/* Unsafe/http.scm 426 */
																		BgL_matchz00_4080 = BgL_newzd2matchzd2_3941;
																	}
															}
														else
															{	/* Unsafe/http.scm 426 */
																bool_t BgL_testz00_12935;

																if (
																	((long) (BgL_currentzd2charzd2_3942) ==
																		((long) 9)))
																	{	/* Unsafe/http.scm 426 */
																		BgL_testz00_12935 = ((bool_t) 1);
																	}
																else
																	{	/* Unsafe/http.scm 426 */
																		BgL_testz00_12935 =
																			(
																			(long) (BgL_currentzd2charzd2_3942) ==
																			((long) 32));
																	}
																if (BgL_testz00_12935)
																	{	/* Unsafe/http.scm 426 */
																		BgL_inputzd2portzd2_3989 =
																			BgL_inputzd2portzd2_3938;
																		BgL_lastzd2matchzd2_3990 =
																			BgL_newzd2matchzd2_3941;
																	BgL_zc3anonymousza33976ze3z83_3991:
																		{	/* Unsafe/http.scm 426 */
																			long BgL_newzd2matchzd2_3992;

																			RGC_STOP_MATCH(BgL_inputzd2portzd2_3989);
																			BgL_newzd2matchzd2_3992 = ((long) 1);
																			{	/* Unsafe/http.scm 426 */
																				int BgL_currentzd2charzd2_3993;

																				BgL_currentzd2charzd2_3993 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_3989);
																				if (((long) (BgL_currentzd2charzd2_3993)
																						== ((long) 0)))
																					{	/* Unsafe/http.scm 426 */
																						bool_t BgL_testz00_12946;

																						{	/* Unsafe/http.scm 426 */
																							bool_t BgL_res5187z00_8079;

																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_3989))
																								{	/* Unsafe/http.scm 426 */
																									BgL_res5187z00_8079 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_3989);
																								}
																							else
																								{	/* Unsafe/http.scm 426 */
																									BgL_res5187z00_8079 =
																										((bool_t) 0);
																								}
																							BgL_testz00_12946 =
																								BgL_res5187z00_8079;
																						}
																						if (BgL_testz00_12946)
																							{

																								goto
																									BgL_zc3anonymousza33976ze3z83_3991;
																							}
																						else
																							{	/* Unsafe/http.scm 426 */
																								BgL_matchz00_4080 =
																									BgL_newzd2matchzd2_3992;
																							}
																					}
																				else
																					{	/* Unsafe/http.scm 426 */
																						bool_t BgL_testz00_12950;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_3993) ==
																								((long) 9)))
																							{	/* Unsafe/http.scm 426 */
																								BgL_testz00_12950 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 426 */
																								BgL_testz00_12950 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_3993)
																									== ((long) 32));
																							}
																						if (BgL_testz00_12950)
																							{
																								long BgL_lastzd2matchzd2_12956;

																								BgL_lastzd2matchzd2_12956 =
																									BgL_newzd2matchzd2_3992;
																								BgL_lastzd2matchzd2_3990 =
																									BgL_lastzd2matchzd2_12956;
																								goto
																									BgL_zc3anonymousza33976ze3z83_3991;
																							}
																						else
																							{	/* Unsafe/http.scm 426 */
																								BgL_matchz00_4080 =
																									BgL_newzd2matchzd2_3992;
																							}
																					}
																			}
																		}
																	}
																else
																	{	/* Unsafe/http.scm 426 */
																		BgL_matchz00_4080 = BgL_newzd2matchzd2_3941;
																	}
															}
													}
												}
											}
										else
											{	/* Unsafe/http.scm 426 */
												long BgL_newzd2matchzd2_8067;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_3971);
												BgL_newzd2matchzd2_8067 = ((long) 2);
												BgL_matchz00_4080 = BgL_newzd2matchzd2_8067;
					}}}}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_3905);
					switch (BgL_matchz00_4080)
						{
						case ((long) 2):

							{	/* Unsafe/http.scm 426 */
								bool_t BgL_testz00_12959;

								{	/* Unsafe/http.scm 426 */
									long BgL_arg4041z00_4069;

									BgL_arg4041z00_4069 =
										RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3905);
									BgL_testz00_12959 = (BgL_arg4041z00_4069 == ((long) 0));
								}
								if (BgL_testz00_12959)
									{	/* Unsafe/http.scm 426 */
										return BCNST(256);
									}
								else
									{	/* Unsafe/http.scm 426 */
										return
											BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3905));
									}
							}
							break;
						case ((long) 1):

							goto BgL_zc3anonymousza34048ze3z83_4079;
							break;
						case ((long) 0):

							return rgc_buffer_downcase_symbol(BgL_inputzd2portzd2_3905);
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
								BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_4080));
						}
				}
			}
		}
	}



/* crlf-grammar */
	obj_t BGl_crlfzd2grammarzd2zz__httpz00(obj_t BgL_inputzd2portzd2_4312)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 440 */
			{
				obj_t BgL_inputzd2portzd2_4347;

				long BgL_lastzd2matchzd2_4348;

				obj_t BgL_inputzd2portzd2_4362;

				long BgL_lastzd2matchzd2_4363;

				obj_t BgL_inputzd2portzd2_4377;

				long BgL_lastzd2matchzd2_4378;

				obj_t BgL_inputzd2portzd2_4389;

				long BgL_lastzd2matchzd2_4390;

				obj_t BgL_inputzd2portzd2_4399;

				long BgL_lastzd2matchzd2_4400;

				RGC_START_MATCH(BgL_inputzd2portzd2_4312);
				{	/* Unsafe/http.scm 440 */
					long BgL_matchz00_4488;

					BgL_inputzd2portzd2_4347 = BgL_inputzd2portzd2_4312;
					BgL_lastzd2matchzd2_4348 = ((long) 1);
				BgL_zc3anonymousza34150ze3z83_4349:
					{	/* Unsafe/http.scm 440 */
						int BgL_currentzd2charzd2_4350;

						BgL_currentzd2charzd2_4350 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4347);
						if (((long) (BgL_currentzd2charzd2_4350) == ((long) 0)))
							{	/* Unsafe/http.scm 440 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4347))
									{	/* Unsafe/http.scm 440 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_4347))
											{

												goto BgL_zc3anonymousza34150ze3z83_4349;
											}
										else
											{	/* Unsafe/http.scm 440 */
												BgL_matchz00_4488 = BgL_lastzd2matchzd2_4348;
											}
									}
								else
									{	/* Unsafe/http.scm 440 */
										long BgL_newzd2matchzd2_8172;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_4347);
										BgL_newzd2matchzd2_8172 = ((long) 1);
										BgL_matchz00_4488 = BgL_newzd2matchzd2_8172;
							}}
						else
							{	/* Unsafe/http.scm 440 */
								if (((long) (BgL_currentzd2charzd2_4350) == ((long) 13)))
									{	/* Unsafe/http.scm 440 */
										BgL_inputzd2portzd2_4377 = BgL_inputzd2portzd2_4347;
										BgL_lastzd2matchzd2_4378 = BgL_lastzd2matchzd2_4348;
									BgL_zc3anonymousza34167ze3z83_4379:
										{	/* Unsafe/http.scm 440 */
											long BgL_newzd2matchzd2_4380;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_4377);
											BgL_newzd2matchzd2_4380 = ((long) 1);
											{	/* Unsafe/http.scm 440 */
												int BgL_currentzd2charzd2_4381;

												BgL_currentzd2charzd2_4381 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4377);
												if (((long) (BgL_currentzd2charzd2_4381) == ((long) 0)))
													{	/* Unsafe/http.scm 440 */
														bool_t BgL_testz00_12986;

														{	/* Unsafe/http.scm 440 */
															bool_t BgL_res5194z00_8223;

															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4377))
																{	/* Unsafe/http.scm 440 */
																	BgL_res5194z00_8223 =
																		rgc_fill_buffer(BgL_inputzd2portzd2_4377);
																}
															else
																{	/* Unsafe/http.scm 440 */
																	BgL_res5194z00_8223 = ((bool_t) 0);
																}
															BgL_testz00_12986 = BgL_res5194z00_8223;
														}
														if (BgL_testz00_12986)
															{

																goto BgL_zc3anonymousza34167ze3z83_4379;
															}
														else
															{	/* Unsafe/http.scm 440 */
																BgL_matchz00_4488 = BgL_newzd2matchzd2_4380;
															}
													}
												else
													{	/* Unsafe/http.scm 440 */
														if (
															((long) (BgL_currentzd2charzd2_4381) ==
																((long) 10)))
															{	/* Unsafe/http.scm 440 */
																long BgL_newzd2matchzd2_8228;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_4377);
																BgL_newzd2matchzd2_8228 = ((long) 0);
																BgL_matchz00_4488 = BgL_newzd2matchzd2_8228;
															}
														else
															{	/* Unsafe/http.scm 440 */
																BgL_matchz00_4488 = BgL_newzd2matchzd2_4380;
															}
													}
											}
										}
									}
								else
									{	/* Unsafe/http.scm 440 */
										if (((long) (BgL_currentzd2charzd2_4350) == ((long) 10)))
											{	/* Unsafe/http.scm 440 */
												long BgL_newzd2matchzd2_8180;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_4347);
												BgL_newzd2matchzd2_8180 = ((long) 0);
												BgL_matchz00_4488 = BgL_newzd2matchzd2_8180;
											}
										else
											{	/* Unsafe/http.scm 440 */
												bool_t BgL_testz00_12998;

												if (((long) (BgL_currentzd2charzd2_4350) == ((long) 9)))
													{	/* Unsafe/http.scm 440 */
														BgL_testz00_12998 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/http.scm 440 */
														BgL_testz00_12998 =
															(
															(long) (BgL_currentzd2charzd2_4350) ==
															((long) 32));
													}
												if (BgL_testz00_12998)
													{	/* Unsafe/http.scm 440 */
														BgL_inputzd2portzd2_4362 = BgL_inputzd2portzd2_4347;
														BgL_lastzd2matchzd2_4363 = BgL_lastzd2matchzd2_4348;
													BgL_zc3anonymousza34159ze3z83_4364:
														{	/* Unsafe/http.scm 440 */
															long BgL_newzd2matchzd2_4365;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_4362);
															BgL_newzd2matchzd2_4365 = ((long) 1);
															{	/* Unsafe/http.scm 440 */
																int BgL_currentzd2charzd2_4366;

																BgL_currentzd2charzd2_4366 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4362);
																if (
																	((long) (BgL_currentzd2charzd2_4366) ==
																		((long) 0)))
																	{	/* Unsafe/http.scm 440 */
																		bool_t BgL_testz00_13009;

																		{	/* Unsafe/http.scm 440 */
																			bool_t BgL_res5193z00_8200;

																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_4362))
																				{	/* Unsafe/http.scm 440 */
																					BgL_res5193z00_8200 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_4362);
																				}
																			else
																				{	/* Unsafe/http.scm 440 */
																					BgL_res5193z00_8200 = ((bool_t) 0);
																				}
																			BgL_testz00_13009 = BgL_res5193z00_8200;
																		}
																		if (BgL_testz00_13009)
																			{

																				goto BgL_zc3anonymousza34159ze3z83_4364;
																			}
																		else
																			{	/* Unsafe/http.scm 440 */
																				BgL_matchz00_4488 =
																					BgL_newzd2matchzd2_4365;
																			}
																	}
																else
																	{	/* Unsafe/http.scm 440 */
																		if (
																			((long) (BgL_currentzd2charzd2_4366) ==
																				((long) 13)))
																			{	/* Unsafe/http.scm 440 */
																				BgL_inputzd2portzd2_4399 =
																					BgL_inputzd2portzd2_4362;
																				BgL_lastzd2matchzd2_4400 =
																					BgL_newzd2matchzd2_4365;
																			BgL_zc3anonymousza34179ze3z83_4401:
																				{	/* Unsafe/http.scm 440 */
																					int BgL_currentzd2charzd2_4402;

																					BgL_currentzd2charzd2_4402 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_4399);
																					if (((long)
																							(BgL_currentzd2charzd2_4402) ==
																							((long) 0)))
																						{	/* Unsafe/http.scm 440 */
																							bool_t BgL_testz00_13020;

																							{	/* Unsafe/http.scm 440 */
																								bool_t BgL_res5196z00_8259;

																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_4399))
																									{	/* Unsafe/http.scm 440 */
																										BgL_res5196z00_8259 =
																											rgc_fill_buffer
																											(BgL_inputzd2portzd2_4399);
																									}
																								else
																									{	/* Unsafe/http.scm 440 */
																										BgL_res5196z00_8259 =
																											((bool_t) 0);
																									}
																								BgL_testz00_13020 =
																									BgL_res5196z00_8259;
																							}
																							if (BgL_testz00_13020)
																								{

																									goto
																										BgL_zc3anonymousza34179ze3z83_4401;
																								}
																							else
																								{	/* Unsafe/http.scm 440 */
																									BgL_matchz00_4488 =
																										BgL_lastzd2matchzd2_4400;
																								}
																						}
																					else
																						{	/* Unsafe/http.scm 440 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_4402)
																									== ((long) 10)))
																								{	/* Unsafe/http.scm 440 */
																									long BgL_newzd2matchzd2_8264;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_4399);
																									BgL_newzd2matchzd2_8264 =
																										((long) 0);
																									BgL_matchz00_4488 =
																										BgL_newzd2matchzd2_8264;
																								}
																							else
																								{	/* Unsafe/http.scm 440 */
																									BgL_matchz00_4488 =
																										BgL_lastzd2matchzd2_4400;
																								}
																						}
																				}
																			}
																		else
																			{	/* Unsafe/http.scm 440 */
																				if (
																					((long) (BgL_currentzd2charzd2_4366)
																						== ((long) 10)))
																					{	/* Unsafe/http.scm 440 */
																						long BgL_newzd2matchzd2_8207;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_4362);
																						BgL_newzd2matchzd2_8207 =
																							((long) 0);
																						BgL_matchz00_4488 =
																							BgL_newzd2matchzd2_8207;
																					}
																				else
																					{	/* Unsafe/http.scm 440 */
																						bool_t BgL_testz00_13032;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_4366) ==
																								((long) 9)))
																							{	/* Unsafe/http.scm 440 */
																								BgL_testz00_13032 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/http.scm 440 */
																								BgL_testz00_13032 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_4366)
																									== ((long) 32));
																							}
																						if (BgL_testz00_13032)
																							{	/* Unsafe/http.scm 440 */
																								BgL_inputzd2portzd2_4389 =
																									BgL_inputzd2portzd2_4362;
																								BgL_lastzd2matchzd2_4390 =
																									BgL_newzd2matchzd2_4365;
																							BgL_zc3anonymousza34172ze3z83_4391:
																								{	/* Unsafe/http.scm 440 */
																									int
																										BgL_currentzd2charzd2_4392;
																									BgL_currentzd2charzd2_4392 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_4389);
																									if (((long)
																											(BgL_currentzd2charzd2_4392)
																											== ((long) 0)))
																										{	/* Unsafe/http.scm 440 */
																											bool_t BgL_testz00_13042;

																											{	/* Unsafe/http.scm 440 */
																												bool_t
																													BgL_res5195z00_8239;
																												if (RGC_BUFFER_EMPTY
																													(BgL_inputzd2portzd2_4389))
																													{	/* Unsafe/http.scm 440 */
																														BgL_res5195z00_8239
																															=
																															rgc_fill_buffer
																															(BgL_inputzd2portzd2_4389);
																													}
																												else
																													{	/* Unsafe/http.scm 440 */
																														BgL_res5195z00_8239
																															= ((bool_t) 0);
																													}
																												BgL_testz00_13042 =
																													BgL_res5195z00_8239;
																											}
																											if (BgL_testz00_13042)
																												{

																													goto
																														BgL_zc3anonymousza34172ze3z83_4391;
																												}
																											else
																												{	/* Unsafe/http.scm 440 */
																													BgL_matchz00_4488 =
																														BgL_lastzd2matchzd2_4390;
																												}
																										}
																									else
																										{	/* Unsafe/http.scm 440 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_4392)
																													== ((long) 13)))
																												{
																													long
																														BgL_lastzd2matchzd2_13050;
																													obj_t
																														BgL_inputzd2portzd2_13049;
																													BgL_inputzd2portzd2_13049
																														=
																														BgL_inputzd2portzd2_4389;
																													BgL_lastzd2matchzd2_13050
																														=
																														BgL_lastzd2matchzd2_4390;
																													BgL_lastzd2matchzd2_4400
																														=
																														BgL_lastzd2matchzd2_13050;
																													BgL_inputzd2portzd2_4399
																														=
																														BgL_inputzd2portzd2_13049;
																													goto
																														BgL_zc3anonymousza34179ze3z83_4401;
																												}
																											else
																												{	/* Unsafe/http.scm 440 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_4392)
																															== ((long) 10)))
																														{	/* Unsafe/http.scm 440 */
																															long
																																BgL_newzd2matchzd2_8246;
																															RGC_STOP_MATCH
																																(BgL_inputzd2portzd2_4389);
																															BgL_newzd2matchzd2_8246
																																= ((long) 0);
																															BgL_matchz00_4488
																																=
																																BgL_newzd2matchzd2_8246;
																														}
																													else
																														{	/* Unsafe/http.scm 440 */
																															bool_t
																																BgL_testz00_13055;
																															if (((long)
																																	(BgL_currentzd2charzd2_4392)
																																	==
																																	((long) 9)))
																																{	/* Unsafe/http.scm 440 */
																																	BgL_testz00_13055
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/http.scm 440 */
																																	BgL_testz00_13055
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_4392)
																																		==
																																		((long)
																																			32));
																																}
																															if (BgL_testz00_13055)
																																{

																																	goto
																																		BgL_zc3anonymousza34172ze3z83_4391;
																																}
																															else
																																{	/* Unsafe/http.scm 440 */
																																	BgL_matchz00_4488
																																		=
																																		BgL_lastzd2matchzd2_4390;
																																}
																														}
																												}
																										}
																								}
																							}
																						else
																							{	/* Unsafe/http.scm 440 */
																								BgL_matchz00_4488 =
																									BgL_newzd2matchzd2_4365;
																							}
																					}
																			}
																	}
															}
														}
													}
												else
													{	/* Unsafe/http.scm 440 */
														long BgL_newzd2matchzd2_8188;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_4347);
														BgL_newzd2matchzd2_8188 = ((long) 1);
														BgL_matchz00_4488 = BgL_newzd2matchzd2_8188;
					}}}}}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_4312);
					switch (BgL_matchz00_4488)
						{
						case ((long) 1):

							return BFALSE;
							break;
						case ((long) 0):

							return BUNSPEC;
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
								BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_4488));
						}
				}
			}
		}
	}



/* _http-parse-header */
	obj_t BGl__httpzd2parsezd2headerz00zz__httpz00(obj_t BgL_envz00_9560,
		obj_t BgL_pz00_9561, obj_t BgL_poz00_9562)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 380 */
			{	/* Unsafe/http.scm 383 */
				obj_t BgL_auxz00_13073;

				obj_t BgL_auxz00_13066;

				if (OUTPUT_PORTP(BgL_poz00_9562))
					{	/* Unsafe/http.scm 383 */
						BgL_auxz00_13073 = BgL_poz00_9562;
					}
				else
					{
						obj_t BgL_auxz00_13076;

						BgL_auxz00_13076 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 14026)), BGl_string5450z00zz__httpz00,
							BGl_string5451z00zz__httpz00, BgL_poz00_9562);
						FAILURE(BgL_auxz00_13076, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_pz00_9561))
					{	/* Unsafe/http.scm 383 */
						BgL_auxz00_13066 = BgL_pz00_9561;
					}
				else
					{
						obj_t BgL_auxz00_13069;

						BgL_auxz00_13069 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 14026)), BGl_string5450z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_pz00_9561);
						FAILURE(BgL_auxz00_13069, BFALSE, BFALSE);
					}
				return
					BGl_httpzd2parsezd2headerz00zz__httpz00(BgL_auxz00_13066,
					BgL_auxz00_13073);
			}
		}
	}



/* http-parse-response */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t
		BgL_ipz00_50, obj_t BgL_opz00_51, obj_t BgL_procz00_52)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 570 */
			{	/* Unsafe/http.scm 571 */
				obj_t BgL__1z00_5180;

				BgL__1z00_5180 =
					PROCEDURE_ENTRY(BGl_statuszd2linezd2grammarz00zz__httpz00)
					(BGl_statuszd2linezd2grammarz00zz__httpz00, BgL_ipz00_50, BEOA);
				{	/* Unsafe/http.scm 573 */
					obj_t BgL_statusz00_5181;

					obj_t BgL__2z00_5182;

					{	/* Unsafe/http.scm 573 */
						int BgL_auxz00_13083;

						BgL_auxz00_13083 = (int) (((long) 1));
						BgL_statusz00_5181 = BGL_MVALUES_VAL(BgL_auxz00_13083);
					}
					{	/* Unsafe/http.scm 573 */
						int BgL_auxz00_13086;

						BgL_auxz00_13086 = (int) (((long) 2));
						BgL__2z00_5182 = BGL_MVALUES_VAL(BgL_auxz00_13086);
					}
					{	/* Unsafe/http.scm 573 */
						obj_t BgL_headerz00_5183;

						BgL_headerz00_5183 =
							BGl_httpzd2parsezd2headerz00zz__httpz00(BgL_ipz00_50,
							BgL_opz00_51);
						{	/* Unsafe/http.scm 575 */
							obj_t BgL__hostz00_5184;

							obj_t BgL__portz00_5185;

							obj_t BgL_clenz00_5186;

							obj_t BgL_tencz00_5187;

							obj_t BgL__autz00_5188;

							obj_t BgL__pautz00_5189;

							obj_t BgL__connz00_5190;

							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13090;

								BgL_auxz00_13090 = (int) (((long) 1));
								BgL__hostz00_5184 = BGL_MVALUES_VAL(BgL_auxz00_13090);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13093;

								BgL_auxz00_13093 = (int) (((long) 2));
								BgL__portz00_5185 = BGL_MVALUES_VAL(BgL_auxz00_13093);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13096;

								BgL_auxz00_13096 = (int) (((long) 3));
								BgL_clenz00_5186 = BGL_MVALUES_VAL(BgL_auxz00_13096);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13099;

								BgL_auxz00_13099 = (int) (((long) 4));
								BgL_tencz00_5187 = BGL_MVALUES_VAL(BgL_auxz00_13099);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13102;

								BgL_auxz00_13102 = (int) (((long) 5));
								BgL__autz00_5188 = BGL_MVALUES_VAL(BgL_auxz00_13102);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13105;

								BgL_auxz00_13105 = (int) (((long) 6));
								BgL__pautz00_5189 = BGL_MVALUES_VAL(BgL_auxz00_13105);
							}
							{	/* Unsafe/http.scm 575 */
								int BgL_auxz00_13108;

								BgL_auxz00_13108 = (int) (((long) 7));
								BgL__connz00_5190 = BGL_MVALUES_VAL(BgL_auxz00_13108);
							}
							{

								if (INTEGERP(BgL_statusz00_5181))
									{	/* Unsafe/http.scm 575 */
										switch ((long) CINT(BgL_statusz00_5181))
											{
											case ((long) 200):
											case ((long) 207):

												if ((BgL_tencz00_5187 == BGl_symbol5455z00zz__httpz00))
													{	/* Unsafe/http.scm 580 */
														obj_t BgL_arg4591z00_5195;

														BgL_arg4591z00_5195 =
															BGl_httpzd2chunkszd2ze3portze3zz__httpz00
															(BgL_ipz00_50);
														return
															PROCEDURE_ENTRY(BgL_procz00_52) (BgL_procz00_52,
															BgL_arg4591z00_5195, BgL_statusz00_5181,
															BgL_headerz00_5183, BgL_clenz00_5186,
															BgL_tencz00_5187, BEOA);
													}
												else
													{	/* Unsafe/http.scm 579 */
														return
															PROCEDURE_ENTRY(BgL_procz00_52) (BgL_procz00_52,
															BgL_ipz00_50, BgL_statusz00_5181,
															BgL_headerz00_5183, BgL_clenz00_5186,
															BgL_tencz00_5187, BEOA);
													}
												break;
											case ((long) 201):
											case ((long) 204):
											case ((long) 304):

												return
													PROCEDURE_ENTRY(BgL_procz00_52) (BgL_procz00_52,
													BFALSE, BgL_statusz00_5181, BgL_headerz00_5183,
													BgL_clenz00_5186, BgL_tencz00_5187, BEOA);
												break;
											case ((long) 301):
											case ((long) 302):
											case ((long) 303):
											case ((long) 307):

												{	/* Unsafe/http.scm 588 */
													obj_t BgL_locz00_5196;

													BgL_locz00_5196 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BGl_keyword5457z00zz__httpz00, BgL_headerz00_5183);
													if (PAIRP(BgL_locz00_5196))
														{	/* Llib/object.scm 90 */
															BgL_z62httpzd2redirectionzb0_bglt
																BgL_arg4593z00_5198;
															{	/* Llib/object.scm 90 */
																obj_t BgL_arg4594z00_5199;

																obj_t BgL_arg4595z00_5200;

																{	/* Llib/object.scm 90 */

																	{	/* Llib/object.scm 90 */

																		BgL_arg4594z00_5199 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																	}
																}
																BgL_arg4595z00_5200 = CDR(BgL_locz00_5196);
																{	/* Unsafe/http.scm 594 */
																	BgL_z62httpzd2redirectionzb0_bglt
																		BgL_res5222z00_8698;
																	{	/* Unsafe/http.scm 594 */
																		obj_t BgL_url2033z00_8679;

																		BgL_url2033z00_8679 = BgL_arg4595z00_5200;
																		{	/* Unsafe/http.scm 594 */
																			BgL_z62httpzd2redirectionzb0_bglt
																				BgL_new2034z00_8680;
																			{	/* Unsafe/http.scm 594 */
																				BgL_z62httpzd2redirectionzb0_bglt
																					BgL_res5220z00_8685;
																				{	/* Unsafe/http.scm 594 */
																					BgL_z62httpzd2redirectionzb0_bglt
																						BgL_new2048z00_8681;
																					BgL_new2048z00_8681 =
																						((BgL_z62httpzd2redirectionzb0_bglt)
																						BREF(GC_MALLOC(sizeof(struct
																									BgL_z62httpzd2redirectionzb0_bgl))));
																					BGL_OBJECT_CLASS_NUM_SET(
																						(BgL_objectz00_bglt)
																						(BgL_new2048z00_8681),
																						BGl_classzd2numzd2zz__objectz00
																						(BGl_z62httpzd2redirectionzb0zz__httpz00));
																					{	/* Unsafe/http.scm 594 */
																						BgL_objectz00_bglt BgL_auxz00_13131;

																						BgL_auxz00_13131 =
																							(BgL_objectz00_bglt)
																							(BgL_new2048z00_8681);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_auxz00_13131, BFALSE);
																					}
																					BgL_res5220z00_8685 =
																						BgL_new2048z00_8681;
																				}
																				BgL_new2034z00_8680 =
																					BgL_res5220z00_8685;
																			}
																			{	/* Unsafe/http.scm 594 */
																				BgL_z62httpzd2redirectionzb0_bglt
																					BgL_res5221z00_8697;
																				{	/* Unsafe/http.scm 594 */
																					BgL_z62httpzd2redirectionzb0_bglt
																						BgL_new2041z00_8686;
																					BgL_new2041z00_8686 =
																						BgL_new2034z00_8680;
																					{	/* Unsafe/http.scm 594 */
																						obj_t BgL_fname2036z00_8692;

																						obj_t BgL_location2037z00_8693;

																						obj_t BgL_stack2038z00_8694;

																						obj_t BgL_port2039z00_8695;

																						obj_t BgL_url2040z00_8696;

																						BgL_fname2036z00_8692 = BFALSE;
																						BgL_location2037z00_8693 = BFALSE;
																						BgL_stack2038z00_8694 =
																							BgL_arg4594z00_5199;
																						BgL_port2039z00_8695 = BgL_ipz00_50;
																						BgL_url2040z00_8696 =
																							BgL_url2033z00_8679;
																						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_8686))->BgL_fnamez00) = ((obj_t) BgL_fname2036z00_8692), BUNSPEC);
																						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_8686))->BgL_locationz00) = ((obj_t) BgL_location2037z00_8693), BUNSPEC);
																						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_8686))->BgL_stackz00) = ((obj_t) BgL_stack2038z00_8694), BUNSPEC);
																						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_8686))->BgL_portz00) = ((obj_t) BgL_port2039z00_8695), BUNSPEC);
																						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_8686))->BgL_urlz00) = ((obj_t) BgL_url2040z00_8696), BUNSPEC);
																						BgL_res5221z00_8697 =
																							BgL_new2041z00_8686;
																				}} BgL_res5221z00_8697;
																			}
																			BgL_res5222z00_8698 = BgL_new2034z00_8680;
																	}}
																	BgL_arg4593z00_5198 = BgL_res5222z00_8698;
															}}
															return
																BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg4593z00_5198));
														}
													else
														{	/* Llib/object.scm 90 */
															BgL_z62httpzd2redirectionzd2errorz62_bglt
																BgL_arg4596z00_5202;
															{	/* Llib/object.scm 90 */
																obj_t BgL_arg4597z00_5203;

																obj_t BgL_arg4598z00_5204;

																{	/* Llib/object.scm 90 */

																	{	/* Llib/object.scm 90 */

																		BgL_arg4597z00_5203 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																	}
																}
																BgL_arg4598z00_5204 =
																	BGl_symbol5459z00zz__httpz00;
																{	/* Unsafe/http.scm 590 */
																	BgL_z62httpzd2redirectionzd2errorz62_bglt
																		BgL_res5225z00_8725;
																	{	/* Unsafe/http.scm 590 */
																		BgL_z62httpzd2redirectionzd2errorz62_bglt
																			BgL_new1904z00_8705;
																		{	/* Unsafe/http.scm 590 */
																			BgL_z62httpzd2redirectionzd2errorz62_bglt
																				BgL_res5223z00_8710;
																			{	/* Unsafe/http.scm 590 */
																				BgL_z62httpzd2redirectionzd2errorz62_bglt
																					BgL_new1920z00_8706;
																				BgL_new1920z00_8706 =
																					(
																					(BgL_z62httpzd2redirectionzd2errorz62_bglt)
																					BREF(GC_MALLOC(sizeof(struct
																								BgL_z62httpzd2redirectionzd2errorz62_bgl))));
																				BGL_OBJECT_CLASS_NUM_SET(
																					(BgL_objectz00_bglt)
																					(BgL_new1920z00_8706),
																					BGl_classzd2numzd2zz__objectz00
																					(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
																				{	/* Unsafe/http.scm 590 */
																					BgL_objectz00_bglt BgL_auxz00_13146;

																					BgL_auxz00_13146 =
																						(BgL_objectz00_bglt)
																						(BgL_new1920z00_8706);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_auxz00_13146, BFALSE);
																				}
																				BgL_res5223z00_8710 =
																					BgL_new1920z00_8706;
																			}
																			BgL_new1904z00_8705 = BgL_res5223z00_8710;
																		}
																		{	/* Unsafe/http.scm 590 */
																			BgL_z62httpzd2redirectionzd2errorz62_bglt
																				BgL_res5224z00_8724;
																			{	/* Unsafe/http.scm 590 */
																				BgL_z62httpzd2redirectionzd2errorz62_bglt
																					BgL_new1912z00_8711;
																				BgL_new1912z00_8711 =
																					BgL_new1904z00_8705;
																				{	/* Unsafe/http.scm 590 */
																					obj_t BgL_fname1906z00_8718;

																					obj_t BgL_location1907z00_8719;

																					obj_t BgL_stack1908z00_8720;

																					obj_t BgL_proc1909z00_8721;

																					obj_t BgL_msg1910z00_8722;

																					obj_t BgL_obj1911z00_8723;

																					BgL_fname1906z00_8718 = BFALSE;
																					BgL_location1907z00_8719 = BFALSE;
																					BgL_stack1908z00_8720 =
																						BgL_arg4597z00_5203;
																					BgL_proc1909z00_8721 =
																						BgL_arg4598z00_5204;
																					BgL_msg1910z00_8722 =
																						BGl_string5461z00zz__httpz00;
																					BgL_obj1911z00_8723 = BgL_ipz00_50;
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_fnamez00) = ((obj_t) BgL_fname1906z00_8718), BUNSPEC);
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_locationz00) = ((obj_t) BgL_location1907z00_8719), BUNSPEC);
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_stackz00) = ((obj_t) BgL_stack1908z00_8720), BUNSPEC);
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_procz00) = ((obj_t) BgL_proc1909z00_8721), BUNSPEC);
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_msgz00) = ((obj_t) BgL_msg1910z00_8722), BUNSPEC);
																					((((BgL_z62httpzd2redirectionzd2errorz62_bglt) CREF(BgL_new1912z00_8711))->BgL_objz00) = ((obj_t) BgL_obj1911z00_8723), BUNSPEC);
																					BgL_res5224z00_8724 =
																						BgL_new1912z00_8711;
																			}} BgL_res5224z00_8724;
																		}
																		BgL_res5225z00_8725 = BgL_new1904z00_8705;
																	}
																	BgL_arg4596z00_5202 = BgL_res5225z00_8725;
															}}
															return
																BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg4596z00_5202));
														}
												}
												break;
											default:
											BgL_case_else2294z00_5191:
												{	/* Unsafe/http.scm 598 */
													obj_t BgL__ortest_2292z00_5207;

													BgL__ortest_2292z00_5207 =
														PROCEDURE_ENTRY(BgL_procz00_52) (BgL_procz00_52,
														BgL_ipz00_50, BgL_statusz00_5181,
														BgL_headerz00_5183, BgL_clenz00_5186,
														BgL_tencz00_5187, BEOA);
													if (CBOOL(BgL__ortest_2292z00_5207))
														{	/* Unsafe/http.scm 598 */
															return BgL__ortest_2292z00_5207;
														}
													else
														{	/* Llib/object.scm 90 */
															BgL_z62httpzd2statuszd2errorz62_bglt
																BgL_arg4601z00_5208;
															{	/* Llib/object.scm 90 */
																obj_t BgL_arg4602z00_5209;

																obj_t BgL_arg4603z00_5210;

																obj_t BgL_arg4604z00_5211;

																{	/* Llib/object.scm 90 */

																	{	/* Llib/object.scm 90 */

																		BgL_arg4602z00_5209 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																	}
																}
																BgL_arg4603z00_5210 =
																	BGl_symbol5452z00zz__httpz00;
																{	/* Unsafe/http.scm 601 */
																	obj_t BgL_list4605z00_5213;

																	BgL_list4605z00_5213 =
																		MAKE_PAIR(BgL_statusz00_5181, BNIL);
																	BgL_arg4604z00_5211 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string5454z00zz__httpz00,
																		BgL_list4605z00_5213);
																}
																{	/* Unsafe/http.scm 599 */
																	BgL_z62httpzd2statuszd2errorz62_bglt
																		BgL_res5228z00_8755;
																	{	/* Unsafe/http.scm 599 */
																		int BgL_status1967z00_8732;

																		BgL_status1967z00_8732 =
																			CINT(BgL_statusz00_5181);
																		{	/* Unsafe/http.scm 599 */
																			BgL_z62httpzd2statuszd2errorz62_bglt
																				BgL_new1968z00_8733;
																			{	/* Unsafe/http.scm 599 */
																				BgL_z62httpzd2statuszd2errorz62_bglt
																					BgL_res5226z00_8738;
																				{	/* Unsafe/http.scm 599 */
																					BgL_z62httpzd2statuszd2errorz62_bglt
																						BgL_new1986z00_8734;
																					BgL_new1986z00_8734 =
																						(
																						(BgL_z62httpzd2statuszd2errorz62_bglt)
																						BREF(GC_MALLOC(sizeof(struct
																									BgL_z62httpzd2statuszd2errorz62_bgl))));
																					BGL_OBJECT_CLASS_NUM_SET(
																						(BgL_objectz00_bglt)
																						(BgL_new1986z00_8734),
																						BGl_classzd2numzd2zz__objectz00
																						(BGl_z62httpzd2statuszd2errorz62zz__httpz00));
																					{	/* Unsafe/http.scm 599 */
																						BgL_objectz00_bglt BgL_auxz00_13169;

																						BgL_auxz00_13169 =
																							(BgL_objectz00_bglt)
																							(BgL_new1986z00_8734);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_auxz00_13169, BFALSE);
																					}
																					BgL_res5226z00_8738 =
																						BgL_new1986z00_8734;
																				}
																				BgL_new1968z00_8733 =
																					BgL_res5226z00_8738;
																			}
																			{	/* Unsafe/http.scm 599 */
																				BgL_z62httpzd2statuszd2errorz62_bglt
																					BgL_res5227z00_8754;
																				{	/* Unsafe/http.scm 599 */
																					BgL_z62httpzd2statuszd2errorz62_bglt
																						BgL_new1977z00_8739;
																					BgL_new1977z00_8739 =
																						BgL_new1968z00_8733;
																					{	/* Unsafe/http.scm 599 */
																						obj_t BgL_fname1970z00_8747;

																						obj_t BgL_location1971z00_8748;

																						obj_t BgL_stack1972z00_8749;

																						obj_t BgL_proc1973z00_8750;

																						obj_t BgL_msg1974z00_8751;

																						obj_t BgL_obj1975z00_8752;

																						int BgL_status1976z00_8753;

																						BgL_fname1970z00_8747 = BFALSE;
																						BgL_location1971z00_8748 = BFALSE;
																						BgL_stack1972z00_8749 =
																							BgL_arg4602z00_5209;
																						BgL_proc1973z00_8750 =
																							BgL_arg4603z00_5210;
																						BgL_msg1974z00_8751 =
																							BgL_arg4604z00_5211;
																						BgL_obj1975z00_8752 = BgL_ipz00_50;
																						BgL_status1976z00_8753 =
																							BgL_status1967z00_8732;
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_fnamez00) = ((obj_t) BgL_fname1970z00_8747), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_locationz00) = ((obj_t) BgL_location1971z00_8748), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_stackz00) = ((obj_t) BgL_stack1972z00_8749), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_procz00) = ((obj_t) BgL_proc1973z00_8750), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_msgz00) = ((obj_t) BgL_msg1974z00_8751), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_objz00) = ((obj_t) BgL_obj1975z00_8752), BUNSPEC);
																						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_8739))->BgL_statusz00) = ((int) BgL_status1976z00_8753), BUNSPEC);
																						BgL_res5227z00_8754 =
																							BgL_new1977z00_8739;
																				}} BgL_res5227z00_8754;
																			}
																			BgL_res5228z00_8755 = BgL_new1968z00_8733;
																	}}
																	BgL_arg4601z00_5208 = BgL_res5228z00_8755;
															}}
															return
																BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg4601z00_5208));
														}
												}
											}
									}
								else
									{	/* Unsafe/http.scm 575 */
										goto BgL_case_else2294z00_5191;
									}
							}
						}
					}
				}
			}
		}
	}



/* _http-parse-response */
	obj_t BGl__httpzd2parsezd2responsez00zz__httpz00(obj_t BgL_envz00_9563,
		obj_t BgL_ipz00_9564, obj_t BgL_opz00_9565, obj_t BgL_procz00_9566)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 570 */
			{	/* Unsafe/http.scm 571 */
				obj_t BgL_auxz00_13197;

				obj_t BgL_auxz00_13190;

				obj_t BgL_auxz00_13183;

				if (PROCEDUREP(BgL_procz00_9566))
					{	/* Unsafe/http.scm 571 */
						BgL_auxz00_13197 = BgL_procz00_9566;
					}
				else
					{
						obj_t BgL_auxz00_13200;

						BgL_auxz00_13200 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 19562)), BGl_string5462z00zz__httpz00,
							BGl_string5463z00zz__httpz00, BgL_procz00_9566);
						FAILURE(BgL_auxz00_13200, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_opz00_9565))
					{	/* Unsafe/http.scm 571 */
						BgL_auxz00_13190 = BgL_opz00_9565;
					}
				else
					{
						obj_t BgL_auxz00_13193;

						BgL_auxz00_13193 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 19562)), BGl_string5462z00zz__httpz00,
							BGl_string5451z00zz__httpz00, BgL_opz00_9565);
						FAILURE(BgL_auxz00_13193, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_9564))
					{	/* Unsafe/http.scm 571 */
						BgL_auxz00_13183 = BgL_ipz00_9564;
					}
				else
					{
						obj_t BgL_auxz00_13186;

						BgL_auxz00_13186 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 19562)), BGl_string5462z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9564);
						FAILURE(BgL_auxz00_13186, BFALSE, BFALSE);
					}
				return
					BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_auxz00_13183,
					BgL_auxz00_13190, BgL_auxz00_13197);
			}
		}
	}



/* http-response-body->port */
	BGL_EXPORTED_DEF obj_t
		BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t BgL_ipz00_53,
		obj_t BgL_opz00_54)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 608 */
			return
				BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_ipz00_53, BgL_opz00_54,
				BGl_proc5464z00zz__httpz00);
		}
	}



/* _http-response-body->port */
	obj_t BGl__httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t
		BgL_envz00_9569, obj_t BgL_ipz00_9570, obj_t BgL_opz00_9571)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 608 */
			{	/* Unsafe/http.scm 611 */
				obj_t BgL_auxz00_13213;

				obj_t BgL_auxz00_13206;

				if (OUTPUT_PORTP(BgL_opz00_9571))
					{	/* Unsafe/http.scm 611 */
						BgL_auxz00_13213 = BgL_opz00_9571;
					}
				else
					{
						obj_t BgL_auxz00_13216;

						BgL_auxz00_13216 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 20920)), BGl_string5465z00zz__httpz00,
							BGl_string5451z00zz__httpz00, BgL_opz00_9571);
						FAILURE(BgL_auxz00_13216, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_9570))
					{	/* Unsafe/http.scm 611 */
						BgL_auxz00_13206 = BgL_ipz00_9570;
					}
				else
					{
						obj_t BgL_auxz00_13209;

						BgL_auxz00_13209 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 20920)), BGl_string5465z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9570);
						FAILURE(BgL_auxz00_13209, BFALSE, BFALSE);
					}
				return
					BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(BgL_auxz00_13206,
					BgL_auxz00_13213);
			}
		}
	}



/* parse-body */
	obj_t BGl_parsezd2bodyzd2zz__httpz00(obj_t BgL_envz00_9572,
		obj_t BgL_ipz00_9573, obj_t BgL_statuszd2codezd2_9574,
		obj_t BgL_headerz00_9575, obj_t BgL_clenz00_9576, obj_t BgL_tencz00_9577)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 618 */
			{
				obj_t BgL_ipz00_5215;

				obj_t BgL_statuszd2codezd2_5216;

				obj_t BgL_headerz00_5217;

				obj_t BgL_clenz00_5218;

				obj_t BgL_tencz00_5219;

				BgL_ipz00_5215 = BgL_ipz00_9573;
				BgL_statuszd2codezd2_5216 = BgL_statuszd2codezd2_9574;
				BgL_headerz00_5217 = BgL_headerz00_9575;
				BgL_clenz00_5218 = BgL_clenz00_9576;
				BgL_tencz00_5219 = BgL_tencz00_9577;
				if (INPUT_PORTP(BgL_ipz00_5215))
					{	/* Unsafe/http.scm 611 */
						if (CBOOL(BgL_clenz00_5218))
							{	/* Unsafe/http.scm 611 */
								obj_t BgL_pz00_8757;

								{	/* Unsafe/http.scm 611 */
									obj_t BgL_arg4610z00_8758;

									BgL_arg4610z00_8758 =
										BGl_barrierzd2portzd2zz__httpz00(BgL_ipz00_5215,
										BgL_clenz00_5218);
									{	/* Unsafe/http.scm 611 */

										BgL_pz00_8757 =
											BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00
											(BgL_arg4610z00_8758, BTRUE);
									}
								}
								{	/* Unsafe/http.scm 611 */
									obj_t BgL_zc3anonymousza34609ze3z83_9567;

									BgL_zc3anonymousza34609ze3z83_9567 =
										make_fx_procedure(BGl_zc3anonymousza34609ze3z83zz__httpz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza34609ze3z83_9567,
										(int) (((long) 0)), BgL_ipz00_5215);
									BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
										(BgL_pz00_8757, BgL_zc3anonymousza34609ze3z83_9567);
								}
								return BgL_pz00_8757;
							}
						else
							{	/* Unsafe/http.scm 611 */
								return BgL_ipz00_5215;
							}
					}
				else
					{	/* Unsafe/http.scm 611 */

						return
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BGl_string5425z00zz__httpz00, BINT(((long) 0)));
		}}}
	}



/* <anonymous:4609> */
	obj_t BGl_zc3anonymousza34609ze3z83zz__httpz00(obj_t BgL_envz00_9578,
		obj_t BgL_inz00_9580)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 615 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_9578,
					(int) (((long) 0))));
		}
	}



/* http-read-crlf */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2readzd2crlfz00zz__httpz00(obj_t BgL_pz00_55)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 624 */
			{
				obj_t BgL_inputzd2portzd2_5235;

				BgL_inputzd2portzd2_5235 = BgL_pz00_55;
				{
					obj_t BgL_inputzd2portzd2_5322;

					long BgL_lastzd2matchzd2_5323;

					obj_t BgL_inputzd2portzd2_5312;

					long BgL_lastzd2matchzd2_5313;

					obj_t BgL_inputzd2portzd2_5300;

					long BgL_lastzd2matchzd2_5301;

					obj_t BgL_inputzd2portzd2_5285;

					long BgL_lastzd2matchzd2_5286;

					obj_t BgL_inputzd2portzd2_5270;

					long BgL_lastzd2matchzd2_5271;

					RGC_START_MATCH(BgL_inputzd2portzd2_5235);
					{	/* Unsafe/http.scm 626 */
						long BgL_matchz00_5411;

						BgL_inputzd2portzd2_5270 = BgL_inputzd2portzd2_5235;
						BgL_lastzd2matchzd2_5271 = ((long) 1);
					BgL_zc3anonymousza34614ze3z83_5272:
						{	/* Unsafe/http.scm 626 */
							int BgL_currentzd2charzd2_5273;

							BgL_currentzd2charzd2_5273 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5270);
							if (((long) (BgL_currentzd2charzd2_5273) == ((long) 0)))
								{	/* Unsafe/http.scm 626 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5270))
										{	/* Unsafe/http.scm 626 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_5270))
												{

													goto BgL_zc3anonymousza34614ze3z83_5272;
												}
											else
												{	/* Unsafe/http.scm 626 */
													BgL_matchz00_5411 = BgL_lastzd2matchzd2_5271;
												}
										}
									else
										{	/* Unsafe/http.scm 626 */
											long BgL_newzd2matchzd2_8774;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_5270);
											BgL_newzd2matchzd2_8774 = ((long) 1);
											BgL_matchz00_5411 = BgL_newzd2matchzd2_8774;
								}}
							else
								{	/* Unsafe/http.scm 626 */
									if (((long) (BgL_currentzd2charzd2_5273) == ((long) 13)))
										{	/* Unsafe/http.scm 626 */
											BgL_inputzd2portzd2_5300 = BgL_inputzd2portzd2_5270;
											BgL_lastzd2matchzd2_5301 = BgL_lastzd2matchzd2_5271;
										BgL_zc3anonymousza34631ze3z83_5302:
											{	/* Unsafe/http.scm 626 */
												long BgL_newzd2matchzd2_5303;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_5300);
												BgL_newzd2matchzd2_5303 = ((long) 1);
												{	/* Unsafe/http.scm 626 */
													int BgL_currentzd2charzd2_5304;

													BgL_currentzd2charzd2_5304 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5300);
													if (
														((long) (BgL_currentzd2charzd2_5304) == ((long) 0)))
														{	/* Unsafe/http.scm 626 */
															bool_t BgL_testz00_13256;

															{	/* Unsafe/http.scm 626 */
																bool_t BgL_res5230z00_8825;

																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5300))
																	{	/* Unsafe/http.scm 626 */
																		BgL_res5230z00_8825 =
																			rgc_fill_buffer(BgL_inputzd2portzd2_5300);
																	}
																else
																	{	/* Unsafe/http.scm 626 */
																		BgL_res5230z00_8825 = ((bool_t) 0);
																	}
																BgL_testz00_13256 = BgL_res5230z00_8825;
															}
															if (BgL_testz00_13256)
																{

																	goto BgL_zc3anonymousza34631ze3z83_5302;
																}
															else
																{	/* Unsafe/http.scm 626 */
																	BgL_matchz00_5411 = BgL_newzd2matchzd2_5303;
																}
														}
													else
														{	/* Unsafe/http.scm 626 */
															if (
																((long) (BgL_currentzd2charzd2_5304) ==
																	((long) 10)))
																{	/* Unsafe/http.scm 626 */
																	long BgL_newzd2matchzd2_8830;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_5300);
																	BgL_newzd2matchzd2_8830 = ((long) 0);
																	BgL_matchz00_5411 = BgL_newzd2matchzd2_8830;
																}
															else
																{	/* Unsafe/http.scm 626 */
																	BgL_matchz00_5411 = BgL_newzd2matchzd2_5303;
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/http.scm 626 */
											if (((long) (BgL_currentzd2charzd2_5273) == ((long) 10)))
												{	/* Unsafe/http.scm 626 */
													long BgL_newzd2matchzd2_8782;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_5270);
													BgL_newzd2matchzd2_8782 = ((long) 0);
													BgL_matchz00_5411 = BgL_newzd2matchzd2_8782;
												}
											else
												{	/* Unsafe/http.scm 626 */
													bool_t BgL_testz00_13268;

													if (
														((long) (BgL_currentzd2charzd2_5273) == ((long) 9)))
														{	/* Unsafe/http.scm 626 */
															BgL_testz00_13268 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/http.scm 626 */
															BgL_testz00_13268 =
																(
																(long) (BgL_currentzd2charzd2_5273) ==
																((long) 32));
														}
													if (BgL_testz00_13268)
														{	/* Unsafe/http.scm 626 */
															BgL_inputzd2portzd2_5285 =
																BgL_inputzd2portzd2_5270;
															BgL_lastzd2matchzd2_5286 =
																BgL_lastzd2matchzd2_5271;
														BgL_zc3anonymousza34623ze3z83_5287:
															{	/* Unsafe/http.scm 626 */
																long BgL_newzd2matchzd2_5288;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_5285);
																BgL_newzd2matchzd2_5288 = ((long) 1);
																{	/* Unsafe/http.scm 626 */
																	int BgL_currentzd2charzd2_5289;

																	BgL_currentzd2charzd2_5289 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_5285);
																	if (((long) (BgL_currentzd2charzd2_5289) ==
																			((long) 0)))
																		{	/* Unsafe/http.scm 626 */
																			bool_t BgL_testz00_13279;

																			{	/* Unsafe/http.scm 626 */
																				bool_t BgL_res5229z00_8802;

																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_5285))
																					{	/* Unsafe/http.scm 626 */
																						BgL_res5229z00_8802 =
																							rgc_fill_buffer
																							(BgL_inputzd2portzd2_5285);
																					}
																				else
																					{	/* Unsafe/http.scm 626 */
																						BgL_res5229z00_8802 = ((bool_t) 0);
																					}
																				BgL_testz00_13279 = BgL_res5229z00_8802;
																			}
																			if (BgL_testz00_13279)
																				{

																					goto
																						BgL_zc3anonymousza34623ze3z83_5287;
																				}
																			else
																				{	/* Unsafe/http.scm 626 */
																					BgL_matchz00_5411 =
																						BgL_newzd2matchzd2_5288;
																				}
																		}
																	else
																		{	/* Unsafe/http.scm 626 */
																			if (
																				((long) (BgL_currentzd2charzd2_5289) ==
																					((long) 13)))
																				{	/* Unsafe/http.scm 626 */
																					BgL_inputzd2portzd2_5322 =
																						BgL_inputzd2portzd2_5285;
																					BgL_lastzd2matchzd2_5323 =
																						BgL_newzd2matchzd2_5288;
																				BgL_zc3anonymousza34646ze3z83_5324:
																					{	/* Unsafe/http.scm 626 */
																						int BgL_currentzd2charzd2_5325;

																						BgL_currentzd2charzd2_5325 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_5322);
																						if (((long)
																								(BgL_currentzd2charzd2_5325) ==
																								((long) 0)))
																							{	/* Unsafe/http.scm 626 */
																								bool_t BgL_testz00_13290;

																								{	/* Unsafe/http.scm 626 */
																									bool_t BgL_res5232z00_8861;

																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_5322))
																										{	/* Unsafe/http.scm 626 */
																											BgL_res5232z00_8861 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_5322);
																										}
																									else
																										{	/* Unsafe/http.scm 626 */
																											BgL_res5232z00_8861 =
																												((bool_t) 0);
																										}
																									BgL_testz00_13290 =
																										BgL_res5232z00_8861;
																								}
																								if (BgL_testz00_13290)
																									{

																										goto
																											BgL_zc3anonymousza34646ze3z83_5324;
																									}
																								else
																									{	/* Unsafe/http.scm 626 */
																										BgL_matchz00_5411 =
																											BgL_lastzd2matchzd2_5323;
																									}
																							}
																						else
																							{	/* Unsafe/http.scm 626 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_5325)
																										== ((long) 10)))
																									{	/* Unsafe/http.scm 626 */
																										long
																											BgL_newzd2matchzd2_8866;
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_5322);
																										BgL_newzd2matchzd2_8866 =
																											((long) 0);
																										BgL_matchz00_5411 =
																											BgL_newzd2matchzd2_8866;
																									}
																								else
																									{	/* Unsafe/http.scm 626 */
																										BgL_matchz00_5411 =
																											BgL_lastzd2matchzd2_5323;
																									}
																							}
																					}
																				}
																			else
																				{	/* Unsafe/http.scm 626 */
																					if (
																						((long) (BgL_currentzd2charzd2_5289)
																							== ((long) 10)))
																						{	/* Unsafe/http.scm 626 */
																							long BgL_newzd2matchzd2_8809;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_5285);
																							BgL_newzd2matchzd2_8809 =
																								((long) 0);
																							BgL_matchz00_5411 =
																								BgL_newzd2matchzd2_8809;
																						}
																					else
																						{	/* Unsafe/http.scm 626 */
																							bool_t BgL_testz00_13302;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_5289)
																									== ((long) 9)))
																								{	/* Unsafe/http.scm 626 */
																									BgL_testz00_13302 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/http.scm 626 */
																									BgL_testz00_13302 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_5289)
																										== ((long) 32));
																								}
																							if (BgL_testz00_13302)
																								{	/* Unsafe/http.scm 626 */
																									BgL_inputzd2portzd2_5312 =
																										BgL_inputzd2portzd2_5285;
																									BgL_lastzd2matchzd2_5313 =
																										BgL_newzd2matchzd2_5288;
																								BgL_zc3anonymousza34639ze3z83_5314:
																									{	/* Unsafe/http.scm 626 */
																										int
																											BgL_currentzd2charzd2_5315;
																										BgL_currentzd2charzd2_5315 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_inputzd2portzd2_5312);
																										if (((long)
																												(BgL_currentzd2charzd2_5315)
																												== ((long) 0)))
																											{	/* Unsafe/http.scm 626 */
																												bool_t
																													BgL_testz00_13312;
																												{	/* Unsafe/http.scm 626 */
																													bool_t
																														BgL_res5231z00_8841;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_5312))
																														{	/* Unsafe/http.scm 626 */
																															BgL_res5231z00_8841
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_5312);
																														}
																													else
																														{	/* Unsafe/http.scm 626 */
																															BgL_res5231z00_8841
																																= ((bool_t) 0);
																														}
																													BgL_testz00_13312 =
																														BgL_res5231z00_8841;
																												}
																												if (BgL_testz00_13312)
																													{

																														goto
																															BgL_zc3anonymousza34639ze3z83_5314;
																													}
																												else
																													{	/* Unsafe/http.scm 626 */
																														BgL_matchz00_5411 =
																															BgL_lastzd2matchzd2_5313;
																													}
																											}
																										else
																											{	/* Unsafe/http.scm 626 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_5315)
																														== ((long) 13)))
																													{
																														long
																															BgL_lastzd2matchzd2_13320;
																														obj_t
																															BgL_inputzd2portzd2_13319;
																														BgL_inputzd2portzd2_13319
																															=
																															BgL_inputzd2portzd2_5312;
																														BgL_lastzd2matchzd2_13320
																															=
																															BgL_lastzd2matchzd2_5313;
																														BgL_lastzd2matchzd2_5323
																															=
																															BgL_lastzd2matchzd2_13320;
																														BgL_inputzd2portzd2_5322
																															=
																															BgL_inputzd2portzd2_13319;
																														goto
																															BgL_zc3anonymousza34646ze3z83_5324;
																													}
																												else
																													{	/* Unsafe/http.scm 626 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_5315)
																																== ((long) 10)))
																															{	/* Unsafe/http.scm 626 */
																																long
																																	BgL_newzd2matchzd2_8848;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_5312);
																																BgL_newzd2matchzd2_8848
																																	= ((long) 0);
																																BgL_matchz00_5411
																																	=
																																	BgL_newzd2matchzd2_8848;
																															}
																														else
																															{	/* Unsafe/http.scm 626 */
																																bool_t
																																	BgL_testz00_13325;
																																if (((long)
																																		(BgL_currentzd2charzd2_5315)
																																		==
																																		((long) 9)))
																																	{	/* Unsafe/http.scm 626 */
																																		BgL_testz00_13325
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/http.scm 626 */
																																		BgL_testz00_13325
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_5315)
																																			==
																																			((long)
																																				32));
																																	}
																																if (BgL_testz00_13325)
																																	{

																																		goto
																																			BgL_zc3anonymousza34639ze3z83_5314;
																																	}
																																else
																																	{	/* Unsafe/http.scm 626 */
																																		BgL_matchz00_5411
																																			=
																																			BgL_lastzd2matchzd2_5313;
																																	}
																															}
																													}
																											}
																									}
																								}
																							else
																								{	/* Unsafe/http.scm 626 */
																									BgL_matchz00_5411 =
																										BgL_newzd2matchzd2_5288;
																								}
																						}
																				}
																		}
																}
															}
														}
													else
														{	/* Unsafe/http.scm 626 */
															long BgL_newzd2matchzd2_8790;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_5270);
															BgL_newzd2matchzd2_8790 = ((long) 1);
															BgL_matchz00_5411 = BgL_newzd2matchzd2_8790;
						}}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_5235);
						switch (BgL_matchz00_5411)
							{
							case ((long) 1):

								{	/* Llib/object.scm 90 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg4720z00_5415;

									{	/* Llib/object.scm 90 */
										obj_t BgL_arg4721z00_5416;

										obj_t BgL_arg4722z00_5417;

										obj_t BgL_arg4724z00_5419;

										{	/* Llib/object.scm 90 */

											{	/* Llib/object.scm 90 */

												BgL_arg4721z00_5416 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}}
										BgL_arg4722z00_5417 = BGl_symbol5466z00zz__httpz00;
										{	/* Unsafe/http.scm 633 */
											obj_t BgL_auxz00_13334;

											{	/* Unsafe/http.scm 626 */
												bool_t BgL_testz00_13335;

												{	/* Unsafe/http.scm 626 */
													long BgL_arg4711z00_5400;

													BgL_arg4711z00_5400 =
														RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5235);
													BgL_testz00_13335 =
														(BgL_arg4711z00_5400 == ((long) 0));
												}
												if (BgL_testz00_13335)
													{	/* Unsafe/http.scm 626 */
														BgL_auxz00_13334 = BCNST(256);
													}
												else
													{	/* Unsafe/http.scm 626 */
														BgL_auxz00_13334 =
															BCHAR(RGC_BUFFER_CHARACTER
															(BgL_inputzd2portzd2_5235));
													}
											}
											BgL_arg4724z00_5419 =
												BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00
												(BgL_auxz00_13334, BgL_inputzd2portzd2_5235);
										}
										BgL_arg4720z00_5415 =
											BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
											BFALSE, BgL_arg4721z00_5416, BgL_arg4722z00_5417,
											BGl_string5332z00zz__httpz00, BgL_arg4724z00_5419);
									}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg4720z00_5415));
								}
								break;
							case ((long) 0):

								return BGl_string5402z00zz__httpz00;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string5330z00zz__httpz00,
									BGl_string5331z00zz__httpz00, BINT(BgL_matchz00_5411));
							}
					}
				}
			}
		}
	}



/* _http-read-crlf */
	obj_t BGl__httpzd2readzd2crlfz00zz__httpz00(obj_t BgL_envz00_9581,
		obj_t BgL_pz00_9582)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 624 */
			{	/* Unsafe/http.scm 626 */
				obj_t BgL_auxz00_13347;

				if (INPUT_PORTP(BgL_pz00_9582))
					{	/* Unsafe/http.scm 626 */
						BgL_auxz00_13347 = BgL_pz00_9582;
					}
				else
					{
						obj_t BgL_auxz00_13350;

						BgL_auxz00_13350 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 21461)), BGl_string5468z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_pz00_9582);
						FAILURE(BgL_auxz00_13350, BFALSE, BFALSE);
					}
				return BGl_httpzd2readzd2crlfz00zz__httpz00(BgL_auxz00_13347);
			}
		}
	}



/* barrier-port */
	obj_t BGl_barrierzd2portzd2zz__httpz00(obj_t BgL_portz00_56,
		obj_t BgL_contentzd2lengthzd2_57)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 689 */
			{	/* Unsafe/http.scm 690 */
				obj_t BgL_contentzd2lengthzd2_9589;

				BgL_contentzd2lengthzd2_9589 = MAKE_CELL(BgL_contentzd2lengthzd2_57);
				{	/* Unsafe/http.scm 690 */
					obj_t BgL_bufz00_5457;

					BgL_bufz00_5457 =
						make_string(BGl_za2bufferzd2lengthza2zd2zz__httpz00,
						((unsigned char) ' '));
					{	/* Unsafe/http.scm 691 */
						obj_t BgL_zc3anonymousza34727ze3z83_9583;

						BgL_zc3anonymousza34727ze3z83_9583 =
							make_fx_procedure(BGl_zc3anonymousza34727ze3z83zz__httpz00,
							(int) (((long) 0)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3anonymousza34727ze3z83_9583,
							(int) (((long) 0)), BgL_contentzd2lengthzd2_9589);
						PROCEDURE_SET(BgL_zc3anonymousza34727ze3z83_9583,
							(int) (((long) 1)), BgL_bufz00_5457);
						PROCEDURE_SET(BgL_zc3anonymousza34727ze3z83_9583,
							(int) (((long) 2)), BgL_portz00_56);
						return BgL_zc3anonymousza34727ze3z83_9583;
					}
				}
			}
		}
	}



/* <anonymous:4727> */
	obj_t BGl_zc3anonymousza34727ze3z83zz__httpz00(obj_t BgL_envz00_9584)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 691 */
			{	/* Unsafe/http.scm 692 */
				obj_t BgL_contentzd2lengthzd2_9585;

				obj_t BgL_bufz00_9586;

				obj_t BgL_portz00_9587;

				BgL_contentzd2lengthzd2_9585 =
					PROCEDURE_REF(BgL_envz00_9584, (int) (((long) 0)));
				BgL_bufz00_9586 = PROCEDURE_REF(BgL_envz00_9584, (int) (((long) 1)));
				BgL_portz00_9587 = PROCEDURE_REF(BgL_envz00_9584, (int) (((long) 2)));
				{

					{	/* Unsafe/http.scm 692 */
						bool_t BgL_testz00_13371;

						{	/* Unsafe/http.scm 692 */
							long BgL_n1z00_8882;

							{	/* Unsafe/http.scm 692 */
								obj_t BgL_auxz00_13372;

								BgL_auxz00_13372 = CELL_REF(BgL_contentzd2lengthzd2_9585);
								BgL_n1z00_8882 = BELONG_TO_LONG(BgL_auxz00_13372);
							}
							BgL_testz00_13371 = (BgL_n1z00_8882 > ((long) 0));
						}
						if (BgL_testz00_13371)
							{	/* Unsafe/http.scm 693 */
								long BgL_nz00_5460;

								{	/* Unsafe/http.scm 693 */
									long BgL_xz00_5464;

									long BgL_yz00_5465;

									BgL_xz00_5464 = BGl_za2bufferzd2lengthza2zd2zz__httpz00;
									{	/* Unsafe/http.scm 693 */
										long BgL_res5235z00_8885;

										{	/* Unsafe/http.scm 693 */
											long BgL_xz00_8884;

											{	/* Unsafe/http.scm 693 */
												obj_t BgL_auxz00_13375;

												BgL_auxz00_13375 =
													CELL_REF(BgL_contentzd2lengthzd2_9585);
												BgL_xz00_8884 = BELONG_TO_LONG(BgL_auxz00_13375);
											}
											{	/* Unsafe/http.scm 693 */
												long BgL_auxz00_13377;

												{	/* Unsafe/http.scm 693 */
													long BgL_auxz00_13378;

													BgL_auxz00_13378 = ELONG_TO_LONG(BgL_xz00_8884);
													BgL_auxz00_13377 = ELONG_TO_LONG(BgL_auxz00_13378);
												}
												BgL_res5235z00_8885 = ELONG_TO_LONG(BgL_auxz00_13377);
										}}
										BgL_yz00_5465 = BgL_res5235z00_8885;
									}
									if ((BgL_xz00_5464 < BgL_yz00_5465))
										{	/* Unsafe/http.scm 693 */
											BgL_nz00_5460 = BgL_xz00_5464;
										}
									else
										{	/* Unsafe/http.scm 693 */
											BgL_nz00_5460 = BgL_yz00_5465;
										}
								}
								{	/* Unsafe/http.scm 693 */
									obj_t BgL_mz00_5461;

									BgL_mz00_5461 =
										BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
										(BgL_bufz00_9586, BINT(BgL_nz00_5460), BgL_portz00_9587);
									{	/* Unsafe/http.scm 694 */

										{	/* Unsafe/http.scm 695 */
											obj_t BgL_auxz00_9588;

											{	/* Unsafe/http.scm 695 */
												long BgL_arg4729z00_5462;

												{	/* Unsafe/http.scm 695 */
													long BgL_auxz00_13386;

													BgL_auxz00_13386 = (long) CINT(BgL_mz00_5461);
													BgL_arg4729z00_5462 = LONG_TO_ELONG(BgL_auxz00_13386);
												}
												{	/* Unsafe/http.scm 695 */
													long BgL_res5236z00_8891;

													{	/* Unsafe/http.scm 695 */
														long BgL_za71za7_8889;

														{	/* Unsafe/http.scm 695 */
															obj_t BgL_auxz00_13389;

															BgL_auxz00_13389 =
																CELL_REF(BgL_contentzd2lengthzd2_9585);
															BgL_za71za7_8889 =
																BELONG_TO_LONG(BgL_auxz00_13389);
														}
														{	/* Unsafe/http.scm 695 */
															long BgL_auxz00_13391;

															BgL_auxz00_13391 =
																(BgL_za71za7_8889 - BgL_arg4729z00_5462);
															BgL_res5236z00_8891 =
																LONG_TO_ELONG(BgL_auxz00_13391);
													}}
													BgL_auxz00_9588 = make_belong(BgL_res5236z00_8891);
											}}
											CELL_SET(BgL_contentzd2lengthzd2_9585, BgL_auxz00_9588);
										}
										if (
											((long) CINT(BgL_mz00_5461) <
												BGl_za2bufferzd2lengthza2zd2zz__httpz00))
											{	/* Unsafe/http.scm 696 */
												return
													c_substring(BgL_bufz00_9586, ((long) 0),
													(long) CINT(BgL_mz00_5461));
											}
										else
											{	/* Unsafe/http.scm 696 */
												return BgL_bufz00_9586;
											}
									}
								}
							}
						else
							{	/* Unsafe/http.scm 692 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* http-chunks->procedure */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t
		BgL_ipz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 703 */
			{	/* Unsafe/http.scm 704 */
				obj_t BgL_statez00_5468;

				BgL_statez00_5468 = MAKE_CELL(BGl_symbol5469z00zz__httpz00);
				{	/* Unsafe/http.scm 704 */
					obj_t BgL_sza7za7_5469;

					{	/* Unsafe/http.scm 705 */
						obj_t BgL_cellvalz00_13400;

						BgL_cellvalz00_13400 = BINT(((long) 0));
						BgL_sza7za7_5469 = MAKE_CELL(BgL_cellvalz00_13400);
					}
					{	/* Unsafe/http.scm 706 */
						obj_t BgL_bufferz00_5471;

						{	/* Unsafe/http.scm 707 */
							obj_t BgL_list4744z00_5489;

							BgL_list4744z00_5489 =
								MAKE_PAIR(BCHAR(((unsigned char) '\000')), BNIL);
							{	/* Unsafe/http.scm 707 */
								obj_t BgL_res5237z00_8903;

								{	/* Unsafe/http.scm 707 */
									obj_t BgL_arg4962z00_8900;

									BgL_arg4962z00_8900 = CAR(BgL_list4744z00_5489);
									BgL_res5237z00_8903 =
										make_string(((long) 512), CCHAR(BgL_arg4962z00_8900));
								}
								BgL_bufferz00_5471 = BgL_res5237z00_8903;
						}}
						{	/* Unsafe/http.scm 707 */

							{	/* Unsafe/http.scm 708 */
								obj_t BgL_zc3anonymousza34733ze3z83_9590;

								BgL_zc3anonymousza34733ze3z83_9590 =
									make_fx_procedure(BGl_zc3anonymousza34733ze3z83zz__httpz00,
									(int) (((long) 0)), (int) (((long) 5)));
								PROCEDURE_SET(BgL_zc3anonymousza34733ze3z83_9590,
									(int) (((long) 0)), BgL_statez00_5468);
								PROCEDURE_SET(BgL_zc3anonymousza34733ze3z83_9590,
									(int) (((long) 1)), BgL_ipz00_58);
								PROCEDURE_SET(BgL_zc3anonymousza34733ze3z83_9590,
									(int) (((long) 2)), BgL_sza7za7_5469);
								PROCEDURE_SET(BgL_zc3anonymousza34733ze3z83_9590,
									(int) (((long) 3)), BgL_bufferz00_5471);
								PROCEDURE_SET(BgL_zc3anonymousza34733ze3z83_9590,
									(int) (((long) 4)), BINT(((long) 512)));
								return BgL_zc3anonymousza34733ze3z83_9590;
							}
						}
					}
				}
			}
		}
	}



/* _http-chunks->procedure */
	obj_t BGl__httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t BgL_envz00_9591,
		obj_t BgL_ipz00_9592)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 703 */
			{	/* Unsafe/http.scm 704 */
				obj_t BgL_auxz00_13421;

				if (INPUT_PORTP(BgL_ipz00_9592))
					{	/* Unsafe/http.scm 704 */
						BgL_auxz00_13421 = BgL_ipz00_9592;
					}
				else
					{
						obj_t BgL_auxz00_13424;

						BgL_auxz00_13424 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 24410)), BGl_string5471z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9592);
						FAILURE(BgL_auxz00_13424, BFALSE, BFALSE);
					}
				return BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(BgL_auxz00_13421);
			}
		}
	}



/* <anonymous:4733> */
	obj_t BGl_zc3anonymousza34733ze3z83zz__httpz00(obj_t BgL_envz00_9593)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 708 */
			{	/* Unsafe/http.scm 710 */
				obj_t BgL_statez00_9594;

				obj_t BgL_ipz00_9595;

				obj_t BgL_sza7za7_9596;

				obj_t BgL_bufferz00_9597;

				obj_t BgL_bufsza7za7_9598;

				BgL_statez00_9594 = PROCEDURE_REF(BgL_envz00_9593, (int) (((long) 0)));
				BgL_ipz00_9595 = PROCEDURE_REF(BgL_envz00_9593, (int) (((long) 1)));
				BgL_sza7za7_9596 = PROCEDURE_REF(BgL_envz00_9593, (int) (((long) 2)));
				BgL_bufferz00_9597 = PROCEDURE_REF(BgL_envz00_9593, (int) (((long) 3)));
				BgL_bufsza7za7_9598 =
					PROCEDURE_REF(BgL_envz00_9593, (int) (((long) 4)));
				{

					{

					BgL_zc3anonymousza34734ze3z83_5474:
						{	/* Unsafe/http.scm 710 */
							obj_t BgL_casezd2valuezd2_5475;

							BgL_casezd2valuezd2_5475 = CELL_REF(BgL_statez00_9594);
							if ((BgL_casezd2valuezd2_5475 == BGl_symbol5472z00zz__httpz00))
								{	/* Unsafe/http.scm 710 */
									return BFALSE;
								}
							else
								{	/* Unsafe/http.scm 710 */
									if (
										(BgL_casezd2valuezd2_5475 == BGl_symbol5474z00zz__httpz00))
										{	/* Unsafe/http.scm 714 */
											obj_t BgL_lz00_5478;

											BgL_lz00_5478 =
												BGl_httpzd2readzd2linez00zz__httpz00(BgL_ipz00_9595);
											if (EOF_OBJECTP(BgL_lz00_5478))
												{	/* Unsafe/http.scm 716 */
													obj_t BgL_auxz00_9599;

													BgL_auxz00_9599 = BGl_symbol5472z00zz__httpz00;
													CELL_SET(BgL_statez00_9594, BgL_auxz00_9599);
												}
											else
												{	/* Unsafe/http.scm 715 */
													BFALSE;
												}
											return BGl_string5425z00zz__httpz00;
										}
									else
										{	/* Unsafe/http.scm 710 */
											if (
												(BgL_casezd2valuezd2_5475 ==
													BGl_symbol5476z00zz__httpz00))
												{	/* Unsafe/http.scm 710 */
													if (
														((long) CINT(CELL_REF(BgL_sza7za7_9596)) ==
															((long) 0)))
														{	/* Unsafe/http.scm 720 */
															BGl_httpzd2readzd2crlfz00zz__httpz00
																(BgL_ipz00_9595);
															{	/* Unsafe/http.scm 722 */
																obj_t BgL_auxz00_9600;

																BgL_auxz00_9600 = BGl_symbol5469z00zz__httpz00;
																CELL_SET(BgL_statez00_9594, BgL_auxz00_9600);
															}
															goto BgL_zc3anonymousza34734ze3z83_5474;
														}
													else
														{	/* Unsafe/http.scm 720 */
															if (
																((long) CINT(CELL_REF(BgL_sza7za7_9596)) <
																	(long) CINT(BgL_bufsza7za7_9598)))
																{	/* Unsafe/http.scm 725 */
																	obj_t BgL_sz00_5483;

																	BgL_sz00_5483 =
																		BGl_readzd2charszd2zz__r4_input_6_10_2z00
																		(CELL_REF(BgL_sza7za7_9596),
																		BgL_ipz00_9595);
																	{	/* Unsafe/http.scm 726 */
																		obj_t BgL_auxz00_9601;

																		BgL_auxz00_9601 =
																			BINT(
																			((long) CINT(CELL_REF(BgL_sza7za7_9596)) -
																				STRING_LENGTH(BgL_sz00_5483)));
																		CELL_SET(BgL_sza7za7_9596, BgL_auxz00_9601);
																	}
																	return BgL_sz00_5483;
																}
															else
																{	/* Unsafe/http.scm 729 */
																	obj_t BgL_sz00_5485;

																	BgL_sz00_5485 =
																		BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
																		(BgL_bufferz00_9597, BINT(((long) 512)),
																		BgL_ipz00_9595);
																	{	/* Unsafe/http.scm 730 */
																		obj_t BgL_auxz00_9602;

																		BgL_auxz00_9602 =
																			BINT(
																			((long) CINT(CELL_REF(BgL_sza7za7_9596)) -
																				(long) CINT(BgL_sz00_5485)));
																		CELL_SET(BgL_sza7za7_9596, BgL_auxz00_9602);
																	}
																	if (
																		((long) CINT(BgL_sz00_5485) ==
																			(long) CINT(BgL_bufsza7za7_9598)))
																		{	/* Unsafe/http.scm 731 */
																			return BgL_bufferz00_9597;
																		}
																	else
																		{	/* Unsafe/http.scm 731 */
																			return
																				c_substring(BgL_bufferz00_9597,
																				((long) 0), (long) CINT(BgL_sz00_5485));
												}}}}
											else
												{	/* Unsafe/http.scm 710 */
													{	/* Unsafe/http.scm 735 */
														obj_t BgL_auxz00_9603;

														BgL_auxz00_9603 =
															PROCEDURE_ENTRY
															(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00)
															(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00,
															BgL_ipz00_9595, BFALSE, BEOA);
														CELL_SET(BgL_sza7za7_9596, BgL_auxz00_9603);
													}
													if (
														((long) CINT(CELL_REF(BgL_sza7za7_9596)) >
															((long) 0)))
														{	/* Unsafe/http.scm 736 */
															{	/* Unsafe/http.scm 739 */
																obj_t BgL_auxz00_9604;

																BgL_auxz00_9604 = BGl_symbol5476z00zz__httpz00;
																CELL_SET(BgL_statez00_9594, BgL_auxz00_9604);
															}
															goto BgL_zc3anonymousza34734ze3z83_5474;
														}
													else
														{	/* Unsafe/http.scm 736 */
															{	/* Unsafe/http.scm 743 */
																obj_t BgL_auxz00_9605;

																BgL_auxz00_9605 = BGl_symbol5474z00zz__httpz00;
																CELL_SET(BgL_statez00_9594, BgL_auxz00_9605);
															}
															goto BgL_zc3anonymousza34734ze3z83_5474;
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



/* http-chunks->port */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2chunkszd2ze3portze3zz__httpz00(obj_t
		BgL_ipz00_59)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 749 */
			{	/* Unsafe/http.scm 750 */
				obj_t BgL_ip2z00_5490;

				{	/* Unsafe/http.scm 750 */
					obj_t BgL_arg4747z00_5495;

					BgL_arg4747z00_5495 =
						BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(BgL_ipz00_59);
					{	/* Ieee/port.scm 378 */

						BgL_ip2z00_5490 =
							BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00
							(BgL_arg4747z00_5495, BTRUE);
					}
				}
				{	/* Unsafe/http.scm 751 */
					obj_t BgL_zc3anonymousza34746ze3z83_9606;

					BgL_zc3anonymousza34746ze3z83_9606 =
						make_fx_procedure(BGl_zc3anonymousza34746ze3z83zz__httpz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34746ze3z83_9606,
						(int) (((long) 0)), BgL_ipz00_59);
					BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
						(BgL_ipz00_59, BgL_zc3anonymousza34746ze3z83_9606);
				}
				return BgL_ip2z00_5490;
			}
		}
	}



/* _http-chunks->port */
	obj_t BGl__httpzd2chunkszd2ze3portze3zz__httpz00(obj_t BgL_envz00_9607,
		obj_t BgL_ipz00_9608)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 749 */
			{	/* Unsafe/http.scm 750 */
				obj_t BgL_auxz00_13486;

				if (INPUT_PORTP(BgL_ipz00_9608))
					{	/* Unsafe/http.scm 750 */
						BgL_auxz00_13486 = BgL_ipz00_9608;
					}
				else
					{
						obj_t BgL_auxz00_13489;

						BgL_auxz00_13489 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 25613)), BGl_string5478z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9608);
						FAILURE(BgL_auxz00_13489, BFALSE, BFALSE);
					}
				return BGl_httpzd2chunkszd2ze3portze3zz__httpz00(BgL_auxz00_13486);
			}
		}
	}



/* <anonymous:4746> */
	obj_t BGl_zc3anonymousza34746ze3z83zz__httpz00(obj_t BgL_envz00_9609,
		obj_t BgL_inz00_9611)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 751 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_9609,
					(int) (((long) 0))));
		}
	}



/* http-send-chunks */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2sendzd2chunksz00zz__httpz00(obj_t
		BgL_ipz00_60, obj_t BgL_opz00_61, bool_t BgL_trailerz00_62)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 757 */
			{

			BgL_zc3anonymousza34748ze3z83_5499:
				{	/* Unsafe/http.scm 759 */
					obj_t BgL_sza7za7_5500;

					BgL_sza7za7_5500 =
						PROCEDURE_ENTRY(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00)
						(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00, BgL_ipz00_60,
						BgL_opz00_61, BEOA);
					if (((long) CINT(BgL_sza7za7_5500) > ((long) 0)))
						{	/* Unsafe/http.scm 760 */
							{
								obj_t BgL_sza7za7_5503;

								BgL_sza7za7_5503 = BgL_sza7za7_5500;
							BgL_zc3anonymousza34750ze3z83_5504:
								if (((long) CINT(BgL_sza7za7_5503) > ((long) 0)))
									{	/* Unsafe/http.scm 765 */
										long BgL_sz00_5506;

										{	/* Ieee/input.scm 82 */

											BgL_sz00_5506 =
												BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_ipz00_60,
												BgL_opz00_61, BgL_sza7za7_5503, BINT(((long) -1)));
										}
										if ((BgL_sz00_5506 > ((long) 0)))
											{	/* Unsafe/http.scm 767 */
												long BgL_arg4753z00_5508;

												BgL_arg4753z00_5508 =
													((long) CINT(BgL_sza7za7_5503) - BgL_sz00_5506);
												{
													obj_t BgL_sza7za7_13511;

													BgL_sza7za7_13511 = BINT(BgL_arg4753z00_5508);
													BgL_sza7za7_5503 = BgL_sza7za7_13511;
													goto BgL_zc3anonymousza34750ze3z83_5504;
												}
											}
										else
											{	/* Unsafe/http.scm 766 */
												((bool_t) 0);
											}
									}
								else
									{	/* Unsafe/http.scm 764 */
										((bool_t) 0);
									}
							}
							FLUSH_OUTPUT_PORT(BgL_opz00_61);
							{	/* Unsafe/http.scm 769 */
								obj_t BgL_sz00_5514;

								BgL_sz00_5514 =
									BGl_httpzd2readzd2crlfz00zz__httpz00(BgL_ipz00_60);
								bgl_display_obj(BgL_sz00_5514, BgL_opz00_61);
								goto BgL_zc3anonymousza34748ze3z83_5499;
							}
						}
					else
						{	/* Unsafe/http.scm 760 */
							if (BgL_trailerz00_62)
								{

								BgL_zc3anonymousza34754ze3z83_5516:
									{	/* Unsafe/http.scm 775 */
										obj_t BgL_lz00_5517;

										BgL_lz00_5517 =
											BGl_httpzd2readzd2linez00zz__httpz00(BgL_ipz00_60);
										if (EOF_OBJECTP(BgL_lz00_5517))
											{	/* Unsafe/http.scm 776 */
												return FLUSH_OUTPUT_PORT(BgL_opz00_61);
											}
										else
											{	/* Unsafe/http.scm 776 */
												bgl_display_obj(BgL_lz00_5517, BgL_opz00_61);
												if ((STRING_LENGTH(BgL_lz00_5517) > ((long) 2)))
													{	/* Unsafe/http.scm 780 */
														goto BgL_zc3anonymousza34754ze3z83_5516;
													}
												else
													{	/* Unsafe/http.scm 780 */
														return FLUSH_OUTPUT_PORT(BgL_opz00_61);
													}
											}
									}
								}
							else
								{	/* Unsafe/http.scm 773 */
									bgl_display_obj(BGl_httpzd2readzd2linez00zz__httpz00
										(BgL_ipz00_60), BgL_opz00_61);
									return FLUSH_OUTPUT_PORT(BgL_opz00_61);
								}
						}
				}
			}
		}
	}



/* _http-send-chunks */
	obj_t BGl__httpzd2sendzd2chunksz00zz__httpz00(obj_t BgL_envz00_9612,
		obj_t BgL_ipz00_9613, obj_t BgL_opz00_9614, obj_t BgL_trailerz00_9615)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 757 */
			{	/* Unsafe/http.scm 759 */
				obj_t BgL_auxz00_13536;

				obj_t BgL_auxz00_13529;

				if (OUTPUT_PORTP(BgL_opz00_9614))
					{	/* Unsafe/http.scm 759 */
						BgL_auxz00_13536 = BgL_opz00_9614;
					}
				else
					{
						obj_t BgL_auxz00_13539;

						BgL_auxz00_13539 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 26080)), BGl_string5479z00zz__httpz00,
							BGl_string5451z00zz__httpz00, BgL_opz00_9614);
						FAILURE(BgL_auxz00_13539, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_9613))
					{	/* Unsafe/http.scm 759 */
						BgL_auxz00_13529 = BgL_ipz00_9613;
					}
				else
					{
						obj_t BgL_auxz00_13532;

						BgL_auxz00_13532 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 26080)), BGl_string5479z00zz__httpz00,
							BGl_string5430z00zz__httpz00, BgL_ipz00_9613);
						FAILURE(BgL_auxz00_13532, BFALSE, BFALSE);
					}
				return
					BGl_httpzd2sendzd2chunksz00zz__httpz00(BgL_auxz00_13529,
					BgL_auxz00_13536, CBOOL(BgL_trailerz00_9615));
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			{	/* Unsafe/http.scm 52 */
				obj_t BgL_arg4761z00_5525;

				obj_t BgL_arg4762z00_5526;

				obj_t BgL_arg4767z00_5531;

				BgL_arg4761z00_5525 = BGl_symbol5480z00zz__httpz00;
				BgL_arg4762z00_5526 = BGl_z62errorz62zz__objectz00;
				{	/* Unsafe/http.scm 52 */
					obj_t BgL_v2415z00_5533;

					BgL_v2415z00_5533 = create_vector((int) (((long) 0)));
					BgL_arg4767z00_5531 = BgL_v2415z00_5533;
				}
				BGl_z62httpzd2errorzb0zz__httpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4761z00_5525,
					BgL_arg4762z00_5526, ((bool_t) 0),
					BGl_makezd2z62httpzd2errorzd2envzb0zz__httpz00,
					BGl_z52allocatezd2z62httpzd2errorzd2envze2zz__httpz00,
					BGl_z62httpzd2errorzd2nilzd2envzb0zz__httpz00,
					BGl_z62httpzd2errorzf3zd2envz91zz__httpz00, ((long) 159574062), BNIL,
					BFALSE, BgL_arg4767z00_5531);
			}
			{	/* Unsafe/http.scm 54 */
				obj_t BgL_arg4769z00_5534;

				obj_t BgL_arg4770z00_5535;

				obj_t BgL_arg4775z00_5540;

				BgL_arg4769z00_5534 = BGl_symbol5482z00zz__httpz00;
				BgL_arg4770z00_5535 = BGl_z62httpzd2errorzb0zz__httpz00;
				{	/* Unsafe/http.scm 54 */
					obj_t BgL_v2416z00_5542;

					BgL_v2416z00_5542 = create_vector((int) (((long) 0)));
					BgL_arg4775z00_5540 = BgL_v2416z00_5542;
				}
				BGl_z62httpzd2redirectionzd2errorz62zz__httpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4769z00_5534,
					BgL_arg4770z00_5535, ((bool_t) 0),
					BGl_makezd2z62httpzd2redirectionzd2errorzd2envz62zz__httpz00,
					BGl_z52allocatezd2z62httpzd2redirectionzd2errorzd2envz30zz__httpz00,
					BGl_z62httpzd2redirectionzd2errorzd2nilzd2envz62zz__httpz00,
					BGl_z62httpzd2redirectionzd2errorzf3zd2envz43zz__httpz00,
					((long) 157894795), BNIL, BFALSE, BgL_arg4775z00_5540);
			}
			{	/* Unsafe/http.scm 55 */
				obj_t BgL_arg4777z00_5543;

				obj_t BgL_arg4778z00_5544;

				obj_t BgL_arg4784z00_5548;

				obj_t BgL_arg4785z00_5549;

				BgL_arg4777z00_5543 = BGl_symbol5484z00zz__httpz00;
				BgL_arg4778z00_5544 = BGl_z62httpzd2errorzb0zz__httpz00;
				{	/* Unsafe/http.scm 55 */
					obj_t BgL_arg4786z00_5550;

					BgL_arg4786z00_5550 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol5486z00zz__httpz00,
						BGl_z62httpzd2statuszd2errorzd2statuszd2envz62zz__httpz00, BUNSPEC,
						BUNSPEC, ((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_list4787z00_5551;

						BgL_list4787z00_5551 = MAKE_PAIR(BgL_arg4786z00_5550, BNIL);
						BgL_arg4784z00_5548 = BgL_list4787z00_5551;
				}}
				{	/* Unsafe/http.scm 55 */
					obj_t BgL_v2417z00_5554;

					BgL_v2417z00_5554 = create_vector((int) (((long) 0)));
					BgL_arg4785z00_5549 = BgL_v2417z00_5554;
				}
				BGl_z62httpzd2statuszd2errorz62zz__httpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4777z00_5543,
					BgL_arg4778z00_5544, ((bool_t) 0),
					BGl_makezd2z62httpzd2statuszd2errorzd2envz62zz__httpz00,
					BGl_z52allocatezd2z62httpzd2statuszd2errorzd2envz30zz__httpz00,
					BGl_z62httpzd2statuszd2errorzd2nilzd2envz62zz__httpz00,
					BGl_z62httpzd2statuszd2errorzf3zd2envz43zz__httpz00,
					((long) 154959307), BgL_arg4784z00_5548, BFALSE, BgL_arg4785z00_5549);
			}
			{	/* Unsafe/http.scm 58 */
				obj_t BgL_arg4790z00_5555;

				obj_t BgL_arg4791z00_5556;

				obj_t BgL_arg4795z00_5560;

				obj_t BgL_arg4796z00_5561;

				BgL_arg4790z00_5555 = BGl_symbol5488z00zz__httpz00;
				BgL_arg4791z00_5556 = BGl_z62exceptionz62zz__objectz00;
				{	/* Unsafe/http.scm 58 */
					obj_t BgL_arg4797z00_5562;

					obj_t BgL_arg4798z00_5563;

					BgL_arg4797z00_5562 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol5490z00zz__httpz00,
						BGl_z62httpzd2redirectionzd2portzd2envzb0zz__httpz00, BUNSPEC,
						BUNSPEC, ((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg4798z00_5563 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol5491z00zz__httpz00,
						BGl_z62httpzd2redirectionzd2urlzd2envzb0zz__httpz00, BUNSPEC,
						BUNSPEC, ((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_list4799z00_5564;

						{	/* Unsafe/http.scm 58 */
							obj_t BgL_arg4800z00_5565;

							BgL_arg4800z00_5565 = MAKE_PAIR(BgL_arg4798z00_5563, BNIL);
							BgL_list4799z00_5564 =
								MAKE_PAIR(BgL_arg4797z00_5562, BgL_arg4800z00_5565);
						}
						BgL_arg4795z00_5560 = BgL_list4799z00_5564;
				}}
				{	/* Unsafe/http.scm 58 */
					obj_t BgL_v2418z00_5570;

					BgL_v2418z00_5570 = create_vector((int) (((long) 0)));
					BgL_arg4796z00_5561 = BgL_v2418z00_5570;
				}
				BGl_z62httpzd2redirectionzb0zz__httpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4790z00_5555,
					BgL_arg4791z00_5556, ((bool_t) 0),
					BGl_makezd2z62httpzd2redirectionzd2envzb0zz__httpz00,
					BGl_z52allocatezd2z62httpzd2redirectionzd2envze2zz__httpz00,
					BGl_z62httpzd2redirectionzd2nilzd2envzb0zz__httpz00,
					BGl_z62httpzd2redirectionzf3zd2envz91zz__httpz00, ((long) 406879873),
					BgL_arg4795z00_5560, BFALSE, BgL_arg4796z00_5561);
			}
			BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00 = BUNSPEC;
			BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00 = BUNSPEC;
			BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00 = BUNSPEC;
			return (BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* &http-redirection? */
	BGL_EXPORTED_DEF bool_t BGl_z62httpzd2redirectionzf3z43zz__httpz00(obj_t
		BgL_obj2071z00_63)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2071z00_63,
				BGl_z62httpzd2redirectionzb0zz__httpz00);
		}
	}



/* _&http-redirection? */
	obj_t BGl__z62httpzd2redirectionzf3z43zz__httpz00(obj_t BgL_envz00_9664,
		obj_t BgL_obj2071z00_9665)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2071z00_9665,
					BGl_z62httpzd2redirectionzb0zz__httpz00));
		}
	}



/* make-&http-redirection */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzb0_bglt
		BGl_makezd2z62httpzd2redirectionz62zz__httpz00(obj_t BgL_fname2029z00_67,
		obj_t BgL_location2030z00_68, obj_t BgL_stack2031z00_69,
		obj_t BgL_port2032z00_70, obj_t BgL_url2033z00_71)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_new2034z00_8952;

				{	/* Unsafe/http.scm 58 */
					BgL_z62httpzd2redirectionzb0_bglt BgL_res5242z00_8957;

					{	/* Unsafe/http.scm 58 */
						BgL_z62httpzd2redirectionzb0_bglt BgL_new2048z00_8953;

						BgL_new2048z00_8953 =
							((BgL_z62httpzd2redirectionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2redirectionzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2048z00_8953),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2redirectionzb0zz__httpz00));
						{	/* Unsafe/http.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_13573;

							BgL_auxz00_13573 = (BgL_objectz00_bglt) (BgL_new2048z00_8953);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13573, BFALSE);
						}
						BgL_res5242z00_8957 = BgL_new2048z00_8953;
					}
					BgL_new2034z00_8952 = BgL_res5242z00_8957;
				}
				{	/* Unsafe/http.scm 58 */
					BgL_z62httpzd2redirectionzb0_bglt BgL_res5243z00_8969;

					{	/* Unsafe/http.scm 58 */
						BgL_z62httpzd2redirectionzb0_bglt BgL_new2041z00_8958;

						BgL_new2041z00_8958 = BgL_new2034z00_8952;
						{	/* Unsafe/http.scm 58 */
							obj_t BgL_fname2036z00_8964;

							obj_t BgL_location2037z00_8965;

							obj_t BgL_stack2038z00_8966;

							obj_t BgL_port2039z00_8967;

							obj_t BgL_url2040z00_8968;

							BgL_fname2036z00_8964 = BgL_fname2029z00_67;
							BgL_location2037z00_8965 = BgL_location2030z00_68;
							BgL_stack2038z00_8966 = BgL_stack2031z00_69;
							BgL_port2039z00_8967 = BgL_port2032z00_70;
							BgL_url2040z00_8968 = BgL_url2033z00_71;
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_8958))->BgL_fnamez00) =
								((obj_t) BgL_fname2036z00_8964), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_8958))->BgL_locationz00) =
								((obj_t) BgL_location2037z00_8965), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_8958))->BgL_stackz00) =
								((obj_t) BgL_stack2038z00_8966), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_8958))->BgL_portz00) =
								((obj_t) BgL_port2039z00_8967), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_8958))->BgL_urlz00) =
								((obj_t) BgL_url2040z00_8968), BUNSPEC);
							BgL_res5243z00_8969 = BgL_new2041z00_8958;
					}} BgL_res5243z00_8969;
				}
				return BgL_new2034z00_8952;
			}
		}
	}



/* _make-&http-redirection */
	obj_t BGl__makezd2z62httpzd2redirectionz62zz__httpz00(obj_t BgL_envz00_9652,
		obj_t BgL_fname2029z00_9653, obj_t BgL_location2030z00_9654,
		obj_t BgL_stack2031z00_9655, obj_t BgL_port2032z00_9656,
		obj_t BgL_url2033z00_9657)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_13581;

				{	/* Unsafe/http.scm 58 */
					obj_t BgL_auxz00_13589;

					obj_t BgL_auxz00_13582;

					if (STRINGP(BgL_url2033z00_9657))
						{	/* Unsafe/http.scm 58 */
							BgL_auxz00_13589 = BgL_url2033z00_9657;
						}
					else
						{
							obj_t BgL_auxz00_13592;

							BgL_auxz00_13592 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
								BINT(((long) 1764)), BGl_string5493z00zz__httpz00,
								BGl_string5494z00zz__httpz00, BgL_url2033z00_9657);
							FAILURE(BgL_auxz00_13592, BFALSE, BFALSE);
						}
					if (INPUT_PORTP(BgL_port2032z00_9656))
						{	/* Unsafe/http.scm 58 */
							BgL_auxz00_13582 = BgL_port2032z00_9656;
						}
					else
						{
							obj_t BgL_auxz00_13585;

							BgL_auxz00_13585 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
								BINT(((long) 1764)), BGl_string5493z00zz__httpz00,
								BGl_string5430z00zz__httpz00, BgL_port2032z00_9656);
							FAILURE(BgL_auxz00_13585, BFALSE, BFALSE);
						}
					BgL_auxz00_13581 =
						BGl_makezd2z62httpzd2redirectionz62zz__httpz00
						(BgL_fname2029z00_9653, BgL_location2030z00_9654,
						BgL_stack2031z00_9655, BgL_auxz00_13582, BgL_auxz00_13589);
				}
				return (obj_t) (BgL_auxz00_13581);
			}
		}
	}



/* fill-&http-redirection! */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzb0_bglt
		BGl_fillzd2z62httpzd2redirectionz12z70zz__httpz00
		(BgL_z62httpzd2redirectionzb0_bglt BgL_new2041z00_72,
		obj_t BgL_fname2036z00_73, obj_t BgL_location2037z00_74,
		obj_t BgL_stack2038z00_75, obj_t BgL_port2039z00_76,
		obj_t BgL_url2040z00_77)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				obj_t BgL_fname2036z00_9793;

				obj_t BgL_location2037z00_9794;

				obj_t BgL_stack2038z00_9795;

				obj_t BgL_port2039z00_9796;

				obj_t BgL_url2040z00_9797;

				BgL_fname2036z00_9793 = BgL_fname2036z00_73;
				BgL_location2037z00_9794 = BgL_location2037z00_74;
				BgL_stack2038z00_9795 = BgL_stack2038z00_75;
				BgL_port2039z00_9796 = BgL_port2039z00_76;
				BgL_url2040z00_9797 = BgL_url2040z00_77;
				((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_72))->
						BgL_fnamez00) = ((obj_t) BgL_fname2036z00_9793), BUNSPEC);
				((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_72))->
						BgL_locationz00) = ((obj_t) BgL_location2037z00_9794), BUNSPEC);
				((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_72))->
						BgL_stackz00) = ((obj_t) BgL_stack2038z00_9795), BUNSPEC);
				((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_72))->
						BgL_portz00) = ((obj_t) BgL_port2039z00_9796), BUNSPEC);
				((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_new2041z00_72))->
						BgL_urlz00) = ((obj_t) BgL_url2040z00_9797), BUNSPEC);
				return BgL_new2041z00_72;
			}
		}
	}



/* _fill-&http-redirection! */
	obj_t BGl__fillzd2z62httpzd2redirectionz12z70zz__httpz00(obj_t
		BgL_envz00_9666, obj_t BgL_new2041z00_9667, obj_t BgL_fname2036z00_9668,
		obj_t BgL_location2037z00_9669, obj_t BgL_stack2038z00_9670,
		obj_t BgL_port2039z00_9671, obj_t BgL_url2040z00_9672)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_13603;

				{	/* Unsafe/http.scm 58 */
					BgL_z62httpzd2redirectionzb0_bglt BgL_res5515z00_9810;

					{	/* Unsafe/http.scm 58 */
						BgL_z62httpzd2redirectionzb0_bglt BgL_new2041z00_9799;

						obj_t BgL_port2039z00_9803;

						obj_t BgL_url2040z00_9804;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new2041z00_9667,
								BGl_z62httpzd2redirectionzb0zz__httpz00))
							{	/* Unsafe/http.scm 58 */
								BgL_new2041z00_9799 =
									(BgL_z62httpzd2redirectionzb0_bglt) (BgL_new2041z00_9667);
							}
						else
							{
								obj_t BgL_auxz00_13607;

								BgL_auxz00_13607 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1764)), BGl_string5495z00zz__httpz00,
									BGl_string5489z00zz__httpz00, BgL_new2041z00_9667);
								FAILURE(BgL_auxz00_13607, BFALSE, BFALSE);
							}
						if (INPUT_PORTP(BgL_port2039z00_9671))
							{	/* Unsafe/http.scm 58 */
								BgL_port2039z00_9803 = BgL_port2039z00_9671;
							}
						else
							{
								obj_t BgL_auxz00_13613;

								BgL_auxz00_13613 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1764)), BGl_string5495z00zz__httpz00,
									BGl_string5430z00zz__httpz00, BgL_port2039z00_9671);
								FAILURE(BgL_auxz00_13613, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_url2040z00_9672))
							{	/* Unsafe/http.scm 58 */
								BgL_url2040z00_9804 = BgL_url2040z00_9672;
							}
						else
							{
								obj_t BgL_auxz00_13619;

								BgL_auxz00_13619 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1764)), BGl_string5495z00zz__httpz00,
									BGl_string5494z00zz__httpz00, BgL_url2040z00_9672);
								FAILURE(BgL_auxz00_13619, BFALSE, BFALSE);
							}
						{	/* Unsafe/http.scm 58 */
							obj_t BgL_fname2036z00_9805;

							obj_t BgL_location2037z00_9806;

							obj_t BgL_stack2038z00_9807;

							obj_t BgL_port2039z00_9808;

							obj_t BgL_url2040z00_9809;

							BgL_fname2036z00_9805 = BgL_fname2036z00_9668;
							BgL_location2037z00_9806 = BgL_location2037z00_9669;
							BgL_stack2038z00_9807 = BgL_stack2038z00_9670;
							BgL_port2039z00_9808 = BgL_port2039z00_9803;
							BgL_url2040z00_9809 = BgL_url2040z00_9804;
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_9799))->BgL_fnamez00) =
								((obj_t) BgL_fname2036z00_9805), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_9799))->BgL_locationz00) =
								((obj_t) BgL_location2037z00_9806), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_9799))->BgL_stackz00) =
								((obj_t) BgL_stack2038z00_9807), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_9799))->BgL_portz00) =
								((obj_t) BgL_port2039z00_9808), BUNSPEC);
							((((BgL_z62httpzd2redirectionzb0_bglt)
										CREF(BgL_new2041z00_9799))->BgL_urlz00) =
								((obj_t) BgL_url2040z00_9809), BUNSPEC);
							BgL_res5515z00_9810 = BgL_new2041z00_9799;
					}}
					BgL_auxz00_13603 = BgL_res5515z00_9810;
				}
				return (obj_t) (BgL_auxz00_13603);
			}
		}
	}



/* %allocate-&http-redirection */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzb0_bglt
		BGl_z52allocatezd2z62httpzd2redirectionz30zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_new2048z00_9811;

				BgL_new2048z00_9811 =
					((BgL_z62httpzd2redirectionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62httpzd2redirectionzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2048z00_9811),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62httpzd2redirectionzb0zz__httpz00));
				{	/* Unsafe/http.scm 58 */
					BgL_objectz00_bglt BgL_auxz00_13633;

					BgL_auxz00_13633 = (BgL_objectz00_bglt) (BgL_new2048z00_9811);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_13633, BFALSE);
				}
				return BgL_new2048z00_9811;
			}
		}
	}



/* _%allocate-&http-redirection */
	obj_t BGl__z52allocatezd2z62httpzd2redirectionz30zz__httpz00(obj_t
		BgL_envz00_9658)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{	/* Unsafe/http.scm 58 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_13636;

				{	/* Unsafe/http.scm 58 */
					BgL_z62httpzd2redirectionzb0_bglt BgL_res5516z00_9815;

					{	/* Unsafe/http.scm 58 */
						BgL_z62httpzd2redirectionzb0_bglt BgL_new2048z00_9813;

						BgL_new2048z00_9813 =
							((BgL_z62httpzd2redirectionzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2redirectionzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2048z00_9813),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2redirectionzb0zz__httpz00));
						{	/* Unsafe/http.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_13641;

							BgL_auxz00_13641 = (BgL_objectz00_bglt) (BgL_new2048z00_9813);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13641, BFALSE);
						}
						BgL_res5516z00_9815 = BgL_new2048z00_9813;
					}
					BgL_auxz00_13636 = BgL_res5516z00_9815;
				}
				return (obj_t) (BgL_auxz00_13636);
			}
		}
	}



/* &http-redirection-nil */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzb0_bglt
		BGl_z62httpzd2redirectionzd2nilz62zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			if ((BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00 == BUNSPEC))
				{	/* Unsafe/http.scm 58 */
					{	/* Unsafe/http.scm 58 */
						BgL_z62httpzd2redirectionzb0_bglt BgL_res5244z00_8983;

						{	/* Unsafe/http.scm 58 */
							BgL_z62httpzd2redirectionzb0_bglt BgL_new2048z00_8979;

							BgL_new2048z00_8979 =
								((BgL_z62httpzd2redirectionzb0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62httpzd2redirectionzb0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2048z00_8979),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62httpzd2redirectionzb0zz__httpz00));
							{	/* Unsafe/http.scm 58 */
								BgL_objectz00_bglt BgL_auxz00_13651;

								BgL_auxz00_13651 = (BgL_objectz00_bglt) (BgL_new2048z00_8979);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_13651, BFALSE);
							}
							BgL_res5244z00_8983 = BgL_new2048z00_8979;
						}
						BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00 =
							(obj_t) (BgL_res5244z00_8983);
					}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4808z00_5580;

						{	/* Unsafe/http.scm 58 */
							obj_t BgL_res5245z00_8985;

							{	/* Unsafe/http.scm 58 */
								obj_t BgL_auxz00_13655;

								BgL_auxz00_13655 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5245z00_8985 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_13655);
							}
							BgL_arg4808z00_5580 = BgL_res5245z00_8985;
						}
						{	/* Unsafe/http.scm 58 */
							BgL_z62httpzd2redirectionzb0_bglt BgL_res5246z00_8997;

							{	/* Unsafe/http.scm 58 */
								BgL_z62httpzd2redirectionzb0_bglt BgL_new2041z00_8986;

								BgL_new2041z00_8986 =
									(BgL_z62httpzd2redirectionzb0_bglt)
									(BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00);
								{	/* Unsafe/http.scm 58 */
									obj_t BgL_fname2036z00_8992;

									obj_t BgL_location2037z00_8993;

									obj_t BgL_stack2038z00_8994;

									obj_t BgL_port2039z00_8995;

									obj_t BgL_url2040z00_8996;

									BgL_fname2036z00_8992 = BUNSPEC;
									BgL_location2037z00_8993 = BUNSPEC;
									BgL_stack2038z00_8994 = BUNSPEC;
									BgL_port2039z00_8995 = BgL_arg4808z00_5580;
									BgL_url2040z00_8996 = BGl_string5425z00zz__httpz00;
									((((BgL_z62httpzd2redirectionzb0_bglt)
												CREF(BgL_new2041z00_8986))->BgL_fnamez00) =
										((obj_t) BgL_fname2036z00_8992), BUNSPEC);
									((((BgL_z62httpzd2redirectionzb0_bglt)
												CREF(BgL_new2041z00_8986))->BgL_locationz00) =
										((obj_t) BgL_location2037z00_8993), BUNSPEC);
									((((BgL_z62httpzd2redirectionzb0_bglt)
												CREF(BgL_new2041z00_8986))->BgL_stackz00) =
										((obj_t) BgL_stack2038z00_8994), BUNSPEC);
									((((BgL_z62httpzd2redirectionzb0_bglt)
												CREF(BgL_new2041z00_8986))->BgL_portz00) =
										((obj_t) BgL_port2039z00_8995), BUNSPEC);
									((((BgL_z62httpzd2redirectionzb0_bglt)
												CREF(BgL_new2041z00_8986))->BgL_urlz00) =
										((obj_t) BgL_url2040z00_8996), BUNSPEC);
									BgL_res5246z00_8997 = BgL_new2041z00_8986;
							}}
							(obj_t) (BgL_res5246z00_8997);
				}}}
			else
				{	/* Unsafe/http.scm 58 */
					BFALSE;
				}
			return
				(BgL_z62httpzd2redirectionzb0_bglt)
				(BGl_z52thezd2z62httpzd2redirectionzd2nilze2zz__httpz00);
		}
	}



/* _&http-redirection-nil */
	obj_t BGl__z62httpzd2redirectionzd2nilz62zz__httpz00(obj_t BgL_envz00_9663)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			return (obj_t) (BGl_z62httpzd2redirectionzd2nilz62zz__httpz00());
		}
	}



/* _&http-redirection-port */
	obj_t BGl__z62httpzd2redirectionzd2portz62zz__httpz00(obj_t BgL_envz00_9659,
		obj_t BgL_obj2027z00_9660)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 59 */
			{	/* Unsafe/http.scm 59 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_obj2027z00_9817;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2027z00_9660,
						BGl_z62httpzd2redirectionzb0zz__httpz00))
					{	/* Unsafe/http.scm 59 */
						BgL_obj2027z00_9817 =
							(BgL_z62httpzd2redirectionzb0_bglt) (BgL_obj2027z00_9660);
					}
				else
					{
						obj_t BgL_auxz00_13671;

						BgL_auxz00_13671 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 1808)), BGl_string5496z00zz__httpz00,
							BGl_string5489z00zz__httpz00, BgL_obj2027z00_9660);
						FAILURE(BgL_auxz00_13671, BFALSE, BFALSE);
					}
				return
					(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_obj2027z00_9817))->
					BgL_portz00);
			}
		}
	}



/* _&http-redirection-url */
	obj_t BGl__z62httpzd2redirectionzd2urlz62zz__httpz00(obj_t BgL_envz00_9661,
		obj_t BgL_obj2028z00_9662)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 60 */
			{	/* Unsafe/http.scm 60 */
				BgL_z62httpzd2redirectionzb0_bglt BgL_obj2028z00_9819;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj2028z00_9662,
						BGl_z62httpzd2redirectionzb0zz__httpz00))
					{	/* Unsafe/http.scm 60 */
						BgL_obj2028z00_9819 =
							(BgL_z62httpzd2redirectionzb0_bglt) (BgL_obj2028z00_9662);
					}
				else
					{
						obj_t BgL_auxz00_13679;

						BgL_auxz00_13679 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
							BINT(((long) 1844)), BGl_string5497z00zz__httpz00,
							BGl_string5489z00zz__httpz00, BgL_obj2028z00_9662);
						FAILURE(BgL_auxz00_13679, BFALSE, BFALSE);
					}
				return
					(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_obj2028z00_9819))->
					BgL_urlz00);
			}
		}
	}



/* &http-status-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62httpzd2statuszd2errorzf3z91zz__httpz00(obj_t
		BgL_obj2017z00_80)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2017z00_80,
				BGl_z62httpzd2statuszd2errorz62zz__httpz00);
		}
	}



/* _&http-status-error? */
	obj_t BGl__z62httpzd2statuszd2errorzf3z91zz__httpz00(obj_t BgL_envz00_9650,
		obj_t BgL_obj2017z00_9651)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2017z00_9651,
					BGl_z62httpzd2statuszd2errorz62zz__httpz00));
		}
	}



/* make-&http-status-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_makezd2z62httpzd2statuszd2errorzb0zz__httpz00(obj_t BgL_fname1961z00_84,
		obj_t BgL_location1962z00_85, obj_t BgL_stack1963z00_86,
		obj_t BgL_proc1964z00_87, obj_t BgL_msg1965z00_88, obj_t BgL_obj1966z00_89,
		int BgL_status1967z00_90)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1968z00_8998;

				{	/* Unsafe/http.scm 55 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5247z00_9003;

					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1986z00_8999;

						BgL_new1986z00_8999 =
							((BgL_z62httpzd2statuszd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2statuszd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1986z00_8999),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2statuszd2errorz62zz__httpz00));
						{	/* Unsafe/http.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_13691;

							BgL_auxz00_13691 = (BgL_objectz00_bglt) (BgL_new1986z00_8999);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13691, BFALSE);
						}
						BgL_res5247z00_9003 = BgL_new1986z00_8999;
					}
					BgL_new1968z00_8998 = BgL_res5247z00_9003;
				}
				{	/* Unsafe/http.scm 55 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5248z00_9019;

					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1977z00_9004;

						BgL_new1977z00_9004 = BgL_new1968z00_8998;
						{	/* Unsafe/http.scm 55 */
							obj_t BgL_fname1970z00_9012;

							obj_t BgL_location1971z00_9013;

							obj_t BgL_stack1972z00_9014;

							obj_t BgL_proc1973z00_9015;

							obj_t BgL_msg1974z00_9016;

							obj_t BgL_obj1975z00_9017;

							int BgL_status1976z00_9018;

							BgL_fname1970z00_9012 = BgL_fname1961z00_84;
							BgL_location1971z00_9013 = BgL_location1962z00_85;
							BgL_stack1972z00_9014 = BgL_stack1963z00_86;
							BgL_proc1973z00_9015 = BgL_proc1964z00_87;
							BgL_msg1974z00_9016 = BgL_msg1965z00_88;
							BgL_obj1975z00_9017 = BgL_obj1966z00_89;
							BgL_status1976z00_9018 = BgL_status1967z00_90;
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_fnamez00) =
								((obj_t) BgL_fname1970z00_9012), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_locationz00) =
								((obj_t) BgL_location1971z00_9013), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_stackz00) =
								((obj_t) BgL_stack1972z00_9014), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_procz00) =
								((obj_t) BgL_proc1973z00_9015), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_msgz00) =
								((obj_t) BgL_msg1974z00_9016), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_objz00) =
								((obj_t) BgL_obj1975z00_9017), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9004))->BgL_statusz00) =
								((int) BgL_status1976z00_9018), BUNSPEC);
							BgL_res5248z00_9019 = BgL_new1977z00_9004;
					}} BgL_res5248z00_9019;
				}
				return BgL_new1968z00_8998;
			}
		}
	}



/* _make-&http-status-error */
	obj_t BGl__makezd2z62httpzd2statuszd2errorzb0zz__httpz00(obj_t
		BgL_envz00_9638, obj_t BgL_fname1961z00_9639,
		obj_t BgL_location1962z00_9640, obj_t BgL_stack1963z00_9641,
		obj_t BgL_proc1964z00_9642, obj_t BgL_msg1965z00_9643,
		obj_t BgL_obj1966z00_9644, obj_t BgL_status1967z00_9645)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_13701;

				{	/* Unsafe/http.scm 55 */
					int BgL_auxz00_13702;

					{	/* Unsafe/http.scm 55 */
						obj_t BgL_auxz00_13703;

						if (INTEGERP(BgL_status1967z00_9645))
							{	/* Unsafe/http.scm 55 */
								BgL_auxz00_13703 = BgL_status1967z00_9645;
							}
						else
							{
								obj_t BgL_auxz00_13706;

								BgL_auxz00_13706 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1684)), BGl_string5498z00zz__httpz00,
									BGl_string5499z00zz__httpz00, BgL_status1967z00_9645);
								FAILURE(BgL_auxz00_13706, BFALSE, BFALSE);
							}
						BgL_auxz00_13702 = CINT(BgL_auxz00_13703);
					}
					BgL_auxz00_13701 =
						BGl_makezd2z62httpzd2statuszd2errorzb0zz__httpz00
						(BgL_fname1961z00_9639, BgL_location1962z00_9640,
						BgL_stack1963z00_9641, BgL_proc1964z00_9642, BgL_msg1965z00_9643,
						BgL_obj1966z00_9644, BgL_auxz00_13702);
				}
				return (obj_t) (BgL_auxz00_13701);
			}
		}
	}



/* fill-&http-status-error! */
	BGL_EXPORTED_DEF BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_fillzd2z62httpzd2statuszd2errorz12za2zz__httpz00
		(BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1977z00_91,
		obj_t BgL_fname1970z00_92, obj_t BgL_location1971z00_93,
		obj_t BgL_stack1972z00_94, obj_t BgL_proc1973z00_95,
		obj_t BgL_msg1974z00_96, obj_t BgL_obj1975z00_97, int BgL_status1976z00_98)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				obj_t BgL_fname1970z00_9821;

				obj_t BgL_location1971z00_9822;

				obj_t BgL_stack1972z00_9823;

				obj_t BgL_proc1973z00_9824;

				obj_t BgL_msg1974z00_9825;

				obj_t BgL_obj1975z00_9826;

				int BgL_status1976z00_9827;

				BgL_fname1970z00_9821 = BgL_fname1970z00_92;
				BgL_location1971z00_9822 = BgL_location1971z00_93;
				BgL_stack1972z00_9823 = BgL_stack1972z00_94;
				BgL_proc1973z00_9824 = BgL_proc1973z00_95;
				BgL_msg1974z00_9825 = BgL_msg1974z00_96;
				BgL_obj1975z00_9826 = BgL_obj1975z00_97;
				BgL_status1976z00_9827 = BgL_status1976z00_98;
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_fnamez00) = ((obj_t) BgL_fname1970z00_9821), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_locationz00) = ((obj_t) BgL_location1971z00_9822), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_stackz00) = ((obj_t) BgL_stack1972z00_9823), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_procz00) = ((obj_t) BgL_proc1973z00_9824), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_msgz00) = ((obj_t) BgL_msg1974z00_9825), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_objz00) = ((obj_t) BgL_obj1975z00_9826), BUNSPEC);
				((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_new1977z00_91))->
						BgL_statusz00) = ((int) BgL_status1976z00_9827), BUNSPEC);
				return BgL_new1977z00_91;
			}
		}
	}



/* _fill-&http-status-error! */
	obj_t BGl__fillzd2z62httpzd2statuszd2errorz12za2zz__httpz00(obj_t
		BgL_envz00_9673, obj_t BgL_new1977z00_9674, obj_t BgL_fname1970z00_9675,
		obj_t BgL_location1971z00_9676, obj_t BgL_stack1972z00_9677,
		obj_t BgL_proc1973z00_9678, obj_t BgL_msg1974z00_9679,
		obj_t BgL_obj1975z00_9680, obj_t BgL_status1976z00_9681)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_13720;

				{	/* Unsafe/http.scm 55 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5517z00_9844;

					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1977z00_9829;

						int BgL_status1976z00_9836;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1977z00_9674,
								BGl_z62httpzd2statuszd2errorz62zz__httpz00))
							{	/* Unsafe/http.scm 55 */
								BgL_new1977z00_9829 =
									(BgL_z62httpzd2statuszd2errorz62_bglt) (BgL_new1977z00_9674);
							}
						else
							{
								obj_t BgL_auxz00_13724;

								BgL_auxz00_13724 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1684)), BGl_string5500z00zz__httpz00,
									BGl_string5485z00zz__httpz00, BgL_new1977z00_9674);
								FAILURE(BgL_auxz00_13724, BFALSE, BFALSE);
							}
						{	/* Unsafe/http.scm 55 */
							obj_t BgL_auxz00_13728;

							if (INTEGERP(BgL_status1976z00_9681))
								{	/* Unsafe/http.scm 55 */
									BgL_auxz00_13728 = BgL_status1976z00_9681;
								}
							else
								{
									obj_t BgL_auxz00_13731;

									BgL_auxz00_13731 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string5428z00zz__httpz00, BINT(((long) 1684)),
										BGl_string5500z00zz__httpz00, BGl_string5499z00zz__httpz00,
										BgL_status1976z00_9681);
									FAILURE(BgL_auxz00_13731, BFALSE, BFALSE);
								}
							BgL_status1976z00_9836 = CINT(BgL_auxz00_13728);
						}
						{	/* Unsafe/http.scm 55 */
							obj_t BgL_fname1970z00_9837;

							obj_t BgL_location1971z00_9838;

							obj_t BgL_stack1972z00_9839;

							obj_t BgL_proc1973z00_9840;

							obj_t BgL_msg1974z00_9841;

							obj_t BgL_obj1975z00_9842;

							int BgL_status1976z00_9843;

							BgL_fname1970z00_9837 = BgL_fname1970z00_9675;
							BgL_location1971z00_9838 = BgL_location1971z00_9676;
							BgL_stack1972z00_9839 = BgL_stack1972z00_9677;
							BgL_proc1973z00_9840 = BgL_proc1973z00_9678;
							BgL_msg1974z00_9841 = BgL_msg1974z00_9679;
							BgL_obj1975z00_9842 = BgL_obj1975z00_9680;
							BgL_status1976z00_9843 = BgL_status1976z00_9836;
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_fnamez00) =
								((obj_t) BgL_fname1970z00_9837), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_locationz00) =
								((obj_t) BgL_location1971z00_9838), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_stackz00) =
								((obj_t) BgL_stack1972z00_9839), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_procz00) =
								((obj_t) BgL_proc1973z00_9840), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_msgz00) =
								((obj_t) BgL_msg1974z00_9841), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_objz00) =
								((obj_t) BgL_obj1975z00_9842), BUNSPEC);
							((((BgL_z62httpzd2statuszd2errorz62_bglt)
										CREF(BgL_new1977z00_9829))->BgL_statusz00) =
								((int) BgL_status1976z00_9843), BUNSPEC);
							BgL_res5517z00_9844 = BgL_new1977z00_9829;
					}}
					BgL_auxz00_13720 = BgL_res5517z00_9844;
				}
				return (obj_t) (BgL_auxz00_13720);
			}
		}
	}



/* %allocate-&http-status-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_z52allocatezd2z62httpzd2statuszd2errorze2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1986z00_9845;

				BgL_new1986z00_9845 =
					((BgL_z62httpzd2statuszd2errorz62_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62httpzd2statuszd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1986z00_9845),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62httpzd2statuszd2errorz62zz__httpz00));
				{	/* Unsafe/http.scm 55 */
					BgL_objectz00_bglt BgL_auxz00_13748;

					BgL_auxz00_13748 = (BgL_objectz00_bglt) (BgL_new1986z00_9845);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_13748, BFALSE);
				}
				return BgL_new1986z00_9845;
			}
		}
	}



/* _%allocate-&http-status-error */
	obj_t BGl__z52allocatezd2z62httpzd2statuszd2errorze2zz__httpz00(obj_t
		BgL_envz00_9646)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{	/* Unsafe/http.scm 55 */
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_13751;

				{	/* Unsafe/http.scm 55 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5518z00_9849;

					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1986z00_9847;

						BgL_new1986z00_9847 =
							((BgL_z62httpzd2statuszd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2statuszd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1986z00_9847),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2statuszd2errorz62zz__httpz00));
						{	/* Unsafe/http.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_13756;

							BgL_auxz00_13756 = (BgL_objectz00_bglt) (BgL_new1986z00_9847);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13756, BFALSE);
						}
						BgL_res5518z00_9849 = BgL_new1986z00_9847;
					}
					BgL_auxz00_13751 = BgL_res5518z00_9849;
				}
				return (obj_t) (BgL_auxz00_13751);
			}
		}
	}



/* &http-status-error-nil */
	BGL_EXPORTED_DEF BgL_z62httpzd2statuszd2errorz62_bglt
		BGl_z62httpzd2statuszd2errorzd2nilzb0zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			if (
				(BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00 == BUNSPEC))
				{	/* Unsafe/http.scm 55 */
					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5249z00_9035;

						{	/* Unsafe/http.scm 55 */
							BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1986z00_9031;

							BgL_new1986z00_9031 =
								((BgL_z62httpzd2statuszd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62httpzd2statuszd2errorz62_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1986z00_9031),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62httpzd2statuszd2errorz62zz__httpz00));
							{	/* Unsafe/http.scm 55 */
								BgL_objectz00_bglt BgL_auxz00_13766;

								BgL_auxz00_13766 = (BgL_objectz00_bglt) (BgL_new1986z00_9031);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_13766, BFALSE);
							}
							BgL_res5249z00_9035 = BgL_new1986z00_9031;
						}
						BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00 =
							(obj_t) (BgL_res5249z00_9035);
					}
					{	/* Unsafe/http.scm 55 */
						BgL_z62httpzd2statuszd2errorz62_bglt BgL_res5250z00_9051;

						{	/* Unsafe/http.scm 55 */
							BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1977z00_9036;

							int BgL_status1976z00_9043;

							BgL_new1977z00_9036 =
								(BgL_z62httpzd2statuszd2errorz62_bglt)
								(BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00);
							BgL_status1976z00_9043 = (int) (((long) 0));
							{	/* Unsafe/http.scm 55 */
								obj_t BgL_fname1970z00_9044;

								obj_t BgL_location1971z00_9045;

								obj_t BgL_stack1972z00_9046;

								obj_t BgL_proc1973z00_9047;

								obj_t BgL_msg1974z00_9048;

								obj_t BgL_obj1975z00_9049;

								int BgL_status1976z00_9050;

								BgL_fname1970z00_9044 = BUNSPEC;
								BgL_location1971z00_9045 = BUNSPEC;
								BgL_stack1972z00_9046 = BUNSPEC;
								BgL_proc1973z00_9047 = BUNSPEC;
								BgL_msg1974z00_9048 = BUNSPEC;
								BgL_obj1975z00_9049 = BUNSPEC;
								BgL_status1976z00_9050 = BgL_status1976z00_9043;
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_fnamez00) =
									((obj_t) BgL_fname1970z00_9044), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_locationz00) =
									((obj_t) BgL_location1971z00_9045), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_stackz00) =
									((obj_t) BgL_stack1972z00_9046), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_procz00) =
									((obj_t) BgL_proc1973z00_9047), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_msgz00) =
									((obj_t) BgL_msg1974z00_9048), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_objz00) =
									((obj_t) BgL_obj1975z00_9049), BUNSPEC);
								((((BgL_z62httpzd2statuszd2errorz62_bglt)
											CREF(BgL_new1977z00_9036))->BgL_statusz00) =
									((int) BgL_status1976z00_9050), BUNSPEC);
								BgL_res5250z00_9051 = BgL_new1977z00_9036;
						}}
						(obj_t) (BgL_res5250z00_9051);
				}}
			else
				{	/* Unsafe/http.scm 55 */
					BFALSE;
				}
			return
				(BgL_z62httpzd2statuszd2errorz62_bglt)
				(BGl_z52thezd2z62httpzd2statuszd2errorzd2nilz30zz__httpz00);
		}
	}



/* _&http-status-error-nil */
	obj_t BGl__z62httpzd2statuszd2errorzd2nilzb0zz__httpz00(obj_t BgL_envz00_9649)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			return (obj_t) (BGl_z62httpzd2statuszd2errorzd2nilzb0zz__httpz00());
		}
	}



/* _&http-status-error-status */
	obj_t BGl__z62httpzd2statuszd2errorzd2statuszb0zz__httpz00(obj_t
		BgL_envz00_9647, obj_t BgL_obj1960z00_9648)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 56 */
			{	/* Unsafe/http.scm 56 */
				int BgL_auxz00_13783;

				{	/* Unsafe/http.scm 56 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_obj1960z00_9851;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1960z00_9648,
							BGl_z62httpzd2statuszd2errorz62zz__httpz00))
						{	/* Unsafe/http.scm 56 */
							BgL_obj1960z00_9851 =
								(BgL_z62httpzd2statuszd2errorz62_bglt) (BgL_obj1960z00_9648);
						}
					else
						{
							obj_t BgL_auxz00_13787;

							BgL_auxz00_13787 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
								BINT(((long) 1730)), BGl_string5501z00zz__httpz00,
								BGl_string5485z00zz__httpz00, BgL_obj1960z00_9648);
							FAILURE(BgL_auxz00_13787, BFALSE, BFALSE);
						}
					BgL_auxz00_13783 =
						(((BgL_z62httpzd2statuszd2errorz62_bglt)
							CREF(BgL_obj1960z00_9851))->BgL_statusz00);
				}
				return BINT(BgL_auxz00_13783);
			}
		}
	}



/* &http-redirection-error? */
	BGL_EXPORTED_DEF bool_t
		BGl_z62httpzd2redirectionzd2errorzf3z91zz__httpz00(obj_t BgL_obj1947z00_100)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1947z00_100,
				BGl_z62httpzd2redirectionzd2errorz62zz__httpz00);
		}
	}



/* _&http-redirection-error? */
	obj_t BGl__z62httpzd2redirectionzd2errorzf3z91zz__httpz00(obj_t
		BgL_envz00_9636, obj_t BgL_obj1947z00_9637)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1947z00_9637,
					BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
		}
	}



/* make-&http-redirection-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00(obj_t
		BgL_fname1898z00_104, obj_t BgL_location1899z00_105,
		obj_t BgL_stack1900z00_106, obj_t BgL_proc1901z00_107,
		obj_t BgL_msg1902z00_108, obj_t BgL_obj1903z00_109)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{	/* Unsafe/http.scm 54 */
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1904z00_9052;

				{	/* Unsafe/http.scm 54 */
					BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5251z00_9057;

					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1920z00_9053;

						BgL_new1920z00_9053 =
							((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2redirectionzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1920z00_9053),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
						{	/* Unsafe/http.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_13800;

							BgL_auxz00_13800 = (BgL_objectz00_bglt) (BgL_new1920z00_9053);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13800, BFALSE);
						}
						BgL_res5251z00_9057 = BgL_new1920z00_9053;
					}
					BgL_new1904z00_9052 = BgL_res5251z00_9057;
				}
				{	/* Unsafe/http.scm 54 */
					BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5252z00_9071;

					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1912z00_9058;

						BgL_new1912z00_9058 = BgL_new1904z00_9052;
						{	/* Unsafe/http.scm 54 */
							obj_t BgL_fname1906z00_9065;

							obj_t BgL_location1907z00_9066;

							obj_t BgL_stack1908z00_9067;

							obj_t BgL_proc1909z00_9068;

							obj_t BgL_msg1910z00_9069;

							obj_t BgL_obj1911z00_9070;

							BgL_fname1906z00_9065 = BgL_fname1898z00_104;
							BgL_location1907z00_9066 = BgL_location1899z00_105;
							BgL_stack1908z00_9067 = BgL_stack1900z00_106;
							BgL_proc1909z00_9068 = BgL_proc1901z00_107;
							BgL_msg1910z00_9069 = BgL_msg1902z00_108;
							BgL_obj1911z00_9070 = BgL_obj1903z00_109;
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_fnamez00) =
								((obj_t) BgL_fname1906z00_9065), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_locationz00) =
								((obj_t) BgL_location1907z00_9066), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_stackz00) =
								((obj_t) BgL_stack1908z00_9067), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_procz00) =
								((obj_t) BgL_proc1909z00_9068), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_msgz00) =
								((obj_t) BgL_msg1910z00_9069), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9058))->BgL_objz00) =
								((obj_t) BgL_obj1911z00_9070), BUNSPEC);
							BgL_res5252z00_9071 = BgL_new1912z00_9058;
					}} BgL_res5252z00_9071;
				}
				return BgL_new1904z00_9052;
			}
		}
	}



/* _make-&http-redirection-error */
	obj_t BGl__makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00(obj_t
		BgL_envz00_9627, obj_t BgL_fname1898z00_9628,
		obj_t BgL_location1899z00_9629, obj_t BgL_stack1900z00_9630,
		obj_t BgL_proc1901z00_9631, obj_t BgL_msg1902z00_9632,
		obj_t BgL_obj1903z00_9633)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			return
				(obj_t) (BGl_makezd2z62httpzd2redirectionzd2errorzb0zz__httpz00
				(BgL_fname1898z00_9628, BgL_location1899z00_9629, BgL_stack1900z00_9630,
					BgL_proc1901z00_9631, BgL_msg1902z00_9632, BgL_obj1903z00_9633));
		}
	}



/* fill-&http-redirection-error! */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_fillzd2z62httpzd2redirectionzd2errorz12za2zz__httpz00
		(BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1912z00_110,
		obj_t BgL_fname1906z00_111, obj_t BgL_location1907z00_112,
		obj_t BgL_stack1908z00_113, obj_t BgL_proc1909z00_114,
		obj_t BgL_msg1910z00_115, obj_t BgL_obj1911z00_116)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{	/* Unsafe/http.scm 54 */
				obj_t BgL_fname1906z00_9853;

				obj_t BgL_location1907z00_9854;

				obj_t BgL_stack1908z00_9855;

				obj_t BgL_proc1909z00_9856;

				obj_t BgL_msg1910z00_9857;

				obj_t BgL_obj1911z00_9858;

				BgL_fname1906z00_9853 = BgL_fname1906z00_111;
				BgL_location1907z00_9854 = BgL_location1907z00_112;
				BgL_stack1908z00_9855 = BgL_stack1908z00_113;
				BgL_proc1909z00_9856 = BgL_proc1909z00_114;
				BgL_msg1910z00_9857 = BgL_msg1910z00_115;
				BgL_obj1911z00_9858 = BgL_obj1911z00_116;
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_fnamez00) =
					((obj_t) BgL_fname1906z00_9853), BUNSPEC);
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_locationz00) =
					((obj_t) BgL_location1907z00_9854), BUNSPEC);
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_stackz00) =
					((obj_t) BgL_stack1908z00_9855), BUNSPEC);
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_procz00) =
					((obj_t) BgL_proc1909z00_9856), BUNSPEC);
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_msgz00) =
					((obj_t) BgL_msg1910z00_9857), BUNSPEC);
				((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							CREF(BgL_new1912z00_110))->BgL_objz00) =
					((obj_t) BgL_obj1911z00_9858), BUNSPEC);
				return BgL_new1912z00_110;
			}
		}
	}



/* _fill-&http-redirection-error! */
	obj_t BGl__fillzd2z62httpzd2redirectionzd2errorz12za2zz__httpz00(obj_t
		BgL_envz00_9682, obj_t BgL_new1912z00_9683, obj_t BgL_fname1906z00_9684,
		obj_t BgL_location1907z00_9685, obj_t BgL_stack1908z00_9686,
		obj_t BgL_proc1909z00_9687, obj_t BgL_msg1910z00_9688,
		obj_t BgL_obj1911z00_9689)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{	/* Unsafe/http.scm 54 */
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_auxz00_13817;

				{	/* Unsafe/http.scm 54 */
					BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5519z00_9873;

					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1912z00_9860;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1912z00_9683,
								BGl_z62httpzd2redirectionzd2errorz62zz__httpz00))
							{	/* Unsafe/http.scm 54 */
								BgL_new1912z00_9860 =
									(BgL_z62httpzd2redirectionzd2errorz62_bglt)
									(BgL_new1912z00_9683);
							}
						else
							{
								obj_t BgL_auxz00_13821;

								BgL_auxz00_13821 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1635)), BGl_string5502z00zz__httpz00,
									BGl_string5483z00zz__httpz00, BgL_new1912z00_9683);
								FAILURE(BgL_auxz00_13821, BFALSE, BFALSE);
							}
						{	/* Unsafe/http.scm 54 */
							obj_t BgL_fname1906z00_9867;

							obj_t BgL_location1907z00_9868;

							obj_t BgL_stack1908z00_9869;

							obj_t BgL_proc1909z00_9870;

							obj_t BgL_msg1910z00_9871;

							obj_t BgL_obj1911z00_9872;

							BgL_fname1906z00_9867 = BgL_fname1906z00_9684;
							BgL_location1907z00_9868 = BgL_location1907z00_9685;
							BgL_stack1908z00_9869 = BgL_stack1908z00_9686;
							BgL_proc1909z00_9870 = BgL_proc1909z00_9687;
							BgL_msg1910z00_9871 = BgL_msg1910z00_9688;
							BgL_obj1911z00_9872 = BgL_obj1911z00_9689;
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_fnamez00) =
								((obj_t) BgL_fname1906z00_9867), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_locationz00) =
								((obj_t) BgL_location1907z00_9868), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_stackz00) =
								((obj_t) BgL_stack1908z00_9869), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_procz00) =
								((obj_t) BgL_proc1909z00_9870), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_msgz00) =
								((obj_t) BgL_msg1910z00_9871), BUNSPEC);
							((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
										CREF(BgL_new1912z00_9860))->BgL_objz00) =
								((obj_t) BgL_obj1911z00_9872), BUNSPEC);
							BgL_res5519z00_9873 = BgL_new1912z00_9860;
					}}
					BgL_auxz00_13817 = BgL_res5519z00_9873;
				}
				return (obj_t) (BgL_auxz00_13817);
			}
		}
	}



/* %allocate-&http-redirection-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_z52allocatezd2z62httpzd2redirectionzd2errorze2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{	/* Unsafe/http.scm 54 */
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1920z00_9874;

				BgL_new1920z00_9874 =
					((BgL_z62httpzd2redirectionzd2errorz62_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_z62httpzd2redirectionzd2errorz62_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1920z00_9874),
					BGl_classzd2numzd2zz__objectz00
					(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
				{	/* Unsafe/http.scm 54 */
					BgL_objectz00_bglt BgL_auxz00_13836;

					BgL_auxz00_13836 = (BgL_objectz00_bglt) (BgL_new1920z00_9874);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_13836, BFALSE);
				}
				return BgL_new1920z00_9874;
			}
		}
	}



/* _%allocate-&http-redirection-error */
	obj_t BGl__z52allocatezd2z62httpzd2redirectionzd2errorze2zz__httpz00(obj_t
		BgL_envz00_9634)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{	/* Unsafe/http.scm 54 */
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_auxz00_13839;

				{	/* Unsafe/http.scm 54 */
					BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5520z00_9878;

					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1920z00_9876;

						BgL_new1920z00_9876 =
							((BgL_z62httpzd2redirectionzd2errorz62_bglt)
							BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2redirectionzd2errorz62_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1920z00_9876),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
						{	/* Unsafe/http.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_13844;

							BgL_auxz00_13844 = (BgL_objectz00_bglt) (BgL_new1920z00_9876);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13844, BFALSE);
						}
						BgL_res5520z00_9878 = BgL_new1920z00_9876;
					}
					BgL_auxz00_13839 = BgL_res5520z00_9878;
				}
				return (obj_t) (BgL_auxz00_13839);
			}
		}
	}



/* &http-redirection-error-nil */
	BGL_EXPORTED_DEF BgL_z62httpzd2redirectionzd2errorz62_bglt
		BGl_z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			if (
				(BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00 ==
					BUNSPEC))
				{	/* Unsafe/http.scm 54 */
					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5253z00_9086;

						{	/* Unsafe/http.scm 54 */
							BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1920z00_9082;

							BgL_new1920z00_9082 =
								((BgL_z62httpzd2redirectionzd2errorz62_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_z62httpzd2redirectionzd2errorz62_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1920z00_9082),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00));
							{	/* Unsafe/http.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_13854;

								BgL_auxz00_13854 = (BgL_objectz00_bglt) (BgL_new1920z00_9082);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_13854, BFALSE);
							}
							BgL_res5253z00_9086 = BgL_new1920z00_9082;
						}
						BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00 =
							(obj_t) (BgL_res5253z00_9086);
					}
					{	/* Unsafe/http.scm 54 */
						BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_res5254z00_9100;

						{	/* Unsafe/http.scm 54 */
							BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1912z00_9087;

							BgL_new1912z00_9087 =
								(BgL_z62httpzd2redirectionzd2errorz62_bglt)
								(BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00);
							{	/* Unsafe/http.scm 54 */
								obj_t BgL_fname1906z00_9094;

								obj_t BgL_location1907z00_9095;

								obj_t BgL_stack1908z00_9096;

								obj_t BgL_proc1909z00_9097;

								obj_t BgL_msg1910z00_9098;

								obj_t BgL_obj1911z00_9099;

								BgL_fname1906z00_9094 = BUNSPEC;
								BgL_location1907z00_9095 = BUNSPEC;
								BgL_stack1908z00_9096 = BUNSPEC;
								BgL_proc1909z00_9097 = BUNSPEC;
								BgL_msg1910z00_9098 = BUNSPEC;
								BgL_obj1911z00_9099 = BUNSPEC;
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_fnamez00) =
									((obj_t) BgL_fname1906z00_9094), BUNSPEC);
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_locationz00) =
									((obj_t) BgL_location1907z00_9095), BUNSPEC);
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_stackz00) =
									((obj_t) BgL_stack1908z00_9096), BUNSPEC);
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_procz00) =
									((obj_t) BgL_proc1909z00_9097), BUNSPEC);
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_msgz00) =
									((obj_t) BgL_msg1910z00_9098), BUNSPEC);
								((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
											CREF(BgL_new1912z00_9087))->BgL_objz00) =
									((obj_t) BgL_obj1911z00_9099), BUNSPEC);
								BgL_res5254z00_9100 = BgL_new1912z00_9087;
						}}
						(obj_t) (BgL_res5254z00_9100);
				}}
			else
				{	/* Unsafe/http.scm 54 */
					BFALSE;
				}
			return
				(BgL_z62httpzd2redirectionzd2errorz62_bglt)
				(BGl_z52thezd2z62httpzd2redirectionzd2errorzd2nilz30zz__httpz00);
		}
	}



/* _&http-redirection-error-nil */
	obj_t BGl__z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00(obj_t
		BgL_envz00_9635)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			return (obj_t) (BGl_z62httpzd2redirectionzd2errorzd2nilzb0zz__httpz00());
		}
	}



/* &http-error? */
	BGL_EXPORTED_DEF bool_t BGl_z62httpzd2errorzf3z43zz__httpz00(obj_t
		BgL_obj1885z00_117)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1885z00_117,
				BGl_z62httpzd2errorzb0zz__httpz00);
		}
	}



/* _&http-error? */
	obj_t BGl__z62httpzd2errorzf3z43zz__httpz00(obj_t BgL_envz00_9625,
		obj_t BgL_obj1885z00_9626)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1885z00_9626,
					BGl_z62httpzd2errorzb0zz__httpz00));
		}
	}



/* make-&http-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2errorzb0_bglt
		BGl_makezd2z62httpzd2errorz62zz__httpz00(obj_t BgL_fname1836z00_121,
		obj_t BgL_location1837z00_122, obj_t BgL_stack1838z00_123,
		obj_t BgL_proc1839z00_124, obj_t BgL_msg1840z00_125,
		obj_t BgL_obj1841z00_126)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{	/* Unsafe/http.scm 52 */
				BgL_z62httpzd2errorzb0_bglt BgL_new1842z00_9101;

				{	/* Unsafe/http.scm 52 */
					BgL_z62httpzd2errorzb0_bglt BgL_res5255z00_9106;

					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_new1858z00_9102;

						BgL_new1858z00_9102 =
							((BgL_z62httpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1858z00_9102),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2errorzb0zz__httpz00));
						{	/* Unsafe/http.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_13876;

							BgL_auxz00_13876 = (BgL_objectz00_bglt) (BgL_new1858z00_9102);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13876, BFALSE);
						}
						BgL_res5255z00_9106 = BgL_new1858z00_9102;
					}
					BgL_new1842z00_9101 = BgL_res5255z00_9106;
				}
				{	/* Unsafe/http.scm 52 */
					BgL_z62httpzd2errorzb0_bglt BgL_res5256z00_9120;

					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_new1850z00_9107;

						BgL_new1850z00_9107 = BgL_new1842z00_9101;
						{	/* Unsafe/http.scm 52 */
							obj_t BgL_fname1844z00_9114;

							obj_t BgL_location1845z00_9115;

							obj_t BgL_stack1846z00_9116;

							obj_t BgL_proc1847z00_9117;

							obj_t BgL_msg1848z00_9118;

							obj_t BgL_obj1849z00_9119;

							BgL_fname1844z00_9114 = BgL_fname1836z00_121;
							BgL_location1845z00_9115 = BgL_location1837z00_122;
							BgL_stack1846z00_9116 = BgL_stack1838z00_123;
							BgL_proc1847z00_9117 = BgL_proc1839z00_124;
							BgL_msg1848z00_9118 = BgL_msg1840z00_125;
							BgL_obj1849z00_9119 = BgL_obj1841z00_126;
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_fnamez00) = ((obj_t) BgL_fname1844z00_9114), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_locationz00) =
								((obj_t) BgL_location1845z00_9115), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_stackz00) = ((obj_t) BgL_stack1846z00_9116), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_procz00) = ((obj_t) BgL_proc1847z00_9117), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_msgz00) = ((obj_t) BgL_msg1848z00_9118), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9107))->
									BgL_objz00) = ((obj_t) BgL_obj1849z00_9119), BUNSPEC);
							BgL_res5256z00_9120 = BgL_new1850z00_9107;
					}} BgL_res5256z00_9120;
				}
				return BgL_new1842z00_9101;
			}
		}
	}



/* _make-&http-error */
	obj_t BGl__makezd2z62httpzd2errorz62zz__httpz00(obj_t BgL_envz00_9616,
		obj_t BgL_fname1836z00_9617, obj_t BgL_location1837z00_9618,
		obj_t BgL_stack1838z00_9619, obj_t BgL_proc1839z00_9620,
		obj_t BgL_msg1840z00_9621, obj_t BgL_obj1841z00_9622)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			return
				(obj_t) (BGl_makezd2z62httpzd2errorz62zz__httpz00(BgL_fname1836z00_9617,
					BgL_location1837z00_9618, BgL_stack1838z00_9619, BgL_proc1839z00_9620,
					BgL_msg1840z00_9621, BgL_obj1841z00_9622));
		}
	}



/* fill-&http-error! */
	BGL_EXPORTED_DEF BgL_z62httpzd2errorzb0_bglt
		BGl_fillzd2z62httpzd2errorz12z70zz__httpz00(BgL_z62httpzd2errorzb0_bglt
		BgL_new1850z00_127, obj_t BgL_fname1844z00_128,
		obj_t BgL_location1845z00_129, obj_t BgL_stack1846z00_130,
		obj_t BgL_proc1847z00_131, obj_t BgL_msg1848z00_132,
		obj_t BgL_obj1849z00_133)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{	/* Unsafe/http.scm 52 */
				obj_t BgL_fname1844z00_9880;

				obj_t BgL_location1845z00_9881;

				obj_t BgL_stack1846z00_9882;

				obj_t BgL_proc1847z00_9883;

				obj_t BgL_msg1848z00_9884;

				obj_t BgL_obj1849z00_9885;

				BgL_fname1844z00_9880 = BgL_fname1844z00_128;
				BgL_location1845z00_9881 = BgL_location1845z00_129;
				BgL_stack1846z00_9882 = BgL_stack1846z00_130;
				BgL_proc1847z00_9883 = BgL_proc1847z00_131;
				BgL_msg1848z00_9884 = BgL_msg1848z00_132;
				BgL_obj1849z00_9885 = BgL_obj1849z00_133;
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_fnamez00) = ((obj_t) BgL_fname1844z00_9880), BUNSPEC);
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_locationz00) = ((obj_t) BgL_location1845z00_9881), BUNSPEC);
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_stackz00) = ((obj_t) BgL_stack1846z00_9882), BUNSPEC);
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_procz00) = ((obj_t) BgL_proc1847z00_9883), BUNSPEC);
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_msgz00) = ((obj_t) BgL_msg1848z00_9884), BUNSPEC);
				((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_127))->
						BgL_objz00) = ((obj_t) BgL_obj1849z00_9885), BUNSPEC);
				return BgL_new1850z00_127;
			}
		}
	}



/* _fill-&http-error! */
	obj_t BGl__fillzd2z62httpzd2errorz12z70zz__httpz00(obj_t BgL_envz00_9690,
		obj_t BgL_new1850z00_9691, obj_t BgL_fname1844z00_9692,
		obj_t BgL_location1845z00_9693, obj_t BgL_stack1846z00_9694,
		obj_t BgL_proc1847z00_9695, obj_t BgL_msg1848z00_9696,
		obj_t BgL_obj1849z00_9697)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{	/* Unsafe/http.scm 52 */
				BgL_z62httpzd2errorzb0_bglt BgL_auxz00_13893;

				{	/* Unsafe/http.scm 52 */
					BgL_z62httpzd2errorzb0_bglt BgL_res5521z00_9900;

					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_new1850z00_9887;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1850z00_9691,
								BGl_z62httpzd2errorzb0zz__httpz00))
							{	/* Unsafe/http.scm 52 */
								BgL_new1850z00_9887 =
									(BgL_z62httpzd2errorzb0_bglt) (BgL_new1850z00_9691);
							}
						else
							{
								obj_t BgL_auxz00_13897;

								BgL_auxz00_13897 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string5428z00zz__httpz00,
									BINT(((long) 1598)), BGl_string5503z00zz__httpz00,
									BGl_string5481z00zz__httpz00, BgL_new1850z00_9691);
								FAILURE(BgL_auxz00_13897, BFALSE, BFALSE);
							}
						{	/* Unsafe/http.scm 52 */
							obj_t BgL_fname1844z00_9894;

							obj_t BgL_location1845z00_9895;

							obj_t BgL_stack1846z00_9896;

							obj_t BgL_proc1847z00_9897;

							obj_t BgL_msg1848z00_9898;

							obj_t BgL_obj1849z00_9899;

							BgL_fname1844z00_9894 = BgL_fname1844z00_9692;
							BgL_location1845z00_9895 = BgL_location1845z00_9693;
							BgL_stack1846z00_9896 = BgL_stack1846z00_9694;
							BgL_proc1847z00_9897 = BgL_proc1847z00_9695;
							BgL_msg1848z00_9898 = BgL_msg1848z00_9696;
							BgL_obj1849z00_9899 = BgL_obj1849z00_9697;
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_fnamez00) = ((obj_t) BgL_fname1844z00_9894), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_locationz00) =
								((obj_t) BgL_location1845z00_9895), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_stackz00) = ((obj_t) BgL_stack1846z00_9896), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_procz00) = ((obj_t) BgL_proc1847z00_9897), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_msgz00) = ((obj_t) BgL_msg1848z00_9898), BUNSPEC);
							((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9887))->
									BgL_objz00) = ((obj_t) BgL_obj1849z00_9899), BUNSPEC);
							BgL_res5521z00_9900 = BgL_new1850z00_9887;
					}}
					BgL_auxz00_13893 = BgL_res5521z00_9900;
				}
				return (obj_t) (BgL_auxz00_13893);
			}
		}
	}



/* %allocate-&http-error */
	BGL_EXPORTED_DEF BgL_z62httpzd2errorzb0_bglt
		BGl_z52allocatezd2z62httpzd2errorz30zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{	/* Unsafe/http.scm 52 */
				BgL_z62httpzd2errorzb0_bglt BgL_new1858z00_9901;

				BgL_new1858z00_9901 =
					((BgL_z62httpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_z62httpzd2errorzb0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1858z00_9901),
					BGl_classzd2numzd2zz__objectz00(BGl_z62httpzd2errorzb0zz__httpz00));
				{	/* Unsafe/http.scm 52 */
					BgL_objectz00_bglt BgL_auxz00_13912;

					BgL_auxz00_13912 = (BgL_objectz00_bglt) (BgL_new1858z00_9901);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_13912, BFALSE);
				}
				return BgL_new1858z00_9901;
			}
		}
	}



/* _%allocate-&http-error */
	obj_t BGl__z52allocatezd2z62httpzd2errorz30zz__httpz00(obj_t BgL_envz00_9623)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{	/* Unsafe/http.scm 52 */
				BgL_z62httpzd2errorzb0_bglt BgL_auxz00_13915;

				{	/* Unsafe/http.scm 52 */
					BgL_z62httpzd2errorzb0_bglt BgL_res5522z00_9905;

					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_new1858z00_9903;

						BgL_new1858z00_9903 =
							((BgL_z62httpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_z62httpzd2errorzb0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1858z00_9903),
							BGl_classzd2numzd2zz__objectz00
							(BGl_z62httpzd2errorzb0zz__httpz00));
						{	/* Unsafe/http.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_13920;

							BgL_auxz00_13920 = (BgL_objectz00_bglt) (BgL_new1858z00_9903);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13920, BFALSE);
						}
						BgL_res5522z00_9905 = BgL_new1858z00_9903;
					}
					BgL_auxz00_13915 = BgL_res5522z00_9905;
				}
				return (obj_t) (BgL_auxz00_13915);
			}
		}
	}



/* &http-error-nil */
	BGL_EXPORTED_DEF BgL_z62httpzd2errorzb0_bglt
		BGl_z62httpzd2errorzd2nilz62zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			if ((BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00 == BUNSPEC))
				{	/* Unsafe/http.scm 52 */
					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_res5257z00_9135;

						{	/* Unsafe/http.scm 52 */
							BgL_z62httpzd2errorzb0_bglt BgL_new1858z00_9131;

							BgL_new1858z00_9131 =
								((BgL_z62httpzd2errorzb0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_z62httpzd2errorzb0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1858z00_9131),
								BGl_classzd2numzd2zz__objectz00
								(BGl_z62httpzd2errorzb0zz__httpz00));
							{	/* Unsafe/http.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_13930;

								BgL_auxz00_13930 = (BgL_objectz00_bglt) (BgL_new1858z00_9131);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_13930, BFALSE);
							}
							BgL_res5257z00_9135 = BgL_new1858z00_9131;
						}
						BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00 =
							(obj_t) (BgL_res5257z00_9135);
					}
					{	/* Unsafe/http.scm 52 */
						BgL_z62httpzd2errorzb0_bglt BgL_res5258z00_9149;

						{	/* Unsafe/http.scm 52 */
							BgL_z62httpzd2errorzb0_bglt BgL_new1850z00_9136;

							BgL_new1850z00_9136 =
								(BgL_z62httpzd2errorzb0_bglt)
								(BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00);
							{	/* Unsafe/http.scm 52 */
								obj_t BgL_fname1844z00_9143;

								obj_t BgL_location1845z00_9144;

								obj_t BgL_stack1846z00_9145;

								obj_t BgL_proc1847z00_9146;

								obj_t BgL_msg1848z00_9147;

								obj_t BgL_obj1849z00_9148;

								BgL_fname1844z00_9143 = BUNSPEC;
								BgL_location1845z00_9144 = BUNSPEC;
								BgL_stack1846z00_9145 = BUNSPEC;
								BgL_proc1847z00_9146 = BUNSPEC;
								BgL_msg1848z00_9147 = BUNSPEC;
								BgL_obj1849z00_9148 = BUNSPEC;
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_fnamez00) = ((obj_t) BgL_fname1844z00_9143), BUNSPEC);
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_locationz00) =
									((obj_t) BgL_location1845z00_9144), BUNSPEC);
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_stackz00) = ((obj_t) BgL_stack1846z00_9145), BUNSPEC);
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_procz00) = ((obj_t) BgL_proc1847z00_9146), BUNSPEC);
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_msgz00) = ((obj_t) BgL_msg1848z00_9147), BUNSPEC);
								((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_new1850z00_9136))->
										BgL_objz00) = ((obj_t) BgL_obj1849z00_9148), BUNSPEC);
								BgL_res5258z00_9149 = BgL_new1850z00_9136;
						}}
						(obj_t) (BgL_res5258z00_9149);
				}}
			else
				{	/* Unsafe/http.scm 52 */
					BFALSE;
				}
			return
				(BgL_z62httpzd2errorzb0_bglt)
				(BGl_z52thezd2z62httpzd2errorzd2nilze2zz__httpz00);
		}
	}



/* _&http-error-nil */
	obj_t BGl__z62httpzd2errorzd2nilz62zz__httpz00(obj_t BgL_envz00_9624)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			return (obj_t) (BGl_z62httpzd2errorzd2nilz62zz__httpz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62httpzd2redirectionzb0zz__httpz00, BGl_proc5504z00zz__httpz00,
				BGl_string5505z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62httpzd2redirectionzb0zz__httpz00, BGl_proc5506z00zz__httpz00,
				BGl_string5507z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62httpzd2statuszd2errorz62zz__httpz00, BGl_proc5508z00zz__httpz00,
				BGl_string5505z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62httpzd2statuszd2errorz62zz__httpz00, BGl_proc5509z00zz__httpz00,
				BGl_string5507z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62httpzd2redirectionzd2errorz62zz__httpz00,
				BGl_proc5510z00zz__httpz00, BGl_string5505z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62httpzd2redirectionzd2errorz62zz__httpz00,
				BGl_proc5511z00zz__httpz00, BGl_string5507z00zz__httpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_z62httpzd2errorzb0zz__httpz00, BGl_proc5512z00zz__httpz00,
				BGl_string5505z00zz__httpz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_z62httpzd2errorzb0zz__httpz00, BGl_proc5513z00zz__httpz00,
				BGl_string5507z00zz__httpz00);
		}
	}



/* struct+object->objec2470 */
	obj_t BGl_structzb2objectzd2ze3objec2470z83zz__httpz00(obj_t BgL_envz00_9706,
		obj_t BgL_oz00_9707, obj_t BgL_sz00_9708)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{
				BgL_z62httpzd2errorzb0_bglt BgL_oz00_5892;

				obj_t BgL_sz00_5893;

				{	/* Unsafe/http.scm 52 */
					BgL_z62httpzd2errorzb0_bglt BgL_auxz00_13953;

					BgL_oz00_5892 = (BgL_z62httpzd2errorzb0_bglt) (BgL_oz00_9707);
					BgL_sz00_5893 = BgL_sz00_9708;
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4901z00_5896;

						BgL_arg4901z00_5896 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 0)));
						{	/* Unsafe/http.scm 52 */
							BgL_objectz00_bglt BgL_auxz00_13956;

							BgL_auxz00_13956 = (BgL_objectz00_bglt) (BgL_oz00_5892);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13956, BgL_arg4901z00_5896);
					}}
					{
						obj_t BgL_auxz00_13959;

						BgL_auxz00_13959 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 1)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_13959), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13963;

						BgL_auxz00_13963 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 2)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_13963), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13967;

						BgL_auxz00_13967 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 3)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_13967), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13971;

						BgL_auxz00_13971 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 4)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->
								BgL_procz00) = ((obj_t) BgL_auxz00_13971), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13975;

						BgL_auxz00_13975 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 5)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->BgL_msgz00) =
							((obj_t) BgL_auxz00_13975), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13979;

						BgL_auxz00_13979 = STRUCT_REF(BgL_sz00_5893, (int) (((long) 6)));
						((((BgL_z62httpzd2errorzb0_bglt) CREF(BgL_oz00_5892))->BgL_objz00) =
							((obj_t) BgL_auxz00_13979), BUNSPEC);
					}
					BgL_auxz00_13953 = BgL_oz00_5892;
					return (obj_t) (BgL_auxz00_13953);
				}
			}
		}
	}



/* object->struct-&http2468 */
	obj_t BGl_objectzd2ze3structzd2z62http2468z81zz__httpz00(obj_t
		BgL_envz00_9709, obj_t BgL_obj1859z00_9710)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 52 */
			{
				BgL_z62httpzd2errorzb0_bglt BgL_obj1859z00_5874;

				BgL_obj1859z00_5874 =
					(BgL_z62httpzd2errorzb0_bglt) (BgL_obj1859z00_9710);
				{	/* Unsafe/http.scm 52 */
					obj_t BgL_res1860z00_5877;

					BgL_res1860z00_5877 =
						make_struct(BGl_symbol5480z00zz__httpz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Unsafe/http.scm 52 */
						int BgL_auxz00_13987;

						BgL_auxz00_13987 = (int) (((long) 0));
						STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_13987, BFALSE);
					}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4889z00_5879;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_13990;

							BgL_auxz00_13990 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4889z00_5879 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_13990))->
								BgL_fnamez00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_13993;

							BgL_auxz00_13993 = (int) (((long) 1));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_13993,
								BgL_arg4889z00_5879);
					}}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4891z00_5881;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_13996;

							BgL_auxz00_13996 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4891z00_5881 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_13996))->
								BgL_locationz00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_13999;

							BgL_auxz00_13999 = (int) (((long) 2));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_13999,
								BgL_arg4891z00_5881);
					}}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4893z00_5883;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14002;

							BgL_auxz00_14002 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4893z00_5883 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14002))->
								BgL_stackz00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_14005;

							BgL_auxz00_14005 = (int) (((long) 3));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_14005,
								BgL_arg4893z00_5883);
					}}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4895z00_5885;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14008;

							BgL_auxz00_14008 = (BgL_z62errorz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4895z00_5885 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14008))->BgL_procz00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_14011;

							BgL_auxz00_14011 = (int) (((long) 4));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_14011,
								BgL_arg4895z00_5885);
					}}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4897z00_5887;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14014;

							BgL_auxz00_14014 = (BgL_z62errorz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4897z00_5887 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14014))->BgL_msgz00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_14017;

							BgL_auxz00_14017 = (int) (((long) 5));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_14017,
								BgL_arg4897z00_5887);
					}}
					{	/* Unsafe/http.scm 52 */
						obj_t BgL_arg4899z00_5889;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14020;

							BgL_auxz00_14020 = (BgL_z62errorz62_bglt) (BgL_obj1859z00_5874);
							BgL_arg4899z00_5889 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14020))->BgL_objz00);
						}
						{	/* Unsafe/http.scm 52 */
							int BgL_auxz00_14023;

							BgL_auxz00_14023 = (int) (((long) 6));
							STRUCT_SET(BgL_res1860z00_5877, BgL_auxz00_14023,
								BgL_arg4899z00_5889);
					}}
					return BgL_res1860z00_5877;
				}
			}
		}
	}



/* struct+object->objec2466 */
	obj_t BGl_structzb2objectzd2ze3objec2466z83zz__httpz00(obj_t BgL_envz00_9711,
		obj_t BgL_oz00_9712, obj_t BgL_sz00_9713)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_oz00_5861;

				obj_t BgL_sz00_5862;

				{	/* Unsafe/http.scm 54 */
					BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_auxz00_14027;

					BgL_oz00_5861 =
						(BgL_z62httpzd2redirectionzd2errorz62_bglt) (BgL_oz00_9712);
					BgL_sz00_5862 = BgL_sz00_9713;
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4886z00_5865;

						BgL_arg4886z00_5865 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 0)));
						{	/* Unsafe/http.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_14030;

							BgL_auxz00_14030 = (BgL_objectz00_bglt) (BgL_oz00_5861);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14030, BgL_arg4886z00_5865);
					}}
					{
						obj_t BgL_auxz00_14033;

						BgL_auxz00_14033 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 1)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_14033), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14037;

						BgL_auxz00_14037 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 2)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_locationz00) =
							((obj_t) BgL_auxz00_14037), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14041;

						BgL_auxz00_14041 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 3)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_stackz00) =
							((obj_t) BgL_auxz00_14041), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14045;

						BgL_auxz00_14045 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 4)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_procz00) =
							((obj_t) BgL_auxz00_14045), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14049;

						BgL_auxz00_14049 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 5)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_msgz00) =
							((obj_t) BgL_auxz00_14049), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14053;

						BgL_auxz00_14053 = STRUCT_REF(BgL_sz00_5862, (int) (((long) 6)));
						((((BgL_z62httpzd2redirectionzd2errorz62_bglt)
									CREF(BgL_oz00_5861))->BgL_objz00) =
							((obj_t) BgL_auxz00_14053), BUNSPEC);
					}
					BgL_auxz00_14027 = BgL_oz00_5861;
					return (obj_t) (BgL_auxz00_14027);
				}
			}
		}
	}



/* object->struct-&http2464 */
	obj_t BGl_objectzd2ze3structzd2z62http2464z81zz__httpz00(obj_t
		BgL_envz00_9714, obj_t BgL_obj1921z00_9715)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 54 */
			{
				BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_obj1921z00_5843;

				BgL_obj1921z00_5843 =
					(BgL_z62httpzd2redirectionzd2errorz62_bglt) (BgL_obj1921z00_9715);
				{	/* Unsafe/http.scm 54 */
					obj_t BgL_res1922z00_5846;

					BgL_res1922z00_5846 =
						make_struct(BGl_symbol5482z00zz__httpz00,
						(int) (((long) 7)), BUNSPEC);
					{	/* Unsafe/http.scm 54 */
						int BgL_auxz00_14061;

						BgL_auxz00_14061 = (int) (((long) 0));
						STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14061, BFALSE);
					}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4874z00_5848;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14064;

							BgL_auxz00_14064 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4874z00_5848 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14064))->
								BgL_fnamez00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14067;

							BgL_auxz00_14067 = (int) (((long) 1));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14067,
								BgL_arg4874z00_5848);
					}}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4876z00_5850;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14070;

							BgL_auxz00_14070 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4876z00_5850 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14070))->
								BgL_locationz00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14073;

							BgL_auxz00_14073 = (int) (((long) 2));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14073,
								BgL_arg4876z00_5850);
					}}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4878z00_5852;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14076;

							BgL_auxz00_14076 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4878z00_5852 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14076))->
								BgL_stackz00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14079;

							BgL_auxz00_14079 = (int) (((long) 3));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14079,
								BgL_arg4878z00_5852);
					}}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4880z00_5854;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14082;

							BgL_auxz00_14082 = (BgL_z62errorz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4880z00_5854 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14082))->BgL_procz00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14085;

							BgL_auxz00_14085 = (int) (((long) 4));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14085,
								BgL_arg4880z00_5854);
					}}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4882z00_5856;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14088;

							BgL_auxz00_14088 = (BgL_z62errorz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4882z00_5856 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14088))->BgL_msgz00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14091;

							BgL_auxz00_14091 = (int) (((long) 5));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14091,
								BgL_arg4882z00_5856);
					}}
					{	/* Unsafe/http.scm 54 */
						obj_t BgL_arg4884z00_5858;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14094;

							BgL_auxz00_14094 = (BgL_z62errorz62_bglt) (BgL_obj1921z00_5843);
							BgL_arg4884z00_5858 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14094))->BgL_objz00);
						}
						{	/* Unsafe/http.scm 54 */
							int BgL_auxz00_14097;

							BgL_auxz00_14097 = (int) (((long) 6));
							STRUCT_SET(BgL_res1922z00_5846, BgL_auxz00_14097,
								BgL_arg4884z00_5858);
					}}
					return BgL_res1922z00_5846;
				}
			}
		}
	}



/* struct+object->objec2462 */
	obj_t BGl_structzb2objectzd2ze3objec2462z83zz__httpz00(obj_t BgL_envz00_9716,
		obj_t BgL_oz00_9717, obj_t BgL_sz00_9718)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_oz00_5829;

				obj_t BgL_sz00_5830;

				{	/* Unsafe/http.scm 55 */
					BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_14101;

					BgL_oz00_5829 =
						(BgL_z62httpzd2statuszd2errorz62_bglt) (BgL_oz00_9717);
					BgL_sz00_5830 = BgL_sz00_9718;
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4871z00_5833;

						BgL_arg4871z00_5833 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 0)));
						{	/* Unsafe/http.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_14104;

							BgL_auxz00_14104 = (BgL_objectz00_bglt) (BgL_oz00_5829);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14104, BgL_arg4871z00_5833);
					}}
					{
						obj_t BgL_auxz00_14107;

						BgL_auxz00_14107 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 1)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14107), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14111;

						BgL_auxz00_14111 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 2)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14111), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14115;

						BgL_auxz00_14115 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 3)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14115), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14119;

						BgL_auxz00_14119 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 4)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_procz00) = ((obj_t) BgL_auxz00_14119), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14123;

						BgL_auxz00_14123 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 5)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_msgz00) = ((obj_t) BgL_auxz00_14123), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14127;

						BgL_auxz00_14127 = STRUCT_REF(BgL_sz00_5830, (int) (((long) 6)));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_objz00) = ((obj_t) BgL_auxz00_14127), BUNSPEC);
					}
					{
						int BgL_auxz00_14131;

						BgL_auxz00_14131 =
							CINT(STRUCT_REF(BgL_sz00_5830, (int) (((long) 7))));
						((((BgL_z62httpzd2statuszd2errorz62_bglt) CREF(BgL_oz00_5829))->
								BgL_statusz00) = ((int) BgL_auxz00_14131), BUNSPEC);
					}
					BgL_auxz00_14101 = BgL_oz00_5829;
					return (obj_t) (BgL_auxz00_14101);
				}
			}
		}
	}



/* object->struct-&http2460 */
	obj_t BGl_objectzd2ze3structzd2z62http2460z81zz__httpz00(obj_t
		BgL_envz00_9719, obj_t BgL_obj1987z00_9720)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 55 */
			{
				BgL_z62httpzd2statuszd2errorz62_bglt BgL_obj1987z00_5809;

				BgL_obj1987z00_5809 =
					(BgL_z62httpzd2statuszd2errorz62_bglt) (BgL_obj1987z00_9720);
				{	/* Unsafe/http.scm 55 */
					obj_t BgL_res1988z00_5812;

					BgL_res1988z00_5812 =
						make_struct(BGl_symbol5484z00zz__httpz00,
						(int) (((long) 8)), BUNSPEC);
					{	/* Unsafe/http.scm 55 */
						int BgL_auxz00_14140;

						BgL_auxz00_14140 = (int) (((long) 0));
						STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14140, BFALSE);
					}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4857z00_5814;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14143;

							BgL_auxz00_14143 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4857z00_5814 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14143))->
								BgL_fnamez00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14146;

							BgL_auxz00_14146 = (int) (((long) 1));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14146,
								BgL_arg4857z00_5814);
					}}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4859z00_5816;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14149;

							BgL_auxz00_14149 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4859z00_5816 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14149))->
								BgL_locationz00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14152;

							BgL_auxz00_14152 = (int) (((long) 2));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14152,
								BgL_arg4859z00_5816);
					}}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4861z00_5818;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14155;

							BgL_auxz00_14155 =
								(BgL_z62exceptionz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4861z00_5818 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14155))->
								BgL_stackz00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14158;

							BgL_auxz00_14158 = (int) (((long) 3));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14158,
								BgL_arg4861z00_5818);
					}}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4863z00_5820;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14161;

							BgL_auxz00_14161 = (BgL_z62errorz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4863z00_5820 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14161))->BgL_procz00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14164;

							BgL_auxz00_14164 = (int) (((long) 4));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14164,
								BgL_arg4863z00_5820);
					}}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4865z00_5822;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14167;

							BgL_auxz00_14167 = (BgL_z62errorz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4865z00_5822 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14167))->BgL_msgz00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14170;

							BgL_auxz00_14170 = (int) (((long) 5));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14170,
								BgL_arg4865z00_5822);
					}}
					{	/* Unsafe/http.scm 55 */
						obj_t BgL_arg4867z00_5824;

						{
							BgL_z62errorz62_bglt BgL_auxz00_14173;

							BgL_auxz00_14173 = (BgL_z62errorz62_bglt) (BgL_obj1987z00_5809);
							BgL_arg4867z00_5824 =
								(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_14173))->BgL_objz00);
						}
						{	/* Unsafe/http.scm 55 */
							int BgL_auxz00_14176;

							BgL_auxz00_14176 = (int) (((long) 6));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14176,
								BgL_arg4867z00_5824);
					}}
					{	/* Unsafe/http.scm 55 */
						int BgL_arg4869z00_5826;

						BgL_arg4869z00_5826 =
							(((BgL_z62httpzd2statuszd2errorz62_bglt)
								CREF(BgL_obj1987z00_5809))->BgL_statusz00);
						{	/* Unsafe/http.scm 55 */
							obj_t BgL_auxz00_14182;

							int BgL_auxz00_14180;

							BgL_auxz00_14182 = BINT(BgL_arg4869z00_5826);
							BgL_auxz00_14180 = (int) (((long) 7));
							STRUCT_SET(BgL_res1988z00_5812, BgL_auxz00_14180,
								BgL_auxz00_14182);
					}}
					return BgL_res1988z00_5812;
				}
			}
		}
	}



/* struct+object->objec2458 */
	obj_t BGl_structzb2objectzd2ze3objec2458z83zz__httpz00(obj_t BgL_envz00_9721,
		obj_t BgL_oz00_9722, obj_t BgL_sz00_9723)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{
				BgL_z62httpzd2redirectionzb0_bglt BgL_oz00_5797;

				obj_t BgL_sz00_5798;

				{	/* Unsafe/http.scm 58 */
					BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_14186;

					BgL_oz00_5797 = (BgL_z62httpzd2redirectionzb0_bglt) (BgL_oz00_9722);
					BgL_sz00_5798 = BgL_sz00_9723;
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4854z00_5801;

						BgL_arg4854z00_5801 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 0)));
						{	/* Unsafe/http.scm 58 */
							BgL_objectz00_bglt BgL_auxz00_14189;

							BgL_auxz00_14189 = (BgL_objectz00_bglt) (BgL_oz00_5797);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_14189, BgL_arg4854z00_5801);
					}}
					{
						obj_t BgL_auxz00_14192;

						BgL_auxz00_14192 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 1)));
						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_oz00_5797))->
								BgL_fnamez00) = ((obj_t) BgL_auxz00_14192), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14196;

						BgL_auxz00_14196 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 2)));
						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_oz00_5797))->
								BgL_locationz00) = ((obj_t) BgL_auxz00_14196), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14200;

						BgL_auxz00_14200 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 3)));
						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_oz00_5797))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_14200), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14204;

						BgL_auxz00_14204 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 4)));
						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_oz00_5797))->
								BgL_portz00) = ((obj_t) BgL_auxz00_14204), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_14208;

						BgL_auxz00_14208 = STRUCT_REF(BgL_sz00_5798, (int) (((long) 5)));
						((((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_oz00_5797))->
								BgL_urlz00) = ((obj_t) BgL_auxz00_14208), BUNSPEC);
					}
					BgL_auxz00_14186 = BgL_oz00_5797;
					return (obj_t) (BgL_auxz00_14186);
				}
			}
		}
	}



/* object->struct-&http2456 */
	obj_t BGl_objectzd2ze3structzd2z62http2456z81zz__httpz00(obj_t
		BgL_envz00_9724, obj_t BgL_obj2049z00_9725)
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 58 */
			{
				BgL_z62httpzd2redirectionzb0_bglt BgL_obj2049z00_5781;

				BgL_obj2049z00_5781 =
					(BgL_z62httpzd2redirectionzb0_bglt) (BgL_obj2049z00_9725);
				{	/* Unsafe/http.scm 58 */
					obj_t BgL_res2050z00_5784;

					BgL_res2050z00_5784 =
						make_struct(BGl_symbol5488z00zz__httpz00,
						(int) (((long) 6)), BUNSPEC);
					{	/* Unsafe/http.scm 58 */
						int BgL_auxz00_14216;

						BgL_auxz00_14216 = (int) (((long) 0));
						STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14216, BFALSE);
					}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4844z00_5786;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14219;

							BgL_auxz00_14219 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2049z00_5781);
							BgL_arg4844z00_5786 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14219))->
								BgL_fnamez00);
						}
						{	/* Unsafe/http.scm 58 */
							int BgL_auxz00_14222;

							BgL_auxz00_14222 = (int) (((long) 1));
							STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14222,
								BgL_arg4844z00_5786);
					}}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4846z00_5788;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14225;

							BgL_auxz00_14225 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2049z00_5781);
							BgL_arg4846z00_5788 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14225))->
								BgL_locationz00);
						}
						{	/* Unsafe/http.scm 58 */
							int BgL_auxz00_14228;

							BgL_auxz00_14228 = (int) (((long) 2));
							STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14228,
								BgL_arg4846z00_5788);
					}}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4848z00_5790;

						{
							BgL_z62exceptionz62_bglt BgL_auxz00_14231;

							BgL_auxz00_14231 =
								(BgL_z62exceptionz62_bglt) (BgL_obj2049z00_5781);
							BgL_arg4848z00_5790 =
								(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_14231))->
								BgL_stackz00);
						}
						{	/* Unsafe/http.scm 58 */
							int BgL_auxz00_14234;

							BgL_auxz00_14234 = (int) (((long) 3));
							STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14234,
								BgL_arg4848z00_5790);
					}}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4850z00_5792;

						BgL_arg4850z00_5792 =
							(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_obj2049z00_5781))->
							BgL_portz00);
						{	/* Unsafe/http.scm 58 */
							int BgL_auxz00_14238;

							BgL_auxz00_14238 = (int) (((long) 4));
							STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14238,
								BgL_arg4850z00_5792);
					}}
					{	/* Unsafe/http.scm 58 */
						obj_t BgL_arg4852z00_5794;

						BgL_arg4852z00_5794 =
							(((BgL_z62httpzd2redirectionzb0_bglt) CREF(BgL_obj2049z00_5781))->
							BgL_urlz00);
						{	/* Unsafe/http.scm 58 */
							int BgL_auxz00_14242;

							BgL_auxz00_14242 = (int) (((long) 5));
							STRUCT_SET(BgL_res2050z00_5784, BgL_auxz00_14242,
								BgL_arg4852z00_5794);
					}}
					return BgL_res2050z00_5784;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__httpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/http.scm 15 */
			BGl_modulezd2initializa7ationz75zz__urlz00(((long) 26833903),
				BSTRING_TO_STRING(BGl_string5514z00zz__httpz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 284603935),
				BSTRING_TO_STRING(BGl_string5514z00zz__httpz00));
			BGl_modulezd2initializa7ationz75zz__base64z00(((long) 111334751),
				BSTRING_TO_STRING(BGl_string5514z00zz__httpz00));
			return
				BGl_modulezd2initializa7ationz75zz__socketz00(((long) 25742292),
				BSTRING_TO_STRING(BGl_string5514z00zz__httpz00));
		}
	}

#ifdef __cplusplus
}
#endif
