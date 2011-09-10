/*===========================================================================*/
/*   (Unsafe/rsa.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/rsa.scm -indent -o objs/obj_u/Unsafe/rsa.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bgl_bignum_add(obj_t, obj_t);
	extern obj_t bgl_long_to_bignum(long);
	BGL_EXPORTED_DECL obj_t BGl_publiczd2rsazd2keyz00zz__rsaz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t bgl_bignum_odd(obj_t);
	extern obj_t bgl_bignum_remainder(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rsaz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rsaz00();
	extern obj_t bgl_bignum_sub(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_PKCS1zd2padzd2zz__rsaz00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_gcdzd2extzd2zz__rsaz00(obj_t, obj_t);
	static obj_t BGl__PKCS1zd2unpadzd2zz__rsaz00(obj_t, obj_t);
	extern obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rsaz00();
	extern obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bignumzd2ze3u8vectorz31zz__rsaz00(obj_t);
	static obj_t BGl_list2718z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_exptzd2modzd2zz__rsaz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2keyzd3z01zz__rsaz00(obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	extern long bgl_bignum_to_long(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t,
		obj_t);
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rsaz00(long,
		char *);
	static obj_t BGl_toplevelzd2initzd2zz__rsaz00();
	static obj_t BGl_u8vectorzd2appendzd2zz__rsaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_privatezd2rsazd2keyz00zz__rsaz00(obj_t);
	extern bool_t bgl_bignum_even(obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_bignum_quotient(obj_t, obj_t);
	static obj_t BGl__rsazd2keyzd3z01zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t, obj_t);
	static obj_t BGl__privatezd2rsazd2keyz00zz__rsaz00(obj_t, obj_t);
	static obj_t BGl__rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__PKCS1zd2padzd2zz__rsaz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_randomzd2primezd2zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2706z00zz__rsaz00 = BUNSPEC;
	extern obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_symbol2713z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl__rsazd2encryptzd2stringz00zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2715z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_symbol2719z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl__publiczd2rsazd2keyz00zz__rsaz00(obj_t, obj_t);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl__rsazd2decryptzd2stringz00zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_u8vectorzd2ze3bignumz31zz__rsaz00(obj_t);
	extern obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2encryptzd2stringz00zz__rsaz00(obj_t, obj_t);
	extern obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_keyword2709z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_keyword2711z00zz__rsaz00 = BUNSPEC;
	extern obj_t bgl_bignum_mul(obj_t, obj_t);
	extern int bgl_bignum_cmp(obj_t, obj_t);
	static obj_t BGl_subu8vectorz00zz__rsaz00(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2decryptzd2stringz00zz__rsaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_PKCS1zd2unpadzd2zz__rsaz00(obj_t);
	static obj_t BGl_modzd2inversezd2zz__rsaz00(obj_t, obj_t);
	extern obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rsaz00();
	extern obj_t bgl_rand_bignum(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rsazd2keyzd2pairzd2envz00zz__rsaz00,
		BgL_bgl__makeza7d2rsaza7d2ke2731z00, opt_generic_entry,
		BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_publiczd2rsazd2keyzd2envzd2zz__rsaz00,
		BgL_bgl__publicza7d2rsaza7d22732z00, BGl__publiczd2rsazd2keyz00zz__rsaz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00;
	   
		 
		DEFINE_STRING(BGl_string2704z00zz__rsaz00,
		BgL_bgl_string2704za700za7za7_2733za7, ".", 1);
	      DEFINE_STRING(BGl_string2705z00zz__rsaz00,
		BgL_bgl_string2705za700za7za7_2734za7, "+", 1);
	      DEFINE_STRING(BGl_string2707z00zz__rsaz00,
		BgL_bgl_string2707za700za7za7_2735za7, "mod-inverse", 11);
	      DEFINE_STRING(BGl_string2708z00zz__rsaz00,
		BgL_bgl_string2708za700za7za7_2736za7,
		"internal error, numbers are not relatively prime", 48);
	      DEFINE_STRING(BGl_string2710z00zz__rsaz00,
		BgL_bgl_string2710za700za7za7_2737za7, "show-trace", 10);
	      DEFINE_STRING(BGl_string2712z00zz__rsaz00,
		BgL_bgl_string2712za700za7za7_2738za7, "size", 4);
	      DEFINE_STRING(BGl_string2714z00zz__rsaz00,
		BgL_bgl_string2714za700za7za7_2739za7, "rsa-key", 7);
	      DEFINE_STRING(BGl_string2716z00zz__rsaz00,
		BgL_bgl_string2716za700za7za7_2740za7, "PKCS1-pad", 9);
	      DEFINE_STRING(BGl_string2717z00zz__rsaz00,
		BgL_bgl_string2717za700za7za7_2741za7,
		"not enough space is available for proper padding", 48);
	      DEFINE_STRING(BGl_string2720z00zz__rsaz00,
		BgL_bgl_string2720za700za7za7_2742za7, "PKCS1-unpad", 11);
	      DEFINE_STRING(BGl_string2721z00zz__rsaz00,
		BgL_bgl_string2721za700za7za7_2743za7, "improperly padded message", 25);
	      DEFINE_STRING(BGl_string2722z00zz__rsaz00,
		BgL_bgl_string2722za700za7za7_2744za7, "/tmp/bigloo/runtime/Unsafe/rsa.scm",
		34);
	      DEFINE_STRING(BGl_string2723z00zz__rsaz00,
		BgL_bgl_string2723za700za7za7_2745za7, "_rsa-encrypt-string", 19);
	      DEFINE_STRING(BGl_string2724z00zz__rsaz00,
		BgL_bgl_string2724za700za7za7_2746za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2725z00zz__rsaz00,
		BgL_bgl_string2725za700za7za7_2747za7, "_rsa-decrypt-string", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2decryptzd2stringzd2envzd2zz__rsaz00,
		BgL_bgl__rsaza7d2decryptza7d2748z00,
		BGl__rsazd2decryptzd2stringz00zz__rsaz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_PKCS1zd2unpadzd2envz00zz__rsaz00,
		BgL_bgl__pkcs1za7d2unpadza7d2749z00, BGl__PKCS1zd2unpadzd2zz__rsaz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_PKCS1zd2padzd2envz00zz__rsaz00,
		BgL_bgl__pkcs1za7d2padza7d2za72750za7, BGl__PKCS1zd2padzd2zz__rsaz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2encryptzd2u8vectorzd2envzd2zz__rsaz00,
		BgL_bgl__rsaza7d2encryptza7d2751z00,
		BGl__rsazd2encryptzd2u8vectorz00zz__rsaz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2encryptzd2stringzd2envzd2zz__rsaz00,
		BgL_bgl__rsaza7d2encryptza7d2752z00,
		BGl__rsazd2encryptzd2stringz00zz__rsaz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2rsazd2keyzd2envzd2zz__rsaz00,
		BgL_bgl__privateza7d2rsaza7d2753z00, BGl__privatezd2rsazd2keyz00zz__rsaz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2decryptzd2u8vectorzd2envzd2zz__rsaz00,
		BgL_bgl__rsaza7d2decryptza7d2754z00,
		BGl__rsazd2decryptzd2u8vectorz00zz__rsaz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2keyzd3zd2envzd3zz__rsaz00,
		BgL_bgl__rsaza7d2keyza7d3za7012755za7, BGl__rsazd2keyzd3z01zz__rsaz00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rsaz00(long
		BgL_checksumz00_2977, char *BgL_fromz00_2978)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rsaz00))
				{
					BGl_requirezd2initializa7ationz75zz__rsaz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rsaz00();
					BGl_toplevelzd2initzd2zz__rsaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rsaz00()
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 16 */
			BGl_symbol2706z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2707z00zz__rsaz00);
			BGl_keyword2709z00zz__rsaz00 =
				bstring_to_keyword(BGl_string2710z00zz__rsaz00);
			BGl_keyword2711z00zz__rsaz00 =
				bstring_to_keyword(BGl_string2712z00zz__rsaz00);
			BGl_symbol2713z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2714z00zz__rsaz00);
			BGl_symbol2715z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2716z00zz__rsaz00);
			BGl_list2718z00zz__rsaz00 = MAKE_PAIR(BINT(((long) 0)), BNIL);
			return (BGl_symbol2719z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2720z00zz__rsaz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rsaz00()
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}
	}



