/*===========================================================================*/
/*   (SawMsil/names.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/names.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_wclassz00_bgl
	{
		obj_t BgL_itszd2classzd2;
	}                *BgL_wclassz00_bglt;

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;


	extern obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_tclassz00_bglt);
	static obj_t BGl__msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_wclassz00zzobject_classz00;
	static obj_t BGl__globalzd2fullnamezd2zzmsil_namesz00(obj_t, obj_t);
	static obj_t BGl_buildzd2typezd2namez00zzmsil_namesz00(BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzmsil_namesz00();
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmsil_namesz00();
	BGL_EXPORTED_DECL obj_t BGl_stdzd2typenamezd2zzmsil_namesz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_wclassz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2simplenamezd2zzmsil_namesz00(BgL_globalz00_bglt);
	static obj_t BGl__msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00(obj_t,
		obj_t);
	extern obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl__globalzd2simplenamezd2zzmsil_namesz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_namesz00();
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2fullnamezd2zzmsil_namesz00(BgL_globalz00_bglt);
	extern obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_jclassz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_namesz00 = BUNSPEC;
	extern obj_t BGl_jarrayz00zzforeign_jtypez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzmsil_namesz00();
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2za2basiczd2typeza2za2zd2zzmsil_namesz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_namesz00();
	static obj_t BGl__stdzd2typenamezd2zzmsil_namesz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_za2za2libzd2typeza2za2zd2zzmsil_namesz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00(BgL_typez00_bglt);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_namesz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string3802z00zzmsil_namesz00,
		BgL_bgl_string3802za700za7za7m3812za7, "'", 1);
	      DEFINE_STRING(BGl_string3803z00zzmsil_namesz00,
		BgL_bgl_string3803za700za7za7m3813za7, "'::'", 4);
	      DEFINE_STRING(BGl_string3804z00zzmsil_namesz00,
		BgL_bgl_string3804za700za7za7m3814za7, " '", 2);
	      DEFINE_STRING(BGl_string3805z00zzmsil_namesz00,
		BgL_bgl_string3805za700za7za7m3815za7, "class bigloo.bobject", 20);
	      DEFINE_STRING(BGl_string3806z00zzmsil_namesz00,
		BgL_bgl_string3806za700za7za7m3816za7, "class '", 7);
	      DEFINE_STRING(BGl_string3807z00zzmsil_namesz00,
		BgL_bgl_string3807za700za7za7m3817za7, "[]", 2);
	      DEFINE_STRING(BGl_string3808z00zzmsil_namesz00,
		BgL_bgl_string3808za700za7za7m3818za7, "msil_names", 10);
	      DEFINE_STRING(BGl_string3809z00zzmsil_namesz00,
		BgL_bgl_string3809za700za7za7m3819za7,
		"object ((exception . \"class System.Exception\") (bexception . \"class bigloo.bexception\") (exit . \"class 'bigloo.exit'\") (fstrings . \"class System.String[]\") (fstring . \"class System.String\") (belong . \"class bigloo.belong\") (bllong . \"class bigloo.bllong\")) ((bool . \"bool\") (char . \"unsigned int8\") (uchar . \"int32\") (byte . \"int8\") (ubyte . \"unsigned int8\") (ucs2 . \"char\") (void . \"void\") (short . \"int16\") (ushort . \"unsigned int16\") (int . \"int32\") (uint . \"unsigned int32\") (long . \"int32\") (ulong . \"unsigned int32\") (elong . \"int64\") (uelong . \"unsigned int64\") (llong . \"int64\") (ullong . \"unsigned int64\") (float . \"float32\") (double . \"float64\") (magic . \"class System.Object\") (obj . \"class System.Object\") (pair-nil . \"class System.Object\") (vector . \"class System.Object[]\") (void* . \"class System.Object\") (tvector . \"class System.Object\") (s8vector . \"class bigloo.s8vector\") (cnst* . \"class System.Object[]\") (bstring . \"unsigned int8[]\")"
		" (ucs2string . \"char[]\") (string . \"unsigned int8[]\") (procedure-el . \"class System.Object[]\") (procedure-el1 . \"class System.Object\") (dynamic-env . \"class bigloo.bgldynamic\") (struct . \"class bigloo.bstruct\") (epair . \"class bigloo.extended_pair\") (output-port . \"class bigloo.output_port\") (input-port . \"class bigloo.input_port\") (binary-port . \"class bigloo.binary_port\")) ",
		1332);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2fullnamezd2envz00zzmsil_namesz00,
		BgL_bgl__globalza7d2fullna3820za7, BGl__globalzd2fullnamezd2zzmsil_namesz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_msilzd2setzd2typezd2namesz12zd2envz12zzmsil_namesz00,
		BgL_bgl__msilza7d2setza7d2ty3821z00,
		BGl__msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2simplenamezd2envz00zzmsil_namesz00,
		BgL_bgl__globalza7d2simple3822za7,
		BGl__globalzd2simplenamezd2zzmsil_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_msilzd2setzd2globalzd2namesz12zd2envz12zzmsil_namesz00,
		BgL_bgl__msilza7d2setza7d2gl3823z00,
		BGl__msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stdzd2typenamezd2envz00zzmsil_namesz00,
		BgL_bgl__stdza7d2typenameza73824z00, BGl__stdzd2typenamezd2zzmsil_namesz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long
		BgL_checksumz00_1405, char *BgL_fromz00_1406)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_namesz00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_namesz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_namesz00();
					BGl_cnstzd2initzd2zzmsil_namesz00();
					BGl_importedzd2moduleszd2initz00zzmsil_namesz00();
					BGl_toplevelzd2initzd2zzmsil_namesz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_names");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"msil_names");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_names");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_names");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			{	/* SawMsil/names.scm 1 */
				obj_t BgL_cportz00_1397;

				BgL_cportz00_1397 =
					bgl_open_input_string(BGl_string3809z00zzmsil_namesz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1398;

					BgL_iz00_1398 = ((long) 2);
				BgL_loopz00_1399:
					if ((BgL_iz00_1398 == ((long) -1)))
						{	/* SawMsil/names.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/names.scm 1 */
							{	/* SawMsil/names.scm 1 */
								obj_t BgL_arg3811z00_1401;

								{	/* SawMsil/names.scm 1 */

									{	/* SawMsil/names.scm 1 */
										obj_t BgL_locationz00_1403;

										BgL_locationz00_1403 = BBOOL(((bool_t) 0));
										{	/* SawMsil/names.scm 1 */

											BgL_arg3811z00_1401 =
												BGl_readz00zz__readerz00(BgL_cportz00_1397,
												BgL_locationz00_1403);
										}
									}
								}
								{	/* SawMsil/names.scm 1 */
									int BgL_auxz00_1424;

									BgL_auxz00_1424 = (int) (BgL_iz00_1398);
									CNST_TABLE_SET(BgL_auxz00_1424, BgL_arg3811z00_1401);
							}}
							{	/* SawMsil/names.scm 1 */
								int BgL_auxz00_1404;

								BgL_auxz00_1404 = (int) ((BgL_iz00_1398 - ((long) 1)));
								{
									long BgL_iz00_1429;

									BgL_iz00_1429 = (long) (BgL_auxz00_1404);
									BgL_iz00_1398 = BgL_iz00_1429;
									goto BgL_loopz00_1399;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			BGl_za2za2basiczd2typeza2za2zd2zzmsil_namesz00 =
				CNST_TABLE_REF(((long) 0));
			return (BGl_za2za2libzd2typeza2za2zd2zzmsil_namesz00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}
	}



/* global-fullname */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2fullnamezd2zzmsil_namesz00(BgL_globalz00_bglt BgL_varz00_1)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 19 */
			{
				BgL_variablez00_bglt BgL_auxz00_1433;

				BgL_auxz00_1433 = (BgL_variablez00_bglt) (BgL_varz00_1);
				return (((BgL_variablez00_bglt) CREF(BgL_auxz00_1433))->BgL_namez00);
			}
		}
	}



/* _global-fullname */
	obj_t BGl__globalzd2fullnamezd2zzmsil_namesz00(obj_t BgL_envz00_1387,
		obj_t BgL_varz00_1388)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 19 */
			return
				BGl_globalzd2fullnamezd2zzmsil_namesz00(
				(BgL_globalz00_bglt) (BgL_varz00_1388));
		}
	}



