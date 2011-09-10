/*===========================================================================*/
/*   (Unsafe/uuid.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/uuid.scm -indent -o objs/obj_u/Unsafe/uuid.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_genuuidz00zz__uuidz00();
	static obj_t BGl_list2326z00zz__uuidz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__uuidz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__uuidz00();
	static obj_t BGl_cnstzd2initzd2zz__uuidz00();
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__genuuidz00zz__uuidz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__uuidz00(long,
		char *);
	extern long bgl_current_seconds();
	static obj_t BGl_vector2325z00zz__uuidz00 = BUNSPEC;
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl_methodzd2initzd2zz__uuidz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_genuuidzd2envzd2zz__uuidz00,
		BgL_bgl__genuuidza700za7za7__u2327za7, BGl__genuuidz00zz__uuidz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__uuidz00(long
		BgL_checksumz00_2236, char *BgL_fromz00_2237)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__uuidz00))
				{
					BGl_requirezd2initializa7ationz75zz__uuidz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__uuidz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__uuidz00()
	{
		AN_OBJECT;
		{	/* Unsafe/uuid.scm 15 */
			BGl_list2326z00zz__uuidz00 =
				MAKE_PAIR(BCHAR(((unsigned char) '0')),
				MAKE_PAIR(BCHAR(((unsigned char) '1')),
					MAKE_PAIR(BCHAR(((unsigned char) '2')),
						MAKE_PAIR(BCHAR(((unsigned char) '3')),
							MAKE_PAIR(BCHAR(((unsigned char) '4')),
								MAKE_PAIR(BCHAR(((unsigned char) '5')),
									MAKE_PAIR(BCHAR(((unsigned char) '6')),
										MAKE_PAIR(BCHAR(((unsigned char) '7')),
											MAKE_PAIR(BCHAR(((unsigned char) '8')),
												MAKE_PAIR(BCHAR(((unsigned char) '9')),
													MAKE_PAIR(BCHAR(((unsigned char) 'a')),
														MAKE_PAIR(BCHAR(((unsigned char) 'b')),
															MAKE_PAIR(BCHAR(((unsigned char) 'c')),
																MAKE_PAIR(BCHAR(((unsigned char) 'd')),
																	MAKE_PAIR(BCHAR(((unsigned char) 'e')),
																		MAKE_PAIR(BCHAR(((unsigned char) 'f')),
																			BNIL))))))))))))))));
			return (BGl_vector2325z00zz__uuidz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2326z00zz__uuidz00), BUNSPEC);
		}
	}



