/*===========================================================================*/
/*   (Unsafe/sha2.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/sha2.scm -indent -o objs/obj_u/Unsafe/sha2.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2filezd2zz__sha2z00(obj_t);
	static obj_t BGl_sha256zd2internalzd2transformz00zz__sha2z00(obj_t, obj_t);
	static obj_t BGl__sha256sumzd2mmapzd2zz__sha2z00(obj_t, obj_t);
	static obj_t BGl_sha256zd2updatezd2zz__sha2z00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__sha2z00 = BUNSPEC;
	static unsigned long BGl_rotr32z00zz__sha2z00(unsigned long, int);
	static obj_t BGl_zc3exitza32522ze3z83zz__sha2z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__sha2z00();
	static obj_t BGl_zc3exitza32526ze3z83zz__sha2z00(obj_t);
	static obj_t BGl__hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2mmapzd2zz__sha2z00(obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2stringzd2zz__sha2z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__sha2z00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_statezd2ze3stringz31zz__sha2z00(obj_t);
	static obj_t BGl_fillzd2word32zd2mmapz12z12zz__sha2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_fillzd2word32zd2stringz12z12zz__sha2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__sha256sumz00zz__sha2z00(obj_t, obj_t);
	static obj_t BGl_u32zd2fillz12zc0zz__sha2z00(obj_t, long, unsigned long);
	static obj_t BGl_fillzd2word32zd2portz12z12zz__sha2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__sha2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__sha2z00();
	static obj_t BGl__sha256sumzd2portzd2zz__sha2z00(obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2portzd2zz__sha2z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl__sha256sumzd2stringzd2zz__sha2z00(obj_t, obj_t);
	static obj_t BGl_K256z00zz__sha2z00 = BUNSPEC;
	static obj_t BGl__sha256sumzd2filezd2zz__sha2z00(obj_t, obj_t);
	static unsigned long BGl_Sigma1zd2256zd2zz__sha2z00(unsigned long);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumz00zz__sha2z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__sha2z00();
	static obj_t BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2mmapzd2envz00zz__sha2z00,
		BgL_bgl__sha256sumza7d2mma3100za7, BGl__sha256sumzd2mmapzd2zz__sha2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2stringzd2envz00zz__sha2z00,
		BgL_bgl__sha256sumza7d2str3101za7, BGl__sha256sumzd2stringzd2zz__sha2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3061z00zz__sha2z00,
		BgL_bgl_fillza7d2word32za7d23102z00,
		BGl_fillzd2word32zd2mmapz12z12zz__sha2z00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3065z00zz__sha2z00,
		BgL_bgl_fillza7d2word32za7d23103z00,
		BGl_fillzd2word32zd2stringz12z12zz__sha2z00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3062z00zz__sha2z00,
		BgL_bgl_string3062za700za7za7_3104za7,
		"/tmp/bigloo/runtime/Unsafe/sha2.scm", 35);
	      DEFINE_STRING(BGl_string3063z00zz__sha2z00,
		BgL_bgl_string3063za700za7za7_3105za7, "_sha256sum-mmap", 15);
	      DEFINE_STRING(BGl_string3064z00zz__sha2z00,
		BgL_bgl_string3064za700za7za7_3106za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3066z00zz__sha2z00,
		BgL_bgl_string3066za700za7za7_3107za7, "_sha256sum-string", 17);
	      DEFINE_STRING(BGl_string3067z00zz__sha2z00,
		BgL_bgl_string3067za700za7za7_3108za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3068z00zz__sha2z00,
		BgL_bgl_string3068za700za7za7_3109za7, "_sha256sum-port", 15);
	      DEFINE_STRING(BGl_string3070z00zz__sha2z00,
		BgL_bgl_string3070za700za7za7_3110za7, "_sha256sum-file", 15);
	      DEFINE_STRING(BGl_string3069z00zz__sha2z00,
		BgL_bgl_string3069za700za7za7_3111za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3071z00zz__sha2z00,
		BgL_bgl_string3071za700za7za7_3112za7, "sha256sum", 9);
	      DEFINE_STRING(BGl_string3072z00zz__sha2z00,
		BgL_bgl_string3072za700za7za7_3113za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3073z00zz__sha2z00,
		BgL_bgl_string3073za700za7za7_3114za7, "_hmac-sha256sum-string", 22);
	      DEFINE_STRING(BGl_string3074z00zz__sha2z00,
		BgL_bgl_string3074za700za7za7_3115za7, "__sha2", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2portzd2envz00zz__sha2z00,
		BgL_bgl__sha256sumza7d2por3116za7, BGl__sha256sumzd2portzd2zz__sha2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2filezd2envz00zz__sha2z00,
		BgL_bgl__sha256sumza7d2fil3117za7, BGl__sha256sumzd2filezd2zz__sha2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2envzd2zz__sha2z00,
		BgL_bgl__sha256sumza700za7za7_3118za7, BGl__sha256sumz00zz__sha2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hmaczd2sha256sumzd2stringzd2envzd2zz__sha2z00,
		BgL_bgl__hmacza7d2sha256su3119za7,
		BGl__hmaczd2sha256sumzd2stringz00zz__sha2z00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__sha2z00(long
		BgL_checksumz00_3833, char *BgL_fromz00_3834)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__sha2z00))
				{
					BGl_requirezd2initializa7ationz75zz__sha2z00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__sha2z00();
					BGl_toplevelzd2initzd2zz__sha2z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__sha2z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 50 */
			{	/* Unsafe/sha2.scm 205 */
				obj_t BgL_vz00_961;

				{	/* Llib/srfi4.scm 235 */

					BgL_vz00_961 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 64), BINT(((long) 0)));
				}
				{	/* Unsafe/sha2.scm 206 */
					long BgL_arg1918z00_963;

					BgL_arg1918z00_963 =
						((((long) 17034) << (int) (((long) 16))) | ((long) 12184));
					{	/* Unsafe/sha2.scm 206 */
						unsigned long BgL_auxz00_3845;

						BgL_auxz00_3845 = (unsigned long) (BgL_arg1918z00_963);
						BGL_U32VSET(BgL_vz00_961, ((long) 0), BgL_auxz00_3845);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 207 */
					long BgL_arg1922z00_967;

					BgL_arg1922z00_967 =
						((((long) 28983) << (int) (((long) 16))) | ((long) 17553));
					{	/* Unsafe/sha2.scm 207 */
						unsigned long BgL_auxz00_3851;

						BgL_auxz00_3851 = (unsigned long) (BgL_arg1922z00_967);
						BGL_U32VSET(BgL_vz00_961, ((long) 1), BgL_auxz00_3851);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 208 */
					long BgL_arg1926z00_971;

					BgL_arg1926z00_971 =
						((((long) 46528) << (int) (((long) 16))) | ((long) 64463));
					{	/* Unsafe/sha2.scm 208 */
						unsigned long BgL_auxz00_3857;

						BgL_auxz00_3857 = (unsigned long) (BgL_arg1926z00_971);
						BGL_U32VSET(BgL_vz00_961, ((long) 2), BgL_auxz00_3857);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 209 */
					long BgL_arg1931z00_975;

					BgL_arg1931z00_975 =
						((((long) 59829) << (int) (((long) 16))) | ((long) 56229));
					{	/* Unsafe/sha2.scm 209 */
						unsigned long BgL_auxz00_3863;

						BgL_auxz00_3863 = (unsigned long) (BgL_arg1931z00_975);
						BGL_U32VSET(BgL_vz00_961, ((long) 3), BgL_auxz00_3863);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 210 */
					long BgL_arg1938z00_979;

					BgL_arg1938z00_979 =
						((((long) 14678) << (int) (((long) 16))) | ((long) 49755));
					{	/* Unsafe/sha2.scm 210 */
						unsigned long BgL_auxz00_3869;

						BgL_auxz00_3869 = (unsigned long) (BgL_arg1938z00_979);
						BGL_U32VSET(BgL_vz00_961, ((long) 4), BgL_auxz00_3869);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 211 */
					long BgL_arg1943z00_983;

					BgL_arg1943z00_983 =
						((((long) 23025) << (int) (((long) 16))) | ((long) 4593));
					{	/* Unsafe/sha2.scm 211 */
						unsigned long BgL_auxz00_3875;

						BgL_auxz00_3875 = (unsigned long) (BgL_arg1943z00_983);
						BGL_U32VSET(BgL_vz00_961, ((long) 5), BgL_auxz00_3875);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 212 */
					long BgL_arg1948z00_987;

					BgL_arg1948z00_987 =
						((((long) 37439) << (int) (((long) 16))) | ((long) 33444));
					{	/* Unsafe/sha2.scm 212 */
						unsigned long BgL_auxz00_3881;

						BgL_auxz00_3881 = (unsigned long) (BgL_arg1948z00_987);
						BGL_U32VSET(BgL_vz00_961, ((long) 6), BgL_auxz00_3881);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 213 */
					long BgL_arg1952z00_991;

					BgL_arg1952z00_991 =
						((((long) 43804) << (int) (((long) 16))) | ((long) 24277));
					{	/* Unsafe/sha2.scm 213 */
						unsigned long BgL_auxz00_3887;

						BgL_auxz00_3887 = (unsigned long) (BgL_arg1952z00_991);
						BGL_U32VSET(BgL_vz00_961, ((long) 7), BgL_auxz00_3887);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 214 */
					long BgL_arg1956z00_995;

					BgL_arg1956z00_995 =
						((((long) 55303) << (int) (((long) 16))) | ((long) 43672));
					{	/* Unsafe/sha2.scm 214 */
						unsigned long BgL_auxz00_3893;

						BgL_auxz00_3893 = (unsigned long) (BgL_arg1956z00_995);
						BGL_U32VSET(BgL_vz00_961, ((long) 8), BgL_auxz00_3893);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 215 */
					long BgL_arg1960z00_999;

					BgL_arg1960z00_999 =
						((((long) 4739) << (int) (((long) 16))) | ((long) 23297));
					{	/* Unsafe/sha2.scm 215 */
						unsigned long BgL_auxz00_3899;

						BgL_auxz00_3899 = (unsigned long) (BgL_arg1960z00_999);
						BGL_U32VSET(BgL_vz00_961, ((long) 9), BgL_auxz00_3899);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 216 */
					long BgL_arg1965z00_1003;

					BgL_arg1965z00_1003 =
						((((long) 9265) << (int) (((long) 16))) | ((long) 34238));
					{	/* Unsafe/sha2.scm 216 */
						unsigned long BgL_auxz00_3905;

						BgL_auxz00_3905 = (unsigned long) (BgL_arg1965z00_1003);
						BGL_U32VSET(BgL_vz00_961, ((long) 10), BgL_auxz00_3905);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 217 */
					long BgL_arg1969z00_1007;

					BgL_arg1969z00_1007 =
						((((long) 21772) << (int) (((long) 16))) | ((long) 32195));
					{	/* Unsafe/sha2.scm 217 */
						unsigned long BgL_auxz00_3911;

						BgL_auxz00_3911 = (unsigned long) (BgL_arg1969z00_1007);
						BGL_U32VSET(BgL_vz00_961, ((long) 11), BgL_auxz00_3911);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 218 */
					long BgL_arg1973z00_1011;

					BgL_arg1973z00_1011 =
						((((long) 29374) << (int) (((long) 16))) | ((long) 23924));
					{	/* Unsafe/sha2.scm 218 */
						unsigned long BgL_auxz00_3917;

						BgL_auxz00_3917 = (unsigned long) (BgL_arg1973z00_1011);
						BGL_U32VSET(BgL_vz00_961, ((long) 12), BgL_auxz00_3917);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 219 */
					long BgL_arg1977z00_1015;

					BgL_arg1977z00_1015 =
						((((long) 32990) << (int) (((long) 16))) | ((long) 45566));
					{	/* Unsafe/sha2.scm 219 */
						unsigned long BgL_auxz00_3923;

						BgL_auxz00_3923 = (unsigned long) (BgL_arg1977z00_1015);
						BGL_U32VSET(BgL_vz00_961, ((long) 13), BgL_auxz00_3923);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 220 */
					long BgL_arg1982z00_1019;

					BgL_arg1982z00_1019 =
						((((long) 39900) << (int) (((long) 16))) | ((long) 1703));
					{	/* Unsafe/sha2.scm 220 */
						unsigned long BgL_auxz00_3929;

						BgL_auxz00_3929 = (unsigned long) (BgL_arg1982z00_1019);
						BGL_U32VSET(BgL_vz00_961, ((long) 14), BgL_auxz00_3929);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 221 */
					long BgL_arg1986z00_1023;

					BgL_arg1986z00_1023 =
						((((long) 49563) << (int) (((long) 16))) | ((long) 61812));
					{	/* Unsafe/sha2.scm 221 */
						unsigned long BgL_auxz00_3935;

						BgL_auxz00_3935 = (unsigned long) (BgL_arg1986z00_1023);
						BGL_U32VSET(BgL_vz00_961, ((long) 15), BgL_auxz00_3935);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 222 */
					long BgL_arg1990z00_1027;

					BgL_arg1990z00_1027 =
						((((long) 58523) << (int) (((long) 16))) | ((long) 27073));
					{	/* Unsafe/sha2.scm 222 */
						unsigned long BgL_auxz00_3941;

						BgL_auxz00_3941 = (unsigned long) (BgL_arg1990z00_1027);
						BGL_U32VSET(BgL_vz00_961, ((long) 16), BgL_auxz00_3941);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 223 */
					long BgL_arg1994z00_1031;

					BgL_arg1994z00_1031 =
						((((long) 61374) << (int) (((long) 16))) | ((long) 18310));
					{	/* Unsafe/sha2.scm 223 */
						unsigned long BgL_auxz00_3947;

						BgL_auxz00_3947 = (unsigned long) (BgL_arg1994z00_1031);
						BGL_U32VSET(BgL_vz00_961, ((long) 17), BgL_auxz00_3947);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 224 */
					long BgL_arg1999z00_1035;

					BgL_arg1999z00_1035 =
						((((long) 4033) << (int) (((long) 16))) | ((long) 40390));
					{	/* Unsafe/sha2.scm 224 */
						unsigned long BgL_auxz00_3953;

						BgL_auxz00_3953 = (unsigned long) (BgL_arg1999z00_1035);
						BGL_U32VSET(BgL_vz00_961, ((long) 18), BgL_auxz00_3953);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 225 */
					long BgL_arg2003z00_1039;

					BgL_arg2003z00_1039 =
						((((long) 9228) << (int) (((long) 16))) | ((long) 41420));
					{	/* Unsafe/sha2.scm 225 */
						unsigned long BgL_auxz00_3959;

						BgL_auxz00_3959 = (unsigned long) (BgL_arg2003z00_1039);
						BGL_U32VSET(BgL_vz00_961, ((long) 19), BgL_auxz00_3959);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 226 */
					long BgL_arg2007z00_1043;

					BgL_arg2007z00_1043 =
						((((long) 11753) << (int) (((long) 16))) | ((long) 11375));
					{	/* Unsafe/sha2.scm 226 */
						unsigned long BgL_auxz00_3965;

						BgL_auxz00_3965 = (unsigned long) (BgL_arg2007z00_1043);
						BGL_U32VSET(BgL_vz00_961, ((long) 20), BgL_auxz00_3965);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 227 */
					long BgL_arg2011z00_1047;

					BgL_arg2011z00_1047 =
						((((long) 19060) << (int) (((long) 16))) | ((long) 33962));
					{	/* Unsafe/sha2.scm 227 */
						unsigned long BgL_auxz00_3971;

						BgL_auxz00_3971 = (unsigned long) (BgL_arg2011z00_1047);
						BGL_U32VSET(BgL_vz00_961, ((long) 21), BgL_auxz00_3971);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 228 */
					long BgL_arg2016z00_1051;

					BgL_arg2016z00_1051 =
						((((long) 23728) << (int) (((long) 16))) | ((long) 43484));
					{	/* Unsafe/sha2.scm 228 */
						unsigned long BgL_auxz00_3977;

						BgL_auxz00_3977 = (unsigned long) (BgL_arg2016z00_1051);
						BGL_U32VSET(BgL_vz00_961, ((long) 22), BgL_auxz00_3977);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 229 */
					long BgL_arg2021z00_1055;

					BgL_arg2021z00_1055 =
						((((long) 30457) << (int) (((long) 16))) | ((long) 35034));
					{	/* Unsafe/sha2.scm 229 */
						unsigned long BgL_auxz00_3983;

						BgL_auxz00_3983 = (unsigned long) (BgL_arg2021z00_1055);
						BGL_U32VSET(BgL_vz00_961, ((long) 23), BgL_auxz00_3983);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 230 */
					long BgL_arg2025z00_1059;

					BgL_arg2025z00_1059 =
						((((long) 38974) << (int) (((long) 16))) | ((long) 20818));
					{	/* Unsafe/sha2.scm 230 */
						unsigned long BgL_auxz00_3989;

						BgL_auxz00_3989 = (unsigned long) (BgL_arg2025z00_1059);
						BGL_U32VSET(BgL_vz00_961, ((long) 24), BgL_auxz00_3989);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 231 */
					long BgL_arg2030z00_1063;

					BgL_arg2030z00_1063 =
						((((long) 43057) << (int) (((long) 16))) | ((long) 50797));
					{	/* Unsafe/sha2.scm 231 */
						unsigned long BgL_auxz00_3995;

						BgL_auxz00_3995 = (unsigned long) (BgL_arg2030z00_1063);
						BGL_U32VSET(BgL_vz00_961, ((long) 25), BgL_auxz00_3995);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 232 */
					long BgL_arg2036z00_1067;

					BgL_arg2036z00_1067 =
						((((long) 45059) << (int) (((long) 16))) | ((long) 10184));
					{	/* Unsafe/sha2.scm 232 */
						unsigned long BgL_auxz00_4001;

						BgL_auxz00_4001 = (unsigned long) (BgL_arg2036z00_1067);
						BGL_U32VSET(BgL_vz00_961, ((long) 26), BgL_auxz00_4001);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 233 */
					long BgL_arg2040z00_1071;

					BgL_arg2040z00_1071 =
						((((long) 48985) << (int) (((long) 16))) | ((long) 32711));
					{	/* Unsafe/sha2.scm 233 */
						unsigned long BgL_auxz00_4007;

						BgL_auxz00_4007 = (unsigned long) (BgL_arg2040z00_1071);
						BGL_U32VSET(BgL_vz00_961, ((long) 27), BgL_auxz00_4007);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 234 */
					long BgL_arg2044z00_1075;

					BgL_arg2044z00_1075 =
						((((long) 50912) << (int) (((long) 16))) | ((long) 3059));
					{	/* Unsafe/sha2.scm 234 */
						unsigned long BgL_auxz00_4013;

						BgL_auxz00_4013 = (unsigned long) (BgL_arg2044z00_1075);
						BGL_U32VSET(BgL_vz00_961, ((long) 28), BgL_auxz00_4013);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 235 */
					long BgL_arg2048z00_1079;

					BgL_arg2048z00_1079 =
						((((long) 54695) << (int) (((long) 16))) | ((long) 37191));
					{	/* Unsafe/sha2.scm 235 */
						unsigned long BgL_auxz00_4019;

						BgL_auxz00_4019 = (unsigned long) (BgL_arg2048z00_1079);
						BGL_U32VSET(BgL_vz00_961, ((long) 29), BgL_auxz00_4019);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 236 */
					long BgL_arg2054z00_1083;

					BgL_arg2054z00_1083 =
						((((long) 1738) << (int) (((long) 16))) | ((long) 25425));
					{	/* Unsafe/sha2.scm 236 */
						unsigned long BgL_auxz00_4025;

						BgL_auxz00_4025 = (unsigned long) (BgL_arg2054z00_1083);
						BGL_U32VSET(BgL_vz00_961, ((long) 30), BgL_auxz00_4025);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 237 */
					long BgL_arg2058z00_1087;

					BgL_arg2058z00_1087 =
						((((long) 5161) << (int) (((long) 16))) | ((long) 10599));
					{	/* Unsafe/sha2.scm 237 */
						unsigned long BgL_auxz00_4031;

						BgL_auxz00_4031 = (unsigned long) (BgL_arg2058z00_1087);
						BGL_U32VSET(BgL_vz00_961, ((long) 31), BgL_auxz00_4031);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 238 */
					long BgL_arg2062z00_1091;

					BgL_arg2062z00_1091 =
						((((long) 10167) << (int) (((long) 16))) | ((long) 2693));
					{	/* Unsafe/sha2.scm 238 */
						unsigned long BgL_auxz00_4037;

						BgL_auxz00_4037 = (unsigned long) (BgL_arg2062z00_1091);
						BGL_U32VSET(BgL_vz00_961, ((long) 32), BgL_auxz00_4037);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 239 */
					long BgL_arg2066z00_1095;

					BgL_arg2066z00_1095 =
						((((long) 11803) << (int) (((long) 16))) | ((long) 8504));
					{	/* Unsafe/sha2.scm 239 */
						unsigned long BgL_auxz00_4043;

						BgL_auxz00_4043 = (unsigned long) (BgL_arg2066z00_1095);
						BGL_U32VSET(BgL_vz00_961, ((long) 33), BgL_auxz00_4043);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 240 */
					long BgL_arg2070z00_1099;

					BgL_arg2070z00_1099 =
						((((long) 19756) << (int) (((long) 16))) | ((long) 28156));
					{	/* Unsafe/sha2.scm 240 */
						unsigned long BgL_auxz00_4049;

						BgL_auxz00_4049 = (unsigned long) (BgL_arg2070z00_1099);
						BGL_U32VSET(BgL_vz00_961, ((long) 34), BgL_auxz00_4049);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 241 */
					long BgL_arg2077z00_1103;

					BgL_arg2077z00_1103 =
						((((long) 21304) << (int) (((long) 16))) | ((long) 3347));
					{	/* Unsafe/sha2.scm 241 */
						unsigned long BgL_auxz00_4055;

						BgL_auxz00_4055 = (unsigned long) (BgL_arg2077z00_1103);
						BGL_U32VSET(BgL_vz00_961, ((long) 35), BgL_auxz00_4055);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 242 */
					long BgL_arg2081z00_1107;

					BgL_arg2081z00_1107 =
						((((long) 25866) << (int) (((long) 16))) | ((long) 29524));
					{	/* Unsafe/sha2.scm 242 */
						unsigned long BgL_auxz00_4061;

						BgL_auxz00_4061 = (unsigned long) (BgL_arg2081z00_1107);
						BGL_U32VSET(BgL_vz00_961, ((long) 36), BgL_auxz00_4061);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 243 */
					long BgL_arg2085z00_1111;

					BgL_arg2085z00_1111 =
						((((long) 30314) << (int) (((long) 16))) | ((long) 2747));
					{	/* Unsafe/sha2.scm 243 */
						unsigned long BgL_auxz00_4067;

						BgL_auxz00_4067 = (unsigned long) (BgL_arg2085z00_1111);
						BGL_U32VSET(BgL_vz00_961, ((long) 37), BgL_auxz00_4067);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 244 */
					long BgL_arg2091z00_1115;

					BgL_arg2091z00_1115 =
						((((long) 33218) << (int) (((long) 16))) | ((long) 51502));
					{	/* Unsafe/sha2.scm 244 */
						unsigned long BgL_auxz00_4073;

						BgL_auxz00_4073 = (unsigned long) (BgL_arg2091z00_1115);
						BGL_U32VSET(BgL_vz00_961, ((long) 38), BgL_auxz00_4073);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 245 */
					long BgL_arg2095z00_1119;

					BgL_arg2095z00_1119 =
						((((long) 37490) << (int) (((long) 16))) | ((long) 11397));
					{	/* Unsafe/sha2.scm 245 */
						unsigned long BgL_auxz00_4079;

						BgL_auxz00_4079 = (unsigned long) (BgL_arg2095z00_1119);
						BGL_U32VSET(BgL_vz00_961, ((long) 39), BgL_auxz00_4079);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 246 */
					long BgL_arg2099z00_1123;

					BgL_arg2099z00_1123 =
						((((long) 41663) << (int) (((long) 16))) | ((long) 59553));
					{	/* Unsafe/sha2.scm 246 */
						unsigned long BgL_auxz00_4085;

						BgL_auxz00_4085 = (unsigned long) (BgL_arg2099z00_1123);
						BGL_U32VSET(BgL_vz00_961, ((long) 40), BgL_auxz00_4085);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 247 */
					long BgL_arg2103z00_1127;

					BgL_arg2103z00_1127 =
						((((long) 43034) << (int) (((long) 16))) | ((long) 26187));
					{	/* Unsafe/sha2.scm 247 */
						unsigned long BgL_auxz00_4091;

						BgL_auxz00_4091 = (unsigned long) (BgL_arg2103z00_1127);
						BGL_U32VSET(BgL_vz00_961, ((long) 41), BgL_auxz00_4091);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 248 */
					long BgL_arg2107z00_1131;

					BgL_arg2107z00_1131 =
						((((long) 49739) << (int) (((long) 16))) | ((long) 35696));
					{	/* Unsafe/sha2.scm 248 */
						unsigned long BgL_auxz00_4097;

						BgL_auxz00_4097 = (unsigned long) (BgL_arg2107z00_1131);
						BGL_U32VSET(BgL_vz00_961, ((long) 42), BgL_auxz00_4097);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 249 */
					long BgL_arg2111z00_1135;

					BgL_arg2111z00_1135 =
						((((long) 51052) << (int) (((long) 16))) | ((long) 20899));
					{	/* Unsafe/sha2.scm 249 */
						unsigned long BgL_auxz00_4103;

						BgL_auxz00_4103 = (unsigned long) (BgL_arg2111z00_1135);
						BGL_U32VSET(BgL_vz00_961, ((long) 43), BgL_auxz00_4103);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 250 */
					long BgL_arg2115z00_1139;

					BgL_arg2115z00_1139 =
						((((long) 53650) << (int) (((long) 16))) | ((long) 59417));
					{	/* Unsafe/sha2.scm 250 */
						unsigned long BgL_auxz00_4109;

						BgL_auxz00_4109 = (unsigned long) (BgL_arg2115z00_1139);
						BGL_U32VSET(BgL_vz00_961, ((long) 44), BgL_auxz00_4109);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 251 */
					long BgL_arg2121z00_1143;

					BgL_arg2121z00_1143 =
						((((long) 54937) << (int) (((long) 16))) | ((long) 1572));
					{	/* Unsafe/sha2.scm 251 */
						unsigned long BgL_auxz00_4115;

						BgL_auxz00_4115 = (unsigned long) (BgL_arg2121z00_1143);
						BGL_U32VSET(BgL_vz00_961, ((long) 45), BgL_auxz00_4115);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 252 */
					long BgL_arg2126z00_1147;

					BgL_arg2126z00_1147 =
						((((long) 62478) << (int) (((long) 16))) | ((long) 13701));
					{	/* Unsafe/sha2.scm 252 */
						unsigned long BgL_auxz00_4121;

						BgL_auxz00_4121 = (unsigned long) (BgL_arg2126z00_1147);
						BGL_U32VSET(BgL_vz00_961, ((long) 46), BgL_auxz00_4121);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 253 */
					long BgL_arg2132z00_1151;

					BgL_arg2132z00_1151 =
						((((long) 4202) << (int) (((long) 16))) | ((long) 41072));
					{	/* Unsafe/sha2.scm 253 */
						unsigned long BgL_auxz00_4127;

						BgL_auxz00_4127 = (unsigned long) (BgL_arg2132z00_1151);
						BGL_U32VSET(BgL_vz00_961, ((long) 47), BgL_auxz00_4127);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 254 */
					long BgL_arg2136z00_1155;

					BgL_arg2136z00_1155 =
						((((long) 6564) << (int) (((long) 16))) | ((long) 49430));
					{	/* Unsafe/sha2.scm 254 */
						unsigned long BgL_auxz00_4133;

						BgL_auxz00_4133 = (unsigned long) (BgL_arg2136z00_1155);
						BGL_U32VSET(BgL_vz00_961, ((long) 48), BgL_auxz00_4133);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 255 */
					long BgL_arg2140z00_1159;

					BgL_arg2140z00_1159 =
						((((long) 7735) << (int) (((long) 16))) | ((long) 27656));
					{	/* Unsafe/sha2.scm 255 */
						unsigned long BgL_auxz00_4139;

						BgL_auxz00_4139 = (unsigned long) (BgL_arg2140z00_1159);
						BGL_U32VSET(BgL_vz00_961, ((long) 49), BgL_auxz00_4139);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 256 */
					long BgL_arg2146z00_1163;

					BgL_arg2146z00_1163 =
						((((long) 10056) << (int) (((long) 16))) | ((long) 30540));
					{	/* Unsafe/sha2.scm 256 */
						unsigned long BgL_auxz00_4145;

						BgL_auxz00_4145 = (unsigned long) (BgL_arg2146z00_1163);
						BGL_U32VSET(BgL_vz00_961, ((long) 50), BgL_auxz00_4145);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 257 */
					long BgL_arg2150z00_1167;

					BgL_arg2150z00_1167 =
						((((long) 13488) << (int) (((long) 16))) | ((long) 48309));
					{	/* Unsafe/sha2.scm 257 */
						unsigned long BgL_auxz00_4151;

						BgL_auxz00_4151 = (unsigned long) (BgL_arg2150z00_1167);
						BGL_U32VSET(BgL_vz00_961, ((long) 51), BgL_auxz00_4151);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 258 */
					long BgL_arg2154z00_1171;

					BgL_arg2154z00_1171 =
						((((long) 14620) << (int) (((long) 16))) | ((long) 3251));
					{	/* Unsafe/sha2.scm 258 */
						unsigned long BgL_auxz00_4157;

						BgL_auxz00_4157 = (unsigned long) (BgL_arg2154z00_1171);
						BGL_U32VSET(BgL_vz00_961, ((long) 52), BgL_auxz00_4157);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 259 */
					long BgL_arg2158z00_1175;

					BgL_arg2158z00_1175 =
						((((long) 20184) << (int) (((long) 16))) | ((long) 43594));
					{	/* Unsafe/sha2.scm 259 */
						unsigned long BgL_auxz00_4163;

						BgL_auxz00_4163 = (unsigned long) (BgL_arg2158z00_1175);
						BGL_U32VSET(BgL_vz00_961, ((long) 53), BgL_auxz00_4163);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 260 */
					long BgL_arg2162z00_1179;

					BgL_arg2162z00_1179 =
						((((long) 23452) << (int) (((long) 16))) | ((long) 51791));
					{	/* Unsafe/sha2.scm 260 */
						unsigned long BgL_auxz00_4169;

						BgL_auxz00_4169 = (unsigned long) (BgL_arg2162z00_1179);
						BGL_U32VSET(BgL_vz00_961, ((long) 54), BgL_auxz00_4169);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 261 */
					long BgL_arg2166z00_1183;

					BgL_arg2166z00_1183 =
						((((long) 26670) << (int) (((long) 16))) | ((long) 28659));
					{	/* Unsafe/sha2.scm 261 */
						unsigned long BgL_auxz00_4175;

						BgL_auxz00_4175 = (unsigned long) (BgL_arg2166z00_1183);
						BGL_U32VSET(BgL_vz00_961, ((long) 55), BgL_auxz00_4175);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 262 */
					long BgL_arg2170z00_1187;

					BgL_arg2170z00_1187 =
						((((long) 29839) << (int) (((long) 16))) | ((long) 33518));
					{	/* Unsafe/sha2.scm 262 */
						unsigned long BgL_auxz00_4181;

						BgL_auxz00_4181 = (unsigned long) (BgL_arg2170z00_1187);
						BGL_U32VSET(BgL_vz00_961, ((long) 56), BgL_auxz00_4181);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 263 */
					long BgL_arg2174z00_1191;

					BgL_arg2174z00_1191 =
						((((long) 30885) << (int) (((long) 16))) | ((long) 25455));
					{	/* Unsafe/sha2.scm 263 */
						unsigned long BgL_auxz00_4187;

						BgL_auxz00_4187 = (unsigned long) (BgL_arg2174z00_1191);
						BGL_U32VSET(BgL_vz00_961, ((long) 57), BgL_auxz00_4187);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 264 */
					long BgL_arg2178z00_1195;

					BgL_arg2178z00_1195 =
						((((long) 33992) << (int) (((long) 16))) | ((long) 30740));
					{	/* Unsafe/sha2.scm 264 */
						unsigned long BgL_auxz00_4193;

						BgL_auxz00_4193 = (unsigned long) (BgL_arg2178z00_1195);
						BGL_U32VSET(BgL_vz00_961, ((long) 58), BgL_auxz00_4193);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 265 */
					long BgL_arg2182z00_1199;

					BgL_arg2182z00_1199 =
						((((long) 36039) << (int) (((long) 16))) | ((long) 520));
					{	/* Unsafe/sha2.scm 265 */
						unsigned long BgL_auxz00_4199;

						BgL_auxz00_4199 = (unsigned long) (BgL_arg2182z00_1199);
						BGL_U32VSET(BgL_vz00_961, ((long) 59), BgL_auxz00_4199);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 266 */
					long BgL_arg2186z00_1203;

					BgL_arg2186z00_1203 =
						((((long) 37054) << (int) (((long) 16))) | ((long) 65530));
					{	/* Unsafe/sha2.scm 266 */
						unsigned long BgL_auxz00_4205;

						BgL_auxz00_4205 = (unsigned long) (BgL_arg2186z00_1203);
						BGL_U32VSET(BgL_vz00_961, ((long) 60), BgL_auxz00_4205);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 267 */
					long BgL_arg2190z00_1207;

					BgL_arg2190z00_1207 =
						((((long) 42064) << (int) (((long) 16))) | ((long) 27883));
					{	/* Unsafe/sha2.scm 267 */
						unsigned long BgL_auxz00_4211;

						BgL_auxz00_4211 = (unsigned long) (BgL_arg2190z00_1207);
						BGL_U32VSET(BgL_vz00_961, ((long) 61), BgL_auxz00_4211);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 268 */
					long BgL_arg2194z00_1211;

					BgL_arg2194z00_1211 =
						((((long) 48889) << (int) (((long) 16))) | ((long) 41975));
					{	/* Unsafe/sha2.scm 268 */
						unsigned long BgL_auxz00_4217;

						BgL_auxz00_4217 = (unsigned long) (BgL_arg2194z00_1211);
						BGL_U32VSET(BgL_vz00_961, ((long) 62), BgL_auxz00_4217);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 269 */
					long BgL_arg2198z00_1215;

					BgL_arg2198z00_1215 =
						((((long) 50801) << (int) (((long) 16))) | ((long) 30962));
					{	/* Unsafe/sha2.scm 269 */
						unsigned long BgL_auxz00_4223;

						BgL_auxz00_4223 = (unsigned long) (BgL_arg2198z00_1215);
						BGL_U32VSET(BgL_vz00_961, ((long) 63), BgL_auxz00_4223);
					} BUNSPEC;
				}
				return (BGl_K256z00zz__sha2z00 = BgL_vz00_961, BUNSPEC);
			}
		}
	}



/* rotr32 */
	unsigned long BGl_rotr32z00zz__sha2z00(unsigned long BgL_xz00_3,
		int BgL_nz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 150 */
			return
				(unsigned long) (
				((long) (
						(BgL_xz00_3 >>
							(int) (
								(long) (BgL_nz00_4)))) |
					((long) (BgL_xz00_3) <<
						(int) ((((long) 32) - (long) (BgL_nz00_4))))));
		}
	}



/* u32-fill! */
	obj_t BGl_u32zd2fillz12zc0zz__sha2z00(obj_t BgL_strz00_5,
		long BgL_offsetz00_6, unsigned long BgL_wz00_7)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 156 */
			{	/* Unsafe/sha2.scm 157 */
				obj_t BgL_s1z00_1232;

				BgL_s1z00_1232 =
					BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
					(long) ((BgL_wz00_7 >> (int) (((long) 16)))), ((long) 16));
				{	/* Unsafe/sha2.scm 157 */
					long BgL_l1z00_1233;

					BgL_l1z00_1233 = STRING_LENGTH(BgL_s1z00_1232);
					{	/* Unsafe/sha2.scm 158 */
						obj_t BgL_s2z00_1234;

						BgL_s2z00_1234 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							((long) (BgL_wz00_7) &
								((((long) 1) <<
										(int) (((long) 16))) - ((long) 1))), ((long) 16));
						{	/* Unsafe/sha2.scm 159 */
							long BgL_l2z00_1235;

							BgL_l2z00_1235 = STRING_LENGTH(BgL_s2z00_1234);
							{	/* Unsafe/sha2.scm 160 */

								blit_string(BgL_s1z00_1232, ((long) 0), BgL_strz00_5,
									(BgL_offsetz00_6 +
										(((long) 4) - BgL_l1z00_1233)), BgL_l1z00_1233);
								return
									blit_string(BgL_s2z00_1234, ((long) 0), BgL_strz00_5,
									(BgL_offsetz00_6 +
										(((long) 4) +
											(((long) 4) - BgL_l2z00_1235))), BgL_l2z00_1235);
		}}}}}}
	}



/* state->string */
	obj_t BGl_statezd2ze3stringz31zz__sha2z00(obj_t BgL_statez00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 167 */
			{	/* Unsafe/sha2.scm 168 */
				obj_t BgL_rz00_1251;

				{	/* Unsafe/sha2.scm 168 */
					obj_t BgL_list2251z00_1268;

					BgL_list2251z00_1268 = MAKE_PAIR(BCHAR(((unsigned char) '0')), BNIL);
					{	/* Unsafe/sha2.scm 168 */
						obj_t BgL_res3005z00_2782;

						{	/* Unsafe/sha2.scm 168 */
							obj_t BgL_arg2850z00_2779;

							BgL_arg2850z00_2779 = CAR(BgL_list2251z00_1268);
							BgL_res3005z00_2782 =
								make_string(((long) 64), CCHAR(BgL_arg2850z00_2779));
						}
						BgL_rz00_1251 = BgL_res3005z00_2782;
				}}
				{	/* Unsafe/sha2.scm 169 */
					unsigned long BgL_arg2235z00_1253;

					BgL_arg2235z00_1253 = BGL_U32VREF(BgL_statez00_8, ((long) 0));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 0),
						BgL_arg2235z00_1253);
				}
				{	/* Unsafe/sha2.scm 170 */
					unsigned long BgL_arg2237z00_1255;

					BgL_arg2237z00_1255 = BGL_U32VREF(BgL_statez00_8, ((long) 1));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 8),
						BgL_arg2237z00_1255);
				}
				{	/* Unsafe/sha2.scm 171 */
					unsigned long BgL_arg2239z00_1257;

					BgL_arg2239z00_1257 = BGL_U32VREF(BgL_statez00_8, ((long) 2));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 16),
						BgL_arg2239z00_1257);
				}
				{	/* Unsafe/sha2.scm 172 */
					unsigned long BgL_arg2242z00_1259;

					BgL_arg2242z00_1259 = BGL_U32VREF(BgL_statez00_8, ((long) 3));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 24),
						BgL_arg2242z00_1259);
				}
				{	/* Unsafe/sha2.scm 173 */
					unsigned long BgL_arg2244z00_1261;

					BgL_arg2244z00_1261 = BGL_U32VREF(BgL_statez00_8, ((long) 4));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 32),
						BgL_arg2244z00_1261);
				}
				{	/* Unsafe/sha2.scm 174 */
					unsigned long BgL_arg2246z00_1263;

					BgL_arg2246z00_1263 = BGL_U32VREF(BgL_statez00_8, ((long) 5));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 40),
						BgL_arg2246z00_1263);
				}
				{	/* Unsafe/sha2.scm 175 */
					unsigned long BgL_arg2248z00_1265;

					BgL_arg2248z00_1265 = BGL_U32VREF(BgL_statez00_8, ((long) 6));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 48),
						BgL_arg2248z00_1265);
				}
				{	/* Unsafe/sha2.scm 176 */
					unsigned long BgL_arg2250z00_1267;

					BgL_arg2250z00_1267 = BGL_U32VREF(BgL_statez00_8, ((long) 7));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1251, ((long) 56),
						BgL_arg2250z00_1267);
				}
				return BgL_rz00_1251;
			}
		}
	}



/* sha256-initial-hash-value */
	obj_t BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 275 */
			{	/* Unsafe/sha2.scm 276 */
				obj_t BgL_vz00_1269;

				{	/* Llib/srfi4.scm 235 */

					BgL_vz00_1269 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 8), BINT(((long) 0)));
				}
				{	/* Unsafe/sha2.scm 277 */
					long BgL_arg2253z00_1271;

					BgL_arg2253z00_1271 =
						((((long) 27145) << (int) (((long) 16))) | ((long) 58983));
					{	/* Unsafe/sha2.scm 277 */
						unsigned long BgL_auxz00_4282;

						BgL_auxz00_4282 = (unsigned long) (BgL_arg2253z00_1271);
						BGL_U32VSET(BgL_vz00_1269, ((long) 0), BgL_auxz00_4282);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 278 */
					long BgL_arg2259z00_1275;

					BgL_arg2259z00_1275 =
						((((long) 47975) << (int) (((long) 16))) | ((long) 44677));
					{	/* Unsafe/sha2.scm 278 */
						unsigned long BgL_auxz00_4288;

						BgL_auxz00_4288 = (unsigned long) (BgL_arg2259z00_1275);
						BGL_U32VSET(BgL_vz00_1269, ((long) 1), BgL_auxz00_4288);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 279 */
					long BgL_arg2264z00_1279;

					BgL_arg2264z00_1279 =
						((((long) 15470) << (int) (((long) 16))) | ((long) 62322));
					{	/* Unsafe/sha2.scm 279 */
						unsigned long BgL_auxz00_4294;

						BgL_auxz00_4294 = (unsigned long) (BgL_arg2264z00_1279);
						BGL_U32VSET(BgL_vz00_1269, ((long) 2), BgL_auxz00_4294);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 280 */
					long BgL_arg2268z00_1283;

					BgL_arg2268z00_1283 =
						((((long) 42319) << (int) (((long) 16))) | ((long) 62778));
					{	/* Unsafe/sha2.scm 280 */
						unsigned long BgL_auxz00_4300;

						BgL_auxz00_4300 = (unsigned long) (BgL_arg2268z00_1283);
						BGL_U32VSET(BgL_vz00_1269, ((long) 3), BgL_auxz00_4300);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 281 */
					long BgL_arg2272z00_1287;

					BgL_arg2272z00_1287 =
						((((long) 20750) << (int) (((long) 16))) | ((long) 21119));
					{	/* Unsafe/sha2.scm 281 */
						unsigned long BgL_auxz00_4306;

						BgL_auxz00_4306 = (unsigned long) (BgL_arg2272z00_1287);
						BGL_U32VSET(BgL_vz00_1269, ((long) 4), BgL_auxz00_4306);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 282 */
					long BgL_arg2278z00_1291;

					BgL_arg2278z00_1291 =
						((((long) 39685) << (int) (((long) 16))) | ((long) 26764));
					{	/* Unsafe/sha2.scm 282 */
						unsigned long BgL_auxz00_4312;

						BgL_auxz00_4312 = (unsigned long) (BgL_arg2278z00_1291);
						BGL_U32VSET(BgL_vz00_1269, ((long) 5), BgL_auxz00_4312);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 283 */
					long BgL_arg2282z00_1295;

					BgL_arg2282z00_1295 =
						((((long) 8067) << (int) (((long) 16))) | ((long) 55723));
					{	/* Unsafe/sha2.scm 283 */
						unsigned long BgL_auxz00_4318;

						BgL_auxz00_4318 = (unsigned long) (BgL_arg2282z00_1295);
						BGL_U32VSET(BgL_vz00_1269, ((long) 6), BgL_auxz00_4318);
					} BUNSPEC;
				}
				{	/* Unsafe/sha2.scm 284 */
					long BgL_arg2286z00_1299;

					BgL_arg2286z00_1299 =
						((((long) 23520) << (int) (((long) 16))) | ((long) 52505));
					{	/* Unsafe/sha2.scm 284 */
						unsigned long BgL_auxz00_4324;

						BgL_auxz00_4324 = (unsigned long) (BgL_arg2286z00_1299);
						BGL_U32VSET(BgL_vz00_1269, ((long) 7), BgL_auxz00_4324);
					} BUNSPEC;
				}
				return BgL_vz00_1269;
			}
		}
	}



/* Sigma1-256 */
	unsigned long BGl_Sigma1zd2256zd2zz__sha2z00(unsigned long BgL_xz00_17)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 314 */
			{	/* Unsafe/sha2.scm 315 */
				long BgL_auxz00_4327;

				{	/* Unsafe/sha2.scm 315 */
					long BgL_auxz00_4343;

					long BgL_auxz00_4328;

					{	/* Unsafe/sha2.scm 315 */
						long BgL_auxz00_4359;

						long BgL_auxz00_4344;

						{	/* Unsafe/sha2.scm 315 */
							unsigned long BgL_auxz00_4360;

							{	/* Unsafe/sha2.scm 315 */
								int BgL_nz00_2960;

								BgL_nz00_2960 = (int) (((long) 25));
								BgL_auxz00_4360 =
									(unsigned long) (
									((long) (
											(BgL_xz00_17 >>
												(int) (
													(long) (BgL_nz00_2960)))) |
										((long) (BgL_xz00_17) <<
											(int) ((((long) 32) - (long) (BgL_nz00_2960))))));
							}
							BgL_auxz00_4359 = (long) (BgL_auxz00_4360);
						}
						{	/* Unsafe/sha2.scm 315 */
							unsigned long BgL_auxz00_4345;

							{	/* Unsafe/sha2.scm 315 */
								int BgL_nz00_2946;

								BgL_nz00_2946 = (int) (((long) 11));
								BgL_auxz00_4345 =
									(unsigned long) (
									((long) (
											(BgL_xz00_17 >>
												(int) (
													(long) (BgL_nz00_2946)))) |
										((long) (BgL_xz00_17) <<
											(int) ((((long) 32) - (long) (BgL_nz00_2946))))));
							}
							BgL_auxz00_4344 = (long) (BgL_auxz00_4345);
						}
						BgL_auxz00_4343 = (BgL_auxz00_4344 ^ BgL_auxz00_4359);
					}
					{	/* Unsafe/sha2.scm 315 */
						unsigned long BgL_auxz00_4329;

						{	/* Unsafe/sha2.scm 315 */
							int BgL_nz00_2932;

							BgL_nz00_2932 = (int) (((long) 6));
							BgL_auxz00_4329 =
								(unsigned long) (
								((long) (
										(BgL_xz00_17 >>
											(int) (
												(long) (BgL_nz00_2932)))) |
									((long) (BgL_xz00_17) <<
										(int) ((((long) 32) - (long) (BgL_nz00_2932))))));
						}
						BgL_auxz00_4328 = (long) (BgL_auxz00_4329);
					}
					BgL_auxz00_4327 = (BgL_auxz00_4328 ^ BgL_auxz00_4343);
				}
				return (unsigned long) (BgL_auxz00_4327);
		}}
	}



/* sha256-internal-transform */
	obj_t BGl_sha256zd2internalzd2transformz00zz__sha2z00(obj_t BgL_statez00_27,
		obj_t BgL_bufferz00_28)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 338 */
			{
				obj_t BgL_statez00_1417;

				unsigned long BgL_az00_1418;

				unsigned long BgL_bz00_1419;

				unsigned long BgL_cz00_1420;

				unsigned long BgL_dz00_1421;

				unsigned long BgL_ez00_1422;

				unsigned long BgL_fz00_1423;

				unsigned long BgL_gz00_1424;

				unsigned long BgL_hz00_1425;

				{	/* Unsafe/sha2.scm 375 */
					unsigned long BgL_g1836z00_1331;

					unsigned long BgL_g1837z00_1332;

					unsigned long BgL_g1838z00_1333;

					unsigned long BgL_g1839z00_1334;

					unsigned long BgL_g1840z00_1335;

					unsigned long BgL_g1841z00_1336;

					unsigned long BgL_g1842z00_1337;

					unsigned long BgL_g1843z00_1338;

					BgL_g1836z00_1331 = BGL_U32VREF(BgL_statez00_27, ((long) 0));
					BgL_g1837z00_1332 = BGL_U32VREF(BgL_statez00_27, ((long) 1));
					BgL_g1838z00_1333 = BGL_U32VREF(BgL_statez00_27, ((long) 2));
					BgL_g1839z00_1334 = BGL_U32VREF(BgL_statez00_27, ((long) 3));
					BgL_g1840z00_1335 = BGL_U32VREF(BgL_statez00_27, ((long) 4));
					BgL_g1841z00_1336 = BGL_U32VREF(BgL_statez00_27, ((long) 5));
					BgL_g1842z00_1337 = BGL_U32VREF(BgL_statez00_27, ((long) 6));
					BgL_g1843z00_1338 = BGL_U32VREF(BgL_statez00_27, ((long) 7));
					{
						unsigned long BgL_az00_1340;

						unsigned long BgL_bz00_1341;

						unsigned long BgL_cz00_1342;

						unsigned long BgL_dz00_1343;

						unsigned long BgL_ez00_1344;

						unsigned long BgL_fz00_1345;

						unsigned long BgL_gz00_1346;

						unsigned long BgL_hz00_1347;

						long BgL_jz00_1348;

						BgL_az00_1340 = BgL_g1836z00_1331;
						BgL_bz00_1341 = BgL_g1837z00_1332;
						BgL_cz00_1342 = BgL_g1838z00_1333;
						BgL_dz00_1343 = BgL_g1839z00_1334;
						BgL_ez00_1344 = BgL_g1840z00_1335;
						BgL_fz00_1345 = BgL_g1841z00_1336;
						BgL_gz00_1346 = BgL_g1842z00_1337;
						BgL_hz00_1347 = BgL_g1843z00_1338;
						BgL_jz00_1348 = ((long) 0);
					BgL_zc3anonymousza32316ze3z83_1349:
						if ((BgL_jz00_1348 < ((long) 16)))
							{	/* Unsafe/sha2.scm 386 */
								unsigned long BgL_wz00_1351;

								BgL_wz00_1351 = BGL_U32VREF(BgL_bufferz00_28, BgL_jz00_1348);
								{	/* Unsafe/sha2.scm 386 */
									unsigned long BgL_t1z00_1352;

									{	/* Unsafe/sha2.scm 387 */
										unsigned long BgL_arg2339z00_3031;

										{	/* Unsafe/sha2.scm 387 */
											unsigned long BgL_arg2340z00_3032;

											unsigned long BgL_arg2341z00_3033;

											BgL_arg2340z00_3032 =
												BGl_Sigma1zd2256zd2zz__sha2z00(BgL_ez00_1344);
											{	/* Unsafe/sha2.scm 387 */
												unsigned long BgL_arg2342z00_3034;

												unsigned long BgL_arg2343z00_3035;

												BgL_arg2342z00_3034 =
													(unsigned long) (
													(((long) (BgL_ez00_1344) &
															(long) (BgL_fz00_1345)) ^
														(~((long) (BgL_ez00_1344)) &
															(long) (BgL_gz00_1346))));
												{	/* Unsafe/sha2.scm 387 */
													unsigned long BgL_arg2344z00_3036;

													BgL_arg2344z00_3036 =
														BGL_U32VREF(BGl_K256z00zz__sha2z00, BgL_jz00_1348);
													{	/* Unsafe/sha2.scm 387 */

														BgL_arg2343z00_3035 =
															(unsigned long) (
															((long) (
																	(unsigned long) (
																		((long) (
																				(unsigned long) (
																					(((long) 65535) &
																						((long) (
																								(BgL_arg2344z00_3036 >>
																									(int) (((long) 16)))) +
																							(long) (
																								(BgL_wz00_1351 >>
																									(int) (((long) 16)))))))) <<
																			(int) (((long) 16))))) +
																(long) (
																	(unsigned long) (
																		((long) (
																				(unsigned long) (
																					((long) (BgL_arg2344z00_3036) &
																						((long) 65535)))) +
																			(long) ((unsigned
																					long) (((long) (BgL_wz00_1351) &
																						((long) 65535)))))))));
												}}
												{	/* Unsafe/sha2.scm 387 */

													BgL_arg2341z00_3033 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_arg2342z00_3034 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_arg2343z00_3035 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_arg2342z00_3034) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_arg2343z00_3035) &
																					((long) 65535)))))))));
											}}
											{	/* Unsafe/sha2.scm 387 */

												BgL_arg2339z00_3031 =
													(unsigned long) (
													((long) (
															(unsigned long) (
																((long) (
																		(unsigned long) (
																			(((long) 65535) &
																				((long) (
																						(BgL_arg2340z00_3032 >>
																							(int) (((long) 16)))) +
																					(long) (
																						(BgL_arg2341z00_3033 >>
																							(int) (((long) 16)))))))) <<
																	(int) (((long) 16))))) +
														(long) (
															(unsigned long) (
																((long) (
																		(unsigned long) (
																			((long) (BgL_arg2340z00_3032) & ((long)
																					65535)))) +
																	(long) ((unsigned
																			long) (((long) (BgL_arg2341z00_3033) &
																				((long) 65535)))))))));
										}}
										{	/* Unsafe/sha2.scm 387 */

											BgL_t1z00_1352 =
												(unsigned long) (
												((long) (
														(unsigned long) (
															((long) (
																	(unsigned long) (
																		(((long) 65535) &
																			((long) (
																					(BgL_hz00_1347 >>
																						(int) (((long) 16)))) +
																				(long) (
																					(BgL_arg2339z00_3031 >>
																						(int) (((long) 16)))))))) <<
																(int) (((long) 16))))) +
													(long) (
														(unsigned long) (
															((long) (
																	(unsigned long) (
																		((long) (BgL_hz00_1347) & ((long) 65535))))
																+
																(long) ((unsigned
																		long) (((long) (BgL_arg2339z00_3031) &
																			((long) 65535)))))))));
									}}
									{	/* Unsafe/sha2.scm 387 */
										unsigned long BgL_t2z00_1353;

										{	/* Unsafe/sha2.scm 388 */
											unsigned long BgL_n1z00_3770;

											unsigned long BgL_n2z00_3771;

											BgL_n1z00_3770 =
												(unsigned long) (
												((long) (BGl_rotr32z00zz__sha2z00(BgL_az00_1340,
															(int) (((long) 2)))) ^
													((long) (BGl_rotr32z00zz__sha2z00(BgL_az00_1340,
																(int) (((long) 13)))) ^
														(long) (BGl_rotr32z00zz__sha2z00(BgL_az00_1340,
																(int) (((long) 22)))))));
											BgL_n2z00_3771 =
												(unsigned long) (
												(((long) (BgL_az00_1340) &
														(long) (BgL_bz00_1341)) ^
													(((long) (BgL_az00_1340) &
															(long) (BgL_cz00_1342)) ^
														((long) (BgL_bz00_1341) &
															(long) (BgL_cz00_1342)))));
											{	/* Unsafe/sha2.scm 388 */

												BgL_t2z00_1353 =
													(unsigned long) (
													((long) (
															(unsigned long) (
																((long) (
																		(unsigned long) (
																			(((long) 65535) &
																				((long) (
																						(BgL_n1z00_3770 >>
																							(int) (((long) 16)))) +
																					(long) (
																						(BgL_n2z00_3771 >>
																							(int) (((long) 16)))))))) <<
																	(int) (((long) 16))))) +
														(long) (
															(unsigned long) (
																((long) (
																		(unsigned long) (
																			((long) (BgL_n1z00_3770) & ((long)
																					65535)))) +
																	(long) ((unsigned
																			long) (((long) (BgL_n2z00_3771) & ((long)
																					65535)))))))));
										}}
										{	/* Unsafe/sha2.scm 388 */

											{
												long BgL_jz00_4620;

												unsigned long BgL_hz00_4619;

												unsigned long BgL_gz00_4618;

												unsigned long BgL_fz00_4617;

												unsigned long BgL_ez00_4589;

												unsigned long BgL_dz00_4588;

												unsigned long BgL_cz00_4587;

												unsigned long BgL_bz00_4586;

												unsigned long BgL_az00_4558;

												{	/* Unsafe/sha2.scm 389 */

													BgL_az00_4558 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_t1z00_1352 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_t2z00_1353 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_t1z00_1352) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_t2z00_1353) &
																					((long) 65535)))))))));
												}
												BgL_bz00_4586 = BgL_az00_1340;
												BgL_cz00_4587 = BgL_bz00_1341;
												BgL_dz00_4588 = BgL_cz00_1342;
												{	/* Unsafe/sha2.scm 389 */

													BgL_ez00_4589 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_dz00_1343 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_t1z00_1352 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_dz00_1343) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_t1z00_1352) &
																					((long) 65535)))))))));
												}
												BgL_fz00_4617 = BgL_ez00_1344;
												BgL_gz00_4618 = BgL_fz00_1345;
												BgL_hz00_4619 = BgL_gz00_1346;
												BgL_jz00_4620 =
													(long)
													CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_jz00_1348), BINT(((long) 1))));
												BgL_jz00_1348 = BgL_jz00_4620;
												BgL_hz00_1347 = BgL_hz00_4619;
												BgL_gz00_1346 = BgL_gz00_4618;
												BgL_fz00_1345 = BgL_fz00_4617;
												BgL_ez00_1344 = BgL_ez00_4589;
												BgL_dz00_1343 = BgL_dz00_4588;
												BgL_cz00_1342 = BgL_cz00_4587;
												BgL_bz00_1341 = BgL_bz00_4586;
												BgL_az00_1340 = BgL_az00_4558;
												goto BgL_zc3anonymousza32316ze3z83_1349;
											}
										}
									}
								}
							}
						else
							{	/* Unsafe/sha2.scm 385 */
								if ((BgL_jz00_1348 < ((long) 64)))
									{	/* Unsafe/sha2.scm 391 */
										unsigned long BgL_s0z00_1360;

										{	/* Unsafe/sha2.scm 391 */
											unsigned long BgL_arg2336z00_1378;

											{	/* Unsafe/sha2.scm 391 */
												long BgL_arg2337z00_1379;

												BgL_arg2337z00_1379 =
													(long)
													CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_jz00_1348), BINT(((long) 1))));
												{	/* Unsafe/sha2.scm 391 */
													unsigned long BgL_res3019z00_3086;

													{	/* Unsafe/sha2.scm 391 */
														long BgL_auxz00_4631;

														BgL_auxz00_4631 =
															(BgL_arg2337z00_1379 & ((long) 15));
														BgL_res3019z00_3086 =
															BGL_U32VREF(BgL_bufferz00_28, BgL_auxz00_4631);
													}
													BgL_arg2336z00_1378 = BgL_res3019z00_3086;
											}}
											BgL_s0z00_1360 =
												(unsigned long) (
												((long) (BGl_rotr32z00zz__sha2z00(BgL_arg2336z00_1378,
															(int) (((long) 7)))) ^
													((long) (BGl_rotr32z00zz__sha2z00(BgL_arg2336z00_1378,
																(int) (((long) 18)))) ^
														(long) (
															(BgL_arg2336z00_1378 >> (int) (((long) 3)))))));
										}
										{	/* Unsafe/sha2.scm 391 */
											unsigned long BgL_s1z00_1361;

											{	/* Unsafe/sha2.scm 392 */
												unsigned long BgL_arg2334z00_1376;

												{	/* Unsafe/sha2.scm 392 */
													long BgL_arg2335z00_1377;

													BgL_arg2335z00_1377 =
														(long)
														CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
															(BgL_jz00_1348), BINT(((long) 14))));
													{	/* Unsafe/sha2.scm 392 */
														unsigned long BgL_res3021z00_3104;

														{	/* Unsafe/sha2.scm 392 */
															long BgL_auxz00_4650;

															BgL_auxz00_4650 =
																(BgL_arg2335z00_1377 & ((long) 15));
															BgL_res3021z00_3104 =
																BGL_U32VREF(BgL_bufferz00_28, BgL_auxz00_4650);
														}
														BgL_arg2334z00_1376 = BgL_res3021z00_3104;
												}}
												BgL_s1z00_1361 =
													(unsigned long) (
													((long) (BGl_rotr32z00zz__sha2z00(BgL_arg2334z00_1376,
																(int) (((long) 17)))) ^
														((long) (BGl_rotr32z00zz__sha2z00
																(BgL_arg2334z00_1376,
																	(int) (((long) 19)))) ^
															(long) ((BgL_arg2334z00_1376 >> (int) (((long)
																			10)))))));
											}
											{	/* Unsafe/sha2.scm 392 */
												long BgL_ndxz00_1362;

												BgL_ndxz00_1362 =
													(BgL_jz00_1348 &
													LLONG_TO_LONG(((BGL_LONGLONG_T) 15)));
												{	/* Unsafe/sha2.scm 393 */
													unsigned long BgL_wz00_1363;

													{	/* Unsafe/sha2.scm 394 */
														unsigned long BgL_arg2329z00_1371;

														unsigned long BgL_arg2330z00_1372;

														{	/* Unsafe/sha2.scm 394 */
															unsigned long BgL_res3023z00_3124;

															{	/* Unsafe/sha2.scm 394 */
																long BgL_auxz00_4667;

																BgL_auxz00_4667 = (BgL_jz00_1348 & ((long) 15));
																BgL_res3023z00_3124 =
																	BGL_U32VREF(BgL_bufferz00_28,
																	BgL_auxz00_4667);
															}
															BgL_arg2329z00_1371 = BgL_res3023z00_3124;
														}
														{	/* Unsafe/sha2.scm 394 */
															unsigned long BgL_arg2331z00_1373;

															{	/* Unsafe/sha2.scm 394 */
																unsigned long BgL_arg2332z00_1374;

																{	/* Unsafe/sha2.scm 394 */
																	long BgL_arg2333z00_1375;

																	BgL_arg2333z00_1375 =
																		(BgL_jz00_1348 + ((long) 9));
																	{	/* Unsafe/sha2.scm 394 */
																		unsigned long BgL_res3024z00_3132;

																		{	/* Unsafe/sha2.scm 394 */
																			long BgL_auxz00_4671;

																			BgL_auxz00_4671 =
																				(BgL_arg2333z00_1375 & ((long) 15));
																			BgL_res3024z00_3132 =
																				BGL_U32VREF(BgL_bufferz00_28,
																				BgL_auxz00_4671);
																		}
																		BgL_arg2332z00_1374 = BgL_res3024z00_3132;
																}}
																{	/* Unsafe/sha2.scm 394 */

																	BgL_arg2331z00_1373 =
																		(unsigned long) (
																		((long) (
																				(unsigned long) (
																					((long) (
																							(unsigned long) (
																								(((long) 65535) &
																									((long) (
																											(BgL_arg2332z00_1374 >>
																												(int) (((long) 16)))) +
																										(long) (
																											(BgL_s0z00_1360 >>
																												(int) (((long)
																														16)))))))) <<
																						(int) (((long) 16))))) +
																			(long) ((unsigned
																					long) (((long) ((unsigned
																								long) (((long)
																									(BgL_arg2332z00_1374) &
																									((long) 65535)))) +
																						(long) ((unsigned
																								long) (((long) (BgL_s0z00_1360)
																									& ((long) 65535)))))))));
															}}
															{	/* Unsafe/sha2.scm 394 */

																BgL_arg2330z00_1372 =
																	(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (
																						(unsigned long) (
																							(((long) 65535) &
																								((long) (
																										(BgL_s1z00_1361 >>
																											(int) (((long) 16)))) +
																									(long) (
																										(BgL_arg2331z00_1373 >>
																											(int) (((long) 16))))))))
																					<< (int) (((long) 16))))) +
																		(long) ((unsigned long) (((long) ((unsigned
																							long) (((long) (BgL_s1z00_1361) &
																								((long) 65535)))) +
																					(long) ((unsigned
																							long) (((long)
																								(BgL_arg2331z00_1373) & ((long)
																									65535)))))))));
														}}
														{	/* Unsafe/sha2.scm 394 */

															BgL_wz00_1363 =
																(unsigned long) (
																((long) (
																		(unsigned long) (
																			((long) (
																					(unsigned long) (
																						(((long) 65535) &
																							((long) (
																									(BgL_arg2329z00_1371 >>
																										(int) (((long) 16)))) +
																								(long) (
																									(BgL_arg2330z00_1372 >>
																										(int) (((long) 16)))))))) <<
																				(int) (((long) 16))))) +
																	(long) (
																		(unsigned long) (
																			((long) (
																					(unsigned long) (
																						((long) (BgL_arg2329z00_1371) &
																							((long) 65535)))) +
																				(long) ((unsigned
																						long) (((long) (BgL_arg2330z00_1372)
																							& ((long) 65535)))))))));
													}}
													{	/* Unsafe/sha2.scm 394 */
														unsigned long BgL_t1z00_1364;

														{	/* Unsafe/sha2.scm 395 */
															unsigned long BgL_arg2339z00_3139;

															{	/* Unsafe/sha2.scm 395 */
																unsigned long BgL_arg2340z00_3140;

																unsigned long BgL_arg2341z00_3141;

																BgL_arg2340z00_3140 =
																	BGl_Sigma1zd2256zd2zz__sha2z00(BgL_ez00_1344);
																{	/* Unsafe/sha2.scm 395 */
																	unsigned long BgL_arg2342z00_3142;

																	unsigned long BgL_arg2343z00_3143;

																	BgL_arg2342z00_3142 =
																		(unsigned long) (
																		(((long) (BgL_ez00_1344) &
																				(long) (BgL_fz00_1345)) ^
																			(~((long) (BgL_ez00_1344)) &
																				(long) (BgL_gz00_1346))));
																	{	/* Unsafe/sha2.scm 395 */
																		unsigned long BgL_arg2344z00_3144;

																		BgL_arg2344z00_3144 =
																			BGL_U32VREF(BGl_K256z00zz__sha2z00,
																			BgL_jz00_1348);
																		{	/* Unsafe/sha2.scm 395 */

																			BgL_arg2343z00_3143 =
																				(unsigned long) (
																				((long) (
																						(unsigned long) (
																							((long) (
																									(unsigned long) (
																										(((long) 65535) &
																											((long) (
																													(BgL_arg2344z00_3144
																														>> (int) (((long)
																																16)))) +
																												(long) ((BgL_wz00_1363
																														>> (int) (((long)
																																16)))))))) <<
																								(int) (((long) 16))))) +
																					(long) ((unsigned
																							long) (((long) ((unsigned
																										long) (((long)
																											(BgL_arg2344z00_3144) &
																											((long) 65535)))) +
																								(long) ((unsigned
																										long) (((long)
																											(BgL_wz00_1363) & ((long)
																												65535)))))))));
																	}}
																	{	/* Unsafe/sha2.scm 395 */

																		BgL_arg2341z00_3141 =
																			(unsigned long) (
																			((long) (
																					(unsigned long) (
																						((long) (
																								(unsigned long) (
																									(((long) 65535) &
																										((long) (
																												(BgL_arg2342z00_3142 >>
																													(int) (((long) 16))))
																											+
																											(long) (
																												(BgL_arg2343z00_3143 >>
																													(int) (((long)
																															16)))))))) <<
																							(int) (((long) 16))))) +
																				(long) ((unsigned
																						long) (((long) ((unsigned
																									long) (((long)
																										(BgL_arg2342z00_3142) &
																										((long) 65535)))) +
																							(long) ((unsigned
																									long) (((long)
																										(BgL_arg2343z00_3143) &
																										((long) 65535)))))))));
																}}
																{	/* Unsafe/sha2.scm 395 */

																	BgL_arg2339z00_3139 =
																		(unsigned long) (
																		((long) (
																				(unsigned long) (
																					((long) (
																							(unsigned long) (
																								(((long) 65535) &
																									((long) (
																											(BgL_arg2340z00_3140 >>
																												(int) (((long) 16)))) +
																										(long) (
																											(BgL_arg2341z00_3141 >>
																												(int) (((long)
																														16)))))))) <<
																						(int) (((long) 16))))) +
																			(long) ((unsigned
																					long) (((long) ((unsigned
																								long) (((long)
																									(BgL_arg2340z00_3140) &
																									((long) 65535)))) +
																						(long) ((unsigned
																								long) (((long)
																									(BgL_arg2341z00_3141) &
																									((long) 65535)))))))));
															}}
															{	/* Unsafe/sha2.scm 395 */

																BgL_t1z00_1364 =
																	(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (
																						(unsigned long) (
																							(((long) 65535) &
																								((long) (
																										(BgL_hz00_1347 >>
																											(int) (((long) 16)))) +
																									(long) (
																										(BgL_arg2339z00_3139 >>
																											(int) (((long) 16))))))))
																					<< (int) (((long) 16))))) +
																		(long) ((unsigned long) (((long) ((unsigned
																							long) (((long) (BgL_hz00_1347) &
																								((long) 65535)))) +
																					(long) ((unsigned
																							long) (((long)
																								(BgL_arg2339z00_3139) & ((long)
																									65535)))))))));
														}}
														{	/* Unsafe/sha2.scm 395 */
															unsigned long BgL_t2z00_1365;

															{	/* Unsafe/sha2.scm 396 */
																unsigned long BgL_n1z00_3800;

																unsigned long BgL_n2z00_3801;

																BgL_n1z00_3800 =
																	(unsigned long) (
																	((long) (BGl_rotr32z00zz__sha2z00
																			(BgL_az00_1340,
																				(int) (((long) 2)))) ^
																		((long) (BGl_rotr32z00zz__sha2z00
																				(BgL_az00_1340,
																					(int) (((long) 13)))) ^
																			(long) (BGl_rotr32z00zz__sha2z00
																				(BgL_az00_1340,
																					(int) (((long) 22)))))));
																BgL_n2z00_3801 =
																	(unsigned long) ((((long) (BgL_az00_1340) &
																			(long) (BgL_bz00_1341)) ^
																		(((long) (BgL_az00_1340) &
																				(long) (BgL_cz00_1342)) ^
																			((long) (BgL_bz00_1341) &
																				(long) (BgL_cz00_1342)))));
																{	/* Unsafe/sha2.scm 396 */

																	BgL_t2z00_1365 =
																		(unsigned long) (
																		((long) (
																				(unsigned long) (
																					((long) (
																							(unsigned long) (
																								(((long) 65535) &
																									((long) (
																											(BgL_n1z00_3800 >>
																												(int) (((long) 16)))) +
																										(long) (
																											(BgL_n2z00_3801 >>
																												(int) (((long)
																														16)))))))) <<
																						(int) (((long) 16))))) +
																			(long) ((unsigned
																					long) (((long) ((unsigned
																								long) (((long) (BgL_n1z00_3800)
																									& ((long) 65535)))) +
																						(long) ((unsigned
																								long) (((long) (BgL_n2z00_3801)
																									& ((long) 65535)))))))));
															}}
															{	/* Unsafe/sha2.scm 396 */

																BGL_U32VSET(BgL_bufferz00_28, BgL_ndxz00_1362,
																	BgL_wz00_1363);
																BUNSPEC;
																{
																	long BgL_jz00_4988;

																	unsigned long BgL_hz00_4987;

																	unsigned long BgL_gz00_4986;

																	unsigned long BgL_fz00_4985;

																	unsigned long BgL_ez00_4957;

																	unsigned long BgL_dz00_4956;

																	unsigned long BgL_cz00_4955;

																	unsigned long BgL_bz00_4954;

																	unsigned long BgL_az00_4926;

																	{	/* Unsafe/sha2.scm 398 */

																		BgL_az00_4926 =
																			(unsigned long) (
																			((long) (
																					(unsigned long) (
																						((long) (
																								(unsigned long) (
																									(((long) 65535) &
																										((long) (
																												(BgL_t1z00_1364 >>
																													(int) (((long) 16))))
																											+
																											(long) ((BgL_t2z00_1365 >>
																													(int) (((long)
																															16)))))))) <<
																							(int) (((long) 16))))) +
																				(long) ((unsigned
																						long) (((long) ((unsigned
																									long) (((long)
																										(BgL_t1z00_1364) & ((long)
																											65535)))) +
																							(long) ((unsigned
																									long) (((long)
																										(BgL_t2z00_1365) & ((long)
																											65535)))))))));
																	}
																	BgL_bz00_4954 = BgL_az00_1340;
																	BgL_cz00_4955 = BgL_bz00_1341;
																	BgL_dz00_4956 = BgL_cz00_1342;
																	{	/* Unsafe/sha2.scm 398 */

																		BgL_ez00_4957 =
																			(unsigned long) (
																			((long) (
																					(unsigned long) (
																						((long) (
																								(unsigned long) (
																									(((long) 65535) &
																										((long) (
																												(BgL_dz00_1343 >>
																													(int) (((long) 16))))
																											+
																											(long) ((BgL_t1z00_1364 >>
																													(int) (((long)
																															16)))))))) <<
																							(int) (((long) 16))))) +
																				(long) ((unsigned
																						long) (((long) ((unsigned
																									long) (((long) (BgL_dz00_1343)
																										& ((long) 65535)))) +
																							(long) ((unsigned
																									long) (((long)
																										(BgL_t1z00_1364) & ((long)
																											65535)))))))));
																	}
																	BgL_fz00_4985 = BgL_ez00_1344;
																	BgL_gz00_4986 = BgL_fz00_1345;
																	BgL_hz00_4987 = BgL_gz00_1346;
																	BgL_jz00_4988 =
																		(long)
																		CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																			(BgL_jz00_1348), BINT(((long) 1))));
																	BgL_jz00_1348 = BgL_jz00_4988;
																	BgL_hz00_1347 = BgL_hz00_4987;
																	BgL_gz00_1346 = BgL_gz00_4986;
																	BgL_fz00_1345 = BgL_fz00_4985;
																	BgL_ez00_1344 = BgL_ez00_4957;
																	BgL_dz00_1343 = BgL_dz00_4956;
																	BgL_cz00_1342 = BgL_cz00_4955;
																	BgL_bz00_1341 = BgL_bz00_4954;
																	BgL_az00_1340 = BgL_az00_4926;
																	goto BgL_zc3anonymousza32316ze3z83_1349;
																}
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Unsafe/sha2.scm 390 */
										BgL_statez00_1417 = BgL_statez00_27;
										BgL_az00_1418 = BgL_az00_1340;
										BgL_bz00_1419 = BgL_bz00_1341;
										BgL_cz00_1420 = BgL_cz00_1342;
										BgL_dz00_1421 = BgL_dz00_1343;
										BgL_ez00_1422 = BgL_ez00_1344;
										BgL_fz00_1423 = BgL_fz00_1345;
										BgL_gz00_1424 = BgL_gz00_1346;
										BgL_hz00_1425 = BgL_hz00_1347;
										{	/* Unsafe/sha2.scm 357 */
											unsigned long BgL_oaz00_1427;

											unsigned long BgL_obz00_1428;

											unsigned long BgL_ocz00_1429;

											unsigned long BgL_odz00_1430;

											unsigned long BgL_oez00_1431;

											unsigned long BgL_ofz00_1432;

											unsigned long BgL_ogz00_1433;

											unsigned long BgL_ohz00_1434;

											BgL_oaz00_1427 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 0));
											BgL_obz00_1428 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 1));
											BgL_ocz00_1429 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 2));
											BgL_odz00_1430 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 3));
											BgL_oez00_1431 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 4));
											BgL_ofz00_1432 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 5));
											BgL_ogz00_1433 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 6));
											BgL_ohz00_1434 =
												BGL_U32VREF(BgL_statez00_1417, ((long) 7));
											{	/* Unsafe/sha2.scm 366 */
												unsigned long BgL_arg2366z00_1437;

												{	/* Unsafe/sha2.scm 366 */

													BgL_arg2366z00_1437 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_oaz00_1427 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_az00_1418 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_oaz00_1427) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_az00_1418) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 0),
													BgL_arg2366z00_1437);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 367 */
												unsigned long BgL_arg2368z00_1439;

												{	/* Unsafe/sha2.scm 367 */

													BgL_arg2368z00_1439 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_obz00_1428 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_bz00_1419 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_obz00_1428) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_bz00_1419) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 1),
													BgL_arg2368z00_1439);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 368 */
												unsigned long BgL_arg2370z00_1441;

												{	/* Unsafe/sha2.scm 368 */

													BgL_arg2370z00_1441 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_ocz00_1429 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_cz00_1420 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_ocz00_1429) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_cz00_1420) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 2),
													BgL_arg2370z00_1441);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 369 */
												unsigned long BgL_arg2372z00_1443;

												{	/* Unsafe/sha2.scm 369 */

													BgL_arg2372z00_1443 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_odz00_1430 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_dz00_1421 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_odz00_1430) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_dz00_1421) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 3),
													BgL_arg2372z00_1443);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 370 */
												unsigned long BgL_arg2374z00_1445;

												{	/* Unsafe/sha2.scm 370 */

													BgL_arg2374z00_1445 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_oez00_1431 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_ez00_1422 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_oez00_1431) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_ez00_1422) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 4),
													BgL_arg2374z00_1445);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 371 */
												unsigned long BgL_arg2376z00_1447;

												{	/* Unsafe/sha2.scm 371 */

													BgL_arg2376z00_1447 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_ofz00_1432 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_fz00_1423 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_ofz00_1432) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_fz00_1423) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 5),
													BgL_arg2376z00_1447);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 372 */
												unsigned long BgL_arg2378z00_1449;

												{	/* Unsafe/sha2.scm 372 */

													BgL_arg2378z00_1449 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_ogz00_1433 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_gz00_1424 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_ogz00_1433) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_gz00_1424) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 6),
													BgL_arg2378z00_1449);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 373 */
												unsigned long BgL_arg2380z00_1451;

												{	/* Unsafe/sha2.scm 373 */

													BgL_arg2380z00_1451 =
														(unsigned long) (
														((long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				(((long) 65535) &
																					((long) (
																							(BgL_ohz00_1434 >>
																								(int) (((long) 16)))) +
																						(long) (
																							(BgL_hz00_1425 >>
																								(int) (((long) 16)))))))) <<
																		(int) (((long) 16))))) +
															(long) (
																(unsigned long) (
																	((long) (
																			(unsigned long) (
																				((long) (BgL_ohz00_1434) & ((long)
																						65535)))) +
																		(long) ((unsigned
																				long) (((long) (BgL_hz00_1425) & ((long)
																						65535)))))))));
												}
												BGL_U32VSET(BgL_statez00_1417, ((long) 7),
													BgL_arg2380z00_1451);
												BUNSPEC;
										}}
										return BgL_statez00_27;
									}
							}
					}
				}
			}
		}
	}