/* random-prime */
	obj_t BGl_randomzd2primezd2zz__rsaz00(obj_t BgL_startz00_15,
		obj_t BgL_endz00_16, obj_t BgL_showzd2tracezd2_17)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 76 */
			{
				long BgL_nz00_1019;

				if (CBOOL(BgL_showzd2tracezd2_17))
					{	/* Unsafe/rsa.scm 88 */
						{	/* Unsafe/rsa.scm 89 */
							obj_t BgL_arg1925z00_987;

							{	/* Unsafe/rsa.scm 89 */
								obj_t BgL_res2669z00_2148;

								{	/* Unsafe/rsa.scm 89 */
									obj_t BgL_auxz00_2994;

									BgL_auxz00_2994 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2669z00_2148 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2994);
								}
								BgL_arg1925z00_987 = BgL_res2669z00_2148;
							}
							bgl_display_string(BGl_string2704z00zz__rsaz00,
								BgL_arg1925z00_987);
						}
						{	/* Unsafe/rsa.scm 90 */
							obj_t BgL_arg1926z00_988;

							{	/* Unsafe/rsa.scm 90 */
								obj_t BgL_res2670z00_2152;

								{	/* Unsafe/rsa.scm 90 */
									obj_t BgL_auxz00_2998;

									BgL_auxz00_2998 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2670z00_2152 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2998);
								}
								BgL_arg1926z00_988 = BgL_res2670z00_2152;
							}
							FLUSH_OUTPUT_PORT(BgL_arg1926z00_988);
						}
					}
				else
					{	/* Unsafe/rsa.scm 88 */
						BFALSE;
					}
				{	/* Unsafe/rsa.scm 92 */
					obj_t BgL_prodzd2smallzd2primesz00_989;

					BgL_nz00_1019 = ((long) 300);
					{	/* Unsafe/rsa.scm 79 */
						long BgL_g1824z00_1021;

						BgL_g1824z00_1021 = (BgL_nz00_1019 - ((long) 1));
						{
							long BgL_nz00_1023;

							obj_t BgL_pz00_1024;

							long BgL_iz00_1025;

							BgL_nz00_1023 = BgL_g1824z00_1021;
							BgL_pz00_1024 = (bgl_string_to_bignum("2", 16));
							BgL_iz00_1025 = ((long) 3);
						BgL_zc3anonymousza31953ze3z83_1026:
							if ((BgL_nz00_1023 == ((long) 0)))
								{	/* Unsafe/rsa.scm 81 */
									BgL_prodzd2smallzd2primesz00_989 = BgL_pz00_1024;
								}
							else
								{	/* Unsafe/rsa.scm 83 */
									bool_t BgL_testz00_3005;

									{	/* Unsafe/rsa.scm 83 */
										obj_t BgL_arg1962z00_1035;

										{	/* Unsafe/rsa.scm 83 */
											obj_t BgL_arg1963z00_1036;

											BgL_arg1963z00_1036 = bgl_long_to_bignum(BgL_iz00_1025);
											{	/* Unsafe/rsa.scm 83 */
												obj_t BgL_list1964z00_1037;

												{	/* Unsafe/rsa.scm 83 */
													obj_t BgL_arg1965z00_1038;

													BgL_arg1965z00_1038 = MAKE_PAIR(BgL_pz00_1024, BNIL);
													BgL_list1964z00_1037 =
														MAKE_PAIR(BgL_arg1963z00_1036, BgL_arg1965z00_1038);
												}
												BgL_arg1962z00_1035 =
													BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1964z00_1037);
											}
										}
										BgL_testz00_3005 =
											(
											(long) (bgl_bignum_cmp((bgl_string_to_bignum("1", 16)),
													BgL_arg1962z00_1035)) == ((long) 0));
									}
									if (BgL_testz00_3005)
										{
											long BgL_iz00_3018;

											obj_t BgL_pz00_3015;

											long BgL_nz00_3013;

											BgL_nz00_3013 = (BgL_nz00_1023 - ((long) 1));
											BgL_pz00_3015 =
												bgl_bignum_mul(BgL_pz00_1024,
												bgl_long_to_bignum(BgL_iz00_1025));
											BgL_iz00_3018 = (BgL_iz00_1025 + ((long) 2));
											BgL_iz00_1025 = BgL_iz00_3018;
											BgL_pz00_1024 = BgL_pz00_3015;
											BgL_nz00_1023 = BgL_nz00_3013;
											goto BgL_zc3anonymousza31953ze3z83_1026;
										}
									else
										{
											long BgL_iz00_3020;

											BgL_iz00_3020 = (BgL_iz00_1025 + ((long) 2));
											BgL_iz00_1025 = BgL_iz00_3020;
											goto BgL_zc3anonymousza31953ze3z83_1026;
										}
								}
						}
					}
					{
						obj_t BgL_nz00_1007;

						{
							long BgL_iz00_992;

							BgL_iz00_992 = ((long) 1);
						BgL_zc3anonymousza31927ze3z83_993:
							if (CBOOL(BgL_showzd2tracezd2_17))
								{	/* Unsafe/rsa.scm 99 */
									{	/* Unsafe/rsa.scm 100 */
										obj_t BgL_arg1930z00_995;

										{	/* Unsafe/rsa.scm 100 */
											obj_t BgL_res2671z00_2155;

											{	/* Unsafe/rsa.scm 100 */
												obj_t BgL_auxz00_3024;

												BgL_auxz00_3024 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2671z00_2155 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3024);
											}
											BgL_arg1930z00_995 = BgL_res2671z00_2155;
										}
										bgl_display_string(BGl_string2705z00zz__rsaz00,
											BgL_arg1930z00_995);
									}
									{	/* Unsafe/rsa.scm 101 */
										obj_t BgL_arg1931z00_996;

										{	/* Unsafe/rsa.scm 101 */
											obj_t BgL_res2672z00_2159;

											{	/* Unsafe/rsa.scm 101 */
												obj_t BgL_auxz00_3028;

												BgL_auxz00_3028 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2672z00_2159 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3028);
											}
											BgL_arg1931z00_996 = BgL_res2672z00_2159;
										}
										FLUSH_OUTPUT_PORT(BgL_arg1931z00_996);
									}
								}
							else
								{	/* Unsafe/rsa.scm 99 */
									BFALSE;
								}
							{	/* Unsafe/rsa.scm 102 */
								obj_t BgL_xz00_997;

								BgL_xz00_997 =
									bgl_bignum_add(BgL_startz00_15,
									bgl_rand_bignum(bgl_bignum_sub(BgL_endz00_16,
											BgL_startz00_15)));
								{	/* Unsafe/rsa.scm 102 */
									obj_t BgL_nz00_998;

									if (bgl_bignum_odd(BgL_xz00_997))
										{	/* Unsafe/rsa.scm 103 */
											BgL_nz00_998 = BgL_xz00_997;
										}
									else
										{	/* Unsafe/rsa.scm 103 */
											BgL_nz00_998 =
												bgl_bignum_add(BgL_xz00_997, (bgl_string_to_bignum("1",
														16)));
										}
									{	/* Unsafe/rsa.scm 103 */

										{	/* Unsafe/rsa.scm 104 */
											bool_t BgL_testz00_3038;

											if (
												((long) (bgl_bignum_cmp(BgL_nz00_998,
															BgL_endz00_16)) >= ((long) 0)))
												{	/* Unsafe/rsa.scm 104 */
													BgL_testz00_3038 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/rsa.scm 104 */
													bool_t BgL_testz00_3043;

													BgL_nz00_1007 = BgL_nz00_998;
													{	/* Unsafe/rsa.scm 95 */
														bool_t BgL_testz00_3044;

														{	/* Unsafe/rsa.scm 95 */
															obj_t BgL_arg1949z00_1015;

															{	/* Unsafe/rsa.scm 95 */
																obj_t BgL_list1950z00_1016;

																{	/* Unsafe/rsa.scm 95 */
																	obj_t BgL_arg1951z00_1017;

																	BgL_arg1951z00_1017 =
																		MAKE_PAIR(BgL_prodzd2smallzd2primesz00_989,
																		BNIL);
																	BgL_list1950z00_1016 =
																		MAKE_PAIR(BgL_nz00_1007,
																		BgL_arg1951z00_1017);
																}
																BgL_arg1949z00_1015 =
																	BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																	(BgL_list1950z00_1016);
															}
															BgL_testz00_3044 =
																(
																(long) (bgl_bignum_cmp((bgl_string_to_bignum
																			("1", 16)),
																		BgL_arg1949z00_1015)) == ((long) 0));
														}
														if (BgL_testz00_3044)
															{	/* Unsafe/rsa.scm 95 */
																BgL_testz00_3043 =
																	(
																	(long) (bgl_bignum_cmp((bgl_string_to_bignum
																				("1", 16)),
																			BGl_exptzd2modzd2zz__rsaz00(
																				(bgl_string_to_bignum("2", 16)),
																				bgl_bignum_sub(BgL_nz00_1007,
																					(bgl_string_to_bignum("1", 16))),
																				BgL_nz00_1007))) == ((long) 0));
															}
														else
															{	/* Unsafe/rsa.scm 95 */
																BgL_testz00_3043 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_3043)
														{	/* Unsafe/rsa.scm 104 */
															BgL_testz00_3038 = ((bool_t) 0);
														}
													else
														{	/* Unsafe/rsa.scm 104 */
															BgL_testz00_3038 = ((bool_t) 1);
														}
												}
											if (BgL_testz00_3038)
												{
													long BgL_iz00_3056;

													BgL_iz00_3056 =
														(long)
														CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
															(BgL_iz00_992), BINT(((long) 1))));
													BgL_iz00_992 = BgL_iz00_3056;
													goto BgL_zc3anonymousza31927ze3z83_993;
												}
											else
												{	/* Unsafe/rsa.scm 104 */
													return BgL_nz00_998;
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



/* gcd-ext */
	obj_t BGl_gcdzd2extzd2zz__rsaz00(obj_t BgL_xz00_18, obj_t BgL_yz00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 111 */
			{
				obj_t BgL_xz00_2214;

				obj_t BgL_yz00_2215;

				obj_t BgL_u1z00_2216;

				obj_t BgL_u2z00_2217;

				obj_t BgL_v1z00_2218;

				obj_t BgL_v2z00_2219;

				BgL_xz00_2214 = BgL_xz00_18;
				BgL_yz00_2215 = BgL_yz00_19;
				BgL_u1z00_2216 = (bgl_string_to_bignum("1", 16));
				BgL_u2z00_2217 = (bgl_string_to_bignum("0", 16));
				BgL_v1z00_2218 = (bgl_string_to_bignum("0", 16));
				BgL_v2z00_2219 = (bgl_string_to_bignum("1", 16));
			BgL_loopz00_2213:
				if (BXZERO(BgL_yz00_2215))
					{	/* Unsafe/rsa.scm 112 */
						obj_t BgL_list1968z00_2231;

						{	/* Unsafe/rsa.scm 112 */
							obj_t BgL_arg1969z00_2232;

							{	/* Unsafe/rsa.scm 112 */
								obj_t BgL_arg1970z00_2233;

								BgL_arg1970z00_2233 = MAKE_PAIR(BgL_v1z00_2218, BNIL);
								BgL_arg1969z00_2232 =
									MAKE_PAIR(BgL_u1z00_2216, BgL_arg1970z00_2233);
							}
							BgL_list1968z00_2231 =
								MAKE_PAIR(BgL_xz00_2214, BgL_arg1969z00_2232);
						}
						return BgL_list1968z00_2231;
					}
				else
					{	/* Unsafe/rsa.scm 112 */
						obj_t BgL_qz00_2234;

						obj_t BgL_rz00_2235;

						BgL_qz00_2234 = bgl_bignum_quotient(BgL_xz00_2214, BgL_yz00_2215);
						BgL_rz00_2235 = bgl_bignum_remainder(BgL_xz00_2214, BgL_yz00_2215);
						{
							obj_t BgL_v2z00_3075;

							obj_t BgL_v1z00_3074;

							obj_t BgL_u2z00_3071;

							obj_t BgL_u1z00_3070;

							obj_t BgL_yz00_3069;

							obj_t BgL_xz00_3068;

							BgL_xz00_3068 = BgL_yz00_2215;
							BgL_yz00_3069 = BgL_rz00_2235;
							BgL_u1z00_3070 = BgL_u2z00_2217;
							BgL_u2z00_3071 =
								bgl_bignum_sub(BgL_u1z00_2216,
								bgl_bignum_mul(BgL_qz00_2234, BgL_u2z00_2217));
							BgL_v1z00_3074 = BgL_v2z00_2219;
							BgL_v2z00_3075 =
								bgl_bignum_sub(BgL_v1z00_2218,
								bgl_bignum_mul(BgL_qz00_2234, BgL_v2z00_2219));
							BgL_v2z00_2219 = BgL_v2z00_3075;
							BgL_v1z00_2218 = BgL_v1z00_3074;
							BgL_u2z00_2217 = BgL_u2z00_3071;
							BgL_u1z00_2216 = BgL_u1z00_3070;
							BgL_yz00_2215 = BgL_yz00_3069;
							BgL_xz00_2214 = BgL_xz00_3068;
							goto BgL_loopz00_2213;
						}
					}
			}
		}
	}



/* mod-inverse */
	obj_t BGl_modzd2inversezd2zz__rsaz00(obj_t BgL_xz00_20, obj_t BgL_bz00_21)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 127 */
			{	/* Unsafe/rsa.scm 128 */
				obj_t BgL_x1z00_1060;

				BgL_x1z00_1060 =
					BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_20, BgL_bz00_21);
				{	/* Unsafe/rsa.scm 128 */
					obj_t BgL_gz00_1061;

					BgL_gz00_1061 =
						BGl_gcdzd2extzd2zz__rsaz00(BgL_x1z00_1060, BgL_bz00_21);
					{	/* Unsafe/rsa.scm 129 */

						{	/* Unsafe/rsa.scm 130 */
							bool_t BgL_testz00_3080;

							{	/* Unsafe/rsa.scm 130 */
								obj_t BgL_n1z00_2312;

								BgL_n1z00_2312 = CAR(BgL_gz00_1061);
								BgL_testz00_3080 =
									(
									(long) (bgl_bignum_cmp(BgL_n1z00_2312,
											(bgl_string_to_bignum("1", 16)))) == ((long) 0));
							}
							if (BgL_testz00_3080)
								{	/* Unsafe/rsa.scm 134 */
									obj_t BgL_auxz00_3085;

									{	/* Unsafe/rsa.scm 134 */
										obj_t BgL_pairz00_2319;

										BgL_pairz00_2319 = BgL_gz00_1061;
										BgL_auxz00_3085 = CAR(CDR(BgL_pairz00_2319));
									}
									return
										BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_3085,
										BgL_bz00_21);
								}
							else
								{	/* Unsafe/rsa.scm 131 */
									obj_t BgL_arg1977z00_1064;

									obj_t BgL_arg1980z00_1066;

									BgL_arg1977z00_1064 = BGl_symbol2706z00zz__rsaz00;
									BgL_arg1980z00_1066 = MAKE_PAIR(BgL_xz00_20, BgL_bz00_21);
									return
										BGl_errorz00zz__errorz00(BgL_arg1977z00_1064,
										BGl_string2708z00zz__rsaz00, BgL_arg1980z00_1066);
								}
						}
					}
				}
			}
		}
	}



