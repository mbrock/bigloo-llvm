/*===========================================================================*/
/*   (Read/jvm.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/jvm.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;


	static obj_t BGl__addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_zc3exitza31709ze3z83zzread_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_jvmz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzread_jvmz00();
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__readzd2jfilezd2zzread_jvmz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_jvmz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_jvmz00();
	static obj_t BGl_dozd2readzd2jfilez00zzread_jvmz00(obj_t, obj_t);
	static obj_t BGl__sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	static obj_t
		BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_toplevelzd2initzd2zzread_jvmz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	static obj_t BGl_zc3anonymousza31785ze3z83zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	static obj_t BGl__jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_filezd2separatorzd2zz__osz00();
	static obj_t BGl__jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t,
		obj_t);
	extern obj_t BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl__modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_za2jvmzd2markza2zd2zzread_jvmz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_jvmz00();
	static obj_t BGl_methodzd2initzd2zzread_jvmz00();
	BGL_EXPORTED_DECL obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sourcezd2ze3qualifiedzd2typezd2envz31zzread_jvmz00,
		BgL_bgl__sourceza7d2za7e3qua1825z00,
		BGl__sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classzd2withzd2directoryzd2envz00zzread_jvmz00,
		BgL_bgl__jvmza7d2classza7d2w1826z00,
		BGl__jvmzd2classzd2withzd2directoryzd2zzread_jvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classzd2sanszd2directoryzd2envz00zzread_jvmz00,
		BgL_bgl__jvmza7d2classza7d2s1827z00,
		BGl__jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1820z00zzread_jvmz00,
		BgL_bgl_za7c3anonymousza7a311828z00,
		BGl_zc3anonymousza31785ze3z83zzread_jvmz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2ze3qualifiedzd2typezd2envz31zzread_jvmz00,
		BgL_bgl__moduleza7d2za7e3qua1829z00,
		BGl__modulezd2ze3qualifiedzd2typeze3zzread_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zzread_jvmz00,
		BgL_bgl_string1800za700za7za7r1830za7, "", 0);
	      DEFINE_STRING(BGl_string1801z00zzread_jvmz00,
		BgL_bgl_string1801za700za7za7r1831za7, ", for identifier `", 18);
	      DEFINE_STRING(BGl_string1802z00zzread_jvmz00,
		BgL_bgl_string1802za700za7za7r1832za7, "'", 1);
	      DEFINE_STRING(BGl_string1803z00zzread_jvmz00,
		BgL_bgl_string1803za700za7za7r1833za7, "empty name for module -- ", 25);
	      DEFINE_STRING(BGl_string1804z00zzread_jvmz00,
		BgL_bgl_string1804za700za7za7r1834za7, "add-qualified-type!", 19);
	      DEFINE_STRING(BGl_string1805z00zzread_jvmz00,
		BgL_bgl_string1805za700za7za7r1835za7, "\n  identifier=", 14);
	      DEFINE_STRING(BGl_string1806z00zzread_jvmz00,
		BgL_bgl_string1806za700za7za7r1836za7, "\n", 1);
	      DEFINE_STRING(BGl_string1807z00zzread_jvmz00,
		BgL_bgl_string1807za700za7za7r1837za7, "\n  new qualified type=", 22);
	      DEFINE_STRING(BGl_string1808z00zzread_jvmz00,
		BgL_bgl_string1808za700za7za7r1838za7, "\n  old qualified type=", 22);
	      DEFINE_STRING(BGl_string1810z00zzread_jvmz00,
		BgL_bgl_string1810za700za7za7r1839za7, "]", 1);
	      DEFINE_STRING(BGl_string1809z00zzread_jvmz00,
		BgL_bgl_string1809za700za7za7r1840za7,
		"qualified type redefinition:\n  module/class=", 44);
	      DEFINE_STRING(BGl_string1811z00zzread_jvmz00,
		BgL_bgl_string1811za700za7za7r1841za7, "      [reading jfile ", 21);
	      DEFINE_STRING(BGl_string1812z00zzread_jvmz00,
		BgL_bgl_string1812za700za7za7r1842za7, "Can't open jfile", 16);
	      DEFINE_STRING(BGl_string1813z00zzread_jvmz00,
		BgL_bgl_string1813za700za7za7r1843za7, "Can't find jfile", 16);
	      DEFINE_STRING(BGl_string1814z00zzread_jvmz00,
		BgL_bgl_string1814za700za7za7r1844za7, "Illegal jfile format", 20);
	      DEFINE_STRING(BGl_string1815z00zzread_jvmz00,
		BgL_bgl_string1815za700za7za7r1845za7, ".", 1);
	      DEFINE_STRING(BGl_string1816z00zzread_jvmz00,
		BgL_bgl_string1816za700za7za7r1846za7,
		"Can't find qualified type name for module `", 43);
	      DEFINE_STRING(BGl_string1817z00zzread_jvmz00,
		BgL_bgl_string1817za700za7za7r1847za7, "',", 2);
	      DEFINE_STRING(BGl_string1818z00zzread_jvmz00,
		BgL_bgl_string1818za700za7za7r1848za7, "'.", 2);
	      DEFINE_STRING(BGl_string1819z00zzread_jvmz00,
		BgL_bgl_string1819za700za7za7r1849za7, "Using name `", 12);
	      DEFINE_STRING(BGl_string1821z00zzread_jvmz00,
		BgL_bgl_string1821za700za7za7r1850za7, "read_jvm", 8);
	      DEFINE_STRING(BGl_string1822z00zzread_jvmz00,
		BgL_bgl_string1822za700za7za7r1851za7,
		"module ld done read-jfile jvm-qtype ", 36);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2qualifiedzd2typez12zd2envzc0zzread_jvmz00,
		BgL_bgl__addza7d2qualified1852za7, va_generic_entry,
		BGl__addzd2qualifiedzd2typez12z12zzread_jvmz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2jfilezd2envz00zzread_jvmz00,
		BgL_bgl__readza7d2jfileza7d21853z00, BGl__readzd2jfilezd2zzread_jvmz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long
		BgL_checksumz00_520, char *BgL_fromz00_521)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_jvmz00))
				{
					BGl_requirezd2initializa7ationz75zzread_jvmz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzread_jvmz00();
					BGl_cnstzd2initzd2zzread_jvmz00();
					BGl_importedzd2moduleszd2initz00zzread_jvmz00();
					BGl_toplevelzd2initzd2zzread_jvmz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "read_jvm");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			{	/* Read/jvm.scm 15 */
				obj_t BgL_cportz00_510;

				BgL_cportz00_510 =
					bgl_open_input_string(BGl_string1822z00zzread_jvmz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_511;

					BgL_iz00_511 = ((long) 4);
				BgL_loopz00_512:
					if ((BgL_iz00_511 == ((long) -1)))
						{	/* Read/jvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/jvm.scm 15 */
							{	/* Read/jvm.scm 15 */
								obj_t BgL_arg1824z00_514;

								{	/* Read/jvm.scm 15 */

									{	/* Read/jvm.scm 15 */
										obj_t BgL_locationz00_516;

										BgL_locationz00_516 = BBOOL(((bool_t) 0));
										{	/* Read/jvm.scm 15 */

											BgL_arg1824z00_514 =
												BGl_readz00zz__readerz00(BgL_cportz00_510,
												BgL_locationz00_516);
										}
									}
								}
								{	/* Read/jvm.scm 15 */
									int BgL_auxz00_545;

									BgL_auxz00_545 = (int) (BgL_iz00_511);
									CNST_TABLE_SET(BgL_auxz00_545, BgL_arg1824z00_514);
							}}
							{	/* Read/jvm.scm 15 */
								int BgL_auxz00_517;

								BgL_auxz00_517 = (int) ((BgL_iz00_511 - ((long) 1)));
								{
									long BgL_iz00_550;

									BgL_iz00_550 = (long) (BgL_auxz00_517);
									BgL_iz00_511 = BgL_iz00_550;
									goto BgL_loopz00_512;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			return (BGl_za2jvmzd2markza2zd2zzread_jvmz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* jvm-class-sans-directory */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t BgL_filez00_1)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 33 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* Read/jvm.scm 36 */
					long BgL_ldz00_191;

					long BgL_lfz00_192;

					BgL_ldz00_191 =
						STRING_LENGTH(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00);
					BgL_lfz00_192 = STRING_LENGTH(BgL_filez00_1);
					{	/* Read/jvm.scm 38 */
						bool_t BgL_testz00_557;

						if ((BgL_lfz00_192 < (BgL_ldz00_191 + ((long) 1))))
							{	/* Read/jvm.scm 38 */
								BgL_testz00_557 = ((bool_t) 1);
							}
						else
							{	/* Read/jvm.scm 38 */
								if (bigloo_strncmp(BgL_filez00_1,
										BGl_za2jvmzd2directoryza2zd2zzengine_paramz00,
										BgL_ldz00_191))
									{	/* Read/jvm.scm 40 */
										bool_t BgL_testz00_563;

										{	/* Read/jvm.scm 40 */
											unsigned char BgL_arg1630z00_198;

											obj_t BgL_arg1631z00_199;

											BgL_arg1630z00_198 =
												STRING_REF(BgL_filez00_1, BgL_ldz00_191);
											BgL_arg1631z00_199 = BGl_filezd2separatorzd2zz__osz00();
											BgL_testz00_563 =
												(BgL_arg1630z00_198 == CCHAR(BgL_arg1631z00_199));
										}
										if (BgL_testz00_563)
											{	/* Read/jvm.scm 40 */
												BgL_testz00_557 = ((bool_t) 0);
											}
										else
											{	/* Read/jvm.scm 40 */
												BgL_testz00_557 = ((bool_t) 1);
											}
									}
								else
									{	/* Read/jvm.scm 39 */
										BgL_testz00_557 = ((bool_t) 1);
									}
							}
						if (BgL_testz00_557)
							{	/* Read/jvm.scm 38 */
								return BgL_filez00_1;
							}
						else
							{	/* Read/jvm.scm 38 */
								return
									c_substring(BgL_filez00_1,
									(((long) 1) + BgL_ldz00_191), BgL_lfz00_192);
				}}}
			else
				{	/* Read/jvm.scm 34 */
					return BgL_filez00_1;
				}
		}
	}



/* _jvm-class-sans-directory */
	obj_t BGl__jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t
		BgL_envz00_493, obj_t BgL_filez00_494)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 33 */
			return
				BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(BgL_filez00_494);
		}
	}