/* global-simplename */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2simplenamezd2zzmsil_namesz00(BgL_globalz00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 22 */
			{	/* SawMsil/names.scm 23 */
				obj_t BgL_sz00_869;

				{
					BgL_variablez00_bglt BgL_auxz00_1438;

					BgL_auxz00_1438 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_sz00_869 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1438))->BgL_namez00);
				}
				{	/* SawMsil/names.scm 24 */
					long BgL_nz00_870;

					BgL_nz00_870 = STRING_LENGTH(BgL_sz00_869);
					{
						long BgL_iz00_872;

						BgL_iz00_872 = ((long) 0);
					BgL_zc3anonymousza33709ze3z83_873:
						if (
							(STRING_REF(BgL_sz00_869, BgL_iz00_872) == ((unsigned char) ':')))
							{	/* SawMsil/names.scm 26 */
								return
									c_substring(BgL_sz00_869,
									(BgL_iz00_872 + ((long) 2)), BgL_nz00_870);
							}
						else
							{
								long BgL_iz00_1447;

								BgL_iz00_1447 = (BgL_iz00_872 + ((long) 1));
								BgL_iz00_872 = BgL_iz00_1447;
								goto BgL_zc3anonymousza33709ze3z83_873;
							}
					}
				}
			}
		}
	}



