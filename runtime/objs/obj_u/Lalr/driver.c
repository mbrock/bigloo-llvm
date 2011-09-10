/*===========================================================================*/
/*   (Lalr/driver.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/driver.scm -indent -o objs/obj_u/Lalr/driver.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static long BGl_za2maxzd2stackzd2siza7eza2za7zz__lalr_driverz00;
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_driverz00 = BUNSPEC;
	extern int bgl_debug();
	static obj_t BGl_genericzd2initzd2zz__lalr_driverz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_driverz00();
	static obj_t BGl_zc3anonymousza31896ze3z83zz__lalr_driverz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_driverz00();
	static obj_t BGl_symbol2208z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol2211z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol2216z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol2218z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol2220z00zz__lalr_driverz00 = BUNSPEC;
	extern obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_driverz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__lalr_driverz00();
	extern obj_t bgl_close_output_port(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static long BGl_za2stackzd2siza7ezd2incrementza2za7zz__lalr_driverz00;
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl____makezd2parserzd2zz__lalr_driverz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t,
		obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_driverz00();
	static obj_t BGl_growzd2stackz12zc0zz__lalr_driverz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl___makezd2parserzd2envz00zz__lalr_driverz00,
		BgL_bgl____makeza7d2parser2225za7,
		BGl____makezd2parserzd2zz__lalr_driverz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2210z00zz__lalr_driverz00,
		BgL_bgl_string2210za700za7za7_2226za7, "Illegal `#f' token", 18);
	      DEFINE_STRING(BGl_string2209z00zz__lalr_driverz00,
		BgL_bgl_string2209za700za7za7_2227za7, "parser", 6);
	      DEFINE_STRING(BGl_string2212z00zz__lalr_driverz00,
		BgL_bgl_string2212za700za7za7_2228za7, "*eoi*", 5);
	      DEFINE_STRING(BGl_string2213z00zz__lalr_driverz00,
		BgL_bgl_string2213za700za7za7_2229za7, "LALR TRACE: input=", 18);
	      DEFINE_STRING(BGl_string2214z00zz__lalr_driverz00,
		BgL_bgl_string2214za700za7za7_2230za7, " state=", 7);
	      DEFINE_STRING(BGl_string2215z00zz__lalr_driverz00,
		BgL_bgl_string2215za700za7za7_2231za7, " sp=", 4);
	      DEFINE_STRING(BGl_string2217z00zz__lalr_driverz00,
		BgL_bgl_string2217za700za7za7_2232za7, "accept", 6);
	      DEFINE_STRING(BGl_string2219z00zz__lalr_driverz00,
		BgL_bgl_string2219za700za7za7_2233za7, "*error*", 7);
	      DEFINE_STRING(BGl_string2221z00zz__lalr_driverz00,
		BgL_bgl_string2221za700za7za7_2234za7, "error", 5);
	      DEFINE_STRING(BGl_string2222z00zz__lalr_driverz00,
		BgL_bgl_string2222za700za7za7_2235za7, "parse error (unexpected token `",
		31);
	      DEFINE_STRING(BGl_string2223z00zz__lalr_driverz00,
		BgL_bgl_string2223za700za7za7_2236za7, "')", 2);
	      DEFINE_STRING(BGl_string2224z00zz__lalr_driverz00,
		BgL_bgl_string2224za700za7za7_2237za7, "__lalr_driver", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_driverz00(long
		BgL_checksumz00_1585, char *BgL_fromz00_1586)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_driverz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_driverz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__lalr_driverz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_driverz00();
					BGl_toplevelzd2initzd2zz__lalr_driverz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_driverz00()
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 11 */
			BGl_symbol2208z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string2209z00zz__lalr_driverz00);
			BGl_symbol2211z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string2212z00zz__lalr_driverz00);
			BGl_symbol2216z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string2217z00zz__lalr_driverz00);
			BGl_symbol2218z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string2219z00zz__lalr_driverz00);
			return (BGl_symbol2220z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string2221z00zz__lalr_driverz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_driverz00()
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 11 */
			BGl_za2maxzd2stackzd2siza7eza2za7zz__lalr_driverz00 = ((long) 500);
			return (BGl_za2stackzd2siza7ezd2incrementza2za7zz__lalr_driverz00 =
				((long) 200), BUNSPEC);
		}
	}