/* jvm-class-with-directory */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t BgL_classz00_2)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 47 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* Read/jvm.scm 49 */
					if (bigloo_strcmp(BgL_classz00_2, BGl_string1800z00zzread_jvmz00))
						{	/* Read/jvm.scm 51 */
							return BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
						}
					else
						{	/* Read/jvm.scm 51 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00, BgL_classz00_2);
						}
				}
			else
				{	/* Read/jvm.scm 49 */
					return BgL_classz00_2;
				}
		}
	}



/* _jvm-class-with-directory */
	obj_t BGl__jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t
		BgL_envz00_495, obj_t BgL_classz00_496)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 47 */
			return
				BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(BgL_classz00_496);
		}
	}



/* add-qualified-type! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t
		BgL_modulez00_3, obj_t BgL_qtypez00_4, obj_t BgL_identz00_5)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 64 */
			{	/* Read/jvm.scm 65 */
				obj_t BgL_bcz00_203;

				BgL_bcz00_203 = BGl_thezd2backendzd2zzbackend_backendz00();
				{	/* Read/jvm.scm 66 */
					bool_t BgL_testz00_578;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_bcz00_203,
							BGl_backendz00zzbackend_backendz00))
						{	/* Read/jvm.scm 66 */
							if (bigloo_strcmp(BgL_qtypez00_4, BGl_string1800z00zzread_jvmz00))
								{	/* Read/jvm.scm 68 */
									obj_t BgL_arg1659z00_221;

									BgL_arg1659z00_221 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_584;

										BgL_auxz00_584 = (BgL_backendz00_bglt) (BgL_arg1659z00_221);
										BgL_testz00_578 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_584))->
											BgL_qualifiedzd2typeszd2);
									}
								}
							else
								{	/* Read/jvm.scm 67 */
									BgL_testz00_578 = ((bool_t) 0);
								}
						}
					else
						{	/* Read/jvm.scm 66 */
							BgL_testz00_578 = ((bool_t) 0);
						}
					if (BgL_testz00_578)
						{	/* Read/jvm.scm 69 */
							obj_t BgL_arg1639z00_207;

							{	/* Read/jvm.scm 72 */
								bool_t BgL_testz00_587;

								if (PAIRP(BgL_identz00_5))
									{	/* Read/jvm.scm 72 */
										obj_t BgL_auxz00_590;

										BgL_auxz00_590 = CAR(BgL_identz00_5);
										BgL_testz00_587 = SYMBOLP(BgL_auxz00_590);
									}
								else
									{	/* Read/jvm.scm 72 */
										BgL_testz00_587 = ((bool_t) 0);
									}
								if (BgL_testz00_587)
									{	/* Read/jvm.scm 73 */
										obj_t BgL_arg1650z00_214;

										{	/* Read/jvm.scm 74 */
											obj_t BgL_arg1653z00_216;

											BgL_arg1653z00_216 = CAR(BgL_identz00_5);
											{	/* Read/jvm.scm 74 */
												obj_t BgL_res1794z00_416;

												{	/* Read/jvm.scm 74 */
													obj_t BgL_symbolz00_414;

													BgL_symbolz00_414 = BgL_arg1653z00_216;
													{	/* Read/jvm.scm 74 */
														obj_t BgL_arg2063z00_415;

														BgL_arg2063z00_415 =
															SYMBOL_TO_STRING(BgL_symbolz00_414);
														BgL_res1794z00_416 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_415);
													}
												}
												BgL_arg1650z00_214 = BgL_res1794z00_416;
											}
										}
										BgL_arg1639z00_207 =
											string_append_3(BGl_string1801z00zzread_jvmz00,
											BgL_arg1650z00_214, BGl_string1802z00zzread_jvmz00);
									}
								else
									{	/* Read/jvm.scm 72 */
										BgL_arg1639z00_207 = BGl_string1800z00zzread_jvmz00;
									}
							}
							{	/* Read/jvm.scm 69 */
								obj_t BgL_list1640z00_208;

								{	/* Read/jvm.scm 69 */
									obj_t BgL_arg1643z00_209;

									{	/* Read/jvm.scm 69 */
										obj_t BgL_arg1644z00_210;

										{	/* Read/jvm.scm 69 */
											obj_t BgL_arg1645z00_211;

											BgL_arg1645z00_211 = MAKE_PAIR(BgL_arg1639z00_207, BNIL);
											BgL_arg1644z00_210 =
												MAKE_PAIR(BgL_modulez00_3, BgL_arg1645z00_211);
										}
										BgL_arg1643z00_209 =
											MAKE_PAIR(BGl_string1803z00zzread_jvmz00,
											BgL_arg1644z00_210);
									}
									BgL_list1640z00_208 =
										MAKE_PAIR(BGl_string1804z00zzread_jvmz00,
										BgL_arg1643z00_209);
								}
								BGl_warningz00zz__errorz00(BgL_list1640z00_208);
							}
						}
					else
						{	/* Read/jvm.scm 66 */
							BFALSE;
						}
				}
				{	/* Read/jvm.scm 77 */
					obj_t BgL_bz00_222;

					BgL_bz00_222 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_3,
						BGl_za2jvmzd2markza2zd2zzread_jvmz00);
					if (CBOOL(BgL_bz00_222))
						{	/* Read/jvm.scm 80 */
							bool_t BgL_testz00_605;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_bcz00_203,
									BGl_backendz00zzbackend_backendz00))
								{	/* Read/jvm.scm 80 */
									if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_bz00_222,
											BgL_qtypez00_4))
										{	/* Read/jvm.scm 81 */
											BgL_testz00_605 = ((bool_t) 0);
										}
									else
										{	/* Read/jvm.scm 82 */
											obj_t BgL_arg1693z00_249;

											BgL_arg1693z00_249 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											{
												BgL_backendz00_bglt BgL_auxz00_611;

												BgL_auxz00_611 =
													(BgL_backendz00_bglt) (BgL_arg1693z00_249);
												BgL_testz00_605 =
													(((BgL_backendz00_bglt) CREF(BgL_auxz00_611))->
													BgL_qualifiedzd2typeszd2);
											}
										}
								}
							else
								{	/* Read/jvm.scm 80 */
									BgL_testz00_605 = ((bool_t) 0);
								}
							if (BgL_testz00_605)
								{	/* Read/jvm.scm 80 */
									BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_3,
										BGl_za2jvmzd2markza2zd2zzread_jvmz00, BgL_qtypez00_4);
									{	/* Read/jvm.scm 84 */
										obj_t BgL_arg1664z00_226;

										{	/* Read/jvm.scm 86 */
											bool_t BgL_testz00_615;

											if (PAIRP(BgL_identz00_5))
												{	/* Read/jvm.scm 86 */
													obj_t BgL_auxz00_618;

													BgL_auxz00_618 = CAR(BgL_identz00_5);
													BgL_testz00_615 = SYMBOLP(BgL_auxz00_618);
												}
											else
												{	/* Read/jvm.scm 86 */
													BgL_testz00_615 = ((bool_t) 0);
												}
											if (BgL_testz00_615)
												{	/* Read/jvm.scm 87 */
													obj_t BgL_arg1684z00_241;

													{	/* Read/jvm.scm 88 */
														obj_t BgL_arg1685z00_242;

														BgL_arg1685z00_242 = CAR(BgL_identz00_5);
														{	/* Read/jvm.scm 88 */
															obj_t BgL_res1795z00_425;

															{	/* Read/jvm.scm 88 */
																obj_t BgL_symbolz00_423;

																BgL_symbolz00_423 = BgL_arg1685z00_242;
																{	/* Read/jvm.scm 88 */
																	obj_t BgL_arg2063z00_424;

																	BgL_arg2063z00_424 =
																		SYMBOL_TO_STRING(BgL_symbolz00_423);
																	BgL_res1795z00_425 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_424);
																}
															}
															BgL_arg1684z00_241 = BgL_res1795z00_425;
														}
													}
													BgL_arg1664z00_226 =
														string_append(BGl_string1805z00zzread_jvmz00,
														BgL_arg1684z00_241);
												}
											else
												{	/* Read/jvm.scm 86 */
													BgL_arg1664z00_226 = BGl_string1800z00zzread_jvmz00;
												}
										}
										{	/* Read/jvm.scm 84 */
											obj_t BgL_list1669z00_230;

											{	/* Read/jvm.scm 84 */
												obj_t BgL_arg1670z00_231;

												{	/* Read/jvm.scm 84 */
													obj_t BgL_arg1672z00_232;

													{	/* Read/jvm.scm 84 */
														obj_t BgL_arg1673z00_233;

														{	/* Read/jvm.scm 84 */
															obj_t BgL_arg1674z00_234;

															{	/* Read/jvm.scm 84 */
																obj_t BgL_arg1675z00_235;

																{	/* Read/jvm.scm 84 */
																	obj_t BgL_arg1676z00_236;

																	{	/* Read/jvm.scm 84 */
																		obj_t BgL_arg1677z00_237;

																		{	/* Read/jvm.scm 84 */
																			obj_t BgL_arg1678z00_238;

																			BgL_arg1678z00_238 =
																				MAKE_PAIR
																				(BGl_string1806z00zzread_jvmz00, BNIL);
																			BgL_arg1677z00_237 =
																				MAKE_PAIR(BgL_qtypez00_4,
																				BgL_arg1678z00_238);
																		}
																		BgL_arg1676z00_236 =
																			MAKE_PAIR(BGl_string1807z00zzread_jvmz00,
																			BgL_arg1677z00_237);
																	}
																	BgL_arg1675z00_235 =
																		MAKE_PAIR(BgL_bz00_222, BgL_arg1676z00_236);
																}
																BgL_arg1674z00_234 =
																	MAKE_PAIR(BGl_string1808z00zzread_jvmz00,
																	BgL_arg1675z00_235);
															}
															BgL_arg1673z00_233 =
																MAKE_PAIR(BgL_arg1664z00_226,
																BgL_arg1674z00_234);
														}
														BgL_arg1672z00_232 =
															MAKE_PAIR(BgL_modulez00_3, BgL_arg1673z00_233);
													}
													BgL_arg1670z00_231 =
														MAKE_PAIR(BGl_string1809z00zzread_jvmz00,
														BgL_arg1672z00_232);
												}
												BgL_list1669z00_230 =
													MAKE_PAIR(BGl_string1804z00zzread_jvmz00,
													BgL_arg1670z00_231);
											}
											BGl_warningz00zz__errorz00(BgL_list1669z00_230);
										}
									}
									{	/* Read/jvm.scm 93 */
										obj_t BgL_arg1689z00_245;

										obj_t BgL_arg1690z00_246;

										BgL_arg1689z00_245 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BINT(((long) 10)));
										{	/* Read/jvm.scm 93 */
											obj_t BgL_res1796z00_427;

											{	/* Read/jvm.scm 93 */
												obj_t BgL_auxz00_637;

												BgL_auxz00_637 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1796z00_427 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_637);
											}
											BgL_arg1690z00_246 = BgL_res1796z00_427;
										}
										return
											BGl_displayzd2tracezd2stackz00zz__errorz00
											(BgL_arg1689z00_245, BgL_arg1690z00_246);
									}
								}
							else
								{	/* Read/jvm.scm 80 */
									return BFALSE;
								}
						}
					else
						{	/* Read/jvm.scm 78 */
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_3,
								BGl_za2jvmzd2markza2zd2zzread_jvmz00, BgL_qtypez00_4);
						}
				}
			}
		}
	}