/* _global-simplename */
	obj_t BGl__globalzd2simplenamezd2zzmsil_namesz00(obj_t BgL_envz00_1389,
		obj_t BgL_varz00_1390)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 22 */
			return
				BGl_globalzd2simplenamezd2zzmsil_namesz00(
				(BgL_globalz00_bglt) (BgL_varz00_1390));
		}
	}



/* msil-set-global-names! */
	BGL_EXPORTED_DEF obj_t
		BGl_msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00(obj_t BgL_varz00_3)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 30 */
			{	/* SawMsil/names.scm 33 */
				obj_t BgL_arg3714z00_880;

				{	/* SawMsil/names.scm 33 */
					obj_t BgL_arg3715z00_881;

					obj_t BgL_arg3717z00_883;

					obj_t BgL_arg3719z00_885;

					{	/* SawMsil/names.scm 33 */
						BgL_typez00_bglt BgL_obj1509z00_1355;

						{
							BgL_variablez00_bglt BgL_auxz00_1451;

							BgL_auxz00_1451 = (BgL_variablez00_bglt) (BgL_varz00_3);
							BgL_obj1509z00_1355 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1451))->BgL_typez00);
						}
						BgL_arg3715z00_881 =
							(((BgL_typez00_bglt) CREF(BgL_obj1509z00_1355))->BgL_namez00);
					}
					{	/* SawMsil/names.scm 34 */
						obj_t BgL_arg3728z00_894;

						{
							BgL_globalz00_bglt BgL_auxz00_1455;

							BgL_auxz00_1455 = (BgL_globalz00_bglt) (BgL_varz00_3);
							BgL_arg3728z00_894 =
								(((BgL_globalz00_bglt) CREF(BgL_auxz00_1455))->BgL_modulez00);
						}
						BgL_arg3717z00_883 =
							BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
							(BgL_arg3728z00_894);
					}
					{
						BgL_variablez00_bglt BgL_auxz00_1459;

						BgL_auxz00_1459 = (BgL_variablez00_bglt) (BgL_varz00_3);
						BgL_arg3719z00_885 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1459))->BgL_namez00);
					}
					{	/* SawMsil/names.scm 33 */
						obj_t BgL_list3721z00_887;

						{	/* SawMsil/names.scm 33 */
							obj_t BgL_arg3722z00_888;

							{	/* SawMsil/names.scm 33 */
								obj_t BgL_arg3723z00_889;

								{	/* SawMsil/names.scm 33 */
									obj_t BgL_arg3724z00_890;

									{	/* SawMsil/names.scm 33 */
										obj_t BgL_arg3725z00_891;

										{	/* SawMsil/names.scm 33 */
											obj_t BgL_arg3726z00_892;

											BgL_arg3726z00_892 =
												MAKE_PAIR(BGl_string3802z00zzmsil_namesz00, BNIL);
											BgL_arg3725z00_891 =
												MAKE_PAIR(BgL_arg3719z00_885, BgL_arg3726z00_892);
										}
										BgL_arg3724z00_890 =
											MAKE_PAIR(BGl_string3803z00zzmsil_namesz00,
											BgL_arg3725z00_891);
									}
									BgL_arg3723z00_889 =
										MAKE_PAIR(BgL_arg3717z00_883, BgL_arg3724z00_890);
								}
								BgL_arg3722z00_888 =
									MAKE_PAIR(BGl_string3804z00zzmsil_namesz00,
									BgL_arg3723z00_889);
							}
							BgL_list3721z00_887 =
								MAKE_PAIR(BgL_arg3715z00_881, BgL_arg3722z00_888);
						}
						BgL_arg3714z00_880 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3721z00_887);
					}
				}
				{
					BgL_variablez00_bglt BgL_auxz00_1469;

					BgL_auxz00_1469 = (BgL_variablez00_bglt) (BgL_varz00_3);
					return
						((((BgL_variablez00_bglt) CREF(BgL_auxz00_1469))->BgL_namez00) =
						((obj_t) BgL_arg3714z00_880), BUNSPEC);
				}
			}
		}
	}



