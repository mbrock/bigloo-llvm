/*===========================================================================*/
/*   (Unsafe/base64.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/base64.scm -indent -o objs/obj_u/Unsafe/base64.c)*/
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


	extern obj_t bgl_display_substring(obj_t, long, long, obj_t);
	static obj_t BGl__base64zd2decodezd2zz__base64z00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static long BGl_actualzd2stringzd2lengthz00zz__base64z00(obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__base64z00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__base64z00();
	static obj_t BGl_bytezd2tablezd2zz__base64z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_base64zd2decodezd2zz__base64z00(obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__base64z00();
	BGL_EXPORTED_DECL obj_t BGl_pemzd2decodezd2portz00zz__base64z00(obj_t, obj_t);
	static obj_t BGl__base64zd2encodezd2portz00zz__base64z00(obj_t, obj_t);
	static obj_t BGl__base64zd2encodezd2zz__base64z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__base64z00();
	static obj_t BGl__pemzd2readzd2filez00zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32149ze3z83zz__base64z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2encodezd2portz00zz__base64z00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__pemzd2decodezd2portz00zz__base64z00(obj_t, obj_t, obj_t);
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_pemzd2readzd2filez00zz__base64z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__base64z00();
	extern obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__base64zd2decodezd2portz00zz__base64z00(obj_t, obj_t, obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_base64zd2decodezd2grammarz00zz__base64z00 = BUNSPEC;
	static obj_t BGl_pemzd2markupzd2grammarz00zz__base64z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_base64zd2decodezd2portz00zz__base64z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32474ze3z83zz__base64z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31956ze3z83zz__base64z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_zc3anonymousza32481ze3z83zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza32511ze3z83zz__base64z00(obj_t);
	static obj_t BGl_ignorez00zz__base64z00(obj_t, obj_t);
	static obj_t BGl_symbol3029z00zz__base64z00 = BUNSPEC;
	static obj_t BGl_symbol3036z00zz__base64z00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__base64z00();
	static obj_t BGl_symbol3039z00zz__base64z00 = BUNSPEC;
	static obj_t BGl_symbol3053z00zz__base64z00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pemzd2readzd2filezd2envzd2zz__base64z00,
		BgL_bgl__pemza7d2readza7d2fi3061z00, BGl__pemzd2readzd2filez00zz__base64z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pemzd2decodezd2portzd2envzd2zz__base64z00,
		BgL_bgl__pemza7d2decodeza7d23062z00,
		BGl__pemzd2decodezd2portz00zz__base64z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_base64zd2decodezd2portzd2envzd2zz__base64z00,
		BgL_bgl__base64za7d2decode3063za7,
		BGl__base64zd2decodezd2portz00zz__base64z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3027z00zz__base64z00,
		BgL_bgl_za7c3anonymousza7a313064z00,
		BGl_zc3anonymousza31956ze3z83zz__base64z00, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3028z00zz__base64z00,
		BgL_bgl_za7c3anonymousza7a323065z00,
		BGl_zc3anonymousza32149ze3z83zz__base64z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3050z00zz__base64z00,
		BgL_bgl_za7c3anonymousza7a323066z00,
		BGl_zc3anonymousza32474ze3z83zz__base64z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3030z00zz__base64z00,
		BgL_bgl_string3030za700za7za7_3067za7, "pem-decode-port", 15);
	      DEFINE_STRING(BGl_string3031z00zz__base64z00,
		BgL_bgl_string3031za700za7za7_3068za7, "{~a}~a", 6);
	      DEFINE_STRING(BGl_string3032z00zz__base64z00,
		BgL_bgl_string3032za700za7za7_3069za7, "Illegal character in PEM markup",
		31);
	      DEFINE_STRING(BGl_string3033z00zz__base64z00,
		BgL_bgl_string3033za700za7za7_3070za7, "Illegal PEM markup", 18);
	      DEFINE_STRING(BGl_string3034z00zz__base64z00,
		BgL_bgl_string3034za700za7za7_3071za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3035z00zz__base64z00,
		BgL_bgl_string3035za700za7za7_3072za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3037z00zz__base64z00,
		BgL_bgl_string3037za700za7za7_3073za7, "base64-decode", 13);
	      DEFINE_STRING(BGl_string3038z00zz__base64z00,
		BgL_bgl_string3038za700za7za7_3074za7, "Illegal character", 17);
	      DEFINE_STRING(BGl_string3040z00zz__base64z00,
		BgL_bgl_string3040za700za7za7_3075za7, "display-substring", 17);
	      DEFINE_STRING(BGl_string3041z00zz__base64z00,
		BgL_bgl_string3041za700za7za7_3076za7, "Illegal index, start=~a end=~a",
		30);
	      DEFINE_STRING(BGl_string3042z00zz__base64z00,
		BgL_bgl_string3042za700za7za7_3077za7,
		"/tmp/bigloo/runtime/Unsafe/base64.scm", 37);
	      DEFINE_STRING(BGl_string3043z00zz__base64z00,
		BgL_bgl_string3043za700za7za7_3078za7, "_base64-encode", 14);
	      DEFINE_STRING(BGl_string3044z00zz__base64z00,
		BgL_bgl_string3044za700za7za7_3079za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3045z00zz__base64z00,
		BgL_bgl_string3045za700za7za7_3080za7,
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", 64);
	      DEFINE_STRING(BGl_string3046z00zz__base64z00,
		BgL_bgl_string3046za700za7za7_3081za7, "_base64-encode-port", 19);
	      DEFINE_STRING(BGl_string3047z00zz__base64z00,
		BgL_bgl_string3047za700za7za7_3082za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3048z00zz__base64z00,
		BgL_bgl_string3048za700za7za7_3083za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3049z00zz__base64z00,
		BgL_bgl_string3049za700za7za7_3084za7, "_base64-decode", 14);
	      DEFINE_STRING(BGl_string3051z00zz__base64z00,
		BgL_bgl_string3051za700za7za7_3085za7, "_base64-decode-port", 19);
	      DEFINE_STRING(BGl_string3052z00zz__base64z00,
		BgL_bgl_string3052za700za7za7_3086za7, "BEGIN ", 6);
	      DEFINE_STRING(BGl_string3054z00zz__base64z00,
		BgL_bgl_string3054za700za7za7_3087za7, "pem-decode-prot", 15);
	      DEFINE_STRING(BGl_string3055z00zz__base64z00,
		BgL_bgl_string3055za700za7za7_3088za7, "Illegal PEM begin markup", 24);
	      DEFINE_STRING(BGl_string3056z00zz__base64z00,
		BgL_bgl_string3056za700za7za7_3089za7, "_pem-decode-port", 16);
	      DEFINE_STRING(BGl_string3057z00zz__base64z00,
		BgL_bgl_string3057za700za7za7_3090za7, "END ", 4);
	      DEFINE_STRING(BGl_string3058z00zz__base64z00,
		BgL_bgl_string3058za700za7za7_3091za7, "PEM begin/end markup mismatch", 29);
	      DEFINE_STRING(BGl_string3060z00zz__base64z00,
		BgL_bgl_string3060za700za7za7_3092za7, "__base64", 8);
	      DEFINE_STRING(BGl_string3059z00zz__base64z00,
		BgL_bgl_string3059za700za7za7_3093za7, "_pem-read-file", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_base64zd2encodezd2envz00zz__base64z00,
		BgL_bgl__base64za7d2encode3094za7, opt_generic_entry,
		BGl__base64zd2encodezd2zz__base64z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_base64zd2encodezd2portzd2envzd2zz__base64z00,
		BgL_bgl__base64za7d2encode3095za7, opt_generic_entry,
		BGl__base64zd2encodezd2portz00zz__base64z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_base64zd2decodezd2envz00zz__base64z00,
		BgL_bgl__base64za7d2decode3096za7, BGl__base64zd2decodezd2zz__base64z00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long
		BgL_checksumz00_3961, char *BgL_fromz00_3962)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__base64z00))
				{
					BGl_requirezd2initializa7ationz75zz__base64z00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__base64z00();
					BGl_importedzd2moduleszd2initz00zz__base64z00();
					BGl_toplevelzd2initzd2zz__base64z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__base64z00()
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 15 */
			BGl_symbol3029z00zz__base64z00 =
				bstring_to_symbol(BGl_string3030z00zz__base64z00);
			BGl_symbol3036z00zz__base64z00 =
				bstring_to_symbol(BGl_string3037z00zz__base64z00);
			BGl_symbol3039z00zz__base64z00 =
				bstring_to_symbol(BGl_string3040z00zz__base64z00);
			return (BGl_symbol3053z00zz__base64z00 =
				bstring_to_symbol(BGl_string3054z00zz__base64z00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__base64z00()
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 15 */
			{	/* Unsafe/base64.scm 172 */
				obj_t BgL_tablez00_916;

				BgL_tablez00_916 =
					BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 128), BINT(((long) 0)));
				{
					long BgL_iz00_919;

					BgL_iz00_919 = ((long) 0);
				BgL_zc3anonymousza31943ze3z83_920:
					if ((BgL_iz00_919 < ((long) 26)))
						{	/* Unsafe/base64.scm 176 */
							{	/* Unsafe/base64.scm 177 */
								long BgL_arg1945z00_922;

								BgL_arg1945z00_922 = (BgL_iz00_919 + ((long) 65));
								{	/* Unsafe/base64.scm 177 */
									unsigned char BgL_auxz00_3978;

									BgL_auxz00_3978 = (unsigned char) (BgL_iz00_919);
									BGL_U8VSET(BgL_tablez00_916, BgL_arg1945z00_922,
										BgL_auxz00_3978);
								} BUNSPEC;
							}
							{	/* Unsafe/base64.scm 178 */
								long BgL_arg1946z00_923;

								long BgL_arg1948z00_924;

								BgL_arg1946z00_923 = (BgL_iz00_919 + ((long) 97));
								BgL_arg1948z00_924 = (BgL_iz00_919 + ((long) 26));
								{	/* Unsafe/base64.scm 178 */
									unsigned char BgL_auxz00_3983;

									BgL_auxz00_3983 = (unsigned char) (BgL_arg1948z00_924);
									BGL_U8VSET(BgL_tablez00_916, BgL_arg1946z00_923,
										BgL_auxz00_3983);
								} BUNSPEC;
							}
							{
								long BgL_iz00_3986;

								BgL_iz00_3986 = (BgL_iz00_919 + ((long) 1));
								BgL_iz00_919 = BgL_iz00_3986;
								goto BgL_zc3anonymousza31943ze3z83_920;
							}
						}
					else
						{	/* Unsafe/base64.scm 176 */
							((bool_t) 0);
						}
				}
				{
					long BgL_iz00_928;

					BgL_iz00_928 = ((long) 0);
				BgL_zc3anonymousza31950ze3z83_929:
					if ((BgL_iz00_928 < ((long) 10)))
						{	/* Unsafe/base64.scm 181 */
							{	/* Unsafe/base64.scm 182 */
								long BgL_arg1952z00_931;

								long BgL_arg1953z00_932;

								BgL_arg1952z00_931 = (BgL_iz00_928 + ((long) 48));
								BgL_arg1953z00_932 = (BgL_iz00_928 + ((long) 52));
								{	/* Unsafe/base64.scm 182 */
									unsigned char BgL_auxz00_3992;

									BgL_auxz00_3992 = (unsigned char) (BgL_arg1953z00_932);
									BGL_U8VSET(BgL_tablez00_916, BgL_arg1952z00_931,
										BgL_auxz00_3992);
								} BUNSPEC;
							}
							{
								long BgL_iz00_3995;

								BgL_iz00_3995 = (BgL_iz00_928 + ((long) 1));
								BgL_iz00_928 = BgL_iz00_3995;
								goto BgL_zc3anonymousza31950ze3z83_929;
							}
						}
					else
						{	/* Unsafe/base64.scm 181 */
							((bool_t) 0);
						}
				}
				{	/* Unsafe/base64.scm 184 */
					unsigned char BgL_auxz00_3997;

					BgL_auxz00_3997 = (unsigned char) (((long) 62));
					BGL_U8VSET(BgL_tablez00_916, ((long) 43), BgL_auxz00_3997);
				} BUNSPEC;
				{	/* Unsafe/base64.scm 185 */
					unsigned char BgL_auxz00_4000;

					BgL_auxz00_4000 = (unsigned char) (((long) 63));
					BGL_U8VSET(BgL_tablez00_916, ((long) 47), BgL_auxz00_4000);
				} BUNSPEC;
				BGl_bytezd2tablezd2zz__base64z00 = BgL_tablez00_916;
			}
			BGl_base64zd2decodezd2grammarz00zz__base64z00 =
				BGl_proc3027z00zz__base64z00;
			return (BGl_pemzd2markupzd2grammarz00zz__base64z00 =
				BGl_proc3028z00zz__base64z00, BUNSPEC);
		}
	}



/* <anonymous:2149> */
	obj_t BGl_zc3anonymousza32149ze3z83zz__base64z00(obj_t BgL_envz00_3901,
		obj_t BgL_inputzd2portzd2_3902, obj_t BgL_countz00_3903)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 321 */
			{
				obj_t BgL_inputzd2portzd2_1286;

				obj_t BgL_countz00_1287;

				BgL_inputzd2portzd2_1286 = BgL_inputzd2portzd2_3902;
				BgL_countz00_1287 = BgL_countz00_3903;
				{	/* Unsafe/base64.scm 321 */
					obj_t BgL_countz00_3935;

					BgL_countz00_3935 = MAKE_CELL(BgL_countz00_1287);
					return
						BGl_ignorez00zz__base64z00(BgL_countz00_3935,
						BgL_inputzd2portzd2_1286);
				}
			}
		}
	}