/* _add-qualified-type! */
	obj_t BGl__addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t BgL_envz00_497,
		obj_t BgL_modulez00_498, obj_t BgL_qtypez00_499, obj_t BgL_identz00_500)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 64 */
			return
				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_modulez00_498,
				BgL_qtypez00_499, BgL_identz00_500);
		}
	}



/* read-jfile */
	BGL_EXPORTED_DEF obj_t BGl_readzd2jfilezd2zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 98 */
			{
				obj_t BgL_namez00_255;

				if (STRINGP(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00))
					{	/* Read/jvm.scm 109 */
						if (fexists(BSTRING_TO_STRING
								(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00)))
							{	/* Read/jvm.scm 113 */
								BgL_namez00_255 =
									BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00;
							BgL_zc3anonymousza31698ze3z83_256:
								{	/* Read/jvm.scm 100 */
									obj_t BgL_portz00_257;

									{	/* Read/jvm.scm 100 */

										BgL_portz00_257 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_namez00_255, BTRUE);
									}
									{	/* Read/jvm.scm 101 */
										obj_t BgL_list1699z00_258;

										{	/* Read/jvm.scm 101 */
											obj_t BgL_arg1701z00_260;

											{	/* Read/jvm.scm 101 */
												obj_t BgL_arg1702z00_261;

												{	/* Read/jvm.scm 101 */
													obj_t BgL_arg1704z00_263;

													BgL_arg1704z00_263 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
													BgL_arg1702z00_261 =
														MAKE_PAIR(BGl_string1810z00zzread_jvmz00,
														BgL_arg1704z00_263);
												}
												BgL_arg1701z00_260 =
													MAKE_PAIR(BgL_namez00_255, BgL_arg1702z00_261);
											}
											BgL_list1699z00_258 =
												MAKE_PAIR(BGl_string1811z00zzread_jvmz00,
												BgL_arg1701z00_260);
										}
										BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
											BgL_list1699z00_258);
									}
									if (INPUT_PORTP(BgL_portz00_257))
										{	/* Read/jvm.scm 104 */
											obj_t BgL_val1614z00_265;

											BgL_val1614z00_265 =
												BGl_zc3exitza31709ze3z83zzread_jvmz00(BgL_namez00_255,
												BgL_portz00_257);
											bgl_close_input_port(BgL_portz00_257);
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val1614z00_265)))
												{	/* Read/jvm.scm 106 */
													return
														BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
														(BgL_val1614z00_265), CDR(BgL_val1614z00_265));
												}
											else
												{	/* Read/jvm.scm 106 */
													return BgL_val1614z00_265;
												}
										}
									else
										{	/* Read/jvm.scm 102 */
											return
												BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
														(long) 1)), BGl_string1812z00zzread_jvmz00,
												BgL_namez00_255, BNIL);
							}}}
						else
							{	/* Read/jvm.scm 113 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											1)), BGl_string1813z00zzread_jvmz00,
									BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00, BNIL);
					}}
				else
					{	/* Read/jvm.scm 109 */
						if (fexists(BSTRING_TO_STRING
								(BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00)))
							{
								obj_t BgL_namez00_673;

								BgL_namez00_673 =
									BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00;
								BgL_namez00_255 = BgL_namez00_673;
								goto BgL_zc3anonymousza31698ze3z83_256;
							}
						else
							{	/* Read/jvm.scm 110 */
								return CNST_TABLE_REF(((long) 2));
		}}}}
	}



