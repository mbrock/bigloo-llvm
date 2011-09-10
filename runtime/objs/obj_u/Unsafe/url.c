/*===========================================================================*/
/*   (Unsafe/url.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/url.scm -indent -o objs/obj_u/Unsafe/url.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	static obj_t BGl__urlzd2pathzd2encodez00zz__urlz00(obj_t, obj_t);
	static obj_t BGl__urlzd2decodezd2zz__urlz00(obj_t, obj_t);
	static obj_t BGl_absolutezd2urizd2grammarz00zz__urlz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32238ze3z83zz__urlz00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_intzd2ze3charz31zz__urlz00(long);
	static obj_t BGl__urlzd2decodez12zc0zz__urlz00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_httpzd2abspathzd2grammarz00zz__urlz00 = BUNSPEC;
	static obj_t BGl_thezd2failurezd2zz__urlz00(obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static long BGl_urlzd2decodezd2countz00zz__urlz00(obj_t, long);
	static obj_t BGl_requirezd2initializa7ationz75zz__urlz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza33335ze3z83zz__urlz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__urlz00();
	static obj_t BGl__wwwzd2formzd2urldecodez00zz__urlz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32118ze3z83zz__urlz00(obj_t, obj_t);
	static obj_t BGl_urlzd2stringzd2decodezd2innerz12zc0zz__urlz00(obj_t, long,
		long, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_wwwzd2formzd2urldecodez00zz__urlz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_urlzd2parsezd2zz__urlz00(obj_t);
	extern obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_formzd2urlencodezd2zz__urlz00(obj_t, unsigned char);
	extern obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_urlzd2decodezd2zz__urlz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__urlz00();
	static obj_t BGl_thezd2substringz72za0zz__urlz00(obj_t, int, int);
	static obj_t BGl__urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__urlzd2encodezd2zz__urlz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__urlz00();
	static obj_t BGl__httpzd2urlzd2parsez00zz__urlz00(obj_t, obj_t);
	static long BGl_countzd2argzd2zz__urlz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_urizd2grammarzd2zz__urlz00 = BUNSPEC;
	static bool_t BGl_charzd2hexnumericzf3z21zz__urlz00(unsigned char);
	static long BGl_encodezd2stringzd2zz__urlz00(obj_t, long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32995ze3z83zz__urlz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_thezd2substringzd2zz__urlz00(obj_t, int, int);
	static obj_t BGl__wwwzd2formzd2urlencodez00zz__urlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__urlz00();
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_httpzd2urlzd2parsez00zz__urlz00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern long rgc_buffer_fixnum(obj_t);
	static obj_t BGl_stringzd2decodezd2zz__urlz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_wwwzd2formzd2urlencodez00zz__urlz00(obj_t);
	static obj_t BGl_abspathzd2grammarzd2zz__urlz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_urlzd2encodezd2zz__urlz00(obj_t);
	static obj_t BGl_zc3exitza33533ze3z83zz__urlz00(obj_t);
	static long BGl_charzd2valuezd2zz__urlz00(unsigned char);
	static obj_t BGl_zc3exitza33540ze3z83zz__urlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t);
	static obj_t BGl_zc3anonymousza32901ze3z83zz__urlz00(obj_t, obj_t);
	static obj_t BGl_httpzd2portzd2grammarz00zz__urlz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_urlzd2decodez12zc0zz__urlz00(obj_t);
	static obj_t BGl_zc3exitza33546ze3z83zz__urlz00(obj_t);
	static long BGl_countzd2stringzd2zz__urlz00(obj_t);
	static obj_t BGl_symbol4127z00zz__urlz00 = BUNSPEC;
	static obj_t BGl_symbol4141z00zz__urlz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl__urlzd2parsezd2zz__urlz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33431ze3z83zz__urlz00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33715ze3z83zz__urlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_urlzd2pathzd2encodez00zz__urlz00(obj_t);
	static obj_t BGl_httpzd2urizd2grammarz00zz__urlz00 = BUNSPEC;
	static obj_t BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00 = BUNSPEC;
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza32360ze3z83zz__urlz00(obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_charzd2valuez72za0zz__urlz00(unsigned char);
	static obj_t BGl_methodzd2initzd2zz__urlz00();
	extern int rgc_buffer_unget_char(obj_t, int);
	static obj_t BGl_encodezd2charzd2zz__urlz00(obj_t, long, unsigned char);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4120z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a324163z00,
		BGl_zc3anonymousza32118ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4121z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a324164z00,
		BGl_zc3anonymousza32238ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4122z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a324165z00,
		BGl_zc3anonymousza32360ze3z83zz__urlz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4123z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a324166z00,
		BGl_zc3anonymousza32901ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4124z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a324167z00,
		BGl_zc3anonymousza32995ze3z83zz__urlz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4125z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a334168z00,
		BGl_zc3anonymousza33335ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4126z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a334169z00,
		BGl_zc3anonymousza33431ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4157z00zz__urlz00,
		BgL_bgl_za7c3anonymousza7a334170z00,
		BGl_zc3anonymousza33715ze3z83zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_urlzd2encodezd2envz00zz__urlz00,
		BgL_bgl__urlza7d2encodeza7d24171z00, BGl__urlzd2encodezd2zz__urlz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_urlzd2sanszd2protocolzd2parsezd2envz00zz__urlz00,
		BgL_bgl__urlza7d2sansza7d2pr4172z00,
		BGl__urlzd2sanszd2protocolzd2parsezd2zz__urlz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4128z00zz__urlz00,
		BgL_bgl_string4128za700za7za7_4173za7, "url-parse", 9);
	      DEFINE_STRING(BGl_string4130z00zz__urlz00,
		BgL_bgl_string4130za700za7za7_4174za7, "Illegal character", 17);
	      DEFINE_STRING(BGl_string4129z00zz__urlz00,
		BgL_bgl_string4129za700za7za7_4175za7, "{~a}~a", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_xzd2wwwzd2formzd2urlencodezd2envz00zz__urlz00,
		BgL_bgl__xza7d2wwwza7d2formza74176za7,
		BGl__xzd2wwwzd2formzd2urlencodezd2zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4131z00zz__urlz00,
		BgL_bgl_string4131za700za7za7_4177za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string4132z00zz__urlz00,
		BgL_bgl_string4132za700za7za7_4178za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string4133z00zz__urlz00,
		BgL_bgl_string4133za700za7za7_4179za7, "https", 5);
	      DEFINE_STRING(BGl_string4134z00zz__urlz00,
		BgL_bgl_string4134za700za7za7_4180za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string4135z00zz__urlz00,
		BgL_bgl_string4135za700za7za7_4181za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string4136z00zz__urlz00,
		BgL_bgl_string4136za700za7za7_4182za7, "/", 1);
	      DEFINE_STRING(BGl_string4137z00zz__urlz00,
		BgL_bgl_string4137za700za7za7_4183za7, "http", 4);
	      DEFINE_STRING(BGl_string4138z00zz__urlz00,
		BgL_bgl_string4138za700za7za7_4184za7, "*", 1);
	      DEFINE_STRING(BGl_string4140z00zz__urlz00,
		BgL_bgl_string4140za700za7za7_4185za7, "input-port or string", 20);
	      DEFINE_STRING(BGl_string4139z00zz__urlz00,
		BgL_bgl_string4139za700za7za7_4186za7, "file", 4);
	      DEFINE_STRING(BGl_string4142z00zz__urlz00,
		BgL_bgl_string4142za700za7za7_4187za7, "url-sans-protocol-parse", 23);
	      DEFINE_STRING(BGl_string4143z00zz__urlz00,
		BgL_bgl_string4143za700za7za7_4188za7, "/tmp/bigloo/runtime/Unsafe/url.scm",
		34);
	      DEFINE_STRING(BGl_string4144z00zz__urlz00,
		BgL_bgl_string4144za700za7za7_4189za7, "_url-sans-protocol-parse", 24);
	      DEFINE_STRING(BGl_string4145z00zz__urlz00,
		BgL_bgl_string4145za700za7za7_4190za7, "bstring", 7);
	      DEFINE_STRING(BGl_string4146z00zz__urlz00,
		BgL_bgl_string4146za700za7za7_4191za7, "_url-path-encode", 16);
	      DEFINE_STRING(BGl_string4147z00zz__urlz00,
		BgL_bgl_string4147za700za7za7_4192za7, "~a://~a@~a:~a~a", 15);
	      DEFINE_STRING(BGl_string4148z00zz__urlz00,
		BgL_bgl_string4148za700za7za7_4193za7, "~a://~a:~a~a", 12);
	      DEFINE_STRING(BGl_string4150z00zz__urlz00,
		BgL_bgl_string4150za700za7za7_4194za7, "_url-decode", 11);
	      DEFINE_STRING(BGl_string4149z00zz__urlz00,
		BgL_bgl_string4149za700za7za7_4195za7, "_url-encode", 11);
	      DEFINE_STRING(BGl_string4151z00zz__urlz00,
		BgL_bgl_string4151za700za7za7_4196za7, "_url-decode!", 12);
	      DEFINE_STRING(BGl_string4152z00zz__urlz00,
		BgL_bgl_string4152za700za7za7_4197za7, "", 0);
	      DEFINE_STRING(BGl_string4153z00zz__urlz00,
		BgL_bgl_string4153za700za7za7_4198za7, "_www-form-urlencode", 19);
	      DEFINE_STRING(BGl_string4154z00zz__urlz00,
		BgL_bgl_string4154za700za7za7_4199za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string4155z00zz__urlz00,
		BgL_bgl_string4155za700za7za7_4200za7, "_x-www-form-urlencode", 21);
	      DEFINE_STRING(BGl_string4156z00zz__urlz00,
		BgL_bgl_string4156za700za7za7_4201za7, ";&", 2);
	      DEFINE_STRING(BGl_string4158z00zz__urlz00,
		BgL_bgl_string4158za700za7za7_4202za7, "_www-form-urldecode", 19);
	      DEFINE_STRING(BGl_string4160z00zz__urlz00,
		BgL_bgl_string4160za700za7za7_4203za7, "__url", 5);
	      DEFINE_STRING(BGl_string4159z00zz__urlz00,
		BgL_bgl_string4159za700za7za7_4204za7, "=", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_urlzd2decodez12zd2envz12zz__urlz00,
		BgL_bgl__urlza7d2decodeza7124205z00, BGl__urlzd2decodez12zc0zz__urlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_httpzd2urlzd2parsezd2envzd2zz__urlz00,
		BgL_bgl__httpza7d2urlza7d2pa4206z00, BGl__httpzd2urlzd2parsez00zz__urlz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_urlzd2decodezd2envz00zz__urlz00,
		BgL_bgl__urlza7d2decodeza7d24207z00, BGl__urlzd2decodezd2zz__urlz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wwwzd2formzd2urlencodezd2envzd2zz__urlz00,
		BgL_bgl__wwwza7d2formza7d2ur4208z00,
		BGl__wwwzd2formzd2urlencodez00zz__urlz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_urlzd2parsezd2envz00zz__urlz00,
		BgL_bgl__urlza7d2parseza7d2za74209za7, BGl__urlzd2parsezd2zz__urlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_urlzd2pathzd2encodezd2envzd2zz__urlz00,
		BgL_bgl__urlza7d2pathza7d2en4210z00, BGl__urlzd2pathzd2encodez00zz__urlz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wwwzd2formzd2urldecodezd2envzd2zz__urlz00,
		BgL_bgl__wwwza7d2formza7d2ur4211z00,
		BGl__wwwzd2formzd2urldecodez00zz__urlz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long
		BgL_checksumz00_7265, char *BgL_fromz00_7266)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__urlz00))
				{
					BGl_requirezd2initializa7ationz75zz__urlz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__urlz00();
					BGl_importedzd2moduleszd2initz00zz__urlz00();
					BGl_toplevelzd2initzd2zz__urlz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__urlz00()
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 15 */
			BGl_symbol4127z00zz__urlz00 =
				bstring_to_symbol(BGl_string4128z00zz__urlz00);
			return (BGl_symbol4141z00zz__urlz00 =
				bstring_to_symbol(BGl_string4142z00zz__urlz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__urlz00()
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 15 */
			BGl_urizd2grammarzd2zz__urlz00 = BGl_proc4120z00zz__urlz00;
			BGl_httpzd2urizd2grammarz00zz__urlz00 = BGl_proc4121z00zz__urlz00;
			BGl_absolutezd2urizd2grammarz00zz__urlz00 = BGl_proc4122z00zz__urlz00;
			BGl_abspathzd2grammarzd2zz__urlz00 = BGl_proc4123z00zz__urlz00;
			BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00 =
				BGl_proc4124z00zz__urlz00;
			BGl_httpzd2abspathzd2grammarz00zz__urlz00 = BGl_proc4125z00zz__urlz00;
			return (BGl_httpzd2portzd2grammarz00zz__urlz00 =
				BGl_proc4126z00zz__urlz00, BUNSPEC);
		}
	}



/* <anonymous:3431> */
	obj_t BGl_zc3anonymousza33431ze3z83zz__urlz00(obj_t BgL_envz00_7190,
		obj_t BgL_inputzd2portzd2_7191)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 187 */
			{
				obj_t BgL_inputzd2portzd2_3134;

				BgL_inputzd2portzd2_3134 = BgL_inputzd2portzd2_7191;
				{
					obj_t BgL_inputzd2portzd2_3165;

					long BgL_lastzd2matchzd2_3166;

					obj_t BgL_inputzd2portzd2_3174;

					long BgL_lastzd2matchzd2_3175;

					obj_t BgL_inputzd2portzd2_3183;

					long BgL_lastzd2matchzd2_3184;

					RGC_START_MATCH(BgL_inputzd2portzd2_3134);
					{	/* Unsafe/url.scm 187 */
						long BgL_matchz00_3278;

						BgL_inputzd2portzd2_3165 = BgL_inputzd2portzd2_3134;
						BgL_lastzd2matchzd2_3166 = ((long) 1);
					BgL_zc3anonymousza33432ze3z83_3167:
						{	/* Unsafe/url.scm 187 */
							int BgL_currentzd2charzd2_3168;

							BgL_currentzd2charzd2_3168 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3165);
							if (((long) (BgL_currentzd2charzd2_3168) == ((long) 0)))
								{	/* Unsafe/url.scm 187 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3165))
										{	/* Unsafe/url.scm 187 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_3165))
												{

													goto BgL_zc3anonymousza33432ze3z83_3167;
												}
											else
												{	/* Unsafe/url.scm 187 */
													BgL_matchz00_3278 = BgL_lastzd2matchzd2_3166;
												}
										}
									else
										{	/* Unsafe/url.scm 187 */
											long BgL_newzd2matchzd2_6396;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_3165);
											BgL_newzd2matchzd2_6396 = ((long) 1);
											BgL_matchz00_3278 = BgL_newzd2matchzd2_6396;
								}}
							else
								{	/* Unsafe/url.scm 187 */
									bool_t BgL_testz00_7285;

									if (((long) (BgL_currentzd2charzd2_3168) >= ((long) 48)))
										{	/* Unsafe/url.scm 187 */
											BgL_testz00_7285 =
												((long) (BgL_currentzd2charzd2_3168) < ((long) 58));
										}
									else
										{	/* Unsafe/url.scm 187 */
											BgL_testz00_7285 = ((bool_t) 0);
										}
									if (BgL_testz00_7285)
										{	/* Unsafe/url.scm 187 */
											BgL_inputzd2portzd2_3174 = BgL_inputzd2portzd2_3165;
											BgL_lastzd2matchzd2_3175 = BgL_lastzd2matchzd2_3166;
										BgL_zc3anonymousza33438ze3z83_3176:
											{	/* Unsafe/url.scm 187 */
												long BgL_newzd2matchzd2_3177;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_3174);
												BgL_newzd2matchzd2_3177 = ((long) 0);
												{	/* Unsafe/url.scm 187 */
													int BgL_currentzd2charzd2_3178;

													BgL_currentzd2charzd2_3178 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3174);
													if (
														((long) (BgL_currentzd2charzd2_3178) == ((long) 0)))
														{	/* Unsafe/url.scm 187 */
															bool_t BgL_testz00_7296;

															{	/* Unsafe/url.scm 187 */
																bool_t BgL_res4086z00_6414;

																{	/* Unsafe/url.scm 187 */
																	obj_t BgL_inputzd2portzd2_6410;

																	BgL_inputzd2portzd2_6410 =
																		BgL_inputzd2portzd2_3174;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_6410))
																		{	/* Unsafe/url.scm 187 */
																			BgL_res4086z00_6414 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_6410);
																		}
																	else
																		{	/* Unsafe/url.scm 187 */
																			BgL_res4086z00_6414 = ((bool_t) 0);
																		}
																}
																BgL_testz00_7296 = BgL_res4086z00_6414;
															}
															if (BgL_testz00_7296)
																{

																	goto BgL_zc3anonymousza33438ze3z83_3176;
																}
															else
																{	/* Unsafe/url.scm 187 */
																	BgL_matchz00_3278 = BgL_newzd2matchzd2_3177;
																}
														}
													else
														{	/* Unsafe/url.scm 187 */
															bool_t BgL_testz00_7300;

															if (
																((long) (BgL_currentzd2charzd2_3178) >=
																	((long) 48)))
																{	/* Unsafe/url.scm 187 */
																	BgL_testz00_7300 =
																		(
																		(long) (BgL_currentzd2charzd2_3178) <
																		((long) 58));
																}
															else
																{	/* Unsafe/url.scm 187 */
																	BgL_testz00_7300 = ((bool_t) 0);
																}
															if (BgL_testz00_7300)
																{	/* Unsafe/url.scm 187 */
																	BgL_inputzd2portzd2_3183 =
																		BgL_inputzd2portzd2_3174;
																	BgL_lastzd2matchzd2_3184 =
																		BgL_newzd2matchzd2_3177;
																BgL_zc3anonymousza33443ze3z83_3185:
																	{	/* Unsafe/url.scm 187 */
																		long BgL_newzd2matchzd2_3186;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_3183);
																		BgL_newzd2matchzd2_3186 = ((long) 0);
																		{	/* Unsafe/url.scm 187 */
																			int BgL_currentzd2charzd2_3187;

																			BgL_currentzd2charzd2_3187 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_3183);
																			if (((long) (BgL_currentzd2charzd2_3187)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 187 */
																					bool_t BgL_testz00_7311;

																					{	/* Unsafe/url.scm 187 */
																						bool_t BgL_res4087z00_6427;

																						{	/* Unsafe/url.scm 187 */
																							obj_t BgL_inputzd2portzd2_6423;

																							BgL_inputzd2portzd2_6423 =
																								BgL_inputzd2portzd2_3183;
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_6423))
																								{	/* Unsafe/url.scm 187 */
																									BgL_res4087z00_6427 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_6423);
																								}
																							else
																								{	/* Unsafe/url.scm 187 */
																									BgL_res4087z00_6427 =
																										((bool_t) 0);
																								}
																						}
																						BgL_testz00_7311 =
																							BgL_res4087z00_6427;
																					}
																					if (BgL_testz00_7311)
																						{

																							goto
																								BgL_zc3anonymousza33443ze3z83_3185;
																						}
																					else
																						{	/* Unsafe/url.scm 187 */
																							BgL_matchz00_3278 =
																								BgL_newzd2matchzd2_3186;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 187 */
																					bool_t BgL_testz00_7315;

																					if (
																						((long) (BgL_currentzd2charzd2_3187)
																							>= ((long) 48)))
																						{	/* Unsafe/url.scm 187 */
																							BgL_testz00_7315 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_3187) <
																								((long) 58));
																						}
																					else
																						{	/* Unsafe/url.scm 187 */
																							BgL_testz00_7315 = ((bool_t) 0);
																						}
																					if (BgL_testz00_7315)
																						{
																							long BgL_lastzd2matchzd2_7321;

																							BgL_lastzd2matchzd2_7321 =
																								BgL_newzd2matchzd2_3186;
																							BgL_lastzd2matchzd2_3184 =
																								BgL_lastzd2matchzd2_7321;
																							goto
																								BgL_zc3anonymousza33443ze3z83_3185;
																						}
																					else
																						{	/* Unsafe/url.scm 187 */
																							BgL_matchz00_3278 =
																								BgL_newzd2matchzd2_3186;
																						}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/url.scm 187 */
																	BgL_matchz00_3278 = BgL_newzd2matchzd2_3177;
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/url.scm 187 */
											long BgL_newzd2matchzd2_6404;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_3165);
											BgL_newzd2matchzd2_6404 = ((long) 1);
											BgL_matchz00_3278 = BgL_newzd2matchzd2_6404;
						}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_3134);
						switch (BgL_matchz00_3278)
							{
							case ((long) 1):

								{	/* Unsafe/url.scm 191 */
									obj_t BgL_arg3518z00_3282;

									obj_t BgL_arg3520z00_3284;

									BgL_arg3518z00_3282 = BgL_inputzd2portzd2_3134;
									{	/* Unsafe/url.scm 187 */
										bool_t BgL_testz00_7324;

										{	/* Unsafe/url.scm 187 */
											long BgL_arg3509z00_3267;

											BgL_arg3509z00_3267 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3134);
											BgL_testz00_7324 = (BgL_arg3509z00_3267 == ((long) 0));
										}
										if (BgL_testz00_7324)
											{	/* Unsafe/url.scm 187 */
												BgL_arg3520z00_3284 = BCNST(256);
											}
										else
											{	/* Unsafe/url.scm 187 */
												obj_t BgL_inputzd2portzd2_6438;

												BgL_inputzd2portzd2_6438 = BgL_inputzd2portzd2_3134;
												BgL_arg3520z00_3284 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_6438));
											}
									}
									{	/* Unsafe/url.scm 191 */
										obj_t BgL_linez00_6445;

										BgL_linez00_6445 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00
											(BgL_arg3518z00_3282);
										{	/* Unsafe/url.scm 191 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3521z00_6446;

											{	/* Unsafe/url.scm 191 */
												obj_t BgL_arg3522z00_6447;

												obj_t BgL_arg3523z00_6448;

												obj_t BgL_arg3524z00_6449;

												{	/* Unsafe/url.scm 191 */

													{	/* Unsafe/url.scm 191 */

														BgL_arg3522z00_6447 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg3523z00_6448 = BGl_symbol4127z00zz__urlz00;
												if (STRINGP(BgL_linez00_6445))
													{	/* Unsafe/url.scm 191 */
														obj_t BgL_list3526z00_6452;

														{	/* Unsafe/url.scm 191 */
															obj_t BgL_arg3527z00_6453;

															BgL_arg3527z00_6453 =
																MAKE_PAIR(BgL_linez00_6445, BNIL);
															BgL_list3526z00_6452 =
																MAKE_PAIR(BgL_arg3520z00_3284,
																BgL_arg3527z00_6453);
														}
														BgL_arg3524z00_6449 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4129z00zz__urlz00,
															BgL_list3526z00_6452);
													}
												else
													{	/* Unsafe/url.scm 191 */
														BgL_arg3524z00_6449 = BgL_arg3520z00_3284;
													}
												BgL_arg3521z00_6446 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg3522z00_6447,
													BgL_arg3523z00_6448, BGl_string4130z00zz__urlz00,
													BgL_arg3524z00_6449);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg3521z00_6446));
										}
									}
								}
								break;
							case ((long) 0):

								{	/* Unsafe/url.scm 189 */
									obj_t BgL_inputzd2portzd2_6455;

									BgL_inputzd2portzd2_6455 = BgL_inputzd2portzd2_3134;
									return BINT(rgc_buffer_fixnum(BgL_inputzd2portzd2_6455));
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_3278));
							}
					}
				}
			}
		}
	}



/* <anonymous:3335> */
	obj_t BGl_zc3anonymousza33335ze3z83zz__urlz00(obj_t BgL_envz00_7192,
		obj_t BgL_inputzd2portzd2_7193)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 177 */
			{
				obj_t BgL_inputzd2portzd2_2950;

				BgL_inputzd2portzd2_2950 = BgL_inputzd2portzd2_7193;
				{
					obj_t BgL_inputzd2portzd2_2985;

					long BgL_lastzd2matchzd2_2986;

					obj_t BgL_inputzd2portzd2_2996;

					long BgL_lastzd2matchzd2_2997;

					obj_t BgL_inputzd2portzd2_3007;

					long BgL_lastzd2matchzd2_3008;

					RGC_START_MATCH(BgL_inputzd2portzd2_2950);
					{	/* Unsafe/url.scm 177 */
						long BgL_matchz00_3097;

						BgL_inputzd2portzd2_3007 = BgL_inputzd2portzd2_2950;
						BgL_lastzd2matchzd2_3008 = ((long) 1);
					BgL_zc3anonymousza33351ze3z83_3009:
						{	/* Unsafe/url.scm 177 */
							int BgL_currentzd2charzd2_3010;

							BgL_currentzd2charzd2_3010 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3007);
							if (((long) (BgL_currentzd2charzd2_3010) == ((long) 0)))
								{	/* Unsafe/url.scm 177 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3007))
										{	/* Unsafe/url.scm 177 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_3007))
												{

													goto BgL_zc3anonymousza33351ze3z83_3009;
												}
											else
												{	/* Unsafe/url.scm 177 */
													BgL_matchz00_3097 = BgL_lastzd2matchzd2_3008;
												}
										}
									else
										{	/* Unsafe/url.scm 177 */
											long BgL_newzd2matchzd2_6345;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_3007);
											BgL_newzd2matchzd2_6345 = ((long) 1);
											BgL_matchz00_3097 = BgL_newzd2matchzd2_6345;
								}}
							else
								{	/* Unsafe/url.scm 177 */
									if (((long) (BgL_currentzd2charzd2_3010) == ((long) 47)))
										{	/* Unsafe/url.scm 177 */
											BgL_inputzd2portzd2_2985 = BgL_inputzd2portzd2_3007;
											BgL_lastzd2matchzd2_2986 = BgL_lastzd2matchzd2_3008;
										BgL_zc3anonymousza33337ze3z83_2987:
											{	/* Unsafe/url.scm 177 */
												long BgL_newzd2matchzd2_2988;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2985);
												BgL_newzd2matchzd2_2988 = ((long) 0);
												{	/* Unsafe/url.scm 177 */
													int BgL_currentzd2charzd2_2989;

													BgL_currentzd2charzd2_2989 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2985);
													if (
														((long) (BgL_currentzd2charzd2_2989) == ((long) 0)))
														{	/* Unsafe/url.scm 177 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2985))
																{	/* Unsafe/url.scm 177 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2985))
																		{

																			goto BgL_zc3anonymousza33337ze3z83_2987;
																		}
																	else
																		{	/* Unsafe/url.scm 177 */
																			BgL_matchz00_3097 =
																				BgL_newzd2matchzd2_2988;
																		}
																}
															else
																{	/* Unsafe/url.scm 177 */
																	BgL_inputzd2portzd2_2996 =
																		BgL_inputzd2portzd2_2985;
																	BgL_lastzd2matchzd2_2997 =
																		BgL_newzd2matchzd2_2988;
																BgL_zc3anonymousza33344ze3z83_2998:
																	{	/* Unsafe/url.scm 177 */
																		long BgL_newzd2matchzd2_2999;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2996);
																		BgL_newzd2matchzd2_2999 = ((long) 0);
																		{	/* Unsafe/url.scm 177 */
																			int BgL_currentzd2charzd2_3000;

																			BgL_currentzd2charzd2_3000 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2996);
																			if (((long) (BgL_currentzd2charzd2_3000)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 177 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_2996))
																						{	/* Unsafe/url.scm 177 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_2996))
																								{

																									goto
																										BgL_zc3anonymousza33344ze3z83_2998;
																								}
																							else
																								{	/* Unsafe/url.scm 177 */
																									BgL_matchz00_3097 =
																										BgL_newzd2matchzd2_2999;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_7375;

																							BgL_lastzd2matchzd2_7375 =
																								BgL_newzd2matchzd2_2999;
																							BgL_lastzd2matchzd2_2997 =
																								BgL_lastzd2matchzd2_7375;
																							goto
																								BgL_zc3anonymousza33344ze3z83_2998;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 177 */
																					bool_t BgL_testz00_7376;

																					if (
																						((long) (BgL_currentzd2charzd2_3000)
																							== ((long) 10)))
																						{	/* Unsafe/url.scm 177 */
																							BgL_testz00_7376 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 177 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_3000)
																									== ((long) 13)))
																								{	/* Unsafe/url.scm 177 */
																									BgL_testz00_7376 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/url.scm 177 */
																									BgL_testz00_7376 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_3000)
																										== ((long) 32));
																						}}
																					if (BgL_testz00_7376)
																						{	/* Unsafe/url.scm 177 */
																							BgL_matchz00_3097 =
																								BgL_newzd2matchzd2_2999;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_7385;

																							BgL_lastzd2matchzd2_7385 =
																								BgL_newzd2matchzd2_2999;
																							BgL_lastzd2matchzd2_2997 =
																								BgL_lastzd2matchzd2_7385;
																							goto
																								BgL_zc3anonymousza33344ze3z83_2998;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 177 */
															bool_t BgL_testz00_7386;

															if (
																((long) (BgL_currentzd2charzd2_2989) ==
																	((long) 10)))
																{	/* Unsafe/url.scm 177 */
																	BgL_testz00_7386 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/url.scm 177 */
																	if (
																		((long) (BgL_currentzd2charzd2_2989) ==
																			((long) 13)))
																		{	/* Unsafe/url.scm 177 */
																			BgL_testz00_7386 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/url.scm 177 */
																			BgL_testz00_7386 =
																				(
																				(long) (BgL_currentzd2charzd2_2989) ==
																				((long) 32));
																}}
															if (BgL_testz00_7386)
																{	/* Unsafe/url.scm 177 */
																	BgL_matchz00_3097 = BgL_newzd2matchzd2_2988;
																}
															else
																{
																	long BgL_lastzd2matchzd2_7396;

																	obj_t BgL_inputzd2portzd2_7395;

																	BgL_inputzd2portzd2_7395 =
																		BgL_inputzd2portzd2_2985;
																	BgL_lastzd2matchzd2_7396 =
																		BgL_newzd2matchzd2_2988;
																	BgL_lastzd2matchzd2_2997 =
																		BgL_lastzd2matchzd2_7396;
																	BgL_inputzd2portzd2_2996 =
																		BgL_inputzd2portzd2_7395;
																	goto BgL_zc3anonymousza33344ze3z83_2998;
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/url.scm 177 */
											long BgL_newzd2matchzd2_6351;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_3007);
											BgL_newzd2matchzd2_6351 = ((long) 1);
											BgL_matchz00_3097 = BgL_newzd2matchzd2_6351;
						}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_2950);
						switch (BgL_matchz00_3097)
							{
							case ((long) 1):

								{	/* Unsafe/url.scm 181 */
									obj_t BgL_arg3426z00_3101;

									obj_t BgL_arg3430z00_3103;

									BgL_arg3426z00_3101 = BgL_inputzd2portzd2_2950;
									{	/* Unsafe/url.scm 177 */
										bool_t BgL_testz00_7399;

										{	/* Unsafe/url.scm 177 */
											long BgL_arg3417z00_3086;

											BgL_arg3417z00_3086 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2950);
											BgL_testz00_7399 = (BgL_arg3417z00_3086 == ((long) 0));
										}
										if (BgL_testz00_7399)
											{	/* Unsafe/url.scm 177 */
												BgL_arg3430z00_3103 = BCNST(256);
											}
										else
											{	/* Unsafe/url.scm 177 */
												obj_t BgL_inputzd2portzd2_6364;

												BgL_inputzd2portzd2_6364 = BgL_inputzd2portzd2_2950;
												BgL_arg3430z00_3103 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_6364));
											}
									}
									{	/* Unsafe/url.scm 181 */
										obj_t BgL_linez00_6371;

										BgL_linez00_6371 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00
											(BgL_arg3426z00_3101);
										{	/* Unsafe/url.scm 181 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3521z00_6372;

											{	/* Unsafe/url.scm 181 */
												obj_t BgL_arg3522z00_6373;

												obj_t BgL_arg3523z00_6374;

												obj_t BgL_arg3524z00_6375;

												{	/* Unsafe/url.scm 181 */

													{	/* Unsafe/url.scm 181 */

														BgL_arg3522z00_6373 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg3523z00_6374 = BGl_symbol4127z00zz__urlz00;
												if (STRINGP(BgL_linez00_6371))
													{	/* Unsafe/url.scm 181 */
														obj_t BgL_list3526z00_6378;

														{	/* Unsafe/url.scm 181 */
															obj_t BgL_arg3527z00_6379;

															BgL_arg3527z00_6379 =
																MAKE_PAIR(BgL_linez00_6371, BNIL);
															BgL_list3526z00_6378 =
																MAKE_PAIR(BgL_arg3430z00_3103,
																BgL_arg3527z00_6379);
														}
														BgL_arg3524z00_6375 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4129z00zz__urlz00,
															BgL_list3526z00_6378);
													}
												else
													{	/* Unsafe/url.scm 181 */
														BgL_arg3524z00_6375 = BgL_arg3430z00_3103;
													}
												BgL_arg3521z00_6372 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg3522z00_6373,
													BgL_arg3523z00_6374, BGl_string4130z00zz__urlz00,
													BgL_arg3524z00_6375);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg3521z00_6372));
										}
									}
								}
								break;
							case ((long) 0):

								{	/* Unsafe/url.scm 179 */
									obj_t BgL_res4085z00_6388;

									{	/* Unsafe/url.scm 179 */
										int BgL_arg3363z00_6382;

										{	/* Unsafe/url.scm 179 */
											int BgL_res4084z00_6384;

											{	/* Unsafe/url.scm 179 */
												obj_t BgL_inputzd2portzd2_6383;

												BgL_inputzd2portzd2_6383 = BgL_inputzd2portzd2_2950;
												BgL_res4084z00_6384 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6383));
											}
											BgL_arg3363z00_6382 = BgL_res4084z00_6384;
										}
										BgL_res4085z00_6388 =
											rgc_buffer_substring(BgL_inputzd2portzd2_2950, ((long) 0),
											(long) (BgL_arg3363z00_6382));
									}
									return BgL_res4085z00_6388;
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_3097));
							}
					}
				}
			}
		}
	}



/* <anonymous:2995> */
	obj_t BGl_zc3anonymousza32995ze3z83zz__urlz00(obj_t BgL_envz00_7194,
		obj_t BgL_inputzd2portzd2_7195, obj_t BgL_protocolz00_7196,
		obj_t BgL_userinfoz00_7197)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 147 */
			{
				obj_t BgL_inputzd2portzd2_2388;

				obj_t BgL_protocolz00_2389;

				obj_t BgL_userinfoz00_2390;

				BgL_inputzd2portzd2_2388 = BgL_inputzd2portzd2_7195;
				BgL_protocolz00_2389 = BgL_protocolz00_7196;
				BgL_userinfoz00_2390 = BgL_userinfoz00_7197;
				{
					obj_t BgL_inputzd2portzd2_2758;

					long BgL_lastzd2matchzd2_2759;

					obj_t BgL_inputzd2portzd2_2746;

					long BgL_lastzd2matchzd2_2747;

					obj_t BgL_inputzd2portzd2_2730;

					long BgL_lastzd2matchzd2_2731;

					obj_t BgL_inputzd2portzd2_2718;

					long BgL_lastzd2matchzd2_2719;

					obj_t BgL_inputzd2portzd2_2695;

					long BgL_lastzd2matchzd2_2696;

					obj_t BgL_inputzd2portzd2_2658;

					long BgL_lastzd2matchzd2_2659;

					obj_t BgL_inputzd2portzd2_2617;

					long BgL_lastzd2matchzd2_2618;

					obj_t BgL_inputzd2portzd2_2603;

					long BgL_lastzd2matchzd2_2604;

					obj_t BgL_inputzd2portzd2_2591;

					long BgL_lastzd2matchzd2_2592;

					obj_t BgL_inputzd2portzd2_2579;

					long BgL_lastzd2matchzd2_2580;

					obj_t BgL_inputzd2portzd2_2556;

					long BgL_lastzd2matchzd2_2557;

					obj_t BgL_inputzd2portzd2_2544;

					long BgL_lastzd2matchzd2_2545;

					obj_t BgL_inputzd2portzd2_2519;

					long BgL_lastzd2matchzd2_2520;

					obj_t BgL_inputzd2portzd2_2497;

					long BgL_lastzd2matchzd2_2498;

					obj_t BgL_inputzd2portzd2_2485;

					long BgL_lastzd2matchzd2_2486;

					obj_t BgL_inputzd2portzd2_2458;

					long BgL_lastzd2matchzd2_2459;

					obj_t BgL_inputzd2portzd2_2437;

					long BgL_lastzd2matchzd2_2438;

				BgL_zc3anonymousza33318ze3z83_2860:
					RGC_START_MATCH(BgL_inputzd2portzd2_2388);
					{	/* Unsafe/url.scm 147 */
						long BgL_matchz00_2861;

						BgL_inputzd2portzd2_2458 = BgL_inputzd2portzd2_2388;
						BgL_lastzd2matchzd2_2459 = ((long) 5);
					BgL_zc3anonymousza33011ze3z83_2460:
						{	/* Unsafe/url.scm 147 */
							int BgL_currentzd2charzd2_2461;

							BgL_currentzd2charzd2_2461 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2458);
							if (((long) (BgL_currentzd2charzd2_2461) == ((long) 0)))
								{	/* Unsafe/url.scm 147 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2458))
										{	/* Unsafe/url.scm 147 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_2458))
												{

													goto BgL_zc3anonymousza33011ze3z83_2460;
												}
											else
												{	/* Unsafe/url.scm 147 */
													BgL_matchz00_2861 = BgL_lastzd2matchzd2_2459;
												}
										}
									else
										{	/* Unsafe/url.scm 147 */
											BgL_inputzd2portzd2_2591 = BgL_inputzd2portzd2_2458;
											BgL_lastzd2matchzd2_2592 = BgL_lastzd2matchzd2_2459;
										BgL_zc3anonymousza33113ze3z83_2593:
											{	/* Unsafe/url.scm 147 */
												long BgL_newzd2matchzd2_2594;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2591);
												BgL_newzd2matchzd2_2594 = ((long) 2);
												{	/* Unsafe/url.scm 147 */
													int BgL_currentzd2charzd2_2595;

													BgL_currentzd2charzd2_2595 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2591);
													if (
														((long) (BgL_currentzd2charzd2_2595) == ((long) 0)))
														{	/* Unsafe/url.scm 147 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2591))
																{	/* Unsafe/url.scm 147 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2591))
																		{

																			goto BgL_zc3anonymousza33113ze3z83_2593;
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			BgL_matchz00_2861 =
																				BgL_newzd2matchzd2_2594;
																		}
																}
															else
																{	/* Unsafe/url.scm 147 */
																	BgL_inputzd2portzd2_2579 =
																		BgL_inputzd2portzd2_2591;
																	BgL_lastzd2matchzd2_2580 =
																		BgL_newzd2matchzd2_2594;
																BgL_zc3anonymousza33105ze3z83_2581:
																	{	/* Unsafe/url.scm 147 */
																		long BgL_newzd2matchzd2_2582;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2579);
																		BgL_newzd2matchzd2_2582 = ((long) 2);
																		{	/* Unsafe/url.scm 147 */
																			int BgL_currentzd2charzd2_2583;

																			BgL_currentzd2charzd2_2583 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2579);
																			if (((long) (BgL_currentzd2charzd2_2583)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 147 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_2579))
																						{	/* Unsafe/url.scm 147 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_2579))
																								{

																									goto
																										BgL_zc3anonymousza33105ze3z83_2581;
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									BgL_matchz00_2861 =
																										BgL_newzd2matchzd2_2582;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_7448;

																							BgL_lastzd2matchzd2_7448 =
																								BgL_newzd2matchzd2_2582;
																							BgL_lastzd2matchzd2_2580 =
																								BgL_lastzd2matchzd2_7448;
																							goto
																								BgL_zc3anonymousza33105ze3z83_2581;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					if (
																						((long) (BgL_currentzd2charzd2_2583)
																							== ((long) 58)))
																						{	/* Unsafe/url.scm 147 */
																							long BgL_newzd2matchzd2_5885;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2579);
																							BgL_newzd2matchzd2_5885 =
																								((long) 1);
																							BgL_matchz00_2861 =
																								BgL_newzd2matchzd2_5885;
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							bool_t BgL_testz00_7453;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_2583)
																									== ((long) 47)))
																								{	/* Unsafe/url.scm 147 */
																									BgL_testz00_7453 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_2583)
																											== ((long) 58)))
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7453 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7453 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_2583)
																												== ((long) 64));
																								}}
																							if (BgL_testz00_7453)
																								{	/* Unsafe/url.scm 147 */
																									BgL_matchz00_2861 =
																										BgL_newzd2matchzd2_2582;
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_7462;

																									BgL_lastzd2matchzd2_7462 =
																										BgL_newzd2matchzd2_2582;
																									BgL_lastzd2matchzd2_2580 =
																										BgL_lastzd2matchzd2_7462;
																									goto
																										BgL_zc3anonymousza33105ze3z83_2581;
																								}
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 147 */
															if (
																((long) (BgL_currentzd2charzd2_2595) ==
																	((long) 58)))
																{	/* Unsafe/url.scm 147 */
																	long BgL_newzd2matchzd2_5903;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_2591);
																	BgL_newzd2matchzd2_5903 = ((long) 1);
																	BgL_matchz00_2861 = BgL_newzd2matchzd2_5903;
																}
															else
																{	/* Unsafe/url.scm 147 */
																	bool_t BgL_testz00_7467;

																	if (
																		((long) (BgL_currentzd2charzd2_2595) ==
																			((long) 47)))
																		{	/* Unsafe/url.scm 147 */
																			BgL_testz00_7467 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			if (
																				((long) (BgL_currentzd2charzd2_2595) ==
																					((long) 58)))
																				{	/* Unsafe/url.scm 147 */
																					BgL_testz00_7467 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					BgL_testz00_7467 =
																						(
																						(long) (BgL_currentzd2charzd2_2595)
																						== ((long) 64));
																		}}
																	if (BgL_testz00_7467)
																		{	/* Unsafe/url.scm 147 */
																			BgL_matchz00_2861 =
																				BgL_newzd2matchzd2_2594;
																		}
																	else
																		{
																			long BgL_lastzd2matchzd2_7477;

																			obj_t BgL_inputzd2portzd2_7476;

																			BgL_inputzd2portzd2_7476 =
																				BgL_inputzd2portzd2_2591;
																			BgL_lastzd2matchzd2_7477 =
																				BgL_newzd2matchzd2_2594;
																			BgL_lastzd2matchzd2_2580 =
																				BgL_lastzd2matchzd2_7477;
																			BgL_inputzd2portzd2_2579 =
																				BgL_inputzd2portzd2_7476;
																			goto BgL_zc3anonymousza33105ze3z83_2581;
																		}
																}
														}
												}
											}
										}
								}
							else
								{	/* Unsafe/url.scm 147 */
									if (((long) (BgL_currentzd2charzd2_2461) == ((long) 64)))
										{	/* Unsafe/url.scm 147 */
											long BgL_newzd2matchzd2_5670;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2458);
											BgL_newzd2matchzd2_5670 = ((long) 0);
											BgL_matchz00_2861 = BgL_newzd2matchzd2_5670;
										}
									else
										{	/* Unsafe/url.scm 147 */
											if (((long) (BgL_currentzd2charzd2_2461) == ((long) 58)))
												{	/* Unsafe/url.scm 147 */
													BgL_inputzd2portzd2_2695 = BgL_inputzd2portzd2_2458;
													BgL_lastzd2matchzd2_2696 = BgL_lastzd2matchzd2_2459;
												BgL_zc3anonymousza33196ze3z83_2697:
													{	/* Unsafe/url.scm 147 */
														long BgL_newzd2matchzd2_2698;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_2695);
														BgL_newzd2matchzd2_2698 = ((long) 5);
														{	/* Unsafe/url.scm 147 */
															int BgL_currentzd2charzd2_2699;

															BgL_currentzd2charzd2_2699 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2695);
															if (
																((long) (BgL_currentzd2charzd2_2699) ==
																	((long) 0)))
																{	/* Unsafe/url.scm 147 */
																	bool_t BgL_testz00_7490;

																	{	/* Unsafe/url.scm 147 */
																		bool_t BgL_res4065z00_6077;

																		{	/* Unsafe/url.scm 147 */
																			obj_t BgL_inputzd2portzd2_6073;

																			BgL_inputzd2portzd2_6073 =
																				BgL_inputzd2portzd2_2695;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_6073))
																				{	/* Unsafe/url.scm 147 */
																					BgL_res4065z00_6077 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_6073);
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					BgL_res4065z00_6077 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_7490 = BgL_res4065z00_6077;
																	}
																	if (BgL_testz00_7490)
																		{

																			goto BgL_zc3anonymousza33196ze3z83_2697;
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			BgL_matchz00_2861 =
																				BgL_newzd2matchzd2_2698;
																		}
																}
															else
																{	/* Unsafe/url.scm 147 */
																	if (
																		((long) (BgL_currentzd2charzd2_2699) ==
																			((long) 64)))
																		{	/* Unsafe/url.scm 147 */
																			long BgL_newzd2matchzd2_6082;

																			RGC_STOP_MATCH(BgL_inputzd2portzd2_2695);
																			BgL_newzd2matchzd2_6082 = ((long) 0);
																			BgL_matchz00_2861 =
																				BgL_newzd2matchzd2_6082;
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			if (
																				((long) (BgL_currentzd2charzd2_2699) ==
																					((long) 37)))
																				{	/* Unsafe/url.scm 147 */
																					BgL_inputzd2portzd2_2746 =
																						BgL_inputzd2portzd2_2695;
																					BgL_lastzd2matchzd2_2747 =
																						BgL_newzd2matchzd2_2698;
																				BgL_zc3anonymousza33228ze3z83_2748:
																					{	/* Unsafe/url.scm 147 */
																						int BgL_currentzd2charzd2_2749;

																						BgL_currentzd2charzd2_2749 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_2746);
																						if (((long)
																								(BgL_currentzd2charzd2_2749) ==
																								((long) 0)))
																							{	/* Unsafe/url.scm 147 */
																								bool_t BgL_testz00_7505;

																								{	/* Unsafe/url.scm 147 */
																									bool_t BgL_res4066z00_6147;

																									{	/* Unsafe/url.scm 147 */
																										obj_t
																											BgL_inputzd2portzd2_6143;
																										BgL_inputzd2portzd2_6143 =
																											BgL_inputzd2portzd2_2746;
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_6143))
																											{	/* Unsafe/url.scm 147 */
																												BgL_res4066z00_6147 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_6143);
																											}
																										else
																											{	/* Unsafe/url.scm 147 */
																												BgL_res4066z00_6147 =
																													((bool_t) 0);
																											}
																									}
																									BgL_testz00_7505 =
																										BgL_res4066z00_6147;
																								}
																								if (BgL_testz00_7505)
																									{

																										goto
																											BgL_zc3anonymousza33228ze3z83_2748;
																									}
																								else
																									{	/* Unsafe/url.scm 147 */
																										BgL_matchz00_2861 =
																											BgL_lastzd2matchzd2_2747;
																									}
																							}
																						else
																							{	/* Unsafe/url.scm 147 */
																								bool_t BgL_testz00_7509;

																								{	/* Unsafe/url.scm 147 */
																									bool_t BgL_testz00_7510;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_2749)
																											>= ((long) 48)))
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7510 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_2749)
																												< ((long) 58));
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7510 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_7510)
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7509 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											bool_t BgL_testz00_7516;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_2749)
																													>= ((long) 65)))
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7516 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_2749)
																														< ((long) 71));
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7516 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_7516)
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7509 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_2749)
																															>= ((long) 97)))
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_7509 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_2749)
																																< ((long) 103));
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_7509 =
																																((bool_t) 0);
																														}
																												}
																										}
																								}
																								if (BgL_testz00_7509)
																									{	/* Unsafe/url.scm 147 */
																										BgL_inputzd2portzd2_2544 =
																											BgL_inputzd2portzd2_2746;
																										BgL_lastzd2matchzd2_2545 =
																											BgL_lastzd2matchzd2_2747;
																									BgL_zc3anonymousza33078ze3z83_2546:
																										{	/* Unsafe/url.scm 147 */
																											int
																												BgL_currentzd2charzd2_2547;
																											BgL_currentzd2charzd2_2547
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_2544);
																											if (((long)
																													(BgL_currentzd2charzd2_2547)
																													== ((long) 0)))
																												{	/* Unsafe/url.scm 147 */
																													bool_t
																														BgL_testz00_7531;
																													{	/* Unsafe/url.scm 147 */
																														bool_t
																															BgL_res4063z00_5817;
																														{	/* Unsafe/url.scm 147 */
																															obj_t
																																BgL_inputzd2portzd2_5813;
																															BgL_inputzd2portzd2_5813
																																=
																																BgL_inputzd2portzd2_2544;
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5813))
																																{	/* Unsafe/url.scm 147 */
																																	BgL_res4063z00_5817
																																		=
																																		rgc_fill_buffer
																																		(BgL_inputzd2portzd2_5813);
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	BgL_res4063z00_5817
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																														BgL_testz00_7531 =
																															BgL_res4063z00_5817;
																													}
																													if (BgL_testz00_7531)
																														{

																															goto
																																BgL_zc3anonymousza33078ze3z83_2546;
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															BgL_matchz00_2861
																																=
																																BgL_lastzd2matchzd2_2545;
																														}
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													bool_t
																														BgL_testz00_7535;
																													{	/* Unsafe/url.scm 147 */
																														bool_t
																															BgL_testz00_7536;
																														if (((long)
																																(BgL_currentzd2charzd2_2547)
																																>= ((long) 48)))
																															{	/* Unsafe/url.scm 147 */
																																BgL_testz00_7536
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_2547)
																																	<
																																	((long) 58));
																															}
																														else
																															{	/* Unsafe/url.scm 147 */
																																BgL_testz00_7536
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_7536)
																															{	/* Unsafe/url.scm 147 */
																																BgL_testz00_7535
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 147 */
																																bool_t
																																	BgL_testz00_7542;
																																if (((long)
																																		(BgL_currentzd2charzd2_2547)
																																		>=
																																		((long)
																																			65)))
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7542
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_2547)
																																			<
																																			((long)
																																				71));
																																	}
																																else
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7542
																																			=
																																			((bool_t)
																																			0);
																																	}
																																if (BgL_testz00_7542)
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7535
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 147 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_2547)
																																				>=
																																				((long)
																																					97)))
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7535
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_2547)
																																					<
																																					((long) 103));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7535
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																															}
																													}
																													if (BgL_testz00_7535)
																														{	/* Unsafe/url.scm 147 */
																															BgL_inputzd2portzd2_2497
																																=
																																BgL_inputzd2portzd2_2544;
																															BgL_lastzd2matchzd2_2498
																																=
																																BgL_lastzd2matchzd2_2545;
																														BgL_zc3anonymousza33043ze3z83_2499:
																															{	/* Unsafe/url.scm 147 */
																																int
																																	BgL_currentzd2charzd2_2500;
																																BgL_currentzd2charzd2_2500
																																	=
																																	RGC_BUFFER_GET_CHAR
																																	(BgL_inputzd2portzd2_2497);
																																if (((long)
																																		(BgL_currentzd2charzd2_2500)
																																		==
																																		((long) 0)))
																																	{	/* Unsafe/url.scm 147 */
																																		bool_t
																																			BgL_testz00_7557;
																																		{	/* Unsafe/url.scm 147 */
																																			bool_t
																																				BgL_res4062z00_5735;
																																			{	/* Unsafe/url.scm 147 */
																																				obj_t
																																					BgL_inputzd2portzd2_5731;
																																				BgL_inputzd2portzd2_5731
																																					=
																																					BgL_inputzd2portzd2_2497;
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5731))
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_res4062z00_5735
																																							=
																																							rgc_fill_buffer
																																							(BgL_inputzd2portzd2_5731);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_res4062z00_5735
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			BgL_testz00_7557
																																				=
																																				BgL_res4062z00_5735;
																																		}
																																		if (BgL_testz00_7557)
																																			{

																																				goto
																																					BgL_zc3anonymousza33043ze3z83_2499;
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_matchz00_2861
																																					=
																																					BgL_lastzd2matchzd2_2498;
																																			}
																																	}
																																else
																																	{	/* Unsafe/url.scm 147 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_2500)
																																				==
																																				((long)
																																					64)))
																																			{	/* Unsafe/url.scm 147 */
																																				long
																																					BgL_newzd2matchzd2_5740;
																																				RGC_STOP_MATCH
																																					(BgL_inputzd2portzd2_2497);
																																				BgL_newzd2matchzd2_5740
																																					=
																																					(
																																					(long)
																																					0);
																																				BgL_matchz00_2861
																																					=
																																					BgL_newzd2matchzd2_5740;
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_2500) == ((long) 37)))
																																					{
																																						long
																																							BgL_lastzd2matchzd2_7569;
																																						obj_t
																																							BgL_inputzd2portzd2_7568;
																																						BgL_inputzd2portzd2_7568
																																							=
																																							BgL_inputzd2portzd2_2497;
																																						BgL_lastzd2matchzd2_7569
																																							=
																																							BgL_lastzd2matchzd2_2498;
																																						BgL_lastzd2matchzd2_2747
																																							=
																																							BgL_lastzd2matchzd2_7569;
																																						BgL_inputzd2portzd2_2746
																																							=
																																							BgL_inputzd2portzd2_7568;
																																						goto
																																							BgL_zc3anonymousza33228ze3z83_2748;
																																					}
																																				else
																																					{	/* Unsafe/url.scm 147 */
																																						bool_t
																																							BgL_testz00_7570;
																																						if (
																																							((long) (BgL_currentzd2charzd2_2500) == ((long) 33)))
																																							{	/* Unsafe/url.scm 147 */
																																								BgL_testz00_7570
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 147 */
																																								if (((long) (BgL_currentzd2charzd2_2500) == ((long) 36)))
																																									{	/* Unsafe/url.scm 147 */
																																										BgL_testz00_7570
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 147 */
																																										bool_t
																																											BgL_testz00_7577;
																																										if (((long) (BgL_currentzd2charzd2_2500) >= ((long) 38)))
																																											{	/* Unsafe/url.scm 147 */
																																												BgL_testz00_7577
																																													=
																																													(
																																													(long)
																																													(BgL_currentzd2charzd2_2500)
																																													<
																																													((long) 47));
																																											}
																																										else
																																											{	/* Unsafe/url.scm 147 */
																																												BgL_testz00_7577
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_testz00_7577)
																																											{	/* Unsafe/url.scm 147 */
																																												BgL_testz00_7570
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 147 */
																																												bool_t
																																													BgL_testz00_7583;
																																												if (((long) (BgL_currentzd2charzd2_2500) >= ((long) 48)))
																																													{	/* Unsafe/url.scm 147 */
																																														BgL_testz00_7583
																																															=
																																															(
																																															(long)
																																															(BgL_currentzd2charzd2_2500)
																																															<
																																															((long) 60));
																																													}
																																												else
																																													{	/* Unsafe/url.scm 147 */
																																														BgL_testz00_7583
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												if (BgL_testz00_7583)
																																													{	/* Unsafe/url.scm 147 */
																																														BgL_testz00_7570
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Unsafe/url.scm 147 */
																																														if (((long) (BgL_currentzd2charzd2_2500) == ((long) 61)))
																																															{	/* Unsafe/url.scm 147 */
																																																BgL_testz00_7570
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Unsafe/url.scm 147 */
																																																bool_t
																																																	BgL_testz00_7592;
																																																if (((long) (BgL_currentzd2charzd2_2500) >= ((long) 65)))
																																																	{	/* Unsafe/url.scm 147 */
																																																		BgL_testz00_7592
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_2500)
																																																			<
																																																			((long) 91));
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 147 */
																																																		BgL_testz00_7592
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_7592)
																																																	{	/* Unsafe/url.scm 147 */
																																																		BgL_testz00_7570
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 147 */
																																																		if (((long) (BgL_currentzd2charzd2_2500) == ((long) 95)))
																																																			{	/* Unsafe/url.scm 147 */
																																																				BgL_testz00_7570
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 147 */
																																																				bool_t
																																																					BgL_testz00_7601;
																																																				if (((long) (BgL_currentzd2charzd2_2500) >= ((long) 97)))
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7601
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_2500)
																																																							<
																																																							((long) 123));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7601
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_7601)
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7570
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						if (((long) (BgL_currentzd2charzd2_2500) == ((long) 124)))
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7570
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7570
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_2500)
																																																									==
																																																									((long) 126));
																																							}}}}}}}}}
																																						if (BgL_testz00_7570)
																																							{

																																								goto
																																									BgL_zc3anonymousza33043ze3z83_2499;
																																							}
																																						else
																																							{	/* Unsafe/url.scm 147 */
																																								BgL_matchz00_2861
																																									=
																																									BgL_lastzd2matchzd2_2498;
																																							}
																																					}
																																			}
																																	}
																															}
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															BgL_matchz00_2861
																																=
																																BgL_lastzd2matchzd2_2545;
																														}
																												}
																										}
																									}
																								else
																									{	/* Unsafe/url.scm 147 */
																										BgL_matchz00_2861 =
																											BgL_lastzd2matchzd2_2747;
																									}
																							}
																					}
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					bool_t BgL_testz00_7612;

																					if (
																						((long) (BgL_currentzd2charzd2_2699)
																							== ((long) 33)))
																						{	/* Unsafe/url.scm 147 */
																							BgL_testz00_7612 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_2699)
																									== ((long) 36)))
																								{	/* Unsafe/url.scm 147 */
																									BgL_testz00_7612 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									bool_t BgL_testz00_7619;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_2699)
																											>= ((long) 38)))
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7619 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_2699)
																												< ((long) 47));
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7619 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_7619)
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_7612 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											bool_t BgL_testz00_7625;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_2699)
																													>= ((long) 48)))
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7625 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_2699)
																														< ((long) 60));
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7625 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_7625)
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_7612 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_2699)
																															== ((long) 61)))
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_7612 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															bool_t
																																BgL_testz00_7634;
																															if (((long)
																																	(BgL_currentzd2charzd2_2699)
																																	>=
																																	((long) 65)))
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_7634
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_2699)
																																		<
																																		((long)
																																			91));
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_7634
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_testz00_7634)
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_7612
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_2699)
																																			==
																																			((long)
																																				95)))
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_7612
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			bool_t
																																				BgL_testz00_7643;
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_2699)
																																					>=
																																					((long) 97)))
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_7643
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_2699)
																																						<
																																						((long) 123));
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_7643
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_testz00_7643)
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_7612
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					if (
																																						((long) (BgL_currentzd2charzd2_2699) == ((long) 124)))
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_7612
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_7612
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_2699)
																																								==
																																								((long) 126));
																						}}}}}}}}}
																					if (BgL_testz00_7612)
																						{
																							long BgL_lastzd2matchzd2_7655;

																							obj_t BgL_inputzd2portzd2_7654;

																							BgL_inputzd2portzd2_7654 =
																								BgL_inputzd2portzd2_2695;
																							BgL_lastzd2matchzd2_7655 =
																								BgL_newzd2matchzd2_2698;
																							BgL_lastzd2matchzd2_2498 =
																								BgL_lastzd2matchzd2_7655;
																							BgL_inputzd2portzd2_2497 =
																								BgL_inputzd2portzd2_7654;
																							goto
																								BgL_zc3anonymousza33043ze3z83_2499;
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							BgL_matchz00_2861 =
																								BgL_newzd2matchzd2_2698;
																						}
																				}
																		}
																}
														}
													}
												}
											else
												{	/* Unsafe/url.scm 147 */
													if (
														((long) (BgL_currentzd2charzd2_2461) ==
															((long) 47)))
														{	/* Unsafe/url.scm 147 */
															BgL_inputzd2portzd2_2718 =
																BgL_inputzd2portzd2_2458;
															BgL_lastzd2matchzd2_2719 =
																BgL_lastzd2matchzd2_2459;
														BgL_zc3anonymousza33215ze3z83_2720:
															{	/* Unsafe/url.scm 147 */
																long BgL_newzd2matchzd2_2721;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_2718);
																BgL_newzd2matchzd2_2721 = ((long) 3);
																{	/* Unsafe/url.scm 147 */
																	int BgL_currentzd2charzd2_2722;

																	BgL_currentzd2charzd2_2722 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_2718);
																	if (((long) (BgL_currentzd2charzd2_2722) ==
																			((long) 0)))
																		{	/* Unsafe/url.scm 147 */
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_2718))
																				{	/* Unsafe/url.scm 147 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_2718))
																						{

																							goto
																								BgL_zc3anonymousza33215ze3z83_2720;
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							BgL_matchz00_2861 =
																								BgL_newzd2matchzd2_2721;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					BgL_inputzd2portzd2_2730 =
																						BgL_inputzd2portzd2_2718;
																					BgL_lastzd2matchzd2_2731 =
																						BgL_newzd2matchzd2_2721;
																				BgL_zc3anonymousza33221ze3z83_2732:
																					{	/* Unsafe/url.scm 147 */
																						long BgL_newzd2matchzd2_2733;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_2730);
																						BgL_newzd2matchzd2_2733 =
																							((long) 3);
																						{	/* Unsafe/url.scm 147 */
																							int BgL_currentzd2charzd2_2734;

																							BgL_currentzd2charzd2_2734 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_2730);
																							if (((long)
																									(BgL_currentzd2charzd2_2734)
																									== ((long) 0)))
																								{	/* Unsafe/url.scm 147 */
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_2730))
																										{	/* Unsafe/url.scm 147 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_2730))
																												{

																													goto
																														BgL_zc3anonymousza33221ze3z83_2732;
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													BgL_matchz00_2861 =
																														BgL_newzd2matchzd2_2733;
																												}
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_7677;
																											BgL_lastzd2matchzd2_7677 =
																												BgL_newzd2matchzd2_2733;
																											BgL_lastzd2matchzd2_2731 =
																												BgL_lastzd2matchzd2_7677;
																											goto
																												BgL_zc3anonymousza33221ze3z83_2732;
																										}
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									bool_t BgL_testz00_7678;

																									switch (
																										(long)
																										(BgL_currentzd2charzd2_2734))
																										{
																										case ((long) 10):

																											BgL_testz00_7678 =
																												((bool_t) 1);
																											break;
																										case ((long) 13):

																											BgL_testz00_7678 =
																												((bool_t) 1);
																											break;
																										case ((long) 32):

																											BgL_testz00_7678 =
																												((bool_t) 1);
																											break;
																										default:
																											BgL_testz00_7678 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_2734)
																												== ((long) 58));
																										}
																									if (BgL_testz00_7678)
																										{	/* Unsafe/url.scm 147 */
																											BgL_matchz00_2861 =
																												BgL_newzd2matchzd2_2733;
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_7683;
																											BgL_lastzd2matchzd2_7683 =
																												BgL_newzd2matchzd2_2733;
																											BgL_lastzd2matchzd2_2731 =
																												BgL_lastzd2matchzd2_7683;
																											goto
																												BgL_zc3anonymousza33221ze3z83_2732;
																										}
																								}
																						}
																					}
																				}
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			bool_t BgL_testz00_7684;

																			switch (
																				(long) (BgL_currentzd2charzd2_2722))
																				{
																				case ((long) 10):

																					BgL_testz00_7684 = ((bool_t) 1);
																					break;
																				case ((long) 13):

																					BgL_testz00_7684 = ((bool_t) 1);
																					break;
																				case ((long) 32):

																					BgL_testz00_7684 = ((bool_t) 1);
																					break;
																				default:
																					BgL_testz00_7684 =
																						(
																						(long) (BgL_currentzd2charzd2_2722)
																						== ((long) 58));
																				}
																			if (BgL_testz00_7684)
																				{	/* Unsafe/url.scm 147 */
																					BgL_matchz00_2861 =
																						BgL_newzd2matchzd2_2721;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_7690;

																					obj_t BgL_inputzd2portzd2_7689;

																					BgL_inputzd2portzd2_7689 =
																						BgL_inputzd2portzd2_2718;
																					BgL_lastzd2matchzd2_7690 =
																						BgL_newzd2matchzd2_2721;
																					BgL_lastzd2matchzd2_2731 =
																						BgL_lastzd2matchzd2_7690;
																					BgL_inputzd2portzd2_2730 =
																						BgL_inputzd2portzd2_7689;
																					goto
																						BgL_zc3anonymousza33221ze3z83_2732;
																				}
																		}
																}
															}
														}
													else
														{	/* Unsafe/url.scm 147 */
															if (
																((long) (BgL_currentzd2charzd2_2461) ==
																	((long) 37)))
																{	/* Unsafe/url.scm 147 */
																	BgL_inputzd2portzd2_2437 =
																		BgL_inputzd2portzd2_2458;
																	BgL_lastzd2matchzd2_2438 =
																		BgL_lastzd2matchzd2_2459;
																BgL_zc3anonymousza32996ze3z83_2439:
																	{	/* Unsafe/url.scm 147 */
																		long BgL_newzd2matchzd2_2440;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2437);
																		BgL_newzd2matchzd2_2440 = ((long) 2);
																		{	/* Unsafe/url.scm 147 */
																			int BgL_currentzd2charzd2_2441;

																			BgL_currentzd2charzd2_2441 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2437);
																			if (((long) (BgL_currentzd2charzd2_2441)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 147 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_2437))
																						{	/* Unsafe/url.scm 147 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_2437))
																								{

																									goto
																										BgL_zc3anonymousza32996ze3z83_2439;
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									BgL_matchz00_2861 =
																										BgL_newzd2matchzd2_2440;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_7704;

																							obj_t BgL_inputzd2portzd2_7703;

																							BgL_inputzd2portzd2_7703 =
																								BgL_inputzd2portzd2_2437;
																							BgL_lastzd2matchzd2_7704 =
																								BgL_newzd2matchzd2_2440;
																							BgL_lastzd2matchzd2_2580 =
																								BgL_lastzd2matchzd2_7704;
																							BgL_inputzd2portzd2_2579 =
																								BgL_inputzd2portzd2_7703;
																							goto
																								BgL_zc3anonymousza33105ze3z83_2581;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					if (
																						((long) (BgL_currentzd2charzd2_2441)
																							== ((long) 58)))
																						{	/* Unsafe/url.scm 147 */
																							long BgL_newzd2matchzd2_5635;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_2437);
																							BgL_newzd2matchzd2_5635 =
																								((long) 1);
																							BgL_matchz00_2861 =
																								BgL_newzd2matchzd2_5635;
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							bool_t BgL_testz00_7709;

																							{	/* Unsafe/url.scm 147 */
																								bool_t BgL_testz00_7710;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_2441)
																										>= ((long) 48)))
																									{	/* Unsafe/url.scm 147 */
																										BgL_testz00_7710 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_2441)
																											< ((long) 58));
																									}
																								else
																									{	/* Unsafe/url.scm 147 */
																										BgL_testz00_7710 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_7710)
																									{	/* Unsafe/url.scm 147 */
																										BgL_testz00_7709 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/url.scm 147 */
																										bool_t BgL_testz00_7716;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_2441)
																												>= ((long) 65)))
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_7716 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_2441)
																													< ((long) 71));
																											}
																										else
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_7716 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_7716)
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_7709 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 147 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_2441)
																														>= ((long) 97)))
																													{	/* Unsafe/url.scm 147 */
																														BgL_testz00_7709 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_2441)
																															< ((long) 103));
																													}
																												else
																													{	/* Unsafe/url.scm 147 */
																														BgL_testz00_7709 =
																															((bool_t) 0);
																													}
																											}
																									}
																							}
																							if (BgL_testz00_7709)
																								{	/* Unsafe/url.scm 147 */
																									BgL_inputzd2portzd2_2758 =
																										BgL_inputzd2portzd2_2437;
																									BgL_lastzd2matchzd2_2759 =
																										BgL_newzd2matchzd2_2440;
																								BgL_zc3anonymousza33236ze3z83_2760:
																									{	/* Unsafe/url.scm 147 */
																										long
																											BgL_newzd2matchzd2_2761;
																										RGC_STOP_MATCH
																											(BgL_inputzd2portzd2_2758);
																										BgL_newzd2matchzd2_2761 =
																											((long) 2);
																										{	/* Unsafe/url.scm 147 */
																											int
																												BgL_currentzd2charzd2_2762;
																											BgL_currentzd2charzd2_2762
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_2758);
																											if (((long)
																													(BgL_currentzd2charzd2_2762)
																													== ((long) 0)))
																												{	/* Unsafe/url.scm 147 */
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_2758))
																														{	/* Unsafe/url.scm 147 */
																															if (rgc_fill_buffer(BgL_inputzd2portzd2_2758))
																																{

																																	goto
																																		BgL_zc3anonymousza33236ze3z83_2760;
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	BgL_matchz00_2861
																																		=
																																		BgL_newzd2matchzd2_2761;
																																}
																														}
																													else
																														{
																															long
																																BgL_lastzd2matchzd2_7737;
																															obj_t
																																BgL_inputzd2portzd2_7736;
																															BgL_inputzd2portzd2_7736
																																=
																																BgL_inputzd2portzd2_2758;
																															BgL_lastzd2matchzd2_7737
																																=
																																BgL_newzd2matchzd2_2761;
																															BgL_lastzd2matchzd2_2580
																																=
																																BgL_lastzd2matchzd2_7737;
																															BgL_inputzd2portzd2_2579
																																=
																																BgL_inputzd2portzd2_7736;
																															goto
																																BgL_zc3anonymousza33105ze3z83_2581;
																														}
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_2762)
																															== ((long) 58)))
																														{	/* Unsafe/url.scm 147 */
																															long
																																BgL_newzd2matchzd2_6170;
																															RGC_STOP_MATCH
																																(BgL_inputzd2portzd2_2758);
																															BgL_newzd2matchzd2_6170
																																= ((long) 1);
																															BgL_matchz00_2861
																																=
																																BgL_newzd2matchzd2_6170;
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															bool_t
																																BgL_testz00_7742;
																															{	/* Unsafe/url.scm 147 */
																																bool_t
																																	BgL_testz00_7743;
																																if (((long)
																																		(BgL_currentzd2charzd2_2762)
																																		>=
																																		((long)
																																			48)))
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7743
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_2762)
																																			<
																																			((long)
																																				58));
																																	}
																																else
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7743
																																			=
																																			((bool_t)
																																			0);
																																	}
																																if (BgL_testz00_7743)
																																	{	/* Unsafe/url.scm 147 */
																																		BgL_testz00_7742
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 147 */
																																		bool_t
																																			BgL_testz00_7749;
																																		if (((long)
																																				(BgL_currentzd2charzd2_2762)
																																				>=
																																				((long)
																																					65)))
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7749
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_2762)
																																					<
																																					((long) 71));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7749
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_7749)
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7742
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_2762) >= ((long) 97)))
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_testz00_7742
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_2762)
																																							<
																																							((long) 103));
																																					}
																																				else
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_testz00_7742
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																	}
																															}
																															if (BgL_testz00_7742)
																																{	/* Unsafe/url.scm 147 */
																																	BgL_inputzd2portzd2_2617
																																		=
																																		BgL_inputzd2portzd2_2758;
																																	BgL_lastzd2matchzd2_2618
																																		=
																																		BgL_newzd2matchzd2_2761;
																																BgL_zc3anonymousza33129ze3z83_2619:
																																	{	/* Unsafe/url.scm 147 */
																																		long
																																			BgL_newzd2matchzd2_2620;
																																		RGC_STOP_MATCH
																																			(BgL_inputzd2portzd2_2617);
																																		BgL_newzd2matchzd2_2620
																																			=
																																			((long)
																																			2);
																																		{	/* Unsafe/url.scm 147 */
																																			int
																																				BgL_currentzd2charzd2_2621;
																																			BgL_currentzd2charzd2_2621
																																				=
																																				RGC_BUFFER_GET_CHAR
																																				(BgL_inputzd2portzd2_2617);
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_2621)
																																					==
																																					((long) 0)))
																																				{	/* Unsafe/url.scm 147 */
																																					if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2617))
																																						{	/* Unsafe/url.scm 147 */
																																							if (rgc_fill_buffer(BgL_inputzd2portzd2_2617))
																																								{

																																									goto
																																										BgL_zc3anonymousza33129ze3z83_2619;
																																								}
																																							else
																																								{	/* Unsafe/url.scm 147 */
																																									BgL_matchz00_2861
																																										=
																																										BgL_newzd2matchzd2_2620;
																																								}
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_7770;
																																							obj_t
																																								BgL_inputzd2portzd2_7769;
																																							BgL_inputzd2portzd2_7769
																																								=
																																								BgL_inputzd2portzd2_2617;
																																							BgL_lastzd2matchzd2_7770
																																								=
																																								BgL_newzd2matchzd2_2620;
																																							BgL_lastzd2matchzd2_2580
																																								=
																																								BgL_lastzd2matchzd2_7770;
																																							BgL_inputzd2portzd2_2579
																																								=
																																								BgL_inputzd2portzd2_7769;
																																							goto
																																								BgL_zc3anonymousza33105ze3z83_2581;
																																						}
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					if (
																																						((long) (BgL_currentzd2charzd2_2621) == ((long) 64)))
																																						{	/* Unsafe/url.scm 147 */
																																							long
																																								BgL_newzd2matchzd2_5941;
																																							RGC_STOP_MATCH
																																								(BgL_inputzd2portzd2_2617);
																																							BgL_newzd2matchzd2_5941
																																								=
																																								(
																																								(long)
																																								0);
																																							BgL_matchz00_2861
																																								=
																																								BgL_newzd2matchzd2_5941;
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							if (((long) (BgL_currentzd2charzd2_2621) == ((long) 58)))
																																								{	/* Unsafe/url.scm 147 */
																																									BgL_inputzd2portzd2_2556
																																										=
																																										BgL_inputzd2portzd2_2617;
																																									BgL_lastzd2matchzd2_2557
																																										=
																																										BgL_newzd2matchzd2_2620;
																																								BgL_zc3anonymousza33086ze3z83_2558:
																																									{	/* Unsafe/url.scm 147 */
																																										long
																																											BgL_newzd2matchzd2_2559;
																																										RGC_STOP_MATCH
																																											(BgL_inputzd2portzd2_2556);
																																										BgL_newzd2matchzd2_2559
																																											=
																																											(
																																											(long)
																																											1);
																																										{	/* Unsafe/url.scm 147 */
																																											int
																																												BgL_currentzd2charzd2_2560;
																																											BgL_currentzd2charzd2_2560
																																												=
																																												RGC_BUFFER_GET_CHAR
																																												(BgL_inputzd2portzd2_2556);
																																											if (((long) (BgL_currentzd2charzd2_2560) == ((long) 0)))
																																												{	/* Unsafe/url.scm 147 */
																																													bool_t
																																														BgL_testz00_7783;
																																													{	/* Unsafe/url.scm 147 */
																																														bool_t
																																															BgL_res4064z00_5838;
																																														{	/* Unsafe/url.scm 147 */
																																															obj_t
																																																BgL_inputzd2portzd2_5834;
																																															BgL_inputzd2portzd2_5834
																																																=
																																																BgL_inputzd2portzd2_2556;
																																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5834))
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_res4064z00_5838
																																																		=
																																																		rgc_fill_buffer
																																																		(BgL_inputzd2portzd2_5834);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_res4064z00_5838
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																														BgL_testz00_7783
																																															=
																																															BgL_res4064z00_5838;
																																													}
																																													if (BgL_testz00_7783)
																																														{

																																															goto
																																																BgL_zc3anonymousza33086ze3z83_2558;
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_matchz00_2861
																																																=
																																																BgL_newzd2matchzd2_2559;
																																														}
																																												}
																																											else
																																												{	/* Unsafe/url.scm 147 */
																																													if (((long) (BgL_currentzd2charzd2_2560) == ((long) 64)))
																																														{	/* Unsafe/url.scm 147 */
																																															long
																																																BgL_newzd2matchzd2_5843;
																																															RGC_STOP_MATCH
																																																(BgL_inputzd2portzd2_2556);
																																															BgL_newzd2matchzd2_5843
																																																=
																																																(
																																																(long)
																																																0);
																																															BgL_matchz00_2861
																																																=
																																																BgL_newzd2matchzd2_5843;
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															if (((long) (BgL_currentzd2charzd2_2560) == ((long) 37)))
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_7795;
																																																	obj_t
																																																		BgL_inputzd2portzd2_7794;
																																																	BgL_inputzd2portzd2_7794
																																																		=
																																																		BgL_inputzd2portzd2_2556;
																																																	BgL_lastzd2matchzd2_7795
																																																		=
																																																		BgL_newzd2matchzd2_2559;
																																																	BgL_lastzd2matchzd2_2747
																																																		=
																																																		BgL_lastzd2matchzd2_7795;
																																																	BgL_inputzd2portzd2_2746
																																																		=
																																																		BgL_inputzd2portzd2_7794;
																																																	goto
																																																		BgL_zc3anonymousza33228ze3z83_2748;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	bool_t
																																																		BgL_testz00_7796;
																																																	if (((long) (BgL_currentzd2charzd2_2560) == ((long) 33)))
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_testz00_7796
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			if (((long) (BgL_currentzd2charzd2_2560) == ((long) 36)))
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_testz00_7796
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 147 */
																																																					bool_t
																																																						BgL_testz00_7803;
																																																					if (((long) (BgL_currentzd2charzd2_2560) >= ((long) 38)))
																																																						{	/* Unsafe/url.scm 147 */
																																																							BgL_testz00_7803
																																																								=
																																																								(
																																																								(long)
																																																								(BgL_currentzd2charzd2_2560)
																																																								<
																																																								((long) 47));
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 147 */
																																																							BgL_testz00_7803
																																																								=
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																					if (BgL_testz00_7803)
																																																						{	/* Unsafe/url.scm 147 */
																																																							BgL_testz00_7796
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 147 */
																																																							bool_t
																																																								BgL_testz00_7809;
																																																							if (((long) (BgL_currentzd2charzd2_2560) >= ((long) 48)))
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7809
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_currentzd2charzd2_2560)
																																																										<
																																																										((long) 60));
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7809
																																																										=
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																							if (BgL_testz00_7809)
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7796
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									if (((long) (BgL_currentzd2charzd2_2560) == ((long) 61)))
																																																										{	/* Unsafe/url.scm 147 */
																																																											BgL_testz00_7796
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 147 */
																																																											bool_t
																																																												BgL_testz00_7818;
																																																											if (((long) (BgL_currentzd2charzd2_2560) >= ((long) 65)))
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7818
																																																														=
																																																														(
																																																														(long)
																																																														(BgL_currentzd2charzd2_2560)
																																																														<
																																																														((long) 91));
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7818
																																																														=
																																																														(
																																																														(bool_t)
																																																														0);
																																																												}
																																																											if (BgL_testz00_7818)
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7796
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 147 */
																																																													if (((long) (BgL_currentzd2charzd2_2560) == ((long) 95)))
																																																														{	/* Unsafe/url.scm 147 */
																																																															BgL_testz00_7796
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 147 */
																																																															bool_t
																																																																BgL_testz00_7827;
																																																															if (((long) (BgL_currentzd2charzd2_2560) >= ((long) 97)))
																																																																{	/* Unsafe/url.scm 147 */
																																																																	BgL_testz00_7827
																																																																		=
																																																																		(
																																																																		(long)
																																																																		(BgL_currentzd2charzd2_2560)
																																																																		<
																																																																		((long) 123));
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 147 */
																																																																	BgL_testz00_7827
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		0);
																																																																}
																																																															if (BgL_testz00_7827)
																																																																{	/* Unsafe/url.scm 147 */
																																																																	BgL_testz00_7796
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		1);
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 147 */
																																																																	if (((long) (BgL_currentzd2charzd2_2560) == ((long) 124)))
																																																																		{	/* Unsafe/url.scm 147 */
																																																																			BgL_testz00_7796
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				1);
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 147 */
																																																																			BgL_testz00_7796
																																																																				=
																																																																				(
																																																																				(long)
																																																																				(BgL_currentzd2charzd2_2560)
																																																																				==
																																																																				((long) 126));
																																																		}}}}}}}}}
																																																	if (BgL_testz00_7796)
																																																		{
																																																			long
																																																				BgL_lastzd2matchzd2_7839;
																																																			obj_t
																																																				BgL_inputzd2portzd2_7838;
																																																			BgL_inputzd2portzd2_7838
																																																				=
																																																				BgL_inputzd2portzd2_2556;
																																																			BgL_lastzd2matchzd2_7839
																																																				=
																																																				BgL_newzd2matchzd2_2559;
																																																			BgL_lastzd2matchzd2_2498
																																																				=
																																																				BgL_lastzd2matchzd2_7839;
																																																			BgL_inputzd2portzd2_2497
																																																				=
																																																				BgL_inputzd2portzd2_7838;
																																																			goto
																																																				BgL_zc3anonymousza33043ze3z83_2499;
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_matchz00_2861
																																																				=
																																																				BgL_newzd2matchzd2_2559;
																																																		}
																																																}
																																														}
																																												}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/url.scm 147 */
																																									if (((long) (BgL_currentzd2charzd2_2621) == ((long) 37)))
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_inputzd2portzd2_2519
																																												=
																																												BgL_inputzd2portzd2_2617;
																																											BgL_lastzd2matchzd2_2520
																																												=
																																												BgL_newzd2matchzd2_2620;
																																										BgL_zc3anonymousza33062ze3z83_2521:
																																											{	/* Unsafe/url.scm 147 */
																																												long
																																													BgL_newzd2matchzd2_2522;
																																												RGC_STOP_MATCH
																																													(BgL_inputzd2portzd2_2519);
																																												BgL_newzd2matchzd2_2522
																																													=
																																													(
																																													(long)
																																													2);
																																												{	/* Unsafe/url.scm 147 */
																																													int
																																														BgL_currentzd2charzd2_2523;
																																													BgL_currentzd2charzd2_2523
																																														=
																																														RGC_BUFFER_GET_CHAR
																																														(BgL_inputzd2portzd2_2519);
																																													if (((long) (BgL_currentzd2charzd2_2523) == ((long) 0)))
																																														{	/* Unsafe/url.scm 147 */
																																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2519))
																																																{	/* Unsafe/url.scm 147 */
																																																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2519))
																																																		{

																																																			goto
																																																				BgL_zc3anonymousza33062ze3z83_2521;
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_matchz00_2861
																																																				=
																																																				BgL_newzd2matchzd2_2522;
																																																		}
																																																}
																																															else
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_7853;
																																																	obj_t
																																																		BgL_inputzd2portzd2_7852;
																																																	BgL_inputzd2portzd2_7852
																																																		=
																																																		BgL_inputzd2portzd2_2519;
																																																	BgL_lastzd2matchzd2_7853
																																																		=
																																																		BgL_newzd2matchzd2_2522;
																																																	BgL_lastzd2matchzd2_2580
																																																		=
																																																		BgL_lastzd2matchzd2_7853;
																																																	BgL_inputzd2portzd2_2579
																																																		=
																																																		BgL_inputzd2portzd2_7852;
																																																	goto
																																																		BgL_zc3anonymousza33105ze3z83_2581;
																																																}
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															if (((long) (BgL_currentzd2charzd2_2523) == ((long) 58)))
																																																{	/* Unsafe/url.scm 147 */
																																																	long
																																																		BgL_newzd2matchzd2_5782;
																																																	RGC_STOP_MATCH
																																																		(BgL_inputzd2portzd2_2519);
																																																	BgL_newzd2matchzd2_5782
																																																		=
																																																		(
																																																		(long)
																																																		1);
																																																	BgL_matchz00_2861
																																																		=
																																																		BgL_newzd2matchzd2_5782;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	bool_t
																																																		BgL_testz00_7858;
																																																	{	/* Unsafe/url.scm 147 */
																																																		bool_t
																																																			BgL_testz00_7859;
																																																		if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 48)))
																																																			{	/* Unsafe/url.scm 147 */
																																																				BgL_testz00_7859
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_2523)
																																																					<
																																																					((long) 58));
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 147 */
																																																				BgL_testz00_7859
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_7859)
																																																			{	/* Unsafe/url.scm 147 */
																																																				BgL_testz00_7858
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 147 */
																																																				bool_t
																																																					BgL_testz00_7865;
																																																				if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 65)))
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7865
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_2523)
																																																							<
																																																							((long) 71));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7865
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_7865)
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7858
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 97)))
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7858
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_2523)
																																																									<
																																																									((long) 103));
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7858
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																					}
																																																			}
																																																	}
																																																	if (BgL_testz00_7858)
																																																		{
																																																			long
																																																				BgL_lastzd2matchzd2_7877;
																																																			obj_t
																																																				BgL_inputzd2portzd2_7876;
																																																			BgL_inputzd2portzd2_7876
																																																				=
																																																				BgL_inputzd2portzd2_2519;
																																																			BgL_lastzd2matchzd2_7877
																																																				=
																																																				BgL_newzd2matchzd2_2522;
																																																			BgL_lastzd2matchzd2_2759
																																																				=
																																																				BgL_lastzd2matchzd2_7877;
																																																			BgL_inputzd2portzd2_2758
																																																				=
																																																				BgL_inputzd2portzd2_7876;
																																																			goto
																																																				BgL_zc3anonymousza33236ze3z83_2760;
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			bool_t
																																																				BgL_testz00_7878;
																																																			{	/* Unsafe/url.scm 147 */
																																																				bool_t
																																																					BgL_testz00_7879;
																																																				if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 47)))
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7879
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_2523)
																																																							<
																																																							((long) 59));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7879
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_7879)
																																																					{	/* Unsafe/url.scm 147 */
																																																						BgL_testz00_7878
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 147 */
																																																						bool_t
																																																							BgL_testz00_7885;
																																																						if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 64)))
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7885
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_2523)
																																																									<
																																																									((long) 71));
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7885
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																						if (BgL_testz00_7885)
																																																							{	/* Unsafe/url.scm 147 */
																																																								BgL_testz00_7878
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 147 */
																																																								if (((long) (BgL_currentzd2charzd2_2523) >= ((long) 97)))
																																																									{	/* Unsafe/url.scm 147 */
																																																										BgL_testz00_7878
																																																											=
																																																											(
																																																											(long)
																																																											(BgL_currentzd2charzd2_2523)
																																																											<
																																																											((long) 103));
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 147 */
																																																										BgL_testz00_7878
																																																											=
																																																											(
																																																											(bool_t)
																																																											0);
																																																									}
																																																							}
																																																					}
																																																			}
																																																			if (BgL_testz00_7878)
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_matchz00_2861
																																																						=
																																																						BgL_newzd2matchzd2_2522;
																																																				}
																																																			else
																																																				{
																																																					long
																																																						BgL_lastzd2matchzd2_7897;
																																																					obj_t
																																																						BgL_inputzd2portzd2_7896;
																																																					BgL_inputzd2portzd2_7896
																																																						=
																																																						BgL_inputzd2portzd2_2519;
																																																					BgL_lastzd2matchzd2_7897
																																																						=
																																																						BgL_newzd2matchzd2_2522;
																																																					BgL_lastzd2matchzd2_2580
																																																						=
																																																						BgL_lastzd2matchzd2_7897;
																																																					BgL_inputzd2portzd2_2579
																																																						=
																																																						BgL_inputzd2portzd2_7896;
																																																					goto
																																																						BgL_zc3anonymousza33105ze3z83_2581;
																																																				}
																																																		}
																																																}
																																														}
																																												}
																																											}
																																										}
																																									else
																																										{	/* Unsafe/url.scm 147 */
																																											bool_t
																																												BgL_testz00_7898;
																																											if (((long) (BgL_currentzd2charzd2_2621) == ((long) 33)))
																																												{	/* Unsafe/url.scm 147 */
																																													BgL_testz00_7898
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 147 */
																																													if (((long) (BgL_currentzd2charzd2_2621) == ((long) 36)))
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_testz00_7898
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															bool_t
																																																BgL_testz00_7905;
																																															if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 38)))
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7905
																																																		=
																																																		(
																																																		(long)
																																																		(BgL_currentzd2charzd2_2621)
																																																		<
																																																		((long) 47));
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7905
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																															if (BgL_testz00_7905)
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7898
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	bool_t
																																																		BgL_testz00_7911;
																																																	if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 48)))
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_testz00_7911
																																																				=
																																																				(
																																																				(long)
																																																				(BgL_currentzd2charzd2_2621)
																																																				<
																																																				((long) 58));
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_testz00_7911
																																																				=
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																	if (BgL_testz00_7911)
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_testz00_7898
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			if (((long) (BgL_currentzd2charzd2_2621) == ((long) 59)))
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_testz00_7898
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 147 */
																																																					if (((long) (BgL_currentzd2charzd2_2621) == ((long) 61)))
																																																						{	/* Unsafe/url.scm 147 */
																																																							BgL_testz00_7898
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 147 */
																																																							bool_t
																																																								BgL_testz00_7923;
																																																							if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 65)))
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7923
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_currentzd2charzd2_2621)
																																																										<
																																																										((long) 91));
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7923
																																																										=
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																							if (BgL_testz00_7923)
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7898
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									if (((long) (BgL_currentzd2charzd2_2621) == ((long) 95)))
																																																										{	/* Unsafe/url.scm 147 */
																																																											BgL_testz00_7898
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 147 */
																																																											bool_t
																																																												BgL_testz00_7932;
																																																											if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 97)))
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7932
																																																														=
																																																														(
																																																														(long)
																																																														(BgL_currentzd2charzd2_2621)
																																																														<
																																																														((long) 123));
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7932
																																																														=
																																																														(
																																																														(bool_t)
																																																														0);
																																																												}
																																																											if (BgL_testz00_7932)
																																																												{	/* Unsafe/url.scm 147 */
																																																													BgL_testz00_7898
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 147 */
																																																													if (((long) (BgL_currentzd2charzd2_2621) == ((long) 124)))
																																																														{	/* Unsafe/url.scm 147 */
																																																															BgL_testz00_7898
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 147 */
																																																															BgL_testz00_7898
																																																																=
																																																																(
																																																																(long)
																																																																(BgL_currentzd2charzd2_2621)
																																																																==
																																																																((long) 126));
																																												}}}}}}}}}}
																																											if (BgL_testz00_7898)
																																												{
																																													long
																																														BgL_lastzd2matchzd2_7943;
																																													BgL_lastzd2matchzd2_7943
																																														=
																																														BgL_newzd2matchzd2_2620;
																																													BgL_lastzd2matchzd2_2618
																																														=
																																														BgL_lastzd2matchzd2_7943;
																																													goto
																																														BgL_zc3anonymousza33129ze3z83_2619;
																																												}
																																											else
																																												{	/* Unsafe/url.scm 147 */
																																													bool_t
																																														BgL_testz00_7944;
																																													if (((long) (BgL_currentzd2charzd2_2621) == ((long) 33)))
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_testz00_7944
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															bool_t
																																																BgL_testz00_7948;
																																															if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 36)))
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7948
																																																		=
																																																		(
																																																		(long)
																																																		(BgL_currentzd2charzd2_2621)
																																																		<
																																																		((long) 60));
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7948
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																															if (BgL_testz00_7948)
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_7944
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	if (((long) (BgL_currentzd2charzd2_2621) == ((long) 61)))
																																																		{	/* Unsafe/url.scm 147 */
																																																			BgL_testz00_7944
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 147 */
																																																			bool_t
																																																				BgL_testz00_7957;
																																																			if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 64)))
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_testz00_7957
																																																						=
																																																						(
																																																						(long)
																																																						(BgL_currentzd2charzd2_2621)
																																																						<
																																																						((long) 91));
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_testz00_7957
																																																						=
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																			if (BgL_testz00_7957)
																																																				{	/* Unsafe/url.scm 147 */
																																																					BgL_testz00_7944
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 147 */
																																																					if (((long) (BgL_currentzd2charzd2_2621) == ((long) 95)))
																																																						{	/* Unsafe/url.scm 147 */
																																																							BgL_testz00_7944
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 147 */
																																																							bool_t
																																																								BgL_testz00_7966;
																																																							if (((long) (BgL_currentzd2charzd2_2621) >= ((long) 97)))
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7966
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_currentzd2charzd2_2621)
																																																										<
																																																										((long) 123));
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7966
																																																										=
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																							if (BgL_testz00_7966)
																																																								{	/* Unsafe/url.scm 147 */
																																																									BgL_testz00_7944
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 147 */
																																																									if (((long) (BgL_currentzd2charzd2_2621) == ((long) 124)))
																																																										{	/* Unsafe/url.scm 147 */
																																																											BgL_testz00_7944
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 147 */
																																																											BgL_testz00_7944
																																																												=
																																																												(
																																																												(long)
																																																												(BgL_currentzd2charzd2_2621)
																																																												==
																																																												((long) 126));
																																														}}}}}}}
																																													if (BgL_testz00_7944)
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_matchz00_2861
																																																=
																																																BgL_newzd2matchzd2_2620;
																																														}
																																													else
																																														{
																																															long
																																																BgL_lastzd2matchzd2_7978;
																																															obj_t
																																																BgL_inputzd2portzd2_7977;
																																															BgL_inputzd2portzd2_7977
																																																=
																																																BgL_inputzd2portzd2_2617;
																																															BgL_lastzd2matchzd2_7978
																																																=
																																																BgL_newzd2matchzd2_2620;
																																															BgL_lastzd2matchzd2_2580
																																																=
																																																BgL_lastzd2matchzd2_7978;
																																															BgL_inputzd2portzd2_2579
																																																=
																																																BgL_inputzd2portzd2_7977;
																																															goto
																																																BgL_zc3anonymousza33105ze3z83_2581;
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
																																{	/* Unsafe/url.scm 147 */
																																	bool_t
																																		BgL_testz00_7979;
																																	{	/* Unsafe/url.scm 147 */
																																		bool_t
																																			BgL_testz00_7980;
																																		if (((long)
																																				(BgL_currentzd2charzd2_2762)
																																				>=
																																				((long)
																																					47)))
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7980
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_2762)
																																					<
																																					((long) 59));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7980
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_7980)
																																			{	/* Unsafe/url.scm 147 */
																																				BgL_testz00_7979
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 147 */
																																				bool_t
																																					BgL_testz00_7986;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_2762)
																																						>=
																																						((long) 64)))
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_testz00_7986
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_2762)
																																							<
																																							((long) 71));
																																					}
																																				else
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_testz00_7986
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_7986)
																																					{	/* Unsafe/url.scm 147 */
																																						BgL_testz00_7979
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 147 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_2762) >= ((long) 97)))
																																							{	/* Unsafe/url.scm 147 */
																																								BgL_testz00_7979
																																									=
																																									(
																																									(long)
																																									(BgL_currentzd2charzd2_2762)
																																									<
																																									((long) 103));
																																							}
																																						else
																																							{	/* Unsafe/url.scm 147 */
																																								BgL_testz00_7979
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																			}
																																	}
																																	if (BgL_testz00_7979)
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_matchz00_2861
																																				=
																																				BgL_newzd2matchzd2_2761;
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_7998;
																																			obj_t
																																				BgL_inputzd2portzd2_7997;
																																			BgL_inputzd2portzd2_7997
																																				=
																																				BgL_inputzd2portzd2_2758;
																																			BgL_lastzd2matchzd2_7998
																																				=
																																				BgL_newzd2matchzd2_2761;
																																			BgL_lastzd2matchzd2_2580
																																				=
																																				BgL_lastzd2matchzd2_7998;
																																			BgL_inputzd2portzd2_2579
																																				=
																																				BgL_inputzd2portzd2_7997;
																																			goto
																																				BgL_zc3anonymousza33105ze3z83_2581;
																																		}
																																}
																														}
																												}
																										}
																									}
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									bool_t BgL_testz00_7999;

																									{	/* Unsafe/url.scm 147 */
																										bool_t BgL_testz00_8000;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_2441)
																												>= ((long) 47)))
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_8000 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_2441)
																													< ((long) 59));
																											}
																										else
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_8000 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_8000)
																											{	/* Unsafe/url.scm 147 */
																												BgL_testz00_7999 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 147 */
																												bool_t BgL_testz00_8006;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_2441)
																														>= ((long) 64)))
																													{	/* Unsafe/url.scm 147 */
																														BgL_testz00_8006 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_2441)
																															< ((long) 71));
																													}
																												else
																													{	/* Unsafe/url.scm 147 */
																														BgL_testz00_8006 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_8006)
																													{	/* Unsafe/url.scm 147 */
																														BgL_testz00_7999 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 147 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_2441)
																																>= ((long) 97)))
																															{	/* Unsafe/url.scm 147 */
																																BgL_testz00_7999
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_2441)
																																	<
																																	((long) 103));
																															}
																														else
																															{	/* Unsafe/url.scm 147 */
																																BgL_testz00_7999
																																	=
																																	((bool_t) 0);
																															}
																													}
																											}
																									}
																									if (BgL_testz00_7999)
																										{	/* Unsafe/url.scm 147 */
																											BgL_matchz00_2861 =
																												BgL_newzd2matchzd2_2440;
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_8018;
																											obj_t
																												BgL_inputzd2portzd2_8017;
																											BgL_inputzd2portzd2_8017 =
																												BgL_inputzd2portzd2_2437;
																											BgL_lastzd2matchzd2_8018 =
																												BgL_newzd2matchzd2_2440;
																											BgL_lastzd2matchzd2_2580 =
																												BgL_lastzd2matchzd2_8018;
																											BgL_inputzd2portzd2_2579 =
																												BgL_inputzd2portzd2_8017;
																											goto
																												BgL_zc3anonymousza33105ze3z83_2581;
																										}
																								}
																						}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/url.scm 147 */
																	bool_t BgL_testz00_8019;

																	if (
																		((long) (BgL_currentzd2charzd2_2461) ==
																			((long) 33)))
																		{	/* Unsafe/url.scm 147 */
																			BgL_testz00_8019 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/url.scm 147 */
																			if (
																				((long) (BgL_currentzd2charzd2_2461) ==
																					((long) 36)))
																				{	/* Unsafe/url.scm 147 */
																					BgL_testz00_8019 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/url.scm 147 */
																					bool_t BgL_testz00_8026;

																					if (
																						((long) (BgL_currentzd2charzd2_2461)
																							>= ((long) 38)))
																						{	/* Unsafe/url.scm 147 */
																							BgL_testz00_8026 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_2461) <
																								((long) 47));
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							BgL_testz00_8026 = ((bool_t) 0);
																						}
																					if (BgL_testz00_8026)
																						{	/* Unsafe/url.scm 147 */
																							BgL_testz00_8019 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							bool_t BgL_testz00_8032;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_2461)
																									>= ((long) 48)))
																								{	/* Unsafe/url.scm 147 */
																									BgL_testz00_8032 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_2461)
																										< ((long) 58));
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									BgL_testz00_8032 =
																										((bool_t) 0);
																								}
																							if (BgL_testz00_8032)
																								{	/* Unsafe/url.scm 147 */
																									BgL_testz00_8019 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_2461)
																											== ((long) 59)))
																										{	/* Unsafe/url.scm 147 */
																											BgL_testz00_8019 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_2461)
																													== ((long) 61)))
																												{	/* Unsafe/url.scm 147 */
																													BgL_testz00_8019 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													bool_t
																														BgL_testz00_8044;
																													if (((long)
																															(BgL_currentzd2charzd2_2461)
																															>= ((long) 65)))
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_8044 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_2461)
																																< ((long) 91));
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_8044 =
																																((bool_t) 0);
																														}
																													if (BgL_testz00_8044)
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_8019 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_2461)
																																	==
																																	((long) 95)))
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_8019
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	bool_t
																																		BgL_testz00_8053;
																																	if (((long)
																																			(BgL_currentzd2charzd2_2461)
																																			>=
																																			((long)
																																				97)))
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8053
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_2461)
																																				<
																																				((long)
																																					123));
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8053
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_8053)
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8019
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_2461)
																																					==
																																					((long) 124)))
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8019
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8019
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_2461)
																																						==
																																						((long) 126));
																		}}}}}}}}}}
																	if (BgL_testz00_8019)
																		{	/* Unsafe/url.scm 147 */
																			BgL_inputzd2portzd2_2658 =
																				BgL_inputzd2portzd2_2458;
																			BgL_lastzd2matchzd2_2659 =
																				BgL_lastzd2matchzd2_2459;
																		BgL_zc3anonymousza33163ze3z83_2660:
																			{	/* Unsafe/url.scm 147 */
																				long BgL_newzd2matchzd2_2661;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_2658);
																				BgL_newzd2matchzd2_2661 = ((long) 2);
																				{	/* Unsafe/url.scm 147 */
																					int BgL_currentzd2charzd2_2662;

																					BgL_currentzd2charzd2_2662 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_2658);
																					if (((long)
																							(BgL_currentzd2charzd2_2662) ==
																							((long) 0)))
																						{	/* Unsafe/url.scm 147 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_2658))
																								{	/* Unsafe/url.scm 147 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_2658))
																										{

																											goto
																												BgL_zc3anonymousza33163ze3z83_2660;
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											BgL_matchz00_2861 =
																												BgL_newzd2matchzd2_2661;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_8074;

																									obj_t
																										BgL_inputzd2portzd2_8073;
																									BgL_inputzd2portzd2_8073 =
																										BgL_inputzd2portzd2_2658;
																									BgL_lastzd2matchzd2_8074 =
																										BgL_newzd2matchzd2_2661;
																									BgL_lastzd2matchzd2_2580 =
																										BgL_lastzd2matchzd2_8074;
																									BgL_inputzd2portzd2_2579 =
																										BgL_inputzd2portzd2_8073;
																									goto
																										BgL_zc3anonymousza33105ze3z83_2581;
																								}
																						}
																					else
																						{	/* Unsafe/url.scm 147 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_2662)
																									== ((long) 64)))
																								{	/* Unsafe/url.scm 147 */
																									long BgL_newzd2matchzd2_6011;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_2658);
																									BgL_newzd2matchzd2_6011 =
																										((long) 0);
																									BgL_matchz00_2861 =
																										BgL_newzd2matchzd2_6011;
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_2662)
																											== ((long) 58)))
																										{
																											long
																												BgL_lastzd2matchzd2_8083;
																											obj_t
																												BgL_inputzd2portzd2_8082;
																											BgL_inputzd2portzd2_8082 =
																												BgL_inputzd2portzd2_2658;
																											BgL_lastzd2matchzd2_8083 =
																												BgL_newzd2matchzd2_2661;
																											BgL_lastzd2matchzd2_2557 =
																												BgL_lastzd2matchzd2_8083;
																											BgL_inputzd2portzd2_2556 =
																												BgL_inputzd2portzd2_8082;
																											goto
																												BgL_zc3anonymousza33086ze3z83_2558;
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_2662)
																													== ((long) 37)))
																												{
																													long
																														BgL_lastzd2matchzd2_8088;
																													obj_t
																														BgL_inputzd2portzd2_8087;
																													BgL_inputzd2portzd2_8087
																														=
																														BgL_inputzd2portzd2_2658;
																													BgL_lastzd2matchzd2_8088
																														=
																														BgL_newzd2matchzd2_2661;
																													BgL_lastzd2matchzd2_2520
																														=
																														BgL_lastzd2matchzd2_8088;
																													BgL_inputzd2portzd2_2519
																														=
																														BgL_inputzd2portzd2_8087;
																													goto
																														BgL_zc3anonymousza33062ze3z83_2521;
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													bool_t
																														BgL_testz00_8089;
																													if (((long)
																															(BgL_currentzd2charzd2_2662)
																															== ((long) 33)))
																														{	/* Unsafe/url.scm 147 */
																															BgL_testz00_8089 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_2662)
																																	==
																																	((long) 36)))
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_8089
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	bool_t
																																		BgL_testz00_8096;
																																	if (((long)
																																			(BgL_currentzd2charzd2_2662)
																																			>=
																																			((long)
																																				38)))
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8096
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_2662)
																																				<
																																				((long)
																																					47));
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8096
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_8096)
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8089
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			bool_t
																																				BgL_testz00_8102;
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_2662)
																																					>=
																																					((long) 48)))
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8102
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_2662)
																																						<
																																						((long) 58));
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8102
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_testz00_8102)
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8089
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					if (
																																						((long) (BgL_currentzd2charzd2_2662) == ((long) 59)))
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8089
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							if (((long) (BgL_currentzd2charzd2_2662) == ((long) 61)))
																																								{	/* Unsafe/url.scm 147 */
																																									BgL_testz00_8089
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/url.scm 147 */
																																									bool_t
																																										BgL_testz00_8114;
																																									if (((long) (BgL_currentzd2charzd2_2662) >= ((long) 65)))
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8114
																																												=
																																												(
																																												(long)
																																												(BgL_currentzd2charzd2_2662)
																																												<
																																												((long) 91));
																																										}
																																									else
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8114
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									if (BgL_testz00_8114)
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8089
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/url.scm 147 */
																																											if (((long) (BgL_currentzd2charzd2_2662) == ((long) 95)))
																																												{	/* Unsafe/url.scm 147 */
																																													BgL_testz00_8089
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 147 */
																																													bool_t
																																														BgL_testz00_8123;
																																													if (((long) (BgL_currentzd2charzd2_2662) >= ((long) 97)))
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_testz00_8123
																																																=
																																																(
																																																(long)
																																																(BgL_currentzd2charzd2_2662)
																																																<
																																																((long) 123));
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_testz00_8123
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																													if (BgL_testz00_8123)
																																														{	/* Unsafe/url.scm 147 */
																																															BgL_testz00_8089
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 147 */
																																															if (((long) (BgL_currentzd2charzd2_2662) == ((long) 124)))
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_8089
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 147 */
																																																	BgL_testz00_8089
																																																		=
																																																		(
																																																		(long)
																																																		(BgL_currentzd2charzd2_2662)
																																																		==
																																																		((long) 126));
																														}}}}}}}}}}
																													if (BgL_testz00_8089)
																														{
																															long
																																BgL_lastzd2matchzd2_8135;
																															obj_t
																																BgL_inputzd2portzd2_8134;
																															BgL_inputzd2portzd2_8134
																																=
																																BgL_inputzd2portzd2_2658;
																															BgL_lastzd2matchzd2_8135
																																=
																																BgL_newzd2matchzd2_2661;
																															BgL_lastzd2matchzd2_2618
																																=
																																BgL_lastzd2matchzd2_8135;
																															BgL_inputzd2portzd2_2617
																																=
																																BgL_inputzd2portzd2_8134;
																															goto
																																BgL_zc3anonymousza33129ze3z83_2619;
																														}
																													else
																														{	/* Unsafe/url.scm 147 */
																															bool_t
																																BgL_testz00_8136;
																															if (((long)
																																	(BgL_currentzd2charzd2_2662)
																																	==
																																	((long) 33)))
																																{	/* Unsafe/url.scm 147 */
																																	BgL_testz00_8136
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	bool_t
																																		BgL_testz00_8140;
																																	if (((long)
																																			(BgL_currentzd2charzd2_2662)
																																			>=
																																			((long)
																																				36)))
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8140
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_2662)
																																				<
																																				((long)
																																					60));
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8140
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_8140)
																																		{	/* Unsafe/url.scm 147 */
																																			BgL_testz00_8136
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_2662)
																																					==
																																					((long) 61)))
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8136
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					bool_t
																																						BgL_testz00_8149;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_2662)
																																							>=
																																							((long) 64)))
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8149
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_2662)
																																								<
																																								((long) 91));
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8149
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																					if (BgL_testz00_8149)
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8136
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							if (((long) (BgL_currentzd2charzd2_2662) == ((long) 95)))
																																								{	/* Unsafe/url.scm 147 */
																																									BgL_testz00_8136
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/url.scm 147 */
																																									bool_t
																																										BgL_testz00_8158;
																																									if (((long) (BgL_currentzd2charzd2_2662) >= ((long) 97)))
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8158
																																												=
																																												(
																																												(long)
																																												(BgL_currentzd2charzd2_2662)
																																												<
																																												((long) 123));
																																										}
																																									else
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8158
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									if (BgL_testz00_8158)
																																										{	/* Unsafe/url.scm 147 */
																																											BgL_testz00_8136
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/url.scm 147 */
																																											if (((long) (BgL_currentzd2charzd2_2662) == ((long) 124)))
																																												{	/* Unsafe/url.scm 147 */
																																													BgL_testz00_8136
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 147 */
																																													BgL_testz00_8136
																																														=
																																														(
																																														(long)
																																														(BgL_currentzd2charzd2_2662)
																																														==
																																														((long) 126));
																																}}}}}}}
																															if (BgL_testz00_8136)
																																{	/* Unsafe/url.scm 147 */
																																	BgL_matchz00_2861
																																		=
																																		BgL_newzd2matchzd2_2661;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_8170;
																																	obj_t
																																		BgL_inputzd2portzd2_8169;
																																	BgL_inputzd2portzd2_8169
																																		=
																																		BgL_inputzd2portzd2_2658;
																																	BgL_lastzd2matchzd2_8170
																																		=
																																		BgL_newzd2matchzd2_2661;
																																	BgL_lastzd2matchzd2_2580
																																		=
																																		BgL_lastzd2matchzd2_8170;
																																	BgL_inputzd2portzd2_2579
																																		=
																																		BgL_inputzd2portzd2_8169;
																																	goto
																																		BgL_zc3anonymousza33105ze3z83_2581;
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
																		{	/* Unsafe/url.scm 147 */
																			if (
																				((long) (BgL_currentzd2charzd2_2461) ==
																					((long) 13)))
																				{	/* Unsafe/url.scm 147 */
																					BgL_inputzd2portzd2_2603 =
																						BgL_inputzd2portzd2_2458;
																					BgL_lastzd2matchzd2_2604 =
																						BgL_lastzd2matchzd2_2459;
																				BgL_zc3anonymousza33121ze3z83_2605:
																					{	/* Unsafe/url.scm 147 */
																						long BgL_newzd2matchzd2_2606;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_2603);
																						BgL_newzd2matchzd2_2606 =
																							((long) 2);
																						{	/* Unsafe/url.scm 147 */
																							int BgL_currentzd2charzd2_2607;

																							BgL_currentzd2charzd2_2607 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_2603);
																							if (((long)
																									(BgL_currentzd2charzd2_2607)
																									== ((long) 0)))
																								{	/* Unsafe/url.scm 147 */
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_2603))
																										{	/* Unsafe/url.scm 147 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_2603))
																												{

																													goto
																														BgL_zc3anonymousza33121ze3z83_2605;
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													BgL_matchz00_2861 =
																														BgL_newzd2matchzd2_2606;
																												}
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_8184;
																											obj_t
																												BgL_inputzd2portzd2_8183;
																											BgL_inputzd2portzd2_8183 =
																												BgL_inputzd2portzd2_2603;
																											BgL_lastzd2matchzd2_8184 =
																												BgL_newzd2matchzd2_2606;
																											BgL_lastzd2matchzd2_2580 =
																												BgL_lastzd2matchzd2_8184;
																											BgL_inputzd2portzd2_2579 =
																												BgL_inputzd2portzd2_8183;
																											goto
																												BgL_zc3anonymousza33105ze3z83_2581;
																										}
																								}
																							else
																								{	/* Unsafe/url.scm 147 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_2607)
																											== ((long) 58)))
																										{	/* Unsafe/url.scm 147 */
																											long
																												BgL_newzd2matchzd2_5921;
																											RGC_STOP_MATCH
																												(BgL_inputzd2portzd2_2603);
																											BgL_newzd2matchzd2_5921 =
																												((long) 1);
																											BgL_matchz00_2861 =
																												BgL_newzd2matchzd2_5921;
																										}
																									else
																										{	/* Unsafe/url.scm 147 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_2607)
																													== ((long) 10)))
																												{	/* Unsafe/url.scm 147 */
																													BgL_inputzd2portzd2_2485
																														=
																														BgL_inputzd2portzd2_2603;
																													BgL_lastzd2matchzd2_2486
																														=
																														BgL_newzd2matchzd2_2606;
																												BgL_zc3anonymousza33035ze3z83_2487:
																													{	/* Unsafe/url.scm 147 */
																														long
																															BgL_newzd2matchzd2_2488;
																														RGC_STOP_MATCH
																															(BgL_inputzd2portzd2_2485);
																														BgL_newzd2matchzd2_2488
																															= ((long) 2);
																														{	/* Unsafe/url.scm 147 */
																															int
																																BgL_currentzd2charzd2_2489;
																															BgL_currentzd2charzd2_2489
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_2485);
																															if (((long)
																																	(BgL_currentzd2charzd2_2489)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/url.scm 147 */
																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2485))
																																		{	/* Unsafe/url.scm 147 */
																																			if (rgc_fill_buffer(BgL_inputzd2portzd2_2485))
																																				{

																																					goto
																																						BgL_zc3anonymousza33035ze3z83_2487;
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_matchz00_2861
																																						=
																																						BgL_newzd2matchzd2_2488;
																																				}
																																		}
																																	else
																																		{
																																			long
																																				BgL_lastzd2matchzd2_8202;
																																			obj_t
																																				BgL_inputzd2portzd2_8201;
																																			BgL_inputzd2portzd2_8201
																																				=
																																				BgL_inputzd2portzd2_2485;
																																			BgL_lastzd2matchzd2_8202
																																				=
																																				BgL_newzd2matchzd2_2488;
																																			BgL_lastzd2matchzd2_2580
																																				=
																																				BgL_lastzd2matchzd2_8202;
																																			BgL_inputzd2portzd2_2579
																																				=
																																				BgL_inputzd2portzd2_8201;
																																			goto
																																				BgL_zc3anonymousza33105ze3z83_2581;
																																		}
																																}
																															else
																																{	/* Unsafe/url.scm 147 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_2489)
																																			==
																																			((long)
																																				58)))
																																		{	/* Unsafe/url.scm 147 */
																																			long
																																				BgL_newzd2matchzd2_5720;
																																			RGC_STOP_MATCH
																																				(BgL_inputzd2portzd2_2485);
																																			BgL_newzd2matchzd2_5720
																																				=
																																				((long)
																																				1);
																																			BgL_matchz00_2861
																																				=
																																				BgL_newzd2matchzd2_5720;
																																		}
																																	else
																																		{	/* Unsafe/url.scm 147 */
																																			bool_t
																																				BgL_testz00_8207;
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_2489)
																																					==
																																					((long) 47)))
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_testz00_8207
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 147 */
																																					if (
																																						((long) (BgL_currentzd2charzd2_2489) == ((long) 58)))
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8207
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 147 */
																																							BgL_testz00_8207
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_2489)
																																								==
																																								((long) 64));
																																				}}
																																			if (BgL_testz00_8207)
																																				{	/* Unsafe/url.scm 147 */
																																					BgL_matchz00_2861
																																						=
																																						BgL_newzd2matchzd2_2488;
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_8217;
																																					obj_t
																																						BgL_inputzd2portzd2_8216;
																																					BgL_inputzd2portzd2_8216
																																						=
																																						BgL_inputzd2portzd2_2485;
																																					BgL_lastzd2matchzd2_8217
																																						=
																																						BgL_newzd2matchzd2_2488;
																																					BgL_lastzd2matchzd2_2580
																																						=
																																						BgL_lastzd2matchzd2_8217;
																																					BgL_inputzd2portzd2_2579
																																						=
																																						BgL_inputzd2portzd2_8216;
																																					goto
																																						BgL_zc3anonymousza33105ze3z83_2581;
																																				}
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Unsafe/url.scm 147 */
																													bool_t
																														BgL_testz00_8218;
																													switch ((long)
																														(BgL_currentzd2charzd2_2607))
																														{
																														case ((long) 10):

																															BgL_testz00_8218 =
																																((bool_t) 1);
																															break;
																														case ((long) 47):

																															BgL_testz00_8218 =
																																((bool_t) 1);
																															break;
																														case ((long) 58):

																															BgL_testz00_8218 =
																																((bool_t) 1);
																															break;
																														default:
																															BgL_testz00_8218 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_2607)
																																== ((long) 64));
																														}
																													if (BgL_testz00_8218)
																														{	/* Unsafe/url.scm 147 */
																															BgL_matchz00_2861
																																=
																																BgL_newzd2matchzd2_2606;
																														}
																													else
																														{
																															long
																																BgL_lastzd2matchzd2_8224;
																															obj_t
																																BgL_inputzd2portzd2_8223;
																															BgL_inputzd2portzd2_8223
																																=
																																BgL_inputzd2portzd2_2603;
																															BgL_lastzd2matchzd2_8224
																																=
																																BgL_newzd2matchzd2_2606;
																															BgL_lastzd2matchzd2_2580
																																=
																																BgL_lastzd2matchzd2_8224;
																															BgL_inputzd2portzd2_2579
																																=
																																BgL_inputzd2portzd2_8223;
																															goto
																																BgL_zc3anonymousza33105ze3z83_2581;
																														}
																												}
																										}
																								}
																						}
																					}
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_8226;

																					obj_t BgL_inputzd2portzd2_8225;

																					BgL_inputzd2portzd2_8225 =
																						BgL_inputzd2portzd2_2458;
																					BgL_lastzd2matchzd2_8226 =
																						BgL_lastzd2matchzd2_2459;
																					BgL_lastzd2matchzd2_2592 =
																						BgL_lastzd2matchzd2_8226;
																					BgL_inputzd2portzd2_2591 =
																						BgL_inputzd2portzd2_8225;
																					goto
																						BgL_zc3anonymousza33113ze3z83_2593;
																				}
																		}
																}
														}
												}
										}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_2388);
						switch (BgL_matchz00_2861)
							{
							case ((long) 5):

								{	/* Unsafe/url.scm 171 */
									obj_t BgL_arg3320z00_2865;

									obj_t BgL_arg3324z00_2867;

									BgL_arg3320z00_2865 = BgL_inputzd2portzd2_2388;
									{	/* Unsafe/url.scm 147 */
										bool_t BgL_testz00_8228;

										{	/* Unsafe/url.scm 147 */
											long BgL_arg3311z00_2850;

											BgL_arg3311z00_2850 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2388);
											BgL_testz00_8228 = (BgL_arg3311z00_2850 == ((long) 0));
										}
										if (BgL_testz00_8228)
											{	/* Unsafe/url.scm 147 */
												BgL_arg3324z00_2867 = BCNST(256);
											}
										else
											{	/* Unsafe/url.scm 147 */
												obj_t BgL_inputzd2portzd2_6232;

												BgL_inputzd2portzd2_6232 = BgL_inputzd2portzd2_2388;
												BgL_arg3324z00_2867 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_6232));
											}
									}
									{	/* Unsafe/url.scm 171 */
										obj_t BgL_linez00_6239;

										BgL_linez00_6239 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00
											(BgL_arg3320z00_2865);
										{	/* Unsafe/url.scm 171 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3521z00_6240;

											{	/* Unsafe/url.scm 171 */
												obj_t BgL_arg3522z00_6241;

												obj_t BgL_arg3523z00_6242;

												obj_t BgL_arg3524z00_6243;

												{	/* Unsafe/url.scm 171 */

													{	/* Unsafe/url.scm 171 */

														BgL_arg3522z00_6241 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg3523z00_6242 = BGl_symbol4127z00zz__urlz00;
												if (STRINGP(BgL_linez00_6239))
													{	/* Unsafe/url.scm 171 */
														obj_t BgL_list3526z00_6246;

														{	/* Unsafe/url.scm 171 */
															obj_t BgL_arg3527z00_6247;

															BgL_arg3527z00_6247 =
																MAKE_PAIR(BgL_linez00_6239, BNIL);
															BgL_list3526z00_6246 =
																MAKE_PAIR(BgL_arg3324z00_2867,
																BgL_arg3527z00_6247);
														}
														BgL_arg3524z00_6243 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4129z00zz__urlz00,
															BgL_list3526z00_6246);
													}
												else
													{	/* Unsafe/url.scm 171 */
														BgL_arg3524z00_6243 = BgL_arg3324z00_2867;
													}
												BgL_arg3521z00_6240 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg3522z00_6241,
													BgL_arg3523z00_6242, BGl_string4130z00zz__urlz00,
													BgL_arg3524z00_6243);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg3521z00_6240));
										}
									}
								}
								break;
							case ((long) 4):

								{	/* Unsafe/url.scm 169 */
									obj_t BgL_val4_2061z00_2872;

									{	/* Unsafe/url.scm 169 */
										obj_t BgL_res4074z00_6256;

										{	/* Unsafe/url.scm 169 */
											int BgL_arg3258z00_6250;

											{	/* Unsafe/url.scm 169 */
												int BgL_res4073z00_6252;

												{	/* Unsafe/url.scm 169 */
													obj_t BgL_inputzd2portzd2_6251;

													BgL_inputzd2portzd2_6251 = BgL_inputzd2portzd2_2388;
													BgL_res4073z00_6252 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6251));
												}
												BgL_arg3258z00_6250 = BgL_res4073z00_6252;
											}
											BgL_res4074z00_6256 =
												rgc_buffer_substring(BgL_inputzd2portzd2_2388,
												((long) 0), (long) (BgL_arg3258z00_6250));
										}
										BgL_val4_2061z00_2872 = BgL_res4074z00_6256;
									}
									{	/* Unsafe/url.scm 169 */
										int BgL_auxz00_8247;

										BgL_auxz00_8247 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_8247);
									}
									{	/* Unsafe/url.scm 169 */
										int BgL_auxz00_8250;

										BgL_auxz00_8250 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8250, BFALSE);
									}
									{	/* Unsafe/url.scm 169 */
										int BgL_auxz00_8253;

										BgL_auxz00_8253 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8253, BFALSE);
									}
									{	/* Unsafe/url.scm 169 */
										int BgL_auxz00_8256;

										BgL_auxz00_8256 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8256, BFALSE);
									}
									{	/* Unsafe/url.scm 169 */
										int BgL_auxz00_8259;

										BgL_auxz00_8259 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8259, BgL_val4_2061z00_2872);
									}
									return BgL_protocolz00_2389;
								}
								break;
							case ((long) 3):

								{	/* Unsafe/url.scm 167 */
									obj_t BgL_val4_2066z00_2877;

									{	/* Unsafe/url.scm 167 */
										obj_t BgL_res4076z00_6273;

										{	/* Unsafe/url.scm 167 */
											int BgL_arg3258z00_6267;

											{	/* Unsafe/url.scm 167 */
												int BgL_res4075z00_6269;

												{	/* Unsafe/url.scm 167 */
													obj_t BgL_inputzd2portzd2_6268;

													BgL_inputzd2portzd2_6268 = BgL_inputzd2portzd2_2388;
													BgL_res4075z00_6269 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6268));
												}
												BgL_arg3258z00_6267 = BgL_res4075z00_6269;
											}
											BgL_res4076z00_6273 =
												rgc_buffer_substring(BgL_inputzd2portzd2_2388,
												((long) 0), (long) (BgL_arg3258z00_6267));
										}
										BgL_val4_2066z00_2877 = BgL_res4076z00_6273;
									}
									{	/* Unsafe/url.scm 167 */
										int BgL_auxz00_8266;

										BgL_auxz00_8266 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_8266);
									}
									{	/* Unsafe/url.scm 167 */
										int BgL_auxz00_8269;

										BgL_auxz00_8269 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8269, BFALSE);
									}
									{	/* Unsafe/url.scm 167 */
										int BgL_auxz00_8272;

										BgL_auxz00_8272 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8272, BFALSE);
									}
									{	/* Unsafe/url.scm 167 */
										int BgL_auxz00_8275;

										BgL_auxz00_8275 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8275, BFALSE);
									}
									{	/* Unsafe/url.scm 167 */
										int BgL_auxz00_8278;

										BgL_auxz00_8278 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_8278, BgL_val4_2066z00_2877);
									}
									return BgL_protocolz00_2389;
								}
								break;
							case ((long) 2):

								{	/* Unsafe/url.scm 162 */
									obj_t BgL_hostz00_2878;

									{	/* Unsafe/url.scm 162 */
										int BgL_arg3328z00_2889;

										{	/* Unsafe/url.scm 162 */
											int BgL_res4077z00_6284;

											{	/* Unsafe/url.scm 162 */
												obj_t BgL_inputzd2portzd2_6283;

												BgL_inputzd2portzd2_6283 = BgL_inputzd2portzd2_2388;
												BgL_res4077z00_6284 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6283));
											}
											BgL_arg3328z00_2889 = BgL_res4077z00_6284;
										}
										BgL_hostz00_2878 =
											BGl_thezd2substringz72za0zz__urlz00
											(BgL_inputzd2portzd2_2388, (int) (((long) 0)),
											BgL_arg3328z00_2889);
									}
									{	/* Unsafe/url.scm 162 */
										long BgL_portz00_2879;

										if (bigloo_strcmp(BgL_protocolz00_2389,
												BGl_string4133z00zz__urlz00))
											{	/* Unsafe/url.scm 163 */
												BgL_portz00_2879 = ((long) 443);
											}
										else
											{	/* Unsafe/url.scm 163 */
												BgL_portz00_2879 = ((long) 80);
											}
										{	/* Unsafe/url.scm 163 */
											obj_t BgL_abspathz00_2880;

											{	/* Unsafe/url.scm 164 */
												obj_t BgL_arg3325z00_2886;

												BgL_arg3325z00_2886 = BgL_inputzd2portzd2_2388;
												BgL_abspathz00_2880 =
													PROCEDURE_ENTRY
													(BGl_httpzd2abspathzd2grammarz00zz__urlz00)
													(BGl_httpzd2abspathzd2grammarz00zz__urlz00,
													BgL_arg3325z00_2886, BEOA);
											}
											{	/* Unsafe/url.scm 164 */

												{	/* Unsafe/url.scm 165 */
													obj_t BgL_val1_2068z00_2882;

													BgL_val1_2068z00_2882 = BgL_userinfoz00_2390;
													{	/* Unsafe/url.scm 165 */
														int BgL_auxz00_8289;

														BgL_auxz00_8289 = (int) (((long) 5));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_8289);
													}
													{	/* Unsafe/url.scm 165 */
														int BgL_auxz00_8292;

														BgL_auxz00_8292 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8292,
															BgL_val1_2068z00_2882);
													}
													{	/* Unsafe/url.scm 165 */
														int BgL_auxz00_8295;

														BgL_auxz00_8295 = (int) (((long) 2));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8295,
															BgL_hostz00_2878);
													}
													{	/* Unsafe/url.scm 165 */
														obj_t BgL_auxz00_8300;

														int BgL_auxz00_8298;

														BgL_auxz00_8300 = BINT(BgL_portz00_2879);
														BgL_auxz00_8298 = (int) (((long) 3));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8298,
															BgL_auxz00_8300);
													}
													{	/* Unsafe/url.scm 165 */
														int BgL_auxz00_8303;

														BgL_auxz00_8303 = (int) (((long) 4));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8303,
															BgL_abspathz00_2880);
													}
													return BgL_protocolz00_2389;
												}
											}
										}
									}
								}
								break;
							case ((long) 1):

								{	/* Unsafe/url.scm 157 */
									obj_t BgL_hostz00_2890;

									{	/* Unsafe/url.scm 157 */
										long BgL_arg3332z00_2901;

										{	/* Unsafe/url.scm 157 */
											int BgL_arg3333z00_2902;

											{	/* Unsafe/url.scm 157 */
												int BgL_res4079z00_6298;

												{	/* Unsafe/url.scm 157 */
													obj_t BgL_inputzd2portzd2_6297;

													BgL_inputzd2portzd2_6297 = BgL_inputzd2portzd2_2388;
													BgL_res4079z00_6298 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6297));
												}
												BgL_arg3333z00_2902 = BgL_res4079z00_6298;
											}
											BgL_arg3332z00_2901 =
												((long) (BgL_arg3333z00_2902) - ((long) 1));
										}
										BgL_hostz00_2890 =
											BGl_thezd2substringz72za0zz__urlz00
											(BgL_inputzd2portzd2_2388, (int) (((long) 0)),
											(int) (BgL_arg3332z00_2901));
									}
									{	/* Unsafe/url.scm 158 */
										obj_t BgL_portz00_2891;

										{	/* Unsafe/url.scm 158 */
											obj_t BgL_arg3330z00_2899;

											BgL_arg3330z00_2899 = BgL_inputzd2portzd2_2388;
											BgL_portz00_2891 =
												PROCEDURE_ENTRY(BGl_httpzd2portzd2grammarz00zz__urlz00)
												(BGl_httpzd2portzd2grammarz00zz__urlz00,
												BgL_arg3330z00_2899, BEOA);
										}
										{	/* Unsafe/url.scm 158 */
											obj_t BgL_abspathz00_2892;

											{	/* Unsafe/url.scm 159 */
												obj_t BgL_arg3329z00_2898;

												BgL_arg3329z00_2898 = BgL_inputzd2portzd2_2388;
												BgL_abspathz00_2892 =
													PROCEDURE_ENTRY
													(BGl_httpzd2abspathzd2grammarz00zz__urlz00)
													(BGl_httpzd2abspathzd2grammarz00zz__urlz00,
													BgL_arg3329z00_2898, BEOA);
											}
											{	/* Unsafe/url.scm 159 */

												{	/* Unsafe/url.scm 160 */
													obj_t BgL_val1_2073z00_2894;

													BgL_val1_2073z00_2894 = BgL_userinfoz00_2390;
													{	/* Unsafe/url.scm 160 */
														int BgL_auxz00_8317;

														BgL_auxz00_8317 = (int) (((long) 5));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_8317);
													}
													{	/* Unsafe/url.scm 160 */
														int BgL_auxz00_8320;

														BgL_auxz00_8320 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8320,
															BgL_val1_2073z00_2894);
													}
													{	/* Unsafe/url.scm 160 */
														int BgL_auxz00_8323;

														BgL_auxz00_8323 = (int) (((long) 2));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8323,
															BgL_hostz00_2890);
													}
													{	/* Unsafe/url.scm 160 */
														int BgL_auxz00_8326;

														BgL_auxz00_8326 = (int) (((long) 3));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8326,
															BgL_portz00_2891);
													}
													{	/* Unsafe/url.scm 160 */
														int BgL_auxz00_8329;

														BgL_auxz00_8329 = (int) (((long) 4));
														BGL_MVALUES_VAL_SET(BgL_auxz00_8329,
															BgL_abspathz00_2892);
													}
													return BgL_protocolz00_2389;
												}
											}
										}
									}
								}
								break;
							case ((long) 0):

								BgL_userinfoz00_2390 =
									BGl_thezd2substringz72za0zz__urlz00(BgL_inputzd2portzd2_2388,
									(int) (((long) 0)), (int) (((long) -1)));
								goto BgL_zc3anonymousza33318ze3z83_2860;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_2861));
							}
					}
				}
			}
		}
	}



/* the-substring' */
	obj_t BGl_thezd2substringz72za0zz__urlz00(obj_t BgL_inputzd2portzd2_7238,
		int BgL_minz00_2790, int BgL_maxz00_2791)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 147 */
			if (((long) (BgL_maxz00_2791) < ((long) 0)))
				{	/* Unsafe/url.scm 147 */
					int BgL_arg3261z00_2794;

					{	/* Unsafe/url.scm 147 */
						int BgL_res4068z00_6206;

						{	/* Unsafe/url.scm 147 */
							obj_t BgL_inputzd2portzd2_6205;

							BgL_inputzd2portzd2_6205 = BgL_inputzd2portzd2_7238;
							BgL_res4068z00_6206 =
								(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6205));
						}
						BgL_arg3261z00_2794 = BgL_res4068z00_6206;
					}
					{	/* Unsafe/url.scm 147 */
						long BgL_za71za7_6207;

						long BgL_za72za7_6208;

						BgL_za71za7_6207 = (long) (BgL_arg3261z00_2794);
						BgL_za72za7_6208 = (long) (BgL_maxz00_2791);
						BgL_maxz00_2791 = (int) ((BgL_za71za7_6207 + BgL_za72za7_6208));
				}}
			else
				{	/* Unsafe/url.scm 147 */
					BFALSE;
				}
			{	/* Unsafe/url.scm 147 */
				bool_t BgL_testz00_8347;

				if (((long) (BgL_minz00_2790) >= ((long) 0)))
					{	/* Unsafe/url.scm 147 */
						if (((long) (BgL_maxz00_2791) >= (long) (BgL_minz00_2790)))
							{	/* Unsafe/url.scm 147 */
								int BgL_arg3271z00_2804;

								{	/* Unsafe/url.scm 147 */
									int BgL_res4069z00_6214;

									{	/* Unsafe/url.scm 147 */
										obj_t BgL_inputzd2portzd2_6213;

										BgL_inputzd2portzd2_6213 = BgL_inputzd2portzd2_7238;
										BgL_res4069z00_6214 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6213));
									}
									BgL_arg3271z00_2804 = BgL_res4069z00_6214;
								}
								BgL_testz00_8347 =
									((long) (BgL_maxz00_2791) <= (long) (BgL_arg3271z00_2804));
							}
						else
							{	/* Unsafe/url.scm 147 */
								BgL_testz00_8347 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/url.scm 147 */
						BgL_testz00_8347 = ((bool_t) 0);
					}
				if (BgL_testz00_8347)
					{	/* Unsafe/url.scm 147 */
						return
							rgc_buffer_substring(BgL_inputzd2portzd2_7238,
							(long) (BgL_minz00_2790), (long) (BgL_maxz00_2791));
					}
				else
					{	/* Unsafe/url.scm 147 */
						obj_t BgL_arg3264z00_2797;

						obj_t BgL_arg3265z00_2798;

						{	/* Unsafe/url.scm 147 */
							obj_t BgL_arg3267z00_2800;

							{	/* Unsafe/url.scm 147 */
								obj_t BgL_res4071z00_6227;

								{	/* Unsafe/url.scm 147 */
									int BgL_arg3258z00_6221;

									{	/* Unsafe/url.scm 147 */
										int BgL_res4070z00_6223;

										{	/* Unsafe/url.scm 147 */
											obj_t BgL_inputzd2portzd2_6222;

											BgL_inputzd2portzd2_6222 = BgL_inputzd2portzd2_7238;
											BgL_res4070z00_6223 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_6222));
										}
										BgL_arg3258z00_6221 = BgL_res4070z00_6223;
									}
									BgL_res4071z00_6227 =
										rgc_buffer_substring(BgL_inputzd2portzd2_7238, ((long) 0),
										(long) (BgL_arg3258z00_6221));
								}
								BgL_arg3267z00_2800 = BgL_res4071z00_6227;
							}
							{	/* Unsafe/url.scm 147 */
								obj_t BgL_list3268z00_2801;

								BgL_list3268z00_2801 = MAKE_PAIR(BgL_arg3267z00_2800, BNIL);
								BgL_arg3264z00_2797 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string4134z00zz__urlz00, BgL_list3268z00_2801);
						}}
						BgL_arg3265z00_2798 =
							MAKE_PAIR(BINT(BgL_minz00_2790), BINT(BgL_maxz00_2791));
						return
							BGl_errorz00zz__errorz00(BGl_string4135z00zz__urlz00,
							BgL_arg3264z00_2797, BgL_arg3265z00_2798);
					}
			}
		}
	}



/* <anonymous:2901> */
	obj_t BGl_zc3anonymousza32901ze3z83zz__urlz00(obj_t BgL_envz00_7198,
		obj_t BgL_inputzd2portzd2_7199)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 134 */
			{
				obj_t BgL_inputzd2portzd2_2203;

				BgL_inputzd2portzd2_2203 = BgL_inputzd2portzd2_7199;
				{
					obj_t BgL_inputzd2portzd2_2258;

					long BgL_lastzd2matchzd2_2259;

					obj_t BgL_inputzd2portzd2_2248;

					long BgL_lastzd2matchzd2_2249;

					obj_t BgL_inputzd2portzd2_2238;

					long BgL_lastzd2matchzd2_2239;

					RGC_START_MATCH(BgL_inputzd2portzd2_2203);
					{	/* Unsafe/url.scm 134 */
						long BgL_matchz00_2349;

						BgL_inputzd2portzd2_2258 = BgL_inputzd2portzd2_2203;
						BgL_lastzd2matchzd2_2259 = ((long) 1);
					BgL_zc3anonymousza32915ze3z83_2260:
						{	/* Unsafe/url.scm 134 */
							int BgL_currentzd2charzd2_2261;

							BgL_currentzd2charzd2_2261 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2258);
							if (((long) (BgL_currentzd2charzd2_2261) == ((long) 0)))
								{	/* Unsafe/url.scm 134 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2258))
										{	/* Unsafe/url.scm 134 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_2258))
												{

													goto BgL_zc3anonymousza32915ze3z83_2260;
												}
											else
												{	/* Unsafe/url.scm 134 */
													BgL_matchz00_2349 = BgL_lastzd2matchzd2_2259;
												}
										}
									else
										{	/* Unsafe/url.scm 134 */
											long BgL_newzd2matchzd2_5578;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2258);
											BgL_newzd2matchzd2_5578 = ((long) 1);
											BgL_matchz00_2349 = BgL_newzd2matchzd2_5578;
								}}
							else
								{	/* Unsafe/url.scm 134 */
									bool_t BgL_testz00_8383;

									if (((long) (BgL_currentzd2charzd2_2261) == ((long) 47)))
										{	/* Unsafe/url.scm 134 */
											BgL_testz00_8383 = ((bool_t) 1);
										}
									else
										{	/* Unsafe/url.scm 134 */
											BgL_testz00_8383 =
												((long) (BgL_currentzd2charzd2_2261) == ((long) 63));
										}
									if (BgL_testz00_8383)
										{	/* Unsafe/url.scm 134 */
											BgL_inputzd2portzd2_2238 = BgL_inputzd2portzd2_2258;
											BgL_lastzd2matchzd2_2239 = BgL_lastzd2matchzd2_2259;
										BgL_zc3anonymousza32903ze3z83_2240:
											{	/* Unsafe/url.scm 134 */
												long BgL_newzd2matchzd2_2241;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2238);
												BgL_newzd2matchzd2_2241 = ((long) 0);
												{	/* Unsafe/url.scm 134 */
													int BgL_currentzd2charzd2_2242;

													BgL_currentzd2charzd2_2242 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2238);
													if (
														((long) (BgL_currentzd2charzd2_2242) == ((long) 0)))
														{	/* Unsafe/url.scm 134 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2238))
																{	/* Unsafe/url.scm 134 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_2238))
																		{

																			goto BgL_zc3anonymousza32903ze3z83_2240;
																		}
																	else
																		{	/* Unsafe/url.scm 134 */
																			BgL_matchz00_2349 =
																				BgL_newzd2matchzd2_2241;
																		}
																}
															else
																{	/* Unsafe/url.scm 134 */
																	BgL_inputzd2portzd2_2248 =
																		BgL_inputzd2portzd2_2238;
																	BgL_lastzd2matchzd2_2249 =
																		BgL_newzd2matchzd2_2241;
																BgL_zc3anonymousza32909ze3z83_2250:
																	{	/* Unsafe/url.scm 134 */
																		long BgL_newzd2matchzd2_2251;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2248);
																		BgL_newzd2matchzd2_2251 = ((long) 0);
																		{	/* Unsafe/url.scm 134 */
																			int BgL_currentzd2charzd2_2252;

																			BgL_currentzd2charzd2_2252 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2248);
																			if (((long) (BgL_currentzd2charzd2_2252)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 134 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_2248))
																						{	/* Unsafe/url.scm 134 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_2248))
																								{

																									goto
																										BgL_zc3anonymousza32909ze3z83_2250;
																								}
																							else
																								{	/* Unsafe/url.scm 134 */
																									BgL_matchz00_2349 =
																										BgL_newzd2matchzd2_2251;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_8407;

																							BgL_lastzd2matchzd2_8407 =
																								BgL_newzd2matchzd2_2251;
																							BgL_lastzd2matchzd2_2249 =
																								BgL_lastzd2matchzd2_8407;
																							goto
																								BgL_zc3anonymousza32909ze3z83_2250;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 134 */
																					bool_t BgL_testz00_8408;

																					if (
																						((long) (BgL_currentzd2charzd2_2252)
																							== ((long) 10)))
																						{	/* Unsafe/url.scm 134 */
																							BgL_testz00_8408 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 134 */
																							BgL_testz00_8408 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_2252) ==
																								((long) 13));
																						}
																					if (BgL_testz00_8408)
																						{	/* Unsafe/url.scm 134 */
																							BgL_matchz00_2349 =
																								BgL_newzd2matchzd2_2251;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_8414;

																							BgL_lastzd2matchzd2_8414 =
																								BgL_newzd2matchzd2_2251;
																							BgL_lastzd2matchzd2_2249 =
																								BgL_lastzd2matchzd2_8414;
																							goto
																								BgL_zc3anonymousza32909ze3z83_2250;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 134 */
															bool_t BgL_testz00_8415;

															if (
																((long) (BgL_currentzd2charzd2_2242) ==
																	((long) 10)))
																{	/* Unsafe/url.scm 134 */
																	BgL_testz00_8415 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/url.scm 134 */
																	BgL_testz00_8415 =
																		(
																		(long) (BgL_currentzd2charzd2_2242) ==
																		((long) 13));
																}
															if (BgL_testz00_8415)
																{	/* Unsafe/url.scm 134 */
																	BgL_matchz00_2349 = BgL_newzd2matchzd2_2241;
																}
															else
																{
																	long BgL_lastzd2matchzd2_8422;

																	obj_t BgL_inputzd2portzd2_8421;

																	BgL_inputzd2portzd2_8421 =
																		BgL_inputzd2portzd2_2238;
																	BgL_lastzd2matchzd2_8422 =
																		BgL_newzd2matchzd2_2241;
																	BgL_lastzd2matchzd2_2249 =
																		BgL_lastzd2matchzd2_8422;
																	BgL_inputzd2portzd2_2248 =
																		BgL_inputzd2portzd2_8421;
																	goto BgL_zc3anonymousza32909ze3z83_2250;
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/url.scm 134 */
											long BgL_newzd2matchzd2_5586;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2258);
											BgL_newzd2matchzd2_5586 = ((long) 1);
											BgL_matchz00_2349 = BgL_newzd2matchzd2_5586;
						}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_2203);
						switch (BgL_matchz00_2349)
							{
							case ((long) 1):

								{	/* Unsafe/url.scm 138 */
									obj_t BgL_cz00_2353;

									BgL_cz00_2353 =
										BGl_thezd2failurezd2zz__urlz00(BgL_inputzd2portzd2_2203);
									if (EOF_OBJECTP(BgL_cz00_2353))
										{	/* Unsafe/url.scm 139 */
											return BGl_string4136z00zz__urlz00;
										}
									else
										{	/* Unsafe/url.scm 141 */
											obj_t BgL_arg2992z00_2355;

											obj_t BgL_arg2994z00_2357;

											BgL_arg2992z00_2355 = BgL_inputzd2portzd2_2203;
											BgL_arg2994z00_2357 =
												BGl_thezd2failurezd2zz__urlz00
												(BgL_inputzd2portzd2_2203);
											{	/* Unsafe/url.scm 141 */
												obj_t BgL_linez00_5607;

												BgL_linez00_5607 =
													BGl_readzd2linezd2zz__r4_input_6_10_2z00
													(BgL_arg2992z00_2355);
												{	/* Unsafe/url.scm 141 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3521z00_5608;

													{	/* Unsafe/url.scm 141 */
														obj_t BgL_arg3522z00_5609;

														obj_t BgL_arg3523z00_5610;

														obj_t BgL_arg3524z00_5611;

														{	/* Unsafe/url.scm 141 */

															{	/* Unsafe/url.scm 141 */

																BgL_arg3522z00_5609 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
															}
														}
														BgL_arg3523z00_5610 = BGl_symbol4127z00zz__urlz00;
														if (STRINGP(BgL_linez00_5607))
															{	/* Unsafe/url.scm 141 */
																obj_t BgL_list3526z00_5614;

																{	/* Unsafe/url.scm 141 */
																	obj_t BgL_arg3527z00_5615;

																	BgL_arg3527z00_5615 =
																		MAKE_PAIR(BgL_linez00_5607, BNIL);
																	BgL_list3526z00_5614 =
																		MAKE_PAIR(BgL_arg2994z00_2357,
																		BgL_arg3527z00_5615);
																}
																BgL_arg3524z00_5611 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string4129z00zz__urlz00,
																	BgL_list3526z00_5614);
															}
														else
															{	/* Unsafe/url.scm 141 */
																BgL_arg3524z00_5611 = BgL_arg2994z00_2357;
															}
														BgL_arg3521z00_5608 =
															BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg3522z00_5609,
															BgL_arg3523z00_5610, BGl_string4130z00zz__urlz00,
															BgL_arg3524z00_5611);
													}
													return
														BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg3521z00_5608));
												}
											}
										}
								}
								break;
							case ((long) 0):

								{	/* Unsafe/url.scm 136 */
									obj_t BgL_res4061z00_5624;

									{	/* Unsafe/url.scm 136 */
										int BgL_arg2928z00_5618;

										{	/* Unsafe/url.scm 136 */
											int BgL_res4060z00_5620;

											{	/* Unsafe/url.scm 136 */
												obj_t BgL_inputzd2portzd2_5619;

												BgL_inputzd2portzd2_5619 = BgL_inputzd2portzd2_2203;
												BgL_res4060z00_5620 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5619));
											}
											BgL_arg2928z00_5618 = BgL_res4060z00_5620;
										}
										BgL_res4061z00_5624 =
											rgc_buffer_substring(BgL_inputzd2portzd2_2203, ((long) 0),
											(long) (BgL_arg2928z00_5618));
									}
									return BgL_res4061z00_5624;
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_2349));
							}
					}
				}
			}
		}
	}



/* the-failure */
	obj_t BGl_thezd2failurezd2zz__urlz00(obj_t BgL_inputzd2portzd2_7237)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 134 */
			{	/* Unsafe/url.scm 134 */
				bool_t BgL_testz00_8446;

				{	/* Unsafe/url.scm 134 */
					long BgL_arg2982z00_2338;

					BgL_arg2982z00_2338 = RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_7237);
					BgL_testz00_8446 = (BgL_arg2982z00_2338 == ((long) 0));
				}
				if (BgL_testz00_8446)
					{	/* Unsafe/url.scm 134 */
						return BCNST(256);
					}
				else
					{	/* Unsafe/url.scm 134 */
						obj_t BgL_inputzd2portzd2_5599;

						BgL_inputzd2portzd2_5599 = BgL_inputzd2portzd2_7237;
						return BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5599));
					}
			}
		}
	}



/* <anonymous:2360> */
	obj_t BGl_zc3anonymousza32360ze3z83zz__urlz00(obj_t BgL_envz00_7200,
		obj_t BgL_inputzd2portzd2_7201, obj_t BgL_protocolz00_7202,
		obj_t BgL_userinfoz00_7203)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 104 */
			{
				obj_t BgL_inputzd2portzd2_1370;

				obj_t BgL_protocolz00_1371;

				obj_t BgL_userinfoz00_1372;

				BgL_inputzd2portzd2_1370 = BgL_inputzd2portzd2_7201;
				BgL_protocolz00_1371 = BgL_protocolz00_7202;
				BgL_userinfoz00_1372 = BgL_userinfoz00_7203;
				{
					obj_t BgL_inputzd2portzd2_2013;

					long BgL_lastzd2matchzd2_2014;

					obj_t BgL_inputzd2portzd2_1992;

					long BgL_lastzd2matchzd2_1993;

					obj_t BgL_inputzd2portzd2_1980;

					long BgL_lastzd2matchzd2_1981;

					obj_t BgL_inputzd2portzd2_1968;

					long BgL_lastzd2matchzd2_1969;

					obj_t BgL_inputzd2portzd2_1947;

					long BgL_lastzd2matchzd2_1948;

					obj_t BgL_inputzd2portzd2_1934;

					long BgL_lastzd2matchzd2_1935;

					obj_t BgL_inputzd2portzd2_1911;

					long BgL_lastzd2matchzd2_1912;

					obj_t BgL_inputzd2portzd2_1888;

					long BgL_lastzd2matchzd2_1889;

					obj_t BgL_inputzd2portzd2_1874;

					long BgL_lastzd2matchzd2_1875;

					obj_t BgL_inputzd2portzd2_1862;

					long BgL_lastzd2matchzd2_1863;

					obj_t BgL_inputzd2portzd2_1841;

					long BgL_lastzd2matchzd2_1842;

					obj_t BgL_inputzd2portzd2_1834;

					long BgL_lastzd2matchzd2_1835;

					obj_t BgL_inputzd2portzd2_1795;

					long BgL_lastzd2matchzd2_1796;

					obj_t BgL_inputzd2portzd2_1756;

					long BgL_lastzd2matchzd2_1757;

					obj_t BgL_inputzd2portzd2_1717;

					long BgL_lastzd2matchzd2_1718;

					obj_t BgL_inputzd2portzd2_1695;

					long BgL_lastzd2matchzd2_1696;

					obj_t BgL_inputzd2portzd2_1681;

					long BgL_lastzd2matchzd2_1682;

					obj_t BgL_inputzd2portzd2_1674;

					long BgL_lastzd2matchzd2_1675;

					obj_t BgL_inputzd2portzd2_1662;

					long BgL_lastzd2matchzd2_1663;

					obj_t BgL_inputzd2portzd2_1651;

					long BgL_lastzd2matchzd2_1652;

					obj_t BgL_inputzd2portzd2_1639;

					long BgL_lastzd2matchzd2_1640;

					obj_t BgL_inputzd2portzd2_1625;

					long BgL_lastzd2matchzd2_1626;

					obj_t BgL_inputzd2portzd2_1596;

					long BgL_lastzd2matchzd2_1597;

					obj_t BgL_inputzd2portzd2_1563;

					long BgL_lastzd2matchzd2_1564;

					obj_t BgL_inputzd2portzd2_1540;

					long BgL_lastzd2matchzd2_1541;

					obj_t BgL_inputzd2portzd2_1518;

					long BgL_lastzd2matchzd2_1519;

					obj_t BgL_inputzd2portzd2_1495;

					long BgL_lastzd2matchzd2_1496;

					obj_t BgL_inputzd2portzd2_1481;

					long BgL_lastzd2matchzd2_1482;

					obj_t BgL_inputzd2portzd2_1452;

					long BgL_lastzd2matchzd2_1453;

					obj_t BgL_inputzd2portzd2_1430;

					long BgL_lastzd2matchzd2_1431;

				BgL_zc3anonymousza32884ze3z83_2107:
					RGC_START_MATCH(BgL_inputzd2portzd2_1370);
					{	/* Unsafe/url.scm 104 */
						long BgL_matchz00_2108;

						BgL_inputzd2portzd2_1452 = BgL_inputzd2portzd2_1370;
						BgL_lastzd2matchzd2_1453 = ((long) 5);
					BgL_zc3anonymousza32377ze3z83_1454:
						{	/* Unsafe/url.scm 104 */
							int BgL_currentzd2charzd2_1455;

							BgL_currentzd2charzd2_1455 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1452);
							if (((long) (BgL_currentzd2charzd2_1455) == ((long) 0)))
								{	/* Unsafe/url.scm 104 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1452))
										{	/* Unsafe/url.scm 104 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1452))
												{

													goto BgL_zc3anonymousza32377ze3z83_1454;
												}
											else
												{	/* Unsafe/url.scm 104 */
													BgL_matchz00_2108 = BgL_lastzd2matchzd2_1453;
												}
										}
									else
										{	/* Unsafe/url.scm 104 */
											BgL_inputzd2portzd2_1862 = BgL_inputzd2portzd2_1452;
											BgL_lastzd2matchzd2_1863 = BgL_lastzd2matchzd2_1453;
										BgL_zc3anonymousza32702ze3z83_1864:
											{	/* Unsafe/url.scm 104 */
												long BgL_newzd2matchzd2_1865;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1862);
												BgL_newzd2matchzd2_1865 = ((long) 2);
												{	/* Unsafe/url.scm 104 */
													int BgL_currentzd2charzd2_1866;

													BgL_currentzd2charzd2_1866 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1862);
													if (
														((long) (BgL_currentzd2charzd2_1866) == ((long) 0)))
														{	/* Unsafe/url.scm 104 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1862))
																{	/* Unsafe/url.scm 104 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1862))
																		{

																			goto BgL_zc3anonymousza32702ze3z83_1864;
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			BgL_matchz00_2108 =
																				BgL_newzd2matchzd2_1865;
																		}
																}
															else
																{	/* Unsafe/url.scm 104 */
																	BgL_inputzd2portzd2_1980 =
																		BgL_inputzd2portzd2_1862;
																	BgL_lastzd2matchzd2_1981 =
																		BgL_newzd2matchzd2_1865;
																BgL_zc3anonymousza32786ze3z83_1982:
																	{	/* Unsafe/url.scm 104 */
																		long BgL_newzd2matchzd2_1983;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1980);
																		BgL_newzd2matchzd2_1983 = ((long) 2);
																		{	/* Unsafe/url.scm 104 */
																			int BgL_currentzd2charzd2_1984;

																			BgL_currentzd2charzd2_1984 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1980);
																			if (((long) (BgL_currentzd2charzd2_1984)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 104 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1980))
																						{	/* Unsafe/url.scm 104 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1980))
																								{

																									goto
																										BgL_zc3anonymousza32786ze3z83_1982;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									BgL_matchz00_2108 =
																										BgL_newzd2matchzd2_1983;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_8478;

																							BgL_lastzd2matchzd2_8478 =
																								BgL_newzd2matchzd2_1983;
																							BgL_lastzd2matchzd2_1981 =
																								BgL_lastzd2matchzd2_8478;
																							goto
																								BgL_zc3anonymousza32786ze3z83_1982;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					if (
																						((long) (BgL_currentzd2charzd2_1984)
																							== ((long) 58)))
																						{	/* Unsafe/url.scm 104 */
																							long BgL_newzd2matchzd2_5392;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1980);
																							BgL_newzd2matchzd2_5392 =
																								((long) 1);
																							BgL_matchz00_2108 =
																								BgL_newzd2matchzd2_5392;
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							bool_t BgL_testz00_8483;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_1984)
																									== ((long) 47)))
																								{	/* Unsafe/url.scm 104 */
																									BgL_testz00_8483 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1984)
																											== ((long) 58)))
																										{	/* Unsafe/url.scm 104 */
																											BgL_testz00_8483 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											BgL_testz00_8483 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_1984)
																												== ((long) 64));
																								}}
																							if (BgL_testz00_8483)
																								{	/* Unsafe/url.scm 104 */
																									BgL_matchz00_2108 =
																										BgL_newzd2matchzd2_1983;
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_8492;

																									BgL_lastzd2matchzd2_8492 =
																										BgL_newzd2matchzd2_1983;
																									BgL_lastzd2matchzd2_1981 =
																										BgL_lastzd2matchzd2_8492;
																									goto
																										BgL_zc3anonymousza32786ze3z83_1982;
																								}
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 104 */
															if (
																((long) (BgL_currentzd2charzd2_1866) ==
																	((long) 58)))
																{	/* Unsafe/url.scm 104 */
																	long BgL_newzd2matchzd2_5202;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1862);
																	BgL_newzd2matchzd2_5202 = ((long) 1);
																	BgL_matchz00_2108 = BgL_newzd2matchzd2_5202;
																}
															else
																{	/* Unsafe/url.scm 104 */
																	bool_t BgL_testz00_8497;

																	if (
																		((long) (BgL_currentzd2charzd2_1866) ==
																			((long) 47)))
																		{	/* Unsafe/url.scm 104 */
																			BgL_testz00_8497 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			if (
																				((long) (BgL_currentzd2charzd2_1866) ==
																					((long) 58)))
																				{	/* Unsafe/url.scm 104 */
																					BgL_testz00_8497 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					BgL_testz00_8497 =
																						(
																						(long) (BgL_currentzd2charzd2_1866)
																						== ((long) 64));
																		}}
																	if (BgL_testz00_8497)
																		{	/* Unsafe/url.scm 104 */
																			BgL_matchz00_2108 =
																				BgL_newzd2matchzd2_1865;
																		}
																	else
																		{
																			long BgL_lastzd2matchzd2_8507;

																			obj_t BgL_inputzd2portzd2_8506;

																			BgL_inputzd2portzd2_8506 =
																				BgL_inputzd2portzd2_1862;
																			BgL_lastzd2matchzd2_8507 =
																				BgL_newzd2matchzd2_1865;
																			BgL_lastzd2matchzd2_1981 =
																				BgL_lastzd2matchzd2_8507;
																			BgL_inputzd2portzd2_1980 =
																				BgL_inputzd2portzd2_8506;
																			goto BgL_zc3anonymousza32786ze3z83_1982;
																		}
																}
														}
												}
											}
										}
								}
							else
								{	/* Unsafe/url.scm 104 */
									if (((long) (BgL_currentzd2charzd2_1455) == ((long) 64)))
										{	/* Unsafe/url.scm 104 */
											BgL_inputzd2portzd2_1911 = BgL_inputzd2portzd2_1452;
											BgL_lastzd2matchzd2_1912 = BgL_lastzd2matchzd2_1453;
										BgL_zc3anonymousza32737ze3z83_1913:
											{	/* Unsafe/url.scm 104 */
												long BgL_newzd2matchzd2_1914;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1911);
												BgL_newzd2matchzd2_1914 = ((long) 0);
												{	/* Unsafe/url.scm 104 */
													int BgL_currentzd2charzd2_1915;

													BgL_currentzd2charzd2_1915 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1911);
													if (
														((long) (BgL_currentzd2charzd2_1915) == ((long) 0)))
														{	/* Unsafe/url.scm 104 */
															bool_t BgL_testz00_8516;

															{	/* Unsafe/url.scm 104 */
																bool_t BgL_res4043z00_5279;

																{	/* Unsafe/url.scm 104 */
																	obj_t BgL_inputzd2portzd2_5275;

																	BgL_inputzd2portzd2_5275 =
																		BgL_inputzd2portzd2_1911;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_5275))
																		{	/* Unsafe/url.scm 104 */
																			BgL_res4043z00_5279 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_5275);
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			BgL_res4043z00_5279 = ((bool_t) 0);
																		}
																}
																BgL_testz00_8516 = BgL_res4043z00_5279;
															}
															if (BgL_testz00_8516)
																{

																	goto BgL_zc3anonymousza32737ze3z83_1913;
																}
															else
																{	/* Unsafe/url.scm 104 */
																	BgL_matchz00_2108 = BgL_newzd2matchzd2_1914;
																}
														}
													else
														{	/* Unsafe/url.scm 104 */
															if (
																((long) (BgL_currentzd2charzd2_1915) ==
																	((long) 64)))
																{	/* Unsafe/url.scm 104 */
																	BgL_inputzd2portzd2_1540 =
																		BgL_inputzd2portzd2_1911;
																	BgL_lastzd2matchzd2_1541 =
																		BgL_newzd2matchzd2_1914;
																BgL_zc3anonymousza32449ze3z83_1542:
																	{	/* Unsafe/url.scm 104 */
																		long BgL_newzd2matchzd2_1543;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1540);
																		BgL_newzd2matchzd2_1543 = ((long) 0);
																		{	/* Unsafe/url.scm 104 */
																			int BgL_currentzd2charzd2_1544;

																			BgL_currentzd2charzd2_1544 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1540);
																			if (((long) (BgL_currentzd2charzd2_1544)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 104 */
																					bool_t BgL_testz00_8528;

																					{	/* Unsafe/url.scm 104 */
																						bool_t BgL_res4038z00_4677;

																						{	/* Unsafe/url.scm 104 */
																							obj_t BgL_inputzd2portzd2_4673;

																							BgL_inputzd2portzd2_4673 =
																								BgL_inputzd2portzd2_1540;
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_4673))
																								{	/* Unsafe/url.scm 104 */
																									BgL_res4038z00_4677 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_4673);
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									BgL_res4038z00_4677 =
																										((bool_t) 0);
																								}
																						}
																						BgL_testz00_8528 =
																							BgL_res4038z00_4677;
																					}
																					if (BgL_testz00_8528)
																						{

																							goto
																								BgL_zc3anonymousza32449ze3z83_1542;
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							BgL_matchz00_2108 =
																								BgL_newzd2matchzd2_1543;
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					if (
																						((long) (BgL_currentzd2charzd2_1544)
																							== ((long) 64)))
																						{
																							long BgL_lastzd2matchzd2_8535;

																							BgL_lastzd2matchzd2_8535 =
																								BgL_newzd2matchzd2_1543;
																							BgL_lastzd2matchzd2_1541 =
																								BgL_lastzd2matchzd2_8535;
																							goto
																								BgL_zc3anonymousza32449ze3z83_1542;
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1544)
																									== ((long) 60)))
																								{	/* Unsafe/url.scm 104 */
																									BgL_inputzd2portzd2_1674 =
																										BgL_inputzd2portzd2_1540;
																									BgL_lastzd2matchzd2_1675 =
																										BgL_newzd2matchzd2_1543;
																								BgL_zc3anonymousza32550ze3z83_1676:
																									{	/* Unsafe/url.scm 104 */
																										int
																											BgL_currentzd2charzd2_1677;
																										BgL_currentzd2charzd2_1677 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_inputzd2portzd2_1674);
																										if (((long)
																												(BgL_currentzd2charzd2_1677)
																												== ((long) 0)))
																											{	/* Unsafe/url.scm 104 */
																												bool_t BgL_testz00_8543;

																												{	/* Unsafe/url.scm 104 */
																													bool_t
																														BgL_res4040z00_4885;
																													{	/* Unsafe/url.scm 104 */
																														obj_t
																															BgL_inputzd2portzd2_4881;
																														BgL_inputzd2portzd2_4881
																															=
																															BgL_inputzd2portzd2_1674;
																														if (RGC_BUFFER_EMPTY
																															(BgL_inputzd2portzd2_4881))
																															{	/* Unsafe/url.scm 104 */
																																BgL_res4040z00_4885
																																	=
																																	rgc_fill_buffer
																																	(BgL_inputzd2portzd2_4881);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_res4040z00_4885
																																	=
																																	((bool_t) 0);
																															}
																													}
																													BgL_testz00_8543 =
																														BgL_res4040z00_4885;
																												}
																												if (BgL_testz00_8543)
																													{

																														goto
																															BgL_zc3anonymousza32550ze3z83_1676;
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														BgL_matchz00_2108 =
																															BgL_lastzd2matchzd2_1675;
																													}
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1677)
																														== ((long) 62)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_inputzd2portzd2_1834
																															=
																															BgL_inputzd2portzd2_1674;
																														BgL_lastzd2matchzd2_1835
																															=
																															BgL_lastzd2matchzd2_1675;
																													BgL_zc3anonymousza32683ze3z83_1836:
																														{	/* Unsafe/url.scm 104 */
																															int
																																BgL_currentzd2charzd2_1837;
																															BgL_currentzd2charzd2_1837
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_1834);
																															if (((long)
																																	(BgL_currentzd2charzd2_1837)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/url.scm 104 */
																																	bool_t
																																		BgL_testz00_8554;
																																	{	/* Unsafe/url.scm 104 */
																																		bool_t
																																			BgL_res4041z00_5153;
																																		{	/* Unsafe/url.scm 104 */
																																			obj_t
																																				BgL_inputzd2portzd2_5149;
																																			BgL_inputzd2portzd2_5149
																																				=
																																				BgL_inputzd2portzd2_1834;
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5149))
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_res4041z00_5153
																																						=
																																						rgc_fill_buffer
																																						(BgL_inputzd2portzd2_5149);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_res4041z00_5153
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		BgL_testz00_8554
																																			=
																																			BgL_res4041z00_5153;
																																	}
																																	if (BgL_testz00_8554)
																																		{

																																			goto
																																				BgL_zc3anonymousza32683ze3z83_1836;
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_matchz00_2108
																																				=
																																				BgL_lastzd2matchzd2_1835;
																																		}
																																}
																															else
																																{	/* Unsafe/url.scm 104 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1837)
																																			==
																																			((long)
																																				32)))
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_inputzd2portzd2_1518
																																				=
																																				BgL_inputzd2portzd2_1834;
																																			BgL_lastzd2matchzd2_1519
																																				=
																																				BgL_lastzd2matchzd2_1835;
																																		BgL_zc3anonymousza32430ze3z83_1520:
																																			{	/* Unsafe/url.scm 104 */
																																				int
																																					BgL_currentzd2charzd2_1521;
																																				BgL_currentzd2charzd2_1521
																																					=
																																					RGC_BUFFER_GET_CHAR
																																					(BgL_inputzd2portzd2_1518);
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1521)
																																						==
																																						((long) 0)))
																																					{	/* Unsafe/url.scm 104 */
																																						bool_t
																																							BgL_testz00_8565;
																																						{	/* Unsafe/url.scm 104 */
																																							bool_t
																																								BgL_res4037z00_4636;
																																							{	/* Unsafe/url.scm 104 */
																																								obj_t
																																									BgL_inputzd2portzd2_4632;
																																								BgL_inputzd2portzd2_4632
																																									=
																																									BgL_inputzd2portzd2_1518;
																																								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4632))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_res4037z00_4636
																																											=
																																											rgc_fill_buffer
																																											(BgL_inputzd2portzd2_4632);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_res4037z00_4636
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							BgL_testz00_8565
																																								=
																																								BgL_res4037z00_4636;
																																						}
																																						if (BgL_testz00_8565)
																																							{

																																								goto
																																									BgL_zc3anonymousza32430ze3z83_1520;
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_matchz00_2108
																																									=
																																									BgL_lastzd2matchzd2_1519;
																																							}
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1521) == ((long) 64)))
																																							{
																																								long
																																									BgL_lastzd2matchzd2_8573;
																																								obj_t
																																									BgL_inputzd2portzd2_8572;
																																								BgL_inputzd2portzd2_8572
																																									=
																																									BgL_inputzd2portzd2_1518;
																																								BgL_lastzd2matchzd2_8573
																																									=
																																									BgL_lastzd2matchzd2_1519;
																																								BgL_lastzd2matchzd2_1541
																																									=
																																									BgL_lastzd2matchzd2_8573;
																																								BgL_inputzd2portzd2_1540
																																									=
																																									BgL_inputzd2portzd2_8572;
																																								goto
																																									BgL_zc3anonymousza32449ze3z83_1542;
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								if (((long) (BgL_currentzd2charzd2_1521) == ((long) 60)))
																																									{
																																										long
																																											BgL_lastzd2matchzd2_8578;
																																										obj_t
																																											BgL_inputzd2portzd2_8577;
																																										BgL_inputzd2portzd2_8577
																																											=
																																											BgL_inputzd2portzd2_1518;
																																										BgL_lastzd2matchzd2_8578
																																											=
																																											BgL_lastzd2matchzd2_1519;
																																										BgL_lastzd2matchzd2_1675
																																											=
																																											BgL_lastzd2matchzd2_8578;
																																										BgL_inputzd2portzd2_1674
																																											=
																																											BgL_inputzd2portzd2_8577;
																																										goto
																																											BgL_zc3anonymousza32550ze3z83_1676;
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										if (((long) (BgL_currentzd2charzd2_1521) == ((long) 37)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_inputzd2portzd2_1968
																																													=
																																													BgL_inputzd2portzd2_1518;
																																												BgL_lastzd2matchzd2_1969
																																													=
																																													BgL_lastzd2matchzd2_1519;
																																											BgL_zc3anonymousza32778ze3z83_1970:
																																												{	/* Unsafe/url.scm 104 */
																																													int
																																														BgL_currentzd2charzd2_1971;
																																													BgL_currentzd2charzd2_1971
																																														=
																																														RGC_BUFFER_GET_CHAR
																																														(BgL_inputzd2portzd2_1968);
																																													if (((long) (BgL_currentzd2charzd2_1971) == ((long) 0)))
																																														{	/* Unsafe/url.scm 104 */
																																															bool_t
																																																BgL_testz00_8586;
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_res4044z00_5369;
																																																{	/* Unsafe/url.scm 104 */
																																																	obj_t
																																																		BgL_inputzd2portzd2_5365;
																																																	BgL_inputzd2portzd2_5365
																																																		=
																																																		BgL_inputzd2portzd2_1968;
																																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_5365))
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_res4044z00_5369
																																																				=
																																																				rgc_fill_buffer
																																																				(BgL_inputzd2portzd2_5365);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_res4044z00_5369
																																																				=
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																																BgL_testz00_8586
																																																	=
																																																	BgL_res4044z00_5369;
																																															}
																																															if (BgL_testz00_8586)
																																																{

																																																	goto
																																																		BgL_zc3anonymousza32778ze3z83_1970;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_matchz00_2108
																																																		=
																																																		BgL_lastzd2matchzd2_1969;
																																																}
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															bool_t
																																																BgL_testz00_8590;
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_testz00_8591;
																																																if (((long) (BgL_currentzd2charzd2_1971) >= ((long) 48)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8591
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_1971)
																																																			<
																																																			((long) 58));
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8591
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_8591)
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8590
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		bool_t
																																																			BgL_testz00_8597;
																																																		if (((long) (BgL_currentzd2charzd2_1971) >= ((long) 65)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8597
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1971)
																																																					<
																																																					((long) 71));
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8597
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_8597)
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8590
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				if (((long) (BgL_currentzd2charzd2_1971) >= ((long) 97)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8590
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1971)
																																																							<
																																																							((long) 103));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8590
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																	}
																																															}
																																															if (BgL_testz00_8590)
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_inputzd2portzd2_1662
																																																		=
																																																		BgL_inputzd2portzd2_1968;
																																																	BgL_lastzd2matchzd2_1663
																																																		=
																																																		BgL_lastzd2matchzd2_1969;
																																																BgL_zc3anonymousza32542ze3z83_1664:
																																																	{	/* Unsafe/url.scm 104 */
																																																		int
																																																			BgL_currentzd2charzd2_1665;
																																																		BgL_currentzd2charzd2_1665
																																																			=
																																																			RGC_BUFFER_GET_CHAR
																																																			(BgL_inputzd2portzd2_1662);
																																																		if (((long) (BgL_currentzd2charzd2_1665) == ((long) 0)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				bool_t
																																																					BgL_testz00_8612;
																																																				{	/* Unsafe/url.scm 104 */
																																																					bool_t
																																																						BgL_res4039z00_4865;
																																																					{	/* Unsafe/url.scm 104 */
																																																						obj_t
																																																							BgL_inputzd2portzd2_4861;
																																																						BgL_inputzd2portzd2_4861
																																																							=
																																																							BgL_inputzd2portzd2_1662;
																																																						if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4861))
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_res4039z00_4865
																																																									=
																																																									rgc_fill_buffer
																																																									(BgL_inputzd2portzd2_4861);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_res4039z00_4865
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																					}
																																																					BgL_testz00_8612
																																																						=
																																																						BgL_res4039z00_4865;
																																																				}
																																																				if (BgL_testz00_8612)
																																																					{

																																																						goto
																																																							BgL_zc3anonymousza32542ze3z83_1664;
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_matchz00_2108
																																																							=
																																																							BgL_lastzd2matchzd2_1663;
																																																					}
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				bool_t
																																																					BgL_testz00_8616;
																																																				{	/* Unsafe/url.scm 104 */
																																																					bool_t
																																																						BgL_testz00_8617;
																																																					if (((long) (BgL_currentzd2charzd2_1665) >= ((long) 48)))
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8617
																																																								=
																																																								(
																																																								(long)
																																																								(BgL_currentzd2charzd2_1665)
																																																								<
																																																								((long) 58));
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8617
																																																								=
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																					if (BgL_testz00_8617)
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8616
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							bool_t
																																																								BgL_testz00_8623;
																																																							if (((long) (BgL_currentzd2charzd2_1665) >= ((long) 65)))
																																																								{	/* Unsafe/url.scm 104 */
																																																									BgL_testz00_8623
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_currentzd2charzd2_1665)
																																																										<
																																																										((long) 71));
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									BgL_testz00_8623
																																																										=
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																							if (BgL_testz00_8623)
																																																								{	/* Unsafe/url.scm 104 */
																																																									BgL_testz00_8616
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									if (((long) (BgL_currentzd2charzd2_1665) >= ((long) 97)))
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_8616
																																																												=
																																																												(
																																																												(long)
																																																												(BgL_currentzd2charzd2_1665)
																																																												<
																																																												((long) 103));
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_8616
																																																												=
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																								}
																																																						}
																																																				}
																																																				if (BgL_testz00_8616)
																																																					{
																																																						long
																																																							BgL_lastzd2matchzd2_8635;
																																																						obj_t
																																																							BgL_inputzd2portzd2_8634;
																																																						BgL_inputzd2portzd2_8634
																																																							=
																																																							BgL_inputzd2portzd2_1662;
																																																						BgL_lastzd2matchzd2_8635
																																																							=
																																																							BgL_lastzd2matchzd2_1663;
																																																						BgL_lastzd2matchzd2_1519
																																																							=
																																																							BgL_lastzd2matchzd2_8635;
																																																						BgL_inputzd2portzd2_1518
																																																							=
																																																							BgL_inputzd2portzd2_8634;
																																																						goto
																																																							BgL_zc3anonymousza32430ze3z83_1520;
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_matchz00_2108
																																																							=
																																																							BgL_lastzd2matchzd2_1663;
																																																					}
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_matchz00_2108
																																																		=
																																																		BgL_lastzd2matchzd2_1969;
																																																}
																																														}
																																												}
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												bool_t
																																													BgL_testz00_8636;
																																												{	/* Unsafe/url.scm 104 */
																																													bool_t
																																														BgL_testz00_8637;
																																													if (((long) (BgL_currentzd2charzd2_1521) == ((long) 33)))
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_8637
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_8637
																																																=
																																																(
																																																(long)
																																																(BgL_currentzd2charzd2_1521)
																																																==
																																																((long) 32));
																																														}
																																													if (BgL_testz00_8637)
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_8636
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															if (((long) (BgL_currentzd2charzd2_1521) == ((long) 36)))
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_testz00_8636
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	bool_t
																																																		BgL_testz00_8646;
																																																	if (((long) (BgL_currentzd2charzd2_1521) >= ((long) 38)))
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_8646
																																																				=
																																																				(
																																																				(long)
																																																				(BgL_currentzd2charzd2_1521)
																																																				<
																																																				((long) 60));
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_8646
																																																				=
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																	if (BgL_testz00_8646)
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_8636
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			if (((long) (BgL_currentzd2charzd2_1521) == ((long) 61)))
																																																				{	/* Unsafe/url.scm 104 */
																																																					BgL_testz00_8636
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 104 */
																																																					bool_t
																																																						BgL_testz00_8655;
																																																					if (((long) (BgL_currentzd2charzd2_1521) >= ((long) 65)))
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8655
																																																								=
																																																								(
																																																								(long)
																																																								(BgL_currentzd2charzd2_1521)
																																																								<
																																																								((long) 91));
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8655
																																																								=
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																					if (BgL_testz00_8655)
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_testz00_8636
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							if (((long) (BgL_currentzd2charzd2_1521) == ((long) 95)))
																																																								{	/* Unsafe/url.scm 104 */
																																																									BgL_testz00_8636
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									bool_t
																																																										BgL_testz00_8664;
																																																									if (((long) (BgL_currentzd2charzd2_1521) >= ((long) 97)))
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_8664
																																																												=
																																																												(
																																																												(long)
																																																												(BgL_currentzd2charzd2_1521)
																																																												<
																																																												((long) 123));
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_8664
																																																												=
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																									if (BgL_testz00_8664)
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_8636
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 104 */
																																																											if (((long) (BgL_currentzd2charzd2_1521) == ((long) 124)))
																																																												{	/* Unsafe/url.scm 104 */
																																																													BgL_testz00_8636
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 104 */
																																																													BgL_testz00_8636
																																																														=
																																																														(
																																																														(long)
																																																														(BgL_currentzd2charzd2_1521)
																																																														==
																																																														((long) 126));
																																												}}}}}}}}}
																																												if (BgL_testz00_8636)
																																													{

																																														goto
																																															BgL_zc3anonymousza32430ze3z83_1520;
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_matchz00_2108
																																															=
																																															BgL_lastzd2matchzd2_1519;
																																													}
																																											}
																																									}
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_matchz00_2108
																																				=
																																				BgL_lastzd2matchzd2_1835;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														BgL_matchz00_2108 =
																															BgL_lastzd2matchzd2_1675;
																													}
																											}
																									}
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1544)
																											== ((long) 37)))
																										{
																											long
																												BgL_lastzd2matchzd2_8679;
																											obj_t
																												BgL_inputzd2portzd2_8678;
																											BgL_inputzd2portzd2_8678 =
																												BgL_inputzd2portzd2_1540;
																											BgL_lastzd2matchzd2_8679 =
																												BgL_newzd2matchzd2_1543;
																											BgL_lastzd2matchzd2_1969 =
																												BgL_lastzd2matchzd2_8679;
																											BgL_inputzd2portzd2_1968 =
																												BgL_inputzd2portzd2_8678;
																											goto
																												BgL_zc3anonymousza32778ze3z83_1970;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											bool_t BgL_testz00_8680;

																											{	/* Unsafe/url.scm 104 */
																												bool_t BgL_testz00_8681;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_1544)
																														== ((long) 33)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_8681 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_8681 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1544)
																															== ((long) 32));
																													}
																												if (BgL_testz00_8681)
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_8680 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1544)
																																== ((long) 36)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_8680
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																bool_t
																																	BgL_testz00_8690;
																																if (((long)
																																		(BgL_currentzd2charzd2_1544)
																																		>=
																																		((long)
																																			38)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_8690
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_1544)
																																			<
																																			((long)
																																				60));
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_8690
																																			=
																																			((bool_t)
																																			0);
																																	}
																																if (BgL_testz00_8690)
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_8680
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_1544)
																																				==
																																				((long)
																																					61)))
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_8680
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				bool_t
																																					BgL_testz00_8699;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1544)
																																						>=
																																						((long) 65)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_8699
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1544)
																																							<
																																							((long) 91));
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_8699
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_8699)
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_8680
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1544) == ((long) 95)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_8680
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								bool_t
																																									BgL_testz00_8708;
																																								if (((long) (BgL_currentzd2charzd2_1544) >= ((long) 97)))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_8708
																																											=
																																											(
																																											(long)
																																											(BgL_currentzd2charzd2_1544)
																																											<
																																											((long) 123));
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_8708
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_testz00_8708)
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_8680
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										if (((long) (BgL_currentzd2charzd2_1544) == ((long) 124)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_8680
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_8680
																																													=
																																													(
																																													(long)
																																													(BgL_currentzd2charzd2_1544)
																																													==
																																													((long) 126));
																											}}}}}}}}}
																											if (BgL_testz00_8680)
																												{
																													long
																														BgL_lastzd2matchzd2_8720;
																													obj_t
																														BgL_inputzd2portzd2_8719;
																													BgL_inputzd2portzd2_8719
																														=
																														BgL_inputzd2portzd2_1540;
																													BgL_lastzd2matchzd2_8720
																														=
																														BgL_newzd2matchzd2_1543;
																													BgL_lastzd2matchzd2_1519
																														=
																														BgL_lastzd2matchzd2_8720;
																													BgL_inputzd2portzd2_1518
																														=
																														BgL_inputzd2portzd2_8719;
																													goto
																														BgL_zc3anonymousza32430ze3z83_1520;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_1543;
																												}
																										}
																								}
																						}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/url.scm 104 */
																	if (
																		((long) (BgL_currentzd2charzd2_1915) ==
																			((long) 60)))
																		{
																			long BgL_lastzd2matchzd2_8725;

																			obj_t BgL_inputzd2portzd2_8724;

																			BgL_inputzd2portzd2_8724 =
																				BgL_inputzd2portzd2_1911;
																			BgL_lastzd2matchzd2_8725 =
																				BgL_newzd2matchzd2_1914;
																			BgL_lastzd2matchzd2_1675 =
																				BgL_lastzd2matchzd2_8725;
																			BgL_inputzd2portzd2_1674 =
																				BgL_inputzd2portzd2_8724;
																			goto BgL_zc3anonymousza32550ze3z83_1676;
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			if (
																				((long) (BgL_currentzd2charzd2_1915) ==
																					((long) 37)))
																				{
																					long BgL_lastzd2matchzd2_8730;

																					obj_t BgL_inputzd2portzd2_8729;

																					BgL_inputzd2portzd2_8729 =
																						BgL_inputzd2portzd2_1911;
																					BgL_lastzd2matchzd2_8730 =
																						BgL_newzd2matchzd2_1914;
																					BgL_lastzd2matchzd2_1969 =
																						BgL_lastzd2matchzd2_8730;
																					BgL_inputzd2portzd2_1968 =
																						BgL_inputzd2portzd2_8729;
																					goto
																						BgL_zc3anonymousza32778ze3z83_1970;
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					bool_t BgL_testz00_8731;

																					{	/* Unsafe/url.scm 104 */
																						bool_t BgL_testz00_8732;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_1915) ==
																								((long) 33)))
																							{	/* Unsafe/url.scm 104 */
																								BgL_testz00_8732 = ((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/url.scm 104 */
																								BgL_testz00_8732 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_1915)
																									== ((long) 32));
																							}
																						if (BgL_testz00_8732)
																							{	/* Unsafe/url.scm 104 */
																								BgL_testz00_8731 = ((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/url.scm 104 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_1915)
																										== ((long) 36)))
																									{	/* Unsafe/url.scm 104 */
																										BgL_testz00_8731 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/url.scm 104 */
																										bool_t BgL_testz00_8741;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1915)
																												>= ((long) 38)))
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_8741 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1915)
																													< ((long) 60));
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_8741 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_8741)
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_8731 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1915)
																														== ((long) 61)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_8731 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														bool_t
																															BgL_testz00_8750;
																														if (((long)
																																(BgL_currentzd2charzd2_1915)
																																>= ((long) 65)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_8750
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1915)
																																	<
																																	((long) 91));
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_8750
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_8750)
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_8731
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																if (
																																	((long)
																																		(BgL_currentzd2charzd2_1915)
																																		==
																																		((long)
																																			95)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_8731
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		bool_t
																																			BgL_testz00_8759;
																																		if (((long)
																																				(BgL_currentzd2charzd2_1915)
																																				>=
																																				((long)
																																					97)))
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_8759
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_1915)
																																					<
																																					((long) 123));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_8759
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_8759)
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_8731
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_1915) == ((long) 124)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_8731
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_8731
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1915)
																																							==
																																							((long) 126));
																					}}}}}}}}}
																					if (BgL_testz00_8731)
																						{
																							long BgL_lastzd2matchzd2_8771;

																							obj_t BgL_inputzd2portzd2_8770;

																							BgL_inputzd2portzd2_8770 =
																								BgL_inputzd2portzd2_1911;
																							BgL_lastzd2matchzd2_8771 =
																								BgL_newzd2matchzd2_1914;
																							BgL_lastzd2matchzd2_1519 =
																								BgL_lastzd2matchzd2_8771;
																							BgL_inputzd2portzd2_1518 =
																								BgL_inputzd2portzd2_8770;
																							goto
																								BgL_zc3anonymousza32430ze3z83_1520;
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							BgL_matchz00_2108 =
																								BgL_newzd2matchzd2_1914;
																						}
																				}
																		}
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/url.scm 104 */
											if (((long) (BgL_currentzd2charzd2_1455) == ((long) 60)))
												{	/* Unsafe/url.scm 104 */
													BgL_inputzd2portzd2_1481 = BgL_inputzd2portzd2_1452;
													BgL_lastzd2matchzd2_1482 = BgL_lastzd2matchzd2_1453;
												BgL_zc3anonymousza32403ze3z83_1483:
													{	/* Unsafe/url.scm 104 */
														long BgL_newzd2matchzd2_1484;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1481);
														BgL_newzd2matchzd2_1484 = ((long) 2);
														{	/* Unsafe/url.scm 104 */
															int BgL_currentzd2charzd2_1485;

															BgL_currentzd2charzd2_1485 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1481);
															if (
																((long) (BgL_currentzd2charzd2_1485) ==
																	((long) 0)))
																{	/* Unsafe/url.scm 104 */
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_1481))
																		{	/* Unsafe/url.scm 104 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_1481))
																				{

																					goto
																						BgL_zc3anonymousza32403ze3z83_1483;
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					BgL_matchz00_2108 =
																						BgL_newzd2matchzd2_1484;
																				}
																		}
																	else
																		{
																			long BgL_lastzd2matchzd2_8785;

																			obj_t BgL_inputzd2portzd2_8784;

																			BgL_inputzd2portzd2_8784 =
																				BgL_inputzd2portzd2_1481;
																			BgL_lastzd2matchzd2_8785 =
																				BgL_newzd2matchzd2_1484;
																			BgL_lastzd2matchzd2_1981 =
																				BgL_lastzd2matchzd2_8785;
																			BgL_inputzd2portzd2_1980 =
																				BgL_inputzd2portzd2_8784;
																			goto BgL_zc3anonymousza32786ze3z83_1982;
																		}
																}
															else
																{	/* Unsafe/url.scm 104 */
																	if (
																		((long) (BgL_currentzd2charzd2_1485) ==
																			((long) 62)))
																		{	/* Unsafe/url.scm 104 */
																			BgL_inputzd2portzd2_1625 =
																				BgL_inputzd2portzd2_1481;
																			BgL_lastzd2matchzd2_1626 =
																				BgL_newzd2matchzd2_1484;
																		BgL_zc3anonymousza32519ze3z83_1627:
																			{	/* Unsafe/url.scm 104 */
																				long BgL_newzd2matchzd2_1628;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1625);
																				BgL_newzd2matchzd2_1628 = ((long) 2);
																				{	/* Unsafe/url.scm 104 */
																					int BgL_currentzd2charzd2_1629;

																					BgL_currentzd2charzd2_1629 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1625);
																					if (((long)
																							(BgL_currentzd2charzd2_1629) ==
																							((long) 0)))
																						{	/* Unsafe/url.scm 104 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_1625))
																								{	/* Unsafe/url.scm 104 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_1625))
																										{

																											goto
																												BgL_zc3anonymousza32519ze3z83_1627;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											BgL_matchz00_2108 =
																												BgL_newzd2matchzd2_1628;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_8799;

																									obj_t
																										BgL_inputzd2portzd2_8798;
																									BgL_inputzd2portzd2_8798 =
																										BgL_inputzd2portzd2_1625;
																									BgL_lastzd2matchzd2_8799 =
																										BgL_newzd2matchzd2_1628;
																									BgL_lastzd2matchzd2_1981 =
																										BgL_lastzd2matchzd2_8799;
																									BgL_inputzd2portzd2_1980 =
																										BgL_inputzd2portzd2_8798;
																									goto
																										BgL_zc3anonymousza32786ze3z83_1982;
																								}
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1629)
																									== ((long) 58)))
																								{	/* Unsafe/url.scm 104 */
																									long BgL_newzd2matchzd2_4818;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_1625);
																									BgL_newzd2matchzd2_4818 =
																										((long) 1);
																									BgL_matchz00_2108 =
																										BgL_newzd2matchzd2_4818;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1629)
																											== ((long) 32)))
																										{	/* Unsafe/url.scm 104 */
																											BgL_inputzd2portzd2_1596 =
																												BgL_inputzd2portzd2_1625;
																											BgL_lastzd2matchzd2_1597 =
																												BgL_newzd2matchzd2_1628;
																										BgL_zc3anonymousza32494ze3z83_1598:
																											{	/* Unsafe/url.scm 104 */
																												long
																													BgL_newzd2matchzd2_1599;
																												RGC_STOP_MATCH
																													(BgL_inputzd2portzd2_1596);
																												BgL_newzd2matchzd2_1599
																													= ((long) 2);
																												{	/* Unsafe/url.scm 104 */
																													int
																														BgL_currentzd2charzd2_1600;
																													BgL_currentzd2charzd2_1600
																														=
																														RGC_BUFFER_GET_CHAR
																														(BgL_inputzd2portzd2_1596);
																													if (((long)
																															(BgL_currentzd2charzd2_1600)
																															== ((long) 0)))
																														{	/* Unsafe/url.scm 104 */
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1596))
																																{	/* Unsafe/url.scm 104 */
																																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1596))
																																		{

																																			goto
																																				BgL_zc3anonymousza32494ze3z83_1598;
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_matchz00_2108
																																				=
																																				BgL_newzd2matchzd2_1599;
																																		}
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_8817;
																																	obj_t
																																		BgL_inputzd2portzd2_8816;
																																	BgL_inputzd2portzd2_8816
																																		=
																																		BgL_inputzd2portzd2_1596;
																																	BgL_lastzd2matchzd2_8817
																																		=
																																		BgL_newzd2matchzd2_1599;
																																	BgL_lastzd2matchzd2_1981
																																		=
																																		BgL_lastzd2matchzd2_8817;
																																	BgL_inputzd2portzd2_1980
																																		=
																																		BgL_inputzd2portzd2_8816;
																																	goto
																																		BgL_zc3anonymousza32786ze3z83_1982;
																																}
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1600)
																																	==
																																	((long) 64)))
																																{
																																	long
																																		BgL_lastzd2matchzd2_8822;
																																	obj_t
																																		BgL_inputzd2portzd2_8821;
																																	BgL_inputzd2portzd2_8821
																																		=
																																		BgL_inputzd2portzd2_1596;
																																	BgL_lastzd2matchzd2_8822
																																		=
																																		BgL_newzd2matchzd2_1599;
																																	BgL_lastzd2matchzd2_1541
																																		=
																																		BgL_lastzd2matchzd2_8822;
																																	BgL_inputzd2portzd2_1540
																																		=
																																		BgL_inputzd2portzd2_8821;
																																	goto
																																		BgL_zc3anonymousza32449ze3z83_1542;
																																}
																															else
																																{	/* Unsafe/url.scm 104 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1600)
																																			==
																																			((long)
																																				60)))
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_inputzd2portzd2_1681
																																				=
																																				BgL_inputzd2portzd2_1596;
																																			BgL_lastzd2matchzd2_1682
																																				=
																																				BgL_newzd2matchzd2_1599;
																																		BgL_zc3anonymousza32554ze3z83_1683:
																																			{	/* Unsafe/url.scm 104 */
																																				long
																																					BgL_newzd2matchzd2_1684;
																																				RGC_STOP_MATCH
																																					(BgL_inputzd2portzd2_1681);
																																				BgL_newzd2matchzd2_1684
																																					=
																																					(
																																					(long)
																																					2);
																																				{	/* Unsafe/url.scm 104 */
																																					int
																																						BgL_currentzd2charzd2_1685;
																																					BgL_currentzd2charzd2_1685
																																						=
																																						RGC_BUFFER_GET_CHAR
																																						(BgL_inputzd2portzd2_1681);
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_1685)
																																							==
																																							((long) 0)))
																																						{	/* Unsafe/url.scm 104 */
																																							if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1681))
																																								{	/* Unsafe/url.scm 104 */
																																									if (rgc_fill_buffer(BgL_inputzd2portzd2_1681))
																																										{

																																											goto
																																												BgL_zc3anonymousza32554ze3z83_1683;
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_matchz00_2108
																																												=
																																												BgL_newzd2matchzd2_1684;
																																										}
																																								}
																																							else
																																								{
																																									long
																																										BgL_lastzd2matchzd2_8836;
																																									obj_t
																																										BgL_inputzd2portzd2_8835;
																																									BgL_inputzd2portzd2_8835
																																										=
																																										BgL_inputzd2portzd2_1681;
																																									BgL_lastzd2matchzd2_8836
																																										=
																																										BgL_newzd2matchzd2_1684;
																																									BgL_lastzd2matchzd2_1981
																																										=
																																										BgL_lastzd2matchzd2_8836;
																																									BgL_inputzd2portzd2_1980
																																										=
																																										BgL_inputzd2portzd2_8835;
																																									goto
																																										BgL_zc3anonymousza32786ze3z83_1982;
																																								}
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							if (((long) (BgL_currentzd2charzd2_1685) == ((long) 62)))
																																								{
																																									long
																																										BgL_lastzd2matchzd2_8841;
																																									obj_t
																																										BgL_inputzd2portzd2_8840;
																																									BgL_inputzd2portzd2_8840
																																										=
																																										BgL_inputzd2portzd2_1681;
																																									BgL_lastzd2matchzd2_8841
																																										=
																																										BgL_newzd2matchzd2_1684;
																																									BgL_lastzd2matchzd2_1626
																																										=
																																										BgL_lastzd2matchzd2_8841;
																																									BgL_inputzd2portzd2_1625
																																										=
																																										BgL_inputzd2portzd2_8840;
																																									goto
																																										BgL_zc3anonymousza32519ze3z83_1627;
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									if (((long) (BgL_currentzd2charzd2_1685) == ((long) 58)))
																																										{	/* Unsafe/url.scm 104 */
																																											long
																																												BgL_newzd2matchzd2_4900;
																																											RGC_STOP_MATCH
																																												(BgL_inputzd2portzd2_1681);
																																											BgL_newzd2matchzd2_4900
																																												=
																																												(
																																												(long)
																																												1);
																																											BgL_matchz00_2108
																																												=
																																												BgL_newzd2matchzd2_4900;
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											bool_t
																																												BgL_testz00_8846;
																																											switch
																																												(
																																												(long)
																																												(BgL_currentzd2charzd2_1685))
																																												{
																																												case ((long) 47):

																																													BgL_testz00_8846 = ((bool_t) 1);
																																													break;
																																												case ((long) 58):

																																													BgL_testz00_8846 = ((bool_t) 1);
																																													break;
																																												case ((long) 62):

																																													BgL_testz00_8846 = ((bool_t) 1);
																																													break;
																																												default:
																																													BgL_testz00_8846 = ((long) (BgL_currentzd2charzd2_1685) == ((long) 64));
																																												}
																																											if (BgL_testz00_8846)
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_matchz00_2108
																																														=
																																														BgL_newzd2matchzd2_1684;
																																												}
																																											else
																																												{
																																													long
																																														BgL_lastzd2matchzd2_8852;
																																													obj_t
																																														BgL_inputzd2portzd2_8851;
																																													BgL_inputzd2portzd2_8851
																																														=
																																														BgL_inputzd2portzd2_1681;
																																													BgL_lastzd2matchzd2_8852
																																														=
																																														BgL_newzd2matchzd2_1684;
																																													BgL_lastzd2matchzd2_1981
																																														=
																																														BgL_lastzd2matchzd2_8852;
																																													BgL_inputzd2portzd2_1980
																																														=
																																														BgL_inputzd2portzd2_8851;
																																													goto
																																														BgL_zc3anonymousza32786ze3z83_1982;
																																												}
																																										}
																																								}
																																						}
																																				}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1600)
																																					==
																																					((long) 58)))
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_inputzd2portzd2_1495
																																						=
																																						BgL_inputzd2portzd2_1596;
																																					BgL_lastzd2matchzd2_1496
																																						=
																																						BgL_newzd2matchzd2_1599;
																																				BgL_zc3anonymousza32411ze3z83_1497:
																																					{	/* Unsafe/url.scm 104 */
																																						long
																																							BgL_newzd2matchzd2_1498;
																																						RGC_STOP_MATCH
																																							(BgL_inputzd2portzd2_1495);
																																						BgL_newzd2matchzd2_1498
																																							=
																																							(
																																							(long)
																																							1);
																																						{	/* Unsafe/url.scm 104 */
																																							int
																																								BgL_currentzd2charzd2_1499;
																																							BgL_currentzd2charzd2_1499
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_inputzd2portzd2_1495);
																																							if (((long) (BgL_currentzd2charzd2_1499) == ((long) 0)))
																																								{	/* Unsafe/url.scm 104 */
																																									bool_t
																																										BgL_testz00_8861;
																																									{	/* Unsafe/url.scm 104 */
																																										bool_t
																																											BgL_res4036z00_4596;
																																										{	/* Unsafe/url.scm 104 */
																																											obj_t
																																												BgL_inputzd2portzd2_4592;
																																											BgL_inputzd2portzd2_4592
																																												=
																																												BgL_inputzd2portzd2_1495;
																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4592))
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_res4036z00_4596
																																														=
																																														rgc_fill_buffer
																																														(BgL_inputzd2portzd2_4592);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_res4036z00_4596
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																										BgL_testz00_8861
																																											=
																																											BgL_res4036z00_4596;
																																									}
																																									if (BgL_testz00_8861)
																																										{

																																											goto
																																												BgL_zc3anonymousza32411ze3z83_1497;
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_matchz00_2108
																																												=
																																												BgL_newzd2matchzd2_1498;
																																										}
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									if (((long) (BgL_currentzd2charzd2_1499) == ((long) 64)))
																																										{
																																											long
																																												BgL_lastzd2matchzd2_8869;
																																											obj_t
																																												BgL_inputzd2portzd2_8868;
																																											BgL_inputzd2portzd2_8868
																																												=
																																												BgL_inputzd2portzd2_1495;
																																											BgL_lastzd2matchzd2_8869
																																												=
																																												BgL_newzd2matchzd2_1498;
																																											BgL_lastzd2matchzd2_1541
																																												=
																																												BgL_lastzd2matchzd2_8869;
																																											BgL_inputzd2portzd2_1540
																																												=
																																												BgL_inputzd2portzd2_8868;
																																											goto
																																												BgL_zc3anonymousza32449ze3z83_1542;
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											if (((long) (BgL_currentzd2charzd2_1499) == ((long) 60)))
																																												{
																																													long
																																														BgL_lastzd2matchzd2_8874;
																																													obj_t
																																														BgL_inputzd2portzd2_8873;
																																													BgL_inputzd2portzd2_8873
																																														=
																																														BgL_inputzd2portzd2_1495;
																																													BgL_lastzd2matchzd2_8874
																																														=
																																														BgL_newzd2matchzd2_1498;
																																													BgL_lastzd2matchzd2_1675
																																														=
																																														BgL_lastzd2matchzd2_8874;
																																													BgL_inputzd2portzd2_1674
																																														=
																																														BgL_inputzd2portzd2_8873;
																																													goto
																																														BgL_zc3anonymousza32550ze3z83_1676;
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													if (((long) (BgL_currentzd2charzd2_1499) == ((long) 37)))
																																														{
																																															long
																																																BgL_lastzd2matchzd2_8879;
																																															obj_t
																																																BgL_inputzd2portzd2_8878;
																																															BgL_inputzd2portzd2_8878
																																																=
																																																BgL_inputzd2portzd2_1495;
																																															BgL_lastzd2matchzd2_8879
																																																=
																																																BgL_newzd2matchzd2_1498;
																																															BgL_lastzd2matchzd2_1969
																																																=
																																																BgL_lastzd2matchzd2_8879;
																																															BgL_inputzd2portzd2_1968
																																																=
																																																BgL_inputzd2portzd2_8878;
																																															goto
																																																BgL_zc3anonymousza32778ze3z83_1970;
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															bool_t
																																																BgL_testz00_8880;
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_testz00_8881;
																																																if (((long) (BgL_currentzd2charzd2_1499) == ((long) 33)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8881
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8881
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_1499)
																																																			==
																																																			((long) 32));
																																																	}
																																																if (BgL_testz00_8881)
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8880
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		if (((long) (BgL_currentzd2charzd2_1499) == ((long) 36)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8880
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				bool_t
																																																					BgL_testz00_8890;
																																																				if (((long) (BgL_currentzd2charzd2_1499) >= ((long) 38)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8890
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1499)
																																																							<
																																																							((long) 60));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8890
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_8890)
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8880
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						if (((long) (BgL_currentzd2charzd2_1499) == ((long) 61)))
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_8880
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								bool_t
																																																									BgL_testz00_8899;
																																																								if (((long) (BgL_currentzd2charzd2_1499) >= ((long) 65)))
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8899
																																																											=
																																																											(
																																																											(long)
																																																											(BgL_currentzd2charzd2_1499)
																																																											<
																																																											((long) 91));
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8899
																																																											=
																																																											(
																																																											(bool_t)
																																																											0);
																																																									}
																																																								if (BgL_testz00_8899)
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8880
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										if (((long) (BgL_currentzd2charzd2_1499) == ((long) 95)))
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8880
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												bool_t
																																																													BgL_testz00_8908;
																																																												if (((long) (BgL_currentzd2charzd2_1499) >= ((long) 97)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8908
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1499)
																																																															<
																																																															((long) 123));
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8908
																																																															=
																																																															(
																																																															(bool_t)
																																																															0);
																																																													}
																																																												if (BgL_testz00_8908)
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8880
																																																															=
																																																															(
																																																															(bool_t)
																																																															1);
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														if (((long) (BgL_currentzd2charzd2_1499) == ((long) 124)))
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_8880
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	1);
																																																															}
																																																														else
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_8880
																																																																	=
																																																																	(
																																																																	(long)
																																																																	(BgL_currentzd2charzd2_1499)
																																																																	==
																																																																	((long) 126));
																																															}}}}}}}}}
																																															if (BgL_testz00_8880)
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_8920;
																																																	obj_t
																																																		BgL_inputzd2portzd2_8919;
																																																	BgL_inputzd2portzd2_8919
																																																		=
																																																		BgL_inputzd2portzd2_1495;
																																																	BgL_lastzd2matchzd2_8920
																																																		=
																																																		BgL_newzd2matchzd2_1498;
																																																	BgL_lastzd2matchzd2_1519
																																																		=
																																																		BgL_lastzd2matchzd2_8920;
																																																	BgL_inputzd2portzd2_1518
																																																		=
																																																		BgL_inputzd2portzd2_8919;
																																																	goto
																																																		BgL_zc3anonymousza32430ze3z83_1520;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_matchz00_2108
																																																		=
																																																		BgL_newzd2matchzd2_1498;
																																																}
																																														}
																																												}
																																										}
																																								}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					if (
																																						((long) (BgL_currentzd2charzd2_1600) == ((long) 47)))
																																						{
																																							long
																																								BgL_lastzd2matchzd2_8925;
																																							obj_t
																																								BgL_inputzd2portzd2_8924;
																																							BgL_inputzd2portzd2_8924
																																								=
																																								BgL_inputzd2portzd2_1596;
																																							BgL_lastzd2matchzd2_8925
																																								=
																																								BgL_newzd2matchzd2_1599;
																																							BgL_lastzd2matchzd2_1519
																																								=
																																								BgL_lastzd2matchzd2_8925;
																																							BgL_inputzd2portzd2_1518
																																								=
																																								BgL_inputzd2portzd2_8924;
																																							goto
																																								BgL_zc3anonymousza32430ze3z83_1520;
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							if (((long) (BgL_currentzd2charzd2_1600) == ((long) 37)))
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_inputzd2portzd2_1841
																																										=
																																										BgL_inputzd2portzd2_1596;
																																									BgL_lastzd2matchzd2_1842
																																										=
																																										BgL_newzd2matchzd2_1599;
																																								BgL_zc3anonymousza32687ze3z83_1843:
																																									{	/* Unsafe/url.scm 104 */
																																										long
																																											BgL_newzd2matchzd2_1844;
																																										RGC_STOP_MATCH
																																											(BgL_inputzd2portzd2_1841);
																																										BgL_newzd2matchzd2_1844
																																											=
																																											(
																																											(long)
																																											2);
																																										{	/* Unsafe/url.scm 104 */
																																											int
																																												BgL_currentzd2charzd2_1845;
																																											BgL_currentzd2charzd2_1845
																																												=
																																												RGC_BUFFER_GET_CHAR
																																												(BgL_inputzd2portzd2_1841);
																																											if (((long) (BgL_currentzd2charzd2_1845) == ((long) 0)))
																																												{	/* Unsafe/url.scm 104 */
																																													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1841))
																																														{	/* Unsafe/url.scm 104 */
																																															if (rgc_fill_buffer(BgL_inputzd2portzd2_1841))
																																																{

																																																	goto
																																																		BgL_zc3anonymousza32687ze3z83_1843;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_matchz00_2108
																																																		=
																																																		BgL_newzd2matchzd2_1844;
																																																}
																																														}
																																													else
																																														{
																																															long
																																																BgL_lastzd2matchzd2_8939;
																																															obj_t
																																																BgL_inputzd2portzd2_8938;
																																															BgL_inputzd2portzd2_8938
																																																=
																																																BgL_inputzd2portzd2_1841;
																																															BgL_lastzd2matchzd2_8939
																																																=
																																																BgL_newzd2matchzd2_1844;
																																															BgL_lastzd2matchzd2_1981
																																																=
																																																BgL_lastzd2matchzd2_8939;
																																															BgL_inputzd2portzd2_1980
																																																=
																																																BgL_inputzd2portzd2_8938;
																																															goto
																																																BgL_zc3anonymousza32786ze3z83_1982;
																																														}
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													if (((long) (BgL_currentzd2charzd2_1845) == ((long) 58)))
																																														{	/* Unsafe/url.scm 104 */
																																															long
																																																BgL_newzd2matchzd2_5166;
																																															RGC_STOP_MATCH
																																																(BgL_inputzd2portzd2_1841);
																																															BgL_newzd2matchzd2_5166
																																																=
																																																(
																																																(long)
																																																1);
																																															BgL_matchz00_2108
																																																=
																																																BgL_newzd2matchzd2_5166;
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															bool_t
																																																BgL_testz00_8944;
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_testz00_8945;
																																																if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 48)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8945
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_1845)
																																																			<
																																																			((long) 58));
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8945
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_8945)
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_8944
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		bool_t
																																																			BgL_testz00_8951;
																																																		if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 65)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8951
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1845)
																																																					<
																																																					((long) 71));
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8951
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_8951)
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_8944
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 97)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8944
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1845)
																																																							<
																																																							((long) 103));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_8944
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																	}
																																															}
																																															if (BgL_testz00_8944)
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_inputzd2portzd2_1947
																																																		=
																																																		BgL_inputzd2portzd2_1841;
																																																	BgL_lastzd2matchzd2_1948
																																																		=
																																																		BgL_newzd2matchzd2_1844;
																																																BgL_zc3anonymousza32763ze3z83_1949:
																																																	{	/* Unsafe/url.scm 104 */
																																																		long
																																																			BgL_newzd2matchzd2_1950;
																																																		RGC_STOP_MATCH
																																																			(BgL_inputzd2portzd2_1947);
																																																		BgL_newzd2matchzd2_1950
																																																			=
																																																			(
																																																			(long)
																																																			2);
																																																		{	/* Unsafe/url.scm 104 */
																																																			int
																																																				BgL_currentzd2charzd2_1951;
																																																			BgL_currentzd2charzd2_1951
																																																				=
																																																				RGC_BUFFER_GET_CHAR
																																																				(BgL_inputzd2portzd2_1947);
																																																			if (((long) (BgL_currentzd2charzd2_1951) == ((long) 0)))
																																																				{	/* Unsafe/url.scm 104 */
																																																					if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1947))
																																																						{	/* Unsafe/url.scm 104 */
																																																							if (rgc_fill_buffer(BgL_inputzd2portzd2_1947))
																																																								{

																																																									goto
																																																										BgL_zc3anonymousza32763ze3z83_1949;
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									BgL_matchz00_2108
																																																										=
																																																										BgL_newzd2matchzd2_1950;
																																																								}
																																																						}
																																																					else
																																																						{
																																																							long
																																																								BgL_lastzd2matchzd2_8972;
																																																							obj_t
																																																								BgL_inputzd2portzd2_8971;
																																																							BgL_inputzd2portzd2_8971
																																																								=
																																																								BgL_inputzd2portzd2_1947;
																																																							BgL_lastzd2matchzd2_8972
																																																								=
																																																								BgL_newzd2matchzd2_1950;
																																																							BgL_lastzd2matchzd2_1981
																																																								=
																																																								BgL_lastzd2matchzd2_8972;
																																																							BgL_inputzd2portzd2_1980
																																																								=
																																																								BgL_inputzd2portzd2_8971;
																																																							goto
																																																								BgL_zc3anonymousza32786ze3z83_1982;
																																																						}
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 104 */
																																																					if (((long) (BgL_currentzd2charzd2_1951) == ((long) 58)))
																																																						{	/* Unsafe/url.scm 104 */
																																																							long
																																																								BgL_newzd2matchzd2_5336;
																																																							RGC_STOP_MATCH
																																																								(BgL_inputzd2portzd2_1947);
																																																							BgL_newzd2matchzd2_5336
																																																								=
																																																								(
																																																								(long)
																																																								1);
																																																							BgL_matchz00_2108
																																																								=
																																																								BgL_newzd2matchzd2_5336;
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							bool_t
																																																								BgL_testz00_8977;
																																																							{	/* Unsafe/url.scm 104 */
																																																								bool_t
																																																									BgL_testz00_8978;
																																																								if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 48)))
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8978
																																																											=
																																																											(
																																																											(long)
																																																											(BgL_currentzd2charzd2_1951)
																																																											<
																																																											((long) 58));
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8978
																																																											=
																																																											(
																																																											(bool_t)
																																																											0);
																																																									}
																																																								if (BgL_testz00_8978)
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_8977
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										bool_t
																																																											BgL_testz00_8984;
																																																										if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 65)))
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8984
																																																													=
																																																													(
																																																													(long)
																																																													(BgL_currentzd2charzd2_1951)
																																																													<
																																																													((long) 71));
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8984
																																																													=
																																																													(
																																																													(bool_t)
																																																													0);
																																																											}
																																																										if (BgL_testz00_8984)
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8977
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 97)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8977
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1951)
																																																															<
																																																															((long) 103));
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8977
																																																															=
																																																															(
																																																															(bool_t)
																																																															0);
																																																													}
																																																											}
																																																									}
																																																							}
																																																							if (BgL_testz00_8977)
																																																								{
																																																									long
																																																										BgL_lastzd2matchzd2_8996;
																																																									obj_t
																																																										BgL_inputzd2portzd2_8995;
																																																									BgL_inputzd2portzd2_8995
																																																										=
																																																										BgL_inputzd2portzd2_1947;
																																																									BgL_lastzd2matchzd2_8996
																																																										=
																																																										BgL_newzd2matchzd2_1950;
																																																									BgL_lastzd2matchzd2_1597
																																																										=
																																																										BgL_lastzd2matchzd2_8996;
																																																									BgL_inputzd2portzd2_1596
																																																										=
																																																										BgL_inputzd2portzd2_8995;
																																																									goto
																																																										BgL_zc3anonymousza32494ze3z83_1598;
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									bool_t
																																																										BgL_testz00_8997;
																																																									{	/* Unsafe/url.scm 104 */
																																																										bool_t
																																																											BgL_testz00_8998;
																																																										if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 47)))
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8998
																																																													=
																																																													(
																																																													(long)
																																																													(BgL_currentzd2charzd2_1951)
																																																													<
																																																													((long) 59));
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8998
																																																													=
																																																													(
																																																													(bool_t)
																																																													0);
																																																											}
																																																										if (BgL_testz00_8998)
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_8997
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												bool_t
																																																													BgL_testz00_9004;
																																																												if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 64)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9004
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1951)
																																																															<
																																																															((long) 71));
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9004
																																																															=
																																																															(
																																																															(bool_t)
																																																															0);
																																																													}
																																																												if (BgL_testz00_9004)
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_8997
																																																															=
																																																															(
																																																															(bool_t)
																																																															1);
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														if (((long) (BgL_currentzd2charzd2_1951) >= ((long) 97)))
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_8997
																																																																	=
																																																																	(
																																																																	(long)
																																																																	(BgL_currentzd2charzd2_1951)
																																																																	<
																																																																	((long) 103));
																																																															}
																																																														else
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_8997
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	0);
																																																															}
																																																													}
																																																											}
																																																									}
																																																									if (BgL_testz00_8997)
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_matchz00_2108
																																																												=
																																																												BgL_newzd2matchzd2_1950;
																																																										}
																																																									else
																																																										{
																																																											long
																																																												BgL_lastzd2matchzd2_9016;
																																																											obj_t
																																																												BgL_inputzd2portzd2_9015;
																																																											BgL_inputzd2portzd2_9015
																																																												=
																																																												BgL_inputzd2portzd2_1947;
																																																											BgL_lastzd2matchzd2_9016
																																																												=
																																																												BgL_newzd2matchzd2_1950;
																																																											BgL_lastzd2matchzd2_1981
																																																												=
																																																												BgL_lastzd2matchzd2_9016;
																																																											BgL_inputzd2portzd2_1980
																																																												=
																																																												BgL_inputzd2portzd2_9015;
																																																											goto
																																																												BgL_zc3anonymousza32786ze3z83_1982;
																																																										}
																																																								}
																																																						}
																																																				}
																																																		}
																																																	}
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	bool_t
																																																		BgL_testz00_9017;
																																																	{	/* Unsafe/url.scm 104 */
																																																		bool_t
																																																			BgL_testz00_9018;
																																																		if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 47)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9018
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1845)
																																																					<
																																																					((long) 59));
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9018
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_9018)
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9017
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				bool_t
																																																					BgL_testz00_9024;
																																																				if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 64)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9024
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1845)
																																																							<
																																																							((long) 71));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9024
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_9024)
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9017
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						if (((long) (BgL_currentzd2charzd2_1845) >= ((long) 97)))
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9017
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_1845)
																																																									<
																																																									((long) 103));
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9017
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																					}
																																																			}
																																																	}
																																																	if (BgL_testz00_9017)
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_matchz00_2108
																																																				=
																																																				BgL_newzd2matchzd2_1844;
																																																		}
																																																	else
																																																		{
																																																			long
																																																				BgL_lastzd2matchzd2_9036;
																																																			obj_t
																																																				BgL_inputzd2portzd2_9035;
																																																			BgL_inputzd2portzd2_9035
																																																				=
																																																				BgL_inputzd2portzd2_1841;
																																																			BgL_lastzd2matchzd2_9036
																																																				=
																																																				BgL_newzd2matchzd2_1844;
																																																			BgL_lastzd2matchzd2_1981
																																																				=
																																																				BgL_lastzd2matchzd2_9036;
																																																			BgL_inputzd2portzd2_1980
																																																				=
																																																				BgL_inputzd2portzd2_9035;
																																																			goto
																																																				BgL_zc3anonymousza32786ze3z83_1982;
																																																		}
																																																}
																																														}
																																												}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									bool_t
																																										BgL_testz00_9037;
																																									{	/* Unsafe/url.scm 104 */
																																										bool_t
																																											BgL_testz00_9038;
																																										if (((long) (BgL_currentzd2charzd2_1600) == ((long) 33)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9038
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9038
																																													=
																																													(
																																													(long)
																																													(BgL_currentzd2charzd2_1600)
																																													==
																																													((long) 32));
																																											}
																																										if (BgL_testz00_9038)
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9037
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												if (((long) (BgL_currentzd2charzd2_1600) == ((long) 36)))
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9037
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														bool_t
																																															BgL_testz00_9047;
																																														if (((long) (BgL_currentzd2charzd2_1600) >= ((long) 38)))
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9047
																																																	=
																																																	(
																																																	(long)
																																																	(BgL_currentzd2charzd2_1600)
																																																	<
																																																	((long) 47));
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9047
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														if (BgL_testz00_9047)
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9037
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_testz00_9053;
																																																if (((long) (BgL_currentzd2charzd2_1600) >= ((long) 48)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9053
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_1600)
																																																			<
																																																			((long) 58));
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9053
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_9053)
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9037
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		if (((long) (BgL_currentzd2charzd2_1600) == ((long) 59)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9037
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				if (((long) (BgL_currentzd2charzd2_1600) == ((long) 61)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9037
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						bool_t
																																																							BgL_testz00_9065;
																																																						if (((long) (BgL_currentzd2charzd2_1600) >= ((long) 65)))
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9065
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_1600)
																																																									<
																																																									((long) 91));
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9065
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																						if (BgL_testz00_9065)
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9037
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								if (((long) (BgL_currentzd2charzd2_1600) == ((long) 95)))
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_9037
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										bool_t
																																																											BgL_testz00_9074;
																																																										if (((long) (BgL_currentzd2charzd2_1600) >= ((long) 97)))
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_9074
																																																													=
																																																													(
																																																													(long)
																																																													(BgL_currentzd2charzd2_1600)
																																																													<
																																																													((long) 123));
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_9074
																																																													=
																																																													(
																																																													(bool_t)
																																																													0);
																																																											}
																																																										if (BgL_testz00_9074)
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_9037
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												if (((long) (BgL_currentzd2charzd2_1600) == ((long) 124)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9037
																																																															=
																																																															(
																																																															(bool_t)
																																																															1);
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9037
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1600)
																																																															==
																																																															((long) 126));
																																									}}}}}}}}}}}
																																									if (BgL_testz00_9037)
																																										{
																																											long
																																												BgL_lastzd2matchzd2_9085;
																																											BgL_lastzd2matchzd2_9085
																																												=
																																												BgL_newzd2matchzd2_1599;
																																											BgL_lastzd2matchzd2_1597
																																												=
																																												BgL_lastzd2matchzd2_9085;
																																											goto
																																												BgL_zc3anonymousza32494ze3z83_1598;
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_9087;
																																											obj_t
																																												BgL_inputzd2portzd2_9086;
																																											BgL_inputzd2portzd2_9086
																																												=
																																												BgL_inputzd2portzd2_1596;
																																											BgL_lastzd2matchzd2_9087
																																												=
																																												BgL_newzd2matchzd2_1599;
																																											BgL_lastzd2matchzd2_1981
																																												=
																																												BgL_lastzd2matchzd2_9087;
																																											BgL_inputzd2portzd2_1980
																																												=
																																												BgL_inputzd2portzd2_9086;
																																											goto
																																												BgL_zc3anonymousza32786ze3z83_1982;
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
																										{	/* Unsafe/url.scm 104 */
																											bool_t BgL_testz00_9088;

																											switch (
																												(long)
																												(BgL_currentzd2charzd2_1629))
																												{
																												case ((long) 32):

																													BgL_testz00_9088 =
																														((bool_t) 1);
																													break;
																												case ((long) 47):

																													BgL_testz00_9088 =
																														((bool_t) 1);
																													break;
																												case ((long) 58):

																													BgL_testz00_9088 =
																														((bool_t) 1);
																													break;
																												default:
																													BgL_testz00_9088 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_1629)
																														== ((long) 64));
																												}
																											if (BgL_testz00_9088)
																												{	/* Unsafe/url.scm 104 */
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_1628;
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9094;
																													obj_t
																														BgL_inputzd2portzd2_9093;
																													BgL_inputzd2portzd2_9093
																														=
																														BgL_inputzd2portzd2_1625;
																													BgL_lastzd2matchzd2_9094
																														=
																														BgL_newzd2matchzd2_1628;
																													BgL_lastzd2matchzd2_1981
																														=
																														BgL_lastzd2matchzd2_9094;
																													BgL_inputzd2portzd2_1980
																														=
																														BgL_inputzd2portzd2_9093;
																													goto
																														BgL_zc3anonymousza32786ze3z83_1982;
																												}
																										}
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			if (
																				((long) (BgL_currentzd2charzd2_1485) ==
																					((long) 58)))
																				{	/* Unsafe/url.scm 104 */
																					long BgL_newzd2matchzd2_4580;

																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_1481);
																					BgL_newzd2matchzd2_4580 = ((long) 1);
																					BgL_matchz00_2108 =
																						BgL_newzd2matchzd2_4580;
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					bool_t BgL_testz00_9099;

																					switch (
																						(long) (BgL_currentzd2charzd2_1485))
																						{
																						case ((long) 47):

																							BgL_testz00_9099 = ((bool_t) 1);
																							break;
																						case ((long) 58):

																							BgL_testz00_9099 = ((bool_t) 1);
																							break;
																						case ((long) 62):

																							BgL_testz00_9099 = ((bool_t) 1);
																							break;
																						default:
																							BgL_testz00_9099 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1485) ==
																								((long) 64));
																						}
																					if (BgL_testz00_9099)
																						{	/* Unsafe/url.scm 104 */
																							BgL_matchz00_2108 =
																								BgL_newzd2matchzd2_1484;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_9105;

																							obj_t BgL_inputzd2portzd2_9104;

																							BgL_inputzd2portzd2_9104 =
																								BgL_inputzd2portzd2_1481;
																							BgL_lastzd2matchzd2_9105 =
																								BgL_newzd2matchzd2_1484;
																							BgL_lastzd2matchzd2_1981 =
																								BgL_lastzd2matchzd2_9105;
																							BgL_inputzd2portzd2_1980 =
																								BgL_inputzd2portzd2_9104;
																							goto
																								BgL_zc3anonymousza32786ze3z83_1982;
																						}
																				}
																		}
																}
														}
													}
												}
											else
												{	/* Unsafe/url.scm 104 */
													if (
														((long) (BgL_currentzd2charzd2_1455) ==
															((long) 58)))
														{	/* Unsafe/url.scm 104 */
															BgL_inputzd2portzd2_1888 =
																BgL_inputzd2portzd2_1452;
															BgL_lastzd2matchzd2_1889 =
																BgL_lastzd2matchzd2_1453;
														BgL_zc3anonymousza32718ze3z83_1890:
															{	/* Unsafe/url.scm 104 */
																long BgL_newzd2matchzd2_1891;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1888);
																BgL_newzd2matchzd2_1891 = ((long) 5);
																{	/* Unsafe/url.scm 104 */
																	int BgL_currentzd2charzd2_1892;

																	BgL_currentzd2charzd2_1892 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_1888);
																	if (((long) (BgL_currentzd2charzd2_1892) ==
																			((long) 0)))
																		{	/* Unsafe/url.scm 104 */
																			bool_t BgL_testz00_9114;

																			{	/* Unsafe/url.scm 104 */
																				bool_t BgL_res4042z00_5238;

																				{	/* Unsafe/url.scm 104 */
																					obj_t BgL_inputzd2portzd2_5234;

																					BgL_inputzd2portzd2_5234 =
																						BgL_inputzd2portzd2_1888;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_5234))
																						{	/* Unsafe/url.scm 104 */
																							BgL_res4042z00_5238 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_5234);
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							BgL_res4042z00_5238 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_9114 = BgL_res4042z00_5238;
																			}
																			if (BgL_testz00_9114)
																				{

																					goto
																						BgL_zc3anonymousza32718ze3z83_1890;
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					BgL_matchz00_2108 =
																						BgL_newzd2matchzd2_1891;
																				}
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			if (
																				((long) (BgL_currentzd2charzd2_1892) ==
																					((long) 64)))
																				{
																					long BgL_lastzd2matchzd2_9122;

																					obj_t BgL_inputzd2portzd2_9121;

																					BgL_inputzd2portzd2_9121 =
																						BgL_inputzd2portzd2_1888;
																					BgL_lastzd2matchzd2_9122 =
																						BgL_newzd2matchzd2_1891;
																					BgL_lastzd2matchzd2_1541 =
																						BgL_lastzd2matchzd2_9122;
																					BgL_inputzd2portzd2_1540 =
																						BgL_inputzd2portzd2_9121;
																					goto
																						BgL_zc3anonymousza32449ze3z83_1542;
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					if (
																						((long) (BgL_currentzd2charzd2_1892)
																							== ((long) 60)))
																						{
																							long BgL_lastzd2matchzd2_9127;

																							obj_t BgL_inputzd2portzd2_9126;

																							BgL_inputzd2portzd2_9126 =
																								BgL_inputzd2portzd2_1888;
																							BgL_lastzd2matchzd2_9127 =
																								BgL_newzd2matchzd2_1891;
																							BgL_lastzd2matchzd2_1675 =
																								BgL_lastzd2matchzd2_9127;
																							BgL_inputzd2portzd2_1674 =
																								BgL_inputzd2portzd2_9126;
																							goto
																								BgL_zc3anonymousza32550ze3z83_1676;
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1892)
																									== ((long) 37)))
																								{
																									long BgL_lastzd2matchzd2_9132;

																									obj_t
																										BgL_inputzd2portzd2_9131;
																									BgL_inputzd2portzd2_9131 =
																										BgL_inputzd2portzd2_1888;
																									BgL_lastzd2matchzd2_9132 =
																										BgL_newzd2matchzd2_1891;
																									BgL_lastzd2matchzd2_1969 =
																										BgL_lastzd2matchzd2_9132;
																									BgL_inputzd2portzd2_1968 =
																										BgL_inputzd2portzd2_9131;
																									goto
																										BgL_zc3anonymousza32778ze3z83_1970;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									bool_t BgL_testz00_9133;

																									{	/* Unsafe/url.scm 104 */
																										bool_t BgL_testz00_9134;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1892)
																												== ((long) 33)))
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9134 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9134 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1892)
																													== ((long) 32));
																											}
																										if (BgL_testz00_9134)
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9133 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1892)
																														== ((long) 36)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9133 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														bool_t
																															BgL_testz00_9143;
																														if (((long)
																																(BgL_currentzd2charzd2_1892)
																																>= ((long) 38)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9143
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1892)
																																	<
																																	((long) 60));
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9143
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_9143)
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9133
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																if (
																																	((long)
																																		(BgL_currentzd2charzd2_1892)
																																		==
																																		((long)
																																			61)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9133
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		bool_t
																																			BgL_testz00_9152;
																																		if (((long)
																																				(BgL_currentzd2charzd2_1892)
																																				>=
																																				((long)
																																					65)))
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9152
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_1892)
																																					<
																																					((long) 91));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9152
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_9152)
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9133
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_1892) == ((long) 95)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9133
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						bool_t
																																							BgL_testz00_9161;
																																						if (
																																							((long) (BgL_currentzd2charzd2_1892) >= ((long) 97)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9161
																																									=
																																									(
																																									(long)
																																									(BgL_currentzd2charzd2_1892)
																																									<
																																									((long) 123));
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9161
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_testz00_9161)
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9133
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								if (((long) (BgL_currentzd2charzd2_1892) == ((long) 124)))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9133
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9133
																																											=
																																											(
																																											(long)
																																											(BgL_currentzd2charzd2_1892)
																																											==
																																											((long) 126));
																									}}}}}}}}}
																									if (BgL_testz00_9133)
																										{
																											long
																												BgL_lastzd2matchzd2_9173;
																											obj_t
																												BgL_inputzd2portzd2_9172;
																											BgL_inputzd2portzd2_9172 =
																												BgL_inputzd2portzd2_1888;
																											BgL_lastzd2matchzd2_9173 =
																												BgL_newzd2matchzd2_1891;
																											BgL_lastzd2matchzd2_1519 =
																												BgL_lastzd2matchzd2_9173;
																											BgL_inputzd2portzd2_1518 =
																												BgL_inputzd2portzd2_9172;
																											goto
																												BgL_zc3anonymousza32430ze3z83_1520;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											BgL_matchz00_2108 =
																												BgL_newzd2matchzd2_1891;
																										}
																								}
																						}
																				}
																		}
																}
															}
														}
													else
														{	/* Unsafe/url.scm 104 */
															if (
																((long) (BgL_currentzd2charzd2_1455) ==
																	((long) 47)))
																{	/* Unsafe/url.scm 104 */
																	BgL_inputzd2portzd2_1717 =
																		BgL_inputzd2portzd2_1452;
																	BgL_lastzd2matchzd2_1718 =
																		BgL_lastzd2matchzd2_1453;
																BgL_zc3anonymousza32578ze3z83_1719:
																	{	/* Unsafe/url.scm 104 */
																		long BgL_newzd2matchzd2_1720;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1717);
																		BgL_newzd2matchzd2_1720 = ((long) 3);
																		{	/* Unsafe/url.scm 104 */
																			int BgL_currentzd2charzd2_1721;

																			BgL_currentzd2charzd2_1721 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1717);
																			if (((long) (BgL_currentzd2charzd2_1721)
																					== ((long) 0)))
																				{	/* Unsafe/url.scm 104 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_1717))
																						{	/* Unsafe/url.scm 104 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_1717))
																								{

																									goto
																										BgL_zc3anonymousza32578ze3z83_1719;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									BgL_matchz00_2108 =
																										BgL_newzd2matchzd2_1720;
																								}
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							BgL_inputzd2portzd2_1651 =
																								BgL_inputzd2portzd2_1717;
																							BgL_lastzd2matchzd2_1652 =
																								BgL_newzd2matchzd2_1720;
																						BgL_zc3anonymousza32535ze3z83_1653:
																							{	/* Unsafe/url.scm 104 */
																								long BgL_newzd2matchzd2_1654;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1651);
																								BgL_newzd2matchzd2_1654 =
																									((long) 3);
																								{	/* Unsafe/url.scm 104 */
																									int
																										BgL_currentzd2charzd2_1655;
																									BgL_currentzd2charzd2_1655 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1651);
																									if (((long)
																											(BgL_currentzd2charzd2_1655)
																											== ((long) 0)))
																										{	/* Unsafe/url.scm 104 */
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_1651))
																												{	/* Unsafe/url.scm 104 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_1651))
																														{

																															goto
																																BgL_zc3anonymousza32535ze3z83_1653;
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															BgL_matchz00_2108
																																=
																																BgL_newzd2matchzd2_1654;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9195;
																													BgL_lastzd2matchzd2_9195
																														=
																														BgL_newzd2matchzd2_1654;
																													BgL_lastzd2matchzd2_1652
																														=
																														BgL_lastzd2matchzd2_9195;
																													goto
																														BgL_zc3anonymousza32535ze3z83_1653;
																												}
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											bool_t BgL_testz00_9196;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_1655)
																													== ((long) 10)))
																												{	/* Unsafe/url.scm 104 */
																													BgL_testz00_9196 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1655)
																															== ((long) 13)))
																														{	/* Unsafe/url.scm 104 */
																															BgL_testz00_9196 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															BgL_testz00_9196 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_1655)
																																== ((long) 58));
																												}}
																											if (BgL_testz00_9196)
																												{	/* Unsafe/url.scm 104 */
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_1654;
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9205;
																													BgL_lastzd2matchzd2_9205
																														=
																														BgL_newzd2matchzd2_1654;
																													BgL_lastzd2matchzd2_1652
																														=
																														BgL_lastzd2matchzd2_9205;
																													goto
																														BgL_zc3anonymousza32535ze3z83_1653;
																												}
																										}
																								}
																							}
																						}
																				}
																			else
																				{	/* Unsafe/url.scm 104 */
																					if (
																						((long) (BgL_currentzd2charzd2_1721)
																							== ((long) 64)))
																						{	/* Unsafe/url.scm 104 */
																							BgL_inputzd2portzd2_1795 =
																								BgL_inputzd2portzd2_1717;
																							BgL_lastzd2matchzd2_1796 =
																								BgL_newzd2matchzd2_1720;
																						BgL_zc3anonymousza32648ze3z83_1797:
																							{	/* Unsafe/url.scm 104 */
																								long BgL_newzd2matchzd2_1798;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1795);
																								BgL_newzd2matchzd2_1798 =
																									((long) 0);
																								{	/* Unsafe/url.scm 104 */
																									int
																										BgL_currentzd2charzd2_1799;
																									BgL_currentzd2charzd2_1799 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1795);
																									if (((long)
																											(BgL_currentzd2charzd2_1799)
																											== ((long) 0)))
																										{	/* Unsafe/url.scm 104 */
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_1795))
																												{	/* Unsafe/url.scm 104 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_1795))
																														{

																															goto
																																BgL_zc3anonymousza32648ze3z83_1797;
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															BgL_matchz00_2108
																																=
																																BgL_newzd2matchzd2_1798;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9219;
																													obj_t
																														BgL_inputzd2portzd2_9218;
																													BgL_inputzd2portzd2_9218
																														=
																														BgL_inputzd2portzd2_1795;
																													BgL_lastzd2matchzd2_9219
																														=
																														BgL_newzd2matchzd2_1798;
																													BgL_lastzd2matchzd2_1652
																														=
																														BgL_lastzd2matchzd2_9219;
																													BgL_inputzd2portzd2_1651
																														=
																														BgL_inputzd2portzd2_9218;
																													goto
																														BgL_zc3anonymousza32535ze3z83_1653;
																												}
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1799)
																													== ((long) 64)))
																												{
																													long
																														BgL_lastzd2matchzd2_9223;
																													BgL_lastzd2matchzd2_9223
																														=
																														BgL_newzd2matchzd2_1798;
																													BgL_lastzd2matchzd2_1796
																														=
																														BgL_lastzd2matchzd2_9223;
																													goto
																														BgL_zc3anonymousza32648ze3z83_1797;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1799)
																															== ((long) 60)))
																														{	/* Unsafe/url.scm 104 */
																															BgL_inputzd2portzd2_1934
																																=
																																BgL_inputzd2portzd2_1795;
																															BgL_lastzd2matchzd2_1935
																																=
																																BgL_newzd2matchzd2_1798;
																														BgL_zc3anonymousza32756ze3z83_1936:
																															{	/* Unsafe/url.scm 104 */
																																long
																																	BgL_newzd2matchzd2_1937;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_1934);
																																BgL_newzd2matchzd2_1937
																																	= ((long) 3);
																																{	/* Unsafe/url.scm 104 */
																																	int
																																		BgL_currentzd2charzd2_1938;
																																	BgL_currentzd2charzd2_1938
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_inputzd2portzd2_1934);
																																	if (((long)
																																			(BgL_currentzd2charzd2_1938)
																																			==
																																			((long)
																																				0)))
																																		{	/* Unsafe/url.scm 104 */
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1934))
																																				{	/* Unsafe/url.scm 104 */
																																					if (rgc_fill_buffer(BgL_inputzd2portzd2_1934))
																																						{

																																							goto
																																								BgL_zc3anonymousza32756ze3z83_1936;
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_matchz00_2108
																																								=
																																								BgL_newzd2matchzd2_1937;
																																						}
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_9237;
																																					obj_t
																																						BgL_inputzd2portzd2_9236;
																																					BgL_inputzd2portzd2_9236
																																						=
																																						BgL_inputzd2portzd2_1934;
																																					BgL_lastzd2matchzd2_9237
																																						=
																																						BgL_newzd2matchzd2_1937;
																																					BgL_lastzd2matchzd2_1652
																																						=
																																						BgL_lastzd2matchzd2_9237;
																																					BgL_inputzd2portzd2_1651
																																						=
																																						BgL_inputzd2portzd2_9236;
																																					goto
																																						BgL_zc3anonymousza32535ze3z83_1653;
																																				}
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1938)
																																					==
																																					((long) 62)))
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_inputzd2portzd2_2013
																																						=
																																						BgL_inputzd2portzd2_1934;
																																					BgL_lastzd2matchzd2_2014
																																						=
																																						BgL_newzd2matchzd2_1937;
																																				BgL_zc3anonymousza32809ze3z83_2015:
																																					{	/* Unsafe/url.scm 104 */
																																						long
																																							BgL_newzd2matchzd2_2016;
																																						RGC_STOP_MATCH
																																							(BgL_inputzd2portzd2_2013);
																																						BgL_newzd2matchzd2_2016
																																							=
																																							(
																																							(long)
																																							3);
																																						{	/* Unsafe/url.scm 104 */
																																							int
																																								BgL_currentzd2charzd2_2017;
																																							BgL_currentzd2charzd2_2017
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_inputzd2portzd2_2013);
																																							if (((long) (BgL_currentzd2charzd2_2017) == ((long) 0)))
																																								{	/* Unsafe/url.scm 104 */
																																									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2013))
																																										{	/* Unsafe/url.scm 104 */
																																											if (rgc_fill_buffer(BgL_inputzd2portzd2_2013))
																																												{

																																													goto
																																														BgL_zc3anonymousza32809ze3z83_2015;
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_matchz00_2108
																																														=
																																														BgL_newzd2matchzd2_2016;
																																												}
																																										}
																																									else
																																										{
																																											long
																																												BgL_lastzd2matchzd2_9251;
																																											obj_t
																																												BgL_inputzd2portzd2_9250;
																																											BgL_inputzd2portzd2_9250
																																												=
																																												BgL_inputzd2portzd2_2013;
																																											BgL_lastzd2matchzd2_9251
																																												=
																																												BgL_newzd2matchzd2_2016;
																																											BgL_lastzd2matchzd2_1652
																																												=
																																												BgL_lastzd2matchzd2_9251;
																																											BgL_inputzd2portzd2_1651
																																												=
																																												BgL_inputzd2portzd2_9250;
																																											goto
																																												BgL_zc3anonymousza32535ze3z83_1653;
																																										}
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									if (((long) (BgL_currentzd2charzd2_2017) == ((long) 32)))
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_inputzd2portzd2_1756
																																												=
																																												BgL_inputzd2portzd2_2013;
																																											BgL_lastzd2matchzd2_1757
																																												=
																																												BgL_newzd2matchzd2_2016;
																																										BgL_zc3anonymousza32613ze3z83_1758:
																																											{	/* Unsafe/url.scm 104 */
																																												long
																																													BgL_newzd2matchzd2_1759;
																																												RGC_STOP_MATCH
																																													(BgL_inputzd2portzd2_1756);
																																												BgL_newzd2matchzd2_1759
																																													=
																																													(
																																													(long)
																																													3);
																																												{	/* Unsafe/url.scm 104 */
																																													int
																																														BgL_currentzd2charzd2_1760;
																																													BgL_currentzd2charzd2_1760
																																														=
																																														RGC_BUFFER_GET_CHAR
																																														(BgL_inputzd2portzd2_1756);
																																													if (((long) (BgL_currentzd2charzd2_1760) == ((long) 0)))
																																														{	/* Unsafe/url.scm 104 */
																																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1756))
																																																{	/* Unsafe/url.scm 104 */
																																																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1756))
																																																		{

																																																			goto
																																																				BgL_zc3anonymousza32613ze3z83_1758;
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_matchz00_2108
																																																				=
																																																				BgL_newzd2matchzd2_1759;
																																																		}
																																																}
																																															else
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_9265;
																																																	obj_t
																																																		BgL_inputzd2portzd2_9264;
																																																	BgL_inputzd2portzd2_9264
																																																		=
																																																		BgL_inputzd2portzd2_1756;
																																																	BgL_lastzd2matchzd2_9265
																																																		=
																																																		BgL_newzd2matchzd2_1759;
																																																	BgL_lastzd2matchzd2_1652
																																																		=
																																																		BgL_lastzd2matchzd2_9265;
																																																	BgL_inputzd2portzd2_1651
																																																		=
																																																		BgL_inputzd2portzd2_9264;
																																																	goto
																																																		BgL_zc3anonymousza32535ze3z83_1653;
																																																}
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															if (((long) (BgL_currentzd2charzd2_1760) == ((long) 64)))
																																																{
																																																	long
																																																		BgL_lastzd2matchzd2_9270;
																																																	obj_t
																																																		BgL_inputzd2portzd2_9269;
																																																	BgL_inputzd2portzd2_9269
																																																		=
																																																		BgL_inputzd2portzd2_1756;
																																																	BgL_lastzd2matchzd2_9270
																																																		=
																																																		BgL_newzd2matchzd2_1759;
																																																	BgL_lastzd2matchzd2_1796
																																																		=
																																																		BgL_lastzd2matchzd2_9270;
																																																	BgL_inputzd2portzd2_1795
																																																		=
																																																		BgL_inputzd2portzd2_9269;
																																																	goto
																																																		BgL_zc3anonymousza32648ze3z83_1797;
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	if (((long) (BgL_currentzd2charzd2_1760) == ((long) 60)))
																																																		{
																																																			long
																																																				BgL_lastzd2matchzd2_9275;
																																																			obj_t
																																																				BgL_inputzd2portzd2_9274;
																																																			BgL_inputzd2portzd2_9274
																																																				=
																																																				BgL_inputzd2portzd2_1756;
																																																			BgL_lastzd2matchzd2_9275
																																																				=
																																																				BgL_newzd2matchzd2_1759;
																																																			BgL_lastzd2matchzd2_1935
																																																				=
																																																				BgL_lastzd2matchzd2_9275;
																																																			BgL_inputzd2portzd2_1934
																																																				=
																																																				BgL_inputzd2portzd2_9274;
																																																			goto
																																																				BgL_zc3anonymousza32756ze3z83_1936;
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			if (((long) (BgL_currentzd2charzd2_1760) == ((long) 58)))
																																																				{
																																																					long
																																																						BgL_lastzd2matchzd2_9280;
																																																					obj_t
																																																						BgL_inputzd2portzd2_9279;
																																																					BgL_inputzd2portzd2_9279
																																																						=
																																																						BgL_inputzd2portzd2_1756;
																																																					BgL_lastzd2matchzd2_9280
																																																						=
																																																						BgL_newzd2matchzd2_1759;
																																																					BgL_lastzd2matchzd2_1519
																																																						=
																																																						BgL_lastzd2matchzd2_9280;
																																																					BgL_inputzd2portzd2_1518
																																																						=
																																																						BgL_inputzd2portzd2_9279;
																																																					goto
																																																						BgL_zc3anonymousza32430ze3z83_1520;
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 104 */
																																																					if (((long) (BgL_currentzd2charzd2_1760) == ((long) 37)))
																																																						{	/* Unsafe/url.scm 104 */
																																																							BgL_inputzd2portzd2_1695
																																																								=
																																																								BgL_inputzd2portzd2_1756;
																																																							BgL_lastzd2matchzd2_1696
																																																								=
																																																								BgL_newzd2matchzd2_1759;
																																																						BgL_zc3anonymousza32562ze3z83_1697:
																																																							{	/* Unsafe/url.scm 104 */
																																																								long
																																																									BgL_newzd2matchzd2_1698;
																																																								RGC_STOP_MATCH
																																																									(BgL_inputzd2portzd2_1695);
																																																								BgL_newzd2matchzd2_1698
																																																									=
																																																									(
																																																									(long)
																																																									3);
																																																								{	/* Unsafe/url.scm 104 */
																																																									int
																																																										BgL_currentzd2charzd2_1699;
																																																									BgL_currentzd2charzd2_1699
																																																										=
																																																										RGC_BUFFER_GET_CHAR
																																																										(BgL_inputzd2portzd2_1695);
																																																									if (((long) (BgL_currentzd2charzd2_1699) == ((long) 0)))
																																																										{	/* Unsafe/url.scm 104 */
																																																											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1695))
																																																												{	/* Unsafe/url.scm 104 */
																																																													if (rgc_fill_buffer(BgL_inputzd2portzd2_1695))
																																																														{

																																																															goto
																																																																BgL_zc3anonymousza32562ze3z83_1697;
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_matchz00_2108
																																																																=
																																																																BgL_newzd2matchzd2_1698;
																																																														}
																																																												}
																																																											else
																																																												{
																																																													long
																																																														BgL_lastzd2matchzd2_9294;
																																																													obj_t
																																																														BgL_inputzd2portzd2_9293;
																																																													BgL_inputzd2portzd2_9293
																																																														=
																																																														BgL_inputzd2portzd2_1695;
																																																													BgL_lastzd2matchzd2_9294
																																																														=
																																																														BgL_newzd2matchzd2_1698;
																																																													BgL_lastzd2matchzd2_1652
																																																														=
																																																														BgL_lastzd2matchzd2_9294;
																																																													BgL_inputzd2portzd2_1651
																																																														=
																																																														BgL_inputzd2portzd2_9293;
																																																													goto
																																																														BgL_zc3anonymousza32535ze3z83_1653;
																																																												}
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 104 */
																																																											bool_t
																																																												BgL_testz00_9295;
																																																											{	/* Unsafe/url.scm 104 */
																																																												bool_t
																																																													BgL_testz00_9296;
																																																												if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 48)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9296
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1699)
																																																															<
																																																															((long) 58));
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9296
																																																															=
																																																															(
																																																															(bool_t)
																																																															0);
																																																													}
																																																												if (BgL_testz00_9296)
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9295
																																																															=
																																																															(
																																																															(bool_t)
																																																															1);
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														bool_t
																																																															BgL_testz00_9302;
																																																														if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 65)))
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_9302
																																																																	=
																																																																	(
																																																																	(long)
																																																																	(BgL_currentzd2charzd2_1699)
																																																																	<
																																																																	((long) 71));
																																																															}
																																																														else
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_9302
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	0);
																																																															}
																																																														if (BgL_testz00_9302)
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_9295
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	1);
																																																															}
																																																														else
																																																															{	/* Unsafe/url.scm 104 */
																																																																if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 97)))
																																																																	{	/* Unsafe/url.scm 104 */
																																																																		BgL_testz00_9295
																																																																			=
																																																																			(
																																																																			(long)
																																																																			(BgL_currentzd2charzd2_1699)
																																																																			<
																																																																			((long) 103));
																																																																	}
																																																																else
																																																																	{	/* Unsafe/url.scm 104 */
																																																																		BgL_testz00_9295
																																																																			=
																																																																			(
																																																																			(bool_t)
																																																																			0);
																																																																	}
																																																															}
																																																													}
																																																											}
																																																											if (BgL_testz00_9295)
																																																												{	/* Unsafe/url.scm 104 */
																																																													BgL_inputzd2portzd2_1430
																																																														=
																																																														BgL_inputzd2portzd2_1695;
																																																													BgL_lastzd2matchzd2_1431
																																																														=
																																																														BgL_newzd2matchzd2_1698;
																																																												BgL_zc3anonymousza32361ze3z83_1432:
																																																													{	/* Unsafe/url.scm 104 */
																																																														long
																																																															BgL_newzd2matchzd2_1433;
																																																														RGC_STOP_MATCH
																																																															(BgL_inputzd2portzd2_1430);
																																																														BgL_newzd2matchzd2_1433
																																																															=
																																																															(
																																																															(long)
																																																															3);
																																																														{	/* Unsafe/url.scm 104 */
																																																															int
																																																																BgL_currentzd2charzd2_1434;
																																																															BgL_currentzd2charzd2_1434
																																																																=
																																																																RGC_BUFFER_GET_CHAR
																																																																(BgL_inputzd2portzd2_1430);
																																																															if (((long) (BgL_currentzd2charzd2_1434) == ((long) 0)))
																																																																{	/* Unsafe/url.scm 104 */
																																																																	if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1430))
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			if (rgc_fill_buffer(BgL_inputzd2portzd2_1430))
																																																																				{

																																																																					goto
																																																																						BgL_zc3anonymousza32361ze3z83_1432;
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_matchz00_2108
																																																																						=
																																																																						BgL_newzd2matchzd2_1433;
																																																																				}
																																																																		}
																																																																	else
																																																																		{
																																																																			long
																																																																				BgL_lastzd2matchzd2_9323;
																																																																			obj_t
																																																																				BgL_inputzd2portzd2_9322;
																																																																			BgL_inputzd2portzd2_9322
																																																																				=
																																																																				BgL_inputzd2portzd2_1430;
																																																																			BgL_lastzd2matchzd2_9323
																																																																				=
																																																																				BgL_newzd2matchzd2_1433;
																																																																			BgL_lastzd2matchzd2_1652
																																																																				=
																																																																				BgL_lastzd2matchzd2_9323;
																																																																			BgL_inputzd2portzd2_1651
																																																																				=
																																																																				BgL_inputzd2portzd2_9322;
																																																																			goto
																																																																				BgL_zc3anonymousza32535ze3z83_1653;
																																																																		}
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 104 */
																																																																	bool_t
																																																																		BgL_testz00_9324;
																																																																	{	/* Unsafe/url.scm 104 */
																																																																		bool_t
																																																																			BgL_testz00_9325;
																																																																		if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 48)))
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9325
																																																																					=
																																																																					(
																																																																					(long)
																																																																					(BgL_currentzd2charzd2_1434)
																																																																					<
																																																																					((long) 58));
																																																																			}
																																																																		else
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9325
																																																																					=
																																																																					(
																																																																					(bool_t)
																																																																					0);
																																																																			}
																																																																		if (BgL_testz00_9325)
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9324
																																																																					=
																																																																					(
																																																																					(bool_t)
																																																																					1);
																																																																			}
																																																																		else
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				bool_t
																																																																					BgL_testz00_9331;
																																																																				if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 65)))
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						BgL_testz00_9331
																																																																							=
																																																																							(
																																																																							(long)
																																																																							(BgL_currentzd2charzd2_1434)
																																																																							<
																																																																							((long) 71));
																																																																					}
																																																																				else
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						BgL_testz00_9331
																																																																							=
																																																																							(
																																																																							(bool_t)
																																																																							0);
																																																																					}
																																																																				if (BgL_testz00_9331)
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						BgL_testz00_9324
																																																																							=
																																																																							(
																																																																							(bool_t)
																																																																							1);
																																																																					}
																																																																				else
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 97)))
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								BgL_testz00_9324
																																																																									=
																																																																									(
																																																																									(long)
																																																																									(BgL_currentzd2charzd2_1434)
																																																																									<
																																																																									((long) 103));
																																																																							}
																																																																						else
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								BgL_testz00_9324
																																																																									=
																																																																									(
																																																																									(bool_t)
																																																																									0);
																																																																							}
																																																																					}
																																																																			}
																																																																	}
																																																																	if (BgL_testz00_9324)
																																																																		{
																																																																			long
																																																																				BgL_lastzd2matchzd2_9343;
																																																																			obj_t
																																																																				BgL_inputzd2portzd2_9342;
																																																																			BgL_inputzd2portzd2_9342
																																																																				=
																																																																				BgL_inputzd2portzd2_1430;
																																																																			BgL_lastzd2matchzd2_9343
																																																																				=
																																																																				BgL_newzd2matchzd2_1433;
																																																																			BgL_lastzd2matchzd2_1757
																																																																				=
																																																																				BgL_lastzd2matchzd2_9343;
																																																																			BgL_inputzd2portzd2_1756
																																																																				=
																																																																				BgL_inputzd2portzd2_9342;
																																																																			goto
																																																																				BgL_zc3anonymousza32613ze3z83_1758;
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			bool_t
																																																																				BgL_testz00_9344;
																																																																			if (((long) (BgL_currentzd2charzd2_1434) == ((long) 10)))
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_testz00_9344
																																																																						=
																																																																						(
																																																																						(bool_t)
																																																																						1);
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					if (((long) (BgL_currentzd2charzd2_1434) == ((long) 13)))
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9344
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								1);
																																																																						}
																																																																					else
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							bool_t
																																																																								BgL_testz00_9351;
																																																																							if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 48)))
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									BgL_testz00_9351
																																																																										=
																																																																										(
																																																																										(long)
																																																																										(BgL_currentzd2charzd2_1434)
																																																																										<
																																																																										((long) 59));
																																																																								}
																																																																							else
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									BgL_testz00_9351
																																																																										=
																																																																										(
																																																																										(bool_t)
																																																																										0);
																																																																								}
																																																																							if (BgL_testz00_9351)
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									BgL_testz00_9344
																																																																										=
																																																																										(
																																																																										(bool_t)
																																																																										1);
																																																																								}
																																																																							else
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									bool_t
																																																																										BgL_testz00_9357;
																																																																									if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 65)))
																																																																										{	/* Unsafe/url.scm 104 */
																																																																											BgL_testz00_9357
																																																																												=
																																																																												(
																																																																												(long)
																																																																												(BgL_currentzd2charzd2_1434)
																																																																												<
																																																																												((long) 71));
																																																																										}
																																																																									else
																																																																										{	/* Unsafe/url.scm 104 */
																																																																											BgL_testz00_9357
																																																																												=
																																																																												(
																																																																												(bool_t)
																																																																												0);
																																																																										}
																																																																									if (BgL_testz00_9357)
																																																																										{	/* Unsafe/url.scm 104 */
																																																																											BgL_testz00_9344
																																																																												=
																																																																												(
																																																																												(bool_t)
																																																																												1);
																																																																										}
																																																																									else
																																																																										{	/* Unsafe/url.scm 104 */
																																																																											if (((long) (BgL_currentzd2charzd2_1434) >= ((long) 97)))
																																																																												{	/* Unsafe/url.scm 104 */
																																																																													BgL_testz00_9344
																																																																														=
																																																																														(
																																																																														(long)
																																																																														(BgL_currentzd2charzd2_1434)
																																																																														<
																																																																														((long) 103));
																																																																												}
																																																																											else
																																																																												{	/* Unsafe/url.scm 104 */
																																																																													BgL_testz00_9344
																																																																														=
																																																																														(
																																																																														(bool_t)
																																																																														0);
																																																																												}
																																																																										}
																																																																								}
																																																																						}
																																																																				}
																																																																			if (BgL_testz00_9344)
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_matchz00_2108
																																																																						=
																																																																						BgL_newzd2matchzd2_1433;
																																																																				}
																																																																			else
																																																																				{
																																																																					long
																																																																						BgL_lastzd2matchzd2_9369;
																																																																					obj_t
																																																																						BgL_inputzd2portzd2_9368;
																																																																					BgL_inputzd2portzd2_9368
																																																																						=
																																																																						BgL_inputzd2portzd2_1430;
																																																																					BgL_lastzd2matchzd2_9369
																																																																						=
																																																																						BgL_newzd2matchzd2_1433;
																																																																					BgL_lastzd2matchzd2_1652
																																																																						=
																																																																						BgL_lastzd2matchzd2_9369;
																																																																					BgL_inputzd2portzd2_1651
																																																																						=
																																																																						BgL_inputzd2portzd2_9368;
																																																																					goto
																																																																						BgL_zc3anonymousza32535ze3z83_1653;
																																																																				}
																																																																		}
																																																																}
																																																														}
																																																													}
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 104 */
																																																													bool_t
																																																														BgL_testz00_9370;
																																																													if (((long) (BgL_currentzd2charzd2_1699) == ((long) 10)))
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_testz00_9370
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 104 */
																																																															if (((long) (BgL_currentzd2charzd2_1699) == ((long) 13)))
																																																																{	/* Unsafe/url.scm 104 */
																																																																	BgL_testz00_9370
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		1);
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 104 */
																																																																	bool_t
																																																																		BgL_testz00_9377;
																																																																	if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 48)))
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9377
																																																																				=
																																																																				(
																																																																				(long)
																																																																				(BgL_currentzd2charzd2_1699)
																																																																				<
																																																																				((long) 59));
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9377
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				0);
																																																																		}
																																																																	if (BgL_testz00_9377)
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9370
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				1);
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			bool_t
																																																																				BgL_testz00_9383;
																																																																			if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 65)))
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_testz00_9383
																																																																						=
																																																																						(
																																																																						(long)
																																																																						(BgL_currentzd2charzd2_1699)
																																																																						<
																																																																						((long) 71));
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_testz00_9383
																																																																						=
																																																																						(
																																																																						(bool_t)
																																																																						0);
																																																																				}
																																																																			if (BgL_testz00_9383)
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_testz00_9370
																																																																						=
																																																																						(
																																																																						(bool_t)
																																																																						1);
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					if (((long) (BgL_currentzd2charzd2_1699) >= ((long) 97)))
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9370
																																																																								=
																																																																								(
																																																																								(long)
																																																																								(BgL_currentzd2charzd2_1699)
																																																																								<
																																																																								((long) 103));
																																																																						}
																																																																					else
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9370
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								0);
																																																																						}
																																																																				}
																																																																		}
																																																																}
																																																														}
																																																													if (BgL_testz00_9370)
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_matchz00_2108
																																																																=
																																																																BgL_newzd2matchzd2_1698;
																																																														}
																																																													else
																																																														{
																																																															long
																																																																BgL_lastzd2matchzd2_9395;
																																																															obj_t
																																																																BgL_inputzd2portzd2_9394;
																																																															BgL_inputzd2portzd2_9394
																																																																=
																																																																BgL_inputzd2portzd2_1695;
																																																															BgL_lastzd2matchzd2_9395
																																																																=
																																																																BgL_newzd2matchzd2_1698;
																																																															BgL_lastzd2matchzd2_1652
																																																																=
																																																																BgL_lastzd2matchzd2_9395;
																																																															BgL_inputzd2portzd2_1651
																																																																=
																																																																BgL_inputzd2portzd2_9394;
																																																															goto
																																																																BgL_zc3anonymousza32535ze3z83_1653;
																																																														}
																																																												}
																																																										}
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Unsafe/url.scm 104 */
																																																							bool_t
																																																								BgL_testz00_9396;
																																																							{	/* Unsafe/url.scm 104 */
																																																								bool_t
																																																									BgL_testz00_9397;
																																																								if (((long) (BgL_currentzd2charzd2_1760) == ((long) 33)))
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_9397
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_9397
																																																											=
																																																											(
																																																											(long)
																																																											(BgL_currentzd2charzd2_1760)
																																																											==
																																																											((long) 32));
																																																									}
																																																								if (BgL_testz00_9397)
																																																									{	/* Unsafe/url.scm 104 */
																																																										BgL_testz00_9396
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																								else
																																																									{	/* Unsafe/url.scm 104 */
																																																										if (((long) (BgL_currentzd2charzd2_1760) == ((long) 36)))
																																																											{	/* Unsafe/url.scm 104 */
																																																												BgL_testz00_9396
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																										else
																																																											{	/* Unsafe/url.scm 104 */
																																																												bool_t
																																																													BgL_testz00_9406;
																																																												if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 38)))
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9406
																																																															=
																																																															(
																																																															(long)
																																																															(BgL_currentzd2charzd2_1760)
																																																															<
																																																															((long) 58));
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9406
																																																															=
																																																															(
																																																															(bool_t)
																																																															0);
																																																													}
																																																												if (BgL_testz00_9406)
																																																													{	/* Unsafe/url.scm 104 */
																																																														BgL_testz00_9396
																																																															=
																																																															(
																																																															(bool_t)
																																																															1);
																																																													}
																																																												else
																																																													{	/* Unsafe/url.scm 104 */
																																																														if (((long) (BgL_currentzd2charzd2_1760) == ((long) 59)))
																																																															{	/* Unsafe/url.scm 104 */
																																																																BgL_testz00_9396
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	1);
																																																															}
																																																														else
																																																															{	/* Unsafe/url.scm 104 */
																																																																if (((long) (BgL_currentzd2charzd2_1760) == ((long) 61)))
																																																																	{	/* Unsafe/url.scm 104 */
																																																																		BgL_testz00_9396
																																																																			=
																																																																			(
																																																																			(bool_t)
																																																																			1);
																																																																	}
																																																																else
																																																																	{	/* Unsafe/url.scm 104 */
																																																																		bool_t
																																																																			BgL_testz00_9418;
																																																																		if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 65)))
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9418
																																																																					=
																																																																					(
																																																																					(long)
																																																																					(BgL_currentzd2charzd2_1760)
																																																																					<
																																																																					((long) 91));
																																																																			}
																																																																		else
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9418
																																																																					=
																																																																					(
																																																																					(bool_t)
																																																																					0);
																																																																			}
																																																																		if (BgL_testz00_9418)
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				BgL_testz00_9396
																																																																					=
																																																																					(
																																																																					(bool_t)
																																																																					1);
																																																																			}
																																																																		else
																																																																			{	/* Unsafe/url.scm 104 */
																																																																				if (((long) (BgL_currentzd2charzd2_1760) == ((long) 95)))
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						BgL_testz00_9396
																																																																							=
																																																																							(
																																																																							(bool_t)
																																																																							1);
																																																																					}
																																																																				else
																																																																					{	/* Unsafe/url.scm 104 */
																																																																						bool_t
																																																																							BgL_testz00_9427;
																																																																						if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 97)))
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								BgL_testz00_9427
																																																																									=
																																																																									(
																																																																									(long)
																																																																									(BgL_currentzd2charzd2_1760)
																																																																									<
																																																																									((long) 123));
																																																																							}
																																																																						else
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								BgL_testz00_9427
																																																																									=
																																																																									(
																																																																									(bool_t)
																																																																									0);
																																																																							}
																																																																						if (BgL_testz00_9427)
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								BgL_testz00_9396
																																																																									=
																																																																									(
																																																																									(bool_t)
																																																																									1);
																																																																							}
																																																																						else
																																																																							{	/* Unsafe/url.scm 104 */
																																																																								if (((long) (BgL_currentzd2charzd2_1760) == ((long) 124)))
																																																																									{	/* Unsafe/url.scm 104 */
																																																																										BgL_testz00_9396
																																																																											=
																																																																											(
																																																																											(bool_t)
																																																																											1);
																																																																									}
																																																																								else
																																																																									{	/* Unsafe/url.scm 104 */
																																																																										BgL_testz00_9396
																																																																											=
																																																																											(
																																																																											(long)
																																																																											(BgL_currentzd2charzd2_1760)
																																																																											==
																																																																											((long) 126));
																																																							}}}}}}}}}}
																																																							if (BgL_testz00_9396)
																																																								{
																																																									long
																																																										BgL_lastzd2matchzd2_9438;
																																																									BgL_lastzd2matchzd2_9438
																																																										=
																																																										BgL_newzd2matchzd2_1759;
																																																									BgL_lastzd2matchzd2_1757
																																																										=
																																																										BgL_lastzd2matchzd2_9438;
																																																									goto
																																																										BgL_zc3anonymousza32613ze3z83_1758;
																																																								}
																																																							else
																																																								{	/* Unsafe/url.scm 104 */
																																																									bool_t
																																																										BgL_testz00_9439;
																																																									if (((long) (BgL_currentzd2charzd2_1760) == ((long) 10)))
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_testz00_9439
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Unsafe/url.scm 104 */
																																																											if (((long) (BgL_currentzd2charzd2_1760) == ((long) 13)))
																																																												{	/* Unsafe/url.scm 104 */
																																																													BgL_testz00_9439
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																											else
																																																												{	/* Unsafe/url.scm 104 */
																																																													bool_t
																																																														BgL_testz00_9446;
																																																													if (((long) (BgL_currentzd2charzd2_1760) == ((long) 33)))
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_testz00_9446
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_testz00_9446
																																																																=
																																																																(
																																																																(long)
																																																																(BgL_currentzd2charzd2_1760)
																																																																==
																																																																((long) 32));
																																																														}
																																																													if (BgL_testz00_9446)
																																																														{	/* Unsafe/url.scm 104 */
																																																															BgL_testz00_9439
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Unsafe/url.scm 104 */
																																																															bool_t
																																																																BgL_testz00_9452;
																																																															if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 36)))
																																																																{	/* Unsafe/url.scm 104 */
																																																																	BgL_testz00_9452
																																																																		=
																																																																		(
																																																																		(long)
																																																																		(BgL_currentzd2charzd2_1760)
																																																																		<
																																																																		((long) 62));
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 104 */
																																																																	BgL_testz00_9452
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		0);
																																																																}
																																																															if (BgL_testz00_9452)
																																																																{	/* Unsafe/url.scm 104 */
																																																																	BgL_testz00_9439
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		1);
																																																																}
																																																															else
																																																																{	/* Unsafe/url.scm 104 */
																																																																	bool_t
																																																																		BgL_testz00_9458;
																																																																	if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 64)))
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9458
																																																																				=
																																																																				(
																																																																				(long)
																																																																				(BgL_currentzd2charzd2_1760)
																																																																				<
																																																																				((long) 91));
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9458
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				0);
																																																																		}
																																																																	if (BgL_testz00_9458)
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			BgL_testz00_9439
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				1);
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/url.scm 104 */
																																																																			if (((long) (BgL_currentzd2charzd2_1760) == ((long) 95)))
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					BgL_testz00_9439
																																																																						=
																																																																						(
																																																																						(bool_t)
																																																																						1);
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/url.scm 104 */
																																																																					bool_t
																																																																						BgL_testz00_9467;
																																																																					if (((long) (BgL_currentzd2charzd2_1760) >= ((long) 97)))
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9467
																																																																								=
																																																																								(
																																																																								(long)
																																																																								(BgL_currentzd2charzd2_1760)
																																																																								<
																																																																								((long) 123));
																																																																						}
																																																																					else
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9467
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								0);
																																																																						}
																																																																					if (BgL_testz00_9467)
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							BgL_testz00_9439
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								1);
																																																																						}
																																																																					else
																																																																						{	/* Unsafe/url.scm 104 */
																																																																							if (((long) (BgL_currentzd2charzd2_1760) == ((long) 124)))
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									BgL_testz00_9439
																																																																										=
																																																																										(
																																																																										(bool_t)
																																																																										1);
																																																																								}
																																																																							else
																																																																								{	/* Unsafe/url.scm 104 */
																																																																									BgL_testz00_9439
																																																																										=
																																																																										(
																																																																										(long)
																																																																										(BgL_currentzd2charzd2_1760)
																																																																										==
																																																																										((long) 126));
																																																										}}}}}}}}
																																																									if (BgL_testz00_9439)
																																																										{	/* Unsafe/url.scm 104 */
																																																											BgL_matchz00_2108
																																																												=
																																																												BgL_newzd2matchzd2_1759;
																																																										}
																																																									else
																																																										{
																																																											long
																																																												BgL_lastzd2matchzd2_9479;
																																																											obj_t
																																																												BgL_inputzd2portzd2_9478;
																																																											BgL_inputzd2portzd2_9478
																																																												=
																																																												BgL_inputzd2portzd2_1756;
																																																											BgL_lastzd2matchzd2_9479
																																																												=
																																																												BgL_newzd2matchzd2_1759;
																																																											BgL_lastzd2matchzd2_1652
																																																												=
																																																												BgL_lastzd2matchzd2_9479;
																																																											BgL_inputzd2portzd2_1651
																																																												=
																																																												BgL_inputzd2portzd2_9478;
																																																											goto
																																																												BgL_zc3anonymousza32535ze3z83_1653;
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
																																										{	/* Unsafe/url.scm 104 */
																																											bool_t
																																												BgL_testz00_9480;
																																											switch
																																												(
																																												(long)
																																												(BgL_currentzd2charzd2_2017))
																																												{
																																												case ((long) 10):

																																													BgL_testz00_9480 = ((bool_t) 1);
																																													break;
																																												case ((long) 13):

																																													BgL_testz00_9480 = ((bool_t) 1);
																																													break;
																																												case ((long) 32):

																																													BgL_testz00_9480 = ((bool_t) 1);
																																													break;
																																												default:
																																													BgL_testz00_9480 = ((long) (BgL_currentzd2charzd2_2017) == ((long) 58));
																																												}
																																											if (BgL_testz00_9480)
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_matchz00_2108
																																														=
																																														BgL_newzd2matchzd2_2016;
																																												}
																																											else
																																												{
																																													long
																																														BgL_lastzd2matchzd2_9486;
																																													obj_t
																																														BgL_inputzd2portzd2_9485;
																																													BgL_inputzd2portzd2_9485
																																														=
																																														BgL_inputzd2portzd2_2013;
																																													BgL_lastzd2matchzd2_9486
																																														=
																																														BgL_newzd2matchzd2_2016;
																																													BgL_lastzd2matchzd2_1652
																																														=
																																														BgL_lastzd2matchzd2_9486;
																																													BgL_inputzd2portzd2_1651
																																														=
																																														BgL_inputzd2portzd2_9485;
																																													goto
																																														BgL_zc3anonymousza32535ze3z83_1653;
																																												}
																																										}
																																								}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					bool_t
																																						BgL_testz00_9487;
																																					switch
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_1938))
																																						{
																																						case ((long) 10):

																																							BgL_testz00_9487 = ((bool_t) 1);
																																							break;
																																						case ((long) 13):

																																							BgL_testz00_9487 = ((bool_t) 1);
																																							break;
																																						case ((long) 58):

																																							BgL_testz00_9487 = ((bool_t) 1);
																																							break;
																																						default:
																																							BgL_testz00_9487 = ((long) (BgL_currentzd2charzd2_1938) == ((long) 62));
																																						}
																																					if (BgL_testz00_9487)
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_matchz00_2108
																																								=
																																								BgL_newzd2matchzd2_1937;
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_9493;
																																							obj_t
																																								BgL_inputzd2portzd2_9492;
																																							BgL_inputzd2portzd2_9492
																																								=
																																								BgL_inputzd2portzd2_1934;
																																							BgL_lastzd2matchzd2_9493
																																								=
																																								BgL_newzd2matchzd2_1937;
																																							BgL_lastzd2matchzd2_1652
																																								=
																																								BgL_lastzd2matchzd2_9493;
																																							BgL_inputzd2portzd2_1651
																																								=
																																								BgL_inputzd2portzd2_9492;
																																							goto
																																								BgL_zc3anonymousza32535ze3z83_1653;
																																						}
																																				}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1799)
																																	==
																																	((long) 58)))
																																{
																																	long
																																		BgL_lastzd2matchzd2_9498;
																																	obj_t
																																		BgL_inputzd2portzd2_9497;
																																	BgL_inputzd2portzd2_9497
																																		=
																																		BgL_inputzd2portzd2_1795;
																																	BgL_lastzd2matchzd2_9498
																																		=
																																		BgL_newzd2matchzd2_1798;
																																	BgL_lastzd2matchzd2_1519
																																		=
																																		BgL_lastzd2matchzd2_9498;
																																	BgL_inputzd2portzd2_1518
																																		=
																																		BgL_inputzd2portzd2_9497;
																																	goto
																																		BgL_zc3anonymousza32430ze3z83_1520;
																																}
																															else
																																{	/* Unsafe/url.scm 104 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1799)
																																			==
																																			((long)
																																				37)))
																																		{
																																			long
																																				BgL_lastzd2matchzd2_9503;
																																			obj_t
																																				BgL_inputzd2portzd2_9502;
																																			BgL_inputzd2portzd2_9502
																																				=
																																				BgL_inputzd2portzd2_1795;
																																			BgL_lastzd2matchzd2_9503
																																				=
																																				BgL_newzd2matchzd2_1798;
																																			BgL_lastzd2matchzd2_1696
																																				=
																																				BgL_lastzd2matchzd2_9503;
																																			BgL_inputzd2portzd2_1695
																																				=
																																				BgL_inputzd2portzd2_9502;
																																			goto
																																				BgL_zc3anonymousza32562ze3z83_1697;
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			bool_t
																																				BgL_testz00_9504;
																																			{	/* Unsafe/url.scm 104 */
																																				bool_t
																																					BgL_testz00_9505;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1799)
																																						==
																																						((long) 33)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9505
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9505
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1799)
																																							==
																																							((long) 32));
																																					}
																																				if (BgL_testz00_9505)
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9504
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1799) == ((long) 36)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9504
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								bool_t
																																									BgL_testz00_9514;
																																								if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 38)))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9514
																																											=
																																											(
																																											(long)
																																											(BgL_currentzd2charzd2_1799)
																																											<
																																											((long) 58));
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9514
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_testz00_9514)
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9504
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										if (((long) (BgL_currentzd2charzd2_1799) == ((long) 59)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9504
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												if (((long) (BgL_currentzd2charzd2_1799) == ((long) 61)))
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9504
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														bool_t
																																															BgL_testz00_9526;
																																														if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 65)))
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9526
																																																	=
																																																	(
																																																	(long)
																																																	(BgL_currentzd2charzd2_1799)
																																																	<
																																																	((long) 91));
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9526
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														if (BgL_testz00_9526)
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9504
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																if (((long) (BgL_currentzd2charzd2_1799) == ((long) 95)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9504
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		bool_t
																																																			BgL_testz00_9535;
																																																		if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 97)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9535
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1799)
																																																					<
																																																					((long) 123));
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9535
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_9535)
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9504
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				if (((long) (BgL_currentzd2charzd2_1799) == ((long) 124)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9504
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9504
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1799)
																																																							==
																																																							((long) 126));
																																			}}}}}}}}}}
																																			if (BgL_testz00_9504)
																																				{
																																					long
																																						BgL_lastzd2matchzd2_9547;
																																					obj_t
																																						BgL_inputzd2portzd2_9546;
																																					BgL_inputzd2portzd2_9546
																																						=
																																						BgL_inputzd2portzd2_1795;
																																					BgL_lastzd2matchzd2_9547
																																						=
																																						BgL_newzd2matchzd2_1798;
																																					BgL_lastzd2matchzd2_1757
																																						=
																																						BgL_lastzd2matchzd2_9547;
																																					BgL_inputzd2portzd2_1756
																																						=
																																						BgL_inputzd2portzd2_9546;
																																					goto
																																						BgL_zc3anonymousza32613ze3z83_1758;
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					bool_t
																																						BgL_testz00_9548;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_1799)
																																							==
																																							((long) 10)))
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_testz00_9548
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							if (((long) (BgL_currentzd2charzd2_1799) == ((long) 13)))
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9548
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									bool_t
																																										BgL_testz00_9555;
																																									if (((long) (BgL_currentzd2charzd2_1799) == ((long) 33)))
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_testz00_9555
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_testz00_9555
																																												=
																																												(
																																												(long)
																																												(BgL_currentzd2charzd2_1799)
																																												==
																																												((long) 32));
																																										}
																																									if (BgL_testz00_9555)
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_testz00_9548
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											bool_t
																																												BgL_testz00_9561;
																																											if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 36)))
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9561
																																														=
																																														(
																																														(long)
																																														(BgL_currentzd2charzd2_1799)
																																														<
																																														((long) 62));
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9561
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																											if (BgL_testz00_9561)
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9548
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													bool_t
																																														BgL_testz00_9567;
																																													if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 64)))
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_9567
																																																=
																																																(
																																																(long)
																																																(BgL_currentzd2charzd2_1799)
																																																<
																																																((long) 91));
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_9567
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																													if (BgL_testz00_9567)
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_9548
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															if (((long) (BgL_currentzd2charzd2_1799) == ((long) 95)))
																																																{	/* Unsafe/url.scm 104 */
																																																	BgL_testz00_9548
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Unsafe/url.scm 104 */
																																																	bool_t
																																																		BgL_testz00_9576;
																																																	if (((long) (BgL_currentzd2charzd2_1799) >= ((long) 97)))
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_9576
																																																				=
																																																				(
																																																				(long)
																																																				(BgL_currentzd2charzd2_1799)
																																																				<
																																																				((long) 123));
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_9576
																																																				=
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																	if (BgL_testz00_9576)
																																																		{	/* Unsafe/url.scm 104 */
																																																			BgL_testz00_9548
																																																				=
																																																				(
																																																				(bool_t)
																																																				1);
																																																		}
																																																	else
																																																		{	/* Unsafe/url.scm 104 */
																																																			if (((long) (BgL_currentzd2charzd2_1799) == ((long) 124)))
																																																				{	/* Unsafe/url.scm 104 */
																																																					BgL_testz00_9548
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Unsafe/url.scm 104 */
																																																					BgL_testz00_9548
																																																						=
																																																						(
																																																						(long)
																																																						(BgL_currentzd2charzd2_1799)
																																																						==
																																																						((long) 126));
																																						}}}}}}}}
																																					if (BgL_testz00_9548)
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_matchz00_2108
																																								=
																																								BgL_newzd2matchzd2_1798;
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_9588;
																																							obj_t
																																								BgL_inputzd2portzd2_9587;
																																							BgL_inputzd2portzd2_9587
																																								=
																																								BgL_inputzd2portzd2_1795;
																																							BgL_lastzd2matchzd2_9588
																																								=
																																								BgL_newzd2matchzd2_1798;
																																							BgL_lastzd2matchzd2_1652
																																								=
																																								BgL_lastzd2matchzd2_9588;
																																							BgL_inputzd2portzd2_1651
																																								=
																																								BgL_inputzd2portzd2_9587;
																																							goto
																																								BgL_zc3anonymousza32535ze3z83_1653;
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
																						{	/* Unsafe/url.scm 104 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1721)
																									== ((long) 60)))
																								{
																									long BgL_lastzd2matchzd2_9593;

																									obj_t
																										BgL_inputzd2portzd2_9592;
																									BgL_inputzd2portzd2_9592 =
																										BgL_inputzd2portzd2_1717;
																									BgL_lastzd2matchzd2_9593 =
																										BgL_newzd2matchzd2_1720;
																									BgL_lastzd2matchzd2_1935 =
																										BgL_lastzd2matchzd2_9593;
																									BgL_inputzd2portzd2_1934 =
																										BgL_inputzd2portzd2_9592;
																									goto
																										BgL_zc3anonymousza32756ze3z83_1936;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1721)
																											== ((long) 58)))
																										{
																											long
																												BgL_lastzd2matchzd2_9598;
																											obj_t
																												BgL_inputzd2portzd2_9597;
																											BgL_inputzd2portzd2_9597 =
																												BgL_inputzd2portzd2_1717;
																											BgL_lastzd2matchzd2_9598 =
																												BgL_newzd2matchzd2_1720;
																											BgL_lastzd2matchzd2_1519 =
																												BgL_lastzd2matchzd2_9598;
																											BgL_inputzd2portzd2_1518 =
																												BgL_inputzd2portzd2_9597;
																											goto
																												BgL_zc3anonymousza32430ze3z83_1520;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1721)
																													== ((long) 37)))
																												{
																													long
																														BgL_lastzd2matchzd2_9603;
																													obj_t
																														BgL_inputzd2portzd2_9602;
																													BgL_inputzd2portzd2_9602
																														=
																														BgL_inputzd2portzd2_1717;
																													BgL_lastzd2matchzd2_9603
																														=
																														BgL_newzd2matchzd2_1720;
																													BgL_lastzd2matchzd2_1696
																														=
																														BgL_lastzd2matchzd2_9603;
																													BgL_inputzd2portzd2_1695
																														=
																														BgL_inputzd2portzd2_9602;
																													goto
																														BgL_zc3anonymousza32562ze3z83_1697;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													bool_t
																														BgL_testz00_9604;
																													{	/* Unsafe/url.scm 104 */
																														bool_t
																															BgL_testz00_9605;
																														if (((long)
																																(BgL_currentzd2charzd2_1721)
																																== ((long) 33)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9605
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9605
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1721)
																																	==
																																	((long) 32));
																															}
																														if (BgL_testz00_9605)
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9604
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																if (
																																	((long)
																																		(BgL_currentzd2charzd2_1721)
																																		==
																																		((long)
																																			36)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9604
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		bool_t
																																			BgL_testz00_9614;
																																		if (((long)
																																				(BgL_currentzd2charzd2_1721)
																																				>=
																																				((long)
																																					38)))
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9614
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_1721)
																																					<
																																					((long) 58));
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9614
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_9614)
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9604
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				if (
																																					((long) (BgL_currentzd2charzd2_1721) == ((long) 59)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9604
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1721) == ((long) 61)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9604
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								bool_t
																																									BgL_testz00_9626;
																																								if (((long) (BgL_currentzd2charzd2_1721) >= ((long) 65)))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9626
																																											=
																																											(
																																											(long)
																																											(BgL_currentzd2charzd2_1721)
																																											<
																																											((long) 91));
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9626
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_testz00_9626)
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9604
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										if (((long) (BgL_currentzd2charzd2_1721) == ((long) 95)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9604
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												bool_t
																																													BgL_testz00_9635;
																																												if (((long) (BgL_currentzd2charzd2_1721) >= ((long) 97)))
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9635
																																															=
																																															(
																																															(long)
																																															(BgL_currentzd2charzd2_1721)
																																															<
																																															((long) 123));
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9635
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												if (BgL_testz00_9635)
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9604
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														if (((long) (BgL_currentzd2charzd2_1721) == ((long) 124)))
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9604
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9604
																																																	=
																																																	(
																																																	(long)
																																																	(BgL_currentzd2charzd2_1721)
																																																	==
																																																	((long) 126));
																													}}}}}}}}}}
																													if (BgL_testz00_9604)
																														{
																															long
																																BgL_lastzd2matchzd2_9647;
																															obj_t
																																BgL_inputzd2portzd2_9646;
																															BgL_inputzd2portzd2_9646
																																=
																																BgL_inputzd2portzd2_1717;
																															BgL_lastzd2matchzd2_9647
																																=
																																BgL_newzd2matchzd2_1720;
																															BgL_lastzd2matchzd2_1757
																																=
																																BgL_lastzd2matchzd2_9647;
																															BgL_inputzd2portzd2_1756
																																=
																																BgL_inputzd2portzd2_9646;
																															goto
																																BgL_zc3anonymousza32613ze3z83_1758;
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															bool_t
																																BgL_testz00_9648;
																															if (((long)
																																	(BgL_currentzd2charzd2_1721)
																																	==
																																	((long) 10)))
																																{	/* Unsafe/url.scm 104 */
																																	BgL_testz00_9648
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/url.scm 104 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1721)
																																			==
																																			((long)
																																				13)))
																																		{	/* Unsafe/url.scm 104 */
																																			BgL_testz00_9648
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			bool_t
																																				BgL_testz00_9655;
																																			if ((
																																					(long)
																																					(BgL_currentzd2charzd2_1721)
																																					==
																																					((long) 33)))
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_testz00_9655
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_testz00_9655
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_1721)
																																						==
																																						((long) 32));
																																				}
																																			if (BgL_testz00_9655)
																																				{	/* Unsafe/url.scm 104 */
																																					BgL_testz00_9648
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					bool_t
																																						BgL_testz00_9661;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_1721)
																																							>=
																																							((long) 36)))
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_testz00_9661
																																								=
																																								(
																																								(long)
																																								(BgL_currentzd2charzd2_1721)
																																								<
																																								((long) 62));
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_testz00_9661
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																					if (BgL_testz00_9661)
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_testz00_9648
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							bool_t
																																								BgL_testz00_9667;
																																							if (((long) (BgL_currentzd2charzd2_1721) >= ((long) 64)))
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9667
																																										=
																																										(
																																										(long)
																																										(BgL_currentzd2charzd2_1721)
																																										<
																																										((long) 91));
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9667
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							if (BgL_testz00_9667)
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9648
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									if (((long) (BgL_currentzd2charzd2_1721) == ((long) 95)))
																																										{	/* Unsafe/url.scm 104 */
																																											BgL_testz00_9648
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/url.scm 104 */
																																											bool_t
																																												BgL_testz00_9676;
																																											if (((long) (BgL_currentzd2charzd2_1721) >= ((long) 97)))
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9676
																																														=
																																														(
																																														(long)
																																														(BgL_currentzd2charzd2_1721)
																																														<
																																														((long) 123));
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9676
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																											if (BgL_testz00_9676)
																																												{	/* Unsafe/url.scm 104 */
																																													BgL_testz00_9648
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/url.scm 104 */
																																													if (((long) (BgL_currentzd2charzd2_1721) == ((long) 124)))
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_9648
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Unsafe/url.scm 104 */
																																															BgL_testz00_9648
																																																=
																																																(
																																																(long)
																																																(BgL_currentzd2charzd2_1721)
																																																==
																																																((long) 126));
																																}}}}}}}}
																															if (BgL_testz00_9648)
																																{	/* Unsafe/url.scm 104 */
																																	BgL_matchz00_2108
																																		=
																																		BgL_newzd2matchzd2_1720;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_9688;
																																	obj_t
																																		BgL_inputzd2portzd2_9687;
																																	BgL_inputzd2portzd2_9687
																																		=
																																		BgL_inputzd2portzd2_1717;
																																	BgL_lastzd2matchzd2_9688
																																		=
																																		BgL_newzd2matchzd2_1720;
																																	BgL_lastzd2matchzd2_1652
																																		=
																																		BgL_lastzd2matchzd2_9688;
																																	BgL_inputzd2portzd2_1651
																																		=
																																		BgL_inputzd2portzd2_9687;
																																	goto
																																		BgL_zc3anonymousza32535ze3z83_1653;
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
																{	/* Unsafe/url.scm 104 */
																	if (
																		((long) (BgL_currentzd2charzd2_1455) ==
																			((long) 37)))
																		{	/* Unsafe/url.scm 104 */
																			BgL_inputzd2portzd2_1992 =
																				BgL_inputzd2portzd2_1452;
																			BgL_lastzd2matchzd2_1993 =
																				BgL_lastzd2matchzd2_1453;
																		BgL_zc3anonymousza32794ze3z83_1994:
																			{	/* Unsafe/url.scm 104 */
																				long BgL_newzd2matchzd2_1995;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1992);
																				BgL_newzd2matchzd2_1995 = ((long) 2);
																				{	/* Unsafe/url.scm 104 */
																					int BgL_currentzd2charzd2_1996;

																					BgL_currentzd2charzd2_1996 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1992);
																					if (((long)
																							(BgL_currentzd2charzd2_1996) ==
																							((long) 0)))
																						{	/* Unsafe/url.scm 104 */
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_1992))
																								{	/* Unsafe/url.scm 104 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_1992))
																										{

																											goto
																												BgL_zc3anonymousza32794ze3z83_1994;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											BgL_matchz00_2108 =
																												BgL_newzd2matchzd2_1995;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_9702;

																									obj_t
																										BgL_inputzd2portzd2_9701;
																									BgL_inputzd2portzd2_9701 =
																										BgL_inputzd2portzd2_1992;
																									BgL_lastzd2matchzd2_9702 =
																										BgL_newzd2matchzd2_1995;
																									BgL_lastzd2matchzd2_1981 =
																										BgL_lastzd2matchzd2_9702;
																									BgL_inputzd2portzd2_1980 =
																										BgL_inputzd2portzd2_9701;
																									goto
																										BgL_zc3anonymousza32786ze3z83_1982;
																								}
																						}
																					else
																						{	/* Unsafe/url.scm 104 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1996)
																									== ((long) 58)))
																								{	/* Unsafe/url.scm 104 */
																									long BgL_newzd2matchzd2_5410;

																									RGC_STOP_MATCH
																										(BgL_inputzd2portzd2_1992);
																									BgL_newzd2matchzd2_5410 =
																										((long) 1);
																									BgL_matchz00_2108 =
																										BgL_newzd2matchzd2_5410;
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									bool_t BgL_testz00_9707;

																									{	/* Unsafe/url.scm 104 */
																										bool_t BgL_testz00_9708;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1996)
																												>= ((long) 48)))
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9708 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1996)
																													< ((long) 58));
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9708 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_9708)
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9707 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												bool_t BgL_testz00_9714;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_1996)
																														>= ((long) 65)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9714 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1996)
																															< ((long) 71));
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9714 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_9714)
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9707 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1996)
																																>= ((long) 97)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9707
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1996)
																																	<
																																	((long) 103));
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9707
																																	=
																																	((bool_t) 0);
																															}
																													}
																											}
																									}
																									if (BgL_testz00_9707)
																										{
																											long
																												BgL_lastzd2matchzd2_9726;
																											obj_t
																												BgL_inputzd2portzd2_9725;
																											BgL_inputzd2portzd2_9725 =
																												BgL_inputzd2portzd2_1992;
																											BgL_lastzd2matchzd2_9726 =
																												BgL_newzd2matchzd2_1995;
																											BgL_lastzd2matchzd2_1948 =
																												BgL_lastzd2matchzd2_9726;
																											BgL_inputzd2portzd2_1947 =
																												BgL_inputzd2portzd2_9725;
																											goto
																												BgL_zc3anonymousza32763ze3z83_1949;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											bool_t BgL_testz00_9727;

																											{	/* Unsafe/url.scm 104 */
																												bool_t BgL_testz00_9728;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_1996)
																														>= ((long) 47)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9728 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1996)
																															< ((long) 59));
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9728 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_9728)
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9727 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														bool_t
																															BgL_testz00_9734;
																														if (((long)
																																(BgL_currentzd2charzd2_1996)
																																>= ((long) 64)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9734
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1996)
																																	<
																																	((long) 71));
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9734
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_9734)
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9727
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																if (
																																	((long)
																																		(BgL_currentzd2charzd2_1996)
																																		>=
																																		((long)
																																			97)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9727
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_1996)
																																			<
																																			((long)
																																				103));
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9727
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																													}
																											}
																											if (BgL_testz00_9727)
																												{	/* Unsafe/url.scm 104 */
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_1995;
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9746;
																													obj_t
																														BgL_inputzd2portzd2_9745;
																													BgL_inputzd2portzd2_9745
																														=
																														BgL_inputzd2portzd2_1992;
																													BgL_lastzd2matchzd2_9746
																														=
																														BgL_newzd2matchzd2_1995;
																													BgL_lastzd2matchzd2_1981
																														=
																														BgL_lastzd2matchzd2_9746;
																													BgL_inputzd2portzd2_1980
																														=
																														BgL_inputzd2portzd2_9745;
																													goto
																														BgL_zc3anonymousza32786ze3z83_1982;
																												}
																										}
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Unsafe/url.scm 104 */
																			bool_t BgL_testz00_9747;

																			{	/* Unsafe/url.scm 104 */
																				bool_t BgL_testz00_9748;

																				if (
																					((long) (BgL_currentzd2charzd2_1455)
																						== ((long) 33)))
																					{	/* Unsafe/url.scm 104 */
																						BgL_testz00_9748 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/url.scm 104 */
																						BgL_testz00_9748 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1455) ==
																							((long) 32));
																					}
																				if (BgL_testz00_9748)
																					{	/* Unsafe/url.scm 104 */
																						BgL_testz00_9747 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/url.scm 104 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1455) ==
																								((long) 36)))
																							{	/* Unsafe/url.scm 104 */
																								BgL_testz00_9747 = ((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/url.scm 104 */
																								bool_t BgL_testz00_9757;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1455)
																										>= ((long) 38)))
																									{	/* Unsafe/url.scm 104 */
																										BgL_testz00_9757 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1455)
																											< ((long) 47));
																									}
																								else
																									{	/* Unsafe/url.scm 104 */
																										BgL_testz00_9757 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_9757)
																									{	/* Unsafe/url.scm 104 */
																										BgL_testz00_9747 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/url.scm 104 */
																										bool_t BgL_testz00_9763;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1455)
																												>= ((long) 48)))
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9763 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1455)
																													< ((long) 58));
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9763 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_9763)
																											{	/* Unsafe/url.scm 104 */
																												BgL_testz00_9747 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/url.scm 104 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1455)
																														== ((long) 59)))
																													{	/* Unsafe/url.scm 104 */
																														BgL_testz00_9747 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/url.scm 104 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1455)
																																== ((long) 61)))
																															{	/* Unsafe/url.scm 104 */
																																BgL_testz00_9747
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Unsafe/url.scm 104 */
																																bool_t
																																	BgL_testz00_9775;
																																if (((long)
																																		(BgL_currentzd2charzd2_1455)
																																		>=
																																		((long)
																																			65)))
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9775
																																			=
																																			((long)
																																			(BgL_currentzd2charzd2_1455)
																																			<
																																			((long)
																																				91));
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9775
																																			=
																																			((bool_t)
																																			0);
																																	}
																																if (BgL_testz00_9775)
																																	{	/* Unsafe/url.scm 104 */
																																		BgL_testz00_9747
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Unsafe/url.scm 104 */
																																		if (
																																			((long)
																																				(BgL_currentzd2charzd2_1455)
																																				==
																																				((long)
																																					95)))
																																			{	/* Unsafe/url.scm 104 */
																																				BgL_testz00_9747
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Unsafe/url.scm 104 */
																																				bool_t
																																					BgL_testz00_9784;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1455)
																																						>=
																																						((long) 97)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9784
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1455)
																																							<
																																							((long) 123));
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9784
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_9784)
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9747
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1455) == ((long) 124)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9747
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9747
																																									=
																																									(
																																									(long)
																																									(BgL_currentzd2charzd2_1455)
																																									==
																																									((long) 126));
																			}}}}}}}}}}}
																			if (BgL_testz00_9747)
																				{	/* Unsafe/url.scm 104 */
																					BgL_inputzd2portzd2_1563 =
																						BgL_inputzd2portzd2_1452;
																					BgL_lastzd2matchzd2_1564 =
																						BgL_lastzd2matchzd2_1453;
																				BgL_zc3anonymousza32468ze3z83_1565:
																					{	/* Unsafe/url.scm 104 */
																						long BgL_newzd2matchzd2_1566;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1563);
																						BgL_newzd2matchzd2_1566 =
																							((long) 2);
																						{	/* Unsafe/url.scm 104 */
																							int BgL_currentzd2charzd2_1567;

																							BgL_currentzd2charzd2_1567 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1563);
																							if (((long)
																									(BgL_currentzd2charzd2_1567)
																									== ((long) 0)))
																								{	/* Unsafe/url.scm 104 */
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_1563))
																										{	/* Unsafe/url.scm 104 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_1563))
																												{

																													goto
																														BgL_zc3anonymousza32468ze3z83_1565;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_1566;
																												}
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_9805;
																											obj_t
																												BgL_inputzd2portzd2_9804;
																											BgL_inputzd2portzd2_9804 =
																												BgL_inputzd2portzd2_1563;
																											BgL_lastzd2matchzd2_9805 =
																												BgL_newzd2matchzd2_1566;
																											BgL_lastzd2matchzd2_1981 =
																												BgL_lastzd2matchzd2_9805;
																											BgL_inputzd2portzd2_1980 =
																												BgL_inputzd2portzd2_9804;
																											goto
																												BgL_zc3anonymousza32786ze3z83_1982;
																										}
																								}
																							else
																								{	/* Unsafe/url.scm 104 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1567)
																											== ((long) 64)))
																										{
																											long
																												BgL_lastzd2matchzd2_9810;
																											obj_t
																												BgL_inputzd2portzd2_9809;
																											BgL_inputzd2portzd2_9809 =
																												BgL_inputzd2portzd2_1563;
																											BgL_lastzd2matchzd2_9810 =
																												BgL_newzd2matchzd2_1566;
																											BgL_lastzd2matchzd2_1541 =
																												BgL_lastzd2matchzd2_9810;
																											BgL_inputzd2portzd2_1540 =
																												BgL_inputzd2portzd2_9809;
																											goto
																												BgL_zc3anonymousza32449ze3z83_1542;
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1567)
																													== ((long) 60)))
																												{
																													long
																														BgL_lastzd2matchzd2_9815;
																													obj_t
																														BgL_inputzd2portzd2_9814;
																													BgL_inputzd2portzd2_9814
																														=
																														BgL_inputzd2portzd2_1563;
																													BgL_lastzd2matchzd2_9815
																														=
																														BgL_newzd2matchzd2_1566;
																													BgL_lastzd2matchzd2_1682
																														=
																														BgL_lastzd2matchzd2_9815;
																													BgL_inputzd2portzd2_1681
																														=
																														BgL_inputzd2portzd2_9814;
																													goto
																														BgL_zc3anonymousza32554ze3z83_1683;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1567)
																															== ((long) 58)))
																														{
																															long
																																BgL_lastzd2matchzd2_9820;
																															obj_t
																																BgL_inputzd2portzd2_9819;
																															BgL_inputzd2portzd2_9819
																																=
																																BgL_inputzd2portzd2_1563;
																															BgL_lastzd2matchzd2_9820
																																=
																																BgL_newzd2matchzd2_1566;
																															BgL_lastzd2matchzd2_1496
																																=
																																BgL_lastzd2matchzd2_9820;
																															BgL_inputzd2portzd2_1495
																																=
																																BgL_inputzd2portzd2_9819;
																															goto
																																BgL_zc3anonymousza32411ze3z83_1497;
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1567)
																																	==
																																	((long) 47)))
																																{
																																	long
																																		BgL_lastzd2matchzd2_9825;
																																	obj_t
																																		BgL_inputzd2portzd2_9824;
																																	BgL_inputzd2portzd2_9824
																																		=
																																		BgL_inputzd2portzd2_1563;
																																	BgL_lastzd2matchzd2_9825
																																		=
																																		BgL_newzd2matchzd2_1566;
																																	BgL_lastzd2matchzd2_1519
																																		=
																																		BgL_lastzd2matchzd2_9825;
																																	BgL_inputzd2portzd2_1518
																																		=
																																		BgL_inputzd2portzd2_9824;
																																	goto
																																		BgL_zc3anonymousza32430ze3z83_1520;
																																}
																															else
																																{	/* Unsafe/url.scm 104 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1567)
																																			==
																																			((long)
																																				37)))
																																		{
																																			long
																																				BgL_lastzd2matchzd2_9830;
																																			obj_t
																																				BgL_inputzd2portzd2_9829;
																																			BgL_inputzd2portzd2_9829
																																				=
																																				BgL_inputzd2portzd2_1563;
																																			BgL_lastzd2matchzd2_9830
																																				=
																																				BgL_newzd2matchzd2_1566;
																																			BgL_lastzd2matchzd2_1842
																																				=
																																				BgL_lastzd2matchzd2_9830;
																																			BgL_inputzd2portzd2_1841
																																				=
																																				BgL_inputzd2portzd2_9829;
																																			goto
																																				BgL_zc3anonymousza32687ze3z83_1843;
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			bool_t
																																				BgL_testz00_9831;
																																			{	/* Unsafe/url.scm 104 */
																																				bool_t
																																					BgL_testz00_9832;
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1567)
																																						==
																																						((long) 33)))
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9832
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9832
																																							=
																																							(
																																							(long)
																																							(BgL_currentzd2charzd2_1567)
																																							==
																																							((long) 32));
																																					}
																																				if (BgL_testz00_9832)
																																					{	/* Unsafe/url.scm 104 */
																																						BgL_testz00_9831
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/url.scm 104 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1567) == ((long) 36)))
																																							{	/* Unsafe/url.scm 104 */
																																								BgL_testz00_9831
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Unsafe/url.scm 104 */
																																								bool_t
																																									BgL_testz00_9841;
																																								if (((long) (BgL_currentzd2charzd2_1567) >= ((long) 38)))
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9841
																																											=
																																											(
																																											(long)
																																											(BgL_currentzd2charzd2_1567)
																																											<
																																											((long) 47));
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9841
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_testz00_9841)
																																									{	/* Unsafe/url.scm 104 */
																																										BgL_testz00_9831
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Unsafe/url.scm 104 */
																																										bool_t
																																											BgL_testz00_9847;
																																										if (((long) (BgL_currentzd2charzd2_1567) >= ((long) 48)))
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9847
																																													=
																																													(
																																													(long)
																																													(BgL_currentzd2charzd2_1567)
																																													<
																																													((long) 58));
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9847
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_testz00_9847)
																																											{	/* Unsafe/url.scm 104 */
																																												BgL_testz00_9831
																																													=
																																													(
																																													(bool_t)
																																													1);
																																											}
																																										else
																																											{	/* Unsafe/url.scm 104 */
																																												if (((long) (BgL_currentzd2charzd2_1567) == ((long) 59)))
																																													{	/* Unsafe/url.scm 104 */
																																														BgL_testz00_9831
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																												else
																																													{	/* Unsafe/url.scm 104 */
																																														if (((long) (BgL_currentzd2charzd2_1567) == ((long) 61)))
																																															{	/* Unsafe/url.scm 104 */
																																																BgL_testz00_9831
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Unsafe/url.scm 104 */
																																																bool_t
																																																	BgL_testz00_9859;
																																																if (((long) (BgL_currentzd2charzd2_1567) >= ((long) 65)))
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9859
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_currentzd2charzd2_1567)
																																																			<
																																																			((long) 91));
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9859
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_testz00_9859)
																																																	{	/* Unsafe/url.scm 104 */
																																																		BgL_testz00_9831
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Unsafe/url.scm 104 */
																																																		if (((long) (BgL_currentzd2charzd2_1567) == ((long) 95)))
																																																			{	/* Unsafe/url.scm 104 */
																																																				BgL_testz00_9831
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Unsafe/url.scm 104 */
																																																				bool_t
																																																					BgL_testz00_9868;
																																																				if (((long) (BgL_currentzd2charzd2_1567) >= ((long) 97)))
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9868
																																																							=
																																																							(
																																																							(long)
																																																							(BgL_currentzd2charzd2_1567)
																																																							<
																																																							((long) 123));
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9868
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				if (BgL_testz00_9868)
																																																					{	/* Unsafe/url.scm 104 */
																																																						BgL_testz00_9831
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Unsafe/url.scm 104 */
																																																						if (((long) (BgL_currentzd2charzd2_1567) == ((long) 124)))
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9831
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Unsafe/url.scm 104 */
																																																								BgL_testz00_9831
																																																									=
																																																									(
																																																									(long)
																																																									(BgL_currentzd2charzd2_1567)
																																																									==
																																																									((long) 126));
																																			}}}}}}}}}}}
																																			if (BgL_testz00_9831)
																																				{
																																					long
																																						BgL_lastzd2matchzd2_9880;
																																					obj_t
																																						BgL_inputzd2portzd2_9879;
																																					BgL_inputzd2portzd2_9879
																																						=
																																						BgL_inputzd2portzd2_1563;
																																					BgL_lastzd2matchzd2_9880
																																						=
																																						BgL_newzd2matchzd2_1566;
																																					BgL_lastzd2matchzd2_1597
																																						=
																																						BgL_lastzd2matchzd2_9880;
																																					BgL_inputzd2portzd2_1596
																																						=
																																						BgL_inputzd2portzd2_9879;
																																					goto
																																						BgL_zc3anonymousza32494ze3z83_1598;
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_9882;
																																					obj_t
																																						BgL_inputzd2portzd2_9881;
																																					BgL_inputzd2portzd2_9881
																																						=
																																						BgL_inputzd2portzd2_1563;
																																					BgL_lastzd2matchzd2_9882
																																						=
																																						BgL_newzd2matchzd2_1566;
																																					BgL_lastzd2matchzd2_1981
																																						=
																																						BgL_lastzd2matchzd2_9882;
																																					BgL_inputzd2portzd2_1980
																																						=
																																						BgL_inputzd2portzd2_9881;
																																					goto
																																						BgL_zc3anonymousza32786ze3z83_1982;
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
																				{	/* Unsafe/url.scm 104 */
																					if (
																						((long) (BgL_currentzd2charzd2_1455)
																							== ((long) 13)))
																						{	/* Unsafe/url.scm 104 */
																							BgL_inputzd2portzd2_1874 =
																								BgL_inputzd2portzd2_1452;
																							BgL_lastzd2matchzd2_1875 =
																								BgL_lastzd2matchzd2_1453;
																						BgL_zc3anonymousza32710ze3z83_1876:
																							{	/* Unsafe/url.scm 104 */
																								long BgL_newzd2matchzd2_1877;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1874);
																								BgL_newzd2matchzd2_1877 =
																									((long) 2);
																								{	/* Unsafe/url.scm 104 */
																									int
																										BgL_currentzd2charzd2_1878;
																									BgL_currentzd2charzd2_1878 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1874);
																									if (((long)
																											(BgL_currentzd2charzd2_1878)
																											== ((long) 0)))
																										{	/* Unsafe/url.scm 104 */
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_1874))
																												{	/* Unsafe/url.scm 104 */
																													if (rgc_fill_buffer
																														(BgL_inputzd2portzd2_1874))
																														{

																															goto
																																BgL_zc3anonymousza32710ze3z83_1876;
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															BgL_matchz00_2108
																																=
																																BgL_newzd2matchzd2_1877;
																														}
																												}
																											else
																												{
																													long
																														BgL_lastzd2matchzd2_9896;
																													obj_t
																														BgL_inputzd2portzd2_9895;
																													BgL_inputzd2portzd2_9895
																														=
																														BgL_inputzd2portzd2_1874;
																													BgL_lastzd2matchzd2_9896
																														=
																														BgL_newzd2matchzd2_1877;
																													BgL_lastzd2matchzd2_1981
																														=
																														BgL_lastzd2matchzd2_9896;
																													BgL_inputzd2portzd2_1980
																														=
																														BgL_inputzd2portzd2_9895;
																													goto
																														BgL_zc3anonymousza32786ze3z83_1982;
																												}
																										}
																									else
																										{	/* Unsafe/url.scm 104 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1878)
																													== ((long) 58)))
																												{	/* Unsafe/url.scm 104 */
																													long
																														BgL_newzd2matchzd2_5220;
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_1874);
																													BgL_newzd2matchzd2_5220
																														= ((long) 1);
																													BgL_matchz00_2108 =
																														BgL_newzd2matchzd2_5220;
																												}
																											else
																												{	/* Unsafe/url.scm 104 */
																													if (
																														((long)
																															(BgL_currentzd2charzd2_1878)
																															== ((long) 10)))
																														{	/* Unsafe/url.scm 104 */
																															BgL_inputzd2portzd2_1639
																																=
																																BgL_inputzd2portzd2_1874;
																															BgL_lastzd2matchzd2_1640
																																=
																																BgL_newzd2matchzd2_1877;
																														BgL_zc3anonymousza32527ze3z83_1641:
																															{	/* Unsafe/url.scm 104 */
																																long
																																	BgL_newzd2matchzd2_1642;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_1639);
																																BgL_newzd2matchzd2_1642
																																	= ((long) 2);
																																{	/* Unsafe/url.scm 104 */
																																	int
																																		BgL_currentzd2charzd2_1643;
																																	BgL_currentzd2charzd2_1643
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_inputzd2portzd2_1639);
																																	if (((long)
																																			(BgL_currentzd2charzd2_1643)
																																			==
																																			((long)
																																				0)))
																																		{	/* Unsafe/url.scm 104 */
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1639))
																																				{	/* Unsafe/url.scm 104 */
																																					if (rgc_fill_buffer(BgL_inputzd2portzd2_1639))
																																						{

																																							goto
																																								BgL_zc3anonymousza32527ze3z83_1641;
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_matchz00_2108
																																								=
																																								BgL_newzd2matchzd2_1642;
																																						}
																																				}
																																			else
																																				{
																																					long
																																						BgL_lastzd2matchzd2_9914;
																																					obj_t
																																						BgL_inputzd2portzd2_9913;
																																					BgL_inputzd2portzd2_9913
																																						=
																																						BgL_inputzd2portzd2_1639;
																																					BgL_lastzd2matchzd2_9914
																																						=
																																						BgL_newzd2matchzd2_1642;
																																					BgL_lastzd2matchzd2_1981
																																						=
																																						BgL_lastzd2matchzd2_9914;
																																					BgL_inputzd2portzd2_1980
																																						=
																																						BgL_inputzd2portzd2_9913;
																																					goto
																																						BgL_zc3anonymousza32786ze3z83_1982;
																																				}
																																		}
																																	else
																																		{	/* Unsafe/url.scm 104 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1643)
																																					==
																																					((long) 58)))
																																				{	/* Unsafe/url.scm 104 */
																																					long
																																						BgL_newzd2matchzd2_4838;
																																					RGC_STOP_MATCH
																																						(BgL_inputzd2portzd2_1639);
																																					BgL_newzd2matchzd2_4838
																																						=
																																						(
																																						(long)
																																						1);
																																					BgL_matchz00_2108
																																						=
																																						BgL_newzd2matchzd2_4838;
																																				}
																																			else
																																				{	/* Unsafe/url.scm 104 */
																																					bool_t
																																						BgL_testz00_9919;
																																					if ((
																																							(long)
																																							(BgL_currentzd2charzd2_1643)
																																							==
																																							((long) 47)))
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_testz00_9919
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/url.scm 104 */
																																							if (((long) (BgL_currentzd2charzd2_1643) == ((long) 58)))
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9919
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/url.scm 104 */
																																									BgL_testz00_9919
																																										=
																																										(
																																										(long)
																																										(BgL_currentzd2charzd2_1643)
																																										==
																																										((long) 64));
																																						}}
																																					if (BgL_testz00_9919)
																																						{	/* Unsafe/url.scm 104 */
																																							BgL_matchz00_2108
																																								=
																																								BgL_newzd2matchzd2_1642;
																																						}
																																					else
																																						{
																																							long
																																								BgL_lastzd2matchzd2_9929;
																																							obj_t
																																								BgL_inputzd2portzd2_9928;
																																							BgL_inputzd2portzd2_9928
																																								=
																																								BgL_inputzd2portzd2_1639;
																																							BgL_lastzd2matchzd2_9929
																																								=
																																								BgL_newzd2matchzd2_1642;
																																							BgL_lastzd2matchzd2_1981
																																								=
																																								BgL_lastzd2matchzd2_9929;
																																							BgL_inputzd2portzd2_1980
																																								=
																																								BgL_inputzd2portzd2_9928;
																																							goto
																																								BgL_zc3anonymousza32786ze3z83_1982;
																																						}
																																				}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Unsafe/url.scm 104 */
																															bool_t
																																BgL_testz00_9930;
																															switch ((long)
																																(BgL_currentzd2charzd2_1878))
																																{
																																case ((long) 10):

																																	BgL_testz00_9930 = ((bool_t) 1);
																																	break;
																																case ((long) 47):

																																	BgL_testz00_9930 = ((bool_t) 1);
																																	break;
																																case ((long) 58):

																																	BgL_testz00_9930 = ((bool_t) 1);
																																	break;
																																default:
																																	BgL_testz00_9930 = ((long) (BgL_currentzd2charzd2_1878) == ((long) 64));
																																}
																															if (BgL_testz00_9930)
																																{	/* Unsafe/url.scm 104 */
																																	BgL_matchz00_2108
																																		=
																																		BgL_newzd2matchzd2_1877;
																																}
																															else
																																{
																																	long
																																		BgL_lastzd2matchzd2_9936;
																																	obj_t
																																		BgL_inputzd2portzd2_9935;
																																	BgL_inputzd2portzd2_9935
																																		=
																																		BgL_inputzd2portzd2_1874;
																																	BgL_lastzd2matchzd2_9936
																																		=
																																		BgL_newzd2matchzd2_1877;
																																	BgL_lastzd2matchzd2_1981
																																		=
																																		BgL_lastzd2matchzd2_9936;
																																	BgL_inputzd2portzd2_1980
																																		=
																																		BgL_inputzd2portzd2_9935;
																																	goto
																																		BgL_zc3anonymousza32786ze3z83_1982;
																																}
																														}
																												}
																										}
																								}
																							}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_9938;

																							obj_t BgL_inputzd2portzd2_9937;

																							BgL_inputzd2portzd2_9937 =
																								BgL_inputzd2portzd2_1452;
																							BgL_lastzd2matchzd2_9938 =
																								BgL_lastzd2matchzd2_1453;
																							BgL_lastzd2matchzd2_1863 =
																								BgL_lastzd2matchzd2_9938;
																							BgL_inputzd2portzd2_1862 =
																								BgL_inputzd2portzd2_9937;
																							goto
																								BgL_zc3anonymousza32702ze3z83_1864;
																						}
																				}
																		}
																}
														}
												}
										}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1370);
						switch (BgL_matchz00_2108)
							{
							case ((long) 5):

								{	/* Unsafe/url.scm 128 */
									obj_t BgL_arg2886z00_2112;

									obj_t BgL_arg2888z00_2114;

									BgL_arg2886z00_2112 = BgL_inputzd2portzd2_1370;
									{	/* Unsafe/url.scm 104 */
										bool_t BgL_testz00_9940;

										{	/* Unsafe/url.scm 104 */
											long BgL_arg2877z00_2097;

											BgL_arg2877z00_2097 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1370);
											BgL_testz00_9940 = (BgL_arg2877z00_2097 == ((long) 0));
										}
										if (BgL_testz00_9940)
											{	/* Unsafe/url.scm 104 */
												BgL_arg2888z00_2114 = BCNST(256);
											}
										else
											{	/* Unsafe/url.scm 104 */
												obj_t BgL_inputzd2portzd2_5486;

												BgL_inputzd2portzd2_5486 = BgL_inputzd2portzd2_1370;
												BgL_arg2888z00_2114 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5486));
											}
									}
									{	/* Unsafe/url.scm 128 */
										obj_t BgL_linez00_5493;

										BgL_linez00_5493 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00
											(BgL_arg2886z00_2112);
										{	/* Unsafe/url.scm 128 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3521z00_5494;

											{	/* Unsafe/url.scm 128 */
												obj_t BgL_arg3522z00_5495;

												obj_t BgL_arg3523z00_5496;

												obj_t BgL_arg3524z00_5497;

												{	/* Unsafe/url.scm 128 */

													{	/* Unsafe/url.scm 128 */

														BgL_arg3522z00_5495 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg3523z00_5496 = BGl_symbol4127z00zz__urlz00;
												if (STRINGP(BgL_linez00_5493))
													{	/* Unsafe/url.scm 128 */
														obj_t BgL_list3526z00_5500;

														{	/* Unsafe/url.scm 128 */
															obj_t BgL_arg3527z00_5501;

															BgL_arg3527z00_5501 =
																MAKE_PAIR(BgL_linez00_5493, BNIL);
															BgL_list3526z00_5500 =
																MAKE_PAIR(BgL_arg2888z00_2114,
																BgL_arg3527z00_5501);
														}
														BgL_arg3524z00_5497 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4129z00zz__urlz00,
															BgL_list3526z00_5500);
													}
												else
													{	/* Unsafe/url.scm 128 */
														BgL_arg3524z00_5497 = BgL_arg2888z00_2114;
													}
												BgL_arg3521z00_5494 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg3522z00_5495,
													BgL_arg3523z00_5496, BGl_string4130z00zz__urlz00,
													BgL_arg3524z00_5497);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg3521z00_5494));
										}
									}
								}
								break;
							case ((long) 4):

								return BFALSE;
								break;
							case ((long) 3):

								{	/* Unsafe/url.scm 124 */
									obj_t BgL_val4_2046z00_2119;

									{	/* Unsafe/url.scm 124 */
										obj_t BgL_res4052z00_5510;

										{	/* Unsafe/url.scm 124 */
											int BgL_arg2823z00_5504;

											{	/* Unsafe/url.scm 124 */
												int BgL_res4051z00_5506;

												{	/* Unsafe/url.scm 124 */
													obj_t BgL_inputzd2portzd2_5505;

													BgL_inputzd2portzd2_5505 = BgL_inputzd2portzd2_1370;
													BgL_res4051z00_5506 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5505));
												}
												BgL_arg2823z00_5504 = BgL_res4051z00_5506;
											}
											BgL_res4052z00_5510 =
												rgc_buffer_substring(BgL_inputzd2portzd2_1370,
												((long) 0), (long) (BgL_arg2823z00_5504));
										}
										BgL_val4_2046z00_2119 = BgL_res4052z00_5510;
									}
									{	/* Unsafe/url.scm 124 */
										int BgL_auxz00_9959;

										BgL_auxz00_9959 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_9959);
									}
									{	/* Unsafe/url.scm 124 */
										int BgL_auxz00_9962;

										BgL_auxz00_9962 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_9962, BFALSE);
									}
									{	/* Unsafe/url.scm 124 */
										int BgL_auxz00_9965;

										BgL_auxz00_9965 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_9965, BFALSE);
									}
									{	/* Unsafe/url.scm 124 */
										int BgL_auxz00_9968;

										BgL_auxz00_9968 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_9968, BFALSE);
									}
									{	/* Unsafe/url.scm 124 */
										int BgL_auxz00_9971;

										BgL_auxz00_9971 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_9971, BgL_val4_2046z00_2119);
									}
									return BgL_protocolz00_1371;
								}
								break;
							case ((long) 2):

								{	/* Unsafe/url.scm 119 */
									obj_t BgL_hostz00_2120;

									{	/* Unsafe/url.scm 119 */
										int BgL_arg2893z00_2131;

										{	/* Unsafe/url.scm 119 */
											int BgL_res4053z00_5521;

											{	/* Unsafe/url.scm 119 */
												obj_t BgL_inputzd2portzd2_5520;

												BgL_inputzd2portzd2_5520 = BgL_inputzd2portzd2_1370;
												BgL_res4053z00_5521 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5520));
											}
											BgL_arg2893z00_2131 = BgL_res4053z00_5521;
										}
										BgL_hostz00_2120 =
											BGl_thezd2substringzd2zz__urlz00(BgL_inputzd2portzd2_1370,
											(int) (((long) 0)), BgL_arg2893z00_2131);
									}
									{	/* Unsafe/url.scm 119 */
										long BgL_portz00_2121;

										if (bigloo_strcmp(BgL_protocolz00_1371,
												BGl_string4133z00zz__urlz00))
											{	/* Unsafe/url.scm 120 */
												BgL_portz00_2121 = ((long) 443);
											}
										else
											{	/* Unsafe/url.scm 120 */
												BgL_portz00_2121 = ((long) 80);
											}
										{	/* Unsafe/url.scm 120 */
											obj_t BgL_abspathz00_2122;

											{	/* Unsafe/url.scm 121 */
												obj_t BgL_arg2890z00_2128;

												BgL_arg2890z00_2128 = BgL_inputzd2portzd2_1370;
												BgL_abspathz00_2122 =
													PROCEDURE_ENTRY(BGl_abspathzd2grammarzd2zz__urlz00)
													(BGl_abspathzd2grammarzd2zz__urlz00,
													BgL_arg2890z00_2128, BEOA);
											}
											{	/* Unsafe/url.scm 121 */

												{	/* Unsafe/url.scm 122 */
													obj_t BgL_val1_2048z00_2124;

													BgL_val1_2048z00_2124 = BgL_userinfoz00_1372;
													{	/* Unsafe/url.scm 122 */
														int BgL_auxz00_9982;

														BgL_auxz00_9982 = (int) (((long) 5));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_9982);
													}
													{	/* Unsafe/url.scm 122 */
														int BgL_auxz00_9985;

														BgL_auxz00_9985 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_9985,
															BgL_val1_2048z00_2124);
													}
													{	/* Unsafe/url.scm 122 */
														int BgL_auxz00_9988;

														BgL_auxz00_9988 = (int) (((long) 2));
														BGL_MVALUES_VAL_SET(BgL_auxz00_9988,
															BgL_hostz00_2120);
													}
													{	/* Unsafe/url.scm 122 */
														obj_t BgL_auxz00_9993;

														int BgL_auxz00_9991;

														BgL_auxz00_9993 = BINT(BgL_portz00_2121);
														BgL_auxz00_9991 = (int) (((long) 3));
														BGL_MVALUES_VAL_SET(BgL_auxz00_9991,
															BgL_auxz00_9993);
													}
													{	/* Unsafe/url.scm 122 */
														int BgL_auxz00_9996;

														BgL_auxz00_9996 = (int) (((long) 4));
														BGL_MVALUES_VAL_SET(BgL_auxz00_9996,
															BgL_abspathz00_2122);
													}
													return BgL_protocolz00_1371;
												}
											}
										}
									}
								}
								break;
							case ((long) 1):

								{	/* Unsafe/url.scm 114 */
									obj_t BgL_hostz00_2132;

									{	/* Unsafe/url.scm 114 */
										long BgL_arg2898z00_2143;

										{	/* Unsafe/url.scm 114 */
											int BgL_arg2899z00_2144;

											{	/* Unsafe/url.scm 114 */
												int BgL_res4055z00_5535;

												{	/* Unsafe/url.scm 114 */
													obj_t BgL_inputzd2portzd2_5534;

													BgL_inputzd2portzd2_5534 = BgL_inputzd2portzd2_1370;
													BgL_res4055z00_5535 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5534));
												}
												BgL_arg2899z00_2144 = BgL_res4055z00_5535;
											}
											BgL_arg2898z00_2143 =
												((long) (BgL_arg2899z00_2144) - ((long) 1));
										}
										BgL_hostz00_2132 =
											BGl_thezd2substringzd2zz__urlz00(BgL_inputzd2portzd2_1370,
											(int) (((long) 0)), (int) (BgL_arg2898z00_2143));
									}
									{	/* Unsafe/url.scm 114 */
										obj_t BgL_portz00_2133;

										{	/* Unsafe/url.scm 115 */
											obj_t BgL_arg2896z00_2141;

											BgL_arg2896z00_2141 = BgL_inputzd2portzd2_1370;
											BgL_portz00_2133 =
												PROCEDURE_ENTRY(BGl_httpzd2portzd2grammarz00zz__urlz00)
												(BGl_httpzd2portzd2grammarz00zz__urlz00,
												BgL_arg2896z00_2141, BEOA);
										}
										{	/* Unsafe/url.scm 115 */
											obj_t BgL_abspathz00_2134;

											{	/* Unsafe/url.scm 116 */
												obj_t BgL_arg2894z00_2140;

												BgL_arg2894z00_2140 = BgL_inputzd2portzd2_1370;
												BgL_abspathz00_2134 =
													PROCEDURE_ENTRY(BGl_abspathzd2grammarzd2zz__urlz00)
													(BGl_abspathzd2grammarzd2zz__urlz00,
													BgL_arg2894z00_2140, BEOA);
											}
											{	/* Unsafe/url.scm 116 */

												{	/* Unsafe/url.scm 117 */
													obj_t BgL_val1_2053z00_2136;

													BgL_val1_2053z00_2136 = BgL_userinfoz00_1372;
													{	/* Unsafe/url.scm 117 */
														int BgL_auxz00_10010;

														BgL_auxz00_10010 = (int) (((long) 5));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_10010);
													}
													{	/* Unsafe/url.scm 117 */
														int BgL_auxz00_10013;

														BgL_auxz00_10013 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_10013,
															BgL_val1_2053z00_2136);
													}
													{	/* Unsafe/url.scm 117 */
														int BgL_auxz00_10016;

														BgL_auxz00_10016 = (int) (((long) 2));
														BGL_MVALUES_VAL_SET(BgL_auxz00_10016,
															BgL_hostz00_2132);
													}
													{	/* Unsafe/url.scm 117 */
														int BgL_auxz00_10019;

														BgL_auxz00_10019 = (int) (((long) 3));
														BGL_MVALUES_VAL_SET(BgL_auxz00_10019,
															BgL_portz00_2133);
													}
													{	/* Unsafe/url.scm 117 */
														int BgL_auxz00_10022;

														BgL_auxz00_10022 = (int) (((long) 4));
														BGL_MVALUES_VAL_SET(BgL_auxz00_10022,
															BgL_abspathz00_2134);
													}
													return BgL_protocolz00_1371;
												}
											}
										}
									}
								}
								break;
							case ((long) 0):

								BgL_userinfoz00_1372 =
									BGl_thezd2substringzd2zz__urlz00(BgL_inputzd2portzd2_1370,
									(int) (((long) 0)), (int) (((long) -1)));
								goto BgL_zc3anonymousza32884ze3z83_2107;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_2108));
							}
					}
				}
			}
		}
	}



/* the-substring */
	obj_t BGl_thezd2substringzd2zz__urlz00(obj_t BgL_inputzd2portzd2_7236,
		int BgL_minz00_2037, int BgL_maxz00_2038)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 104 */
			if (((long) (BgL_maxz00_2038) < ((long) 0)))
				{	/* Unsafe/url.scm 104 */
					int BgL_arg2826z00_2041;

					{	/* Unsafe/url.scm 104 */
						int BgL_res4046z00_5460;

						{	/* Unsafe/url.scm 104 */
							obj_t BgL_inputzd2portzd2_5459;

							BgL_inputzd2portzd2_5459 = BgL_inputzd2portzd2_7236;
							BgL_res4046z00_5460 =
								(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5459));
						}
						BgL_arg2826z00_2041 = BgL_res4046z00_5460;
					}
					{	/* Unsafe/url.scm 104 */
						long BgL_za71za7_5461;

						long BgL_za72za7_5462;

						BgL_za71za7_5461 = (long) (BgL_arg2826z00_2041);
						BgL_za72za7_5462 = (long) (BgL_maxz00_2038);
						BgL_maxz00_2038 = (int) ((BgL_za71za7_5461 + BgL_za72za7_5462));
				}}
			else
				{	/* Unsafe/url.scm 104 */
					BFALSE;
				}
			{	/* Unsafe/url.scm 104 */
				bool_t BgL_testz00_10040;

				if (((long) (BgL_minz00_2037) >= ((long) 0)))
					{	/* Unsafe/url.scm 104 */
						if (((long) (BgL_maxz00_2038) >= (long) (BgL_minz00_2037)))
							{	/* Unsafe/url.scm 104 */
								int BgL_arg2836z00_2051;

								{	/* Unsafe/url.scm 104 */
									int BgL_res4047z00_5468;

									{	/* Unsafe/url.scm 104 */
										obj_t BgL_inputzd2portzd2_5467;

										BgL_inputzd2portzd2_5467 = BgL_inputzd2portzd2_7236;
										BgL_res4047z00_5468 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5467));
									}
									BgL_arg2836z00_2051 = BgL_res4047z00_5468;
								}
								BgL_testz00_10040 =
									((long) (BgL_maxz00_2038) <= (long) (BgL_arg2836z00_2051));
							}
						else
							{	/* Unsafe/url.scm 104 */
								BgL_testz00_10040 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/url.scm 104 */
						BgL_testz00_10040 = ((bool_t) 0);
					}
				if (BgL_testz00_10040)
					{	/* Unsafe/url.scm 104 */
						return
							rgc_buffer_substring(BgL_inputzd2portzd2_7236,
							(long) (BgL_minz00_2037), (long) (BgL_maxz00_2038));
					}
				else
					{	/* Unsafe/url.scm 104 */
						obj_t BgL_arg2829z00_2044;

						obj_t BgL_arg2830z00_2045;

						{	/* Unsafe/url.scm 104 */
							obj_t BgL_arg2832z00_2047;

							{	/* Unsafe/url.scm 104 */
								obj_t BgL_res4049z00_5481;

								{	/* Unsafe/url.scm 104 */
									int BgL_arg2823z00_5475;

									{	/* Unsafe/url.scm 104 */
										int BgL_res4048z00_5477;

										{	/* Unsafe/url.scm 104 */
											obj_t BgL_inputzd2portzd2_5476;

											BgL_inputzd2portzd2_5476 = BgL_inputzd2portzd2_7236;
											BgL_res4048z00_5477 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_5476));
										}
										BgL_arg2823z00_5475 = BgL_res4048z00_5477;
									}
									BgL_res4049z00_5481 =
										rgc_buffer_substring(BgL_inputzd2portzd2_7236, ((long) 0),
										(long) (BgL_arg2823z00_5475));
								}
								BgL_arg2832z00_2047 = BgL_res4049z00_5481;
							}
							{	/* Unsafe/url.scm 104 */
								obj_t BgL_list2833z00_2048;

								BgL_list2833z00_2048 = MAKE_PAIR(BgL_arg2832z00_2047, BNIL);
								BgL_arg2829z00_2044 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string4134z00zz__urlz00, BgL_list2833z00_2048);
						}}
						BgL_arg2830z00_2045 =
							MAKE_PAIR(BINT(BgL_minz00_2037), BINT(BgL_maxz00_2038));
						return
							BGl_errorz00zz__errorz00(BGl_string4135z00zz__urlz00,
							BgL_arg2829z00_2044, BgL_arg2830z00_2045);
					}
			}
		}
	}



/* <anonymous:2238> */
	obj_t BGl_zc3anonymousza32238ze3z83zz__urlz00(obj_t BgL_envz00_7204,
		obj_t BgL_inputzd2portzd2_7205)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 89 */
			{
				obj_t BgL_inputzd2portzd2_1122;

				BgL_inputzd2portzd2_1122 = BgL_inputzd2portzd2_7205;
				{
					obj_t BgL_inputzd2portzd2_1158;

					long BgL_lastzd2matchzd2_1159;

					obj_t BgL_inputzd2portzd2_1169;

					long BgL_lastzd2matchzd2_1170;

					obj_t BgL_inputzd2portzd2_1180;

					long BgL_lastzd2matchzd2_1181;

					obj_t BgL_inputzd2portzd2_1189;

					long BgL_lastzd2matchzd2_1190;

					obj_t BgL_inputzd2portzd2_1198;

					long BgL_lastzd2matchzd2_1199;

					obj_t BgL_inputzd2portzd2_1206;

					long BgL_lastzd2matchzd2_1207;

					obj_t BgL_inputzd2portzd2_1215;

					long BgL_lastzd2matchzd2_1216;

					obj_t BgL_inputzd2portzd2_1222;

					long BgL_lastzd2matchzd2_1223;

					int BgL_minz00_1244;

					int BgL_maxz00_1245;

					RGC_START_MATCH(BgL_inputzd2portzd2_1122);
					{	/* Unsafe/url.scm 89 */
						long BgL_matchz00_1315;

						BgL_inputzd2portzd2_1206 = BgL_inputzd2portzd2_1122;
						BgL_lastzd2matchzd2_1207 = ((long) 3);
					BgL_zc3anonymousza32268ze3z83_1208:
						{	/* Unsafe/url.scm 89 */
							int BgL_currentzd2charzd2_1209;

							BgL_currentzd2charzd2_1209 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1206);
							switch ((long) (BgL_currentzd2charzd2_1209))
								{
								case ((long) 0):

									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1206))
										{	/* Unsafe/url.scm 89 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1206))
												{

													goto BgL_zc3anonymousza32268ze3z83_1208;
												}
											else
												{	/* Unsafe/url.scm 89 */
													BgL_matchz00_1315 = BgL_lastzd2matchzd2_1207;
												}
										}
									else
										{	/* Unsafe/url.scm 89 */
											BgL_inputzd2portzd2_1189 = BgL_inputzd2portzd2_1206;
											BgL_lastzd2matchzd2_1190 = BgL_lastzd2matchzd2_1207;
										BgL_zc3anonymousza32258ze3z83_1191:
											{	/* Unsafe/url.scm 89 */
												long BgL_newzd2matchzd2_1192;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1189);
												BgL_newzd2matchzd2_1192 = ((long) 3);
												{	/* Unsafe/url.scm 89 */
													int BgL_currentzd2charzd2_1193;

													BgL_currentzd2charzd2_1193 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1189);
													if (
														((long) (BgL_currentzd2charzd2_1193) == ((long) 0)))
														{	/* Unsafe/url.scm 89 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1189))
																{	/* Unsafe/url.scm 89 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_1189))
																		{

																			goto BgL_zc3anonymousza32258ze3z83_1191;
																		}
																	else
																		{	/* Unsafe/url.scm 89 */
																			BgL_matchz00_1315 =
																				BgL_newzd2matchzd2_1192;
																		}
																}
															else
																{	/* Unsafe/url.scm 89 */
																	BgL_inputzd2portzd2_1198 =
																		BgL_inputzd2portzd2_1189;
																	BgL_lastzd2matchzd2_1199 =
																		BgL_newzd2matchzd2_1192;
																BgL_zc3anonymousza32263ze3z83_1200:
																	{	/* Unsafe/url.scm 89 */
																		int BgL_currentzd2charzd2_1201;

																		BgL_currentzd2charzd2_1201 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1198);
																		if (((long) (BgL_currentzd2charzd2_1201) ==
																				((long) 0)))
																			{	/* Unsafe/url.scm 89 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_1198))
																					{	/* Unsafe/url.scm 89 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_1198))
																							{

																								goto
																									BgL_zc3anonymousza32263ze3z83_1200;
																							}
																						else
																							{	/* Unsafe/url.scm 89 */
																								BgL_matchz00_1315 =
																									BgL_lastzd2matchzd2_1199;
																							}
																					}
																				else
																					{

																						goto
																							BgL_zc3anonymousza32263ze3z83_1200;
																					}
																			}
																		else
																			{	/* Unsafe/url.scm 89 */
																				if (
																					((long) (BgL_currentzd2charzd2_1201)
																						== ((long) 58)))
																					{	/* Unsafe/url.scm 89 */
																						BgL_inputzd2portzd2_1215 =
																							BgL_inputzd2portzd2_1198;
																						BgL_lastzd2matchzd2_1216 =
																							BgL_lastzd2matchzd2_1199;
																					BgL_zc3anonymousza32272ze3z83_1217:
																						{	/* Unsafe/url.scm 89 */
																							int BgL_currentzd2charzd2_1218;

																							BgL_currentzd2charzd2_1218 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1215);
																							if (((long)
																									(BgL_currentzd2charzd2_1218)
																									== ((long) 0)))
																								{	/* Unsafe/url.scm 89 */
																									bool_t BgL_testz00_10096;

																									{	/* Unsafe/url.scm 89 */
																										bool_t BgL_res4024z00_4398;

																										{	/* Unsafe/url.scm 89 */
																											obj_t
																												BgL_inputzd2portzd2_4394;
																											BgL_inputzd2portzd2_4394 =
																												BgL_inputzd2portzd2_1215;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_4394))
																												{	/* Unsafe/url.scm 89 */
																													BgL_res4024z00_4398 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_4394);
																												}
																											else
																												{	/* Unsafe/url.scm 89 */
																													BgL_res4024z00_4398 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_10096 =
																											BgL_res4024z00_4398;
																									}
																									if (BgL_testz00_10096)
																										{

																											goto
																												BgL_zc3anonymousza32272ze3z83_1217;
																										}
																									else
																										{	/* Unsafe/url.scm 89 */
																											BgL_matchz00_1315 =
																												BgL_lastzd2matchzd2_1216;
																										}
																								}
																							else
																								{	/* Unsafe/url.scm 89 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1218)
																											== ((long) 47)))
																										{	/* Unsafe/url.scm 89 */
																											BgL_inputzd2portzd2_1222 =
																												BgL_inputzd2portzd2_1215;
																											BgL_lastzd2matchzd2_1223 =
																												BgL_lastzd2matchzd2_1216;
																										BgL_zc3anonymousza32276ze3z83_1224:
																											{	/* Unsafe/url.scm 89 */
																												int
																													BgL_currentzd2charzd2_1225;
																												BgL_currentzd2charzd2_1225
																													=
																													RGC_BUFFER_GET_CHAR
																													(BgL_inputzd2portzd2_1222);
																												if (((long)
																														(BgL_currentzd2charzd2_1225)
																														== ((long) 0)))
																													{	/* Unsafe/url.scm 89 */
																														bool_t
																															BgL_testz00_10107;
																														{	/* Unsafe/url.scm 89 */
																															bool_t
																																BgL_res4025z00_4408;
																															{	/* Unsafe/url.scm 89 */
																																obj_t
																																	BgL_inputzd2portzd2_4404;
																																BgL_inputzd2portzd2_4404
																																	=
																																	BgL_inputzd2portzd2_1222;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4404))
																																	{	/* Unsafe/url.scm 89 */
																																		BgL_res4025z00_4408
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_4404);
																																	}
																																else
																																	{	/* Unsafe/url.scm 89 */
																																		BgL_res4025z00_4408
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															BgL_testz00_10107
																																=
																																BgL_res4025z00_4408;
																														}
																														if (BgL_testz00_10107)
																															{

																																goto
																																	BgL_zc3anonymousza32276ze3z83_1224;
																															}
																														else
																															{	/* Unsafe/url.scm 89 */
																																BgL_matchz00_1315
																																	=
																																	BgL_lastzd2matchzd2_1223;
																															}
																													}
																												else
																													{	/* Unsafe/url.scm 89 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1225)
																																== ((long) 47)))
																															{	/* Unsafe/url.scm 89 */
																																long
																																	BgL_newzd2matchzd2_4413;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_1222);
																																BgL_newzd2matchzd2_4413
																																	= ((long) 2);
																																BgL_matchz00_1315
																																	=
																																	BgL_newzd2matchzd2_4413;
																															}
																														else
																															{	/* Unsafe/url.scm 89 */
																																BgL_matchz00_1315
																																	=
																																	BgL_lastzd2matchzd2_1223;
																															}
																													}
																											}
																										}
																									else
																										{	/* Unsafe/url.scm 89 */
																											BgL_matchz00_1315 =
																												BgL_lastzd2matchzd2_1216;
																										}
																								}
																						}
																					}
																				else
																					{

																						goto
																							BgL_zc3anonymousza32263ze3z83_1200;
																					}
																			}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 89 */
															if (
																((long) (BgL_currentzd2charzd2_1193) ==
																	((long) 58)))
																{
																	long BgL_lastzd2matchzd2_10119;

																	obj_t BgL_inputzd2portzd2_10118;

																	BgL_inputzd2portzd2_10118 =
																		BgL_inputzd2portzd2_1189;
																	BgL_lastzd2matchzd2_10119 =
																		BgL_newzd2matchzd2_1192;
																	BgL_lastzd2matchzd2_1216 =
																		BgL_lastzd2matchzd2_10119;
																	BgL_inputzd2portzd2_1215 =
																		BgL_inputzd2portzd2_10118;
																	goto BgL_zc3anonymousza32272ze3z83_1217;
																}
															else
																{
																	long BgL_lastzd2matchzd2_10121;

																	obj_t BgL_inputzd2portzd2_10120;

																	BgL_inputzd2portzd2_10120 =
																		BgL_inputzd2portzd2_1189;
																	BgL_lastzd2matchzd2_10121 =
																		BgL_newzd2matchzd2_1192;
																	BgL_lastzd2matchzd2_1199 =
																		BgL_lastzd2matchzd2_10121;
																	BgL_inputzd2portzd2_1198 =
																		BgL_inputzd2portzd2_10120;
																	goto BgL_zc3anonymousza32263ze3z83_1200;
																}
														}
												}
											}
										}
									break;
								case ((long) 47):

									BgL_inputzd2portzd2_1169 = BgL_inputzd2portzd2_1206;
									BgL_lastzd2matchzd2_1170 = BgL_lastzd2matchzd2_1207;
								BgL_zc3anonymousza32246ze3z83_1171:
									{	/* Unsafe/url.scm 89 */
										long BgL_newzd2matchzd2_1172;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_1169);
										BgL_newzd2matchzd2_1172 = ((long) 1);
										{	/* Unsafe/url.scm 89 */
											int BgL_currentzd2charzd2_1173;

											BgL_currentzd2charzd2_1173 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1169);
											if (((long) (BgL_currentzd2charzd2_1173) == ((long) 0)))
												{	/* Unsafe/url.scm 89 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1169))
														{	/* Unsafe/url.scm 89 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_1169))
																{

																	goto BgL_zc3anonymousza32246ze3z83_1171;
																}
															else
																{	/* Unsafe/url.scm 89 */
																	BgL_matchz00_1315 = BgL_newzd2matchzd2_1172;
																}
														}
													else
														{	/* Unsafe/url.scm 89 */
															BgL_inputzd2portzd2_1158 =
																BgL_inputzd2portzd2_1169;
															BgL_lastzd2matchzd2_1159 =
																BgL_newzd2matchzd2_1172;
														BgL_zc3anonymousza32239ze3z83_1160:
															{	/* Unsafe/url.scm 89 */
																long BgL_newzd2matchzd2_1161;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1158);
																BgL_newzd2matchzd2_1161 = ((long) 1);
																{	/* Unsafe/url.scm 89 */
																	int BgL_currentzd2charzd2_1162;

																	BgL_currentzd2charzd2_1162 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_1158);
																	if (((long) (BgL_currentzd2charzd2_1162) ==
																			((long) 0)))
																		{	/* Unsafe/url.scm 89 */
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_1158))
																				{	/* Unsafe/url.scm 89 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_1158))
																						{

																							goto
																								BgL_zc3anonymousza32239ze3z83_1160;
																						}
																					else
																						{	/* Unsafe/url.scm 89 */
																							BgL_matchz00_1315 =
																								BgL_newzd2matchzd2_1161;
																						}
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_10140;

																					BgL_lastzd2matchzd2_10140 =
																						BgL_newzd2matchzd2_1161;
																					BgL_lastzd2matchzd2_1159 =
																						BgL_lastzd2matchzd2_10140;
																					goto
																						BgL_zc3anonymousza32239ze3z83_1160;
																				}
																		}
																	else
																		{	/* Unsafe/url.scm 89 */
																			bool_t BgL_testz00_10141;

																			if (
																				((long) (BgL_currentzd2charzd2_1162) ==
																					((long) 10)))
																				{	/* Unsafe/url.scm 89 */
																					BgL_testz00_10141 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/url.scm 89 */
																					if (
																						((long) (BgL_currentzd2charzd2_1162)
																							== ((long) 13)))
																						{	/* Unsafe/url.scm 89 */
																							BgL_testz00_10141 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 89 */
																							BgL_testz00_10141 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1162) ==
																								((long) 32));
																				}}
																			if (BgL_testz00_10141)
																				{	/* Unsafe/url.scm 89 */
																					BgL_matchz00_1315 =
																						BgL_newzd2matchzd2_1161;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_10150;

																					BgL_lastzd2matchzd2_10150 =
																						BgL_newzd2matchzd2_1161;
																					BgL_lastzd2matchzd2_1159 =
																						BgL_lastzd2matchzd2_10150;
																					goto
																						BgL_zc3anonymousza32239ze3z83_1160;
																				}
																		}
																}
															}
														}
												}
											else
												{	/* Unsafe/url.scm 89 */
													bool_t BgL_testz00_10151;

													if (
														((long) (BgL_currentzd2charzd2_1173) ==
															((long) 10)))
														{	/* Unsafe/url.scm 89 */
															BgL_testz00_10151 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/url.scm 89 */
															if (
																((long) (BgL_currentzd2charzd2_1173) ==
																	((long) 13)))
																{	/* Unsafe/url.scm 89 */
																	BgL_testz00_10151 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/url.scm 89 */
																	BgL_testz00_10151 =
																		(
																		(long) (BgL_currentzd2charzd2_1173) ==
																		((long) 32));
														}}
													if (BgL_testz00_10151)
														{	/* Unsafe/url.scm 89 */
															BgL_matchz00_1315 = BgL_newzd2matchzd2_1172;
														}
													else
														{
															long BgL_lastzd2matchzd2_10161;

															obj_t BgL_inputzd2portzd2_10160;

															BgL_inputzd2portzd2_10160 =
																BgL_inputzd2portzd2_1169;
															BgL_lastzd2matchzd2_10161 =
																BgL_newzd2matchzd2_1172;
															BgL_lastzd2matchzd2_1159 =
																BgL_lastzd2matchzd2_10161;
															BgL_inputzd2portzd2_1158 =
																BgL_inputzd2portzd2_10160;
															goto BgL_zc3anonymousza32239ze3z83_1160;
														}
												}
										}
									}
									break;
								case ((long) 42):

									BgL_inputzd2portzd2_1180 = BgL_inputzd2portzd2_1206;
									BgL_lastzd2matchzd2_1181 = BgL_lastzd2matchzd2_1207;
								BgL_zc3anonymousza32253ze3z83_1182:
									{	/* Unsafe/url.scm 89 */
										long BgL_newzd2matchzd2_1183;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_1180);
										BgL_newzd2matchzd2_1183 = ((long) 0);
										{	/* Unsafe/url.scm 89 */
											int BgL_currentzd2charzd2_1184;

											BgL_currentzd2charzd2_1184 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1180);
											if (((long) (BgL_currentzd2charzd2_1184) == ((long) 0)))
												{	/* Unsafe/url.scm 89 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1180))
														{	/* Unsafe/url.scm 89 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_1180))
																{

																	goto BgL_zc3anonymousza32253ze3z83_1182;
																}
															else
																{	/* Unsafe/url.scm 89 */
																	BgL_matchz00_1315 = BgL_newzd2matchzd2_1183;
																}
														}
													else
														{
															long BgL_lastzd2matchzd2_10172;

															obj_t BgL_inputzd2portzd2_10171;

															BgL_inputzd2portzd2_10171 =
																BgL_inputzd2portzd2_1180;
															BgL_lastzd2matchzd2_10172 =
																BgL_newzd2matchzd2_1183;
															BgL_lastzd2matchzd2_1199 =
																BgL_lastzd2matchzd2_10172;
															BgL_inputzd2portzd2_1198 =
																BgL_inputzd2portzd2_10171;
															goto BgL_zc3anonymousza32263ze3z83_1200;
														}
												}
											else
												{	/* Unsafe/url.scm 89 */
													if (
														((long) (BgL_currentzd2charzd2_1184) ==
															((long) 58)))
														{
															long BgL_lastzd2matchzd2_10177;

															obj_t BgL_inputzd2portzd2_10176;

															BgL_inputzd2portzd2_10176 =
																BgL_inputzd2portzd2_1180;
															BgL_lastzd2matchzd2_10177 =
																BgL_newzd2matchzd2_1183;
															BgL_lastzd2matchzd2_1216 =
																BgL_lastzd2matchzd2_10177;
															BgL_inputzd2portzd2_1215 =
																BgL_inputzd2portzd2_10176;
															goto BgL_zc3anonymousza32272ze3z83_1217;
														}
													else
														{
															long BgL_lastzd2matchzd2_10179;

															obj_t BgL_inputzd2portzd2_10178;

															BgL_inputzd2portzd2_10178 =
																BgL_inputzd2portzd2_1180;
															BgL_lastzd2matchzd2_10179 =
																BgL_newzd2matchzd2_1183;
															BgL_lastzd2matchzd2_1199 =
																BgL_lastzd2matchzd2_10179;
															BgL_inputzd2portzd2_1198 =
																BgL_inputzd2portzd2_10178;
															goto BgL_zc3anonymousza32263ze3z83_1200;
														}
												}
										}
									}
									break;
								default:
									{
										long BgL_lastzd2matchzd2_10181;

										obj_t BgL_inputzd2portzd2_10180;

										BgL_inputzd2portzd2_10180 = BgL_inputzd2portzd2_1206;
										BgL_lastzd2matchzd2_10181 = BgL_lastzd2matchzd2_1207;
										BgL_lastzd2matchzd2_1190 = BgL_lastzd2matchzd2_10181;
										BgL_inputzd2portzd2_1189 = BgL_inputzd2portzd2_10180;
										goto BgL_zc3anonymousza32258ze3z83_1191;
									}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1122);
						switch (BgL_matchz00_1315)
							{
							case ((long) 3):

								{	/* Unsafe/url.scm 97 */
									obj_t BgL_arg2354z00_1319;

									int BgL_arg2355z00_1320;

									BgL_arg2354z00_1319 = BgL_inputzd2portzd2_1122;
									BgL_arg2355z00_1320 =
										RGC_BUFFER_BYTE(BgL_inputzd2portzd2_1122);
									rgc_buffer_unget_char(BgL_arg2354z00_1319,
										BgL_arg2355z00_1320);
								}
								{	/* Unsafe/url.scm 98 */
									obj_t BgL_arg2356z00_1321;

									BgL_arg2356z00_1321 = BgL_inputzd2portzd2_1122;
									return
										PROCEDURE_ENTRY
										(BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00)
										(BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00,
										BgL_arg2356z00_1321, BGl_string4137z00zz__urlz00, BFALSE,
										BEOA);
								}
								break;
							case ((long) 2):

								{	/* Unsafe/url.scm 95 */
									obj_t BgL_arg2358z00_1323;

									obj_t BgL_arg2359z00_1324;

									BgL_arg2358z00_1323 = BgL_inputzd2portzd2_1122;
									BgL_minz00_1244 = (int) (((long) 0));
									BgL_maxz00_1245 = (int) (((long) -3));
									if (((long) (BgL_maxz00_1245) < ((long) 0)))
										{	/* Unsafe/url.scm 89 */
											int BgL_arg2293z00_1248;

											{	/* Unsafe/url.scm 89 */
												int BgL_res4027z00_4428;

												{	/* Unsafe/url.scm 89 */
													obj_t BgL_inputzd2portzd2_4427;

													BgL_inputzd2portzd2_4427 = BgL_inputzd2portzd2_1122;
													BgL_res4027z00_4428 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4427));
												}
												BgL_arg2293z00_1248 = BgL_res4027z00_4428;
											}
											{	/* Unsafe/url.scm 89 */
												long BgL_za71za7_4429;

												long BgL_za72za7_4430;

												BgL_za71za7_4429 = (long) (BgL_arg2293z00_1248);
												BgL_za72za7_4430 = (long) (BgL_maxz00_1245);
												BgL_maxz00_1245 =
													(int) ((BgL_za71za7_4429 + BgL_za72za7_4430));
										}}
									else
										{	/* Unsafe/url.scm 89 */
											BFALSE;
										}
									{	/* Unsafe/url.scm 89 */
										bool_t BgL_testz00_10198;

										if (((long) (BgL_minz00_1244) >= ((long) 0)))
											{	/* Unsafe/url.scm 89 */
												if (
													((long) (BgL_maxz00_1245) >=
														(long) (BgL_minz00_1244)))
													{	/* Unsafe/url.scm 89 */
														int BgL_arg2305z00_1258;

														{	/* Unsafe/url.scm 89 */
															int BgL_res4028z00_4436;

															{	/* Unsafe/url.scm 89 */
																obj_t BgL_inputzd2portzd2_4435;

																BgL_inputzd2portzd2_4435 =
																	BgL_inputzd2portzd2_1122;
																BgL_res4028z00_4436 =
																	(int) (RGC_BUFFER_LENGTH
																	(BgL_inputzd2portzd2_4435));
															}
															BgL_arg2305z00_1258 = BgL_res4028z00_4436;
														}
														BgL_testz00_10198 =
															(
															(long) (BgL_maxz00_1245) <=
															(long) (BgL_arg2305z00_1258));
													}
												else
													{	/* Unsafe/url.scm 89 */
														BgL_testz00_10198 = ((bool_t) 0);
													}
											}
										else
											{	/* Unsafe/url.scm 89 */
												BgL_testz00_10198 = ((bool_t) 0);
											}
										if (BgL_testz00_10198)
											{	/* Unsafe/url.scm 89 */
												BgL_arg2359z00_1324 =
													rgc_buffer_substring(BgL_inputzd2portzd2_1122,
													(long) (BgL_minz00_1244), (long) (BgL_maxz00_1245));
											}
										else
											{	/* Unsafe/url.scm 89 */
												obj_t BgL_arg2296z00_1251;

												obj_t BgL_arg2297z00_1252;

												{	/* Unsafe/url.scm 89 */
													obj_t BgL_arg2301z00_1254;

													{	/* Unsafe/url.scm 89 */
														obj_t BgL_res4030z00_4449;

														{	/* Unsafe/url.scm 89 */
															int BgL_arg2290z00_4443;

															{	/* Unsafe/url.scm 89 */
																int BgL_res4029z00_4445;

																{	/* Unsafe/url.scm 89 */
																	obj_t BgL_inputzd2portzd2_4444;

																	BgL_inputzd2portzd2_4444 =
																		BgL_inputzd2portzd2_1122;
																	BgL_res4029z00_4445 =
																		(int) (RGC_BUFFER_LENGTH
																		(BgL_inputzd2portzd2_4444));
																}
																BgL_arg2290z00_4443 = BgL_res4029z00_4445;
															}
															BgL_res4030z00_4449 =
																rgc_buffer_substring(BgL_inputzd2portzd2_1122,
																((long) 0), (long) (BgL_arg2290z00_4443));
														}
														BgL_arg2301z00_1254 = BgL_res4030z00_4449;
													}
													{	/* Unsafe/url.scm 89 */
														obj_t BgL_list2302z00_1255;

														BgL_list2302z00_1255 =
															MAKE_PAIR(BgL_arg2301z00_1254, BNIL);
														BgL_arg2296z00_1251 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4134z00zz__urlz00,
															BgL_list2302z00_1255);
												}}
												BgL_arg2297z00_1252 =
													MAKE_PAIR(BINT(BgL_minz00_1244),
													BINT(BgL_maxz00_1245));
												BgL_arg2359z00_1324 =
													BGl_errorz00zz__errorz00(BGl_string4135z00zz__urlz00,
													BgL_arg2296z00_1251, BgL_arg2297z00_1252);
									}}
									return
										PROCEDURE_ENTRY
										(BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00)
										(BGl_absolutezd2httpzd2urizd2grammarzd2zz__urlz00,
										BgL_arg2358z00_1323, BgL_arg2359z00_1324, BFALSE, BEOA);
								}
								break;
							case ((long) 1):

								{	/* Unsafe/url.scm 93 */
									obj_t BgL_val4_2036z00_1329;

									{	/* Unsafe/url.scm 93 */
										obj_t BgL_res4035z00_4466;

										{	/* Unsafe/url.scm 93 */
											int BgL_arg2290z00_4460;

											{	/* Unsafe/url.scm 93 */
												int BgL_res4034z00_4462;

												{	/* Unsafe/url.scm 93 */
													obj_t BgL_inputzd2portzd2_4461;

													BgL_inputzd2portzd2_4461 = BgL_inputzd2portzd2_1122;
													BgL_res4034z00_4462 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4461));
												}
												BgL_arg2290z00_4460 = BgL_res4034z00_4462;
											}
											BgL_res4035z00_4466 =
												rgc_buffer_substring(BgL_inputzd2portzd2_1122,
												((long) 0), (long) (BgL_arg2290z00_4460));
										}
										BgL_val4_2036z00_1329 = BgL_res4035z00_4466;
									}
									{	/* Unsafe/url.scm 93 */
										int BgL_auxz00_10232;

										BgL_auxz00_10232 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_10232);
									}
									{	/* Unsafe/url.scm 93 */
										int BgL_auxz00_10235;

										BgL_auxz00_10235 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10235, BFALSE);
									}
									{	/* Unsafe/url.scm 93 */
										int BgL_auxz00_10238;

										BgL_auxz00_10238 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10238, BFALSE);
									}
									{	/* Unsafe/url.scm 93 */
										int BgL_auxz00_10241;

										BgL_auxz00_10241 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10241, BFALSE);
									}
									{	/* Unsafe/url.scm 93 */
										int BgL_auxz00_10244;

										BgL_auxz00_10244 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10244,
											BgL_val4_2036z00_1329);
									}
									return BGl_string4138z00zz__urlz00;
								}
								break;
							case ((long) 0):

								{	/* Unsafe/url.scm 91 */
									int BgL_auxz00_10247;

									BgL_auxz00_10247 = (int) (((long) 5));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_10247);
								}
								{	/* Unsafe/url.scm 91 */
									int BgL_auxz00_10250;

									BgL_auxz00_10250 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10250, BFALSE);
								}
								{	/* Unsafe/url.scm 91 */
									int BgL_auxz00_10253;

									BgL_auxz00_10253 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10253, BFALSE);
								}
								{	/* Unsafe/url.scm 91 */
									int BgL_auxz00_10256;

									BgL_auxz00_10256 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10256, BFALSE);
								}
								{	/* Unsafe/url.scm 91 */
									int BgL_auxz00_10259;

									BgL_auxz00_10259 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10259,
										BGl_string4138z00zz__urlz00);
								}
								return BGl_string4138z00zz__urlz00;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_1315));
							}
					}
				}
			}
		}
	}



/* <anonymous:2118> */
	obj_t BGl_zc3anonymousza32118ze3z83zz__urlz00(obj_t BgL_envz00_7206,
		obj_t BgL_inputzd2portzd2_7207)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 74 */
			{
				obj_t BgL_inputzd2portzd2_870;

				BgL_inputzd2portzd2_870 = BgL_inputzd2portzd2_7207;
				{
					obj_t BgL_inputzd2portzd2_906;

					long BgL_lastzd2matchzd2_907;

					obj_t BgL_inputzd2portzd2_917;

					long BgL_lastzd2matchzd2_918;

					obj_t BgL_inputzd2portzd2_928;

					long BgL_lastzd2matchzd2_929;

					obj_t BgL_inputzd2portzd2_937;

					long BgL_lastzd2matchzd2_938;

					obj_t BgL_inputzd2portzd2_946;

					long BgL_lastzd2matchzd2_947;

					obj_t BgL_inputzd2portzd2_954;

					long BgL_lastzd2matchzd2_955;

					obj_t BgL_inputzd2portzd2_963;

					long BgL_lastzd2matchzd2_964;

					obj_t BgL_inputzd2portzd2_970;

					long BgL_lastzd2matchzd2_971;

					int BgL_minz00_992;

					int BgL_maxz00_993;

					RGC_START_MATCH(BgL_inputzd2portzd2_870);
					{	/* Unsafe/url.scm 74 */
						long BgL_matchz00_1063;

						BgL_inputzd2portzd2_954 = BgL_inputzd2portzd2_870;
						BgL_lastzd2matchzd2_955 = ((long) 3);
					BgL_zc3anonymousza32148ze3z83_956:
						{	/* Unsafe/url.scm 74 */
							int BgL_currentzd2charzd2_957;

							BgL_currentzd2charzd2_957 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_954);
							switch ((long) (BgL_currentzd2charzd2_957))
								{
								case ((long) 0):

									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_954))
										{	/* Unsafe/url.scm 74 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_954))
												{

													goto BgL_zc3anonymousza32148ze3z83_956;
												}
											else
												{	/* Unsafe/url.scm 74 */
													BgL_matchz00_1063 = BgL_lastzd2matchzd2_955;
												}
										}
									else
										{	/* Unsafe/url.scm 74 */
											BgL_inputzd2portzd2_937 = BgL_inputzd2portzd2_954;
											BgL_lastzd2matchzd2_938 = BgL_lastzd2matchzd2_955;
										BgL_zc3anonymousza32138ze3z83_939:
											{	/* Unsafe/url.scm 74 */
												long BgL_newzd2matchzd2_940;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_937);
												BgL_newzd2matchzd2_940 = ((long) 3);
												{	/* Unsafe/url.scm 74 */
													int BgL_currentzd2charzd2_941;

													BgL_currentzd2charzd2_941 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_937);
													if (
														((long) (BgL_currentzd2charzd2_941) == ((long) 0)))
														{	/* Unsafe/url.scm 74 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_937))
																{	/* Unsafe/url.scm 74 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_937))
																		{

																			goto BgL_zc3anonymousza32138ze3z83_939;
																		}
																	else
																		{	/* Unsafe/url.scm 74 */
																			BgL_matchz00_1063 =
																				BgL_newzd2matchzd2_940;
																		}
																}
															else
																{	/* Unsafe/url.scm 74 */
																	BgL_inputzd2portzd2_946 =
																		BgL_inputzd2portzd2_937;
																	BgL_lastzd2matchzd2_947 =
																		BgL_newzd2matchzd2_940;
																BgL_zc3anonymousza32143ze3z83_948:
																	{	/* Unsafe/url.scm 74 */
																		int BgL_currentzd2charzd2_949;

																		BgL_currentzd2charzd2_949 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_946);
																		if (((long) (BgL_currentzd2charzd2_949) ==
																				((long) 0)))
																			{	/* Unsafe/url.scm 74 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_946))
																					{	/* Unsafe/url.scm 74 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_946))
																							{

																								goto
																									BgL_zc3anonymousza32143ze3z83_948;
																							}
																						else
																							{	/* Unsafe/url.scm 74 */
																								BgL_matchz00_1063 =
																									BgL_lastzd2matchzd2_947;
																							}
																					}
																				else
																					{

																						goto
																							BgL_zc3anonymousza32143ze3z83_948;
																					}
																			}
																		else
																			{	/* Unsafe/url.scm 74 */
																				if (
																					((long) (BgL_currentzd2charzd2_949) ==
																						((long) 58)))
																					{	/* Unsafe/url.scm 74 */
																						BgL_inputzd2portzd2_963 =
																							BgL_inputzd2portzd2_946;
																						BgL_lastzd2matchzd2_964 =
																							BgL_lastzd2matchzd2_947;
																					BgL_zc3anonymousza32152ze3z83_965:
																						{	/* Unsafe/url.scm 74 */
																							int BgL_currentzd2charzd2_966;

																							BgL_currentzd2charzd2_966 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_963);
																							if (((long)
																									(BgL_currentzd2charzd2_966) ==
																									((long) 0)))
																								{	/* Unsafe/url.scm 74 */
																									bool_t BgL_testz00_10295;

																									{	/* Unsafe/url.scm 74 */
																										bool_t BgL_res4012z00_4245;

																										{	/* Unsafe/url.scm 74 */
																											obj_t
																												BgL_inputzd2portzd2_4241;
																											BgL_inputzd2portzd2_4241 =
																												BgL_inputzd2portzd2_963;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_4241))
																												{	/* Unsafe/url.scm 74 */
																													BgL_res4012z00_4245 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_4241);
																												}
																											else
																												{	/* Unsafe/url.scm 74 */
																													BgL_res4012z00_4245 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_10295 =
																											BgL_res4012z00_4245;
																									}
																									if (BgL_testz00_10295)
																										{

																											goto
																												BgL_zc3anonymousza32152ze3z83_965;
																										}
																									else
																										{	/* Unsafe/url.scm 74 */
																											BgL_matchz00_1063 =
																												BgL_lastzd2matchzd2_964;
																										}
																								}
																							else
																								{	/* Unsafe/url.scm 74 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_966)
																											== ((long) 47)))
																										{	/* Unsafe/url.scm 74 */
																											BgL_inputzd2portzd2_970 =
																												BgL_inputzd2portzd2_963;
																											BgL_lastzd2matchzd2_971 =
																												BgL_lastzd2matchzd2_964;
																										BgL_zc3anonymousza32156ze3z83_972:
																											{	/* Unsafe/url.scm 74 */
																												int
																													BgL_currentzd2charzd2_973;
																												BgL_currentzd2charzd2_973
																													=
																													RGC_BUFFER_GET_CHAR
																													(BgL_inputzd2portzd2_970);
																												if (((long)
																														(BgL_currentzd2charzd2_973)
																														== ((long) 0)))
																													{	/* Unsafe/url.scm 74 */
																														bool_t
																															BgL_testz00_10306;
																														{	/* Unsafe/url.scm 74 */
																															bool_t
																																BgL_res4013z00_4255;
																															{	/* Unsafe/url.scm 74 */
																																obj_t
																																	BgL_inputzd2portzd2_4251;
																																BgL_inputzd2portzd2_4251
																																	=
																																	BgL_inputzd2portzd2_970;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4251))
																																	{	/* Unsafe/url.scm 74 */
																																		BgL_res4013z00_4255
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_4251);
																																	}
																																else
																																	{	/* Unsafe/url.scm 74 */
																																		BgL_res4013z00_4255
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															BgL_testz00_10306
																																=
																																BgL_res4013z00_4255;
																														}
																														if (BgL_testz00_10306)
																															{

																																goto
																																	BgL_zc3anonymousza32156ze3z83_972;
																															}
																														else
																															{	/* Unsafe/url.scm 74 */
																																BgL_matchz00_1063
																																	=
																																	BgL_lastzd2matchzd2_971;
																															}
																													}
																												else
																													{	/* Unsafe/url.scm 74 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_973)
																																== ((long) 47)))
																															{	/* Unsafe/url.scm 74 */
																																long
																																	BgL_newzd2matchzd2_4260;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_970);
																																BgL_newzd2matchzd2_4260
																																	= ((long) 2);
																																BgL_matchz00_1063
																																	=
																																	BgL_newzd2matchzd2_4260;
																															}
																														else
																															{	/* Unsafe/url.scm 74 */
																																BgL_matchz00_1063
																																	=
																																	BgL_lastzd2matchzd2_971;
																															}
																													}
																											}
																										}
																									else
																										{	/* Unsafe/url.scm 74 */
																											BgL_matchz00_1063 =
																												BgL_lastzd2matchzd2_964;
																										}
																								}
																						}
																					}
																				else
																					{

																						goto
																							BgL_zc3anonymousza32143ze3z83_948;
																					}
																			}
																	}
																}
														}
													else
														{	/* Unsafe/url.scm 74 */
															if (
																((long) (BgL_currentzd2charzd2_941) ==
																	((long) 58)))
																{
																	long BgL_lastzd2matchzd2_10318;

																	obj_t BgL_inputzd2portzd2_10317;

																	BgL_inputzd2portzd2_10317 =
																		BgL_inputzd2portzd2_937;
																	BgL_lastzd2matchzd2_10318 =
																		BgL_newzd2matchzd2_940;
																	BgL_lastzd2matchzd2_964 =
																		BgL_lastzd2matchzd2_10318;
																	BgL_inputzd2portzd2_963 =
																		BgL_inputzd2portzd2_10317;
																	goto BgL_zc3anonymousza32152ze3z83_965;
																}
															else
																{
																	long BgL_lastzd2matchzd2_10320;

																	obj_t BgL_inputzd2portzd2_10319;

																	BgL_inputzd2portzd2_10319 =
																		BgL_inputzd2portzd2_937;
																	BgL_lastzd2matchzd2_10320 =
																		BgL_newzd2matchzd2_940;
																	BgL_lastzd2matchzd2_947 =
																		BgL_lastzd2matchzd2_10320;
																	BgL_inputzd2portzd2_946 =
																		BgL_inputzd2portzd2_10319;
																	goto BgL_zc3anonymousza32143ze3z83_948;
																}
														}
												}
											}
										}
									break;
								case ((long) 47):

									BgL_inputzd2portzd2_917 = BgL_inputzd2portzd2_954;
									BgL_lastzd2matchzd2_918 = BgL_lastzd2matchzd2_955;
								BgL_zc3anonymousza32126ze3z83_919:
									{	/* Unsafe/url.scm 74 */
										long BgL_newzd2matchzd2_920;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_917);
										BgL_newzd2matchzd2_920 = ((long) 1);
										{	/* Unsafe/url.scm 74 */
											int BgL_currentzd2charzd2_921;

											BgL_currentzd2charzd2_921 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_917);
											if (((long) (BgL_currentzd2charzd2_921) == ((long) 0)))
												{	/* Unsafe/url.scm 74 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_917))
														{	/* Unsafe/url.scm 74 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_917))
																{

																	goto BgL_zc3anonymousza32126ze3z83_919;
																}
															else
																{	/* Unsafe/url.scm 74 */
																	BgL_matchz00_1063 = BgL_newzd2matchzd2_920;
																}
														}
													else
														{	/* Unsafe/url.scm 74 */
															BgL_inputzd2portzd2_906 = BgL_inputzd2portzd2_917;
															BgL_lastzd2matchzd2_907 = BgL_newzd2matchzd2_920;
														BgL_zc3anonymousza32119ze3z83_908:
															{	/* Unsafe/url.scm 74 */
																long BgL_newzd2matchzd2_909;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_906);
																BgL_newzd2matchzd2_909 = ((long) 1);
																{	/* Unsafe/url.scm 74 */
																	int BgL_currentzd2charzd2_910;

																	BgL_currentzd2charzd2_910 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_906);
																	if (((long) (BgL_currentzd2charzd2_910) ==
																			((long) 0)))
																		{	/* Unsafe/url.scm 74 */
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_906))
																				{	/* Unsafe/url.scm 74 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_906))
																						{

																							goto
																								BgL_zc3anonymousza32119ze3z83_908;
																						}
																					else
																						{	/* Unsafe/url.scm 74 */
																							BgL_matchz00_1063 =
																								BgL_newzd2matchzd2_909;
																						}
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_10339;

																					BgL_lastzd2matchzd2_10339 =
																						BgL_newzd2matchzd2_909;
																					BgL_lastzd2matchzd2_907 =
																						BgL_lastzd2matchzd2_10339;
																					goto
																						BgL_zc3anonymousza32119ze3z83_908;
																				}
																		}
																	else
																		{	/* Unsafe/url.scm 74 */
																			bool_t BgL_testz00_10340;

																			if (
																				((long) (BgL_currentzd2charzd2_910) ==
																					((long) 10)))
																				{	/* Unsafe/url.scm 74 */
																					BgL_testz00_10340 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/url.scm 74 */
																					if (
																						((long) (BgL_currentzd2charzd2_910)
																							== ((long) 13)))
																						{	/* Unsafe/url.scm 74 */
																							BgL_testz00_10340 = ((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/url.scm 74 */
																							BgL_testz00_10340 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_910) ==
																								((long) 32));
																				}}
																			if (BgL_testz00_10340)
																				{	/* Unsafe/url.scm 74 */
																					BgL_matchz00_1063 =
																						BgL_newzd2matchzd2_909;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_10349;

																					BgL_lastzd2matchzd2_10349 =
																						BgL_newzd2matchzd2_909;
																					BgL_lastzd2matchzd2_907 =
																						BgL_lastzd2matchzd2_10349;
																					goto
																						BgL_zc3anonymousza32119ze3z83_908;
																				}
																		}
																}
															}
														}
												}
											else
												{	/* Unsafe/url.scm 74 */
													bool_t BgL_testz00_10350;

													if (
														((long) (BgL_currentzd2charzd2_921) == ((long) 10)))
														{	/* Unsafe/url.scm 74 */
															BgL_testz00_10350 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/url.scm 74 */
															if (
																((long) (BgL_currentzd2charzd2_921) ==
																	((long) 13)))
																{	/* Unsafe/url.scm 74 */
																	BgL_testz00_10350 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/url.scm 74 */
																	BgL_testz00_10350 =
																		(
																		(long) (BgL_currentzd2charzd2_921) ==
																		((long) 32));
														}}
													if (BgL_testz00_10350)
														{	/* Unsafe/url.scm 74 */
															BgL_matchz00_1063 = BgL_newzd2matchzd2_920;
														}
													else
														{
															long BgL_lastzd2matchzd2_10360;

															obj_t BgL_inputzd2portzd2_10359;

															BgL_inputzd2portzd2_10359 =
																BgL_inputzd2portzd2_917;
															BgL_lastzd2matchzd2_10360 =
																BgL_newzd2matchzd2_920;
															BgL_lastzd2matchzd2_907 =
																BgL_lastzd2matchzd2_10360;
															BgL_inputzd2portzd2_906 =
																BgL_inputzd2portzd2_10359;
															goto BgL_zc3anonymousza32119ze3z83_908;
														}
												}
										}
									}
									break;
								case ((long) 42):

									BgL_inputzd2portzd2_928 = BgL_inputzd2portzd2_954;
									BgL_lastzd2matchzd2_929 = BgL_lastzd2matchzd2_955;
								BgL_zc3anonymousza32133ze3z83_930:
									{	/* Unsafe/url.scm 74 */
										long BgL_newzd2matchzd2_931;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_928);
										BgL_newzd2matchzd2_931 = ((long) 0);
										{	/* Unsafe/url.scm 74 */
											int BgL_currentzd2charzd2_932;

											BgL_currentzd2charzd2_932 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_928);
											if (((long) (BgL_currentzd2charzd2_932) == ((long) 0)))
												{	/* Unsafe/url.scm 74 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_928))
														{	/* Unsafe/url.scm 74 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_928))
																{

																	goto BgL_zc3anonymousza32133ze3z83_930;
																}
															else
																{	/* Unsafe/url.scm 74 */
																	BgL_matchz00_1063 = BgL_newzd2matchzd2_931;
																}
														}
													else
														{
															long BgL_lastzd2matchzd2_10371;

															obj_t BgL_inputzd2portzd2_10370;

															BgL_inputzd2portzd2_10370 =
																BgL_inputzd2portzd2_928;
															BgL_lastzd2matchzd2_10371 =
																BgL_newzd2matchzd2_931;
															BgL_lastzd2matchzd2_947 =
																BgL_lastzd2matchzd2_10371;
															BgL_inputzd2portzd2_946 =
																BgL_inputzd2portzd2_10370;
															goto BgL_zc3anonymousza32143ze3z83_948;
														}
												}
											else
												{	/* Unsafe/url.scm 74 */
													if (
														((long) (BgL_currentzd2charzd2_932) == ((long) 58)))
														{
															long BgL_lastzd2matchzd2_10376;

															obj_t BgL_inputzd2portzd2_10375;

															BgL_inputzd2portzd2_10375 =
																BgL_inputzd2portzd2_928;
															BgL_lastzd2matchzd2_10376 =
																BgL_newzd2matchzd2_931;
															BgL_lastzd2matchzd2_964 =
																BgL_lastzd2matchzd2_10376;
															BgL_inputzd2portzd2_963 =
																BgL_inputzd2portzd2_10375;
															goto BgL_zc3anonymousza32152ze3z83_965;
														}
													else
														{
															long BgL_lastzd2matchzd2_10378;

															obj_t BgL_inputzd2portzd2_10377;

															BgL_inputzd2portzd2_10377 =
																BgL_inputzd2portzd2_928;
															BgL_lastzd2matchzd2_10378 =
																BgL_newzd2matchzd2_931;
															BgL_lastzd2matchzd2_947 =
																BgL_lastzd2matchzd2_10378;
															BgL_inputzd2portzd2_946 =
																BgL_inputzd2portzd2_10377;
															goto BgL_zc3anonymousza32143ze3z83_948;
														}
												}
										}
									}
									break;
								default:
									{
										long BgL_lastzd2matchzd2_10380;

										obj_t BgL_inputzd2portzd2_10379;

										BgL_inputzd2portzd2_10379 = BgL_inputzd2portzd2_954;
										BgL_lastzd2matchzd2_10380 = BgL_lastzd2matchzd2_955;
										BgL_lastzd2matchzd2_938 = BgL_lastzd2matchzd2_10380;
										BgL_inputzd2portzd2_937 = BgL_inputzd2portzd2_10379;
										goto BgL_zc3anonymousza32138ze3z83_939;
									}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_870);
						switch (BgL_matchz00_1063)
							{
							case ((long) 3):

								{	/* Unsafe/url.scm 82 */
									obj_t BgL_arg2233z00_1067;

									int BgL_arg2234z00_1068;

									BgL_arg2233z00_1067 = BgL_inputzd2portzd2_870;
									BgL_arg2234z00_1068 =
										RGC_BUFFER_BYTE(BgL_inputzd2portzd2_870);
									rgc_buffer_unget_char(BgL_arg2233z00_1067,
										BgL_arg2234z00_1068);
								}
								{	/* Unsafe/url.scm 83 */
									obj_t BgL_val4_2021z00_1073;

									BgL_val4_2021z00_1073 =
										BGl_readzd2linezd2zz__r4_input_6_10_2z00
										(BgL_inputzd2portzd2_870);
									{	/* Unsafe/url.scm 83 */
										int BgL_auxz00_10387;

										BgL_auxz00_10387 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_10387);
									}
									{	/* Unsafe/url.scm 83 */
										int BgL_auxz00_10390;

										BgL_auxz00_10390 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10390, BFALSE);
									}
									{	/* Unsafe/url.scm 83 */
										int BgL_auxz00_10393;

										BgL_auxz00_10393 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10393, BFALSE);
									}
									{	/* Unsafe/url.scm 83 */
										int BgL_auxz00_10396;

										BgL_auxz00_10396 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10396, BFALSE);
									}
									{	/* Unsafe/url.scm 83 */
										int BgL_auxz00_10399;

										BgL_auxz00_10399 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10399,
											BgL_val4_2021z00_1073);
									}
									return BGl_string4138z00zz__urlz00;
								}
								break;
							case ((long) 2):

								{	/* Unsafe/url.scm 80 */
									obj_t BgL_arg2236z00_1075;

									obj_t BgL_arg2237z00_1076;

									BgL_arg2236z00_1075 = BgL_inputzd2portzd2_870;
									BgL_minz00_992 = (int) (((long) 0));
									BgL_maxz00_993 = (int) (((long) -3));
									if (((long) (BgL_maxz00_993) < ((long) 0)))
										{	/* Unsafe/url.scm 74 */
											int BgL_arg2171z00_996;

											{	/* Unsafe/url.scm 74 */
												int BgL_res4015z00_4275;

												{	/* Unsafe/url.scm 74 */
													obj_t BgL_inputzd2portzd2_4274;

													BgL_inputzd2portzd2_4274 = BgL_inputzd2portzd2_870;
													BgL_res4015z00_4275 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4274));
												}
												BgL_arg2171z00_996 = BgL_res4015z00_4275;
											}
											{	/* Unsafe/url.scm 74 */
												long BgL_za71za7_4276;

												long BgL_za72za7_4277;

												BgL_za71za7_4276 = (long) (BgL_arg2171z00_996);
												BgL_za72za7_4277 = (long) (BgL_maxz00_993);
												BgL_maxz00_993 =
													(int) ((BgL_za71za7_4276 + BgL_za72za7_4277));
										}}
									else
										{	/* Unsafe/url.scm 74 */
											BFALSE;
										}
									{	/* Unsafe/url.scm 74 */
										bool_t BgL_testz00_10411;

										if (((long) (BgL_minz00_992) >= ((long) 0)))
											{	/* Unsafe/url.scm 74 */
												if (
													((long) (BgL_maxz00_993) >= (long) (BgL_minz00_992)))
													{	/* Unsafe/url.scm 74 */
														int BgL_arg2181z00_1006;

														{	/* Unsafe/url.scm 74 */
															int BgL_res4016z00_4283;

															{	/* Unsafe/url.scm 74 */
																obj_t BgL_inputzd2portzd2_4282;

																BgL_inputzd2portzd2_4282 =
																	BgL_inputzd2portzd2_870;
																BgL_res4016z00_4283 =
																	(int) (RGC_BUFFER_LENGTH
																	(BgL_inputzd2portzd2_4282));
															}
															BgL_arg2181z00_1006 = BgL_res4016z00_4283;
														}
														BgL_testz00_10411 =
															(
															(long) (BgL_maxz00_993) <=
															(long) (BgL_arg2181z00_1006));
													}
												else
													{	/* Unsafe/url.scm 74 */
														BgL_testz00_10411 = ((bool_t) 0);
													}
											}
										else
											{	/* Unsafe/url.scm 74 */
												BgL_testz00_10411 = ((bool_t) 0);
											}
										if (BgL_testz00_10411)
											{	/* Unsafe/url.scm 74 */
												BgL_arg2237z00_1076 =
													rgc_buffer_substring(BgL_inputzd2portzd2_870,
													(long) (BgL_minz00_992), (long) (BgL_maxz00_993));
											}
										else
											{	/* Unsafe/url.scm 74 */
												obj_t BgL_arg2174z00_999;

												obj_t BgL_arg2175z00_1000;

												{	/* Unsafe/url.scm 74 */
													obj_t BgL_arg2177z00_1002;

													{	/* Unsafe/url.scm 74 */
														obj_t BgL_res4018z00_4296;

														{	/* Unsafe/url.scm 74 */
															int BgL_arg2168z00_4290;

															{	/* Unsafe/url.scm 74 */
																int BgL_res4017z00_4292;

																{	/* Unsafe/url.scm 74 */
																	obj_t BgL_inputzd2portzd2_4291;

																	BgL_inputzd2portzd2_4291 =
																		BgL_inputzd2portzd2_870;
																	BgL_res4017z00_4292 =
																		(int) (RGC_BUFFER_LENGTH
																		(BgL_inputzd2portzd2_4291));
																}
																BgL_arg2168z00_4290 = BgL_res4017z00_4292;
															}
															BgL_res4018z00_4296 =
																rgc_buffer_substring(BgL_inputzd2portzd2_870,
																((long) 0), (long) (BgL_arg2168z00_4290));
														}
														BgL_arg2177z00_1002 = BgL_res4018z00_4296;
													}
													{	/* Unsafe/url.scm 74 */
														obj_t BgL_list2178z00_1003;

														BgL_list2178z00_1003 =
															MAKE_PAIR(BgL_arg2177z00_1002, BNIL);
														BgL_arg2174z00_999 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4134z00zz__urlz00,
															BgL_list2178z00_1003);
												}}
												BgL_arg2175z00_1000 =
													MAKE_PAIR(BINT(BgL_minz00_992), BINT(BgL_maxz00_993));
												BgL_arg2237z00_1076 =
													BGl_errorz00zz__errorz00(BGl_string4135z00zz__urlz00,
													BgL_arg2174z00_999, BgL_arg2175z00_1000);
									}}
									return
										PROCEDURE_ENTRY(BGl_absolutezd2urizd2grammarz00zz__urlz00)
										(BGl_absolutezd2urizd2grammarz00zz__urlz00,
										BgL_arg2236z00_1075, BgL_arg2237z00_1076, BFALSE, BEOA);
								}
								break;
							case ((long) 1):

								{	/* Unsafe/url.scm 78 */
									obj_t BgL_val4_2026z00_1081;

									{	/* Unsafe/url.scm 78 */
										obj_t BgL_res4023z00_4322;

										{	/* Unsafe/url.scm 78 */
											int BgL_arg2168z00_4316;

											{	/* Unsafe/url.scm 78 */
												int BgL_res4022z00_4318;

												{	/* Unsafe/url.scm 78 */
													obj_t BgL_inputzd2portzd2_4317;

													BgL_inputzd2portzd2_4317 = BgL_inputzd2portzd2_870;
													BgL_res4022z00_4318 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4317));
												}
												BgL_arg2168z00_4316 = BgL_res4022z00_4318;
											}
											BgL_res4023z00_4322 =
												rgc_buffer_substring(BgL_inputzd2portzd2_870,
												((long) 0), (long) (BgL_arg2168z00_4316));
										}
										BgL_val4_2026z00_1081 = BgL_res4023z00_4322;
									}
									{	/* Unsafe/url.scm 78 */
										int BgL_auxz00_10445;

										BgL_auxz00_10445 = (int) (((long) 5));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_10445);
									}
									{	/* Unsafe/url.scm 78 */
										int BgL_auxz00_10448;

										BgL_auxz00_10448 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10448, BFALSE);
									}
									{	/* Unsafe/url.scm 78 */
										int BgL_auxz00_10451;

										BgL_auxz00_10451 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10451, BFALSE);
									}
									{	/* Unsafe/url.scm 78 */
										int BgL_auxz00_10454;

										BgL_auxz00_10454 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10454, BFALSE);
									}
									{	/* Unsafe/url.scm 78 */
										int BgL_auxz00_10457;

										BgL_auxz00_10457 = (int) (((long) 4));
										BGL_MVALUES_VAL_SET(BgL_auxz00_10457,
											BgL_val4_2026z00_1081);
									}
									return BGl_string4139z00zz__urlz00;
								}
								break;
							case ((long) 0):

								{	/* Unsafe/url.scm 76 */
									int BgL_auxz00_10460;

									BgL_auxz00_10460 = (int) (((long) 5));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_10460);
								}
								{	/* Unsafe/url.scm 76 */
									int BgL_auxz00_10463;

									BgL_auxz00_10463 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10463, BFALSE);
								}
								{	/* Unsafe/url.scm 76 */
									int BgL_auxz00_10466;

									BgL_auxz00_10466 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10466, BFALSE);
								}
								{	/* Unsafe/url.scm 76 */
									int BgL_auxz00_10469;

									BgL_auxz00_10469 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10469, BFALSE);
								}
								{	/* Unsafe/url.scm 76 */
									int BgL_auxz00_10472;

									BgL_auxz00_10472 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_auxz00_10472, BFALSE);
								}
								return BGl_string4138z00zz__urlz00;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string4131z00zz__urlz00,
									BGl_string4132z00zz__urlz00, BINT(BgL_matchz00_1063));
							}
					}
				}
			}
		}
	}



/* url-parse */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2parsezd2zz__urlz00(obj_t BgL_urlz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 196 */
			if (INPUT_PORTP(BgL_urlz00_4))
				{	/* Unsafe/url.scm 198 */
					return
						PROCEDURE_ENTRY(BGl_urizd2grammarzd2zz__urlz00)
						(BGl_urizd2grammarzd2zz__urlz00, BgL_urlz00_4, BEOA);
				}
			else
				{	/* Unsafe/url.scm 198 */
					if (STRINGP(BgL_urlz00_4))
						{	/* Unsafe/url.scm 201 */
							obj_t BgL_pz00_3325;

							{	/* Unsafe/url.scm 201 */
								obj_t BgL_g3534z00_3333;

								BgL_g3534z00_3333 = BgL_urlz00_4;
								{	/* Ieee/port.scm 376 */

									BgL_pz00_3325 =
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_g3534z00_3333, BINT(((long) 0)));
							}}
							{	/* Unsafe/url.scm 202 */
								obj_t BgL_val1969z00_3326;

								BgL_val1969z00_3326 =
									BGl_zc3exitza33533ze3z83zz__urlz00(BgL_pz00_3325);
								bgl_close_input_port(BgL_pz00_3325);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1969z00_3326)))
									{	/* Unsafe/url.scm 204 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1969z00_3326), CDR(BgL_val1969z00_3326));
									}
								else
									{	/* Unsafe/url.scm 204 */
										return BgL_val1969z00_3326;
									}
							}
						}
					else
						{	/* Unsafe/url.scm 200 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol4127z00zz__urlz00, BGl_string4140z00zz__urlz00,
								BgL_urlz00_4);
						}
				}
		}
	}



/* <exit:3533> */
	obj_t BGl_zc3exitza33533ze3z83zz__urlz00(obj_t BgL_pz00_7235)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 204 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1970z00_3331;

			if (SET_EXIT(BgL_an_exit1970z00_3331))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1970z00_3331 = (void *) jmpbuf;
					{	/* Unsafe/url.scm 204 */

						PUSH_EXIT(BgL_an_exit1970z00_3331, ((long) 0));
						{	/* Unsafe/url.scm 203 */
							obj_t BgL_val1971z00_3332;

							BgL_val1971z00_3332 =
								PROCEDURE_ENTRY(BGl_urizd2grammarzd2zz__urlz00)
								(BGl_urizd2grammarzd2zz__urlz00, BgL_pz00_7235, BEOA);
							POP_EXIT();
							return BgL_val1971z00_3332;
						}
					}
				}
		}
	}



/* _url-parse */
	obj_t BGl__urlzd2parsezd2zz__urlz00(obj_t BgL_envz00_7208,
		obj_t BgL_urlz00_7209)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 196 */
			return BGl_urlzd2parsezd2zz__urlz00(BgL_urlz00_7209);
		}
	}



/* url-sans-protocol-parse */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t
		BgL_urlz00_5, obj_t BgL_protocolz00_6)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 211 */
			if (INPUT_PORTP(BgL_urlz00_5))
				{	/* Unsafe/url.scm 213 */
					return
						PROCEDURE_ENTRY(BGl_absolutezd2urizd2grammarz00zz__urlz00)
						(BGl_absolutezd2urizd2grammarz00zz__urlz00, BgL_urlz00_5,
						BgL_protocolz00_6, BFALSE, BEOA);
				}
			else
				{	/* Unsafe/url.scm 213 */
					if (STRINGP(BgL_urlz00_5))
						{	/* Unsafe/url.scm 216 */
							obj_t BgL_pz00_3337;

							{	/* Unsafe/url.scm 216 */
								obj_t BgL_g3534z00_3345;

								BgL_g3534z00_3345 = BgL_urlz00_5;
								{	/* Ieee/port.scm 376 */

									BgL_pz00_3337 =
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_g3534z00_3345, BINT(((long) 0)));
							}}
							{	/* Unsafe/url.scm 217 */
								obj_t BgL_val1972z00_3338;

								BgL_val1972z00_3338 =
									BGl_zc3exitza33540ze3z83zz__urlz00(BgL_protocolz00_6,
									BgL_pz00_3337);
								bgl_close_input_port(BgL_pz00_3337);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1972z00_3338)))
									{	/* Unsafe/url.scm 219 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1972z00_3338), CDR(BgL_val1972z00_3338));
									}
								else
									{	/* Unsafe/url.scm 219 */
										return BgL_val1972z00_3338;
									}
							}
						}
					else
						{	/* Unsafe/url.scm 215 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol4141z00zz__urlz00, BGl_string4140z00zz__urlz00,
								BgL_urlz00_5);
						}
				}
		}
	}



/* <exit:3540> */
	obj_t BGl_zc3exitza33540ze3z83zz__urlz00(obj_t BgL_protocolz00_7234,
		obj_t BgL_pz00_7233)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 219 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1973z00_3343;

			if (SET_EXIT(BgL_an_exit1973z00_3343))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1973z00_3343 = (void *) jmpbuf;
					{	/* Unsafe/url.scm 219 */

						PUSH_EXIT(BgL_an_exit1973z00_3343, ((long) 0));
						{	/* Unsafe/url.scm 218 */
							obj_t BgL_val1974z00_3344;

							BgL_val1974z00_3344 =
								PROCEDURE_ENTRY(BGl_absolutezd2urizd2grammarz00zz__urlz00)
								(BGl_absolutezd2urizd2grammarz00zz__urlz00, BgL_pz00_7233,
								BgL_protocolz00_7234, BFALSE, BEOA);
							POP_EXIT();
							return BgL_val1974z00_3344;
						}
					}
				}
		}
	}



/* _url-sans-protocol-parse */
	obj_t BGl__urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t BgL_envz00_7210,
		obj_t BgL_urlz00_7211, obj_t BgL_protocolz00_7212)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 211 */
			{	/* Unsafe/url.scm 213 */
				obj_t BgL_auxz00_10525;

				if (STRINGP(BgL_protocolz00_7212))
					{	/* Unsafe/url.scm 213 */
						BgL_auxz00_10525 = BgL_protocolz00_7212;
					}
				else
					{
						obj_t BgL_auxz00_10528;

						BgL_auxz00_10528 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 8340)), BGl_string4144z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_protocolz00_7212);
						FAILURE(BgL_auxz00_10528, BFALSE, BFALSE);
					}
				return
					BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_urlz00_7211,
					BgL_auxz00_10525);
			}
		}
	}



/* http-url-parse */
	BGL_EXPORTED_DEF obj_t BGl_httpzd2urlzd2parsez00zz__urlz00(obj_t BgL_urlz00_7)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 226 */
			if (INPUT_PORTP(BgL_urlz00_7))
				{	/* Unsafe/url.scm 228 */
					return
						PROCEDURE_ENTRY(BGl_httpzd2urizd2grammarz00zz__urlz00)
						(BGl_httpzd2urizd2grammarz00zz__urlz00, BgL_urlz00_7, BEOA);
				}
			else
				{	/* Unsafe/url.scm 228 */
					if (STRINGP(BgL_urlz00_7))
						{	/* Unsafe/url.scm 231 */
							obj_t BgL_pz00_3349;

							{	/* Unsafe/url.scm 231 */
								obj_t BgL_g3534z00_3357;

								BgL_g3534z00_3357 = BgL_urlz00_7;
								{	/* Ieee/port.scm 376 */

									BgL_pz00_3349 =
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_g3534z00_3357, BINT(((long) 0)));
							}}
							{	/* Unsafe/url.scm 232 */
								obj_t BgL_val1975z00_3350;

								BgL_val1975z00_3350 =
									BGl_zc3exitza33546ze3z83zz__urlz00(BgL_pz00_3349);
								bgl_close_input_port(BgL_pz00_3349);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1975z00_3350)))
									{	/* Unsafe/url.scm 234 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val1975z00_3350), CDR(BgL_val1975z00_3350));
									}
								else
									{	/* Unsafe/url.scm 234 */
										return BgL_val1975z00_3350;
									}
							}
						}
					else
						{	/* Unsafe/url.scm 230 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol4127z00zz__urlz00, BGl_string4140z00zz__urlz00,
								BgL_urlz00_7);
						}
				}
		}
	}



/* <exit:3546> */
	obj_t BGl_zc3exitza33546ze3z83zz__urlz00(obj_t BgL_pz00_7232)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 234 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1976z00_3355;

			if (SET_EXIT(BgL_an_exit1976z00_3355))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1976z00_3355 = (void *) jmpbuf;
					{	/* Unsafe/url.scm 234 */

						PUSH_EXIT(BgL_an_exit1976z00_3355, ((long) 0));
						{	/* Unsafe/url.scm 233 */
							obj_t BgL_val1977z00_3356;

							BgL_val1977z00_3356 =
								PROCEDURE_ENTRY(BGl_httpzd2urizd2grammarz00zz__urlz00)
								(BGl_httpzd2urizd2grammarz00zz__urlz00, BgL_pz00_7232, BEOA);
							POP_EXIT();
							return BgL_val1977z00_3356;
						}
					}
				}
		}
	}



/* _http-url-parse */
	obj_t BGl__httpzd2urlzd2parsez00zz__urlz00(obj_t BgL_envz00_7213,
		obj_t BgL_urlz00_7214)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 226 */
			return BGl_httpzd2urlzd2parsez00zz__urlz00(BgL_urlz00_7214);
		}
	}



/* encode-char */
	obj_t BGl_encodezd2charzd2zz__urlz00(obj_t BgL_resz00_8, long BgL_jz00_9,
		unsigned char BgL_cz00_10)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 241 */
			{	/* Unsafe/url.scm 250 */
				long BgL_nz00_3360;

				BgL_nz00_3360 = (BgL_cz00_10);
				STRING_SET(BgL_resz00_8, BgL_jz00_9, ((unsigned char) '%'));
				if ((BgL_nz00_3360 < ((long) 16)))
					{	/* Unsafe/url.scm 253 */
						{	/* Unsafe/url.scm 254 */
							long BgL_auxz00_10561;

							BgL_auxz00_10561 = (BgL_jz00_9 + ((long) 1));
							STRING_SET(BgL_resz00_8, BgL_auxz00_10561, ((unsigned char) '0'));
						}
						{	/* Unsafe/url.scm 255 */
							long BgL_arg3549z00_3363;

							obj_t BgL_arg3550z00_3364;

							BgL_arg3549z00_3363 = (BgL_jz00_9 + ((long) 2));
							BgL_arg3550z00_3364 =
								BGl_intzd2ze3charz31zz__urlz00(BgL_nz00_3360);
							{	/* Unsafe/url.scm 255 */
								unsigned char BgL_auxz00_10566;

								BgL_auxz00_10566 = CCHAR(BgL_arg3550z00_3364);
								return
									STRING_SET(BgL_resz00_8, BgL_arg3549z00_3363,
									BgL_auxz00_10566);
							}
						}
					}
				else
					{	/* Unsafe/url.scm 257 */
						long BgL_n1z00_3365;

						long BgL_n2z00_3366;

						BgL_n1z00_3365 = (BgL_nz00_3360 / ((long) 16));
						BgL_n2z00_3366 = (BgL_nz00_3360 % ((long) 16));
						{	/* Unsafe/url.scm 259 */
							long BgL_arg3551z00_3367;

							obj_t BgL_arg3552z00_3368;

							BgL_arg3551z00_3367 = (BgL_jz00_9 + ((long) 1));
							BgL_arg3552z00_3368 =
								BGl_intzd2ze3charz31zz__urlz00(BgL_n1z00_3365);
							{	/* Unsafe/url.scm 259 */
								unsigned char BgL_auxz00_10573;

								BgL_auxz00_10573 = CCHAR(BgL_arg3552z00_3368);
								STRING_SET(BgL_resz00_8, BgL_arg3551z00_3367, BgL_auxz00_10573);
						}}
						{	/* Unsafe/url.scm 260 */
							long BgL_arg3553z00_3369;

							obj_t BgL_arg3554z00_3370;

							BgL_arg3553z00_3369 = (BgL_jz00_9 + ((long) 2));
							BgL_arg3554z00_3370 =
								BGl_intzd2ze3charz31zz__urlz00(BgL_n2z00_3366);
							{	/* Unsafe/url.scm 260 */
								unsigned char BgL_auxz00_10578;

								BgL_auxz00_10578 = CCHAR(BgL_arg3554z00_3370);
								return
									STRING_SET(BgL_resz00_8, BgL_arg3553z00_3369,
									BgL_auxz00_10578);
							}
						}
					}
			}
		}
	}



/* int->char */
	obj_t BGl_intzd2ze3charz31zz__urlz00(long BgL_cz00_3371)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 248 */
			if ((BgL_cz00_3371 < ((long) 10)))
				{	/* Unsafe/url.scm 245 */
					return BCHAR(((BgL_cz00_3371 + ((long) 48))));
				}
			else
				{	/* Unsafe/url.scm 245 */
					if ((BgL_cz00_3371 < ((long) 16)))
						{	/* Unsafe/url.scm 247 */
							return BCHAR((((BgL_cz00_3371 - ((long) 10)) + ((long) 65))));
						}
					else
						{	/* Unsafe/url.scm 247 */
							return BFALSE;
						}
				}
		}
	}



/* url-path-encode */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2pathzd2encodez00zz__urlz00(obj_t
		BgL_strz00_11)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 265 */
			{
				obj_t BgL_strz00_3405;

				long BgL_olz00_3406;

				long BgL_nlz00_3407;

				obj_t BgL_strz00_3384;

				long BgL_olz00_3385;

				{	/* Unsafe/url.scm 305 */
					long BgL_olz00_3382;

					BgL_olz00_3382 = STRING_LENGTH(BgL_strz00_11);
					BgL_strz00_3405 = BgL_strz00_11;
					BgL_olz00_3406 = BgL_olz00_3382;
					BgL_strz00_3384 = BgL_strz00_11;
					BgL_olz00_3385 = BgL_olz00_3382;
					{
						long BgL_iz00_3388;

						long BgL_nz00_3389;

						BgL_iz00_3388 = ((long) 0);
						BgL_nz00_3389 = ((long) 0);
					BgL_zc3anonymousza33564ze3z83_3390:
						if ((BgL_iz00_3388 == BgL_olz00_3385))
							{	/* Unsafe/url.scm 270 */
								BgL_nlz00_3407 = BgL_nz00_3389;
							}
						else
							{	/* Unsafe/url.scm 272 */
								unsigned char BgL_cz00_3392;

								BgL_cz00_3392 = STRING_REF(BgL_strz00_3384, BgL_iz00_3388);
								{

									switch (BgL_cz00_3392)
										{
										case ((unsigned char) '#'):
										case ((unsigned char) ' '):
										case ((unsigned char) '"'):
										case ((unsigned char) '\''):
										case ((unsigned char) '+'):
										case ((unsigned char) '&'):
										case ((unsigned char) '='):
										case ((unsigned char) '%'):
										case ((unsigned char) '?'):
										case ((unsigned char) ':'):
										case ((unsigned char) '\n'):
										case ((unsigned char) '^'):
										case ((unsigned char) '['):
										case ((unsigned char) ']'):
										case ((unsigned char) '\\'):
										case ((unsigned char) '<'):
										case ((unsigned char) '>'):

											{
												long BgL_nz00_10624;

												long BgL_iz00_10622;

												BgL_iz00_10622 = (BgL_iz00_3388 + ((long) 1));
												BgL_nz00_10624 = (BgL_nz00_3389 + ((long) 3));
												BgL_nz00_3389 = BgL_nz00_10624;
												BgL_iz00_3388 = BgL_iz00_10622;
												goto BgL_zc3anonymousza33564ze3z83_3390;
											}
											break;
										default:
											{	/* Unsafe/url.scm 278 */
												bool_t BgL_testz00_10626;

												if ((BgL_cz00_3392 < ((unsigned char) ' ')))
													{	/* Unsafe/url.scm 278 */
														BgL_testz00_10626 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/url.scm 278 */
														BgL_testz00_10626 =
															(BgL_cz00_3392 >= ((unsigned char) '{'));
													}
												if (BgL_testz00_10626)
													{
														long BgL_nz00_10632;

														long BgL_iz00_10630;

														BgL_iz00_10630 = (BgL_iz00_3388 + ((long) 1));
														BgL_nz00_10632 = (BgL_nz00_3389 + ((long) 3));
														BgL_nz00_3389 = BgL_nz00_10632;
														BgL_iz00_3388 = BgL_iz00_10630;
														goto BgL_zc3anonymousza33564ze3z83_3390;
													}
												else
													{
														long BgL_nz00_10636;

														long BgL_iz00_10634;

														BgL_iz00_10634 = (BgL_iz00_3388 + ((long) 1));
														BgL_nz00_10636 = (BgL_nz00_3389 + ((long) 1));
														BgL_nz00_3389 = BgL_nz00_10636;
														BgL_iz00_3388 = BgL_iz00_10634;
														goto BgL_zc3anonymousza33564ze3z83_3390;
													}
											}
										}
								}
							}
					}
					if ((BgL_nlz00_3407 == BgL_olz00_3406))
						{	/* Unsafe/url.scm 284 */
							return BgL_strz00_3405;
						}
					else
						{	/* Unsafe/url.scm 286 */
							obj_t BgL_resz00_3410;

							BgL_resz00_3410 =
								make_string(BgL_nlz00_3407, ((unsigned char) ' '));
							{
								long BgL_iz00_3412;

								long BgL_jz00_3413;

								BgL_iz00_3412 = ((long) 0);
								BgL_jz00_3413 = ((long) 0);
							BgL_zc3anonymousza33577ze3z83_3414:
								if ((BgL_jz00_3413 == BgL_nlz00_3407))
									{	/* Unsafe/url.scm 289 */
										return BgL_resz00_3410;
									}
								else
									{	/* Unsafe/url.scm 291 */
										unsigned char BgL_cz00_3416;

										BgL_cz00_3416 = STRING_REF(BgL_strz00_3405, BgL_iz00_3412);
										{

											switch (BgL_cz00_3416)
												{
												case ((unsigned char) '#'):
												case ((unsigned char) ' '):
												case ((unsigned char) '"'):
												case ((unsigned char) '\''):
												case ((unsigned char) '+'):
												case ((unsigned char) '&'):
												case ((unsigned char) '='):
												case ((unsigned char) '%'):
												case ((unsigned char) '?'):
												case ((unsigned char) ':'):
												case ((unsigned char) '\n'):
												case ((unsigned char) '^'):
												case ((unsigned char) '['):
												case ((unsigned char) ']'):
												case ((unsigned char) '\\'):
												case ((unsigned char) '<'):
												case ((unsigned char) '>'):

													BGl_encodezd2charzd2zz__urlz00(BgL_resz00_3410,
														BgL_jz00_3413, BgL_cz00_3416);
													{
														long BgL_jz00_10602;

														long BgL_iz00_10600;

														BgL_iz00_10600 = (BgL_iz00_3412 + ((long) 1));
														BgL_jz00_10602 = (BgL_jz00_3413 + ((long) 3));
														BgL_jz00_3413 = BgL_jz00_10602;
														BgL_iz00_3412 = BgL_iz00_10600;
														goto BgL_zc3anonymousza33577ze3z83_3414;
													}
													break;
												default:
													{	/* Unsafe/url.scm 297 */
														bool_t BgL_testz00_10604;

														if ((BgL_cz00_3416 < ((unsigned char) ' ')))
															{	/* Unsafe/url.scm 297 */
																BgL_testz00_10604 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/url.scm 297 */
																BgL_testz00_10604 =
																	(BgL_cz00_3416 >= ((unsigned char) '{'));
															}
														if (BgL_testz00_10604)
															{	/* Unsafe/url.scm 297 */
																BGl_encodezd2charzd2zz__urlz00(BgL_resz00_3410,
																	BgL_jz00_3413, BgL_cz00_3416);
																{
																	long BgL_jz00_10611;

																	long BgL_iz00_10609;

																	BgL_iz00_10609 = (BgL_iz00_3412 + ((long) 1));
																	BgL_jz00_10611 = (BgL_jz00_3413 + ((long) 3));
																	BgL_jz00_3413 = BgL_jz00_10611;
																	BgL_iz00_3412 = BgL_iz00_10609;
																	goto BgL_zc3anonymousza33577ze3z83_3414;
																}
															}
														else
															{	/* Unsafe/url.scm 297 */
																STRING_SET(BgL_resz00_3410, BgL_jz00_3413,
																	BgL_cz00_3416);
																{
																	long BgL_jz00_10616;

																	long BgL_iz00_10614;

																	BgL_iz00_10614 = (BgL_iz00_3412 + ((long) 1));
																	BgL_jz00_10616 = (BgL_jz00_3413 + ((long) 1));
																	BgL_jz00_3413 = BgL_jz00_10616;
																	BgL_iz00_3412 = BgL_iz00_10614;
																	goto BgL_zc3anonymousza33577ze3z83_3414;
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



/* _url-path-encode */
	obj_t BGl__urlzd2pathzd2encodez00zz__urlz00(obj_t BgL_envz00_7215,
		obj_t BgL_strz00_7216)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 265 */
			{	/* Unsafe/url.scm 270 */
				obj_t BgL_auxz00_10639;

				if (STRINGP(BgL_strz00_7216))
					{	/* Unsafe/url.scm 270 */
						BgL_auxz00_10639 = BgL_strz00_7216;
					}
				else
					{
						obj_t BgL_auxz00_10642;

						BgL_auxz00_10642 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 10305)), BGl_string4146z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_strz00_7216);
						FAILURE(BgL_auxz00_10642, BFALSE, BFALSE);
					}
				return BGl_urlzd2pathzd2encodez00zz__urlz00(BgL_auxz00_10639);
			}
		}
	}



/* url-encode */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2encodezd2zz__urlz00(obj_t BgL_strz00_12)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 311 */
			{	/* Unsafe/url.scm 312 */
				obj_t BgL_schemez00_3432;

				BgL_schemez00_3432 = BGl_urlzd2parsezd2zz__urlz00(BgL_strz00_12);
				{	/* Unsafe/url.scm 314 */
					obj_t BgL_uinfoz00_3433;

					obj_t BgL_hostz00_3434;

					obj_t BgL_portz00_3435;

					obj_t BgL_abspathz00_3436;

					{	/* Unsafe/url.scm 314 */
						int BgL_auxz00_10648;

						BgL_auxz00_10648 = (int) (((long) 1));
						BgL_uinfoz00_3433 = BGL_MVALUES_VAL(BgL_auxz00_10648);
					}
					{	/* Unsafe/url.scm 314 */
						int BgL_auxz00_10651;

						BgL_auxz00_10651 = (int) (((long) 2));
						BgL_hostz00_3434 = BGL_MVALUES_VAL(BgL_auxz00_10651);
					}
					{	/* Unsafe/url.scm 314 */
						int BgL_auxz00_10654;

						BgL_auxz00_10654 = (int) (((long) 3));
						BgL_portz00_3435 = BGL_MVALUES_VAL(BgL_auxz00_10654);
					}
					{	/* Unsafe/url.scm 314 */
						int BgL_auxz00_10657;

						BgL_auxz00_10657 = (int) (((long) 4));
						BgL_abspathz00_3436 = BGL_MVALUES_VAL(BgL_auxz00_10657);
					}
					if (bigloo_strcmp(BgL_schemez00_3432, BGl_string4139z00zz__urlz00))
						{	/* Unsafe/url.scm 314 */
							return BgL_strz00_12;
						}
					else
						{	/* Unsafe/url.scm 316 */
							obj_t BgL_epathz00_3438;

							BgL_epathz00_3438 =
								BGl_urlzd2pathzd2encodez00zz__urlz00(BgL_abspathz00_3436);
							if (CBOOL(BgL_uinfoz00_3433))
								{	/* Unsafe/url.scm 318 */
									obj_t BgL_list3590z00_3439;

									{	/* Unsafe/url.scm 318 */
										obj_t BgL_arg3591z00_3440;

										{	/* Unsafe/url.scm 318 */
											obj_t BgL_arg3592z00_3441;

											{	/* Unsafe/url.scm 318 */
												obj_t BgL_arg3593z00_3442;

												{	/* Unsafe/url.scm 318 */
													obj_t BgL_arg3594z00_3443;

													BgL_arg3594z00_3443 =
														MAKE_PAIR(BgL_epathz00_3438, BNIL);
													BgL_arg3593z00_3442 =
														MAKE_PAIR(BgL_portz00_3435, BgL_arg3594z00_3443);
												}
												BgL_arg3592z00_3441 =
													MAKE_PAIR(BgL_hostz00_3434, BgL_arg3593z00_3442);
											}
											BgL_arg3591z00_3440 =
												MAKE_PAIR(BgL_uinfoz00_3433, BgL_arg3592z00_3441);
										}
										BgL_list3590z00_3439 =
											MAKE_PAIR(BgL_schemez00_3432, BgL_arg3591z00_3440);
									}
									return
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string4147z00zz__urlz00, BgL_list3590z00_3439);
								}
							else
								{	/* Unsafe/url.scm 319 */
									obj_t BgL_list3595z00_3444;

									{	/* Unsafe/url.scm 319 */
										obj_t BgL_arg3596z00_3445;

										{	/* Unsafe/url.scm 319 */
											obj_t BgL_arg3597z00_3446;

											{	/* Unsafe/url.scm 319 */
												obj_t BgL_arg3598z00_3447;

												BgL_arg3598z00_3447 =
													MAKE_PAIR(BgL_epathz00_3438, BNIL);
												BgL_arg3597z00_3446 =
													MAKE_PAIR(BgL_portz00_3435, BgL_arg3598z00_3447);
											}
											BgL_arg3596z00_3445 =
												MAKE_PAIR(BgL_hostz00_3434, BgL_arg3597z00_3446);
										}
										BgL_list3595z00_3444 =
											MAKE_PAIR(BgL_schemez00_3432, BgL_arg3596z00_3445);
									}
									return
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string4148z00zz__urlz00, BgL_list3595z00_3444);
								}
						}
				}
			}
		}
	}



/* _url-encode */
	obj_t BGl__urlzd2encodezd2zz__urlz00(obj_t BgL_envz00_7217,
		obj_t BgL_strz00_7218)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 311 */
			{	/* Unsafe/url.scm 312 */
				obj_t BgL_auxz00_10676;

				if (STRINGP(BgL_strz00_7218))
					{	/* Unsafe/url.scm 312 */
						BgL_auxz00_10676 = BgL_strz00_7218;
					}
				else
					{
						obj_t BgL_auxz00_10679;

						BgL_auxz00_10679 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 11565)), BGl_string4149z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_strz00_7218);
						FAILURE(BgL_auxz00_10679, BFALSE, BFALSE);
					}
				return BGl_urlzd2encodezd2zz__urlz00(BgL_auxz00_10676);
			}
		}
	}



/* url-string-decode-inner! */
	obj_t BGl_urlzd2stringzd2decodezd2innerz12zc0zz__urlz00(obj_t BgL_strz00_13,
		long BgL_olz00_14, long BgL_nlz00_15, obj_t BgL_resz00_16)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 324 */
			{	/* Unsafe/url.scm 333 */
				long BgL_olzd22zd2_3449;

				BgL_olzd22zd2_3449 = (BgL_olz00_14 - ((long) 2));
				{
					long BgL_iz00_3451;

					long BgL_jz00_3452;

					BgL_iz00_3451 = ((long) 0);
					BgL_jz00_3452 = ((long) 0);
				BgL_zc3anonymousza33599ze3z83_3453:
					if ((BgL_jz00_3452 == BgL_nlz00_15))
						{	/* Unsafe/url.scm 336 */
							return BgL_resz00_16;
						}
					else
						{	/* Unsafe/url.scm 338 */
							unsigned char BgL_cz00_3455;

							BgL_cz00_3455 = STRING_REF(BgL_strz00_13, BgL_iz00_3451);
							{	/* Unsafe/url.scm 339 */
								bool_t BgL_testz00_10688;

								if ((BgL_cz00_3455 == ((unsigned char) '%')))
									{	/* Unsafe/url.scm 339 */
										BgL_testz00_10688 = (BgL_iz00_3451 < BgL_olzd22zd2_3449);
									}
								else
									{	/* Unsafe/url.scm 339 */
										BgL_testz00_10688 = ((bool_t) 0);
									}
								if (BgL_testz00_10688)
									{	/* Unsafe/url.scm 340 */
										unsigned char BgL_c1z00_3457;

										unsigned char BgL_c2z00_3458;

										BgL_c1z00_3457 =
											STRING_REF(BgL_strz00_13, (BgL_iz00_3451 + ((long) 1)));
										BgL_c2z00_3458 =
											STRING_REF(BgL_strz00_13, (BgL_iz00_3451 + ((long) 2)));
										{	/* Unsafe/url.scm 342 */
											bool_t BgL_testz00_10696;

											if (BGl_charzd2hexnumericzf3z21zz__urlz00(BgL_c1z00_3457))
												{	/* Unsafe/url.scm 342 */
													BgL_testz00_10696 =
														BGl_charzd2hexnumericzf3z21zz__urlz00
														(BgL_c2z00_3458);
												}
											else
												{	/* Unsafe/url.scm 342 */
													BgL_testz00_10696 = ((bool_t) 0);
												}
											if (BgL_testz00_10696)
												{	/* Unsafe/url.scm 343 */
													long BgL_v1z00_3460;

													BgL_v1z00_3460 =
														BGl_charzd2valuez72za0zz__urlz00(BgL_c1z00_3457);
													{	/* Unsafe/url.scm 343 */
														long BgL_v2z00_3461;

														BgL_v2z00_3461 =
															BGl_charzd2valuez72za0zz__urlz00(BgL_c2z00_3458);
														{	/* Unsafe/url.scm 344 */
															unsigned char BgL_dz00_3462;

															BgL_dz00_3462 =
																(
																((BgL_v1z00_3460 * ((long) 16)) +
																	BgL_v2z00_3461));
															{	/* Unsafe/url.scm 345 */

																STRING_SET(BgL_resz00_16, BgL_jz00_3452,
																	BgL_dz00_3462);
																{
																	long BgL_jz00_10708;

																	long BgL_iz00_10706;

																	BgL_iz00_10706 = (BgL_iz00_3451 + ((long) 3));
																	BgL_jz00_10708 = (BgL_jz00_3452 + ((long) 1));
																	BgL_jz00_3452 = BgL_jz00_10708;
																	BgL_iz00_3451 = BgL_iz00_10706;
																	goto BgL_zc3anonymousza33599ze3z83_3453;
																}
															}
														}
													}
												}
											else
												{	/* Unsafe/url.scm 342 */
													STRING_SET(BgL_resz00_16, BgL_jz00_3452,
														BgL_cz00_3455);
													{
														long BgL_jz00_10713;

														long BgL_iz00_10711;

														BgL_iz00_10711 = (BgL_iz00_3451 + ((long) 1));
														BgL_jz00_10713 = (BgL_jz00_3452 + ((long) 1));
														BgL_jz00_3452 = BgL_jz00_10713;
														BgL_iz00_3451 = BgL_iz00_10711;
														goto BgL_zc3anonymousza33599ze3z83_3453;
													}
												}
										}
									}
								else
									{	/* Unsafe/url.scm 339 */
										STRING_SET(BgL_resz00_16, BgL_jz00_3452, BgL_cz00_3455);
										{
											long BgL_jz00_10718;

											long BgL_iz00_10716;

											BgL_iz00_10716 = (BgL_iz00_3451 + ((long) 1));
											BgL_jz00_10718 = (BgL_jz00_3452 + ((long) 1));
											BgL_jz00_3452 = BgL_jz00_10718;
											BgL_iz00_3451 = BgL_iz00_10716;
											goto BgL_zc3anonymousza33599ze3z83_3453;
										}
									}
							}
						}
				}
			}
		}
	}



/* char-value' */
	long BGl_charzd2valuez72za0zz__urlz00(unsigned char BgL_cz00_3476)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 332 */
			if (isdigit(BgL_cz00_3476))
				{	/* Unsafe/url.scm 327 */
					return ((BgL_cz00_3476) - ((long) 48));
				}
			else
				{	/* Unsafe/url.scm 327 */
					if ((BgL_cz00_3476 <= ((unsigned char) 'F')))
						{	/* Unsafe/url.scm 329 */
							return (((long) 10) + ((BgL_cz00_3476) - ((long) 65)));
						}
					else
						{	/* Unsafe/url.scm 329 */
							return (((long) 10) + ((BgL_cz00_3476) - ((long) 97)));
		}}}
	}



/* url-decode-count */
	long BGl_urlzd2decodezd2countz00zz__urlz00(obj_t BgL_strz00_17,
		long BgL_olz00_18)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 358 */
			{
				long BgL_iz00_3493;

				long BgL_cz00_3494;

				BgL_iz00_3493 = (BgL_olz00_18 - ((long) 3));
				BgL_cz00_3494 = ((long) 0);
			BgL_zc3anonymousza33629ze3z83_3495:
				if ((BgL_iz00_3493 == ((long) -1)))
					{	/* Unsafe/url.scm 362 */
						return BgL_cz00_3494;
					}
				else
					{	/* Unsafe/url.scm 362 */
						if (
							(STRING_REF(BgL_strz00_17,
									BgL_iz00_3493) == ((unsigned char) '%')))
							{	/* Unsafe/url.scm 365 */
								bool_t BgL_testz00_10737;

								if (BGl_charzd2hexnumericzf3z21zz__urlz00(STRING_REF
										(BgL_strz00_17, (BgL_iz00_3493 + ((long) 1)))))
									{	/* Unsafe/url.scm 365 */
										BgL_testz00_10737 =
											BGl_charzd2hexnumericzf3z21zz__urlz00(STRING_REF
											(BgL_strz00_17, (BgL_iz00_3493 + ((long) 2))));
									}
								else
									{	/* Unsafe/url.scm 365 */
										BgL_testz00_10737 = ((bool_t) 0);
									}
								if (BgL_testz00_10737)
									{
										long BgL_cz00_10747;

										long BgL_iz00_10745;

										BgL_iz00_10745 = (BgL_iz00_3493 - ((long) 1));
										BgL_cz00_10747 = (BgL_cz00_3494 + ((long) 1));
										BgL_cz00_3494 = BgL_cz00_10747;
										BgL_iz00_3493 = BgL_iz00_10745;
										goto BgL_zc3anonymousza33629ze3z83_3495;
									}
								else
									{
										long BgL_iz00_10749;

										BgL_iz00_10749 = (BgL_iz00_3493 - ((long) 1));
										BgL_iz00_3493 = BgL_iz00_10749;
										goto BgL_zc3anonymousza33629ze3z83_3495;
									}
							}
						else
							{
								long BgL_iz00_10751;

								BgL_iz00_10751 = (BgL_iz00_3493 - ((long) 1));
								BgL_iz00_3493 = BgL_iz00_10751;
								goto BgL_zc3anonymousza33629ze3z83_3495;
							}
					}
			}
		}
	}



/* url-decode */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2decodezd2zz__urlz00(obj_t BgL_strz00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 375 */
			{	/* Unsafe/url.scm 376 */
				long BgL_olz00_3510;

				BgL_olz00_3510 = STRING_LENGTH(BgL_strz00_19);
				if ((BgL_olz00_3510 >= ((long) 3)))
					{	/* Unsafe/url.scm 378 */
						long BgL_countz00_3512;

						BgL_countz00_3512 =
							BGl_urlzd2decodezd2countz00zz__urlz00(BgL_strz00_19,
							BgL_olz00_3510);
						if ((BgL_countz00_3512 == ((long) 0)))
							{	/* Unsafe/url.scm 379 */
								return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_19);
							}
						else
							{	/* Unsafe/url.scm 381 */
								long BgL_nlz00_3514;

								BgL_nlz00_3514 =
									(BgL_olz00_3510 - (BgL_countz00_3512 * ((long) 2)));
								{	/* Unsafe/url.scm 381 */
									obj_t BgL_resz00_3515;

									BgL_resz00_3515 =
										make_string(BgL_nlz00_3514, ((unsigned char) ' '));
									{	/* Unsafe/url.scm 382 */

										return
											BGl_urlzd2stringzd2decodezd2innerz12zc0zz__urlz00
											(BgL_strz00_19, BgL_olz00_3510, BgL_nlz00_3514,
											BgL_resz00_3515);
									}
								}
							}
					}
				else
					{	/* Unsafe/url.scm 377 */
						return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_19);
					}
			}
		}
	}



/* _url-decode */
	obj_t BGl__urlzd2decodezd2zz__urlz00(obj_t BgL_envz00_7219,
		obj_t BgL_strz00_7220)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 375 */
			{	/* Unsafe/url.scm 376 */
				obj_t BgL_auxz00_10766;

				if (STRINGP(BgL_strz00_7220))
					{	/* Unsafe/url.scm 376 */
						BgL_auxz00_10766 = BgL_strz00_7220;
					}
				else
					{
						obj_t BgL_auxz00_10769;

						BgL_auxz00_10769 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 13859)), BGl_string4150z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_strz00_7220);
						FAILURE(BgL_auxz00_10769, BFALSE, BFALSE);
					}
				return BGl_urlzd2decodezd2zz__urlz00(BgL_auxz00_10766);
			}
		}
	}



/* url-decode! */
	BGL_EXPORTED_DEF obj_t BGl_urlzd2decodez12zc0zz__urlz00(obj_t BgL_strz00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 389 */
			{	/* Unsafe/url.scm 390 */
				long BgL_olz00_3518;

				BgL_olz00_3518 = STRING_LENGTH(BgL_strz00_20);
				if ((BgL_olz00_3518 >= ((long) 3)))
					{	/* Unsafe/url.scm 392 */
						long BgL_countz00_3520;

						BgL_countz00_3520 =
							BGl_urlzd2decodezd2countz00zz__urlz00(BgL_strz00_20,
							BgL_olz00_3518);
						if ((BgL_countz00_3520 == ((long) 0)))
							{	/* Unsafe/url.scm 393 */
								return BgL_strz00_20;
							}
						else
							{	/* Unsafe/url.scm 395 */
								long BgL_nlz00_3522;

								BgL_nlz00_3522 =
									(BgL_olz00_3518 - (BgL_countz00_3520 * ((long) 2)));
								{	/* Unsafe/url.scm 395 */
									obj_t BgL_resz00_3523;

									BgL_resz00_3523 =
										make_string(BgL_nlz00_3522, ((unsigned char) ' '));
									{	/* Unsafe/url.scm 396 */

										return
											BGl_urlzd2stringzd2decodezd2innerz12zc0zz__urlz00
											(BgL_strz00_20, BgL_olz00_3518, BgL_nlz00_3522,
											BgL_resz00_3523);
									}
								}
							}
					}
				else
					{	/* Unsafe/url.scm 391 */
						return BgL_strz00_20;
					}
			}
		}
	}



/* _url-decode! */
	obj_t BGl__urlzd2decodez12zc0zz__urlz00(obj_t BgL_envz00_7221,
		obj_t BgL_strz00_7222)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 389 */
			{	/* Unsafe/url.scm 390 */
				obj_t BgL_auxz00_10784;

				if (STRINGP(BgL_strz00_7222))
					{	/* Unsafe/url.scm 390 */
						BgL_auxz00_10784 = BgL_strz00_7222;
					}
				else
					{
						obj_t BgL_auxz00_10787;

						BgL_auxz00_10787 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 14393)), BGl_string4151z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_strz00_7222);
						FAILURE(BgL_auxz00_10787, BFALSE, BFALSE);
					}
				return BGl_urlzd2decodez12zc0zz__urlz00(BgL_auxz00_10784);
			}
		}
	}



/* form-urlencode */
	obj_t BGl_formzd2urlencodezd2zz__urlz00(obj_t BgL_argsz00_21,
		unsigned char BgL_sepz00_22)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 403 */
			if (NULLP(BgL_argsz00_21))
				{	/* Unsafe/url.scm 458 */
					return BGl_string4152z00zz__urlz00;
				}
			else
				{
					obj_t BgL_az00_3532;

					long BgL_lenz00_3533;

					BgL_az00_3532 = BgL_argsz00_21;
					BgL_lenz00_3533 = ((long) 0);
				BgL_zc3anonymousza33652ze3z83_3534:
					if (NULLP(CDR(BgL_az00_3532)))
						{	/* Unsafe/url.scm 463 */
							long BgL_lenz00_3536;

							BgL_lenz00_3536 =
								(BgL_lenz00_3533 +
								BGl_countzd2argzd2zz__urlz00(CAR(BgL_az00_3532)));
							{	/* Unsafe/url.scm 463 */
								obj_t BgL_resz00_3537;

								BgL_resz00_3537 =
									make_string(BgL_lenz00_3536, ((unsigned char) ' '));
								{	/* Unsafe/url.scm 464 */

									{
										obj_t BgL_az00_3539;

										long BgL_iz00_3540;

										BgL_az00_3539 = BgL_argsz00_21;
										BgL_iz00_3540 = ((long) 0);
									BgL_zc3anonymousza33654ze3z83_3541:
										if (NULLP(CDR(BgL_az00_3539)))
											{	/* Unsafe/url.scm 467 */
												{	/* Unsafe/url.scm 469 */
													obj_t BgL_arg3656z00_3543;

													BgL_arg3656z00_3543 = CAR(BgL_az00_3539);
													{	/* Unsafe/url.scm 469 */
														long BgL_niz00_6717;

														BgL_niz00_6717 =
															BGl_encodezd2stringzd2zz__urlz00(BgL_resz00_3537,
															BgL_iz00_3540, CAR(BgL_arg3656z00_3543));
														{	/* Unsafe/url.scm 469 */
															bool_t BgL_testz00_10807;

															{	/* Unsafe/url.scm 469 */
																obj_t BgL_auxz00_10808;

																{	/* Unsafe/url.scm 469 */
																	obj_t BgL_pairz00_6724;

																	BgL_pairz00_6724 = BgL_arg3656z00_3543;
																	BgL_auxz00_10808 = CAR(CDR(BgL_pairz00_6724));
																}
																BgL_testz00_10807 =
																	(BgL_auxz00_10808 == BUNSPEC);
															}
															if (BgL_testz00_10807)
																{	/* Unsafe/url.scm 469 */
																	BgL_niz00_6717;
																}
															else
																{	/* Unsafe/url.scm 469 */
																	STRING_SET(BgL_resz00_3537, BgL_niz00_6717,
																		((unsigned char) '='));
																	{	/* Unsafe/url.scm 469 */
																		long BgL_arg3707z00_6721;

																		obj_t BgL_arg3708z00_6722;

																		BgL_arg3707z00_6721 =
																			(BgL_niz00_6717 + ((long) 1));
																		{	/* Unsafe/url.scm 469 */
																			obj_t BgL_pairz00_6733;

																			BgL_pairz00_6733 = BgL_arg3656z00_3543;
																			BgL_arg3708z00_6722 =
																				CAR(CDR(BgL_pairz00_6733));
																		}
																		BGl_encodezd2stringzd2zz__urlz00
																			(BgL_resz00_3537, BgL_arg3707z00_6721,
																			BgL_arg3708z00_6722);
												}}}}}
												return BgL_resz00_3537;
											}
										else
											{	/* Unsafe/url.scm 471 */
												long BgL_niz00_3544;

												{	/* Unsafe/url.scm 471 */
													obj_t BgL_arg3659z00_3547;

													BgL_arg3659z00_3547 = CAR(BgL_az00_3539);
													{	/* Unsafe/url.scm 471 */
														long BgL_niz00_6741;

														BgL_niz00_6741 =
															BGl_encodezd2stringzd2zz__urlz00(BgL_resz00_3537,
															BgL_iz00_3540, CAR(BgL_arg3659z00_3547));
														{	/* Unsafe/url.scm 471 */
															bool_t BgL_testz00_10820;

															{	/* Unsafe/url.scm 471 */
																obj_t BgL_auxz00_10821;

																{	/* Unsafe/url.scm 471 */
																	obj_t BgL_pairz00_6748;

																	BgL_pairz00_6748 = BgL_arg3659z00_3547;
																	BgL_auxz00_10821 = CAR(CDR(BgL_pairz00_6748));
																}
																BgL_testz00_10820 =
																	(BgL_auxz00_10821 == BUNSPEC);
															}
															if (BgL_testz00_10820)
																{	/* Unsafe/url.scm 471 */
																	BgL_niz00_3544 = BgL_niz00_6741;
																}
															else
																{	/* Unsafe/url.scm 471 */
																	STRING_SET(BgL_resz00_3537, BgL_niz00_6741,
																		((unsigned char) '='));
																	{	/* Unsafe/url.scm 471 */
																		long BgL_arg3707z00_6745;

																		obj_t BgL_arg3708z00_6746;

																		BgL_arg3707z00_6745 =
																			(BgL_niz00_6741 + ((long) 1));
																		{	/* Unsafe/url.scm 471 */
																			obj_t BgL_pairz00_6757;

																			BgL_pairz00_6757 = BgL_arg3659z00_3547;
																			BgL_arg3708z00_6746 =
																				CAR(CDR(BgL_pairz00_6757));
																		}
																		BgL_niz00_3544 =
																			BGl_encodezd2stringzd2zz__urlz00
																			(BgL_resz00_3537, BgL_arg3707z00_6745,
																			BgL_arg3708z00_6746);
												}}}}}
												STRING_SET(BgL_resz00_3537, BgL_niz00_3544,
													BgL_sepz00_22);
												{
													long BgL_iz00_10833;

													obj_t BgL_az00_10831;

													BgL_az00_10831 = CDR(BgL_az00_3539);
													BgL_iz00_10833 = (BgL_niz00_3544 + ((long) 1));
													BgL_iz00_3540 = BgL_iz00_10833;
													BgL_az00_3539 = BgL_az00_10831;
													goto BgL_zc3anonymousza33654ze3z83_3541;
												}
											}
									}
								}
							}
						}
					else
						{
							long BgL_lenz00_10837;

							obj_t BgL_az00_10835;

							BgL_az00_10835 = CDR(BgL_az00_3532);
							BgL_lenz00_10837 =
								(
								(((long) 1) + BgL_lenz00_3533) +
								BGl_countzd2argzd2zz__urlz00(CAR(BgL_az00_3532)));
							BgL_lenz00_3533 = BgL_lenz00_10837;
							BgL_az00_3532 = BgL_az00_10835;
							goto BgL_zc3anonymousza33652ze3z83_3534;
						}
				}
		}
	}



/* count-string */
	long BGl_countzd2stringzd2zz__urlz00(obj_t BgL_strz00_3560)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 418 */
			{	/* Unsafe/url.scm 406 */
				long BgL_lenz00_3562;

				BgL_lenz00_3562 = STRING_LENGTH(BgL_strz00_3560);
				{
					long BgL_iz00_3564;

					long BgL_nz00_3565;

					BgL_iz00_3564 = ((long) 0);
					BgL_nz00_3565 = ((long) 0);
				BgL_zc3anonymousza33672ze3z83_3566:
					if ((BgL_iz00_3564 == BgL_lenz00_3562))
						{	/* Unsafe/url.scm 409 */
							return BgL_nz00_3565;
						}
					else
						{	/* Unsafe/url.scm 411 */
							unsigned char BgL_cz00_3568;

							BgL_cz00_3568 = STRING_REF(BgL_strz00_3560, BgL_iz00_3564);
							{

								switch (BgL_cz00_3568)
									{
									case ((unsigned char) ';'):
									case ((unsigned char) '&'):
									case ((unsigned char) '='):
									case ((unsigned char) '#'):
									case ((unsigned char) '"'):
									case ((unsigned char) '\''):
									case ((unsigned char) '+'):
									case ((unsigned char) '%'):
									case ((unsigned char) '?'):
									case ((unsigned char) ':'):
									case ((unsigned char) '|'):

										{
											long BgL_nz00_10848;

											long BgL_iz00_10846;

											BgL_iz00_10846 = (BgL_iz00_3564 + ((long) 1));
											BgL_nz00_10848 = (BgL_nz00_3565 + ((long) 3));
											BgL_nz00_3565 = BgL_nz00_10848;
											BgL_iz00_3564 = BgL_iz00_10846;
											goto BgL_zc3anonymousza33672ze3z83_3566;
										}
										break;
									default:
										{	/* Unsafe/url.scm 416 */
											bool_t BgL_testz00_10850;

											if ((BgL_cz00_3568 >= ((unsigned char) '€')))
												{	/* Unsafe/url.scm 416 */
													BgL_testz00_10850 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/url.scm 416 */
													BgL_testz00_10850 =
														(BgL_cz00_3568 < ((unsigned char) ' '));
												}
											if (BgL_testz00_10850)
												{
													long BgL_nz00_10856;

													long BgL_iz00_10854;

													BgL_iz00_10854 = (BgL_iz00_3564 + ((long) 1));
													BgL_nz00_10856 = (BgL_nz00_3565 + ((long) 3));
													BgL_nz00_3565 = BgL_nz00_10856;
													BgL_iz00_3564 = BgL_iz00_10854;
													goto BgL_zc3anonymousza33672ze3z83_3566;
												}
											else
												{
													long BgL_nz00_10860;

													long BgL_iz00_10858;

													BgL_iz00_10858 = (BgL_iz00_3564 + ((long) 1));
													BgL_nz00_10860 = (BgL_nz00_3565 + ((long) 1));
													BgL_nz00_3565 = BgL_nz00_10860;
													BgL_iz00_3564 = BgL_iz00_10858;
													goto BgL_zc3anonymousza33672ze3z83_3566;
												}
										}
									}
							}
						}
				}
			}
		}
	}



/* count-arg */
	long BGl_countzd2argzd2zz__urlz00(obj_t BgL_argz00_3606)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 448 */
			{	/* Unsafe/url.scm 445 */
				long BgL_cnamez00_3608;

				BgL_cnamez00_3608 =
					BGl_countzd2stringzd2zz__urlz00(CAR(BgL_argz00_3606));
				{	/* Unsafe/url.scm 446 */
					bool_t BgL_testz00_10865;

					{	/* Unsafe/url.scm 446 */
						obj_t BgL_auxz00_10866;

						{	/* Unsafe/url.scm 446 */
							obj_t BgL_pairz00_6826;

							BgL_pairz00_6826 = BgL_argz00_3606;
							BgL_auxz00_10866 = CAR(CDR(BgL_pairz00_6826));
						}
						BgL_testz00_10865 = (BgL_auxz00_10866 == BUNSPEC);
					}
					if (BgL_testz00_10865)
						{	/* Unsafe/url.scm 446 */
							return BgL_cnamez00_3608;
						}
					else
						{	/* Unsafe/url.scm 448 */
							long BgL_auxz00_10870;

							{	/* Unsafe/url.scm 448 */
								obj_t BgL_auxz00_10872;

								{	/* Unsafe/url.scm 448 */
									obj_t BgL_pairz00_6832;

									BgL_pairz00_6832 = BgL_argz00_3606;
									BgL_auxz00_10872 = CAR(CDR(BgL_pairz00_6832));
								}
								BgL_auxz00_10870 =
									BGl_countzd2stringzd2zz__urlz00(BgL_auxz00_10872);
							}
							return ((BgL_cnamez00_3608 + ((long) 1)) + BgL_auxz00_10870);
		}}}}
	}



/* encode-string */
	long BGl_encodezd2stringzd2zz__urlz00(obj_t BgL_resz00_3581,
		long BgL_oz00_3582, obj_t BgL_strz00_3583)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 442 */
			{	/* Unsafe/url.scm 422 */
				long BgL_lenz00_3585;

				BgL_lenz00_3585 = STRING_LENGTH(BgL_strz00_3583);
				{
					long BgL_iz00_3587;

					long BgL_jz00_3588;

					BgL_iz00_3587 = ((long) 0);
					BgL_jz00_3588 = BgL_oz00_3582;
				BgL_zc3anonymousza33685ze3z83_3589:
					if ((BgL_iz00_3587 == BgL_lenz00_3585))
						{	/* Unsafe/url.scm 425 */
							return BgL_jz00_3588;
						}
					else
						{	/* Unsafe/url.scm 427 */
							unsigned char BgL_cz00_3591;

							BgL_cz00_3591 = STRING_REF(BgL_strz00_3583, BgL_iz00_3587);
							{

								switch (BgL_cz00_3591)
									{
									case ((unsigned char) ';'):
									case ((unsigned char) '&'):
									case ((unsigned char) '='):
									case ((unsigned char) '#'):
									case ((unsigned char) '"'):
									case ((unsigned char) '\''):
									case ((unsigned char) '+'):
									case ((unsigned char) '%'):
									case ((unsigned char) '?'):
									case ((unsigned char) ':'):
									case ((unsigned char) '|'):

										BGl_encodezd2charzd2zz__urlz00(BgL_resz00_3581,
											BgL_jz00_3588, BgL_cz00_3591);
										{
											long BgL_jz00_10884;

											long BgL_iz00_10882;

											BgL_iz00_10882 = (BgL_iz00_3587 + ((long) 1));
											BgL_jz00_10884 = (BgL_jz00_3588 + ((long) 3));
											BgL_jz00_3588 = BgL_jz00_10884;
											BgL_iz00_3587 = BgL_iz00_10882;
											goto BgL_zc3anonymousza33685ze3z83_3589;
										}
										break;
									case ((unsigned char) ' '):

										STRING_SET(BgL_resz00_3581, BgL_jz00_3588,
											((unsigned char) '+'));
										{
											long BgL_jz00_10889;

											long BgL_iz00_10887;

											BgL_iz00_10887 = (BgL_iz00_3587 + ((long) 1));
											BgL_jz00_10889 = (BgL_jz00_3588 + ((long) 1));
											BgL_jz00_3588 = BgL_jz00_10889;
											BgL_iz00_3587 = BgL_iz00_10887;
											goto BgL_zc3anonymousza33685ze3z83_3589;
										}
										break;
									default:
										{	/* Unsafe/url.scm 436 */
											bool_t BgL_testz00_10891;

											if ((BgL_cz00_3591 >= ((unsigned char) '€')))
												{	/* Unsafe/url.scm 436 */
													BgL_testz00_10891 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/url.scm 436 */
													BgL_testz00_10891 =
														(BgL_cz00_3591 < ((unsigned char) ' '));
												}
											if (BgL_testz00_10891)
												{	/* Unsafe/url.scm 436 */
													BGl_encodezd2charzd2zz__urlz00(BgL_resz00_3581,
														BgL_jz00_3588, BgL_cz00_3591);
													{
														long BgL_jz00_10898;

														long BgL_iz00_10896;

														BgL_iz00_10896 = (BgL_iz00_3587 + ((long) 1));
														BgL_jz00_10898 = (BgL_jz00_3588 + ((long) 3));
														BgL_jz00_3588 = BgL_jz00_10898;
														BgL_iz00_3587 = BgL_iz00_10896;
														goto BgL_zc3anonymousza33685ze3z83_3589;
													}
												}
											else
												{	/* Unsafe/url.scm 436 */
													STRING_SET(BgL_resz00_3581, BgL_jz00_3588,
														BgL_cz00_3591);
													{
														long BgL_jz00_10903;

														long BgL_iz00_10901;

														BgL_iz00_10901 = (BgL_iz00_3587 + ((long) 1));
														BgL_jz00_10903 = (BgL_jz00_3588 + ((long) 1));
														BgL_jz00_3588 = BgL_jz00_10903;
														BgL_iz00_3587 = BgL_iz00_10901;
														goto BgL_zc3anonymousza33685ze3z83_3589;
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



/* www-form-urlencode */
	BGL_EXPORTED_DEF obj_t BGl_wwwzd2formzd2urlencodez00zz__urlz00(obj_t
		BgL_argsz00_23)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 479 */
			return
				BGl_formzd2urlencodezd2zz__urlz00(BgL_argsz00_23,
				((unsigned char) ';'));
		}
	}



/* _www-form-urlencode */
	obj_t BGl__wwwzd2formzd2urlencodez00zz__urlz00(obj_t BgL_envz00_7223,
		obj_t BgL_argsz00_7224)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 479 */
			{	/* Unsafe/url.scm 480 */
				obj_t BgL_auxz00_10907;

				{	/* Unsafe/url.scm 480 */
					bool_t BgL_testz00_10908;

					if (PAIRP(BgL_argsz00_7224))
						{	/* Unsafe/url.scm 480 */
							BgL_testz00_10908 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/url.scm 480 */
							BgL_testz00_10908 = NULLP(BgL_argsz00_7224);
						}
					if (BgL_testz00_10908)
						{	/* Unsafe/url.scm 480 */
							BgL_auxz00_10907 = BgL_argsz00_7224;
						}
					else
						{
							obj_t BgL_auxz00_10912;

							BgL_auxz00_10912 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
								BINT(((long) 17089)), BGl_string4153z00zz__urlz00,
								BGl_string4154z00zz__urlz00, BgL_argsz00_7224);
							FAILURE(BgL_auxz00_10912, BFALSE, BFALSE);
				}}
				return BGl_wwwzd2formzd2urlencodez00zz__urlz00(BgL_auxz00_10907);
			}
		}
	}



/* x-www-form-urlencode */
	BGL_EXPORTED_DEF obj_t BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t
		BgL_argsz00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 485 */
			return
				BGl_formzd2urlencodezd2zz__urlz00(BgL_argsz00_24,
				((unsigned char) '&'));
		}
	}



/* _x-www-form-urlencode */
	obj_t BGl__xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t BgL_envz00_7225,
		obj_t BgL_argsz00_7226)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 485 */
			{	/* Unsafe/url.scm 486 */
				obj_t BgL_auxz00_10918;

				{	/* Unsafe/url.scm 486 */
					bool_t BgL_testz00_10919;

					if (PAIRP(BgL_argsz00_7226))
						{	/* Unsafe/url.scm 486 */
							BgL_testz00_10919 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/url.scm 486 */
							BgL_testz00_10919 = NULLP(BgL_argsz00_7226);
						}
					if (BgL_testz00_10919)
						{	/* Unsafe/url.scm 486 */
							BgL_auxz00_10918 = BgL_argsz00_7226;
						}
					else
						{
							obj_t BgL_auxz00_10923;

							BgL_auxz00_10923 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
								BINT(((long) 17378)), BGl_string4155z00zz__urlz00,
								BGl_string4154z00zz__urlz00, BgL_argsz00_7226);
							FAILURE(BgL_auxz00_10923, BFALSE, BFALSE);
				}}
				return BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(BgL_auxz00_10918);
			}
		}
	}



/* char-hexnumeric? */
	bool_t BGl_charzd2hexnumericzf3z21zz__urlz00(unsigned char BgL_cz00_25)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 491 */
			{	/* Unsafe/url.scm 492 */
				bool_t BgL__ortest_1987z00_3629;

				BgL__ortest_1987z00_3629 = isdigit(BgL_cz00_25);
				if (BgL__ortest_1987z00_3629)
					{	/* Unsafe/url.scm 492 */
						return BgL__ortest_1987z00_3629;
					}
				else
					{	/* Unsafe/url.scm 493 */
						bool_t BgL__ortest_1988z00_3630;

						if ((BgL_cz00_25 >= ((unsigned char) 'A')))
							{	/* Unsafe/url.scm 493 */
								BgL__ortest_1988z00_3630 =
									(BgL_cz00_25 <= ((unsigned char) 'F'));
							}
						else
							{	/* Unsafe/url.scm 493 */
								BgL__ortest_1988z00_3630 = ((bool_t) 0);
							}
						if (BgL__ortest_1988z00_3630)
							{	/* Unsafe/url.scm 493 */
								return BgL__ortest_1988z00_3630;
							}
						else
							{	/* Unsafe/url.scm 493 */
								if ((BgL_cz00_25 >= ((unsigned char) 'a')))
									{	/* Unsafe/url.scm 494 */
										return (BgL_cz00_25 <= ((unsigned char) 'f'));
									}
								else
									{	/* Unsafe/url.scm 494 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* www-form-urldecode */
	BGL_EXPORTED_DEF obj_t BGl_wwwzd2formzd2urldecodez00zz__urlz00(obj_t
		BgL_stringz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 499 */
			{	/* Unsafe/url.scm 561 */
				long BgL_lenz00_3636;

				BgL_lenz00_3636 = STRING_LENGTH(BgL_stringz00_26);
				if ((BgL_lenz00_3636 == ((long) 0)))
					{	/* Unsafe/url.scm 562 */
						return BNIL;
					}
				else
					{	/* Unsafe/url.scm 564 */
						obj_t BgL_arg3713z00_3639;

						{	/* Unsafe/url.scm 571 */
							obj_t BgL_list3726z00_3654;

							BgL_list3726z00_3654 =
								MAKE_PAIR(BGl_string4156z00zz__urlz00, BNIL);
							BgL_arg3713z00_3639 =
								BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_stringz00_26,
								BgL_list3726z00_3654);
						}
						{	/* Unsafe/url.scm 564 */
							obj_t BgL_list3714z00_3640;

							BgL_list3714z00_3640 = MAKE_PAIR(BgL_arg3713z00_3639, BNIL);
							return
								BGl_mapz12z12zz__r4_control_features_6_9z00
								(BGl_proc4157z00zz__urlz00, BgL_list3714z00_3640);
						}
					}
			}
		}
	}



/* _www-form-urldecode */
	obj_t BGl__wwwzd2formzd2urldecodez00zz__urlz00(obj_t BgL_envz00_7228,
		obj_t BgL_stringz00_7229)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 499 */
			{	/* Unsafe/url.scm 502 */
				obj_t BgL_auxz00_10944;

				if (STRINGP(BgL_stringz00_7229))
					{	/* Unsafe/url.scm 502 */
						BgL_auxz00_10944 = BgL_stringz00_7229;
					}
				else
					{
						obj_t BgL_auxz00_10947;

						BgL_auxz00_10947 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4143z00zz__urlz00,
							BINT(((long) 18073)), BGl_string4158z00zz__urlz00,
							BGl_string4145z00zz__urlz00, BgL_stringz00_7229);
						FAILURE(BgL_auxz00_10947, BFALSE, BFALSE);
					}
				return BGl_wwwzd2formzd2urldecodez00zz__urlz00(BgL_auxz00_10944);
			}
		}
	}



/* <anonymous:3715> */
	obj_t BGl_zc3anonymousza33715ze3z83zz__urlz00(obj_t BgL_envz00_7230,
		obj_t BgL_sz00_7231)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 564 */
			{
				obj_t BgL_sz00_3641;

				BgL_sz00_3641 = BgL_sz00_7231;
				{	/* Unsafe/url.scm 565 */
					obj_t BgL_argz00_3643;

					{	/* Unsafe/url.scm 565 */
						obj_t BgL_list3725z00_3653;

						BgL_list3725z00_3653 = MAKE_PAIR(BGl_string4159z00zz__urlz00, BNIL);
						BgL_argz00_3643 =
							BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_sz00_3641,
							BgL_list3725z00_3653);
					}
					{	/* Unsafe/url.scm 566 */
						obj_t BgL_auxz00_10954;

						BgL_auxz00_10954 =
							BGl_stringzd2decodezd2zz__urlz00(CAR(BgL_argz00_3643));
						SET_CAR(BgL_argz00_3643, BgL_auxz00_10954);
					}
					if (NULLP(CDR(BgL_argz00_3643)))
						{	/* Unsafe/url.scm 568 */
							obj_t BgL_arg3719z00_3647;

							{	/* Unsafe/url.scm 568 */
								obj_t BgL_list3720z00_3648;

								BgL_list3720z00_3648 = MAKE_PAIR(BUNSPEC, BNIL);
								BgL_arg3719z00_3647 = BgL_list3720z00_3648;
							}
							SET_CDR(BgL_argz00_3643, BgL_arg3719z00_3647);
						}
					else
						{	/* Unsafe/url.scm 569 */
							obj_t BgL_arg3721z00_3649;

							obj_t BgL_arg3722z00_3650;

							BgL_arg3721z00_3649 = CDR(BgL_argz00_3643);
							{	/* Unsafe/url.scm 569 */
								obj_t BgL_arg3723z00_3651;

								{	/* Unsafe/url.scm 569 */
									obj_t BgL_pairz00_6880;

									BgL_pairz00_6880 = BgL_argz00_3643;
									BgL_arg3723z00_3651 = CAR(CDR(BgL_pairz00_6880));
								}
								BgL_arg3722z00_3650 =
									BGl_stringzd2decodezd2zz__urlz00(BgL_arg3723z00_3651);
							}
							SET_CAR(BgL_arg3721z00_3649, BgL_arg3722z00_3650);
						}
					return BgL_argz00_3643;
				}
			}
		}
	}



/* char-value */
	long BGl_charzd2valuezd2zz__urlz00(unsigned char BgL_cz00_3714)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 523 */
			if (isdigit(BgL_cz00_3714))
				{	/* Unsafe/url.scm 518 */
					return ((BgL_cz00_3714) - ((long) 48));
				}
			else
				{	/* Unsafe/url.scm 518 */
					if ((BgL_cz00_3714 <= ((unsigned char) 'F')))
						{	/* Unsafe/url.scm 520 */
							return (((long) 10) + ((BgL_cz00_3714) - ((long) 65)));
						}
					else
						{	/* Unsafe/url.scm 520 */
							return (((long) 10) + ((BgL_cz00_3714) - ((long) 97)));
		}}}
	}



/* string-decode */
	obj_t BGl_stringzd2decodezd2zz__urlz00(obj_t BgL_strz00_3729)
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 559 */
			{
				obj_t BgL_strz00_3656;

				long BgL_olz00_3657;

				obj_t BgL_strz00_3678;

				long BgL_olz00_3679;

				long BgL_nlz00_3680;

				obj_t BgL_resz00_3681;

				{	/* Unsafe/url.scm 551 */
					long BgL_olz00_3731;

					BgL_olz00_3731 = STRING_LENGTH(BgL_strz00_3729);
					if ((BgL_olz00_3731 >= ((long) 3)))
						{	/* Unsafe/url.scm 553 */
							long BgL_countz00_3733;

							BgL_strz00_3656 = BgL_strz00_3729;
							BgL_olz00_3657 = BgL_olz00_3731;
							{
								long BgL_iz00_3661;

								long BgL_cz00_3662;

								BgL_iz00_3661 = (BgL_olz00_3657 - ((long) 3));
								BgL_cz00_3662 = ((long) 0);
							BgL_zc3anonymousza33728ze3z83_3663:
								if ((BgL_iz00_3661 == ((long) -1)))
									{	/* Unsafe/url.scm 505 */
										BgL_countz00_3733 = BgL_cz00_3662;
									}
								else
									{	/* Unsafe/url.scm 505 */
										if (
											(STRING_REF(BgL_strz00_3656,
													BgL_iz00_3661) == ((unsigned char) '%')))
											{	/* Unsafe/url.scm 508 */
												bool_t BgL_testz00_10988;

												if (BGl_charzd2hexnumericzf3z21zz__urlz00(STRING_REF
														(BgL_strz00_3656, (BgL_iz00_3661 + ((long) 1)))))
													{	/* Unsafe/url.scm 508 */
														BgL_testz00_10988 =
															BGl_charzd2hexnumericzf3z21zz__urlz00(STRING_REF
															(BgL_strz00_3656, (BgL_iz00_3661 + ((long) 2))));
													}
												else
													{	/* Unsafe/url.scm 508 */
														BgL_testz00_10988 = ((bool_t) 0);
													}
												if (BgL_testz00_10988)
													{
														long BgL_cz00_10998;

														long BgL_iz00_10996;

														BgL_iz00_10996 = (BgL_iz00_3661 - ((long) 1));
														BgL_cz00_10998 = (BgL_cz00_3662 + ((long) 1));
														BgL_cz00_3662 = BgL_cz00_10998;
														BgL_iz00_3661 = BgL_iz00_10996;
														goto BgL_zc3anonymousza33728ze3z83_3663;
													}
												else
													{
														long BgL_iz00_11000;

														BgL_iz00_11000 = (BgL_iz00_3661 - ((long) 1));
														BgL_iz00_3661 = BgL_iz00_11000;
														goto BgL_zc3anonymousza33728ze3z83_3663;
													}
											}
										else
											{
												long BgL_iz00_11002;

												BgL_iz00_11002 = (BgL_iz00_3661 - ((long) 1));
												BgL_iz00_3661 = BgL_iz00_11002;
												goto BgL_zc3anonymousza33728ze3z83_3663;
											}
									}
							}
							if ((BgL_countz00_3733 == ((long) 0)))
								{	/* Unsafe/url.scm 554 */
									return
										BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
										(BgL_strz00_3729, (char) (((unsigned char) '+')),
										(char) (((unsigned char) ' ')));
								}
							else
								{	/* Unsafe/url.scm 556 */
									long BgL_nlz00_3735;

									BgL_nlz00_3735 =
										(BgL_olz00_3731 - (BgL_countz00_3733 * ((long) 2)));
									{	/* Unsafe/url.scm 556 */
										obj_t BgL_resz00_3736;

										BgL_resz00_3736 =
											make_string(BgL_nlz00_3735, ((unsigned char) ' '));
										{	/* Unsafe/url.scm 557 */

											BgL_strz00_3678 = BgL_strz00_3729;
											BgL_olz00_3679 = BgL_olz00_3731;
											BgL_nlz00_3680 = BgL_nlz00_3735;
											BgL_resz00_3681 = BgL_resz00_3736;
											{	/* Unsafe/url.scm 524 */
												long BgL_olzd22zd2_3684;

												BgL_olzd22zd2_3684 = (BgL_olz00_3679 - ((long) 2));
												{
													long BgL_iz00_3686;

													long BgL_jz00_3687;

													BgL_iz00_3686 = ((long) 0);
													BgL_jz00_3687 = ((long) 0);
												BgL_zc3anonymousza33743ze3z83_3688:
													if ((BgL_jz00_3687 == BgL_nlz00_3680))
														{	/* Unsafe/url.scm 527 */
															return BgL_resz00_3681;
														}
													else
														{	/* Unsafe/url.scm 529 */
															unsigned char BgL_cz00_3690;

															BgL_cz00_3690 =
																STRING_REF(BgL_strz00_3678, BgL_iz00_3686);
															{	/* Unsafe/url.scm 531 */
																bool_t BgL_testz00_11017;

																if ((BgL_cz00_3690 == ((unsigned char) '%')))
																	{	/* Unsafe/url.scm 531 */
																		BgL_testz00_11017 =
																			(BgL_iz00_3686 < BgL_olzd22zd2_3684);
																	}
																else
																	{	/* Unsafe/url.scm 531 */
																		BgL_testz00_11017 = ((bool_t) 0);
																	}
																if (BgL_testz00_11017)
																	{	/* Unsafe/url.scm 532 */
																		unsigned char BgL_c1z00_3692;

																		unsigned char BgL_c2z00_3693;

																		BgL_c1z00_3692 =
																			STRING_REF(BgL_strz00_3678,
																			(BgL_iz00_3686 + ((long) 1)));
																		BgL_c2z00_3693 =
																			STRING_REF(BgL_strz00_3678,
																			(BgL_iz00_3686 + ((long) 2)));
																		{	/* Unsafe/url.scm 534 */
																			bool_t BgL_testz00_11025;

																			if (BGl_charzd2hexnumericzf3z21zz__urlz00
																				(BgL_c1z00_3692))
																				{	/* Unsafe/url.scm 534 */
																					BgL_testz00_11025 =
																						BGl_charzd2hexnumericzf3z21zz__urlz00
																						(BgL_c2z00_3693);
																				}
																			else
																				{	/* Unsafe/url.scm 534 */
																					BgL_testz00_11025 = ((bool_t) 0);
																				}
																			if (BgL_testz00_11025)
																				{	/* Unsafe/url.scm 535 */
																					long BgL_v1z00_3695;

																					BgL_v1z00_3695 =
																						BGl_charzd2valuezd2zz__urlz00
																						(BgL_c1z00_3692);
																					{	/* Unsafe/url.scm 535 */
																						long BgL_v2z00_3696;

																						BgL_v2z00_3696 =
																							BGl_charzd2valuezd2zz__urlz00
																							(BgL_c2z00_3693);
																						{	/* Unsafe/url.scm 536 */
																							unsigned char BgL_dz00_3697;

																							BgL_dz00_3697 =
																								(
																								((BgL_v1z00_3695 *
																										((long) 16)) +
																									BgL_v2z00_3696));
																							{	/* Unsafe/url.scm 537 */

																								STRING_SET(BgL_resz00_3681,
																									BgL_jz00_3687, BgL_dz00_3697);
																								{
																									long BgL_jz00_11037;

																									long BgL_iz00_11035;

																									BgL_iz00_11035 =
																										(BgL_iz00_3686 +
																										((long) 3));
																									BgL_jz00_11037 =
																										(BgL_jz00_3687 +
																										((long) 1));
																									BgL_jz00_3687 =
																										BgL_jz00_11037;
																									BgL_iz00_3686 =
																										BgL_iz00_11035;
																									goto
																										BgL_zc3anonymousza33743ze3z83_3688;
																								}
																							}
																						}
																					}
																				}
																			else
																				{	/* Unsafe/url.scm 534 */
																					STRING_SET(BgL_resz00_3681,
																						BgL_jz00_3687, BgL_cz00_3690);
																					{
																						long BgL_jz00_11042;

																						long BgL_iz00_11040;

																						BgL_iz00_11040 =
																							(BgL_iz00_3686 + ((long) 1));
																						BgL_jz00_11042 =
																							(BgL_jz00_3687 + ((long) 1));
																						BgL_jz00_3687 = BgL_jz00_11042;
																						BgL_iz00_3686 = BgL_iz00_11040;
																						goto
																							BgL_zc3anonymousza33743ze3z83_3688;
																					}
																				}
																		}
																	}
																else
																	{	/* Unsafe/url.scm 531 */
																		if (
																			(BgL_cz00_3690 == ((unsigned char) '+')))
																			{	/* Unsafe/url.scm 543 */
																				STRING_SET(BgL_resz00_3681,
																					BgL_jz00_3687, ((unsigned char) ' '));
																				{
																					long BgL_jz00_11049;

																					long BgL_iz00_11047;

																					BgL_iz00_11047 =
																						(BgL_iz00_3686 + ((long) 1));
																					BgL_jz00_11049 =
																						(BgL_jz00_3687 + ((long) 1));
																					BgL_jz00_3687 = BgL_jz00_11049;
																					BgL_iz00_3686 = BgL_iz00_11047;
																					goto
																						BgL_zc3anonymousza33743ze3z83_3688;
																				}
																			}
																		else
																			{	/* Unsafe/url.scm 543 */
																				STRING_SET(BgL_resz00_3681,
																					BgL_jz00_3687, BgL_cz00_3690);
																				{
																					long BgL_jz00_11054;

																					long BgL_iz00_11052;

																					BgL_iz00_11052 =
																						(BgL_iz00_3686 + ((long) 1));
																					BgL_jz00_11054 =
																						(BgL_jz00_3687 + ((long) 1));
																					BgL_jz00_3687 = BgL_jz00_11054;
																					BgL_iz00_3686 = BgL_iz00_11052;
																					goto
																						BgL_zc3anonymousza33743ze3z83_3688;
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
					else
						{	/* Unsafe/url.scm 552 */
							return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_3729);
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__urlz00()
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__urlz00()
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__urlz00()
	{
		AN_OBJECT;
		{	/* Unsafe/url.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 284603935),
				BSTRING_TO_STRING(BGl_string4160z00zz__urlz00));
		}
	}

#ifdef __cplusplus
}
#endif
