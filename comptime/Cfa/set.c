/*===========================================================================*/
/*   (Cfa/set.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/set.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;


	static obj_t BGl_setzd2unionzd22z12z12zzcfa_setz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t);
	static obj_t BGl__setzd2ze3vectorz31zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_setz00();
	BGL_EXPORTED_DECL obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl__setzd2lengthzd2zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_setz00();
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__setzd2extendz12zc0zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setzf3zf3zzcfa_setz00(obj_t);
	static obj_t BGl__declarezd2setz12zc0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_setz00();
	BGL_EXPORTED_DECL obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_setz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_setz00();
	static obj_t BGl__setzd2forzd2eachz00zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl__makezd2setz12zc0zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_setz00();
	static obj_t BGl__setzd2ze3listz31zzcfa_setz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl__setzf3zf3zzcfa_setz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setz00();
	static obj_t BGl__setzd2unionz12zc0zzcfa_setz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2lengthzd2envz00zzcfa_setz00,
		BgL_bgl__setza7d2lengthza7d24899z00, BGl__setzd2lengthzd2zzcfa_setz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2ze3vectorzd2envze3zzcfa_setz00,
		BgL_bgl__setza7d2za7e3vector4900z00, BGl__setzd2ze3vectorz31zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2setz12zd2envz12zzcfa_setz00,
		BgL_bgl__declareza7d2setza714901z00, BGl__declarezd2setz12zc0zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setz12zd2envz12zzcfa_setz00,
		BgL_bgl__makeza7d2setza712za7c4902za7, BGl__makezd2setz12zc0zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4891z00zzcfa_setz00,
		BgL_bgl_string4891za700za7za7c4903za7, "make-set", 8);
	      DEFINE_STRING(BGl_string4892z00zzcfa_setz00,
		BgL_bgl_string4892za700za7za7c4904za7, "Not a meta-set", 14);
	      DEFINE_STRING(BGl_string4893z00zzcfa_setz00,
		BgL_bgl_string4893za700za7za7c4905za7, "set-union!", 10);
	      DEFINE_STRING(BGl_string4894z00zzcfa_setz00,
		BgL_bgl_string4894za700za7za7c4906za7, "Incompatible sets", 17);
	      DEFINE_STRING(BGl_string4895z00zzcfa_setz00,
		BgL_bgl_string4895za700za7za7c4907za7, "cfa_set", 7);
	      DEFINE_STRING(BGl_string4896z00zzcfa_setz00,
		BgL_bgl_string4896za700za7za7c4908za7, "large-set meta-set ", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2forzd2eachzd2envzd2zzcfa_setz00,
		BgL_bgl__setza7d2forza7d2eac4909z00, BGl__setzd2forzd2eachz00zzcfa_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2ze3listzd2envze3zzcfa_setz00,
		BgL_bgl__setza7d2za7e3listza734910za7, BGl__setzd2ze3listz31zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2extendz12zd2envz12zzcfa_setz00,
		BgL_bgl__setza7d2extendza7124911z00, BGl__setzd2extendz12zc0zzcfa_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzf3zd2envz21zzcfa_setz00,
		BgL_bgl__setza7f3za7f3za7za7cfa_4912z00, BGl__setzf3zf3zzcfa_setz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2unionz12zd2envz12zzcfa_setz00,
		BgL_bgl__setza7d2unionza712za74913za7, va_generic_entry,
		BGl__setzd2unionz12zc0zzcfa_setz00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long
		BgL_checksumz00_2137, char *BgL_fromz00_2138)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_setz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_setz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_setz00();
					BGl_cnstzd2initzd2zzcfa_setz00();
					BGl_importedzd2moduleszd2initz00zzcfa_setz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_set");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			{	/* Cfa/set.scm 15 */
				obj_t BgL_cportz00_2129;

				BgL_cportz00_2129 =
					bgl_open_input_string(BGl_string4896z00zzcfa_setz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2130;

					BgL_iz00_2130 = ((long) 1);
				BgL_loopz00_2131:
					if ((BgL_iz00_2130 == ((long) -1)))
						{	/* Cfa/set.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/set.scm 15 */
							{	/* Cfa/set.scm 15 */
								obj_t BgL_arg4898z00_2133;

								{	/* Cfa/set.scm 15 */

									{	/* Cfa/set.scm 15 */
										obj_t BgL_locationz00_2135;

										BgL_locationz00_2135 = BBOOL(((bool_t) 0));
										{	/* Cfa/set.scm 15 */

											BgL_arg4898z00_2133 =
												BGl_readz00zz__readerz00(BgL_cportz00_2129,
												BgL_locationz00_2135);
										}
									}
								}
								{	/* Cfa/set.scm 15 */
									int BgL_auxz00_2153;

									BgL_auxz00_2153 = (int) (BgL_iz00_2130);
									CNST_TABLE_SET(BgL_auxz00_2153, BgL_arg4898z00_2133);
							}}
							{	/* Cfa/set.scm 15 */
								int BgL_auxz00_2136;

								BgL_auxz00_2136 = (int) ((BgL_iz00_2130 - ((long) 1)));
								{
									long BgL_iz00_2158;

									BgL_iz00_2158 = (long) (BgL_auxz00_2136);
									BgL_iz00_2130 = BgL_iz00_2158;
									goto BgL_loopz00_2131;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}
	}



/* declare-set! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t
		BgL_tablez00_21)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 44 */
			{	/* Cfa/set.scm 45 */
				int BgL_cardinalz00_1096;

				BgL_cardinalz00_1096 = VECTOR_LENGTH(BgL_tablez00_21);
				{	/* Cfa/set.scm 45 */
					long BgL_quotientz00_1097;

					{	/* Cfa/set.scm 46 */
						long BgL_auxz00_2161;

						BgL_auxz00_2161 = (long) (BgL_cardinalz00_1096);
						BgL_quotientz00_1097 = (BgL_auxz00_2161 / ((long) 8));
					}
					{	/* Cfa/set.scm 46 */
						long BgL_remainderz00_1098;

						{	/* Cfa/set.scm 47 */
							long BgL_auxz00_2164;

							BgL_auxz00_2164 = (long) (BgL_cardinalz00_1096);
							BgL_remainderz00_1098 = (BgL_auxz00_2164 % ((long) 8));
						}
						{	/* Cfa/set.scm 47 */
							long BgL_siza7eza7_1099;

							if ((BgL_remainderz00_1098 == ((long) 0)))
								{	/* Cfa/set.scm 49 */
									BgL_siza7eza7_1099 = (BgL_quotientz00_1097 + ((long) 1));
								}
							else
								{	/* Cfa/set.scm 49 */
									BgL_siza7eza7_1099 = (BgL_quotientz00_1097 + ((long) 2));
								}
							{	/* Cfa/set.scm 48 */

								{
									long BgL_iz00_1101;

									long BgL_quotientz00_1102;

									long BgL_maskz00_1103;

									BgL_iz00_1101 = ((long) 0);
									BgL_quotientz00_1102 = ((long) 0);
									BgL_maskz00_1103 = ((long) 1);
								BgL_zc3anonymousza34701ze3z83_1104:
									if ((BgL_iz00_1101 == (long) (BgL_cardinalz00_1096)))
										{	/* Cfa/set.scm 58 */
											obj_t BgL_newz00_1843;

											BgL_newz00_1843 =
												create_struct(CNST_TABLE_REF(((long) 0)),
												(int) (((long) 2)));
											{	/* Cfa/set.scm 58 */
												obj_t BgL_auxz00_2179;

												int BgL_auxz00_2177;

												BgL_auxz00_2179 = BINT(BgL_siza7eza7_1099);
												BgL_auxz00_2177 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2177,
													BgL_auxz00_2179);
											}
											{	/* Cfa/set.scm 58 */
												int BgL_auxz00_2182;

												BgL_auxz00_2182 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2182,
													BgL_tablez00_21);
											}
											return BgL_newz00_1843;
										}
									else
										{	/* Cfa/set.scm 57 */
											if ((BgL_maskz00_1103 == ((long) 256)))
												{
													long BgL_maskz00_2189;

													long BgL_quotientz00_2187;

													BgL_quotientz00_2187 =
														(BgL_quotientz00_1102 + ((long) 1));
													BgL_maskz00_2189 = ((long) 1);
													BgL_maskz00_1103 = BgL_maskz00_2189;
													BgL_quotientz00_1102 = BgL_quotientz00_2187;
													goto BgL_zc3anonymousza34701ze3z83_1104;
												}
											else
												{	/* Cfa/set.scm 59 */
													{	/* Cfa/set.scm 62 */
														obj_t BgL_arg4706z00_1109;

														obj_t BgL_arg4707z00_1110;

														BgL_arg4706z00_1109 =
															VECTOR_REF(BgL_tablez00_21,
															(int) (BgL_iz00_1101));
														BgL_arg4707z00_1110 =
															MAKE_PAIR(BINT(BgL_quotientz00_1102),
															BINT(BgL_maskz00_1103));
														{
															BgL_nodezf2effectzf2_bglt BgL_auxz00_2195;

															BgL_auxz00_2195 =
																(BgL_nodezf2effectzf2_bglt)
																(BgL_arg4706z00_1109);
															((((BgL_nodezf2effectzf2_bglt)
																		CREF(BgL_auxz00_2195))->BgL_keyz00) =
																((obj_t) BgL_arg4707z00_1110), BUNSPEC);
													}}
													{
														long BgL_maskz00_2200;

														long BgL_iz00_2198;

														BgL_iz00_2198 = (BgL_iz00_1101 + ((long) 1));
														BgL_maskz00_2200 = (BgL_maskz00_1103 * ((long) 2));
														BgL_maskz00_1103 = BgL_maskz00_2200;
														BgL_iz00_1101 = BgL_iz00_2198;
														goto BgL_zc3anonymousza34701ze3z83_1104;
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



/* _declare-set! */
	obj_t BGl__declarezd2setz12zc0zzcfa_setz00(obj_t BgL_envz00_2106,
		obj_t BgL_tablez00_2107)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 44 */
			return BGl_declarezd2setz12zc0zzcfa_setz00(BgL_tablez00_2107);
		}
	}



/* make-set! */
	BGL_EXPORTED_DEF obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t
		BgL_metazd2setzd2_22)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 68 */
			{	/* Cfa/set.scm 70 */
				bool_t BgL_testz00_2203;

				if (STRUCTP(BgL_metazd2setzd2_22))
					{	/* Cfa/set.scm 70 */
						BgL_testz00_2203 =
							(STRUCT_KEY(BgL_metazd2setzd2_22) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Cfa/set.scm 70 */
						BgL_testz00_2203 = ((bool_t) 0);
					}
				if (BgL_testz00_2203)
					{	/* Cfa/set.scm 73 */
						obj_t BgL_arg4713z00_1116;

						{	/* Cfa/set.scm 73 */
							obj_t BgL_arg4714z00_1117;

							BgL_arg4714z00_1117 =
								STRUCT_REF(BgL_metazd2setzd2_22, (int) (((long) 1)));
							{	/* Cfa/set.scm 73 */
								obj_t BgL_list4715z00_1118;

								BgL_list4715z00_1118 =
									MAKE_PAIR(BCHAR(((unsigned char) '\000')), BNIL);
								{	/* Cfa/set.scm 73 */
									obj_t BgL_res4888z00_1884;

									{	/* Cfa/set.scm 73 */
										long BgL_kz00_1878;

										BgL_kz00_1878 = (long) CINT(BgL_arg4714z00_1117);
										{	/* Cfa/set.scm 73 */
											obj_t BgL_arg2006z00_1881;

											BgL_arg2006z00_1881 = CAR(BgL_list4715z00_1118);
											BgL_res4888z00_1884 =
												make_string(BgL_kz00_1878, CCHAR(BgL_arg2006z00_1881));
									}}
									BgL_arg4713z00_1116 = BgL_res4888z00_1884;
						}}}
						{	/* Cfa/set.scm 73 */
							obj_t BgL_metaz00_1886;

							BgL_metaz00_1886 = BgL_metazd2setzd2_22;
							{	/* Cfa/set.scm 73 */
								obj_t BgL_newz00_1887;

								BgL_newz00_1887 =
									create_struct(CNST_TABLE_REF(((long) 1)), (int) (((long) 2)));
								{	/* Cfa/set.scm 73 */
									int BgL_auxz00_2220;

									BgL_auxz00_2220 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1887, BgL_auxz00_2220,
										BgL_metaz00_1886);
								}
								{	/* Cfa/set.scm 73 */
									int BgL_auxz00_2223;

									BgL_auxz00_2223 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1887, BgL_auxz00_2223,
										BgL_arg4713z00_1116);
								}
								return BgL_newz00_1887;
							}
						}
					}
				else
					{	/* Cfa/set.scm 70 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string4891z00zzcfa_setz00, BGl_string4892z00zzcfa_setz00,
							BGl_shapez00zztools_shapez00(BgL_metazd2setzd2_22));
					}
			}
		}
	}



/* _make-set! */
	obj_t BGl__makezd2setz12zc0zzcfa_setz00(obj_t BgL_envz00_2108,
		obj_t BgL_metazd2setzd2_2109)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 68 */
			return BGl_makezd2setz12zc0zzcfa_setz00(BgL_metazd2setzd2_2109);
		}
	}



/* set? */
	BGL_EXPORTED_DEF bool_t BGl_setzf3zf3zzcfa_setz00(obj_t BgL_objz00_23)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 79 */
			if (STRUCTP(BgL_objz00_23))
				{	/* Cfa/set.scm 80 */
					return (STRUCT_KEY(BgL_objz00_23) == CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* Cfa/set.scm 80 */
					return ((bool_t) 0);
				}
		}
	}



/* _set? */
	obj_t BGl__setzf3zf3zzcfa_setz00(obj_t BgL_envz00_2110, obj_t BgL_objz00_2111)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 79 */
			return BBOOL(BGl_setzf3zf3zzcfa_setz00(BgL_objz00_2111));
		}
	}



/* set-extend! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t BgL_setz00_24,
		obj_t BgL_objz00_25)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 85 */
			{	/* Cfa/set.scm 86 */
				obj_t BgL_keyz00_1122;

				{
					BgL_nodezf2effectzf2_bglt BgL_auxz00_2236;

					BgL_auxz00_2236 = (BgL_nodezf2effectzf2_bglt) (BgL_objz00_25);
					BgL_keyz00_1122 =
						(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_2236))->BgL_keyz00);
				}
				{	/* Cfa/set.scm 86 */
					obj_t BgL_thezd2setzd2_1123;

					BgL_thezd2setzd2_1123 = STRUCT_REF(BgL_setz00_24, (int) (((long) 0)));
					{	/* Cfa/set.scm 87 */
						obj_t BgL_quotientz00_1124;

						BgL_quotientz00_1124 = CAR(BgL_keyz00_1122);
						{	/* Cfa/set.scm 88 */
							obj_t BgL_maskz00_1125;

							BgL_maskz00_1125 = CDR(BgL_keyz00_1122);
							{	/* Cfa/set.scm 89 */

								{	/* Cfa/set.scm 90 */
									unsigned char BgL_auxz00_2245;

									long BgL_auxz00_2243;

									BgL_auxz00_2245 =
										(
										((long) CINT(BgL_maskz00_1125)) |
										STRING_REF(BgL_thezd2setzd2_1123,
											(long) CINT(BgL_quotientz00_1124)));
									BgL_auxz00_2243 = (long) CINT(BgL_quotientz00_1124);
									STRING_SET(BgL_thezd2setzd2_1123, BgL_auxz00_2243,
										BgL_auxz00_2245);
								}
								return BUNSPEC;
							}
						}
					}
				}
			}
		}
	}