/* genuuid */
	BGL_EXPORTED_DEF obj_t BGl_genuuidz00zz__uuidz00()
	{
		AN_OBJECT;
		{	/* Unsafe/uuid.scm 69 */
			{	/* Unsafe/uuid.scm 72 */
				obj_t BgL_hexz00_838;

				BgL_hexz00_838 = BGl_vector2325z00zz__uuidz00;
				{	/* Unsafe/uuid.scm 77 */
					long BgL_n1z00_840;

					long BgL_n2z00_841;

					long BgL_n3z00_842;

					long BgL_n4z00_843;

					long BgL_n5z00_844;

					long BgL_n6z00_845;

					long BgL_n7z00_846;

					long BgL_n8z00_847;

					{	/* Unsafe/uuid.scm 77 */
						long BgL_arg2003z00_946;

						long BgL_arg2004z00_947;

						{	/* Unsafe/uuid.scm 77 */
							long BgL_arg2005z00_948;

							BgL_arg2005z00_948 = bgl_current_seconds();
							{	/* Unsafe/uuid.scm 77 */
								long BgL_res2307z00_1441;

								{	/* Unsafe/uuid.scm 77 */
									long BgL_auxz00_2276;

									{	/* Unsafe/uuid.scm 77 */
										long BgL_auxz00_2277;

										BgL_auxz00_2277 = ELONG_TO_LONG(BgL_arg2005z00_948);
										BgL_auxz00_2276 = ELONG_TO_LONG(BgL_auxz00_2277);
									}
									BgL_res2307z00_1441 = ELONG_TO_LONG(BgL_auxz00_2276);
								}
								BgL_arg2003z00_946 = BgL_res2307z00_1441;
						}}
						{	/* Unsafe/uuid.scm 77 */
							long BgL_res2308z00_1444;

							{	/* Unsafe/uuid.scm 77 */
								int BgL_arg2249z00_1443;

								BgL_arg2249z00_1443 = rand();
								BgL_res2308z00_1444 =
									BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
									(long) (BgL_arg2249z00_1443), ((long) 65536));
							}
							BgL_arg2004z00_947 = BgL_res2308z00_1444;
						}
						BgL_n1z00_840 = (BgL_arg2003z00_946 ^ BgL_arg2004z00_947);
					}
					{	/* Unsafe/uuid.scm 78 */
						long BgL_res2309z00_1449;

						{	/* Unsafe/uuid.scm 78 */
							int BgL_arg2249z00_1448;

							BgL_arg2249z00_1448 = rand();
							BgL_res2309z00_1449 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1448), ((long) 65536));
						}
						BgL_n2z00_841 = BgL_res2309z00_1449;
					}
					{	/* Unsafe/uuid.scm 79 */
						long BgL_res2310z00_1452;

						{	/* Unsafe/uuid.scm 79 */
							int BgL_arg2249z00_1451;

							BgL_arg2249z00_1451 = rand();
							BgL_res2310z00_1452 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1451), ((long) 65536));
						}
						BgL_n3z00_842 = BgL_res2310z00_1452;
					}
					{	/* Unsafe/uuid.scm 80 */
						long BgL_res2311z00_1455;

						{	/* Unsafe/uuid.scm 80 */
							int BgL_arg2249z00_1454;

							BgL_arg2249z00_1454 = rand();
							BgL_res2311z00_1455 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1454), ((long) 65536));
						}
						BgL_n4z00_843 = BgL_res2311z00_1455;
					}
					{	/* Unsafe/uuid.scm 81 */
						long BgL_res2312z00_1458;

						{	/* Unsafe/uuid.scm 81 */
							int BgL_arg2249z00_1457;

							BgL_arg2249z00_1457 = rand();
							BgL_res2312z00_1458 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1457), ((long) 65536));
						}
						BgL_n5z00_844 = BgL_res2312z00_1458;
					}
					{	/* Unsafe/uuid.scm 82 */
						long BgL_res2313z00_1461;

						{	/* Unsafe/uuid.scm 82 */
							int BgL_arg2249z00_1460;

							BgL_arg2249z00_1460 = rand();
							BgL_res2313z00_1461 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1460), ((long) 65536));
						}
						BgL_n6z00_845 = BgL_res2313z00_1461;
					}
					{	/* Unsafe/uuid.scm 83 */
						long BgL_res2314z00_1464;

						{	/* Unsafe/uuid.scm 83 */
							int BgL_arg2249z00_1463;

							BgL_arg2249z00_1463 = rand();
							BgL_res2314z00_1464 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1463), ((long) 65536));
						}
						BgL_n7z00_846 = BgL_res2314z00_1464;
					}
					{	/* Unsafe/uuid.scm 84 */
						long BgL_res2315z00_1467;

						{	/* Unsafe/uuid.scm 84 */
							int BgL_arg2249z00_1466;

							BgL_arg2249z00_1466 = rand();
							BgL_res2315z00_1467 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg2249z00_1466), ((long) 65536));
						}
						BgL_n8z00_847 = BgL_res2315z00_1467;
					}
					{	/* Unsafe/uuid.scm 85 */
						obj_t BgL_g1826z00_848;

						BgL_g1826z00_848 = make_string_sans_fill(((long) 128));
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1895z00_850;

							{	/* Unsafe/uuid.scm 87 */
								long BgL_arg1896z00_851;

								BgL_arg1896z00_851 =
									(
									(BgL_n1z00_840 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 87 */
									int BgL_kz00_1482;

									BgL_kz00_1482 = (int) (BgL_arg1896z00_851);
									BgL_arg1895z00_850 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1482));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 0), BgL_arg1895z00_850);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1899z00_853;

							{	/* Unsafe/uuid.scm 88 */
								long BgL_arg1900z00_854;

								BgL_arg1900z00_854 =
									(
									(BgL_n1z00_840 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 88 */
									int BgL_kz00_1500;

									BgL_kz00_1500 = (int) (BgL_arg1900z00_854);
									BgL_arg1899z00_853 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1500));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 1), BgL_arg1899z00_853);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1902z00_856;

							{	/* Unsafe/uuid.scm 89 */
								long BgL_arg1903z00_857;

								BgL_arg1903z00_857 =
									(
									(BgL_n1z00_840 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 89 */
									int BgL_kz00_1518;

									BgL_kz00_1518 = (int) (BgL_arg1903z00_857);
									BgL_arg1902z00_856 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1518));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 2), BgL_arg1902z00_856);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1905z00_859;

							{	/* Unsafe/uuid.scm 90 */
								long BgL_arg1906z00_860;

								BgL_arg1906z00_860 =
									(
									(BgL_n1z00_840 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 90 */
									int BgL_kz00_1536;

									BgL_kz00_1536 = (int) (BgL_arg1906z00_860);
									BgL_arg1905z00_859 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1536));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 3), BgL_arg1905z00_859);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1908z00_862;

							{	/* Unsafe/uuid.scm 91 */
								long BgL_arg1909z00_863;

								BgL_arg1909z00_863 =
									(
									(BgL_n2z00_841 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 91 */
									int BgL_kz00_1554;

									BgL_kz00_1554 = (int) (BgL_arg1909z00_863);
									BgL_arg1908z00_862 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1554));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 4), BgL_arg1908z00_862);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1911z00_865;

							{	/* Unsafe/uuid.scm 92 */
								long BgL_arg1912z00_866;

								BgL_arg1912z00_866 =
									(
									(BgL_n2z00_841 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 92 */
									int BgL_kz00_1572;

									BgL_kz00_1572 = (int) (BgL_arg1912z00_866);
									BgL_arg1911z00_865 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1572));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 5), BgL_arg1911z00_865);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1915z00_868;

							{	/* Unsafe/uuid.scm 93 */
								long BgL_arg1916z00_869;

								BgL_arg1916z00_869 =
									(
									(BgL_n2z00_841 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 93 */
									int BgL_kz00_1590;

									BgL_kz00_1590 = (int) (BgL_arg1916z00_869);
									BgL_arg1915z00_868 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1590));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 6), BgL_arg1915z00_868);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1919z00_871;

							{	/* Unsafe/uuid.scm 94 */
								long BgL_arg1920z00_872;

								BgL_arg1920z00_872 =
									(
									(BgL_n2z00_841 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 94 */
									int BgL_kz00_1608;

									BgL_kz00_1608 = (int) (BgL_arg1920z00_872);
									BgL_arg1919z00_871 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1608));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 7), BgL_arg1919z00_871);
						}
						STRING_SET(BgL_g1826z00_848, ((long) 8), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1922z00_874;

							{	/* Unsafe/uuid.scm 97 */
								long BgL_arg1923z00_875;

								BgL_arg1923z00_875 =
									(
									(BgL_n3z00_842 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 97 */
									int BgL_kz00_1629;

									BgL_kz00_1629 = (int) (BgL_arg1923z00_875);
									BgL_arg1922z00_874 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1629));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 9), BgL_arg1922z00_874);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1925z00_877;

							{	/* Unsafe/uuid.scm 98 */
								long BgL_arg1926z00_878;

								BgL_arg1926z00_878 =
									(
									(BgL_n3z00_842 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 98 */
									int BgL_kz00_1647;

									BgL_kz00_1647 = (int) (BgL_arg1926z00_878);
									BgL_arg1925z00_877 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1647));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 10), BgL_arg1925z00_877);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1929z00_880;

							{	/* Unsafe/uuid.scm 99 */
								long BgL_arg1930z00_881;

								BgL_arg1930z00_881 =
									(
									(BgL_n3z00_842 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 99 */
									int BgL_kz00_1665;

									BgL_kz00_1665 = (int) (BgL_arg1930z00_881);
									BgL_arg1929z00_880 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1665));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 11), BgL_arg1929z00_880);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1932z00_883;

							{	/* Unsafe/uuid.scm 100 */
								long BgL_arg1935z00_884;

								BgL_arg1935z00_884 =
									(
									(BgL_n3z00_842 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 100 */
									int BgL_kz00_1683;

									BgL_kz00_1683 = (int) (BgL_arg1935z00_884);
									BgL_arg1932z00_883 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1683));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 12), BgL_arg1932z00_883);
						}
						STRING_SET(BgL_g1826z00_848, ((long) 13), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1938z00_886;

							{	/* Unsafe/uuid.scm 103 */
								int BgL_kz00_1691;

								BgL_kz00_1691 = (int) (((long) 4));
								BgL_arg1938z00_886 =
									CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1691));
							}
							STRING_SET(BgL_g1826z00_848, ((long) 14), BgL_arg1938z00_886);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1941z00_888;

							{	/* Unsafe/uuid.scm 104 */
								long BgL_arg1942z00_889;

								BgL_arg1942z00_889 =
									(
									(BgL_n4z00_843 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 104 */
									int BgL_kz00_1709;

									BgL_kz00_1709 = (int) (BgL_arg1942z00_889);
									BgL_arg1941z00_888 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1709));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 15), BgL_arg1941z00_888);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1944z00_891;

							{	/* Unsafe/uuid.scm 105 */
								long BgL_arg1945z00_892;

								BgL_arg1945z00_892 =
									(
									(BgL_n4z00_843 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 105 */
									int BgL_kz00_1727;

									BgL_kz00_1727 = (int) (BgL_arg1945z00_892);
									BgL_arg1944z00_891 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1727));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 16), BgL_arg1944z00_891);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1948z00_894;

							{	/* Unsafe/uuid.scm 106 */
								long BgL_arg1949z00_895;

								BgL_arg1949z00_895 =
									(
									(BgL_n4z00_843 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 106 */
									int BgL_kz00_1745;

									BgL_kz00_1745 = (int) (BgL_arg1949z00_895);
									BgL_arg1948z00_894 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1745));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 17), BgL_arg1948z00_894);
						}
						STRING_SET(BgL_g1826z00_848, ((long) 18), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1951z00_897;

							{	/* Unsafe/uuid.scm 109 */
								long BgL_arg1952z00_898;

								BgL_arg1952z00_898 =
									(
									((BgL_n5z00_844 >>
											(int) (((long) 12))) &
										(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
													(((long) 1) <<
														(int) (((long) 2)))),
												BINT(((long) 1))))) | ((long) 8));
								{	/* Unsafe/uuid.scm 109 */
									int BgL_kz00_1768;

									BgL_kz00_1768 = (int) (BgL_arg1952z00_898);
									BgL_arg1951z00_897 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1768));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 19), BgL_arg1951z00_897);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1956z00_902;

							{	/* Unsafe/uuid.scm 110 */
								long BgL_arg1957z00_903;

								BgL_arg1957z00_903 =
									(
									(BgL_n5z00_844 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 110 */
									int BgL_kz00_1786;

									BgL_kz00_1786 = (int) (BgL_arg1957z00_903);
									BgL_arg1956z00_902 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1786));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 20), BgL_arg1956z00_902);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1959z00_905;

							{	/* Unsafe/uuid.scm 112 */
								long BgL_arg1960z00_906;

								BgL_arg1960z00_906 =
									(
									(BgL_n5z00_844 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 112 */
									int BgL_kz00_1804;

									BgL_kz00_1804 = (int) (BgL_arg1960z00_906);
									BgL_arg1959z00_905 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1804));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 21), BgL_arg1959z00_905);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1962z00_908;

							{	/* Unsafe/uuid.scm 113 */
								long BgL_arg1963z00_909;

								BgL_arg1963z00_909 =
									(
									(BgL_n5z00_844 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 113 */
									int BgL_kz00_1822;

									BgL_kz00_1822 = (int) (BgL_arg1963z00_909);
									BgL_arg1962z00_908 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1822));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 22), BgL_arg1962z00_908);
						}
						STRING_SET(BgL_g1826z00_848, ((long) 23), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1966z00_911;

							{	/* Unsafe/uuid.scm 116 */
								long BgL_arg1967z00_912;

								BgL_arg1967z00_912 =
									(
									(BgL_n6z00_845 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 116 */
									int BgL_kz00_1843;

									BgL_kz00_1843 = (int) (BgL_arg1967z00_912);
									BgL_arg1966z00_911 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1843));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 24), BgL_arg1966z00_911);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1969z00_914;

							{	/* Unsafe/uuid.scm 117 */
								long BgL_arg1970z00_915;

								BgL_arg1970z00_915 =
									(
									(BgL_n6z00_845 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 117 */
									int BgL_kz00_1861;

									BgL_kz00_1861 = (int) (BgL_arg1970z00_915);
									BgL_arg1969z00_914 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1861));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 25), BgL_arg1969z00_914);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1972z00_917;

							{	/* Unsafe/uuid.scm 118 */
								long BgL_arg1973z00_918;

								BgL_arg1973z00_918 =
									(
									(BgL_n6z00_845 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 118 */
									int BgL_kz00_1879;

									BgL_kz00_1879 = (int) (BgL_arg1973z00_918);
									BgL_arg1972z00_917 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1879));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 26), BgL_arg1972z00_917);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1975z00_920;

							{	/* Unsafe/uuid.scm 119 */
								long BgL_arg1976z00_921;

								BgL_arg1976z00_921 =
									(
									(BgL_n6z00_845 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 119 */
									int BgL_kz00_1897;

									BgL_kz00_1897 = (int) (BgL_arg1976z00_921);
									BgL_arg1975z00_920 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1897));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 27), BgL_arg1975z00_920);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1979z00_923;

							{	/* Unsafe/uuid.scm 120 */
								long BgL_arg1980z00_924;

								BgL_arg1980z00_924 =
									(
									(BgL_n7z00_846 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 120 */
									int BgL_kz00_1915;

									BgL_kz00_1915 = (int) (BgL_arg1980z00_924);
									BgL_arg1979z00_923 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1915));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 28), BgL_arg1979z00_923);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1982z00_926;

							{	/* Unsafe/uuid.scm 121 */
								long BgL_arg1983z00_927;

								BgL_arg1983z00_927 =
									(
									(BgL_n7z00_846 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 121 */
									int BgL_kz00_1933;

									BgL_kz00_1933 = (int) (BgL_arg1983z00_927);
									BgL_arg1982z00_926 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1933));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 29), BgL_arg1982z00_926);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1985z00_929;

							{	/* Unsafe/uuid.scm 122 */
								long BgL_arg1986z00_930;

								BgL_arg1986z00_930 =
									(
									(BgL_n7z00_846 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 122 */
									int BgL_kz00_1951;

									BgL_kz00_1951 = (int) (BgL_arg1986z00_930);
									BgL_arg1985z00_929 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1951));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 30), BgL_arg1985z00_929);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1988z00_932;

							{	/* Unsafe/uuid.scm 123 */
								long BgL_arg1989z00_933;

								BgL_arg1989z00_933 =
									(
									(BgL_n7z00_846 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 123 */
									int BgL_kz00_1969;

									BgL_kz00_1969 = (int) (BgL_arg1989z00_933);
									BgL_arg1988z00_932 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1969));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 31), BgL_arg1988z00_932);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1991z00_935;

							{	/* Unsafe/uuid.scm 124 */
								long BgL_arg1992z00_936;

								BgL_arg1992z00_936 =
									(
									(BgL_n8z00_847 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 124 */
									int BgL_kz00_1987;

									BgL_kz00_1987 = (int) (BgL_arg1992z00_936);
									BgL_arg1991z00_935 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_1987));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 32), BgL_arg1991z00_935);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1994z00_938;

							{	/* Unsafe/uuid.scm 125 */
								long BgL_arg1995z00_939;

								BgL_arg1995z00_939 =
									(
									(BgL_n8z00_847 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 125 */
									int BgL_kz00_2005;

									BgL_kz00_2005 = (int) (BgL_arg1995z00_939);
									BgL_arg1994z00_938 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_2005));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 33), BgL_arg1994z00_938);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg1998z00_941;

							{	/* Unsafe/uuid.scm 126 */
								long BgL_arg1999z00_942;

								BgL_arg1999z00_942 =
									(
									(BgL_n8z00_847 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 126 */
									int BgL_kz00_2023;

									BgL_kz00_2023 = (int) (BgL_arg1999z00_942);
									BgL_arg1998z00_941 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_2023));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 34), BgL_arg1998z00_941);
						}
						{	/* Unsafe/uuid.scm 85 */
							unsigned char BgL_arg2001z00_944;

							{	/* Unsafe/uuid.scm 127 */
								long BgL_arg2002z00_945;

								BgL_arg2002z00_945 =
									(
									(BgL_n8z00_847 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								{	/* Unsafe/uuid.scm 127 */
									int BgL_kz00_2041;

									BgL_kz00_2041 = (int) (BgL_arg2002z00_945);
									BgL_arg2001z00_944 =
										CCHAR(VECTOR_REF(BgL_hexz00_838, BgL_kz00_2041));
							}}
							STRING_SET(BgL_g1826z00_848, ((long) 35), BgL_arg2001z00_944);
						}
						return BgL_g1826z00_848;
					}
				}
			}
		}
	}



/* _genuuid */
	obj_t BGl__genuuidz00zz__uuidz00(obj_t BgL_envz00_2234)
	{
		AN_OBJECT;
		{	/* Unsafe/uuid.scm 69 */
			return BGl_genuuidz00zz__uuidz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__uuidz00()
	{
		AN_OBJECT;
		{	/* Unsafe/uuid.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__uuidz00()
	{
		AN_OBJECT;
		{	/* Unsafe/uuid.scm 15 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
