/*===========================================================================*/
/*   (Unsafe/sha1.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/sha1.scm -indent -o objs/obj_u/Unsafe/sha1.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__sha1sumzd2portzd2zz__sha1z00(obj_t, obj_t);
	extern obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char);
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_Kz00zz__sha1z00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumz00zz__sha1z00(obj_t);
	static unsigned long BGl_fz00zz__sha1z00(int, unsigned long, unsigned long,
		unsigned long);
	static obj_t BGl_requirezd2initializa7ationz75zz__sha1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2portzd2zz__sha1z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__sha1z00();
	extern obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__sha1sumzd2filezd2zz__sha1z00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__sha1z00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_u32zd2fillz12zc0zz__sha1z00(obj_t, long, unsigned long);
	static obj_t BGl__sha1sumzd2stringzd2zz__sha1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2filezd2zz__sha1z00(obj_t);
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32146ze3z83zz__sha1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t,
		obj_t);
	static obj_t BGl__hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_zc3exitza32150ze3z83zz__sha1z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__sha1z00();
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__sha1sumzd2mmapzd2zz__sha1z00(obj_t, obj_t);
	static obj_t BGl__sha1sumz00zz__sha1z00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t make_vector(int, obj_t);
	extern int BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, long,
		long, obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2mmapzd2zz__sha1z00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_methodzd2initzd2zz__sha1z00();
	static obj_t BGl_sha1z00zz__sha1z00(long, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2envzd2zz__sha1z00,
		BgL_bgl__sha1sumza700za7za7__s2697za7, BGl__sha1sumz00zz__sha1z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2filezd2envz00zz__sha1z00,
		BgL_bgl__sha1sumza7d2fileza72698z00, BGl__sha1sumzd2filezd2zz__sha1z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2685z00zz__sha1z00,
		BgL_bgl_string2685za700za7za7_2699za7,
		"/tmp/bigloo/runtime/Unsafe/sha1.scm", 35);
	      DEFINE_STRING(BGl_string2686z00zz__sha1z00,
		BgL_bgl_string2686za700za7za7_2700za7, "_sha1sum-string", 15);
	      DEFINE_STRING(BGl_string2687z00zz__sha1z00,
		BgL_bgl_string2687za700za7za7_2701za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2688z00zz__sha1z00,
		BgL_bgl_string2688za700za7za7_2702za7, "_sha1sum-mmap", 13);
	      DEFINE_STRING(BGl_string2690z00zz__sha1z00,
		BgL_bgl_string2690za700za7za7_2703za7, "_sha1sum-port", 13);
	      DEFINE_STRING(BGl_string2689z00zz__sha1z00,
		BgL_bgl_string2689za700za7za7_2704za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2691z00zz__sha1z00,
		BgL_bgl_string2691za700za7za7_2705za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2692z00zz__sha1z00,
		BgL_bgl_string2692za700za7za7_2706za7, "_sha1sum-file", 13);
	      DEFINE_STRING(BGl_string2693z00zz__sha1z00,
		BgL_bgl_string2693za700za7za7_2707za7, "sha1sum", 7);
	      DEFINE_STRING(BGl_string2694z00zz__sha1z00,
		BgL_bgl_string2694za700za7za7_2708za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2695z00zz__sha1z00,
		BgL_bgl_string2695za700za7za7_2709za7, "_hmac-sha1sum-string", 20);
	      DEFINE_STRING(BGl_string2696z00zz__sha1z00,
		BgL_bgl_string2696za700za7za7_2710za7, "__sha1", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2mmapzd2envz00zz__sha1z00,
		BgL_bgl__sha1sumza7d2mmapza72711z00, BGl__sha1sumzd2mmapzd2zz__sha1z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2stringzd2envz00zz__sha1z00,
		BgL_bgl__sha1sumza7d2strin2712za7, BGl__sha1sumzd2stringzd2zz__sha1z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hmaczd2sha1sumzd2stringzd2envzd2zz__sha1z00,
		BgL_bgl__hmacza7d2sha1sumza72713z00,
		BGl__hmaczd2sha1sumzd2stringz00zz__sha1z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2portzd2envz00zz__sha1z00,
		BgL_bgl__sha1sumza7d2portza72714z00, BGl__sha1sumzd2portzd2zz__sha1z00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long
		BgL_checksumz00_2788, char *BgL_fromz00_2789)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__sha1z00))
				{
					BGl_requirezd2initializa7ationz75zz__sha1z00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__sha1z00();
					BGl_toplevelzd2initzd2zz__sha1z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__sha1z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 17 */
			{	/* Unsafe/sha1.scm 139 */
				obj_t BgL_vz00_917;

				{	/* Llib/srfi4.scm 235 */

					BgL_vz00_917 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
				}
				{	/* Unsafe/sha1.scm 140 */
					long BgL_arg1922z00_919;

					BgL_arg1922z00_919 =
						((((long) 23170) << (int) (((long) 16))) | ((long) 31129));
					{	/* Unsafe/sha1.scm 140 */
						unsigned long BgL_auxz00_2800;

						BgL_auxz00_2800 = (unsigned long) (BgL_arg1922z00_919);
						BGL_U32VSET(BgL_vz00_917, ((long) 0), BgL_auxz00_2800);
					} BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 141 */
					long BgL_arg1926z00_923;

					BgL_arg1926z00_923 =
						((((long) 28377) << (int) (((long) 16))) | ((long) 60321));
					{	/* Unsafe/sha1.scm 141 */
						unsigned long BgL_auxz00_2806;

						BgL_auxz00_2806 = (unsigned long) (BgL_arg1926z00_923);
						BGL_U32VSET(BgL_vz00_917, ((long) 1), BgL_auxz00_2806);
					} BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 142 */
					long BgL_arg1931z00_927;

					BgL_arg1931z00_927 =
						((((long) 36635) << (int) (((long) 16))) | ((long) 48348));
					{	/* Unsafe/sha1.scm 142 */
						unsigned long BgL_auxz00_2812;

						BgL_auxz00_2812 = (unsigned long) (BgL_arg1931z00_927);
						BGL_U32VSET(BgL_vz00_917, ((long) 2), BgL_auxz00_2812);
					} BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 143 */
					long BgL_arg1938z00_931;

					BgL_arg1938z00_931 =
						((((long) 51810) << (int) (((long) 16))) | ((long) 49622));
					{	/* Unsafe/sha1.scm 143 */
						unsigned long BgL_auxz00_2818;

						BgL_auxz00_2818 = (unsigned long) (BgL_arg1938z00_931);
						BGL_U32VSET(BgL_vz00_917, ((long) 3), BgL_auxz00_2818);
					} BUNSPEC;
				}
				return (BGl_Kz00zz__sha1z00 = BgL_vz00_917, BUNSPEC);
			}
		}
	}



/* u32-fill! */
	obj_t BGl_u32zd2fillz12zc0zz__sha1z00(obj_t BgL_strz00_4,
		long BgL_offsetz00_5, unsigned long BgL_wz00_6)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 115 */
			{	/* Unsafe/sha1.scm 116 */
				obj_t BgL_s1z00_958;

				BgL_s1z00_958 =
					BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
					(long) ((BgL_wz00_6 >> (int) (((long) 16)))), ((long) 16));
				{	/* Unsafe/sha1.scm 116 */
					long BgL_l1z00_959;

					BgL_l1z00_959 = STRING_LENGTH(BgL_s1z00_958);
					{	/* Unsafe/sha1.scm 117 */
						obj_t BgL_s2z00_960;

						BgL_s2z00_960 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							((long) (BgL_wz00_6) &
								((((long) 1) <<
										(int) (((long) 16))) - ((long) 1))), ((long) 16));
						{	/* Unsafe/sha1.scm 118 */
							long BgL_l2z00_961;

							BgL_l2z00_961 = STRING_LENGTH(BgL_s2z00_960);
							{	/* Unsafe/sha1.scm 119 */

								blit_string(BgL_s1z00_958, ((long) 0), BgL_strz00_4,
									(BgL_offsetz00_5 +
										(((long) 4) - BgL_l1z00_959)), BgL_l1z00_959);
								return
									blit_string(BgL_s2z00_960, ((long) 0), BgL_strz00_4,
									(BgL_offsetz00_5 +
										(((long) 4) +
											(((long) 4) - BgL_l2z00_961))), BgL_l2z00_961);
		}}}}}}
	}



/* f */
	unsigned long BGl_fz00zz__sha1z00(int BgL_sz00_19, unsigned long BgL_xz00_20,
		unsigned long BgL_yz00_21, unsigned long BgL_za7za7_22)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 175 */
			{

				switch ((long) (BgL_sz00_19))
					{
					case ((long) 0):

						return
							(unsigned long) (
							(((long) (BgL_xz00_20) &
									(long) (BgL_yz00_21)) ^
								(~((long) (BgL_xz00_20)) & (long) (BgL_za7za7_22))));
						break;
					case ((long) 1):
					case ((long) 3):

						return
							(unsigned long) (
							((long) (BgL_xz00_20) ^
								((long) (BgL_yz00_21) ^ (long) (BgL_za7za7_22))));
						break;
					default:
						{	/* Unsafe/sha1.scm 176 */
							long BgL_auxz00_2855;

							BgL_auxz00_2855 =
								(
								(((long) (BgL_xz00_20) &
										(long) (BgL_yz00_21)) ^
									((long) (BgL_xz00_20) &
										(long) (BgL_za7za7_22))) ^
								((long) (BgL_yz00_21) & (long) (BgL_za7za7_22)));
							return (unsigned long) (BgL_auxz00_2855);
		}}}}
	}