/* ignore */
	obj_t BGl_ignorez00zz__base64z00(obj_t BgL_countz00_3933,
		obj_t BgL_inputzd2portzd2_3932)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 321 */
		BGl_ignorez00zz__base64z00:
			{
				obj_t BgL_inputzd2portzd2_1370;

				long BgL_lastzd2matchzd2_1371;

				obj_t BgL_inputzd2portzd2_1353;

				long BgL_lastzd2matchzd2_1354;

				obj_t BgL_inputzd2portzd2_1342;

				long BgL_lastzd2matchzd2_1343;

				obj_t BgL_inputzd2portzd2_1332;

				long BgL_lastzd2matchzd2_1333;

				obj_t BgL_inputzd2portzd2_1321;

				long BgL_lastzd2matchzd2_1322;

				RGC_START_MATCH(BgL_inputzd2portzd2_3932);
				{	/* Unsafe/base64.scm 321 */
					long BgL_matchz00_1461;

					BgL_inputzd2portzd2_1332 = BgL_inputzd2portzd2_3932;
					BgL_lastzd2matchzd2_1333 = ((long) 3);
				BgL_zc3anonymousza32157ze3z83_1334:
					{	/* Unsafe/base64.scm 321 */
						int BgL_currentzd2charzd2_1335;

						BgL_currentzd2charzd2_1335 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1332);
						if (((long) (BgL_currentzd2charzd2_1335) == ((long) 0)))
							{	/* Unsafe/base64.scm 321 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1332))
									{	/* Unsafe/base64.scm 321 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_1332))
											{

												goto BgL_zc3anonymousza32157ze3z83_1334;
											}
										else
											{	/* Unsafe/base64.scm 321 */
												BgL_matchz00_1461 = BgL_lastzd2matchzd2_1333;
											}
									}
								else
									{	/* Unsafe/base64.scm 321 */
										BgL_inputzd2portzd2_1342 = BgL_inputzd2portzd2_1332;
										BgL_lastzd2matchzd2_1343 = BgL_lastzd2matchzd2_1333;
									BgL_zc3anonymousza32164ze3z83_1344:
										{	/* Unsafe/base64.scm 321 */
											long BgL_newzd2matchzd2_1345;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1342);
											BgL_newzd2matchzd2_1345 = ((long) 2);
											{	/* Unsafe/base64.scm 321 */
												int BgL_currentzd2charzd2_1346;

												BgL_currentzd2charzd2_1346 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1342);
												if (((long) (BgL_currentzd2charzd2_1346) == ((long) 0)))
													{	/* Unsafe/base64.scm 321 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1342))
															{	/* Unsafe/base64.scm 321 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_1342))
																	{

																		goto BgL_zc3anonymousza32164ze3z83_1344;
																	}
																else
																	{	/* Unsafe/base64.scm 321 */
																		BgL_matchz00_1461 = BgL_newzd2matchzd2_1345;
																	}
															}
														else
															{	/* Unsafe/base64.scm 321 */
																BgL_inputzd2portzd2_1321 =
																	BgL_inputzd2portzd2_1342;
																BgL_lastzd2matchzd2_1322 =
																	BgL_newzd2matchzd2_1345;
															BgL_zc3anonymousza32150ze3z83_1323:
																{	/* Unsafe/base64.scm 321 */
																	long BgL_newzd2matchzd2_1324;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1321);
																	BgL_newzd2matchzd2_1324 = ((long) 2);
																	{	/* Unsafe/base64.scm 321 */
																		int BgL_currentzd2charzd2_1325;

																		BgL_currentzd2charzd2_1325 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1321);
																		if (((long) (BgL_currentzd2charzd2_1325) ==
																				((long) 0)))
																			{	/* Unsafe/base64.scm 321 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_1321))
																					{	/* Unsafe/base64.scm 321 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_1321))
																							{

																								goto
																									BgL_zc3anonymousza32150ze3z83_1323;
																							}
																						else
																							{	/* Unsafe/base64.scm 321 */
																								BgL_matchz00_1461 =
																									BgL_newzd2matchzd2_1324;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_4031;

																						BgL_lastzd2matchzd2_4031 =
																							BgL_newzd2matchzd2_1324;
																						BgL_lastzd2matchzd2_1322 =
																							BgL_lastzd2matchzd2_4031;
																						goto
																							BgL_zc3anonymousza32150ze3z83_1323;
																					}
																			}
																		else
																			{	/* Unsafe/base64.scm 321 */
																				bool_t BgL_testz00_4032;

																				if (
																					((long) (BgL_currentzd2charzd2_1325)
																						== ((long) 10)))
																					{	/* Unsafe/base64.scm 321 */
																						BgL_testz00_4032 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/base64.scm 321 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1325) ==
																								((long) 13)))
																							{	/* Unsafe/base64.scm 321 */
																								BgL_testz00_4032 = ((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/base64.scm 321 */
																								BgL_testz00_4032 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_1325)
																									== ((long) 45));
																					}}
																				if (BgL_testz00_4032)
																					{	/* Unsafe/base64.scm 321 */
																						BgL_matchz00_1461 =
																							BgL_newzd2matchzd2_1324;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_4041;

																						BgL_lastzd2matchzd2_4041 =
																							BgL_newzd2matchzd2_1324;
																						BgL_lastzd2matchzd2_1322 =
																							BgL_lastzd2matchzd2_4041;
																						goto
																							BgL_zc3anonymousza32150ze3z83_1323;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Unsafe/base64.scm 321 */
														bool_t BgL_testz00_4042;

														if (
															((long) (BgL_currentzd2charzd2_1346) ==
																((long) 10)))
															{	/* Unsafe/base64.scm 321 */
																BgL_testz00_4042 = ((bool_t) 1);
															}
														else
															{	/* Unsafe/base64.scm 321 */
																if (
																	((long) (BgL_currentzd2charzd2_1346) ==
																		((long) 13)))
																	{	/* Unsafe/base64.scm 321 */
																		BgL_testz00_4042 = ((bool_t) 1);
																	}
																else
																	{	/* Unsafe/base64.scm 321 */
																		BgL_testz00_4042 =
																			(
																			(long) (BgL_currentzd2charzd2_1346) ==
																			((long) 45));
															}}
														if (BgL_testz00_4042)
															{	/* Unsafe/base64.scm 321 */
																BgL_matchz00_1461 = BgL_newzd2matchzd2_1345;
															}
														else
															{
																long BgL_lastzd2matchzd2_4052;

																obj_t BgL_inputzd2portzd2_4051;

																BgL_inputzd2portzd2_4051 =
																	BgL_inputzd2portzd2_1342;
																BgL_lastzd2matchzd2_4052 =
																	BgL_newzd2matchzd2_1345;
																BgL_lastzd2matchzd2_1322 =
																	BgL_lastzd2matchzd2_4052;
																BgL_inputzd2portzd2_1321 =
																	BgL_inputzd2portzd2_4051;
																goto BgL_zc3anonymousza32150ze3z83_1323;
															}
													}
											}
										}
									}
							}
						else
							{	/* Unsafe/base64.scm 321 */
								if (((long) (BgL_currentzd2charzd2_1335) == ((long) 45)))
									{	/* Unsafe/base64.scm 321 */
										BgL_inputzd2portzd2_1353 = BgL_inputzd2portzd2_1332;
										BgL_lastzd2matchzd2_1354 = BgL_lastzd2matchzd2_1333;
									BgL_zc3anonymousza32171ze3z83_1355:
										{	/* Unsafe/base64.scm 321 */
											long BgL_newzd2matchzd2_1356;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1353);
											BgL_newzd2matchzd2_1356 = ((long) 0);
											{	/* Unsafe/base64.scm 321 */
												int BgL_currentzd2charzd2_1357;

												BgL_currentzd2charzd2_1357 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1353);
												switch ((long) (BgL_currentzd2charzd2_1357))
													{
													case ((long) 0):

														{	/* Unsafe/base64.scm 321 */
															bool_t BgL_testz00_4058;

															{	/* Unsafe/base64.scm 321 */
																bool_t BgL_res2971z00_3073;

																{	/* Unsafe/base64.scm 321 */
																	obj_t BgL_inputzd2portzd2_3069;

																	BgL_inputzd2portzd2_3069 =
																		BgL_inputzd2portzd2_1353;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3069))
																		{	/* Unsafe/base64.scm 321 */
																			BgL_res2971z00_3073 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3069);
																		}
																	else
																		{	/* Unsafe/base64.scm 321 */
																			BgL_res2971z00_3073 = ((bool_t) 0);
																		}
																}
																BgL_testz00_4058 = BgL_res2971z00_3073;
															}
															if (BgL_testz00_4058)
																{

																	goto BgL_zc3anonymousza32171ze3z83_1355;
																}
															else
																{	/* Unsafe/base64.scm 321 */
																	BgL_matchz00_1461 = BgL_newzd2matchzd2_1356;
																}
														}
														break;
													case ((long) 45):

														BgL_inputzd2portzd2_1370 = BgL_inputzd2portzd2_1353;
														BgL_lastzd2matchzd2_1371 = BgL_newzd2matchzd2_1356;
													BgL_zc3anonymousza32176ze3z83_1372:
														{	/* Unsafe/base64.scm 321 */
															long BgL_newzd2matchzd2_1373;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_1370);
															BgL_newzd2matchzd2_1373 = ((long) 0);
															{	/* Unsafe/base64.scm 321 */
																int BgL_currentzd2charzd2_1374;

																BgL_currentzd2charzd2_1374 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1370);
																switch ((long) (BgL_currentzd2charzd2_1374))
																	{
																	case ((long) 0):

																		{	/* Unsafe/base64.scm 321 */
																			bool_t BgL_testz00_4064;

																			{	/* Unsafe/base64.scm 321 */
																				bool_t BgL_res2972z00_3088;

																				{	/* Unsafe/base64.scm 321 */
																					obj_t BgL_inputzd2portzd2_3084;

																					BgL_inputzd2portzd2_3084 =
																						BgL_inputzd2portzd2_1370;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_3084))
																						{	/* Unsafe/base64.scm 321 */
																							BgL_res2972z00_3088 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_3084);
																						}
																					else
																						{	/* Unsafe/base64.scm 321 */
																							BgL_res2972z00_3088 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_4064 = BgL_res2972z00_3088;
																			}
																			if (BgL_testz00_4064)
																				{

																					goto
																						BgL_zc3anonymousza32176ze3z83_1372;
																				}
																			else
																				{	/* Unsafe/base64.scm 321 */
																					BgL_matchz00_1461 =
																						BgL_newzd2matchzd2_1373;
																				}
																		}
																		break;
																	case ((long) 45):

																		{
																			long BgL_lastzd2matchzd2_4068;

																			BgL_lastzd2matchzd2_4068 =
																				BgL_newzd2matchzd2_1373;
																			BgL_lastzd2matchzd2_1371 =
																				BgL_lastzd2matchzd2_4068;
																			goto BgL_zc3anonymousza32176ze3z83_1372;
																		}
																		break;
																	case ((long) 10):

																		{	/* Unsafe/base64.scm 321 */
																			long BgL_newzd2matchzd2_3091;

																			RGC_STOP_MATCH(BgL_inputzd2portzd2_1370);
																			BgL_newzd2matchzd2_3091 = ((long) 1);
																			BgL_matchz00_1461 =
																				BgL_newzd2matchzd2_3091;
																		} break;
																	default:
																		BgL_matchz00_1461 = BgL_newzd2matchzd2_1373;
																	}
															}
														}
														break;
													case ((long) 10):

														{	/* Unsafe/base64.scm 321 */
															long BgL_newzd2matchzd2_3076;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_1353);
															BgL_newzd2matchzd2_3076 = ((long) 1);
															BgL_matchz00_1461 = BgL_newzd2matchzd2_3076;
														} break;
													default:
														BgL_matchz00_1461 = BgL_newzd2matchzd2_1356;
													}
											}
										}
									}
								else
									{	/* Unsafe/base64.scm 321 */
										bool_t BgL_testz00_4075;

										if (((long) (BgL_currentzd2charzd2_1335) == ((long) 10)))
											{	/* Unsafe/base64.scm 321 */
												BgL_testz00_4075 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/base64.scm 321 */
												BgL_testz00_4075 =
													((long) (BgL_currentzd2charzd2_1335) == ((long) 13));
											}
										if (BgL_testz00_4075)
											{	/* Unsafe/base64.scm 321 */
												long BgL_newzd2matchzd2_3053;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1332);
												BgL_newzd2matchzd2_3053 = ((long) 3);
												BgL_matchz00_1461 = BgL_newzd2matchzd2_3053;
											}
										else
											{
												long BgL_lastzd2matchzd2_4083;

												obj_t BgL_inputzd2portzd2_4082;

												BgL_inputzd2portzd2_4082 = BgL_inputzd2portzd2_1332;
												BgL_lastzd2matchzd2_4083 = BgL_lastzd2matchzd2_1333;
												BgL_lastzd2matchzd2_1343 = BgL_lastzd2matchzd2_4083;
												BgL_inputzd2portzd2_1342 = BgL_inputzd2portzd2_4082;
												goto BgL_zc3anonymousza32164ze3z83_1344;
											}
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_3932);
					switch (BgL_matchz00_1461)
						{
						case ((long) 3):

							{	/* Unsafe/base64.scm 337 */
								obj_t BgL_cz00_1465;

								{	/* Unsafe/base64.scm 321 */
									bool_t BgL_testz00_4085;

									{	/* Unsafe/base64.scm 321 */
										long BgL_arg2246z00_1450;

										BgL_arg2246z00_1450 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3932);
										BgL_testz00_4085 = (BgL_arg2246z00_1450 == ((long) 0));
									}
									if (BgL_testz00_4085)
										{	/* Unsafe/base64.scm 321 */
											BgL_cz00_1465 = BCNST(256);
										}
									else
										{	/* Unsafe/base64.scm 321 */
											obj_t BgL_inputzd2portzd2_3104;

											BgL_inputzd2portzd2_3104 = BgL_inputzd2portzd2_3932;
											BgL_cz00_1465 =
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3104));
										}
								}
								{	/* Llib/object.scm 90 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2255z00_1466;

									{	/* Llib/object.scm 90 */
										obj_t BgL_arg2256z00_1467;

										obj_t BgL_arg2257z00_1468;

										obj_t BgL_arg2260z00_1470;

										{	/* Llib/object.scm 90 */

											{	/* Llib/object.scm 90 */

												BgL_arg2256z00_1467 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}
										}
										BgL_arg2257z00_1468 = BGl_symbol3029z00zz__base64z00;
										{	/* Unsafe/base64.scm 341 */
											obj_t BgL_arg2263z00_1473;

											BgL_arg2263z00_1473 =
												BGl_readzd2linezd2zz__r4_input_6_10_2z00
												(BgL_inputzd2portzd2_3932);
											{	/* Unsafe/base64.scm 341 */
												obj_t BgL_list2264z00_1474;

												{	/* Unsafe/base64.scm 341 */
													obj_t BgL_arg2265z00_1475;

													BgL_arg2265z00_1475 =
														MAKE_PAIR(BgL_arg2263z00_1473, BNIL);
													BgL_list2264z00_1474 =
														MAKE_PAIR(BgL_cz00_1465, BgL_arg2265z00_1475);
												}
												BgL_arg2260z00_1470 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3031z00zz__base64z00,
													BgL_list2264z00_1474);
											}
										}
										BgL_arg2255z00_1466 =
											BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
											BFALSE, BgL_arg2256z00_1467, BgL_arg2257z00_1468,
											BGl_string3032z00zz__base64z00, BgL_arg2260z00_1470);
									}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2255z00_1466));
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/base64.scm 328 */
								obj_t BgL_sz00_1477;

								{	/* Unsafe/base64.scm 328 */
									obj_t BgL_res2976z00_3115;

									{	/* Unsafe/base64.scm 328 */
										int BgL_arg2186z00_3109;

										{	/* Unsafe/base64.scm 328 */
											int BgL_res2975z00_3111;

											{	/* Unsafe/base64.scm 328 */
												obj_t BgL_inputzd2portzd2_3110;

												BgL_inputzd2portzd2_3110 = BgL_inputzd2portzd2_3932;
												BgL_res2975z00_3111 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3110));
											}
											BgL_arg2186z00_3109 = BgL_res2975z00_3111;
										}
										BgL_res2976z00_3115 =
											rgc_buffer_substring(BgL_inputzd2portzd2_3932, ((long) 0),
											(long) (BgL_arg2186z00_3109));
									}
									BgL_sz00_1477 = BgL_res2976z00_3115;
								}
								{	/* Unsafe/base64.scm 328 */
									obj_t BgL_countez00_1478;

									BgL_countez00_1478 =
										BGl_ignorez00zz__base64z00(BgL_countz00_3933,
										BgL_inputzd2portzd2_3932);
									{	/* Unsafe/base64.scm 329 */

										if ((CELL_REF(BgL_countz00_3933) == BgL_countez00_1478))
											{	/* Unsafe/base64.scm 330 */
												return BgL_sz00_1477;
											}
										else
											{	/* Llib/object.scm 90 */
												BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2268z00_1480;

												{	/* Llib/object.scm 90 */
													obj_t BgL_arg2269z00_1481;

													obj_t BgL_arg2270z00_1482;

													obj_t BgL_arg2272z00_1484;

													{	/* Llib/object.scm 90 */

														{	/* Llib/object.scm 90 */

															BgL_arg2269z00_1481 =
																BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
														}
													}
													BgL_arg2270z00_1482 = BGl_symbol3029z00zz__base64z00;
													{	/* Unsafe/base64.scm 335 */
														obj_t BgL_list2273z00_1486;

														{	/* Unsafe/base64.scm 335 */
															obj_t BgL_arg2274z00_1487;

															{	/* Unsafe/base64.scm 335 */
																obj_t BgL_arg2275z00_1488;

																BgL_arg2275z00_1488 =
																	MAKE_PAIR(BgL_countez00_1478, BNIL);
																BgL_arg2274z00_1487 =
																	MAKE_PAIR(CELL_REF(BgL_countz00_3933),
																	BgL_arg2275z00_1488);
															}
															BgL_list2273z00_1486 =
																MAKE_PAIR(BgL_sz00_1477, BgL_arg2274z00_1487);
														}
														BgL_arg2272z00_1484 = BgL_list2273z00_1486;
													}
													BgL_arg2268z00_1480 =
														BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
														(BFALSE, BFALSE, BgL_arg2269z00_1481,
														BgL_arg2270z00_1482, BGl_string3033z00zz__base64z00,
														BgL_arg2272z00_1484);
												}
												return
													BGl_raisez00zz__errorz00(
													(obj_t) (BgL_arg2268z00_1480));
											}
									}
								}
							}
							break;
						case ((long) 1):

							{	/* Unsafe/base64.scm 326 */
								int BgL_arg2277z00_1489;

								{	/* Unsafe/base64.scm 326 */
									int BgL_res2978z00_3119;

									{	/* Unsafe/base64.scm 326 */
										obj_t BgL_inputzd2portzd2_3118;

										BgL_inputzd2portzd2_3118 = BgL_inputzd2portzd2_3932;
										BgL_res2978z00_3119 =
											(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3118));
									}
									BgL_arg2277z00_1489 = BgL_res2978z00_3119;
								}
								return BINT(((long) (BgL_arg2277z00_1489) - ((long) 1)));
							} break;
						case ((long) 0):

							{	/* Unsafe/base64.scm 323 */
								obj_t BgL_auxz00_3934;

								{	/* Unsafe/base64.scm 323 */
									int BgL_arg2279z00_1491;

									{	/* Unsafe/base64.scm 323 */
										int BgL_res2979z00_3123;

										{	/* Unsafe/base64.scm 323 */
											obj_t BgL_inputzd2portzd2_3122;

											BgL_inputzd2portzd2_3122 = BgL_inputzd2portzd2_3932;
											BgL_res2979z00_3123 =
												(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3122));
										}
										BgL_arg2279z00_1491 = BgL_res2979z00_3123;
									}
									{	/* Unsafe/base64.scm 323 */
										long BgL_za71za7_3124;

										long BgL_za72za7_3125;

										BgL_za71za7_3124 = (long) (BgL_arg2279z00_1491);
										BgL_za72za7_3125 = (long) CINT(CELL_REF(BgL_countz00_3933));
										BgL_auxz00_3934 =
											BINT((BgL_za71za7_3124 + BgL_za72za7_3125));
								}}
								CELL_SET(BgL_countz00_3933, BgL_auxz00_3934);
							}
							{

								goto BGl_ignorez00zz__base64z00;
							}
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string3034z00zz__base64z00,
								BGl_string3035z00zz__base64z00, BINT(BgL_matchz00_1461));
						}
				}
			}
		}
	}



