/*===========================================================================*/
/*   (Tools/dsssl.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/dsssl.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t,
		obj_t);
	static bool_t BGl_dssslzd2onlyzf3z21zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl__dssslzd2keyszd2zztools_dssslz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl__dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__dssslzd2optionalszd2zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_dssslz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	static obj_t BGl__dssslzd2prototypezf3z21zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl__dssslzd2formalszd2zztools_dssslz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t);
	static obj_t BGl_genericzd2initzd2zztools_dssslz00();
	static obj_t BGl__dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t,
		obj_t);
	static obj_t BGl__dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl__dssslzd2arityzd2zztools_dssslz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_dssslz00();
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static obj_t BGl_dssslzd2argumentszd2zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_dssslz00();
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t);
	static obj_t BGl__dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	static obj_t BGl__dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t);
	static obj_t BGl__dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_IMPORT bool_t string_lt(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static obj_t BGl_zc3anonymousza31693ze3z83zztools_dssslz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_dssslz00();
	static obj_t BGl__dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zztools_dssslz00();
	static obj_t BGl__dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2keyzd2argszd2sortzd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2keyza7d2a1716z00,
		BGl__dssslzd2keyzd2argszd2sortzd2zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2defaultzd2formalzd2envzd2zztools_dssslz00,
		BgL_bgl__dssslza7d2default1717za7,
		BGl__dssslzd2defaultzd2formalz00zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2findzd2firstzd2formalzd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2findza7d21718z00,
		BGl__dssslzd2findzd2firstzd2formalzd2zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2defaultedzd2formalzf3zd2envz21zztools_dssslz00,
		BgL_bgl__dssslza7d2default1719za7,
		BGl__dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1711z00zztools_dssslz00,
		BgL_bgl_za7c3anonymousza7a311720z00,
		BGl_zc3anonymousza31693ze3z83zztools_dssslz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2keyszd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2keysza7d21721z00, BGl__dssslzd2keyszd2zztools_dssslz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1710z00zztools_dssslz00,
		BgL_bgl_string1710za700za7za7t1722za7, "Illegal dsssl formal list", 25);
	      DEFINE_STRING(BGl_string1709z00zztools_dssslz00,
		BgL_bgl_string1709za700za7za7t1723za7, "dsssl-find-first-formal", 23);
	      DEFINE_STRING(BGl_string1712z00zztools_dssslz00,
		BgL_bgl_string1712za700za7za7t1724za7, "tools_dsssl", 11);
	      DEFINE_STRING(BGl_string1713z00zztools_dssslz00,
		BgL_bgl_string1713za700za7za7t1725za7, "(#!optional #!key) ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2checkzd2prototypezf3zd2envz21zztools_dssslz00,
		BgL_bgl__dssslza7d2checkza7d1726z00,
		BGl__dssslzd2checkzd2prototypezf3zf3zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2argsza2zd2ze3argszd2listzd2envz41zztools_dssslz00,
		BgL_bgl__dssslza7d2argsza7a21727z00,
		BGl__dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2optionalszd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2optiona1728za7,
		BGl__dssslzd2optionalszd2zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2formalszd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2formals1729za7, BGl__dssslzd2formalszd2zztools_dssslz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2optionalzd2onlyzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl__dssslza7d2optiona1730za7,
		BGl__dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2beforezd2dssslzd2envzd2zztools_dssslz00,
		BgL_bgl__dssslza7d2beforeza71731z00,
		BGl__dssslzd2beforezd2dssslz00zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2keyzd2onlyzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl__dssslza7d2keyza7d2o1732z00,
		BGl__dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2arityzd2envz00zztools_dssslz00,
		BgL_bgl__dssslza7d2arityza7d1733z00, BGl__dssslzd2arityzd2zztools_dssslz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl__dssslza7d2prototy1734za7,
		BGl__dssslzd2prototypezf3z21zztools_dssslz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long
		BgL_checksumz00_490, char *BgL_fromz00_491)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_dssslz00))
				{
					BGl_requirezd2initializa7ationz75zztools_dssslz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_dssslz00();
					BGl_cnstzd2initzd2zztools_dssslz00();
					BGl_importedzd2moduleszd2initz00zztools_dssslz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_dssslz00()
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 15 */
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tools_dsssl");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_dssslz00()
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 15 */
			{	/* Tools/dsssl.scm 15 */
				obj_t BgL_cportz00_481;

				BgL_cportz00_481 =
					bgl_open_input_string(BGl_string1713z00zztools_dssslz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_482;

					BgL_iz00_482 = ((long) 0);
				BgL_loopz00_483:
					if ((BgL_iz00_482 == ((long) -1)))
						{	/* Tools/dsssl.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/dsssl.scm 15 */
							{	/* Tools/dsssl.scm 15 */
								obj_t BgL_arg1715z00_485;

								{	/* Tools/dsssl.scm 15 */

									{	/* Tools/dsssl.scm 15 */
										obj_t BgL_locationz00_487;

										BgL_locationz00_487 = BBOOL(((bool_t) 0));
										{	/* Tools/dsssl.scm 15 */

											BgL_arg1715z00_485 =
												BGl_readz00zz__readerz00(BgL_cportz00_481,
												BgL_locationz00_487);
										}
									}
								}
								{	/* Tools/dsssl.scm 15 */
									int BgL_auxz00_510;

									BgL_auxz00_510 = (int) (BgL_iz00_482);
									CNST_TABLE_SET(BgL_auxz00_510, BgL_arg1715z00_485);
							}}
							{	/* Tools/dsssl.scm 15 */
								int BgL_auxz00_488;

								BgL_auxz00_488 = (int) ((BgL_iz00_482 - ((long) 1)));
								{
									long BgL_iz00_515;

									BgL_iz00_515 = (long) (BgL_auxz00_488);
									BgL_iz00_482 = BgL_iz00_515;
									goto BgL_loopz00_483;
								}
							}
						}
				}
			}
		}
	}



