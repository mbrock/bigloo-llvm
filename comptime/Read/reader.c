/*===========================================================================*/
/*   (Read/reader.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/reader.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_readerz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_readerz00();
	static obj_t BGl_getzd2compilerzd2readerz00zzread_readerz00();
	static obj_t BGl_cnstzd2initzd2zzread_readerz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_readerz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t);
	static obj_t BGl__compilerzd2readzd2zzread_readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_IMPORT obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__compilerzd2readzd2srcz00zzread_readerz00(obj_t, obj_t);
	extern obj_t BGl_za2readerza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_to_obj(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_readerz00();
	static obj_t BGl_methodzd2initzd2zzread_readerz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2readzd2envz00zzread_readerz00,
		BgL_bgl__compilerza7d2read1523za7, va_generic_entry,
		BGl__compilerzd2readzd2zzread_readerz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string1517z00zzread_readerz00,
		BgL_bgl_string1517za700za7za7r1524za7, "", 0);
	      DEFINE_STRING(BGl_string1518z00zzread_readerz00,
		BgL_bgl_string1518za700za7za7r1525za7, "Illegal intern value", 20);
	      DEFINE_STRING(BGl_string1520z00zzread_readerz00,
		BgL_bgl_string1520za700za7za7r1526za7, "intern-src intern ", 18);
	      DEFINE_STRING(BGl_string1519z00zzread_readerz00,
		BgL_bgl_string1519za700za7za7r1527za7, "read_reader", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compilerzd2readzd2srczd2envzd2zzread_readerz00,
		BgL_bgl__compilerza7d2read1528za7, va_generic_entry,
		BGl__compilerzd2readzd2srcz00zzread_readerz00, BUNSPEC, -1);
	BGL_IMPORT obj_t BGl_readzd2envzd2zz__readerz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long
		BgL_checksumz00_118, char *BgL_fromz00_119)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_readerz00))
				{
					BGl_requirezd2initializa7ationz75zzread_readerz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_readerz00();
					BGl_cnstzd2initzd2zzread_readerz00();
					BGl_importedzd2moduleszd2initz00zzread_readerz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0), "read_reader");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 16 */
			{	/* Read/reader.scm 16 */
				obj_t BgL_cportz00_110;

				BgL_cportz00_110 =
					bgl_open_input_string(BGl_string1520z00zzread_readerz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_111;

					BgL_iz00_111 = ((long) 1);
				BgL_loopz00_112:
					if ((BgL_iz00_111 == ((long) -1)))
						{	/* Read/reader.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Read/reader.scm 16 */
							{	/* Read/reader.scm 16 */
								obj_t BgL_arg1522z00_114;

								{	/* Read/reader.scm 16 */

									{	/* Read/reader.scm 16 */
										obj_t BgL_locationz00_116;

										BgL_locationz00_116 = BBOOL(((bool_t) 0));
										{	/* Read/reader.scm 16 */

											BgL_arg1522z00_114 =
												BGl_readz00zz__readerz00(BgL_cportz00_110,
												BgL_locationz00_116);
										}
									}
								}
								{	/* Read/reader.scm 16 */
									int BgL_auxz00_136;

									BgL_auxz00_136 = (int) (BgL_iz00_111);
									CNST_TABLE_SET(BgL_auxz00_136, BgL_arg1522z00_114);
							}}
							{	/* Read/reader.scm 16 */
								int BgL_auxz00_117;

								BgL_auxz00_117 = (int) ((BgL_iz00_111 - ((long) 1)));
								{
									long BgL_iz00_141;

									BgL_iz00_141 = (long) (BgL_auxz00_117);
									BgL_iz00_111 = BgL_iz00_141;
									goto BgL_loopz00_112;
								}
							}
						}
				}
			}
		}
	}