/* _make-rsa-key-pair */
	obj_t BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t BgL_envz00_25,
		obj_t BgL_opt1876z00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 139 */
			{	/* Unsafe/rsa.scm 139 */
				int BgL_l1877z00_1069;

				BgL_l1877z00_1069 = VECTOR_LENGTH(BgL_opt1876z00_24);
				{	/* Unsafe/rsa.scm 139 */

					{	/* Unsafe/rsa.scm 139 */
						obj_t BgL_showzd2tracezd2_1073;

						BgL_showzd2tracezd2_1073 = BFALSE;
						{	/* Unsafe/rsa.scm 139 */
							obj_t BgL_siza7eza7_1074;

							BgL_siza7eza7_1074 = BINT(((long) 1024));
							{	/* Unsafe/rsa.scm 139 */

								{	/* Unsafe/rsa.scm 139 */
									long BgL_index1881z00_1075;

									{
										long BgL_iz00_2325;

										BgL_iz00_2325 = ((long) 0);
									BgL_search1878z00_2324:
										if ((BgL_iz00_2325 == (long) (BgL_l1877z00_1069)))
											{	/* Unsafe/rsa.scm 139 */
												BgL_index1881z00_1075 = ((long) -1);
											}
										else
											{	/* Unsafe/rsa.scm 139 */
												obj_t BgL_vz00_2327;

												BgL_vz00_2327 =
													VECTOR_REF(BgL_opt1876z00_24, (int) (BgL_iz00_2325));
												if ((BgL_vz00_2327 == BGl_keyword2709z00zz__rsaz00))
													{	/* Unsafe/rsa.scm 139 */
														BgL_index1881z00_1075 =
															(BgL_iz00_2325 + ((long) 1));
													}
												else
													{
														long BgL_iz00_3101;

														BgL_iz00_3101 = (BgL_iz00_2325 + ((long) 2));
														BgL_iz00_2325 = BgL_iz00_3101;
														goto BgL_search1878z00_2324;
													}
											}
									}
									if ((BgL_index1881z00_1075 >= ((long) 0)))
										{	/* Unsafe/rsa.scm 139 */
											BgL_showzd2tracezd2_1073 =
												VECTOR_REF(BgL_opt1876z00_24,
												(int) (BgL_index1881z00_1075));
										}
									else
										{	/* Unsafe/rsa.scm 139 */
											BFALSE;
										}
								}
								{	/* Unsafe/rsa.scm 139 */
									long BgL_index1882z00_1077;

									{
										long BgL_iz00_2339;

										BgL_iz00_2339 = ((long) 0);
									BgL_search1878z00_2338:
										if ((BgL_iz00_2339 == (long) (BgL_l1877z00_1069)))
											{	/* Unsafe/rsa.scm 139 */
												BgL_index1882z00_1077 = ((long) -1);
											}
										else
											{	/* Unsafe/rsa.scm 139 */
												obj_t BgL_vz00_2341;

												BgL_vz00_2341 =
													VECTOR_REF(BgL_opt1876z00_24, (int) (BgL_iz00_2339));
												if ((BgL_vz00_2341 == BGl_keyword2711z00zz__rsaz00))
													{	/* Unsafe/rsa.scm 139 */
														BgL_index1882z00_1077 =
															(BgL_iz00_2339 + ((long) 1));
													}
												else
													{
														long BgL_iz00_3115;

														BgL_iz00_3115 = (BgL_iz00_2339 + ((long) 2));
														BgL_iz00_2339 = BgL_iz00_3115;
														goto BgL_search1878z00_2338;
													}
											}
									}
									if ((BgL_index1882z00_1077 >= ((long) 0)))
										{	/* Unsafe/rsa.scm 139 */
											BgL_siza7eza7_1074 =
												VECTOR_REF(BgL_opt1876z00_24,
												(int) (BgL_index1882z00_1077));
										}
									else
										{	/* Unsafe/rsa.scm 139 */
											BFALSE;
										}
								}
								{	/* Unsafe/rsa.scm 139 */
									obj_t BgL_showzd2tracezd2_1079;

									BgL_showzd2tracezd2_1079 = BgL_showzd2tracezd2_1073;
									return
										BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00
										(BgL_showzd2tracezd2_1079, BgL_siza7eza7_1074);
								}
							}
						}
					}
				}
			}
		}
	}