/* _set-extend! */
	obj_t BGl__setzd2extendz12zc0zzcfa_setz00(obj_t BgL_envz00_2112,
		obj_t BgL_setz00_2113, obj_t BgL_objz00_2114)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 85 */
			return
				BGl_setzd2extendz12zc0zzcfa_setz00(BgL_setz00_2113, BgL_objz00_2114);
		}
	}



/* set-union-2! */
	obj_t BGl_setzd2unionzd22z12z12zzcfa_setz00(obj_t BgL_dstz00_28,
		obj_t BgL_srcz00_29)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 112 */
			{

				{	/* Cfa/set.scm 129 */
					bool_t BgL_testz00_2253;

					if (STRUCTP(BgL_srcz00_29))
						{	/* Cfa/set.scm 129 */
							BgL_testz00_2253 =
								(STRUCT_KEY(BgL_srcz00_29) == CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* Cfa/set.scm 129 */
							BgL_testz00_2253 = ((bool_t) 0);
						}
					if (BgL_testz00_2253)
						{	/* Cfa/set.scm 129 */
							if (
								(STRING_LENGTH(STRUCT_REF(BgL_dstz00_28,
											(int) (((long) 0)))) ==
									STRING_LENGTH(STRUCT_REF(BgL_srcz00_29, (int) (((long) 0))))))
								{	/* Cfa/set.scm 134 */
									bool_t BgL_auxz00_2267;

									{	/* Cfa/set.scm 114 */
										obj_t BgL_thezd2dstzd2_1151;

										obj_t BgL_thezd2srczd2_1152;

										BgL_thezd2dstzd2_1151 =
											STRUCT_REF(BgL_dstz00_28, (int) (((long) 0)));
										BgL_thezd2srczd2_1152 =
											STRUCT_REF(BgL_srcz00_29, (int) (((long) 0)));
										{	/* Cfa/set.scm 116 */
											long BgL_g4677z00_1153;

											BgL_g4677z00_1153 =
												(
												(long) CINT(STRUCT_REF(STRUCT_REF(BgL_dstz00_28,
															(int) (((long) 1))),
														(int) (((long) 1)))) - ((long) 1));
											{
												long BgL_iz00_1155;

												bool_t BgL_resz00_1156;

												BgL_iz00_1155 = BgL_g4677z00_1153;
												BgL_resz00_1156 = ((bool_t) 0);
											BgL_zc3anonymousza34739ze3z83_1157:
												if ((BgL_iz00_1155 == ((long) -1)))
													{	/* Cfa/set.scm 119 */
														BgL_auxz00_2267 = BgL_resz00_1156;
													}
												else
													{	/* Cfa/set.scm 121 */
														unsigned char BgL_oldz00_1159;

														unsigned char BgL_newz00_1160;

														BgL_oldz00_1159 =
															STRING_REF(BgL_thezd2dstzd2_1151, BgL_iz00_1155);
														BgL_newz00_1160 =
															(STRING_REF(BgL_thezd2dstzd2_1151,
																BgL_iz00_1155) |
															STRING_REF(BgL_thezd2srczd2_1152, BgL_iz00_1155));
														if ((BgL_newz00_1160 == BgL_oldz00_1159))
															{
																long BgL_iz00_2286;

																BgL_iz00_2286 = (BgL_iz00_1155 - ((long) 1));
																BgL_iz00_1155 = BgL_iz00_2286;
																goto BgL_zc3anonymousza34739ze3z83_1157;
															}
														else
															{	/* Cfa/set.scm 124 */
																STRING_SET(BgL_thezd2dstzd2_1151, BgL_iz00_1155,
																	BgL_newz00_1160);
																{
																	bool_t BgL_resz00_2291;

																	long BgL_iz00_2289;

																	BgL_iz00_2289 = (BgL_iz00_1155 - ((long) 1));
																	BgL_resz00_2291 = ((bool_t) 1);
																	BgL_resz00_1156 = BgL_resz00_2291;
																	BgL_iz00_1155 = BgL_iz00_2289;
																	goto BgL_zc3anonymousza34739ze3z83_1157;
																}
															}
													}
											}
										}
									}
									return BBOOL(BgL_auxz00_2267);
								}
							else
								{	/* Cfa/set.scm 131 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string4893z00zzcfa_setz00,
										BGl_string4894z00zzcfa_setz00,
										BGl_shapez00zztools_shapez00(BgL_srcz00_29));
								}
						}
					else
						{	/* Cfa/set.scm 129 */
							return
								BGl_internalzd2errorzd2zztools_errorz00
								(BGl_string4893z00zzcfa_setz00, BGl_string4894z00zzcfa_setz00,
								BGl_shapez00zztools_shapez00(BgL_srcz00_29));
						}
				}
			}
		}
	}