/* _msil-set-global-names! */
	obj_t BGl__msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00(obj_t
		BgL_envz00_1391, obj_t BgL_varz00_1392)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 30 */
			return
				BGl_msilzd2setzd2globalzd2namesz12zc0zzmsil_namesz00(BgL_varz00_1392);
		}
	}



/* std-typename */
	BGL_EXPORTED_DEF obj_t BGl_stdzd2typenamezd2zzmsil_namesz00(obj_t BgL_idz00_4)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 93 */
			{	/* SawMsil/names.scm 95 */
				obj_t BgL_g3705z00_895;

				BgL_g3705z00_895 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_4,
					BGl_za2za2basiczd2typeza2za2zd2zzmsil_namesz00);
				if (CBOOL(BgL_g3705z00_895))
					{	/* SawMsil/names.scm 95 */
						return CDR(BgL_g3705z00_895);
					}
				else
					{	/* SawMsil/names.scm 96 */
						obj_t BgL_g3707z00_897;

						BgL_g3707z00_897 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_4,
							BGl_za2za2libzd2typeza2za2zd2zzmsil_namesz00);
						if (CBOOL(BgL_g3707z00_897))
							{	/* SawMsil/names.scm 96 */
								return CDR(BgL_g3707z00_897);
							}
						else
							{	/* SawMsil/names.scm 96 */
								return BFALSE;
							}
					}
			}
		}
	}



/* _std-typename */
	obj_t BGl__stdzd2typenamezd2zzmsil_namesz00(obj_t BgL_envz00_1393,
		obj_t BgL_idz00_1394)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 93 */
			return BGl_stdzd2typenamezd2zzmsil_namesz00(BgL_idz00_1394);
		}
	}