/* make-rsa-key-pair */
	BGL_EXPORTED_DEF obj_t BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t
		BgL_showzd2tracezd2_22, obj_t BgL_siza7eza7_23)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 139 */
			{	/* Unsafe/rsa.scm 140 */
				long BgL_siza7ezd2pz75_1085;

				{	/* Unsafe/rsa.scm 140 */
					long BgL_auxz00_3122;

					BgL_auxz00_3122 = (long) CINT(BgL_siza7eza7_23);
					BgL_siza7ezd2pz75_1085 = (BgL_auxz00_3122 / ((long) 2));
				}
				{	/* Unsafe/rsa.scm 140 */
					obj_t BgL_startzd2pzd2_1086;

					BgL_startzd2pzd2_1086 =
						BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00((bgl_string_to_bignum("2",
								16)), bgl_long_to_bignum(BgL_siza7ezd2pz75_1085));
					{	/* Unsafe/rsa.scm 141 */
						obj_t BgL_endzd2pzd2_1087;

						BgL_endzd2pzd2_1087 =
							bgl_bignum_mul(BgL_startzd2pzd2_1086, (bgl_string_to_bignum("2",
									16)));
						{	/* Unsafe/rsa.scm 142 */
							obj_t BgL_pz00_1088;

							BgL_pz00_1088 =
								BGl_randomzd2primezd2zz__rsaz00(BgL_startzd2pzd2_1086,
								BgL_endzd2pzd2_1087, BgL_showzd2tracezd2_22);
							{	/* Unsafe/rsa.scm 143 */
								obj_t BgL_startzd2nzd2_1089;

								BgL_startzd2nzd2_1089 =
									BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(
									(bgl_string_to_bignum("2", 16)),
									bgl_long_to_bignum((long) CINT(BgL_siza7eza7_23)));
								{	/* Unsafe/rsa.scm 144 */
									obj_t BgL_endzd2nzd2_1090;

									BgL_endzd2nzd2_1090 =
										bgl_bignum_mul(BgL_startzd2nzd2_1089,
										(bgl_string_to_bignum("2", 16)));
									{	/* Unsafe/rsa.scm 145 */
										obj_t BgL_startzd2qzd2_1091;

										BgL_startzd2qzd2_1091 =
											bgl_bignum_add(bgl_bignum_quotient(bgl_bignum_sub
												(BgL_startzd2nzd2_1089, (bgl_string_to_bignum("1",
															16))), BgL_pz00_1088), (bgl_string_to_bignum("1",
													16)));
										{	/* Unsafe/rsa.scm 146 */
											obj_t BgL_endzd2qzd2_1092;

											BgL_endzd2qzd2_1092 =
												bgl_bignum_quotient(BgL_endzd2nzd2_1090, BgL_pz00_1088);
											{	/* Unsafe/rsa.scm 147 */

												{

												BgL_zc3anonymousza31988ze3z83_1094:
													{	/* Unsafe/rsa.scm 149 */
														obj_t BgL_qz00_1095;

														BgL_qz00_1095 =
															BGl_randomzd2primezd2zz__rsaz00
															(BgL_startzd2qzd2_1091, BgL_endzd2qzd2_1092,
															BgL_showzd2tracezd2_22);
														{	/* Unsafe/rsa.scm 150 */
															bool_t BgL_testz00_3138;

															{	/* Unsafe/rsa.scm 150 */
																obj_t BgL_arg2005z00_1120;

																{	/* Unsafe/rsa.scm 150 */
																	obj_t BgL_list2007z00_1122;

																	{	/* Unsafe/rsa.scm 150 */
																		obj_t BgL_arg2008z00_1123;

																		BgL_arg2008z00_1123 =
																			MAKE_PAIR(BgL_qz00_1095, BNIL);
																		BgL_list2007z00_1122 =
																			MAKE_PAIR(BgL_pz00_1088,
																			BgL_arg2008z00_1123);
																	}
																	BgL_arg2005z00_1120 =
																		BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																		(BgL_list2007z00_1122);
																}
																BgL_testz00_3138 =
																	(
																	(long) (bgl_bignum_cmp(BgL_arg2005z00_1120,
																			(bgl_string_to_bignum("1",
																					16)))) == ((long) 0));
															}
															if (BgL_testz00_3138)
																{	/* Unsafe/rsa.scm 152 */
																	obj_t BgL_nz00_1097;

																	BgL_nz00_1097 =
																		bgl_bignum_mul(BgL_pz00_1088,
																		BgL_qz00_1095);
																	{	/* Unsafe/rsa.scm 152 */
																		obj_t BgL_pzd21zd2_1098;

																		BgL_pzd21zd2_1098 =
																			bgl_bignum_sub(BgL_pz00_1088,
																			(bgl_string_to_bignum("1", 16)));
																		{	/* Unsafe/rsa.scm 153 */
																			obj_t BgL_qzd21zd2_1099;

																			BgL_qzd21zd2_1099 =
																				bgl_bignum_sub(BgL_qz00_1095,
																				(bgl_string_to_bignum("1", 16)));
																			{	/* Unsafe/rsa.scm 154 */
																				obj_t BgL_phiz00_1100;

																				{	/* Unsafe/rsa.scm 155 */
																					obj_t BgL_arg2001z00_1116;

																					obj_t BgL_arg2002z00_1117;

																					BgL_arg2001z00_1116 =
																						bgl_bignum_mul(BgL_pzd21zd2_1098,
																						BgL_qzd21zd2_1099);
																					{	/* Unsafe/rsa.scm 155 */
																						obj_t BgL_list2003z00_1118;

																						{	/* Unsafe/rsa.scm 155 */
																							obj_t BgL_arg2004z00_1119;

																							BgL_arg2004z00_1119 =
																								MAKE_PAIR(BgL_qzd21zd2_1099,
																								BNIL);
																							BgL_list2003z00_1118 =
																								MAKE_PAIR(BgL_pzd21zd2_1098,
																								BgL_arg2004z00_1119);
																						}
																						BgL_arg2002z00_1117 =
																							BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																							(BgL_list2003z00_1118);
																					}
																					BgL_phiz00_1100 =
																						bgl_bignum_quotient
																						(BgL_arg2001z00_1116,
																						BgL_arg2002z00_1117);
																				}
																				{	/* Unsafe/rsa.scm 155 */
																					obj_t BgL_ez00_1101;

																					{
																						obj_t BgL_ez00_1107;

																						BgL_ez00_1107 =
																							(bgl_string_to_bignum("10001",
																								16));
																					BgL_zc3anonymousza31993ze3z83_1108:
																						{	/* Unsafe/rsa.scm 157 */
																							bool_t BgL_testz00_3153;

																							{	/* Unsafe/rsa.scm 157 */
																								obj_t BgL_arg1998z00_1112;

																								{	/* Unsafe/rsa.scm 157 */
																									obj_t BgL_list1999z00_1113;

																									{	/* Unsafe/rsa.scm 157 */
																										obj_t BgL_arg2000z00_1114;

																										BgL_arg2000z00_1114 =
																											MAKE_PAIR(BgL_phiz00_1100,
																											BNIL);
																										BgL_list1999z00_1113 =
																											MAKE_PAIR(BgL_ez00_1107,
																											BgL_arg2000z00_1114);
																									}
																									BgL_arg1998z00_1112 =
																										BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																										(BgL_list1999z00_1113);
																								}
																								BgL_testz00_3153 =
																									(
																									(long) (bgl_bignum_cmp(
																											(bgl_string_to_bignum("1",
																													16)),
																											BgL_arg1998z00_1112)) ==
																									((long) 0));
																							}
																							if (BgL_testz00_3153)
																								{	/* Unsafe/rsa.scm 157 */
																									BgL_ez00_1101 = BgL_ez00_1107;
																								}
																							else
																								{
																									obj_t BgL_ez00_3160;

																									BgL_ez00_3160 =
																										bgl_bignum_add
																										(BgL_ez00_1107,
																										(bgl_string_to_bignum("2",
																												16)));
																									BgL_ez00_1107 = BgL_ez00_3160;
																									goto
																										BgL_zc3anonymousza31993ze3z83_1108;
																								}
																						}
																					}
																					{	/* Unsafe/rsa.scm 156 */
																						obj_t BgL_dz00_1102;

																						BgL_dz00_1102 =
																							BGl_modzd2inversezd2zz__rsaz00
																							(BgL_ez00_1101, BgL_phiz00_1100);
																						{	/* Unsafe/rsa.scm 160 */

																							if (CBOOL(BgL_showzd2tracezd2_22))
																								{	/* Unsafe/rsa.scm 161 */
																									obj_t BgL_arg1990z00_1103;

																									{	/* Unsafe/rsa.scm 161 */
																										obj_t BgL_res2683z00_2417;

																										{	/* Unsafe/rsa.scm 161 */
																											obj_t BgL_auxz00_3165;

																											BgL_auxz00_3165 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_res2683z00_2417 =
																												BGL_ENV_CURRENT_OUTPUT_PORT
																												(BgL_auxz00_3165);
																										}
																										BgL_arg1990z00_1103 =
																											BgL_res2683z00_2417;
																									}
																									bgl_display_char(((unsigned
																												char) '\n'),
																										BgL_arg1990z00_1103);
																								}
																							else
																								{	/* Unsafe/rsa.scm 161 */
																									BFALSE;
																								}
																							{	/* Unsafe/rsa.scm 163 */
																								obj_t BgL_arg1991z00_1104;

																								obj_t BgL_arg1992z00_1105;

																								{	/* Unsafe/rsa.scm 163 */
																									obj_t BgL_newz00_2422;

																									BgL_newz00_2422 =
																										create_struct
																										(BGl_symbol2713z00zz__rsaz00,
																										(int) (((long) 3)));
																									{	/* Unsafe/rsa.scm 163 */
																										int BgL_auxz00_3171;

																										BgL_auxz00_3171 =
																											(int) (((long) 2));
																										STRUCT_SET(BgL_newz00_2422,
																											BgL_auxz00_3171,
																											BgL_ez00_1101);
																									}
																									{	/* Unsafe/rsa.scm 163 */
																										int BgL_auxz00_3174;

																										BgL_auxz00_3174 =
																											(int) (((long) 1));
																										STRUCT_SET(BgL_newz00_2422,
																											BgL_auxz00_3174,
																											BgL_nz00_1097);
																									}
																									{	/* Unsafe/rsa.scm 163 */
																										int BgL_auxz00_3177;

																										BgL_auxz00_3177 =
																											(int) (((long) 0));
																										STRUCT_SET(BgL_newz00_2422,
																											BgL_auxz00_3177,
																											BgL_siza7eza7_23);
																									}
																									BgL_arg1991z00_1104 =
																										BgL_newz00_2422;
																								}
																								{	/* Unsafe/rsa.scm 164 */
																									obj_t BgL_newz00_2441;

																									BgL_newz00_2441 =
																										create_struct
																										(BGl_symbol2713z00zz__rsaz00,
																										(int) (((long) 3)));
																									{	/* Unsafe/rsa.scm 164 */
																										int BgL_auxz00_3182;

																										BgL_auxz00_3182 =
																											(int) (((long) 2));
																										STRUCT_SET(BgL_newz00_2441,
																											BgL_auxz00_3182,
																											BgL_dz00_1102);
																									}
																									{	/* Unsafe/rsa.scm 164 */
																										int BgL_auxz00_3185;

																										BgL_auxz00_3185 =
																											(int) (((long) 1));
																										STRUCT_SET(BgL_newz00_2441,
																											BgL_auxz00_3185,
																											BgL_nz00_1097);
																									}
																									{	/* Unsafe/rsa.scm 164 */
																										int BgL_auxz00_3188;

																										BgL_auxz00_3188 =
																											(int) (((long) 0));
																										STRUCT_SET(BgL_newz00_2441,
																											BgL_auxz00_3188,
																											BgL_siza7eza7_23);
																									}
																									BgL_arg1992z00_1105 =
																										BgL_newz00_2441;
																								}
																								return
																									MAKE_PAIR(BgL_arg1991z00_1104,
																									BgL_arg1992z00_1105);
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Unsafe/rsa.scm 150 */
																	goto BgL_zc3anonymousza31988ze3z83_1094;
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



/* public-rsa-key */
	BGL_EXPORTED_DEF obj_t BGl_publiczd2rsazd2keyz00zz__rsaz00(obj_t
		BgL_rsazd2keyzd2pairz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 169 */
			return CAR(BgL_rsazd2keyzd2pairz00_26);
		}
	}



/* _public-rsa-key */
	obj_t BGl__publiczd2rsazd2keyz00zz__rsaz00(obj_t BgL_envz00_2921,
		obj_t BgL_rsazd2keyzd2pairz00_2922)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 169 */
			return CAR(BgL_rsazd2keyzd2pairz00_2922);
		}
	}



/* private-rsa-key */
	BGL_EXPORTED_DEF obj_t BGl_privatezd2rsazd2keyz00zz__rsaz00(obj_t
		BgL_rsazd2keyzd2pairz00_27)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 175 */
			return CDR(BgL_rsazd2keyzd2pairz00_27);
		}
	}



/* _private-rsa-key */
	obj_t BGl__privatezd2rsazd2keyz00zz__rsaz00(obj_t BgL_envz00_2923,
		obj_t BgL_rsazd2keyzd2pairz00_2924)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 175 */
			return CDR(BgL_rsazd2keyzd2pairz00_2924);
		}
	}



/* rsa-key= */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2keyzd3z01zz__rsaz00(obj_t
		BgL_rsazd2key1zd2_28, obj_t BgL_rsazd2key2zd2_29)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 181 */
			{	/* Unsafe/rsa.scm 182 */
				bool_t BgL_testz00_3196;

				{	/* Unsafe/rsa.scm 182 */
					long BgL_auxz00_3201;

					long BgL_auxz00_3197;

					{	/* Unsafe/rsa.scm 182 */
						obj_t BgL_sz00_2463;

						BgL_sz00_2463 = BgL_rsazd2key2zd2_29;
						BgL_auxz00_3201 =
							(long) CINT(STRUCT_REF(BgL_sz00_2463, (int) (((long) 0))));
					}
					{	/* Unsafe/rsa.scm 182 */
						obj_t BgL_sz00_2460;

						BgL_sz00_2460 = BgL_rsazd2key1zd2_28;
						BgL_auxz00_3197 =
							(long) CINT(STRUCT_REF(BgL_sz00_2460, (int) (((long) 0))));
					}
					BgL_testz00_3196 = (BgL_auxz00_3197 == BgL_auxz00_3201);
				}
				if (BgL_testz00_3196)
					{	/* Unsafe/rsa.scm 183 */
						bool_t BgL_testz00_3206;

						{	/* Unsafe/rsa.scm 183 */
							obj_t BgL_n1z00_2473;

							obj_t BgL_n2z00_2474;

							BgL_n1z00_2473 =
								STRUCT_REF(BgL_rsazd2key1zd2_28, (int) (((long) 1)));
							BgL_n2z00_2474 =
								STRUCT_REF(BgL_rsazd2key2zd2_29, (int) (((long) 1)));
							BgL_testz00_3206 =
								(
								(long) (bgl_bignum_cmp(BgL_n1z00_2473,
										BgL_n2z00_2474)) == ((long) 0));
						}
						if (BgL_testz00_3206)
							{	/* Unsafe/rsa.scm 184 */
								obj_t BgL_n1z00_2486;

								obj_t BgL_n2z00_2487;

								BgL_n1z00_2486 =
									STRUCT_REF(BgL_rsazd2key1zd2_28, (int) (((long) 2)));
								BgL_n2z00_2487 =
									STRUCT_REF(BgL_rsazd2key2zd2_29, (int) (((long) 2)));
								return
									BBOOL(
									((long) (bgl_bignum_cmp(BgL_n1z00_2486,
												BgL_n2z00_2487)) == ((long) 0)));
							}
						else
							{	/* Unsafe/rsa.scm 183 */
								return BFALSE;
							}
					}
				else
					{	/* Unsafe/rsa.scm 182 */
						return BFALSE;
					}
			}
		}
	}



/* _rsa-key= */
	obj_t BGl__rsazd2keyzd3z01zz__rsaz00(obj_t BgL_envz00_2925,
		obj_t BgL_rsazd2key1zd2_2926, obj_t BgL_rsazd2key2zd2_2927)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 181 */
			return
				BGl_rsazd2keyzd3z01zz__rsaz00(BgL_rsazd2key1zd2_2926,
				BgL_rsazd2key2zd2_2927);
		}
	}



/* PKCS1-pad */
	BGL_EXPORTED_DEF obj_t BGl_PKCS1zd2padzd2zz__rsaz00(obj_t BgL_u8vectz00_30,
		obj_t BgL_finalzd2lenzd2_31)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 216 */
			{	/* Unsafe/rsa.scm 217 */
				long BgL_lenz00_1140;

				BgL_lenz00_1140 = BGL_HVECTOR_LENGTH(BgL_u8vectz00_30);
				{	/* Unsafe/rsa.scm 217 */
					obj_t BgL_nz00_1141;

					BgL_nz00_1141 =
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_finalzd2lenzd2_31,
						BINT(
							(long)
							CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1140),
									BINT(((long) 3))))));
					{	/* Unsafe/rsa.scm 218 */

						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_1141,
								BINT(((long) 8))))
							{	/* Unsafe/rsa.scm 219 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2715z00zz__rsaz00,
									BGl_string2717z00zz__rsaz00, BgL_nz00_1141);
							}
						else
							{	/* Unsafe/rsa.scm 223 */
								obj_t BgL_padz00_1143;

								{	/* Unsafe/rsa.scm 224 */
									obj_t BgL_g1829z00_1144;

									BgL_g1829z00_1144 = BGl_list2718z00zz__rsaz00;
									{
										obj_t BgL_lstz00_1146;

										long BgL_iz00_1147;

										BgL_lstz00_1146 = BgL_g1829z00_1144;
										BgL_iz00_1147 = ((long) 0);
									BgL_zc3anonymousza32025ze3z83_1148:
										if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1147),
												BgL_nz00_1141))
											{	/* Unsafe/rsa.scm 226 */
												obj_t BgL_arg2027z00_1150;

												long BgL_arg2028z00_1151;

												{	/* Unsafe/rsa.scm 226 */
													long BgL_arg2029z00_1152;

													{	/* Unsafe/rsa.scm 226 */
														long BgL_arg2031z00_1154;

														{	/* Unsafe/rsa.scm 226 */
															long BgL_res2686z00_2496;

															{	/* Unsafe/rsa.scm 226 */
																int BgL_arg2616z00_2495;

																BgL_arg2616z00_2495 = rand();
																BgL_res2686z00_2496 =
																	BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
																	(long) (BgL_arg2616z00_2495), ((long) 255));
															}
															BgL_arg2031z00_1154 = BgL_res2686z00_2496;
														}
														BgL_arg2029z00_1152 =
															(long)
															CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long)
																		1)), BINT(BgL_arg2031z00_1154)));
													}
													BgL_arg2027z00_1150 =
														MAKE_PAIR(BINT(BgL_arg2029z00_1152),
														BgL_lstz00_1146);
												}
												BgL_arg2028z00_1151 =
													(long)
													CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_iz00_1147), BINT(((long) 1))));
												{
													long BgL_iz00_3251;

													obj_t BgL_lstz00_3250;

													BgL_lstz00_3250 = BgL_arg2027z00_1150;
													BgL_iz00_3251 = BgL_arg2028z00_1151;
													BgL_iz00_1147 = BgL_iz00_3251;
													BgL_lstz00_1146 = BgL_lstz00_3250;
													goto BgL_zc3anonymousza32025ze3z83_1148;
												}
											}
										else
											{	/* Unsafe/rsa.scm 227 */
												obj_t BgL_arg2033z00_1155;

												{	/* Unsafe/rsa.scm 227 */
													obj_t BgL_arg2036z00_1157;

													BgL_arg2036z00_1157 =
														MAKE_PAIR(BINT(((long) 2)), BgL_lstz00_1146);
													BgL_arg2033z00_1155 =
														MAKE_PAIR(BINT(((long) 0)), BgL_arg2036z00_1157);
												}
												BgL_padz00_1143 =
													BGl_listzd2ze3u8vectorz31zz__srfi4z00
													(BgL_arg2033z00_1155);
								}}}
								return
									BGl_u8vectorzd2appendzd2zz__rsaz00(BgL_padz00_1143,
									BgL_u8vectz00_30);
							}
					}
				}
			}
		}
	}