/* dsssl-prototype? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_1)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 37 */
			{
				obj_t BgL_argsz00_107;

				BgL_argsz00_107 = BgL_argsz00_1;
			BgL_zc3anonymousza31515ze3z83_108:
				if (NULLP(BgL_argsz00_107))
					{	/* Tools/dsssl.scm 40 */
						return ((bool_t) 0);
					}
				else
					{	/* Tools/dsssl.scm 40 */
						if (PAIRP(BgL_argsz00_107))
							{	/* Tools/dsssl.scm 42 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_107)))
									{	/* Tools/dsssl.scm 44 */
										return ((bool_t) 1);
									}
								else
									{
										obj_t BgL_argsz00_524;

										BgL_argsz00_524 = CDR(BgL_argsz00_107);
										BgL_argsz00_107 = BgL_argsz00_524;
										goto BgL_zc3anonymousza31515ze3z83_108;
									}
							}
						else
							{	/* Tools/dsssl.scm 42 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* _dsssl-prototype? */
	obj_t BGl__dssslzd2prototypezf3z21zztools_dssslz00(obj_t BgL_envz00_448,
		obj_t BgL_argsz00_449)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 37 */
			return
				BBOOL(BGl_dssslzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_449));
		}
	}



/* dsssl-only? */
	bool_t BGl_dssslzd2onlyzf3z21zztools_dssslz00(obj_t BgL_dssslz00_2,
		obj_t BgL_argsz00_3)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 52 */
			{
				obj_t BgL_argsz00_116;

				bool_t BgL_rz00_117;

				BgL_argsz00_116 = BgL_argsz00_3;
				BgL_rz00_117 = ((bool_t) 0);
			BgL_zc3anonymousza31521ze3z83_118:
				if (NULLP(BgL_argsz00_116))
					{	/* Tools/dsssl.scm 56 */
						return BgL_rz00_117;
					}
				else
					{	/* Tools/dsssl.scm 56 */
						if (PAIRP(BgL_argsz00_116))
							{	/* Tools/dsssl.scm 58 */
								if ((CAR(BgL_argsz00_116) == BgL_dssslz00_2))
									{
										bool_t BgL_rz00_537;

										obj_t BgL_argsz00_535;

										BgL_argsz00_535 = CDR(BgL_argsz00_116);
										BgL_rz00_537 = ((bool_t) 1);
										BgL_rz00_117 = BgL_rz00_537;
										BgL_argsz00_116 = BgL_argsz00_535;
										goto BgL_zc3anonymousza31521ze3z83_118;
									}
								else
									{	/* Tools/dsssl.scm 60 */
										if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
												(BgL_argsz00_116)))
											{	/* Tools/dsssl.scm 62 */
												return ((bool_t) 0);
											}
										else
											{
												obj_t BgL_argsz00_541;

												BgL_argsz00_541 = CDR(BgL_argsz00_116);
												BgL_argsz00_116 = BgL_argsz00_541;
												goto BgL_zc3anonymousza31521ze3z83_118;
											}
									}
							}
						else
							{	/* Tools/dsssl.scm 58 */
								return BgL_rz00_117;
							}
					}
			}
		}
	}



/* dsssl-optional-only-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_4)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 72 */
			return BGl_dssslzd2onlyzf3z21zztools_dssslz00(BCNST(258), BgL_argsz00_4);
		}
	}