/* set-union! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t BgL_dstz00_30,
		obj_t BgL_srcza2za2_31)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 142 */
			if (NULLP(BgL_srcza2za2_31))
				{	/* Cfa/set.scm 144 */
					return BgL_dstz00_30;
				}
			else
				{	/* Cfa/set.scm 144 */
					if (NULLP(CDR(BgL_srcza2za2_31)))
						{	/* Cfa/set.scm 146 */
							return
								BGl_setzd2unionzd22z12z12zzcfa_setz00(BgL_dstz00_30,
								CAR(BgL_srcza2za2_31));
						}
					else
						{
							obj_t BgL_srcza2za2_1175;

							obj_t BgL_resz00_1176;

							BgL_srcza2za2_1175 = BgL_srcza2za2_31;
							BgL_resz00_1176 = BFALSE;
						BgL_zc3anonymousza34752ze3z83_1177:
							if (NULLP(BgL_srcza2za2_1175))
								{	/* Cfa/set.scm 151 */
									return BgL_resz00_1176;
								}
							else
								{	/* Cfa/set.scm 153 */
									obj_t BgL_arg4754z00_1179;

									obj_t BgL_arg4755z00_1180;

									BgL_arg4754z00_1179 = CDR(BgL_srcza2za2_1175);
									{	/* Cfa/set.scm 154 */
										obj_t BgL__ortest_4678z00_1181;

										BgL__ortest_4678z00_1181 =
											BGl_setzd2unionzd22z12z12zzcfa_setz00(BgL_dstz00_30,
											CAR(BgL_srcza2za2_1175));
										if (CBOOL(BgL__ortest_4678z00_1181))
											{	/* Cfa/set.scm 154 */
												BgL_arg4755z00_1180 = BgL__ortest_4678z00_1181;
											}
										else
											{	/* Cfa/set.scm 154 */
												BgL_arg4755z00_1180 = BgL_resz00_1176;
											}
									}
									{
										obj_t BgL_resz00_2312;

										obj_t BgL_srcza2za2_2311;

										BgL_srcza2za2_2311 = BgL_arg4754z00_1179;
										BgL_resz00_2312 = BgL_arg4755z00_1180;
										BgL_resz00_1176 = BgL_resz00_2312;
										BgL_srcza2za2_1175 = BgL_srcza2za2_2311;
										goto BgL_zc3anonymousza34752ze3z83_1177;
									}
								}
						}
				}
		}
	}