/* sha1 */
	obj_t BGl_sha1z00zz__sha1z00(long BgL_lenz00_23, obj_t BgL_mz00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 187 */
			{	/* Unsafe/sha1.scm 189 */
				obj_t BgL_wz00_999;

				long BgL_nz00_1000;

				BgL_wz00_999 =
					BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 80), BINT(((long) 0)));
				BgL_nz00_1000 = (long) (VECTOR_LENGTH(BgL_mz00_24));
				{	/* Unsafe/sha1.scm 193 */
					obj_t BgL_vecz00_1001;

					{	/* Unsafe/sha1.scm 193 */
						long BgL_arg1994z00_1004;

						BgL_arg1994z00_1004 = (BgL_nz00_1000 - ((long) 1));
						BgL_vecz00_1001 =
							VECTOR_REF(BgL_mz00_24, (int) (BgL_arg1994z00_1004));
					}
					{	/* Unsafe/sha1.scm 194 */
						long BgL_v15z00_1003;

						BgL_v15z00_1003 = (BgL_lenz00_23 * ((long) 8));
						{	/* Unsafe/sha1.scm 195 */

							{	/* Unsafe/sha1.scm 196 */
								unsigned long BgL_auxz00_2878;

								BgL_auxz00_2878 = (unsigned long) (((long) 0));
								BGL_U32VSET(BgL_vecz00_1001, ((long) 14), BgL_auxz00_2878);
							} BUNSPEC;
							{	/* Unsafe/sha1.scm 197 */
								unsigned long BgL_auxz00_2881;

								BgL_auxz00_2881 = (unsigned long) (BgL_v15z00_1003);
								BGL_U32VSET(BgL_vecz00_1001, ((long) 15), BgL_auxz00_2881);
							} BUNSPEC;
				}}}
				{	/* Unsafe/sha1.scm 200 */
					unsigned long BgL_h0z00_1005;

					BgL_h0z00_1005 =
						(unsigned long) (
						((((long) 26437) << (int) (((long) 16))) | ((long) 8961)));
					{	/* Unsafe/sha1.scm 200 */
						unsigned long BgL_h1z00_1006;

						BgL_h1z00_1006 =
							(unsigned long) (
							((((long) 61389) << (int) (((long) 16))) | ((long) 43913)));
						{	/* Unsafe/sha1.scm 201 */
							unsigned long BgL_h2z00_1007;

							BgL_h2z00_1007 =
								(unsigned long) (
								((((long) 39098) << (int) (((long) 16))) | ((long) 56574)));
							{	/* Unsafe/sha1.scm 202 */
								unsigned long BgL_h3z00_1008;

								BgL_h3z00_1008 =
									(unsigned long) (
									((((long) 4146) << (int) (((long) 16))) | ((long) 21622)));
								{	/* Unsafe/sha1.scm 203 */
									unsigned long BgL_h4z00_1009;

									BgL_h4z00_1009 =
										(unsigned long) (
										((((long) 50130) << (int) (((long) 16))) | ((long) 57840)));
									{	/* Unsafe/sha1.scm 204 */

										{
											long BgL_iz00_1011;

											BgL_iz00_1011 = ((long) 0);
										BgL_zc3anonymousza31995ze3z83_1012:
											if ((BgL_iz00_1011 < BgL_nz00_1000))
												{	/* Unsafe/sha1.scm 207 */
													{
														long BgL_tz00_1015;

														BgL_tz00_1015 = ((long) 0);
													BgL_zc3anonymousza31997ze3z83_1016:
														if ((BgL_tz00_1015 < ((long) 16)))
															{	/* Unsafe/sha1.scm 210 */
																{	/* Unsafe/sha1.scm 211 */
																	unsigned long BgL_arg1999z00_1018;

																	{	/* Unsafe/sha1.scm 211 */
																		unsigned long BgL_res2639z00_2117;

																		{	/* Unsafe/sha1.scm 211 */
																			int BgL_iz00_2112;

																			int BgL_jz00_2113;

																			BgL_iz00_2112 = (int) (BgL_iz00_1011);
																			BgL_jz00_2113 = (int) (BgL_tz00_1015);
																			{	/* Unsafe/sha1.scm 211 */
																				long BgL_auxz00_2912;

																				obj_t BgL_auxz00_2910;

																				BgL_auxz00_2912 =
																					(long) (BgL_jz00_2113);
																				BgL_auxz00_2910 =
																					VECTOR_REF(BgL_mz00_24,
																					BgL_iz00_2112);
																				BgL_res2639z00_2117 =
																					BGL_U32VREF(BgL_auxz00_2910,
																					BgL_auxz00_2912);
																		}}
																		BgL_arg1999z00_1018 = BgL_res2639z00_2117;
																	}
																	BGL_U32VSET(BgL_wz00_999, BgL_tz00_1015,
																		BgL_arg1999z00_1018);
																	BUNSPEC;
																}
																{
																	long BgL_tz00_2916;

																	BgL_tz00_2916 = (BgL_tz00_1015 + ((long) 1));
																	BgL_tz00_1015 = BgL_tz00_2916;
																	goto BgL_zc3anonymousza31997ze3z83_1016;
																}
															}
														else
															{	/* Unsafe/sha1.scm 210 */
																((bool_t) 0);
															}
													}
													{
														long BgL_tz00_1022;

														BgL_tz00_1022 = ((long) 16);
													BgL_zc3anonymousza32001ze3z83_1023:
														if ((BgL_tz00_1022 < ((long) 80)))
															{	/* Unsafe/sha1.scm 212 */
																{	/* Unsafe/sha1.scm 213 */
																	unsigned long BgL_w0z00_1025;

																	{	/* Unsafe/sha1.scm 213 */
																		long BgL_auxz00_2920;

																		BgL_auxz00_2920 =
																			(BgL_tz00_1022 - ((long) 3));
																		BgL_w0z00_1025 =
																			BGL_U32VREF(BgL_wz00_999,
																			BgL_auxz00_2920);
																	}
																	{	/* Unsafe/sha1.scm 213 */
																		unsigned long BgL_w1z00_1026;

																		{	/* Unsafe/sha1.scm 214 */
																			long BgL_auxz00_2923;

																			BgL_auxz00_2923 =
																				(BgL_tz00_1022 - ((long) 8));
																			BgL_w1z00_1026 =
																				BGL_U32VREF(BgL_wz00_999,
																				BgL_auxz00_2923);
																		}
																		{	/* Unsafe/sha1.scm 214 */
																			unsigned long BgL_w2z00_1027;

																			{	/* Unsafe/sha1.scm 215 */
																				long BgL_auxz00_2926;

																				BgL_auxz00_2926 =
																					(BgL_tz00_1022 - ((long) 14));
																				BgL_w2z00_1027 =
																					BGL_U32VREF(BgL_wz00_999,
																					BgL_auxz00_2926);
																			}
																			{	/* Unsafe/sha1.scm 215 */
																				unsigned long BgL_w3z00_1028;

																				{	/* Unsafe/sha1.scm 216 */
																					long BgL_auxz00_2929;

																					BgL_auxz00_2929 =
																						(BgL_tz00_1022 - ((long) 16));
																					BgL_w3z00_1028 =
																						BGL_U32VREF(BgL_wz00_999,
																						BgL_auxz00_2929);
																				}
																				{	/* Unsafe/sha1.scm 216 */
																					unsigned long BgL_vz00_1029;

																					BgL_vz00_1029 =
																						(unsigned long) (
																						((long) (BgL_w0z00_1025) ^
																							((long) (BgL_w1z00_1026) ^
																								((long) (BgL_w2z00_1027) ^
																									(long) (BgL_w3z00_1028)))));
																					{	/* Unsafe/sha1.scm 217 */

																						{	/* Unsafe/sha1.scm 218 */
																							unsigned long BgL_arg2003z00_1030;

																							{	/* Unsafe/sha1.scm 218 */
																								int BgL_nz00_2137;

																								BgL_nz00_2137 =
																									(int) (((long) 1));
																								BgL_arg2003z00_1030 =
																									(unsigned long) (
																									(((long) (BgL_vz00_1029) <<
																											(int) (
																												(long) (BgL_nz00_2137)))
																										| (long) ((BgL_vz00_1029 >>
																												(int) ((((long) 32) -
																														(long)
																														(BgL_nz00_2137)))))));
																							}
																							BGL_U32VSET(BgL_wz00_999,
																								BgL_tz00_1022,
																								BgL_arg2003z00_1030);
																							BUNSPEC;
																}}}}}}}
																{
																	long BgL_tz00_2953;

																	BgL_tz00_2953 = (BgL_tz00_1022 + ((long) 1));
																	BgL_tz00_1022 = BgL_tz00_2953;
																	goto BgL_zc3anonymousza32001ze3z83_1023;
																}
															}
														else
															{	/* Unsafe/sha1.scm 212 */
																((bool_t) 0);
															}
													}
													{	/* Unsafe/sha1.scm 222 */
														unsigned long BgL_az00_1039;

														unsigned long BgL_bz00_1040;

														unsigned long BgL_cz00_1041;

														unsigned long BgL_dz00_1042;

														unsigned long BgL_ez00_1043;

														BgL_az00_1039 = BgL_h0z00_1005;
														BgL_bz00_1040 = BgL_h1z00_1006;
														BgL_cz00_1041 = BgL_h2z00_1007;
														BgL_dz00_1042 = BgL_h3z00_1008;
														BgL_ez00_1043 = BgL_h4z00_1009;
														{
															long BgL_tz00_1045;

															BgL_tz00_1045 = ((long) 0);
														BgL_zc3anonymousza32011ze3z83_1046:
															if ((BgL_tz00_1045 < ((long) 80)))
																{	/* Unsafe/sha1.scm 229 */
																	{	/* Unsafe/sha1.scm 230 */
																		long BgL_sz00_1048;

																		BgL_sz00_1048 =
																			(BgL_tz00_1045 / ((long) 20));
																		{	/* Unsafe/sha1.scm 230 */
																			unsigned long BgL_a5z00_1049;

																			{	/* Unsafe/sha1.scm 231 */
																				unsigned long BgL_res2641z00_2169;

																				{	/* Unsafe/sha1.scm 231 */
																					unsigned long BgL_xz00_2156;

																					int BgL_nz00_2157;

																					BgL_xz00_2156 = BgL_az00_1039;
																					BgL_nz00_2157 = (int) (((long) 5));
																					BgL_res2641z00_2169 =
																						(unsigned long) (
																						(((long) (BgL_xz00_2156) <<
																								(int) (
																									(long) (BgL_nz00_2157))) |
																							(long) (
																								(BgL_xz00_2156 >>
																									(int) (
																										(((long) 32) -
																											(long)
																											(BgL_nz00_2157)))))));
																				}
																				BgL_a5z00_1049 = BgL_res2641z00_2169;
																			}
																			{	/* Unsafe/sha1.scm 231 */
																				unsigned long BgL_fz00_1050;

																				BgL_fz00_1050 =
																					BGl_fz00zz__sha1z00(
																					(int) (BgL_sz00_1048), BgL_bz00_1040,
																					BgL_cz00_1041, BgL_dz00_1042);
																				{	/* Unsafe/sha1.scm 232 */
																					unsigned long BgL_kz00_1051;

																					BgL_kz00_1051 =
																						BGL_U32VREF(BGl_Kz00zz__sha1z00,
																						BgL_sz00_1048);
																					{	/* Unsafe/sha1.scm 233 */
																						unsigned long BgL_wz00_1052;

																						BgL_wz00_1052 =
																							BGL_U32VREF(BgL_wz00_999,
																							BgL_tz00_1045);
																						{	/* Unsafe/sha1.scm 234 */
																							unsigned long BgL_yz00_1053;

																							{	/* Unsafe/sha1.scm 235 */
																								long BgL_arg2017z00_1057;

																								BgL_arg2017z00_1057 =
																									(
																									(long) (BgL_fz00_1050) +
																									((long) (BgL_ez00_1043) +
																										((long) (BgL_kz00_1051) +
																											(long) (BgL_wz00_1052))));
																								BgL_yz00_1053 =
																									(unsigned long) (
																									((long) (BgL_a5z00_1049) +
																										BgL_arg2017z00_1057));
																							}
																							{	/* Unsafe/sha1.scm 235 */

																								BgL_ez00_1043 = BgL_dz00_1042;
																								BgL_dz00_1042 = BgL_cz00_1041;
																								{	/* Unsafe/sha1.scm 238 */
																									unsigned long
																										BgL_res2642z00_2191;
																									{	/* Unsafe/sha1.scm 238 */
																										unsigned long BgL_xz00_2178;

																										int BgL_nz00_2179;

																										BgL_xz00_2178 =
																											BgL_bz00_1040;
																										BgL_nz00_2179 =
																											(int) (((long) 30));
																										BgL_res2642z00_2191 =
																											(unsigned
																											long) ((((long)
																													(BgL_xz00_2178) <<
																													(int) ((long)
																														(BgL_nz00_2179))) |
																												(long) ((BgL_xz00_2178
																														>> (int) ((((long)
																																	32) -
																																(long)
																																(BgL_nz00_2179)))))));
																									}
																									BgL_cz00_1041 =
																										BgL_res2642z00_2191;
																								}
																								BgL_bz00_1040 = BgL_az00_1039;
																								BgL_az00_1039 =
																									(unsigned long) (
																									((long) (BgL_yz00_1053) &
																										((((long) 65535) <<
																												(int) (((long) 16))) |
																											((long) 65535))));
																	}}}}}}}
																	{
																		long BgL_tz00_3002;

																		BgL_tz00_3002 =
																			(BgL_tz00_1045 + ((long) 1));
																		BgL_tz00_1045 = BgL_tz00_3002;
																		goto BgL_zc3anonymousza32011ze3z83_1046;
																	}
																}
															else
																{	/* Unsafe/sha1.scm 229 */
																	((bool_t) 0);
																}
														}
														BgL_h0z00_1005 =
															(unsigned long) (
															(((long) (BgL_h0z00_1005) +
																	(long) (BgL_az00_1039)) &
																((((long) 65535) <<
																		(int) (((long) 16))) | ((long) 65535))));
														BgL_h1z00_1006 =
															(unsigned long) (
															(((long) (BgL_h1z00_1006) +
																	(long) (BgL_bz00_1040)) &
																((((long) 65535) <<
																		(int) (((long) 16))) | ((long) 65535))));
														BgL_h2z00_1007 =
															(unsigned long) (
															(((long) (BgL_h2z00_1007) +
																	(long) (BgL_cz00_1041)) &
																((((long) 65535) <<
																		(int) (((long) 16))) | ((long) 65535))));
														BgL_h3z00_1008 =
															(unsigned long) (
															(((long) (BgL_h3z00_1008) +
																	(long) (BgL_dz00_1042)) &
																((((long) 65535) <<
																		(int) (((long) 16))) | ((long) 65535))));
														BgL_h4z00_1009 =
															(unsigned long) (
															(((long) (BgL_h4z00_1009) +
																	(long) (BgL_ez00_1043)) &
																((((long) 65535) <<
																		(int) (((long) 16))) | ((long) 65535))));
													}
													{
														long BgL_iz00_3044;

														BgL_iz00_3044 = (BgL_iz00_1011 + ((long) 1));
														BgL_iz00_1011 = BgL_iz00_3044;
														goto BgL_zc3anonymousza31995ze3z83_1012;
													}
												}
											else
												{	/* Unsafe/sha1.scm 207 */
													((bool_t) 0);
												}
										}
										{	/* Unsafe/sha1.scm 248 */
											unsigned long BgL_w0z00_2242;

											unsigned long BgL_w1z00_2243;

											unsigned long BgL_w2z00_2244;

											unsigned long BgL_w3z00_2245;

											unsigned long BgL_w4z00_2246;

											BgL_w0z00_2242 = BgL_h0z00_1005;
											BgL_w1z00_2243 = BgL_h1z00_1006;
											BgL_w2z00_2244 = BgL_h2z00_1007;
											BgL_w3z00_2245 = BgL_h3z00_1008;
											BgL_w4z00_2246 = BgL_h4z00_1009;
											{	/* Unsafe/sha1.scm 248 */
												obj_t BgL_rz00_2247;

												{	/* Unsafe/sha1.scm 248 */
													obj_t BgL_list1977z00_2248;

													BgL_list1977z00_2248 =
														MAKE_PAIR(BCHAR(((unsigned char) '0')), BNIL);
													{	/* Unsafe/sha1.scm 248 */
														obj_t BgL_res2643z00_2255;

														{	/* Unsafe/sha1.scm 248 */
															obj_t BgL_arg2481z00_2252;

															BgL_arg2481z00_2252 = CAR(BgL_list1977z00_2248);
															BgL_res2643z00_2255 =
																make_string(((long) 40),
																CCHAR(BgL_arg2481z00_2252));
														}
														BgL_rz00_2247 = BgL_res2643z00_2255;
												}}
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2247,
													((long) 0), BgL_w0z00_2242);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2247,
													((long) 8), BgL_w1z00_2243);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2247,
													((long) 16), BgL_w2z00_2244);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2247,
													((long) 24), BgL_w3z00_2245);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2247,
													((long) 32), BgL_w4z00_2246);
												return BgL_rz00_2247;
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



/* sha1sum-string */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t BgL_strz00_25)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 253 */
			{	/* Unsafe/sha1.scm 256 */
				long BgL_lenz00_1094;

				BgL_lenz00_1094 = STRING_LENGTH(BgL_strz00_25);
				{	/* Unsafe/sha1.scm 256 */
					long BgL_lz00_1095;

					{	/* Unsafe/sha1.scm 257 */
						long BgL_auxz00_3057;

						{	/* Unsafe/sha1.scm 257 */
							obj_t BgL_auxz00_3058;

							{	/* Unsafe/sha1.scm 257 */
								obj_t BgL_za7za7_2257;

								BgL_za7za7_2257 =
									BGl_ceilingz00zz__r4_numbers_6_5z00
									(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1094),
										BINT(((long) 4))));
								if (REALP(BgL_za7za7_2257))
									{	/* Unsafe/sha1.scm 257 */
										BgL_auxz00_3058 =
											BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_2257)));
									}
								else
									{	/* Unsafe/sha1.scm 257 */
										BgL_auxz00_3058 = BgL_za7za7_2257;
									}
							}
							BgL_auxz00_3057 = (long) CINT(BgL_auxz00_3058);
						}
						BgL_lz00_1095 = (BgL_auxz00_3057 + ((long) 2));
					}
					{	/* Unsafe/sha1.scm 257 */
						long BgL_nz00_1096;

						{	/* Unsafe/sha1.scm 258 */
							obj_t BgL_za7za7_2263;

							BgL_za7za7_2263 =
								BGl_ceilingz00zz__r4_numbers_6_5z00
								(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lz00_1095),
									BINT(((long) 16))));
							if (REALP(BgL_za7za7_2263))
								{	/* Unsafe/sha1.scm 258 */
									BgL_nz00_1096 = (long) (REAL_TO_DOUBLE(BgL_za7za7_2263));
								}
							else
								{	/* Unsafe/sha1.scm 258 */
									BgL_nz00_1096 = (long) CINT(BgL_za7za7_2263);
						}}
						{	/* Unsafe/sha1.scm 258 */
							obj_t BgL_mz00_1097;

							BgL_mz00_1097 = make_vector((int) (BgL_nz00_1096), BUNSPEC);
							{	/* Unsafe/sha1.scm 259 */

								{
									long BgL_iz00_1099;

									BgL_iz00_1099 = ((long) 0);
								BgL_zc3anonymousza32058ze3z83_1100:
									if ((BgL_iz00_1099 < BgL_nz00_1096))
										{	/* Unsafe/sha1.scm 261 */
											{	/* Unsafe/sha1.scm 262 */
												obj_t BgL_vecz00_1102;

												{	/* Llib/srfi4.scm 235 */

													BgL_vecz00_1102 =
														BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
														BINT(((long) 0)));
												}
												{
													long BgL_jz00_1104;

													BgL_jz00_1104 = ((long) 0);
												BgL_zc3anonymousza32060ze3z83_1105:
													if ((BgL_jz00_1104 < ((long) 16)))
														{	/* Unsafe/sha1.scm 263 */
															{	/* Unsafe/sha1.scm 264 */
																int BgL_nz00_1107;

																BgL_nz00_1107 =
																	(int) (
																	((BgL_iz00_1099 * ((long) 64)) +
																		(BgL_jz00_1104 * ((long) 4))));
																{	/* Unsafe/sha1.scm 264 */
																	unsigned long BgL_v0z00_1108;

																	{	/* Unsafe/sha1.scm 265 */
																		long BgL_lenz00_2280;

																		BgL_lenz00_2280 =
																			STRING_LENGTH(BgL_strz00_25);
																		if (
																			((long) (BgL_nz00_1107) <
																				BgL_lenz00_2280))
																			{	/* Unsafe/sha1.scm 265 */
																				BgL_v0z00_1108 =
																					(unsigned long) (
																					(STRING_REF(BgL_strz00_25,
																							(long) (BgL_nz00_1107))));
																			}
																		else
																			{	/* Unsafe/sha1.scm 265 */
																				if (
																					((long) (BgL_nz00_1107) ==
																						BgL_lenz00_2280))
																					{	/* Unsafe/sha1.scm 265 */
																						BgL_v0z00_1108 =
																							(unsigned long) (((long) 128));
																					}
																				else
																					{	/* Unsafe/sha1.scm 265 */
																						BgL_v0z00_1108 =
																							(unsigned long) (((long) 0));
																	}}}
																	{	/* Unsafe/sha1.scm 265 */
																		unsigned long BgL_v1z00_1109;

																		{	/* Unsafe/sha1.scm 266 */
																			int BgL_iz00_2296;

																			BgL_iz00_2296 =
																				(int) (
																				((long) (BgL_nz00_1107) + ((long) 1)));
																			{	/* Unsafe/sha1.scm 266 */
																				long BgL_lenz00_2297;

																				BgL_lenz00_2297 =
																					STRING_LENGTH(BgL_strz00_25);
																				if (
																					((long) (BgL_iz00_2296) <
																						BgL_lenz00_2297))
																					{	/* Unsafe/sha1.scm 266 */
																						BgL_v1z00_1109 =
																							(unsigned long) (
																							(STRING_REF(BgL_strz00_25,
																									(long) (BgL_iz00_2296))));
																					}
																				else
																					{	/* Unsafe/sha1.scm 266 */
																						if (
																							((long) (BgL_iz00_2296) ==
																								BgL_lenz00_2297))
																							{	/* Unsafe/sha1.scm 266 */
																								BgL_v1z00_1109 =
																									(unsigned long) (((long)
																										128));
																							}
																						else
																							{	/* Unsafe/sha1.scm 266 */
																								BgL_v1z00_1109 =
																									(unsigned long) (((long) 0));
																		}}}}
																		{	/* Unsafe/sha1.scm 266 */
																			unsigned long BgL_v2z00_1110;

																			{	/* Unsafe/sha1.scm 267 */
																				int BgL_iz00_2313;

																				BgL_iz00_2313 =
																					(int) (
																					((long) (BgL_nz00_1107) +
																						((long) 2)));
																				{	/* Unsafe/sha1.scm 267 */
																					long BgL_lenz00_2314;

																					BgL_lenz00_2314 =
																						STRING_LENGTH(BgL_strz00_25);
																					if (
																						((long) (BgL_iz00_2313) <
																							BgL_lenz00_2314))
																						{	/* Unsafe/sha1.scm 267 */
																							BgL_v2z00_1110 =
																								(unsigned long) (
																								(STRING_REF(BgL_strz00_25,
																										(long) (BgL_iz00_2313))));
																						}
																					else
																						{	/* Unsafe/sha1.scm 267 */
																							if (
																								((long) (BgL_iz00_2313) ==
																									BgL_lenz00_2314))
																								{	/* Unsafe/sha1.scm 267 */
																									BgL_v2z00_1110 =
																										(unsigned long) (((long)
																											128));
																								}
																							else
																								{	/* Unsafe/sha1.scm 267 */
																									BgL_v2z00_1110 =
																										(unsigned long) (((long)
																											0));
																			}}}}
																			{	/* Unsafe/sha1.scm 267 */
																				unsigned long BgL_v3z00_1111;

																				{	/* Unsafe/sha1.scm 268 */
																					int BgL_iz00_2330;

																					BgL_iz00_2330 =
																						(int) (
																						((long) (BgL_nz00_1107) +
																							((long) 3)));
																					{	/* Unsafe/sha1.scm 268 */
																						long BgL_lenz00_2331;

																						BgL_lenz00_2331 =
																							STRING_LENGTH(BgL_strz00_25);
																						if (
																							((long) (BgL_iz00_2330) <
																								BgL_lenz00_2331))
																							{	/* Unsafe/sha1.scm 268 */
																								BgL_v3z00_1111 =
																									(unsigned long) (
																									(STRING_REF(BgL_strz00_25,
																											(long) (BgL_iz00_2330))));
																							}
																						else
																							{	/* Unsafe/sha1.scm 268 */
																								if (
																									((long) (BgL_iz00_2330) ==
																										BgL_lenz00_2331))
																									{	/* Unsafe/sha1.scm 268 */
																										BgL_v3z00_1111 =
																											(unsigned long) (((long)
																												128));
																									}
																								else
																									{	/* Unsafe/sha1.scm 268 */
																										BgL_v3z00_1111 =
																											(unsigned long) (((long)
																												0));
																				}}}}
																				{	/* Unsafe/sha1.scm 268 */
																					long BgL_vz00_1112;

																					BgL_vz00_1112 =
																						(
																						((((long) (BgL_v0z00_1108) <<
																									(int) (((long) 8))) |
																								(long) (BgL_v1z00_1109)) <<
																							(int) (((long) 16))) |
																						(((long) (BgL_v2z00_1110) <<
																								(int) (((long) 8))) |
																							(long) (BgL_v3z00_1111)));
																					{	/* Unsafe/sha1.scm 269 */

																						{	/* Unsafe/sha1.scm 270 */
																							unsigned long BgL_auxz00_3165;

																							BgL_auxz00_3165 =
																								(unsigned long) (BgL_vz00_1112);
																							BGL_U32VSET(BgL_vecz00_1102,
																								BgL_jz00_1104, BgL_auxz00_3165);
																						} BUNSPEC;
															}}}}}}}
															VECTOR_SET(BgL_mz00_1097,
																(int) (BgL_iz00_1099), BgL_vecz00_1102);
															{
																long BgL_jz00_3170;

																BgL_jz00_3170 = (BgL_jz00_1104 + ((long) 1));
																BgL_jz00_1104 = BgL_jz00_3170;
																goto BgL_zc3anonymousza32060ze3z83_1105;
															}
														}
													else
														{	/* Unsafe/sha1.scm 263 */
															((bool_t) 0);
														}
												}
											}
											{
												long BgL_iz00_3172;

												BgL_iz00_3172 = (BgL_iz00_1099 + ((long) 1));
												BgL_iz00_1099 = BgL_iz00_3172;
												goto BgL_zc3anonymousza32058ze3z83_1100;
											}
										}
									else
										{	/* Unsafe/sha1.scm 261 */
											((bool_t) 0);
										}
								}
								return BGl_sha1z00zz__sha1z00(BgL_lenz00_1094, BgL_mz00_1097);
							}
						}
					}
				}
			}
		}
	}