/* _dsssl-optional-only-prototype? */
	obj_t BGl__dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_envz00_450, obj_t BgL_argsz00_451)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 72 */
			return
				BBOOL(BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_451));
		}
	}



/* dsssl-key-only-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 78 */
			return BGl_dssslzd2onlyzf3z21zztools_dssslz00(BCNST(262), BgL_argsz00_5);
		}
	}



/* _dsssl-key-only-prototype? */
	obj_t BGl__dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_envz00_452, obj_t BgL_argsz00_453)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 78 */
			return
				BBOOL(BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_453));
		}
	}



/* dsssl-check-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t BgL_argsz00_6)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 88 */
			{
				obj_t BgL_argsz00_129;

				BgL_argsz00_129 = BgL_argsz00_6;
			BgL_zc3anonymousza31531ze3z83_130:
				if (NULLP(BgL_argsz00_129))
					{	/* Tools/dsssl.scm 91 */
						return ((bool_t) 1);
					}
				else
					{	/* Tools/dsssl.scm 91 */
						if (PAIRP(BgL_argsz00_129))
							{	/* Tools/dsssl.scm 93 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_129)))
									{
										obj_t BgL_argsz00_135;

										BgL_argsz00_135 = BgL_argsz00_129;
										if ((BCNST(259) == CAR(BgL_argsz00_135)))
											{	/* Tools/dsssl.scm 103 */
												bool_t BgL_testz00_559;

												if (NULLP(CDR(BgL_argsz00_135)))
													{	/* Tools/dsssl.scm 103 */
														BgL_testz00_559 = ((bool_t) 1);
													}
												else
													{	/* Tools/dsssl.scm 103 */
														bool_t BgL_testz00_563;

														{	/* Tools/dsssl.scm 103 */
															obj_t BgL_auxz00_564;

															BgL_auxz00_564 = CAR(CDR(BgL_argsz00_135));
															BgL_testz00_563 = SYMBOLP(BgL_auxz00_564);
														}
														if (BgL_testz00_563)
															{	/* Tools/dsssl.scm 103 */
																BgL_testz00_559 = ((bool_t) 0);
															}
														else
															{	/* Tools/dsssl.scm 103 */
																BgL_testz00_559 = ((bool_t) 1);
															}
													}
												if (BgL_testz00_559)
													{	/* Tools/dsssl.scm 103 */
														return ((bool_t) 1);
													}
												else
													{
														obj_t BgL_argsz00_568;

														BgL_argsz00_568 = CDR(CDR(BgL_argsz00_135));
														BgL_argsz00_129 = BgL_argsz00_568;
														goto BgL_zc3anonymousza31531ze3z83_130;
													}
											}
										else
											{	/* Tools/dsssl.scm 102 */
												if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
														(BgL_argsz00_135)))
													{
														obj_t BgL_argsz00_574;

														BgL_argsz00_574 = CDR(BgL_argsz00_135);
														BgL_argsz00_129 = BgL_argsz00_574;
														goto BgL_zc3anonymousza31531ze3z83_130;
													}
												else
													{	/* Tools/dsssl.scm 108 */
														bool_t BgL_testz00_576;

														{	/* Tools/dsssl.scm 108 */
															obj_t BgL_auxz00_577;

															BgL_auxz00_577 = CAR(BgL_argsz00_135);
															BgL_testz00_576 = SYMBOLP(BgL_auxz00_577);
														}
														if (BgL_testz00_576)
															{
																obj_t BgL_argsz00_580;

																BgL_argsz00_580 = CDR(BgL_argsz00_135);
																BgL_argsz00_129 = BgL_argsz00_580;
																goto BgL_zc3anonymousza31531ze3z83_130;
															}
														else
															{	/* Tools/dsssl.scm 110 */
																bool_t BgL_testz00_582;

																{	/* Tools/dsssl.scm 110 */
																	bool_t BgL_testz00_583;

																	{	/* Tools/dsssl.scm 110 */
																		obj_t BgL_auxz00_584;

																		BgL_auxz00_584 = CAR(BgL_argsz00_135);
																		BgL_testz00_583 = PAIRP(BgL_auxz00_584);
																	}
																	if (BgL_testz00_583)
																		{	/* Tools/dsssl.scm 111 */
																			bool_t BgL_testz00_587;

																			{	/* Tools/dsssl.scm 111 */
																				obj_t BgL_auxz00_588;

																				BgL_auxz00_588 = CAR(BgL_argsz00_135);
																				BgL_testz00_587 =
																					SYMBOLP(BgL_auxz00_588);
																			}
																			if (BgL_testz00_587)
																				{	/* Tools/dsssl.scm 112 */
																					bool_t BgL_testz00_591;

																					{	/* Tools/dsssl.scm 112 */
																						obj_t BgL_auxz00_592;

																						BgL_auxz00_592 =
																							CDR(BgL_argsz00_135);
																						BgL_testz00_591 =
																							PAIRP(BgL_auxz00_592);
																					}
																					if (BgL_testz00_591)
																						{	/* Tools/dsssl.scm 112 */
																							BgL_testz00_582 =
																								NULLP(CDR(CDR
																									(BgL_argsz00_135)));
																						}
																					else
																						{	/* Tools/dsssl.scm 112 */
																							BgL_testz00_582 = ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Tools/dsssl.scm 111 */
																					BgL_testz00_582 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Tools/dsssl.scm 110 */
																			BgL_testz00_582 = ((bool_t) 0);
																		}
																}
																if (BgL_testz00_582)
																	{
																		obj_t BgL_argsz00_598;

																		BgL_argsz00_598 = CDR(BgL_argsz00_135);
																		BgL_argsz00_129 = BgL_argsz00_598;
																		goto BgL_zc3anonymousza31531ze3z83_130;
																	}
																else
																	{	/* Tools/dsssl.scm 110 */
																		return ((bool_t) 0);
																	}
															}
													}
											}
									}
								else
									{
										obj_t BgL_argsz00_600;

										BgL_argsz00_600 = CDR(BgL_argsz00_129);
										BgL_argsz00_129 = BgL_argsz00_600;
										goto BgL_zc3anonymousza31531ze3z83_130;
									}
							}
						else
							{	/* Tools/dsssl.scm 93 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* _dsssl-check-prototype? */
	obj_t BGl__dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t
		BgL_envz00_454, obj_t BgL_argsz00_455)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 88 */
			return
				BBOOL(BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00
				(BgL_argsz00_455));
		}
	}



