/*===========================================================================*/
/*   (Prof/unit.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Prof/unit.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzprof_walkz00();
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzprof_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2profzd2unitz00zzprof_walkz00();
	extern obj_t BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzprof_walkz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzprof_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzprof_walkz00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzprof_walkz00();
	static obj_t BGl__makezd2profzd2unitz00zzprof_walkz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_libraryzd2moduleszd2initz00zzprof_walkz00();
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2profzd2unitzd2envzd2zzprof_walkz00,
		BgL_bgl__makeza7d2profza7d2u3431z00,
		BGl__makezd2profzd2unitz00zzprof_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3423z00zzprof_walkz00,
		BgL_bgl_string3423za700za7za7p3432za7, "Prof", 4);
	      DEFINE_STRING(BGl_string3424z00zzprof_walkz00,
		BgL_bgl_string3424za700za7za7p3433za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3425z00zzprof_walkz00,
		BgL_bgl_string3425za700za7za7p3434za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3426z00zzprof_walkz00,
		BgL_bgl_string3426za700za7za7p3435za7, "prof_walk", 9);
	      DEFINE_STRING(BGl_string3427z00zzprof_walkz00,
		BgL_bgl_string3427za700za7za7p3436za7,
		"unit begin (begin (pragma \"write_bprof_table()\")) prof pass-started ",
		68);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long
		BgL_checksumz00_1386, char *BgL_fromz00_1387)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzprof_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzprof_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzprof_walkz00();
					BGl_cnstzd2initzd2zzprof_walkz00();
					BGl_importedzd2moduleszd2initz00zzprof_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "prof_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"prof_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"prof_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			{	/* Prof/unit.scm 15 */
				obj_t BgL_cportz00_1378;

				BgL_cportz00_1378 =
					bgl_open_input_string(BGl_string3427z00zzprof_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1379;

					BgL_iz00_1379 = ((long) 4);
				BgL_loopz00_1380:
					if ((BgL_iz00_1379 == ((long) -1)))
						{	/* Prof/unit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Prof/unit.scm 15 */
							{	/* Prof/unit.scm 15 */
								obj_t BgL_arg3430z00_1382;

								{	/* Prof/unit.scm 15 */

									{	/* Prof/unit.scm 15 */
										obj_t BgL_locationz00_1384;

										BgL_locationz00_1384 = BBOOL(((bool_t) 0));
										{	/* Prof/unit.scm 15 */

											BgL_arg3430z00_1382 =
												BGl_readz00zz__readerz00(BgL_cportz00_1378,
												BgL_locationz00_1384);
										}
									}
								}
								{	/* Prof/unit.scm 15 */
									int BgL_auxz00_1403;

									BgL_auxz00_1403 = (int) (BgL_iz00_1379);
									CNST_TABLE_SET(BgL_auxz00_1403, BgL_arg3430z00_1382);
							}}
							{	/* Prof/unit.scm 15 */
								int BgL_auxz00_1385;

								BgL_auxz00_1385 = (int) ((BgL_iz00_1379 - ((long) 1)));
								{
									long BgL_iz00_1408;

									BgL_iz00_1408 = (long) (BgL_auxz00_1385);
									BgL_iz00_1379 = BgL_iz00_1408;
									goto BgL_loopz00_1380;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}
	}



/* make-prof-unit */
	BGL_EXPORTED_DEF obj_t BGl_makezd2profzd2unitz00zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 31 */
			{	/* Prof/unit.scm 32 */
				obj_t BgL_list3350z00_890;

				{	/* Prof/unit.scm 32 */
					obj_t BgL_arg3352z00_892;

					{	/* Prof/unit.scm 32 */
						obj_t BgL_arg3354z00_894;

						BgL_arg3354z00_894 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3352z00_892 =
							MAKE_PAIR(BGl_string3423z00zzprof_walkz00, BgL_arg3354z00_894);
					}
					BgL_list3350z00_890 =
						MAKE_PAIR(BGl_string3424z00zzprof_walkz00, BgL_arg3352z00_892);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3350z00_890);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3423z00zzprof_walkz00;
			{
				obj_t BgL_hooksz00_898;

				obj_t BgL_hnamesz00_899;

				BgL_hooksz00_898 = BNIL;
				BgL_hnamesz00_899 = BNIL;
			BgL_zc3anonymousza33355ze3z83_900:
				if (NULLP(BgL_hooksz00_898))
					{	/* Prof/unit.scm 32 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Prof/unit.scm 32 */
						bool_t BgL_testz00_1420;

						{	/* Prof/unit.scm 32 */
							obj_t BgL_fun3363z00_908;

							BgL_fun3363z00_908 = CAR(BgL_hooksz00_898);
							BgL_testz00_1420 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3363z00_908) (BgL_fun3363z00_908,
									BEOA));
						}
						if (BgL_testz00_1420)
							{
								obj_t BgL_hnamesz00_1427;

								obj_t BgL_hooksz00_1425;

								BgL_hooksz00_1425 = CDR(BgL_hooksz00_898);
								BgL_hnamesz00_1427 = CDR(BgL_hnamesz00_899);
								BgL_hnamesz00_899 = BgL_hnamesz00_1427;
								BgL_hooksz00_898 = BgL_hooksz00_1425;
								goto BgL_zc3anonymousza33355ze3z83_900;
							}
						else
							{	/* Prof/unit.scm 32 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3423z00zzprof_walkz00,
									BGl_string3425z00zzprof_walkz00, CAR(BgL_hnamesz00_899));
							}
					}
			}
			{	/* Prof/unit.scm 33 */
				obj_t BgL_arg3365z00_911;

				obj_t BgL_arg3366z00_912;

				obj_t BgL_arg3367z00_913;

				BgL_arg3365z00_911 = CNST_TABLE_REF(((long) 1));
				BgL_arg3366z00_912 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 100)),
					BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00());
				{	/* Prof/unit.scm 35 */
					bool_t BgL_testz00_1435;

					{	/* Prof/unit.scm 35 */
						obj_t BgL_arg3374z00_920;

						BgL_arg3374z00_920 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_1437;

							BgL_auxz00_1437 = (BgL_backendz00_bglt) (BgL_arg3374z00_920);
							BgL_testz00_1435 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1437))->
								BgL_pragmazd2supportzd2);
					}}
					if (BgL_testz00_1435)
						{	/* Prof/unit.scm 35 */
							BgL_arg3367z00_913 = CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Prof/unit.scm 37 */
							obj_t BgL_arg3371z00_917;

							obj_t BgL_arg3372z00_918;

							BgL_arg3371z00_917 = CNST_TABLE_REF(((long) 3));
							{	/* Prof/unit.scm 37 */
								obj_t BgL_list3373z00_919;

								BgL_list3373z00_919 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg3372z00_918 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
									BgL_list3373z00_919);
							}
							BgL_arg3367z00_913 =
								MAKE_PAIR(BgL_arg3371z00_917, BgL_arg3372z00_918);
				}}
				{	/* Prof/unit.scm 33 */
					obj_t BgL_newz00_1350;

					BgL_newz00_1350 =
						create_struct(CNST_TABLE_REF(((long) 4)), (int) (((long) 5)));
					{	/* Prof/unit.scm 33 */
						int BgL_auxz00_1448;

						BgL_auxz00_1448 = (int) (((long) 4));
						STRUCT_SET(BgL_newz00_1350, BgL_auxz00_1448, BFALSE);
					}
					{	/* Prof/unit.scm 33 */
						int BgL_auxz00_1451;

						BgL_auxz00_1451 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_1350, BgL_auxz00_1451, BTRUE);
					}
					{	/* Prof/unit.scm 33 */
						int BgL_auxz00_1454;

						BgL_auxz00_1454 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_1350, BgL_auxz00_1454, BgL_arg3367z00_913);
					}
					{	/* Prof/unit.scm 33 */
						int BgL_auxz00_1457;

						BgL_auxz00_1457 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1350, BgL_auxz00_1457, BgL_arg3366z00_912);
					}
					{	/* Prof/unit.scm 33 */
						int BgL_auxz00_1460;

						BgL_auxz00_1460 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1350, BgL_auxz00_1460, BgL_arg3365z00_911);
					}
					return BgL_newz00_1350;
				}
			}
		}
	}



/* _make-prof-unit */
	obj_t BGl__makezd2profzd2unitz00zzprof_walkz00(obj_t BgL_envz00_1376)
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 31 */
			return BGl_makezd2profzd2unitz00zzprof_walkz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzprof_walkz00()
	{
		AN_OBJECT;
		{	/* Prof/unit.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3426z00zzprof_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