/* sha256-update */
	obj_t BGl_sha256zd2updatezd2zz__sha2z00(obj_t BgL_statez00_34,
		obj_t BgL_bufferz00_35, obj_t BgL_oz00_36, obj_t BgL_fillzd2wordz12zc0_37)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 436 */
			{
				obj_t BgL_bufferz00_1513;

				long BgL_iz00_1514;

				{
					long BgL_iz00_1496;

					long BgL_lz00_1497;

					BgL_iz00_1496 = ((long) 0);
					BgL_lz00_1497 = ((long) 0);
				BgL_zc3anonymousza32401ze3z83_1498:
					{	/* Unsafe/sha2.scm 450 */
						obj_t BgL_bytesz00_1499;

						BgL_bufferz00_1513 = BgL_bufferz00_35;
						BgL_iz00_1514 = BgL_iz00_1496;
						{
							long BgL_jz00_3249;

							long BgL_iz00_3250;

							obj_t BgL_nz00_3251;

							BgL_jz00_3249 = ((long) 0);
							BgL_iz00_3250 = BgL_iz00_1514;
							BgL_nz00_3251 = BINT(((long) 0));
						BgL_loopz00_3248:
							if ((BgL_jz00_3249 < ((long) 16)))
								{	/* Unsafe/sha2.scm 441 */
									long BgL_arg2416z00_3258;

									long BgL_arg2417z00_3259;

									obj_t BgL_arg2418z00_3260;

									BgL_arg2416z00_3258 = (BgL_jz00_3249 + ((long) 1));
									BgL_arg2417z00_3259 = (BgL_iz00_3250 + ((long) 4));
									{	/* Unsafe/sha2.scm 441 */
										obj_t BgL_arg2419z00_3261;

										BgL_arg2419z00_3261 =
											PROCEDURE_ENTRY(BgL_fillzd2wordz12zc0_37)
											(BgL_fillzd2wordz12zc0_37, BgL_bufferz00_1513,
											BINT(BgL_jz00_3249), BgL_oz00_36, BINT(BgL_iz00_3250),
											BEOA);
										BgL_arg2418z00_3260 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_nz00_3251,
											BgL_arg2419z00_3261);
									}
									{
										obj_t BgL_nz00_5236;

										long BgL_iz00_5235;

										long BgL_jz00_5234;

										BgL_jz00_5234 = BgL_arg2416z00_3258;
										BgL_iz00_5235 = BgL_arg2417z00_3259;
										BgL_nz00_5236 = BgL_arg2418z00_3260;
										BgL_nz00_3251 = BgL_nz00_5236;
										BgL_iz00_3250 = BgL_iz00_5235;
										BgL_jz00_3249 = BgL_jz00_5234;
										goto BgL_loopz00_3248;
									}
								}
							else
								{	/* Unsafe/sha2.scm 441 */
									BgL_bytesz00_1499 = BgL_nz00_3251;
								}
						}
						if (((long) CINT(BgL_bytesz00_1499) == ((long) 64)))
							{	/* Unsafe/sha2.scm 452 */
								BGl_sha256zd2internalzd2transformz00zz__sha2z00(BgL_statez00_34,
									BgL_bufferz00_35);
								{
									long BgL_lz00_5244;

									long BgL_iz00_5242;

									BgL_iz00_5242 = (BgL_iz00_1496 + ((long) 64));
									BgL_lz00_5244 = (BgL_lz00_1497 + ((long) 64));
									BgL_lz00_1497 = BgL_lz00_5244;
									BgL_iz00_1496 = BgL_iz00_5242;
									goto BgL_zc3anonymousza32401ze3z83_1498;
								}
							}
						else
							{	/* Unsafe/sha2.scm 452 */
								if (
									((((long) 64) -
											(long) CINT(BgL_bytesz00_1499)) >= ((long) 8)))
									{	/* Unsafe/sha2.scm 456 */
										{	/* Unsafe/sha2.scm 459 */
											unsigned long BgL_ulenz00_1504;

											BgL_ulenz00_1504 =
												(unsigned long) (
												(((long) 8) *
													((BgL_lz00_1497 - ((long) 1)) +
														(long) CINT(BgL_bytesz00_1499))));
											BGL_U32VSET(BgL_bufferz00_35, ((long) 15),
												BgL_ulenz00_1504);
											BUNSPEC;
										}
										return
											BGl_sha256zd2internalzd2transformz00zz__sha2z00
											(BgL_statez00_34, BgL_bufferz00_35);
									}
								else
									{	/* Unsafe/sha2.scm 456 */
										BGl_sha256zd2internalzd2transformz00zz__sha2z00
											(BgL_statez00_34, BgL_bufferz00_35);
										{
											long BgL_lz00_5261;

											long BgL_iz00_5258;

											BgL_iz00_5258 =
												(((long) 64) + (long) CINT(BgL_bytesz00_1499));
											BgL_lz00_5261 =
												(BgL_lz00_1497 + (long) CINT(BgL_bytesz00_1499));
											BgL_lz00_1497 = BgL_lz00_5261;
											BgL_iz00_1496 = BgL_iz00_5258;
											goto BgL_zc3anonymousza32401ze3z83_1498;
										}
									}
							}
					}
				}
			}
		}
	}