/* dsssl-arity */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t
		BgL_argsz00_7, bool_t BgL_optimz00_8)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 132 */
			{
				long BgL_iz00_167;

				obj_t BgL_az00_168;

				BgL_iz00_167 = ((long) 0);
				BgL_az00_168 = BgL_argsz00_7;
			BgL_zc3anonymousza31566ze3z83_169:
				if (NULLP(BgL_az00_168))
					{	/* Tools/dsssl.scm 137 */
						return BINT(BgL_iz00_167);
					}
				else
					{	/* Tools/dsssl.scm 139 */
						bool_t BgL_testz00_607;

						{	/* Tools/dsssl.scm 139 */
							obj_t BgL_auxz00_608;

							BgL_auxz00_608 = CAR(BgL_az00_168);
							BgL_testz00_607 = SYMBOLP(BgL_auxz00_608);
						}
						if (BgL_testz00_607)
							{
								obj_t BgL_az00_613;

								long BgL_iz00_611;

								BgL_iz00_611 = (BgL_iz00_167 + ((long) 1));
								BgL_az00_613 = CDR(BgL_az00_168);
								BgL_az00_168 = BgL_az00_613;
								BgL_iz00_167 = BgL_iz00_611;
								goto BgL_zc3anonymousza31566ze3z83_169;
							}
						else
							{	/* Tools/dsssl.scm 141 */
								bool_t BgL_testz00_615;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
											(BgL_az00_168), CNST_TABLE_REF(((long) 0)))))
									{	/* Tools/dsssl.scm 141 */
										BgL_testz00_615 = BgL_optimz00_8;
									}
								else
									{	/* Tools/dsssl.scm 141 */
										BgL_testz00_615 = ((bool_t) 0);
									}
								if (BgL_testz00_615)
									{	/* Tools/dsssl.scm 142 */
										bool_t BgL_testz00_621;

										{	/* Tools/dsssl.scm 142 */
											obj_t BgL_g1514z00_178;

											BgL_g1514z00_178 = CDR(BgL_az00_168);
											{
												obj_t BgL_l1512z00_180;

												BgL_l1512z00_180 = BgL_g1514z00_178;
											BgL_zc3anonymousza31576ze3z83_181:
												if (NULLP(BgL_l1512z00_180))
													{	/* Tools/dsssl.scm 142 */
														BgL_testz00_621 = ((bool_t) 0);
													}
												else
													{	/* Tools/dsssl.scm 142 */
														if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
															(CAR(BgL_l1512z00_180)))
															{	/* Tools/dsssl.scm 142 */
																BgL_testz00_621 = ((bool_t) 1);
															}
														else
															{
																obj_t BgL_l1512z00_628;

																BgL_l1512z00_628 = CDR(BgL_l1512z00_180);
																BgL_l1512z00_180 = BgL_l1512z00_628;
																goto BgL_zc3anonymousza31576ze3z83_181;
															}
													}
											}
										}
										if (BgL_testz00_621)
											{	/* Tools/dsssl.scm 142 */
												return
													BGl_zd2zd2zz__r4_numbers_6_5z00(BINT(
														(BgL_iz00_167 + ((long) 1))), BNIL);
											}
										else
											{	/* Tools/dsssl.scm 142 */
												return BINT(BgL_iz00_167);
											}
									}
								else
									{	/* Tools/dsssl.scm 141 */
										return
											BGl_zd2zd2zz__r4_numbers_6_5z00(BINT(
												(BgL_iz00_167 + ((long) 1))), BNIL);
		}}}}}
	}