/* _sha1sum-string */
	obj_t BGl__sha1sumzd2stringzd2zz__sha1z00(obj_t BgL_envz00_2759,
		obj_t BgL_strz00_2760)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 253 */
			{	/* Unsafe/sha1.scm 256 */
				obj_t BgL_auxz00_3175;

				if (STRINGP(BgL_strz00_2760))
					{	/* Unsafe/sha1.scm 256 */
						BgL_auxz00_3175 = BgL_strz00_2760;
					}
				else
					{
						obj_t BgL_auxz00_3178;

						BgL_auxz00_3178 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 10019)), BGl_string2686z00zz__sha1z00,
							BGl_string2687z00zz__sha1z00, BgL_strz00_2760);
						FAILURE(BgL_auxz00_3178, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_auxz00_3175);
			}
		}
	}



/* sha1sum-mmap */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2mmapzd2zz__sha1z00(obj_t BgL_strz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 278 */
			{	/* Unsafe/sha1.scm 281 */
				long BgL_lenz00_1137;

				{	/* Unsafe/sha1.scm 281 */
					long BgL_auxz00_3183;

					BgL_auxz00_3183 = BGL_MMAP_LENGTH(BgL_strz00_26);
					BgL_lenz00_1137 = ELONG_TO_LONG(BgL_auxz00_3183);
				}
				{	/* Unsafe/sha1.scm 281 */
					long BgL_lz00_1138;

					{	/* Unsafe/sha1.scm 282 */
						long BgL_auxz00_3186;

						{	/* Unsafe/sha1.scm 282 */
							obj_t BgL_auxz00_3187;

							{	/* Unsafe/sha1.scm 282 */
								obj_t BgL_za7za7_2364;

								BgL_za7za7_2364 =
									BGl_ceilingz00zz__r4_numbers_6_5z00
									(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1137),
										BINT(((long) 4))));
								if (REALP(BgL_za7za7_2364))
									{	/* Unsafe/sha1.scm 282 */
										BgL_auxz00_3187 =
											BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_2364)));
									}
								else
									{	/* Unsafe/sha1.scm 282 */
										BgL_auxz00_3187 = BgL_za7za7_2364;
									}
							}
							BgL_auxz00_3186 = (long) CINT(BgL_auxz00_3187);
						}
						BgL_lz00_1138 = (BgL_auxz00_3186 + ((long) 2));
					}
					{	/* Unsafe/sha1.scm 282 */
						long BgL_nz00_1139;

						{	/* Unsafe/sha1.scm 283 */
							obj_t BgL_za7za7_2370;

							BgL_za7za7_2370 =
								BGl_ceilingz00zz__r4_numbers_6_5z00
								(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lz00_1138),
									BINT(((long) 16))));
							if (REALP(BgL_za7za7_2370))
								{	/* Unsafe/sha1.scm 283 */
									BgL_nz00_1139 = (long) (REAL_TO_DOUBLE(BgL_za7za7_2370));
								}
							else
								{	/* Unsafe/sha1.scm 283 */
									BgL_nz00_1139 = (long) CINT(BgL_za7za7_2370);
						}}
						{	/* Unsafe/sha1.scm 283 */
							obj_t BgL_mz00_1140;

							BgL_mz00_1140 = make_vector((int) (BgL_nz00_1139), BUNSPEC);
							{	/* Unsafe/sha1.scm 284 */

								{
									long BgL_iz00_1142;

									BgL_iz00_1142 = ((long) 0);
								BgL_zc3anonymousza32085ze3z83_1143:
									if ((BgL_iz00_1142 < BgL_nz00_1139))
										{	/* Unsafe/sha1.scm 286 */
											{	/* Unsafe/sha1.scm 287 */
												obj_t BgL_vecz00_1145;

												{	/* Llib/srfi4.scm 235 */

													BgL_vecz00_1145 =
														BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
														BINT(((long) 0)));
												}
												{
													long BgL_jz00_1147;

													BgL_jz00_1147 = ((long) 0);
												BgL_zc3anonymousza32087ze3z83_1148:
													if ((BgL_jz00_1147 < ((long) 16)))
														{	/* Unsafe/sha1.scm 288 */
															{	/* Unsafe/sha1.scm 289 */
																long BgL_nz00_1150;

																{	/* Unsafe/sha1.scm 289 */
																	long BgL_auxz00_3216;

																	BgL_auxz00_3216 =
																		(
																		(BgL_iz00_1142 * ((long) 64)) +
																		(BgL_jz00_1147 * ((long) 4)));
																	BgL_nz00_1150 =
																		LONG_TO_ELONG(BgL_auxz00_3216);
																}
																{	/* Unsafe/sha1.scm 289 */
																	unsigned long BgL_v0z00_1151;

																	{	/* Unsafe/sha1.scm 290 */
																		unsigned long BgL_res2652z00_2407;

																		{	/* Unsafe/sha1.scm 290 */
																			long BgL_lenz00_2387;

																			BgL_lenz00_2387 =
																				BGL_MMAP_LENGTH(BgL_strz00_26);
																			{	/* Unsafe/sha1.scm 290 */
																				bool_t BgL_testz00_3222;

																				{	/* Unsafe/sha1.scm 290 */
																					long BgL_n1z00_2392;

																					long BgL_n2z00_2393;

																					BgL_n1z00_2392 =
																						ELONG_TO_LONG(BgL_nz00_1150);
																					BgL_n2z00_2393 =
																						ELONG_TO_LONG(BgL_lenz00_2387);
																					BgL_testz00_3222 =
																						(BgL_n1z00_2392 < BgL_n2z00_2393);
																				}
																				if (BgL_testz00_3222)
																					{	/* Unsafe/sha1.scm 290 */
																						unsigned char BgL_arg1982z00_2389;

																						{	/* Unsafe/sha1.scm 290 */
																							unsigned char BgL_res2651z00_2403;

																							{	/* Unsafe/sha1.scm 290 */
																								unsigned char BgL_cz00_2396;

																								BgL_cz00_2396 =
																									BGL_MMAP_REF(BgL_strz00_26,
																									BgL_nz00_1150);
																								{	/* Unsafe/sha1.scm 290 */
																									long BgL_arg2435z00_2397;

																									BgL_arg2435z00_2397 =
																										(BgL_nz00_1150 +
																										((long) 1));
																									{	/* Unsafe/sha1.scm 290 */
																										long BgL_res2650z00_2402;

																										BGL_MMAP_RP_SET
																											(BgL_strz00_26,
																											BgL_arg2435z00_2397);
																										BUNSPEC;
																										BgL_res2650z00_2402 =
																											BgL_arg2435z00_2397;
																										BgL_res2650z00_2402;
																								}}
																								BgL_res2651z00_2403 =
																									BgL_cz00_2396;
																							}
																							BgL_arg1982z00_2389 =
																								BgL_res2651z00_2403;
																						}
																						BgL_res2652z00_2407 =
																							(unsigned long) (
																							(BgL_arg1982z00_2389));
																					}
																				else
																					{	/* Unsafe/sha1.scm 290 */
																						bool_t BgL_testz00_3231;

																						{	/* Unsafe/sha1.scm 290 */
																							long BgL_n1z00_2405;

																							long BgL_n2z00_2406;

																							BgL_n1z00_2405 =
																								ELONG_TO_LONG(BgL_nz00_1150);
																							BgL_n2z00_2406 =
																								ELONG_TO_LONG(BgL_lenz00_2387);
																							BgL_testz00_3231 =
																								(BgL_n1z00_2405 ==
																								BgL_n2z00_2406);
																						}
																						if (BgL_testz00_3231)
																							{	/* Unsafe/sha1.scm 290 */
																								BgL_res2652z00_2407 =
																									(unsigned long) (((long)
																										128));
																							}
																						else
																							{	/* Unsafe/sha1.scm 290 */
																								BgL_res2652z00_2407 =
																									(unsigned long) (((long) 0));
																		}}}}
																		BgL_v0z00_1151 = BgL_res2652z00_2407;
																	}
																	{	/* Unsafe/sha1.scm 290 */
																		unsigned long BgL_v1z00_1152;

																		{	/* Unsafe/sha1.scm 291 */
																			long BgL_arg2097z00_1164;

																			{	/* Unsafe/sha1.scm 291 */
																				long BgL_za71za7_2408;

																				BgL_za71za7_2408 =
																					ELONG_TO_LONG(BgL_nz00_1150);
																				BgL_arg2097z00_1164 =
																					(BgL_za71za7_2408 + ((long) 1));
																			}
																			{	/* Unsafe/sha1.scm 291 */
																				unsigned long BgL_res2655z00_2432;

																				{	/* Unsafe/sha1.scm 291 */
																					long BgL_iz00_2411;

																					BgL_iz00_2411 =
																						LONG_TO_ELONG(BgL_arg2097z00_1164);
																					{	/* Unsafe/sha1.scm 291 */
																						long BgL_lenz00_2412;

																						BgL_lenz00_2412 =
																							BGL_MMAP_LENGTH(BgL_strz00_26);
																						{	/* Unsafe/sha1.scm 291 */
																							bool_t BgL_testz00_3241;

																							{	/* Unsafe/sha1.scm 291 */
																								long BgL_n1z00_2417;

																								long BgL_n2z00_2418;

																								BgL_n1z00_2417 =
																									ELONG_TO_LONG(BgL_iz00_2411);
																								BgL_n2z00_2418 =
																									ELONG_TO_LONG
																									(BgL_lenz00_2412);
																								BgL_testz00_3241 =
																									(BgL_n1z00_2417 <
																									BgL_n2z00_2418);
																							}
																							if (BgL_testz00_3241)
																								{	/* Unsafe/sha1.scm 291 */
																									unsigned char
																										BgL_arg1982z00_2414;
																									{	/* Unsafe/sha1.scm 291 */
																										unsigned char
																											BgL_res2654z00_2428;
																										{	/* Unsafe/sha1.scm 291 */
																											unsigned char
																												BgL_cz00_2421;
																											BgL_cz00_2421 =
																												BGL_MMAP_REF
																												(BgL_strz00_26,
																												BgL_iz00_2411);
																											{	/* Unsafe/sha1.scm 291 */
																												long
																													BgL_arg2435z00_2422;
																												BgL_arg2435z00_2422 =
																													(BgL_iz00_2411 +
																													((long) 1));
																												{	/* Unsafe/sha1.scm 291 */
																													long
																														BgL_res2653z00_2427;
																													BGL_MMAP_RP_SET
																														(BgL_strz00_26,
																														BgL_arg2435z00_2422);
																													BUNSPEC;
																													BgL_res2653z00_2427 =
																														BgL_arg2435z00_2422;
																													BgL_res2653z00_2427;
																											}}
																											BgL_res2654z00_2428 =
																												BgL_cz00_2421;
																										}
																										BgL_arg1982z00_2414 =
																											BgL_res2654z00_2428;
																									}
																									BgL_res2655z00_2432 =
																										(unsigned long) (
																										(BgL_arg1982z00_2414));
																								}
																							else
																								{	/* Unsafe/sha1.scm 291 */
																									bool_t BgL_testz00_3250;

																									{	/* Unsafe/sha1.scm 291 */
																										long BgL_n1z00_2430;

																										long BgL_n2z00_2431;

																										BgL_n1z00_2430 =
																											ELONG_TO_LONG
																											(BgL_iz00_2411);
																										BgL_n2z00_2431 =
																											ELONG_TO_LONG
																											(BgL_lenz00_2412);
																										BgL_testz00_3250 =
																											(BgL_n1z00_2430 ==
																											BgL_n2z00_2431);
																									}
																									if (BgL_testz00_3250)
																										{	/* Unsafe/sha1.scm 291 */
																											BgL_res2655z00_2432 =
																												(unsigned long) (((long)
																													128));
																										}
																									else
																										{	/* Unsafe/sha1.scm 291 */
																											BgL_res2655z00_2432 =
																												(unsigned long) (((long)
																													0));
																				}}}}}
																				BgL_v1z00_1152 = BgL_res2655z00_2432;
																		}}
																		{	/* Unsafe/sha1.scm 291 */
																			unsigned long BgL_v2z00_1153;

																			{	/* Unsafe/sha1.scm 292 */
																				long BgL_arg2096z00_1163;

																				{	/* Unsafe/sha1.scm 292 */
																					long BgL_za71za7_2433;

																					BgL_za71za7_2433 =
																						ELONG_TO_LONG(BgL_nz00_1150);
																					BgL_arg2096z00_1163 =
																						(BgL_za71za7_2433 + ((long) 2));
																				}
																				{	/* Unsafe/sha1.scm 292 */
																					unsigned long BgL_res2658z00_2457;

																					{	/* Unsafe/sha1.scm 292 */
																						long BgL_iz00_2436;

																						BgL_iz00_2436 =
																							LONG_TO_ELONG
																							(BgL_arg2096z00_1163);
																						{	/* Unsafe/sha1.scm 292 */
																							long BgL_lenz00_2437;

																							BgL_lenz00_2437 =
																								BGL_MMAP_LENGTH(BgL_strz00_26);
																							{	/* Unsafe/sha1.scm 292 */
																								bool_t BgL_testz00_3260;

																								{	/* Unsafe/sha1.scm 292 */
																									long BgL_n1z00_2442;

																									long BgL_n2z00_2443;

																									BgL_n1z00_2442 =
																										ELONG_TO_LONG
																										(BgL_iz00_2436);
																									BgL_n2z00_2443 =
																										ELONG_TO_LONG
																										(BgL_lenz00_2437);
																									BgL_testz00_3260 =
																										(BgL_n1z00_2442 <
																										BgL_n2z00_2443);
																								}
																								if (BgL_testz00_3260)
																									{	/* Unsafe/sha1.scm 292 */
																										unsigned char
																											BgL_arg1982z00_2439;
																										{	/* Unsafe/sha1.scm 292 */
																											unsigned char
																												BgL_res2657z00_2453;
																											{	/* Unsafe/sha1.scm 292 */
																												unsigned char
																													BgL_cz00_2446;
																												BgL_cz00_2446 =
																													BGL_MMAP_REF
																													(BgL_strz00_26,
																													BgL_iz00_2436);
																												{	/* Unsafe/sha1.scm 292 */
																													long
																														BgL_arg2435z00_2447;
																													BgL_arg2435z00_2447 =
																														(BgL_iz00_2436 +
																														((long) 1));
																													{	/* Unsafe/sha1.scm 292 */
																														long
																															BgL_res2656z00_2452;
																														BGL_MMAP_RP_SET
																															(BgL_strz00_26,
																															BgL_arg2435z00_2447);
																														BUNSPEC;
																														BgL_res2656z00_2452
																															=
																															BgL_arg2435z00_2447;
																														BgL_res2656z00_2452;
																												}}
																												BgL_res2657z00_2453 =
																													BgL_cz00_2446;
																											}
																											BgL_arg1982z00_2439 =
																												BgL_res2657z00_2453;
																										}
																										BgL_res2658z00_2457 =
																											(unsigned long) (
																											(BgL_arg1982z00_2439));
																									}
																								else
																									{	/* Unsafe/sha1.scm 292 */
																										bool_t BgL_testz00_3269;

																										{	/* Unsafe/sha1.scm 292 */
																											long BgL_n1z00_2455;

																											long BgL_n2z00_2456;

																											BgL_n1z00_2455 =
																												ELONG_TO_LONG
																												(BgL_iz00_2436);
																											BgL_n2z00_2456 =
																												ELONG_TO_LONG
																												(BgL_lenz00_2437);
																											BgL_testz00_3269 =
																												(BgL_n1z00_2455 ==
																												BgL_n2z00_2456);
																										}
																										if (BgL_testz00_3269)
																											{	/* Unsafe/sha1.scm 292 */
																												BgL_res2658z00_2457 =
																													(unsigned
																													long) (((long) 128));
																											}
																										else
																											{	/* Unsafe/sha1.scm 292 */
																												BgL_res2658z00_2457 =
																													(unsigned
																													long) (((long) 0));
																					}}}}}
																					BgL_v2z00_1153 = BgL_res2658z00_2457;
																			}}
																			{	/* Unsafe/sha1.scm 292 */
																				unsigned long BgL_v3z00_1154;

																				{	/* Unsafe/sha1.scm 293 */
																					long BgL_arg2095z00_1162;

																					{	/* Unsafe/sha1.scm 293 */
																						long BgL_za71za7_2458;

																						BgL_za71za7_2458 =
																							ELONG_TO_LONG(BgL_nz00_1150);
																						BgL_arg2095z00_1162 =
																							(BgL_za71za7_2458 + ((long) 3));
																					}
																					{	/* Unsafe/sha1.scm 293 */
																						unsigned long BgL_res2661z00_2482;

																						{	/* Unsafe/sha1.scm 293 */
																							long BgL_iz00_2461;

																							BgL_iz00_2461 =
																								LONG_TO_ELONG
																								(BgL_arg2095z00_1162);
																							{	/* Unsafe/sha1.scm 293 */
																								long BgL_lenz00_2462;

																								BgL_lenz00_2462 =
																									BGL_MMAP_LENGTH
																									(BgL_strz00_26);
																								{	/* Unsafe/sha1.scm 293 */
																									bool_t BgL_testz00_3279;

																									{	/* Unsafe/sha1.scm 293 */
																										long BgL_n1z00_2467;

																										long BgL_n2z00_2468;

																										BgL_n1z00_2467 =
																											ELONG_TO_LONG
																											(BgL_iz00_2461);
																										BgL_n2z00_2468 =
																											ELONG_TO_LONG
																											(BgL_lenz00_2462);
																										BgL_testz00_3279 =
																											(BgL_n1z00_2467 <
																											BgL_n2z00_2468);
																									}
																									if (BgL_testz00_3279)
																										{	/* Unsafe/sha1.scm 293 */
																											unsigned char
																												BgL_arg1982z00_2464;
																											{	/* Unsafe/sha1.scm 293 */
																												unsigned char
																													BgL_res2660z00_2478;
																												{	/* Unsafe/sha1.scm 293 */
																													unsigned char
																														BgL_cz00_2471;
																													BgL_cz00_2471 =
																														BGL_MMAP_REF
																														(BgL_strz00_26,
																														BgL_iz00_2461);
																													{	/* Unsafe/sha1.scm 293 */
																														long
																															BgL_arg2435z00_2472;
																														BgL_arg2435z00_2472
																															=
																															(BgL_iz00_2461 +
																															((long) 1));
																														{	/* Unsafe/sha1.scm 293 */
																															long
																																BgL_res2659z00_2477;
																															BGL_MMAP_RP_SET
																																(BgL_strz00_26,
																																BgL_arg2435z00_2472);
																															BUNSPEC;
																															BgL_res2659z00_2477
																																=
																																BgL_arg2435z00_2472;
																															BgL_res2659z00_2477;
																													}}
																													BgL_res2660z00_2478 =
																														BgL_cz00_2471;
																												}
																												BgL_arg1982z00_2464 =
																													BgL_res2660z00_2478;
																											}
																											BgL_res2661z00_2482 =
																												(unsigned long) (
																												(BgL_arg1982z00_2464));
																										}
																									else
																										{	/* Unsafe/sha1.scm 293 */
																											bool_t BgL_testz00_3288;

																											{	/* Unsafe/sha1.scm 293 */
																												long BgL_n1z00_2480;

																												long BgL_n2z00_2481;

																												BgL_n1z00_2480 =
																													ELONG_TO_LONG
																													(BgL_iz00_2461);
																												BgL_n2z00_2481 =
																													ELONG_TO_LONG
																													(BgL_lenz00_2462);
																												BgL_testz00_3288 =
																													(BgL_n1z00_2480 ==
																													BgL_n2z00_2481);
																											}
																											if (BgL_testz00_3288)
																												{	/* Unsafe/sha1.scm 293 */
																													BgL_res2661z00_2482 =
																														(unsigned
																														long) (((long)
																															128));
																												}
																											else
																												{	/* Unsafe/sha1.scm 293 */
																													BgL_res2661z00_2482 =
																														(unsigned
																														long) (((long) 0));
																						}}}}}
																						BgL_v3z00_1154 =
																							BgL_res2661z00_2482;
																				}}
																				{	/* Unsafe/sha1.scm 293 */
																					long BgL_vz00_1155;

																					BgL_vz00_1155 =
																						(
																						((((long) (BgL_v0z00_1151) <<
																									(int) (((long) 8))) |
																								(long) (BgL_v1z00_1152)) <<
																							(int) (((long) 16))) |
																						(((long) (BgL_v2z00_1153) <<
																								(int) (((long) 8))) |
																							(long) (BgL_v3z00_1154)));
																					{	/* Unsafe/sha1.scm 294 */

																						{	/* Unsafe/sha1.scm 295 */
																							unsigned long BgL_auxz00_3307;

																							BgL_auxz00_3307 =
																								(unsigned long) (BgL_vz00_1155);
																							BGL_U32VSET(BgL_vecz00_1145,
																								BgL_jz00_1147, BgL_auxz00_3307);
																						} BUNSPEC;
															}}}}}}}
															VECTOR_SET(BgL_mz00_1140,
																(int) (BgL_iz00_1142), BgL_vecz00_1145);
															{
																long BgL_jz00_3312;

																BgL_jz00_3312 = (BgL_jz00_1147 + ((long) 1));
																BgL_jz00_1147 = BgL_jz00_3312;
																goto BgL_zc3anonymousza32087ze3z83_1148;
															}
														}
													else
														{	/* Unsafe/sha1.scm 288 */
															((bool_t) 0);
														}
												}
											}
											{
												long BgL_iz00_3314;

												BgL_iz00_3314 = (BgL_iz00_1142 + ((long) 1));
												BgL_iz00_1142 = BgL_iz00_3314;
												goto BgL_zc3anonymousza32085ze3z83_1143;
											}
										}
									else
										{	/* Unsafe/sha1.scm 286 */
											((bool_t) 0);
										}
								}
								return BGl_sha1z00zz__sha1z00(BgL_lenz00_1137, BgL_mz00_1140);
							}
						}
					}
				}
			}
		}
	}