/* sha256sum-mmap */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2mmapzd2zz__sha2z00(obj_t BgL_mmz00_38)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 470 */
			{	/* Unsafe/sha2.scm 507 */
				obj_t BgL_statez00_1530;

				obj_t BgL_bufferz00_1531;

				BgL_statez00_1530 = BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
				{	/* Llib/srfi4.scm 235 */

					BgL_bufferz00_1531 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16), BINT(((long) 0)));
				}
				BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1530, BgL_bufferz00_1531,
					BgL_mmz00_38, BGl_proc3061z00zz__sha2z00);
				return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1530);
			}
		}
	}



/* _sha256sum-mmap */
	obj_t BGl__sha256sumzd2mmapzd2zz__sha2z00(obj_t BgL_envz00_3709,
		obj_t BgL_mmz00_3710)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 470 */
			{	/* Unsafe/sha2.scm 473 */
				obj_t BgL_auxz00_5269;

				if (BGL_MMAPP(BgL_mmz00_3710))
					{	/* Unsafe/sha2.scm 473 */
						BgL_auxz00_5269 = BgL_mmz00_3710;
					}
				else
					{
						obj_t BgL_auxz00_5272;

						BgL_auxz00_5272 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 19777)), BGl_string3063z00zz__sha2z00,
							BGl_string3064z00zz__sha2z00, BgL_mmz00_3710);
						FAILURE(BgL_auxz00_5272, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_auxz00_5269);
			}
		}
	}