/* _dsssl-arity */
	obj_t BGl__dssslzd2arityzd2zztools_dssslz00(obj_t BgL_envz00_456,
		obj_t BgL_argsz00_457, obj_t BgL_optimz00_458)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 132 */
			return
				BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_457,
				CBOOL(BgL_optimz00_458));
		}
	}



/* dsssl-defaulted-formal? */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t BgL_objz00_10)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 177 */
			if (PAIRP(BgL_objz00_10))
				{	/* Tools/dsssl.scm 178 */
					obj_t BgL_cdrzd21393zd2_233;

					BgL_cdrzd21393zd2_233 = CDR(BgL_objz00_10);
					if (PAIRP(BgL_cdrzd21393zd2_233))
						{	/* Tools/dsssl.scm 178 */
							if (NULLP(CDR(BgL_cdrzd21393zd2_233)))
								{	/* Tools/dsssl.scm 178 */
									return BTRUE;
								}
							else
								{	/* Tools/dsssl.scm 178 */
									return BFALSE;
								}
						}
					else
						{	/* Tools/dsssl.scm 178 */
							return BFALSE;
						}
				}
			else
				{	/* Tools/dsssl.scm 178 */
					return BFALSE;
				}
		}
	}



/* _dsssl-defaulted-formal? */
	obj_t BGl__dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t
		BgL_envz00_459, obj_t BgL_objz00_460)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 177 */
			return
				BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(BgL_objz00_460);
		}
	}



/* dsssl-default-formal */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t
		BgL_objz00_11)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 189 */
			return CAR(BgL_objz00_11);
		}
	}



/* _dsssl-default-formal */
	obj_t BGl__dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t BgL_envz00_461,
		obj_t BgL_objz00_462)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 189 */
			return CAR(BgL_objz00_462);
		}
	}



/* dsssl-find-first-formal */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t BgL_argsz00_12)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 195 */
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00:
			if (NULLP(BgL_argsz00_12))
				{	/* Tools/dsssl.scm 197 */
					return BFALSE;
				}
			else
				{	/* Tools/dsssl.scm 197 */
					if (PAIRP(BgL_argsz00_12))
						{	/* Tools/dsssl.scm 199 */
							if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
									(BgL_argsz00_12)))
								{
									obj_t BgL_argsz00_657;

									BgL_argsz00_657 = CDR(BgL_argsz00_12);
									BgL_argsz00_12 = BgL_argsz00_657;
									goto BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00;
								}
							else
								{	/* Tools/dsssl.scm 203 */
									if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
											(CAR(BgL_argsz00_12))))
										{	/* Tools/dsssl.scm 205 */
											return CAR(CAR(BgL_argsz00_12));
										}
									else
										{	/* Tools/dsssl.scm 207 */
											bool_t BgL_testz00_665;

											{	/* Tools/dsssl.scm 207 */
												obj_t BgL_auxz00_666;

												BgL_auxz00_666 = CAR(BgL_argsz00_12);
												BgL_testz00_665 = SYMBOLP(BgL_auxz00_666);
											}
											if (BgL_testz00_665)
												{	/* Tools/dsssl.scm 207 */
													return CAR(BgL_argsz00_12);
												}
											else
												{	/* Tools/dsssl.scm 207 */
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_string1709z00zztools_dssslz00,
														BGl_string1710z00zztools_dssslz00, BgL_argsz00_12);
												}
										}
								}
						}
					else
						{	/* Tools/dsssl.scm 199 */
							return
								BGl_internalzd2errorzd2zztools_errorz00
								(BGl_string1709z00zztools_dssslz00,
								BGl_string1710z00zztools_dssslz00, BgL_argsz00_12);
						}
				}
		}
	}



/* _dsssl-find-first-formal */
	obj_t BGl__dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t
		BgL_envz00_463, obj_t BgL_argsz00_464)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 195 */
			return
				BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(BgL_argsz00_464);
		}
	}



