/*===========================================================================*/
/*   (Unsafe/hmac.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/hmac.scm -indent -o objs/obj_u/Unsafe/hmac.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__hmacz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__hmacz00();
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__hmacz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl__hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__hmacz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2420z00zz__hmacz00,
		BgL_bgl_string2420za700za7za7_2425za7,
		"/tmp/bigloo/runtime/Unsafe/hmac.scm", 35);
	      DEFINE_STRING(BGl_string2421z00zz__hmacz00,
		BgL_bgl_string2421za700za7za7_2426za7, "_hmac-string", 12);
	      DEFINE_STRING(BGl_string2422z00zz__hmacz00,
		BgL_bgl_string2422za700za7za7_2427za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2423z00zz__hmacz00,
		BgL_bgl_string2423za700za7za7_2428za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2424z00zz__hmacz00,
		BgL_bgl_string2424za700za7za7_2429za7, "__hmac", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hmaczd2stringzd2envz00zz__hmacz00,
		BgL_bgl__hmacza7d2stringza7d2430z00, BGl__hmaczd2stringzd2zz__hmacz00, 0L,
		BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long
		BgL_checksumz00_1858, char *BgL_fromz00_1859)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__hmacz00))
				{
					BGl_requirezd2initializa7ationz75zz__hmacz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__hmacz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* hmac-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t BgL_keyz00_1,
		obj_t BgL_messagez00_2, obj_t BgL_hashz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/hmac.scm 56 */
			{	/* Unsafe/hmac.scm 60 */
				obj_t BgL_keybz00_892;

				{	/* Unsafe/hmac.scm 62 */
					obj_t BgL_list1908z00_918;

					BgL_list1908z00_918 =
						MAKE_PAIR(BCHAR(((unsigned char) '\000')), BNIL);
					{	/* Unsafe/hmac.scm 62 */
						obj_t BgL_res2404z00_1633;

						{	/* Unsafe/hmac.scm 62 */
							obj_t BgL_arg2245z00_1630;

							BgL_arg2245z00_1630 = CAR(BgL_list1908z00_918);
							BgL_res2404z00_1633 =
								make_string(((long) 64), CCHAR(BgL_arg2245z00_1630));
						}
						BgL_keybz00_892 = BgL_res2404z00_1633;
				}}
				{	/* Unsafe/hmac.scm 62 */
					obj_t BgL_ixorz00_893;

					BgL_ixorz00_893 = make_string_sans_fill(((long) 64));
					{	/* Unsafe/hmac.scm 63 */
						obj_t BgL_oxorz00_894;

						BgL_oxorz00_894 = make_string_sans_fill(((long) 64));
						{	/* Unsafe/hmac.scm 64 */

							{	/* Unsafe/hmac.scm 66 */
								long BgL_keyzd2lengthzd2_895;

								BgL_keyzd2lengthzd2_895 = STRING_LENGTH(BgL_keyz00_1);
								if ((BgL_keyzd2lengthzd2_895 > ((long) 64)))
									{	/* Unsafe/hmac.scm 68 */
										obj_t BgL_arg1890z00_897;

										{	/* Unsafe/hmac.scm 68 */
											obj_t BgL_arg1895z00_901;

											BgL_arg1895z00_901 =
												PROCEDURE_ENTRY(BgL_hashz00_3) (BgL_hashz00_3,
												BgL_keyz00_1, BEOA);
											BgL_arg1890z00_897 =
												BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00
												(BgL_arg1895z00_901);
										}
										blit_string(BgL_arg1890z00_897, ((long) 0), BgL_keybz00_892,
											((long) 0), ((long) 16));
									}
								else
									{	/* Unsafe/hmac.scm 67 */
										blit_string(BgL_keyz00_1, ((long) 0), BgL_keybz00_892,
											((long) 0), BgL_keyzd2lengthzd2_895);
							}}
							{
								long BgL_iz00_903;

								BgL_iz00_903 = ((long) 0);
							BgL_zc3anonymousza31896ze3z83_904:
								if ((BgL_iz00_903 < ((long) 64)))
									{	/* Unsafe/hmac.scm 73 */
										long BgL_xiz00_906;

										BgL_xiz00_906 = (STRING_REF(BgL_keybz00_892, BgL_iz00_903));
										{	/* Unsafe/hmac.scm 74 */
											unsigned char BgL_auxz00_1883;

											BgL_auxz00_1883 = ((((long) 54) ^ BgL_xiz00_906));
											STRING_SET(BgL_ixorz00_893, BgL_iz00_903,
												BgL_auxz00_1883);
										}
										{	/* Unsafe/hmac.scm 75 */
											unsigned char BgL_auxz00_1887;

											BgL_auxz00_1887 = ((((long) 92) ^ BgL_xiz00_906));
											STRING_SET(BgL_oxorz00_894, BgL_iz00_903,
												BgL_auxz00_1887);
										}
										{
											long BgL_iz00_1891;

											BgL_iz00_1891 = (BgL_iz00_903 + ((long) 1));
											BgL_iz00_903 = BgL_iz00_1891;
											goto BgL_zc3anonymousza31896ze3z83_904;
										}
									}
								else
									{	/* Unsafe/hmac.scm 72 */
										((bool_t) 0);
									}
							}
							{	/* Unsafe/hmac.scm 81 */
								obj_t BgL_arg1904z00_914;

								{	/* Unsafe/hmac.scm 81 */
									obj_t BgL_arg1905z00_915;

									{	/* Unsafe/hmac.scm 81 */
										obj_t BgL_arg1906z00_916;

										{	/* Unsafe/hmac.scm 81 */
											obj_t BgL_arg1907z00_917;

											BgL_arg1907z00_917 =
												string_append(BgL_ixorz00_893, BgL_messagez00_2);
											BgL_arg1906z00_916 =
												PROCEDURE_ENTRY(BgL_hashz00_3) (BgL_hashz00_3,
												BgL_arg1907z00_917, BEOA);
										}
										BgL_arg1905z00_915 =
											BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00
											(BgL_arg1906z00_916);
									}
									BgL_arg1904z00_914 =
										string_append(BgL_oxorz00_894, BgL_arg1905z00_915);
								}
								return
									PROCEDURE_ENTRY(BgL_hashz00_3) (BgL_hashz00_3,
									BgL_arg1904z00_914, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* _hmac-string */
	obj_t BGl__hmaczd2stringzd2zz__hmacz00(obj_t BgL_envz00_1848,
		obj_t BgL_keyz00_1849, obj_t BgL_messagez00_1850, obj_t BgL_hashz00_1851)
	{
		AN_OBJECT;
		{	/* Unsafe/hmac.scm 56 */
			{	/* Unsafe/hmac.scm 58 */
				obj_t BgL_auxz00_1914;

				obj_t BgL_auxz00_1907;

				obj_t BgL_auxz00_1900;

				if (PROCEDUREP(BgL_hashz00_1851))
					{	/* Unsafe/hmac.scm 58 */
						BgL_auxz00_1914 = BgL_hashz00_1851;
					}
				else
					{
						obj_t BgL_auxz00_1917;

						BgL_auxz00_1917 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2420z00zz__hmacz00,
							BINT(((long) 2026)), BGl_string2421z00zz__hmacz00,
							BGl_string2423z00zz__hmacz00, BgL_hashz00_1851);
						FAILURE(BgL_auxz00_1917, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_messagez00_1850))
					{	/* Unsafe/hmac.scm 58 */
						BgL_auxz00_1907 = BgL_messagez00_1850;
					}
				else
					{
						obj_t BgL_auxz00_1910;

						BgL_auxz00_1910 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2420z00zz__hmacz00,
							BINT(((long) 2026)), BGl_string2421z00zz__hmacz00,
							BGl_string2422z00zz__hmacz00, BgL_messagez00_1850);
						FAILURE(BgL_auxz00_1910, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_1849))
					{	/* Unsafe/hmac.scm 58 */
						BgL_auxz00_1900 = BgL_keyz00_1849;
					}
				else
					{
						obj_t BgL_auxz00_1903;

						BgL_auxz00_1903 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2420z00zz__hmacz00,
							BINT(((long) 2026)), BGl_string2421z00zz__hmacz00,
							BGl_string2422z00zz__hmacz00, BgL_keyz00_1849);
						FAILURE(BgL_auxz00_1903, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2stringzd2zz__hmacz00(BgL_auxz00_1900, BgL_auxz00_1907,
					BgL_auxz00_1914);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__hmacz00()
	{
		AN_OBJECT;
		{	/* Unsafe/hmac.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__hmacz00()
	{
		AN_OBJECT;
		{	/* Unsafe/hmac.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__hmacz00()
	{
		AN_OBJECT;
		{	/* Unsafe/hmac.scm 15 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2424z00zz__hmacz00));
			return
				BGl_modulezd2initializa7ationz75zz__base64z00(((long) 111334751),
				BSTRING_TO_STRING(BGl_string2424z00zz__hmacz00));
		}
	}

#ifdef __cplusplus
}
#endif