/* fill-word32-mmap! */
	obj_t BGl_fillzd2word32zd2mmapz12z12zz__sha2z00(obj_t BgL_envz00_3711,
		obj_t BgL_v32z00_3712, obj_t BgL_iz00_3713, obj_t BgL_mmz00_3714,
		obj_t BgL_nz00_3715)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 505 */
			{
				obj_t BgL_v32z00_1538;

				long BgL_iz00_1539;

				obj_t BgL_mmz00_1540;

				long BgL_nz00_1541;

				{	/* Unsafe/sha2.scm 476 */
					long BgL_auxz00_5277;

					BgL_v32z00_1538 = BgL_v32z00_3712;
					BgL_iz00_1539 = (long) CINT(BgL_iz00_3713);
					BgL_mmz00_1540 = BgL_mmz00_3714;
					BgL_nz00_1541 = (long) CINT(BgL_nz00_3715);
					{	/* Unsafe/sha2.scm 476 */
						long BgL_lz00_1543;

						BgL_lz00_1543 = BGL_MMAP_LENGTH(BgL_mmz00_1540);
						{	/* Unsafe/sha2.scm 478 */
							bool_t BgL_testz00_5279;

							{	/* Unsafe/sha2.scm 478 */
								long BgL_n2z00_3299;

								BgL_n2z00_3299 = ELONG_TO_LONG(BgL_lz00_1543);
								BgL_testz00_5279 =
									((BgL_nz00_1541 + ((long) 4)) <= BgL_n2z00_3299);
							}
							if (BgL_testz00_5279)
								{	/* Unsafe/sha2.scm 479 */
									unsigned long BgL_v0z00_1545;

									{	/* Unsafe/sha2.scm 479 */
										unsigned long BgL_res3030z00_3304;

										{	/* Unsafe/sha2.scm 479 */
											unsigned char BgL_arg2421z00_3302;

											{	/* Unsafe/sha2.scm 479 */
												long BgL_auxz00_5283;

												BgL_auxz00_5283 = LONG_TO_ELONG(BgL_nz00_1541);
												BgL_arg2421z00_3302 =
													BGL_MMAP_REF(BgL_mmz00_1540, BgL_auxz00_5283);
											}
											BgL_res3030z00_3304 =
												(unsigned long) ((BgL_arg2421z00_3302));
										}
										BgL_v0z00_1545 = BgL_res3030z00_3304;
									}
									{	/* Unsafe/sha2.scm 479 */
										unsigned long BgL_v1z00_1546;

										{	/* Unsafe/sha2.scm 480 */
											long BgL_arg2432z00_1558;

											BgL_arg2432z00_1558 = (BgL_nz00_1541 + ((long) 1));
											{	/* Unsafe/sha2.scm 480 */
												unsigned long BgL_res3031z00_3311;

												{	/* Unsafe/sha2.scm 480 */
													unsigned char BgL_arg2421z00_3309;

													{	/* Unsafe/sha2.scm 480 */
														long BgL_auxz00_5289;

														BgL_auxz00_5289 =
															LONG_TO_ELONG(BgL_arg2432z00_1558);
														BgL_arg2421z00_3309 =
															BGL_MMAP_REF(BgL_mmz00_1540, BgL_auxz00_5289);
													}
													BgL_res3031z00_3311 =
														(unsigned long) ((BgL_arg2421z00_3309));
												}
												BgL_v1z00_1546 = BgL_res3031z00_3311;
										}}
										{	/* Unsafe/sha2.scm 480 */
											unsigned long BgL_v2z00_1547;

											{	/* Unsafe/sha2.scm 481 */
												long BgL_arg2431z00_1557;

												BgL_arg2431z00_1557 = (BgL_nz00_1541 + ((long) 2));
												{	/* Unsafe/sha2.scm 481 */
													unsigned long BgL_res3032z00_3318;

													{	/* Unsafe/sha2.scm 481 */
														unsigned char BgL_arg2421z00_3316;

														{	/* Unsafe/sha2.scm 481 */
															long BgL_auxz00_5295;

															BgL_auxz00_5295 =
																LONG_TO_ELONG(BgL_arg2431z00_1557);
															BgL_arg2421z00_3316 =
																BGL_MMAP_REF(BgL_mmz00_1540, BgL_auxz00_5295);
														}
														BgL_res3032z00_3318 =
															(unsigned long) ((BgL_arg2421z00_3316));
													}
													BgL_v2z00_1547 = BgL_res3032z00_3318;
											}}
											{	/* Unsafe/sha2.scm 481 */
												unsigned long BgL_v3z00_1548;

												{	/* Unsafe/sha2.scm 482 */
													long BgL_arg2430z00_1556;

													BgL_arg2430z00_1556 = (BgL_nz00_1541 + ((long) 3));
													{	/* Unsafe/sha2.scm 482 */
														unsigned long BgL_res3033z00_3325;

														{	/* Unsafe/sha2.scm 482 */
															unsigned char BgL_arg2421z00_3323;

															{	/* Unsafe/sha2.scm 482 */
																long BgL_auxz00_5301;

																BgL_auxz00_5301 =
																	LONG_TO_ELONG(BgL_arg2430z00_1556);
																BgL_arg2421z00_3323 =
																	BGL_MMAP_REF(BgL_mmz00_1540, BgL_auxz00_5301);
															}
															BgL_res3033z00_3325 =
																(unsigned long) ((BgL_arg2421z00_3323));
														}
														BgL_v3z00_1548 = BgL_res3033z00_3325;
												}}
												{	/* Unsafe/sha2.scm 482 */
													unsigned long BgL_vz00_1549;

													BgL_vz00_1549 =
														(unsigned long) (
														(((((long) (BgL_v0z00_1545) <<
																		(int) (((long) 8))) |
																	(long) (BgL_v1z00_1546)) <<
																(int) (((long) 16))) |
															(((long) (BgL_v2z00_1547) <<
																	(int) (((long) 8))) |
																(long) (BgL_v3z00_1548))));
													{	/* Unsafe/sha2.scm 483 */

														BGL_U32VSET(BgL_v32z00_1538, BgL_iz00_1539,
															BgL_vz00_1549);
														BUNSPEC;
														BgL_auxz00_5277 = ((long) 4);
								}}}}}}
							else
								{	/* Unsafe/sha2.scm 486 */
									bool_t BgL_testz00_5321;

									{	/* Unsafe/sha2.scm 486 */
										long BgL_auxz00_5322;

										{	/* Unsafe/sha2.scm 486 */
											long BgL_za72za7_3339;

											BgL_za72za7_3339 = ELONG_TO_LONG(BgL_lz00_1543);
											BgL_auxz00_5322 = (((long) 1) + BgL_za72za7_3339);
										}
										BgL_testz00_5321 = (BgL_nz00_1541 >= BgL_auxz00_5322);
									}
									if (BgL_testz00_5321)
										{	/* Unsafe/sha2.scm 486 */
											{	/* Unsafe/sha2.scm 487 */
												unsigned long BgL_auxz00_5326;

												BgL_auxz00_5326 = (unsigned long) (((long) 0));
												BGL_U32VSET(BgL_v32z00_1538, BgL_iz00_1539,
													BgL_auxz00_5326);
											} BUNSPEC;
											BgL_auxz00_5277 = ((long) 0);
										}
									else
										{	/* Unsafe/sha2.scm 490 */
											obj_t BgL_vz00_1560;

											long BgL_kz00_1561;

											BgL_vz00_1560 =
												BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
												BINT(((long) 0)));
											{	/* Unsafe/sha2.scm 491 */
												long BgL_auxz00_5331;

												{	/* Unsafe/sha2.scm 491 */
													long BgL_za72za7_3345;

													BgL_za72za7_3345 = ELONG_TO_LONG(BgL_lz00_1543);
													BgL_auxz00_5331 =
														((BgL_nz00_1541 + ((long) 4)) - BgL_za72za7_3345);
												}
												BgL_kz00_1561 = (((long) 4) - BgL_auxz00_5331);
											}
											{
												long BgL_jz00_1563;

												BgL_jz00_1563 = ((long) 0);
											BgL_zc3anonymousza32434ze3z83_1564:
												if ((BgL_jz00_1563 == BgL_kz00_1561))
													{	/* Unsafe/sha2.scm 493 */
														{	/* Unsafe/sha2.scm 495 */
															unsigned long BgL_auxz00_5338;

															BgL_auxz00_5338 = (unsigned long) (((long) 128));
															BGL_U32VSET(BgL_vz00_1560, BgL_jz00_1563,
																BgL_auxz00_5338);
														} BUNSPEC;
														{	/* Unsafe/sha2.scm 496 */
															unsigned long BgL_v0z00_1566;

															BgL_v0z00_1566 =
																BGL_U32VREF(BgL_vz00_1560, ((long) 0));
															{	/* Unsafe/sha2.scm 496 */
																unsigned long BgL_v1z00_1567;

																BgL_v1z00_1567 =
																	BGL_U32VREF(BgL_vz00_1560, ((long) 1));
																{	/* Unsafe/sha2.scm 497 */
																	unsigned long BgL_v2z00_1568;

																	BgL_v2z00_1568 =
																		BGL_U32VREF(BgL_vz00_1560, ((long) 2));
																	{	/* Unsafe/sha2.scm 498 */
																		unsigned long BgL_v3z00_1569;

																		BgL_v3z00_1569 =
																			BGL_U32VREF(BgL_vz00_1560, ((long) 3));
																		{	/* Unsafe/sha2.scm 499 */
																			unsigned long BgL_vz00_1570;

																			BgL_vz00_1570 =
																				(unsigned long) (
																				(((((long) (BgL_v0z00_1566) <<
																								(int) (((long) 8))) |
																							(long) (BgL_v1z00_1567)) <<
																						(int) (((long) 16))) |
																					(((long) (BgL_v2z00_1568) <<
																							(int) (((long) 8))) |
																						(long) (BgL_v3z00_1569))));
																			{	/* Unsafe/sha2.scm 500 */

																				BGL_U32VSET(BgL_v32z00_1538,
																					BgL_iz00_1539, BgL_vz00_1570);
																				BUNSPEC;
																				BgL_auxz00_5277 =
																					(BgL_jz00_1563 + ((long) 1));
													}}}}}}}
												else
													{	/* Unsafe/sha2.scm 493 */
														{	/* Unsafe/sha2.scm 504 */
															unsigned long BgL_arg2442z00_1577;

															{	/* Unsafe/sha2.scm 504 */
																long BgL_arg2443z00_1578;

																BgL_arg2443z00_1578 =
																	(long)
																	CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																		(BgL_nz00_1541), BINT(BgL_jz00_1563)));
																{	/* Unsafe/sha2.scm 504 */
																	unsigned long BgL_res3034z00_3368;

																	{	/* Unsafe/sha2.scm 504 */
																		unsigned char BgL_arg2421z00_3366;

																		{	/* Unsafe/sha2.scm 504 */
																			long BgL_auxz00_5365;

																			BgL_auxz00_5365 =
																				LONG_TO_ELONG(BgL_arg2443z00_1578);
																			BgL_arg2421z00_3366 =
																				BGL_MMAP_REF(BgL_mmz00_1540,
																				BgL_auxz00_5365);
																		}
																		BgL_res3034z00_3368 =
																			(unsigned long) ((BgL_arg2421z00_3366));
																	}
																	BgL_arg2442z00_1577 = BgL_res3034z00_3368;
															}}
															BGL_U32VSET(BgL_vz00_1560, BgL_jz00_1563,
																BgL_arg2442z00_1577);
															BUNSPEC;
														}
														{
															long BgL_jz00_5371;

															BgL_jz00_5371 = (BgL_jz00_1563 + ((long) 1));
															BgL_jz00_1563 = BgL_jz00_5371;
															goto BgL_zc3anonymousza32434ze3z83_1564;
														}
													}
											}
										}
								}
						}
					}
					return BINT(BgL_auxz00_5277);
				}
			}
		}
	}