/* _sha1sum-mmap */
	obj_t BGl__sha1sumzd2mmapzd2zz__sha1z00(obj_t BgL_envz00_2761,
		obj_t BgL_strz00_2762)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 278 */
			{	/* Unsafe/sha1.scm 281 */
				obj_t BgL_auxz00_3317;

				if (BGL_MMAPP(BgL_strz00_2762))
					{	/* Unsafe/sha1.scm 281 */
						BgL_auxz00_3317 = BgL_strz00_2762;
					}
				else
					{
						obj_t BgL_auxz00_3320;

						BgL_auxz00_3320 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 10993)), BGl_string2688z00zz__sha1z00,
							BGl_string2689z00zz__sha1z00, BgL_strz00_2762);
						FAILURE(BgL_auxz00_3320, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_auxz00_3317);
			}
		}
	}



/* sha1sum-port */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2portzd2zz__sha1z00(obj_t BgL_ipz00_27)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 303 */
			{	/* Unsafe/sha1.scm 306 */
				obj_t BgL_bufz00_1180;

				BgL_bufz00_1180 = make_string(((long) 64), ((unsigned char) ' '));
				{
					long BgL_lenz00_1183;

					obj_t BgL_lz00_1184;

					BgL_lenz00_1183 = ((long) 0);
					BgL_lz00_1184 = BNIL;
				BgL_zc3anonymousza32109ze3z83_1185:
					BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_bufz00_1180,
						((unsigned char) '\000'));
					{	/* Unsafe/sha1.scm 312 */
						int BgL_lz00_1186;

						BgL_lz00_1186 =
							BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00
							(BgL_bufz00_1180, ((long) 0), ((long) 64), BgL_ipz00_27);
						{	/* Unsafe/sha1.scm 312 */
							long BgL_nlenz00_1187;

							BgL_nlenz00_1187 = ((long) (BgL_lz00_1186) + BgL_lenz00_1183);
							{	/* Unsafe/sha1.scm 313 */
								obj_t BgL_vecz00_1188;

								BgL_vecz00_1188 =
									BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
									BINT(((long) 0)));
								{	/* Unsafe/sha1.scm 314 */

									if (((long) (BgL_lz00_1186) < ((long) 64)))
										{	/* Unsafe/sha1.scm 315 */
											long BgL_auxz00_3335;

											BgL_auxz00_3335 = (long) (BgL_lz00_1186);
											STRING_SET(BgL_bufz00_1180, BgL_auxz00_3335,
												((unsigned char) '€'));
										}
									else
										{	/* Unsafe/sha1.scm 315 */
											BFALSE;
										}
									{
										long BgL_jz00_1191;

										BgL_jz00_1191 = ((long) 0);
									BgL_zc3anonymousza32111ze3z83_1192:
										if ((BgL_jz00_1191 < ((long) 16)))
											{	/* Unsafe/sha1.scm 316 */
												{	/* Unsafe/sha1.scm 317 */
													int BgL_nz00_1194;

													BgL_nz00_1194 = (int) ((BgL_jz00_1191 * ((long) 4)));
													{	/* Unsafe/sha1.scm 317 */
														unsigned long BgL_v0z00_1195;

														BgL_v0z00_1195 =
															(unsigned long) (
															(STRING_REF(BgL_bufz00_1180,
																	(long) (BgL_nz00_1194))));
														{	/* Unsafe/sha1.scm 318 */
															unsigned long BgL_v1z00_1196;

															BgL_v1z00_1196 =
																(unsigned long) (
																(STRING_REF(BgL_bufz00_1180,
																		((long) (BgL_nz00_1194) + ((long) 1)))));
															{	/* Unsafe/sha1.scm 319 */
																unsigned long BgL_v2z00_1197;

																BgL_v2z00_1197 =
																	(unsigned long) (
																	(STRING_REF(BgL_bufz00_1180,
																			((long) (BgL_nz00_1194) + ((long) 2)))));
																{	/* Unsafe/sha1.scm 320 */
																	unsigned long BgL_v3z00_1198;

																	BgL_v3z00_1198 =
																		(unsigned long) (
																		(STRING_REF(BgL_bufz00_1180,
																				((long) (BgL_nz00_1194) +
																					((long) 3)))));
																	{	/* Unsafe/sha1.scm 321 */
																		long BgL_vz00_1199;

																		BgL_vz00_1199 =
																			(
																			((((long) (BgL_v0z00_1195) <<
																						(int) (((long) 8))) |
																					(long) (BgL_v1z00_1196)) <<
																				(int) (((long) 16))) |
																			(((long) (BgL_v2z00_1197) <<
																					(int) (((long) 8))) |
																				(long) (BgL_v3z00_1198)));
																		{	/* Unsafe/sha1.scm 322 */

																			{	/* Unsafe/sha1.scm 323 */
																				unsigned long BgL_auxz00_3374;

																				BgL_auxz00_3374 =
																					(unsigned long) (BgL_vz00_1199);
																				BGL_U32VSET(BgL_vecz00_1188,
																					BgL_jz00_1191, BgL_auxz00_3374);
																			} BUNSPEC;
												}}}}}}}
												{
													long BgL_jz00_3377;

													BgL_jz00_3377 = (BgL_jz00_1191 + ((long) 1));
													BgL_jz00_1191 = BgL_jz00_3377;
													goto BgL_zc3anonymousza32111ze3z83_1192;
												}
											}
										else
											{	/* Unsafe/sha1.scm 316 */
												((bool_t) 0);
											}
									}
									if (((long) (BgL_lz00_1186) < ((long) 64)))
										{	/* Unsafe/sha1.scm 326 */
											obj_t BgL_mz00_1216;

											{	/* Unsafe/sha1.scm 328 */
												obj_t BgL_arg2133z00_1217;

												{	/* Unsafe/sha1.scm 328 */
													obj_t BgL_arg2134z00_1218;

													if (((long) (BgL_lz00_1186) == ((long) 63)))
														{	/* Unsafe/sha1.scm 329 */
															obj_t BgL_arg2136z00_1220;

															obj_t BgL_arg2137z00_1221;

															BgL_arg2136z00_1220 =
																BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
																BINT(((long) 0)));
															{	/* Unsafe/sha1.scm 329 */
																obj_t BgL_list2138z00_1222;

																BgL_list2138z00_1222 =
																	MAKE_PAIR(BgL_lz00_1184, BNIL);
																BgL_arg2137z00_1221 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_vecz00_1188, BgL_list2138z00_1222);
															}
															BgL_arg2134z00_1218 =
																MAKE_PAIR(BgL_arg2136z00_1220,
																BgL_arg2137z00_1221);
														}
													else
														{	/* Unsafe/sha1.scm 328 */
															BgL_arg2134z00_1218 =
																MAKE_PAIR(BgL_vecz00_1188, BgL_lz00_1184);
														}
													BgL_arg2133z00_1217 =
														bgl_reverse_bang(BgL_arg2134z00_1218);
												}
												BgL_mz00_1216 =
													BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
													(BgL_arg2133z00_1217);
											}
											return
												BGl_sha1z00zz__sha1z00(BgL_nlenz00_1187, BgL_mz00_1216);
										}
									else
										{	/* Unsafe/sha1.scm 332 */
											obj_t BgL_arg2139z00_1223;

											BgL_arg2139z00_1223 =
												MAKE_PAIR(BgL_vecz00_1188, BgL_lz00_1184);
											{
												obj_t BgL_lz00_3396;

												long BgL_lenz00_3395;

												BgL_lenz00_3395 = BgL_nlenz00_1187;
												BgL_lz00_3396 = BgL_arg2139z00_1223;
												BgL_lz00_1184 = BgL_lz00_3396;
												BgL_lenz00_1183 = BgL_lenz00_3395;
												goto BgL_zc3anonymousza32109ze3z83_1185;
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



/* _sha1sum-port */
	obj_t BGl__sha1sumzd2portzd2zz__sha1z00(obj_t BgL_envz00_2763,
		obj_t BgL_ipz00_2764)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 303 */
			{	/* Unsafe/sha1.scm 306 */
				obj_t BgL_auxz00_3397;

				if (INPUT_PORTP(BgL_ipz00_2764))
					{	/* Unsafe/sha1.scm 306 */
						BgL_auxz00_3397 = BgL_ipz00_2764;
					}
				else
					{
						obj_t BgL_auxz00_3400;

						BgL_auxz00_3400 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 11967)), BGl_string2690z00zz__sha1z00,
							BGl_string2691z00zz__sha1z00, BgL_ipz00_2764);
						FAILURE(BgL_auxz00_3400, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2portzd2zz__sha1z00(BgL_auxz00_3397);
			}
		}
	}



/* sha1sum-file */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2filezd2zz__sha1z00(obj_t BgL_fnamez00_28)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 337 */
			{	/* Unsafe/sha1.scm 338 */
				obj_t BgL_mmz00_1226;

				BgL_mmz00_1226 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_28, BTRUE, BFALSE);
				if (BGL_MMAPP(BgL_mmz00_1226))
					{	/* Unsafe/sha1.scm 340 */
						obj_t BgL_val1850z00_1228;

						BgL_val1850z00_1228 =
							BGl_zc3exitza32146ze3z83zz__sha1z00(BgL_mmz00_1226);
						bgl_close_mmap(BgL_mmz00_1226);
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val1850z00_1228)))
							{	/* Unsafe/sha1.scm 342 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1850z00_1228),
									CDR(BgL_val1850z00_1228));
							}
						else
							{	/* Unsafe/sha1.scm 342 */
								return BgL_val1850z00_1228;
							}
					}
				else
					{	/* Unsafe/sha1.scm 343 */
						obj_t BgL_pz00_1235;

						{	/* Ieee/port.scm 375 */

							BgL_pz00_1235 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_fnamez00_28, BTRUE);
						}
						{	/* Unsafe/sha1.scm 344 */
							obj_t BgL_val1853z00_1236;

							BgL_val1853z00_1236 =
								BGl_zc3exitza32150ze3z83zz__sha1z00(BgL_pz00_1235);
							bgl_close_input_port(BgL_pz00_1235);
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val1853z00_1236)))
								{	/* Unsafe/sha1.scm 346 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val1853z00_1236), CDR(BgL_val1853z00_1236));
								}
							else
								{	/* Unsafe/sha1.scm 346 */
									return BgL_val1853z00_1236;
								}
						}
					}
			}
		}
	}