/* <anonymous:1956> */
	obj_t BGl_zc3anonymousza31956ze3z83zz__base64z00(obj_t BgL_envz00_3904,
		obj_t BgL_inputzd2portzd2_3905, obj_t BgL_opz00_3906, obj_t BgL_bufz00_3907,
		obj_t BgL_wz00_3908, obj_t BgL_lenz00_3909, obj_t BgL_hookz00_3910)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 260 */
			{
				obj_t BgL_inputzd2portzd2_941;

				obj_t BgL_opz00_942;

				obj_t BgL_bufz00_943;

				obj_t BgL_wz00_944;

				obj_t BgL_lenz00_945;

				obj_t BgL_hookz00_946;

				BgL_inputzd2portzd2_941 = BgL_inputzd2portzd2_3905;
				BgL_opz00_942 = BgL_opz00_3906;
				BgL_bufz00_943 = BgL_bufz00_3907;
				BgL_wz00_944 = BgL_wz00_3908;
				BgL_lenz00_945 = BgL_lenz00_3909;
				BgL_hookz00_946 = BgL_hookz00_3910;
				{
					obj_t BgL_inputzd2portzd2_997;

					long BgL_lastzd2matchzd2_998;

					obj_t BgL_inputzd2portzd2_1011;

					long BgL_lastzd2matchzd2_1012;

					obj_t BgL_inputzd2portzd2_1018;

					long BgL_lastzd2matchzd2_1019;

					obj_t BgL_inputzd2portzd2_1029;

					long BgL_lastzd2matchzd2_1030;

					obj_t BgL_inputzd2portzd2_1037;

					long BgL_lastzd2matchzd2_1038;

					obj_t BgL_inputzd2portzd2_1055;

					long BgL_lastzd2matchzd2_1056;

					obj_t BgL_inputzd2portzd2_1071;

					long BgL_lastzd2matchzd2_1072;

				BgL_zc3anonymousza32085ze3z83_1166:
					RGC_START_MATCH(BgL_inputzd2portzd2_941);
					{	/* Unsafe/base64.scm 260 */
						long BgL_matchz00_1167;

						BgL_inputzd2portzd2_1055 = BgL_inputzd2portzd2_941;
						BgL_lastzd2matchzd2_1056 = ((long) 5);
					BgL_zc3anonymousza31993ze3z83_1057:
						{	/* Unsafe/base64.scm 260 */
							int BgL_currentzd2charzd2_1058;

							BgL_currentzd2charzd2_1058 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1055);
							if (((long) (BgL_currentzd2charzd2_1058) == ((long) 0)))
								{	/* Unsafe/base64.scm 260 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1055))
										{	/* Unsafe/base64.scm 260 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1055))
												{

													goto BgL_zc3anonymousza31993ze3z83_1057;
												}
											else
												{	/* Unsafe/base64.scm 260 */
													BgL_matchz00_1167 = BgL_lastzd2matchzd2_1056;
												}
										}
									else
										{	/* Unsafe/base64.scm 260 */
											long BgL_newzd2matchzd2_2662;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1055);
											BgL_newzd2matchzd2_2662 = ((long) 5);
											BgL_matchz00_1167 = BgL_newzd2matchzd2_2662;
								}}
							else
								{	/* Unsafe/base64.scm 260 */
									bool_t BgL_testz00_4136;

									if (((long) (BgL_currentzd2charzd2_1058) == ((long) 43)))
										{	/* Unsafe/base64.scm 260 */
											BgL_testz00_4136 = ((bool_t) 1);
										}
									else
										{	/* Unsafe/base64.scm 260 */
											bool_t BgL_testz00_4140;

											if (((long) (BgL_currentzd2charzd2_1058) >= ((long) 47)))
												{	/* Unsafe/base64.scm 260 */
													BgL_testz00_4140 =
														((long) (BgL_currentzd2charzd2_1058) < ((long) 58));
												}
											else
												{	/* Unsafe/base64.scm 260 */
													BgL_testz00_4140 = ((bool_t) 0);
												}
											if (BgL_testz00_4140)
												{	/* Unsafe/base64.scm 260 */
													BgL_testz00_4136 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/base64.scm 260 */
													bool_t BgL_testz00_4146;

													if (
														((long) (BgL_currentzd2charzd2_1058) >=
															((long) 65)))
														{	/* Unsafe/base64.scm 260 */
															BgL_testz00_4146 =
																(
																(long) (BgL_currentzd2charzd2_1058) <
																((long) 91));
														}
													else
														{	/* Unsafe/base64.scm 260 */
															BgL_testz00_4146 = ((bool_t) 0);
														}
													if (BgL_testz00_4146)
														{	/* Unsafe/base64.scm 260 */
															BgL_testz00_4136 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/base64.scm 260 */
															if (
																((long) (BgL_currentzd2charzd2_1058) >=
																	((long) 97)))
																{	/* Unsafe/base64.scm 260 */
																	BgL_testz00_4136 =
																		(
																		(long) (BgL_currentzd2charzd2_1058) <
																		((long) 123));
																}
															else
																{	/* Unsafe/base64.scm 260 */
																	BgL_testz00_4136 = ((bool_t) 0);
																}
														}
												}
										}
									if (BgL_testz00_4136)
										{	/* Unsafe/base64.scm 260 */
											BgL_inputzd2portzd2_997 = BgL_inputzd2portzd2_1055;
											BgL_lastzd2matchzd2_998 = BgL_lastzd2matchzd2_1056;
										BgL_zc3anonymousza31960ze3z83_999:
											{	/* Unsafe/base64.scm 260 */
												long BgL_newzd2matchzd2_1000;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_997);
												BgL_newzd2matchzd2_1000 = ((long) 5);
												{	/* Unsafe/base64.scm 260 */
													int BgL_currentzd2charzd2_1001;

													BgL_currentzd2charzd2_1001 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_997);
													if (
														((long) (BgL_currentzd2charzd2_1001) == ((long) 0)))
														{	/* Unsafe/base64.scm 260 */
															bool_t BgL_testz00_4162;

															{	/* Unsafe/base64.scm 260 */
																bool_t BgL_res2954z00_2569;

																{	/* Unsafe/base64.scm 260 */
																	obj_t BgL_inputzd2portzd2_2565;

																	BgL_inputzd2portzd2_2565 =
																		BgL_inputzd2portzd2_997;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_2565))
																		{	/* Unsafe/base64.scm 260 */
																			BgL_res2954z00_2569 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_2565);
																		}
																	else
																		{	/* Unsafe/base64.scm 260 */
																			BgL_res2954z00_2569 = ((bool_t) 0);
																		}
																}
																BgL_testz00_4162 = BgL_res2954z00_2569;
															}
															if (BgL_testz00_4162)
																{

																	goto BgL_zc3anonymousza31960ze3z83_999;
																}
															else
																{	/* Unsafe/base64.scm 260 */
																	BgL_matchz00_1167 = BgL_newzd2matchzd2_1000;
																}
														}
													else
														{	/* Unsafe/base64.scm 260 */
															bool_t BgL_testz00_4166;

															if (
																((long) (BgL_currentzd2charzd2_1001) ==
																	((long) 43)))
																{	/* Unsafe/base64.scm 260 */
																	BgL_testz00_4166 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/base64.scm 260 */
																	bool_t BgL_testz00_4170;

																	if (
																		((long) (BgL_currentzd2charzd2_1001) >=
																			((long) 47)))
																		{	/* Unsafe/base64.scm 260 */
																			BgL_testz00_4170 =
																				(
																				(long) (BgL_currentzd2charzd2_1001) <
																				((long) 58));
																		}
																	else
																		{	/* Unsafe/base64.scm 260 */
																			BgL_testz00_4170 = ((bool_t) 0);
																		}
																	if (BgL_testz00_4170)
																		{	/* Unsafe/base64.scm 260 */
																			BgL_testz00_4166 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/base64.scm 260 */
																			bool_t BgL_testz00_4176;

																			if (
																				((long) (BgL_currentzd2charzd2_1001) >=
																					((long) 65)))
																				{	/* Unsafe/base64.scm 260 */
																					BgL_testz00_4176 =
																						(
																						(long) (BgL_currentzd2charzd2_1001)
																						< ((long) 91));
																				}
																			else
																				{	/* Unsafe/base64.scm 260 */
																					BgL_testz00_4176 = ((bool_t) 0);
																				}
																			if (BgL_testz00_4176)
																				{	/* Unsafe/base64.scm 260 */
																					BgL_testz00_4166 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/base64.scm 260 */
																					if (
																						((long) (BgL_currentzd2charzd2_1001)
																							>= ((long) 97)))
																						{	/* Unsafe/base64.scm 260 */
																							BgL_testz00_4166 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1001) <
																								((long) 123));
																						}
																					else
																						{	/* Unsafe/base64.scm 260 */
																							BgL_testz00_4166 = ((bool_t) 0);
																						}
																				}
																		}
																}
															if (BgL_testz00_4166)
																{	/* Unsafe/base64.scm 260 */
																	BgL_inputzd2portzd2_1071 =
																		BgL_inputzd2portzd2_997;
																	BgL_lastzd2matchzd2_1072 =
																		BgL_newzd2matchzd2_1000;
																BgL_zc3anonymousza32005ze3z83_1073:
																	{	/* Unsafe/base64.scm 260 */
																		int BgL_currentzd2charzd2_1074;

																		BgL_currentzd2charzd2_1074 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1071);
																		if (((long) (BgL_currentzd2charzd2_1074) ==
																				((long) 0)))
																			{	/* Unsafe/base64.scm 260 */
																				bool_t BgL_testz00_4191;

																				{	/* Unsafe/base64.scm 260 */
																					bool_t BgL_res2959z00_2697;

																					{	/* Unsafe/base64.scm 260 */
																						obj_t BgL_inputzd2portzd2_2693;

																						BgL_inputzd2portzd2_2693 =
																							BgL_inputzd2portzd2_1071;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_2693))
																							{	/* Unsafe/base64.scm 260 */
																								BgL_res2959z00_2697 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_2693);
																							}
																						else
																							{	/* Unsafe/base64.scm 260 */
																								BgL_res2959z00_2697 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_4191 =
																						BgL_res2959z00_2697;
																				}
																				if (BgL_testz00_4191)
																					{

																						goto
																							BgL_zc3anonymousza32005ze3z83_1073;
																					}
																				else
																					{	/* Unsafe/base64.scm 260 */
																						BgL_matchz00_1167 =
																							BgL_lastzd2matchzd2_1072;
																					}
																			}
																		else
																			{	/* Unsafe/base64.scm 260 */
																				if (
																					((long) (BgL_currentzd2charzd2_1074)
																						== ((long) 61)))
																					{	/* Unsafe/base64.scm 260 */
																						BgL_inputzd2portzd2_1018 =
																							BgL_inputzd2portzd2_1071;
																						BgL_lastzd2matchzd2_1019 =
																							BgL_lastzd2matchzd2_1072;
																					BgL_zc3anonymousza31973ze3z83_1020:
																						{	/* Unsafe/base64.scm 260 */
																							int BgL_currentzd2charzd2_1021;

																							BgL_currentzd2charzd2_1021 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1018);
																							if (((long)
																									(BgL_currentzd2charzd2_1021)
																									== ((long) 0)))
																								{	/* Unsafe/base64.scm 260 */
																									bool_t BgL_testz00_4202;

																									{	/* Unsafe/base64.scm 260 */
																										bool_t BgL_res2956z00_2605;

																										{	/* Unsafe/base64.scm 260 */
																											obj_t
																												BgL_inputzd2portzd2_2601;
																											BgL_inputzd2portzd2_2601 =
																												BgL_inputzd2portzd2_1018;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_2601))
																												{	/* Unsafe/base64.scm 260 */
																													BgL_res2956z00_2605 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_2601);
																												}
																											else
																												{	/* Unsafe/base64.scm 260 */
																													BgL_res2956z00_2605 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_4202 =
																											BgL_res2956z00_2605;
																									}
																									if (BgL_testz00_4202)
																										{

																											goto
																												BgL_zc3anonymousza31973ze3z83_1020;
																										}
																									else
																										{	/* Unsafe/base64.scm 260 */
																											BgL_matchz00_1167 =
																												BgL_lastzd2matchzd2_1019;
																										}
																								}
																							else
																								{	/* Unsafe/base64.scm 260 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1021)
																											== ((long) 61)))
																										{	/* Unsafe/base64.scm 260 */
																											long
																												BgL_newzd2matchzd2_2610;
																											RGC_STOP_MATCH
																												(BgL_inputzd2portzd2_1018);
																											BgL_newzd2matchzd2_2610 =
																												((long) 2);
																											BgL_matchz00_1167 =
																												BgL_newzd2matchzd2_2610;
																										}
																									else
																										{	/* Unsafe/base64.scm 260 */
																											BgL_matchz00_1167 =
																												BgL_lastzd2matchzd2_1019;
																										}
																								}
																						}
																					}
																				else
																					{	/* Unsafe/base64.scm 260 */
																						bool_t BgL_testz00_4210;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_1074) ==
																								((long) 43)))
																							{	/* Unsafe/base64.scm 260 */
																								BgL_testz00_4210 = ((bool_t) 1);
																							}
																						else
																							{	/* Unsafe/base64.scm 260 */
																								bool_t BgL_testz00_4214;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1074)
																										>= ((long) 47)))
																									{	/* Unsafe/base64.scm 260 */
																										BgL_testz00_4214 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1074)
																											< ((long) 58));
																									}
																								else
																									{	/* Unsafe/base64.scm 260 */
																										BgL_testz00_4214 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_4214)
																									{	/* Unsafe/base64.scm 260 */
																										BgL_testz00_4210 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Unsafe/base64.scm 260 */
																										bool_t BgL_testz00_4220;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1074)
																												>= ((long) 65)))
																											{	/* Unsafe/base64.scm 260 */
																												BgL_testz00_4220 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1074)
																													< ((long) 91));
																											}
																										else
																											{	/* Unsafe/base64.scm 260 */
																												BgL_testz00_4220 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_4220)
																											{	/* Unsafe/base64.scm 260 */
																												BgL_testz00_4210 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/base64.scm 260 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1074)
																														>= ((long) 97)))
																													{	/* Unsafe/base64.scm 260 */
																														BgL_testz00_4210 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1074)
																															< ((long) 123));
																													}
																												else
																													{	/* Unsafe/base64.scm 260 */
																														BgL_testz00_4210 =
																															((bool_t) 0);
																													}
																											}
																									}
																							}
																						if (BgL_testz00_4210)
																							{	/* Unsafe/base64.scm 260 */
																								BgL_inputzd2portzd2_1037 =
																									BgL_inputzd2portzd2_1071;
																								BgL_lastzd2matchzd2_1038 =
																									BgL_lastzd2matchzd2_1072;
																							BgL_zc3anonymousza31982ze3z83_1039:
																								{	/* Unsafe/base64.scm 260 */
																									int
																										BgL_currentzd2charzd2_1040;
																									BgL_currentzd2charzd2_1040 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1037);
																									if (((long)
																											(BgL_currentzd2charzd2_1040)
																											== ((long) 0)))
																										{	/* Unsafe/base64.scm 260 */
																											bool_t BgL_testz00_4235;

																											{	/* Unsafe/base64.scm 260 */
																												bool_t
																													BgL_res2958z00_2632;
																												{	/* Unsafe/base64.scm 260 */
																													obj_t
																														BgL_inputzd2portzd2_2628;
																													BgL_inputzd2portzd2_2628
																														=
																														BgL_inputzd2portzd2_1037;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_2628))
																														{	/* Unsafe/base64.scm 260 */
																															BgL_res2958z00_2632
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_2628);
																														}
																													else
																														{	/* Unsafe/base64.scm 260 */
																															BgL_res2958z00_2632
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_4235 =
																													BgL_res2958z00_2632;
																											}
																											if (BgL_testz00_4235)
																												{

																													goto
																														BgL_zc3anonymousza31982ze3z83_1039;
																												}
																											else
																												{	/* Unsafe/base64.scm 260 */
																													BgL_matchz00_1167 =
																														BgL_lastzd2matchzd2_1038;
																												}
																										}
																									else
																										{	/* Unsafe/base64.scm 260 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1040)
																													== ((long) 61)))
																												{	/* Unsafe/base64.scm 260 */
																													BgL_inputzd2portzd2_1029
																														=
																														BgL_inputzd2portzd2_1037;
																													BgL_lastzd2matchzd2_1030
																														=
																														BgL_lastzd2matchzd2_1038;
																												BgL_zc3anonymousza31978ze3z83_1031:
																													{	/* Unsafe/base64.scm 260 */
																														long
																															BgL_newzd2matchzd2_1032;
																														RGC_STOP_MATCH
																															(BgL_inputzd2portzd2_1029);
																														BgL_newzd2matchzd2_1032
																															= ((long) 1);
																														{	/* Unsafe/base64.scm 260 */
																															int
																																BgL_currentzd2charzd2_1033;
																															BgL_currentzd2charzd2_1033
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_1029);
																															if (((long)
																																	(BgL_currentzd2charzd2_1033)
																																	==
																																	((long) 0)))
																																{	/* Unsafe/base64.scm 260 */
																																	bool_t
																																		BgL_testz00_4247;
																																	{	/* Unsafe/base64.scm 260 */
																																		bool_t
																																			BgL_res2957z00_2622;
																																		{	/* Unsafe/base64.scm 260 */
																																			obj_t
																																				BgL_inputzd2portzd2_2618;
																																			BgL_inputzd2portzd2_2618
																																				=
																																				BgL_inputzd2portzd2_1029;
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2618))
																																				{	/* Unsafe/base64.scm 260 */
																																					BgL_res2957z00_2622
																																						=
																																						rgc_fill_buffer
																																						(BgL_inputzd2portzd2_2618);
																																				}
																																			else
																																				{	/* Unsafe/base64.scm 260 */
																																					BgL_res2957z00_2622
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		BgL_testz00_4247
																																			=
																																			BgL_res2957z00_2622;
																																	}
																																	if (BgL_testz00_4247)
																																		{

																																			goto
																																				BgL_zc3anonymousza31978ze3z83_1031;
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_matchz00_1167
																																				=
																																				BgL_newzd2matchzd2_1032;
																																		}
																																}
																															else
																																{	/* Unsafe/base64.scm 260 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1033)
																																			==
																																			((long)
																																				61)))
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_inputzd2portzd2_1011
																																				=
																																				BgL_inputzd2portzd2_1029;
																																			BgL_lastzd2matchzd2_1012
																																				=
																																				BgL_newzd2matchzd2_1032;
																																		BgL_zc3anonymousza31969ze3z83_1013:
																																			{	/* Unsafe/base64.scm 260 */
																																				int
																																					BgL_currentzd2charzd2_1014;
																																				BgL_currentzd2charzd2_1014
																																					=
																																					RGC_BUFFER_GET_CHAR
																																					(BgL_inputzd2portzd2_1011);
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1014)
																																						==
																																						((long) 0)))
																																					{	/* Unsafe/base64.scm 260 */
																																						bool_t
																																							BgL_testz00_4258;
																																						{	/* Unsafe/base64.scm 260 */
																																							bool_t
																																								BgL_res2955z00_2591;
																																							{	/* Unsafe/base64.scm 260 */
																																								obj_t
																																									BgL_inputzd2portzd2_2587;
																																								BgL_inputzd2portzd2_2587
																																									=
																																									BgL_inputzd2portzd2_1011;
																																								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2587))
																																									{	/* Unsafe/base64.scm 260 */
																																										BgL_res2955z00_2591
																																											=
																																											rgc_fill_buffer
																																											(BgL_inputzd2portzd2_2587);
																																									}
																																								else
																																									{	/* Unsafe/base64.scm 260 */
																																										BgL_res2955z00_2591
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							BgL_testz00_4258
																																								=
																																								BgL_res2955z00_2591;
																																						}
																																						if (BgL_testz00_4258)
																																							{

																																								goto
																																									BgL_zc3anonymousza31969ze3z83_1013;
																																							}
																																						else
																																							{	/* Unsafe/base64.scm 260 */
																																								BgL_matchz00_1167
																																									=
																																									BgL_lastzd2matchzd2_1012;
																																							}
																																					}
																																				else
																																					{	/* Unsafe/base64.scm 260 */
																																						if (
																																							((long) (BgL_currentzd2charzd2_1014) == ((long) 61)))
																																							{	/* Unsafe/base64.scm 260 */
																																								long
																																									BgL_newzd2matchzd2_2596;
																																								RGC_STOP_MATCH
																																									(BgL_inputzd2portzd2_1011);
																																								BgL_newzd2matchzd2_2596
																																									=
																																									(
																																									(long)
																																									3);
																																								BgL_matchz00_1167
																																									=
																																									BgL_newzd2matchzd2_2596;
																																							}
																																						else
																																							{	/* Unsafe/base64.scm 260 */
																																								BgL_matchz00_1167
																																									=
																																									BgL_lastzd2matchzd2_1012;
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_matchz00_1167
																																				=
																																				BgL_newzd2matchzd2_1032;
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Unsafe/base64.scm 260 */
																													bool_t
																														BgL_testz00_4266;
																													if (((long)
																															(BgL_currentzd2charzd2_1040)
																															== ((long) 43)))
																														{	/* Unsafe/base64.scm 260 */
																															BgL_testz00_4266 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/base64.scm 260 */
																															bool_t
																																BgL_testz00_4270;
																															if (((long)
																																	(BgL_currentzd2charzd2_1040)
																																	>=
																																	((long) 47)))
																																{	/* Unsafe/base64.scm 260 */
																																	BgL_testz00_4270
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_1040)
																																		<
																																		((long)
																																			58));
																																}
																															else
																																{	/* Unsafe/base64.scm 260 */
																																	BgL_testz00_4270
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_testz00_4270)
																																{	/* Unsafe/base64.scm 260 */
																																	BgL_testz00_4266
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/base64.scm 260 */
																																	bool_t
																																		BgL_testz00_4276;
																																	if (((long)
																																			(BgL_currentzd2charzd2_1040)
																																			>=
																																			((long)
																																				65)))
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_testz00_4276
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_1040)
																																				<
																																				((long)
																																					91));
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_testz00_4276
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_4276)
																																		{	/* Unsafe/base64.scm 260 */
																																			BgL_testz00_4266
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 260 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1040)
																																					>=
																																					((long) 97)))
																																				{	/* Unsafe/base64.scm 260 */
																																					BgL_testz00_4266
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_1040)
																																						<
																																						((long) 123));
																																				}
																																			else
																																				{	/* Unsafe/base64.scm 260 */
																																					BgL_testz00_4266
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																														}
																													if (BgL_testz00_4266)
																														{	/* Unsafe/base64.scm 260 */
																															long
																																BgL_newzd2matchzd2_2651;
																															RGC_STOP_MATCH
																																(BgL_inputzd2portzd2_1037);
																															BgL_newzd2matchzd2_2651
																																= ((long) 0);
																															BgL_matchz00_1167
																																=
																																BgL_newzd2matchzd2_2651;
																														}
																													else
																														{	/* Unsafe/base64.scm 260 */
																															BgL_matchz00_1167
																																=
																																BgL_lastzd2matchzd2_1038;
																														}
																												}
																										}
																								}
																							}
																						else
																							{	/* Unsafe/base64.scm 260 */
																								BgL_matchz00_1167 =
																									BgL_lastzd2matchzd2_1072;
																							}
																					}
																			}
																	}
																}
															else
																{	/* Unsafe/base64.scm 260 */
																	BgL_matchz00_1167 = BgL_newzd2matchzd2_1000;
																}
														}
												}
											}
										}
									else
										{	/* Unsafe/base64.scm 260 */
											bool_t BgL_testz00_4288;

											if (((long) (BgL_currentzd2charzd2_1058) == ((long) 10)))
												{	/* Unsafe/base64.scm 260 */
													BgL_testz00_4288 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/base64.scm 260 */
													BgL_testz00_4288 =
														(
														(long) (BgL_currentzd2charzd2_1058) == ((long) 13));
												}
											if (BgL_testz00_4288)
												{	/* Unsafe/base64.scm 260 */
													long BgL_newzd2matchzd2_2684;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_1055);
													BgL_newzd2matchzd2_2684 = ((long) 4);
													BgL_matchz00_1167 = BgL_newzd2matchzd2_2684;
												}
											else
												{	/* Unsafe/base64.scm 260 */
													long BgL_newzd2matchzd2_2688;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_1055);
													BgL_newzd2matchzd2_2688 = ((long) 5);
													BgL_matchz00_1167 = BgL_newzd2matchzd2_2688;
						}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_941);
						switch (BgL_matchz00_1167)
							{
							case ((long) 5):

								{	/* Unsafe/base64.scm 307 */
									obj_t BgL_cz00_1171;

									{	/* Unsafe/base64.scm 260 */
										bool_t BgL_testz00_4297;

										{	/* Unsafe/base64.scm 260 */
											long BgL_arg2078z00_1156;

											BgL_arg2078z00_1156 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_941);
											BgL_testz00_4297 = (BgL_arg2078z00_1156 == ((long) 0));
										}
										if (BgL_testz00_4297)
											{	/* Unsafe/base64.scm 260 */
												BgL_cz00_1171 = BCNST(256);
											}
										else
											{	/* Unsafe/base64.scm 260 */
												obj_t BgL_inputzd2portzd2_2719;

												BgL_inputzd2portzd2_2719 = BgL_inputzd2portzd2_941;
												BgL_cz00_1171 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_2719));
											}
									}
									{	/* Unsafe/base64.scm 308 */
										bool_t BgL_testz00_4302;

										if (EOF_OBJECTP(BgL_cz00_1171))
											{	/* Unsafe/base64.scm 308 */
												BgL_testz00_4302 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/base64.scm 308 */
												BgL_testz00_4302 =
													CBOOL(PROCEDURE_ENTRY(BgL_hookz00_946)
													(BgL_hookz00_946, BgL_cz00_1171, BEOA));
											}
										if (BgL_testz00_4302)
											{	/* Unsafe/base64.scm 308 */
												return BFALSE;
											}
										else
											{	/* Unsafe/base64.scm 308 */
												goto BgL_zc3anonymousza32085ze3z83_1166;
											}
									}
								}
								break;
							case ((long) 4):

								goto BgL_zc3anonymousza32085ze3z83_1166;
								break;
							case ((long) 3):

								{	/* Unsafe/base64.scm 299 */
									int BgL_q0z00_1174;

									{	/* Unsafe/base64.scm 299 */
										int BgL_arg2093z00_1181;

										{	/* Unsafe/base64.scm 299 */
											int BgL_auxz00_4308;

											BgL_auxz00_4308 = (int) (((long) 0));
											BgL_arg2093z00_1181 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
												BgL_auxz00_4308);
										}
										{	/* Unsafe/base64.scm 299 */
											int BgL_res2960z00_2734;

											{	/* Unsafe/base64.scm 299 */
												char BgL_cz00_2726;

												BgL_cz00_2726 = (signed char) (BgL_arg2093z00_1181);
												if (((long) (BgL_cz00_2726) < ((long) 0)))
													{	/* Unsafe/base64.scm 299 */
														obj_t BgL_arg2412z00_2728;

														unsigned char BgL_arg2414z00_2730;

														BgL_arg2412z00_2728 =
															BGl_symbol3036z00zz__base64z00;
														BgL_arg2414z00_2730 = ((long) (BgL_cz00_2726));
														BgL_res2960z00_2734 =
															CINT(BGl_errorz00zz__errorz00(BgL_arg2412z00_2728,
																BGl_string3038z00zz__base64z00,
																BCHAR(BgL_arg2414z00_2730)));
													}
												else
													{	/* Unsafe/base64.scm 299 */
														unsigned char BgL_auxz00_4320;

														{	/* Unsafe/base64.scm 299 */
															long BgL_auxz00_4321;

															BgL_auxz00_4321 = (long) (BgL_cz00_2726);
															BgL_auxz00_4320 =
																BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																BgL_auxz00_4321);
														}
														BgL_res2960z00_2734 = (int) (BgL_auxz00_4320);
											}}
											BgL_q0z00_1174 = BgL_res2960z00_2734;
									}}
									{	/* Unsafe/base64.scm 299 */
										int BgL_q1z00_1175;

										{	/* Unsafe/base64.scm 300 */
											int BgL_arg2092z00_1180;

											{	/* Unsafe/base64.scm 300 */
												int BgL_auxz00_4325;

												BgL_auxz00_4325 = (int) (((long) 1));
												BgL_arg2092z00_1180 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
													BgL_auxz00_4325);
											}
											{	/* Unsafe/base64.scm 300 */
												int BgL_res2961z00_2746;

												{	/* Unsafe/base64.scm 300 */
													char BgL_cz00_2738;

													BgL_cz00_2738 = (signed char) (BgL_arg2092z00_1180);
													if (((long) (BgL_cz00_2738) < ((long) 0)))
														{	/* Unsafe/base64.scm 300 */
															obj_t BgL_arg2412z00_2740;

															unsigned char BgL_arg2414z00_2742;

															BgL_arg2412z00_2740 =
																BGl_symbol3036z00zz__base64z00;
															BgL_arg2414z00_2742 = ((long) (BgL_cz00_2738));
															BgL_res2961z00_2746 =
																CINT(BGl_errorz00zz__errorz00
																(BgL_arg2412z00_2740,
																	BGl_string3038z00zz__base64z00,
																	BCHAR(BgL_arg2414z00_2742)));
														}
													else
														{	/* Unsafe/base64.scm 300 */
															unsigned char BgL_auxz00_4337;

															{	/* Unsafe/base64.scm 300 */
																long BgL_auxz00_4338;

																BgL_auxz00_4338 = (long) (BgL_cz00_2738);
																BgL_auxz00_4337 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_auxz00_4338);
															}
															BgL_res2961z00_2746 = (int) (BgL_auxz00_4337);
												}}
												BgL_q1z00_1175 = BgL_res2961z00_2746;
										}}
										{	/* Unsafe/base64.scm 300 */
											long BgL_v0z00_1176;

											BgL_v0z00_1176 =
												(
												((long) (BgL_q0z00_1174) <<
													(int) (((long) 2))) |
												((long) (BgL_q1z00_1175) >> (int) (((long) 4))));
											{	/* Unsafe/base64.scm 301 */

												{	/* Unsafe/base64.scm 302 */
													unsigned char BgL_arg2089z00_1177;

													BgL_arg2089z00_1177 = (BgL_v0z00_1176);
													{	/* Unsafe/base64.scm 302 */
														long BgL_auxz00_4350;

														BgL_auxz00_4350 = (long) CINT(BgL_wz00_944);
														STRING_SET(BgL_bufz00_943, BgL_auxz00_4350,
															BgL_arg2089z00_1177);
												}}
												{	/* Unsafe/base64.scm 303 */
													obj_t BgL_objz00_2757;

													long BgL_endz00_2759;

													obj_t BgL_portz00_2760;

													BgL_objz00_2757 = BgL_bufz00_943;
													BgL_endz00_2759 = (long) CINT(BgL_wz00_944);
													BgL_portz00_2760 = BgL_opz00_942;
													{	/* Unsafe/base64.scm 303 */
														bool_t BgL_testz00_4354;

														if ((BgL_endz00_2759 >= ((long) 0)))
															{	/* Unsafe/base64.scm 303 */
																bool_t BgL_testz00_4357;

																{	/* Unsafe/base64.scm 303 */
																	long BgL_auxz00_4358;

																	BgL_auxz00_4358 =
																		(STRING_LENGTH(BgL_objz00_2757) +
																		((long) 1));
																	BgL_testz00_4357 =
																		BOUND_CHECK(BgL_endz00_2759,
																		BgL_auxz00_4358);
																}
																if (BgL_testz00_4357)
																	{	/* Unsafe/base64.scm 303 */
																		BgL_testz00_4354 =
																			(((long) 0) >= ((long) 0));
																	}
																else
																	{	/* Unsafe/base64.scm 303 */
																		BgL_testz00_4354 = ((bool_t) 0);
																	}
															}
														else
															{	/* Unsafe/base64.scm 303 */
																BgL_testz00_4354 = ((bool_t) 0);
															}
														if (BgL_testz00_4354)
															{	/* Unsafe/base64.scm 303 */
																return
																	bgl_display_substring(BgL_objz00_2757,
																	((long) 0), BgL_endz00_2759,
																	BgL_portz00_2760);
															}
														else
															{	/* Unsafe/base64.scm 303 */
																obj_t BgL_arg2749z00_2767;

																obj_t BgL_arg2750z00_2768;

																BgL_arg2749z00_2767 =
																	BGl_symbol3039z00zz__base64z00;
																{	/* Unsafe/base64.scm 303 */
																	obj_t BgL_list2751z00_2769;

																	{	/* Unsafe/base64.scm 303 */
																		obj_t BgL_arg2752z00_2770;

																		BgL_arg2752z00_2770 =
																			MAKE_PAIR(BINT(BgL_endz00_2759), BNIL);
																		BgL_list2751z00_2769 =
																			MAKE_PAIR(BINT(((long) 0)),
																			BgL_arg2752z00_2770);
																	}
																	BgL_arg2750z00_2768 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string3041z00zz__base64z00,
																		BgL_list2751z00_2769);
																}
																return
																	BGl_errorz00zz__errorz00(BgL_arg2749z00_2767,
																	BgL_arg2750z00_2768, BgL_objz00_2757);
															}
													}
												}
											}
										}
									}
								}
								break;
							case ((long) 2):

								{	/* Unsafe/base64.scm 291 */
									int BgL_q0z00_1182;

									{	/* Unsafe/base64.scm 291 */
										int BgL_arg2104z00_1196;

										{	/* Unsafe/base64.scm 291 */
											int BgL_auxz00_4370;

											BgL_auxz00_4370 = (int) (((long) 0));
											BgL_arg2104z00_1196 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
												BgL_auxz00_4370);
										}
										{	/* Unsafe/base64.scm 291 */
											int BgL_res2962z00_2789;

											{	/* Unsafe/base64.scm 291 */
												char BgL_cz00_2781;

												BgL_cz00_2781 = (signed char) (BgL_arg2104z00_1196);
												if (((long) (BgL_cz00_2781) < ((long) 0)))
													{	/* Unsafe/base64.scm 291 */
														obj_t BgL_arg2412z00_2783;

														unsigned char BgL_arg2414z00_2785;

														BgL_arg2412z00_2783 =
															BGl_symbol3036z00zz__base64z00;
														BgL_arg2414z00_2785 = ((long) (BgL_cz00_2781));
														BgL_res2962z00_2789 =
															CINT(BGl_errorz00zz__errorz00(BgL_arg2412z00_2783,
																BGl_string3038z00zz__base64z00,
																BCHAR(BgL_arg2414z00_2785)));
													}
												else
													{	/* Unsafe/base64.scm 291 */
														unsigned char BgL_auxz00_4382;

														{	/* Unsafe/base64.scm 291 */
															long BgL_auxz00_4383;

															BgL_auxz00_4383 = (long) (BgL_cz00_2781);
															BgL_auxz00_4382 =
																BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																BgL_auxz00_4383);
														}
														BgL_res2962z00_2789 = (int) (BgL_auxz00_4382);
											}}
											BgL_q0z00_1182 = BgL_res2962z00_2789;
									}}
									{	/* Unsafe/base64.scm 291 */
										int BgL_q1z00_1183;

										{	/* Unsafe/base64.scm 292 */
											int BgL_arg2103z00_1195;

											{	/* Unsafe/base64.scm 292 */
												int BgL_auxz00_4387;

												BgL_auxz00_4387 = (int) (((long) 1));
												BgL_arg2103z00_1195 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
													BgL_auxz00_4387);
											}
											{	/* Unsafe/base64.scm 292 */
												int BgL_res2963z00_2801;

												{	/* Unsafe/base64.scm 292 */
													char BgL_cz00_2793;

													BgL_cz00_2793 = (signed char) (BgL_arg2103z00_1195);
													if (((long) (BgL_cz00_2793) < ((long) 0)))
														{	/* Unsafe/base64.scm 292 */
															obj_t BgL_arg2412z00_2795;

															unsigned char BgL_arg2414z00_2797;

															BgL_arg2412z00_2795 =
																BGl_symbol3036z00zz__base64z00;
															BgL_arg2414z00_2797 = ((long) (BgL_cz00_2793));
															BgL_res2963z00_2801 =
																CINT(BGl_errorz00zz__errorz00
																(BgL_arg2412z00_2795,
																	BGl_string3038z00zz__base64z00,
																	BCHAR(BgL_arg2414z00_2797)));
														}
													else
														{	/* Unsafe/base64.scm 292 */
															unsigned char BgL_auxz00_4399;

															{	/* Unsafe/base64.scm 292 */
																long BgL_auxz00_4400;

																BgL_auxz00_4400 = (long) (BgL_cz00_2793);
																BgL_auxz00_4399 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_auxz00_4400);
															}
															BgL_res2963z00_2801 = (int) (BgL_auxz00_4399);
												}}
												BgL_q1z00_1183 = BgL_res2963z00_2801;
										}}
										{	/* Unsafe/base64.scm 292 */
											long BgL_v0z00_1184;

											BgL_v0z00_1184 =
												(
												((long) (BgL_q0z00_1182) <<
													(int) (((long) 2))) |
												((long) (BgL_q1z00_1183) >> (int) (((long) 4))));
											{	/* Unsafe/base64.scm 293 */
												long BgL_v1z00_1185;

												BgL_v1z00_1185 =
													(
													((long) (BgL_q1z00_1183) <<
														(int) (((long) 4))) & ((long) 240));
												{	/* Unsafe/base64.scm 294 */

													{	/* Unsafe/base64.scm 295 */
														unsigned char BgL_arg2094z00_1186;

														BgL_arg2094z00_1186 = (BgL_v0z00_1184);
														{	/* Unsafe/base64.scm 295 */
															long BgL_auxz00_4416;

															BgL_auxz00_4416 = (long) CINT(BgL_wz00_944);
															STRING_SET(BgL_bufz00_943, BgL_auxz00_4416,
																BgL_arg2094z00_1186);
													}}
													{	/* Unsafe/base64.scm 296 */
														unsigned char BgL_auxz00_4422;

														long BgL_auxz00_4419;

														BgL_auxz00_4422 = (BgL_v1z00_1185);
														BgL_auxz00_4419 =
															((long) CINT(BgL_wz00_944) + ((long) 1));
														STRING_SET(BgL_bufz00_943, BgL_auxz00_4419,
															BgL_auxz00_4422);
													}
													{	/* Unsafe/base64.scm 297 */
														long BgL_arg2098z00_1190;

														BgL_arg2098z00_1190 =
															((long) CINT(BgL_wz00_944) + ((long) 1));
														{	/* Unsafe/base64.scm 297 */
															obj_t BgL_objz00_2824;

															obj_t BgL_portz00_2827;

															BgL_objz00_2824 = BgL_bufz00_943;
															BgL_portz00_2827 = BgL_opz00_942;
															{	/* Unsafe/base64.scm 297 */
																bool_t BgL_testz00_4427;

																if ((BgL_arg2098z00_1190 >= ((long) 0)))
																	{	/* Unsafe/base64.scm 297 */
																		bool_t BgL_testz00_4430;

																		{	/* Unsafe/base64.scm 297 */
																			long BgL_auxz00_4431;

																			BgL_auxz00_4431 =
																				(STRING_LENGTH(BgL_objz00_2824) +
																				((long) 1));
																			BgL_testz00_4430 =
																				BOUND_CHECK(BgL_arg2098z00_1190,
																				BgL_auxz00_4431);
																		}
																		if (BgL_testz00_4430)
																			{	/* Unsafe/base64.scm 297 */
																				BgL_testz00_4427 =
																					(((long) 0) >= ((long) 0));
																			}
																		else
																			{	/* Unsafe/base64.scm 297 */
																				BgL_testz00_4427 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Unsafe/base64.scm 297 */
																		BgL_testz00_4427 = ((bool_t) 0);
																	}
																if (BgL_testz00_4427)
																	{	/* Unsafe/base64.scm 297 */
																		return
																			bgl_display_substring(BgL_objz00_2824,
																			((long) 0), BgL_arg2098z00_1190,
																			BgL_portz00_2827);
																	}
																else
																	{	/* Unsafe/base64.scm 297 */
																		obj_t BgL_arg2749z00_2834;

																		obj_t BgL_arg2750z00_2835;

																		BgL_arg2749z00_2834 =
																			BGl_symbol3039z00zz__base64z00;
																		{	/* Unsafe/base64.scm 297 */
																			obj_t BgL_list2751z00_2836;

																			{	/* Unsafe/base64.scm 297 */
																				obj_t BgL_arg2752z00_2837;

																				BgL_arg2752z00_2837 =
																					MAKE_PAIR(BINT(BgL_arg2098z00_1190),
																					BNIL);
																				BgL_list2751z00_2836 =
																					MAKE_PAIR(BINT(((long) 0)),
																					BgL_arg2752z00_2837);
																			}
																			BgL_arg2750z00_2835 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string3041z00zz__base64z00,
																				BgL_list2751z00_2836);
																		}
																		return
																			BGl_errorz00zz__errorz00
																			(BgL_arg2749z00_2834, BgL_arg2750z00_2835,
																			BgL_objz00_2824);
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
							case ((long) 1):

								{	/* Unsafe/base64.scm 280 */
									int BgL_q0z00_1197;

									{	/* Unsafe/base64.scm 280 */
										int BgL_arg2125z00_1220;

										{	/* Unsafe/base64.scm 280 */
											int BgL_auxz00_4443;

											BgL_auxz00_4443 = (int) (((long) 0));
											BgL_arg2125z00_1220 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
												BgL_auxz00_4443);
										}
										{	/* Unsafe/base64.scm 280 */
											int BgL_res2964z00_2856;

											{	/* Unsafe/base64.scm 280 */
												char BgL_cz00_2848;

												BgL_cz00_2848 = (signed char) (BgL_arg2125z00_1220);
												if (((long) (BgL_cz00_2848) < ((long) 0)))
													{	/* Unsafe/base64.scm 280 */
														obj_t BgL_arg2412z00_2850;

														unsigned char BgL_arg2414z00_2852;

														BgL_arg2412z00_2850 =
															BGl_symbol3036z00zz__base64z00;
														BgL_arg2414z00_2852 = ((long) (BgL_cz00_2848));
														BgL_res2964z00_2856 =
															CINT(BGl_errorz00zz__errorz00(BgL_arg2412z00_2850,
																BGl_string3038z00zz__base64z00,
																BCHAR(BgL_arg2414z00_2852)));
													}
												else
													{	/* Unsafe/base64.scm 280 */
														unsigned char BgL_auxz00_4455;

														{	/* Unsafe/base64.scm 280 */
															long BgL_auxz00_4456;

															BgL_auxz00_4456 = (long) (BgL_cz00_2848);
															BgL_auxz00_4455 =
																BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																BgL_auxz00_4456);
														}
														BgL_res2964z00_2856 = (int) (BgL_auxz00_4455);
											}}
											BgL_q0z00_1197 = BgL_res2964z00_2856;
									}}
									{	/* Unsafe/base64.scm 280 */
										int BgL_q1z00_1198;

										{	/* Unsafe/base64.scm 281 */
											int BgL_arg2124z00_1219;

											{	/* Unsafe/base64.scm 281 */
												int BgL_auxz00_4460;

												BgL_auxz00_4460 = (int) (((long) 1));
												BgL_arg2124z00_1219 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
													BgL_auxz00_4460);
											}
											{	/* Unsafe/base64.scm 281 */
												int BgL_res2965z00_2868;

												{	/* Unsafe/base64.scm 281 */
													char BgL_cz00_2860;

													BgL_cz00_2860 = (signed char) (BgL_arg2124z00_1219);
													if (((long) (BgL_cz00_2860) < ((long) 0)))
														{	/* Unsafe/base64.scm 281 */
															obj_t BgL_arg2412z00_2862;

															unsigned char BgL_arg2414z00_2864;

															BgL_arg2412z00_2862 =
																BGl_symbol3036z00zz__base64z00;
															BgL_arg2414z00_2864 = ((long) (BgL_cz00_2860));
															BgL_res2965z00_2868 =
																CINT(BGl_errorz00zz__errorz00
																(BgL_arg2412z00_2862,
																	BGl_string3038z00zz__base64z00,
																	BCHAR(BgL_arg2414z00_2864)));
														}
													else
														{	/* Unsafe/base64.scm 281 */
															unsigned char BgL_auxz00_4472;

															{	/* Unsafe/base64.scm 281 */
																long BgL_auxz00_4473;

																BgL_auxz00_4473 = (long) (BgL_cz00_2860);
																BgL_auxz00_4472 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_auxz00_4473);
															}
															BgL_res2965z00_2868 = (int) (BgL_auxz00_4472);
												}}
												BgL_q1z00_1198 = BgL_res2965z00_2868;
										}}
										{	/* Unsafe/base64.scm 281 */
											int BgL_q2z00_1199;

											{	/* Unsafe/base64.scm 282 */
												int BgL_arg2123z00_1218;

												{	/* Unsafe/base64.scm 282 */
													int BgL_auxz00_4477;

													BgL_auxz00_4477 = (int) (((long) 2));
													BgL_arg2123z00_1218 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
														BgL_auxz00_4477);
												}
												{	/* Unsafe/base64.scm 282 */
													int BgL_res2966z00_2880;

													{	/* Unsafe/base64.scm 282 */
														char BgL_cz00_2872;

														BgL_cz00_2872 = (signed char) (BgL_arg2123z00_1218);
														if (((long) (BgL_cz00_2872) < ((long) 0)))
															{	/* Unsafe/base64.scm 282 */
																obj_t BgL_arg2412z00_2874;

																unsigned char BgL_arg2414z00_2876;

																BgL_arg2412z00_2874 =
																	BGl_symbol3036z00zz__base64z00;
																BgL_arg2414z00_2876 = ((long) (BgL_cz00_2872));
																BgL_res2966z00_2880 =
																	CINT(BGl_errorz00zz__errorz00
																	(BgL_arg2412z00_2874,
																		BGl_string3038z00zz__base64z00,
																		BCHAR(BgL_arg2414z00_2876)));
															}
														else
															{	/* Unsafe/base64.scm 282 */
																unsigned char BgL_auxz00_4489;

																{	/* Unsafe/base64.scm 282 */
																	long BgL_auxz00_4490;

																	BgL_auxz00_4490 = (long) (BgL_cz00_2872);
																	BgL_auxz00_4489 =
																		BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																		BgL_auxz00_4490);
																}
																BgL_res2966z00_2880 = (int) (BgL_auxz00_4489);
													}}
													BgL_q2z00_1199 = BgL_res2966z00_2880;
											}}
											{	/* Unsafe/base64.scm 282 */
												long BgL_v0z00_1200;

												BgL_v0z00_1200 =
													(
													((long) (BgL_q0z00_1197) <<
														(int) (((long) 2))) |
													((long) (BgL_q1z00_1198) >> (int) (((long) 4))));
												{	/* Unsafe/base64.scm 283 */
													long BgL_v1z00_1201;

													BgL_v1z00_1201 =
														(
														(((long) (BgL_q1z00_1198) <<
																(int) (((long) 4))) & ((long) 240)) |
														((long) (BgL_q2z00_1199) >> (int) (((long) 2))));
													{	/* Unsafe/base64.scm 284 */
														long BgL_v2z00_1202;

														BgL_v2z00_1202 =
															(
															((long) (BgL_q2z00_1199) <<
																(int) (((long) 6))) & ((long) 192));
														{	/* Unsafe/base64.scm 285 */

															{	/* Unsafe/base64.scm 286 */
																unsigned char BgL_arg2105z00_1203;

																BgL_arg2105z00_1203 = (BgL_v0z00_1200);
																{	/* Unsafe/base64.scm 286 */
																	long BgL_auxz00_4514;

																	BgL_auxz00_4514 = (long) CINT(BgL_wz00_944);
																	STRING_SET(BgL_bufz00_943, BgL_auxz00_4514,
																		BgL_arg2105z00_1203);
															}}
															{	/* Unsafe/base64.scm 287 */
																unsigned char BgL_auxz00_4520;

																long BgL_auxz00_4517;

																BgL_auxz00_4520 = (BgL_v1z00_1201);
																BgL_auxz00_4517 =
																	((long) CINT(BgL_wz00_944) + ((long) 1));
																STRING_SET(BgL_bufz00_943, BgL_auxz00_4517,
																	BgL_auxz00_4520);
															}
															{	/* Unsafe/base64.scm 288 */
																unsigned char BgL_auxz00_4526;

																long BgL_auxz00_4523;

																BgL_auxz00_4526 = (BgL_v2z00_1202);
																BgL_auxz00_4523 =
																	((long) CINT(BgL_wz00_944) + ((long) 2));
																STRING_SET(BgL_bufz00_943, BgL_auxz00_4523,
																	BgL_auxz00_4526);
															}
															{	/* Unsafe/base64.scm 289 */
																long BgL_arg2111z00_1209;

																BgL_arg2111z00_1209 =
																	((long) CINT(BgL_wz00_944) + ((long) 2));
																{	/* Unsafe/base64.scm 289 */
																	obj_t BgL_objz00_2917;

																	obj_t BgL_portz00_2920;

																	BgL_objz00_2917 = BgL_bufz00_943;
																	BgL_portz00_2920 = BgL_opz00_942;
																	{	/* Unsafe/base64.scm 289 */
																		bool_t BgL_testz00_4531;

																		if ((BgL_arg2111z00_1209 >= ((long) 0)))
																			{	/* Unsafe/base64.scm 289 */
																				bool_t BgL_testz00_4534;

																				{	/* Unsafe/base64.scm 289 */
																					long BgL_auxz00_4535;

																					BgL_auxz00_4535 =
																						(STRING_LENGTH(BgL_objz00_2917) +
																						((long) 1));
																					BgL_testz00_4534 =
																						BOUND_CHECK(BgL_arg2111z00_1209,
																						BgL_auxz00_4535);
																				}
																				if (BgL_testz00_4534)
																					{	/* Unsafe/base64.scm 289 */
																						BgL_testz00_4531 =
																							(((long) 0) >= ((long) 0));
																					}
																				else
																					{	/* Unsafe/base64.scm 289 */
																						BgL_testz00_4531 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Unsafe/base64.scm 289 */
																				BgL_testz00_4531 = ((bool_t) 0);
																			}
																		if (BgL_testz00_4531)
																			{	/* Unsafe/base64.scm 289 */
																				return
																					bgl_display_substring(BgL_objz00_2917,
																					((long) 0), BgL_arg2111z00_1209,
																					BgL_portz00_2920);
																			}
																		else
																			{	/* Unsafe/base64.scm 289 */
																				obj_t BgL_arg2749z00_2927;

																				obj_t BgL_arg2750z00_2928;

																				BgL_arg2749z00_2927 =
																					BGl_symbol3039z00zz__base64z00;
																				{	/* Unsafe/base64.scm 289 */
																					obj_t BgL_list2751z00_2929;

																					{	/* Unsafe/base64.scm 289 */
																						obj_t BgL_arg2752z00_2930;

																						BgL_arg2752z00_2930 =
																							MAKE_PAIR(BINT
																							(BgL_arg2111z00_1209), BNIL);
																						BgL_list2751z00_2929 =
																							MAKE_PAIR(BINT(((long) 0)),
																							BgL_arg2752z00_2930);
																					}
																					BgL_arg2750z00_2928 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string3041z00zz__base64z00,
																						BgL_list2751z00_2929);
																				}
																				return
																					BGl_errorz00zz__errorz00
																					(BgL_arg2749z00_2927,
																					BgL_arg2750z00_2928, BgL_objz00_2917);
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
								break;
							case ((long) 0):

								{	/* Unsafe/base64.scm 262 */
									int BgL_q0z00_1221;

									{	/* Unsafe/base64.scm 262 */
										int BgL_arg2148z00_1247;

										{	/* Unsafe/base64.scm 262 */
											int BgL_auxz00_4547;

											BgL_auxz00_4547 = (int) (((long) 0));
											BgL_arg2148z00_1247 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
												BgL_auxz00_4547);
										}
										{	/* Unsafe/base64.scm 262 */
											int BgL_res2967z00_2949;

											{	/* Unsafe/base64.scm 262 */
												char BgL_cz00_2941;

												BgL_cz00_2941 = (signed char) (BgL_arg2148z00_1247);
												if (((long) (BgL_cz00_2941) < ((long) 0)))
													{	/* Unsafe/base64.scm 262 */
														obj_t BgL_arg2412z00_2943;

														unsigned char BgL_arg2414z00_2945;

														BgL_arg2412z00_2943 =
															BGl_symbol3036z00zz__base64z00;
														BgL_arg2414z00_2945 = ((long) (BgL_cz00_2941));
														BgL_res2967z00_2949 =
															CINT(BGl_errorz00zz__errorz00(BgL_arg2412z00_2943,
																BGl_string3038z00zz__base64z00,
																BCHAR(BgL_arg2414z00_2945)));
													}
												else
													{	/* Unsafe/base64.scm 262 */
														unsigned char BgL_auxz00_4559;

														{	/* Unsafe/base64.scm 262 */
															long BgL_auxz00_4560;

															BgL_auxz00_4560 = (long) (BgL_cz00_2941);
															BgL_auxz00_4559 =
																BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																BgL_auxz00_4560);
														}
														BgL_res2967z00_2949 = (int) (BgL_auxz00_4559);
											}}
											BgL_q0z00_1221 = BgL_res2967z00_2949;
									}}
									{	/* Unsafe/base64.scm 262 */
										int BgL_q1z00_1222;

										{	/* Unsafe/base64.scm 263 */
											int BgL_arg2147z00_1246;

											{	/* Unsafe/base64.scm 263 */
												int BgL_auxz00_4564;

												BgL_auxz00_4564 = (int) (((long) 1));
												BgL_arg2147z00_1246 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
													BgL_auxz00_4564);
											}
											{	/* Unsafe/base64.scm 263 */
												int BgL_res2968z00_2961;

												{	/* Unsafe/base64.scm 263 */
													char BgL_cz00_2953;

													BgL_cz00_2953 = (signed char) (BgL_arg2147z00_1246);
													if (((long) (BgL_cz00_2953) < ((long) 0)))
														{	/* Unsafe/base64.scm 263 */
															obj_t BgL_arg2412z00_2955;

															unsigned char BgL_arg2414z00_2957;

															BgL_arg2412z00_2955 =
																BGl_symbol3036z00zz__base64z00;
															BgL_arg2414z00_2957 = ((long) (BgL_cz00_2953));
															BgL_res2968z00_2961 =
																CINT(BGl_errorz00zz__errorz00
																(BgL_arg2412z00_2955,
																	BGl_string3038z00zz__base64z00,
																	BCHAR(BgL_arg2414z00_2957)));
														}
													else
														{	/* Unsafe/base64.scm 263 */
															unsigned char BgL_auxz00_4576;

															{	/* Unsafe/base64.scm 263 */
																long BgL_auxz00_4577;

																BgL_auxz00_4577 = (long) (BgL_cz00_2953);
																BgL_auxz00_4576 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_auxz00_4577);
															}
															BgL_res2968z00_2961 = (int) (BgL_auxz00_4576);
												}}
												BgL_q1z00_1222 = BgL_res2968z00_2961;
										}}
										{	/* Unsafe/base64.scm 263 */
											int BgL_q2z00_1223;

											{	/* Unsafe/base64.scm 264 */
												int BgL_arg2146z00_1245;

												{	/* Unsafe/base64.scm 264 */
													int BgL_auxz00_4581;

													BgL_auxz00_4581 = (int) (((long) 2));
													BgL_arg2146z00_1245 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
														BgL_auxz00_4581);
												}
												{	/* Unsafe/base64.scm 264 */
													int BgL_res2969z00_2973;

													{	/* Unsafe/base64.scm 264 */
														char BgL_cz00_2965;

														BgL_cz00_2965 = (signed char) (BgL_arg2146z00_1245);
														if (((long) (BgL_cz00_2965) < ((long) 0)))
															{	/* Unsafe/base64.scm 264 */
																obj_t BgL_arg2412z00_2967;

																unsigned char BgL_arg2414z00_2969;

																BgL_arg2412z00_2967 =
																	BGl_symbol3036z00zz__base64z00;
																BgL_arg2414z00_2969 = ((long) (BgL_cz00_2965));
																BgL_res2969z00_2973 =
																	CINT(BGl_errorz00zz__errorz00
																	(BgL_arg2412z00_2967,
																		BGl_string3038z00zz__base64z00,
																		BCHAR(BgL_arg2414z00_2969)));
															}
														else
															{	/* Unsafe/base64.scm 264 */
																unsigned char BgL_auxz00_4593;

																{	/* Unsafe/base64.scm 264 */
																	long BgL_auxz00_4594;

																	BgL_auxz00_4594 = (long) (BgL_cz00_2965);
																	BgL_auxz00_4593 =
																		BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																		BgL_auxz00_4594);
																}
																BgL_res2969z00_2973 = (int) (BgL_auxz00_4593);
													}}
													BgL_q2z00_1223 = BgL_res2969z00_2973;
											}}
											{	/* Unsafe/base64.scm 264 */
												int BgL_q3z00_1224;

												{	/* Unsafe/base64.scm 265 */
													int BgL_arg2145z00_1244;

													{	/* Unsafe/base64.scm 265 */
														int BgL_auxz00_4598;

														BgL_auxz00_4598 = (int) (((long) 3));
														BgL_arg2145z00_1244 =
															RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_941,
															BgL_auxz00_4598);
													}
													{	/* Unsafe/base64.scm 265 */
														int BgL_res2970z00_2985;

														{	/* Unsafe/base64.scm 265 */
															char BgL_cz00_2977;

															BgL_cz00_2977 =
																(signed char) (BgL_arg2145z00_1244);
															if (((long) (BgL_cz00_2977) < ((long) 0)))
																{	/* Unsafe/base64.scm 265 */
																	obj_t BgL_arg2412z00_2979;

																	unsigned char BgL_arg2414z00_2981;

																	BgL_arg2412z00_2979 =
																		BGl_symbol3036z00zz__base64z00;
																	BgL_arg2414z00_2981 =
																		((long) (BgL_cz00_2977));
																	BgL_res2970z00_2985 =
																		CINT(BGl_errorz00zz__errorz00
																		(BgL_arg2412z00_2979,
																			BGl_string3038z00zz__base64z00,
																			BCHAR(BgL_arg2414z00_2981)));
																}
															else
																{	/* Unsafe/base64.scm 265 */
																	unsigned char BgL_auxz00_4610;

																	{	/* Unsafe/base64.scm 265 */
																		long BgL_auxz00_4611;

																		BgL_auxz00_4611 = (long) (BgL_cz00_2977);
																		BgL_auxz00_4610 =
																			BGL_U8VREF
																			(BGl_bytezd2tablezd2zz__base64z00,
																			BgL_auxz00_4611);
																	}
																	BgL_res2970z00_2985 = (int) (BgL_auxz00_4610);
														}}
														BgL_q3z00_1224 = BgL_res2970z00_2985;
												}}
												{	/* Unsafe/base64.scm 265 */
													long BgL_v0z00_1225;

													BgL_v0z00_1225 =
														(
														((long) (BgL_q0z00_1221) <<
															(int) (((long) 2))) |
														((long) (BgL_q1z00_1222) >> (int) (((long) 4))));
													{	/* Unsafe/base64.scm 266 */
														long BgL_v1z00_1226;

														BgL_v1z00_1226 =
															(
															(((long) (BgL_q1z00_1222) <<
																	(int) (((long) 4))) & ((long) 240)) |
															((long) (BgL_q2z00_1223) >> (int) (((long) 2))));
														{	/* Unsafe/base64.scm 267 */
															long BgL_v2z00_1227;

															BgL_v2z00_1227 =
																(
																(((long) (BgL_q2z00_1223) <<
																		(int) (((long) 6))) & ((long) 192)) |
																(long) (BgL_q3z00_1224));
															{	/* Unsafe/base64.scm 268 */

																{	/* Unsafe/base64.scm 269 */
																	unsigned char BgL_arg2126z00_1228;

																	BgL_arg2126z00_1228 = (BgL_v0z00_1225);
																	{	/* Unsafe/base64.scm 269 */
																		long BgL_auxz00_4637;

																		BgL_auxz00_4637 = (long) CINT(BgL_wz00_944);
																		STRING_SET(BgL_bufz00_943, BgL_auxz00_4637,
																			BgL_arg2126z00_1228);
																}}
																{	/* Unsafe/base64.scm 270 */
																	unsigned char BgL_auxz00_4643;

																	long BgL_auxz00_4640;

																	BgL_auxz00_4643 = (BgL_v1z00_1226);
																	BgL_auxz00_4640 =
																		((long) CINT(BgL_wz00_944) + ((long) 1));
																	STRING_SET(BgL_bufz00_943, BgL_auxz00_4640,
																		BgL_auxz00_4643);
																}
																{	/* Unsafe/base64.scm 271 */
																	unsigned char BgL_auxz00_4649;

																	long BgL_auxz00_4646;

																	BgL_auxz00_4649 = (BgL_v2z00_1227);
																	BgL_auxz00_4646 =
																		((long) CINT(BgL_wz00_944) + ((long) 2));
																	STRING_SET(BgL_bufz00_943, BgL_auxz00_4646,
																		BgL_auxz00_4649);
																}
																{	/* Unsafe/base64.scm 272 */
																	long BgL_nwz00_1233;

																	BgL_nwz00_1233 =
																		((long) CINT(BgL_wz00_944) + ((long) 3));
																	if (
																		(BgL_nwz00_1233 ==
																			(long) CINT(BgL_lenz00_945)))
																		{	/* Unsafe/base64.scm 273 */
																			bgl_display_string(BgL_bufz00_943,
																				BgL_opz00_942);
																			BgL_wz00_944 = BINT(((long) 0));
																		}
																	else
																		{	/* Unsafe/base64.scm 273 */
																			BgL_wz00_944 = BINT(BgL_nwz00_1233);
																		}
																}
																goto BgL_zc3anonymousza32085ze3z83_1166;
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
									BGl_errorz00zz__errorz00(BGl_string3034z00zz__base64z00,
									BGl_string3035z00zz__base64z00, BINT(BgL_matchz00_1167));
							}
					}
				}
			}
		}
	}



/* _base64-encode */
	obj_t BGl__base64zd2encodezd2zz__base64z00(obj_t BgL_envz00_5,
		obj_t BgL_optz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 70 */
			{	/* Unsafe/base64.scm 70 */
				obj_t BgL_g1905z00_1525;

				BgL_g1905z00_1525 = VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
				{	/* Unsafe/base64.scm 70 */
					int BgL_aux1907z00_1527;

					BgL_aux1907z00_1527 = VECTOR_LENGTH(BgL_optz00_4);
					switch ((long) (BgL_aux1907z00_1527))
						{
						case ((long) 1):

							{	/* Unsafe/base64.scm 70 */

								{	/* Unsafe/base64.scm 70 */
									obj_t BgL_arg2282z00_1530;

									BgL_arg2282z00_1530 =
										VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
									{	/* Unsafe/base64.scm 70 */
										obj_t BgL_auxz00_4668;

										if (STRINGP(BgL_arg2282z00_1530))
											{	/* Unsafe/base64.scm 70 */
												BgL_auxz00_4668 = BgL_arg2282z00_1530;
											}
										else
											{
												obj_t BgL_auxz00_4671;

												BgL_auxz00_4671 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3042z00zz__base64z00, BINT(((long) 2667)),
													BGl_string3043z00zz__base64z00,
													BGl_string3044z00zz__base64z00, BgL_arg2282z00_1530);
												FAILURE(BgL_auxz00_4671, BFALSE, BFALSE);
											}
										return
											BGl_base64zd2encodezd2zz__base64z00(BgL_auxz00_4668,
											BINT(((long) 76)));
							}}} break;
						case ((long) 2):

							{	/* Unsafe/base64.scm 70 */
								obj_t BgL_paddingz00_1531;

								BgL_paddingz00_1531 =
									VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
								{	/* Unsafe/base64.scm 70 */

									{	/* Unsafe/base64.scm 70 */
										obj_t BgL_arg2283z00_1532;

										BgL_arg2283z00_1532 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
										{	/* Unsafe/base64.scm 70 */
											obj_t BgL_auxz00_4681;

											if (STRINGP(BgL_arg2283z00_1532))
												{	/* Unsafe/base64.scm 70 */
													BgL_auxz00_4681 = BgL_arg2283z00_1532;
												}
											else
												{
													obj_t BgL_auxz00_4684;

													BgL_auxz00_4684 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3042z00zz__base64z00,
														BINT(((long) 2667)), BGl_string3043z00zz__base64z00,
														BGl_string3044z00zz__base64z00,
														BgL_arg2283z00_1532);
													FAILURE(BgL_auxz00_4684, BFALSE, BFALSE);
												}
											return
												BGl_base64zd2encodezd2zz__base64z00(BgL_auxz00_4681,
												BgL_paddingz00_1531);
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



/* base64-encode */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t BgL_sz00_2,
		obj_t BgL_paddingz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 70 */
			{	/* Unsafe/base64.scm 73 */
				long BgL_lenz00_1536;

				BgL_lenz00_1536 = STRING_LENGTH(BgL_sz00_2);
				{	/* Unsafe/base64.scm 74 */
					long BgL_lenzd23zd2_1537;

					BgL_lenzd23zd2_1537 = (BgL_lenz00_1536 - ((long) 3));
					{	/* Unsafe/base64.scm 75 */
						long BgL_rlenz00_1538;

						BgL_rlenz00_1538 =
							(((long) 4) * ((((long) 2) + BgL_lenz00_1536) / ((long) 3)));
						{	/* Unsafe/base64.scm 76 */
							long BgL_padz00_1539;

							{	/* Unsafe/base64.scm 77 */
								bool_t BgL_testz00_4696;

								if (INTEGERP(BgL_paddingz00_3))
									{	/* Unsafe/base64.scm 77 */
										BgL_testz00_4696 =
											((long) CINT(BgL_paddingz00_3) > ((long) 0));
									}
								else
									{	/* Unsafe/base64.scm 77 */
										BgL_testz00_4696 = ((bool_t) 0);
									}
								if (BgL_testz00_4696)
									{	/* Unsafe/base64.scm 77 */
										BgL_padz00_1539 =
											(
											(((long) 3) *
												(long) CINT(BgL_paddingz00_3)) / ((long) 4));
									}
								else
									{	/* Unsafe/base64.scm 77 */
										BgL_padz00_1539 = ((long) -1);
							}}
							{	/* Unsafe/base64.scm 77 */
								long BgL_flenz00_1540;

								if ((BgL_padz00_1539 > ((long) 0)))
									{	/* Unsafe/base64.scm 80 */
										BgL_flenz00_1540 =
											(BgL_rlenz00_1538 +
											(BgL_rlenz00_1538 / (long) CINT(BgL_paddingz00_3)));
									}
								else
									{	/* Unsafe/base64.scm 80 */
										BgL_flenz00_1540 = BgL_rlenz00_1538;
									}
								{	/* Unsafe/base64.scm 80 */
									obj_t BgL_resz00_1541;

									{	/* Unsafe/base64.scm 83 */
										obj_t BgL_list2351z00_1628;

										BgL_list2351z00_1628 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										{	/* Unsafe/base64.scm 83 */
											obj_t BgL_res2980z00_3157;

											{	/* Unsafe/base64.scm 83 */
												obj_t BgL_arg2805z00_3154;

												BgL_arg2805z00_3154 = CAR(BgL_list2351z00_1628);
												BgL_res2980z00_3157 =
													make_string(BgL_flenz00_1540,
													CCHAR(BgL_arg2805z00_3154));
											}
											BgL_resz00_1541 = BgL_res2980z00_3157;
									}}
									{	/* Unsafe/base64.scm 83 */

										{
											long BgL_xz00_1543;

											long BgL_yz00_1544;

											BgL_xz00_1543 = ((long) 0);
											BgL_yz00_1544 = ((long) 0);
										BgL_zc3anonymousza32284ze3z83_1545:
											if ((BgL_xz00_1543 <= BgL_lenzd23zd2_1537))
												{	/* Unsafe/base64.scm 87 */
													long BgL_i0z00_1547;

													BgL_i0z00_1547 =
														(STRING_REF(BgL_sz00_2, BgL_xz00_1543));
													{	/* Unsafe/base64.scm 87 */
														long BgL_i1z00_1548;

														BgL_i1z00_1548 =
															(STRING_REF(BgL_sz00_2,
																(((long) 1) + BgL_xz00_1543)));
														{	/* Unsafe/base64.scm 88 */
															long BgL_i2z00_1549;

															BgL_i2z00_1549 =
																(STRING_REF(BgL_sz00_2,
																	(((long) 2) + BgL_xz00_1543)));
															{	/* Unsafe/base64.scm 89 */
																long BgL_o0z00_1550;

																BgL_o0z00_1550 =
																	(
																	(BgL_i0z00_1547 & ((long) 252)) >>
																	(int) (((long) 2)));
																{	/* Unsafe/base64.scm 90 */
																	long BgL_o1z00_1551;

																	BgL_o1z00_1551 =
																		(
																		((BgL_i0z00_1547 & ((long) 3)) <<
																			(int) (((long) 4))) |
																		((BgL_i1z00_1548 & ((long) 240)) >>
																			(int) (((long) 4))));
																	{	/* Unsafe/base64.scm 91 */
																		long BgL_o2z00_1552;

																		BgL_o2z00_1552 =
																			(
																			((BgL_i1z00_1548 & ((long) 15)) <<
																				(int) (((long) 2))) |
																			((BgL_i2z00_1549 & ((long) 192)) >>
																				(int) (((long) 6))));
																		{	/* Unsafe/base64.scm 93 */
																			long BgL_o3z00_1553;

																			BgL_o3z00_1553 =
																				(BgL_i2z00_1549 & ((long) 63));
																			{	/* Unsafe/base64.scm 95 */

																				{	/* Unsafe/base64.scm 96 */
																					unsigned char BgL_auxz00_4742;

																					BgL_auxz00_4742 =
																						STRING_REF
																						(BGl_string3045z00zz__base64z00,
																						BgL_o0z00_1550);
																					STRING_SET(BgL_resz00_1541,
																						BgL_yz00_1544, BgL_auxz00_4742);
																				}
																				{	/* Unsafe/base64.scm 97 */
																					unsigned char BgL_auxz00_4747;

																					long BgL_auxz00_4745;

																					BgL_auxz00_4747 =
																						STRING_REF
																						(BGl_string3045z00zz__base64z00,
																						BgL_o1z00_1551);
																					BgL_auxz00_4745 =
																						(BgL_yz00_1544 + ((long) 1));
																					STRING_SET(BgL_resz00_1541,
																						BgL_auxz00_4745, BgL_auxz00_4747);
																				}
																				{	/* Unsafe/base64.scm 98 */
																					unsigned char BgL_auxz00_4752;

																					long BgL_auxz00_4750;

																					BgL_auxz00_4752 =
																						STRING_REF
																						(BGl_string3045z00zz__base64z00,
																						BgL_o2z00_1552);
																					BgL_auxz00_4750 =
																						(BgL_yz00_1544 + ((long) 2));
																					STRING_SET(BgL_resz00_1541,
																						BgL_auxz00_4750, BgL_auxz00_4752);
																				}
																				{	/* Unsafe/base64.scm 99 */
																					unsigned char BgL_auxz00_4757;

																					long BgL_auxz00_4755;

																					BgL_auxz00_4757 =
																						STRING_REF
																						(BGl_string3045z00zz__base64z00,
																						BgL_o3z00_1553);
																					BgL_auxz00_4755 =
																						(BgL_yz00_1544 + ((long) 3));
																					STRING_SET(BgL_resz00_1541,
																						BgL_auxz00_4755, BgL_auxz00_4757);
																				}
																				{	/* Unsafe/base64.scm 100 */
																					long BgL_nxz00_1561;

																					BgL_nxz00_1561 =
																						(BgL_xz00_1543 + ((long) 3));
																					{	/* Unsafe/base64.scm 101 */
																						bool_t BgL_testz00_4761;

																						if ((BgL_padz00_1539 > ((long) 0)))
																							{	/* Unsafe/base64.scm 101 */
																								long BgL_arg2300z00_1566;

																								BgL_arg2300z00_1566 =
																									(BgL_nxz00_1561 %
																									BgL_padz00_1539);
																								BgL_testz00_4761 =
																									(BgL_arg2300z00_1566 ==
																									((long) 0));
																							}
																						else
																							{	/* Unsafe/base64.scm 101 */
																								BgL_testz00_4761 = ((bool_t) 0);
																							}
																						if (BgL_testz00_4761)
																							{
																								long BgL_yz00_4767;

																								long BgL_xz00_4766;

																								BgL_xz00_4766 = BgL_nxz00_1561;
																								BgL_yz00_4767 =
																									(BgL_yz00_1544 + ((long) 5));
																								BgL_yz00_1544 = BgL_yz00_4767;
																								BgL_xz00_1543 = BgL_xz00_4766;
																								goto
																									BgL_zc3anonymousza32284ze3z83_1545;
																							}
																						else
																							{
																								long BgL_yz00_4770;

																								long BgL_xz00_4769;

																								BgL_xz00_4769 = BgL_nxz00_1561;
																								BgL_yz00_4770 =
																									(BgL_yz00_1544 + ((long) 4));
																								BgL_yz00_1544 = BgL_yz00_4770;
																								BgL_xz00_1543 = BgL_xz00_4769;
																								goto
																									BgL_zc3anonymousza32284ze3z83_1545;
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
												{	/* Unsafe/base64.scm 104 */
													long BgL_aux1826z00_1588;

													BgL_aux1826z00_1588 =
														(BgL_lenz00_1536 - BgL_xz00_1543);
													switch (BgL_aux1826z00_1588)
														{
														case ((long) 2):

															{	/* Unsafe/base64.scm 106 */
																long BgL_i0z00_1590;

																BgL_i0z00_1590 =
																	(STRING_REF(BgL_sz00_2, BgL_xz00_1543));
																{	/* Unsafe/base64.scm 106 */
																	long BgL_i1z00_1591;

																	BgL_i1z00_1591 =
																		(STRING_REF(BgL_sz00_2,
																			(BgL_xz00_1543 + ((long) 1))));
																	{	/* Unsafe/base64.scm 107 */
																		long BgL_o0z00_1592;

																		BgL_o0z00_1592 =
																			(
																			(BgL_i0z00_1590 & ((long) 252)) >>
																			(int) (((long) 2)));
																		{	/* Unsafe/base64.scm 108 */
																			long BgL_o1z00_1593;

																			BgL_o1z00_1593 =
																				(
																				((BgL_i0z00_1590 & ((long) 3)) <<
																					(int) (((long) 4))) |
																				((BgL_i1z00_1591 & ((long) 240)) >>
																					(int) (((long) 4))));
																			{	/* Unsafe/base64.scm 109 */
																				long BgL_o2z00_1594;

																				BgL_o2z00_1594 =
																					(
																					(BgL_i1z00_1591 & ((long) 15)) <<
																					(int) (((long) 2)));
																				{	/* Unsafe/base64.scm 111 */

																					{	/* Unsafe/base64.scm 112 */
																						unsigned char BgL_auxz00_4791;

																						BgL_auxz00_4791 =
																							STRING_REF
																							(BGl_string3045z00zz__base64z00,
																							BgL_o0z00_1592);
																						STRING_SET(BgL_resz00_1541,
																							BgL_yz00_1544, BgL_auxz00_4791);
																					}
																					{	/* Unsafe/base64.scm 113 */
																						unsigned char BgL_auxz00_4796;

																						long BgL_auxz00_4794;

																						BgL_auxz00_4796 =
																							STRING_REF
																							(BGl_string3045z00zz__base64z00,
																							BgL_o1z00_1593);
																						BgL_auxz00_4794 =
																							(BgL_yz00_1544 + ((long) 1));
																						STRING_SET(BgL_resz00_1541,
																							BgL_auxz00_4794, BgL_auxz00_4796);
																					}
																					{	/* Unsafe/base64.scm 114 */
																						unsigned char BgL_auxz00_4801;

																						long BgL_auxz00_4799;

																						BgL_auxz00_4801 =
																							STRING_REF
																							(BGl_string3045z00zz__base64z00,
																							BgL_o2z00_1594);
																						BgL_auxz00_4799 =
																							(BgL_yz00_1544 + ((long) 2));
																						STRING_SET(BgL_resz00_1541,
																							BgL_auxz00_4799, BgL_auxz00_4801);
																					}
																					{	/* Unsafe/base64.scm 115 */
																						long BgL_auxz00_4804;

																						BgL_auxz00_4804 =
																							(BgL_yz00_1544 + ((long) 3));
																						STRING_SET(BgL_resz00_1541,
																							BgL_auxz00_4804,
																							((unsigned char) '='));
															}}}}}}} break;
														case ((long) 1):

															{	/* Unsafe/base64.scm 117 */
																long BgL_iz00_1614;

																BgL_iz00_1614 =
																	(STRING_REF(BgL_sz00_2, BgL_xz00_1543));
																{	/* Unsafe/base64.scm 117 */
																	long BgL_o0z00_1615;

																	BgL_o0z00_1615 =
																		(
																		(BgL_iz00_1614 & ((long) 252)) >>
																		(int) (((long) 2)));
																	{	/* Unsafe/base64.scm 118 */
																		long BgL_o1z00_1616;

																		BgL_o1z00_1616 =
																			(
																			(BgL_iz00_1614 & ((long) 3)) <<
																			(int) (((long) 4)));
																		{	/* Unsafe/base64.scm 119 */

																			{	/* Unsafe/base64.scm 120 */
																				unsigned char BgL_auxz00_4815;

																				BgL_auxz00_4815 =
																					STRING_REF
																					(BGl_string3045z00zz__base64z00,
																					BgL_o0z00_1615);
																				STRING_SET(BgL_resz00_1541,
																					BgL_yz00_1544, BgL_auxz00_4815);
																			}
																			{	/* Unsafe/base64.scm 121 */
																				unsigned char BgL_auxz00_4820;

																				long BgL_auxz00_4818;

																				BgL_auxz00_4820 =
																					STRING_REF
																					(BGl_string3045z00zz__base64z00,
																					BgL_o1z00_1616);
																				BgL_auxz00_4818 =
																					(BgL_yz00_1544 + ((long) 1));
																				STRING_SET(BgL_resz00_1541,
																					BgL_auxz00_4818, BgL_auxz00_4820);
																			}
																			{	/* Unsafe/base64.scm 122 */
																				long BgL_auxz00_4823;

																				BgL_auxz00_4823 =
																					(BgL_yz00_1544 + ((long) 2));
																				STRING_SET(BgL_resz00_1541,
																					BgL_auxz00_4823,
																					((unsigned char) '='));
																			}
																			{	/* Unsafe/base64.scm 123 */
																				long BgL_auxz00_4826;

																				BgL_auxz00_4826 =
																					(BgL_yz00_1544 + ((long) 3));
																				STRING_SET(BgL_resz00_1541,
																					BgL_auxz00_4826,
																					((unsigned char) '='));
															}}}}} break;
														default:
															BUNSPEC;
														}
												}
										}
										return BgL_resz00_1541;
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* _base64-encode-port */
	obj_t BGl__base64zd2encodezd2portz00zz__base64z00(obj_t BgL_envz00_10,
		obj_t BgL_optz00_9)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 129 */
			{	/* Unsafe/base64.scm 129 */
				obj_t BgL_g1908z00_1639;

				obj_t BgL_g1909z00_1640;

				BgL_g1908z00_1639 = VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
				BgL_g1909z00_1640 = VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
				{	/* Unsafe/base64.scm 129 */
					int BgL_aux1911z00_1642;

					BgL_aux1911z00_1642 = VECTOR_LENGTH(BgL_optz00_9);
					switch ((long) (BgL_aux1911z00_1642))
						{
						case ((long) 2):

							{	/* Unsafe/base64.scm 129 */

								{	/* Unsafe/base64.scm 129 */
									obj_t BgL_arg2363z00_1645;

									obj_t BgL_arg2364z00_1646;

									BgL_arg2363z00_1645 =
										VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
									BgL_arg2364z00_1646 =
										VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
									{	/* Unsafe/base64.scm 129 */
										obj_t BgL_auxz00_4846;

										obj_t BgL_auxz00_4839;

										if (OUTPUT_PORTP(BgL_arg2364z00_1646))
											{	/* Unsafe/base64.scm 129 */
												BgL_auxz00_4846 = BgL_arg2364z00_1646;
											}
										else
											{
												obj_t BgL_auxz00_4849;

												BgL_auxz00_4849 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3042z00zz__base64z00, BINT(((long) 4826)),
													BGl_string3046z00zz__base64z00,
													BGl_string3048z00zz__base64z00, BgL_arg2364z00_1646);
												FAILURE(BgL_auxz00_4849, BFALSE, BFALSE);
											}
										if (INPUT_PORTP(BgL_arg2363z00_1645))
											{	/* Unsafe/base64.scm 129 */
												BgL_auxz00_4839 = BgL_arg2363z00_1645;
											}
										else
											{
												obj_t BgL_auxz00_4842;

												BgL_auxz00_4842 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3042z00zz__base64z00, BINT(((long) 4826)),
													BGl_string3046z00zz__base64z00,
													BGl_string3047z00zz__base64z00, BgL_arg2363z00_1645);
												FAILURE(BgL_auxz00_4842, BFALSE, BFALSE);
											}
										return
											BGl_base64zd2encodezd2portz00zz__base64z00
											(BgL_auxz00_4839, BgL_auxz00_4846, BINT(((long) 76)));
							}}} break;
						case ((long) 3):

							{	/* Unsafe/base64.scm 129 */
								obj_t BgL_paddingz00_1647;

								BgL_paddingz00_1647 =
									VECTOR_REF(BgL_optz00_9, (int) (((long) 2)));
								{	/* Unsafe/base64.scm 129 */

									{	/* Unsafe/base64.scm 129 */
										obj_t BgL_arg2365z00_1648;

										obj_t BgL_arg2366z00_1649;

										BgL_arg2365z00_1648 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
										BgL_arg2366z00_1649 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
										{	/* Unsafe/base64.scm 129 */
											obj_t BgL_auxz00_4868;

											obj_t BgL_auxz00_4861;

											if (OUTPUT_PORTP(BgL_arg2366z00_1649))
												{	/* Unsafe/base64.scm 129 */
													BgL_auxz00_4868 = BgL_arg2366z00_1649;
												}
											else
												{
													obj_t BgL_auxz00_4871;

													BgL_auxz00_4871 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3042z00zz__base64z00,
														BINT(((long) 4826)), BGl_string3046z00zz__base64z00,
														BGl_string3048z00zz__base64z00,
														BgL_arg2366z00_1649);
													FAILURE(BgL_auxz00_4871, BFALSE, BFALSE);
												}
											if (INPUT_PORTP(BgL_arg2365z00_1648))
												{	/* Unsafe/base64.scm 129 */
													BgL_auxz00_4861 = BgL_arg2365z00_1648;
												}
											else
												{
													obj_t BgL_auxz00_4864;

													BgL_auxz00_4864 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3042z00zz__base64z00,
														BINT(((long) 4826)), BGl_string3046z00zz__base64z00,
														BGl_string3047z00zz__base64z00,
														BgL_arg2365z00_1648);
													FAILURE(BgL_auxz00_4864, BFALSE, BFALSE);
												}
											return
												BGl_base64zd2encodezd2portz00zz__base64z00
												(BgL_auxz00_4861, BgL_auxz00_4868, BgL_paddingz00_1647);
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



/* base64-encode-port */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2encodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_6, obj_t BgL_opz00_7, obj_t BgL_paddingz00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 129 */
			{	/* Unsafe/base64.scm 130 */
				long BgL_padz00_1650;

				BgL_padz00_1650 = ((long) CINT(BgL_paddingz00_8) - ((long) 4));
				{
					long BgL_iz00_1652;

					BgL_iz00_1652 = ((long) 0);
				BgL_zc3anonymousza32367ze3z83_1653:
					{	/* Unsafe/base64.scm 132 */
						obj_t BgL_i0z00_1654;

						BgL_i0z00_1654 =
							BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_6);
						if (EOF_OBJECTP(BgL_i0z00_1654))
							{	/* Unsafe/base64.scm 133 */
								return BFALSE;
							}
						else
							{	/* Unsafe/base64.scm 134 */
								obj_t BgL_i1z00_1656;

								BgL_i1z00_1656 =
									BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_6);
								if (EOF_OBJECTP(BgL_i1z00_1656))
									{	/* Unsafe/base64.scm 136 */
										long BgL_o0z00_1658;

										BgL_o0z00_1658 =
											(
											((long) CINT(BgL_i0z00_1654) & ((long) 252)) >>
											(int) (((long) 2)));
										{	/* Unsafe/base64.scm 136 */
											long BgL_o1z00_1659;

											BgL_o1z00_1659 =
												(
												((long) CINT(BgL_i0z00_1654) & ((long) 3)) <<
												(int) (((long) 4)));
											{	/* Unsafe/base64.scm 137 */

												{	/* Unsafe/base64.scm 138 */
													unsigned char BgL_auxz00_4894;

													BgL_auxz00_4894 =
														STRING_REF(BGl_string3045z00zz__base64z00,
														BgL_o0z00_1658);
													bgl_display_char(BgL_auxz00_4894, BgL_opz00_7);
												}
												{	/* Unsafe/base64.scm 139 */
													unsigned char BgL_auxz00_4897;

													BgL_auxz00_4897 =
														STRING_REF(BGl_string3045z00zz__base64z00,
														BgL_o1z00_1659);
													bgl_display_char(BgL_auxz00_4897, BgL_opz00_7);
												}
												bgl_display_char(((unsigned char) '='), BgL_opz00_7);
												return
													bgl_display_char(((unsigned char) '='), BgL_opz00_7);
									}}}
								else
									{	/* Unsafe/base64.scm 142 */
										obj_t BgL_i2z00_1666;

										BgL_i2z00_1666 =
											BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_6);
										if (EOF_OBJECTP(BgL_i2z00_1666))
											{	/* Unsafe/base64.scm 144 */
												long BgL_o0z00_1668;

												BgL_o0z00_1668 =
													(
													((long) CINT(BgL_i0z00_1654) & ((long) 252)) >>
													(int) (((long) 2)));
												{	/* Unsafe/base64.scm 144 */
													long BgL_o1z00_1669;

													BgL_o1z00_1669 =
														(
														(((long) CINT(BgL_i0z00_1654) & ((long) 3)) <<
															(int) (((long) 4))) |
														(((long) CINT(BgL_i1z00_1656) & ((long) 240)) >>
															(int) (((long) 4))));
													{	/* Unsafe/base64.scm 145 */
														long BgL_o2z00_1670;

														BgL_o2z00_1670 =
															(
															((long) CINT(BgL_i1z00_1656) & ((long) 15)) <<
															(int) (((long) 2)));
														{	/* Unsafe/base64.scm 147 */

															{	/* Unsafe/base64.scm 148 */
																unsigned char BgL_auxz00_4922;

																BgL_auxz00_4922 =
																	STRING_REF(BGl_string3045z00zz__base64z00,
																	BgL_o0z00_1668);
																bgl_display_char(BgL_auxz00_4922, BgL_opz00_7);
															}
															{	/* Unsafe/base64.scm 149 */
																unsigned char BgL_auxz00_4925;

																BgL_auxz00_4925 =
																	STRING_REF(BGl_string3045z00zz__base64z00,
																	BgL_o1z00_1669);
																bgl_display_char(BgL_auxz00_4925, BgL_opz00_7);
															}
															{	/* Unsafe/base64.scm 150 */
																unsigned char BgL_auxz00_4928;

																BgL_auxz00_4928 =
																	STRING_REF(BGl_string3045z00zz__base64z00,
																	BgL_o2z00_1670);
																bgl_display_char(BgL_auxz00_4928, BgL_opz00_7);
															}
															return
																bgl_display_char(((unsigned char) '='),
																BgL_opz00_7);
											}}}}
										else
											{	/* Unsafe/base64.scm 152 */
												long BgL_o0z00_1684;

												BgL_o0z00_1684 =
													(
													((long) CINT(BgL_i0z00_1654) & ((long) 252)) >>
													(int) (((long) 2)));
												{	/* Unsafe/base64.scm 152 */
													long BgL_o1z00_1685;

													BgL_o1z00_1685 =
														(
														(((long) CINT(BgL_i0z00_1654) & ((long) 3)) <<
															(int) (((long) 4))) |
														(((long) CINT(BgL_i1z00_1656) & ((long) 240)) >>
															(int) (((long) 4))));
													{	/* Unsafe/base64.scm 153 */
														long BgL_o2z00_1686;

														BgL_o2z00_1686 =
															(
															(((long) CINT(BgL_i1z00_1656) & ((long) 15)) <<
																(int) (((long) 2))) |
															(((long) CINT(BgL_i2z00_1666) & ((long) 192)) >>
																(int) (((long) 6))));
														{	/* Unsafe/base64.scm 155 */
															long BgL_o3z00_1687;

															BgL_o3z00_1687 =
																((long) CINT(BgL_i2z00_1666) & ((long) 63));
															{	/* Unsafe/base64.scm 157 */

																{	/* Unsafe/base64.scm 158 */
																	unsigned char BgL_auxz00_4956;

																	BgL_auxz00_4956 =
																		STRING_REF(BGl_string3045z00zz__base64z00,
																		BgL_o0z00_1684);
																	bgl_display_char(BgL_auxz00_4956,
																		BgL_opz00_7);
																}
																{	/* Unsafe/base64.scm 159 */
																	unsigned char BgL_auxz00_4959;

																	BgL_auxz00_4959 =
																		STRING_REF(BGl_string3045z00zz__base64z00,
																		BgL_o1z00_1685);
																	bgl_display_char(BgL_auxz00_4959,
																		BgL_opz00_7);
																}
																{	/* Unsafe/base64.scm 160 */
																	unsigned char BgL_auxz00_4962;

																	BgL_auxz00_4962 =
																		STRING_REF(BGl_string3045z00zz__base64z00,
																		BgL_o2z00_1686);
																	bgl_display_char(BgL_auxz00_4962,
																		BgL_opz00_7);
																}
																{	/* Unsafe/base64.scm 161 */
																	unsigned char BgL_auxz00_4965;

																	BgL_auxz00_4965 =
																		STRING_REF(BGl_string3045z00zz__base64z00,
																		BgL_o3z00_1687);
																	bgl_display_char(BgL_auxz00_4965,
																		BgL_opz00_7);
																}
																{	/* Unsafe/base64.scm 162 */
																	bool_t BgL_testz00_4968;

																	if ((BgL_iz00_1652 >= BgL_padz00_1650))
																		{	/* Unsafe/base64.scm 162 */
																			BgL_testz00_4968 =
																				(BgL_padz00_1650 > ((long) 0));
																		}
																	else
																		{	/* Unsafe/base64.scm 162 */
																			BgL_testz00_4968 = ((bool_t) 0);
																		}
																	if (BgL_testz00_4968)
																		{	/* Unsafe/base64.scm 162 */
																			bgl_display_char(((unsigned char) '\n'),
																				BgL_opz00_7);
																			{
																				long BgL_iz00_4973;

																				BgL_iz00_4973 = ((long) 0);
																				BgL_iz00_1652 = BgL_iz00_4973;
																				goto BgL_zc3anonymousza32367ze3z83_1653;
																			}
																		}
																	else
																		{
																			long BgL_iz00_4974;

																			BgL_iz00_4974 =
																				(BgL_iz00_1652 + ((long) 4));
																			BgL_iz00_1652 = BgL_iz00_4974;
																			goto BgL_zc3anonymousza32367ze3z83_1653;
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



/* actual-string-length */
	long BGl_actualzd2stringzd2lengthz00zz__base64z00(obj_t BgL_sz00_13)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 205 */
			{
				long BgL_iz00_1717;

				BgL_iz00_1717 = (STRING_LENGTH(BgL_sz00_13) - ((long) 1));
			BgL_zc3anonymousza32416ze3z83_1718:
				if ((BgL_iz00_1717 == ((long) 0)))
					{	/* Unsafe/base64.scm 207 */
						return BgL_iz00_1717;
					}
				else
					{	/* Unsafe/base64.scm 209 */
						unsigned char BgL_cz00_1720;

						BgL_cz00_1720 = STRING_REF(BgL_sz00_13, BgL_iz00_1717);
						{	/* Unsafe/base64.scm 210 */
							bool_t BgL_testz00_4979;

							if ((BgL_cz00_1720 == ((unsigned char) '\n')))
								{	/* Unsafe/base64.scm 210 */
									BgL_testz00_4979 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/base64.scm 210 */
									BgL_testz00_4979 = (BgL_cz00_1720 == ((unsigned char) '\r'));
								}
							if (BgL_testz00_4979)
								{
									long BgL_iz00_4983;

									BgL_iz00_4983 = (BgL_iz00_1717 - ((long) 1));
									BgL_iz00_1717 = BgL_iz00_4983;
									goto BgL_zc3anonymousza32416ze3z83_1718;
								}
							else
								{	/* Unsafe/base64.scm 210 */
									return (BgL_iz00_1717 + ((long) 1));
		}}}}}
	}



/* base64-decode */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2decodezd2zz__base64z00(obj_t BgL_sz00_14)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 217 */
			{	/* Unsafe/base64.scm 218 */
				long BgL_lenz00_1727;

				BgL_lenz00_1727 =
					BGl_actualzd2stringzd2lengthz00zz__base64z00(BgL_sz00_14);
				{	/* Unsafe/base64.scm 218 */
					long BgL_nlenz00_1728;

					BgL_nlenz00_1728 = ((BgL_lenz00_1727 / ((long) 4)) * ((long) 3));
					{	/* Unsafe/base64.scm 219 */
						obj_t BgL_resz00_1729;

						BgL_resz00_1729 =
							make_string(BgL_nlenz00_1728, ((unsigned char) ' '));
						{	/* Unsafe/base64.scm 220 */

							{
								long BgL_xz00_1731;

								long BgL_yz00_1732;

								BgL_xz00_1731 = ((long) 0);
								BgL_yz00_1732 = ((long) 0);
							BgL_zc3anonymousza32423ze3z83_1733:
								if ((BgL_xz00_1731 < BgL_lenz00_1727))
									{	/* Unsafe/base64.scm 224 */
										unsigned char BgL_cz00_1735;

										BgL_cz00_1735 =
											STRING_REF(BgL_sz00_14, (BgL_xz00_1731 + ((long) 0)));
										{	/* Unsafe/base64.scm 224 */
											int BgL_q0z00_1736;

											{	/* Unsafe/base64.scm 225 */
												int BgL_res2984z00_3526;

												{	/* Unsafe/base64.scm 225 */
													unsigned char BgL_cz00_3514;

													BgL_cz00_3514 = (char) (BgL_cz00_1735);
													{	/* Unsafe/base64.scm 225 */
														long BgL_arg2415z00_3515;

														BgL_arg2415z00_3515 =
															((unsigned char) (BgL_cz00_3514));
														{	/* Unsafe/base64.scm 225 */
															int BgL_res2983z00_3525;

															{	/* Unsafe/base64.scm 225 */
																char BgL_cz00_3517;

																BgL_cz00_3517 =
																	(signed char) (BgL_arg2415z00_3515);
																if (((long) (BgL_cz00_3517) < ((long) 0)))
																	{	/* Unsafe/base64.scm 225 */
																		obj_t BgL_arg2412z00_3519;

																		unsigned char BgL_arg2414z00_3521;

																		BgL_arg2412z00_3519 =
																			BGl_symbol3036z00zz__base64z00;
																		BgL_arg2414z00_3521 =
																			((long) (BgL_cz00_3517));
																		BgL_res2983z00_3525 =
																			CINT(BGl_errorz00zz__errorz00
																			(BgL_arg2412z00_3519,
																				BGl_string3038z00zz__base64z00,
																				BCHAR(BgL_arg2414z00_3521)));
																	}
																else
																	{	/* Unsafe/base64.scm 225 */
																		unsigned char BgL_auxz00_5008;

																		{	/* Unsafe/base64.scm 225 */
																			long BgL_auxz00_5009;

																			BgL_auxz00_5009 = (long) (BgL_cz00_3517);
																			BgL_auxz00_5008 =
																				BGL_U8VREF
																				(BGl_bytezd2tablezd2zz__base64z00,
																				BgL_auxz00_5009);
																		}
																		BgL_res2983z00_3525 =
																			(int) (BgL_auxz00_5008);
															}}
															BgL_res2984z00_3526 = BgL_res2983z00_3525;
												}}}
												BgL_q0z00_1736 = BgL_res2984z00_3526;
											}
											{	/* Unsafe/base64.scm 225 */

												{	/* Unsafe/base64.scm 226 */
													bool_t BgL_testz00_5013;

													if (((long) (BgL_q0z00_1736) == ((long) 0)))
														{	/* Unsafe/base64.scm 227 */
															bool_t BgL__ortest_1829z00_1768;

															BgL__ortest_1829z00_1768 =
																(BgL_cz00_1735 == ((unsigned char) '\n'));
															if (BgL__ortest_1829z00_1768)
																{	/* Unsafe/base64.scm 227 */
																	BgL_testz00_5013 = BgL__ortest_1829z00_1768;
																}
															else
																{	/* Unsafe/base64.scm 227 */
																	BgL_testz00_5013 =
																		(BgL_cz00_1735 == ((unsigned char) '\r'));
														}}
													else
														{	/* Unsafe/base64.scm 226 */
															BgL_testz00_5013 = ((bool_t) 0);
														}
													if (BgL_testz00_5013)
														{
															long BgL_xz00_5020;

															BgL_xz00_5020 = (BgL_xz00_1731 + ((long) 1));
															BgL_xz00_1731 = BgL_xz00_5020;
															goto BgL_zc3anonymousza32423ze3z83_1733;
														}
													else
														{	/* Unsafe/base64.scm 229 */
															int BgL_q1z00_1739;

															{	/* Unsafe/base64.scm 229 */
																unsigned char BgL_arg2448z00_1765;

																BgL_arg2448z00_1765 =
																	STRING_REF(BgL_sz00_14,
																	(BgL_xz00_1731 + ((long) 1)));
																{	/* Unsafe/base64.scm 229 */
																	int BgL_res2986z00_3551;

																	{	/* Unsafe/base64.scm 229 */
																		unsigned char BgL_cz00_3539;

																		BgL_cz00_3539 =
																			(char) (BgL_arg2448z00_1765);
																		{	/* Unsafe/base64.scm 229 */
																			long BgL_arg2415z00_3540;

																			BgL_arg2415z00_3540 =
																				((unsigned char) (BgL_cz00_3539));
																			{	/* Unsafe/base64.scm 229 */
																				int BgL_res2985z00_3550;

																				{	/* Unsafe/base64.scm 229 */
																					char BgL_cz00_3542;

																					BgL_cz00_3542 =
																						(signed char) (BgL_arg2415z00_3540);
																					if (
																						((long) (BgL_cz00_3542) <
																							((long) 0)))
																						{	/* Unsafe/base64.scm 229 */
																							obj_t BgL_arg2412z00_3544;

																							unsigned char BgL_arg2414z00_3546;

																							BgL_arg2412z00_3544 =
																								BGl_symbol3036z00zz__base64z00;
																							BgL_arg2414z00_3546 =
																								((long) (BgL_cz00_3542));
																							BgL_res2985z00_3550 =
																								CINT(BGl_errorz00zz__errorz00
																								(BgL_arg2412z00_3544,
																									BGl_string3038z00zz__base64z00,
																									BCHAR(BgL_arg2414z00_3546)));
																						}
																					else
																						{	/* Unsafe/base64.scm 229 */
																							unsigned char BgL_auxz00_5036;

																							{	/* Unsafe/base64.scm 229 */
																								long BgL_auxz00_5037;

																								BgL_auxz00_5037 =
																									(long) (BgL_cz00_3542);
																								BgL_auxz00_5036 =
																									BGL_U8VREF
																									(BGl_bytezd2tablezd2zz__base64z00,
																									BgL_auxz00_5037);
																							}
																							BgL_res2985z00_3550 =
																								(int) (BgL_auxz00_5036);
																				}}
																				BgL_res2986z00_3551 =
																					BgL_res2985z00_3550;
																	}}}
																	BgL_q1z00_1739 = BgL_res2986z00_3551;
															}}
															{	/* Unsafe/base64.scm 229 */
																int BgL_q2z00_1740;

																{	/* Unsafe/base64.scm 230 */
																	unsigned char BgL_arg2446z00_1763;

																	BgL_arg2446z00_1763 =
																		STRING_REF(BgL_sz00_14,
																		(BgL_xz00_1731 + ((long) 2)));
																	{	/* Unsafe/base64.scm 230 */
																		int BgL_res2988z00_3568;

																		{	/* Unsafe/base64.scm 230 */
																			unsigned char BgL_cz00_3556;

																			BgL_cz00_3556 =
																				(char) (BgL_arg2446z00_1763);
																			{	/* Unsafe/base64.scm 230 */
																				long BgL_arg2415z00_3557;

																				BgL_arg2415z00_3557 =
																					((unsigned char) (BgL_cz00_3556));
																				{	/* Unsafe/base64.scm 230 */
																					int BgL_res2987z00_3567;

																					{	/* Unsafe/base64.scm 230 */
																						char BgL_cz00_3559;

																						BgL_cz00_3559 =
																							(signed
																							char) (BgL_arg2415z00_3557);
																						if (((long) (BgL_cz00_3559) <
																								((long) 0)))
																							{	/* Unsafe/base64.scm 230 */
																								obj_t BgL_arg2412z00_3561;

																								unsigned char
																									BgL_arg2414z00_3563;
																								BgL_arg2412z00_3561 =
																									BGl_symbol3036z00zz__base64z00;
																								BgL_arg2414z00_3563 =
																									((long) (BgL_cz00_3559));
																								BgL_res2987z00_3567 =
																									CINT(BGl_errorz00zz__errorz00
																									(BgL_arg2412z00_3561,
																										BGl_string3038z00zz__base64z00,
																										BCHAR
																										(BgL_arg2414z00_3563)));
																							}
																						else
																							{	/* Unsafe/base64.scm 230 */
																								unsigned char BgL_auxz00_5055;

																								{	/* Unsafe/base64.scm 230 */
																									long BgL_auxz00_5056;

																									BgL_auxz00_5056 =
																										(long) (BgL_cz00_3559);
																									BgL_auxz00_5055 =
																										BGL_U8VREF
																										(BGl_bytezd2tablezd2zz__base64z00,
																										BgL_auxz00_5056);
																								}
																								BgL_res2987z00_3567 =
																									(int) (BgL_auxz00_5055);
																					}}
																					BgL_res2988z00_3568 =
																						BgL_res2987z00_3567;
																		}}}
																		BgL_q2z00_1740 = BgL_res2988z00_3568;
																}}
																{	/* Unsafe/base64.scm 230 */
																	int BgL_q3z00_1741;

																	{	/* Unsafe/base64.scm 231 */
																		unsigned char BgL_arg2444z00_1761;

																		BgL_arg2444z00_1761 =
																			STRING_REF(BgL_sz00_14,
																			(BgL_xz00_1731 + ((long) 3)));
																		{	/* Unsafe/base64.scm 231 */
																			int BgL_res2990z00_3585;

																			{	/* Unsafe/base64.scm 231 */
																				unsigned char BgL_cz00_3573;

																				BgL_cz00_3573 =
																					(char) (BgL_arg2444z00_1761);
																				{	/* Unsafe/base64.scm 231 */
																					long BgL_arg2415z00_3574;

																					BgL_arg2415z00_3574 =
																						((unsigned char) (BgL_cz00_3573));
																					{	/* Unsafe/base64.scm 231 */
																						int BgL_res2989z00_3584;

																						{	/* Unsafe/base64.scm 231 */
																							char BgL_cz00_3576;

																							BgL_cz00_3576 =
																								(signed
																								char) (BgL_arg2415z00_3574);
																							if (((long) (BgL_cz00_3576) <
																									((long) 0)))
																								{	/* Unsafe/base64.scm 231 */
																									obj_t BgL_arg2412z00_3578;

																									unsigned char
																										BgL_arg2414z00_3580;
																									BgL_arg2412z00_3578 =
																										BGl_symbol3036z00zz__base64z00;
																									BgL_arg2414z00_3580 =
																										((long) (BgL_cz00_3576));
																									BgL_res2989z00_3584 =
																										CINT
																										(BGl_errorz00zz__errorz00
																										(BgL_arg2412z00_3578,
																											BGl_string3038z00zz__base64z00,
																											BCHAR
																											(BgL_arg2414z00_3580)));
																								}
																							else
																								{	/* Unsafe/base64.scm 231 */
																									unsigned char BgL_auxz00_5074;

																									{	/* Unsafe/base64.scm 231 */
																										long BgL_auxz00_5075;

																										BgL_auxz00_5075 =
																											(long) (BgL_cz00_3576);
																										BgL_auxz00_5074 =
																											BGL_U8VREF
																											(BGl_bytezd2tablezd2zz__base64z00,
																											BgL_auxz00_5075);
																									}
																									BgL_res2989z00_3584 =
																										(int) (BgL_auxz00_5074);
																						}}
																						BgL_res2990z00_3585 =
																							BgL_res2989z00_3584;
																			}}}
																			BgL_q3z00_1741 = BgL_res2990z00_3585;
																	}}
																	{	/* Unsafe/base64.scm 231 */
																		long BgL_v0z00_1742;

																		BgL_v0z00_1742 =
																			(
																			((long) (BgL_q0z00_1736) <<
																				(int) (((long) 2))) |
																			((long) (BgL_q1z00_1739) >>
																				(int) (((long) 4))));
																		{	/* Unsafe/base64.scm 232 */
																			long BgL_v1z00_1743;

																			BgL_v1z00_1743 =
																				(
																				(((long) (BgL_q1z00_1739) <<
																						(int) (((long) 4))) & ((long) 240))
																				| ((long) (BgL_q2z00_1740) >>
																					(int) (((long) 2))));
																			{	/* Unsafe/base64.scm 234 */
																				long BgL_v2z00_1744;

																				BgL_v2z00_1744 =
																					(
																					(((long) (BgL_q2z00_1740) <<
																							(int) (((long) 6))) & ((long)
																							192)) | (long) (BgL_q3z00_1741));
																				{	/* Unsafe/base64.scm 236 */

																					{	/* Unsafe/base64.scm 238 */
																						unsigned char BgL_auxz00_5100;

																						BgL_auxz00_5100 = (BgL_v0z00_1742);
																						STRING_SET(BgL_resz00_1729,
																							BgL_yz00_1732, BgL_auxz00_5100);
																					}
																					{	/* Unsafe/base64.scm 239 */
																						unsigned char BgL_auxz00_5105;

																						long BgL_auxz00_5103;

																						BgL_auxz00_5105 = (BgL_v1z00_1743);
																						BgL_auxz00_5103 =
																							(BgL_yz00_1732 + ((long) 1));
																						STRING_SET(BgL_resz00_1729,
																							BgL_auxz00_5103, BgL_auxz00_5105);
																					}
																					{	/* Unsafe/base64.scm 240 */
																						unsigned char BgL_auxz00_5110;

																						long BgL_auxz00_5108;

																						BgL_auxz00_5110 = (BgL_v2z00_1744);
																						BgL_auxz00_5108 =
																							(BgL_yz00_1732 + ((long) 2));
																						STRING_SET(BgL_resz00_1729,
																							BgL_auxz00_5108, BgL_auxz00_5110);
																					}
																					{
																						long BgL_yz00_5115;

																						long BgL_xz00_5113;

																						BgL_xz00_5113 =
																							(BgL_xz00_1731 + ((long) 4));
																						BgL_yz00_5115 =
																							(BgL_yz00_1732 + ((long) 3));
																						BgL_yz00_1732 = BgL_yz00_5115;
																						BgL_xz00_1731 = BgL_xz00_5113;
																						goto
																							BgL_zc3anonymousza32423ze3z83_1733;
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
								else
									{	/* Unsafe/base64.scm 243 */
										bool_t BgL_testz00_5117;

										if ((BgL_lenz00_1727 > ((long) 2)))
											{	/* Unsafe/base64.scm 243 */
												BgL_testz00_5117 =
													(STRING_REF(BgL_sz00_14,
														(BgL_lenz00_1727 - ((long) 2))) ==
													((unsigned char) '='));
											}
										else
											{	/* Unsafe/base64.scm 243 */
												BgL_testz00_5117 = ((bool_t) 0);
											}
										if (BgL_testz00_5117)
											{	/* Unsafe/base64.scm 244 */
												long BgL_auxz00_5123;

												BgL_auxz00_5123 = (BgL_yz00_1732 - ((long) 2));
												return
													bgl_string_shrink(BgL_resz00_1729, BgL_auxz00_5123);
											}
										else
											{	/* Unsafe/base64.scm 245 */
												bool_t BgL_testz00_5126;

												if ((BgL_lenz00_1727 > ((long) 1)))
													{	/* Unsafe/base64.scm 245 */
														BgL_testz00_5126 =
															(STRING_REF(BgL_sz00_14,
																(BgL_lenz00_1727 - ((long) 1))) ==
															((unsigned char) '='));
													}
												else
													{	/* Unsafe/base64.scm 245 */
														BgL_testz00_5126 = ((bool_t) 0);
													}
												if (BgL_testz00_5126)
													{	/* Unsafe/base64.scm 246 */
														long BgL_auxz00_5132;

														BgL_auxz00_5132 = (BgL_yz00_1732 - ((long) 1));
														return
															bgl_string_shrink(BgL_resz00_1729,
															BgL_auxz00_5132);
													}
												else
													{	/* Unsafe/base64.scm 245 */
														if ((BgL_yz00_1732 < BgL_nlenz00_1728))
															{	/* Unsafe/base64.scm 248 */
																return
																	bgl_string_shrink(BgL_resz00_1729,
																	BgL_yz00_1732);
															}
														else
															{	/* Unsafe/base64.scm 248 */
																return BgL_resz00_1729;
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



/* _base64-decode */
	obj_t BGl__base64zd2decodezd2zz__base64z00(obj_t BgL_envz00_3911,
		obj_t BgL_sz00_3912)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 217 */
			{	/* Unsafe/base64.scm 218 */
				obj_t BgL_auxz00_5138;

				if (STRINGP(BgL_sz00_3912))
					{	/* Unsafe/base64.scm 218 */
						BgL_auxz00_5138 = BgL_sz00_3912;
					}
				else
					{
						obj_t BgL_auxz00_5141;

						BgL_auxz00_5141 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 8345)), BGl_string3049z00zz__base64z00,
							BGl_string3044z00zz__base64z00, BgL_sz00_3912);
						FAILURE(BgL_auxz00_5141, BFALSE, BFALSE);
					}
				return BGl_base64zd2decodezd2zz__base64z00(BgL_auxz00_5138);
			}
		}
	}



/* base64-decode-port */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2decodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_15, obj_t BgL_opz00_16)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 314 */
			{	/* Unsafe/base64.scm 315 */
				obj_t BgL_arg2469z00_3654;

				BgL_arg2469z00_3654 = make_string(((long) 84), ((unsigned char) ' '));
				return
					PROCEDURE_ENTRY(BGl_base64zd2decodezd2grammarz00zz__base64z00)
					(BGl_base64zd2decodezd2grammarz00zz__base64z00, BgL_ipz00_15,
					BgL_opz00_16, BgL_arg2469z00_3654, BINT(((long) 0)),
					BINT(((long) 84)), BGl_proc3050z00zz__base64z00, BEOA);
		}}
	}



/* _base64-decode-port */
	obj_t BGl__base64zd2decodezd2portz00zz__base64z00(obj_t BgL_envz00_3914,
		obj_t BgL_ipz00_3915, obj_t BgL_opz00_3916)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 314 */
			{	/* Unsafe/base64.scm 315 */
				obj_t BgL_auxz00_5158;

				obj_t BgL_auxz00_5151;

				if (OUTPUT_PORTP(BgL_opz00_3916))
					{	/* Unsafe/base64.scm 315 */
						BgL_auxz00_5158 = BgL_opz00_3916;
					}
				else
					{
						obj_t BgL_auxz00_5161;

						BgL_auxz00_5161 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 12508)), BGl_string3051z00zz__base64z00,
							BGl_string3048z00zz__base64z00, BgL_opz00_3916);
						FAILURE(BgL_auxz00_5161, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_3915))
					{	/* Unsafe/base64.scm 315 */
						BgL_auxz00_5151 = BgL_ipz00_3915;
					}
				else
					{
						obj_t BgL_auxz00_5154;

						BgL_auxz00_5154 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 12508)), BGl_string3051z00zz__base64z00,
							BGl_string3047z00zz__base64z00, BgL_ipz00_3915);
						FAILURE(BgL_auxz00_5154, BFALSE, BFALSE);
					}
				return
					BGl_base64zd2decodezd2portz00zz__base64z00(BgL_auxz00_5151,
					BgL_auxz00_5158);
			}
		}
	}



/* <anonymous:2474> */
	obj_t BGl_zc3anonymousza32474ze3z83zz__base64z00(obj_t BgL_envz00_3917,
		obj_t BgL_cz00_3918)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 315 */
			return BBOOL(((bool_t) 0));
		}
	}



/* pem-decode-port */
	BGL_EXPORTED_DEF obj_t BGl_pemzd2decodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_17, obj_t BgL_opz00_18)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 346 */
			{	/* Unsafe/base64.scm 364 */
				obj_t BgL_startz00_1794;

				BgL_startz00_1794 =
					PROCEDURE_ENTRY(BGl_pemzd2markupzd2grammarz00zz__base64z00)
					(BGl_pemzd2markupzd2grammarz00zz__base64z00, BgL_ipz00_17,
					BINT(((long) 0)), BEOA);
				if (bigloo_strcmp_at(BgL_startz00_1794, BGl_string3052z00zz__base64z00,
						((long) 0)))
					{	/* Unsafe/base64.scm 366 */
						obj_t BgL_arg2476z00_1796;

						BgL_arg2476z00_1796 =
							make_string(((long) 84), ((unsigned char) ' '));
						{	/* Unsafe/base64.scm 368 */
							obj_t BgL_zc3anonymousza32481ze3z83_3919;

							BgL_zc3anonymousza32481ze3z83_3919 =
								make_fx_procedure(BGl_zc3anonymousza32481ze3z83zz__base64z00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32481ze3z83_3919,
								(int) (((long) 0)), BgL_ipz00_17);
							PROCEDURE_SET(BgL_zc3anonymousza32481ze3z83_3919,
								(int) (((long) 1)), BgL_startz00_1794);
							return
								PROCEDURE_ENTRY(BGl_base64zd2decodezd2grammarz00zz__base64z00)
								(BGl_base64zd2decodezd2grammarz00zz__base64z00, BgL_ipz00_17,
								BgL_opz00_18, BgL_arg2476z00_1796, BINT(((long) 0)),
								BINT(((long) 84)), BgL_zc3anonymousza32481ze3z83_3919, BEOA);
					}}
				else
					{	/* Llib/object.scm 90 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2485z00_1807;

						{	/* Llib/object.scm 90 */
							obj_t BgL_arg2486z00_1808;

							obj_t BgL_arg2487z00_1809;

							{	/* Llib/object.scm 90 */

								{	/* Llib/object.scm 90 */

									BgL_arg2486z00_1808 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							BgL_arg2487z00_1809 = BGl_symbol3053z00zz__base64z00;
							BgL_arg2485z00_1807 =
								BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE, BFALSE,
								BgL_arg2486z00_1808, BgL_arg2487z00_1809,
								BGl_string3055z00zz__base64z00, BgL_startz00_1794);
						}
						return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2485z00_1807));
					}
			}
		}
	}



/* _pem-decode-port */
	obj_t BGl__pemzd2decodezd2portz00zz__base64z00(obj_t BgL_envz00_3920,
		obj_t BgL_ipz00_3921, obj_t BgL_opz00_3922)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 346 */
			{	/* Unsafe/base64.scm 349 */
				obj_t BgL_auxz00_5195;

				obj_t BgL_auxz00_5188;

				if (OUTPUT_PORTP(BgL_opz00_3922))
					{	/* Unsafe/base64.scm 349 */
						BgL_auxz00_5195 = BgL_opz00_3922;
					}
				else
					{
						obj_t BgL_auxz00_5198;

						BgL_auxz00_5198 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 13791)), BGl_string3056z00zz__base64z00,
							BGl_string3048z00zz__base64z00, BgL_opz00_3922);
						FAILURE(BgL_auxz00_5198, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_3921))
					{	/* Unsafe/base64.scm 349 */
						BgL_auxz00_5188 = BgL_ipz00_3921;
					}
				else
					{
						obj_t BgL_auxz00_5191;

						BgL_auxz00_5191 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 13791)), BGl_string3056z00zz__base64z00,
							BGl_string3047z00zz__base64z00, BgL_ipz00_3921);
						FAILURE(BgL_auxz00_5191, BFALSE, BFALSE);
					}
				return
					BGl_pemzd2decodezd2portz00zz__base64z00(BgL_auxz00_5188,
					BgL_auxz00_5195);
			}
		}
	}



/* <anonymous:2481> */
	obj_t BGl_zc3anonymousza32481ze3z83zz__base64z00(obj_t BgL_envz00_3923,
		obj_t BgL_cz00_3926)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 367 */
			{	/* Unsafe/base64.scm 368 */
				obj_t BgL_ipz00_3924;

				obj_t BgL_startz00_3925;

				BgL_ipz00_3924 = PROCEDURE_REF(BgL_envz00_3923, (int) (((long) 0)));
				BgL_startz00_3925 = PROCEDURE_REF(BgL_envz00_3923, (int) (((long) 1)));
				{
					obj_t BgL_cz00_1801;

					BgL_cz00_1801 = BgL_cz00_3926;
					{
						obj_t BgL_startz00_1812;

						obj_t BgL_cz00_1813;

						BgL_startz00_1812 =
							c_substring(BgL_startz00_3925, ((long) 7),
							STRING_LENGTH(BgL_startz00_3925));
						BgL_cz00_1813 = BgL_cz00_1801;
						if ((CCHAR(BgL_cz00_1813) == ((unsigned char) '-')))
							{	/* Unsafe/base64.scm 354 */
								obj_t BgL_endz00_1816;

								BgL_endz00_1816 =
									PROCEDURE_ENTRY(BGl_pemzd2markupzd2grammarz00zz__base64z00)
									(BGl_pemzd2markupzd2grammarz00zz__base64z00, BgL_ipz00_3924,
									BINT(((long) 1)), BEOA);
								if (bigloo_strcmp_at(BgL_endz00_1816,
										BGl_string3057z00zz__base64z00, ((long) 0)))
									{	/* Unsafe/base64.scm 355 */
										if (bigloo_strcmp(BgL_startz00_1812,
												c_substring(BgL_endz00_1816, ((long) 5),
													STRING_LENGTH(BgL_endz00_1816))))
											{	/* Unsafe/base64.scm 356 */
												return BTRUE;
											}
										else
											{	/* Llib/object.scm 90 */
												BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2493z00_1819;

												{	/* Llib/object.scm 90 */
													obj_t BgL_arg2494z00_1820;

													obj_t BgL_arg2495z00_1821;

													{	/* Llib/object.scm 90 */

														{	/* Llib/object.scm 90 */

															BgL_arg2494z00_1820 =
																BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
														}
													}
													BgL_arg2495z00_1821 = BGl_symbol3029z00zz__base64z00;
													BgL_arg2493z00_1819 =
														BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
														(BFALSE, BFALSE, BgL_arg2494z00_1820,
														BgL_arg2495z00_1821, BGl_string3058z00zz__base64z00,
														BgL_endz00_1816);
												}
												return
													BGl_raisez00zz__errorz00(
													(obj_t) (BgL_arg2493z00_1819));
											}
									}
								else
									{	/* Unsafe/base64.scm 355 */
										return BFALSE;
									}
							}
						else
							{	/* Llib/object.scm 90 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2501z00_1827;

								{	/* Llib/object.scm 90 */
									obj_t BgL_arg2502z00_1828;

									obj_t BgL_arg2503z00_1829;

									obj_t BgL_arg2505z00_1831;

									{	/* Llib/object.scm 90 */

										{	/* Llib/object.scm 90 */

											BgL_arg2502z00_1828 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									BgL_arg2503z00_1829 = BGl_symbol3029z00zz__base64z00;
									{	/* Unsafe/base64.scm 353 */
										obj_t BgL_arg2507z00_1834;

										BgL_arg2507z00_1834 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_3924);
										{	/* Unsafe/base64.scm 353 */
											obj_t BgL_list2508z00_1835;

											{	/* Unsafe/base64.scm 353 */
												obj_t BgL_arg2509z00_1836;

												BgL_arg2509z00_1836 =
													MAKE_PAIR(BgL_arg2507z00_1834, BNIL);
												BgL_list2508z00_1835 =
													MAKE_PAIR(BgL_cz00_1813, BgL_arg2509z00_1836);
											}
											BgL_arg2505z00_1831 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string3031z00zz__base64z00, BgL_list2508z00_1835);
										}
									}
									BgL_arg2501z00_1827 =
										BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
										BFALSE, BgL_arg2502z00_1828, BgL_arg2503z00_1829,
										BGl_string3038z00zz__base64z00, BgL_arg2505z00_1831);
								}
								return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2501z00_1827));
							}
					}
				}
			}
		}
	}



/* pem-read-file */
	BGL_EXPORTED_DEF obj_t BGl_pemzd2readzd2filez00zz__base64z00(obj_t
		BgL_filez00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 378 */
			{	/* Unsafe/base64.scm 379 */
				obj_t BgL_pz00_3689;

				{	/* Unsafe/base64.scm 379 */

					{	/* Unsafe/base64.scm 379 */

						BgL_pz00_3689 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				{	/* Unsafe/base64.scm 379 */
					obj_t BgL_zc3anonymousza32511ze3z83_3927;

					BgL_zc3anonymousza32511ze3z83_3927 =
						make_fx_procedure(BGl_zc3anonymousza32511ze3z83zz__base64z00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3927,
						(int) (((long) 0)), BgL_pz00_3689);
					BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_19, BgL_zc3anonymousza32511ze3z83_3927);
				}
				return bgl_close_output_port(BgL_pz00_3689);
			}
		}
	}



/* _pem-read-file */
	obj_t BGl__pemzd2readzd2filez00zz__base64z00(obj_t BgL_envz00_3928,
		obj_t BgL_filez00_3929)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 378 */
			{	/* Unsafe/base64.scm 379 */
				obj_t BgL_auxz00_5241;

				if (STRINGP(BgL_filez00_3929))
					{	/* Unsafe/base64.scm 379 */
						BgL_auxz00_5241 = BgL_filez00_3929;
					}
				else
					{
						obj_t BgL_auxz00_5244;

						BgL_auxz00_5244 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3042z00zz__base64z00,
							BINT(((long) 14935)), BGl_string3059z00zz__base64z00,
							BGl_string3044z00zz__base64z00, BgL_filez00_3929);
						FAILURE(BgL_auxz00_5244, BFALSE, BFALSE);
					}
				return BGl_pemzd2readzd2filez00zz__base64z00(BgL_auxz00_5241);
			}
		}
	}



/* <anonymous:2511> */
	obj_t BGl_zc3anonymousza32511ze3z83zz__base64z00(obj_t BgL_envz00_3930)
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 381 */
			{	/* Unsafe/base64.scm 379 */
				obj_t BgL_pz00_3931;

				BgL_pz00_3931 = PROCEDURE_REF(BgL_envz00_3930, (int) (((long) 0)));
				{

					{	/* Unsafe/base64.scm 379 */
						obj_t BgL_arg2512z00_3693;

						{	/* Unsafe/base64.scm 379 */
							obj_t BgL_res2993z00_3695;

							{	/* Unsafe/base64.scm 379 */
								obj_t BgL_auxz00_5251;

								BgL_auxz00_5251 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2993z00_3695 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5251);
							}
							BgL_arg2512z00_3693 = BgL_res2993z00_3695;
						}
						return
							BGl_pemzd2decodezd2portz00zz__base64z00(BgL_arg2512z00_3693,
							BgL_pz00_3931);
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__base64z00()
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__base64z00()
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__base64z00()
	{
		AN_OBJECT;
		{	/* Unsafe/base64.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3060z00zz__base64z00));
		}
	}

#ifdef __cplusplus
}
#endif