/* sha256sum-string */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2stringzd2zz__sha2z00(obj_t
		BgL_strz00_39)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 515 */
			{	/* Unsafe/sha2.scm 552 */
				obj_t BgL_statez00_1590;

				obj_t BgL_bufferz00_1591;

				BgL_statez00_1590 = BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
				{	/* Llib/srfi4.scm 235 */

					BgL_bufferz00_1591 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16), BINT(((long) 0)));
				}
				BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1590, BgL_bufferz00_1591,
					BgL_strz00_39, BGl_proc3065z00zz__sha2z00);
				return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1590);
			}
		}
	}



/* _sha256sum-string */
	obj_t BGl__sha256sumzd2stringzd2zz__sha2z00(obj_t BgL_envz00_3717,
		obj_t BgL_strz00_3718)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 515 */
			{	/* Unsafe/sha2.scm 518 */
				obj_t BgL_auxz00_5381;

				if (STRINGP(BgL_strz00_3718))
					{	/* Unsafe/sha2.scm 518 */
						BgL_auxz00_5381 = BgL_strz00_3718;
					}
				else
					{
						obj_t BgL_auxz00_5384;

						BgL_auxz00_5384 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 21271)), BGl_string3066z00zz__sha2z00,
							BGl_string3067z00zz__sha2z00, BgL_strz00_3718);
						FAILURE(BgL_auxz00_5384, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2stringzd2zz__sha2z00(BgL_auxz00_5381);
			}
		}
	}