/* _PKCS1-pad */
	obj_t BGl__PKCS1zd2padzd2zz__rsaz00(obj_t BgL_envz00_2928,
		obj_t BgL_u8vectz00_2929, obj_t BgL_finalzd2lenzd2_2930)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 216 */
			return
				BGl_PKCS1zd2padzd2zz__rsaz00(BgL_u8vectz00_2929,
				BgL_finalzd2lenzd2_2930);
		}
	}



/* PKCS1-unpad */
	BGL_EXPORTED_DEF obj_t BGl_PKCS1zd2unpadzd2zz__rsaz00(obj_t BgL_u8vectz00_32)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 233 */
			{	/* Unsafe/rsa.scm 238 */
				long BgL_lenz00_1161;

				BgL_lenz00_1161 = BGL_HVECTOR_LENGTH(BgL_u8vectz00_32);
				{
					long BgL_iz00_1163;

					BgL_iz00_1163 = ((long) 0);
				BgL_zc3anonymousza32038ze3z83_1164:
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT(BgL_iz00_1163),
							BINT(BgL_lenz00_1161)))
						{	/* Unsafe/rsa.scm 240 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2719z00zz__rsaz00,
								BGl_string2721z00zz__rsaz00, BgL_u8vectz00_32);
						}
					else
						{	/* Unsafe/rsa.scm 242 */
							unsigned char BgL_xz00_1166;

							BgL_xz00_1166 = BGL_U8VREF(BgL_u8vectz00_32, BgL_iz00_1163);
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_xz00_1166),
									BINT(((long) 0))))
								{
									long BgL_iz00_3270;

									BgL_iz00_3270 =
										(long)
										CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_iz00_1163),
											BINT(((long) 1))));
									BgL_iz00_1163 = BgL_iz00_3270;
									goto BgL_zc3anonymousza32038ze3z83_1164;
								}
							else
								{	/* Unsafe/rsa.scm 243 */
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_xz00_1166),
											BINT(((long) 2))))
										{	/* Unsafe/rsa.scm 248 */
											long BgL_g1830z00_1170;

											BgL_g1830z00_1170 =
												(long)
												CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
													(BgL_iz00_1163), BINT(((long) 1))));
											{
												long BgL_jz00_1172;

												BgL_jz00_1172 = BgL_g1830z00_1170;
											BgL_zc3anonymousza32043ze3z83_1173:
												if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT
														(BgL_jz00_1172), BINT(BgL_lenz00_1161)))
													{	/* Unsafe/rsa.scm 249 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol2719z00zz__rsaz00,
															BGl_string2721z00zz__rsaz00, BgL_u8vectz00_32);
													}
												else
													{	/* Unsafe/rsa.scm 251 */
														unsigned char BgL_xz00_1175;

														BgL_xz00_1175 =
															BGL_U8VREF(BgL_u8vectz00_32, BgL_jz00_1172);
														if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
																(BgL_xz00_1175), BINT(((long) 0))))
															{	/* Unsafe/rsa.scm 253 */
																if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(
																			(long)
																			CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT
																					(BgL_jz00_1172),
																					BINT(BgL_iz00_1163)))),
																		BINT(((long) 8))))
																	{	/* Unsafe/rsa.scm 255 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2719z00zz__rsaz00,
																			BGl_string2721z00zz__rsaz00,
																			BgL_u8vectz00_32);
																	}
																else
																	{	/* Unsafe/rsa.scm 255 */
																		return
																			BGl_subu8vectorz00zz__rsaz00
																			(BgL_u8vectz00_32,
																			(long)
																			CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																					(BgL_jz00_1172), BINT(((long) 1)))),
																			BgL_lenz00_1161);
															}}
														else
															{
																long BgL_jz00_3307;

																BgL_jz00_3307 =
																	(long)
																	CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																		(BgL_jz00_1172), BINT(((long) 1))));
																BgL_jz00_1172 = BgL_jz00_3307;
																goto BgL_zc3anonymousza32043ze3z83_1173;
															}
													}
											}
										}
									else
										{	/* Unsafe/rsa.scm 245 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol2719z00zz__rsaz00,
												BGl_string2721z00zz__rsaz00, BgL_u8vectz00_32);
										}
								}
						}
				}
			}
		}
	}



/* _PKCS1-unpad */
	obj_t BGl__PKCS1zd2unpadzd2zz__rsaz00(obj_t BgL_envz00_2931,
		obj_t BgL_u8vectz00_2932)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 233 */
			return BGl_PKCS1zd2unpadzd2zz__rsaz00(BgL_u8vectz00_2932);
		}
	}