/* msil-set-type-names! */
	BGL_EXPORTED_DEF obj_t
		BGl_msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00(BgL_typez00_bglt
		BgL_typez00_5)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 99 */
			{
				obj_t BgL_auxz00_1482;

				BgL_auxz00_1482 =
					BGl_buildzd2typezd2namez00zzmsil_namesz00(BgL_typez00_5);
				return
					((((BgL_typez00_bglt) CREF(BgL_typez00_5))->BgL_namez00) =
					((obj_t) BgL_auxz00_1482), BUNSPEC);
			}
		}
	}



/* _msil-set-type-names! */
	obj_t BGl__msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00(obj_t
		BgL_envz00_1395, obj_t BgL_typez00_1396)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 99 */
			return
				BGl_msilzd2setzd2typezd2namesz12zc0zzmsil_namesz00(
				(BgL_typez00_bglt) (BgL_typez00_1396));
		}
	}



/* build-type-name */
	obj_t BGl_buildzd2typezd2namez00zzmsil_namesz00(BgL_typez00_bglt
		BgL_typez00_6)
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 102 */
			{	/* SawMsil/names.scm 106 */
				bool_t BgL_testz00_1487;

				{	/* SawMsil/names.scm 106 */
					obj_t BgL_obj3290z00_1365;

					BgL_obj3290z00_1365 = (obj_t) (BgL_typez00_6);
					BgL_testz00_1487 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3290z00_1365,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_testz00_1487)
					{	/* SawMsil/names.scm 106 */
						if (
							((((BgL_typez00_bglt) CREF(BgL_typez00_6))->BgL_idz00) ==
								CNST_TABLE_REF(((long) 2))))
							{	/* SawMsil/names.scm 107 */
								return BGl_string3805z00zzmsil_namesz00;
							}
						else
							{	/* SawMsil/names.scm 107 */
								return
									string_append_3(BGl_string3806z00zzmsil_namesz00,
									BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(
										(BgL_tclassz00_bglt) (BgL_typez00_6)),
									BGl_string3802z00zzmsil_namesz00);
							}
					}
				else
					{	/* SawMsil/names.scm 110 */
						bool_t BgL_testz00_1497;

						{	/* SawMsil/names.scm 110 */
							obj_t BgL_obj3460z00_1368;

							BgL_obj3460z00_1368 = (obj_t) (BgL_typez00_6);
							BgL_testz00_1497 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3460z00_1368,
								BGl_wclassz00zzobject_classz00);
						}
						if (BgL_testz00_1497)
							{	/* SawMsil/names.scm 110 */
								return
									string_append_3(BGl_string3806z00zzmsil_namesz00,
									BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(
										(BgL_wclassz00_bglt) (BgL_typez00_6)),
									BGl_string3802z00zzmsil_namesz00);
							}
						else
							{	/* SawMsil/names.scm 112 */
								bool_t BgL_testz00_1503;

								{	/* SawMsil/names.scm 112 */
									obj_t BgL_obj3385z00_1370;

									BgL_obj3385z00_1370 = (obj_t) (BgL_typez00_6);
									BgL_testz00_1503 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj3385z00_1370,
										BGl_jclassz00zzobject_classz00);
								}
								if (BgL_testz00_1503)
									{	/* SawMsil/names.scm 112 */
										return
											string_append_3(BGl_string3806z00zzmsil_namesz00,
											BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(
												(BgL_jclassz00_bglt) (BgL_typez00_6)),
											BGl_string3802z00zzmsil_namesz00);
									}
								else
									{	/* SawMsil/names.scm 114 */
										bool_t BgL_testz00_1509;

										{	/* SawMsil/names.scm 114 */
											obj_t BgL_obj3588z00_1372;

											BgL_obj3588z00_1372 = (obj_t) (BgL_typez00_6);
											BgL_testz00_1509 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3588z00_1372,
												BGl_tvecz00zztvector_tvectorz00);
										}
										if (BgL_testz00_1509)
											{	/* SawMsil/names.scm 115 */
												BgL_typez00_bglt BgL_arg3740z00_912;

												{	/* SawMsil/names.scm 115 */
													BgL_tvecz00_bglt BgL_obj3589z00_1373;

													BgL_obj3589z00_1373 =
														(BgL_tvecz00_bglt) (BgL_typez00_6);
													{
														obj_t BgL_auxz00_1513;

														{	/* SawMsil/names.scm 115 */
															BgL_objectz00_bglt BgL_auxz00_1514;

															BgL_auxz00_1514 =
																(BgL_objectz00_bglt) (BgL_obj3589z00_1373);
															BgL_auxz00_1513 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1514);
														}
														BgL_arg3740z00_912 =
															(((BgL_tvecz00_bglt) CREF(BgL_auxz00_1513))->
															BgL_itemzd2typezd2);
													}
												}
												return
													string_append
													(BGl_buildzd2typezd2namez00zzmsil_namesz00
													(BgL_arg3740z00_912),
													BGl_string3807z00zzmsil_namesz00);
											}
										else
											{	/* SawMsil/names.scm 116 */
												bool_t BgL_testz00_1520;

												{	/* SawMsil/names.scm 116 */
													obj_t BgL_obj3657z00_1377;

													BgL_obj3657z00_1377 = (obj_t) (BgL_typez00_6);
													BgL_testz00_1520 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3657z00_1377,
														BGl_jarrayz00zzforeign_jtypez00);
												}
												if (BgL_testz00_1520)
													{	/* SawMsil/names.scm 117 */
														BgL_typez00_bglt BgL_arg3742z00_914;

														{	/* SawMsil/names.scm 117 */
															BgL_jarrayz00_bglt BgL_obj3658z00_1378;

															BgL_obj3658z00_1378 =
																(BgL_jarrayz00_bglt) (BgL_typez00_6);
															{
																obj_t BgL_auxz00_1524;

																{	/* SawMsil/names.scm 117 */
																	BgL_objectz00_bglt BgL_auxz00_1525;

																	BgL_auxz00_1525 =
																		(BgL_objectz00_bglt) (BgL_obj3658z00_1378);
																	BgL_auxz00_1524 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1525);
																}
																BgL_arg3742z00_914 =
																	(((BgL_jarrayz00_bglt)
																		CREF(BgL_auxz00_1524))->BgL_itemzd2typezd2);
															}
														}
														return
															string_append
															(BGl_buildzd2typezd2namez00zzmsil_namesz00
															(BgL_arg3742z00_914),
															BGl_string3807z00zzmsil_namesz00);
													}
												else
													{	/* SawMsil/names.scm 119 */
														obj_t BgL_idz00_915;

														BgL_idz00_915 =
															(((BgL_typez00_bglt) CREF(BgL_typez00_6))->
															BgL_idz00);
														{	/* SawMsil/names.scm 120 */
															obj_t BgL_slotz00_916;

															BgL_slotz00_916 =
																BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_idz00_915,
																BGl_za2za2basiczd2typeza2za2zd2zzmsil_namesz00);
															if (CBOOL(BgL_slotz00_916))
																{	/* SawMsil/names.scm 121 */
																	return CDR(BgL_slotz00_916);
																}
															else
																{	/* SawMsil/names.scm 121 */
																	return
																		string_append_3
																		(BGl_string3806z00zzmsil_namesz00,
																		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00
																		(BgL_typez00_6),
																		BGl_string3802z00zzmsil_namesz00);
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
	obj_t BGl_genericzd2initzd2zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_namesz00()
	{
		AN_OBJECT;
		{	/* SawMsil/names.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 302809955),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string3808z00zzmsil_namesz00));
		}
	}

#ifdef __cplusplus
}
#endif