/* fill-word32-string! */
	obj_t BGl_fillzd2word32zd2stringz12z12zz__sha2z00(obj_t BgL_envz00_3719,
		obj_t BgL_v32z00_3720, obj_t BgL_iz00_3721, obj_t BgL_strz00_3722,
		obj_t BgL_nz00_3723)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 550 */
			{
				obj_t BgL_v32z00_1598;

				long BgL_iz00_1599;

				obj_t BgL_strz00_1600;

				long BgL_nz00_1601;

				{	/* Unsafe/sha2.scm 521 */
					long BgL_auxz00_5389;

					BgL_v32z00_1598 = BgL_v32z00_3720;
					BgL_iz00_1599 = (long) CINT(BgL_iz00_3721);
					BgL_strz00_1600 = BgL_strz00_3722;
					BgL_nz00_1601 = (long) CINT(BgL_nz00_3723);
					{	/* Unsafe/sha2.scm 521 */
						long BgL_lz00_1603;

						BgL_lz00_1603 = STRING_LENGTH(BgL_strz00_1600);
						if (((BgL_nz00_1601 + ((long) 4)) <= BgL_lz00_1603))
							{	/* Unsafe/sha2.scm 524 */
								unsigned long BgL_v0z00_1605;

								BgL_v0z00_1605 =
									(unsigned long) (
									(STRING_REF(BgL_strz00_1600, BgL_nz00_1601)));
								{	/* Unsafe/sha2.scm 524 */
									unsigned long BgL_v1z00_1606;

									BgL_v1z00_1606 =
										(unsigned long) (
										(STRING_REF(BgL_strz00_1600,
												(BgL_nz00_1601 + ((long) 1)))));
									{	/* Unsafe/sha2.scm 525 */
										unsigned long BgL_v2z00_1607;

										BgL_v2z00_1607 =
											(unsigned long) (
											(STRING_REF(BgL_strz00_1600,
													(BgL_nz00_1601 + ((long) 2)))));
										{	/* Unsafe/sha2.scm 526 */
											unsigned long BgL_v3z00_1608;

											BgL_v3z00_1608 =
												(unsigned long) (
												(STRING_REF(BgL_strz00_1600,
														(BgL_nz00_1601 + ((long) 3)))));
											{	/* Unsafe/sha2.scm 527 */
												unsigned long BgL_vz00_1609;

												BgL_vz00_1609 =
													(unsigned long) (
													(((((long) (BgL_v0z00_1605) <<
																	(int) (((long) 8))) |
																(long) (BgL_v1z00_1606)) <<
															(int) (((long) 16))) |
														(((long) (BgL_v2z00_1607) <<
																(int) (((long) 8))) |
															(long) (BgL_v3z00_1608))));
												{	/* Unsafe/sha2.scm 528 */

													BGL_U32VSET(BgL_v32z00_1598, BgL_iz00_1599,
														BgL_vz00_1609);
													BUNSPEC;
													BgL_auxz00_5389 = ((long) 4);
							}}}}}}
						else
							{	/* Unsafe/sha2.scm 523 */
								if ((BgL_nz00_1601 >= (((long) 1) + BgL_lz00_1603)))
									{	/* Unsafe/sha2.scm 531 */
										{	/* Unsafe/sha2.scm 532 */
											unsigned long BgL_auxz00_5427;

											BgL_auxz00_5427 = (unsigned long) (((long) 0));
											BGL_U32VSET(BgL_v32z00_1598, BgL_iz00_1599,
												BgL_auxz00_5427);
										} BUNSPEC;
										BgL_auxz00_5389 = ((long) 0);
									}
								else
									{	/* Unsafe/sha2.scm 535 */
										obj_t BgL_vz00_1620;

										long BgL_kz00_1621;

										BgL_vz00_1620 =
											BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
											BINT(((long) 0)));
										BgL_kz00_1621 =
											(((long) 4) -
											((BgL_nz00_1601 + ((long) 4)) - BgL_lz00_1603));
										{
											long BgL_jz00_1623;

											BgL_jz00_1623 = ((long) 0);
										BgL_zc3anonymousza32464ze3z83_1624:
											if ((BgL_jz00_1623 == BgL_kz00_1621))
												{	/* Unsafe/sha2.scm 538 */
													{	/* Unsafe/sha2.scm 540 */
														unsigned long BgL_auxz00_5437;

														BgL_auxz00_5437 = (unsigned long) (((long) 128));
														BGL_U32VSET(BgL_vz00_1620, BgL_jz00_1623,
															BgL_auxz00_5437);
													} BUNSPEC;
													{	/* Unsafe/sha2.scm 541 */
														unsigned long BgL_v0z00_1626;

														BgL_v0z00_1626 =
															BGL_U32VREF(BgL_vz00_1620, ((long) 0));
														{	/* Unsafe/sha2.scm 541 */
															unsigned long BgL_v1z00_1627;

															BgL_v1z00_1627 =
																BGL_U32VREF(BgL_vz00_1620, ((long) 1));
															{	/* Unsafe/sha2.scm 542 */
																unsigned long BgL_v2z00_1628;

																BgL_v2z00_1628 =
																	BGL_U32VREF(BgL_vz00_1620, ((long) 2));
																{	/* Unsafe/sha2.scm 543 */
																	unsigned long BgL_v3z00_1629;

																	BgL_v3z00_1629 =
																		BGL_U32VREF(BgL_vz00_1620, ((long) 3));
																	{	/* Unsafe/sha2.scm 544 */
																		unsigned long BgL_vz00_1630;

																		BgL_vz00_1630 =
																			(unsigned long) (
																			(((((long) (BgL_v0z00_1626) <<
																							(int) (((long) 8))) |
																						(long) (BgL_v1z00_1627)) <<
																					(int) (((long) 16))) |
																				(((long) (BgL_v2z00_1628) <<
																						(int) (((long) 8))) |
																					(long) (BgL_v3z00_1629))));
																		{	/* Unsafe/sha2.scm 545 */

																			BGL_U32VSET(BgL_v32z00_1598,
																				BgL_iz00_1599, BgL_vz00_1630);
																			BUNSPEC;
																			BgL_auxz00_5389 =
																				(BgL_jz00_1623 + ((long) 1));
												}}}}}}}
											else
												{	/* Unsafe/sha2.scm 538 */
													{	/* Unsafe/sha2.scm 549 */
														unsigned long BgL_arg2477z00_1637;

														BgL_arg2477z00_1637 =
															(unsigned long) (
															(STRING_REF(BgL_strz00_1600,
																	(long)
																	CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																			(BgL_nz00_1601), BINT(BgL_jz00_1623))))));
														BGL_U32VSET(BgL_vz00_1620, BgL_jz00_1623,
															BgL_arg2477z00_1637);
														BUNSPEC;
													}
													{
														long BgL_jz00_5468;

														BgL_jz00_5468 = (BgL_jz00_1623 + ((long) 1));
														BgL_jz00_1623 = BgL_jz00_5468;
														goto BgL_zc3anonymousza32464ze3z83_1624;
													}
												}
										}
									}
							}
					}
					return BINT(BgL_auxz00_5389);
				}
			}
		}
	}