/* grow-stack! */
	obj_t BGl_growzd2stackz12zc0zz__lalr_driverz00(obj_t BgL_vz00_1)
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 49 */
			{	/* Lalr/driver.scm 50 */
				int BgL_lenz00_771;

				BgL_lenz00_771 = VECTOR_LENGTH(BgL_vz00_1);
				{	/* Lalr/driver.scm 50 */
					obj_t BgL_v2z00_772;

					{	/* Lalr/driver.scm 51 */
						long BgL_arg1894z00_780;

						BgL_arg1894z00_780 =
							(
							(long) (BgL_lenz00_771) +
							BGl_za2stackzd2siza7ezd2incrementza2za7zz__lalr_driverz00);
						BgL_v2z00_772 =
							make_vector((int) (BgL_arg1894z00_780), BINT(((long) 0)));
					}
					{	/* Lalr/driver.scm 51 */

						{
							long BgL_iz00_774;

							BgL_iz00_774 = ((long) 0);
						BgL_zc3anonymousza31889ze3z83_775:
							if ((BgL_iz00_774 < (long) (BgL_lenz00_771)))
								{	/* Lalr/driver.scm 53 */
									VECTOR_SET(BgL_v2z00_772,
										(int) (BgL_iz00_774),
										VECTOR_REF(BgL_vz00_1, (int) (BgL_iz00_774)));
									{
										long BgL_iz00_1611;

										BgL_iz00_1611 = (BgL_iz00_774 + ((long) 1));
										BgL_iz00_774 = BgL_iz00_1611;
										goto BgL_zc3anonymousza31889ze3z83_775;
									}
								}
							else
								{	/* Lalr/driver.scm 53 */
									return BgL_v2z00_772;
								}
						}
					}
				}
			}
		}
	}



/* __make-parser */
	BGL_EXPORTED_DEF obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t
		BgL_actionzd2tablezd2_2, obj_t BgL_reductionzd2functionzd2_3)
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 59 */
			{	/* Lalr/driver.scm 61 */
				obj_t BgL_zc3anonymousza31896ze3z83_1575;

				BgL_zc3anonymousza31896ze3z83_1575 =
					make_fx_procedure(BGl_zc3anonymousza31896ze3z83zz__lalr_driverz00,
					(int) (((long) 3)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza31896ze3z83_1575,
					(int) (((long) 0)), BgL_actionzd2tablezd2_2);
				PROCEDURE_SET(BgL_zc3anonymousza31896ze3z83_1575,
					(int) (((long) 1)), BgL_reductionzd2functionzd2_3);
				return BgL_zc3anonymousza31896ze3z83_1575;
			}
		}
	}



/* ___make-parser */
	obj_t BGl____makezd2parserzd2zz__lalr_driverz00(obj_t BgL_envz00_1576,
		obj_t BgL_actionzd2tablezd2_1577, obj_t BgL_reductionzd2functionzd2_1578)
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 59 */
			return
				BGl___makezd2parserzd2zz__lalr_driverz00(BgL_actionzd2tablezd2_1577,
				BgL_reductionzd2functionzd2_1578);
		}
	}