/* dsssl-args*->args-list */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t BgL_expz00_13)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 218 */
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00:
			if (NULLP(BgL_expz00_13))
				{	/* Tools/dsssl.scm 220 */
					return BNIL;
				}
			else
				{	/* Tools/dsssl.scm 220 */
					if (PAIRP(BgL_expz00_13))
						{	/* Tools/dsssl.scm 222 */
							if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
									(BgL_expz00_13)))
								{	/* Tools/dsssl.scm 225 */
									obj_t BgL_argz00_250;

									BgL_argz00_250 =
										BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(CDR
										(BgL_expz00_13));
									if (CBOOL(BgL_argz00_250))
										{	/* Tools/dsssl.scm 227 */
											obj_t BgL_list1641z00_251;

											BgL_list1641z00_251 = MAKE_PAIR(BgL_argz00_250, BNIL);
											return BgL_list1641z00_251;
										}
									else
										{	/* Tools/dsssl.scm 226 */
											return BNIL;
										}
								}
							else
								{	/* Tools/dsssl.scm 224 */
									if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
											(CAR(BgL_expz00_13))))
										{
											obj_t BgL_expz00_689;

											BgL_expz00_689 = CDR(BgL_expz00_13);
											BgL_expz00_13 = BgL_expz00_689;
											goto
												BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00;
										}
									else
										{	/* Tools/dsssl.scm 229 */
											return
												MAKE_PAIR(CAR(BgL_expz00_13),
												BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00
												(CDR(BgL_expz00_13)));
										}
								}
						}
					else
						{	/* Tools/dsssl.scm 223 */
							obj_t BgL_list1654z00_260;

							BgL_list1654z00_260 = MAKE_PAIR(BgL_expz00_13, BNIL);
							return BgL_list1654z00_260;
						}
				}
		}
	}



/* _dsssl-args*->args-list */
	obj_t BGl__dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t
		BgL_envz00_465, obj_t BgL_expz00_466)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 218 */
			return
				BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(BgL_expz00_466);
		}
	}



/* dsssl-formals */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t
		BgL_argsz00_14)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 237 */
			{
				obj_t BgL_argsz00_262;

				BgL_argsz00_262 = BgL_argsz00_14;
			BgL_zc3anonymousza31655ze3z83_263:
				if (PAIRP(BgL_argsz00_262))
					{	/* Tools/dsssl.scm 240 */
						if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
								(BgL_argsz00_262)))
							{	/* Tools/dsssl.scm 242 */
								return BgL_argsz00_262;
							}
						else
							{
								obj_t BgL_argsz00_702;

								BgL_argsz00_702 = CDR(BgL_argsz00_262);
								BgL_argsz00_262 = BgL_argsz00_702;
								goto BgL_zc3anonymousza31655ze3z83_263;
							}
					}
				else
					{	/* Tools/dsssl.scm 240 */
						return BNIL;
					}
			}
		}
	}



/* _dsssl-formals */
	obj_t BGl__dssslzd2formalszd2zztools_dssslz00(obj_t BgL_envz00_467,
		obj_t BgL_argsz00_468)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 237 */
			return BGl_dssslzd2formalszd2zztools_dssslz00(BgL_argsz00_468);
		}
	}



