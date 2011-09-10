/*===========================================================================*/
/*   (Module/option.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/option.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_optionz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_optionz00();
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_optionzd2producerzd2zzmodule_optionz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_optionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_optionz00();
	static obj_t BGl__optionzd2producerzd2zzmodule_optionz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_optionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_optionz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza31543ze3z83zzmodule_optionz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31544ze3z83zzmodule_optionz00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_optionz00();
	static obj_t BGl_methodzd2initzd2zzmodule_optionz00();
	static obj_t BGl__makezd2optionzd2compilerz00zzmodule_optionz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1555z00zzmodule_optionz00,
		BgL_bgl_za7c3anonymousza7a311563z00,
		BGl_zc3anonymousza31544ze3z83zzmodule_optionz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1556z00zzmodule_optionz00,
		BgL_bgl_za7c3anonymousza7a311564z00,
		BGl_zc3anonymousza31543ze3z83zzmodule_optionz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1557z00zzmodule_optionz00,
		BgL_bgl_string1557za700za7za7m1565za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1558z00zzmodule_optionz00,
		BgL_bgl_string1558za700za7za7m1566za7, "Illegal `option' clause", 23);
	      DEFINE_STRING(BGl_string1560z00zzmodule_optionz00,
		BgL_bgl_string1560za700za7za7m1567za7, "void option ", 12);
	      DEFINE_STRING(BGl_string1559z00zzmodule_optionz00,
		BgL_bgl_string1559za700za7za7m1568za7, "module_option", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2optionzd2compilerzd2envzd2zzmodule_optionz00,
		BgL_bgl__makeza7d2optionza7d1569z00,
		BGl__makezd2optionzd2compilerz00zzmodule_optionz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_optionzd2producerzd2envz00zzmodule_optionz00,
		BgL_bgl__optionza7d2produc1570za7,
		BGl__optionzd2producerzd2zzmodule_optionz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_optionz00(long
		BgL_checksumz00_186, char *BgL_fromz00_187)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_optionz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_optionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_optionz00();
					BGl_cnstzd2initzd2zzmodule_optionz00();
					BGl_importedzd2moduleszd2initz00zzmodule_optionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_option");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			{	/* Module/option.scm 15 */
				obj_t BgL_cportz00_176;

				BgL_cportz00_176 =
					bgl_open_input_string(BGl_string1560z00zzmodule_optionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_177;

					BgL_iz00_177 = ((long) 1);
				BgL_loopz00_178:
					if ((BgL_iz00_177 == ((long) -1)))
						{	/* Module/option.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/option.scm 15 */
							{	/* Module/option.scm 15 */
								obj_t BgL_arg1562z00_180;

								{	/* Module/option.scm 15 */

									{	/* Module/option.scm 15 */
										obj_t BgL_locationz00_182;

										BgL_locationz00_182 = BBOOL(((bool_t) 0));
										{	/* Module/option.scm 15 */

											BgL_arg1562z00_180 =
												BGl_readz00zz__readerz00(BgL_cportz00_176,
												BgL_locationz00_182);
										}
									}
								}
								{	/* Module/option.scm 15 */
									int BgL_auxz00_202;

									BgL_auxz00_202 = (int) (BgL_iz00_177);
									CNST_TABLE_SET(BgL_auxz00_202, BgL_arg1562z00_180);
							}}
							{	/* Module/option.scm 15 */
								int BgL_auxz00_183;

								BgL_auxz00_183 = (int) ((BgL_iz00_177 - ((long) 1)));
								{
									long BgL_iz00_207;

									BgL_iz00_207 = (long) (BgL_auxz00_183);
									BgL_iz00_177 = BgL_iz00_207;
									goto BgL_loopz00_178;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}
	}



/* make-option-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 25 */
			{	/* Module/option.scm 27 */
				obj_t BgL_arg1540z00_129;

				BgL_arg1540z00_129 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg1540z00_129,
						BGl_optionzd2producerzd2envz00zzmodule_optionz00,
						BGl_proc1556z00zzmodule_optionz00,
						BGl_proc1555z00zzmodule_optionz00));
			}
		}
	}



/* _make-option-compiler */
	obj_t BGl__makezd2optionzd2compilerz00zzmodule_optionz00(obj_t BgL_envz00_168)
	{
		AN_OBJECT;
		{	/* Module/option.scm 25 */
			return BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
		}
	}



/* <anonymous:1544> */
	obj_t BGl_zc3anonymousza31544ze3z83zzmodule_optionz00(obj_t BgL_envz00_169)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:1543> */
	obj_t BGl_zc3anonymousza31543ze3z83zzmodule_optionz00(obj_t BgL_envz00_170,
		obj_t BgL_mz00_171, obj_t BgL_cz00_172)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* option-producer */
	obj_t BGl_optionzd2producerzd2zzmodule_optionz00(obj_t BgL_clausez00_23)
	{
		AN_OBJECT;
		{	/* Module/option.scm 33 */
			{
				obj_t BgL_protosz00_138;

				if (PAIRP(BgL_clausez00_23))
					{	/* Module/option.scm 34 */
						BgL_protosz00_138 = CDR(BgL_clausez00_23);
						{
							obj_t BgL_l1529z00_145;

							BgL_l1529z00_145 = BgL_protosz00_138;
						BgL_zc3anonymousza31547ze3z83_146:
							if (PAIRP(BgL_l1529z00_145))
								{	/* Module/option.scm 36 */
									{	/* Module/option.scm 36 */
										obj_t BgL_arg1549z00_148;

										BgL_arg1549z00_148 = CAR(BgL_l1529z00_145);
										{	/* Module/option.scm 36 */
											obj_t BgL_envz00_150;

											BgL_envz00_150 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Module/option.scm 36 */

												BGl_evalz00zz__evalz00(BgL_arg1549z00_148,
													BgL_envz00_150);
											}
										}
									}
									{
										obj_t BgL_l1529z00_221;

										BgL_l1529z00_221 = CDR(BgL_l1529z00_145);
										BgL_l1529z00_145 = BgL_l1529z00_221;
										goto BgL_zc3anonymousza31547ze3z83_146;
									}
								}
							else
								{	/* Module/option.scm 36 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/option.scm 34 */
						{	/* Module/option.scm 39 */
							obj_t BgL_list1552z00_153;

							BgL_list1552z00_153 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1557z00zzmodule_optionz00,
								BGl_string1558z00zzmodule_optionz00, BgL_clausez00_23,
								BgL_list1552z00_153);
						}
					}
			}
		}
	}



/* _option-producer */
	obj_t BGl__optionzd2producerzd2zzmodule_optionz00(obj_t BgL_envz00_173,
		obj_t BgL_clausez00_174)
	{
		AN_OBJECT;
		{	/* Module/option.scm 33 */
			return BGl_optionzd2producerzd2zzmodule_optionz00(BgL_clausez00_174);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_optionz00()
	{
		AN_OBJECT;
		{	/* Module/option.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1559z00zzmodule_optionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1559z00zzmodule_optionz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1559z00zzmodule_optionz00));
		}
	}

#ifdef __cplusplus
}
#endif