/* <exit:1709> */
	obj_t BGl_zc3exitza31709ze3z83zzread_jvmz00(obj_t BgL_namez00_509,
		obj_t BgL_portz00_508)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 106 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1615z00_270;

			if (SET_EXIT(BgL_an_exit1615z00_270))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1615z00_270 = (void *) jmpbuf;
					{	/* Read/jvm.scm 106 */

						PUSH_EXIT(BgL_an_exit1615z00_270, ((long) 0));
						{	/* Read/jvm.scm 105 */
							obj_t BgL_val1616z00_271;

							BgL_val1616z00_271 =
								BGl_dozd2readzd2jfilez00zzread_jvmz00(BgL_portz00_508,
								BgL_namez00_509);
							POP_EXIT();
							return BgL_val1616z00_271;
						}
					}
				}
		}
	}



/* _read-jfile */
	obj_t BGl__readzd2jfilezd2zzread_jvmz00(obj_t BgL_envz00_501)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 98 */
			return BGl_readzd2jfilezd2zzread_jvmz00();
		}
	}



/* do-read-jfile */
	obj_t BGl_dozd2readzd2jfilez00zzread_jvmz00(obj_t BgL_portz00_6,
		obj_t BgL_jfnamez00_7)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 121 */
			{	/* Read/jvm.scm 122 */
				obj_t BgL_objz00_276;

				BgL_objz00_276 = BGl_readz00zz__readerz00(BgL_portz00_6, BTRUE);
				{	/* Read/jvm.scm 122 */
					obj_t BgL_eofz00_277;

					{	/* Read/jvm.scm 123 */

						{	/* Read/jvm.scm 123 */

							BgL_eofz00_277 = BGl_readz00zz__readerz00(BgL_portz00_6, BFALSE);
						}
					}
					{	/* Read/jvm.scm 123 */

						if (EOF_OBJECTP(BgL_objz00_276))
							{	/* Read/jvm.scm 125 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											1)), BGl_string1814z00zzread_jvmz00, BgL_objz00_276,
									BNIL);
							}
						else
							{	/* Read/jvm.scm 125 */
								if (EOF_OBJECTP(BgL_eofz00_277))
									{
										obj_t BgL_objz00_282;

										BgL_objz00_282 = BgL_objz00_276;
									BgL_zc3anonymousza31714ze3z83_283:
										if (NULLP(BgL_objz00_282))
											{	/* Read/jvm.scm 131 */
												return CNST_TABLE_REF(((long) 2));
											}
										else
											{

												{	/* Read/jvm.scm 133 */
													obj_t BgL_ezd21391zd2_289;

													BgL_ezd21391zd2_289 = CAR(BgL_objz00_282);
													if (PAIRP(BgL_ezd21391zd2_289))
														{	/* Read/jvm.scm 133 */
															obj_t BgL_carzd21396zd2_291;

															obj_t BgL_cdrzd21397zd2_292;

															BgL_carzd21396zd2_291 = CAR(BgL_ezd21391zd2_289);
															BgL_cdrzd21397zd2_292 = CDR(BgL_ezd21391zd2_289);
															if (SYMBOLP(BgL_carzd21396zd2_291))
																{	/* Read/jvm.scm 133 */
																	if (PAIRP(BgL_cdrzd21397zd2_292))
																		{	/* Read/jvm.scm 133 */
																			obj_t BgL_carzd21402zd2_295;

																			BgL_carzd21402zd2_295 =
																				CAR(BgL_cdrzd21397zd2_292);
																			if (STRINGP(BgL_carzd21402zd2_295))
																				{	/* Read/jvm.scm 133 */
																					if (NULLP(CDR(BgL_cdrzd21397zd2_292)))
																						{	/* Read/jvm.scm 133 */
																							obj_t BgL_mz00_448;

																							obj_t BgL_pckgz00_449;

																							BgL_mz00_448 =
																								BgL_carzd21396zd2_291;
																							BgL_pckgz00_449 =
																								BgL_carzd21402zd2_295;
																							BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																								(BgL_mz00_448, BgL_pckgz00_449,
																								BNIL);
																							{
																								obj_t BgL_objz00_708;

																								BgL_objz00_708 =
																									CDR(BgL_objz00_282);
																								BgL_objz00_282 = BgL_objz00_708;
																								goto
																									BgL_zc3anonymousza31714ze3z83_283;
																							}
																						}
																					else
																						{	/* Read/jvm.scm 133 */
																						BgL_tagzd21390zd2_288:
																							{	/* Read/jvm.scm 138 */
																								obj_t BgL_arg1730z00_301;

																								obj_t BgL_arg1732z00_303;

																								BgL_arg1730z00_301 =
																									CNST_TABLE_REF(((long) 1));
																								BgL_arg1732z00_303 =
																									CAR(BgL_objz00_282);
																								return
																									BGl_userzd2errorzd2zztools_errorz00
																									(BgL_arg1730z00_301,
																									BGl_string1814z00zzread_jvmz00,
																									BgL_arg1732z00_303, BNIL);
																							}
																						}
																				}
																			else
																				{	/* Read/jvm.scm 133 */
																					goto BgL_tagzd21390zd2_288;
																				}
																		}
																	else
																		{	/* Read/jvm.scm 133 */
																			goto BgL_tagzd21390zd2_288;
																		}
																}
															else
																{	/* Read/jvm.scm 133 */
																	goto BgL_tagzd21390zd2_288;
																}
														}
													else
														{	/* Read/jvm.scm 133 */
															goto BgL_tagzd21390zd2_288;
														}
												}
											}
									}
								else
									{	/* Read/jvm.scm 127 */
										return
											BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
													1)), BGl_string1814z00zzread_jvmz00, BgL_eofz00_277,
											BNIL);
		}}}}}}
	}