/* rsa-encrypt-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t
		BgL_u8vectz00_35, obj_t BgL_rsazd2keyzd2_36, obj_t BgL_finalzd2lenzd2_37)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 272 */
			return
				BGl_bignumzd2ze3u8vectorz31zz__rsaz00(BGl_exptzd2modzd2zz__rsaz00
				(BGl_u8vectorzd2ze3bignumz31zz__rsaz00(BGl_PKCS1zd2padzd2zz__rsaz00
						(BgL_u8vectz00_35, BgL_finalzd2lenzd2_37)),
					STRUCT_REF(BgL_rsazd2keyzd2_36, (int) (((long) 2))),
					STRUCT_REF(BgL_rsazd2keyzd2_36, (int) (((long) 1)))));
		}
	}



/* _rsa-encrypt-u8vector */
	obj_t BGl__rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t BgL_envz00_2933,
		obj_t BgL_u8vectz00_2934, obj_t BgL_rsazd2keyzd2_2935,
		obj_t BgL_finalzd2lenzd2_2936)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 272 */
			return
				BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(BgL_u8vectz00_2934,
				BgL_rsazd2keyzd2_2935, BgL_finalzd2lenzd2_2936);
		}
	}



/* rsa-decrypt-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t
		BgL_u8vectz00_38, obj_t BgL_rsazd2keyzd2_39)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 281 */
			return
				BGl_PKCS1zd2unpadzd2zz__rsaz00(BGl_bignumzd2ze3u8vectorz31zz__rsaz00
				(BGl_exptzd2modzd2zz__rsaz00(BGl_u8vectorzd2ze3bignumz31zz__rsaz00
						(BgL_u8vectz00_38), STRUCT_REF(BgL_rsazd2keyzd2_39,
							(int) (((long) 2))), STRUCT_REF(BgL_rsazd2keyzd2_39,
							(int) (((long) 1))))));
		}
	}



/* _rsa-decrypt-u8vector */
	obj_t BGl__rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t BgL_envz00_2937,
		obj_t BgL_u8vectz00_2938, obj_t BgL_rsazd2keyzd2_2939)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 281 */
			return
				BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(BgL_u8vectz00_2938,
				BgL_rsazd2keyzd2_2939);
		}
	}