/* get-compiler-reader */
	obj_t BGl_getzd2compilerzd2readerz00zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 24 */
			{	/* Read/reader.scm 25 */
				obj_t BgL__ortest_1508z00_88;

				BgL__ortest_1508z00_88 = BGl_bigloozd2loadzd2readerz00zz__paramz00();
				if (CBOOL(BgL__ortest_1508z00_88))
					{	/* Read/reader.scm 25 */
						return BgL__ortest_1508z00_88;
					}
				else
					{	/* Read/reader.scm 25 */
						return BGl_readzd2envzd2zz__readerz00;
					}
			}
		}
	}



/* compiler-read */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t
		BgL_argsz00_1)
	{
		AN_OBJECT;
		{	/* Read/reader.scm 30 */
			{	/* Read/reader.scm 31 */
				obj_t BgL_readz00_89;

				BgL_readz00_89 = BGl_getzd2compilerzd2readerz00zzread_readerz00();
				{	/* Read/reader.scm 31 */
					obj_t BgL_valuez00_90;

					BgL_valuez00_90 = apply(BgL_readz00_89, BgL_argsz00_1);
					{	/* Read/reader.scm 32 */

						if (
							(BGl_za2readerza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 0))))
							{	/* Read/reader.scm 33 */
								if (EOF_OBJECTP(BgL_valuez00_90))
									{	/* Read/reader.scm 35 */
										return BgL_valuez00_90;
									}
								else
									{	/* Read/reader.scm 35 */
										if (STRINGP(BgL_valuez00_90))
											{	/* Read/reader.scm 37 */
												return string_to_obj(BgL_valuez00_90);
											}
										else
											{	/* Read/reader.scm 37 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string1517z00zzread_readerz00,
													BGl_string1518z00zzread_readerz00, BgL_valuez00_90);
											}
									}
							}
						else
							{	/* Read/reader.scm 33 */
								return BgL_valuez00_90;
							}
					}
				}
			}
		}
	}



/* _compiler-read */
	obj_t BGl__compilerzd2readzd2zzread_readerz00(obj_t BgL_envz00_106,
		obj_t BgL_argsz00_107)
	{
		AN_OBJECT;
		{	/* Read/reader.scm 30 */
			return BGl_compilerzd2readzd2zzread_readerz00(BgL_argsz00_107);
		}
	}



/* compiler-read-src */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t
		BgL_argsz00_2)
	{
		AN_OBJECT;
		{	/* Read/reader.scm 46 */
			{	/* Read/reader.scm 47 */
				obj_t BgL_readz00_94;

				BgL_readz00_94 = BGl_getzd2compilerzd2readerz00zzread_readerz00();
				{	/* Read/reader.scm 47 */
					obj_t BgL_valuez00_95;

					BgL_valuez00_95 = apply(BgL_readz00_94, BgL_argsz00_2);
					{	/* Read/reader.scm 48 */

						if (
							(BGl_za2readerza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 1))))
							{	/* Read/reader.scm 49 */
								if (EOF_OBJECTP(BgL_valuez00_95))
									{	/* Read/reader.scm 51 */
										return BgL_valuez00_95;
									}
								else
									{	/* Read/reader.scm 51 */
										if (STRINGP(BgL_valuez00_95))
											{	/* Read/reader.scm 53 */
												return string_to_obj(BgL_valuez00_95);
											}
										else
											{	/* Read/reader.scm 53 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string1517z00zzread_readerz00,
													BGl_string1518z00zzread_readerz00, BgL_valuez00_95);
											}
									}
							}
						else
							{	/* Read/reader.scm 49 */
								return BgL_valuez00_95;
							}
					}
				}
			}
		}
	}



/* _compiler-read-src */
	obj_t BGl__compilerzd2readzd2srcz00zzread_readerz00(obj_t BgL_envz00_108,
		obj_t BgL_argsz00_109)
	{
		AN_OBJECT;
		{	/* Read/reader.scm 46 */
			return BGl_compilerzd2readzd2srcz00zzread_readerz00(BgL_argsz00_109);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_readerz00()
	{
		AN_OBJECT;
		{	/* Read/reader.scm 16 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1519z00zzread_readerz00));
		}
	}

#ifdef __cplusplus
}
#endif