/* _set-union! */
	obj_t BGl__setzd2unionz12zc0zzcfa_setz00(obj_t BgL_envz00_2115,
		obj_t BgL_dstz00_2116, obj_t BgL_srcza2za2_2117)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 142 */
			return
				BGl_setzd2unionz12zc0zzcfa_setz00(BgL_dstz00_2116, BgL_srcza2za2_2117);
		}
	}



/* set-for-each */
	BGL_EXPORTED_DEF obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t
		BgL_procz00_32, obj_t BgL_setz00_33)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 159 */
			{

				{	/* Cfa/set.scm 161 */
					obj_t BgL_metaz00_1187;

					BgL_metaz00_1187 = STRUCT_REF(BgL_setz00_33, (int) (((long) 1)));
					{	/* Cfa/set.scm 161 */
						obj_t BgL_tablez00_1188;

						BgL_tablez00_1188 =
							STRUCT_REF(BgL_metaz00_1187, (int) (((long) 0)));
						{	/* Cfa/set.scm 162 */

							{	/* Cfa/set.scm 163 */
								long BgL_g4679z00_1189;

								{	/* Cfa/set.scm 163 */
									int BgL_arg4766z00_1200;

									BgL_arg4766z00_1200 = VECTOR_LENGTH(BgL_tablez00_1188);
									BgL_g4679z00_1189 =
										((long) (BgL_arg4766z00_1200) - ((long) 1));
								}
								{
									long BgL_iz00_1191;

									BgL_iz00_1191 = BgL_g4679z00_1189;
								BgL_zc3anonymousza34759ze3z83_1192:
									if ((BgL_iz00_1191 == ((long) -1)))
										{	/* Cfa/set.scm 165 */
											return BUNSPEC;
										}
									else
										{	/* Cfa/set.scm 167 */
											bool_t BgL_testz00_2323;

											{	/* Cfa/set.scm 167 */
												obj_t BgL_arg4765z00_1198;

												BgL_arg4765z00_1198 =
													VECTOR_REF(BgL_tablez00_1188, (int) (BgL_iz00_1191));
												{	/* Cfa/set.scm 167 */
													obj_t BgL_keyz00_2014;

													{
														BgL_nodezf2effectzf2_bglt BgL_auxz00_2326;

														BgL_auxz00_2326 =
															(BgL_nodezf2effectzf2_bglt) (BgL_arg4765z00_1198);
														BgL_keyz00_2014 =
															(((BgL_nodezf2effectzf2_bglt)
																CREF(BgL_auxz00_2326))->BgL_keyz00);
													}
													{	/* Cfa/set.scm 167 */

														{	/* Cfa/set.scm 167 */
															long BgL_auxz00_2329;

															{	/* Cfa/set.scm 167 */
																long BgL_auxz00_2333;

																long BgL_auxz00_2330;

																{	/* Cfa/set.scm 167 */
																	unsigned char BgL_auxz00_2334;

																	{	/* Cfa/set.scm 167 */
																		obj_t BgL_stringz00_2029;

																		BgL_stringz00_2029 =
																			STRUCT_REF(BgL_setz00_33,
																			(int) (((long) 0)));
																		{	/* Cfa/set.scm 167 */
																			long BgL_auxz00_2337;

																			{	/* Cfa/set.scm 167 */
																				obj_t BgL_pairz00_2027;

																				BgL_pairz00_2027 = BgL_keyz00_2014;
																				BgL_auxz00_2337 =
																					(long) CINT(CAR(BgL_pairz00_2027));
																			}
																			BgL_auxz00_2334 =
																				STRING_REF(BgL_stringz00_2029,
																				BgL_auxz00_2337);
																	}}
																	BgL_auxz00_2333 = (BgL_auxz00_2334);
																}
																{	/* Cfa/set.scm 167 */
																	obj_t BgL_pairz00_2028;

																	BgL_pairz00_2028 = BgL_keyz00_2014;
																	BgL_auxz00_2330 =
																		(long) CINT(CDR(BgL_pairz00_2028));
																}
																BgL_auxz00_2329 =
																	(BgL_auxz00_2330 & BgL_auxz00_2333);
															}
															BgL_testz00_2323 = (BgL_auxz00_2329 > ((long) 0));
											}}}}
											if (BgL_testz00_2323)
												{	/* Cfa/set.scm 167 */
													{	/* Cfa/set.scm 168 */
														obj_t BgL_arg4762z00_1195;

														BgL_arg4762z00_1195 =
															VECTOR_REF(BgL_tablez00_1188,
															(int) (BgL_iz00_1191));
														PROCEDURE_ENTRY(BgL_procz00_32) (BgL_procz00_32,
															BgL_arg4762z00_1195, BEOA);
													}
													{
														long BgL_iz00_2348;

														BgL_iz00_2348 = (BgL_iz00_1191 - ((long) 1));
														BgL_iz00_1191 = BgL_iz00_2348;
														goto BgL_zc3anonymousza34759ze3z83_1192;
													}
												}
											else
												{
													long BgL_iz00_2350;

													BgL_iz00_2350 = (BgL_iz00_1191 - ((long) 1));
													BgL_iz00_1191 = BgL_iz00_2350;
													goto BgL_zc3anonymousza34759ze3z83_1192;
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



/* _set-for-each */
	obj_t BGl__setzd2forzd2eachz00zzcfa_setz00(obj_t BgL_envz00_2118,
		obj_t BgL_procz00_2119, obj_t BgL_setz00_2120)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 159 */
			return
				BGl_setzd2forzd2eachz00zzcfa_setz00(BgL_procz00_2119, BgL_setz00_2120);
		}
	}



/* set-length */
	BGL_EXPORTED_DEF obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t BgL_setz00_34)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 177 */
			{

				{	/* Cfa/set.scm 193 */
					long BgL_auxz00_2353;

					{	/* Cfa/set.scm 179 */
						obj_t BgL_thezd2setzd2_1205;

						BgL_thezd2setzd2_1205 =
							STRUCT_REF(BgL_setz00_34, (int) (((long) 0)));
						{	/* Cfa/set.scm 179 */
							long BgL_thezd2lenzd2_1206;

							BgL_thezd2lenzd2_1206 = STRING_LENGTH(BgL_thezd2setzd2_1205);
							{	/* Cfa/set.scm 180 */

								{
									long BgL_offsetz00_1208;

									long BgL_numz00_1209;

									BgL_offsetz00_1208 = ((long) 0);
									BgL_numz00_1209 = ((long) 0);
								BgL_zc3anonymousza34769ze3z83_1210:
									if ((BgL_offsetz00_1208 == BgL_thezd2lenzd2_1206))
										{	/* Cfa/set.scm 183 */
											BgL_auxz00_2353 = BgL_numz00_1209;
										}
									else
										{
											long BgL_charz00_1214;

											long BgL_numz00_1215;

											BgL_charz00_1214 =
												(STRING_REF(BgL_thezd2setzd2_1205, BgL_offsetz00_1208));
											BgL_numz00_1215 = BgL_numz00_1209;
										BgL_zc3anonymousza34771ze3z83_1216:
											if ((BgL_charz00_1214 == ((long) 0)))
												{
													long BgL_numz00_2363;

													long BgL_offsetz00_2361;

													BgL_offsetz00_2361 =
														(((long) 1) + BgL_offsetz00_1208);
													BgL_numz00_2363 = BgL_numz00_1215;
													BgL_numz00_1209 = BgL_numz00_2363;
													BgL_offsetz00_1208 = BgL_offsetz00_2361;
													goto BgL_zc3anonymousza34769ze3z83_1210;
												}
											else
												{
													long BgL_numz00_2367;

													long BgL_charz00_2364;

													BgL_charz00_2364 =
														(BgL_charz00_1214 >> (int) (((long) 1)));
													BgL_numz00_2367 =
														(BgL_numz00_1215 + (BgL_charz00_1214 & ((long) 1)));
													BgL_numz00_1215 = BgL_numz00_2367;
													BgL_charz00_1214 = BgL_charz00_2364;
													goto BgL_zc3anonymousza34771ze3z83_1216;
												}
										}
								}
							}
						}
					}
					return BINT(BgL_auxz00_2353);
				}
			}
		}
	}



/* _set-length */
	obj_t BGl__setzd2lengthzd2zzcfa_setz00(obj_t BgL_envz00_2121,
		obj_t BgL_setz00_2122)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 177 */
			return BGl_setzd2lengthzd2zzcfa_setz00(BgL_setz00_2122);
		}
	}



/* set->list */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t BgL_setz00_35)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 198 */
			{	/* Cfa/set.scm 199 */
				obj_t BgL_metaz00_1226;

				BgL_metaz00_1226 = STRUCT_REF(BgL_setz00_35, (int) (((long) 1)));
				{	/* Cfa/set.scm 200 */
					obj_t BgL_tablez00_1227;

					BgL_tablez00_1227 = STRUCT_REF(BgL_metaz00_1226, (int) (((long) 0)));
					{	/* Cfa/set.scm 200 */
						int BgL_siza7eza7_1228;

						BgL_siza7eza7_1228 = VECTOR_LENGTH(BgL_tablez00_1227);
						{	/* Cfa/set.scm 201 */

							{
								long BgL_iz00_1231;

								obj_t BgL_lz00_1232;

								BgL_iz00_1231 = ((long) 0);
								BgL_lz00_1232 = BNIL;
							BgL_zc3anonymousza34778ze3z83_1233:
								if ((BgL_iz00_1231 == (long) (BgL_siza7eza7_1228)))
									{	/* Cfa/set.scm 205 */
										return BgL_lz00_1232;
									}
								else
									{	/* Cfa/set.scm 207 */
										bool_t BgL_testz00_2382;

										{	/* Cfa/set.scm 207 */
											obj_t BgL_arg4786z00_1240;

											BgL_arg4786z00_1240 =
												VECTOR_REF(BgL_tablez00_1227, (int) (BgL_iz00_1231));
											{	/* Cfa/set.scm 207 */
												obj_t BgL_keyz00_2074;

												{
													BgL_nodezf2effectzf2_bglt BgL_auxz00_2385;

													BgL_auxz00_2385 =
														(BgL_nodezf2effectzf2_bglt) (BgL_arg4786z00_1240);
													BgL_keyz00_2074 =
														(((BgL_nodezf2effectzf2_bglt)
															CREF(BgL_auxz00_2385))->BgL_keyz00);
												}
												{	/* Cfa/set.scm 207 */

													{	/* Cfa/set.scm 207 */
														long BgL_auxz00_2388;

														{	/* Cfa/set.scm 207 */
															long BgL_auxz00_2392;

															long BgL_auxz00_2389;

															{	/* Cfa/set.scm 207 */
																unsigned char BgL_auxz00_2393;

																{	/* Cfa/set.scm 207 */
																	obj_t BgL_stringz00_2089;

																	BgL_stringz00_2089 =
																		STRUCT_REF(BgL_setz00_35,
																		(int) (((long) 0)));
																	{	/* Cfa/set.scm 207 */
																		long BgL_auxz00_2396;

																		{	/* Cfa/set.scm 207 */
																			obj_t BgL_pairz00_2087;

																			BgL_pairz00_2087 = BgL_keyz00_2074;
																			BgL_auxz00_2396 =
																				(long) CINT(CAR(BgL_pairz00_2087));
																		}
																		BgL_auxz00_2393 =
																			STRING_REF(BgL_stringz00_2089,
																			BgL_auxz00_2396);
																}}
																BgL_auxz00_2392 = (BgL_auxz00_2393);
															}
															{	/* Cfa/set.scm 207 */
																obj_t BgL_pairz00_2088;

																BgL_pairz00_2088 = BgL_keyz00_2074;
																BgL_auxz00_2389 =
																	(long) CINT(CDR(BgL_pairz00_2088));
															}
															BgL_auxz00_2388 =
																(BgL_auxz00_2389 & BgL_auxz00_2392);
														}
														BgL_testz00_2382 = (BgL_auxz00_2388 > ((long) 0));
										}}}}
										if (BgL_testz00_2382)
											{	/* Cfa/set.scm 208 */
												long BgL_arg4782z00_1236;

												obj_t BgL_arg4783z00_1237;

												BgL_arg4782z00_1236 = (BgL_iz00_1231 + ((long) 1));
												BgL_arg4783z00_1237 =
													MAKE_PAIR(VECTOR_REF(BgL_tablez00_1227,
														(int) (BgL_iz00_1231)), BgL_lz00_1232);
												{
													obj_t BgL_lz00_2408;

													long BgL_iz00_2407;

													BgL_iz00_2407 = BgL_arg4782z00_1236;
													BgL_lz00_2408 = BgL_arg4783z00_1237;
													BgL_lz00_1232 = BgL_lz00_2408;
													BgL_iz00_1231 = BgL_iz00_2407;
													goto BgL_zc3anonymousza34778ze3z83_1233;
												}
											}
										else
											{
												long BgL_iz00_2409;

												BgL_iz00_2409 = (BgL_iz00_1231 + ((long) 1));
												BgL_iz00_1231 = BgL_iz00_2409;
												goto BgL_zc3anonymousza34778ze3z83_1233;
											}
									}
							}
						}
					}
				}
			}
		}
	}



/* _set->list */
	obj_t BGl__setzd2ze3listz31zzcfa_setz00(obj_t BgL_envz00_2123,
		obj_t BgL_setz00_2124)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 198 */
			return BGl_setzd2ze3listz31zzcfa_setz00(BgL_setz00_2124);
		}
	}



/* set->vector */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t BgL_setz00_36)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 215 */
			return
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_setzd2ze3listz31zzcfa_setz00(BgL_setz00_36));
		}
	}



/* _set->vector */
	obj_t BGl__setzd2ze3vectorz31zzcfa_setz00(obj_t BgL_envz00_2125,
		obj_t BgL_setz00_2126)
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 215 */
			return BGl_setzd2ze3vectorz31zzcfa_setz00(BgL_setz00_2126);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_setz00()
	{
		AN_OBJECT;
		{	/* Cfa/set.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4895z00zzcfa_setz00));
		}
	}

#ifdef __cplusplus
}
#endif