/* add-current-module-qualified-type-name! */
	obj_t
		BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 145 */
			{	/* Read/jvm.scm 147 */
				obj_t BgL_qtypez00_309;

				BgL_qtypez00_309 =
					BGl_getpropz00zz__r4_symbols_6_4z00
					(BGl_za2moduleza2z00zzmodule_modulez00,
					BGl_za2jvmzd2markza2zd2zzread_jvmz00);
				if (STRINGP(BgL_qtypez00_309))
					{	/* Read/jvm.scm 148 */
						return BFALSE;
					}
				else
					{	/* Read/jvm.scm 153 */
						bool_t BgL_testz00_718;

						if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
							{	/* Read/jvm.scm 153 */
								BgL_testz00_718 =
									(BGl_za2passza2z00zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 3)));
							}
						else
							{	/* Read/jvm.scm 153 */
								BgL_testz00_718 = ((bool_t) 1);
							}
						if (BgL_testz00_718)
							{	/* Read/jvm.scm 156 */
								obj_t BgL_qtz00_312;

								{	/* Read/jvm.scm 156 */
									bool_t BgL_testz00_723;

									{	/* Read/jvm.scm 156 */
										obj_t BgL_auxz00_724;

										BgL_auxz00_724 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_testz00_723 = STRINGP(BgL_auxz00_724);
									}
									if (BgL_testz00_723)
										{	/* Read/jvm.scm 156 */
											BgL_qtz00_312 =
												BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00(CAR
													(BGl_za2srczd2filesza2zd2zzengine_paramz00)));
										}
									else
										{	/* Read/jvm.scm 156 */
											BgL_qtz00_312 = BGl_string1815z00zzread_jvmz00;
										}
								}
								BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
									(BGl_za2moduleza2z00zzmodule_modulez00, BgL_qtz00_312, BNIL);
								return BgL_qtz00_312;
							}
						else
							{	/* Read/jvm.scm 162 */
								obj_t BgL_qtz00_318;

								BgL_qtz00_318 =
									BGl_prefixz00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
								BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
									(BGl_za2moduleza2z00zzmodule_modulez00, BgL_qtz00_318, BNIL);
								return BgL_qtz00_318;
							}
					}
			}
		}
	}