/* sha256sum-port */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2portzd2zz__sha2z00(obj_t BgL_pz00_40)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 560 */
			{	/* Unsafe/sha2.scm 562 */
				obj_t BgL_bufz00_1648;

				obj_t BgL_lenz00_1649;

				BgL_bufz00_1648 = MAKE_CELL(BUNSPEC);
				BgL_lenz00_1649 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/sha2.scm 568 */
					obj_t BgL_fillzd2word32zd2portz12z12_3724;

					BgL_fillzd2word32zd2portz12z12_3724 =
						make_fx_procedure(BGl_fillzd2word32zd2portz12z12zz__sha2z00,
						(int) (((long) 4)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_fillzd2word32zd2portz12z12_3724,
						(int) (((long) 0)), BgL_bufz00_1648);
					PROCEDURE_SET(BgL_fillzd2word32zd2portz12z12_3724,
						(int) (((long) 1)), BgL_lenz00_1649);
					{	/* Unsafe/sha2.scm 562 */
						obj_t BgL_auxz00_3735;

						BgL_auxz00_3735 =
							BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4), BINT(((long) 0)));
						CELL_SET(BgL_bufz00_1648, BgL_auxz00_3735);
					}
					{	/* Unsafe/sha2.scm 615 */
						obj_t BgL_auxz00_3736;

						BgL_auxz00_3736 = BINT(((long) 0));
						CELL_SET(BgL_lenz00_1649, BgL_auxz00_3736);
					}
					{	/* Unsafe/sha2.scm 615 */
						obj_t BgL_statez00_1652;

						obj_t BgL_bufferz00_1653;

						BgL_statez00_1652 =
							BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
						{	/* Llib/srfi4.scm 235 */

							BgL_bufferz00_1653 =
								BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
								BINT(((long) 0)));
						}
						BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1652,
							BgL_bufferz00_1653, BgL_pz00_40,
							BgL_fillzd2word32zd2portz12z12_3724);
						return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1652);
					}
				}
			}
		}
	}



/* _sha256sum-port */
	obj_t BGl__sha256sumzd2portzd2zz__sha2z00(obj_t BgL_envz00_3725,
		obj_t BgL_pz00_3726)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 560 */
			{	/* Unsafe/sha2.scm 562 */
				obj_t BgL_auxz00_5488;

				if (INPUT_PORTP(BgL_pz00_3726))
					{	/* Unsafe/sha2.scm 562 */
						BgL_auxz00_5488 = BgL_pz00_3726;
					}
				else
					{
						obj_t BgL_auxz00_5491;

						BgL_auxz00_5491 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 22738)), BGl_string3068z00zz__sha2z00,
							BGl_string3069z00zz__sha2z00, BgL_pz00_3726);
						FAILURE(BgL_auxz00_5491, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2portzd2zz__sha2z00(BgL_auxz00_5488);
			}
		}
	}