/* dsssl-arguments */
	obj_t BGl_dssslzd2argumentszd2zztools_dssslz00(obj_t BgL_keyz00_15,
		obj_t BgL_argsz00_16)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 250 */
			{
				obj_t BgL_argsz00_270;

				BgL_argsz00_270 = BgL_argsz00_16;
			BgL_zc3anonymousza31661ze3z83_271:
				if (PAIRP(BgL_argsz00_270))
					{	/* Tools/dsssl.scm 253 */
						if ((CAR(BgL_argsz00_270) == BgL_keyz00_15))
							{	/* Tools/dsssl.scm 256 */
								obj_t BgL_g1509z00_274;

								BgL_g1509z00_274 = CDR(BgL_argsz00_270);
								{
									obj_t BgL_argsz00_277;

									obj_t BgL_rz00_278;

									BgL_argsz00_277 = BgL_g1509z00_274;
									BgL_rz00_278 = BNIL;
								BgL_zc3anonymousza31664ze3z83_279:
									if (NULLP(BgL_argsz00_277))
										{	/* Tools/dsssl.scm 259 */
											return bgl_reverse_bang(BgL_rz00_278);
										}
									else
										{	/* Tools/dsssl.scm 259 */
											if (PAIRP(BgL_argsz00_277))
												{	/* Tools/dsssl.scm 261 */
													if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
															(BgL_argsz00_277)))
														{	/* Tools/dsssl.scm 263 */
															return BNIL;
														}
													else
														{	/* Tools/dsssl.scm 265 */
															bool_t BgL_testz00_719;

															{	/* Tools/dsssl.scm 265 */
																obj_t BgL_auxz00_720;

																BgL_auxz00_720 = CAR(BgL_argsz00_277);
																BgL_testz00_719 = PAIRP(BgL_auxz00_720);
															}
															if (BgL_testz00_719)
																{	/* Tools/dsssl.scm 266 */
																	obj_t BgL_arg1669z00_284;

																	obj_t BgL_arg1670z00_285;

																	BgL_arg1669z00_284 = CDR(BgL_argsz00_277);
																	BgL_arg1670z00_285 =
																		MAKE_PAIR(CAR(BgL_argsz00_277),
																		BgL_rz00_278);
																	{
																		obj_t BgL_rz00_727;

																		obj_t BgL_argsz00_726;

																		BgL_argsz00_726 = BgL_arg1669z00_284;
																		BgL_rz00_727 = BgL_arg1670z00_285;
																		BgL_rz00_278 = BgL_rz00_727;
																		BgL_argsz00_277 = BgL_argsz00_726;
																		goto BgL_zc3anonymousza31664ze3z83_279;
																	}
																}
															else
																{	/* Tools/dsssl.scm 268 */
																	obj_t BgL_arg1673z00_287;

																	obj_t BgL_arg1674z00_288;

																	BgL_arg1673z00_287 = CDR(BgL_argsz00_277);
																	{	/* Tools/dsssl.scm 268 */
																		obj_t BgL_arg1675z00_289;

																		{	/* Tools/dsssl.scm 268 */
																			obj_t BgL_arg1676z00_290;

																			BgL_arg1676z00_290 = CAR(BgL_argsz00_277);
																			{	/* Tools/dsssl.scm 268 */
																				obj_t BgL_list1677z00_291;

																				{	/* Tools/dsssl.scm 268 */
																					obj_t BgL_arg1678z00_292;

																					BgL_arg1678z00_292 =
																						MAKE_PAIR(BFALSE, BNIL);
																					BgL_list1677z00_291 =
																						MAKE_PAIR(BgL_arg1676z00_290,
																						BgL_arg1678z00_292);
																				}
																				BgL_arg1675z00_289 =
																					BgL_list1677z00_291;
																			}
																		}
																		BgL_arg1674z00_288 =
																			MAKE_PAIR(BgL_arg1675z00_289,
																			BgL_rz00_278);
																	}
																	{
																		obj_t BgL_rz00_734;

																		obj_t BgL_argsz00_733;

																		BgL_argsz00_733 = BgL_arg1673z00_287;
																		BgL_rz00_734 = BgL_arg1674z00_288;
																		BgL_rz00_278 = BgL_rz00_734;
																		BgL_argsz00_277 = BgL_argsz00_733;
																		goto BgL_zc3anonymousza31664ze3z83_279;
																	}
																}
														}
												}
											else
												{	/* Tools/dsssl.scm 261 */
													return BNIL;
												}
										}
								}
							}
						else
							{	/* Tools/dsssl.scm 255 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_270)))
									{	/* Tools/dsssl.scm 269 */
										return BNIL;
									}
								else
									{
										obj_t BgL_argsz00_738;

										BgL_argsz00_738 = CDR(BgL_argsz00_270);
										BgL_argsz00_270 = BgL_argsz00_738;
										goto BgL_zc3anonymousza31661ze3z83_271;
									}
							}
					}
				else
					{	/* Tools/dsssl.scm 253 */
						return BNIL;
					}
			}
		}
	}



/* dsssl-optionals */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t
		BgL_argsz00_17)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 277 */
			return
				BGl_dssslzd2argumentszd2zztools_dssslz00(BCNST(258), BgL_argsz00_17);
		}
	}



/* _dsssl-optionals */
	obj_t BGl__dssslzd2optionalszd2zztools_dssslz00(obj_t BgL_envz00_469,
		obj_t BgL_argsz00_470)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 277 */
			return BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_470);
		}
	}



/* dsssl-keys */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t
		BgL_argsz00_18)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 283 */
			return
				BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00
				(BGl_dssslzd2argumentszd2zztools_dssslz00(BCNST(262), BgL_argsz00_18));
		}
	}



/* _dsssl-keys */
	obj_t BGl__dssslzd2keyszd2zztools_dssslz00(obj_t BgL_envz00_471,
		obj_t BgL_argsz00_472)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 283 */
			return BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_472);
		}
	}