/* module->qualified-type */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t
		BgL_modulez00_8)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 172 */
			{	/* Read/jvm.scm 173 */
				obj_t BgL_bz00_321;

				BgL_bz00_321 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_8,
					BGl_za2jvmzd2markza2zd2zzread_jvmz00);
				if (STRINGP(BgL_bz00_321))
					{	/* Read/jvm.scm 175 */
						return BgL_bz00_321;
					}
				else
					{	/* Read/jvm.scm 175 */
						if ((BgL_modulez00_8 == BGl_za2moduleza2z00zzmodule_modulez00))
							{	/* Read/jvm.scm 177 */
								return
									BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00
									();
							}
						else
							{	/* Read/jvm.scm 180 */
								obj_t BgL_abasez00_324;

								{	/* Read/jvm.scm 180 */
									obj_t BgL_l1617z00_344;

									BgL_l1617z00_344 =
										BGl_za2accesszd2filesza2zd2zzengine_paramz00;
									if (NULLP(BgL_l1617z00_344))
										{	/* Read/jvm.scm 180 */
											BgL_abasez00_324 = BNIL;
										}
									else
										{	/* Read/jvm.scm 180 */
											obj_t BgL_head1619z00_346;

											BgL_head1619z00_346 =
												MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
													(BgL_l1617z00_344)), BNIL);
											{	/* Read/jvm.scm 180 */
												obj_t BgL_g1622z00_347;

												BgL_g1622z00_347 = CDR(BgL_l1617z00_344);
												{
													obj_t BgL_l1617z00_349;

													obj_t BgL_tail1620z00_350;

													BgL_l1617z00_349 = BgL_g1622z00_347;
													BgL_tail1620z00_350 = BgL_head1619z00_346;
												BgL_zc3anonymousza31770ze3z83_351:
													if (NULLP(BgL_l1617z00_349))
														{	/* Read/jvm.scm 180 */
															BgL_abasez00_324 = BgL_head1619z00_346;
														}
													else
														{	/* Read/jvm.scm 180 */
															obj_t BgL_newtail1621z00_353;

															BgL_newtail1621z00_353 =
																MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
																	(BgL_l1617z00_349)), BNIL);
															SET_CDR(BgL_tail1620z00_350,
																BgL_newtail1621z00_353);
															{
																obj_t BgL_tail1620z00_753;

																obj_t BgL_l1617z00_751;

																BgL_l1617z00_751 = CDR(BgL_l1617z00_349);
																BgL_tail1620z00_753 = BgL_newtail1621z00_353;
																BgL_tail1620z00_350 = BgL_tail1620z00_753;
																BgL_l1617z00_349 = BgL_l1617z00_751;
																goto BgL_zc3anonymousza31770ze3z83_351;
															}
														}
												}
											}
										}
								}
								{	/* Read/jvm.scm 180 */
									obj_t BgL_filesz00_325;

									{	/* Read/jvm.scm 181 */
										obj_t BgL_fun1768z00_343;

										BgL_fun1768z00_343 =
											BGl_bigloozd2modulezd2resolverz00zz__modulez00();
										BgL_filesz00_325 =
											PROCEDURE_ENTRY(BgL_fun1768z00_343) (BgL_fun1768z00_343,
											BgL_modulez00_8, BgL_abasez00_324, BEOA);
									}
									{	/* Read/jvm.scm 181 */
										obj_t BgL_defaultz00_326;

										if (PAIRP(BgL_filesz00_325))
											{	/* Read/jvm.scm 182 */
												BgL_defaultz00_326 =
													BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00(CAR
														(BgL_filesz00_325)));
											}
										else
											{	/* Read/jvm.scm 184 */
												obj_t BgL_res1797z00_479;

												{	/* Read/jvm.scm 184 */
													obj_t BgL_arg2063z00_478;

													BgL_arg2063z00_478 =
														SYMBOL_TO_STRING(BgL_modulez00_8);
													BgL_res1797z00_479 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_478);
												}
												BgL_defaultz00_326 = BgL_res1797z00_479;
											}
										{	/* Read/jvm.scm 182 */

											{	/* Read/jvm.scm 185 */
												bool_t BgL_testz00_764;

												{	/* Read/jvm.scm 185 */
													obj_t BgL_arg1758z00_338;

													BgL_arg1758z00_338 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_766;

														BgL_auxz00_766 =
															(BgL_backendz00_bglt) (BgL_arg1758z00_338);
														BgL_testz00_764 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_766))->
															BgL_qualifiedzd2typeszd2);
													}
												}
												if (BgL_testz00_764)
													{	/* Read/jvm.scm 187 */
														obj_t BgL_arg1747z00_328;

														{	/* Read/jvm.scm 187 */
															obj_t BgL_arg1756z00_336;

															{	/* Read/jvm.scm 188 */
																obj_t BgL_res1798z00_483;

																{	/* Read/jvm.scm 188 */
																	obj_t BgL_arg2063z00_482;

																	BgL_arg2063z00_482 =
																		SYMBOL_TO_STRING(BgL_modulez00_8);
																	BgL_res1798z00_483 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_482);
																}
																BgL_arg1756z00_336 = BgL_res1798z00_483;
															}
															BgL_arg1747z00_328 =
																string_append_3(BGl_string1816z00zzread_jvmz00,
																BgL_arg1756z00_336,
																BGl_string1817z00zzread_jvmz00);
														}
														{	/* Read/jvm.scm 186 */
															obj_t BgL_list1750z00_331;

															{	/* Read/jvm.scm 186 */
																obj_t BgL_arg1751z00_332;

																{	/* Read/jvm.scm 186 */
																	obj_t BgL_arg1753z00_333;

																	{	/* Read/jvm.scm 186 */
																		obj_t BgL_arg1754z00_334;

																		BgL_arg1754z00_334 =
																			MAKE_PAIR(BGl_string1818z00zzread_jvmz00,
																			BNIL);
																		BgL_arg1753z00_333 =
																			MAKE_PAIR(BgL_defaultz00_326,
																			BgL_arg1754z00_334);
																	}
																	BgL_arg1751z00_332 =
																		MAKE_PAIR(BGl_string1819z00zzread_jvmz00,
																		BgL_arg1753z00_333);
																}
																BgL_list1750z00_331 =
																	MAKE_PAIR(BgL_arg1747z00_328,
																	BgL_arg1751z00_332);
															}
															BGl_warningz00zz__errorz00(BgL_list1750z00_331);
														}
													}
												else
													{	/* Read/jvm.scm 185 */
														BFALSE;
													}
											}
											BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
												(BgL_modulez00_8, BgL_defaultz00_326, BNIL);
											return BgL_defaultz00_326;
										}
									}
								}
							}
					}
			}
		}
	}