/* expt-mod */
	obj_t BGl_exptzd2modzd2zz__rsaz00(obj_t BgL_nz00_1213, obj_t BgL_ez00_1214,
		obj_t BgL_mz00_1215)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 394 */
		BGl_exptzd2modzd2zz__rsaz00:
			if (BXZERO(BgL_ez00_1214))
				{	/* Unsafe/rsa.scm 389 */
					return (bgl_string_to_bignum("1", 16));
				}
			else
				{	/* Unsafe/rsa.scm 389 */
					if (bgl_bignum_even(BgL_ez00_1214))
						{
							obj_t BgL_ez00_3339;

							obj_t BgL_nz00_3336;

							BgL_nz00_3336 =
								BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(bgl_bignum_mul
								(BgL_nz00_1213, BgL_nz00_1213), BgL_mz00_1215);
							BgL_ez00_3339 =
								bgl_bignum_quotient(BgL_ez00_1214, (bgl_string_to_bignum("2",
										16)));
							BgL_ez00_1214 = BgL_ez00_3339;
							BgL_nz00_1213 = BgL_nz00_3336;
							goto BGl_exptzd2modzd2zz__rsaz00;
						}
					else
						{	/* Unsafe/rsa.scm 391 */
							return
								BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(bgl_bignum_mul
								(BgL_nz00_1213, BGl_exptzd2modzd2zz__rsaz00(BgL_nz00_1213,
										bgl_bignum_sub(BgL_ez00_1214, (bgl_string_to_bignum("1",
													16))), BgL_mz00_1215)), BgL_mz00_1215);
						}
				}
		}
	}



/* u8vector-append */
	obj_t BGl_u8vectorzd2appendzd2zz__rsaz00(obj_t BgL_v1z00_46,
		obj_t BgL_v2z00_47)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 401 */
			{	/* Unsafe/rsa.scm 402 */
				long BgL_len1z00_1226;

				BgL_len1z00_1226 = BGL_HVECTOR_LENGTH(BgL_v1z00_46);
				{	/* Unsafe/rsa.scm 402 */
					long BgL_len2z00_1227;

					BgL_len2z00_1227 = BGL_HVECTOR_LENGTH(BgL_v2z00_47);
					{	/* Unsafe/rsa.scm 403 */
						long BgL_lenz00_1228;

						BgL_lenz00_1228 = (BgL_len1z00_1226 + BgL_len2z00_1227);
						{	/* Unsafe/rsa.scm 404 */
							obj_t BgL_resz00_1229;

							{	/* Llib/srfi4.scm 231 */

								BgL_resz00_1229 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_lenz00_1228,
									BINT(((long) 0)));
							}
							{	/* Unsafe/rsa.scm 405 */

								{
									long BgL_iz00_1231;

									BgL_iz00_1231 = ((long) 0);
								BgL_zc3anonymousza32083ze3z83_1232:
									if ((BgL_iz00_1231 < BgL_len1z00_1226))
										{	/* Unsafe/rsa.scm 407 */
											{	/* Unsafe/rsa.scm 409 */
												unsigned char BgL_arg2085z00_1234;

												BgL_arg2085z00_1234 =
													BGL_U8VREF(BgL_v1z00_46, BgL_iz00_1231);
												BGL_U8VSET(BgL_resz00_1229, BgL_iz00_1231,
													BgL_arg2085z00_1234);
												BUNSPEC;
											}
											{
												long BgL_iz00_3354;

												BgL_iz00_3354 = (BgL_iz00_1231 + ((long) 1));
												BgL_iz00_1231 = BgL_iz00_3354;
												goto BgL_zc3anonymousza32083ze3z83_1232;
											}
										}
									else
										{
											long BgL_jz00_1237;

											BgL_jz00_1237 = ((long) 0);
										BgL_zc3anonymousza32087ze3z83_1238:
											if ((BgL_jz00_1237 < BgL_len2z00_1227))
												{	/* Unsafe/rsa.scm 412 */
													{	/* Unsafe/rsa.scm 414 */
														long BgL_arg2089z00_1240;

														unsigned char BgL_arg2090z00_1241;

														BgL_arg2089z00_1240 =
															(BgL_jz00_1237 + BgL_iz00_1231);
														BgL_arg2090z00_1241 =
															BGL_U8VREF(BgL_v2z00_47, BgL_jz00_1237);
														BGL_U8VSET(BgL_resz00_1229, BgL_arg2089z00_1240,
															BgL_arg2090z00_1241);
														BUNSPEC;
													}
													{
														long BgL_jz00_3361;

														BgL_jz00_3361 = (BgL_jz00_1237 + ((long) 1));
														BgL_jz00_1237 = BgL_jz00_3361;
														goto BgL_zc3anonymousza32087ze3z83_1238;
													}
												}
											else
												{	/* Unsafe/rsa.scm 412 */
													return BgL_resz00_1229;
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



/* subu8vector */
	obj_t BGl_subu8vectorz00zz__rsaz00(obj_t BgL_vz00_48, long BgL_startz00_49,
		long BgL_endz00_50)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 421 */
			{	/* Unsafe/rsa.scm 422 */
				long BgL_lenz00_1247;

				BgL_lenz00_1247 = (BgL_endz00_50 - BgL_startz00_49);
				{	/* Unsafe/rsa.scm 422 */
					obj_t BgL_resz00_1248;

					{	/* Llib/srfi4.scm 231 */

						BgL_resz00_1248 =
							BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_lenz00_1247,
							BINT(((long) 0)));
					}
					{	/* Unsafe/rsa.scm 423 */

						{
							long BgL_iz00_1250;

							BgL_iz00_1250 = BgL_startz00_49;
						BgL_zc3anonymousza32092ze3z83_1251:
							if ((BgL_iz00_1250 < BgL_endz00_50))
								{	/* Unsafe/rsa.scm 425 */
									{	/* Unsafe/rsa.scm 427 */
										long BgL_arg2094z00_1253;

										unsigned char BgL_arg2095z00_1254;

										BgL_arg2094z00_1253 = (BgL_iz00_1250 - BgL_startz00_49);
										BgL_arg2095z00_1254 =
											BGL_U8VREF(BgL_vz00_48, BgL_iz00_1250);
										BGL_U8VSET(BgL_resz00_1248, BgL_arg2094z00_1253,
											BgL_arg2095z00_1254);
										BUNSPEC;
									}
									{
										long BgL_iz00_3371;

										BgL_iz00_3371 = (BgL_iz00_1250 + ((long) 1));
										BgL_iz00_1250 = BgL_iz00_3371;
										goto BgL_zc3anonymousza32092ze3z83_1251;
									}
								}
							else
								{	/* Unsafe/rsa.scm 425 */
									return BgL_resz00_1248;
								}
						}
					}
				}
			}
		}
	}



/* bignum->u8vector */
	obj_t BGl_bignumzd2ze3u8vectorz31zz__rsaz00(obj_t BgL_nz00_52)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 453 */
			{
				obj_t BgL_nz00_1315;

				{	/* Unsafe/rsa.scm 462 */
					long BgL_siza7eza7_1301;

					BgL_nz00_1315 = BgL_nz00_52;
					{
						long BgL_siza7eza7_2574;

						obj_t BgL_accz00_2575;

						BgL_siza7eza7_2574 = ((long) 1);
						BgL_accz00_2575 = (bgl_string_to_bignum("ff", 16));
					BgL_loopz00_2573:
						if (
							((long) (bgl_bignum_cmp(BgL_nz00_1315,
										BgL_accz00_2575)) > ((long) 0)))
							{
								obj_t BgL_accz00_3379;

								long BgL_siza7eza7_3377;

								BgL_siza7eza7_3377 = (BgL_siza7eza7_2574 + ((long) 1));
								BgL_accz00_3379 =
									bgl_bignum_mul(BgL_accz00_2575, (bgl_string_to_bignum("ff",
											16)));
								BgL_accz00_2575 = BgL_accz00_3379;
								BgL_siza7eza7_2574 = BgL_siza7eza7_3377;
								goto BgL_loopz00_2573;
							}
						else
							{	/* Unsafe/rsa.scm 456 */
								BgL_siza7eza7_1301 = BgL_siza7eza7_2574;
							}
					}
					{	/* Unsafe/rsa.scm 462 */
						obj_t BgL_resz00_1302;

						{	/* Llib/srfi4.scm 231 */

							BgL_resz00_1302 =
								BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_siza7eza7_1301,
								BINT(((long) 0)));
						}
						{	/* Unsafe/rsa.scm 463 */

							{
								long BgL_iz00_1304;

								obj_t BgL_vz00_1305;

								BgL_iz00_1304 = ((long) 0);
								BgL_vz00_1305 = BgL_nz00_52;
							BgL_zc3anonymousza32117ze3z83_1306:
								if ((BgL_iz00_1304 == BgL_siza7eza7_1301))
									{	/* Unsafe/rsa.scm 466 */
										return BgL_resz00_1302;
									}
								else
									{	/* Unsafe/rsa.scm 466 */
										{	/* Unsafe/rsa.scm 469 */
											long BgL_arg2119z00_1308;

											BgL_arg2119z00_1308 =
												bgl_bignum_to_long(bgl_bignum_remainder(BgL_vz00_1305,
													(bgl_string_to_bignum("100", 16))));
											{	/* Unsafe/rsa.scm 469 */
												unsigned char BgL_auxz00_3387;

												BgL_auxz00_3387 = (unsigned char) (BgL_arg2119z00_1308);
												BGL_U8VSET(BgL_resz00_1302, BgL_iz00_1304,
													BgL_auxz00_3387);
											} BUNSPEC;
										}
										{
											obj_t BgL_vz00_3392;

											long BgL_iz00_3390;

											BgL_iz00_3390 = (BgL_iz00_1304 + ((long) 1));
											BgL_vz00_3392 =
												bgl_bignum_quotient(BgL_vz00_1305,
												(bgl_string_to_bignum("100", 16)));
											BgL_vz00_1305 = BgL_vz00_3392;
											BgL_iz00_1304 = BgL_iz00_3390;
											goto BgL_zc3anonymousza32117ze3z83_1306;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* u8vector->bignum */
	obj_t BGl_u8vectorzd2ze3bignumz31zz__rsaz00(obj_t BgL_u8vectz00_53)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 475 */
			{	/* Unsafe/rsa.scm 476 */
				long BgL_g1832z00_1326;

				{	/* Unsafe/rsa.scm 476 */
					long BgL_arg2138z00_1338;

					BgL_arg2138z00_1338 = BGL_HVECTOR_LENGTH(BgL_u8vectz00_53);
					BgL_g1832z00_1326 = (BgL_arg2138z00_1338 - ((long) 1));
				}
				{
					long BgL_iz00_2627;

					obj_t BgL_az00_2628;

					BgL_iz00_2627 = BgL_g1832z00_1326;
					BgL_az00_2628 = (bgl_string_to_bignum("0", 16));
				BgL_loopz00_2626:
					if ((BgL_iz00_2627 == ((long) -1)))
						{	/* Unsafe/rsa.scm 476 */
							return BgL_az00_2628;
						}
					else
						{	/* Unsafe/rsa.scm 476 */
							obj_t BgL_dz00_2636;

							{	/* Unsafe/rsa.scm 476 */
								unsigned char BgL_arg2137z00_2637;

								BgL_arg2137z00_2637 =
									BGL_U8VREF(BgL_u8vectz00_53, BgL_iz00_2627);
								BgL_dz00_2636 =
									bgl_long_to_bignum((long) (BgL_arg2137z00_2637));
							}
							{
								obj_t BgL_az00_3403;

								long BgL_iz00_3401;

								BgL_iz00_3401 = (BgL_iz00_2627 - ((long) 1));
								BgL_az00_3403 =
									bgl_bignum_add(bgl_bignum_mul(BgL_az00_2628,
										(bgl_string_to_bignum("100", 16))), BgL_dz00_2636);
								BgL_az00_2628 = BgL_az00_3403;
								BgL_iz00_2627 = BgL_iz00_3401;
								goto BgL_loopz00_2626;
							}
						}
				}
			}
		}
	}



/* rsa-encrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2encryptzd2stringz00zz__rsaz00(obj_t
		BgL_strz00_55, obj_t BgL_keyz00_56)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 512 */
			{	/* Unsafe/rsa.scm 513 */
				obj_t BgL_runner2167z00_1387;

				{	/* Unsafe/rsa.scm 517 */
					obj_t BgL_arg2157z00_1377;

					{	/* Unsafe/rsa.scm 517 */
						obj_t BgL_arg2159z00_1379;

						{	/* Unsafe/rsa.scm 517 */
							obj_t BgL_arg2160z00_1380;

							long BgL_arg2161z00_1381;

							{	/* Unsafe/rsa.scm 517 */
								obj_t BgL_arg2162z00_1382;

								{	/* Unsafe/rsa.scm 517 */
									obj_t BgL_arg2163z00_1383;

									BgL_arg2163z00_1383 =
										BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_strz00_55);
									{	/* Unsafe/rsa.scm 517 */
										obj_t BgL_list2164z00_1384;

										BgL_list2164z00_1384 = MAKE_PAIR(BgL_arg2163z00_1383, BNIL);
										BgL_arg2162z00_1382 =
											BGl_mapz12z12zz__r4_control_features_6_9z00
											(BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00,
											BgL_list2164z00_1384);
								}}
								BgL_arg2160z00_1380 =
									BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_arg2162z00_1382);
							}
							BgL_arg2161z00_1381 =
								(STRING_LENGTH(BgL_strz00_55) + ((long) 12));
							{	/* Unsafe/rsa.scm 516 */
								obj_t BgL_finalzd2lenzd2_2687;

								BgL_finalzd2lenzd2_2687 = BINT(BgL_arg2161z00_1381);
								BgL_arg2159z00_1379 =
									BGl_bignumzd2ze3u8vectorz31zz__rsaz00
									(BGl_exptzd2modzd2zz__rsaz00
									(BGl_u8vectorzd2ze3bignumz31zz__rsaz00
										(BGl_PKCS1zd2padzd2zz__rsaz00(BgL_arg2160z00_1380,
												BgL_finalzd2lenzd2_2687)), STRUCT_REF(BgL_keyz00_56,
											(int) (((long) 2))), STRUCT_REF(BgL_keyz00_56,
											(int) (((long) 1)))));
						}}
						BgL_arg2157z00_1377 =
							BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_arg2159z00_1379);
					}
					{	/* Unsafe/rsa.scm 514 */
						obj_t BgL_list2158z00_1378;

						BgL_list2158z00_1378 = MAKE_PAIR(BgL_arg2157z00_1377, BNIL);
						BgL_runner2167z00_1387 =
							BGl_mapz12z12zz__r4_control_features_6_9z00
							(BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00,
							BgL_list2158z00_1378);
				}}
				return
					BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_runner2167z00_1387);
			}
		}
	}



/* _rsa-encrypt-string */
	obj_t BGl__rsazd2encryptzd2stringz00zz__rsaz00(obj_t BgL_envz00_2940,
		obj_t BgL_strz00_2941, obj_t BgL_keyz00_2942)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 512 */
			{	/* Unsafe/rsa.scm 513 */
				obj_t BgL_auxz00_3425;

				if (STRINGP(BgL_strz00_2941))
					{	/* Unsafe/rsa.scm 513 */
						BgL_auxz00_3425 = BgL_strz00_2941;
					}
				else
					{
						obj_t BgL_auxz00_3428;

						BgL_auxz00_3428 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__rsaz00,
							BINT(((long) 21534)), BGl_string2723z00zz__rsaz00,
							BGl_string2724z00zz__rsaz00, BgL_strz00_2941);
						FAILURE(BgL_auxz00_3428, BFALSE, BFALSE);
					}
				return
					BGl_rsazd2encryptzd2stringz00zz__rsaz00(BgL_auxz00_3425,
					BgL_keyz00_2942);
			}
		}
	}