/* dsssl-key-args-sort */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t
		BgL_argsz00_19)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 289 */
			return
				BGl_sortz00zz__r4_vectors_6_8z00(BgL_argsz00_19,
				BGl_proc1711z00zztools_dssslz00);
		}
	}



/* _dsssl-key-args-sort */
	obj_t BGl__dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t BgL_envz00_474,
		obj_t BgL_argsz00_475)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 289 */
			return BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(BgL_argsz00_475);
		}
	}



/* <anonymous:1693> */
	obj_t BGl_zc3anonymousza31693ze3z83zztools_dssslz00(obj_t BgL_envz00_476,
		obj_t BgL_s1z00_477, obj_t BgL_s2z00_478)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 291 */
			{
				obj_t BgL_s1z00_303;

				obj_t BgL_s2z00_304;

				{	/* Tools/dsssl.scm 292 */
					bool_t BgL_auxz00_747;

					BgL_s1z00_303 = BgL_s1z00_477;
					BgL_s2z00_304 = BgL_s2z00_478;
					{	/* Tools/dsssl.scm 292 */
						obj_t BgL_arg1694z00_431;

						obj_t BgL_arg1695z00_432;

						{	/* Tools/dsssl.scm 292 */
							obj_t BgL_arg1696z00_433;

							BgL_arg1696z00_433 = CAR(BgL_s1z00_303);
							{	/* Tools/dsssl.scm 292 */
								obj_t BgL_res1707z00_438;

								{	/* Tools/dsssl.scm 292 */
									obj_t BgL_symbolz00_436;

									BgL_symbolz00_436 = BgL_arg1696z00_433;
									{	/* Tools/dsssl.scm 292 */
										obj_t BgL_arg2063z00_437;

										BgL_arg2063z00_437 = SYMBOL_TO_STRING(BgL_symbolz00_436);
										BgL_res1707z00_438 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_437);
									}
								}
								BgL_arg1694z00_431 = BgL_res1707z00_438;
							}
						}
						{	/* Tools/dsssl.scm 292 */
							obj_t BgL_arg1697z00_434;

							BgL_arg1697z00_434 = CAR(BgL_s2z00_304);
							{	/* Tools/dsssl.scm 292 */
								obj_t BgL_res1708z00_442;

								{	/* Tools/dsssl.scm 292 */
									obj_t BgL_symbolz00_440;

									BgL_symbolz00_440 = BgL_arg1697z00_434;
									{	/* Tools/dsssl.scm 292 */
										obj_t BgL_arg2063z00_441;

										BgL_arg2063z00_441 = SYMBOL_TO_STRING(BgL_symbolz00_440);
										BgL_res1708z00_442 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_441);
									}
								}
								BgL_arg1695z00_432 = BgL_res1708z00_442;
							}
						}
						BgL_auxz00_747 = string_lt(BgL_arg1694z00_431, BgL_arg1695z00_432);
					}
					return BBOOL(BgL_auxz00_747);
				}
			}
		}
	}



/* dsssl-before-dsssl */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t
		BgL_argsz00_20)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 301 */
			{
				obj_t BgL_argsz00_313;

				obj_t BgL_resz00_314;

				BgL_argsz00_313 = BgL_argsz00_20;
				BgL_resz00_314 = BNIL;
			BgL_zc3anonymousza31698ze3z83_315:
				if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
						(BgL_argsz00_313)))
					{	/* Tools/dsssl.scm 305 */
						return bgl_reverse_bang(BgL_resz00_314);
					}
				else
					{	/* Tools/dsssl.scm 308 */
						obj_t BgL_arg1700z00_317;

						obj_t BgL_arg1701z00_318;

						BgL_arg1700z00_317 = CDR(BgL_argsz00_313);
						BgL_arg1701z00_318 =
							MAKE_PAIR(CAR(BgL_argsz00_313), BgL_resz00_314);
						{
							obj_t BgL_resz00_764;

							obj_t BgL_argsz00_763;

							BgL_argsz00_763 = BgL_arg1700z00_317;
							BgL_resz00_764 = BgL_arg1701z00_318;
							BgL_resz00_314 = BgL_resz00_764;
							BgL_argsz00_313 = BgL_argsz00_763;
							goto BgL_zc3anonymousza31698ze3z83_315;
						}
					}
			}
		}
	}



/* _dsssl-before-dsssl */
	obj_t BGl__dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t BgL_envz00_479,
		obj_t BgL_argsz00_480)
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 301 */
			return BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_480);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_dssslz00()
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_dssslz00()
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_dssslz00()
	{
		AN_OBJECT;
		{	/* Tools/dsssl.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1712z00zztools_dssslz00));
		}
	}

#ifdef __cplusplus
}
#endif