/* _module->qualified-type */
	obj_t BGl__modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t BgL_envz00_502,
		obj_t BgL_modulez00_503)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 172 */
			return
				BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_modulez00_503);
		}
	}



/* source->qualified-type */
	BGL_EXPORTED_DEF obj_t BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t
		BgL_filez00_9)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 198 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_9)))
				{	/* Read/jvm.scm 199 */
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_9, BGl_proc1820z00zzread_jvmz00);
				}
			else
				{	/* Read/jvm.scm 199 */
					return BFALSE;
				}
		}
	}



/* _source->qualified-type */
	obj_t BGl__sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t BgL_envz00_505,
		obj_t BgL_filez00_506)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 198 */
			return BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_filez00_506);
		}
	}



/* <anonymous:1785> */
	obj_t BGl_zc3anonymousza31785ze3z83zzread_jvmz00(obj_t BgL_envz00_507)
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 201 */
			{

				{	/* Read/jvm.scm 202 */
					obj_t BgL_ezd21408zd2_368;

					{	/* Read/jvm.scm 202 */
						obj_t BgL_arg1792z00_376;

						{	/* Read/jvm.scm 202 */
							obj_t BgL_res1799z00_486;

							{	/* Read/jvm.scm 202 */
								obj_t BgL_auxz00_784;

								BgL_auxz00_784 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1799z00_486 = BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_784);
							}
							BgL_arg1792z00_376 = BgL_res1799z00_486;
						}
						{	/* Read/jvm.scm 202 */

							{	/* Read/jvm.scm 202 */

								BgL_ezd21408zd2_368 =
									BGl_readz00zz__readerz00(BgL_arg1792z00_376, BFALSE);
							}
						}
					}
					if (PAIRP(BgL_ezd21408zd2_368))
						{	/* Read/jvm.scm 201 */
							obj_t BgL_cdrzd21412zd2_370;

							BgL_cdrzd21412zd2_370 = CDR(BgL_ezd21408zd2_368);
							if ((CAR(BgL_ezd21408zd2_368) == CNST_TABLE_REF(((long) 4))))
								{	/* Read/jvm.scm 201 */
									if (PAIRP(BgL_cdrzd21412zd2_370))
										{	/* Read/jvm.scm 201 */
											return
												BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(CAR
												(BgL_cdrzd21412zd2_370));
										}
									else
										{	/* Read/jvm.scm 201 */
											return BFALSE;
										}
								}
							else
								{	/* Read/jvm.scm 201 */
									return BFALSE;
								}
						}
					else
						{	/* Read/jvm.scm 201 */
							return BFALSE;
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_jvmz00()
	{
		AN_OBJECT;
		{	/* Read/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1821z00zzread_jvmz00));
		}
	}

#ifdef __cplusplus
}
#endif