/* <exit:2150> */
	obj_t BGl_zc3exitza32150ze3z83zz__sha1z00(obj_t BgL_pz00_2772)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 346 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1854z00_1241;

			if (SET_EXIT(BgL_an_exit1854z00_1241))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1854z00_1241 = (void *) jmpbuf;
					{	/* Unsafe/sha1.scm 346 */

						PUSH_EXIT(BgL_an_exit1854z00_1241, ((long) 0));
						{	/* Unsafe/sha1.scm 345 */
							obj_t BgL_val1855z00_1242;

							BgL_val1855z00_1242 =
								BGl_sha1sumzd2portzd2zz__sha1z00(BgL_pz00_2772);
							POP_EXIT();
							return BgL_val1855z00_1242;
						}
					}
				}
		}
	}



/* <exit:2146> */
	obj_t BGl_zc3exitza32146ze3z83zz__sha1z00(obj_t BgL_mmz00_2773)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 342 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1851z00_1233;

			if (SET_EXIT(BgL_an_exit1851z00_1233))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1851z00_1233 = (void *) jmpbuf;
					{	/* Unsafe/sha1.scm 342 */

						PUSH_EXIT(BgL_an_exit1851z00_1233, ((long) 0));
						{	/* Unsafe/sha1.scm 341 */
							obj_t BgL_val1852z00_1234;

							BgL_val1852z00_1234 =
								BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_mmz00_2773);
							POP_EXIT();
							return BgL_val1852z00_1234;
						}
					}
				}
		}
	}