/* fill-word32-port! */
	obj_t BGl_fillzd2word32zd2portz12z12zz__sha2z00(obj_t BgL_envz00_3727,
		obj_t BgL_v32z00_3730, obj_t BgL_iz00_3731, obj_t BgL_pz00_3732,
		obj_t BgL_nz00_3733)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 613 */
			{	/* Unsafe/sha2.scm 583 */
				obj_t BgL_bufz00_3728;

				obj_t BgL_lenz00_3729;

				BgL_bufz00_3728 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 0)));
				BgL_lenz00_3729 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 1)));
				{
					obj_t BgL_v32z00_1672;

					long BgL_iz00_1673;

					obj_t BgL_pz00_1674;

					long BgL_nz00_1675;

					{	/* Unsafe/sha2.scm 583 */
						long BgL_auxz00_5500;

						BgL_v32z00_1672 = BgL_v32z00_3730;
						BgL_iz00_1673 = (long) CINT(BgL_iz00_3731);
						BgL_pz00_1674 = BgL_pz00_3732;
						BgL_nz00_1675 = (long) CINT(BgL_nz00_3733);
						{
							obj_t BgL_pz00_1656;

							{	/* Unsafe/sha2.scm 583 */
								long BgL_lz00_1677;

								BgL_pz00_1656 = BgL_pz00_1674;
								{
									long BgL_iz00_1659;

									BgL_iz00_1659 = ((long) 0);
								BgL_zc3anonymousza32486ze3z83_1660:
									if ((BgL_iz00_1659 == ((long) 4)))
										{	/* Unsafe/sha2.scm 568 */
											BgL_lz00_1677 = BgL_iz00_1659;
										}
									else
										{	/* Unsafe/sha2.scm 570 */
											obj_t BgL_cz00_1662;

											BgL_cz00_1662 =
												BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_pz00_1656);
											if (EOF_OBJECTP(BgL_cz00_1662))
												{
													long BgL_jz00_1665;

													BgL_jz00_1665 = BgL_iz00_1659;
												BgL_zc3anonymousza32489ze3z83_1666:
													if ((BgL_jz00_1665 == ((long) 4)))
														{	/* Unsafe/sha2.scm 573 */
															BgL_lz00_1677 = BgL_iz00_1659;
														}
													else
														{	/* Unsafe/sha2.scm 573 */
															{	/* Unsafe/sha2.scm 576 */
																unsigned long BgL_auxz00_5509;

																obj_t BgL_auxz00_5508;

																BgL_auxz00_5509 = (unsigned long) (((long) 0));
																BgL_auxz00_5508 = CELL_REF(BgL_bufz00_3728);
																BGL_U32VSET(BgL_auxz00_5508, BgL_jz00_1665,
																	BgL_auxz00_5509);
															} BUNSPEC;
															{
																long BgL_jz00_5512;

																BgL_jz00_5512 = (BgL_jz00_1665 + ((long) 1));
																BgL_jz00_1665 = BgL_jz00_5512;
																goto BgL_zc3anonymousza32489ze3z83_1666;
															}
														}
												}
											else
												{	/* Unsafe/sha2.scm 571 */
													{	/* Unsafe/sha2.scm 579 */
														unsigned long BgL_auxz00_5515;

														obj_t BgL_auxz00_5514;

														BgL_auxz00_5515 =
															(unsigned long) CINT(BgL_cz00_1662);
														BgL_auxz00_5514 = CELL_REF(BgL_bufz00_3728);
														BGL_U32VSET(BgL_auxz00_5514, BgL_iz00_1659,
															BgL_auxz00_5515);
													} BUNSPEC;
													{
														long BgL_iz00_5518;

														BgL_iz00_5518 = (BgL_iz00_1659 + ((long) 1));
														BgL_iz00_1659 = BgL_iz00_5518;
														goto BgL_zc3anonymousza32486ze3z83_1660;
													}
												}
										}
								}
								{	/* Unsafe/sha2.scm 584 */
									obj_t BgL_auxz00_3734;

									BgL_auxz00_3734 =
										BINT(
										((long) CINT(CELL_REF(BgL_lenz00_3729)) + BgL_lz00_1677));
									CELL_SET(BgL_lenz00_3729, BgL_auxz00_3734);
								}
								if (
									((BgL_nz00_1675 + ((long) 4)) <=
										(long) CINT(CELL_REF(BgL_lenz00_3729))))
									{	/* Unsafe/sha2.scm 587 */
										unsigned long BgL_v0z00_1679;

										{	/* Unsafe/sha2.scm 587 */
											obj_t BgL_auxz00_5527;

											BgL_auxz00_5527 = CELL_REF(BgL_bufz00_3728);
											BgL_v0z00_1679 = BGL_U32VREF(BgL_auxz00_5527, ((long) 0));
										}
										{	/* Unsafe/sha2.scm 587 */
											unsigned long BgL_v1z00_1680;

											{	/* Unsafe/sha2.scm 588 */
												obj_t BgL_auxz00_5529;

												BgL_auxz00_5529 = CELL_REF(BgL_bufz00_3728);
												BgL_v1z00_1680 =
													BGL_U32VREF(BgL_auxz00_5529, ((long) 1));
											}
											{	/* Unsafe/sha2.scm 588 */
												unsigned long BgL_v2z00_1681;

												{	/* Unsafe/sha2.scm 589 */
													obj_t BgL_auxz00_5531;

													BgL_auxz00_5531 = CELL_REF(BgL_bufz00_3728);
													BgL_v2z00_1681 =
														BGL_U32VREF(BgL_auxz00_5531, ((long) 2));
												}
												{	/* Unsafe/sha2.scm 589 */
													unsigned long BgL_v3z00_1682;

													{	/* Unsafe/sha2.scm 590 */
														obj_t BgL_auxz00_5533;

														BgL_auxz00_5533 = CELL_REF(BgL_bufz00_3728);
														BgL_v3z00_1682 =
															BGL_U32VREF(BgL_auxz00_5533, ((long) 3));
													}
													{	/* Unsafe/sha2.scm 590 */
														unsigned long BgL_vz00_1683;

														BgL_vz00_1683 =
															(unsigned long) (
															(((((long) (BgL_v0z00_1679) <<
																			(int) (((long) 8))) |
																		(long) (BgL_v1z00_1680)) <<
																	(int) (((long) 16))) |
																(((long) (BgL_v2z00_1681) <<
																		(int) (((long) 8))) |
																	(long) (BgL_v3z00_1682))));
														{	/* Unsafe/sha2.scm 591 */

															BGL_U32VSET(BgL_v32z00_1672, BgL_iz00_1673,
																BgL_vz00_1683);
															BUNSPEC;
															BgL_auxz00_5500 = ((long) 4);
									}}}}}}
								else
									{	/* Unsafe/sha2.scm 586 */
										if (
											(BgL_nz00_1675 >=
												(((long) 1) + (long) CINT(CELL_REF(BgL_lenz00_3729)))))
											{	/* Unsafe/sha2.scm 594 */
												{	/* Unsafe/sha2.scm 595 */
													unsigned long BgL_auxz00_5554;

													BgL_auxz00_5554 = (unsigned long) (((long) 0));
													BGL_U32VSET(BgL_v32z00_1672, BgL_iz00_1673,
														BgL_auxz00_5554);
												} BUNSPEC;
												BgL_auxz00_5500 = ((long) 0);
											}
										else
											{	/* Unsafe/sha2.scm 598 */
												obj_t BgL_vz00_1691;

												long BgL_kz00_1692;

												BgL_vz00_1691 =
													BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
													BINT(((long) 0)));
												BgL_kz00_1692 =
													(((long) 4) -
													((BgL_nz00_1675 + ((long) 4)) -
														(long) CINT(CELL_REF(BgL_lenz00_3729))));
												{
													long BgL_jz00_1694;

													BgL_jz00_1694 = ((long) 0);
												BgL_zc3anonymousza32503ze3z83_1695:
													if ((BgL_jz00_1694 == BgL_kz00_1692))
														{	/* Unsafe/sha2.scm 601 */
															{	/* Unsafe/sha2.scm 603 */
																unsigned long BgL_auxz00_5565;

																BgL_auxz00_5565 =
																	(unsigned long) (((long) 128));
																BGL_U32VSET(BgL_vz00_1691, BgL_jz00_1694,
																	BgL_auxz00_5565);
															} BUNSPEC;
															{	/* Unsafe/sha2.scm 604 */
																unsigned long BgL_v0z00_1697;

																BgL_v0z00_1697 =
																	BGL_U32VREF(BgL_vz00_1691, ((long) 0));
																{	/* Unsafe/sha2.scm 604 */
																	unsigned long BgL_v1z00_1698;

																	BgL_v1z00_1698 =
																		BGL_U32VREF(BgL_vz00_1691, ((long) 1));
																	{	/* Unsafe/sha2.scm 605 */
																		unsigned long BgL_v2z00_1699;

																		BgL_v2z00_1699 =
																			BGL_U32VREF(BgL_vz00_1691, ((long) 2));
																		{	/* Unsafe/sha2.scm 606 */
																			unsigned long BgL_v3z00_1700;

																			BgL_v3z00_1700 =
																				BGL_U32VREF(BgL_vz00_1691, ((long) 3));
																			{	/* Unsafe/sha2.scm 607 */
																				unsigned long BgL_vz00_1701;

																				BgL_vz00_1701 =
																					(unsigned long) (
																					(((((long) (BgL_v0z00_1697) <<
																									(int) (((long) 8))) |
																								(long) (BgL_v1z00_1698)) <<
																							(int) (((long) 16))) |
																						(((long) (BgL_v2z00_1699) <<
																								(int) (((long) 8))) |
																							(long) (BgL_v3z00_1700))));
																				{	/* Unsafe/sha2.scm 608 */

																					BGL_U32VSET(BgL_v32z00_1672,
																						BgL_iz00_1673, BgL_vz00_1701);
																					BUNSPEC;
																					BgL_auxz00_5500 =
																						(BgL_jz00_1694 + ((long) 1));
														}}}}}}}
													else
														{	/* Unsafe/sha2.scm 601 */
															{	/* Unsafe/sha2.scm 612 */
																unsigned long BgL_arg2511z00_1708;

																{	/* Unsafe/sha2.scm 612 */
																	obj_t BgL_auxz00_5588;

																	BgL_auxz00_5588 = CELL_REF(BgL_bufz00_3728);
																	BgL_arg2511z00_1708 =
																		BGL_U32VREF(BgL_auxz00_5588, BgL_jz00_1694);
																}
																BGL_U32VSET(BgL_vz00_1691, BgL_jz00_1694,
																	BgL_arg2511z00_1708);
																BUNSPEC;
															}
															{
																long BgL_jz00_5591;

																BgL_jz00_5591 = (BgL_jz00_1694 + ((long) 1));
																BgL_jz00_1694 = BgL_jz00_5591;
																goto BgL_zc3anonymousza32503ze3z83_1695;
															}
														}
												}
											}
									}
							}
						}
						return BINT(BgL_auxz00_5500);
					}
				}
			}
		}
	}



/* sha256sum-file */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2filezd2zz__sha2z00(obj_t
		BgL_fnamez00_41)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 623 */
			{	/* Unsafe/sha2.scm 624 */
				obj_t BgL_mmz00_1718;

				BgL_mmz00_1718 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_41, BTRUE, BFALSE);
				if (BGL_MMAPP(BgL_mmz00_1718))
					{	/* Unsafe/sha2.scm 626 */
						obj_t BgL_val1845z00_1720;

						BgL_val1845z00_1720 =
							BGl_zc3exitza32522ze3z83zz__sha2z00(BgL_mmz00_1718);
						bgl_close_mmap(BgL_mmz00_1718);
						if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
								(BgL_val1845z00_1720)))
							{	/* Unsafe/sha2.scm 628 */
								return
									BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1845z00_1720),
									CDR(BgL_val1845z00_1720));
							}
						else
							{	/* Unsafe/sha2.scm 628 */
								return BgL_val1845z00_1720;
							}
					}
				else
					{	/* Unsafe/sha2.scm 629 */
						obj_t BgL_pz00_1727;

						{	/* Ieee/port.scm 375 */

							BgL_pz00_1727 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_fnamez00_41, BTRUE);
						}
						{	/* Unsafe/sha2.scm 630 */
							obj_t BgL_val1848z00_1728;

							BgL_val1848z00_1728 =
								BGl_zc3exitza32526ze3z83zz__sha2z00(BgL_pz00_1727);
							bgl_close_input_port(BgL_pz00_1727);
							if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
									(BgL_val1848z00_1728)))
								{	/* Unsafe/sha2.scm 632 */
									return
										BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
										(BgL_val1848z00_1728), CDR(BgL_val1848z00_1728));
								}
							else
								{	/* Unsafe/sha2.scm 632 */
									return BgL_val1848z00_1728;
								}
						}
					}
			}
		}
	}



/* <exit:2526> */
	obj_t BGl_zc3exitza32526ze3z83zz__sha2z00(obj_t BgL_pz00_3744)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 632 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1849z00_1733;

			if (SET_EXIT(BgL_an_exit1849z00_1733))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1849z00_1733 = (void *) jmpbuf;
					{	/* Unsafe/sha2.scm 632 */

						PUSH_EXIT(BgL_an_exit1849z00_1733, ((long) 0));
						{	/* Unsafe/sha2.scm 631 */
							obj_t BgL_val1850z00_1734;

							BgL_val1850z00_1734 =
								BGl_sha256sumzd2portzd2zz__sha2z00(BgL_pz00_3744);
							POP_EXIT();
							return BgL_val1850z00_1734;
						}
					}
				}
		}
	}



/* <exit:2522> */
	obj_t BGl_zc3exitza32522ze3z83zz__sha2z00(obj_t BgL_mmz00_3745)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 628 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1846z00_1725;

			if (SET_EXIT(BgL_an_exit1846z00_1725))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1846z00_1725 = (void *) jmpbuf;
					{	/* Unsafe/sha2.scm 628 */

						PUSH_EXIT(BgL_an_exit1846z00_1725, ((long) 0));
						{	/* Unsafe/sha2.scm 627 */
							obj_t BgL_val1847z00_1726;

							BgL_val1847z00_1726 =
								BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_mmz00_3745);
							POP_EXIT();
							return BgL_val1847z00_1726;
						}
					}
				}
		}
	}



/* _sha256sum-file */
	obj_t BGl__sha256sumzd2filezd2zz__sha2z00(obj_t BgL_envz00_3737,
		obj_t BgL_fnamez00_3738)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 623 */
			{	/* Unsafe/sha2.scm 624 */
				obj_t BgL_auxz00_5626;

				if (STRINGP(BgL_fnamez00_3738))
					{	/* Unsafe/sha2.scm 624 */
						BgL_auxz00_5626 = BgL_fnamez00_3738;
					}
				else
					{
						obj_t BgL_auxz00_5629;

						BgL_auxz00_5629 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 24557)), BGl_string3070z00zz__sha2z00,
							BGl_string3067z00zz__sha2z00, BgL_fnamez00_3738);
						FAILURE(BgL_auxz00_5629, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2filezd2zz__sha2z00(BgL_auxz00_5626);
			}
		}
	}



/* sha256sum */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumz00zz__sha2z00(obj_t BgL_objz00_42)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 637 */
			if (BGL_MMAPP(BgL_objz00_42))
				{	/* Unsafe/sha2.scm 639 */
					return BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_objz00_42);
				}
			else
				{	/* Unsafe/sha2.scm 639 */
					if (STRINGP(BgL_objz00_42))
						{	/* Unsafe/sha2.scm 641 */
							return BGl_sha256sumzd2stringzd2zz__sha2z00(BgL_objz00_42);
						}
					else
						{	/* Unsafe/sha2.scm 641 */
							if (INPUT_PORTP(BgL_objz00_42))
								{	/* Unsafe/sha2.scm 643 */
									return BGl_sha256sumzd2portzd2zz__sha2z00(BgL_objz00_42);
								}
							else
								{	/* Unsafe/sha2.scm 643 */
									return
										BGl_errorz00zz__errorz00(BGl_string3071z00zz__sha2z00,
										BGl_string3072z00zz__sha2z00, BgL_objz00_42);
								}
						}
				}
		}
	}



/* _sha256sum */
	obj_t BGl__sha256sumz00zz__sha2z00(obj_t BgL_envz00_3739,
		obj_t BgL_objz00_3740)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 637 */
			return BGl_sha256sumz00zz__sha2z00(BgL_objz00_3740);
		}
	}



/* hmac-sha256sum-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t
		BgL_keyz00_43, obj_t BgL_msgz00_44)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 651 */
			return
				BGl_hmaczd2stringzd2zz__hmacz00(BgL_keyz00_43, BgL_msgz00_44,
				BGl_sha256sumzd2stringzd2envz00zz__sha2z00);
		}
	}



/* _hmac-sha256sum-string */
	obj_t BGl__hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t BgL_envz00_3741,
		obj_t BgL_keyz00_3742, obj_t BgL_msgz00_3743)
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 651 */
			{	/* Unsafe/sha2.scm 652 */
				obj_t BgL_auxz00_5653;

				obj_t BgL_auxz00_5646;

				if (STRINGP(BgL_msgz00_3743))
					{	/* Unsafe/sha2.scm 652 */
						BgL_auxz00_5653 = BgL_msgz00_3743;
					}
				else
					{
						obj_t BgL_auxz00_5656;

						BgL_auxz00_5656 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 25536)), BGl_string3073z00zz__sha2z00,
							BGl_string3067z00zz__sha2z00, BgL_msgz00_3743);
						FAILURE(BgL_auxz00_5656, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_3742))
					{	/* Unsafe/sha2.scm 652 */
						BgL_auxz00_5646 = BgL_keyz00_3742;
					}
				else
					{
						obj_t BgL_auxz00_5649;

						BgL_auxz00_5649 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3062z00zz__sha2z00,
							BINT(((long) 25536)), BGl_string3073z00zz__sha2z00,
							BGl_string3067z00zz__sha2z00, BgL_keyz00_3742);
						FAILURE(BgL_auxz00_5649, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(BgL_auxz00_5646,
					BgL_auxz00_5653);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__sha2z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 50 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__sha2z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 50 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__sha2z00()
	{
		AN_OBJECT;
		{	/* Unsafe/sha2.scm 50 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3074z00zz__sha2z00));
			return
				BGl_modulezd2initializa7ationz75zz__hmacz00(((long) 2744903),
				BSTRING_TO_STRING(BGl_string3074z00zz__sha2z00));
		}
	}

#ifdef __cplusplus
}
#endif