/* rsa-decrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2decryptzd2stringz00zz__rsaz00(obj_t
		BgL_strz00_57, obj_t BgL_keyz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 524 */
			{	/* Unsafe/rsa.scm 529 */
				obj_t BgL_runner2175z00_2702;

				{	/* Unsafe/rsa.scm 529 */
					obj_t BgL_arg2168z00_2703;

					{	/* Unsafe/rsa.scm 529 */
						obj_t BgL_arg2170z00_2704;

						{	/* Unsafe/rsa.scm 529 */
							obj_t BgL_arg2171z00_2705;

							{	/* Unsafe/rsa.scm 529 */
								obj_t BgL_arg2172z00_2706;

								{	/* Unsafe/rsa.scm 529 */
									obj_t BgL_arg2173z00_2707;

									BgL_arg2173z00_2707 =
										BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_strz00_57);
									{	/* Unsafe/rsa.scm 529 */
										obj_t BgL_list2174z00_2708;

										BgL_list2174z00_2708 = MAKE_PAIR(BgL_arg2173z00_2707, BNIL);
										BgL_arg2172z00_2706 =
											BGl_mapz12z12zz__r4_control_features_6_9z00
											(BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00,
											BgL_list2174z00_2708);
									}
								}
								BgL_arg2171z00_2705 =
									BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_arg2172z00_2706);
							}
							BgL_arg2170z00_2704 =
								BGl_PKCS1zd2unpadzd2zz__rsaz00
								(BGl_bignumzd2ze3u8vectorz31zz__rsaz00
								(BGl_exptzd2modzd2zz__rsaz00
									(BGl_u8vectorzd2ze3bignumz31zz__rsaz00(BgL_arg2171z00_2705),
										STRUCT_REF(BgL_keyz00_58, (int) (((long) 2))),
										STRUCT_REF(BgL_keyz00_58, (int) (((long) 1))))));
						}
						BgL_arg2168z00_2703 =
							BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_arg2170z00_2704);
					}
					{	/* Unsafe/rsa.scm 529 */
						obj_t BgL_list2169z00_2709;

						BgL_list2169z00_2709 = MAKE_PAIR(BgL_arg2168z00_2703, BNIL);
						BgL_runner2175z00_2702 =
							BGl_mapz12z12zz__r4_control_features_6_9z00
							(BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00,
							BgL_list2169z00_2709);
				}}
				return
					BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_runner2175z00_2702);
			}
		}
	}



/* _rsa-decrypt-string */
	obj_t BGl__rsazd2decryptzd2stringz00zz__rsaz00(obj_t BgL_envz00_2947,
		obj_t BgL_strz00_2948, obj_t BgL_keyz00_2949)
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 524 */
			{	/* Unsafe/rsa.scm 529 */
				obj_t BgL_auxz00_3449;

				if (STRINGP(BgL_strz00_2948))
					{	/* Unsafe/rsa.scm 529 */
						BgL_auxz00_3449 = BgL_strz00_2948;
					}
				else
					{
						obj_t BgL_auxz00_3452;

						BgL_auxz00_3452 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__rsaz00,
							BINT(((long) 22115)), BGl_string2725z00zz__rsaz00,
							BGl_string2724z00zz__rsaz00, BgL_strz00_2948);
						FAILURE(BgL_auxz00_3452, BFALSE, BFALSE);
					}
				return
					BGl_rsazd2decryptzd2stringz00zz__rsaz00(BgL_auxz00_3449,
					BgL_keyz00_2949);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rsaz00()
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rsaz00()
	{
		AN_OBJECT;
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