/* _sha1sum-file */
	obj_t BGl__sha1sumzd2filezd2zz__sha1z00(obj_t BgL_envz00_2765,
		obj_t BgL_fnamez00_2766)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 337 */
			{	/* Unsafe/sha1.scm 338 */
				obj_t BgL_auxz00_3435;

				if (STRINGP(BgL_fnamez00_2766))
					{	/* Unsafe/sha1.scm 338 */
						BgL_auxz00_3435 = BgL_fnamez00_2766;
					}
				else
					{
						obj_t BgL_auxz00_3438;

						BgL_auxz00_3438 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 13084)), BGl_string2692z00zz__sha1z00,
							BGl_string2687z00zz__sha1z00, BgL_fnamez00_2766);
						FAILURE(BgL_auxz00_3438, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2filezd2zz__sha1z00(BgL_auxz00_3435);
			}
		}
	}



/* sha1sum */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumz00zz__sha1z00(obj_t BgL_objz00_29)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 351 */
			if (BGL_MMAPP(BgL_objz00_29))
				{	/* Unsafe/sha1.scm 353 */
					return BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_objz00_29);
				}
			else
				{	/* Unsafe/sha1.scm 353 */
					if (STRINGP(BgL_objz00_29))
						{	/* Unsafe/sha1.scm 355 */
							return BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_objz00_29);
						}
					else
						{	/* Unsafe/sha1.scm 355 */
							if (INPUT_PORTP(BgL_objz00_29))
								{	/* Unsafe/sha1.scm 357 */
									return BGl_sha1sumzd2portzd2zz__sha1z00(BgL_objz00_29);
								}
							else
								{	/* Unsafe/sha1.scm 357 */
									return
										BGl_errorz00zz__errorz00(BGl_string2693z00zz__sha1z00,
										BGl_string2694z00zz__sha1z00, BgL_objz00_29);
								}
						}
				}
		}
	}