/* <anonymous:1896> */
	obj_t BGl_zc3anonymousza31896ze3z83zz__lalr_driverz00(obj_t BgL_envz00_1579,
		obj_t BgL_rgcz00_1582, obj_t BgL_inputzd2portzd2_1583,
		obj_t BgL_iszd2eofzf3z21_1584)
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 61 */
			{	/* Lalr/driver.scm 69 */
				obj_t BgL_actionzd2tablezd2_1580;

				obj_t BgL_reductionzd2functionzd2_1581;

				BgL_actionzd2tablezd2_1580 =
					PROCEDURE_REF(BgL_envz00_1579, (int) (((long) 0)));
				BgL_reductionzd2functionzd2_1581 =
					PROCEDURE_REF(BgL_envz00_1579, (int) (((long) 1)));
				{
					obj_t BgL_rgcz00_782;

					obj_t BgL_inputzd2portzd2_783;

					obj_t BgL_iszd2eofzf3z21_784;

					BgL_rgcz00_782 = BgL_rgcz00_1582;
					BgL_inputzd2portzd2_783 = BgL_inputzd2portzd2_1583;
					BgL_iszd2eofzf3z21_784 = BgL_iszd2eofzf3z21_1584;
					{	/* Lalr/driver.scm 69 */
						obj_t BgL_stackz00_787;

						obj_t BgL_statez00_788;

						obj_t BgL_inputz00_789;

						obj_t BgL_inz00_790;

						obj_t BgL_attrz00_791;

						obj_t BgL_actsz00_792;

						obj_t BgL_actz00_793;

						bool_t BgL_eofzf3zf3_794;

						bool_t BgL_debugz00_795;

						BgL_stackz00_787 =
							make_vector(
							(int) (BGl_za2maxzd2stackzd2siza7eza2za7zz__lalr_driverz00),
							BINT(((long) 0)));
						BgL_statez00_788 = BFALSE;
						BgL_inputz00_789 = BFALSE;
						BgL_inz00_790 = BFALSE;
						BgL_attrz00_791 = BFALSE;
						BgL_actsz00_792 = BFALSE;
						BgL_actz00_793 = BFALSE;
						BgL_eofzf3zf3_794 = ((bool_t) 0);
						{	/* Lalr/driver.scm 77 */
							int BgL_arg1940z00_840;

							BgL_arg1940z00_840 = bgl_debug();
							BgL_debugz00_795 = ((long) (BgL_arg1940z00_840) >= ((long) 100));
						}
						{
							obj_t BgL_spz00_797;

							BgL_spz00_797 = BINT(((long) 0));
						BgL_zc3anonymousza31897ze3z83_798:
							BgL_statez00_788 =
								VECTOR_REF(BgL_stackz00_787, CINT(BgL_spz00_797));
							BgL_actsz00_792 =
								VECTOR_REF(BgL_actionzd2tablezd2_1580, CINT(BgL_statez00_788));
							if (NULLP(CDR(BgL_actsz00_792)))
								{	/* Lalr/driver.scm 84 */
									obj_t BgL_pairz00_1311;

									BgL_pairz00_1311 = BgL_actsz00_792;
									BgL_actz00_793 = CDR(CAR(BgL_pairz00_1311));
								}
							else
								{	/* Lalr/driver.scm 83 */
									if (CBOOL(BgL_inputz00_789))
										{	/* Lalr/driver.scm 86 */
											BFALSE;
										}
									else
										{	/* Lalr/driver.scm 86 */
											BgL_inputz00_789 =
												PROCEDURE_ENTRY(BgL_rgcz00_782) (BgL_rgcz00_782,
												BgL_inputzd2portzd2_783, BEOA);
										}
									if (CBOOL(BgL_inputz00_789))
										{	/* Lalr/driver.scm 88 */
											((bool_t) 0);
										}
									else
										{	/* Lalr/driver.scm 88 */
											bgl_system_failure(BGL_IO_PARSE_ERROR,
												BGl_symbol2208z00zz__lalr_driverz00,
												BGl_string2210z00zz__lalr_driverz00, BFALSE);
										}
									if (CBOOL(PROCEDURE_ENTRY(BgL_iszd2eofzf3z21_784)
											(BgL_iszd2eofzf3z21_784, BgL_inputz00_789, BEOA)))
										{	/* Lalr/driver.scm 94 */
											BgL_inz00_790 = BGl_symbol2211z00zz__lalr_driverz00;
											BgL_attrz00_791 = BFALSE;
											BgL_eofzf3zf3_794 = ((bool_t) 1);
										}
									else
										{	/* Lalr/driver.scm 94 */
											if (PAIRP(BgL_inputz00_789))
												{	/* Lalr/driver.scm 98 */
													BgL_inz00_790 = CAR(BgL_inputz00_789);
													BgL_attrz00_791 = CDR(BgL_inputz00_789);
												}
											else
												{	/* Lalr/driver.scm 98 */
													BgL_inz00_790 = BgL_inputz00_789;
													BgL_attrz00_791 = BFALSE;
												}
										}
									{	/* Lalr/driver.scm 105 */
										obj_t BgL_xz00_1318;

										obj_t BgL_lz00_1319;

										BgL_xz00_1318 = BgL_inz00_790;
										BgL_lz00_1319 = BgL_actsz00_792;
										{	/* Lalr/driver.scm 105 */
											obj_t BgL_yz00_1320;

											BgL_yz00_1320 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1318,
												BgL_lz00_1319);
											if (CBOOL(BgL_yz00_1320))
												{	/* Lalr/driver.scm 105 */
													BgL_actz00_793 = CDR(BgL_yz00_1320);
												}
											else
												{	/* Lalr/driver.scm 105 */
													obj_t BgL_pairz00_1322;

													BgL_pairz00_1322 = BgL_lz00_1319;
													BgL_actz00_793 = CDR(CAR(BgL_pairz00_1322));
												}
										}
									}
								}
							if (BgL_debugz00_795)
								{	/* Lalr/driver.scm 107 */
									{	/* Lalr/driver.scm 108 */
										obj_t BgL_arg1903z00_804;

										{	/* Lalr/driver.scm 108 */
											obj_t BgL_res2190z00_1327;

											{	/* Lalr/driver.scm 108 */
												obj_t BgL_auxz00_1662;

												BgL_auxz00_1662 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2190z00_1327 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1662);
											}
											BgL_arg1903z00_804 = BgL_res2190z00_1327;
										}
										bgl_display_string(BGl_string2213z00zz__lalr_driverz00,
											BgL_arg1903z00_804);
									}
									{	/* Lalr/driver.scm 109 */
										obj_t BgL_arg1904z00_805;

										{	/* Lalr/driver.scm 109 */
											obj_t BgL_res2191z00_1331;

											{	/* Lalr/driver.scm 109 */
												obj_t BgL_auxz00_1666;

												BgL_auxz00_1666 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2191z00_1331 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1666);
											}
											BgL_arg1904z00_805 = BgL_res2191z00_1331;
										}
										{	/* Lalr/driver.scm 109 */
											obj_t BgL_list1905z00_806;

											BgL_list1905z00_806 = MAKE_PAIR(BgL_arg1904z00_805, BNIL);
											BGl_writez00zz__r4_output_6_10_3z00(BgL_inz00_790,
												BgL_list1905z00_806);
										}
									}
									{	/* Lalr/driver.scm 110 */
										obj_t BgL_arg1907z00_808;

										{	/* Lalr/driver.scm 110 */
											obj_t BgL_res2192z00_1333;

											{	/* Lalr/driver.scm 110 */
												obj_t BgL_auxz00_1671;

												BgL_auxz00_1671 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2192z00_1333 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1671);
											}
											BgL_arg1907z00_808 = BgL_res2192z00_1333;
										}
										bgl_display_string(BGl_string2214z00zz__lalr_driverz00,
											BgL_arg1907z00_808);
									}
									{	/* Lalr/driver.scm 111 */
										obj_t BgL_arg1908z00_809;

										{	/* Lalr/driver.scm 111 */
											obj_t BgL_res2193z00_1337;

											{	/* Lalr/driver.scm 111 */
												obj_t BgL_auxz00_1675;

												BgL_auxz00_1675 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2193z00_1337 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1675);
											}
											BgL_arg1908z00_809 = BgL_res2193z00_1337;
										}
										{	/* Lalr/driver.scm 111 */
											obj_t BgL_list1909z00_810;

											BgL_list1909z00_810 = MAKE_PAIR(BgL_arg1908z00_809, BNIL);
											BGl_writez00zz__r4_output_6_10_3z00(BgL_statez00_788,
												BgL_list1909z00_810);
										}
									}
									{	/* Lalr/driver.scm 112 */
										obj_t BgL_arg1911z00_812;

										{	/* Lalr/driver.scm 112 */
											obj_t BgL_res2194z00_1339;

											{	/* Lalr/driver.scm 112 */
												obj_t BgL_auxz00_1680;

												BgL_auxz00_1680 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2194z00_1339 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1680);
											}
											BgL_arg1911z00_812 = BgL_res2194z00_1339;
										}
										bgl_display_string(BGl_string2215z00zz__lalr_driverz00,
											BgL_arg1911z00_812);
									}
									{	/* Lalr/driver.scm 113 */
										obj_t BgL_arg1912z00_813;

										{	/* Lalr/driver.scm 113 */
											obj_t BgL_res2195z00_1343;

											{	/* Lalr/driver.scm 113 */
												obj_t BgL_auxz00_1684;

												BgL_auxz00_1684 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2195z00_1343 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1684);
											}
											BgL_arg1912z00_813 = BgL_res2195z00_1343;
										}
										{	/* Lalr/driver.scm 113 */
											obj_t BgL_list1913z00_814;

											BgL_list1913z00_814 = MAKE_PAIR(BgL_arg1912z00_813, BNIL);
											BGl_writez00zz__r4_output_6_10_3z00(BgL_spz00_797,
												BgL_list1913z00_814);
										}
									}
									{	/* Lalr/driver.scm 114 */
										obj_t BgL_arg1914z00_815;

										{	/* Lalr/driver.scm 114 */
											obj_t BgL_res2196z00_1345;

											{	/* Lalr/driver.scm 114 */
												obj_t BgL_auxz00_1689;

												BgL_auxz00_1689 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2196z00_1345 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1689);
											}
											BgL_arg1914z00_815 = BgL_res2196z00_1345;
										}
										bgl_display_char(((unsigned char) '\n'),
											BgL_arg1914z00_815);
								}}
							else
								{	/* Lalr/driver.scm 107 */
									BFALSE;
								}
							if ((BgL_actz00_793 == BGl_symbol2216z00zz__lalr_driverz00))
								{	/* Lalr/driver.scm 119 */
									return VECTOR_REF(BgL_stackz00_787, (int) (((long) 1)));
								}
							else
								{	/* Lalr/driver.scm 123 */
									bool_t BgL_testz00_1697;

									if ((BgL_actz00_793 == BGl_symbol2218z00zz__lalr_driverz00))
										{	/* Lalr/driver.scm 123 */
											BgL_testz00_1697 = ((bool_t) 1);
										}
									else
										{	/* Lalr/driver.scm 123 */
											BgL_testz00_1697 =
												(BgL_actz00_793 == BGl_symbol2220z00zz__lalr_driverz00);
										}
									if (BgL_testz00_1697)
										{	/* Lalr/driver.scm 124 */
											obj_t BgL_msgz00_818;

											{	/* Lalr/driver.scm 124 */
												obj_t BgL_arg1919z00_820;

												if (SYMBOLP(BgL_inz00_790))
													{	/* Lalr/driver.scm 128 */
														obj_t BgL_res2197z00_1352;

														{	/* Lalr/driver.scm 128 */
															obj_t BgL_symbolz00_1350;

															BgL_symbolz00_1350 = BgL_inz00_790;
															{	/* Lalr/driver.scm 128 */
																obj_t BgL_arg2113z00_1351;

																BgL_arg2113z00_1351 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1350);
																BgL_res2197z00_1352 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2113z00_1351);
															}
														}
														BgL_arg1919z00_820 = BgL_res2197z00_1352;
													}
												else
													{	/* Lalr/driver.scm 127 */
														if (CHARP(BgL_inz00_790))
															{	/* Lalr/driver.scm 130 */
																obj_t BgL_list1923z00_824;

																BgL_list1923z00_824 =
																	MAKE_PAIR(BgL_inz00_790, BNIL);
																{	/* Lalr/driver.scm 130 */
																	obj_t BgL_res2198z00_1360;

																	{	/* Lalr/driver.scm 130 */
																		obj_t BgL_arg2107z00_1357;

																		BgL_arg2107z00_1357 =
																			CAR(BgL_list1923z00_824);
																		BgL_res2198z00_1360 =
																			make_string(((long) 1),
																			CCHAR(BgL_arg2107z00_1357));
																	}
																	BgL_arg1919z00_820 = BgL_res2198z00_1360;
															}}
														else
															{	/* Lalr/driver.scm 132 */
																obj_t BgL_portz00_825;

																{	/* Lalr/driver.scm 132 */

																	{	/* Ieee/port.scm 386 */

																		BgL_portz00_825 =
																			BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																			(BTRUE);
																	}
																}
																{	/* Lalr/driver.scm 133 */
																	obj_t BgL_list1924z00_826;

																	BgL_list1924z00_826 =
																		MAKE_PAIR(BgL_portz00_825, BNIL);
																	BGl_writez00zz__r4_output_6_10_3z00
																		(BgL_inz00_790, BgL_list1924z00_826);
																}
																BgL_arg1919z00_820 =
																	bgl_close_output_port(BgL_portz00_825);
															}
													}
												BgL_msgz00_818 =
													string_append_3(BGl_string2222z00zz__lalr_driverz00,
													BgL_arg1919z00_820,
													BGl_string2223z00zz__lalr_driverz00);
											}
											return
												bgl_system_failure(BGL_IO_PARSE_ERROR,
												BGl_string2209z00zz__lalr_driverz00, BgL_msgz00_818,
												BgL_inputz00_789);
										}
									else
										{	/* Lalr/driver.scm 123 */
											if (((long) CINT(BgL_actz00_793) >= ((long) 0)))
												{	/* Lalr/driver.scm 139 */
													{	/* Lalr/driver.scm 140 */
														bool_t BgL_testz00_1720;

														{	/* Lalr/driver.scm 140 */
															long BgL_arg1927z00_830;

															{	/* Lalr/driver.scm 140 */
																int BgL_arg1929z00_831;

																BgL_arg1929z00_831 =
																	VECTOR_LENGTH(BgL_stackz00_787);
																BgL_arg1927z00_830 =
																	((long) (BgL_arg1929z00_831) - ((long) 4));
															}
															BgL_testz00_1720 =
																(
																(long) CINT(BgL_spz00_797) >=
																BgL_arg1927z00_830);
														}
														if (BgL_testz00_1720)
															{	/* Lalr/driver.scm 140 */
																BgL_stackz00_787 =
																	BGl_growzd2stackz12zc0zz__lalr_driverz00
																	(BgL_stackz00_787);
															}
														else
															{	/* Lalr/driver.scm 140 */
																BFALSE;
															}
													}
													{	/* Lalr/driver.scm 142 */
														long BgL_arg1931z00_833;

														BgL_arg1931z00_833 =
															((long) CINT(BgL_spz00_797) + ((long) 1));
														VECTOR_SET(BgL_stackz00_787,
															(int) (BgL_arg1931z00_833), BgL_attrz00_791);
													}
													{	/* Lalr/driver.scm 143 */
														long BgL_arg1932z00_834;

														BgL_arg1932z00_834 =
															((long) CINT(BgL_spz00_797) + ((long) 2));
														VECTOR_SET(BgL_stackz00_787,
															(int) (BgL_arg1932z00_834), BgL_actz00_793);
													}
													if (BgL_eofzf3zf3_794)
														{	/* Lalr/driver.scm 144 */
															BFALSE;
														}
													else
														{	/* Lalr/driver.scm 144 */
															BgL_inputz00_789 = BFALSE;
														}
													{	/* Lalr/driver.scm 146 */
														long BgL_arg1935z00_835;

														BgL_arg1935z00_835 =
															((long) CINT(BgL_spz00_797) + ((long) 2));
														{
															obj_t BgL_spz00_1738;

															BgL_spz00_1738 = BINT(BgL_arg1935z00_835);
															BgL_spz00_797 = BgL_spz00_1738;
															goto BgL_zc3anonymousza31897ze3z83_798;
														}
													}
												}
											else
												{	/* Lalr/driver.scm 150 */
													obj_t BgL_arg1937z00_836;

													{	/* Lalr/driver.scm 150 */
														long BgL_arg1938z00_837;

														BgL_arg1938z00_837 =
															NEG((long) CINT(BgL_actz00_793));
														BgL_arg1937z00_836 =
															PROCEDURE_ENTRY(BgL_reductionzd2functionzd2_1581)
															(BgL_reductionzd2functionzd2_1581,
															BINT(BgL_arg1938z00_837), BgL_stackz00_787,
															BgL_spz00_797, BEOA);
													}
													{
														obj_t BgL_spz00_1745;

														BgL_spz00_1745 = BgL_arg1937z00_836;
														BgL_spz00_797 = BgL_spz00_1745;
														goto BgL_zc3anonymousza31897ze3z83_798;
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_driverz00()
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_driverz00()
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_driverz00()
	{
		AN_OBJECT;
		{	/* Lalr/driver.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2224z00zz__lalr_driverz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2224z00zz__lalr_driverz00));
		}
	}

#ifdef __cplusplus
}
#endif