/* _sha1sum */
	obj_t BGl__sha1sumz00zz__sha1z00(obj_t BgL_envz00_2767, obj_t BgL_objz00_2768)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 351 */
			return BGl_sha1sumz00zz__sha1z00(BgL_objz00_2768);
		}
	}



/* hmac-sha1sum-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t
		BgL_keyz00_30, obj_t BgL_messagez00_31)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 365 */
			return
				BGl_hmaczd2stringzd2zz__hmacz00(BgL_keyz00_30, BgL_messagez00_31,
				BGl_sha1sumzd2stringzd2envz00zz__sha1z00);
		}
	}



/* _hmac-sha1sum-string */
	obj_t BGl__hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t BgL_envz00_2769,
		obj_t BgL_keyz00_2770, obj_t BgL_messagez00_2771)
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 365 */
			{	/* Unsafe/sha1.scm 366 */
				obj_t BgL_auxz00_3462;

				obj_t BgL_auxz00_3455;

				if (STRINGP(BgL_messagez00_2771))
					{	/* Unsafe/sha1.scm 366 */
						BgL_auxz00_3462 = BgL_messagez00_2771;
					}
				else
					{
						obj_t BgL_auxz00_3465;

						BgL_auxz00_3465 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 14051)), BGl_string2695z00zz__sha1z00,
							BGl_string2687z00zz__sha1z00, BgL_messagez00_2771);
						FAILURE(BgL_auxz00_3465, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_2770))
					{	/* Unsafe/sha1.scm 366 */
						BgL_auxz00_3455 = BgL_keyz00_2770;
					}
				else
					{
						obj_t BgL_auxz00_3458;

						BgL_auxz00_3458 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2685z00zz__sha1z00,
							BINT(((long) 14051)), BGl_string2695z00zz__sha1z00,
							BGl_string2687z00zz__sha1z00, BgL_keyz00_2770);
						FAILURE(BgL_auxz00_3458, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(BgL_auxz00_3455,
					BgL_auxz00_3462);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__sha1z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__sha1z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__sha1z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha1.scm 17 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2696z00zz__sha1z00));
			return
				BGl_modulezd2initializa7ationz75zz__hmacz00(((long) 2744903),
				BSTRING_TO_STRING(BGl_string2696z00zz__sha1z00));
		}
	}

#ifdef __cplusplus
}
#endif
